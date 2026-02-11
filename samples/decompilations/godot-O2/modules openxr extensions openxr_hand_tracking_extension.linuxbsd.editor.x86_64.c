
/* OpenXRHandTrackingExtension::on_instance_destroyed() */

void __thiscall
OpenXRHandTrackingExtension::on_instance_destroyed(OpenXRHandTrackingExtension *this)

{
  *(undefined8 *)(this + 0xfc8) = 0;
  *(undefined1 (*) [16])(this + 0xfb8) = (undefined1  [16])0x0;
  return;
}



/* OpenXRHandTrackingExtension::set_system_properties_and_get_next_pointer(void*) */

OpenXRHandTrackingExtension * __thiscall
OpenXRHandTrackingExtension::set_system_properties_and_get_next_pointer
          (OpenXRHandTrackingExtension *this,void *param_1)

{
  OpenXRHandTrackingExtension *pOVar1;
  
  pOVar1 = (OpenXRHandTrackingExtension *)param_1;
  if (this[0xfb0] != (OpenXRHandTrackingExtension)0x0) {
    *(undefined4 *)(this + 8) = 0x3b9b9138;
    pOVar1 = this + 8;
    *(void **)(this + 0x10) = param_1;
    *(undefined4 *)(this + 0x18) = 0;
  }
  return pOVar1;
}



/* OpenXRHandTrackingExtension::on_state_ready() */

void __thiscall OpenXRHandTrackingExtension::on_state_ready(OpenXRHandTrackingExtension *this)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  if (*(int *)(this + 0x18) != 0) {
    this[0x20] = (OpenXRHandTrackingExtension)0x0;
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined4 *)(this + 0x7c0) = 0;
    *(undefined8 *)(this + 0x40) = 0;
    *(undefined8 *)(this + 0x788) = 0;
    puVar2 = (undefined8 *)((ulong)(this + 0x48) & 0xfffffffffffffff8);
    for (uVar1 = (ulong)(((int)this - (int)(undefined8 *)((ulong)(this + 0x48) & 0xfffffffffffffff8)
                         ) + 0x790U >> 3); uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    this[0x7e8] = (OpenXRHandTrackingExtension)0x0;
    *(undefined8 *)(this + 0x800) = 0;
    *(undefined4 *)(this + 0xf88) = 0;
    *(undefined8 *)(this + 0x808) = 0;
    *(undefined8 *)(this + 0xf50) = 0;
    puVar2 = (undefined8 *)((ulong)(this + 0x810) & 0xfffffffffffffff8);
    for (uVar1 = (ulong)(((int)this -
                         (int)(undefined8 *)((ulong)(this + 0x810) & 0xfffffffffffffff8)) + 0xf58U
                        >> 3); uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
  }
  return;
}



/* OpenXRHandTrackingExtension::on_instance_created(XrInstance_T*) */

void OpenXRHandTrackingExtension::on_instance_created(XrInstance_T *param_1)

{
  int iVar1;
  XrInstance_T XVar2;
  
  if (param_1[0xfb0] == (XrInstance_T)0x0) {
    return;
  }
  iVar1 = OpenXRAPI::get_instance_proc_addr
                    (OpenXRAPI::singleton,(_func_void *)"xrCreateHandTrackerEXT");
  if (iVar1 < 0) {
    _err_print_error("on_instance_created",
                     "modules/openxr/extensions/openxr_hand_tracking_extension.cpp",0x4b,
                     "Condition \"((get_instance_proc_addr_result) < 0)\" is true.",0,0);
    return;
  }
  iVar1 = OpenXRAPI::get_instance_proc_addr
                    (OpenXRAPI::singleton,(_func_void *)"xrDestroyHandTrackerEXT");
  if (iVar1 < 0) {
    _err_print_error("on_instance_created",
                     "modules/openxr/extensions/openxr_hand_tracking_extension.cpp",0x4c,
                     "Condition \"((get_instance_proc_addr_result) < 0)\" is true.",0,0);
    return;
  }
  iVar1 = OpenXRAPI::get_instance_proc_addr
                    (OpenXRAPI::singleton,(_func_void *)"xrLocateHandJointsEXT");
  if (-1 < iVar1) {
    XVar2 = (XrInstance_T)0x0;
    if ((*(long *)(param_1 + 0xfb8) != 0) &&
       (XVar2 = (XrInstance_T)0x0, *(long *)(param_1 + 0xfc0) != 0)) {
      XVar2 = (XrInstance_T)(*(long *)(param_1 + 0xfc8) != 0);
    }
    param_1[0xfb0] = XVar2;
    return;
  }
  _err_print_error("on_instance_created",
                   "modules/openxr/extensions/openxr_hand_tracking_extension.cpp",0x4d,
                   "Condition \"((get_instance_proc_addr_result) < 0)\" is true.",0,0);
  return;
}



/* OpenXRHandTrackingExtension::~OpenXRHandTrackingExtension() */

void __thiscall
OpenXRHandTrackingExtension::~OpenXRHandTrackingExtension(OpenXRHandTrackingExtension *this)

{
  Object *pOVar1;
  char cVar2;
  OpenXRHandTrackingExtension *pOVar3;
  
  pOVar3 = this + 0x7e8;
  *(undefined ***)this = &PTR_get_requested_extensions_00103628;
  singleton = 0;
  do {
    if (*(long *)(pOVar3 + 8) != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
        pOVar1 = *(Object **)(pOVar3 + 8);
        cVar2 = predelete_handler(pOVar1);
        if (cVar2 != '\0') {
          (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
          Memory::free_static(pOVar1,false);
        }
      }
    }
    pOVar3 = pOVar3 + -0x7c8;
  } while (pOVar3 != this + -0x7a8);
  return;
}



/* OpenXRHandTrackingExtension::~OpenXRHandTrackingExtension() */

void __thiscall
OpenXRHandTrackingExtension::~OpenXRHandTrackingExtension(OpenXRHandTrackingExtension *this)

{
  Object *pOVar1;
  char cVar2;
  OpenXRHandTrackingExtension *pOVar3;
  
  pOVar3 = this + 0x7e8;
  *(undefined ***)this = &PTR_get_requested_extensions_00103628;
  singleton = 0;
  do {
    if (*(long *)(pOVar3 + 8) != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
        pOVar1 = *(Object **)(pOVar3 + 8);
        cVar2 = predelete_handler(pOVar1);
        if (cVar2 != '\0') {
          (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
          Memory::free_static(pOVar1,false);
        }
      }
    }
    pOVar3 = pOVar3 + -0x7c8;
  } while (pOVar3 != this + -0x7a8);
  operator_delete(this,0xfd0);
  return;
}



/* OpenXRHandTrackingExtension::get_singleton() */

undefined8 OpenXRHandTrackingExtension::get_singleton(void)

{
  return singleton;
}



/* OpenXRHandTrackingExtension::OpenXRHandTrackingExtension() */

void __thiscall
OpenXRHandTrackingExtension::OpenXRHandTrackingExtension(OpenXRHandTrackingExtension *this)

{
  undefined8 uVar1;
  
  this[0x20] = (OpenXRHandTrackingExtension)0x0;
  *(undefined ***)this = &PTR_get_requested_extensions_00103628;
  uVar1 = _LC6;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = 0;
  this[0x7e8] = (OpenXRHandTrackingExtension)0x0;
  *(undefined8 *)(this + 0x7f0) = 0;
  *(undefined8 *)(this + 0x7f8) = uVar1;
  *(undefined8 *)(this + 0x800) = 0;
  *(undefined4 *)(this + 0xfb0) = 0;
  this[0xfb4] = (OpenXRHandTrackingExtension)0x0;
  *(undefined8 *)(this + 0xfc8) = 0;
  singleton = this;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined1 (*) [16])(this + 0xfb8) = (undefined1  [16])0x0;
  return;
}



/* OpenXRHandTrackingExtension::cleanup_hand_tracking() */

