/* OpenXRInterface::get_capabilities() const */

undefined8 OpenXRInterface::get_capabilities(void)

{
  return 10;
}



/* OpenXRInterface::get_tracking_status() const */

undefined4 __thiscall OpenXRInterface::get_tracking_status(OpenXRInterface *this)

{
  return *(undefined4 *)(this + 0x1b4);
}



/* OpenXRInterface::is_initialized() const */

OpenXRInterface __thiscall OpenXRInterface::is_initialized(OpenXRInterface *this)

{
  return this[0x1b0];
}



/* OpenXRInterface::supports_play_area_mode(XRInterface::PlayAreaMode) */

bool __thiscall OpenXRInterface::supports_play_area_mode(undefined8 param_1,int param_2)

{
  return param_2 != 1;
}



/* OpenXRInterface::get_play_area_mode() const */

ulong __thiscall OpenXRInterface::get_play_area_mode(OpenXRInterface *this)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if (*(long *)(this + 0x1a8) == 0) {
    return 0;
  }
  if (this[0x1b0] != (OpenXRInterface)0x0) {
    uVar1 = *(uint *)(*(long *)(this + 0x1a8) + 0xa4);
    uVar2 = (ulong)uVar1;
    if (uVar1 != 2) {
      if (uVar1 != 0x3ba14a10) {
        return (ulong)(uVar1 == 3) << 2;
      }
      uVar2 = 3;
    }
  }
  return uVar2;
}



/* OpenXRInterface::get_view_count() */

undefined8 OpenXRInterface::get_view_count(void)

{
  return 2;
}



/* OpenXRInterface::get_environment_blend_mode() const */

uint __thiscall OpenXRInterface::get_environment_blend_mode(OpenXRInterface *this)

{
  uint uVar1;
  
  uVar1 = 0;
  if (*(long *)(this + 0x1a8) != 0) {
    uVar1 = *(int *)(*(long *)(this + 0x1a8) + 0xb0) - 1;
    if (2 < uVar1) {
      uVar1 = 0;
    }
  }
  return uVar1;
}



/* OpenXRInterface::get_name() const */

OpenXRInterface * __thiscall OpenXRInterface::get_name(OpenXRInterface *this)

{
  StringName::StringName((StringName *)this,"OpenXR",false);
  return this;
}



/* OpenXRInterface::get_action_sets() const */

void OpenXRInterface::get_action_sets(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long in_RSI;
  Array *in_RDI;
  long in_FS_OFFSET;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  Array::Array(in_RDI);
  puVar2 = *(undefined8 **)(in_RSI + 0x428);
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = puVar2 + puVar2[-1];
    for (; puVar1 != puVar2; puVar2 = puVar2 + 1) {
      Variant::Variant((Variant *)local_48,(String *)*puVar2);
      Array::push_back((Variant *)in_RDI);
      if (Variant::needs_deinit[local_48[0]] != '\0') {
        Variant::_clear_internal();
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRInterface::get_available_display_refresh_rates() const */

void OpenXRInterface::get_available_display_refresh_rates(void)

{
  long lVar1;
  char cVar2;
  long in_RSI;
  Array *in_RDI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(in_RSI + 0x1a8) != 0) {
    cVar2 = OpenXRAPI::is_initialized();
    if (cVar2 != '\0') {
      OpenXRAPI::get_available_display_refresh_rates();
      goto LAB_001001ed;
    }
  }
  Array::Array(in_RDI);
LAB_001001ed:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRInterface::is_hand_tracking_supported() */

undefined8 __thiscall OpenXRInterface::is_hand_tracking_supported(OpenXRInterface *this)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (*(long *)(this + 0x1a8) == 0) {
    return 0;
  }
  cVar1 = OpenXRAPI::is_initialized();
  if (cVar1 != '\0') {
    lVar2 = OpenXRHandTrackingExtension::get_singleton();
    if (lVar2 != 0) {
      uVar3 = OpenXRHandTrackingExtension::get_active();
      return uVar3;
    }
  }
  return 0;
}



/* OpenXRInterface::is_hand_interaction_supported() const */

undefined8 __thiscall OpenXRInterface::is_hand_interaction_supported(OpenXRInterface *this)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (*(long *)(this + 0x1a8) == 0) {
    return 0;
  }
  cVar1 = OpenXRAPI::is_initialized();
  if (cVar1 != '\0') {
    lVar2 = OpenXRHandInteractionExtension::get_singleton();
    if (lVar2 != 0) {
      uVar3 = OpenXRHandInteractionExtension::is_available();
      return uVar3;
    }
  }
  return 0;
}



/* OpenXRInterface::is_eye_gaze_interaction_supported() */

undefined8 __thiscall OpenXRInterface::is_eye_gaze_interaction_supported(OpenXRInterface *this)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (*(long *)(this + 0x1a8) == 0) {
    return 0;
  }
  cVar1 = OpenXRAPI::is_initialized();
  if (cVar1 != '\0') {
    lVar2 = OpenXREyeGazeInteractionExtension::get_singleton();
    if (lVar2 != 0) {
      uVar3 = OpenXREyeGazeInteractionExtension::supports_eye_gaze_interaction();
      return uVar3;
    }
  }
  return 0;
}



/* OpenXRInterface::get_vrs_min_radius() const */

void OpenXRInterface::get_vrs_min_radius(void)

{
  XRVRS::get_vrs_min_radius();
  return;
}



/* OpenXRInterface::set_vrs_min_radius(float) */

void OpenXRInterface::set_vrs_min_radius(float param_1)

{
  XRVRS::set_vrs_min_radius(param_1);
  return;
}



/* OpenXRInterface::get_vrs_strength() const */

void OpenXRInterface::get_vrs_strength(void)

{
  XRVRS::get_vrs_strength();
  return;
}



/* OpenXRInterface::set_vrs_strength(float) */

void OpenXRInterface::set_vrs_strength(float param_1)

{
  XRVRS::set_vrs_strength(param_1);
  return;
}



/* OpenXRInterface::get_render_target_size_multiplier() const */

undefined8 __thiscall OpenXRInterface::get_render_target_size_multiplier(OpenXRInterface *this)

{
  undefined8 uVar1;
  
  if (*(long *)(this + 0x1a8) != 0) {
    uVar1 = OpenXRAPI::get_render_target_size_multiplier();
    return uVar1;
  }
  return _LC1;
}



/* OpenXRInterface::set_render_target_size_multiplier(double) */

void __thiscall
OpenXRInterface::set_render_target_size_multiplier(OpenXRInterface *this,double param_1)

{
  if (*(long *)(this + 0x1a8) != 0) {
    OpenXRAPI::set_render_target_size_multiplier(param_1);
    return;
  }
  return;
}



/* OpenXRInterface::is_foveation_supported() const */

undefined8 __thiscall OpenXRInterface::is_foveation_supported(OpenXRInterface *this)

{
  undefined8 uVar1;
  
  if (*(long *)(this + 0x1a8) != 0) {
    uVar1 = OpenXRAPI::is_foveation_supported();
    return uVar1;
  }
  return 0;
}



/* OpenXRInterface::get_foveation_level() const */

undefined8 __thiscall OpenXRInterface::get_foveation_level(OpenXRInterface *this)

{
  undefined8 uVar1;
  
  if (*(long *)(this + 0x1a8) != 0) {
    uVar1 = OpenXRAPI::get_foveation_level();
    return uVar1;
  }
  return 0;
}



/* OpenXRInterface::set_foveation_level(int) */

void OpenXRInterface::set_foveation_level(int param_1)

{
  long lVar1;
  undefined4 in_register_0000003c;
  
  lVar1 = *(long *)(CONCAT44(in_register_0000003c,param_1) + 0x1a8);
  if (lVar1 != 0) {
    OpenXRAPI::set_foveation_level((int)lVar1);
    return;
  }
  return;
}



/* OpenXRInterface::get_foveation_dynamic() const */

undefined8 __thiscall OpenXRInterface::get_foveation_dynamic(OpenXRInterface *this)

{
  undefined8 uVar1;
  
  if (*(long *)(this + 0x1a8) != 0) {
    uVar1 = OpenXRAPI::get_foveation_dynamic();
    return uVar1;
  }
  return 0;
}



/* OpenXRInterface::set_foveation_dynamic(bool) */

void OpenXRInterface::set_foveation_dynamic(bool param_1)

{
  long lVar1;
  undefined7 in_register_00000039;
  
  lVar1 = *(long *)(CONCAT71(in_register_00000039,param_1) + 0x1a8);
  if (lVar1 != 0) {
    OpenXRAPI::set_foveation_dynamic(SUB81(lVar1,0));
    return;
  }
  return;
}



/* OpenXRInterface::get_render_target_size() */

undefined8 __thiscall OpenXRInterface::get_render_target_size(OpenXRInterface *this)

{
  undefined8 uVar1;
  
  if (*(long *)(this + 0x1a8) != 0) {
    uVar1 = OpenXRAPI::get_recommended_target_size();
    return uVar1;
  }
  return 0;
}



/* OpenXRInterface::get_camera_transform() */

void OpenXRInterface::get_camera_transform(void)

{
  float fVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  long lVar9;
  long in_RSI;
  undefined1 (*in_RDI) [16];
  float fVar10;
  
  lVar9 = XRServer::get_singleton();
  if (lVar9 != 0) {
    dVar4 = (double)XRServer::get_world_scale();
    fVar1 = *(float *)(in_RSI + 0x1ec);
    uVar3 = *(undefined8 *)(in_RSI + 0x1e4);
    fVar10 = (float)dVar4;
    uVar5 = *(undefined8 *)(in_RSI + 0x1d8);
    uVar2 = *(undefined4 *)(in_RSI + 0x1e0);
    uVar6 = *(undefined8 *)(in_RSI + 0x1c0);
    uVar7 = *(undefined8 *)(in_RSI + 0x1c8);
    *(undefined8 *)in_RDI[1] = *(undefined8 *)(in_RSI + 0x1d0);
    *(undefined8 *)(in_RDI[1] + 8) = uVar5;
    *(undefined8 *)*in_RDI = uVar6;
    *(undefined8 *)(*in_RDI + 8) = uVar7;
    *(undefined4 *)in_RDI[2] = uVar2;
    *(float *)(in_RDI[2] + 0xc) = fVar1 * fVar10;
    *(ulong *)(in_RDI[2] + 4) =
         CONCAT44((float)((ulong)uVar3 >> 0x20) * fVar10,(float)uVar3 * fVar10);
    return;
  }
  _err_print_error("get_camera_transform","modules/openxr/openxr_interface.cpp",0x3f0,
                   "Parameter \"xr_server\" is null.",0,0);
  uVar8 = _LC6;
  *(undefined4 *)in_RDI[2] = 0x3f800000;
  *(undefined8 *)(in_RDI[2] + 4) = 0;
  *(undefined4 *)(in_RDI[2] + 0xc) = 0;
  *in_RDI = ZEXT416(uVar8);
  in_RDI[1] = ZEXT416(uVar8);
  return;
}



/* OpenXRInterface::get_color_texture() */

undefined8 __thiscall OpenXRInterface::get_color_texture(OpenXRInterface *this)

{
  undefined8 uVar1;
  
  if (*(long *)(this + 0x1a8) != 0) {
    uVar1 = OpenXRAPI::get_color_texture();
    return uVar1;
  }
  return 0;
}



/* OpenXRInterface::get_depth_texture() */

undefined8 __thiscall OpenXRInterface::get_depth_texture(OpenXRInterface *this)

{
  undefined8 uVar1;
  
  if (*(long *)(this + 0x1a8) != 0) {
    uVar1 = OpenXRAPI::get_depth_texture();
    return uVar1;
  }
  return 0;
}



/* OpenXRInterface::get_velocity_texture() */

undefined8 __thiscall OpenXRInterface::get_velocity_texture(OpenXRInterface *this)

{
  undefined8 uVar1;
  
  if (*(long *)(this + 0x1a8) != 0) {
    uVar1 = OpenXRAPI::get_velocity_texture();
    return uVar1;
  }
  return 0;
}



/* OpenXRInterface::get_velocity_depth_texture() */

undefined8 __thiscall OpenXRInterface::get_velocity_depth_texture(OpenXRInterface *this)

{
  undefined8 uVar1;
  
  if (*(long *)(this + 0x1a8) != 0) {
    uVar1 = OpenXRAPI::get_velocity_depth_texture();
    return uVar1;
  }
  return 0;
}



/* OpenXRInterface::get_velocity_target_size() */

undefined8 __thiscall OpenXRInterface::get_velocity_target_size(OpenXRInterface *this)

{
  undefined8 uVar1;
  
  if (*(long *)(this + 0x1a8) != 0) {
    uVar1 = OpenXRAPI::get_velocity_target_size();
    return uVar1;
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OpenXRInterface::get_hand_joint_rotation(OpenXRInterface::Hand, OpenXRInterface::HandJoints)
   const */

undefined4 *
OpenXRInterface::get_hand_joint_rotation
          (undefined4 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  long lVar6;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  lVar6 = OpenXRHandTrackingExtension::get_singleton();
  if (lVar6 != 0) {
    cVar5 = OpenXRHandTrackingExtension::get_active();
    if (cVar5 != '\0') {
      OpenXRHandTrackingExtension::get_hand_joint_rotation(param_1,lVar6,param_3,param_4);
      goto LAB_0010064a;
    }
  }
  uVar4 = _UNK_00122e3c;
  uVar3 = _UNK_00122e38;
  uVar2 = _UNK_00122e34;
  *param_1 = __LC7;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
LAB_0010064a:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRInterface::get_hand_joint_position(OpenXRInterface::Hand, OpenXRInterface::HandJoints)
   const */

undefined1  [16] __thiscall
OpenXRInterface::get_hand_joint_position(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  long lVar1;
  char cVar2;
  long lVar3;
  long in_FS_OFFSET;
  undefined1 auVar4 [16];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = OpenXRHandTrackingExtension::get_singleton();
  if (lVar3 != 0) {
    cVar2 = OpenXRHandTrackingExtension::get_active();
    if (cVar2 != '\0') {
      if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
        auVar4 = OpenXRHandTrackingExtension::get_hand_joint_position(lVar3,param_2,param_3);
        return auVar4;
      }
      goto LAB_00100715;
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return ZEXT816(0);
  }
LAB_00100715:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRInterface::get_hand_joint_linear_velocity(OpenXRInterface::Hand,
   OpenXRInterface::HandJoints) const */

undefined1  [16] __thiscall
OpenXRInterface::get_hand_joint_linear_velocity
          (undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  long lVar1;
  char cVar2;
  long lVar3;
  long in_FS_OFFSET;
  undefined1 auVar4 [16];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = OpenXRHandTrackingExtension::get_singleton();
  if (lVar3 != 0) {
    cVar2 = OpenXRHandTrackingExtension::get_active();
    if (cVar2 != '\0') {
      if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
        auVar4 = OpenXRHandTrackingExtension::get_hand_joint_linear_velocity(lVar3,param_2,param_3);
        return auVar4;
      }
      goto LAB_001007a5;
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return ZEXT816(0);
  }
LAB_001007a5:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRInterface::get_hand_joint_angular_velocity(OpenXRInterface::Hand,
   OpenXRInterface::HandJoints) const */

undefined1  [16] __thiscall
OpenXRInterface::get_hand_joint_angular_velocity
          (undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  long lVar1;
  char cVar2;
  long lVar3;
  long in_FS_OFFSET;
  undefined1 auVar4 [16];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = OpenXRHandTrackingExtension::get_singleton();
  if (lVar3 != 0) {
    cVar2 = OpenXRHandTrackingExtension::get_active();
    if (cVar2 != '\0') {
      if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
        auVar4 = OpenXRHandTrackingExtension::get_hand_joint_angular_velocity(lVar3,param_2,param_3)
        ;
        return auVar4;
      }
      goto LAB_00100835;
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return ZEXT816(0);
  }
LAB_00100835:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRInterface::pre_render() */

void __thiscall OpenXRInterface::pre_render(OpenXRInterface *this)

{
  if (*(long *)(this + 0x1a8) != 0) {
    OpenXRAPI::pre_render();
    return;
  }
  return;
}



/* OpenXRInterface::pre_draw_viewport(RID) */

undefined8 OpenXRInterface::pre_draw_viewport(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x1a8) != 0) {
    uVar1 = OpenXRAPI::pre_draw_viewport();
    return uVar1;
  }
  return 0;
}



/* OpenXRInterface::end_frame() */

void __thiscall OpenXRInterface::end_frame(OpenXRInterface *this)

{
  if (*(long *)(this + 0x1a8) != 0) {
    OpenXRAPI::end_frame();
    return;
  }
  return;
}



/* OpenXRInterface::is_passthrough_supported() */

ulong __thiscall OpenXRInterface::is_passthrough_supported(OpenXRInterface *this)

{
  int iVar1;
  undefined8 unaff_R12;
  long in_FS_OFFSET;
  Variant local_40 [8];
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(*(long *)this + 0x278))(local_40,this);
  Variant::Variant((Variant *)local_38,2);
  iVar1 = Array::find(local_40,(int)(Variant *)local_38);
  if (Variant::needs_deinit[local_38[0]] != '\0') {
    Variant::_clear_internal();
  }
  Array::~Array((Array *)local_40);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return CONCAT71((int7)((ulong)unaff_R12 >> 8),iVar1 != 0) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRInterface::set_motion_range(OpenXRInterface::Hand, OpenXRInterface::HandMotionRange) */

void __thiscall OpenXRInterface::set_motion_range(undefined8 param_1,uint param_2,uint param_3)

{
  char cVar1;
  long lVar2;
  
  if (param_2 < 2) {
    if (param_3 < 2) {
      lVar2 = OpenXRHandTrackingExtension::get_singleton();
      if (lVar2 != 0) {
        cVar1 = OpenXRHandTrackingExtension::get_active();
        if (cVar1 != '\0') {
          OpenXRHandTrackingExtension::set_motion_range(lVar2,param_2,(param_3 == 1) + '\x01');
          return;
        }
      }
    }
    else {
      _err_print_index_error
                ("set_motion_range","modules/openxr/openxr_interface.cpp",0x564,(ulong)param_3,2,
                 "p_motion_range","HAND_MOTION_RANGE_MAX","",false,false);
    }
  }
  else {
    _err_print_index_error
              ("set_motion_range","modules/openxr/openxr_interface.cpp",0x563,(ulong)param_2,2,
               "p_hand","HAND_MAX","",false,false);
  }
  return;
}



/* OpenXRInterface::get_motion_range(OpenXRInterface::Hand) const */

undefined8 __thiscall OpenXRInterface::get_motion_range(undefined8 param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  
  if (param_2 < 2) {
    lVar3 = OpenXRHandTrackingExtension::get_singleton();
    if ((lVar3 != 0) && (cVar1 = OpenXRHandTrackingExtension::get_active(), cVar1 != '\0')) {
      iVar2 = OpenXRHandTrackingExtension::get_motion_range(lVar3,param_2);
      if (iVar2 == 1) {
        return 0;
      }
      if (iVar2 == 2) {
        return 1;
      }
      _err_print_error("get_motion_range","modules/openxr/openxr_interface.cpp",0x587,
                       "Method/function failed. Returning: HAND_MOTION_RANGE_MAX",
                       "Unknown motion range returned by OpenXR",0,0);
    }
  }
  else {
    _err_print_index_error
              ("get_motion_range","modules/openxr/openxr_interface.cpp",0x57b,(ulong)param_2,2,
               "p_hand","HAND_MAX","",false,false);
  }
  return 2;
}



/* OpenXRInterface::get_hand_tracking_source(OpenXRInterface::Hand) const */

undefined8 __thiscall OpenXRInterface::get_hand_tracking_source(undefined8 param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (1 < param_2) {
    _err_print_index_error
              ("get_hand_tracking_source","modules/openxr/openxr_interface.cpp",0x58f,(ulong)param_2
               ,2,"p_hand","HAND_MAX","",false,false);
    return 0;
  }
  lVar3 = OpenXRHandTrackingExtension::get_singleton();
  if ((lVar3 != 0) && (cVar1 = OpenXRHandTrackingExtension::get_active(), cVar1 != '\0')) {
    uVar4 = OpenXRHandTrackingExtension::get_hand_tracking_source(lVar3,param_2);
    iVar2 = (int)uVar4;
    if (iVar2 == 1) {
      return uVar4;
    }
    if (iVar2 == 2) {
      return uVar4;
    }
    if (iVar2 != 0) {
      _err_print_error("get_hand_tracking_source","modules/openxr/openxr_interface.cpp",0x59c,
                       "Method/function failed. Returning: HAND_TRACKED_SOURCE_UNKNOWN",
                       "Unknown hand tracking source returned by OpenXR",0,0);
      return 0;
    }
  }
  return 0;
}



/* OpenXRInterface::get_hand_joint_flags(OpenXRInterface::Hand, OpenXRInterface::HandJoints) const
    */

ulong __thiscall
OpenXRInterface::get_hand_joint_flags(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  lVar3 = OpenXRHandTrackingExtension::get_singleton();
  if (lVar3 != 0) {
    cVar1 = OpenXRHandTrackingExtension::get_active();
    if (cVar1 != '\0') {
      uVar2 = OpenXRHandTrackingExtension::get_hand_joint_location_flags(lVar3,param_2,param_3);
      uVar5 = (ulong)(uVar2 & 1);
      if ((uVar2 & 4) != 0) {
        uVar5 = (ulong)(uVar2 & 1) | 2;
      }
      uVar4 = uVar5 | 4;
      if ((uVar2 & 2) == 0) {
        uVar4 = uVar5;
      }
      if ((uVar2 & 8) != 0) {
        uVar4 = uVar4 | 8;
      }
      uVar2 = OpenXRHandTrackingExtension::get_hand_joint_velocity_flags(lVar3,param_2,param_3);
      uVar4 = (ulong)(uVar2 & 1) << 4 | uVar4;
      if ((uVar2 & 2) != 0) {
        uVar4 = uVar4 | 0x20;
      }
      return uVar4;
    }
  }
  return 0;
}



/* OpenXRInterface::get_hand_joint_radius(OpenXRInterface::Hand, OpenXRInterface::HandJoints) const
    */

undefined8 __thiscall
OpenXRInterface::get_hand_joint_radius(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = OpenXRHandTrackingExtension::get_singleton();
  if (lVar2 != 0) {
    cVar1 = OpenXRHandTrackingExtension::get_active();
    if (cVar1 != '\0') {
      uVar3 = OpenXRHandTrackingExtension::get_hand_joint_radius(lVar2,param_2,param_3);
      return uVar3;
    }
  }
  return 0;
}



/* OpenXRInterface::set_play_area_mode(XRInterface::PlayAreaMode) */

undefined4 __thiscall OpenXRInterface::set_play_area_mode(OpenXRInterface *this,int param_2)

{
  undefined4 uVar1;
  long lVar2;
  
  if (*(long *)(this + 0x1a8) == 0) {
    _err_print_error("set_play_area_mode","modules/openxr/openxr_interface.cpp",0x2e3,
                     "Parameter \"openxr_api\" is null.",0,0);
  }
  else if ((param_2 - 2U < 3) &&
          (uVar1 = OpenXRAPI::set_requested_reference_space
                             (*(long *)(this + 0x1a8),
                              *(undefined4 *)(CSWTCH_1649 + (ulong)(param_2 - 2U) * 4)),
          (char)uVar1 != '\0')) {
    lVar2 = XRServer::get_singleton();
    if (lVar2 == 0) {
      return uVar1;
    }
    XRServer::clear_reference_frame();
    return uVar1;
  }
  return 0;
}



/* OpenXRInterface::get_render_region() */

undefined8 __thiscall OpenXRInterface::get_render_region(OpenXRInterface *this)

{
  undefined8 uVar1;
  
  if (*(long *)(this + 0x1a8) != 0) {
    uVar1 = OpenXRAPI::get_render_region();
    return uVar1;
  }
  return 0;
}



/* OpenXRInterface::set_display_refresh_rate(float) */

void __thiscall OpenXRInterface::set_display_refresh_rate(OpenXRInterface *this,float param_1)

{
  char cVar1;
  
  if (*(long *)(this + 0x1a8) != 0) {
    cVar1 = OpenXRAPI::is_initialized();
    if (cVar1 != '\0') {
      OpenXRAPI::set_display_refresh_rate(param_1);
      return;
    }
  }
  return;
}



/* OpenXRInterface::get_display_refresh_rate() const */

undefined8 __thiscall OpenXRInterface::get_display_refresh_rate(OpenXRInterface *this)

{
  char cVar1;
  undefined8 uVar2;
  
  if (*(long *)(this + 0x1a8) != 0) {
    cVar1 = OpenXRAPI::is_initialized();
    if (cVar1 != '\0') {
      uVar2 = OpenXRAPI::get_display_refresh_rate();
      return uVar2;
    }
  }
  return 0;
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



/* CowData<OpenXRInterface::Action*>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<OpenXRInterface::Action*>::_copy_on_write(CowData<OpenXRInterface::Action*> *this)

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



/* CowData<OpenXRInterface::ActionSet*>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<OpenXRInterface::ActionSet*>::_copy_on_write(CowData<OpenXRInterface::ActionSet*> *this)

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



/* OpenXRInterface::get_transform_for_view(unsigned int, Transform3D const&) */

Transform3D * OpenXRInterface::get_transform_for_view(uint param_1,Transform3D *param_2)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  Transform3D *in_RCX;
  uint in_EDX;
  Transform3D *pTVar4;
  undefined4 in_register_0000003c;
  Transform3D *this;
  ulong uVar5;
  long in_FS_OFFSET;
  ulong local_d8;
  ulong local_c8;
  Transform3D local_78 [56];
  long local_40;
  
  this = (Transform3D *)CONCAT44(in_register_0000003c,param_1);
  pTVar4 = (Transform3D *)(ulong)in_EDX;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = XRServer::get_singleton();
  if (lVar3 == 0) {
    _err_print_error("get_transform_for_view","modules/openxr/openxr_interface.cpp",0x3ff,
                     "Parameter \"xr_server\" is null.",0,0);
    uVar2 = _LC6;
    *(undefined4 *)(this + 0x20) = 0x3f800000;
    *(undefined8 *)(this + 0x24) = 0;
    *(undefined4 *)(this + 0x2c) = 0;
    *(undefined1 (*) [16])this = ZEXT416(uVar2);
    *(undefined1 (*) [16])(this + 0x10) = ZEXT416(uVar2);
    goto LAB_0010150b;
  }
  if (*(code **)(*(long *)param_2 + 0x1f0) == get_view_count) {
    if (1 < in_EDX) {
LAB_001015c0:
      uVar5 = 2;
LAB_001015c6:
      _err_print_index_error
                ("get_transform_for_view","modules/openxr/openxr_interface.cpp",0x400,(long)pTVar4,
                 uVar5,"p_view","get_view_count()","View index outside bounds.",false,false);
      *(undefined4 *)(this + 0x20) = 0x3f800000;
      uVar2 = _LC6;
      *(undefined8 *)(this + 0x24) = 0;
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])this = ZEXT416(uVar2);
      *(undefined1 (*) [16])(this + 0x10) = ZEXT416(uVar2);
      goto LAB_0010150b;
    }
  }
  else {
    uVar2 = (**(code **)(*(long *)param_2 + 0x1f0))(param_2);
    if (uVar2 <= in_EDX) {
      if (*(code **)(*(long *)param_2 + 0x1f0) == get_view_count) goto LAB_001015c0;
      uVar2 = (**(code **)(*(long *)param_2 + 0x1f0))(param_2);
      uVar5 = (ulong)uVar2;
      goto LAB_001015c6;
    }
  }
  uVar2 = _LC6;
  if ((*(long *)(param_2 + 0x1a8) != 0) &&
     (cVar1 = OpenXRAPI::get_view_transform((uint)*(long *)(param_2 + 0x1a8),pTVar4), cVar1 != '\0')
     ) {
    local_d8 = (ulong)uVar2;
    local_c8 = (ulong)uVar2;
    lVar3 = (long)pTVar4 * 0x30;
    *(ulong *)(param_2 + lVar3 + 0x20c) = local_d8;
    *(undefined8 *)(param_2 + lVar3 + 0x214) = 0;
    *(ulong *)(param_2 + lVar3 + 0x21c) = local_c8;
    *(undefined8 *)(param_2 + lVar3 + 0x224) = 0;
    *(undefined8 *)(param_2 + lVar3 + 0x22c) = 0x3f800000;
    *(undefined8 *)(param_2 + lVar3 + 0x234) = 0;
  }
  XRServer::get_world_scale();
  XRServer::get_reference_frame();
  Transform3D::operator*(local_78,in_RCX);
  Transform3D::operator*(this,local_78);
LAB_0010150b:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* OpenXRInterface::get_projection_for_view(unsigned int, double, double, double) */

Projection *
OpenXRInterface::get_projection_for_view(uint param_1,double param_2,double param_3,double param_4)

{
  char cVar1;
  uint uVar2;
  uint in_EDX;
  long *in_RSI;
  undefined4 in_register_0000003c;
  Projection *this;
  ulong uVar3;
  
  this = (Projection *)CONCAT44(in_register_0000003c,param_1);
  Projection::Projection(this);
  if (*(code **)(*in_RSI + 0x1f0) == get_view_count) {
    if (in_EDX < 2) {
LAB_0010167d:
      if ((in_RSI[0x35] != 0) &&
         (cVar1 = OpenXRAPI::get_view_projection
                            ((uint)in_RSI[0x35],param_3,param_4,(Projection *)(ulong)in_EDX),
         cVar1 != '\0')) {
        return this;
      }
      Projection::set_for_hmd
                (param_1,_LC6,_LC39,_LC38,_LC37,_LC67._4_4_,(float)param_3,(float)param_4);
      return this;
    }
  }
  else {
    uVar2 = (**(code **)(*in_RSI + 0x1f0))();
    if (in_EDX < uVar2) goto LAB_0010167d;
    if (*(code **)(*in_RSI + 0x1f0) != get_view_count) {
      uVar2 = (**(code **)(*in_RSI + 0x1f0))();
      uVar3 = (ulong)uVar2;
      goto LAB_00101746;
    }
  }
  uVar3 = 2;
LAB_00101746:
  _err_print_index_error
            ("get_projection_for_view","modules/openxr/openxr_interface.cpp",0x414,
             (long)(ulong)in_EDX,uVar3,"p_view","get_view_count()","View index outside bounds.",
             false,false);
  return this;
}



/* OpenXRInterface::start_passthrough() */

undefined8 __thiscall OpenXRInterface::start_passthrough(OpenXRInterface *this)

{
  undefined8 uVar1;
  
  if (*(code **)(*(long *)this + 0x288) != set_environment_blend_mode) {
                    /* WARNING: Could not recover jumptable at 0x001017cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*(long *)this + 0x288))(this,2);
    return uVar1;
  }
  if (*(long *)(this + 0x1a8) != 0) {
    uVar1 = OpenXRAPI::set_environment_blend_mode(*(long *)(this + 0x1a8),3);
    return uVar1;
  }
  return 0;
}



/* OpenXRInterface::is_passthrough_enabled() */

bool __thiscall OpenXRInterface::is_passthrough_enabled(OpenXRInterface *this)

{
  int iVar1;
  
  if (*(code **)(*(long *)this + 0x280) != get_environment_blend_mode) {
    iVar1 = (**(code **)(*(long *)this + 0x280))();
    return iVar1 == 2;
  }
  if (*(long *)(this + 0x1a8) != 0) {
    return *(int *)(*(long *)(this + 0x1a8) + 0xb0) == 3;
  }
  return false;
}



/* OpenXRInterface::stop_passthrough() */

void __thiscall OpenXRInterface::stop_passthrough(OpenXRInterface *this)

{
  if (*(code **)(*(long *)this + 0x288) != set_environment_blend_mode) {
                    /* WARNING: Could not recover jumptable at 0x0010186a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 0x288))(this,0);
    return;
  }
  if (*(long *)(this + 0x1a8) != 0) {
    OpenXRAPI::set_environment_blend_mode(*(long *)(this + 0x1a8),1);
    return;
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



/* CowData<OpenXRInterface::Tracker*>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<OpenXRInterface::Tracker*>::_copy_on_write(CowData<OpenXRInterface::Tracker*> *this)

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



/* OpenXRInterface::is_action_set_active(String const&) const */

String __thiscall OpenXRInterface::is_action_set_active(OpenXRInterface *this,String *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  String *this_00;
  long lVar3;
  char cVar4;
  String SVar5;
  undefined8 *puVar6;
  long in_FS_OFFSET;
  long local_38;
  long local_30;
  
  puVar6 = *(undefined8 **)(this + 0x428);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (puVar6 != (undefined8 *)0x0) {
    puVar2 = puVar6 + puVar6[-1];
    for (; puVar2 != puVar6; puVar6 = puVar6 + 1) {
      this_00 = (String *)*puVar6;
      cVar4 = String::operator==(this_00,param_1);
      if (cVar4 != '\0') {
        SVar5 = this_00[8];
        goto LAB_00101bd4;
      }
    }
  }
  operator+((char *)&local_38,(String *)"OpenXR: Unknown action set ");
  _err_print_error("is_action_set_active","modules/openxr/openxr_interface.cpp",0x372,&local_38,0,1)
  ;
  lVar3 = local_38;
  if (local_38 != 0) {
    LOCK();
    plVar1 = (long *)(local_38 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_38 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  SVar5 = (String)0x0;
LAB_00101bd4:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return SVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRInterface::set_action_set_active(String const&, bool) */

void __thiscall
OpenXRInterface::set_action_set_active(OpenXRInterface *this,String *param_1,bool param_2)

{
  long *plVar1;
  String *this_00;
  long lVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long in_FS_OFFSET;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  CowData<OpenXRInterface::ActionSet*>::_copy_on_write
            ((CowData<OpenXRInterface::ActionSet*> *)(this + 0x428));
  puVar4 = *(undefined8 **)(this + 0x428);
  CowData<OpenXRInterface::ActionSet*>::_copy_on_write
            ((CowData<OpenXRInterface::ActionSet*> *)(this + 0x428));
  puVar5 = *(undefined8 **)(this + 0x428);
  if (puVar5 != (undefined8 *)0x0) {
    puVar5 = puVar5 + puVar5[-1];
  }
  do {
    if (puVar4 == puVar5) {
      operator+((char *)&local_38,(String *)"OpenXR: Unknown action set ");
      _err_print_error("set_action_set_active","modules/openxr/openxr_interface.cpp",0x37e,&local_38
                       ,0,1);
      lVar2 = local_38;
      if (local_38 != 0) {
        LOCK();
        plVar1 = (long *)(local_38 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_38 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
LAB_00101c97:
      if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    this_00 = (String *)*puVar4;
    cVar3 = String::operator==(this_00,param_1);
    if (cVar3 != '\0') {
      this_00[8] = (String)param_2;
      goto LAB_00101c97;
    }
    puVar4 = puVar4 + 1;
  } while( true );
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



/* OpenXRInterface::find_action(String const&) */

undefined8 __thiscall OpenXRInterface::find_action(OpenXRInterface *this,String *param_1)

{
  code *pcVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar3 = *(long *)(this + 0x428);
  if (lVar3 == 0) {
    return 0;
  }
  lVar5 = 0;
  while( true ) {
    if (*(long *)(lVar3 + -8) <= lVar5) {
      return 0;
    }
    if (lVar3 == 0) break;
    lVar4 = 0;
    while( true ) {
      lVar6 = *(long *)(lVar3 + -8);
      if (lVar6 <= lVar5) goto LAB_00101f03;
      lVar6 = *(long *)(*(long *)(lVar3 + lVar5 * 8) + 0x18);
      if ((lVar6 == 0) || (*(long *)(lVar6 + -8) <= lVar4)) break;
      cVar2 = String::operator==(*(String **)(lVar6 + lVar4 * 8),param_1);
      lVar3 = *(long *)(this + 0x428);
      if (cVar2 != '\0') {
        if (lVar3 == 0) {
          lVar6 = 0;
        }
        else {
          lVar6 = *(long *)(lVar3 + -8);
          if (lVar5 < lVar6) {
            lVar3 = *(long *)(*(long *)(lVar3 + lVar5 * 8) + 0x18);
            if (lVar3 == 0) {
              lVar5 = 0;
            }
            else {
              lVar5 = *(long *)(lVar3 + -8);
              if (lVar4 < lVar5) {
                return *(undefined8 *)(lVar3 + lVar4 * 8);
              }
            }
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,lVar4,lVar5,"p_index","size()","",
                       false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
        }
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar5,lVar6,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      lVar4 = lVar4 + 1;
      if (lVar3 == 0) goto LAB_00101f00;
    }
    lVar5 = lVar5 + 1;
    if (lVar3 == 0) {
      return 0;
    }
  }
LAB_00101f00:
  lVar6 = 0;
LAB_00101f03:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,lVar5,lVar6,"p_index","size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* OpenXRInterface::handle_tracker(OpenXRInterface::Tracker*) */

void __thiscall OpenXRInterface::handle_tracker(OpenXRInterface *this,Tracker *param_1)

{
  uint uVar1;
  String *pSVar2;
  StringName *pSVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  char *pcVar7;
  undefined8 uVar8;
  long lVar9;
  long in_FS_OFFSET;
  float fVar10;
  StringName *local_b0;
  long local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x1a8) == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar8 = 0x20a;
      pcVar7 = "Parameter \"openxr_api\" is null.";
LAB_0010236a:
      _err_print_error("handle_tracker","modules/openxr/openxr_interface.cpp",uVar8,pcVar7,0,0);
      return;
    }
  }
  else if (*(long *)(param_1 + 0x18) == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar8 = 0x20b;
      pcVar7 = "Condition \"p_tracker->controller_tracker.is_null()\" is true.";
      goto LAB_0010236a;
    }
  }
  else {
    if ((*(long *)(param_1 + 0x28) != 0) && (lVar6 = *(long *)(param_1 + 0x10), lVar6 != 0)) {
      lVar9 = 0;
      do {
        if (*(long *)(lVar6 + -8) <= lVar9) break;
        pSVar2 = *(String **)(lVar6 + lVar9 * 8);
        uVar1 = *(uint *)(pSVar2 + 8);
        if (uVar1 == 2) {
          local_84 = OpenXRAPI::get_action_vector2
                               (*(undefined8 *)(this + 0x1a8),*(undefined8 *)(pSVar2 + 0x10),
                                *(undefined8 *)(param_1 + 0x20));
          local_b0 = *(StringName **)(param_1 + 0x18);
          Variant::Variant((Variant *)local_78,(Vector2 *)&local_84);
LAB_001020c3:
          StringName::StringName((StringName *)&local_98,pSVar2,false);
          XRPositionalTracker::set_input(local_b0,(Variant *)&local_98);
          if ((StringName::configured != '\0') && (local_98 != 0)) {
            StringName::unref();
          }
          if (Variant::needs_deinit[(int)local_78._0_4_] == '\0') {
LAB_00102114:
            lVar6 = *(long *)(param_1 + 0x10);
          }
          else {
            Variant::_clear_internal();
            lVar6 = *(long *)(param_1 + 0x10);
          }
        }
        else {
          if (uVar1 < 3) {
            if (uVar1 == 0) {
              bVar4 = (bool)OpenXRAPI::get_action_bool
                                      (*(undefined8 *)(this + 0x1a8),*(undefined8 *)(pSVar2 + 0x10),
                                       *(undefined8 *)(param_1 + 0x20));
              local_b0 = *(StringName **)(param_1 + 0x18);
              Variant::Variant((Variant *)local_78,bVar4);
            }
            else {
              fVar10 = (float)OpenXRAPI::get_action_float
                                        (*(undefined8 *)(this + 0x1a8),
                                         *(undefined8 *)(pSVar2 + 0x10),
                                         *(undefined8 *)(param_1 + 0x20));
              local_b0 = *(StringName **)(param_1 + 0x18);
              Variant::Variant((Variant *)local_78,fVar10);
            }
            goto LAB_001020c3;
          }
          if (uVar1 == 3) {
            local_58 = 0x3f800000;
            local_54 = 0;
            local_4c = 0;
            local_90 = 0;
            local_88 = 0;
            local_84 = 0;
            local_7c = 0;
            local_78 = ZEXT416(_LC6);
            local_68 = ZEXT416(_LC6);
            iVar5 = OpenXRAPI::get_action_pose
                              (*(undefined8 *)(this + 0x1a8),*(undefined8 *)(pSVar2 + 0x10),
                               *(undefined8 *)(param_1 + 0x20),local_78,&local_90,
                               (Vector2 *)&local_84);
            if (iVar5 == 0) {
              pSVar3 = *(StringName **)(param_1 + 0x18);
              StringName::StringName((StringName *)&local_98,pSVar2,false);
              XRPositionalTracker::invalidate_pose(pSVar3);
              if ((StringName::configured != '\0') && (local_98 != 0)) {
                StringName::unref();
              }
            }
            else {
              uVar8 = *(undefined8 *)(param_1 + 0x18);
              StringName::StringName((StringName *)&local_98,pSVar2,false);
              XRPositionalTracker::set_pose
                        (uVar8,(StringName *)&local_98,local_78,&local_90,(Vector2 *)&local_84,iVar5
                        );
              if ((StringName::configured != '\0') && (local_98 != 0)) {
                StringName::unref();
                lVar6 = *(long *)(param_1 + 0x10);
                goto joined_r0x0010211f;
              }
            }
            goto LAB_00102114;
          }
        }
joined_r0x0010211f:
        lVar9 = lVar9 + 1;
      } while (lVar6 != 0);
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRInterface::free_interaction_profiles() */

void __thiscall OpenXRInterface::free_interaction_profiles(OpenXRInterface *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  if (*(long *)(this + 0x1a8) == 0) {
    _err_print_error("free_interaction_profiles","modules/openxr/openxr_interface.cpp",0x264,
                     "Parameter \"openxr_api\" is null.",0,0);
    return;
  }
  CowData<RID>::_copy_on_write((CowData<RID> *)(this + 0x438));
  lVar4 = *(long *)(this + 0x438);
  CowData<RID>::_copy_on_write((CowData<RID> *)(this + 0x438));
  lVar2 = *(long *)(this + 0x438);
  if (lVar2 == 0) {
    lVar5 = 0;
    if (lVar4 == 0) {
      return;
    }
  }
  else {
    lVar3 = *(long *)(lVar2 + -8);
    lVar5 = lVar2 + lVar3 * 8;
    if (lVar4 == lVar5) goto LAB_00102440;
  }
  do {
    lVar4 = lVar4 + 8;
    OpenXRAPI::interaction_profile_free(*(undefined8 *)(this + 0x1a8));
  } while (lVar5 != lVar4);
  lVar2 = *(long *)(this + 0x438);
  if (lVar2 == 0) {
    return;
  }
  lVar3 = *(long *)(lVar2 + -8);
LAB_00102440:
  if (lVar3 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar4 = *(long *)(this + 0x438);
      *(undefined8 *)(this + 0x438) = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
      return;
    }
    *(undefined8 *)(this + 0x438) = 0;
  }
  return;
}



/* OpenXRInterface::initialize_on_startup() const */

undefined8 __thiscall OpenXRInterface::initialize_on_startup(OpenXRInterface *this)

{
  undefined8 uVar1;
  
  if (*(long *)(this + 0x1a8) != 0) {
    uVar1 = OpenXRAPI::is_initialized();
    return uVar1;
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OpenXRInterface::_set_default_pos(Transform3D&, double, unsigned long) */

void __thiscall
OpenXRInterface::_set_default_pos
          (OpenXRInterface *this,Transform3D *param_1,double param_2,ulong param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  double dVar4;
  
  uVar3 = _UNK_00122e28;
  uVar2 = __LC6;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)param_1 = __LC6;
  *(undefined8 *)(param_1 + 8) = uVar3;
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  dVar4 = _LC55 * param_2;
  *(undefined8 *)(param_1 + 0x20) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(float *)(param_1 + 0x28) = (float)dVar4;
  if (param_3 == 1) {
    *(float *)(param_1 + 0x24) = (float)(param_2 * __LC56);
  }
  else if (param_3 == 2) {
    *(float *)(param_1 + 0x24) = (float)(param_2 * __LC57);
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRInterface::on_state_ready() */

void __thiscall OpenXRInterface::on_state_ready(OpenXRInterface *this)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (on_state_ready()::{lambda()#1}::operator()()::sname == '\0') {
    iVar2 = __cxa_guard_acquire(&on_state_ready()::{lambda()#1}::operator()()::sname);
    if (iVar2 != 0) {
      _scs_create((char *)&on_state_ready()::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&on_state_ready()::{lambda()#1}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&on_state_ready()::{lambda()#1}::operator()()::sname);
    }
  }
  (**(code **)(*(long *)this + 0xd0))(this,&on_state_ready()::{lambda()#1}::operator()()::sname,0,0)
  ;
  if (Variant::needs_deinit[0] != '\0') {
    Variant::_clear_internal();
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRInterface::on_state_visible() */

void __thiscall OpenXRInterface::on_state_visible(OpenXRInterface *this)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (on_state_visible()::{lambda()#1}::operator()()::sname == '\0') {
    iVar2 = __cxa_guard_acquire(&on_state_visible()::{lambda()#1}::operator()()::sname);
    if (iVar2 != 0) {
      _scs_create((char *)&on_state_visible()::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&on_state_visible()::{lambda()#1}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&on_state_visible()::{lambda()#1}::operator()()::sname);
    }
  }
  (**(code **)(*(long *)this + 0xd0))
            (this,&on_state_visible()::{lambda()#1}::operator()()::sname,0,0);
  if (Variant::needs_deinit[0] != '\0') {
    Variant::_clear_internal();
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRInterface::on_state_focused() */

void __thiscall OpenXRInterface::on_state_focused(OpenXRInterface *this)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (on_state_focused()::{lambda()#1}::operator()()::sname == '\0') {
    iVar2 = __cxa_guard_acquire(&on_state_focused()::{lambda()#1}::operator()()::sname);
    if (iVar2 != 0) {
      _scs_create((char *)&on_state_focused()::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&on_state_focused()::{lambda()#1}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&on_state_focused()::{lambda()#1}::operator()()::sname);
    }
  }
  (**(code **)(*(long *)this + 0xd0))
            (this,&on_state_focused()::{lambda()#1}::operator()()::sname,0,0);
  if (Variant::needs_deinit[0] != '\0') {
    Variant::_clear_internal();
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRInterface::on_state_stopping() */

void __thiscall OpenXRInterface::on_state_stopping(OpenXRInterface *this)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (on_state_stopping()::{lambda()#1}::operator()()::sname == '\0') {
    iVar2 = __cxa_guard_acquire(&on_state_stopping()::{lambda()#1}::operator()()::sname);
    if (iVar2 != 0) {
      _scs_create((char *)&on_state_stopping()::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&on_state_stopping()::{lambda()#1}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&on_state_stopping()::{lambda()#1}::operator()()::sname);
    }
  }
  (**(code **)(*(long *)this + 0xd0))
            (this,&on_state_stopping()::{lambda()#1}::operator()()::sname,0,0);
  if (Variant::needs_deinit[0] != '\0') {
    Variant::_clear_internal();
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRInterface::on_state_loss_pending() */

void __thiscall OpenXRInterface::on_state_loss_pending(OpenXRInterface *this)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (on_state_loss_pending()::{lambda()#1}::operator()()::sname == '\0') {
    iVar2 = __cxa_guard_acquire(&on_state_loss_pending()::{lambda()#1}::operator()()::sname);
    if (iVar2 != 0) {
      _scs_create((char *)&on_state_loss_pending()::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &on_state_loss_pending()::{lambda()#1}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&on_state_loss_pending()::{lambda()#1}::operator()()::sname);
    }
  }
  (**(code **)(*(long *)this + 0xd0))
            (this,&on_state_loss_pending()::{lambda()#1}::operator()()::sname,0,0);
  if (Variant::needs_deinit[0] != '\0') {
    Variant::_clear_internal();
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRInterface::on_state_exiting() */

void __thiscall OpenXRInterface::on_state_exiting(OpenXRInterface *this)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (on_state_exiting()::{lambda()#1}::operator()()::sname == '\0') {
    iVar2 = __cxa_guard_acquire(&on_state_exiting()::{lambda()#1}::operator()()::sname);
    if (iVar2 != 0) {
      _scs_create((char *)&on_state_exiting()::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&on_state_exiting()::{lambda()#1}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&on_state_exiting()::{lambda()#1}::operator()()::sname);
    }
  }
  (**(code **)(*(long *)this + 0xd0))
            (this,&on_state_exiting()::{lambda()#1}::operator()()::sname,0,0);
  if (Variant::needs_deinit[0] != '\0') {
    Variant::_clear_internal();
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRInterface::on_reference_space_change_pending() */

void __thiscall OpenXRInterface::on_reference_space_change_pending(OpenXRInterface *this)

{
  this[0x1b1] = (OpenXRInterface)0x1;
  return;
}



/* OpenXRInterface::on_refresh_rate_changes(float) */

void __thiscall OpenXRInterface::on_refresh_rate_changes(OpenXRInterface *this,float param_1)

{
  char cVar1;
  int iVar2;
  long in_FS_OFFSET;
  Variant *local_68 [2];
  int local_58 [6];
  undefined8 local_40;
  undefined1 local_38 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((on_refresh_rate_changes(float)::{lambda()#1}::operator()()::sname == '\0') &&
     (iVar2 = __cxa_guard_acquire(&on_refresh_rate_changes(float)::{lambda()#1}::operator()()::sname
                                 ), iVar2 != 0)) {
    _scs_create((char *)&on_refresh_rate_changes(float)::{lambda()#1}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &on_refresh_rate_changes(float)::{lambda()#1}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&on_refresh_rate_changes(float)::{lambda()#1}::operator()()::sname);
  }
  Variant::Variant((Variant *)local_58,param_1);
  local_40 = 0;
  local_38 = (undefined1  [16])0x0;
  local_68[0] = (Variant *)local_58;
  (**(code **)(*(long *)this + 0xd0))
            (this,&on_refresh_rate_changes(float)::{lambda()#1}::operator()()::sname,local_68,1);
  if (Variant::needs_deinit[(int)local_40] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OpenXRInterface::OpenXRInterface() */

void __thiscall OpenXRInterface::OpenXRInterface(OpenXRInterface *this)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  OpenXRInterface *pOVar5;
  long in_FS_OFFSET;
  undefined1 auVar6 [16];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  XRInterface::XRInterface((XRInterface *)this);
  *(undefined8 *)(this + 0x1a8) = 0;
  auVar6 = ZEXT416(_LC6);
  *(undefined ***)this = &PTR__initialize_classv_001221e0;
  *(undefined2 *)(this + 0x1b0) = 0;
  *(undefined8 *)(this + 0x1b8) = 0;
  *(undefined4 *)(this + 0x1e0) = 0x3f800000;
  *(undefined8 *)(this + 0x1e4) = 0;
  *(undefined4 *)(this + 0x1ec) = 0;
  *(undefined8 *)(this + 0x1f0) = 0;
  *(undefined4 *)(this + 0x1f8) = 0;
  *(undefined8 *)(this + 0x1fc) = 0;
  *(undefined4 *)(this + 0x204) = 0;
  *(undefined4 *)(this + 0x22c) = 0x3f800000;
  *(undefined8 *)(this + 0x230) = 0;
  *(undefined4 *)(this + 0x238) = 0;
  *(undefined4 *)(this + 0x25c) = 0x3f800000;
  *(undefined8 *)(this + 0x260) = 0;
  *(undefined4 *)(this + 0x268) = 0;
  *(undefined1 (*) [16])(this + 0x1c0) = auVar6;
  *(undefined1 (*) [16])(this + 0x1d0) = auVar6;
  *(undefined1 (*) [16])(this + 0x20c) = auVar6;
  *(undefined1 (*) [16])(this + 0x21c) = auVar6;
  *(undefined1 (*) [16])(this + 0x23c) = auVar6;
  *(undefined1 (*) [16])(this + 0x24c) = auVar6;
  Object::Object((Object *)(this + 0x270));
  pOVar5 = OpenXRAPI::singleton;
  *(undefined8 *)(this + 0x3ec) = 0;
  *(code **)(this + 0x270) = operator_new;
  uVar2 = _LC66;
  *(undefined8 *)(this + 0x3f4) = 0;
  *(undefined8 *)(this + 0x3e4) = uVar2;
  this[0x3fc] = (OpenXRInterface)0x1;
  *(undefined8 *)(this + 0x400) = 0;
  *(undefined8 *)(this + 0x408) = 0;
  *(undefined8 *)(this + 0x418) = 0;
  *(undefined8 *)(this + 0x428) = 0;
  *(undefined8 *)(this + 0x438) = 0;
  *(undefined8 *)(this + 0x448) = 0;
  *(OpenXRInterface **)(this + 0x1a8) = pOVar5;
  if (pOVar5 != (OpenXRInterface *)0x0) {
    OpenXRAPI::set_xr_interface(pOVar5);
  }
  uVar4 = _UNK_00122e28;
  uVar3 = _LC67;
  uVar2 = CONCAT44(_UNK_00122e24,_LC6);
  *(undefined8 *)(this + 0x1c0) = uVar2;
  *(undefined8 *)(this + 0x1c8) = uVar4;
  *(undefined8 *)(this + 0x22c) = 0x3f800000;
  *(undefined8 *)(this + 0x234) = 0;
  *(undefined8 *)(this + 0x230) = uVar3;
  uVar3 = _LC68;
  *(undefined8 *)(this + 0x1e0) = 0x3f800000;
  *(undefined8 *)(this + 0x1e8) = 0;
  *(undefined8 *)(this + 0x25c) = 0x3f800000;
  *(undefined8 *)(this + 0x264) = 0;
  *(undefined4 *)(this + 0x1e8) = 0x3fc00000;
  *(undefined8 *)(this + 0x260) = uVar3;
  *(undefined8 *)(this + 0x1d0) = uVar2;
  *(undefined8 *)(this + 0x1d8) = uVar4;
  *(undefined8 *)(this + 0x20c) = uVar2;
  *(undefined8 *)(this + 0x214) = uVar4;
  *(undefined8 *)(this + 0x21c) = uVar2;
  *(undefined8 *)(this + 0x224) = uVar4;
  *(undefined8 *)(this + 0x23c) = uVar2;
  *(undefined8 *)(this + 0x244) = uVar4;
  *(undefined8 *)(this + 0x24c) = uVar2;
  *(undefined8 *)(this + 0x254) = uVar4;
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRInterface::get_system_info() */

void OpenXRInterface::get_system_info(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  Variant *pVVar5;
  long lVar6;
  long in_RSI;
  Dictionary *in_RDI;
  long in_FS_OFFSET;
  bool bVar7;
  undefined8 local_80;
  int local_78 [8];
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Dictionary::Dictionary(in_RDI);
  lVar2 = *(long *)(in_RSI + 0x1a8);
  if (lVar2 != 0) {
    local_80 = 0;
    plVar1 = (long *)(*(long *)(lVar2 + 0x88) + -0x10);
    if (*(long *)(lVar2 + 0x88) != 0) {
      do {
        lVar3 = *plVar1;
        if (lVar3 == 0) goto LAB_00102f8b;
        LOCK();
        lVar6 = *plVar1;
        bVar7 = lVar3 == lVar6;
        if (bVar7) {
          *plVar1 = lVar3 + 1;
          lVar6 = lVar3;
        }
        UNLOCK();
      } while (!bVar7);
      if (lVar6 != -1) {
        local_80 = *(undefined8 *)(lVar2 + 0x88);
      }
    }
LAB_00102f8b:
    Variant::Variant((Variant *)local_58,(String *)&local_80);
    if ((get_system_info()::{lambda()#1}::operator()()::sname == '\0') &&
       (iVar4 = __cxa_guard_acquire(&get_system_info()::{lambda()#1}::operator()()::sname),
       iVar4 != 0)) {
      _scs_create((char *)&get_system_info()::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&get_system_info()::{lambda()#1}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&get_system_info()::{lambda()#1}::operator()()::sname);
    }
    Variant::Variant((Variant *)local_78,
                     (StringName *)&get_system_info()::{lambda()#1}::operator()()::sname);
    pVVar5 = (Variant *)Dictionary::operator[]((Variant *)in_RDI);
    if (pVVar5 != (Variant *)local_58) {
      if (Variant::needs_deinit[*(int *)pVVar5] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)pVVar5 = 0;
      *(int *)pVVar5 = local_58[0];
      *(undefined8 *)(pVVar5 + 8) = local_50;
      *(undefined8 *)(pVVar5 + 0x10) = uStack_48;
      local_58[0] = 0;
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    lVar2 = *(long *)(in_RSI + 0x1a8);
    local_80 = 0;
    lVar3 = *(long *)(lVar2 + 0x90);
    plVar1 = (long *)(lVar3 + -0x10);
    if (lVar3 != 0) {
      do {
        lVar3 = *plVar1;
        if (lVar3 == 0) goto LAB_00103076;
        LOCK();
        lVar6 = *plVar1;
        bVar7 = lVar3 == lVar6;
        if (bVar7) {
          *plVar1 = lVar3 + 1;
          lVar6 = lVar3;
        }
        UNLOCK();
      } while (!bVar7);
      if (lVar6 != -1) {
        local_80 = *(undefined8 *)(lVar2 + 0x90);
      }
    }
LAB_00103076:
    Variant::Variant((Variant *)local_58,(String *)&local_80);
    if ((get_system_info()::{lambda()#2}::operator()()::sname == '\0') &&
       (iVar4 = __cxa_guard_acquire(&get_system_info()::{lambda()#2}::operator()()::sname),
       iVar4 != 0)) {
      _scs_create((char *)&get_system_info()::{lambda()#2}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&get_system_info()::{lambda()#2}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&get_system_info()::{lambda()#2}::operator()()::sname);
    }
    Variant::Variant((Variant *)local_78,
                     (StringName *)&get_system_info()::{lambda()#2}::operator()()::sname);
    pVVar5 = (Variant *)Dictionary::operator[]((Variant *)in_RDI);
    if (pVVar5 != (Variant *)local_58) {
      if (Variant::needs_deinit[*(int *)pVVar5] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)pVVar5 = 0;
      *(int *)pVVar5 = local_58[0];
      *(undefined8 *)(pVVar5 + 8) = local_50;
      *(undefined8 *)(pVVar5 + 0x10) = uStack_48;
      local_58[0] = 0;
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* OpenXRInterface::set_environment_blend_mode(XRInterface::EnvironmentBlendMode) */

undefined8 __thiscall OpenXRInterface::set_environment_blend_mode(OpenXRInterface *this,int param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  long lVar3;
  long in_FS_OFFSET;
  CowData<char32_t> local_40 [8];
  CowData<char32_t> local_38 [8];
  long local_30;
  
  lVar3 = *(long *)(this + 0x1a8);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar3 == 0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 0;
    }
  }
  else {
    uVar2 = 2;
    if (((param_2 != 1) && (uVar2 = 3, param_2 != 2)) && (uVar2 = 1, param_2 != 0)) {
      String::num_int64((long)local_40,param_2,true);
      operator+((char *)local_38,(String *)"Unknown blend mode requested: ");
      _err_print_error("set_environment_blend_mode","modules/openxr/openxr_interface.cpp",0x539,
                       local_38,0,1);
      CowData<char32_t>::_unref(local_38);
      CowData<char32_t>::_unref(local_40);
      lVar3 = *(long *)(this + 0x1a8);
    }
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar1 = OpenXRAPI::set_environment_blend_mode(lVar3,uVar2);
      return uVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar3);
}



/* OpenXRInterface::get_supported_environment_blend_modes() */

void OpenXRInterface::get_supported_environment_blend_modes(void)

{
  long *plVar1;
  int *piVar2;
  long lVar3;
  char *pcVar4;
  int iVar5;
  long in_RSI;
  Array *in_RDI;
  int *piVar6;
  long in_FS_OFFSET;
  long local_88;
  long local_80 [2];
  int *local_70;
  char *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Array::Array(in_RDI);
  if (*(long *)(in_RSI + 0x1a8) != 0) {
    OpenXRAPI::get_supported_environment_blend_modes();
    if (local_70 != (int *)0x0) {
      piVar2 = local_70 + *(long *)(local_70 + -2);
      for (piVar6 = local_70; piVar2 != piVar6; piVar6 = piVar6 + 1) {
        iVar5 = *piVar6;
        if (iVar5 == 2) {
          iVar5 = 1;
LAB_00103400:
          Variant::Variant((Variant *)local_58,iVar5);
          Array::push_back((Variant *)in_RDI);
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
        }
        else {
          if (iVar5 == 3) {
            iVar5 = 2;
            goto LAB_00103400;
          }
          if (iVar5 == 1) {
            iVar5 = 0;
            goto LAB_00103400;
          }
          String::num_int64((long)&local_88,iVar5,true);
          local_68 = "Unsupported blend mode found: %s.";
          local_80[0] = 0;
          local_60 = 0x21;
          String::parse_latin1((StrRange *)local_80);
          vformat<String>(&local_68,(StrRange *)local_80,&local_88);
          _err_print_error("get_supported_environment_blend_modes",
                           "modules/openxr/openxr_interface.cpp",0x50b,&local_68,0,1);
          pcVar4 = local_68;
          if (local_68 != (char *)0x0) {
            LOCK();
            plVar1 = (long *)(local_68 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_68 = (char *)0x0;
              Memory::free_static(pcVar4 + -0x10,false);
            }
          }
          lVar3 = local_80[0];
          if (local_80[0] != 0) {
            LOCK();
            plVar1 = (long *)(local_80[0] + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_80[0] = 0;
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
        }
      }
    }
    iVar5 = OpenXRAPI::is_environment_blend_mode_alpha_blend_supported();
    if (iVar5 == 2) {
      Variant::Variant((Variant *)local_58,2);
      Array::push_back((Variant *)in_RDI);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
    }
    piVar2 = local_70;
    if (local_70 != (int *)0x0) {
      LOCK();
      plVar1 = (long *)(local_70 + -4);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_70 = (int *)0x0;
        Memory::free_static(piVar2 + -4,false);
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRInterface::tracker_profile_changed(RID, RID) */

void __thiscall
OpenXRInterface::tracker_profile_changed(OpenXRInterface *this,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  String *pSVar3;
  bool bVar4;
  char cVar5;
  long lVar6;
  long in_FS_OFFSET;
  CowData<char32_t> local_90 [8];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  lVar1 = *(long *)(this + 0x448);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((lVar1 != 0) && (0 < *(long *)(lVar1 + -8))) {
    lVar6 = 1;
    do {
      lVar2 = *(long *)(lVar1 + -8 + lVar6 * 8);
      if (param_2 == *(long *)(lVar2 + 0x20)) {
        *(long *)(lVar2 + 0x28) = param_3;
        if (param_3 == 0) {
          cVar5 = is_print_verbose_enabled();
          if (cVar5 != '\0') {
            local_68 = "/interaction_profiles/none";
            local_78 = 0;
            local_60 = 0x1a;
            String::parse_latin1((StrRange *)&local_78);
            local_68 = " changed to ";
            local_88 = 0;
            local_60 = 0xc;
            String::parse_latin1((StrRange *)&local_88);
            operator+((char *)local_90,(String *)"OpenXR: Interaction profile for ");
            String::operator+((String *)&local_80,(String *)local_90);
            String::operator+((String *)&local_70,(String *)&local_80);
            Variant::Variant((Variant *)local_58,(String *)&local_70);
            stringify_variants((Variant *)&local_68);
            __print_line((String *)&local_68);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
            if (Variant::needs_deinit[local_58[0]] != '\0') {
              Variant::_clear_internal();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
            CowData<char32_t>::_unref(local_90);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
          }
          pSVar3 = *(String **)(lVar2 + 0x18);
          local_68 = "/interaction_profiles/none";
          local_70 = 0;
          local_60 = 0x1a;
          String::parse_latin1((StrRange *)&local_70);
          XRPositionalTracker::set_tracker_profile(pSVar3);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        }
        else {
          OpenXRAPI::interaction_profile_get_name(local_90,*(undefined8 *)(this + 0x1a8));
          cVar5 = is_print_verbose_enabled();
          if (cVar5 != '\0') {
            local_80 = 0;
            local_60 = 0xc;
            local_68 = " changed to ";
            String::parse_latin1((StrRange *)&local_80);
            operator+((char *)&local_88,(String *)"OpenXR: Interaction profile for ");
            String::operator+((String *)&local_78,(String *)&local_88);
            String::operator+((String *)&local_70,(String *)&local_78);
            Variant::Variant((Variant *)local_58,(String *)&local_70);
            stringify_variants((Variant *)&local_68);
            __print_line((String *)&local_68);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
            if (Variant::needs_deinit[local_58[0]] != '\0') {
              Variant::_clear_internal();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
          }
          XRPositionalTracker::set_tracker_profile(*(String **)(lVar2 + 0x18));
          CowData<char32_t>::_unref(local_90);
        }
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          return;
        }
        goto LAB_001039b9;
      }
      bVar4 = lVar6 < *(long *)(lVar1 + -8);
      lVar6 = lVar6 + 1;
    } while (bVar4);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    _err_print_error("tracker_profile_changed","modules/openxr/openxr_interface.cpp",0x1fb,
                     "Parameter \"tracker\" is null.",0,0);
    return;
  }
LAB_001039b9:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRInterface::get_vrs_texture() */

undefined8 __thiscall OpenXRInterface::get_vrs_texture(OpenXRInterface *this)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long in_FS_OFFSET;
  float fVar8;
  long local_70 [2];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = 0;
  if (*(long *)(this + 0x1a8) != 0) {
    local_70[0] = 0;
    if (*(code **)(*(long *)this + 0x1e8) == get_render_target_size) {
      local_60 = OpenXRAPI::get_recommended_target_size();
    }
    else {
      local_60 = (**(code **)(*(long *)this + 0x1e8))(this);
    }
    iVar3 = 2;
    fVar8 = (float)local_60 / local_60._4_4_;
    if ((*(code **)(*(long *)this + 0x1f0) == get_view_count) ||
       (iVar3 = (**(code **)(*(long *)this + 0x1f0))(this), iVar3 != 0)) {
      iVar5 = 0;
      do {
        uVar4 = OpenXRAPI::get_eye_focus((uint)*(undefined8 *)(this + 0x1a8),fVar8);
        if (local_70[0] == 0) {
          lVar6 = 1;
        }
        else {
          lVar6 = *(long *)(local_70[0] + -8) + 1;
        }
        iVar2 = CowData<Vector2>::resize<false>((CowData<Vector2> *)local_70,lVar6);
        if (iVar2 == 0) {
          if (local_70[0] == 0) {
            lVar7 = -1;
            lVar6 = 0;
          }
          else {
            lVar6 = *(long *)(local_70[0] + -8);
            lVar7 = lVar6 + -1;
            if (-1 < lVar7) {
              CowData<Vector2>::_copy_on_write((CowData<Vector2> *)local_70);
              *(undefined8 *)(local_70[0] + lVar7 * 8) = uVar4;
              goto LAB_00103ad0;
            }
          }
          _err_print_index_error
                    ("set","./core/templates/cowdata.h",0xcf,lVar7,lVar6,"p_index","size()","",false
                     ,false);
        }
        else {
          _err_print_error("push_back","./core/templates/vector.h",0x142,
                           "Condition \"err\" is true. Returning: true",0,0);
        }
LAB_00103ad0:
        iVar5 = iVar5 + 1;
      } while (iVar5 != iVar3);
    }
    if (*(code **)(*(long *)this + 0x230) == get_render_region) {
      if (*(long *)(this + 0x1a8) == 0) {
        local_58 = ZEXT816(0);
      }
      else {
        local_58 = OpenXRAPI::get_render_region();
      }
    }
    else {
      local_58 = (**(code **)(*(long *)this + 0x230))(this);
    }
    XRVRS::set_vrs_render_region((Rect2i *)(this + 0x270));
    uVar4 = XRVRS::make_vrs_texture((Vector2 *)(this + 0x270),(Vector *)&local_60);
    lVar6 = local_70[0];
    if (local_70[0] != 0) {
      LOCK();
      plVar1 = (long *)(local_70[0] + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_70[0] = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}



/* Vector<RID>::push_back(RID) [clone .isra.0] */

void __thiscall Vector<RID>::push_back(Vector<RID> *this,undefined8 param_2)

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
  iVar1 = CowData<RID>::resize<false>((CowData<RID> *)(this + 8),lVar2);
  if (iVar1 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar3 = -1;
      lVar2 = 0;
    }
    else {
      lVar2 = *(long *)(*(long *)(this + 8) + -8);
      lVar3 = lVar2 + -1;
      if (-1 < lVar3) {
        CowData<RID>::_copy_on_write((CowData<RID> *)(this + 8));
        *(undefined8 *)(*(long *)(this + 8) + lVar3 * 8) = param_2;
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
/* OpenXRInterface::get_play_area() const */

void OpenXRInterface::get_play_area(void)

{
  undefined8 *puVar1;
  char cVar2;
  float fVar3;
  int iVar4;
  long lVar5;
  long in_RSI;
  long in_RDI;
  float *pfVar6;
  long lVar7;
  long in_FS_OFFSET;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  long local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  float local_78;
  float fStack_74;
  undefined8 local_70;
  float local_68;
  float fStack_64;
  float local_60;
  float local_5c;
  float local_58;
  undefined8 local_54;
  float local_4c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar5 = XRServer::get_singleton();
  if (lVar5 == 0) {
    _err_print_error("get_play_area","modules/openxr/openxr_interface.cpp",0x2fe,
                     "Parameter \"xr_server\" is null.",0,0);
    *(undefined8 *)(in_RDI + 8) = 0;
    goto LAB_00103e07;
  }
  local_b0 = 0;
  local_a8 = __LC106;
  uStack_a0 = _UNK_00122e48;
  local_98 = __LC107;
  uStack_90 = _UNK_00122e58;
  local_88 = __LC108;
  uStack_80 = _UNK_00122e68;
  if ((*(long *)(in_RSI + 0x1a8) == 0) || (cVar2 = OpenXRAPI::is_initialized(), cVar2 == '\0')) {
LAB_00103e01:
    lVar5 = 0;
  }
  else {
    uVar8 = OpenXRAPI::get_play_space_bounds();
    fVar3 = (float)((ulong)uVar8 >> 0x20);
    if (((float)uVar8 == 0.0) || (fVar3 == 0.0)) {
      if (get_play_area()::first_print != '\0') {
        _err_print_error("get_play_area","modules/openxr/openxr_interface.cpp",0x319,
                         "OpenXR: No extents available.",0,1);
        get_play_area()::first_print = '\0';
      }
      goto LAB_00103e01;
    }
    pfVar6 = (float *)&local_a8;
    XRServer::get_reference_frame();
    lVar5 = 0;
    do {
      fVar9 = (float)uVar8 * *pfVar6;
      fVar11 = fVar3 * pfVar6[2];
      fVar10 = (float)((ulong)*(undefined8 *)pfVar6 >> 0x20);
      if (lVar5 == 0) {
        lVar5 = 1;
      }
      else {
        lVar5 = *(long *)(lVar5 + -8) + 1;
      }
      iVar4 = CowData<Vector3>::resize<false>((CowData<Vector3> *)&local_b0,lVar5);
      if (iVar4 == 0) {
        if (local_b0 == 0) {
          lVar7 = -1;
          lVar5 = 0;
        }
        else {
          lVar5 = *(long *)(local_b0 + -8);
          lVar7 = lVar5 + -1;
          if (-1 < lVar7) {
            CowData<Vector3>::_copy_on_write((CowData<Vector3> *)&local_b0);
            puVar1 = (undefined8 *)(local_b0 + lVar7 * 0xc);
            *puVar1 = CONCAT44(fVar11 * fStack_64 +
                               fVar10 * local_68 + fVar9 * (float)((ulong)local_70 >> 0x20) +
                               (float)((ulong)local_54 >> 0x20),
                               fVar11 * (float)local_70 + fVar10 * fStack_74 + fVar9 * local_78 +
                               (float)local_54);
            *(float *)(puVar1 + 1) =
                 fVar9 * local_60 + fVar10 * local_5c + fVar11 * local_58 + local_4c;
            goto LAB_0010409d;
          }
        }
        _err_print_index_error
                  ("set","./core/templates/cowdata.h",0xcf,lVar7,lVar5,"p_index","size()","",false,
                   false);
      }
      else {
        _err_print_error("push_back","./core/templates/vector.h",0x142,
                         "Condition \"err\" is true. Returning: true",0,0);
      }
LAB_0010409d:
      pfVar6 = pfVar6 + 3;
      lVar5 = local_b0;
    } while (pfVar6 != &local_78);
  }
  *(long *)(in_RDI + 8) = lVar5;
LAB_00103e07:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRInterface::_bind_methods() */

void OpenXRInterface::_bind_methods(void)

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
  undefined *puVar13;
  undefined *puVar14;
  MethodBind *pMVar15;
  uint uVar16;
  long in_FS_OFFSET;
  undefined8 local_240;
  long local_238;
  undefined8 local_230;
  long local_228;
  long local_220;
  char *local_218;
  undefined8 local_210;
  char *local_208;
  undefined8 local_200;
  char *local_1d8;
  undefined8 local_1d0;
  undefined1 local_1c8 [16];
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198 [2];
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_170;
  char *local_168;
  undefined8 local_160;
  undefined *local_158;
  char *pcStack_150;
  undefined8 local_148;
  undefined *local_138;
  char *pcStack_130;
  undefined8 local_128;
  undefined *local_118;
  char *pcStack_110;
  undefined8 local_108;
  undefined *local_f8;
  char *pcStack_f0;
  undefined8 local_e8;
  undefined *local_d8;
  char *pcStack_d0;
  undefined8 local_c8;
  undefined *local_b8;
  char *pcStack_b0;
  undefined8 local_a8;
  undefined *local_98;
  char *pcStack_90;
  undefined8 local_88;
  char *local_78;
  char *pcStack_70;
  undefined8 local_68;
  char **local_58;
  undefined1 auStack_50 [16];
  long local_40;
  
  puVar14 = PTR__LC119_00122e98;
  puVar13 = PTR__LC116_00122e90;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_218 = (char *)0x0;
  local_1d8 = "session_begun";
  local_1d0 = 0xd;
  String::parse_latin1((StrRange *)&local_218);
  local_1d8 = (char *)0x0;
  local_1d0 = 0;
  local_1b8 = 0;
  local_1b0 = 0;
  local_1a8 = 6;
  local_1a0 = 1;
  local_198[0] = 0;
  local_188 = 0;
  local_180 = 0;
  local_170 = 0;
  local_1c8 = (undefined1  [16])0x0;
  if (local_218 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_1d8,(CowData *)&local_218);
  }
  local_220 = 0;
  local_200 = 0xf;
  local_208 = "OpenXRInterface";
  String::parse_latin1((StrRange *)&local_220);
  StringName::StringName((StringName *)&local_208,(String *)&local_220,false);
  ClassDB::add_signal((StringName *)&local_208,(MethodInfo *)&local_1d8);
  if ((StringName::configured != '\0') && (local_208 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_220);
  MethodInfo::~MethodInfo((MethodInfo *)&local_1d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_218);
  local_1d8 = "session_stopping";
  local_218 = (char *)0x0;
  local_1d0 = 0x10;
  String::parse_latin1((StrRange *)&local_218);
  local_1c8 = (undefined1  [16])0x0;
  local_1d8 = (char *)0x0;
  local_1d0 = 0;
  local_1b8 = 0;
  local_1b0 = 0;
  local_1a8 = 6;
  local_1a0 = 1;
  local_198[0] = 0;
  local_188 = 0;
  local_180 = 0;
  local_170 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_1d8,(CowData *)&local_218);
  local_208 = "OpenXRInterface";
  local_220 = 0;
  local_200 = 0xf;
  String::parse_latin1((StrRange *)&local_220);
  StringName::StringName((StringName *)&local_208,(String *)&local_220,false);
  ClassDB::add_signal((StringName *)&local_208,(MethodInfo *)&local_1d8);
  if ((StringName::configured != '\0') && (local_208 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_220);
  MethodInfo::~MethodInfo((MethodInfo *)&local_1d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_218);
  local_218 = (char *)0x0;
  local_1d8 = "session_focussed";
  local_1d0 = 0x10;
  String::parse_latin1((StrRange *)&local_218);
  local_1d8 = (char *)0x0;
  local_1d0 = 0;
  local_1b8 = 0;
  local_1b0 = 0;
  local_1a8 = 6;
  local_1a0 = 1;
  local_198[0] = 0;
  local_188 = 0;
  local_180 = 0;
  local_170 = 0;
  local_1c8 = (undefined1  [16])0x0;
  if (local_218 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_1d8,(CowData *)&local_218);
  }
  local_220 = 0;
  local_208 = "OpenXRInterface";
  local_200 = 0xf;
  String::parse_latin1((StrRange *)&local_220);
  StringName::StringName((StringName *)&local_208,(String *)&local_220,false);
  ClassDB::add_signal((StringName *)&local_208,(MethodInfo *)&local_1d8);
  if ((StringName::configured != '\0') && (local_208 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_220);
  MethodInfo::~MethodInfo((MethodInfo *)&local_1d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_218);
  local_1d8 = "session_visible";
  local_218 = (char *)0x0;
  local_1d0 = 0xf;
  String::parse_latin1((StrRange *)&local_218);
  local_1c8 = (undefined1  [16])0x0;
  local_1d8 = (char *)0x0;
  local_1d0 = 0;
  local_1b8 = 0;
  local_1b0 = 0;
  local_1a8 = 6;
  local_1a0 = 1;
  local_198[0] = 0;
  local_188 = 0;
  local_180 = 0;
  local_170 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_1d8,(CowData *)&local_218);
  local_208 = "OpenXRInterface";
  local_220 = 0;
  local_200 = 0xf;
  String::parse_latin1((StrRange *)&local_220);
  StringName::StringName((StringName *)&local_208,(String *)&local_220,false);
  ClassDB::add_signal((StringName *)&local_208,(MethodInfo *)&local_1d8);
  if ((StringName::configured != '\0') && (local_208 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_220);
  MethodInfo::~MethodInfo((MethodInfo *)&local_1d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_218);
  local_218 = (char *)0x0;
  local_1d8 = "session_loss_pending";
  local_1d0 = 0x14;
  String::parse_latin1((StrRange *)&local_218);
  local_1d8 = (char *)0x0;
  local_1d0 = 0;
  local_1b8 = 0;
  local_1b0 = 0;
  local_1a8 = 6;
  local_1a0 = 1;
  local_198[0] = 0;
  local_188 = 0;
  local_180 = 0;
  local_170 = 0;
  local_1c8 = (undefined1  [16])0x0;
  if (local_218 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_1d8,(CowData *)&local_218);
  }
  local_220 = 0;
  local_208 = "OpenXRInterface";
  local_200 = 0xf;
  String::parse_latin1((StrRange *)&local_220);
  StringName::StringName((StringName *)&local_208,(String *)&local_220,false);
  ClassDB::add_signal((StringName *)&local_208,(MethodInfo *)&local_1d8);
  if ((StringName::configured != '\0') && (local_208 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_220);
  MethodInfo::~MethodInfo((MethodInfo *)&local_1d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_218);
  local_1d8 = "instance_exiting";
  local_218 = (char *)0x0;
  local_1d0 = 0x10;
  String::parse_latin1((StrRange *)&local_218);
  local_1c8 = (undefined1  [16])0x0;
  local_1d8 = (char *)0x0;
  local_1d0 = 0;
  local_1b8 = 0;
  local_1b0 = 0;
  local_1a8 = 6;
  local_1a0 = 1;
  local_198[0] = 0;
  local_188 = 0;
  local_180 = 0;
  local_170 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_1d8,(CowData *)&local_218);
  local_208 = "OpenXRInterface";
  local_220 = 0;
  local_200 = 0xf;
  String::parse_latin1((StrRange *)&local_220);
  StringName::StringName((StringName *)&local_208,(String *)&local_220,false);
  ClassDB::add_signal((StringName *)&local_208,(MethodInfo *)&local_1d8);
  if ((StringName::configured != '\0') && (local_208 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_220);
  MethodInfo::~MethodInfo((MethodInfo *)&local_1d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_218);
  local_1d8 = "pose_recentered";
  local_218 = (char *)0x0;
  local_1d0 = 0xf;
  String::parse_latin1((StrRange *)&local_218);
  local_1c8 = (undefined1  [16])0x0;
  local_1d8 = (char *)0x0;
  local_1d0 = 0;
  local_1b8 = 0;
  local_1b0 = 0;
  local_1a8 = 6;
  local_1a0 = 1;
  local_198[0] = 0;
  local_188 = 0;
  local_180 = 0;
  local_170 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_1d8,(CowData *)&local_218);
  local_208 = "OpenXRInterface";
  local_220 = 0;
  local_200 = 0xf;
  String::parse_latin1((StrRange *)&local_220);
  StringName::StringName((StringName *)&local_208,(String *)&local_220,false);
  ClassDB::add_signal((StringName *)&local_208,(MethodInfo *)&local_1d8);
  if ((StringName::configured != '\0') && (local_208 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_220);
  MethodInfo::~MethodInfo((MethodInfo *)&local_1d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_218);
  local_228 = 0;
  local_1d8 = "";
  local_230 = 0;
  local_1d0 = 0;
  String::parse_latin1((StrRange *)&local_230);
  local_238 = 0;
  local_1d8 = "refresh_rate";
  local_1d0 = 0xc;
  String::parse_latin1((StrRange *)&local_238);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_208,3,(StrRange *)&local_238,0,(StrRange *)&local_230,6,
             (StrRange *)&local_228);
  local_1d8 = "refresh_rate_changed";
  local_220 = 0;
  local_1d0 = 0x14;
  String::parse_latin1((StrRange *)&local_220);
  local_1c8 = (undefined1  [16])0x0;
  local_1d8 = (char *)0x0;
  local_1d0 = 0;
  local_1b8 = 0;
  local_1b0 = 0;
  local_1a8 = 6;
  local_1a0 = 1;
  local_198[0] = 0;
  local_188 = 0;
  local_180 = 0;
  local_170 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_1d8,(CowData *)&local_220);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_198,(PropertyInfo *)&local_208);
  local_240 = 0;
  local_218 = "OpenXRInterface";
  local_210 = 0xf;
  String::parse_latin1((StrRange *)&local_240);
  StringName::StringName((StringName *)&local_218,(String *)&local_240,false);
  ClassDB::add_signal((StringName *)&local_218,(MethodInfo *)&local_1d8);
  if ((StringName::configured != '\0') && (local_218 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_240);
  MethodInfo::~MethodInfo((MethodInfo *)&local_1d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_220);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_208);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_238);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_230);
  if ((StringName::configured != '\0') && (local_228 != 0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_1d8,(char ***)"get_display_refresh_rate",0);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar15 = create_method_bind<OpenXRInterface,float>(get_display_refresh_rate);
  ClassDB::bind_methodfi(1,pMVar15,false,(MethodDefinition *)&local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1d8);
  local_168 = "refresh_rate";
  local_160 = 0;
  uVar16 = (uint)&local_58;
  local_58 = &local_168;
  D_METHODP((char *)&local_1d8,(char ***)"set_display_refresh_rate",uVar16);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar15 = create_method_bind<OpenXRInterface,float>(set_display_refresh_rate);
  ClassDB::bind_methodfi(1,pMVar15,false,(MethodDefinition *)&local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1d8);
  _scs_create((char *)&local_218,true);
  _scs_create((char *)&local_220,true);
  local_1d8 = "";
  local_228 = 0;
  local_230 = 0;
  local_1d0 = 0;
  String::parse_latin1((StrRange *)&local_230);
  local_1d8 = "display_refresh_rate";
  local_238 = 0;
  local_1d0 = 0x14;
  String::parse_latin1((StrRange *)&local_238);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_1d8,3,(StrRange *)&local_238,0,(StrRange *)&local_230,6,
             (StrRange *)&local_228);
  local_208 = "OpenXRInterface";
  local_240 = 0;
  local_200 = 0xf;
  String::parse_latin1((StrRange *)&local_240);
  StringName::StringName((StringName *)&local_208,(String *)&local_240,false);
  ClassDB::add_property
            ((StringName *)&local_208,(PropertyInfo *)&local_1d8,(StringName *)&local_220,
             (StringName *)&local_218,-1);
  if ((StringName::configured != '\0') && (local_208 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_240);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_238);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_230);
  if (StringName::configured != '\0') {
    if (local_228 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001054eb;
    }
    if (local_220 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001054eb;
    }
    if (local_218 != (char *)0x0) {
      StringName::unref();
    }
  }
LAB_001054eb:
  D_METHODP((char *)&local_1d8,(char ***)"get_render_target_size_multiplier",0);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar15 = create_method_bind<OpenXRInterface,double>(get_render_target_size_multiplier);
  ClassDB::bind_methodfi(1,pMVar15,false,(MethodDefinition *)&local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1d8);
  local_168 = "multiplier";
  local_160 = 0;
  local_58 = &local_168;
  D_METHODP((char *)&local_1d8,(char ***)"set_render_target_size_multiplier",uVar16);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar15 = create_method_bind<OpenXRInterface,double>(set_render_target_size_multiplier);
  ClassDB::bind_methodfi(1,pMVar15,false,(MethodDefinition *)&local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1d8);
  _scs_create((char *)&local_218,true);
  _scs_create((char *)&local_220,true);
  local_1d8 = "";
  local_228 = 0;
  local_230 = 0;
  local_1d0 = 0;
  String::parse_latin1((StrRange *)&local_230);
  local_1d8 = "render_target_size_multiplier";
  local_238 = 0;
  local_1d0 = 0x1d;
  String::parse_latin1((StrRange *)&local_238);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_1d8,3,(StrRange *)&local_238,0,(StrRange *)&local_230,6,
             (StrRange *)&local_228);
  local_208 = "OpenXRInterface";
  local_240 = 0;
  local_200 = 0xf;
  String::parse_latin1((StrRange *)&local_240);
  StringName::StringName((StringName *)&local_208,(String *)&local_240,false);
  ClassDB::add_property
            ((StringName *)&local_208,(PropertyInfo *)&local_1d8,(StringName *)&local_220,
             (StringName *)&local_218,-1);
  if ((StringName::configured != '\0') && (local_208 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_240);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_238);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_230);
  if (StringName::configured != '\0') {
    if (local_228 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010579e;
    }
    if (local_220 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010579e;
    }
    if (local_218 != (char *)0x0) {
      StringName::unref();
    }
  }
LAB_0010579e:
  D_METHODP((char *)&local_1d8,(char ***)"is_foveation_supported",0);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar15 = create_method_bind<OpenXRInterface,bool>(is_foveation_supported);
  ClassDB::bind_methodfi(1,pMVar15,false,(MethodDefinition *)&local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1d8);
  D_METHODP((char *)&local_1d8,(char ***)"get_foveation_level",0);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar15 = create_method_bind<OpenXRInterface,int>(get_foveation_level);
  ClassDB::bind_methodfi(1,pMVar15,false,(MethodDefinition *)&local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1d8);
  local_168 = "foveation_level";
  local_160 = 0;
  local_58 = &local_168;
  D_METHODP((char *)&local_1d8,(char ***)"set_foveation_level",uVar16);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar15 = create_method_bind<OpenXRInterface,int>(set_foveation_level);
  ClassDB::bind_methodfi(1,pMVar15,false,(MethodDefinition *)&local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1d8);
  _scs_create((char *)&local_218,true);
  _scs_create((char *)&local_220,true);
  local_1d8 = "";
  local_228 = 0;
  local_230 = 0;
  local_1d0 = 0;
  String::parse_latin1((StrRange *)&local_230);
  local_1d8 = "foveation_level";
  local_238 = 0;
  local_1d0 = 0xf;
  String::parse_latin1((StrRange *)&local_238);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_1d8,2,(StrRange *)&local_238,0,(StrRange *)&local_230,6,
             (StrRange *)&local_228);
  local_208 = "OpenXRInterface";
  local_240 = 0;
  local_200 = 0xf;
  String::parse_latin1((StrRange *)&local_240);
  StringName::StringName((StringName *)&local_208,(String *)&local_240,false);
  ClassDB::add_property
            ((StringName *)&local_208,(PropertyInfo *)&local_1d8,(StringName *)&local_220,
             (StringName *)&local_218,-1);
  if ((StringName::configured != '\0') && (local_208 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_240);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_238);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_230);
  if (StringName::configured != '\0') {
    if (local_228 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00105abe;
    }
    if (local_220 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00105abe;
    }
    if (local_218 != (char *)0x0) {
      StringName::unref();
    }
  }
LAB_00105abe:
  D_METHODP((char *)&local_1d8,(char ***)"get_foveation_dynamic",0);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar15 = create_method_bind<OpenXRInterface,bool>(get_foveation_dynamic);
  ClassDB::bind_methodfi(1,pMVar15,false,(MethodDefinition *)&local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1d8);
  local_168 = "foveation_dynamic";
  local_160 = 0;
  local_58 = &local_168;
  D_METHODP((char *)&local_1d8,(char ***)"set_foveation_dynamic",uVar16);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar15 = create_method_bind<OpenXRInterface,bool>(set_foveation_dynamic);
  ClassDB::bind_methodfi(1,pMVar15,false,(MethodDefinition *)&local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1d8);
  _scs_create((char *)&local_218,true);
  _scs_create((char *)&local_220,true);
  local_1d8 = "";
  local_228 = 0;
  local_230 = 0;
  local_1d0 = 0;
  String::parse_latin1((StrRange *)&local_230);
  local_1d8 = "foveation_dynamic";
  local_238 = 0;
  local_1d0 = 0x11;
  String::parse_latin1((StrRange *)&local_238);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_1d8,1,(StrRange *)&local_238,0,(StrRange *)&local_230,6,
             (StrRange *)&local_228);
  local_208 = "OpenXRInterface";
  local_240 = 0;
  local_200 = 0xf;
  String::parse_latin1((StrRange *)&local_240);
  StringName::StringName((StringName *)&local_208,(String *)&local_240,false);
  ClassDB::add_property
            ((StringName *)&local_208,(PropertyInfo *)&local_1d8,(StringName *)&local_220,
             (StringName *)&local_218,-1);
  if ((StringName::configured != '\0') && (local_208 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_240);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_238);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_230);
  if (StringName::configured != '\0') {
    if (local_228 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00105d72;
    }
    if (local_220 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00105d72;
    }
    if (local_218 != (char *)0x0) {
      StringName::unref();
    }
  }
LAB_00105d72:
  local_168 = "name";
  local_160 = 0;
  local_58 = &local_168;
  D_METHODP((char *)&local_1d8,(char ***)"is_action_set_active",uVar16);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar15 = create_method_bind<OpenXRInterface,bool,String_const&>(is_action_set_active);
  ClassDB::bind_methodfi(1,pMVar15,false,(MethodDefinition *)&local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1d8);
  local_68 = 0;
  local_78 = puVar14;
  pcStack_70 = "active";
  auStack_50._0_8_ = &pcStack_70;
  local_58 = &local_78;
  D_METHODP((char *)&local_1d8,(char ***)"set_action_set_active",uVar16);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar15 = create_method_bind<OpenXRInterface,String_const&,bool>(set_action_set_active);
  ClassDB::bind_methodfi(1,pMVar15,false,(MethodDefinition *)&local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1d8);
  D_METHODP((char *)&local_1d8,(char ***)"get_action_sets",0);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar15 = create_method_bind<OpenXRInterface,Array>(get_action_sets);
  ClassDB::bind_methodfi(1,pMVar15,false,(MethodDefinition *)&local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1d8);
  D_METHODP((char *)&local_1d8,(char ***)"get_available_display_refresh_rates",0);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar15 = create_method_bind<OpenXRInterface,Array>(get_available_display_refresh_rates);
  ClassDB::bind_methodfi(1,pMVar15,false,(MethodDefinition *)&local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1d8);
  local_88 = 0;
  local_98 = puVar13;
  pcStack_90 = "motion_range";
  auStack_50._0_8_ = &pcStack_90;
  local_58 = &local_98;
  D_METHODP((char *)&local_1d8,(char ***)"set_motion_range",uVar16);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar15 = create_method_bind<OpenXRInterface,OpenXRInterface::Hand,OpenXRInterface::HandMotionRange>
                      (set_motion_range);
  ClassDB::bind_methodfi(1,pMVar15,false,(MethodDefinition *)&local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1d8);
  local_78 = "hand";
  pcStack_70 = (char *)0x0;
  local_58 = &local_78;
  D_METHODP((char *)&local_1d8,(char ***)"get_motion_range",uVar16);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar15 = create_method_bind<OpenXRInterface,OpenXRInterface::HandMotionRange,OpenXRInterface::Hand>
                      (get_motion_range);
  ClassDB::bind_methodfi(1,pMVar15,false,(MethodDefinition *)&local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1d8);
  local_78 = "hand";
  pcStack_70 = (char *)0x0;
  local_58 = &local_78;
  D_METHODP((char *)&local_1d8,(char ***)"get_hand_tracking_source",uVar16);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar15 = create_method_bind<OpenXRInterface,OpenXRInterface::HandTrackedSource,OpenXRInterface::Hand>
                      (get_hand_tracking_source);
  ClassDB::bind_methodfi(1,pMVar15,false,(MethodDefinition *)&local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1d8);
  local_a8 = 0;
  local_b8 = puVar13;
  pcStack_b0 = "joint";
  auStack_50._0_8_ = &pcStack_b0;
  local_58 = &local_b8;
  D_METHODP((char *)&local_1d8,(char ***)"get_hand_joint_flags",uVar16);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar15 = create_method_bind<OpenXRInterface,BitField<OpenXRInterface::HandJointFlags>,OpenXRInterface::Hand,OpenXRInterface::HandJoints>
                      (get_hand_joint_flags);
  ClassDB::bind_methodfi(1,pMVar15,false,(MethodDefinition *)&local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1d8);
  local_c8 = 0;
  local_d8 = puVar13;
  pcStack_d0 = "joint";
  auStack_50._0_8_ = &pcStack_d0;
  local_58 = &local_d8;
  D_METHODP((char *)&local_1d8,(char ***)"get_hand_joint_rotation",uVar16);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar15 = create_method_bind<OpenXRInterface,Quaternion,OpenXRInterface::Hand,OpenXRInterface::HandJoints>
                      (get_hand_joint_rotation);
  ClassDB::bind_methodfi(1,pMVar15,false,(MethodDefinition *)&local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1d8);
  local_e8 = 0;
  local_f8 = puVar13;
  pcStack_f0 = "joint";
  auStack_50._0_8_ = &pcStack_f0;
  local_58 = &local_f8;
  D_METHODP((char *)&local_1d8,(char ***)"get_hand_joint_position",uVar16);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar15 = create_method_bind<OpenXRInterface,Vector3,OpenXRInterface::Hand,OpenXRInterface::HandJoints>
                      (get_hand_joint_position);
  ClassDB::bind_methodfi(1,pMVar15,false,(MethodDefinition *)&local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1d8);
  local_108 = 0;
  local_118 = puVar13;
  pcStack_110 = "joint";
  auStack_50._0_8_ = &pcStack_110;
  local_58 = &local_118;
  D_METHODP((char *)&local_1d8,(char ***)"get_hand_joint_radius",uVar16);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar15 = create_method_bind<OpenXRInterface,float,OpenXRInterface::Hand,OpenXRInterface::HandJoints>
                      (get_hand_joint_radius);
  ClassDB::bind_methodfi(1,pMVar15,false,(MethodDefinition *)&local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1d8);
  local_128 = 0;
  local_138 = puVar13;
  pcStack_130 = "joint";
  auStack_50._0_8_ = &pcStack_130;
  local_58 = &local_138;
  D_METHODP((char *)&local_1d8,(char ***)"get_hand_joint_linear_velocity",uVar16);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar15 = create_method_bind<OpenXRInterface,Vector3,OpenXRInterface::Hand,OpenXRInterface::HandJoints>
                      (get_hand_joint_linear_velocity);
  ClassDB::bind_methodfi(1,pMVar15,false,(MethodDefinition *)&local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1d8);
  local_148 = 0;
  local_158 = puVar13;
  pcStack_150 = "joint";
  auStack_50._0_8_ = &pcStack_150;
  local_58 = &local_158;
  D_METHODP((char *)&local_1d8,(char ***)"get_hand_joint_angular_velocity",uVar16);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar15 = create_method_bind<OpenXRInterface,Vector3,OpenXRInterface::Hand,OpenXRInterface::HandJoints>
                      (get_hand_joint_angular_velocity);
  ClassDB::bind_methodfi(1,pMVar15,false,(MethodDefinition *)&local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1d8);
  D_METHODP((char *)&local_1d8,(char ***)"is_hand_tracking_supported",0);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar15 = create_method_bind<OpenXRInterface,bool>(is_hand_tracking_supported);
  ClassDB::bind_methodfi(1,pMVar15,false,(MethodDefinition *)&local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1d8);
  D_METHODP((char *)&local_1d8,(char ***)"is_hand_interaction_supported",0);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar15 = create_method_bind<OpenXRInterface,bool>(is_hand_interaction_supported);
  ClassDB::bind_methodfi(1,pMVar15,false,(MethodDefinition *)&local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1d8);
  D_METHODP((char *)&local_1d8,(char ***)"is_eye_gaze_interaction_supported",0);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar15 = create_method_bind<OpenXRInterface,bool>(is_eye_gaze_interaction_supported);
  ClassDB::bind_methodfi(1,pMVar15,false,(MethodDefinition *)&local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1d8);
  D_METHODP((char *)&local_1d8,(char ***)"get_vrs_min_radius",0);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar15 = create_method_bind<OpenXRInterface,float>(get_vrs_min_radius);
  ClassDB::bind_methodfi(1,pMVar15,false,(MethodDefinition *)&local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1d8);
  local_78 = "radius";
  pcStack_70 = (char *)0x0;
  local_58 = &local_78;
  D_METHODP((char *)&local_1d8,(char ***)"set_vrs_min_radius",uVar16);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar15 = create_method_bind<OpenXRInterface,float>(set_vrs_min_radius);
  ClassDB::bind_methodfi(1,pMVar15,false,(MethodDefinition *)&local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1d8);
  D_METHODP((char *)&local_1d8,(char ***)"get_vrs_strength",0);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar15 = create_method_bind<OpenXRInterface,float>(get_vrs_strength);
  ClassDB::bind_methodfi(1,pMVar15,false,(MethodDefinition *)&local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1d8);
  local_78 = "strength";
  pcStack_70 = (char *)0x0;
  local_58 = &local_78;
  D_METHODP((char *)&local_1d8,(char ***)"set_vrs_strength",uVar16);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar15 = create_method_bind<OpenXRInterface,float>(set_vrs_strength);
  ClassDB::bind_methodfi(1,pMVar15,false,(MethodDefinition *)&local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1d8);
  local_1d8 = "vrs_";
  local_208 = (char *)0x0;
  local_1d0 = 4;
  String::parse_latin1((StrRange *)&local_208);
  local_1d8 = "Vulkan VRS";
  local_218 = (char *)0x0;
  local_1d0 = 10;
  String::parse_latin1((StrRange *)&local_218);
  local_1d8 = "OpenXRInterface";
  local_220 = 0;
  local_1d0 = 0xf;
  String::parse_latin1((StrRange *)&local_220);
  StringName::StringName((StringName *)&local_1d8,(String *)&local_220,false);
  ClassDB::add_property_group((StringName *)&local_1d8,(String *)&local_218,(String *)&local_208,0);
  if ((StringName::configured != '\0') && (local_1d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_220);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_218);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_208);
  _scs_create((char *)&local_218,true);
  _scs_create((char *)&local_220,true);
  local_1d8 = "1.0,100.0,1.0";
  local_228 = 0;
  local_230 = 0;
  local_1d0 = 0xd;
  String::parse_latin1((StrRange *)&local_230);
  local_1d8 = "vrs_min_radius";
  local_238 = 0;
  local_1d0 = 0xe;
  String::parse_latin1((StrRange *)&local_238);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_1d8,3,(StrRange *)&local_238,1,(StrRange *)&local_230,6,
             (StrRange *)&local_228);
  local_208 = "OpenXRInterface";
  local_240 = 0;
  local_200 = 0xf;
  String::parse_latin1((StrRange *)&local_240);
  StringName::StringName((StringName *)&local_208,(String *)&local_240,false);
  ClassDB::add_property
            ((StringName *)&local_208,(PropertyInfo *)&local_1d8,(StringName *)&local_220,
             (StringName *)&local_218,-1);
  if ((StringName::configured != '\0') && (local_208 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_240);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_238);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_230);
  if (StringName::configured != '\0') {
    if (local_228 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00106af7;
    }
    if (local_220 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00106af7;
    }
    if (local_218 != (char *)0x0) {
      StringName::unref();
    }
  }
LAB_00106af7:
  _scs_create((char *)&local_218,true);
  _scs_create((char *)&local_220,true);
  local_1d8 = "0.1,10.0,0.1";
  local_228 = 0;
  local_230 = 0;
  local_1d0 = 0xc;
  String::parse_latin1((StrRange *)&local_230);
  local_1d8 = "vrs_strength";
  local_238 = 0;
  local_1d0 = 0xc;
  String::parse_latin1((StrRange *)&local_238);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_1d8,3,(StrRange *)&local_238,1,(StrRange *)&local_230,6,
             (StrRange *)&local_228);
  local_208 = "OpenXRInterface";
  local_240 = 0;
  local_200 = 0xf;
  String::parse_latin1((StrRange *)&local_240);
  StringName::StringName((StringName *)&local_208,(String *)&local_240,false);
  ClassDB::add_property
            ((StringName *)&local_208,(PropertyInfo *)&local_1d8,(StringName *)&local_220,
             (StringName *)&local_218,-1);
  if ((StringName::configured != '\0') && (local_208 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_240);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_238);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_230);
  if (StringName::configured != '\0') {
    if (local_228 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00106ca8;
    }
    if (local_220 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00106ca8;
    }
    if (local_218 != (char *)0x0) {
      StringName::unref();
    }
  }
LAB_00106ca8:
  StringName::StringName((StringName *)&local_208,"HAND_LEFT",false);
  local_220 = 0;
  local_1d8 = "HAND_LEFT";
  local_1d0 = 9;
  String::parse_latin1((StrRange *)&local_220);
  GetTypeInfo<OpenXRInterface::Hand,void>::get_class_info
            ((GetTypeInfo<OpenXRInterface::Hand,void> *)&local_1d8);
  local_218 = (char *)local_1c8._0_8_;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_1c8._8_8_;
  local_1c8 = auVar1 << 0x40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1d8);
  local_1d8 = "OpenXRInterface";
  local_228 = 0;
  local_1d0 = 0xf;
  String::parse_latin1((StrRange *)&local_228);
  StringName::StringName((StringName *)&local_1d8,(String *)&local_228,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_1d8,(StringName *)&local_218,(StringName *)&local_208,0,false);
  if ((StringName::configured != '\0') && (local_1d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_228);
  if ((StringName::configured != '\0') && (local_218 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_220);
  if ((StringName::configured != '\0') && (local_208 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_208,"HAND_RIGHT",false);
  local_220 = 0;
  local_1d8 = "HAND_RIGHT";
  local_1d0 = 10;
  String::parse_latin1((StrRange *)&local_220);
  GetTypeInfo<OpenXRInterface::Hand,void>::get_class_info
            ((GetTypeInfo<OpenXRInterface::Hand,void> *)&local_1d8);
  local_218 = (char *)local_1c8._0_8_;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_1c8._8_8_;
  local_1c8 = auVar2 << 0x40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1d8);
  local_1d8 = "OpenXRInterface";
  local_228 = 0;
  local_1d0 = 0xf;
  String::parse_latin1((StrRange *)&local_228);
  StringName::StringName((StringName *)&local_1d8,(String *)&local_228,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_1d8,(StringName *)&local_218,(StringName *)&local_208,1,false);
  if ((StringName::configured != '\0') && (local_1d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_228);
  if ((StringName::configured != '\0') && (local_218 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_220);
  if ((StringName::configured != '\0') && (local_208 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_208,"HAND_MAX",false);
  local_220 = 0;
  local_1d8 = "HAND_MAX";
  local_1d0 = 8;
  String::parse_latin1((StrRange *)&local_220);
  GetTypeInfo<OpenXRInterface::Hand,void>::get_class_info
            ((GetTypeInfo<OpenXRInterface::Hand,void> *)&local_1d8);
  local_218 = (char *)local_1c8._0_8_;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = local_1c8._8_8_;
  local_1c8 = auVar3 << 0x40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1d8);
  local_1d8 = "OpenXRInterface";
  local_228 = 0;
  local_1d0 = 0xf;
  String::parse_latin1((StrRange *)&local_228);
  StringName::StringName((StringName *)&local_1d8,(String *)&local_228,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_1d8,(StringName *)&local_218,(StringName *)&local_208,2,false);
  if ((StringName::configured != '\0') && (local_1d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_228);
  if ((StringName::configured != '\0') && (local_218 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_220);
  if ((StringName::configured != '\0') && (local_208 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_208,"HAND_MOTION_RANGE_UNOBSTRUCTED",false);
  local_220 = 0;
  local_1d8 = "HAND_MOTION_RANGE_UNOBSTRUCTED";
  local_1d0 = 0x1e;
  String::parse_latin1((StrRange *)&local_220);
  GetTypeInfo<OpenXRInterface::HandMotionRange,void>::get_class_info
            ((GetTypeInfo<OpenXRInterface::HandMotionRange,void> *)&local_1d8);
  local_218 = (char *)local_1c8._0_8_;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = local_1c8._8_8_;
  local_1c8 = auVar4 << 0x40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1d8);
  local_1d8 = "OpenXRInterface";
  local_228 = 0;
  local_1d0 = 0xf;
  String::parse_latin1((StrRange *)&local_228);
  StringName::StringName((StringName *)&local_1d8,(String *)&local_228,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_1d8,(StringName *)&local_218,(StringName *)&local_208,0,false);
  if ((StringName::configured != '\0') && (local_1d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_228);
  if ((StringName::configured != '\0') && (local_218 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_220);
  if ((StringName::configured != '\0') && (local_208 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_208,"HAND_MOTION_RANGE_CONFORM_TO_CONTROLLER",false);
  local_220 = 0;
  local_1d8 = "HAND_MOTION_RANGE_CONFORM_TO_CONTROLLER";
  local_1d0 = 0x27;
  String::parse_latin1((StrRange *)&local_220);
  GetTypeInfo<OpenXRInterface::HandMotionRange,void>::get_class_info
            ((GetTypeInfo<OpenXRInterface::HandMotionRange,void> *)&local_1d8);
  local_218 = (char *)local_1c8._0_8_;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = local_1c8._8_8_;
  local_1c8 = auVar5 << 0x40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1d8);
  local_1d8 = "OpenXRInterface";
  local_228 = 0;
  local_1d0 = 0xf;
  String::parse_latin1((StrRange *)&local_228);
  StringName::StringName((StringName *)&local_1d8,(String *)&local_228,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_1d8,(StringName *)&local_218,(StringName *)&local_208,1,false);
  if ((StringName::configured != '\0') && (local_1d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_228);
  if ((StringName::configured != '\0') && (local_218 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_220);
  if ((StringName::configured != '\0') && (local_208 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_208,"HAND_MOTION_RANGE_MAX",false);
  local_220 = 0;
  local_1d8 = "HAND_MOTION_RANGE_MAX";
  local_1d0 = 0x15;
  String::parse_latin1((StrRange *)&local_220);
  GetTypeInfo<OpenXRInterface::HandMotionRange,void>::get_class_info
            ((GetTypeInfo<OpenXRInterface::HandMotionRange,void> *)&local_1d8);
  local_218 = (char *)local_1c8._0_8_;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = local_1c8._8_8_;
  local_1c8 = auVar6 << 0x40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1d8);
  local_1d8 = "OpenXRInterface";
  local_228 = 0;
  local_1d0 = 0xf;
  String::parse_latin1((StrRange *)&local_228);
  StringName::StringName((StringName *)&local_1d8,(String *)&local_228,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_1d8,(StringName *)&local_218,(StringName *)&local_208,2,false);
  if ((StringName::configured != '\0') && (local_1d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_228);
  if ((StringName::configured != '\0') && (local_218 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_220);
  if ((StringName::configured != '\0') && (local_208 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_208,"HAND_TRACKED_SOURCE_UNKNOWN",false);
  local_220 = 0;
  local_1d8 = "HAND_TRACKED_SOURCE_UNKNOWN";
  local_1d0 = 0x1b;
  String::parse_latin1((StrRange *)&local_220);
  GetTypeInfo<OpenXRInterface::HandTrackedSource,void>::get_class_info
            ((GetTypeInfo<OpenXRInterface::HandTrackedSource,void> *)&local_1d8);
  local_218 = (char *)local_1c8._0_8_;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = local_1c8._8_8_;
  local_1c8 = auVar7 << 0x40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1d8);
  local_1d8 = "OpenXRInterface";
  local_228 = 0;
  local_1d0 = 0xf;
  String::parse_latin1((StrRange *)&local_228);
  StringName::StringName((StringName *)&local_1d8,(String *)&local_228,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_1d8,(StringName *)&local_218,(StringName *)&local_208,0,false);
  if ((StringName::configured != '\0') && (local_1d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_228);
  if ((StringName::configured != '\0') && (local_218 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_220);
  if ((StringName::configured != '\0') && (local_208 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_208,"HAND_TRACKED_SOURCE_UNOBSTRUCTED",false);
  local_220 = 0;
  local_1d8 = "HAND_TRACKED_SOURCE_UNOBSTRUCTED";
  local_1d0 = 0x20;
  String::parse_latin1((StrRange *)&local_220);
  GetTypeInfo<OpenXRInterface::HandTrackedSource,void>::get_class_info
            ((GetTypeInfo<OpenXRInterface::HandTrackedSource,void> *)&local_1d8);
  local_218 = (char *)local_1c8._0_8_;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = local_1c8._8_8_;
  local_1c8 = auVar8 << 0x40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1d8);
  local_1d8 = "OpenXRInterface";
  local_228 = 0;
  local_1d0 = 0xf;
  String::parse_latin1((StrRange *)&local_228);
  StringName::StringName((StringName *)&local_1d8,(String *)&local_228,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_1d8,(StringName *)&local_218,(StringName *)&local_208,1,false);
  if ((StringName::configured != '\0') && (local_1d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_228);
  if ((StringName::configured != '\0') && (local_218 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_220);
  if ((StringName::configured != '\0') && (local_208 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_208,"HAND_TRACKED_SOURCE_CONTROLLER",false);
  local_220 = 0;
  local_1d8 = "HAND_TRACKED_SOURCE_CONTROLLER";
  local_1d0 = 0x1e;
  String::parse_latin1((StrRange *)&local_220);
  GetTypeInfo<OpenXRInterface::HandTrackedSource,void>::get_class_info
            ((GetTypeInfo<OpenXRInterface::HandTrackedSource,void> *)&local_1d8);
  local_218 = (char *)local_1c8._0_8_;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = local_1c8._8_8_;
  local_1c8 = auVar9 << 0x40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1d8);
  local_1d8 = "OpenXRInterface";
  local_228 = 0;
  local_1d0 = 0xf;
  String::parse_latin1((StrRange *)&local_228);
  StringName::StringName((StringName *)&local_1d8,(String *)&local_228,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_1d8,(StringName *)&local_218,(StringName *)&local_208,2,false);
  if ((StringName::configured != '\0') && (local_1d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_228);
  if ((StringName::configured != '\0') && (local_218 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_220);
  if ((StringName::configured != '\0') && (local_208 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_208,"HAND_TRACKED_SOURCE_MAX",false);
  local_220 = 0;
  local_1d8 = "HAND_TRACKED_SOURCE_MAX";
  local_1d0 = 0x17;
  String::parse_latin1((StrRange *)&local_220);
  GetTypeInfo<OpenXRInterface::HandTrackedSource,void>::get_class_info
            ((GetTypeInfo<OpenXRInterface::HandTrackedSource,void> *)&local_1d8);
  local_218 = (char *)local_1c8._0_8_;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = local_1c8._8_8_;
  local_1c8 = auVar10 << 0x40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1d8);
  local_1d8 = "OpenXRInterface";
  local_228 = 0;
  local_1d0 = 0xf;
  String::parse_latin1((StrRange *)&local_228);
  StringName::StringName((StringName *)&local_1d8,(String *)&local_228,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_1d8,(StringName *)&local_218,(StringName *)&local_208,3,false);
  if ((StringName::configured != '\0') && (local_1d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_228);
  if ((StringName::configured != '\0') && (local_218 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_220);
  if ((StringName::configured != '\0') && (local_208 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_208,"HAND_JOINT_PALM",false);
  local_220 = 0;
  local_1d8 = "HAND_JOINT_PALM";
  local_1d0 = 0xf;
  String::parse_latin1((StrRange *)&local_220);
  __constant_get_enum_name<OpenXRInterface::HandJoints>((StrRange *)&local_218);
  local_1d8 = "OpenXRInterface";
  local_228 = 0;
  local_1d0 = 0xf;
  String::parse_latin1((StrRange *)&local_228);
  StringName::StringName((StringName *)&local_1d8,(String *)&local_228,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_1d8,(StringName *)&local_218,(StringName *)&local_208,0,false);
  if ((StringName::configured != '\0') && (local_1d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_228);
  if ((StringName::configured != '\0') && (local_218 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_220);
  if ((StringName::configured != '\0') && (local_208 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_208,"HAND_JOINT_WRIST",false);
  local_220 = 0;
  local_1d8 = "HAND_JOINT_WRIST";
  local_1d0 = 0x10;
  String::parse_latin1((StrRange *)&local_220);
  __constant_get_enum_name<OpenXRInterface::HandJoints>((StrRange *)&local_218);
  local_1d8 = "OpenXRInterface";
  local_228 = 0;
  local_1d0 = 0xf;
  String::parse_latin1((StrRange *)&local_228);
  StringName::StringName((StringName *)&local_1d8,(String *)&local_228,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_1d8,(StringName *)&local_218,(StringName *)&local_208,1,false);
  if ((StringName::configured != '\0') && (local_1d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_228);
  if ((StringName::configured != '\0') && (local_218 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_220);
  if ((StringName::configured != '\0') && (local_208 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_208,"HAND_JOINT_THUMB_METACARPAL",false);
  local_220 = 0;
  local_1d8 = "HAND_JOINT_THUMB_METACARPAL";
  local_1d0 = 0x1b;
  String::parse_latin1((StrRange *)&local_220);
  __constant_get_enum_name<OpenXRInterface::HandJoints>((StrRange *)&local_218);
  local_1d8 = "OpenXRInterface";
  local_228 = 0;
  local_1d0 = 0xf;
  String::parse_latin1((StrRange *)&local_228);
  StringName::StringName((StringName *)&local_1d8,(String *)&local_228,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_1d8,(StringName *)&local_218,(StringName *)&local_208,2,false);
  if ((StringName::configured != '\0') && (local_1d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_228);
  if ((StringName::configured != '\0') && (local_218 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_220);
  if ((StringName::configured != '\0') && (local_208 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_208,"HAND_JOINT_THUMB_PROXIMAL",false);
  local_220 = 0;
  local_1d8 = "HAND_JOINT_THUMB_PROXIMAL";
  local_1d0 = 0x19;
  String::parse_latin1((StrRange *)&local_220);
  __constant_get_enum_name<OpenXRInterface::HandJoints>((StrRange *)&local_218);
  local_1d8 = "OpenXRInterface";
  local_228 = 0;
  local_1d0 = 0xf;
  String::parse_latin1((StrRange *)&local_228);
  StringName::StringName((StringName *)&local_1d8,(String *)&local_228,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_1d8,(StringName *)&local_218,(StringName *)&local_208,3,false);
  if ((StringName::configured != '\0') && (local_1d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_228);
  if ((StringName::configured != '\0') && (local_218 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_220);
  if ((StringName::configured != '\0') && (local_208 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_208,"HAND_JOINT_THUMB_DISTAL",false);
  local_220 = 0;
  local_1d8 = "HAND_JOINT_THUMB_DISTAL";
  local_1d0 = 0x17;
  String::parse_latin1((StrRange *)&local_220);
  __constant_get_enum_name<OpenXRInterface::HandJoints>((StrRange *)&local_218);
  local_1d8 = "OpenXRInterface";
  local_228 = 0;
  local_1d0 = 0xf;
  String::parse_latin1((StrRange *)&local_228);
  StringName::StringName((StringName *)&local_1d8,(String *)&local_228,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_1d8,(StringName *)&local_218,(StringName *)&local_208,4,false);
  if ((StringName::configured != '\0') && (local_1d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_228);
  if ((StringName::configured != '\0') && (local_218 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_220);
  if ((StringName::configured != '\0') && (local_208 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_208,"HAND_JOINT_THUMB_TIP",false);
  local_220 = 0;
  local_1d8 = "HAND_JOINT_THUMB_TIP";
  local_1d0 = 0x14;
  String::parse_latin1((StrRange *)&local_220);
  __constant_get_enum_name<OpenXRInterface::HandJoints>((StrRange *)&local_218);
  local_1d8 = "OpenXRInterface";
  local_228 = 0;
  local_1d0 = 0xf;
  String::parse_latin1((StrRange *)&local_228);
  StringName::StringName((StringName *)&local_1d8,(String *)&local_228,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_1d8,(StringName *)&local_218,(StringName *)&local_208,5,false);
  if ((StringName::configured != '\0') && (local_1d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_228);
  if ((StringName::configured != '\0') && (local_218 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_220);
  if ((StringName::configured != '\0') && (local_208 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_208,"HAND_JOINT_INDEX_METACARPAL",false);
  local_220 = 0;
  local_1d8 = "HAND_JOINT_INDEX_METACARPAL";
  local_1d0 = 0x1b;
  String::parse_latin1((StrRange *)&local_220);
  __constant_get_enum_name<OpenXRInterface::HandJoints>((StrRange *)&local_218);
  local_1d8 = "OpenXRInterface";
  local_228 = 0;
  local_1d0 = 0xf;
  String::parse_latin1((StrRange *)&local_228);
  StringName::StringName((StringName *)&local_1d8,(String *)&local_228,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_1d8,(StringName *)&local_218,(StringName *)&local_208,6,false);
  if ((StringName::configured != '\0') && (local_1d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_228);
  if ((StringName::configured != '\0') && (local_218 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_220);
  if ((StringName::configured != '\0') && (local_208 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_208,"HAND_JOINT_INDEX_PROXIMAL",false);
  local_220 = 0;
  local_1d8 = "HAND_JOINT_INDEX_PROXIMAL";
  local_1d0 = 0x19;
  String::parse_latin1((StrRange *)&local_220);
  __constant_get_enum_name<OpenXRInterface::HandJoints>((StrRange *)&local_218);
  local_1d8 = "OpenXRInterface";
  local_228 = 0;
  local_1d0 = 0xf;
  String::parse_latin1((StrRange *)&local_228);
  StringName::StringName((StringName *)&local_1d8,(String *)&local_228,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_1d8,(StringName *)&local_218,(StringName *)&local_208,7,false);
  if ((StringName::configured != '\0') && (local_1d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_228);
  if ((StringName::configured != '\0') && (local_218 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_220);
  if ((StringName::configured != '\0') && (local_208 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_208,"HAND_JOINT_INDEX_INTERMEDIATE",false);
  local_220 = 0;
  local_1d8 = "HAND_JOINT_INDEX_INTERMEDIATE";
  local_1d0 = 0x1d;
  String::parse_latin1((StrRange *)&local_220);
  __constant_get_enum_name<OpenXRInterface::HandJoints>((StrRange *)&local_218);
  local_1d8 = "OpenXRInterface";
  local_228 = 0;
  local_1d0 = 0xf;
  String::parse_latin1((StrRange *)&local_228);
  StringName::StringName((StringName *)&local_1d8,(String *)&local_228,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_1d8,(StringName *)&local_218,(StringName *)&local_208,8,false);
  if ((StringName::configured != '\0') && (local_1d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_228);
  if ((StringName::configured != '\0') && (local_218 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_220);
  if ((StringName::configured != '\0') && (local_208 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_208,"HAND_JOINT_INDEX_DISTAL",false);
  local_220 = 0;
  local_1d8 = "HAND_JOINT_INDEX_DISTAL";
  local_1d0 = 0x17;
  String::parse_latin1((StrRange *)&local_220);
  __constant_get_enum_name<OpenXRInterface::HandJoints>((StrRange *)&local_218);
  local_1d8 = "OpenXRInterface";
  local_228 = 0;
  local_1d0 = 0xf;
  String::parse_latin1((StrRange *)&local_228);
  StringName::StringName((StringName *)&local_1d8,(String *)&local_228,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_1d8,(StringName *)&local_218,(StringName *)&local_208,9,false);
  if ((StringName::configured != '\0') && (local_1d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_228);
  if ((StringName::configured != '\0') && (local_218 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_220);
  if ((StringName::configured != '\0') && (local_208 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_208,"HAND_JOINT_INDEX_TIP",false);
  local_220 = 0;
  local_1d8 = "HAND_JOINT_INDEX_TIP";
  local_1d0 = 0x14;
  String::parse_latin1((StrRange *)&local_220);
  __constant_get_enum_name<OpenXRInterface::HandJoints>((StrRange *)&local_218);
  local_1d8 = "OpenXRInterface";
  local_228 = 0;
  local_1d0 = 0xf;
  String::parse_latin1((StrRange *)&local_228);
  StringName::StringName((StringName *)&local_1d8,(String *)&local_228,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_1d8,(StringName *)&local_218,(StringName *)&local_208,10,false);
  if ((StringName::configured != '\0') && (local_1d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_228);
  if ((StringName::configured != '\0') && (local_218 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_220);
  if ((StringName::configured != '\0') && (local_208 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_208,"HAND_JOINT_MIDDLE_METACARPAL",false);
  local_220 = 0;
  local_1d8 = "HAND_JOINT_MIDDLE_METACARPAL";
  local_1d0 = 0x1c;
  String::parse_latin1((StrRange *)&local_220);
  __constant_get_enum_name<OpenXRInterface::HandJoints>((StrRange *)&local_218);
  local_1d8 = "OpenXRInterface";
  local_228 = 0;
  local_1d0 = 0xf;
  String::parse_latin1((StrRange *)&local_228);
  StringName::StringName((StringName *)&local_1d8,(String *)&local_228,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_1d8,(StringName *)&local_218,(StringName *)&local_208,0xb,false);
  if ((StringName::configured != '\0') && (local_1d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_228);
  if ((StringName::configured != '\0') && (local_218 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_220);
  if ((StringName::configured != '\0') && (local_208 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_208,"HAND_JOINT_MIDDLE_PROXIMAL",false);
  local_220 = 0;
  local_1d8 = "HAND_JOINT_MIDDLE_PROXIMAL";
  local_1d0 = 0x1a;
  String::parse_latin1((StrRange *)&local_220);
  __constant_get_enum_name<OpenXRInterface::HandJoints>((StrRange *)&local_218);
  local_1d8 = "OpenXRInterface";
  local_228 = 0;
  local_1d0 = 0xf;
  String::parse_latin1((StrRange *)&local_228);
  StringName::StringName((StringName *)&local_1d8,(String *)&local_228,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_1d8,(StringName *)&local_218,(StringName *)&local_208,0xc,false);
  if ((StringName::configured != '\0') && (local_1d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_228);
  if ((StringName::configured != '\0') && (local_218 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_220);
  if ((StringName::configured != '\0') && (local_208 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_208,"HAND_JOINT_MIDDLE_INTERMEDIATE",false);
  local_220 = 0;
  local_1d8 = "HAND_JOINT_MIDDLE_INTERMEDIATE";
  local_1d0 = 0x1e;
  String::parse_latin1((StrRange *)&local_220);
  __constant_get_enum_name<OpenXRInterface::HandJoints>((StrRange *)&local_218);
  local_1d8 = "OpenXRInterface";
  local_228 = 0;
  local_1d0 = 0xf;
  String::parse_latin1((StrRange *)&local_228);
  StringName::StringName((StringName *)&local_1d8,(String *)&local_228,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_1d8,(StringName *)&local_218,(StringName *)&local_208,0xd,false);
  if ((StringName::configured != '\0') && (local_1d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_228);
  if ((StringName::configured != '\0') && (local_218 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_220);
  if ((StringName::configured != '\0') && (local_208 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_208,"HAND_JOINT_MIDDLE_DISTAL",false);
  local_220 = 0;
  local_1d8 = "HAND_JOINT_MIDDLE_DISTAL";
  local_1d0 = 0x18;
  String::parse_latin1((StrRange *)&local_220);
  __constant_get_enum_name<OpenXRInterface::HandJoints>((StrRange *)&local_218);
  local_1d8 = "OpenXRInterface";
  local_228 = 0;
  local_1d0 = 0xf;
  String::parse_latin1((StrRange *)&local_228);
  StringName::StringName((StringName *)&local_1d8,(String *)&local_228,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_1d8,(StringName *)&local_218,(StringName *)&local_208,0xe,false);
  if ((StringName::configured != '\0') && (local_1d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_228);
  if ((StringName::configured != '\0') && (local_218 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_220);
  if ((StringName::configured != '\0') && (local_208 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_208,"HAND_JOINT_MIDDLE_TIP",false);
  local_220 = 0;
  local_1d8 = "HAND_JOINT_MIDDLE_TIP";
  local_1d0 = 0x15;
  String::parse_latin1((StrRange *)&local_220);
  __constant_get_enum_name<OpenXRInterface::HandJoints>((StrRange *)&local_218);
  local_1d8 = "OpenXRInterface";
  local_228 = 0;
  local_1d0 = 0xf;
  String::parse_latin1((StrRange *)&local_228);
  StringName::StringName((StringName *)&local_1d8,(String *)&local_228,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_1d8,(StringName *)&local_218,(StringName *)&local_208,0xf,false);
  if ((StringName::configured != '\0') && (local_1d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_228);
  if ((StringName::configured != '\0') && (local_218 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_220);
  if ((StringName::configured != '\0') && (local_208 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_208,"HAND_JOINT_RING_METACARPAL",false);
  local_220 = 0;
  local_1d8 = "HAND_JOINT_RING_METACARPAL";
  local_1d0 = 0x1a;
  String::parse_latin1((StrRange *)&local_220);
  __constant_get_enum_name<OpenXRInterface::HandJoints>((StrRange *)&local_218);
  local_1d8 = "OpenXRInterface";
  local_228 = 0;
  local_1d0 = 0xf;
  String::parse_latin1((StrRange *)&local_228);
  StringName::StringName((StringName *)&local_1d8,(String *)&local_228,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_1d8,(StringName *)&local_218,(StringName *)&local_208,0x10,false);
  if ((StringName::configured != '\0') && (local_1d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_228);
  if ((StringName::configured != '\0') && (local_218 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_220);
  if ((StringName::configured != '\0') && (local_208 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_208,"HAND_JOINT_RING_PROXIMAL",false);
  local_220 = 0;
  local_1d8 = "HAND_JOINT_RING_PROXIMAL";
  local_1d0 = 0x18;
  String::parse_latin1((StrRange *)&local_220);
  __constant_get_enum_name<OpenXRInterface::HandJoints>((StrRange *)&local_218);
  local_1d8 = "OpenXRInterface";
  local_228 = 0;
  local_1d0 = 0xf;
  String::parse_latin1((StrRange *)&local_228);
  StringName::StringName((StringName *)&local_1d8,(String *)&local_228,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_1d8,(StringName *)&local_218,(StringName *)&local_208,0x11,false);
  if ((StringName::configured != '\0') && (local_1d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_228);
  if ((StringName::configured != '\0') && (local_218 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_220);
  if ((StringName::configured != '\0') && (local_208 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_208,"HAND_JOINT_RING_INTERMEDIATE",false);
  local_220 = 0;
  local_1d8 = "HAND_JOINT_RING_INTERMEDIATE";
  local_1d0 = 0x1c;
  String::parse_latin1((StrRange *)&local_220);
  __constant_get_enum_name<OpenXRInterface::HandJoints>((StrRange *)&local_218);
  local_1d8 = "OpenXRInterface";
  local_228 = 0;
  local_1d0 = 0xf;
  String::parse_latin1((StrRange *)&local_228);
  StringName::StringName((StringName *)&local_1d8,(String *)&local_228,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_1d8,(StringName *)&local_218,(StringName *)&local_208,0x12,false);
  if ((StringName::configured != '\0') && (local_1d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_228);
  if ((StringName::configured != '\0') && (local_218 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_220);
  if ((StringName::configured != '\0') && (local_208 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_208,"HAND_JOINT_RING_DISTAL",false);
  local_220 = 0;
  local_1d8 = "HAND_JOINT_RING_DISTAL";
  local_1d0 = 0x16;
  String::parse_latin1((StrRange *)&local_220);
  __constant_get_enum_name<OpenXRInterface::HandJoints>((StrRange *)&local_218);
  local_1d8 = "OpenXRInterface";
  local_228 = 0;
  local_1d0 = 0xf;
  String::parse_latin1((StrRange *)&local_228);
  StringName::StringName((StringName *)&local_1d8,(String *)&local_228,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_1d8,(StringName *)&local_218,(StringName *)&local_208,0x13,false);
  if ((StringName::configured != '\0') && (local_1d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_228);
  if ((StringName::configured != '\0') && (local_218 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_220);
  if ((StringName::configured != '\0') && (local_208 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_208,"HAND_JOINT_RING_TIP",false);
  local_220 = 0;
  local_1d8 = "HAND_JOINT_RING_TIP";
  local_1d0 = 0x13;
  String::parse_latin1((StrRange *)&local_220);
  __constant_get_enum_name<OpenXRInterface::HandJoints>((StrRange *)&local_218);
  local_1d8 = "OpenXRInterface";
  local_228 = 0;
  local_1d0 = 0xf;
  String::parse_latin1((StrRange *)&local_228);
  StringName::StringName((StringName *)&local_1d8,(String *)&local_228,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_1d8,(StringName *)&local_218,(StringName *)&local_208,0x14,false);
  if ((StringName::configured != '\0') && (local_1d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_228);
  if ((StringName::configured != '\0') && (local_218 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_220);
  if ((StringName::configured != '\0') && (local_208 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_208,"HAND_JOINT_LITTLE_METACARPAL",false);
  local_220 = 0;
  local_1d8 = "HAND_JOINT_LITTLE_METACARPAL";
  local_1d0 = 0x1c;
  String::parse_latin1((StrRange *)&local_220);
  __constant_get_enum_name<OpenXRInterface::HandJoints>((StrRange *)&local_218);
  local_1d8 = "OpenXRInterface";
  local_228 = 0;
  local_1d0 = 0xf;
  String::parse_latin1((StrRange *)&local_228);
  StringName::StringName((StringName *)&local_1d8,(String *)&local_228,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_1d8,(StringName *)&local_218,(StringName *)&local_208,0x15,false);
  if ((StringName::configured != '\0') && (local_1d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_228);
  if ((StringName::configured != '\0') && (local_218 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_220);
  if ((StringName::configured != '\0') && (local_208 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_208,"HAND_JOINT_LITTLE_PROXIMAL",false);
  local_220 = 0;
  local_1d8 = "HAND_JOINT_LITTLE_PROXIMAL";
  local_1d0 = 0x1a;
  String::parse_latin1((StrRange *)&local_220);
  __constant_get_enum_name<OpenXRInterface::HandJoints>((StrRange *)&local_218);
  local_1d8 = "OpenXRInterface";
  local_228 = 0;
  local_1d0 = 0xf;
  String::parse_latin1((StrRange *)&local_228);
  StringName::StringName((StringName *)&local_1d8,(String *)&local_228,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_1d8,(StringName *)&local_218,(StringName *)&local_208,0x16,false);
  if ((StringName::configured != '\0') && (local_1d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_228);
  if ((StringName::configured != '\0') && (local_218 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_220);
  if ((StringName::configured != '\0') && (local_208 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_208,"HAND_JOINT_LITTLE_INTERMEDIATE",false);
  local_220 = 0;
  local_1d8 = "HAND_JOINT_LITTLE_INTERMEDIATE";
  local_1d0 = 0x1e;
  String::parse_latin1((StrRange *)&local_220);
  __constant_get_enum_name<OpenXRInterface::HandJoints>((StrRange *)&local_218);
  local_1d8 = "OpenXRInterface";
  local_228 = 0;
  local_1d0 = 0xf;
  String::parse_latin1((StrRange *)&local_228);
  StringName::StringName((StringName *)&local_1d8,(String *)&local_228,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_1d8,(StringName *)&local_218,(StringName *)&local_208,0x17,false);
  if ((StringName::configured != '\0') && (local_1d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_228);
  if ((StringName::configured != '\0') && (local_218 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_220);
  if ((StringName::configured != '\0') && (local_208 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_208,"HAND_JOINT_LITTLE_DISTAL",false);
  local_220 = 0;
  local_1d8 = "HAND_JOINT_LITTLE_DISTAL";
  local_1d0 = 0x18;
  String::parse_latin1((StrRange *)&local_220);
  __constant_get_enum_name<OpenXRInterface::HandJoints>((StrRange *)&local_218);
  local_1d8 = "OpenXRInterface";
  local_228 = 0;
  local_1d0 = 0xf;
  String::parse_latin1((StrRange *)&local_228);
  StringName::StringName((StringName *)&local_1d8,(String *)&local_228,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_1d8,(StringName *)&local_218,(StringName *)&local_208,0x18,false);
  if ((StringName::configured != '\0') && (local_1d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_228);
  if ((StringName::configured != '\0') && (local_218 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_220);
  if ((StringName::configured != '\0') && (local_208 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_208,"HAND_JOINT_LITTLE_TIP",false);
  local_220 = 0;
  local_1d8 = "HAND_JOINT_LITTLE_TIP";
  local_1d0 = 0x15;
  String::parse_latin1((StrRange *)&local_220);
  __constant_get_enum_name<OpenXRInterface::HandJoints>((StrRange *)&local_218);
  local_1d8 = "OpenXRInterface";
  local_228 = 0;
  local_1d0 = 0xf;
  String::parse_latin1((StrRange *)&local_228);
  StringName::StringName((StringName *)&local_1d8,(String *)&local_228,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_1d8,(StringName *)&local_218,(StringName *)&local_208,0x19,false);
  if ((StringName::configured != '\0') && (local_1d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_228);
  if ((StringName::configured != '\0') && (local_218 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_220);
  if ((StringName::configured != '\0') && (local_208 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_208,"HAND_JOINT_MAX",false);
  local_220 = 0;
  local_1d8 = "HAND_JOINT_MAX";
  local_1d0 = 0xe;
  String::parse_latin1((StrRange *)&local_220);
  __constant_get_enum_name<OpenXRInterface::HandJoints>((StrRange *)&local_218);
  local_1d8 = "OpenXRInterface";
  local_228 = 0;
  local_1d0 = 0xf;
  String::parse_latin1((StrRange *)&local_228);
  StringName::StringName((StringName *)&local_1d8,(String *)&local_228,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_1d8,(StringName *)&local_218,(StringName *)&local_208,0x1a,false);
  if ((StringName::configured != '\0') && (local_1d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_228);
  if ((StringName::configured != '\0') && (local_218 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_220);
  if ((StringName::configured != '\0') && (local_208 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_208,"HAND_JOINT_NONE",false);
  local_220 = 0;
  local_1d8 = "HAND_JOINT_NONE";
  local_1d0 = 0xf;
  String::parse_latin1((StrRange *)&local_220);
  __constant_get_bitfield_name<OpenXRInterface::HandJointFlags>((StrRange *)&local_218);
  local_1d8 = "OpenXRInterface";
  local_228 = 0;
  local_1d0 = 0xf;
  String::parse_latin1((StrRange *)&local_228);
  StringName::StringName((StringName *)&local_1d8,(String *)&local_228,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_1d8,(StringName *)&local_218,(StringName *)&local_208,0,true);
  if ((StringName::configured != '\0') && (local_1d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_228);
  if ((StringName::configured != '\0') && (local_218 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_220);
  if ((StringName::configured != '\0') && (local_208 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_238,"HAND_JOINT_ORIENTATION_VALID",false);
  local_1d8 = "HAND_JOINT_ORIENTATION_VALID";
  local_240 = 0;
  local_1d0 = 0x1c;
  String::parse_latin1((StrRange *)&local_240);
  local_220 = 0;
  local_1d8 = "OpenXRInterface::HandJointFlags";
  local_1d0 = 0x1f;
  String::parse_latin1((StrRange *)&local_220);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_218,(String *)&local_220)
  ;
  StringName::StringName((StringName *)&local_208,(String *)&local_218,false);
  local_228 = 0;
  local_230 = 0;
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_1d8,2,(StrRange *)&local_230,0,(StrRange *)&local_228,0x206,
             (StringName *)&local_208);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_230);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_228);
  if ((StringName::configured != '\0') && (local_208 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_218);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_220);
  local_208 = (char *)local_1c8._0_8_;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = local_1c8._8_8_;
  local_1c8 = auVar11 << 0x40;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  if ((StringName::configured != '\0') && (local_1c8._0_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1d0);
  local_1d8 = "OpenXRInterface";
  local_218 = (char *)0x0;
  local_1d0 = 0xf;
  String::parse_latin1((StrRange *)&local_218);
  StringName::StringName((StringName *)&local_1d8,(String *)&local_218,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_1d8,(StringName *)&local_208,(StringName *)&local_238,1,true);
  if ((StringName::configured != '\0') && (local_1d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_218);
  if ((StringName::configured != '\0') && (local_208 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_240);
  if ((StringName::configured != '\0') && (local_238 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_208,"HAND_JOINT_ORIENTATION_TRACKED",false);
  local_1d8 = "HAND_JOINT_ORIENTATION_TRACKED";
  local_220 = 0;
  local_1d0 = 0x1e;
  String::parse_latin1((StrRange *)&local_220);
  __constant_get_bitfield_name<OpenXRInterface::HandJointFlags>((StrRange *)&local_218);
  local_1d8 = "OpenXRInterface";
  local_228 = 0;
  local_1d0 = 0xf;
  String::parse_latin1((StrRange *)&local_228);
  StringName::StringName((StringName *)&local_1d8,(String *)&local_228,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_1d8,(StringName *)&local_218,(StringName *)&local_208,2,true);
  if ((StringName::configured != '\0') && (local_1d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_228);
  if ((StringName::configured != '\0') && (local_218 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_220);
  if ((StringName::configured != '\0') && (local_208 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_208,"HAND_JOINT_POSITION_VALID",false);
  local_1d8 = "HAND_JOINT_POSITION_VALID";
  local_220 = 0;
  local_1d0 = 0x19;
  String::parse_latin1((StrRange *)&local_220);
  __constant_get_bitfield_name<OpenXRInterface::HandJointFlags>((StrRange *)&local_218);
  local_1d8 = "OpenXRInterface";
  local_228 = 0;
  local_1d0 = 0xf;
  String::parse_latin1((StrRange *)&local_228);
  StringName::StringName((StringName *)&local_1d8,(String *)&local_228,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_1d8,(StringName *)&local_218,(StringName *)&local_208,4,true);
  if ((StringName::configured != '\0') && (local_1d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_228);
  if ((StringName::configured != '\0') && (local_218 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_220);
  if ((StringName::configured != '\0') && (local_208 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_238,"HAND_JOINT_POSITION_TRACKED",false);
  local_1d8 = "HAND_JOINT_POSITION_TRACKED";
  local_240 = 0;
  local_1d0 = 0x1b;
  String::parse_latin1((StrRange *)&local_240);
  local_220 = 0;
  local_1d8 = "OpenXRInterface::HandJointFlags";
  local_1d0 = 0x1f;
  String::parse_latin1((StrRange *)&local_220);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_218,(String *)&local_220)
  ;
  StringName::StringName((StringName *)&local_208,(String *)&local_218,false);
  local_228 = 0;
  local_230 = 0;
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_1d8,2,(StrRange *)&local_230,0,(StrRange *)&local_228,0x206,
             (StringName *)&local_208);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_230);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_228);
  if ((StringName::configured != '\0') && (local_208 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_218);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_220);
  local_208 = (char *)local_1c8._0_8_;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = local_1c8._8_8_;
  local_1c8 = auVar12 << 0x40;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  if ((StringName::configured != '\0') && (local_1c8._0_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1d0);
  local_1d8 = "OpenXRInterface";
  local_218 = (char *)0x0;
  local_1d0 = 0xf;
  String::parse_latin1((StrRange *)&local_218);
  StringName::StringName((StringName *)&local_1d8,(String *)&local_218,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_1d8,(StringName *)&local_208,(StringName *)&local_238,8,true);
  if ((StringName::configured != '\0') && (local_1d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_218);
  if ((StringName::configured != '\0') && (local_208 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_240);
  if ((StringName::configured != '\0') && (local_238 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_208,"HAND_JOINT_LINEAR_VELOCITY_VALID",false);
  local_220 = 0;
  local_1d8 = "HAND_JOINT_LINEAR_VELOCITY_VALID";
  local_1d0 = 0x20;
  String::parse_latin1((StrRange *)&local_220);
  __constant_get_bitfield_name<OpenXRInterface::HandJointFlags>((StrRange *)&local_218);
  local_1d8 = "OpenXRInterface";
  local_228 = 0;
  local_1d0 = 0xf;
  String::parse_latin1((StrRange *)&local_228);
  StringName::StringName((StringName *)&local_1d8,(String *)&local_228,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_1d8,(StringName *)&local_218,(StringName *)&local_208,0x10,true);
  if ((StringName::configured != '\0') && (local_1d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_228);
  if ((StringName::configured != '\0') && (local_218 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_220);
  if ((StringName::configured != '\0') && (local_208 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_208,"HAND_JOINT_ANGULAR_VELOCITY_VALID",false);
  local_220 = 0;
  local_1d8 = "HAND_JOINT_ANGULAR_VELOCITY_VALID";
  local_1d0 = 0x21;
  String::parse_latin1((StrRange *)&local_220);
  __constant_get_bitfield_name<OpenXRInterface::HandJointFlags>((StrRange *)&local_218);
  local_1d8 = "OpenXRInterface";
  local_228 = 0;
  local_1d0 = 0xf;
  String::parse_latin1((StrRange *)&local_228);
  StringName::StringName((StringName *)&local_1d8,(String *)&local_228,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_1d8,(StringName *)&local_218,(StringName *)&local_208,0x20,true);
  if ((StringName::configured != '\0') && (local_1d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_228);
  if ((StringName::configured != '\0') && (local_218 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_220);
  if ((StringName::configured != '\0') && (local_208 != (char *)0x0)) {
    StringName::unref();
  }
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



/* OpenXRInterface::get_suggested_tracker_names() const */

OpenXRInterface * __thiscall OpenXRInterface::get_suggested_tracker_names(OpenXRInterface *this)

{
  long *plVar1;
  undefined8 *puVar2;
  CowData<char32_t> *this_00;
  int iVar3;
  long lVar4;
  StrRange *pSVar5;
  undefined8 *puVar6;
  StrRange *pSVar7;
  long lVar8;
  long in_FS_OFFSET;
  bool bVar9;
  char *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  CowData local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = 0;
  local_90 = 4;
  local_98 = "head";
  String::parse_latin1((StrRange *)&local_88);
  local_98 = "left_hand";
  local_80 = 0;
  local_90 = 9;
  String::parse_latin1((StrRange *)&local_80);
  local_98 = "right_hand";
  local_78 = 0;
  local_90 = 10;
  String::parse_latin1((StrRange *)&local_78);
  local_98 = "/user/hand_tracker/left";
  local_70 = 0;
  local_90 = 0x17;
  String::parse_latin1((StrRange *)&local_70);
  local_98 = "/user/hand_tracker/right";
  local_68 = 0;
  local_90 = 0x18;
  String::parse_latin1((StrRange *)&local_68);
  local_98 = "/user/body_tracker";
  local_60 = 0;
  local_90 = 0x12;
  String::parse_latin1((StrRange *)&local_60);
  local_98 = "/user/face_tracker";
  local_58 = 0;
  local_90 = 0x12;
  String::parse_latin1((StrRange *)&local_58);
  local_50 = 0;
  local_98 = "/user/treadmill";
  local_90 = 0xf;
  String::parse_latin1((StrRange *)&local_50);
  *(undefined8 *)(this + 8) = 0;
  iVar3 = CowData<String>::resize<false>((CowData<String> *)(this + 8),8);
  pSVar5 = (StrRange *)&local_50;
  if (iVar3 == 0) {
    lVar4 = 0;
    pSVar7 = (StrRange *)&local_88;
    do {
      if (*(long *)(this + 8) == 0) {
        lVar8 = 0;
LAB_0010a277:
        _err_print_index_error
                  ("set","./core/templates/cowdata.h",0xcf,lVar4,lVar8,"p_index","size()","",false,
                   false);
      }
      else {
        lVar8 = *(long *)(*(long *)(this + 8) + -8);
        if (lVar8 <= lVar4) goto LAB_0010a277;
        CowData<String>::_copy_on_write((CowData<String> *)(this + 8));
        this_00 = (CowData<char32_t> *)(*(long *)(this + 8) + lVar4 * 8);
        if (*(long *)this_00 != *(long *)pSVar7) {
          CowData<char32_t>::_ref(this_00,(CowData *)pSVar7);
        }
      }
      pSVar7 = (StrRange *)((CowData *)pSVar7 + 8);
      lVar4 = lVar4 + 1;
    } while (pSVar7 != (StrRange *)local_48);
  }
  do {
    if (*(long *)pSVar5 != 0) {
      LOCK();
      plVar1 = (long *)(*(long *)pSVar5 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar4 = *(long *)pSVar5;
        *(undefined8 *)pSVar5 = 0;
        Memory::free_static((void *)(lVar4 + -0x10),false);
      }
    }
    bVar9 = pSVar5 != (StrRange *)&local_88;
    pSVar5 = pSVar5 + -8;
  } while (bVar9);
  lVar4 = OpenXRAPI::get_registered_extension_wrappers();
  puVar6 = *(undefined8 **)(lVar4 + 8);
  if ((puVar6 != (undefined8 *)0x0) && (puVar2 = puVar6 + puVar6[-1], puVar2 != puVar6)) {
    do {
      if (*(code **)(*(long *)*puVar6 + 0x38) == OpenXRExtensionWrapper::get_suggested_tracker_names
         ) {
        local_90 = 0;
      }
      else {
        (**(code **)(*(long *)*puVar6 + 0x38))(&local_98);
      }
      puVar6 = puVar6 + 1;
      Vector<String>::append_array((Vector<String> *)this,&local_98);
      CowData<String>::_unref((CowData<String> *)&local_90);
    } while (puVar2 != puVar6);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* OpenXRInterface::free_trackers() */

void __thiscall OpenXRInterface::free_trackers(OpenXRInterface *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  char cVar5;
  Ref *pRVar6;
  Object *pOVar7;
  char *pcVar8;
  undefined8 uVar9;
  long lVar10;
  long in_FS_OFFSET;
  Object *local_48;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  pRVar6 = (Ref *)XRServer::get_singleton();
  if (pRVar6 == (Ref *)0x0) {
    if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar9 = 0x254;
      pcVar8 = "Parameter \"xr_server\" is null.";
LAB_0010a502:
      _err_print_error("free_trackers","modules/openxr/openxr_interface.cpp",uVar9,pcVar8,0,0);
      return;
    }
  }
  else if (*(long *)(this + 0x1a8) == 0) {
    if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar9 = 0x255;
      pcVar8 = "Parameter \"openxr_api\" is null.";
      goto LAB_0010a502;
    }
  }
  else {
    lVar3 = *(long *)(this + 0x448);
    for (lVar10 = 0; (lVar3 != 0 && (lVar10 < *(long *)(lVar3 + -8))); lVar10 = lVar10 + 1) {
      plVar4 = *(long **)(lVar3 + lVar10 * 8);
      OpenXRAPI::tracker_free(*(undefined8 *)(this + 0x1a8),plVar4[4]);
      local_48 = (Object *)0x0;
      if ((plVar4[3] != 0) &&
         ((pOVar7 = (Object *)__dynamic_cast(plVar4[3],&Object::typeinfo,&XRTracker::typeinfo,0),
          pOVar7 != (Object *)0x0 &&
          (cVar5 = RefCounted::reference(), local_48 = pOVar7, cVar5 == '\0')))) {
        local_48 = (Object *)0x0;
      }
      XRServer::remove_tracker(pRVar6);
      if (((local_48 != (Object *)0x0) && (cVar5 = RefCounted::unreference(), cVar5 != '\0')) &&
         (cVar5 = predelete_handler(local_48), cVar5 != '\0')) {
        (**(code **)(*(long *)local_48 + 0x140))();
        Memory::free_static(local_48,false);
      }
      if ((plVar4[3] != 0) && (cVar5 = RefCounted::unreference(), cVar5 != '\0')) {
        pOVar7 = (Object *)plVar4[3];
        cVar5 = predelete_handler(pOVar7);
        if (cVar5 != '\0') {
          (**(code **)(*(long *)pOVar7 + 0x140))();
          Memory::free_static(pOVar7,false);
        }
      }
      if (plVar4[2] != 0) {
        LOCK();
        plVar1 = (long *)(plVar4[2] + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar3 = plVar4[2];
          plVar4[2] = 0;
          Memory::free_static((void *)(lVar3 + -0x10),false);
        }
      }
      if (*plVar4 != 0) {
        LOCK();
        plVar1 = (long *)(*plVar4 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar3 = *plVar4;
          *plVar4 = 0;
          Memory::free_static((void *)(lVar3 + -0x10),false);
        }
      }
      Memory::free_static(plVar4,false);
      lVar3 = *(long *)(this + 0x448);
    }
    if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
      CowData<OpenXRInterface::Tracker*>::resize<false>
                ((CowData<OpenXRInterface::Tracker*> *)(this + 0x448),0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Vector<OpenXRInterface::Tracker*>::push_back(OpenXRInterface::Tracker*) [clone .isra.0] */

void __thiscall
Vector<OpenXRInterface::Tracker*>::push_back
          (Vector<OpenXRInterface::Tracker*> *this,Tracker *param_1)

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
  iVar1 = CowData<OpenXRInterface::Tracker*>::resize<false>
                    ((CowData<OpenXRInterface::Tracker*> *)(this + 8),lVar2);
  if (iVar1 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar3 = -1;
      lVar2 = 0;
    }
    else {
      lVar2 = *(long *)(*(long *)(this + 8) + -8);
      lVar3 = lVar2 + -1;
      if (-1 < lVar3) {
        CowData<OpenXRInterface::Tracker*>::_copy_on_write
                  ((CowData<OpenXRInterface::Tracker*> *)(this + 8));
        *(Tracker **)(*(long *)(this + 8) + lVar3 * 8) = param_1;
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



/* OpenXRInterface::find_tracker(String const&, bool) */

String * __thiscall
OpenXRInterface::find_tracker(OpenXRInterface *this,String *param_1,bool param_2)

{
  undefined8 uVar1;
  char cVar2;
  Ref *pRVar3;
  long lVar4;
  XRControllerTracker *this_00;
  Object *pOVar5;
  String *this_01;
  long lVar6;
  XRControllerTracker *pXVar7;
  long in_FS_OFFSET;
  undefined8 local_60;
  Object *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pRVar3 = (Ref *)XRServer::get_singleton();
  if (pRVar3 == (Ref *)0x0) {
    _err_print_error("find_tracker","modules/openxr/openxr_interface.cpp",0x1c0,
                     "Parameter \"xr_server\" is null.",0,0);
  }
  else if (*(long *)(this + 0x1a8) == 0) {
    _err_print_error("find_tracker","modules/openxr/openxr_interface.cpp",0x1c1,
                     "Parameter \"openxr_api\" is null.",0,0);
  }
  else {
    lVar4 = *(long *)(this + 0x448);
    for (lVar6 = 0; (lVar4 != 0 && (lVar6 < *(long *)(lVar4 + -8))); lVar6 = lVar6 + 1) {
      this_01 = *(String **)(lVar4 + lVar6 * 8);
      cVar2 = String::operator==(this_01,param_1);
      if (cVar2 != '\0') goto LAB_0010a9c8;
      lVar4 = *(long *)(this + 0x448);
    }
    if (param_2) {
      cVar2 = OpenXRAPI::is_top_level_path_supported(*(String **)(this + 0x1a8));
      if (cVar2 == '\0') {
        _err_print_error("find_tracker","modules/openxr/openxr_interface.cpp",0x1cf,
                         "Condition \"!openxr_api->is_top_level_path_supported(p_tracker_name)\" is true. Returning: nullptr"
                         ,0,0);
      }
      else {
        uVar1 = *(undefined8 *)(this + 0x1a8);
        local_58 = (Object *)0x0;
        if (*(long *)param_1 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)param_1);
        }
        lVar4 = OpenXRAPI::tracker_create(uVar1,(CowData<char32_t> *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
        if (lVar4 != 0) {
          pXVar7 = (XRControllerTracker *)0x0;
          this_00 = (XRControllerTracker *)operator_new(0x280,"");
          XRControllerTracker::XRControllerTracker(this_00);
          postinitialize_handler((Object *)this_00);
          cVar2 = RefCounted::init_ref();
          if (cVar2 != '\0') {
            cVar2 = RefCounted::reference();
            if (cVar2 != '\0') {
              pXVar7 = this_00;
            }
            cVar2 = RefCounted::unreference();
            if ((cVar2 != '\0') && (cVar2 = predelete_handler((Object *)this_00), cVar2 != '\0')) {
              (**(code **)(*(long *)this_00 + 0x140))(this_00);
              Memory::free_static(this_00,false);
            }
          }
          cVar2 = String::operator==(param_1,"/user/hand/left");
          if (cVar2 == '\0') {
            cVar2 = String::operator==(param_1,"/user/hand/right");
            if (cVar2 != '\0') {
              StringName::StringName((StringName *)&local_58,"right_hand",false);
              XRTracker::set_tracker_name((StringName *)pXVar7);
              if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
                StringName::unref();
              }
              local_58 = (Object *)0x0;
              String::parse_latin1((String *)&local_58,"Right hand controller");
              XRTracker::set_tracker_desc((String *)pXVar7);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
              (**(code **)(*(long *)pXVar7 + 0x158))(pXVar7,2);
              goto LAB_0010a86f;
            }
            StringName::StringName((StringName *)&local_58,param_1,false);
            XRTracker::set_tracker_name((StringName *)pXVar7);
            if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
              StringName::unref();
            }
            XRTracker::set_tracker_desc((String *)pXVar7);
            local_58 = (Object *)0x10e433;
            local_60 = 0;
            local_50 = 0x1a;
            String::parse_latin1((StrRange *)&local_60);
            XRPositionalTracker::set_tracker_profile((String *)pXVar7);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
            local_58 = (Object *)0x0;
            if (pXVar7 != (XRControllerTracker *)0x0) goto LAB_0010a8b4;
          }
          else {
            StringName::StringName((StringName *)&local_58,"left_hand",false);
            XRTracker::set_tracker_name((StringName *)pXVar7);
            if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
              StringName::unref();
            }
            local_60 = 0;
            local_58 = (Object *)0x10eb02;
            local_50 = 0x14;
            String::parse_latin1((StrRange *)&local_60);
            XRTracker::set_tracker_desc((String *)pXVar7);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
            (**(code **)(*(long *)pXVar7 + 0x158))(pXVar7,1);
LAB_0010a86f:
            local_60 = 0;
            local_58 = (Object *)0x10e433;
            local_50 = 0x1a;
            String::parse_latin1((StrRange *)&local_60);
            XRPositionalTracker::set_tracker_profile((String *)pXVar7);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
LAB_0010a8b4:
            local_58 = (Object *)0x0;
            pOVar5 = (Object *)__dynamic_cast(pXVar7,&Object::typeinfo,&XRTracker::typeinfo,0);
            if ((pOVar5 != (Object *)0x0) &&
               (local_58 = pOVar5, cVar2 = RefCounted::reference(), cVar2 == '\0')) {
              local_58 = (Object *)0x0;
            }
          }
          XRServer::add_tracker(pRVar3);
          if (((local_58 != (Object *)0x0) &&
              (cVar2 = RefCounted::unreference(), pOVar5 = local_58, cVar2 != '\0')) &&
             (cVar2 = predelete_handler(local_58), cVar2 != '\0')) {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
          this_01 = (String *)operator_new(0x30,"");
          *(undefined8 *)this_01 = 0;
          *(undefined1 (*) [16])((CowData<char32_t> *)this_01 + 0x10) = (undefined1  [16])0x0;
          lVar6 = *(long *)param_1;
          *(undefined1 (*) [16])((CowData<char32_t> *)this_01 + 0x20) = (undefined1  [16])0x0;
          if (lVar6 == 0) {
            *(long *)((CowData<char32_t> *)this_01 + 0x20) = lVar4;
            if (pXVar7 == (XRControllerTracker *)0x0) {
LAB_0010aa88:
              *(undefined8 *)((CowData<char32_t> *)this_01 + 0x28) = 0;
              Vector<OpenXRInterface::Tracker*>::push_back
                        ((Vector<OpenXRInterface::Tracker*> *)(this + 0x440),(Tracker *)this_01);
              goto LAB_0010a9c8;
            }
            *(XRControllerTracker **)((CowData<char32_t> *)this_01 + 0x18) = pXVar7;
            cVar2 = RefCounted::reference();
            if (cVar2 == '\0') {
              *(undefined8 *)((CowData<char32_t> *)this_01 + 0x18) = 0;
            }
LAB_0010ab25:
            *(undefined8 *)((CowData<char32_t> *)this_01 + 0x28) = 0;
            Vector<OpenXRInterface::Tracker*>::push_back
                      ((Vector<OpenXRInterface::Tracker*> *)(this + 0x440),(Tracker *)this_01);
          }
          else {
            CowData<char32_t>::_ref((CowData<char32_t> *)this_01,(CowData *)param_1);
            pOVar5 = *(Object **)((CowData<char32_t> *)this_01 + 0x18);
            *(long *)((CowData<char32_t> *)this_01 + 0x20) = lVar4;
            if (pXVar7 != (XRControllerTracker *)pOVar5) {
              *(XRControllerTracker **)((CowData<char32_t> *)this_01 + 0x18) = pXVar7;
              if (pXVar7 == (XRControllerTracker *)0x0) {
                if ((pOVar5 == (Object *)0x0) || (cVar2 = RefCounted::unreference(), cVar2 == '\0'))
                goto LAB_0010aa88;
              }
              else {
                cVar2 = RefCounted::reference();
                if (cVar2 == '\0') {
                  *(undefined8 *)((CowData<char32_t> *)this_01 + 0x18) = 0;
                }
                if ((pOVar5 == (Object *)0x0) || (cVar2 = RefCounted::unreference(), cVar2 == '\0'))
                goto LAB_0010ab25;
              }
              cVar2 = predelete_handler(pOVar5);
              if (cVar2 != '\0') {
                (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
                Memory::free_static(pOVar5,false);
              }
            }
            *(undefined8 *)((CowData<char32_t> *)this_01 + 0x28) = 0;
            Vector<OpenXRInterface::Tracker*>::push_back
                      ((Vector<OpenXRInterface::Tracker*> *)(this + 0x440),(Tracker *)this_01);
            if (pXVar7 == (XRControllerTracker *)0x0) goto LAB_0010a9c8;
          }
          cVar2 = RefCounted::unreference();
          if ((cVar2 != '\0') && (cVar2 = predelete_handler((Object *)pXVar7), cVar2 != '\0')) {
            (**(code **)(*(long *)pXVar7 + 0x140))(pXVar7);
            Memory::free_static(pXVar7,false);
          }
          goto LAB_0010a9c8;
        }
        _err_print_error("find_tracker","modules/openxr/openxr_interface.cpp",0x1d3,
                         "Condition \"tracker_rid.is_null()\" is true. Returning: nullptr",0,0);
      }
    }
  }
  this_01 = (String *)0x0;
LAB_0010a9c8:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this_01;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OpenXRInterface::trigger_haptic_pulse(String const&, StringName const&, double, double, double,
   double) */

void OpenXRInterface::trigger_haptic_pulse
               (String *param_1,StringName *param_2,double param_3,double param_4,double param_5,
               double param_6)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  long *in_RDX;
  undefined8 uVar6;
  long in_FS_OFFSET;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(param_1 + 0x1a8) == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar6 = 0x23c;
      pcVar5 = "Parameter \"openxr_api\" is null.";
LAB_0010af16:
      _err_print_error("trigger_haptic_pulse","modules/openxr/openxr_interface.cpp",uVar6,pcVar5,0,0
                      );
      return;
    }
  }
  else {
    lVar3 = find_action((OpenXRInterface *)param_1,(String *)param_2);
    if (lVar3 == 0) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = 0x23f;
        pcVar5 = "Parameter \"action\" is null.";
        goto LAB_0010af16;
      }
    }
    else {
      lVar4 = *in_RDX;
      if (lVar4 == 0) {
        local_60 = 0;
      }
      else {
        pcVar5 = *(char **)(lVar4 + 8);
        local_60 = 0;
        if (pcVar5 == (char *)0x0) {
          if (*(long *)(lVar4 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar4 + 0x10));
          }
        }
        else {
          local_50 = strlen(pcVar5);
          local_58 = pcVar5;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar2 = String::operator==((String *)&local_60,"left_hand");
      if (cVar2 == '\0') {
        cVar2 = String::operator==((String *)&local_60,"right_hand");
        if (cVar2 != '\0') {
          local_50 = 0x10;
          local_58 = "/user/hand/right";
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      else {
        local_50 = 0xf;
        local_58 = "/user/hand/left";
        String::parse_latin1((StrRange *)&local_60);
      }
      lVar4 = find_tracker((OpenXRInterface *)param_1,(String *)&local_60,false);
      if (lVar4 == 0) {
        _err_print_error("trigger_haptic_pulse","modules/openxr/openxr_interface.cpp",0x249,
                         "Parameter \"tracker\" is null.",0,0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      }
      else {
        auVar8._4_12_ = SUB1612((undefined1  [16])0x0,4);
        auVar8._0_4_ = (float)param_4;
        auVar7._4_12_ = SUB1612((undefined1  [16])0x0,4);
        auVar7._0_4_ = (float)param_3;
        OpenXRAPI::trigger_haptic_pulse
                  (auVar7._0_8_,auVar8._0_8_,*(undefined8 *)(param_1 + 0x1a8),
                   *(undefined8 *)(lVar3 + 0x10),*(undefined8 *)(lVar4 + 0x20),
                   (long)(param_5 * __LC223));
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
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRInterface::handle_hand_tracking(String const&,
   OpenXRHandTrackingExtension::HandTrackedHands) */

void __thiscall
OpenXRInterface::handle_hand_tracking(OpenXRInterface *this,String *param_1,undefined4 param_3)

{
  undefined8 uVar1;
  StringName *pSVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long in_FS_OFFSET;
  undefined4 extraout_XMM1_Da;
  undefined4 extraout_XMM1_Da_00;
  undefined4 extraout_XMM1_Da_01;
  long local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined4 local_bc;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined4 local_88;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar4 = OpenXRHandTrackingExtension::get_singleton();
  if ((((lVar4 != 0) && (cVar3 = OpenXRHandTrackingExtension::get_active(), cVar3 != '\0')) &&
      (lVar5 = find_tracker(this,param_1,false), lVar5 != 0)) && (*(long *)(lVar5 + 0x18) != 0)) {
    uVar6 = OpenXRHandTrackingExtension::get_hand_joint_location_flags(lVar4,param_3,0);
    if ((uVar6 & 3) == 0) {
      pSVar2 = *(StringName **)(lVar5 + 0x18);
      StringName::StringName((StringName *)&local_d8,"skeleton",false);
      XRPositionalTracker::invalidate_pose(pSVar2);
    }
    else {
      local_58 = 0x3f800000;
      local_78 = ZEXT416(_LC6);
      local_68 = ZEXT416(_LC6);
      local_54 = 0;
      local_4c = 0;
      local_d0 = 0;
      local_c8 = 0;
      local_c4 = 0;
      local_bc = 0;
      if ((uVar6 & 1) != 0) {
        OpenXRHandTrackingExtension::get_hand_joint_rotation(local_b8,lVar4,param_3,0);
        local_88 = 0x3f800000;
        local_a8 = ZEXT416(_LC6);
        local_98 = ZEXT416(_LC6);
        Basis::set_quaternion(local_a8);
        local_58 = local_88;
        local_78 = local_a8;
        local_68 = local_98;
      }
      if ((uVar6 & 2) != 0) {
        local_54 = OpenXRHandTrackingExtension::get_hand_joint_position(lVar4,param_3,0);
        local_4c = extraout_XMM1_Da_01;
      }
      uVar7 = OpenXRHandTrackingExtension::get_hand_joint_location_flags(lVar4,param_3,0);
      if ((uVar7 & 1) != 0) {
        local_d0 = OpenXRHandTrackingExtension::get_hand_joint_linear_velocity(lVar4,param_3,0);
        local_c8 = extraout_XMM1_Da_00;
      }
      if ((uVar7 & 2) != 0) {
        local_c4 = OpenXRHandTrackingExtension::get_hand_joint_angular_velocity(lVar4,param_3,0);
        local_bc = extraout_XMM1_Da;
      }
      uVar1 = *(undefined8 *)(lVar5 + 0x18);
      StringName::StringName((StringName *)&local_d8,"skeleton",false);
      XRPositionalTracker::set_pose
                (uVar1,&local_d8,local_78,&local_d0,&local_c4,((~uVar6 & 0xf) == 0) + '\x01');
    }
    if ((StringName::configured != '\0') && (local_d8 != 0)) {
      StringName::unref();
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRInterface::process() */

void __thiscall OpenXRInterface::process(OpenXRInterface *this)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long in_FS_OFFSET;
  bool bVar9;
  undefined8 local_b0;
  Vector<RID> local_a8 [8];
  long local_a0;
  char *local_98;
  long local_90;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined4 local_6c;
  uint local_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x1a8) != 0) {
    cVar4 = OpenXRAPI::process();
    if (cVar4 != '\0') {
      local_48 = 0x3f800000;
      uStack_44 = 0;
      uStack_40 = 0;
      uStack_3c = 0;
      local_80 = 0;
      local_78 = 0;
      local_74 = 0;
      local_6c = 0;
      local_68 = _LC6;
      uStack_64 = 0;
      uStack_60 = 0;
      uStack_58 = (ulong)_LC6;
      uStack_50 = 0;
      iVar5 = OpenXRAPI::get_head_center
                        (*(Transform3D **)(this + 0x1a8),(Vector3 *)&local_68,(Vector3 *)&local_80);
      *(int *)(this + 0x208) = iVar5;
      if (iVar5 != 0) {
        *(undefined8 *)(this + 0x1f0) = local_80;
        *(ulong *)(this + 0x1c0) = CONCAT44(uStack_64,local_68);
        *(undefined8 *)(this + 0x1c8) = uStack_60;
        *(undefined4 *)(this + 0x1f8) = local_78;
        *(ulong *)(this + 0x1d0) = uStack_58;
        *(undefined8 *)(this + 0x1d8) = uStack_50;
        *(undefined8 *)(this + 0x1fc) = local_74;
        *(ulong *)(this + 0x1e0) = CONCAT44(uStack_44,local_48);
        *(ulong *)(this + 0x1e8) = CONCAT44(uStack_3c,uStack_40);
        *(undefined4 *)(this + 0x204) = local_6c;
      }
    }
    lVar6 = *(long *)(this + 0x428);
    lVar7 = 0;
    local_a0 = 0;
    if (lVar6 == 0) {
      local_90 = 0;
      uVar8 = *(undefined8 *)(this + 0x1a8);
    }
    else {
      do {
        while( true ) {
          if (*(long *)(lVar6 + -8) <= lVar7) goto LAB_0010b495;
          lVar2 = *(long *)(lVar6 + lVar7 * 8);
          if (*(char *)(lVar2 + 8) != '\0') break;
          lVar7 = lVar7 + 1;
          if (lVar6 == 0) goto LAB_0010b495;
        }
        lVar7 = lVar7 + 1;
        Vector<RID>::push_back(local_a8,*(undefined8 *)(lVar2 + 0x20));
        lVar6 = *(long *)(this + 0x428);
      } while (lVar6 != 0);
LAB_0010b495:
      uVar8 = *(undefined8 *)(this + 0x1a8);
      local_90 = 0;
      plVar1 = (long *)(local_a0 + -0x10);
      if (local_a0 != 0) {
        do {
          lVar6 = *plVar1;
          if (lVar6 == 0) goto LAB_0010b2c8;
          LOCK();
          lVar7 = *plVar1;
          bVar9 = lVar6 == lVar7;
          if (bVar9) {
            *plVar1 = lVar6 + 1;
            lVar7 = lVar6;
          }
          UNLOCK();
        } while (!bVar9);
        if (lVar7 != -1) {
          local_90 = local_a0;
        }
      }
    }
LAB_0010b2c8:
    cVar4 = OpenXRAPI::sync_action_sets(uVar8);
    lVar6 = local_90;
    if (local_90 != 0) {
      LOCK();
      plVar1 = (long *)(local_90 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_90 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
    if ((cVar4 != '\0') && (lVar6 = *(long *)(this + 0x448), lVar6 != 0)) {
      lVar7 = 0;
      do {
        if (*(long *)(lVar6 + -8) <= lVar7) break;
        lVar2 = lVar7 * 8;
        lVar7 = lVar7 + 1;
        handle_tracker(this,*(Tracker **)(lVar6 + lVar2));
        lVar6 = *(long *)(this + 0x448);
      } while (lVar6 != 0);
    }
    local_b0 = 0;
    local_98 = "/user/hand/left";
    local_90 = 0xf;
    String::parse_latin1((StrRange *)&local_b0);
    handle_hand_tracking(this,(StrRange *)&local_b0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    local_98 = "/user/hand/right";
    local_b0 = 0;
    local_90 = 0x10;
    String::parse_latin1((StrRange *)&local_b0);
    handle_hand_tracking(this,(StrRange *)&local_b0,1);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    if (local_a0 != 0) {
      LOCK();
      plVar1 = (long *)(local_a0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(local_a0 + -0x10),false);
      }
    }
  }
  lVar6 = *(long *)(this + 0x1b8);
  if (lVar6 != 0) {
    uVar3 = *(undefined4 *)(this + 0x208);
    StringName::StringName((StringName *)&local_98,"default",false);
    XRPositionalTracker::set_pose
              (lVar6,(StringName *)&local_98,this + 0x1c0,this + 0x1f0,this + 0x1fc,uVar3);
    if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
      StringName::unref();
    }
  }
  if (this[0x1b1] != (OpenXRInterface)0x0) {
    if ((process()::{lambda()#1}::operator()()::sname == '\0') &&
       (iVar5 = __cxa_guard_acquire(&process()::{lambda()#1}::operator()()::sname), iVar5 != 0)) {
      _scs_create((char *)&process()::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&process()::{lambda()#1}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&process()::{lambda()#1}::operator()()::sname);
    }
    local_68 = 0;
    uStack_64 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    (**(code **)(*(long *)this + 0xd0))(this,&process()::{lambda()#1}::operator()()::sname,0,0);
    if (Variant::needs_deinit[(int)local_68] != '\0') {
      Variant::_clear_internal();
    }
    this[0x1b1] = (OpenXRInterface)0x0;
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* OpenXRInterface::create_action_set(String const&, String const&, int) */

CowData<char32_t> * __thiscall
OpenXRInterface::create_action_set
          (OpenXRInterface *this,String *param_1,String *param_2,int param_3)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  CowData<char32_t> *this_00;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long in_FS_OFFSET;
  bool bVar7;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x1a8) == 0) {
    _err_print_error("create_action_set","modules/openxr/openxr_interface.cpp",0x151,
                     "Parameter \"openxr_api\" is null.",0,0);
LAB_0010b8e8:
    this_00 = (CowData<char32_t> *)0x0;
  }
  else {
    lVar6 = *(long *)(this + 0x428);
    for (lVar5 = 0; (lVar6 != 0 && (lVar5 < *(long *)(lVar6 + -8))); lVar5 = lVar5 + 1) {
      cVar2 = String::operator==(*(String **)(lVar6 + lVar5 * 8),param_1);
      if (cVar2 != '\0') goto LAB_0010b8e8;
      lVar6 = *(long *)(this + 0x428);
    }
    this_00 = (CowData<char32_t> *)operator_new(0x28,"");
    *(undefined8 *)this_00 = 0;
    lVar6 = *(long *)param_1;
    *(undefined8 *)(this_00 + 0x18) = 0;
    *(undefined8 *)(this_00 + 0x20) = 0;
    if (lVar6 != 0) {
      CowData<char32_t>::_ref(this_00,(CowData *)param_1);
    }
    lVar6 = *(long *)param_2;
    this_00[8] = (CowData<char32_t>)0x1;
    local_48 = 0;
    uVar4 = *(undefined8 *)(this + 0x1a8);
    plVar1 = (long *)(lVar6 + -0x10);
    if (lVar6 != 0) {
      do {
        lVar6 = *plVar1;
        if (lVar6 == 0) goto LAB_0010b7cd;
        LOCK();
        lVar5 = *plVar1;
        bVar7 = lVar6 == lVar5;
        if (bVar7) {
          *plVar1 = lVar6 + 1;
          lVar5 = lVar6;
        }
        UNLOCK();
      } while (!bVar7);
      if (lVar5 != -1) {
        local_48 = *(undefined8 *)param_2;
      }
    }
LAB_0010b7cd:
    local_50 = 0;
    plVar1 = (long *)(*(long *)param_1 + -0x10);
    if (*(long *)param_1 != 0) {
      do {
        lVar6 = *plVar1;
        if (lVar6 == 0) goto LAB_0010b805;
        LOCK();
        lVar5 = *plVar1;
        bVar7 = lVar6 == lVar5;
        if (bVar7) {
          *plVar1 = lVar6 + 1;
          lVar5 = lVar6;
        }
        UNLOCK();
      } while (!bVar7);
      if (lVar5 != -1) {
        local_50 = *(undefined8 *)param_1;
      }
    }
LAB_0010b805:
    uVar4 = OpenXRAPI::action_set_create
                      (uVar4,(CowData<char32_t> *)&local_50,(CowData<char32_t> *)&local_48,param_3);
    *(undefined8 *)(this_00 + 0x20) = uVar4;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    if (*(long *)(this + 0x428) == 0) {
      lVar6 = 1;
    }
    else {
      lVar6 = *(long *)(*(long *)(this + 0x428) + -8) + 1;
    }
    iVar3 = CowData<OpenXRInterface::ActionSet*>::resize<false>
                      ((CowData<OpenXRInterface::ActionSet*> *)(this + 0x428),lVar6);
    if (iVar3 == 0) {
      if (*(long *)(this + 0x428) == 0) {
        lVar5 = -1;
        lVar6 = 0;
      }
      else {
        lVar6 = *(long *)(*(long *)(this + 0x428) + -8);
        lVar5 = lVar6 + -1;
        if (-1 < lVar5) {
          CowData<OpenXRInterface::ActionSet*>::_copy_on_write
                    ((CowData<OpenXRInterface::ActionSet*> *)(this + 0x428));
          *(CowData<char32_t> **)(*(long *)(this + 0x428) + lVar5 * 8) = this_00;
          goto LAB_0010b894;
        }
      }
      _err_print_index_error
                ("set","./core/templates/cowdata.h",0xcf,lVar5,lVar6,"p_index","size()","",false,
                 false);
    }
    else {
      _err_print_error("push_back","./core/templates/vector.h",0x142,
                       "Condition \"err\" is true. Returning: true",0,0);
    }
  }
LAB_0010b894:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this_00;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRInterface::free_actions(OpenXRInterface::ActionSet*) */

void __thiscall OpenXRInterface::free_actions(OpenXRInterface *this,ActionSet *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  if (*(long *)(this + 0x1a8) != 0) {
    lVar2 = *(long *)(param_1 + 0x18);
    for (lVar4 = 0; (lVar2 != 0 && (lVar4 < *(long *)(lVar2 + -8))); lVar4 = lVar4 + 1) {
      plVar3 = *(long **)(lVar2 + lVar4 * 8);
      OpenXRAPI::action_free(*(undefined8 *)(this + 0x1a8));
      if (*plVar3 != 0) {
        LOCK();
        plVar1 = (long *)(*plVar3 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar2 = *plVar3;
          *plVar3 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      Memory::free_static(plVar3,false);
      lVar2 = *(long *)(param_1 + 0x18);
    }
    CowData<OpenXRInterface::Action*>::resize<false>
              ((CowData<OpenXRInterface::Action*> *)(param_1 + 0x18),0);
    return;
  }
  _err_print_error("free_actions","modules/openxr/openxr_interface.cpp",0x1b2,
                   "Parameter \"openxr_api\" is null.",0,0);
  return;
}



/* OpenXRInterface::free_action_sets() */

void __thiscall OpenXRInterface::free_action_sets(OpenXRInterface *this)

{
  long lVar1;
  ActionSet *pAVar2;
  long lVar3;
  
  if (*(long *)(this + 0x1a8) != 0) {
    lVar1 = *(long *)(this + 0x428);
    for (lVar3 = 0; (lVar1 != 0 && (lVar3 < *(long *)(lVar1 + -8))); lVar3 = lVar3 + 1) {
      pAVar2 = *(ActionSet **)(lVar1 + lVar3 * 8);
      free_actions(this,pAVar2);
      OpenXRAPI::action_set_free(*(undefined8 *)(this + 0x1a8));
      Memory::free_static(pAVar2,false);
      lVar1 = *(long *)(this + 0x428);
    }
    CowData<OpenXRInterface::ActionSet*>::resize<false>
              ((CowData<OpenXRInterface::ActionSet*> *)(this + 0x428),0);
    return;
  }
  _err_print_error("free_action_sets","modules/openxr/openxr_interface.cpp",0x165,
                   "Parameter \"openxr_api\" is null.",0,0);
  return;
}



/* OpenXRInterface::uninitialize() */

void __thiscall OpenXRInterface::uninitialize(OpenXRInterface *this)

{
  long lVar1;
  char cVar2;
  Ref *pRVar3;
  Object *pOVar4;
  long in_FS_OFFSET;
  Object *local_28;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  free_trackers(this);
  free_interaction_profiles(this);
  free_action_sets(this);
  pRVar3 = (Ref *)XRServer::get_singleton();
  if ((pRVar3 != (Ref *)0x0) && (*(long *)(this + 0x1b8) != 0)) {
    local_28 = (Object *)0x0;
    pOVar4 = (Object *)
             __dynamic_cast(*(long *)(this + 0x1b8),&Object::typeinfo,&XRTracker::typeinfo,0);
    if (pOVar4 != (Object *)0x0) {
      cVar2 = RefCounted::reference();
      local_28 = pOVar4;
      if (cVar2 == '\0') {
        local_28 = (Object *)0x0;
      }
    }
    XRServer::remove_tracker(pRVar3);
    if (local_28 != (Object *)0x0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
        cVar2 = predelete_handler(local_28);
        if (cVar2 != '\0') {
          (**(code **)(*(long *)local_28 + 0x140))(local_28);
          Memory::free_static(local_28,false);
        }
      }
    }
    if (*(long *)(this + 0x1b8) != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
        pOVar4 = *(Object **)(this + 0x1b8);
        cVar2 = predelete_handler(pOVar4);
        if (cVar2 != '\0') {
          (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
          Memory::free_static(pOVar4,false);
        }
      }
    }
    *(undefined8 *)(this + 0x1b8) = 0;
  }
  DisplayServer::unregister_additional_output(DisplayServer::singleton);
  this[0x1b0] = (OpenXRInterface)0x0;
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRInterface::~OpenXRInterface() */

void __thiscall OpenXRInterface::~OpenXRInterface(OpenXRInterface *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  
  *(undefined ***)this = &PTR__initialize_classv_001221e0;
  if (this[0x1b0] != (OpenXRInterface)0x0) {
    uninitialize(this);
  }
  if (*(OpenXRInterface **)(this + 0x1a8) != (OpenXRInterface *)0x0) {
    OpenXRAPI::set_xr_interface(*(OpenXRInterface **)(this + 0x1a8));
    *(undefined8 *)(this + 0x1a8) = 0;
  }
  if (*(long *)(this + 0x448) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x448) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x448);
      *(undefined8 *)(this + 0x448) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x438) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x438) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x438);
      *(undefined8 *)(this + 0x438) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x428) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x428) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x428);
      *(undefined8 *)(this + 0x428) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  XRVRS::~XRVRS((XRVRS *)(this + 0x270));
  if (*(long *)(this + 0x1b8) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0x1b8);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
        XRInterface::~XRInterface((XRInterface *)this);
        return;
      }
    }
  }
  XRInterface::~XRInterface((XRInterface *)this);
  return;
}



/* OpenXRInterface::~OpenXRInterface() */

void __thiscall OpenXRInterface::~OpenXRInterface(OpenXRInterface *this)

{
  ~OpenXRInterface(this);
  operator_delete(this,0x450);
  return;
}



/* Vector<OpenXRInterface::Action*>::push_back(OpenXRInterface::Action*) [clone .isra.0] */

void __thiscall
Vector<OpenXRInterface::Action*>::push_back(Vector<OpenXRInterface::Action*> *this,Action *param_1)

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
  iVar1 = CowData<OpenXRInterface::Action*>::resize<false>
                    ((CowData<OpenXRInterface::Action*> *)(this + 8),lVar2);
  if (iVar1 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar3 = -1;
      lVar2 = 0;
    }
    else {
      lVar2 = *(long *)(*(long *)(this + 8) + -8);
      lVar3 = lVar2 + -1;
      if (-1 < lVar3) {
        CowData<OpenXRInterface::Action*>::_copy_on_write
                  ((CowData<OpenXRInterface::Action*> *)(this + 8));
        *(Action **)(*(long *)(this + 8) + lVar3 * 8) = param_1;
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



/* OpenXRInterface::create_action(OpenXRInterface::ActionSet*, String const&, String const&,
   OpenXRAction::ActionType, Vector<OpenXRInterface::Tracker*>) */

CowData<char32_t> * __thiscall
OpenXRInterface::create_action
          (OpenXRInterface *this,long param_1,String *param_2,CowData *param_3,int param_5,
          long param_6)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  long lVar6;
  CowData<char32_t> *this_00;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long in_FS_OFFSET;
  CowData<char32_t> *local_88;
  undefined8 local_70;
  Vector<RID> local_68 [8];
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x1a8) == 0) {
    _err_print_error("create_action","modules/openxr/openxr_interface.cpp",0x174,
                     "Parameter \"openxr_api\" is null.",0,0);
LAB_0010c178:
    this_00 = (CowData<char32_t> *)0x0;
  }
  else {
    lVar6 = *(long *)(param_1 + 0x18);
    for (lVar9 = 0; (lVar6 != 0 && (lVar9 < *(long *)(lVar6 + -8))); lVar9 = lVar9 + 1) {
      cVar5 = String::operator==(*(String **)(lVar6 + lVar9 * 8),param_2);
      if (cVar5 != '\0') goto LAB_0010c178;
      lVar6 = *(long *)(param_1 + 0x18);
    }
    lVar6 = *(long *)(param_6 + 8);
    local_60 = 0;
    if (lVar6 != 0) {
      lVar9 = 0;
      do {
        if (*(long *)(lVar6 + -8) <= lVar9) break;
        lVar2 = lVar9 * 8;
        lVar9 = lVar9 + 1;
        Vector<RID>::push_back(local_68,*(undefined8 *)(*(long *)(lVar6 + lVar2) + 0x20));
        lVar6 = *(long *)(param_6 + 8);
      } while (lVar6 != 0);
    }
    this_00 = (CowData<char32_t> *)operator_new(0x18,"");
    *(undefined8 *)this_00 = 0;
    *(undefined8 *)(this_00 + 0x10) = 0;
    if (param_5 == 3) {
      cVar5 = String::operator==(param_2,"default_pose");
      if (cVar5 == '\0') {
        cVar5 = String::operator==(param_2,"aim_pose");
        if (cVar5 == '\0') {
          cVar5 = String::operator==(param_2,"grip_pose");
          if (cVar5 == '\0') {
            if (*(long *)this_00 != *(long *)param_2) {
              CowData<char32_t>::_ref(this_00,(CowData *)param_2);
            }
          }
          else {
            String::parse_latin1((String *)this_00,"grip");
          }
        }
        else {
          String::parse_latin1((String *)this_00,"aim");
        }
      }
      else {
        local_50 = 7;
        local_58 = "default";
        String::parse_latin1((StrRange *)this_00);
      }
    }
    else if (*(long *)param_2 != 0) {
      CowData<char32_t>::_ref(this_00,(CowData *)param_2);
    }
    local_88 = (CowData<char32_t> *)&local_58;
    *(int *)(this_00 + 8) = param_5;
    uVar7 = *(undefined8 *)(this + 0x1a8);
    local_58 = (char *)0x0;
    if (*(long *)param_3 != 0) {
      CowData<char32_t>::_ref(local_88,param_3);
    }
    local_70 = 0;
    if (*(long *)param_2 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)param_2);
    }
    uVar7 = OpenXRAPI::action_create
                      (uVar7,*(undefined8 *)(param_1 + 0x20),(CowData<char32_t> *)&local_70,local_88
                       ,param_5,local_68);
    *(undefined8 *)(this_00 + 0x10) = uVar7;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    CowData<char32_t>::_unref(local_88);
    lVar9 = 0;
    Vector<OpenXRInterface::Action*>::push_back
              ((Vector<OpenXRInterface::Action*> *)(param_1 + 0x10),(Action *)this_00);
    lVar6 = *(long *)(param_6 + 8);
    lVar2 = local_60;
    while (local_60 = lVar2, lVar6 != 0) {
      while( true ) {
        if (*(long *)(lVar6 + -8) <= lVar9) goto LAB_0010c0e8;
        lVar3 = *(long *)(lVar6 + lVar9 * 8);
        lVar4 = *(long *)(lVar3 + 0x10);
        if ((lVar4 == 0) || (*(long *)(lVar4 + -8) < 1)) break;
        lVar8 = 0;
        while (this_00 != *(CowData<char32_t> **)(lVar4 + lVar8 * 8)) {
          lVar8 = lVar8 + 1;
          if (*(long *)(lVar4 + -8) == lVar8) goto LAB_0010c130;
        }
        lVar9 = lVar9 + 1;
        if (lVar6 == 0) goto LAB_0010c0e8;
      }
LAB_0010c130:
      lVar9 = lVar9 + 1;
      Vector<OpenXRInterface::Action*>::push_back
                ((Vector<OpenXRInterface::Action*> *)(lVar3 + 8),(Action *)this_00);
      lVar2 = local_60;
      lVar6 = *(long *)(param_6 + 8);
    }
LAB_0010c0e8:
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this_00;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRInterface::_load_action_map() */

void __thiscall OpenXRInterface::_load_action_map(OpenXRInterface *this)

{
  int *piVar1;
  undefined8 uVar2;
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
  undefined1 auVar13 [16];
  undefined8 uVar14;
  char cVar15;
  int iVar16;
  int iVar17;
  undefined4 uVar18;
  long lVar19;
  Object *pOVar20;
  long lVar21;
  Object *pOVar22;
  Tracker *pTVar23;
  long lVar24;
  long *plVar25;
  ulong uVar26;
  Object *pOVar27;
  ulong uVar28;
  int *piVar29;
  undefined8 *puVar30;
  uint uVar31;
  ulong uVar32;
  uint uVar33;
  int iVar34;
  long in_FS_OFFSET;
  bool bVar35;
  Object *local_f0;
  Array local_e8 [8];
  Array local_e0 [8];
  long local_d8;
  Object *local_d0;
  Object *local_c8;
  CowData<char32_t> local_c0 [8];
  Variant *local_b8;
  Variant *local_b0;
  Variant *local_a8;
  long local_a0;
  undefined8 local_98;
  long local_90;
  Object *local_88;
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x1a8) == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("_load_action_map","modules/openxr/openxr_interface.cpp",0xc3,
                       "Parameter \"openxr_api\" is null.",0,0);
      return;
    }
    goto LAB_0010d43b;
  }
  free_trackers(this);
  free_interaction_profiles(this);
  free_action_sets(this);
  local_f0 = (Object *)0x0;
  lVar19 = Engine::get_singleton();
  if (*(char *)(lVar19 + 0xc0) == '\0') {
    OpenXRAPI::get_default_action_map_resource_name();
    local_98 = 0;
    local_88 = (Object *)&_LC10;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = local_80._8_8_;
    local_80 = auVar13 << 0x40;
    String::parse_latin1((StrRange *)&local_98);
    cVar15 = ResourceLoader::exists((String *)&local_a8,(String *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    if (cVar15 != '\0') {
      local_98 = 0;
      String::parse_latin1((String *)&local_98,"");
      ResourceLoader::load((Ref *)&local_88,(String *)&local_a8,(StrRange *)&local_98,1);
      if (local_88 == (Object *)0x0) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      }
      else {
        pOVar20 = (Object *)__dynamic_cast(local_88,&Object::typeinfo,&OpenXRActionMap::typeinfo,0);
        if (pOVar20 == (Object *)0x0) {
LAB_0010c995:
          cVar15 = RefCounted::unreference();
          pOVar22 = local_88;
          pOVar20 = local_f0;
          if ((cVar15 != '\0') &&
             (cVar15 = predelete_handler(local_88), pOVar20 = local_f0, cVar15 != '\0')) {
            (**(code **)(*(long *)pOVar22 + 0x140))();
            Memory::free_static(pOVar22,false);
          }
        }
        else {
          local_f0 = pOVar20;
          cVar15 = RefCounted::reference();
          if (cVar15 == '\0') {
            local_f0 = (Object *)0x0;
          }
          pOVar20 = local_f0;
          if (local_88 != (Object *)0x0) goto LAB_0010c995;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
        if (pOVar20 != (Object *)0x0) {
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
          goto LAB_0010c2f0;
        }
      }
    }
    Ref<OpenXRActionMap>::instantiate<>((Ref<OpenXRActionMap> *)&local_f0);
    pOVar20 = local_f0;
    OpenXRActionMap::create_default_action_sets();
    (**(code **)(*(long *)pOVar20 + 0x188))(pOVar20,(String *)&local_a8,1);
    local_88 = (Object *)0x0;
    pOVar20 = (Object *)__dynamic_cast(pOVar20,&Object::typeinfo,&Resource::typeinfo,0);
    if ((pOVar20 != (Object *)0x0) &&
       (local_88 = pOVar20, cVar15 = RefCounted::reference(), cVar15 == '\0')) {
      local_88 = (Object *)0x0;
    }
    ResourceSaver::save((Ref *)&local_88,(String *)&local_a8,0);
    if (((local_88 != (Object *)0x0) &&
        (cVar15 = RefCounted::unreference(), pOVar20 = local_88, cVar15 != '\0')) &&
       (cVar15 = predelete_handler(local_88), cVar15 != '\0')) {
      (**(code **)(*(long *)pOVar20 + 0x140))(pOVar20);
      Memory::free_static(pOVar20,false);
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  }
  else {
    Ref<OpenXRActionMap>::instantiate<>((Ref<OpenXRActionMap> *)&local_f0);
    OpenXRActionMap::create_editor_action_sets();
  }
LAB_0010c2f0:
  local_60 = 2;
  local_80 = (undefined1  [16])0x0;
  local_70 = (undefined1  [16])0x0;
  OpenXRActionMap::get_action_sets();
  for (iVar34 = 0; iVar16 = Array::size(), iVar34 < iVar16; iVar34 = iVar34 + 1) {
    Array::operator[]((int)local_e8);
    pOVar20 = (Object *)Variant::get_validated_object();
    if (((pOVar20 != (Object *)0x0) &&
        (pOVar20 = (Object *)__dynamic_cast(pOVar20,&Object::typeinfo,&OpenXRActionSet::typeinfo,0),
        pOVar20 != (Object *)0x0)) && (cVar15 = RefCounted::reference(), cVar15 == '\0')) {
      pOVar20 = (Object *)0x0;
    }
    iVar16 = OpenXRActionSet::get_priority();
    OpenXRActionSet::get_localized_name();
    Resource::get_name();
    lVar19 = create_action_set(this,(String *)&local_a8,(String *)&local_98,iVar16);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    if (lVar19 != 0) {
      OpenXRActionSet::get_actions();
      for (iVar16 = 0; iVar17 = Array::size(), iVar16 < iVar17; iVar16 = iVar16 + 1) {
        Array::operator[]((int)(Array *)&local_d8);
        local_d0 = (Object *)0x0;
        lVar21 = Variant::get_validated_object();
        if ((lVar21 == 0) ||
           (pOVar22 = (Object *)__dynamic_cast(lVar21,&Object::typeinfo,&OpenXRAction::typeinfo,0),
           pOVar22 == (Object *)0x0)) {
LAB_0010c4a7:
          pOVar22 = (Object *)0x0;
        }
        else {
          local_d0 = pOVar22;
          cVar15 = RefCounted::reference();
          if (cVar15 == '\0') {
            local_d0 = (Object *)0x0;
            goto LAB_0010c4a7;
          }
        }
        OpenXRAction::get_toplevel_paths();
        local_a0 = 0;
        if (local_b0 == (Variant *)0x0) {
          CowData<String>::_unref((CowData<String> *)&local_b0);
LAB_0010c751:
          cVar15 = RefCounted::unreference();
          if ((cVar15 != '\0') && (cVar15 = predelete_handler(pOVar22), cVar15 != '\0')) {
            (**(code **)(*(long *)pOVar22 + 0x140))(pOVar22);
            Memory::free_static(pOVar22,false);
          }
        }
        else {
          lVar21 = 0;
          do {
            if (*(long *)(local_b0 + -8) <= lVar21) break;
            cVar15 = OpenXRAPI::is_top_level_path_supported(*(String **)(this + 0x1a8));
            if (cVar15 != '\0') {
              if (local_b0 == (Variant *)0x0) {
                lVar24 = 0;
LAB_0010c703:
                _err_print_index_error
                          ("get","./core/templates/cowdata.h",0xdb,lVar21,lVar24,"p_index","size()",
                           "",false,true);
                _err_flush_stdout();
                    /* WARNING: Does not return */
                pcVar12 = (code *)invalidInstructionException();
                (*pcVar12)();
              }
              lVar24 = *(long *)(local_b0 + -8);
              if (lVar24 <= lVar21) goto LAB_0010c703;
              pTVar23 = (Tracker *)find_tracker(this,(String *)(local_b0 + lVar21 * 8),true);
              if (pTVar23 != (Tracker *)0x0) {
                Vector<OpenXRInterface::Tracker*>::push_back
                          ((Vector<OpenXRInterface::Tracker*> *)&local_a8,pTVar23);
              }
            }
            lVar21 = lVar21 + 1;
          } while (local_b0 != (Variant *)0x0);
          if (local_a0 != 0) {
            if (0 < *(long *)(local_a0 + -8)) {
              local_90 = 0;
              plVar25 = (long *)(local_a0 + -0x10);
              do {
                lVar21 = *plVar25;
                if (lVar21 == 0) goto LAB_0010c809;
                LOCK();
                lVar24 = *plVar25;
                bVar35 = lVar21 == lVar24;
                if (bVar35) {
                  *plVar25 = lVar21 + 1;
                  lVar24 = lVar21;
                }
                UNLOCK();
              } while (!bVar35);
              if (lVar24 != -1) {
                local_90 = local_a0;
              }
LAB_0010c809:
              lVar21 = local_90;
              uVar18 = OpenXRAction::get_action_type();
              OpenXRAction::get_localized_name();
              Resource::get_name();
              lVar24 = create_action(this,lVar19,(CowData<char32_t> *)&local_c8,local_c0,uVar18,
                                     (CowData<char32_t> *)&local_98);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
              CowData<char32_t>::_unref(local_c0);
              if (lVar21 != 0) {
                LOCK();
                plVar25 = (long *)(lVar21 + -0x10);
                *plVar25 = *plVar25 + -1;
                UNLOCK();
                if (*plVar25 == 0) {
                  Memory::free_static((void *)(local_90 + -0x10),false);
                }
              }
              if (lVar24 != 0) {
                plVar25 = (long *)HashMap<Ref<OpenXRAction>,OpenXRInterface::Action*,HashMapHasherDefault,HashMapComparatorDefault<Ref<OpenXRAction>>,DefaultTypedAllocator<HashMapElement<Ref<OpenXRAction>,OpenXRInterface::Action*>>>
                                  ::operator[]((HashMap<Ref<OpenXRAction>,OpenXRInterface::Action*,HashMapHasherDefault,HashMapComparatorDefault<Ref<OpenXRAction>>,DefaultTypedAllocator<HashMapElement<Ref<OpenXRAction>,OpenXRInterface::Action*>>>
                                                *)&local_88,(Ref *)&local_d0);
                *plVar25 = lVar24;
              }
              pOVar22 = local_d0;
              if (local_a0 == 0) goto LAB_0010c58c;
            }
            LOCK();
            plVar25 = (long *)(local_a0 + -0x10);
            *plVar25 = *plVar25 + -1;
            UNLOCK();
            pOVar22 = local_d0;
            if (*plVar25 == 0) {
              Memory::free_static((void *)(local_a0 + -0x10),false);
              pOVar22 = local_d0;
            }
          }
LAB_0010c58c:
          CowData<String>::_unref((CowData<String> *)&local_b0);
          if (pOVar22 != (Object *)0x0) goto LAB_0010c751;
        }
      }
      Array::~Array((Array *)&local_d8);
    }
    cVar15 = RefCounted::unreference();
    if ((cVar15 != '\0') && (cVar15 = predelete_handler(pOVar20), cVar15 != '\0')) {
      (**(code **)(*(long *)pOVar20 + 0x140))(pOVar20);
      Memory::free_static(pOVar20,false);
    }
  }
  OpenXRActionMap::get_interaction_profiles();
  for (iVar34 = 0; iVar16 = Array::size(), iVar34 < iVar16; iVar34 = iVar34 + 1) {
    Array::operator[]((int)local_e0);
    pOVar20 = (Object *)Variant::get_validated_object();
    if (((pOVar20 != (Object *)0x0) &&
        (pOVar20 = (Object *)
                   __dynamic_cast(pOVar20,&Object::typeinfo,&OpenXRInteractionProfile::typeinfo,0),
        pOVar20 != (Object *)0x0)) && (cVar15 = RefCounted::reference(), cVar15 == '\0')) {
      pOVar20 = (Object *)0x0;
    }
    uVar2 = *(undefined8 *)(this + 0x1a8);
    OpenXRInteractionProfile::get_interaction_profile_path();
    local_d8 = OpenXRAPI::interaction_profile_create(uVar2);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    if (local_d8 != 0) {
      OpenXRAPI::interaction_profile_clear_bindings(*(undefined8 *)(this + 0x1a8),local_d8);
      OpenXRInteractionProfile::get_binding_modifiers();
      Array::begin();
      Array::end();
      if (local_b8 != local_a8) {
        do {
          if (local_b0 != (Variant *)0x0) {
            Variant::operator=(local_b0,local_b8);
          }
          lVar19 = Variant::get_validated_object();
          if ((lVar19 == 0) ||
             (pOVar22 = (Object *)
                        __dynamic_cast(lVar19,&Object::typeinfo,&OpenXRBindingModifier::typeinfo,0),
             pOVar22 == (Object *)0x0)) {
OpenXRInterface__load_action_map:
                    /* WARNING: Does not return */
            pcVar12 = (code *)invalidInstructionException();
            (*pcVar12)();
          }
          cVar15 = RefCounted::reference();
          if (cVar15 == '\0') {
            pOVar22 = (Object *)0x0;
          }
          (**(code **)(*(long *)pOVar22 + 0x1d0))((CowData<char32_t> *)&local_98);
          if ((local_90 != 0) &&
             (OpenXRAPI::interaction_profile_add_modifier
                        (*(undefined8 *)(this + 0x1a8),local_d8,(CowData<char32_t> *)&local_98),
             lVar19 = local_90, local_90 != 0)) {
            LOCK();
            plVar25 = (long *)(local_90 + -0x10);
            *plVar25 = *plVar25 + -1;
            UNLOCK();
            if (*plVar25 == 0) {
              local_90 = 0;
              Memory::free_static((void *)(lVar19 + -0x10),false);
            }
          }
          cVar15 = RefCounted::unreference();
          if ((cVar15 != '\0') && (cVar15 = predelete_handler(pOVar22), cVar15 != '\0')) {
            (**(code **)(*(long *)pOVar22 + 0x140))(pOVar22);
            Memory::free_static(pOVar22,false);
          }
          local_b8 = local_b8 + 0x18;
        } while (local_b8 != local_a8);
      }
      Array::~Array((Array *)local_c0);
      OpenXRInteractionProfile::get_bindings();
      iVar16 = 0;
LAB_0010cd00:
      iVar17 = Array::size();
      if (iVar16 < iVar17) {
        Array::operator[]((int)(Array *)&local_d0);
        pOVar22 = (Object *)Variant::get_validated_object();
        if (((pOVar22 != (Object *)0x0) &&
            (pOVar22 = (Object *)
                       __dynamic_cast(pOVar22,&Object::typeinfo,&OpenXRIPBinding::typeinfo,0),
            pOVar22 != (Object *)0x0)) && (cVar15 = RefCounted::reference(), cVar15 == '\0')) {
          pOVar22 = (Object *)0x0;
        }
        OpenXRIPBinding::get_action();
        if ((local_80._0_8_ != 0) && (local_60._4_4_ != 0)) {
          uVar32 = CONCAT44(0,*(uint *)(hash_table_size_primes + (local_60 & 0xffffffff) * 4));
          lVar19 = *(long *)(hash_table_size_primes_inv + (local_60 & 0xffffffff) * 8);
          uVar26 = (long)local_c8 * 0x3ffff - 1;
          uVar26 = (uVar26 ^ uVar26 >> 0x1f) * 0x15;
          uVar26 = (uVar26 ^ uVar26 >> 0xb) * 0x41;
          uVar26 = uVar26 >> 0x16 ^ uVar26;
          uVar28 = uVar26 & 0xffffffff;
          if ((int)uVar26 == 0) {
            uVar28 = 1;
          }
          auVar4._8_8_ = 0;
          auVar4._0_8_ = uVar28 * lVar19;
          auVar8._8_8_ = 0;
          auVar8._0_8_ = uVar32;
          lVar21 = SUB168(auVar4 * auVar8,8);
          uVar31 = *(uint *)(local_80._8_8_ + lVar21 * 4);
          iVar17 = SUB164(auVar4 * auVar8,8);
          if (uVar31 != 0) {
            uVar33 = 0;
            do {
              if (((uint)uVar28 == uVar31) &&
                 (local_c8 == *(Object **)(*(long *)(local_80._0_8_ + lVar21 * 8) + 0x10))) {
                plVar25 = (long *)HashMap<Ref<OpenXRAction>,OpenXRInterface::Action*,HashMapHasherDefault,HashMapComparatorDefault<Ref<OpenXRAction>>,DefaultTypedAllocator<HashMapElement<Ref<OpenXRAction>,OpenXRInterface::Action*>>>
                                  ::operator[]((HashMap<Ref<OpenXRAction>,OpenXRInterface::Action*,HashMapHasherDefault,HashMapComparatorDefault<Ref<OpenXRAction>>,DefaultTypedAllocator<HashMapElement<Ref<OpenXRAction>,OpenXRInterface::Action*>>>
                                                *)&local_88,(Ref *)&local_c8);
                lVar19 = *plVar25;
                uVar2 = *(undefined8 *)(this + 0x1a8);
                OpenXRIPBinding::get_binding_path();
                iVar17 = OpenXRAPI::interaction_profile_add_binding
                                   (uVar2,local_d8,*(undefined8 *)(lVar19 + 0x10),
                                    (CowData<char32_t> *)&local_98);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
                if (iVar17 < 0) goto LAB_0010cef2;
                OpenXRIPBinding::get_binding_modifiers();
                Array::begin();
                Array::end();
                if (local_b8 == local_a8) goto LAB_0010d169;
                goto LAB_0010d072;
              }
              uVar33 = uVar33 + 1;
              auVar5._8_8_ = 0;
              auVar5._0_8_ = (ulong)(iVar17 + 1) * lVar19;
              auVar9._8_8_ = 0;
              auVar9._0_8_ = uVar32;
              lVar21 = SUB168(auVar5 * auVar9,8);
              uVar31 = *(uint *)(local_80._8_8_ + lVar21 * 4);
              iVar17 = SUB164(auVar5 * auVar9,8);
            } while ((uVar31 != 0) &&
                    (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar31 * lVar19, auVar10._8_8_ = 0,
                    auVar10._0_8_ = uVar32, auVar7._8_8_ = 0,
                    auVar7._0_8_ = (ulong)((*(uint *)(hash_table_size_primes +
                                                     (local_60 & 0xffffffff) * 4) + iVar17) -
                                          SUB164(auVar6 * auVar10,8)) * lVar19, auVar11._8_8_ = 0,
                    auVar11._0_8_ = uVar32, uVar33 <= SUB164(auVar7 * auVar11,8)));
          }
        }
        Resource::get_name();
        Variant::Variant((Variant *)local_58,"Action ");
        print_line<String,char_const*>
                  ((Variant *)local_58,(CowData<char32_t> *)&local_98,
                   " isn\'t part of an action set!");
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
        if (local_c8 != (Object *)0x0) {
          cVar15 = RefCounted::unreference();
          pOVar27 = local_c8;
          goto joined_r0x0010cf06;
        }
        goto LAB_0010cf0c;
      }
      OpenXRAPI::interaction_profile_suggest_bindings(*(undefined8 *)(this + 0x1a8),local_d8);
      Variant::Variant((Variant *)local_58,(RID *)&local_d8);
      cVar15 = Array::has((Variant *)local_e0);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (cVar15 != '\0') {
        Variant::Variant((Variant *)local_58,(RID *)&local_d8);
        Array::push_back((Variant *)local_e0);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
      }
      Array::~Array((Array *)&local_d0);
    }
    cVar15 = RefCounted::unreference();
    if ((cVar15 != '\0') && (cVar15 = predelete_handler(pOVar20), cVar15 != '\0')) {
      (**(code **)(*(long *)pOVar20 + 0x140))(pOVar20);
      Memory::free_static(pOVar20,false);
    }
  }
  Array::~Array(local_e0);
  Array::~Array(local_e8);
  uVar2 = local_80._0_8_;
  if ((undefined8 *)local_80._0_8_ != (undefined8 *)0x0) {
    uVar14 = local_80._8_8_;
    if ((local_60._4_4_ != 0) &&
       (*(uint *)(hash_table_size_primes + (local_60 & 0xffffffff) * 4) != 0)) {
      piVar1 = (int *)(local_80._8_8_ +
                      (ulong)*(uint *)(hash_table_size_primes + (local_60 & 0xffffffff) * 4) * 4);
      piVar29 = (int *)local_80._8_8_;
      puVar30 = (undefined8 *)local_80._0_8_;
      do {
        if (*piVar29 != 0) {
          pvVar3 = (void *)*puVar30;
          *piVar29 = 0;
          if ((*(long *)((long)pvVar3 + 0x10) != 0) &&
             (cVar15 = RefCounted::unreference(), cVar15 != '\0')) {
            pOVar20 = *(Object **)((long)pvVar3 + 0x10);
            cVar15 = predelete_handler(pOVar20);
            if (cVar15 != '\0') {
              (**(code **)(*(long *)pOVar20 + 0x140))();
              Memory::free_static(pOVar20,false);
            }
          }
          Memory::free_static(pvVar3,false);
          *puVar30 = 0;
        }
        piVar29 = piVar29 + 1;
        puVar30 = puVar30 + 1;
      } while (piVar1 != piVar29);
    }
    Memory::free_static((void *)uVar2,false);
    Memory::free_static((void *)uVar14,false);
  }
  pOVar20 = local_f0;
  if (((local_f0 == (Object *)0x0) || (cVar15 = RefCounted::unreference(), cVar15 == '\0')) ||
     (cVar15 = predelete_handler(pOVar20), cVar15 == '\0')) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    (**(code **)(*(long *)pOVar20 + 0x140))(pOVar20);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Memory::free_static(pOVar20,false);
      return;
    }
  }
LAB_0010d43b:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
  while( true ) {
    cVar15 = RefCounted::reference();
    if (cVar15 == '\0') {
      pOVar27 = (Object *)0x0;
    }
    (**(code **)(*(long *)pOVar27 + 0x1d0))((CowData<char32_t> *)&local_98);
    if ((local_90 != 0) &&
       (OpenXRAPI::interaction_profile_add_modifier
                  (*(undefined8 *)(this + 0x1a8),local_d8,(CowData<char32_t> *)&local_98),
       lVar19 = local_90, local_90 != 0)) {
      LOCK();
      plVar25 = (long *)(local_90 + -0x10);
      *plVar25 = *plVar25 + -1;
      UNLOCK();
      if (*plVar25 == 0) {
        local_90 = 0;
        Memory::free_static((void *)(lVar19 + -0x10),false);
      }
    }
    cVar15 = RefCounted::unreference();
    if ((cVar15 != '\0') && (cVar15 = predelete_handler(pOVar27), cVar15 != '\0')) {
      (**(code **)(*(long *)pOVar27 + 0x140))(pOVar27);
      Memory::free_static(pOVar27,false);
    }
    local_b8 = local_b8 + 0x18;
    if (local_b8 == local_a8) break;
LAB_0010d072:
    if (local_b0 != (Variant *)0x0) {
      Variant::operator=(local_b0,local_b8);
    }
    lVar19 = Variant::get_validated_object();
    if ((lVar19 == 0) ||
       (pOVar27 = (Object *)
                  __dynamic_cast(lVar19,&Object::typeinfo,&OpenXRBindingModifier::typeinfo,0),
       pOVar27 == (Object *)0x0)) goto OpenXRInterface__load_action_map;
  }
LAB_0010d169:
  Array::~Array((Array *)local_c0);
LAB_0010cef2:
  if (local_c8 != (Object *)0x0) {
    cVar15 = RefCounted::unreference();
    pOVar27 = local_c8;
joined_r0x0010cf06:
    local_c8 = pOVar27;
    if ((cVar15 != '\0') && (cVar15 = predelete_handler(pOVar27), cVar15 != '\0')) {
      (**(code **)(*(long *)pOVar27 + 0x140))(pOVar27);
      Memory::free_static(pOVar27,false);
    }
  }
LAB_0010cf0c:
  cVar15 = RefCounted::unreference();
  if ((cVar15 != '\0') && (cVar15 = predelete_handler(pOVar22), cVar15 != '\0')) {
    (**(code **)(*(long *)pOVar22 + 0x140))(pOVar22);
    Memory::free_static(pOVar22,false);
  }
  iVar16 = iVar16 + 1;
  goto LAB_0010cd00;
}



/* OpenXRInterface::initialize() */

undefined4 __thiscall OpenXRInterface::initialize(OpenXRInterface *this)

{
  long *plVar1;
  StringName *pSVar2;
  String *pSVar3;
  undefined8 uVar4;
  OpenXRInterface *pOVar5;
  char cVar6;
  undefined4 uVar7;
  Ref *pRVar8;
  RefCounted *this_00;
  Object *pOVar9;
  long lVar10;
  RefCounted *pRVar11;
  Object *pOVar12;
  long lVar13;
  long in_FS_OFFSET;
  byte bVar14;
  OpenXRInterface *local_60;
  Object *local_58;
  long local_50;
  long local_40;
  
  bVar14 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pRVar8 = (Ref *)XRServer::get_singleton();
  if (pRVar8 == (Ref *)0x0) {
    _err_print_error("initialize","modules/openxr/openxr_interface.cpp",0x27c,
                     "Parameter \"xr_server\" is null.",0,0);
  }
  else if ((*(long *)(this + 0x1a8) != 0) &&
          (uVar7 = OpenXRAPI::is_initialized(), (char)uVar7 != '\0')) {
    if (this[0x1b0] != (OpenXRInterface)0x0) goto LAB_0010d4b3;
    _load_action_map(this);
    cVar6 = OpenXRAPI::initialize_session();
    if (cVar6 == '\0') goto LAB_0010d4b0;
    this_00 = (RefCounted *)operator_new(600,"");
    pRVar11 = this_00;
    for (lVar10 = 0x4b; lVar10 != 0; lVar10 = lVar10 + -1) {
      *(undefined8 *)pRVar11 = 0;
      pRVar11 = pRVar11 + (ulong)bVar14 * -0x10 + 8;
    }
    RefCounted::RefCounted(this_00);
    *(undefined1 (*) [16])(this_00 + 400) = (undefined1  [16])0x0;
    *(code **)this_00 = OpenXRAPI::attach_action_sets;
    *(undefined8 *)(this_00 + 0x1a0) = 0;
    *(undefined4 *)(this_00 + 400) = 1;
    *(undefined4 *)(this_00 + 0x1a8) = 0x80;
    *(undefined1 (*) [16])(this_00 + 0x180) = (undefined1  [16])0x0;
    StringName::StringName((StringName *)(this_00 + 0x1b0),"Unknown",false);
    *(code **)this_00 = XRServer::set_primary_interface;
    uVar4 = _LC238;
    *(undefined1 (*) [16])(this_00 + 0x1d0) = (undefined1  [16])0x0;
    *(undefined8 *)(this_00 + 0x1b8) = 0;
    *(undefined8 *)(this_00 + 0x1e0) = 0;
    *(undefined4 *)(this_00 + 0x1d0) = 1;
    *(undefined8 *)(this_00 + 0x1e8) = 0;
    *(undefined4 *)(this_00 + 0x1f0) = 0;
    *(undefined8 *)(this_00 + 0x220) = uVar4;
    *(undefined8 *)(this_00 + 0x250) = uVar4;
    *(undefined1 (*) [16])(this_00 + 0x1c0) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(this_00 + 0x200) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(this_00 + 0x210) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(this_00 + 0x230) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(this_00 + 0x240) = (undefined1  [16])0x0;
    postinitialize_handler((Object *)this_00);
    cVar6 = RefCounted::init_ref();
    if (cVar6 == '\0') {
      pOVar9 = *(Object **)(this + 0x1b8);
      if (pOVar9 != (Object *)0x0) {
        *(undefined8 *)(this + 0x1b8) = 0;
        cVar6 = RefCounted::unreference();
        if (cVar6 != '\0') {
          this_00 = (RefCounted *)0x0;
          cVar6 = predelete_handler(pOVar9);
          if (cVar6 != '\0') goto LAB_0010d8ae;
        }
        goto LAB_0010d65b;
      }
    }
    else {
      pOVar9 = *(Object **)(this + 0x1b8);
      pOVar12 = pOVar9;
      if (this_00 != (RefCounted *)pOVar9) {
        *(RefCounted **)(this + 0x1b8) = this_00;
        cVar6 = RefCounted::reference();
        if (cVar6 == '\0') {
          *(undefined8 *)(this + 0x1b8) = 0;
        }
        pOVar12 = (Object *)this_00;
        if (((pOVar9 != (Object *)0x0) && (cVar6 = RefCounted::unreference(), cVar6 != '\0')) &&
           (cVar6 = predelete_handler(pOVar9), cVar6 != '\0')) {
LAB_0010d8ae:
          (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
          Memory::free_static(pOVar9,false);
          pOVar12 = (Object *)this_00;
          if (this_00 == (RefCounted *)0x0) goto LAB_0010d65b;
        }
      }
      cVar6 = RefCounted::unreference();
      if ((cVar6 != '\0') && (cVar6 = predelete_handler(pOVar12), cVar6 != '\0')) {
        (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
        Memory::free_static(pOVar12,false);
      }
LAB_0010d65b:
      pOVar9 = *(Object **)(this + 0x1b8);
    }
    (**(code **)(*(long *)pOVar9 + 0x150))(pOVar9,1);
    pSVar2 = *(StringName **)(this + 0x1b8);
    StringName::StringName((StringName *)&local_58,"head",false);
    XRTracker::set_tracker_name(pSVar2);
    if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
      StringName::unref();
    }
    pSVar3 = *(String **)(this + 0x1b8);
    local_58 = (Object *)0x10ec31;
    local_60 = (OpenXRInterface *)0x0;
    local_50 = 0xc;
    String::parse_latin1((StrRange *)&local_60);
    XRTracker::set_tracker_desc(pSVar3);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    local_58 = (Object *)0x0;
    if (((*(long *)(this + 0x1b8) != 0) &&
        (pOVar9 = (Object *)
                  __dynamic_cast(*(long *)(this + 0x1b8),&Object::typeinfo,&XRTracker::typeinfo,0),
        pOVar9 != (Object *)0x0)) &&
       (local_58 = pOVar9, cVar6 = RefCounted::reference(), cVar6 == '\0')) {
      local_58 = (Object *)0x0;
    }
    XRServer::add_tracker(pRVar8);
    if (((local_58 != (Object *)0x0) &&
        (cVar6 = RefCounted::unreference(), pOVar9 = local_58, cVar6 != '\0')) &&
       (cVar6 = predelete_handler(local_58), cVar6 != '\0')) {
      (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
      Memory::free_static(pOVar9,false);
    }
    lVar10 = *(long *)(this + 0x428);
    local_50 = 0;
    for (lVar13 = 0; (lVar10 != 0 && (lVar13 < *(long *)(lVar10 + -8))); lVar13 = lVar13 + 1) {
      Vector<RID>::push_back
                ((Vector<RID> *)&local_58,*(undefined8 *)(*(long *)(lVar10 + lVar13 * 8) + 0x20));
      lVar10 = *(long *)(this + 0x428);
    }
    OpenXRAPI::attach_action_sets(*(Vector **)(this + 0x1a8));
    local_60 = this;
    cVar6 = RefCounted::init_ref();
    if (cVar6 == '\0') {
      local_60 = (OpenXRInterface *)0x0;
    }
    XRServer::set_primary_interface(pRVar8);
    if (((local_60 != (OpenXRInterface *)0x0) &&
        (cVar6 = RefCounted::unreference(), pOVar5 = local_60, cVar6 != '\0')) &&
       (cVar6 = predelete_handler((Object *)local_60), cVar6 != '\0')) {
      (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
      Memory::free_static(pOVar5,false);
    }
    DisplayServer::register_additional_output(DisplayServer::singleton);
    lVar10 = local_50;
    this[0x1b0] = (OpenXRInterface)0x1;
    if (local_50 != 0) {
      LOCK();
      plVar1 = (long *)(local_50 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar10 + -0x10),false);
      }
    }
    goto LAB_0010d4b3;
  }
LAB_0010d4b0:
  uVar7 = 0;
LAB_0010d4b3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OpenXRInterface::post_draw_viewport(RID, Rect2 const&) */

long OpenXRInterface::post_draw_viewport
               (long param_1,long *param_2,undefined8 param_3,float *param_4)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long in_FS_OFFSET;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Db;
  double dVar6;
  float extraout_XMM0_Db_00;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [16];
  uint uStack_b0;
  undefined4 uStack_ac;
  uint local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined8 uStack_94;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 auStack_70 [16];
  ulong uStack_60;
  ulong local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined8 uStack_44;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  fVar9 = *param_4;
  *(undefined8 *)(param_1 + 8) = 0;
  if ((((fVar9 != 0.0) || (param_4[1] != 0.0)) || (param_4[2] != 0.0)) || (param_4[3] != 0.0)) {
    auStack_c0._0_8_ = 0;
    auStack_c0._8_8_ = 0;
    uStack_a4 = 0;
    uStack_a0 = 0;
    local_d8 = param_3;
    if (*(code **)(*param_2 + 0x1e8) == get_render_target_size) {
      if (param_2[0x35] == 0) {
        fVar9 = 0.0;
        fVar8 = 0.0;
      }
      else {
        OpenXRAPI::get_recommended_target_size();
        fVar9 = extraout_XMM0_Db;
        fVar8 = extraout_XMM0_Da;
      }
    }
    else {
      (**(code **)(*param_2 + 0x1e8))(param_2);
      fVar9 = extraout_XMM0_Db_00;
      fVar8 = extraout_XMM0_Da_00;
    }
    fStack_e0 = (float)*(undefined8 *)(param_4 + 2);
    fStack_dc = (float)((ulong)*(undefined8 *)(param_4 + 2) >> 0x20);
    fVar7 = (fVar9 / fVar8) * fStack_e0;
    if (fVar7 <= fStack_dc) {
      dVar6 = (double)fStack_e0;
      fVar9 = (fVar8 / fVar9) * fStack_dc;
      _fStack_e0 = CONCAT44(fStack_dc,fVar9);
      _local_e8 = CONCAT44((float)((ulong)*(undefined8 *)param_4 >> 0x20),
                           (float)(dVar6 * _LC247 - (double)fVar9 * _LC247));
    }
    else {
      dVar6 = (double)fStack_dc;
      _fStack_e0 = CONCAT44(fVar7,fStack_e0);
      _local_e8 = CONCAT44((float)(dVar6 * _LC247 - (double)fVar7 * _LC247),
                           (float)*(undefined8 *)param_4);
    }
    auStack_c0 = Rect2::operator_cast_to_Rect2i((Rect2 *)&local_e8);
    uVar1 = local_a8;
    uStack_b0 = CONCAT31(uStack_b0._1_3_,1);
    uStack_d0 = __LC246;
    uStack_c8 = _UNK_00122e78;
    uStack_9c = (undefined4)__LC246;
    uStack_98 = (undefined4)((ulong)__LC246 >> 0x20);
    uStack_94 = _UNK_00122e78;
    uStack_ac = 0;
    uStack_60 = (ulong)uStack_b0;
    local_a8 = local_a8 & 0xffffff00;
    local_88 = local_d8;
    uStack_80 = __LC246;
    local_58 = CONCAT44(uStack_a4,uVar1) & 0xffffffffffffff00;
    local_78 = _UNK_00122e78;
    uStack_50 = uStack_a0;
    uStack_44 = _UNK_00122e78;
    if (*(long *)(param_1 + 8) == 0) {
      lVar4 = 1;
    }
    else {
      lVar4 = *(long *)(*(long *)(param_1 + 8) + -8) + 1;
    }
    uStack_4c = uStack_9c;
    uStack_48 = uStack_98;
    auStack_70 = auStack_c0;
    iVar2 = CowData<BlitToScreen>::resize<false>((CowData<BlitToScreen> *)(param_1 + 8),lVar4);
    if (iVar2 == 0) {
      if (*(long *)(param_1 + 8) == 0) {
        lVar5 = -1;
        lVar4 = 0;
      }
      else {
        lVar4 = *(long *)(*(long *)(param_1 + 8) + -8);
        lVar5 = lVar4 + -1;
        if (-1 < lVar5) {
          CowData<BlitToScreen>::_copy_on_write((CowData<BlitToScreen> *)(param_1 + 8));
          puVar3 = (undefined8 *)(lVar5 * 0x50 + *(long *)(param_1 + 8));
          *puVar3 = local_88;
          puVar3[1] = uStack_80;
          puVar3[2] = local_78;
          puVar3[3] = auStack_70._0_8_;
          puVar3[6] = local_58;
          puVar3[7] = CONCAT44(uStack_4c,uStack_50);
          puVar3[4] = auStack_70._8_8_;
          puVar3[5] = uStack_60;
          *(ulong *)((long)puVar3 + 0x3c) = CONCAT44(uStack_48,uStack_4c);
          *(undefined8 *)((long)puVar3 + 0x44) = uStack_44;
          goto LAB_0010dbdd;
        }
      }
      _err_print_index_error
                ("set","./core/templates/cowdata.h",0xcf,lVar5,lVar4,"p_index","size()","",false,
                 false);
    }
    else {
      _err_print_error("push_back","./core/templates/vector.h",0x142,
                       "Condition \"err\" is true. Returning: true",0,0);
    }
  }
LAB_0010dbdd:
  if (param_2[0x35] != 0) {
    OpenXRAPI::post_draw_viewport(param_2[0x35],param_3);
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
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



/* OpenXRExtensionWrapper::get_suggested_tracker_names() */

OpenXRExtensionWrapper * __thiscall
OpenXRExtensionWrapper::get_suggested_tracker_names(OpenXRExtensionWrapper *this)

{
  *(undefined8 *)(this + 8) = 0;
  return this;
}



/* OpenXRInterface::is_class_ptr(void*) const */

uint __thiscall OpenXRInterface::is_class_ptr(OpenXRInterface *this,void *param_1)

{
  return (uint)CONCAT71(0x122b,(undefined4 *)param_1 == &XRInterface::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x122b,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x122b,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x122b,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* OpenXRInterface::_getv(StringName const&, Variant&) const */

undefined8 OpenXRInterface::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* OpenXRInterface::_setv(StringName const&, Variant const&) */

undefined8 OpenXRInterface::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* OpenXRInterface::_validate_propertyv(PropertyInfo&) const */

void OpenXRInterface::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* OpenXRInterface::_property_can_revertv(StringName const&) const */

undefined8 OpenXRInterface::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* OpenXRInterface::_property_get_revertv(StringName const&, Variant&) const */

undefined8 OpenXRInterface::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* OpenXRInterface::_notificationv(int, bool) */

void OpenXRInterface::_notificationv(int param_1,bool param_2)

{
  return;
}



/* MethodBindTR<bool>::_gen_argument_type(int) const */

undefined8 MethodBindTR<bool>::_gen_argument_type(int param_1)

{
  return 1;
}



/* MethodBindTR<bool>::get_argument_meta(int) const */

undefined8 MethodBindTR<bool>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<float, OpenXRInterface::Hand, OpenXRInterface::HandJoints>::_gen_argument_type(int)
   const */

char __thiscall
MethodBindTRC<float,OpenXRInterface::Hand,OpenXRInterface::HandJoints>::_gen_argument_type
          (MethodBindTRC<float,OpenXRInterface::Hand,OpenXRInterface::HandJoints> *this,int param_1)

{
  return (1U < (uint)param_1) + '\x02';
}



/* MethodBindTRC<float, OpenXRInterface::Hand, OpenXRInterface::HandJoints>::get_argument_meta(int)
   const */

uint __thiscall
MethodBindTRC<float,OpenXRInterface::Hand,OpenXRInterface::HandJoints>::get_argument_meta
          (MethodBindTRC<float,OpenXRInterface::Hand,OpenXRInterface::HandJoints> *this,int param_1)

{
  return param_1 >> 0x1f & 9;
}



/* MethodBindTRC<Vector3, OpenXRInterface::Hand,
   OpenXRInterface::HandJoints>::_gen_argument_type(int) const */

int __thiscall
MethodBindTRC<Vector3,OpenXRInterface::Hand,OpenXRInterface::HandJoints>::_gen_argument_type
          (MethodBindTRC<Vector3,OpenXRInterface::Hand,OpenXRInterface::HandJoints> *this,
          int param_1)

{
  return (-(uint)((uint)param_1 < 2) & 0xfffffff9) + 9;
}



/* MethodBindTRC<Vector3, OpenXRInterface::Hand,
   OpenXRInterface::HandJoints>::get_argument_meta(int) const */

undefined8
MethodBindTRC<Vector3,OpenXRInterface::Hand,OpenXRInterface::HandJoints>::get_argument_meta
          (int param_1)

{
  return 0;
}



/* MethodBindTRC<Quaternion, OpenXRInterface::Hand,
   OpenXRInterface::HandJoints>::_gen_argument_type(int) const */

int __thiscall
MethodBindTRC<Quaternion,OpenXRInterface::Hand,OpenXRInterface::HandJoints>::_gen_argument_type
          (MethodBindTRC<Quaternion,OpenXRInterface::Hand,OpenXRInterface::HandJoints> *this,
          int param_1)

{
  return (-(uint)((uint)param_1 < 2) & 0xfffffff3) + 0xf;
}



/* MethodBindTRC<Quaternion, OpenXRInterface::Hand,
   OpenXRInterface::HandJoints>::get_argument_meta(int) const */

undefined8
MethodBindTRC<Quaternion,OpenXRInterface::Hand,OpenXRInterface::HandJoints>::get_argument_meta
          (int param_1)

{
  return 0;
}



/* MethodBindTRC<BitField<OpenXRInterface::HandJointFlags>, OpenXRInterface::Hand,
   OpenXRInterface::HandJoints>::_gen_argument_type(int) const */

undefined8
MethodBindTRC<BitField<OpenXRInterface::HandJointFlags>,OpenXRInterface::Hand,OpenXRInterface::HandJoints>
::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<BitField<OpenXRInterface::HandJointFlags>, OpenXRInterface::Hand,
   OpenXRInterface::HandJoints>::get_argument_meta(int) const */

undefined8
MethodBindTRC<BitField<OpenXRInterface::HandJointFlags>,OpenXRInterface::Hand,OpenXRInterface::HandJoints>
::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<OpenXRInterface::HandTrackedSource, OpenXRInterface::Hand>::_gen_argument_type(int)
   const */

undefined8
MethodBindTRC<OpenXRInterface::HandTrackedSource,OpenXRInterface::Hand>::_gen_argument_type
          (int param_1)

{
  return 2;
}



/* MethodBindTRC<OpenXRInterface::HandTrackedSource, OpenXRInterface::Hand>::get_argument_meta(int)
   const */

undefined8
MethodBindTRC<OpenXRInterface::HandTrackedSource,OpenXRInterface::Hand>::get_argument_meta
          (int param_1)

{
  return 0;
}



/* MethodBindTRC<OpenXRInterface::HandMotionRange, OpenXRInterface::Hand>::_gen_argument_type(int)
   const */

undefined8
MethodBindTRC<OpenXRInterface::HandMotionRange,OpenXRInterface::Hand>::_gen_argument_type
          (int param_1)

{
  return 2;
}



/* MethodBindTRC<OpenXRInterface::HandMotionRange, OpenXRInterface::Hand>::get_argument_meta(int)
   const */

undefined8
MethodBindTRC<OpenXRInterface::HandMotionRange,OpenXRInterface::Hand>::get_argument_meta
          (int param_1)

{
  return 0;
}



/* MethodBindT<OpenXRInterface::Hand, OpenXRInterface::HandMotionRange>::_gen_argument_type(int)
   const */

char __thiscall
MethodBindT<OpenXRInterface::Hand,OpenXRInterface::HandMotionRange>::_gen_argument_type
          (MethodBindT<OpenXRInterface::Hand,OpenXRInterface::HandMotionRange> *this,int param_1)

{
  return ((uint)param_1 < 2) * '\x02';
}



/* MethodBindT<OpenXRInterface::Hand, OpenXRInterface::HandMotionRange>::get_argument_meta(int)
   const */

undefined8
MethodBindT<OpenXRInterface::Hand,OpenXRInterface::HandMotionRange>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<Array>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<Array>::_gen_argument_type(int param_1)

{
  return 0x1c;
}



/* MethodBindTRC<Array>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Array>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<String const&, bool>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<String_const&,bool>::_gen_argument_type
          (MethodBindT<String_const&,bool> *this,int param_1)

{
  char cVar1;
  
  cVar1 = '\0';
  if ((uint)param_1 < 2) {
    cVar1 = (-(param_1 == 0) & 3U) + 1;
  }
  return cVar1;
}



/* MethodBindT<String const&, bool>::get_argument_meta(int) const */

undefined8 MethodBindT<String_const&,bool>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<bool, String const&>::_gen_argument_type(int) const */

char __thiscall
MethodBindTRC<bool,String_const&>::_gen_argument_type
          (MethodBindTRC<bool,String_const&> *this,int param_1)

{
  return (-(param_1 == 0) & 3U) + 1;
}



/* MethodBindTRC<bool, String const&>::get_argument_meta(int) const */

undefined8 MethodBindTRC<bool,String_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<bool>::_gen_argument_type(int) const */

bool __thiscall MethodBindT<bool>::_gen_argument_type(MethodBindT<bool> *this,int param_1)

{
  return param_1 == 0;
}



/* MethodBindT<bool>::get_argument_meta(int) const */

undefined8 MethodBindT<bool>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<int>::_gen_argument_type(int) const */

char __thiscall MethodBindT<int>::_gen_argument_type(MethodBindT<int> *this,int param_1)

{
  return (param_1 == 0) * '\x02';
}



/* MethodBindT<int>::get_argument_meta(int) const */

byte __thiscall MethodBindT<int>::get_argument_meta(MethodBindT<int> *this,int param_1)

{
  return -(param_1 == 0) & 3;
}



/* MethodBindTRC<int>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<int>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<int>::get_argument_meta(int) const */

uint __thiscall MethodBindTRC<int>::get_argument_meta(MethodBindTRC<int> *this,int param_1)

{
  return param_1 >> 0x1f & 3;
}



/* MethodBindTRC<bool>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<bool>::_gen_argument_type(int param_1)

{
  return 1;
}



/* MethodBindTRC<bool>::get_argument_meta(int) const */

undefined8 MethodBindTRC<bool>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<double>::_gen_argument_type(int) const */

byte __thiscall MethodBindT<double>::_gen_argument_type(MethodBindT<double> *this,int param_1)

{
  return -(param_1 == 0) & 3;
}



/* MethodBindT<double>::get_argument_meta(int) const */

byte __thiscall MethodBindT<double>::get_argument_meta(MethodBindT<double> *this,int param_1)

{
  return -(param_1 == 0) & 10;
}



/* MethodBindTRC<double>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<double>::_gen_argument_type(int param_1)

{
  return 3;
}



/* MethodBindTRC<double>::get_argument_meta(int) const */

uint __thiscall MethodBindTRC<double>::get_argument_meta(MethodBindTRC<double> *this,int param_1)

{
  return param_1 >> 0x1f & 10;
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



/* MethodBindTRC<double>::~MethodBindTRC() */

void __thiscall MethodBindTRC<double>::~MethodBindTRC(MethodBindTRC<double> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00122548;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<double>::~MethodBindTRC() */

void __thiscall MethodBindTRC<double>::~MethodBindTRC(MethodBindTRC<double> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00122548;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<double>::~MethodBindT() */

void __thiscall MethodBindT<double>::~MethodBindT(MethodBindT<double> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001225a8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<double>::~MethodBindT() */

void __thiscall MethodBindT<double>::~MethodBindT(MethodBindT<double> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001225a8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00122668;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00122668;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<int>::~MethodBindT() */

void __thiscall MethodBindT<int>::~MethodBindT(MethodBindT<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001226c8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<int>::~MethodBindT() */

void __thiscall MethodBindT<int>::~MethodBindT(MethodBindT<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001226c8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<bool>::~MethodBindT() */

void __thiscall MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00122728;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<bool>::~MethodBindT() */

void __thiscall MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00122728;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<bool, String const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<bool,String_const&>::~MethodBindTRC(MethodBindTRC<bool,String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00122788;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<bool, String const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<bool,String_const&>::~MethodBindTRC(MethodBindTRC<bool,String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00122788;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<String const&, bool>::~MethodBindT() */

void __thiscall MethodBindT<String_const&,bool>::~MethodBindT(MethodBindT<String_const&,bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001227e8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<String const&, bool>::~MethodBindT() */

void __thiscall MethodBindT<String_const&,bool>::~MethodBindT(MethodBindT<String_const&,bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001227e8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Array>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Array>::~MethodBindTRC(MethodBindTRC<Array> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00122848;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Array>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Array>::~MethodBindTRC(MethodBindTRC<Array> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00122848;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<OpenXRInterface::Hand, OpenXRInterface::HandMotionRange>::~MethodBindT() */

void __thiscall
MethodBindT<OpenXRInterface::Hand,OpenXRInterface::HandMotionRange>::~MethodBindT
          (MethodBindT<OpenXRInterface::Hand,OpenXRInterface::HandMotionRange> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001228a8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<OpenXRInterface::Hand, OpenXRInterface::HandMotionRange>::~MethodBindT() */

void __thiscall
MethodBindT<OpenXRInterface::Hand,OpenXRInterface::HandMotionRange>::~MethodBindT
          (MethodBindT<OpenXRInterface::Hand,OpenXRInterface::HandMotionRange> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001228a8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<OpenXRInterface::HandMotionRange, OpenXRInterface::Hand>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<OpenXRInterface::HandMotionRange,OpenXRInterface::Hand>::~MethodBindTRC
          (MethodBindTRC<OpenXRInterface::HandMotionRange,OpenXRInterface::Hand> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00122908;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<OpenXRInterface::HandMotionRange, OpenXRInterface::Hand>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<OpenXRInterface::HandMotionRange,OpenXRInterface::Hand>::~MethodBindTRC
          (MethodBindTRC<OpenXRInterface::HandMotionRange,OpenXRInterface::Hand> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00122908;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<OpenXRInterface::HandTrackedSource, OpenXRInterface::Hand>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<OpenXRInterface::HandTrackedSource,OpenXRInterface::Hand>::~MethodBindTRC
          (MethodBindTRC<OpenXRInterface::HandTrackedSource,OpenXRInterface::Hand> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00122968;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<OpenXRInterface::HandTrackedSource, OpenXRInterface::Hand>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<OpenXRInterface::HandTrackedSource,OpenXRInterface::Hand>::~MethodBindTRC
          (MethodBindTRC<OpenXRInterface::HandTrackedSource,OpenXRInterface::Hand> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00122968;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<BitField<OpenXRInterface::HandJointFlags>, OpenXRInterface::Hand,
   OpenXRInterface::HandJoints>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<BitField<OpenXRInterface::HandJointFlags>,OpenXRInterface::Hand,OpenXRInterface::HandJoints>
::~MethodBindTRC(MethodBindTRC<BitField<OpenXRInterface::HandJointFlags>,OpenXRInterface::Hand,OpenXRInterface::HandJoints>
                 *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001229c8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<BitField<OpenXRInterface::HandJointFlags>, OpenXRInterface::Hand,
   OpenXRInterface::HandJoints>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<BitField<OpenXRInterface::HandJointFlags>,OpenXRInterface::Hand,OpenXRInterface::HandJoints>
::~MethodBindTRC(MethodBindTRC<BitField<OpenXRInterface::HandJointFlags>,OpenXRInterface::Hand,OpenXRInterface::HandJoints>
                 *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001229c8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Quaternion, OpenXRInterface::Hand, OpenXRInterface::HandJoints>::~MethodBindTRC()
    */

void __thiscall
MethodBindTRC<Quaternion,OpenXRInterface::Hand,OpenXRInterface::HandJoints>::~MethodBindTRC
          (MethodBindTRC<Quaternion,OpenXRInterface::Hand,OpenXRInterface::HandJoints> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00122a28;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Quaternion, OpenXRInterface::Hand, OpenXRInterface::HandJoints>::~MethodBindTRC()
    */

void __thiscall
MethodBindTRC<Quaternion,OpenXRInterface::Hand,OpenXRInterface::HandJoints>::~MethodBindTRC
          (MethodBindTRC<Quaternion,OpenXRInterface::Hand,OpenXRInterface::HandJoints> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00122a28;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<float, OpenXRInterface::Hand, OpenXRInterface::HandJoints>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<float,OpenXRInterface::Hand,OpenXRInterface::HandJoints>::~MethodBindTRC
          (MethodBindTRC<float,OpenXRInterface::Hand,OpenXRInterface::HandJoints> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00122ae8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<float, OpenXRInterface::Hand, OpenXRInterface::HandJoints>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<float,OpenXRInterface::Hand,OpenXRInterface::HandJoints>::~MethodBindTRC
          (MethodBindTRC<float,OpenXRInterface::Hand,OpenXRInterface::HandJoints> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00122ae8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Vector3, OpenXRInterface::Hand, OpenXRInterface::HandJoints>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Vector3,OpenXRInterface::Hand,OpenXRInterface::HandJoints>::~MethodBindTRC
          (MethodBindTRC<Vector3,OpenXRInterface::Hand,OpenXRInterface::HandJoints> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00122a88;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Vector3, OpenXRInterface::Hand, OpenXRInterface::HandJoints>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Vector3,OpenXRInterface::Hand,OpenXRInterface::HandJoints>::~MethodBindTRC
          (MethodBindTRC<Vector3,OpenXRInterface::Hand,OpenXRInterface::HandJoints> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00122a88;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00122608;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00122608;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<bool>::~MethodBindTR() */

void __thiscall MethodBindTR<bool>::~MethodBindTR(MethodBindTR<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00122b48;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<bool>::~MethodBindTR() */

void __thiscall MethodBindTR<bool>::~MethodBindTR(MethodBindTR<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00122b48;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<float>::~MethodBindTRC() */

void __thiscall MethodBindTRC<float>::~MethodBindTRC(MethodBindTRC<float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00122488;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<float>::~MethodBindTRC() */

void __thiscall MethodBindTRC<float>::~MethodBindTRC(MethodBindTRC<float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00122488;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<float>::~MethodBindT() */

void __thiscall MethodBindT<float>::~MethodBindT(MethodBindT<float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001224e8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<float>::~MethodBindT() */

void __thiscall MethodBindT<float>::~MethodBindT(MethodBindT<float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001224e8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* CowData<BlitToScreen>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<BlitToScreen>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<OpenXRInterface::Action*>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<OpenXRInterface::Action*>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<OpenXRInterface::ActionSet*>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<OpenXRInterface::ActionSet*>::_copy_on_write(void)

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



/* CowData<OpenXRInterface::Tracker*>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<OpenXRInterface::Tracker*>::_copy_on_write(void)

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



/* CowData<String>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<String>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* OpenXRInterface::_load_action_map() [clone .cold] */

void OpenXRInterface::_load_action_map(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* OpenXRInterface::_get_class_namev() const */

undefined8 * OpenXRInterface::_get_class_namev(void)

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
LAB_0010f7f3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010f7f3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"OpenXRInterface");
      goto LAB_0010f85e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"OpenXRInterface");
LAB_0010f85e:
  return &_get_class_namev()::_class_name_static;
}



/* OpenXRInterface::get_class() const */

void OpenXRInterface::get_class(void)

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



/* MethodBindTRC<Array>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Array>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC10;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 0x1c;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar3[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_58);
    puVar3[10] = 6;
    if (puVar3[6] == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(puVar3 + 8),false);
      if (*(undefined **)(puVar3 + 4) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar3 + 4) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x0010faac;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010faac:
  local_58 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<int>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC10;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 2;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar3[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_58);
    puVar3[10] = 6;
    if (puVar3[6] == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(puVar3 + 8),false);
      if (*(undefined **)(puVar3 + 4) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar3 + 4) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x0010fc2c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010fc2c:
  local_58 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<bool>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC10;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 1;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar3[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_58);
    puVar3[10] = 6;
    if (puVar3[6] == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(puVar3 + 8),false);
      if (*(undefined **)(puVar3 + 4) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar3 + 4) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x0010fdac;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010fdac:
  local_58 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<double>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<double>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC10;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 3;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar3[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_58);
    puVar3[10] = 6;
    if (puVar3[6] == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(puVar3 + 8),false);
      if (*(undefined **)(puVar3 + 4) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar3 + 4) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x0010ff2c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010ff2c:
  local_58 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<bool>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTR<bool>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC10;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 1;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar3[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_58);
    puVar3[10] = 6;
    if (puVar3[6] == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(puVar3 + 8),false);
      if (*(undefined **)(puVar3 + 4) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar3 + 4) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x001100ac;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x001100ac:
  local_58 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<float>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<float>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC10;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 3;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar3[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_58);
    puVar3[10] = 6;
    if (puVar3[6] == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(puVar3 + 8),false);
      if (*(undefined **)(puVar3 + 4) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar3 + 4) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x0011022c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0011022c:
  local_58 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
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



/* PropertyInfo::~PropertyInfo() */

void __thiscall PropertyInfo::~PropertyInfo(PropertyInfo *this)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)(this + 0x20) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x20) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x20);
      *(undefined8 *)(this + 0x20) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (*(long *)(this + 0x10) != 0)) {
    StringName::unref();
  }
  if (*(long *)(this + 8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 8);
      *(undefined8 *)(this + 8) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
  }
  return;
}



/* PropertyInfo::PropertyInfo(Variant::Type, String const&, PropertyHint, String const&, unsigned
   int, StringName const&) */

void __thiscall
PropertyInfo::PropertyInfo
          (PropertyInfo *this,undefined4 param_2,CowData *param_3,int param_4,CowData *param_5,
          undefined4 param_6,StringName *param_7)

{
  long lVar1;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(this + 8) = 0;
  lVar1 = *(long *)param_3;
  *(undefined4 *)this = param_2;
  if (lVar1 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 8),param_3);
  }
  *(undefined8 *)(this + 0x20) = 0;
  lVar1 = *(long *)param_5;
  *(undefined8 *)(this + 0x10) = 0;
  *(int *)(this + 0x18) = param_4;
  if (lVar1 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x20),param_5);
    param_4 = *(int *)(this + 0x18);
  }
  *(undefined4 *)(this + 0x28) = param_6;
  if (param_4 == 0x11) {
    StringName::StringName((StringName *)&local_48,(String *)(this + 0x20),false);
    if (*(long *)(this + 0x10) == local_48) {
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(long *)(this + 0x10) = local_48;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    StringName::operator=((StringName *)(this + 0x10),param_7);
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
            if (lVar3 == 0) goto LAB_001104ff;
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
LAB_001104ff:
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
    if (cVar6 != '\0') goto LAB_001105b3;
  }
  cVar6 = String::operator==(param_1,"RefCounted");
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
          if (*(long *)(lVar5 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar5 + 0x10));
          }
        }
        else {
          local_50 = strlen(pcVar4);
          local_58 = pcVar4;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
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
      if (cVar6 != '\0') goto LAB_001105b3;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar8 = String::operator==(param_1,"Object");
      return uVar8;
    }
  }
  else {
LAB_001105b3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRInterface::is_class(String const&) const */

undefined8 __thiscall OpenXRInterface::is_class(OpenXRInterface *this,String *param_1)

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
            if (lVar3 == 0) goto LAB_0011076f;
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
LAB_0011076f:
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
    if (cVar6 != '\0') goto LAB_00110823;
  }
  cVar6 = String::operator==(param_1,"OpenXRInterface");
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
          if (*(long *)(lVar5 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar5 + 0x10));
          }
        }
        else {
          local_50 = strlen(pcVar4);
          local_58 = pcVar4;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
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
      if (cVar6 != '\0') goto LAB_00110823;
    }
    cVar6 = String::operator==(param_1,"XRInterface");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar8 = RefCounted::is_class((RefCounted *)this,param_1);
        return uVar8;
      }
      goto LAB_00110968;
    }
  }
LAB_00110823:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00110968:
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
LAB_00110ad8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00110ad8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x00110af6;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x00110af6:
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



/* XRInterface::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall XRInterface::_get_property_listv(XRInterface *this,List *param_1,bool param_2)

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
  local_78 = "XRInterface";
  local_70 = 0xb;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "XRInterface";
  local_98 = 0;
  local_70 = 0xb;
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
LAB_00110ed8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00110ed8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00110ef5;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00110ef5:
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
  StringName::StringName((StringName *)&local_78,"XRInterface",false);
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



/* OpenXRInterface::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
OpenXRInterface::_get_property_listv(OpenXRInterface *this,List *param_1,bool param_2)

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
    XRInterface::_get_property_listv((XRInterface *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "OpenXRInterface";
  local_70 = 0xf;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "OpenXRInterface";
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
LAB_00111328:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00111328;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00111345;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00111345:
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
  StringName::StringName((StringName *)&local_78,"OpenXRInterface",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      XRInterface::_get_property_listv((XRInterface *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodDefinition::~MethodDefinition() */

void __thiscall MethodDefinition::~MethodDefinition(MethodDefinition *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  
  if (*(long *)(this + 0x10) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x10) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      plVar1 = *(long **)(this + 0x10);
      if (plVar1 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = plVar1[-1];
      *(undefined8 *)(this + 0x10) = 0;
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
    }
  }
  if ((StringName::configured != '\0') && (*(long *)this != 0)) {
    StringName::unref();
    return;
  }
  return;
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



/* MethodInfo::~MethodInfo() */

void __thiscall MethodInfo::~MethodInfo(MethodInfo *this)

{
  long *plVar1;
  int *piVar2;
  long lVar3;
  code *pcVar4;
  int *piVar5;
  long lVar6;
  
  if (*(long *)(this + 0x68) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x68) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(this + 0x68);
      *(undefined8 *)(this + 0x68) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x50) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x50) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      piVar2 = *(int **)(this + 0x50);
      if (piVar2 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar3 = *(long *)(piVar2 + -2);
      *(undefined8 *)(this + 0x50) = 0;
      if (lVar3 != 0) {
        lVar6 = 0;
        piVar5 = piVar2;
        do {
          if (Variant::needs_deinit[*piVar5] != '\0') {
            Variant::_clear_internal();
          }
          lVar6 = lVar6 + 1;
          piVar5 = piVar5 + 6;
        } while (lVar3 != lVar6);
      }
      Memory::free_static(piVar2 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)(this + 0x40));
  if (*(long *)(this + 0x28) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x28) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(this + 0x28);
      *(undefined8 *)(this + 0x28) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (*(long *)(this + 0x18) != 0)) {
    StringName::unref();
  }
  if (*(long *)(this + 0x10) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x10) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(this + 0x10);
      *(undefined8 *)(this + 0x10) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if (*(long *)this != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)this + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
      return;
    }
  }
  return;
}



/* void Ref<OpenXRActionMap>::instantiate<>() */

void __thiscall Ref<OpenXRActionMap>::instantiate<>(Ref<OpenXRActionMap> *this)

{
  char cVar1;
  Resource *this_00;
  long lVar2;
  Resource *pRVar3;
  Object *pOVar4;
  Object *pOVar5;
  byte bVar6;
  
  bVar6 = 0;
  this_00 = (Resource *)operator_new(0x250,"");
  pRVar3 = this_00;
  for (lVar2 = 0x4a; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined8 *)pRVar3 = 0;
    pRVar3 = pRVar3 + (ulong)bVar6 * -0x10 + 8;
  }
  Resource::Resource(this_00);
  *(code **)this_00 = RefCounted::init_ref;
  Array::Array((Array *)(this_00 + 0x240));
  Array::Array((Array *)(this_00 + 0x248));
  postinitialize_handler((Object *)this_00);
  cVar1 = RefCounted::init_ref();
  if (cVar1 == '\0') {
    pOVar5 = *(Object **)this;
    if (pOVar5 == (Object *)0x0) {
      return;
    }
    *(undefined8 *)this = 0;
    cVar1 = RefCounted::unreference();
    if (cVar1 == '\0') {
      return;
    }
    this_00 = (Resource *)0x0;
    cVar1 = predelete_handler(pOVar5);
    if (cVar1 == '\0') {
      return;
    }
  }
  else {
    pOVar5 = *(Object **)this;
    pOVar4 = pOVar5;
    if (this_00 == (Resource *)pOVar5) goto LAB_00111b55;
    *(Resource **)this = this_00;
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *(undefined8 *)this = 0;
    }
    pOVar4 = (Object *)this_00;
    if (((pOVar5 == (Object *)0x0) || (cVar1 = RefCounted::unreference(), cVar1 == '\0')) ||
       (cVar1 = predelete_handler(pOVar5), cVar1 == '\0')) goto LAB_00111b55;
  }
  (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
  Memory::free_static(pOVar5,false);
  pOVar4 = (Object *)this_00;
  if (this_00 == (Resource *)0x0) {
    return;
  }
LAB_00111b55:
  cVar1 = RefCounted::unreference();
  if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar4), cVar1 != '\0')) {
    (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
    Memory::free_static(pOVar4,false);
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<Ref<OpenXRAction>, OpenXRInterface::Action*, HashMapHasherDefault,
   HashMapComparatorDefault<Ref<OpenXRAction> >,
   DefaultTypedAllocator<HashMapElement<Ref<OpenXRAction>, OpenXRInterface::Action*> >
   >::operator[](Ref<OpenXRAction> const&) */

undefined1  [16] __thiscall
HashMap<Ref<OpenXRAction>,OpenXRInterface::Action*,HashMapHasherDefault,HashMapComparatorDefault<Ref<OpenXRAction>>,DefaultTypedAllocator<HashMapElement<Ref<OpenXRAction>,OpenXRInterface::Action*>>>
::operator[](HashMap<Ref<OpenXRAction>,OpenXRInterface::Action*,HashMapHasherDefault,HashMapComparatorDefault<Ref<OpenXRAction>>,DefaultTypedAllocator<HashMapElement<Ref<OpenXRAction>,OpenXRInterface::Action*>>>
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
    lStack_90 = 0x112373;
    local_70 = (void *)Memory::alloc_static(uVar39,false);
    *(void **)(this + 8) = local_70;
    if (uVar48 == 0) {
      iVar44 = *(int *)(this + 0x2c);
      pOVar50 = *(Object **)param_1;
      if (local_70 == (void *)0x0) goto LAB_00111e03;
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
        lStack_90 = 0x1123bc;
        memset(local_70,0,uVar39);
        iVar44 = *(int *)(this + 0x2c);
        pOVar50 = *(Object **)param_1;
      }
    }
    if (iVar44 != 0) {
      uVar40 = (ulong)*(uint *)(this + 0x28);
      lVar53 = *(long *)(this + 0x10);
      goto LAB_00112213;
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
          if (((uint)uVar55 == uVar45) &&
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
LAB_00112213:
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
            *(undefined8 *)(pauVar42[1] + 8) = 0;
            lStack_90 = lVar47;
            goto LAB_001121f7;
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
LAB_00111e03:
  if ((float)uVar56 * __LC74 < (float)(iVar44 + 1)) {
    uVar48 = *(uint *)(this + 0x28);
    if (uVar48 == 0x1c) {
      pauVar42 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_001121f7;
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
    *(undefined8 *)(pauVar42[1] + 8) = 0;
    if (puVar43 == (undefined8 *)0x0) goto LAB_00112064;
LAB_001120b4:
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
    *(undefined8 *)(pauVar42[1] + 8) = 0;
    cVar37 = RefCounted::unreference();
    if ((cVar37 != '\0') && (cVar37 = predelete_handler(pOVar50), cVar37 != '\0')) {
      (**(code **)(*(long *)pOVar50 + 0x140))(pOVar50);
      Memory::free_static(pOVar50,false);
    }
    puVar43 = *(undefined8 **)(this + 0x20);
    if (puVar43 != (undefined8 *)0x0) goto LAB_001120b4;
LAB_00112064:
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
LAB_001121f7:
  auVar60._8_8_ = lStack_90;
  auVar60._0_8_ = pauVar42[1] + 8;
  return auVar60;
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



/* WARNING: Removing unreachable block (ram,0x001126b8) */
/* WARNING: Removing unreachable block (ram,0x0011284d) */
/* WARNING: Removing unreachable block (ram,0x00112859) */
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



/* MethodBindT<double>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<double>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  long lVar6;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar7;
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
  
  puVar7 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar7 = 0;
  puVar7[6] = 0;
  *(undefined8 *)(puVar7 + 8) = 0;
  puVar7[10] = 6;
  *(undefined1 (*) [16])(puVar7 + 2) = (undefined1  [16])0x0;
  if (in_EDX != 0) goto LAB_001128f9;
  local_78 = 0;
  local_68 = &_LC10;
  local_80 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._8_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,3);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_001129f0:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_001129f0;
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
  *puVar7 = local_68._0_4_;
  if (*(long *)(puVar7 + 2) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar7 + 2));
    uVar5 = local_60._0_8_;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = local_60._8_8_;
    local_60 = auVar3 << 0x40;
    *(undefined8 *)(puVar7 + 2) = uVar5;
  }
  if (*(long *)(puVar7 + 4) != local_60._8_8_) {
    StringName::unref();
    uVar5 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(puVar7 + 4) = uVar5;
  }
  lVar6 = local_48;
  puVar7[6] = local_50;
  if (*(long *)(puVar7 + 8) == local_48) {
    puVar7[10] = local_40;
    if (local_48 != 0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
  }
  else {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar7 + 8));
    *(long *)(puVar7 + 8) = local_48;
    puVar7[10] = local_40;
  }
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  uVar5 = local_60._0_8_;
  if (local_60._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_60._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_60._8_8_;
      local_60 = auVar4 << 0x40;
      Memory::free_static((void *)(uVar5 + -0x10),false);
    }
  }
LAB_001128f9:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar7;
}



/* MethodBindT<float>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<float>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  long lVar6;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar7;
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
  
  puVar7 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar7 = 0;
  puVar7[6] = 0;
  *(undefined8 *)(puVar7 + 8) = 0;
  puVar7[10] = 6;
  *(undefined1 (*) [16])(puVar7 + 2) = (undefined1  [16])0x0;
  if (in_EDX != 0) goto LAB_00112ba9;
  local_78 = 0;
  local_68 = &_LC10;
  local_80 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._8_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,3);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00112ca0:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00112ca0;
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
  *puVar7 = local_68._0_4_;
  if (*(long *)(puVar7 + 2) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar7 + 2));
    uVar5 = local_60._0_8_;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = local_60._8_8_;
    local_60 = auVar3 << 0x40;
    *(undefined8 *)(puVar7 + 2) = uVar5;
  }
  if (*(long *)(puVar7 + 4) != local_60._8_8_) {
    StringName::unref();
    uVar5 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(puVar7 + 4) = uVar5;
  }
  lVar6 = local_48;
  puVar7[6] = local_50;
  if (*(long *)(puVar7 + 8) == local_48) {
    puVar7[10] = local_40;
    if (local_48 != 0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
  }
  else {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar7 + 8));
    *(long *)(puVar7 + 8) = local_48;
    puVar7[10] = local_40;
  }
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  uVar5 = local_60._0_8_;
  if (local_60._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_60._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_60._8_8_;
      local_60 = auVar4 << 0x40;
      Memory::free_static((void *)(uVar5 + -0x10),false);
    }
  }
LAB_00112ba9:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar7;
}



/* MethodBindT<int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<int>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  long lVar6;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar7;
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
  
  puVar7 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar7 = 0;
  puVar7[6] = 0;
  *(undefined8 *)(puVar7 + 8) = 0;
  puVar7[10] = 6;
  *(undefined1 (*) [16])(puVar7 + 2) = (undefined1  [16])0x0;
  if (in_EDX != 0) goto LAB_00112e59;
  local_78 = 0;
  local_68 = &_LC10;
  local_80 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._8_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,2);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00112f50:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00112f50;
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
  *puVar7 = local_68._0_4_;
  if (*(long *)(puVar7 + 2) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar7 + 2));
    uVar5 = local_60._0_8_;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = local_60._8_8_;
    local_60 = auVar3 << 0x40;
    *(undefined8 *)(puVar7 + 2) = uVar5;
  }
  if (*(long *)(puVar7 + 4) != local_60._8_8_) {
    StringName::unref();
    uVar5 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(puVar7 + 4) = uVar5;
  }
  lVar6 = local_48;
  puVar7[6] = local_50;
  if (*(long *)(puVar7 + 8) == local_48) {
    puVar7[10] = local_40;
    if (local_48 != 0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
  }
  else {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar7 + 8));
    *(long *)(puVar7 + 8) = local_48;
    puVar7[10] = local_40;
  }
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  uVar5 = local_60._0_8_;
  if (local_60._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_60._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_60._8_8_;
      local_60 = auVar4 << 0x40;
      Memory::free_static((void *)(uVar5 + -0x10),false);
    }
  }
LAB_00112e59:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar7;
}



/* MethodBindT<bool>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<bool>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  long lVar6;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar7;
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
  
  puVar7 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar7 = 0;
  puVar7[6] = 0;
  *(undefined8 *)(puVar7 + 8) = 0;
  puVar7[10] = 6;
  *(undefined1 (*) [16])(puVar7 + 2) = (undefined1  [16])0x0;
  if (in_EDX != 0) goto LAB_00113109;
  local_78 = 0;
  local_68 = &_LC10;
  local_80 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._8_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,1);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00113200:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00113200;
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
  *puVar7 = local_68._0_4_;
  if (*(long *)(puVar7 + 2) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar7 + 2));
    uVar5 = local_60._0_8_;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = local_60._8_8_;
    local_60 = auVar3 << 0x40;
    *(undefined8 *)(puVar7 + 2) = uVar5;
  }
  if (*(long *)(puVar7 + 4) != local_60._8_8_) {
    StringName::unref();
    uVar5 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(puVar7 + 4) = uVar5;
  }
  lVar6 = local_48;
  puVar7[6] = local_50;
  if (*(long *)(puVar7 + 8) == local_48) {
    puVar7[10] = local_40;
    if (local_48 != 0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
  }
  else {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar7 + 8));
    *(long *)(puVar7 + 8) = local_48;
    puVar7[10] = local_40;
  }
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  uVar5 = local_60._0_8_;
  if (local_60._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_60._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_60._8_8_;
      local_60 = auVar4 << 0x40;
      Memory::free_static((void *)(uVar5 + -0x10),false);
    }
  }
LAB_00113109:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar7;
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
  if (param_1 * 8 == 0) {
LAB_001136b8:
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
  if (uVar4 == 0xffffffffffffffff) goto LAB_001136b8;
  if (param_1 <= lVar7) {
    puVar6 = *(undefined8 **)this;
    if (uVar4 + 1 == lVar3) {
      if (puVar6 == (undefined8 *)0x0) {
        _DAT_00000000 = 0;
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
    }
    else {
      puVar5 = (undefined8 *)Memory::realloc_static(puVar6 + -2,uVar4 + 0x11,false);
      if (puVar5 == (undefined8 *)0x0) {
LAB_001136f0:
        _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,
                         "Parameter \"mem_new\" is null.",0,0);
        return 6;
      }
      puVar6 = puVar5 + 2;
      *puVar5 = 1;
      *(undefined8 **)this = puVar6;
    }
    puVar6[-1] = param_1;
    return 0;
  }
  if (uVar4 + 1 == lVar3) {
    puVar6 = *(undefined8 **)this;
    if (puVar6 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar3 = puVar6[-1];
LAB_001135f9:
    if (param_1 <= lVar3) goto LAB_00113571;
  }
  else {
    if (lVar7 != 0) {
      puVar5 = (undefined8 *)
               Memory::realloc_static((void *)(*(long *)this + -0x10),uVar4 + 0x11,false);
      if (puVar5 == (undefined8 *)0x0) goto LAB_001136f0;
      puVar6 = puVar5 + 2;
      *puVar5 = 1;
      *(undefined8 **)this = puVar6;
      lVar3 = puVar5[1];
      goto LAB_001135f9;
    }
    puVar5 = (undefined8 *)Memory::alloc_static(uVar4 + 0x11,false);
    if (puVar5 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar6 = puVar5 + 2;
    *puVar5 = 1;
    puVar5[1] = 0;
    *(undefined8 **)this = puVar6;
    lVar3 = 0;
  }
  memset(puVar6 + lVar3,0,(param_1 - lVar3) * 8);
LAB_00113571:
  puVar6[-1] = param_1;
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<RID>::resize<false>(long) */

undefined8 __thiscall CowData<RID>::resize<false>(CowData<RID> *this,long param_1)

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
  if (param_1 * 8 == 0) {
LAB_001139e8:
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
  if (uVar4 == 0xffffffffffffffff) goto LAB_001139e8;
  if (param_1 <= lVar7) {
    puVar6 = *(undefined8 **)this;
    if (uVar4 + 1 == lVar3) {
      if (puVar6 == (undefined8 *)0x0) {
        _DAT_00000000 = 0;
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
    }
    else {
      puVar5 = (undefined8 *)Memory::realloc_static(puVar6 + -2,uVar4 + 0x11,false);
      if (puVar5 == (undefined8 *)0x0) {
LAB_00113a20:
        _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,
                         "Parameter \"mem_new\" is null.",0,0);
        return 6;
      }
      puVar6 = puVar5 + 2;
      *puVar5 = 1;
      *(undefined8 **)this = puVar6;
    }
    puVar6[-1] = param_1;
    return 0;
  }
  if (uVar4 + 1 == lVar3) {
    puVar6 = *(undefined8 **)this;
    if (puVar6 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar3 = puVar6[-1];
LAB_00113929:
    if (param_1 <= lVar3) goto LAB_001138a1;
  }
  else {
    if (lVar7 != 0) {
      puVar5 = (undefined8 *)
               Memory::realloc_static((void *)(*(long *)this + -0x10),uVar4 + 0x11,false);
      if (puVar5 == (undefined8 *)0x0) goto LAB_00113a20;
      puVar6 = puVar5 + 2;
      *puVar5 = 1;
      *(undefined8 **)this = puVar6;
      lVar3 = puVar5[1];
      goto LAB_00113929;
    }
    puVar5 = (undefined8 *)Memory::alloc_static(uVar4 + 0x11,false);
    if (puVar5 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar6 = puVar5 + 2;
    *puVar5 = 1;
    puVar5[1] = 0;
    *(undefined8 **)this = puVar6;
    lVar3 = 0;
  }
  memset(puVar6 + lVar3,0,(param_1 - lVar3) * 8);
LAB_001138a1:
  puVar6[-1] = param_1;
  return 0;
}



/* MethodBind* create_method_bind<OpenXRInterface, float>(float (OpenXRInterface::*)() const) */

MethodBind * create_method_bind<OpenXRInterface,float>(_func_float *param_1)

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
  *(_func_float **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00122488;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "OpenXRInterface";
  local_30 = 0xf;
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



/* MethodBind* create_method_bind<OpenXRInterface, float>(void (OpenXRInterface::*)(float)) */

MethodBind * create_method_bind<OpenXRInterface,float>(_func_void_float *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_001224e8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "OpenXRInterface";
  local_30 = 0xf;
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



/* MethodBind* create_method_bind<OpenXRInterface, double>(double (OpenXRInterface::*)() const) */

MethodBind * create_method_bind<OpenXRInterface,double>(_func_double *param_1)

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
  *(_func_double **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00122548;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "OpenXRInterface";
  local_30 = 0xf;
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



/* MethodBind* create_method_bind<OpenXRInterface, double>(void (OpenXRInterface::*)(double)) */

MethodBind * create_method_bind<OpenXRInterface,double>(_func_void_double *param_1)

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
  *(_func_void_double **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001225a8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "OpenXRInterface";
  local_30 = 0xf;
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



/* MethodBind* create_method_bind<OpenXRInterface, bool>(bool (OpenXRInterface::*)() const) */

MethodBind * create_method_bind<OpenXRInterface,bool>(_func_bool *param_1)

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
  *(_func_bool **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00122608;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "OpenXRInterface";
  local_30 = 0xf;
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



/* MethodBind* create_method_bind<OpenXRInterface, int>(int (OpenXRInterface::*)() const) */

MethodBind * create_method_bind<OpenXRInterface,int>(_func_int *param_1)

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
  *(_func_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00122668;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "OpenXRInterface";
  local_30 = 0xf;
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



/* MethodBind* create_method_bind<OpenXRInterface, int>(void (OpenXRInterface::*)(int)) */

MethodBind * create_method_bind<OpenXRInterface,int>(_func_void_int *param_1)

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
  *(_func_void_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001226c8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "OpenXRInterface";
  local_30 = 0xf;
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



/* MethodBind* create_method_bind<OpenXRInterface, bool>(void (OpenXRInterface::*)(bool)) */

MethodBind * create_method_bind<OpenXRInterface,bool>(_func_void_bool *param_1)

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
  *(_func_void_bool **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00122728;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "OpenXRInterface";
  local_30 = 0xf;
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



/* MethodBind* create_method_bind<OpenXRInterface, bool, String const&>(bool
   (OpenXRInterface::*)(String const&) const) */

MethodBind * create_method_bind<OpenXRInterface,bool,String_const&>(_func_bool_String_ptr *param_1)

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
  *(_func_bool_String_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00122788;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "OpenXRInterface";
  local_30 = 0xf;
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



/* MethodBind* create_method_bind<OpenXRInterface, String const&, bool>(void
   (OpenXRInterface::*)(String const&, bool)) */

MethodBind *
create_method_bind<OpenXRInterface,String_const&,bool>(_func_void_String_ptr_bool *param_1)

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
  *(_func_void_String_ptr_bool **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001227e8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "OpenXRInterface";
  local_30 = 0xf;
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



/* MethodBind* create_method_bind<OpenXRInterface, Array>(Array (OpenXRInterface::*)() const) */

MethodBind * create_method_bind<OpenXRInterface,Array>(_func_Array *param_1)

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
  *(_func_Array **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00122848;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "OpenXRInterface";
  local_30 = 0xf;
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



/* MethodBind* create_method_bind<OpenXRInterface, OpenXRInterface::Hand,
   OpenXRInterface::HandMotionRange>(void (OpenXRInterface::*)(OpenXRInterface::Hand,
   OpenXRInterface::HandMotionRange)) */

MethodBind *
create_method_bind<OpenXRInterface,OpenXRInterface::Hand,OpenXRInterface::HandMotionRange>
          (_func_void_Hand_HandMotionRange *param_1)

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
  *(_func_void_Hand_HandMotionRange **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001228a8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "OpenXRInterface";
  local_30 = 0xf;
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



/* MethodBind* create_method_bind<OpenXRInterface, OpenXRInterface::HandMotionRange,
   OpenXRInterface::Hand>(OpenXRInterface::HandMotionRange
   (OpenXRInterface::*)(OpenXRInterface::Hand) const) */

MethodBind *
create_method_bind<OpenXRInterface,OpenXRInterface::HandMotionRange,OpenXRInterface::Hand>
          (_func_HandMotionRange_Hand *param_1)

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
  *(_func_HandMotionRange_Hand **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00122908;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "OpenXRInterface";
  local_30 = 0xf;
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



/* MethodBind* create_method_bind<OpenXRInterface, OpenXRInterface::HandTrackedSource,
   OpenXRInterface::Hand>(OpenXRInterface::HandTrackedSource
   (OpenXRInterface::*)(OpenXRInterface::Hand) const) */

MethodBind *
create_method_bind<OpenXRInterface,OpenXRInterface::HandTrackedSource,OpenXRInterface::Hand>
          (_func_HandTrackedSource_Hand *param_1)

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
  *(_func_HandTrackedSource_Hand **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00122968;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "OpenXRInterface";
  local_30 = 0xf;
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



/* MethodBind* create_method_bind<OpenXRInterface, BitField<OpenXRInterface::HandJointFlags>,
   OpenXRInterface::Hand, OpenXRInterface::HandJoints>(BitField<OpenXRInterface::HandJointFlags>
   (OpenXRInterface::*)(OpenXRInterface::Hand, OpenXRInterface::HandJoints) const) */

MethodBind *
create_method_bind<OpenXRInterface,BitField<OpenXRInterface::HandJointFlags>,OpenXRInterface::Hand,OpenXRInterface::HandJoints>
          (_func_BitField_Hand_HandJoints *param_1)

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
  *(_func_BitField_Hand_HandJoints **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001229c8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "OpenXRInterface";
  local_30 = 0xf;
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



/* MethodBind* create_method_bind<OpenXRInterface, Quaternion, OpenXRInterface::Hand,
   OpenXRInterface::HandJoints>(Quaternion (OpenXRInterface::*)(OpenXRInterface::Hand,
   OpenXRInterface::HandJoints) const) */

MethodBind *
create_method_bind<OpenXRInterface,Quaternion,OpenXRInterface::Hand,OpenXRInterface::HandJoints>
          (_func_Quaternion_Hand_HandJoints *param_1)

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
  *(_func_Quaternion_Hand_HandJoints **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00122a28;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "OpenXRInterface";
  local_30 = 0xf;
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



/* MethodBind* create_method_bind<OpenXRInterface, Vector3, OpenXRInterface::Hand,
   OpenXRInterface::HandJoints>(Vector3 (OpenXRInterface::*)(OpenXRInterface::Hand,
   OpenXRInterface::HandJoints) const) */

MethodBind *
create_method_bind<OpenXRInterface,Vector3,OpenXRInterface::Hand,OpenXRInterface::HandJoints>
          (_func_Vector3_Hand_HandJoints *param_1)

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
  *(_func_Vector3_Hand_HandJoints **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00122a88;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "OpenXRInterface";
  local_30 = 0xf;
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



/* MethodBind* create_method_bind<OpenXRInterface, float, OpenXRInterface::Hand,
   OpenXRInterface::HandJoints>(float (OpenXRInterface::*)(OpenXRInterface::Hand,
   OpenXRInterface::HandJoints) const) */

MethodBind *
create_method_bind<OpenXRInterface,float,OpenXRInterface::Hand,OpenXRInterface::HandJoints>
          (_func_float_Hand_HandJoints *param_1)

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
  *(_func_float_Hand_HandJoints **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00122ae8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "OpenXRInterface";
  local_30 = 0xf;
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



/* MethodBind* create_method_bind<OpenXRInterface, bool>(bool (OpenXRInterface::*)()) */

MethodBind * create_method_bind<OpenXRInterface,bool>(_func_bool *param_1)

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
  *(_func_bool **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00122b48;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "OpenXRInterface";
  local_30 = 0xf;
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
LAB_001153f0:
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
  if (lVar7 == 0) goto LAB_001153f0;
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
LAB_0011535c:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar3 = puVar9[-1];
    if (param_1 <= lVar3) goto LAB_001152eb;
  }
  else {
    if (lVar8 != 0) {
      uVar6 = _realloc(this,lVar7);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      goto LAB_0011535c;
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
LAB_001152eb:
  puVar9[-1] = param_1;
  return 0;
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



/* godot::details::enum_qualified_name_to_class_info_name(String const&) */

details * __thiscall
godot::details::enum_qualified_name_to_class_info_name(details *this,String *param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long in_FS_OFFSET;
  long local_60;
  char local_58 [8];
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  String::split(local_58,SUB81(param_1,0),0x11550a);
  if ((local_50 != 0) && (2 < *(long *)(local_50 + -8))) {
    local_60 = 0;
    local_48 = &_LC84;
    local_40 = 1;
    String::parse_latin1((StrRange *)&local_60);
    if (local_50 == 0) {
      lVar4 = 0;
      lVar3 = -2;
    }
    else {
      lVar4 = *(long *)(local_50 + -8);
      lVar3 = lVar4 + -2;
      if (-1 < lVar3) {
        String::operator+((String *)&local_48,(String *)(local_50 + lVar3 * 8));
        String::operator+((String *)this,(String *)&local_48);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        goto LAB_001155cb;
      }
    }
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,lVar3,lVar4,"p_index","size()","",false,true)
    ;
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  local_60 = 0;
  local_48 = &_LC84;
  local_40 = 1;
  String::parse_latin1((StrRange *)&local_60);
  String::join(this);
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
LAB_001155cb:
  CowData<String>::_unref((CowData<String> *)&local_50);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GetTypeInfo<OpenXRInterface::Hand, void>::get_class_info() */

GetTypeInfo<OpenXRInterface::Hand,void> * __thiscall
GetTypeInfo<OpenXRInterface::Hand,void>::get_class_info
          (GetTypeInfo<OpenXRInterface::Hand,void> *this)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  local_48 = "OpenXRInterface::Hand";
  local_40 = 0x15;
  String::parse_latin1((StrRange *)&local_58);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_50,(String *)&local_58);
  StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
  *(undefined4 *)this = 2;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 0x10006;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_48);
  if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
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
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GetTypeInfo<OpenXRInterface::HandMotionRange, void>::get_class_info() */

GetTypeInfo<OpenXRInterface::HandMotionRange,void> * __thiscall
GetTypeInfo<OpenXRInterface::HandMotionRange,void>::get_class_info
          (GetTypeInfo<OpenXRInterface::HandMotionRange,void> *this)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  local_48 = "OpenXRInterface::HandMotionRange";
  local_40 = 0x20;
  String::parse_latin1((StrRange *)&local_58);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_50,(String *)&local_58);
  StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
  *(undefined4 *)this = 2;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 0x10006;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_48);
  if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
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
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GetTypeInfo<OpenXRInterface::HandTrackedSource, void>::get_class_info() */

GetTypeInfo<OpenXRInterface::HandTrackedSource,void> * __thiscall
GetTypeInfo<OpenXRInterface::HandTrackedSource,void>::get_class_info
          (GetTypeInfo<OpenXRInterface::HandTrackedSource,void> *this)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  local_48 = "OpenXRInterface::HandTrackedSource";
  local_40 = 0x22;
  String::parse_latin1((StrRange *)&local_58);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_50,(String *)&local_58);
  StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
  *(undefined4 *)this = 2;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 0x10006;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_48);
  if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
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
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<OpenXRInterface::Hand,
   OpenXRInterface::HandMotionRange>::_gen_argument_type_info(int) const */

undefined4 *
MethodBindT<OpenXRInterface::Hand,OpenXRInterface::HandMotionRange>::_gen_argument_type_info
          (int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  long lVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  long local_a0;
  details local_98 [8];
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  char *local_78;
  undefined1 local_70 [16];
  undefined8 local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar4 = 0;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  puVar4[10] = 6;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    local_90 = 0;
    local_70._0_8_ = 0x15;
    local_78 = "OpenXRInterface::Hand";
    String::parse_latin1((StrRange *)&local_90);
    godot::details::enum_qualified_name_to_class_info_name(local_98,(String *)&local_90);
    StringName::StringName((StringName *)&local_a0,(String *)local_98,false);
    local_70 = (undefined1  [16])0x0;
    local_88 = 0;
    local_80 = 0;
    local_78 = (char *)0x2;
    local_60 = 0;
    local_58 = 0;
    local_50 = 0x10006;
    StringName::operator=((StringName *)(local_70 + 8),(StringName *)&local_a0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if ((StringName::configured != '\0') && (local_a0 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  }
  else {
    if (in_EDX != 1) goto LAB_00115b6a;
    GetTypeInfo<OpenXRInterface::HandMotionRange,void>::get_class_info
              ((GetTypeInfo<OpenXRInterface::HandMotionRange,void> *)&local_78);
  }
  *puVar4 = local_78._0_4_;
  if (*(long *)(puVar4 + 2) != local_70._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar4 + 2));
    uVar2 = local_70._0_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_70._8_8_;
    local_70 = auVar1 << 0x40;
    *(undefined8 *)(puVar4 + 2) = uVar2;
  }
  if (*(long *)(puVar4 + 4) != local_70._8_8_) {
    StringName::unref();
    uVar2 = local_70._8_8_;
    local_70._8_8_ = 0;
    *(undefined8 *)(puVar4 + 4) = uVar2;
  }
  puVar4[6] = (undefined4)local_60;
  if (*(long *)(puVar4 + 8) != local_58) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar4 + 8));
    lVar3 = local_58;
    local_58 = 0;
    *(long *)(puVar4 + 8) = lVar3;
  }
  puVar4[10] = local_50;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
LAB_00115b6a:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<OpenXRInterface::HandTrackedSource,
   OpenXRInterface::Hand>::_gen_argument_type_info(int) const */

undefined4 *
MethodBindTRC<OpenXRInterface::HandTrackedSource,OpenXRInterface::Hand>::_gen_argument_type_info
          (int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  long local_d0;
  details local_c8 [8];
  long local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 local_a0 [16];
  undefined8 local_90;
  long local_88;
  undefined4 local_80;
  char *local_78;
  long local_70;
  ulong local_68;
  undefined4 local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_a8 = 0;
    local_a0._0_8_ = 0;
    local_a0._8_8_ = 0;
    local_80 = 6;
    local_78 = "OpenXRInterface::Hand";
    local_90 = 0;
    local_88 = 0;
    local_c0 = 0;
    local_70 = 0x15;
    String::parse_latin1((StrRange *)&local_c0);
    godot::details::enum_qualified_name_to_class_info_name(local_c8,(String *)&local_c0);
    StringName::StringName((StringName *)&local_d0,(String *)local_c8,false);
    local_b8 = 0;
    local_b0 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_78,2,(CowData<char32_t> *)&local_b0,0,
               (CowData<char32_t> *)&local_b8,0x10006,(StringName *)&local_d0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    if ((StringName::configured != '\0') && (local_d0 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
    local_a8 = CONCAT44(local_a8._4_4_,local_78._0_4_);
    if (local_a0._0_8_ != local_70) {
      CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
      local_a0._0_8_ = local_70;
      local_70 = 0;
    }
    if (local_a0._8_8_ != local_68) {
      StringName::unref();
      local_a0._8_8_ = local_68;
      local_68 = 0;
    }
    local_90 = CONCAT44(local_90._4_4_,local_60);
    if (local_88 != local_58) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      local_88 = local_58;
      local_58 = 0;
    }
    local_80 = local_50;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
    uVar3 = local_a0._8_8_;
    uVar2 = local_a0._0_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_a0._8_8_;
    local_a0 = auVar1 << 0x40;
    *puVar4 = (undefined4)local_a8;
    *(undefined8 *)(puVar4 + 2) = uVar2;
    *(undefined8 *)(puVar4 + 4) = uVar3;
    puVar4[6] = (undefined4)local_90;
    *(long *)(puVar4 + 8) = local_88;
    puVar4[10] = local_80;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
  }
  else {
    local_b0 = 0;
    local_70 = 0x22;
    local_78 = "OpenXRInterface::HandTrackedSource";
    String::parse_latin1((StrRange *)&local_b0);
    godot::details::enum_qualified_name_to_class_info_name((details *)&local_b8,(String *)&local_b0)
    ;
    StringName::StringName((StringName *)&local_c0,(String *)&local_b8,false);
    *puVar4 = 2;
    puVar4[6] = 0;
    *(undefined8 *)(puVar4 + 8) = 0;
    puVar4[10] = 0x10006;
    *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
    local_a8 = 0;
    local_78 = (char *)0x0;
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_c0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    if ((StringName::configured != '\0') && (local_c0 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<OpenXRInterface::HandMotionRange,
   OpenXRInterface::Hand>::_gen_argument_type_info(int) const */

undefined4 *
MethodBindTRC<OpenXRInterface::HandMotionRange,OpenXRInterface::Hand>::_gen_argument_type_info
          (int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  long local_d0;
  details local_c8 [8];
  long local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 local_a0 [16];
  undefined8 local_90;
  long local_88;
  undefined4 local_80;
  char *local_78;
  long local_70;
  ulong local_68;
  undefined4 local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_a8 = 0;
    local_a0._0_8_ = 0;
    local_a0._8_8_ = 0;
    local_80 = 6;
    local_78 = "OpenXRInterface::Hand";
    local_90 = 0;
    local_88 = 0;
    local_c0 = 0;
    local_70 = 0x15;
    String::parse_latin1((StrRange *)&local_c0);
    godot::details::enum_qualified_name_to_class_info_name(local_c8,(String *)&local_c0);
    StringName::StringName((StringName *)&local_d0,(String *)local_c8,false);
    local_b8 = 0;
    local_b0 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_78,2,(CowData<char32_t> *)&local_b0,0,
               (CowData<char32_t> *)&local_b8,0x10006,(StringName *)&local_d0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    if ((StringName::configured != '\0') && (local_d0 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
    local_a8 = CONCAT44(local_a8._4_4_,local_78._0_4_);
    if (local_a0._0_8_ != local_70) {
      CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
      local_a0._0_8_ = local_70;
      local_70 = 0;
    }
    if (local_a0._8_8_ != local_68) {
      StringName::unref();
      local_a0._8_8_ = local_68;
      local_68 = 0;
    }
    local_90 = CONCAT44(local_90._4_4_,local_60);
    if (local_88 != local_58) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      local_88 = local_58;
      local_58 = 0;
    }
    local_80 = local_50;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
    uVar3 = local_a0._8_8_;
    uVar2 = local_a0._0_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_a0._8_8_;
    local_a0 = auVar1 << 0x40;
    *puVar4 = (undefined4)local_a8;
    *(undefined8 *)(puVar4 + 2) = uVar2;
    *(undefined8 *)(puVar4 + 4) = uVar3;
    puVar4[6] = (undefined4)local_90;
    *(long *)(puVar4 + 8) = local_88;
    puVar4[10] = local_80;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
  }
  else {
    local_b0 = 0;
    local_70 = 0x20;
    local_78 = "OpenXRInterface::HandMotionRange";
    String::parse_latin1((StrRange *)&local_b0);
    godot::details::enum_qualified_name_to_class_info_name((details *)&local_b8,(String *)&local_b0)
    ;
    StringName::StringName((StringName *)&local_c0,(String *)&local_b8,false);
    *puVar4 = 2;
    puVar4[6] = 0;
    *(undefined8 *)(puVar4 + 8) = 0;
    puVar4[10] = 0x10006;
    *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
    local_a8 = 0;
    local_78 = (char *)0x0;
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_c0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    if ((StringName::configured != '\0') && (local_c0 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRInterface::_initialize_classv() */

void OpenXRInterface::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (XRInterface::initialize_class()::initialized == '\0') {
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
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        if ((StringName::configured != '\0') && (local_60 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        if ((code *)PTR__bind_methods_00129008 != RefCounted::_bind_methods) {
          RefCounted::_bind_methods();
        }
        RefCounted::initialize_class()::initialized = '\x01';
      }
      local_58 = "RefCounted";
      local_68 = 0;
      local_50 = 10;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "XRInterface";
      local_70 = 0;
      local_50 = 0xb;
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
      if ((code *)_GLOBAL_OFFSET_TABLE_ != RefCounted::_bind_methods) {
        XRInterface::_bind_methods();
      }
      XRInterface::initialize_class()::initialized = '\x01';
    }
    local_58 = "XRInterface";
    local_68 = 0;
    local_50 = 0xb;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "OpenXRInterface";
    local_70 = 0;
    local_50 = 0xf;
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
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CowData<String>::_realloc(long) */

undefined8 __thiscall CowData<String>::_realloc(CowData<String> *this,long param_1)

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
/* Error CowData<String>::resize<false>(long) */

undefined8 __thiscall CowData<String>::resize<false>(CowData<String> *this,long param_1)

{
  long *plVar1;
  long *plVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  
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
    lVar6 = 0;
    lVar7 = 0;
  }
  else {
    lVar6 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar6) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar7 = lVar6 * 8;
    if (lVar7 != 0) {
      uVar8 = lVar7 - 1U | lVar7 - 1U >> 1;
      uVar8 = uVar8 | uVar8 >> 2;
      uVar8 = uVar8 | uVar8 >> 4;
      uVar8 = uVar8 | uVar8 >> 8;
      uVar8 = uVar8 | uVar8 >> 0x10;
      lVar7 = (uVar8 | uVar8 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 == 0) {
LAB_001169a0:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar8 = param_1 * 8 - 1;
  uVar8 = uVar8 >> 1 | uVar8;
  uVar8 = uVar8 | uVar8 >> 2;
  uVar8 = uVar8 | uVar8 >> 4;
  uVar8 = uVar8 | uVar8 >> 8;
  uVar8 = uVar8 | uVar8 >> 0x10;
  uVar8 = uVar8 | uVar8 >> 0x20;
  lVar10 = uVar8 + 1;
  if (lVar10 == 0) goto LAB_001169a0;
  if (param_1 <= lVar6) {
    lVar6 = *(long *)this;
    uVar8 = param_1;
    while (lVar6 != 0) {
      if (*(ulong *)(lVar6 + -8) <= uVar8) {
LAB_00116879:
        if (lVar10 != lVar7) {
          uVar4 = _realloc(this,lVar10);
          if ((int)uVar4 != 0) {
            return uVar4;
          }
          lVar6 = *(long *)this;
          if (lVar6 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
        }
        *(long *)(lVar6 + -8) = param_1;
        return 0;
      }
      while( true ) {
        plVar2 = (long *)(lVar6 + uVar8 * 8);
        if (*plVar2 != 0) break;
        uVar8 = uVar8 + 1;
        if (*(ulong *)(lVar6 + -8) <= uVar8) goto LAB_00116879;
      }
      LOCK();
      plVar1 = (long *)(*plVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar6 = *plVar2;
        *plVar2 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
      uVar8 = uVar8 + 1;
      lVar6 = *(long *)this;
    }
    goto LAB_001169f6;
  }
  if (lVar10 == lVar7) {
LAB_0011691f:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
LAB_001169f6:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar6 = puVar9[-1];
    if (param_1 <= lVar6) goto LAB_0011690a;
  }
  else {
    if (lVar6 != 0) {
      uVar4 = _realloc(this,lVar10);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      goto LAB_0011691f;
    }
    puVar5 = (undefined8 *)Memory::alloc_static(uVar8 + 0x11,false);
    if (puVar5 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar9 = puVar5 + 2;
    *puVar5 = 1;
    puVar5[1] = 0;
    *(undefined8 **)this = puVar9;
    lVar6 = 0;
  }
  memset(puVar9 + lVar6,0,(param_1 - lVar6) * 8);
LAB_0011690a:
  puVar9[-1] = param_1;
  return 0;
}



/* Vector<String>::append_array(Vector<String>) */

void __thiscall Vector<String>::append_array(Vector<String> *this,long param_2)

{
  CowData *pCVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if (*(long *)(param_2 + 8) == 0) {
    return;
  }
  lVar2 = *(long *)(*(long *)(param_2 + 8) + -8);
  if (lVar2 != 0) {
    if (*(long *)(this + 8) == 0) {
      lVar6 = 0;
      lVar5 = lVar2;
    }
    else {
      lVar6 = *(long *)(*(long *)(this + 8) + -8);
      lVar5 = lVar2 + lVar6;
    }
    CowData<String>::resize<false>((CowData<String> *)(this + 8),lVar5);
    if (0 < lVar2) {
      lVar6 = lVar6 << 3;
      lVar5 = 0;
      do {
        lVar3 = *(long *)(param_2 + 8);
        if (lVar3 == 0) {
          lVar7 = 0;
LAB_00116ab8:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,lVar5,lVar7,"p_index","size()","",false
                     ,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        lVar7 = *(long *)(lVar3 + -8);
        if (lVar7 <= lVar5) goto LAB_00116ab8;
        pCVar1 = (CowData *)(lVar3 + lVar5 * 8);
        CowData<String>::_copy_on_write((CowData<String> *)(this + 8));
        if (*(long *)(*(long *)(this + 8) + lVar6) != *(long *)pCVar1) {
          CowData<char32_t>::_ref((CowData<char32_t> *)(*(long *)(this + 8) + lVar6),pCVar1);
        }
        lVar5 = lVar5 + 1;
        lVar6 = lVar6 + 8;
      } while (lVar5 != lVar2);
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<OpenXRInterface::Tracker*>::resize<false>(long) */

undefined8 __thiscall
CowData<OpenXRInterface::Tracker*>::resize<false>
          (CowData<OpenXRInterface::Tracker*> *this,long param_1)

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
          if (puVar5 == (undefined8 *)0x0) goto LAB_00116cc9;
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
            if (puVar5 == (undefined8 *)0x0) goto LAB_00116db0;
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
LAB_00116cc9:
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
        }
        else {
          puVar6 = (undefined8 *)Memory::realloc_static(puVar5 + -2,uVar4 + 0x11,false);
          if (puVar6 == (undefined8 *)0x0) {
LAB_00116db0:
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



/* String stringify_variants<char const*>(Variant const&, char const*) */

Variant * stringify_variants<char_const*>(Variant *param_1,char *param_2)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  char *in_RDX;
  long in_FS_OFFSET;
  long local_80;
  long local_78;
  long local_70;
  undefined *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_58,in_RDX);
  stringify_variants((Variant *)&local_70);
  local_68 = &_LC227;
  local_78 = 0;
  local_60 = 1;
  String::parse_latin1((StrRange *)&local_78);
  Variant::operator_cast_to_String((Variant *)&local_80);
  String::operator+((String *)&local_68,(String *)&local_80);
  String::operator+((String *)param_1,(String *)&local_68);
  puVar3 = local_68;
  if (local_68 != (undefined *)0x0) {
    LOCK();
    plVar1 = (long *)(local_68 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_68 = (undefined *)0x0;
      Memory::free_static(puVar3 + -0x10,false);
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
  lVar2 = local_78;
  if (local_78 != 0) {
    LOCK();
    plVar1 = (long *)(local_78 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
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
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void print_line<String, char const*>(Variant const&, String, char const*) */

void print_line<String,char_const*>(undefined8 param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long in_FS_OFFSET;
  bool bVar5;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_90 = 0;
  if (*param_2 != 0) {
    plVar1 = (long *)(*param_2 + -0x10);
    do {
      lVar2 = *plVar1;
      if (lVar2 == 0) goto LAB_0011703e;
      LOCK();
      lVar4 = *plVar1;
      bVar5 = lVar2 == lVar4;
      if (bVar5) {
        *plVar1 = lVar2 + 1;
        lVar4 = lVar2;
      }
      UNLOCK();
    } while (!bVar5);
    if (lVar4 != -1) {
      local_90 = *param_2;
    }
  }
LAB_0011703e:
  Variant::Variant((Variant *)local_58,(String *)&local_90);
  stringify_variants<char_const*>((Variant *)&local_70,(char *)local_58);
  local_68 = &_LC227;
  local_78 = 0;
  local_60 = 1;
  String::parse_latin1((StrRange *)&local_78);
  Variant::operator_cast_to_String((Variant *)&local_80);
  String::operator+((String *)&local_68,(String *)&local_80);
  String::operator+((String *)&local_88,(String *)&local_68);
  puVar3 = local_68;
  if (local_68 != (undefined *)0x0) {
    LOCK();
    plVar1 = (long *)(local_68 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_68 = (undefined *)0x0;
      Memory::free_static(puVar3 + -0x10,false);
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
  lVar2 = local_78;
  if (local_78 != 0) {
    LOCK();
    plVar1 = (long *)(local_78 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
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
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  __print_line((String *)&local_88);
  lVar2 = local_88;
  if (local_88 != 0) {
    LOCK();
    plVar1 = (long *)(local_88 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_88 = 0;
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
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<OpenXRInterface::ActionSet*>::resize<false>(long) */

undefined8 __thiscall
CowData<OpenXRInterface::ActionSet*>::resize<false>
          (CowData<OpenXRInterface::ActionSet*> *this,long param_1)

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
          if (puVar5 == (undefined8 *)0x0) goto LAB_00117409;
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
            if (puVar5 == (undefined8 *)0x0) goto LAB_001174f0;
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
LAB_00117409:
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
        }
        else {
          puVar6 = (undefined8 *)Memory::realloc_static(puVar5 + -2,uVar4 + 0x11,false);
          if (puVar6 == (undefined8 *)0x0) {
LAB_001174f0:
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<OpenXRInterface::Action*>::resize<false>(long) */

undefined8 __thiscall
CowData<OpenXRInterface::Action*>::resize<false>
          (CowData<OpenXRInterface::Action*> *this,long param_1)

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
          if (puVar5 == (undefined8 *)0x0) goto LAB_001176d9;
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
            if (puVar5 == (undefined8 *)0x0) goto LAB_001177c0;
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
LAB_001176d9:
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
        }
        else {
          puVar6 = (undefined8 *)Memory::realloc_static(puVar5 + -2,uVar4 + 0x11,false);
          if (puVar6 == (undefined8 *)0x0) {
LAB_001177c0:
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
LAB_00117b10:
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
  if (lVar10 == 0) goto LAB_00117b10;
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
LAB_00117a7c:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar4 = puVar9[-1];
    if (param_1 <= lVar4) goto LAB_00117a0f;
  }
  else {
    if (lVar11 != 0) {
      uVar8 = _realloc(this,lVar10);
      if ((int)uVar8 != 0) {
        return uVar8;
      }
      goto LAB_00117a7c;
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
  uVar3 = _UNK_00122e78;
  uVar8 = __LC246;
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
LAB_00117a0f:
  puVar9[-1] = param_1;
  return 0;
}



/* WARNING: Removing unreachable block (ram,0x00117c98) */
/* WARNING: Removing unreachable block (ram,0x00117e2d) */
/* WARNING: Removing unreachable block (ram,0x00117e39) */
/* String vformat<StringName>(String const&, StringName const) */

undefined8 * vformat<StringName>(undefined8 *param_1,bool *param_2,StringName *param_3)

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



/* MethodBindTR<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTR<bool>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  bool bVar2;
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
      _err_print_error(&_LC251,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00118030;
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
      bVar2 = (bool)(*(code *)pVVar3)();
      Variant::Variant((Variant *)local_48,bVar2);
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
LAB_00118030:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<bool>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTR<bool>::validated_call
          (MethodBindTR<bool> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  Variant VVar1;
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
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001182d2;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  VVar1 = (Variant)(*pcVar2)(param_1 + *(long *)(this + 0x60));
  param_3[8] = VVar1;
LAB_001182d2:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<bool>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<bool>::ptrcall(MethodBindTR<bool> *this,Object *param_1,void **param_2,void *param_3)

{
  undefined1 uVar1;
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
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00118491;
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
  *(undefined1 *)param_3 = uVar1;
LAB_00118491:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<float, OpenXRInterface::Hand, OpenXRInterface::HandJoints>::validated_call(Object*,
   Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<float,OpenXRInterface::Hand,OpenXRInterface::HandJoints>::validated_call
          (MethodBindTRC<float,OpenXRInterface::Hand,OpenXRInterface::HandJoints> *this,
          Object *param_1,Variant **param_2,Variant *param_3)

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
      local_50 = 0;
      local_40 = 0x35;
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
      goto LAB_00118655;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  fVar3 = (float)(*pcVar1)(param_1 + *(long *)(this + 0x60),*(undefined4 *)(*param_2 + 8),
                           *(undefined4 *)(param_2[1] + 8));
  *(double *)(param_3 + 8) = (double)fVar3;
LAB_00118655:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<float, OpenXRInterface::Hand, OpenXRInterface::HandJoints>::ptrcall(Object*, void
   const**, void*) const */

void __thiscall
MethodBindTRC<float,OpenXRInterface::Hand,OpenXRInterface::HandJoints>::ptrcall
          (MethodBindTRC<float,OpenXRInterface::Hand,OpenXRInterface::HandJoints> *this,
          Object *param_1,void **param_2,void *param_3)

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
      local_50 = 0;
      local_40 = 0x35;
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
      goto LAB_00118832;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
  fVar3 = (float)(*pcVar1)(param_1 + *(long *)(this + 0x60),**param_2,*param_2[1]);
  *(double *)param_3 = (double)fVar3;
LAB_00118832:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector3, OpenXRInterface::Hand,
   OpenXRInterface::HandJoints>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Vector3,OpenXRInterface::Hand,OpenXRInterface::HandJoints>::validated_call
          (MethodBindTRC<Vector3,OpenXRInterface::Hand,OpenXRInterface::HandJoints> *this,
          Object *param_1,Variant **param_2,Variant *param_3)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  undefined1 auVar3 [12];
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_58 == (char *)*plVar2) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00118a18;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  auVar3 = (*pcVar1)(param_1 + *(long *)(this + 0x60),*(undefined4 *)(*param_2 + 8),
                     *(undefined4 *)(param_2[1] + 8));
  *(undefined1 (*) [12])(param_3 + 8) = auVar3;
LAB_00118a18:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector3, OpenXRInterface::Hand, OpenXRInterface::HandJoints>::ptrcall(Object*, void
   const**, void*) const */

void __thiscall
MethodBindTRC<Vector3,OpenXRInterface::Hand,OpenXRInterface::HandJoints>::ptrcall
          (MethodBindTRC<Vector3,OpenXRInterface::Hand,OpenXRInterface::HandJoints> *this,
          Object *param_1,void **param_2,void *param_3)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  undefined1 auVar3 [12];
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_58 == (char *)*plVar2) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00118c05;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
  auVar3 = (*pcVar1)(param_1 + *(long *)(this + 0x60),**param_2,*param_2[1]);
  *(undefined1 (*) [12])param_3 = auVar3;
LAB_00118c05:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Quaternion, OpenXRInterface::Hand,
   OpenXRInterface::HandJoints>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Quaternion,OpenXRInterface::Hand,OpenXRInterface::HandJoints>::validated_call
          (MethodBindTRC<Quaternion,OpenXRInterface::Hand,OpenXRInterface::HandJoints> *this,
          Object *param_1,Variant **param_2,Variant *param_3)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_58 == (char *)*plVar2) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00118dea;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar1)(&local_48,param_1 + *(long *)(this + 0x60),*(undefined4 *)(*param_2 + 8),
            *(undefined4 *)(param_2[1] + 8));
  *(undefined4 *)(param_3 + 8) = local_48;
  *(undefined4 *)(param_3 + 0xc) = uStack_44;
  *(undefined4 *)(param_3 + 0x10) = uStack_40;
  *(undefined4 *)(param_3 + 0x14) = uStack_3c;
LAB_00118dea:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Quaternion, OpenXRInterface::Hand, OpenXRInterface::HandJoints>::ptrcall(Object*,
   void const**, void*) const */

void __thiscall
MethodBindTRC<Quaternion,OpenXRInterface::Hand,OpenXRInterface::HandJoints>::ptrcall
          (MethodBindTRC<Quaternion,OpenXRInterface::Hand,OpenXRInterface::HandJoints> *this,
          Object *param_1,void **param_2,void *param_3)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_58 == (char *)*plVar2) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00118fd7;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
  (*pcVar1)(&local_48,param_1 + *(long *)(this + 0x60),**param_2,*param_2[1]);
  *(undefined4 *)param_3 = local_48;
  *(undefined4 *)((long)param_3 + 4) = uStack_44;
  *(undefined4 *)((long)param_3 + 8) = uStack_40;
  *(undefined4 *)((long)param_3 + 0xc) = uStack_3c;
LAB_00118fd7:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<BitField<OpenXRInterface::HandJointFlags>, OpenXRInterface::Hand,
   OpenXRInterface::HandJoints>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<BitField<OpenXRInterface::HandJointFlags>,OpenXRInterface::Hand,OpenXRInterface::HandJoints>
::validated_call(MethodBindTRC<BitField<OpenXRInterface::HandJointFlags>,OpenXRInterface::Hand,OpenXRInterface::HandJoints>
                 *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  long *plVar3;
  long in_FS_OFFSET;
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
      local_50 = 0;
      local_40 = 0x35;
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
      goto LAB_001191bf;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar2 = (*pcVar1)(param_1 + *(long *)(this + 0x60),*(undefined4 *)(*param_2 + 8),
                    *(undefined4 *)(param_2[1] + 8));
  *(undefined8 *)(param_3 + 8) = uVar2;
LAB_001191bf:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<BitField<OpenXRInterface::HandJointFlags>, OpenXRInterface::Hand,
   OpenXRInterface::HandJoints>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<BitField<OpenXRInterface::HandJointFlags>,OpenXRInterface::Hand,OpenXRInterface::HandJoints>
::ptrcall(MethodBindTRC<BitField<OpenXRInterface::HandJointFlags>,OpenXRInterface::Hand,OpenXRInterface::HandJoints>
          *this,Object *param_1,void **param_2,void *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  long *plVar3;
  long in_FS_OFFSET;
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
      local_50 = 0;
      local_40 = 0x35;
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
      goto LAB_0011939c;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
  uVar2 = (*pcVar1)(param_1 + *(long *)(this + 0x60),**param_2,*param_2[1]);
  *(undefined8 *)param_3 = uVar2;
LAB_0011939c:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<OpenXRInterface::HandTrackedSource, OpenXRInterface::Hand>::validated_call(Object*,
   Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<OpenXRInterface::HandTrackedSource,OpenXRInterface::Hand>::validated_call
          (MethodBindTRC<OpenXRInterface::HandTrackedSource,OpenXRInterface::Hand> *this,
          Object *param_1,Variant **param_2,Variant *param_3)

{
  uint uVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
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
      local_50 = 0;
      local_40 = 0x35;
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
      goto LAB_0011957b;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60),*(undefined4 *)(*param_2 + 8));
  *(ulong *)(param_3 + 8) = (ulong)uVar1;
LAB_0011957b:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<OpenXRInterface::HandTrackedSource, OpenXRInterface::Hand>::ptrcall(Object*, void
   const**, void*) const */

void __thiscall
MethodBindTRC<OpenXRInterface::HandTrackedSource,OpenXRInterface::Hand>::ptrcall
          (MethodBindTRC<OpenXRInterface::HandTrackedSource,OpenXRInterface::Hand> *this,
          Object *param_1,void **param_2,void *param_3)

{
  uint uVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
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
      local_50 = 0;
      local_40 = 0x35;
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
      goto LAB_0011975a;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60),**param_2);
  *(ulong *)param_3 = (ulong)uVar1;
LAB_0011975a:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<OpenXRInterface::HandMotionRange, OpenXRInterface::Hand>::validated_call(Object*,
   Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<OpenXRInterface::HandMotionRange,OpenXRInterface::Hand>::validated_call
          (MethodBindTRC<OpenXRInterface::HandMotionRange,OpenXRInterface::Hand> *this,
          Object *param_1,Variant **param_2,Variant *param_3)

{
  uint uVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
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
      local_50 = 0;
      local_40 = 0x35;
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
      goto LAB_0011993b;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60),*(undefined4 *)(*param_2 + 8));
  *(ulong *)(param_3 + 8) = (ulong)uVar1;
LAB_0011993b:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<OpenXRInterface::HandMotionRange, OpenXRInterface::Hand>::ptrcall(Object*, void
   const**, void*) const */

void __thiscall
MethodBindTRC<OpenXRInterface::HandMotionRange,OpenXRInterface::Hand>::ptrcall
          (MethodBindTRC<OpenXRInterface::HandMotionRange,OpenXRInterface::Hand> *this,
          Object *param_1,void **param_2,void *param_3)

{
  uint uVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
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
      local_50 = 0;
      local_40 = 0x35;
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
      goto LAB_00119b1a;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60),**param_2);
  *(ulong *)param_3 = (ulong)uVar1;
LAB_00119b1a:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<OpenXRInterface::Hand, OpenXRInterface::HandMotionRange>::validated_call(Object*,
   Variant const**, Variant*) const */

void MethodBindT<OpenXRInterface::Hand,OpenXRInterface::HandMotionRange>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

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
      goto LAB_00119e89;
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
                    /* WARNING: Could not recover jumptable at 0x00119d13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8),*(undefined4 *)(*(long *)(param_3 + 8) + 8));
    return;
  }
LAB_00119e89:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<OpenXRInterface::Hand, OpenXRInterface::HandMotionRange>::ptrcall(Object*, void
   const**, void*) const */

void MethodBindT<OpenXRInterface::Hand,OpenXRInterface::HandMotionRange>::ptrcall
               (Object *param_1,void **param_2,void *param_3)

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
      goto LAB_0011a069;
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
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Could not recover jumptable at 0x00119ef1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3,
               **(undefined4 **)((long)param_3 + 8));
    return;
  }
LAB_0011a069:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Array>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<Array>::call
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
      _err_print_error(&_LC251,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011a140;
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
      (*(code *)pVVar2)((Array *)&local_58);
      Variant::Variant((Variant *)local_48,(Array *)&local_58);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
      Array::~Array((Array *)&local_58);
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
LAB_0011a140:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Array>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Array>::validated_call
          (MethodBindTRC<Array> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  code *pcVar1;
  long *plVar2;
  Variant **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Variant **local_48;
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
    if (local_48 == (Variant **)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Variant **)0x117e88;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((Array *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Array *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011a369;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    param_2 = *(Variant ***)(param_1 + *(long *)(this + 0x60));
    pcVar1 = *(code **)(pcVar1 + (long)param_2 + -1);
  }
  (*pcVar1)((Array *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  Array::operator=((Array *)(param_3 + 8),(Array *)&local_48);
  Array::~Array((Array *)&local_48);
LAB_0011a369:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Array>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Array>::ptrcall
          (MethodBindTRC<Array> *this,Object *param_1,void **param_2,void *param_3)

{
  code *pcVar1;
  long *plVar2;
  void **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  void **local_48;
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
    if (local_48 == (void **)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (void **)0x117e88;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((Array *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Array *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011a53a;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    param_2 = *(void ***)(param_1 + *(long *)(this + 0x60));
    pcVar1 = *(code **)(pcVar1 + (long)param_2 + -1);
  }
  (*pcVar1)((Array *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  Array::operator=((Array *)param_3,(Array *)&local_48);
  Array::~Array((Array *)&local_48);
LAB_0011a53a:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&, bool>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<String_const&,bool>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

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
      goto LAB_0011a891;
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
                    /* WARNING: Could not recover jumptable at 0x0011a717. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8,
               *(undefined1 *)(*(long *)(param_3 + 8) + 8));
    return;
  }
LAB_0011a891:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&, bool>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<String_const&,bool>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_0011aa81;
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
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Could not recover jumptable at 0x0011a908. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3,
               **(char **)((long)param_3 + 8) != '\0');
    return;
  }
LAB_0011aa81:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool, String const&>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<bool,String_const&>::validated_call
          (MethodBindTRC<bool,String_const&> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  Variant VVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
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
      local_50 = 0;
      local_40 = 0x35;
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
      goto LAB_0011aad9;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  VVar1 = (Variant)(*pcVar2)(param_1 + *(long *)(this + 0x60),*param_2 + 8);
  param_3[8] = VVar1;
LAB_0011aad9:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool, String const&>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<bool,String_const&>::ptrcall
          (MethodBindTRC<bool,String_const&> *this,Object *param_1,void **param_2,void *param_3)

{
  undefined1 uVar1;
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
      local_50 = 0;
      local_40 = 0x35;
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
      goto LAB_0011acb5;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60),*param_2);
  *(undefined1 *)param_3 = uVar1;
LAB_0011acb5:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<bool>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<bool>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

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
      goto LAB_0011b011;
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
                    /* WARNING: Could not recover jumptable at 0x0011ae9d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined1 *)(*(long *)param_3 + 8));
    return;
  }
LAB_0011b011:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<bool>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<bool>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_0011b1f9;
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
                    /* WARNING: Could not recover jumptable at 0x0011b082. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3 != '\0');
    return;
  }
LAB_0011b1f9:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<int>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

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
      goto LAB_0011b3d1;
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
                    /* WARNING: Could not recover jumptable at 0x0011b25c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_0011b3d1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<int>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_0011b5b1;
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
                    /* WARNING: Could not recover jumptable at 0x0011b43b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_0011b5b1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<int>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  int iVar2;
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
      _err_print_error(&_LC251,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011b680;
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
      iVar2 = (*(code *)pVVar3)();
      Variant::Variant((Variant *)local_48,iVar2);
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
LAB_0011b680:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<int>::validated_call
          (MethodBindTRC<int> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  int iVar1;
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
      goto LAB_0011b894;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  iVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(long *)(param_3 + 8) = (long)iVar1;
LAB_0011b894:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<int>::ptrcall(MethodBindTRC<int> *this,Object *param_1,void **param_2,void *param_3)

{
  int iVar1;
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
      goto LAB_0011ba43;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  iVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(long *)param_3 = (long)iVar1;
LAB_0011ba43:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<bool>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  bool bVar2;
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
      _err_print_error(&_LC251,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011bc70;
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
      bVar2 = (bool)(*(code *)pVVar3)();
      Variant::Variant((Variant *)local_48,bVar2);
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
LAB_0011bc70:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<bool>::validated_call
          (MethodBindTRC<bool> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  Variant VVar1;
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
      goto LAB_0011be82;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  VVar1 = (Variant)(*pcVar2)(param_1 + *(long *)(this + 0x60));
  param_3[8] = VVar1;
LAB_0011be82:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<bool>::ptrcall(MethodBindTRC<bool> *this,Object *param_1,void **param_2,void *param_3)

{
  undefined1 uVar1;
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
      goto LAB_0011c031;
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
  *(undefined1 *)param_3 = uVar1;
LAB_0011c031:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<double>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<double>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

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
      goto LAB_0011c371;
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
                    /* WARNING: Could not recover jumptable at 0x0011c1fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              (*(undefined8 *)(*(long *)param_3 + 8),
               (long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0011c371:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<double>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<double>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_0011c551;
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
                    /* WARNING: Could not recover jumptable at 0x0011c3dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(**param_3,(long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0011c551:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<double>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<double>::call
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
  double dVar5;
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
      _err_print_error(&_LC251,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011c620;
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
      dVar5 = (double)(*(code *)pVVar2)();
      Variant::Variant((Variant *)local_48,dVar5);
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
LAB_0011c620:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<double>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<double>::validated_call
          (MethodBindTRC<double> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  undefined8 uVar3;
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
      goto LAB_0011c834;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar3 = (*pcVar1)(param_1 + *(long *)(this + 0x60));
  *(undefined8 *)(param_3 + 8) = uVar3;
LAB_0011c834:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<double>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<double>::ptrcall
          (MethodBindTRC<double> *this,Object *param_1,void **param_2,void *param_3)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  undefined8 uVar3;
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
      goto LAB_0011c9e3;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar3 = (*pcVar1)(param_1 + *(long *)(this + 0x60));
  *(undefined8 *)param_3 = uVar3;
LAB_0011c9e3:
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
      goto LAB_0011cd29;
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
                    /* WARNING: Could not recover jumptable at 0x0011cbb2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(auVar2._0_8_,(long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0011cd29:
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
      goto LAB_0011cf09;
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
                    /* WARNING: Could not recover jumptable at 0x0011cd91. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(auVar2._0_8_,(long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0011cf09:
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
      _err_print_error(&_LC251,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011cfd0;
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
LAB_0011cfd0:
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
      goto LAB_0011d1e8;
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
LAB_0011d1e8:
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
      goto LAB_0011d3a7;
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
LAB_0011d3a7:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<OpenXRInterface::HandMotionRange, OpenXRInterface::Hand>::call(Object*, Variant
   const**, int, Callable::CallError&) const */

Object * MethodBindTRC<OpenXRInterface::HandMotionRange,OpenXRInterface::Hand>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  undefined4 in_register_00000014;
  long *plVar11;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar12;
  Variant *pVVar13;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar11 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar11 != (long *)0x0) && (plVar11[1] != 0)) && (*(char *)(plVar11[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar11[1] == 0) {
      plVar9 = (long *)plVar11[0x23];
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)(**(code **)(*plVar11 + 0x40))(plVar11);
      }
    }
    else {
      plVar9 = (long *)(plVar11[1] + 0x20);
    }
    if (local_58 == (char *)*plVar9) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC251,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011d650;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar13 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar12 = param_2[5];
    if (pVVar12 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_0011d690;
LAB_0011d680:
      pVVar12 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar12 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0011d690:
        uVar7 = 4;
        goto LAB_0011d645;
      }
      if (in_R8D == 1) goto LAB_0011d680;
      lVar10 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar10) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar10,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar12 = pVVar12 + lVar10 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar13 & 1) != 0) {
      pVVar13 = *(Variant **)(pVVar13 + *(long *)((long)plVar11 + (long)pVVar1) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar12,2);
    uVar4 = _LC255;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    uVar8 = Variant::operator_cast_to_long(pVVar12);
    iVar6 = (*(code *)pVVar13)((Variant *)((long)plVar11 + (long)pVVar1),uVar8 & 0xffffffff);
    Variant::Variant((Variant *)local_48,iVar6);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_48[0];
    *(undefined8 *)(param_1 + 8) = local_40;
    *(undefined8 *)(param_1 + 0x10) = uStack_38;
  }
  else {
    uVar7 = 3;
LAB_0011d645:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_0011d650:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<OpenXRInterface::HandTrackedSource, OpenXRInterface::Hand>::call(Object*, Variant
   const**, int, Callable::CallError&) const */

Object * MethodBindTRC<OpenXRInterface::HandTrackedSource,OpenXRInterface::Hand>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  undefined4 in_register_00000014;
  long *plVar11;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar12;
  Variant *pVVar13;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar11 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar11 != (long *)0x0) && (plVar11[1] != 0)) && (*(char *)(plVar11[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar11[1] == 0) {
      plVar9 = (long *)plVar11[0x23];
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)(**(code **)(*plVar11 + 0x40))(plVar11);
      }
    }
    else {
      plVar9 = (long *)(plVar11[1] + 0x20);
    }
    if (local_58 == (char *)*plVar9) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC251,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011d9d0;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar13 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar12 = param_2[5];
    if (pVVar12 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_0011da10;
LAB_0011da00:
      pVVar12 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar12 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0011da10:
        uVar7 = 4;
        goto LAB_0011d9c5;
      }
      if (in_R8D == 1) goto LAB_0011da00;
      lVar10 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar10) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar10,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar12 = pVVar12 + lVar10 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar13 & 1) != 0) {
      pVVar13 = *(Variant **)(pVVar13 + *(long *)((long)plVar11 + (long)pVVar1) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar12,2);
    uVar4 = _LC255;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    uVar8 = Variant::operator_cast_to_long(pVVar12);
    iVar6 = (*(code *)pVVar13)((Variant *)((long)plVar11 + (long)pVVar1),uVar8 & 0xffffffff);
    Variant::Variant((Variant *)local_48,iVar6);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_48[0];
    *(undefined8 *)(param_1 + 8) = local_40;
    *(undefined8 *)(param_1 + 0x10) = uStack_38;
  }
  else {
    uVar7 = 3;
LAB_0011d9c5:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_0011d9d0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<BitField<OpenXRInterface::HandJointFlags>, OpenXRInterface::Hand,
   OpenXRInterface::HandJoints>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<BitField<OpenXRInterface::HandJointFlags>,OpenXRInterface::Hand,OpenXRInterface::HandJoints>
         ::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  code *pcVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined4 in_register_00000014;
  long *plVar12;
  Variant *this;
  int iVar13;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar14;
  Variant *pVVar15;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  plVar12 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar12 != (long *)0x0) && (plVar12[1] != 0)) && (*(char *)(plVar12[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar12[1] == 0) {
      plVar10 = (long *)plVar12[0x23];
      if (plVar10 == (long *)0x0) {
        plVar10 = (long *)(**(code **)(*plVar12 + 0x40))(plVar12);
      }
    }
    else {
      plVar10 = (long *)(plVar12[1] + 0x20);
    }
    if (local_68 == (char *)*plVar10) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC251,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_0011dd8d;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar14 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 3) {
    pVVar15 = param_2[5];
    iVar5 = 2 - in_R8D;
    if (pVVar15 == (Variant *)0x0) {
      if (iVar5 != 0) goto LAB_0011ddd0;
      this = *(Variant **)param_4;
LAB_0011dded:
      pVVar15 = *(Variant **)(param_4 + 8);
    }
    else {
      lVar9 = *(long *)(pVVar15 + -8);
      iVar13 = (int)lVar9;
      if (iVar13 < iVar5) {
LAB_0011ddd0:
        uVar6 = 4;
        goto LAB_0011ddbd;
      }
      if (in_R8D == 0) {
        lVar11 = (long)(iVar13 + -2);
        if (lVar9 <= lVar11) goto LAB_0011deb0;
        this = pVVar15 + lVar11 * 0x18;
      }
      else {
        this = *(Variant **)param_4;
        if (in_R8D == 2) goto LAB_0011dded;
      }
      lVar11 = (long)(int)((in_R8D ^ 1) + (iVar13 - iVar5));
      if (lVar9 <= lVar11) {
LAB_0011deb0:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar11,lVar9,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      pVVar15 = pVVar15 + lVar11 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar14 & 1) != 0) {
      pVVar14 = *(Variant **)(pVVar14 + *(long *)((long)plVar12 + (long)pVVar1) + -1);
    }
    cVar4 = Variant::can_convert_strict(*(undefined4 *)pVVar15,2);
    uVar3 = _LC256;
    if (cVar4 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar3;
    }
    uVar7 = Variant::operator_cast_to_long(pVVar15);
    cVar4 = Variant::can_convert_strict(*(undefined4 *)this,2);
    uVar3 = _LC255;
    if (cVar4 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar3;
    }
    uVar8 = Variant::operator_cast_to_long(this);
    lVar9 = (*(code *)pVVar14)((Variant *)((long)plVar12 + (long)pVVar1),uVar8 & 0xffffffff,
                               uVar7 & 0xffffffff);
    Variant::Variant((Variant *)local_58,lVar9);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_58[0];
    *(undefined8 *)(param_1 + 8) = local_50;
    *(undefined8 *)(param_1 + 0x10) = uStack_48;
  }
  else {
    uVar6 = 3;
LAB_0011ddbd:
    *in_R9 = uVar6;
    in_R9[2] = 2;
  }
LAB_0011dd8d:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool, String const&>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindTRC<bool,String_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  undefined4 uVar7;
  long *plVar8;
  long lVar9;
  undefined4 in_register_00000014;
  long *plVar10;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar11;
  Variant *pVVar12;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  plVar10 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar10 != (long *)0x0) && (plVar10[1] != 0)) && (*(char *)(plVar10[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar10[1] == 0) {
      plVar8 = (long *)plVar10[0x23];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*plVar10 + 0x40))(plVar10);
      }
    }
    else {
      plVar8 = (long *)(plVar10[1] + 0x20);
    }
    if (local_68 == (char *)*plVar8) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC251,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_0011e140;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar12 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar11 = param_2[5];
    if (pVVar11 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_0011e190;
LAB_0011e180:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0011e190:
        uVar7 = 4;
        goto LAB_0011e135;
      }
      if (in_R8D == 1) goto LAB_0011e180;
      lVar9 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar9) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar11 = pVVar11 + lVar9 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar12 & 1) != 0) {
      pVVar12 = *(Variant **)(pVVar12 + *(long *)((long)plVar10 + (long)pVVar1) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar11,4);
    uVar4 = _LC257;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_String((Variant *)&local_68);
    bVar6 = (bool)(*(code *)pVVar12)((Variant *)((long)plVar10 + (long)pVVar1),(Variant *)&local_68)
    ;
    Variant::Variant((Variant *)local_58,bVar6);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_58[0];
    *(undefined8 *)(param_1 + 8) = local_50;
    *(undefined8 *)(param_1 + 0x10) = uStack_48;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  }
  else {
    uVar7 = 3;
LAB_0011e135:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_0011e140:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* void call_get_argument_type_info<OpenXRInterface::Hand, OpenXRInterface::HandJoints>(int,
   PropertyInfo&) */

void call_get_argument_type_info<OpenXRInterface::Hand,OpenXRInterface::HandJoints>
               (int param_1,PropertyInfo *param_2)

{
  details *this;
  undefined1 auVar1 [16];
  long lVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  long local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  char *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) {
    local_80 = 0;
    this = (details *)&local_88;
    local_60._0_8_ = 0x15;
    local_68 = "OpenXRInterface::Hand";
    String::parse_latin1((StrRange *)&local_80);
    godot::details::enum_qualified_name_to_class_info_name(this,(String *)&local_80);
    StringName::StringName((StringName *)&local_90,(String *)this,false);
    local_60 = (undefined1  [16])0x0;
    local_78 = 0;
    local_70 = 0;
    local_68 = (char *)0x2;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0x10006;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    lVar2 = local_90;
  }
  else {
    if (param_1 != 1) goto LAB_0011e3d0;
    local_80 = 0;
    this = (details *)&local_78;
    local_60._0_8_ = 0x1b;
    local_68 = "OpenXRInterface::HandJoints";
    String::parse_latin1((StrRange *)&local_80);
    godot::details::enum_qualified_name_to_class_info_name(this,(String *)&local_80);
    StringName::StringName((StringName *)&local_70,(String *)this,false);
    local_60 = (undefined1  [16])0x0;
    local_88 = 0;
    local_90 = 0;
    local_68 = (char *)0x2;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0x10006;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    lVar2 = local_70;
  }
  if ((StringName::configured != '\0') && (lVar2 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  *(undefined4 *)param_2 = local_68._0_4_;
  if (*(long *)(param_2 + 8) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 8));
    uVar3 = local_60._0_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_60._8_8_;
    local_60 = auVar1 << 0x40;
    *(undefined8 *)(param_2 + 8) = uVar3;
  }
  if (*(long *)(param_2 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar3 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(param_2 + 0x10) = uVar3;
  }
  *(undefined4 *)(param_2 + 0x18) = (undefined4)local_50;
  if (*(long *)(param_2 + 0x20) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 0x20));
    lVar2 = local_48;
    local_48 = 0;
    *(long *)(param_2 + 0x20) = lVar2;
  }
  *(undefined4 *)(param_2 + 0x28) = local_40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
LAB_0011e3d0:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindTRC<BitField<OpenXRInterface::HandJointFlags>, OpenXRInterface::Hand,
   OpenXRInterface::HandJoints>::_gen_argument_type_info(int) const */

undefined4 *
MethodBindTRC<BitField<OpenXRInterface::HandJointFlags>,OpenXRInterface::Hand,OpenXRInterface::HandJoints>
::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar7;
  long in_FS_OFFSET;
  undefined8 local_80;
  long local_78;
  long local_70;
  char *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar7 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX < 2) {
    local_68 = (char *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info<OpenXRInterface::Hand,OpenXRInterface::HandJoints>
              (in_EDX,(PropertyInfo *)&local_68);
    uVar5 = local_60._0_8_;
    uVar6 = local_60._8_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *puVar7 = local_68._0_4_;
    *(undefined8 *)(puVar7 + 2) = uVar5;
    *(undefined8 *)(puVar7 + 4) = uVar6;
    puVar7[6] = (undefined4)local_50;
    *(undefined8 *)(puVar7 + 8) = local_48;
    puVar7[10] = local_40;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
  }
  else {
    local_78 = 0;
    local_68 = "OpenXRInterface::HandJointFlags";
    local_60._8_8_ = local_60._0_8_;
    local_60._0_8_ = 0x1f;
    String::parse_latin1((StrRange *)&local_78);
    godot::details::enum_qualified_name_to_class_info_name((details *)&local_70,(String *)&local_78)
    ;
    StringName::StringName((StringName *)&local_68,(String *)&local_70,false);
    *puVar7 = 2;
    puVar7[6] = 0;
    *(undefined8 *)(puVar7 + 8) = 0;
    puVar7[10] = 0x206;
    *(undefined1 (*) [16])(puVar7 + 2) = (undefined1  [16])0x0;
    local_80 = 0;
    StringName::operator=((StringName *)(puVar7 + 4),(StringName *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
    lVar4 = local_70;
    lVar3 = local_78;
    if (local_70 != 0) {
      LOCK();
      plVar1 = (long *)(local_70 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_70 = 0;
        Memory::free_static((void *)(lVar4 + -0x10),false);
        lVar3 = local_78;
      }
    }
    local_78 = lVar3;
    if (lVar3 != 0) {
      LOCK();
      plVar1 = (long *)(lVar3 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_78 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar7;
}



/* MethodBindTRC<Quaternion, OpenXRInterface::Hand,
   OpenXRInterface::HandJoints>::_gen_argument_type_info(int) const */

undefined4 *
MethodBindTRC<Quaternion,OpenXRInterface::Hand,OpenXRInterface::HandJoints>::_gen_argument_type_info
          (int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar7;
  long in_FS_OFFSET;
  long local_78;
  long local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar7 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX < 2) {
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info<OpenXRInterface::Hand,OpenXRInterface::HandJoints>
              (in_EDX,(PropertyInfo *)&local_68);
    uVar5 = local_60._0_8_;
    uVar6 = local_60._8_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *puVar7 = local_68._0_4_;
    *(undefined8 *)(puVar7 + 2) = uVar5;
    *(undefined8 *)(puVar7 + 4) = uVar6;
    puVar7[6] = (undefined4)local_50;
    *(undefined8 *)(puVar7 + 8) = local_48;
    puVar7[10] = local_40;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
    goto LAB_0011e9a2;
  }
  local_70 = 0;
  local_68 = &_LC10;
  local_78 = 0;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = local_60._0_8_;
  local_60 = auVar3 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  *puVar7 = 0xf;
  puVar7[6] = 0;
  *(undefined8 *)(puVar7 + 8) = 0;
  *(undefined1 (*) [16])(puVar7 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar7[10] = 6;
LAB_0011e9cf:
    StringName::operator=((StringName *)(puVar7 + 4),(StringName *)&local_70);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar7 + 8),(CowData *)&local_78);
    puVar7[10] = 6;
    if (puVar7[6] != 0x11) goto LAB_0011e9cf;
    StringName::StringName((StringName *)&local_68,(String *)(puVar7 + 8),false);
    if (*(undefined **)(puVar7 + 4) == local_68) {
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar7 + 4) = local_68;
    }
  }
  lVar4 = local_78;
  if (local_78 != 0) {
    LOCK();
    plVar1 = (long *)(local_78 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_0011e9a2:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<float, OpenXRInterface::Hand,
   OpenXRInterface::HandJoints>::_gen_argument_type_info(int) const */

undefined4 *
MethodBindTRC<float,OpenXRInterface::Hand,OpenXRInterface::HandJoints>::_gen_argument_type_info
          (int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar7;
  long in_FS_OFFSET;
  long local_78;
  long local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar7 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX < 2) {
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info<OpenXRInterface::Hand,OpenXRInterface::HandJoints>
              (in_EDX,(PropertyInfo *)&local_68);
    uVar5 = local_60._0_8_;
    uVar6 = local_60._8_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *puVar7 = local_68._0_4_;
    *(undefined8 *)(puVar7 + 2) = uVar5;
    *(undefined8 *)(puVar7 + 4) = uVar6;
    puVar7[6] = (undefined4)local_50;
    *(undefined8 *)(puVar7 + 8) = local_48;
    puVar7[10] = local_40;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
    goto LAB_0011eba2;
  }
  local_70 = 0;
  local_68 = &_LC10;
  local_78 = 0;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = local_60._0_8_;
  local_60 = auVar3 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  *puVar7 = 3;
  puVar7[6] = 0;
  *(undefined8 *)(puVar7 + 8) = 0;
  *(undefined1 (*) [16])(puVar7 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar7[10] = 6;
LAB_0011ebcf:
    StringName::operator=((StringName *)(puVar7 + 4),(StringName *)&local_70);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar7 + 8),(CowData *)&local_78);
    puVar7[10] = 6;
    if (puVar7[6] != 0x11) goto LAB_0011ebcf;
    StringName::StringName((StringName *)&local_68,(String *)(puVar7 + 8),false);
    if (*(undefined **)(puVar7 + 4) == local_68) {
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar7 + 4) = local_68;
    }
  }
  lVar4 = local_78;
  if (local_78 != 0) {
    LOCK();
    plVar1 = (long *)(local_78 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_0011eba2:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector3, OpenXRInterface::Hand,
   OpenXRInterface::HandJoints>::_gen_argument_type_info(int) const */

undefined4 *
MethodBindTRC<Vector3,OpenXRInterface::Hand,OpenXRInterface::HandJoints>::_gen_argument_type_info
          (int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar7;
  long in_FS_OFFSET;
  long local_78;
  long local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar7 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX < 2) {
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info<OpenXRInterface::Hand,OpenXRInterface::HandJoints>
              (in_EDX,(PropertyInfo *)&local_68);
    uVar5 = local_60._0_8_;
    uVar6 = local_60._8_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *puVar7 = local_68._0_4_;
    *(undefined8 *)(puVar7 + 2) = uVar5;
    *(undefined8 *)(puVar7 + 4) = uVar6;
    puVar7[6] = (undefined4)local_50;
    *(undefined8 *)(puVar7 + 8) = local_48;
    puVar7[10] = local_40;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
    goto LAB_0011eda2;
  }
  local_70 = 0;
  local_68 = &_LC10;
  local_78 = 0;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = local_60._0_8_;
  local_60 = auVar3 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  *puVar7 = 9;
  puVar7[6] = 0;
  *(undefined8 *)(puVar7 + 8) = 0;
  *(undefined1 (*) [16])(puVar7 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar7[10] = 6;
LAB_0011edcf:
    StringName::operator=((StringName *)(puVar7 + 4),(StringName *)&local_70);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar7 + 8),(CowData *)&local_78);
    puVar7[10] = 6;
    if (puVar7[6] != 0x11) goto LAB_0011edcf;
    StringName::StringName((StringName *)&local_68,(String *)(puVar7 + 8),false);
    if (*(undefined **)(puVar7 + 4) == local_68) {
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar7 + 4) = local_68;
    }
  }
  lVar4 = local_78;
  if (local_78 != 0) {
    LOCK();
    plVar1 = (long *)(local_78 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_0011eda2:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_retc_dv<__UnexistingClass, float, OpenXRInterface::Hand,
   OpenXRInterface::HandJoints>(__UnexistingClass*, float
   (__UnexistingClass::*)(OpenXRInterface::Hand, OpenXRInterface::HandJoints) const, Variant
   const**, int, Variant&, Callable::CallError&, Vector<Variant> const&) */

void call_with_variant_args_retc_dv<__UnexistingClass,float,OpenXRInterface::Hand,OpenXRInterface::HandJoints>
               (__UnexistingClass *param_1,_func_float_Hand_HandJoints *param_2,Variant **param_3,
               int param_4,Variant *param_5,CallError *param_6,Vector *param_7)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  char cVar4;
  undefined4 uVar5;
  long lVar6;
  undefined4 in_register_0000000c;
  long *plVar7;
  long lVar8;
  Variant *this;
  uint uVar9;
  int iVar10;
  int iVar11;
  Variant *this_00;
  long in_FS_OFFSET;
  float fVar12;
  long in_stack_00000010;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  plVar7 = (long *)CONCAT44(in_register_0000000c,param_4);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar9 = (uint)param_5;
  if (uVar9 < 3) {
    lVar6 = *(long *)(in_stack_00000010 + 8);
    iVar10 = 2 - uVar9;
    if (lVar6 == 0) {
      if (iVar10 != 0) goto LAB_0011efb8;
      this = (Variant *)*plVar7;
LAB_0011f00d:
      this_00 = (Variant *)plVar7[1];
    }
    else {
      lVar1 = *(long *)(lVar6 + -8);
      iVar11 = (int)lVar1;
      if (iVar11 < iVar10) {
LAB_0011efb8:
        uVar5 = 4;
        goto LAB_0011efbd;
      }
      if (uVar9 == 0) {
        lVar8 = (long)(iVar11 + -2);
        if (lVar1 <= lVar8) goto LAB_0011f028;
        this = (Variant *)(lVar6 + lVar8 * 0x18);
      }
      else {
        this = (Variant *)*plVar7;
        if (uVar9 == 2) goto LAB_0011f00d;
      }
      lVar8 = (long)(int)((iVar11 - iVar10) + (uVar9 ^ 1));
      if (lVar1 <= lVar8) {
LAB_0011f028:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar8,lVar1,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      this_00 = (Variant *)(lVar6 + lVar8 * 0x18);
    }
    *(undefined4 *)param_7 = 0;
    if (((ulong)param_2 & 1) != 0) {
      param_2 = *(_func_float_Hand_HandJoints **)(param_2 + *(long *)(param_1 + (long)param_3) + -1)
      ;
    }
    cVar4 = Variant::can_convert_strict(*(undefined4 *)this_00,2);
    uVar3 = _LC256;
    if (cVar4 == '\0') {
      *(undefined4 *)param_7 = 2;
      *(undefined8 *)(param_7 + 4) = uVar3;
    }
    Variant::operator_cast_to_long(this_00);
    cVar4 = Variant::can_convert_strict(*(undefined4 *)this,2);
    uVar3 = _LC255;
    if (cVar4 == '\0') {
      *(undefined4 *)param_7 = 2;
      *(undefined8 *)(param_7 + 4) = uVar3;
    }
    lVar6 = Variant::operator_cast_to_long(this);
    fVar12 = (*param_2)((char)(param_1 + (long)param_3),(char)lVar6);
    Variant::Variant((Variant *)local_58,fVar12);
    if (Variant::needs_deinit[*(int *)param_6] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_6 = local_58[0];
    *(undefined8 *)(param_6 + 8) = local_50;
    *(undefined8 *)(param_6 + 0x10) = uStack_48;
  }
  else {
    uVar5 = 3;
LAB_0011efbd:
    *(undefined4 *)param_7 = uVar5;
    *(undefined4 *)(param_7 + 8) = 2;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<float, OpenXRInterface::Hand, OpenXRInterface::HandJoints>::call(Object*, Variant
   const**, int, Callable::CallError&) const */

Object * MethodBindTRC<float,OpenXRInterface::Hand,OpenXRInterface::HandJoints>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long lVar1;
  char *pcVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var4;
  Variant *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var4 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((p_Var4 != (__UnexistingClass *)0x0) && (*(long *)(p_Var4 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var4 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var4 + 8) == 0) {
      plVar3 = *(long **)(p_Var4 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)p_Var4 + 0x40))(p_Var4);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(p_Var4 + 8) + 0x20);
    }
    in_R8 = (Variant *)((ulong)in_R8 & 0xffffffff);
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC251,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_48,0,0);
      pcVar2 = local_48;
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
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011f0e6;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_retc_dv<__UnexistingClass,float,OpenXRInterface::Hand,OpenXRInterface::HandJoints>
            (p_Var4,(_func_float_Hand_HandJoints *)param_2[0xb],(Variant **)param_2[0xc],
             (int)param_4,in_R8,(CallError *)param_1,in_R9);
LAB_0011f0e6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_retc_dv<__UnexistingClass, Vector3, OpenXRInterface::Hand,
   OpenXRInterface::HandJoints>(__UnexistingClass*, Vector3
   (__UnexistingClass::*)(OpenXRInterface::Hand, OpenXRInterface::HandJoints) const, Variant
   const**, int, Variant&, Callable::CallError&, Vector<Variant> const&) */

void call_with_variant_args_retc_dv<__UnexistingClass,Vector3,OpenXRInterface::Hand,OpenXRInterface::HandJoints>
               (__UnexistingClass *param_1,_func_Vector3_Hand_HandJoints *param_2,Variant **param_3,
               int param_4,Variant *param_5,CallError *param_6,Vector *param_7)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  char cVar4;
  undefined4 uVar5;
  long lVar6;
  undefined4 in_register_0000000c;
  long *plVar7;
  long lVar8;
  Variant *this;
  uint uVar9;
  int iVar10;
  int iVar11;
  Variant *this_00;
  long in_FS_OFFSET;
  long in_stack_00000010;
  undefined1 local_64 [12];
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  plVar7 = (long *)CONCAT44(in_register_0000000c,param_4);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar9 = (uint)param_5;
  if (uVar9 < 3) {
    lVar6 = *(long *)(in_stack_00000010 + 8);
    iVar10 = 2 - uVar9;
    if (lVar6 == 0) {
      if (iVar10 != 0) goto LAB_0011f468;
      this = (Variant *)*plVar7;
LAB_0011f4bd:
      this_00 = (Variant *)plVar7[1];
    }
    else {
      lVar1 = *(long *)(lVar6 + -8);
      iVar11 = (int)lVar1;
      if (iVar11 < iVar10) {
LAB_0011f468:
        uVar5 = 4;
        goto LAB_0011f46d;
      }
      if (uVar9 == 0) {
        lVar8 = (long)(iVar11 + -2);
        if (lVar1 <= lVar8) goto LAB_0011f4d8;
        this = (Variant *)(lVar6 + lVar8 * 0x18);
      }
      else {
        this = (Variant *)*plVar7;
        if (uVar9 == 2) goto LAB_0011f4bd;
      }
      lVar8 = (long)(int)((iVar11 - iVar10) + (uVar9 ^ 1));
      if (lVar1 <= lVar8) {
LAB_0011f4d8:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar8,lVar1,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      this_00 = (Variant *)(lVar6 + lVar8 * 0x18);
    }
    *(undefined4 *)param_7 = 0;
    if (((ulong)param_2 & 1) != 0) {
      param_2 = *(_func_Vector3_Hand_HandJoints **)
                 (param_2 + *(long *)(param_1 + (long)param_3) + -1);
    }
    cVar4 = Variant::can_convert_strict(*(undefined4 *)this_00,2);
    uVar3 = _LC256;
    if (cVar4 == '\0') {
      *(undefined4 *)param_7 = 2;
      *(undefined8 *)(param_7 + 4) = uVar3;
    }
    Variant::operator_cast_to_long(this_00);
    cVar4 = Variant::can_convert_strict(*(undefined4 *)this,2);
    uVar3 = _LC255;
    if (cVar4 == '\0') {
      *(undefined4 *)param_7 = 2;
      *(undefined8 *)(param_7 + 4) = uVar3;
    }
    lVar6 = Variant::operator_cast_to_long(this);
    local_64 = (undefined1  [12])(*param_2)((char)(param_1 + (long)param_3),(char)lVar6);
    Variant::Variant((Variant *)local_58,local_64);
    if (Variant::needs_deinit[*(int *)param_6] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_6 = local_58[0];
    *(undefined8 *)(param_6 + 8) = local_50;
    *(undefined8 *)(param_6 + 0x10) = uStack_48;
  }
  else {
    uVar5 = 3;
LAB_0011f46d:
    *(undefined4 *)param_7 = uVar5;
    *(undefined4 *)(param_7 + 8) = 2;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector3, OpenXRInterface::Hand, OpenXRInterface::HandJoints>::call(Object*, Variant
   const**, int, Callable::CallError&) const */

Object * MethodBindTRC<Vector3,OpenXRInterface::Hand,OpenXRInterface::HandJoints>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long lVar1;
  char *pcVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var4;
  Variant *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var4 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((p_Var4 != (__UnexistingClass *)0x0) && (*(long *)(p_Var4 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var4 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var4 + 8) == 0) {
      plVar3 = *(long **)(p_Var4 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)p_Var4 + 0x40))(p_Var4);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(p_Var4 + 8) + 0x20);
    }
    in_R8 = (Variant *)((ulong)in_R8 & 0xffffffff);
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC251,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_48,0,0);
      pcVar2 = local_48;
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
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011f596;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_retc_dv<__UnexistingClass,Vector3,OpenXRInterface::Hand,OpenXRInterface::HandJoints>
            (p_Var4,(_func_Vector3_Hand_HandJoints *)param_2[0xb],(Variant **)param_2[0xc],
             (int)param_4,in_R8,(CallError *)param_1,in_R9);
LAB_0011f596:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_retc_dv<__UnexistingClass, Quaternion, OpenXRInterface::Hand,
   OpenXRInterface::HandJoints>(__UnexistingClass*, Quaternion
   (__UnexistingClass::*)(OpenXRInterface::Hand, OpenXRInterface::HandJoints) const, Variant
   const**, int, Variant&, Callable::CallError&, Vector<Variant> const&) */

void call_with_variant_args_retc_dv<__UnexistingClass,Quaternion,OpenXRInterface::Hand,OpenXRInterface::HandJoints>
               (__UnexistingClass *param_1,_func_Quaternion_Hand_HandJoints *param_2,
               Variant **param_3,int param_4,Variant *param_5,CallError *param_6,Vector *param_7)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  undefined4 in_register_0000000c;
  long *plVar7;
  long lVar8;
  Variant *this;
  uint uVar9;
  int iVar10;
  int iVar11;
  Variant *this_00;
  long in_FS_OFFSET;
  long in_stack_00000010;
  Quaternion aQStack_68 [16];
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  plVar7 = (long *)CONCAT44(in_register_0000000c,param_4);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar9 = (uint)param_5;
  if (uVar9 < 3) {
    lVar1 = *(long *)(in_stack_00000010 + 8);
    iVar10 = 2 - uVar9;
    if (lVar1 == 0) {
      if (iVar10 != 0) goto LAB_0011f910;
      this = (Variant *)*plVar7;
LAB_0011f95d:
      this_00 = (Variant *)plVar7[1];
    }
    else {
      lVar2 = *(long *)(lVar1 + -8);
      iVar11 = (int)lVar2;
      if (iVar11 < iVar10) {
LAB_0011f910:
        uVar6 = 4;
        goto LAB_0011f915;
      }
      if (uVar9 == 0) {
        lVar8 = (long)(iVar11 + -2);
        if (lVar2 <= lVar8) goto LAB_0011f978;
        this = (Variant *)(lVar1 + lVar8 * 0x18);
      }
      else {
        this = (Variant *)*plVar7;
        if (uVar9 == 2) goto LAB_0011f95d;
      }
      lVar8 = (long)(int)((iVar11 - iVar10) + (uVar9 ^ 1));
      if (lVar2 <= lVar8) {
LAB_0011f978:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar8,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this_00 = (Variant *)(lVar1 + lVar8 * 0x18);
    }
    *(undefined4 *)param_7 = 0;
    if (((ulong)param_2 & 1) != 0) {
      param_2 = *(_func_Quaternion_Hand_HandJoints **)
                 (param_2 + *(long *)(param_1 + (long)param_3) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)this_00,2);
    uVar4 = _LC256;
    if (cVar5 == '\0') {
      *(undefined4 *)param_7 = 2;
      *(undefined8 *)(param_7 + 4) = uVar4;
    }
    Variant::operator_cast_to_long(this_00);
    cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
    uVar4 = _LC255;
    if (cVar5 == '\0') {
      *(undefined4 *)param_7 = 2;
      *(undefined8 *)(param_7 + 4) = uVar4;
    }
    Variant::operator_cast_to_long(this);
    (*param_2)((char)aQStack_68,(char)(param_1 + (long)param_3));
    Variant::Variant((Variant *)local_58,aQStack_68);
    if (Variant::needs_deinit[*(int *)param_6] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_6 = local_58[0];
    *(undefined8 *)(param_6 + 8) = local_50;
    *(undefined8 *)(param_6 + 0x10) = uStack_48;
  }
  else {
    uVar6 = 3;
LAB_0011f915:
    *(undefined4 *)param_7 = uVar6;
    *(undefined4 *)(param_7 + 8) = 2;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Quaternion, OpenXRInterface::Hand, OpenXRInterface::HandJoints>::call(Object*,
   Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<Quaternion,OpenXRInterface::Hand,OpenXRInterface::HandJoints>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long lVar1;
  char *pcVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var4;
  Variant *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var4 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((p_Var4 != (__UnexistingClass *)0x0) && (*(long *)(p_Var4 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var4 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var4 + 8) == 0) {
      plVar3 = *(long **)(p_Var4 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)p_Var4 + 0x40))(p_Var4);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(p_Var4 + 8) + 0x20);
    }
    in_R8 = (Variant *)((ulong)in_R8 & 0xffffffff);
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC251,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_48,0,0);
      pcVar2 = local_48;
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
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011fa36;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_retc_dv<__UnexistingClass,Quaternion,OpenXRInterface::Hand,OpenXRInterface::HandJoints>
            (p_Var4,(_func_Quaternion_Hand_HandJoints *)param_2[0xb],(Variant **)param_2[0xc],
             (int)param_4,in_R8,(CallError *)param_1,in_R9);
LAB_0011fa36:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, OpenXRInterface::Hand,
   OpenXRInterface::HandMotionRange>(__UnexistingClass*, void
   (__UnexistingClass::*)(OpenXRInterface::Hand, OpenXRInterface::HandMotionRange), Variant const**,
   int, Callable::CallError&, Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,OpenXRInterface::Hand,OpenXRInterface::HandMotionRange>
               (__UnexistingClass *param_1,_func_void_Hand_HandMotionRange *param_2,
               Variant **param_3,int param_4,CallError *param_5,Vector *param_6)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  undefined4 in_register_0000000c;
  long *plVar8;
  long lVar9;
  Variant *this;
  uint uVar10;
  int iVar11;
  Variant *this_00;
  long in_stack_00000008;
  
  plVar8 = (long *)CONCAT44(in_register_0000000c,param_4);
  uVar10 = (uint)param_5;
  if (2 < uVar10) {
    uVar6 = 3;
    goto LAB_0011fd5d;
  }
  lVar7 = *(long *)(in_stack_00000008 + 8);
  iVar5 = 2 - uVar10;
  if (lVar7 == 0) {
    if (iVar5 == 0) {
      this = (Variant *)*plVar8;
LAB_0011fd8d:
      this_00 = (Variant *)plVar8[1];
      goto LAB_0011fcc5;
    }
  }
  else {
    lVar1 = *(long *)(lVar7 + -8);
    iVar11 = (int)lVar1;
    if (iVar5 <= iVar11) {
      if (uVar10 == 0) {
        lVar9 = (long)(iVar11 + -2);
        if (lVar1 <= lVar9) goto LAB_0011fda8;
        this = (Variant *)(lVar7 + lVar9 * 0x18);
      }
      else {
        this = (Variant *)*plVar8;
        if (uVar10 == 2) goto LAB_0011fd8d;
      }
      lVar9 = (long)(int)((uVar10 ^ 1) + (iVar11 - iVar5));
      if (lVar1 <= lVar9) {
LAB_0011fda8:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar1,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      this_00 = (Variant *)(lVar7 + lVar9 * 0x18);
LAB_0011fcc5:
      *(undefined4 *)param_6 = 0;
      if (((ulong)param_2 & 1) != 0) {
        param_2 = *(_func_void_Hand_HandMotionRange **)
                   (param_2 + *(long *)(param_1 + (long)param_3) + -1);
      }
      cVar4 = Variant::can_convert_strict(*(undefined4 *)this_00,2);
      uVar3 = _LC256;
      if (cVar4 == '\0') {
        *(undefined4 *)param_6 = 2;
        *(undefined8 *)(param_6 + 4) = uVar3;
      }
      Variant::operator_cast_to_long(this_00);
      cVar4 = Variant::can_convert_strict(*(undefined4 *)this,2);
      uVar3 = _LC255;
      if (cVar4 == '\0') {
        *(undefined4 *)param_6 = 2;
        *(undefined8 *)(param_6 + 4) = uVar3;
      }
      lVar7 = Variant::operator_cast_to_long(this);
                    /* WARNING: Could not recover jumptable at 0x0011fd4b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*param_2)((char)(param_1 + (long)param_3),(char)lVar7);
      return;
    }
  }
  uVar6 = 4;
LAB_0011fd5d:
  *(undefined4 *)param_6 = uVar6;
  *(undefined4 *)(param_6 + 8) = 2;
  return;
}



/* MethodBindT<OpenXRInterface::Hand, OpenXRInterface::HandMotionRange>::call(Object*, Variant
   const**, int, Callable::CallError&) const */

Object * MethodBindT<OpenXRInterface::Hand,OpenXRInterface::HandMotionRange>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long lVar1;
  char *pcVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var4;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var4 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var4 != (__UnexistingClass *)0x0) && (*(long *)(p_Var4 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var4 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var4 + 8) == 0) {
      plVar3 = *(long **)(p_Var4 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)p_Var4 + 0x40))(p_Var4);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(p_Var4 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC251,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      pcVar2 = local_48;
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
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_0011fee6;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,OpenXRInterface::Hand,OpenXRInterface::HandMotionRange>
            (p_Var4,(_func_void_Hand_HandMotionRange *)param_2[0xb],(Variant **)param_2[0xc],
             (int)param_4,in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_0011fee6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, String const&, bool>(__UnexistingClass*, void
   (__UnexistingClass::*)(String const&, bool), Variant const**, int, Callable::CallError&,
   Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,String_const&,bool>
               (__UnexistingClass *param_1,_func_void_String_ptr_bool *param_2,Variant **param_3,
               int param_4,CallError *param_5,Vector *param_6)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 in_register_0000000c;
  long *plVar8;
  long lVar9;
  undefined4 *puVar10;
  uint uVar11;
  int iVar12;
  Variant *this;
  long in_FS_OFFSET;
  long in_stack_00000008;
  Variant aVStack_38 [8];
  long local_30;
  
  plVar8 = (long *)CONCAT44(in_register_0000000c,param_4);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar11 = (uint)param_5;
  if (uVar11 < 3) {
    lVar1 = *(long *)(in_stack_00000008 + 8);
    iVar6 = 2 - uVar11;
    if (lVar1 == 0) {
      if (iVar6 != 0) goto LAB_00120238;
      puVar10 = (undefined4 *)*plVar8;
LAB_0012028d:
      this = (Variant *)plVar8[1];
    }
    else {
      lVar2 = *(long *)(lVar1 + -8);
      iVar12 = (int)lVar2;
      if (iVar12 < iVar6) {
LAB_00120238:
        uVar7 = 4;
        goto LAB_0012023d;
      }
      if (uVar11 == 0) {
        lVar9 = (long)(iVar12 + -2);
        if (lVar2 <= lVar9) goto LAB_001202a8;
        puVar10 = (undefined4 *)(lVar1 + lVar9 * 0x18);
      }
      else {
        puVar10 = (undefined4 *)*plVar8;
        if (uVar11 == 2) goto LAB_0012028d;
      }
      lVar9 = (long)(int)((uVar11 ^ 1) + (iVar12 - iVar6));
      if (lVar2 <= lVar9) {
LAB_001202a8:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this = (Variant *)(lVar1 + lVar9 * 0x18);
    }
    *(undefined4 *)param_6 = 0;
    if (((ulong)param_2 & 1) != 0) {
      param_2 = *(_func_void_String_ptr_bool **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)this,1);
    uVar4 = _LC259;
    if (cVar5 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar4;
    }
    Variant::operator_cast_to_bool(this);
    cVar5 = Variant::can_convert_strict(*puVar10,4);
    uVar4 = _LC257;
    if (cVar5 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar4;
    }
    Variant::operator_cast_to_String(aVStack_38);
    (*param_2)((String *)(param_1 + (long)param_3),SUB81(aVStack_38,0));
    CowData<char32_t>::_unref((CowData<char32_t> *)aVStack_38);
  }
  else {
    uVar7 = 3;
LAB_0012023d:
    *(undefined4 *)param_6 = uVar7;
    *(undefined4 *)(param_6 + 8) = 2;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&, bool>::call(Object*, Variant const**, int, Callable::CallError&) const
    */

Object * MethodBindT<String_const&,bool>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long lVar1;
  char *pcVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var4;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var4 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var4 != (__UnexistingClass *)0x0) && (*(long *)(p_Var4 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var4 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var4 + 8) == 0) {
      plVar3 = *(long **)(p_Var4 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)p_Var4 + 0x40))(p_Var4);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(p_Var4 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC251,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      pcVar2 = local_48;
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
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00120346;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,String_const&,bool>
            (p_Var4,(_func_void_String_ptr_bool *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4
             ,in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00120346:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, bool>(__UnexistingClass*, void
   (__UnexistingClass::*)(bool), Variant const**, int, Callable::CallError&, Vector<Variant> const&)
    */

void call_with_variant_args_dv<__UnexistingClass,bool>
               (__UnexistingClass *param_1,_func_void_bool *param_2,Variant **param_3,int param_4,
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
    goto LAB_0012064d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_001206b0;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_001206b0:
      uVar6 = 4;
LAB_0012064d:
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
      goto LAB_001205cb;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_001205cb:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_bool **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,1);
  uVar4 = _LC260;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_bool(this);
                    /* WARNING: Could not recover jumptable at 0x00120627. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)(SUB81(param_1 + (long)param_3,0));
  return;
}



/* MethodBindT<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<bool>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long lVar1;
  char *pcVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var4;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var4 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var4 != (__UnexistingClass *)0x0) && (*(long *)(p_Var4 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var4 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var4 + 8) == 0) {
      plVar3 = *(long **)(p_Var4 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)p_Var4 + 0x40))(p_Var4);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(p_Var4 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC251,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      pcVar2 = local_48;
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
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00120716;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,bool>
            (p_Var4,(_func_void_bool *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,
             in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00120716:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, int>(__UnexistingClass*, void
   (__UnexistingClass::*)(int), Variant const**, int, Callable::CallError&, Vector<Variant> const&)
    */

void call_with_variant_args_dv<__UnexistingClass,int>
               (__UnexistingClass *param_1,_func_void_int *param_2,Variant **param_3,int param_4,
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
    goto LAB_00120a1d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_00120a80;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_00120a80:
      uVar6 = 4;
LAB_00120a1d:
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
      goto LAB_0012099b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0012099b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_int **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC255;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_int(this);
                    /* WARNING: Could not recover jumptable at 0x001209f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)((int)(param_1 + (long)param_3));
  return;
}



/* MethodBindT<int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<int>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long lVar1;
  char *pcVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var4;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var4 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var4 != (__UnexistingClass *)0x0) && (*(long *)(p_Var4 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var4 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var4 + 8) == 0) {
      plVar3 = *(long **)(p_Var4 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)p_Var4 + 0x40))(p_Var4);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(p_Var4 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC251,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      pcVar2 = local_48;
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
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00120ae6;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,int>
            (p_Var4,(_func_void_int *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,in_R9
            );
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00120ae6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, double>(__UnexistingClass*, void
   (__UnexistingClass::*)(double), Variant const**, int, Callable::CallError&, Vector<Variant>
   const&) */

void call_with_variant_args_dv<__UnexistingClass,double>
               (__UnexistingClass *param_1,_func_void_double *param_2,Variant **param_3,int param_4,
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
  double dVar9;
  long in_stack_00000008;
  
  uVar8 = (uint)param_5;
  if (1 < uVar8) {
    uVar6 = 3;
    goto LAB_00120ded;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_00120e50;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_00120e50:
      uVar6 = 4;
LAB_00120ded:
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
      goto LAB_00120d6b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_00120d6b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_double **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,3);
  uVar4 = _LC261;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  dVar9 = Variant::operator_cast_to_double(this);
                    /* WARNING: Could not recover jumptable at 0x00120dc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)(dVar9);
  return;
}



/* MethodBindT<double>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<double>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long lVar1;
  char *pcVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var4;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var4 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var4 != (__UnexistingClass *)0x0) && (*(long *)(p_Var4 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var4 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var4 + 8) == 0) {
      plVar3 = *(long **)(p_Var4 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)p_Var4 + 0x40))(p_Var4);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(p_Var4 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC251,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      pcVar2 = local_48;
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
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00120eb6;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,double>
            (p_Var4,(_func_void_double *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,
             in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00120eb6:
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
    goto LAB_001211bd;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_00121220;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_00121220:
      uVar6 = 4;
LAB_001211bd:
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
      goto LAB_0012113b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0012113b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_float **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,3);
  uVar4 = _LC261;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  fVar9 = Variant::operator_cast_to_float(this);
                    /* WARNING: Could not recover jumptable at 0x00121194. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)(fVar9);
  return;
}



/* MethodBindT<float>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<float>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long lVar1;
  char *pcVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var4;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var4 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var4 != (__UnexistingClass *)0x0) && (*(long *)(p_Var4 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var4 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var4 + 8) == 0) {
      plVar3 = *(long **)(p_Var4 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)p_Var4 + 0x40))(p_Var4);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(p_Var4 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC251,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      pcVar2 = local_48;
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
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00121286;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,float>
            (p_Var4,(_func_void_float *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,
             in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00121286:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info_helper<String const&>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<String_const&>
               (int param_1,int *param_2,PropertyInfo *param_3)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  long lVar6;
  int iVar7;
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
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar7 = *param_2;
  if (iVar7 != param_1) goto LAB_001214c7;
  local_78 = 0;
  local_68 = &_LC10;
  local_80 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._8_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,4);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_001215c0:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_001215c0;
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
  *(undefined4 *)param_3 = local_68._0_4_;
  if (*(long *)(param_3 + 8) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 8));
    uVar5 = local_60._0_8_;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = local_60._8_8_;
    local_60 = auVar3 << 0x40;
    *(undefined8 *)(param_3 + 8) = uVar5;
  }
  if (*(long *)(param_3 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar5 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(param_3 + 0x10) = uVar5;
  }
  lVar6 = local_48;
  *(int *)(param_3 + 0x18) = local_50;
  if (*(long *)(param_3 + 0x20) == local_48) {
    *(undefined4 *)(param_3 + 0x28) = local_40;
    if (local_48 != 0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
  }
  else {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 0x20));
    *(long *)(param_3 + 0x20) = local_48;
    *(undefined4 *)(param_3 + 0x28) = local_40;
  }
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  uVar5 = local_60._0_8_;
  if (local_60._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_60._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_60._8_8_;
      local_60 = auVar4 << 0x40;
      Memory::free_static((void *)(uVar5 + -0x10),false);
    }
  }
  iVar7 = *param_2;
LAB_001214c7:
  *param_2 = iVar7 + 1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindTRC<bool, String const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<bool,String_const&>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar7;
  long in_FS_OFFSET;
  long local_78;
  ulong local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar7 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<String_const&>(0,(int *)&local_70,(PropertyInfo *)&local_68);
    uVar5 = local_60._0_8_;
    uVar6 = local_60._8_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *puVar7 = local_68._0_4_;
    *(undefined8 *)(puVar7 + 2) = uVar5;
    *(undefined8 *)(puVar7 + 4) = uVar6;
    puVar7[6] = (undefined4)local_50;
    *(undefined8 *)(puVar7 + 8) = local_48;
    puVar7[10] = local_40;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
    goto LAB_001217d8;
  }
  local_70 = 0;
  local_68 = &_LC10;
  local_78 = 0;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = local_60._0_8_;
  local_60 = auVar3 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  *puVar7 = 1;
  puVar7[6] = 0;
  *(undefined8 *)(puVar7 + 8) = 0;
  *(undefined1 (*) [16])(puVar7 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar7[10] = 6;
LAB_001218e7:
    StringName::operator=((StringName *)(puVar7 + 4),(StringName *)&local_70);
    lVar4 = local_78;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar7 + 8),(CowData *)&local_78);
    puVar7[10] = 6;
    if (puVar7[6] != 0x11) goto LAB_001218e7;
    StringName::StringName((StringName *)&local_68,(String *)(puVar7 + 8),false);
    if (*(undefined **)(puVar7 + 4) == local_68) {
      lVar4 = local_78;
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
        lVar4 = local_78;
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar7 + 4) = local_68;
      lVar4 = local_78;
    }
  }
  local_78 = lVar4;
  if (lVar4 != 0) {
    LOCK();
    plVar1 = (long *)(lVar4 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_001217d8:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&, bool>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<String_const&,bool>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  long lVar6;
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar7;
  long in_FS_OFFSET;
  int local_8c;
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
  
  pPVar7 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)pPVar7 = 0;
  *(undefined4 *)(pPVar7 + 0x18) = 0;
  *(undefined8 *)(pPVar7 + 0x20) = 0;
  *(undefined4 *)(pPVar7 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar7 + 8) = (undefined1  [16])0x0;
  local_8c = 0;
  call_get_argument_type_info_helper<String_const&>(in_EDX,&local_8c,pPVar7);
  if (in_EDX != local_8c) goto LAB_001219a4;
  local_78 = 0;
  local_68 = &_LC10;
  local_80 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._8_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,1);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00121aa0:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00121aa0;
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
  *(undefined4 *)pPVar7 = local_68._0_4_;
  if (*(long *)(pPVar7 + 8) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(pPVar7 + 8));
    uVar5 = local_60._0_8_;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = local_60._8_8_;
    local_60 = auVar3 << 0x40;
    *(undefined8 *)(pPVar7 + 8) = uVar5;
  }
  if (*(long *)(pPVar7 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar5 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(pPVar7 + 0x10) = uVar5;
  }
  lVar6 = local_48;
  *(int *)(pPVar7 + 0x18) = local_50;
  if (*(long *)(pPVar7 + 0x20) == local_48) {
    *(undefined4 *)(pPVar7 + 0x28) = local_40;
    if (local_48 != 0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
  }
  else {
    CowData<char32_t>::_unref((CowData<char32_t> *)(pPVar7 + 0x20));
    *(long *)(pPVar7 + 0x20) = local_48;
    *(undefined4 *)(pPVar7 + 0x28) = local_40;
  }
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  uVar5 = local_60._0_8_;
  if (local_60._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_60._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_60._8_8_;
      local_60 = auVar4 << 0x40;
      Memory::free_static((void *)(uVar5 + -0x10),false);
    }
  }
LAB_001219a4:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pPVar7;
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodInfo::~MethodInfo() */

void __thiscall MethodInfo::~MethodInfo(MethodInfo *this)

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
/* MethodDefinition::~MethodDefinition() */

void __thiscall MethodDefinition::~MethodDefinition(MethodDefinition *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* PropertyInfo::PropertyInfo(Variant::Type, String const&, PropertyHint, String const&, unsigned
   int, StringName const&) */

void __thiscall PropertyInfo::PropertyInfo(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* PropertyInfo::~PropertyInfo() */

void __thiscall PropertyInfo::~PropertyInfo(PropertyInfo *this)

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
/* MethodBindTRC<float>::~MethodBindTRC() */

void __thiscall MethodBindTRC<float>::~MethodBindTRC(MethodBindTRC<float> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<bool>::~MethodBindTR() */

void __thiscall MethodBindTR<bool>::~MethodBindTR(MethodBindTR<bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Vector3, OpenXRInterface::Hand, OpenXRInterface::HandJoints>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Vector3,OpenXRInterface::Hand,OpenXRInterface::HandJoints>::~MethodBindTRC
          (MethodBindTRC<Vector3,OpenXRInterface::Hand,OpenXRInterface::HandJoints> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<float, OpenXRInterface::Hand, OpenXRInterface::HandJoints>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<float,OpenXRInterface::Hand,OpenXRInterface::HandJoints>::~MethodBindTRC
          (MethodBindTRC<float,OpenXRInterface::Hand,OpenXRInterface::HandJoints> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Quaternion, OpenXRInterface::Hand, OpenXRInterface::HandJoints>::~MethodBindTRC()
    */

void __thiscall
MethodBindTRC<Quaternion,OpenXRInterface::Hand,OpenXRInterface::HandJoints>::~MethodBindTRC
          (MethodBindTRC<Quaternion,OpenXRInterface::Hand,OpenXRInterface::HandJoints> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<BitField<OpenXRInterface::HandJointFlags>, OpenXRInterface::Hand,
   OpenXRInterface::HandJoints>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<BitField<OpenXRInterface::HandJointFlags>,OpenXRInterface::Hand,OpenXRInterface::HandJoints>
::~MethodBindTRC(MethodBindTRC<BitField<OpenXRInterface::HandJointFlags>,OpenXRInterface::Hand,OpenXRInterface::HandJoints>
                 *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<OpenXRInterface::HandTrackedSource, OpenXRInterface::Hand>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<OpenXRInterface::HandTrackedSource,OpenXRInterface::Hand>::~MethodBindTRC
          (MethodBindTRC<OpenXRInterface::HandTrackedSource,OpenXRInterface::Hand> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<OpenXRInterface::HandMotionRange, OpenXRInterface::Hand>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<OpenXRInterface::HandMotionRange,OpenXRInterface::Hand>::~MethodBindTRC
          (MethodBindTRC<OpenXRInterface::HandMotionRange,OpenXRInterface::Hand> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<OpenXRInterface::Hand, OpenXRInterface::HandMotionRange>::~MethodBindT() */

void __thiscall
MethodBindT<OpenXRInterface::Hand,OpenXRInterface::HandMotionRange>::~MethodBindT
          (MethodBindT<OpenXRInterface::Hand,OpenXRInterface::HandMotionRange> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Array>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Array>::~MethodBindTRC(MethodBindTRC<Array> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<String const&, bool>::~MethodBindT() */

void __thiscall MethodBindT<String_const&,bool>::~MethodBindT(MethodBindT<String_const&,bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<bool, String const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<bool,String_const&>::~MethodBindTRC(MethodBindTRC<bool,String_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<bool>::~MethodBindT() */

void __thiscall MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<int>::~MethodBindT() */

void __thiscall MethodBindT<int>::~MethodBindT(MethodBindT<int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<double>::~MethodBindT() */

void __thiscall MethodBindT<double>::~MethodBindT(MethodBindT<double> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<double>::~MethodBindTRC() */

void __thiscall MethodBindTRC<double>::~MethodBindTRC(MethodBindTRC<double> *this)

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



