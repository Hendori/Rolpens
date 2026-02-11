
/* NavigationRegion3D::get_rid() const */

undefined8 __thiscall NavigationRegion3D::get_rid(NavigationRegion3D *this)

{
  return *(undefined8 *)(this + 0x530);
}



/* NavigationRegion3D::is_enabled() const */

NavigationRegion3D __thiscall NavigationRegion3D::is_enabled(NavigationRegion3D *this)

{
  return this[0x528];
}



/* NavigationRegion3D::get_use_edge_connections() const */

NavigationRegion3D __thiscall NavigationRegion3D::get_use_edge_connections(NavigationRegion3D *this)

{
  return this[0x529];
}



/* NavigationRegion3D::get_navigation_layers() const */

undefined4 __thiscall NavigationRegion3D::get_navigation_layers(NavigationRegion3D *this)

{
  return *(undefined4 *)(this + 0x540);
}



/* NavigationRegion3D::get_enter_cost() const */

undefined4 __thiscall NavigationRegion3D::get_enter_cost(NavigationRegion3D *this)

{
  return *(undefined4 *)(this + 0x544);
}



/* NavigationRegion3D::get_travel_cost() const */

undefined4 __thiscall NavigationRegion3D::get_travel_cost(NavigationRegion3D *this)

{
  return *(undefined4 *)(this + 0x548);
}



/* NavigationRegion3D::get_region_rid() const */

undefined8 __thiscall NavigationRegion3D::get_region_rid(NavigationRegion3D *this)

{
  return *(undefined8 *)(this + 0x530);
}



/* NavigationRegion3D::set_navigation_map(RID) */

void __thiscall NavigationRegion3D::set_navigation_map(NavigationRegion3D *this,long param_2)

{
  long *plVar1;
  
  if (*(long *)(this + 0x538) != param_2) {
    *(long *)(this + 0x538) = param_2;
    plVar1 = (long *)NavigationServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x001000a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x2b0))
              (plVar1,*(undefined8 *)(this + 0x530),*(undefined8 *)(this + 0x538));
    return;
  }
  return;
}



/* NavigationRegion3D::get_navigation_layer_value(int) const */

undefined4 __thiscall
NavigationRegion3D::get_navigation_layer_value(NavigationRegion3D *this,int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  if (param_1 < 1) {
    _err_print_error("get_navigation_layer_value","scene/3d/navigation_region_3d.cpp",0x7c,
                     "Condition \"p_layer_number < 1\" is true. Returning: false",
                     "Navigation layer number must be between 1 and 32 inclusive.",0,0);
    uVar2 = 0;
  }
  else if (param_1 < 0x21) {
    uVar1 = 1 << ((char)param_1 - 1U & 0x1f) & *(uint *)(this + 0x540);
    uVar2 = CONCAT31((int3)(uVar1 >> 8),uVar1 != 0);
  }
  else {
    _err_print_error("get_navigation_layer_value","scene/3d/navigation_region_3d.cpp",0x7d,
                     "Condition \"p_layer_number > 32\" is true. Returning: false",
                     "Navigation layer number must be between 1 and 32 inclusive.",0,0);
    uVar2 = 0;
  }
  return uVar2;
}



/* NavigationRegion3D::set_enter_cost(float) */

undefined1  [16] NavigationRegion3D::set_enter_cost(float param_1)

{
  float fVar1;
  ulong in_RAX;
  long *plVar2;
  undefined8 in_RDX;
  long in_RDI;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  ulong uStack_10;
  
  if (param_1 < 0.0) {
    _err_print_error("set_enter_cost","scene/3d/navigation_region_3d.cpp",0x83,
                     "Condition \"p_enter_cost < 0.0\" is true.","The enter_cost must be positive.",
                     0);
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uStack_10;
    return auVar5 << 0x40;
  }
  fVar1 = *(float *)(in_RDI + 0x544);
  if (fVar1 != param_1) {
    in_RAX = (ulong)(uint)ABS(fVar1 - param_1);
    fVar3 = _LC5;
    if (_LC5 <= ABS(fVar1) * _LC5) {
      fVar3 = ABS(fVar1) * _LC5;
    }
    if (fVar3 <= ABS(fVar1 - param_1)) {
      *(float *)(in_RDI + 0x544) = param_1;
      plVar2 = (long *)NavigationServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x001001e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      auVar5 = (**(code **)(*plVar2 + 0x278))
                         (*(undefined4 *)(in_RDI + 0x544),plVar2,*(undefined8 *)(in_RDI + 0x530));
      return auVar5;
    }
  }
  auVar4._8_8_ = in_RDX;
  auVar4._0_8_ = in_RAX;
  return auVar4;
}



/* NavigationRegion3D::set_travel_cost(float) */

undefined1  [16] NavigationRegion3D::set_travel_cost(float param_1)

{
  float fVar1;
  ulong in_RAX;
  long *plVar2;
  undefined8 in_RDX;
  long in_RDI;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  ulong uStack_10;
  
  if (param_1 < 0.0) {
    _err_print_error("set_travel_cost","scene/3d/navigation_region_3d.cpp",0x92,
                     "Condition \"p_travel_cost < 0.0\" is true.",
                     "The travel_cost must be positive.",0);
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uStack_10;
    return auVar5 << 0x40;
  }
  fVar1 = *(float *)(in_RDI + 0x548);
  if (fVar1 != param_1) {
    in_RAX = (ulong)(uint)ABS(fVar1 - param_1);
    fVar3 = _LC5;
    if (_LC5 <= ABS(fVar1) * _LC5) {
      fVar3 = ABS(fVar1) * _LC5;
    }
    if (fVar3 <= ABS(fVar1 - param_1)) {
      *(float *)(in_RDI + 0x548) = param_1;
      plVar2 = (long *)NavigationServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x001002a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      auVar5 = (**(code **)(*plVar2 + 0x288))
                         (*(undefined4 *)(in_RDI + 0x548),plVar2,*(undefined8 *)(in_RDI + 0x530));
      return auVar5;
    }
  }
  auVar4._8_8_ = in_RDX;
  auVar4._0_8_ = in_RAX;
  return auVar4;
}



/* NavigationRegion3D::set_use_edge_connections(bool) */

void __thiscall NavigationRegion3D::set_use_edge_connections(NavigationRegion3D *this,bool param_1)

{
  long *plVar1;
  
  if (this[0x529] != (NavigationRegion3D)param_1) {
    this[0x529] = (NavigationRegion3D)param_1;
    plVar1 = (long *)NavigationServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x00100319. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x268))(plVar1,*(undefined8 *)(this + 0x530),this[0x529]);
    return;
  }
  return;
}



/* NavigationRegion3D::set_navigation_layer_value(int, bool) */

ulong __thiscall
NavigationRegion3D::set_navigation_layer_value(NavigationRegion3D *this,int param_1,bool param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  
  if (param_1 < 1) {
    uVar4 = _err_print_error("set_navigation_layer_value","scene/3d/navigation_region_3d.cpp",0x6d,
                             "Condition \"p_layer_number < 1\" is true.",
                             "Navigation layer number must be between 1 and 32 inclusive.",0,0);
  }
  else {
    if (0x20 < param_1) {
      uVar4 = 0;
      _err_print_error("set_navigation_layer_value","scene/3d/navigation_region_3d.cpp",0x6e,
                       "Condition \"p_layer_number > 32\" is true.",
                       "Navigation layer number must be between 1 and 32 inclusive.",0);
      return uVar4;
    }
    uVar1 = *(uint *)(this + 0x540);
    uVar3 = 1 << ((char)param_1 - 1U & 0x1f);
    uVar2 = ~uVar3 & uVar1;
    if (param_2) {
      uVar2 = uVar3 | uVar1;
    }
    uVar4 = (ulong)uVar2;
    if (uVar2 != uVar1) {
      *(uint *)(this + 0x540) = uVar2;
      plVar5 = (long *)NavigationServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x0010038c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)(*plVar5 + 0x2c0))
                        (plVar5,*(undefined8 *)(this + 0x530),*(undefined4 *)(this + 0x540));
      return uVar4;
    }
  }
  return uVar4;
}



/* NavigationRegion3D::_region_update_transform() [clone .part.0] */

void __thiscall NavigationRegion3D::_region_update_transform(NavigationRegion3D *this)

{
  char cVar1;
  long *plVar2;
  long in_FS_OFFSET;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  Node3D::get_global_transform();
  cVar1 = Transform3D::operator!=((Transform3D *)(this + 0x558),(Transform3D *)&local_58);
  if (cVar1 != '\0') {
    *(undefined8 *)(this + 0x558) = local_58;
    *(undefined8 *)(this + 0x560) = uStack_50;
    *(undefined8 *)(this + 0x568) = local_48;
    *(undefined8 *)(this + 0x570) = uStack_40;
    *(undefined8 *)(this + 0x578) = local_38;
    *(undefined8 *)(this + 0x580) = uStack_30;
    plVar2 = (long *)NavigationServer3D::get_singleton();
    (**(code **)(*plVar2 + 0x2d0))(plVar2,*(undefined8 *)(this + 0x530));
    if (*(long *)(this + 0x5a0) != 0) {
      plVar2 = (long *)RenderingServer::get_singleton();
      (**(code **)(*plVar2 + 0xd40))
                (plVar2,*(undefined8 *)(this + 0x5a0),(Transform3D *)(this + 0x558));
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Callable Callable::bind<Ref<NavigationMesh> >(Ref<NavigationMesh>) const [clone .isra.0] */

Variant ** Callable::bind<Ref<NavigationMesh>>(Variant **param_1,int param_2,Object *param_3)

{
  char cVar1;
  long in_FS_OFFSET;
  int local_58 [6];
  undefined8 local_40;
  undefined1 local_38 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_58,param_3);
  local_40 = 0;
  local_38 = (undefined1  [16])0x0;
  Callable::bindp(param_1,param_2);
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
  return param_1;
}



/* NavigationRegion3D::set_navigation_layers(unsigned int) */

void __thiscall NavigationRegion3D::set_navigation_layers(NavigationRegion3D *this,uint param_1)

{
  long *plVar1;
  
  if (*(uint *)(this + 0x540) != param_1) {
    *(uint *)(this + 0x540) = param_1;
    plVar1 = (long *)NavigationServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x001005f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x2c0))
              (plVar1,*(undefined8 *)(this + 0x530),*(undefined4 *)(this + 0x540));
    return;
  }
  return;
}



/* void Ref<Material>::TEMPNAMEPLACEHOLDERVALUE(Ref<StandardMaterial3D> const&) [clone .isra.0] */

void __thiscall Ref<Material>::operator=(Ref<Material> *this,Ref *param_1)

{
  Object *pOVar1;
  char cVar2;
  Object *pOVar3;
  
  pOVar1 = *(Object **)this;
  if (param_1 == (Ref *)0x0) {
    if (pOVar1 == (Object *)0x0) {
      return;
    }
    *(undefined8 *)this = 0;
  }
  else {
    pOVar3 = (Object *)__dynamic_cast(param_1,&Object::typeinfo,&Material::typeinfo,0);
    if (pOVar3 == pOVar1) {
      return;
    }
    *(Object **)this = pOVar3;
    if ((pOVar3 != (Object *)0x0) && (cVar2 = RefCounted::reference(), cVar2 == '\0')) {
      *(undefined8 *)this = 0;
    }
    if (pOVar1 == (Object *)0x0) {
      return;
    }
  }
  cVar2 = RefCounted::unreference();
  if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar1), cVar2 != '\0')) {
    (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
    Memory::free_static(pOVar1,false);
    return;
  }
  return;
}



/* NavigationRegion3D::get_navigation_map() const */

undefined8 __thiscall NavigationRegion3D::get_navigation_map(NavigationRegion3D *this)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  Object *local_28;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x538) == 0) {
    uVar3 = 0;
    if (((byte)this[0x2fa] & 0x40) != 0) {
      Node3D::get_world_3d();
      uVar3 = World3D::get_navigation_map();
      if (((local_28 != (Object *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) &&
         (cVar2 = predelete_handler(local_28), cVar2 != '\0')) {
        (**(code **)(*(long *)local_28 + 0x140))(local_28);
        Memory::free_static(local_28,false);
      }
    }
  }
  else {
    uVar3 = *(undefined8 *)(this + 0x538);
  }
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



/* NavigationRegion3D::get_navigation_mesh() const */

void NavigationRegion3D::get_navigation_mesh(void)

{
  char cVar1;
  long in_RSI;
  long *in_RDI;
  
  *in_RDI = 0;
  if (*(long *)(in_RSI + 0x550) != 0) {
    *in_RDI = *(long *)(in_RSI + 0x550);
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *in_RDI = 0;
    }
  }
  return;
}



/* NavigationRegion3D::set_enabled(bool) */

void __thiscall NavigationRegion3D::set_enabled(NavigationRegion3D *this,bool param_1)

{
  long lVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  Object *local_28;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (this[0x528] == (NavigationRegion3D)param_1) {
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    this[0x528] = (NavigationRegion3D)param_1;
    plVar5 = (long *)NavigationServer3D::get_singleton();
    (**(code **)(*plVar5 + 600))(plVar5,*(undefined8 *)(this + 0x530),this[0x528]);
    if (*(long *)(this + 0x5a0) != 0) {
      plVar5 = *(long **)(this + 0x5b0);
      if (this[0x528] == (NavigationRegion3D)0x0) {
        if (plVar5 != (long *)0x0) {
          iVar4 = (**(code **)(*plVar5 + 0x1c8))();
          if (0 < iVar4) {
            plVar5 = (long *)RenderingServer::get_singleton();
            pcVar2 = *(code **)(*plVar5 + 0xd68);
            NavigationServer3D::get_singleton();
            NavigationServer3D::get_debug_navigation_geometry_face_disabled_material();
            uVar6 = (**(code **)(*(long *)local_28 + 0x1c0))();
            (*pcVar2)(plVar5,*(undefined8 *)(this + 0x5a0),0,uVar6);
            if (local_28 != (Object *)0x0) {
              cVar3 = RefCounted::unreference();
              if (cVar3 != '\0') {
                cVar3 = predelete_handler(local_28);
                if (cVar3 != '\0') {
                  (**(code **)(*(long *)local_28 + 0x140))(local_28);
                  Memory::free_static(local_28,false);
                }
              }
            }
          }
          iVar4 = (**(code **)(**(long **)(this + 0x5b0) + 0x1c8))();
          if (1 < iVar4) {
            plVar5 = (long *)RenderingServer::get_singleton();
            pcVar2 = *(code **)(*plVar5 + 0xd68);
            NavigationServer3D::get_singleton();
            NavigationServer3D::get_debug_navigation_geometry_edge_disabled_material();
            uVar6 = (**(code **)(*(long *)local_28 + 0x1c0))();
            (*pcVar2)(plVar5,*(undefined8 *)(this + 0x5a0),1,uVar6);
            if (local_28 != (Object *)0x0) {
              cVar3 = RefCounted::unreference();
              if (cVar3 != '\0') {
                cVar3 = predelete_handler(local_28);
                if (cVar3 != '\0') {
                  (**(code **)(*(long *)local_28 + 0x140))(local_28);
                  Memory::free_static(local_28,false);
                }
              }
            }
          }
        }
      }
      else if (plVar5 != (long *)0x0) {
        iVar4 = (**(code **)(*plVar5 + 0x1c8))();
        if (0 < iVar4) {
          plVar5 = (long *)RenderingServer::get_singleton();
          (**(code **)(*plVar5 + 0xd68))(plVar5,*(undefined8 *)(this + 0x5a0),0,0);
        }
        iVar4 = (**(code **)(**(long **)(this + 0x5b0) + 0x1c8))();
        if (1 < iVar4) {
          plVar5 = (long *)RenderingServer::get_singleton();
          (**(code **)(*plVar5 + 0xd68))(plVar5,*(undefined8 *)(this + 0x5a0),1,0);
        }
      }
    }
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      Node3D::update_gizmos();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* NavigationRegion3D::_region_exit_navigation_map() */

void __thiscall NavigationRegion3D::_region_exit_navigation_map(NavigationRegion3D *this)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)NavigationServer3D::get_singleton();
  (**(code **)(*plVar2 + 0x2b0))(plVar2,*(undefined8 *)(this + 0x530),0);
  if (*(long *)(this + 0x5a0) == 0) {
    lVar1 = *(long *)(this + 0x5a8);
  }
  else {
    plVar2 = (long *)RenderingServer::get_singleton();
    (**(code **)(*plVar2 + 0xd70))(plVar2,*(undefined8 *)(this + 0x5a0),0);
    lVar1 = *(long *)(this + 0x5a8);
  }
  if (lVar1 == 0) {
    return;
  }
  plVar2 = (long *)RenderingServer::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x00100b20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0xd70))(plVar2,*(undefined8 *)(this + 0x5a8),0);
  return;
}



/* NavigationRegion3D::_region_update_transform() */

void __thiscall NavigationRegion3D::_region_update_transform(NavigationRegion3D *this)

{
  if (((byte)this[0x2fa] & 0x40) == 0) {
    return;
  }
  _region_update_transform(this);
  return;
}



/* NavigationRegion3D::NavigationRegion3D() */