void __thiscall
OpenXRHandTrackingExtension::cleanup_hand_tracking(OpenXRHandTrackingExtension *this)

{
  long lVar1;
  char cVar2;
  long lVar3;
  Ref *pRVar4;
  Object *pOVar5;
  OpenXRHandTrackingExtension *pOVar6;
  long in_FS_OFFSET;
  Object *local_48;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = XRServer::get_singleton();
  if (lVar3 == 0) {
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("cleanup_hand_tracking",
                       "modules/openxr/extensions/openxr_hand_tracking_extension.cpp",0x157,
                       "Parameter \"xr_server\" is null.",0,0);
      return;
    }
  }
  else {
    pOVar6 = this + 0x20;
LAB_00100438:
    do {
      if (*(long *)(pOVar6 + 0x18) != 0) {
        if (*(code **)(this + 0xfc0) != (code *)0x0) {
          (**(code **)(this + 0xfc0))();
        }
        *pOVar6 = (OpenXRHandTrackingExtension)0x0;
        *(undefined8 *)(pOVar6 + 0x18) = 0;
        pRVar4 = (Ref *)XRServer::get_singleton();
        local_48 = (Object *)0x0;
        if (((*(long *)(pOVar6 + 8) != 0) &&
            (pOVar5 = (Object *)
                      __dynamic_cast(*(long *)(pOVar6 + 8),&Object::typeinfo,&XRTracker::typeinfo,0)
            , pOVar5 != (Object *)0x0)) &&
           (cVar2 = RefCounted::reference(), local_48 = pOVar5, cVar2 == '\0')) {
          local_48 = (Object *)0x0;
        }
        XRServer::remove_tracker(pRVar4);
        if (((local_48 != (Object *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) &&
           (cVar2 = predelete_handler(local_48), cVar2 != '\0')) {
          pOVar6 = pOVar6 + 0x7c8;
          (**(code **)(*(long *)local_48 + 0x140))(local_48);
          Memory::free_static(local_48,false);
          if (pOVar6 == this + 0xfb0) break;
          goto LAB_00100438;
        }
      }
      pOVar6 = pOVar6 + 0x7c8;
    } while (pOVar6 != this + 0xfb0);
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRHandTrackingExtension::on_state_stopping() */

void __thiscall OpenXRHandTrackingExtension::on_state_stopping(OpenXRHandTrackingExtension *this)

{
  cleanup_hand_tracking(this);
  return;
}



/* OpenXRHandTrackingExtension::get_active() */

undefined4 __thiscall OpenXRHandTrackingExtension::get_active(OpenXRHandTrackingExtension *this)

{
  return CONCAT31((int3)((uint)*(int *)(this + 0x18) >> 8),*(int *)(this + 0x18) != 0);
}



/* OpenXRHandTrackingExtension::get_hand_tracker(OpenXRHandTrackingExtension::HandTrackedHands)
   const */

OpenXRHandTrackingExtension * __thiscall
OpenXRHandTrackingExtension::get_hand_tracker(OpenXRHandTrackingExtension *this,uint param_2)

{
  if ((int)param_2 < 2) {
    return this + (long)(int)param_2 * 0x7c8 + 0x20;
  }
  _err_print_index_error
            ("get_hand_tracker","modules/openxr/extensions/openxr_hand_tracking_extension.cpp",0x16a
             ,(ulong)param_2,2,"p_hand","OPENXR_MAX_TRACKED_HANDS","",false,false);
  return (OpenXRHandTrackingExtension *)0x0;
}



/* OpenXRHandTrackingExtension::get_motion_range(OpenXRHandTrackingExtension::HandTrackedHands)
   const */

undefined4 __thiscall
OpenXRHandTrackingExtension::get_motion_range(OpenXRHandTrackingExtension *this,uint param_2)

{
  if ((int)param_2 < 2) {
    return *(undefined4 *)(this + (long)(int)param_2 * 0x7c8 + 0x30);
  }
  _err_print_index_error
            ("get_motion_range","modules/openxr/extensions/openxr_hand_tracking_extension.cpp",0x170
             ,(ulong)param_2,2,"p_hand","OPENXR_MAX_TRACKED_HANDS","",false,false);
  return 0x7fffffff;
}



/* OpenXRHandTrackingExtension::get_hand_tracking_source(OpenXRHandTrackingExtension::HandTrackedHands)
   const */

undefined4 __thiscall
OpenXRHandTrackingExtension::get_hand_tracking_source
          (OpenXRHandTrackingExtension *this,uint param_2)

{
  if (1 < (int)param_2) {
    _err_print_index_error
              ("get_hand_tracking_source",
               "modules/openxr/extensions/openxr_hand_tracking_extension.cpp",0x176,(ulong)param_2,2
               ,"p_hand","OPENXR_MAX_TRACKED_HANDS","",false,false);
    return 0;
  }
  if (this[0xfb2] != (OpenXRHandTrackingExtension)0x0) {
    if (*(int *)(this + (long)(int)param_2 * 0x7c8 + 0x7e0) == 0) {
      return 3;
    }
    if (*(int *)(this + (long)(int)param_2 * 0x7c8 + 0x7e4) == 1) {
      return 1;
    }
    if (*(int *)(this + (long)(int)param_2 * 0x7c8 + 0x7e4) == 2) {
      return 2;
    }
    if (get_hand_tracking_source(OpenXRHandTrackingExtension::HandTrackedHands)::first_print != '\0'
       ) {
      _err_print_error("get_hand_tracking_source",
                       "modules/openxr/extensions/openxr_hand_tracking_extension.cpp",0x181,
                       "Unknown active data source found!",0,1);
      get_hand_tracking_source(OpenXRHandTrackingExtension::HandTrackedHands)::first_print = 0;
      return 0;
    }
  }
  return 0;
}



/* OpenXRHandTrackingExtension::set_motion_range(OpenXRHandTrackingExtension::HandTrackedHands,
   XrHandJointsMotionRangeEXT) */

void __thiscall
OpenXRHandTrackingExtension::set_motion_range
          (OpenXRHandTrackingExtension *this,uint param_2,undefined4 param_3)

{
  if ((int)param_2 < 2) {
    *(undefined4 *)(this + (long)(int)param_2 * 0x7c8 + 0x30) = param_3;
    return;
  }
  _err_print_index_error
            ("set_motion_range","modules/openxr/extensions/openxr_hand_tracking_extension.cpp",0x18a
             ,(ulong)param_2,2,"p_hand","OPENXR_MAX_TRACKED_HANDS","",false,false);
  return;
}



/* OpenXRHandTrackingExtension::get_hand_joint_location_flags(OpenXRHandTrackingExtension::HandTrackedHands,
   XrHandJointEXT) const */

undefined8 __thiscall
OpenXRHandTrackingExtension::get_hand_joint_location_flags
          (OpenXRHandTrackingExtension *this,uint param_2,uint param_3)

{
  if ((int)param_2 < 2) {
    if (0x19 < (int)param_3) {
      _err_print_index_error
                ("get_hand_joint_location_flags",
                 "modules/openxr/extensions/openxr_hand_tracking_extension.cpp",400,(ulong)param_3,
                 0x1a,"p_joint","26","",false,false);
      return 0;
    }
    if (this[(long)(int)param_2 * 0x7c8 + 0x20] != (OpenXRHandTrackingExtension)0x0) {
      return *(undefined8 *)(this + (long)(int)param_2 * 0x7c8 + (long)(int)param_3 * 0x28 + 0x40);
    }
  }
  else {
    _err_print_index_error
              ("get_hand_joint_location_flags",
               "modules/openxr/extensions/openxr_hand_tracking_extension.cpp",399,(ulong)param_2,2,
               "p_hand","OPENXR_MAX_TRACKED_HANDS","",false,false);
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OpenXRHandTrackingExtension::get_hand_joint_rotation(OpenXRHandTrackingExtension::HandTrackedHands,
   XrHandJointEXT) const */

undefined8 *
OpenXRHandTrackingExtension::get_hand_joint_rotation
          (undefined8 *param_1,long param_2,uint param_3,uint param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  char *pcVar6;
  char *pcVar7;
  
  uVar2 = _UNK_00103918;
  if ((int)param_3 < 2) {
    if ((int)param_4 < 0x1a) {
      if (*(char *)(param_2 + 0x20 + (long)(int)param_3 * 0x7c8) != '\0') {
        puVar1 = (undefined8 *)
                 (param_2 + (long)(int)param_3 * 0x7c8 + 0x48 + (long)(int)param_4 * 0x28);
        uVar2 = puVar1[1];
        *param_1 = *puVar1;
        param_1[1] = uVar2;
        return param_1;
      }
      *param_1 = __LC22;
      param_1[1] = uVar2;
      return param_1;
    }
    uVar3 = (ulong)param_4;
    pcVar6 = "p_joint";
    lVar5 = 0x1a;
    iVar4 = 0x19c;
    pcVar7 = "26";
  }
  else {
    uVar3 = (ulong)param_3;
    pcVar6 = "p_hand";
    lVar5 = 2;
    iVar4 = 0x19b;
    pcVar7 = "OPENXR_MAX_TRACKED_HANDS";
  }
  _err_print_index_error
            ("get_hand_joint_rotation",
             "modules/openxr/extensions/openxr_hand_tracking_extension.cpp",iVar4,uVar3,lVar5,pcVar6
             ,pcVar7,"",false,false);
  uVar2 = _UNK_00103918;
  *param_1 = __LC22;
  param_1[1] = uVar2;
  return param_1;
}



/* OpenXRHandTrackingExtension::get_hand_joint_position(OpenXRHandTrackingExtension::HandTrackedHands,
   XrHandJointEXT) const */

undefined1  [16] __thiscall
OpenXRHandTrackingExtension::get_hand_joint_position
          (OpenXRHandTrackingExtension *this,uint param_2,uint param_3)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  char *pcVar5;
  long in_FS_OFFSET;
  undefined1 auVar6 [16];
  char *pcVar7;
  undefined8 local_20;
  undefined4 local_18;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if ((int)param_2 < 2) {
    if ((int)param_3 < 0x1a) {
      if (this[(long)(int)param_2 * 0x7c8 + 0x20] == (OpenXRHandTrackingExtension)0x0) {
        local_20 = 0;
        local_18 = 0;
      }
      else {
        lVar4 = (long)(int)param_2 * 0x7c8 + (long)(int)param_3 * 0x28;
        local_18 = *(undefined4 *)(this + lVar4 + 0x60);
        local_20 = *(undefined8 *)(this + lVar4 + 0x58);
      }
      goto LAB_001009e8;
    }
    uVar2 = (ulong)param_3;
    pcVar5 = "p_joint";
    lVar4 = 0x1a;
    iVar3 = 0x1a8;
    pcVar7 = "26";
  }
  else {
    uVar2 = (ulong)param_2;
    iVar3 = 0x1a7;
    pcVar5 = "p_hand";
    lVar4 = 2;
    pcVar7 = "OPENXR_MAX_TRACKED_HANDS";
  }
  _err_print_index_error
            ("get_hand_joint_position",
             "modules/openxr/extensions/openxr_hand_tracking_extension.cpp",iVar3,uVar2,lVar4,pcVar5
             ,pcVar7,"",false,false);
  local_18 = 0;
  local_20 = 0;
LAB_001009e8:
  auVar6._8_4_ = local_18;
  auVar6._0_8_ = local_20;
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar6._12_4_ = 0;
    return auVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRHandTrackingExtension::get_hand_joint_radius(OpenXRHandTrackingExtension::HandTrackedHands,
   XrHandJointEXT) const */

void __thiscall
OpenXRHandTrackingExtension::get_hand_joint_radius(undefined8 param_1,uint param_2,uint param_3)

{
  if ((int)param_2 < 2) {
    if (0x19 < (int)param_3) {
      _err_print_index_error
                ("get_hand_joint_radius",
                 "modules/openxr/extensions/openxr_hand_tracking_extension.cpp",0x1b4,(ulong)param_3
                 ,0x1a,"p_joint","26","",false,false);
    }
  }
  else {
    _err_print_index_error
              ("get_hand_joint_radius",
               "modules/openxr/extensions/openxr_hand_tracking_extension.cpp",0x1b3,(ulong)param_2,2
               ,"p_hand","OPENXR_MAX_TRACKED_HANDS","",false,false);
  }
  return;
}



/* OpenXRHandTrackingExtension::get_hand_joint_velocity_flags(OpenXRHandTrackingExtension::HandTrackedHands,
   XrHandJointEXT) const */

undefined8 __thiscall
OpenXRHandTrackingExtension::get_hand_joint_velocity_flags
          (OpenXRHandTrackingExtension *this,uint param_2,uint param_3)

{
  if ((int)param_2 < 2) {
    if (0x19 < (int)param_3) {
      _err_print_index_error
                ("get_hand_joint_velocity_flags",
                 "modules/openxr/extensions/openxr_hand_tracking_extension.cpp",0x1bf,(ulong)param_3
                 ,0x1a,"p_joint","26","",false,false);
      return 0;
    }
    if (this[(long)(int)param_2 * 0x7c8 + 0x20] != (OpenXRHandTrackingExtension)0x0) {
      return *(undefined8 *)(this + (long)(int)param_3 * 0x20 + (long)(int)param_2 * 0x7c8 + 0x450);
    }
  }
  else {
    _err_print_index_error
              ("get_hand_joint_velocity_flags",
               "modules/openxr/extensions/openxr_hand_tracking_extension.cpp",0x1be,(ulong)param_2,2
               ,"p_hand","OPENXR_MAX_TRACKED_HANDS","",false,false);
  }
  return 0;
}



/* OpenXRHandTrackingExtension::get_hand_joint_linear_velocity(OpenXRHandTrackingExtension::HandTrackedHands,
   XrHandJointEXT) const */

undefined1  [16] __thiscall
OpenXRHandTrackingExtension::get_hand_joint_linear_velocity
          (OpenXRHandTrackingExtension *this,uint param_2,uint param_3)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  char *pcVar5;
  long in_FS_OFFSET;
  undefined1 auVar6 [16];
  char *pcVar7;
  undefined8 local_20;
  undefined4 local_18;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if ((int)param_2 < 2) {
    if ((int)param_3 < 0x1a) {
      if (this[(long)(int)param_2 * 0x7c8 + 0x20] == (OpenXRHandTrackingExtension)0x0) {
        local_20 = 0;
        local_18 = 0;
      }
      else {
        lVar4 = (long)(int)param_3 * 0x20 + (long)(int)param_2 * 0x7c8;
        local_20 = *(undefined8 *)(this + lVar4 + 0x458);
        local_18 = *(undefined4 *)(this + lVar4 + 0x460);
      }
      goto LAB_00100cb1;
    }
    uVar2 = (ulong)param_3;
    pcVar5 = "p_joint";
    lVar4 = 0x1a;
    iVar3 = 0x1cb;
    pcVar7 = "26";
  }
  else {
    uVar2 = (ulong)param_2;
    iVar3 = 0x1ca;
    pcVar5 = "p_hand";
    lVar4 = 2;
    pcVar7 = "OPENXR_MAX_TRACKED_HANDS";
  }
  _err_print_index_error
            ("get_hand_joint_linear_velocity",
             "modules/openxr/extensions/openxr_hand_tracking_extension.cpp",iVar3,uVar2,lVar4,pcVar5
             ,pcVar7,"",false,false);
  local_18 = 0;
  local_20 = 0;
LAB_00100cb1:
  auVar6._8_4_ = local_18;
  auVar6._0_8_ = local_20;
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar6._12_4_ = 0;
    return auVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRHandTrackingExtension::get_hand_joint_angular_velocity(OpenXRHandTrackingExtension::HandTrackedHands,
   XrHandJointEXT) const */

undefined1  [16] __thiscall
OpenXRHandTrackingExtension::get_hand_joint_angular_velocity
          (OpenXRHandTrackingExtension *this,uint param_2,uint param_3)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  char *pcVar5;
  long in_FS_OFFSET;
  undefined1 auVar6 [16];
  char *pcVar7;
  undefined8 local_20;
  undefined4 local_18;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if ((int)param_2 < 2) {
    if ((int)param_3 < 0x1a) {
      if (this[(long)(int)param_2 * 0x7c8 + 0x20] == (OpenXRHandTrackingExtension)0x0) {
        local_20 = 0;
        local_18 = 0;
      }
      else {
        lVar4 = ((long)(int)param_3 + 0x22) * 0x20 + (long)(int)param_2 * 0x7c8;
        local_20 = *(undefined8 *)(this + lVar4 + 0x24);
        local_18 = *(undefined4 *)(this + lVar4 + 0x2c);
      }
      goto LAB_00100ddb;
    }
    uVar2 = (ulong)param_3;
    pcVar5 = "p_joint";
    lVar4 = 0x1a;
    iVar3 = 0x1d7;
    pcVar7 = "26";
  }
  else {
    uVar2 = (ulong)param_2;
    iVar3 = 0x1d6;
    pcVar5 = "p_hand";
    lVar4 = 2;
    pcVar7 = "OPENXR_MAX_TRACKED_HANDS";
  }
  _err_print_index_error
            ("get_hand_joint_angular_velocity",
             "modules/openxr/extensions/openxr_hand_tracking_extension.cpp",iVar3,uVar2,lVar4,pcVar5
             ,pcVar7,"",false,false);
  local_18 = 0;
  local_20 = 0;
LAB_00100ddb:
  auVar6._8_4_ = local_18;
  auVar6._0_8_ = local_20;
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar6._12_4_ = 0;
    return auVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRHandTrackingExtension::get_requested_extensions() */

void OpenXRHandTrackingExtension::get_requested_extensions(void)

{
  long lVar1;
  bool bVar2;
  long *plVar3;
  long in_RSI;
  HashMap<String,bool*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,bool*>>>
  *in_RDI;
  long in_FS_OFFSET;
  long local_70;
  char *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined1 (*) [16])(in_RDI + 8) = (undefined1  [16])0x0;
  *(undefined8 *)(in_RDI + 0x28) = 2;
  *(undefined1 (*) [16])(in_RDI + 0x18) = (undefined1  [16])0x0;
  ProjectSettings::get_singleton();
  StringName::StringName
            ((StringName *)&local_68,"xr/openxr/extensions/hand_tracking_unobstructed_data_source",
             false);
  ProjectSettings::get_setting_with_override((StringName *)local_58);
  bVar2 = Variant::operator_cast_to_bool((Variant *)local_58);
  *(bool *)(in_RSI + 0xfb3) = bVar2;
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
    StringName::unref();
  }
  ProjectSettings::get_singleton();
  StringName::StringName
            ((StringName *)&local_68,"xr/openxr/extensions/hand_tracking_controller_data_source",
             false);
  ProjectSettings::get_setting_with_override((StringName *)local_58);
  bVar2 = Variant::operator_cast_to_bool((Variant *)local_58);
  *(bool *)(in_RSI + 0xfb4) = bVar2;
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
    StringName::unref();
  }
  local_70 = 0;
  local_68 = "XR_EXT_hand_tracking";
  local_60 = 0x14;
  String::parse_latin1((StrRange *)&local_70);
  plVar3 = (long *)HashMap<String,bool*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,bool*>>>
                   ::operator[](in_RDI,(String *)&local_70);
  lVar1 = local_70;
  *plVar3 = in_RSI + 0xfb0;
  if (local_70 != 0) {
    LOCK();
    plVar3 = (long *)(local_70 + -0x10);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  local_70 = 0;
  local_68 = "XR_EXT_hand_joints_motion_range";
  local_60 = 0x1f;
  String::parse_latin1((StrRange *)&local_70);
  plVar3 = (long *)HashMap<String,bool*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,bool*>>>
                   ::operator[](in_RDI,(String *)&local_70);
  lVar1 = local_70;
  *plVar3 = in_RSI + 0xfb1;
  if (local_70 != 0) {
    LOCK();
    plVar3 = (long *)(local_70 + -0x10);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  if ((*(char *)(in_RSI + 0xfb3) != '\0') || (*(char *)(in_RSI + 0xfb4) != '\0')) {
    local_70 = 0;
    local_68 = "XR_EXT_hand_tracking_data_source";
    local_60 = 0x20;
    String::parse_latin1((StrRange *)&local_70);
    plVar3 = (long *)HashMap<String,bool*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,bool*>>>
                     ::operator[](in_RDI,(String *)&local_70);
    lVar1 = local_70;
    *plVar3 = in_RSI + 0xfb2;
    if (local_70 != 0) {
      LOCK();
      plVar3 = (long *)(local_70 + -0x10);
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
        local_70 = 0;
        Memory::free_static((void *)(lVar1 + -0x10),false);
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OpenXRHandTrackingExtension::on_process() [clone .part.0] */

void __thiscall OpenXRHandTrackingExtension::on_process(OpenXRHandTrackingExtension *this)

{
  long *plVar1;
  Object *pOVar2;
  undefined8 *puVar3;
  OpenXRHandTrackingExtension OVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  code *pcVar7;
  undefined1 auVar8 [16];
  char cVar9;
  int iVar10;
  undefined4 *puVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  OpenXRHandTrackingExtension *pOVar15;
  XRHandTracker *this_00;
  Ref *pRVar16;
  Object *pOVar17;
  uint uVar18;
  uint uVar19;
  ulong uVar20;
  StringName *pSVar21;
  char *pcVar22;
  OpenXRHandTrackingExtension *pOVar23;
  int iVar24;
  OpenXRHandTrackingExtension *pOVar25;
  OpenXRHandTrackingExtension *pOVar26;
  long in_FS_OFFSET;
  bool bVar27;
  long local_150;
  long local_148;
  Object *local_140;
  undefined4 local_138;
  undefined1 local_134 [16];
  undefined4 local_124;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 *puStack_110;
  uint uStack_108;
  undefined4 uStack_104;
  undefined1 *local_100;
  ulong local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  Quaternion local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined4 local_88;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined4 local_58;
  ulong local_54;
  undefined4 local_4c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar5 = *(undefined1 **)(OpenXRAPI::singleton + 0x118);
  if (puVar5 == (undefined1 *)0x0) {
LAB_00101418:
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  pSVar21 = *(StringName **)(this + 0x38);
  pOVar23 = this + 0x40;
  iVar24 = 0;
  if (pSVar21 == (StringName *)0x0) goto LAB_00101201;
LAB_001011d3:
  pOVar26 = pOVar23;
  if (pOVar23[-0x20] == (OpenXRHandTrackingExtension)0x0) goto joined_r0x001011eb;
  pSVar21 = *(StringName **)(pOVar23 + -0x18);
  if ((pSVar21 != (StringName *)0x0) && (cVar9 = RefCounted::reference(), cVar9 == '\0')) {
    pSVar21 = (StringName *)0x0;
  }
  local_134._0_12_ = SUB1612((undefined1  [16])0x0,0);
  local_134._12_4_ = *(undefined4 *)(pOVar23 + -0x10);
  puStack_110 = &local_138;
  if (this[0xfb1] == (OpenXRHandTrackingExtension)0x0) {
    puStack_110 = (undefined4 *)0x0;
  }
  local_124 = 0;
  local_118 = 0x3b9b913a;
  uStack_114 = 0;
  local_138 = 0x3b9c0280;
  uStack_108 = (uint)*(undefined8 *)(OpenXRAPI::singleton + 0x188);
  uStack_104 = (undefined4)((ulong)*(undefined8 *)(OpenXRAPI::singleton + 0x188) >> 0x20);
  bVar27 = SUB81(pSVar21,0);
  local_100 = puVar5;
  if (*(code **)(this + 0xfc8) == (code *)0x0) {
    iVar10 = -0xc;
LAB_00101cc0:
    OpenXRAPI::get_error_string(&local_140,OpenXRAPI::singleton,iVar10);
    Variant::Variant((Variant *)local_78,"OpenXR: Failed to get tracking for hand");
    print_line<int,char_const*,String,char_const*>
              ((Variant *)local_78,iVar24,&_LC47,&local_140,&_LC44);
    if (Variant::needs_deinit[(int)local_78._0_4_] != '\0') {
      Variant::_clear_internal();
    }
    pOVar17 = local_140;
    if (local_140 != (Object *)0x0) {
      LOCK();
      pOVar2 = local_140 + -0x10;
      *(long *)pOVar2 = *(long *)pOVar2 + -1;
      UNLOCK();
      if (*(long *)pOVar2 == 0) {
        local_140 = (Object *)0x0;
        Memory::free_static(pOVar17 + -0x10,false);
      }
    }
    XRHandTracker::set_hand_tracking_source(pSVar21,0);
    XRHandTracker::set_has_tracking_data(bVar27);
LAB_00101545:
    StringName::StringName((StringName *)&local_140,"default",false);
    XRPositionalTracker::invalidate_pose(pSVar21);
    if ((StringName::configured != '\0') && (local_140 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  else {
    iVar10 = (**(code **)(this + 0xfc8))(*(ulong *)(pOVar23 + -8),&local_118,pOVar23 + 0x770);
    if (iVar10 < 0) goto LAB_00101cc0;
    if (((*(int *)(pOVar23 + 0x780) == 0) || (*(float *)(pOVar23 + 0x18) < _LC49)) ||
       (__LC50 < *(float *)(pOVar23 + 0x18))) {
      *(undefined4 *)(pOVar23 + 0x780) = 0;
      XRHandTracker::set_hand_tracking_source
                (pSVar21,-(this[0xfb2] != (OpenXRHandTrackingExtension)0x0) & 3);
      XRHandTracker::set_has_tracking_data(bVar27);
      goto LAB_00101545;
    }
    iVar10 = 0;
    pOVar15 = pOVar23 + 0x418;
    local_d8 = __LC54;
    uStack_d0 = _UNK_00103938;
    pOVar25 = pOVar23;
    do {
      while( true ) {
        uVar13 = *(ulong *)pOVar25;
        uVar20 = 0;
        local_58 = 0x3f800000;
        local_54 = 0;
        local_4c = 0;
        local_f8 = 0;
        local_f0 = 0;
        local_e8 = 0;
        local_e0 = 0;
        local_78 = ZEXT416(_LC51);
        local_68 = ZEXT416(_LC51);
        uVar18 = (uint)uVar13 & 1;
        if ((uVar13 & 1) != 0) {
          if (((*(float *)(pOVar25 + 8) != 0.0) || (*(float *)(pOVar25 + 0xc) != 0.0)) ||
             ((*(float *)(pOVar25 + 0x10) != 0.0 || (*(float *)(pOVar25 + 0x14) != 0.0)))) {
            local_c8 = *(float *)(pOVar25 + 8);
            fStack_c4 = *(float *)(pOVar25 + 0xc);
            fStack_c0 = *(float *)(pOVar25 + 0x10);
            fStack_bc = *(float *)(pOVar25 + 0x14);
            Quaternion::operator*(local_b8,(Quaternion *)&local_c8);
            local_a8 = ZEXT416(_LC51);
            uVar20 = 1;
            local_88 = 0x3f800000;
            local_98 = local_a8;
            Basis::set_quaternion((Quaternion *)local_a8);
            local_58 = local_88;
            uVar13 = *(ulong *)pOVar25;
            local_78 = local_a8;
            local_68 = local_98;
            uVar18 = (uint)uVar13 & 1;
          }
        }
        uVar19 = (uint)uVar13;
        if ((uVar13 & 2) != 0) {
          local_54 = *(ulong *)(pOVar25 + 0x18);
          local_4c = *(undefined4 *)(pOVar25 + 0x20);
          uVar20 = uVar20 | 4;
        }
        if ((uVar13 & 4) != 0) {
          uVar20 = uVar20 | 2;
        }
        if ((uVar13 & 8) != 0) {
          uVar20 = uVar20 | 8;
        }
        if (uVar18 != 0) {
          local_f0 = *(undefined4 *)(pOVar15 + 8);
          local_f8 = *(ulong *)pOVar15;
          uVar20 = uVar20 | 0x10;
          XRHandTracker::set_hand_joint_linear_velocity(pSVar21,iVar10,&local_f8);
          uVar19 = (uint)*(ulong *)pOVar25;
        }
        if ((uVar19 & 2) != 0) {
          local_e0 = *(undefined4 *)(pOVar15 + 0x14);
          local_e8 = *(undefined8 *)(pOVar15 + 0xc);
          uVar20 = uVar20 | 0x20;
          XRHandTracker::set_hand_joint_angular_velocity(pSVar21,iVar10,&local_e8);
        }
        XRHandTracker::set_hand_joint_flags(pSVar21,iVar10,uVar20);
        XRHandTracker::set_hand_joint_transform(pSVar21,iVar10,local_78);
        XRHandTracker::set_hand_joint_radius(pSVar21);
        if (iVar10 != 0) break;
        if (((byte)*pOVar23 & 2) == 0) {
          XRHandTracker::set_hand_tracking_source
                    (pSVar21,-(this[0xfb2] != (OpenXRHandTrackingExtension)0x0) & 3);
          XRHandTracker::set_has_tracking_data(bVar27);
          StringName::StringName((StringName *)&local_140,"default",false);
          XRPositionalTracker::invalidate_pose(pSVar21);
        }
        else {
          if (this[0xfb2] == (OpenXRHandTrackingExtension)0x0) {
LAB_001018c0:
            iVar10 = 0;
          }
          else {
            iVar10 = 3;
            if (((*(int *)(pOVar23 + 0x7a0) != 0) &&
                (iVar10 = *(int *)(pOVar23 + 0x7a4), iVar10 != 1)) && (iVar10 != 2)) {
              if (on_process()::first_print != '\0') {
                _err_print_error("on_process",
                                 "modules/openxr/extensions/openxr_hand_tracking_extension.cpp",
                                 0x139,"Unknown active data source found!",0,1);
                on_process()::first_print = '\0';
              }
              goto LAB_001018c0;
            }
          }
          XRHandTracker::set_hand_tracking_source(pSVar21,iVar10);
          XRHandTracker::set_has_tracking_data(bVar27);
          StringName::StringName((StringName *)&local_140,"default",false);
          XRPositionalTracker::set_pose
                    (pSVar21,(StringName *)&local_140,local_78,&local_f8,&local_e8,2);
        }
        if ((StringName::configured != '\0') && (local_140 != (Object *)0x0)) {
          StringName::unref();
        }
        pOVar25 = pOVar25 + 0x28;
        pOVar15 = pOVar15 + 0x20;
        iVar10 = 1;
      }
      iVar10 = iVar10 + 1;
      pOVar25 = pOVar25 + 0x28;
      pOVar15 = pOVar15 + 0x20;
    } while (iVar10 != 0x1a);
  }
  cVar9 = RefCounted::unreference();
  if ((cVar9 != '\0') && (cVar9 = predelete_handler((Object *)pSVar21), cVar9 != '\0')) {
    (**(code **)(*(long *)pSVar21 + 0x140))(pSVar21);
    Memory::free_static(pSVar21,false);
  }
joined_r0x001011eb:
  do {
    if (iVar24 != 0) goto LAB_00101418;
    pOVar23 = pOVar26 + 0x7c8;
    pSVar21 = *(StringName **)(pOVar26 + 0x7c0);
    iVar24 = 1;
    if (pSVar21 != (StringName *)0x0) goto LAB_001011d3;
LAB_00101201:
    if (this[0xfb3] != (OpenXRHandTrackingExtension)0x0) {
      local_a8._0_4_ = 1;
    }
    uStack_108 = (uint)(this[0xfb3] != (OpenXRHandTrackingExtension)0x0);
    if (this[0xfb4] != (OpenXRHandTrackingExtension)0x0) {
      uVar13 = (ulong)uStack_108;
      uStack_108 = uStack_108 + 1;
      *(undefined4 *)(local_a8 + uVar13 * 4) = 2;
    }
    uStack_114 = 0;
    puStack_110 = (undefined4 *)0x0;
    local_100 = local_a8;
    puVar11 = &local_118;
    if (this[0xfb2] == (OpenXRHandTrackingExtension)0x0) {
      puVar11 = (undefined4 *)0x0;
    }
    uStack_104 = 0;
    local_124 = 0;
    local_118 = 0x3ba151e0;
    local_138 = 0x3b9b9139;
    auVar8._8_4_ = iVar24 + 1;
    auVar8._0_8_ = puVar11;
    auVar8._12_4_ = 0;
    local_134 = auVar8 << 0x20;
    if (*(code **)(this + 0xfb8) == (code *)0x0) {
      iVar10 = -0xc;
    }
    else {
      iVar10 = (**(code **)(this + 0xfb8))
                         (*(undefined8 *)(OpenXRAPI::singleton + 0xf8),&local_138,pOVar23 + -8);
      if (-1 < iVar10) break;
    }
    OpenXRAPI::get_error_string(&local_150,OpenXRAPI::singleton,iVar10);
    Variant::Variant((Variant *)local_78,"OpenXR: Failed to obtain hand tracking information [");
    local_148 = 0;
    plVar1 = (long *)(local_150 + -0x10);
    if (local_150 != 0) {
      do {
        lVar14 = *plVar1;
        if (lVar14 == 0) goto LAB_0010133b;
        LOCK();
        lVar12 = *plVar1;
        bVar27 = lVar14 == lVar12;
        if (bVar27) {
          *plVar1 = lVar14 + 1;
          lVar12 = lVar14;
        }
        UNLOCK();
      } while (!bVar27);
      if (lVar12 != -1) {
        local_148 = local_150;
      }
    }
LAB_0010133b:
    stringify_variants<String,char_const*>
              ((String *)&local_140,(Variant *)local_78,&local_148,&_LC44);
    __print_line((String *)&local_140);
    pOVar17 = local_140;
    if (local_140 != (Object *)0x0) {
      LOCK();
      pOVar2 = local_140 + -0x10;
      *(long *)pOVar2 = *(long *)pOVar2 + -1;
      UNLOCK();
      if (*(long *)pOVar2 == 0) {
        local_140 = (Object *)0x0;
        Memory::free_static(pOVar17 + -0x10,false);
      }
    }
    lVar14 = local_148;
    if (local_148 != 0) {
      LOCK();
      plVar1 = (long *)(local_148 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_148 = 0;
        Memory::free_static((void *)(lVar14 + -0x10),false);
      }
    }
    if (Variant::needs_deinit[(int)local_78._0_4_] != '\0') {
      Variant::_clear_internal();
    }
    lVar14 = local_150;
    if (local_150 != 0) {
      LOCK();
      plVar1 = (long *)(local_150 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_150 = 0;
        Memory::free_static((void *)(lVar14 + -0x10),false);
      }
    }
    pOVar23[-0x20] = (OpenXRHandTrackingExtension)0x0;
    pOVar26 = pOVar23;
  } while( true );
  *(ulong *)(pOVar23 + 0x758) = 0;
  pOVar26 = pOVar23 + 0x750;
  *(OpenXRHandTrackingExtension **)(pOVar23 + 0x768) = pOVar23 + 0x410;
  *(undefined4 *)(pOVar23 + 0x750) = 0x3b9b913c;
  OVar4 = this[0xfb2];
  *(undefined4 *)(pOVar23 + 0x760) = 0x1a;
  if (OVar4 != (OpenXRHandTrackingExtension)0x0) {
    *(undefined4 *)(pOVar23 + 0x790) = 0x3ba151e1;
    *(ulong *)(pOVar23 + 0x7a0) = 0;
    *(OpenXRHandTrackingExtension **)(pOVar23 + 0x798) = pOVar26;
    pOVar26 = pOVar23 + 0x790;
  }
  lVar14 = OpenXRAPI::get_registered_extension_wrappers();
  puVar6 = *(undefined8 **)(lVar14 + 8);
  if (puVar6 != (undefined8 *)0x0) {
    puVar3 = puVar6 + puVar6[-1];
    for (; puVar6 != puVar3; puVar6 = puVar6 + 1) {
      pcVar7 = *(code **)(*(long *)*puVar6 + 0x28);
      if ((pcVar7 != OpenXRExtensionWrapper::set_hand_joint_locations_and_get_next_pointer) &&
         (pOVar15 = (OpenXRHandTrackingExtension *)(*pcVar7)((long *)*puVar6,iVar24,pOVar26),
         pOVar15 != (OpenXRHandTrackingExtension *)0x0)) {
        pOVar26 = pOVar15;
      }
    }
  }
  uVar13 = _LC45;
  *(OpenXRHandTrackingExtension **)(pOVar23 + 0x778) = pOVar26;
  *(undefined4 *)(pOVar23 + 0x770) = 0x3b9b913b;
  *(ulong *)(pOVar23 + 0x780) = uVar13;
  *(OpenXRHandTrackingExtension **)(pOVar23 + 0x788) = pOVar23;
  this_00 = (XRHandTracker *)operator_new(0xb10,"");
  XRHandTracker::XRHandTracker(this_00);
  postinitialize_handler((Object *)this_00);
  cVar9 = RefCounted::init_ref();
  if (cVar9 == '\0') {
                    /* WARNING: Does not return */
    pcVar7 = (code *)invalidInstructionException();
    (*pcVar7)();
  }
  cVar9 = RefCounted::reference();
  if (cVar9 != '\0') {
    pSVar21 = (StringName *)this_00;
  }
  cVar9 = RefCounted::unreference();
  if ((cVar9 != '\0') && (cVar9 = predelete_handler((Object *)this_00), cVar9 != '\0')) {
    (**(code **)(*(long *)this_00 + 0x140))(this_00);
    Memory::free_static(this_00,false);
  }
  (**(code **)(*(long *)pSVar21 + 0x158))(pSVar21,iVar24 + 1);
  pcVar22 = "/user/hand_tracker/right";
  if (iVar24 == 0) {
    pcVar22 = "/user/hand_tracker/left";
  }
  StringName::StringName((StringName *)&local_140,pcVar22,false);
  XRTracker::set_tracker_name(pSVar21);
  if ((StringName::configured == '\0') || (local_140 == (Object *)0x0)) {
    pRVar16 = (Ref *)XRServer::get_singleton();
  }
  else {
    StringName::unref();
    pRVar16 = (Ref *)XRServer::get_singleton();
  }
  local_140 = (Object *)0x0;
  pOVar17 = (Object *)__dynamic_cast(pSVar21,&Object::typeinfo,&XRTracker::typeinfo,0);
  if ((pOVar17 != (Object *)0x0) &&
     (local_140 = pOVar17, cVar9 = RefCounted::reference(), cVar9 == '\0')) {
    local_140 = (Object *)0x0;
  }
  XRServer::add_tracker(pRVar16);
  if (((local_140 != (Object *)0x0) &&
      (cVar9 = RefCounted::unreference(), pOVar17 = local_140, cVar9 != '\0')) &&
     (cVar9 = predelete_handler(local_140), cVar9 != '\0')) {
    (**(code **)(*(long *)pOVar17 + 0x140))(pOVar17);
    Memory::free_static(pOVar17,false);
  }
  pOVar17 = *(Object **)(pOVar23 + -0x18);
  if (pOVar17 != (Object *)pSVar21) {
    *(StringName **)(pOVar23 + -0x18) = pSVar21;
    cVar9 = RefCounted::reference();
    if (cVar9 == '\0') {
      *(ulong *)(pOVar23 + -0x18) = 0;
    }
    if (((pOVar17 != (Object *)0x0) && (cVar9 = RefCounted::unreference(), cVar9 != '\0')) &&
       (cVar9 = predelete_handler(pOVar17), cVar9 != '\0')) {
      (**(code **)(*(long *)pOVar17 + 0x140))(pOVar17);
      Memory::free_static(pOVar17,false);
    }
  }
  pOVar23[-0x20] = (OpenXRHandTrackingExtension)0x1;
  cVar9 = RefCounted::unreference();
  if ((cVar9 != '\0') && (cVar9 = predelete_handler((Object *)pSVar21), cVar9 != '\0')) {
    (**(code **)(*(long *)pSVar21 + 0x140))(pSVar21);
    Memory::free_static(pSVar21,false);
  }
  goto LAB_001011d3;
}



/* OpenXRHandTrackingExtension::on_process() */

void __thiscall OpenXRHandTrackingExtension::on_process(OpenXRHandTrackingExtension *this)

{
  if (*(int *)(this + 0x18) != 0) {
    on_process(this);
    return;
  }
  return;
}



/* OpenXRExtensionWrapper::set_instance_create_info_and_get_next_pointer(void*) */

void * __thiscall
OpenXRExtensionWrapper::set_instance_create_info_and_get_next_pointer
          (OpenXRExtensionWrapper *this,void *param_1)

{
  return param_1;
}



/* OpenXRExtensionWrapper::set_session_create_and_get_next_pointer(void*) */

void * __thiscall
OpenXRExtensionWrapper::set_session_create_and_get_next_pointer
          (OpenXRExtensionWrapper *this,void *param_1)

{
  return param_1;
}



/* OpenXRExtensionWrapper::set_swapchain_create_info_and_get_next_pointer(void*) */

void * __thiscall
OpenXRExtensionWrapper::set_swapchain_create_info_and_get_next_pointer
          (OpenXRExtensionWrapper *this,void *param_1)

{
  return param_1;
}



/* OpenXRExtensionWrapper::set_hand_joint_locations_and_get_next_pointer(int, void*) */

void * __thiscall
OpenXRExtensionWrapper::set_hand_joint_locations_and_get_next_pointer
          (OpenXRExtensionWrapper *this,int param_1,void *param_2)

{
  return param_2;
}



/* OpenXRExtensionWrapper::set_projection_views_and_get_next_pointer(int, void*) */

void * __thiscall
OpenXRExtensionWrapper::set_projection_views_and_get_next_pointer
          (OpenXRExtensionWrapper *this,int param_1,void *param_2)

{
  return param_2;
}



/* OpenXRExtensionWrapper::get_suggested_tracker_names() */

OpenXRExtensionWrapper * __thiscall
OpenXRExtensionWrapper::get_suggested_tracker_names(OpenXRExtensionWrapper *this)

{
  *(undefined8 *)(this + 8) = 0;
  return this;
}



/* OpenXRExtensionWrapper::on_register_metadata() */

void OpenXRExtensionWrapper::on_register_metadata(void)

{
  return;
}



/* OpenXRExtensionWrapper::on_before_instance_created() */

void OpenXRExtensionWrapper::on_before_instance_created(void)

{
  return;
}



/* OpenXRExtensionWrapper::on_session_created(XrSession_T*) */

void OpenXRExtensionWrapper::on_session_created(XrSession_T *param_1)

{
  return;
}



/* OpenXRExtensionWrapper::on_pre_render() */

void OpenXRExtensionWrapper::on_pre_render(void)

{
  return;
}



/* OpenXRExtensionWrapper::on_main_swapchains_created() */

void OpenXRExtensionWrapper::on_main_swapchains_created(void)

{
  return;
}



/* OpenXRExtensionWrapper::on_pre_draw_viewport(RID) */

void OpenXRExtensionWrapper::on_pre_draw_viewport(void)

{
  return;
}



/* OpenXRExtensionWrapper::on_post_draw_viewport(RID) */

void OpenXRExtensionWrapper::on_post_draw_viewport(void)

{
  return;
}



/* OpenXRExtensionWrapper::on_state_idle() */

void OpenXRExtensionWrapper::on_state_idle(void)

{
  return;
}



/* OpenXRExtensionWrapper::on_state_synchronized() */

void OpenXRExtensionWrapper::on_state_synchronized(void)

{
  return;
}



/* OpenXRExtensionWrapper::on_state_visible() */

void OpenXRExtensionWrapper::on_state_visible(void)

{
  return;
}



/* OpenXRExtensionWrapper::on_state_focused() */

void OpenXRExtensionWrapper::on_state_focused(void)

{
  return;
}



/* OpenXRExtensionWrapper::on_state_loss_pending() */

void OpenXRExtensionWrapper::on_state_loss_pending(void)

{
  return;
}



/* OpenXRExtensionWrapper::on_state_exiting() */

void OpenXRExtensionWrapper::on_state_exiting(void)

{
  return;
}



/* OpenXRExtensionWrapper::set_viewport_composition_layer_and_get_next_pointer(XrCompositionLayerBaseHeader
   const*, Dictionary const&, void*) */

void OpenXRExtensionWrapper::set_viewport_composition_layer_and_get_next_pointer
               (XrCompositionLayerBaseHeader *param_1,Dictionary *param_2,void *param_3)

{
  return;
}



/* OpenXRExtensionWrapper::on_viewport_composition_layer_destroyed(XrCompositionLayerBaseHeader
   const*) */

void OpenXRExtensionWrapper::on_viewport_composition_layer_destroyed
               (XrCompositionLayerBaseHeader *param_1)

{
  return;
}



/* OpenXRExtensionWrapper::get_viewport_composition_layer_extension_properties(List<PropertyInfo,
   DefaultAllocator>*) */

void OpenXRExtensionWrapper::get_viewport_composition_layer_extension_properties(List *param_1)

{
  return;
}



/* OpenXRExtensionWrapper::set_android_surface_swapchain_create_info_and_get_next_pointer(Dictionary
   const&, void*) */

void * __thiscall
OpenXRExtensionWrapper::set_android_surface_swapchain_create_info_and_get_next_pointer
          (OpenXRExtensionWrapper *this,Dictionary *param_1,void *param_2)

{
  return param_2;
}



/* OpenXRExtensionWrapper::on_event_polled(XrEventDataBuffer const&) */

undefined8 OpenXRExtensionWrapper::on_event_polled(XrEventDataBuffer *param_1)

{
  return 0;
}



/* OpenXRExtensionWrapper::get_viewport_composition_layer_extension_property_defaults() */

OpenXRExtensionWrapper * __thiscall
OpenXRExtensionWrapper::get_viewport_composition_layer_extension_property_defaults
          (OpenXRExtensionWrapper *this)

{
  Dictionary::Dictionary((Dictionary *)this);
  return this;
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
/* HashMap<String, bool*, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, bool*> > >::operator[](String const&) */

undefined1 * __thiscall
HashMap<String,bool*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,bool*>>>
::operator[](HashMap<String,bool*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,bool*>>>
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
  long local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar55 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  if (*(long *)(this + 8) == 0) {
LAB_00102c08:
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
        goto LAB_00102a9a;
      }
      memset(pvVar2,0,uVar44);
      memset(pvVar43,0,uVar48);
      iVar45 = *(int *)(this + 0x2c);
LAB_00102a9e:
      if (iVar45 != 0) {
LAB_00102aa6:
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
                goto LAB_0010294b;
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
      goto LAB_00102584;
    }
    iVar45 = *(int *)(this + 0x2c);
    if (pvVar43 == (void *)0x0) goto LAB_00102584;
    if (iVar45 != 0) goto LAB_00102aa6;
LAB_001025aa:
    uVar55 = *(uint *)(this + 0x28);
    if (uVar55 == 0x1c) {
      pauVar41 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_0010294b;
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
              goto LAB_0010294b;
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
      if (*(long *)(this + 8) == 0) goto LAB_00102c08;
LAB_00102a9a:
      iVar45 = *(int *)(this + 0x2c);
      goto LAB_00102a9e;
    }
LAB_00102584:
    if ((float)uVar39 * __LC29 < (float)(iVar45 + 1)) goto LAB_001025aa;
  }
  local_58[0] = 0;
  if (*(long *)param_1 == 0) {
    pauVar41 = (undefined1 (*) [16])operator_new(0x20,"");
    *(undefined8 *)pauVar41[1] = 0;
    *pauVar41 = (undefined1  [16])0x0;
LAB_00102bdb:
    *(undefined8 *)(pauVar41[1] + 8) = 0;
LAB_00102833:
    puVar42 = *(undefined8 **)(this + 0x20);
    if (puVar42 != (undefined8 *)0x0) goto LAB_00102840;
LAB_00102a75:
    *(undefined1 (**) [16])(this + 0x18) = pauVar41;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)local_58,(CowData *)param_1);
    lVar3 = local_58[0];
    local_58[1] = 0;
    pauVar41 = (undefined1 (*) [16])operator_new(0x20,"");
    *(undefined8 *)pauVar41[1] = 0;
    *(undefined8 *)*pauVar41 = 0;
    *(undefined8 *)(*pauVar41 + 8) = 0;
    if (lVar3 == 0) goto LAB_00102bdb;
    CowData<char32_t>::_ref((CowData<char32_t> *)(pauVar41 + 1),(CowData *)local_58);
    *(undefined8 *)(pauVar41[1] + 8) = 0;
    LOCK();
    plVar1 = (long *)(lVar3 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 != 0) goto LAB_00102833;
    Memory::free_static((void *)(local_58[0] + -0x10),false);
    puVar42 = *(undefined8 **)(this + 0x20);
    if (puVar42 == (undefined8 *)0x0) goto LAB_00102a75;
LAB_00102840:
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
LAB_0010294b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pauVar41[1] + 8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
  local_68 = &_LC40;
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



/* String stringify_variants<String, char const*>(Variant const&, String, char const*) */

String * stringify_variants<String,char_const*>(String *param_1,undefined8 param_2,String *param_3)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  long in_FS_OFFSET;
  long local_80;
  long local_78;
  long local_70;
  undefined *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_58,param_3);
  stringify_variants<char_const*>((Variant *)&local_70,(char *)local_58);
  local_78 = 0;
  local_68 = &_LC40;
  local_60 = 1;
  String::parse_latin1((StrRange *)&local_78);
  Variant::operator_cast_to_String((Variant *)&local_80);
  String::operator+((String *)&local_68,(String *)&local_80);
  String::operator+(param_1,(String *)&local_68);
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



/* void print_line<int, char const*, String, char const*>(Variant const&, int, char const*, String,
   char const*) */

void print_line<int,char_const*,String,char_const*>
               (undefined8 param_1,int param_2,char *param_3,long *param_4,undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long in_FS_OFFSET;
  bool bVar6;
  long local_c8;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  undefined *local_88;
  undefined8 local_80;
  int local_78 [8];
  int local_58 [6];
  long local_40;
  
  lVar4 = *param_4;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar4 == 0) {
LAB_001034f8:
    Variant::Variant((Variant *)local_78,param_2);
    local_98 = 0;
    local_c8 = 0;
  }
  else {
    plVar5 = (long *)(lVar4 + -0x10);
    do {
      lVar4 = *plVar5;
      if (lVar4 == 0) goto LAB_00103550;
      LOCK();
      lVar2 = *plVar5;
      bVar6 = lVar4 == lVar2;
      if (bVar6) {
        *plVar5 = lVar4 + 1;
        lVar2 = lVar4;
      }
      UNLOCK();
    } while (!bVar6);
    if ((lVar2 == -1) || (lVar4 = *param_4, lVar4 == 0)) {
LAB_00103550:
      lVar4 = 0;
      Variant::Variant((Variant *)local_78,param_2);
      local_98 = 0;
      local_c8 = 0;
    }
    else {
      plVar5 = (long *)(lVar4 + -0x10);
      do {
        lVar2 = *plVar5;
        if (lVar2 == 0) goto LAB_001034f8;
        LOCK();
        lVar3 = *plVar5;
        bVar6 = lVar2 == lVar3;
        if (bVar6) {
          *plVar5 = lVar2 + 1;
          lVar3 = lVar2;
        }
        UNLOCK();
      } while (!bVar6);
      if (lVar3 == -1) goto LAB_001034f8;
      Variant::Variant((Variant *)local_78,param_2);
      local_98 = 0;
      do {
        lVar2 = *plVar5;
        local_c8 = lVar4;
        if (lVar2 == 0) goto LAB_001031b9;
        LOCK();
        lVar3 = *plVar5;
        bVar6 = lVar2 == lVar3;
        if (bVar6) {
          *plVar5 = lVar2 + 1;
          lVar3 = lVar2;
        }
        UNLOCK();
      } while (!bVar6);
      if (lVar3 != -1) {
        local_98 = lVar4;
      }
    }
  }
LAB_001031b9:
  Variant::Variant((Variant *)local_58,param_3);
  stringify_variants<String,char_const*>
            ((StrRange *)&local_90,(Variant *)local_58,(Variant *)&local_98,param_5);
  local_a0 = 0;
  local_88 = &_LC40;
  local_80 = 1;
  String::parse_latin1((StrRange *)&local_a0);
  Variant::operator_cast_to_String((Variant *)&local_a8);
  String::operator+((String *)&local_88,(String *)&local_a8);
  String::operator+((String *)&local_b0,(String *)&local_88);
  puVar1 = local_88;
  if (local_88 != (undefined *)0x0) {
    LOCK();
    plVar5 = (long *)(local_88 + -0x10);
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      local_88 = (undefined *)0x0;
      Memory::free_static(puVar1 + -0x10,false);
    }
  }
  lVar2 = local_a8;
  if (local_a8 != 0) {
    LOCK();
    plVar5 = (long *)(local_a8 + -0x10);
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      local_a8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_a0;
  if (local_a0 != 0) {
    LOCK();
    plVar5 = (long *)(local_a0 + -0x10);
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      local_a0 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar5 = (long *)(local_90 + -0x10);
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  lVar2 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar5 = (long *)(local_98 + -0x10);
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  local_88 = &_LC40;
  local_90 = 0;
  local_80 = 1;
  String::parse_latin1((StrRange *)&local_90);
  Variant::operator_cast_to_String((Variant *)&local_98);
  String::operator+((String *)&local_88,(String *)&local_98);
  String::operator+((String *)&local_a0,(String *)&local_88);
  puVar1 = local_88;
  if (local_88 != (undefined *)0x0) {
    LOCK();
    plVar5 = (long *)(local_88 + -0x10);
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      local_88 = (undefined *)0x0;
      Memory::free_static(puVar1 + -0x10,false);
    }
  }
  lVar2 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar5 = (long *)(local_98 + -0x10);
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar5 = (long *)(local_90 + -0x10);
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_b0;
  if (local_b0 != 0) {
    LOCK();
    plVar5 = (long *)(local_b0 + -0x10);
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      local_b0 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_c8 != 0) {
    plVar5 = (long *)(local_c8 + -0x10);
    LOCK();
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      Memory::free_static(plVar5,false);
    }
  }
  __print_line((String *)&local_a0);
  lVar2 = local_a0;
  if (local_a0 != 0) {
    LOCK();
    plVar5 = (long *)(local_a0 + -0x10);
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      local_a0 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (lVar4 != 0) {
    plVar5 = (long *)(lVar4 + -0x10);
    LOCK();
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static(plVar5,false);
        return;
      }
      goto LAB_0010359f;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010359f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRHandTrackingExtension::on_process() [clone .part.0] [clone .cold] */

void OpenXRHandTrackingExtension::on_process(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


