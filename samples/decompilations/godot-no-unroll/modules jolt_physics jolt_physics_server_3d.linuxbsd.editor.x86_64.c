
/* JoltPhysicsServer3D::body_get_user_flags(RID) const */

undefined8 JoltPhysicsServer3D::body_get_user_flags(void)

{
  return 0;
}



/* JoltPhysicsServer3D::body_get_contacts_reported_depth_threshold(RID) const */

undefined8 JoltPhysicsServer3D::body_get_contacts_reported_depth_threshold(void)

{
  return 0;
}



/* JoltPhysicsServer3D::set_active(bool) */

void __thiscall JoltPhysicsServer3D::set_active(JoltPhysicsServer3D *this,bool param_1)

{
  this[0x3b9] = (JoltPhysicsServer3D)param_1;
  return;
}



/* JoltPhysicsServer3D::sync() */

void __thiscall JoltPhysicsServer3D::sync(JoltPhysicsServer3D *this)

{
  this[0x3bb] = (JoltPhysicsServer3D)0x1;
  return;
}



/* JoltPhysicsServer3D::end_sync() */

void __thiscall JoltPhysicsServer3D::end_sync(JoltPhysicsServer3D *this)

{
  this[0x3bb] = (JoltPhysicsServer3D)0x0;
  return;
}



/* JoltPhysicsServer3D::is_flushing_queries() const */

JoltPhysicsServer3D __thiscall JoltPhysicsServer3D::is_flushing_queries(JoltPhysicsServer3D *this)

{
  return this[0x3ba];
}



/* JoltPhysicsServer3D::get_process_info(PhysicsServer3D::ProcessInfo) */

undefined8 JoltPhysicsServer3D::get_process_info(void)

{
  return 0;
}



/* JoltPhysicsServer3D::joint_make_hinge_simple(RID, RID, Vector3 const&, Vector3 const&, RID,
   Vector3 const&, Vector3 const&) */

void JoltPhysicsServer3D::joint_make_hinge_simple(void)

{
  undefined4 uStack0000000000000008;
  
  uStack0000000000000008 = 0;
  _err_print_error("joint_make_hinge_simple","modules/jolt_physics/jolt_physics_server_3d.cpp",0x531
                   ,"Method/function failed.",
                   "Simple hinge joints are not supported when using Jolt Physics.",0);
  return;
}



/* JoltPhysicsServer3D::custom_shape_create() */

undefined8 JoltPhysicsServer3D::custom_shape_create(void)

{
  _err_print_error("custom_shape_create","modules/jolt_physics/jolt_physics_server_3d.cpp",0x83,
                   "Method/function failed. Returning: RID()","Custom shapes are not supported.",0,0
                  );
  return 0;
}



/* JoltPhysicsServer3D::body_set_user_flags(RID, unsigned int) */

void JoltPhysicsServer3D::body_set_user_flags(void)

{
  _err_print_error("body_set_user_flags","modules/jolt_physics/jolt_physics_server_3d.cpp",0x2b8,
                   "Body user flags are not supported. Any such value will be ignored.",0,1);
  return;
}



/* JoltPhysicsServer3D::body_set_contacts_reported_depth_threshold(RID, float) */

void JoltPhysicsServer3D::body_set_contacts_reported_depth_threshold(void)

{
  _err_print_error("body_set_contacts_reported_depth_threshold",
                   "modules/jolt_physics/jolt_physics_server_3d.cpp",0x378,
                   "Per-body contact depth threshold is not supported. Any such value will be ignored."
                   ,0,1);
  return;
}



/* JoltPhysicsServer3D::area_get_space(RID) const */

undefined8 __thiscall JoltPhysicsServer3D::area_get_space(JoltPhysicsServer3D *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x1ec))) {
    plVar3 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x1e8)) * 0x10 +
                     *(long *)(*(long *)(this + 0x1d8) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x1e8)) * 8));
    iVar1 = (int)plVar3[1];
    if (iVar1 == (int)(param_2 >> 0x20)) {
      lVar2 = *plVar3;
      if (lVar2 != 0) {
        lVar2 = *(long *)(lVar2 + 0x28);
        if (lVar2 == 0) {
          return 0;
        }
        return *(undefined8 *)(lVar2 + 0x40);
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("area_get_space","modules/jolt_physics/jolt_physics_server_3d.cpp",0x125,
                   "Parameter \"area\" is null.",0,0);
  return 0;
}



/* JoltPhysicsServer3D::area_get_shape_count(RID) const */

undefined4 __thiscall
JoltPhysicsServer3D::area_get_shape_count(JoltPhysicsServer3D *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x1ec))) {
    plVar3 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x1e8)) * 0x10 +
                     *(long *)(*(long *)(this + 0x1d8) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x1e8)) * 8));
    iVar1 = (int)plVar3[1];
    if (iVar1 == (int)(param_2 >> 0x20)) {
      lVar2 = *plVar3;
      if (lVar2 != 0) {
        return *(undefined4 *)(lVar2 + 8);
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("area_get_shape_count","modules/jolt_physics/jolt_physics_server_3d.cpp",0x15e,
                   "Parameter \"area\" is null.",0,0);
  return 0;
}



/* JoltPhysicsServer3D::area_get_collision_mask(RID) const */

undefined4 __thiscall
JoltPhysicsServer3D::area_get_collision_mask(JoltPhysicsServer3D *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x1ec))) {
    plVar3 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x1e8)) * 0x10 +
                     *(long *)(*(long *)(this + 0x1d8) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x1e8)) * 8));
    iVar1 = (int)plVar3[1];
    if (iVar1 == (int)(param_2 >> 0x20)) {
      lVar2 = *plVar3;
      if (lVar2 != 0) {
        return *(undefined4 *)(lVar2 + 0x38);
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("area_get_collision_mask","modules/jolt_physics/jolt_physics_server_3d.cpp",0x1c7
                   ,"Parameter \"area\" is null.",0,0);
  return 0;
}



/* JoltPhysicsServer3D::area_get_collision_layer(RID) const */

undefined4 __thiscall
JoltPhysicsServer3D::area_get_collision_layer(JoltPhysicsServer3D *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x1ec))) {
    plVar3 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x1e8)) * 0x10 +
                     *(long *)(*(long *)(this + 0x1d8) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x1e8)) * 8));
    iVar1 = (int)plVar3[1];
    if (iVar1 == (int)(param_2 >> 0x20)) {
      lVar2 = *plVar3;
      if (lVar2 != 0) {
        return *(undefined4 *)(lVar2 + 0x34);
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("area_get_collision_layer","modules/jolt_physics/jolt_physics_server_3d.cpp",
                   0x1d5,"Parameter \"area\" is null.",0,0);
  return 0;
}



/* JoltPhysicsServer3D::area_set_ray_pickable(RID, bool) */

void __thiscall
JoltPhysicsServer3D::area_set_ray_pickable
          (JoltPhysicsServer3D *this,ulong param_2,undefined1 param_3)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  if (param_2 != 0) {
    if ((uint)param_2 < *(uint *)(this + 0x1ec)) {
      plVar3 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x1e8)) * 0x10 +
                       *(long *)(*(long *)(this + 0x1d8) +
                                ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x1e8)) * 8));
      iVar1 = (int)plVar3[1];
      if (iVar1 == (int)(param_2 >> 0x20)) {
        lVar2 = *plVar3;
        if (lVar2 != 0) {
          *(undefined1 *)(lVar2 + 0x3d) = param_3;
          return;
        }
      }
      else if (iVar1 + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
  }
  _err_print_error("area_set_ray_pickable","modules/jolt_physics/jolt_physics_server_3d.cpp",0x1f1,
                   "Parameter \"area\" is null.",0,0);
  return;
}



/* JoltPhysicsServer3D::body_get_space(RID) const */

undefined8 __thiscall JoltPhysicsServer3D::body_get_space(JoltPhysicsServer3D *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x244))) {
    plVar3 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x240)) * 0x10 +
                     *(long *)(*(long *)(this + 0x230) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x240)) * 8));
    iVar1 = (int)plVar3[1];
    if (iVar1 == (int)(param_2 >> 0x20)) {
      lVar2 = *plVar3;
      if (lVar2 != 0) {
        lVar2 = *(long *)(lVar2 + 0x28);
        if (lVar2 == 0) {
          return 0;
        }
        return *(undefined8 *)(lVar2 + 0x40);
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("body_get_space","modules/jolt_physics/jolt_physics_server_3d.cpp",0x20d,
                   "Parameter \"body\" is null.",0,0);
  return 0;
}



/* JoltPhysicsServer3D::body_get_mode(RID) const */

undefined4 __thiscall JoltPhysicsServer3D::body_get_mode(JoltPhysicsServer3D *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x244))) {
    plVar3 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x240)) * 0x10 +
                     *(long *)(*(long *)(this + 0x230) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x240)) * 8));
    iVar1 = (int)plVar3[1];
    if (iVar1 == (int)(param_2 >> 0x20)) {
      lVar2 = *plVar3;
      if (lVar2 != 0) {
        return *(undefined4 *)(lVar2 + 0x1d0);
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("body_get_mode","modules/jolt_physics/jolt_physics_server_3d.cpp",0x221,
                   "Parameter \"body\" is null.",0,0);
  return 0;
}



/* JoltPhysicsServer3D::body_get_shape_count(RID) const */

undefined4 __thiscall
JoltPhysicsServer3D::body_get_shape_count(JoltPhysicsServer3D *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x244))) {
    plVar3 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x240)) * 0x10 +
                     *(long *)(*(long *)(this + 0x230) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x240)) * 8));
    iVar1 = (int)plVar3[1];
    if (iVar1 == (int)(param_2 >> 0x20)) {
      lVar2 = *plVar3;
      if (lVar2 != 0) {
        return *(undefined4 *)(lVar2 + 8);
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("body_get_shape_count","modules/jolt_physics/jolt_physics_server_3d.cpp",0x254,
                   "Parameter \"body\" is null.",0,0);
  return 0;
}



/* JoltPhysicsServer3D::body_get_object_instance_id(RID) const */

undefined8 __thiscall
JoltPhysicsServer3D::body_get_object_instance_id(JoltPhysicsServer3D *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x244))) {
    plVar3 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x240)) * 0x10 +
                     *(long *)(*(long *)(this + 0x230) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x240)) * 8));
    iVar1 = (int)plVar3[1];
    if (iVar1 == (int)(param_2 >> 0x20)) {
      lVar2 = *plVar3;
      if (lVar2 != 0) {
        return *(undefined8 *)(lVar2 + 0x20);
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("body_get_object_instance_id","modules/jolt_physics/jolt_physics_server_3d.cpp",
                   0x27a,"Parameter \"body\" is null.",0,0);
  return 0;
}



/* JoltPhysicsServer3D::body_get_collision_layer(RID) const */

undefined4 __thiscall
JoltPhysicsServer3D::body_get_collision_layer(JoltPhysicsServer3D *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x244))) {
    plVar3 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x240)) * 0x10 +
                     *(long *)(*(long *)(this + 0x230) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x240)) * 8));
    iVar1 = (int)plVar3[1];
    if (iVar1 == (int)(param_2 >> 0x20)) {
      lVar2 = *plVar3;
      if (lVar2 != 0) {
        return *(undefined4 *)(lVar2 + 0x34);
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("body_get_collision_layer","modules/jolt_physics/jolt_physics_server_3d.cpp",
                   0x296,"Parameter \"body\" is null.",0,0);
  return 0;
}



/* JoltPhysicsServer3D::body_get_collision_mask(RID) const */

undefined4 __thiscall
JoltPhysicsServer3D::body_get_collision_mask(JoltPhysicsServer3D *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x244))) {
    plVar3 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x240)) * 0x10 +
                     *(long *)(*(long *)(this + 0x230) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x240)) * 8));
    iVar1 = (int)plVar3[1];
    if (iVar1 == (int)(param_2 >> 0x20)) {
      lVar2 = *plVar3;
      if (lVar2 != 0) {
        return *(undefined4 *)(lVar2 + 0x38);
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("body_get_collision_mask","modules/jolt_physics/jolt_physics_server_3d.cpp",0x2a4
                   ,"Parameter \"body\" is null.",0,0);
  return 0;
}



/* JoltPhysicsServer3D::body_set_collision_priority(RID, float) */

void __thiscall
JoltPhysicsServer3D::body_set_collision_priority
          (undefined4 param_1,JoltPhysicsServer3D *this,ulong param_3)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(this + 0x244))) {
    plVar3 = (long *)(((param_3 & 0xffffffff) % (ulong)*(uint *)(this + 0x240)) * 0x10 +
                     *(long *)(*(long *)(this + 0x230) +
                              ((param_3 & 0xffffffff) / (ulong)*(uint *)(this + 0x240)) * 8));
    iVar1 = (int)plVar3[1];
    if (iVar1 == (int)(param_3 >> 0x20)) {
      lVar2 = *plVar3;
      if (lVar2 != 0) {
        *(undefined4 *)(lVar2 + 500) = param_1;
        return;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("body_set_collision_priority","modules/jolt_physics/jolt_physics_server_3d.cpp",
                   0x2ab,"Parameter \"body\" is null.",0,0);
  return;
}



/* JoltPhysicsServer3D::body_get_collision_priority(RID) const */

undefined4 __thiscall
JoltPhysicsServer3D::body_get_collision_priority(JoltPhysicsServer3D *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x244))) {
    plVar3 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x240)) * 0x10 +
                     *(long *)(*(long *)(this + 0x230) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x240)) * 8));
    iVar1 = (int)plVar3[1];
    if (iVar1 == (int)(param_2 >> 0x20)) {
      lVar2 = *plVar3;
      if (lVar2 != 0) {
        return *(undefined4 *)(lVar2 + 500);
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("body_get_collision_priority","modules/jolt_physics/jolt_physics_server_3d.cpp",
                   0x2b2,"Parameter \"body\" is null.",0,0);
  return 0;
}



/* JoltPhysicsServer3D::body_get_max_contacts_reported(RID) const */

undefined4 __thiscall
JoltPhysicsServer3D::body_get_max_contacts_reported(JoltPhysicsServer3D *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x244))) {
    plVar3 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x240)) * 0x10 +
                     *(long *)(*(long *)(this + 0x230) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x240)) * 8));
    iVar1 = (int)plVar3[1];
    if (iVar1 == (int)(param_2 >> 0x20)) {
      lVar2 = *plVar3;
      if (lVar2 != 0) {
        return *(undefined4 *)(lVar2 + 0xd8);
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("body_get_max_contacts_reported",
                   "modules/jolt_physics/jolt_physics_server_3d.cpp",0x372,
                   "Parameter \"body\" is null.",0,0);
  return 0;
}



/* JoltPhysicsServer3D::body_is_omitting_force_integration(RID) const */

undefined1 __thiscall
JoltPhysicsServer3D::body_is_omitting_force_integration(JoltPhysicsServer3D *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x244))) {
    plVar3 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x240)) * 0x10 +
                     *(long *)(*(long *)(this + 0x230) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x240)) * 8));
    iVar1 = (int)plVar3[1];
    if (iVar1 == (int)(param_2 >> 0x20)) {
      lVar2 = *plVar3;
      if (lVar2 != 0) {
        return *(undefined1 *)(lVar2 + 0x203);
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("body_is_omitting_force_integration",
                   "modules/jolt_physics/jolt_physics_server_3d.cpp",0x388,
                   "Parameter \"body\" is null.",0,0);
  return 0;
}



/* JoltPhysicsServer3D::body_set_ray_pickable(RID, bool) */

void __thiscall
JoltPhysicsServer3D::body_set_ray_pickable
          (JoltPhysicsServer3D *this,ulong param_2,undefined1 param_3)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  if (param_2 != 0) {
    if ((uint)param_2 < *(uint *)(this + 0x244)) {
      plVar3 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x240)) * 0x10 +
                       *(long *)(*(long *)(this + 0x230) +
                                ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x240)) * 8));
      iVar1 = (int)plVar3[1];
      if (iVar1 == (int)(param_2 >> 0x20)) {
        lVar2 = *plVar3;
        if (lVar2 != 0) {
          *(undefined1 *)(lVar2 + 0x3d) = param_3;
          return;
        }
      }
      else if (iVar1 + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
  }
  _err_print_error("body_set_ray_pickable","modules/jolt_physics/jolt_physics_server_3d.cpp",0x39d,
                   "Parameter \"body\" is null.",0,0);
  return;
}



/* JoltPhysicsServer3D::shape_set_data(RID, Variant const&) */

void __thiscall
JoltPhysicsServer3D::shape_set_data(JoltPhysicsServer3D *this,ulong param_2,undefined8 param_3)

{
  int iVar1;
  long *plVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x2f4))) {
    plVar2 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x2f0)) * 0x10 +
                     *(long *)(*(long *)(this + 0x2e0) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x2f0)) * 8));
    iVar1 = (int)plVar2[1];
    if (iVar1 == (int)(param_2 >> 0x20)) {
      plVar2 = (long *)*plVar2;
      if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00100ea6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x30))(plVar2,param_3);
        return;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("shape_set_data","modules/jolt_physics/jolt_physics_server_3d.cpp",0x88,
                   "Parameter \"shape\" is null.",0,0);
  return;
}



/* JoltPhysicsServer3D::shape_get_data(RID) const */

undefined4 * JoltPhysicsServer3D::shape_get_data(undefined4 *param_1,long param_2,ulong param_3)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long in_FS_OFFSET;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(param_2 + 0x2f4))) {
    plVar3 = (long *)(((param_3 & 0xffffffff) % (ulong)*(uint *)(param_2 + 0x2f0)) * 0x10 +
                     *(long *)(*(long *)(param_2 + 0x2e0) +
                              ((param_3 & 0xffffffff) / (ulong)*(uint *)(param_2 + 0x2f0)) * 8));
    iVar1 = (int)plVar3[1];
    if (iVar1 == (int)(param_3 >> 0x20)) {
      plVar3 = (long *)*plVar3;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x28))();
        goto LAB_00100f82;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("shape_get_data","modules/jolt_physics/jolt_physics_server_3d.cpp",0x8f,
                   "Parameter \"shape\" is null.",0,0);
  *param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 2) = (undefined1  [16])0x0;
LAB_00100f82:
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltPhysicsServer3D::shape_get_type(RID) const */

undefined8 __thiscall JoltPhysicsServer3D::shape_get_type(JoltPhysicsServer3D *this,ulong param_2)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x2f4))) {
    plVar3 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x2f0)) * 0x10 +
                     *(long *)(*(long *)(this + 0x2e0) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x2f0)) * 8));
    iVar1 = (int)plVar3[1];
    if (iVar1 == (int)(param_2 >> 0x20)) {
      plVar3 = (long *)*plVar3;
      if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00101070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)(*plVar3 + 0x18))();
        return uVar2;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("shape_get_type","modules/jolt_physics/jolt_physics_server_3d.cpp",0x9d,
                   "Parameter \"shape\" is null.",0,0);
  return 10;
}



/* JoltPhysicsServer3D::shape_set_margin(RID, float) */

void JoltPhysicsServer3D::shape_set_margin(long param_1,ulong param_2)

{
  int iVar1;
  long *plVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(param_1 + 0x2f4))) {
    plVar2 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(param_1 + 0x2f0)) * 0x10 +
                     *(long *)(*(long *)(param_1 + 0x2e0) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(param_1 + 0x2f0)) * 8));
    iVar1 = (int)plVar2[1];
    if (iVar1 == (int)(param_2 >> 0x20)) {
      plVar2 = (long *)*plVar2;
      if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00101140. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x40))();
        return;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("shape_set_margin","modules/jolt_physics/jolt_physics_server_3d.cpp",0xa4,
                   "Parameter \"shape\" is null.",0,0);
  return;
}



/* JoltPhysicsServer3D::shape_get_margin(RID) const */

undefined8 __thiscall JoltPhysicsServer3D::shape_get_margin(JoltPhysicsServer3D *this,ulong param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x2f4))) {
    plVar2 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x2f0)) * 0x10 +
                     *(long *)(*(long *)(this + 0x2e0) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x2f0)) * 8));
    iVar1 = (int)plVar2[1];
    if (iVar1 == (int)(param_2 >> 0x20)) {
      plVar2 = (long *)*plVar2;
      if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00101210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (**(code **)(*plVar2 + 0x38))();
        return uVar3;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("shape_get_margin","modules/jolt_physics/jolt_physics_server_3d.cpp",0xab,
                   "Parameter \"shape\" is null.",0,0);
  return 0;
}



/* JoltPhysicsServer3D::pin_joint_get_local_a(RID) const */

undefined1  [16] __thiscall
JoltPhysicsServer3D::pin_joint_get_local_a(JoltPhysicsServer3D *this,ulong param_2)

{
  long lVar1;
  int iVar2;
  char *pcVar3;
  long *plVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined1 auVar6 [16];
  undefined8 local_28;
  undefined4 local_20;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 == 0) || (*(uint *)(this + 0x34c) <= (uint)param_2)) {
LAB_00101350:
    uVar5 = 0x502;
    pcVar3 = "Parameter \"joint\" is null.";
  }
  else {
    plVar4 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x348)) * 0x10 +
                     *(long *)(*(long *)(this + 0x338) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x348)) * 8));
    iVar2 = (int)plVar4[1];
    if (iVar2 != (int)(param_2 >> 0x20)) {
      if (iVar2 + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
      goto LAB_00101350;
    }
    plVar4 = (long *)*plVar4;
    if (plVar4 == (long *)0x0) goto LAB_00101350;
    iVar2 = (**(code **)(*plVar4 + 0x10))(plVar4);
    if (iVar2 == 0) {
      local_28 = *(undefined8 *)((long)plVar4 + 0x5c);
      local_20 = *(undefined4 *)((long)plVar4 + 100);
      goto LAB_00101314;
    }
    uVar5 = 0x504;
    pcVar3 = "Condition \"joint->get_type() != JOINT_TYPE_PIN\" is true. Returning: Vector3()";
  }
  _err_print_error("pin_joint_get_local_a","modules/jolt_physics/jolt_physics_server_3d.cpp",uVar5,
                   pcVar3,0,0);
  local_20 = 0;
  local_28 = 0;
LAB_00101314:
  auVar6._8_4_ = local_20;
  auVar6._0_8_ = local_28;
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar6._12_4_ = 0;
    return auVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltPhysicsServer3D::pin_joint_get_local_b(RID) const */

undefined1  [16] __thiscall
JoltPhysicsServer3D::pin_joint_get_local_b(JoltPhysicsServer3D *this,ulong param_2)

{
  long lVar1;
  int iVar2;
  char *pcVar3;
  long *plVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined1 auVar6 [16];
  undefined8 local_28;
  undefined4 local_20;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 == 0) || (*(uint *)(this + 0x34c) <= (uint)param_2)) {
LAB_001014b0:
    uVar5 = 0x516;
    pcVar3 = "Parameter \"joint\" is null.";
  }
  else {
    plVar4 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x348)) * 0x10 +
                     *(long *)(*(long *)(this + 0x338) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x348)) * 8));
    iVar2 = (int)plVar4[1];
    if (iVar2 != (int)(param_2 >> 0x20)) {
      if (iVar2 + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
      goto LAB_001014b0;
    }
    plVar4 = (long *)*plVar4;
    if (plVar4 == (long *)0x0) goto LAB_001014b0;
    iVar2 = (**(code **)(*plVar4 + 0x10))(plVar4);
    if (iVar2 == 0) {
      local_28 = *(undefined8 *)((long)plVar4 + 0x8c);
      local_20 = *(undefined4 *)((long)plVar4 + 0x94);
      goto LAB_0010147a;
    }
    uVar5 = 0x518;
    pcVar3 = "Condition \"joint->get_type() != JOINT_TYPE_PIN\" is true. Returning: Vector3()";
  }
  _err_print_error("pin_joint_get_local_b","modules/jolt_physics/jolt_physics_server_3d.cpp",uVar5,
                   pcVar3,0,0);
  local_20 = 0;
  local_28 = 0;
LAB_0010147a:
  auVar6._8_4_ = local_20;
  auVar6._0_8_ = local_28;
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar6._12_4_ = 0;
    return auVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltPhysicsServer3D::joint_get_type(RID) const */

undefined8 __thiscall JoltPhysicsServer3D::joint_get_type(JoltPhysicsServer3D *this,ulong param_2)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x34c))) {
    plVar3 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x348)) * 0x10 +
                     *(long *)(*(long *)(this + 0x338) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x348)) * 8));
    iVar1 = (int)plVar3[1];
    if (iVar1 == (int)(param_2 >> 0x20)) {
      plVar3 = (long *)*plVar3;
      if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x001015a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)(*plVar3 + 0x10))();
        return uVar2;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("joint_get_type","modules/jolt_physics/jolt_physics_server_3d.cpp",0x5e4,
                   "Parameter \"joint\" is null.",0,0);
  return 0;
}



/* JoltPhysicsServer3D::joint_is_disabled_collisions_between_bodies(RID) const */

undefined1 __thiscall
JoltPhysicsServer3D::joint_is_disabled_collisions_between_bodies
          (JoltPhysicsServer3D *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x34c))) {
    plVar3 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x348)) * 0x10 +
                     *(long *)(*(long *)(this + 0x338) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x348)) * 8));
    iVar1 = (int)plVar3[1];
    if (iVar1 == (int)(param_2 >> 0x20)) {
      lVar2 = *plVar3;
      if (lVar2 != 0) {
        return *(undefined1 *)(lVar2 + 9);
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("joint_is_disabled_collisions_between_bodies",
                   "modules/jolt_physics/jolt_physics_server_3d.cpp",0x600,
                   "Parameter \"joint\" is null.",0,0);
  return 0;
}



/* JoltPhysicsServer3D::joint_clear(RID) */

void __thiscall JoltPhysicsServer3D::joint_clear(JoltPhysicsServer3D *this,ulong param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  undefined8 *puVar6;
  char *pcVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  char *pcVar10;
  char *pcVar11;
  undefined1 auVar12 [16];
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x34c))) {
    puVar8 = (undefined8 *)
             (((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x348)) * 0x10 +
             *(long *)(*(long *)(this + 0x338) +
                      ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x348)) * 8));
    iVar1 = *(int *)(puVar8 + 1);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      plVar2 = (long *)*puVar8;
      if (plVar2 != (long *)0x0) {
        iVar5 = (**(code **)(*plVar2 + 0x10))(plVar2);
        if (iVar5 == 5) {
          return;
        }
        puVar6 = (undefined8 *)operator_new(0x98,"");
        uVar4 = _LC50;
        *(undefined1 (*) [16])(puVar6 + 3) = (undefined1  [16])0x0;
        auVar12 = ZEXT416(_LC50);
        *puVar6 = JoltShape3D::set_solver_bias;
        puVar6[6] = 0;
        lVar3 = plVar2[6];
        *(undefined2 *)(puVar6 + 1) = 1;
        puVar6[6] = lVar3;
        puVar8 = (undefined8 *)*plVar2;
        *(undefined1 (*) [16])(puVar6 + 7) = auVar12;
        *(undefined1 (*) [16])(puVar6 + 9) = auVar12;
        *(uint *)(puVar6 + 0xb) = uVar4;
        *(undefined1 (*) [16])(puVar6 + 0xd) = auVar12;
        *(undefined1 (*) [16])(puVar6 + 0xf) = auVar12;
        *(uint *)(puVar6 + 0x11) = uVar4;
        *(undefined8 *)((long)puVar6 + 0xc) = 0;
        puVar6[5] = 0;
        *(undefined8 *)((long)puVar6 + 0x5c) = 0;
        *(undefined4 *)((long)puVar6 + 100) = 0;
        *(undefined8 *)((long)puVar6 + 0x8c) = 0;
        *(undefined4 *)((long)puVar6 + 0x94) = 0;
        (*(code *)*puVar8)(plVar2);
        Memory::free_static(plVar2,false);
        if ((uint)param_2 < *(uint *)(this + 0x34c)) {
          puVar8 = (undefined8 *)
                   (((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x348)) * 0x10 +
                   *(long *)(*(long *)(this + 0x338) +
                            ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x348)) * 8));
          iVar5 = *(int *)(puVar8 + 1);
          if (iVar1 == iVar5) {
            *puVar8 = puVar6;
            return;
          }
          if (iVar5 + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                             "Method/function failed. Returning: nullptr",
                             "Attempting to use an uninitialized RID",0,0);
          }
        }
        pcVar10 = "./core/templates/rid_owner.h";
        pcVar7 = "Parameter \"ptr\" is null.";
        uVar9 = 0x1ee;
        pcVar11 = "replace";
        goto LAB_001018c0;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  pcVar7 = "Parameter \"joint\" is null.";
  uVar9 = 0x4c3;
  pcVar10 = "modules/jolt_physics/jolt_physics_server_3d.cpp";
  pcVar11 = "joint_clear";
LAB_001018c0:
  _err_print_error(pcVar11,pcVar10,uVar9,pcVar7,0,0);
  return;
}



/* JoltPhysicsServer3D::body_attach_object_instance_id(RID, ObjectID) */

void __thiscall
JoltPhysicsServer3D::body_attach_object_instance_id
          (JoltPhysicsServer3D *this,ulong param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  
  if (param_2 != 0) {
    iVar3 = (int)(param_2 >> 0x20);
    if ((uint)param_2 < *(uint *)(this + 0x244)) {
      plVar4 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x240)) * 0x10 +
                       *(long *)(*(long *)(this + 0x230) +
                                ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x240)) * 8));
      iVar1 = (int)plVar4[1];
      if (iVar1 == iVar3) {
        lVar2 = *plVar4;
        if (lVar2 != 0) goto LAB_001019de;
      }
      else if (iVar1 + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
    if ((uint)param_2 < *(uint *)(this + 0x29c)) {
      plVar4 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x298)) * 0x10 +
                       *(long *)(*(long *)(this + 0x288) +
                                ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x298)) * 8));
      iVar1 = (int)plVar4[1];
      if (iVar1 == iVar3) {
        lVar2 = *plVar4;
        if (lVar2 != 0) {
LAB_001019de:
          *(undefined8 *)(lVar2 + 0x20) = param_3;
          return;
        }
      }
      else if (iVar1 + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
  }
  _err_print_error("body_attach_object_instance_id",
                   "modules/jolt_physics/jolt_physics_server_3d.cpp",0x274,"Method/function failed."
                   ,0,0);
  return;
}



/* JoltPhysicsServer3D::soft_body_get_space(RID) const */

undefined8 __thiscall
JoltPhysicsServer3D::soft_body_get_space(JoltPhysicsServer3D *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x29c))) {
    plVar3 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x298)) * 0x10 +
                     *(long *)(*(long *)(this + 0x288) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x298)) * 8));
    iVar1 = (int)plVar3[1];
    if (iVar1 == (int)(param_2 >> 0x20)) {
      lVar2 = *plVar3;
      if (lVar2 != 0) {
        lVar2 = *(long *)(lVar2 + 0x28);
        if (lVar2 == 0) {
          return 0;
        }
        return *(undefined8 *)(lVar2 + 0x40);
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("soft_body_get_space","modules/jolt_physics/jolt_physics_server_3d.cpp",0x3d7,
                   "Parameter \"body\" is null.",0,0);
  return 0;
}



/* JoltPhysicsServer3D::soft_body_get_collision_layer(RID) const */

undefined4 __thiscall
JoltPhysicsServer3D::soft_body_get_collision_layer(JoltPhysicsServer3D *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x29c))) {
    plVar3 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x298)) * 0x10 +
                     *(long *)(*(long *)(this + 0x288) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x298)) * 8));
    iVar1 = (int)plVar3[1];
    if (iVar1 == (int)(param_2 >> 0x20)) {
      lVar2 = *plVar3;
      if (lVar2 != 0) {
        return *(undefined4 *)(lVar2 + 0x34);
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("soft_body_get_collision_layer","modules/jolt_physics/jolt_physics_server_3d.cpp"
                   ,0x3f9,"Parameter \"body\" is null.",0,0);
  return 0;
}



/* JoltPhysicsServer3D::soft_body_get_collision_mask(RID) const */

undefined4 __thiscall
JoltPhysicsServer3D::soft_body_get_collision_mask(JoltPhysicsServer3D *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x29c))) {
    plVar3 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x298)) * 0x10 +
                     *(long *)(*(long *)(this + 0x288) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x298)) * 8));
    iVar1 = (int)plVar3[1];
    if (iVar1 == (int)(param_2 >> 0x20)) {
      lVar2 = *plVar3;
      if (lVar2 != 0) {
        return *(undefined4 *)(lVar2 + 0x38);
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("soft_body_get_collision_mask","modules/jolt_physics/jolt_physics_server_3d.cpp",
                   0x407,"Parameter \"body\" is null.",0,0);
  return 0;
}



/* JoltPhysicsServer3D::soft_body_set_ray_pickable(RID, bool) */

void __thiscall
JoltPhysicsServer3D::soft_body_set_ray_pickable
          (JoltPhysicsServer3D *this,ulong param_2,undefined1 param_3)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  if (param_2 != 0) {
    if ((uint)param_2 < *(uint *)(this + 0x29c)) {
      plVar3 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x298)) * 0x10 +
                       *(long *)(*(long *)(this + 0x288) +
                                ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x298)) * 8));
      iVar1 = (int)plVar3[1];
      if (iVar1 == (int)(param_2 >> 0x20)) {
        lVar2 = *plVar3;
        if (lVar2 != 0) {
          *(undefined1 *)(lVar2 + 0x3d) = param_3;
          return;
        }
      }
      else if (iVar1 + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
  }
  _err_print_error("soft_body_set_ray_pickable","modules/jolt_physics/jolt_physics_server_3d.cpp",
                   0x43a,"Parameter \"body\" is null.",0,0);
  return;
}



/* JoltPhysicsServer3D::soft_body_get_simulation_precision(RID) const */

undefined4 __thiscall
JoltPhysicsServer3D::soft_body_get_simulation_precision(JoltPhysicsServer3D *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x29c))) {
    plVar3 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x298)) * 0x10 +
                     *(long *)(*(long *)(this + 0x288) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x298)) * 8));
    iVar1 = (int)plVar3[1];
    if (iVar1 == (int)(param_2 >> 0x20)) {
      lVar2 = *plVar3;
      if (lVar2 != 0) {
        return *(undefined4 *)(lVar2 + 0xb0);
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("soft_body_get_simulation_precision",
                   "modules/jolt_physics/jolt_physics_server_3d.cpp",0x448,
                   "Parameter \"body\" is null.",0,0);
  return 0;
}



/* JoltPhysicsServer3D::soft_body_get_total_mass(RID) const */

undefined4 __thiscall
JoltPhysicsServer3D::soft_body_get_total_mass(JoltPhysicsServer3D *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x29c))) {
    plVar3 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x298)) * 0x10 +
                     *(long *)(*(long *)(this + 0x288) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x298)) * 8));
    iVar1 = (int)plVar3[1];
    if (iVar1 == (int)(param_2 >> 0x20)) {
      lVar2 = *plVar3;
      if (lVar2 != 0) {
        return *(undefined4 *)(lVar2 + 0xa0);
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("soft_body_get_total_mass","modules/jolt_physics/jolt_physics_server_3d.cpp",
                   0x456,"Parameter \"body\" is null.",0,0);
  return 0;
}



/* JoltPhysicsServer3D::soft_body_get_pressure_coefficient(RID) const */

undefined4 __thiscall
JoltPhysicsServer3D::soft_body_get_pressure_coefficient(JoltPhysicsServer3D *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x29c))) {
    plVar3 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x298)) * 0x10 +
                     *(long *)(*(long *)(this + 0x288) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x298)) * 8));
    iVar1 = (int)plVar3[1];
    if (iVar1 == (int)(param_2 >> 0x20)) {
      lVar2 = *plVar3;
      if (lVar2 != 0) {
        return *(undefined4 *)(lVar2 + 0xa4);
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("soft_body_get_pressure_coefficient",
                   "modules/jolt_physics/jolt_physics_server_3d.cpp",0x472,
                   "Parameter \"body\" is null.",0,0);
  return 0;
}



/* JoltPhysicsServer3D::soft_body_get_damping_coefficient(RID) const */

undefined4 __thiscall
JoltPhysicsServer3D::soft_body_get_damping_coefficient(JoltPhysicsServer3D *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x29c))) {
    plVar3 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x298)) * 0x10 +
                     *(long *)(*(long *)(this + 0x288) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x298)) * 8));
    iVar1 = (int)plVar3[1];
    if (iVar1 == (int)(param_2 >> 0x20)) {
      lVar2 = *plVar3;
      if (lVar2 != 0) {
        return *(undefined4 *)(lVar2 + 0xa8);
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("soft_body_get_damping_coefficient",
                   "modules/jolt_physics/jolt_physics_server_3d.cpp",0x480,
                   "Parameter \"body\" is null.",0,0);
  return 0;
}



/* JoltPhysicsServer3D::shape_set_custom_solver_bias(RID, float) */

void __thiscall
JoltPhysicsServer3D::shape_set_custom_solver_bias
          (float param_1,JoltPhysicsServer3D *this,ulong param_3)

{
  int iVar1;
  long *plVar2;
  
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(this + 0x2f4))) {
    plVar2 = (long *)(((param_3 & 0xffffffff) % (ulong)*(uint *)(this + 0x2f0)) * 0x10 +
                     *(long *)(*(long *)(this + 0x2e0) +
                              ((param_3 & 0xffffffff) / (ulong)*(uint *)(this + 0x2f0)) * 8));
    iVar1 = (int)plVar2[1];
    if (iVar1 == (int)(param_3 >> 0x20)) {
      if (*plVar2 != 0) {
        JoltShape3D::set_solver_bias(param_1);
        return;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("shape_set_custom_solver_bias","modules/jolt_physics/jolt_physics_server_3d.cpp",
                   0x96,"Parameter \"shape\" is null.",0,0);
  return;
}



/* JoltPhysicsServer3D::shape_get_custom_solver_bias(RID) const */

undefined8 __thiscall
JoltPhysicsServer3D::shape_get_custom_solver_bias(JoltPhysicsServer3D *this,ulong param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x2f4))) {
    plVar2 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x2f0)) * 0x10 +
                     *(long *)(*(long *)(this + 0x2e0) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x2f0)) * 8));
    iVar1 = (int)plVar2[1];
    if (iVar1 == (int)(param_2 >> 0x20)) {
      if (*plVar2 != 0) {
        uVar3 = JoltShape3D::get_solver_bias();
        return uVar3;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("shape_get_custom_solver_bias","modules/jolt_physics/jolt_physics_server_3d.cpp",
                   0xb2,"Parameter \"shape\" is null.",0,0);
  return 0;
}



/* JoltPhysicsServer3D::area_set_space(RID, RID) */

void __thiscall
JoltPhysicsServer3D::area_set_space(JoltPhysicsServer3D *this,ulong param_2,ulong param_3)

{
  int iVar1;
  JoltSpace3D *pJVar2;
  undefined8 *puVar3;
  long *plVar4;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x1ec))) {
    puVar3 = (undefined8 *)
             (((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x1e8)) * 0x10 +
             *(long *)(*(long *)(this + 0x1d8) +
                      ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x1e8)) * 8));
    iVar1 = *(int *)(puVar3 + 1);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      pJVar2 = (JoltSpace3D *)*puVar3;
      if (pJVar2 != (JoltSpace3D *)0x0) {
        if (param_3 == 0) {
LAB_001023da:
          JoltObject3D::set_space(pJVar2);
          return;
        }
        if ((uint)param_3 < *(uint *)(this + 0x194)) {
          plVar4 = (long *)(((param_3 & 0xffffffff) % (ulong)*(uint *)(this + 400)) * 0x10 +
                           *(long *)(*(long *)(this + 0x180) +
                                    ((param_3 & 0xffffffff) / (ulong)*(uint *)(this + 400)) * 8));
          iVar1 = (int)plVar4[1];
          if (iVar1 == (int)(param_3 >> 0x20)) {
            if (*plVar4 != 0) goto LAB_001023da;
          }
          else if (iVar1 + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                             "Method/function failed. Returning: nullptr",
                             "Attempting to use an uninitialized RID",0,0);
          }
        }
        _err_print_error("area_set_space","modules/jolt_physics/jolt_physics_server_3d.cpp",0x11d,
                         "Parameter \"space\" is null.",0,0);
        return;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("area_set_space","modules/jolt_physics/jolt_physics_server_3d.cpp",0x117,
                   "Parameter \"area\" is null.",0,0);
  return;
}



/* JoltPhysicsServer3D::body_set_space(RID, RID) */

void __thiscall
JoltPhysicsServer3D::body_set_space(JoltPhysicsServer3D *this,ulong param_2,ulong param_3)

{
  int iVar1;
  JoltSpace3D *pJVar2;
  undefined8 *puVar3;
  long *plVar4;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x244))) {
    puVar3 = (undefined8 *)
             (((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x240)) * 0x10 +
             *(long *)(*(long *)(this + 0x230) +
                      ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x240)) * 8));
    iVar1 = *(int *)(puVar3 + 1);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      pJVar2 = (JoltSpace3D *)*puVar3;
      if (pJVar2 != (JoltSpace3D *)0x0) {
        if (param_3 == 0) {
LAB_0010257a:
          JoltObject3D::set_space(pJVar2);
          return;
        }
        if ((uint)param_3 < *(uint *)(this + 0x194)) {
          plVar4 = (long *)(((param_3 & 0xffffffff) % (ulong)*(uint *)(this + 400)) * 0x10 +
                           *(long *)(*(long *)(this + 0x180) +
                                    ((param_3 & 0xffffffff) / (ulong)*(uint *)(this + 400)) * 8));
          iVar1 = (int)plVar4[1];
          if (iVar1 == (int)(param_3 >> 0x20)) {
            if (*plVar4 != 0) goto LAB_0010257a;
          }
          else if (iVar1 + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                             "Method/function failed. Returning: nullptr",
                             "Attempting to use an uninitialized RID",0,0);
          }
        }
        _err_print_error("body_set_space","modules/jolt_physics/jolt_physics_server_3d.cpp",0x205,
                         "Parameter \"space\" is null.",0,0);
        return;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("body_set_space","modules/jolt_physics/jolt_physics_server_3d.cpp",0x1ff,
                   "Parameter \"body\" is null.",0,0);
  return;
}



/* JoltPhysicsServer3D::soft_body_set_space(RID, RID) */

void __thiscall
JoltPhysicsServer3D::soft_body_set_space(JoltPhysicsServer3D *this,ulong param_2,ulong param_3)

{
  int iVar1;
  JoltSpace3D *pJVar2;
  undefined8 *puVar3;
  long *plVar4;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x29c))) {
    puVar3 = (undefined8 *)
             (((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x298)) * 0x10 +
             *(long *)(*(long *)(this + 0x288) +
                      ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x298)) * 8));
    iVar1 = *(int *)(puVar3 + 1);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      pJVar2 = (JoltSpace3D *)*puVar3;
      if (pJVar2 != (JoltSpace3D *)0x0) {
        if (param_3 == 0) {
LAB_0010271a:
          JoltObject3D::set_space(pJVar2);
          return;
        }
        if ((uint)param_3 < *(uint *)(this + 0x194)) {
          plVar4 = (long *)(((param_3 & 0xffffffff) % (ulong)*(uint *)(this + 400)) * 0x10 +
                           *(long *)(*(long *)(this + 0x180) +
                                    ((param_3 & 0xffffffff) / (ulong)*(uint *)(this + 400)) * 8));
          iVar1 = (int)plVar4[1];
          if (iVar1 == (int)(param_3 >> 0x20)) {
            if (*plVar4 != 0) goto LAB_0010271a;
          }
          else if (iVar1 + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                             "Method/function failed. Returning: nullptr",
                             "Attempting to use an uninitialized RID",0,0);
          }
        }
        _err_print_error("soft_body_set_space","modules/jolt_physics/jolt_physics_server_3d.cpp",
                         0x3cf,"Parameter \"space\" is null.",0,0);
        return;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("soft_body_set_space","modules/jolt_physics/jolt_physics_server_3d.cpp",0x3c9,
                   "Parameter \"body\" is null.",0,0);
  return;
}



/* JoltPhysicsServer3D::space_set_param(RID, PhysicsServer3D::SpaceParameter, float) */

void __thiscall
JoltPhysicsServer3D::space_set_param
          (float param_1,JoltPhysicsServer3D *this,ulong param_3,undefined4 param_4)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  if (param_3 != 0) {
    if ((uint)param_3 < *(uint *)(this + 0x194)) {
      plVar3 = (long *)(((param_3 & 0xffffffff) % (ulong)*(uint *)(this + 400)) * 0x10 +
                       *(long *)(*(long *)(this + 0x180) +
                                ((param_3 & 0xffffffff) / (ulong)*(uint *)(this + 400)) * 8));
      iVar1 = (int)plVar3[1];
      if (iVar1 == (int)(param_3 >> 0x20)) {
        lVar2 = *plVar3;
        if (lVar2 != 0) {
          JoltSpace3D::set_param((double)param_1,lVar2,param_4);
          return;
        }
      }
      else if (iVar1 + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
  }
  _err_print_error("space_set_param","modules/jolt_physics/jolt_physics_server_3d.cpp",0xdb,
                   "Parameter \"space\" is null.",0,0);
  return;
}



/* JoltPhysicsServer3D::space_get_param(RID, PhysicsServer3D::SpaceParameter) const */

undefined8 __thiscall
JoltPhysicsServer3D::space_get_param(JoltPhysicsServer3D *this,ulong param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 extraout_XMM0_Qb;
  
  if (param_2 != 0) {
    if ((uint)param_2 < *(uint *)(this + 0x194)) {
      plVar3 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 400)) * 0x10 +
                       *(long *)(*(long *)(this + 0x180) +
                                ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 400)) * 8));
      iVar1 = (int)plVar3[1];
      if (iVar1 == (int)(param_2 >> 0x20)) {
        lVar2 = *plVar3;
        if (lVar2 != 0) {
          auVar4._0_8_ = (double)JoltSpace3D::get_param(lVar2,param_3);
          auVar4._8_8_ = extraout_XMM0_Qb;
          auVar5._4_12_ = auVar4._4_12_;
          auVar5._0_4_ = (float)auVar4._0_8_;
          return auVar5._0_8_;
        }
      }
      else if (iVar1 + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
  }
  _err_print_error("space_get_param","modules/jolt_physics/jolt_physics_server_3d.cpp",0xe2,
                   "Parameter \"space\" is null.",0,0);
  return 0;
}



/* JoltPhysicsServer3D::space_get_direct_state(RID) */

undefined8 __thiscall
JoltPhysicsServer3D::space_get_direct_state(JoltPhysicsServer3D *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x194))) {
    plVar4 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 400)) * 0x10 +
                     *(long *)(*(long *)(this + 0x180) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 400)) * 8));
    iVar1 = (int)plVar4[1];
    if (iVar1 == (int)(param_2 >> 0x20)) {
      lVar2 = *plVar4;
      if (lVar2 != 0) {
        if (((this[0x3b8] == (JoltPhysicsServer3D)0x0) || (this[0x3bb] != (JoltPhysicsServer3D)0x0))
           && (*(char *)(lVar2 + 0x89) == '\0')) {
          uVar3 = JoltSpace3D::get_direct_state();
          return uVar3;
        }
        _err_print_error("space_get_direct_state","modules/jolt_physics/jolt_physics_server_3d.cpp",
                         0xea,
                         "Condition \"(on_separate_thread && !doing_sync) || space->is_stepping()\" is true. Returning: nullptr"
                         ,
                         "Space state is inaccessible right now, wait for iteration or physics process notification."
                         ,0,0);
        return 0;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("space_get_direct_state","modules/jolt_physics/jolt_physics_server_3d.cpp",0xe9,
                   "Parameter \"space\" is null.",0,0);
  return 0;
}



/* JoltPhysicsServer3D::space_set_debug_contacts(RID, int) */

void JoltPhysicsServer3D::space_set_debug_contacts(long param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(param_1 + 0x194))) {
    plVar3 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(param_1 + 400)) * 0x10 +
                     *(long *)(*(long *)(param_1 + 0x180) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(param_1 + 400)) * 8));
    iVar1 = (int)plVar3[1];
    if (iVar1 == (int)(param_2 >> 0x20)) {
      lVar2 = *plVar3;
      if (lVar2 != 0) {
        JoltSpace3D::set_max_debug_contacts((int)lVar2);
        return;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("space_set_debug_contacts","modules/jolt_physics/jolt_physics_server_3d.cpp",0xf2
                   ,"Parameter \"space\" is null.",0,0);
  return;
}



/* JoltPhysicsServer3D::space_get_contact_count(RID) const */

undefined8 __thiscall
JoltPhysicsServer3D::space_get_contact_count(JoltPhysicsServer3D *this,ulong param_2)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x194))) {
    plVar3 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 400)) * 0x10 +
                     *(long *)(*(long *)(this + 0x180) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 400)) * 8));
    iVar1 = (int)plVar3[1];
    if (iVar1 == (int)(param_2 >> 0x20)) {
      if (*plVar3 != 0) {
        uVar2 = JoltSpace3D::get_debug_contact_count();
        return uVar2;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("space_get_contact_count","modules/jolt_physics/jolt_physics_server_3d.cpp",0x106
                   ,"Parameter \"space\" is null.",0,0);
  return 0;
}



/* JoltPhysicsServer3D::area_add_shape(RID, RID, Transform3D const&, bool) */

void __thiscall
JoltPhysicsServer3D::area_add_shape
          (JoltPhysicsServer3D *this,ulong param_2,ulong param_3,undefined8 param_4,
          undefined1 param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x1ec))) {
    plVar4 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x1e8)) * 0x10 +
                     *(long *)(*(long *)(this + 0x1d8) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x1e8)) * 8));
    iVar1 = (int)plVar4[1];
    if (iVar1 == (int)(param_2 >> 0x20)) {
      lVar2 = *plVar4;
      if (lVar2 != 0) {
        if ((param_3 != 0) && ((uint)param_3 < *(uint *)(this + 0x2f4))) {
          plVar4 = (long *)(((param_3 & 0xffffffff) % (ulong)*(uint *)(this + 0x2f0)) * 0x10 +
                           *(long *)(*(long *)(this + 0x2e0) +
                                    ((param_3 & 0xffffffff) / (ulong)*(uint *)(this + 0x2f0)) * 8));
          iVar1 = (int)plVar4[1];
          if (iVar1 == (int)(param_3 >> 0x20)) {
            lVar3 = *plVar4;
            if (lVar3 != 0) {
              JoltShapedObject3D::add_shape(lVar2,lVar3,param_5);
              return;
            }
          }
          else if (iVar1 + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                             "Method/function failed. Returning: nullptr",
                             "Attempting to use an uninitialized RID",0,0);
          }
        }
        _err_print_error("area_add_shape","modules/jolt_physics/jolt_physics_server_3d.cpp",0x135,
                         "Parameter \"shape\" is null.",0,0);
        return;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("area_add_shape","modules/jolt_physics/jolt_physics_server_3d.cpp",0x132,
                   "Parameter \"area\" is null.",0,0);
  return;
}



/* JoltPhysicsServer3D::body_add_shape(RID, RID, Transform3D const&, bool) */

void __thiscall
JoltPhysicsServer3D::body_add_shape
          (JoltPhysicsServer3D *this,ulong param_2,ulong param_3,undefined8 param_4,
          undefined1 param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x244))) {
    plVar4 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x240)) * 0x10 +
                     *(long *)(*(long *)(this + 0x230) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x240)) * 8));
    iVar1 = (int)plVar4[1];
    if (iVar1 == (int)(param_2 >> 0x20)) {
      lVar2 = *plVar4;
      if (lVar2 != 0) {
        if ((param_3 != 0) && ((uint)param_3 < *(uint *)(this + 0x2f4))) {
          plVar4 = (long *)(((param_3 & 0xffffffff) % (ulong)*(uint *)(this + 0x2f0)) * 0x10 +
                           *(long *)(*(long *)(this + 0x2e0) +
                                    ((param_3 & 0xffffffff) / (ulong)*(uint *)(this + 0x2f0)) * 8));
          iVar1 = (int)plVar4[1];
          if (iVar1 == (int)(param_3 >> 0x20)) {
            lVar3 = *plVar4;
            if (lVar3 != 0) {
              JoltShapedObject3D::add_shape(lVar2,lVar3,param_5);
              return;
            }
          }
          else if (iVar1 + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                             "Method/function failed. Returning: nullptr",
                             "Attempting to use an uninitialized RID",0,0);
          }
        }
        _err_print_error("body_add_shape","modules/jolt_physics/jolt_physics_server_3d.cpp",0x22b,
                         "Parameter \"shape\" is null.",0,0);
        return;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("body_add_shape","modules/jolt_physics/jolt_physics_server_3d.cpp",0x228,
                   "Parameter \"body\" is null.",0,0);
  return;
}



/* JoltPhysicsServer3D::area_set_shape(RID, int, RID) */

void __thiscall
JoltPhysicsServer3D::area_set_shape
          (JoltPhysicsServer3D *this,ulong param_2,uint param_3,ulong param_4)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  if (param_2 != 0) {
    if ((uint)param_2 < *(uint *)(this + 0x1ec)) {
      plVar3 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x1e8)) * 0x10 +
                       *(long *)(*(long *)(this + 0x1d8) +
                                ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x1e8)) * 8));
      iVar1 = (int)plVar3[1];
      if (iVar1 == (int)(param_2 >> 0x20)) {
        lVar2 = *plVar3;
        if (lVar2 != 0) {
          if ((param_4 != 0) && ((uint)param_4 < *(uint *)(this + 0x2f4))) {
            plVar3 = (long *)(((param_4 & 0xffffffff) % (ulong)*(uint *)(this + 0x2f0)) * 0x10 +
                             *(long *)(*(long *)(this + 0x2e0) +
                                      ((param_4 & 0xffffffff) / (ulong)*(uint *)(this + 0x2f0)) * 8)
                             );
            iVar1 = (int)plVar3[1];
            if (iVar1 == (int)(param_4 >> 0x20)) {
              if (*plVar3 != 0) {
                JoltShapedObject3D::set_shape((int)lVar2,(JoltShape3D *)(ulong)param_3);
                return;
              }
            }
            else if (iVar1 + 0x80000000U < 0x7fffffff) {
              _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                               "Method/function failed. Returning: nullptr",
                               "Attempting to use an uninitialized RID",0,0);
            }
          }
          _err_print_error("area_set_shape","modules/jolt_physics/jolt_physics_server_3d.cpp",0x13f,
                           "Parameter \"shape\" is null.",0,0);
          return;
        }
      }
      else if (iVar1 + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
  }
  _err_print_error("area_set_shape","modules/jolt_physics/jolt_physics_server_3d.cpp",0x13c,
                   "Parameter \"area\" is null.",0,0);
  return;
}



/* JoltPhysicsServer3D::body_set_shape(RID, int, RID) */

void __thiscall
JoltPhysicsServer3D::body_set_shape
          (JoltPhysicsServer3D *this,ulong param_2,uint param_3,ulong param_4)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  if (param_2 != 0) {
    if ((uint)param_2 < *(uint *)(this + 0x244)) {
      plVar3 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x240)) * 0x10 +
                       *(long *)(*(long *)(this + 0x230) +
                                ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x240)) * 8));
      iVar1 = (int)plVar3[1];
      if (iVar1 == (int)(param_2 >> 0x20)) {
        lVar2 = *plVar3;
        if (lVar2 != 0) {
          if ((param_4 != 0) && ((uint)param_4 < *(uint *)(this + 0x2f4))) {
            plVar3 = (long *)(((param_4 & 0xffffffff) % (ulong)*(uint *)(this + 0x2f0)) * 0x10 +
                             *(long *)(*(long *)(this + 0x2e0) +
                                      ((param_4 & 0xffffffff) / (ulong)*(uint *)(this + 0x2f0)) * 8)
                             );
            iVar1 = (int)plVar3[1];
            if (iVar1 == (int)(param_4 >> 0x20)) {
              if (*plVar3 != 0) {
                JoltShapedObject3D::set_shape((int)lVar2,(JoltShape3D *)(ulong)param_3);
                return;
              }
            }
            else if (iVar1 + 0x80000000U < 0x7fffffff) {
              _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                               "Method/function failed. Returning: nullptr",
                               "Attempting to use an uninitialized RID",0,0);
            }
          }
          _err_print_error("body_set_shape","modules/jolt_physics/jolt_physics_server_3d.cpp",0x235,
                           "Parameter \"shape\" is null.",0,0);
          return;
        }
      }
      else if (iVar1 + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
  }
  _err_print_error("body_set_shape","modules/jolt_physics/jolt_physics_server_3d.cpp",0x232,
                   "Parameter \"body\" is null.",0,0);
  return;
}



/* JoltPhysicsServer3D::area_get_shape(RID, int) const */

undefined8 JoltPhysicsServer3D::area_get_shape(long param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(param_1 + 0x1ec))) {
    plVar3 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(param_1 + 0x1e8)) * 0x10 +
                     *(long *)(*(long *)(param_1 + 0x1d8) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(param_1 + 0x1e8)) * 8));
    iVar1 = (int)plVar3[1];
    if (iVar1 == (int)(param_2 >> 0x20)) {
      lVar2 = *plVar3;
      if (lVar2 != 0) {
        lVar2 = JoltShapedObject3D::get_shape((int)lVar2);
        if (lVar2 == 0) {
          _err_print_error("area_get_shape","modules/jolt_physics/jolt_physics_server_3d.cpp",0x149,
                           "Parameter \"shape\" is null.",0,0);
          return 0;
        }
        return *(undefined8 *)(lVar2 + 0x60);
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("area_get_shape","modules/jolt_physics/jolt_physics_server_3d.cpp",0x146,
                   "Parameter \"area\" is null.",0,0);
  return 0;
}



/* JoltPhysicsServer3D::body_get_shape(RID, int) const */

undefined8 JoltPhysicsServer3D::body_get_shape(long param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(param_1 + 0x244))) {
    plVar3 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(param_1 + 0x240)) * 0x10 +
                     *(long *)(*(long *)(param_1 + 0x230) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(param_1 + 0x240)) * 8));
    iVar1 = (int)plVar3[1];
    if (iVar1 == (int)(param_2 >> 0x20)) {
      lVar2 = *plVar3;
      if (lVar2 != 0) {
        lVar2 = JoltShapedObject3D::get_shape((int)lVar2);
        if (lVar2 == 0) {
          _err_print_error("body_get_shape","modules/jolt_physics/jolt_physics_server_3d.cpp",0x23f,
                           "Parameter \"shape\" is null.",0,0);
          return 0;
        }
        return *(undefined8 *)(lVar2 + 0x60);
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("body_get_shape","modules/jolt_physics/jolt_physics_server_3d.cpp",0x23c,
                   "Parameter \"body\" is null.",0,0);
  return 0;
}



/* JoltPhysicsServer3D::area_set_shape_transform(RID, int, Transform3D const&) */

void JoltPhysicsServer3D::area_set_shape_transform(long param_1,ulong param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  if (param_2 != 0) {
    if ((uint)param_2 < *(uint *)(param_1 + 0x1ec)) {
      plVar3 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(param_1 + 0x1e8)) * 0x10 +
                       *(long *)(*(long *)(param_1 + 0x1d8) +
                                ((param_2 & 0xffffffff) / (ulong)*(uint *)(param_1 + 0x1e8)) * 8));
      iVar1 = (int)plVar3[1];
      if (iVar1 == (int)(param_2 >> 0x20)) {
        lVar2 = *plVar3;
        if (lVar2 != 0) {
          JoltShapedObject3D::set_shape_transform(lVar2,param_3);
          return;
        }
      }
      else if (iVar1 + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
  }
  _err_print_error("area_set_shape_transform","modules/jolt_physics/jolt_physics_server_3d.cpp",
                   0x150,"Parameter \"area\" is null.",0,0);
  return;
}



/* JoltPhysicsServer3D::body_set_shape_transform(RID, int, Transform3D const&) */

void JoltPhysicsServer3D::body_set_shape_transform(long param_1,ulong param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  if (param_2 != 0) {
    if ((uint)param_2 < *(uint *)(param_1 + 0x244)) {
      plVar3 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(param_1 + 0x240)) * 0x10 +
                       *(long *)(*(long *)(param_1 + 0x230) +
                                ((param_2 & 0xffffffff) / (ulong)*(uint *)(param_1 + 0x240)) * 8));
      iVar1 = (int)plVar3[1];
      if (iVar1 == (int)(param_2 >> 0x20)) {
        lVar2 = *plVar3;
        if (lVar2 != 0) {
          JoltShapedObject3D::set_shape_transform(lVar2,param_3);
          return;
        }
      }
      else if (iVar1 + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
  }
  _err_print_error("body_set_shape_transform","modules/jolt_physics/jolt_physics_server_3d.cpp",
                   0x246,"Parameter \"body\" is null.",0,0);
  return;
}



/* JoltPhysicsServer3D::area_get_shape_transform(RID, int) const */

JoltPhysicsServer3D * __thiscall
JoltPhysicsServer3D::area_get_shape_transform(JoltPhysicsServer3D *this,long param_2,ulong param_3)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  long *plVar4;
  long in_FS_OFFSET;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(param_2 + 0x1ec))) {
    plVar4 = (long *)(((param_3 & 0xffffffff) % (ulong)*(uint *)(param_2 + 0x1e8)) * 0x10 +
                     *(long *)(*(long *)(param_2 + 0x1d8) +
                              ((param_3 & 0xffffffff) / (ulong)*(uint *)(param_2 + 0x1e8)) * 8));
    iVar1 = (int)plVar4[1];
    if (iVar1 == (int)(param_3 >> 0x20)) {
      if (*plVar4 != 0) {
        JoltShapedObject3D::get_shape_transform_scaled((int)this);
        goto LAB_00103776;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("area_get_shape_transform","modules/jolt_physics/jolt_physics_server_3d.cpp",
                   0x157,"Parameter \"area\" is null.",0,0);
  uVar3 = _LC50;
  *(undefined4 *)(this + 0x20) = 0x3f800000;
  *(undefined8 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined1 (*) [16])this = ZEXT416(uVar3);
  *(undefined1 (*) [16])(this + 0x10) = ZEXT416(uVar3);
LAB_00103776:
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltPhysicsServer3D::body_get_shape_transform(RID, int) const */

JoltPhysicsServer3D * __thiscall
JoltPhysicsServer3D::body_get_shape_transform(JoltPhysicsServer3D *this,long param_2,ulong param_3)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  long *plVar4;
  long in_FS_OFFSET;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(param_2 + 0x244))) {
    plVar4 = (long *)(((param_3 & 0xffffffff) % (ulong)*(uint *)(param_2 + 0x240)) * 0x10 +
                     *(long *)(*(long *)(param_2 + 0x230) +
                              ((param_3 & 0xffffffff) / (ulong)*(uint *)(param_2 + 0x240)) * 8));
    iVar1 = (int)plVar4[1];
    if (iVar1 == (int)(param_3 >> 0x20)) {
      if (*plVar4 != 0) {
        JoltShapedObject3D::get_shape_transform_scaled((int)this);
        goto LAB_001038a6;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("body_get_shape_transform","modules/jolt_physics/jolt_physics_server_3d.cpp",
                   0x24d,"Parameter \"body\" is null.",0,0);
  uVar3 = _LC50;
  *(undefined4 *)(this + 0x20) = 0x3f800000;
  *(undefined8 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined1 (*) [16])this = ZEXT416(uVar3);
  *(undefined1 (*) [16])(this + 0x10) = ZEXT416(uVar3);
LAB_001038a6:
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltPhysicsServer3D::area_remove_shape(RID, int) */

void JoltPhysicsServer3D::area_remove_shape(long param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(param_1 + 0x1ec))) {
    plVar3 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(param_1 + 0x1e8)) * 0x10 +
                     *(long *)(*(long *)(param_1 + 0x1d8) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(param_1 + 0x1e8)) * 8));
    iVar1 = (int)plVar3[1];
    if (iVar1 == (int)(param_2 >> 0x20)) {
      lVar2 = *plVar3;
      if (lVar2 != 0) {
        JoltShapedObject3D::remove_shape((int)lVar2);
        return;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("area_remove_shape","modules/jolt_physics/jolt_physics_server_3d.cpp",0x165,
                   "Parameter \"area\" is null.",0,0);
  return;
}



/* JoltPhysicsServer3D::body_remove_shape(RID, int) */

void JoltPhysicsServer3D::body_remove_shape(long param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(param_1 + 0x244))) {
    plVar3 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(param_1 + 0x240)) * 0x10 +
                     *(long *)(*(long *)(param_1 + 0x230) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(param_1 + 0x240)) * 8));
    iVar1 = (int)plVar3[1];
    if (iVar1 == (int)(param_2 >> 0x20)) {
      lVar2 = *plVar3;
      if (lVar2 != 0) {
        JoltShapedObject3D::remove_shape((int)lVar2);
        return;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("body_remove_shape","modules/jolt_physics/jolt_physics_server_3d.cpp",0x25b,
                   "Parameter \"body\" is null.",0,0);
  return;
}



/* JoltPhysicsServer3D::area_clear_shapes(RID) */

void __thiscall JoltPhysicsServer3D::area_clear_shapes(JoltPhysicsServer3D *this,ulong param_2)

{
  int iVar1;
  long *plVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x1ec))) {
    plVar2 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x1e8)) * 0x10 +
                     *(long *)(*(long *)(this + 0x1d8) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x1e8)) * 8));
    iVar1 = (int)plVar2[1];
    if (iVar1 == (int)(param_2 >> 0x20)) {
      if (*plVar2 != 0) {
        JoltShapedObject3D::clear_shapes();
        return;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("area_clear_shapes","modules/jolt_physics/jolt_physics_server_3d.cpp",0x16c,
                   "Parameter \"area\" is null.",0,0);
  return;
}



/* JoltPhysicsServer3D::body_clear_shapes(RID) */

void __thiscall JoltPhysicsServer3D::body_clear_shapes(JoltPhysicsServer3D *this,ulong param_2)

{
  int iVar1;
  long *plVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x244))) {
    plVar2 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x240)) * 0x10 +
                     *(long *)(*(long *)(this + 0x230) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x240)) * 8));
    iVar1 = (int)plVar2[1];
    if (iVar1 == (int)(param_2 >> 0x20)) {
      if (*plVar2 != 0) {
        JoltShapedObject3D::clear_shapes();
        return;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("body_clear_shapes","modules/jolt_physics/jolt_physics_server_3d.cpp",0x262,
                   "Parameter \"body\" is null.",0,0);
  return;
}



/* JoltPhysicsServer3D::area_set_shape_disabled(RID, int, bool) */

void JoltPhysicsServer3D::area_set_shape_disabled(long param_1,ulong param_2,bool param_3)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(param_1 + 0x1ec))) {
    plVar3 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(param_1 + 0x1e8)) * 0x10 +
                     *(long *)(*(long *)(param_1 + 0x1d8) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(param_1 + 0x1e8)) * 8));
    iVar1 = (int)plVar3[1];
    if (iVar1 == (int)(param_2 >> 0x20)) {
      lVar2 = *plVar3;
      if (lVar2 != 0) {
        JoltShapedObject3D::set_shape_disabled((int)lVar2,param_3);
        return;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("area_set_shape_disabled","modules/jolt_physics/jolt_physics_server_3d.cpp",0x173
                   ,"Parameter \"area\" is null.",0,0);
  return;
}



/* JoltPhysicsServer3D::body_set_shape_disabled(RID, int, bool) */

void JoltPhysicsServer3D::body_set_shape_disabled(long param_1,ulong param_2,bool param_3)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(param_1 + 0x244))) {
    plVar3 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(param_1 + 0x240)) * 0x10 +
                     *(long *)(*(long *)(param_1 + 0x230) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(param_1 + 0x240)) * 8));
    iVar1 = (int)plVar3[1];
    if (iVar1 == (int)(param_2 >> 0x20)) {
      lVar2 = *plVar3;
      if (lVar2 != 0) {
        JoltShapedObject3D::set_shape_disabled((int)lVar2,param_3);
        return;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("body_set_shape_disabled","modules/jolt_physics/jolt_physics_server_3d.cpp",0x269
                   ,"Parameter \"body\" is null.",0,0);
  return;
}



/* JoltPhysicsServer3D::area_set_transform(RID, Transform3D const&) */

void JoltPhysicsServer3D::area_set_transform(long param_1,ulong param_2)

{
  int iVar1;
  long *plVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(param_1 + 0x1ec))) {
    plVar2 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(param_1 + 0x1e8)) * 0x10 +
                     *(long *)(*(long *)(param_1 + 0x1d8) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(param_1 + 0x1e8)) * 8));
    iVar1 = (int)plVar2[1];
    if (iVar1 == (int)(param_2 >> 0x20)) {
      if (*plVar2 != 0) {
        JoltArea3D::set_transform();
        return;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("area_set_transform","modules/jolt_physics/jolt_physics_server_3d.cpp",0x1b2,
                   "Parameter \"area\" is null.",0,0);
  return;
}



/* JoltPhysicsServer3D::area_get_transform(RID) const */

undefined1 (*) [16]
JoltPhysicsServer3D::area_get_transform(undefined1 (*param_1) [16],long param_2,ulong param_3)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  long *plVar4;
  long in_FS_OFFSET;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(param_2 + 0x1ec))) {
    plVar4 = (long *)(((param_3 & 0xffffffff) % (ulong)*(uint *)(param_2 + 0x1e8)) * 0x10 +
                     *(long *)(*(long *)(param_2 + 0x1d8) +
                              ((param_3 & 0xffffffff) / (ulong)*(uint *)(param_2 + 0x1e8)) * 8));
    iVar1 = (int)plVar4[1];
    if (iVar1 == (int)(param_3 >> 0x20)) {
      if (*plVar4 != 0) {
        JoltShapedObject3D::get_transform_scaled();
        goto LAB_00103f81;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("area_get_transform","modules/jolt_physics/jolt_physics_server_3d.cpp",0x1b9,
                   "Parameter \"area\" is null.",0,0);
  uVar3 = _LC50;
  *(undefined4 *)param_1[2] = 0x3f800000;
  *(undefined8 *)(param_1[2] + 4) = 0;
  *(undefined4 *)(param_1[2] + 0xc) = 0;
  *param_1 = ZEXT416(uVar3);
  param_1[1] = ZEXT416(uVar3);
LAB_00103f81:
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltPhysicsServer3D::area_set_collision_mask(RID, unsigned int) */

void JoltPhysicsServer3D::area_set_collision_mask(long param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(param_1 + 0x1ec))) {
    plVar3 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(param_1 + 0x1e8)) * 0x10 +
                     *(long *)(*(long *)(param_1 + 0x1d8) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(param_1 + 0x1e8)) * 8));
    iVar1 = (int)plVar3[1];
    if (iVar1 == (int)(param_2 >> 0x20)) {
      lVar2 = *plVar3;
      if (lVar2 != 0) {
        JoltObject3D::set_collision_mask((uint)lVar2);
        return;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("area_set_collision_mask","modules/jolt_physics/jolt_physics_server_3d.cpp",0x1c0
                   ,"Parameter \"area\" is null.",0,0);
  return;
}



/* JoltPhysicsServer3D::body_set_collision_mask(RID, unsigned int) */

void JoltPhysicsServer3D::body_set_collision_mask(long param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(param_1 + 0x244))) {
    plVar3 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(param_1 + 0x240)) * 0x10 +
                     *(long *)(*(long *)(param_1 + 0x230) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(param_1 + 0x240)) * 8));
    iVar1 = (int)plVar3[1];
    if (iVar1 == (int)(param_2 >> 0x20)) {
      lVar2 = *plVar3;
      if (lVar2 != 0) {
        JoltObject3D::set_collision_mask((uint)lVar2);
        return;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("body_set_collision_mask","modules/jolt_physics/jolt_physics_server_3d.cpp",0x29d
                   ,"Parameter \"body\" is null.",0,0);
  return;
}



/* JoltPhysicsServer3D::soft_body_set_collision_mask(RID, unsigned int) */

void JoltPhysicsServer3D::soft_body_set_collision_mask(long param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(param_1 + 0x29c))) {
    plVar3 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(param_1 + 0x298)) * 0x10 +
                     *(long *)(*(long *)(param_1 + 0x288) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(param_1 + 0x298)) * 8));
    iVar1 = (int)plVar3[1];
    if (iVar1 == (int)(param_2 >> 0x20)) {
      lVar2 = *plVar3;
      if (lVar2 != 0) {
        JoltObject3D::set_collision_mask((uint)lVar2);
        return;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("soft_body_set_collision_mask","modules/jolt_physics/jolt_physics_server_3d.cpp",
                   0x400,"Parameter \"body\" is null.",0,0);
  return;
}



/* JoltPhysicsServer3D::area_set_collision_layer(RID, unsigned int) */

void JoltPhysicsServer3D::area_set_collision_layer(long param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(param_1 + 0x1ec))) {
    plVar3 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(param_1 + 0x1e8)) * 0x10 +
                     *(long *)(*(long *)(param_1 + 0x1d8) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(param_1 + 0x1e8)) * 8));
    iVar1 = (int)plVar3[1];
    if (iVar1 == (int)(param_2 >> 0x20)) {
      lVar2 = *plVar3;
      if (lVar2 != 0) {
        JoltObject3D::set_collision_layer((uint)lVar2);
        return;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("area_set_collision_layer","modules/jolt_physics/jolt_physics_server_3d.cpp",
                   0x1ce,"Parameter \"area\" is null.",0,0);
  return;
}



/* JoltPhysicsServer3D::body_set_collision_layer(RID, unsigned int) */

void JoltPhysicsServer3D::body_set_collision_layer(long param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(param_1 + 0x244))) {
    plVar3 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(param_1 + 0x240)) * 0x10 +
                     *(long *)(*(long *)(param_1 + 0x230) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(param_1 + 0x240)) * 8));
    iVar1 = (int)plVar3[1];
    if (iVar1 == (int)(param_2 >> 0x20)) {
      lVar2 = *plVar3;
      if (lVar2 != 0) {
        JoltObject3D::set_collision_layer((uint)lVar2);
        return;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("body_set_collision_layer","modules/jolt_physics/jolt_physics_server_3d.cpp",
                   0x28f,"Parameter \"body\" is null.",0,0);
  return;
}



/* JoltPhysicsServer3D::soft_body_set_collision_layer(RID, unsigned int) */

void JoltPhysicsServer3D::soft_body_set_collision_layer(long param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(param_1 + 0x29c))) {
    plVar3 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(param_1 + 0x298)) * 0x10 +
                     *(long *)(*(long *)(param_1 + 0x288) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(param_1 + 0x298)) * 8));
    iVar1 = (int)plVar3[1];
    if (iVar1 == (int)(param_2 >> 0x20)) {
      lVar2 = *plVar3;
      if (lVar2 != 0) {
        JoltObject3D::set_collision_layer((uint)lVar2);
        return;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("soft_body_set_collision_layer","modules/jolt_physics/jolt_physics_server_3d.cpp"
                   ,0x3f2,"Parameter \"body\" is null.",0,0);
  return;
}



/* JoltPhysicsServer3D::area_set_monitorable(RID, bool) */

void JoltPhysicsServer3D::area_set_monitorable(long param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(param_1 + 0x1ec))) {
    plVar3 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(param_1 + 0x1e8)) * 0x10 +
                     *(long *)(*(long *)(param_1 + 0x1d8) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(param_1 + 0x1e8)) * 8));
    iVar1 = (int)plVar3[1];
    if (iVar1 == (int)(param_2 >> 0x20)) {
      lVar2 = *plVar3;
      if (lVar2 != 0) {
        JoltArea3D::set_monitorable(SUB81(lVar2,0));
        return;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("area_set_monitorable","modules/jolt_physics/jolt_physics_server_3d.cpp",0x1dc,
                   "Parameter \"area\" is null.",0,0);
  return;
}



/* JoltPhysicsServer3D::area_set_monitor_callback(RID, Callable const&) */

void JoltPhysicsServer3D::area_set_monitor_callback(long param_1,ulong param_2)

{
  int iVar1;
  Callable *pCVar2;
  undefined8 *puVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(param_1 + 0x1ec))) {
    puVar3 = (undefined8 *)
             (((param_2 & 0xffffffff) % (ulong)*(uint *)(param_1 + 0x1e8)) * 0x10 +
             *(long *)(*(long *)(param_1 + 0x1d8) +
                      ((param_2 & 0xffffffff) / (ulong)*(uint *)(param_1 + 0x1e8)) * 8));
    iVar1 = *(int *)(puVar3 + 1);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      pCVar2 = (Callable *)*puVar3;
      if (pCVar2 != (Callable *)0x0) {
        JoltArea3D::set_body_monitor_callback(pCVar2);
        return;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("area_set_monitor_callback","modules/jolt_physics/jolt_physics_server_3d.cpp",
                   0x1e3,"Parameter \"area\" is null.",0,0);
  return;
}



/* JoltPhysicsServer3D::area_set_area_monitor_callback(RID, Callable const&) */

void JoltPhysicsServer3D::area_set_area_monitor_callback(long param_1,ulong param_2)

{
  int iVar1;
  Callable *pCVar2;
  undefined8 *puVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(param_1 + 0x1ec))) {
    puVar3 = (undefined8 *)
             (((param_2 & 0xffffffff) % (ulong)*(uint *)(param_1 + 0x1e8)) * 0x10 +
             *(long *)(*(long *)(param_1 + 0x1d8) +
                      ((param_2 & 0xffffffff) / (ulong)*(uint *)(param_1 + 0x1e8)) * 8));
    iVar1 = *(int *)(puVar3 + 1);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      pCVar2 = (Callable *)*puVar3;
      if (pCVar2 != (Callable *)0x0) {
        JoltArea3D::set_area_monitor_callback(pCVar2);
        return;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("area_set_area_monitor_callback",
                   "modules/jolt_physics/jolt_physics_server_3d.cpp",0x1ea,
                   "Parameter \"area\" is null.",0,0);
  return;
}



/* JoltPhysicsServer3D::body_set_mode(RID, PhysicsServer3D::BodyMode) */

void __thiscall
JoltPhysicsServer3D::body_set_mode(JoltPhysicsServer3D *this,ulong param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  if (param_2 != 0) {
    if ((uint)param_2 < *(uint *)(this + 0x244)) {
      plVar3 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x240)) * 0x10 +
                       *(long *)(*(long *)(this + 0x230) +
                                ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x240)) * 8));
      iVar1 = (int)plVar3[1];
      if (iVar1 == (int)(param_2 >> 0x20)) {
        lVar2 = *plVar3;
        if (lVar2 != 0) {
          JoltBody3D::set_mode(lVar2,param_3);
          return;
        }
      }
      else if (iVar1 + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
  }
  _err_print_error("body_set_mode","modules/jolt_physics/jolt_physics_server_3d.cpp",0x21a,
                   "Parameter \"body\" is null.",0,0);
  return;
}



/* JoltPhysicsServer3D::body_set_enable_continuous_collision_detection(RID, bool) */

void JoltPhysicsServer3D::body_set_enable_continuous_collision_detection(long param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(param_1 + 0x244))) {
    plVar3 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(param_1 + 0x240)) * 0x10 +
                     *(long *)(*(long *)(param_1 + 0x230) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(param_1 + 0x240)) * 8));
    iVar1 = (int)plVar3[1];
    if (iVar1 == (int)(param_2 >> 0x20)) {
      lVar2 = *plVar3;
      if (lVar2 != 0) {
        JoltBody3D::set_ccd_enabled(SUB81(lVar2,0));
        return;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("body_set_enable_continuous_collision_detection",
                   "modules/jolt_physics/jolt_physics_server_3d.cpp",0x281,
                   "Parameter \"body\" is null.",0,0);
  return;
}



/* JoltPhysicsServer3D::body_is_continuous_collision_detection_enabled(RID) const */

undefined8 __thiscall
JoltPhysicsServer3D::body_is_continuous_collision_detection_enabled
          (JoltPhysicsServer3D *this,ulong param_2)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x244))) {
    plVar3 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x240)) * 0x10 +
                     *(long *)(*(long *)(this + 0x230) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x240)) * 8));
    iVar1 = (int)plVar3[1];
    if (iVar1 == (int)(param_2 >> 0x20)) {
      if (*plVar3 != 0) {
        uVar2 = JoltBody3D::is_ccd_enabled();
        return uVar2;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("body_is_continuous_collision_detection_enabled",
                   "modules/jolt_physics/jolt_physics_server_3d.cpp",0x288,
                   "Parameter \"body\" is null.",0,0);
  return 0;
}



/* JoltPhysicsServer3D::body_set_param(RID, PhysicsServer3D::BodyParameter, Variant const&) */

void __thiscall
JoltPhysicsServer3D::body_set_param
          (JoltPhysicsServer3D *this,ulong param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  if (param_2 != 0) {
    if ((uint)param_2 < *(uint *)(this + 0x244)) {
      plVar3 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x240)) * 0x10 +
                       *(long *)(*(long *)(this + 0x230) +
                                ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x240)) * 8));
      iVar1 = (int)plVar3[1];
      if (iVar1 == (int)(param_2 >> 0x20)) {
        lVar2 = *plVar3;
        if (lVar2 != 0) {
          JoltBody3D::set_param(lVar2,param_3,param_4);
          return;
        }
      }
      else if (iVar1 + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
  }
  _err_print_error("body_set_param","modules/jolt_physics/jolt_physics_server_3d.cpp",0x2c1,
                   "Parameter \"body\" is null.",0,0);
  return;
}



/* JoltPhysicsServer3D::body_get_param(RID, PhysicsServer3D::BodyParameter) const */

undefined4 *
JoltPhysicsServer3D::body_get_param
          (undefined4 *param_1,long param_2,ulong param_3,undefined4 param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long in_FS_OFFSET;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(param_2 + 0x244))) {
    plVar4 = (long *)(((param_3 & 0xffffffff) % (ulong)*(uint *)(param_2 + 0x240)) * 0x10 +
                     *(long *)(*(long *)(param_2 + 0x230) +
                              ((param_3 & 0xffffffff) / (ulong)*(uint *)(param_2 + 0x240)) * 8));
    iVar1 = (int)plVar4[1];
    if (iVar1 == (int)(param_3 >> 0x20)) {
      lVar3 = *plVar4;
      if (lVar3 != 0) {
        JoltBody3D::get_param(param_1,lVar3,param_4);
        goto LAB_00104b36;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("body_get_param","modules/jolt_physics/jolt_physics_server_3d.cpp",0x2c8,
                   "Parameter \"body\" is null.",0,0);
  *param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 2) = (undefined1  [16])0x0;
LAB_00104b36:
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltPhysicsServer3D::body_reset_mass_properties(RID) */

void __thiscall
JoltPhysicsServer3D::body_reset_mass_properties(JoltPhysicsServer3D *this,ulong param_2)

{
  int iVar1;
  long *plVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x244))) {
    plVar2 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x240)) * 0x10 +
                     *(long *)(*(long *)(this + 0x230) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x240)) * 8));
    iVar1 = (int)plVar2[1];
    if (iVar1 == (int)(param_2 >> 0x20)) {
      if (*plVar2 != 0) {
        JoltBody3D::reset_mass_properties();
        return;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("body_reset_mass_properties","modules/jolt_physics/jolt_physics_server_3d.cpp",
                   0x2cf,"Parameter \"body\" is null.",0,0);
  return;
}



/* JoltPhysicsServer3D::body_set_state(RID, PhysicsServer3D::BodyState, Variant const&) */

void __thiscall
JoltPhysicsServer3D::body_set_state
          (JoltPhysicsServer3D *this,ulong param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  if (param_2 != 0) {
    if ((uint)param_2 < *(uint *)(this + 0x244)) {
      plVar3 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x240)) * 0x10 +
                       *(long *)(*(long *)(this + 0x230) +
                                ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x240)) * 8));
      iVar1 = (int)plVar3[1];
      if (iVar1 == (int)(param_2 >> 0x20)) {
        lVar2 = *plVar3;
        if (lVar2 != 0) {
          JoltBody3D::set_state(lVar2,param_3,param_4);
          return;
        }
      }
      else if (iVar1 + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
  }
  _err_print_error("body_set_state","modules/jolt_physics/jolt_physics_server_3d.cpp",0x2d6,
                   "Parameter \"body\" is null.",0,0);
  return;
}



/* JoltPhysicsServer3D::body_get_state(RID, PhysicsServer3D::BodyState) const */

undefined4 *
JoltPhysicsServer3D::body_get_state
          (undefined4 *param_1,long param_2,ulong param_3,undefined4 param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long in_FS_OFFSET;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(param_2 + 0x244))) {
    plVar4 = (long *)(((param_3 & 0xffffffff) % (ulong)*(uint *)(param_2 + 0x240)) * 0x10 +
                     *(long *)(*(long *)(param_2 + 0x230) +
                              ((param_3 & 0xffffffff) / (ulong)*(uint *)(param_2 + 0x240)) * 8));
    iVar1 = (int)plVar4[1];
    if (iVar1 == (int)(param_3 >> 0x20)) {
      lVar3 = *plVar4;
      if (lVar3 != 0) {
        JoltBody3D::get_state(param_1,lVar3,param_4);
        goto LAB_00104dd6;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("body_get_state","modules/jolt_physics/jolt_physics_server_3d.cpp",0x2dd,
                   "Parameter \"body\" is null.",0,0);
  *param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 2) = (undefined1  [16])0x0;
LAB_00104dd6:
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltPhysicsServer3D::body_apply_central_impulse(RID, Vector3 const&) */

void JoltPhysicsServer3D::body_apply_central_impulse(long param_1,ulong param_2)

{
  int iVar1;
  Vector3 *pVVar2;
  undefined8 *puVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(param_1 + 0x244))) {
    puVar3 = (undefined8 *)
             (((param_2 & 0xffffffff) % (ulong)*(uint *)(param_1 + 0x240)) * 0x10 +
             *(long *)(*(long *)(param_1 + 0x230) +
                      ((param_2 & 0xffffffff) / (ulong)*(uint *)(param_1 + 0x240)) * 8));
    iVar1 = *(int *)(puVar3 + 1);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      pVVar2 = (Vector3 *)*puVar3;
      if (pVVar2 != (Vector3 *)0x0) {
        JoltBody3D::apply_central_impulse(pVVar2);
        return;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("body_apply_central_impulse","modules/jolt_physics/jolt_physics_server_3d.cpp",
                   0x2e4,"Parameter \"body\" is null.",0,0);
  return;
}



/* JoltPhysicsServer3D::body_apply_impulse(RID, Vector3 const&, Vector3 const&) */

void JoltPhysicsServer3D::body_apply_impulse(long param_1,ulong param_2,Vector3 *param_3)

{
  int iVar1;
  Vector3 *pVVar2;
  undefined8 *puVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(param_1 + 0x244))) {
    puVar3 = (undefined8 *)
             (((param_2 & 0xffffffff) % (ulong)*(uint *)(param_1 + 0x240)) * 0x10 +
             *(long *)(*(long *)(param_1 + 0x230) +
                      ((param_2 & 0xffffffff) / (ulong)*(uint *)(param_1 + 0x240)) * 8));
    iVar1 = *(int *)(puVar3 + 1);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      pVVar2 = (Vector3 *)*puVar3;
      if (pVVar2 != (Vector3 *)0x0) {
        JoltBody3D::apply_impulse(pVVar2,param_3);
        return;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("body_apply_impulse","modules/jolt_physics/jolt_physics_server_3d.cpp",0x2eb,
                   "Parameter \"body\" is null.",0,0);
  return;
}



/* JoltPhysicsServer3D::body_apply_torque_impulse(RID, Vector3 const&) */

void JoltPhysicsServer3D::body_apply_torque_impulse(long param_1,ulong param_2)

{
  int iVar1;
  Vector3 *pVVar2;
  undefined8 *puVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(param_1 + 0x244))) {
    puVar3 = (undefined8 *)
             (((param_2 & 0xffffffff) % (ulong)*(uint *)(param_1 + 0x240)) * 0x10 +
             *(long *)(*(long *)(param_1 + 0x230) +
                      ((param_2 & 0xffffffff) / (ulong)*(uint *)(param_1 + 0x240)) * 8));
    iVar1 = *(int *)(puVar3 + 1);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      pVVar2 = (Vector3 *)*puVar3;
      if (pVVar2 != (Vector3 *)0x0) {
        JoltBody3D::apply_torque_impulse(pVVar2);
        return;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("body_apply_torque_impulse","modules/jolt_physics/jolt_physics_server_3d.cpp",
                   0x2f2,"Parameter \"body\" is null.",0,0);
  return;
}



/* JoltPhysicsServer3D::body_apply_central_force(RID, Vector3 const&) */

void JoltPhysicsServer3D::body_apply_central_force(long param_1,ulong param_2)

{
  int iVar1;
  Vector3 *pVVar2;
  undefined8 *puVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(param_1 + 0x244))) {
    puVar3 = (undefined8 *)
             (((param_2 & 0xffffffff) % (ulong)*(uint *)(param_1 + 0x240)) * 0x10 +
             *(long *)(*(long *)(param_1 + 0x230) +
                      ((param_2 & 0xffffffff) / (ulong)*(uint *)(param_1 + 0x240)) * 8));
    iVar1 = *(int *)(puVar3 + 1);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      pVVar2 = (Vector3 *)*puVar3;
      if (pVVar2 != (Vector3 *)0x0) {
        JoltBody3D::apply_central_force(pVVar2);
        return;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("body_apply_central_force","modules/jolt_physics/jolt_physics_server_3d.cpp",
                   0x2f9,"Parameter \"body\" is null.",0,0);
  return;
}



/* JoltPhysicsServer3D::body_apply_force(RID, Vector3 const&, Vector3 const&) */

void JoltPhysicsServer3D::body_apply_force(long param_1,ulong param_2,Vector3 *param_3)

{
  int iVar1;
  Vector3 *pVVar2;
  undefined8 *puVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(param_1 + 0x244))) {
    puVar3 = (undefined8 *)
             (((param_2 & 0xffffffff) % (ulong)*(uint *)(param_1 + 0x240)) * 0x10 +
             *(long *)(*(long *)(param_1 + 0x230) +
                      ((param_2 & 0xffffffff) / (ulong)*(uint *)(param_1 + 0x240)) * 8));
    iVar1 = *(int *)(puVar3 + 1);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      pVVar2 = (Vector3 *)*puVar3;
      if (pVVar2 != (Vector3 *)0x0) {
        JoltBody3D::apply_force(pVVar2,param_3);
        return;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("body_apply_force","modules/jolt_physics/jolt_physics_server_3d.cpp",0x300,
                   "Parameter \"body\" is null.",0,0);
  return;
}



/* JoltPhysicsServer3D::body_apply_torque(RID, Vector3 const&) */

void JoltPhysicsServer3D::body_apply_torque(long param_1,ulong param_2)

{
  int iVar1;
  Vector3 *pVVar2;
  undefined8 *puVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(param_1 + 0x244))) {
    puVar3 = (undefined8 *)
             (((param_2 & 0xffffffff) % (ulong)*(uint *)(param_1 + 0x240)) * 0x10 +
             *(long *)(*(long *)(param_1 + 0x230) +
                      ((param_2 & 0xffffffff) / (ulong)*(uint *)(param_1 + 0x240)) * 8));
    iVar1 = *(int *)(puVar3 + 1);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      pVVar2 = (Vector3 *)*puVar3;
      if (pVVar2 != (Vector3 *)0x0) {
        JoltBody3D::apply_torque(pVVar2);
        return;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("body_apply_torque","modules/jolt_physics/jolt_physics_server_3d.cpp",0x307,
                   "Parameter \"body\" is null.",0,0);
  return;
}



/* JoltPhysicsServer3D::body_add_constant_central_force(RID, Vector3 const&) */

void JoltPhysicsServer3D::body_add_constant_central_force(long param_1,ulong param_2)

{
  int iVar1;
  Vector3 *pVVar2;
  undefined8 *puVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(param_1 + 0x244))) {
    puVar3 = (undefined8 *)
             (((param_2 & 0xffffffff) % (ulong)*(uint *)(param_1 + 0x240)) * 0x10 +
             *(long *)(*(long *)(param_1 + 0x230) +
                      ((param_2 & 0xffffffff) / (ulong)*(uint *)(param_1 + 0x240)) * 8));
    iVar1 = *(int *)(puVar3 + 1);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      pVVar2 = (Vector3 *)*puVar3;
      if (pVVar2 != (Vector3 *)0x0) {
        JoltBody3D::add_constant_central_force(pVVar2);
        return;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("body_add_constant_central_force",
                   "modules/jolt_physics/jolt_physics_server_3d.cpp",0x30e,
                   "Parameter \"body\" is null.",0,0);
  return;
}



/* JoltPhysicsServer3D::body_add_constant_force(RID, Vector3 const&, Vector3 const&) */

void JoltPhysicsServer3D::body_add_constant_force(long param_1,ulong param_2,Vector3 *param_3)

{
  int iVar1;
  Vector3 *pVVar2;
  undefined8 *puVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(param_1 + 0x244))) {
    puVar3 = (undefined8 *)
             (((param_2 & 0xffffffff) % (ulong)*(uint *)(param_1 + 0x240)) * 0x10 +
             *(long *)(*(long *)(param_1 + 0x230) +
                      ((param_2 & 0xffffffff) / (ulong)*(uint *)(param_1 + 0x240)) * 8));
    iVar1 = *(int *)(puVar3 + 1);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      pVVar2 = (Vector3 *)*puVar3;
      if (pVVar2 != (Vector3 *)0x0) {
        JoltBody3D::add_constant_force(pVVar2,param_3);
        return;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("body_add_constant_force","modules/jolt_physics/jolt_physics_server_3d.cpp",0x315
                   ,"Parameter \"body\" is null.",0,0);
  return;
}



/* JoltPhysicsServer3D::body_add_constant_torque(RID, Vector3 const&) */

void JoltPhysicsServer3D::body_add_constant_torque(long param_1,ulong param_2)

{
  int iVar1;
  Vector3 *pVVar2;
  undefined8 *puVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(param_1 + 0x244))) {
    puVar3 = (undefined8 *)
             (((param_2 & 0xffffffff) % (ulong)*(uint *)(param_1 + 0x240)) * 0x10 +
             *(long *)(*(long *)(param_1 + 0x230) +
                      ((param_2 & 0xffffffff) / (ulong)*(uint *)(param_1 + 0x240)) * 8));
    iVar1 = *(int *)(puVar3 + 1);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      pVVar2 = (Vector3 *)*puVar3;
      if (pVVar2 != (Vector3 *)0x0) {
        JoltBody3D::add_constant_torque(pVVar2);
        return;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("body_add_constant_torque","modules/jolt_physics/jolt_physics_server_3d.cpp",
                   0x31c,"Parameter \"body\" is null.",0,0);
  return;
}



/* JoltPhysicsServer3D::body_set_constant_force(RID, Vector3 const&) */

void JoltPhysicsServer3D::body_set_constant_force(long param_1,ulong param_2)

{
  int iVar1;
  Vector3 *pVVar2;
  undefined8 *puVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(param_1 + 0x244))) {
    puVar3 = (undefined8 *)
             (((param_2 & 0xffffffff) % (ulong)*(uint *)(param_1 + 0x240)) * 0x10 +
             *(long *)(*(long *)(param_1 + 0x230) +
                      ((param_2 & 0xffffffff) / (ulong)*(uint *)(param_1 + 0x240)) * 8));
    iVar1 = *(int *)(puVar3 + 1);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      pVVar2 = (Vector3 *)*puVar3;
      if (pVVar2 != (Vector3 *)0x0) {
        JoltBody3D::set_constant_force(pVVar2);
        return;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("body_set_constant_force","modules/jolt_physics/jolt_physics_server_3d.cpp",0x323
                   ,"Parameter \"body\" is null.",0,0);
  return;
}



/* JoltPhysicsServer3D::body_get_constant_force(RID) const */

undefined8 __thiscall
JoltPhysicsServer3D::body_get_constant_force(JoltPhysicsServer3D *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long in_FS_OFFSET;
  undefined8 uVar4;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x244))) {
    plVar3 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x240)) * 0x10 +
                     *(long *)(*(long *)(this + 0x230) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x240)) * 8));
    iVar1 = (int)plVar3[1];
    if (iVar1 == (int)(param_2 >> 0x20)) {
      if (*plVar3 != 0) {
        if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar4 = JoltBody3D::get_constant_force();
          return uVar4;
        }
        goto LAB_001057a3;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("body_get_constant_force","modules/jolt_physics/jolt_physics_server_3d.cpp",0x32a
                   ,"Parameter \"body\" is null.",0,0);
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
LAB_001057a3:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltPhysicsServer3D::body_set_constant_torque(RID, Vector3 const&) */

void JoltPhysicsServer3D::body_set_constant_torque(long param_1,ulong param_2)

{
  int iVar1;
  Vector3 *pVVar2;
  undefined8 *puVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(param_1 + 0x244))) {
    puVar3 = (undefined8 *)
             (((param_2 & 0xffffffff) % (ulong)*(uint *)(param_1 + 0x240)) * 0x10 +
             *(long *)(*(long *)(param_1 + 0x230) +
                      ((param_2 & 0xffffffff) / (ulong)*(uint *)(param_1 + 0x240)) * 8));
    iVar1 = *(int *)(puVar3 + 1);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      pVVar2 = (Vector3 *)*puVar3;
      if (pVVar2 != (Vector3 *)0x0) {
        JoltBody3D::set_constant_torque(pVVar2);
        return;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("body_set_constant_torque","modules/jolt_physics/jolt_physics_server_3d.cpp",
                   0x331,"Parameter \"body\" is null.",0,0);
  return;
}



/* JoltPhysicsServer3D::body_get_constant_torque(RID) const */

undefined8 __thiscall
JoltPhysicsServer3D::body_get_constant_torque(JoltPhysicsServer3D *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long in_FS_OFFSET;
  undefined8 uVar4;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x244))) {
    plVar3 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x240)) * 0x10 +
                     *(long *)(*(long *)(this + 0x230) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x240)) * 8));
    iVar1 = (int)plVar3[1];
    if (iVar1 == (int)(param_2 >> 0x20)) {
      if (*plVar3 != 0) {
        if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar4 = JoltBody3D::get_constant_torque();
          return uVar4;
        }
        goto LAB_00105983;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("body_get_constant_torque","modules/jolt_physics/jolt_physics_server_3d.cpp",
                   0x338,"Parameter \"body\" is null.",0,0);
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
LAB_00105983:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltPhysicsServer3D::body_set_axis_velocity(RID, Vector3 const&) */

void JoltPhysicsServer3D::body_set_axis_velocity(long param_1,ulong param_2)

{
  int iVar1;
  Vector3 *pVVar2;
  undefined8 *puVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(param_1 + 0x244))) {
    puVar3 = (undefined8 *)
             (((param_2 & 0xffffffff) % (ulong)*(uint *)(param_1 + 0x240)) * 0x10 +
             *(long *)(*(long *)(param_1 + 0x230) +
                      ((param_2 & 0xffffffff) / (ulong)*(uint *)(param_1 + 0x240)) * 8));
    iVar1 = *(int *)(puVar3 + 1);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      pVVar2 = (Vector3 *)*puVar3;
      if (pVVar2 != (Vector3 *)0x0) {
        JoltBody3D::set_axis_velocity(pVVar2);
        return;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("body_set_axis_velocity","modules/jolt_physics/jolt_physics_server_3d.cpp",0x33f,
                   "Parameter \"body\" is null.",0,0);
  return;
}



/* JoltPhysicsServer3D::body_set_axis_lock(RID, PhysicsServer3D::BodyAxis, bool) */

void __thiscall
JoltPhysicsServer3D::body_set_axis_lock
          (JoltPhysicsServer3D *this,ulong param_2,undefined4 param_3,undefined1 param_4)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  if (param_2 != 0) {
    if ((uint)param_2 < *(uint *)(this + 0x244)) {
      plVar3 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x240)) * 0x10 +
                       *(long *)(*(long *)(this + 0x230) +
                                ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x240)) * 8));
      iVar1 = (int)plVar3[1];
      if (iVar1 == (int)(param_2 >> 0x20)) {
        lVar2 = *plVar3;
        if (lVar2 != 0) {
          JoltBody3D::set_axis_lock(lVar2,param_3,param_4);
          return;
        }
      }
      else if (iVar1 + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
  }
  _err_print_error("body_set_axis_lock","modules/jolt_physics/jolt_physics_server_3d.cpp",0x346,
                   "Parameter \"body\" is null.",0,0);
  return;
}



/* JoltPhysicsServer3D::body_is_axis_locked(RID, PhysicsServer3D::BodyAxis) const */

undefined8 __thiscall
JoltPhysicsServer3D::body_is_axis_locked(JoltPhysicsServer3D *this,ulong param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  
  if (param_2 != 0) {
    if ((uint)param_2 < *(uint *)(this + 0x244)) {
      plVar4 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x240)) * 0x10 +
                       *(long *)(*(long *)(this + 0x230) +
                                ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x240)) * 8));
      iVar1 = (int)plVar4[1];
      if (iVar1 == (int)(param_2 >> 0x20)) {
        lVar2 = *plVar4;
        if (lVar2 != 0) {
          uVar3 = JoltBody3D::is_axis_locked(lVar2,param_3);
          return uVar3;
        }
      }
      else if (iVar1 + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
  }
  _err_print_error("body_is_axis_locked","modules/jolt_physics/jolt_physics_server_3d.cpp",0x34d,
                   "Parameter \"body\" is null.",0,0);
  return 0;
}



/* JoltPhysicsServer3D::body_add_collision_exception(RID, RID) */

void JoltPhysicsServer3D::body_add_collision_exception(long param_1,ulong param_2)

{
  int iVar1;
  RID *pRVar2;
  undefined8 *puVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(param_1 + 0x244))) {
    puVar3 = (undefined8 *)
             (((param_2 & 0xffffffff) % (ulong)*(uint *)(param_1 + 0x240)) * 0x10 +
             *(long *)(*(long *)(param_1 + 0x230) +
                      ((param_2 & 0xffffffff) / (ulong)*(uint *)(param_1 + 0x240)) * 8));
    iVar1 = *(int *)(puVar3 + 1);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      pRVar2 = (RID *)*puVar3;
      if (pRVar2 != (RID *)0x0) {
        JoltBody3D::add_collision_exception(pRVar2);
        return;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("body_add_collision_exception","modules/jolt_physics/jolt_physics_server_3d.cpp",
                   0x354,"Parameter \"body\" is null.",0,0);
  return;
}



/* JoltPhysicsServer3D::body_remove_collision_exception(RID, RID) */

void JoltPhysicsServer3D::body_remove_collision_exception(long param_1,ulong param_2)

{
  int iVar1;
  RID *pRVar2;
  undefined8 *puVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(param_1 + 0x244))) {
    puVar3 = (undefined8 *)
             (((param_2 & 0xffffffff) % (ulong)*(uint *)(param_1 + 0x240)) * 0x10 +
             *(long *)(*(long *)(param_1 + 0x230) +
                      ((param_2 & 0xffffffff) / (ulong)*(uint *)(param_1 + 0x240)) * 8));
    iVar1 = *(int *)(puVar3 + 1);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      pRVar2 = (RID *)*puVar3;
      if (pRVar2 != (RID *)0x0) {
        JoltBody3D::remove_collision_exception(pRVar2);
        return;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("body_remove_collision_exception",
                   "modules/jolt_physics/jolt_physics_server_3d.cpp",0x35b,
                   "Parameter \"body\" is null.",0,0);
  return;
}



/* JoltPhysicsServer3D::body_set_max_contacts_reported(RID, int) */

void JoltPhysicsServer3D::body_set_max_contacts_reported(long param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(param_1 + 0x244))) {
    plVar3 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(param_1 + 0x240)) * 0x10 +
                     *(long *)(*(long *)(param_1 + 0x230) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(param_1 + 0x240)) * 8));
    iVar1 = (int)plVar3[1];
    if (iVar1 == (int)(param_2 >> 0x20)) {
      lVar2 = *plVar3;
      if (lVar2 != 0) {
        JoltBody3D::set_max_contacts_reported((int)lVar2);
        return;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("body_set_max_contacts_reported",
                   "modules/jolt_physics/jolt_physics_server_3d.cpp",0x36b,
                   "Parameter \"body\" is null.",0,0);
  return;
}



/* JoltPhysicsServer3D::body_set_omit_force_integration(RID, bool) */

void JoltPhysicsServer3D::body_set_omit_force_integration(long param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(param_1 + 0x244))) {
    plVar3 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(param_1 + 0x240)) * 0x10 +
                     *(long *)(*(long *)(param_1 + 0x230) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(param_1 + 0x240)) * 8));
    iVar1 = (int)plVar3[1];
    if (iVar1 == (int)(param_2 >> 0x20)) {
      lVar2 = *plVar3;
      if (lVar2 != 0) {
        JoltBody3D::set_custom_integrator(SUB81(lVar2,0));
        return;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("body_set_omit_force_integration",
                   "modules/jolt_physics/jolt_physics_server_3d.cpp",0x381,
                   "Parameter \"body\" is null.",0,0);
  return;
}



/* JoltPhysicsServer3D::body_set_state_sync_callback(RID, Callable const&) */

void __thiscall
JoltPhysicsServer3D::body_set_state_sync_callback
          (JoltPhysicsServer3D *this,ulong param_2,Callable *param_3)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x244))) {
    plVar3 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x240)) * 0x10 +
                     *(long *)(*(long *)(this + 0x230) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x240)) * 8));
    iVar1 = (int)plVar3[1];
    if (iVar1 == (int)(param_2 >> 0x20)) {
      lVar2 = *plVar3;
      if (lVar2 != 0) {
        Callable::operator=((Callable *)(lVar2 + 0x1a8),param_3);
        return;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("body_set_state_sync_callback","modules/jolt_physics/jolt_physics_server_3d.cpp",
                   0x38f,"Parameter \"body\" is null.",0,0);
  return;
}



/* JoltPhysicsServer3D::body_set_force_integration_callback(RID, Callable const&, Variant const&) */

void __thiscall
JoltPhysicsServer3D::body_set_force_integration_callback
          (JoltPhysicsServer3D *this,ulong param_2,Callable *param_3,Variant *param_4)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x244))) {
    plVar3 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x240)) * 0x10 +
                     *(long *)(*(long *)(this + 0x230) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x240)) * 8));
    iVar1 = (int)plVar3[1];
    if (iVar1 == (int)(param_2 >> 0x20)) {
      lVar2 = *plVar3;
      if (lVar2 != 0) {
        Callable::operator=((Callable *)(lVar2 + 0x1b8),param_3);
        Variant::operator=((Variant *)(lVar2 + 0x108),param_4);
        return;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("body_set_force_integration_callback",
                   "modules/jolt_physics/jolt_physics_server_3d.cpp",0x396,
                   "Parameter \"body\" is null.",0,0);
  return;
}



/* JoltPhysicsServer3D::body_test_motion(RID, PhysicsServer3D::MotionParameters const&,
   PhysicsServer3D::MotionResult*) */

undefined8 JoltPhysicsServer3D::body_test_motion(long param_1,ulong param_2,MotionResult *param_3)

{
  int iVar1;
  MotionParameters *pMVar2;
  JoltBody3D *pJVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(param_1 + 0x244))) {
    puVar5 = (undefined8 *)
             (((param_2 & 0xffffffff) % (ulong)*(uint *)(param_1 + 0x240)) * 0x10 +
             *(long *)(*(long *)(param_1 + 0x230) +
                      ((param_2 & 0xffffffff) / (ulong)*(uint *)(param_1 + 0x240)) * 8));
    iVar1 = *(int *)(puVar5 + 1);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      pMVar2 = (MotionParameters *)*puVar5;
      if (pMVar2 != (MotionParameters *)0x0) {
        if (*(long *)(pMVar2 + 0x28) == 0) {
          _err_print_error("body_test_motion","modules/jolt_physics/jolt_physics_server_3d.cpp",
                           0x3a7,"Parameter \"space\" is null.",0,0);
          return 0;
        }
        pJVar3 = (JoltBody3D *)JoltSpace3D::get_direct_state();
        uVar4 = JoltPhysicsDirectSpaceState3D::body_test_motion(pJVar3,pMVar2,param_3);
        return uVar4;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("body_test_motion","modules/jolt_physics/jolt_physics_server_3d.cpp",0x3a4,
                   "Parameter \"body\" is null.",0,0);
  return 0;
}



/* JoltPhysicsServer3D::body_get_direct_state(RID) */

undefined8 __thiscall
JoltPhysicsServer3D::body_get_direct_state(JoltPhysicsServer3D *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  
  if ((this[0x3b8] == (JoltPhysicsServer3D)0x0) || (this[0x3bb] != (JoltPhysicsServer3D)0x0)) {
    if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x244))) {
      plVar4 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x240)) * 0x10 +
                       *(long *)(*(long *)(this + 0x230) +
                                ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x240)) * 8));
      iVar1 = (int)plVar4[1];
      if (iVar1 == (int)(param_2 >> 0x20)) {
        lVar2 = *plVar4;
        if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x28), lVar2 != 0)) {
          if (*(char *)(lVar2 + 0x89) == '\0') {
            uVar3 = JoltBody3D::get_direct_state();
            return uVar3;
          }
          _err_print_error("body_get_direct_state","modules/jolt_physics/jolt_physics_server_3d.cpp"
                           ,0x3b4,
                           "Condition \"body->get_space()->is_stepping()\" is true. Returning: nullptr"
                           ,
                           "Body state is inaccessible right now, wait for iteration or physics process notification."
                           ,0,0);
        }
      }
      else if (iVar1 + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
  }
  else {
    _err_print_error("body_get_direct_state","modules/jolt_physics/jolt_physics_server_3d.cpp",0x3ad
                     ,
                     "Condition \"(on_separate_thread && !doing_sync)\" is true. Returning: nullptr"
                     ,
                     "Body state is inaccessible right now, wait for iteration or physics process notification."
                     ,0,0);
  }
  return 0;
}



/* JoltPhysicsServer3D::soft_body_update_rendering_server(RID,
   PhysicsServer3DRenderingServerHandler*) */

void JoltPhysicsServer3D::soft_body_update_rendering_server(long param_1,ulong param_2)

{
  int iVar1;
  PhysicsServer3DRenderingServerHandler *pPVar2;
  undefined8 *puVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(param_1 + 0x29c))) {
    puVar3 = (undefined8 *)
             (((param_2 & 0xffffffff) % (ulong)*(uint *)(param_1 + 0x298)) * 0x10 +
             *(long *)(*(long *)(param_1 + 0x288) +
                      ((param_2 & 0xffffffff) / (ulong)*(uint *)(param_1 + 0x298)) * 8));
    iVar1 = *(int *)(puVar3 + 1);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      pPVar2 = (PhysicsServer3DRenderingServerHandler *)*puVar3;
      if (pPVar2 != (PhysicsServer3DRenderingServerHandler *)0x0) {
        JoltSoftBody3D::update_rendering_server(pPVar2);
        return;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("soft_body_update_rendering_server",
                   "modules/jolt_physics/jolt_physics_server_3d.cpp",0x3c2,
                   "Parameter \"body\" is null.",0,0);
  return;
}



/* JoltPhysicsServer3D::soft_body_set_mesh(RID, RID) */

void JoltPhysicsServer3D::soft_body_set_mesh(long param_1,ulong param_2)

{
  int iVar1;
  RID *pRVar2;
  undefined8 *puVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(param_1 + 0x29c))) {
    puVar3 = (undefined8 *)
             (((param_2 & 0xffffffff) % (ulong)*(uint *)(param_1 + 0x298)) * 0x10 +
             *(long *)(*(long *)(param_1 + 0x288) +
                      ((param_2 & 0xffffffff) / (ulong)*(uint *)(param_1 + 0x298)) * 8));
    iVar1 = *(int *)(puVar3 + 1);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      pRVar2 = (RID *)*puVar3;
      if (pRVar2 != (RID *)0x0) {
        JoltSoftBody3D::set_mesh(pRVar2);
        return;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("soft_body_set_mesh","modules/jolt_physics/jolt_physics_server_3d.cpp",0x3e4,
                   "Parameter \"body\" is null.",0,0);
  return;
}



/* JoltPhysicsServer3D::soft_body_get_bounds(RID) const */

undefined8 *
JoltPhysicsServer3D::soft_body_get_bounds(undefined8 *param_1,long param_2,ulong param_3)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long in_FS_OFFSET;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(param_2 + 0x29c))) {
    plVar3 = (long *)(((param_3 & 0xffffffff) % (ulong)*(uint *)(param_2 + 0x298)) * 0x10 +
                     *(long *)(*(long *)(param_2 + 0x288) +
                              ((param_3 & 0xffffffff) / (ulong)*(uint *)(param_2 + 0x298)) * 8));
    iVar1 = (int)plVar3[1];
    if (iVar1 == (int)(param_3 >> 0x20)) {
      if (*plVar3 != 0) {
        JoltSoftBody3D::get_bounds();
        goto LAB_00106591;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("soft_body_get_bounds","modules/jolt_physics/jolt_physics_server_3d.cpp",0x3eb,
                   "Parameter \"body\" is null.",0,0);
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined8 *)((long)param_1 + 0xc) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
LAB_00106591:
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltPhysicsServer3D::soft_body_add_collision_exception(RID, RID) */

void JoltPhysicsServer3D::soft_body_add_collision_exception(long param_1,ulong param_2)

{
  int iVar1;
  RID *pRVar2;
  undefined8 *puVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(param_1 + 0x29c))) {
    puVar3 = (undefined8 *)
             (((param_2 & 0xffffffff) % (ulong)*(uint *)(param_1 + 0x298)) * 0x10 +
             *(long *)(*(long *)(param_1 + 0x288) +
                      ((param_2 & 0xffffffff) / (ulong)*(uint *)(param_1 + 0x298)) * 8));
    iVar1 = *(int *)(puVar3 + 1);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      pRVar2 = (RID *)*puVar3;
      if (pRVar2 != (RID *)0x0) {
        JoltSoftBody3D::add_collision_exception(pRVar2);
        return;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("soft_body_add_collision_exception",
                   "modules/jolt_physics/jolt_physics_server_3d.cpp",0x40e,
                   "Parameter \"body\" is null.",0,0);
  return;
}



/* JoltPhysicsServer3D::soft_body_remove_collision_exception(RID, RID) */

void JoltPhysicsServer3D::soft_body_remove_collision_exception(long param_1,ulong param_2)

{
  int iVar1;
  RID *pRVar2;
  undefined8 *puVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(param_1 + 0x29c))) {
    puVar3 = (undefined8 *)
             (((param_2 & 0xffffffff) % (ulong)*(uint *)(param_1 + 0x298)) * 0x10 +
             *(long *)(*(long *)(param_1 + 0x288) +
                      ((param_2 & 0xffffffff) / (ulong)*(uint *)(param_1 + 0x298)) * 8));
    iVar1 = *(int *)(puVar3 + 1);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      pRVar2 = (RID *)*puVar3;
      if (pRVar2 != (RID *)0x0) {
        JoltSoftBody3D::remove_collision_exception(pRVar2);
        return;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("soft_body_remove_collision_exception",
                   "modules/jolt_physics/jolt_physics_server_3d.cpp",0x415,
                   "Parameter \"body\" is null.",0,0);
  return;
}



/* JoltPhysicsServer3D::soft_body_set_state(RID, PhysicsServer3D::BodyState, Variant const&) */

void __thiscall
JoltPhysicsServer3D::soft_body_set_state
          (JoltPhysicsServer3D *this,ulong param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  if (param_2 != 0) {
    if ((uint)param_2 < *(uint *)(this + 0x29c)) {
      plVar3 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x298)) * 0x10 +
                       *(long *)(*(long *)(this + 0x288) +
                                ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x298)) * 8));
      iVar1 = (int)plVar3[1];
      if (iVar1 == (int)(param_2 >> 0x20)) {
        lVar2 = *plVar3;
        if (lVar2 != 0) {
          JoltSoftBody3D::set_state(lVar2,param_3,param_4);
          return;
        }
      }
      else if (iVar1 + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
  }
  _err_print_error("soft_body_set_state","modules/jolt_physics/jolt_physics_server_3d.cpp",0x425,
                   "Parameter \"body\" is null.",0,0);
  return;
}



/* JoltPhysicsServer3D::soft_body_get_state(RID, PhysicsServer3D::BodyState) const */

undefined4 *
JoltPhysicsServer3D::soft_body_get_state
          (undefined4 *param_1,long param_2,ulong param_3,undefined4 param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long in_FS_OFFSET;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(param_2 + 0x29c))) {
    plVar4 = (long *)(((param_3 & 0xffffffff) % (ulong)*(uint *)(param_2 + 0x298)) * 0x10 +
                     *(long *)(*(long *)(param_2 + 0x288) +
                              ((param_3 & 0xffffffff) / (ulong)*(uint *)(param_2 + 0x298)) * 8));
    iVar1 = (int)plVar4[1];
    if (iVar1 == (int)(param_3 >> 0x20)) {
      lVar3 = *plVar4;
      if (lVar3 != 0) {
        JoltSoftBody3D::get_state(param_1,lVar3,param_4);
        goto LAB_00106936;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("soft_body_get_state","modules/jolt_physics/jolt_physics_server_3d.cpp",0x42c,
                   "Parameter \"body\" is null.",0,0);
  *param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 2) = (undefined1  [16])0x0;
LAB_00106936:
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltPhysicsServer3D::soft_body_set_transform(RID, Transform3D const&) */

void JoltPhysicsServer3D::soft_body_set_transform(long param_1,ulong param_2)

{
  int iVar1;
  Transform3D *pTVar2;
  undefined8 *puVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(param_1 + 0x29c))) {
    puVar3 = (undefined8 *)
             (((param_2 & 0xffffffff) % (ulong)*(uint *)(param_1 + 0x298)) * 0x10 +
             *(long *)(*(long *)(param_1 + 0x288) +
                      ((param_2 & 0xffffffff) / (ulong)*(uint *)(param_1 + 0x298)) * 8));
    iVar1 = *(int *)(puVar3 + 1);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      pTVar2 = (Transform3D *)*puVar3;
      if (pTVar2 != (Transform3D *)0x0) {
        JoltSoftBody3D::set_transform(pTVar2);
        return;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("soft_body_set_transform","modules/jolt_physics/jolt_physics_server_3d.cpp",0x433
                   ,"Parameter \"body\" is null.",0,0);
  return;
}



/* JoltPhysicsServer3D::soft_body_set_simulation_precision(RID, int) */

void JoltPhysicsServer3D::soft_body_set_simulation_precision(long param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(param_1 + 0x29c))) {
    plVar3 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(param_1 + 0x298)) * 0x10 +
                     *(long *)(*(long *)(param_1 + 0x288) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(param_1 + 0x298)) * 8));
    iVar1 = (int)plVar3[1];
    if (iVar1 == (int)(param_2 >> 0x20)) {
      lVar2 = *plVar3;
      if (lVar2 != 0) {
        JoltSoftBody3D::set_simulation_precision((int)lVar2);
        return;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("soft_body_set_simulation_precision",
                   "modules/jolt_physics/jolt_physics_server_3d.cpp",0x441,
                   "Parameter \"body\" is null.",0,0);
  return;
}



/* JoltPhysicsServer3D::soft_body_set_total_mass(RID, float) */

void __thiscall
JoltPhysicsServer3D::soft_body_set_total_mass(float param_1,JoltPhysicsServer3D *this,ulong param_3)

{
  int iVar1;
  long *plVar2;
  
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(this + 0x29c))) {
    plVar2 = (long *)(((param_3 & 0xffffffff) % (ulong)*(uint *)(this + 0x298)) * 0x10 +
                     *(long *)(*(long *)(this + 0x288) +
                              ((param_3 & 0xffffffff) / (ulong)*(uint *)(this + 0x298)) * 8));
    iVar1 = (int)plVar2[1];
    if (iVar1 == (int)(param_3 >> 0x20)) {
      if (*plVar2 != 0) {
        JoltSoftBody3D::set_mass(param_1);
        return;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("soft_body_set_total_mass","modules/jolt_physics/jolt_physics_server_3d.cpp",
                   0x44f,"Parameter \"body\" is null.",0,0);
  return;
}



/* JoltPhysicsServer3D::soft_body_set_linear_stiffness(RID, float) */

void __thiscall
JoltPhysicsServer3D::soft_body_set_linear_stiffness
          (float param_1,JoltPhysicsServer3D *this,ulong param_3)

{
  int iVar1;
  long *plVar2;
  
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(this + 0x29c))) {
    plVar2 = (long *)(((param_3 & 0xffffffff) % (ulong)*(uint *)(this + 0x298)) * 0x10 +
                     *(long *)(*(long *)(this + 0x288) +
                              ((param_3 & 0xffffffff) / (ulong)*(uint *)(this + 0x298)) * 8));
    iVar1 = (int)plVar2[1];
    if (iVar1 == (int)(param_3 >> 0x20)) {
      if (*plVar2 != 0) {
        JoltSoftBody3D::set_stiffness_coefficient(param_1);
        return;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("soft_body_set_linear_stiffness",
                   "modules/jolt_physics/jolt_physics_server_3d.cpp",0x45d,
                   "Parameter \"body\" is null.",0,0);
  return;
}



/* JoltPhysicsServer3D::soft_body_get_linear_stiffness(RID) const */

undefined8 __thiscall
JoltPhysicsServer3D::soft_body_get_linear_stiffness(JoltPhysicsServer3D *this,ulong param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x29c))) {
    plVar2 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x298)) * 0x10 +
                     *(long *)(*(long *)(this + 0x288) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x298)) * 8));
    iVar1 = (int)plVar2[1];
    if (iVar1 == (int)(param_2 >> 0x20)) {
      if (*plVar2 != 0) {
        uVar3 = JoltSoftBody3D::get_stiffness_coefficient();
        return uVar3;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("soft_body_get_linear_stiffness",
                   "modules/jolt_physics/jolt_physics_server_3d.cpp",0x464,
                   "Parameter \"body\" is null.",0,0);
  return 0;
}



/* JoltPhysicsServer3D::soft_body_set_pressure_coefficient(RID, float) */

void __thiscall
JoltPhysicsServer3D::soft_body_set_pressure_coefficient
          (float param_1,JoltPhysicsServer3D *this,ulong param_3)

{
  int iVar1;
  long *plVar2;
  
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(this + 0x29c))) {
    plVar2 = (long *)(((param_3 & 0xffffffff) % (ulong)*(uint *)(this + 0x298)) * 0x10 +
                     *(long *)(*(long *)(this + 0x288) +
                              ((param_3 & 0xffffffff) / (ulong)*(uint *)(this + 0x298)) * 8));
    iVar1 = (int)plVar2[1];
    if (iVar1 == (int)(param_3 >> 0x20)) {
      if (*plVar2 != 0) {
        JoltSoftBody3D::set_pressure(param_1);
        return;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("soft_body_set_pressure_coefficient",
                   "modules/jolt_physics/jolt_physics_server_3d.cpp",0x46b,
                   "Parameter \"body\" is null.",0,0);
  return;
}



/* JoltPhysicsServer3D::soft_body_set_damping_coefficient(RID, float) */

void __thiscall
JoltPhysicsServer3D::soft_body_set_damping_coefficient
          (float param_1,JoltPhysicsServer3D *this,ulong param_3)

{
  int iVar1;
  long *plVar2;
  
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(this + 0x29c))) {
    plVar2 = (long *)(((param_3 & 0xffffffff) % (ulong)*(uint *)(this + 0x298)) * 0x10 +
                     *(long *)(*(long *)(this + 0x288) +
                              ((param_3 & 0xffffffff) / (ulong)*(uint *)(this + 0x298)) * 8));
    iVar1 = (int)plVar2[1];
    if (iVar1 == (int)(param_3 >> 0x20)) {
      if (*plVar2 != 0) {
        JoltSoftBody3D::set_linear_damping(param_1);
        return;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("soft_body_set_damping_coefficient",
                   "modules/jolt_physics/jolt_physics_server_3d.cpp",0x479,
                   "Parameter \"body\" is null.",0,0);
  return;
}



/* JoltPhysicsServer3D::soft_body_set_drag_coefficient(RID, float) */

void __thiscall
JoltPhysicsServer3D::soft_body_set_drag_coefficient
          (float param_1,JoltPhysicsServer3D *this,ulong param_3)

{
  int iVar1;
  long *plVar2;
  
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(this + 0x29c))) {
    plVar2 = (long *)(((param_3 & 0xffffffff) % (ulong)*(uint *)(this + 0x298)) * 0x10 +
                     *(long *)(*(long *)(this + 0x288) +
                              ((param_3 & 0xffffffff) / (ulong)*(uint *)(this + 0x298)) * 8));
    iVar1 = (int)plVar2[1];
    if (iVar1 == (int)(param_3 >> 0x20)) {
      if (*plVar2 != 0) {
        JoltSoftBody3D::set_drag(param_1);
        return;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("soft_body_set_drag_coefficient",
                   "modules/jolt_physics/jolt_physics_server_3d.cpp",0x487,
                   "Parameter \"body\" is null.",0,0);
  return;
}



/* JoltPhysicsServer3D::soft_body_get_drag_coefficient(RID) const */

undefined8 __thiscall
JoltPhysicsServer3D::soft_body_get_drag_coefficient(JoltPhysicsServer3D *this,ulong param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x29c))) {
    plVar2 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x298)) * 0x10 +
                     *(long *)(*(long *)(this + 0x288) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x298)) * 8));
    iVar1 = (int)plVar2[1];
    if (iVar1 == (int)(param_2 >> 0x20)) {
      if (*plVar2 != 0) {
        uVar3 = JoltSoftBody3D::get_drag();
        return uVar3;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("soft_body_get_drag_coefficient",
                   "modules/jolt_physics/jolt_physics_server_3d.cpp",0x48e,
                   "Parameter \"body\" is null.",0,0);
  return 0;
}



/* JoltPhysicsServer3D::soft_body_move_point(RID, int, Vector3 const&) */

void JoltPhysicsServer3D::soft_body_move_point(long param_1,ulong param_2,uint param_3)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  if (param_2 != 0) {
    if ((uint)param_2 < *(uint *)(param_1 + 0x29c)) {
      plVar3 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(param_1 + 0x298)) * 0x10 +
                       *(long *)(*(long *)(param_1 + 0x288) +
                                ((param_2 & 0xffffffff) / (ulong)*(uint *)(param_1 + 0x298)) * 8));
      iVar1 = (int)plVar3[1];
      if (iVar1 == (int)(param_2 >> 0x20)) {
        lVar2 = *plVar3;
        if (lVar2 != 0) {
          JoltSoftBody3D::set_vertex_position((int)lVar2,(Vector3 *)(ulong)param_3);
          return;
        }
      }
      else if (iVar1 + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
  }
  _err_print_error("soft_body_move_point","modules/jolt_physics/jolt_physics_server_3d.cpp",0x495,
                   "Parameter \"body\" is null.",0,0);
  return;
}



/* JoltPhysicsServer3D::soft_body_get_point_global_position(RID, int) const */

undefined8 JoltPhysicsServer3D::soft_body_get_point_global_position(long param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long in_FS_OFFSET;
  undefined8 uVar5;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(param_1 + 0x29c))) {
    plVar4 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(param_1 + 0x298)) * 0x10 +
                     *(long *)(*(long *)(param_1 + 0x288) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(param_1 + 0x298)) * 8));
    iVar1 = (int)plVar4[1];
    if (iVar1 == (int)(param_2 >> 0x20)) {
      lVar3 = *plVar4;
      if (lVar3 != 0) {
        if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar5 = JoltSoftBody3D::get_vertex_position((int)lVar3);
          return uVar5;
        }
        goto LAB_001072bb;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("soft_body_get_point_global_position",
                   "modules/jolt_physics/jolt_physics_server_3d.cpp",0x49c,
                   "Parameter \"body\" is null.",0,0);
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
LAB_001072bb:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltPhysicsServer3D::soft_body_remove_all_pinned_points(RID) */

void __thiscall
JoltPhysicsServer3D::soft_body_remove_all_pinned_points(JoltPhysicsServer3D *this,ulong param_2)

{
  int iVar1;
  long *plVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x29c))) {
    plVar2 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x298)) * 0x10 +
                     *(long *)(*(long *)(this + 0x288) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x298)) * 8));
    iVar1 = (int)plVar2[1];
    if (iVar1 == (int)(param_2 >> 0x20)) {
      if (*plVar2 != 0) {
        JoltSoftBody3D::unpin_all_vertices();
        return;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("soft_body_remove_all_pinned_points",
                   "modules/jolt_physics/jolt_physics_server_3d.cpp",0x4a3,
                   "Parameter \"body\" is null.",0,0);
  return;
}



/* JoltPhysicsServer3D::soft_body_pin_point(RID, int, bool) */

void __thiscall
JoltPhysicsServer3D::soft_body_pin_point
          (JoltPhysicsServer3D *this,ulong param_2,undefined8 param_3,char param_4)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x29c))) {
    plVar2 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x298)) * 0x10 +
                     *(long *)(*(long *)(this + 0x288) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x298)) * 8));
    iVar3 = (int)plVar2[1];
    if (iVar3 == (int)(param_2 >> 0x20)) {
      lVar1 = *plVar2;
      if (lVar1 != 0) {
        iVar3 = (int)lVar1;
        if (param_4 != '\0') {
          JoltSoftBody3D::pin_vertex(iVar3);
          return;
        }
        JoltSoftBody3D::unpin_vertex(iVar3);
        return;
      }
    }
    else if (iVar3 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("soft_body_pin_point","modules/jolt_physics/jolt_physics_server_3d.cpp",0x4aa,
                   "Parameter \"body\" is null.",0,0);
  return;
}



/* JoltPhysicsServer3D::soft_body_is_point_pinned(RID, int) const */

undefined8 JoltPhysicsServer3D::soft_body_is_point_pinned(long param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(param_1 + 0x29c))) {
    plVar4 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(param_1 + 0x298)) * 0x10 +
                     *(long *)(*(long *)(param_1 + 0x288) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(param_1 + 0x298)) * 8));
    iVar1 = (int)plVar4[1];
    if (iVar1 == (int)(param_2 >> 0x20)) {
      lVar2 = *plVar4;
      if (lVar2 != 0) {
        uVar3 = JoltSoftBody3D::is_vertex_pinned((int)lVar2);
        return uVar3;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("soft_body_is_point_pinned","modules/jolt_physics/jolt_physics_server_3d.cpp",
                   0x4b5,"Parameter \"body\" is null.",0,0);
  return 0;
}



/* JoltPhysicsServer3D::pin_joint_set_param(RID, PhysicsServer3D::PinJointParam, float) */

void __thiscall
JoltPhysicsServer3D::pin_joint_set_param
          (float param_1,JoltPhysicsServer3D *this,ulong param_3,undefined4 param_4)

{
  int iVar1;
  char *pcVar2;
  long *plVar3;
  undefined8 uVar4;
  
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(this + 0x34c))) {
    plVar3 = (long *)(((param_3 & 0xffffffff) % (ulong)*(uint *)(this + 0x348)) * 0x10 +
                     *(long *)(*(long *)(this + 0x338) +
                              ((param_3 & 0xffffffff) / (ulong)*(uint *)(this + 0x348)) * 8));
    iVar1 = (int)plVar3[1];
    if (iVar1 == (int)(param_3 >> 0x20)) {
      plVar3 = (long *)*plVar3;
      if (plVar3 != (long *)0x0) {
        iVar1 = (**(code **)(*plVar3 + 0x10))(plVar3);
        if (iVar1 == 0) {
          JoltPinJoint3D::set_param((double)param_1,plVar3,param_4);
          return;
        }
        uVar4 = 0x4e6;
        pcVar2 = "Condition \"joint->get_type() != JOINT_TYPE_PIN\" is true.";
        goto LAB_001075d2;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  uVar4 = 0x4e4;
  pcVar2 = "Parameter \"joint\" is null.";
LAB_001075d2:
  _err_print_error("pin_joint_set_param","modules/jolt_physics/jolt_physics_server_3d.cpp",uVar4,
                   pcVar2,0,0);
  return;
}



/* JoltPhysicsServer3D::pin_joint_get_param(RID, PhysicsServer3D::PinJointParam) const */

undefined8 __thiscall
JoltPhysicsServer3D::pin_joint_get_param(JoltPhysicsServer3D *this,ulong param_2,undefined4 param_3)

{
  int iVar1;
  long *plVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 extraout_XMM0_Qb;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x34c))) {
    plVar2 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x348)) * 0x10 +
                     *(long *)(*(long *)(this + 0x338) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x348)) * 8));
    iVar1 = (int)plVar2[1];
    if (iVar1 == (int)(param_2 >> 0x20)) {
      plVar2 = (long *)*plVar2;
      if (plVar2 != (long *)0x0) {
        iVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
        if (iVar1 != 0) {
          _err_print_error("pin_joint_get_param","modules/jolt_physics/jolt_physics_server_3d.cpp",
                           0x4f0,
                           "Condition \"joint->get_type() != JOINT_TYPE_PIN\" is true. Returning: 0.0"
                           ,0,0);
          return 0;
        }
        auVar3._0_8_ = (double)JoltPinJoint3D::get_param(plVar2,param_3);
        auVar3._8_8_ = extraout_XMM0_Qb;
        auVar4._4_12_ = auVar3._4_12_;
        auVar4._0_4_ = (float)auVar3._0_8_;
        return auVar4._0_8_;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("pin_joint_get_param","modules/jolt_physics/jolt_physics_server_3d.cpp",0x4ee,
                   "Parameter \"joint\" is null.",0,0);
  return 0;
}



/* JoltPhysicsServer3D::pin_joint_set_local_a(RID, Vector3 const&) */

void JoltPhysicsServer3D::pin_joint_set_local_a(long param_1,ulong param_2)

{
  Vector3 *pVVar1;
  int iVar2;
  char *pcVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(param_1 + 0x34c))) {
    puVar4 = (undefined8 *)
             (((param_2 & 0xffffffff) % (ulong)*(uint *)(param_1 + 0x348)) * 0x10 +
             *(long *)(*(long *)(param_1 + 0x338) +
                      ((param_2 & 0xffffffff) / (ulong)*(uint *)(param_1 + 0x348)) * 8));
    iVar2 = *(int *)(puVar4 + 1);
    if (iVar2 == (int)(param_2 >> 0x20)) {
      pVVar1 = (Vector3 *)*puVar4;
      if (pVVar1 != (Vector3 *)0x0) {
        iVar2 = (**(code **)(*(long *)pVVar1 + 0x10))(pVVar1);
        if (iVar2 == 0) {
          JoltPinJoint3D::set_local_a(pVVar1);
          return;
        }
        uVar5 = 0x4fa;
        pcVar3 = "Condition \"joint->get_type() != JOINT_TYPE_PIN\" is true.";
        goto LAB_001077f2;
      }
    }
    else if (iVar2 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  uVar5 = 0x4f8;
  pcVar3 = "Parameter \"joint\" is null.";
LAB_001077f2:
  _err_print_error("pin_joint_set_local_a","modules/jolt_physics/jolt_physics_server_3d.cpp",uVar5,
                   pcVar3,0,0);
  return;
}



/* JoltPhysicsServer3D::pin_joint_set_local_b(RID, Vector3 const&) */

void JoltPhysicsServer3D::pin_joint_set_local_b(long param_1,ulong param_2)

{
  Vector3 *pVVar1;
  int iVar2;
  char *pcVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(param_1 + 0x34c))) {
    puVar4 = (undefined8 *)
             (((param_2 & 0xffffffff) % (ulong)*(uint *)(param_1 + 0x348)) * 0x10 +
             *(long *)(*(long *)(param_1 + 0x338) +
                      ((param_2 & 0xffffffff) / (ulong)*(uint *)(param_1 + 0x348)) * 8));
    iVar2 = *(int *)(puVar4 + 1);
    if (iVar2 == (int)(param_2 >> 0x20)) {
      pVVar1 = (Vector3 *)*puVar4;
      if (pVVar1 != (Vector3 *)0x0) {
        iVar2 = (**(code **)(*(long *)pVVar1 + 0x10))(pVVar1);
        if (iVar2 == 0) {
          JoltPinJoint3D::set_local_b(pVVar1);
          return;
        }
        uVar5 = 0x50e;
        pcVar3 = "Condition \"joint->get_type() != JOINT_TYPE_PIN\" is true.";
        goto LAB_001078f2;
      }
    }
    else if (iVar2 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  uVar5 = 0x50c;
  pcVar3 = "Parameter \"joint\" is null.";
LAB_001078f2:
  _err_print_error("pin_joint_set_local_b","modules/jolt_physics/jolt_physics_server_3d.cpp",uVar5,
                   pcVar3,0,0);
  return;
}



/* JoltPhysicsServer3D::hinge_joint_set_param(RID, PhysicsServer3D::HingeJointParam, float) */

void __thiscall
JoltPhysicsServer3D::hinge_joint_set_param
          (float param_1,JoltPhysicsServer3D *this,ulong param_3,undefined4 param_4)

{
  int iVar1;
  char *pcVar2;
  long *plVar3;
  undefined8 uVar4;
  
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(this + 0x34c))) {
    plVar3 = (long *)(((param_3 & 0xffffffff) % (ulong)*(uint *)(this + 0x348)) * 0x10 +
                     *(long *)(*(long *)(this + 0x338) +
                              ((param_3 & 0xffffffff) / (ulong)*(uint *)(this + 0x348)) * 8));
    iVar1 = (int)plVar3[1];
    if (iVar1 == (int)(param_3 >> 0x20)) {
      plVar3 = (long *)*plVar3;
      if (plVar3 != (long *)0x0) {
        iVar1 = (**(code **)(*plVar3 + 0x10))(plVar3);
        if (iVar1 == 1) {
          JoltHingeJoint3D::set_param((double)param_1,plVar3,param_4);
          return;
        }
        uVar4 = 0x538;
        pcVar2 = "Condition \"joint->get_type() != JOINT_TYPE_HINGE\" is true.";
        goto LAB_00107a02;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  uVar4 = 0x536;
  pcVar2 = "Parameter \"joint\" is null.";
LAB_00107a02:
  _err_print_error("hinge_joint_set_param","modules/jolt_physics/jolt_physics_server_3d.cpp",uVar4,
                   pcVar2,0,0);
  return;
}



/* JoltPhysicsServer3D::hinge_joint_get_param(RID, PhysicsServer3D::HingeJointParam) const */

undefined8 __thiscall
JoltPhysicsServer3D::hinge_joint_get_param
          (JoltPhysicsServer3D *this,ulong param_2,undefined4 param_3)

{
  int iVar1;
  long *plVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 extraout_XMM0_Qb;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x34c))) {
    plVar2 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x348)) * 0x10 +
                     *(long *)(*(long *)(this + 0x338) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x348)) * 8));
    iVar1 = (int)plVar2[1];
    if (iVar1 == (int)(param_2 >> 0x20)) {
      plVar2 = (long *)*plVar2;
      if (plVar2 != (long *)0x0) {
        iVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
        if (iVar1 != 1) {
          _err_print_error("hinge_joint_get_param","modules/jolt_physics/jolt_physics_server_3d.cpp"
                           ,0x542,
                           "Condition \"joint->get_type() != JOINT_TYPE_HINGE\" is true. Returning: 0.0"
                           ,0,0);
          return 0;
        }
        auVar3._0_8_ = (double)JoltHingeJoint3D::get_param(plVar2,param_3);
        auVar3._8_8_ = extraout_XMM0_Qb;
        auVar4._4_12_ = auVar3._4_12_;
        auVar4._0_4_ = (float)auVar3._0_8_;
        return auVar4._0_8_;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("hinge_joint_get_param","modules/jolt_physics/jolt_physics_server_3d.cpp",0x540,
                   "Parameter \"joint\" is null.",0,0);
  return 0;
}



/* JoltPhysicsServer3D::hinge_joint_set_flag(RID, PhysicsServer3D::HingeJointFlag, bool) */

void __thiscall
JoltPhysicsServer3D::hinge_joint_set_flag
          (JoltPhysicsServer3D *this,ulong param_2,undefined4 param_3,undefined1 param_4)

{
  int iVar1;
  char *pcVar2;
  long *plVar3;
  undefined8 uVar4;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x34c))) {
    plVar3 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x348)) * 0x10 +
                     *(long *)(*(long *)(this + 0x338) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x348)) * 8));
    iVar1 = (int)plVar3[1];
    if (iVar1 == (int)(param_2 >> 0x20)) {
      plVar3 = (long *)*plVar3;
      if (plVar3 != (long *)0x0) {
        iVar1 = (**(code **)(*plVar3 + 0x10))(plVar3);
        if (iVar1 == 1) {
          JoltHingeJoint3D::set_flag(plVar3,param_3,param_4);
          return;
        }
        uVar4 = 0x54c;
        pcVar2 = "Condition \"joint->get_type() != JOINT_TYPE_HINGE\" is true.";
        goto LAB_00107c22;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  uVar4 = 0x54a;
  pcVar2 = "Parameter \"joint\" is null.";
LAB_00107c22:
  _err_print_error("hinge_joint_set_flag","modules/jolt_physics/jolt_physics_server_3d.cpp",uVar4,
                   pcVar2,0,0);
  return;
}



/* JoltPhysicsServer3D::hinge_joint_get_flag(RID, PhysicsServer3D::HingeJointFlag) const */

undefined8 __thiscall
JoltPhysicsServer3D::hinge_joint_get_flag
          (JoltPhysicsServer3D *this,ulong param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x34c))) {
    plVar3 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x348)) * 0x10 +
                     *(long *)(*(long *)(this + 0x338) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x348)) * 8));
    iVar1 = (int)plVar3[1];
    if (iVar1 == (int)(param_2 >> 0x20)) {
      plVar3 = (long *)*plVar3;
      if (plVar3 != (long *)0x0) {
        iVar1 = (**(code **)(*plVar3 + 0x10))(plVar3);
        if (iVar1 != 1) {
          _err_print_error("hinge_joint_get_flag","modules/jolt_physics/jolt_physics_server_3d.cpp",
                           0x556,
                           "Condition \"joint->get_type() != JOINT_TYPE_HINGE\" is true. Returning: false"
                           ,0,0);
          return 0;
        }
        uVar2 = JoltHingeJoint3D::get_flag(plVar3,param_3);
        return uVar2;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("hinge_joint_get_flag","modules/jolt_physics/jolt_physics_server_3d.cpp",0x554,
                   "Parameter \"joint\" is null.",0,0);
  return 0;
}



/* JoltPhysicsServer3D::slider_joint_set_param(RID, PhysicsServer3D::SliderJointParam, float) */

void __thiscall
JoltPhysicsServer3D::slider_joint_set_param
          (float param_1,JoltPhysicsServer3D *this,ulong param_3,undefined4 param_4)

{
  int iVar1;
  char *pcVar2;
  long *plVar3;
  undefined8 uVar4;
  
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(this + 0x34c))) {
    plVar3 = (long *)(((param_3 & 0xffffffff) % (ulong)*(uint *)(this + 0x348)) * 0x10 +
                     *(long *)(*(long *)(this + 0x338) +
                              ((param_3 & 0xffffffff) / (ulong)*(uint *)(this + 0x348)) * 8));
    iVar1 = (int)plVar3[1];
    if (iVar1 == (int)(param_3 >> 0x20)) {
      plVar3 = (long *)*plVar3;
      if (plVar3 != (long *)0x0) {
        iVar1 = (**(code **)(*plVar3 + 0x10))(plVar3);
        if (iVar1 == 2) {
          JoltSliderJoint3D::set_param((double)param_1,plVar3,param_4);
          return;
        }
        uVar4 = 0x572;
        pcVar2 = "Condition \"joint->get_type() != JOINT_TYPE_SLIDER\" is true.";
        goto LAB_00107e52;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  uVar4 = 0x570;
  pcVar2 = "Parameter \"joint\" is null.";
LAB_00107e52:
  _err_print_error("slider_joint_set_param","modules/jolt_physics/jolt_physics_server_3d.cpp",uVar4,
                   pcVar2,0,0);
  return;
}



/* JoltPhysicsServer3D::slider_joint_get_param(RID, PhysicsServer3D::SliderJointParam) const */

undefined8 __thiscall
JoltPhysicsServer3D::slider_joint_get_param
          (JoltPhysicsServer3D *this,ulong param_2,undefined4 param_3)

{
  int iVar1;
  long *plVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 extraout_XMM0_Qb;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x34c))) {
    plVar2 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x348)) * 0x10 +
                     *(long *)(*(long *)(this + 0x338) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x348)) * 8));
    iVar1 = (int)plVar2[1];
    if (iVar1 == (int)(param_2 >> 0x20)) {
      plVar2 = (long *)*plVar2;
      if (plVar2 != (long *)0x0) {
        iVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
        if (iVar1 != 2) {
          _err_print_error("slider_joint_get_param",
                           "modules/jolt_physics/jolt_physics_server_3d.cpp",0x57c,
                           "Condition \"joint->get_type() != JOINT_TYPE_SLIDER\" is true. Returning: 0.0"
                           ,0,0);
          return 0;
        }
        auVar3._0_8_ = (double)JoltSliderJoint3D::get_param(plVar2,param_3);
        auVar3._8_8_ = extraout_XMM0_Qb;
        auVar4._4_12_ = auVar3._4_12_;
        auVar4._0_4_ = (float)auVar3._0_8_;
        return auVar4._0_8_;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("slider_joint_get_param","modules/jolt_physics/jolt_physics_server_3d.cpp",0x57a,
                   "Parameter \"joint\" is null.",0,0);
  return 0;
}



/* JoltPhysicsServer3D::cone_twist_joint_set_param(RID, PhysicsServer3D::ConeTwistJointParam, float)
    */

void __thiscall
JoltPhysicsServer3D::cone_twist_joint_set_param
          (float param_1,JoltPhysicsServer3D *this,ulong param_3,undefined4 param_4)

{
  int iVar1;
  char *pcVar2;
  long *plVar3;
  undefined8 uVar4;
  
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(this + 0x34c))) {
    plVar3 = (long *)(((param_3 & 0xffffffff) % (ulong)*(uint *)(this + 0x348)) * 0x10 +
                     *(long *)(*(long *)(this + 0x338) +
                              ((param_3 & 0xffffffff) / (ulong)*(uint *)(this + 0x348)) * 8));
    iVar1 = (int)plVar3[1];
    if (iVar1 == (int)(param_3 >> 0x20)) {
      plVar3 = (long *)*plVar3;
      if (plVar3 != (long *)0x0) {
        iVar1 = (**(code **)(*plVar3 + 0x10))(plVar3);
        if (iVar1 == 3) {
          JoltConeTwistJoint3D::set_param((double)param_1,plVar3,param_4);
          return;
        }
        uVar4 = 0x598;
        pcVar2 = "Condition \"joint->get_type() != JOINT_TYPE_CONE_TWIST\" is true.";
        goto LAB_00108082;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  uVar4 = 0x596;
  pcVar2 = "Parameter \"joint\" is null.";
LAB_00108082:
  _err_print_error("cone_twist_joint_set_param","modules/jolt_physics/jolt_physics_server_3d.cpp",
                   uVar4,pcVar2,0,0);
  return;
}



/* JoltPhysicsServer3D::cone_twist_joint_get_param(RID, PhysicsServer3D::ConeTwistJointParam) const
    */

undefined8 __thiscall
JoltPhysicsServer3D::cone_twist_joint_get_param
          (JoltPhysicsServer3D *this,ulong param_2,undefined4 param_3)

{
  int iVar1;
  long *plVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 extraout_XMM0_Qb;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x34c))) {
    plVar2 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x348)) * 0x10 +
                     *(long *)(*(long *)(this + 0x338) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x348)) * 8));
    iVar1 = (int)plVar2[1];
    if (iVar1 == (int)(param_2 >> 0x20)) {
      plVar2 = (long *)*plVar2;
      if (plVar2 != (long *)0x0) {
        iVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
        if (iVar1 != 3) {
          _err_print_error("cone_twist_joint_get_param",
                           "modules/jolt_physics/jolt_physics_server_3d.cpp",0x5a2,
                           "Condition \"joint->get_type() != JOINT_TYPE_CONE_TWIST\" is true. Returning: 0.0"
                           ,0,0);
          return 0;
        }
        auVar3._0_8_ = (double)JoltConeTwistJoint3D::get_param(plVar2,param_3);
        auVar3._8_8_ = extraout_XMM0_Qb;
        auVar4._4_12_ = auVar3._4_12_;
        auVar4._0_4_ = (float)auVar3._0_8_;
        return auVar4._0_8_;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("cone_twist_joint_get_param","modules/jolt_physics/jolt_physics_server_3d.cpp",
                   0x5a0,"Parameter \"joint\" is null.",0,0);
  return 0;
}



/* JoltPhysicsServer3D::generic_6dof_joint_set_param(RID, Vector3::Axis,
   PhysicsServer3D::G6DOFJointAxisParam, float) */

void __thiscall
JoltPhysicsServer3D::generic_6dof_joint_set_param
          (float param_1,JoltPhysicsServer3D *this,ulong param_3,undefined4 param_4,
          undefined4 param_5)

{
  int iVar1;
  char *pcVar2;
  long *plVar3;
  undefined8 uVar4;
  
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(this + 0x34c))) {
    plVar3 = (long *)(((param_3 & 0xffffffff) % (ulong)*(uint *)(this + 0x348)) * 0x10 +
                     *(long *)(*(long *)(this + 0x338) +
                              ((param_3 & 0xffffffff) / (ulong)*(uint *)(this + 0x348)) * 8));
    iVar1 = (int)plVar3[1];
    if (iVar1 == (int)(param_3 >> 0x20)) {
      plVar3 = (long *)*plVar3;
      if (plVar3 != (long *)0x0) {
        iVar1 = (**(code **)(*plVar3 + 0x10))(plVar3);
        if (iVar1 == 4) {
          JoltGeneric6DOFJoint3D::set_param((double)param_1,plVar3,param_4,param_5);
          return;
        }
        uVar4 = 0x5be;
        pcVar2 = "Condition \"joint->get_type() != JOINT_TYPE_6DOF\" is true.";
        goto LAB_001082b2;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  uVar4 = 0x5bc;
  pcVar2 = "Parameter \"joint\" is null.";
LAB_001082b2:
  _err_print_error("generic_6dof_joint_set_param","modules/jolt_physics/jolt_physics_server_3d.cpp",
                   uVar4,pcVar2,0,0);
  return;
}



/* JoltPhysicsServer3D::generic_6dof_joint_get_param(RID, Vector3::Axis,
   PhysicsServer3D::G6DOFJointAxisParam) const */

undefined8 __thiscall
JoltPhysicsServer3D::generic_6dof_joint_get_param
          (JoltPhysicsServer3D *this,ulong param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  long *plVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 extraout_XMM0_Qb;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x34c))) {
    plVar2 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x348)) * 0x10 +
                     *(long *)(*(long *)(this + 0x338) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x348)) * 8));
    iVar1 = (int)plVar2[1];
    if (iVar1 == (int)(param_2 >> 0x20)) {
      plVar2 = (long *)*plVar2;
      if (plVar2 != (long *)0x0) {
        iVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
        if (iVar1 != 4) {
          _err_print_error("generic_6dof_joint_get_param",
                           "modules/jolt_physics/jolt_physics_server_3d.cpp",0x5c8,
                           "Condition \"joint->get_type() != JOINT_TYPE_6DOF\" is true. Returning: 0.0"
                           ,0,0);
          return 0;
        }
        auVar3._0_8_ = (double)JoltGeneric6DOFJoint3D::get_param(plVar2,param_3,param_4);
        auVar3._8_8_ = extraout_XMM0_Qb;
        auVar4._4_12_ = auVar3._4_12_;
        auVar4._0_4_ = (float)auVar3._0_8_;
        return auVar4._0_8_;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("generic_6dof_joint_get_param","modules/jolt_physics/jolt_physics_server_3d.cpp",
                   0x5c6,"Parameter \"joint\" is null.",0,0);
  return 0;
}



/* JoltPhysicsServer3D::generic_6dof_joint_set_flag(RID, Vector3::Axis,
   PhysicsServer3D::G6DOFJointAxisFlag, bool) */

void __thiscall
JoltPhysicsServer3D::generic_6dof_joint_set_flag
          (JoltPhysicsServer3D *this,ulong param_2,undefined4 param_3,undefined4 param_4,
          undefined1 param_5)

{
  int iVar1;
  char *pcVar2;
  long *plVar3;
  undefined8 uVar4;
  
  if (param_2 != 0) {
    if ((uint)param_2 < *(uint *)(this + 0x34c)) {
      plVar3 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x348)) * 0x10 +
                       *(long *)(*(long *)(this + 0x338) +
                                ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x348)) * 8));
      iVar1 = (int)plVar3[1];
      if (iVar1 == (int)(param_2 >> 0x20)) {
        plVar3 = (long *)*plVar3;
        if (plVar3 != (long *)0x0) {
          iVar1 = (**(code **)(*plVar3 + 0x10))(plVar3);
          if (iVar1 == 4) {
            JoltGeneric6DOFJoint3D::set_flag(plVar3,param_3,param_4,param_5);
            return;
          }
          uVar4 = 0x5d2;
          pcVar2 = "Condition \"joint->get_type() != JOINT_TYPE_6DOF\" is true.";
          goto LAB_001084e2;
        }
      }
      else if (iVar1 + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
  }
  uVar4 = 0x5d0;
  pcVar2 = "Parameter \"joint\" is null.";
LAB_001084e2:
  _err_print_error("generic_6dof_joint_set_flag","modules/jolt_physics/jolt_physics_server_3d.cpp",
                   uVar4,pcVar2,0,0);
  return;
}



/* JoltPhysicsServer3D::generic_6dof_joint_get_flag(RID, Vector3::Axis,
   PhysicsServer3D::G6DOFJointAxisFlag) const */

undefined8 __thiscall
JoltPhysicsServer3D::generic_6dof_joint_get_flag
          (JoltPhysicsServer3D *this,ulong param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x34c))) {
    plVar3 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x348)) * 0x10 +
                     *(long *)(*(long *)(this + 0x338) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x348)) * 8));
    iVar1 = (int)plVar3[1];
    if (iVar1 == (int)(param_2 >> 0x20)) {
      plVar3 = (long *)*plVar3;
      if (plVar3 != (long *)0x0) {
        iVar1 = (**(code **)(*plVar3 + 0x10))(plVar3);
        if (iVar1 != 4) {
          _err_print_error("generic_6dof_joint_get_flag",
                           "modules/jolt_physics/jolt_physics_server_3d.cpp",0x5dc,
                           "Condition \"joint->get_type() != JOINT_TYPE_6DOF\" is true. Returning: false"
                           ,0,0);
          return 0;
        }
        uVar2 = JoltGeneric6DOFJoint3D::get_flag(plVar3,param_3,param_4);
        return uVar2;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("generic_6dof_joint_get_flag","modules/jolt_physics/jolt_physics_server_3d.cpp",
                   0x5da,"Parameter \"joint\" is null.",0,0);
  return 0;
}



/* JoltPhysicsServer3D::joint_set_solver_priority(RID, int) */

void JoltPhysicsServer3D::joint_set_solver_priority(long param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(param_1 + 0x34c))) {
    plVar3 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(param_1 + 0x348)) * 0x10 +
                     *(long *)(*(long *)(param_1 + 0x338) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(param_1 + 0x348)) * 8));
    iVar1 = (int)plVar3[1];
    if (iVar1 == (int)(param_2 >> 0x20)) {
      lVar2 = *plVar3;
      if (lVar2 != 0) {
        JoltJoint3D::set_solver_priority((int)lVar2);
        return;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("joint_set_solver_priority","modules/jolt_physics/jolt_physics_server_3d.cpp",
                   0x5eb,"Parameter \"joint\" is null.",0,0);
  return;
}



/* JoltPhysicsServer3D::joint_get_solver_priority(RID) const */

undefined8 __thiscall
JoltPhysicsServer3D::joint_get_solver_priority(JoltPhysicsServer3D *this,ulong param_2)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x34c))) {
    plVar3 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x348)) * 0x10 +
                     *(long *)(*(long *)(this + 0x338) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x348)) * 8));
    iVar1 = (int)plVar3[1];
    if (iVar1 == (int)(param_2 >> 0x20)) {
      if (*plVar3 != 0) {
        uVar2 = JoltJoint3D::get_solver_priority();
        return uVar2;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("joint_get_solver_priority","modules/jolt_physics/jolt_physics_server_3d.cpp",
                   0x5f2,"Parameter \"joint\" is null.",0,0);
  return 0;
}



/* JoltPhysicsServer3D::joint_disable_collisions_between_bodies(RID, bool) */

void JoltPhysicsServer3D::joint_disable_collisions_between_bodies(long param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(param_1 + 0x34c))) {
    plVar3 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(param_1 + 0x348)) * 0x10 +
                     *(long *)(*(long *)(param_1 + 0x338) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(param_1 + 0x348)) * 8));
    iVar1 = (int)plVar3[1];
    if (iVar1 == (int)(param_2 >> 0x20)) {
      lVar2 = *plVar3;
      if (lVar2 != 0) {
        JoltJoint3D::set_collision_disabled(SUB81(lVar2,0));
        return;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("joint_disable_collisions_between_bodies",
                   "modules/jolt_physics/jolt_physics_server_3d.cpp",0x5f9,
                   "Parameter \"joint\" is null.",0,0);
  return;
}



/* JoltPhysicsServer3D::init() */

void __thiscall JoltPhysicsServer3D::init(JoltPhysicsServer3D *this)

{
  JoltJobSystem *this_00;
  
  this_00 = (JoltJobSystem *)(*JPH::AlignedAllocate)(0x100,0x40);
  JoltJobSystem::JoltJobSystem(this_00);
  *(JoltJobSystem **)(this + 0x3b0) = this_00;
  return;
}



/* JoltPhysicsServer3D::step(float) */

void __thiscall JoltPhysicsServer3D::step(JoltPhysicsServer3D *this,float param_1)

{
  int iVar1;
  int iVar2;
  
  if (this[0x3b9] != (JoltPhysicsServer3D)0x0) {
    iVar1 = *(int *)(this + 0x3ac);
    if (iVar1 != 0) {
      iVar2 = 0;
      while( true ) {
        JoltJobSystem::pre_step();
        JoltSpace3D::step(param_1);
        JoltJobSystem::post_step();
        if (iVar1 <= iVar2 + 1) break;
        iVar2 = iVar2 + 1;
      }
    }
    return;
  }
  return;
}



/* JoltPhysicsServer3D::flush_queries() */

void __thiscall JoltPhysicsServer3D::flush_queries(JoltPhysicsServer3D *this)

{
  int iVar1;
  int iVar2;
  
  if (this[0x3b9] != (JoltPhysicsServer3D)0x0) {
    iVar1 = *(int *)(this + 0x3ac);
    this[0x3ba] = (JoltPhysicsServer3D)0x1;
    if (iVar1 != 0) {
      iVar2 = 0;
      while( true ) {
        JoltSpace3D::call_queries();
        if (iVar1 <= iVar2 + 1) break;
        iVar2 = iVar2 + 1;
      }
    }
    this[0x3ba] = (JoltPhysicsServer3D)0x0;
    JoltJobSystem::flush_timings();
    return;
  }
  return;
}



/* JoltPhysicsServer3D::space_get_contacts(RID) const */

long JoltPhysicsServer3D::space_get_contacts(long param_1,long param_2,ulong param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  bool bVar6;
  
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(param_2 + 0x194))) {
    plVar5 = (long *)(((param_3 & 0xffffffff) % (ulong)*(uint *)(param_2 + 400)) * 0x10 +
                     *(long *)(*(long *)(param_2 + 0x180) +
                              ((param_3 & 0xffffffff) / (ulong)*(uint *)(param_2 + 400)) * 8));
    iVar1 = (int)plVar5[1];
    if (iVar1 == (int)(param_3 >> 0x20)) {
      if (*plVar5 != 0) {
        lVar3 = JoltSpace3D::get_debug_contacts();
        *(undefined8 *)(param_1 + 8) = 0;
        plVar5 = (long *)(*(long *)(lVar3 + 8) + -0x10);
        if (*(long *)(lVar3 + 8) != 0) {
          do {
            lVar2 = *plVar5;
            if (lVar2 == 0) {
              return param_1;
            }
            LOCK();
            lVar4 = *plVar5;
            bVar6 = lVar2 == lVar4;
            if (bVar6) {
              *plVar5 = lVar2 + 1;
              lVar4 = lVar2;
            }
            UNLOCK();
          } while (!bVar6);
          if (lVar4 != -1) {
            *(undefined8 *)(param_1 + 8) = *(undefined8 *)(lVar3 + 8);
          }
        }
        return param_1;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("space_get_contacts","modules/jolt_physics/jolt_physics_server_3d.cpp",0xfb,
                   "Parameter \"space\" is null.",0,0);
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}



/* JoltPhysicsServer3D::soft_body_get_collision_exceptions(RID, List<RID, DefaultAllocator>*) */

void __thiscall
JoltPhysicsServer3D::soft_body_get_collision_exceptions
          (JoltPhysicsServer3D *this,ulong param_2,long *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 (*pauVar5) [16];
  undefined8 *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x29c))) {
    plVar7 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x298)) * 0x10 +
                     *(long *)(*(long *)(this + 0x288) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x298)) * 8));
    iVar2 = (int)plVar7[1];
    if (iVar2 == (int)(param_2 >> 0x20)) {
      lVar3 = *plVar7;
      if (lVar3 != 0) {
        puVar8 = *(undefined8 **)(lVar3 + 0x70);
        puVar1 = puVar8 + *(uint *)(lVar3 + 0x68);
        if (puVar1 != puVar8) {
          if (*param_3 == 0) {
            pauVar5 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
            *param_3 = (long)pauVar5;
            *(undefined4 *)pauVar5[1] = 0;
            *pauVar5 = (undefined1  [16])0x0;
          }
          do {
            while( true ) {
              puVar6 = (undefined8 *)operator_new(0x20,DefaultAllocator::alloc);
              *puVar6 = 0;
              uVar4 = *puVar8;
              puVar6[1] = 0;
              *puVar6 = uVar4;
              plVar7 = (long *)*param_3;
              lVar3 = plVar7[1];
              puVar6[2] = lVar3;
              puVar6[3] = plVar7;
              if (lVar3 != 0) {
                *(undefined8 **)(lVar3 + 8) = puVar6;
              }
              plVar7[1] = (long)puVar6;
              if (*plVar7 == 0) break;
              puVar8 = puVar8 + 1;
              *(int *)(plVar7 + 2) = (int)plVar7[2] + 1;
              if (puVar1 == puVar8) {
                return;
              }
            }
            puVar8 = puVar8 + 1;
            *(int *)(plVar7 + 2) = (int)plVar7[2] + 1;
            *plVar7 = (long)puVar6;
          } while (puVar1 != puVar8);
        }
        return;
      }
    }
    else if (iVar2 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("soft_body_get_collision_exceptions",
                   "modules/jolt_physics/jolt_physics_server_3d.cpp",0x41c,
                   "Parameter \"body\" is null.",0,0);
  return;
}



/* JoltPhysicsServer3D::finish() */

void __thiscall JoltPhysicsServer3D::finish(JoltPhysicsServer3D *this)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  JobSystemWithBarrier *this_00;
  long lVar4;
  long lVar5;
  
  this_00 = *(JobSystemWithBarrier **)(this + 0x3b0);
  if (this_00 != (JobSystemWithBarrier *)0x0) {
    lVar5 = *(long *)(this_00 + 0x58);
    *(code **)this_00 = JPH::JobSystemWithBarrier::~JobSystemWithBarrier;
    if (lVar5 != 0) {
      uVar2 = *(uint *)(this_00 + 0x50);
      uVar3 = *(uint *)(this_00 + 0x40);
      if (uVar3 <= uVar2) {
        lVar4 = 0;
        do {
          lVar1 = lVar4 * 8;
          lVar4 = lVar4 + 1;
          (*JPH::AlignedFree)(*(undefined8 *)(lVar5 + lVar1));
          lVar5 = *(long *)(this_00 + 0x58);
        } while ((uint)lVar4 < uVar2 / uVar3);
      }
      (*JPH::Free)();
    }
    JPH::JobSystemWithBarrier::~JobSystemWithBarrier(this_00);
    (*JPH::AlignedFree)(this_00);
    *(undefined8 *)(this + 0x3b0) = 0;
  }
  return;
}



/* JoltPhysicsServer3D::body_get_collision_exceptions(RID, List<RID, DefaultAllocator>*) */

void __thiscall
JoltPhysicsServer3D::body_get_collision_exceptions
          (JoltPhysicsServer3D *this,ulong param_2,long *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 (*pauVar5) [16];
  undefined8 *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x244))) {
    plVar7 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x240)) * 0x10 +
                     *(long *)(*(long *)(this + 0x230) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x240)) * 8));
    iVar2 = (int)plVar7[1];
    if (iVar2 == (int)(param_2 >> 0x20)) {
      lVar3 = *plVar7;
      if (lVar3 != 0) {
        puVar8 = *(undefined8 **)(lVar3 + 0xd0);
        puVar1 = puVar8 + *(uint *)(lVar3 + 200);
        if (puVar1 != puVar8) {
          if (*param_3 == 0) {
            pauVar5 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
            *param_3 = (long)pauVar5;
            *(undefined4 *)pauVar5[1] = 0;
            *pauVar5 = (undefined1  [16])0x0;
          }
          do {
            while( true ) {
              puVar6 = (undefined8 *)operator_new(0x20,DefaultAllocator::alloc);
              *puVar6 = 0;
              uVar4 = *puVar8;
              puVar6[1] = 0;
              *puVar6 = uVar4;
              plVar7 = (long *)*param_3;
              lVar3 = plVar7[1];
              puVar6[2] = lVar3;
              puVar6[3] = plVar7;
              if (lVar3 != 0) {
                *(undefined8 **)(lVar3 + 8) = puVar6;
              }
              plVar7[1] = (long)puVar6;
              if (*plVar7 == 0) break;
              puVar8 = puVar8 + 1;
              *(int *)(plVar7 + 2) = (int)plVar7[2] + 1;
              if (puVar1 == puVar8) {
                return;
              }
            }
            puVar8 = puVar8 + 1;
            *(int *)(plVar7 + 2) = (int)plVar7[2] + 1;
            *plVar7 = (long)puVar6;
          } while (puVar1 != puVar8);
        }
        return;
      }
    }
    else if (iVar2 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("body_get_collision_exceptions","modules/jolt_physics/jolt_physics_server_3d.cpp"
                   ,0x362,"Parameter \"body\" is null.",0,0);
  return;
}



/* JoltPhysicsServer3D::area_attach_object_instance_id(RID, ObjectID) */

void __thiscall
JoltPhysicsServer3D::area_attach_object_instance_id
          (JoltPhysicsServer3D *this,ulong param_2,undefined8 param_3)

{
  pthread_mutex_t *__mutex;
  long lVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  uint uVar6;
  
  __mutex = (pthread_mutex_t *)(this + 0x1a8);
  iVar3 = pthread_mutex_lock(__mutex);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar3);
  }
  uVar6 = (uint)param_2;
  if (uVar6 < *(uint *)(this + 0x194)) {
    if (param_2 >> 0x20 == 0x7fffffff) {
      pthread_mutex_unlock(__mutex);
    }
    else {
      uVar4 = (uint)(param_2 >> 0x20);
      if (uVar4 != (*(uint *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 400)) * 0x10 +
                              *(long *)(*(long *)(this + 0x180) +
                                       ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 400)) * 8)
                             + 8) & 0x7fffffff)) goto LAB_00108f9f;
      pthread_mutex_unlock(__mutex);
      if ((param_2 == 0) || (*(uint *)(this + 0x194) <= uVar6)) {
LAB_00111d3e:
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      plVar5 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 400)) * 0x10 +
                       *(long *)(*(long *)(this + 0x180) +
                                ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 400)) * 8));
      uVar6 = *(uint *)(plVar5 + 1);
      if (uVar4 != uVar6) {
        if (uVar6 + 0x80000000 < 0x7fffffff) {
          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                           "Method/function failed. Returning: nullptr",
                           "Attempting to use an uninitialized RID",0,0,param_2 >> 0x20);
        }
        goto LAB_00111d3e;
      }
      param_2 = *(ulong *)(*(long *)(*plVar5 + 0x78) + 0x18);
      uVar6 = (uint)param_2;
      if (param_2 == 0) goto LAB_00109078;
    }
  }
  else {
LAB_00108f9f:
    pthread_mutex_unlock(__mutex);
    if (param_2 == 0) goto LAB_00109078;
  }
  if (uVar6 < *(uint *)(this + 0x1ec)) {
    plVar5 = (long *)(((ulong)uVar6 % (ulong)*(uint *)(this + 0x1e8)) * 0x10 +
                     *(long *)(*(long *)(this + 0x1d8) +
                              ((ulong)uVar6 / (ulong)*(uint *)(this + 0x1e8)) * 8));
    iVar3 = (int)plVar5[1];
    if (iVar3 == (int)(param_2 >> 0x20)) {
      lVar1 = *plVar5;
      if (lVar1 != 0) {
        *(undefined8 *)(lVar1 + 0x20) = param_3;
        return;
      }
    }
    else if (iVar3 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
LAB_00109078:
  _err_print_error("area_attach_object_instance_id",
                   "modules/jolt_physics/jolt_physics_server_3d.cpp",0x181,
                   "Parameter \"area\" is null.",0,0);
  return;
}



/* JoltPhysicsServer3D::area_get_object_instance_id(RID) const */

undefined8 __thiscall
JoltPhysicsServer3D::area_get_object_instance_id(JoltPhysicsServer3D *this,ulong param_2)

{
  pthread_mutex_t *__mutex;
  long lVar1;
  code *pcVar2;
  int iVar3;
  long *plVar4;
  uint uVar5;
  uint uVar6;
  
  __mutex = (pthread_mutex_t *)(this + 0x1a8);
  iVar3 = pthread_mutex_lock(__mutex);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar3);
  }
  uVar5 = (uint)param_2;
  if (uVar5 < *(uint *)(this + 0x194)) {
    if (param_2 >> 0x20 == 0x7fffffff) {
      pthread_mutex_unlock(__mutex);
    }
    else {
      uVar6 = (uint)(param_2 >> 0x20);
      if (uVar6 != (*(uint *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 400)) * 0x10 +
                              *(long *)(*(long *)(this + 0x180) +
                                       ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 400)) * 8)
                             + 8) & 0x7fffffff)) {
        pthread_mutex_unlock(__mutex);
        goto LAB_0010918e;
      }
      pthread_mutex_unlock(__mutex);
      if ((param_2 == 0) || (*(uint *)(this + 0x194) <= uVar5)) {
LAB_00111d82:
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      plVar4 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 400)) * 0x10 +
                       *(long *)(*(long *)(this + 0x180) +
                                ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 400)) * 8));
      uVar5 = *(uint *)(plVar4 + 1);
      if (uVar6 != uVar5) {
        if (uVar5 + 0x80000000 < 0x7fffffff) {
          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                           "Method/function failed. Returning: nullptr",
                           "Attempting to use an uninitialized RID",0,0,*(long *)(this + 0x180));
        }
        goto LAB_00111d82;
      }
      param_2 = *(ulong *)(*(long *)(*plVar4 + 0x78) + 0x18);
      uVar5 = (uint)param_2;
      if (param_2 == 0) goto LAB_0010924a;
    }
  }
  else {
    pthread_mutex_unlock(__mutex);
LAB_0010918e:
    if (param_2 == 0) goto LAB_0010924a;
  }
  if (uVar5 < *(uint *)(this + 0x1ec)) {
    plVar4 = (long *)(((ulong)uVar5 % (ulong)*(uint *)(this + 0x1e8)) * 0x10 +
                     *(long *)(*(long *)(this + 0x1d8) +
                              ((ulong)uVar5 / (ulong)*(uint *)(this + 0x1e8)) * 8));
    iVar3 = (int)plVar4[1];
    if (iVar3 == (int)(param_2 >> 0x20)) {
      lVar1 = *plVar4;
      if (lVar1 != 0) {
        return *(undefined8 *)(lVar1 + 0x20);
      }
    }
    else if (iVar3 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
LAB_0010924a:
  _err_print_error("area_get_object_instance_id","modules/jolt_physics/jolt_physics_server_3d.cpp",
                   399,"Parameter \"area\" is null.",0,0);
  return 0;
}



/* JoltPhysicsServer3D::area_set_param(RID, PhysicsServer3D::AreaParameter, Variant const&) */

void __thiscall
JoltPhysicsServer3D::area_set_param
          (JoltPhysicsServer3D *this,ulong param_2,undefined4 param_3,undefined8 param_4)

{
  long lVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  pthread_mutex_t *__mutex;
  uint uVar6;
  
  __mutex = (pthread_mutex_t *)(this + 0x1a8);
  iVar3 = pthread_mutex_lock(__mutex);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar3);
  }
  uVar6 = (uint)param_2;
  if (uVar6 < *(uint *)(this + 0x194)) {
    if (param_2 >> 0x20 == 0x7fffffff) {
      pthread_mutex_unlock(__mutex);
    }
    else {
      uVar4 = (uint)(param_2 >> 0x20);
      if (uVar4 != (*(uint *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 400)) * 0x10 +
                              *(long *)(*(long *)(this + 0x180) +
                                       ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 400)) * 8)
                             + 8) & 0x7fffffff)) goto LAB_00109379;
      pthread_mutex_unlock(__mutex);
      if ((param_2 == 0) || (*(uint *)(this + 0x194) <= uVar6)) {
LAB_00111dc6:
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      plVar5 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 400)) * 0x10 +
                       *(long *)(*(long *)(this + 0x180) +
                                ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 400)) * 8));
      uVar6 = *(uint *)(plVar5 + 1);
      if (uVar4 != uVar6) {
        if (uVar6 + 0x80000000 < 0x7fffffff) {
          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                           "Method/function failed. Returning: nullptr",
                           "Attempting to use an uninitialized RID",0,0,param_2 >> 0x20);
        }
        goto LAB_00111dc6;
      }
      param_2 = *(ulong *)(*(long *)(*plVar5 + 0x78) + 0x18);
      uVar6 = (uint)param_2;
      if (param_2 == 0) goto LAB_00109455;
    }
  }
  else {
LAB_00109379:
    pthread_mutex_unlock(__mutex);
    if (param_2 == 0) goto LAB_00109455;
  }
  if (uVar6 < *(uint *)(this + 0x1ec)) {
    plVar5 = (long *)(((ulong)uVar6 % (ulong)*(uint *)(this + 0x1e8)) * 0x10 +
                     *(long *)(*(long *)(this + 0x1d8) +
                              ((ulong)uVar6 / (ulong)*(uint *)(this + 0x1e8)) * 8));
    iVar3 = (int)plVar5[1];
    if (iVar3 == (int)(param_2 >> 0x20)) {
      lVar1 = *plVar5;
      if (lVar1 != 0) {
        JoltArea3D::set_param(lVar1,param_3,param_4);
        return;
      }
    }
    else if (iVar3 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
LAB_00109455:
  _err_print_error("area_set_param","modules/jolt_physics/jolt_physics_server_3d.cpp",0x19d,
                   "Parameter \"area\" is null.",0,0);
  return;
}



/* JoltPhysicsServer3D::area_get_param(RID, PhysicsServer3D::AreaParameter) const */

undefined4 *
JoltPhysicsServer3D::area_get_param
          (undefined4 *param_1,long param_2,ulong param_3,undefined4 param_4)

{
  pthread_mutex_t *__mutex;
  long lVar1;
  long lVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  uint uVar7;
  long in_FS_OFFSET;
  
  __mutex = (pthread_mutex_t *)(param_2 + 0x1a8);
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  iVar4 = pthread_mutex_lock(__mutex);
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar4);
  }
  uVar7 = (uint)param_3;
  if (uVar7 < *(uint *)(param_2 + 0x194)) {
    if (param_3 >> 0x20 == 0x7fffffff) {
      pthread_mutex_unlock(__mutex);
      goto LAB_0010959e;
    }
    uVar5 = (uint)(param_3 >> 0x20);
    if (uVar5 != (*(uint *)(((param_3 & 0xffffffff) % (ulong)*(uint *)(param_2 + 400)) * 0x10 +
                            *(long *)(*(long *)(param_2 + 0x180) +
                                     ((param_3 & 0xffffffff) / (ulong)*(uint *)(param_2 + 400)) * 8)
                           + 8) & 0x7fffffff)) goto LAB_0010958d;
    pthread_mutex_unlock(__mutex);
    if ((param_3 == 0) || (*(uint *)(param_2 + 0x194) <= uVar7)) {
LAB_00111e0a:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    plVar6 = (long *)(((param_3 & 0xffffffff) % (ulong)*(uint *)(param_2 + 400)) * 0x10 +
                     *(long *)(*(long *)(param_2 + 0x180) +
                              ((param_3 & 0xffffffff) / (ulong)*(uint *)(param_2 + 400)) * 8));
    uVar7 = *(uint *)(plVar6 + 1);
    if (uVar5 != uVar7) {
      if (uVar7 + 0x80000000 < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0,param_3 >> 0x20);
      }
      goto LAB_00111e0a;
    }
    param_3 = *(ulong *)(*(long *)(*plVar6 + 0x78) + 0x18);
    uVar7 = (uint)param_3;
    if (param_3 != 0) goto LAB_0010959e;
  }
  else {
LAB_0010958d:
    pthread_mutex_unlock(__mutex);
    if (param_3 != 0) {
LAB_0010959e:
      if (uVar7 < *(uint *)(param_2 + 0x1ec)) {
        plVar6 = (long *)(((ulong)uVar7 % (ulong)*(uint *)(param_2 + 0x1e8)) * 0x10 +
                         *(long *)(*(long *)(param_2 + 0x1d8) +
                                  ((ulong)uVar7 / (ulong)*(uint *)(param_2 + 0x1e8)) * 8));
        iVar4 = (int)plVar6[1];
        if (iVar4 == (int)(param_3 >> 0x20)) {
          lVar2 = *plVar6;
          if (lVar2 != 0) {
            JoltArea3D::get_param(param_1,lVar2,param_4);
            goto LAB_001095f0;
          }
        }
        else if (iVar4 + 0x80000000U < 0x7fffffff) {
          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                           "Method/function failed. Returning: nullptr",
                           "Attempting to use an uninitialized RID",0,0);
        }
      }
    }
  }
  _err_print_error("area_get_param","modules/jolt_physics/jolt_physics_server_3d.cpp",0x1ab,
                   "Parameter \"area\" is null.",0,0);
  *param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 2) = (undefined1  [16])0x0;
LAB_001095f0:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* HashMap<JPH::BodyID, JoltArea3D::Overlap, JoltArea3D::BodyIDHasher,
   HashMapComparatorDefault<JPH::BodyID>, DefaultTypedAllocator<HashMapElement<JPH::BodyID,
   JoltArea3D::Overlap> > >::clear() [clone .part.0] */

void __thiscall
HashMap<JPH::BodyID,JoltArea3D::Overlap,JoltArea3D::BodyIDHasher,HashMapComparatorDefault<JPH::BodyID>,DefaultTypedAllocator<HashMapElement<JPH::BodyID,JoltArea3D::Overlap>>>
::clear(HashMap<JPH::BodyID,JoltArea3D::Overlap,JoltArea3D::BodyIDHasher,HashMapComparatorDefault<JPH::BodyID>,DefaultTypedAllocator<HashMapElement<JPH::BodyID,JoltArea3D::Overlap>>>
        *this)

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  int *piVar4;
  long lVar5;
  void *pvVar6;
  long lVar7;
  
  lVar7 = 0;
  uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  if (uVar1 != 0) {
    do {
      if (*(int *)(*(long *)(this + 0x10) + lVar7) != 0) {
        *(int *)(*(long *)(this + 0x10) + lVar7) = 0;
        pvVar3 = *(void **)(*(long *)(this + 8) + lVar7 * 2);
        if (*(void **)((long)pvVar3 + 0x60) != (void *)0x0) {
          if (*(int *)((long)pvVar3 + 0x58) != 0) {
            *(undefined4 *)((long)pvVar3 + 0x58) = 0;
          }
          Memory::free_static(*(void **)((long)pvVar3 + 0x60),false);
        }
        if (*(void **)((long)pvVar3 + 0x50) != (void *)0x0) {
          if (*(int *)((long)pvVar3 + 0x48) != 0) {
            *(undefined4 *)((long)pvVar3 + 0x48) = 0;
          }
          Memory::free_static(*(void **)((long)pvVar3 + 0x50),false);
        }
        pvVar6 = *(void **)((long)pvVar3 + 0x20);
        if (pvVar6 != (void *)0x0) {
          if (*(int *)((long)pvVar3 + 0x44) != 0) {
            uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)((long)pvVar3 + 0x40) * 4);
            if (uVar2 == 0) {
              *(undefined4 *)((long)pvVar3 + 0x44) = 0;
              *(undefined1 (*) [16])((long)pvVar3 + 0x30) = (undefined1  [16])0x0;
            }
            else {
              lVar5 = 0;
              do {
                piVar4 = (int *)(*(long *)((long)pvVar3 + 0x28) + lVar5);
                if (*piVar4 != 0) {
                  *piVar4 = 0;
                  Memory::free_static(*(void **)((long)pvVar6 + lVar5 * 2),false);
                  pvVar6 = *(void **)((long)pvVar3 + 0x20);
                  *(undefined8 *)((long)pvVar6 + lVar5 * 2) = 0;
                }
                lVar5 = lVar5 + 4;
              } while (lVar5 != (ulong)uVar2 * 4);
              *(undefined4 *)((long)pvVar3 + 0x44) = 0;
              *(undefined1 (*) [16])((long)pvVar3 + 0x30) = (undefined1  [16])0x0;
              if (pvVar6 == (void *)0x0) goto LAB_00109857;
            }
          }
          Memory::free_static(pvVar6,false);
          Memory::free_static(*(void **)((long)pvVar3 + 0x28),false);
        }
LAB_00109857:
        Memory::free_static(pvVar3,false);
        *(undefined8 *)(*(long *)(this + 8) + lVar7 * 2) = 0;
      }
      lVar7 = lVar7 + 4;
    } while ((ulong)uVar1 * 4 != lVar7);
  }
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
  return;
}



/* JoltPhysicsServer3D::joint_make_hinge(RID, RID, Transform3D const&, RID, Transform3D const&) */

void __thiscall
JoltPhysicsServer3D::joint_make_hinge
          (JoltPhysicsServer3D *this,ulong param_2,ulong param_3,Transform3D *param_4,ulong param_5,
          Transform3D *param_6)

{
  int iVar1;
  int iVar2;
  JoltJoint3D *pJVar3;
  JoltBody3D *pJVar4;
  JoltHingeJoint3D *this_00;
  JoltBody3D *pJVar5;
  char *pcVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  char *pcVar9;
  char *pcVar10;
  
  if (param_2 != 0) {
    if ((uint)param_2 < *(uint *)(this + 0x34c)) {
      puVar7 = (undefined8 *)
               (((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x348)) * 0x10 +
               *(long *)(*(long *)(this + 0x338) +
                        ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x348)) * 8));
      iVar1 = *(int *)(puVar7 + 1);
      if (iVar1 == (int)(param_2 >> 0x20)) {
        pJVar3 = (JoltJoint3D *)*puVar7;
        if (pJVar3 != (JoltJoint3D *)0x0) {
          if ((param_3 != 0) && ((uint)param_3 < *(uint *)(this + 0x244))) {
            puVar7 = (undefined8 *)
                     (((param_3 & 0xffffffff) % (ulong)*(uint *)(this + 0x240)) * 0x10 +
                     *(long *)(*(long *)(this + 0x230) +
                              ((param_3 & 0xffffffff) / (ulong)*(uint *)(this + 0x240)) * 8));
            iVar2 = *(int *)(puVar7 + 1);
            if (iVar2 == (int)(param_3 >> 0x20)) {
              pJVar4 = (JoltBody3D *)*puVar7;
              if (pJVar4 != (JoltBody3D *)0x0) {
                if ((param_5 == 0) || (*(uint *)(this + 0x244) <= (uint)param_5)) {
LAB_00109a90:
                  pJVar5 = (JoltBody3D *)0x0;
                }
                else {
                  puVar7 = (undefined8 *)
                           (((param_5 & 0xffffffff) % (ulong)*(uint *)(this + 0x240)) * 0x10 +
                           *(long *)(*(long *)(this + 0x230) +
                                    ((param_5 & 0xffffffff) / (ulong)*(uint *)(this + 0x240)) * 8));
                  iVar2 = *(int *)(puVar7 + 1);
                  if (iVar2 == (int)(param_5 >> 0x20)) {
                    pJVar5 = (JoltBody3D *)*puVar7;
                    if (pJVar4 == pJVar5) {
                      pcVar6 = "Condition \"body_a == body_b\" is true.";
                      uVar8 = 0x526;
                      pcVar9 = "modules/jolt_physics/jolt_physics_server_3d.cpp";
                      pcVar10 = "joint_make_hinge";
                      goto LAB_00109ad8;
                    }
                  }
                  else {
                    if (0x7ffffffe < iVar2 + 0x80000000U) goto LAB_00109a90;
                    _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                     "Method/function failed. Returning: nullptr",
                                     "Attempting to use an uninitialized RID",0,0);
                    pJVar5 = (JoltBody3D *)0x0;
                  }
                }
                this_00 = (JoltHingeJoint3D *)operator_new(0xd0,"");
                JoltHingeJoint3D::JoltHingeJoint3D(this_00,pJVar3,pJVar4,pJVar5,param_4,param_6);
                (*(code *)**(undefined8 **)pJVar3)(pJVar3);
                Memory::free_static(pJVar3,false);
                if ((uint)param_2 < *(uint *)(this + 0x34c)) {
                  puVar7 = (undefined8 *)
                           (((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x348)) * 0x10 +
                           *(long *)(*(long *)(this + 0x338) +
                                    ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x348)) * 8));
                  iVar2 = *(int *)(puVar7 + 1);
                  if (iVar1 == iVar2) {
                    *puVar7 = this_00;
                    return;
                  }
                  if (iVar2 + 0x80000000U < 0x7fffffff) {
                    _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                     "Method/function failed. Returning: nullptr",
                                     "Attempting to use an uninitialized RID",0,0);
                  }
                }
                pcVar9 = "./core/templates/rid_owner.h";
                pcVar6 = "Parameter \"ptr\" is null.";
                uVar8 = 0x1ee;
                pcVar10 = "replace";
                goto LAB_00109ad8;
              }
            }
            else if (iVar2 + 0x80000000U < 0x7fffffff) {
              _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                               "Method/function failed. Returning: nullptr",
                               "Attempting to use an uninitialized RID",0,0);
            }
          }
          pcVar6 = "Parameter \"body_a\" is null.";
          uVar8 = 0x523;
          pcVar9 = "modules/jolt_physics/jolt_physics_server_3d.cpp";
          pcVar10 = "joint_make_hinge";
          goto LAB_00109ad8;
        }
      }
      else if (iVar1 + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
  }
  pcVar6 = "Parameter \"old_joint\" is null.";
  uVar8 = 0x520;
  pcVar9 = "modules/jolt_physics/jolt_physics_server_3d.cpp";
  pcVar10 = "joint_make_hinge";
LAB_00109ad8:
  _err_print_error(pcVar10,pcVar9,uVar8,pcVar6,0,0);
  return;
}



/* JoltPhysicsServer3D::joint_make_cone_twist(RID, RID, Transform3D const&, RID, Transform3D const&)
    */

void __thiscall
JoltPhysicsServer3D::joint_make_cone_twist
          (JoltPhysicsServer3D *this,ulong param_2,ulong param_3,Transform3D *param_4,ulong param_5,
          Transform3D *param_6)

{
  int iVar1;
  int iVar2;
  JoltJoint3D *pJVar3;
  JoltBody3D *pJVar4;
  JoltConeTwistJoint3D *this_00;
  JoltBody3D *pJVar5;
  char *pcVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  char *pcVar9;
  char *pcVar10;
  
  if (param_2 != 0) {
    if ((uint)param_2 < *(uint *)(this + 0x34c)) {
      puVar7 = (undefined8 *)
               (((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x348)) * 0x10 +
               *(long *)(*(long *)(this + 0x338) +
                        ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x348)) * 8));
      iVar1 = *(int *)(puVar7 + 1);
      if (iVar1 == (int)(param_2 >> 0x20)) {
        pJVar3 = (JoltJoint3D *)*puVar7;
        if (pJVar3 != (JoltJoint3D *)0x0) {
          if ((param_3 != 0) && ((uint)param_3 < *(uint *)(this + 0x244))) {
            puVar7 = (undefined8 *)
                     (((param_3 & 0xffffffff) % (ulong)*(uint *)(this + 0x240)) * 0x10 +
                     *(long *)(*(long *)(this + 0x230) +
                              ((param_3 & 0xffffffff) / (ulong)*(uint *)(this + 0x240)) * 8));
            iVar2 = *(int *)(puVar7 + 1);
            if (iVar2 == (int)(param_3 >> 0x20)) {
              pJVar4 = (JoltBody3D *)*puVar7;
              if (pJVar4 != (JoltBody3D *)0x0) {
                if ((param_5 == 0) || (*(uint *)(this + 0x244) <= (uint)param_5)) {
LAB_00109e40:
                  pJVar5 = (JoltBody3D *)0x0;
                }
                else {
                  puVar7 = (undefined8 *)
                           (((param_5 & 0xffffffff) % (ulong)*(uint *)(this + 0x240)) * 0x10 +
                           *(long *)(*(long *)(this + 0x230) +
                                    ((param_5 & 0xffffffff) / (ulong)*(uint *)(this + 0x240)) * 8));
                  iVar2 = *(int *)(puVar7 + 1);
                  if (iVar2 == (int)(param_5 >> 0x20)) {
                    pJVar5 = (JoltBody3D *)*puVar7;
                    if (pJVar4 == pJVar5) {
                      pcVar6 = "Condition \"body_a == body_b\" is true.";
                      uVar8 = 0x58a;
                      pcVar9 = "modules/jolt_physics/jolt_physics_server_3d.cpp";
                      pcVar10 = "joint_make_cone_twist";
                      goto LAB_00109e88;
                    }
                  }
                  else {
                    if (0x7ffffffe < iVar2 + 0x80000000U) goto LAB_00109e40;
                    _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                     "Method/function failed. Returning: nullptr",
                                     "Attempting to use an uninitialized RID",0,0);
                    pJVar5 = (JoltBody3D *)0x0;
                  }
                }
                this_00 = (JoltConeTwistJoint3D *)operator_new(0xd8,"");
                JoltConeTwistJoint3D::JoltConeTwistJoint3D
                          (this_00,pJVar3,pJVar4,pJVar5,param_4,param_6);
                (*(code *)**(undefined8 **)pJVar3)(pJVar3);
                Memory::free_static(pJVar3,false);
                if ((uint)param_2 < *(uint *)(this + 0x34c)) {
                  puVar7 = (undefined8 *)
                           (((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x348)) * 0x10 +
                           *(long *)(*(long *)(this + 0x338) +
                                    ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x348)) * 8));
                  iVar2 = *(int *)(puVar7 + 1);
                  if (iVar1 == iVar2) {
                    *puVar7 = this_00;
                    return;
                  }
                  if (iVar2 + 0x80000000U < 0x7fffffff) {
                    _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                     "Method/function failed. Returning: nullptr",
                                     "Attempting to use an uninitialized RID",0,0);
                  }
                }
                pcVar9 = "./core/templates/rid_owner.h";
                pcVar6 = "Parameter \"ptr\" is null.";
                uVar8 = 0x1ee;
                pcVar10 = "replace";
                goto LAB_00109e88;
              }
            }
            else if (iVar2 + 0x80000000U < 0x7fffffff) {
              _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                               "Method/function failed. Returning: nullptr",
                               "Attempting to use an uninitialized RID",0,0);
            }
          }
          pcVar6 = "Parameter \"body_a\" is null.";
          uVar8 = 0x587;
          pcVar9 = "modules/jolt_physics/jolt_physics_server_3d.cpp";
          pcVar10 = "joint_make_cone_twist";
          goto LAB_00109e88;
        }
      }
      else if (iVar1 + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
  }
  pcVar6 = "Parameter \"old_joint\" is null.";
  uVar8 = 0x584;
  pcVar9 = "modules/jolt_physics/jolt_physics_server_3d.cpp";
  pcVar10 = "joint_make_cone_twist";
LAB_00109e88:
  _err_print_error(pcVar10,pcVar9,uVar8,pcVar6,0,0);
  return;
}



/* JoltPhysicsServer3D::joint_make_generic_6dof(RID, RID, Transform3D const&, RID, Transform3D
   const&) */

void __thiscall
JoltPhysicsServer3D::joint_make_generic_6dof
          (JoltPhysicsServer3D *this,ulong param_2,ulong param_3,Transform3D *param_4,ulong param_5,
          Transform3D *param_6)

{
  int iVar1;
  int iVar2;
  JoltJoint3D *pJVar3;
  JoltBody3D *pJVar4;
  JoltGeneric6DOFJoint3D *this_00;
  JoltBody3D *pJVar5;
  char *pcVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  char *pcVar9;
  char *pcVar10;
  
  if (param_2 != 0) {
    if ((uint)param_2 < *(uint *)(this + 0x34c)) {
      puVar7 = (undefined8 *)
               (((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x348)) * 0x10 +
               *(long *)(*(long *)(this + 0x338) +
                        ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x348)) * 8));
      iVar1 = *(int *)(puVar7 + 1);
      if (iVar1 == (int)(param_2 >> 0x20)) {
        pJVar3 = (JoltJoint3D *)*puVar7;
        if (pJVar3 != (JoltJoint3D *)0x0) {
          if ((param_3 != 0) && ((uint)param_3 < *(uint *)(this + 0x244))) {
            puVar7 = (undefined8 *)
                     (((param_3 & 0xffffffff) % (ulong)*(uint *)(this + 0x240)) * 0x10 +
                     *(long *)(*(long *)(this + 0x230) +
                              ((param_3 & 0xffffffff) / (ulong)*(uint *)(this + 0x240)) * 8));
            iVar2 = *(int *)(puVar7 + 1);
            if (iVar2 == (int)(param_3 >> 0x20)) {
              pJVar4 = (JoltBody3D *)*puVar7;
              if (pJVar4 != (JoltBody3D *)0x0) {
                if ((param_5 == 0) || (*(uint *)(this + 0x244) <= (uint)param_5)) {
LAB_0010a1f0:
                  pJVar5 = (JoltBody3D *)0x0;
                }
                else {
                  puVar7 = (undefined8 *)
                           (((param_5 & 0xffffffff) % (ulong)*(uint *)(this + 0x240)) * 0x10 +
                           *(long *)(*(long *)(this + 0x230) +
                                    ((param_5 & 0xffffffff) / (ulong)*(uint *)(this + 0x240)) * 8));
                  iVar2 = *(int *)(puVar7 + 1);
                  if (iVar2 == (int)(param_5 >> 0x20)) {
                    pJVar5 = (JoltBody3D *)*puVar7;
                    if (pJVar4 == pJVar5) {
                      pcVar6 = "Condition \"body_a == body_b\" is true.";
                      uVar8 = 0x5b0;
                      pcVar9 = "modules/jolt_physics/jolt_physics_server_3d.cpp";
                      pcVar10 = "joint_make_generic_6dof";
                      goto LAB_0010a238;
                    }
                  }
                  else {
                    if (0x7ffffffe < iVar2 + 0x80000000U) goto LAB_0010a1f0;
                    _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                     "Method/function failed. Returning: nullptr",
                                     "Attempting to use an uninitialized RID",0,0);
                    pJVar5 = (JoltBody3D *)0x0;
                  }
                }
                this_00 = (JoltGeneric6DOFJoint3D *)operator_new(0x2c8,"");
                JoltGeneric6DOFJoint3D::JoltGeneric6DOFJoint3D
                          (this_00,pJVar3,pJVar4,pJVar5,param_4,param_6);
                (*(code *)**(undefined8 **)pJVar3)(pJVar3);
                Memory::free_static(pJVar3,false);
                if ((uint)param_2 < *(uint *)(this + 0x34c)) {
                  puVar7 = (undefined8 *)
                           (((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x348)) * 0x10 +
                           *(long *)(*(long *)(this + 0x338) +
                                    ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x348)) * 8));
                  iVar2 = *(int *)(puVar7 + 1);
                  if (iVar1 == iVar2) {
                    *puVar7 = this_00;
                    return;
                  }
                  if (iVar2 + 0x80000000U < 0x7fffffff) {
                    _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                     "Method/function failed. Returning: nullptr",
                                     "Attempting to use an uninitialized RID",0,0);
                  }
                }
                pcVar9 = "./core/templates/rid_owner.h";
                pcVar6 = "Parameter \"ptr\" is null.";
                uVar8 = 0x1ee;
                pcVar10 = "replace";
                goto LAB_0010a238;
              }
            }
            else if (iVar2 + 0x80000000U < 0x7fffffff) {
              _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                               "Method/function failed. Returning: nullptr",
                               "Attempting to use an uninitialized RID",0,0);
            }
          }
          pcVar6 = "Parameter \"body_a\" is null.";
          uVar8 = 0x5ad;
          pcVar9 = "modules/jolt_physics/jolt_physics_server_3d.cpp";
          pcVar10 = "joint_make_generic_6dof";
          goto LAB_0010a238;
        }
      }
      else if (iVar1 + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
  }
  pcVar6 = "Parameter \"old_joint\" is null.";
  uVar8 = 0x5aa;
  pcVar9 = "modules/jolt_physics/jolt_physics_server_3d.cpp";
  pcVar10 = "joint_make_generic_6dof";
LAB_0010a238:
  _err_print_error(pcVar10,pcVar9,uVar8,pcVar6,0,0);
  return;
}



/* JoltPhysicsServer3D::joint_make_pin(RID, RID, Vector3 const&, RID, Vector3 const&) */

void __thiscall
JoltPhysicsServer3D::joint_make_pin
          (JoltPhysicsServer3D *this,ulong param_2,ulong param_3,Vector3 *param_4,ulong param_5,
          Vector3 *param_6)

{
  int iVar1;
  int iVar2;
  JoltJoint3D *pJVar3;
  JoltBody3D *pJVar4;
  JoltPinJoint3D *this_00;
  JoltBody3D *pJVar5;
  char *pcVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  char *pcVar9;
  char *pcVar10;
  
  if (param_2 != 0) {
    if ((uint)param_2 < *(uint *)(this + 0x34c)) {
      puVar7 = (undefined8 *)
               (((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x348)) * 0x10 +
               *(long *)(*(long *)(this + 0x338) +
                        ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x348)) * 8));
      iVar1 = *(int *)(puVar7 + 1);
      if (iVar1 == (int)(param_2 >> 0x20)) {
        pJVar3 = (JoltJoint3D *)*puVar7;
        if (pJVar3 != (JoltJoint3D *)0x0) {
          if ((param_3 != 0) && ((uint)param_3 < *(uint *)(this + 0x244))) {
            puVar7 = (undefined8 *)
                     (((param_3 & 0xffffffff) % (ulong)*(uint *)(this + 0x240)) * 0x10 +
                     *(long *)(*(long *)(this + 0x230) +
                              ((param_3 & 0xffffffff) / (ulong)*(uint *)(this + 0x240)) * 8));
            iVar2 = *(int *)(puVar7 + 1);
            if (iVar2 == (int)(param_3 >> 0x20)) {
              pJVar4 = (JoltBody3D *)*puVar7;
              if (pJVar4 != (JoltBody3D *)0x0) {
                if ((param_5 == 0) || (*(uint *)(this + 0x244) <= (uint)param_5)) {
LAB_0010a5a0:
                  pJVar5 = (JoltBody3D *)0x0;
                }
                else {
                  puVar7 = (undefined8 *)
                           (((param_5 & 0xffffffff) % (ulong)*(uint *)(this + 0x240)) * 0x10 +
                           *(long *)(*(long *)(this + 0x230) +
                                    ((param_5 & 0xffffffff) / (ulong)*(uint *)(this + 0x240)) * 8));
                  iVar2 = *(int *)(puVar7 + 1);
                  if (iVar2 == (int)(param_5 >> 0x20)) {
                    pJVar5 = (JoltBody3D *)*puVar7;
                    if (pJVar4 == pJVar5) {
                      pcVar6 = "Condition \"body_a == body_b\" is true.";
                      uVar8 = 0x4d8;
                      pcVar9 = "modules/jolt_physics/jolt_physics_server_3d.cpp";
                      pcVar10 = "joint_make_pin";
                      goto LAB_0010a5e8;
                    }
                  }
                  else {
                    if (0x7ffffffe < iVar2 + 0x80000000U) goto LAB_0010a5a0;
                    _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                     "Method/function failed. Returning: nullptr",
                                     "Attempting to use an uninitialized RID",0,0);
                    pJVar5 = (JoltBody3D *)0x0;
                  }
                }
                this_00 = (JoltPinJoint3D *)operator_new(0x98,"");
                JoltPinJoint3D::JoltPinJoint3D(this_00,pJVar3,pJVar4,pJVar5,param_4,param_6);
                (*(code *)**(undefined8 **)pJVar3)(pJVar3);
                Memory::free_static(pJVar3,false);
                if ((uint)param_2 < *(uint *)(this + 0x34c)) {
                  puVar7 = (undefined8 *)
                           (((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x348)) * 0x10 +
                           *(long *)(*(long *)(this + 0x338) +
                                    ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x348)) * 8));
                  iVar2 = *(int *)(puVar7 + 1);
                  if (iVar1 == iVar2) {
                    *puVar7 = this_00;
                    return;
                  }
                  if (iVar2 + 0x80000000U < 0x7fffffff) {
                    _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                     "Method/function failed. Returning: nullptr",
                                     "Attempting to use an uninitialized RID",0,0);
                  }
                }
                pcVar9 = "./core/templates/rid_owner.h";
                pcVar6 = "Parameter \"ptr\" is null.";
                uVar8 = 0x1ee;
                pcVar10 = "replace";
                goto LAB_0010a5e8;
              }
            }
            else if (iVar2 + 0x80000000U < 0x7fffffff) {
              _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                               "Method/function failed. Returning: nullptr",
                               "Attempting to use an uninitialized RID",0,0);
            }
          }
          pcVar6 = "Parameter \"body_a\" is null.";
          uVar8 = 0x4d5;
          pcVar9 = "modules/jolt_physics/jolt_physics_server_3d.cpp";
          pcVar10 = "joint_make_pin";
          goto LAB_0010a5e8;
        }
      }
      else if (iVar1 + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
  }
  pcVar6 = "Parameter \"old_joint\" is null.";
  uVar8 = 0x4d2;
  pcVar9 = "modules/jolt_physics/jolt_physics_server_3d.cpp";
  pcVar10 = "joint_make_pin";
LAB_0010a5e8:
  _err_print_error(pcVar10,pcVar9,uVar8,pcVar6,0,0);
  return;
}



/* JoltPhysicsServer3D::joint_make_slider(RID, RID, Transform3D const&, RID, Transform3D const&) */

void __thiscall
JoltPhysicsServer3D::joint_make_slider
          (JoltPhysicsServer3D *this,ulong param_2,ulong param_3,Transform3D *param_4,ulong param_5,
          Transform3D *param_6)

{
  int iVar1;
  int iVar2;
  JoltJoint3D *pJVar3;
  JoltBody3D *pJVar4;
  JoltSliderJoint3D *this_00;
  JoltBody3D *pJVar5;
  char *pcVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  char *pcVar9;
  char *pcVar10;
  
  if (param_2 != 0) {
    if ((uint)param_2 < *(uint *)(this + 0x34c)) {
      puVar7 = (undefined8 *)
               (((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x348)) * 0x10 +
               *(long *)(*(long *)(this + 0x338) +
                        ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x348)) * 8));
      iVar1 = *(int *)(puVar7 + 1);
      if (iVar1 == (int)(param_2 >> 0x20)) {
        pJVar3 = (JoltJoint3D *)*puVar7;
        if (pJVar3 != (JoltJoint3D *)0x0) {
          if ((param_3 != 0) && ((uint)param_3 < *(uint *)(this + 0x244))) {
            puVar7 = (undefined8 *)
                     (((param_3 & 0xffffffff) % (ulong)*(uint *)(this + 0x240)) * 0x10 +
                     *(long *)(*(long *)(this + 0x230) +
                              ((param_3 & 0xffffffff) / (ulong)*(uint *)(this + 0x240)) * 8));
            iVar2 = *(int *)(puVar7 + 1);
            if (iVar2 == (int)(param_3 >> 0x20)) {
              pJVar4 = (JoltBody3D *)*puVar7;
              if (pJVar4 != (JoltBody3D *)0x0) {
                if ((param_5 == 0) || (*(uint *)(this + 0x244) <= (uint)param_5)) {
LAB_0010a950:
                  pJVar5 = (JoltBody3D *)0x0;
                }
                else {
                  puVar7 = (undefined8 *)
                           (((param_5 & 0xffffffff) % (ulong)*(uint *)(this + 0x240)) * 0x10 +
                           *(long *)(*(long *)(this + 0x230) +
                                    ((param_5 & 0xffffffff) / (ulong)*(uint *)(this + 0x240)) * 8));
                  iVar2 = *(int *)(puVar7 + 1);
                  if (iVar2 == (int)(param_5 >> 0x20)) {
                    pJVar5 = (JoltBody3D *)*puVar7;
                    if (pJVar4 == pJVar5) {
                      pcVar6 = "Condition \"body_a == body_b\" is true.";
                      uVar8 = 0x564;
                      pcVar9 = "modules/jolt_physics/jolt_physics_server_3d.cpp";
                      pcVar10 = "joint_make_slider";
                      goto LAB_0010a998;
                    }
                  }
                  else {
                    if (0x7ffffffe < iVar2 + 0x80000000U) goto LAB_0010a950;
                    _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                     "Method/function failed. Returning: nullptr",
                                     "Attempting to use an uninitialized RID",0,0);
                    pJVar5 = (JoltBody3D *)0x0;
                  }
                }
                this_00 = (JoltSliderJoint3D *)operator_new(0xd0,"");
                JoltSliderJoint3D::JoltSliderJoint3D(this_00,pJVar3,pJVar4,pJVar5,param_4,param_6);
                (*(code *)**(undefined8 **)pJVar3)(pJVar3);
                Memory::free_static(pJVar3,false);
                if ((uint)param_2 < *(uint *)(this + 0x34c)) {
                  puVar7 = (undefined8 *)
                           (((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x348)) * 0x10 +
                           *(long *)(*(long *)(this + 0x338) +
                                    ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x348)) * 8));
                  iVar2 = *(int *)(puVar7 + 1);
                  if (iVar1 == iVar2) {
                    *puVar7 = this_00;
                    return;
                  }
                  if (iVar2 + 0x80000000U < 0x7fffffff) {
                    _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                     "Method/function failed. Returning: nullptr",
                                     "Attempting to use an uninitialized RID",0,0);
                  }
                }
                pcVar9 = "./core/templates/rid_owner.h";
                pcVar6 = "Parameter \"ptr\" is null.";
                uVar8 = 0x1ee;
                pcVar10 = "replace";
                goto LAB_0010a998;
              }
            }
            else if (iVar2 + 0x80000000U < 0x7fffffff) {
              _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                               "Method/function failed. Returning: nullptr",
                               "Attempting to use an uninitialized RID",0,0);
            }
          }
          pcVar6 = "Parameter \"body_a\" is null.";
          uVar8 = 0x561;
          pcVar9 = "modules/jolt_physics/jolt_physics_server_3d.cpp";
          pcVar10 = "joint_make_slider";
          goto LAB_0010a998;
        }
      }
      else if (iVar1 + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
  }
  pcVar6 = "Parameter \"old_joint\" is null.";
  uVar8 = 0x55e;
  pcVar9 = "modules/jolt_physics/jolt_physics_server_3d.cpp";
  pcVar10 = "joint_make_slider";
LAB_0010a998:
  _err_print_error(pcVar10,pcVar9,uVar8,pcVar6,0,0);
  return;
}



/* JoltPhysicsServer3D::space_is_active(RID) const */

undefined8 __thiscall JoltPhysicsServer3D::space_is_active(JoltPhysicsServer3D *this,ulong param_2)

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
  ulong uVar11;
  int iVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  uint uVar16;
  ulong uVar17;
  uint uVar18;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x194))) {
    plVar13 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 400)) * 0x10 +
                      *(long *)(*(long *)(this + 0x180) +
                               ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 400)) * 8));
    iVar12 = (int)plVar13[1];
    if (iVar12 == (int)(param_2 >> 0x20)) {
      lVar1 = *plVar13;
      if (lVar1 != 0) {
        if (*(long *)(this + 0x388) == 0) {
          return 0;
        }
        if (*(int *)(this + 0x3ac) == 0) {
          return 0;
        }
        uVar15 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x3a8) * 4));
        lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x3a8) * 8);
        uVar11 = lVar1 * 0x3ffff - 1;
        uVar11 = (uVar11 ^ uVar11 >> 0x1f) * 0x15;
        uVar11 = (uVar11 ^ uVar11 >> 0xb) * 0x41;
        uVar11 = uVar11 >> 0x16 ^ uVar11;
        uVar17 = uVar11 & 0xffffffff;
        if ((int)uVar11 == 0) {
          uVar17 = 1;
        }
        auVar3._8_8_ = 0;
        auVar3._0_8_ = uVar17 * lVar2;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uVar15;
        lVar14 = SUB168(auVar3 * auVar7,8);
        uVar18 = *(uint *)(*(long *)(this + 0x3a0) + lVar14 * 4);
        iVar12 = SUB164(auVar3 * auVar7,8);
        if (uVar18 == 0) {
          return 0;
        }
        uVar16 = 0;
        do {
          if ((uVar18 == (uint)uVar17) &&
             (lVar1 == *(long *)(*(long *)(this + 0x388) +
                                (ulong)*(uint *)(*(long *)(this + 0x390) + lVar14 * 4) * 8))) {
            return 1;
          }
          uVar16 = uVar16 + 1;
          auVar4._8_8_ = 0;
          auVar4._0_8_ = (ulong)(iVar12 + 1) * lVar2;
          auVar8._8_8_ = 0;
          auVar8._0_8_ = uVar15;
          lVar14 = SUB168(auVar4 * auVar8,8);
          uVar18 = *(uint *)(*(long *)(this + 0x3a0) + lVar14 * 4);
          iVar12 = SUB164(auVar4 * auVar8,8);
          if (uVar18 == 0) {
            return 0;
          }
          auVar5._8_8_ = 0;
          auVar5._0_8_ = (ulong)uVar18 * lVar2;
          auVar9._8_8_ = 0;
          auVar9._0_8_ = uVar15;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (ulong)((*(uint *)(hash_table_size_primes +
                                           (ulong)*(uint *)(this + 0x3a8) * 4) + iVar12) -
                                SUB164(auVar5 * auVar9,8)) * lVar2;
          auVar10._8_8_ = 0;
          auVar10._0_8_ = uVar15;
        } while (uVar16 <= SUB164(auVar6 * auVar10,8));
        return 0;
      }
    }
    else if (iVar12 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("space_is_active","modules/jolt_physics/jolt_physics_server_3d.cpp",0xd4,
                   "Parameter \"space\" is null.",0,0);
  return 0;
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoltPhysicsServer3D::JoltPhysicsServer3D(bool) */

void __thiscall JoltPhysicsServer3D::JoltPhysicsServer3D(JoltPhysicsServer3D *this,bool param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  PhysicsServer3D::PhysicsServer3D((PhysicsServer3D *)this);
  uVar1 = _UNK_00117e38;
  uVar2 = __LC213;
  *(undefined1 (*) [16])(this + 0x1b8) = (undefined1  [16])0x0;
  *(undefined ***)this = &PTR__initialize_classv_00117468;
  *(undefined ***)(this + 0x178) = &PTR__RID_Alloc_001173a8;
  *(undefined8 *)(this + 0x180) = 0;
  *(undefined8 *)(this + 0x188) = 0;
  *(undefined8 *)(this + 0x1a0) = 0;
  *(undefined8 *)(this + 0x1c8) = 0;
  *(undefined4 *)(this + 0x1b8) = 1;
  *(undefined8 *)(this + 400) = uVar2;
  *(undefined8 *)(this + 0x198) = uVar1;
  *(undefined1 (*) [16])(this + 0x1a8) = (undefined1  [16])0x0;
  uVar2 = Memory::alloc_static(0x108,false);
  *(undefined8 *)(this + 0x180) = uVar2;
  uVar2 = Memory::alloc_static((ulong)*(uint *)(this + 0x19c) << 3,false);
  *(undefined8 *)(this + 0x188) = uVar2;
  *(undefined1 (*) [16])(this + 0x210) = (undefined1  [16])0x0;
  *(undefined ***)(this + 0x1d0) = &PTR__RID_Alloc_001173c8;
  uVar1 = _UNK_00117e38;
  uVar2 = __LC213;
  *(undefined8 *)(this + 0x1d8) = 0;
  *(undefined8 *)(this + 0x1e0) = 0;
  *(undefined8 *)(this + 0x1f8) = 0;
  *(undefined8 *)(this + 0x220) = 0;
  *(undefined4 *)(this + 0x210) = 1;
  *(undefined8 *)(this + 0x1e8) = uVar2;
  *(undefined8 *)(this + 0x1f0) = uVar1;
  *(undefined1 (*) [16])(this + 0x200) = (undefined1  [16])0x0;
  uVar2 = Memory::alloc_static(0x108,false);
  *(undefined8 *)(this + 0x1d8) = uVar2;
  uVar2 = Memory::alloc_static((ulong)*(uint *)(this + 500) << 3,false);
  *(undefined8 *)(this + 0x1e0) = uVar2;
  *(undefined1 (*) [16])(this + 0x268) = (undefined1  [16])0x0;
  *(undefined ***)(this + 0x228) = &PTR__RID_Alloc_001173e8;
  uVar1 = _UNK_00117e38;
  uVar2 = __LC213;
  *(undefined8 *)(this + 0x230) = 0;
  *(undefined8 *)(this + 0x238) = 0;
  *(undefined8 *)(this + 0x250) = 0;
  *(undefined8 *)(this + 0x278) = 0;
  *(undefined4 *)(this + 0x268) = 1;
  *(undefined8 *)(this + 0x240) = uVar2;
  *(undefined8 *)(this + 0x248) = uVar1;
  *(undefined1 (*) [16])(this + 600) = (undefined1  [16])0x0;
  uVar2 = Memory::alloc_static(0x108,false);
  *(undefined8 *)(this + 0x230) = uVar2;
  uVar2 = Memory::alloc_static((ulong)*(uint *)(this + 0x24c) << 3,false);
  *(undefined8 *)(this + 0x238) = uVar2;
  *(undefined1 (*) [16])(this + 0x2c0) = (undefined1  [16])0x0;
  *(undefined ***)(this + 0x280) = &PTR__RID_Alloc_00117408;
  uVar1 = _UNK_00117e38;
  uVar2 = __LC213;
  *(undefined8 *)(this + 0x288) = 0;
  *(undefined8 *)(this + 0x290) = 0;
  *(undefined8 *)(this + 0x2a8) = 0;
  *(undefined8 *)(this + 0x2d0) = 0;
  *(undefined4 *)(this + 0x2c0) = 1;
  *(undefined8 *)(this + 0x298) = uVar2;
  *(undefined8 *)(this + 0x2a0) = uVar1;
  *(undefined1 (*) [16])(this + 0x2b0) = (undefined1  [16])0x0;
  uVar2 = Memory::alloc_static(0x108,false);
  *(undefined8 *)(this + 0x288) = uVar2;
  uVar2 = Memory::alloc_static((ulong)*(uint *)(this + 0x2a4) << 3,false);
  *(undefined8 *)(this + 0x290) = uVar2;
  *(undefined1 (*) [16])(this + 0x318) = (undefined1  [16])0x0;
  *(undefined ***)(this + 0x2d8) = &PTR__RID_Alloc_00117428;
  uVar1 = _UNK_00117e38;
  uVar2 = __LC213;
  *(undefined8 *)(this + 0x2e0) = 0;
  *(undefined8 *)(this + 0x2e8) = 0;
  *(undefined8 *)(this + 0x300) = 0;
  *(undefined8 *)(this + 0x328) = 0;
  *(undefined4 *)(this + 0x318) = 1;
  *(undefined8 *)(this + 0x2f0) = uVar2;
  *(undefined8 *)(this + 0x2f8) = uVar1;
  *(undefined1 (*) [16])(this + 0x308) = (undefined1  [16])0x0;
  uVar2 = Memory::alloc_static(0x108,false);
  *(undefined8 *)(this + 0x2e0) = uVar2;
  uVar2 = Memory::alloc_static((ulong)*(uint *)(this + 0x2fc) << 3,false);
  *(undefined8 *)(this + 0x2e8) = uVar2;
  *(undefined1 (*) [16])(this + 0x370) = (undefined1  [16])0x0;
  *(undefined ***)(this + 0x330) = &PTR__RID_Alloc_00117448;
  uVar1 = _UNK_00117e38;
  uVar2 = __LC213;
  *(undefined8 *)(this + 0x338) = 0;
  *(undefined8 *)(this + 0x340) = 0;
  *(undefined8 *)(this + 0x358) = 0;
  *(undefined8 *)(this + 0x380) = 0;
  *(undefined4 *)(this + 0x370) = 1;
  *(undefined1 (*) [16])(this + 0x360) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x348) = uVar2;
  *(undefined8 *)(this + 0x350) = uVar1;
  uVar2 = Memory::alloc_static(0x108,false);
  *(undefined8 *)(this + 0x338) = uVar2;
  uVar2 = Memory::alloc_static((ulong)*(uint *)(this + 0x354) << 3,false);
  *(undefined8 *)(this + 0x340) = uVar2;
  this[0x3b8] = (JoltPhysicsServer3D)param_1;
  *(undefined8 *)(this + 0x3a8) = 2;
  *(undefined8 *)(this + 0x3b0) = 0;
  this[0x3b9] = (JoltPhysicsServer3D)0x1;
  *(undefined2 *)(this + 0x3ba) = 0;
  *(undefined1 (*) [16])(this + 0x388) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x398) = (undefined1  [16])0x0;
  singleton = this;
  return;
}



/* JoltPhysicsServer3D::free_area(JoltArea3D*) */

void __thiscall JoltPhysicsServer3D::free_area(JoltPhysicsServer3D *this,JoltArea3D *param_1)

{
  pthread_mutex_t *__mutex;
  ulong uVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  void *pvVar7;
  
  if (param_1 == (JoltArea3D *)0x0) {
    _err_print_error("free_area","modules/jolt_physics/jolt_physics_server_3d.cpp",0x660,
                     "Parameter \"p_area\" is null.",0,0);
    return;
  }
  __mutex = (pthread_mutex_t *)(this + 0x200);
  JoltObject3D::set_space((JoltSpace3D *)param_1);
  uVar1 = *(ulong *)(param_1 + 0x18);
  iVar4 = pthread_mutex_lock(__mutex);
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar4);
  }
  if ((uint)uVar1 < *(uint *)(this + 0x1ec)) {
    lVar6 = ((uVar1 & 0xffffffff) % (ulong)*(uint *)(this + 0x1e8)) * 0x10 +
            *(long *)(*(long *)(this + 0x1d8) +
                     ((uVar1 & 0xffffffff) / (ulong)*(uint *)(this + 0x1e8)) * 8);
    iVar4 = *(int *)(lVar6 + 8);
    if (iVar4 < 0) {
      pthread_mutex_unlock(__mutex);
      _err_print_error(&_LC218,"./core/templates/rid_owner.h",0x16c,"Method/function failed.",
                       "Attempted to free an uninitialized or invalid RID",0,0);
    }
    else if ((int)(uVar1 >> 0x20) == iVar4) {
      *(undefined4 *)(lVar6 + 8) = 0xffffffff;
      uVar5 = *(int *)(this + 0x1f0) - 1;
      *(uint *)(this + 0x1f0) = uVar5;
      *(uint *)(*(long *)(*(long *)(this + 0x1e0) +
                         ((ulong)uVar5 / (ulong)*(uint *)(this + 0x1e8)) * 8) +
               ((ulong)uVar5 % (ulong)*(uint *)(this + 0x1e8)) * 4) = (uint)uVar1;
      pthread_mutex_unlock(__mutex);
    }
    else {
      pthread_mutex_unlock(__mutex);
      _err_print_error(&_LC218,"./core/templates/rid_owner.h",0x171,"Method/function failed.",0,0);
    }
  }
  else {
    pthread_mutex_unlock(__mutex);
    _err_print_error(&_LC218,"./core/templates/rid_owner.h",0x161,"Method/function failed.",0,0);
  }
  *(code **)param_1 = JoltShapedObject3D::~JoltShapedObject3D;
  Callable::~Callable((Callable *)(param_1 + 0x148));
  Callable::~Callable((Callable *)(param_1 + 0x138));
  pvVar7 = *(void **)(param_1 + 0x100);
  if (pvVar7 != (void *)0x0) {
    if (*(int *)(param_1 + 0x124) != 0) {
      HashMap<JPH::BodyID,JoltArea3D::Overlap,JoltArea3D::BodyIDHasher,HashMapComparatorDefault<JPH::BodyID>,DefaultTypedAllocator<HashMapElement<JPH::BodyID,JoltArea3D::Overlap>>>
      ::clear((HashMap<JPH::BodyID,JoltArea3D::Overlap,JoltArea3D::BodyIDHasher,HashMapComparatorDefault<JPH::BodyID>,DefaultTypedAllocator<HashMapElement<JPH::BodyID,JoltArea3D::Overlap>>>
               *)(param_1 + 0xf8));
      pvVar7 = *(void **)(param_1 + 0x100);
      if (pvVar7 == (void *)0x0) goto LAB_0010b2c1;
    }
    Memory::free_static(pvVar7,false);
    Memory::free_static(*(void **)(param_1 + 0x108),false);
  }
LAB_0010b2c1:
  pvVar7 = *(void **)(param_1 + 0xd0);
  if (pvVar7 != (void *)0x0) {
    if (*(int *)(param_1 + 0xf4) != 0) {
      HashMap<JPH::BodyID,JoltArea3D::Overlap,JoltArea3D::BodyIDHasher,HashMapComparatorDefault<JPH::BodyID>,DefaultTypedAllocator<HashMapElement<JPH::BodyID,JoltArea3D::Overlap>>>
      ::clear((HashMap<JPH::BodyID,JoltArea3D::Overlap,JoltArea3D::BodyIDHasher,HashMapComparatorDefault<JPH::BodyID>,DefaultTypedAllocator<HashMapElement<JPH::BodyID,JoltArea3D::Overlap>>>
               *)(param_1 + 200));
      pvVar7 = *(void **)(param_1 + 0xd0);
      if (pvVar7 == (void *)0x0) goto LAB_0010b304;
    }
    Memory::free_static(pvVar7,false);
    Memory::free_static(*(void **)(param_1 + 0xd8),false);
  }
LAB_0010b304:
  plVar2 = *(long **)(param_1 + 0xa8);
  if (plVar2 != (long *)0x0) {
    lVar6 = *(long *)(param_1 + 0xb8);
    if (lVar6 != 0) {
      *(undefined8 *)(lVar6 + 0x18) = *(undefined8 *)(param_1 + 0xc0);
    }
    lVar3 = *(long *)(param_1 + 0xc0);
    if (lVar3 != 0) {
      *(long *)(lVar3 + 0x10) = lVar6;
    }
    if (param_1 + 0xa8 == (JoltArea3D *)*plVar2) {
      *plVar2 = *(long *)(param_1 + 0xb8);
    }
    if (param_1 + 0xa8 == (JoltArea3D *)plVar2[1]) {
      plVar2[1] = lVar3;
    }
  }
  JoltShapedObject3D::~JoltShapedObject3D((JoltShapedObject3D *)param_1);
  Memory::free_static(param_1,false);
  return;
}



/* JoltPhysicsServer3D::free_shape(JoltShape3D*) */

void __thiscall JoltPhysicsServer3D::free_shape(JoltPhysicsServer3D *this,JoltShape3D *param_1)

{
  pthread_mutex_t *__mutex;
  ulong uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  
  if (param_1 == (JoltShape3D *)0x0) {
    _err_print_error("free_shape","modules/jolt_physics/jolt_physics_server_3d.cpp",0x678,
                     "Parameter \"p_shape\" is null.",0,0);
    return;
  }
  __mutex = (pthread_mutex_t *)(this + 0x308);
  JoltShape3D::remove_self();
  uVar1 = *(ulong *)(param_1 + 0x60);
  iVar2 = pthread_mutex_lock(__mutex);
  if (iVar2 == 0) {
    if ((uint)uVar1 < *(uint *)(this + 0x2f4)) {
      lVar4 = ((uVar1 & 0xffffffff) % (ulong)*(uint *)(this + 0x2f0)) * 0x10 +
              *(long *)(*(long *)(this + 0x2e0) +
                       ((uVar1 & 0xffffffff) / (ulong)*(uint *)(this + 0x2f0)) * 8);
      iVar2 = *(int *)(lVar4 + 8);
      if (iVar2 < 0) {
        pthread_mutex_unlock(__mutex);
        _err_print_error(&_LC218,"./core/templates/rid_owner.h",0x16c,"Method/function failed.",
                         "Attempted to free an uninitialized or invalid RID",0,0);
      }
      else if ((int)(uVar1 >> 0x20) == iVar2) {
        *(undefined4 *)(lVar4 + 8) = 0xffffffff;
        uVar3 = *(int *)(this + 0x2f8) - 1;
        *(uint *)(this + 0x2f8) = uVar3;
        *(uint *)(*(long *)(*(long *)(this + 0x2e8) +
                           ((ulong)uVar3 / (ulong)*(uint *)(this + 0x2f0)) * 8) +
                 ((ulong)uVar3 % (ulong)*(uint *)(this + 0x2f0)) * 4) = (uint)uVar1;
        pthread_mutex_unlock(__mutex);
      }
      else {
        pthread_mutex_unlock(__mutex);
        _err_print_error(&_LC218,"./core/templates/rid_owner.h",0x171,"Method/function failed.",0,0)
        ;
      }
    }
    else {
      pthread_mutex_unlock(__mutex);
      _err_print_error(&_LC218,"./core/templates/rid_owner.h",0x161,"Method/function failed.",0,0);
    }
    (**(code **)(*(long *)param_1 + 8))(param_1);
    Memory::free_static(param_1,false);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_system_error(iVar2);
}



/* JoltPhysicsServer3D::free_joint(JoltJoint3D*) */

void __thiscall JoltPhysicsServer3D::free_joint(JoltPhysicsServer3D *this,JoltJoint3D *param_1)

{
  pthread_mutex_t *__mutex;
  ulong uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  
  if (param_1 == (JoltJoint3D *)0x0) {
    _err_print_error("free_joint","modules/jolt_physics/jolt_physics_server_3d.cpp",0x680,
                     "Parameter \"p_joint\" is null.",0,0);
    return;
  }
  __mutex = (pthread_mutex_t *)(this + 0x360);
  uVar1 = *(ulong *)(param_1 + 0x30);
  iVar2 = pthread_mutex_lock(__mutex);
  if (iVar2 == 0) {
    if ((uint)uVar1 < *(uint *)(this + 0x34c)) {
      lVar4 = ((uVar1 & 0xffffffff) % (ulong)*(uint *)(this + 0x348)) * 0x10 +
              *(long *)(*(long *)(this + 0x338) +
                       ((uVar1 & 0xffffffff) / (ulong)*(uint *)(this + 0x348)) * 8);
      iVar2 = *(int *)(lVar4 + 8);
      if (iVar2 < 0) {
        pthread_mutex_unlock(__mutex);
        _err_print_error(&_LC218,"./core/templates/rid_owner.h",0x16c,"Method/function failed.",
                         "Attempted to free an uninitialized or invalid RID",0,0);
      }
      else if ((int)(uVar1 >> 0x20) == iVar2) {
        *(undefined4 *)(lVar4 + 8) = 0xffffffff;
        uVar3 = *(int *)(this + 0x350) - 1;
        *(uint *)(this + 0x350) = uVar3;
        *(uint *)(*(long *)(*(long *)(this + 0x340) +
                           ((ulong)uVar3 / (ulong)*(uint *)(this + 0x348)) * 8) +
                 ((ulong)uVar3 % (ulong)*(uint *)(this + 0x348)) * 4) = (uint)uVar1;
        pthread_mutex_unlock(__mutex);
      }
      else {
        pthread_mutex_unlock(__mutex);
        _err_print_error(&_LC218,"./core/templates/rid_owner.h",0x171,"Method/function failed.",0,0)
        ;
      }
    }
    else {
      pthread_mutex_unlock(__mutex);
      _err_print_error(&_LC218,"./core/templates/rid_owner.h",0x161,"Method/function failed.",0,0);
    }
    (*(code *)**(undefined8 **)param_1)(param_1);
    Memory::free_static(param_1,false);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_system_error(iVar2);
}



/* JoltPhysicsServer3D::dump_debug_snapshots(String const&) */

void JoltPhysicsServer3D::dump_debug_snapshots(String *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  iVar1 = *(int *)(param_1 + 0x3ac);
  if (iVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x388);
    lVar3 = 0;
    while( true ) {
      JoltSpace3D::dump_debug_snapshot(*(String **)(lVar2 + lVar3 * 8));
      if (iVar1 <= (int)lVar3 + 1) break;
      lVar3 = lVar3 + 1;
    }
  }
  return;
}



/* JoltPhysicsServer3D::space_dump_debug_snapshot(RID, String const&) */

void JoltPhysicsServer3D::space_dump_debug_snapshot(long param_1,ulong param_2)

{
  int iVar1;
  String *pSVar2;
  undefined8 *puVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(param_1 + 0x194))) {
    puVar3 = (undefined8 *)
             (((param_2 & 0xffffffff) % (ulong)*(uint *)(param_1 + 400)) * 0x10 +
             *(long *)(*(long *)(param_1 + 0x180) +
                      ((param_2 & 0xffffffff) / (ulong)*(uint *)(param_1 + 400)) * 8));
    iVar1 = *(int *)(puVar3 + 1);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      pSVar2 = (String *)*puVar3;
      if (pSVar2 != (String *)0x0) {
        JoltSpace3D::dump_debug_snapshot(pSVar2);
        return;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("space_dump_debug_snapshot","modules/jolt_physics/jolt_physics_server_3d.cpp",
                   0x690,"Parameter \"space\" is null.",0,0);
  return;
}



/* JoltPhysicsServer3D::joint_get_enabled(RID) const */

undefined1 __thiscall
JoltPhysicsServer3D::joint_get_enabled(JoltPhysicsServer3D *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x34c))) {
    plVar3 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x348)) * 0x10 +
                     *(long *)(*(long *)(this + 0x338) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x348)) * 8));
    iVar1 = (int)plVar3[1];
    if (iVar1 == (int)(param_2 >> 0x20)) {
      lVar2 = *plVar3;
      if (lVar2 != 0) {
        return *(undefined1 *)(lVar2 + 8);
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("joint_get_enabled","modules/jolt_physics/jolt_physics_server_3d.cpp",0x699,
                   "Parameter \"joint\" is null.",0,0);
  return 0;
}



/* JoltPhysicsServer3D::joint_set_enabled(RID, bool) */

void JoltPhysicsServer3D::joint_set_enabled(long param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(param_1 + 0x34c))) {
    plVar3 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(param_1 + 0x348)) * 0x10 +
                     *(long *)(*(long *)(param_1 + 0x338) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(param_1 + 0x348)) * 8));
    iVar1 = (int)plVar3[1];
    if (iVar1 == (int)(param_2 >> 0x20)) {
      lVar2 = *plVar3;
      if (lVar2 != 0) {
        JoltJoint3D::set_enabled(SUB81(lVar2,0));
        return;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("joint_set_enabled","modules/jolt_physics/jolt_physics_server_3d.cpp",0x6a0,
                   "Parameter \"joint\" is null.",0,0);
  return;
}



/* JoltPhysicsServer3D::joint_get_solver_velocity_iterations(RID) */

undefined4 __thiscall
JoltPhysicsServer3D::joint_get_solver_velocity_iterations(JoltPhysicsServer3D *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x34c))) {
    plVar3 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x348)) * 0x10 +
                     *(long *)(*(long *)(this + 0x338) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x348)) * 8));
    iVar1 = (int)plVar3[1];
    if (iVar1 == (int)(param_2 >> 0x20)) {
      lVar2 = *plVar3;
      if (lVar2 != 0) {
        return *(undefined4 *)(lVar2 + 0xc);
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("joint_get_solver_velocity_iterations",
                   "modules/jolt_physics/jolt_physics_server_3d.cpp",0x6a7,
                   "Parameter \"joint\" is null.",0,0);
  return 0;
}



/* JoltPhysicsServer3D::joint_set_solver_velocity_iterations(RID, int) */

void JoltPhysicsServer3D::joint_set_solver_velocity_iterations(long param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(param_1 + 0x34c))) {
    plVar3 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(param_1 + 0x348)) * 0x10 +
                     *(long *)(*(long *)(param_1 + 0x338) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(param_1 + 0x348)) * 8));
    iVar1 = (int)plVar3[1];
    if (iVar1 == (int)(param_2 >> 0x20)) {
      lVar2 = *plVar3;
      if (lVar2 != 0) {
        JoltJoint3D::set_solver_velocity_iterations((int)lVar2);
        return;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("joint_set_solver_velocity_iterations",
                   "modules/jolt_physics/jolt_physics_server_3d.cpp",0x6ae,
                   "Parameter \"joint\" is null.",0,0);
  return;
}



/* JoltPhysicsServer3D::joint_get_solver_position_iterations(RID) */

undefined4 __thiscall
JoltPhysicsServer3D::joint_get_solver_position_iterations(JoltPhysicsServer3D *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x34c))) {
    plVar3 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x348)) * 0x10 +
                     *(long *)(*(long *)(this + 0x338) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x348)) * 8));
    iVar1 = (int)plVar3[1];
    if (iVar1 == (int)(param_2 >> 0x20)) {
      lVar2 = *plVar3;
      if (lVar2 != 0) {
        return *(undefined4 *)(lVar2 + 0x10);
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("joint_get_solver_position_iterations",
                   "modules/jolt_physics/jolt_physics_server_3d.cpp",0x6b5,
                   "Parameter \"joint\" is null.",0,0);
  return 0;
}



/* JoltPhysicsServer3D::joint_set_solver_position_iterations(RID, int) */

void JoltPhysicsServer3D::joint_set_solver_position_iterations(long param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(param_1 + 0x34c))) {
    plVar3 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(param_1 + 0x348)) * 0x10 +
                     *(long *)(*(long *)(param_1 + 0x338) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(param_1 + 0x348)) * 8));
    iVar1 = (int)plVar3[1];
    if (iVar1 == (int)(param_2 >> 0x20)) {
      lVar2 = *plVar3;
      if (lVar2 != 0) {
        JoltJoint3D::set_solver_position_iterations((int)lVar2);
        return;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("joint_set_solver_position_iterations",
                   "modules/jolt_physics/jolt_physics_server_3d.cpp",0x6bc,
                   "Parameter \"joint\" is null.",0,0);
  return;
}



/* JoltPhysicsServer3D::pin_joint_get_applied_force(RID) */

undefined8 __thiscall
JoltPhysicsServer3D::pin_joint_get_applied_force(JoltPhysicsServer3D *this,ulong param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x34c))) {
    plVar2 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x348)) * 0x10 +
                     *(long *)(*(long *)(this + 0x338) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x348)) * 8));
    iVar1 = (int)plVar2[1];
    if (iVar1 == (int)(param_2 >> 0x20)) {
      plVar2 = (long *)*plVar2;
      if (plVar2 != (long *)0x0) {
        iVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
        if (iVar1 != 0) {
          _err_print_error("pin_joint_get_applied_force",
                           "modules/jolt_physics/jolt_physics_server_3d.cpp",0x6c5,
                           "Condition \"joint->get_type() != JOINT_TYPE_PIN\" is true. Returning: 0.0"
                           ,0,0);
          return 0;
        }
        uVar3 = JoltPinJoint3D::get_applied_force();
        return uVar3;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("pin_joint_get_applied_force","modules/jolt_physics/jolt_physics_server_3d.cpp",
                   0x6c3,"Parameter \"joint\" is null.",0,0);
  return 0;
}



/* JoltPhysicsServer3D::hinge_joint_get_jolt_param(RID, JoltPhysicsServer3D::HingeJointParamJolt)
   const */

undefined8 __thiscall
JoltPhysicsServer3D::hinge_joint_get_jolt_param
          (JoltPhysicsServer3D *this,ulong param_2,undefined4 param_3)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x34c))) {
    plVar2 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x348)) * 0x10 +
                     *(long *)(*(long *)(this + 0x338) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x348)) * 8));
    iVar1 = (int)plVar2[1];
    if (iVar1 == (int)(param_2 >> 0x20)) {
      plVar2 = (long *)*plVar2;
      if (plVar2 != (long *)0x0) {
        iVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
        if (iVar1 != 1) {
          _err_print_error("hinge_joint_get_jolt_param",
                           "modules/jolt_physics/jolt_physics_server_3d.cpp",0x6cf,
                           "Condition \"joint->get_type() != JOINT_TYPE_HINGE\" is true. Returning: 0.0"
                           ,0,0);
          return 0;
        }
        uVar3 = JoltHingeJoint3D::get_jolt_param(plVar2,param_3);
        return uVar3;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("hinge_joint_get_jolt_param","modules/jolt_physics/jolt_physics_server_3d.cpp",
                   0x6cd,"Parameter \"joint\" is null.",0,0);
  return 0;
}



/* JoltPhysicsServer3D::hinge_joint_set_jolt_param(RID, JoltPhysicsServer3D::HingeJointParamJolt,
   double) */

void __thiscall
JoltPhysicsServer3D::hinge_joint_set_jolt_param
          (undefined8 param_1,JoltPhysicsServer3D *this,ulong param_3,undefined4 param_4)

{
  int iVar1;
  char *pcVar2;
  long *plVar3;
  undefined8 uVar4;
  
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(this + 0x34c))) {
    plVar3 = (long *)(((param_3 & 0xffffffff) % (ulong)*(uint *)(this + 0x348)) * 0x10 +
                     *(long *)(*(long *)(this + 0x338) +
                              ((param_3 & 0xffffffff) / (ulong)*(uint *)(this + 0x348)) * 8));
    iVar1 = (int)plVar3[1];
    if (iVar1 == (int)(param_3 >> 0x20)) {
      plVar3 = (long *)*plVar3;
      if (plVar3 != (long *)0x0) {
        iVar1 = (**(code **)(*plVar3 + 0x10))(plVar3);
        if (iVar1 == 1) {
          JoltHingeJoint3D::set_jolt_param(plVar3,param_4);
          return;
        }
        uVar4 = 0x6d9;
        pcVar2 = "Condition \"joint->get_type() != JOINT_TYPE_HINGE\" is true.";
        goto LAB_0010c0b2;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      param_1 = _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                 "Method/function failed. Returning: nullptr",
                                 "Attempting to use an uninitialized RID",0,0);
    }
  }
  uVar4 = 0x6d7;
  pcVar2 = "Parameter \"joint\" is null.";
LAB_0010c0b2:
  _err_print_error(param_1,"hinge_joint_set_jolt_param",
                   "modules/jolt_physics/jolt_physics_server_3d.cpp",uVar4,pcVar2,0,0);
  return;
}



/* JoltPhysicsServer3D::hinge_joint_get_jolt_flag(RID, JoltPhysicsServer3D::HingeJointFlagJolt)
   const */

undefined8 __thiscall
JoltPhysicsServer3D::hinge_joint_get_jolt_flag
          (JoltPhysicsServer3D *this,ulong param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x34c))) {
    plVar3 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x348)) * 0x10 +
                     *(long *)(*(long *)(this + 0x338) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x348)) * 8));
    iVar1 = (int)plVar3[1];
    if (iVar1 == (int)(param_2 >> 0x20)) {
      plVar3 = (long *)*plVar3;
      if (plVar3 != (long *)0x0) {
        iVar1 = (**(code **)(*plVar3 + 0x10))(plVar3);
        if (iVar1 != 1) {
          _err_print_error("hinge_joint_get_jolt_flag",
                           "modules/jolt_physics/jolt_physics_server_3d.cpp",0x6e3,
                           "Condition \"joint->get_type() != JOINT_TYPE_HINGE\" is true. Returning: false"
                           ,0,0);
          return 0;
        }
        uVar2 = JoltHingeJoint3D::get_jolt_flag(plVar3,param_3);
        return uVar2;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("hinge_joint_get_jolt_flag","modules/jolt_physics/jolt_physics_server_3d.cpp",
                   0x6e1,"Parameter \"joint\" is null.",0,0);
  return 0;
}



/* JoltPhysicsServer3D::hinge_joint_set_jolt_flag(RID, JoltPhysicsServer3D::HingeJointFlagJolt,
   bool) */

void __thiscall
JoltPhysicsServer3D::hinge_joint_set_jolt_flag
          (JoltPhysicsServer3D *this,ulong param_2,undefined4 param_3,undefined1 param_4)

{
  int iVar1;
  char *pcVar2;
  long *plVar3;
  undefined8 uVar4;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x34c))) {
    plVar3 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x348)) * 0x10 +
                     *(long *)(*(long *)(this + 0x338) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x348)) * 8));
    iVar1 = (int)plVar3[1];
    if (iVar1 == (int)(param_2 >> 0x20)) {
      plVar3 = (long *)*plVar3;
      if (plVar3 != (long *)0x0) {
        iVar1 = (**(code **)(*plVar3 + 0x10))(plVar3);
        if (iVar1 == 1) {
          JoltHingeJoint3D::set_jolt_flag(plVar3,param_3,param_4);
          return;
        }
        uVar4 = 0x6ed;
        pcVar2 = "Condition \"joint->get_type() != JOINT_TYPE_HINGE\" is true.";
        goto LAB_0010c2d2;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  uVar4 = 0x6eb;
  pcVar2 = "Parameter \"joint\" is null.";
LAB_0010c2d2:
  _err_print_error("hinge_joint_set_jolt_flag","modules/jolt_physics/jolt_physics_server_3d.cpp",
                   uVar4,pcVar2,0,0);
  return;
}



/* JoltPhysicsServer3D::hinge_joint_get_applied_force(RID) */

undefined8 __thiscall
JoltPhysicsServer3D::hinge_joint_get_applied_force(JoltPhysicsServer3D *this,ulong param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x34c))) {
    plVar2 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x348)) * 0x10 +
                     *(long *)(*(long *)(this + 0x338) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x348)) * 8));
    iVar1 = (int)plVar2[1];
    if (iVar1 == (int)(param_2 >> 0x20)) {
      plVar2 = (long *)*plVar2;
      if (plVar2 != (long *)0x0) {
        iVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
        if (iVar1 != 1) {
          _err_print_error("hinge_joint_get_applied_force",
                           "modules/jolt_physics/jolt_physics_server_3d.cpp",0x6f7,
                           "Condition \"joint->get_type() != JOINT_TYPE_HINGE\" is true. Returning: 0.0f"
                           ,0,0);
          return 0;
        }
        uVar3 = JoltHingeJoint3D::get_applied_force();
        return uVar3;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("hinge_joint_get_applied_force","modules/jolt_physics/jolt_physics_server_3d.cpp"
                   ,0x6f5,"Parameter \"joint\" is null.",0,0);
  return 0;
}



/* JoltPhysicsServer3D::hinge_joint_get_applied_torque(RID) */

undefined8 __thiscall
JoltPhysicsServer3D::hinge_joint_get_applied_torque(JoltPhysicsServer3D *this,ulong param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x34c))) {
    plVar2 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x348)) * 0x10 +
                     *(long *)(*(long *)(this + 0x338) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x348)) * 8));
    iVar1 = (int)plVar2[1];
    if (iVar1 == (int)(param_2 >> 0x20)) {
      plVar2 = (long *)*plVar2;
      if (plVar2 != (long *)0x0) {
        iVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
        if (iVar1 != 1) {
          _err_print_error("hinge_joint_get_applied_torque",
                           "modules/jolt_physics/jolt_physics_server_3d.cpp",0x701,
                           "Condition \"joint->get_type() != JOINT_TYPE_HINGE\" is true. Returning: 0.0f"
                           ,0,0);
          return 0;
        }
        uVar3 = JoltHingeJoint3D::get_applied_torque();
        return uVar3;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("hinge_joint_get_applied_torque",
                   "modules/jolt_physics/jolt_physics_server_3d.cpp",0x6ff,
                   "Parameter \"joint\" is null.",0,0);
  return 0;
}



/* JoltPhysicsServer3D::slider_joint_get_jolt_param(RID, JoltPhysicsServer3D::SliderJointParamJolt)
   const */

undefined8 __thiscall
JoltPhysicsServer3D::slider_joint_get_jolt_param
          (JoltPhysicsServer3D *this,ulong param_2,undefined4 param_3)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x34c))) {
    plVar2 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x348)) * 0x10 +
                     *(long *)(*(long *)(this + 0x338) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x348)) * 8));
    iVar1 = (int)plVar2[1];
    if (iVar1 == (int)(param_2 >> 0x20)) {
      plVar2 = (long *)*plVar2;
      if (plVar2 != (long *)0x0) {
        iVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
        if (iVar1 != 2) {
          _err_print_error("slider_joint_get_jolt_param",
                           "modules/jolt_physics/jolt_physics_server_3d.cpp",0x70b,
                           "Condition \"joint->get_type() != JOINT_TYPE_SLIDER\" is true. Returning: 0.0"
                           ,0,0);
          return 0;
        }
        uVar3 = JoltSliderJoint3D::get_jolt_param(plVar2,param_3);
        return uVar3;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("slider_joint_get_jolt_param","modules/jolt_physics/jolt_physics_server_3d.cpp",
                   0x709,"Parameter \"joint\" is null.",0,0);
  return 0;
}



/* JoltPhysicsServer3D::slider_joint_set_jolt_param(RID, JoltPhysicsServer3D::SliderJointParamJolt,
   double) */

void __thiscall
JoltPhysicsServer3D::slider_joint_set_jolt_param
          (undefined8 param_1,JoltPhysicsServer3D *this,ulong param_3,undefined4 param_4)

{
  int iVar1;
  char *pcVar2;
  long *plVar3;
  undefined8 uVar4;
  
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(this + 0x34c))) {
    plVar3 = (long *)(((param_3 & 0xffffffff) % (ulong)*(uint *)(this + 0x348)) * 0x10 +
                     *(long *)(*(long *)(this + 0x338) +
                              ((param_3 & 0xffffffff) / (ulong)*(uint *)(this + 0x348)) * 8));
    iVar1 = (int)plVar3[1];
    if (iVar1 == (int)(param_3 >> 0x20)) {
      plVar3 = (long *)*plVar3;
      if (plVar3 != (long *)0x0) {
        iVar1 = (**(code **)(*plVar3 + 0x10))(plVar3);
        if (iVar1 == 2) {
          JoltSliderJoint3D::set_jolt_param(plVar3,param_4);
          return;
        }
        uVar4 = 0x715;
        pcVar2 = "Condition \"joint->get_type() != JOINT_TYPE_SLIDER\" is true.";
        goto LAB_0010c722;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      param_1 = _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                 "Method/function failed. Returning: nullptr",
                                 "Attempting to use an uninitialized RID",0,0);
    }
  }
  uVar4 = 0x713;
  pcVar2 = "Parameter \"joint\" is null.";
LAB_0010c722:
  _err_print_error(param_1,"slider_joint_set_jolt_param",
                   "modules/jolt_physics/jolt_physics_server_3d.cpp",uVar4,pcVar2,0,0);
  return;
}



/* JoltPhysicsServer3D::slider_joint_get_jolt_flag(RID, JoltPhysicsServer3D::SliderJointFlagJolt)
   const */

undefined8 __thiscall
JoltPhysicsServer3D::slider_joint_get_jolt_flag
          (JoltPhysicsServer3D *this,ulong param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x34c))) {
    plVar3 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x348)) * 0x10 +
                     *(long *)(*(long *)(this + 0x338) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x348)) * 8));
    iVar1 = (int)plVar3[1];
    if (iVar1 == (int)(param_2 >> 0x20)) {
      plVar3 = (long *)*plVar3;
      if (plVar3 != (long *)0x0) {
        iVar1 = (**(code **)(*plVar3 + 0x10))(plVar3);
        if (iVar1 != 2) {
          _err_print_error("slider_joint_get_jolt_flag",
                           "modules/jolt_physics/jolt_physics_server_3d.cpp",0x71f,
                           "Condition \"joint->get_type() != JOINT_TYPE_SLIDER\" is true. Returning: false"
                           ,0,0);
          return 0;
        }
        uVar2 = JoltSliderJoint3D::get_jolt_flag(plVar3,param_3);
        return uVar2;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("slider_joint_get_jolt_flag","modules/jolt_physics/jolt_physics_server_3d.cpp",
                   0x71d,"Parameter \"joint\" is null.",0,0);
  return 0;
}



/* JoltPhysicsServer3D::slider_joint_set_jolt_flag(RID, JoltPhysicsServer3D::SliderJointFlagJolt,
   bool) */

void __thiscall
JoltPhysicsServer3D::slider_joint_set_jolt_flag
          (JoltPhysicsServer3D *this,ulong param_2,undefined4 param_3,undefined1 param_4)

{
  int iVar1;
  char *pcVar2;
  long *plVar3;
  undefined8 uVar4;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x34c))) {
    plVar3 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x348)) * 0x10 +
                     *(long *)(*(long *)(this + 0x338) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x348)) * 8));
    iVar1 = (int)plVar3[1];
    if (iVar1 == (int)(param_2 >> 0x20)) {
      plVar3 = (long *)*plVar3;
      if (plVar3 != (long *)0x0) {
        iVar1 = (**(code **)(*plVar3 + 0x10))(plVar3);
        if (iVar1 == 2) {
          JoltSliderJoint3D::set_jolt_flag(plVar3,param_3,param_4);
          return;
        }
        uVar4 = 0x729;
        pcVar2 = "Condition \"joint->get_type() != JOINT_TYPE_SLIDER\" is true.";
        goto LAB_0010c942;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  uVar4 = 0x727;
  pcVar2 = "Parameter \"joint\" is null.";
LAB_0010c942:
  _err_print_error("slider_joint_set_jolt_flag","modules/jolt_physics/jolt_physics_server_3d.cpp",
                   uVar4,pcVar2,0,0);
  return;
}



/* JoltPhysicsServer3D::slider_joint_get_applied_force(RID) */

undefined8 __thiscall
JoltPhysicsServer3D::slider_joint_get_applied_force(JoltPhysicsServer3D *this,ulong param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x34c))) {
    plVar2 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x348)) * 0x10 +
                     *(long *)(*(long *)(this + 0x338) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x348)) * 8));
    iVar1 = (int)plVar2[1];
    if (iVar1 == (int)(param_2 >> 0x20)) {
      plVar2 = (long *)*plVar2;
      if (plVar2 != (long *)0x0) {
        iVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
        if (iVar1 != 2) {
          _err_print_error("slider_joint_get_applied_force",
                           "modules/jolt_physics/jolt_physics_server_3d.cpp",0x733,
                           "Condition \"joint->get_type() != JOINT_TYPE_SLIDER\" is true. Returning: 0.0f"
                           ,0,0);
          return 0;
        }
        uVar3 = JoltSliderJoint3D::get_applied_force();
        return uVar3;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("slider_joint_get_applied_force",
                   "modules/jolt_physics/jolt_physics_server_3d.cpp",0x731,
                   "Parameter \"joint\" is null.",0,0);
  return 0;
}



/* JoltPhysicsServer3D::slider_joint_get_applied_torque(RID) */

undefined8 __thiscall
JoltPhysicsServer3D::slider_joint_get_applied_torque(JoltPhysicsServer3D *this,ulong param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x34c))) {
    plVar2 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x348)) * 0x10 +
                     *(long *)(*(long *)(this + 0x338) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x348)) * 8));
    iVar1 = (int)plVar2[1];
    if (iVar1 == (int)(param_2 >> 0x20)) {
      plVar2 = (long *)*plVar2;
      if (plVar2 != (long *)0x0) {
        iVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
        if (iVar1 != 2) {
          _err_print_error("slider_joint_get_applied_torque",
                           "modules/jolt_physics/jolt_physics_server_3d.cpp",0x73d,
                           "Condition \"joint->get_type() != JOINT_TYPE_SLIDER\" is true. Returning: 0.0f"
                           ,0,0);
          return 0;
        }
        uVar3 = JoltSliderJoint3D::get_applied_torque();
        return uVar3;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("slider_joint_get_applied_torque",
                   "modules/jolt_physics/jolt_physics_server_3d.cpp",0x73b,
                   "Parameter \"joint\" is null.",0,0);
  return 0;
}



/* JoltPhysicsServer3D::cone_twist_joint_get_jolt_param(RID,
   JoltPhysicsServer3D::ConeTwistJointParamJolt) const */

undefined8 __thiscall
JoltPhysicsServer3D::cone_twist_joint_get_jolt_param
          (JoltPhysicsServer3D *this,ulong param_2,undefined4 param_3)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x34c))) {
    plVar2 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x348)) * 0x10 +
                     *(long *)(*(long *)(this + 0x338) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x348)) * 8));
    iVar1 = (int)plVar2[1];
    if (iVar1 == (int)(param_2 >> 0x20)) {
      plVar2 = (long *)*plVar2;
      if (plVar2 != (long *)0x0) {
        iVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
        if (iVar1 != 3) {
          _err_print_error("cone_twist_joint_get_jolt_param",
                           "modules/jolt_physics/jolt_physics_server_3d.cpp",0x747,
                           "Condition \"joint->get_type() != JOINT_TYPE_CONE_TWIST\" is true. Returning: 0.0"
                           ,0,0);
          return 0;
        }
        uVar3 = JoltConeTwistJoint3D::get_jolt_param(plVar2,param_3);
        return uVar3;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("cone_twist_joint_get_jolt_param",
                   "modules/jolt_physics/jolt_physics_server_3d.cpp",0x745,
                   "Parameter \"joint\" is null.",0,0);
  return 0;
}



/* JoltPhysicsServer3D::cone_twist_joint_set_jolt_param(RID,
   JoltPhysicsServer3D::ConeTwistJointParamJolt, double) */

void __thiscall
JoltPhysicsServer3D::cone_twist_joint_set_jolt_param
          (undefined8 param_1,JoltPhysicsServer3D *this,ulong param_3,undefined4 param_4)

{
  int iVar1;
  char *pcVar2;
  long *plVar3;
  undefined8 uVar4;
  
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(this + 0x34c))) {
    plVar3 = (long *)(((param_3 & 0xffffffff) % (ulong)*(uint *)(this + 0x348)) * 0x10 +
                     *(long *)(*(long *)(this + 0x338) +
                              ((param_3 & 0xffffffff) / (ulong)*(uint *)(this + 0x348)) * 8));
    iVar1 = (int)plVar3[1];
    if (iVar1 == (int)(param_3 >> 0x20)) {
      plVar3 = (long *)*plVar3;
      if (plVar3 != (long *)0x0) {
        iVar1 = (**(code **)(*plVar3 + 0x10))(plVar3);
        if (iVar1 == 3) {
          JoltConeTwistJoint3D::set_jolt_param(plVar3,param_4);
          return;
        }
        uVar4 = 0x751;
        pcVar2 = "Condition \"joint->get_type() != JOINT_TYPE_CONE_TWIST\" is true.";
        goto LAB_0010cd92;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      param_1 = _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                 "Method/function failed. Returning: nullptr",
                                 "Attempting to use an uninitialized RID",0,0);
    }
  }
  uVar4 = 0x74f;
  pcVar2 = "Parameter \"joint\" is null.";
LAB_0010cd92:
  _err_print_error(param_1,"cone_twist_joint_set_jolt_param",
                   "modules/jolt_physics/jolt_physics_server_3d.cpp",uVar4,pcVar2,0,0);
  return;
}



/* JoltPhysicsServer3D::cone_twist_joint_get_jolt_flag(RID,
   JoltPhysicsServer3D::ConeTwistJointFlagJolt) const */

undefined8 __thiscall
JoltPhysicsServer3D::cone_twist_joint_get_jolt_flag
          (JoltPhysicsServer3D *this,ulong param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x34c))) {
    plVar3 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x348)) * 0x10 +
                     *(long *)(*(long *)(this + 0x338) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x348)) * 8));
    iVar1 = (int)plVar3[1];
    if (iVar1 == (int)(param_2 >> 0x20)) {
      plVar3 = (long *)*plVar3;
      if (plVar3 != (long *)0x0) {
        iVar1 = (**(code **)(*plVar3 + 0x10))(plVar3);
        if (iVar1 != 3) {
          _err_print_error("cone_twist_joint_get_jolt_flag",
                           "modules/jolt_physics/jolt_physics_server_3d.cpp",0x75b,
                           "Condition \"joint->get_type() != JOINT_TYPE_CONE_TWIST\" is true. Returning: false"
                           ,0,0);
          return 0;
        }
        uVar2 = JoltConeTwistJoint3D::get_jolt_flag(plVar3,param_3);
        return uVar2;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("cone_twist_joint_get_jolt_flag",
                   "modules/jolt_physics/jolt_physics_server_3d.cpp",0x759,
                   "Parameter \"joint\" is null.",0,0);
  return 0;
}



/* JoltPhysicsServer3D::cone_twist_joint_set_jolt_flag(RID,
   JoltPhysicsServer3D::ConeTwistJointFlagJolt, bool) */

void __thiscall
JoltPhysicsServer3D::cone_twist_joint_set_jolt_flag
          (JoltPhysicsServer3D *this,ulong param_2,undefined4 param_3,undefined1 param_4)

{
  int iVar1;
  char *pcVar2;
  long *plVar3;
  undefined8 uVar4;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x34c))) {
    plVar3 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x348)) * 0x10 +
                     *(long *)(*(long *)(this + 0x338) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x348)) * 8));
    iVar1 = (int)plVar3[1];
    if (iVar1 == (int)(param_2 >> 0x20)) {
      plVar3 = (long *)*plVar3;
      if (plVar3 != (long *)0x0) {
        iVar1 = (**(code **)(*plVar3 + 0x10))(plVar3);
        if (iVar1 == 3) {
          JoltConeTwistJoint3D::set_jolt_flag(plVar3,param_3,param_4);
          return;
        }
        uVar4 = 0x765;
        pcVar2 = "Condition \"joint->get_type() != JOINT_TYPE_CONE_TWIST\" is true.";
        goto LAB_0010cfb2;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  uVar4 = 0x763;
  pcVar2 = "Parameter \"joint\" is null.";
LAB_0010cfb2:
  _err_print_error("cone_twist_joint_set_jolt_flag",
                   "modules/jolt_physics/jolt_physics_server_3d.cpp",uVar4,pcVar2,0,0);
  return;
}



/* JoltPhysicsServer3D::cone_twist_joint_get_applied_force(RID) */

undefined8 __thiscall
JoltPhysicsServer3D::cone_twist_joint_get_applied_force(JoltPhysicsServer3D *this,ulong param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x34c))) {
    plVar2 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x348)) * 0x10 +
                     *(long *)(*(long *)(this + 0x338) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x348)) * 8));
    iVar1 = (int)plVar2[1];
    if (iVar1 == (int)(param_2 >> 0x20)) {
      plVar2 = (long *)*plVar2;
      if (plVar2 != (long *)0x0) {
        iVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
        if (iVar1 != 3) {
          _err_print_error("cone_twist_joint_get_applied_force",
                           "modules/jolt_physics/jolt_physics_server_3d.cpp",0x76f,
                           "Condition \"joint->get_type() != JOINT_TYPE_CONE_TWIST\" is true. Returning: 0.0f"
                           ,0,0);
          return 0;
        }
        uVar3 = JoltConeTwistJoint3D::get_applied_force();
        return uVar3;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("cone_twist_joint_get_applied_force",
                   "modules/jolt_physics/jolt_physics_server_3d.cpp",0x76d,
                   "Parameter \"joint\" is null.",0,0);
  return 0;
}



/* JoltPhysicsServer3D::cone_twist_joint_get_applied_torque(RID) */

undefined8 __thiscall
JoltPhysicsServer3D::cone_twist_joint_get_applied_torque(JoltPhysicsServer3D *this,ulong param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x34c))) {
    plVar2 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x348)) * 0x10 +
                     *(long *)(*(long *)(this + 0x338) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x348)) * 8));
    iVar1 = (int)plVar2[1];
    if (iVar1 == (int)(param_2 >> 0x20)) {
      plVar2 = (long *)*plVar2;
      if (plVar2 != (long *)0x0) {
        iVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
        if (iVar1 != 3) {
          _err_print_error("cone_twist_joint_get_applied_torque",
                           "modules/jolt_physics/jolt_physics_server_3d.cpp",0x779,
                           "Condition \"joint->get_type() != JOINT_TYPE_CONE_TWIST\" is true. Returning: 0.0f"
                           ,0,0);
          return 0;
        }
        uVar3 = JoltConeTwistJoint3D::get_applied_torque();
        return uVar3;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("cone_twist_joint_get_applied_torque",
                   "modules/jolt_physics/jolt_physics_server_3d.cpp",0x777,
                   "Parameter \"joint\" is null.",0,0);
  return 0;
}



/* JoltPhysicsServer3D::generic_6dof_joint_get_jolt_param(RID, Vector3::Axis,
   JoltPhysicsServer3D::G6DOFJointAxisParamJolt) const */

undefined8 __thiscall
JoltPhysicsServer3D::generic_6dof_joint_get_jolt_param
          (JoltPhysicsServer3D *this,ulong param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x34c))) {
    plVar2 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x348)) * 0x10 +
                     *(long *)(*(long *)(this + 0x338) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x348)) * 8));
    iVar1 = (int)plVar2[1];
    if (iVar1 == (int)(param_2 >> 0x20)) {
      plVar2 = (long *)*plVar2;
      if (plVar2 != (long *)0x0) {
        iVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
        if (iVar1 != 4) {
          _err_print_error("generic_6dof_joint_get_jolt_param",
                           "modules/jolt_physics/jolt_physics_server_3d.cpp",0x783,
                           "Condition \"joint->get_type() != JOINT_TYPE_6DOF\" is true. Returning: 0.0"
                           ,0,0);
          return 0;
        }
        uVar3 = JoltGeneric6DOFJoint3D::get_jolt_param(plVar2,param_3,param_4);
        return uVar3;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("generic_6dof_joint_get_jolt_param",
                   "modules/jolt_physics/jolt_physics_server_3d.cpp",0x781,
                   "Parameter \"joint\" is null.",0,0);
  return 0;
}



/* JoltPhysicsServer3D::generic_6dof_joint_set_jolt_param(RID, Vector3::Axis,
   JoltPhysicsServer3D::G6DOFJointAxisParamJolt, double) */

void __thiscall
JoltPhysicsServer3D::generic_6dof_joint_set_jolt_param
          (undefined8 param_1,JoltPhysicsServer3D *this,ulong param_3,undefined4 param_4,
          undefined4 param_5)

{
  int iVar1;
  char *pcVar2;
  long *plVar3;
  undefined8 uVar4;
  
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(this + 0x34c))) {
    plVar3 = (long *)(((param_3 & 0xffffffff) % (ulong)*(uint *)(this + 0x348)) * 0x10 +
                     *(long *)(*(long *)(this + 0x338) +
                              ((param_3 & 0xffffffff) / (ulong)*(uint *)(this + 0x348)) * 8));
    iVar1 = (int)plVar3[1];
    if (iVar1 == (int)(param_3 >> 0x20)) {
      plVar3 = (long *)*plVar3;
      if (plVar3 != (long *)0x0) {
        iVar1 = (**(code **)(*plVar3 + 0x10))(plVar3);
        if (iVar1 == 4) {
          JoltGeneric6DOFJoint3D::set_jolt_param(plVar3,param_4,param_5);
          return;
        }
        uVar4 = 0x78d;
        pcVar2 = "Condition \"joint->get_type() != JOINT_TYPE_6DOF\" is true.";
        goto LAB_0010d402;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      param_1 = _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                 "Method/function failed. Returning: nullptr",
                                 "Attempting to use an uninitialized RID",0,0);
    }
  }
  uVar4 = 0x78b;
  pcVar2 = "Parameter \"joint\" is null.";
LAB_0010d402:
  _err_print_error(param_1,"generic_6dof_joint_set_jolt_param",
                   "modules/jolt_physics/jolt_physics_server_3d.cpp",uVar4,pcVar2,0,0);
  return;
}



/* JoltPhysicsServer3D::generic_6dof_joint_get_jolt_flag(RID, Vector3::Axis,
   JoltPhysicsServer3D::G6DOFJointAxisFlagJolt) const */

undefined8 __thiscall
JoltPhysicsServer3D::generic_6dof_joint_get_jolt_flag
          (JoltPhysicsServer3D *this,ulong param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x34c))) {
    plVar3 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x348)) * 0x10 +
                     *(long *)(*(long *)(this + 0x338) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x348)) * 8));
    iVar1 = (int)plVar3[1];
    if (iVar1 == (int)(param_2 >> 0x20)) {
      plVar3 = (long *)*plVar3;
      if (plVar3 != (long *)0x0) {
        iVar1 = (**(code **)(*plVar3 + 0x10))(plVar3);
        if (iVar1 != 4) {
          _err_print_error("generic_6dof_joint_get_jolt_flag",
                           "modules/jolt_physics/jolt_physics_server_3d.cpp",0x797,
                           "Condition \"joint->get_type() != JOINT_TYPE_6DOF\" is true. Returning: false"
                           ,0,0);
          return 0;
        }
        uVar2 = JoltGeneric6DOFJoint3D::get_jolt_flag(plVar3,param_3,param_4);
        return uVar2;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("generic_6dof_joint_get_jolt_flag",
                   "modules/jolt_physics/jolt_physics_server_3d.cpp",0x795,
                   "Parameter \"joint\" is null.",0,0);
  return 0;
}



/* JoltPhysicsServer3D::generic_6dof_joint_set_jolt_flag(RID, Vector3::Axis,
   JoltPhysicsServer3D::G6DOFJointAxisFlagJolt, bool) */

void __thiscall
JoltPhysicsServer3D::generic_6dof_joint_set_jolt_flag
          (JoltPhysicsServer3D *this,ulong param_2,undefined4 param_3,undefined4 param_4,
          undefined1 param_5)

{
  int iVar1;
  char *pcVar2;
  long *plVar3;
  undefined8 uVar4;
  
  if (param_2 != 0) {
    if ((uint)param_2 < *(uint *)(this + 0x34c)) {
      plVar3 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x348)) * 0x10 +
                       *(long *)(*(long *)(this + 0x338) +
                                ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x348)) * 8));
      iVar1 = (int)plVar3[1];
      if (iVar1 == (int)(param_2 >> 0x20)) {
        plVar3 = (long *)*plVar3;
        if (plVar3 != (long *)0x0) {
          iVar1 = (**(code **)(*plVar3 + 0x10))(plVar3);
          if (iVar1 == 4) {
            JoltGeneric6DOFJoint3D::set_jolt_flag(plVar3,param_3,param_4,param_5);
            return;
          }
          uVar4 = 0x7a1;
          pcVar2 = "Condition \"joint->get_type() != JOINT_TYPE_6DOF\" is true.";
          goto LAB_0010d632;
        }
      }
      else if (iVar1 + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
  }
  uVar4 = 0x79f;
  pcVar2 = "Parameter \"joint\" is null.";
LAB_0010d632:
  _err_print_error("generic_6dof_joint_set_jolt_flag",
                   "modules/jolt_physics/jolt_physics_server_3d.cpp",uVar4,pcVar2,0,0);
  return;
}



/* JoltPhysicsServer3D::generic_6dof_joint_get_applied_force(RID) */

undefined8 __thiscall
JoltPhysicsServer3D::generic_6dof_joint_get_applied_force(JoltPhysicsServer3D *this,ulong param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x34c))) {
    plVar2 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x348)) * 0x10 +
                     *(long *)(*(long *)(this + 0x338) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x348)) * 8));
    iVar1 = (int)plVar2[1];
    if (iVar1 == (int)(param_2 >> 0x20)) {
      plVar2 = (long *)*plVar2;
      if (plVar2 != (long *)0x0) {
        iVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
        if (iVar1 != 4) {
          _err_print_error("generic_6dof_joint_get_applied_force",
                           "modules/jolt_physics/jolt_physics_server_3d.cpp",0x7ab,
                           "Condition \"joint->get_type() != JOINT_TYPE_6DOF\" is true. Returning: 0.0f"
                           ,0,0);
          return 0;
        }
        uVar3 = JoltGeneric6DOFJoint3D::get_applied_force();
        return uVar3;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("generic_6dof_joint_get_applied_force",
                   "modules/jolt_physics/jolt_physics_server_3d.cpp",0x7a9,
                   "Parameter \"joint\" is null.",0,0);
  return 0;
}



/* JoltPhysicsServer3D::generic_6dof_joint_get_applied_torque(RID) */

undefined8 __thiscall
JoltPhysicsServer3D::generic_6dof_joint_get_applied_torque(JoltPhysicsServer3D *this,ulong param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x34c))) {
    plVar2 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x348)) * 0x10 +
                     *(long *)(*(long *)(this + 0x338) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x348)) * 8));
    iVar1 = (int)plVar2[1];
    if (iVar1 == (int)(param_2 >> 0x20)) {
      plVar2 = (long *)*plVar2;
      if (plVar2 != (long *)0x0) {
        iVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
        if (iVar1 != 4) {
          _err_print_error("generic_6dof_joint_get_applied_torque",
                           "modules/jolt_physics/jolt_physics_server_3d.cpp",0x7b5,
                           "Condition \"joint->get_type() != JOINT_TYPE_6DOF\" is true. Returning: 0.0f"
                           ,0,0);
          return 0;
        }
        uVar3 = JoltGeneric6DOFJoint3D::get_applied_torque();
        return uVar3;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("generic_6dof_joint_get_applied_torque",
                   "modules/jolt_physics/jolt_physics_server_3d.cpp",0x7b3,
                   "Parameter \"joint\" is null.",0,0);
  return 0;
}



/* JoltPhysicsServer3D::space_set_active(RID, bool) */

void __thiscall
JoltPhysicsServer3D::space_set_active(JoltPhysicsServer3D *this,ulong param_2,char param_3)

{
  uint *puVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
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
  uint uVar30;
  ulong uVar31;
  uint uVar32;
  long lVar33;
  uint *puVar34;
  int iVar35;
  uint uVar36;
  long *plVar37;
  long lVar38;
  ulong uVar39;
  uint *puVar40;
  uint *puVar41;
  ulong uVar42;
  ulong uVar43;
  ulong uVar44;
  uint uVar45;
  long in_FS_OFFSET;
  JoltSpace3D *local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x194))) {
    plVar37 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 400)) * 0x10 +
                      *(long *)(*(long *)(this + 0x180) +
                               ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 400)) * 8));
    iVar35 = (int)plVar37[1];
    if (iVar35 == (int)(param_2 >> 0x20)) {
      lVar33 = *plVar37;
      if (lVar33 != 0) {
        if (param_3 == '\0') {
          lVar6 = *(long *)(this + 0x388);
          *(undefined1 *)(lVar33 + 0x88) = 0;
          if ((lVar6 != 0) && (*(int *)(this + 0x3ac) != 0)) {
            lVar7 = *(long *)(this + 0x3a0);
            uVar30 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x3a8) * 4);
            lVar8 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x3a8) * 8);
            uVar43 = CONCAT44(0,uVar30);
            uVar31 = lVar33 * 0x3ffff - 1;
            uVar31 = (uVar31 ^ uVar31 >> 0x1f) * 0x15;
            uVar31 = (uVar31 ^ uVar31 >> 0xb) * 0x41;
            uVar31 = uVar31 >> 0x16 ^ uVar31;
            uVar42 = uVar31 & 0xffffffff;
            if ((int)uVar31 == 0) {
              uVar42 = 1;
            }
            auVar10._8_8_ = 0;
            auVar10._0_8_ = uVar42 * lVar8;
            auVar20._8_8_ = 0;
            auVar20._0_8_ = uVar43;
            lVar38 = SUB168(auVar10 * auVar20,8);
            uVar45 = *(uint *)(lVar7 + lVar38 * 4);
            iVar35 = SUB164(auVar10 * auVar20,8);
            if (uVar45 != 0) {
              uVar32 = 0;
LAB_0010da5d:
              if ((uint)uVar42 != uVar45) goto LAB_0010da10;
              lVar9 = *(long *)(this + 0x390);
              uVar45 = *(uint *)(lVar9 + lVar38 * 4);
              uVar31 = (ulong)uVar45;
              if (lVar33 != *(long *)(lVar6 + uVar31 * 8)) goto LAB_0010da10;
              lVar38 = *(long *)(this + 0x398);
              puVar1 = (uint *)(lVar38 + uVar31 * 4);
              uVar32 = *puVar1;
              uVar42 = (ulong)uVar32;
              auVar14._8_8_ = 0;
              auVar14._0_8_ = (ulong)(uVar32 + 1) * lVar8;
              auVar24._8_8_ = 0;
              auVar24._0_8_ = uVar43;
              lVar33 = SUB168(auVar14 * auVar24,8) * 4;
              uVar36 = SUB164(auVar14 * auVar24,8);
              uVar44 = (ulong)uVar36;
              puVar40 = (uint *)(lVar7 + lVar33);
              if ((*puVar40 == 0) ||
                 (auVar15._8_8_ = 0, auVar15._0_8_ = (ulong)*puVar40 * lVar8, auVar25._8_8_ = 0,
                 auVar25._0_8_ = uVar43, auVar16._8_8_ = 0,
                 auVar16._0_8_ = (ulong)((uVar30 + uVar36) - SUB164(auVar15 * auVar25,8)) * lVar8,
                 auVar26._8_8_ = 0, auVar26._0_8_ = uVar43, SUB164(auVar16 * auVar26,8) == 0)) {
                uVar44 = (ulong)uVar32;
              }
              else {
                while( true ) {
                  puVar34 = (uint *)(lVar33 + lVar9);
                  puVar2 = (uint *)(lVar9 + uVar42 * 4);
                  puVar41 = (uint *)(uVar42 * 4 + lVar7);
                  puVar3 = (undefined4 *)(lVar38 + (ulong)*puVar34 * 4);
                  puVar4 = (undefined4 *)(lVar38 + (ulong)*puVar2 * 4);
                  uVar5 = *puVar4;
                  *puVar4 = *puVar3;
                  *puVar3 = uVar5;
                  uVar32 = *puVar40;
                  *puVar40 = *puVar41;
                  *puVar41 = uVar32;
                  uVar32 = *puVar34;
                  *puVar34 = *puVar2;
                  *puVar2 = uVar32;
                  auVar19._8_8_ = 0;
                  auVar19._0_8_ = (ulong)((int)uVar44 + 1) * lVar8;
                  auVar29._8_8_ = 0;
                  auVar29._0_8_ = uVar43;
                  uVar39 = SUB168(auVar19 * auVar29,8);
                  lVar33 = uVar39 * 4;
                  puVar40 = (uint *)(lVar7 + lVar33);
                  if ((*puVar40 == 0) ||
                     (auVar17._8_8_ = 0, auVar17._0_8_ = (ulong)*puVar40 * lVar8, auVar27._8_8_ = 0,
                     auVar27._0_8_ = uVar43, auVar18._8_8_ = 0,
                     auVar18._0_8_ =
                          (ulong)((SUB164(auVar19 * auVar29,8) + uVar30) -
                                 SUB164(auVar17 * auVar27,8)) * lVar8, auVar28._8_8_ = 0,
                     auVar28._0_8_ = uVar43, SUB164(auVar18 * auVar28,8) == 0)) break;
                  uVar42 = uVar44;
                  uVar44 = uVar39 & 0xffffffff;
                }
              }
              *(undefined4 *)(lVar7 + uVar44 * 4) = 0;
              uVar30 = *(int *)(this + 0x3ac) - 1;
              *(uint *)(this + 0x3ac) = uVar30;
              if (uVar45 < uVar30) {
                uVar32 = *(uint *)(lVar38 + (ulong)uVar30 * 4);
                *(undefined8 *)(lVar6 + uVar31 * 8) = *(undefined8 *)(lVar6 + (ulong)uVar30 * 8);
                *puVar1 = uVar32;
                *(uint *)(lVar9 + (ulong)*(uint *)(lVar38 + (ulong)*(uint *)(this + 0x3ac) * 4) * 4)
                     = uVar45;
              }
            }
          }
        }
        else {
          *(undefined1 *)(lVar33 + 0x88) = 1;
          HashSet<JoltSpace3D*,HashMapHasherDefault,HashMapComparatorDefault<JoltSpace3D*>>::insert
                    (local_58);
        }
LAB_0010dbdd:
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          return;
        }
        goto LAB_0010dc98;
      }
    }
    else if (iVar35 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    _err_print_error("space_set_active","modules/jolt_physics/jolt_physics_server_3d.cpp",199,
                     "Parameter \"space\" is null.",0,0);
    return;
  }
LAB_0010dc98:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_0010da10:
  uVar32 = uVar32 + 1;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = (ulong)(iVar35 + 1) * lVar8;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = uVar43;
  lVar38 = SUB168(auVar11 * auVar21,8);
  uVar45 = *(uint *)(lVar7 + lVar38 * 4);
  iVar35 = SUB164(auVar11 * auVar21,8);
  if ((uVar45 == 0) ||
     (auVar12._8_8_ = 0, auVar12._0_8_ = (ulong)uVar45 * lVar8, auVar22._8_8_ = 0,
     auVar22._0_8_ = uVar43, auVar13._8_8_ = 0,
     auVar13._0_8_ = (ulong)((uVar30 + iVar35) - SUB164(auVar12 * auVar22,8)) * lVar8,
     auVar23._8_8_ = 0, auVar23._0_8_ = uVar43, SUB164(auVar13 * auVar23,8) < uVar32))
  goto LAB_0010dbdd;
  goto LAB_0010da5d;
}



/* JoltPhysicsServer3D::free_space(JoltSpace3D*) */

void __thiscall JoltPhysicsServer3D::free_space(JoltPhysicsServer3D *this,JoltSpace3D *param_1)

{
  pthread_mutex_t *__mutex;
  ulong uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  
  if (param_1 == (JoltSpace3D *)0x0) {
    _err_print_error("free_space","modules/jolt_physics/jolt_physics_server_3d.cpp",0x657,
                     "Parameter \"p_space\" is null.",0,0);
    return;
  }
  __mutex = (pthread_mutex_t *)(this + 0x1a8);
  free_area(this,*(JoltArea3D **)(param_1 + 0x78));
  space_set_active(this,*(undefined8 *)(param_1 + 0x40),0);
  uVar1 = *(ulong *)(param_1 + 0x40);
  iVar2 = pthread_mutex_lock(__mutex);
  if (iVar2 == 0) {
    if ((uint)uVar1 < *(uint *)(this + 0x194)) {
      lVar4 = ((uVar1 & 0xffffffff) % (ulong)*(uint *)(this + 400)) * 0x10 +
              *(long *)(*(long *)(this + 0x180) +
                       ((uVar1 & 0xffffffff) / (ulong)*(uint *)(this + 400)) * 8);
      iVar2 = *(int *)(lVar4 + 8);
      if (iVar2 < 0) {
        pthread_mutex_unlock(__mutex);
        _err_print_error(&_LC218,"./core/templates/rid_owner.h",0x16c,"Method/function failed.",
                         "Attempted to free an uninitialized or invalid RID",0,0);
      }
      else if ((int)(uVar1 >> 0x20) == iVar2) {
        *(undefined4 *)(lVar4 + 8) = 0xffffffff;
        uVar3 = *(int *)(this + 0x198) - 1;
        *(uint *)(this + 0x198) = uVar3;
        *(uint *)(*(long *)(*(long *)(this + 0x188) +
                           ((ulong)uVar3 / (ulong)*(uint *)(this + 400)) * 8) +
                 ((ulong)uVar3 % (ulong)*(uint *)(this + 400)) * 4) = (uint)uVar1;
        pthread_mutex_unlock(__mutex);
      }
      else {
        pthread_mutex_unlock(__mutex);
        _err_print_error(&_LC218,"./core/templates/rid_owner.h",0x171,"Method/function failed.",0,0)
        ;
      }
    }
    else {
      pthread_mutex_unlock(__mutex);
      _err_print_error(&_LC218,"./core/templates/rid_owner.h",0x161,"Method/function failed.",0,0);
    }
    JoltSpace3D::~JoltSpace3D(param_1);
    Memory::free_static(param_1,false);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_system_error(iVar2);
}



/* JoltPhysicsServer3D::~JoltPhysicsServer3D() */

void __thiscall JoltPhysicsServer3D::~JoltPhysicsServer3D(JoltPhysicsServer3D *this)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  void *pvVar5;
  char *pcVar6;
  long lVar7;
  long in_FS_OFFSET;
  bool bVar8;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  bVar8 = singleton == this;
  *(undefined ***)this = &PTR__initialize_classv_00117468;
  if (bVar8) {
    singleton = (JoltPhysicsServer3D *)0x0;
  }
  pvVar5 = *(void **)(this + 0x388);
  if (pvVar5 != (void *)0x0) {
    if (*(int *)(this + 0x3ac) != 0) {
      if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x3a8) * 4) != 0) {
        memset(*(void **)(this + 0x3a0),0,
               (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x3a8) * 4) * 4);
      }
      *(undefined4 *)(this + 0x3ac) = 0;
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x398),false);
    Memory::free_static(*(void **)(this + 0x390),false);
    Memory::free_static(*(void **)(this + 0x3a0),false);
  }
  *(undefined ***)(this + 0x330) = &PTR__RID_Alloc_00117448;
  uVar3 = *(uint *)(this + 0x350);
  if (uVar3 != 0) {
    local_50 = 0;
    local_40 = 0x3b;
    local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
    String::parse_latin1((StrRange *)&local_50);
    vformat<unsigned_int,char_const*>
              ((String *)&local_48,(uint)(StrRange *)&local_50,(char *)(ulong)uVar3);
    print_error((String *)&local_48);
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
  uVar3 = *(uint *)(this + 0x34c);
  uVar4 = *(uint *)(this + 0x348);
  if (uVar4 <= uVar3) {
    lVar7 = 0;
    do {
      Memory::free_static(*(void **)(*(long *)(this + 0x338) + lVar7 * 8),false);
      lVar2 = lVar7 * 8;
      lVar7 = lVar7 + 1;
      Memory::free_static(*(void **)(*(long *)(this + 0x340) + lVar2),false);
    } while ((uint)lVar7 < uVar3 / uVar4);
  }
  if (*(void **)(this + 0x338) != (void *)0x0) {
    Memory::free_static(*(void **)(this + 0x338),false);
    Memory::free_static(*(void **)(this + 0x340),false);
  }
  *(undefined ***)(this + 0x2d8) = &PTR__RID_Alloc_00117428;
  uVar3 = *(uint *)(this + 0x2f8);
  if (uVar3 != 0) {
    local_50 = 0;
    local_40 = 0x3b;
    local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
    String::parse_latin1((StrRange *)&local_50);
    vformat<unsigned_int,char_const*>
              ((String *)&local_48,(uint)(StrRange *)&local_50,(char *)(ulong)uVar3);
    print_error((String *)&local_48);
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
  uVar3 = *(uint *)(this + 0x2f4);
  uVar4 = *(uint *)(this + 0x2f0);
  if (uVar4 <= uVar3) {
    lVar7 = 0;
    do {
      Memory::free_static(*(void **)(*(long *)(this + 0x2e0) + lVar7 * 8),false);
      lVar2 = lVar7 * 8;
      lVar7 = lVar7 + 1;
      Memory::free_static(*(void **)(*(long *)(this + 0x2e8) + lVar2),false);
    } while ((uint)lVar7 < uVar3 / uVar4);
  }
  if (*(void **)(this + 0x2e0) != (void *)0x0) {
    Memory::free_static(*(void **)(this + 0x2e0),false);
    Memory::free_static(*(void **)(this + 0x2e8),false);
  }
  *(undefined ***)(this + 0x280) = &PTR__RID_Alloc_00117408;
  uVar3 = *(uint *)(this + 0x2a0);
  if (uVar3 != 0) {
    local_50 = 0;
    local_40 = 0x3b;
    local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
    String::parse_latin1((StrRange *)&local_50);
    vformat<unsigned_int,char_const*>
              ((String *)&local_48,(uint)(StrRange *)&local_50,(char *)(ulong)uVar3);
    print_error((String *)&local_48);
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
  uVar3 = *(uint *)(this + 0x29c);
  uVar4 = *(uint *)(this + 0x298);
  if (uVar4 <= uVar3) {
    lVar7 = 0;
    do {
      Memory::free_static(*(void **)(*(long *)(this + 0x288) + lVar7 * 8),false);
      lVar2 = lVar7 * 8;
      lVar7 = lVar7 + 1;
      Memory::free_static(*(void **)(*(long *)(this + 0x290) + lVar2),false);
    } while ((uint)lVar7 < uVar3 / uVar4);
  }
  if (*(void **)(this + 0x288) != (void *)0x0) {
    Memory::free_static(*(void **)(this + 0x288),false);
    Memory::free_static(*(void **)(this + 0x290),false);
  }
  *(undefined ***)(this + 0x228) = &PTR__RID_Alloc_001173e8;
  uVar3 = *(uint *)(this + 0x248);
  if (uVar3 != 0) {
    local_50 = 0;
    local_40 = 0x3b;
    local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
    String::parse_latin1((StrRange *)&local_50);
    vformat<unsigned_int,char_const*>
              ((String *)&local_48,(uint)(StrRange *)&local_50,(char *)(ulong)uVar3);
    print_error((String *)&local_48);
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
  uVar3 = *(uint *)(this + 0x244);
  uVar4 = *(uint *)(this + 0x240);
  if (uVar4 <= uVar3) {
    lVar7 = 0;
    do {
      Memory::free_static(*(void **)(*(long *)(this + 0x230) + lVar7 * 8),false);
      lVar2 = lVar7 * 8;
      lVar7 = lVar7 + 1;
      Memory::free_static(*(void **)(*(long *)(this + 0x238) + lVar2),false);
    } while ((uint)lVar7 < uVar3 / uVar4);
  }
  if (*(void **)(this + 0x230) != (void *)0x0) {
    Memory::free_static(*(void **)(this + 0x230),false);
    Memory::free_static(*(void **)(this + 0x238),false);
  }
  *(undefined ***)(this + 0x1d0) = &PTR__RID_Alloc_001173c8;
  uVar3 = *(uint *)(this + 0x1f0);
  if (uVar3 != 0) {
    local_50 = 0;
    local_40 = 0x3b;
    local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
    String::parse_latin1((StrRange *)&local_50);
    vformat<unsigned_int,char_const*>
              ((String *)&local_48,(uint)(StrRange *)&local_50,(char *)(ulong)uVar3);
    print_error((String *)&local_48);
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
  uVar3 = *(uint *)(this + 0x1ec);
  uVar4 = *(uint *)(this + 0x1e8);
  if (uVar4 <= uVar3) {
    lVar7 = 0;
    do {
      Memory::free_static(*(void **)(*(long *)(this + 0x1d8) + lVar7 * 8),false);
      lVar2 = lVar7 * 8;
      lVar7 = lVar7 + 1;
      Memory::free_static(*(void **)(*(long *)(this + 0x1e0) + lVar2),false);
    } while ((uint)lVar7 < uVar3 / uVar4);
  }
  if (*(void **)(this + 0x1d8) != (void *)0x0) {
    Memory::free_static(*(void **)(this + 0x1d8),false);
    Memory::free_static(*(void **)(this + 0x1e0),false);
  }
  *(undefined ***)(this + 0x178) = &PTR__RID_Alloc_001173a8;
  uVar3 = *(uint *)(this + 0x198);
  if (uVar3 != 0) {
    local_50 = 0;
    local_40 = 0x3b;
    local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
    String::parse_latin1((StrRange *)&local_50);
    vformat<unsigned_int,char_const*>
              ((String *)&local_48,(uint)(StrRange *)&local_50,(char *)(ulong)uVar3);
    print_error((String *)&local_48);
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
  uVar3 = *(uint *)(this + 0x194);
  uVar4 = *(uint *)(this + 400);
  if (uVar4 <= uVar3) {
    lVar7 = 0;
    do {
      Memory::free_static(*(void **)(*(long *)(this + 0x180) + lVar7 * 8),false);
      lVar2 = lVar7 * 8;
      lVar7 = lVar7 + 1;
      Memory::free_static(*(void **)(*(long *)(this + 0x188) + lVar2),false);
    } while ((uint)lVar7 < uVar3 / uVar4);
  }
  if (*(void **)(this + 0x180) != (void *)0x0) {
    Memory::free_static(*(void **)(this + 0x180),false);
    Memory::free_static(*(void **)(this + 0x188),false);
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  PhysicsServer3D::~PhysicsServer3D((PhysicsServer3D *)this);
  return;
}



/* JoltPhysicsServer3D::~JoltPhysicsServer3D() */

void __thiscall JoltPhysicsServer3D::~JoltPhysicsServer3D(JoltPhysicsServer3D *this)

{
  ~JoltPhysicsServer3D(this);
  operator_delete(this,0x3c0);
  return;
}



/* JoltPhysicsServer3D::world_boundary_shape_create() */

void __thiscall JoltPhysicsServer3D::world_boundary_shape_create(JoltPhysicsServer3D *this)

{
  JoltShape3D *pJVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  JoltShape3D *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  pJVar1 = (JoltShape3D *)operator_new(0x80,"");
  *(undefined1 (*) [16])(pJVar1 + 0x10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(pJVar1 + 0x20) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(pJVar1 + 0x48) = (undefined1  [16])0x0;
  *(undefined8 *)(pJVar1 + 0x30) = 2;
  *(undefined8 *)(pJVar1 + 0x58) = 0;
  *(undefined4 *)(pJVar1 + 0x48) = 1;
  *(undefined8 *)(pJVar1 + 0x60) = 0;
  *(undefined8 *)(pJVar1 + 0x68) = 0;
  *(undefined1 (*) [16])(pJVar1 + 0x38) = (undefined1  [16])0x0;
  *(undefined **)pJVar1 = &JoltSphereShape3D::vtable;
  *(undefined8 *)(pJVar1 + 0x70) = 0;
  *(undefined4 *)(pJVar1 + 0x78) = 0;
  *(undefined4 *)(pJVar1 + 0x7c) = 0;
  local_28 = pJVar1;
  uVar2 = RID_Alloc<JoltShape3D*,true>::make_rid
                    ((RID_Alloc<JoltShape3D*,true> *)(this + 0x2d8),&local_28);
  *(undefined8 *)(pJVar1 + 0x60) = uVar2;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltPhysicsServer3D::separation_ray_shape_create() */

void __thiscall JoltPhysicsServer3D::separation_ray_shape_create(JoltPhysicsServer3D *this)

{
  JoltShape3D *pJVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  JoltShape3D *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  pJVar1 = (JoltShape3D *)operator_new(0x78,"");
  *(undefined1 (*) [16])(pJVar1 + 0x10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(pJVar1 + 0x20) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(pJVar1 + 0x48) = (undefined1  [16])0x0;
  *(undefined8 *)(pJVar1 + 0x30) = 2;
  *(undefined8 *)(pJVar1 + 0x58) = 0;
  *(undefined4 *)(pJVar1 + 0x48) = 1;
  *(undefined8 *)(pJVar1 + 0x60) = 0;
  *(undefined8 *)(pJVar1 + 0x68) = 0;
  *(undefined1 (*) [16])(pJVar1 + 0x38) = (undefined1  [16])0x0;
  *(undefined **)pJVar1 = &JoltBoxShape3D::vtable;
  *(undefined4 *)(pJVar1 + 0x70) = 0;
  pJVar1[0x74] = (JoltShape3D)0x0;
  local_28 = pJVar1;
  uVar2 = RID_Alloc<JoltShape3D*,true>::make_rid
                    ((RID_Alloc<JoltShape3D*,true> *)(this + 0x2d8),&local_28);
  *(undefined8 *)(pJVar1 + 0x60) = uVar2;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltPhysicsServer3D::sphere_shape_create() */

void __thiscall JoltPhysicsServer3D::sphere_shape_create(JoltPhysicsServer3D *this)

{
  JoltShape3D *pJVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  JoltShape3D *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  pJVar1 = (JoltShape3D *)operator_new(0x78,"");
  *(undefined1 (*) [16])(pJVar1 + 0x10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(pJVar1 + 0x20) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(pJVar1 + 0x48) = (undefined1  [16])0x0;
  *(undefined8 *)(pJVar1 + 0x30) = 2;
  *(undefined8 *)(pJVar1 + 0x58) = 0;
  *(undefined4 *)(pJVar1 + 0x48) = 1;
  *(undefined8 *)(pJVar1 + 0x60) = 0;
  *(undefined8 *)(pJVar1 + 0x68) = 0;
  *(undefined1 (*) [16])(pJVar1 + 0x38) = (undefined1  [16])0x0;
  *(undefined **)pJVar1 = &JoltCapsuleShape3D::vtable;
  *(undefined4 *)(pJVar1 + 0x70) = 0;
  local_28 = pJVar1;
  uVar2 = RID_Alloc<JoltShape3D*,true>::make_rid
                    ((RID_Alloc<JoltShape3D*,true> *)(this + 0x2d8),&local_28);
  *(undefined8 *)(pJVar1 + 0x60) = uVar2;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltPhysicsServer3D::box_shape_create() */

void __thiscall JoltPhysicsServer3D::box_shape_create(JoltPhysicsServer3D *this)

{
  JoltShape3D *pJVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  JoltShape3D *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  pJVar1 = (JoltShape3D *)operator_new(0x80,"");
  *(undefined1 (*) [16])(pJVar1 + 0x10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(pJVar1 + 0x20) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(pJVar1 + 0x48) = (undefined1  [16])0x0;
  *(undefined8 *)(pJVar1 + 0x30) = 2;
  *(undefined8 *)(pJVar1 + 0x58) = 0;
  *(undefined4 *)(pJVar1 + 0x48) = 1;
  *(undefined8 *)(pJVar1 + 0x60) = 0;
  *(undefined8 *)(pJVar1 + 0x68) = 0;
  *(undefined1 (*) [16])(pJVar1 + 0x38) = (undefined1  [16])0x0;
  *(undefined **)pJVar1 = &JoltCylinderShape3D::vtable;
  *(undefined8 *)(pJVar1 + 0x70) = 0;
  *(undefined4 *)(pJVar1 + 0x78) = 0;
  *(undefined4 *)(pJVar1 + 0x7c) = 0x3d23d70a;
  local_28 = pJVar1;
  uVar2 = RID_Alloc<JoltShape3D*,true>::make_rid
                    ((RID_Alloc<JoltShape3D*,true> *)(this + 0x2d8),&local_28);
  *(undefined8 *)(pJVar1 + 0x60) = uVar2;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltPhysicsServer3D::capsule_shape_create() */

void __thiscall JoltPhysicsServer3D::capsule_shape_create(JoltPhysicsServer3D *this)

{
  JoltShape3D *pJVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  JoltShape3D *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  pJVar1 = (JoltShape3D *)operator_new(0x78,"");
  *(undefined1 (*) [16])(pJVar1 + 0x10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(pJVar1 + 0x20) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(pJVar1 + 0x48) = (undefined1  [16])0x0;
  *(undefined8 *)(pJVar1 + 0x30) = 2;
  *(undefined8 *)(pJVar1 + 0x58) = 0;
  *(undefined4 *)(pJVar1 + 0x48) = 1;
  *(undefined8 *)(pJVar1 + 0x60) = 0;
  *(undefined8 *)(pJVar1 + 0x68) = 0;
  *(undefined1 (*) [16])(pJVar1 + 0x38) = (undefined1  [16])0x0;
  *(undefined **)pJVar1 = &JoltConvexPolygonShape3D::vtable;
  *(undefined8 *)(pJVar1 + 0x70) = 0;
  local_28 = pJVar1;
  uVar2 = RID_Alloc<JoltShape3D*,true>::make_rid
                    ((RID_Alloc<JoltShape3D*,true> *)(this + 0x2d8),&local_28);
  *(undefined8 *)(pJVar1 + 0x60) = uVar2;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltPhysicsServer3D::cylinder_shape_create() */

void __thiscall JoltPhysicsServer3D::cylinder_shape_create(JoltPhysicsServer3D *this)

{
  JoltShape3D *pJVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  JoltShape3D *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  pJVar1 = (JoltShape3D *)operator_new(0x80,"");
  *(undefined1 (*) [16])(pJVar1 + 0x10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(pJVar1 + 0x20) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(pJVar1 + 0x48) = (undefined1  [16])0x0;
  *(undefined8 *)(pJVar1 + 0x30) = 2;
  *(undefined8 *)(pJVar1 + 0x58) = 0;
  *(undefined4 *)(pJVar1 + 0x48) = 1;
  *(undefined8 *)(pJVar1 + 0x60) = 0;
  *(undefined8 *)(pJVar1 + 0x68) = 0;
  *(undefined1 (*) [16])(pJVar1 + 0x38) = (undefined1  [16])0x0;
  *(undefined **)pJVar1 = &JoltConcavePolygonShape3D::vtable;
  *(undefined8 *)(pJVar1 + 0x70) = 0;
  *(undefined4 *)(pJVar1 + 0x78) = 0x3d23d70a;
  local_28 = pJVar1;
  uVar2 = RID_Alloc<JoltShape3D*,true>::make_rid
                    ((RID_Alloc<JoltShape3D*,true> *)(this + 0x2d8),&local_28);
  *(undefined8 *)(pJVar1 + 0x60) = uVar2;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltPhysicsServer3D::convex_polygon_shape_create() */

void __thiscall JoltPhysicsServer3D::convex_polygon_shape_create(JoltPhysicsServer3D *this)

{
  JoltShape3D *pJVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  JoltShape3D *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  pJVar1 = (JoltShape3D *)operator_new(0xa0,"");
  *(undefined1 (*) [16])(pJVar1 + 0x10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(pJVar1 + 0x20) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(pJVar1 + 0x48) = (undefined1  [16])0x0;
  *(undefined8 *)(pJVar1 + 0x30) = 2;
  *(undefined8 *)(pJVar1 + 0x58) = 0;
  *(undefined4 *)(pJVar1 + 0x48) = 1;
  *(undefined8 *)(pJVar1 + 0x60) = 0;
  *(undefined8 *)(pJVar1 + 0x68) = 0;
  *(undefined1 (*) [16])(pJVar1 + 0x38) = (undefined1  [16])0x0;
  *(undefined **)pJVar1 = &JoltHeightMapShape3D::vtable;
  *(undefined8 *)(pJVar1 + 0x70) = 0;
  *(undefined4 *)(pJVar1 + 0x78) = 0;
  *(undefined8 *)(pJVar1 + 0x7c) = 0;
  *(undefined4 *)(pJVar1 + 0x84) = 0;
  *(undefined8 *)(pJVar1 + 0x90) = 0;
  *(undefined4 *)(pJVar1 + 0x98) = 0x3d23d70a;
  local_28 = pJVar1;
  uVar2 = RID_Alloc<JoltShape3D*,true>::make_rid
                    ((RID_Alloc<JoltShape3D*,true> *)(this + 0x2d8),&local_28);
  *(undefined8 *)(pJVar1 + 0x60) = uVar2;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltPhysicsServer3D::concave_polygon_shape_create() */

void __thiscall JoltPhysicsServer3D::concave_polygon_shape_create(JoltPhysicsServer3D *this)

{
  JoltShape3D *pJVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  JoltShape3D *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  pJVar1 = (JoltShape3D *)operator_new(0xa0,"");
  *(undefined1 (*) [16])(pJVar1 + 0x10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(pJVar1 + 0x20) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(pJVar1 + 0x48) = (undefined1  [16])0x0;
  *(undefined8 *)(pJVar1 + 0x30) = 2;
  *(undefined8 *)(pJVar1 + 0x58) = 0;
  *(undefined4 *)(pJVar1 + 0x48) = 1;
  *(undefined8 *)(pJVar1 + 0x60) = 0;
  *(undefined8 *)(pJVar1 + 0x68) = 0;
  *(undefined1 (*) [16])(pJVar1 + 0x38) = (undefined1  [16])0x0;
  *(code **)pJVar1 = JoltArea3D::JoltArea3D;
  *(undefined8 *)(pJVar1 + 0x70) = 0;
  *(undefined4 *)(pJVar1 + 0x78) = 0;
  *(undefined8 *)(pJVar1 + 0x7c) = 0;
  *(undefined4 *)(pJVar1 + 0x84) = 0;
  *(undefined8 *)(pJVar1 + 0x90) = 0;
  pJVar1[0x98] = (JoltShape3D)0x0;
  local_28 = pJVar1;
  uVar2 = RID_Alloc<JoltShape3D*,true>::make_rid
                    ((RID_Alloc<JoltShape3D*,true> *)(this + 0x2d8),&local_28);
  *(undefined8 *)(pJVar1 + 0x60) = uVar2;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltPhysicsServer3D::heightmap_shape_create() */

void __thiscall JoltPhysicsServer3D::heightmap_shape_create(JoltPhysicsServer3D *this)

{
  JoltShape3D *pJVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  JoltShape3D *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  pJVar1 = (JoltShape3D *)operator_new(0xa0,"");
  *(undefined1 (*) [16])(pJVar1 + 0x10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(pJVar1 + 0x20) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(pJVar1 + 0x48) = (undefined1  [16])0x0;
  *(undefined8 *)(pJVar1 + 0x30) = 2;
  *(undefined8 *)(pJVar1 + 0x58) = 0;
  *(undefined4 *)(pJVar1 + 0x48) = 1;
  *(undefined8 *)(pJVar1 + 0x60) = 0;
  *(undefined8 *)(pJVar1 + 0x68) = 0;
  *(undefined1 (*) [16])(pJVar1 + 0x38) = (undefined1  [16])0x0;
  *(code **)pJVar1 = JoltSpace3D::JoltSpace3D;
  *(undefined8 *)(pJVar1 + 0x70) = 0;
  *(undefined4 *)(pJVar1 + 0x78) = 0;
  *(undefined8 *)(pJVar1 + 0x7c) = 0;
  *(undefined4 *)(pJVar1 + 0x84) = 0;
  *(undefined8 *)(pJVar1 + 0x90) = 0;
  *(undefined8 *)(pJVar1 + 0x98) = 0;
  local_28 = pJVar1;
  uVar2 = RID_Alloc<JoltShape3D*,true>::make_rid
                    ((RID_Alloc<JoltShape3D*,true> *)(this + 0x2d8),&local_28);
  *(undefined8 *)(pJVar1 + 0x60) = uVar2;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltPhysicsServer3D::area_create() */

void __thiscall JoltPhysicsServer3D::area_create(JoltPhysicsServer3D *this)

{
  JoltArea3D *this_00;
  undefined8 uVar1;
  long in_FS_OFFSET;
  JoltArea3D *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this_00 = (JoltArea3D *)operator_new(0x180,"");
  JoltArea3D::JoltArea3D(this_00);
  local_28 = this_00;
  uVar1 = RID_Alloc<JoltArea3D*,true>::make_rid
                    ((RID_Alloc<JoltArea3D*,true> *)(this + 0x1d0),&local_28);
  *(undefined8 *)(this_00 + 0x18) = uVar1;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltPhysicsServer3D::space_create() */

undefined8 __thiscall JoltPhysicsServer3D::space_create(JoltPhysicsServer3D *this)

{
  int iVar1;
  JoltSpace3D *pJVar2;
  JoltSpace3D *this_00;
  undefined8 uVar3;
  JoltArea3D *this_01;
  ulong uVar4;
  undefined8 *puVar5;
  long in_FS_OFFSET;
  JoltSpace3D *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  this_00 = (JoltSpace3D *)operator_new(0x90,"");
  JoltSpace3D::JoltSpace3D(this_00,*(JobSystem **)(this + 0x3b0));
  local_38 = this_00;
  uVar3 = RID_Alloc<JoltSpace3D*,true>::make_rid
                    ((RID_Alloc<JoltSpace3D*,true> *)(this + 0x178),&local_38);
  *(undefined8 *)(this_00 + 0x40) = uVar3;
  this_01 = (JoltArea3D *)operator_new(0x180,"");
  JoltArea3D::JoltArea3D(this_01);
  local_38 = (JoltSpace3D *)this_01;
  uVar4 = RID_Alloc<JoltArea3D*,true>::make_rid
                    ((RID_Alloc<JoltArea3D*,true> *)(this + 0x1d0),(JoltArea3D **)&local_38);
  *(ulong *)(this_01 + 0x18) = uVar4;
  if ((uVar4 != 0) && ((uint)uVar4 < *(uint *)(this + 0x1ec))) {
    puVar5 = (undefined8 *)
             (((uVar4 & 0xffffffff) % (ulong)*(uint *)(this + 0x1e8)) * 0x10 +
             *(long *)(*(long *)(this + 0x1d8) +
                      ((uVar4 & 0xffffffff) / (ulong)*(uint *)(this + 0x1e8)) * 8));
    iVar1 = *(int *)(puVar5 + 1);
    if (iVar1 == (int)(uVar4 >> 0x20)) {
      pJVar2 = (JoltSpace3D *)*puVar5;
      if (pJVar2 != (JoltSpace3D *)0x0) {
        JoltSpace3D::set_default_area((JoltArea3D *)this_00);
        JoltObject3D::set_space(pJVar2);
        goto LAB_0010f0de;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  uVar3 = 0;
  _err_print_error("space_create","modules/jolt_physics/jolt_physics_server_3d.cpp",0xbe,
                   "Parameter \"default_area\" is null.",0,0);
LAB_0010f0de:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltPhysicsServer3D::body_create() */

void __thiscall JoltPhysicsServer3D::body_create(JoltPhysicsServer3D *this)

{
  JoltBody3D *this_00;
  undefined8 uVar1;
  long in_FS_OFFSET;
  JoltBody3D *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this_00 = (JoltBody3D *)operator_new(0x208,"");
  JoltBody3D::JoltBody3D(this_00);
  local_28 = this_00;
  uVar1 = RID_Alloc<JoltBody3D*,true>::make_rid
                    ((RID_Alloc<JoltBody3D*,true> *)(this + 0x228),&local_28);
  *(undefined8 *)(this_00 + 0x18) = uVar1;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltPhysicsServer3D::soft_body_create() */

void __thiscall JoltPhysicsServer3D::soft_body_create(JoltPhysicsServer3D *this)

{
  JoltSoftBody3D *this_00;
  undefined8 uVar1;
  long in_FS_OFFSET;
  JoltSoftBody3D *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this_00 = (JoltSoftBody3D *)operator_new(0xb8,"");
  JoltSoftBody3D::JoltSoftBody3D(this_00);
  local_28 = this_00;
  uVar1 = RID_Alloc<JoltSoftBody3D*,true>::make_rid
                    ((RID_Alloc<JoltSoftBody3D*,true> *)(this + 0x280),&local_28);
  *(undefined8 *)(this_00 + 0x18) = uVar1;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltPhysicsServer3D::joint_create() */

void __thiscall JoltPhysicsServer3D::joint_create(JoltPhysicsServer3D *this)

{
  uint uVar1;
  JoltJoint3D *pJVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined1 auVar4 [16];
  JoltJoint3D *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  pJVar2 = (JoltJoint3D *)operator_new(0x98,"");
  uVar1 = _LC50;
  *(code **)pJVar2 = JoltShape3D::set_solver_bias;
  *(undefined2 *)(pJVar2 + 8) = 1;
  *(undefined8 *)(pJVar2 + 0xc) = 0;
  *(undefined8 *)(pJVar2 + 0x28) = 0;
  *(undefined8 *)(pJVar2 + 0x30) = 0;
  *(undefined8 *)(pJVar2 + 0x5c) = 0;
  *(undefined4 *)(pJVar2 + 100) = 0;
  *(undefined8 *)(pJVar2 + 0x8c) = 0;
  *(undefined4 *)(pJVar2 + 0x94) = 0;
  *(undefined1 (*) [16])(pJVar2 + 0x18) = (undefined1  [16])0x0;
  auVar4 = ZEXT416(_LC50);
  *(undefined1 (*) [16])(pJVar2 + 0x38) = auVar4;
  *(undefined1 (*) [16])(pJVar2 + 0x48) = auVar4;
  *(uint *)(pJVar2 + 0x58) = uVar1;
  *(undefined1 (*) [16])(pJVar2 + 0x68) = auVar4;
  *(undefined1 (*) [16])(pJVar2 + 0x78) = auVar4;
  *(uint *)(pJVar2 + 0x88) = uVar1;
  local_28 = pJVar2;
  uVar3 = RID_Alloc<JoltJoint3D*,true>::make_rid
                    ((RID_Alloc<JoltJoint3D*,true> *)(this + 0x330),&local_28);
  *(undefined8 *)(pJVar2 + 0x30) = uVar3;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltPhysicsServer3D::free_body(JoltBody3D*) */

void __thiscall JoltPhysicsServer3D::free_body(JoltPhysicsServer3D *this,JoltBody3D *param_1)

{
  pthread_mutex_t *__mutex;
  ulong uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  
  if (param_1 == (JoltBody3D *)0x0) {
    _err_print_error("free_body","modules/jolt_physics/jolt_physics_server_3d.cpp",0x668,
                     "Parameter \"p_body\" is null.",0,0);
    return;
  }
  __mutex = (pthread_mutex_t *)(this + 600);
  JoltObject3D::set_space((JoltSpace3D *)param_1);
  uVar1 = *(ulong *)(param_1 + 0x18);
  iVar2 = pthread_mutex_lock(__mutex);
  if (iVar2 == 0) {
    if ((uint)uVar1 < *(uint *)(this + 0x244)) {
      lVar4 = ((uVar1 & 0xffffffff) % (ulong)*(uint *)(this + 0x240)) * 0x10 +
              *(long *)(*(long *)(this + 0x230) +
                       ((uVar1 & 0xffffffff) / (ulong)*(uint *)(this + 0x240)) * 8);
      iVar2 = *(int *)(lVar4 + 8);
      if (iVar2 < 0) {
        pthread_mutex_unlock(__mutex);
        _err_print_error(&_LC218,"./core/templates/rid_owner.h",0x16c,"Method/function failed.",
                         "Attempted to free an uninitialized or invalid RID",0,0);
      }
      else if ((int)(uVar1 >> 0x20) == iVar2) {
        *(undefined4 *)(lVar4 + 8) = 0xffffffff;
        uVar3 = *(int *)(this + 0x248) - 1;
        *(uint *)(this + 0x248) = uVar3;
        *(uint *)(*(long *)(*(long *)(this + 0x238) +
                           ((ulong)uVar3 / (ulong)*(uint *)(this + 0x240)) * 8) +
                 ((ulong)uVar3 % (ulong)*(uint *)(this + 0x240)) * 4) = (uint)uVar1;
        pthread_mutex_unlock(__mutex);
      }
      else {
        pthread_mutex_unlock(__mutex);
        _err_print_error(&_LC218,"./core/templates/rid_owner.h",0x171,"Method/function failed.",0,0)
        ;
      }
    }
    else {
      pthread_mutex_unlock(__mutex);
      _err_print_error(&_LC218,"./core/templates/rid_owner.h",0x161,"Method/function failed.",0,0);
    }
    JoltBody3D::~JoltBody3D(param_1);
    Memory::free_static(param_1,false);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_system_error(iVar2);
}



/* JoltPhysicsServer3D::free_soft_body(JoltSoftBody3D*) */

void __thiscall
JoltPhysicsServer3D::free_soft_body(JoltPhysicsServer3D *this,JoltSoftBody3D *param_1)

{
  pthread_mutex_t *__mutex;
  ulong uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  
  if (param_1 == (JoltSoftBody3D *)0x0) {
    _err_print_error("free_soft_body","modules/jolt_physics/jolt_physics_server_3d.cpp",0x670,
                     "Parameter \"p_body\" is null.",0,0);
    return;
  }
  __mutex = (pthread_mutex_t *)(this + 0x2b0);
  JoltObject3D::set_space((JoltSpace3D *)param_1);
  uVar1 = *(ulong *)(param_1 + 0x18);
  iVar2 = pthread_mutex_lock(__mutex);
  if (iVar2 == 0) {
    if ((uint)uVar1 < *(uint *)(this + 0x29c)) {
      lVar4 = ((uVar1 & 0xffffffff) % (ulong)*(uint *)(this + 0x298)) * 0x10 +
              *(long *)(*(long *)(this + 0x288) +
                       ((uVar1 & 0xffffffff) / (ulong)*(uint *)(this + 0x298)) * 8);
      iVar2 = *(int *)(lVar4 + 8);
      if (iVar2 < 0) {
        pthread_mutex_unlock(__mutex);
        _err_print_error(&_LC218,"./core/templates/rid_owner.h",0x16c,"Method/function failed.",
                         "Attempted to free an uninitialized or invalid RID",0,0);
      }
      else if ((int)(uVar1 >> 0x20) == iVar2) {
        *(undefined4 *)(lVar4 + 8) = 0xffffffff;
        uVar3 = *(int *)(this + 0x2a0) - 1;
        *(uint *)(this + 0x2a0) = uVar3;
        *(uint *)(*(long *)(*(long *)(this + 0x290) +
                           ((ulong)uVar3 / (ulong)*(uint *)(this + 0x298)) * 8) +
                 ((ulong)uVar3 % (ulong)*(uint *)(this + 0x298)) * 4) = (uint)uVar1;
        pthread_mutex_unlock(__mutex);
      }
      else {
        pthread_mutex_unlock(__mutex);
        _err_print_error(&_LC218,"./core/templates/rid_owner.h",0x171,"Method/function failed.",0,0)
        ;
      }
    }
    else {
      pthread_mutex_unlock(__mutex);
      _err_print_error(&_LC218,"./core/templates/rid_owner.h",0x161,"Method/function failed.",0,0);
    }
    JoltSoftBody3D::~JoltSoftBody3D(param_1);
    Memory::free_static(param_1,false);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_system_error(iVar2);
}



/* JoltPhysicsServer3D::free(RID) */

undefined8 __thiscall JoltPhysicsServer3D::free(JoltPhysicsServer3D *this,ulong param_2)

{
  int iVar1;
  JoltShape3D *pJVar2;
  JoltBody3D *pJVar3;
  JoltJoint3D *pJVar4;
  JoltArea3D *pJVar5;
  JoltSoftBody3D *pJVar6;
  JoltSpace3D *pJVar7;
  undefined8 uVar8;
  int iVar9;
  undefined8 *puVar10;
  uint uVar11;
  ulong uVar12;
  
  if (param_2 != 0) {
    uVar11 = (uint)param_2;
    uVar12 = param_2 & 0xffffffff;
    iVar9 = (int)(param_2 >> 0x20);
    if (uVar11 < *(uint *)(this + 0x2f4)) {
      puVar10 = (undefined8 *)
                (((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x2f0)) * 0x10 +
                *(long *)(*(long *)(this + 0x2e0) +
                         ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x2f0)) * 8));
      iVar1 = *(int *)(puVar10 + 1);
      if (iVar1 == iVar9) {
        pJVar2 = (JoltShape3D *)*puVar10;
        if (pJVar2 != (JoltShape3D *)0x0) {
          uVar8 = free_shape(this,pJVar2);
          return uVar8;
        }
      }
      else if (iVar1 + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
    if (uVar11 < *(uint *)(this + 0x244)) {
      puVar10 = (undefined8 *)
                ((uVar12 % (ulong)*(uint *)(this + 0x240)) * 0x10 +
                *(long *)(*(long *)(this + 0x230) + (uVar12 / *(uint *)(this + 0x240)) * 8));
      iVar1 = *(int *)(puVar10 + 1);
      if (iVar1 == iVar9) {
        pJVar3 = (JoltBody3D *)*puVar10;
        if (pJVar3 != (JoltBody3D *)0x0) {
          uVar8 = free_body(this,pJVar3);
          return uVar8;
        }
      }
      else if (iVar1 + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
    if (uVar11 < *(uint *)(this + 0x34c)) {
      puVar10 = (undefined8 *)
                ((uVar12 % (ulong)*(uint *)(this + 0x348)) * 0x10 +
                *(long *)(*(long *)(this + 0x338) + (uVar12 / *(uint *)(this + 0x348)) * 8));
      iVar1 = *(int *)(puVar10 + 1);
      if (iVar1 == iVar9) {
        pJVar4 = (JoltJoint3D *)*puVar10;
        if (pJVar4 != (JoltJoint3D *)0x0) {
          uVar8 = free_joint(this,pJVar4);
          return uVar8;
        }
      }
      else if (iVar1 + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
    if (uVar11 < *(uint *)(this + 0x1ec)) {
      puVar10 = (undefined8 *)
                ((uVar12 % (ulong)*(uint *)(this + 0x1e8)) * 0x10 +
                *(long *)(*(long *)(this + 0x1d8) + (uVar12 / *(uint *)(this + 0x1e8)) * 8));
      iVar1 = *(int *)(puVar10 + 1);
      if (iVar1 == iVar9) {
        pJVar5 = (JoltArea3D *)*puVar10;
        if (pJVar5 != (JoltArea3D *)0x0) {
          uVar8 = free_area(this,pJVar5);
          return uVar8;
        }
      }
      else if (iVar1 + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
    if (uVar11 < *(uint *)(this + 0x29c)) {
      puVar10 = (undefined8 *)
                ((uVar12 % (ulong)*(uint *)(this + 0x298)) * 0x10 +
                *(long *)(*(long *)(this + 0x288) + (uVar12 / *(uint *)(this + 0x298)) * 8));
      iVar1 = *(int *)(puVar10 + 1);
      if (iVar1 == iVar9) {
        pJVar6 = (JoltSoftBody3D *)*puVar10;
        if (pJVar6 != (JoltSoftBody3D *)0x0) {
          uVar8 = free_soft_body(this,pJVar6);
          return uVar8;
        }
      }
      else if (iVar1 + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
    if (uVar11 < *(uint *)(this + 0x194)) {
      puVar10 = (undefined8 *)
                ((uVar12 % (ulong)*(uint *)(this + 400)) * 0x10 +
                *(long *)(*(long *)(this + 0x180) + (uVar12 / *(uint *)(this + 400)) * 8));
      iVar1 = *(int *)(puVar10 + 1);
      if (iVar1 == iVar9) {
        pJVar7 = (JoltSpace3D *)*puVar10;
        if (pJVar7 != (JoltSpace3D *)0x0) {
          uVar8 = free_space(this,pJVar7);
          return uVar8;
        }
      }
      else if (iVar1 + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0,*(long *)(this + 0x180));
      }
    }
  }
  uVar8 = 0;
  _err_print_error(&_LC218,"modules/jolt_physics/jolt_physics_server_3d.cpp",0x613,
                   "Method/function failed.","Failed to free RID: The specified RID has no owner.",0
                  );
  return uVar8;
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



/* JoltPhysicsServer3D::is_class_ptr(void*) const */

uint __thiscall JoltPhysicsServer3D::is_class_ptr(JoltPhysicsServer3D *this,void *param_1)

{
  return (uint)CONCAT71(0x117c,(undefined4 *)param_1 ==
                               &PhysicsServer3D::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x117c,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x117c,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* JoltPhysicsServer3D::_getv(StringName const&, Variant&) const */

undefined8 JoltPhysicsServer3D::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* JoltPhysicsServer3D::_setv(StringName const&, Variant const&) */

undefined8 JoltPhysicsServer3D::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* JoltPhysicsServer3D::_validate_propertyv(PropertyInfo&) const */

void JoltPhysicsServer3D::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* JoltPhysicsServer3D::_property_can_revertv(StringName const&) const */

undefined8 JoltPhysicsServer3D::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* JoltPhysicsServer3D::_property_get_revertv(StringName const&, Variant&) const */

undefined8 JoltPhysicsServer3D::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* JoltPhysicsServer3D::_notificationv(int, bool) */

void JoltPhysicsServer3D::_notificationv(int param_1,bool param_2)

{
  return;
}



/* JPH::PhysicsMaterial::~PhysicsMaterial() */

void __thiscall JPH::PhysicsMaterial::~PhysicsMaterial(PhysicsMaterial *this)

{
                    /* WARNING: Could not recover jumptable at 0x0010fba4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)();
  return;
}



/* HashMap<void const*, unsigned long, HashMapHasherDefault, HashMapComparatorDefault<void const*>,
   DefaultTypedAllocator<HashMapElement<void const*, unsigned long> > >::~HashMap() */

void __thiscall
HashMap<void_const*,unsigned_long,HashMapHasherDefault,HashMapComparatorDefault<void_const*>,DefaultTypedAllocator<HashMapElement<void_const*,unsigned_long>>>
::~HashMap(HashMap<void_const*,unsigned_long,HashMapHasherDefault,HashMapComparatorDefault<void_const*>,DefaultTypedAllocator<HashMapElement<void_const*,unsigned_long>>>
           *this)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  
  pvVar3 = *(void **)(this + 8);
  if (pvVar3 == (void *)0x0) {
    return;
  }
  if (*(int *)(this + 0x2c) != 0) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    if (uVar1 == 0) {
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
    }
    else {
      lVar2 = 0;
      do {
        if (*(int *)(*(long *)(this + 0x10) + lVar2) != 0) {
          *(int *)(*(long *)(this + 0x10) + lVar2) = 0;
          Memory::free_static(*(void **)((long)pvVar3 + lVar2 * 2),false);
          pvVar3 = *(void **)(this + 8);
          *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
        }
        lVar2 = lVar2 + 4;
      } while (lVar2 != (ulong)uVar1 << 2);
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
      if (pvVar3 == (void *)0x0) {
        return;
      }
    }
  }
  Memory::free_static(pvVar3,false);
  Memory::free_static(*(void **)(this + 0x10),false);
  return;
}



/* JoltPhysicsServer3D::_get_class_namev() const */

undefined8 * JoltPhysicsServer3D::_get_class_namev(void)

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
LAB_00111c63:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00111c63;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"JoltPhysicsServer3D");
      goto LAB_00111cce;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"JoltPhysicsServer3D");
LAB_00111cce:
  return &_get_class_namev()::_class_name_static;
}



/* JoltPhysicsServer3D::area_attach_object_instance_id(RID, ObjectID) [clone .cold] */

void JoltPhysicsServer3D::area_attach_object_instance_id(void)

{
  code *pcVar1;
  int in_EAX;
  undefined8 in_RCX;
  
  if (in_EAX + 0x80000000U < 0x7fffffff) {
    _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                     "Method/function failed. Returning: nullptr",
                     "Attempting to use an uninitialized RID",0,0,in_RCX);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* JoltPhysicsServer3D::area_get_object_instance_id(RID) const [clone .cold] */

void JoltPhysicsServer3D::area_get_object_instance_id(void)

{
  code *pcVar1;
  int in_EAX;
  undefined8 in_RCX;
  
  if (in_EAX + 0x80000000U < 0x7fffffff) {
    _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                     "Method/function failed. Returning: nullptr",
                     "Attempting to use an uninitialized RID",0,0,in_RCX);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* JoltPhysicsServer3D::area_set_param(RID, PhysicsServer3D::AreaParameter, Variant const&) [clone
   .cold] */

void JoltPhysicsServer3D::area_set_param(void)

{
  code *pcVar1;
  int in_EAX;
  undefined8 in_RCX;
  
  if (in_EAX + 0x80000000U < 0x7fffffff) {
    _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                     "Method/function failed. Returning: nullptr",
                     "Attempting to use an uninitialized RID",0,0,in_RCX);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* JoltPhysicsServer3D::area_get_param(RID, PhysicsServer3D::AreaParameter) const [clone .cold] */

void JoltPhysicsServer3D::area_get_param(void)

{
  code *pcVar1;
  int in_EAX;
  undefined8 in_RCX;
  
  if (in_EAX + 0x80000000U < 0x7fffffff) {
    _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                     "Method/function failed. Returning: nullptr",
                     "Attempting to use an uninitialized RID",0,0,in_RCX);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* JoltPhysicsServer3D::get_class() const */

void JoltPhysicsServer3D::get_class(void)

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



/* JoltPhysicsServer3D::_initialize_classv() */

void JoltPhysicsServer3D::_initialize_classv(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_60;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized != '\0') goto LAB_00112064;
  if (PhysicsServer3D::initialize_class()::initialized == '\0') {
    Object::initialize_class();
    local_58 = 0;
    local_40 = 6;
    local_48 = "Object";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "PhysicsServer3D";
    local_60 = 0;
    local_40 = 0xf;
    String::parse_latin1((StrRange *)&local_60);
    StringName::StringName((StringName *)&local_48,(String *)&local_60,false);
    ClassDB::_add_class2((StringName *)&local_48,(StringName *)&local_50);
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
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
    if ((StringName::configured != '\0') && (local_50 != 0)) {
      StringName::unref();
    }
    lVar2 = local_58;
    if (local_58 == 0) {
LAB_0011216e:
      if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) {
LAB_0011217e:
        PhysicsServer3D::_bind_methods();
      }
    }
    else {
      LOCK();
      plVar1 = (long *)(local_58 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) goto LAB_0011216e;
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) goto LAB_0011217e;
    }
    PhysicsServer3D::initialize_class()::initialized = '\x01';
  }
  local_48 = "PhysicsServer3D";
  local_58 = 0;
  local_40 = 0xf;
  String::parse_latin1((StrRange *)&local_58);
  StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
  local_48 = "JoltPhysicsServer3D";
  local_60 = 0;
  local_40 = 0x13;
  String::parse_latin1((StrRange *)&local_60);
  StringName::StringName((StringName *)&local_48,(String *)&local_60,false);
  ClassDB::_add_class2((StringName *)&local_48,(StringName *)&local_50);
  if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
    StringName::unref();
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
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  lVar2 = local_58;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  initialize_class()::initialized = '\x01';
LAB_00112064:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* JoltPhysicsServer3D::is_class(String const&) const */

undefined8 __thiscall JoltPhysicsServer3D::is_class(JoltPhysicsServer3D *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_0011225f;
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
LAB_0011225f:
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
    if (cVar6 != '\0') goto LAB_00112313;
  }
  cVar6 = String::operator==(param_1,"JoltPhysicsServer3D");
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
              if (lVar5 == 0) goto LAB_001123eb;
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
LAB_001123eb:
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
      if (cVar6 != '\0') goto LAB_00112313;
    }
    cVar6 = String::operator==(param_1,"PhysicsServer3D");
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
                if (lVar5 == 0) goto LAB_001124cb;
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
LAB_001124cb:
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
        if (cVar6 != '\0') goto LAB_00112313;
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = String::operator==(param_1,"Object");
        return uVar7;
      }
      goto LAB_00112574;
    }
  }
LAB_00112313:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00112574:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PhysicsServer3D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void PhysicsServer3D::_get_property_listv(List *param_1,bool param_2)

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
  local_78 = "PhysicsServer3D";
  local_70 = 0xf;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "PhysicsServer3D";
  local_98 = 0;
  local_70 = 0xf;
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
LAB_001126e8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001126e8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x00112706;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x00112706:
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
  StringName::StringName((StringName *)&local_78,"PhysicsServer3D",false);
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



/* JoltPhysicsServer3D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
JoltPhysicsServer3D::_get_property_listv(JoltPhysicsServer3D *this,List *param_1,bool param_2)

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
    PhysicsServer3D::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "JoltPhysicsServer3D";
  local_70 = 0x13;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "JoltPhysicsServer3D";
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
LAB_00112ae8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00112ae8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00112b05;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00112b05:
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
  StringName::StringName((StringName *)&local_78,"JoltPhysicsServer3D",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      PhysicsServer3D::_get_property_listv((List *)this,SUB81(param_1,0));
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashSet<JoltSpace3D*, HashMapHasherDefault, HashMapComparatorDefault<JoltSpace3D*>
   >::insert(JoltSpace3D* const&) */

undefined1  [16]
HashSet<JoltSpace3D*,HashMapHasherDefault,HashMapComparatorDefault<JoltSpace3D*>>::insert
          (JoltSpace3D **param_1)

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
  JoltSpace3D *local_88;
  ulong local_70;
  
  uVar32 = *(uint *)(in_RSI + 4);
  uVar31 = *(uint *)(hash_table_size_primes + (ulong)uVar32 * 4);
  local_88 = (JoltSpace3D *)*in_RSI;
  if (local_88 == (JoltSpace3D *)0x0) {
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
    uVar32 = *(uint *)(in_RSI + 4);
    lVar34 = *in_RDX;
    local_88 = (JoltSpace3D *)*in_RSI;
    if (local_88 != (JoltSpace3D *)0x0) goto LAB_00112ebf;
  }
  else {
    uVar44 = *(uint *)((long)in_RSI + 0x24);
    lVar34 = *in_RDX;
LAB_00112ebf:
    if (uVar44 != 0) {
      uVar43 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)uVar32 * 4));
      lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)uVar32 * 8);
      uVar33 = lVar34 * 0x3ffff - 1;
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
            if (*(long *)(local_88 + uStack_98 * 8) == lVar34) goto LAB_00113361;
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
  if ((float)uVar31 * __LC263 < (float)(uVar44 + 1)) {
    if (uVar32 == 0x1c) {
      uStack_98 = 0;
      _err_print_error("_insert","./core/templates/hash_set.h",0xbf,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1"
                       ,"Hash table maximum capacity reached, aborting insertion.",0);
      uVar44 = *(uint *)((long)in_RSI + 0x24);
      uVar37 = 0xffffffff;
      local_88 = (JoltSpace3D *)*in_RSI;
      goto LAB_00113361;
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
    local_88 = (JoltSpace3D *)*in_RSI;
    lVar34 = *in_RDX;
  }
  uVar42 = (ulong)uVar44;
  lVar3 = in_RSI[3];
  *(long *)(local_88 + uVar42 * 8) = lVar34;
  uVar33 = lVar34 * 0x3ffff - 1;
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
  lVar36 = *(long *)(hash_table_size_primes_inv + (ulong)uVar32 * 8);
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar43 * lVar36;
  auVar27._8_8_ = 0;
  auVar27._0_8_ = uVar40;
  lVar34 = SUB168(auVar15 * auVar27,8) * 4;
  iVar35 = SUB164(auVar15 * auVar27,8);
  lVar2 = in_RSI[2];
  puVar1 = (uint *)(lVar3 + lVar34);
  uVar33 = in_RSI[1];
  uVar32 = *puVar1;
  uStack_98 = uVar33;
  uVar38 = uVar42;
  while (uVar32 != 0) {
    auVar16._8_8_ = 0;
    auVar16._0_8_ = (ulong)uVar32 * lVar36;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar40;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = (ulong)((uVar31 + iVar35) - SUB164(auVar16 * auVar28,8)) * lVar36;
    auVar29._8_8_ = 0;
    auVar29._0_8_ = uVar40;
    uVar32 = SUB164(auVar17 * auVar29,8);
    if (uVar32 < uVar37) {
      *(int *)(lVar2 + uVar42 * 4) = iVar35;
      uVar44 = *puVar1;
      *puVar1 = (uint)uVar43;
      uVar39 = *(uint *)(lVar34 + uVar33);
      uVar43 = (ulong)uVar44;
      *(uint *)(lVar34 + uVar33) = (uint)uVar38;
      uVar42 = (ulong)uVar39;
      uVar38 = uVar42;
      uVar37 = uVar32;
    }
    uVar44 = (uint)uVar38;
    uVar39 = (uint)uVar43;
    uVar37 = uVar37 + 1;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = (ulong)(iVar35 + 1) * lVar36;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar40;
    uStack_98 = SUB168(auVar18 * auVar30,8);
    lVar34 = uStack_98 * 4;
    iVar35 = SUB164(auVar18 * auVar30,8);
    puVar1 = (uint *)(lVar3 + lVar34);
    uVar32 = *puVar1;
  }
  *puVar1 = uVar39;
  *(int *)(lVar2 + uVar42 * 4) = iVar35;
  *(uint *)(uVar33 + lVar34) = uVar44;
  uVar37 = *(uint *)((long)in_RSI + 0x24);
  uVar44 = uVar37 + 1;
  *(uint *)((long)in_RSI + 0x24) = uVar44;
LAB_00113361:
  *(uint *)((long)param_1 + 0xc) = uVar37;
  *param_1 = local_88;
  *(uint *)(param_1 + 1) = uVar44;
  auVar45._8_8_ = uStack_98;
  auVar45._0_8_ = param_1;
  return auVar45;
}



/* WARNING: Removing unreachable block (ram,0x00113650) */
/* WARNING: Removing unreachable block (ram,0x00113780) */
/* WARNING: Removing unreachable block (ram,0x001138f9) */
/* WARNING: Removing unreachable block (ram,0x0011378c) */
/* WARNING: Removing unreachable block (ram,0x00113796) */
/* WARNING: Removing unreachable block (ram,0x001138db) */
/* WARNING: Removing unreachable block (ram,0x001137a2) */
/* WARNING: Removing unreachable block (ram,0x001137ac) */
/* WARNING: Removing unreachable block (ram,0x001138bd) */
/* WARNING: Removing unreachable block (ram,0x001137b8) */
/* WARNING: Removing unreachable block (ram,0x001137c2) */
/* WARNING: Removing unreachable block (ram,0x0011389f) */
/* WARNING: Removing unreachable block (ram,0x001137ce) */
/* WARNING: Removing unreachable block (ram,0x001137d8) */
/* WARNING: Removing unreachable block (ram,0x00113881) */
/* WARNING: Removing unreachable block (ram,0x001137e4) */
/* WARNING: Removing unreachable block (ram,0x001137ee) */
/* WARNING: Removing unreachable block (ram,0x00113863) */
/* WARNING: Removing unreachable block (ram,0x001137f6) */
/* WARNING: Removing unreachable block (ram,0x00113800) */
/* WARNING: Removing unreachable block (ram,0x00113848) */
/* WARNING: Removing unreachable block (ram,0x00113808) */
/* WARNING: Removing unreachable block (ram,0x0011381e) */
/* WARNING: Removing unreachable block (ram,0x0011382a) */
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



/* RID_Alloc<JoltSpace3D*, true>::~RID_Alloc() */

void __thiscall RID_Alloc<JoltSpace3D*,true>::~RID_Alloc(RID_Alloc<JoltSpace3D*,true> *this)

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
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR__RID_Alloc_001173a8;
  uVar3 = *(uint *)(this + 0x20);
  if (uVar3 != 0) {
    local_50 = 0;
    local_40 = 0x3b;
    local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
    String::parse_latin1((StrRange *)&local_50);
    vformat<unsigned_int,char_const*>
              ((String *)&local_48,(uint)(StrRange *)&local_50,(char *)(ulong)uVar3);
    print_error((String *)&local_48);
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



/* RID_Alloc<JoltArea3D*, true>::~RID_Alloc() */

void __thiscall RID_Alloc<JoltArea3D*,true>::~RID_Alloc(RID_Alloc<JoltArea3D*,true> *this)

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
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR__RID_Alloc_001173c8;
  uVar3 = *(uint *)(this + 0x20);
  if (uVar3 != 0) {
    local_50 = 0;
    local_40 = 0x3b;
    local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
    String::parse_latin1((StrRange *)&local_50);
    vformat<unsigned_int,char_const*>
              ((String *)&local_48,(uint)(StrRange *)&local_50,(char *)(ulong)uVar3);
    print_error((String *)&local_48);
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



/* RID_Alloc<JoltBody3D*, true>::~RID_Alloc() */

void __thiscall RID_Alloc<JoltBody3D*,true>::~RID_Alloc(RID_Alloc<JoltBody3D*,true> *this)

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
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR__RID_Alloc_001173e8;
  uVar3 = *(uint *)(this + 0x20);
  if (uVar3 != 0) {
    local_50 = 0;
    local_40 = 0x3b;
    local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
    String::parse_latin1((StrRange *)&local_50);
    vformat<unsigned_int,char_const*>
              ((String *)&local_48,(uint)(StrRange *)&local_50,(char *)(ulong)uVar3);
    print_error((String *)&local_48);
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



/* RID_Alloc<JoltSoftBody3D*, true>::~RID_Alloc() */

void __thiscall RID_Alloc<JoltSoftBody3D*,true>::~RID_Alloc(RID_Alloc<JoltSoftBody3D*,true> *this)

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
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR__RID_Alloc_00117408;
  uVar3 = *(uint *)(this + 0x20);
  if (uVar3 != 0) {
    local_50 = 0;
    local_40 = 0x3b;
    local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
    String::parse_latin1((StrRange *)&local_50);
    vformat<unsigned_int,char_const*>
              ((String *)&local_48,(uint)(StrRange *)&local_50,(char *)(ulong)uVar3);
    print_error((String *)&local_48);
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



/* RID_Alloc<JoltShape3D*, true>::~RID_Alloc() */

void __thiscall RID_Alloc<JoltShape3D*,true>::~RID_Alloc(RID_Alloc<JoltShape3D*,true> *this)

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
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR__RID_Alloc_00117428;
  uVar3 = *(uint *)(this + 0x20);
  if (uVar3 != 0) {
    local_50 = 0;
    local_40 = 0x3b;
    local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
    String::parse_latin1((StrRange *)&local_50);
    vformat<unsigned_int,char_const*>
              ((String *)&local_48,(uint)(StrRange *)&local_50,(char *)(ulong)uVar3);
    print_error((String *)&local_48);
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



/* RID_Alloc<JoltJoint3D*, true>::~RID_Alloc() */

void __thiscall RID_Alloc<JoltJoint3D*,true>::~RID_Alloc(RID_Alloc<JoltJoint3D*,true> *this)

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
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR__RID_Alloc_00117448;
  uVar3 = *(uint *)(this + 0x20);
  if (uVar3 != 0) {
    local_50 = 0;
    local_40 = 0x3b;
    local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
    String::parse_latin1((StrRange *)&local_50);
    vformat<unsigned_int,char_const*>
              ((String *)&local_48,(uint)(StrRange *)&local_50,(char *)(ulong)uVar3);
    print_error((String *)&local_48);
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



/* RID_Alloc<JoltSpace3D*, true>::~RID_Alloc() */

void __thiscall RID_Alloc<JoltSpace3D*,true>::~RID_Alloc(RID_Alloc<JoltSpace3D*,true> *this)

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
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR__RID_Alloc_001173a8;
  uVar3 = *(uint *)(this + 0x20);
  if (uVar3 != 0) {
    local_50 = 0;
    local_40 = 0x3b;
    local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
    String::parse_latin1((StrRange *)&local_50);
    vformat<unsigned_int,char_const*>
              ((String *)&local_48,(uint)(StrRange *)&local_50,(char *)(ulong)uVar3);
    print_error((String *)&local_48);
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



/* RID_Alloc<JoltBody3D*, true>::~RID_Alloc() */

void __thiscall RID_Alloc<JoltBody3D*,true>::~RID_Alloc(RID_Alloc<JoltBody3D*,true> *this)

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
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR__RID_Alloc_001173e8;
  uVar3 = *(uint *)(this + 0x20);
  if (uVar3 != 0) {
    local_50 = 0;
    local_40 = 0x3b;
    local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
    String::parse_latin1((StrRange *)&local_50);
    vformat<unsigned_int,char_const*>
              ((String *)&local_48,(uint)(StrRange *)&local_50,(char *)(ulong)uVar3);
    print_error((String *)&local_48);
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



/* RID_Alloc<JoltArea3D*, true>::~RID_Alloc() */

void __thiscall RID_Alloc<JoltArea3D*,true>::~RID_Alloc(RID_Alloc<JoltArea3D*,true> *this)

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
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR__RID_Alloc_001173c8;
  uVar3 = *(uint *)(this + 0x20);
  if (uVar3 != 0) {
    local_50 = 0;
    local_40 = 0x3b;
    local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
    String::parse_latin1((StrRange *)&local_50);
    vformat<unsigned_int,char_const*>
              ((String *)&local_48,(uint)(StrRange *)&local_50,(char *)(ulong)uVar3);
    print_error((String *)&local_48);
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



/* RID_Alloc<JoltShape3D*, true>::~RID_Alloc() */

void __thiscall RID_Alloc<JoltShape3D*,true>::~RID_Alloc(RID_Alloc<JoltShape3D*,true> *this)

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
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR__RID_Alloc_00117428;
  uVar3 = *(uint *)(this + 0x20);
  if (uVar3 != 0) {
    local_50 = 0;
    local_40 = 0x3b;
    local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
    String::parse_latin1((StrRange *)&local_50);
    vformat<unsigned_int,char_const*>
              ((String *)&local_48,(uint)(StrRange *)&local_50,(char *)(ulong)uVar3);
    print_error((String *)&local_48);
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



/* RID_Alloc<JoltSoftBody3D*, true>::~RID_Alloc() */

void __thiscall RID_Alloc<JoltSoftBody3D*,true>::~RID_Alloc(RID_Alloc<JoltSoftBody3D*,true> *this)

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
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR__RID_Alloc_00117408;
  uVar3 = *(uint *)(this + 0x20);
  if (uVar3 != 0) {
    local_50 = 0;
    local_40 = 0x3b;
    local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
    String::parse_latin1((StrRange *)&local_50);
    vformat<unsigned_int,char_const*>
              ((String *)&local_48,(uint)(StrRange *)&local_50,(char *)(ulong)uVar3);
    print_error((String *)&local_48);
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



/* RID_Alloc<JoltJoint3D*, true>::~RID_Alloc() */

void __thiscall RID_Alloc<JoltJoint3D*,true>::~RID_Alloc(RID_Alloc<JoltJoint3D*,true> *this)

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
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR__RID_Alloc_00117448;
  uVar3 = *(uint *)(this + 0x20);
  if (uVar3 != 0) {
    local_50 = 0;
    local_40 = 0x3b;
    local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
    String::parse_latin1((StrRange *)&local_50);
    vformat<unsigned_int,char_const*>
              ((String *)&local_48,(uint)(StrRange *)&local_50,(char *)(ulong)uVar3);
    print_error((String *)&local_48);
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



/* JPH::PhysicsMaterial::~PhysicsMaterial() */

void __thiscall JPH::PhysicsMaterial::~PhysicsMaterial(PhysicsMaterial *this)

{
  return;
}



/* JPH::SoftBodySharedSettings::~SoftBodySharedSettings() */

void __thiscall JPH::SoftBodySharedSettings::~SoftBodySharedSettings(SoftBodySharedSettings *this)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  if (*(long *)(this + 0x128) != 0) {
    *(undefined8 *)(this + 0x118) = 0;
    (*Free)();
  }
  if (*(long *)(this + 0x110) != 0) {
    *(undefined8 *)(this + 0x100) = 0;
    (*Free)();
  }
  if (*(long *)(this + 0xf8) != 0) {
    *(undefined8 *)(this + 0xe8) = 0;
    (*Free)();
  }
  plVar4 = *(long **)(this + 0xd8);
  if (plVar4 != (long *)0x0) {
    if ((*(long *)(this + 200) != 0) && (plVar2 = plVar4 + *(long *)(this + 200), plVar4 < plVar2))
    {
      do {
        while (plVar3 = (long *)*plVar4, plVar3 == (long *)0x0) {
LAB_00114f40:
          plVar4 = plVar4 + 1;
          if (plVar2 <= plVar4) goto LAB_00114f78;
        }
        LOCK();
        plVar1 = plVar3 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 != 0) goto LAB_00114f40;
        if (*(code **)(*plVar3 + 0x18) != PhysicsMaterial::~PhysicsMaterial) {
          (**(code **)(*plVar3 + 0x18))();
          goto LAB_00114f40;
        }
        (*Free)();
        plVar4 = plVar4 + 1;
      } while (plVar4 < plVar2);
LAB_00114f78:
      plVar4 = *(long **)(this + 0xd8);
    }
    *(undefined8 *)(this + 200) = 0;
    (*Free)(plVar4);
  }
  if (*(long *)(this + 0xc0) != 0) {
    *(undefined8 *)(this + 0xb0) = 0;
    (*Free)();
  }
  if (*(long *)(this + 0xa8) != 0) {
    *(undefined8 *)(this + 0x98) = 0;
    (*Free)();
  }
  if (*(long *)(this + 0x90) != 0) {
    *(undefined8 *)(this + 0x80) = 0;
    (*Free)();
  }
  if (*(long *)(this + 0x78) != 0) {
    *(undefined8 *)(this + 0x68) = 0;
    (*Free)();
  }
  if (*(long *)(this + 0x60) != 0) {
    *(undefined8 *)(this + 0x50) = 0;
    (*Free)();
  }
  if (*(long *)(this + 0x48) != 0) {
    *(undefined8 *)(this + 0x38) = 0;
    (*Free)();
  }
  if (*(long *)(this + 0x30) != 0) {
    *(undefined8 *)(this + 0x20) = 0;
    (*Free)();
  }
  if (*(long *)(this + 0x18) == 0) {
    return;
  }
  *(undefined8 *)(this + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00114f1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)();
  return;
}



/* HashMap<RID, JoltSoftBody3D::Shared, HashMapHasherDefault, HashMapComparatorDefault<RID>,
   DefaultTypedAllocator<HashMapElement<RID, JoltSoftBody3D::Shared> > >::~HashMap() */

void __thiscall
HashMap<RID,JoltSoftBody3D::Shared,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,JoltSoftBody3D::Shared>>>
::~HashMap(HashMap<RID,JoltSoftBody3D::Shared,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,JoltSoftBody3D::Shared>>>
           *this)

{
  uint uVar1;
  SoftBodySharedSettings *this_00;
  long lVar2;
  void *pvVar3;
  
  pvVar3 = *(void **)(this + 8);
  if (pvVar3 == (void *)0x0) {
    return;
  }
  if (*(int *)(this + 0x2c) != 0) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    if (uVar1 == 0) {
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
    }
    else {
      lVar2 = 0;
      do {
        if (*(int *)(*(long *)(this + 0x10) + lVar2) != 0) {
          pvVar3 = *(void **)((long)pvVar3 + lVar2 * 2);
          *(int *)(*(long *)(this + 0x10) + lVar2) = 0;
          this_00 = *(SoftBodySharedSettings **)((long)pvVar3 + 0x28);
          if (this_00 != (SoftBodySharedSettings *)0x0) {
            LOCK();
            *(int *)this_00 = *(int *)this_00 + -1;
            UNLOCK();
            if (*(int *)this_00 == 0) {
              JPH::SoftBodySharedSettings::~SoftBodySharedSettings(this_00);
              (*JPH::Free)(this_00);
            }
          }
          if (*(void **)((long)pvVar3 + 0x20) != (void *)0x0) {
            if (*(int *)((long)pvVar3 + 0x18) != 0) {
              *(undefined4 *)((long)pvVar3 + 0x18) = 0;
            }
            Memory::free_static(*(void **)((long)pvVar3 + 0x20),false);
          }
          Memory::free_static(pvVar3,false);
          pvVar3 = *(void **)(this + 8);
          *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
        }
        lVar2 = lVar2 + 4;
      } while (lVar2 != (ulong)uVar1 << 2);
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
      if (pvVar3 == (void *)0x0) {
        return;
      }
    }
  }
  Memory::free_static(pvVar3,false);
  Memory::free_static(*(void **)(this + 0x10),false);
  return;
}



/* WARNING: Removing unreachable block (ram,0x001151f8) */
/* WARNING: Removing unreachable block (ram,0x00115328) */
/* WARNING: Removing unreachable block (ram,0x001154f0) */
/* WARNING: Removing unreachable block (ram,0x00115334) */
/* WARNING: Removing unreachable block (ram,0x0011533e) */
/* WARNING: Removing unreachable block (ram,0x001154d0) */
/* WARNING: Removing unreachable block (ram,0x0011534a) */
/* WARNING: Removing unreachable block (ram,0x00115354) */
/* WARNING: Removing unreachable block (ram,0x001154b0) */
/* WARNING: Removing unreachable block (ram,0x00115360) */
/* WARNING: Removing unreachable block (ram,0x0011536a) */
/* WARNING: Removing unreachable block (ram,0x00115490) */
/* WARNING: Removing unreachable block (ram,0x00115376) */
/* WARNING: Removing unreachable block (ram,0x00115380) */
/* WARNING: Removing unreachable block (ram,0x00115470) */
/* WARNING: Removing unreachable block (ram,0x0011538c) */
/* WARNING: Removing unreachable block (ram,0x00115396) */
/* WARNING: Removing unreachable block (ram,0x00115450) */
/* WARNING: Removing unreachable block (ram,0x001153a2) */
/* WARNING: Removing unreachable block (ram,0x001153ac) */
/* WARNING: Removing unreachable block (ram,0x00115430) */
/* WARNING: Removing unreachable block (ram,0x001153b4) */
/* WARNING: Removing unreachable block (ram,0x001153ca) */
/* WARNING: Removing unreachable block (ram,0x001153d6) */
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



/* RID_Alloc<JoltSpace3D*, true>::make_rid(JoltSpace3D* const&) */

ulong __thiscall
RID_Alloc<JoltSpace3D*,true>::make_rid(RID_Alloc<JoltSpace3D*,true> *this,JoltSpace3D **param_1)

{
  pthread_mutex_t *__mutex;
  long *plVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  undefined8 *puVar12;
  char *pcVar13;
  ulong uVar14;
  ulong uVar15;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  __mutex = (pthread_mutex_t *)(this + 0x30);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
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
    if (*(uint *)(this + 0x24) != uVar7) {
      lVar3 = *(long *)(this + 8);
      uVar14 = (ulong)uVar7;
      uVar8 = Memory::alloc_static((ulong)*(uint *)(this + 0x18) << 4,false);
      uVar7 = *(uint *)(this + 0x18);
      lVar4 = *(long *)(this + 0x10);
      *(undefined8 *)(lVar3 + uVar14 * 8) = uVar8;
      uVar8 = Memory::alloc_static((ulong)uVar7 << 2,false);
      uVar7 = *(uint *)(this + 0x18);
      *(undefined8 *)(uVar14 * 8 + lVar4) = uVar8;
      if (uVar7 != 0) {
        lVar3 = *(long *)(*(long *)(this + 8) + uVar14 * 8);
        lVar4 = *(long *)(*(long *)(this + 0x10) + uVar14 * 8);
        lVar9 = 0;
        do {
          *(undefined4 *)(lVar3 + 8 + lVar9 * 0x10) = 0xffffffff;
          *(int *)(lVar4 + lVar9 * 4) = *(int *)(this + 0x20) + (int)lVar9;
          uVar7 = *(uint *)(this + 0x18);
          lVar9 = lVar9 + 1;
        } while ((uint)lVar9 < uVar7);
      }
      *(uint *)(this + 0x1c) = uVar7 + *(int *)(this + 0x1c);
      uVar7 = *(uint *)(this + 0x20);
      goto LAB_0011571b;
    }
    pthread_mutex_unlock(__mutex);
    pcVar13 = *(char **)(this + 0x28);
    if (pcVar13 == (char *)0x0) {
      _err_print_error("_allocate_rid","./core/templates/rid_owner.h",0x85,
                       "Method/function failed. Returning: RID()","Element limit reached.",0,0);
    }
    else {
      local_60 = 0;
      local_50 = strlen(pcVar13);
      local_58 = pcVar13;
      String::parse_latin1((StrRange *)&local_60);
      local_50 = 0x2b;
      local_58 = "Element limit for RID of type \'%s\' reached.";
      local_68 = 0;
      String::parse_latin1((StrRange *)&local_68);
      vformat<String>(&local_58,&local_68,(StrRange *)&local_60);
      _err_print_error("_allocate_rid","./core/templates/rid_owner.h",0x83,
                       "Method/function failed. Returning: RID()",&local_58,0,0);
      pcVar13 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_58 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar13 + -0x10,false);
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
    }
LAB_00115900:
    uVar15 = 0;
  }
  else {
LAB_0011571b:
    uVar2 = *(uint *)(this + 0x18);
    uVar7 = *(uint *)(*(long *)(*(long *)(this + 0x10) + ((ulong)uVar7 / (ulong)uVar2) * 8) +
                     ((ulong)uVar7 % (ulong)uVar2) * 4);
    uVar14 = (ulong)uVar7;
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
    uVar15 = CONCAT44(uVar10,uVar7) & 0x7fffffffffffffff;
    RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
    *(uint *)((uVar14 % (ulong)uVar2) * 0x10 + *(long *)(*(long *)(this + 8) + (uVar14 / uVar2) * 8)
             + 8) = uVar11 | 0x80000000;
    *(int *)(this + 0x20) = *(int *)(this + 0x20) + 1;
    pthread_mutex_unlock(__mutex);
    if (uVar15 == 0) goto LAB_00115900;
    if ((uint)uVar15 < *(uint *)(this + 0x1c)) {
      puVar12 = (undefined8 *)
                ((uVar14 % (ulong)*(uint *)(this + 0x18)) * 0x10 +
                *(long *)(*(long *)(this + 8) + (uVar14 / *(uint *)(this + 0x18)) * 8));
      if ((int)*(uint *)(puVar12 + 1) < 0) {
        uVar7 = *(uint *)(puVar12 + 1) & 0x7fffffff;
        if (uVar7 == (uint)(uVar15 >> 0x20)) {
          *(uint *)(puVar12 + 1) = uVar7;
          *puVar12 = *param_1;
          goto LAB_001157de;
        }
        pcVar13 = "Attempting to initialize the wrong RID";
        uVar8 = 0xfc;
      }
      else {
        pcVar13 = "Initializing already initialized RID";
        uVar8 = 0xf8;
      }
      _err_print_error("get_or_null","./core/templates/rid_owner.h",uVar8,
                       "Method/function failed. Returning: nullptr",pcVar13,0,0);
    }
  }
  _err_print_error("initialize_rid","./core/templates/rid_owner.h",0x128,
                   "Parameter \"mem\" is null.",0,0);
LAB_001157de:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar15;
}



/* RID_Alloc<JoltShape3D*, true>::make_rid(JoltShape3D* const&) */

ulong __thiscall
RID_Alloc<JoltShape3D*,true>::make_rid(RID_Alloc<JoltShape3D*,true> *this,JoltShape3D **param_1)

{
  pthread_mutex_t *__mutex;
  long *plVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  undefined8 *puVar12;
  char *pcVar13;
  ulong uVar14;
  ulong uVar15;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  __mutex = (pthread_mutex_t *)(this + 0x30);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
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
    if (*(uint *)(this + 0x24) != uVar7) {
      lVar3 = *(long *)(this + 8);
      uVar14 = (ulong)uVar7;
      uVar8 = Memory::alloc_static((ulong)*(uint *)(this + 0x18) << 4,false);
      uVar7 = *(uint *)(this + 0x18);
      lVar4 = *(long *)(this + 0x10);
      *(undefined8 *)(lVar3 + uVar14 * 8) = uVar8;
      uVar8 = Memory::alloc_static((ulong)uVar7 << 2,false);
      uVar7 = *(uint *)(this + 0x18);
      *(undefined8 *)(uVar14 * 8 + lVar4) = uVar8;
      if (uVar7 != 0) {
        lVar3 = *(long *)(*(long *)(this + 8) + uVar14 * 8);
        lVar4 = *(long *)(*(long *)(this + 0x10) + uVar14 * 8);
        lVar9 = 0;
        do {
          *(undefined4 *)(lVar3 + 8 + lVar9 * 0x10) = 0xffffffff;
          *(int *)(lVar4 + lVar9 * 4) = *(int *)(this + 0x20) + (int)lVar9;
          uVar7 = *(uint *)(this + 0x18);
          lVar9 = lVar9 + 1;
        } while ((uint)lVar9 < uVar7);
      }
      *(uint *)(this + 0x1c) = uVar7 + *(int *)(this + 0x1c);
      uVar7 = *(uint *)(this + 0x20);
      goto LAB_00115b7b;
    }
    pthread_mutex_unlock(__mutex);
    pcVar13 = *(char **)(this + 0x28);
    if (pcVar13 == (char *)0x0) {
      _err_print_error("_allocate_rid","./core/templates/rid_owner.h",0x85,
                       "Method/function failed. Returning: RID()","Element limit reached.",0,0);
    }
    else {
      local_60 = 0;
      local_50 = strlen(pcVar13);
      local_58 = pcVar13;
      String::parse_latin1((StrRange *)&local_60);
      local_50 = 0x2b;
      local_58 = "Element limit for RID of type \'%s\' reached.";
      local_68 = 0;
      String::parse_latin1((StrRange *)&local_68);
      vformat<String>(&local_58,&local_68,(StrRange *)&local_60);
      _err_print_error("_allocate_rid","./core/templates/rid_owner.h",0x83,
                       "Method/function failed. Returning: RID()",&local_58,0,0);
      pcVar13 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_58 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar13 + -0x10,false);
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
    }
LAB_00115d60:
    uVar15 = 0;
  }
  else {
LAB_00115b7b:
    uVar2 = *(uint *)(this + 0x18);
    uVar7 = *(uint *)(*(long *)(*(long *)(this + 0x10) + ((ulong)uVar7 / (ulong)uVar2) * 8) +
                     ((ulong)uVar7 % (ulong)uVar2) * 4);
    uVar14 = (ulong)uVar7;
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
    uVar15 = CONCAT44(uVar10,uVar7) & 0x7fffffffffffffff;
    RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
    *(uint *)((uVar14 % (ulong)uVar2) * 0x10 + *(long *)(*(long *)(this + 8) + (uVar14 / uVar2) * 8)
             + 8) = uVar11 | 0x80000000;
    *(int *)(this + 0x20) = *(int *)(this + 0x20) + 1;
    pthread_mutex_unlock(__mutex);
    if (uVar15 == 0) goto LAB_00115d60;
    if ((uint)uVar15 < *(uint *)(this + 0x1c)) {
      puVar12 = (undefined8 *)
                ((uVar14 % (ulong)*(uint *)(this + 0x18)) * 0x10 +
                *(long *)(*(long *)(this + 8) + (uVar14 / *(uint *)(this + 0x18)) * 8));
      if ((int)*(uint *)(puVar12 + 1) < 0) {
        uVar7 = *(uint *)(puVar12 + 1) & 0x7fffffff;
        if (uVar7 == (uint)(uVar15 >> 0x20)) {
          *(uint *)(puVar12 + 1) = uVar7;
          *puVar12 = *param_1;
          goto LAB_00115c3e;
        }
        pcVar13 = "Attempting to initialize the wrong RID";
        uVar8 = 0xfc;
      }
      else {
        pcVar13 = "Initializing already initialized RID";
        uVar8 = 0xf8;
      }
      _err_print_error("get_or_null","./core/templates/rid_owner.h",uVar8,
                       "Method/function failed. Returning: nullptr",pcVar13,0,0);
    }
  }
  _err_print_error("initialize_rid","./core/templates/rid_owner.h",0x128,
                   "Parameter \"mem\" is null.",0,0);
LAB_00115c3e:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar15;
}



/* RID_Alloc<JoltArea3D*, true>::make_rid(JoltArea3D* const&) */

ulong __thiscall
RID_Alloc<JoltArea3D*,true>::make_rid(RID_Alloc<JoltArea3D*,true> *this,JoltArea3D **param_1)

{
  pthread_mutex_t *__mutex;
  long *plVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  undefined8 *puVar12;
  char *pcVar13;
  ulong uVar14;
  ulong uVar15;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  __mutex = (pthread_mutex_t *)(this + 0x30);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
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
    if (*(uint *)(this + 0x24) != uVar7) {
      lVar3 = *(long *)(this + 8);
      uVar14 = (ulong)uVar7;
      uVar8 = Memory::alloc_static((ulong)*(uint *)(this + 0x18) << 4,false);
      uVar7 = *(uint *)(this + 0x18);
      lVar4 = *(long *)(this + 0x10);
      *(undefined8 *)(lVar3 + uVar14 * 8) = uVar8;
      uVar8 = Memory::alloc_static((ulong)uVar7 << 2,false);
      uVar7 = *(uint *)(this + 0x18);
      *(undefined8 *)(uVar14 * 8 + lVar4) = uVar8;
      if (uVar7 != 0) {
        lVar3 = *(long *)(*(long *)(this + 8) + uVar14 * 8);
        lVar4 = *(long *)(*(long *)(this + 0x10) + uVar14 * 8);
        lVar9 = 0;
        do {
          *(undefined4 *)(lVar3 + 8 + lVar9 * 0x10) = 0xffffffff;
          *(int *)(lVar4 + lVar9 * 4) = *(int *)(this + 0x20) + (int)lVar9;
          uVar7 = *(uint *)(this + 0x18);
          lVar9 = lVar9 + 1;
        } while ((uint)lVar9 < uVar7);
      }
      *(uint *)(this + 0x1c) = uVar7 + *(int *)(this + 0x1c);
      uVar7 = *(uint *)(this + 0x20);
      goto LAB_00115fdb;
    }
    pthread_mutex_unlock(__mutex);
    pcVar13 = *(char **)(this + 0x28);
    if (pcVar13 == (char *)0x0) {
      _err_print_error("_allocate_rid","./core/templates/rid_owner.h",0x85,
                       "Method/function failed. Returning: RID()","Element limit reached.",0,0);
    }
    else {
      local_60 = 0;
      local_50 = strlen(pcVar13);
      local_58 = pcVar13;
      String::parse_latin1((StrRange *)&local_60);
      local_50 = 0x2b;
      local_58 = "Element limit for RID of type \'%s\' reached.";
      local_68 = 0;
      String::parse_latin1((StrRange *)&local_68);
      vformat<String>(&local_58,&local_68,(StrRange *)&local_60);
      _err_print_error("_allocate_rid","./core/templates/rid_owner.h",0x83,
                       "Method/function failed. Returning: RID()",&local_58,0,0);
      pcVar13 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_58 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar13 + -0x10,false);
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
    }
LAB_001161c0:
    uVar15 = 0;
  }
  else {
LAB_00115fdb:
    uVar2 = *(uint *)(this + 0x18);
    uVar7 = *(uint *)(*(long *)(*(long *)(this + 0x10) + ((ulong)uVar7 / (ulong)uVar2) * 8) +
                     ((ulong)uVar7 % (ulong)uVar2) * 4);
    uVar14 = (ulong)uVar7;
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
    uVar15 = CONCAT44(uVar10,uVar7) & 0x7fffffffffffffff;
    RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
    *(uint *)((uVar14 % (ulong)uVar2) * 0x10 + *(long *)(*(long *)(this + 8) + (uVar14 / uVar2) * 8)
             + 8) = uVar11 | 0x80000000;
    *(int *)(this + 0x20) = *(int *)(this + 0x20) + 1;
    pthread_mutex_unlock(__mutex);
    if (uVar15 == 0) goto LAB_001161c0;
    if ((uint)uVar15 < *(uint *)(this + 0x1c)) {
      puVar12 = (undefined8 *)
                ((uVar14 % (ulong)*(uint *)(this + 0x18)) * 0x10 +
                *(long *)(*(long *)(this + 8) + (uVar14 / *(uint *)(this + 0x18)) * 8));
      if ((int)*(uint *)(puVar12 + 1) < 0) {
        uVar7 = *(uint *)(puVar12 + 1) & 0x7fffffff;
        if (uVar7 == (uint)(uVar15 >> 0x20)) {
          *(uint *)(puVar12 + 1) = uVar7;
          *puVar12 = *param_1;
          goto LAB_0011609e;
        }
        pcVar13 = "Attempting to initialize the wrong RID";
        uVar8 = 0xfc;
      }
      else {
        pcVar13 = "Initializing already initialized RID";
        uVar8 = 0xf8;
      }
      _err_print_error("get_or_null","./core/templates/rid_owner.h",uVar8,
                       "Method/function failed. Returning: nullptr",pcVar13,0,0);
    }
  }
  _err_print_error("initialize_rid","./core/templates/rid_owner.h",0x128,
                   "Parameter \"mem\" is null.",0,0);
LAB_0011609e:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar15;
}



/* RID_Alloc<JoltBody3D*, true>::make_rid(JoltBody3D* const&) */

ulong __thiscall
RID_Alloc<JoltBody3D*,true>::make_rid(RID_Alloc<JoltBody3D*,true> *this,JoltBody3D **param_1)

{
  pthread_mutex_t *__mutex;
  long *plVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  undefined8 *puVar12;
  char *pcVar13;
  ulong uVar14;
  ulong uVar15;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  __mutex = (pthread_mutex_t *)(this + 0x30);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
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
    if (*(uint *)(this + 0x24) != uVar7) {
      lVar3 = *(long *)(this + 8);
      uVar14 = (ulong)uVar7;
      uVar8 = Memory::alloc_static((ulong)*(uint *)(this + 0x18) << 4,false);
      uVar7 = *(uint *)(this + 0x18);
      lVar4 = *(long *)(this + 0x10);
      *(undefined8 *)(lVar3 + uVar14 * 8) = uVar8;
      uVar8 = Memory::alloc_static((ulong)uVar7 << 2,false);
      uVar7 = *(uint *)(this + 0x18);
      *(undefined8 *)(uVar14 * 8 + lVar4) = uVar8;
      if (uVar7 != 0) {
        lVar3 = *(long *)(*(long *)(this + 8) + uVar14 * 8);
        lVar4 = *(long *)(*(long *)(this + 0x10) + uVar14 * 8);
        lVar9 = 0;
        do {
          *(undefined4 *)(lVar3 + 8 + lVar9 * 0x10) = 0xffffffff;
          *(int *)(lVar4 + lVar9 * 4) = *(int *)(this + 0x20) + (int)lVar9;
          uVar7 = *(uint *)(this + 0x18);
          lVar9 = lVar9 + 1;
        } while ((uint)lVar9 < uVar7);
      }
      *(uint *)(this + 0x1c) = uVar7 + *(int *)(this + 0x1c);
      uVar7 = *(uint *)(this + 0x20);
      goto LAB_0011643b;
    }
    pthread_mutex_unlock(__mutex);
    pcVar13 = *(char **)(this + 0x28);
    if (pcVar13 == (char *)0x0) {
      _err_print_error("_allocate_rid","./core/templates/rid_owner.h",0x85,
                       "Method/function failed. Returning: RID()","Element limit reached.",0,0);
    }
    else {
      local_60 = 0;
      local_50 = strlen(pcVar13);
      local_58 = pcVar13;
      String::parse_latin1((StrRange *)&local_60);
      local_50 = 0x2b;
      local_58 = "Element limit for RID of type \'%s\' reached.";
      local_68 = 0;
      String::parse_latin1((StrRange *)&local_68);
      vformat<String>(&local_58,&local_68,(StrRange *)&local_60);
      _err_print_error("_allocate_rid","./core/templates/rid_owner.h",0x83,
                       "Method/function failed. Returning: RID()",&local_58,0,0);
      pcVar13 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_58 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar13 + -0x10,false);
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
    }
LAB_00116620:
    uVar15 = 0;
  }
  else {
LAB_0011643b:
    uVar2 = *(uint *)(this + 0x18);
    uVar7 = *(uint *)(*(long *)(*(long *)(this + 0x10) + ((ulong)uVar7 / (ulong)uVar2) * 8) +
                     ((ulong)uVar7 % (ulong)uVar2) * 4);
    uVar14 = (ulong)uVar7;
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
    uVar15 = CONCAT44(uVar10,uVar7) & 0x7fffffffffffffff;
    RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
    *(uint *)((uVar14 % (ulong)uVar2) * 0x10 + *(long *)(*(long *)(this + 8) + (uVar14 / uVar2) * 8)
             + 8) = uVar11 | 0x80000000;
    *(int *)(this + 0x20) = *(int *)(this + 0x20) + 1;
    pthread_mutex_unlock(__mutex);
    if (uVar15 == 0) goto LAB_00116620;
    if ((uint)uVar15 < *(uint *)(this + 0x1c)) {
      puVar12 = (undefined8 *)
                ((uVar14 % (ulong)*(uint *)(this + 0x18)) * 0x10 +
                *(long *)(*(long *)(this + 8) + (uVar14 / *(uint *)(this + 0x18)) * 8));
      if ((int)*(uint *)(puVar12 + 1) < 0) {
        uVar7 = *(uint *)(puVar12 + 1) & 0x7fffffff;
        if (uVar7 == (uint)(uVar15 >> 0x20)) {
          *(uint *)(puVar12 + 1) = uVar7;
          *puVar12 = *param_1;
          goto LAB_001164fe;
        }
        pcVar13 = "Attempting to initialize the wrong RID";
        uVar8 = 0xfc;
      }
      else {
        pcVar13 = "Initializing already initialized RID";
        uVar8 = 0xf8;
      }
      _err_print_error("get_or_null","./core/templates/rid_owner.h",uVar8,
                       "Method/function failed. Returning: nullptr",pcVar13,0,0);
    }
  }
  _err_print_error("initialize_rid","./core/templates/rid_owner.h",0x128,
                   "Parameter \"mem\" is null.",0,0);
LAB_001164fe:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar15;
}



/* RID_Alloc<JoltSoftBody3D*, true>::make_rid(JoltSoftBody3D* const&) */

ulong __thiscall
RID_Alloc<JoltSoftBody3D*,true>::make_rid
          (RID_Alloc<JoltSoftBody3D*,true> *this,JoltSoftBody3D **param_1)

{
  pthread_mutex_t *__mutex;
  long *plVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  undefined8 *puVar12;
  char *pcVar13;
  ulong uVar14;
  ulong uVar15;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  __mutex = (pthread_mutex_t *)(this + 0x30);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
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
    if (*(uint *)(this + 0x24) != uVar7) {
      lVar3 = *(long *)(this + 8);
      uVar14 = (ulong)uVar7;
      uVar8 = Memory::alloc_static((ulong)*(uint *)(this + 0x18) << 4,false);
      uVar7 = *(uint *)(this + 0x18);
      lVar4 = *(long *)(this + 0x10);
      *(undefined8 *)(lVar3 + uVar14 * 8) = uVar8;
      uVar8 = Memory::alloc_static((ulong)uVar7 << 2,false);
      uVar7 = *(uint *)(this + 0x18);
      *(undefined8 *)(uVar14 * 8 + lVar4) = uVar8;
      if (uVar7 != 0) {
        lVar3 = *(long *)(*(long *)(this + 8) + uVar14 * 8);
        lVar4 = *(long *)(*(long *)(this + 0x10) + uVar14 * 8);
        lVar9 = 0;
        do {
          *(undefined4 *)(lVar3 + 8 + lVar9 * 0x10) = 0xffffffff;
          *(int *)(lVar4 + lVar9 * 4) = *(int *)(this + 0x20) + (int)lVar9;
          uVar7 = *(uint *)(this + 0x18);
          lVar9 = lVar9 + 1;
        } while ((uint)lVar9 < uVar7);
      }
      *(uint *)(this + 0x1c) = uVar7 + *(int *)(this + 0x1c);
      uVar7 = *(uint *)(this + 0x20);
      goto LAB_0011689b;
    }
    pthread_mutex_unlock(__mutex);
    pcVar13 = *(char **)(this + 0x28);
    if (pcVar13 == (char *)0x0) {
      _err_print_error("_allocate_rid","./core/templates/rid_owner.h",0x85,
                       "Method/function failed. Returning: RID()","Element limit reached.",0,0);
    }
    else {
      local_60 = 0;
      local_50 = strlen(pcVar13);
      local_58 = pcVar13;
      String::parse_latin1((StrRange *)&local_60);
      local_50 = 0x2b;
      local_58 = "Element limit for RID of type \'%s\' reached.";
      local_68 = 0;
      String::parse_latin1((StrRange *)&local_68);
      vformat<String>(&local_58,&local_68,(StrRange *)&local_60);
      _err_print_error("_allocate_rid","./core/templates/rid_owner.h",0x83,
                       "Method/function failed. Returning: RID()",&local_58,0,0);
      pcVar13 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_58 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar13 + -0x10,false);
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
    }
LAB_00116a80:
    uVar15 = 0;
  }
  else {
LAB_0011689b:
    uVar2 = *(uint *)(this + 0x18);
    uVar7 = *(uint *)(*(long *)(*(long *)(this + 0x10) + ((ulong)uVar7 / (ulong)uVar2) * 8) +
                     ((ulong)uVar7 % (ulong)uVar2) * 4);
    uVar14 = (ulong)uVar7;
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
    uVar15 = CONCAT44(uVar10,uVar7) & 0x7fffffffffffffff;
    RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
    *(uint *)((uVar14 % (ulong)uVar2) * 0x10 + *(long *)(*(long *)(this + 8) + (uVar14 / uVar2) * 8)
             + 8) = uVar11 | 0x80000000;
    *(int *)(this + 0x20) = *(int *)(this + 0x20) + 1;
    pthread_mutex_unlock(__mutex);
    if (uVar15 == 0) goto LAB_00116a80;
    if ((uint)uVar15 < *(uint *)(this + 0x1c)) {
      puVar12 = (undefined8 *)
                ((uVar14 % (ulong)*(uint *)(this + 0x18)) * 0x10 +
                *(long *)(*(long *)(this + 8) + (uVar14 / *(uint *)(this + 0x18)) * 8));
      if ((int)*(uint *)(puVar12 + 1) < 0) {
        uVar7 = *(uint *)(puVar12 + 1) & 0x7fffffff;
        if (uVar7 == (uint)(uVar15 >> 0x20)) {
          *(uint *)(puVar12 + 1) = uVar7;
          *puVar12 = *param_1;
          goto LAB_0011695e;
        }
        pcVar13 = "Attempting to initialize the wrong RID";
        uVar8 = 0xfc;
      }
      else {
        pcVar13 = "Initializing already initialized RID";
        uVar8 = 0xf8;
      }
      _err_print_error("get_or_null","./core/templates/rid_owner.h",uVar8,
                       "Method/function failed. Returning: nullptr",pcVar13,0,0);
    }
  }
  _err_print_error("initialize_rid","./core/templates/rid_owner.h",0x128,
                   "Parameter \"mem\" is null.",0,0);
LAB_0011695e:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar15;
}



/* RID_Alloc<JoltJoint3D*, true>::make_rid(JoltJoint3D* const&) */

ulong __thiscall
RID_Alloc<JoltJoint3D*,true>::make_rid(RID_Alloc<JoltJoint3D*,true> *this,JoltJoint3D **param_1)

{
  pthread_mutex_t *__mutex;
  long *plVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  undefined8 *puVar12;
  char *pcVar13;
  ulong uVar14;
  ulong uVar15;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  __mutex = (pthread_mutex_t *)(this + 0x30);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
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
    if (*(uint *)(this + 0x24) != uVar7) {
      lVar3 = *(long *)(this + 8);
      uVar14 = (ulong)uVar7;
      uVar8 = Memory::alloc_static((ulong)*(uint *)(this + 0x18) << 4,false);
      uVar7 = *(uint *)(this + 0x18);
      lVar4 = *(long *)(this + 0x10);
      *(undefined8 *)(lVar3 + uVar14 * 8) = uVar8;
      uVar8 = Memory::alloc_static((ulong)uVar7 << 2,false);
      uVar7 = *(uint *)(this + 0x18);
      *(undefined8 *)(uVar14 * 8 + lVar4) = uVar8;
      if (uVar7 != 0) {
        lVar3 = *(long *)(*(long *)(this + 8) + uVar14 * 8);
        lVar4 = *(long *)(*(long *)(this + 0x10) + uVar14 * 8);
        lVar9 = 0;
        do {
          *(undefined4 *)(lVar3 + 8 + lVar9 * 0x10) = 0xffffffff;
          *(int *)(lVar4 + lVar9 * 4) = *(int *)(this + 0x20) + (int)lVar9;
          uVar7 = *(uint *)(this + 0x18);
          lVar9 = lVar9 + 1;
        } while ((uint)lVar9 < uVar7);
      }
      *(uint *)(this + 0x1c) = uVar7 + *(int *)(this + 0x1c);
      uVar7 = *(uint *)(this + 0x20);
      goto LAB_00116cfb;
    }
    pthread_mutex_unlock(__mutex);
    pcVar13 = *(char **)(this + 0x28);
    if (pcVar13 == (char *)0x0) {
      _err_print_error("_allocate_rid","./core/templates/rid_owner.h",0x85,
                       "Method/function failed. Returning: RID()","Element limit reached.",0,0);
    }
    else {
      local_60 = 0;
      local_50 = strlen(pcVar13);
      local_58 = pcVar13;
      String::parse_latin1((StrRange *)&local_60);
      local_50 = 0x2b;
      local_58 = "Element limit for RID of type \'%s\' reached.";
      local_68 = 0;
      String::parse_latin1((StrRange *)&local_68);
      vformat<String>(&local_58,&local_68,(StrRange *)&local_60);
      _err_print_error("_allocate_rid","./core/templates/rid_owner.h",0x83,
                       "Method/function failed. Returning: RID()",&local_58,0,0);
      pcVar13 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_58 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar13 + -0x10,false);
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
    }
LAB_00116ee0:
    uVar15 = 0;
  }
  else {
LAB_00116cfb:
    uVar2 = *(uint *)(this + 0x18);
    uVar7 = *(uint *)(*(long *)(*(long *)(this + 0x10) + ((ulong)uVar7 / (ulong)uVar2) * 8) +
                     ((ulong)uVar7 % (ulong)uVar2) * 4);
    uVar14 = (ulong)uVar7;
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
    uVar15 = CONCAT44(uVar10,uVar7) & 0x7fffffffffffffff;
    RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
    *(uint *)((uVar14 % (ulong)uVar2) * 0x10 + *(long *)(*(long *)(this + 8) + (uVar14 / uVar2) * 8)
             + 8) = uVar11 | 0x80000000;
    *(int *)(this + 0x20) = *(int *)(this + 0x20) + 1;
    pthread_mutex_unlock(__mutex);
    if (uVar15 == 0) goto LAB_00116ee0;
    if ((uint)uVar15 < *(uint *)(this + 0x1c)) {
      puVar12 = (undefined8 *)
                ((uVar14 % (ulong)*(uint *)(this + 0x18)) * 0x10 +
                *(long *)(*(long *)(this + 8) + (uVar14 / *(uint *)(this + 0x18)) * 8));
      if ((int)*(uint *)(puVar12 + 1) < 0) {
        uVar7 = *(uint *)(puVar12 + 1) & 0x7fffffff;
        if (uVar7 == (uint)(uVar15 >> 0x20)) {
          *(uint *)(puVar12 + 1) = uVar7;
          *puVar12 = *param_1;
          goto LAB_00116dbe;
        }
        pcVar13 = "Attempting to initialize the wrong RID";
        uVar8 = 0xfc;
      }
      else {
        pcVar13 = "Initializing already initialized RID";
        uVar8 = 0xf8;
      }
      _err_print_error("get_or_null","./core/templates/rid_owner.h",uVar8,
                       "Method/function failed. Returning: nullptr",pcVar13,0,0);
    }
  }
  _err_print_error("initialize_rid","./core/templates/rid_owner.h",0x128,
                   "Parameter \"mem\" is null.",0,0);
LAB_00116dbe:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar15;
}



/* JoltPhysicsServer3D::JoltPhysicsServer3D(bool) */

void JoltPhysicsServer3D::_GLOBAL__sub_I_JoltPhysicsServer3D(void)

{
  if (JPH::DVec3::cTrue == '\0') {
    JPH::DVec3::cTrue = '\x01';
    JPH::DVec3::cTrue = _LC290;
  }
  if (JoltSoftBody3D::mesh_to_shared == '\0') {
    JoltSoftBody3D::mesh_to_shared = '\x01';
    JoltSoftBody3D::mesh_to_shared._8_16_ = (undefined1  [16])0x0;
    JoltSoftBody3D::mesh_to_shared._24_16_ = (undefined1  [16])0x0;
    JoltSoftBody3D::mesh_to_shared._40_8_ = 2;
    __cxa_atexit(HashMap<RID,JoltSoftBody3D::Shared,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,JoltSoftBody3D::Shared>>>
                 ::~HashMap,JoltSoftBody3D::mesh_to_shared,&__dso_handle);
  }
  if (JoltJobSystem::timings_by_job != '\0') {
    return;
  }
  JoltJobSystem::timings_by_job = 1;
  JoltJobSystem::timings_by_job._8_16_ = (undefined1  [16])0x0;
  JoltJobSystem::timings_by_job._40_8_ = 2;
  JoltJobSystem::timings_by_job._24_16_ = (undefined1  [16])0x0;
  __cxa_atexit(HashMap<void_const*,unsigned_long,HashMapHasherDefault,HashMapComparatorDefault<void_const*>,DefaultTypedAllocator<HashMapElement<void_const*,unsigned_long>>>
               ::~HashMap,JoltJobSystem::timings_by_job,&__dso_handle);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* HashMap<RID, JoltSoftBody3D::Shared, HashMapHasherDefault, HashMapComparatorDefault<RID>,
   DefaultTypedAllocator<HashMapElement<RID, JoltSoftBody3D::Shared> > >::~HashMap() */

void __thiscall
HashMap<RID,JoltSoftBody3D::Shared,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,JoltSoftBody3D::Shared>>>
::~HashMap(HashMap<RID,JoltSoftBody3D::Shared,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,JoltSoftBody3D::Shared>>>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::SoftBodySharedSettings::~SoftBodySharedSettings() */

void __thiscall JPH::SoftBodySharedSettings::~SoftBodySharedSettings(SoftBodySharedSettings *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* RID_Alloc<JoltJoint3D*, true>::~RID_Alloc() */

void __thiscall RID_Alloc<JoltJoint3D*,true>::~RID_Alloc(RID_Alloc<JoltJoint3D*,true> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* RID_Alloc<JoltShape3D*, true>::~RID_Alloc() */

void __thiscall RID_Alloc<JoltShape3D*,true>::~RID_Alloc(RID_Alloc<JoltShape3D*,true> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* RID_Alloc<JoltSoftBody3D*, true>::~RID_Alloc() */

void __thiscall RID_Alloc<JoltSoftBody3D*,true>::~RID_Alloc(RID_Alloc<JoltSoftBody3D*,true> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* RID_Alloc<JoltBody3D*, true>::~RID_Alloc() */

void __thiscall RID_Alloc<JoltBody3D*,true>::~RID_Alloc(RID_Alloc<JoltBody3D*,true> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* RID_Alloc<JoltArea3D*, true>::~RID_Alloc() */

void __thiscall RID_Alloc<JoltArea3D*,true>::~RID_Alloc(RID_Alloc<JoltArea3D*,true> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* RID_Alloc<JoltSpace3D*, true>::~RID_Alloc() */

void __thiscall RID_Alloc<JoltSpace3D*,true>::~RID_Alloc(RID_Alloc<JoltSpace3D*,true> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* HashMap<void const*, unsigned long, HashMapHasherDefault, HashMapComparatorDefault<void const*>,
   DefaultTypedAllocator<HashMapElement<void const*, unsigned long> > >::~HashMap() */

void __thiscall
HashMap<void_const*,unsigned_long,HashMapHasherDefault,HashMapComparatorDefault<void_const*>,DefaultTypedAllocator<HashMapElement<void_const*,unsigned_long>>>
::~HashMap(HashMap<void_const*,unsigned_long,HashMapHasherDefault,HashMapComparatorDefault<void_const*>,DefaultTypedAllocator<HashMapElement<void_const*,unsigned_long>>>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::PhysicsMaterial::~PhysicsMaterial() */

void __thiscall JPH::PhysicsMaterial::~PhysicsMaterial(PhysicsMaterial *this)

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