void __thiscall NavigationRegion3D::NavigationRegion3D(NavigationRegion3D *this)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  NavigationRegion3D aNStack_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Node3D::Node3D((Node3D *)this);
  *(undefined ***)this = &PTR__initialize_classv_00116698;
  uVar2 = _LC30;
  *(undefined2 *)(this + 0x528) = 0x101;
  uVar5 = _LC28;
  *(undefined4 *)(this + 0x540) = 1;
  *(undefined8 *)(this + 0x544) = uVar5;
  *(undefined8 *)(this + 0x550) = 0;
  *(undefined4 *)(this + 0x578) = 0x3f800000;
  *(undefined8 *)(this + 0x57c) = 0;
  *(undefined4 *)(this + 0x584) = 0;
  *(undefined8 *)(this + 0x588) = 0;
  *(undefined4 *)(this + 0x590) = 0;
  *(undefined8 *)(this + 0x594) = 0;
  *(undefined4 *)(this + 0x59c) = 0;
  *(undefined1 (*) [16])(this + 0x558) = ZEXT416(uVar2);
  *(undefined1 (*) [16])(this + 0x568) = ZEXT416(uVar2);
  *(undefined1 (*) [16])(this + 0x530) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x5a0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x5b0) = (undefined1  [16])0x0;
  Node3D::set_notify_transform(SUB81(this,0));
  plVar4 = (long *)NavigationServer3D::get_singleton();
  uVar5 = (**(code **)(*plVar4 + 0x250))(plVar4);
  *(undefined8 *)(this + 0x530) = uVar5;
  plVar4 = (long *)NavigationServer3D::get_singleton();
  (**(code **)(*plVar4 + 0x298))(plVar4,*(undefined8 *)(this + 0x530),*(undefined8 *)(this + 0x60));
  plVar4 = (long *)NavigationServer3D::get_singleton();
  (**(code **)(*plVar4 + 0x278))(plVar4,*(undefined8 *)(this + 0x530));
  plVar4 = (long *)NavigationServer3D::get_singleton();
  (**(code **)(*plVar4 + 0x288))(plVar4,*(undefined8 *)(this + 0x530));
  plVar4 = (long *)NavigationServer3D::get_singleton();
  (**(code **)(*plVar4 + 0x2c0))(plVar4,*(undefined8 *)(this + 0x530),*(undefined4 *)(this + 0x540))
  ;
  plVar4 = (long *)NavigationServer3D::get_singleton();
  (**(code **)(*plVar4 + 0x268))(plVar4,*(undefined8 *)(this + 0x530),this[0x529]);
  plVar4 = (long *)NavigationServer3D::get_singleton();
  (**(code **)(*plVar4 + 600))(plVar4,*(undefined8 *)(this + 0x530),this[0x528]);
  plVar4 = (long *)NavigationServer3D::get_singleton();
  pcVar1 = *(code **)(*plVar4 + 0x108);
  create_custom_callable_function_pointer<NavigationRegion3D,RID>
            (aNStack_58,(char *)this,
             (_func_void_RID *)"&NavigationRegion3D::_navigation_map_changed");
  if (NavigationRegion3D()::{lambda()#1}::operator()()::sname == '\0') {
    iVar3 = __cxa_guard_acquire(&NavigationRegion3D()::{lambda()#1}::operator()()::sname);
    if (iVar3 != 0) {
      _scs_create((char *)&NavigationRegion3D()::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&NavigationRegion3D()::{lambda()#1}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&NavigationRegion3D()::{lambda()#1}::operator()()::sname);
    }
  }
  (*pcVar1)(plVar4,&NavigationRegion3D()::{lambda()#1}::operator()()::sname,aNStack_58,0);
  Callable::~Callable((Callable *)aNStack_58);
  plVar4 = (long *)NavigationServer3D::get_singleton();
  pcVar1 = *(code **)(*plVar4 + 0x108);
  create_custom_callable_function_pointer<NavigationRegion3D>
            (aNStack_58,(char *)this,(_func_void *)"&NavigationRegion3D::_navigation_debug_changed")
  ;
  if (NavigationRegion3D()::{lambda()#2}::operator()()::sname == '\0') {
    iVar3 = __cxa_guard_acquire(&NavigationRegion3D()::{lambda()#2}::operator()()::sname);
    if (iVar3 != 0) {
      _scs_create((char *)&NavigationRegion3D()::{lambda()#2}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&NavigationRegion3D()::{lambda()#2}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&NavigationRegion3D()::{lambda()#2}::operator()()::sname);
    }
  }
  (*pcVar1)(plVar4,&NavigationRegion3D()::{lambda()#2}::operator()()::sname,aNStack_58,0);
  Callable::~Callable((Callable *)aNStack_58);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Resource::initialize_class() [clone .part.0] */

void Resource::initialize_class(void)

{
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
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
    if ((code *)PTR__bind_methods_0011c008 != RefCounted::_bind_methods) {
      RefCounted::_bind_methods();
    }
    RefCounted::initialize_class()::initialized = '\x01';
  }
  local_58 = "RefCounted";
  local_68 = 0;
  local_50 = 10;
  String::parse_latin1((StrRange *)&local_68);
  StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
  local_58 = "Resource";
  local_70 = 0;
  local_50 = 8;
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
    Resource::_bind_methods();
  }
  initialize_class()::initialized = 1;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* NavigationRegion3D::_bind_methods() */

void NavigationRegion3D::_bind_methods(void)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  code *pcVar4;
  undefined *puVar5;
  int *piVar6;
  MethodBind *pMVar7;
  uint uVar8;
  int *piVar9;
  long lVar10;
  long in_FS_OFFSET;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  long local_140;
  long local_138;
  long local_130;
  char *local_128;
  undefined8 local_120;
  char *local_118;
  undefined8 local_110;
  undefined1 local_108 [16];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8 [2];
  int *local_c8;
  undefined8 local_c0;
  long local_b0;
  char *local_a8;
  undefined8 local_a0;
  Variant *local_98;
  char *pcStack_90;
  undefined8 local_88;
  Variant **local_78;
  undefined1 auStack_70 [16];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  puVar5 = PTR__LC49_00117030;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  D_METHODP((char *)&local_118,(char ***)"get_rid",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar7 = create_method_bind<NavigationRegion3D,RID>(get_rid);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_118,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_118);
  local_a8 = "navigation_mesh";
  local_a0 = 0;
  uVar8 = (uint)(Variant *)&local_78;
  local_78 = (Variant **)&local_a8;
  D_METHODP((char *)&local_118,(char ***)"set_navigation_mesh",uVar8);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar7 = create_method_bind<NavigationRegion3D,Ref<NavigationMesh>const&>(set_navigation_mesh);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_118,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_118);
  D_METHODP((char *)&local_118,(char ***)"get_navigation_mesh",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar7 = create_method_bind<NavigationRegion3D,Ref<NavigationMesh>>(get_navigation_mesh);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_118,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_118);
  local_a0 = 0;
  local_a8 = "enabled";
  local_78 = (Variant **)&local_a8;
  D_METHODP((char *)&local_118,(char ***)"set_enabled",uVar8);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar7 = create_method_bind<NavigationRegion3D,bool>(set_enabled);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_118,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_118);
  D_METHODP((char *)&local_118,(char ***)"is_enabled",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar7 = create_method_bind<NavigationRegion3D,bool>(is_enabled);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_118,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_118);
  local_a0 = 0;
  local_a8 = "navigation_map";
  local_78 = (Variant **)&local_a8;
  D_METHODP((char *)&local_118,(char ***)"set_navigation_map",uVar8);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar7 = create_method_bind<NavigationRegion3D,RID>(set_navigation_map);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_118,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_118);
  D_METHODP((char *)&local_118,(char ***)"get_navigation_map",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar7 = create_method_bind<NavigationRegion3D,RID>(get_navigation_map);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_118,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_118);
  local_a0 = 0;
  local_a8 = "enabled";
  local_78 = (Variant **)&local_a8;
  D_METHODP((char *)&local_118,(char ***)"set_use_edge_connections",uVar8);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar7 = create_method_bind<NavigationRegion3D,bool>(set_use_edge_connections);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_118,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_118);
  D_METHODP((char *)&local_118,(char ***)"get_use_edge_connections",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar7 = create_method_bind<NavigationRegion3D,bool>(get_use_edge_connections);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_118,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_118);
  local_a0 = 0;
  local_a8 = "navigation_layers";
  local_78 = (Variant **)&local_a8;
  D_METHODP((char *)&local_118,(char ***)"set_navigation_layers",uVar8);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar7 = create_method_bind<NavigationRegion3D,unsigned_int>(set_navigation_layers);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_118,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_118);
  D_METHODP((char *)&local_118,(char ***)"get_navigation_layers",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar7 = create_method_bind<NavigationRegion3D,unsigned_int>(get_navigation_layers);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_118,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_118);
  local_88 = 0;
  auStack_70._0_8_ = &pcStack_90;
  local_98 = (Variant *)puVar5;
  pcStack_90 = "value";
  local_78 = &local_98;
  D_METHODP((char *)&local_118,(char ***)"set_navigation_layer_value",uVar8);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar7 = create_method_bind<NavigationRegion3D,int,bool>(set_navigation_layer_value);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_118,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_118);
  pcStack_90 = (char *)0x0;
  local_98 = (Variant *)0x1072c3;
  local_78 = &local_98;
  D_METHODP((char *)&local_118,(char ***)"get_navigation_layer_value",uVar8);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar7 = create_method_bind<NavigationRegion3D,bool,int>(get_navigation_layer_value);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_118,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_118);
  D_METHODP((char *)&local_118,(char ***)"get_region_rid",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar7 = create_method_bind<NavigationRegion3D,RID>(get_region_rid);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_118,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_118);
  pcStack_90 = (char *)0x0;
  local_98 = (Variant *)0x1073e9;
  local_78 = &local_98;
  D_METHODP((char *)&local_118,(char ***)"set_enter_cost",uVar8);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar7 = create_method_bind<NavigationRegion3D,float>(set_enter_cost);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_118,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_118);
  D_METHODP((char *)&local_118,(char ***)"get_enter_cost",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar7 = create_method_bind<NavigationRegion3D,float>(get_enter_cost);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_118,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_118);
  pcStack_90 = (char *)0x0;
  local_98 = (Variant *)0x107403;
  local_78 = &local_98;
  D_METHODP((char *)&local_118,(char ***)"set_travel_cost",uVar8);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar7 = create_method_bind<NavigationRegion3D,float>(set_travel_cost);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_118,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_118);
  D_METHODP((char *)&local_118,(char ***)"get_travel_cost",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar7 = create_method_bind<NavigationRegion3D,float>(get_travel_cost);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_118,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_118);
  pcStack_90 = (char *)0x0;
  local_98 = (Variant *)0x10741f;
  local_78 = &local_98;
  D_METHODP((char *)&local_118,(char ***)"bake_navigation_mesh",uVar8);
  Variant::Variant((Variant *)&local_78,true);
  local_58 = (undefined1  [16])0x0;
  local_60 = 0;
  local_98 = (Variant *)&local_78;
  pMVar7 = create_method_bind<NavigationRegion3D,bool>(bake_navigation_mesh);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_118,&local_98,1);
  if (Variant::needs_deinit[(int)local_60] == '\0') {
    cVar2 = Variant::needs_deinit[(int)local_78];
  }
  else {
    Variant::_clear_internal();
    cVar2 = Variant::needs_deinit[(int)local_78];
  }
  if (cVar2 != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_118);
  D_METHODP((char *)&local_118,(char ***)"is_baking",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar7 = create_method_bind<NavigationRegion3D,bool>(is_baking);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_118,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_118);
  D_METHODP((char *)&local_118,(char ***)"get_bounds",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar7 = create_method_bind<NavigationRegion3D,AABB>(get_bounds);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)&local_118,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_118);
  _scs_create((char *)&local_130,true);
  _scs_create((char *)&local_138,true);
  local_140 = 0;
  local_118 = "NavigationMesh";
  local_148 = 0;
  local_110 = 0xe;
  String::parse_latin1((StrRange *)&local_148);
  local_118 = "navigation_mesh";
  local_150 = 0;
  local_110 = 0xf;
  String::parse_latin1((StrRange *)&local_150);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_118,0x18,(StrRange *)&local_150,0x11,(StrRange *)&local_148,6,
             &local_140);
  local_158 = 0;
  local_120 = 0x12;
  local_128 = "NavigationRegion3D";
  String::parse_latin1((StrRange *)&local_158);
  StringName::StringName((StringName *)&local_128,(String *)&local_158,false);
  ClassDB::add_property
            ((StringName *)&local_128,(PropertyInfo *)&local_118,(StringName *)&local_138,
             (StringName *)&local_130,-1);
  if ((StringName::configured != '\0') && (local_128 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_150);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
  if ((((StringName::configured != '\0') &&
       ((local_140 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_138 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_130 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_130,true);
  _scs_create((char *)&local_138,true);
  local_118 = "";
  local_140 = 0;
  local_148 = 0;
  local_110 = 0;
  String::parse_latin1((StrRange *)&local_148);
  local_118 = "enabled";
  local_150 = 0;
  local_110 = 7;
  String::parse_latin1((StrRange *)&local_150);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_118,1,(StrRange *)&local_150,0,(StrRange *)&local_148,6,
             &local_140);
  local_128 = "NavigationRegion3D";
  local_158 = 0;
  local_120 = 0x12;
  String::parse_latin1((StrRange *)&local_158);
  StringName::StringName((StringName *)&local_128,(String *)&local_158,false);
  ClassDB::add_property
            ((StringName *)&local_128,(PropertyInfo *)&local_118,(StringName *)&local_138,
             (StringName *)&local_130,-1);
  if ((StringName::configured != '\0') && (local_128 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_150);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
  if (((StringName::configured != '\0') &&
      ((local_140 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (((local_138 == 0 || (StringName::unref(), StringName::configured != '\0')) && (local_130 != 0)
      ))) {
    StringName::unref();
  }
  _scs_create((char *)&local_130,true);
  _scs_create((char *)&local_138,true);
  local_118 = "";
  local_140 = 0;
  local_148 = 0;
  local_110 = 0;
  String::parse_latin1((StrRange *)&local_148);
  local_118 = "use_edge_connections";
  local_150 = 0;
  local_110 = 0x14;
  String::parse_latin1((StrRange *)&local_150);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_118,1,(StrRange *)&local_150,0,(StrRange *)&local_148,6,
             &local_140);
  local_128 = "NavigationRegion3D";
  local_158 = 0;
  local_120 = 0x12;
  String::parse_latin1((StrRange *)&local_158);
  StringName::StringName((StringName *)&local_128,(String *)&local_158,false);
  ClassDB::add_property
            ((StringName *)&local_128,(PropertyInfo *)&local_118,(StringName *)&local_138,
             (StringName *)&local_130,-1);
  if ((StringName::configured != '\0') && (local_128 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_150);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
  if ((((StringName::configured != '\0') &&
       ((local_140 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_138 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_130 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_130,true);
  _scs_create((char *)&local_138,true);
  local_118 = "";
  local_140 = 0;
  local_148 = 0;
  local_110 = 0;
  String::parse_latin1((StrRange *)&local_148);
  local_118 = "navigation_layers";
  local_150 = 0;
  local_110 = 0x11;
  String::parse_latin1((StrRange *)&local_150);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_118,2,(StrRange *)&local_150,0xc,(StrRange *)&local_148,6,
             &local_140);
  local_128 = "NavigationRegion3D";
  local_158 = 0;
  local_120 = 0x12;
  String::parse_latin1((StrRange *)&local_158);
  StringName::StringName((StringName *)&local_128,(String *)&local_158,false);
  ClassDB::add_property
            ((StringName *)&local_128,(PropertyInfo *)&local_118,(StringName *)&local_138,
             (StringName *)&local_130,-1);
  if ((StringName::configured != '\0') && (local_128 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_150);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
  if ((((StringName::configured != '\0') &&
       ((local_140 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_138 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_130 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_130,true);
  _scs_create((char *)&local_138,true);
  local_118 = "";
  local_140 = 0;
  local_148 = 0;
  local_110 = 0;
  String::parse_latin1((StrRange *)&local_148);
  local_118 = "enter_cost";
  local_150 = 0;
  local_110 = 10;
  String::parse_latin1((StrRange *)&local_150);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_118,3,(StrRange *)&local_150,0,(StrRange *)&local_148,6,
             &local_140);
  local_128 = "NavigationRegion3D";
  local_158 = 0;
  local_120 = 0x12;
  String::parse_latin1((StrRange *)&local_158);
  StringName::StringName((StringName *)&local_128,(String *)&local_158,false);
  ClassDB::add_property
            ((StringName *)&local_128,(PropertyInfo *)&local_118,(StringName *)&local_138,
             (StringName *)&local_130,-1);
  if ((StringName::configured != '\0') && (local_128 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_150);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
  if ((((StringName::configured != '\0') &&
       ((local_140 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_138 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_130 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_130,true);
  _scs_create((char *)&local_138,true);
  local_118 = "";
  local_140 = 0;
  local_148 = 0;
  local_110 = 0;
  String::parse_latin1((StrRange *)&local_148);
  local_118 = "travel_cost";
  local_150 = 0;
  local_110 = 0xb;
  String::parse_latin1((StrRange *)&local_150);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_118,3,(StrRange *)&local_150,0,(StrRange *)&local_148,6,
             &local_140);
  local_128 = "NavigationRegion3D";
  local_158 = 0;
  local_120 = 0x12;
  String::parse_latin1((StrRange *)&local_158);
  StringName::StringName((StringName *)&local_128,(String *)&local_158,false);
  ClassDB::add_property
            ((StringName *)&local_128,(PropertyInfo *)&local_118,(StringName *)&local_138,
             (StringName *)&local_130,-1);
  if ((StringName::configured != '\0') && (local_128 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_150);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
  if ((((StringName::configured != '\0') &&
       ((local_140 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_138 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_130 != 0)) {
    StringName::unref();
  }
  local_130 = 0;
  local_118 = "navigation_mesh_changed";
  local_110 = 0x17;
  String::parse_latin1((StrRange *)&local_130);
  local_118 = (char *)0x0;
  local_110 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 6;
  local_e0 = 1;
  local_d8[0] = 0;
  local_c8 = (int *)0x0;
  local_c0 = 0;
  local_b0 = 0;
  local_108 = (undefined1  [16])0x0;
  if (local_130 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_118,(CowData *)&local_130);
  }
  local_138 = 0;
  local_128 = "NavigationRegion3D";
  local_120 = 0x12;
  String::parse_latin1((StrRange *)&local_138);
  StringName::StringName((StringName *)&local_128,(String *)&local_138,false);
  ClassDB::add_signal((StringName *)&local_128,(MethodInfo *)&local_118);
  if ((StringName::configured != '\0') && (local_128 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
  lVar3 = local_b0;
  if (local_b0 != 0) {
    LOCK();
    plVar1 = (long *)(local_b0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_b0 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  piVar6 = local_c8;
  if (local_c8 != (int *)0x0) {
    LOCK();
    plVar1 = (long *)(local_c8 + -4);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      if (local_c8 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar3 = *(long *)(local_c8 + -2);
      lVar10 = 0;
      local_c8 = (int *)0x0;
      piVar9 = piVar6;
      if (lVar3 != 0) {
        do {
          if (Variant::needs_deinit[*piVar9] != '\0') {
            Variant::_clear_internal();
          }
          lVar10 = lVar10 + 1;
          piVar9 = piVar9 + 6;
        } while (lVar3 != lVar10);
      }
      Memory::free_static(piVar6 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_d8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_130);
  local_130 = 0;
  local_118 = "bake_finished";
  local_110 = 0xd;
  String::parse_latin1((StrRange *)&local_130);
  local_118 = (char *)0x0;
  local_110 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 6;
  local_e0 = 1;
  local_d8[0] = 0;
  local_c8 = (int *)0x0;
  local_c0 = 0;
  local_b0 = 0;
  local_108 = (undefined1  [16])0x0;
  if (local_130 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_118,(CowData *)&local_130);
  }
  local_138 = 0;
  local_128 = "NavigationRegion3D";
  local_120 = 0x12;
  String::parse_latin1((StrRange *)&local_138);
  StringName::StringName((StringName *)&local_128,(String *)&local_138,false);
  ClassDB::add_signal((StringName *)&local_128,(MethodInfo *)&local_118);
  if ((StringName::configured != '\0') && (local_128 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
  lVar3 = local_b0;
  if (local_b0 != 0) {
    LOCK();
    plVar1 = (long *)(local_b0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_b0 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  piVar6 = local_c8;
  if (local_c8 != (int *)0x0) {
    LOCK();
    plVar1 = (long *)(local_c8 + -4);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      if (local_c8 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar3 = *(long *)(local_c8 + -2);
      lVar10 = 0;
      local_c8 = (int *)0x0;
      piVar9 = piVar6;
      if (lVar3 != 0) {
        do {
          if (Variant::needs_deinit[*piVar9] != '\0') {
            Variant::_clear_internal();
          }
          lVar10 = lVar10 + 1;
          piVar9 = piVar9 + 6;
        } while (lVar3 != lVar10);
      }
      Memory::free_static(piVar6 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_d8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_130);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavigationRegion3D::_update_bounds() */

void __thiscall NavigationRegion3D::_update_bounds(NavigationRegion3D *this)

{
  float *pfVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  long lVar7;
  float *pfVar8;
  long in_FS_OFFSET;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c0;
  float *local_80;
  undefined8 local_78;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x550) == 0) {
    fStack_6c = 0.0;
    fStack_68 = 0.0;
    local_78 = 0;
    fStack_70 = 0.0;
    fStack_64 = 0.0;
    *(undefined8 *)(this + 0x588) = 0;
    *(undefined8 *)(this + 0x590) = 0;
    *(undefined8 *)(this + 0x598) = 0;
  }
  else {
    NavigationMesh::get_vertices();
    if (local_80 != (float *)0x0) {
      if (((byte)this[0x2fa] & 0x40) == 0) {
        Node3D::get_transform();
        local_d0 = (float)local_78;
        local_d8 = local_78._4_4_;
        local_d4 = local_60;
        local_c8 = local_5c;
        local_c0 = local_54;
        local_cc = local_4c;
        fVar21 = local_58;
        fVar22 = local_50;
      }
      else {
        Node3D::get_global_transform();
        local_d0 = (float)local_78;
        local_d8 = local_78._4_4_;
        local_c8 = local_5c;
        local_cc = local_4c;
        local_d4 = local_60;
        local_c0 = local_54;
        fVar21 = local_58;
        fVar22 = local_50;
      }
      fVar6 = fStack_64;
      fVar5 = fStack_68;
      fVar4 = fStack_6c;
      fVar3 = fStack_70;
      if (local_80 == (float *)0x0) {
        lVar7 = 0;
      }
      else {
        lVar7 = *(long *)(local_80 + -2);
        if (0 < lVar7) {
          fVar19 = *local_80;
          fVar15 = local_80[1];
          pfVar1 = local_80 + lVar7 * 3;
          fVar17 = local_80[2];
          fVar16 = local_c8 * fVar15 + local_d4 * fVar19 + fVar17 * fVar21 + local_cc;
          fVar18 = fStack_68 * fVar15 + fVar19 * fStack_6c + fStack_64 * fVar17 + fVar22;
          auVar14._0_4_ = local_c0 + fVar15 * local_d8 + fVar19 * local_d0 + fVar17 * fStack_70;
          if (pfVar1 == local_80) {
            auVar14._4_4_ = fVar18;
            *(undefined8 *)(this + 0x598) = 0;
            auVar14._8_4_ = fVar16;
            auVar14._12_4_ = 0;
            *(undefined1 (*) [16])(this + 0x588) = auVar14;
          }
          else {
            fVar20 = 0.0;
            fVar15 = 0.0;
            fVar17 = 0.0;
            pfVar8 = local_80;
            fVar19 = auVar14._0_4_;
            do {
              fVar11 = *pfVar8;
              fVar13 = pfVar8[1];
              fVar12 = pfVar8[2];
              fVar10 = local_c8 * fVar13 + local_d4 * fVar11 + fVar12 * fVar21 + local_cc;
              fVar9 = fVar13 * local_d8 + fVar11 * local_d0 + fVar12 * fVar3 + local_c0;
              fVar11 = fVar5 * fVar13 + fVar11 * fVar4 + fVar6 * fVar12 + fVar22;
              if (((fVar17 < 0.0) || (fVar15 < 0.0)) || (fVar20 < 0.0)) {
                _err_print_error("expand_to","./core/math/aabb.h",0x158,
                                 "AABB size is negative, this is not supported. Use AABB.abs() to get an AABB with a positive size."
                                 ,0,0);
              }
              pfVar8 = pfVar8 + 3;
              fVar13 = fVar9;
              if (fVar19 <= fVar9) {
                fVar13 = fVar19;
              }
              fVar12 = fVar11;
              if (fVar18 <= fVar11) {
                fVar12 = fVar18;
              }
              if (fVar9 <= fVar17 + fVar19) {
                fVar9 = fVar17 + fVar19;
              }
              fVar19 = fVar10;
              if (fVar10 <= fVar20 + fVar16) {
                fVar19 = fVar20 + fVar16;
              }
              if (fVar16 <= fVar10) {
                fVar10 = fVar16;
              }
              if (fVar11 <= fVar15 + fVar18) {
                fVar11 = fVar15 + fVar18;
              }
              fVar17 = fVar9 - fVar13;
              fVar20 = fVar19 - fVar10;
              fVar15 = fVar11 - fVar12;
              fVar18 = fVar12;
              fVar19 = fVar13;
              fVar16 = fVar10;
            } while (pfVar1 != pfVar8);
            *(ulong *)(this + 0x598) = CONCAT44(fVar20,fVar15);
            *(ulong *)(this + 0x588) = CONCAT44(fVar12,fVar13);
            *(ulong *)(this + 0x590) = CONCAT44(fVar17,fVar10);
            if (local_80 == (float *)0x0) goto LAB_00102e54;
          }
          pfVar8 = local_80;
          LOCK();
          pfVar1 = local_80 + -4;
          *(long *)pfVar1 = *(long *)pfVar1 + -1;
          UNLOCK();
          if (*(long *)pfVar1 == 0) {
            local_80 = (float *)0x0;
            Memory::free_static(pfVar8 + -4,false);
          }
          goto LAB_00102e54;
        }
      }
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,0,lVar7,"p_index","size()","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    fStack_6c = 0.0;
    fStack_68 = 0.0;
    fStack_64 = 0.0;
    local_78 = 0;
    fStack_70 = 0.0;
    *(undefined8 *)(this + 0x598) = 0;
    *(undefined8 *)(this + 0x588) = 0;
    *(undefined8 *)(this + 0x590) = 0;
    CowData<Vector3>::_unref((CowData<Vector3> *)&local_80);
  }
LAB_00102e54:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<Vector3>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Vector3>::_copy_on_write(CowData<Vector3> *this)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  size_t __n;
  ulong uVar4;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar4 = 0x10;
  __n = lVar1 * 0xc;
  if (__n != 0) {
    uVar4 = __n - 1 | __n - 1 >> 1;
    uVar4 = uVar4 | uVar4 >> 2;
    uVar4 = uVar4 | uVar4 >> 4;
    uVar4 = uVar4 | uVar4 >> 8;
    uVar4 = uVar4 | uVar4 >> 0x10;
    uVar4 = (uVar4 | uVar4 >> 0x20) + 0x11;
  }
  puVar3 = (undefined8 *)Memory::alloc_static(uVar4,false);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = 1;
    puVar3[1] = lVar1;
    memcpy(puVar3 + 2,*(void **)this,__n);
    _unref(this);
    *(undefined8 **)this = puVar3 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* Error CowData<Vector3>::resize<false>(long) [clone .isra.0] */

void __thiscall CowData<Vector3>::resize<false>(CowData<Vector3> *this,long param_1)

{
  int iVar1;
  CowData<Vector3> *pCVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uVar6;
  CowData<Vector3> *pCVar7;
  CowData<Vector3> *pCVar8;
  long lVar9;
  undefined8 *puVar10;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return;
  }
  if (*(long *)this == 0) {
    if (param_1 == 0) {
      return;
    }
    _copy_on_write(this);
    lVar9 = 0;
    pCVar2 = (CowData<Vector3> *)0x0;
  }
  else {
    lVar9 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar9) {
      return;
    }
    if (param_1 == 0) {
      _unref(this);
      return;
    }
    _copy_on_write(this);
    pCVar2 = (CowData<Vector3> *)(lVar9 * 0xc);
    if (pCVar2 != (CowData<Vector3> *)0x0) {
      uVar3 = (ulong)(pCVar2 + -1) | (ulong)(pCVar2 + -1) >> 1;
      uVar3 = uVar3 | uVar3 >> 2;
      uVar3 = uVar3 | uVar3 >> 4;
      uVar3 = uVar3 | uVar3 >> 8;
      uVar3 = uVar3 | uVar3 >> 0x10;
      pCVar2 = (CowData<Vector3> *)((uVar3 | uVar3 >> 0x20) + 1);
    }
  }
  if (param_1 * 0xc != 0) {
    uVar3 = param_1 * 0xc - 1;
    uVar3 = uVar3 | uVar3 >> 1;
    uVar3 = uVar3 | uVar3 >> 2;
    uVar3 = uVar3 | uVar3 >> 4;
    uVar3 = uVar3 | uVar3 >> 8;
    uVar3 = uVar3 | uVar3 >> 0x10;
    pCVar8 = (CowData<Vector3> *)(uVar3 | uVar3 >> 0x20);
    pCVar7 = pCVar8 + 1;
    if (pCVar7 != (CowData<Vector3> *)0x0) {
      if (param_1 <= lVar9) {
        if ((pCVar7 != pCVar2) && (iVar1 = _realloc(this,(long)pCVar7), iVar1 != 0)) {
          return;
        }
        if (*(long *)this != 0) {
          *(long *)(*(long *)this + -8) = param_1;
          return;
        }
        FUN_0010e5b8();
        return;
      }
      if (pCVar7 == pCVar2) {
LAB_001033ec:
        puVar10 = *(undefined8 **)this;
        if (puVar10 == (undefined8 *)0x0) {
          resize<false>((long)pCVar8);
          return;
        }
        lVar9 = puVar10[-1];
        if (param_1 <= lVar9) goto LAB_0010337b;
      }
      else {
        if (lVar9 != 0) {
          pCVar8 = this;
          iVar1 = _realloc(this,(long)pCVar7);
          if (iVar1 != 0) {
            return;
          }
          goto LAB_001033ec;
        }
        puVar4 = (undefined8 *)Memory::alloc_static((ulong)(pCVar8 + 0x11),false);
        if (puVar4 == (undefined8 *)0x0) {
          uVar6 = 0x171;
          pcVar5 = "Parameter \"mem_new\" is null.";
          goto LAB_00103462;
        }
        puVar10 = puVar4 + 2;
        *puVar4 = 1;
        puVar4[1] = 0;
        *(undefined8 **)this = puVar10;
        lVar9 = 0;
      }
      memset((void *)((long)puVar10 + lVar9 * 0xc),0,(param_1 - lVar9) * 0xc);
LAB_0010337b:
      puVar10[-1] = param_1;
      return;
    }
  }
  uVar6 = 0x16a;
  pcVar5 = 
  "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
  ;
LAB_00103462:
  _err_print_error("resize","./core/templates/cowdata.h",uVar6,pcVar5,0,0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NavigationRegion3D::_update_debug_edge_connections_mesh() */

void __thiscall NavigationRegion3D::_update_debug_edge_connections_mesh(NavigationRegion3D *this)

{
  code *pcVar1;
  long lVar2;
  undefined1 auVar3 [12];
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  undefined1 uVar7;
  int iVar8;
  long *plVar9;
  Variant *this_00;
  Object *pOVar10;
  undefined8 uVar11;
  int iVar12;
  float *pfVar13;
  long in_FS_OFFSET;
  float fVar14;
  float fVar15;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar25 [12];
  undefined1 auVar26 [12];
  long local_b0;
  Array local_a8 [8];
  Array local_a0 [8];
  Dictionary local_98 [8];
  Object *local_90;
  Object *local_88;
  float *local_80 [2];
  undefined1 local_70 [8];
  undefined4 local_68;
  undefined1 local_64 [8];
  undefined4 local_5c;
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  float fVar16;
  float fVar17;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  NavigationServer3D::get_singleton();
  cVar6 = NavigationServer3D::get_debug_enabled();
  if (cVar6 == '\0') {
LAB_001034dc:
    auVar3._8_4_ = local_5c;
    auVar3._0_8_ = local_64;
    auVar25._8_4_ = local_68;
    auVar25._0_8_ = local_70;
    lVar2 = *(long *)(this + 0x5a8);
joined_r0x00103913:
    if (lVar2 != 0) {
LAB_00103920:
      plVar9 = (long *)RenderingServer::get_singleton();
      auVar3._8_4_ = local_5c;
      auVar3._0_8_ = local_64;
      auVar25._8_4_ = local_68;
      auVar25._0_8_ = local_70;
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00103963. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar9 + 0xd70))(plVar9,*(undefined8 *)(this + 0x5a8),0);
        return;
      }
      goto LAB_00103db0;
    }
  }
  else {
    NavigationServer3D::get_singleton();
    cVar6 = NavigationServer3D::get_debug_navigation_enabled();
    auVar3._8_4_ = local_5c;
    auVar3._0_8_ = local_64;
    auVar25._8_4_ = local_68;
    auVar25._0_8_ = local_70;
    if (cVar6 == '\0') goto LAB_001034dc;
    if (((byte)this[0x2fa] & 0x40) != 0) {
      if (this[0x529] == (NavigationRegion3D)0x0) goto LAB_001034dc;
      plVar9 = (long *)NavigationServer3D::get_singleton();
      pcVar1 = *(code **)(*plVar9 + 0x1b8);
      Node3D::get_world_3d();
      World3D::get_navigation_map();
      cVar6 = (*pcVar1)(plVar9);
      if (cVar6 == '\0') {
        if (((local_88 != (Object *)0x0) && (cVar6 = RefCounted::unreference(), cVar6 != '\0')) &&
           (cVar6 = predelete_handler(local_88), cVar6 != '\0')) {
          (**(code **)(*(long *)local_88 + 0x140))(local_88);
          Memory::free_static(local_88,false);
        }
        goto LAB_001034dc;
      }
      if (((local_88 != (Object *)0x0) &&
          (cVar6 = RefCounted::unreference(), pOVar10 = local_88, cVar6 != '\0')) &&
         (cVar6 = predelete_handler(local_88), cVar6 != '\0')) {
        (**(code **)(*(long *)pOVar10 + 0x140))(pOVar10);
        Memory::free_static(pOVar10,false);
      }
      auVar3._8_4_ = local_5c;
      auVar3._0_8_ = local_64;
      auVar25._8_4_ = local_68;
      auVar25._0_8_ = local_70;
      lVar2 = *(long *)(this + 0x5a8);
      if (*(long *)(this + 0x550) == 0) goto joined_r0x00103913;
      if (lVar2 == 0) {
        plVar9 = (long *)RenderingServer::get_singleton();
        uVar11 = (**(code **)(*plVar9 + 0xd18))(plVar9);
        *(undefined8 *)(this + 0x5a8) = uVar11;
      }
      if (*(long *)(this + 0x5b8) == 0) {
        Ref<ArrayMesh>::instantiate<>((Ref<ArrayMesh> *)(this + 0x5b8));
      }
      ArrayMesh::clear_surfaces();
      plVar9 = (long *)NavigationServer3D::get_singleton();
      pcVar1 = *(code **)(*plVar9 + 0x1c8);
      Node3D::get_world_3d();
      World3D::get_navigation_map();
      fVar14 = (float)(*pcVar1)(plVar9);
      if (((local_88 != (Object *)0x0) && (cVar6 = RefCounted::unreference(), cVar6 != '\0')) &&
         (cVar6 = predelete_handler(local_88), cVar6 != '\0')) {
        (**(code **)(*(long *)local_88 + 0x140))(local_88);
        Memory::free_static(local_88,false);
      }
      plVar9 = (long *)NavigationServer3D::get_singleton();
      iVar8 = (**(code **)(*plVar9 + 0x2f0))(plVar9,*(undefined8 *)(this + 0x530));
      if (iVar8 != 0) {
        local_80[0] = (float *)0x0;
        CowData<Vector3>::resize<false>((CowData<Vector3> *)local_80,(long)(iVar8 * 6));
        CowData<Vector3>::_copy_on_write((CowData<Vector3> *)local_80);
        auVar26._8_4_ = local_5c;
        auVar26._0_8_ = local_64;
        if (0 < iVar8) {
          iVar12 = 0;
          fVar14 = fVar14 * __LC96;
          pfVar13 = local_80[0];
          do {
            _local_64 = auVar26;
            plVar9 = (long *)NavigationServer3D::get_singleton();
            auVar25 = (**(code **)(*plVar9 + 0x2f8))(plVar9,*(undefined8 *)(this + 0x530),iVar12);
            fVar16 = auVar25._8_4_;
            local_70._0_4_ = auVar25._0_4_;
            uVar4 = local_70._0_4_;
            local_70._4_4_ = auVar25._4_4_;
            uVar5 = local_70._4_4_;
            _local_70 = auVar25;
            plVar9 = (long *)NavigationServer3D::get_singleton();
            auVar26 = (**(code **)(*plVar9 + 0x300))(plVar9,*(undefined8 *)(this + 0x530),iVar12);
            fVar17 = auVar26._8_4_;
            local_64._0_4_ = auVar26._0_4_;
            local_64._4_4_ = auVar26._4_4_;
            fVar19 = (float)local_64._4_4_ - (float)uVar5;
            fVar22 = (float)local_64._0_4_ - (float)uVar4;
            fVar18 = fVar17 - fVar16;
            fVar15 = fVar22 * fVar22 + fVar19 * fVar19 + fVar18 * fVar18;
            fVar21 = _LC95;
            fVar23 = _LC95;
            fVar20 = _LC95;
            if (fVar15 != 0.0) {
              fVar15 = SQRT(fVar15);
              fVar20 = (fVar19 / fVar15) * 0.0;
              fVar21 = (float)((uint)(fVar22 / fVar15 - fVar20) ^ (uint)_LC95);
              fVar23 = (float)((uint)((fVar18 / fVar15) * 0.0 - (fVar22 / fVar15) * 0.0) ^
                              (uint)_LC95);
              fVar20 = (float)((uint)(fVar20 - fVar18 / fVar15) ^ (uint)_LC95);
            }
            fVar22 = (float)uVar5 - (float)local_64._4_4_;
            fVar18 = (float)uVar4 - (float)local_64._0_4_;
            fVar15 = fVar16 - fVar17;
            fVar19 = fVar18 * fVar18 + fVar22 * fVar22 + fVar15 * fVar15;
            if (fVar19 == 0.0) {
              fVar24 = 0.0;
              fVar22 = 0.0;
              fVar15 = 0.0;
            }
            else {
              fVar19 = SQRT(fVar19);
              fVar24 = (fVar22 / fVar19) * 0.0;
              fVar22 = fVar24 - fVar15 / fVar19;
              fVar24 = fVar18 / fVar19 - fVar24;
              fVar15 = (fVar15 / fVar19) * 0.0 - (fVar18 / fVar19) * 0.0;
            }
            *pfVar13 = (float)uVar4;
            pfVar13[1] = (float)uVar5;
            pfVar13[2] = fVar16;
            pfVar13[3] = (float)local_64._0_4_;
            iVar12 = iVar12 + 1;
            pfVar13[4] = (float)local_64._4_4_;
            pfVar13[5] = fVar17;
            pfVar13[6] = (float)uVar4 + fVar20 * fVar14;
            pfVar13[7] = (float)uVar5 + fVar23 * fVar14;
            pfVar13[8] = fVar16 + fVar21 * fVar14;
            pfVar13[9] = (float)uVar4 - fVar20 * fVar14;
            pfVar13[10] = (float)uVar5 - fVar23 * fVar14;
            pfVar13[0xb] = fVar16 - fVar21 * fVar14;
            pfVar13[0x10] = (float)local_64._4_4_ - fVar15 * fVar14;
            pfVar13[0x11] = fVar17 - fVar24 * fVar14;
            pfVar13[0xc] = (float)local_64._0_4_ + fVar22 * fVar14;
            pfVar13[0xd] = (float)local_64._4_4_ + fVar15 * fVar14;
            pfVar13[0xe] = fVar17 + fVar24 * fVar14;
            pfVar13[0xf] = (float)local_64._0_4_ - fVar22 * fVar14;
            pfVar13 = pfVar13 + 0x12;
          } while (iVar8 != iVar12);
        }
        _local_64 = auVar26;
        if ((local_80[0] != (float *)0x0) && (*(long *)(local_80[0] + -2) != 0)) {
          NavigationServer3D::get_singleton();
          NavigationServer3D::get_debug_navigation_edge_connections_material();
          Array::Array(local_a8);
          iVar8 = (int)local_a8;
          Array::resize(iVar8);
          Variant::Variant((Variant *)&local_58,(Vector *)&local_88);
          this_00 = (Variant *)Array::operator[](iVar8);
          Variant::operator=(this_00,(Variant *)&local_58);
          if (Variant::needs_deinit[(int)local_58] != '\0') {
            Variant::_clear_internal();
          }
          uVar11 = *(undefined8 *)(this + 0x5b8);
          Dictionary::Dictionary(local_98);
          Array::Array(local_a0);
          local_58 = 0;
          local_90 = (Object *)0x0;
          local_50 = (undefined1  [16])0x0;
          Array::set_typed((uint)local_a0,(StringName *)0x1c,(Variant *)&local_90);
          if ((StringName::configured != '\0') && (local_90 != (Object *)0x0)) {
            StringName::unref();
          }
          if (Variant::needs_deinit[(int)local_58] != '\0') {
            Variant::_clear_internal();
          }
          ArrayMesh::add_surface_from_arrays(uVar11,1,local_a8,local_a0,local_98,0);
          Array::~Array(local_a0);
          Dictionary::~Dictionary(local_98);
          plVar9 = *(long **)(this + 0x5b8);
          pcVar1 = *(code **)(*plVar9 + 0x208);
          local_90 = (Object *)0x0;
          if (local_b0 != 0) {
            pOVar10 = (Object *)__dynamic_cast(local_b0,&Object::typeinfo,&Material::typeinfo,0);
            if (pOVar10 != (Object *)0x0) {
              local_90 = pOVar10;
              cVar6 = RefCounted::reference();
              if (cVar6 == '\0') {
                local_90 = (Object *)0x0;
              }
            }
          }
          (*pcVar1)(plVar9,0,(Ref<World3D> *)&local_90);
          if (local_90 != (Object *)0x0) {
            cVar6 = RefCounted::unreference();
            pOVar10 = local_90;
            if (cVar6 != '\0') {
              cVar6 = predelete_handler(local_90);
              if (cVar6 != '\0') {
                (**(code **)(*(long *)pOVar10 + 0x140))(pOVar10);
                Memory::free_static(pOVar10,false);
              }
            }
          }
          plVar9 = (long *)RenderingServer::get_singleton();
          pcVar1 = *(code **)(*plVar9 + 0xd20);
          uVar11 = (**(code **)(**(long **)(this + 0x5b8) + 0x1c0))();
          (*pcVar1)(plVar9,*(undefined8 *)(this + 0x5a8),uVar11);
          plVar9 = (long *)RenderingServer::get_singleton();
          pcVar1 = *(code **)(*plVar9 + 0xd70);
          uVar7 = Node3D::is_visible_in_tree();
          (*pcVar1)(plVar9,*(undefined8 *)(this + 0x5a8),uVar7);
          if (((byte)this[0x2fa] & 0x40) != 0) {
            plVar9 = (long *)RenderingServer::get_singleton();
            pcVar1 = *(code **)(*plVar9 + 0xd28);
            Node3D::get_world_3d();
            uVar11 = World3D::get_scenario();
            (*pcVar1)(plVar9,*(undefined8 *)(this + 0x5a8),uVar11);
            Ref<World3D>::unref((Ref<World3D> *)&local_90);
          }
          NavigationServer3D::get_singleton();
          cVar6 = NavigationServer3D::get_debug_navigation_enable_edge_connections();
          if (cVar6 == '\0') {
            plVar9 = (long *)RenderingServer::get_singleton();
            (**(code **)(*plVar9 + 0xd70))(plVar9,*(undefined8 *)(this + 0x5a8),0);
          }
          Array::~Array(local_a8);
          Ref<StandardMaterial3D>::unref((Ref<StandardMaterial3D> *)&local_b0);
        }
        CowData<Vector3>::_unref((CowData<Vector3> *)local_80);
        auVar25 = _local_70;
        auVar3 = _local_64;
        goto LAB_001034ea;
      }
      goto LAB_00103920;
    }
  }
LAB_001034ea:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00103db0:
  _local_70 = auVar25;
  _local_64 = auVar3;
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavigationRegion3D::_navigation_mesh_changed() */

void __thiscall NavigationRegion3D::_navigation_mesh_changed(NavigationRegion3D *this)

{
  Node3D::update_gizmos();
  Node::update_configuration_warnings();
  _update_debug_edge_connections_mesh(this);
  return;
}



/* NavigationRegion3D::_navigation_map_changed(RID) */

void __thiscall NavigationRegion3D::_navigation_map_changed(NavigationRegion3D *this,long param_2)

{
  long lVar1;
  char cVar2;
  long lVar3;
  long in_FS_OFFSET;
  Object *local_28;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (((byte)this[0x2fa] & 0x40) != 0) {
    Node3D::get_world_3d();
    lVar3 = World3D::get_navigation_map();
    if (lVar3 == param_2) {
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
      if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
        _update_debug_edge_connections_mesh(this);
        return;
      }
      goto LAB_00103ed9;
    }
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
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00103ed9:
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



/* NavigationRegion3D::is_baking() const */

undefined4 __thiscall NavigationRegion3D::is_baking(NavigationRegion3D *this)

{
  code *pcVar1;
  char cVar2;
  undefined4 uVar3;
  long *plVar4;
  long in_FS_OFFSET;
  NavigationMesh *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  plVar4 = (long *)NavigationServer3D::get_singleton();
  local_28 = (NavigationMesh *)0x0;
  pcVar1 = *(code **)(*plVar4 + 0x5e8);
  if (*(NavigationMesh **)(this + 0x550) != (NavigationMesh *)0x0) {
    local_28 = *(NavigationMesh **)(this + 0x550);
    cVar2 = RefCounted::reference();
    if (cVar2 == '\0') {
      local_28 = (NavigationMesh *)0x0;
    }
  }
  uVar3 = (*pcVar1)(plVar4,&local_28);
  if (local_28 != (NavigationMesh *)0x0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      memdelete<NavigationMesh>(local_28);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavigationRegion3D::_get(StringName const&, Variant&) const */

undefined4 __thiscall
NavigationRegion3D::_get(NavigationRegion3D *this,StringName *param_1,Variant *param_2)

{
  NavigationMesh *pNVar1;
  char cVar2;
  undefined4 uVar3;
  long in_FS_OFFSET;
  undefined4 local_38 [2];
  undefined8 local_30;
  undefined8 uStack_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = StringName::operator==(param_1,"navmesh");
  if ((char)uVar3 != '\0') {
    pNVar1 = *(NavigationMesh **)(this + 0x550);
    if (pNVar1 == (NavigationMesh *)0x0) {
      Variant::Variant((Variant *)local_38,(Object *)0x0);
      if (Variant::needs_deinit[*(int *)param_2] == '\0') {
        *(undefined4 *)param_2 = local_38[0];
        *(undefined8 *)(param_2 + 8) = local_30;
        *(undefined8 *)(param_2 + 0x10) = uStack_28;
      }
      else {
        Variant::_clear_internal();
        *(undefined4 *)param_2 = local_38[0];
        *(undefined8 *)(param_2 + 8) = local_30;
        *(undefined8 *)(param_2 + 0x10) = uStack_28;
      }
    }
    else {
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        Variant::Variant((Variant *)local_38,(Object *)0x0);
        if (Variant::needs_deinit[*(int *)param_2] == '\0') {
          *(undefined4 *)param_2 = local_38[0];
          *(undefined8 *)(param_2 + 8) = local_30;
          *(undefined8 *)(param_2 + 0x10) = uStack_28;
        }
        else {
          Variant::_clear_internal();
          *(undefined4 *)param_2 = local_38[0];
          *(undefined8 *)(param_2 + 8) = local_30;
          *(undefined8 *)(param_2 + 0x10) = uStack_28;
        }
      }
      else {
        Variant::Variant((Variant *)local_38,(Object *)pNVar1);
        if (Variant::needs_deinit[*(int *)param_2] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)param_2 = local_38[0];
        *(undefined8 *)(param_2 + 8) = local_30;
        *(undefined8 *)(param_2 + 0x10) = uStack_28;
        cVar2 = RefCounted::unreference();
        if (cVar2 != '\0') {
          memdelete<NavigationMesh>(pNVar1);
        }
      }
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



/* NavigationRegion3D::bake_navigation_mesh(bool) */

void __thiscall NavigationRegion3D::bake_navigation_mesh(NavigationRegion3D *this,bool param_1)

{
  NavigationRegion3D *pNVar1;
  NavigationMesh *pNVar2;
  Object *pOVar3;
  char cVar4;
  Resource *this_00;
  long *plVar5;
  code *pcVar6;
  Object *pOVar7;
  long in_FS_OFFSET;
  undefined1 auVar8 [16];
  Object *local_70;
  NavigationRegion3D local_68 [16];
  undefined8 local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (PTR_caller_id_0011c010 != (undefined *)0x0) {
    Thread::caller_id();
  }
  if (*(long *)(in_FS_OFFSET + lRam000000000010427e) != 1) {
    _err_print_error("bake_navigation_mesh","scene/3d/navigation_region_3d.cpp",0xf6,
                     "Condition \"!Thread::is_main_thread()\" is true.",
                     "The SceneTree can only be parsed on the main thread. Call this function from the main thread or use call_deferred()."
                     ,0,0);
    goto LAB_0010449c;
  }
  if (*(long *)(this + 0x550) == 0) {
    _err_print_error("bake_navigation_mesh","scene/3d/navigation_region_3d.cpp",0xf7,
                     "Condition \"navigation_mesh.is_null()\" is true.",
                     "Baking the navigation mesh requires a valid `NavigationMesh` resource.",0,0);
    goto LAB_0010449c;
  }
  local_70 = (Object *)0x0;
  this_00 = (Resource *)operator_new(0x2f8,"");
  Resource::Resource(this_00);
  *(undefined ***)this_00 = &PTR__initialize_classv_001164c0;
  *(undefined8 *)(this_00 + 0x270) = 0;
  *(undefined8 *)(this_00 + 0x280) = 0;
  *(undefined8 *)(this_00 + 0x290) = 0;
  *(undefined8 *)(this_00 + 0x298) = 0;
  *(undefined4 *)(this_00 + 0x2a0) = 0;
  *(undefined8 *)(this_00 + 0x2a4) = 0;
  *(undefined4 *)(this_00 + 0x2ac) = 0;
  this_00[0x2b0] = (Resource)0x1;
  *(undefined8 *)(this_00 + 0x2c0) = 0;
  *(undefined4 *)(this_00 + 0x2e8) = 0x3f800000;
  *(undefined8 *)(this_00 + 0x2ec) = 0;
  *(undefined4 *)(this_00 + 0x2f4) = 0;
  *(undefined1 (*) [16])(this_00 + 0x240) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x250) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x260) = (undefined1  [16])0x0;
  auVar8 = ZEXT416(_LC30);
  *(undefined1 (*) [16])(this_00 + 0x2c8) = auVar8;
  *(undefined1 (*) [16])(this_00 + 0x2d8) = auVar8;
  postinitialize_handler((Object *)this_00);
  cVar4 = RefCounted::init_ref();
  pOVar3 = local_70;
  if (cVar4 == '\0') {
    if (local_70 != (Object *)0x0) {
      local_70 = (Object *)0x0;
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
        this_00 = (Resource *)0x0;
        cVar4 = predelete_handler(pOVar3);
        if (cVar4 != '\0') goto LAB_001045f3;
      }
    }
  }
  else {
    pOVar7 = local_70;
    if (this_00 != (Resource *)local_70) {
      local_70 = (Object *)this_00;
      cVar4 = RefCounted::reference();
      if (cVar4 == '\0') {
        local_70 = (Object *)0x0;
      }
      pOVar7 = (Object *)this_00;
      if (((pOVar3 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) &&
         (cVar4 = predelete_handler(pOVar3), cVar4 != '\0')) {
LAB_001045f3:
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
        pOVar7 = (Object *)this_00;
        if (this_00 == (Resource *)0x0) goto LAB_001043ad;
      }
    }
    cVar4 = RefCounted::unreference();
    if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar7), cVar4 != '\0')) {
      (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
      Memory::free_static(pOVar7,false);
    }
  }
LAB_001043ad:
  plVar5 = (long *)NavigationServer3D::get_singleton();
  pNVar1 = this + 0x550;
  local_58 = 0;
  local_50 = 0;
  (**(code **)(*plVar5 + 0x5d0))(plVar5,pNVar1,&local_70,this,(Callable *)&local_58);
  Callable::~Callable((Callable *)&local_58);
  if (param_1) {
    plVar5 = (long *)NavigationServer3D::get_singleton();
    pcVar6 = *(code **)(*plVar5 + 0x5e0);
  }
  else {
    plVar5 = (long *)NavigationServer3D::get_singleton();
    pcVar6 = *(code **)(*plVar5 + 0x5d8);
  }
  create_custom_callable_function_pointer<NavigationRegion3D,Ref<NavigationMesh>>
            (local_68,(char *)this,(_func_void_Ref *)"&NavigationRegion3D::_bake_finished");
  pNVar2 = *(NavigationMesh **)(this + 0x550);
  if ((pNVar2 == (NavigationMesh *)0x0) || (cVar4 = RefCounted::reference(), cVar4 == '\0')) {
    Callable::bind<Ref<NavigationMesh>>((Callable *)&local_58,local_68,0);
    (*pcVar6)(plVar5,pNVar1,&local_70,(Callable *)&local_58);
    Callable::~Callable((Callable *)&local_58);
  }
  else {
    Callable::bind<Ref<NavigationMesh>>((Callable *)&local_58,local_68,pNVar2);
    (*pcVar6)(plVar5,pNVar1,&local_70,(Callable *)&local_58);
    Callable::~Callable((Callable *)&local_58);
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      memdelete<NavigationMesh>(pNVar2);
    }
  }
  Callable::~Callable((Callable *)local_68);
  if (((local_70 != (Object *)0x0) &&
      (cVar4 = RefCounted::unreference(), pOVar3 = local_70, cVar4 != '\0')) &&
     (cVar4 = predelete_handler(local_70), cVar4 != '\0')) {
    (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
    Memory::free_static(pOVar3,false);
  }
LAB_0010449c:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* NavigationRegion3D::~NavigationRegion3D() */

void __thiscall NavigationRegion3D::~NavigationRegion3D(NavigationRegion3D *this)

{
  Callable *pCVar1;
  code *pcVar2;
  Object *pOVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long in_FS_OFFSET;
  NavigationRegion3D aNStack_58 [24];
  long local_40;
  
  pCVar1 = *(Callable **)(this + 0x550);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR__initialize_classv_00116698;
  if (pCVar1 != (Callable *)0x0) {
    create_custom_callable_function_pointer<NavigationRegion3D>
              (aNStack_58,(char *)this,(_func_void *)"&NavigationRegion3D::_navigation_mesh_changed"
              );
    Resource::disconnect_changed(pCVar1);
    Callable::~Callable((Callable *)aNStack_58);
  }
  lVar6 = NavigationServer3D::get_singleton();
  if (lVar6 == 0) {
    _err_print_error("~NavigationRegion3D","scene/3d/navigation_region_3d.cpp",0x1c2,
                     "Parameter \"NavigationServer3D::get_singleton()\" is null.",0,0);
LAB_00104aad:
    lVar6 = *(long *)(this + 0x5b8);
  }
  else {
    plVar7 = (long *)NavigationServer3D::get_singleton();
    (**(code **)(*plVar7 + 0x598))(plVar7,*(undefined8 *)(this + 0x530));
    plVar7 = (long *)NavigationServer3D::get_singleton();
    pcVar2 = *(code **)(*plVar7 + 0x110);
    create_custom_callable_function_pointer<NavigationRegion3D,RID>
              (aNStack_58,(char *)this,
               (_func_void_RID *)"&NavigationRegion3D::_navigation_map_changed");
    if ((~NavigationRegion3D()::{lambda()#1}::operator()()::sname == '\0') &&
       (iVar5 = __cxa_guard_acquire(&~NavigationRegion3D()::{lambda()#1}::operator()()::sname),
       iVar5 != 0)) {
      _scs_create((char *)&~NavigationRegion3D()::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&~NavigationRegion3D()::{lambda()#1}::operator()()::sname
                   ,&__dso_handle);
      __cxa_guard_release(&~NavigationRegion3D()::{lambda()#1}::operator()()::sname);
    }
    (*pcVar2)(plVar7,&~NavigationRegion3D()::{lambda()#1}::operator()()::sname,aNStack_58);
    Callable::~Callable((Callable *)aNStack_58);
    plVar7 = (long *)NavigationServer3D::get_singleton();
    pcVar2 = *(code **)(*plVar7 + 0x110);
    create_custom_callable_function_pointer<NavigationRegion3D>
              (aNStack_58,(char *)this,
               (_func_void *)"&NavigationRegion3D::_navigation_debug_changed");
    if ((~NavigationRegion3D()::{lambda()#2}::operator()()::sname == '\0') &&
       (iVar5 = __cxa_guard_acquire(&~NavigationRegion3D()::{lambda()#2}::operator()()::sname),
       iVar5 != 0)) {
      _scs_create((char *)&~NavigationRegion3D()::{lambda()#2}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&~NavigationRegion3D()::{lambda()#2}::operator()()::sname
                   ,&__dso_handle);
      __cxa_guard_release(&~NavigationRegion3D()::{lambda()#2}::operator()()::sname);
    }
    (*pcVar2)(plVar7,&~NavigationRegion3D()::{lambda()#2}::operator()()::sname,aNStack_58);
    Callable::~Callable((Callable *)aNStack_58);
    lVar6 = RenderingServer::get_singleton();
    if (lVar6 == 0) {
      _err_print_error("~NavigationRegion3D","scene/3d/navigation_region_3d.cpp",0x1c9,
                       "Parameter \"RenderingServer::get_singleton()\" is null.",0,0);
      goto LAB_00104aad;
    }
    if (*(long *)(this + 0x5a0) != 0) {
      plVar7 = (long *)RenderingServer::get_singleton();
      (**(code **)(*plVar7 + 0x11b0))(plVar7);
    }
    if (*(long *)(this + 0x5b0) != 0) {
      plVar7 = (long *)RenderingServer::get_singleton();
      pcVar2 = *(code **)(*plVar7 + 0x11b0);
      (**(code **)(**(long **)(this + 0x5b0) + 0x1c0))();
      (*pcVar2)(plVar7);
    }
    if (*(long *)(this + 0x5a8) != 0) {
      plVar7 = (long *)RenderingServer::get_singleton();
      (**(code **)(*plVar7 + 0x11b0))(plVar7);
    }
    if (*(long *)(this + 0x5b8) == 0) goto LAB_001048b1;
    plVar7 = (long *)RenderingServer::get_singleton();
    pcVar2 = *(code **)(*plVar7 + 0x11b0);
    (**(code **)(**(long **)(this + 0x5b8) + 0x1c0))();
    (*pcVar2)(plVar7);
    lVar6 = *(long *)(this + 0x5b8);
  }
  if ((lVar6 != 0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) {
    pOVar3 = *(Object **)(this + 0x5b8);
    cVar4 = predelete_handler(pOVar3);
    if (cVar4 != '\0') {
      (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
      Memory::free_static(pOVar3,false);
    }
  }
LAB_001048b1:
  if ((*(long *)(this + 0x5b0) != 0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) {
    pOVar3 = *(Object **)(this + 0x5b0);
    cVar4 = predelete_handler(pOVar3);
    if (cVar4 != '\0') {
      (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
      Memory::free_static(pOVar3,false);
    }
  }
  if ((*(long *)(this + 0x550) != 0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) {
    memdelete<NavigationMesh>(*(NavigationMesh **)(this + 0x550));
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    Node3D::~Node3D((Node3D *)this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavigationRegion3D::~NavigationRegion3D() */

void __thiscall NavigationRegion3D::~NavigationRegion3D(NavigationRegion3D *this)

{
  ~NavigationRegion3D(this);
  operator_delete(this,0x5c0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NavigationRegion3D::_update_debug_mesh() */

void NavigationRegion3D::_update_debug_mesh(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined8 uVar7;
  char cVar8;
  char cVar9;
  undefined1 uVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  Variant *pVVar14;
  long *plVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  ulong uVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  int iVar21;
  long lVar22;
  long lVar23;
  uint uVar24;
  long in_RDI;
  long lVar25;
  long lVar26;
  int iVar27;
  size_t __n;
  int iVar28;
  long lVar29;
  long lVar30;
  long in_FS_OFFSET;
  float fVar31;
  float fVar32;
  float fVar33;
  double dVar34;
  double dVar35;
  undefined8 in_XMM1_Qa;
  RandomPCG *local_180;
  Variant *local_178;
  CowData<Vector3> *local_158;
  int local_134;
  long local_130;
  Ref *local_118;
  Array local_110 [8];
  Ref *local_108;
  Array local_100 [8];
  Array local_f8 [8];
  Dictionary local_f0 [16];
  long local_e0;
  Vector local_d8 [8];
  long local_d0;
  Vector local_c8 [8];
  undefined8 *local_c0;
  Vector local_b8 [8];
  long local_b0;
  long *local_a8;
  int *local_a0;
  RandomPCG local_98 [8];
  long local_90 [3];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  int local_58 [2];
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar13 = Engine::get_singleton();
  if (*(char *)(lVar13 + 0xc0) != '\0') goto LAB_00104b59;
  NavigationServer3D::get_singleton();
  cVar8 = NavigationServer3D::get_debug_enabled();
  if (cVar8 == '\0') {
LAB_00104c38:
    if (*(long *)(in_RDI + 0x5a0) != 0) {
LAB_00104c46:
      plVar15 = (long *)RenderingServer::get_singleton();
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00104c89. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar15 + 0xd70))(plVar15,*(undefined8 *)(in_RDI + 0x5a0),0);
        return;
      }
      goto LAB_00105a2a;
    }
  }
  else {
    NavigationServer3D::get_singleton();
    cVar8 = NavigationServer3D::get_debug_navigation_enabled();
    if (cVar8 == '\0') goto LAB_00104c38;
    if (*(long *)(in_RDI + 0x550) == 0) {
      if (*(long *)(in_RDI + 0x5a0) == 0) goto LAB_00104b59;
      goto LAB_00104c46;
    }
    if (*(long *)(in_RDI + 0x5a0) == 0) {
      plVar15 = (long *)RenderingServer::get_singleton();
      uVar16 = (**(code **)(*plVar15 + 0xd18))(plVar15);
      *(undefined8 *)(in_RDI + 0x5a0) = uVar16;
    }
    if (*(long *)(in_RDI + 0x5b0) == 0) {
      Ref<ArrayMesh>::instantiate<>((Ref<ArrayMesh> *)(in_RDI + 0x5b0));
    }
    ArrayMesh::clear_surfaces();
    NavigationMesh::get_vertices();
    if (((local_e0 == 0) || (*(long *)(local_e0 + -8) == 0)) ||
       (iVar11 = NavigationMesh::get_polygon_count(), iVar11 == 0)) {
      CowData<Vector3>::_unref((CowData<Vector3> *)&local_e0);
    }
    else {
      NavigationServer3D::get_singleton();
      cVar8 = NavigationServer3D::get_debug_navigation_enable_geometry_face_random_color();
      NavigationServer3D::get_singleton();
      cVar9 = NavigationServer3D::get_debug_navigation_enable_edge_lines();
      if (iVar11 < 1) {
        iVar28 = 0;
        local_d0 = 0;
        CowData<Vector3>::resize<false>((CowData<Vector3> *)&local_d0,0);
        local_c0 = (undefined8 *)0x0;
      }
      else {
        iVar21 = 0;
        iVar28 = 0;
        iVar27 = 0;
        do {
          NavigationMesh::get_polygon((int)local_98);
          if ((local_90[0] != 0) && (iVar12 = (int)*(undefined8 *)(local_90[0] + -8), 2 < iVar12)) {
            iVar28 = iVar28 + iVar12 * 2;
            iVar27 = iVar27 + iVar12 * 3 + -6;
          }
          iVar21 = iVar21 + 1;
          CowData<int>::_unref((CowData<int> *)local_90);
        } while (iVar11 != iVar21);
        lVar13 = (long)iVar27;
        local_d0 = 0;
        CowData<Vector3>::resize<false>((CowData<Vector3> *)&local_d0,lVar13);
        local_c0 = (undefined8 *)0x0;
        if (cVar8 != '\0') {
          if (lVar13 < 0) {
            _err_print_error("resize","./core/templates/cowdata.h",0x157,
                             "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,
                             0);
          }
          else if (lVar13 != 0) {
            uVar18 = lVar13 * 0x10 - 1;
            uVar18 = uVar18 | uVar18 >> 1;
            uVar18 = uVar18 | uVar18 >> 2;
            uVar18 = uVar18 | uVar18 >> 4;
            uVar18 = uVar18 | uVar18 >> 8;
            uVar18 = uVar18 | uVar18 >> 0x10;
            puVar17 = (undefined8 *)Memory::alloc_static((uVar18 | uVar18 >> 0x20) + 0x11,false);
            if (puVar17 == (undefined8 *)0x0) {
              _err_print_error("resize","./core/templates/cowdata.h",0x171,
                               "Parameter \"mem_new\" is null.",0,0);
            }
            else {
              local_c0 = puVar17 + 2;
              *puVar17 = 1;
              uVar7 = _LC28;
              uVar16 = __LC112;
              puVar19 = puVar17;
              do {
                puVar19[2] = uVar16;
                puVar19[3] = uVar7;
                puVar19 = puVar19 + 2;
              } while (puVar19 != puVar17 + lVar13 * 2);
              puVar17[1] = lVar13;
            }
          }
        }
      }
      local_158 = (CowData<Vector3> *)&local_d0;
      local_180 = local_98;
      local_b0 = 0;
      if (cVar9 != '\0') {
        CowData<Vector3>::resize<false>((CowData<Vector3> *)&local_b0,(long)iVar28);
      }
      NavigationServer3D::get_singleton();
      local_78 = NavigationServer3D::get_debug_navigation_geometry_face_color();
      uStack_70 = in_XMM1_Qa;
      RandomPCG::RandomPCG(local_180,0xa7323897838d73db,0x14057b7ef767814f);
      local_68 = local_78;
      uStack_60 = (undefined4)uStack_70;
      uStack_5c = (undefined4)((ulong)uStack_70 >> 0x20);
      CowData<Vector3>::_copy_on_write(local_158);
      lVar13 = local_d0;
      if ((local_c0 != (undefined8 *)0x0) && (1 < (ulong)local_c0[-2])) {
        if (local_c0 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        lVar5 = local_c0[-1];
        lVar26 = 0;
        __n = lVar5 * 0x10;
        if (__n != 0) {
          uVar18 = __n - 1 | __n - 1 >> 1;
          uVar18 = uVar18 | uVar18 >> 2;
          uVar18 = uVar18 | uVar18 >> 4;
          uVar18 = uVar18 | uVar18 >> 8;
          uVar18 = uVar18 | uVar18 >> 0x10;
          lVar26 = (uVar18 | uVar18 >> 0x20) + 1;
        }
        puVar19 = (undefined8 *)Memory::alloc_static(lVar26 + 0x10,false);
        puVar17 = local_c0;
        if (puVar19 == (undefined8 *)0x0) {
          _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                           "Parameter \"mem_new\" is null.",0,0);
        }
        else {
          puVar20 = puVar19 + 2;
          *puVar19 = 1;
          puVar19[1] = lVar5;
          memcpy(puVar20,local_c0,__n);
          puVar19 = local_c0;
          LOCK();
          plVar15 = puVar17 + -2;
          *plVar15 = *plVar15 + -1;
          UNLOCK();
          local_c0 = puVar20;
          if (*plVar15 == 0) {
            local_c0 = (undefined8 *)0x0;
            Memory::free_static(puVar19 + -2,false);
            local_c0 = puVar20;
          }
        }
      }
      puVar17 = local_c0;
      CowData<Vector3>::_copy_on_write((CowData<Vector3> *)&local_b0);
      lVar5 = local_b0;
      if (0 < iVar11) {
        local_134 = 0;
        iVar21 = 0;
        iVar28 = 0;
        do {
          NavigationMesh::get_polygon((int)&local_a8);
          if ((local_a0 == (int *)0x0) || (iVar27 = (int)*(undefined8 *)(local_a0 + -2), iVar27 < 3)
             ) {
            CowData<int>::_unref((CowData<int> *)&local_a0);
          }
          else {
            if (cVar8 != '\0') {
              fVar31 = (float)Color::get_v();
              dVar34 = (double)RandomPCG::random(_LC114,_LC113);
              dVar34 = _LC115 * dVar34;
              fVar32 = (float)Color::get_s();
              fVar33 = (float)Color::get_h();
              dVar35 = (double)RandomPCG::random(_LC114,_LC113);
              Color::set_hsv((float)(dVar35 * __LC116 + (double)fVar33),fVar32,
                             (float)(dVar34 + (double)fVar31),_LC30);
              uStack_5c = uStack_70._4_4_;
            }
            puVar19 = (undefined8 *)(lVar13 + (long)iVar28 * 0xc);
            puVar20 = puVar17 + (long)iVar28 * 2;
            if (local_a0 == (int *)0x0) {
              local_130 = 0;
LAB_0010558f:
              lVar22 = 0;
              lVar25 = local_130;
LAB_001053bb:
              _err_print_index_error
                        ("get","./core/templates/cowdata.h",0xdb,lVar22,lVar25,"p_index","size()",""
                         ,false,true);
              _err_flush_stdout();
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
            local_130 = *(long *)(local_a0 + -2);
            lVar29 = 2;
            lVar26 = 1;
            do {
              if (local_130 < 1) goto LAB_0010558f;
              lVar22 = (long)*local_a0;
              if (lVar22 < 0) {
                if (local_e0 == 0) {
LAB_00105620:
                  lVar25 = 0;
                }
                else {
                  lVar25 = *(long *)(local_e0 + -8);
                }
                goto LAB_001053bb;
              }
              if (local_e0 == 0) goto LAB_00105620;
              lVar4 = *(long *)(local_e0 + -8);
              lVar25 = lVar4;
              if (lVar4 <= lVar22) goto LAB_001053bb;
              puVar1 = (undefined8 *)(local_e0 + lVar22 * 0xc);
              *puVar19 = *puVar1;
              *(undefined4 *)(puVar19 + 1) = *(undefined4 *)(puVar1 + 1);
              lVar22 = lVar26;
              lVar25 = local_130;
              if (((local_130 <= lVar26) ||
                  (lVar22 = (long)local_a0[lVar26], lVar25 = lVar4, lVar22 < 0)) ||
                 (lVar4 <= lVar22)) goto LAB_001053bb;
              puVar2 = (undefined8 *)(local_e0 + lVar22 * 0xc);
              *(undefined8 *)((long)puVar19 + 0xc) = *puVar2;
              *(undefined4 *)((long)puVar19 + 0x14) = *(undefined4 *)(puVar2 + 1);
              lVar22 = lVar29;
              lVar25 = local_130;
              if (((local_130 <= lVar29) ||
                  (lVar22 = (long)local_a0[lVar26 + 1], lVar25 = lVar4, lVar4 <= lVar22)) ||
                 (lVar22 < 0)) goto LAB_001053bb;
              puVar2 = (undefined8 *)(local_e0 + lVar22 * 0xc);
              puVar19[3] = *puVar2;
              *(undefined4 *)(puVar19 + 4) = *(undefined4 *)(puVar2 + 1);
              if (cVar8 != '\0') {
                *puVar20 = local_68;
                puVar20[1] = CONCAT44(uStack_5c,uStack_60);
                auVar6._8_4_ = uStack_60;
                auVar6._0_8_ = local_68;
                auVar6._12_4_ = uStack_5c;
                *(undefined1 (*) [16])(puVar20 + 2) = auVar6;
                puVar20[4] = local_68;
                puVar20[5] = CONCAT44(uStack_5c,uStack_60);
              }
              lVar26 = lVar26 + 1;
              puVar19 = (undefined8 *)((long)puVar19 + 0x24);
              puVar20 = puVar20 + 6;
              lVar29 = lVar29 + 1;
              iVar28 = iVar28 + 3;
            } while ((ulong)(iVar27 - 3) + 3 != lVar29);
            if (cVar9 != '\0') {
              lVar26 = (long)local_134;
              lVar30 = 1;
              lVar29 = 0;
              do {
                lVar22 = lVar29;
                lVar25 = local_130;
                if (((local_130 <= lVar29) ||
                    (lVar22 = (long)local_a0[lVar29], lVar25 = lVar4, lVar22 < 0)) ||
                   (lVar4 <= lVar22)) goto LAB_001053bb;
                local_134 = (int)lVar26;
                lVar23 = lVar26 * 0xc;
                puVar19 = (undefined8 *)(lVar22 * 0xc + local_e0);
                *(undefined8 *)(lVar5 + lVar23) = *puVar19;
                *(undefined4 *)(lVar5 + 8 + lVar23) = *(undefined4 *)(puVar19 + 1);
                if (iVar27 == (int)lVar30) {
                  puVar19 = (undefined8 *)((long)(local_134 + 1) * 0xc + lVar5);
                  *puVar19 = *puVar1;
                  *(undefined4 *)(puVar19 + 1) = *(undefined4 *)(puVar1 + 1);
                  local_134 = local_134 + 2;
                  goto LAB_00105362;
                }
                lVar22 = lVar30;
                lVar25 = local_130;
                if (((local_130 <= lVar30) ||
                    (lVar22 = (long)local_a0[lVar30], lVar25 = lVar4, lVar22 < 0)) ||
                   (lVar4 <= lVar22)) goto LAB_001053bb;
                lVar29 = lVar29 + 1;
                lVar30 = lVar30 + 1;
                lVar26 = lVar26 + 2;
                puVar19 = (undefined8 *)(lVar22 * 0xc + local_e0);
                *(undefined8 *)(lVar5 + 0xc + lVar23) = *puVar19;
                *(undefined4 *)(lVar5 + 0x14 + lVar23) = *(undefined4 *)(puVar19 + 1);
              } while ((int)lVar29 < iVar27);
              local_134 = local_134 + 2;
            }
LAB_00105362:
            CowData<int>::_unref((CowData<int> *)&local_a0);
          }
          iVar21 = iVar21 + 1;
        } while (iVar11 != iVar21);
      }
      local_178 = (Variant *)&local_a8;
      NavigationServer3D::get_singleton();
      NavigationServer3D::get_debug_navigation_geometry_face_material();
      Array::Array(local_110);
      iVar11 = (int)local_110;
      Array::resize(iVar11);
      Variant::Variant((Variant *)local_58,local_d8);
      pVVar14 = (Variant *)Array::operator[](iVar11);
      Variant::operator=(pVVar14,(Variant *)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (cVar8 != '\0') {
        Variant::Variant((Variant *)local_58,local_c8);
        pVVar14 = (Variant *)Array::operator[](iVar11);
        Variant::operator=(pVVar14,(Variant *)local_58);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
      }
      uVar16 = *(undefined8 *)(in_RDI + 0x5b0);
      Dictionary::Dictionary(local_f0);
      Array::Array(local_f8);
      local_58[0] = 0;
      local_58[1] = 0;
      local_a8 = (long *)0x0;
      local_50 = (undefined1  [16])0x0;
      uVar24 = (uint)local_f8;
      Array::set_typed(uVar24,(StringName *)0x1c,local_178);
      if ((StringName::configured != '\0') && (local_a8 != (long *)0x0)) {
        StringName::unref();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      ArrayMesh::add_surface_from_arrays(uVar16,3,local_110,local_f8,local_f0,0);
      Array::~Array(local_f8);
      Dictionary::~Dictionary(local_f0);
      plVar15 = *(long **)(in_RDI + 0x5b0);
      pcVar3 = *(code **)(*plVar15 + 0x208);
      local_a8 = (long *)0x0;
      Ref<Material>::operator=((Ref<Material> *)local_178,local_118);
      (*pcVar3)(plVar15,0,local_178);
      Ref<Material>::unref((Ref<Material> *)local_178);
      if (cVar9 != '\0') {
        NavigationServer3D::get_singleton();
        NavigationServer3D::get_debug_navigation_geometry_edge_material();
        Array::Array(local_100);
        iVar11 = (int)local_100;
        Array::resize(iVar11);
        Variant::Variant((Variant *)local_58,local_b8);
        pVVar14 = (Variant *)Array::operator[](iVar11);
        Variant::operator=(pVVar14,(Variant *)local_58);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        uVar16 = *(undefined8 *)(in_RDI + 0x5b0);
        Dictionary::Dictionary(local_f0);
        Array::Array(local_f8);
        local_58[0] = 0;
        local_58[1] = 0;
        local_a8 = (long *)0x0;
        local_50 = (undefined1  [16])0x0;
        Array::set_typed(uVar24,(StringName *)0x1c,local_178);
        if ((StringName::configured != '\0') && (local_a8 != (long *)0x0)) {
          StringName::unref();
        }
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        ArrayMesh::add_surface_from_arrays(uVar16,1,local_100,local_f8,local_f0,0);
        Array::~Array(local_f8);
        Dictionary::~Dictionary(local_f0);
        plVar15 = *(long **)(in_RDI + 0x5b0);
        pcVar3 = *(code **)(*plVar15 + 0x208);
        local_a8 = (long *)0x0;
        Ref<Material>::operator=((Ref<Material> *)local_178,local_108);
        (*pcVar3)(plVar15,1,local_178);
        Ref<Material>::unref((Ref<Material> *)local_178);
        Array::~Array(local_100);
        Ref<StandardMaterial3D>::unref((Ref<StandardMaterial3D> *)&local_108);
      }
      plVar15 = (long *)RenderingServer::get_singleton();
      pcVar3 = *(code **)(*plVar15 + 0xd20);
      uVar16 = (**(code **)(**(long **)(in_RDI + 0x5b0) + 0x1c0))();
      (*pcVar3)(plVar15,*(undefined8 *)(in_RDI + 0x5a0),uVar16);
      if ((*(byte *)(in_RDI + 0x2fa) & 0x40) != 0) {
        plVar15 = (long *)RenderingServer::get_singleton();
        pcVar3 = *(code **)(*plVar15 + 0xd28);
        Node3D::get_world_3d();
        uVar16 = World3D::get_scenario();
        (*pcVar3)(plVar15,*(undefined8 *)(in_RDI + 0x5a0),uVar16);
        Ref<World3D>::unref((Ref<World3D> *)local_178);
        plVar15 = (long *)RenderingServer::get_singleton();
        (**(code **)(*plVar15 + 0xd40))(plVar15,*(undefined8 *)(in_RDI + 0x5a0),in_RDI + 0x558);
        plVar15 = (long *)RenderingServer::get_singleton();
        pcVar3 = *(code **)(*plVar15 + 0xd70);
        uVar10 = Node3D::is_visible_in_tree();
        (*pcVar3)(plVar15,*(undefined8 *)(in_RDI + 0x5a0),uVar10);
      }
      plVar15 = *(long **)(in_RDI + 0x5b0);
      if (*(char *)(in_RDI + 0x528) == '\0') {
        if (plVar15 != (long *)0x0) {
          iVar11 = (**(code **)(*plVar15 + 0x1c8))();
          if (0 < iVar11) {
            plVar15 = (long *)RenderingServer::get_singleton();
            pcVar3 = *(code **)(*plVar15 + 0xd68);
            NavigationServer3D::get_singleton();
            NavigationServer3D::get_debug_navigation_geometry_face_disabled_material();
            uVar16 = (**(code **)(*local_a8 + 0x1c0))();
            (*pcVar3)(plVar15,*(undefined8 *)(in_RDI + 0x5a0),0,uVar16);
            Ref<StandardMaterial3D>::unref((Ref<StandardMaterial3D> *)local_178);
          }
          iVar11 = (**(code **)(**(long **)(in_RDI + 0x5b0) + 0x1c8))();
          if (1 < iVar11) {
            plVar15 = (long *)RenderingServer::get_singleton();
            pcVar3 = *(code **)(*plVar15 + 0xd68);
            NavigationServer3D::get_singleton();
            NavigationServer3D::get_debug_navigation_geometry_edge_disabled_material();
            uVar16 = (**(code **)(*local_a8 + 0x1c0))();
            (*pcVar3)(plVar15,*(undefined8 *)(in_RDI + 0x5a0),1,uVar16);
            Ref<StandardMaterial3D>::unref((Ref<StandardMaterial3D> *)local_178);
          }
        }
      }
      else if (plVar15 != (long *)0x0) {
        iVar11 = (**(code **)(*plVar15 + 0x1c8))();
        if (0 < iVar11) {
          plVar15 = (long *)RenderingServer::get_singleton();
          (**(code **)(*plVar15 + 0xd68))(plVar15,*(undefined8 *)(in_RDI + 0x5a0),0,0);
        }
        iVar11 = (**(code **)(**(long **)(in_RDI + 0x5b0) + 0x1c8))();
        if (1 < iVar11) {
          plVar15 = (long *)RenderingServer::get_singleton();
          (**(code **)(*plVar15 + 0xd68))(plVar15,*(undefined8 *)(in_RDI + 0x5a0),1,0);
        }
      }
      Array::~Array(local_110);
      Ref<StandardMaterial3D>::unref((Ref<StandardMaterial3D> *)&local_118);
      CowData<Vector3>::_unref((CowData<Vector3> *)&local_b0);
      puVar17 = local_c0;
      if (local_c0 != (undefined8 *)0x0) {
        LOCK();
        plVar15 = local_c0 + -2;
        *plVar15 = *plVar15 + -1;
        UNLOCK();
        if (*plVar15 == 0) {
          local_c0 = (undefined8 *)0x0;
          Memory::free_static(puVar17 + -2,false);
        }
      }
      CowData<Vector3>::_unref(local_158);
      CowData<Vector3>::_unref((CowData<Vector3> *)&local_e0);
    }
  }
LAB_00104b59:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00105a2a:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavigationRegion3D::set_navigation_mesh(Ref<NavigationMesh> const&) */

void __thiscall NavigationRegion3D::set_navigation_mesh(NavigationRegion3D *this,Ref *param_1)

{
  Callable *pCVar1;
  Object *pOVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  long *plVar6;
  Object *pOVar7;
  long in_FS_OFFSET;
  NavigationMesh *local_58 [2];
  undefined8 local_48;
  undefined1 local_40 [16];
  long local_30;
  
  pCVar1 = *(Callable **)(this + 0x550);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (pCVar1 == (Callable *)0x0) {
    if (*(long *)param_1 == 0) goto LAB_00105cc5;
    *(long *)(this + 0x550) = *(long *)param_1;
    cVar4 = RefCounted::reference();
    pOVar7 = (Object *)0x0;
    if (cVar4 == '\0') {
LAB_00105c68:
      *(undefined8 *)(this + 0x550) = 0;
      goto LAB_00105c73;
    }
LAB_00105c88:
    pOVar7 = *(Object **)(this + 0x550);
  }
  else {
    create_custom_callable_function_pointer<NavigationRegion3D>
              ((NavigationRegion3D *)local_58,(char *)this,
               (_func_void *)"&NavigationRegion3D::_navigation_mesh_changed");
    Resource::disconnect_changed(pCVar1);
    Callable::~Callable((Callable *)local_58);
    pOVar2 = *(Object **)param_1;
    pOVar7 = *(Object **)(this + 0x550);
    if (pOVar2 != pOVar7) {
      *(Object **)(this + 0x550) = pOVar2;
      if (pOVar2 == (Object *)0x0) {
LAB_00105c73:
        if (pOVar7 == (Object *)0x0) goto LAB_00105cc5;
      }
      else {
        cVar4 = RefCounted::reference();
        if (cVar4 == '\0') goto LAB_00105c68;
        if (pOVar7 == (Object *)0x0) goto LAB_00105c88;
      }
      cVar4 = RefCounted::unreference();
      if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar7), cVar4 != '\0')) {
        (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
        Memory::free_static(pOVar7,false);
      }
      goto LAB_00105c88;
    }
  }
  if (pOVar7 != (Object *)0x0) {
    create_custom_callable_function_pointer<NavigationRegion3D>
              ((NavigationRegion3D *)local_58,(char *)this,
               (_func_void *)"&NavigationRegion3D::_navigation_mesh_changed");
    Resource::connect_changed((Callable *)pOVar7,(uint)local_58);
    Callable::~Callable((Callable *)local_58);
  }
LAB_00105cc5:
  _update_bounds(this);
  plVar6 = (long *)NavigationServer3D::get_singleton();
  pcVar3 = *(code **)(*plVar6 + 0x2e0);
  local_58[0] = (NavigationMesh *)0x0;
  if ((*(NavigationMesh **)param_1 != (NavigationMesh *)0x0) &&
     (local_58[0] = *(NavigationMesh **)param_1, cVar4 = RefCounted::reference(), cVar4 == '\0')) {
    local_58[0] = (NavigationMesh *)0x0;
  }
  (*pcVar3)(plVar6,*(undefined8 *)(this + 0x530),local_58);
  if ((local_58[0] != (NavigationMesh *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0'))
  {
    memdelete<NavigationMesh>(local_58[0]);
  }
  if (((byte)this[0x2fa] & 0x40) != 0) {
    NavigationServer3D::get_singleton();
    cVar4 = NavigationServer3D::get_debug_navigation_enabled();
    if (cVar4 != '\0') {
      if (*(long *)(this + 0x550) == 0) {
        if (*(long *)(this + 0x5a0) != 0) {
          plVar6 = (long *)RenderingServer::get_singleton();
          (**(code **)(*plVar6 + 0xd70))(plVar6,*(undefined8 *)(this + 0x5a0),0);
        }
        if (*(long *)(this + 0x5a8) != 0) {
          plVar6 = (long *)RenderingServer::get_singleton();
          (**(code **)(*plVar6 + 0xd70))(plVar6,*(undefined8 *)(this + 0x5a8),0);
        }
      }
      else {
        _update_debug_mesh();
        _update_debug_edge_connections_mesh(this);
      }
    }
  }
  if ((set_navigation_mesh(Ref<NavigationMesh>const&)::{lambda()#1}::operator()()::sname == '\0') &&
     (iVar5 = __cxa_guard_acquire(&set_navigation_mesh(Ref<NavigationMesh>const&)::{lambda()#1}::
                                   operator()()::sname), iVar5 != 0)) {
    _scs_create((char *)&set_navigation_mesh(Ref<NavigationMesh>const&)::{lambda()#1}::operator()()
                         ::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &set_navigation_mesh(Ref<NavigationMesh>const&)::{lambda()#1}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&set_navigation_mesh(Ref<NavigationMesh>const&)::{lambda()#1}::operator()()
                         ::sname);
  }
  local_48 = 0;
  local_40 = (undefined1  [16])0x0;
  (**(code **)(*(long *)this + 0xd0))
            (this,&set_navigation_mesh(Ref<NavigationMesh>const&)::{lambda()#1}::operator()()::sname
             ,0,0);
  if (Variant::needs_deinit[(int)local_48] != '\0') {
    Variant::_clear_internal();
  }
  Node3D::update_gizmos();
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  Node::update_configuration_warnings();
  return;
}



/* NavigationRegion3D::_bake_finished(Ref<NavigationMesh>) */

void __thiscall NavigationRegion3D::_bake_finished(NavigationRegion3D *this,long *param_2)

{
  char cVar1;
  int iVar2;
  NavigationMesh *pNVar3;
  long in_FS_OFFSET;
  NavigationRegion3D aNStack_88 [16];
  Variant *local_78 [2];
  int local_68 [2];
  undefined1 local_60 [16];
  int local_50 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (PTR_caller_id_0011c010 != (undefined *)0x0) {
    Thread::caller_id();
  }
  if (*(long *)(in_FS_OFFSET + lRam0000000000105f9c) == 1) {
    set_navigation_mesh(this,(Ref *)param_2);
    if (_bake_finished(Ref<NavigationMesh>)::{lambda()#1}::operator()()::sname == '\0') {
      iVar2 = __cxa_guard_acquire(&_bake_finished(Ref<NavigationMesh>)::{lambda()#1}::operator()()::
                                   sname);
      if (iVar2 != 0) {
        _scs_create((char *)&_bake_finished(Ref<NavigationMesh>)::{lambda()#1}::operator()()::sname,
                    true);
        __cxa_atexit(StringName::~StringName,
                     &_bake_finished(Ref<NavigationMesh>)::{lambda()#1}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_bake_finished(Ref<NavigationMesh>)::{lambda()#1}::operator()()::sname)
        ;
      }
    }
    local_68[0] = 0;
    local_68[1] = 0;
    local_60 = (undefined1  [16])0x0;
    (**(code **)(*(long *)this + 0xd0))
              (this,&_bake_finished(Ref<NavigationMesh>)::{lambda()#1}::operator()()::sname,0,0);
    if (Variant::needs_deinit[local_68[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  else {
    create_custom_callable_function_pointer<NavigationRegion3D,Ref<NavigationMesh>>
              (aNStack_88,(char *)this,(_func_void_Ref *)"&NavigationRegion3D::_bake_finished");
    pNVar3 = (NavigationMesh *)*param_2;
    if (pNVar3 != (NavigationMesh *)0x0) {
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        pNVar3 = (NavigationMesh *)0x0;
      }
    }
    Variant::Variant((Variant *)local_68,(Object *)pNVar3);
    Variant::Variant((Variant *)local_50,0);
    local_78[0] = (Variant *)local_68;
    Callable::call_deferredp((Variant **)aNStack_88,(int)local_78);
    if (Variant::needs_deinit[local_50[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_68[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (pNVar3 != (NavigationMesh *)0x0) {
      cVar1 = RefCounted::unreference();
      if (cVar1 != '\0') {
        memdelete<NavigationMesh>(pNVar3);
      }
    }
    Callable::~Callable((Callable *)aNStack_88);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavigationRegion3D::_set(StringName const&, Variant const&) */

undefined4 NavigationRegion3D::_set(StringName *param_1,Variant *param_2)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  NavigationMesh *pNVar4;
  long in_FS_OFFSET;
  NavigationMesh *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = StringName::operator==((StringName *)param_2,"navmesh");
  if ((char)uVar2 != '\0') {
    local_28 = (NavigationMesh *)0x0;
    lVar3 = Variant::get_validated_object();
    if (lVar3 != 0) {
      pNVar4 = (NavigationMesh *)__dynamic_cast(lVar3,&Object::typeinfo,&NavigationMesh::typeinfo,0)
      ;
      if (pNVar4 != (NavigationMesh *)0x0) {
        local_28 = pNVar4;
        cVar1 = RefCounted::reference();
        if (cVar1 != '\0') {
          set_navigation_mesh((NavigationRegion3D *)param_1,(Ref *)&local_28);
          cVar1 = RefCounted::unreference();
          if (cVar1 != '\0') {
            memdelete<NavigationMesh>(pNVar4);
          }
          goto LAB_001061b7;
        }
        local_28 = (NavigationMesh *)0x0;
      }
    }
    set_navigation_mesh((NavigationRegion3D *)param_1,(Ref *)&local_28);
  }
LAB_001061b7:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavigationRegion3D::_navigation_debug_changed() */

void __thiscall NavigationRegion3D::_navigation_debug_changed(NavigationRegion3D *this)

{
  if (((byte)this[0x2fa] & 0x40) == 0) {
    return;
  }
  _update_debug_mesh();
  _update_debug_edge_connections_mesh(this);
  return;
}



/* NavigationRegion3D::_region_enter_navigation_map() [clone .part.0] */

void __thiscall NavigationRegion3D::_region_enter_navigation_map(NavigationRegion3D *this)

{
  long lVar1;
  code *pcVar2;
  char cVar3;
  long *plVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  Object *local_28;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x538) == 0) {
    plVar4 = (long *)NavigationServer3D::get_singleton();
    pcVar2 = *(code **)(*plVar4 + 0x2b0);
    Node3D::get_world_3d();
    uVar5 = World3D::get_navigation_map();
    (*pcVar2)(plVar4,*(undefined8 *)(this + 0x530),uVar5);
    if (local_28 != (Object *)0x0) {
      cVar3 = RefCounted::unreference();
      if (cVar3 != '\0') {
        cVar3 = predelete_handler(local_28);
        if (cVar3 != '\0') {
          (**(code **)(*(long *)local_28 + 0x140))(local_28);
          Memory::free_static(local_28,false);
        }
      }
    }
  }
  else {
    plVar4 = (long *)NavigationServer3D::get_singleton();
    (**(code **)(*plVar4 + 0x2b0))
              (plVar4,*(undefined8 *)(this + 0x530),*(undefined8 *)(this + 0x538));
  }
  Node3D::get_global_transform();
  *(undefined8 *)(this + 0x558) = local_58;
  *(undefined8 *)(this + 0x560) = uStack_50;
  *(undefined8 *)(this + 0x568) = local_48;
  *(undefined8 *)(this + 0x570) = uStack_40;
  *(undefined8 *)(this + 0x578) = local_38;
  *(undefined8 *)(this + 0x580) = uStack_30;
  plVar4 = (long *)NavigationServer3D::get_singleton();
  (**(code **)(*plVar4 + 0x2d0))(plVar4,*(undefined8 *)(this + 0x530));
  plVar4 = (long *)NavigationServer3D::get_singleton();
  (**(code **)(*plVar4 + 600))(plVar4,*(undefined8 *)(this + 0x530),this[0x528]);
  NavigationServer3D::get_singleton();
  cVar3 = NavigationServer3D::get_debug_navigation_enabled();
  if (cVar3 == '\0') {
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    _update_debug_mesh();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavigationRegion3D::_region_enter_navigation_map() */

void __thiscall NavigationRegion3D::_region_enter_navigation_map(NavigationRegion3D *this)

{
  if (((byte)this[0x2fa] & 0x40) != 0) {
    _region_enter_navigation_map(this);
    return;
  }
  return;
}



/* NavigationRegion3D::_notification(int) */

void __thiscall NavigationRegion3D::_notification(NavigationRegion3D *this,int param_1)

{
  if (param_1 == 0x1a) {
    Node::set_physics_process_internal(SUB81(this,0));
    if (((byte)this[0x2fa] & 0x40) == 0) {
      return;
    }
    _region_update_transform(this);
    return;
  }
  if (0x1a < param_1) {
    if (param_1 == 2000) {
      Node::set_physics_process_internal(SUB81(this,0));
      return;
    }
    return;
  }
  if (param_1 == 10) {
    if (((byte)this[0x2fa] & 0x40) != 0) {
      _region_enter_navigation_map(this);
      return;
    }
    return;
  }
  if (param_1 == 0xb) {
    _region_exit_navigation_map(this);
    return;
  }
  return;
}



/* NavigationRegion3D::get_configuration_warnings() const */

void NavigationRegion3D::get_configuration_warnings(void)

{
  CowData<char32_t> *this;
  char cVar1;
  int iVar2;
  long lVar3;
  long in_RSI;
  long lVar4;
  long in_RDI;
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Node::get_configuration_warnings();
  cVar1 = Node3D::is_visible_in_tree();
  if (((cVar1 == '\0') || ((*(byte *)(in_RSI + 0x2fa) & 0x40) == 0)) ||
     (*(long *)(in_RSI + 0x550) != 0)) goto LAB_00106562;
  local_60 = 0;
  local_50 = 0;
  local_58 = "";
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "A NavigationMesh resource must be set or created for this node to work.";
  local_68 = 0;
  local_50 = 0x47;
  String::parse_latin1((StrRange *)&local_68);
  RTR((String *)&local_58,(String *)&local_68);
  if (*(long *)(in_RDI + 8) == 0) {
    lVar4 = 1;
  }
  else {
    lVar4 = *(long *)(*(long *)(in_RDI + 8) + -8) + 1;
  }
  iVar2 = CowData<String>::resize<false>((CowData<String> *)(in_RDI + 8),lVar4);
  if (iVar2 == 0) {
    if (*(long *)(in_RDI + 8) == 0) {
      lVar3 = -1;
      lVar4 = 0;
    }
    else {
      lVar4 = *(long *)(*(long *)(in_RDI + 8) + -8);
      lVar3 = lVar4 + -1;
      if (-1 < lVar3) {
        CowData<String>::_copy_on_write((CowData<String> *)(in_RDI + 8));
        this = (CowData<char32_t> *)(*(long *)(in_RDI + 8) + lVar3 * 8);
        if (*(char **)this != local_58) {
          CowData<char32_t>::_ref(this,(CowData *)&local_58);
        }
        goto LAB_00106670;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar3,lVar4,"p_index","size()","",false,false
              );
  }
  else {
    _err_print_error("push_back","./core/templates/vector.h",0x142,
                     "Condition \"err\" is true. Returning: true",0,0);
  }
LAB_00106670:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
LAB_00106562:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
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



/* Resource::set_last_modified_time(unsigned long) */

void __thiscall Resource::set_last_modified_time(Resource *this,ulong param_1)

{
  *(ulong *)(this + 0x198) = param_1;
  return;
}



/* Resource::set_import_last_modified_time(unsigned long) */

void __thiscall Resource::set_import_last_modified_time(Resource *this,ulong param_1)

{
  *(ulong *)(this + 0x1a0) = param_1;
  return;
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



/* NavigationMesh::is_class_ptr(void*) const */

uint __thiscall NavigationMesh::is_class_ptr(NavigationMesh *this,void *param_1)

{
  return (uint)CONCAT71(0x116f,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x116f,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x116f,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x116f,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* NavigationMesh::_property_can_revertv(StringName const&) const */

undefined8 NavigationMesh::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* NavigationMesh::_property_get_revertv(StringName const&, Variant&) const */

undefined8 NavigationMesh::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* NavigationMesh::_notificationv(int, bool) */

void NavigationMesh::_notificationv(int param_1,bool param_2)

{
  return;
}



/* NavigationRegion3D::is_class_ptr(void*) const */

uint __thiscall NavigationRegion3D::is_class_ptr(NavigationRegion3D *this,void *param_1)

{
  return (uint)CONCAT71(0x116f,(undefined4 *)param_1 == &Node3D::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x116f,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x116f,(undefined4 *)param_1 == &Node::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x116f,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* NavigationRegion3D::get_bounds() const */

void NavigationRegion3D::get_bounds(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_RSI;
  undefined8 *in_RDI;
  
  uVar1 = *(undefined8 *)(in_RSI + 0x588);
  uVar2 = *(undefined8 *)(in_RSI + 0x590);
  in_RDI[2] = *(undefined8 *)(in_RSI + 0x598);
  *in_RDI = uVar1;
  in_RDI[1] = uVar2;
  return;
}



/* NavigationMeshSourceGeometryData3D::is_class_ptr(void*) const */

uint __thiscall
NavigationMeshSourceGeometryData3D::is_class_ptr
          (NavigationMeshSourceGeometryData3D *this,void *param_1)

{
  return (uint)CONCAT71(0x116f,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x116f,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x116f,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x116f,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* NavigationMeshSourceGeometryData3D::_validate_propertyv(PropertyInfo&) const */

void NavigationMeshSourceGeometryData3D::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* NavigationMeshSourceGeometryData3D::_property_can_revertv(StringName const&) const */

undefined8 NavigationMeshSourceGeometryData3D::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* NavigationMeshSourceGeometryData3D::_property_get_revertv(StringName const&, Variant&) const */

undefined8
NavigationMeshSourceGeometryData3D::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* NavigationMeshSourceGeometryData3D::_notificationv(int, bool) */

void NavigationMeshSourceGeometryData3D::_notificationv(int param_1,bool param_2)

{
  return;
}



/* CallableCustomMethodPointer<NavigationRegion3D, void, RID>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<NavigationRegion3D,void,RID>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<NavigationRegion3D,void,RID> *this)

{
  return;
}



/* CallableCustomMethodPointer<NavigationRegion3D, void, Ref<NavigationMesh>
   >::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<NavigationRegion3D,void,Ref<NavigationMesh>>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<NavigationRegion3D,void,Ref<NavigationMesh>> *this)

{
  return;
}



/* CallableCustomMethodPointer<NavigationRegion3D, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<NavigationRegion3D,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<NavigationRegion3D,void> *this)

{
  return;
}



/* MethodBindTRC<AABB>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<AABB>::_gen_argument_type(int param_1)

{
  return 0x10;
}



/* MethodBindTRC<AABB>::get_argument_meta(int) const */

undefined8 MethodBindTRC<AABB>::get_argument_meta(int param_1)

{
  return 0;
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



/* MethodBindTRC<bool, int>::_gen_argument_type(int) const */

char __thiscall
MethodBindTRC<bool,int>::_gen_argument_type(MethodBindTRC<bool,int> *this,int param_1)

{
  return (param_1 == 0) + '\x01';
}



/* MethodBindTRC<bool, int>::get_argument_meta(int) const */

byte __thiscall
MethodBindTRC<bool,int>::get_argument_meta(MethodBindTRC<bool,int> *this,int param_1)

{
  return -(param_1 == 0) & 3;
}



/* MethodBindT<int, bool>::_gen_argument_type(int) const */

char __thiscall MethodBindT<int,bool>::_gen_argument_type(MethodBindT<int,bool> *this,int param_1)

{
  char cVar1;
  
  cVar1 = (param_1 == 0) + '\x01';
  if (1 < (uint)param_1) {
    cVar1 = '\0';
  }
  return cVar1;
}



/* MethodBindT<int, bool>::get_argument_meta(int) const */

byte __thiscall MethodBindT<int,bool>::get_argument_meta(MethodBindT<int,bool> *this,int param_1)

{
  return -(param_1 == 0) & 3;
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



/* MethodBindT<RID>::_gen_argument_type(int) const */

byte __thiscall MethodBindT<RID>::_gen_argument_type(MethodBindT<RID> *this,int param_1)

{
  return -(param_1 == 0) & 0x17;
}



/* MethodBindT<RID>::get_argument_meta(int) const */

undefined8 MethodBindT<RID>::get_argument_meta(int param_1)

{
  return 0;
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



/* MethodBindTRC<Ref<NavigationMesh>>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<Ref<NavigationMesh>>::_gen_argument_type(int param_1)

{
  return 0x18;
}



/* MethodBindTRC<Ref<NavigationMesh>>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Ref<NavigationMesh>>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Ref<NavigationMesh> const&>::_gen_argument_type(int) const */

byte __thiscall
MethodBindT<Ref<NavigationMesh>const&>::_gen_argument_type
          (MethodBindT<Ref<NavigationMesh>const&> *this,int param_1)

{
  return -(param_1 == 0) & 0x18;
}



/* MethodBindT<Ref<NavigationMesh> const&>::get_argument_meta(int) const */

undefined8 MethodBindT<Ref<NavigationMesh>const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<RID>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<RID>::_gen_argument_type(int param_1)

{
  return 0x17;
}



/* MethodBindTRC<RID>::get_argument_meta(int) const */

undefined8 MethodBindTRC<RID>::get_argument_meta(int param_1)

{
  return 0;
}



/* CallableCustomMethodPointer<NavigationRegion3D, void, RID>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<NavigationRegion3D,void,RID>::get_argument_count
          (CallableCustomMethodPointer<NavigationRegion3D,void,RID> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<NavigationRegion3D, void, Ref<NavigationMesh>
   >::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<NavigationRegion3D,void,Ref<NavigationMesh>>::get_argument_count
          (CallableCustomMethodPointer<NavigationRegion3D,void,Ref<NavigationMesh>> *this,
          bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<NavigationRegion3D, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<NavigationRegion3D,void>::get_argument_count
          (CallableCustomMethodPointer<NavigationRegion3D,void> *this,bool *param_1)

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



/* CallableCustomMethodPointer<NavigationRegion3D, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<NavigationRegion3D,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<NavigationRegion3D,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<NavigationRegion3D, void, Ref<NavigationMesh>
   >::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<NavigationRegion3D,void,Ref<NavigationMesh>>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<NavigationRegion3D,void,Ref<NavigationMesh>> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<NavigationRegion3D, void, RID>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<NavigationRegion3D,void,RID>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<NavigationRegion3D,void,RID> *this)

{
  operator_delete(this,0x48);
  return;
}



/* NavigationMesh::_validate_propertyv(PropertyInfo&) const */

void NavigationMesh::_validate_propertyv(PropertyInfo *param_1)

{
  if ((code *)PTR__validate_property_0011c018 != Object::_validate_property) {
    NavigationMesh::_validate_property(param_1);
    return;
  }
  return;
}



/* NavigationMesh::_getv(StringName const&, Variant&) const */

undefined8 NavigationMesh::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__get_0011c020 != Object::_get) {
    uVar1 = NavigationMesh::_get(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* NavigationMesh::_setv(StringName const&, Variant const&) */

undefined8 NavigationMesh::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__set_0011c028 != Object::_set) {
    uVar1 = NavigationMesh::_set(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* NavigationMeshSourceGeometryData3D::_getv(StringName const&, Variant&) const */

undefined8 NavigationMeshSourceGeometryData3D::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__get_0011c030 != Object::_get) {
    uVar1 = NavigationMeshSourceGeometryData3D::_get(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* NavigationMeshSourceGeometryData3D::_setv(StringName const&, Variant const&) */

undefined8 NavigationMeshSourceGeometryData3D::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__set_0011c038 != Object::_set) {
    uVar1 = NavigationMeshSourceGeometryData3D::_set(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* MethodBindT<Ref<NavigationMesh> const&>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<NavigationMesh>const&>::~MethodBindT(MethodBindT<Ref<NavigationMesh>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00116a90;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Ref<NavigationMesh> const&>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<NavigationMesh>const&>::~MethodBindT(MethodBindT<Ref<NavigationMesh>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00116a90;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Ref<NavigationMesh>>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Ref<NavigationMesh>>::~MethodBindTRC(MethodBindTRC<Ref<NavigationMesh>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00116af0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Ref<NavigationMesh>>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Ref<NavigationMesh>>::~MethodBindTRC(MethodBindTRC<Ref<NavigationMesh>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00116af0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<RID>::~MethodBindT() */

void __thiscall MethodBindT<RID>::~MethodBindT(MethodBindT<RID> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00116c10;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<RID>::~MethodBindT() */

void __thiscall MethodBindT<RID>::~MethodBindT(MethodBindT<RID> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00116c10;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<bool>::~MethodBindT() */

void __thiscall MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00116b50;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<bool>::~MethodBindT() */

void __thiscall MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00116b50;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<unsigned int>::~MethodBindT() */

void __thiscall MethodBindT<unsigned_int>::~MethodBindT(MethodBindT<unsigned_int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00116c70;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<unsigned int>::~MethodBindT() */

void __thiscall MethodBindT<unsigned_int>::~MethodBindT(MethodBindT<unsigned_int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00116c70;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<unsigned int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<unsigned_int>::~MethodBindTRC(MethodBindTRC<unsigned_int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00116cd0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<unsigned int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<unsigned_int>::~MethodBindTRC(MethodBindTRC<unsigned_int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00116cd0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<int, bool>::~MethodBindT() */

void __thiscall MethodBindT<int,bool>::~MethodBindT(MethodBindT<int,bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00116d30;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<int, bool>::~MethodBindT() */

void __thiscall MethodBindT<int,bool>::~MethodBindT(MethodBindT<int,bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00116d30;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<bool, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool,int>::~MethodBindTRC(MethodBindTRC<bool,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00116d90;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<bool, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool,int>::~MethodBindTRC(MethodBindTRC<bool,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00116d90;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<RID>::~MethodBindTRC() */

void __thiscall MethodBindTRC<RID>::~MethodBindTRC(MethodBindTRC<RID> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00116a30;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<RID>::~MethodBindTRC() */

void __thiscall MethodBindTRC<RID>::~MethodBindTRC(MethodBindTRC<RID> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00116a30;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<float>::~MethodBindT() */

void __thiscall MethodBindT<float>::~MethodBindT(MethodBindT<float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00116df0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<float>::~MethodBindT() */

void __thiscall MethodBindT<float>::~MethodBindT(MethodBindT<float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00116df0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<float>::~MethodBindTRC() */

void __thiscall MethodBindTRC<float>::~MethodBindTRC(MethodBindTRC<float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00116e50;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<float>::~MethodBindTRC() */

void __thiscall MethodBindTRC<float>::~MethodBindTRC(MethodBindTRC<float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00116e50;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00116bb0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00116bb0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<AABB>::~MethodBindTRC() */

void __thiscall MethodBindTRC<AABB>::~MethodBindTRC(MethodBindTRC<AABB> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00116eb0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<AABB>::~MethodBindTRC() */

void __thiscall MethodBindTRC<AABB>::~MethodBindTRC(MethodBindTRC<AABB> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00116eb0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* NavigationRegion3D::_property_get_revertv(StringName const&, Variant&) const */

undefined8 NavigationRegion3D::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_0011c040 != Object::_property_get_revert) {
    uVar1 = Node3D::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* NavigationRegion3D::_property_can_revertv(StringName const&) const */

undefined8 NavigationRegion3D::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0011c048 != Object::_property_can_revert) {
    uVar1 = Node3D::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* CallableCustomMethodPointer<NavigationRegion3D, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<NavigationRegion3D,void>::get_object
          (CallableCustomMethodPointer<NavigationRegion3D,void> *this)

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
      goto LAB_00107b9d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00107b9d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00107b9d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<NavigationRegion3D, void, RID>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<NavigationRegion3D,void,RID>::get_object
          (CallableCustomMethodPointer<NavigationRegion3D,void,RID> *this)

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
      goto LAB_00107c9d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00107c9d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00107c9d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<NavigationRegion3D, void, Ref<NavigationMesh> >::get_object() const
    */

undefined8 __thiscall
CallableCustomMethodPointer<NavigationRegion3D,void,Ref<NavigationMesh>>::get_object
          (CallableCustomMethodPointer<NavigationRegion3D,void,Ref<NavigationMesh>> *this)

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
      goto LAB_00107d9d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00107d9d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00107d9d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* NavigationRegion3D::_validate_propertyv(PropertyInfo&) const */

void NavigationRegion3D::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  if ((code *)PTR__validate_property_0011c050 == Node::_validate_property) {
    return;
  }
  Node3D::_validate_property(param_1);
  return;
}



/* Resource::get_base_extension() const */

Resource * __thiscall Resource::get_base_extension(Resource *this)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)this = 0;
  String::parse_latin1((StrRange *)this);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
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



/* NavigationMeshSourceGeometryData3D::_get_class_namev() const */

undefined8 * NavigationMeshSourceGeometryData3D::_get_class_namev(void)

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
LAB_00107f83:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00107f83;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "NavigationMeshSourceGeometryData3D");
      goto LAB_00107fee;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,
             "NavigationMeshSourceGeometryData3D");
LAB_00107fee:
  return &_get_class_namev()::_class_name_static;
}



/* NavigationMesh::_get_class_namev() const */

undefined8 * NavigationMesh::_get_class_namev(void)

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
LAB_00108073:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00108073;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"NavigationMesh");
      goto LAB_001080de;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"NavigationMesh");
LAB_001080de:
  return &_get_class_namev()::_class_name_static;
}



/* NavigationRegion3D::_get_class_namev() const */

undefined8 * NavigationRegion3D::_get_class_namev(void)

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
LAB_00108163:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00108163;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"NavigationRegion3D");
      goto LAB_001081ce;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"NavigationRegion3D");
LAB_001081ce:
  return &_get_class_namev()::_class_name_static;
}



/* NavigationMeshSourceGeometryData3D::~NavigationMeshSourceGeometryData3D() */

void __thiscall
NavigationMeshSourceGeometryData3D::~NavigationMeshSourceGeometryData3D
          (NavigationMeshSourceGeometryData3D *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  
  *(undefined ***)this = &PTR__initialize_classv_001164c0;
  NavigationMeshSourceGeometryData3D::clear();
  if (*(long *)(this + 0x2c0) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x2c0) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x2c0);
      if (lVar2 == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      lVar3 = *(long *)(lVar2 + -8);
      *(undefined8 *)(this + 0x2c0) = 0;
      if (lVar3 != 0) {
        lVar7 = 0;
        lVar6 = lVar2;
        do {
          if (*(long *)(lVar6 + 8) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(lVar6 + 8) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar4 = *(long *)(lVar6 + 8);
              *(undefined8 *)(lVar6 + 8) = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          lVar7 = lVar7 + 1;
          lVar6 = lVar6 + 0x20;
        } while (lVar3 != lVar7);
      }
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x290) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x290) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x290);
      *(undefined8 *)(this + 0x290) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x280) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x280) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x280);
      *(undefined8 *)(this + 0x280) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      Resource::~Resource((Resource *)this);
      return;
    }
  }
  Resource::~Resource((Resource *)this);
  return;
}



/* NavigationMeshSourceGeometryData3D::~NavigationMeshSourceGeometryData3D() */

void __thiscall
NavigationMeshSourceGeometryData3D::~NavigationMeshSourceGeometryData3D
          (NavigationMeshSourceGeometryData3D *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  
  *(undefined ***)this = &PTR__initialize_classv_001164c0;
  NavigationMeshSourceGeometryData3D::clear();
  if (*(long *)(this + 0x2c0) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x2c0) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x2c0);
      if (lVar2 == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      lVar3 = *(long *)(lVar2 + -8);
      *(undefined8 *)(this + 0x2c0) = 0;
      if (lVar3 != 0) {
        lVar7 = 0;
        lVar6 = lVar2;
        do {
          if (*(long *)(lVar6 + 8) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(lVar6 + 8) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar4 = *(long *)(lVar6 + 8);
              *(undefined8 *)(lVar6 + 8) = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          lVar7 = lVar7 + 1;
          lVar6 = lVar6 + 0x20;
        } while (lVar3 != lVar7);
      }
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x290) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x290) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x290);
      *(undefined8 *)(this + 0x290) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x280) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x280) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x280);
      *(undefined8 *)(this + 0x280) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  Resource::~Resource((Resource *)this);
  operator_delete(this,0x2f8);
  return;
}



/* NavigationMesh::~NavigationMesh() */

void __thiscall NavigationMesh::~NavigationMesh(NavigationMesh *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  Object *pOVar5;
  code *pcVar6;
  char cVar7;
  long lVar8;
  long lVar9;
  bool bVar10;
  
  bVar10 = StringName::configured != '\0';
  *(undefined ***)this = &PTR__initialize_classv_001162e8;
  if ((bVar10) && (*(long *)(this + 0x2e8) != 0)) {
    StringName::unref();
  }
  if (*(long *)(this + 0x298) != 0) {
    cVar7 = RefCounted::unreference();
    if (cVar7 != '\0') {
      pOVar5 = *(Object **)(this + 0x298);
      cVar7 = predelete_handler(pOVar5);
      if (cVar7 != '\0') {
        (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
        Memory::free_static(pOVar5,false);
      }
    }
  }
  if (*(long *)(this + 0x290) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x290) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x290);
      if (lVar2 == 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)invalidInstructionException();
        (*pcVar6)();
      }
      lVar3 = *(long *)(lVar2 + -8);
      *(undefined8 *)(this + 0x290) = 0;
      if (lVar3 != 0) {
        lVar9 = 0;
        lVar8 = lVar2;
        do {
          if (*(long *)(lVar8 + 8) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(lVar8 + 8) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar4 = *(long *)(lVar8 + 8);
              *(undefined8 *)(lVar8 + 8) = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          lVar9 = lVar9 + 1;
          lVar8 = lVar8 + 0x10;
        } while (lVar3 != lVar9);
      }
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x280) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x280) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x280);
      *(undefined8 *)(this + 0x280) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      Resource::~Resource((Resource *)this);
      return;
    }
  }
  Resource::~Resource((Resource *)this);
  return;
}



/* NavigationMesh::~NavigationMesh() */

void __thiscall NavigationMesh::~NavigationMesh(NavigationMesh *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  Object *pOVar5;
  code *pcVar6;
  char cVar7;
  long lVar8;
  long lVar9;
  bool bVar10;
  
  bVar10 = StringName::configured != '\0';
  *(undefined ***)this = &PTR__initialize_classv_001162e8;
  if ((bVar10) && (*(long *)(this + 0x2e8) != 0)) {
    StringName::unref();
  }
  if (*(long *)(this + 0x298) != 0) {
    cVar7 = RefCounted::unreference();
    if (cVar7 != '\0') {
      pOVar5 = *(Object **)(this + 0x298);
      cVar7 = predelete_handler(pOVar5);
      if (cVar7 != '\0') {
        (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
        Memory::free_static(pOVar5,false);
      }
    }
  }
  if (*(long *)(this + 0x290) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x290) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x290);
      if (lVar2 == 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)invalidInstructionException();
        (*pcVar6)();
      }
      lVar3 = *(long *)(lVar2 + -8);
      *(undefined8 *)(this + 0x290) = 0;
      if (lVar3 != 0) {
        lVar9 = 0;
        lVar8 = lVar2;
        do {
          if (*(long *)(lVar8 + 8) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(lVar8 + 8) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar4 = *(long *)(lVar8 + 8);
              *(undefined8 *)(lVar8 + 8) = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          lVar9 = lVar9 + 1;
          lVar8 = lVar8 + 0x10;
        } while (lVar3 != lVar9);
      }
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x280) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x280) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x280);
      *(undefined8 *)(this + 0x280) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  Resource::~Resource((Resource *)this);
  operator_delete(this,0x318);
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



/* NavigationMesh::get_class() const */

void NavigationMesh::get_class(void)

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



/* NavigationRegion3D::get_class() const */

void NavigationRegion3D::get_class(void)

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



/* NavigationMeshSourceGeometryData3D::get_class() const */

void NavigationMeshSourceGeometryData3D::get_class(void)

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
  local_48 = &_LC23;
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
      goto joined_r0x00108c2c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x00108c2c:
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



/* MethodBindTRC<unsigned int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<unsigned_int>::_gen_argument_type_info(int param_1)

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
  local_48 = &_LC23;
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
      goto joined_r0x00108dac;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x00108dac:
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



/* MethodBindTRC<AABB>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<AABB>::_gen_argument_type_info(int param_1)

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
  local_48 = &_LC23;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 0x10;
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
      goto joined_r0x00108f2c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x00108f2c:
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
  local_48 = &_LC23;
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
      goto joined_r0x001090ac;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x001090ac:
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



/* MethodBindTRC<Ref<NavigationMesh>>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Ref<NavigationMesh>>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = "NavigationMesh";
  local_40 = 0xe;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 0x18;
  puVar3[6] = 0x11;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar3[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_58);
    puVar3[10] = 6;
    if (puVar3[6] != 0x11) {
      StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
      goto LAB_001091a0;
    }
  }
  StringName::StringName((StringName *)&local_48,(String *)(puVar3 + 8),false);
  if (*(char **)(puVar3 + 4) == local_48) {
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  else {
    StringName::unref();
    *(char **)(puVar3 + 4) = local_48;
  }
LAB_001091a0:
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
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<RID>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<RID>::_gen_argument_type_info(int param_1)

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
  local_48 = &_LC23;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 0x17;
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
      goto joined_r0x001093bc;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x001093bc:
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



/* Variant::TEMPNAMEPLACEHOLDERVALUE(Variant&&) */

void __thiscall Variant::operator=(Variant *this,Variant *param_1)

{
  undefined8 uVar1;
  
  if (this != param_1) {
    if (needs_deinit[*(int *)this] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)this = 0;
    *(undefined4 *)this = *(undefined4 *)param_1;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(this + 0x10) = uVar1;
    *(undefined4 *)param_1 = 0;
    return;
  }
  return;
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



/* Object::is_class(String const&) const */

ulong __thiscall Object::is_class(Object *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *__s;
  long lVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long in_FS_OFFSET;
  bool bVar8;
  long local_50;
  char *local_48;
  size_t local_40;
  long local_30;
  
  lVar2 = *(long *)(this + 8);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  do {
    if (lVar2 == 0) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = String::operator==(param_1,"Object");
        return uVar7;
      }
LAB_0010977f:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    lVar3 = *(long *)(lVar2 + 0x20);
    if (lVar3 == 0) {
      local_50 = 0;
    }
    else {
      __s = *(char **)(lVar3 + 8);
      local_50 = 0;
      if (__s == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar3 + 0x10) + -0x10);
        if (*(long *)(lVar3 + 0x10) != 0) {
          do {
            lVar4 = *plVar1;
            if (lVar4 == 0) goto LAB_00109693;
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
            local_50 = *(long *)(lVar3 + 0x10);
          }
        }
      }
      else {
        local_40 = strlen(__s);
        local_48 = __s;
        String::parse_latin1((StrRange *)&local_50);
      }
    }
LAB_00109693:
    uVar5 = String::operator==(param_1,(String *)&local_50);
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
    if ((char)uVar5 != '\0') {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return (ulong)uVar5;
      }
      goto LAB_0010977f;
    }
    lVar2 = *(long *)(lVar2 + 8);
  } while( true );
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
            if (lVar5 == 0) goto LAB_001097ff;
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
LAB_001097ff:
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
    if (cVar6 != '\0') goto LAB_001098b3;
  }
  cVar6 = String::operator==(param_1,"RefCounted");
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
              if (lVar5 == 0) goto LAB_00109963;
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
LAB_00109963:
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
      if (cVar6 != '\0') goto LAB_001098b3;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==(param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_001098b3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Resource::is_class(String const&) const */

undefined8 __thiscall Resource::is_class(Resource *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_00109a8f;
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
LAB_00109a8f:
    cVar5 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar5 != '\0') goto LAB_00109b43;
  }
  cVar5 = String::operator==(param_1,"Resource");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00109b43:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavigationMesh::is_class(String const&) const */

undefined8 __thiscall NavigationMesh::is_class(NavigationMesh *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_00109c0f;
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
LAB_00109c0f:
    cVar5 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar5 != '\0') goto LAB_00109cc3;
  }
  cVar5 = String::operator==(param_1,"NavigationMesh");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = Resource::is_class((Resource *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00109cc3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavigationMeshSourceGeometryData3D::is_class(String const&) const */

undefined8 __thiscall
NavigationMeshSourceGeometryData3D::is_class
          (NavigationMeshSourceGeometryData3D *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_00109d8f;
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
LAB_00109d8f:
    cVar5 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar5 != '\0') goto LAB_00109e43;
  }
  cVar5 = String::operator==(param_1,"NavigationMeshSourceGeometryData3D");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = Resource::is_class((Resource *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00109e43:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
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



/* Callable create_custom_callable_function_pointer<NavigationRegion3D>(NavigationRegion3D*, char
   const*, void (NavigationRegion3D::*)()) */

NavigationRegion3D *
create_custom_callable_function_pointer<NavigationRegion3D>
          (NavigationRegion3D *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC23;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00116880;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_void **)(this + 0x20) = param_3 + 1;
  Callable::Callable((Callable *)param_1,this);
  return param_1;
}



/* Callable create_custom_callable_function_pointer<NavigationRegion3D, Ref<NavigationMesh>
   >(NavigationRegion3D*, char const*, void (NavigationRegion3D::*)(Ref<NavigationMesh>)) */

NavigationRegion3D *
create_custom_callable_function_pointer<NavigationRegion3D,Ref<NavigationMesh>>
          (NavigationRegion3D *param_1,char *param_2,_func_void_Ref *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC23;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00116910;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_void_Ref **)(this + 0x20) = param_3 + 1;
  Callable::Callable((Callable *)param_1,this);
  return param_1;
}



/* Callable create_custom_callable_function_pointer<NavigationRegion3D, RID>(NavigationRegion3D*,
   char const*, void (NavigationRegion3D::*)(RID)) */

NavigationRegion3D *
create_custom_callable_function_pointer<NavigationRegion3D,RID>
          (NavigationRegion3D *param_1,char *param_2,_func_void_RID *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC23;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_001169a0;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_void_RID **)(this + 0x20) = param_3 + 1;
  Callable::Callable((Callable *)param_1,this);
  return param_1;
}



/* void Ref<ArrayMesh>::instantiate<>() */

void __thiscall Ref<ArrayMesh>::instantiate<>(Ref<ArrayMesh> *this)

{
  char cVar1;
  ArrayMesh *this_00;
  Object *pOVar2;
  Object *pOVar3;
  
  this_00 = (ArrayMesh *)operator_new(0x430,"");
  ArrayMesh::ArrayMesh(this_00);
  postinitialize_handler((Object *)this_00);
  cVar1 = RefCounted::init_ref();
  if (cVar1 == '\0') {
    pOVar3 = *(Object **)this;
    if (pOVar3 == (Object *)0x0) {
      return;
    }
    *(undefined8 *)this = 0;
    cVar1 = RefCounted::unreference();
    if (cVar1 == '\0') {
      return;
    }
    this_00 = (ArrayMesh *)0x0;
    cVar1 = predelete_handler(pOVar3);
    if (cVar1 == '\0') {
      return;
    }
  }
  else {
    pOVar3 = *(Object **)this;
    pOVar2 = pOVar3;
    if (this_00 == (ArrayMesh *)pOVar3) goto LAB_0010a235;
    *(ArrayMesh **)this = this_00;
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *(undefined8 *)this = 0;
    }
    pOVar2 = (Object *)this_00;
    if (((pOVar3 == (Object *)0x0) || (cVar1 = RefCounted::unreference(), cVar1 == '\0')) ||
       (cVar1 = predelete_handler(pOVar3), cVar1 == '\0')) goto LAB_0010a235;
  }
  (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
  Memory::free_static(pOVar3,false);
  pOVar2 = (Object *)this_00;
  if (this_00 == (ArrayMesh *)0x0) {
    return;
  }
LAB_0010a235:
  cVar1 = RefCounted::unreference();
  if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar2), cVar1 != '\0')) {
    (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
    Memory::free_static(pOVar2,false);
    return;
  }
  return;
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



/* NavigationMesh::_initialize_classv() */

void NavigationMesh::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (Resource::initialize_class()::initialized == '\0') {
      Resource::initialize_class();
    }
    local_58 = 0;
    local_40 = 8;
    local_48 = "Resource";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "NavigationMesh";
    local_60 = 0;
    local_40 = 0xe;
    String::parse_latin1((StrRange *)&local_60);
    StringName::StringName((StringName *)&local_48,(String *)&local_60,false);
    ClassDB::_add_class2((StringName *)&local_48,(StringName *)&local_50);
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if ((StringName::configured != '\0') && (local_50 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    if ((code *)PTR__bind_methods_0011c058 != Resource::_bind_methods) {
      NavigationMesh::_bind_methods();
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavigationMeshSourceGeometryData3D::_initialize_classv() */

void NavigationMeshSourceGeometryData3D::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (Resource::initialize_class()::initialized == '\0') {
      Resource::initialize_class();
    }
    local_58 = 0;
    local_40 = 8;
    local_48 = "Resource";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "NavigationMeshSourceGeometryData3D";
    local_60 = 0;
    local_40 = 0x22;
    String::parse_latin1((StrRange *)&local_60);
    StringName::StringName((StringName *)&local_48,(String *)&local_60,false);
    ClassDB::_add_class2((StringName *)&local_48,(StringName *)&local_50);
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if ((StringName::configured != '\0') && (local_50 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    if ((code *)PTR__bind_methods_0011c060 != Resource::_bind_methods) {
      NavigationMeshSourceGeometryData3D::_bind_methods();
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<NavigationRegion3D, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<NavigationRegion3D,void>::call
          (CallableCustomMethodPointer<NavigationRegion3D,void> *this,Variant **param_1,int param_2,
          Variant *param_3,CallError *param_4)

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
      goto LAB_0010a78f;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0010a78f;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010a768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_0010a851;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0010a78f:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC40,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0010a851:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<NavigationRegion3D, void, RID>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<NavigationRegion3D,void,RID>::call
          (CallableCustomMethodPointer<NavigationRegion3D,void,RID> *this,Variant **param_1,
          int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  char cVar4;
  undefined8 uVar5;
  uint uVar6;
  ulong *puVar7;
  code *UNRECOVERED_JUMPTABLE;
  long in_FS_OFFSET;
  bool bVar8;
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar6 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar3 = (ulong)local_48 >> 8;
      local_48 = (char *)(uVar3 << 8);
      LOCK();
      bVar8 = (char)ObjectDB::spin_lock == '\0';
      if (bVar8) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar8) break;
      local_48 = (char *)(uVar3 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar7 = (ulong *)((ulong)uVar6 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar7 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0010aa19;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar7[1] == 0) goto LAB_0010aa19;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if ((uint)param_2 < 2) {
      if (param_2 != 0) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,0x17);
        uVar5 = _LC41;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar5;
        }
        uVar5 = Variant::operator_cast_to_RID(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010a9c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5);
          return;
        }
        goto LAB_0010aadb;
      }
      *(undefined4 *)param_4 = 4;
      *(undefined4 *)(param_4 + 8) = 1;
    }
    else {
      *(undefined4 *)param_4 = 3;
      *(undefined4 *)(param_4 + 8) = 1;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0010aa19:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC40,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0010aadb:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<RID>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<RID>::_gen_argument_type_info(int param_1)

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
  if (in_EDX != 0) goto LAB_0010ab2b;
  local_78 = 0;
  local_80 = 0;
  local_68 = &_LC23;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,0x17);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_0010ac20:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_0010ac20;
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
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
LAB_0010ab2b:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
}



/* NavigationRegion3D::is_class(String const&) const */

undefined8 __thiscall NavigationRegion3D::is_class(NavigationRegion3D *this,String *param_1)

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
            if (lVar3 == 0) goto LAB_0010ad9f;
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
LAB_0010ad9f:
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
    if (cVar6 != '\0') goto LAB_0010ae53;
  }
  cVar6 = String::operator==(param_1,"NavigationRegion3D");
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
      if (cVar6 != '\0') goto LAB_0010ae53;
    }
    cVar6 = String::operator==(param_1,"Node3D");
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
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        if (cVar6 != '\0') goto LAB_0010ae53;
      }
      cVar6 = String::operator==(param_1,"Node");
      if (cVar6 == '\0') {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar8 = Object::is_class((Object *)this,param_1);
          return uVar8;
        }
        goto LAB_0010b045;
      }
    }
  }
LAB_0010ae53:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010b045:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<NavigationMesh> const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<Ref<NavigationMesh>const&>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  long lVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  undefined8 local_88;
  long local_80;
  long local_78;
  long local_70;
  char *local_68;
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar4 = 0;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  puVar4[10] = 6;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (in_EDX != 0) goto LAB_0010b09b;
  local_78 = 0;
  local_80 = 0;
  local_68 = "NavigationMesh";
  local_60._0_8_ = 0xe;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (char *)CONCAT44(local_68._4_4_,0x18);
  local_50 = 0x11;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_0010b235:
    local_40 = 6;
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
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 == 0x11) goto LAB_0010b235;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *puVar4 = local_68._0_4_;
  if (*(long *)(puVar4 + 2) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar4 + 2));
    uVar2 = local_60._0_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_60._8_8_;
    local_60 = auVar1 << 0x40;
    *(undefined8 *)(puVar4 + 2) = uVar2;
  }
  if (*(long *)(puVar4 + 4) != local_60._8_8_) {
    StringName::unref();
    uVar2 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(puVar4 + 4) = uVar2;
  }
  puVar4[6] = local_50;
  if (*(long *)(puVar4 + 8) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar4 + 8));
    lVar3 = local_48;
    local_48 = 0;
    *(long *)(puVar4 + 8) = lVar3;
  }
  puVar4[10] = local_40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
LAB_0010b09b:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar4;
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
  if (in_EDX != 0) goto LAB_0010b2eb;
  local_78 = 0;
  local_80 = 0;
  local_68 = &_LC23;
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
LAB_0010b3e0:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_0010b3e0;
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
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
LAB_0010b2eb:
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
  if (in_EDX != 0) goto LAB_0010b52b;
  local_78 = 0;
  local_80 = 0;
  local_68 = &_LC23;
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
LAB_0010b620:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_0010b620;
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
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
LAB_0010b52b:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
}



/* MethodBindT<bool>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<bool>::_gen_argument_type_info(int param_1)

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
  if (in_EDX != 0) goto LAB_0010b76b;
  local_78 = 0;
  local_80 = 0;
  local_68 = &_LC23;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,1);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_0010b860:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_0010b860;
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
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
LAB_0010b76b:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
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
  local_78 = &_LC43;
  local_88 = 0;
  local_90 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC43;
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
LAB_0010baed:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010baed;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar5;
      local_68 = local_80;
      goto joined_r0x0010bb0f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar5;
joined_r0x0010bb0f:
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



/* RefCounted::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void RefCounted::_get_property_listv(List *param_1,bool param_2)

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
  char *local_78;
  long local_70;
  long local_68;
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  pLVar5 = (List *)CONCAT71(in_register_00000031,param_2);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = "RefCounted";
  local_88 = 0;
  local_90 = 0;
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
LAB_0010be5d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010be5d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar5;
      local_68 = local_80;
      goto joined_r0x0010be7f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar5;
joined_r0x0010be7f:
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
  StringName::StringName((StringName *)&local_78,"RefCounted",false);
  ClassDB::get_property_list((StringName *)&local_78,pLVar5,true,(Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Resource::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Resource::_get_property_listv(Resource *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
  undefined4 *puVar4;
  long in_FS_OFFSET;
  StringName *local_a8;
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
  local_78 = "Resource";
  local_70 = 8;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Resource";
  local_98 = 0;
  local_70 = 8;
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
LAB_0010c1dd:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010c1dd;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0010c1ff;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0010c1ff:
  if (lVar2 == 0) {
    pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar3;
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
  plVar1 = *(long **)param_1;
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
  StringName::StringName((StringName *)&local_78,"Resource",false);
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



/* NavigationMeshSourceGeometryData3D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*,
   bool) const */

void __thiscall
NavigationMeshSourceGeometryData3D::_get_property_listv
          (NavigationMeshSourceGeometryData3D *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
  undefined4 *puVar4;
  long in_FS_OFFSET;
  StringName *local_a8;
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
    Resource::_get_property_listv((Resource *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "NavigationMeshSourceGeometryData3D";
  local_70 = 0x22;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "NavigationMeshSourceGeometryData3D";
  local_98 = 0;
  local_70 = 0x22;
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
LAB_0010c5bd:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010c5bd;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0010c5df;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0010c5df:
  if (lVar2 == 0) {
    pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar3;
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
  plVar1 = *(long **)param_1;
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
  StringName::StringName((StringName *)&local_78,"NavigationMeshSourceGeometryData3D",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Resource::_get_property_listv((Resource *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavigationMesh::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall NavigationMesh::_get_property_listv(NavigationMesh *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
  undefined4 *puVar4;
  long in_FS_OFFSET;
  StringName *local_a8;
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
    Resource::_get_property_listv((Resource *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "NavigationMesh";
  local_70 = 0xe;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "NavigationMesh";
  local_98 = 0;
  local_70 = 0xe;
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
LAB_0010c99d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010c99d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0010c9bf;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0010c9bf:
  if (lVar2 == 0) {
    pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar3;
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
  plVar1 = *(long **)param_1;
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
  StringName::StringName((StringName *)&local_78,"NavigationMesh",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Resource::_get_property_listv((Resource *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* List<PropertyInfo, DefaultAllocator>::~List() */

void __thiscall
List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = *(long **)this;
  if (plVar4 == (long *)0x0) {
    return;
  }
  do {
    pvVar1 = (void *)*plVar4;
    if (pvVar1 == (void *)0x0) {
      if ((int)plVar4[2] != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if (*(long **)((long)pvVar1 + 0x40) == plVar4) {
      lVar3 = *(long *)((long)pvVar1 + 0x30);
      lVar2 = *(long *)((long)pvVar1 + 0x38);
      *plVar4 = lVar3;
      if (pvVar1 == (void *)plVar4[1]) {
        plVar4[1] = lVar2;
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x30) = lVar3;
        lVar3 = *(long *)((long)pvVar1 + 0x30);
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x38) = lVar2;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar1 + 0x20));
      if ((StringName::configured != '\0') && (*(long *)((long)pvVar1 + 0x10) != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar1 + 8));
      Memory::free_static(pvVar1,false);
      *(int *)(plVar4 + 2) = (int)plVar4[2] + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    plVar4 = *(long **)this;
  } while ((int)plVar4[2] != 0);
  Memory::free_static(plVar4,false);
  return;
}



/* Node3D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Node3D::_get_property_listv(Node3D *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  CowData<char32_t> *local_b8;
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
      goto LAB_0010cf00;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010cf00:
  local_b8 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b8);
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
  if ((StringName::configured != '\0') && (local_78 != (undefined *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    local_90 = 0;
    local_88 = 0;
    local_78 = "Node";
    local_70 = 4;
    String::parse_latin1((StrRange *)&local_88);
    local_78 = "Node";
    local_80 = 0;
    local_70 = 4;
    String::parse_latin1((StrRange *)&local_80);
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_78,0,(StrRange *)&local_80,0,(StrRange *)&local_88,0x80,
               (StrRange *)&local_90);
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
    CowData<char32_t>::_unref(local_b8);
    if ((StringName::configured != '\0') && (local_68 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if ((StringName::configured != '\0') && (local_90 != 0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_78,"Node",false);
    ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
    if ((StringName::configured != '\0') && (local_78 != (undefined *)0x0)) {
      StringName::unref();
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* NavigationRegion3D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
NavigationRegion3D::_get_property_listv(NavigationRegion3D *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
  undefined4 *puVar4;
  long in_FS_OFFSET;
  StringName *local_a8;
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
    Node3D::_get_property_listv((Node3D *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "NavigationRegion3D";
  local_70 = 0x12;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "NavigationRegion3D";
  local_98 = 0;
  local_70 = 0x12;
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
LAB_0010d2dd:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010d2dd;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0010d2ff;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0010d2ff:
  if (lVar2 == 0) {
    pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar3;
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
  plVar1 = *(long **)param_1;
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
  StringName::StringName((StringName *)&local_78,"NavigationRegion3D",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
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



/* Ref<Material>::unref() */

void __thiscall Ref<Material>::unref(Ref<Material> *this)

{
  Object *pOVar1;
  char cVar2;
  
  if (*(long *)this != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)this;
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
        *(undefined8 *)this = 0;
        return;
      }
    }
  }
  *(undefined8 *)this = 0;
  return;
}



/* Ref<StandardMaterial3D>::unref() */

void __thiscall Ref<StandardMaterial3D>::unref(Ref<StandardMaterial3D> *this)

{
  Object *pOVar1;
  char cVar2;
  
  if (*(long *)this != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)this;
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
        *(undefined8 *)this = 0;
        return;
      }
    }
  }
  *(undefined8 *)this = 0;
  return;
}



/* Ref<World3D>::unref() */

void __thiscall Ref<World3D>::unref(Ref<World3D> *this)

{
  Object *pOVar1;
  char cVar2;
  
  if (*(long *)this != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)this;
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
        *(undefined8 *)this = 0;
        return;
      }
    }
  }
  *(undefined8 *)this = 0;
  return;
}



/* MethodBind* create_method_bind<NavigationRegion3D, RID>(RID (NavigationRegion3D::*)() const) */

MethodBind * create_method_bind<NavigationRegion3D,RID>(_func_RID *param_1)

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
  *(_func_RID **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00116a30;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "NavigationRegion3D";
  local_30 = 0x12;
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



/* MethodBind* create_method_bind<NavigationRegion3D, Ref<NavigationMesh> const&>(void
   (NavigationRegion3D::*)(Ref<NavigationMesh> const&)) */

MethodBind *
create_method_bind<NavigationRegion3D,Ref<NavigationMesh>const&>(_func_void_Ref_ptr *param_1)

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
  *(_func_void_Ref_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00116a90;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "NavigationRegion3D";
  local_30 = 0x12;
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



/* MethodBind* create_method_bind<NavigationRegion3D, Ref<NavigationMesh>>(Ref<NavigationMesh>
   (NavigationRegion3D::*)() const) */

MethodBind * create_method_bind<NavigationRegion3D,Ref<NavigationMesh>>(_func_Ref *param_1)

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
  *(_func_Ref **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00116af0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "NavigationRegion3D";
  local_30 = 0x12;
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



/* MethodBind* create_method_bind<NavigationRegion3D, bool>(void (NavigationRegion3D::*)(bool)) */

MethodBind * create_method_bind<NavigationRegion3D,bool>(_func_void_bool *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_00116b50;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "NavigationRegion3D";
  local_30 = 0x12;
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



/* MethodBind* create_method_bind<NavigationRegion3D, bool>(bool (NavigationRegion3D::*)() const) */

MethodBind * create_method_bind<NavigationRegion3D,bool>(_func_bool *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_00116bb0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "NavigationRegion3D";
  local_30 = 0x12;
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



/* MethodBind* create_method_bind<NavigationRegion3D, RID>(void (NavigationRegion3D::*)(RID)) */

MethodBind * create_method_bind<NavigationRegion3D,RID>(_func_void_RID *param_1)

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
  *(_func_void_RID **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00116c10;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "NavigationRegion3D";
  local_30 = 0x12;
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



/* MethodBind* create_method_bind<NavigationRegion3D, unsigned int>(void
   (NavigationRegion3D::*)(unsigned int)) */

MethodBind * create_method_bind<NavigationRegion3D,unsigned_int>(_func_void_uint *param_1)

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
  *(_func_void_uint **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00116c70;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "NavigationRegion3D";
  local_30 = 0x12;
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



/* MethodBind* create_method_bind<NavigationRegion3D, unsigned int>(unsigned int
   (NavigationRegion3D::*)() const) */

MethodBind * create_method_bind<NavigationRegion3D,unsigned_int>(_func_uint *param_1)

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
  *(_func_uint **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00116cd0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "NavigationRegion3D";
  local_30 = 0x12;
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



/* MethodBind* create_method_bind<NavigationRegion3D, int, bool>(void (NavigationRegion3D::*)(int,
   bool)) */

MethodBind * create_method_bind<NavigationRegion3D,int,bool>(_func_void_int_bool *param_1)

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
  *(_func_void_int_bool **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00116d30;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "NavigationRegion3D";
  local_30 = 0x12;
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



/* MethodBind* create_method_bind<NavigationRegion3D, bool, int>(bool (NavigationRegion3D::*)(int)
   const) */

MethodBind * create_method_bind<NavigationRegion3D,bool,int>(_func_bool_int *param_1)

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
  *(_func_bool_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00116d90;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "NavigationRegion3D";
  local_30 = 0x12;
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



/* MethodBind* create_method_bind<NavigationRegion3D, float>(void (NavigationRegion3D::*)(float)) */

MethodBind * create_method_bind<NavigationRegion3D,float>(_func_void_float *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_00116df0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "NavigationRegion3D";
  local_30 = 0x12;
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



/* MethodBind* create_method_bind<NavigationRegion3D, float>(float (NavigationRegion3D::*)() const)
    */

MethodBind * create_method_bind<NavigationRegion3D,float>(_func_float *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_00116e50;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "NavigationRegion3D";
  local_30 = 0x12;
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



/* MethodBind* create_method_bind<NavigationRegion3D, AABB>(AABB (NavigationRegion3D::*)() const) */

MethodBind * create_method_bind<NavigationRegion3D,AABB>(_func_AABB *param_1)

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
  *(_func_AABB **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00116eb0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "NavigationRegion3D";
  local_30 = 0x12;
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



/* NavigationRegion3D::_bind_methods() [clone .cold] */

void NavigationRegion3D::_bind_methods(void)

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



/* Error CowData<Vector3>::resize<false>(long) [clone .isra.0] [clone .cold] */

void CowData<Vector3>::resize<false>(long param_1)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0010e5b8(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
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



/* NavigationRegion3D::_update_debug_mesh() [clone .cold] */

void NavigationRegion3D::_update_debug_mesh(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* NavigationRegion3D::_initialize_classv() */

void NavigationRegion3D::_initialize_classv(void)

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
    if (Node3D::initialize_class()::initialized == '\0') {
      if (Node::initialize_class()::initialized == '\0') {
        Object::initialize_class();
        local_68 = 0;
        local_50 = 6;
        local_58 = "Object";
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
        local_58 = "Node";
        local_70 = 0;
        local_50 = 4;
        String::parse_latin1((StrRange *)&local_70);
        StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
        ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
        if ((StringName::configured != '\0') && (local_58 != (undefined *)0x0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        if ((StringName::configured != '\0') && (local_60 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        if ((code *)PTR__bind_methods_0011c008 != Node::_bind_methods) {
          Node::_bind_methods();
        }
        Node::initialize_class()::initialized = '\x01';
      }
      local_58 = "Node";
      local_68 = 0;
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
      if ((code *)PTR__bind_methods_0011c068 != Node::_bind_methods) {
        Node3D::_bind_methods();
      }
      Node3D::initialize_class()::initialized = '\x01';
    }
    local_58 = "Node3D";
    local_68 = 0;
    local_50 = 6;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "NavigationRegion3D";
    local_70 = 0;
    local_50 = 0x12;
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



/* CowData<Vector3>::_unref() */

void __thiscall CowData<Vector3>::_unref(CowData<Vector3> *this)

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



/* CowData<int>::_unref() */

void __thiscall CowData<int>::_unref(CowData<int> *this)

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
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  
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
    lVar4 = 0;
    lVar5 = 0;
  }
  else {
    lVar4 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar4) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar5 = lVar4 * 8;
    if (lVar5 != 0) {
      uVar6 = lVar5 - 1U | lVar5 - 1U >> 1;
      uVar6 = uVar6 | uVar6 >> 2;
      uVar6 = uVar6 | uVar6 >> 4;
      uVar6 = uVar6 | uVar6 >> 8;
      uVar6 = uVar6 | uVar6 >> 0x10;
      lVar5 = (uVar6 | uVar6 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 == 0) {
LAB_0010ed90:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar6 = param_1 * 8 - 1;
  uVar6 = uVar6 >> 1 | uVar6;
  uVar6 = uVar6 | uVar6 >> 2;
  uVar6 = uVar6 | uVar6 >> 4;
  uVar6 = uVar6 | uVar6 >> 8;
  uVar6 = uVar6 | uVar6 >> 0x10;
  uVar6 = uVar6 | uVar6 >> 0x20;
  lVar9 = uVar6 + 1;
  if (lVar9 == 0) goto LAB_0010ed90;
  uVar8 = param_1;
  if (param_1 <= lVar4) {
    while (lVar4 = *(long *)this, lVar4 != 0) {
      if (*(ulong *)(lVar4 + -8) <= uVar8) {
        if (lVar9 != lVar5) {
          uVar3 = _realloc(this,lVar9);
          if ((int)uVar3 != 0) {
            return uVar3;
          }
          lVar4 = *(long *)this;
          if (lVar4 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
        }
        *(long *)(lVar4 + -8) = param_1;
        return 0;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)(lVar4 + uVar8 * 8));
      uVar8 = uVar8 + 1;
    }
    goto LAB_0010ede6;
  }
  if (lVar9 == lVar5) {
LAB_0010ed0b:
    puVar7 = *(undefined8 **)this;
    if (puVar7 == (undefined8 *)0x0) {
LAB_0010ede6:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar4 = puVar7[-1];
    if (param_1 <= lVar4) goto LAB_0010ec7f;
  }
  else {
    if (lVar4 != 0) {
      uVar3 = _realloc(this,lVar9);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      goto LAB_0010ed0b;
    }
    puVar2 = (undefined8 *)Memory::alloc_static(uVar6 + 0x11,false);
    if (puVar2 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar7 = puVar2 + 2;
    *puVar2 = 1;
    puVar2[1] = 0;
    *(undefined8 **)this = puVar7;
    lVar4 = 0;
  }
  memset(puVar7 + lVar4,0,(param_1 - lVar4) * 8);
LAB_0010ec7f:
  puVar7[-1] = param_1;
  return 0;
}



/* void memdelete<NavigationMesh>(NavigationMesh*) */

void memdelete<NavigationMesh>(NavigationMesh *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  Object *pOVar5;
  code *pcVar6;
  char cVar7;
  long lVar8;
  long lVar9;
  bool bVar10;
  
  cVar7 = predelete_handler((Object *)param_1);
  if (cVar7 == '\0') {
    return;
  }
  if (*(code **)(*(long *)param_1 + 0x140) == NavigationMesh::~NavigationMesh) {
    bVar10 = StringName::configured != '\0';
    *(undefined ***)param_1 = &PTR__initialize_classv_001162e8;
    if ((bVar10) && (*(long *)(param_1 + 0x2e8) != 0)) {
      StringName::unref();
    }
    if (*(long *)(param_1 + 0x298) != 0) {
      cVar7 = RefCounted::unreference();
      if (cVar7 != '\0') {
        pOVar5 = *(Object **)(param_1 + 0x298);
        cVar7 = predelete_handler(pOVar5);
        if (cVar7 != '\0') {
          (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
          Memory::free_static(pOVar5,false);
        }
      }
    }
    if (*(long *)(param_1 + 0x290) != 0) {
      LOCK();
      plVar1 = (long *)(*(long *)(param_1 + 0x290) + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar2 = *(long *)(param_1 + 0x290);
        if (lVar2 == 0) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)invalidInstructionException();
          (*pcVar6)();
        }
        lVar3 = *(long *)(lVar2 + -8);
        *(undefined8 *)(param_1 + 0x290) = 0;
        if (lVar3 != 0) {
          lVar9 = 0;
          lVar8 = lVar2;
          do {
            if (*(long *)(lVar8 + 8) != 0) {
              LOCK();
              plVar1 = (long *)(*(long *)(lVar8 + 8) + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lVar4 = *(long *)(lVar8 + 8);
                *(undefined8 *)(lVar8 + 8) = 0;
                Memory::free_static((void *)(lVar4 + -0x10),false);
              }
            }
            lVar9 = lVar9 + 1;
            lVar8 = lVar8 + 0x10;
          } while (lVar3 != lVar9);
        }
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    if (*(long *)(param_1 + 0x280) != 0) {
      LOCK();
      plVar1 = (long *)(*(long *)(param_1 + 0x280) + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar2 = *(long *)(param_1 + 0x280);
        *(undefined8 *)(param_1 + 0x280) = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    Resource::~Resource((Resource *)param_1);
  }
  else {
    (**(code **)(*(long *)param_1 + 0x140))(param_1);
  }
  Memory::free_static(param_1,false);
  return;
}



/* NavigationRegion3D::_getv(StringName const&, Variant&) const */

undefined4 __thiscall
NavigationRegion3D::_getv(NavigationRegion3D *this,StringName *param_1,Variant *param_2)

{
  NavigationMesh *pNVar1;
  char cVar2;
  undefined4 uVar3;
  long in_FS_OFFSET;
  undefined4 local_38 [2];
  undefined8 local_30;
  undefined8 uStack_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = StringName::operator==(param_1,"navmesh");
  if ((char)uVar3 != '\0') {
    pNVar1 = *(NavigationMesh **)(this + 0x550);
    if (pNVar1 == (NavigationMesh *)0x0) {
      Variant::Variant((Variant *)local_38,(Object *)0x0);
      if (Variant::needs_deinit[*(int *)param_2] == '\0') {
        *(undefined4 *)param_2 = local_38[0];
        *(undefined8 *)(param_2 + 8) = local_30;
        *(undefined8 *)(param_2 + 0x10) = uStack_28;
      }
      else {
        Variant::_clear_internal();
        *(undefined4 *)param_2 = local_38[0];
        *(undefined8 *)(param_2 + 8) = local_30;
        *(undefined8 *)(param_2 + 0x10) = uStack_28;
      }
    }
    else {
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        Variant::Variant((Variant *)local_38,(Object *)0x0);
        if (Variant::needs_deinit[*(int *)param_2] == '\0') {
          *(undefined4 *)param_2 = local_38[0];
          *(undefined8 *)(param_2 + 8) = local_30;
          *(undefined8 *)(param_2 + 0x10) = uStack_28;
        }
        else {
          Variant::_clear_internal();
          *(undefined4 *)param_2 = local_38[0];
          *(undefined8 *)(param_2 + 8) = local_30;
          *(undefined8 *)(param_2 + 0x10) = uStack_28;
        }
      }
      else {
        Variant::Variant((Variant *)local_38,(Object *)pNVar1);
        if (Variant::needs_deinit[*(int *)param_2] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)param_2 = local_38[0];
        *(undefined8 *)(param_2 + 8) = local_30;
        *(undefined8 *)(param_2 + 0x10) = uStack_28;
        cVar2 = RefCounted::unreference();
        if (cVar2 != '\0') {
          memdelete<NavigationMesh>(pNVar1);
        }
      }
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



/* CallableCustomMethodPointer<NavigationRegion3D, void, Ref<NavigationMesh> >::call(Variant
   const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<NavigationRegion3D,void,Ref<NavigationMesh>>::call
          (CallableCustomMethodPointer<NavigationRegion3D,void,Ref<NavigationMesh>> *this,
          Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  NavigationMesh *pNVar5;
  char cVar6;
  NavigationMesh *pNVar7;
  uint uVar8;
  ulong *puVar9;
  code *pcVar10;
  long in_FS_OFFSET;
  bool bVar11;
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  NavigationMesh *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar8 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar8 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar3 = (ulong)local_48 >> 8;
      local_48 = (NavigationMesh *)(uVar3 << 8);
      LOCK();
      bVar11 = (char)ObjectDB::spin_lock == '\0';
      if (bVar11) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar11) break;
      local_48 = (NavigationMesh *)(uVar3 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar9 = (ulong *)((ulong)uVar8 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) == (*puVar9 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar9[1] != 0) {
        lVar1 = *(long *)(this + 0x28);
        pcVar10 = *(code **)(this + 0x38);
        lVar2 = *(long *)(this + 0x40);
        if (1 < (uint)param_2) {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 1;
          goto LAB_0010f1fe;
        }
        if (param_2 == 0) {
          *(undefined4 *)param_4 = 4;
          *(undefined4 *)(param_4 + 8) = 1;
          goto LAB_0010f1fe;
        }
        *(undefined4 *)param_4 = 0;
        if (((ulong)pcVar10 & 1) != 0) {
          pcVar10 = *(code **)(pcVar10 + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar6 = Variant::can_convert_strict(*(undefined4 *)*param_1,0x18);
        uVar4 = _LC101;
        if (cVar6 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        local_48 = (NavigationMesh *)0x0;
        pNVar7 = (NavigationMesh *)Variant::get_validated_object();
        pNVar5 = local_48;
        if (pNVar7 != local_48) {
          if (pNVar7 == (NavigationMesh *)0x0) {
            if (local_48 != (NavigationMesh *)0x0) {
              local_48 = (NavigationMesh *)0x0;
LAB_0010f2cd:
              cVar6 = RefCounted::unreference();
              if (cVar6 != '\0') {
                memdelete<NavigationMesh>(pNVar5);
              }
            }
          }
          else {
            pNVar7 = (NavigationMesh *)
                     __dynamic_cast(pNVar7,&Object::typeinfo,&NavigationMesh::typeinfo,0);
            if (pNVar5 != pNVar7) {
              local_48 = pNVar7;
              if ((pNVar7 != (NavigationMesh *)0x0) &&
                 (cVar6 = RefCounted::reference(), cVar6 == '\0')) {
                local_48 = (NavigationMesh *)0x0;
              }
              if (pNVar5 != (NavigationMesh *)0x0) goto LAB_0010f2cd;
            }
          }
        }
        (*pcVar10)((long *)(lVar1 + lVar2),(String *)&local_48);
        if ((local_48 != (NavigationMesh *)0x0) &&
           (cVar6 = RefCounted::unreference(), cVar6 != '\0')) {
          memdelete<NavigationMesh>(local_48);
        }
        goto LAB_0010f1fe;
      }
    }
    else {
      ObjectDB::spin_lock._0_1_ = '\0';
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  local_50 = 0;
  local_48 = (NavigationMesh *)0x10a592;
  local_40 = 0x15;
  String::parse_latin1((StrRange *)&local_50);
  uitos((ulong)local_60);
  operator+((char *)local_58,(String *)"Invalid Object id \'");
  String::operator+((String *)&local_48,(String *)local_58);
  _err_print_error(&_LC40,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (String *)&local_48,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref(local_58);
  CowData<char32_t>::_unref(local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
LAB_0010f1fe:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CowData<Color>::_realloc(long) */

undefined8 __thiscall CowData<Color>::_realloc(CowData<Color> *this,long param_1)

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



/* NavigationRegion3D::_setv(StringName const&, Variant const&) */

undefined4 NavigationRegion3D::_setv(StringName *param_1,Variant *param_2)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  NavigationMesh *pNVar4;
  long in_FS_OFFSET;
  NavigationMesh *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = StringName::operator==((StringName *)param_2,"navmesh");
  if ((char)uVar2 != '\0') {
    local_28 = (NavigationMesh *)0x0;
    lVar3 = Variant::get_validated_object();
    if (lVar3 != 0) {
      pNVar4 = (NavigationMesh *)__dynamic_cast(lVar3,&Object::typeinfo,&NavigationMesh::typeinfo,0)
      ;
      if (pNVar4 != (NavigationMesh *)0x0) {
        local_28 = pNVar4;
        cVar1 = RefCounted::reference();
        if (cVar1 != '\0') {
          set_navigation_mesh((NavigationRegion3D *)param_1,(Ref *)&local_28);
          cVar1 = RefCounted::unreference();
          if (cVar1 != '\0') {
            memdelete<NavigationMesh>(pNVar4);
          }
          goto LAB_0010f507;
        }
        local_28 = (NavigationMesh *)0x0;
      }
    }
    set_navigation_mesh((NavigationRegion3D *)param_1,(Ref *)&local_28);
  }
LAB_0010f507:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavigationRegion3D::_notificationv(int, bool) */

void __thiscall
NavigationRegion3D::_notificationv(NavigationRegion3D *this,int param_1,bool param_2)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = (int)this;
  bVar1 = SUB81(this,0);
  if (param_2) {
    if (param_1 == 0x1a) {
      Node::set_physics_process_internal(bVar1);
      if (((byte)this[0x2fa] & 0x40) != 0) goto LAB_0010f673;
      goto LAB_0010f5fb;
    }
    if (param_1 < 0x1b) {
      if (param_1 == 10) {
        if (((byte)this[0x2fa] & 0x40) != 0) {
          _region_enter_navigation_map(this);
        }
      }
      else if (param_1 == 0xb) {
        _region_exit_navigation_map(this);
      }
      goto LAB_0010f5fb;
    }
    if (param_1 != 2000) goto LAB_0010f5fb;
    Node::set_physics_process_internal(bVar1);
    if ((code *)PTR__notification_0011c070 == Node::_notification) goto LAB_0010f615;
  }
  else {
    Node::_notification(iVar2);
    if ((code *)PTR__notification_0011c070 != Node::_notification) {
      Node3D::_notification(iVar2);
    }
    if (param_1 != 0x1a) {
      if (0x1a < param_1) {
        if (param_1 != 2000) {
          return;
        }
        Node::set_physics_process_internal(bVar1);
        return;
      }
      if (param_1 != 10) {
        if (param_1 != 0xb) {
          return;
        }
        _region_exit_navigation_map(this);
        return;
      }
      if (((byte)this[0x2fa] & 0x40) == 0) {
        return;
      }
      _region_enter_navigation_map(this);
      return;
    }
    Node::set_physics_process_internal(bVar1);
    if (((byte)this[0x2fa] & 0x40) == 0) {
      return;
    }
LAB_0010f673:
    _region_update_transform(this);
    if (!param_2) {
      return;
    }
LAB_0010f5fb:
    if ((code *)PTR__notification_0011c070 == Node::_notification) goto LAB_0010f615;
  }
  Node3D::_notification(iVar2);
LAB_0010f615:
  Node::_notification(iVar2);
  return;
}



/* WARNING: Removing unreachable block (ram,0x0010f908) */
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



/* MethodBindTRC<AABB>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<AABB>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  long *plVar4;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_88;
  undefined8 local_80;
  char *local_78;
  undefined8 local_70;
  undefined4 local_68 [2];
  undefined8 local_60;
  undefined8 uStack_58;
  AABB local_48 [24];
  long local_30;
  
  plVar4 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar4 != (long *)0x0) && (plVar4[1] != 0)) && (*(char *)(plVar4[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_78,(StringName *)(param_2 + 3));
    if (plVar4[1] == 0) {
      plVar3 = (long *)plVar4[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*plVar4 + 0x40))(plVar4);
      }
    }
    else {
      plVar3 = (long *)(plVar4[1] + 0x20);
    }
    if (local_78 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_78 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_80 = 0;
      local_70 = 0x35;
      String::parse_latin1((StrRange *)&local_80);
      vformat<StringName>((StringName *)&local_78,(StrRange *)&local_80,&local_88);
      _err_print_error(&_LC40,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_78,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      if ((StringName::configured != '\0') && (local_88 != 0)) {
        StringName::unref();
      }
      goto LAB_0010fc90;
    }
    if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
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
      (*(code *)pVVar2)(local_48);
      Variant::Variant((Variant *)local_68,local_48);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_68[0];
      *(undefined8 *)(param_1 + 8) = local_60;
      *(undefined8 *)(param_1 + 0x10) = uStack_58;
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
LAB_0010fc90:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<AABB>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<AABB>::validated_call
          (MethodBindTRC<AABB> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  long *plVar3;
  Variant **extraout_RDX;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  Variant **local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_58 == (Variant **)*plVar3) {
      if ((StringName::configured != '\0') && (local_58 != (Variant **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = (Variant **)0x10fad8;
      local_50 = 0x35;
      local_60 = 0;
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
      goto LAB_0010ff49;
    }
    param_2 = local_58;
    if ((StringName::configured != '\0') && (local_58 != (Variant **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    param_2 = *(Variant ***)(param_1 + *(long *)(this + 0x60));
    pcVar2 = *(code **)(pcVar2 + (long)param_2 + -1);
  }
  (*pcVar2)(&local_48,param_1 + *(long *)(this + 0x60),param_2);
  puVar1 = *(undefined8 **)(param_3 + 8);
  puVar1[2] = local_38;
  *puVar1 = local_48;
  puVar1[1] = uStack_40;
LAB_0010ff49:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<AABB>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<AABB>::ptrcall(MethodBindTRC<AABB> *this,Object *param_1,void **param_2,void *param_3)

{
  code *pcVar1;
  long *plVar2;
  void **extraout_RDX;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  void **local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
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
    if (local_58 == (void **)*plVar2) {
      if ((StringName::configured != '\0') && (local_58 != (void **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = (void **)0x10fad8;
      local_50 = 0x35;
      local_60 = 0;
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
      goto LAB_00110117;
    }
    param_2 = local_58;
    if ((StringName::configured != '\0') && (local_58 != (void **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    param_2 = *(void ***)(param_1 + *(long *)(this + 0x60));
    pcVar1 = *(code **)(pcVar1 + (long)param_2 + -1);
  }
  (*pcVar1)(&local_48,param_1 + *(long *)(this + 0x60),param_2);
  *(undefined8 *)((long)param_3 + 0x10) = local_38;
  *(undefined8 *)param_3 = local_48;
  *(undefined8 *)((long)param_3 + 8) = uStack_40;
LAB_00110117:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
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
      _err_print_error(&_LC40,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00110350;
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
LAB_00110350:
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
      goto LAB_00110568;
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
LAB_00110568:
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
      goto LAB_00110727;
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
LAB_00110727:
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
      goto LAB_00110a79;
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
                    /* WARNING: Could not recover jumptable at 0x00110902. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(auVar2._0_8_,(long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_00110a79:
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
      goto LAB_00110c59;
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
                    /* WARNING: Could not recover jumptable at 0x00110ae1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(auVar2._0_8_,(long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_00110c59:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool, int>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<bool,int>::validated_call
          (MethodBindTRC<bool,int> *this,Object *param_1,Variant **param_2,Variant *param_3)

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
      goto LAB_00110ca8;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  VVar1 = (Variant)(*pcVar2)(param_1 + *(long *)(this + 0x60),*(undefined4 *)(*param_2 + 8));
  param_3[8] = VVar1;
LAB_00110ca8:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool, int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<bool,int>::ptrcall
          (MethodBindTRC<bool,int> *this,Object *param_1,void **param_2,void *param_3)

{
  undefined1 uVar1;
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
      goto LAB_00110e87;
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
  *(undefined1 *)param_3 = uVar1;
LAB_00110e87:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, bool>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<int,bool>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

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
      goto LAB_00111201;
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
                    /* WARNING: Could not recover jumptable at 0x00111086. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8),*(undefined1 *)(*(long *)(param_3 + 8) + 8));
    return;
  }
LAB_00111201:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, bool>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<int,bool>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_001113f1;
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
                    /* WARNING: Could not recover jumptable at 0x0011127a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3,
               **(char **)((long)param_3 + 8) != '\0');
    return;
  }
LAB_001113f1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
      _err_print_error(&_LC40,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_001114c0;
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
LAB_001114c0:
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
      goto LAB_001116d4;
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
LAB_001116d4:
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
      goto LAB_00111883;
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
LAB_00111883:
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
      goto LAB_00111bc1;
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
                    /* WARNING: Could not recover jumptable at 0x00111a4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_00111bc1:
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
      goto LAB_00111da1;
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
                    /* WARNING: Could not recover jumptable at 0x00111c2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_00111da1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<RID>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<RID>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

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
      goto LAB_00111f81;
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
                    /* WARNING: Could not recover jumptable at 0x00111e0d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined8 *)(*(long *)param_3 + 8));
    return;
  }
LAB_00111f81:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<RID>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<RID>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_00112161;
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
                    /* WARNING: Could not recover jumptable at 0x00111fec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_00112161:
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
      _err_print_error(&_LC40,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00112230;
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
LAB_00112230:
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
      goto LAB_00112442;
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
LAB_00112442:
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
      goto LAB_001125f1;
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
LAB_001125f1:
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
      goto LAB_00112931;
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
                    /* WARNING: Could not recover jumptable at 0x001127bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined1 *)(*(long *)param_3 + 8));
    return;
  }
LAB_00112931:
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
      goto LAB_00112b19;
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
                    /* WARNING: Could not recover jumptable at 0x001129a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3 != '\0');
    return;
  }
LAB_00112b19:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<NavigationMesh>>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindTRC<Ref<NavigationMesh>>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  char cVar2;
  Variant *pVVar3;
  long *plVar4;
  undefined4 in_register_00000014;
  long *plVar5;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  Object *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
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
    if (local_58 == (Object *)*plVar4) {
      if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = (Object *)0x10fad8;
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC40,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00112c10;
    }
    if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
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
      (*(code *)pVVar3)(&local_58);
      Variant::Variant((Variant *)local_48,local_58);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
      if (local_58 != (Object *)0x0) {
        cVar2 = RefCounted::unreference();
        if (cVar2 != '\0') {
          memdelete<NavigationMesh>((NavigationMesh *)local_58);
        }
      }
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
LAB_00112c10:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<RID>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<RID>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

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
      _err_print_error(&_LC40,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00112eb0;
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
      local_58 = (char *)(*(code *)pVVar2)();
      Variant::Variant((Variant *)local_48,(RID *)&local_58);
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
LAB_00112eb0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<RID>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<RID>::validated_call
          (MethodBindTRC<RID> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  undefined8 uVar1;
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
      goto LAB_001130c2;
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
  *(undefined8 *)(param_3 + 8) = uVar1;
LAB_001130c2:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<RID>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<RID>::ptrcall(MethodBindTRC<RID> *this,Object *param_1,void **param_2,void *param_3)

{
  undefined8 uVar1;
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
      goto LAB_00113271;
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
  *(undefined8 *)param_3 = uVar1;
LAB_00113271:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<NavigationMesh>>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Ref<NavigationMesh>>::ptrcall
          (MethodBindTRC<Ref<NavigationMesh>> *this,Object *param_1,void **param_2,void *param_3)

{
  char cVar1;
  code *pcVar2;
  Object *pOVar3;
  long *plVar4;
  NavigationMesh *extraout_RDX;
  Object *pOVar5;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  NavigationMesh *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (NavigationMesh *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (NavigationMesh *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (NavigationMesh *)0x10fad8;
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
      goto LAB_00113496;
    }
    param_2 = (void **)local_48;
    if ((StringName::configured != '\0') && (local_48 != (NavigationMesh *)0x0)) {
      StringName::unref();
      param_2 = (void **)extraout_RDX;
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    param_2 = *(void ***)(param_1 + *(long *)(this + 0x60));
    pcVar2 = *(code **)((NavigationMesh *)((long)param_2 + -1) + (long)pcVar2);
  }
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  if (local_48 == (NavigationMesh *)0x0) {
                    /* WARNING: Load size is inaccurate */
    pOVar5 = *param_3;
    if (pOVar5 == (Object *)0x0) goto LAB_00113496;
    *(undefined8 *)param_3 = 0;
    goto LAB_001134d9;
  }
  pOVar3 = (Object *)__dynamic_cast(local_48,&Object::typeinfo,&RefCounted::typeinfo,0);
                    /* WARNING: Load size is inaccurate */
  pOVar5 = *param_3;
  if (pOVar5 != pOVar3) {
    *(Object **)param_3 = pOVar3;
    if (pOVar3 == (Object *)0x0) {
      if (pOVar5 != (Object *)0x0) goto LAB_001134d9;
    }
    else {
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        *(undefined8 *)param_3 = 0;
      }
      if (pOVar5 != (Object *)0x0) {
LAB_001134d9:
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(pOVar5);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
      if (local_48 == (NavigationMesh *)0x0) goto LAB_00113496;
    }
  }
  cVar1 = RefCounted::unreference();
  if (cVar1 != '\0') {
    memdelete<NavigationMesh>(local_48);
  }
LAB_00113496:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<NavigationMesh> const&>::validated_call(Object*, Variant const**, Variant*) const
    */

void MethodBindT<Ref<NavigationMesh>const&>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  NavigationMesh *pNVar2;
  char cVar3;
  NavigationMesh *pNVar4;
  Variant *pVVar5;
  code *pcVar6;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  NavigationMesh *local_58;
  undefined8 local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar5 = param_2[0x23];
      if (pVVar5 == (Variant *)0x0) {
        pVVar5 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar5 = param_2[1] + 0x20;
    }
    if (local_58 == (NavigationMesh *)*(long *)pVVar5) {
      if ((StringName::configured != '\0') && (local_58 != (NavigationMesh *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = (NavigationMesh *)0x10fad8;
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00113778;
    }
    if ((StringName::configured != '\0') && (local_58 != (NavigationMesh *)0x0)) {
      StringName::unref();
    }
  }
  pcVar6 = *(code **)(param_1 + 0x58);
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar6 & 1) != 0) {
    pcVar6 = *(code **)(pcVar6 + *(long *)((long)param_2 + lVar1) + -1);
  }
  Variant::Variant((Variant *)local_48,*(Object **)(*(long *)param_3 + 0x10));
  local_58 = (NavigationMesh *)0x0;
  pNVar4 = (NavigationMesh *)Variant::get_validated_object();
  pNVar2 = local_58;
  if (pNVar4 != local_58) {
    if (pNVar4 == (NavigationMesh *)0x0) {
      if (local_58 != (NavigationMesh *)0x0) {
        local_58 = (NavigationMesh *)0x0;
LAB_00113736:
        cVar3 = RefCounted::unreference();
        if (cVar3 != '\0') {
          memdelete<NavigationMesh>(pNVar2);
        }
      }
    }
    else {
      pNVar4 = (NavigationMesh *)
               __dynamic_cast(pNVar4,&Object::typeinfo,&NavigationMesh::typeinfo,0);
      if (pNVar2 != pNVar4) {
        local_58 = pNVar4;
        if (pNVar4 != (NavigationMesh *)0x0) {
          cVar3 = RefCounted::reference();
          if (cVar3 == '\0') {
            local_58 = (NavigationMesh *)0x0;
          }
        }
        if (pNVar2 != (NavigationMesh *)0x0) goto LAB_00113736;
      }
    }
  }
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  (*pcVar6)((long *)((long)param_2 + lVar1),(StringName *)&local_58);
  if (local_58 != (NavigationMesh *)0x0) {
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      memdelete<NavigationMesh>(local_58);
    }
  }
LAB_00113778:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<NavigationMesh> const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Ref<NavigationMesh>const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  char cVar2;
  long *plVar3;
  code *pcVar4;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  NavigationMesh *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar3 = (long *)param_2[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar3 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (NavigationMesh *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (NavigationMesh *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (NavigationMesh *)0x10fad8;
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
      goto LAB_001139fc;
    }
    if ((StringName::configured != '\0') && (local_48 != (NavigationMesh *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(param_1 + 0x58);
                    /* WARNING: Load size is inaccurate */
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)((long)param_2 + lVar1) + -1);
  }
  if ((*param_3 == (long *)0x0) ||
     (local_48 = (NavigationMesh *)**param_3, local_48 == (NavigationMesh *)0x0)) {
LAB_001139d8:
    local_48 = (NavigationMesh *)0x0;
  }
  else {
    cVar2 = RefCounted::init_ref();
    if (cVar2 == '\0') goto LAB_001139d8;
  }
  (*pcVar4)((long *)((long)param_2 + lVar1),(StringName *)&local_48);
  if (local_48 != (NavigationMesh *)0x0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      memdelete<NavigationMesh>(local_48);
    }
  }
LAB_001139fc:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool, int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<bool,int>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  undefined4 uVar8;
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
      _err_print_error(&_LC40,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00113cc0;
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
      if (in_R8D != 1) goto LAB_00113d00;
LAB_00113cf0:
      pVVar12 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar12 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00113d00:
        uVar8 = 4;
        goto LAB_00113cb5;
      }
      if (in_R8D == 1) goto LAB_00113cf0;
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
    uVar4 = _LC130;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    iVar7 = Variant::operator_cast_to_int(pVVar12);
    bVar6 = (bool)(*(code *)pVVar13)((Variant *)((long)plVar11 + (long)pVVar1),iVar7);
    Variant::Variant((Variant *)local_48,bVar6);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_48[0];
    *(undefined8 *)(param_1 + 8) = local_40;
    *(undefined8 *)(param_1 + 0x10) = uStack_38;
  }
  else {
    uVar8 = 3;
LAB_00113cb5:
    *in_R9 = uVar8;
    in_R9[2] = 1;
  }
LAB_00113cc0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<RID>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<RID>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  char cVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  undefined4 in_register_00000014;
  long *plVar9;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar10;
  Variant *pVVar11;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  plVar9 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar9 != (long *)0x0) && (plVar9[1] != 0)) && (*(char *)(plVar9[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (plVar9[1] == 0) {
      plVar7 = (long *)plVar9[0x23];
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)(**(code **)(*plVar9 + 0x40))(plVar9);
      }
    }
    else {
      plVar7 = (long *)(plVar9[1] + 0x20);
    }
    if (local_48 == (char *)*plVar7) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC40,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001140a0;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar11 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar10 = param_2[5];
    if (pVVar10 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_001140f0;
LAB_001140e0:
      pVVar10 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar10 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_001140f0:
        uVar5 = 4;
        goto LAB_00114095;
      }
      if (in_R8D == 1) goto LAB_001140e0;
      lVar8 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar8) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar8,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar10 = pVVar10 + lVar8 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar11 & 1) != 0) {
      pVVar11 = *(Variant **)(pVVar11 + *(long *)((long)plVar9 + (long)pVVar1) + -1);
    }
    cVar4 = Variant::can_convert_strict(*(undefined4 *)pVVar10,0x17);
    uVar6 = _LC41;
    if (cVar4 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar6;
    }
    uVar6 = Variant::operator_cast_to_RID(pVVar10);
    (*(code *)pVVar11)((Variant *)((long)plVar9 + (long)pVVar1),uVar6);
  }
  else {
    uVar5 = 3;
LAB_00114095:
    *in_R9 = uVar5;
    in_R9[2] = 1;
  }
LAB_001140a0:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<NavigationMesh> const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<Ref<NavigationMesh>const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  NavigationMesh *pNVar5;
  char cVar6;
  undefined4 uVar7;
  NavigationMesh *pNVar8;
  long *plVar9;
  long lVar10;
  undefined4 in_register_00000014;
  long *plVar11;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar12;
  Variant *pVVar13;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  NavigationMesh *local_48;
  undefined8 local_40;
  long local_30;
  
  plVar11 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar11 != (long *)0x0) && (plVar11[1] != 0)) && (*(char *)(plVar11[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (plVar11[1] == 0) {
      plVar9 = (long *)plVar11[0x23];
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)(**(code **)(*plVar11 + 0x40))(plVar11);
      }
    }
    else {
      plVar9 = (long *)(plVar11[1] + 0x20);
    }
    if (local_48 == (NavigationMesh *)*plVar9) {
      if ((StringName::configured != '\0') && (local_48 != (NavigationMesh *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (NavigationMesh *)0x10fad8;
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC40,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00114430;
    }
    if ((StringName::configured != '\0') && (local_48 != (NavigationMesh *)0x0)) {
      StringName::unref();
    }
  }
  pVVar13 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (1 < in_R8D) {
    uVar7 = 3;
LAB_00114425:
    *in_R9 = uVar7;
    in_R9[2] = 1;
    goto LAB_00114430;
  }
  pVVar12 = param_2[5];
  if (pVVar12 == (Variant *)0x0) {
    if (in_R8D != 1) goto LAB_00114480;
LAB_00114470:
    pVVar12 = *(Variant **)param_4;
  }
  else {
    lVar2 = *(long *)(pVVar12 + -8);
    if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00114480:
      uVar7 = 4;
      goto LAB_00114425;
    }
    if (in_R8D == 1) goto LAB_00114470;
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
  cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar12,0x18);
  uVar4 = _LC101;
  if (cVar6 == '\0') {
    *in_R9 = 2;
    *(undefined8 *)(in_R9 + 1) = uVar4;
  }
  local_48 = (NavigationMesh *)0x0;
  pNVar8 = (NavigationMesh *)Variant::get_validated_object();
  pNVar5 = local_48;
  if (pNVar8 != local_48) {
    if (pNVar8 == (NavigationMesh *)0x0) {
      if (local_48 != (NavigationMesh *)0x0) {
        local_48 = (NavigationMesh *)0x0;
LAB_0011459d:
        cVar6 = RefCounted::unreference();
        if (cVar6 != '\0') {
          memdelete<NavigationMesh>(pNVar5);
        }
      }
    }
    else {
      pNVar8 = (NavigationMesh *)
               __dynamic_cast(pNVar8,&Object::typeinfo,&NavigationMesh::typeinfo,0);
      if (pNVar5 != pNVar8) {
        local_48 = pNVar8;
        if (pNVar8 != (NavigationMesh *)0x0) {
          cVar6 = RefCounted::reference();
          if (cVar6 == '\0') {
            local_48 = (NavigationMesh *)0x0;
          }
        }
        if (pNVar5 != (NavigationMesh *)0x0) goto LAB_0011459d;
      }
    }
  }
  (*(code *)pVVar13)((Variant *)((long)plVar11 + (long)pVVar1),&local_48);
  if (local_48 != (NavigationMesh *)0x0) {
    cVar6 = RefCounted::unreference();
    if (cVar6 != '\0') {
      memdelete<NavigationMesh>(local_48);
    }
  }
LAB_00114430:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<NavigationMesh>>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Ref<NavigationMesh>>::validated_call
          (MethodBindTRC<Ref<NavigationMesh>> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  char cVar1;
  code *pcVar2;
  long *plVar3;
  Variant **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  NavigationMesh *local_50;
  Variant **local_48;
  NavigationMesh *local_40;
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
    if (local_48 == (Variant **)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Variant **)0x10fad8;
      local_50 = (NavigationMesh *)0x0;
      local_40 = (NavigationMesh *)0x35;
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
      goto LAB_00114726;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    param_2 = *(Variant ***)(param_1 + *(long *)(this + 0x60));
    pcVar2 = *(code **)(pcVar2 + (long)param_2 + -1);
  }
  (*pcVar2)(&local_50,param_1 + *(long *)(this + 0x60),param_2);
  if (local_50 == (NavigationMesh *)0x0) {
    Variant::ObjData::unref();
  }
  else {
    local_48 = *(Variant ***)(local_50 + 0x60);
    local_40 = local_50;
    Variant::ObjData::ref((ObjData *)(param_3 + 8));
  }
  if (local_50 != (NavigationMesh *)0x0) {
    cVar1 = RefCounted::unreference();
    if (cVar1 != '\0') {
      memdelete<NavigationMesh>(local_50);
    }
  }
LAB_00114726:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
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
    goto LAB_001149ad;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_00114a10;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_00114a10:
      uVar6 = 4;
LAB_001149ad:
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
      goto LAB_0011492b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0011492b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_float **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,3);
  uVar4 = _LC132;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  fVar9 = Variant::operator_cast_to_float(this);
                    /* WARNING: Could not recover jumptable at 0x00114984. Too many branches */
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
      _err_print_error(&_LC40,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00114a76;
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
LAB_00114a76:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, int, bool>(__UnexistingClass*, void
   (__UnexistingClass::*)(int, bool), Variant const**, int, Callable::CallError&, Vector<Variant>
   const&) */

void call_with_variant_args_dv<__UnexistingClass,int,bool>
               (__UnexistingClass *param_1,_func_void_int_bool *param_2,Variant **param_3,
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
  Variant *this;
  uint uVar10;
  int iVar11;
  Variant *this_00;
  long in_stack_00000008;
  
  plVar8 = (long *)CONCAT44(in_register_0000000c,param_4);
  uVar10 = (uint)param_5;
  if (2 < uVar10) {
    uVar7 = 3;
    goto LAB_00114d6d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  iVar6 = 2 - uVar10;
  if (lVar1 == 0) {
    if (iVar6 == 0) {
      this = (Variant *)*plVar8;
LAB_00114d9d:
      this_00 = (Variant *)plVar8[1];
      goto LAB_00114cd5;
    }
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    iVar11 = (int)lVar2;
    if (iVar6 <= iVar11) {
      if (uVar10 == 0) {
        lVar9 = (long)(iVar11 + -2);
        if (lVar2 <= lVar9) goto LAB_00114db8;
        this = (Variant *)(lVar1 + lVar9 * 0x18);
      }
      else {
        this = (Variant *)*plVar8;
        if (uVar10 == 2) goto LAB_00114d9d;
      }
      lVar9 = (long)(int)((uVar10 ^ 1) + (iVar11 - iVar6));
      if (lVar2 <= lVar9) {
LAB_00114db8:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this_00 = (Variant *)(lVar1 + lVar9 * 0x18);
LAB_00114cd5:
      *(undefined4 *)param_6 = 0;
      if (((ulong)param_2 & 1) != 0) {
        param_2 = *(_func_void_int_bool **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
      }
      cVar5 = Variant::can_convert_strict(*(undefined4 *)this_00,1);
      uVar4 = _LC133;
      if (cVar5 == '\0') {
        *(undefined4 *)param_6 = 2;
        *(undefined8 *)(param_6 + 4) = uVar4;
      }
      Variant::operator_cast_to_bool(this_00);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
      uVar4 = _LC130;
      if (cVar5 == '\0') {
        *(undefined4 *)param_6 = 2;
        *(undefined8 *)(param_6 + 4) = uVar4;
      }
      iVar6 = Variant::operator_cast_to_int(this);
                    /* WARNING: Could not recover jumptable at 0x00114d5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*param_2)((int)(param_1 + (long)param_3),SUB41(iVar6,0));
      return;
    }
  }
  uVar7 = 4;
LAB_00114d6d:
  *(undefined4 *)param_6 = uVar7;
  *(undefined4 *)(param_6 + 8) = 2;
  return;
}



/* MethodBindT<int, bool>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<int,bool>::call
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
      _err_print_error(&_LC40,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00114e56;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,int,bool>
            (p_Var2,(_func_void_int_bool *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,
             in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00114e56:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
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
    goto LAB_0011511d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_00115180;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_00115180:
      uVar6 = 4;
LAB_0011511d:
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
      goto LAB_0011509b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0011509b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_uint **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC130;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_unsigned_int(this);
                    /* WARNING: Could not recover jumptable at 0x001150f6. Too many branches */
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
      _err_print_error(&_LC40,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_001151e6;
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
LAB_001151e6:
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
    goto LAB_001154ad;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_00115510;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_00115510:
      uVar6 = 4;
LAB_001154ad:
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
      goto LAB_0011542b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0011542b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_bool **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,1);
  uVar4 = _LC134;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_bool(this);
                    /* WARNING: Could not recover jumptable at 0x00115487. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)(SUB81(param_1 + (long)param_3,0));
  return;
}



/* MethodBindT<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<bool>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

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
      _err_print_error(&_LC40,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00115576;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,bool>
            (p_Var2,(_func_void_bool *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,
             in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00115576:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info_helper<int>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<int>(int param_1,int *param_2,PropertyInfo *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  long in_FS_OFFSET;
  undefined8 local_98;
  long local_90;
  long local_88;
  long local_80;
  undefined *local_78;
  undefined1 local_70 [16];
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar5 = *param_2;
  if (iVar5 != param_1) goto LAB_00115779;
  local_88 = 0;
  local_90 = 0;
  local_78 = &_LC23;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_70._8_8_;
  local_70 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_90);
  local_98 = 0;
  local_78 = (undefined *)CONCAT44(local_78._4_4_,2);
  local_60 = 0;
  local_58 = 0;
  local_70 = (undefined1  [16])0x0;
  if (local_90 == 0) {
LAB_00115878:
    local_50 = 6;
    StringName::operator=((StringName *)(local_70 + 8),(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 6;
    if (local_60 != 0x11) goto LAB_00115878;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_70._8_8_ == local_80) {
      if ((StringName::configured != '\0') && (local_80 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_70._8_8_ = local_80;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  *(undefined4 *)param_3 = local_78._0_4_;
  if (*(long *)(param_3 + 8) != local_70._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 8));
    uVar3 = local_70._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_70._8_8_;
    local_70 = auVar2 << 0x40;
    *(undefined8 *)(param_3 + 8) = uVar3;
  }
  if (*(long *)(param_3 + 0x10) != local_70._8_8_) {
    StringName::unref();
    uVar3 = local_70._8_8_;
    local_70._8_8_ = 0;
    *(undefined8 *)(param_3 + 0x10) = uVar3;
  }
  *(int *)(param_3 + 0x18) = local_60;
  if (*(long *)(param_3 + 0x20) != local_58) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 0x20));
    lVar4 = local_58;
    local_58 = 0;
    *(long *)(param_3 + 0x20) = lVar4;
  }
  *(undefined4 *)(param_3 + 0x28) = local_50;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
  iVar5 = *param_2;
LAB_00115779:
  *param_2 = iVar5 + 1;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindTRC<bool, int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<bool,int>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined8 uVar4;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar5;
  long in_FS_OFFSET;
  undefined8 local_80;
  long local_78;
  ulong local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar5 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<int>(0,(int *)&local_70,(PropertyInfo *)&local_68);
    uVar3 = local_60._0_8_;
    uVar4 = local_60._8_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_60._8_8_;
    local_60 = auVar1 << 0x40;
    *puVar5 = local_68._0_4_;
    *(undefined8 *)(puVar5 + 2) = uVar3;
    *(undefined8 *)(puVar5 + 4) = uVar4;
    puVar5[6] = (undefined4)local_50;
    *(undefined8 *)(puVar5 + 8) = local_48;
    puVar5[10] = local_40;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
    goto LAB_00115a28;
  }
  local_70 = 0;
  local_78 = 0;
  local_68 = &_LC23;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._0_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  local_80 = 0;
  *puVar5 = 1;
  puVar5[6] = 0;
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar5[10] = 6;
LAB_00115b0f:
    StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_70);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_78);
    puVar5[10] = 6;
    if (puVar5[6] != 0x11) goto LAB_00115b0f;
    StringName::StringName((StringName *)&local_68,(String *)(puVar5 + 8),false);
    if (*(undefined **)(puVar5 + 4) == local_68) {
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar5 + 4) = local_68;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_00115a28:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, bool>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<int,bool>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar5;
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
  
  pPVar5 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)pPVar5 = 0;
  *(undefined4 *)(pPVar5 + 0x18) = 0;
  *(undefined8 *)(pPVar5 + 0x20) = 0;
  *(undefined4 *)(pPVar5 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar5 + 8) = (undefined1  [16])0x0;
  local_8c = 0;
  call_get_argument_type_info_helper<int>(in_EDX,&local_8c,pPVar5);
  if (in_EDX != local_8c) goto LAB_00115be6;
  local_78 = 0;
  local_80 = 0;
  local_68 = &_LC23;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,1);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00115ce8:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00115ce8;
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
  *(undefined4 *)pPVar5 = local_68._0_4_;
  if (*(long *)(pPVar5 + 8) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(pPVar5 + 8));
    uVar3 = local_60._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *(undefined8 *)(pPVar5 + 8) = uVar3;
  }
  if (*(long *)(pPVar5 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar3 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(pPVar5 + 0x10) = uVar3;
  }
  *(int *)(pPVar5 + 0x18) = local_50;
  if (*(long *)(pPVar5 + 0x20) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(pPVar5 + 0x20));
    lVar4 = local_48;
    local_48 = 0;
    *(long *)(pPVar5 + 0x20) = lVar4;
  }
  *(undefined4 *)(pPVar5 + 0x28) = local_40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
LAB_00115be6:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pPVar5;
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
/* NavigationMesh::~NavigationMesh() */

void __thiscall NavigationMesh::~NavigationMesh(NavigationMesh *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* NavigationMeshSourceGeometryData3D::~NavigationMeshSourceGeometryData3D() */

void __thiscall
NavigationMeshSourceGeometryData3D::~NavigationMeshSourceGeometryData3D
          (NavigationMeshSourceGeometryData3D *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<AABB>::~MethodBindTRC() */

void __thiscall MethodBindTRC<AABB>::~MethodBindTRC(MethodBindTRC<AABB> *this)

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
/* MethodBindTRC<RID>::~MethodBindTRC() */

void __thiscall MethodBindTRC<RID>::~MethodBindTRC(MethodBindTRC<RID> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<bool, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool,int>::~MethodBindTRC(MethodBindTRC<bool,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<int, bool>::~MethodBindT() */

void __thiscall MethodBindT<int,bool>::~MethodBindT(MethodBindT<int,bool> *this)

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
/* MethodBindT<bool>::~MethodBindT() */

void __thiscall MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<RID>::~MethodBindT() */

void __thiscall MethodBindT<RID>::~MethodBindT(MethodBindT<RID> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Ref<NavigationMesh>>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Ref<NavigationMesh>>::~MethodBindTRC(MethodBindTRC<Ref<NavigationMesh>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Ref<NavigationMesh> const&>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<NavigationMesh>const&>::~MethodBindT(MethodBindT<Ref<NavigationMesh>const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<NavigationRegion3D, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<NavigationRegion3D,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<NavigationRegion3D,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<NavigationRegion3D, void, Ref<NavigationMesh>
   >::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<NavigationRegion3D,void,Ref<NavigationMesh>>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<NavigationRegion3D,void,Ref<NavigationMesh>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<NavigationRegion3D, void, RID>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<NavigationRegion3D,void,RID>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<NavigationRegion3D,void,RID> *this)

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


