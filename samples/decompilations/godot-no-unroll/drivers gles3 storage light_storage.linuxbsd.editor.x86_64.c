
/* GLES3::LightStorage::lightmap_set_probe_capture_update_speed(float) */

void __thiscall
GLES3::LightStorage::lightmap_set_probe_capture_update_speed(LightStorage *this,float param_1)

{
  *(float *)(this + 0x1c0) = param_1;
  return;
}



/* GLES3::LightStorage::lightmap_get_probe_capture_update_speed() const */

undefined4 __thiscall
GLES3::LightStorage::lightmap_get_probe_capture_update_speed(LightStorage *this)

{
  return *(undefined4 *)(this + 0x1c0);
}



/* GLES3::LightStorage::shadow_atlas_update(RID) */

void GLES3::LightStorage::shadow_atlas_update(void)

{
  return;
}



/* GLES3::LightStorage::set_directional_shadow_count(int) */

void __thiscall GLES3::LightStorage::set_directional_shadow_count(LightStorage *this,int param_1)

{
  *(int *)(this + 0x2e0) = param_1;
  *(undefined4 *)(this + 0x2ec) = 0;
  return;
}



/* GLES3::LightStorage::light_instance_set_transform(RID, Transform3D const&) */

void __thiscall
GLES3::LightStorage::light_instance_set_transform
          (LightStorage *this,ulong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x7c))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x78)) * 0x478 +
            *(long *)(*(long *)(this + 0x68) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x78)) * 8);
    if (*(int *)(lVar2 + 0x470) == (int)(param_2 >> 0x20)) {
      uVar1 = param_3[1];
      *(undefined8 *)(lVar2 + 0x3d8) = *param_3;
      *(undefined8 *)(lVar2 + 0x3e0) = uVar1;
      uVar1 = param_3[3];
      *(undefined8 *)(lVar2 + 1000) = param_3[2];
      *(undefined8 *)(lVar2 + 0x3f0) = uVar1;
      uVar1 = param_3[5];
      *(undefined8 *)(lVar2 + 0x3f8) = param_3[4];
      *(undefined8 *)(lVar2 + 0x400) = uVar1;
      return;
    }
    if (*(int *)(lVar2 + 0x470) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("light_instance_set_transform","drivers/gles3/storage/light_storage.cpp",0x194,
                   "Parameter \"light_instance\" is null.",0,0);
  return;
}



/* GLES3::LightStorage::light_instance_set_aabb(RID, AABB const&) */

void __thiscall
GLES3::LightStorage::light_instance_set_aabb(LightStorage *this,ulong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x7c))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x78)) * 0x478 +
            *(long *)(*(long *)(this + 0x68) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x78)) * 8);
    if (*(int *)(lVar2 + 0x470) == (int)(param_2 >> 0x20)) {
      uVar1 = param_3[1];
      *(undefined8 *)(lVar2 + 0x3ac) = *param_3;
      *(undefined8 *)(lVar2 + 0x3b4) = uVar1;
      *(undefined8 *)(lVar2 + 0x3bc) = param_3[2];
      return;
    }
    if (*(int *)(lVar2 + 0x470) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("light_instance_set_aabb","drivers/gles3/storage/light_storage.cpp",0x19b,
                   "Parameter \"light_instance\" is null.",0,0);
  return;
}



/* GLES3::LightStorage::light_instance_mark_visible(RID) */

void __thiscall GLES3::LightStorage::light_instance_mark_visible(LightStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x7c))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x78)) * 0x478 +
            *(long *)(*(long *)(this + 0x68) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x78)) * 8);
    iVar1 = *(int *)(lVar2 + 0x470);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      *(undefined8 *)(lVar2 + 0x410) = *(undefined8 *)(RasterizerSceneGLES3::singleton + 0x130);
      return;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("light_instance_mark_visible","drivers/gles3/storage/light_storage.cpp",0x1b2,
                   "Parameter \"light_instance\" is null.",0,0);
  return;
}



/* GLES3::LightStorage::reflection_probe_instance_set_transform(RID, Transform3D const&) */

void __thiscall
GLES3::LightStorage::reflection_probe_instance_set_transform
          (LightStorage *this,ulong param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x184))) {
    lVar1 = *(long *)(*(long *)(this + 0x170) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x180)) * 8) +
            ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x180)) * 0x68;
    if (*(int *)(lVar1 + 0x60) == (int)(param_2 >> 0x20)) {
      uVar2 = param_3[1];
      *(undefined8 *)(lVar1 + 0x2c) = *param_3;
      *(undefined8 *)(lVar1 + 0x34) = uVar2;
      uVar2 = param_3[3];
      *(undefined8 *)(lVar1 + 0x3c) = param_3[2];
      *(undefined8 *)(lVar1 + 0x44) = uVar2;
      uVar2 = param_3[4];
      uVar3 = param_3[5];
      *(undefined1 *)(lVar1 + 0x18) = 1;
      *(undefined8 *)(lVar1 + 0x4c) = uVar2;
      *(undefined8 *)(lVar1 + 0x54) = uVar3;
      return;
    }
    if (*(int *)(lVar1 + 0x60) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("reflection_probe_instance_set_transform",
                   "drivers/gles3/storage/light_storage.cpp",0x2e1,"Parameter \"rpi\" is null.",0,0)
  ;
  return;
}



/* GLES3::LightStorage::reflection_probe_has_atlas_index(RID) */

uint __thiscall
GLES3::LightStorage::reflection_probe_has_atlas_index(LightStorage *this,ulong param_2)

{
  long lVar1;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x184))) {
    lVar1 = *(long *)(*(long *)(this + 0x170) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x180)) * 8) +
            ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x180)) * 0x68;
    if (*(int *)(lVar1 + 0x60) == (int)(param_2 >> 0x20)) {
      if (*(long *)(lVar1 + 0x10) == 0) {
        return 0;
      }
      return ~*(uint *)(lVar1 + 8) >> 0x1f;
    }
    if (*(int *)(lVar1 + 0x60) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("reflection_probe_has_atlas_index","drivers/gles3/storage/light_storage.cpp",
                   0x2e9,"Parameter \"rpi\" is null.",0,0);
  return 0;
}



/* GLES3::LightStorage::reflection_probe_instance_needs_redraw(RID) */

bool __thiscall
GLES3::LightStorage::reflection_probe_instance_needs_redraw(LightStorage *this,ulong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x184))) {
    puVar1 = (undefined8 *)
             (*(long *)(*(long *)(this + 0x170) +
                       ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x180)) * 8) +
             ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x180)) * 0x68);
    if (*(int *)(puVar1 + 0xc) == (int)(param_2 >> 0x20)) {
      if (*(char *)((long)puVar1 + 0x19) != '\0') {
        return false;
      }
      if ((*(char *)(puVar1 + 3) == '\0') &&
         (iVar2 = (**(code **)(*(long *)this + 0x220))(this,*puVar1), iVar2 != 1)) {
        return *(int *)(puVar1 + 1) == -1;
      }
      return true;
    }
    if (*(int *)(puVar1 + 0xc) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("reflection_probe_instance_needs_redraw",
                   "drivers/gles3/storage/light_storage.cpp",0x30c,"Parameter \"rpi\" is null.",0,0)
  ;
  return false;
}



/* GLES3::LightStorage::reflection_probe_instance_has_reflection(RID) */

undefined8 __thiscall
GLES3::LightStorage::reflection_probe_instance_has_reflection(LightStorage *this,ulong param_2)

{
  long lVar1;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x184))) {
    lVar1 = *(long *)(*(long *)(this + 0x170) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x180)) * 8) +
            ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x180)) * 0x68;
    if (*(int *)(lVar1 + 0x60) == (int)(param_2 >> 0x20)) {
      return CONCAT71((int7)((ulong)lVar1 >> 8),*(long *)(lVar1 + 0x10) != 0);
    }
    if (*(int *)(lVar1 + 0x60) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("reflection_probe_instance_has_reflection",
                   "drivers/gles3/storage/light_storage.cpp",799,"Parameter \"rpi\" is null.",0,0);
  return 0;
}



/* GLES3::LightStorage::lightmap_instance_set_transform(RID, Transform3D const&) */

void __thiscall
GLES3::LightStorage::lightmap_instance_set_transform
          (LightStorage *this,ulong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x23c))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x238)) * 0x40 +
            *(long *)(*(long *)(this + 0x228) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x238)) * 8);
    if (*(int *)(lVar2 + 0x38) == (int)(param_2 >> 0x20)) {
      uVar1 = param_3[1];
      *(undefined8 *)(lVar2 + 8) = *param_3;
      *(undefined8 *)(lVar2 + 0x10) = uVar1;
      uVar1 = param_3[3];
      *(undefined8 *)(lVar2 + 0x18) = param_3[2];
      *(undefined8 *)(lVar2 + 0x20) = uVar1;
      uVar1 = param_3[5];
      *(undefined8 *)(lVar2 + 0x28) = param_3[4];
      *(undefined8 *)(lVar2 + 0x30) = uVar1;
      return;
    }
    if (*(int *)(lVar2 + 0x38) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("lightmap_instance_set_transform","drivers/gles3/storage/light_storage.cpp",0x4e6
                   ,"Parameter \"li\" is null.",0,0);
  return;
}



/* GLES3::LightStorage::reflection_atlas_get_size(RID) const */

undefined4 __thiscall
GLES3::LightStorage::reflection_atlas_get_size(LightStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 300))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x128)) * 0x50 +
            *(long *)(*(long *)(this + 0x118) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x128)) * 8);
    iVar1 = *(int *)(lVar2 + 0x48);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar2 + 4);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("reflection_atlas_get_size","drivers/gles3/storage/light_storage.cpp",0x29f,
                   "Parameter \"ra\" is null.",0,0);
  return 0;
}



/* GLES3::LightStorage::reflection_probe_instance_free(RID) */

undefined1  [16] __thiscall
GLES3::LightStorage::reflection_probe_instance_free(LightStorage *this,ulong param_2)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  long lStack_28;
  ulong uStack_20;
  
  uStack_20 = 0x100829;
  (**(code **)(*(long *)this + 0x2a0))();
  if (*(uint *)(this + 0x184) <= (uint)param_2) {
    uVar4 = 0x161;
LAB_001008b2:
    auVar5 = _err_print_error(&_LC19,"./core/templates/rid_owner.h",uVar4,"Method/function failed.",
                              0,0);
    return auVar5;
  }
  lVar1 = *(long *)(*(long *)(this + 0x170) +
                   ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x180)) * 8) +
          ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x180)) * 0x68;
  iVar2 = *(int *)(lVar1 + 0x60);
  if (iVar2 < 0) {
    lStack_28 = 0;
    _err_print_error(&_LC19,"./core/templates/rid_owner.h",0x16c,"Method/function failed.",
                     "Attempted to free an uninitialized or invalid RID",0);
  }
  else {
    if ((int)(param_2 >> 0x20) != iVar2) {
      uVar4 = 0x171;
      goto LAB_001008b2;
    }
    *(undefined4 *)(lVar1 + 0x60) = 0xffffffff;
    uVar3 = *(int *)(this + 0x188) - 1;
    *(uint *)(this + 0x188) = uVar3;
    uStack_20 = (ulong)uVar3 % (ulong)*(uint *)(this + 0x180);
    lStack_28 = *(long *)(*(long *)(this + 0x178) +
                         ((ulong)uVar3 / (ulong)*(uint *)(this + 0x180)) * 8);
    *(uint *)(lStack_28 + uStack_20 * 4) = (uint)param_2;
  }
  auVar5._8_8_ = uStack_20;
  auVar5._0_8_ = lStack_28;
  return auVar5;
}



/* GLES3::LightStorage::lightmap_instance_free(RID) */

void __thiscall GLES3::LightStorage::lightmap_instance_free(LightStorage *this,ulong param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  
  if (*(uint *)(this + 0x23c) <= (uint)param_2) {
    _err_print_error(&_LC19,"./core/templates/rid_owner.h",0x161,"Method/function failed.",0,0);
    return;
  }
  lVar3 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x238)) * 0x40 +
          *(long *)(*(long *)(this + 0x228) +
                   ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x238)) * 8);
  iVar1 = *(int *)(lVar3 + 0x38);
  if (-1 < iVar1) {
    if ((int)(param_2 >> 0x20) == iVar1) {
      *(undefined4 *)(lVar3 + 0x38) = 0xffffffff;
      uVar2 = *(int *)(this + 0x240) - 1;
      *(uint *)(this + 0x240) = uVar2;
      *(uint *)(*(long *)(*(long *)(this + 0x230) +
                         ((ulong)uVar2 / (ulong)*(uint *)(this + 0x238)) * 8) +
               ((ulong)uVar2 % (ulong)*(uint *)(this + 0x238)) * 4) = (uint)param_2;
      return;
    }
    _err_print_error(&_LC19,"./core/templates/rid_owner.h",0x171,"Method/function failed.",0,0);
    return;
  }
  _err_print_error(&_LC19,"./core/templates/rid_owner.h",0x16c,"Method/function failed.",
                   "Attempted to free an uninitialized or invalid RID",0,0);
  return;
}



/* GLES3::LightStorage::light_set_color(RID, Color const&) */

void __thiscall
GLES3::LightStorage::light_set_color(LightStorage *this,ulong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0xe8 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    if (*(int *)(lVar2 + 0xe0) == (int)(param_2 >> 0x20)) {
      uVar1 = param_3[1];
      *(undefined8 *)(lVar2 + 0x58) = *param_3;
      *(undefined8 *)(lVar2 + 0x60) = uVar1;
      return;
    }
    if (*(int *)(lVar2 + 0xe0) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("light_set_color","drivers/gles3/storage/light_storage.cpp",0x7e,
                   "Parameter \"light\" is null.",0,0);
  return;
}



/* GLES3::LightStorage::light_set_negative(RID, bool) */

void __thiscall
GLES3::LightStorage::light_set_negative(LightStorage *this,ulong param_2,undefined1 param_3)

{
  int iVar1;
  long lVar2;
  
  if (param_2 != 0) {
    if ((uint)param_2 < *(uint *)(this + 0x24)) {
      lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0xe8 +
              *(long *)(*(long *)(this + 0x10) +
                       ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
      iVar1 = *(int *)(lVar2 + 0xe0);
      if (iVar1 == (int)(param_2 >> 0x20)) {
        *(undefined1 *)(lVar2 + 0x71) = param_3;
        return;
      }
      if (iVar1 + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
  }
  _err_print_error("light_set_negative","drivers/gles3/storage/light_storage.cpp",200,
                   "Parameter \"light\" is null.",0,0);
  return;
}



/* GLES3::LightStorage::light_get_shadow_caster_mask(RID) const */

undefined4 __thiscall
GLES3::LightStorage::light_get_shadow_caster_mask(LightStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0xe8 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0xe0);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar2 + 0x80);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("light_get_shadow_caster_mask","drivers/gles3/storage/light_storage.cpp",0xe3,
                   "Parameter \"light\" is null.",0,0);
  return 0;
}



/* GLES3::LightStorage::light_set_distance_fade(RID, bool, float, float, float) */

void __thiscall
GLES3::LightStorage::light_set_distance_fade
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,LightStorage *this,ulong param_5
          ,undefined1 param_6)

{
  long lVar1;
  
  if ((param_5 != 0) && ((uint)param_5 < *(uint *)(this + 0x24))) {
    lVar1 = ((param_5 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0xe8 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_5 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    if (*(int *)(lVar1 + 0xe0) == (int)(param_5 >> 0x20)) {
      *(undefined1 *)(lVar1 + 0x84) = param_6;
      *(ulong *)(lVar1 + 0x88) = CONCAT44(param_2,param_1);
      *(undefined4 *)(lVar1 + 0x90) = param_3;
      return;
    }
    if (*(int *)(lVar1 + 0xe0) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("light_set_distance_fade","drivers/gles3/storage/light_storage.cpp",0xea,
                   "Parameter \"light\" is null.",0,0);
  return;
}



/* GLES3::LightStorage::light_omni_get_shadow_mode(RID) */

undefined4 __thiscall
GLES3::LightStorage::light_omni_get_shadow_mode(LightStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0xe8 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0xe0);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar2 + 0x94);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("light_omni_get_shadow_mode","drivers/gles3/storage/light_storage.cpp",0x112,
                   "Parameter \"light\" is null.",0,0);
  return 1;
}



/* GLES3::LightStorage::light_directional_get_blend_splits(RID) const */

undefined1 __thiscall
GLES3::LightStorage::light_directional_get_blend_splits(LightStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0xe8 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0xe0);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined1 *)(lVar2 + 0x9c);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("light_directional_get_blend_splits","drivers/gles3/storage/light_storage.cpp",
                   299,"Parameter \"light\" is null.",0,0);
  return 0;
}



/* GLES3::LightStorage::light_directional_set_sky_mode(RID,
   RenderingServer::LightDirectionalSkyMode) */

void __thiscall
GLES3::LightStorage::light_directional_set_sky_mode
          (LightStorage *this,ulong param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  
  if (param_2 != 0) {
    if ((uint)param_2 < *(uint *)(this + 0x24)) {
      lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0xe8 +
              *(long *)(*(long *)(this + 0x10) +
                       ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
      iVar1 = *(int *)(lVar2 + 0xe0);
      if (iVar1 == (int)(param_2 >> 0x20)) {
        *(undefined4 *)(lVar2 + 0xa0) = param_3;
        return;
      }
      if (iVar1 + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
  }
  _err_print_error("light_directional_set_sky_mode","drivers/gles3/storage/light_storage.cpp",0x132,
                   "Parameter \"light\" is null.",0,0);
  return;
}



/* GLES3::LightStorage::light_directional_get_sky_mode(RID) const */

undefined4 __thiscall
GLES3::LightStorage::light_directional_get_sky_mode(LightStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0xe8 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0xe0);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar2 + 0xa0);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("light_directional_get_sky_mode","drivers/gles3/storage/light_storage.cpp",0x139,
                   "Parameter \"light\" is null.",0,0);
  return 0;
}



/* GLES3::LightStorage::light_directional_get_shadow_mode(RID) */

undefined4 __thiscall
GLES3::LightStorage::light_directional_get_shadow_mode(LightStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0xe8 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0xe0);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar2 + 0x98);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("light_directional_get_shadow_mode","drivers/gles3/storage/light_storage.cpp",
                   0x140,"Parameter \"light\" is null.",0,0);
  return 0;
}



/* GLES3::LightStorage::light_get_bake_mode(RID) */

undefined4 __thiscall GLES3::LightStorage::light_get_bake_mode(LightStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0xe8 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0xe0);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar2 + 0x74);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("light_get_bake_mode","drivers/gles3/storage/light_storage.cpp",0x147,
                   "Parameter \"light\" is null.",0,0);
  return 0;
}



/* GLES3::LightStorage::light_get_version(RID) const */

undefined8 __thiscall GLES3::LightStorage::light_get_version(LightStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0xe8 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0xe0);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined8 *)(lVar2 + 0xa8);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("light_get_version","drivers/gles3/storage/light_storage.cpp",0x14e,
                   "Parameter \"light\" is null.",0,0);
  return 0;
}



/* GLES3::LightStorage::light_get_cull_mask(RID) const */

undefined4 __thiscall GLES3::LightStorage::light_get_cull_mask(LightStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0xe8 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0xe0);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar2 + 0x7c);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("light_get_cull_mask","drivers/gles3/storage/light_storage.cpp",0x155,
                   "Parameter \"light\" is null.",0,0);
  return 0;
}



/* GLES3::LightStorage::reflection_probe_set_intensity(RID, float) */

void __thiscall
GLES3::LightStorage::reflection_probe_set_intensity
          (undefined4 param_1,LightStorage *this,ulong param_3)

{
  int iVar1;
  long lVar2;
  
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(this + 0xd4))) {
    lVar2 = ((param_3 & 0xffffffff) % (ulong)*(uint *)(this + 0xd0)) * 0x90 +
            *(long *)(*(long *)(this + 0xc0) +
                     ((param_3 & 0xffffffff) / (ulong)*(uint *)(this + 0xd0)) * 8);
    iVar1 = *(int *)(lVar2 + 0x88);
    if (iVar1 == (int)(param_3 >> 0x20)) {
      *(undefined4 *)(lVar2 + 8) = param_1;
      return;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("reflection_probe_set_intensity","drivers/gles3/storage/light_storage.cpp",0x1d4,
                   "Parameter \"reflection_probe\" is null.",0,0);
  return;
}



/* GLES3::LightStorage::reflection_probe_set_blend_distance(RID, float) */

void __thiscall
GLES3::LightStorage::reflection_probe_set_blend_distance
          (undefined4 param_1,LightStorage *this,ulong param_3)

{
  int iVar1;
  long lVar2;
  
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(this + 0xd4))) {
    lVar2 = ((param_3 & 0xffffffff) % (ulong)*(uint *)(this + 0xd0)) * 0x90 +
            *(long *)(*(long *)(this + 0xc0) +
                     ((param_3 & 0xffffffff) / (ulong)*(uint *)(this + 0xd0)) * 8);
    iVar1 = *(int *)(lVar2 + 0x88);
    if (iVar1 == (int)(param_3 >> 0x20)) {
      *(undefined4 *)(lVar2 + 0xc) = param_1;
      return;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("reflection_probe_set_blend_distance","drivers/gles3/storage/light_storage.cpp",
                   0x1db,"Parameter \"reflection_probe\" is null.",0,0);
  return;
}



/* GLES3::LightStorage::reflection_probe_set_ambient_mode(RID,
   RenderingServer::ReflectionProbeAmbientMode) */

void __thiscall
GLES3::LightStorage::reflection_probe_set_ambient_mode
          (LightStorage *this,ulong param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0xd4))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0xd0)) * 0x90 +
            *(long *)(*(long *)(this + 0xc0) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0xd0)) * 8);
    iVar1 = *(int *)(lVar2 + 0x88);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      *(undefined4 *)(lVar2 + 0x10) = param_3;
      return;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("reflection_probe_set_ambient_mode","drivers/gles3/storage/light_storage.cpp",
                   0x1e2,"Parameter \"reflection_probe\" is null.",0,0);
  return;
}



/* GLES3::LightStorage::reflection_probe_set_ambient_color(RID, Color const&) */

void __thiscall
GLES3::LightStorage::reflection_probe_set_ambient_color
          (LightStorage *this,ulong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0xd4))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0xd0)) * 0x90 +
            *(long *)(*(long *)(this + 0xc0) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0xd0)) * 8);
    if (*(int *)(lVar2 + 0x88) == (int)(param_2 >> 0x20)) {
      uVar1 = param_3[1];
      *(undefined8 *)(lVar2 + 0x14) = *param_3;
      *(undefined8 *)(lVar2 + 0x1c) = uVar1;
      return;
    }
    if (*(int *)(lVar2 + 0x88) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("reflection_probe_set_ambient_color","drivers/gles3/storage/light_storage.cpp",
                   0x1e9,"Parameter \"reflection_probe\" is null.",0,0);
  return;
}



/* GLES3::LightStorage::reflection_probe_set_ambient_energy(RID, float) */

void __thiscall
GLES3::LightStorage::reflection_probe_set_ambient_energy
          (undefined4 param_1,LightStorage *this,ulong param_3)

{
  int iVar1;
  long lVar2;
  
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(this + 0xd4))) {
    lVar2 = ((param_3 & 0xffffffff) % (ulong)*(uint *)(this + 0xd0)) * 0x90 +
            *(long *)(*(long *)(this + 0xc0) +
                     ((param_3 & 0xffffffff) / (ulong)*(uint *)(this + 0xd0)) * 8);
    iVar1 = *(int *)(lVar2 + 0x88);
    if (iVar1 == (int)(param_3 >> 0x20)) {
      *(undefined4 *)(lVar2 + 0x24) = param_1;
      return;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("reflection_probe_set_ambient_energy","drivers/gles3/storage/light_storage.cpp",
                   0x1f0,"Parameter \"reflection_probe\" is null.",0,0);
  return;
}



/* GLES3::LightStorage::reflection_probe_set_enable_box_projection(RID, bool) */

void __thiscall
GLES3::LightStorage::reflection_probe_set_enable_box_projection
          (LightStorage *this,ulong param_2,undefined1 param_3)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0xd4))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0xd0)) * 0x90 +
            *(long *)(*(long *)(this + 0xc0) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0xd0)) * 8);
    iVar1 = *(int *)(lVar2 + 0x88);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      *(undefined1 *)(lVar2 + 0x45) = param_3;
      return;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("reflection_probe_set_enable_box_projection",
                   "drivers/gles3/storage/light_storage.cpp",0x217,
                   "Parameter \"reflection_probe\" is null.",0,0);
  return;
}



/* GLES3::LightStorage::reflection_probe_set_resolution(RID, int) */

void __thiscall
GLES3::LightStorage::reflection_probe_set_resolution
          (LightStorage *this,ulong param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0xd4))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0xd0)) * 0x90 +
            *(long *)(*(long *)(this + 0xc0) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0xd0)) * 8);
    iVar1 = *(int *)(lVar2 + 0x88);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      *(undefined4 *)(lVar2 + 4) = param_3;
      return;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("reflection_probe_set_resolution","drivers/gles3/storage/light_storage.cpp",0x236
                   ,"Parameter \"reflection_probe\" is null.",0,0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GLES3::LightStorage::reflection_probe_get_aabb(RID) const */

undefined8 *
GLES3::LightStorage::reflection_probe_get_aabb(undefined8 *param_1,long param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  long in_FS_OFFSET;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(param_2 + 0xd4))) {
    lVar2 = ((param_3 & 0xffffffff) % (ulong)*(uint *)(param_2 + 0xd0)) * 0x90 +
            *(long *)(*(long *)(param_2 + 0xc0) +
                     ((param_3 & 0xffffffff) / (ulong)*(uint *)(param_2 + 0xd0)) * 8);
    if (*(int *)(lVar2 + 0x88) == (int)(param_3 >> 0x20)) {
      uStack_1c = (undefined4)*(undefined8 *)(lVar2 + 0x2c);
      uStack_18 = (undefined4)((ulong)*(undefined8 *)(lVar2 + 0x2c) >> 0x20);
      fVar4 = _LC46 * (float)*(undefined8 *)(lVar2 + 0x2c);
      fVar5 = _UNK_0011659c * (float)((ulong)*(undefined8 *)(lVar2 + 0x2c) >> 0x20);
      fVar3 = _LC46 * *(float *)(lVar2 + 0x34);
      param_1[2] = CONCAT44(*(undefined4 *)(lVar2 + 0x34),uStack_18);
      *param_1 = CONCAT44(fVar5,fVar4);
      param_1[1] = CONCAT44(uStack_1c,fVar3);
      goto LAB_001019be;
    }
    if (*(int *)(lVar2 + 0x88) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("reflection_probe_get_aabb","drivers/gles3/storage/light_storage.cpp",0x23d,
                   "Parameter \"reflection_probe\" is null.",0,0);
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined8 *)((long)param_1 + 0xc) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
LAB_001019be:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GLES3::LightStorage::reflection_probe_get_update_mode(RID) const */

undefined4 __thiscall
GLES3::LightStorage::reflection_probe_get_update_mode(LightStorage *this,ulong param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0xd4))) {
    puVar2 = (undefined4 *)
             (((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0xd0)) * 0x90 +
             *(long *)(*(long *)(this + 0xc0) +
                      ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0xd0)) * 8));
    iVar1 = puVar2[0x22];
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *puVar2;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("reflection_probe_get_update_mode","drivers/gles3/storage/light_storage.cpp",
                   0x248,"Parameter \"reflection_probe\" is null.",0,0);
  return 0;
}



/* GLES3::LightStorage::reflection_probe_get_cull_mask(RID) const */

undefined4 __thiscall
GLES3::LightStorage::reflection_probe_get_cull_mask(LightStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0xd4))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0xd0)) * 0x90 +
            *(long *)(*(long *)(this + 0xc0) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0xd0)) * 8);
    iVar1 = *(int *)(lVar2 + 0x88);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar2 + 0x48);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("reflection_probe_get_cull_mask","drivers/gles3/storage/light_storage.cpp",0x24f,
                   "Parameter \"reflection_probe\" is null.",0,0);
  return 0;
}



/* GLES3::LightStorage::reflection_probe_get_reflection_mask(RID) const */

undefined4 __thiscall
GLES3::LightStorage::reflection_probe_get_reflection_mask(LightStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0xd4))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0xd0)) * 0x90 +
            *(long *)(*(long *)(this + 0xc0) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0xd0)) * 8);
    iVar1 = *(int *)(lVar2 + 0x88);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar2 + 0x4c);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("reflection_probe_get_reflection_mask","drivers/gles3/storage/light_storage.cpp",
                   0x256,"Parameter \"reflection_probe\" is null.",0,0);
  return 0;
}



/* GLES3::LightStorage::reflection_probe_get_size(RID) const */

undefined1  [16] __thiscall
GLES3::LightStorage::reflection_probe_get_size(LightStorage *this,ulong param_2)

{
  long lVar1;
  long lVar2;
  long in_FS_OFFSET;
  undefined1 auVar3 [16];
  undefined8 local_1c;
  undefined4 local_14;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0xd4))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0xd0)) * 0x90 +
            *(long *)(*(long *)(this + 0xc0) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0xd0)) * 8);
    if (*(int *)(lVar2 + 0x88) == (int)(param_2 >> 0x20)) {
      local_1c = *(undefined8 *)(lVar2 + 0x2c);
      local_14 = *(undefined4 *)(lVar2 + 0x34);
      goto LAB_00101d4b;
    }
    if (*(int *)(lVar2 + 0x88) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("reflection_probe_get_size","drivers/gles3/storage/light_storage.cpp",0x25d,
                   "Parameter \"reflection_probe\" is null.",0,0);
  local_14 = 0;
  local_1c = 0;
LAB_00101d4b:
  auVar3._8_4_ = local_14;
  auVar3._0_8_ = local_1c;
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar3._12_4_ = 0;
    return auVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GLES3::LightStorage::reflection_probe_get_origin_offset(RID) const */

undefined1  [16] __thiscall
GLES3::LightStorage::reflection_probe_get_origin_offset(LightStorage *this,ulong param_2)

{
  long lVar1;
  long lVar2;
  long in_FS_OFFSET;
  undefined1 auVar3 [16];
  undefined8 local_1c;
  undefined4 local_14;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0xd4))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0xd0)) * 0x90 +
            *(long *)(*(long *)(this + 0xc0) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0xd0)) * 8);
    if (*(int *)(lVar2 + 0x88) == (int)(param_2 >> 0x20)) {
      local_1c = *(undefined8 *)(lVar2 + 0x38);
      local_14 = *(undefined4 *)(lVar2 + 0x40);
      goto LAB_00101e6b;
    }
    if (*(int *)(lVar2 + 0x88) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("reflection_probe_get_origin_offset","drivers/gles3/storage/light_storage.cpp",
                   0x264,"Parameter \"reflection_probe\" is null.",0,0);
  local_14 = 0;
  local_1c = 0;
LAB_00101e6b:
  auVar3._8_4_ = local_14;
  auVar3._0_8_ = local_1c;
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar3._12_4_ = 0;
    return auVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GLES3::LightStorage::reflection_probe_get_origin_max_distance(RID) const */

undefined4 __thiscall
GLES3::LightStorage::reflection_probe_get_origin_max_distance(LightStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0xd4))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0xd0)) * 0x90 +
            *(long *)(*(long *)(this + 0xc0) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0xd0)) * 8);
    iVar1 = *(int *)(lVar2 + 0x88);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar2 + 0x28);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("reflection_probe_get_origin_max_distance",
                   "drivers/gles3/storage/light_storage.cpp",0x26b,
                   "Parameter \"reflection_probe\" is null.",0,0);
  return 0;
}



/* GLES3::LightStorage::reflection_probe_renders_shadows(RID) const */

undefined1 __thiscall
GLES3::LightStorage::reflection_probe_renders_shadows(LightStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0xd4))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0xd0)) * 0x90 +
            *(long *)(*(long *)(this + 0xc0) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0xd0)) * 8);
    iVar1 = *(int *)(lVar2 + 0x88);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined1 *)(lVar2 + 0x46);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("reflection_probe_renders_shadows","drivers/gles3/storage/light_storage.cpp",
                   0x272,"Parameter \"reflection_probe\" is null.",0,0);
  return 0;
}



/* GLES3::LightStorage::reflection_probe_get_mesh_lod_threshold(RID) const */

undefined4 __thiscall
GLES3::LightStorage::reflection_probe_get_mesh_lod_threshold(LightStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0xd4))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0xd0)) * 0x90 +
            *(long *)(*(long *)(this + 0xc0) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0xd0)) * 8);
    iVar1 = *(int *)(lVar2 + 0x88);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar2 + 0x50);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("reflection_probe_get_mesh_lod_threshold",
                   "drivers/gles3/storage/light_storage.cpp",0x281,
                   "Parameter \"reflection_probe\" is null.",0,0);
  return 0;
}



/* GLES3::LightStorage::lightmap_set_probe_bounds(RID, AABB const&) */

void __thiscall
GLES3::LightStorage::lightmap_set_probe_bounds(LightStorage *this,ulong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x1e4))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x1e0)) * 0xb8 +
            *(long *)(*(long *)(this + 0x1d0) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x1e0)) * 8);
    if (*(int *)(lVar2 + 0xb0) == (int)(param_2 >> 0x20)) {
      uVar1 = param_3[1];
      *(undefined8 *)(lVar2 + 0x14) = *param_3;
      *(undefined8 *)(lVar2 + 0x1c) = uVar1;
      *(undefined8 *)(lVar2 + 0x24) = param_3[2];
      return;
    }
    if (*(int *)(lVar2 + 0xb0) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("lightmap_set_probe_bounds","drivers/gles3/storage/light_storage.cpp",0x43e,
                   "Parameter \"lightmap\" is null.",0,0);
  return;
}



/* GLES3::LightStorage::lightmap_set_probe_interior(RID, bool) */

void __thiscall
GLES3::LightStorage::lightmap_set_probe_interior
          (LightStorage *this,ulong param_2,undefined1 param_3)

{
  int iVar1;
  long lVar2;
  
  if (param_2 != 0) {
    if ((uint)param_2 < *(uint *)(this + 0x1e4)) {
      lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x1e0)) * 0xb8 +
              *(long *)(*(long *)(this + 0x1d0) +
                       ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x1e0)) * 8);
      iVar1 = *(int *)(lVar2 + 0xb0);
      if (iVar1 == (int)(param_2 >> 0x20)) {
        *(undefined1 *)(lVar2 + 0x11) = param_3;
        return;
      }
      if (iVar1 + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
  }
  _err_print_error("lightmap_set_probe_interior","drivers/gles3/storage/light_storage.cpp",0x444,
                   "Parameter \"lightmap\" is null.",0,0);
  return;
}



/* GLES3::LightStorage::lightmap_set_baked_exposure_normalization(RID, float) */

void __thiscall
GLES3::LightStorage::lightmap_set_baked_exposure_normalization
          (undefined4 param_1,LightStorage *this,ulong param_3)

{
  int iVar1;
  long lVar2;
  
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(this + 0x1e4))) {
    lVar2 = ((param_3 & 0xffffffff) % (ulong)*(uint *)(this + 0x1e0)) * 0xb8 +
            *(long *)(*(long *)(this + 0x1d0) +
                     ((param_3 & 0xffffffff) / (ulong)*(uint *)(this + 0x1e0)) * 8);
    iVar1 = *(int *)(lVar2 + 0xb0);
    if (iVar1 == (int)(param_3 >> 0x20)) {
      *(undefined4 *)(lVar2 + 0x2c) = param_1;
      return;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("lightmap_set_baked_exposure_normalization",
                   "drivers/gles3/storage/light_storage.cpp",0x45a,"Parameter \"lightmap\" is null."
                   ,0,0);
  return;
}



/* GLES3::LightStorage::lightmap_get_aabb(RID) const */

undefined8 * GLES3::LightStorage::lightmap_get_aabb(undefined8 *param_1,long param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(param_2 + 0x1e4))) {
    lVar3 = ((param_3 & 0xffffffff) % (ulong)*(uint *)(param_2 + 0x1e0)) * 0xb8 +
            *(long *)(*(long *)(param_2 + 0x1d0) +
                     ((param_3 & 0xffffffff) / (ulong)*(uint *)(param_2 + 0x1e0)) * 8);
    if (*(int *)(lVar3 + 0xb0) == (int)(param_3 >> 0x20)) {
      uVar1 = *(undefined8 *)(lVar3 + 0x14);
      uVar2 = *(undefined8 *)(lVar3 + 0x1c);
      param_1[2] = *(undefined8 *)(lVar3 + 0x24);
      *param_1 = uVar1;
      param_1[1] = uVar2;
      return param_1;
    }
    if (*(int *)(lVar3 + 0xb0) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("lightmap_get_aabb","drivers/gles3/storage/light_storage.cpp",0x479,
                   "Parameter \"lightmap\" is null.",0,0);
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined8 *)((long)param_1 + 0xc) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  return param_1;
}



/* GLES3::LightStorage::lightmap_is_interior(RID) const */

undefined1 __thiscall GLES3::LightStorage::lightmap_is_interior(LightStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x1e4))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x1e0)) * 0xb8 +
            *(long *)(*(long *)(this + 0x1d0) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x1e0)) * 8);
    iVar1 = *(int *)(lVar2 + 0xb0);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined1 *)(lVar2 + 0x11);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("lightmap_is_interior","drivers/gles3/storage/light_storage.cpp",0x4b1,
                   "Parameter \"lightmap\" is null.",0,0);
  return 0;
}



/* GLES3::LightStorage::lightmap_get_shadowmask_mode(RID) */

undefined4 __thiscall
GLES3::LightStorage::lightmap_get_shadowmask_mode(LightStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x1e4))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x1e0)) * 0xb8 +
            *(long *)(*(long *)(this + 0x1d0) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x1e0)) * 8);
    iVar1 = *(int *)(lVar2 + 0xb0);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar2 + 0x3c);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("lightmap_get_shadowmask_mode","drivers/gles3/storage/light_storage.cpp",0x4cd,
                   "Parameter \"lightmap\" is null.",0,0);
  return 0;
}



/* GLES3::LightStorage::lightmap_set_shadowmask_mode(RID, RenderingServer::ShadowmaskMode) */

void __thiscall
GLES3::LightStorage::lightmap_set_shadowmask_mode
          (LightStorage *this,ulong param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  
  if (param_2 != 0) {
    if ((uint)param_2 < *(uint *)(this + 0x1e4)) {
      lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x1e0)) * 0xb8 +
              *(long *)(*(long *)(this + 0x1d0) +
                       ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x1e0)) * 8);
      iVar1 = *(int *)(lVar2 + 0xb0);
      if (iVar1 == (int)(param_2 >> 0x20)) {
        *(undefined4 *)(lVar2 + 0x3c) = param_3;
        return;
      }
      if (iVar1 + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
  }
  _err_print_error("lightmap_set_shadowmask_mode","drivers/gles3/storage/light_storage.cpp",0x4d4,
                   "Parameter \"lightmap\" is null.",0,0);
  return;
}



/* GLES3::LightStorage::light_instance_set_shadow_transform(RID, Projection const&, Transform3D
   const&, float, float, int, float, float, float, Vector2 const&) */

void __thiscall
GLES3::LightStorage::light_instance_set_shadow_transform
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,LightStorage *this,ulong param_7,undefined8 *param_8,
          undefined8 *param_9,uint param_10,undefined8 *param_11)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  if ((param_7 != 0) && ((uint)param_7 < *(uint *)(this + 0x7c))) {
    lVar7 = ((param_7 & 0xffffffff) % (ulong)*(uint *)(this + 0x78)) * 0x478 +
            *(long *)(*(long *)(this + 0x68) +
                     ((param_7 & 0xffffffff) / (ulong)*(uint *)(this + 0x78)) * 8);
    if (*(int *)(lVar7 + 0x470) == (int)(param_7 >> 0x20)) {
      if (param_10 < 6) {
        uVar3 = param_8[1];
        puVar1 = (undefined8 *)(lVar7 + (long)(int)param_10 * 0x9c);
        *puVar1 = *param_8;
        puVar1[1] = uVar3;
        uVar3 = param_8[3];
        puVar1[2] = param_8[2];
        puVar1[3] = uVar3;
        uVar3 = *param_9;
        uVar4 = param_9[1];
        uVar5 = param_8[5];
        puVar1[4] = param_8[4];
        puVar1[5] = uVar5;
        uVar5 = param_8[6];
        uVar6 = param_8[7];
        puVar1[8] = uVar3;
        puVar1[9] = uVar4;
        uVar3 = param_9[2];
        uVar4 = param_9[3];
        puVar1[6] = uVar5;
        puVar1[7] = uVar6;
        puVar1[10] = uVar3;
        puVar1[0xb] = uVar4;
        uVar3 = param_9[4];
        uVar4 = param_9[5];
        *(undefined4 *)(puVar1 + 0x10) = param_5;
        puVar1[0xc] = uVar3;
        puVar1[0xd] = uVar4;
        puVar2 = (undefined4 *)(lVar7 + 0x70 + (long)(int)param_10 * 0x9c);
        *puVar2 = param_1;
        puVar2[1] = param_2;
        puVar2[2] = param_4;
        puVar2[3] = param_3;
        *(undefined8 *)((long)puVar1 + 0x94) = *param_11;
      }
      else {
        _err_print_index_error
                  ("light_instance_set_shadow_transform","drivers/gles3/storage/light_storage.cpp",
                   0x1a4,(long)(int)param_10,6,"p_pass","6","",false,false);
      }
      return;
    }
    if (*(int *)(lVar7 + 0x470) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("light_instance_set_shadow_transform","drivers/gles3/storage/light_storage.cpp",
                   0x1a2,"Parameter \"light_instance\" is null.",0,0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GLES3::LightStorage::light_set_param(RID, RenderingServer::LightParam, float) */

void __thiscall
GLES3::LightStorage::light_set_param(float param_1,LightStorage *this,ulong param_3,uint param_4)

{
  float fVar1;
  long lVar2;
  
  if (param_3 != 0) {
    if ((uint)param_3 < *(uint *)(this + 0x24)) {
      lVar2 = ((param_3 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0xe8 +
              *(long *)(*(long *)(this + 0x10) +
                       ((param_3 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
      if (*(int *)(lVar2 + 0xe0) == (int)(param_3 >> 0x20)) {
        if (param_4 < 0x15) {
          fVar1 = *(float *)(lVar2 + 4 + (long)(int)param_4 * 4);
          if (fVar1 != param_1) {
            if (param_4 < 0x11) {
              if ((1L << ((byte)param_4 & 0x3f) & 0x1de90U) == 0) {
                if ((param_4 == 5) && (__LC71 < (double)fVar1 != __LC71 < (double)param_1)) {
                  Dependency::changed_notify(lVar2 + 0xb0,0xb);
                }
              }
              else {
                *(long *)(lVar2 + 0xa8) = *(long *)(lVar2 + 0xa8) + 1;
                Dependency::changed_notify(lVar2 + 0xb0,10);
              }
            }
            *(float *)(lVar2 + 4 + (long)(int)param_4 * 4) = param_1;
          }
        }
        else {
          _err_print_index_error
                    ("light_set_param","drivers/gles3/storage/light_storage.cpp",0x86,(ulong)param_4
                     ,0x15,"p_param","RenderingServer::LIGHT_PARAM_MAX","",false,false);
        }
        return;
      }
      if (*(int *)(lVar2 + 0xe0) + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
  }
  _err_print_error("light_set_param","drivers/gles3/storage/light_storage.cpp",0x85,
                   "Parameter \"light\" is null.",0,0);
  return;
}



/* GLES3::LightStorage::light_set_shadow(RID, bool) */

void __thiscall
GLES3::LightStorage::light_set_shadow(LightStorage *this,ulong param_2,undefined1 param_3)

{
  long lVar1;
  
  if (param_2 != 0) {
    if ((uint)param_2 < *(uint *)(this + 0x24)) {
      lVar1 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0xe8 +
              *(long *)(*(long *)(this + 0x10) +
                       ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
      if (*(int *)(lVar1 + 0xe0) == (int)(param_2 >> 0x20)) {
        *(long *)(lVar1 + 0xa8) = *(long *)(lVar1 + 0xa8) + 1;
        *(undefined1 *)(lVar1 + 0x70) = param_3;
        Dependency::changed_notify(lVar1 + 0xb0,10);
        return;
      }
      if (*(int *)(lVar1 + 0xe0) + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
  }
  _err_print_error("light_set_shadow","drivers/gles3/storage/light_storage.cpp",0xa8,
                   "Parameter \"light\" is null.",0,0);
  return;
}



/* GLES3::LightStorage::light_set_cull_mask(RID, unsigned int) */

void __thiscall
GLES3::LightStorage::light_set_cull_mask(LightStorage *this,ulong param_2,undefined4 param_3)

{
  long lVar1;
  
  if (param_2 != 0) {
    if ((uint)param_2 < *(uint *)(this + 0x24)) {
      lVar1 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0xe8 +
              *(long *)(*(long *)(this + 0x10) +
                       ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
      if (*(int *)(lVar1 + 0xe0) == (int)(param_2 >> 0x20)) {
        *(long *)(lVar1 + 0xa8) = *(long *)(lVar1 + 0xa8) + 1;
        *(undefined4 *)(lVar1 + 0x7c) = param_3;
        Dependency::changed_notify(lVar1 + 0xb0,10);
        return;
      }
      if (*(int *)(lVar1 + 0xe0) + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
  }
  _err_print_error("light_set_cull_mask","drivers/gles3/storage/light_storage.cpp",0xcf,
                   "Parameter \"light\" is null.",0,0);
  return;
}



/* GLES3::LightStorage::light_set_shadow_caster_mask(RID, unsigned int) */

void __thiscall
GLES3::LightStorage::light_set_shadow_caster_mask
          (LightStorage *this,ulong param_2,undefined4 param_3)

{
  long lVar1;
  
  if (param_2 != 0) {
    if ((uint)param_2 < *(uint *)(this + 0x24)) {
      lVar1 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0xe8 +
              *(long *)(*(long *)(this + 0x10) +
                       ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
      if (*(int *)(lVar1 + 0xe0) == (int)(param_2 >> 0x20)) {
        *(long *)(lVar1 + 0xa8) = *(long *)(lVar1 + 0xa8) + 1;
        *(undefined4 *)(lVar1 + 0x80) = param_3;
        Dependency::changed_notify(lVar1 + 0xb0,10);
        return;
      }
      if (*(int *)(lVar1 + 0xe0) + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
  }
  _err_print_error("light_set_shadow_caster_mask","drivers/gles3/storage/light_storage.cpp",0xd9,
                   "Parameter \"light\" is null.",0,0);
  return;
}



/* GLES3::LightStorage::light_set_reverse_cull_face_mode(RID, bool) */

void __thiscall
GLES3::LightStorage::light_set_reverse_cull_face_mode
          (LightStorage *this,ulong param_2,undefined1 param_3)

{
  long lVar1;
  
  if (param_2 != 0) {
    if ((uint)param_2 < *(uint *)(this + 0x24)) {
      lVar1 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0xe8 +
              *(long *)(*(long *)(this + 0x10) +
                       ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
      if (*(int *)(lVar1 + 0xe0) == (int)(param_2 >> 0x20)) {
        *(long *)(lVar1 + 0xa8) = *(long *)(lVar1 + 0xa8) + 1;
        *(undefined1 *)(lVar1 + 0x72) = param_3;
        Dependency::changed_notify(lVar1 + 0xb0,10);
        return;
      }
      if (*(int *)(lVar1 + 0xe0) + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
  }
  _err_print_error("light_set_reverse_cull_face_mode","drivers/gles3/storage/light_storage.cpp",0xf4
                   ,"Parameter \"light\" is null.",0,0);
  return;
}



/* GLES3::LightStorage::light_set_bake_mode(RID, RenderingServer::LightBakeMode) */

void __thiscall
GLES3::LightStorage::light_set_bake_mode(LightStorage *this,ulong param_2,undefined4 param_3)

{
  long lVar1;
  
  if (param_2 != 0) {
    if ((uint)param_2 < *(uint *)(this + 0x24)) {
      lVar1 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0xe8 +
              *(long *)(*(long *)(this + 0x10) +
                       ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
      if (*(int *)(lVar1 + 0xe0) == (int)(param_2 >> 0x20)) {
        *(long *)(lVar1 + 0xa8) = *(long *)(lVar1 + 0xa8) + 1;
        *(undefined4 *)(lVar1 + 0x74) = param_3;
        Dependency::changed_notify(lVar1 + 0xb0,10);
        return;
      }
      if (*(int *)(lVar1 + 0xe0) + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
  }
  _err_print_error("light_set_bake_mode","drivers/gles3/storage/light_storage.cpp",0xfe,
                   "Parameter \"light\" is null.",0,0);
  return;
}



/* GLES3::LightStorage::light_omni_set_shadow_mode(RID, RenderingServer::LightOmniShadowMode) */

void __thiscall
GLES3::LightStorage::light_omni_set_shadow_mode(LightStorage *this,ulong param_2,undefined4 param_3)

{
  long lVar1;
  
  if (param_2 != 0) {
    if ((uint)param_2 < *(uint *)(this + 0x24)) {
      lVar1 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0xe8 +
              *(long *)(*(long *)(this + 0x10) +
                       ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
      if (*(int *)(lVar1 + 0xe0) == (int)(param_2 >> 0x20)) {
        *(long *)(lVar1 + 0xa8) = *(long *)(lVar1 + 0xa8) + 1;
        *(undefined4 *)(lVar1 + 0x94) = param_3;
        Dependency::changed_notify(lVar1 + 0xb0,10);
        return;
      }
      if (*(int *)(lVar1 + 0xe0) + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
  }
  _err_print_error("light_omni_set_shadow_mode","drivers/gles3/storage/light_storage.cpp",0x108,
                   "Parameter \"light\" is null.",0,0);
  return;
}



/* GLES3::LightStorage::light_directional_set_shadow_mode(RID,
   RenderingServer::LightDirectionalShadowMode) */

void __thiscall
GLES3::LightStorage::light_directional_set_shadow_mode
          (LightStorage *this,ulong param_2,undefined4 param_3)

{
  long lVar1;
  
  if (param_2 != 0) {
    if ((uint)param_2 < *(uint *)(this + 0x24)) {
      lVar1 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0xe8 +
              *(long *)(*(long *)(this + 0x10) +
                       ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
      if (*(int *)(lVar1 + 0xe0) == (int)(param_2 >> 0x20)) {
        *(long *)(lVar1 + 0xa8) = *(long *)(lVar1 + 0xa8) + 1;
        *(undefined4 *)(lVar1 + 0x98) = param_3;
        Dependency::changed_notify(lVar1 + 0xb0,10);
        return;
      }
      if (*(int *)(lVar1 + 0xe0) + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
  }
  _err_print_error("light_directional_set_shadow_mode","drivers/gles3/storage/light_storage.cpp",
                   0x119,"Parameter \"light\" is null.",0,0);
  return;
}



/* GLES3::LightStorage::light_directional_set_blend_splits(RID, bool) */

void __thiscall
GLES3::LightStorage::light_directional_set_blend_splits
          (LightStorage *this,ulong param_2,undefined1 param_3)

{
  long lVar1;
  
  if (param_2 != 0) {
    if ((uint)param_2 < *(uint *)(this + 0x24)) {
      lVar1 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0xe8 +
              *(long *)(*(long *)(this + 0x10) +
                       ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
      if (*(int *)(lVar1 + 0xe0) == (int)(param_2 >> 0x20)) {
        *(long *)(lVar1 + 0xa8) = *(long *)(lVar1 + 0xa8) + 1;
        *(undefined1 *)(lVar1 + 0x9c) = param_3;
        Dependency::changed_notify(lVar1 + 0xb0,10);
        return;
      }
      if (*(int *)(lVar1 + 0xe0) + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
  }
  _err_print_error("light_directional_set_blend_splits","drivers/gles3/storage/light_storage.cpp",
                   0x122,"Parameter \"light\" is null.",0,0);
  return;
}



/* GLES3::LightStorage::reflection_probe_set_update_mode(RID,
   RenderingServer::ReflectionProbeUpdateMode) */

void __thiscall
GLES3::LightStorage::reflection_probe_set_update_mode
          (LightStorage *this,ulong param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0xd4))) {
    puVar1 = (undefined4 *)
             (((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0xd0)) * 0x90 +
             *(long *)(*(long *)(this + 0xc0) +
                      ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0xd0)) * 8));
    if (puVar1[0x22] == (int)(param_2 >> 0x20)) {
      *puVar1 = param_3;
      Dependency::changed_notify(puVar1 + 0x16,0xc);
      return;
    }
    if (puVar1[0x22] + 0x80000000 < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("reflection_probe_set_update_mode","drivers/gles3/storage/light_storage.cpp",
                   0x1cc,"Parameter \"reflection_probe\" is null.",0,0);
  return;
}



/* GLES3::LightStorage::reflection_probe_set_max_distance(RID, float) */

void __thiscall
GLES3::LightStorage::reflection_probe_set_max_distance
          (undefined4 param_1,LightStorage *this,ulong param_3)

{
  long lVar1;
  
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(this + 0xd4))) {
    lVar1 = ((param_3 & 0xffffffff) % (ulong)*(uint *)(this + 0xd0)) * 0x90 +
            *(long *)(*(long *)(this + 0xc0) +
                     ((param_3 & 0xffffffff) / (ulong)*(uint *)(this + 0xd0)) * 8);
    if (*(int *)(lVar1 + 0x88) == (int)(param_3 >> 0x20)) {
      *(undefined4 *)(lVar1 + 0x28) = param_1;
      Dependency::changed_notify(lVar1 + 0x58,0xc);
      return;
    }
    if (*(int *)(lVar1 + 0x88) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("reflection_probe_set_max_distance","drivers/gles3/storage/light_storage.cpp",
                   0x1f7,"Parameter \"reflection_probe\" is null.",0,0);
  return;
}



/* GLES3::LightStorage::reflection_probe_set_size(RID, Vector3 const&) */

void __thiscall
GLES3::LightStorage::reflection_probe_set_size(LightStorage *this,ulong param_2,undefined8 *param_3)

{
  long lVar1;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0xd4))) {
    lVar1 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0xd0)) * 0x90 +
            *(long *)(*(long *)(this + 0xc0) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0xd0)) * 8);
    if (*(int *)(lVar1 + 0x88) == (int)(param_2 >> 0x20)) {
      *(undefined8 *)(lVar1 + 0x2c) = *param_3;
      *(undefined4 *)(lVar1 + 0x34) = *(undefined4 *)(param_3 + 1);
      Dependency::changed_notify(lVar1 + 0x58,0xc);
      return;
    }
    if (*(int *)(lVar1 + 0x88) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("reflection_probe_set_size","drivers/gles3/storage/light_storage.cpp",0x1ff,
                   "Parameter \"reflection_probe\" is null.",0,0);
  return;
}



/* GLES3::LightStorage::reflection_probe_set_origin_offset(RID, Vector3 const&) */

void __thiscall
GLES3::LightStorage::reflection_probe_set_origin_offset
          (LightStorage *this,ulong param_2,undefined8 *param_3)

{
  long lVar1;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0xd4))) {
    lVar1 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0xd0)) * 0x90 +
            *(long *)(*(long *)(this + 0xc0) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0xd0)) * 8);
    if (*(int *)(lVar1 + 0x88) == (int)(param_2 >> 0x20)) {
      *(undefined8 *)(lVar1 + 0x38) = *param_3;
      *(undefined4 *)(lVar1 + 0x40) = *(undefined4 *)(param_3 + 1);
      Dependency::changed_notify(lVar1 + 0x58,0xc);
      return;
    }
    if (*(int *)(lVar1 + 0x88) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("reflection_probe_set_origin_offset","drivers/gles3/storage/light_storage.cpp",
                   0x207,"Parameter \"reflection_probe\" is null.",0,0);
  return;
}



/* GLES3::LightStorage::reflection_probe_set_as_interior(RID, bool) */

void __thiscall
GLES3::LightStorage::reflection_probe_set_as_interior
          (LightStorage *this,ulong param_2,undefined1 param_3)

{
  long lVar1;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0xd4))) {
    lVar1 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0xd0)) * 0x90 +
            *(long *)(*(long *)(this + 0xc0) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0xd0)) * 8);
    if (*(int *)(lVar1 + 0x88) == (int)(param_2 >> 0x20)) {
      *(undefined1 *)(lVar1 + 0x44) = param_3;
      Dependency::changed_notify(lVar1 + 0x58,0xc);
      return;
    }
    if (*(int *)(lVar1 + 0x88) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("reflection_probe_set_as_interior","drivers/gles3/storage/light_storage.cpp",
                   0x20f,"Parameter \"reflection_probe\" is null.",0,0);
  return;
}



/* GLES3::LightStorage::reflection_probe_set_enable_shadows(RID, bool) */

void __thiscall
GLES3::LightStorage::reflection_probe_set_enable_shadows
          (LightStorage *this,ulong param_2,undefined1 param_3)

{
  long lVar1;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0xd4))) {
    lVar1 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0xd0)) * 0x90 +
            *(long *)(*(long *)(this + 0xc0) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0xd0)) * 8);
    if (*(int *)(lVar1 + 0x88) == (int)(param_2 >> 0x20)) {
      *(undefined1 *)(lVar1 + 0x46) = param_3;
      Dependency::changed_notify(lVar1 + 0x58,0xc);
      return;
    }
    if (*(int *)(lVar1 + 0x88) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("reflection_probe_set_enable_shadows","drivers/gles3/storage/light_storage.cpp",
                   0x21e,"Parameter \"reflection_probe\" is null.",0,0);
  return;
}



/* GLES3::LightStorage::reflection_probe_set_cull_mask(RID, unsigned int) */

void __thiscall
GLES3::LightStorage::reflection_probe_set_cull_mask
          (LightStorage *this,ulong param_2,undefined4 param_3)

{
  long lVar1;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0xd4))) {
    lVar1 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0xd0)) * 0x90 +
            *(long *)(*(long *)(this + 0xc0) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0xd0)) * 8);
    if (*(int *)(lVar1 + 0x88) == (int)(param_2 >> 0x20)) {
      *(undefined4 *)(lVar1 + 0x48) = param_3;
      Dependency::changed_notify(lVar1 + 0x58,0xc);
      return;
    }
    if (*(int *)(lVar1 + 0x88) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("reflection_probe_set_cull_mask","drivers/gles3/storage/light_storage.cpp",0x226,
                   "Parameter \"reflection_probe\" is null.",0,0);
  return;
}



/* GLES3::LightStorage::reflection_probe_set_reflection_mask(RID, unsigned int) */

void __thiscall
GLES3::LightStorage::reflection_probe_set_reflection_mask
          (LightStorage *this,ulong param_2,undefined4 param_3)

{
  long lVar1;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0xd4))) {
    lVar1 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0xd0)) * 0x90 +
            *(long *)(*(long *)(this + 0xc0) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0xd0)) * 8);
    if (*(int *)(lVar1 + 0x88) == (int)(param_2 >> 0x20)) {
      *(undefined4 *)(lVar1 + 0x4c) = param_3;
      Dependency::changed_notify(lVar1 + 0x58,0xc);
      return;
    }
    if (*(int *)(lVar1 + 0x88) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("reflection_probe_set_reflection_mask","drivers/gles3/storage/light_storage.cpp",
                   0x22e,"Parameter \"reflection_probe\" is null.",0,0);
  return;
}



/* GLES3::LightStorage::reflection_probe_set_mesh_lod_threshold(RID, float) */

void __thiscall
GLES3::LightStorage::reflection_probe_set_mesh_lod_threshold
          (undefined4 param_1,LightStorage *this,ulong param_3)

{
  long lVar1;
  
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(this + 0xd4))) {
    lVar1 = ((param_3 & 0xffffffff) % (ulong)*(uint *)(this + 0xd0)) * 0x90 +
            *(long *)(*(long *)(this + 0xc0) +
                     ((param_3 & 0xffffffff) / (ulong)*(uint *)(this + 0xd0)) * 8);
    if (*(int *)(lVar1 + 0x88) == (int)(param_3 >> 0x20)) {
      *(undefined4 *)(lVar1 + 0x50) = param_1;
      Dependency::changed_notify(lVar1 + 0x58,0xc);
      return;
    }
    if (*(int *)(lVar1 + 0x88) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("reflection_probe_set_mesh_lod_threshold",
                   "drivers/gles3/storage/light_storage.cpp",0x279,
                   "Parameter \"reflection_probe\" is null.",0,0);
  return;
}



/* GLES3::LightStorage::light_get_aabb(RID) const */

uint * GLES3::LightStorage::light_get_aabb(uint *param_1,long param_2,ulong param_3)

{
  float fVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  undefined8 uVar5;
  float fVar6;
  uint uVar7;
  uint uVar8;
  
  if ((param_3 == 0) || (*(uint *)(param_2 + 0x24) <= (uint)param_3)) {
LAB_001039b8:
    uVar5 = 0x15c;
    pcVar3 = "Parameter \"light\" is null.";
  }
  else {
    piVar4 = (int *)(((param_3 & 0xffffffff) % (ulong)*(uint *)(param_2 + 0x20)) * 0xe8 +
                    *(long *)(*(long *)(param_2 + 0x10) +
                             ((param_3 & 0xffffffff) / (ulong)*(uint *)(param_2 + 0x20)) * 8));
    if (piVar4[0x38] != (int)(param_3 >> 0x20)) {
      if (piVar4[0x38] + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
      goto LAB_001039b8;
    }
    iVar2 = *piVar4;
    if (iVar2 == 1) {
      fVar1 = (float)piVar4[5];
      fVar6 = fVar1 + fVar1;
      uVar7 = (uint)fVar1 ^ _LC43;
      *(ulong *)(param_1 + 4) = CONCAT44(fVar6,fVar6);
      *param_1 = uVar7;
      param_1[1] = uVar7;
      param_1[2] = uVar7;
      param_1[3] = (uint)fVar6;
      return param_1;
    }
    if (iVar2 == 2) {
      fVar1 = (float)piVar4[5];
      fVar6 = tanf(_LC90 * (float)piVar4[8]);
      fVar6 = fVar6 * fVar1;
      uVar7 = (uint)fVar6 ^ _LC43;
      uVar8 = _LC43 ^ (uint)fVar1;
      *(ulong *)(param_1 + 4) = CONCAT44(fVar1,fVar6 + fVar6);
      *param_1 = uVar7;
      param_1[1] = uVar7;
      param_1[2] = uVar8;
      param_1[3] = (uint)(fVar6 + fVar6);
      return param_1;
    }
    if (iVar2 == 0) goto LAB_001038e6;
    uVar5 = 0x16d;
    pcVar3 = "Method/function failed. Returning: AABB()";
  }
  _err_print_error("light_get_aabb","drivers/gles3/storage/light_storage.cpp",uVar5,pcVar3,0,0);
LAB_001038e6:
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  return param_1;
}



/* GLES3::LightStorage::reflection_probe_instance_postprocess_step(RID) */

char __thiscall
GLES3::LightStorage::reflection_probe_instance_postprocess_step(LightStorage *this,ulong param_2)

{
  undefined8 *puVar1;
  char cVar2;
  ulong uVar3;
  code *pcVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  
  uVar5 = CubemapFilter::singleton;
  if ((param_2 == 0) || (*(uint *)(this + 0x184) <= (uint)param_2)) {
LAB_00103c60:
    _err_print_error("reflection_probe_instance_postprocess_step",
                     "drivers/gles3/storage/light_storage.cpp",0x3e0,"Parameter \"rpi\" is null.",0,
                     0);
    return '\0';
  }
  puVar1 = (undefined8 *)
           (*(long *)(*(long *)(this + 0x170) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x180)) * 8) +
           ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x180)) * 0x68);
  if (*(int *)(puVar1 + 0xc) != (int)(param_2 >> 0x20)) {
    if (*(int *)(puVar1 + 0xc) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
    goto LAB_00103c60;
  }
  cVar2 = *(char *)((long)puVar1 + 0x19);
  if (cVar2 == '\0') {
    _err_print_error("reflection_probe_instance_postprocess_step",
                     "drivers/gles3/storage/light_storage.cpp",0x3e1,
                     "Condition \"!rpi->rendering\" is true. Returning: false",0,0);
    return '\0';
  }
  uVar3 = puVar1[2];
  if (uVar3 == 0) {
    _err_print_error("reflection_probe_instance_postprocess_step",
                     "drivers/gles3/storage/light_storage.cpp",0x3e2,
                     "Condition \"rpi->atlas.is_null()\" is true. Returning: false",0,0);
    return '\0';
  }
  if (*(uint *)(this + 300) <= (uint)uVar3) {
LAB_00103b80:
    *(undefined1 *)((long)puVar1 + 0x19) = 0;
    *(undefined4 *)((long)puVar1 + 0x1c) = 0;
    return '\0';
  }
  lVar9 = ((uVar3 & 0xffffffff) % (ulong)*(uint *)(this + 0x128)) * 0x50 +
          *(long *)(*(long *)(this + 0x118) +
                   ((uVar3 & 0xffffffff) / (ulong)*(uint *)(this + 0x128)) * 8);
  if (*(int *)(lVar9 + 0x48) != (int)(uVar3 >> 0x20)) {
    if (*(int *)(lVar9 + 0x48) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
    goto LAB_00103b80;
  }
  if (*(int *)(puVar1 + 1) == -1) goto LAB_00103b80;
  iVar6 = (**(code **)(*singleton + 0x220))(singleton,*puVar1);
  if (iVar6 == 1) {
    iVar6 = *(int *)(lVar9 + 8);
    iVar11 = 0;
    if (0 < iVar6) {
      do {
        lVar8 = (long)*(int *)(puVar1 + 1);
        lVar7 = *(long *)(lVar9 + 0x38);
        if (lVar8 < 0) goto LAB_00103b90;
        if (lVar7 == 0) goto LAB_00103c48;
        if (*(long *)(lVar7 + -8) <= lVar8) goto LAB_00103b99;
        lVar7 = lVar7 + lVar8 * 0x30;
        iVar11 = iVar11 + 1;
        GLES3::CubemapFilter::filter_radiance
                  ((uint)uVar5,*(uint *)(lVar7 + 8),*(uint *)(lVar7 + 0xc),*(int *)(lVar7 + 0x28),
                   *(int *)(lVar9 + 4),iVar6);
        iVar6 = *(int *)(lVar9 + 8);
      } while (iVar11 < iVar6);
    }
LAB_00103b4c:
    *(undefined1 *)((long)puVar1 + 0x19) = 0;
    *(undefined4 *)((long)puVar1 + 0x1c) = 0;
    return cVar2;
  }
  lVar8 = (long)*(int *)(puVar1 + 1);
  lVar7 = *(long *)(lVar9 + 0x38);
  if (lVar8 < 0) {
LAB_00103b90:
    if (lVar7 != 0) {
LAB_00103b99:
      lVar10 = *(long *)(lVar7 + -8);
      goto LAB_00103b9d;
    }
  }
  else if (lVar7 != 0) {
    lVar10 = *(long *)(lVar7 + -8);
    if (lVar8 < lVar10) {
      lVar7 = lVar7 + lVar8 * 0x30;
      GLES3::CubemapFilter::filter_radiance
                ((uint)uVar5,*(uint *)(lVar7 + 8),*(uint *)(lVar7 + 0xc),*(int *)(lVar7 + 0x28),
                 *(int *)(lVar9 + 4),*(int *)(lVar9 + 8));
      iVar6 = *(int *)((long)puVar1 + 0x1c) + 1;
      *(int *)((long)puVar1 + 0x1c) = iVar6;
      if (iVar6 != *(int *)(lVar9 + 8)) {
        return '\0';
      }
      goto LAB_00103b4c;
    }
    goto LAB_00103b9d;
  }
LAB_00103c48:
  lVar10 = 0;
LAB_00103b9d:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,lVar8,lVar10,"p_index","size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GLES3::LightStorage::lightmap_set_textures(RID, RID, bool) */

void __thiscall
GLES3::LightStorage::lightmap_set_textures
          (LightStorage *this,ulong param_2,undefined8 param_3,undefined1 param_4)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 != 0) {
    if ((uint)param_2 < *(uint *)(this + 0x1e4)) {
      puVar4 = (undefined8 *)
               (((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x1e0)) * 0xb8 +
               *(long *)(*(long *)(this + 0x1d0) +
                        ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x1e0)) * 8));
      if (*(int *)(puVar4 + 0x16) == (int)(param_2 >> 0x20)) {
        *puVar4 = param_3;
        *(undefined1 *)(puVar4 + 2) = param_4;
        uVar3 = GLES3::TextureStorage::get_singleton();
        uVar3 = GLES3::TextureStorage::texture_get_size(uVar3,*puVar4);
        puVar4[6] = uVar3;
        uVar3 = GLES3::TextureStorage::get_singleton();
        uVar2 = GLES3::TextureStorage::texture_get_texid(uVar3,*puVar4);
        (*_glad_glBindTexture)(0x8c1a,uVar2);
        (*_glad_glTexParameteri)(0x8c1a,0x2800,0x2601);
        (*_glad_glTexParameteri)(0x8c1a,0x2801,0x2601);
        (*_glad_glTexParameteri)(0x8c1a,0x2802,0x812f);
        (*_glad_glTexParameteri)(0x8c1a,0x2803,0x812f);
        if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00103e87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*_glad_glBindTexture)(0x8c1a,0);
          return;
        }
        goto LAB_00103f13;
      }
      if (*(int *)(puVar4 + 0x16) + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    _err_print_error("lightmap_set_textures","drivers/gles3/storage/light_storage.cpp",0x42c,
                     "Parameter \"lightmap\" is null.",0,0);
    return;
  }
LAB_00103f13:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GLES3::LightStorage::lightmap_set_shadowmask_textures(RID, RID) */

void __thiscall
GLES3::LightStorage::lightmap_set_shadowmask_textures
          (LightStorage *this,ulong param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x1e4))) {
    lVar3 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x1e0)) * 0xb8 +
            *(long *)(*(long *)(this + 0x1d0) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x1e0)) * 8);
    if (*(int *)(lVar3 + 0xb0) == (int)(param_2 >> 0x20)) {
      *(undefined8 *)(lVar3 + 8) = param_3;
      uVar2 = GLES3::TextureStorage::get_singleton();
      uVar1 = GLES3::TextureStorage::texture_get_texid(uVar2,*(undefined8 *)(lVar3 + 8));
      (*_glad_glBindTexture)(0x8c1a,uVar1);
      (*_glad_glTexParameteri)(0x8c1a,0x2800,0x2601);
      (*_glad_glTexParameteri)(0x8c1a,0x2801,0x2601);
      (*_glad_glTexParameteri)(0x8c1a,0x2802,0x812f);
      (*_glad_glTexParameteri)(0x8c1a,0x2803,0x812f);
                    /* WARNING: Could not recover jumptable at 0x00103fed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*_glad_glBindTexture)(0x8c1a,0);
      return;
    }
    if (*(int *)(lVar3 + 0xb0) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("lightmap_set_shadowmask_textures","drivers/gles3/storage/light_storage.cpp",
                   0x4bf,"Parameter \"lightmap\" is null.",0,0);
  return;
}



/* GLES3::LightStorage::get_directional_light_shadow_size(RID) */

int __thiscall
GLES3::LightStorage::get_directional_light_shadow_size(LightStorage *this,ulong param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long in_FS_OFFSET;
  undefined8 uVar4;
  int local_20;
  int local_1c;
  long local_10;
  
  iVar2 = *(int *)(this + 0x2e0);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (iVar2 == 0) {
    _err_print_error("get_directional_light_shadow_size","drivers/gles3/storage/light_storage.cpp",
                     0x6b0,"Condition \"directional_shadow.light_count == 0\" is true. Returning: 0"
                     ,0,0);
    iVar2 = 0;
  }
  else {
    local_20 = *(int *)(this + 0x2e4);
    local_1c = local_20;
    if (1 < iVar2) {
      local_1c = 1;
      iVar1 = 1;
      do {
        while (local_1c != iVar1) {
          local_1c = local_1c * 2;
          if (iVar2 <= iVar1 * local_1c) goto LAB_001040d3;
        }
        iVar1 = local_1c * 2;
      } while (iVar1 * local_1c < iVar2);
LAB_001040d3:
      local_1c = local_20 / local_1c;
      local_20 = local_20 / iVar1;
    }
    uVar4 = 0;
    if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x7c))) {
      lVar3 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x78)) * 0x478 +
              *(long *)(*(long *)(this + 0x68) +
                       ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x78)) * 8);
      iVar2 = *(int *)(lVar3 + 0x470);
      if (iVar2 == (int)(param_2 >> 0x20)) {
        iVar1 = (**(code **)(*(long *)this + 0xd8))(this,*(undefined8 *)(lVar3 + 0x3d0));
        if (iVar1 == 1) {
          iVar2 = local_1c / 2;
        }
        else {
          iVar2 = local_1c;
          if (iVar1 == 2) {
            Vector2i::operator/=((Vector2i *)&local_20,2);
            iVar2 = local_1c;
          }
        }
        if (iVar2 < local_20) {
          iVar2 = local_20;
        }
        goto LAB_0010415b;
      }
      if (iVar2 + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
    _err_print_error("get_directional_light_shadow_size","drivers/gles3/storage/light_storage.cpp",
                     0x6b5,"Parameter \"light_instance\" is null.",0,0,uVar4);
    iVar2 = 0;
  }
LAB_0010415b:
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GLES3::LightStorage::directional_shadow_atlas_set_size(int, bool) */

void __thiscall
GLES3::LightStorage::directional_shadow_atlas_set_size(LightStorage *this,int param_1,bool param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = param_1 - 1U | (int)(param_1 - 1U) >> 1;
  uVar1 = uVar1 | (int)uVar1 >> 2;
  uVar1 = uVar1 | (int)uVar1 >> 4;
  uVar1 = uVar1 | (int)uVar1 >> 8;
  iVar2 = (uVar1 | (int)uVar1 >> 0x10) + 1;
  if ((*(int *)(this + 0x2e4) == iVar2) && (this[0x2e8] == (LightStorage)param_2)) {
    return;
  }
  *(int *)(this + 0x2e4) = iVar2;
  this[0x2e8] = (LightStorage)param_2;
  if (*(int *)(this + 0x2d8) != 0) {
    (*_glad_glDeleteTextures)(1,this + 0x2d8);
    *(undefined4 *)(this + 0x2d8) = 0;
    (*_glad_glDeleteFramebuffers)(1,this + 0x2dc);
    *(undefined4 *)(this + 0x2dc) = 0;
  }
  return;
}



/* LocalVector<unsigned int, unsigned int, false, false>::resize(unsigned int) [clone .part.0] */

void LocalVector<unsigned_int,unsigned_int,false,false>::resize(uint param_1)

{
  code *pcVar1;
  
  _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                   "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* GLES3::LightStorage::light_set_projector(RID, RID) */

void __thiscall
GLES3::LightStorage::light_set_projector(LightStorage *this,ulong param_2,long param_3)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  int *piVar4;
  
  plVar3 = (long *)GLES3::TextureStorage::get_singleton();
  if ((param_2 == 0) || (*(uint *)(this + 0x24) <= (uint)param_2)) {
LAB_0010442e:
    _err_print_error("light_set_projector","drivers/gles3/storage/light_storage.cpp",0xb2,
                     "Parameter \"light\" is null.",0,0);
    return;
  }
  piVar4 = (int *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0xe8 +
                  *(long *)(*(long *)(this + 0x10) +
                           ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8));
  if (piVar4[0x38] != (int)(param_2 >> 0x20)) {
    if (piVar4[0x38] + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
    goto LAB_0010442e;
  }
  lVar1 = *(long *)(piVar4 + 0x1a);
  if (lVar1 != param_3) {
    iVar2 = *piVar4;
    if ((lVar1 != 0) && (iVar2 != 0)) {
      if (*(code **)(*plVar3 + 0x1c0) == TextureStorage::texture_remove_from_decal_atlas) {
        *(long *)(piVar4 + 0x1a) = param_3;
        goto LAB_001043df;
      }
      (**(code **)(*plVar3 + 0x1c0))(plVar3,lVar1,iVar2 == 1);
      iVar2 = *piVar4;
    }
    *(long *)(piVar4 + 0x1a) = param_3;
    if (iVar2 != 0) {
LAB_001043df:
      if (*(long *)(piVar4 + 0x1a) != 0) {
        if (*(code **)(*plVar3 + 0x1b8) != TextureStorage::texture_add_to_decal_atlas) {
          (**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(piVar4 + 0x1a),iVar2 == 1);
        }
      }
      Dependency::changed_notify(piVar4 + 0x2c,0xb);
      return;
    }
  }
  return;
}



/* CowData<GLES3::ReflectionAtlas::Reflection>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<GLES3::ReflectionAtlas::Reflection>::_copy_on_write
          (CowData<GLES3::ReflectionAtlas::Reflection> *this)

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
  __n = lVar2 * 0x30;
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



/* GLES3::LightStorage::reflection_probe_release_atlas_index(RID) */

void __thiscall
GLES3::LightStorage::reflection_probe_release_atlas_index(LightStorage *this,ulong param_2)

{
  long lVar1;
  char cVar2;
  ulong uVar3;
  char *pcVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x184))) {
    lVar1 = *(long *)(*(long *)(this + 0x170) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x180)) * 8) +
            ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x180)) * 0x68;
    if (*(int *)(lVar1 + 0x60) == (int)(param_2 >> 0x20)) {
      uVar3 = *(ulong *)(lVar1 + 0x10);
      if (uVar3 == 0) {
        return;
      }
      if ((uint)uVar3 < *(uint *)(this + 300)) {
        lVar6 = ((uVar3 & 0xffffffff) % (ulong)*(uint *)(this + 0x128)) * 0x50 +
                *(long *)(*(long *)(this + 0x118) +
                         ((uVar3 & 0xffffffff) / (ulong)*(uint *)(this + 0x128)) * 8);
        if (*(int *)(lVar6 + 0x48) == (int)(uVar3 >> 0x20)) {
          lVar8 = (long)*(int *)(lVar1 + 8);
          lVar7 = *(long *)(lVar6 + 0x38);
          if (*(int *)(lVar1 + 8) < 0) {
            if (lVar7 != 0) {
              lVar7 = *(long *)(lVar7 + -8);
              goto LAB_001046fd;
            }
          }
          else if (lVar7 != 0) {
            lVar7 = *(long *)(lVar7 + -8);
            if (lVar8 < lVar7) {
              CowData<GLES3::ReflectionAtlas::Reflection>::_copy_on_write
                        ((CowData<GLES3::ReflectionAtlas::Reflection> *)(lVar6 + 0x38));
              cVar2 = *(char *)(lVar1 + 0x19);
              *(undefined8 *)(lVar8 * 0x30 + *(long *)(lVar6 + 0x38)) = 0;
              if (cVar2 != '\0') {
                *(undefined4 *)(lVar1 + 0x1c) = 0;
                *(undefined2 *)(lVar1 + 0x18) = 1;
              }
              *(undefined4 *)(lVar1 + 8) = 0xffffffff;
              *(undefined8 *)(lVar1 + 0x10) = 0;
              return;
            }
            goto LAB_001046fd;
          }
          lVar7 = 0;
LAB_001046fd:
          _err_print_index_error
                    ("reflection_probe_release_atlas_index",
                     "drivers/gles3/storage/light_storage.cpp",0x2fc,lVar8,lVar7,"rpi->atlas_index",
                     "atlas->reflections.size()","",false,false);
          return;
        }
        if (*(int *)(lVar6 + 0x48) + 0x80000000U < 0x7fffffff) {
          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                           "Method/function failed. Returning: nullptr",
                           "Attempting to use an uninitialized RID",0,0);
        }
      }
      uVar5 = 0x2fa;
      pcVar4 = "Parameter \"atlas\" is null.";
      goto LAB_00104762;
    }
    if (*(int *)(lVar1 + 0x60) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  uVar5 = 0x2f4;
  pcVar4 = "Parameter \"rpi\" is null.";
LAB_00104762:
  _err_print_error("reflection_probe_release_atlas_index","drivers/gles3/storage/light_storage.cpp",
                   uVar5,pcVar4,0,0);
  return;
}



/* CowData<GLES3::LightStorage::ShadowAtlas::Quadrant::Shadow>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<GLES3::LightStorage::ShadowAtlas::Quadrant::Shadow>::_copy_on_write
          (CowData<GLES3::LightStorage::ShadowAtlas::Quadrant::Shadow> *this)

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



/* GLES3::LightStorage::lightmap_tap_sh_light(RID, Vector3 const&, Color*) */

void __thiscall
GLES3::LightStorage::lightmap_tap_sh_light
          (LightStorage *this,ulong param_2,float *param_3,undefined1 (*param_4) [16])

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  Color *this_00;
  uint *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  code *pcVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 (*pauVar21) [16];
  char *pcVar22;
  ulong uVar23;
  long lVar24;
  float fVar25;
  float fVar26;
  undefined8 uVar27;
  ulong uVar28;
  long *plVar29;
  long lVar30;
  long lVar31;
  float *pfVar32;
  long in_FS_OFFSET;
  bool bVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  undefined1 auVar54 [16];
  float local_b8;
  float local_88;
  undefined8 local_84;
  float local_7c;
  undefined1 local_78 [16];
  long local_68 [4];
  long local_48;
  long local_40;
  
  auVar20._8_8_ = local_78._8_8_;
  auVar20._0_8_ = local_78._0_8_;
  auVar19._8_8_ = local_78._8_8_;
  auVar19._0_8_ = local_78._0_8_;
  auVar18._8_8_ = local_78._8_8_;
  auVar18._0_8_ = local_78._0_8_;
  auVar17._8_8_ = local_78._8_8_;
  auVar17._0_8_ = local_78._0_8_;
  auVar16._8_8_ = local_78._8_8_;
  auVar16._0_8_ = local_78._0_8_;
  auVar54._8_8_ = local_78._8_8_;
  auVar54._0_8_ = local_78._0_8_;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x1e4))) {
    lVar30 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x1e0)) * 0xb8 +
             *(long *)(*(long *)(this + 0x1d0) +
                      ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x1e0)) * 8);
    pauVar21 = param_4;
    if (*(int *)(lVar30 + 0xb0) == (int)(param_2 >> 0x20)) {
      do {
        *pauVar21 = (undefined1  [16])0x0;
        pauVar21 = pauVar21 + 1;
      } while (pauVar21 != param_4 + 9);
      lVar24 = *(long *)(lVar30 + 0x48);
      if ((((lVar24 != 0) && (lVar12 = *(long *)(lVar24 + -8), local_78 = auVar54, lVar12 != 0)) &&
          (lVar13 = *(long *)(lVar30 + 0x78), local_78 = auVar16, lVar13 != 0)) &&
         (((local_78 = auVar17, *(long *)(lVar13 + -8) != 0 &&
           (lVar14 = *(long *)(lVar30 + 0x68), local_78 = auVar18, lVar14 != 0)) &&
          (lVar31 = *(long *)(lVar14 + -8), local_78 = auVar19, lVar31 != 0)))) {
        fVar4 = *param_3;
        fVar5 = param_3[1];
        fVar25 = 0.0;
        fVar6 = param_3[2];
        do {
          pfVar32 = (float *)(lVar13 + (long)(int)fVar25 * 0x18);
          fVar34 = *pfVar32 * fVar4 + pfVar32[1] * fVar5 + pfVar32[2] * fVar6;
          if (pfVar32[3] <= fVar34 && fVar34 != pfVar32[3]) {
            bVar33 = (uint)pfVar32[4] < (uint)fVar25;
            fVar25 = pfVar32[4];
            if (bVar33) {
              if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00105114;
              uVar27 = 0x490;
              pcVar22 = "Condition \"bsp[node].over >= 0 && bsp[node].over < node\" is true.";
              goto LAB_00104b16;
            }
          }
          else {
            bVar33 = (uint)pfVar32[5] < (uint)fVar25;
            fVar25 = pfVar32[5];
            if (bVar33) {
              if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00105114;
              uVar27 = 0x496;
              pcVar22 = "Condition \"bsp[node].under >= 0 && bsp[node].under < node\" is true.";
              goto LAB_00104b16;
            }
          }
        } while (-1 < (int)fVar25);
        local_78 = auVar20;
        if (fVar25 != -0.0) {
          uVar23 = (ulong)(int)(~(uint)fVar25 * 4);
          if (lVar31 <= (long)uVar23) {
LAB_00105058:
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,uVar23,lVar31,"p_index","size()","",
                       false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar15 = (code *)invalidInstructionException();
            (*pcVar15)();
          }
          puVar3 = (uint *)(lVar14 + uVar23 * 4);
          uVar23 = (ulong)*puVar3;
          lVar31 = lVar12;
          if (lVar12 <= (long)uVar23) goto LAB_00105058;
          puVar1 = (undefined8 *)(lVar24 + uVar23 * 0xc);
          fVar25 = *(float *)(puVar1 + 1);
          uVar23 = (ulong)puVar3[1];
          if (lVar12 <= (long)uVar23) goto LAB_00105058;
          uVar28 = (ulong)puVar3[2];
          pfVar32 = (float *)(lVar24 + uVar23 * 0xc);
          fVar34 = pfVar32[2];
          fVar7 = *pfVar32;
          fVar8 = pfVar32[1];
          uVar23 = uVar28;
          if (lVar12 <= (long)uVar28) goto LAB_00105058;
          uVar23 = (ulong)puVar3[3];
          pfVar32 = (float *)(lVar24 + uVar28 * 0xc);
          fVar9 = *pfVar32;
          fVar11 = pfVar32[1];
          fVar10 = pfVar32[2];
          if (lVar12 <= (long)uVar23) goto LAB_00105058;
          puVar2 = (undefined8 *)(lVar24 + uVar23 * 0xc);
          uVar23 = (ulong)(*puVar3 * 9);
          lVar30 = *(long *)(lVar30 + 0x58);
          if (lVar30 == 0) {
            lVar31 = 0;
            goto LAB_00105058;
          }
          lVar31 = *(long *)(lVar30 + -8);
          if (lVar31 <= (long)uVar23) goto LAB_00105058;
          local_68[0] = uVar23 * 0x10 + lVar30;
          uVar23 = (ulong)(puVar3[1] * 9);
          if (lVar31 <= (long)uVar23) goto LAB_00105058;
          local_68[1] = uVar23 * 0x10 + lVar30;
          uVar23 = (ulong)(puVar3[2] * 9);
          if (lVar31 <= (long)uVar23) goto LAB_00105058;
          lVar24 = uVar23 * 0x10;
          uVar23 = (ulong)(puVar3[3] * 9);
          local_68[2] = lVar30 + lVar24;
          if (lVar31 <= (long)uVar23) goto LAB_00105058;
          fVar35 = (float)*puVar1;
          fVar36 = (float)((ulong)*puVar1 >> 0x20);
          fVar26 = (float)*puVar2;
          pfVar32 = &local_88;
          local_68[3] = lVar30 + uVar23 * 0x10;
          plVar29 = local_68;
          fVar47 = (float)((ulong)*puVar2 >> 0x20) - fVar36;
          fVar44 = (fVar9 - fVar35) * fVar47 - (fVar11 - fVar36) * (fVar26 - fVar35);
          fVar38 = fVar9 - fVar35;
          fVar37 = fVar7 - fVar35;
          fVar49 = (float)*(undefined8 *)((long)puVar2 + 4);
          fVar51 = (float)((ulong)*(undefined8 *)((long)puVar2 + 4) >> 0x20);
          fVar42 = fVar10 - fVar25;
          fVar43 = fVar8 - fVar36;
          fVar46 = (fVar26 - fVar35) * (fVar10 - fVar25) -
                   fVar38 * (*(float *)(puVar2 + 1) - fVar25);
          fVar40 = (float)*(undefined8 *)((long)puVar1 + 4);
          fVar39 = fVar11 - fVar40;
          fVar53 = (float)((ulong)*(undefined8 *)((long)puVar1 + 4) >> 0x20);
          fVar41 = fVar34 - fVar53;
          fVar48 = (fVar51 - fVar25) * fVar39 - fVar42 * (fVar49 - fVar40);
          fVar45 = fVar6 - fVar53;
          fVar40 = fVar5 - fVar40;
          fVar52 = fVar4 - fVar35;
          fVar50 = _LC124 / (fVar44 * fVar41 + fVar43 * fVar46 + fVar48 * fVar37);
          local_b8 = ((fVar4 - fVar7) *
                      ((fVar49 - fVar8) * (fVar10 - fVar34) - (fVar11 - fVar8) * (fVar51 - fVar34))
                      + ((fVar51 - fVar34) * (fVar9 - fVar7) - (fVar10 - fVar34) * (fVar26 - fVar7))
                        * (fVar5 - fVar8) +
                     ((fVar11 - fVar8) * (fVar26 - fVar7) - (fVar9 - fVar7) * (fVar49 - fVar8)) *
                     (fVar6 - fVar34)) * fVar50;
          local_84 = CONCAT44((fVar52 * ((fVar49 - fVar36) * fVar41 - fVar43 * (fVar51 - fVar53)) +
                               fVar40 * ((*(float *)(puVar2 + 1) - fVar25) * fVar37 -
                                        (fVar34 - fVar25) * (fVar26 - fVar35)) +
                              fVar45 * ((fVar8 - fVar36) * (fVar26 - fVar35) -
                                       (fVar7 - fVar35) * fVar47)) * fVar50,
                              (fVar52 * fVar48 + fVar40 * fVar46 + fVar45 * fVar44) * fVar50);
          local_7c = ((fVar43 * fVar42 - fVar39 * fVar41) * fVar52 +
                      (fVar41 * fVar38 - fVar42 * fVar37) * fVar40 +
                     (fVar37 * fVar39 - fVar38 * fVar43) * fVar45) * fVar50;
          while( true ) {
            if (local_b8 < 0.0) {
              local_b8 = 0.0;
              fVar4 = local_b8;
            }
            else {
              fVar4 = _LC124;
              if (local_b8 <= _LC124) {
                fVar4 = local_b8;
              }
            }
            local_b8 = fVar4;
            lVar30 = 0;
            do {
              auVar54 = Color::operator*((Color *)(*plVar29 + lVar30),local_b8);
              this_00 = (Color *)(*param_4 + lVar30);
              lVar30 = lVar30 + 0x10;
              local_78 = auVar54;
              Color::operator+=(this_00,(Color *)local_78);
            } while (lVar30 != 0x90);
            plVar29 = plVar29 + 1;
            pfVar32 = pfVar32 + 1;
            if (&local_48 == plVar29) break;
            local_b8 = *pfVar32;
          }
        }
      }
      auVar20 = local_78;
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00105114;
    }
    if (*(int *)(lVar30 + 0xb0) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  auVar20._8_8_ = local_78._8_8_;
  auVar20._0_8_ = local_78._0_8_;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    uVar27 = 0x47f;
    pcVar22 = "Parameter \"lm\" is null.";
LAB_00104b16:
    _err_print_error("lightmap_tap_sh_light","drivers/gles3/storage/light_storage.cpp",uVar27,
                     pcVar22,0,0);
    return;
  }
LAB_00105114:
  local_78 = auVar20;
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GLES3::LightStorage::reflection_probe_atlas_get_render_buffers(RID) */

long * GLES3::LightStorage::reflection_probe_atlas_get_render_buffers
                 (long *param_1,long param_2,ulong param_3)

{
  int iVar1;
  char cVar2;
  long lVar3;
  
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(param_2 + 300))) {
    lVar3 = ((param_3 & 0xffffffff) % (ulong)*(uint *)(param_2 + 0x128)) * 0x50 +
            *(long *)(*(long *)(param_2 + 0x118) +
                     ((param_3 & 0xffffffff) / (ulong)*(uint *)(param_2 + 0x128)) * 8);
    iVar1 = *(int *)(lVar3 + 0x48);
    if (iVar1 == (int)(param_3 >> 0x20)) {
      *param_1 = 0;
      lVar3 = *(long *)(lVar3 + 0x40);
      if (lVar3 != 0) {
        lVar3 = __dynamic_cast(lVar3,&Object::typeinfo,&RenderSceneBuffers::typeinfo,0);
        if (lVar3 != 0) {
          *param_1 = lVar3;
          cVar2 = RefCounted::reference();
          if (cVar2 == '\0') {
            *param_1 = 0;
          }
        }
      }
      return param_1;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("reflection_probe_atlas_get_render_buffers",
                   "drivers/gles3/storage/light_storage.cpp",0x3d8,"Parameter \"atlas\" is null.",0,
                   0);
  *param_1 = 0;
  return param_1;
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



/* GLES3::LightStorage::lightmap_get_probe_capture_sh(RID) const */

long GLES3::LightStorage::lightmap_get_probe_capture_sh(long param_1,long param_2,ulong param_3)

{
  long lVar1;
  
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(param_2 + 0x1e4))) {
    lVar1 = ((param_3 & 0xffffffff) % (ulong)*(uint *)(param_2 + 0x1e0)) * 0xb8 +
            *(long *)(*(long *)(param_2 + 0x1d0) +
                     ((param_3 & 0xffffffff) / (ulong)*(uint *)(param_2 + 0x1e0)) * 8);
    if (*(int *)(lVar1 + 0xb0) == (int)(param_3 >> 0x20)) {
      *(undefined8 *)(param_1 + 8) = 0;
      if (*(long *)(lVar1 + 0x58) != 0) {
        CowData<Color>::_ref((CowData<Color> *)(param_1 + 8),(CowData *)(lVar1 + 0x58));
      }
      return param_1;
    }
    if (*(int *)(lVar1 + 0xb0) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("lightmap_get_probe_capture_sh","drivers/gles3/storage/light_storage.cpp",0x467,
                   "Parameter \"lightmap\" is null.",0,0);
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
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



/* GLES3::LightStorage::lightmap_get_probe_capture_points(RID) const */

long GLES3::LightStorage::lightmap_get_probe_capture_points(long param_1,long param_2,ulong param_3)

{
  long lVar1;
  
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(param_2 + 0x1e4))) {
    lVar1 = ((param_3 & 0xffffffff) % (ulong)*(uint *)(param_2 + 0x1e0)) * 0xb8 +
            *(long *)(*(long *)(param_2 + 0x1d0) +
                     ((param_3 & 0xffffffff) / (ulong)*(uint *)(param_2 + 0x1e0)) * 8);
    if (*(int *)(lVar1 + 0xb0) == (int)(param_3 >> 0x20)) {
      *(undefined8 *)(param_1 + 8) = 0;
      if (*(long *)(lVar1 + 0x48) != 0) {
        CowData<Vector3>::_ref((CowData<Vector3> *)(param_1 + 8),(CowData *)(lVar1 + 0x48));
      }
      return param_1;
    }
    if (*(int *)(lVar1 + 0xb0) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("lightmap_get_probe_capture_points","drivers/gles3/storage/light_storage.cpp",
                   0x461,"Parameter \"lightmap\" is null.",0,0);
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}



/* GLES3::LightStorage::reflection_probe_free(RID) */

ulong __thiscall GLES3::LightStorage::reflection_probe_free(LightStorage *this,ulong param_2)

{
  pthread_mutex_t *__mutex;
  int iVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  
  uVar3 = (uint)param_2;
  iVar5 = (int)(param_2 >> 0x20);
  if (param_2 != 0) {
    if (uVar3 < *(uint *)(this + 0xd4)) {
      lVar6 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0xd0)) * 0x90 +
              *(long *)(*(long *)(this + 0xc0) +
                       ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0xd0)) * 8);
      if (*(int *)(lVar6 + 0x88) == iVar5) goto LAB_00105585;
      if (*(int *)(lVar6 + 0x88) + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
        lVar6 = 0;
        goto LAB_00105585;
      }
    }
  }
  lVar6 = 0;
LAB_00105585:
  __mutex = (pthread_mutex_t *)(this + 0xe8);
  Dependency::deleted_notify((RID *)(lVar6 + 0x58));
  iVar1 = pthread_mutex_lock(__mutex);
  if (iVar1 == 0) {
    if (uVar3 < *(uint *)(this + 0xd4)) {
      uVar4 = (param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0xd0);
      lVar7 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0xd0)) * 0x90;
      lVar6 = *(long *)(*(long *)(this + 0xc0) + uVar4 * 8) + lVar7;
      iVar1 = *(int *)(lVar6 + 0x88);
      if (iVar1 < 0) {
        pthread_mutex_unlock(__mutex);
        uVar4 = 0;
        _err_print_error(&_LC19,"./core/templates/rid_owner.h",0x16c,"Method/function failed.",
                         "Attempted to free an uninitialized or invalid RID",0);
      }
      else if (iVar5 == iVar1) {
        Dependency::~Dependency((Dependency *)(lVar6 + 0x58));
        lVar6 = *(long *)(this + 200);
        *(undefined4 *)(*(long *)(*(long *)(this + 0xc0) + uVar4 * 8) + 0x88 + lVar7) = 0xffffffff;
        uVar2 = *(int *)(this + 0xd8) - 1;
        *(uint *)(this + 0xd8) = uVar2;
        *(uint *)(*(long *)(lVar6 + ((ulong)uVar2 / (ulong)*(uint *)(this + 0xd0)) * 8) +
                 ((ulong)uVar2 % (ulong)*(uint *)(this + 0xd0)) * 4) = uVar3;
        uVar3 = pthread_mutex_unlock(__mutex);
        uVar4 = (ulong)uVar3;
      }
      else {
        pthread_mutex_unlock(__mutex);
        uVar4 = _err_print_error(&_LC19,"./core/templates/rid_owner.h",0x171,
                                 "Method/function failed.",0,0);
      }
    }
    else {
      pthread_mutex_unlock(__mutex);
      uVar4 = _err_print_error(&_LC19,"./core/templates/rid_owner.h",0x161,"Method/function failed."
                               ,0,0);
    }
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_system_error(iVar1);
}



/* GLES3::LightStorage::light_free(RID) */

ulong __thiscall GLES3::LightStorage::light_free(LightStorage *this,ulong param_2)

{
  pthread_mutex_t *__mutex;
  int iVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  
  (**(code **)(*(long *)this + 0x60))(this,param_2,0);
  uVar3 = (uint)param_2;
  iVar5 = (int)(param_2 >> 0x20);
  if (param_2 != 0) {
    if (uVar3 < *(uint *)(this + 0x24)) {
      lVar6 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0xe8 +
              *(long *)(*(long *)(this + 0x10) +
                       ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
      if (*(int *)(lVar6 + 0xe0) == iVar5) goto LAB_001057d6;
      if (*(int *)(lVar6 + 0xe0) + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
        lVar6 = 0;
        goto LAB_001057d6;
      }
    }
  }
  lVar6 = 0;
LAB_001057d6:
  __mutex = (pthread_mutex_t *)(this + 0x38);
  Dependency::deleted_notify((RID *)(lVar6 + 0xb0));
  iVar1 = pthread_mutex_lock(__mutex);
  if (iVar1 == 0) {
    if (uVar3 < *(uint *)(this + 0x24)) {
      uVar4 = (param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20);
      lVar6 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0xe8;
      lVar7 = *(long *)(*(long *)(this + 0x10) + uVar4 * 8) + lVar6;
      iVar1 = *(int *)(lVar7 + 0xe0);
      if (iVar1 < 0) {
        pthread_mutex_unlock(__mutex);
        uVar4 = 0;
        _err_print_error(&_LC19,"./core/templates/rid_owner.h",0x16c,"Method/function failed.",
                         "Attempted to free an uninitialized or invalid RID",0);
      }
      else if (iVar5 == iVar1) {
        Dependency::~Dependency((Dependency *)(lVar7 + 0xb0));
        lVar7 = *(long *)(this + 0x18);
        *(undefined4 *)(*(long *)(*(long *)(this + 0x10) + uVar4 * 8) + 0xe0 + lVar6) = 0xffffffff;
        uVar2 = *(int *)(this + 0x28) - 1;
        *(uint *)(this + 0x28) = uVar2;
        *(uint *)(*(long *)(lVar7 + ((ulong)uVar2 / (ulong)*(uint *)(this + 0x20)) * 8) +
                 ((ulong)uVar2 % (ulong)*(uint *)(this + 0x20)) * 4) = uVar3;
        uVar3 = pthread_mutex_unlock(__mutex);
        uVar4 = (ulong)uVar3;
      }
      else {
        pthread_mutex_unlock(__mutex);
        uVar4 = _err_print_error(&_LC19,"./core/templates/rid_owner.h",0x171,
                                 "Method/function failed.",0,0);
      }
    }
    else {
      pthread_mutex_unlock(__mutex);
      uVar4 = _err_print_error(&_LC19,"./core/templates/rid_owner.h",0x161,"Method/function failed."
                               ,0,0);
    }
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_system_error(iVar1);
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



/* GLES3::LightStorage::lightmap_get_probe_capture_bsp_tree(RID) const */

long GLES3::LightStorage::lightmap_get_probe_capture_bsp_tree
               (long param_1,long param_2,ulong param_3)

{
  long lVar1;
  
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(param_2 + 0x1e4))) {
    lVar1 = ((param_3 & 0xffffffff) % (ulong)*(uint *)(param_2 + 0x1e0)) * 0xb8 +
            *(long *)(*(long *)(param_2 + 0x1d0) +
                     ((param_3 & 0xffffffff) / (ulong)*(uint *)(param_2 + 0x1e0)) * 8);
    if (*(int *)(lVar1 + 0xb0) == (int)(param_3 >> 0x20)) {
      *(undefined8 *)(param_1 + 8) = 0;
      if (*(long *)(lVar1 + 0x78) != 0) {
        CowData<int>::_ref((CowData<int> *)(param_1 + 8),(CowData *)(lVar1 + 0x78));
      }
      return param_1;
    }
    if (*(int *)(lVar1 + 0xb0) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("lightmap_get_probe_capture_bsp_tree","drivers/gles3/storage/light_storage.cpp",
                   0x473,"Parameter \"lightmap\" is null.",0,0);
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}



/* GLES3::LightStorage::lightmap_set_probe_capture_data(RID, Vector<Vector3> const&, Vector<Color>
   const&, Vector<int> const&, Vector<int> const&) */

void __thiscall
GLES3::LightStorage::lightmap_set_probe_capture_data
          (LightStorage *this,ulong param_2,long param_3,long param_4,long param_5,long param_6)

{
  long lVar1;
  char *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x1e4))) {
    lVar5 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x1e0)) * 0xb8 +
            *(long *)(*(long *)(this + 0x1d0) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x1e0)) * 8);
    if (*(int *)(lVar5 + 0xb0) == (int)(param_2 >> 0x20)) {
      lVar1 = *(long *)(param_3 + 8);
      if ((lVar1 == 0) || (*(long *)(lVar1 + -8) == 0)) {
LAB_00105b9b:
        if (lVar1 != *(long *)(lVar5 + 0x48)) {
          CowData<Vector3>::_ref((CowData<Vector3> *)(lVar5 + 0x48),(CowData *)(param_3 + 8));
        }
        if (*(long *)(lVar5 + 0x58) != *(long *)(param_4 + 8)) {
          CowData<Color>::_ref((CowData<Color> *)(lVar5 + 0x58),(CowData *)(param_4 + 8));
        }
        if (*(long *)(lVar5 + 0x68) != *(long *)(param_5 + 8)) {
          CowData<int>::_ref((CowData<int> *)(lVar5 + 0x68),(CowData *)(param_5 + 8));
        }
        if (*(long *)(lVar5 + 0x78) != *(long *)(param_6 + 8)) {
          CowData<int>::_ref((CowData<int> *)(lVar5 + 0x78),(CowData *)(param_6 + 8));
          return;
        }
        return;
      }
      if ((*(long *)(param_4 + 8) == 0) ||
         (*(long *)(lVar1 + -8) * 9 != *(long *)(*(long *)(param_4 + 8) + -8))) {
        uVar4 = 0x44d;
        pcVar2 = "Condition \"p_points.size() * 9 != p_point_sh.size()\" is true.";
      }
      else if ((*(long *)(param_5 + 8) == 0) || ((*(byte *)(*(long *)(param_5 + 8) + -8) & 3) == 0))
      {
        if ((*(long *)(param_6 + 8) == 0) ||
           (uVar3 = *(long *)(*(long *)(param_6 + 8) + -8) * -0x5555555555555555 +
                    0x2aaaaaaaaaaaaaaa,
           (uVar3 >> 1 | (ulong)((uVar3 & 1) != 0) << 0x3f) < 0x2aaaaaaaaaaaaaab))
        goto LAB_00105b9b;
        uVar4 = 0x44f;
        pcVar2 = "Condition \"(p_bsp_tree.size() % 6) != 0\" is true.";
      }
      else {
        uVar4 = 0x44e;
        pcVar2 = "Condition \"(p_tetrahedra.size() % 4) != 0\" is true.";
      }
      goto LAB_00105cb2;
    }
    if (*(int *)(lVar5 + 0xb0) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  uVar4 = 0x44a;
  pcVar2 = "Parameter \"lightmap\" is null.";
LAB_00105cb2:
  _err_print_error("lightmap_set_probe_capture_data","drivers/gles3/storage/light_storage.cpp",uVar4
                   ,pcVar2,0,0);
  return;
}



/* GLES3::LightStorage::lightmap_get_probe_capture_tetrahedra(RID) const */

long GLES3::LightStorage::lightmap_get_probe_capture_tetrahedra
               (long param_1,long param_2,ulong param_3)

{
  long lVar1;
  
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(param_2 + 0x1e4))) {
    lVar1 = ((param_3 & 0xffffffff) % (ulong)*(uint *)(param_2 + 0x1e0)) * 0xb8 +
            *(long *)(*(long *)(param_2 + 0x1d0) +
                     ((param_3 & 0xffffffff) / (ulong)*(uint *)(param_2 + 0x1e0)) * 8);
    if (*(int *)(lVar1 + 0xb0) == (int)(param_3 >> 0x20)) {
      *(undefined8 *)(param_1 + 8) = 0;
      if (*(long *)(lVar1 + 0x68) != 0) {
        CowData<int>::_ref((CowData<int> *)(param_1 + 8),(CowData *)(lVar1 + 0x68));
      }
      return param_1;
    }
    if (*(int *)(lVar1 + 0xb0) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("lightmap_get_probe_capture_tetrahedra","drivers/gles3/storage/light_storage.cpp"
                   ,0x46d,"Parameter \"lightmap\" is null.",0,0);
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}



/* HashSet<RID, HashMapHasherDefault, HashMapComparatorDefault<RID> >::erase(RID const&) [clone
   .isra.0] */

void __thiscall
HashSet<RID,HashMapHasherDefault,HashMapComparatorDefault<RID>>::erase
          (HashSet<RID,HashMapHasherDefault,HashMapComparatorDefault<RID>> *this,RID *param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint *puVar4;
  undefined4 uVar5;
  long lVar6;
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
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  uint uVar31;
  ulong uVar32;
  uint uVar33;
  uint *puVar34;
  int iVar35;
  uint uVar36;
  long lVar37;
  ulong uVar38;
  uint *puVar39;
  ulong uVar40;
  uint *puVar41;
  ulong uVar42;
  ulong uVar43;
  uint uVar44;
  
  lVar6 = *(long *)this;
  if ((lVar6 != 0) && (*(int *)(this + 0x24) != 0)) {
    lVar7 = *(long *)(this + 0x18);
    uVar31 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x20) * 4);
    uVar42 = CONCAT44(0,uVar31);
    lVar8 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x20) * 8);
    uVar32 = *(long *)param_1 * 0x3ffff - 1;
    uVar32 = (uVar32 ^ uVar32 >> 0x1f) * 0x15;
    uVar32 = (uVar32 ^ uVar32 >> 0xb) * 0x41;
    uVar32 = uVar32 >> 0x16 ^ uVar32;
    uVar40 = uVar32 & 0xffffffff;
    if ((int)uVar32 == 0) {
      uVar40 = 1;
    }
    auVar11._8_8_ = 0;
    auVar11._0_8_ = uVar40 * lVar8;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar42;
    lVar37 = SUB168(auVar11 * auVar21,8);
    uVar44 = *(uint *)(lVar7 + lVar37 * 4);
    iVar35 = SUB164(auVar11 * auVar21,8);
    if (uVar44 != 0) {
      uVar33 = 0;
      do {
        if ((uint)uVar40 == uVar44) {
          lVar9 = *(long *)(this + 8);
          uVar44 = *(uint *)(lVar9 + lVar37 * 4);
          uVar32 = (ulong)uVar44;
          if (*(long *)param_1 == *(long *)(lVar6 + uVar32 * 8)) {
            lVar10 = *(long *)(this + 0x10);
            puVar1 = (uint *)(lVar10 + uVar32 * 4);
            uVar33 = *puVar1;
            uVar40 = (ulong)uVar33;
            auVar15._8_8_ = 0;
            auVar15._0_8_ = (ulong)(uVar33 + 1) * lVar8;
            auVar25._8_8_ = 0;
            auVar25._0_8_ = uVar42;
            lVar37 = SUB168(auVar15 * auVar25,8) * 4;
            uVar36 = SUB164(auVar15 * auVar25,8);
            uVar43 = (ulong)uVar36;
            puVar39 = (uint *)(lVar7 + lVar37);
            if ((*puVar39 == 0) ||
               (auVar16._8_8_ = 0, auVar16._0_8_ = (ulong)*puVar39 * lVar8, auVar26._8_8_ = 0,
               auVar26._0_8_ = uVar42, auVar17._8_8_ = 0,
               auVar17._0_8_ = (ulong)((uVar36 + uVar31) - SUB164(auVar16 * auVar26,8)) * lVar8,
               auVar27._8_8_ = 0, auVar27._0_8_ = uVar42, SUB164(auVar17 * auVar27,8) == 0)) {
              uVar43 = (ulong)uVar33;
            }
            else {
              while( true ) {
                puVar34 = (uint *)(lVar37 + lVar9);
                puVar4 = (uint *)(lVar9 + uVar40 * 4);
                puVar41 = (uint *)(uVar40 * 4 + lVar7);
                puVar2 = (undefined4 *)(lVar10 + (ulong)*puVar34 * 4);
                puVar3 = (undefined4 *)(lVar10 + (ulong)*puVar4 * 4);
                uVar5 = *puVar3;
                *puVar3 = *puVar2;
                *puVar2 = uVar5;
                uVar33 = *puVar39;
                *puVar39 = *puVar41;
                *puVar41 = uVar33;
                uVar33 = *puVar34;
                *puVar34 = *puVar4;
                *puVar4 = uVar33;
                auVar20._8_8_ = 0;
                auVar20._0_8_ = (ulong)((int)uVar43 + 1) * lVar8;
                auVar30._8_8_ = 0;
                auVar30._0_8_ = uVar42;
                uVar38 = SUB168(auVar20 * auVar30,8);
                lVar37 = uVar38 * 4;
                puVar39 = (uint *)(lVar7 + lVar37);
                if ((*puVar39 == 0) ||
                   (auVar18._8_8_ = 0, auVar18._0_8_ = (ulong)*puVar39 * lVar8, auVar28._8_8_ = 0,
                   auVar28._0_8_ = uVar42, auVar19._8_8_ = 0,
                   auVar19._0_8_ =
                        (ulong)((SUB164(auVar20 * auVar30,8) + uVar31) - SUB164(auVar18 * auVar28,8)
                               ) * lVar8, auVar29._8_8_ = 0, auVar29._0_8_ = uVar42,
                   SUB164(auVar19 * auVar29,8) == 0)) break;
                uVar40 = uVar43;
                uVar43 = uVar38 & 0xffffffff;
              }
            }
            *(undefined4 *)(lVar7 + uVar43 * 4) = 0;
            uVar31 = *(int *)(this + 0x24) - 1;
            *(uint *)(this + 0x24) = uVar31;
            if (uVar31 <= uVar44) {
              return;
            }
            uVar33 = *(uint *)(lVar10 + (ulong)uVar31 * 4);
            *(undefined8 *)(lVar6 + uVar32 * 8) = *(undefined8 *)(lVar6 + (ulong)uVar31 * 8);
            *puVar1 = uVar33;
            *(uint *)(lVar9 + (ulong)*(uint *)(lVar10 + (ulong)*(uint *)(this + 0x24) * 4) * 4) =
                 uVar44;
            return;
          }
        }
        uVar33 = uVar33 + 1;
        auVar12._8_8_ = 0;
        auVar12._0_8_ = (ulong)(iVar35 + 1) * lVar8;
        auVar22._8_8_ = 0;
        auVar22._0_8_ = uVar42;
        lVar37 = SUB168(auVar12 * auVar22,8);
        uVar44 = *(uint *)(lVar7 + lVar37 * 4);
        iVar35 = SUB164(auVar12 * auVar22,8);
      } while ((uVar44 != 0) &&
              (auVar13._8_8_ = 0, auVar13._0_8_ = (ulong)uVar44 * lVar8, auVar23._8_8_ = 0,
              auVar23._0_8_ = uVar42, auVar14._8_8_ = 0,
              auVar14._0_8_ = (ulong)((uVar31 + iVar35) - SUB164(auVar13 * auVar23,8)) * lVar8,
              auVar24._8_8_ = 0, auVar24._0_8_ = uVar42, uVar33 <= SUB164(auVar14 * auVar24,8)));
    }
  }
  return;
}



/* GLES3::LightStorage::lightmap_free(RID) */

ulong __thiscall GLES3::LightStorage::lightmap_free(LightStorage *this,ulong param_2)

{
  long *plVar1;
  pthread_mutex_t *__mutex;
  long lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  
  if (param_2 != 0) {
    uVar5 = (uint)param_2;
    if (uVar5 < *(uint *)(this + 0x1e4)) {
      lVar8 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x1e0)) * 0xb8 +
              *(long *)(*(long *)(this + 0x1d0) +
                       ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x1e0)) * 8);
      iVar3 = *(int *)(lVar8 + 0xb0);
      iVar7 = (int)(param_2 >> 0x20);
      if (iVar3 == iVar7) {
        __mutex = (pthread_mutex_t *)(this + 0x1f8);
        Dependency::deleted_notify((RID *)(lVar8 + 0x80));
        iVar3 = pthread_mutex_lock(__mutex);
        if (iVar3 == 0) {
          if (uVar5 < *(uint *)(this + 0x1e4)) {
            uVar6 = (param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x1e0);
            lVar9 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x1e0)) * 0xb8;
            lVar8 = *(long *)(*(long *)(this + 0x1d0) + uVar6 * 8) + lVar9;
            if (*(int *)(lVar8 + 0xb0) < 0) {
              pthread_mutex_unlock(__mutex);
              uVar6 = 0;
              _err_print_error(&_LC19,"./core/templates/rid_owner.h",0x16c,"Method/function failed."
                               ,"Attempted to free an uninitialized or invalid RID",0);
            }
            else if (iVar7 == *(int *)(lVar8 + 0xb0)) {
              Dependency::~Dependency((Dependency *)(lVar8 + 0x80));
              if (*(long *)(lVar8 + 0x78) != 0) {
                LOCK();
                plVar1 = (long *)(*(long *)(lVar8 + 0x78) + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  lVar2 = *(long *)(lVar8 + 0x78);
                  *(undefined8 *)(lVar8 + 0x78) = 0;
                  Memory::free_static((void *)(lVar2 + -0x10),false);
                }
              }
              if (*(long *)(lVar8 + 0x68) != 0) {
                LOCK();
                plVar1 = (long *)(*(long *)(lVar8 + 0x68) + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  lVar2 = *(long *)(lVar8 + 0x68);
                  *(undefined8 *)(lVar8 + 0x68) = 0;
                  Memory::free_static((void *)(lVar2 + -0x10),false);
                }
              }
              if (*(long *)(lVar8 + 0x58) != 0) {
                LOCK();
                plVar1 = (long *)(*(long *)(lVar8 + 0x58) + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  lVar2 = *(long *)(lVar8 + 0x58);
                  *(undefined8 *)(lVar8 + 0x58) = 0;
                  Memory::free_static((void *)(lVar2 + -0x10),false);
                }
              }
              if (*(long *)(lVar8 + 0x48) != 0) {
                LOCK();
                plVar1 = (long *)(*(long *)(lVar8 + 0x48) + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  lVar2 = *(long *)(lVar8 + 0x48);
                  *(undefined8 *)(lVar8 + 0x48) = 0;
                  Memory::free_static((void *)(lVar2 + -0x10),false);
                }
              }
              lVar8 = *(long *)(this + 0x1d8);
              *(undefined4 *)(*(long *)(*(long *)(this + 0x1d0) + uVar6 * 8) + 0xb0 + lVar9) =
                   0xffffffff;
              uVar4 = *(int *)(this + 0x1e8) - 1;
              *(uint *)(this + 0x1e8) = uVar4;
              *(uint *)(*(long *)(lVar8 + ((ulong)uVar4 / (ulong)*(uint *)(this + 0x1e0)) * 8) +
                       ((ulong)uVar4 % (ulong)*(uint *)(this + 0x1e0)) * 4) = uVar5;
              uVar5 = pthread_mutex_unlock(__mutex);
              uVar6 = (ulong)uVar5;
            }
            else {
              pthread_mutex_unlock(__mutex);
              uVar6 = _err_print_error(&_LC19,"./core/templates/rid_owner.h",0x171,
                                       "Method/function failed.",0,0);
            }
          }
          else {
            pthread_mutex_unlock(__mutex);
            uVar6 = _err_print_error(&_LC19,"./core/templates/rid_owner.h",0x161,
                                     "Method/function failed.",0,0);
          }
          return uVar6;
        }
                    /* WARNING: Subroutine does not return */
        std::__throw_system_error(iVar3);
      }
      if (iVar3 + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
  }
  uVar6 = _err_print_error("lightmap_free","drivers/gles3/storage/light_storage.cpp",0x425,
                           "Parameter \"lightmap\" is null.",0,0);
  return uVar6;
}



/* GLES3::LightStorage::reflection_atlas_free(RID) */

undefined1  [16] __thiscall
GLES3::LightStorage::reflection_atlas_free(LightStorage *this,ulong param_2)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  ulong uVar4;
  char cVar5;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined1 auVar10 [16];
  long lStack_48;
  ulong uStack_40;
  
  uStack_40 = 0x106405;
  (**(code **)(*(long *)this + 0x270))(this,param_2,0,0);
  if (*(uint *)(this + 300) <= (uint)param_2) {
    uVar7 = 0x161;
LAB_00106522:
    auVar10 = _err_print_error(&_LC19,"./core/templates/rid_owner.h",uVar7,"Method/function failed."
                               ,0,0);
    return auVar10;
  }
  uVar4 = (param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x128);
  lVar8 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x128)) * 0x50;
  lVar9 = *(long *)(*(long *)(this + 0x118) + uVar4 * 8) + lVar8;
  if (*(int *)(lVar9 + 0x48) < 0) {
    lStack_48 = 0;
    _err_print_error(&_LC19,"./core/templates/rid_owner.h",0x16c,"Method/function failed.",
                     "Attempted to free an uninitialized or invalid RID",0);
  }
  else {
    if ((int)(param_2 >> 0x20) != *(int *)(lVar9 + 0x48)) {
      uVar7 = 0x171;
      goto LAB_00106522;
    }
    if (*(long *)(lVar9 + 0x40) != 0) {
      cVar5 = RefCounted::unreference();
      if (cVar5 != '\0') {
        pOVar3 = *(Object **)(lVar9 + 0x40);
        cVar5 = predelete_handler(pOVar3);
        if (cVar5 != '\0') {
          (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
          Memory::free_static(pOVar3,false);
        }
      }
    }
    if (*(long *)(lVar9 + 0x38) != 0) {
      LOCK();
      plVar1 = (long *)(*(long *)(lVar9 + 0x38) + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar2 = *(long *)(lVar9 + 0x38);
        *(undefined8 *)(lVar9 + 0x38) = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    lVar9 = *(long *)(this + 0x120);
    *(undefined4 *)(*(long *)(*(long *)(this + 0x118) + uVar4 * 8) + 0x48 + lVar8) = 0xffffffff;
    uVar6 = *(int *)(this + 0x130) - 1;
    *(uint *)(this + 0x130) = uVar6;
    uStack_40 = (ulong)uVar6 % (ulong)*(uint *)(this + 0x128);
    lStack_48 = *(long *)(lVar9 + ((ulong)uVar6 / (ulong)*(uint *)(this + 0x128)) * 8);
    *(uint *)(lStack_48 + uStack_40 * 4) = (uint)param_2;
  }
  auVar10._8_8_ = uStack_40;
  auVar10._0_8_ = lStack_48;
  return auVar10;
}



/* GLES3::LightStorage::shadow_atlas_free(RID) */

void __thiscall GLES3::LightStorage::shadow_atlas_free(LightStorage *this,ulong param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  int *piVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  void *pvVar9;
  long lVar10;
  long lVar11;
  
  (**(code **)(*(long *)this + 0x398))(this,param_2,0,1);
  if ((uint)param_2 < *(uint *)(this + 0x29c)) {
    uVar3 = (param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x298);
    lVar10 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x298)) * 0x140;
    lVar11 = *(long *)(*(long *)(this + 0x288) + uVar3 * 8) + lVar10;
    if (*(int *)(lVar11 + 0x138) < 0) {
      _err_print_error(&_LC19,"./core/templates/rid_owner.h",0x16c,"Method/function failed.",
                       "Attempted to free an uninitialized or invalid RID",0,0);
      return;
    }
    if ((int)(param_2 >> 0x20) == *(int *)(lVar11 + 0x138)) {
      pvVar9 = *(void **)(lVar11 + 0x110);
      if (pvVar9 != (void *)0x0) {
        if (*(int *)(lVar11 + 0x134) != 0) {
          uVar4 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar11 + 0x130) * 4);
          if (uVar4 == 0) {
            *(undefined4 *)(lVar11 + 0x134) = 0;
            *(undefined1 (*) [16])(lVar11 + 0x120) = (undefined1  [16])0x0;
          }
          else {
            lVar7 = 0;
            do {
              piVar5 = (int *)(*(long *)(lVar11 + 0x118) + lVar7);
              if (*piVar5 != 0) {
                *piVar5 = 0;
                Memory::free_static(*(void **)((long)pvVar9 + lVar7 * 2),false);
                pvVar9 = *(void **)(lVar11 + 0x110);
                *(undefined8 *)((long)pvVar9 + lVar7 * 2) = 0;
              }
              lVar7 = lVar7 + 4;
            } while (lVar7 != (ulong)uVar4 * 4);
            *(undefined4 *)(lVar11 + 0x134) = 0;
            *(undefined1 (*) [16])(lVar11 + 0x120) = (undefined1  [16])0x0;
            if (pvVar9 == (void *)0x0) goto LAB_001066c1;
          }
        }
        Memory::free_static(pvVar9,false);
        Memory::free_static(*(void **)(lVar11 + 0x118),false);
      }
LAB_001066c1:
      lVar7 = lVar11 + 0xe0;
      do {
        lVar8 = lVar7 + -0x38;
        if (*(void **)(lVar7 + -8) != (void *)0x0) {
          if (*(int *)(lVar7 + -0x10) != 0) {
            *(undefined4 *)(lVar7 + -0x10) = 0;
          }
          Memory::free_static(*(void **)(lVar7 + -8),false);
        }
        if (*(void **)(lVar7 + -0x18) != (void *)0x0) {
          if (*(int *)(lVar7 + -0x20) != 0) {
            *(undefined4 *)(lVar7 + -0x20) = 0;
          }
          Memory::free_static(*(void **)(lVar7 + -0x18),false);
        }
        if (*(long *)(lVar7 + -0x28) != 0) {
          LOCK();
          plVar1 = (long *)(*(long *)(lVar7 + -0x28) + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            lVar2 = *(long *)(lVar7 + -0x28);
            *(undefined8 *)(lVar7 + -0x28) = 0;
            Memory::free_static((void *)(lVar2 + -0x10),false);
          }
        }
        lVar7 = lVar8;
      } while (lVar11 != lVar8);
      lVar11 = *(long *)(this + 0x290);
      *(undefined4 *)(*(long *)(*(long *)(this + 0x288) + uVar3 * 8) + 0x138 + lVar10) = 0xffffffff;
      uVar4 = *(int *)(this + 0x2a0) - 1;
      *(uint *)(this + 0x2a0) = uVar4;
      *(uint *)(*(long *)(lVar11 + ((ulong)uVar4 / (ulong)*(uint *)(this + 0x298)) * 8) +
               ((ulong)uVar4 % (ulong)*(uint *)(this + 0x298)) * 4) = (uint)param_2;
      return;
    }
    uVar6 = 0x171;
  }
  else {
    uVar6 = 0x161;
  }
  _err_print_error(&_LC19,"./core/templates/rid_owner.h",uVar6,"Method/function failed.",0,0);
  return;
}



/* HashMap<unsigned int, GLES3::Utilities::ResourceAllocation, HashMapHasherDefault,
   HashMapComparatorDefault<unsigned int>, DefaultTypedAllocator<HashMapElement<unsigned int,
   GLES3::Utilities::ResourceAllocation> > >::erase(unsigned int const&) [clone .isra.0] */

void __thiscall
HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
::erase(HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
        *this,uint *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
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
  uint uVar28;
  uint uVar29;
  ulong uVar30;
  ulong uVar31;
  uint uVar32;
  uint uVar33;
  ulong uVar34;
  ulong uVar35;
  long *plVar36;
  uint uVar37;
  uint *puVar38;
  ulong uVar39;
  
  lVar6 = *(long *)(this + 8);
  if ((lVar6 != 0) && (*(int *)(this + 0x2c) != 0)) {
    uVar33 = *param_1;
    uVar5 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    uVar39 = CONCAT44(0,uVar5);
    uVar7 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    uVar28 = (uVar33 >> 0x10 ^ uVar33) * -0x7a143595;
    uVar28 = (uVar28 ^ uVar28 >> 0xd) * -0x3d4d51cb;
    uVar32 = uVar28 ^ uVar28 >> 0x10;
    if (uVar28 == uVar28 >> 0x10) {
      uVar32 = 1;
      uVar30 = uVar7;
    }
    else {
      uVar30 = uVar32 * uVar7;
    }
    lVar8 = *(long *)(this + 0x10);
    auVar10._8_8_ = 0;
    auVar10._0_8_ = uVar39;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar30;
    uVar30 = SUB168(auVar10 * auVar19,8);
    uVar28 = *(uint *)(lVar8 + uVar30 * 4);
    uVar34 = (ulong)SUB164(auVar10 * auVar19,8);
    if (uVar28 != 0) {
      uVar37 = 0;
      do {
        auVar13._8_8_ = 0;
        auVar13._0_8_ = ((int)uVar34 + 1) * uVar7;
        auVar22._8_8_ = 0;
        auVar22._0_8_ = uVar39;
        uVar31 = SUB168(auVar13 * auVar22,8);
        uVar29 = SUB164(auVar13 * auVar22,8);
        if ((uVar32 == uVar28) && (uVar33 == *(uint *)(*(long *)(lVar6 + uVar30 * 8) + 0x10))) {
          puVar38 = (uint *)(lVar8 + uVar31 * 4);
          uVar33 = *puVar38;
          if ((uVar33 != 0) &&
             (auVar14._8_8_ = 0, auVar14._0_8_ = uVar33 * uVar7, auVar23._8_8_ = 0,
             auVar23._0_8_ = uVar39, auVar15._8_8_ = 0,
             auVar15._0_8_ = ((uVar29 + uVar5) - SUB164(auVar14 * auVar23,8)) * uVar7,
             auVar24._8_8_ = 0, auVar24._0_8_ = uVar39, uVar30 = (ulong)uVar29, uVar35 = uVar34,
             SUB164(auVar15 * auVar24,8) != 0)) {
            while( true ) {
              uVar34 = uVar30;
              puVar1 = (uint *)(lVar8 + uVar35 * 4);
              *puVar38 = *puVar1;
              puVar2 = (undefined8 *)(lVar6 + uVar31 * 8);
              *puVar1 = uVar33;
              puVar3 = (undefined8 *)(lVar6 + uVar35 * 8);
              uVar9 = *puVar2;
              *puVar2 = *puVar3;
              *puVar3 = uVar9;
              auVar18._8_8_ = 0;
              auVar18._0_8_ = ((int)uVar34 + 1) * uVar7;
              auVar27._8_8_ = 0;
              auVar27._0_8_ = uVar39;
              uVar31 = SUB168(auVar18 * auVar27,8);
              puVar38 = (uint *)(lVar8 + uVar31 * 4);
              uVar33 = *puVar38;
              if ((uVar33 == 0) ||
                 (auVar16._8_8_ = 0, auVar16._0_8_ = uVar33 * uVar7, auVar25._8_8_ = 0,
                 auVar25._0_8_ = uVar39, auVar17._8_8_ = 0,
                 auVar17._0_8_ =
                      ((SUB164(auVar18 * auVar27,8) + uVar5) - SUB164(auVar16 * auVar25,8)) * uVar7,
                 auVar26._8_8_ = 0, auVar26._0_8_ = uVar39, SUB164(auVar17 * auVar26,8) == 0))
              break;
              uVar30 = uVar31 & 0xffffffff;
              uVar35 = uVar34;
            }
          }
          plVar4 = (long *)(lVar6 + uVar34 * 8);
          *(undefined4 *)(lVar8 + uVar34 * 4) = 0;
          plVar36 = (long *)*plVar4;
          if (*(long **)(this + 0x18) == plVar36) {
            *(long *)(this + 0x18) = *plVar36;
            plVar36 = (long *)*plVar4;
          }
          if (*(long **)(this + 0x20) == plVar36) {
            *(long *)(this + 0x20) = plVar36[1];
            plVar36 = (long *)*plVar4;
          }
          if ((long *)plVar36[1] != (long *)0x0) {
            *(long *)plVar36[1] = *plVar36;
            plVar36 = (long *)*plVar4;
          }
          if (*plVar36 != 0) {
            *(long *)(*plVar36 + 8) = plVar36[1];
            plVar36 = (long *)*plVar4;
          }
          Memory::free_static(plVar36,false);
          *(undefined8 *)(*(long *)(this + 8) + uVar34 * 8) = 0;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + -1;
          return;
        }
        uVar28 = *(uint *)(lVar8 + uVar31 * 4);
        uVar34 = uVar31 & 0xffffffff;
        uVar37 = uVar37 + 1;
      } while ((uVar28 != 0) &&
              (auVar11._8_8_ = 0, auVar11._0_8_ = uVar28 * uVar7, auVar20._8_8_ = 0,
              auVar20._0_8_ = uVar39, auVar12._8_8_ = 0,
              auVar12._0_8_ = ((uVar5 + uVar29) - SUB164(auVar11 * auVar20,8)) * uVar7,
              auVar21._8_8_ = 0, auVar21._0_8_ = uVar39, uVar30 = uVar31,
              uVar37 <= SUB164(auVar12 * auVar21,8)));
    }
  }
  return;
}



/* HashMap<RID, unsigned int, HashMapHasherDefault, HashMapComparatorDefault<RID>,
   DefaultTypedAllocator<HashMapElement<RID, unsigned int> > >::erase(RID const&) [clone .isra.0] */

void __thiscall
HashMap<RID,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,unsigned_int>>>
::erase(HashMap<RID,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,unsigned_int>>>
        *this,RID *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
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
  uint uVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  long *plVar34;
  ulong uVar35;
  uint uVar36;
  uint uVar37;
  uint *puVar38;
  
  lVar6 = *(long *)(this + 8);
  if ((lVar6 != 0) && (*(int *)(this + 0x2c) != 0)) {
    lVar7 = *(long *)(this + 0x10);
    uVar5 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    uVar35 = CONCAT44(0,uVar5);
    lVar8 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    uVar29 = *(long *)param_1 * 0x3ffff - 1;
    uVar29 = (uVar29 ^ uVar29 >> 0x1f) * 0x15;
    uVar29 = (uVar29 ^ uVar29 >> 0xb) * 0x41;
    uVar29 = uVar29 >> 0x16 ^ uVar29;
    uVar32 = uVar29 & 0xffffffff;
    if ((int)uVar29 == 0) {
      uVar32 = 1;
    }
    auVar11._8_8_ = 0;
    auVar11._0_8_ = uVar32 * lVar8;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = uVar35;
    uVar29 = SUB168(auVar11 * auVar20,8);
    uVar37 = *(uint *)(lVar7 + uVar29 * 4);
    uVar33 = (ulong)SUB164(auVar11 * auVar20,8);
    if (uVar37 != 0) {
      uVar36 = 0;
      do {
        auVar14._8_8_ = 0;
        auVar14._0_8_ = (ulong)((int)uVar33 + 1) * lVar8;
        auVar23._8_8_ = 0;
        auVar23._0_8_ = uVar35;
        uVar31 = SUB168(auVar14 * auVar23,8);
        uVar30 = SUB164(auVar14 * auVar23,8);
        if (((uint)uVar32 == uVar37) &&
           (*(long *)param_1 == *(long *)(*(long *)(lVar6 + uVar29 * 8) + 0x10))) {
          puVar38 = (uint *)(lVar7 + uVar31 * 4);
          uVar37 = *puVar38;
          if ((uVar37 != 0) &&
             (auVar15._8_8_ = 0, auVar15._0_8_ = (ulong)uVar37 * lVar8, auVar24._8_8_ = 0,
             auVar24._0_8_ = uVar35, auVar16._8_8_ = 0,
             auVar16._0_8_ = (ulong)((uVar30 + uVar5) - SUB164(auVar15 * auVar24,8)) * lVar8,
             auVar25._8_8_ = 0, auVar25._0_8_ = uVar35, uVar29 = (ulong)uVar30, uVar32 = uVar33,
             SUB164(auVar16 * auVar25,8) != 0)) {
            while( true ) {
              uVar33 = uVar29;
              puVar1 = (uint *)(lVar7 + uVar32 * 4);
              *puVar38 = *puVar1;
              puVar2 = (undefined8 *)(lVar6 + uVar31 * 8);
              *puVar1 = uVar37;
              puVar3 = (undefined8 *)(lVar6 + uVar32 * 8);
              uVar9 = *puVar2;
              *puVar2 = *puVar3;
              *puVar3 = uVar9;
              auVar19._8_8_ = 0;
              auVar19._0_8_ = (ulong)((int)uVar33 + 1) * lVar8;
              auVar28._8_8_ = 0;
              auVar28._0_8_ = uVar35;
              uVar31 = SUB168(auVar19 * auVar28,8);
              puVar38 = (uint *)(lVar7 + uVar31 * 4);
              uVar37 = *puVar38;
              if ((uVar37 == 0) ||
                 (auVar17._8_8_ = 0, auVar17._0_8_ = (ulong)uVar37 * lVar8, auVar26._8_8_ = 0,
                 auVar26._0_8_ = uVar35, auVar18._8_8_ = 0,
                 auVar18._0_8_ =
                      (ulong)((SUB164(auVar19 * auVar28,8) + uVar5) - SUB164(auVar17 * auVar26,8)) *
                      lVar8, auVar27._8_8_ = 0, auVar27._0_8_ = uVar35,
                 SUB164(auVar18 * auVar27,8) == 0)) break;
              uVar29 = uVar31 & 0xffffffff;
              uVar32 = uVar33;
            }
          }
          plVar4 = (long *)(lVar6 + uVar33 * 8);
          *(undefined4 *)(lVar7 + uVar33 * 4) = 0;
          plVar34 = (long *)*plVar4;
          if (*(long **)(this + 0x18) == plVar34) {
            *(long *)(this + 0x18) = *plVar34;
            plVar34 = (long *)*plVar4;
            if (*(long **)(this + 0x20) != plVar34) goto LAB_00106ca9;
          }
          else if (*(long **)(this + 0x20) != plVar34) {
LAB_00106ca9:
            plVar10 = (long *)plVar34[1];
            goto joined_r0x00106cb0;
          }
          *(long *)(this + 0x20) = plVar34[1];
          plVar34 = (long *)*plVar4;
          plVar10 = (long *)plVar34[1];
joined_r0x00106cb0:
          if (plVar10 != (long *)0x0) {
            *plVar10 = *plVar34;
            plVar34 = (long *)*plVar4;
          }
          if (*plVar34 != 0) {
            *(long *)(*plVar34 + 8) = plVar34[1];
            plVar34 = (long *)*plVar4;
          }
          Memory::free_static(plVar34,false);
          *(undefined8 *)(*(long *)(this + 8) + uVar33 * 8) = 0;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + -1;
          return;
        }
        uVar37 = *(uint *)(lVar7 + uVar31 * 4);
        uVar33 = uVar31 & 0xffffffff;
        uVar36 = uVar36 + 1;
      } while ((uVar37 != 0) &&
              (auVar12._8_8_ = 0, auVar12._0_8_ = (ulong)uVar37 * lVar8, auVar21._8_8_ = 0,
              auVar21._0_8_ = uVar35, auVar13._8_8_ = 0,
              auVar13._0_8_ = (ulong)((uVar5 + uVar30) - SUB164(auVar12 * auVar21,8)) * lVar8,
              auVar22._8_8_ = 0, auVar22._0_8_ = uVar35, uVar29 = uVar31,
              uVar36 <= SUB164(auVar13 * auVar22,8)));
    }
  }
  return;
}



/* GLES3::LightStorage::get_singleton() */

undefined8 GLES3::LightStorage::get_singleton(void)

{
  return singleton;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GLES3::LightStorage::LightStorage() */

void __thiscall GLES3::LightStorage::LightStorage(LightStorage *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  LightStorage LVar4;
  int iVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  long local_50;
  int local_48 [6];
  long local_30;
  
  uVar1 = _UNK_001165d8;
  uVar6 = __LC141;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x20) = uVar6;
  *(undefined8 *)(this + 0x28) = uVar1;
  *(undefined ***)this = &PTR__LightStorage_00115ff8;
  *(undefined ***)(this + 8) = &PTR__RID_Alloc_00115ef8;
  *(undefined1 (*) [16])(this + 0x10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x48) = (undefined1  [16])0x0;
  *(undefined4 *)(this + 0x48) = 1;
  *(undefined1 (*) [16])(this + 0x38) = (undefined1  [16])0x0;
  uVar6 = Memory::alloc_static(0x1c10,false);
  *(undefined8 *)(this + 0x10) = uVar6;
  uVar6 = Memory::alloc_static((ulong)*(uint *)(this + 0x2c) << 3,false);
  *(undefined8 *)(this + 0x18) = uVar6;
  *(undefined ***)(this + 0x60) = &PTR__RID_Alloc_00115f18;
  *(undefined1 (*) [16])(this + 0xa0) = (undefined1  [16])0x0;
  uVar1 = _UNK_001165e8;
  uVar6 = __LC142;
  *(undefined1 (*) [16])(this + 0xf8) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x78) = uVar6;
  *(undefined8 *)(this + 0x80) = uVar1;
  uVar1 = _UNK_001165f8;
  uVar6 = __LC143;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined4 *)(this + 0xa0) = 1;
  *(undefined ***)(this + 0xb8) = &PTR__RID_Alloc_00115f38;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined4 *)(this + 0xf8) = 1;
  *(undefined1 (*) [16])(this + 0x90) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xe8) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0xd0) = uVar6;
  *(undefined8 *)(this + 0xd8) = uVar1;
  uVar6 = Memory::alloc_static(0x1108,false);
  *(undefined8 *)(this + 0xc0) = uVar6;
  uVar6 = Memory::alloc_static((ulong)*(uint *)(this + 0xdc) << 3,false);
  *(undefined8 *)(this + 200) = uVar6;
  *(undefined ***)(this + 0x110) = &PTR__RID_Alloc_00115f58;
  *(undefined ***)(this + 0x168) = &PTR__RID_Alloc_00115f78;
  uVar1 = _UNK_00116608;
  uVar6 = __LC144;
  *(undefined1 (*) [16])(this + 0x150) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x1a8) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x128) = uVar6;
  *(undefined8 *)(this + 0x130) = uVar1;
  uVar1 = _UNK_00116618;
  uVar6 = __LC145;
  *(undefined1 (*) [16])(this + 0x208) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x140) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x198) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x1f8) = (undefined1  [16])0x0;
  *(undefined ***)(this + 0x1c8) = &PTR__RID_Alloc_00115f98;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined8 *)(this + 0x160) = 0;
  *(undefined4 *)(this + 0x150) = 1;
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined8 *)(this + 0x178) = 0;
  *(undefined8 *)(this + 400) = 0;
  *(undefined8 *)(this + 0x1b8) = 0;
  *(undefined4 *)(this + 0x1a8) = 1;
  *(undefined4 *)(this + 0x1c0) = 0x40800000;
  *(undefined8 *)(this + 0x1d0) = 0;
  *(undefined8 *)(this + 0x1d8) = 0;
  *(undefined8 *)(this + 0x1f0) = 0;
  *(undefined8 *)(this + 0x218) = 0;
  *(undefined4 *)(this + 0x208) = 1;
  *(undefined8 *)(this + 0x180) = uVar6;
  *(undefined8 *)(this + 0x188) = uVar1;
  uVar6 = _UNK_00116628;
  *(undefined8 *)(this + 0x1e0) = __LC147;
  *(undefined8 *)(this + 0x1e8) = uVar6;
  uVar6 = Memory::alloc_static(0x1608,false);
  *(undefined8 *)(this + 0x1d0) = uVar6;
  uVar6 = Memory::alloc_static((ulong)*(uint *)(this + 0x1ec) << 3,false);
  *(undefined8 *)(this + 0x1d8) = uVar6;
  *(undefined ***)(this + 0x220) = &PTR__RID_Alloc_00115fb8;
  *(undefined1 (*) [16])(this + 0x260) = (undefined1  [16])0x0;
  uVar1 = _UNK_00116638;
  uVar6 = __LC148;
  *(undefined1 (*) [16])(this + 0x2c0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x250) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x2b0) = (undefined1  [16])0x0;
  uVar3 = _UNK_00116648;
  uVar2 = __LC149;
  *(undefined8 *)(this + 0x228) = 0;
  *(undefined8 *)(this + 0x230) = 0;
  *(undefined8 *)(this + 0x248) = 0;
  *(undefined8 *)(this + 0x270) = 0;
  *(undefined4 *)(this + 0x260) = 1;
  *(undefined8 *)(this + 0x278) = 500;
  *(undefined ***)(this + 0x280) = &PTR__RID_Alloc_00115fd8;
  *(undefined8 *)(this + 0x288) = 0;
  *(undefined8 *)(this + 0x290) = 0;
  *(undefined8 *)(this + 0x2a8) = 0;
  *(undefined8 *)(this + 0x2d0) = 0;
  *(undefined4 *)(this + 0x2c0) = 1;
  *(undefined8 *)(this + 0x2d8) = 0;
  *(undefined8 *)(this + 0x2e0) = 0;
  this[0x2e8] = (LightStorage)0x1;
  *(undefined4 *)(this + 0x2ec) = 0;
  *(undefined8 *)(this + 0x238) = uVar6;
  *(undefined8 *)(this + 0x240) = uVar1;
  *(undefined8 *)(this + 0x298) = uVar2;
  *(undefined8 *)(this + 0x2a0) = uVar3;
  singleton = this;
  ProjectSettings::get_singleton();
  StringName::StringName
            ((StringName *)&local_50,"rendering/lights_and_shadows/directional_shadow/size",false);
  ProjectSettings::get_setting_with_override((StringName *)local_48);
  iVar5 = Variant::operator_cast_to_int((Variant *)local_48);
  *(int *)(this + 0x2e4) = iVar5;
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  ProjectSettings::get_singleton();
  StringName::StringName
            ((StringName *)&local_50,"rendering/lights_and_shadows/directional_shadow/16_bits",false
            );
  ProjectSettings::get_setting_with_override((StringName *)local_48);
  LVar4 = (LightStorage)Variant::operator_cast_to_bool((Variant *)local_48);
  this[0x2e8] = LVar4;
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



/* GLES3::LightStorage::reflection_probe_get_dependency(RID) const */

long __thiscall
GLES3::LightStorage::reflection_probe_get_dependency(LightStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0xd4))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0xd0)) * 0x90 +
            *(long *)(*(long *)(this + 0xc0) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0xd0)) * 8);
    iVar1 = *(int *)(lVar2 + 0x88);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return lVar2 + 0x58;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("reflection_probe_get_dependency","drivers/gles3/storage/light_storage.cpp",0x288
                   ,"Parameter \"reflection_probe\" is null.",0,0);
  return 0;
}



/* GLES3::LightStorage::reflection_probe_instance_get_texture(RID) */

undefined4 __thiscall
GLES3::LightStorage::reflection_probe_instance_get_texture(LightStorage *this,ulong param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  
  if ((param_2 == 0) || (*(uint *)(this + 0x184) <= (uint)param_2)) {
LAB_00107450:
    _err_print_error("reflection_probe_instance_get_texture",
                     "drivers/gles3/storage/light_storage.cpp",0x407,"Parameter \"rpi\" is null.",0,
                     0);
    return 0;
  }
  lVar1 = *(long *)(*(long *)(this + 0x170) +
                   ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x180)) * 8) +
          ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x180)) * 0x68;
  if (*(int *)(lVar1 + 0x60) != (int)(param_2 >> 0x20)) {
    if (*(int *)(lVar1 + 0x60) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
    goto LAB_00107450;
  }
  uVar3 = *(ulong *)(lVar1 + 0x10);
  if ((uVar3 == 0) || (*(uint *)(this + 300) <= (uint)uVar3)) {
LAB_00107498:
    _err_print_error("reflection_probe_instance_get_texture",
                     "drivers/gles3/storage/light_storage.cpp",0x40a,"Parameter \"atlas\" is null.",
                     0,0);
    return 0;
  }
  lVar6 = ((uVar3 & 0xffffffff) % (ulong)*(uint *)(this + 0x128)) * 0x50 +
          *(long *)(*(long *)(this + 0x118) +
                   ((uVar3 & 0xffffffff) / (ulong)*(uint *)(this + 0x128)) * 8);
  iVar2 = *(int *)(lVar6 + 0x48);
  if (iVar2 != (int)(uVar3 >> 0x20)) {
    if (iVar2 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
    goto LAB_00107498;
  }
  lVar5 = (long)*(int *)(lVar1 + 8);
  lVar1 = *(long *)(lVar6 + 0x38);
  if (lVar5 < 0) {
    if (lVar1 != 0) {
      lVar6 = *(long *)(lVar1 + -8);
      goto LAB_001073fd;
    }
  }
  else if (lVar1 != 0) {
    lVar6 = *(long *)(lVar1 + -8);
    if (lVar5 < lVar6) {
      return *(undefined4 *)(lVar1 + 0xc + lVar5 * 0x30);
    }
    goto LAB_001073fd;
  }
  lVar6 = 0;
LAB_001073fd:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,lVar5,lVar6,"p_index","size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}



/* GLES3::LightStorage::reflection_probe_instance_get_framebuffer(RID, int) */

undefined4 __thiscall
GLES3::LightStorage::reflection_probe_instance_get_framebuffer
          (LightStorage *this,ulong param_2,uint param_3)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  
  if ((param_2 == 0) || (*(uint *)(this + 0x184) <= (uint)param_2)) {
LAB_00107690:
    _err_print_error("reflection_probe_instance_get_framebuffer",
                     "drivers/gles3/storage/light_storage.cpp",0x411,"Parameter \"rpi\" is null.",0,
                     0);
    return 0;
  }
  lVar1 = *(long *)(*(long *)(this + 0x170) +
                   ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x180)) * 8) +
          ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x180)) * 0x68;
  if (*(int *)(lVar1 + 0x60) != (int)(param_2 >> 0x20)) {
    if (*(int *)(lVar1 + 0x60) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
    goto LAB_00107690;
  }
  if (5 < param_3) {
    _err_print_index_error
              ("reflection_probe_instance_get_framebuffer","drivers/gles3/storage/light_storage.cpp"
               ,0x412,(long)(int)param_3,6,"p_index","6","",false,false);
    return 0;
  }
  uVar3 = *(ulong *)(lVar1 + 0x10);
  if ((uVar3 == 0) || (*(uint *)(this + 300) <= (uint)uVar3)) {
LAB_00107728:
    _err_print_error("reflection_probe_instance_get_framebuffer",
                     "drivers/gles3/storage/light_storage.cpp",0x415,"Parameter \"atlas\" is null.",
                     0,0);
    return 0;
  }
  lVar6 = ((uVar3 & 0xffffffff) % (ulong)*(uint *)(this + 0x128)) * 0x50 +
          *(long *)(*(long *)(this + 0x118) +
                   ((uVar3 & 0xffffffff) / (ulong)*(uint *)(this + 0x128)) * 8);
  iVar2 = *(int *)(lVar6 + 0x48);
  if (iVar2 != (int)(uVar3 >> 0x20)) {
    if (iVar2 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
    goto LAB_00107728;
  }
  lVar5 = (long)*(int *)(lVar1 + 8);
  lVar1 = *(long *)(lVar6 + 0x38);
  if (lVar5 < 0) {
    if (lVar1 != 0) {
      lVar6 = *(long *)(lVar1 + -8);
      goto LAB_0010763d;
    }
  }
  else if (lVar1 != 0) {
    lVar6 = *(long *)(lVar1 + -8);
    if (lVar5 < lVar6) {
      return *(undefined4 *)(lVar1 + lVar5 * 0x30 + 0x10 + (long)(int)param_3 * 4);
    }
    goto LAB_0010763d;
  }
  lVar6 = 0;
LAB_0010763d:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,lVar5,lVar6,"p_index","size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GLES3::LightStorage::_shadow_atlas_find_shadow(GLES3::LightStorage::ShadowAtlas*, int*, int, int,
   unsigned long, bool, int&, int&) */

undefined8 __thiscall
GLES3::LightStorage::_shadow_atlas_find_shadow
          (LightStorage *this,ShadowAtlas *param_1,int *param_2,int param_3,int param_4,
          ulong param_5,bool param_6,int *param_7,int *param_8)

{
  long *plVar1;
  ShadowAtlas *pSVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char *pcVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong *puVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  long lVar17;
  long lVar18;
  int iVar19;
  int iVar20;
  long in_FS_OFFSET;
  undefined4 local_68;
  undefined4 local_64;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (-1 < param_3 + -1) {
    lVar18 = (long)(param_3 + -1);
    do {
      iVar4 = param_2[lVar18];
      lVar17 = (long)iVar4;
      pSVar2 = param_1 + lVar17 * 0x38;
      if (*(int *)pSVar2 == param_4) break;
      puVar13 = *(ulong **)(pSVar2 + 0x10);
      if (puVar13 == (ulong *)0x0) {
        if (*(int *)(pSVar2 + 0x18) < 0) goto LAB_001079dc;
      }
      else {
        iVar14 = (int)puVar13[-1];
        if (*(int *)(pSVar2 + 0x18) < iVar14) {
LAB_001079dc:
          local_68 = 0;
          (*_glad_glGenFramebuffers)(1,&local_68);
          (*_glad_glBindFramebuffer)(0x8d40,local_68);
          local_64 = 0;
          (*_glad_glGenTextures)(1,&local_64);
          (*_glad_glActiveTexture)(0x84c0);
          uVar12 = (ulong)(uint)(*(int *)(param_1 + 0xf4) >> 1) /
                   (ulong)*(uint *)(param_1 + lVar17 * 0x38);
          iVar14 = 0x81a6 - (uint)(param_1[0xf8] != (ShadowAtlas)0x0);
          iVar20 = (-(uint)(param_1[0xf8] == (ShadowAtlas)0x0) & 2) + 0x1403;
          if (param_6) {
            (*_glad_glBindTexture)(0x8513,local_64);
            iVar19 = (int)uVar12 + (int)(uVar12 >> 0x1f) >> 1;
            iVar15 = 0x8515;
            do {
              iVar16 = iVar15 + 1;
              (*_glad_glTexImage2D)(iVar15,0,iVar14,iVar19,iVar19,0,0x1902,iVar20,0);
              iVar15 = iVar16;
            } while (iVar16 != 0x851b);
            (*_glad_glTexParameteri)(0x8513,0x2801,0x2601);
            (*_glad_glTexParameteri)(0x8513,0x2800,0x2601);
            (*_glad_glTexParameteri)(0x8513,0x2802,0x812f);
            (*_glad_glTexParameteri)(0x8513,0x2803,0x812f);
            (*_glad_glTexParameteri)(0x8513,0x8072,0x812f);
            (*_glad_glTexParameteri)(0x8513,0x884c,0x884e);
            (*_glad_glTexParameteri)(0x8513,0x884d,0x204);
            (*_glad_glFramebufferTexture2D)(0x8d40,0x8d00,0x8515,local_64,0);
            iVar14 = (*_glad_glCheckFramebufferStatus)(0x8d40);
            if (iVar14 != 0x8cd5) {
              GLES3::TextureStorage::get_singleton();
              if (iVar14 == 0x8cd6) {
                local_58 = "GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT";
                local_50 = 0x24;
LAB_00107e76:
                local_60 = 0;
                String::parse_latin1((StrRange *)&local_60);
              }
              else {
                if (iVar14 == 0x8cd7) {
                  local_58 = "GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT";
                  local_50 = 0x2c;
                  goto LAB_00107e76;
                }
                if (iVar14 == 0x8cdb) {
                  local_58 = "GL_FRAMEBUFFER_INCOMPLETE_DRAW_BUFFER";
                  local_50 = 0x25;
                  goto LAB_00107e76;
                }
                if (iVar14 == 0x8cdc) {
                  local_58 = "GL_FRAMEBUFFER_INCOMPLETE_READ_BUFFER";
                  local_50 = 0x25;
                  goto LAB_00107e76;
                }
                itos((long)&local_60);
              }
              operator+((char *)&local_58,
                        (String_conflict *)
                        "Could not create omni light shadow framebuffer, status: ");
              _err_print_error("_shadow_atlas_find_shadow","drivers/gles3/storage/light_storage.cpp"
                               ,0x602,&local_58,0,0);
              pcVar10 = local_58;
              if (local_58 != (char *)0x0) {
                LOCK();
                plVar1 = (long *)(local_58 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  local_58 = (char *)0x0;
                  Memory::free_static(pcVar10 + -0x10,false);
                }
              }
              lVar18 = local_60;
              if (local_60 != 0) {
                LOCK();
                plVar1 = (long *)(local_60 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  local_60 = 0;
                  Memory::free_static((void *)(lVar18 + -0x10),false);
                }
              }
            }
            (*_glad_glBindTexture)(0x8513,0);
          }
          else {
            (*_glad_glBindTexture)(0xde1);
            (*_glad_glTexImage2D)(0xde1,0,iVar14,uVar12,uVar12,0,0x1902,iVar20,0);
            (*_glad_glTexParameteri)(0xde1,0x2801,0x2601);
            (*_glad_glTexParameteri)(0xde1,0x2800,0x2601);
            (*_glad_glTexParameteri)(0xde1,0x2802,0x812f);
            (*_glad_glTexParameteri)(0xde1,0x2803,0x812f);
            (*_glad_glTexParameteri)(0xde1,0x884c,0x884e);
            (*_glad_glTexParameteri)(0xde1,0x884d,0x204);
            (*_glad_glFramebufferTexture2D)(0x8d40,0x8d00,0xde1,local_64,0);
            (*_glad_glBindTexture)(0xde1,0);
          }
          (*_glad_glBindFramebuffer)(0x8d40,(undefined4)TextureStorage::system_fbo);
          uVar9 = local_64;
          *param_7 = iVar4;
          *param_8 = *(int *)(param_1 + lVar17 * 0x38 + 0x18);
          uVar5 = *(uint *)(param_1 + lVar17 * 0x38 + 0x18);
          if (uVar5 == *(uint *)(param_1 + lVar17 * 0x38 + 0x1c)) {
            uVar12 = (ulong)(uVar5 * 2);
            if (uVar5 * 2 == 0) {
              uVar12 = 1;
            }
            *(int *)(param_1 + lVar17 * 0x38 + 0x1c) = (int)uVar12;
            lVar18 = Memory::realloc_static
                               (*(void **)(param_1 + lVar17 * 0x38 + 0x20),uVar12 * 4,false);
            *(long *)(param_1 + lVar17 * 0x38 + 0x20) = lVar18;
            if (lVar18 == 0) goto LAB_00107f67;
            uVar5 = *(uint *)(param_1 + lVar17 * 0x38 + 0x18);
          }
          else {
            lVar18 = *(long *)(param_1 + lVar17 * 0x38 + 0x20);
          }
          uVar8 = local_68;
          *(uint *)(param_1 + lVar17 * 0x38 + 0x18) = uVar5 + 1;
          *(undefined4 *)(lVar18 + (ulong)uVar5 * 4) = uVar9;
          uVar5 = *(uint *)(param_1 + lVar17 * 0x38 + 0x28);
          if (uVar5 == *(uint *)(param_1 + lVar17 * 0x38 + 0x2c)) {
            uVar12 = (ulong)(uVar5 * 2);
            if (uVar5 * 2 == 0) {
              uVar12 = 1;
            }
            *(int *)(param_1 + lVar17 * 0x38 + 0x2c) = (int)uVar12;
            lVar18 = Memory::realloc_static
                               (*(void **)(param_1 + lVar17 * 0x38 + 0x30),uVar12 * 4,false);
            *(long *)(param_1 + lVar17 * 0x38 + 0x30) = lVar18;
            if (lVar18 == 0) {
LAB_00107f67:
              _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                               "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
              _err_flush_stdout();
                    /* WARNING: Does not return */
              pcVar7 = (code *)invalidInstructionException();
              (*pcVar7)();
            }
            uVar5 = *(uint *)(param_1 + lVar17 * 0x38 + 0x28);
          }
          else {
            lVar18 = *(long *)(param_1 + lVar17 * 0x38 + 0x30);
          }
          *(uint *)(param_1 + lVar17 * 0x38 + 0x28) = uVar5 + 1;
          *(undefined4 *)(lVar18 + (ulong)uVar5 * 4) = uVar8;
          uVar11 = 1;
          goto LAB_0010797e;
        }
        if (0 < iVar14) {
          iVar15 = 0;
          uVar12 = 0;
          iVar20 = -1;
          do {
            cVar3 = (char)puVar13[1];
            while (iVar19 = iVar15, (bool)cVar3 == param_6) {
              uVar6 = *puVar13;
              if ((uVar6 == 0) || (*(uint *)(this + 0x7c) <= (uint)uVar6)) goto LAB_001079c0;
              lVar17 = ((uVar6 & 0xffffffff) % (ulong)*(uint *)(this + 0x78)) * 0x478 +
                       *(long *)(*(long *)(this + 0x68) +
                                ((uVar6 & 0xffffffff) / (ulong)*(uint *)(this + 0x78)) * 8);
              iVar15 = *(int *)(lVar17 + 0x470);
              if (iVar15 != (int)(uVar6 >> 0x20)) {
                if (iVar15 + 0x80000000U < 0x7fffffff) {
                  _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                   "Method/function failed. Returning: nullptr",
                                   "Attempting to use an uninitialized RID",0,0);
                }
                goto LAB_001079c0;
              }
              uVar6 = *(ulong *)(lVar17 + 0x410);
              if (((uVar6 == *(ulong *)(RasterizerSceneGLES3::singleton + 0x130)) ||
                  (param_5 - puVar13[3] < *(ulong *)(this + 0x278))) ||
                 ((uVar12 <= uVar6 && (iVar20 != -1)))) break;
              if (iVar19 + 1 == iVar14) goto LAB_001079c0;
              cVar3 = (char)puVar13[5];
              puVar13 = puVar13 + 4;
              uVar12 = uVar6;
              iVar15 = iVar19 + 1;
              iVar20 = iVar19;
            }
            iVar15 = iVar19 + 1;
            puVar13 = puVar13 + 4;
          } while (iVar14 != iVar15);
          iVar19 = iVar20;
          if (iVar20 != -1) {
LAB_001079c0:
            *param_7 = iVar4;
            *param_8 = iVar19;
            uVar11 = 1;
            goto LAB_0010797e;
          }
        }
      }
      lVar18 = lVar18 + -1;
    } while (-1 < (int)lVar18);
  }
  uVar11 = 0;
LAB_0010797e:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar11;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GLES3::LightStorage::_shadow_atlas_invalidate_shadow(GLES3::LightStorage::ShadowAtlas::Quadrant::Shadow*,
   RID, GLES3::LightStorage::ShadowAtlas*, unsigned int, unsigned int) */

void GLES3::LightStorage::_shadow_atlas_invalidate_shadow
               (long param_1,ulong *param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  undefined8 local_20;
  
  uVar1 = *param_2;
  if (uVar1 == 0) {
    return;
  }
  local_20 = param_3;
  if ((uint)uVar1 < *(uint *)(param_1 + 0x7c)) {
    lVar2 = ((uVar1 & 0xffffffff) % (ulong)*(uint *)(param_1 + 0x78)) * 0x478 +
            *(long *)(*(long *)(param_1 + 0x68) +
                     ((uVar1 & 0xffffffff) / (ulong)*(uint *)(param_1 + 0x78)) * 8);
    if (*(int *)(lVar2 + 0x470) == (int)(uVar1 >> 0x20)) goto LAB_00108001;
    if (*(int *)(lVar2 + 0x470) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  lVar2 = 0;
LAB_00108001:
  HashMap<RID,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,unsigned_int>>>
  ::erase((HashMap<RID,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,unsigned_int>>>
           *)(param_4 + 0x108),(RID *)param_2);
  param_2[2] = 0;
  *param_2 = 0;
  HashSet<RID,HashMapHasherDefault,HashMapComparatorDefault<RID>>::erase
            ((HashSet<RID,HashMapHasherDefault,HashMapComparatorDefault<RID>> *)(lVar2 + 0x440),
             (RID *)&local_20);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GLES3::LightStorage::update_directional_shadow_atlas() */

void __thiscall GLES3::LightStorage::update_directional_shadow_atlas(LightStorage *this)

{
  if ((*(int *)(this + 0x2d8) == 0) && (0 < *(int *)(this + 0x2e4))) {
    (*_glad_glGenFramebuffers)(1,this + 0x2dc);
    (*_glad_glBindFramebuffer)(0x8d40,*(undefined4 *)(this + 0x2dc));
    (*_glad_glGenTextures)(1,this + 0x2d8);
    (*_glad_glActiveTexture)(0x84c0);
    (*_glad_glBindTexture)(0xde1,*(undefined4 *)(this + 0x2d8));
    (*_glad_glTexImage2D)
              (0xde1,0,0x81a6 - (uint)(this[0x2e8] != (LightStorage)0x0),
               *(undefined4 *)(this + 0x2e4),*(undefined4 *)(this + 0x2e4),0,0x1902,
               (-(uint)(this[0x2e8] == (LightStorage)0x0) & 2) + 0x1403,0);
    (*_glad_glTexParameteri)(0xde1,0x2801,0x2601);
    (*_glad_glTexParameteri)(0xde1,0x2800,0x2601);
    (*_glad_glTexParameteri)(0xde1,0x2802,0x812f);
    (*_glad_glTexParameteri)(0xde1,0x2803,0x812f);
    (*_glad_glTexParameteri)(0xde1,0x884c,0x884e);
    (*_glad_glTexParameteri)(0xde1,0x884d,0x204);
    (*_glad_glFramebufferTexture2D)(0x8d40,0x8d00,0xde1,*(undefined4 *)(this + 0x2d8),0);
  }
  (*_glad_glUseProgram)(0);
  (*_glad_glDepthMask)(1);
  (*_glad_glBindFramebuffer)(0x8d40,*(undefined4 *)(this + 0x2dc));
  RasterizerGLES3::clear_depth(0.0);
  (*_glad_glClear)(0x100);
  (*_glad_glBindTexture)(0xde1,0);
                    /* WARNING: Could not recover jumptable at 0x0010823d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_glad_glBindFramebuffer)(0x8d40,(undefined4)TextureStorage::system_fbo);
  return;
}



/* GLES3::LightStorage::get_directional_shadow_rect() */

undefined1  [16] __thiscall GLES3::LightStorage::get_directional_shadow_rect(LightStorage *this)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  
  iVar3 = *(int *)(this + 0x2e0);
  iVar6 = *(int *)(this + 0x2ec);
  uVar1 = *(uint *)(this + 0x2e4);
  uVar5 = (ulong)uVar1;
  if (iVar3 < 2) {
    iVar3 = 0;
    uVar7 = uVar5;
  }
  else {
    iVar2 = 1;
    iVar4 = 1;
    do {
      while (iVar2 == iVar4) {
        iVar4 = iVar2 * 2;
        if (iVar3 <= iVar2 * iVar4) goto LAB_0010829d;
      }
      iVar2 = iVar2 * 2;
    } while (iVar2 * iVar4 < iVar3);
LAB_0010829d:
    uVar5 = (long)(int)uVar1 / (long)iVar2 & 0xffffffff;
    iVar3 = (iVar6 % iVar4) * (int)((long)(int)uVar1 / (long)iVar4);
    uVar7 = (long)(int)uVar1 / (long)iVar4 & 0xffffffff;
    iVar6 = iVar6 / iVar4;
  }
  auVar8._8_8_ = uVar7 | uVar5 << 0x20;
  auVar8._4_4_ = iVar6 * (int)uVar5;
  auVar8._0_4_ = iVar3;
  return auVar8;
}



/* GLES3::LightStorage::~LightStorage() */

void __thiscall GLES3::LightStorage::~LightStorage(LightStorage *this)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  long in_FS_OFFSET;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR__LightStorage_00115ff8;
  singleton = 0;
  RID_Alloc<GLES3::LightStorage::ShadowAtlas,false>::~RID_Alloc
            ((RID_Alloc<GLES3::LightStorage::ShadowAtlas,false> *)(this + 0x280));
  uVar11 = *(uint *)(this + 0x240);
  *(undefined ***)(this + 0x220) = &PTR__RID_Alloc_00115fb8;
  if (uVar11 != 0) {
    local_50 = 0;
    local_40 = 0x3b;
    local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
    String::parse_latin1((StrRange *)&local_50);
    vformat<unsigned_int,char_const*>
              ((String_conflict *)&local_48,(uint)(StrRange *)&local_50,(char *)(ulong)uVar11);
    print_error((String_conflict *)&local_48);
    pcVar5 = local_48;
    lVar8 = local_50;
    if (local_48 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = (char *)0x0;
        Memory::free_static(pcVar5 + -0x10,false);
        lVar8 = local_50;
      }
    }
    local_50 = lVar8;
    if (lVar8 != 0) {
      LOCK();
      plVar1 = (long *)(lVar8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar8 + -0x10),false);
      }
    }
  }
  uVar11 = *(uint *)(this + 0x23c);
  uVar3 = *(uint *)(this + 0x238);
  lVar8 = 0;
  if (uVar3 <= uVar11) {
    do {
      Memory::free_static(*(void **)(*(long *)(this + 0x228) + lVar8 * 8),false);
      lVar2 = lVar8 * 8;
      lVar8 = lVar8 + 1;
      Memory::free_static(*(void **)(*(long *)(this + 0x230) + lVar2),false);
    } while ((uint)lVar8 < uVar11 / uVar3);
  }
  if (*(void **)(this + 0x228) != (void *)0x0) {
    Memory::free_static(*(void **)(this + 0x228),false);
    Memory::free_static(*(void **)(this + 0x230),false);
  }
  RID_Alloc<GLES3::Lightmap,true>::~RID_Alloc((RID_Alloc<GLES3::Lightmap,true> *)(this + 0x1c8));
  uVar11 = *(uint *)(this + 0x188);
  *(undefined ***)(this + 0x168) = &PTR__RID_Alloc_00115f78;
  if (uVar11 != 0) {
    local_50 = 0;
    local_40 = 0x3b;
    local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
    String::parse_latin1((StrRange *)&local_50);
    vformat<unsigned_int,char_const*>
              ((String_conflict *)&local_48,(uint)(StrRange *)&local_50,(char *)(ulong)uVar11);
    print_error((String_conflict *)&local_48);
    pcVar5 = local_48;
    lVar8 = local_50;
    if (local_48 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = (char *)0x0;
        Memory::free_static(pcVar5 + -0x10,false);
        lVar8 = local_50;
      }
    }
    local_50 = lVar8;
    if (lVar8 != 0) {
      LOCK();
      plVar1 = (long *)(lVar8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar8 + -0x10),false);
      }
    }
  }
  uVar11 = *(uint *)(this + 0x184);
  uVar3 = *(uint *)(this + 0x180);
  lVar8 = 0;
  if (uVar3 <= uVar11) {
    do {
      Memory::free_static(*(void **)(*(long *)(this + 0x170) + lVar8 * 8),false);
      lVar2 = lVar8 * 8;
      lVar8 = lVar8 + 1;
      Memory::free_static(*(void **)(*(long *)(this + 0x178) + lVar2),false);
    } while ((uint)lVar8 < uVar11 / uVar3);
  }
  if (*(void **)(this + 0x170) != (void *)0x0) {
    Memory::free_static(*(void **)(this + 0x170),false);
    Memory::free_static(*(void **)(this + 0x178),false);
  }
  RID_Alloc<GLES3::ReflectionAtlas,false>::~RID_Alloc
            ((RID_Alloc<GLES3::ReflectionAtlas,false> *)(this + 0x110));
  *(undefined ***)(this + 0xb8) = &PTR__RID_Alloc_00115f38;
  uVar11 = *(uint *)(this + 0xd8);
  if (uVar11 == 0) {
    uVar6 = (ulong)*(uint *)(this + 0xd4);
    uVar11 = *(uint *)(this + 0xd0);
    puVar7 = *(undefined8 **)(this + 0xc0);
LAB_001086a4:
    if (uVar11 <= (uint)uVar6) {
      lVar8 = 0;
      while( true ) {
        Memory::free_static((void *)puVar7[lVar8],false);
        lVar2 = lVar8 * 8;
        lVar8 = lVar8 + 1;
        Memory::free_static(*(void **)(*(long *)(this + 200) + lVar2),false);
        if ((uint)(uVar6 / uVar11) <= (uint)lVar8) break;
        puVar7 = *(undefined8 **)(this + 0xc0);
      }
LAB_001086ed:
      puVar7 = *(undefined8 **)(this + 0xc0);
    }
  }
  else {
    local_50 = 0;
    local_40 = 0x3b;
    local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
    String::parse_latin1((StrRange *)&local_50);
    vformat<unsigned_int,char_const*>
              ((String_conflict *)&local_48,(uint)(StrRange *)&local_50,(char *)(ulong)uVar11);
    print_error((String_conflict *)&local_48);
    pcVar5 = local_48;
    lVar8 = local_50;
    if (local_48 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = (char *)0x0;
        Memory::free_static(pcVar5 + -0x10,false);
        lVar8 = local_50;
      }
    }
    local_50 = lVar8;
    if (lVar8 != 0) {
      LOCK();
      plVar1 = (long *)(lVar8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar8 + -0x10),false);
      }
    }
    uVar11 = *(uint *)(this + 0xd0);
    puVar7 = *(undefined8 **)(this + 0xc0);
    if (*(int *)(this + 0xd4) != 0) {
      uVar9 = 0;
      do {
        lVar8 = (uVar9 % (ulong)uVar11) * 0x90 + puVar7[uVar9 / uVar11];
        if (-1 < *(int *)(lVar8 + 0x88)) {
          Dependency::~Dependency((Dependency *)(lVar8 + 0x58));
          uVar11 = *(uint *)(this + 0xd0);
          puVar7 = *(undefined8 **)(this + 0xc0);
        }
        uVar6 = (ulong)*(uint *)(this + 0xd4);
        uVar9 = uVar9 + 1;
      } while (uVar9 < uVar6);
      goto LAB_001086a4;
    }
    if (uVar11 == 0) {
      Memory::free_static((void *)*puVar7,false);
      Memory::free_static((void *)**(undefined8 **)(this + 200),false);
      goto LAB_001086ed;
    }
  }
  if (puVar7 != (undefined8 *)0x0) {
    Memory::free_static(puVar7,false);
    Memory::free_static(*(void **)(this + 200),false);
  }
  RID_Alloc<GLES3::LightInstance,false>::~RID_Alloc
            ((RID_Alloc<GLES3::LightInstance,false> *)(this + 0x60));
  *(undefined ***)(this + 8) = &PTR__RID_Alloc_00115ef8;
  uVar11 = *(uint *)(this + 0x28);
  if (uVar11 == 0) {
    uVar6 = (ulong)*(uint *)(this + 0x24);
    uVar9 = (ulong)*(uint *)(this + 0x20);
    puVar7 = *(undefined8 **)(this + 0x10);
LAB_00108822:
    if ((uint)uVar6 < (uint)uVar9) goto LAB_00108863;
    lVar8 = 0;
    while( true ) {
      Memory::free_static((void *)puVar7[lVar8],false);
      lVar2 = lVar8 * 8;
      lVar8 = lVar8 + 1;
      Memory::free_static(*(void **)(*(long *)(this + 0x18) + lVar2),false);
      if ((uint)(uVar6 / uVar9) <= (uint)lVar8) break;
      puVar7 = *(undefined8 **)(this + 0x10);
    }
  }
  else {
    local_50 = 0;
    local_40 = 0x3b;
    local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
    String::parse_latin1((StrRange *)&local_50);
    vformat<unsigned_int,char_const*>
              ((String_conflict *)&local_48,(uint)(StrRange *)&local_50,(char *)(ulong)uVar11);
    print_error((String_conflict *)&local_48);
    pcVar5 = local_48;
    if (local_48 == (char *)0x0) {
LAB_001087a3:
      if (local_50 == 0) goto LAB_001087b9;
LAB_001087ad:
      lVar8 = local_50;
      LOCK();
      plVar1 = (long *)(local_50 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) goto LAB_001087b9;
      local_50 = 0;
      Memory::free_static((void *)(lVar8 + -0x10),false);
      iVar4 = *(int *)(this + 0x24);
      uVar11 = *(uint *)(this + 0x20);
      puVar7 = *(undefined8 **)(this + 0x10);
    }
    else {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) goto LAB_001087a3;
      local_48 = (char *)0x0;
      Memory::free_static(pcVar5 + -0x10,false);
      if (local_50 != 0) goto LAB_001087ad;
LAB_001087b9:
      iVar4 = *(int *)(this + 0x24);
      uVar11 = *(uint *)(this + 0x20);
      puVar7 = *(undefined8 **)(this + 0x10);
    }
    if (iVar4 != 0) {
      uVar9 = (ulong)uVar11;
      uVar10 = 0;
      do {
        lVar8 = (uVar10 % uVar9) * 0xe8 + puVar7[uVar10 / uVar9];
        if (-1 < *(int *)(lVar8 + 0xe0)) {
          Dependency::~Dependency((Dependency *)(lVar8 + 0xb0));
          uVar9 = (ulong)*(uint *)(this + 0x20);
          puVar7 = *(undefined8 **)(this + 0x10);
        }
        uVar6 = (ulong)*(uint *)(this + 0x24);
        uVar10 = uVar10 + 1;
      } while (uVar10 < uVar6);
      goto LAB_00108822;
    }
    if (uVar11 != 0) goto LAB_00108863;
    Memory::free_static((void *)*puVar7,false);
    Memory::free_static((void *)**(undefined8 **)(this + 0x18),false);
  }
  puVar7 = *(undefined8 **)(this + 0x10);
LAB_00108863:
  if (puVar7 == (undefined8 *)0x0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    Memory::free_static(puVar7,false);
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      Memory::free_static(*(void **)(this + 0x18),false);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GLES3::LightStorage::~LightStorage() */

void __thiscall GLES3::LightStorage::~LightStorage(LightStorage *this)

{
  ~LightStorage(this);
  operator_delete(this,0x2f0);
  return;
}



/* GLES3::LightStorage::omni_light_allocate() */

void __thiscall GLES3::LightStorage::omni_light_allocate(LightStorage *this)

{
  RID_Alloc<GLES3::Light,true>::allocate_rid((RID_Alloc<GLES3::Light,true> *)(this + 8));
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GLES3::LightStorage::light_instance_create(RID) */

ulong __thiscall GLES3::LightStorage::light_instance_create(LightStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  ulong uVar6;
  undefined4 *puVar7;
  Projection *this_00;
  Projection *pPVar8;
  long lVar9;
  Projection *this_01;
  Projection *pPVar10;
  long in_FS_OFFSET;
  Projection aPStack_4b8 [936];
  undefined4 local_110;
  undefined8 local_10c;
  undefined4 local_104;
  undefined8 local_100;
  undefined4 local_f8;
  undefined1 local_f0 [16];
  undefined1 local_e0 [16];
  undefined1 local_d0 [16];
  undefined4 local_c0;
  undefined8 local_bc;
  undefined4 local_b4;
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 local_50;
  long local_40;
  
  pPVar10 = aPStack_4b8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  this_01 = (Projection *)&local_110;
  this_00 = aPStack_4b8;
  do {
    pPVar8 = this_00 + 0x9c;
    Projection::Projection(this_00);
    *(undefined4 *)(this_00 + 0x60) = 0x3f800000;
    *(undefined1 (*) [16])(this_00 + 0x40) = ZEXT416(_LC124);
    *(undefined1 (*) [16])(this_00 + 0x50) = ZEXT416(_LC124);
    *(undefined8 *)(this_00 + 100) = 0;
    *(undefined4 *)(this_00 + 0x6c) = 0;
    *(undefined8 *)(this_00 + 0x84) = 0;
    *(undefined8 *)(this_00 + 0x8c) = 0;
    *(undefined8 *)(this_00 + 0x94) = 0;
    this_00 = pPVar8;
  } while (pPVar8 != this_01);
  local_110 = 0;
  local_10c = 0;
  local_104 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_c0 = 0x3f800000;
  local_bc = 0;
  local_b4 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_58 = 2;
  local_50 = 0xffffffffffffffff;
  local_f0 = (undefined1  [16])0x0;
  local_e0 = ZEXT416(_LC124);
  local_d0 = ZEXT416(_LC124);
  local_b0 = (undefined1  [16])0x0;
  local_a0 = (undefined1  [16])0x0;
  local_78 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  uVar6 = RID_Alloc<GLES3::LightInstance,false>::make_rid
                    ((RID_Alloc<GLES3::LightInstance,false> *)(this + 0x60),
                     (LightInstance *)aPStack_4b8);
  uVar4 = local_78._0_8_;
  if ((void *)local_78._0_8_ != (void *)0x0) {
    if (local_58._4_4_ != 0) {
      if (*(uint *)(hash_table_size_primes + (local_58 & 0xffffffff) * 4) != 0) {
        memset((void *)local_68._8_8_,0,
               (ulong)*(uint *)(hash_table_size_primes + (local_58 & 0xffffffff) * 4) << 2);
      }
      local_58 = local_58 & 0xffffffff;
    }
    Memory::free_static((void *)uVar4,false);
    Memory::free_static((void *)local_68._0_8_,false);
    Memory::free_static((void *)local_78._8_8_,false);
    pPVar10 = (Projection *)0x0;
    Memory::free_static((void *)local_68._8_8_,false);
  }
  do {
    this_01 = this_01 + -0x9c;
    Projection::~Projection(this_01);
  } while (this_01 != aPStack_4b8);
  if ((uVar6 != 0) && ((uint)uVar6 < *(uint *)(this + 0x7c))) {
    lVar9 = ((uVar6 & 0xffffffff) % (ulong)*(uint *)(this + 0x78)) * 0x478 +
            *(long *)(*(long *)(this + 0x68) +
                     ((uVar6 & 0xffffffff) / (ulong)*(uint *)(this + 0x78)) * 8);
    if (*(int *)(lVar9 + 0x470) == (int)(uVar6 >> 0x20)) {
      lVar2 = *(long *)this;
      *(ulong *)(lVar9 + 0x3c8) = uVar6;
      *(ulong *)(lVar9 + 0x3d0) = param_2;
      if (*(code **)(lVar2 + 0xf8) == light_get_type) {
        if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
          puVar7 = (undefined4 *)
                   (((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0xe8 +
                   *(long *)(*(long *)(this + 0x10) +
                            ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8));
          iVar1 = puVar7[0x38];
          if (iVar1 == (int)(param_2 >> 0x20)) {
            uVar5 = *puVar7;
            goto LAB_00108d5e;
          }
          if (iVar1 + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                             "Method/function failed. Returning: nullptr",
                             "Attempting to use an uninitialized RID",0,0);
          }
        }
        _err_print_error("light_get_type","drivers/gles3/storage/light_storage.h",0x15b,
                         "Parameter \"light\" is null.",0,0);
        uVar5 = 0;
      }
      else {
        uVar5 = (**(code **)(lVar2 + 0xf8))(this,param_2);
      }
LAB_00108d5e:
      *(undefined4 *)(lVar9 + 0x3a8) = uVar5;
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return uVar6;
    }
    if (*(int *)(lVar9 + 0x470) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0,pPVar10);
    }
  }
  _DAT_000003c8 = 0;
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}



/* GLES3::LightStorage::reflection_probe_allocate() */

void __thiscall GLES3::LightStorage::reflection_probe_allocate(LightStorage *this)

{
  RID_Alloc<GLES3::ReflectionProbe,true>::allocate_rid
            ((RID_Alloc<GLES3::ReflectionProbe,true> *)(this + 0xb8));
  return;
}



/* GLES3::LightStorage::reflection_atlas_create() */

void __thiscall GLES3::LightStorage::reflection_atlas_create(LightStorage *this)

{
  long in_FS_OFFSET;
  long local_a0;
  int local_98 [8];
  int local_78;
  int local_74;
  undefined4 local_70;
  undefined4 local_4c;
  undefined1 local_40 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = (undefined1  [16])0x0;
  local_70 = 1;
  local_4c = 0;
  ProjectSettings::get_singleton();
  StringName::StringName
            ((StringName *)&local_a0,"rendering/reflections/reflection_atlas/reflection_count",false
            );
  ProjectSettings::get_setting_with_override((StringName *)local_98);
  local_78 = Variant::operator_cast_to_int((Variant *)local_98);
  if (Variant::needs_deinit[local_98[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_a0 != 0)) {
    StringName::unref();
  }
  ProjectSettings::get_singleton();
  StringName::StringName
            ((StringName *)&local_a0,"rendering/reflections/reflection_atlas/reflection_size",false)
  ;
  ProjectSettings::get_setting_with_override((StringName *)local_98);
  local_74 = Variant::operator_cast_to_int((Variant *)local_98);
  if (Variant::needs_deinit[local_98[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_a0 != 0)) {
    StringName::unref();
  }
  RID_Alloc<GLES3::ReflectionAtlas,false>::make_rid
            ((RID_Alloc<GLES3::ReflectionAtlas,false> *)(this + 0x110),(ReflectionAtlas *)&local_78)
  ;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GLES3::LightStorage::reflection_probe_instance_create(RID) */

void __thiscall
GLES3::LightStorage::reflection_probe_instance_create(LightStorage *this,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined2 local_60;
  undefined8 local_5c;
  undefined8 local_54;
  undefined1 local_4c [16];
  undefined1 local_3c [16];
  undefined8 local_2c;
  undefined8 local_24;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = 0xffffffff;
  local_68 = 0;
  local_60 = 1;
  local_5c = 0;
  local_54 = 0;
  local_2c = 0x3f800000;
  local_24 = 0;
  local_4c = ZEXT416(_LC124);
  local_3c = ZEXT416(_LC124);
  local_78 = param_2;
  RID_Alloc<GLES3::ReflectionProbeInstance,false>::make_rid
            ((RID_Alloc<GLES3::ReflectionProbeInstance,false> *)(this + 0x168),
             (ReflectionProbeInstance *)&local_78);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GLES3::LightStorage::lightmap_allocate() */

void __thiscall GLES3::LightStorage::lightmap_allocate(LightStorage *this)

{
  RID_Alloc<GLES3::Lightmap,true>::allocate_rid((RID_Alloc<GLES3::Lightmap,true> *)(this + 0x1c8));
  return;
}



/* GLES3::LightStorage::lightmap_instance_create(RID) */

void __thiscall GLES3::LightStorage::lightmap_instance_create(LightStorage *this,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  undefined4 local_20;
  undefined8 local_1c;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0x3f800000;
  local_1c = 0;
  local_14 = 0;
  local_40 = ZEXT416(_LC124);
  local_30 = ZEXT416(_LC124);
  local_48 = param_2;
  RID_Alloc<GLES3::LightmapInstance,false>::make_rid
            ((RID_Alloc<GLES3::LightmapInstance,false> *)(this + 0x220),
             (LightmapInstance *)&local_48);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GLES3::LightStorage::light_instance_free(RID) */

void __thiscall GLES3::LightStorage::light_instance_free(LightStorage *this,ulong param_2)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  code *pcVar12;
  uint uVar13;
  ulong uVar14;
  uint *puVar15;
  int iVar16;
  long lVar17;
  ulong uVar18;
  uint uVar19;
  char *this_00;
  long lVar20;
  uint uVar21;
  Projection *pPVar22;
  long lVar23;
  Projection *this_01;
  long lVar24;
  bool bVar25;
  long local_88;
  ulong local_40 [2];
  
  local_40[0] = param_2;
  if (param_2 != 0) {
    uVar19 = (uint)param_2;
    if (uVar19 < *(uint *)(this + 0x7c)) {
      uVar14 = (param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x78);
      lVar24 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x78)) * 0x478;
      pPVar22 = (Projection *)(*(long *)(*(long *)(this + 0x68) + uVar14 * 8) + lVar24);
      iVar1 = *(int *)(pPVar22 + 0x470);
      if (iVar1 == (int)(param_2 >> 0x20)) {
        iVar2 = *(int *)(pPVar22 + 0x464);
        if (iVar2 == 0) {
          if (iVar1 < 0) {
LAB_0010961e:
            _err_print_error(&_LC19,"./core/templates/rid_owner.h",0x16c,"Method/function failed.",
                             "Attempted to free an uninitialized or invalid RID",0,0);
          }
          else {
LAB_001093c1:
            pvVar3 = *(void **)(pPVar22 + 0x440);
            if (pvVar3 != (void *)0x0) {
              if (*(int *)(pPVar22 + 0x464) != 0) {
                if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(pPVar22 + 0x460) * 4) != 0)
                {
                  memset(*(void **)(pPVar22 + 0x458),0,
                         (ulong)*(uint *)(hash_table_size_primes +
                                         (ulong)*(uint *)(pPVar22 + 0x460) * 4) * 4);
                }
                *(undefined4 *)(pPVar22 + 0x464) = 0;
              }
              Memory::free_static(pvVar3,false);
              Memory::free_static(*(void **)(pPVar22 + 0x450),false);
              Memory::free_static(*(void **)(pPVar22 + 0x448),false);
              Memory::free_static(*(void **)(pPVar22 + 0x458),false);
            }
            this_01 = pPVar22 + 0x30c;
            do {
              Projection::~Projection(this_01);
              bVar25 = pPVar22 != this_01;
              this_01 = this_01 + -0x9c;
            } while (bVar25);
            lVar23 = *(long *)(this + 0x70);
            *(undefined4 *)(*(long *)(*(long *)(this + 0x68) + uVar14 * 8) + 0x470 + lVar24) =
                 0xffffffff;
            uVar13 = *(int *)(this + 0x80) - 1;
            *(uint *)(this + 0x80) = uVar13;
            *(uint *)(*(long *)(lVar23 + ((ulong)uVar13 / (ulong)*(uint *)(this + 0x78)) * 8) +
                     ((ulong)uVar13 % (ulong)*(uint *)(this + 0x78)) * 4) = uVar19;
          }
          return;
        }
        lVar24 = *(long *)(pPVar22 + 0x440);
        local_88 = 0;
        uVar14 = param_2 * 0x3ffff - 1;
        uVar14 = (uVar14 ^ uVar14 >> 0x1f) * 0x15;
        uVar14 = (uVar14 ^ uVar14 >> 0xb) * 0x41;
        uVar14 = uVar14 >> 0x16 ^ uVar14;
        uVar18 = uVar14 & 0xffffffff;
        if ((int)uVar14 == 0) {
          uVar18 = 1;
        }
        this_00 = (char *)this;
        while( true ) {
          uVar14 = *(ulong *)(lVar24 + local_88 * 8);
          if ((uVar14 == 0) || (*(uint *)(this + 0x29c) <= (uint)uVar14)) goto LAB_0010f03e;
          lVar23 = ((uVar14 & 0xffffffff) % (ulong)*(uint *)(this + 0x298)) * 0x140 +
                   *(long *)(*(long *)(this + 0x288) +
                            ((uVar14 & 0xffffffff) / (ulong)*(uint *)(this + 0x298)) * 8);
          if (*(int *)(lVar23 + 0x138) != (int)(uVar14 >> 0x20)) break;
          this_00 = (char *)(lVar23 + 0x108);
          if ((*(long *)(lVar23 + 0x110) != 0) && (*(int *)(lVar23 + 0x134) != 0)) {
            uVar14 = CONCAT44(0,*(uint *)(hash_table_size_primes +
                                         (ulong)*(uint *)(lVar23 + 0x130) * 4));
            lVar20 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar23 + 0x130) * 8);
            auVar4._8_8_ = 0;
            auVar4._0_8_ = uVar18 * lVar20;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar14;
            lVar17 = SUB168(auVar4 * auVar8,8);
            uVar13 = *(uint *)(*(long *)(lVar23 + 0x118) + lVar17 * 4);
            iVar16 = SUB164(auVar4 * auVar8,8);
            if (uVar13 != 0) {
              uVar21 = 0;
              do {
                if (((uint)uVar18 == uVar13) &&
                   (param_2 == *(ulong *)(*(long *)(*(long *)(lVar23 + 0x110) + lVar17 * 8) + 0x10))
                   ) {
                  puVar15 = (uint *)HashMap<RID,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,unsigned_int>>>
                                    ::operator[]((HashMap<RID,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,unsigned_int>>>
                                                  *)this_00,(RID *)local_40);
                  uVar14 = (ulong)(*puVar15 & 0x3ffffff);
                  lVar23 = lVar23 + 8 + (ulong)(*puVar15 >> 0x1b & 3) * 0x38;
                  if (*(long *)(lVar23 + 8) == 0) {
                    lVar20 = 0;
                  }
                  else {
                    lVar20 = *(long *)(*(long *)(lVar23 + 8) + -8);
                    if ((long)uVar14 < lVar20) {
                      CowData<GLES3::LightStorage::ShadowAtlas::Quadrant::Shadow>::_copy_on_write
                                ((CowData<GLES3::LightStorage::ShadowAtlas::Quadrant::Shadow> *)
                                 (lVar23 + 8));
                      *(undefined8 *)(uVar14 * 0x20 + *(long *)(lVar23 + 8)) = 0;
                      HashMap<RID,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,unsigned_int>>>
                      ::erase((HashMap<RID,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,unsigned_int>>>
                               *)this_00,(RID *)local_40);
                      goto LAB_00109360;
                    }
                  }
                  _err_print_index_error
                            ("operator[]","./core/templates/vector.h",0x38,uVar14,lVar20,"p_index",
                             "((Vector<T> *)(this))->_cowdata.size()","",false,true);
                  _err_flush_stdout();
                    /* WARNING: Does not return */
                  pcVar12 = (code *)invalidInstructionException();
                  (*pcVar12)();
                }
                uVar21 = uVar21 + 1;
                auVar5._8_8_ = 0;
                auVar5._0_8_ = (ulong)(iVar16 + 1) * lVar20;
                auVar9._8_8_ = 0;
                auVar9._0_8_ = uVar14;
                lVar17 = SUB168(auVar5 * auVar9,8);
                uVar13 = *(uint *)(*(long *)(lVar23 + 0x118) + lVar17 * 4);
                iVar16 = SUB164(auVar5 * auVar9,8);
              } while ((uVar13 != 0) &&
                      (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar13 * lVar20, auVar10._8_8_ = 0,
                      auVar10._0_8_ = uVar14, auVar7._8_8_ = 0,
                      auVar7._0_8_ = (ulong)((*(uint *)(hash_table_size_primes +
                                                       (ulong)*(uint *)(lVar23 + 0x130) * 4) +
                                             iVar16) - SUB164(auVar6 * auVar10,8)) * lVar20,
                      auVar11._8_8_ = 0, auVar11._0_8_ = uVar14,
                      uVar21 <= SUB164(auVar7 * auVar11,8)));
            }
          }
          this_00 = "light_instance_free";
          _err_print_error("light_instance_free","drivers/gles3/storage/light_storage.cpp",0x185,
                           "Condition \"!shadow_atlas->shadow_owners.has(p_light_instance)\" is true. Continuing."
                           ,0);
LAB_00109360:
          if (iVar2 <= (int)local_88 + 1) {
            if (*(uint *)(this + 0x7c) <= uVar19) {
              _err_print_error(&_LC19,"./core/templates/rid_owner.h",0x161,"Method/function failed."
                               ,0,0);
              return;
            }
            uVar14 = (param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x78);
            lVar24 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x78)) * 0x478;
            pPVar22 = (Projection *)(*(long *)(*(long *)(this + 0x68) + uVar14 * 8) + lVar24);
            if (*(int *)(pPVar22 + 0x470) < 0) goto LAB_0010961e;
            if (iVar1 != *(int *)(pPVar22 + 0x470)) {
              _err_print_error(&_LC19,"./core/templates/rid_owner.h",0x171,"Method/function failed."
                               ,0,0);
              return;
            }
            goto LAB_001093c1;
          }
          local_88 = local_88 + 1;
        }
        if (*(int *)(lVar23 + 0x138) + 0x80000000U < 0x7fffffff) {
          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                           "Method/function failed. Returning: nullptr",
                           "Attempting to use an uninitialized RID",0,0,this_00);
        }
LAB_0010f03e:
                    /* WARNING: Does not return */
        pcVar12 = (code *)invalidInstructionException();
        (*pcVar12)();
      }
      if (iVar1 + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
  }
  _err_print_error("light_instance_free","drivers/gles3/storage/light_storage.cpp",0x180,
                   "Parameter \"light_instance\" is null.",0,0);
  return;
}



/* GLES3::LightStorage::shadow_atlas_update_light(RID, RID, float, unsigned long) */

undefined8 __thiscall
GLES3::LightStorage::shadow_atlas_update_light
          (float param_1,LightStorage *this,ulong param_3,ulong param_4,ulong param_5)

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
  code *pcVar11;
  char cVar12;
  uint uVar13;
  ulong uVar14;
  uint *puVar15;
  uint uVar16;
  ShadowAtlas *pSVar17;
  int iVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  ShadowAtlas *pSVar22;
  uint uVar23;
  ulong uVar24;
  ulong uVar25;
  int iVar26;
  ulong *puVar27;
  ulong uVar28;
  undefined7 uVar30;
  undefined8 uVar29;
  long in_FS_OFFSET;
  bool bVar31;
  ulong local_88;
  ulong local_80;
  int local_70;
  uint local_6c;
  RID local_68 [16];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = param_4;
  local_80 = param_3;
  if ((param_3 == 0) || (*(uint *)(this + 0x29c) <= (uint)param_3)) {
LAB_00109c50:
    _err_print_error("shadow_atlas_update_light","drivers/gles3/storage/light_storage.cpp",0x568,
                     "Parameter \"shadow_atlas\" is null.",0,0);
  }
  else {
    pSVar22 = (ShadowAtlas *)
              (((param_3 & 0xffffffff) % (ulong)*(uint *)(this + 0x298)) * 0x140 +
              *(long *)(*(long *)(this + 0x288) +
                       ((param_3 & 0xffffffff) / (ulong)*(uint *)(this + 0x298)) * 8));
    if (*(int *)(pSVar22 + 0x138) != (int)(param_3 >> 0x20)) {
      if (*(int *)(pSVar22 + 0x138) + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
      goto LAB_00109c50;
    }
    if ((param_4 == 0) || (*(uint *)(this + 0x7c) <= (uint)param_4)) {
LAB_00109c90:
      _err_print_error("shadow_atlas_update_light","drivers/gles3/storage/light_storage.cpp",0x56b,
                       "Parameter \"li\" is null.",0,0);
    }
    else {
      lVar19 = ((param_4 & 0xffffffff) % (ulong)*(uint *)(this + 0x78)) * 0x478 +
               *(long *)(*(long *)(this + 0x68) +
                        ((param_4 & 0xffffffff) / (ulong)*(uint *)(this + 0x78)) * 8);
      if (*(int *)(lVar19 + 0x470) != (int)(param_4 >> 0x20)) {
        if (*(int *)(lVar19 + 0x470) + 0x80000000U < 0x7fffffff) {
          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                           "Method/function failed. Returning: nullptr",
                           "Attempting to use an uninitialized RID",0,0);
        }
        goto LAB_00109c90;
      }
      if ((*(int *)(pSVar22 + 0xf4) != 0) && (*(uint *)(pSVar22 + 0xf0) != 0)) {
        uVar23 = *(int *)(pSVar22 + 0xf4) >> 1;
        iVar26 = (int)(long)((float)uVar23 * param_1);
        uVar13 = 0;
        if (iVar26 != 0) {
          uVar16 = iVar26 - 1;
          uVar16 = uVar16 | uVar16 >> 1;
          uVar16 = uVar16 | uVar16 >> 2;
          uVar16 = uVar16 | uVar16 >> 4;
          uVar16 = uVar16 | uVar16 >> 8;
          uVar13 = uVar23 / *(uint *)(pSVar22 + 0xf0);
          uVar16 = (uVar16 | uVar16 >> 0x10) + 1;
          if (uVar16 <= uVar13) {
            uVar13 = uVar16;
          }
        }
        pSVar17 = pSVar22 + 0xe0;
        uVar16 = 0xffffffff;
        iVar26 = 0;
        uVar24 = 0xffffffff;
        do {
          uVar1 = *(uint *)(pSVar22 + (long)*(int *)pSVar17 * 0x38);
          if (uVar1 != 0) {
            iVar18 = (int)((ulong)uVar23 / (ulong)uVar1);
            if (((int)uVar24 != -1) && ((int)uVar24 < iVar18)) break;
            lVar20 = (long)iVar26;
            iVar26 = iVar26 + 1;
            local_58[lVar20] = *(int *)pSVar17;
            uVar16 = uVar1;
            if ((int)uVar13 <= iVar18) {
              uVar24 = (ulong)uVar23 / (ulong)uVar1;
            }
          }
          pSVar17 = pSVar17 + 4;
        } while (pSVar17 != pSVar22 + 0xf0);
        if (iVar26 == 0) {
          _err_print_error("shadow_atlas_update_light","drivers/gles3/storage/light_storage.cpp",
                           0x58f,"Condition \"valid_quadrant_count == 0\" is true. Returning: false"
                           ,0,0);
        }
        else {
          OS::get_singleton();
          uVar24 = OS::get_ticks_msec();
          if ((*(long *)(pSVar22 + 0x110) != 0) && (*(int *)(pSVar22 + 0x134) != 0)) {
            uVar25 = CONCAT44(0,*(uint *)(hash_table_size_primes +
                                         (ulong)*(uint *)(pSVar22 + 0x130) * 4));
            lVar20 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(pSVar22 + 0x130) * 8);
            uVar14 = param_4 * 0x3ffff - 1;
            uVar14 = (uVar14 ^ uVar14 >> 0x1f) * 0x15;
            uVar14 = (uVar14 ^ uVar14 >> 0xb) * 0x41;
            uVar14 = uVar14 >> 0x16 ^ uVar14;
            uVar28 = uVar14 & 0xffffffff;
            if ((int)uVar14 == 0) {
              uVar28 = 1;
            }
            auVar3._8_8_ = 0;
            auVar3._0_8_ = uVar28 * lVar20;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = uVar25;
            lVar21 = SUB168(auVar3 * auVar7,8);
            uVar13 = *(uint *)(*(long *)(pSVar22 + 0x118) + lVar21 * 4);
            iVar18 = SUB164(auVar3 * auVar7,8);
            if (uVar13 != 0) {
              uVar23 = 0;
              do {
                if ((uVar13 == (uint)uVar28) &&
                   (param_4 == *(ulong *)(*(long *)(*(long *)(pSVar22 + 0x110) + lVar21 * 8) + 0x10)
                   )) {
                  puVar15 = (uint *)HashMap<RID,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,unsigned_int>>>
                                    ::operator[]((HashMap<RID,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,unsigned_int>>>
                                                  *)(pSVar22 + 0x108),(RID *)&local_88);
                  uVar14 = (ulong)(*puVar15 & 0x3ffffff);
                  lVar20 = (ulong)(*puVar15 >> 0x1b & 3) * 0x38;
                  uVar30 = (undefined7)(uVar28 >> 8);
                  if (*(uint *)(pSVar22 + lVar20) == uVar16) {
                    pSVar17 = pSVar22 + lVar20 + 8;
                    lVar19 = *(long *)(pSVar17 + 8);
                    if (lVar19 == 0) {
                      lVar21 = 0;
                      goto LAB_00109da7;
                    }
                    lVar21 = *(long *)(lVar19 + -8);
                    if (lVar21 <= (long)uVar14) goto LAB_00109da7;
                    uVar29 = CONCAT71(uVar30,*(ulong *)(lVar19 + 0x10 + uVar14 * 0x20) != param_5);
                  }
                  else {
                    pSVar17 = pSVar22 + lVar20 + 8;
                    lVar2 = *(long *)(pSVar17 + 8);
                    if (lVar2 == 0) {
                      lVar21 = 0;
LAB_00109da7:
                      _err_print_index_error
                                ("get","./core/templates/cowdata.h",0xdb,uVar14,lVar21,"p_index",
                                 "size()","",false,true);
                      _err_flush_stdout();
                    /* WARNING: Does not return */
                      pcVar11 = (code *)invalidInstructionException();
                      (*pcVar11)();
                    }
                    lVar21 = *(long *)(lVar2 + -8);
                    if (lVar21 <= (long)uVar14) goto LAB_00109da7;
                    lVar21 = uVar14 * 0x20;
                    uVar29 = CONCAT71(uVar30,*(ulong *)(lVar2 + 0x10 + lVar21) != param_5);
                    if (*(ulong *)(this + 0x278) < uVar24 - *(long *)(lVar2 + 0x18 + lVar21)) {
                      local_70 = -1;
                      bVar31 = *(int *)(lVar19 + 0x3a8) == 1;
                      local_6c = 0xffffffff;
                      cVar12 = _shadow_atlas_find_shadow
                                         (this,pSVar22,local_58,iVar26,*(uint *)(pSVar22 + lVar20),
                                          uVar24,bVar31,&local_70,(int *)&local_6c);
                      if (cVar12 == '\0') goto LAB_00109c13;
                      if (*(long *)(pSVar17 + 8) != 0) {
                        lVar19 = *(long *)(*(long *)(pSVar17 + 8) + -8);
                        if (lVar19 <= (long)uVar14) goto LAB_00109e1c;
                        CowData<GLES3::LightStorage::ShadowAtlas::Quadrant::Shadow>::_copy_on_write
                                  ((CowData<GLES3::LightStorage::ShadowAtlas::Quadrant::Shadow> *)
                                   (pSVar17 + 8));
                        lVar19 = *(long *)(pSVar17 + 8);
                        *(undefined8 *)(lVar19 + 0x10 + lVar21) = 0;
                        if (lVar19 != 0) {
                          lVar19 = *(long *)(lVar19 + -8);
                          if (lVar19 <= (long)uVar14) goto LAB_00109e1c;
                          CowData<GLES3::LightStorage::ShadowAtlas::Quadrant::Shadow>::
                          _copy_on_write((CowData<GLES3::LightStorage::ShadowAtlas::Quadrant::Shadow>
                                          *)(pSVar17 + 8));
                          *(undefined8 *)(*(long *)(pSVar17 + 8) + lVar21) = 0;
                          goto LAB_00109abc;
                        }
                      }
                      lVar19 = 0;
                      goto LAB_00109e1c;
                    }
                  }
                  CowData<GLES3::LightStorage::ShadowAtlas::Quadrant::Shadow>::_copy_on_write
                            ((CowData<GLES3::LightStorage::ShadowAtlas::Quadrant::Shadow> *)
                             (pSVar17 + 8));
                  *(ulong *)(*(long *)(pSVar17 + 8) + 0x10 + uVar14 * 0x20) = param_5;
                  goto LAB_00109c13;
                }
                uVar23 = uVar23 + 1;
                auVar4._8_8_ = 0;
                auVar4._0_8_ = (ulong)(iVar18 + 1) * lVar20;
                auVar8._8_8_ = 0;
                auVar8._0_8_ = uVar25;
                lVar21 = SUB168(auVar4 * auVar8,8);
                uVar13 = *(uint *)(*(long *)(pSVar22 + 0x118) + lVar21 * 4);
                iVar18 = SUB164(auVar4 * auVar8,8);
              } while ((uVar13 != 0) &&
                      (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar13 * lVar20, auVar9._8_8_ = 0,
                      auVar9._0_8_ = uVar25, auVar6._8_8_ = 0,
                      auVar6._0_8_ = (ulong)((*(uint *)(hash_table_size_primes +
                                                       (ulong)*(uint *)(pSVar22 + 0x130) * 4) +
                                             iVar18) - SUB164(auVar5 * auVar9,8)) * lVar20,
                      auVar10._8_8_ = 0, auVar10._0_8_ = uVar25,
                      uVar23 <= SUB164(auVar6 * auVar10,8)));
            }
          }
          local_70 = -1;
          bVar31 = *(int *)(lVar19 + 0x3a8) == 1;
          local_6c = 0xffffffff;
          cVar12 = _shadow_atlas_find_shadow
                             (this,pSVar22,local_58,iVar26,-1,uVar24,bVar31,&local_70,
                              (int *)&local_6c);
          if (cVar12 != '\0') {
LAB_00109abc:
            uVar13 = local_6c;
            iVar26 = local_70;
            uVar14 = (ulong)(int)local_6c;
            lVar20 = (long)local_70 * 0x38;
            uVar23 = local_70 << 0x1b | local_6c;
            lVar19 = *(long *)(pSVar22 + lVar20 + 0x10);
            if ((long)uVar14 < 0) {
              if (lVar19 == 0) goto LAB_00109e44;
            }
            else {
              if (lVar19 == 0) {
LAB_00109e44:
                lVar19 = 0;
                goto LAB_00109e1c;
              }
              if ((long)uVar14 < *(long *)(lVar19 + -8)) {
                CowData<GLES3::LightStorage::ShadowAtlas::Quadrant::Shadow>::_copy_on_write
                          ((CowData<GLES3::LightStorage::ShadowAtlas::Quadrant::Shadow> *)
                           (pSVar22 + lVar20 + 0x10));
                uVar29 = 1;
                puVar27 = (ulong *)(uVar14 * 0x20 + *(long *)(pSVar22 + lVar20 + 0x10));
                _shadow_atlas_invalidate_shadow(this,puVar27,local_80,pSVar22,iVar26,uVar13);
                *puVar27 = local_88;
                *(bool *)(puVar27 + 1) = bVar31;
                puVar27[3] = uVar24;
                puVar27[2] = param_5;
                HashSet<RID,HashMapHasherDefault,HashMapComparatorDefault<RID>>::insert(local_68);
                puVar15 = (uint *)HashMap<RID,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,unsigned_int>>>
                                  ::operator[]((HashMap<RID,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,unsigned_int>>>
                                                *)(pSVar22 + 0x108),(RID *)&local_88);
                *puVar15 = uVar23;
                goto LAB_00109c13;
              }
            }
            lVar19 = *(long *)(lVar19 + -8);
LAB_00109e1c:
            _err_print_index_error
                      ("operator[]","./core/templates/vector.h",0x38,uVar14,lVar19,"p_index",
                       "((Vector<T> *)(this))->_cowdata.size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar11 = (code *)invalidInstructionException();
            (*pcVar11)();
          }
        }
      }
    }
  }
  uVar29 = 0;
LAB_00109c13:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar29;
}



/* Error CowData<GLES3::ReflectionAtlas::Reflection>::resize<false>(long) [clone .isra.0] */

void __thiscall
CowData<GLES3::ReflectionAtlas::Reflection>::resize<false>
          (CowData<GLES3::ReflectionAtlas::Reflection> *this,long param_1)

{
  long *plVar1;
  int iVar2;
  CowData<GLES3::ReflectionAtlas::Reflection> *pCVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  char *pcVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  CowData<GLES3::ReflectionAtlas::Reflection> *pCVar10;
  CowData<GLES3::ReflectionAtlas::Reflection> *pCVar11;
  long lVar12;
  long lVar13;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return;
  }
  lVar12 = *(long *)this;
  if (lVar12 == 0) {
    if (param_1 == 0) {
      return;
    }
    _copy_on_write(this);
    lVar13 = 0;
    pCVar3 = (CowData<GLES3::ReflectionAtlas::Reflection> *)0x0;
  }
  else {
    lVar13 = *(long *)(lVar12 + -8);
    if (param_1 == lVar13) {
      return;
    }
    if (param_1 == 0) {
      LOCK();
      plVar1 = (long *)(lVar12 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) {
        *(undefined8 *)this = 0;
        return;
      }
      lVar12 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar12 + -0x10),false);
      return;
    }
    _copy_on_write(this);
    pCVar3 = (CowData<GLES3::ReflectionAtlas::Reflection> *)(lVar13 * 0x30);
    if (pCVar3 != (CowData<GLES3::ReflectionAtlas::Reflection> *)0x0) {
      uVar4 = (ulong)(pCVar3 + -1) | (ulong)(pCVar3 + -1) >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      pCVar3 = (CowData<GLES3::ReflectionAtlas::Reflection> *)((uVar4 | uVar4 >> 0x20) + 1);
    }
  }
  if (param_1 * 0x30 != 0) {
    uVar4 = param_1 * 0x30 - 1;
    uVar4 = uVar4 | uVar4 >> 1;
    uVar4 = uVar4 | uVar4 >> 2;
    uVar4 = uVar4 | uVar4 >> 4;
    uVar4 = uVar4 | uVar4 >> 8;
    uVar4 = uVar4 | uVar4 >> 0x10;
    pCVar11 = (CowData<GLES3::ReflectionAtlas::Reflection> *)(uVar4 | uVar4 >> 0x20);
    pCVar10 = pCVar11 + 1;
    if (pCVar10 != (CowData<GLES3::ReflectionAtlas::Reflection> *)0x0) {
      if (param_1 <= lVar13) {
        if ((pCVar10 != pCVar3) && (iVar2 = _realloc(this,(long)pCVar10), iVar2 != 0)) {
          return;
        }
        if (*(long *)this != 0) {
          *(long *)(*(long *)this + -8) = param_1;
          return;
        }
        FUN_0010f084();
        return;
      }
      if (pCVar10 == pCVar3) {
LAB_0010a06c:
        puVar8 = *(undefined8 **)this;
        if (puVar8 == (undefined8 *)0x0) {
          resize<false>((long)pCVar11);
          return;
        }
        lVar12 = puVar8[-1];
        if (param_1 <= lVar12) goto LAB_00109ff8;
      }
      else {
        if (lVar13 != 0) {
          pCVar11 = this;
          iVar2 = _realloc(this,(long)pCVar10);
          if (iVar2 != 0) {
            return;
          }
          goto LAB_0010a06c;
        }
        puVar5 = (undefined8 *)Memory::alloc_static((ulong)(pCVar11 + 0x11),false);
        if (puVar5 == (undefined8 *)0x0) {
          uVar9 = 0x171;
          pcVar7 = "Parameter \"mem_new\" is null.";
          goto LAB_0010a112;
        }
        puVar8 = puVar5 + 2;
        *puVar5 = 1;
        puVar5[1] = 0;
        *(undefined8 **)this = puVar8;
        lVar12 = 0;
      }
      puVar5 = puVar8 + lVar12 * 6;
      do {
        *puVar5 = 0;
        puVar6 = puVar5 + 6;
        puVar5[1] = 0;
        puVar5 = puVar6;
      } while (puVar8 + param_1 * 6 != puVar6);
LAB_00109ff8:
      puVar8[-1] = param_1;
      return;
    }
  }
  uVar9 = 0x16a;
  pcVar7 = 
  "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
  ;
LAB_0010a112:
  _err_print_error("resize","./core/templates/cowdata.h",uVar9,pcVar7,0,0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GLES3::LightStorage::reflection_probe_instance_begin_render(RID, RID) */

undefined8 __thiscall
GLES3::LightStorage::reflection_probe_instance_begin_render
          (LightStorage *this,ulong param_2,ulong param_3)

{
  CowData<GLES3::ReflectionAtlas::Reflection> *this_00;
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  uint uVar4;
  undefined4 uVar5;
  char *pcVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  int *piVar11;
  long lVar12;
  uint *puVar13;
  long lVar14;
  long *plVar15;
  RenderSceneBuffersGLES3 *this_01;
  int iVar16;
  long lVar17;
  int *piVar18;
  long *plVar19;
  Object *pOVar20;
  uint uVar21;
  Object *pOVar22;
  long in_FS_OFFSET;
  bool bVar23;
  ulong local_c8;
  uint local_84;
  uint local_80;
  uint local_7c;
  long local_78;
  long local_70;
  ulong local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  GLES3::TextureStorage::get_singleton();
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(this + 300))) {
    piVar18 = (int *)(((param_3 & 0xffffffff) % (ulong)*(uint *)(this + 0x128)) * 0x50 +
                     *(long *)(*(long *)(this + 0x118) +
                              ((param_3 & 0xffffffff) / (ulong)*(uint *)(this + 0x128)) * 8));
    if (piVar18[0x12] == (int)(param_3 >> 0x20)) {
      if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x184))) {
        lVar1 = *(long *)(*(long *)(this + 0x170) +
                         ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x180)) * 8) +
                ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x180)) * 0x68;
        if (*(int *)(lVar1 + 0x60) == (int)(param_2 >> 0x20)) {
          if (*(long *)(piVar18 + 0x10) == 0) {
            this_01 = (RenderSceneBuffersGLES3 *)operator_new(0x238,"");
            RenderSceneBuffersGLES3::RenderSceneBuffersGLES3(this_01);
            postinitialize_handler((Object *)this_01);
            cVar7 = RefCounted::init_ref();
            if (cVar7 == '\0') {
              pOVar20 = *(Object **)(piVar18 + 0x10);
              if (pOVar20 != (Object *)0x0) {
                piVar18[0x10] = 0;
                piVar18[0x11] = 0;
                cVar7 = RefCounted::unreference();
                if (cVar7 != '\0') {
                  cVar7 = predelete_handler(pOVar20);
                  this_01 = (RenderSceneBuffersGLES3 *)0x0;
                  if (cVar7 != '\0') goto LAB_0010b210;
                }
                goto LAB_0010ae7c;
              }
            }
            else {
              pOVar20 = *(Object **)(piVar18 + 0x10);
              pOVar22 = pOVar20;
              if (this_01 != (RenderSceneBuffersGLES3 *)pOVar20) {
                *(RenderSceneBuffersGLES3 **)(piVar18 + 0x10) = this_01;
                cVar7 = RefCounted::reference();
                if (cVar7 == '\0') {
                  piVar18[0x10] = 0;
                  piVar18[0x11] = 0;
                }
                pOVar22 = (Object *)this_01;
                if (((pOVar20 != (Object *)0x0) &&
                    (cVar7 = RefCounted::unreference(), cVar7 != '\0')) &&
                   (cVar7 = predelete_handler(pOVar20), cVar7 != '\0')) {
LAB_0010b210:
                  (**(code **)(*(long *)pOVar20 + 0x140))();
                  Memory::free_static(pOVar20,false);
                  pOVar22 = (Object *)this_01;
                  if (this_01 == (RenderSceneBuffersGLES3 *)0x0) goto LAB_0010ae7c;
                }
              }
              cVar7 = RefCounted::unreference();
              if ((cVar7 == '\0') || (cVar7 = predelete_handler(pOVar22), cVar7 == '\0')) {
LAB_0010ae7c:
                pOVar20 = *(Object **)(piVar18 + 0x10);
              }
              else {
                (**(code **)(*(long *)pOVar22 + 0x140))(pOVar22);
                Memory::free_static(pOVar22,false);
                pOVar20 = *(Object **)(piVar18 + 0x10);
              }
            }
            RenderSceneBuffersGLES3::configure_for_probe(pOVar20,CONCAT44(piVar18[1],piVar18[1]));
          }
          if (piVar18[0xb] == 0) {
            iVar8 = Image::get_image_required_mipmaps(piVar18[1],piVar18[1],0xf);
            iVar8 = iVar8 + -1;
            if (8 < iVar8) {
              iVar8 = 8;
            }
            piVar18[2] = iVar8;
            (*_glad_glActiveTexture)(0x84c0);
            (*_glad_glGenTextures)(1,piVar18 + 0xb);
            (*_glad_glBindTexture)(0x8c1a,piVar18[0xb]);
            (*_glad_glTexImage3D)(0x8c1a,0,0x81a6,piVar18[1],piVar18[1],6,0,0x1902,0x1405,0);
            lVar17 = Utilities::singleton;
            local_58 = "Reflection probe atlas (depth)";
            local_60 = 0;
            local_50 = 0x1e;
            String::parse_latin1((StrRange *)&local_60);
            iVar8 = piVar18[1] * piVar18[1] * 0x12;
            local_58 = (char *)CONCAT44(local_58._4_4_,piVar18[0xb]);
            plVar19 = (long *)(lVar17 + 0x108);
            *plVar19 = *plVar19 + (long)iVar8;
            piVar11 = (int *)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
                             ::operator[]((HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
                                           *)(lVar17 + 200),(uint *)&local_58);
            lVar17 = local_60;
            *piVar11 = iVar8;
            if (local_60 != 0) {
              LOCK();
              plVar19 = (long *)(local_60 + -0x10);
              *plVar19 = *plVar19 + -1;
              UNLOCK();
              if (*plVar19 == 0) {
                local_60 = 0;
                Memory::free_static((void *)(lVar17 + -0x10),false);
              }
            }
            this_00 = (CowData<GLES3::ReflectionAtlas::Reflection> *)(piVar18 + 0xe);
            lVar17 = 0;
            CowData<GLES3::ReflectionAtlas::Reflection>::resize<false>(this_00,(long)*piVar18);
            if (0 < *piVar18) {
              do {
                local_84 = 0;
                (*_glad_glGenTextures)(1,&local_84);
                (*_glad_glBindTexture)(0x8513,local_84);
                uVar21 = local_84;
                if (*(long *)(piVar18 + 0xe) == 0) {
LAB_0010abc0:
                  lVar14 = 0;
                  goto LAB_0010abe1;
                }
                lVar14 = *(long *)(*(long *)(piVar18 + 0xe) + -8);
                if (lVar14 <= lVar17) goto LAB_0010abe1;
                CowData<GLES3::ReflectionAtlas::Reflection>::_copy_on_write(this_00);
                lVar12 = lVar17 * 0x30;
                bVar23 = (char)RasterizerGLES3::gles_over_gl == '\0';
                *(uint *)(*(long *)(piVar18 + 0xe) + 8 + lVar12) = uVar21;
                if (bVar23) {
LAB_0010a4d5:
                  (*_glad_glTexStorage2D)(0x8513,piVar18[2],0x8059);
                }
                else {
                  iVar8 = 0x8515;
                  do {
                    iVar9 = iVar8 + 1;
                    (*_glad_glTexImage2D)(iVar8,0,0x8059,piVar18[1],piVar18[1],0,0x1908,0x8368,0);
                    iVar8 = iVar9;
                  } while (iVar9 != 0x851b);
                  (*_glad_glGenerateMipmap)(0x8513);
                  if ((char)RasterizerGLES3::gles_over_gl == '\0') goto LAB_0010a4d5;
                }
                (*_glad_glTexParameteri)(0x8513,0x2800,0x2601);
                (*_glad_glTexParameteri)(0x8513,0x2801,0x2703);
                (*_glad_glTexParameteri)(0x8513,0x2802,0x812f);
                (*_glad_glTexParameteri)(0x8513,0x2803,0x812f);
                (*_glad_glTexParameteri)(0x8513,0x813c,0);
                (*_glad_glTexParameteri)(0x8513,0x813d,piVar18[2] + -1);
                iVar8 = piVar18[2];
                iVar9 = piVar18[1];
                if (iVar8 < 1) {
                  local_c8 = 0;
                  uVar21 = 0;
                }
                else {
                  uVar21 = 0;
                  piVar11 = piVar18;
                  do {
                    piVar11[3] = iVar9;
                    iVar16 = iVar9 * iVar9;
                    iVar9 = iVar9 >> 1;
                    uVar21 = uVar21 + iVar16 * 0x18;
                    if (iVar9 < 1) {
                      iVar9 = 1;
                    }
                    piVar11 = piVar11 + 1;
                  } while (piVar11 != piVar18 + iVar8);
                  local_c8 = (ulong)uVar21;
                }
                lVar14 = Utilities::singleton;
                local_60 = 0;
                local_50 = 8;
                local_58 = ", color)";
                String::parse_latin1((StrRange *)&local_60);
                String::num_int64((long)&local_70,(int)lVar17,true);
                local_78 = 0;
                local_58 = "Reflection probe atlas (";
                local_50 = 0x18;
                String::parse_latin1((StrRange *)&local_78);
                String::operator+((String_conflict *)&local_68,(String_conflict *)&local_78);
                String::operator+((String_conflict *)&local_58,(String_conflict *)&local_68);
                plVar19 = (long *)(lVar14 + 0x108);
                *plVar19 = *plVar19 + local_c8;
                local_7c = local_84;
                puVar13 = (uint *)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
                                  ::operator[]((HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
                                                *)(lVar14 + 200),&local_7c);
                pcVar6 = local_58;
                *puVar13 = uVar21;
                if (local_58 != (char *)0x0) {
                  LOCK();
                  plVar19 = (long *)(local_58 + -0x10);
                  *plVar19 = *plVar19 + -1;
                  UNLOCK();
                  if (*plVar19 == 0) {
                    local_58 = (char *)0x0;
                    Memory::free_static(pcVar6 + -0x10,false);
                  }
                }
                uVar2 = local_68;
                if (local_68 != 0) {
                  LOCK();
                  plVar19 = (long *)(local_68 - 0x10);
                  *plVar19 = *plVar19 + -1;
                  UNLOCK();
                  if (*plVar19 == 0) {
                    local_68 = 0;
                    Memory::free_static((void *)(uVar2 - 0x10),false);
                  }
                }
                lVar14 = local_78;
                if (local_78 != 0) {
                  LOCK();
                  plVar19 = (long *)(local_78 + -0x10);
                  *plVar19 = *plVar19 + -1;
                  UNLOCK();
                  if (*plVar19 == 0) {
                    local_78 = 0;
                    Memory::free_static((void *)(lVar14 + -0x10),false);
                  }
                }
                lVar14 = local_70;
                if (local_70 != 0) {
                  LOCK();
                  plVar19 = (long *)(local_70 + -0x10);
                  *plVar19 = *plVar19 + -1;
                  UNLOCK();
                  if (*plVar19 == 0) {
                    local_70 = 0;
                    Memory::free_static((void *)(lVar14 + -0x10),false);
                  }
                }
                lVar14 = local_60;
                if (local_60 != 0) {
                  LOCK();
                  plVar19 = (long *)(local_60 + -0x10);
                  *plVar19 = *plVar19 + -1;
                  UNLOCK();
                  if (*plVar19 == 0) {
                    local_60 = 0;
                    Memory::free_static((void *)(lVar14 + -0x10),false);
                  }
                }
                local_80 = 0;
                (*_glad_glGenTextures)(1,&local_80);
                (*_glad_glBindTexture)(0x8513,local_80);
                uVar4 = local_80;
                if (*(long *)(piVar18 + 0xe) == 0) goto LAB_0010abc0;
                lVar14 = *(long *)(*(long *)(piVar18 + 0xe) + -8);
                if (lVar14 <= lVar17) goto LAB_0010abe1;
                CowData<GLES3::ReflectionAtlas::Reflection>::_copy_on_write(this_00);
                bVar23 = (char)RasterizerGLES3::gles_over_gl == '\0';
                *(uint *)(*(long *)(piVar18 + 0xe) + 0xc + lVar12) = uVar4;
                if (bVar23) {
LAB_0010a787:
                  (*_glad_glTexStorage2D)(0x8513,piVar18[2],0x8059,piVar18[1],piVar18[1]);
                }
                else {
                  iVar8 = 0x8515;
                  do {
                    iVar9 = iVar8 + 1;
                    (*_glad_glTexImage2D)(iVar8,0,0x8059,piVar18[1],piVar18[1],0,0x1908,0x8368,0);
                    iVar8 = iVar9;
                  } while (iVar9 != 0x851b);
                  (*_glad_glGenerateMipmap)(0x8513);
                  if ((char)RasterizerGLES3::gles_over_gl == '\0') goto LAB_0010a787;
                }
                (*_glad_glTexParameteri)(0x8513,0x2800,0x2601);
                (*_glad_glTexParameteri)(0x8513,0x2801,0x2703);
                (*_glad_glTexParameteri)(0x8513,0x2802,0x812f);
                (*_glad_glTexParameteri)(0x8513,0x2803,0x812f);
                (*_glad_glTexParameteri)(0x8513,0x813c,0);
                (*_glad_glTexParameteri)(0x8513,0x813d,piVar18[2] + -1);
                lVar14 = Utilities::singleton;
                local_60 = 0;
                local_58 = ", radiance)";
                local_50 = 0xb;
                String::parse_latin1((StrRange *)&local_60);
                String::num_int64((long)&local_70,(int)lVar17,true);
                local_58 = "Reflection probe atlas (";
                local_78 = 0;
                local_50 = 0x18;
                String::parse_latin1((StrRange *)&local_78);
                String::operator+((String_conflict *)&local_68,(String_conflict *)&local_78);
                String::operator+((String_conflict *)&local_58,(String_conflict *)&local_68);
                plVar19 = (long *)(lVar14 + 0x108);
                *plVar19 = *plVar19 + local_c8;
                local_7c = local_80;
                puVar13 = (uint *)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
                                  ::operator[]((HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
                                                *)(lVar14 + 200),&local_7c);
                pcVar6 = local_58;
                *puVar13 = uVar21;
                if (local_58 != (char *)0x0) {
                  LOCK();
                  plVar19 = (long *)(local_58 + -0x10);
                  *plVar19 = *plVar19 + -1;
                  UNLOCK();
                  if (*plVar19 == 0) {
                    local_58 = (char *)0x0;
                    Memory::free_static(pcVar6 + -0x10,false);
                  }
                }
                uVar2 = local_68;
                if (local_68 != 0) {
                  LOCK();
                  plVar19 = (long *)(local_68 - 0x10);
                  *plVar19 = *plVar19 + -1;
                  UNLOCK();
                  if (*plVar19 == 0) {
                    local_68 = 0;
                    Memory::free_static((void *)(uVar2 - 0x10),false);
                  }
                }
                lVar14 = local_78;
                if (local_78 != 0) {
                  LOCK();
                  plVar19 = (long *)(local_78 + -0x10);
                  *plVar19 = *plVar19 + -1;
                  UNLOCK();
                  if (*plVar19 == 0) {
                    local_78 = 0;
                    Memory::free_static((void *)(lVar14 + -0x10),false);
                  }
                }
                lVar14 = local_70;
                if (local_70 != 0) {
                  LOCK();
                  plVar19 = (long *)(local_70 + -0x10);
                  *plVar19 = *plVar19 + -1;
                  UNLOCK();
                  if (*plVar19 == 0) {
                    local_70 = 0;
                    Memory::free_static((void *)(lVar14 + -0x10),false);
                  }
                }
                lVar14 = local_60;
                if (local_60 != 0) {
                  LOCK();
                  plVar19 = (long *)(local_60 + -0x10);
                  *plVar19 = *plVar19 + -1;
                  UNLOCK();
                  if (*plVar19 == 0) {
                    local_60 = 0;
                    Memory::free_static((void *)(lVar14 + -0x10),false);
                  }
                }
                iVar8 = 0;
                do {
                  local_68 = local_68 & 0xffffffff00000000;
                  (*_glad_glGenFramebuffers)(1,(String_conflict *)&local_68);
                  (*_glad_glBindFramebuffer)(0x8d40,local_68 & 0xffffffff);
                  (*_glad_glFramebufferTexture2D)(0x8d40,0x8ce0,iVar8 + 0x8515,local_84,0);
                  (*_glad_glFramebufferTextureLayer)(0x8d40,0x8d00,piVar18[0xb]);
                  iVar9 = (*_glad_glCheckFramebufferStatus)(0x8d40);
                  if (iVar9 != 0x8cd5) {
                    if (iVar9 == 0x8cd6) {
                      local_60 = 0;
                      local_58 = "GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT";
                      local_50 = 0x24;
                      String::parse_latin1((StrRange *)&local_60);
                    }
                    else if (iVar9 == 0x8cd7) {
                      local_60 = 0;
                      local_58 = "GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT";
                      local_50 = 0x2c;
                      String::parse_latin1((StrRange *)&local_60);
                    }
                    else {
                      if (iVar9 == 0x8cdb) {
                        local_58 = "GL_FRAMEBUFFER_INCOMPLETE_DRAW_BUFFER";
                      }
                      else {
                        if (iVar9 != 0x8cdc) {
                          itos((long)&local_60);
                          goto LAB_0010aa1e;
                        }
                        local_58 = "GL_FRAMEBUFFER_INCOMPLETE_READ_BUFFER";
                      }
                      local_60 = 0;
                      local_50 = 0x25;
                      String::parse_latin1((StrRange *)&local_60);
                    }
LAB_0010aa1e:
                    operator+((char *)&local_58,
                              (String_conflict *)
                              "Could not create reflections framebuffer, status: ");
                    _err_print_error("reflection_probe_instance_begin_render",
                                     "drivers/gles3/storage/light_storage.cpp",0x39d);
                    pcVar6 = local_58;
                    if (local_58 != (char *)0x0) {
                      LOCK();
                      plVar19 = (long *)(local_58 + -0x10);
                      *plVar19 = *plVar19 + -1;
                      UNLOCK();
                      if (*plVar19 == 0) {
                        local_58 = (char *)0x0;
                        Memory::free_static(pcVar6 + -0x10,false);
                      }
                    }
                    lVar14 = local_60;
                    if (local_60 != 0) {
                      LOCK();
                      plVar19 = (long *)(local_60 + -0x10);
                      *plVar19 = *plVar19 + -1;
                      UNLOCK();
                      if (*plVar19 == 0) {
                        local_60 = 0;
                        Memory::free_static((void *)(lVar14 + -0x10),false);
                      }
                    }
                  }
                  uVar5 = (undefined4)local_68;
                  if (*(long *)(piVar18 + 0xe) == 0) goto LAB_0010abc0;
                  lVar14 = *(long *)(*(long *)(piVar18 + 0xe) + -8);
                  if (lVar14 <= lVar17) goto LAB_0010abe1;
                  CowData<GLES3::ReflectionAtlas::Reflection>::_copy_on_write(this_00);
                  lVar14 = (long)iVar8;
                  iVar8 = iVar8 + 1;
                  *(undefined4 *)(lVar14 * 4 + 0x10 + *(long *)(piVar18 + 0xe) + lVar12) = uVar5;
                } while (iVar8 != 6);
                local_58 = (char *)((ulong)local_58 & 0xffffffff00000000);
                (*_glad_glGenFramebuffers)(1,(String_conflict *)&local_58);
                (*_glad_glBindFramebuffer)(0x8d40,(ulong)local_58 & 0xffffffff);
                uVar5 = local_58._0_4_;
                if (*(long *)(piVar18 + 0xe) == 0) goto LAB_0010abc0;
                lVar14 = *(long *)(*(long *)(piVar18 + 0xe) + -8);
                if (lVar14 <= lVar17) goto LAB_0010abe1;
                lVar17 = lVar17 + 1;
                CowData<GLES3::ReflectionAtlas::Reflection>::_copy_on_write(this_00);
                *(undefined4 *)(*(long *)(piVar18 + 0xe) + 0x28 + lVar12) = uVar5;
              } while ((int)lVar17 < *piVar18);
            }
            (*_glad_glBindFramebuffer)(0x8d40,(undefined4)TextureStorage::system_fbo);
            (*_glad_glBindTexture)(0x8513,0);
            (*_glad_glBindTexture)(0x8c1a,0);
          }
          iVar8 = *(int *)(lVar1 + 8);
          plVar19 = *(long **)(piVar18 + 0xe);
          if (iVar8 != -1) goto LAB_0010a250;
          if (plVar19 == (long *)0x0) goto LAB_0010a28a;
          plVar15 = plVar19;
          lVar17 = 0;
          do {
            lVar14 = lVar17;
            if (plVar19[-1] <= lVar14) {
              lVar17 = 0;
              goto LAB_0010b260;
            }
            lVar12 = *plVar15;
            plVar15 = plVar15 + 6;
            lVar17 = lVar14 + 1;
          } while (lVar12 != 0);
          iVar8 = (int)lVar14;
          *(int *)(lVar1 + 8) = iVar8;
          lVar17 = (long)iVar8;
          goto LAB_0010a25c;
        }
        if (*(int *)(lVar1 + 0x60) + 0x80000000U < 0x7fffffff) {
          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                           "Method/function failed. Returning: nullptr",
                           "Attempting to use an uninitialized RID",0,0);
        }
      }
      _err_print_error("reflection_probe_instance_begin_render",
                       "drivers/gles3/storage/light_storage.cpp",0x32b,"Parameter \"rpi\" is null.",
                       0,0);
      uVar10 = 0;
      goto LAB_0010a2a5;
    }
    if (piVar18[0x12] + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("reflection_probe_instance_begin_render",
                   "drivers/gles3/storage/light_storage.cpp",0x328,"Parameter \"atlas\" is null.",0,
                   0);
  uVar10 = 0;
  goto LAB_0010a2a5;
  while( true ) {
    uVar2 = plVar19[lVar17 * 6];
    if (((uVar2 != 0) && ((uint)uVar2 < *(uint *)(this + 0x184))) &&
       ((iVar8 = *(int *)(*(long *)(*(long *)(this + 0x170) +
                                   ((uVar2 & 0xffffffff) / (ulong)*(uint *)(this + 0x180)) * 8) +
                          ((uVar2 & 0xffffffff) % (ulong)*(uint *)(this + 0x180)) * 0x68 + 0x60),
        iVar8 != (int)(uVar2 >> 0x20) && (iVar8 + 0x80000000U < 0x7fffffff)))) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
      plVar19 = *(long **)(piVar18 + 0xe);
    }
    lVar17 = lVar17 + 1;
    if (plVar19 == (long *)0x0) break;
LAB_0010b260:
    if (plVar19[-1] <= lVar17) break;
  }
  iVar8 = *(int *)(lVar1 + 8);
  if (iVar8 == -1) {
LAB_0010a28a:
    *(ulong *)(lVar1 + 0x10) = param_3;
    *(undefined4 *)(lVar1 + 0x1c) = 0;
    *(undefined2 *)(lVar1 + 0x18) = 0x100;
    uVar10 = 1;
LAB_0010a2a5:
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return uVar10;
  }
LAB_0010a250:
  lVar17 = (long)iVar8;
  if (lVar17 < 0) {
    if (plVar19 != (long *)0x0) {
      lVar14 = plVar19[-1];
      goto LAB_0010abe1;
    }
  }
  else {
LAB_0010a25c:
    if (plVar19 != (long *)0x0) {
      lVar14 = plVar19[-1];
      if (lVar14 <= lVar17) goto LAB_0010abe1;
      CowData<GLES3::ReflectionAtlas::Reflection>::_copy_on_write
                ((CowData<GLES3::ReflectionAtlas::Reflection> *)(piVar18 + 0xe));
      *(ulong *)((long)iVar8 * 0x30 + *(long *)(piVar18 + 0xe)) = param_2;
      goto LAB_0010a28a;
    }
  }
  lVar14 = 0;
LAB_0010abe1:
  _err_print_index_error
            ("operator[]","./core/templates/vector.h",0x38,lVar17,lVar14,"p_index",
             "((Vector<T> *)(this))->_cowdata.size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GLES3::LightStorage::reflection_atlas_set_size(RID, int, int) */

void __thiscall
GLES3::LightStorage::reflection_atlas_set_size
          (LightStorage *this,ulong param_2,int param_3,int param_4)

{
  long *plVar1;
  HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
  *pHVar2;
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
  uint uVar28;
  long lVar29;
  uint *puVar30;
  int iVar31;
  int *piVar32;
  long lVar33;
  ulong uVar34;
  uint uVar35;
  long lVar36;
  long lVar37;
  ulong uVar38;
  uint uVar39;
  ulong uVar40;
  long lVar41;
  long in_FS_OFFSET;
  CowData<GLES3::ReflectionAtlas::Reflection> *local_78;
  uint local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 300))) {
    piVar32 = (int *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x128)) * 0x50 +
                     *(long *)(*(long *)(this + 0x118) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x128)) * 8));
    if (piVar32[0x12] == (int)(param_2 >> 0x20)) {
      if ((piVar32[1] != param_3) || (*piVar32 != param_4)) {
        piVar32[1] = param_3;
        *piVar32 = param_4;
        if (piVar32[0xb] != 0) {
          lVar33 = *(long *)(piVar32 + 0xe);
          lVar41 = 0;
joined_r0x0010b3dd:
          if (lVar33 != 0) {
            do {
              if (*(long *)(lVar33 + -8) <= lVar41) break;
              lVar36 = 0;
              lVar29 = lVar41 * 0x30;
              do {
                iVar31 = (int)lVar36;
                if (lVar33 == 0) goto LAB_0010ba40;
                lVar37 = *(long *)(lVar33 + -8);
                while( true ) {
                  if (lVar37 <= lVar41) goto LAB_0010b450;
                  if (*(int *)(lVar33 + lVar29 + 0x10 + (long)iVar31 * 4) != 0) break;
                  lVar36 = lVar36 + 1;
                  if (lVar36 == 7) goto LAB_0010b688;
                  iVar31 = (int)lVar36;
                }
                (*_glad_glDeleteFramebuffers)(1,lVar33 + lVar29 + 0x10 + lVar36 * 4);
                if (*(long *)(piVar32 + 0xe) == 0) goto LAB_0010ba80;
                lVar33 = *(long *)(*(long *)(piVar32 + 0xe) + -8);
                if (lVar33 <= lVar41) goto LAB_0010ba83;
                lVar36 = lVar36 + 1;
                CowData<GLES3::ReflectionAtlas::Reflection>::_copy_on_write
                          ((CowData<GLES3::ReflectionAtlas::Reflection> *)(piVar32 + 0xe));
                lVar33 = *(long *)(piVar32 + 0xe);
                *(undefined4 *)(lVar33 + ((long)iVar31 + 4) * 4 + lVar29) = 0;
              } while (lVar36 != 7);
LAB_0010b688:
              lVar36 = Utilities::singleton;
              if (lVar33 == 0) {
LAB_0010ba40:
                lVar37 = 0;
LAB_0010b450:
                _err_print_index_error
                          ("get","./core/templates/cowdata.h",0xdb,lVar41,lVar37,"p_index","size()",
                           "",false,true);
                _err_flush_stdout();
                    /* WARNING: Does not return */
                pcVar27 = (code *)invalidInstructionException();
                (*pcVar27)();
              }
              lVar37 = *(long *)(lVar33 + -8);
              if (lVar37 <= lVar41) goto LAB_0010b450;
              local_44 = *(uint *)(lVar33 + 8 + lVar29);
              pHVar2 = (HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
                        *)(Utilities::singleton + 200);
              if ((*(long *)(Utilities::singleton + 0xd0) != 0) &&
                 (*(int *)(Utilities::singleton + 0xf4) != 0)) {
                uVar40 = CONCAT44(0,*(uint *)(hash_table_size_primes +
                                             (ulong)*(uint *)(Utilities::singleton + 0xf0) * 4));
                uVar38 = *(ulong *)(hash_table_size_primes_inv +
                                   (ulong)*(uint *)(Utilities::singleton + 0xf0) * 8);
                uVar28 = (local_44 >> 0x10 ^ local_44) * -0x7a143595;
                uVar28 = (uVar28 ^ uVar28 >> 0xd) * -0x3d4d51cb;
                uVar35 = uVar28 ^ uVar28 >> 0x10;
                if (uVar28 == uVar28 >> 0x10) {
                  uVar35 = 1;
                  uVar34 = uVar38;
                }
                else {
                  uVar34 = uVar35 * uVar38;
                }
                auVar7._8_8_ = 0;
                auVar7._0_8_ = uVar40;
                auVar19._8_8_ = 0;
                auVar19._0_8_ = uVar34;
                lVar33 = SUB168(auVar7 * auVar19,8);
                uVar28 = *(uint *)(*(long *)(Utilities::singleton + 0xd8) + lVar33 * 4);
                iVar31 = SUB164(auVar7 * auVar19,8);
                if (uVar28 != 0) {
                  uVar39 = 0;
                  do {
                    if ((uVar28 == uVar35) &&
                       (local_44 ==
                        *(uint *)(*(long *)(*(long *)(Utilities::singleton + 0xd0) + lVar33 * 8) +
                                 0x10))) {
                      (*_glad_glDeleteTextures)(1,&local_44);
                      puVar30 = (uint *)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
                                        ::operator[](pHVar2,&local_44);
                      *(long *)(lVar36 + 0x108) = *(long *)(lVar36 + 0x108) - (ulong)*puVar30;
                      HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
                      ::erase(pHVar2,&local_44);
                      goto LAB_0010b808;
                    }
                    uVar39 = uVar39 + 1;
                    auVar8._8_8_ = 0;
                    auVar8._0_8_ = (iVar31 + 1) * uVar38;
                    auVar20._8_8_ = 0;
                    auVar20._0_8_ = uVar40;
                    lVar33 = SUB168(auVar8 * auVar20,8);
                    uVar28 = *(uint *)(*(long *)(Utilities::singleton + 0xd8) + lVar33 * 4);
                    iVar31 = SUB164(auVar8 * auVar20,8);
                  } while ((uVar28 != 0) &&
                          (auVar9._8_8_ = 0, auVar9._0_8_ = uVar28 * uVar38, auVar21._8_8_ = 0,
                          auVar21._0_8_ = uVar40, auVar10._8_8_ = 0,
                          auVar10._0_8_ =
                               ((*(uint *)(hash_table_size_primes +
                                          (ulong)*(uint *)(Utilities::singleton + 0xf0) * 4) +
                                iVar31) - SUB164(auVar9 * auVar21,8)) * uVar38, auVar22._8_8_ = 0,
                          auVar22._0_8_ = uVar40, uVar39 <= SUB164(auVar10 * auVar22,8)));
                }
              }
              _err_print_error("texture_free_data","drivers/gles3/storage/../storage/utilities.h",
                               0x90,"Condition \"!texture_allocs_cache.has(p_id)\" is true.",0,0);
LAB_0010b808:
              if (*(long *)(piVar32 + 0xe) == 0) {
LAB_0010ba80:
                lVar33 = 0;
LAB_0010ba83:
                _err_print_index_error
                          ("operator[]","./core/templates/vector.h",0x38,lVar41,lVar33,"p_index",
                           "((Vector<T> *)(this))->_cowdata.size()","",false,true);
                _err_flush_stdout();
                    /* WARNING: Does not return */
                pcVar27 = (code *)invalidInstructionException();
                (*pcVar27)();
              }
              lVar33 = *(long *)(*(long *)(piVar32 + 0xe) + -8);
              if (lVar33 <= lVar41) goto LAB_0010ba83;
              CowData<GLES3::ReflectionAtlas::Reflection>::_copy_on_write
                        ((CowData<GLES3::ReflectionAtlas::Reflection> *)(piVar32 + 0xe));
              lVar36 = Utilities::singleton;
              lVar33 = *(long *)(piVar32 + 0xe);
              *(undefined4 *)(lVar33 + lVar29 + 8) = 0;
              if (lVar33 == 0) goto LAB_0010ba40;
              lVar37 = *(long *)(lVar33 + -8);
              if (lVar37 <= lVar41) goto LAB_0010b450;
              local_44 = *(uint *)(lVar33 + lVar29 + 0xc);
              if ((*(long *)(lVar36 + 0xd0) != 0) && (*(int *)(lVar36 + 0xf4) != 0)) {
                uVar40 = CONCAT44(0,*(uint *)(hash_table_size_primes +
                                             (ulong)*(uint *)(lVar36 + 0xf0) * 4));
                uVar38 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar36 + 0xf0) * 8
                                   );
                uVar28 = (local_44 >> 0x10 ^ local_44) * -0x7a143595;
                uVar28 = (uVar28 ^ uVar28 >> 0xd) * -0x3d4d51cb;
                uVar35 = uVar28 ^ uVar28 >> 0x10;
                if (uVar28 == uVar28 >> 0x10) {
                  uVar35 = 1;
                  uVar34 = uVar38;
                }
                else {
                  uVar34 = uVar35 * uVar38;
                }
                auVar11._8_8_ = 0;
                auVar11._0_8_ = uVar40;
                auVar23._8_8_ = 0;
                auVar23._0_8_ = uVar34;
                lVar33 = SUB168(auVar11 * auVar23,8);
                uVar28 = *(uint *)(*(long *)(lVar36 + 0xd8) + lVar33 * 4);
                iVar31 = SUB164(auVar11 * auVar23,8);
                if (uVar28 != 0) {
                  uVar39 = 0;
                  do {
                    if ((uVar28 == uVar35) &&
                       (local_44 ==
                        *(uint *)(*(long *)(*(long *)(lVar36 + 0xd0) + lVar33 * 8) + 0x10))) {
                      (*_glad_glDeleteTextures)(1,&local_44);
                      puVar30 = (uint *)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
                                        ::operator[]((
                                                  HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
                                                  *)(lVar36 + 200),&local_44);
                      *(long *)(lVar36 + 0x108) = *(long *)(lVar36 + 0x108) - (ulong)*puVar30;
                      HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
                      ::erase((HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
                               *)(lVar36 + 200),&local_44);
                      goto LAB_0010b9c0;
                    }
                    uVar39 = uVar39 + 1;
                    auVar12._8_8_ = 0;
                    auVar12._0_8_ = (iVar31 + 1) * uVar38;
                    auVar24._8_8_ = 0;
                    auVar24._0_8_ = uVar40;
                    lVar33 = SUB168(auVar12 * auVar24,8);
                    uVar28 = *(uint *)(*(long *)(lVar36 + 0xd8) + lVar33 * 4);
                    iVar31 = SUB164(auVar12 * auVar24,8);
                  } while ((uVar28 != 0) &&
                          (auVar13._8_8_ = 0, auVar13._0_8_ = uVar28 * uVar38, auVar25._8_8_ = 0,
                          auVar25._0_8_ = uVar40, auVar14._8_8_ = 0,
                          auVar14._0_8_ =
                               ((*(uint *)(hash_table_size_primes +
                                          (ulong)*(uint *)(lVar36 + 0xf0) * 4) + iVar31) -
                               SUB164(auVar13 * auVar25,8)) * uVar38, auVar26._8_8_ = 0,
                          auVar26._0_8_ = uVar40, uVar39 <= SUB164(auVar14 * auVar26,8)));
                }
              }
              _err_print_error("texture_free_data","drivers/gles3/storage/../storage/utilities.h",
                               0x90,"Condition \"!texture_allocs_cache.has(p_id)\" is true.",0,0);
LAB_0010b9c0:
              lVar33 = *(long *)(piVar32 + 0xe);
              if (lVar33 == 0) goto LAB_0010ba80;
              lVar33 = *(long *)(lVar33 + -8);
              if (lVar33 <= lVar41) goto LAB_0010ba83;
              CowData<GLES3::ReflectionAtlas::Reflection>::_copy_on_write
                        ((CowData<GLES3::ReflectionAtlas::Reflection> *)(piVar32 + 0xe));
              lVar33 = *(long *)(piVar32 + 0xe);
              *(undefined4 *)(lVar29 + lVar33 + 0xc) = 0;
              if (lVar33 == 0) goto LAB_0010ba40;
              lVar37 = *(long *)(lVar33 + -8);
              if (lVar37 <= lVar41) goto LAB_0010b450;
              if (*(long *)(lVar29 + lVar33) != 0) goto code_r0x0010ba13;
              lVar41 = lVar41 + 1;
            } while( true );
          }
          local_78 = (CowData<GLES3::ReflectionAtlas::Reflection> *)(piVar32 + 0xe);
          CowData<GLES3::ReflectionAtlas::Reflection>::resize<false>(local_78,0);
          lVar33 = Utilities::singleton;
          local_44 = piVar32[0xb];
          if ((*(long *)(Utilities::singleton + 0xd0) == 0) ||
             (*(int *)(Utilities::singleton + 0xf4) == 0)) {
LAB_0010bbd7:
            _err_print_error("texture_free_data","drivers/gles3/storage/../storage/utilities.h",0x90
                             ,"Condition \"!texture_allocs_cache.has(p_id)\" is true.",0,0);
          }
          else {
            lVar41 = *(long *)(hash_table_size_primes_inv +
                              (ulong)*(uint *)(Utilities::singleton + 0xf0) * 8);
            uVar38 = CONCAT44(0,*(uint *)(hash_table_size_primes +
                                         (ulong)*(uint *)(Utilities::singleton + 0xf0) * 4));
            uVar28 = (local_44 >> 0x10 ^ local_44) * -0x7a143595;
            uVar35 = (uVar28 ^ uVar28 >> 0xd) * -0x3d4d51cb;
            uVar28 = uVar35 ^ uVar35 >> 0x10;
            if (uVar35 == uVar35 >> 0x10) {
              uVar28 = 1;
            }
            auVar3._8_8_ = 0;
            auVar3._0_8_ = (ulong)uVar28 * lVar41;
            auVar15._8_8_ = 0;
            auVar15._0_8_ = uVar38;
            lVar36 = SUB168(auVar3 * auVar15,8);
            uVar35 = *(uint *)(*(long *)(Utilities::singleton + 0xd8) + lVar36 * 4);
            iVar31 = SUB164(auVar3 * auVar15,8);
            if (uVar35 == 0) goto LAB_0010bbd7;
            uVar39 = 0;
            while ((uVar35 != uVar28 ||
                   (local_44 !=
                    *(uint *)(*(long *)(*(long *)(Utilities::singleton + 0xd0) + lVar36 * 8) + 0x10)
                   ))) {
              uVar39 = uVar39 + 1;
              auVar4._8_8_ = 0;
              auVar4._0_8_ = (ulong)(iVar31 + 1) * lVar41;
              auVar16._8_8_ = 0;
              auVar16._0_8_ = uVar38;
              lVar36 = SUB168(auVar4 * auVar16,8);
              uVar35 = *(uint *)(*(long *)(Utilities::singleton + 0xd8) + lVar36 * 4);
              iVar31 = SUB164(auVar4 * auVar16,8);
              if ((uVar35 == 0) ||
                 (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar35 * lVar41, auVar17._8_8_ = 0,
                 auVar17._0_8_ = uVar38, auVar6._8_8_ = 0,
                 auVar6._0_8_ = (ulong)((*(uint *)(hash_table_size_primes +
                                                  (ulong)*(uint *)(Utilities::singleton + 0xf0) * 4)
                                        + iVar31) - SUB164(auVar5 * auVar17,8)) * lVar41,
                 auVar18._8_8_ = 0, auVar18._0_8_ = uVar38, SUB164(auVar6 * auVar18,8) < uVar39))
              goto LAB_0010bbd7;
            }
            (*_glad_glDeleteTextures)(1,&local_44);
            pHVar2 = (HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
                      *)(lVar33 + 200);
            puVar30 = (uint *)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
                              ::operator[](pHVar2,&local_44);
            plVar1 = (long *)(lVar33 + 0x108);
            *plVar1 = *plVar1 - (ulong)*puVar30;
            HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
            ::erase(pHVar2,&local_44);
          }
          piVar32[0xb] = 0;
        }
        if (*(long *)(piVar32 + 0x10) != 0) {
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            RenderSceneBuffersGLES3::free_render_buffer_data();
            return;
          }
          goto LAB_0010bc30;
        }
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010bc30;
    }
    if (piVar32[0x12] + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    _err_print_error("reflection_atlas_set_size","drivers/gles3/storage/light_storage.cpp",0x2a6,
                     "Parameter \"ra\" is null.",0,0);
    return;
  }
LAB_0010bc30:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x0010ba13:
  lVar41 = lVar41 + 1;
  (**(code **)(*(long *)this + 0x2a0))();
  lVar33 = *(long *)(piVar32 + 0xe);
  goto joined_r0x0010b3dd;
}



/* Error CowData<GLES3::LightStorage::ShadowAtlas::Quadrant::Shadow>::resize<false>(long) [clone
   .isra.0] */

void __thiscall
CowData<GLES3::LightStorage::ShadowAtlas::Quadrant::Shadow>::resize<false>
          (CowData<GLES3::LightStorage::ShadowAtlas::Quadrant::Shadow> *this,long param_1)

{
  long *plVar1;
  int iVar2;
  CowData<GLES3::LightStorage::ShadowAtlas::Quadrant::Shadow> *pCVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  char *pcVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  CowData<GLES3::LightStorage::ShadowAtlas::Quadrant::Shadow> *pCVar12;
  CowData<GLES3::LightStorage::ShadowAtlas::Quadrant::Shadow> *pCVar13;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return;
  }
  lVar10 = *(long *)this;
  if (lVar10 == 0) {
    if (param_1 == 0) {
      return;
    }
    _copy_on_write(this);
    lVar11 = 0;
    pCVar3 = (CowData<GLES3::LightStorage::ShadowAtlas::Quadrant::Shadow> *)0x0;
  }
  else {
    lVar11 = *(long *)(lVar10 + -8);
    if (param_1 == lVar11) {
      return;
    }
    if (param_1 == 0) {
      LOCK();
      plVar1 = (long *)(lVar10 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) {
        *(undefined8 *)this = 0;
        return;
      }
      lVar10 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar10 + -0x10),false);
      return;
    }
    _copy_on_write(this);
    pCVar3 = (CowData<GLES3::LightStorage::ShadowAtlas::Quadrant::Shadow> *)(lVar11 * 0x20);
    if (pCVar3 != (CowData<GLES3::LightStorage::ShadowAtlas::Quadrant::Shadow> *)0x0) {
      uVar4 = (ulong)(pCVar3 + -1) | (ulong)(pCVar3 + -1) >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      pCVar3 = (CowData<GLES3::LightStorage::ShadowAtlas::Quadrant::Shadow> *)
               ((uVar4 | uVar4 >> 0x20) + 1);
    }
  }
  if (param_1 * 0x20 != 0) {
    uVar4 = param_1 * 0x20 - 1;
    uVar4 = uVar4 | uVar4 >> 1;
    uVar4 = uVar4 | uVar4 >> 2;
    uVar4 = uVar4 | uVar4 >> 4;
    uVar4 = uVar4 | uVar4 >> 8;
    uVar4 = uVar4 | uVar4 >> 0x10;
    pCVar13 = (CowData<GLES3::LightStorage::ShadowAtlas::Quadrant::Shadow> *)(uVar4 | uVar4 >> 0x20)
    ;
    pCVar12 = pCVar13 + 1;
    if (pCVar12 != (CowData<GLES3::LightStorage::ShadowAtlas::Quadrant::Shadow> *)0x0) {
      if (param_1 <= lVar11) {
        if ((pCVar12 != pCVar3) && (iVar2 = _realloc(this,(long)pCVar12), iVar2 != 0)) {
          return;
        }
        if (*(long *)this != 0) {
          *(long *)(*(long *)this + -8) = param_1;
          return;
        }
        FUN_0010f09a();
        return;
      }
      if (pCVar12 == pCVar3) {
LAB_0010be0c:
        puVar8 = *(undefined8 **)this;
        if (puVar8 == (undefined8 *)0x0) {
          resize<false>((long)pCVar13);
          return;
        }
        lVar10 = puVar8[-1];
        if (param_1 <= lVar10) goto LAB_0010bd98;
      }
      else {
        if (lVar11 != 0) {
          pCVar13 = this;
          iVar2 = _realloc(this,(long)pCVar12);
          if (iVar2 != 0) {
            return;
          }
          goto LAB_0010be0c;
        }
        puVar5 = (undefined8 *)Memory::alloc_static((ulong)(pCVar13 + 0x11),false);
        if (puVar5 == (undefined8 *)0x0) {
          uVar9 = 0x171;
          pcVar7 = "Parameter \"mem_new\" is null.";
          goto LAB_0010beb2;
        }
        puVar8 = puVar5 + 2;
        *puVar5 = 1;
        puVar5[1] = 0;
        *(undefined8 **)this = puVar8;
        lVar10 = 0;
      }
      puVar5 = puVar8 + lVar10 * 4;
      do {
        *puVar5 = 0;
        puVar6 = puVar5 + 4;
        *(undefined1 *)(puVar5 + 1) = 0;
        *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
        puVar5 = puVar6;
      } while (puVar6 != puVar8 + param_1 * 4);
LAB_0010bd98:
      puVar8[-1] = param_1;
      return;
    }
  }
  uVar9 = 0x16a;
  pcVar7 = 
  "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
  ;
LAB_0010beb2:
  _err_print_error("resize","./core/templates/cowdata.h",uVar9,pcVar7,0,0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GLES3::LightStorage::shadow_atlas_set_quadrant_subdivision(RID, int, int) */

void __thiscall
GLES3::LightStorage::shadow_atlas_set_quadrant_subdivision
          (LightStorage *this,ulong param_2,uint param_3,uint param_4)

{
  long *plVar1;
  uint uVar2;
  code *pcVar3;
  uint uVar4;
  long lVar5;
  uint *puVar6;
  uint *puVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  float fVar13;
  uint local_64;
  ulong local_40 [2];
  
  local_40[0] = param_2;
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x29c))) {
    puVar7 = (uint *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x298)) * 0x140 +
                     *(long *)(*(long *)(this + 0x288) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x298)) * 8));
    if (puVar7[0x4e] == (uint)(param_2 >> 0x20)) {
      if (param_3 < 4) {
        if (param_4 < 0x4000) {
          local_64 = param_4;
          if (param_4 != 0) {
            uVar4 = param_4 - 1 | param_4 - 1 >> 1;
            uVar4 = uVar4 | uVar4 >> 2;
            uVar4 = uVar4 | uVar4 >> 4;
            uVar4 = (uVar4 | uVar4 >> 8) + 1;
            if ((uVar4 & 0xaaaaaaaa) != 0) {
              uVar4 = uVar4 * 2;
            }
            fVar13 = (float)(int)uVar4;
            if (fVar13 < 0.0) {
              fVar13 = sqrtf(fVar13);
              local_64 = (uint)fVar13;
            }
            else {
              local_64 = (uint)SQRT(fVar13);
            }
          }
          lVar5 = (long)(int)param_3;
          if (puVar7[lVar5 * 0xe] != local_64) {
            lVar11 = 0;
            lVar10 = *(long *)(puVar7 + lVar5 * 0xe + 4);
joined_r0x0010c015:
            if (lVar10 != 0) {
              for (; lVar11 < *(long *)(lVar10 + -8); lVar11 = lVar11 + 1) {
                plVar1 = (long *)(lVar10 + lVar11 * 0x20);
                if (*plVar1 == 0) goto LAB_0010c03b;
                HashMap<RID,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,unsigned_int>>>
                ::erase((HashMap<RID,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,unsigned_int>>>
                         *)(puVar7 + 0x42),(RID *)plVar1);
                lVar10 = *(long *)(puVar7 + lVar5 * 0xe + 4);
                if (lVar10 == 0) {
                  lVar8 = 0;
LAB_0010c29b:
                  _err_print_index_error
                            ("get","./core/templates/cowdata.h",0xdb,lVar11,lVar8,"p_index","size()"
                             ,"",false,true);
                  _err_flush_stdout();
                    /* WARNING: Does not return */
                  pcVar3 = (code *)invalidInstructionException();
                  (*pcVar3)();
                }
                lVar8 = *(long *)(lVar10 + -8);
                if (lVar8 <= lVar11) goto LAB_0010c29b;
                uVar12 = *(ulong *)(lVar10 + lVar11 * 0x20);
                if ((uVar12 == 0) || (*(uint *)(this + 0x7c) <= (uint)uVar12)) goto LAB_0010c2f0;
                lVar8 = ((uVar12 & 0xffffffff) % (ulong)*(uint *)(this + 0x78)) * 0x478 +
                        *(long *)(*(long *)(this + 0x68) +
                                 ((uVar12 & 0xffffffff) / (ulong)*(uint *)(this + 0x78)) * 8);
                iVar9 = *(int *)(lVar8 + 0x470);
                if (iVar9 != (int)(uVar12 >> 0x20)) goto LAB_0010c2e0;
                HashSet<RID,HashMapHasherDefault,HashMapComparatorDefault<RID>>::erase
                          ((HashSet<RID,HashMapHasherDefault,HashMapComparatorDefault<RID>> *)
                           (lVar8 + 0x440),(RID *)local_40);
              }
            }
            uVar12 = 0;
            if (puVar7[lVar5 * 0xe + 6] != 0) {
              do {
                (*_glad_glDeleteTextures)(1,*(long *)(puVar7 + lVar5 * 0xe + 8) + uVar12 * 4);
                if (puVar7[lVar5 * 0xe + 10] <= (uint)uVar12) {
                  _err_print_index_error
                            ("operator[]","./core/templates/local_vector.h",0xb2,uVar12 & 0xffffffff
                             ,(ulong)puVar7[lVar5 * 0xe + 10],"p_index","count","",false,true);
                  _err_flush_stdout();
                    /* WARNING: Does not return */
                  pcVar3 = (code *)invalidInstructionException();
                  (*pcVar3)();
                }
                uVar12 = uVar12 + 1;
                (*_glad_glDeleteFramebuffers)(1);
              } while ((uint)uVar12 < puVar7[lVar5 * 0xe + 6]);
              if (puVar7[lVar5 * 0xe + 6] != 0) {
                puVar7[lVar5 * 0xe + 6] = 0;
              }
            }
            if (puVar7[lVar5 * 0xe + 10] != 0) {
              puVar7[lVar5 * 0xe + 10] = 0;
            }
            CowData<GLES3::LightStorage::ShadowAtlas::Quadrant::Shadow>::resize<false>
                      ((CowData<GLES3::LightStorage::ShadowAtlas::Quadrant::Shadow> *)
                       (puVar7 + lVar5 * 0xe + 4),0);
            CowData<GLES3::LightStorage::ShadowAtlas::Quadrant::Shadow>::resize<false>
                      ((CowData<GLES3::LightStorage::ShadowAtlas::Quadrant::Shadow> *)
                       (puVar7 + lVar5 * 0xe + 4),(ulong)(local_64 * local_64));
            uVar4 = 0x40000000;
            puVar7[lVar5 * 0xe] = local_64;
            puVar7[0x3c] = 0x40000000;
            puVar6 = puVar7;
            do {
              uVar2 = *puVar6;
              if (uVar2 != 0) {
                if (uVar2 < uVar4) {
                  uVar4 = uVar2;
                }
                puVar7[0x3c] = uVar4;
              }
              puVar6 = puVar6 + 0xe;
            } while (puVar7 + 0x38 != puVar6);
            if (uVar4 == 0x40000000) {
              puVar7[0x3c] = 0;
            }
            do {
              iVar9 = 0;
              puVar6 = puVar7 + 0x38;
              do {
                uVar4 = *puVar6;
                if (puVar7[(long)(int)uVar4 * 0xe] < puVar7[(long)(int)puVar6[1] * 0xe]) {
                  *puVar6 = puVar6[1];
                  iVar9 = iVar9 + 1;
                  puVar6[1] = uVar4;
                }
                puVar6 = puVar6 + 1;
              } while (puVar7 + 0x3b != puVar6);
            } while (0 < iVar9);
          }
        }
        else {
          _err_print_index_error
                    ("shadow_atlas_set_quadrant_subdivision",
                     "drivers/gles3/storage/light_storage.cpp",0x526,(long)(int)param_4,0x4000,
                     "p_subdivision","16384","",false,false);
        }
      }
      else {
        _err_print_index_error
                  ("shadow_atlas_set_quadrant_subdivision","drivers/gles3/storage/light_storage.cpp"
                   ,0x525,(long)(int)param_3,4,"p_quadrant","4","",false,false);
      }
      return;
    }
    if (puVar7[0x4e] + 0x80000000 < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("shadow_atlas_set_quadrant_subdivision","drivers/gles3/storage/light_storage.cpp"
                   ,0x524,"Parameter \"shadow_atlas\" is null.",0,0);
  return;
LAB_0010c2e0:
  if (iVar9 + 0x80000000U < 0x7fffffff) {
    _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                     "Method/function failed. Returning: nullptr",
                     "Attempting to use an uninitialized RID",0,0);
  }
LAB_0010c2f0:
  _err_print_error("shadow_atlas_set_quadrant_subdivision","drivers/gles3/storage/light_storage.cpp"
                   ,0x538,"Condition \"!li\" is true. Continuing.");
LAB_0010c03b:
  lVar10 = *(long *)(puVar7 + lVar5 * 0xe + 4);
  lVar11 = lVar11 + 1;
  goto joined_r0x0010c015;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GLES3::LightStorage::shadow_atlas_set_size(RID, int, bool) */

void __thiscall
GLES3::LightStorage::shadow_atlas_set_size
          (LightStorage *this,ulong param_2,int param_3,char param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  uint uVar4;
  int *piVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  CowData<GLES3::LightStorage::ShadowAtlas::Quadrant::Shadow> *this_00;
  CowData<GLES3::LightStorage::ShadowAtlas::Quadrant::Shadow> *pCVar10;
  ulong local_40 [2];
  
  local_40[0] = param_2;
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x29c))) {
    lVar8 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x298)) * 0x140 +
            *(long *)(*(long *)(this + 0x288) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x298)) * 8);
    if (*(int *)(lVar8 + 0x138) == (int)(param_2 >> 0x20)) {
      if (param_3 < 0) {
        _err_print_error("shadow_atlas_set_size","drivers/gles3/storage/light_storage.cpp",0x4f8,
                         "Condition \"p_size < 0\" is true.",0,0);
      }
      else {
        iVar9 = 0;
        if (param_3 != 0) {
          uVar4 = param_3 - 1U | param_3 - 1U >> 1;
          uVar4 = uVar4 | uVar4 >> 2;
          uVar4 = uVar4 | uVar4 >> 4;
          uVar4 = uVar4 | uVar4 >> 8;
          iVar9 = (uVar4 | uVar4 >> 0x10) + 1;
        }
        if ((*(int *)(lVar8 + 0xf4) != iVar9) || (*(char *)(lVar8 + 0xf8) != param_4)) {
          this_00 = (CowData<GLES3::LightStorage::ShadowAtlas::Quadrant::Shadow> *)(lVar8 + 0x10);
          do {
            uVar6 = 0;
            if (*(int *)(this_00 + 8) != 0) {
              do {
                (*_glad_glDeleteTextures)(1,*(long *)(this_00 + 0x10) + uVar6 * 4);
                if (*(uint *)(this_00 + 0x18) <= (uint)uVar6) {
                  _err_print_index_error
                            ("operator[]","./core/templates/local_vector.h",0xb2,uVar6 & 0xffffffff,
                             (ulong)*(uint *)(this_00 + 0x18),"p_index","count","",false,true);
                  _err_flush_stdout();
                    /* WARNING: Does not return */
                  pcVar3 = (code *)invalidInstructionException();
                  (*pcVar3)();
                }
                uVar6 = uVar6 + 1;
                (*_glad_glDeleteFramebuffers)(1);
              } while ((uint)uVar6 < *(uint *)(this_00 + 8));
              if (*(uint *)(this_00 + 8) != 0) {
                *(undefined4 *)(this_00 + 8) = 0;
              }
            }
            if (*(int *)(this_00 + 0x18) != 0) {
              *(undefined4 *)(this_00 + 0x18) = 0;
            }
            CowData<GLES3::LightStorage::ShadowAtlas::Quadrant::Shadow>::resize<false>(this_00,0);
            pCVar10 = this_00 + 0x38;
            CowData<GLES3::LightStorage::ShadowAtlas::Quadrant::Shadow>::resize<false>
                      (this_00,(ulong)(uint)(*(int *)(this_00 + -0x10) * *(int *)(this_00 + -0x10)))
            ;
            this_00 = pCVar10;
          } while (pCVar10 !=
                   (CowData<GLES3::LightStorage::ShadowAtlas::Quadrant::Shadow> *)(lVar8 + 0xf0));
          for (puVar2 = *(undefined8 **)(lVar8 + 0x120); puVar2 != (undefined8 *)0x0;
              puVar2 = (undefined8 *)*puVar2) {
            uVar6 = puVar2[2];
            if ((uVar6 == 0) || (*(uint *)(this + 0x7c) <= (uint)uVar6)) {
LAB_0010c78f:
              _err_print_error("shadow_atlas_set_size","drivers/gles3/storage/light_storage.cpp",
                               0x50f,"Condition \"!li\" is true. Continuing.",0);
            }
            else {
              lVar7 = ((uVar6 & 0xffffffff) % (ulong)*(uint *)(this + 0x78)) * 0x478 +
                      *(long *)(*(long *)(this + 0x68) +
                               ((uVar6 & 0xffffffff) / (ulong)*(uint *)(this + 0x78)) * 8);
              iVar1 = *(int *)(lVar7 + 0x470);
              if (iVar1 != (int)(uVar6 >> 0x20)) {
                if (iVar1 + 0x80000000U < 0x7fffffff) {
                  _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                   "Method/function failed. Returning: nullptr",
                                   "Attempting to use an uninitialized RID",0,0);
                }
                goto LAB_0010c78f;
              }
              HashSet<RID,HashMapHasherDefault,HashMapComparatorDefault<RID>>::erase
                        ((HashSet<RID,HashMapHasherDefault,HashMapComparatorDefault<RID>> *)
                         (lVar7 + 0x440),(RID *)local_40);
            }
          }
          if (*(int *)(lVar8 + 0xfc) != 0) {
            (*_glad_glDeleteTextures)(1,lVar8 + 0xfc);
          }
          if (*(int *)(lVar8 + 0x100) != 0) {
            (*_glad_glDeleteFramebuffers)(1);
          }
          if ((*(long *)(lVar8 + 0x110) != 0) && (*(int *)(lVar8 + 0x134) != 0)) {
            lVar7 = 0;
            uVar4 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar8 + 0x130) * 4);
            if (uVar4 != 0) {
              do {
                piVar5 = (int *)(*(long *)(lVar8 + 0x118) + lVar7);
                if (*piVar5 != 0) {
                  *piVar5 = 0;
                  Memory::free_static(*(void **)(*(long *)(lVar8 + 0x110) + lVar7 * 2),false);
                  *(undefined8 *)(*(long *)(lVar8 + 0x110) + lVar7 * 2) = 0;
                }
                lVar7 = lVar7 + 4;
              } while (lVar7 != (ulong)uVar4 << 2);
            }
            *(undefined4 *)(lVar8 + 0x134) = 0;
            *(undefined1 (*) [16])(lVar8 + 0x120) = (undefined1  [16])0x0;
          }
          *(int *)(lVar8 + 0xf4) = iVar9;
          *(char *)(lVar8 + 0xf8) = param_4;
        }
      }
      return;
    }
    if (*(int *)(lVar8 + 0x138) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("shadow_atlas_set_size","drivers/gles3/storage/light_storage.cpp",0x4f7,
                   "Parameter \"shadow_atlas\" is null.",0,0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GLES3::LightStorage::_light_initialize(RID, RenderingServer::LightType) */

void __thiscall GLES3::LightStorage::_light_initialize(LightStorage *this,ulong param_2,int param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  int *piVar16;
  long *plVar17;
  uint uVar18;
  char *pcVar19;
  long in_FS_OFFSET;
  DependencyTracker *local_110;
  int local_108;
  undefined8 local_104;
  undefined8 uStack_fc;
  undefined8 local_f4;
  undefined8 uStack_ec;
  undefined8 local_e4;
  undefined8 uStack_dc;
  undefined8 local_d4;
  undefined8 uStack_cc;
  undefined8 local_c4;
  undefined8 uStack_bc;
  int local_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined2 local_98;
  undefined1 local_96;
  undefined8 local_94;
  undefined8 uStack_8c;
  undefined1 local_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined1 local_6c;
  undefined4 local_68;
  undefined8 local_60;
  Dependency local_58 [8];
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  undefined8 local_30;
  long local_20;
  
  uVar13 = _UNK_001166b8;
  uVar12 = __LC238;
  uVar11 = _UNK_001166a8;
  uVar10 = __LC237;
  uVar9 = _UNK_00116698;
  uVar8 = __LC236;
  uVar7 = _UNK_00116688;
  uVar6 = __LC235;
  uVar5 = _UNK_00116678;
  uVar4 = _LC242;
  uVar3 = _UNK_00116668;
  uVar2 = __LC231;
  uVar1 = _LC124;
  uVar15 = _LC232;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_b0 = _LC124;
  uStack_ac = _LC124;
  uStack_a8 = _LC124;
  uStack_a4 = _LC124;
  local_a0 = 0;
  local_94 = __LC231;
  uStack_8c = _UNK_00116668;
  local_50 = (undefined1  [16])0x0;
  local_40 = (undefined1  [16])0x0;
  local_98 = 0;
  local_104 = _LC242;
  uStack_fc = _UNK_00116678;
  local_96 = 0;
  local_84 = 0;
  local_80 = _LC232;
  local_78 = 0x41200000;
  local_74 = 0;
  local_6c = 0;
  local_68 = 0;
  local_60 = 0;
  local_30 = 2;
  local_f4 = __LC235;
  uStack_ec = _UNK_00116688;
  local_e4 = __LC236;
  uStack_dc = _UNK_00116698;
  local_d4 = __LC237;
  uStack_cc = _UNK_001166a8;
  local_c4 = __LC238;
  uStack_bc = _UNK_001166b8;
  local_b4 = _LC229;
  if (param_3 == 0) {
    local_b4 = _LC228;
  }
  local_108 = param_3;
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    piVar16 = (int *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0xe8 +
                     *(long *)(*(long *)(this + 0x10) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8));
    if (piVar16[0x38] < 0) {
      uVar18 = (uint)(param_2 >> 0x20);
      if (uVar18 == (piVar16[0x38] & 0x7fffffffU)) {
        piVar16[0x38] = uVar18;
        *piVar16 = param_3;
        piVar16[0x24] = 0x41200000;
        *(undefined8 *)(piVar16 + 1) = uVar4;
        *(undefined8 *)(piVar16 + 3) = uVar5;
        piVar16[0x15] = local_b4;
        *(undefined8 *)(piVar16 + 5) = uVar6;
        *(undefined8 *)(piVar16 + 7) = uVar7;
        piVar16[0x1a] = 0;
        piVar16[0x1b] = 0;
        *(undefined8 *)(piVar16 + 9) = uVar8;
        *(undefined8 *)(piVar16 + 0xb) = uVar9;
        *(undefined2 *)(piVar16 + 0x1c) = 0;
        *(undefined8 *)(piVar16 + 0xd) = uVar10;
        *(undefined8 *)(piVar16 + 0xf) = uVar11;
        *(undefined1 *)((long)piVar16 + 0x72) = 0;
        *(undefined8 *)(piVar16 + 0x11) = uVar12;
        *(undefined8 *)(piVar16 + 0x13) = uVar13;
        *(undefined1 *)(piVar16 + 0x21) = 0;
        *(ulong *)(piVar16 + 0x16) = CONCAT44(uVar1,uVar1);
        *(ulong *)(piVar16 + 0x18) = CONCAT44(uVar1,uVar1);
        *(undefined8 *)(piVar16 + 0x22) = uVar15;
        *(undefined8 *)(piVar16 + 0x1d) = uVar2;
        *(undefined8 *)(piVar16 + 0x1f) = uVar3;
        piVar16[0x25] = 0;
        piVar16[0x26] = 0;
        piVar16[0x36] = 0;
        piVar16[0x37] = 0;
        *(undefined1 *)(piVar16 + 0x27) = 0;
        *(undefined1 (*) [16])(piVar16 + 0x2e) = (undefined1  [16])0x0;
        piVar16[0x28] = 0;
        *(undefined1 (*) [16])(piVar16 + 0x32) = (undefined1  [16])0x0;
        piVar16[0x2a] = 0;
        piVar16[0x2b] = 0;
        lVar14 = 1;
        if (5 < (uint)hash_table_size_primes._8_4_) {
          do {
            if ((uint)hash_table_size_primes._8_4_ <= *(uint *)(hash_table_size_primes + lVar14 * 4)
               ) {
              piVar16[0x36] = (int)lVar14;
              goto LAB_0010cba0;
            }
            lVar14 = lVar14 + 1;
          } while (lVar14 != 0x1d);
          _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                           "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0
                           ,0,0);
        }
LAB_0010cba0:
        if ((local_30._4_4_ != 0) && ((long *)local_40._0_8_ != (long *)0x0)) {
          plVar17 = (long *)local_40._0_8_;
          do {
            HashMap<DependencyTracker*,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<DependencyTracker*>,DefaultTypedAllocator<HashMapElement<DependencyTracker*,unsigned_int>>>
            ::insert(&local_110,(uint *)(piVar16 + 0x2c),(bool)((char)plVar17 + '\x10'));
            plVar17 = (long *)*plVar17;
          } while (plVar17 != (long *)0x0);
        }
        goto LAB_0010cbe7;
      }
      pcVar19 = "Attempting to initialize the wrong RID";
      uVar15 = 0xfc;
    }
    else {
      pcVar19 = "Initializing already initialized RID";
      uVar15 = 0xf8;
    }
    _err_print_error("get_or_null","./core/templates/rid_owner.h",uVar15,
                     "Method/function failed. Returning: nullptr",pcVar19,0,0);
  }
  _err_print_error("initialize_rid","./core/templates/rid_owner.h",0x128,
                   "Parameter \"mem\" is null.",0,0);
LAB_0010cbe7:
  Dependency::~Dependency(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* GLES3::LightStorage::directional_light_initialize(RID) */

void __thiscall
GLES3::LightStorage::directional_light_initialize(LightStorage *this,undefined8 param_2)

{
  _light_initialize(this,param_2,0);
  return;
}



/* GLES3::LightStorage::omni_light_initialize(RID) */

void __thiscall GLES3::LightStorage::omni_light_initialize(LightStorage *this,undefined8 param_2)

{
  _light_initialize(this,param_2,1);
  return;
}



/* GLES3::LightStorage::spot_light_initialize(RID) */

void __thiscall GLES3::LightStorage::spot_light_initialize(LightStorage *this,undefined8 param_2)

{
  _light_initialize(this,param_2,2);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GLES3::LightStorage::lightmap_initialize(RID) */

void __thiscall GLES3::LightStorage::lightmap_initialize(LightStorage *this,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined4 uStack_a8;
  undefined8 local_a4;
  undefined4 local_9c;
  undefined1 local_98 [16];
  long local_80;
  long local_70;
  long local_60;
  long local_50;
  Dependency local_48 [8];
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_a4 = _LC242;
  local_c8 = (undefined1  [16])0x0;
  local_b8._4_4_ = _UNK_001166c4;
  local_b8._0_4_ = __LC241;
  local_b8._8_4_ = _UNK_001166c8;
  local_b8._12_4_ = 0;
  local_b8 = local_b8 << 0x20;
  uStack_a8 = _UNK_001166cc;
  local_40 = (undefined1  [16])0x0;
  local_30 = (undefined1  [16])0x0;
  local_9c = 0x3f800000;
  local_98._0_12_ = ZEXT412(0xffffffff) << 0x40;
  local_98._12_4_ = 0;
  local_80 = 0;
  local_70 = 0;
  local_60 = 0;
  local_50 = 0;
  local_20 = 2;
  RID_Alloc<GLES3::Lightmap,true>::initialize_rid
            ((RID_Alloc<GLES3::Lightmap,true> *)(this + 0x1c8),param_2,local_c8);
  Dependency::~Dependency(local_48);
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
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GLES3::LightStorage::reflection_probe_initialize(RID) */

void __thiscall GLES3::LightStorage::reflection_probe_initialize(LightStorage *this,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 *puVar10;
  uint uVar11;
  char *pcVar12;
  long in_FS_OFFSET;
  DependencyTracker *local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_94;
  undefined8 uStack_8c;
  undefined8 local_84;
  undefined8 uStack_7c;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_68;
  undefined2 local_64;
  undefined1 local_62;
  undefined8 local_60;
  undefined8 local_58;
  Dependency local_50 [8];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined8 local_28;
  long local_20;
  
  uVar6 = _UNK_001166d8;
  uVar5 = __LC243;
  uVar4 = _UNK_001166c8;
  uVar3 = __LC241;
  uVar2 = _LC242;
  uVar1 = _LC246;
  uVar8 = _LC245;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_64 = 0;
  local_94 = __LC241;
  uStack_8c = _UNK_001166c8;
  local_a0 = _LC242;
  local_84 = __LC243;
  uStack_7c = _UNK_001166d8;
  local_60 = _LC245;
  local_a8 = 0;
  uStack_a4 = 0x100;
  local_98 = 1;
  local_74 = 0x41a00000;
  local_70 = 0;
  local_68 = 0;
  local_62 = 0;
  local_58 = _LC246;
  local_28 = 2;
  local_48 = (undefined1  [16])0x0;
  local_38 = (undefined1  [16])0x0;
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0xd4))) {
    puVar10 = (undefined8 *)
              (((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0xd0)) * 0x90 +
              *(long *)(*(long *)(this + 0xc0) +
                       ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0xd0)) * 8));
    if ((int)*(uint *)(puVar10 + 0x11) < 0) {
      uVar11 = (uint)(param_2 >> 0x20);
      if (uVar11 == (*(uint *)(puVar10 + 0x11) & 0x7fffffff)) {
        *(uint *)(puVar10 + 0x11) = uVar11;
        puVar10[0x10] = 0;
        *puVar10 = 0x10000000000;
        *(undefined8 *)((long)puVar10 + 0x14) = uVar3;
        *(undefined8 *)((long)puVar10 + 0x1c) = uVar4;
        puVar10[1] = uVar2;
        *(undefined1 (*) [16])(puVar10 + 0xc) = (undefined1  [16])0x0;
        *(undefined4 *)(puVar10 + 2) = 1;
        *(undefined1 (*) [16])(puVar10 + 0xe) = (undefined1  [16])0x0;
        *(undefined8 *)((long)puVar10 + 0x24) = uVar5;
        *(undefined8 *)((long)puVar10 + 0x2c) = uVar6;
        *(undefined4 *)((long)puVar10 + 0x34) = 0x41a00000;
        puVar10[7] = 0;
        *(undefined4 *)(puVar10 + 8) = 0;
        *(undefined2 *)((long)puVar10 + 0x44) = 0;
        *(undefined1 *)((long)puVar10 + 0x46) = 0;
        puVar10[9] = uVar8;
        puVar10[10] = uVar1;
        lVar7 = 1;
        if (5 < (uint)hash_table_size_primes._8_4_) {
          do {
            if ((uint)hash_table_size_primes._8_4_ <= *(uint *)(hash_table_size_primes + lVar7 * 4))
            {
              *(int *)(puVar10 + 0x10) = (int)lVar7;
              goto LAB_0010d0a8;
            }
            lVar7 = lVar7 + 1;
          } while (lVar7 != 0x1d);
          _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                           "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0
                           ,0,0);
        }
LAB_0010d0a8:
        if ((local_28._4_4_ != 0) && ((long *)local_38._0_8_ != (long *)0x0)) {
          plVar9 = (long *)local_38._0_8_;
          do {
            HashMap<DependencyTracker*,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<DependencyTracker*>,DefaultTypedAllocator<HashMapElement<DependencyTracker*,unsigned_int>>>
            ::insert(&local_b0,(uint *)(puVar10 + 0xb),(bool)((char)plVar9 + '\x10'));
            plVar9 = (long *)*plVar9;
          } while (plVar9 != (long *)0x0);
        }
        goto LAB_0010d0ee;
      }
      pcVar12 = "Attempting to initialize the wrong RID";
      uVar8 = 0xfc;
    }
    else {
      pcVar12 = "Initializing already initialized RID";
      uVar8 = 0xf8;
    }
    _err_print_error("get_or_null","./core/templates/rid_owner.h",uVar8,
                     "Method/function failed. Returning: nullptr",pcVar12,0,0);
  }
  _err_print_error("initialize_rid","./core/templates/rid_owner.h",0x128,
                   "Parameter \"mem\" is null.",0,0);
LAB_0010d0ee:
  Dependency::~Dependency(local_50);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GLES3::LightStorage::shadow_atlas_create() */

undefined8 __thiscall GLES3::LightStorage::shadow_atlas_create(LightStorage *this)

{
  long *plVar1;
  ShadowAtlas *pSVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ShadowAtlas *pSVar7;
  long in_FS_OFFSET;
  ShadowAtlas local_158 [224];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined8 local_5c;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined8 local_28;
  long local_20;
  
  pSVar2 = local_158;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  pSVar7 = local_158;
  for (lVar4 = 0x27; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(undefined8 *)pSVar7 = 0;
    pSVar7 = (ShadowAtlas *)((long)pSVar7 + 8);
  }
  do {
    *(undefined4 *)pSVar2 = 0;
    puVar5 = (undefined8 *)((long)pSVar2 + 0x38);
    *(undefined8 *)((long)pSVar2 + 0x10) = 0;
    *(undefined8 *)((long)pSVar2 + 0x18) = 0;
    *(undefined8 *)((long)pSVar2 + 0x20) = 0;
    *(undefined8 *)((long)pSVar2 + 0x28) = 0;
    *(undefined8 *)((long)pSVar2 + 0x30) = 0;
    pSVar2 = (ShadowAtlas *)puVar5;
  } while (&local_78 != puVar5);
  local_68 = 0;
  local_60 = 1;
  local_78 = __LC247;
  uStack_70 = _UNK_001166e8;
  local_5c = 0;
  local_28 = 2;
  local_48 = (undefined1  [16])0x0;
  local_38 = (undefined1  [16])0x0;
  uVar3 = RID_Alloc<GLES3::LightStorage::ShadowAtlas,false>::make_rid
                    ((RID_Alloc<GLES3::LightStorage::ShadowAtlas,false> *)(this + 0x280),local_158);
  puVar5 = &local_78;
  do {
    puVar6 = puVar5 + -7;
    if ((void *)puVar5[-1] != (void *)0x0) {
      Memory::free_static((void *)puVar5[-1],false);
    }
    if ((void *)puVar5[-3] != (void *)0x0) {
      Memory::free_static((void *)puVar5[-3],false);
    }
    if (puVar5[-5] != 0) {
      LOCK();
      plVar1 = (long *)(puVar5[-5] + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(puVar5[-5] + -0x10),false);
      }
    }
    puVar5 = puVar6;
  } while ((ShadowAtlas *)puVar6 != local_158);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



/* RendererLightStorage::light_instances_can_render_shadow_cube() const */

undefined8 RendererLightStorage::light_instances_can_render_shadow_cube(void)

{
  return 1;
}



/* GLES3::TextureStorage::texture_add_to_decal_atlas(RID, bool) */

void GLES3::TextureStorage::texture_add_to_decal_atlas(void)

{
  return;
}



/* GLES3::TextureStorage::texture_remove_from_decal_atlas(RID, bool) */

void GLES3::TextureStorage::texture_remove_from_decal_atlas(void)

{
  return;
}



/* GLES3::LightStorage::light_set_max_sdfgi_cascade(RID, unsigned int) */

void GLES3::LightStorage::light_set_max_sdfgi_cascade(void)

{
  return;
}



/* GLES3::LightStorage::light_get_max_sdfgi_cascade(RID) */

undefined8 GLES3::LightStorage::light_get_max_sdfgi_cascade(void)

{
  return 0;
}



/* GLES3::LightStorage::light_instance_is_shadow_visible_at_position(RID, Vector3 const&) const */

bool __thiscall
GLES3::LightStorage::light_instance_is_shadow_visible_at_position
          (LightStorage *this,ulong param_2,float *param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x7c))) {
    lVar3 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x78)) * 0x478 +
            *(long *)(*(long *)(this + 0x68) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x78)) * 8);
    if (*(int *)(lVar3 + 0x470) == (int)(param_2 >> 0x20)) {
      if (*(long *)(lVar3 + 0x3d0) != 0) {
        uVar1 = *(ulong *)(lVar3 + 0x3d0);
        if ((uint)uVar1 < *(uint *)(this + 0x24)) {
          lVar2 = ((uVar1 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0xe8 +
                  *(long *)(*(long *)(this + 0x10) +
                           ((uVar1 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
          if (*(int *)(lVar2 + 0xe0) == (int)(uVar1 >> 0x20)) {
            if (*(char *)(lVar2 + 0x70) == '\0') {
              return false;
            }
            if (*(char *)(lVar2 + 0x84) != '\0') {
              fVar6 = *(float *)(lVar3 + 0x400) - param_3[1];
              fVar4 = *(float *)(lVar3 + 0x3fc) - *param_3;
              fVar5 = *(float *)(lVar3 + 0x404) - param_3[2];
              return SQRT(fVar4 * fVar4 + fVar6 * fVar6 + fVar5 * fVar5) <=
                     *(float *)(lVar2 + 0x8c) + *(float *)(lVar2 + 0x90);
            }
            return (bool)*(char *)(lVar2 + 0x70);
          }
          if (*(int *)(lVar2 + 0xe0) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                             "Method/function failed. Returning: nullptr",
                             "Attempting to use an uninitialized RID",0,0);
          }
        }
      }
      _err_print_error("light_instance_is_shadow_visible_at_position",
                       "drivers/gles3/storage/light_storage.h",0x1c3,"Parameter \"light\" is null.",
                       0,0);
      return false;
    }
    if (*(int *)(lVar3 + 0x470) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("light_instance_is_shadow_visible_at_position",
                   "drivers/gles3/storage/light_storage.h",0x1c1,
                   "Parameter \"light_instance\" is null.",0,0);
  return false;
}



/* GLES3::LightStorage::light_get_type(RID) const */

undefined4 __thiscall GLES3::LightStorage::light_get_type(LightStorage *this,ulong param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    puVar2 = (undefined4 *)
             (((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0xe8 +
             *(long *)(*(long *)(this + 0x10) +
                      ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8));
    iVar1 = puVar2[0x38];
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *puVar2;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("light_get_type","drivers/gles3/storage/light_storage.h",0x15b,
                   "Parameter \"light\" is null.",0,0);
  return 0;
}



/* GLES3::LightStorage::light_get_reverse_cull_face_mode(RID) const */

undefined1 __thiscall
GLES3::LightStorage::light_get_reverse_cull_face_mode(LightStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0xe8 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0xe0);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined1 *)(lVar2 + 0x72);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("light_get_reverse_cull_face_mode","drivers/gles3/storage/light_storage.h",0x1a8,
                   "Parameter \"light\" is null.",0,0);
  return 0;
}



/* GLES3::LightStorage::light_get_color(RID) */

undefined1  [16] __thiscall GLES3::LightStorage::light_get_color(LightStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0xe8 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0xe0);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined1 (*) [16])(lVar2 + 0x58);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("light_get_color","drivers/gles3/storage/light_storage.h",0x171,
                   "Parameter \"light\" is null.",0,0);
  return ZEXT816(0x3f80000000000000) << 0x40;
}



/* GLES3::LightStorage::light_get_param(RID, RenderingServer::LightParam) */

undefined4 __thiscall
GLES3::LightStorage::light_get_param(LightStorage *this,ulong param_2,int param_3)

{
  int iVar1;
  long lVar2;
  
  if (param_2 != 0) {
    if ((uint)param_2 < *(uint *)(this + 0x24)) {
      lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0xe8 +
              *(long *)(*(long *)(this + 0x10) +
                       ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
      iVar1 = *(int *)(lVar2 + 0xe0);
      if (iVar1 == (int)(param_2 >> 0x20)) {
        return *(undefined4 *)(lVar2 + 4 + (long)param_3 * 4);
      }
      if (iVar1 + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
  }
  _err_print_error("light_get_param","drivers/gles3/storage/light_storage.h",0x163,
                   "Parameter \"light\" is null.",0,0);
  return 0;
}



/* GLES3::LightStorage::light_has_shadow(RID) const */

undefined1 __thiscall GLES3::LightStorage::light_has_shadow(LightStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0xe8 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0xe0);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined1 *)(lVar2 + 0x70);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("light_has_shadow","drivers/gles3/storage/light_storage.h",0x18c,
                   "Parameter \"light\" is null.",0,0);
  return 0;
}



/* CowData<GLES3::ReflectionAtlas::Reflection>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<GLES3::ReflectionAtlas::Reflection>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<GLES3::LightStorage::ShadowAtlas::Quadrant::Shadow>::_copy_on_write() [clone .isra.0]
   [clone .cold] */

void CowData<GLES3::LightStorage::ShadowAtlas::Quadrant::Shadow>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GLES3::LightStorage::light_instance_create(RID) [clone .cold] */

void __thiscall GLES3::LightStorage::light_instance_create(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  int in_EAX;
  
  if (in_EAX + 0x80000000U < 0x7fffffff) {
    _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                     "Method/function failed. Returning: nullptr",
                     "Attempting to use an uninitialized RID",0,0,param_2);
  }
  _DAT_000003c8 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* GLES3::LightStorage::light_instance_free(RID) [clone .cold] */

void GLES3::LightStorage::light_instance_free(undefined8 param_1)

{
  code *pcVar1;
  int in_EAX;
  
  if (in_EAX + 0x80000000U < 0x7fffffff) {
    _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                     "Method/function failed. Returning: nullptr",
                     "Attempting to use an uninitialized RID",0,0,param_1);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* Error CowData<GLES3::ReflectionAtlas::Reflection>::resize<false>(long) [clone .isra.0] [clone
   .cold] */

void CowData<GLES3::ReflectionAtlas::Reflection>::resize<false>(long param_1)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0010f084(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* Error CowData<GLES3::LightStorage::ShadowAtlas::Quadrant::Shadow>::resize<false>(long) [clone
   .isra.0] [clone .cold] */

void CowData<GLES3::LightStorage::ShadowAtlas::Quadrant::Shadow>::resize<false>(long param_1)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0010f09a(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* GLES3::LightStorage::light_has_projector(RID) const */

bool __thiscall GLES3::LightStorage::light_has_projector(LightStorage *this,ulong param_2)

{
  pthread_mutex_t *__mutex;
  ulong uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar4 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0xe8 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar2 = *(int *)(lVar4 + 0xe0);
    if (iVar2 == (int)(param_2 >> 0x20)) {
      lVar3 = GLES3::TextureStorage::get_singleton();
      uVar1 = *(ulong *)(lVar4 + 0x68);
      __mutex = (pthread_mutex_t *)(lVar3 + 0x108);
      iVar2 = pthread_mutex_lock(__mutex);
      if (iVar2 == 0) {
        if ((uint)uVar1 < *(uint *)(lVar3 + 0xf4)) {
          bVar5 = false;
          if (uVar1 >> 0x20 != 0x7fffffff) {
            bVar5 = (*(uint *)(((uVar1 & 0xffffffff) % (ulong)*(uint *)(lVar3 + 0xf0)) * 0xf0 +
                               *(long *)(*(long *)(lVar3 + 0xe0) +
                                        ((uVar1 & 0xffffffff) / (ulong)*(uint *)(lVar3 + 0xf0)) * 8)
                              + 0xe8) & 0x7fffffff) == (uint)(uVar1 >> 0x20);
          }
          pthread_mutex_unlock(__mutex);
        }
        else {
          bVar5 = false;
          pthread_mutex_unlock(__mutex);
        }
        return bVar5;
      }
                    /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar2);
    }
    if (iVar2 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("light_has_projector","drivers/gles3/storage/light_storage.h",0x193,
                   "Parameter \"light\" is null.",0,0);
  return false;
}



/* WARNING: Removing unreachable block (ram,0x0010f3c8) */
/* WARNING: Removing unreachable block (ram,0x0010f4f8) */
/* WARNING: Removing unreachable block (ram,0x0010f6c0) */
/* WARNING: Removing unreachable block (ram,0x0010f504) */
/* WARNING: Removing unreachable block (ram,0x0010f50e) */
/* WARNING: Removing unreachable block (ram,0x0010f6a0) */
/* WARNING: Removing unreachable block (ram,0x0010f51a) */
/* WARNING: Removing unreachable block (ram,0x0010f524) */
/* WARNING: Removing unreachable block (ram,0x0010f680) */
/* WARNING: Removing unreachable block (ram,0x0010f530) */
/* WARNING: Removing unreachable block (ram,0x0010f53a) */
/* WARNING: Removing unreachable block (ram,0x0010f660) */
/* WARNING: Removing unreachable block (ram,0x0010f546) */
/* WARNING: Removing unreachable block (ram,0x0010f550) */
/* WARNING: Removing unreachable block (ram,0x0010f640) */
/* WARNING: Removing unreachable block (ram,0x0010f55c) */
/* WARNING: Removing unreachable block (ram,0x0010f566) */
/* WARNING: Removing unreachable block (ram,0x0010f620) */
/* WARNING: Removing unreachable block (ram,0x0010f572) */
/* WARNING: Removing unreachable block (ram,0x0010f57c) */
/* WARNING: Removing unreachable block (ram,0x0010f600) */
/* WARNING: Removing unreachable block (ram,0x0010f584) */
/* WARNING: Removing unreachable block (ram,0x0010f59a) */
/* WARNING: Removing unreachable block (ram,0x0010f5a6) */
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<unsigned int, GLES3::Utilities::ResourceAllocation, HashMapHasherDefault,
   HashMapComparatorDefault<unsigned int>, DefaultTypedAllocator<HashMapElement<unsigned int,
   GLES3::Utilities::ResourceAllocation> > >::operator[](unsigned int const&) */

undefined1  [16] __thiscall
HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
::operator[](HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
             *this,uint *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
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
  uint uVar37;
  uint uVar38;
  uint uVar39;
  ulong uVar40;
  undefined8 uVar41;
  void *__s_00;
  undefined1 (*pauVar42) [16];
  ulong uVar43;
  int iVar44;
  ulong uVar45;
  long lVar46;
  long lVar47;
  ulong uVar48;
  undefined8 uVar49;
  uint uVar50;
  ulong uVar51;
  long lVar52;
  uint uVar53;
  uint uVar54;
  undefined1 (*pauVar55) [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  long lStack_90;
  void *local_70;
  
  local_70 = *(void **)(this + 8);
  uVar40 = (ulong)*(uint *)(this + 0x28);
  uVar38 = *param_1;
  uVar39 = *(uint *)(hash_table_size_primes + uVar40 * 4);
  uVar51 = CONCAT44(0,uVar39);
  if (local_70 == (void *)0x0) {
    uVar40 = uVar51 * 4;
    uVar48 = uVar51 * 8;
    uVar41 = Memory::alloc_static(uVar40,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    lStack_90 = 0x10fd7b;
    local_70 = (void *)Memory::alloc_static(uVar48,false);
    *(void **)(this + 8) = local_70;
    if (uVar39 == 0) {
      iVar44 = *(int *)(this + 0x2c);
      uVar38 = *param_1;
      if (local_70 == (void *)0x0) goto LAB_0010f8e3;
    }
    else {
      pvVar3 = *(void **)(this + 0x10);
      if ((pvVar3 < (void *)((long)local_70 + uVar48)) &&
         (local_70 < (void *)((long)pvVar3 + uVar40))) {
        uVar40 = 0;
        do {
          *(undefined4 *)((long)pvVar3 + uVar40 * 4) = 0;
          *(undefined8 *)((long)local_70 + uVar40 * 8) = 0;
          uVar40 = uVar40 + 1;
        } while (uVar51 != uVar40);
        iVar44 = *(int *)(this + 0x2c);
        uVar38 = *param_1;
      }
      else {
        memset(pvVar3,0,uVar40);
        lStack_90 = 0x10fdc4;
        memset(local_70,0,uVar48);
        iVar44 = *(int *)(this + 0x2c);
        uVar38 = *param_1;
      }
    }
    if (iVar44 != 0) {
      uVar40 = (ulong)*(uint *)(this + 0x28);
      lVar52 = *(long *)(this + 0x10);
      goto LAB_0010fc63;
    }
  }
  else {
    iVar44 = *(int *)(this + 0x2c);
    if (iVar44 != 0) {
      uVar48 = *(ulong *)(hash_table_size_primes_inv + uVar40 * 8);
      uVar37 = (uVar38 >> 0x10 ^ uVar38) * -0x7a143595;
      uVar37 = (uVar37 ^ uVar37 >> 0xd) * -0x3d4d51cb;
      uVar53 = uVar37 ^ uVar37 >> 0x10;
      if (uVar37 == uVar37 >> 0x10) {
        uVar53 = 1;
        uVar45 = uVar48;
      }
      else {
        uVar45 = uVar53 * uVar48;
      }
      lVar52 = *(long *)(this + 0x10);
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar51;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar45;
      lVar46 = SUB168(auVar4 * auVar20,8);
      uVar37 = *(uint *)(lVar52 + lVar46 * 4);
      uVar54 = SUB164(auVar4 * auVar20,8);
      if (uVar37 != 0) {
        uVar50 = 0;
        lVar47 = lVar46;
        do {
          if ((uVar53 == uVar37) &&
             (uVar38 == *(uint *)(*(long *)((long)local_70 + lVar46 * 8) + 0x10))) {
            auVar56._0_8_ = *(long *)((long)local_70 + (ulong)uVar54 * 8) + 0x14;
            auVar56._8_8_ = lVar47;
            return auVar56;
          }
          uVar50 = uVar50 + 1;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = (uVar54 + 1) * uVar48;
          auVar21._8_8_ = 0;
          auVar21._0_8_ = uVar51;
          lVar46 = SUB168(auVar5 * auVar21,8);
          uVar37 = *(uint *)(lVar52 + lVar46 * 4);
          uVar54 = SUB164(auVar5 * auVar21,8);
        } while ((uVar37 != 0) &&
                (auVar6._8_8_ = 0, auVar6._0_8_ = uVar37 * uVar48, auVar22._8_8_ = 0,
                auVar22._0_8_ = uVar51, auVar7._8_8_ = 0,
                auVar7._0_8_ = ((uVar54 + uVar39) - SUB164(auVar6 * auVar22,8)) * uVar48,
                auVar23._8_8_ = 0, auVar23._0_8_ = uVar51, lVar47 = SUB168(auVar7 * auVar23,8),
                uVar50 <= SUB164(auVar7 * auVar23,8)));
      }
LAB_0010fc63:
      uVar45 = CONCAT44(0,*(uint *)(hash_table_size_primes + uVar40 * 4));
      uVar48 = *(ulong *)(hash_table_size_primes_inv + uVar40 * 8);
      uVar39 = (uVar38 >> 0x10 ^ uVar38) * -0x7a143595;
      uVar39 = (uVar39 ^ uVar39 >> 0xd) * -0x3d4d51cb;
      uVar37 = uVar39 ^ uVar39 >> 0x10;
      if (uVar39 == uVar39 >> 0x10) {
        uVar37 = 1;
        uVar43 = uVar48;
      }
      else {
        uVar43 = uVar37 * uVar48;
      }
      auVar16._8_8_ = 0;
      auVar16._0_8_ = uVar45;
      auVar32._8_8_ = 0;
      auVar32._0_8_ = uVar43;
      lVar46 = SUB168(auVar16 * auVar32,8);
      uVar39 = *(uint *)(lVar52 + lVar46 * 4);
      uVar53 = SUB164(auVar16 * auVar32,8);
      if (uVar39 != 0) {
        uVar54 = 0;
        lVar47 = lVar46;
        do {
          if ((uVar37 == uVar39) &&
             (*(uint *)(*(long *)((long)local_70 + lVar46 * 8) + 0x10) == uVar38)) {
            pauVar42 = *(undefined1 (**) [16])((long)local_70 + (ulong)uVar53 * 8);
            *(undefined4 *)(pauVar42[1] + 4) = 0;
            lStack_90 = lVar47;
            goto LAB_0010fc44;
          }
          uVar54 = uVar54 + 1;
          auVar17._8_8_ = 0;
          auVar17._0_8_ = (uVar53 + 1) * uVar48;
          auVar33._8_8_ = 0;
          auVar33._0_8_ = uVar45;
          lVar46 = SUB168(auVar17 * auVar33,8);
          uVar39 = *(uint *)(lVar52 + lVar46 * 4);
          uVar53 = SUB164(auVar17 * auVar33,8);
        } while ((uVar39 != 0) &&
                (auVar18._8_8_ = 0, auVar18._0_8_ = uVar39 * uVar48, auVar34._8_8_ = 0,
                auVar34._0_8_ = uVar45, auVar19._8_8_ = 0,
                auVar19._0_8_ =
                     ((*(uint *)(hash_table_size_primes + uVar40 * 4) + uVar53) -
                     SUB164(auVar18 * auVar34,8)) * uVar48, auVar35._8_8_ = 0,
                auVar35._0_8_ = uVar45, lVar47 = SUB168(auVar19 * auVar35,8),
                uVar54 <= SUB164(auVar19 * auVar35,8)));
      }
    }
  }
LAB_0010f8e3:
  if ((float)uVar51 * __LC170 < (float)(iVar44 + 1)) {
    uVar38 = *(uint *)(this + 0x28);
    if (uVar38 == 0x1c) {
      pauVar42 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_0010fc44;
    }
    uVar40 = (ulong)(uVar38 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar39 = *(uint *)(hash_table_size_primes + (ulong)uVar38 * 4);
    if (uVar38 + 1 < 2) {
      uVar40 = 2;
    }
    uVar38 = *(uint *)(hash_table_size_primes + uVar40 * 4);
    uVar48 = (ulong)uVar38;
    *(int *)(this + 0x28) = (int)uVar40;
    pvVar3 = *(void **)(this + 0x10);
    uVar40 = uVar48 * 4;
    uVar51 = uVar48 * 8;
    uVar41 = Memory::alloc_static(uVar40,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    __s_00 = (void *)Memory::alloc_static(uVar51,false);
    *(void **)(this + 8) = __s_00;
    if (uVar38 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar51)) && (__s_00 < (void *)((long)__s + uVar40))) {
        uVar40 = 0;
        do {
          *(undefined4 *)((long)__s + uVar40 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar40 * 8) = 0;
          uVar40 = uVar40 + 1;
        } while (uVar40 != uVar48);
      }
      else {
        memset(__s,0,uVar40);
        memset(__s_00,0,uVar51);
      }
    }
    if (uVar39 != 0) {
      uVar40 = 0;
      do {
        uVar38 = *(uint *)((long)pvVar3 + uVar40 * 4);
        if (uVar38 != 0) {
          lVar52 = *(long *)(this + 0x10);
          uVar54 = 0;
          uVar37 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar51 = CONCAT44(0,uVar37);
          lVar46 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar8._8_8_ = 0;
          auVar8._0_8_ = (ulong)uVar38 * lVar46;
          auVar24._8_8_ = 0;
          auVar24._0_8_ = uVar51;
          lVar47 = SUB168(auVar8 * auVar24,8);
          puVar1 = (uint *)(lVar52 + lVar47 * 4);
          iVar44 = SUB164(auVar8 * auVar24,8);
          uVar53 = *puVar1;
          uVar41 = *(undefined8 *)((long)local_70 + uVar40 * 8);
          while (uVar53 != 0) {
            auVar9._8_8_ = 0;
            auVar9._0_8_ = (ulong)uVar53 * lVar46;
            auVar25._8_8_ = 0;
            auVar25._0_8_ = uVar51;
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)((uVar37 + iVar44) - SUB164(auVar9 * auVar25,8)) * lVar46;
            auVar26._8_8_ = 0;
            auVar26._0_8_ = uVar51;
            uVar50 = SUB164(auVar10 * auVar26,8);
            uVar49 = uVar41;
            if (uVar50 < uVar54) {
              *puVar1 = uVar38;
              puVar2 = (undefined8 *)((long)__s_00 + lVar47 * 8);
              uVar49 = *puVar2;
              *puVar2 = uVar41;
              uVar38 = uVar53;
              uVar54 = uVar50;
            }
            uVar54 = uVar54 + 1;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = (ulong)(iVar44 + 1) * lVar46;
            auVar27._8_8_ = 0;
            auVar27._0_8_ = uVar51;
            lVar47 = SUB168(auVar11 * auVar27,8);
            puVar1 = (uint *)(lVar52 + lVar47 * 4);
            iVar44 = SUB164(auVar11 * auVar27,8);
            uVar41 = uVar49;
            uVar53 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar47 * 8) = uVar41;
          *puVar1 = uVar38;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar40 = uVar40 + 1;
      } while (uVar39 != uVar40);
      Memory::free_static(local_70,false);
      Memory::free_static(pvVar3,false);
    }
  }
  uVar38 = *param_1;
  pauVar42 = (undefined1 (*) [16])operator_new(0x18,"");
  *(uint *)pauVar42[1] = uVar38;
  *(undefined4 *)(pauVar42[1] + 4) = 0;
  *pauVar42 = (undefined1  [16])0x0;
  puVar2 = *(undefined8 **)(this + 0x20);
  if (puVar2 == (undefined8 *)0x0) {
    *(undefined1 (**) [16])(this + 0x18) = pauVar42;
  }
  else {
    *puVar2 = pauVar42;
    *(undefined8 **)(*pauVar42 + 8) = puVar2;
  }
  *(undefined1 (**) [16])(this + 0x20) = pauVar42;
  uVar38 = (*param_1 >> 0x10 ^ *param_1) * -0x7a143595;
  uVar39 = (uVar38 ^ uVar38 >> 0xd) * -0x3d4d51cb;
  uVar38 = uVar39 ^ uVar39 >> 0x10;
  if (uVar39 == uVar39 >> 0x10) {
    uVar40 = 1;
    uVar38 = 1;
  }
  else {
    uVar40 = (ulong)uVar38;
  }
  uVar53 = 0;
  lVar52 = *(long *)(this + 0x10);
  lVar46 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar39 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar51 = CONCAT44(0,uVar39);
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar40 * lVar46;
  auVar28._8_8_ = 0;
  auVar28._0_8_ = uVar51;
  lStack_90 = SUB168(auVar12 * auVar28,8);
  lVar47 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar52 + lStack_90 * 4);
  iVar44 = SUB164(auVar12 * auVar28,8);
  uVar37 = *puVar1;
  pauVar36 = pauVar42;
  while (uVar37 != 0) {
    auVar13._8_8_ = 0;
    auVar13._0_8_ = (ulong)uVar37 * lVar46;
    auVar29._8_8_ = 0;
    auVar29._0_8_ = uVar51;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)((uVar39 + iVar44) - SUB164(auVar13 * auVar29,8)) * lVar46;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar51;
    uVar54 = SUB164(auVar14 * auVar30,8);
    pauVar55 = pauVar36;
    if (uVar54 < uVar53) {
      *puVar1 = uVar38;
      puVar2 = (undefined8 *)(lVar47 + lStack_90 * 8);
      pauVar55 = (undefined1 (*) [16])*puVar2;
      *puVar2 = pauVar36;
      uVar38 = uVar37;
      uVar53 = uVar54;
    }
    uVar53 = uVar53 + 1;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)(iVar44 + 1) * lVar46;
    auVar31._8_8_ = 0;
    auVar31._0_8_ = uVar51;
    lStack_90 = SUB168(auVar15 * auVar31,8);
    puVar1 = (uint *)(lVar52 + lStack_90 * 4);
    iVar44 = SUB164(auVar15 * auVar31,8);
    pauVar36 = pauVar55;
    uVar37 = *puVar1;
  }
  *(undefined1 (**) [16])(lVar47 + lStack_90 * 8) = pauVar36;
  *puVar1 = uVar38;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_0010fc44:
  auVar57._8_8_ = lStack_90;
  auVar57._0_8_ = pauVar42[1] + 4;
  return auVar57;
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
    if (lVar34 != 0) goto LAB_0010ff9f;
  }
  else {
    uVar44 = *(uint *)((long)in_RSI + 0x24);
    local_70 = *in_RDX;
LAB_0010ff9f:
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
            if (*(long *)(lVar34 + uStack_98 * 8) == local_70) goto LAB_00110451;
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
  if ((float)uVar31 * __LC170 < (float)(uVar44 + 1)) {
    if (uVar32 == 0x1c) {
      uStack_98 = 0;
      _err_print_error("_insert","./core/templates/hash_set.h",0xbf,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1"
                       ,"Hash table maximum capacity reached, aborting insertion.",0);
      uVar44 = *(uint *)((long)in_RSI + 0x24);
      uVar37 = 0xffffffff;
      lVar34 = *in_RSI;
      goto LAB_00110451;
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
LAB_00110451:
  *(uint *)(param_1 + 0xc) = uVar37;
  *(long *)param_1 = lVar34;
  *(uint *)(param_1 + 8) = uVar44;
  auVar45._8_8_ = uStack_98;
  auVar45._0_8_ = param_1;
  return auVar45;
}



/* WARNING: Removing unreachable block (ram,0x001106d0) */
/* WARNING: Removing unreachable block (ram,0x00110800) */
/* WARNING: Removing unreachable block (ram,0x00110979) */
/* WARNING: Removing unreachable block (ram,0x0011080c) */
/* WARNING: Removing unreachable block (ram,0x00110816) */
/* WARNING: Removing unreachable block (ram,0x0011095b) */
/* WARNING: Removing unreachable block (ram,0x00110822) */
/* WARNING: Removing unreachable block (ram,0x0011082c) */
/* WARNING: Removing unreachable block (ram,0x0011093d) */
/* WARNING: Removing unreachable block (ram,0x00110838) */
/* WARNING: Removing unreachable block (ram,0x00110842) */
/* WARNING: Removing unreachable block (ram,0x0011091f) */
/* WARNING: Removing unreachable block (ram,0x0011084e) */
/* WARNING: Removing unreachable block (ram,0x00110858) */
/* WARNING: Removing unreachable block (ram,0x00110901) */
/* WARNING: Removing unreachable block (ram,0x00110864) */
/* WARNING: Removing unreachable block (ram,0x0011086e) */
/* WARNING: Removing unreachable block (ram,0x001108e3) */
/* WARNING: Removing unreachable block (ram,0x00110876) */
/* WARNING: Removing unreachable block (ram,0x00110880) */
/* WARNING: Removing unreachable block (ram,0x001108c8) */
/* WARNING: Removing unreachable block (ram,0x00110888) */
/* WARNING: Removing unreachable block (ram,0x0011089e) */
/* WARNING: Removing unreachable block (ram,0x001108aa) */
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



/* RID_Alloc<GLES3::Light, true>::~RID_Alloc() */

void __thiscall RID_Alloc<GLES3::Light,true>::~RID_Alloc(RID_Alloc<GLES3::Light,true> *this)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  char *pcVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long in_FS_OFFSET;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR__RID_Alloc_00115ef8;
  uVar3 = *(uint *)(this + 0x20);
  if (uVar3 == 0) {
    uVar5 = (ulong)*(uint *)(this + 0x1c);
    uVar8 = (ulong)*(uint *)(this + 0x18);
    puVar9 = *(undefined8 **)(this + 8);
LAB_00110b0a:
    if ((uint)uVar5 < (uint)uVar8) goto LAB_00110b4b;
    lVar6 = 0;
    while( true ) {
      Memory::free_static((void *)puVar9[lVar6],false);
      lVar2 = lVar6 * 8;
      lVar6 = lVar6 + 1;
      Memory::free_static(*(void **)(*(long *)(this + 0x10) + lVar2),false);
      if ((uint)(uVar5 / uVar8) <= (uint)lVar6) break;
      puVar9 = *(undefined8 **)(this + 8);
    }
  }
  else {
    local_50 = 0;
    local_40 = 0x3b;
    local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
    String::parse_latin1((StrRange *)&local_50);
    vformat<unsigned_int,char_const*>
              ((String_conflict *)&local_48,(uint)(StrRange *)&local_50,(char *)(ulong)uVar3);
    print_error((String_conflict *)&local_48);
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
    lVar6 = local_50;
    if (local_50 != 0) {
      LOCK();
      plVar1 = (long *)(local_50 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
    uVar8 = (ulong)*(uint *)(this + 0x18);
    puVar9 = *(undefined8 **)(this + 8);
    if (*(int *)(this + 0x1c) != 0) {
      uVar7 = 0;
      do {
        lVar6 = (uVar7 % uVar8) * 0xe8 + puVar9[uVar7 / uVar8];
        if (-1 < *(int *)(lVar6 + 0xe0)) {
          Dependency::~Dependency((Dependency *)(lVar6 + 0xb0));
          uVar8 = (ulong)*(uint *)(this + 0x18);
          puVar9 = *(undefined8 **)(this + 8);
        }
        uVar5 = (ulong)*(uint *)(this + 0x1c);
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar5);
      goto LAB_00110b0a;
    }
    if (*(uint *)(this + 0x18) != 0) goto LAB_00110b4b;
    Memory::free_static((void *)*puVar9,false);
    Memory::free_static((void *)**(undefined8 **)(this + 0x10),false);
  }
  puVar9 = *(undefined8 **)(this + 8);
LAB_00110b4b:
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



/* RID_Alloc<GLES3::LightInstance, false>::~RID_Alloc() */

void __thiscall
RID_Alloc<GLES3::LightInstance,false>::~RID_Alloc(RID_Alloc<GLES3::LightInstance,false> *this)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  void *pvVar4;
  char *pcVar5;
  ulong uVar6;
  Projection *this_00;
  long lVar7;
  Projection *pPVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long in_FS_OFFSET;
  bool bVar12;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  uVar3 = *(uint *)(this + 0x20);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR__RID_Alloc_00115f18;
  if (uVar3 == 0) {
    uVar6 = (ulong)*(uint *)(this + 0x1c);
    uVar9 = (ulong)*(uint *)(this + 0x18);
    puVar10 = *(undefined8 **)(this + 8);
LAB_00110dea:
    if ((uint)uVar6 < (uint)uVar9) goto LAB_00110e2d;
    lVar7 = 0;
    while( true ) {
      Memory::free_static((void *)puVar10[lVar7],false);
      lVar2 = lVar7 * 8;
      lVar7 = lVar7 + 1;
      Memory::free_static(*(void **)(*(long *)(this + 0x10) + lVar2),false);
      if ((uint)(uVar6 / uVar9) <= (uint)lVar7) break;
      puVar10 = *(undefined8 **)(this + 8);
    }
  }
  else {
    local_50 = 0;
    local_40 = 0x3b;
    local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
    String::parse_latin1((StrRange *)&local_50);
    vformat<unsigned_int,char_const*>
              ((String_conflict *)&local_48,(uint)(StrRange *)&local_50,(char *)(ulong)uVar3);
    print_error((String_conflict *)&local_48);
    pcVar5 = local_48;
    lVar7 = local_50;
    if (local_48 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = (char *)0x0;
        Memory::free_static(pcVar5 + -0x10,false);
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
    uVar9 = (ulong)*(uint *)(this + 0x18);
    puVar10 = *(undefined8 **)(this + 8);
    if (*(int *)(this + 0x1c) != 0) {
      uVar11 = 0;
      do {
        pPVar8 = (Projection *)((uVar11 % uVar9) * 0x478 + puVar10[uVar11 / uVar9]);
        if (-1 < *(int *)(pPVar8 + 0x470)) {
          pvVar4 = *(void **)(pPVar8 + 0x440);
          if (pvVar4 != (void *)0x0) {
            if (*(int *)(pPVar8 + 0x464) != 0) {
              if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(pPVar8 + 0x460) * 4) != 0) {
                memset(*(void **)(pPVar8 + 0x458),0,
                       (ulong)*(uint *)(hash_table_size_primes +
                                       (ulong)*(uint *)(pPVar8 + 0x460) * 4) << 2);
              }
              *(undefined4 *)(pPVar8 + 0x464) = 0;
            }
            Memory::free_static(pvVar4,false);
            Memory::free_static(*(void **)(pPVar8 + 0x450),false);
            Memory::free_static(*(void **)(pPVar8 + 0x448),false);
            Memory::free_static(*(void **)(pPVar8 + 0x458),false);
          }
          this_00 = pPVar8 + 0x30c;
          do {
            Projection::~Projection(this_00);
            bVar12 = this_00 != pPVar8;
            this_00 = this_00 + -0x9c;
          } while (bVar12);
          uVar9 = (ulong)*(uint *)(this + 0x18);
          puVar10 = *(undefined8 **)(this + 8);
        }
        uVar6 = (ulong)*(uint *)(this + 0x1c);
        uVar11 = uVar11 + 1;
      } while (uVar11 < uVar6);
      goto LAB_00110dea;
    }
    if (*(uint *)(this + 0x18) != 0) goto LAB_00110e2d;
    Memory::free_static((void *)*puVar10,false);
    Memory::free_static((void *)**(undefined8 **)(this + 0x10),false);
  }
  puVar10 = *(undefined8 **)(this + 8);
LAB_00110e2d:
  if (puVar10 == (undefined8 *)0x0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    Memory::free_static(puVar10,false);
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      Memory::free_static(*(void **)(this + 0x10),false);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RID_Alloc<GLES3::LightInstance, false>::~RID_Alloc() */

void __thiscall
RID_Alloc<GLES3::LightInstance,false>::~RID_Alloc(RID_Alloc<GLES3::LightInstance,false> *this)

{
  ~RID_Alloc(this);
  operator_delete(this,0x58);
  return;
}



/* RID_Alloc<GLES3::ReflectionProbe, true>::~RID_Alloc() */

void __thiscall
RID_Alloc<GLES3::ReflectionProbe,true>::~RID_Alloc(RID_Alloc<GLES3::ReflectionProbe,true> *this)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  long in_FS_OFFSET;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR__RID_Alloc_00115f38;
  uVar8 = *(uint *)(this + 0x20);
  if (uVar8 == 0) {
    uVar4 = (ulong)*(uint *)(this + 0x1c);
    uVar8 = *(uint *)(this + 0x18);
    puVar5 = *(undefined8 **)(this + 8);
LAB_0011105b:
    if ((uint)uVar4 < uVar8) goto LAB_0011109b;
    lVar7 = 0;
    while( true ) {
      Memory::free_static((void *)puVar5[lVar7],false);
      lVar2 = lVar7 * 8;
      lVar7 = lVar7 + 1;
      Memory::free_static(*(void **)(*(long *)(this + 0x10) + lVar2),false);
      if ((uint)(uVar4 / uVar8) <= (uint)lVar7) break;
      puVar5 = *(undefined8 **)(this + 8);
    }
  }
  else {
    local_50 = 0;
    local_40 = 0x3b;
    local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
    String::parse_latin1((StrRange *)&local_50);
    vformat<unsigned_int,char_const*>
              ((String_conflict *)&local_48,(uint)(StrRange *)&local_50,(char *)(ulong)uVar8);
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
    lVar7 = local_50;
    if (local_50 != 0) {
      LOCK();
      plVar1 = (long *)(local_50 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar7 + -0x10),false);
      }
    }
    uVar8 = *(uint *)(this + 0x18);
    puVar5 = *(undefined8 **)(this + 8);
    if (*(int *)(this + 0x1c) != 0) {
      uVar6 = 0;
      do {
        lVar7 = (uVar6 % (ulong)uVar8) * 0x90 + puVar5[uVar6 / uVar8];
        if (-1 < *(int *)(lVar7 + 0x88)) {
          Dependency::~Dependency((Dependency *)(lVar7 + 0x58));
          uVar8 = *(uint *)(this + 0x18);
          puVar5 = *(undefined8 **)(this + 8);
        }
        uVar4 = (ulong)*(uint *)(this + 0x1c);
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar4);
      goto LAB_0011105b;
    }
    if (uVar8 != 0) goto LAB_0011109b;
    Memory::free_static((void *)*puVar5,false);
    Memory::free_static((void *)**(undefined8 **)(this + 0x10),false);
  }
  puVar5 = *(undefined8 **)(this + 8);
LAB_0011109b:
  if (puVar5 == (undefined8 *)0x0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    Memory::free_static(puVar5,false);
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      Memory::free_static(*(void **)(this + 0x10),false);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RID_Alloc<GLES3::ReflectionProbeInstance, false>::~RID_Alloc() */

void __thiscall
RID_Alloc<GLES3::ReflectionProbeInstance,false>::~RID_Alloc
          (RID_Alloc<GLES3::ReflectionProbeInstance,false> *this)

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
  *(undefined ***)this = &PTR__RID_Alloc_00115f78;
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



/* RID_Alloc<GLES3::Lightmap, true>::~RID_Alloc() */

void __thiscall RID_Alloc<GLES3::Lightmap,true>::~RID_Alloc(RID_Alloc<GLES3::Lightmap,true> *this)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  char *pcVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long in_FS_OFFSET;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR__RID_Alloc_00115f98;
  uVar2 = *(uint *)(this + 0x20);
  if (uVar2 == 0) {
    uVar5 = (ulong)*(uint *)(this + 0x1c);
    uVar7 = (ulong)*(uint *)(this + 0x18);
    puVar8 = *(undefined8 **)(this + 8);
LAB_00111502:
    if ((uint)uVar5 < (uint)uVar7) goto LAB_00111543;
    lVar6 = 0;
    while( true ) {
      Memory::free_static((void *)puVar8[lVar6],false);
      lVar3 = lVar6 * 8;
      lVar6 = lVar6 + 1;
      Memory::free_static(*(void **)(*(long *)(this + 0x10) + lVar3),false);
      if ((uint)(uVar5 / uVar7) <= (uint)lVar6) break;
      puVar8 = *(undefined8 **)(this + 8);
    }
  }
  else {
    local_50 = 0;
    local_40 = 0x3b;
    local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
    String::parse_latin1((StrRange *)&local_50);
    vformat<unsigned_int,char_const*>
              ((String_conflict *)&local_48,(uint)(StrRange *)&local_50,(char *)(ulong)uVar2);
    print_error((String_conflict *)&local_48);
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
    lVar6 = local_50;
    if (local_50 != 0) {
      LOCK();
      plVar1 = (long *)(local_50 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
    uVar7 = (ulong)*(uint *)(this + 0x18);
    puVar8 = *(undefined8 **)(this + 8);
    if (*(int *)(this + 0x1c) != 0) {
      uVar9 = 0;
      do {
        lVar6 = (uVar9 % uVar7) * 0xb8 + puVar8[uVar9 / uVar7];
        if (-1 < *(int *)(lVar6 + 0xb0)) {
          Dependency::~Dependency((Dependency *)(lVar6 + 0x80));
          if (*(long *)(lVar6 + 0x78) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(lVar6 + 0x78) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar3 = *(long *)(lVar6 + 0x78);
              *(undefined8 *)(lVar6 + 0x78) = 0;
              Memory::free_static((void *)(lVar3 + -0x10),false);
            }
          }
          if (*(long *)(lVar6 + 0x68) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(lVar6 + 0x68) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar3 = *(long *)(lVar6 + 0x68);
              *(undefined8 *)(lVar6 + 0x68) = 0;
              Memory::free_static((void *)(lVar3 + -0x10),false);
            }
          }
          if (*(long *)(lVar6 + 0x58) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(lVar6 + 0x58) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar3 = *(long *)(lVar6 + 0x58);
              *(undefined8 *)(lVar6 + 0x58) = 0;
              Memory::free_static((void *)(lVar3 + -0x10),false);
            }
          }
          if (*(long *)(lVar6 + 0x48) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(lVar6 + 0x48) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar3 = *(long *)(lVar6 + 0x48);
              *(undefined8 *)(lVar6 + 0x48) = 0;
              Memory::free_static((void *)(lVar3 + -0x10),false);
            }
          }
          uVar7 = (ulong)*(uint *)(this + 0x18);
          puVar8 = *(undefined8 **)(this + 8);
        }
        uVar5 = (ulong)*(uint *)(this + 0x1c);
        uVar9 = uVar9 + 1;
      } while (uVar9 < uVar5);
      goto LAB_00111502;
    }
    if (*(uint *)(this + 0x18) != 0) goto LAB_00111543;
    Memory::free_static((void *)*puVar8,false);
    Memory::free_static((void *)**(undefined8 **)(this + 0x10),false);
  }
  puVar8 = *(undefined8 **)(this + 8);
LAB_00111543:
  if (puVar8 == (undefined8 *)0x0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    Memory::free_static(puVar8,false);
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      Memory::free_static(*(void **)(this + 0x10),false);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RID_Alloc<GLES3::Lightmap, true>::~RID_Alloc() */

void __thiscall RID_Alloc<GLES3::Lightmap,true>::~RID_Alloc(RID_Alloc<GLES3::Lightmap,true> *this)

{
  ~RID_Alloc(this);
  operator_delete(this,0x58);
  return;
}



/* RID_Alloc<GLES3::LightmapInstance, false>::~RID_Alloc() */

void __thiscall
RID_Alloc<GLES3::LightmapInstance,false>::~RID_Alloc(RID_Alloc<GLES3::LightmapInstance,false> *this)

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
  *(undefined ***)this = &PTR__RID_Alloc_00115fb8;
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



/* RID_Alloc<GLES3::LightStorage::ShadowAtlas, false>::~RID_Alloc() */

void __thiscall
RID_Alloc<GLES3::LightStorage::ShadowAtlas,false>::~RID_Alloc
          (RID_Alloc<GLES3::LightStorage::ShadowAtlas,false> *this)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  char *pcVar4;
  int *piVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  void *pvVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long in_FS_OFFSET;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  uVar2 = *(uint *)(this + 0x20);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR__RID_Alloc_00115fd8;
  if (uVar2 == 0) {
    uVar6 = (ulong)*(uint *)(this + 0x1c);
    uVar10 = (ulong)*(uint *)(this + 0x18);
    puVar12 = *(undefined8 **)(this + 8);
LAB_00111a32:
    if ((uint)uVar6 < (uint)uVar10) goto LAB_00111a75;
    lVar9 = 0;
    while( true ) {
      Memory::free_static((void *)puVar12[lVar9],false);
      lVar7 = lVar9 * 8;
      lVar9 = lVar9 + 1;
      Memory::free_static(*(void **)(*(long *)(this + 0x10) + lVar7),false);
      if ((uint)(uVar6 / uVar10) <= (uint)lVar9) break;
      puVar12 = *(undefined8 **)(this + 8);
    }
  }
  else {
    local_60 = 0;
    local_50 = 0x3b;
    local_58 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
    String::parse_latin1((StrRange *)&local_60);
    vformat<unsigned_int,char_const*>
              ((String_conflict *)&local_58,(uint)(StrRange *)&local_60,(char *)(ulong)uVar2);
    print_error((String_conflict *)&local_58);
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
    lVar9 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar9 + -0x10),false);
      }
    }
    uVar10 = (ulong)*(uint *)(this + 0x18);
    puVar12 = *(undefined8 **)(this + 8);
    if (*(int *)(this + 0x1c) != 0) {
      uVar13 = 0;
      do {
        lVar9 = (uVar13 % uVar10) * 0x140 + puVar12[uVar13 / uVar10];
        if (-1 < *(int *)(lVar9 + 0x138)) {
          pvVar11 = *(void **)(lVar9 + 0x110);
          if (pvVar11 != (void *)0x0) {
            if (*(int *)(lVar9 + 0x134) != 0) {
              uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar9 + 0x130) * 4);
              if (uVar2 == 0) {
                *(undefined4 *)(lVar9 + 0x134) = 0;
                *(undefined1 (*) [16])(lVar9 + 0x120) = (undefined1  [16])0x0;
              }
              else {
                lVar7 = 0;
                do {
                  piVar5 = (int *)(*(long *)(lVar9 + 0x118) + lVar7);
                  if (*piVar5 != 0) {
                    *piVar5 = 0;
                    Memory::free_static(*(void **)((long)pvVar11 + lVar7 * 2),false);
                    pvVar11 = *(void **)(lVar9 + 0x110);
                    *(undefined8 *)((long)pvVar11 + lVar7 * 2) = 0;
                  }
                  lVar7 = lVar7 + 4;
                } while ((ulong)uVar2 << 2 != lVar7);
                *(undefined4 *)(lVar9 + 0x134) = 0;
                *(undefined1 (*) [16])(lVar9 + 0x120) = (undefined1  [16])0x0;
                if (pvVar11 == (void *)0x0) goto LAB_0011198f;
              }
            }
            Memory::free_static(pvVar11,false);
            Memory::free_static(*(void **)(lVar9 + 0x118),false);
          }
LAB_0011198f:
          lVar7 = lVar9 + 0xe0;
          do {
            lVar8 = lVar7 + -0x38;
            if (*(void **)(lVar7 + -8) != (void *)0x0) {
              if (*(int *)(lVar7 + -0x10) != 0) {
                *(undefined4 *)(lVar7 + -0x10) = 0;
              }
              Memory::free_static(*(void **)(lVar7 + -8),false);
            }
            if (*(void **)(lVar7 + -0x18) != (void *)0x0) {
              if (*(int *)(lVar7 + -0x20) != 0) {
                *(undefined4 *)(lVar7 + -0x20) = 0;
              }
              Memory::free_static(*(void **)(lVar7 + -0x18),false);
            }
            if (*(long *)(lVar7 + -0x28) != 0) {
              LOCK();
              plVar1 = (long *)(*(long *)(lVar7 + -0x28) + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lVar3 = *(long *)(lVar7 + -0x28);
                *(undefined8 *)(lVar7 + -0x28) = 0;
                Memory::free_static((void *)(lVar3 + -0x10),false);
              }
            }
            lVar7 = lVar8;
          } while (lVar9 != lVar8);
          uVar10 = (ulong)*(uint *)(this + 0x18);
          puVar12 = *(undefined8 **)(this + 8);
        }
        uVar6 = (ulong)*(uint *)(this + 0x1c);
        uVar13 = uVar13 + 1;
      } while (uVar13 < uVar6);
      goto LAB_00111a32;
    }
    if (*(uint *)(this + 0x18) != 0) goto LAB_00111a75;
    Memory::free_static((void *)*puVar12,false);
    Memory::free_static((void *)**(undefined8 **)(this + 0x10),false);
  }
  puVar12 = *(undefined8 **)(this + 8);
LAB_00111a75:
  if (puVar12 == (undefined8 *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    Memory::free_static(puVar12,false);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Memory::free_static(*(void **)(this + 0x10),false);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RID_Alloc<GLES3::LightStorage::ShadowAtlas, false>::~RID_Alloc() */

void __thiscall
RID_Alloc<GLES3::LightStorage::ShadowAtlas,false>::~RID_Alloc
          (RID_Alloc<GLES3::LightStorage::ShadowAtlas,false> *this)

{
  ~RID_Alloc(this);
  operator_delete(this,0x58);
  return;
}



/* RID_Alloc<GLES3::ReflectionAtlas, false>::~RID_Alloc() */

void __thiscall
RID_Alloc<GLES3::ReflectionAtlas,false>::~RID_Alloc(RID_Alloc<GLES3::ReflectionAtlas,false> *this)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  Object *pOVar4;
  char *pcVar5;
  char cVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long in_FS_OFFSET;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  uVar2 = *(uint *)(this + 0x20);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR__RID_Alloc_00115f58;
  if (uVar2 == 0) {
    uVar7 = (ulong)*(uint *)(this + 0x1c);
    uVar9 = (ulong)*(uint *)(this + 0x18);
    puVar10 = *(undefined8 **)(this + 8);
LAB_00111d2a:
    if ((uint)uVar7 < (uint)uVar9) goto LAB_00111d6b;
    lVar8 = 0;
    while( true ) {
      Memory::free_static((void *)puVar10[lVar8],false);
      lVar3 = lVar8 * 8;
      lVar8 = lVar8 + 1;
      Memory::free_static(*(void **)(*(long *)(this + 0x10) + lVar3),false);
      if ((uint)(uVar7 / uVar9) <= (uint)lVar8) break;
      puVar10 = *(undefined8 **)(this + 8);
    }
  }
  else {
    local_50 = 0;
    local_40 = 0x3b;
    local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
    String::parse_latin1((StrRange *)&local_50);
    vformat<unsigned_int,char_const*>
              ((String_conflict *)&local_48,(uint)(StrRange *)&local_50,(char *)(ulong)uVar2);
    print_error((String_conflict *)&local_48);
    pcVar5 = local_48;
    if (local_48 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = (char *)0x0;
        Memory::free_static(pcVar5 + -0x10,false);
      }
    }
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
    uVar9 = (ulong)*(uint *)(this + 0x18);
    puVar10 = *(undefined8 **)(this + 8);
    if (*(int *)(this + 0x1c) != 0) {
      uVar11 = 0;
      do {
        lVar8 = (uVar11 % uVar9) * 0x50 + puVar10[uVar11 / uVar9];
        if (-1 < *(int *)(lVar8 + 0x48)) {
          if ((*(long *)(lVar8 + 0x40) != 0) && (cVar6 = RefCounted::unreference(), cVar6 != '\0'))
          {
            pOVar4 = *(Object **)(lVar8 + 0x40);
            cVar6 = predelete_handler(pOVar4);
            if (cVar6 != '\0') {
              (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
              Memory::free_static(pOVar4,false);
            }
          }
          if (*(long *)(lVar8 + 0x38) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(lVar8 + 0x38) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar3 = *(long *)(lVar8 + 0x38);
              *(undefined8 *)(lVar8 + 0x38) = 0;
              Memory::free_static((void *)(lVar3 + -0x10),false);
            }
          }
          uVar9 = (ulong)*(uint *)(this + 0x18);
          puVar10 = *(undefined8 **)(this + 8);
        }
        uVar7 = (ulong)*(uint *)(this + 0x1c);
        uVar11 = uVar11 + 1;
      } while (uVar11 < uVar7);
      goto LAB_00111d2a;
    }
    if (*(uint *)(this + 0x18) != 0) goto LAB_00111d6b;
    Memory::free_static((void *)*puVar10,false);
    Memory::free_static((void *)**(undefined8 **)(this + 0x10),false);
  }
  puVar10 = *(undefined8 **)(this + 8);
LAB_00111d6b:
  if (puVar10 == (undefined8 *)0x0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    Memory::free_static(puVar10,false);
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      Memory::free_static(*(void **)(this + 0x10),false);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RID_Alloc<GLES3::ReflectionAtlas, false>::~RID_Alloc() */

void __thiscall
RID_Alloc<GLES3::ReflectionAtlas,false>::~RID_Alloc(RID_Alloc<GLES3::ReflectionAtlas,false> *this)

{
  ~RID_Alloc(this);
  operator_delete(this,0x58);
  return;
}



/* RID_Alloc<GLES3::LightmapInstance, false>::~RID_Alloc() */

void __thiscall
RID_Alloc<GLES3::LightmapInstance,false>::~RID_Alloc(RID_Alloc<GLES3::LightmapInstance,false> *this)

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
  *(undefined ***)this = &PTR__RID_Alloc_00115fb8;
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



/* RID_Alloc<GLES3::ReflectionProbeInstance, false>::~RID_Alloc() */

void __thiscall
RID_Alloc<GLES3::ReflectionProbeInstance,false>::~RID_Alloc
          (RID_Alloc<GLES3::ReflectionProbeInstance,false> *this)

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
  *(undefined ***)this = &PTR__RID_Alloc_00115f78;
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



/* RID_Alloc<GLES3::ReflectionProbe, true>::~RID_Alloc() */

void __thiscall
RID_Alloc<GLES3::ReflectionProbe,true>::~RID_Alloc(RID_Alloc<GLES3::ReflectionProbe,true> *this)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  long in_FS_OFFSET;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR__RID_Alloc_00115f38;
  uVar8 = *(uint *)(this + 0x20);
  if (uVar8 == 0) {
    uVar4 = (ulong)*(uint *)(this + 0x1c);
    uVar8 = *(uint *)(this + 0x18);
    puVar5 = *(undefined8 **)(this + 8);
LAB_001122cb:
    if ((uint)uVar4 < uVar8) goto LAB_0011230b;
    lVar7 = 0;
    while( true ) {
      Memory::free_static((void *)puVar5[lVar7],false);
      lVar2 = lVar7 * 8;
      lVar7 = lVar7 + 1;
      Memory::free_static(*(void **)(*(long *)(this + 0x10) + lVar2),false);
      if ((uint)(uVar4 / uVar8) <= (uint)lVar7) break;
      puVar5 = *(undefined8 **)(this + 8);
    }
  }
  else {
    local_50 = 0;
    local_40 = 0x3b;
    local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
    String::parse_latin1((StrRange *)&local_50);
    vformat<unsigned_int,char_const*>
              ((String_conflict *)&local_48,(uint)(StrRange *)&local_50,(char *)(ulong)uVar8);
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
    lVar7 = local_50;
    if (local_50 != 0) {
      LOCK();
      plVar1 = (long *)(local_50 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar7 + -0x10),false);
      }
    }
    uVar8 = *(uint *)(this + 0x18);
    puVar5 = *(undefined8 **)(this + 8);
    if (*(int *)(this + 0x1c) != 0) {
      uVar6 = 0;
      do {
        lVar7 = (uVar6 % (ulong)uVar8) * 0x90 + puVar5[uVar6 / uVar8];
        if (-1 < *(int *)(lVar7 + 0x88)) {
          Dependency::~Dependency((Dependency *)(lVar7 + 0x58));
          uVar8 = *(uint *)(this + 0x18);
          puVar5 = *(undefined8 **)(this + 8);
        }
        uVar4 = (ulong)*(uint *)(this + 0x1c);
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar4);
      goto LAB_001122cb;
    }
    if (uVar8 != 0) goto LAB_0011230b;
    Memory::free_static((void *)*puVar5,false);
    Memory::free_static((void *)**(undefined8 **)(this + 0x10),false);
  }
  puVar5 = *(undefined8 **)(this + 8);
LAB_0011230b:
  if (puVar5 != (undefined8 *)0x0) {
    Memory::free_static(puVar5,false);
    Memory::free_static(*(void **)(this + 0x10),false);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    operator_delete(this,0x58);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RID_Alloc<GLES3::Light, true>::~RID_Alloc() */

void __thiscall RID_Alloc<GLES3::Light,true>::~RID_Alloc(RID_Alloc<GLES3::Light,true> *this)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  char *pcVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long in_FS_OFFSET;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR__RID_Alloc_00115ef8;
  uVar3 = *(uint *)(this + 0x20);
  if (uVar3 == 0) {
    uVar5 = (ulong)*(uint *)(this + 0x1c);
    uVar8 = (ulong)*(uint *)(this + 0x18);
    puVar9 = *(undefined8 **)(this + 8);
LAB_001124ea:
    if ((uint)uVar5 < (uint)uVar8) goto LAB_0011252b;
    lVar6 = 0;
    while( true ) {
      Memory::free_static((void *)puVar9[lVar6],false);
      lVar2 = lVar6 * 8;
      lVar6 = lVar6 + 1;
      Memory::free_static(*(void **)(*(long *)(this + 0x10) + lVar2),false);
      if ((uint)(uVar5 / uVar8) <= (uint)lVar6) break;
      puVar9 = *(undefined8 **)(this + 8);
    }
  }
  else {
    local_50 = 0;
    local_40 = 0x3b;
    local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
    String::parse_latin1((StrRange *)&local_50);
    vformat<unsigned_int,char_const*>
              ((String_conflict *)&local_48,(uint)(StrRange *)&local_50,(char *)(ulong)uVar3);
    print_error((String_conflict *)&local_48);
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
    lVar6 = local_50;
    if (local_50 != 0) {
      LOCK();
      plVar1 = (long *)(local_50 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
    uVar8 = (ulong)*(uint *)(this + 0x18);
    puVar9 = *(undefined8 **)(this + 8);
    if (*(int *)(this + 0x1c) != 0) {
      uVar7 = 0;
      do {
        lVar6 = (uVar7 % uVar8) * 0xe8 + puVar9[uVar7 / uVar8];
        if (-1 < *(int *)(lVar6 + 0xe0)) {
          Dependency::~Dependency((Dependency *)(lVar6 + 0xb0));
          uVar8 = (ulong)*(uint *)(this + 0x18);
          puVar9 = *(undefined8 **)(this + 8);
        }
        uVar5 = (ulong)*(uint *)(this + 0x1c);
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar5);
      goto LAB_001124ea;
    }
    if (*(uint *)(this + 0x18) != 0) goto LAB_0011252b;
    Memory::free_static((void *)*puVar9,false);
    Memory::free_static((void *)**(undefined8 **)(this + 0x10),false);
  }
  puVar9 = *(undefined8 **)(this + 8);
LAB_0011252b:
  if (puVar9 != (undefined8 *)0x0) {
    Memory::free_static(puVar9,false);
    Memory::free_static(*(void **)(this + 0x10),false);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    operator_delete(this,0x58);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RID_Alloc<GLES3::Light, true>::allocate_rid() */

ulong __thiscall RID_Alloc<GLES3::Light,true>::allocate_rid(RID_Alloc<GLES3::Light,true> *this)

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
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar6);
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
      goto LAB_00112806;
    }
    lVar3 = *(long *)(this + 8);
    uVar13 = (ulong)uVar7;
    uVar8 = Memory::alloc_static((ulong)*(uint *)(this + 0x18) * 0xe8,false);
    uVar7 = *(uint *)(this + 0x18);
    lVar9 = *(long *)(this + 0x10);
    *(undefined8 *)(lVar3 + uVar13 * 8) = uVar8;
    uVar8 = Memory::alloc_static((ulong)uVar7 << 2,false);
    uVar7 = *(uint *)(this + 0x18);
    *(undefined8 *)(uVar13 * 8 + lVar9) = uVar8;
    if (uVar7 != 0) {
      lVar3 = *(long *)(*(long *)(this + 0x10) + uVar13 * 8);
      lVar9 = 0;
      puVar12 = (undefined4 *)(*(long *)(*(long *)(this + 8) + uVar13 * 8) + 0xe0);
      do {
        *puVar12 = 0xffffffff;
        puVar12 = puVar12 + 0x3a;
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
  *(uint *)(((ulong)uVar7 % (ulong)uVar2) * 0xe8 +
            *(long *)(*(long *)(this + 8) + ((ulong)uVar7 / (ulong)uVar2) * 8) + 0xe0) =
       uVar11 | 0x80000000;
  *(int *)(this + 0x20) = *(int *)(this + 0x20) + 1;
  pthread_mutex_unlock(__mutex);
LAB_00112806:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar13;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RID_Alloc<GLES3::LightInstance, false>::make_rid(GLES3::LightInstance const&) */

ulong __thiscall
RID_Alloc<GLES3::LightInstance,false>::make_rid
          (RID_Alloc<GLES3::LightInstance,false> *this,LightInstance *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  long lVar22;
  long lVar23;
  undefined4 *puVar24;
  void *pvVar25;
  uint uVar26;
  char *pcVar27;
  ulong uVar28;
  ulong uVar29;
  
  uVar26 = *(uint *)(this + 0x20);
  if (uVar26 == *(uint *)(this + 0x1c)) {
    if (uVar26 == 0) {
      lVar15 = 0;
      uVar29 = 8;
    }
    else {
      uVar29 = (ulong)((int)((ulong)uVar26 / (ulong)*(uint *)(this + 0x18)) + 1) << 3;
      lVar15 = ((ulong)uVar26 / (ulong)*(uint *)(this + 0x18)) * 8;
    }
    lVar16 = Memory::realloc_static(*(void **)(this + 8),uVar29,false);
    *(long *)(this + 8) = lVar16;
    uVar14 = Memory::alloc_static((ulong)*(uint *)(this + 0x18) * 0x478,false);
    pvVar25 = *(void **)(this + 0x10);
    *(undefined8 *)(lVar16 + lVar15) = uVar14;
    lVar17 = Memory::realloc_static(pvVar25,uVar29,false);
    *(long *)(this + 0x10) = lVar17;
    uVar14 = Memory::alloc_static((ulong)*(uint *)(this + 0x18) << 2,false);
    uVar19 = *(uint *)(this + 0x18);
    lVar16 = *(long *)(this + 0x10);
    *(undefined8 *)(lVar17 + lVar15) = uVar14;
    if (uVar19 != 0) {
      lVar17 = *(long *)(lVar16 + lVar15);
      lVar18 = 0;
      puVar24 = (undefined4 *)(*(long *)(*(long *)(this + 8) + lVar15) + 0x470);
      do {
        *puVar24 = 0xffffffff;
        puVar24 = puVar24 + 0x11e;
        *(int *)(lVar17 + lVar18 * 4) = *(int *)(this + 0x20) + (int)lVar18;
        uVar19 = *(uint *)(this + 0x18);
        lVar18 = lVar18 + 1;
      } while ((uint)lVar18 < uVar19);
    }
    *(uint *)(this + 0x1c) = *(int *)(this + 0x1c) + uVar19;
    uVar26 = *(uint *)(this + 0x20);
  }
  else {
    lVar16 = *(long *)(this + 0x10);
    uVar19 = *(uint *)(this + 0x18);
  }
  uVar26 = *(uint *)(*(long *)(lVar16 + ((ulong)uVar26 / (ulong)uVar19) * 8) +
                    ((ulong)uVar26 % (ulong)uVar19) * 4);
  uVar29 = (ulong)uVar26;
  LOCK();
  UNLOCK();
  uVar20 = (int)RID_AllocBase::base_id + 1;
  uVar21 = uVar20 & 0x7fffffff;
  if (uVar21 != 0x7fffffff) {
    lVar15 = *(long *)(this + 8);
    RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
    *(uint *)((uVar29 % (ulong)uVar19) * 0x478 + *(long *)(lVar15 + (uVar29 / uVar19) * 8) + 0x470)
         = uVar21 | 0x80000000;
    *(int *)(this + 0x20) = *(int *)(this + 0x20) + 1;
    uVar28 = CONCAT44(uVar20,uVar26) & 0x7fffffffffffffff;
    if ((uVar28 != 0) && ((uint)uVar28 < *(uint *)(this + 0x1c))) {
      pvVar25 = (void *)((uVar29 % (ulong)*(uint *)(this + 0x18)) * 0x478 +
                        *(long *)(lVar15 + (uVar29 / *(uint *)(this + 0x18)) * 8));
      if ((int)*(uint *)((long)pvVar25 + 0x470) < 0) {
        uVar26 = (uint)(uVar28 >> 0x20);
        if (uVar26 == (*(uint *)((long)pvVar25 + 0x470) & 0x7fffffff)) {
          *(uint *)((long)pvVar25 + 0x470) = uVar26;
          memmove(pvVar25,param_1,0x3a8);
          uVar2 = *(undefined8 *)(param_1 + 0x3ac);
          uVar3 = *(undefined8 *)(param_1 + 0x3b4);
          uVar4 = *(undefined8 *)(param_1 + 0x3d8);
          uVar5 = *(undefined8 *)(param_1 + 0x3e0);
          uVar6 = *(undefined8 *)(param_1 + 1000);
          uVar7 = *(undefined8 *)(param_1 + 0x3f0);
          *(undefined4 *)((long)pvVar25 + 0x3a8) = *(undefined4 *)(param_1 + 0x3a8);
          uVar14 = *(undefined8 *)(param_1 + 0x3bc);
          uVar8 = *(undefined8 *)(param_1 + 0x3f8);
          uVar9 = *(undefined8 *)(param_1 + 0x400);
          uVar10 = *(undefined8 *)(param_1 + 0x408);
          uVar11 = *(undefined8 *)(param_1 + 0x410);
          *(undefined8 *)((long)pvVar25 + 0x3ac) = uVar2;
          *(undefined8 *)((long)pvVar25 + 0x3b4) = uVar3;
          *(undefined8 *)((long)pvVar25 + 0x3bc) = uVar14;
          uVar14 = *(undefined8 *)(param_1 + 0x3c8);
          uVar2 = *(undefined8 *)(param_1 + 0x418);
          uVar3 = *(undefined8 *)(param_1 + 0x420);
          uVar12 = *(undefined8 *)(param_1 + 0x430);
          uVar13 = *(undefined8 *)(param_1 + 0x438);
          *(undefined8 *)((long)pvVar25 + 0x3d8) = uVar4;
          *(undefined8 *)((long)pvVar25 + 0x3e0) = uVar5;
          *(undefined8 *)((long)pvVar25 + 0x3c8) = uVar14;
          uVar14 = *(undefined8 *)(param_1 + 0x3d0);
          *(undefined8 *)((long)pvVar25 + 1000) = uVar6;
          *(undefined8 *)((long)pvVar25 + 0x3f0) = uVar7;
          *(undefined8 *)((long)pvVar25 + 0x3d0) = uVar14;
          uVar14 = *(undefined8 *)(param_1 + 0x428);
          *(undefined8 *)((long)pvVar25 + 0x460) = 0;
          *(undefined8 *)((long)pvVar25 + 0x428) = uVar14;
          *(undefined1 (*) [16])((long)pvVar25 + 0x440) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])((long)pvVar25 + 0x450) = (undefined1  [16])0x0;
          uVar29 = *(ulong *)(param_1 + 0x460);
          *(undefined8 *)((long)pvVar25 + 0x3f8) = uVar8;
          *(undefined8 *)((long)pvVar25 + 0x400) = uVar9;
          *(undefined8 *)((long)pvVar25 + 0x408) = uVar10;
          *(undefined8 *)((long)pvVar25 + 0x410) = uVar11;
          *(undefined8 *)((long)pvVar25 + 0x418) = uVar2;
          *(undefined8 *)((long)pvVar25 + 0x420) = uVar3;
          *(undefined8 *)((long)pvVar25 + 0x430) = uVar12;
          *(undefined8 *)((long)pvVar25 + 0x438) = uVar13;
          *(ulong *)((long)pvVar25 + 0x460) = uVar29;
          if ((int)(uVar29 >> 0x20) != 0) {
            uVar26 = *(uint *)(hash_table_size_primes + (uVar29 & 0xffffffff) * 4);
            uVar29 = (ulong)uVar26 * 4;
            uVar14 = Memory::alloc_static(uVar29,false);
            *(undefined8 *)((long)pvVar25 + 0x458) = uVar14;
            uVar14 = Memory::alloc_static((ulong)uVar26 * 8,false);
            *(undefined8 *)((long)pvVar25 + 0x440) = uVar14;
            uVar14 = Memory::alloc_static(uVar29,false);
            *(undefined8 *)((long)pvVar25 + 0x450) = uVar14;
            lVar15 = Memory::alloc_static(uVar29,false);
            *(long *)((long)pvVar25 + 0x448) = lVar15;
            if (*(int *)((long)pvVar25 + 0x464) != 0) {
              lVar16 = *(long *)((long)pvVar25 + 0x440);
              lVar17 = *(long *)(param_1 + 0x440);
              lVar22 = 0;
              lVar18 = *(long *)(param_1 + 0x450);
              lVar23 = *(long *)((long)pvVar25 + 0x450);
              do {
                *(undefined8 *)(lVar16 + lVar22 * 8) = *(undefined8 *)(lVar17 + lVar22 * 8);
                *(undefined4 *)(lVar23 + lVar22 * 4) = *(undefined4 *)(lVar18 + lVar22 * 4);
                lVar22 = lVar22 + 1;
              } while ((uint)lVar22 < *(uint *)((long)pvVar25 + 0x464));
            }
            if (uVar26 != 0) {
              lVar16 = *(long *)(param_1 + 0x458);
              lVar17 = *(long *)((long)pvVar25 + 0x458);
              lVar23 = 0;
              lVar18 = *(long *)(param_1 + 0x448);
              do {
                *(undefined4 *)(lVar17 + lVar23) = *(undefined4 *)(lVar16 + lVar23);
                *(undefined4 *)(lVar15 + lVar23) = *(undefined4 *)(lVar18 + lVar23);
                lVar23 = lVar23 + 4;
              } while (uVar29 - lVar23 != 0);
            }
          }
          *(undefined8 *)((long)pvVar25 + 0x468) = *(undefined8 *)(param_1 + 0x468);
          return uVar28;
        }
        pcVar27 = "Attempting to initialize the wrong RID";
        uVar14 = 0xfc;
      }
      else {
        pcVar27 = "Initializing already initialized RID";
        uVar14 = 0xf8;
      }
      _err_print_error("get_or_null","./core/templates/rid_owner.h",uVar14,
                       "Method/function failed. Returning: nullptr",pcVar27,0,0);
    }
    _err_print_error("initialize_rid","./core/templates/rid_owner.h",0x128,
                     "Parameter \"mem\" is null.",0,0);
    return uVar28;
  }
  RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
  _err_print_error("_allocate_rid","./core/templates/rid_owner.h",0xa9,
                   "FATAL: Condition \"validator == 0x7FFFFFFF\" is true.",
                   "Overflow in RID validator",0,0);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* RID_Alloc<GLES3::ReflectionProbe, true>::allocate_rid() */

ulong __thiscall
RID_Alloc<GLES3::ReflectionProbe,true>::allocate_rid(RID_Alloc<GLES3::ReflectionProbe,true> *this)

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
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar6);
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
      goto LAB_00113077;
    }
    uVar13 = (ulong)uVar7;
    lVar3 = *(long *)(this + 8);
    uVar8 = Memory::alloc_static((ulong)*(uint *)(this + 0x18) * 0x90,false);
    uVar7 = *(uint *)(this + 0x18);
    lVar9 = *(long *)(this + 0x10);
    *(undefined8 *)(lVar3 + uVar13 * 8) = uVar8;
    uVar8 = Memory::alloc_static((ulong)uVar7 << 2,false);
    uVar7 = *(uint *)(this + 0x18);
    *(undefined8 *)(uVar13 * 8 + lVar9) = uVar8;
    if (uVar7 != 0) {
      lVar3 = *(long *)(*(long *)(this + 0x10) + uVar13 * 8);
      lVar9 = 0;
      puVar12 = (undefined4 *)(*(long *)(*(long *)(this + 8) + uVar13 * 8) + 0x88);
      do {
        *puVar12 = 0xffffffff;
        puVar12 = puVar12 + 0x24;
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
  *(uint *)(((ulong)uVar7 % (ulong)uVar2) * 0x90 +
            *(long *)(*(long *)(this + 8) + ((ulong)uVar7 / (ulong)uVar2) * 8) + 0x88) =
       uVar11 | 0x80000000;
  *(int *)(this + 0x20) = *(int *)(this + 0x20) + 1;
  pthread_mutex_unlock(__mutex);
LAB_00113077:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar13;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RID_Alloc<GLES3::ReflectionAtlas, false>::make_rid(GLES3::ReflectionAtlas const&) */

ulong __thiscall
RID_Alloc<GLES3::ReflectionAtlas,false>::make_rid
          (RID_Alloc<GLES3::ReflectionAtlas,false> *this,ReflectionAtlas *param_1)

{
  long *plVar1;
  undefined4 uVar2;
  void *pvVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char cVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined4 *puVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  ulong uVar19;
  long lVar20;
  char *pcVar21;
  ulong uVar22;
  bool bVar23;
  
  uVar15 = *(uint *)(this + 0x20);
  if (uVar15 == *(uint *)(this + 0x1c)) {
    if (uVar15 == 0) {
      lVar20 = 0;
      uVar22 = 8;
    }
    else {
      uVar22 = (ulong)((int)((ulong)uVar15 / (ulong)*(uint *)(this + 0x18)) + 1) << 3;
      lVar20 = ((ulong)uVar15 / (ulong)*(uint *)(this + 0x18)) * 8;
    }
    lVar9 = Memory::realloc_static(*(void **)(this + 8),uVar22,false);
    *(long *)(this + 8) = lVar9;
    uVar17 = Memory::alloc_static((ulong)*(uint *)(this + 0x18) * 0x50,false);
    pvVar3 = *(void **)(this + 0x10);
    *(undefined8 *)(lVar9 + lVar20) = uVar17;
    lVar10 = Memory::realloc_static(pvVar3,uVar22,false);
    *(long *)(this + 0x10) = lVar10;
    uVar17 = Memory::alloc_static((ulong)*(uint *)(this + 0x18) << 2,false);
    uVar12 = *(uint *)(this + 0x18);
    lVar9 = *(long *)(this + 0x10);
    *(undefined8 *)(lVar10 + lVar20) = uVar17;
    if (uVar12 != 0) {
      lVar10 = *(long *)(lVar9 + lVar20);
      lVar11 = 0;
      puVar16 = (undefined4 *)(*(long *)(*(long *)(this + 8) + lVar20) + 0x48);
      do {
        *puVar16 = 0xffffffff;
        puVar16 = puVar16 + 0x14;
        *(int *)(lVar10 + lVar11 * 4) = *(int *)(this + 0x20) + (int)lVar11;
        uVar12 = *(uint *)(this + 0x18);
        lVar11 = lVar11 + 1;
      } while ((uint)lVar11 < uVar12);
    }
    *(uint *)(this + 0x1c) = *(int *)(this + 0x1c) + uVar12;
    uVar15 = *(uint *)(this + 0x20);
  }
  else {
    lVar9 = *(long *)(this + 0x10);
    uVar12 = *(uint *)(this + 0x18);
  }
  uVar15 = *(uint *)(*(long *)(lVar9 + ((ulong)uVar15 / (ulong)uVar12) * 8) +
                    ((ulong)uVar15 % (ulong)uVar12) * 4);
  uVar22 = (ulong)uVar15;
  LOCK();
  UNLOCK();
  uVar13 = (int)RID_AllocBase::base_id + 1;
  uVar14 = uVar13 & 0x7fffffff;
  if (uVar14 == 0x7fffffff) {
    RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
    _err_print_error("_allocate_rid","./core/templates/rid_owner.h",0xa9,
                     "FATAL: Condition \"validator == 0x7FFFFFFF\" is true.",
                     "Overflow in RID validator",0,0);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  lVar20 = *(long *)(this + 8);
  RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
  *(uint *)((uVar22 % (ulong)uVar12) * 0x50 + *(long *)(lVar20 + (uVar22 / uVar12) * 8) + 0x48) =
       uVar14 | 0x80000000;
  *(int *)(this + 0x20) = *(int *)(this + 0x20) + 1;
  uVar19 = CONCAT44(uVar13,uVar15) & 0x7fffffffffffffff;
  if ((uVar19 != 0) && ((uint)uVar19 < *(uint *)(this + 0x1c))) {
    puVar18 = (undefined8 *)
              ((uVar22 % (ulong)*(uint *)(this + 0x18)) * 0x50 +
              *(long *)(lVar20 + (uVar22 / *(uint *)(this + 0x18)) * 8));
    if ((int)*(uint *)(puVar18 + 9) < 0) {
      uVar15 = (uint)(uVar19 >> 0x20);
      if (uVar15 == (*(uint *)(puVar18 + 9) & 0x7fffffff)) {
        *(uint *)(puVar18 + 9) = uVar15;
        uVar17 = *(undefined8 *)(param_1 + 0xc);
        uVar5 = *(undefined8 *)(param_1 + 0x14);
        uVar6 = *(undefined8 *)(param_1 + 0x1c);
        uVar7 = *(undefined8 *)(param_1 + 0x24);
        *puVar18 = *(undefined8 *)param_1;
        uVar2 = *(undefined4 *)(param_1 + 8);
        *(undefined8 *)((long)puVar18 + 0xc) = uVar17;
        *(undefined8 *)((long)puVar18 + 0x14) = uVar5;
        *(undefined4 *)(puVar18 + 1) = uVar2;
        uVar2 = *(undefined4 *)(param_1 + 0x2c);
        puVar18[7] = 0;
        *(undefined4 *)((long)puVar18 + 0x2c) = uVar2;
        lVar20 = *(long *)(param_1 + 0x38);
        *(undefined8 *)((long)puVar18 + 0x1c) = uVar6;
        *(undefined8 *)((long)puVar18 + 0x24) = uVar7;
        plVar1 = (long *)(lVar20 + -0x10);
        if (lVar20 != 0) {
          do {
            lVar20 = *plVar1;
            if (lVar20 == 0) goto LAB_001133b8;
            LOCK();
            lVar9 = *plVar1;
            bVar23 = lVar20 == lVar9;
            if (bVar23) {
              *plVar1 = lVar20 + 1;
              lVar9 = lVar20;
            }
            UNLOCK();
          } while (!bVar23);
          if (lVar9 != -1) {
            puVar18[7] = *(undefined8 *)(param_1 + 0x38);
          }
        }
LAB_001133b8:
        puVar18[8] = 0;
        if (*(long *)(param_1 + 0x40) == 0) {
          return uVar19;
        }
        puVar18[8] = *(long *)(param_1 + 0x40);
        cVar8 = RefCounted::reference();
        if (cVar8 != '\0') {
          return uVar19;
        }
        puVar18[8] = 0;
        return uVar19;
      }
      pcVar21 = "Attempting to initialize the wrong RID";
      uVar17 = 0xfc;
    }
    else {
      pcVar21 = "Initializing already initialized RID";
      uVar17 = 0xf8;
    }
    _err_print_error("get_or_null","./core/templates/rid_owner.h",uVar17,
                     "Method/function failed. Returning: nullptr",pcVar21,0,0);
  }
  _err_print_error("initialize_rid","./core/templates/rid_owner.h",0x128,
                   "Parameter \"mem\" is null.",0,0);
  return uVar19;
}



/* RID_Alloc<GLES3::ReflectionProbeInstance, false>::make_rid(GLES3::ReflectionProbeInstance const&)
    */

ulong __thiscall
RID_Alloc<GLES3::ReflectionProbeInstance,false>::make_rid
          (RID_Alloc<GLES3::ReflectionProbeInstance,false> *this,ReflectionProbeInstance *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined8 uVar12;
  uint uVar13;
  ulong uVar14;
  char *pcVar15;
  long lVar16;
  ulong uVar17;
  
  uVar13 = *(uint *)(this + 0x20);
  if (uVar13 == *(uint *)(this + 0x1c)) {
    if (uVar13 == 0) {
      lVar16 = 0;
      uVar17 = 8;
    }
    else {
      uVar17 = (ulong)((int)((ulong)uVar13 / (ulong)*(uint *)(this + 0x18)) + 1) << 3;
      lVar16 = ((ulong)uVar13 / (ulong)*(uint *)(this + 0x18)) * 8;
    }
    lVar5 = Memory::realloc_static(*(void **)(this + 8),uVar17,false);
    *(long *)(this + 8) = lVar5;
    uVar12 = Memory::alloc_static((ulong)*(uint *)(this + 0x18) * 0x68,false);
    pvVar2 = *(void **)(this + 0x10);
    *(undefined8 *)(lVar5 + lVar16) = uVar12;
    lVar6 = Memory::realloc_static(pvVar2,uVar17,false);
    *(long *)(this + 0x10) = lVar6;
    uVar12 = Memory::alloc_static((ulong)*(uint *)(this + 0x18) << 2,false);
    uVar8 = *(uint *)(this + 0x18);
    lVar5 = *(long *)(this + 0x10);
    *(undefined8 *)(lVar6 + lVar16) = uVar12;
    if (uVar8 != 0) {
      lVar6 = *(long *)(lVar5 + lVar16);
      lVar7 = 0;
      puVar11 = (undefined4 *)(*(long *)(*(long *)(this + 8) + lVar16) + 0x60);
      do {
        *puVar11 = 0xffffffff;
        puVar11 = puVar11 + 0x1a;
        *(int *)(lVar6 + lVar7 * 4) = *(int *)(this + 0x20) + (int)lVar7;
        uVar8 = *(uint *)(this + 0x18);
        lVar7 = lVar7 + 1;
      } while ((uint)lVar7 < uVar8);
    }
    *(uint *)(this + 0x1c) = *(int *)(this + 0x1c) + uVar8;
    uVar13 = *(uint *)(this + 0x20);
  }
  else {
    lVar5 = *(long *)(this + 0x10);
    uVar8 = *(uint *)(this + 0x18);
  }
  uVar13 = *(uint *)(*(long *)(lVar5 + ((ulong)uVar13 / (ulong)uVar8) * 8) +
                    ((ulong)uVar13 % (ulong)uVar8) * 4);
  uVar17 = (ulong)uVar13;
  LOCK();
  UNLOCK();
  uVar9 = (int)RID_AllocBase::base_id + 1;
  uVar10 = uVar9 & 0x7fffffff;
  if (uVar10 != 0x7fffffff) {
    lVar16 = *(long *)(this + 8);
    RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
    *(uint *)(*(long *)(lVar16 + (uVar17 / uVar8) * 8) + (uVar17 % (ulong)uVar8) * 0x68 + 0x60) =
         uVar10 | 0x80000000;
    *(int *)(this + 0x20) = *(int *)(this + 0x20) + 1;
    uVar14 = CONCAT44(uVar9,uVar13) & 0x7fffffffffffffff;
    if ((uVar14 != 0) && ((uint)uVar14 < *(uint *)(this + 0x1c))) {
      puVar1 = (undefined8 *)
               (*(long *)(lVar16 + (uVar17 / *(uint *)(this + 0x18)) * 8) +
               (uVar17 % (ulong)*(uint *)(this + 0x18)) * 0x68);
      if ((int)*(uint *)(puVar1 + 0xc) < 0) {
        uVar13 = (uint)(uVar14 >> 0x20);
        if (uVar13 == (*(uint *)(puVar1 + 0xc) & 0x7fffffff)) {
          uVar12 = *(undefined8 *)param_1;
          uVar4 = *(undefined8 *)(param_1 + 8);
          *(uint *)(puVar1 + 0xc) = uVar13;
          *puVar1 = uVar12;
          puVar1[1] = uVar4;
          uVar12 = *(undefined8 *)(param_1 + 0x18);
          puVar1[2] = *(undefined8 *)(param_1 + 0x10);
          puVar1[3] = uVar12;
          uVar12 = *(undefined8 *)(param_1 + 0x28);
          puVar1[4] = *(undefined8 *)(param_1 + 0x20);
          puVar1[5] = uVar12;
          uVar12 = *(undefined8 *)(param_1 + 0x38);
          puVar1[6] = *(undefined8 *)(param_1 + 0x30);
          puVar1[7] = uVar12;
          uVar12 = *(undefined8 *)(param_1 + 0x48);
          puVar1[8] = *(undefined8 *)(param_1 + 0x40);
          puVar1[9] = uVar12;
          uVar12 = *(undefined8 *)(param_1 + 0x58);
          puVar1[10] = *(undefined8 *)(param_1 + 0x50);
          puVar1[0xb] = uVar12;
          return uVar14;
        }
        pcVar15 = "Attempting to initialize the wrong RID";
        uVar12 = 0xfc;
      }
      else {
        pcVar15 = "Initializing already initialized RID";
        uVar12 = 0xf8;
      }
      _err_print_error("get_or_null","./core/templates/rid_owner.h",uVar12,
                       "Method/function failed. Returning: nullptr",pcVar15,0,0);
    }
    _err_print_error("initialize_rid","./core/templates/rid_owner.h",0x128,
                     "Parameter \"mem\" is null.",0,0);
    return uVar14;
  }
  RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
  _err_print_error("_allocate_rid","./core/templates/rid_owner.h",0xa9,
                   "FATAL: Condition \"validator == 0x7FFFFFFF\" is true.",
                   "Overflow in RID validator",0,0);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}



/* RID_Alloc<GLES3::Lightmap, true>::allocate_rid() */

ulong __thiscall
RID_Alloc<GLES3::Lightmap,true>::allocate_rid(RID_Alloc<GLES3::Lightmap,true> *this)

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
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar6);
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
      goto LAB_001139b6;
    }
    lVar3 = *(long *)(this + 8);
    uVar13 = (ulong)uVar7;
    uVar8 = Memory::alloc_static((ulong)*(uint *)(this + 0x18) * 0xb8,false);
    uVar7 = *(uint *)(this + 0x18);
    lVar9 = *(long *)(this + 0x10);
    *(undefined8 *)(lVar3 + uVar13 * 8) = uVar8;
    uVar8 = Memory::alloc_static((ulong)uVar7 << 2,false);
    uVar7 = *(uint *)(this + 0x18);
    *(undefined8 *)(uVar13 * 8 + lVar9) = uVar8;
    if (uVar7 != 0) {
      lVar3 = *(long *)(*(long *)(this + 0x10) + uVar13 * 8);
      lVar9 = 0;
      puVar12 = (undefined4 *)(*(long *)(*(long *)(this + 8) + uVar13 * 8) + 0xb0);
      do {
        *puVar12 = 0xffffffff;
        puVar12 = puVar12 + 0x2e;
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
  *(uint *)(((ulong)uVar7 % (ulong)uVar2) * 0xb8 +
            *(long *)(*(long *)(this + 8) + ((ulong)uVar7 / (ulong)uVar2) * 8) + 0xb0) =
       uVar11 | 0x80000000;
  *(int *)(this + 0x20) = *(int *)(this + 0x20) + 1;
  pthread_mutex_unlock(__mutex);
LAB_001139b6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar13;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RID_Alloc<GLES3::LightmapInstance, false>::make_rid(GLES3::LightmapInstance const&) */

ulong __thiscall
RID_Alloc<GLES3::LightmapInstance,false>::make_rid
          (RID_Alloc<GLES3::LightmapInstance,false> *this,LightmapInstance *param_1)

{
  int iVar1;
  void *pvVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  uint uVar13;
  ulong uVar14;
  char *pcVar15;
  long lVar16;
  ulong uVar17;
  
  uVar13 = *(uint *)(this + 0x20);
  if (uVar13 == *(uint *)(this + 0x1c)) {
    if (uVar13 == 0) {
      lVar16 = 0;
      uVar17 = 8;
    }
    else {
      uVar17 = (ulong)((int)((ulong)uVar13 / (ulong)*(uint *)(this + 0x18)) + 1) << 3;
      lVar16 = ((ulong)uVar13 / (ulong)*(uint *)(this + 0x18)) * 8;
    }
    lVar6 = Memory::realloc_static(*(void **)(this + 8),uVar17,false);
    *(long *)(this + 8) = lVar6;
    uVar12 = Memory::alloc_static((ulong)*(uint *)(this + 0x18) << 6,false);
    pvVar2 = *(void **)(this + 0x10);
    *(undefined8 *)(lVar6 + lVar16) = uVar12;
    lVar6 = Memory::realloc_static(pvVar2,uVar17,false);
    *(long *)(this + 0x10) = lVar6;
    uVar12 = Memory::alloc_static((ulong)*(uint *)(this + 0x18) << 2,false);
    iVar1 = *(int *)(this + 0x18);
    *(undefined8 *)(lVar6 + lVar16) = uVar12;
    if (iVar1 == 0) {
      lVar6 = *(long *)(this + 0x10);
      uVar8 = 0;
    }
    else {
      lVar6 = *(long *)(this + 0x10);
      lVar3 = *(long *)(lVar6 + lVar16);
      lVar16 = *(long *)(*(long *)(this + 8) + lVar16);
      lVar7 = 0;
      do {
        *(undefined4 *)(lVar16 + 0x38 + lVar7 * 0x40) = 0xffffffff;
        *(int *)(lVar3 + lVar7 * 4) = *(int *)(this + 0x20) + (int)lVar7;
        uVar8 = *(uint *)(this + 0x18);
        lVar7 = lVar7 + 1;
      } while ((uint)lVar7 < uVar8);
    }
    *(uint *)(this + 0x1c) = *(int *)(this + 0x1c) + uVar8;
    uVar13 = *(uint *)(this + 0x20);
  }
  else {
    lVar6 = *(long *)(this + 0x10);
    uVar8 = *(uint *)(this + 0x18);
  }
  uVar13 = *(uint *)(*(long *)(lVar6 + ((ulong)uVar13 / (ulong)uVar8) * 8) +
                    ((ulong)uVar13 % (ulong)uVar8) * 4);
  uVar17 = (ulong)uVar13;
  LOCK();
  UNLOCK();
  uVar9 = (int)RID_AllocBase::base_id + 1;
  uVar10 = uVar9 & 0x7fffffff;
  if (uVar10 != 0x7fffffff) {
    lVar16 = *(long *)(this + 8);
    RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
    *(uint *)((uVar17 % (ulong)uVar8) * 0x40 + *(long *)(lVar16 + (uVar17 / uVar8) * 8) + 0x38) =
         uVar10 | 0x80000000;
    *(int *)(this + 0x20) = *(int *)(this + 0x20) + 1;
    uVar14 = CONCAT44(uVar9,uVar13) & 0x7fffffffffffffff;
    if ((uVar14 != 0) && ((uint)uVar14 < *(uint *)(this + 0x1c))) {
      puVar11 = (undefined8 *)
                ((uVar17 % (ulong)*(uint *)(this + 0x18)) * 0x40 +
                *(long *)(lVar16 + (uVar17 / *(uint *)(this + 0x18)) * 8));
      if ((int)*(uint *)(puVar11 + 7) < 0) {
        uVar13 = (uint)(uVar14 >> 0x20);
        if (uVar13 == (*(uint *)(puVar11 + 7) & 0x7fffffff)) {
          uVar12 = *(undefined8 *)param_1;
          uVar5 = *(undefined8 *)(param_1 + 8);
          *(uint *)(puVar11 + 7) = uVar13;
          *puVar11 = uVar12;
          puVar11[1] = uVar5;
          uVar12 = *(undefined8 *)(param_1 + 0x18);
          puVar11[2] = *(undefined8 *)(param_1 + 0x10);
          puVar11[3] = uVar12;
          uVar12 = *(undefined8 *)(param_1 + 0x28);
          puVar11[4] = *(undefined8 *)(param_1 + 0x20);
          puVar11[5] = uVar12;
          puVar11[6] = *(undefined8 *)(param_1 + 0x30);
          return uVar14;
        }
        pcVar15 = "Attempting to initialize the wrong RID";
        uVar12 = 0xfc;
      }
      else {
        pcVar15 = "Initializing already initialized RID";
        uVar12 = 0xf8;
      }
      _err_print_error("get_or_null","./core/templates/rid_owner.h",uVar12,
                       "Method/function failed. Returning: nullptr",pcVar15,0,0);
    }
    _err_print_error("initialize_rid","./core/templates/rid_owner.h",0x128,
                     "Parameter \"mem\" is null.",0,0);
    return uVar14;
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



/* HashMap<DependencyTracker*, unsigned int, HashMapHasherDefault,
   HashMapComparatorDefault<DependencyTracker*>,
   DefaultTypedAllocator<HashMapElement<DependencyTracker*, unsigned int> >
   >::_resize_and_rehash(unsigned int) */

void __thiscall
HashMap<DependencyTracker*,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<DependencyTracker*>,DefaultTypedAllocator<HashMapElement<DependencyTracker*,unsigned_int>>>
::_resize_and_rehash
          (HashMap<DependencyTracker*,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<DependencyTracker*>,DefaultTypedAllocator<HashMapElement<DependencyTracker*,unsigned_int>>>
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



/* HashMap<RID, unsigned int, HashMapHasherDefault, HashMapComparatorDefault<RID>,
   DefaultTypedAllocator<HashMapElement<RID, unsigned int> > >::_resize_and_rehash(unsigned int) */

void __thiscall
HashMap<RID,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,unsigned_int>>>
::_resize_and_rehash
          (HashMap<RID,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,unsigned_int>>>
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
/* HashMap<RID, unsigned int, HashMapHasherDefault, HashMapComparatorDefault<RID>,
   DefaultTypedAllocator<HashMapElement<RID, unsigned int> > >::operator[](RID const&) */

undefined1  [16] __thiscall
HashMap<RID,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,unsigned_int>>>
::operator[](HashMap<RID,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,unsigned_int>>>
             *this,RID *param_1)

{
  uint *puVar1;
  long lVar2;
  undefined8 *puVar3;
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
  undefined1 (*pauVar28) [16];
  ulong uVar29;
  undefined1 (*pauVar30) [16];
  ulong uVar31;
  undefined8 uVar32;
  void *__s_00;
  uint uVar33;
  long lVar34;
  long lVar35;
  int iVar36;
  uint uVar37;
  uint uVar38;
  long lVar39;
  uint uVar40;
  ulong uVar41;
  ulong uVar42;
  ulong uVar43;
  undefined1 (*pauVar44) [16];
  long lVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  long lStack_90;
  uint local_88;
  
  uVar31 = (ulong)*(uint *)(this + 0x28);
  __s_00 = *(void **)(this + 8);
  lVar45 = *(long *)param_1;
  uVar37 = *(uint *)(hash_table_size_primes + uVar31 * 4);
  uVar43 = CONCAT44(0,uVar37);
  if (__s_00 == (void *)0x0) {
    uVar31 = uVar43 * 4;
    uVar29 = uVar43 * 8;
    uVar32 = Memory::alloc_static(uVar31,false);
    *(undefined8 *)(this + 0x10) = uVar32;
    lStack_90 = 0x114740;
    __s_00 = (void *)Memory::alloc_static(uVar29,false);
    *(void **)(this + 8) = __s_00;
    if (uVar37 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar29)) && (__s_00 < (void *)((long)__s + uVar31))) {
        uVar31 = 0;
        do {
          *(undefined4 *)((long)__s + uVar31 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar31 * 8) = 0;
          uVar31 = uVar31 + 1;
        } while (uVar43 != uVar31);
        lVar45 = *(long *)param_1;
        iVar36 = *(int *)(this + 0x2c);
      }
      else {
        memset(__s,0,uVar31);
        lStack_90 = 0x11478a;
        memset(__s_00,0,uVar29);
        lVar45 = *(long *)param_1;
        iVar36 = *(int *)(this + 0x2c);
      }
LAB_00114799:
      if (iVar36 == 0) goto LAB_00114830;
      uVar31 = (ulong)*(uint *)(this + 0x28);
      lVar39 = *(long *)(this + 0x10);
      goto LAB_00114444;
    }
    lVar45 = *(long *)param_1;
    iVar36 = *(int *)(this + 0x2c);
    if (__s_00 != (void *)0x0) goto LAB_00114799;
  }
  else {
    iVar36 = *(int *)(this + 0x2c);
    if (iVar36 == 0) {
LAB_00114830:
      iVar36 = 0;
    }
    else {
      lVar2 = *(long *)(hash_table_size_primes_inv + uVar31 * 8);
      uVar29 = lVar45 * 0x3ffff - 1;
      uVar29 = (uVar29 ^ uVar29 >> 0x1f) * 0x15;
      uVar29 = (uVar29 ^ uVar29 >> 0xb) * 0x41;
      uVar29 = uVar29 >> 0x16 ^ uVar29;
      uVar41 = uVar29 & 0xffffffff;
      if ((int)uVar29 == 0) {
        uVar41 = 1;
      }
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar41 * lVar2;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = uVar43;
      lVar34 = SUB168(auVar4 * auVar16,8);
      lVar39 = *(long *)(this + 0x10);
      uVar40 = SUB164(auVar4 * auVar16,8);
      uVar33 = *(uint *)(lVar39 + lVar34 * 4);
      if (uVar33 != 0) {
        uVar38 = 0;
        lVar35 = lVar34;
        do {
          if (((uint)uVar41 == uVar33) &&
             (lVar45 == *(long *)(*(long *)((long)__s_00 + lVar34 * 8) + 0x10))) {
            auVar46._0_8_ = *(long *)((long)__s_00 + (ulong)uVar40 * 8) + 0x18;
            auVar46._8_8_ = lVar35;
            return auVar46;
          }
          uVar38 = uVar38 + 1;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = (ulong)(uVar40 + 1) * lVar2;
          auVar17._8_8_ = 0;
          auVar17._0_8_ = uVar43;
          lVar34 = SUB168(auVar5 * auVar17,8);
          uVar33 = *(uint *)(lVar39 + lVar34 * 4);
          uVar40 = SUB164(auVar5 * auVar17,8);
        } while ((uVar33 != 0) &&
                (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar33 * lVar2, auVar18._8_8_ = 0,
                auVar18._0_8_ = uVar43, auVar7._8_8_ = 0,
                auVar7._0_8_ = (ulong)((uVar40 + uVar37) - SUB164(auVar6 * auVar18,8)) * lVar2,
                auVar19._8_8_ = 0, auVar19._0_8_ = uVar43, lVar35 = SUB168(auVar7 * auVar19,8),
                uVar38 <= SUB164(auVar7 * auVar19,8)));
      }
LAB_00114444:
      uVar41 = CONCAT44(0,*(uint *)(hash_table_size_primes + uVar31 * 4));
      lVar2 = *(long *)(hash_table_size_primes_inv + uVar31 * 8);
      uVar29 = lVar45 * 0x3ffff - 1;
      uVar29 = (uVar29 ^ uVar29 >> 0x1f) * 0x15;
      uVar29 = (uVar29 ^ uVar29 >> 0xb) * 0x41;
      uVar29 = uVar29 >> 0x16 ^ uVar29;
      uVar42 = uVar29 & 0xffffffff;
      if ((int)uVar29 == 0) {
        uVar42 = 1;
      }
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar42 * lVar2;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar41;
      lVar34 = SUB168(auVar8 * auVar20,8);
      uVar37 = *(uint *)(lVar39 + lVar34 * 4);
      uVar33 = SUB164(auVar8 * auVar20,8);
      if (uVar37 != 0) {
        uVar40 = 0;
        lVar35 = lVar34;
        do {
          if (((uint)uVar42 == uVar37) &&
             (*(long *)(*(long *)((long)__s_00 + lVar34 * 8) + 0x10) == lVar45)) {
            pauVar30 = *(undefined1 (**) [16])((long)__s_00 + (ulong)uVar33 * 8);
            *(undefined4 *)(pauVar30[1] + 8) = 0;
            lStack_90 = lVar35;
            goto LAB_0011452e;
          }
          uVar40 = uVar40 + 1;
          auVar9._8_8_ = 0;
          auVar9._0_8_ = (ulong)(uVar33 + 1) * lVar2;
          auVar21._8_8_ = 0;
          auVar21._0_8_ = uVar41;
          lVar34 = SUB168(auVar9 * auVar21,8);
          uVar37 = *(uint *)(lVar39 + lVar34 * 4);
          uVar33 = SUB164(auVar9 * auVar21,8);
        } while ((uVar37 != 0) &&
                (auVar10._8_8_ = 0, auVar10._0_8_ = (ulong)uVar37 * lVar2, auVar22._8_8_ = 0,
                auVar22._0_8_ = uVar41, auVar11._8_8_ = 0,
                auVar11._0_8_ =
                     (ulong)((*(uint *)(hash_table_size_primes + uVar31 * 4) + uVar33) -
                            SUB164(auVar10 * auVar22,8)) * lVar2, auVar23._8_8_ = 0,
                auVar23._0_8_ = uVar41, lVar35 = SUB168(auVar11 * auVar23,8),
                uVar40 <= SUB164(auVar11 * auVar23,8)));
      }
    }
  }
  if ((float)uVar43 * __LC170 < (float)(iVar36 + 1)) {
    if (*(int *)(this + 0x28) == 0x1c) {
      pauVar30 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_0011452e;
    }
    _resize_and_rehash(this,*(int *)(this + 0x28) + 1);
  }
  uVar32 = *(undefined8 *)param_1;
  pauVar30 = (undefined1 (*) [16])operator_new(0x20,"");
  *pauVar30 = (undefined1  [16])0x0;
  *(undefined4 *)(pauVar30[1] + 8) = 0;
  *(undefined8 *)pauVar30[1] = uVar32;
  puVar3 = *(undefined8 **)(this + 0x20);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined1 (**) [16])(this + 0x18) = pauVar30;
  }
  else {
    *puVar3 = pauVar30;
    *(undefined8 **)(*pauVar30 + 8) = puVar3;
  }
  lVar45 = *(long *)param_1;
  lVar39 = *(long *)(this + 0x10);
  *(undefined1 (**) [16])(this + 0x20) = pauVar30;
  uVar31 = lVar45 * 0x3ffff - 1;
  uVar31 = (uVar31 ^ uVar31 >> 0x1f) * 0x15;
  uVar31 = (uVar31 ^ uVar31 >> 0xb) * 0x41;
  uVar31 = uVar31 >> 0x16 ^ uVar31;
  uVar43 = uVar31 & 0xffffffff;
  if ((int)uVar31 == 0) {
    uVar43 = 1;
  }
  uVar38 = 0;
  lVar45 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar40 = (uint)uVar43;
  uVar37 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar31 = CONCAT44(0,uVar37);
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar43 * lVar45;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = uVar31;
  lStack_90 = SUB168(auVar12 * auVar24,8);
  lVar2 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar39 + lStack_90 * 4);
  iVar36 = SUB164(auVar12 * auVar24,8);
  uVar33 = *puVar1;
  pauVar28 = pauVar30;
  while (uVar33 != 0) {
    auVar13._8_8_ = 0;
    auVar13._0_8_ = (ulong)uVar33 * lVar45;
    auVar25._8_8_ = 0;
    auVar25._0_8_ = uVar31;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)((uVar37 + iVar36) - SUB164(auVar13 * auVar25,8)) * lVar45;
    auVar26._8_8_ = 0;
    auVar26._0_8_ = uVar31;
    local_88 = SUB164(auVar14 * auVar26,8);
    pauVar44 = pauVar28;
    if (local_88 < uVar38) {
      *puVar1 = (uint)uVar43;
      uVar43 = (ulong)uVar33;
      puVar3 = (undefined8 *)(lVar2 + lStack_90 * 8);
      pauVar44 = (undefined1 (*) [16])*puVar3;
      *puVar3 = pauVar28;
      uVar38 = local_88;
    }
    uVar40 = (uint)uVar43;
    uVar38 = uVar38 + 1;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)(iVar36 + 1) * lVar45;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar31;
    lStack_90 = SUB168(auVar15 * auVar27,8);
    puVar1 = (uint *)(lVar39 + lStack_90 * 4);
    iVar36 = SUB164(auVar15 * auVar27,8);
    pauVar28 = pauVar44;
    uVar33 = *puVar1;
  }
  *(undefined1 (**) [16])(lVar2 + lStack_90 * 8) = pauVar28;
  *puVar1 = uVar40;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_0011452e:
  auVar47._8_8_ = lStack_90;
  auVar47._0_8_ = pauVar30[1] + 8;
  return auVar47;
}



/* CowData<GLES3::ReflectionAtlas::Reflection>::_realloc(long) */

undefined8 __thiscall
CowData<GLES3::ReflectionAtlas::Reflection>::_realloc
          (CowData<GLES3::ReflectionAtlas::Reflection> *this,long param_1)

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



/* CowData<GLES3::LightStorage::ShadowAtlas::Quadrant::Shadow>::_realloc(long) */

undefined8 __thiscall
CowData<GLES3::LightStorage::ShadowAtlas::Quadrant::Shadow>::_realloc
          (CowData<GLES3::LightStorage::ShadowAtlas::Quadrant::Shadow> *this,long param_1)

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
/* HashMap<DependencyTracker*, unsigned int, HashMapHasherDefault,
   HashMapComparatorDefault<DependencyTracker*>,
   DefaultTypedAllocator<HashMapElement<DependencyTracker*, unsigned int> >
   >::insert(DependencyTracker* const&, unsigned int const&, bool) */

void HashMap<DependencyTracker*,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<DependencyTracker*>,DefaultTypedAllocator<HashMapElement<DependencyTracker*,unsigned_int>>>
     ::insert(DependencyTracker **param_1,uint *param_2,bool param_3)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 *puVar5;
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
  DependencyTracker *pDVar22;
  uint uVar23;
  ulong uVar24;
  DependencyTracker *pDVar25;
  undefined8 uVar26;
  void *__s_00;
  undefined4 *in_RCX;
  int iVar27;
  undefined7 in_register_00000011;
  long *plVar28;
  long lVar29;
  long lVar30;
  ulong uVar31;
  uint uVar32;
  char in_R8B;
  uint uVar33;
  ulong uVar34;
  uint uVar35;
  long lVar36;
  DependencyTracker *pDVar37;
  
  plVar28 = (long *)CONCAT71(in_register_00000011,param_3);
  __s_00 = *(void **)(param_2 + 2);
  uVar2 = *(uint *)(hash_table_size_primes + (ulong)param_2[10] * 4);
  if (__s_00 == (void *)0x0) {
    uVar34 = (ulong)uVar2;
    uVar24 = uVar34 * 4;
    uVar31 = uVar34 * 8;
    uVar26 = Memory::alloc_static(uVar24,false);
    *(undefined8 *)(param_2 + 4) = uVar26;
    __s_00 = (void *)Memory::alloc_static(uVar31,false);
    *(void **)(param_2 + 2) = __s_00;
    if (uVar2 != 0) {
      __s = *(void **)(param_2 + 4);
      if ((__s < (void *)((long)__s_00 + uVar31)) && (__s_00 < (void *)((long)__s + uVar24))) {
        uVar24 = 0;
        do {
          *(undefined4 *)((long)__s + uVar24 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar24 * 8) = 0;
          uVar24 = uVar24 + 1;
        } while (uVar34 != uVar24);
        goto LAB_00114996;
      }
      memset(__s,0,uVar24);
      memset(__s_00,0,uVar31);
      uVar32 = param_2[0xb];
      lVar36 = *plVar28;
      goto LAB_001149a1;
    }
    uVar32 = param_2[0xb];
    lVar36 = *plVar28;
    if (__s_00 != (void *)0x0) goto LAB_001149a1;
  }
  else {
LAB_00114996:
    uVar32 = param_2[0xb];
    lVar36 = *plVar28;
LAB_001149a1:
    if (uVar32 != 0) {
      uVar34 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)param_2[10] * 4));
      lVar4 = *(long *)(hash_table_size_primes_inv + (ulong)param_2[10] * 8);
      uVar24 = lVar36 * 0x3ffff - 1;
      uVar24 = (uVar24 ^ uVar24 >> 0x1f) * 0x15;
      uVar24 = (uVar24 ^ uVar24 >> 0xb) * 0x41;
      uVar24 = uVar24 >> 0x16 ^ uVar24;
      uVar31 = uVar24 & 0xffffffff;
      if ((int)uVar24 == 0) {
        uVar31 = 1;
      }
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar31 * lVar4;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = uVar34;
      lVar29 = SUB168(auVar6 * auVar14,8);
      uVar23 = *(uint *)(*(long *)(param_2 + 4) + lVar29 * 4);
      uVar33 = SUB164(auVar6 * auVar14,8);
      if (uVar23 != 0) {
        uVar35 = 0;
        do {
          if (((uint)uVar31 == uVar23) &&
             (*(long *)(*(long *)((long)__s_00 + lVar29 * 8) + 0x10) == lVar36)) {
            pDVar25 = *(DependencyTracker **)((long)__s_00 + (ulong)uVar33 * 8);
            *(undefined4 *)(pDVar25 + 0x18) = *in_RCX;
            goto LAB_00114c68;
          }
          uVar35 = uVar35 + 1;
          auVar7._8_8_ = 0;
          auVar7._0_8_ = (ulong)(uVar33 + 1) * lVar4;
          auVar15._8_8_ = 0;
          auVar15._0_8_ = uVar34;
          lVar29 = SUB168(auVar7 * auVar15,8);
          uVar23 = *(uint *)(*(long *)(param_2 + 4) + lVar29 * 4);
          uVar33 = SUB164(auVar7 * auVar15,8);
        } while ((uVar23 != 0) &&
                (auVar8._8_8_ = 0, auVar8._0_8_ = (ulong)uVar23 * lVar4, auVar16._8_8_ = 0,
                auVar16._0_8_ = uVar34, auVar9._8_8_ = 0,
                auVar9._0_8_ = (ulong)((*(uint *)(hash_table_size_primes + (ulong)param_2[10] * 4) +
                                       uVar33) - SUB164(auVar8 * auVar16,8)) * lVar4,
                auVar17._8_8_ = 0, auVar17._0_8_ = uVar34, uVar35 <= SUB164(auVar9 * auVar17,8)));
      }
    }
  }
  if ((float)uVar2 * __LC170 < (float)(uVar32 + 1)) {
    if (param_2[10] == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      pDVar25 = (DependencyTracker *)0x0;
      goto LAB_00114c68;
    }
    _resize_and_rehash((HashMap<DependencyTracker*,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<DependencyTracker*>,DefaultTypedAllocator<HashMapElement<DependencyTracker*,unsigned_int>>>
                        *)param_2,param_2[10] + 1);
  }
  lVar36 = *plVar28;
  uVar3 = *in_RCX;
  pDVar25 = (DependencyTracker *)operator_new(0x20,"");
  *(long *)(pDVar25 + 0x10) = lVar36;
  *(undefined4 *)(pDVar25 + 0x18) = uVar3;
  *(undefined1 (*) [16])pDVar25 = (undefined1  [16])0x0;
  puVar5 = *(undefined8 **)(param_2 + 8);
  if (puVar5 == (undefined8 *)0x0) {
    *(DependencyTracker **)(param_2 + 6) = pDVar25;
    *(DependencyTracker **)(param_2 + 8) = pDVar25;
  }
  else if (in_R8B == '\0') {
    *puVar5 = pDVar25;
    *(undefined8 **)(pDVar25 + 8) = puVar5;
    *(DependencyTracker **)(param_2 + 8) = pDVar25;
  }
  else {
    lVar36 = *(long *)(param_2 + 6);
    *(DependencyTracker **)(lVar36 + 8) = pDVar25;
    *(long *)pDVar25 = lVar36;
    *(DependencyTracker **)(param_2 + 6) = pDVar25;
  }
  lVar36 = *(long *)(param_2 + 4);
  uVar24 = *plVar28 * 0x3ffff - 1;
  uVar24 = (uVar24 ^ uVar24 >> 0x1f) * 0x15;
  uVar24 = (uVar24 ^ uVar24 >> 0xb) * 0x41;
  uVar24 = uVar24 >> 0x16 ^ uVar24;
  uVar31 = uVar24 & 0xffffffff;
  if ((int)uVar24 == 0) {
    uVar31 = 1;
  }
  uVar33 = 0;
  lVar4 = *(long *)(hash_table_size_primes_inv + (ulong)param_2[10] * 8);
  uVar23 = (uint)uVar31;
  uVar2 = *(uint *)(hash_table_size_primes + (ulong)param_2[10] * 4);
  uVar24 = CONCAT44(0,uVar2);
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar31 * lVar4;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = uVar24;
  lVar30 = SUB168(auVar10 * auVar18,8);
  lVar29 = *(long *)(param_2 + 2);
  puVar1 = (uint *)(lVar36 + lVar30 * 4);
  iVar27 = SUB164(auVar10 * auVar18,8);
  uVar32 = *puVar1;
  pDVar22 = pDVar25;
  while (uVar32 != 0) {
    auVar11._8_8_ = 0;
    auVar11._0_8_ = (ulong)uVar32 * lVar4;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar24;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = (ulong)((uVar2 + iVar27) - SUB164(auVar11 * auVar19,8)) * lVar4;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = uVar24;
    uVar23 = SUB164(auVar12 * auVar20,8);
    pDVar37 = pDVar22;
    if (uVar23 < uVar33) {
      *puVar1 = (uint)uVar31;
      uVar31 = (ulong)uVar32;
      puVar5 = (undefined8 *)(lVar29 + lVar30 * 8);
      pDVar37 = (DependencyTracker *)*puVar5;
      *puVar5 = pDVar22;
      uVar33 = uVar23;
    }
    uVar23 = (uint)uVar31;
    uVar33 = uVar33 + 1;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = (ulong)(iVar27 + 1) * lVar4;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar24;
    lVar30 = SUB168(auVar13 * auVar21,8);
    puVar1 = (uint *)(lVar36 + lVar30 * 4);
    iVar27 = SUB164(auVar13 * auVar21,8);
    pDVar22 = pDVar37;
    uVar32 = *puVar1;
  }
  *(DependencyTracker **)(lVar29 + lVar30 * 8) = pDVar22;
  *puVar1 = uVar23;
  param_2[0xb] = param_2[0xb] + 1;
LAB_00114c68:
  *param_1 = pDVar25;
  return;
}



/* RID_Alloc<GLES3::Lightmap, true>::initialize_rid(RID, GLES3::Lightmap const&) */

void __thiscall
RID_Alloc<GLES3::Lightmap,true>::initialize_rid
          (RID_Alloc<GLES3::Lightmap,true> *this,ulong param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  uint uVar9;
  long in_FS_OFFSET;
  DependencyTracker *pDStack_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 != 0) {
    if ((uint)param_2 < *(uint *)(this + 0x1c)) {
      puVar7 = (undefined8 *)
               (((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x18)) * 0xb8 +
               *(long *)(*(long *)(this + 8) +
                        ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x18)) * 8));
      if ((int)*(uint *)(puVar7 + 0x16) < 0) {
        uVar9 = (uint)(param_2 >> 0x20);
        if (uVar9 == (*(uint *)(puVar7 + 0x16) & 0x7fffffff)) {
          uVar3 = *param_3;
          uVar4 = *(undefined8 *)((long)param_3 + 0x14);
          uVar5 = *(undefined8 *)((long)param_3 + 0x1c);
          *(uint *)(puVar7 + 0x16) = uVar9;
          uVar1 = *(undefined4 *)((long)param_3 + 0x2c);
          *puVar7 = uVar3;
          uVar3 = param_3[1];
          *(undefined8 *)((long)puVar7 + 0x14) = uVar4;
          *(undefined8 *)((long)puVar7 + 0x1c) = uVar5;
          puVar7[1] = uVar3;
          uVar2 = *(undefined2 *)(param_3 + 2);
          *(undefined4 *)((long)puVar7 + 0x2c) = uVar1;
          *(undefined2 *)(puVar7 + 2) = uVar2;
          *(undefined8 *)((long)puVar7 + 0x24) = *(undefined8 *)((long)param_3 + 0x24);
          puVar7[6] = param_3[6];
          uVar3 = param_3[7];
          puVar7[9] = 0;
          lVar6 = param_3[9];
          puVar7[7] = uVar3;
          if (lVar6 != 0) {
            CowData<Vector3>::_ref((CowData<Vector3> *)(puVar7 + 9),(CowData *)(param_3 + 9));
          }
          puVar7[0xb] = 0;
          if (param_3[0xb] != 0) {
            CowData<Color>::_ref((CowData<Color> *)(puVar7 + 0xb),(CowData *)(param_3 + 0xb));
          }
          puVar7[0xd] = 0;
          if (param_3[0xd] != 0) {
            CowData<int>::_ref((CowData<int> *)(puVar7 + 0xd),(CowData *)(param_3 + 0xd));
          }
          puVar7[0xf] = 0;
          if (param_3[0xf] != 0) {
            CowData<int>::_ref((CowData<int> *)(puVar7 + 0xf),(CowData *)(param_3 + 0xf));
          }
          uVar9 = *(uint *)(param_3 + 0x15);
          puVar7[0x15] = 0;
          *(undefined1 (*) [16])(puVar7 + 0x11) = (undefined1  [16])0x0;
          uVar9 = *(uint *)(hash_table_size_primes + (ulong)uVar9 * 4);
          *(undefined1 (*) [16])(puVar7 + 0x13) = (undefined1  [16])0x0;
          lVar6 = 1;
          if (5 < uVar9) {
            do {
              if (uVar9 <= *(uint *)(hash_table_size_primes + lVar6 * 4)) {
                *(int *)(puVar7 + 0x15) = (int)lVar6;
                goto LAB_00114f30;
              }
              lVar6 = lVar6 + 1;
            } while (lVar6 != 0x1d);
            _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                             "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true."
                             ,0,0);
          }
LAB_00114f30:
          if ((*(int *)((long)param_3 + 0xac) != 0) &&
             (plVar8 = (long *)param_3[0x13], plVar8 != (long *)0x0)) {
            do {
              HashMap<DependencyTracker*,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<DependencyTracker*>,DefaultTypedAllocator<HashMapElement<DependencyTracker*,unsigned_int>>>
              ::insert(&pDStack_28,(uint *)(puVar7 + 0x10),(bool)((char)plVar8 + '\x10'));
              plVar8 = (long *)*plVar8;
            } while (plVar8 != (long *)0x0);
          }
          if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
            return;
          }
          goto LAB_00115048;
        }
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0xfc,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to initialize the wrong RID",0,0);
      }
      else {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0xf8,
                         "Method/function failed. Returning: nullptr",
                         "Initializing already initialized RID",0,0);
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    _err_print_error("initialize_rid","./core/templates/rid_owner.h",0x128,
                     "Parameter \"mem\" is null.",0,0);
    return;
  }
LAB_00115048:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<RID, unsigned int, HashMapHasherDefault, HashMapComparatorDefault<RID>,
   DefaultTypedAllocator<HashMapElement<RID, unsigned int> > >::insert(RID const&, unsigned int
   const&, bool) */

void HashMap<RID,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,unsigned_int>>>
     ::insert(RID *param_1,uint *param_2,bool param_3)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 *puVar5;
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
  undefined1 (*pauVar22) [16];
  uint uVar23;
  ulong uVar24;
  undefined1 (*pauVar25) [16];
  undefined8 uVar26;
  void *__s_00;
  undefined4 *in_RCX;
  int iVar27;
  undefined7 in_register_00000011;
  long *plVar28;
  long lVar29;
  long lVar30;
  ulong uVar31;
  uint uVar32;
  char in_R8B;
  uint uVar33;
  ulong uVar34;
  uint uVar35;
  long lVar36;
  undefined1 (*pauVar37) [16];
  
  plVar28 = (long *)CONCAT71(in_register_00000011,param_3);
  __s_00 = *(void **)(param_2 + 2);
  uVar2 = *(uint *)(hash_table_size_primes + (ulong)param_2[10] * 4);
  if (__s_00 == (void *)0x0) {
    uVar34 = (ulong)uVar2;
    uVar24 = uVar34 * 4;
    uVar31 = uVar34 * 8;
    uVar26 = Memory::alloc_static(uVar24,false);
    *(undefined8 *)(param_2 + 4) = uVar26;
    __s_00 = (void *)Memory::alloc_static(uVar31,false);
    *(void **)(param_2 + 2) = __s_00;
    if (uVar2 != 0) {
      __s = *(void **)(param_2 + 4);
      if ((__s < (void *)((long)__s_00 + uVar31)) && (__s_00 < (void *)((long)__s + uVar24))) {
        uVar24 = 0;
        do {
          *(undefined4 *)((long)__s + uVar24 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar24 * 8) = 0;
          uVar24 = uVar24 + 1;
        } while (uVar34 != uVar24);
        goto LAB_00115096;
      }
      memset(__s,0,uVar24);
      memset(__s_00,0,uVar31);
      uVar32 = param_2[0xb];
      lVar36 = *plVar28;
      goto LAB_001150a1;
    }
    uVar32 = param_2[0xb];
    lVar36 = *plVar28;
    if (__s_00 != (void *)0x0) goto LAB_001150a1;
  }
  else {
LAB_00115096:
    uVar32 = param_2[0xb];
    lVar36 = *plVar28;
LAB_001150a1:
    if (uVar32 != 0) {
      uVar34 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)param_2[10] * 4));
      lVar4 = *(long *)(hash_table_size_primes_inv + (ulong)param_2[10] * 8);
      uVar24 = lVar36 * 0x3ffff - 1;
      uVar24 = (uVar24 ^ uVar24 >> 0x1f) * 0x15;
      uVar24 = (uVar24 ^ uVar24 >> 0xb) * 0x41;
      uVar24 = uVar24 >> 0x16 ^ uVar24;
      uVar31 = uVar24 & 0xffffffff;
      if ((int)uVar24 == 0) {
        uVar31 = 1;
      }
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar31 * lVar4;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = uVar34;
      lVar29 = SUB168(auVar6 * auVar14,8);
      uVar23 = *(uint *)(*(long *)(param_2 + 4) + lVar29 * 4);
      uVar33 = SUB164(auVar6 * auVar14,8);
      if (uVar23 != 0) {
        uVar35 = 0;
        do {
          if (((uint)uVar31 == uVar23) &&
             (*(long *)(*(long *)((long)__s_00 + lVar29 * 8) + 0x10) == lVar36)) {
            pauVar25 = *(undefined1 (**) [16])((long)__s_00 + (ulong)uVar33 * 8);
            *(undefined4 *)(pauVar25[1] + 8) = *in_RCX;
            goto LAB_00115370;
          }
          uVar35 = uVar35 + 1;
          auVar7._8_8_ = 0;
          auVar7._0_8_ = (ulong)(uVar33 + 1) * lVar4;
          auVar15._8_8_ = 0;
          auVar15._0_8_ = uVar34;
          lVar29 = SUB168(auVar7 * auVar15,8);
          uVar23 = *(uint *)(*(long *)(param_2 + 4) + lVar29 * 4);
          uVar33 = SUB164(auVar7 * auVar15,8);
        } while ((uVar23 != 0) &&
                (auVar8._8_8_ = 0, auVar8._0_8_ = (ulong)uVar23 * lVar4, auVar16._8_8_ = 0,
                auVar16._0_8_ = uVar34, auVar9._8_8_ = 0,
                auVar9._0_8_ = (ulong)((*(uint *)(hash_table_size_primes + (ulong)param_2[10] * 4) +
                                       uVar33) - SUB164(auVar8 * auVar16,8)) * lVar4,
                auVar17._8_8_ = 0, auVar17._0_8_ = uVar34, uVar35 <= SUB164(auVar9 * auVar17,8)));
      }
    }
  }
  if ((float)uVar2 * __LC170 < (float)(uVar32 + 1)) {
    if (param_2[10] == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      pauVar25 = (undefined1 (*) [16])0x0;
      goto LAB_00115370;
    }
    _resize_and_rehash((HashMap<RID,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,unsigned_int>>>
                        *)param_2,param_2[10] + 1);
  }
  lVar36 = *plVar28;
  uVar3 = *in_RCX;
  pauVar25 = (undefined1 (*) [16])operator_new(0x20,"");
  *pauVar25 = (undefined1  [16])0x0;
  *(undefined4 *)(pauVar25[1] + 8) = uVar3;
  *(long *)pauVar25[1] = lVar36;
  puVar5 = *(undefined8 **)(param_2 + 8);
  if (puVar5 == (undefined8 *)0x0) {
    *(undefined1 (**) [16])(param_2 + 6) = pauVar25;
    *(undefined1 (**) [16])(param_2 + 8) = pauVar25;
  }
  else if (in_R8B == '\0') {
    *puVar5 = pauVar25;
    *(undefined8 **)(*pauVar25 + 8) = puVar5;
    *(undefined1 (**) [16])(param_2 + 8) = pauVar25;
  }
  else {
    lVar36 = *(long *)(param_2 + 6);
    *(undefined1 (**) [16])(lVar36 + 8) = pauVar25;
    *(long *)*pauVar25 = lVar36;
    *(undefined1 (**) [16])(param_2 + 6) = pauVar25;
  }
  lVar36 = *(long *)(param_2 + 4);
  uVar24 = *plVar28 * 0x3ffff - 1;
  uVar24 = (uVar24 ^ uVar24 >> 0x1f) * 0x15;
  uVar24 = (uVar24 ^ uVar24 >> 0xb) * 0x41;
  uVar24 = uVar24 >> 0x16 ^ uVar24;
  uVar31 = uVar24 & 0xffffffff;
  if ((int)uVar24 == 0) {
    uVar31 = 1;
  }
  uVar33 = 0;
  lVar4 = *(long *)(hash_table_size_primes_inv + (ulong)param_2[10] * 8);
  uVar23 = (uint)uVar31;
  uVar2 = *(uint *)(hash_table_size_primes + (ulong)param_2[10] * 4);
  uVar24 = CONCAT44(0,uVar2);
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar31 * lVar4;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = uVar24;
  lVar30 = SUB168(auVar10 * auVar18,8);
  lVar29 = *(long *)(param_2 + 2);
  puVar1 = (uint *)(lVar36 + lVar30 * 4);
  iVar27 = SUB164(auVar10 * auVar18,8);
  uVar32 = *puVar1;
  pauVar22 = pauVar25;
  while (uVar32 != 0) {
    auVar11._8_8_ = 0;
    auVar11._0_8_ = (ulong)uVar32 * lVar4;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar24;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = (ulong)((uVar2 + iVar27) - SUB164(auVar11 * auVar19,8)) * lVar4;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = uVar24;
    uVar23 = SUB164(auVar12 * auVar20,8);
    pauVar37 = pauVar22;
    if (uVar23 < uVar33) {
      *puVar1 = (uint)uVar31;
      uVar31 = (ulong)uVar32;
      puVar5 = (undefined8 *)(lVar29 + lVar30 * 8);
      pauVar37 = (undefined1 (*) [16])*puVar5;
      *puVar5 = pauVar22;
      uVar33 = uVar23;
    }
    uVar23 = (uint)uVar31;
    uVar33 = uVar33 + 1;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = (ulong)(iVar27 + 1) * lVar4;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar24;
    lVar30 = SUB168(auVar13 * auVar21,8);
    puVar1 = (uint *)(lVar36 + lVar30 * 4);
    iVar27 = SUB164(auVar13 * auVar21,8);
    pauVar22 = pauVar37;
    uVar32 = *puVar1;
  }
  *(undefined1 (**) [16])(lVar29 + lVar30 * 8) = pauVar22;
  *puVar1 = uVar23;
  param_2[0xb] = param_2[0xb] + 1;
LAB_00115370:
  *(undefined1 (**) [16])param_1 = pauVar25;
  return;
}



/* GLES3::LightStorage::ShadowAtlas::ShadowAtlas(GLES3::LightStorage::ShadowAtlas const&) */

void __thiscall
GLES3::LightStorage::ShadowAtlas::ShadowAtlas(ShadowAtlas *this,ShadowAtlas *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ShadowAtlas *pSVar12;
  long *plVar13;
  ShadowAtlas *pSVar14;
  long in_FS_OFFSET;
  bool bVar15;
  RID aRStack_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pSVar12 = param_1;
  pSVar14 = this;
  do {
    uVar1 = *(undefined4 *)pSVar12;
    *(undefined8 *)(pSVar14 + 0x10) = 0;
    *(undefined4 *)pSVar14 = uVar1;
    plVar13 = (long *)(*(long *)(pSVar12 + 0x10) + -0x10);
    if (*(long *)(pSVar12 + 0x10) != 0) {
      do {
        lVar10 = *plVar13;
        if (lVar10 == 0) goto LAB_00115513;
        LOCK();
        lVar9 = *plVar13;
        bVar15 = lVar10 == lVar9;
        if (bVar15) {
          *plVar13 = lVar10 + 1;
          lVar9 = lVar10;
        }
        UNLOCK();
      } while (!bVar15);
      if (lVar9 != -1) {
        *(undefined8 *)(pSVar14 + 0x10) = *(undefined8 *)(pSVar12 + 0x10);
      }
    }
LAB_00115513:
    iVar2 = *(int *)(pSVar12 + 0x18);
    *(undefined8 *)(pSVar14 + 0x18) = 0;
    *(undefined8 *)(pSVar14 + 0x20) = 0;
    if (iVar2 != 0) {
      uVar8 = iVar2 - 1U | iVar2 - 1U >> 1;
      uVar8 = uVar8 | uVar8 >> 2;
      uVar8 = uVar8 | uVar8 >> 4;
      uVar8 = uVar8 | uVar8 >> 8;
      uVar8 = (uVar8 | uVar8 >> 0x10) + 1;
      *(uint *)(pSVar14 + 0x1c) = uVar8;
      lVar10 = Memory::realloc_static((void *)0x0,(ulong)uVar8 * 4,false);
      *(long *)(pSVar14 + 0x20) = lVar10;
      if (lVar10 == 0) goto LAB_00115767;
      *(int *)(pSVar14 + 0x18) = iVar2;
      if (*(int *)(pSVar12 + 0x18) != 0) {
        lVar9 = *(long *)(pSVar12 + 0x20);
        lVar11 = 0;
        do {
          *(undefined4 *)(lVar10 + lVar11 * 4) = *(undefined4 *)(lVar9 + lVar11 * 4);
          lVar11 = lVar11 + 1;
        } while ((uint)lVar11 < *(uint *)(pSVar12 + 0x18));
      }
    }
    iVar2 = *(int *)(pSVar12 + 0x28);
    *(undefined8 *)(pSVar14 + 0x28) = 0;
    *(undefined8 *)(pSVar14 + 0x30) = 0;
    if (iVar2 != 0) {
      uVar8 = iVar2 - 1U >> 1 | iVar2 - 1U;
      uVar8 = uVar8 | uVar8 >> 2;
      uVar8 = uVar8 | uVar8 >> 4;
      uVar8 = uVar8 | uVar8 >> 8;
      uVar8 = (uVar8 | uVar8 >> 0x10) + 1;
      *(uint *)(pSVar14 + 0x2c) = uVar8;
      lVar10 = Memory::realloc_static((void *)0x0,(ulong)uVar8 * 4,false);
      *(long *)(pSVar14 + 0x30) = lVar10;
      if (lVar10 == 0) {
LAB_00115767:
        _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                         "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      *(int *)(pSVar14 + 0x28) = iVar2;
      if (*(int *)(pSVar12 + 0x28) != 0) {
        lVar9 = *(long *)(pSVar12 + 0x30);
        lVar11 = 0;
        do {
          *(undefined4 *)(lVar10 + lVar11 * 4) = *(undefined4 *)(lVar9 + lVar11 * 4);
          lVar11 = lVar11 + 1;
        } while ((uint)lVar11 < *(uint *)(pSVar12 + 0x28));
      }
    }
    pSVar14 = pSVar14 + 0x38;
    pSVar12 = pSVar12 + 0x38;
  } while (pSVar14 != this + 0xe0);
  uVar3 = *(undefined8 *)(param_1 + 0xf0);
  uVar6 = *(undefined8 *)(param_1 + 0xe0);
  uVar7 = *(undefined8 *)(param_1 + 0xe8);
  this[0xf8] = param_1[0xf8];
  uVar4 = *(undefined8 *)(param_1 + 0xfc);
  *(undefined8 *)(this + 0xf0) = uVar3;
  *(undefined8 *)(this + 0xfc) = uVar4;
  uVar8 = *(uint *)(param_1 + 0x130);
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined8 *)(this + 0xe0) = uVar6;
  *(undefined8 *)(this + 0xe8) = uVar7;
  uVar8 = *(uint *)(hash_table_size_primes + (ulong)uVar8 * 4);
  lVar10 = 1;
  *(undefined1 (*) [16])(this + 0x110) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x120) = (undefined1  [16])0x0;
  if (5 < uVar8) {
    do {
      if (uVar8 <= *(uint *)(hash_table_size_primes + lVar10 * 4)) {
        *(int *)(this + 0x130) = (int)lVar10;
        goto LAB_001156f8;
      }
      lVar10 = lVar10 + 1;
    } while (lVar10 != 0x1d);
    _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                     "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0);
  }
LAB_001156f8:
  if ((*(int *)(param_1 + 0x134) != 0) &&
     (plVar13 = *(long **)(param_1 + 0x120), plVar13 != (long *)0x0)) {
    do {
      HashMap<RID,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,unsigned_int>>>
      ::insert(aRStack_48,(uint *)(this + 0x108),(bool)((char)plVar13 + '\x10'));
      plVar13 = (long *)*plVar13;
    } while (plVar13 != (long *)0x0);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* RID_Alloc<GLES3::LightStorage::ShadowAtlas, false>::make_rid(GLES3::LightStorage::ShadowAtlas
   const&) */

ulong __thiscall
RID_Alloc<GLES3::LightStorage::ShadowAtlas,false>::make_rid
          (RID_Alloc<GLES3::LightStorage::ShadowAtlas,false> *this,ShadowAtlas *param_1)

{
  void *pvVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  ShadowAtlas *this_00;
  char *pcVar13;
  long lVar14;
  ulong uVar15;
  
  uVar9 = *(uint *)(this + 0x20);
  if (uVar9 == *(uint *)(this + 0x1c)) {
    if (uVar9 == 0) {
      lVar14 = 0;
      uVar15 = 8;
    }
    else {
      uVar15 = (ulong)((int)((ulong)uVar9 / (ulong)*(uint *)(this + 0x18)) + 1) << 3;
      lVar14 = ((ulong)uVar9 / (ulong)*(uint *)(this + 0x18)) * 8;
    }
    lVar3 = Memory::realloc_static(*(void **)(this + 8),uVar15,false);
    *(long *)(this + 8) = lVar3;
    uVar11 = Memory::alloc_static((ulong)*(uint *)(this + 0x18) * 0x140,false);
    pvVar1 = *(void **)(this + 0x10);
    *(undefined8 *)(lVar3 + lVar14) = uVar11;
    lVar4 = Memory::realloc_static(pvVar1,uVar15,false);
    *(long *)(this + 0x10) = lVar4;
    uVar11 = Memory::alloc_static((ulong)*(uint *)(this + 0x18) << 2,false);
    uVar6 = *(uint *)(this + 0x18);
    lVar3 = *(long *)(this + 0x10);
    *(undefined8 *)(lVar4 + lVar14) = uVar11;
    if (uVar6 != 0) {
      lVar4 = *(long *)(lVar3 + lVar14);
      lVar5 = 0;
      puVar10 = (undefined4 *)(*(long *)(*(long *)(this + 8) + lVar14) + 0x138);
      do {
        *puVar10 = 0xffffffff;
        puVar10 = puVar10 + 0x50;
        *(int *)(lVar4 + lVar5 * 4) = *(int *)(this + 0x20) + (int)lVar5;
        uVar6 = *(uint *)(this + 0x18);
        lVar5 = lVar5 + 1;
      } while ((uint)lVar5 < uVar6);
    }
    *(uint *)(this + 0x1c) = *(int *)(this + 0x1c) + uVar6;
    uVar9 = *(uint *)(this + 0x20);
  }
  else {
    lVar3 = *(long *)(this + 0x10);
    uVar6 = *(uint *)(this + 0x18);
  }
  uVar9 = *(uint *)(*(long *)(lVar3 + ((ulong)uVar9 / (ulong)uVar6) * 8) +
                   ((ulong)uVar9 % (ulong)uVar6) * 4);
  uVar15 = (ulong)uVar9;
  LOCK();
  UNLOCK();
  uVar7 = (int)RID_AllocBase::base_id + 1;
  uVar8 = uVar7 & 0x7fffffff;
  if (uVar8 != 0x7fffffff) {
    lVar14 = *(long *)(this + 8);
    RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
    *(uint *)((uVar15 % (ulong)uVar6) * 0x140 + *(long *)(lVar14 + (uVar15 / uVar6) * 8) + 0x138) =
         uVar8 | 0x80000000;
    *(int *)(this + 0x20) = *(int *)(this + 0x20) + 1;
    uVar12 = CONCAT44(uVar7,uVar9) & 0x7fffffffffffffff;
    if ((uVar12 != 0) && ((uint)uVar12 < *(uint *)(this + 0x1c))) {
      this_00 = (ShadowAtlas *)
                ((uVar15 % (ulong)*(uint *)(this + 0x18)) * 0x140 +
                *(long *)(lVar14 + (uVar15 / *(uint *)(this + 0x18)) * 8));
      if ((int)*(uint *)(this_00 + 0x138) < 0) {
        uVar9 = (uint)(uVar12 >> 0x20);
        if (uVar9 == (*(uint *)(this_00 + 0x138) & 0x7fffffff)) {
          *(uint *)(this_00 + 0x138) = uVar9;
          GLES3::LightStorage::ShadowAtlas::ShadowAtlas(this_00,param_1);
          return uVar12;
        }
        pcVar13 = "Attempting to initialize the wrong RID";
        uVar11 = 0xfc;
      }
      else {
        pcVar13 = "Initializing already initialized RID";
        uVar11 = 0xf8;
      }
      _err_print_error("get_or_null","./core/templates/rid_owner.h",uVar11,
                       "Method/function failed. Returning: nullptr",pcVar13,0,0);
    }
    _err_print_error("initialize_rid","./core/templates/rid_owner.h",0x128,
                     "Parameter \"mem\" is null.",0,0);
    return uVar12;
  }
  RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
  _err_print_error("_allocate_rid","./core/templates/rid_owner.h",0xa9,
                   "FATAL: Condition \"validator == 0x7FFFFFFF\" is true.",
                   "Overflow in RID validator",0,0);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



/* WARNING: Control flow encountered bad instruction data */
/* GLES3::LightStorage::ShadowAtlas::ShadowAtlas(GLES3::LightStorage::ShadowAtlas const&) */

void __thiscall
GLES3::LightStorage::ShadowAtlas::ShadowAtlas(ShadowAtlas *this,ShadowAtlas *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* RID_Alloc<GLES3::ReflectionAtlas, false>::~RID_Alloc() */

void __thiscall
RID_Alloc<GLES3::ReflectionAtlas,false>::~RID_Alloc(RID_Alloc<GLES3::ReflectionAtlas,false> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* RID_Alloc<GLES3::LightStorage::ShadowAtlas, false>::~RID_Alloc() */

void __thiscall
RID_Alloc<GLES3::LightStorage::ShadowAtlas,false>::~RID_Alloc
          (RID_Alloc<GLES3::LightStorage::ShadowAtlas,false> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* RID_Alloc<GLES3::LightmapInstance, false>::~RID_Alloc() */

void __thiscall
RID_Alloc<GLES3::LightmapInstance,false>::~RID_Alloc(RID_Alloc<GLES3::LightmapInstance,false> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* RID_Alloc<GLES3::Lightmap, true>::~RID_Alloc() */

void __thiscall RID_Alloc<GLES3::Lightmap,true>::~RID_Alloc(RID_Alloc<GLES3::Lightmap,true> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* RID_Alloc<GLES3::ReflectionProbeInstance, false>::~RID_Alloc() */

void __thiscall
RID_Alloc<GLES3::ReflectionProbeInstance,false>::~RID_Alloc
          (RID_Alloc<GLES3::ReflectionProbeInstance,false> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* RID_Alloc<GLES3::ReflectionProbe, true>::~RID_Alloc() */

void __thiscall
RID_Alloc<GLES3::ReflectionProbe,true>::~RID_Alloc(RID_Alloc<GLES3::ReflectionProbe,true> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* RID_Alloc<GLES3::LightInstance, false>::~RID_Alloc() */

void __thiscall
RID_Alloc<GLES3::LightInstance,false>::~RID_Alloc(RID_Alloc<GLES3::LightInstance,false> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* RID_Alloc<GLES3::Light, true>::~RID_Alloc() */

void __thiscall RID_Alloc<GLES3::Light,true>::~RID_Alloc(RID_Alloc<GLES3::Light,true> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


