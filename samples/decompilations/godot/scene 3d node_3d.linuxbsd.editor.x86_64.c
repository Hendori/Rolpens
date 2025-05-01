
/* Node3D::_notify_dirty() [clone .part.0] */

void __thiscall Node3D::_notify_dirty(Node3D *this)

{
  Node3D *pNVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(this + 0x240);
  if (lVar2 == 0) {
    _err_print_error("get_tree","./scene/main/node.h",0x1e5,"Parameter \"data.tree\" is null.",0,0);
  }
  pNVar1 = this + 0x408;
  if (*(long *)(this + 0x408) == 0) {
    *(long *)(this + 0x408) = lVar2 + 0x528;
    lVar3 = *(long *)(lVar2 + 0x528);
    *(undefined8 *)(this + 0x420) = 0;
    *(long *)(this + 0x418) = lVar3;
    if (lVar3 != 0) {
      *(Node3D **)(lVar3 + 0x18) = pNVar1;
      *(Node3D **)(lVar2 + 0x528) = pNVar1;
      return;
    }
    *(Node3D **)(lVar2 + 0x530) = pNVar1;
    *(Node3D **)(lVar2 + 0x528) = pNVar1;
    return;
  }
  _err_print_error(&_LC8,"./core/templates/self_list.h",0x2e,"Condition \"p_elem->_root\" is true.",
                   0,0);
  return;
}



/* Node3D::_propagate_transform_changed_deferred() */

void __thiscall Node3D::_propagate_transform_changed_deferred(Node3D *this)

{
  if ((((byte)this[0x2fa] & 0x40) != 0) && (*(long *)(this + 0x408) == 0)) {
    _notify_dirty(this);
    return;
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x001002d2) */
/* WARNING: Removing unreachable block (ram,0x001003a0) */
/* WARNING: Removing unreachable block (ram,0x001002de) */
/* WARNING: Removing unreachable block (ram,0x0010016a) */
/* WARNING: Removing unreachable block (ram,0x0010017f) */
/* WARNING: Removing unreachable block (ram,0x00100187) */
/* WARNING: Removing unreachable block (ram,0x001002a8) */
/* WARNING: Removing unreachable block (ram,0x001002cd) */
/* WARNING: Removing unreachable block (ram,0x0010018f) */
/* WARNING: Removing unreachable block (ram,0x001001cd) */
/* WARNING: Removing unreachable block (ram,0x001001d5) */
/* WARNING: Removing unreachable block (ram,0x00100300) */
/* WARNING: Removing unreachable block (ram,0x001001fc) */
/* WARNING: Removing unreachable block (ram,0x001002f0) */
/* WARNING: Removing unreachable block (ram,0x00100204) */
/* WARNING: Removing unreachable block (ram,0x00100230) */
/* WARNING: Removing unreachable block (ram,0x00100235) */
/* WARNING: Removing unreachable block (ram,0x00100298) */
/* WARNING: Removing unreachable block (ram,0x0010023d) */
/* WARNING: Removing unreachable block (ram,0x00100245) */
/* Node3D::get_global_transform() const */

void Node3D::get_global_transform(void)

{
  long lVar1;
  uint uVar2;
  long in_RSI;
  undefined1 (*in_RDI) [16];
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(byte *)(in_RSI + 0x2fa) & 0x40) != 0) {
                    /* WARNING: Subroutine does not return */
    Node::current_process_thread_group();
  }
  _err_print_error("get_global_transform","scene/3d/node_3d.cpp",0x1d2,
                   "Condition \"!is_inside_tree()\" is true. Returning: Transform3D()",0,0);
  uVar2 = _LC15;
  *(undefined4 *)in_RDI[2] = 0x3f800000;
  *(undefined8 *)(in_RDI[2] + 4) = 0;
  *(undefined4 *)(in_RDI[2] + 0xc) = 0;
  *in_RDI = ZEXT416(uVar2);
  in_RDI[1] = ZEXT416(uVar2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Node3D::get_global_gizmo_transform() const */

Node3D * __thiscall Node3D::get_global_gizmo_transform(Node3D *this)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  get_global_transform();
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
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



/* Node3DGizmo::Node3DGizmo() */

void __thiscall Node3DGizmo::Node3DGizmo(Node3DGizmo *this)

{
  RefCounted::RefCounted((RefCounted *)this);
  *(undefined ***)this = &PTR__initialize_classv_00129628;
  return;
}



/* Node3D::_notify_dirty() */

void __thiscall Node3D::_notify_dirty(Node3D *this)

{
  if ((*(long *)(this + 0x510) == 0) && (((byte)this[0x4d8] & 0x20) == 0)) {
    return;
  }
  if ((((byte)this[0x4d8] & 8) == 0) && (*(long *)(this + 0x408) == 0)) {
    _notify_dirty(this);
    return;
  }
  return;
}



/* Node3D::update_client_physics_interpolation_data() */

char __thiscall Node3D::update_client_physics_interpolation_data(Node3D *this)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  char cVar5;
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if ((((byte)this[0x2fa] & 0x40) != 0) && (cVar5 = -((char)this[0x2f9] >> 7), cVar5 != '\0')) {
    puVar2 = *(undefined8 **)(this + 0x500);
    if (puVar2 != (undefined8 *)0x0) {
      lVar4 = Engine::get_singleton();
      uVar3 = *(ulong *)(lVar4 + 0x50);
      if (puVar2[0xc] != uVar3) {
        if ((ulong)puVar2[0xd] <= uVar3) goto LAB_00100638;
        if (puVar2[0xc] == uVar3 - 1) {
          puVar2[6] = *puVar2;
          puVar2[7] = puVar2[1];
          puVar2[8] = puVar2[2];
          puVar2[9] = puVar2[3];
          puVar2[10] = puVar2[4];
          puVar2[0xb] = puVar2[5];
        }
        else {
          get_global_transform();
          puVar2[6] = local_68;
          puVar2[7] = uStack_60;
          puVar2[8] = local_58;
          puVar2[9] = uStack_50;
          puVar2[10] = local_48;
          puVar2[0xb] = uStack_40;
        }
        puVar2[0xc] = uVar3;
      }
      get_global_transform();
      *puVar2 = local_68;
      puVar2[1] = uStack_60;
      puVar2[2] = local_58;
      puVar2[3] = uStack_50;
      puVar2[4] = local_48;
      puVar2[5] = uStack_40;
      goto LAB_001005b6;
    }
    _err_print_error("update_client_physics_interpolation_data","scene/3d/node_3d.cpp",0x166,
                     "Parameter \"data.client_physics_interpolation_data\" is null.",0,0);
  }
LAB_00100638:
  cVar5 = '\0';
LAB_001005b6:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return cVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Node3D::_disable_client_physics_interpolation() */

void __thiscall Node3D::_disable_client_physics_interpolation(Node3D *this)

{
  if (*(void **)(this + 0x500) != (void *)0x0) {
    Memory::free_static(*(void **)(this + 0x500),false);
    *(undefined8 *)(this + 0x500) = 0;
    if (*(SelfList **)(this + 0x240) == (SelfList *)0x0) {
      _err_print_error("get_tree","./scene/main/node.h",0x1e5,"Parameter \"data.tree\" is null.",0,0
                      );
    }
    else if (*(long *)(this + 0x428) != 0) {
      SceneTree::client_physics_interpolation_remove_node_3d(*(SelfList **)(this + 0x240));
    }
  }
  this[0x2f9] = (Node3D)((byte)this[0x2f9] & 0x7f);
  return;
}



/* Node3D::_get_global_transform_interpolated(float) */

void Node3D::_get_global_transform_interpolated(float param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined1 (*pauVar3) [16];
  long lVar4;
  char *pcVar5;
  undefined8 uVar6;
  Node3D *in_RSI;
  undefined1 (*in_RDI) [16];
  long in_FS_OFFSET;
  undefined1 auVar7 [16];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  uint local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((byte)in_RSI[0x2fa] & 0x40) == 0) {
    uVar6 = 0x193;
    pcVar5 = "Condition \"!is_inside_tree()\" is true. Returning: Transform3D()";
LAB_00100932:
    _err_print_error("_get_global_transform_interpolated","scene/3d/node_3d.cpp",uVar6,pcVar5,0,0);
    auVar7 = ZEXT416(_LC15);
    *(undefined4 *)in_RDI[2] = 0x3f800000;
    *(undefined8 *)(in_RDI[2] + 4) = 0;
    *(undefined4 *)(in_RDI[2] + 0xc) = 0;
    *in_RDI = auVar7;
    in_RDI[1] = auVar7;
  }
  else {
    if ((char)in_RSI[0x2f9] < '\0') {
      auVar7 = ZEXT416(_LC15);
      local_48 = _LC15;
    }
    else {
      in_RSI[0x2f9] = (Node3D)((byte)in_RSI[0x2f9] | 0x80);
      if (*(long *)(in_RSI + 0x500) != 0) {
        uVar6 = 0x199;
        pcVar5 = 
        "Condition \"data.client_physics_interpolation_data != nullptr\" is true. Returning: Transform3D()"
        ;
        goto LAB_00100932;
      }
      pauVar3 = (undefined1 (*) [16])operator_new(0x70,"");
      uVar2 = _LC15;
      auVar7 = ZEXT416(_LC15);
      pauVar3[6] = (undefined1  [16])0x0;
      *pauVar3 = auVar7;
      pauVar3[1] = auVar7;
      *(uint *)pauVar3[2] = uVar2;
      pauVar3[3] = auVar7;
      pauVar3[4] = auVar7;
      *(uint *)pauVar3[5] = uVar2;
      *(undefined8 *)(pauVar3[2] + 4) = 0;
      *(undefined4 *)(pauVar3[2] + 0xc) = 0;
      *(undefined8 *)(pauVar3[5] + 4) = 0;
      *(undefined4 *)(pauVar3[5] + 0xc) = 0;
      *(undefined1 (**) [16])(in_RSI + 0x500) = pauVar3;
      get_global_transform();
      puVar1 = *(undefined8 **)(in_RSI + 0x500);
      *(undefined8 *)*pauVar3 = local_98;
      *(undefined8 *)((long)*pauVar3 + 8) = uStack_90;
      *(undefined8 *)pauVar3[1] = local_88;
      *(undefined8 *)(pauVar3[1] + 8) = uStack_80;
      *(undefined8 *)pauVar3[2] = local_78;
      *(undefined8 *)(pauVar3[2] + 8) = uStack_70;
      puVar1[6] = *puVar1;
      puVar1[7] = puVar1[1];
      puVar1[8] = puVar1[2];
      puVar1[9] = puVar1[3];
      puVar1[10] = puVar1[4];
      puVar1[0xb] = puVar1[5];
      lVar4 = Engine::get_singleton();
      *(undefined8 *)(*(long *)(in_RSI + 0x500) + 0x60) = *(undefined8 *)(lVar4 + 0x50);
      local_48 = uVar2;
    }
    lVar4 = Engine::get_singleton();
    *(long *)(*(long *)(in_RSI + 0x500) + 0x68) = *(long *)(lVar4 + 0x50) + 0x100;
    update_client_physics_interpolation_data(in_RSI);
    local_b8 = auVar7._0_8_;
    uStack_b0 = auVar7._8_8_;
    uStack_3c = 0;
    local_68 = local_b8;
    uStack_60 = uStack_b0;
    local_58 = local_b8;
    uStack_50 = uStack_b0;
    uStack_44 = 0;
    uStack_40 = 0;
    TransformInterpolator::interpolate_transform_3d
              (*(Transform3D **)(in_RSI + 0x500) + 0x30,*(Transform3D **)(in_RSI + 0x500),
               (Transform3D *)&local_68,param_1);
    if (*(SelfList **)(in_RSI + 0x240) == (SelfList *)0x0) {
      _err_print_error("get_tree","./scene/main/node.h",0x1e5,"Parameter \"data.tree\" is null.",0,0
                      );
      _err_print_error("_get_global_transform_interpolated","scene/3d/node_3d.cpp",0x1b7,
                       "Parameter \"tree\" is null.",0,0);
      *(undefined8 *)*in_RDI = local_68;
      *(undefined8 *)(*in_RDI + 8) = uStack_60;
      *(undefined8 *)in_RDI[1] = local_58;
      *(undefined8 *)(in_RDI[1] + 8) = uStack_50;
      *(ulong *)in_RDI[2] = CONCAT44(uStack_44,local_48);
      *(ulong *)(in_RDI[2] + 8) = CONCAT44(uStack_3c,uStack_40);
    }
    else {
      if (*(long *)(in_RSI + 0x428) == 0) {
        SceneTree::client_physics_interpolation_add_node_3d(*(SelfList **)(in_RSI + 0x240));
      }
      *(undefined8 *)*in_RDI = local_68;
      *(undefined8 *)(*in_RDI + 8) = uStack_60;
      *(undefined8 *)in_RDI[1] = local_58;
      *(undefined8 *)(in_RDI[1] + 8) = uStack_50;
      *(ulong *)in_RDI[2] = CONCAT44(uStack_44,local_48);
      *(ulong *)(in_RDI[2] + 8) = CONCAT44(uStack_3c,uStack_40);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Node3D::get_global_transform_interpolated() */

void Node3D::get_global_transform_interpolated(void)

{
  long lVar1;
  char cVar2;
  long lVar3;
  long in_RSI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(byte *)(in_RSI + 0x2fa) & 0x40) != 0) {
    if (*(long *)(in_RSI + 0x240) == 0) {
      _err_print_error("get_tree","./scene/main/node.h",0x1e5,"Parameter \"data.tree\" is null.",0,0
                      );
    }
    cVar2 = SceneTree::is_physics_interpolation_enabled();
    if ((cVar2 != '\0') && ((*(byte *)(in_RSI + 0x2f9) & 0x20) != 0)) {
      lVar3 = Engine::get_singleton();
      if ((*(char *)(lVar3 + 0x80) == '\0') || (-1 < *(char *)(in_RSI + 0x2f9))) {
        lVar3 = Engine::get_singleton();
        _get_global_transform_interpolated((float)*(double *)(lVar3 + 0x60));
        goto LAB_00100aab;
      }
    }
  }
  get_global_transform();
LAB_00100aab:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Node3D::_replace_dirty_mask(unsigned int) const */

void __thiscall Node3D::_replace_dirty_mask(Node3D *this,uint param_1)

{
  long in_FS_OFFSET;
  
  if (_GLOBAL_OFFSET_TABLE_ != (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    Node::current_process_thread_group();
  }
  if (*(long *)(in_FS_OFFSET + lRam0000000000100b25) != 0) {
    *(uint *)(this + 0x4c8) = param_1;
    return;
  }
  *(uint *)(this + 0x4c8) = param_1;
  return;
}



/* Node3D::_set_dirty_bits(unsigned int) const */

void __thiscall Node3D::_set_dirty_bits(Node3D *this,uint param_1)

{
  long in_FS_OFFSET;
  
  if (_GLOBAL_OFFSET_TABLE_ != (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    Node::current_process_thread_group();
  }
  if (*(long *)(in_FS_OFFSET + lRam0000000000100b75) != 0) {
    LOCK();
    *(uint *)(this + 0x4c8) = *(uint *)(this + 0x4c8) | param_1;
    UNLOCK();
    return;
  }
  *(uint *)(this + 0x4c8) = *(uint *)(this + 0x4c8) | param_1;
  return;
}



/* Node3D::_clear_dirty_bits(unsigned int) const */

void __thiscall Node3D::_clear_dirty_bits(Node3D *this,uint param_1)

{
  long in_FS_OFFSET;
  
  if (_GLOBAL_OFFSET_TABLE_ != (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    Node::current_process_thread_group();
  }
  if (*(long *)(in_FS_OFFSET + lRam0000000000100bc5) != 0) {
    LOCK();
    *(uint *)(this + 0x4c8) = *(uint *)(this + 0x4c8) & ~param_1;
    UNLOCK();
    return;
  }
  *(uint *)(this + 0x4c8) = *(uint *)(this + 0x4c8) & ~param_1;
  return;
}



/* Node3D::_validate_property(PropertyInfo&) const */

void __thiscall Node3D::_validate_property(Node3D *this,PropertyInfo *param_1)

{
  String *this_00;
  int iVar1;
  char cVar2;
  
  this_00 = (String *)(param_1 + 8);
  if (*(int *)(this + 0x4c4) != 2) {
    cVar2 = String::operator==(this_00,"basis");
    if (cVar2 != '\0') {
      *(undefined4 *)(param_1 + 0x28) = 0;
    }
    iVar1 = *(int *)(this + 0x4c4);
    if (iVar1 != 2) goto joined_r0x00100c9c;
  }
  cVar2 = String::operator==(this_00,"scale");
  if (cVar2 != '\0') {
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  iVar1 = *(int *)(this + 0x4c4);
joined_r0x00100c9c:
  if (iVar1 != 1) {
    cVar2 = String::operator==(this_00,"quaternion");
    if (cVar2 != '\0') {
      *(undefined4 *)(param_1 + 0x28) = 0;
    }
    if (*(int *)(this + 0x4c4) == 0) {
      return;
    }
  }
  cVar2 = String::operator==(this_00,"rotation");
  if (cVar2 != '\0') {
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  if ((*(int *)(this + 0x4c4) != 0) &&
     (cVar2 = String::operator==(this_00,"rotation_order"), cVar2 != '\0')) {
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



/* Node3D::_property_can_revert(StringName const&) const */

undefined4 __thiscall Node3D::_property_can_revert(Node3D *this,StringName *param_1)

{
  long *plVar1;
  long lVar2;
  char *__s;
  long lVar3;
  char cVar4;
  undefined4 uVar5;
  long lVar6;
  long in_FS_OFFSET;
  bool bVar7;
  long local_30;
  char *local_28;
  size_t local_20;
  long local_10;
  
  lVar2 = *(long *)param_1;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar2 != 0) {
    __s = *(char **)(lVar2 + 8);
    local_30 = 0;
    if (__s != (char *)0x0) {
      local_20 = strlen(__s);
      local_28 = __s;
      String::parse_latin1((StrRange *)&local_30);
      goto LAB_00100d3f;
    }
    plVar1 = (long *)(*(long *)(lVar2 + 0x10) + -0x10);
    if (*(long *)(lVar2 + 0x10) != 0) {
      do {
        lVar3 = *plVar1;
        if (lVar3 == 0) goto LAB_00100e19;
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
        local_30 = *(long *)(lVar2 + 0x10);
      }
      goto LAB_00100d3f;
    }
  }
LAB_00100e19:
  local_30 = 0;
LAB_00100d3f:
  cVar4 = String::operator==((String *)&local_30,"basis");
  if ((((cVar4 == '\0') && (cVar4 = String::operator==((String *)&local_30,"scale"), cVar4 == '\0'))
      && (cVar4 = String::operator==((String *)&local_30,"quaternion"), cVar4 == '\0')) &&
     (cVar4 = String::operator==((String *)&local_30,"rotation"), cVar4 == '\0')) {
    uVar5 = String::operator==((String *)&local_30,"position");
  }
  else {
    uVar5 = 1;
  }
  lVar2 = local_30;
  if (local_30 != 0) {
    LOCK();
    plVar1 = (long *)(local_30 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_30 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}



/* Node3D::Node3D() */

void __thiscall Node3D::Node3D(Node3D *this)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  Node::Node((Node *)this);
  *(undefined8 *)(this + 0x408) = 0;
  auVar2 = ZEXT416(_LC15);
  *(undefined ***)this = &PTR__initialize_classv_001297b0;
  uVar1 = _LC33;
  *(undefined8 *)(this + 0x418) = 0;
  *(undefined8 *)(this + 0x4b8) = uVar1;
  *(undefined8 *)(this + 0x420) = 0;
  *(Node3D **)(this + 0x410) = this;
  *(undefined8 *)(this + 0x428) = 0;
  *(Node3D **)(this + 0x430) = this;
  *(undefined8 *)(this + 0x438) = 0;
  *(undefined8 *)(this + 0x440) = 0;
  *(undefined8 *)(this + 0x468) = 0x3f800000;
  *(undefined8 *)(this + 0x470) = 0;
  *(undefined8 *)(this + 0x498) = 0x3f800000;
  *(undefined8 *)(this + 0x4a0) = 0;
  *(undefined8 *)(this + 0x4a8) = 2;
  *(undefined8 *)(this + 0x4b0) = 0;
  *(undefined8 *)(this + 0x4c0) = 0x3f800000;
  *(undefined1 (*) [16])(this + 0x448) = auVar2;
  *(undefined1 (*) [16])(this + 0x458) = auVar2;
  *(undefined1 (*) [16])(this + 0x478) = auVar2;
  *(undefined1 (*) [16])(this + 0x488) = auVar2;
  *(undefined4 *)(this + 0x4c8) = 0;
  this[0x4d8] = (Node3D)0x44;
  *(undefined8 *)(this + 0x4e0) = 0;
  *(undefined8 *)(this + 0x520) = 0;
  *(undefined8 *)(this + 0x4d0) = 0;
  *(undefined1 (*) [16])(this + 0x4e8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x4f8) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x510) = 0;
  this[0x518] = (Node3D)((byte)this[0x518] & 0xf8 | 4);
  return;
}



/* WARNING: Removing unreachable block (ram,0x001010da) */
/* WARNING: Removing unreachable block (ram,0x001010ba) */
/* WARNING: Removing unreachable block (ram,0x00101148) */
/* WARNING: Removing unreachable block (ram,0x00101151) */
/* WARNING: Removing unreachable block (ram,0x0010115a) */
/* WARNING: Removing unreachable block (ram,0x00101213) */
/* WARNING: Removing unreachable block (ram,0x001011a6) */
/* WARNING: Removing unreachable block (ram,0x001010e3) */
/* WARNING: Removing unreachable block (ram,0x001011bf) */
/* WARNING: Removing unreachable block (ram,0x001010f3) */
/* WARNING: Removing unreachable block (ram,0x001011e9) */
/* WARNING: Removing unreachable block (ram,0x0010110f) */
/* WARNING: Removing unreachable block (ram,0x001011b3) */
/* WARNING: Removing unreachable block (ram,0x00101134) */
/* WARNING: Removing unreachable block (ram,0x00101138) */
/* WARNING: Removing unreachable block (ram,0x001010cb) */
/* WARNING: Removing unreachable block (ram,0x001010d0) */
/* WARNING: Removing unreachable block (ram,0x0010103b) */
/* WARNING: Removing unreachable block (ram,0x00101090) */
/* WARNING: Removing unreachable block (ram,0x00101043) */
/* WARNING: Removing unreachable block (ram,0x0010104b) */
/* WARNING: Removing unreachable block (ram,0x0010105f) */
/* WARNING: Removing unreachable block (ram,0x0010121d) */
/* Node3D::_propagate_transform_changed(Node3D*) [clone .part.0] */

void __thiscall Node3D::_propagate_transform_changed(Node3D *this,Node3D *param_1)

{
  undefined8 *puVar1;
  Node3D *this_00;
  
  if (*(undefined8 **)(this + 0x4f0) != (undefined8 *)0x0) {
    for (puVar1 = (undefined8 *)**(undefined8 **)(this + 0x4f0); puVar1 != (undefined8 *)0x0;
        puVar1 = (undefined8 *)puVar1[1]) {
      this_00 = (Node3D *)*puVar1;
      if ((((byte)this_00[0x4d8] & 1) == 0) && (((byte)this_00[0x2fa] & 0x40) != 0)) {
        _propagate_transform_changed(this_00,param_1);
      }
    }
  }
  if ((((*(long *)(this + 0x510) != 0) || (((byte)this[0x4d8] & 0x20) != 0)) &&
      (((byte)this[0x4d8] & 8) == 0)) && (*(long *)(this + 0x408) == 0)) {
                    /* WARNING: Subroutine does not return */
    Node::current_process_thread_group();
  }
                    /* WARNING: Subroutine does not return */
  Node::current_process_thread_group();
}



/* Node3D::_propagate_transform_changed(Node3D*) */

void __thiscall Node3D::_propagate_transform_changed(Node3D *this,Node3D *param_1)

{
  if (((byte)this[0x2fa] & 0x40) != 0) {
    _propagate_transform_changed(this,param_1);
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Node3D::_property_get_revert(StringName const&, Variant&) const */

undefined4 __thiscall
Node3D::_property_get_revert(Node3D *this,StringName *param_1,Variant *param_2)

{
  long lVar1;
  char *__s;
  char cVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  long in_FS_OFFSET;
  undefined4 extraout_XMM1_Da;
  undefined4 extraout_XMM1_Da_00;
  Vector local_d1;
  undefined8 local_d0;
  char *local_c8;
  size_t local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  int local_a8 [8];
  undefined8 local_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined4 local_48;
  undefined8 local_44 [2];
  long local_30;
  
  lVar1 = *(long *)param_1;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_d1 = (Vector)0x0;
  if (lVar1 == 0) {
    local_d0 = 0;
  }
  else {
    __s = *(char **)(lVar1 + 8);
    local_d0 = 0;
    if (__s == (char *)0x0) {
      if (*(long *)(lVar1 + 0x10) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_d0,(CowData *)(lVar1 + 0x10));
      }
    }
    else {
      local_c0 = strlen(__s);
      local_c8 = __s;
      String::parse_latin1((StrRange *)&local_d0);
    }
  }
  cVar2 = String::operator==((String *)&local_d0,"basis");
  if (cVar2 == '\0') {
    cVar2 = String::operator==((String *)&local_d0,"scale");
    if (cVar2 == '\0') {
      cVar2 = String::operator==((String *)&local_d0,"quaternion");
      if (cVar2 == '\0') {
        cVar2 = String::operator==((String *)&local_d0,"rotation");
        if (cVar2 == '\0') {
          uVar3 = String::operator==((String *)&local_d0,"position");
          if ((char)uVar3 == '\0') goto LAB_001013af;
          StringName::StringName((StringName *)&local_c8,"transform",false);
          PropertyUtils::get_property_default_value
                    ((Object *)local_a8,(StringName *)this,(bool *)&local_c8,&local_d1,false,
                     (Node *)0x0,(bool *)0x0);
          if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
            StringName::unref();
          }
          if (local_d1 == (Vector)0x0) goto LAB_001016b0;
          Variant::operator_cast_to_Transform3D((Variant *)local_68);
          puVar4 = local_44;
LAB_00101670:
          Variant::Variant((Variant *)&local_88,(Vector3 *)puVar4);
          goto LAB_0010167d;
        }
        StringName::StringName((StringName *)&local_c8,"transform",false);
        PropertyUtils::get_property_default_value
                  ((Object *)local_a8,(StringName *)this,(bool *)&local_c8,&local_d1,false,
                   (Node *)0x0,(bool *)0x0);
        if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
          StringName::unref();
        }
        if ((local_d1 != (Vector)0x0) && (local_a8[0] == 0x12)) {
          Variant::operator_cast_to_Transform3D((Variant *)local_68);
          local_b8 = Basis::get_euler_normalized((Variant *)local_68,*(undefined4 *)(this + 0x4a8));
          puVar4 = &local_b8;
          local_b0 = extraout_XMM1_Da;
          goto LAB_00101670;
        }
LAB_001016b0:
        local_88 = 0;
        uStack_80 = uStack_80 & 0xffffffff00000000;
        Variant::Variant((Variant *)local_68,(Vector3 *)&local_88);
        Variant::operator=(param_2,(Variant *)local_68);
        cVar2 = Variant::needs_deinit[(int)local_68._0_4_];
      }
      else {
        StringName::StringName((StringName *)&local_c8,"transform",false);
        PropertyUtils::get_property_default_value
                  ((Object *)local_a8,(StringName *)this,(bool *)&local_c8,&local_d1,false,
                   (Node *)0x0,(bool *)0x0);
        if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
          StringName::unref();
        }
        if ((local_d1 == (Vector)0x0) || (local_a8[0] != 0x12)) {
          local_88 = __LC41;
          uStack_80 = _LC131;
          Variant::Variant((Variant *)local_68,(Quaternion *)&local_88);
          if (Variant::needs_deinit[*(int *)param_2] != '\0') {
            Variant::_clear_internal();
          }
          *(undefined4 *)param_2 = local_68._0_4_;
          *(undefined8 *)(param_2 + 8) = local_68._8_8_;
          *(undefined8 *)(param_2 + 0x10) = local_58._0_8_;
          goto LAB_00101399;
        }
        Variant::operator_cast_to_Transform3D((Variant *)local_68);
        Basis::get_rotation_quaternion();
        Variant::Variant((Variant *)&local_88,(Quaternion *)&local_b8);
LAB_0010167d:
        Variant::operator=(param_2,(Variant *)&local_88);
        cVar2 = Variant::needs_deinit[(int)local_88];
      }
      if (cVar2 != '\0') {
        Variant::_clear_internal();
      }
    }
    else {
      StringName::StringName((StringName *)&local_c8,"transform",false);
      PropertyUtils::get_property_default_value
                ((Object *)local_a8,(StringName *)this,(bool *)&local_c8,&local_d1,false,(Node *)0x0
                 ,(bool *)0x0);
      if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
        StringName::unref();
      }
      if ((local_d1 != (Vector)0x0) && (local_a8[0] == 0x12)) {
        Variant::operator_cast_to_Transform3D((Variant *)local_68);
        local_b8 = Basis::get_scale();
        puVar4 = &local_b8;
        local_b0 = extraout_XMM1_Da_00;
        goto LAB_00101670;
      }
      uStack_80 = CONCAT44(uStack_80._4_4_,0x3f800000);
      local_88 = _LC33;
      Variant::Variant((Variant *)local_68,(Vector3 *)&local_88);
      if (Variant::needs_deinit[*(int *)param_2] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_2 = local_68._0_4_;
      *(undefined8 *)(param_2 + 8) = local_68._8_8_;
      *(undefined8 *)(param_2 + 0x10) = local_58._0_8_;
    }
  }
  else {
    StringName::StringName((StringName *)&local_c8,"transform",false);
    PropertyUtils::get_property_default_value
              ((Object *)local_a8,(StringName *)this,(bool *)&local_c8,&local_d1,false,(Node *)0x0,
               (bool *)0x0);
    if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
      StringName::unref();
    }
    if ((local_d1 == (Vector)0x0) || (local_a8[0] != 0x12)) {
      local_48 = 0x3f800000;
      local_68 = ZEXT416(_LC15);
      local_58 = ZEXT416(_LC15);
      Variant::Variant((Variant *)&local_88,(Basis *)local_68);
      if (Variant::needs_deinit[*(int *)param_2] != '\0') {
        Variant::_clear_internal();
      }
      *(int *)param_2 = (int)local_88;
      *(ulong *)(param_2 + 8) = uStack_80;
      *(undefined8 *)(param_2 + 0x10) = uStack_78;
    }
    else {
      Variant::operator_cast_to_Transform3D((Variant *)local_68);
      Variant::Variant((Variant *)&local_88,(Basis *)local_68);
      if (Variant::needs_deinit[*(int *)param_2] != '\0') {
        Variant::_clear_internal();
      }
      *(int *)param_2 = (int)local_88;
      *(ulong *)(param_2 + 8) = uStack_80;
      *(undefined8 *)(param_2 + 0x10) = uStack_78;
    }
  }
LAB_00101399:
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  uVar3 = 1;
LAB_001013af:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Node3D::get_rotation_edit_mode() const */

undefined4 __thiscall Node3D::get_rotation_edit_mode(Node3D *this)

{
  char cVar1;
  undefined4 uVar2;
  long in_FS_OFFSET;
  CowData<char32_t> aCStack_48 [8];
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (_GLOBAL_OFFSET_TABLE_ != (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    Node::current_process_thread_group();
  }
  if (*(long *)(in_FS_OFFSET + lRam00000000001018e5) == 0) {
    cVar1 = is_current_thread_safe_for_nodes();
    if ((cVar1 == '\0') && (((byte)this[0x2fa] & 0x40) != 0)) {
      Node::get_description();
      local_38 = 
      "This function in this node (%s) can only be accessed from either the main thread or a thread group. Use call_deferred() instead."
      ;
      local_30 = 0x80;
      local_40 = 0;
      String::parse_latin1((StrRange *)&local_40);
      vformat<String>((CowData<char32_t> *)&local_38,(StrRange *)&local_40,aCStack_48);
      _err_print_error("get_rotation_edit_mode","scene/3d/node_3d.cpp",0x23c,
                       "Condition \"!is_readable_from_caller_thread()\" is true. Returning: (ROTATION_EDIT_MODE_EULER)"
                       ,(CowData<char32_t> *)&local_38,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
      CowData<char32_t>::_unref(aCStack_48);
      uVar2 = 0;
      goto LAB_001018f2;
    }
  }
  uVar2 = *(undefined4 *)(this + 0x4c4);
LAB_001018f2:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Node3D::get_rotation_order() const */

undefined4 __thiscall Node3D::get_rotation_order(Node3D *this)

{
  char cVar1;
  undefined4 uVar2;
  long in_FS_OFFSET;
  CowData<char32_t> aCStack_48 [8];
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (_GLOBAL_OFFSET_TABLE_ != (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    Node::current_process_thread_group();
  }
  if (*(long *)(in_FS_OFFSET + lRam0000000000101a05) == 0) {
    cVar1 = is_current_thread_safe_for_nodes();
    if ((cVar1 == '\0') && (((byte)this[0x2fa] & 0x40) != 0)) {
      Node::get_description();
      local_38 = 
      "This function in this node (%s) can only be accessed from either the main thread or a thread group. Use call_deferred() instead."
      ;
      local_30 = 0x80;
      local_40 = 0;
      String::parse_latin1((StrRange *)&local_40);
      vformat<String>((CowData<char32_t> *)&local_38,(StrRange *)&local_40,aCStack_48);
      _err_print_error("get_rotation_order","scene/3d/node_3d.cpp",0x260,
                       "Condition \"!is_readable_from_caller_thread()\" is true. Returning: (EulerOrder::XYZ)"
                       ,(CowData<char32_t> *)&local_38,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
      CowData<char32_t>::_unref(aCStack_48);
      uVar2 = 0;
      goto LAB_00101a12;
    }
  }
  uVar2 = *(undefined4 *)(this + 0x4a8);
LAB_00101a12:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Node3D::get_position() const */

undefined1  [16] __thiscall Node3D::get_position(Node3D *this)

{
  char cVar1;
  long in_FS_OFFSET;
  undefined1 auVar2 [16];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (_GLOBAL_OFFSET_TABLE_ != (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    Node::current_process_thread_group();
  }
  if (*(long *)(in_FS_OFFSET + lRam0000000000101b25) == 0) {
    cVar1 = is_current_thread_safe_for_nodes();
    if ((cVar1 == '\0') && (((byte)this[0x2fa] & 0x40) != 0)) {
      Node::get_description();
      local_48 = 
      "This function in this node (%s) can only be accessed from either the main thread or a thread group. Use call_deferred() instead."
      ;
      local_50 = 0;
      local_40 = 0x80;
      String::parse_latin1((StrRange *)&local_50);
      vformat<String>((CowData<char32_t> *)&local_48,(StrRange *)&local_50,local_58);
      _err_print_error("get_position","scene/3d/node_3d.cpp",0x28b,
                       "Condition \"!is_readable_from_caller_thread()\" is true. Returning: (Vector3())"
                       ,(CowData<char32_t> *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      CowData<char32_t>::_unref(local_58);
      local_30 = 0;
      local_38 = 0;
      goto LAB_00101b42;
    }
  }
  local_38 = *(undefined8 *)(this + 0x49c);
  local_30 = *(undefined4 *)(this + 0x4a4);
LAB_00101b42:
  auVar2._8_4_ = local_30;
  auVar2._0_8_ = local_38;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar2._12_4_ = 0;
    return auVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x00101c75) */
/* WARNING: Removing unreachable block (ram,0x00101cd8) */
/* WARNING: Removing unreachable block (ram,0x00101ce1) */
/* WARNING: Removing unreachable block (ram,0x00101c86) */
/* WARNING: Removing unreachable block (ram,0x00101c8b) */
/* WARNING: Removing unreachable block (ram,0x00101c95) */
/* WARNING: Removing unreachable block (ram,0x00101cea) */
/* WARNING: Removing unreachable block (ram,0x00101c9e) */
/* WARNING: Removing unreachable block (ram,0x00101cb6) */
/* WARNING: Removing unreachable block (ram,0x00101cca) */
/* WARNING: Removing unreachable block (ram,0x00101d84) */
/* Node3D::set_disable_scale(bool) */

void __thiscall Node3D::set_disable_scale(Node3D *this,bool param_1)

{
                    /* WARNING: Subroutine does not return */
  Node::current_process_thread_group();
}



/* Node3D::is_scale_disabled() const */

byte __thiscall Node3D::is_scale_disabled(Node3D *this)

{
  byte bVar1;
  char cVar2;
  long in_FS_OFFSET;
  CowData<char32_t> local_48 [8];
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (_GLOBAL_OFFSET_TABLE_ != (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    Node::current_process_thread_group();
  }
  if (*(long *)(in_FS_OFFSET + lRam0000000000101dc5) == 0) {
    cVar2 = is_current_thread_safe_for_nodes();
    if ((cVar2 == '\0') && (((byte)this[0x2fa] & 0x40) != 0)) {
      Node::get_description();
      local_38 = 
      "This function in this node (%s) can only be accessed from either the main thread or a thread group. Use call_deferred() instead."
      ;
      local_40 = 0;
      local_30 = 0x80;
      String::parse_latin1((StrRange *)&local_40);
      vformat<String>((CowData<char32_t> *)&local_38,(StrRange *)&local_40,local_48);
      _err_print_error("is_scale_disabled","scene/3d/node_3d.cpp",0x359,
                       "Condition \"!is_readable_from_caller_thread()\" is true. Returning: (false)"
                       ,(CowData<char32_t> *)&local_38,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
      CowData<char32_t>::_unref(local_48);
      bVar1 = 0;
      goto LAB_00101dd6;
    }
  }
  bVar1 = (byte)this[0x4d8] >> 7;
LAB_00101dd6:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Node3D::is_set_as_top_level() const */

byte __thiscall Node3D::is_set_as_top_level(Node3D *this)

{
  byte bVar1;
  char cVar2;
  long in_FS_OFFSET;
  CowData<char32_t> local_48 [8];
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (_GLOBAL_OFFSET_TABLE_ != (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    Node::current_process_thread_group();
  }
  if (*(long *)(in_FS_OFFSET + lRam0000000000101ef5) == 0) {
    cVar2 = is_current_thread_safe_for_nodes();
    if ((cVar2 == '\0') && (((byte)this[0x2fa] & 0x40) != 0)) {
      Node::get_description();
      local_38 = 
      "This function in this node (%s) can only be accessed from either the main thread or a thread group. Use call_deferred() instead."
      ;
      local_40 = 0;
      local_30 = 0x80;
      String::parse_latin1((StrRange *)&local_40);
      vformat<String>((CowData<char32_t> *)&local_38,(StrRange *)&local_40,local_48);
      _err_print_error("is_set_as_top_level","scene/3d/node_3d.cpp",0x376,
                       "Condition \"!is_readable_from_caller_thread()\" is true. Returning: (false)"
                       ,(CowData<char32_t> *)&local_38,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
      CowData<char32_t>::_unref(local_48);
      bVar1 = 0;
      goto LAB_00101f06;
    }
  }
  bVar1 = (byte)this[0x4d8] & 1;
LAB_00101f06:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Node3D::get_world_3d() const */

void Node3D::get_world_3d(void)

{
  char cVar1;
  long in_RSI;
  undefined8 *in_RDI;
  long in_FS_OFFSET;
  CowData<char32_t> aCStack_58 [8];
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (_GLOBAL_OFFSET_TABLE_ != (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    Node::current_process_thread_group();
  }
  if (*(long *)(in_FS_OFFSET + lRam000000000010202a) == 0) {
    cVar1 = is_current_thread_safe_for_nodes();
    if ((cVar1 == '\0') && ((*(byte *)(in_RSI + 0x2fa) & 0x40) != 0)) {
      Node::get_description();
      local_48 = 
      "This function in this node (%s) can only be accessed from either the main thread or a thread group. Use call_deferred() instead."
      ;
      local_40 = 0x80;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<String>((CowData<char32_t> *)&local_48,(StrRange *)&local_50,aCStack_58);
      _err_print_error("get_world_3d","scene/3d/node_3d.cpp",0x37b,
                       "Condition \"!is_readable_from_caller_thread()\" is true. Returning: (Ref<World3D>())"
                       ,(CowData<char32_t> *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      CowData<char32_t>::_unref(aCStack_58);
      *in_RDI = 0;
      goto LAB_00102056;
    }
  }
  if ((*(byte *)(in_RSI + 0x4d8) & 2) == 0) {
    _err_print_error("get_world_3d","scene/3d/node_3d.cpp",0x37c,
                     "Condition \"!is_inside_world()\" is true. Returning: Ref<World3D>()",0,0);
    *in_RDI = 0;
  }
  else if (*(long *)(in_RSI + 0x4d0) == 0) {
    _err_print_error("get_world_3d","scene/3d/node_3d.cpp",0x37d,
                     "Parameter \"data.viewport\" is null.",0,0);
    *in_RDI = 0;
  }
  else {
    Viewport::find_world_3d();
  }
LAB_00102056:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Node3D::is_visible() const */

byte __thiscall Node3D::is_visible(Node3D *this)

{
  byte bVar1;
  char cVar2;
  long in_FS_OFFSET;
  CowData<char32_t> local_48 [8];
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (_GLOBAL_OFFSET_TABLE_ != (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    Node::current_process_thread_group();
  }
  if (*(long *)(in_FS_OFFSET + lRam00000000001021e5) == 0) {
    cVar2 = is_current_thread_safe_for_nodes();
    if ((cVar2 == '\0') && (((byte)this[0x2fa] & 0x40) != 0)) {
      Node::get_description();
      local_38 = 
      "This function in this node (%s) can only be accessed from either the main thread or a thread group. Use call_deferred() instead."
      ;
      local_40 = 0;
      local_30 = 0x80;
      String::parse_latin1((StrRange *)&local_40);
      vformat<String>((CowData<char32_t> *)&local_38,(StrRange *)&local_40,local_48);
      _err_print_error("is_visible","scene/3d/node_3d.cpp",0x3ae,
                       "Condition \"!is_readable_from_caller_thread()\" is true. Returning: (false)"
                       ,(CowData<char32_t> *)&local_38,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
      CowData<char32_t>::_unref(local_48);
      bVar1 = 0;
      goto LAB_001021f9;
    }
  }
  bVar1 = (byte)this[0x4d8] >> 6 & 1;
LAB_001021f9:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Node3D::is_visible_in_tree() const */

byte __thiscall Node3D::is_visible_in_tree(Node3D *this)

{
  byte bVar1;
  char cVar2;
  long in_FS_OFFSET;
  CowData<char32_t> aCStack_48 [8];
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (_GLOBAL_OFFSET_TABLE_ != (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    Node::current_process_thread_group();
  }
  if (*(long *)(in_FS_OFFSET + lRam0000000000102315) == 0) {
    cVar2 = is_current_thread_safe_for_nodes();
    if ((cVar2 == '\0') && (((byte)this[0x2fa] & 0x40) != 0)) {
      Node::get_description();
      local_38 = 
      "This function in this node (%s) can only be accessed from either the main thread or a thread group. Use call_deferred() instead."
      ;
      local_30 = 0x80;
      local_40 = 0;
      String::parse_latin1((StrRange *)&local_40);
      vformat<String>((CowData<char32_t> *)&local_38,(StrRange *)&local_40,aCStack_48);
      _err_print_error("is_visible_in_tree","scene/3d/node_3d.cpp",0x3b3,
                       "Condition \"!is_readable_from_caller_thread()\" is true. Returning: (false)"
                       ,(CowData<char32_t> *)&local_38,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
      CowData<char32_t>::_unref(aCStack_48);
      bVar1 = 0;
      goto LAB_0010233d;
    }
  }
  do {
    bVar1 = (byte)this[0x4d8] >> 6 & 1;
    if (((byte)this[0x4d8] >> 6 & 1) == 0) {
      bVar1 = 0;
      break;
    }
    this = *(Node3D **)(this + 0x4e8);
  } while (this != (Node3D *)0x0);
LAB_0010233d:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x00102455) */
/* WARNING: Removing unreachable block (ram,0x001024c0) */
/* WARNING: Removing unreachable block (ram,0x001024c9) */
/* WARNING: Removing unreachable block (ram,0x00102466) */
/* WARNING: Removing unreachable block (ram,0x0010246b) */
/* WARNING: Removing unreachable block (ram,0x00102475) */
/* WARNING: Removing unreachable block (ram,0x001024d2) */
/* WARNING: Removing unreachable block (ram,0x0010247e) */
/* WARNING: Removing unreachable block (ram,0x00102499) */
/* WARNING: Removing unreachable block (ram,0x001024ad) */
/* WARNING: Removing unreachable block (ram,0x0010256c) */
/* Node3D::set_notify_transform(bool) */

void __thiscall Node3D::set_notify_transform(Node3D *this,bool param_1)

{
                    /* WARNING: Subroutine does not return */
  Node::current_process_thread_group();
}



/* Node3D::is_transform_notification_enabled() const */

byte __thiscall Node3D::is_transform_notification_enabled(Node3D *this)

{
  byte bVar1;
  char cVar2;
  long in_FS_OFFSET;
  CowData<char32_t> local_48 [8];
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (_GLOBAL_OFFSET_TABLE_ != (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    Node::current_process_thread_group();
  }
  if (*(long *)(in_FS_OFFSET + lRam00000000001025b5) == 0) {
    cVar2 = is_current_thread_safe_for_nodes();
    if ((cVar2 == '\0') && (((byte)this[0x2fa] & 0x40) != 0)) {
      Node::get_description();
      local_38 = 
      "This function in this node (%s) can only be accessed from either the main thread or a thread group. Use call_deferred() instead."
      ;
      local_40 = 0;
      local_30 = 0x80;
      String::parse_latin1((StrRange *)&local_40);
      vformat<String>((CowData<char32_t> *)&local_38,(StrRange *)&local_40,local_48);
      _err_print_error("is_transform_notification_enabled","scene/3d/node_3d.cpp",0x445,
                       "Condition \"!is_readable_from_caller_thread()\" is true. Returning: (false)"
                       ,(CowData<char32_t> *)&local_38,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
      CowData<char32_t>::_unref(local_48);
      bVar1 = 0;
      goto LAB_001025c9;
    }
  }
  bVar1 = (byte)this[0x4d8] >> 5 & 1;
LAB_001025c9:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x001026e5) */
/* WARNING: Removing unreachable block (ram,0x00102750) */
/* WARNING: Removing unreachable block (ram,0x00102759) */
/* WARNING: Removing unreachable block (ram,0x001026f6) */
/* WARNING: Removing unreachable block (ram,0x001026fb) */
/* WARNING: Removing unreachable block (ram,0x00102705) */
/* WARNING: Removing unreachable block (ram,0x00102762) */
/* WARNING: Removing unreachable block (ram,0x0010270e) */
/* WARNING: Removing unreachable block (ram,0x00102729) */
/* WARNING: Removing unreachable block (ram,0x0010273d) */
/* WARNING: Removing unreachable block (ram,0x001027fc) */
/* Node3D::set_notify_local_transform(bool) */

void __thiscall Node3D::set_notify_local_transform(Node3D *this,bool param_1)

{
                    /* WARNING: Subroutine does not return */
  Node::current_process_thread_group();
}



/* Node3D::is_local_transform_notification_enabled() const */

byte __thiscall Node3D::is_local_transform_notification_enabled(Node3D *this)

{
  byte bVar1;
  char cVar2;
  long in_FS_OFFSET;
  CowData<char32_t> local_48 [8];
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (_GLOBAL_OFFSET_TABLE_ != (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    Node::current_process_thread_group();
  }
  if (*(long *)(in_FS_OFFSET + lRam0000000000102845) == 0) {
    cVar2 = is_current_thread_safe_for_nodes();
    if ((cVar2 == '\0') && (((byte)this[0x2fa] & 0x40) != 0)) {
      Node::get_description();
      local_38 = 
      "This function in this node (%s) can only be accessed from either the main thread or a thread group. Use call_deferred() instead."
      ;
      local_40 = 0;
      local_30 = 0x80;
      String::parse_latin1((StrRange *)&local_40);
      vformat<String>((CowData<char32_t> *)&local_38,(StrRange *)&local_40,local_48);
      _err_print_error("is_local_transform_notification_enabled","scene/3d/node_3d.cpp",0x44f,
                       "Condition \"!is_readable_from_caller_thread()\" is true. Returning: (false)"
                       ,(CowData<char32_t> *)&local_38,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
      CowData<char32_t>::_unref(local_48);
      bVar1 = 0;
      goto LAB_00102859;
    }
  }
  bVar1 = (byte)this[0x4d8] >> 4 & 1;
LAB_00102859:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Node3D::get_visibility_parent() const */

void Node3D::get_visibility_parent(void)

{
  char cVar1;
  long in_RSI;
  NodePath *in_RDI;
  long in_FS_OFFSET;
  CowData<char32_t> aCStack_58 [8];
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (_GLOBAL_OFFSET_TABLE_ != (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    Node::current_process_thread_group();
  }
  if (*(long *)(in_FS_OFFSET + lRam000000000010297a) == 0) {
    cVar1 = is_current_thread_safe_for_nodes();
    if ((cVar1 == '\0') && ((*(byte *)(in_RSI + 0x2fa) & 0x40) != 0)) {
      Node::get_description();
      local_48 = 
      "This function in this node (%s) can only be accessed from either the main thread or a thread group. Use call_deferred() instead."
      ;
      local_40 = 0x80;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<String>((CowData<char32_t> *)&local_48,(StrRange *)&local_50,aCStack_58);
      _err_print_error("get_visibility_parent","scene/3d/node_3d.cpp",0x488,
                       "Condition \"!is_readable_from_caller_thread()\" is true. Returning: (NodePath())"
                       ,(CowData<char32_t> *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      CowData<char32_t>::_unref(aCStack_58);
      *(undefined8 *)in_RDI = 0;
      goto LAB_00102990;
    }
  }
  NodePath::NodePath(in_RDI,(NodePath *)(in_RSI + 0x520));
LAB_00102990:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Node3D::get_parent_node_3d() const */

undefined8 __thiscall Node3D::get_parent_node_3d(Node3D *this)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  CowData<char32_t> aCStack_48 [8];
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (_GLOBAL_OFFSET_TABLE_ != (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    Node::current_process_thread_group();
  }
  if (*(long *)(in_FS_OFFSET + lRam0000000000102ab5) == 0) {
    cVar1 = is_current_thread_safe_for_nodes();
    if ((cVar1 != '\0') || (((byte)this[0x2fa] & 0x40) == 0)) goto LAB_00102abc;
    Node::get_description();
    local_38 = 
    "This function in this node (%s) can only be accessed from either the main thread or a thread group. Use call_deferred() instead."
    ;
    local_30 = 0x80;
    local_40 = 0;
    String::parse_latin1((StrRange *)&local_40);
    vformat<String>((CowData<char32_t> *)&local_38,(StrRange *)&local_40,aCStack_48);
    _err_print_error("get_parent_node_3d","scene/3d/node_3d.cpp",0x1fc,
                     "Condition \"!is_readable_from_caller_thread()\" is true. Returning: (nullptr)"
                     ,(CowData<char32_t> *)&local_38,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
    CowData<char32_t>::_unref(aCStack_48);
  }
  else {
LAB_00102abc:
    if (((byte)this[0x4d8] & 1) == 0) {
      lVar2 = Node::get_parent();
      if (lVar2 != 0) {
        if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar3 = __dynamic_cast(lVar2,&Object::typeinfo,&typeinfo,0);
          return uVar3;
        }
        goto LAB_00102bd2;
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
LAB_00102bd2:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x00102c10) */
/* WARNING: Removing unreachable block (ram,0x00102d10) */
/* WARNING: Removing unreachable block (ram,0x00102d90) */
/* WARNING: Removing unreachable block (ram,0x00102c25) */
/* WARNING: Removing unreachable block (ram,0x00102c2a) */
/* WARNING: Removing unreachable block (ram,0x00102c34) */
/* WARNING: Removing unreachable block (ram,0x00102d9d) */
/* WARNING: Removing unreachable block (ram,0x00102c41) */
/* WARNING: Removing unreachable block (ram,0x00102d19) */
/* WARNING: Removing unreachable block (ram,0x00102d2d) */
/* WARNING: Removing unreachable block (ram,0x00102c4e) */
/* WARNING: Removing unreachable block (ram,0x00102c5e) */
/* WARNING: Removing unreachable block (ram,0x00102e80) */
/* WARNING: Removing unreachable block (ram,0x00102c6e) */
/* WARNING: Removing unreachable block (ram,0x00102e50) */
/* WARNING: Removing unreachable block (ram,0x00102c85) */
/* WARNING: Removing unreachable block (ram,0x00102c91) */
/* WARNING: Removing unreachable block (ram,0x00102c9c) */
/* WARNING: Removing unreachable block (ram,0x00102ca8) */
/* WARNING: Removing unreachable block (ram,0x00102cac) */
/* WARNING: Removing unreachable block (ram,0x00102d70) */
/* WARNING: Removing unreachable block (ram,0x00102d8b) */
/* WARNING: Removing unreachable block (ram,0x00102cb9) */
/* WARNING: Removing unreachable block (ram,0x00102d60) */
/* WARNING: Removing unreachable block (ram,0x00102cc6) */
/* WARNING: Removing unreachable block (ram,0x00102cdc) */
/* WARNING: Removing unreachable block (ram,0x00102cf0) */
/* WARNING: Removing unreachable block (ram,0x00102e32) */
/* WARNING: Removing unreachable block (ram,0x00102e42) */
/* WARNING: Removing unreachable block (ram,0x00102eb1) */
/* Node3D::force_update_transform() */

void __thiscall Node3D::force_update_transform(Node3D *this)

{
                    /* WARNING: Subroutine does not return */
  Node::current_process_thread_group();
}



/* WARNING: Removing unreachable block (ram,0x00102f12) */
/* WARNING: Removing unreachable block (ram,0x00102f70) */
/* WARNING: Removing unreachable block (ram,0x00102f76) */
/* WARNING: Removing unreachable block (ram,0x00102f7d) */
/* WARNING: Removing unreachable block (ram,0x00102f87) */
/* WARNING: Removing unreachable block (ram,0x00102f1a) */
/* WARNING: Removing unreachable block (ram,0x00102f8b) */
/* WARNING: Removing unreachable block (ram,0x00102fb0) */
/* WARNING: Removing unreachable block (ram,0x00102ef5) */
/* WARNING: Removing unreachable block (ram,0x00102fd0) */
/* WARNING: Removing unreachable block (ram,0x00102fdd) */
/* WARNING: Removing unreachable block (ram,0x00102fea) */
/* WARNING: Removing unreachable block (ram,0x001030b0) */
/* WARNING: Removing unreachable block (ram,0x00102f08) */
/* WARNING: Removing unreachable block (ram,0x00102f0d) */
/* WARNING: Removing unreachable block (ram,0x00102fb5) */
/* WARNING: Removing unreachable block (ram,0x001030c0) */
/* WARNING: Removing unreachable block (ram,0x00102fc1) */
/* WARNING: Removing unreachable block (ram,0x00102f27) */
/* WARNING: Removing unreachable block (ram,0x00102f4b) */
/* WARNING: Removing unreachable block (ram,0x00102f5f) */
/* WARNING: Removing unreachable block (ram,0x001030cc) */
/* Node3D::get_transform() const */

void Node3D::get_transform(void)

{
                    /* WARNING: Subroutine does not return */
  Node::current_process_thread_group();
}



/* Node3D::get_quaternion() const */

Node3D * __thiscall Node3D::get_quaternion(Node3D *this)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  get_transform();
  Basis::get_rotation_quaternion();
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Node3D::get_local_gizmo_transform() const */

Node3D * __thiscall Node3D::get_local_gizmo_transform(Node3D *this)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  get_transform();
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Node3D::get_basis() const */

void Node3D::get_basis(void)

{
  uint uVar1;
  char cVar2;
  long in_RSI;
  undefined1 (*in_RDI) [16];
  long in_FS_OFFSET;
  CowData<char32_t> aCStack_88 [8];
  undefined8 local_80;
  char *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (_GLOBAL_OFFSET_TABLE_ != (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    Node::current_process_thread_group();
  }
  if (*(long *)(in_FS_OFFSET + lRam00000000001031ba) == 0) {
    cVar2 = is_current_thread_safe_for_nodes();
    if ((cVar2 == '\0') && ((*(byte *)(in_RSI + 0x2fa) & 0x40) != 0)) {
      Node::get_description();
      local_78 = 
      "This function in this node (%s) can only be accessed from either the main thread or a thread group. Use call_deferred() instead."
      ;
      local_70 = 0x80;
      local_80 = 0;
      String::parse_latin1((StrRange *)&local_80);
      vformat<String>((CowData<char32_t> *)&local_78,(StrRange *)&local_80,aCStack_88);
      _err_print_error("get_basis","scene/3d/node_3d.cpp",0x145,
                       "Condition \"!is_readable_from_caller_thread()\" is true. Returning: (Basis())"
                       ,(CowData<char32_t> *)&local_78,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      CowData<char32_t>::_unref(aCStack_88);
      uVar1 = _LC15;
      *(undefined4 *)in_RDI[2] = 0x3f800000;
      *in_RDI = ZEXT416(uVar1);
      in_RDI[1] = ZEXT416(uVar1);
      goto LAB_001031e8;
    }
  }
  get_transform();
  *(undefined4 *)in_RDI[2] = local_48;
  *(undefined8 *)*in_RDI = local_68;
  *(undefined8 *)(*in_RDI + 8) = uStack_60;
  *(undefined8 *)in_RDI[1] = local_58;
  *(undefined8 *)(in_RDI[1] + 8) = uStack_50;
LAB_001031e8:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Node3D::get_relative_transform(Node const*) const */

Node * Node3D::get_relative_transform(Node *param_1)

{
  uint uVar1;
  char cVar2;
  long in_RDX;
  long in_RSI;
  long in_FS_OFFSET;
  CowData<char32_t> aCStack_b8 [8];
  undefined8 local_b0;
  char *local_a8;
  undefined8 local_a0;
  Node local_98 [104];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (_GLOBAL_OFFSET_TABLE_ != (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    Node::current_process_thread_group();
  }
  if (*(long *)(in_FS_OFFSET + lRam0000000000103325) == 0) {
    cVar2 = is_current_thread_safe_for_nodes();
    if ((cVar2 == '\0') && ((*(byte *)(in_RSI + 0x2fa) & 0x40) != 0)) {
      Node::get_description();
      local_a8 = 
      "This function in this node (%s) can only be accessed from either the main thread or a thread group. Use call_deferred() instead."
      ;
      local_a0 = 0x80;
      local_b0 = 0;
      String::parse_latin1((StrRange *)&local_b0);
      vformat<String>((CowData<char32_t> *)&local_a8,(StrRange *)&local_b0,aCStack_b8);
      _err_print_error("get_relative_transform","scene/3d/node_3d.cpp",0x205,
                       "Condition \"!is_readable_from_caller_thread()\" is true. Returning: (Transform3D())"
                       ,(CowData<char32_t> *)&local_a8,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      CowData<char32_t>::_unref(aCStack_b8);
      uVar1 = _LC15;
      *(undefined4 *)(param_1 + 0x20) = 0x3f800000;
      *(undefined8 *)(param_1 + 0x24) = 0;
      *(undefined4 *)(param_1 + 0x2c) = 0;
      *(undefined1 (*) [16])param_1 = ZEXT416(uVar1);
      *(undefined1 (*) [16])(param_1 + 0x10) = ZEXT416(uVar1);
      goto LAB_00103383;
    }
  }
  if (in_RSI != in_RDX) {
    if (*(long *)(in_RSI + 0x4e8) != 0) {
      if (*(long *)(in_RSI + 0x4e8) == in_RDX) {
        get_transform();
      }
      else {
        get_transform();
        get_relative_transform(local_98);
        Transform3D::operator*((Transform3D *)param_1,(Transform3D *)local_98);
      }
      goto LAB_00103383;
    }
    _err_print_error("get_relative_transform","scene/3d/node_3d.cpp",0x20a,
                     "Parameter \"data.parent\" is null.",0,0);
  }
  uVar1 = _LC15;
  *(undefined4 *)(param_1 + 0x20) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined1 (*) [16])param_1 = ZEXT416(uVar1);
  *(undefined1 (*) [16])(param_1 + 0x10) = ZEXT416(uVar1);
LAB_00103383:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x0010354f) */
/* WARNING: Removing unreachable block (ram,0x001035a8) */
/* WARNING: Removing unreachable block (ram,0x001035ae) */
/* WARNING: Removing unreachable block (ram,0x001035b5) */
/* WARNING: Removing unreachable block (ram,0x001035bf) */
/* WARNING: Removing unreachable block (ram,0x00103557) */
/* WARNING: Removing unreachable block (ram,0x001035c3) */
/* WARNING: Removing unreachable block (ram,0x00103605) */
/* WARNING: Removing unreachable block (ram,0x00103532) */
/* WARNING: Removing unreachable block (ram,0x00103628) */
/* WARNING: Removing unreachable block (ram,0x00103635) */
/* WARNING: Removing unreachable block (ram,0x00103642) */
/* WARNING: Removing unreachable block (ram,0x001036f0) */
/* WARNING: Removing unreachable block (ram,0x00103545) */
/* WARNING: Removing unreachable block (ram,0x0010354a) */
/* WARNING: Removing unreachable block (ram,0x0010360a) */
/* WARNING: Removing unreachable block (ram,0x00103700) */
/* WARNING: Removing unreachable block (ram,0x00103616) */
/* WARNING: Removing unreachable block (ram,0x00103564) */
/* WARNING: Removing unreachable block (ram,0x0010357a) */
/* WARNING: Removing unreachable block (ram,0x0010359a) */
/* WARNING: Removing unreachable block (ram,0x0010370c) */
/* Node3D::get_rotation() const */

void __thiscall Node3D::get_rotation(Node3D *this)

{
                    /* WARNING: Subroutine does not return */
  Node::current_process_thread_group();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Node3D::get_rotation_degrees() const */

undefined1  [16] __thiscall Node3D::get_rotation_degrees(Node3D *this)

{
  char cVar1;
  long in_FS_OFFSET;
  undefined1 auVar2 [16];
  undefined1 auVar3 [12];
  CowData<char32_t> local_68 [8];
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  float local_38;
  undefined8 local_30;
  float local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (_GLOBAL_OFFSET_TABLE_ != (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    Node::current_process_thread_group();
  }
  if (*(long *)(in_FS_OFFSET + lRam0000000000103755) == 0) {
    cVar1 = is_current_thread_safe_for_nodes();
    if ((cVar1 == '\0') && (((byte)this[0x2fa] & 0x40) != 0)) {
      Node::get_description();
      local_58 = 
      "This function in this node (%s) can only be accessed from either the main thread or a thread group. Use call_deferred() instead."
      ;
      local_60 = 0;
      local_50 = 0x80;
      String::parse_latin1((StrRange *)&local_60);
      vformat<String>((CowData<char32_t> *)&local_58,(StrRange *)&local_60,local_68);
      _err_print_error("get_rotation_degrees","scene/3d/node_3d.cpp",0x299,
                       "Condition \"!is_readable_from_caller_thread()\" is true. Returning: (Vector3())"
                       ,(CowData<char32_t> *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      CowData<char32_t>::_unref(local_68);
      local_28 = 0.0;
      local_30 = 0;
      goto LAB_00103792;
    }
  }
  auVar3 = get_rotation(this);
  local_38 = auVar3._8_4_;
  local_28 = _LC87 * local_38;
  local_30 = CONCAT44(_UNK_0012a55c * auVar3._4_4_,_LC87 * auVar3._0_4_);
LAB_00103792:
  auVar2._8_4_ = local_28;
  auVar2._0_8_ = local_30;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar2._12_4_ = 0;
    return auVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x001038df) */
/* WARNING: Removing unreachable block (ram,0x00103938) */
/* WARNING: Removing unreachable block (ram,0x0010393e) */
/* WARNING: Removing unreachable block (ram,0x00103945) */
/* WARNING: Removing unreachable block (ram,0x0010394f) */
/* WARNING: Removing unreachable block (ram,0x001038e7) */
/* WARNING: Removing unreachable block (ram,0x00103953) */
/* WARNING: Removing unreachable block (ram,0x00103995) */
/* WARNING: Removing unreachable block (ram,0x001038c2) */
/* WARNING: Removing unreachable block (ram,0x001039b8) */
/* WARNING: Removing unreachable block (ram,0x001039c5) */
/* WARNING: Removing unreachable block (ram,0x001039d2) */
/* WARNING: Removing unreachable block (ram,0x00103a80) */
/* WARNING: Removing unreachable block (ram,0x001038d5) */
/* WARNING: Removing unreachable block (ram,0x001038da) */
/* WARNING: Removing unreachable block (ram,0x0010399a) */
/* WARNING: Removing unreachable block (ram,0x00103a90) */
/* WARNING: Removing unreachable block (ram,0x001039a6) */
/* WARNING: Removing unreachable block (ram,0x001038f4) */
/* WARNING: Removing unreachable block (ram,0x0010390a) */
/* WARNING: Removing unreachable block (ram,0x0010392a) */
/* WARNING: Removing unreachable block (ram,0x00103a9c) */
/* Node3D::get_scale() const */

void __thiscall Node3D::get_scale(Node3D *this)

{
                    /* WARNING: Subroutine does not return */
  Node::current_process_thread_group();
}



/* Node3D::get_global_position() const */

undefined1  [16] __thiscall Node3D::get_global_position(Node3D *this)

{
  char cVar1;
  long in_FS_OFFSET;
  undefined1 auVar2 [16];
  CowData<char32_t> local_88 [8];
  undefined8 local_80;
  char *local_78;
  undefined8 local_70;
  undefined8 local_64;
  undefined4 local_5c;
  undefined8 local_34;
  undefined4 local_2c;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (_GLOBAL_OFFSET_TABLE_ != (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    Node::current_process_thread_group();
  }
  if (*(long *)(in_FS_OFFSET + lRam0000000000103ae5) == 0) {
    cVar1 = is_current_thread_safe_for_nodes();
    if ((cVar1 == '\0') && (((byte)this[0x2fa] & 0x40) != 0)) {
      Node::get_description();
      local_78 = 
      "This function in this node (%s) can only be accessed from either the main thread or a thread group. Use call_deferred() instead."
      ;
      local_80 = 0;
      local_70 = 0x80;
      String::parse_latin1((StrRange *)&local_80);
      vformat<String>((CowData<char32_t> *)&local_78,(StrRange *)&local_80,local_88);
      _err_print_error("get_global_position","scene/3d/node_3d.cpp",0x10a,
                       "Condition \"!is_readable_from_caller_thread()\" is true. Returning: (Vector3())"
                       ,(CowData<char32_t> *)&local_78,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      CowData<char32_t>::_unref(local_88);
      local_5c = 0;
      local_64 = 0;
      goto LAB_00103b0b;
    }
  }
  get_global_transform();
  local_64 = local_34;
  local_5c = local_2c;
LAB_00103b0b:
  auVar2._8_4_ = local_5c;
  auVar2._0_8_ = local_64;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar2._12_4_ = 0;
    return auVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Node3D::get_global_basis() const */

void Node3D::get_global_basis(void)

{
  uint uVar1;
  char cVar2;
  long in_RSI;
  undefined1 (*in_RDI) [16];
  long in_FS_OFFSET;
  CowData<char32_t> aCStack_88 [8];
  undefined8 local_80;
  char *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (_GLOBAL_OFFSET_TABLE_ != (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    Node::current_process_thread_group();
  }
  if (*(long *)(in_FS_OFFSET + lRam0000000000103c3a) == 0) {
    cVar2 = is_current_thread_safe_for_nodes();
    if ((cVar2 == '\0') && ((*(byte *)(in_RSI + 0x2fa) & 0x40) != 0)) {
      Node::get_description();
      local_78 = 
      "This function in this node (%s) can only be accessed from either the main thread or a thread group. Use call_deferred() instead."
      ;
      local_70 = 0x80;
      local_80 = 0;
      String::parse_latin1((StrRange *)&local_80);
      vformat<String>((CowData<char32_t> *)&local_78,(StrRange *)&local_80,aCStack_88);
      _err_print_error("get_global_basis","scene/3d/node_3d.cpp",0x10f,
                       "Condition \"!is_readable_from_caller_thread()\" is true. Returning: (Basis())"
                       ,(CowData<char32_t> *)&local_78,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      CowData<char32_t>::_unref(aCStack_88);
      uVar1 = _LC15;
      *(undefined4 *)in_RDI[2] = 0x3f800000;
      *in_RDI = ZEXT416(uVar1);
      in_RDI[1] = ZEXT416(uVar1);
      goto LAB_00103c68;
    }
  }
  get_global_transform();
  *(undefined4 *)in_RDI[2] = local_48;
  *(undefined8 *)*in_RDI = local_68;
  *(undefined8 *)(*in_RDI + 8) = uStack_60;
  *(undefined8 *)in_RDI[1] = local_58;
  *(undefined8 *)(in_RDI[1] + 8) = uStack_50;
LAB_00103c68:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Node3D::get_global_rotation() const */

undefined1  [16] __thiscall Node3D::get_global_rotation(Node3D *this)

{
  char cVar1;
  long in_FS_OFFSET;
  undefined1 auVar2 [16];
  CowData<char32_t> local_88 [8];
  undefined8 local_80;
  char *local_78;
  undefined8 local_70;
  undefined1 local_64 [12];
  undefined1 local_58 [56];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (_GLOBAL_OFFSET_TABLE_ != (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    Node::current_process_thread_group();
  }
  if (*(long *)(in_FS_OFFSET + lRam0000000000103d95) == 0) {
    cVar1 = is_current_thread_safe_for_nodes();
    if ((cVar1 == '\0') && (((byte)this[0x2fa] & 0x40) != 0)) {
      Node::get_description();
      local_78 = 
      "This function in this node (%s) can only be accessed from either the main thread or a thread group. Use call_deferred() instead."
      ;
      local_80 = 0;
      local_70 = 0x80;
      String::parse_latin1((StrRange *)&local_80);
      vformat<String>((CowData<char32_t> *)&local_78,(StrRange *)&local_80,local_88);
      _err_print_error("get_global_rotation","scene/3d/node_3d.cpp",0x122,
                       "Condition \"!is_readable_from_caller_thread()\" is true. Returning: (Vector3())"
                       ,(CowData<char32_t> *)&local_78,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      CowData<char32_t>::_unref(local_88);
      local_64 = ZEXT812(0);
      goto LAB_00103dc5;
    }
  }
  get_global_transform();
  local_64 = Basis::get_euler(local_58,2);
LAB_00103dc5:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar2._12_4_ = 0;
    auVar2._0_12_ = local_64;
    return auVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Node3D::get_global_rotation_degrees() const */

undefined1  [16] __thiscall Node3D::get_global_rotation_degrees(Node3D *this)

{
  char cVar1;
  long in_FS_OFFSET;
  undefined1 auVar2 [16];
  undefined1 auVar3 [12];
  CowData<char32_t> local_68 [8];
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  float local_38;
  undefined8 local_30;
  float local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (_GLOBAL_OFFSET_TABLE_ != (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    Node::current_process_thread_group();
  }
  if (*(long *)(in_FS_OFFSET + lRam0000000000103ef5) == 0) {
    cVar1 = is_current_thread_safe_for_nodes();
    if ((cVar1 == '\0') && (((byte)this[0x2fa] & 0x40) != 0)) {
      Node::get_description();
      local_58 = 
      "This function in this node (%s) can only be accessed from either the main thread or a thread group. Use call_deferred() instead."
      ;
      local_60 = 0;
      local_50 = 0x80;
      String::parse_latin1((StrRange *)&local_60);
      vformat<String>((CowData<char32_t> *)&local_58,(StrRange *)&local_60,local_68);
      _err_print_error("get_global_rotation_degrees","scene/3d/node_3d.cpp",0x127,
                       "Condition \"!is_readable_from_caller_thread()\" is true. Returning: (Vector3())"
                       ,(CowData<char32_t> *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      CowData<char32_t>::_unref(local_68);
      local_28 = 0.0;
      local_30 = 0;
      goto LAB_00103f32;
    }
  }
  auVar3 = get_global_rotation(this);
  local_38 = auVar3._8_4_;
  local_28 = _LC87 * local_38;
  local_30 = CONCAT44(_UNK_0012a55c * auVar3._4_4_,_LC87 * auVar3._0_4_);
LAB_00103f32:
  auVar2._8_4_ = local_28;
  auVar2._0_8_ = local_30;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar2._12_4_ = 0;
    return auVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Node3D::to_local(Vector3) const */

undefined1  [16] Node3D::to_local(undefined8 param_1,float param_2,long param_3)

{
  char cVar1;
  long in_FS_OFFSET;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  CowData<char32_t> local_b8 [8];
  undefined8 local_b0;
  char *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  float local_90;
  float local_58;
  float fStack_54;
  undefined8 local_50;
  float local_48;
  float fStack_44;
  float local_40;
  float local_3c;
  float local_38;
  undefined8 local_34;
  float local_2c;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (_GLOBAL_OFFSET_TABLE_ != (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    Node::current_process_thread_group();
  }
  if (*(long *)(in_FS_OFFSET + lRam0000000000104077) == 0) {
    cVar1 = is_current_thread_safe_for_nodes();
    if ((cVar1 == '\0') && ((*(byte *)(param_3 + 0x2fa) & 0x40) != 0)) {
      Node::get_description();
      local_a8 = 
      "This function in this node (%s) can only be accessed from either the main thread or a thread group. Use call_deferred() instead."
      ;
      local_b0 = 0;
      local_a0 = 0x80;
      String::parse_latin1((StrRange *)&local_b0);
      vformat<String>((CowData<char32_t> *)&local_a8,(StrRange *)&local_b0,local_b8);
      _err_print_error("to_local","scene/3d/node_3d.cpp",0x436,
                       "Condition \"!is_readable_from_caller_thread()\" is true. Returning: (Vector3())"
                       ,(CowData<char32_t> *)&local_a8,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      CowData<char32_t>::_unref(local_b8);
      local_90 = 0.0;
      local_98 = 0;
      goto LAB_0010415d;
    }
  }
  get_global_transform();
  Transform3D::affine_inverse();
  fVar2 = (float)param_1;
  fVar3 = (float)((ulong)param_1 >> 0x20);
  local_90 = local_40 * fVar2 + local_3c * fVar3 + local_38 * param_2 + local_2c;
  local_98 = CONCAT44(local_48 * fVar3 + fVar2 * (float)((ulong)local_50 >> 0x20) +
                      fStack_44 * param_2 + (float)((ulong)local_34 >> 0x20),
                      fStack_54 * fVar3 + fVar2 * local_58 + (float)local_50 * param_2 +
                      (float)local_34);
LAB_0010415d:
  auVar4._8_4_ = local_90;
  auVar4._0_8_ = local_98;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar4._12_4_ = 0;
    return auVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Node3D::to_global(Vector3) const */

undefined1  [16] Node3D::to_global(undefined8 param_1,float param_2,long param_3)

{
  char cVar1;
  long in_FS_OFFSET;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  CowData<char32_t> local_88 [8];
  undefined8 local_80;
  char *local_78;
  undefined8 local_70;
  undefined8 local_68;
  float local_60;
  float local_58;
  float fStack_54;
  undefined8 local_50;
  float local_48;
  float fStack_44;
  float local_40;
  float local_3c;
  float local_38;
  undefined8 local_34;
  float local_2c;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (_GLOBAL_OFFSET_TABLE_ != (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    Node::current_process_thread_group();
  }
  if (*(long *)(in_FS_OFFSET + lRam00000000001042a7) == 0) {
    cVar1 = is_current_thread_safe_for_nodes();
    if ((cVar1 == '\0') && ((*(byte *)(param_3 + 0x2fa) & 0x40) != 0)) {
      Node::get_description();
      local_78 = 
      "This function in this node (%s) can only be accessed from either the main thread or a thread group. Use call_deferred() instead."
      ;
      local_80 = 0;
      local_70 = 0x80;
      String::parse_latin1((StrRange *)&local_80);
      vformat<String>((CowData<char32_t> *)&local_78,(StrRange *)&local_80,local_88);
      _err_print_error("to_global","scene/3d/node_3d.cpp",0x43b,
                       "Condition \"!is_readable_from_caller_thread()\" is true. Returning: (Vector3())"
                       ,(CowData<char32_t> *)&local_78,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      CowData<char32_t>::_unref(local_88);
      local_60 = 0.0;
      local_68 = 0;
      goto LAB_0010435c;
    }
  }
  get_global_transform();
  fVar2 = (float)param_1;
  fVar3 = (float)((ulong)param_1 >> 0x20);
  local_60 = local_40 * fVar2 + local_3c * fVar3 + local_38 * param_2 + local_2c;
  local_68 = CONCAT44(local_48 * fVar3 + fVar2 * (float)((ulong)local_50 >> 0x20) +
                      fStack_44 * param_2 + (float)((ulong)local_34 >> 0x20),
                      fStack_54 * fVar3 + fVar2 * local_58 + (float)local_50 * param_2 +
                      (float)local_34);
LAB_0010435c:
  auVar4._8_4_ = local_60;
  auVar4._0_8_ = local_68;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar4._12_4_ = 0;
    return auVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x00104494) */
/* WARNING: Removing unreachable block (ram,0x001045b8) */
/* WARNING: Removing unreachable block (ram,0x001045c5) */
/* WARNING: Removing unreachable block (ram,0x001044a9) */
/* WARNING: Removing unreachable block (ram,0x001044ae) */
/* WARNING: Removing unreachable block (ram,0x001044b8) */
/* WARNING: Removing unreachable block (ram,0x001045d2) */
/* WARNING: Removing unreachable block (ram,0x001044c5) */
/* WARNING: Removing unreachable block (ram,0x001044d2) */
/* WARNING: Removing unreachable block (ram,0x001044e0) */
/* WARNING: Removing unreachable block (ram,0x001044f0) */
/* WARNING: Removing unreachable block (ram,0x001046f0) */
/* WARNING: Removing unreachable block (ram,0x00104500) */
/* WARNING: Removing unreachable block (ram,0x00104670) */
/* WARNING: Removing unreachable block (ram,0x0010468e) */
/* WARNING: Removing unreachable block (ram,0x00104516) */
/* WARNING: Removing unreachable block (ram,0x001046c8) */
/* WARNING: Removing unreachable block (ram,0x0010457f) */
/* WARNING: Removing unreachable block (ram,0x001046e0) */
/* WARNING: Removing unreachable block (ram,0x00104590) */
/* WARNING: Removing unreachable block (ram,0x001045a4) */
/* WARNING: Removing unreachable block (ram,0x0010471a) */
/* Node3D::clear_subgizmo_selection() */

void __thiscall Node3D::clear_subgizmo_selection(Node3D *this)

{
                    /* WARNING: Subroutine does not return */
  Node::current_process_thread_group();
}



/* Node3D::_update_visibility_parent(bool) */

void __thiscall Node3D::_update_visibility_parent(Node3D *this,bool param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  char cVar3;
  long *plVar4;
  undefined8 uVar5;
  Node3D *pNVar6;
  long lVar7;
  char *pcVar8;
  long in_FS_OFFSET;
  NodePath local_40 [8];
  CowData<char32_t> local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  cVar3 = NodePath::is_empty();
  if (cVar3 == '\0') {
    if (!param_1) goto LAB_0010475f;
    pNVar6 = (Node3D *)Node::get_node_or_null((NodePath *)this);
    if (pNVar6 == (Node3D *)0x0) {
      NodePath::operator_cast_to_String(local_40);
      operator+((char *)local_38,(String *)"Can\'t find visibility parent node at path: ");
      pcVar8 = "Parameter \"parent\" is null.";
      uVar5 = 0x466;
    }
    else {
      if (this == pNVar6) {
        _err_print_error("_update_visibility_parent","scene/3d/node_3d.cpp",0x467,
                         "Condition \"parent == this\" is true.",
                         "The visibility parent can\'t be the same node.",0,0);
        goto LAB_0010475f;
      }
      lVar7 = __dynamic_cast(pNVar6,&Object::typeinfo,&GeometryInstance3D::typeinfo,0);
      if (lVar7 != 0) {
        lVar7 = VisualInstance3D::get_instance();
        goto LAB_00104795;
      }
      NodePath::operator_cast_to_String(local_40);
      operator+((char *)local_38,
                (String *)"The visibility parent node must be a GeometryInstance3D, at path: ");
      pcVar8 = "Parameter \"gi\" is null.";
      uVar5 = 0x469;
    }
    _err_print_error("_update_visibility_parent","scene/3d/node_3d.cpp",uVar5,pcVar8,local_38,0,0);
    CowData<char32_t>::_unref(local_38);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_40);
  }
  else {
    lVar7 = 0;
    if (*(long *)(this + 0x4e8) != 0) {
      lVar7 = *(long *)(*(long *)(this + 0x4e8) + 0x4e0);
    }
LAB_00104795:
    if (lVar7 != *(long *)(this + 0x4e0)) {
      *(long *)(this + 0x4e0) = lVar7;
      lVar7 = __dynamic_cast(this,&Object::typeinfo,&VisualInstance3D::typeinfo,0);
      if (lVar7 != 0) {
        plVar4 = (long *)RenderingServer::get_singleton();
        pcVar1 = *(code **)(*plVar4 + 0xd90);
        uVar5 = VisualInstance3D::get_instance();
        (*pcVar1)(plVar4,uVar5,*(undefined8 *)(this + 0x4e0));
      }
      if (*(undefined8 **)(this + 0x4f0) != (undefined8 *)0x0) {
        for (puVar2 = (undefined8 *)**(undefined8 **)(this + 0x4f0); puVar2 != (undefined8 *)0x0;
            puVar2 = (undefined8 *)puVar2[1]) {
          _update_visibility_parent((Node3D *)*puVar2,false);
        }
      }
    }
  }
LAB_0010475f:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Node3D::set_visibility_parent(NodePath const&) */

void __thiscall Node3D::set_visibility_parent(Node3D *this,NodePath *param_1)

{
  char cVar1;
  long in_FS_OFFSET;
  CowData<char32_t> local_48 [8];
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((byte)this[0x2fa] & 0x40) == 0) {
LAB_00104988:
    NodePath::operator=((NodePath *)(this + 0x520),param_1);
    if (((byte)this[0x2fa] & 0x40) != 0) {
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        _update_visibility_parent(this,true);
        return;
      }
      goto LAB_00104a9e;
    }
  }
  else {
    cVar1 = is_current_thread_safe_for_nodes();
    if (cVar1 != '\0') goto LAB_00104988;
    Node::get_description();
    local_38 = 
    "This function in this node (%s) can only be accessed from the main thread. Use call_deferred() instead."
    ;
    local_40 = 0;
    local_30 = 0x67;
    String::parse_latin1((StrRange *)&local_40);
    vformat<String>((CowData<char32_t> *)&local_38,(StrRange *)&local_40,local_48);
    _err_print_error("set_visibility_parent","scene/3d/node_3d.cpp",0x480,
                     "Condition \"is_inside_tree() && !is_current_thread_safe_for_nodes()\" is true."
                     ,(CowData<char32_t> *)&local_38,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
    CowData<char32_t>::_unref(local_48);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00104a9e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x00104ae2) */
/* WARNING: Removing unreachable block (ram,0x00104bc0) */
/* WARNING: Removing unreachable block (ram,0x00104bcd) */
/* WARNING: Removing unreachable block (ram,0x00104af7) */
/* WARNING: Removing unreachable block (ram,0x00104afc) */
/* WARNING: Removing unreachable block (ram,0x00104b06) */
/* WARNING: Removing unreachable block (ram,0x00104bda) */
/* WARNING: Removing unreachable block (ram,0x00104b13) */
/* WARNING: Removing unreachable block (ram,0x00104b1c) */
/* WARNING: Removing unreachable block (ram,0x00104c78) */
/* WARNING: Removing unreachable block (ram,0x00104db0) */
/* WARNING: Removing unreachable block (ram,0x00104c88) */
/* WARNING: Removing unreachable block (ram,0x00104d30) */
/* WARNING: Removing unreachable block (ram,0x00104d4e) */
/* WARNING: Removing unreachable block (ram,0x00104ca2) */
/* WARNING: Removing unreachable block (ram,0x00104d98) */
/* WARNING: Removing unreachable block (ram,0x00104d12) */
/* WARNING: Removing unreachable block (ram,0x00104d21) */
/* WARNING: Removing unreachable block (ram,0x00104b2a) */
/* WARNING: Removing unreachable block (ram,0x00104b35) */
/* WARNING: Removing unreachable block (ram,0x00104d88) */
/* WARNING: Removing unreachable block (ram,0x00104b90) */
/* WARNING: Removing unreachable block (ram,0x00104b98) */
/* WARNING: Removing unreachable block (ram,0x00104bac) */
/* WARNING: Removing unreachable block (ram,0x00104dda) */
/* Node3D::update_gizmos() */

void __thiscall Node3D::update_gizmos(Node3D *this)

{
                    /* WARNING: Subroutine does not return */
  Node::current_process_thread_group();
}



/* WARNING: Removing unreachable block (ram,0x00104fb0) */
/* WARNING: Removing unreachable block (ram,0x00105010) */
/* WARNING: Removing unreachable block (ram,0x00104fb8) */
/* WARNING: Removing unreachable block (ram,0x00104e3b) */
/* WARNING: Removing unreachable block (ram,0x00104e17) */
/* WARNING: Removing unreachable block (ram,0x00104f60) */
/* WARNING: Removing unreachable block (ram,0x00105020) */
/* WARNING: Removing unreachable block (ram,0x0010502d) */
/* WARNING: Removing unreachable block (ram,0x00104e48) */
/* WARNING: Removing unreachable block (ram,0x00104f6d) */
/* WARNING: Removing unreachable block (ram,0x00104e4d) */
/* WARNING: Removing unreachable block (ram,0x00104e2c) */
/* WARNING: Removing unreachable block (ram,0x00104e31) */
/* WARNING: Removing unreachable block (ram,0x00104e52) */
/* WARNING: Removing unreachable block (ram,0x00104f76) */
/* WARNING: Removing unreachable block (ram,0x00104e5e) */
/* WARNING: Removing unreachable block (ram,0x00104e64) */
/* WARNING: Removing unreachable block (ram,0x00104e6b) */
/* WARNING: Removing unreachable block (ram,0x00104e75) */
/* WARNING: Removing unreachable block (ram,0x00104f8e) */
/* WARNING: Removing unreachable block (ram,0x00104fab) */
/* WARNING: Removing unreachable block (ram,0x00104e84) */
/* WARNING: Removing unreachable block (ram,0x00104ef9) */
/* WARNING: Removing unreachable block (ram,0x00104efe) */
/* WARNING: Removing unreachable block (ram,0x00104fc8) */
/* WARNING: Removing unreachable block (ram,0x00104f0a) */
/* WARNING: Removing unreachable block (ram,0x00104f14) */
/* WARNING: Removing unreachable block (ram,0x00104f1d) */
/* WARNING: Removing unreachable block (ram,0x00104f28) */
/* WARNING: Removing unreachable block (ram,0x00104fe0) */
/* WARNING: Removing unreachable block (ram,0x00104ff4) */
/* WARNING: Removing unreachable block (ram,0x00104f35) */
/* WARNING: Removing unreachable block (ram,0x00104f49) */
/* WARNING: Removing unreachable block (ram,0x001050c7) */
/* Node3D::set_quaternion(Quaternion const&) */

void __thiscall Node3D::set_quaternion(Node3D *this,Quaternion *param_1)

{
                    /* WARNING: Subroutine does not return */
  Node::current_process_thread_group();
}



/* WARNING: Removing unreachable block (ram,0x00105129) */
/* WARNING: Removing unreachable block (ram,0x00105105) */
/* WARNING: Removing unreachable block (ram,0x001051d0) */
/* WARNING: Removing unreachable block (ram,0x001051dd) */
/* WARNING: Removing unreachable block (ram,0x001051ea) */
/* WARNING: Removing unreachable block (ram,0x00105136) */
/* WARNING: Removing unreachable block (ram,0x0010515f) */
/* WARNING: Removing unreachable block (ram,0x0010511a) */
/* WARNING: Removing unreachable block (ram,0x0010511f) */
/* WARNING: Removing unreachable block (ram,0x00105164) */
/* WARNING: Removing unreachable block (ram,0x001051c0) */
/* WARNING: Removing unreachable block (ram,0x0010516c) */
/* WARNING: Removing unreachable block (ram,0x00105176) */
/* WARNING: Removing unreachable block (ram,0x0010517f) */
/* WARNING: Removing unreachable block (ram,0x0010518a) */
/* WARNING: Removing unreachable block (ram,0x00105288) */
/* WARNING: Removing unreachable block (ram,0x00105298) */
/* WARNING: Removing unreachable block (ram,0x00105197) */
/* WARNING: Removing unreachable block (ram,0x001051ab) */
/* WARNING: Removing unreachable block (ram,0x001052b1) */
/* Node3D::set_transform(Transform3D const&) */

void __thiscall Node3D::set_transform(Node3D *this,Transform3D *param_1)

{
                    /* WARNING: Subroutine does not return */
  Node::current_process_thread_group();
}



/* WARNING: Removing unreachable block (ram,0x001052f5) */
/* WARNING: Removing unreachable block (ram,0x00105360) */
/* WARNING: Removing unreachable block (ram,0x00105369) */
/* WARNING: Removing unreachable block (ram,0x00105306) */
/* WARNING: Removing unreachable block (ram,0x0010530b) */
/* WARNING: Removing unreachable block (ram,0x00105315) */
/* WARNING: Removing unreachable block (ram,0x00105372) */
/* WARNING: Removing unreachable block (ram,0x0010531e) */
/* WARNING: Removing unreachable block (ram,0x00105340) */
/* WARNING: Removing unreachable block (ram,0x00105354) */
/* WARNING: Removing unreachable block (ram,0x0010540c) */
/* Node3D::set_basis(Basis const&) */

void __thiscall Node3D::set_basis(Node3D *this,Basis *param_1)

{
                    /* WARNING: Subroutine does not return */
  Node::current_process_thread_group();
}



/* WARNING: Removing unreachable block (ram,0x0010545b) */
/* WARNING: Removing unreachable block (ram,0x00105530) */
/* WARNING: Removing unreachable block (ram,0x0010553d) */
/* WARNING: Removing unreachable block (ram,0x00105470) */
/* WARNING: Removing unreachable block (ram,0x00105475) */
/* WARNING: Removing unreachable block (ram,0x0010547f) */
/* WARNING: Removing unreachable block (ram,0x0010554a) */
/* WARNING: Removing unreachable block (ram,0x0010548c) */
/* WARNING: Removing unreachable block (ram,0x00105498) */
/* WARNING: Removing unreachable block (ram,0x001054a1) */
/* WARNING: Removing unreachable block (ram,0x001054f8) */
/* WARNING: Removing unreachable block (ram,0x001054c4) */
/* WARNING: Removing unreachable block (ram,0x001054cf) */
/* WARNING: Removing unreachable block (ram,0x001054e6) */
/* WARNING: Removing unreachable block (ram,0x001055e4) */
/* Node3D::set_global_transform(Transform3D const&) */

void __thiscall Node3D::set_global_transform(Node3D *this,Transform3D *param_1)

{
                    /* WARNING: Subroutine does not return */
  Node::current_process_thread_group();
}



/* WARNING: Removing unreachable block (ram,0x00105625) */
/* WARNING: Removing unreachable block (ram,0x001056a0) */
/* WARNING: Removing unreachable block (ram,0x001056a9) */
/* WARNING: Removing unreachable block (ram,0x00105636) */
/* WARNING: Removing unreachable block (ram,0x0010563b) */
/* WARNING: Removing unreachable block (ram,0x00105645) */
/* WARNING: Removing unreachable block (ram,0x001056b2) */
/* WARNING: Removing unreachable block (ram,0x0010564e) */
/* WARNING: Removing unreachable block (ram,0x00105679) */
/* WARNING: Removing unreachable block (ram,0x0010568d) */
/* WARNING: Removing unreachable block (ram,0x0010574c) */
/* Node3D::set_global_position(Vector3 const&) */

void __thiscall Node3D::set_global_position(Node3D *this,Vector3 *param_1)

{
                    /* WARNING: Subroutine does not return */
  Node::current_process_thread_group();
}



/* WARNING: Removing unreachable block (ram,0x00105795) */
/* WARNING: Removing unreachable block (ram,0x00105818) */
/* WARNING: Removing unreachable block (ram,0x00105821) */
/* WARNING: Removing unreachable block (ram,0x001057a6) */
/* WARNING: Removing unreachable block (ram,0x001057ab) */
/* WARNING: Removing unreachable block (ram,0x001057b5) */
/* WARNING: Removing unreachable block (ram,0x0010582a) */
/* WARNING: Removing unreachable block (ram,0x001057be) */
/* WARNING: Removing unreachable block (ram,0x001057f4) */
/* WARNING: Removing unreachable block (ram,0x00105808) */
/* WARNING: Removing unreachable block (ram,0x001058c4) */
/* Node3D::set_global_basis(Basis const&) */

void __thiscall Node3D::set_global_basis(Node3D *this,Basis *param_1)

{
                    /* WARNING: Subroutine does not return */
  Node::current_process_thread_group();
}



/* WARNING: Removing unreachable block (ram,0x0010590b) */
/* WARNING: Removing unreachable block (ram,0x00105b00) */
/* WARNING: Removing unreachable block (ram,0x00105b0d) */
/* WARNING: Removing unreachable block (ram,0x00105920) */
/* WARNING: Removing unreachable block (ram,0x00105925) */
/* WARNING: Removing unreachable block (ram,0x0010592f) */
/* WARNING: Removing unreachable block (ram,0x00105b1a) */
/* WARNING: Removing unreachable block (ram,0x0010593c) */
/* WARNING: Removing unreachable block (ram,0x00105ad4) */
/* WARNING: Removing unreachable block (ram,0x00105aeb) */
/* WARNING: Removing unreachable block (ram,0x00105bb4) */
/* Node3D::set_global_rotation(Vector3 const&) */

void Node3D::set_global_rotation(Vector3 *param_1)

{
                    /* WARNING: Subroutine does not return */
  Node::current_process_thread_group();
}



/* WARNING: Removing unreachable block (ram,0x00105bf5) */
/* WARNING: Removing unreachable block (ram,0x00105c78) */
/* WARNING: Removing unreachable block (ram,0x00105c81) */
/* WARNING: Removing unreachable block (ram,0x00105c06) */
/* WARNING: Removing unreachable block (ram,0x00105c0b) */
/* WARNING: Removing unreachable block (ram,0x00105c15) */
/* WARNING: Removing unreachable block (ram,0x00105c8a) */
/* WARNING: Removing unreachable block (ram,0x00105c1e) */
/* WARNING: Removing unreachable block (ram,0x00105c53) */
/* WARNING: Removing unreachable block (ram,0x00105c67) */
/* WARNING: Removing unreachable block (ram,0x00105d24) */
/* Node3D::set_global_rotation_degrees(Vector3 const&) */

void __thiscall Node3D::set_global_rotation_degrees(Node3D *this,Vector3 *param_1)

{
                    /* WARNING: Subroutine does not return */
  Node::current_process_thread_group();
}



/* WARNING: Removing unreachable block (ram,0x00105d6c) */
/* WARNING: Removing unreachable block (ram,0x00105de8) */
/* WARNING: Removing unreachable block (ram,0x00105df1) */
/* WARNING: Removing unreachable block (ram,0x00105d7d) */
/* WARNING: Removing unreachable block (ram,0x00105d82) */
/* WARNING: Removing unreachable block (ram,0x00105d8c) */
/* WARNING: Removing unreachable block (ram,0x00105dfa) */
/* WARNING: Removing unreachable block (ram,0x00105d95) */
/* WARNING: Removing unreachable block (ram,0x00105dc0) */
/* WARNING: Removing unreachable block (ram,0x00105dd4) */
/* WARNING: Removing unreachable block (ram,0x00105e94) */
/* Node3D::global_rotate(Vector3 const&, float) */

void Node3D::global_rotate(Vector3 *param_1,float param_2)

{
                    /* WARNING: Subroutine does not return */
  Node::current_process_thread_group();
}



/* WARNING: Removing unreachable block (ram,0x00105ed5) */
/* WARNING: Removing unreachable block (ram,0x00105f48) */
/* WARNING: Removing unreachable block (ram,0x00105f51) */
/* WARNING: Removing unreachable block (ram,0x00105ee6) */
/* WARNING: Removing unreachable block (ram,0x00105eeb) */
/* WARNING: Removing unreachable block (ram,0x00105ef5) */
/* WARNING: Removing unreachable block (ram,0x00105f5a) */
/* WARNING: Removing unreachable block (ram,0x00105efe) */
/* WARNING: Removing unreachable block (ram,0x00105f24) */
/* WARNING: Removing unreachable block (ram,0x00105f38) */
/* WARNING: Removing unreachable block (ram,0x00105ff4) */
/* Node3D::global_scale(Vector3 const&) */

void Node3D::global_scale(Vector3 *param_1)

{
                    /* WARNING: Subroutine does not return */
  Node::current_process_thread_group();
}



/* WARNING: Removing unreachable block (ram,0x00106035) */
/* WARNING: Removing unreachable block (ram,0x001060c0) */
/* WARNING: Removing unreachable block (ram,0x001060c9) */
/* WARNING: Removing unreachable block (ram,0x00106046) */
/* WARNING: Removing unreachable block (ram,0x0010604b) */
/* WARNING: Removing unreachable block (ram,0x00106055) */
/* WARNING: Removing unreachable block (ram,0x001060d2) */
/* WARNING: Removing unreachable block (ram,0x0010605e) */
/* WARNING: Removing unreachable block (ram,0x0010609d) */
/* WARNING: Removing unreachable block (ram,0x001060b1) */
/* WARNING: Removing unreachable block (ram,0x0010616c) */
/* Node3D::global_translate(Vector3 const&) */

void __thiscall Node3D::global_translate(Node3D *this,Vector3 *param_1)

{
                    /* WARNING: Subroutine does not return */
  Node::current_process_thread_group();
}



/* WARNING: Removing unreachable block (ram,0x001061bc) */
/* WARNING: Removing unreachable block (ram,0x001062b8) */
/* WARNING: Removing unreachable block (ram,0x001062d8) */
/* WARNING: Removing unreachable block (ram,0x001062c1) */
/* WARNING: Removing unreachable block (ram,0x001062d0) */
/* WARNING: Removing unreachable block (ram,0x001061d1) */
/* WARNING: Removing unreachable block (ram,0x001061d6) */
/* WARNING: Removing unreachable block (ram,0x001061e0) */
/* WARNING: Removing unreachable block (ram,0x001062e5) */
/* WARNING: Removing unreachable block (ram,0x001061ed) */
/* WARNING: Removing unreachable block (ram,0x00106200) */
/* WARNING: Removing unreachable block (ram,0x00106209) */
/* WARNING: Removing unreachable block (ram,0x00106380) */
/* WARNING: Removing unreachable block (ram,0x00106212) */
/* WARNING: Removing unreachable block (ram,0x0010621c) */
/* WARNING: Removing unreachable block (ram,0x00106278) */
/* WARNING: Removing unreachable block (ram,0x0010628e) */
/* WARNING: Removing unreachable block (ram,0x001062a5) */
/* WARNING: Removing unreachable block (ram,0x001063a3) */
/* Node3D::set_as_top_level(bool) */

void __thiscall Node3D::set_as_top_level(Node3D *this,bool param_1)

{
                    /* WARNING: Subroutine does not return */
  Node::current_process_thread_group();
}



/* WARNING: Removing unreachable block (ram,0x001063ec) */
/* WARNING: Removing unreachable block (ram,0x00106468) */
/* WARNING: Removing unreachable block (ram,0x00106471) */
/* WARNING: Removing unreachable block (ram,0x001063fd) */
/* WARNING: Removing unreachable block (ram,0x00106402) */
/* WARNING: Removing unreachable block (ram,0x0010640c) */
/* WARNING: Removing unreachable block (ram,0x0010647a) */
/* WARNING: Removing unreachable block (ram,0x00106415) */
/* WARNING: Removing unreachable block (ram,0x00106440) */
/* WARNING: Removing unreachable block (ram,0x00106454) */
/* WARNING: Removing unreachable block (ram,0x00106514) */
/* Node3D::rotate_object_local(Vector3 const&, float) */

void Node3D::rotate_object_local(Vector3 *param_1,float param_2)

{
                    /* WARNING: Subroutine does not return */
  Node::current_process_thread_group();
}



/* WARNING: Removing unreachable block (ram,0x0010655c) */
/* WARNING: Removing unreachable block (ram,0x001065d8) */
/* WARNING: Removing unreachable block (ram,0x001065e1) */
/* WARNING: Removing unreachable block (ram,0x0010656d) */
/* WARNING: Removing unreachable block (ram,0x00106572) */
/* WARNING: Removing unreachable block (ram,0x0010657c) */
/* WARNING: Removing unreachable block (ram,0x001065ea) */
/* WARNING: Removing unreachable block (ram,0x00106585) */
/* WARNING: Removing unreachable block (ram,0x001065b0) */
/* WARNING: Removing unreachable block (ram,0x001065c4) */
/* WARNING: Removing unreachable block (ram,0x00106684) */
/* Node3D::rotate(Vector3 const&, float) */

void Node3D::rotate(Vector3 *param_1,float param_2)

{
                    /* WARNING: Subroutine does not return */
  Node::current_process_thread_group();
}



/* WARNING: Removing unreachable block (ram,0x001066c7) */
/* WARNING: Removing unreachable block (ram,0x00106750) */
/* WARNING: Removing unreachable block (ram,0x00106759) */
/* WARNING: Removing unreachable block (ram,0x001066d8) */
/* WARNING: Removing unreachable block (ram,0x001066dd) */
/* WARNING: Removing unreachable block (ram,0x001066e7) */
/* WARNING: Removing unreachable block (ram,0x00106762) */
/* WARNING: Removing unreachable block (ram,0x001066f0) */
/* WARNING: Removing unreachable block (ram,0x0010672e) */
/* WARNING: Removing unreachable block (ram,0x00106742) */
/* WARNING: Removing unreachable block (ram,0x001067fc) */
/* Node3D::rotate_x(float) */

void __thiscall Node3D::rotate_x(Node3D *this,float param_1)

{
                    /* WARNING: Subroutine does not return */
  Node::current_process_thread_group();
}



/* WARNING: Removing unreachable block (ram,0x00106847) */
/* WARNING: Removing unreachable block (ram,0x001068d0) */
/* WARNING: Removing unreachable block (ram,0x001068d9) */
/* WARNING: Removing unreachable block (ram,0x00106858) */
/* WARNING: Removing unreachable block (ram,0x0010685d) */
/* WARNING: Removing unreachable block (ram,0x00106867) */
/* WARNING: Removing unreachable block (ram,0x001068e2) */
/* WARNING: Removing unreachable block (ram,0x00106870) */
/* WARNING: Removing unreachable block (ram,0x001068b1) */
/* WARNING: Removing unreachable block (ram,0x001068c5) */
/* WARNING: Removing unreachable block (ram,0x0010697c) */
/* Node3D::rotate_y(float) */

void __thiscall Node3D::rotate_y(Node3D *this,float param_1)

{
                    /* WARNING: Subroutine does not return */
  Node::current_process_thread_group();
}



/* WARNING: Removing unreachable block (ram,0x001069c7) */
/* WARNING: Removing unreachable block (ram,0x00106a50) */
/* WARNING: Removing unreachable block (ram,0x00106a59) */
/* WARNING: Removing unreachable block (ram,0x001069d8) */
/* WARNING: Removing unreachable block (ram,0x001069dd) */
/* WARNING: Removing unreachable block (ram,0x001069e7) */
/* WARNING: Removing unreachable block (ram,0x00106a62) */
/* WARNING: Removing unreachable block (ram,0x001069f0) */
/* WARNING: Removing unreachable block (ram,0x00106a2e) */
/* WARNING: Removing unreachable block (ram,0x00106a42) */
/* WARNING: Removing unreachable block (ram,0x00106afc) */
/* Node3D::rotate_z(float) */

void __thiscall Node3D::rotate_z(Node3D *this,float param_1)

{
                    /* WARNING: Subroutine does not return */
  Node::current_process_thread_group();
}



/* WARNING: Removing unreachable block (ram,0x00106b45) */
/* WARNING: Removing unreachable block (ram,0x00106bb8) */
/* WARNING: Removing unreachable block (ram,0x00106bc1) */
/* WARNING: Removing unreachable block (ram,0x00106b56) */
/* WARNING: Removing unreachable block (ram,0x00106b5b) */
/* WARNING: Removing unreachable block (ram,0x00106b65) */
/* WARNING: Removing unreachable block (ram,0x00106bca) */
/* WARNING: Removing unreachable block (ram,0x00106b6e) */
/* WARNING: Removing unreachable block (ram,0x00106b94) */
/* WARNING: Removing unreachable block (ram,0x00106ba8) */
/* WARNING: Removing unreachable block (ram,0x00106c64) */
/* Node3D::translate(Vector3 const&) */

void Node3D::translate(Vector3 *param_1)

{
                    /* WARNING: Subroutine does not return */
  Node::current_process_thread_group();
}



/* WARNING: Removing unreachable block (ram,0x00106cab) */
/* WARNING: Removing unreachable block (ram,0x00106d70) */
/* WARNING: Removing unreachable block (ram,0x00106d7d) */
/* WARNING: Removing unreachable block (ram,0x00106cc0) */
/* WARNING: Removing unreachable block (ram,0x00106cc5) */
/* WARNING: Removing unreachable block (ram,0x00106ccf) */
/* WARNING: Removing unreachable block (ram,0x00106d8a) */
/* WARNING: Removing unreachable block (ram,0x00106cdc) */
/* WARNING: Removing unreachable block (ram,0x00106d48) */
/* WARNING: Removing unreachable block (ram,0x00106d5f) */
/* WARNING: Removing unreachable block (ram,0x00106e24) */
/* Node3D::translate_object_local(Vector3 const&) */

void Node3D::translate_object_local(Vector3 *param_1)

{
                    /* WARNING: Subroutine does not return */
  Node::current_process_thread_group();
}



/* WARNING: Removing unreachable block (ram,0x00106e65) */
/* WARNING: Removing unreachable block (ram,0x00106ed8) */
/* WARNING: Removing unreachable block (ram,0x00106ee1) */
/* WARNING: Removing unreachable block (ram,0x00106e76) */
/* WARNING: Removing unreachable block (ram,0x00106e7b) */
/* WARNING: Removing unreachable block (ram,0x00106e85) */
/* WARNING: Removing unreachable block (ram,0x00106eea) */
/* WARNING: Removing unreachable block (ram,0x00106e8e) */
/* WARNING: Removing unreachable block (ram,0x00106eb4) */
/* WARNING: Removing unreachable block (ram,0x00106ec8) */
/* WARNING: Removing unreachable block (ram,0x00106f84) */
/* Node3D::scale(Vector3 const&) */

void Node3D::scale(Vector3 *param_1)

{
                    /* WARNING: Subroutine does not return */
  Node::current_process_thread_group();
}



/* WARNING: Removing unreachable block (ram,0x00106fc5) */
/* WARNING: Removing unreachable block (ram,0x00107038) */
/* WARNING: Removing unreachable block (ram,0x00107041) */
/* WARNING: Removing unreachable block (ram,0x00106fd6) */
/* WARNING: Removing unreachable block (ram,0x00106fdb) */
/* WARNING: Removing unreachable block (ram,0x00106fe5) */
/* WARNING: Removing unreachable block (ram,0x0010704a) */
/* WARNING: Removing unreachable block (ram,0x00106fee) */
/* WARNING: Removing unreachable block (ram,0x00107014) */
/* WARNING: Removing unreachable block (ram,0x00107028) */
/* WARNING: Removing unreachable block (ram,0x001070e4) */
/* Node3D::scale_object_local(Vector3 const&) */

void Node3D::scale_object_local(Vector3 *param_1)

{
                    /* WARNING: Subroutine does not return */
  Node::current_process_thread_group();
}



/* WARNING: Removing unreachable block (ram,0x00107120) */
/* WARNING: Removing unreachable block (ram,0x00107190) */
/* WARNING: Removing unreachable block (ram,0x00107199) */
/* WARNING: Removing unreachable block (ram,0x00107131) */
/* WARNING: Removing unreachable block (ram,0x00107136) */
/* WARNING: Removing unreachable block (ram,0x00107140) */
/* WARNING: Removing unreachable block (ram,0x001071a2) */
/* WARNING: Removing unreachable block (ram,0x00107149) */
/* WARNING: Removing unreachable block (ram,0x0010716c) */
/* WARNING: Removing unreachable block (ram,0x00107180) */
/* WARNING: Removing unreachable block (ram,0x0010723c) */
/* Node3D::orthonormalize() */

void __thiscall Node3D::orthonormalize(Node3D *this)

{
                    /* WARNING: Subroutine does not return */
  Node::current_process_thread_group();
}



/* WARNING: Removing unreachable block (ram,0x00107280) */
/* WARNING: Removing unreachable block (ram,0x00107300) */
/* WARNING: Removing unreachable block (ram,0x00107309) */
/* WARNING: Removing unreachable block (ram,0x00107291) */
/* WARNING: Removing unreachable block (ram,0x00107296) */
/* WARNING: Removing unreachable block (ram,0x001072a0) */
/* WARNING: Removing unreachable block (ram,0x00107312) */
/* WARNING: Removing unreachable block (ram,0x001072a9) */
/* WARNING: Removing unreachable block (ram,0x001072e1) */
/* WARNING: Removing unreachable block (ram,0x001072f5) */
/* WARNING: Removing unreachable block (ram,0x001073ac) */
/* Node3D::set_identity() */

void __thiscall Node3D::set_identity(Node3D *this)

{
                    /* WARNING: Subroutine does not return */
  Node::current_process_thread_group();
}



/* WARNING: Removing unreachable block (ram,0x001073f5) */
/* WARNING: Removing unreachable block (ram,0x00107480) */
/* WARNING: Removing unreachable block (ram,0x001074d8) */
/* WARNING: Removing unreachable block (ram,0x00107489) */
/* WARNING: Removing unreachable block (ram,0x00107406) */
/* WARNING: Removing unreachable block (ram,0x0010740b) */
/* WARNING: Removing unreachable block (ram,0x00107415) */
/* WARNING: Removing unreachable block (ram,0x001074e5) */
/* WARNING: Removing unreachable block (ram,0x00107422) */
/* WARNING: Removing unreachable block (ram,0x00107447) */
/* WARNING: Removing unreachable block (ram,0x00107452) */
/* WARNING: Removing unreachable block (ram,0x001074a6) */
/* WARNING: Removing unreachable block (ram,0x001074ba) */
/* WARNING: Removing unreachable block (ram,0x0010745b) */
/* WARNING: Removing unreachable block (ram,0x0010746f) */
/* WARNING: Removing unreachable block (ram,0x0010757f) */
/* Node3D::set_position(Vector3 const&) */

void __thiscall Node3D::set_position(Node3D *this,Vector3 *param_1)

{
                    /* WARNING: Subroutine does not return */
  Node::current_process_thread_group();
}



/* WARNING: Removing unreachable block (ram,0x00107624) */
/* WARNING: Removing unreachable block (ram,0x001077e0) */
/* WARNING: Removing unreachable block (ram,0x00107630) */
/* WARNING: Removing unreachable block (ram,0x00107636) */
/* WARNING: Removing unreachable block (ram,0x0010763d) */
/* WARNING: Removing unreachable block (ram,0x00107647) */
/* WARNING: Removing unreachable block (ram,0x001077f1) */
/* WARNING: Removing unreachable block (ram,0x00107833) */
/* WARNING: Removing unreachable block (ram,0x001075ea) */
/* WARNING: Removing unreachable block (ram,0x001075c6) */
/* WARNING: Removing unreachable block (ram,0x00107710) */
/* WARNING: Removing unreachable block (ram,0x0010771d) */
/* WARNING: Removing unreachable block (ram,0x0010772a) */
/* WARNING: Removing unreachable block (ram,0x001075f7) */
/* WARNING: Removing unreachable block (ram,0x00107605) */
/* WARNING: Removing unreachable block (ram,0x001076b0) */
/* WARNING: Removing unreachable block (ram,0x001076b5) */
/* WARNING: Removing unreachable block (ram,0x001077bf) */
/* WARNING: Removing unreachable block (ram,0x001077d3) */
/* WARNING: Removing unreachable block (ram,0x001075db) */
/* WARNING: Removing unreachable block (ram,0x001075e0) */
/* WARNING: Removing unreachable block (ram,0x001076ba) */
/* WARNING: Removing unreachable block (ram,0x00107850) */
/* WARNING: Removing unreachable block (ram,0x001076c6) */
/* WARNING: Removing unreachable block (ram,0x001076cc) */
/* WARNING: Removing unreachable block (ram,0x001076d3) */
/* WARNING: Removing unreachable block (ram,0x001076dd) */
/* WARNING: Removing unreachable block (ram,0x0010760e) */
/* WARNING: Removing unreachable block (ram,0x00107618) */
/* WARNING: Removing unreachable block (ram,0x001076e5) */
/* WARNING: Removing unreachable block (ram,0x001076ff) */
/* WARNING: Removing unreachable block (ram,0x0010761a) */
/* WARNING: Removing unreachable block (ram,0x0010761f) */
/* WARNING: Removing unreachable block (ram,0x00107838) */
/* WARNING: Removing unreachable block (ram,0x00107860) */
/* WARNING: Removing unreachable block (ram,0x00107840) */
/* WARNING: Removing unreachable block (ram,0x0010764f) */
/* WARNING: Removing unreachable block (ram,0x00107654) */
/* WARNING: Removing unreachable block (ram,0x0010765d) */
/* WARNING: Removing unreachable block (ram,0x00107668) */
/* WARNING: Removing unreachable block (ram,0x00107671) */
/* WARNING: Removing unreachable block (ram,0x00107680) */
/* WARNING: Removing unreachable block (ram,0x00107694) */
/* WARNING: Removing unreachable block (ram,0x0010786c) */
/* Node3D::set_rotation_edit_mode(Node3D::RotationEditMode) */

void __thiscall Node3D::set_rotation_edit_mode(void)

{
                    /* WARNING: Subroutine does not return */
  Node::current_process_thread_group();
}



/* WARNING: Removing unreachable block (ram,0x001079dd) */
/* WARNING: Removing unreachable block (ram,0x00107a40) */
/* WARNING: Removing unreachable block (ram,0x001079e5) */
/* WARNING: Removing unreachable block (ram,0x001078d9) */
/* WARNING: Removing unreachable block (ram,0x001078b5) */
/* WARNING: Removing unreachable block (ram,0x00107990) */
/* WARNING: Removing unreachable block (ram,0x00107a50) */
/* WARNING: Removing unreachable block (ram,0x00107a5d) */
/* WARNING: Removing unreachable block (ram,0x001078e6) */
/* WARNING: Removing unreachable block (ram,0x0010799d) */
/* WARNING: Removing unreachable block (ram,0x001078eb) */
/* WARNING: Removing unreachable block (ram,0x001078ca) */
/* WARNING: Removing unreachable block (ram,0x001078cf) */
/* WARNING: Removing unreachable block (ram,0x001078f0) */
/* WARNING: Removing unreachable block (ram,0x001079a6) */
/* WARNING: Removing unreachable block (ram,0x001078fc) */
/* WARNING: Removing unreachable block (ram,0x00107902) */
/* WARNING: Removing unreachable block (ram,0x00107909) */
/* WARNING: Removing unreachable block (ram,0x00107913) */
/* WARNING: Removing unreachable block (ram,0x001079b7) */
/* WARNING: Removing unreachable block (ram,0x001079d8) */
/* WARNING: Removing unreachable block (ram,0x0010791b) */
/* WARNING: Removing unreachable block (ram,0x00107934) */
/* WARNING: Removing unreachable block (ram,0x00107939) */
/* WARNING: Removing unreachable block (ram,0x001079f8) */
/* WARNING: Removing unreachable block (ram,0x00107945) */
/* WARNING: Removing unreachable block (ram,0x0010794f) */
/* WARNING: Removing unreachable block (ram,0x00107958) */
/* WARNING: Removing unreachable block (ram,0x00107963) */
/* WARNING: Removing unreachable block (ram,0x00107a10) */
/* WARNING: Removing unreachable block (ram,0x00107a24) */
/* WARNING: Removing unreachable block (ram,0x00107970) */
/* WARNING: Removing unreachable block (ram,0x00107984) */
/* WARNING: Removing unreachable block (ram,0x00107af7) */
/* Node3D::set_rotation(Vector3 const&) */

void __thiscall Node3D::set_rotation(Node3D *this,Vector3 *param_1)

{
                    /* WARNING: Subroutine does not return */
  Node::current_process_thread_group();
}



/* WARNING: Removing unreachable block (ram,0x00107b35) */
/* WARNING: Removing unreachable block (ram,0x00107bb8) */
/* WARNING: Removing unreachable block (ram,0x00107bc1) */
/* WARNING: Removing unreachable block (ram,0x00107b46) */
/* WARNING: Removing unreachable block (ram,0x00107b4b) */
/* WARNING: Removing unreachable block (ram,0x00107b55) */
/* WARNING: Removing unreachable block (ram,0x00107bca) */
/* WARNING: Removing unreachable block (ram,0x00107b5e) */
/* WARNING: Removing unreachable block (ram,0x00107b93) */
/* WARNING: Removing unreachable block (ram,0x00107ba7) */
/* WARNING: Removing unreachable block (ram,0x00107c64) */
/* Node3D::set_rotation_degrees(Vector3 const&) */

void __thiscall Node3D::set_rotation_degrees(Node3D *this,Vector3 *param_1)

{
                    /* WARNING: Subroutine does not return */
  Node::current_process_thread_group();
}



/* WARNING: Removing unreachable block (ram,0x00107dd3) */
/* WARNING: Removing unreachable block (ram,0x00107e30) */
/* WARNING: Removing unreachable block (ram,0x00107ddb) */
/* WARNING: Removing unreachable block (ram,0x00107cc9) */
/* WARNING: Removing unreachable block (ram,0x00107ca5) */
/* WARNING: Removing unreachable block (ram,0x00107d80) */
/* WARNING: Removing unreachable block (ram,0x00107e40) */
/* WARNING: Removing unreachable block (ram,0x00107e4d) */
/* WARNING: Removing unreachable block (ram,0x00107cd6) */
/* WARNING: Removing unreachable block (ram,0x00107d8d) */
/* WARNING: Removing unreachable block (ram,0x00107cdb) */
/* WARNING: Removing unreachable block (ram,0x00107cba) */
/* WARNING: Removing unreachable block (ram,0x00107cbf) */
/* WARNING: Removing unreachable block (ram,0x00107ce0) */
/* WARNING: Removing unreachable block (ram,0x00107d96) */
/* WARNING: Removing unreachable block (ram,0x00107cec) */
/* WARNING: Removing unreachable block (ram,0x00107cf2) */
/* WARNING: Removing unreachable block (ram,0x00107cf9) */
/* WARNING: Removing unreachable block (ram,0x00107d03) */
/* WARNING: Removing unreachable block (ram,0x00107da7) */
/* WARNING: Removing unreachable block (ram,0x00107dce) */
/* WARNING: Removing unreachable block (ram,0x00107d0b) */
/* WARNING: Removing unreachable block (ram,0x00107d24) */
/* WARNING: Removing unreachable block (ram,0x00107d29) */
/* WARNING: Removing unreachable block (ram,0x00107df0) */
/* WARNING: Removing unreachable block (ram,0x00107d35) */
/* WARNING: Removing unreachable block (ram,0x00107d3f) */
/* WARNING: Removing unreachable block (ram,0x00107d48) */
/* WARNING: Removing unreachable block (ram,0x00107d53) */
/* WARNING: Removing unreachable block (ram,0x00107e00) */
/* WARNING: Removing unreachable block (ram,0x00107e14) */
/* WARNING: Removing unreachable block (ram,0x00107d60) */
/* WARNING: Removing unreachable block (ram,0x00107d74) */
/* WARNING: Removing unreachable block (ram,0x00107ee7) */
/* Node3D::set_scale(Vector3 const&) */

void __thiscall Node3D::set_scale(Node3D *this,Vector3 *param_1)

{
                    /* WARNING: Subroutine does not return */
  Node::current_process_thread_group();
}



/* WARNING: Removing unreachable block (ram,0x00107f38) */
/* WARNING: Removing unreachable block (ram,0x00108040) */
/* WARNING: Removing unreachable block (ram,0x0010804d) */
/* WARNING: Removing unreachable block (ram,0x00107f4c) */
/* WARNING: Removing unreachable block (ram,0x00107f51) */
/* WARNING: Removing unreachable block (ram,0x00107f61) */
/* WARNING: Removing unreachable block (ram,0x0010805a) */
/* WARNING: Removing unreachable block (ram,0x00107f6e) */
/* WARNING: Removing unreachable block (ram,0x001080f8) */
/* WARNING: Removing unreachable block (ram,0x00107f81) */
/* WARNING: Removing unreachable block (ram,0x00108130) */
/* WARNING: Removing unreachable block (ram,0x00107f91) */
/* WARNING: Removing unreachable block (ram,0x0010800e) */
/* WARNING: Removing unreachable block (ram,0x00108025) */
/* WARNING: Removing unreachable block (ram,0x00108166) */
/* Node3D::look_at_from_position(Vector3 const&, Vector3 const&, Vector3 const&, bool) */

void Node3D::look_at_from_position(Vector3 *param_1,Vector3 *param_2,Vector3 *param_3,bool param_4)

{
                    /* WARNING: Subroutine does not return */
  Node::current_process_thread_group();
}



/* WARNING: Removing unreachable block (ram,0x001081af) */
/* WARNING: Removing unreachable block (ram,0x00108240) */
/* WARNING: Removing unreachable block (ram,0x00108280) */
/* WARNING: Removing unreachable block (ram,0x001081c3) */
/* WARNING: Removing unreachable block (ram,0x001081c8) */
/* WARNING: Removing unreachable block (ram,0x001081d1) */
/* WARNING: Removing unreachable block (ram,0x0010828d) */
/* WARNING: Removing unreachable block (ram,0x001081de) */
/* WARNING: Removing unreachable block (ram,0x001081e7) */
/* WARNING: Removing unreachable block (ram,0x00108249) */
/* WARNING: Removing unreachable block (ram,0x0010821d) */
/* WARNING: Removing unreachable block (ram,0x00108231) */
/* WARNING: Removing unreachable block (ram,0x00108327) */
/* Node3D::look_at(Vector3 const&, Vector3 const&, bool) */

void Node3D::look_at(Vector3 *param_1,Vector3 *param_2,bool param_3)

{
                    /* WARNING: Subroutine does not return */
  Node::current_process_thread_group();
}



/* WARNING: Removing unreachable block (ram,0x00108364) */
/* WARNING: Removing unreachable block (ram,0x001083f0) */
/* WARNING: Removing unreachable block (ram,0x001083f9) */
/* WARNING: Removing unreachable block (ram,0x00108375) */
/* WARNING: Removing unreachable block (ram,0x0010837a) */
/* WARNING: Removing unreachable block (ram,0x00108384) */
/* WARNING: Removing unreachable block (ram,0x0010838d) */
/* WARNING: Removing unreachable block (ram,0x001083a2) */
/* WARNING: Removing unreachable block (ram,0x001083bd) */
/* WARNING: Removing unreachable block (ram,0x001083d1) */
/* WARNING: Removing unreachable block (ram,0x00108402) */
/* WARNING: Removing unreachable block (ram,0x001084a0) */
/* WARNING: Removing unreachable block (ram,0x001084b0) */
/* WARNING: Removing unreachable block (ram,0x001084bb) */
/* Node3D::set_as_top_level_keep_local(bool) */

void __thiscall Node3D::set_as_top_level_keep_local(Node3D *this,bool param_1)

{
                    /* WARNING: Subroutine does not return */
  Node::current_process_thread_group();
}



/* WARNING: Removing unreachable block (ram,0x00108546) */
/* WARNING: Removing unreachable block (ram,0x00108554) */
/* WARNING: Removing unreachable block (ram,0x00108608) */
/* WARNING: Removing unreachable block (ram,0x0010864a) */
/* WARNING: Removing unreachable block (ram,0x0010855c) */
/* WARNING: Removing unreachable block (ram,0x00108740) */
/* WARNING: Removing unreachable block (ram,0x00108745) */
/* WARNING: Removing unreachable block (ram,0x0010874a) */
/* WARNING: Removing unreachable block (ram,0x00108760) */
/* WARNING: Removing unreachable block (ram,0x00108752) */
/* WARNING: Removing unreachable block (ram,0x00108564) */
/* WARNING: Removing unreachable block (ram,0x001085b2) */
/* WARNING: Removing unreachable block (ram,0x001085c1) */
/* WARNING: Removing unreachable block (ram,0x001085cc) */
/* WARNING: Removing unreachable block (ram,0x00108780) */
/* WARNING: Removing unreachable block (ram,0x001084f6) */
/* WARNING: Removing unreachable block (ram,0x00108670) */
/* WARNING: Removing unreachable block (ram,0x0010867d) */
/* WARNING: Removing unreachable block (ram,0x0010850b) */
/* WARNING: Removing unreachable block (ram,0x00108510) */
/* WARNING: Removing unreachable block (ram,0x0010851a) */
/* WARNING: Removing unreachable block (ram,0x00108527) */
/* WARNING: Removing unreachable block (ram,0x00108533) */
/* WARNING: Removing unreachable block (ram,0x0010853c) */
/* WARNING: Removing unreachable block (ram,0x00108541) */
/* WARNING: Removing unreachable block (ram,0x00108798) */
/* WARNING: Removing unreachable block (ram,0x0010868a) */
/* WARNING: Removing unreachable block (ram,0x0010871f) */
/* WARNING: Removing unreachable block (ram,0x00108733) */
/* WARNING: Removing unreachable block (ram,0x0010864f) */
/* WARNING: Removing unreachable block (ram,0x00108770) */
/* WARNING: Removing unreachable block (ram,0x0010865b) */
/* WARNING: Removing unreachable block (ram,0x00108663) */
/* WARNING: Removing unreachable block (ram,0x001085d9) */
/* WARNING: Removing unreachable block (ram,0x001085ed) */
/* WARNING: Removing unreachable block (ram,0x001087dd) */
/* Node3D::set_rotation_order(EulerOrder) */

void __thiscall Node3D::set_rotation_order(void)

{
                    /* WARNING: Subroutine does not return */
  Node::current_process_thread_group();
}



/* WARNING: Removing unreachable block (ram,0x00108829) */
/* WARNING: Removing unreachable block (ram,0x001089f0) */
/* WARNING: Removing unreachable block (ram,0x001089fd) */
/* WARNING: Removing unreachable block (ram,0x0010883e) */
/* WARNING: Removing unreachable block (ram,0x00108843) */
/* WARNING: Removing unreachable block (ram,0x0010884d) */
/* WARNING: Removing unreachable block (ram,0x00108a0a) */
/* WARNING: Removing unreachable block (ram,0x00108b0f) */
/* WARNING: Removing unreachable block (ram,0x00108b17) */
/* WARNING: Removing unreachable block (ram,0x00108b1f) */
/* WARNING: Removing unreachable block (ram,0x00108b3d) */
/* WARNING: Removing unreachable block (ram,0x0010885a) */
/* WARNING: Removing unreachable block (ram,0x001088d8) */
/* WARNING: Removing unreachable block (ram,0x001088e0) */
/* WARNING: Removing unreachable block (ram,0x001088e8) */
/* WARNING: Removing unreachable block (ram,0x001088f2) */
/* WARNING: Removing unreachable block (ram,0x001089c8) */
/* WARNING: Removing unreachable block (ram,0x001088fe) */
/* WARNING: Removing unreachable block (ram,0x00108b50) */
/* WARNING: Removing unreachable block (ram,0x00108916) */
/* WARNING: Removing unreachable block (ram,0x00108940) */
/* WARNING: Removing unreachable block (ram,0x00108946) */
/* WARNING: Removing unreachable block (ram,0x00108930) */
/* WARNING: Removing unreachable block (ram,0x0010896a) */
/* WARNING: Removing unreachable block (ram,0x00108982) */
/* WARNING: Removing unreachable block (ram,0x00108925) */
/* WARNING: Removing unreachable block (ram,0x00108988) */
/* WARNING: Removing unreachable block (ram,0x0010899b) */
/* WARNING: Removing unreachable block (ram,0x001089af) */
/* WARNING: Removing unreachable block (ram,0x00108b5d) */
/* Node3D::get_gizmos_bind() const */

void Node3D::get_gizmos_bind(void)

{
                    /* WARNING: Subroutine does not return */
  Node::current_process_thread_group();
}



/* WARNING: Removing unreachable block (ram,0x00108bb1) */
/* WARNING: Removing unreachable block (ram,0x00108de0) */
/* WARNING: Removing unreachable block (ram,0x00108ded) */
/* WARNING: Removing unreachable block (ram,0x00108bc5) */
/* WARNING: Removing unreachable block (ram,0x00108bca) */
/* WARNING: Removing unreachable block (ram,0x00108bd3) */
/* WARNING: Removing unreachable block (ram,0x00108be0) */
/* WARNING: Removing unreachable block (ram,0x00108c18) */
/* WARNING: Removing unreachable block (ram,0x00108c24) */
/* WARNING: Removing unreachable block (ram,0x00108f00) */
/* WARNING: Removing unreachable block (ram,0x00108c34) */
/* WARNING: Removing unreachable block (ram,0x00108c3d) */
/* WARNING: Removing unreachable block (ram,0x00108c4c) */
/* WARNING: Removing unreachable block (ram,0x00108c50) */
/* WARNING: Removing unreachable block (ram,0x00108e98) */
/* WARNING: Removing unreachable block (ram,0x00108eb6) */
/* WARNING: Removing unreachable block (ram,0x00108c66) */
/* WARNING: Removing unreachable block (ram,0x00108d60) */
/* WARNING: Removing unreachable block (ram,0x00108ef0) */
/* WARNING: Removing unreachable block (ram,0x00108d73) */
/* WARNING: Removing unreachable block (ram,0x00108d78) */
/* WARNING: Removing unreachable block (ram,0x00108d81) */
/* WARNING: Removing unreachable block (ram,0x00108d91) */
/* WARNING: Removing unreachable block (ram,0x00108da1) */
/* WARNING: Removing unreachable block (ram,0x00108dc5) */
/* WARNING: Removing unreachable block (ram,0x00108dfa) */
/* WARNING: Removing unreachable block (ram,0x00108be9) */
/* WARNING: Removing unreachable block (ram,0x00108c00) */
/* WARNING: Removing unreachable block (ram,0x00108f2a) */
/* Node3D::set_subgizmo_selection(Ref<Node3DGizmo>, int, Transform3D) */

void Node3D::set_subgizmo_selection(void)

{
                    /* WARNING: Subroutine does not return */
  Node::current_process_thread_group();
}



/* MethodBind* ClassDB::bind_method<MethodDefinition, void (Node3D::*)(Vector3
   const&)>(MethodDefinition, void (Node3D::*)(Vector3 const&)) [clone .isra.0] */

MethodBind *
ClassDB::bind_method<MethodDefinition,void(Node3D::*)(Vector3_const&)>
          (MethodDefinition *param_1,_func_void_Vector3_ptr *param_2)

{
  long lVar1;
  MethodBind *pMVar2;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  pMVar2 = create_method_bind<Node3D,Vector3_const&>(param_2);
  ClassDB::bind_methodfi(1,pMVar2,false,param_1,(Variant **)0x0,0);
  if (Variant::needs_deinit[0] != '\0') {
    Variant::_clear_internal();
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (MethodBind *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Node3D::_bind_methods() */

void Node3D::_bind_methods(void)

{
  Variant *pVVar1;
  long *plVar2;
  long lVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  int *piVar12;
  MethodBind *pMVar13;
  uint uVar14;
  Variant *pVVar15;
  int *piVar16;
  long lVar17;
  long in_FS_OFFSET;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 local_278;
  long local_270;
  long local_268;
  long local_260;
  char *local_258;
  undefined8 local_250;
  char *local_248;
  undefined8 local_240;
  undefined1 local_238 [16];
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208 [2];
  int *local_1f8;
  undefined8 local_1f0;
  long local_1e0;
  char *local_1d8;
  undefined8 local_1d0;
  undefined *local_1c8;
  undefined *puStack_1c0;
  undefined8 local_1b8;
  undefined *local_1a8;
  undefined *puStack_1a0;
  undefined8 local_198;
  undefined *local_188;
  undefined *puStack_180;
  undefined8 local_178;
  char *local_168;
  undefined *puStack_160;
  char *local_158;
  undefined8 local_150;
  undefined *local_148;
  undefined *puStack_140;
  char *local_138;
  undefined8 local_130;
  Variant *local_128;
  undefined1 auStack_120 [24];
  undefined *local_108;
  char *pcStack_100;
  undefined *local_f8;
  undefined *puStack_f0;
  undefined8 local_e8;
  Variant local_d8 [24];
  Variant local_c0 [24];
  undefined8 local_a8;
  undefined1 local_a0 [16];
  Variant local_90 [8];
  Variant *local_88;
  undefined1 auStack_80 [16];
  undefined **appuStack_70 [3];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  puVar11 = PTR__LC175_0012a600;
  puVar8 = PTR__LC174_0012a5f8;
  puVar10 = PTR__LC172_0012a5f0;
  puVar9 = PTR__LC32_0012a5e8;
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  D_METHOD<char_const*>((char *)&local_248,"set_transform");
  auStack_120._0_16_ = (undefined1  [16])0x0;
  local_128 = (Variant *)0x0;
  pMVar13 = create_method_bind<Node3D,Transform3D_const&>(set_transform);
  ClassDB::bind_methodfi(1,pMVar13,false,(MethodDefinition *)&local_248,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_128] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_248);
  D_METHODP((char *)&local_248,(char ***)"get_transform",0);
  auStack_120._0_16_ = (undefined1  [16])0x0;
  local_128 = (Variant *)0x0;
  pMVar13 = create_method_bind<Node3D,Transform3D>(get_transform);
  ClassDB::bind_methodfi(1,pMVar13,false,(MethodDefinition *)&local_248,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_128] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_248);
  D_METHOD<char_const*>((char *)&local_248,"set_position");
  ClassDB::bind_method<MethodDefinition,void(Node3D::*)(Vector3_const&)>
            ((MethodDefinition *)&local_248,set_position,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_248);
  D_METHODP((char *)&local_248,(char ***)"get_position",0);
  auStack_120._0_16_ = (undefined1  [16])0x0;
  local_128 = (Variant *)0x0;
  pMVar13 = create_method_bind<Node3D,Vector3>(get_position);
  ClassDB::bind_methodfi(1,pMVar13,false,(MethodDefinition *)&local_248,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_128] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_248);
  D_METHOD<char_const*>((char *)&local_248,"set_rotation");
  ClassDB::bind_method<MethodDefinition,void(Node3D::*)(Vector3_const&)>
            ((MethodDefinition *)&local_248,set_rotation,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_248);
  D_METHODP((char *)&local_248,(char ***)"get_rotation",0);
  auStack_120._0_16_ = (undefined1  [16])0x0;
  local_128 = (Variant *)0x0;
  pMVar13 = create_method_bind<Node3D,Vector3>(get_rotation);
  ClassDB::bind_methodfi(1,pMVar13,false,(MethodDefinition *)&local_248,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_128] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_248);
  D_METHOD<char_const*>((char *)&local_248,"set_rotation_degrees");
  ClassDB::bind_method<MethodDefinition,void(Node3D::*)(Vector3_const&)>
            ((MethodDefinition *)&local_248,set_rotation_degrees,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_248);
  D_METHODP((char *)&local_248,(char ***)"get_rotation_degrees",0);
  auStack_120._0_16_ = (undefined1  [16])0x0;
  local_128 = (Variant *)0x0;
  pMVar13 = create_method_bind<Node3D,Vector3>(get_rotation_degrees);
  ClassDB::bind_methodfi(1,pMVar13,false,(MethodDefinition *)&local_248,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_128] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_248);
  D_METHOD<char_const*>((char *)&local_248,"set_rotation_order");
  auStack_120._0_16_ = (undefined1  [16])0x0;
  local_128 = (Variant *)0x0;
  pMVar13 = create_method_bind<Node3D,EulerOrder>(set_rotation_order);
  ClassDB::bind_methodfi(1,pMVar13,false,(MethodDefinition *)&local_248,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_128] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_248);
  D_METHODP((char *)&local_248,(char ***)"get_rotation_order",0);
  auStack_120._0_16_ = (undefined1  [16])0x0;
  local_128 = (Variant *)0x0;
  pMVar13 = create_method_bind<Node3D,EulerOrder>(get_rotation_order);
  ClassDB::bind_methodfi(1,pMVar13,false,(MethodDefinition *)&local_248,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_128] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_248);
  D_METHOD<char_const*>((char *)&local_248,"set_rotation_edit_mode");
  auStack_120._0_16_ = (undefined1  [16])0x0;
  local_128 = (Variant *)0x0;
  pMVar13 = create_method_bind<Node3D,Node3D::RotationEditMode>(set_rotation_edit_mode);
  ClassDB::bind_methodfi(1,pMVar13,false,(MethodDefinition *)&local_248,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_128] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_248);
  D_METHODP((char *)&local_248,(char ***)"get_rotation_edit_mode",0);
  auStack_120._0_16_ = (undefined1  [16])0x0;
  local_128 = (Variant *)0x0;
  pMVar13 = create_method_bind<Node3D,Node3D::RotationEditMode>(get_rotation_edit_mode);
  ClassDB::bind_methodfi(1,pMVar13,false,(MethodDefinition *)&local_248,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_128] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_248);
  D_METHOD<char_const*>((char *)&local_248,"set_scale");
  ClassDB::bind_method<MethodDefinition,void(Node3D::*)(Vector3_const&)>
            ((MethodDefinition *)&local_248,set_scale,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_248);
  D_METHODP((char *)&local_248,(char ***)"get_scale",0);
  auStack_120._0_16_ = (undefined1  [16])0x0;
  local_128 = (Variant *)0x0;
  pMVar13 = create_method_bind<Node3D,Vector3>(get_scale);
  ClassDB::bind_methodfi(1,pMVar13,false,(MethodDefinition *)&local_248,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_128] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_248);
  D_METHOD<char_const*>((char *)&local_248,"set_quaternion");
  auStack_120._0_16_ = (undefined1  [16])0x0;
  local_128 = (Variant *)0x0;
  pMVar13 = create_method_bind<Node3D,Quaternion_const&>(set_quaternion);
  ClassDB::bind_methodfi(1,pMVar13,false,(MethodDefinition *)&local_248,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_128] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_248);
  D_METHODP((char *)&local_248,(char ***)"get_quaternion",0);
  auStack_120._0_16_ = (undefined1  [16])0x0;
  local_128 = (Variant *)0x0;
  pMVar13 = create_method_bind<Node3D,Quaternion>(get_quaternion);
  ClassDB::bind_methodfi(1,pMVar13,false,(MethodDefinition *)&local_248,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_128] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_248);
  D_METHOD<char_const*>((char *)&local_248,"set_basis");
  auStack_120._0_16_ = (undefined1  [16])0x0;
  local_128 = (Variant *)0x0;
  pMVar13 = create_method_bind<Node3D,Basis_const&>(set_basis);
  ClassDB::bind_methodfi(1,pMVar13,false,(MethodDefinition *)&local_248,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_128] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_248);
  D_METHODP((char *)&local_248,(char ***)"get_basis",0);
  auStack_120._0_16_ = (undefined1  [16])0x0;
  local_128 = (Variant *)0x0;
  pMVar13 = create_method_bind<Node3D,Basis>(get_basis);
  ClassDB::bind_methodfi(1,pMVar13,false,(MethodDefinition *)&local_248,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_128] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_248);
  D_METHOD<char_const*>((char *)&local_248,"set_global_transform");
  auStack_120._0_16_ = (undefined1  [16])0x0;
  local_128 = (Variant *)0x0;
  pMVar13 = create_method_bind<Node3D,Transform3D_const&>(set_global_transform);
  ClassDB::bind_methodfi(1,pMVar13,false,(MethodDefinition *)&local_248,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_128] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_248);
  D_METHODP((char *)&local_248,(char ***)"get_global_transform",0);
  auStack_120._0_16_ = (undefined1  [16])0x0;
  local_128 = (Variant *)0x0;
  pMVar13 = create_method_bind<Node3D,Transform3D>(get_global_transform);
  ClassDB::bind_methodfi(1,pMVar13,false,(MethodDefinition *)&local_248,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_128] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_248);
  D_METHODP((char *)&local_248,(char ***)"get_global_transform_interpolated",0);
  auStack_120._0_16_ = (undefined1  [16])0x0;
  local_128 = (Variant *)0x0;
  pMVar13 = create_method_bind<Node3D,Transform3D>(get_global_transform_interpolated);
  ClassDB::bind_methodfi(1,pMVar13,false,(MethodDefinition *)&local_248,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_128] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_248);
  local_1d0 = 0;
  local_1d8 = "position";
  local_128 = (Variant *)&local_1d8;
  uVar14 = (uint)&local_128;
  D_METHODP((char *)&local_248,(char ***)"set_global_position",uVar14);
  ClassDB::bind_method<MethodDefinition,void(Node3D::*)(Vector3_const&)>
            ((MethodDefinition *)&local_248,set_global_position,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_248);
  D_METHODP((char *)&local_248,(char ***)"get_global_position",0);
  auStack_120._0_16_ = (undefined1  [16])0x0;
  local_128 = (Variant *)0x0;
  pMVar13 = create_method_bind<Node3D,Vector3>(get_global_position);
  ClassDB::bind_methodfi(1,pMVar13,false,(MethodDefinition *)&local_248,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_128] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_248);
  D_METHOD<char_const*>((char *)&local_248,"set_global_basis");
  auStack_120._0_16_ = (undefined1  [16])0x0;
  local_128 = (Variant *)0x0;
  pMVar13 = create_method_bind<Node3D,Basis_const&>(set_global_basis);
  ClassDB::bind_methodfi(1,pMVar13,false,(MethodDefinition *)&local_248,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_128] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_248);
  D_METHODP((char *)&local_248,(char ***)"get_global_basis",0);
  auStack_120._0_16_ = (undefined1  [16])0x0;
  local_128 = (Variant *)0x0;
  pMVar13 = create_method_bind<Node3D,Basis>(get_global_basis);
  ClassDB::bind_methodfi(1,pMVar13,false,(MethodDefinition *)&local_248,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_128] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_248);
  D_METHOD<char_const*>((char *)&local_248,"set_global_rotation");
  ClassDB::bind_method<MethodDefinition,void(Node3D::*)(Vector3_const&)>
            ((MethodDefinition *)&local_248,set_global_rotation,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_248);
  D_METHODP((char *)&local_248,(char ***)"get_global_rotation",0);
  auStack_120._0_16_ = (undefined1  [16])0x0;
  local_128 = (Variant *)0x0;
  pMVar13 = create_method_bind<Node3D,Vector3>(get_global_rotation);
  ClassDB::bind_methodfi(1,pMVar13,false,(MethodDefinition *)&local_248,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_128] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_248);
  D_METHOD<char_const*>((char *)&local_248,"set_global_rotation_degrees");
  ClassDB::bind_method<MethodDefinition,void(Node3D::*)(Vector3_const&)>
            ((MethodDefinition *)&local_248,set_global_rotation_degrees,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_248);
  D_METHODP((char *)&local_248,(char ***)"get_global_rotation_degrees",0);
  auStack_120._0_16_ = (undefined1  [16])0x0;
  local_128 = (Variant *)0x0;
  pMVar13 = create_method_bind<Node3D,Vector3>(get_global_rotation_degrees);
  ClassDB::bind_methodfi(1,pMVar13,false,(MethodDefinition *)&local_248,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_128] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_248);
  D_METHODP((char *)&local_248,(char ***)"get_parent_node_3d",0);
  auStack_120._0_16_ = (undefined1  [16])0x0;
  local_128 = (Variant *)0x0;
  pMVar13 = create_method_bind<Node3D,Node3D*>(get_parent_node_3d);
  ClassDB::bind_methodfi(1,pMVar13,false,(MethodDefinition *)&local_248,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_128] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_248);
  D_METHOD<char_const*>((char *)&local_248,"set_ignore_transform_notification");
  auStack_120._0_16_ = (undefined1  [16])0x0;
  local_128 = (Variant *)0x0;
  pMVar13 = create_method_bind<Node3D,bool>(set_ignore_transform_notification);
  ClassDB::bind_methodfi(1,pMVar13,false,(MethodDefinition *)&local_248,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_128] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_248);
  D_METHOD<char_const*>((char *)&local_248,"set_as_top_level");
  auStack_120._0_16_ = (undefined1  [16])0x0;
  local_128 = (Variant *)0x0;
  pMVar13 = create_method_bind<Node3D,bool>(set_as_top_level);
  ClassDB::bind_methodfi(1,pMVar13,false,(MethodDefinition *)&local_248,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_128] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_248);
  D_METHODP((char *)&local_248,(char ***)"is_set_as_top_level",0);
  auStack_120._0_16_ = (undefined1  [16])0x0;
  local_128 = (Variant *)0x0;
  pMVar13 = create_method_bind<Node3D,bool>(is_set_as_top_level);
  ClassDB::bind_methodfi(1,pMVar13,false,(MethodDefinition *)&local_248,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_128] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_248);
  D_METHOD<char_const*>((char *)&local_248,"set_disable_scale");
  auStack_120._0_16_ = (undefined1  [16])0x0;
  local_128 = (Variant *)0x0;
  pMVar13 = create_method_bind<Node3D,bool>(set_disable_scale);
  ClassDB::bind_methodfi(1,pMVar13,false,(MethodDefinition *)&local_248,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_128] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_248);
  D_METHODP((char *)&local_248,(char ***)"is_scale_disabled",0);
  auStack_120._0_16_ = (undefined1  [16])0x0;
  local_128 = (Variant *)0x0;
  pMVar13 = create_method_bind<Node3D,bool>(is_scale_disabled);
  ClassDB::bind_methodfi(1,pMVar13,false,(MethodDefinition *)&local_248,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_128] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_248);
  D_METHODP((char *)&local_248,(char ***)"get_world_3d",0);
  auStack_120._0_16_ = (undefined1  [16])0x0;
  local_128 = (Variant *)0x0;
  pMVar13 = create_method_bind<Node3D,Ref<World3D>>(get_world_3d);
  ClassDB::bind_methodfi(1,pMVar13,false,(MethodDefinition *)&local_248,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_128] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_248);
  D_METHODP((char *)&local_248,(char ***)"force_update_transform",0);
  auStack_120._0_16_ = (undefined1  [16])0x0;
  local_128 = (Variant *)0x0;
  pMVar13 = create_method_bind<Node3D>(force_update_transform);
  ClassDB::bind_methodfi(1,pMVar13,false,(MethodDefinition *)&local_248,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_128] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_248);
  D_METHOD<char_const*>((char *)&local_248,"set_visibility_parent");
  auStack_120._0_16_ = (undefined1  [16])0x0;
  local_128 = (Variant *)0x0;
  pMVar13 = create_method_bind<Node3D,NodePath_const&>(set_visibility_parent);
  ClassDB::bind_methodfi(1,pMVar13,false,(MethodDefinition *)&local_248,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_128] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_248);
  D_METHODP((char *)&local_248,(char ***)"get_visibility_parent",0);
  auStack_120._0_16_ = (undefined1  [16])0x0;
  local_128 = (Variant *)0x0;
  pMVar13 = create_method_bind<Node3D,NodePath>(get_visibility_parent);
  ClassDB::bind_methodfi(1,pMVar13,false,(MethodDefinition *)&local_248,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_128] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_248);
  D_METHODP((char *)&local_248,(char ***)"update_gizmos",0);
  auStack_120._0_16_ = (undefined1  [16])0x0;
  local_128 = (Variant *)0x0;
  pMVar13 = create_method_bind<Node3D>(update_gizmos);
  ClassDB::bind_methodfi(1,pMVar13,false,(MethodDefinition *)&local_248,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_128] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_248);
  D_METHOD<char_const*>((char *)&local_248,"add_gizmo");
  auStack_120._0_16_ = (undefined1  [16])0x0;
  local_128 = (Variant *)0x0;
  pMVar13 = create_method_bind<Node3D,Ref<Node3DGizmo>>(add_gizmo);
  ClassDB::bind_methodfi(1,pMVar13,false,(MethodDefinition *)&local_248,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_128] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_248);
  D_METHODP((char *)&local_248,(char ***)"get_gizmos",0);
  auStack_120._0_16_ = (undefined1  [16])0x0;
  local_128 = (Variant *)0x0;
  pMVar13 = create_method_bind<Node3D,TypedArray<Node3DGizmo>>(get_gizmos_bind);
  ClassDB::bind_methodfi(1,pMVar13,false,(MethodDefinition *)&local_248,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_128] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_248);
  D_METHODP((char *)&local_248,(char ***)"clear_gizmos",0);
  auStack_120._0_16_ = (undefined1  [16])0x0;
  local_128 = (Variant *)0x0;
  pMVar13 = create_method_bind<Node3D>(clear_gizmos);
  ClassDB::bind_methodfi(1,pMVar13,false,(MethodDefinition *)&local_248,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_128] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_248);
  local_138 = "transform";
  local_148 = puVar11;
  puStack_140 = &_LC176;
  auStack_120._8_8_ = &local_138;
  auStack_120._0_8_ = &puStack_140;
  local_130 = 0;
  local_128 = (Variant *)&local_148;
  D_METHODP((char *)&local_248,(char ***)"set_subgizmo_selection",uVar14);
  auStack_120._0_16_ = (undefined1  [16])0x0;
  local_128 = (Variant *)0x0;
  pMVar13 = create_method_bind<Node3D,Ref<Node3DGizmo>,int,Transform3D>(set_subgizmo_selection);
  ClassDB::bind_methodfi(1,pMVar13,false,(MethodDefinition *)&local_248,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_128] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_248);
  D_METHODP((char *)&local_248,(char ***)"clear_subgizmo_selection",0);
  auStack_120._0_16_ = (undefined1  [16])0x0;
  local_128 = (Variant *)0x0;
  pMVar13 = create_method_bind<Node3D>(clear_subgizmo_selection);
  ClassDB::bind_methodfi(1,pMVar13,false,(MethodDefinition *)&local_248,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_128] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_248);
  D_METHOD<char_const*>((char *)&local_248,"set_visible");
  auStack_120._0_16_ = (undefined1  [16])0x0;
  local_128 = (Variant *)0x0;
  pMVar13 = create_method_bind<Node3D,bool>(set_visible);
  ClassDB::bind_methodfi(1,pMVar13,false,(MethodDefinition *)&local_248,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_128] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_248);
  D_METHODP((char *)&local_248,(char ***)"is_visible",0);
  auStack_120._0_16_ = (undefined1  [16])0x0;
  local_128 = (Variant *)0x0;
  pMVar13 = create_method_bind<Node3D,bool>(is_visible);
  ClassDB::bind_methodfi(1,pMVar13,false,(MethodDefinition *)&local_248,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_128] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_248);
  D_METHODP((char *)&local_248,(char ***)"is_visible_in_tree",0);
  auStack_120._0_16_ = (undefined1  [16])0x0;
  local_128 = (Variant *)0x0;
  pMVar13 = create_method_bind<Node3D,bool>(is_visible_in_tree);
  ClassDB::bind_methodfi(1,pMVar13,false,(MethodDefinition *)&local_248,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_128] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_248);
  D_METHODP((char *)&local_248,(char ***)&_LC195,0);
  auStack_120._0_16_ = (undefined1  [16])0x0;
  local_128 = (Variant *)0x0;
  pMVar13 = create_method_bind<Node3D>(show);
  ClassDB::bind_methodfi(1,pMVar13,false,(MethodDefinition *)&local_248,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_128] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_248);
  D_METHODP((char *)&local_248,(char ***)&_LC196,0);
  auStack_120._0_16_ = (undefined1  [16])0x0;
  local_128 = (Variant *)0x0;
  pMVar13 = create_method_bind<Node3D>(hide);
  ClassDB::bind_methodfi(1,pMVar13,false,(MethodDefinition *)&local_248,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_128] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_248);
  D_METHOD<char_const*>((char *)&local_248,"set_notify_local_transform");
  auStack_120._0_16_ = (undefined1  [16])0x0;
  local_128 = (Variant *)0x0;
  pMVar13 = create_method_bind<Node3D,bool>(set_notify_local_transform);
  ClassDB::bind_methodfi(1,pMVar13,false,(MethodDefinition *)&local_248,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_128] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_248);
  D_METHODP((char *)&local_248,(char ***)"is_local_transform_notification_enabled",0);
  auStack_120._0_16_ = (undefined1  [16])0x0;
  local_128 = (Variant *)0x0;
  pMVar13 = create_method_bind<Node3D,bool>(is_local_transform_notification_enabled);
  ClassDB::bind_methodfi(1,pMVar13,false,(MethodDefinition *)&local_248,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_128] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_248);
  D_METHOD<char_const*>((char *)&local_248,"set_notify_transform");
  auStack_120._0_16_ = (undefined1  [16])0x0;
  local_128 = (Variant *)0x0;
  pMVar13 = create_method_bind<Node3D,bool>(set_notify_transform);
  ClassDB::bind_methodfi(1,pMVar13,false,(MethodDefinition *)&local_248,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_128] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_248);
  D_METHODP((char *)&local_248,(char ***)"is_transform_notification_enabled",0);
  auStack_120._0_16_ = (undefined1  [16])0x0;
  local_128 = (Variant *)0x0;
  pMVar13 = create_method_bind<Node3D,bool>(is_transform_notification_enabled);
  ClassDB::bind_methodfi(1,pMVar13,false,(MethodDefinition *)&local_248,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_128] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_248);
  local_178 = 0;
  local_188 = &_LC173;
  puStack_180 = puVar8;
  auStack_120._0_8_ = &puStack_180;
  local_128 = (Variant *)&local_188;
  D_METHODP((char *)&local_248,(char ***)"rotate",uVar14);
  auStack_120._0_16_ = (undefined1  [16])0x0;
  local_128 = (Variant *)0x0;
  pMVar13 = create_method_bind<Node3D,Vector3_const&,float>(rotate);
  ClassDB::bind_methodfi(1,pMVar13,false,(MethodDefinition *)&local_248,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_128] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_248);
  local_198 = 0;
  local_1a8 = &_LC173;
  puStack_1a0 = puVar8;
  auStack_120._0_8_ = &puStack_1a0;
  local_128 = (Variant *)&local_1a8;
  D_METHODP((char *)&local_248,(char ***)"global_rotate",uVar14);
  auStack_120._0_16_ = (undefined1  [16])0x0;
  local_128 = (Variant *)0x0;
  pMVar13 = create_method_bind<Node3D,Vector3_const&,float>(global_rotate);
  ClassDB::bind_methodfi(1,pMVar13,false,(MethodDefinition *)&local_248,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_128] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_248);
  D_METHOD<char_const*>((char *)&local_248,"global_scale");
  ClassDB::bind_method<MethodDefinition,void(Node3D::*)(Vector3_const&)>
            ((MethodDefinition *)&local_248,global_scale,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_248);
  D_METHOD<char_const*>((char *)&local_248,"global_translate");
  ClassDB::bind_method<MethodDefinition,void(Node3D::*)(Vector3_const&)>
            ((MethodDefinition *)&local_248,global_translate,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_248);
  local_1b8 = 0;
  local_1c8 = &_LC173;
  puStack_1c0 = puVar8;
  auStack_120._0_8_ = &puStack_1c0;
  local_128 = (Variant *)&local_1c8;
  D_METHODP((char *)&local_248,(char ***)"rotate_object_local",uVar14);
  auStack_120._0_16_ = (undefined1  [16])0x0;
  local_128 = (Variant *)0x0;
  pMVar13 = create_method_bind<Node3D,Vector3_const&,float>(rotate_object_local);
  ClassDB::bind_methodfi(1,pMVar13,false,(MethodDefinition *)&local_248,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_128] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_248);
  D_METHOD<char_const*>((char *)&local_248,"scale_object_local");
  ClassDB::bind_method<MethodDefinition,void(Node3D::*)(Vector3_const&)>
            ((MethodDefinition *)&local_248,scale_object_local,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_248);
  D_METHOD<char_const*>((char *)&local_248,"translate_object_local");
  ClassDB::bind_method<MethodDefinition,void(Node3D::*)(Vector3_const&)>
            ((MethodDefinition *)&local_248,translate_object_local,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_248);
  D_METHOD<char_const*>((char *)&local_248,"rotate_x");
  auStack_120._0_16_ = (undefined1  [16])0x0;
  local_128 = (Variant *)0x0;
  pMVar13 = create_method_bind<Node3D,float>(rotate_x);
  ClassDB::bind_methodfi(1,pMVar13,false,(MethodDefinition *)&local_248,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_128] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_248);
  D_METHOD<char_const*>((char *)&local_248,"rotate_y");
  auStack_120._0_16_ = (undefined1  [16])0x0;
  local_128 = (Variant *)0x0;
  pMVar13 = create_method_bind<Node3D,float>(rotate_y);
  ClassDB::bind_methodfi(1,pMVar13,false,(MethodDefinition *)&local_248,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_128] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_248);
  D_METHOD<char_const*>((char *)&local_248,"rotate_z");
  auStack_120._0_16_ = (undefined1  [16])0x0;
  local_128 = (Variant *)0x0;
  pMVar13 = create_method_bind<Node3D,float>(rotate_z);
  ClassDB::bind_methodfi(1,pMVar13,false,(MethodDefinition *)&local_248,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_128] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_248);
  D_METHOD<char_const*>((char *)&local_248,"translate");
  ClassDB::bind_method<MethodDefinition,void(Node3D::*)(Vector3_const&)>
            ((MethodDefinition *)&local_248,translate,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_248);
  D_METHODP((char *)&local_248,(char ***)"orthonormalize",0);
  auStack_120._0_16_ = (undefined1  [16])0x0;
  local_128 = (Variant *)0x0;
  pMVar13 = create_method_bind<Node3D>(orthonormalize);
  ClassDB::bind_methodfi(1,pMVar13,false,(MethodDefinition *)&local_248,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_128] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_248);
  D_METHODP((char *)&local_248,(char ***)"set_identity",0);
  auStack_120._0_16_ = (undefined1  [16])0x0;
  local_128 = (Variant *)0x0;
  pMVar13 = create_method_bind<Node3D>(set_identity);
  ClassDB::bind_methodfi(1,pMVar13,false,(MethodDefinition *)&local_248,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_128] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_248);
  local_158 = "use_model_front";
  auStack_120._8_8_ = &local_158;
  local_168 = "target";
  puStack_160 = &_LC171;
  local_150 = 0;
  local_128 = (Variant *)&local_168;
  auStack_120._0_8_ = &puStack_160;
  D_METHODP((char *)&local_248,(char ***)"look_at",uVar14);
  puVar8 = _LC131;
  puStack_140 = (undefined *)((ulong)puStack_140 & 0xffffffff00000000);
  local_148 = _LC131;
  Variant::Variant((Variant *)&local_88,(Variant *)&local_148);
  Variant::Variant((Variant *)appuStack_70,false);
  local_50 = (undefined1  [16])0x0;
  auStack_120._0_8_ = (Variant *)appuStack_70;
  local_58 = 0;
  local_128 = (Variant *)&local_88;
  pMVar13 = create_method_bind<Node3D,Vector3_const&,Vector3_const&,bool>(look_at);
  ClassDB::bind_methodfi(1,pMVar13,false,(MethodDefinition *)&local_248,&local_128,2);
  pVVar15 = (Variant *)local_40;
  do {
    pVVar1 = pVVar15 + -0x18;
    pVVar15 = pVVar15 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar15 != (Variant *)&local_88);
  pVVar15 = local_90;
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_248);
  local_e8 = 0;
  local_108 = puVar9;
  pcStack_100 = "target";
  local_f8 = &_LC171;
  puStack_f0 = puVar10;
  local_88 = (Variant *)&local_108;
  appuStack_70[0] = &puStack_f0;
  auStack_80._0_8_ = &pcStack_100;
  auStack_80._8_8_ = &local_f8;
  D_METHODP((char *)&local_248,(char ***)"look_at_from_position",(uint)(Variant *)&local_88);
  local_108 = puVar8;
  pcStack_100 = (char *)((ulong)pcStack_100 & 0xffffffff00000000);
  Variant::Variant(local_d8,(Vector3 *)&local_108);
  Variant::Variant(local_c0,false);
  local_a0 = (undefined1  [16])0x0;
  local_a8 = 0;
  auStack_80._0_8_ = local_c0;
  local_88 = local_d8;
  pMVar13 = create_method_bind<Node3D,Vector3_const&,Vector3_const&,Vector3_const&,bool>
                      (look_at_from_position);
  ClassDB::bind_methodfi(1,pMVar13,false,(MethodDefinition *)&local_248,&local_88,2);
  do {
    pVVar1 = pVVar15 + -0x18;
    pVVar15 = pVVar15 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar15 != local_d8);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_248);
  D_METHOD<char_const*>((char *)&local_248,"to_local");
  auStack_80 = (undefined1  [16])0x0;
  local_88 = (Variant *)0x0;
  pMVar13 = create_method_bind<Node3D,Vector3,Vector3>(to_local);
  ClassDB::bind_methodfi(1,pMVar13,false,(MethodDefinition *)&local_248,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_88] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_248);
  D_METHOD<char_const*>((char *)&local_248,"to_global");
  auStack_80 = (undefined1  [16])0x0;
  local_88 = (Variant *)0x0;
  pMVar13 = create_method_bind<Node3D,Vector3,Vector3>(to_global);
  ClassDB::bind_methodfi(1,pMVar13,false,(MethodDefinition *)&local_248,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_88] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_248);
  StringName::StringName((StringName *)&local_258,"NOTIFICATION_TRANSFORM_CHANGED",false);
  local_248 = "Node3D";
  local_260 = 0;
  local_268 = 0;
  local_240 = 6;
  String::parse_latin1((StrRange *)&local_268);
  StringName::StringName((StringName *)&local_248,(String *)&local_268,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_248,(StringName *)&local_260,(StringName *)&local_258,2000,false);
  if ((StringName::configured != '\0') && (local_248 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_268);
  if ((StringName::configured != '\0') &&
     (((local_260 == 0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_258 != (char *)0x0)))) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_258,"NOTIFICATION_ENTER_WORLD",false);
  local_248 = "Node3D";
  local_260 = 0;
  local_268 = 0;
  local_240 = 6;
  String::parse_latin1((StrRange *)&local_268);
  StringName::StringName((StringName *)&local_248,(String *)&local_268,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_248,(StringName *)&local_260,(StringName *)&local_258,0x29,false);
  if ((StringName::configured != '\0') && (local_248 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_268);
  if (((StringName::configured != '\0') &&
      ((local_260 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_258 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_258,"NOTIFICATION_EXIT_WORLD",false);
  local_248 = "Node3D";
  local_260 = 0;
  local_268 = 0;
  local_240 = 6;
  String::parse_latin1((StrRange *)&local_268);
  StringName::StringName((StringName *)&local_248,(String *)&local_268,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_248,(StringName *)&local_260,(StringName *)&local_258,0x2a,false);
  if ((StringName::configured != '\0') && (local_248 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_268);
  if ((StringName::configured != '\0') &&
     (((local_260 == 0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_258 != (char *)0x0)))) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_258,"NOTIFICATION_VISIBILITY_CHANGED",false);
  local_248 = "Node3D";
  local_260 = 0;
  local_268 = 0;
  local_240 = 6;
  String::parse_latin1((StrRange *)&local_268);
  StringName::StringName((StringName *)&local_248,(String *)&local_268,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_248,(StringName *)&local_260,(StringName *)&local_258,0x2b,false);
  if ((StringName::configured != '\0') && (local_248 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_268);
  if (((StringName::configured != '\0') &&
      ((local_260 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_258 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_258,"NOTIFICATION_LOCAL_TRANSFORM_CHANGED",false);
  local_248 = "Node3D";
  local_260 = 0;
  local_268 = 0;
  local_240 = 6;
  String::parse_latin1((StrRange *)&local_268);
  StringName::StringName((StringName *)&local_248,(String *)&local_268,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_248,(StringName *)&local_260,(StringName *)&local_258,0x2c,false);
  if ((StringName::configured != '\0') && (local_248 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_268);
  if ((StringName::configured != '\0') &&
     (((local_260 == 0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_258 != (char *)0x0)))) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_258,"ROTATION_EDIT_MODE_EULER",false);
  local_248 = "ROTATION_EDIT_MODE_EULER";
  local_268 = 0;
  local_240 = 0x18;
  String::parse_latin1((StrRange *)&local_268);
  GetTypeInfo<Node3D::RotationEditMode,void>::get_class_info
            ((GetTypeInfo<Node3D::RotationEditMode,void> *)&local_248);
  local_260 = local_238._0_8_;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = local_238._8_8_;
  local_238 = auVar5 << 0x40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_248);
  local_270 = 0;
  local_248 = "Node3D";
  local_240 = 6;
  String::parse_latin1((StrRange *)&local_270);
  StringName::StringName((StringName *)&local_248,(String *)&local_270,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_248,(StringName *)&local_260,(StringName *)&local_258,0,false);
  if ((StringName::configured != '\0') && (local_248 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_270);
  if ((StringName::configured != '\0') && (local_260 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_268);
  if ((StringName::configured != '\0') && (local_258 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_258,"ROTATION_EDIT_MODE_QUATERNION",false);
  local_248 = "ROTATION_EDIT_MODE_QUATERNION";
  local_268 = 0;
  local_240 = 0x1d;
  String::parse_latin1((StrRange *)&local_268);
  GetTypeInfo<Node3D::RotationEditMode,void>::get_class_info
            ((GetTypeInfo<Node3D::RotationEditMode,void> *)&local_248);
  local_260 = local_238._0_8_;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = local_238._8_8_;
  local_238 = auVar6 << 0x40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_248);
  local_248 = "Node3D";
  local_270 = 0;
  local_240 = 6;
  String::parse_latin1((StrRange *)&local_270);
  StringName::StringName((StringName *)&local_248,(String *)&local_270,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_248,(StringName *)&local_260,(StringName *)&local_258,1,false);
  if ((StringName::configured != '\0') && (local_248 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_270);
  if ((StringName::configured != '\0') && (local_260 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_268);
  if ((StringName::configured != '\0') && (local_258 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_258,"ROTATION_EDIT_MODE_BASIS",false);
  local_248 = "ROTATION_EDIT_MODE_BASIS";
  local_268 = 0;
  local_240 = 0x18;
  String::parse_latin1((StrRange *)&local_268);
  GetTypeInfo<Node3D::RotationEditMode,void>::get_class_info
            ((GetTypeInfo<Node3D::RotationEditMode,void> *)&local_248);
  local_260 = local_238._0_8_;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = local_238._8_8_;
  local_238 = auVar7 << 0x40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_248);
  local_248 = "Node3D";
  local_270 = 0;
  local_240 = 6;
  String::parse_latin1((StrRange *)&local_270);
  StringName::StringName((StringName *)&local_248,(String *)&local_270,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_248,(StringName *)&local_260,(StringName *)&local_258,2,false);
  if ((StringName::configured != '\0') && (local_248 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_270);
  if ((StringName::configured != '\0') && (local_260 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_268);
  if ((StringName::configured != '\0') && (local_258 != (char *)0x0)) {
    StringName::unref();
  }
  local_258 = (char *)0x0;
  local_248 = "";
  local_240 = 0;
  String::parse_latin1((StrRange *)&local_258);
  local_248 = "Transform";
  local_260 = 0;
  local_240 = 9;
  String::parse_latin1((StrRange *)&local_260);
  local_248 = "Node3D";
  local_268 = 0;
  local_240 = 6;
  String::parse_latin1((StrRange *)&local_268);
  StringName::StringName((StringName *)&local_248,(String *)&local_268,false);
  ClassDB::add_property_group((StringName *)&local_248,(String *)&local_260,(String *)&local_258,0);
  if ((StringName::configured != '\0') && (local_248 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_268);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_260);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_258);
  _scs_create((char *)&local_260,true);
  _scs_create((char *)&local_268,true);
  local_270 = 0;
  local_248 = "suffix:m";
  local_278 = 0;
  local_240 = 8;
  String::parse_latin1((StrRange *)&local_278);
  local_248 = "transform";
  local_280 = 0;
  local_240 = 9;
  String::parse_latin1((StrRange *)&local_280);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_248,0x12,(StrRange *)&local_280,0,(StrRange *)&local_278,2,
             (StrRange *)&local_270);
  local_288 = 0;
  local_258 = "Node3D";
  local_250 = 6;
  String::parse_latin1((StrRange *)&local_288);
  StringName::StringName((StringName *)&local_258,(String *)&local_288,false);
  ClassDB::add_property
            ((StringName *)&local_258,(PropertyInfo *)&local_248,(StringName *)&local_268,
             (StringName *)&local_260,-1);
  if ((StringName::configured != '\0') && (local_258 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_288);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_248);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_280);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_278);
  if (((StringName::configured != '\0') &&
      ((local_270 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (((local_268 == 0 || (StringName::unref(), StringName::configured != '\0')) && (local_260 != 0)
      ))) {
    StringName::unref();
  }
  _scs_create((char *)&local_260,true);
  _scs_create((char *)&local_268,true);
  local_248 = "suffix:m";
  local_270 = 0;
  local_278 = 0;
  local_240 = 8;
  String::parse_latin1((StrRange *)&local_278);
  local_248 = "global_transform";
  local_280 = 0;
  local_240 = 0x10;
  String::parse_latin1((StrRange *)&local_280);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_248,0x12,(StrRange *)&local_280,0,(StrRange *)&local_278,0,
             (StrRange *)&local_270);
  local_258 = "Node3D";
  local_288 = 0;
  local_250 = 6;
  String::parse_latin1((StrRange *)&local_288);
  StringName::StringName((StringName *)&local_258,(String *)&local_288,false);
  ClassDB::add_property
            ((StringName *)&local_258,(PropertyInfo *)&local_248,(StringName *)&local_268,
             (StringName *)&local_260,-1);
  if ((StringName::configured != '\0') && (local_258 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_288);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_248);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_280);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_278);
  if ((((StringName::configured != '\0') &&
       ((local_270 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_268 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_260 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_260,true);
  _scs_create((char *)&local_268,true);
  local_248 = "-99999,99999,or_greater,or_less,hide_slider,suffix:m";
  local_270 = 0;
  local_278 = 0;
  local_240 = 0x34;
  String::parse_latin1((StrRange *)&local_278);
  local_248 = "position";
  local_280 = 0;
  local_240 = 8;
  String::parse_latin1((StrRange *)&local_280);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_248,9,(StrRange *)&local_280,1,(StrRange *)&local_278,4,
             (StrRange *)&local_270);
  local_258 = "Node3D";
  local_288 = 0;
  local_250 = 6;
  String::parse_latin1((StrRange *)&local_288);
  StringName::StringName((StringName *)&local_258,(String *)&local_288,false);
  ClassDB::add_property
            ((StringName *)&local_258,(PropertyInfo *)&local_248,(StringName *)&local_268,
             (StringName *)&local_260,-1);
  if ((StringName::configured != '\0') && (local_258 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_288);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_248);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_280);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_278);
  if (((StringName::configured != '\0') &&
      ((local_270 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (((local_268 == 0 || (StringName::unref(), StringName::configured != '\0')) && (local_260 != 0)
      ))) {
    StringName::unref();
  }
  _scs_create((char *)&local_260,true);
  _scs_create((char *)&local_268,true);
  local_248 = "-360,360,0.1,or_less,or_greater,radians_as_degrees";
  local_270 = 0;
  local_278 = 0;
  local_240 = 0x32;
  String::parse_latin1((StrRange *)&local_278);
  local_248 = "rotation";
  local_280 = 0;
  local_240 = 8;
  String::parse_latin1((StrRange *)&local_280);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_248,9,(StrRange *)&local_280,1,(StrRange *)&local_278,4,
             (StrRange *)&local_270);
  local_258 = "Node3D";
  local_288 = 0;
  local_250 = 6;
  String::parse_latin1((StrRange *)&local_288);
  StringName::StringName((StringName *)&local_258,(String *)&local_288,false);
  ClassDB::add_property
            ((StringName *)&local_258,(PropertyInfo *)&local_248,(StringName *)&local_268,
             (StringName *)&local_260,-1);
  if ((StringName::configured != '\0') && (local_258 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_288);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_248);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_280);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_278);
  if ((((StringName::configured != '\0') &&
       ((local_270 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_268 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_260 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_260,true);
  _scs_create((char *)&local_268,true);
  local_248 = "";
  local_270 = 0;
  local_278 = 0;
  local_240 = 0;
  String::parse_latin1((StrRange *)&local_278);
  local_248 = "rotation_degrees";
  local_280 = 0;
  local_240 = 0x10;
  String::parse_latin1((StrRange *)&local_280);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_248,9,(StrRange *)&local_280,0,(StrRange *)&local_278,0,
             (StrRange *)&local_270);
  local_258 = "Node3D";
  local_288 = 0;
  local_250 = 6;
  String::parse_latin1((StrRange *)&local_288);
  StringName::StringName((StringName *)&local_258,(String *)&local_288,false);
  ClassDB::add_property
            ((StringName *)&local_258,(PropertyInfo *)&local_248,(StringName *)&local_268,
             (StringName *)&local_260,-1);
  if ((StringName::configured != '\0') && (local_258 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_288);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_248);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_280);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_278);
  if ((((StringName::configured != '\0') &&
       ((local_270 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_268 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_260 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_260,true);
  _scs_create((char *)&local_268,true);
  local_248 = "";
  local_270 = 0;
  local_278 = 0;
  local_240 = 0;
  String::parse_latin1((StrRange *)&local_278);
  local_248 = "quaternion";
  local_280 = 0;
  local_240 = 10;
  String::parse_latin1((StrRange *)&local_280);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_248,0xf,(StrRange *)&local_280,0x23,(StrRange *)&local_278,4,
             (StrRange *)&local_270);
  local_258 = "Node3D";
  local_288 = 0;
  local_250 = 6;
  String::parse_latin1((StrRange *)&local_288);
  StringName::StringName((StringName *)&local_258,(String *)&local_288,false);
  ClassDB::add_property
            ((StringName *)&local_258,(PropertyInfo *)&local_248,(StringName *)&local_268,
             (StringName *)&local_260,-1);
  if ((StringName::configured != '\0') && (local_258 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_288);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_248);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_280);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_278);
  if ((((StringName::configured != '\0') &&
       ((local_270 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_268 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_260 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_260,true);
  _scs_create((char *)&local_268,true);
  local_248 = "";
  local_270 = 0;
  local_278 = 0;
  local_240 = 0;
  String::parse_latin1((StrRange *)&local_278);
  local_248 = "basis";
  local_280 = 0;
  local_240 = 5;
  String::parse_latin1((StrRange *)&local_280);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_248,0x11,(StrRange *)&local_280,0,(StrRange *)&local_278,4,
             (StrRange *)&local_270);
  local_258 = "Node3D";
  local_288 = 0;
  local_250 = 6;
  String::parse_latin1((StrRange *)&local_288);
  StringName::StringName((StringName *)&local_258,(String *)&local_288,false);
  ClassDB::add_property
            ((StringName *)&local_258,(PropertyInfo *)&local_248,(StringName *)&local_268,
             (StringName *)&local_260,-1);
  if ((StringName::configured != '\0') && (local_258 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_288);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_248);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_280);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_278);
  if (((StringName::configured != '\0') &&
      ((local_270 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (((local_268 == 0 || (StringName::unref(), StringName::configured != '\0')) && (local_260 != 0)
      ))) {
    StringName::unref();
  }
  _scs_create((char *)&local_260,true);
  _scs_create((char *)&local_268,true);
  local_248 = "";
  local_270 = 0;
  local_278 = 0;
  local_240 = 0;
  String::parse_latin1((StrRange *)&local_278);
  local_248 = "scale";
  local_280 = 0;
  local_240 = 5;
  String::parse_latin1((StrRange *)&local_280);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_248,9,(StrRange *)&local_280,5,(StrRange *)&local_278,4,
             (StrRange *)&local_270);
  local_258 = "Node3D";
  local_288 = 0;
  local_250 = 6;
  String::parse_latin1((StrRange *)&local_288);
  StringName::StringName((StringName *)&local_258,(String *)&local_288,false);
  ClassDB::add_property
            ((StringName *)&local_258,(PropertyInfo *)&local_248,(StringName *)&local_268,
             (StringName *)&local_260,-1);
  if ((StringName::configured != '\0') && (local_258 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_288);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_248);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_280);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_278);
  if ((((StringName::configured != '\0') &&
       ((local_270 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_268 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_260 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_260,true);
  _scs_create((char *)&local_268,true);
  local_248 = "Euler,Quaternion,Basis";
  local_270 = 0;
  local_278 = 0;
  local_240 = 0x16;
  String::parse_latin1((StrRange *)&local_278);
  local_248 = "rotation_edit_mode";
  local_280 = 0;
  local_240 = 0x12;
  String::parse_latin1((StrRange *)&local_280);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_248,2,(StrRange *)&local_280,2,(StrRange *)&local_278,6,
             (StrRange *)&local_270);
  local_258 = "Node3D";
  local_288 = 0;
  local_250 = 6;
  String::parse_latin1((StrRange *)&local_288);
  StringName::StringName((StringName *)&local_258,(String *)&local_288,false);
  ClassDB::add_property
            ((StringName *)&local_258,(PropertyInfo *)&local_248,(StringName *)&local_268,
             (StringName *)&local_260,-1);
  if ((StringName::configured != '\0') && (local_258 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_288);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_248);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_280);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_278);
  if ((((StringName::configured != '\0') &&
       ((local_270 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_268 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_260 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_260,true);
  _scs_create((char *)&local_268,true);
  local_248 = "XYZ,XZY,YXZ,YZX,ZXY,ZYX";
  local_270 = 0;
  local_278 = 0;
  local_240 = 0x17;
  String::parse_latin1((StrRange *)&local_278);
  local_248 = "rotation_order";
  local_280 = 0;
  local_240 = 0xe;
  String::parse_latin1((StrRange *)&local_280);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_248,2,(StrRange *)&local_280,2,(StrRange *)&local_278,6,
             (StrRange *)&local_270);
  local_258 = "Node3D";
  local_288 = 0;
  local_250 = 6;
  String::parse_latin1((StrRange *)&local_288);
  StringName::StringName((StringName *)&local_258,(String *)&local_288,false);
  ClassDB::add_property
            ((StringName *)&local_258,(PropertyInfo *)&local_248,(StringName *)&local_268,
             (StringName *)&local_260,-1);
  if ((StringName::configured != '\0') && (local_258 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_288);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_248);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_280);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_278);
  if ((((StringName::configured != '\0') &&
       ((local_270 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_268 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_260 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_260,true);
  _scs_create((char *)&local_268,true);
  local_248 = "";
  local_270 = 0;
  local_278 = 0;
  local_240 = 0;
  String::parse_latin1((StrRange *)&local_278);
  local_248 = "top_level";
  local_280 = 0;
  local_240 = 9;
  String::parse_latin1((StrRange *)&local_280);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_248,1,(StrRange *)&local_280,0,(StrRange *)&local_278,6,
             (StrRange *)&local_270);
  local_258 = "Node3D";
  local_288 = 0;
  local_250 = 6;
  String::parse_latin1((StrRange *)&local_288);
  StringName::StringName((StringName *)&local_258,(String *)&local_288,false);
  ClassDB::add_property
            ((StringName *)&local_258,(PropertyInfo *)&local_248,(StringName *)&local_268,
             (StringName *)&local_260,-1);
  if ((StringName::configured != '\0') && (local_258 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_288);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_248);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_280);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_278);
  if ((((StringName::configured != '\0') &&
       ((local_270 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_268 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_260 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_260,true);
  _scs_create((char *)&local_268,true);
  local_248 = "";
  local_270 = 0;
  local_278 = 0;
  local_240 = 0;
  String::parse_latin1((StrRange *)&local_278);
  local_248 = "global_position";
  local_280 = 0;
  local_240 = 0xf;
  String::parse_latin1((StrRange *)&local_280);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_248,9,(StrRange *)&local_280,0,(StrRange *)&local_278,0,
             (StrRange *)&local_270);
  local_258 = "Node3D";
  local_288 = 0;
  local_250 = 6;
  String::parse_latin1((StrRange *)&local_288);
  StringName::StringName((StringName *)&local_258,(String *)&local_288,false);
  ClassDB::add_property
            ((StringName *)&local_258,(PropertyInfo *)&local_248,(StringName *)&local_268,
             (StringName *)&local_260,-1);
  if ((StringName::configured != '\0') && (local_258 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_288);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_248);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_280);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_278);
  if ((((StringName::configured != '\0') &&
       ((local_270 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_268 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_260 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_260,true);
  _scs_create((char *)&local_268,true);
  local_248 = "";
  local_270 = 0;
  local_278 = 0;
  local_240 = 0;
  String::parse_latin1((StrRange *)&local_278);
  local_248 = "global_basis";
  local_280 = 0;
  local_240 = 0xc;
  String::parse_latin1((StrRange *)&local_280);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_248,0x11,(StrRange *)&local_280,0,(StrRange *)&local_278,0,
             (StrRange *)&local_270);
  local_258 = "Node3D";
  local_288 = 0;
  local_250 = 6;
  String::parse_latin1((StrRange *)&local_288);
  StringName::StringName((StringName *)&local_258,(String *)&local_288,false);
  ClassDB::add_property
            ((StringName *)&local_258,(PropertyInfo *)&local_248,(StringName *)&local_268,
             (StringName *)&local_260,-1);
  if ((StringName::configured != '\0') && (local_258 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_288);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_248);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_280);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_278);
  if (((StringName::configured != '\0') &&
      ((local_270 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (((local_268 == 0 || (StringName::unref(), StringName::configured != '\0')) && (local_260 != 0)
      ))) {
    StringName::unref();
  }
  _scs_create((char *)&local_260,true);
  _scs_create((char *)&local_268,true);
  local_248 = "";
  local_270 = 0;
  local_278 = 0;
  local_240 = 0;
  String::parse_latin1((StrRange *)&local_278);
  local_248 = "global_rotation";
  local_280 = 0;
  local_240 = 0xf;
  String::parse_latin1((StrRange *)&local_280);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_248,9,(StrRange *)&local_280,0,(StrRange *)&local_278,0,
             (StrRange *)&local_270);
  local_258 = "Node3D";
  local_288 = 0;
  local_250 = 6;
  String::parse_latin1((StrRange *)&local_288);
  StringName::StringName((StringName *)&local_258,(String *)&local_288,false);
  ClassDB::add_property
            ((StringName *)&local_258,(PropertyInfo *)&local_248,(StringName *)&local_268,
             (StringName *)&local_260,-1);
  if ((StringName::configured != '\0') && (local_258 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_288);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_248);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_280);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_278);
  if ((((StringName::configured != '\0') &&
       ((local_270 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_268 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_260 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_260,true);
  _scs_create((char *)&local_268,true);
  local_248 = "";
  local_270 = 0;
  local_278 = 0;
  local_240 = 0;
  String::parse_latin1((StrRange *)&local_278);
  local_248 = "global_rotation_degrees";
  local_280 = 0;
  local_240 = 0x17;
  String::parse_latin1((StrRange *)&local_280);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_248,9,(StrRange *)&local_280,0,(StrRange *)&local_278,0,
             (StrRange *)&local_270);
  local_258 = "Node3D";
  local_288 = 0;
  local_250 = 6;
  String::parse_latin1((StrRange *)&local_288);
  StringName::StringName((StringName *)&local_258,(String *)&local_288,false);
  ClassDB::add_property
            ((StringName *)&local_258,(PropertyInfo *)&local_248,(StringName *)&local_268,
             (StringName *)&local_260,-1);
  if ((StringName::configured != '\0') && (local_258 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_288);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_248);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_280);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_278);
  if (((StringName::configured != '\0') &&
      ((local_270 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (((local_268 == 0 || (StringName::unref(), StringName::configured != '\0')) && (local_260 != 0)
      ))) {
    StringName::unref();
  }
  local_258 = (char *)0x0;
  local_248 = "";
  local_240 = 0;
  String::parse_latin1((StrRange *)&local_258);
  local_248 = "Visibility";
  local_260 = 0;
  local_240 = 10;
  String::parse_latin1((StrRange *)&local_260);
  local_248 = "Node3D";
  local_268 = 0;
  local_240 = 6;
  String::parse_latin1((StrRange *)&local_268);
  StringName::StringName((StringName *)&local_248,(String *)&local_268,false);
  ClassDB::add_property_group((StringName *)&local_248,(String *)&local_260,(String *)&local_258,0);
  if ((StringName::configured != '\0') && (local_248 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_268);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_260);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_258);
  _scs_create((char *)&local_260,true);
  _scs_create((char *)&local_268,true);
  local_248 = "";
  local_270 = 0;
  local_278 = 0;
  local_240 = 0;
  String::parse_latin1((StrRange *)&local_278);
  local_248 = "visible";
  local_280 = 0;
  local_240 = 7;
  String::parse_latin1((StrRange *)&local_280);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_248,1,(StrRange *)&local_280,0,(StrRange *)&local_278,6,
             (StrRange *)&local_270);
  local_258 = "Node3D";
  local_288 = 0;
  local_250 = 6;
  String::parse_latin1((StrRange *)&local_288);
  StringName::StringName((StringName *)&local_258,(String *)&local_288,false);
  ClassDB::add_property
            ((StringName *)&local_258,(PropertyInfo *)&local_248,(StringName *)&local_268,
             (StringName *)&local_260,-1);
  if ((StringName::configured != '\0') && (local_258 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_288);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_248);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_280);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_278);
  if ((((StringName::configured != '\0') &&
       ((local_270 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_268 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_260 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_260,true);
  _scs_create((char *)&local_268,true);
  local_248 = "GeometryInstance3D";
  local_270 = 0;
  local_278 = 0;
  local_240 = 0x12;
  String::parse_latin1((StrRange *)&local_278);
  local_248 = "visibility_parent";
  local_280 = 0;
  local_240 = 0x11;
  String::parse_latin1((StrRange *)&local_280);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_248,0x16,(StrRange *)&local_280,0x1a,(StrRange *)&local_278,6,
             (StrRange *)&local_270);
  local_258 = "Node3D";
  local_288 = 0;
  local_250 = 6;
  String::parse_latin1((StrRange *)&local_288);
  StringName::StringName((StringName *)&local_258,(String *)&local_288,false);
  ClassDB::add_property
            ((StringName *)&local_258,(PropertyInfo *)&local_248,(StringName *)&local_268,
             (StringName *)&local_260,-1);
  if ((StringName::configured != '\0') && (local_258 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_288);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_248);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_280);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_278);
  if ((((StringName::configured != '\0') &&
       ((local_270 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_268 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_260 != 0)) {
    StringName::unref();
  }
  local_260 = 0;
  local_248 = "visibility_changed";
  local_240 = 0x12;
  String::parse_latin1((StrRange *)&local_260);
  local_248 = (char *)0x0;
  local_240 = 0;
  local_228 = 0;
  local_220 = 0;
  local_218 = 6;
  local_210 = 1;
  local_208[0] = 0;
  local_1f8 = (int *)0x0;
  local_1f0 = 0;
  local_1e0 = 0;
  local_238 = (undefined1  [16])0x0;
  if (local_260 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_248,(CowData *)&local_260);
  }
  local_268 = 0;
  local_258 = "Node3D";
  local_250 = 6;
  String::parse_latin1((StrRange *)&local_268);
  StringName::StringName((StringName *)&local_258,(String *)&local_268,false);
  ClassDB::add_signal((StringName *)&local_258,(MethodInfo *)&local_248);
  if ((StringName::configured != '\0') && (local_258 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_268);
  lVar3 = local_1e0;
  if (local_1e0 != 0) {
    LOCK();
    plVar2 = (long *)(local_1e0 + -0x10);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      local_1e0 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  piVar12 = local_1f8;
  if (local_1f8 != (int *)0x0) {
    LOCK();
    plVar2 = (long *)(local_1f8 + -4);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      if (local_1f8 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar3 = *(long *)(local_1f8 + -2);
      lVar17 = 0;
      local_1f8 = (int *)0x0;
      piVar16 = piVar12;
      if (lVar3 != 0) {
        do {
          if (Variant::needs_deinit[*piVar16] != '\0') {
            Variant::_clear_internal();
          }
          lVar17 = lVar17 + 1;
          piVar16 = piVar16 + 6;
        } while (lVar3 != lVar17);
      }
      Memory::free_static(piVar12 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_208);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_240);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_248);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_260);
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Node3D::~Node3D() */

void __thiscall Node3D::~Node3D(Node3D *this)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  *(undefined ***)this = &PTR__initialize_classv_001297b0;
  _disable_client_physics_interpolation(this);
  NodePath::~NodePath((NodePath *)(this + 0x520));
  CowData<Ref<Node3DGizmo>>::_unref((CowData<Ref<Node3DGizmo>> *)(this + 0x510));
  plVar4 = *(long **)(this + 0x4f0);
  if (plVar4 != (long *)0x0) {
    do {
      pvVar1 = (void *)*plVar4;
      if (pvVar1 == (void *)0x0) {
        if ((int)plVar4[2] != 0) {
          _err_print_error("~List","./core/templates/list.h",0x316,
                           "Condition \"_data->size_cache\" is true.",0,0);
          goto LAB_0010dc16;
        }
        break;
      }
      if (*(long **)((long)pvVar1 + 0x18) == plVar4) {
        lVar3 = *(long *)((long)pvVar1 + 8);
        lVar2 = *(long *)((long)pvVar1 + 0x10);
        *plVar4 = lVar3;
        if (pvVar1 == (void *)plVar4[1]) {
          plVar4[1] = lVar2;
        }
        if (lVar2 != 0) {
          *(long *)(lVar2 + 8) = lVar3;
          lVar3 = *(long *)((long)pvVar1 + 8);
        }
        if (lVar3 != 0) {
          *(long *)(lVar3 + 0x10) = lVar2;
        }
        Memory::free_static(pvVar1,false);
        *(int *)(plVar4 + 2) = (int)plVar4[2] + -1;
      }
      else {
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0,0);
      }
      plVar4 = *(long **)(this + 0x4f0);
    } while ((int)plVar4[2] != 0);
    Memory::free_static(plVar4,false);
  }
LAB_0010dc16:
  plVar4 = *(long **)(this + 0x428);
  if (plVar4 != (long *)0x0) {
    lVar3 = *(long *)(this + 0x438);
    if (lVar3 != 0) {
      *(undefined8 *)(lVar3 + 0x18) = *(undefined8 *)(this + 0x440);
    }
    lVar2 = *(long *)(this + 0x440);
    if (lVar2 != 0) {
      *(long *)(lVar2 + 0x10) = lVar3;
    }
    if (this + 0x428 == (Node3D *)*plVar4) {
      *plVar4 = *(long *)(this + 0x438);
    }
    if (this + 0x428 == (Node3D *)plVar4[1]) {
      plVar4[1] = lVar2;
    }
  }
  plVar4 = *(long **)(this + 0x408);
  if (plVar4 != (long *)0x0) {
    lVar3 = *(long *)(this + 0x418);
    if (lVar3 != 0) {
      *(undefined8 *)(lVar3 + 0x18) = *(undefined8 *)(this + 0x420);
    }
    lVar2 = *(long *)(this + 0x420);
    if (lVar2 != 0) {
      *(long *)(lVar2 + 0x10) = lVar3;
    }
    if (this + 0x408 == (Node3D *)*plVar4) {
      *plVar4 = *(long *)(this + 0x418);
    }
    if (this + 0x408 == (Node3D *)plVar4[1]) {
      plVar4[1] = lVar2;
      Node::~Node((Node *)this);
      return;
    }
  }
  Node::~Node((Node *)this);
  return;
}



/* Node3D::~Node3D() */

void __thiscall Node3D::~Node3D(Node3D *this)

{
  ~Node3D(this);
  operator_delete(this,0x528);
  return;
}



/* WARNING: Removing unreachable block (ram,0x0010ddd5) */
/* WARNING: Removing unreachable block (ram,0x0010de80) */
/* WARNING: Removing unreachable block (ram,0x0010de8d) */
/* WARNING: Removing unreachable block (ram,0x0010ddea) */
/* WARNING: Removing unreachable block (ram,0x0010ddef) */
/* WARNING: Removing unreachable block (ram,0x0010ddf9) */
/* WARNING: Removing unreachable block (ram,0x0010de9a) */
/* WARNING: Removing unreachable block (ram,0x0010de06) */
/* WARNING: Removing unreachable block (ram,0x0010de18) */
/* WARNING: Removing unreachable block (ram,0x0010de2d) */
/* WARNING: Removing unreachable block (ram,0x0010de31) */
/* WARNING: Removing unreachable block (ram,0x0010de39) */
/* WARNING: Removing unreachable block (ram,0x0010de3d) */
/* WARNING: Removing unreachable block (ram,0x0010de44) */
/* WARNING: Removing unreachable block (ram,0x0010de4a) */
/* WARNING: Removing unreachable block (ram,0x0010de55) */
/* WARNING: Removing unreachable block (ram,0x0010de69) */
/* WARNING: Removing unreachable block (ram,0x0010df3c) */
/* Node3D::get_gizmos() const */

void Node3D::get_gizmos(void)

{
                    /* WARNING: Subroutine does not return */
  Node::current_process_thread_group();
}



/* CowData<Ref<Node3DGizmo> >::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Ref<Node3DGizmo>>::_copy_on_write(CowData<Ref<Node3DGizmo>> *this)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  char cVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar7 = 0x10;
  if (lVar1 * 8 != 0) {
    uVar7 = lVar1 * 8 - 1;
    uVar7 = uVar7 | uVar7 >> 1;
    uVar7 = uVar7 | uVar7 >> 2;
    uVar7 = uVar7 | uVar7 >> 4;
    uVar7 = uVar7 | uVar7 >> 8;
    uVar7 = uVar7 | uVar7 >> 0x10;
    uVar7 = (uVar7 | uVar7 >> 0x20) + 0x11;
  }
  puVar5 = (undefined8 *)Memory::alloc_static(uVar7,false);
  if (puVar5 == (undefined8 *)0x0) {
    _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                     "Parameter \"mem_new\" is null.",0,0);
    return;
  }
  lVar8 = 0;
  *puVar5 = 1;
  puVar5[1] = lVar1;
  plVar6 = puVar5 + 2;
  if (lVar1 != 0) {
    do {
      lVar2 = *(long *)this;
      *plVar6 = 0;
      lVar2 = *(long *)(lVar2 + lVar8 * 8);
      if (lVar2 != 0) {
        *plVar6 = lVar2;
        cVar4 = RefCounted::reference();
        if (cVar4 == '\0') {
          *plVar6 = 0;
        }
      }
      lVar8 = lVar8 + 1;
      plVar6 = plVar6 + 1;
    } while (lVar1 != lVar8);
  }
  _unref(this);
  *(undefined8 **)this = puVar5 + 2;
  return;
}



/* Node3D::_update_gizmos() [clone .part.0] */

void __thiscall Node3D::_update_gizmos(Node3D *this)

{
  code *pcVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(this + 0x510);
  this[0x518] = (Node3D)((byte)this[0x518] & 0xfd);
  if (lVar3 == 0) {
    return;
  }
  lVar4 = 0;
  do {
    if (*(long *)(lVar3 + -8) <= lVar4) {
      return;
    }
    cVar2 = is_visible_in_tree(this);
    lVar3 = *(long *)(this + 0x510);
    if (cVar2 == '\0') {
      if (lVar3 == 0) {
        lVar3 = 0;
LAB_0010e19b:
        _err_print_index_error
                  ("operator[]","./core/templates/vector.h",0x38,lVar4,lVar3,"p_index",
                   "((Vector<T> *)(this))->_cowdata.size()","",false,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      lVar3 = *(long *)(lVar3 + -8);
      if (lVar3 <= lVar4) goto LAB_0010e19b;
      CowData<Ref<Node3DGizmo>>::_copy_on_write((CowData<Ref<Node3DGizmo>> *)(this + 0x510));
      (**(code **)(**(long **)(*(long *)(this + 0x510) + lVar4 * 8) + 0x160))();
      lVar3 = *(long *)(this + 0x510);
    }
    else {
      if (lVar3 == 0) {
        lVar3 = 0;
LAB_0010e153:
        _err_print_index_error
                  ("operator[]","./core/templates/vector.h",0x38,lVar4,lVar3,"p_index",
                   "((Vector<T> *)(this))->_cowdata.size()","",false,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      lVar3 = *(long *)(lVar3 + -8);
      if (lVar3 <= lVar4) goto LAB_0010e153;
      CowData<Ref<Node3DGizmo>>::_copy_on_write((CowData<Ref<Node3DGizmo>> *)(this + 0x510));
      (**(code **)(**(long **)(*(long *)(this + 0x510) + lVar4 * 8) + 0x168))();
      lVar3 = *(long *)(this + 0x510);
    }
    lVar4 = lVar4 + 1;
    if (lVar3 == 0) {
      return;
    }
  } while( true );
}



/* Node3D::_update_gizmos() */

void __thiscall Node3D::_update_gizmos(Node3D *this)

{
  if (((((byte)this[0x518] & 1) == 0) && (((byte)this[0x4d8] & 2) != 0)) &&
     (((byte)this[0x518] & 2) != 0)) {
    _update_gizmos(this);
    return;
  }
  this[0x518] = (Node3D)((byte)this[0x518] & 0xfd);
  return;
}



/* Node3D::_propagate_visibility_changed() */

void __thiscall Node3D::_propagate_visibility_changed(Node3D *this)

{
  Node3D NVar1;
  long lVar2;
  undefined8 *puVar3;
  Node3D *this_00;
  long in_FS_OFFSET;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  Object::notification((int)this,true);
  (**(code **)(*(long *)this + 0xd0))(this,SceneStringNames::singleton + 0x18,0,0);
  if (Variant::needs_deinit[0] != '\0') {
    Variant::_clear_internal();
  }
  if (*(long *)(this + 0x510) != 0) {
    NVar1 = this[0x518];
    this[0x518] = (Node3D)((byte)NVar1 | 2);
    if ((((byte)NVar1 & 1) == 0) && (((byte)this[0x4d8] & 2) != 0)) {
      _update_gizmos(this);
    }
    else {
      this[0x518] = (Node3D)((byte)NVar1 & 0xfd);
    }
  }
  if (*(undefined8 **)(this + 0x4f0) != (undefined8 *)0x0) {
    for (puVar3 = (undefined8 *)**(undefined8 **)(this + 0x4f0); puVar3 != (undefined8 *)0x0;
        puVar3 = (undefined8 *)puVar3[1]) {
      this_00 = (Node3D *)*puVar3;
      if ((this_00 != (Node3D *)0x0) && (((byte)this_00[0x4d8] & 0x40) != 0)) {
        _propagate_visibility_changed(this_00);
      }
    }
  }
  if (lVar2 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Node3D::set_visible(bool) */

void __thiscall Node3D::set_visible(Node3D *this,bool param_1)

{
  char cVar1;
  long in_FS_OFFSET;
  CowData<char32_t> local_48 [8];
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((byte)this[0x2fa] & 0x40) == 0) {
LAB_0010e367:
    if (((bool)((byte)this[0x4d8] >> 6 & 1) != param_1) &&
       (this[0x4d8] = (Node3D)((byte)this[0x4d8] & 0xbf | (byte)((param_1 & 1) << 6)),
       ((byte)this[0x2fa] & 0x40) != 0)) {
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        _propagate_visibility_changed(this);
        return;
      }
      goto LAB_0010e492;
    }
  }
  else {
    cVar1 = is_current_thread_safe_for_nodes();
    if (cVar1 != '\0') goto LAB_0010e367;
    Node::get_description();
    local_38 = 
    "This function in this node (%s) can only be accessed from the main thread. Use call_deferred() instead."
    ;
    local_40 = 0;
    local_30 = 0x67;
    String::parse_latin1((StrRange *)&local_40);
    vformat<String>((CowData<char32_t> *)&local_38,(StrRange *)&local_40,local_48);
    _err_print_error("set_visible","scene/3d/node_3d.cpp",0x3a0,
                     "Condition \"is_inside_tree() && !is_current_thread_safe_for_nodes()\" is true."
                     ,(CowData<char32_t> *)&local_38,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
    CowData<char32_t>::_unref(local_48);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010e492:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Node3D::show() */

void __thiscall Node3D::show(Node3D *this)

{
  char cVar1;
  long in_FS_OFFSET;
  CowData<char32_t> local_48 [8];
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((byte)this[0x2fa] & 0x40) != 0) {
    cVar1 = is_current_thread_safe_for_nodes();
    if (cVar1 == '\0') {
      Node::get_description();
      local_38 = 
      "This function in this node (%s) can only be accessed from the main thread. Use call_deferred() instead."
      ;
      local_40 = 0;
      local_30 = 0x67;
      String::parse_latin1((StrRange *)&local_40);
      vformat<String>((CowData<char32_t> *)&local_38,(StrRange *)&local_40,local_48);
      _err_print_error(&_LC195,"scene/3d/node_3d.cpp",0x396,
                       "Condition \"is_inside_tree() && !is_current_thread_safe_for_nodes()\" is true."
                       ,(CowData<char32_t> *)&local_38,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
      CowData<char32_t>::_unref(local_48);
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010e5b2;
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    set_visible(this,true);
    return;
  }
LAB_0010e5b2:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Node3D::hide() */

void __thiscall Node3D::hide(Node3D *this)

{
  char cVar1;
  long in_FS_OFFSET;
  CowData<char32_t> local_48 [8];
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((byte)this[0x2fa] & 0x40) != 0) {
    cVar1 = is_current_thread_safe_for_nodes();
    if (cVar1 == '\0') {
      Node::get_description();
      local_38 = 
      "This function in this node (%s) can only be accessed from the main thread. Use call_deferred() instead."
      ;
      local_40 = 0;
      local_30 = 0x67;
      String::parse_latin1((StrRange *)&local_40);
      vformat<String>((CowData<char32_t> *)&local_38,(StrRange *)&local_40,local_48);
      _err_print_error(&_LC196,"scene/3d/node_3d.cpp",0x39b,
                       "Condition \"is_inside_tree() && !is_current_thread_safe_for_nodes()\" is true."
                       ,(CowData<char32_t> *)&local_38,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
      CowData<char32_t>::_unref(local_48);
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010e6d2;
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    set_visible(this,false);
    return;
  }
LAB_0010e6d2:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x0010e710) */
/* WARNING: Removing unreachable block (ram,0x0010e7e8) */
/* WARNING: Removing unreachable block (ram,0x0010e7f5) */
/* WARNING: Removing unreachable block (ram,0x0010e725) */
/* WARNING: Removing unreachable block (ram,0x0010e72a) */
/* WARNING: Removing unreachable block (ram,0x0010e734) */
/* WARNING: Removing unreachable block (ram,0x0010e802) */
/* WARNING: Removing unreachable block (ram,0x0010e741) */
/* WARNING: Removing unreachable block (ram,0x0010e74d) */
/* WARNING: Removing unreachable block (ram,0x0010e760) */
/* WARNING: Removing unreachable block (ram,0x0010e7b8) */
/* WARNING: Removing unreachable block (ram,0x0010e7bd) */
/* WARNING: Removing unreachable block (ram,0x0010e7d1) */
/* WARNING: Removing unreachable block (ram,0x0010e769) */
/* WARNING: Removing unreachable block (ram,0x0010e795) */
/* WARNING: Removing unreachable block (ram,0x0010e7a9) */
/* WARNING: Removing unreachable block (ram,0x0010e89c) */
/* Node3D::clear_gizmos() */

void __thiscall Node3D::clear_gizmos(Node3D *this)

{
                    /* WARNING: Subroutine does not return */
  Node::current_process_thread_group();
}



/* WARNING: Removing unreachable block (ram,0x0010e8e4) */
/* WARNING: Removing unreachable block (ram,0x0010e950) */
/* WARNING: Removing unreachable block (ram,0x0010e959) */
/* WARNING: Removing unreachable block (ram,0x0010e8f5) */
/* WARNING: Removing unreachable block (ram,0x0010e8fa) */
/* WARNING: Removing unreachable block (ram,0x0010e904) */
/* WARNING: Removing unreachable block (ram,0x0010e90d) */
/* WARNING: Removing unreachable block (ram,0x0010ea00) */
/* WARNING: Removing unreachable block (ram,0x0010ea10) */
/* WARNING: Removing unreachable block (ram,0x0010e962) */
/* WARNING: Removing unreachable block (ram,0x0010e92d) */
/* WARNING: Removing unreachable block (ram,0x0010e941) */
/* WARNING: Removing unreachable block (ram,0x0010ea22) */
/* Node3D::set_disable_gizmos(bool) */

void __thiscall Node3D::set_disable_gizmos(Node3D *this,bool param_1)

{
                    /* WARNING: Subroutine does not return */
  Node::current_process_thread_group();
}



/* WARNING: Removing unreachable block (ram,0x0010ec59) */
/* WARNING: Removing unreachable block (ram,0x0010f188) */
/* WARNING: Removing unreachable block (ram,0x0010f195) */
/* WARNING: Removing unreachable block (ram,0x0010ec6e) */
/* WARNING: Removing unreachable block (ram,0x0010ec73) */
/* WARNING: Removing unreachable block (ram,0x0010eb5b) */
/* WARNING: Removing unreachable block (ram,0x0010f230) */
/* WARNING: Removing unreachable block (ram,0x0010eb67) */
/* WARNING: Removing unreachable block (ram,0x0010f3d9) */
/* WARNING: Removing unreachable block (ram,0x0010f3ec) */
/* WARNING: Removing unreachable block (ram,0x0010f78e) */
/* WARNING: Removing unreachable block (ram,0x0010f7a1) */
/* WARNING: Removing unreachable block (ram,0x0010f239) */
/* WARNING: Removing unreachable block (ram,0x0010eb6f) */
/* WARNING: Removing unreachable block (ram,0x0010f410) */
/* WARNING: Removing unreachable block (ram,0x0010f418) */
/* WARNING: Removing unreachable block (ram,0x0010eb84) */
/* WARNING: Removing unreachable block (ram,0x0010eb88) */
/* WARNING: Removing unreachable block (ram,0x0010f300) */
/* WARNING: Removing unreachable block (ram,0x0010eb96) */
/* WARNING: Removing unreachable block (ram,0x0010ebbc) */
/* WARNING: Removing unreachable block (ram,0x0010ec7d) */
/* WARNING: Removing unreachable block (ram,0x0010f1a2) */
/* WARNING: Removing unreachable block (ram,0x0010ec8a) */
/* WARNING: Removing unreachable block (ram,0x0010ec96) */
/* WARNING: Removing unreachable block (ram,0x0010eca0) */
/* WARNING: Removing unreachable block (ram,0x0010ecaa) */
/* WARNING: Removing unreachable block (ram,0x0010ecd6) */
/* Node3D::_notification(int) */

void __thiscall Node3D::_notification(Node3D *this,int param_1)

{
  StringName *pSVar1;
  long *plVar2;
  long lVar3;
  void *pvVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined1 (*pauVar11) [16];
  char *pcVar12;
  undefined8 uVar13;
  long in_FS_OFFSET;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  CowData<char32_t> local_b8 [8];
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  Variant *local_98 [6];
  undefined8 local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined1 local_48 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0x2a) {
    if ((((byte)this[0x2fa] & 0x40) != 0) &&
       (cVar5 = is_current_thread_safe_for_nodes(), cVar5 == '\0')) {
      Node::get_description();
      local_b0 = 0;
      String::parse_latin1
                ((String *)&local_b0,
                 "This function in this node (%s) can only be accessed from the main thread. Use call_deferred() instead."
                );
      vformat<String>(&local_a8,(String *)&local_b0,local_b8);
      uVar13 = 0xd0;
      goto LAB_0010f1fa;
    }
    clear_gizmos(this);
    plVar2 = *(long **)(this + 0x98);
    if (plVar2 != (long *)0x0) {
      if ((_notification(int)::{lambda()#3}::operator()()::sname == '\0') &&
         (iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#3}::operator()()::sname),
         iVar6 != 0)) {
        _scs_create((char *)&_notification(int)::{lambda()#3}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#3}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#3}::operator()()::sname);
      }
      local_68 = 0;
      local_60 = (undefined1  [16])0x0;
      local_a8 = 0;
      uStack_a4 = 0;
      uStack_a0 = 0;
      (**(code **)(*plVar2 + 0x60))
                (local_98,plVar2,&_notification(int)::{lambda()#3}::operator()()::sname,0,0,
                 &local_a8);
      if (Variant::needs_deinit[(int)local_68] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[(int)local_98[0]] != '\0') {
        Variant::_clear_internal();
      }
    }
    this[0x4d8] = (Node3D)((byte)this[0x4d8] & 0xfd);
    *(undefined8 *)(this + 0x4d0) = 0;
  }
  else if (param_1 < 0x2b) {
    if (param_1 == 0xb) {
      if ((((byte)this[0x2fa] & 0x40) == 0) ||
         (cVar5 = is_current_thread_safe_for_nodes(), cVar5 != '\0')) {
        Object::notification((int)this,true);
        lVar7 = *(long *)(this + 0x408);
        if (lVar7 != 0) {
          lVar10 = *(long *)(this + 0x240);
          if (lVar10 == 0) {
            _err_print_error("get_tree","./scene/main/node.h",0x1e5,
                             "Parameter \"data.tree\" is null.",0,0);
            lVar7 = *(long *)(this + 0x408);
          }
          if (lVar7 == lVar10 + 0x528) {
            lVar7 = *(long *)(this + 0x418);
            if (lVar7 != 0) {
              *(undefined8 *)(lVar7 + 0x18) = *(undefined8 *)(this + 0x420);
            }
            lVar3 = *(long *)(this + 0x420);
            if (lVar3 != 0) {
              *(long *)(lVar3 + 0x10) = lVar7;
            }
            if (this + 0x408 == *(Node3D **)(lVar10 + 0x528)) {
              *(undefined8 *)(lVar10 + 0x528) = *(undefined8 *)(this + 0x418);
            }
            if (this + 0x408 == *(Node3D **)(lVar10 + 0x530)) {
              *(long *)(lVar10 + 0x530) = lVar3;
            }
            *(undefined8 *)(this + 0x408) = 0;
            *(undefined1 (*) [16])(this + 0x418) = (undefined1  [16])0x0;
          }
          else {
            _err_print_error("remove","./core/templates/self_list.h",0x50,
                             "Condition \"p_elem->_root != this\" is true.",0,0);
          }
        }
        pvVar4 = *(void **)(this + 0x4f8);
        if (pvVar4 != (void *)0x0) {
          lVar7 = *(long *)(this + 0x4e8);
          plVar2 = *(long **)(lVar7 + 0x4f0);
          if (plVar2 != (long *)0x0) {
            if (plVar2 == *(long **)((long)pvVar4 + 0x18)) {
              lVar10 = *(long *)((long)pvVar4 + 8);
              if (pvVar4 == (void *)*plVar2) {
                *plVar2 = lVar10;
              }
              lVar3 = *(long *)((long)pvVar4 + 0x10);
              if (pvVar4 == (void *)plVar2[1]) {
                plVar2[1] = lVar3;
              }
              if (lVar3 != 0) {
                *(long *)(lVar3 + 8) = lVar10;
                lVar10 = *(long *)((long)pvVar4 + 8);
              }
              if (lVar10 != 0) {
                *(long *)(lVar10 + 0x10) = lVar3;
              }
              Memory::free_static(pvVar4,false);
              *(int *)(plVar2 + 2) = (int)plVar2[2] + -1;
            }
            else {
              _err_print_error("erase","./core/templates/list.h",0xe7,
                               "Condition \"p_I->data != this\" is true. Returning: false",0,0);
            }
            if (*(int *)((long)*(void **)(lVar7 + 0x4f0) + 0x10) == 0) {
              Memory::free_static(*(void **)(lVar7 + 0x4f0),false);
              *(undefined8 *)(lVar7 + 0x4f0) = 0;
            }
          }
        }
        *(undefined8 *)(this + 0x4e8) = 0;
        *(undefined8 *)(this + 0x4f8) = 0;
        _update_visibility_parent(this,true);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
          _disable_client_physics_interpolation(this);
          return;
        }
        goto LAB_0010f818;
      }
      Node::get_description();
      local_b0 = 0;
      String::parse_latin1
                ((String *)&local_b0,
                 "This function in this node (%s) can only be accessed from the main thread. Use call_deferred() instead."
                );
      vformat<String>(&local_a8,(String *)&local_b0,local_b8);
      uVar13 = 0xa8;
LAB_0010f1fa:
      _err_print_error("_notification","scene/3d/node_3d.cpp",uVar13,
                       "Condition \"is_inside_tree() && !is_current_thread_safe_for_nodes()\" is true."
                       ,(CowData<char32_t> *)&local_a8,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      CowData<char32_t>::_unref(local_b8);
    }
    else if (param_1 == 0x29) {
      if ((((byte)this[0x2fa] & 0x40) != 0) &&
         (cVar5 = is_current_thread_safe_for_nodes(), cVar5 == '\0')) {
        Node::get_description();
        local_b0 = 0;
        String::parse_latin1
                  ((String *)&local_b0,
                   "This function in this node (%s) can only be accessed from the main thread. Use call_deferred() instead."
                  );
        vformat<String>(&local_a8,(String *)&local_b0,local_b8);
        uVar13 = 0xb8;
        goto LAB_0010f1fa;
      }
      this[0x4d8] = (Node3D)((byte)this[0x4d8] | 2);
      *(undefined8 *)(this + 0x4d0) = 0;
      lVar7 = Node::get_parent();
      while (lVar7 != 0) {
        if (*(long *)(this + 0x4d0) != 0) goto LAB_0010ed5d;
        uVar13 = __dynamic_cast(lVar7,&Object::typeinfo,&Viewport::typeinfo,0);
        *(undefined8 *)(this + 0x4d0) = uVar13;
        lVar7 = Node::get_parent();
      }
      if (*(long *)(this + 0x4d0) == 0) {
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar13 = 0xc2;
          pcVar12 = "Parameter \"data.viewport\" is null.";
          goto LAB_0010f161;
        }
        goto LAB_0010f818;
      }
LAB_0010ed5d:
      plVar2 = *(long **)(this + 0x98);
      if (plVar2 != (long *)0x0) {
        if ((_notification(int)::{lambda()#1}::operator()()::sname == '\0') &&
           (iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#1}::operator()()::sname),
           iVar6 != 0)) {
          _scs_create((char *)&_notification(int)::{lambda()#1}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_notification(int)::{lambda()#1}::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&_notification(int)::{lambda()#1}::operator()()::sname);
        }
        local_68 = 0;
        local_60 = (undefined1  [16])0x0;
        local_a8 = 0;
        uStack_a4 = 0;
        uStack_a0 = 0;
        (**(code **)(*plVar2 + 0x60))
                  (local_98,plVar2,&_notification(int)::{lambda()#1}::operator()()::sname,0,0,
                   &local_a8);
        if (Variant::needs_deinit[(int)local_68] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[(int)local_98[0]] != '\0') {
          Variant::_clear_internal();
        }
      }
      cVar5 = Node::is_part_of_edited_scene();
      if (cVar5 != '\0') {
        lVar7 = *(long *)(this + 0x240);
        if (lVar7 == 0) {
          _err_print_error("get_tree","./scene/main/node.h",0x1e5,"Parameter \"data.tree\" is null."
                           ,0,0);
        }
        uVar13 = *(undefined8 *)(this + 0x60);
        if ((_notification(int)::{lambda()#2}::operator()()::sname == '\0') &&
           (iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#2}::operator()()::sname),
           iVar6 != 0)) {
          _scs_create((char *)&_notification(int)::{lambda()#2}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_notification(int)::{lambda()#2}::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&_notification(int)::{lambda()#2}::operator()()::sname);
        }
        local_a8 = (undefined4)uVar13;
        uStack_a4 = (undefined4)((ulong)uVar13 >> 0x20);
        pSVar1 = (StringName *)(SceneStringNames::singleton + 0x180);
        Variant::Variant((Variant *)&local_68,(ObjectID *)&local_a8);
        local_50 = 0;
        local_48 = (undefined1  [16])0x0;
        local_98[0] = (Variant *)&local_68;
        SceneTree::call_group_flagsp
                  ((uint)lVar7,(StringName *)0x2,pSVar1,
                   (Variant **)&_notification(int)::{lambda()#2}::operator()()::sname,(int)local_98)
        ;
        if (Variant::needs_deinit[(int)local_50] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[(int)local_68] != '\0') {
          Variant::_clear_internal();
        }
      }
    }
    else if (param_1 == 10) {
      if ((((byte)this[0x2fa] & 0x40) == 0) ||
         (cVar5 = is_current_thread_safe_for_nodes(), cVar5 != '\0')) {
        if (*(long *)(this + 0x240) != 0) {
          lVar7 = Node::get_parent();
          if (lVar7 == 0) {
            puVar8 = *(undefined8 **)(this + 0x4e8);
          }
          else {
            puVar8 = (undefined8 *)__dynamic_cast(lVar7,&Object::typeinfo,&typeinfo,0);
            *(undefined8 **)(this + 0x4e8) = puVar8;
          }
          puVar9 = puVar8;
          if (puVar8 != (undefined8 *)0x0) {
            if (puVar8[0x9e] == 0) {
              pauVar11 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
              puVar8[0x9e] = pauVar11;
              *(undefined4 *)pauVar11[1] = 0;
              *pauVar11 = (undefined1  [16])0x0;
            }
            puVar9 = (undefined8 *)operator_new(0x20,DefaultAllocator::alloc);
            plVar2 = (long *)puVar8[0x9e];
            puVar9[1] = 0;
            lVar7 = plVar2[1];
            *puVar9 = this;
            puVar9[3] = plVar2;
            puVar9[2] = lVar7;
            if (lVar7 != 0) {
              *(undefined8 **)(lVar7 + 8) = puVar9;
            }
            plVar2[1] = (long)puVar9;
            if (*plVar2 == 0) {
              *plVar2 = (long)puVar9;
            }
            *(int *)(plVar2 + 2) = (int)plVar2[2] + 1;
          }
          *(undefined8 **)(this + 0x4f8) = puVar9;
          if (((((byte)this[0x4d8] & 1) != 0) &&
              (lVar7 = Engine::get_singleton(), *(char *)(lVar7 + 0xc0) == '\0')) &&
             (*(long *)(this + 0x4e8) != 0)) {
            if (((byte)this[0x4d8] & 1) == 0) {
              get_transform();
              get_global_transform();
              Transform3D::operator*((Transform3D *)&local_e8,(Transform3D *)local_98);
              *(undefined8 *)(this + 0x478) = local_e8;
              *(undefined8 *)(this + 0x480) = uStack_e0;
              *(undefined8 *)(this + 0x488) = local_d8;
              *(undefined8 *)(this + 0x490) = uStack_d0;
              *(undefined8 *)(this + 0x498) = local_c8;
              *(undefined8 *)(this + 0x4a0) = uStack_c0;
            }
            else {
              get_transform();
              *(undefined8 *)(this + 0x478) = local_e8;
              *(undefined8 *)(this + 0x480) = uStack_e0;
              *(undefined8 *)(this + 0x488) = local_d8;
              *(undefined8 *)(this + 0x490) = uStack_d0;
              *(undefined8 *)(this + 0x498) = local_c8;
              *(undefined8 *)(this + 0x4a0) = uStack_c0;
            }
                    /* WARNING: Subroutine does not return */
            Node::current_process_thread_group();
          }
                    /* WARNING: Subroutine does not return */
          Node::current_process_thread_group();
        }
        _err_print_error("get_tree","./scene/main/node.h",0x1e5,"Parameter \"data.tree\" is null.",0
                         ,0);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar13 = 0x88;
          pcVar12 = "Parameter \"get_tree()\" is null.";
LAB_0010f161:
          _err_print_error("_notification","scene/3d/node_3d.cpp",uVar13,pcVar12,0,0);
          return;
        }
        goto LAB_0010f818;
      }
      Node::get_description();
      local_b0 = 0;
      String::parse_latin1
                ((String *)&local_b0,
                 "This function in this node (%s) can only be accessed from the main thread. Use call_deferred() instead."
                );
      vformat<String>(&local_a8,(String *)&local_b0,local_b8);
      uVar13 = 0x87;
      goto LAB_0010f1fa;
    }
  }
  else {
    if (param_1 == 2000) {
                    /* WARNING: Subroutine does not return */
      Node::current_process_thread_group();
    }
    if ((param_1 == 0x7d1) && (puVar8 = *(undefined8 **)(this + 0x500), puVar8 != (undefined8 *)0x0)
       ) {
      puVar8[6] = *puVar8;
      puVar8[7] = puVar8[1];
      puVar8[8] = puVar8[2];
      puVar8[9] = puVar8[3];
      puVar8[10] = puVar8[4];
      puVar8[0xb] = puVar8[5];
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010f818:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x0010f857) */
/* WARNING: Removing unreachable block (ram,0x0010fa40) */
/* WARNING: Removing unreachable block (ram,0x0010fa4d) */
/* WARNING: Removing unreachable block (ram,0x0010f86c) */
/* WARNING: Removing unreachable block (ram,0x0010f871) */
/* WARNING: Removing unreachable block (ram,0x0010f87b) */
/* WARNING: Removing unreachable block (ram,0x0010f888) */
/* WARNING: Removing unreachable block (ram,0x0010f89c) */
/* WARNING: Removing unreachable block (ram,0x0010f8a9) */
/* WARNING: Removing unreachable block (ram,0x0010f8bd) */
/* WARNING: Removing unreachable block (ram,0x0010f8c3) */
/* WARNING: Removing unreachable block (ram,0x0010f8cc) */
/* WARNING: Removing unreachable block (ram,0x0010f9cb) */
/* WARNING: Removing unreachable block (ram,0x0010f9d4) */
/* WARNING: Removing unreachable block (ram,0x0010f8ef) */
/* WARNING: Removing unreachable block (ram,0x0010faf4) */
/* WARNING: Removing unreachable block (ram,0x0010f8f8) */
/* WARNING: Removing unreachable block (ram,0x0010f905) */
/* WARNING: Removing unreachable block (ram,0x0010fafc) */
/* WARNING: Removing unreachable block (ram,0x0010f91d) */
/* WARNING: Removing unreachable block (ram,0x0010f939) */
/* WARNING: Removing unreachable block (ram,0x0010f947) */
/* WARNING: Removing unreachable block (ram,0x0010f950) */
/* WARNING: Removing unreachable block (ram,0x0010f959) */
/* WARNING: Removing unreachable block (ram,0x0010f961) */
/* WARNING: Removing unreachable block (ram,0x0010f966) */
/* WARNING: Removing unreachable block (ram,0x0010f972) */
/* WARNING: Removing unreachable block (ram,0x0010f97e) */
/* WARNING: Removing unreachable block (ram,0x0010f930) */
/* WARNING: Removing unreachable block (ram,0x0010f92b) */
/* WARNING: Removing unreachable block (ram,0x0010f9a0) */
/* WARNING: Removing unreachable block (ram,0x0010f9b4) */
/* WARNING: Removing unreachable block (ram,0x0010f9d8) */
/* WARNING: Removing unreachable block (ram,0x0010f8b0) */
/* WARNING: Removing unreachable block (ram,0x0010fa5a) */
/* WARNING: Removing unreachable block (ram,0x0010fa18) */
/* WARNING: Removing unreachable block (ram,0x0010fa2c) */
/* WARNING: Removing unreachable block (ram,0x0010fb08) */
/* Node3D::remove_gizmo(Ref<Node3DGizmo>) */

void __thiscall Node3D::remove_gizmo(void)

{
                    /* WARNING: Subroutine does not return */
  Node::current_process_thread_group();
}



/* WARNING: Removing unreachable block (ram,0x0010fb47) */
/* WARNING: Removing unreachable block (ram,0x0010fce8) */
/* WARNING: Removing unreachable block (ram,0x0010fcf5) */
/* WARNING: Removing unreachable block (ram,0x0010fb5c) */
/* WARNING: Removing unreachable block (ram,0x0010fb61) */
/* WARNING: Removing unreachable block (ram,0x0010fb6b) */
/* WARNING: Removing unreachable block (ram,0x0010fb78) */
/* WARNING: Removing unreachable block (ram,0x0010fb85) */
/* WARNING: Removing unreachable block (ram,0x0010fb92) */
/* WARNING: Removing unreachable block (ram,0x0010fba1) */
/* WARNING: Removing unreachable block (ram,0x0010fba5) */
/* WARNING: Removing unreachable block (ram,0x0010feb0) */
/* WARNING: Removing unreachable block (ram,0x0010fbb5) */
/* WARNING: Removing unreachable block (ram,0x0010fbbd) */
/* WARNING: Removing unreachable block (ram,0x0010fe38) */
/* WARNING: Removing unreachable block (ram,0x0010fbd4) */
/* WARNING: Removing unreachable block (ram,0x0010fe60) */
/* WARNING: Removing unreachable block (ram,0x0010fbe4) */
/* WARNING: Removing unreachable block (ram,0x0010fe6a) */
/* WARNING: Removing unreachable block (ram,0x0010fbf5) */
/* WARNING: Removing unreachable block (ram,0x0010fc14) */
/* WARNING: Removing unreachable block (ram,0x0010fc20) */
/* WARNING: Removing unreachable block (ram,0x0010fe20) */
/* WARNING: Removing unreachable block (ram,0x0010fe30) */
/* WARNING: Removing unreachable block (ram,0x0010fc30) */
/* WARNING: Removing unreachable block (ram,0x0010fc35) */
/* WARNING: Removing unreachable block (ram,0x0010fec0) */
/* WARNING: Removing unreachable block (ram,0x0010fed0) */
/* WARNING: Removing unreachable block (ram,0x0010fdc8) */
/* WARNING: Removing unreachable block (ram,0x0010fdd1) */
/* WARNING: Removing unreachable block (ram,0x0010fde1) */
/* WARNING: Removing unreachable block (ram,0x0010fdf1) */
/* WARNING: Removing unreachable block (ram,0x0010fe10) */
/* WARNING: Removing unreachable block (ram,0x0010fc45) */
/* WARNING: Removing unreachable block (ram,0x0010fc51) */
/* WARNING: Removing unreachable block (ram,0x0010fc5d) */
/* WARNING: Removing unreachable block (ram,0x0010fe19) */
/* WARNING: Removing unreachable block (ram,0x0010fc78) */
/* WARNING: Removing unreachable block (ram,0x0010fc85) */
/* WARNING: Removing unreachable block (ram,0x0010fc92) */
/* WARNING: Removing unreachable block (ram,0x0010fca7) */
/* WARNING: Removing unreachable block (ram,0x0010fcb4) */
/* WARNING: Removing unreachable block (ram,0x0010fccc) */
/* WARNING: Removing unreachable block (ram,0x0010fd02) */
/* WARNING: Removing unreachable block (ram,0x0010fda0) */
/* WARNING: Removing unreachable block (ram,0x0010fdb4) */
/* WARNING: Removing unreachable block (ram,0x0010fed5) */
/* Node3D::add_gizmo(Ref<Node3DGizmo>) */

void __thiscall Node3D::add_gizmo(void)

{
                    /* WARNING: Subroutine does not return */
  Node::current_process_thread_group();
}



/* WARNING: Removing unreachable block (ram,0x0010ff1a) */
/* WARNING: Removing unreachable block (ram,0x0010ffd0) */
/* WARNING: Removing unreachable block (ram,0x0010ffdd) */
/* WARNING: Removing unreachable block (ram,0x0010ff2f) */
/* WARNING: Removing unreachable block (ram,0x0010ff34) */
/* WARNING: Removing unreachable block (ram,0x0010ff3e) */
/* WARNING: Removing unreachable block (ram,0x0010ff4b) */
/* WARNING: Removing unreachable block (ram,0x0010ffa0) */
/* WARNING: Removing unreachable block (ram,0x0010ffb4) */
/* WARNING: Removing unreachable block (ram,0x0010ff50) */
/* WARNING: Removing unreachable block (ram,0x0010ffea) */
/* WARNING: Removing unreachable block (ram,0x0010ff7b) */
/* WARNING: Removing unreachable block (ram,0x0010ff8f) */
/* WARNING: Removing unreachable block (ram,0x00110084) */
/* Node3D::reparent(Node*, bool) */

void __thiscall Node3D::reparent(Node3D *this,Node *param_1,bool param_2)

{
                    /* WARNING: Subroutine does not return */
  Node::current_process_thread_group();
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



/* Object::_validate_property(PropertyInfo&) const */

void Object::_validate_property(PropertyInfo *param_1)

{
  return;
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



/* Node3DGizmo::is_class_ptr(void*) const */

uint __thiscall Node3DGizmo::is_class_ptr(Node3DGizmo *this,void *param_1)

{
  return (uint)CONCAT71(0x12a4,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12a4,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12a4,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* Node3DGizmo::_getv(StringName const&, Variant&) const */

undefined8 Node3DGizmo::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Node3DGizmo::_setv(StringName const&, Variant const&) */

undefined8 Node3DGizmo::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Node3DGizmo::_validate_propertyv(PropertyInfo&) const */

void Node3DGizmo::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* Node3DGizmo::_property_can_revertv(StringName const&) const */

undefined8 Node3DGizmo::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* Node3DGizmo::_property_get_revertv(StringName const&, Variant&) const */

undefined8 Node3DGizmo::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Node3DGizmo::_notificationv(int, bool) */

void Node3DGizmo::_notificationv(int param_1,bool param_2)

{
  return;
}



/* Node3D::is_class_ptr(void*) const */

uint __thiscall Node3D::is_class_ptr(Node3D *this,void *param_1)

{
  return (uint)CONCAT71(0x12a4,(undefined4 *)param_1 == &Node::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12a4,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12a4,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* Node3D::_getv(StringName const&, Variant&) const */

undefined8 Node3D::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Node3D::_setv(StringName const&, Variant const&) */

undefined8 Node3D::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Node3D::set_ignore_transform_notification(bool) */

void __thiscall Node3D::set_ignore_transform_notification(Node3D *this,bool param_1)

{
  this[0x4d8] = (Node3D)((byte)this[0x4d8] & 0xf7 | param_1 * '\b');
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



/* CallableCustomMethodPointer<Node3D, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Node3D,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Node3D,void> *this)

{
  return;
}



/* MethodBindTRC<Vector3, Vector3>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<Vector3,Vector3>::_gen_argument_type(int param_1)

{
  return 9;
}



/* MethodBindTRC<Vector3, Vector3>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Vector3,Vector3>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Vector3 const&, Vector3 const&, Vector3 const&, bool>::get_argument_meta(int) const
    */

undefined8
MethodBindT<Vector3_const&,Vector3_const&,Vector3_const&,bool>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Vector3 const&, Vector3 const&, bool>::get_argument_meta(int) const */

undefined8 MethodBindT<Vector3_const&,Vector3_const&,bool>::get_argument_meta(int param_1)

{
  return 0;
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



/* MethodBindT<Vector3 const&, float>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<Vector3_const&,float>::_gen_argument_type
          (MethodBindT<Vector3_const&,float> *this,int param_1)

{
  char cVar1;
  
  cVar1 = '\0';
  if ((uint)param_1 < 2) {
    cVar1 = (-(param_1 == 0) & 6U) + 3;
  }
  return cVar1;
}



/* MethodBindT<Vector3 const&, float>::get_argument_meta(int) const */

char __thiscall
MethodBindT<Vector3_const&,float>::get_argument_meta
          (MethodBindT<Vector3_const&,float> *this,int param_1)

{
  return (param_1 == 1) * '\t';
}



/* MethodBindT<Ref<Node3DGizmo>, int, Transform3D>::get_argument_meta(int) const */

char __thiscall
MethodBindT<Ref<Node3DGizmo>,int,Transform3D>::get_argument_meta
          (MethodBindT<Ref<Node3DGizmo>,int,Transform3D> *this,int param_1)

{
  return (param_1 == 1) * '\x03';
}



/* MethodBindTRC<TypedArray<Node3DGizmo>>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<TypedArray<Node3DGizmo>>::_gen_argument_type(int param_1)

{
  return 0x1c;
}



/* MethodBindTRC<TypedArray<Node3DGizmo>>::get_argument_meta(int) const */

undefined8 MethodBindTRC<TypedArray<Node3DGizmo>>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Ref<Node3DGizmo> >::_gen_argument_type(int) const */

byte __thiscall
MethodBindT<Ref<Node3DGizmo>>::_gen_argument_type(MethodBindT<Ref<Node3DGizmo>> *this,int param_1)

{
  return -(param_1 == 0) & 0x18;
}



/* MethodBindT<Ref<Node3DGizmo> >::get_argument_meta(int) const */

undefined8 MethodBindT<Ref<Node3DGizmo>>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<NodePath>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<NodePath>::_gen_argument_type(int param_1)

{
  return 0x16;
}



/* MethodBindTRC<NodePath>::get_argument_meta(int) const */

undefined8 MethodBindTRC<NodePath>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<NodePath const&>::_gen_argument_type(int) const */

byte __thiscall
MethodBindT<NodePath_const&>::_gen_argument_type(MethodBindT<NodePath_const&> *this,int param_1)

{
  return -(param_1 == 0) & 0x16;
}



/* MethodBindT<NodePath const&>::get_argument_meta(int) const */

undefined8 MethodBindT<NodePath_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<>::_gen_argument_type(int) const */

undefined8 MethodBindT<>::_gen_argument_type(int param_1)

{
  return 0;
}



/* MethodBindT<>::_gen_argument_type_info(int) const */

undefined8 MethodBindT<>::_gen_argument_type_info(int param_1)

{
  undefined4 in_register_0000003c;
  
  *(undefined4 *)CONCAT44(in_register_0000003c,param_1) = 0;
  *(undefined4 *)(CONCAT44(in_register_0000003c,param_1) + 0x18) = 0;
  *(undefined8 *)(CONCAT44(in_register_0000003c,param_1) + 0x20) = 0;
  *(undefined4 *)(CONCAT44(in_register_0000003c,param_1) + 0x28) = 6;
  *(undefined1 (*) [16])(CONCAT44(in_register_0000003c,param_1) + 8) = (undefined1  [16])0x0;
  return CONCAT44(in_register_0000003c,param_1);
}



/* MethodBindT<>::get_argument_meta(int) const */

undefined8 MethodBindT<>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<Ref<World3D>>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<Ref<World3D>>::_gen_argument_type(int param_1)

{
  return 0x18;
}



/* MethodBindTRC<Ref<World3D>>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Ref<World3D>>::get_argument_meta(int param_1)

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



/* MethodBindTRC<Node3D*>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<Node3D*>::_gen_argument_type(int param_1)

{
  return 0x18;
}



/* MethodBindTRC<Node3D*>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Node3D*>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTR<Transform3D>::_gen_argument_type(int) const */

undefined8 MethodBindTR<Transform3D>::_gen_argument_type(int param_1)

{
  return 0x12;
}



/* MethodBindTR<Transform3D>::get_argument_meta(int) const */

undefined8 MethodBindTR<Transform3D>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<Basis>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<Basis>::_gen_argument_type(int param_1)

{
  return 0x11;
}



/* MethodBindTRC<Basis>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Basis>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Basis const&>::_gen_argument_type(int) const */

byte __thiscall
MethodBindT<Basis_const&>::_gen_argument_type(MethodBindT<Basis_const&> *this,int param_1)

{
  return -(param_1 == 0) & 0x11;
}



/* MethodBindT<Basis const&>::get_argument_meta(int) const */

undefined8 MethodBindT<Basis_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<Quaternion>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<Quaternion>::_gen_argument_type(int param_1)

{
  return 0xf;
}



/* MethodBindTRC<Quaternion>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Quaternion>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Quaternion const&>::_gen_argument_type(int) const */

byte __thiscall
MethodBindT<Quaternion_const&>::_gen_argument_type(MethodBindT<Quaternion_const&> *this,int param_1)

{
  return -(param_1 == 0) & 0xf;
}



/* MethodBindT<Quaternion const&>::get_argument_meta(int) const */

undefined8 MethodBindT<Quaternion_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<Node3D::RotationEditMode>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<Node3D::RotationEditMode>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<Node3D::RotationEditMode>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Node3D::RotationEditMode>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Node3D::RotationEditMode>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<Node3D::RotationEditMode>::_gen_argument_type
          (MethodBindT<Node3D::RotationEditMode> *this,int param_1)

{
  return (param_1 == 0) * '\x02';
}



/* MethodBindT<Node3D::RotationEditMode>::get_argument_meta(int) const */

undefined8 MethodBindT<Node3D::RotationEditMode>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<EulerOrder>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<EulerOrder>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<EulerOrder>::get_argument_meta(int) const */

undefined8 MethodBindTRC<EulerOrder>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<EulerOrder>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<EulerOrder>::_gen_argument_type(MethodBindT<EulerOrder> *this,int param_1)

{
  return (param_1 == 0) * '\x02';
}



/* MethodBindT<EulerOrder>::get_argument_meta(int) const */

undefined8 MethodBindT<EulerOrder>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<Vector3>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<Vector3>::_gen_argument_type(int param_1)

{
  return 9;
}



/* MethodBindTRC<Vector3>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Vector3>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Vector3 const&>::_gen_argument_type(int) const */

byte __thiscall
MethodBindT<Vector3_const&>::_gen_argument_type(MethodBindT<Vector3_const&> *this,int param_1)

{
  return -(param_1 == 0) & 9;
}



/* MethodBindT<Vector3 const&>::get_argument_meta(int) const */

undefined8 MethodBindT<Vector3_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<Transform3D>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<Transform3D>::_gen_argument_type(int param_1)

{
  return 0x12;
}



/* MethodBindTRC<Transform3D>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Transform3D>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Transform3D const&>::_gen_argument_type(int) const */

byte __thiscall
MethodBindT<Transform3D_const&>::_gen_argument_type
          (MethodBindT<Transform3D_const&> *this,int param_1)

{
  return -(param_1 == 0) & 0x12;
}



/* MethodBindT<Transform3D const&>::get_argument_meta(int) const */

undefined8 MethodBindT<Transform3D_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* CallableCustomMethodPointer<Node3D, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<Node3D,void>::get_argument_count
          (CallableCustomMethodPointer<Node3D,void> *this,bool *param_1)

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



/* CallableCustomMethodPointer<Node3D, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Node3D,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Node3D,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* MethodBindT<EulerOrder>::~MethodBindT() */

void __thiscall MethodBindT<EulerOrder>::~MethodBindT(MethodBindT<EulerOrder> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00129ba8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<EulerOrder>::~MethodBindT() */

void __thiscall MethodBindT<EulerOrder>::~MethodBindT(MethodBindT<EulerOrder> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00129ba8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<EulerOrder>::~MethodBindTRC() */

void __thiscall MethodBindTRC<EulerOrder>::~MethodBindTRC(MethodBindTRC<EulerOrder> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00129c08;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<EulerOrder>::~MethodBindTRC() */

void __thiscall MethodBindTRC<EulerOrder>::~MethodBindTRC(MethodBindTRC<EulerOrder> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00129c08;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Node3D::RotationEditMode>::~MethodBindT() */

void __thiscall
MethodBindT<Node3D::RotationEditMode>::~MethodBindT(MethodBindT<Node3D::RotationEditMode> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00129c68;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Node3D::RotationEditMode>::~MethodBindT() */

void __thiscall
MethodBindT<Node3D::RotationEditMode>::~MethodBindT(MethodBindT<Node3D::RotationEditMode> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00129c68;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Node3D::RotationEditMode>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Node3D::RotationEditMode>::~MethodBindTRC
          (MethodBindTRC<Node3D::RotationEditMode> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00129cc8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Node3D::RotationEditMode>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Node3D::RotationEditMode>::~MethodBindTRC
          (MethodBindTRC<Node3D::RotationEditMode> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00129cc8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Quaternion const&>::~MethodBindT() */

void __thiscall MethodBindT<Quaternion_const&>::~MethodBindT(MethodBindT<Quaternion_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00129d28;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Quaternion const&>::~MethodBindT() */

void __thiscall MethodBindT<Quaternion_const&>::~MethodBindT(MethodBindT<Quaternion_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00129d28;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Quaternion>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Quaternion>::~MethodBindTRC(MethodBindTRC<Quaternion> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00129d88;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Quaternion>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Quaternion>::~MethodBindTRC(MethodBindTRC<Quaternion> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00129d88;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Transform3D const&>::~MethodBindT() */

void __thiscall MethodBindT<Transform3D_const&>::~MethodBindT(MethodBindT<Transform3D_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00129a28;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Transform3D const&>::~MethodBindT() */

void __thiscall MethodBindT<Transform3D_const&>::~MethodBindT(MethodBindT<Transform3D_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00129a28;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Transform3D>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Transform3D>::~MethodBindTRC(MethodBindTRC<Transform3D> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00129a88;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Transform3D>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Transform3D>::~MethodBindTRC(MethodBindTRC<Transform3D> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00129a88;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<Transform3D>::~MethodBindTR() */

void __thiscall MethodBindTR<Transform3D>::~MethodBindTR(MethodBindTR<Transform3D> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00129ea8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Transform3D>::~MethodBindTR() */

void __thiscall MethodBindTR<Transform3D>::~MethodBindTR(MethodBindTR<Transform3D> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00129ea8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Basis const&>::~MethodBindT() */

void __thiscall MethodBindT<Basis_const&>::~MethodBindT(MethodBindT<Basis_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00129de8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Basis const&>::~MethodBindT() */

void __thiscall MethodBindT<Basis_const&>::~MethodBindT(MethodBindT<Basis_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00129de8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Basis>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Basis>::~MethodBindTRC(MethodBindTRC<Basis> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00129e48;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Basis>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Basis>::~MethodBindTRC(MethodBindTRC<Basis> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00129e48;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Vector3>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Vector3>::~MethodBindTRC(MethodBindTRC<Vector3> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00129b48;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Vector3>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Vector3>::~MethodBindTRC(MethodBindTRC<Vector3> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00129b48;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Node3D*>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Node3D*>::~MethodBindTRC(MethodBindTRC<Node3D*> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00129f08;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Node3D*>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Node3D*>::~MethodBindTRC(MethodBindTRC<Node3D*> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00129f08;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Ref<World3D>>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Ref<World3D>>::~MethodBindTRC(MethodBindTRC<Ref<World3D>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012a028;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Ref<World3D>>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Ref<World3D>>::~MethodBindTRC(MethodBindTRC<Ref<World3D>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012a028;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<NodePath const&>::~MethodBindT() */

void __thiscall MethodBindT<NodePath_const&>::~MethodBindT(MethodBindT<NodePath_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012a0e8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<NodePath const&>::~MethodBindT() */

void __thiscall MethodBindT<NodePath_const&>::~MethodBindT(MethodBindT<NodePath_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012a0e8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<NodePath>::~MethodBindTRC() */

void __thiscall MethodBindTRC<NodePath>::~MethodBindTRC(MethodBindTRC<NodePath> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012a148;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<NodePath>::~MethodBindTRC() */

void __thiscall MethodBindTRC<NodePath>::~MethodBindTRC(MethodBindTRC<NodePath> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012a148;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Ref<Node3DGizmo> >::~MethodBindT() */

void __thiscall MethodBindT<Ref<Node3DGizmo>>::~MethodBindT(MethodBindT<Ref<Node3DGizmo>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012a1a8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Ref<Node3DGizmo> >::~MethodBindT() */

void __thiscall MethodBindT<Ref<Node3DGizmo>>::~MethodBindT(MethodBindT<Ref<Node3DGizmo>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012a1a8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<TypedArray<Node3DGizmo>>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<TypedArray<Node3DGizmo>>::~MethodBindTRC(MethodBindTRC<TypedArray<Node3DGizmo>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012a208;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<TypedArray<Node3DGizmo>>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<TypedArray<Node3DGizmo>>::~MethodBindTRC(MethodBindTRC<TypedArray<Node3DGizmo>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012a208;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Ref<Node3DGizmo>, int, Transform3D>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<Node3DGizmo>,int,Transform3D>::~MethodBindT
          (MethodBindT<Ref<Node3DGizmo>,int,Transform3D> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012a268;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Ref<Node3DGizmo>, int, Transform3D>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<Node3DGizmo>,int,Transform3D>::~MethodBindT
          (MethodBindT<Ref<Node3DGizmo>,int,Transform3D> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012a268;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<bool>::~MethodBindT() */

void __thiscall MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00129f68;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<bool>::~MethodBindT() */

void __thiscall MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00129f68;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00129fc8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00129fc8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Vector3 const&, float>::~MethodBindT() */

void __thiscall
MethodBindT<Vector3_const&,float>::~MethodBindT(MethodBindT<Vector3_const&,float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012a2c8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Vector3 const&, float>::~MethodBindT() */

void __thiscall
MethodBindT<Vector3_const&,float>::~MethodBindT(MethodBindT<Vector3_const&,float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012a2c8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<float>::~MethodBindT() */

void __thiscall MethodBindT<float>::~MethodBindT(MethodBindT<float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012a328;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<float>::~MethodBindT() */

void __thiscall MethodBindT<float>::~MethodBindT(MethodBindT<float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012a328;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Vector3 const&>::~MethodBindT() */

void __thiscall MethodBindT<Vector3_const&>::~MethodBindT(MethodBindT<Vector3_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00129ae8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Vector3 const&>::~MethodBindT() */

void __thiscall MethodBindT<Vector3_const&>::~MethodBindT(MethodBindT<Vector3_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00129ae8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012a088;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012a088;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Vector3 const&, Vector3 const&, bool>::~MethodBindT() */

void __thiscall
MethodBindT<Vector3_const&,Vector3_const&,bool>::~MethodBindT
          (MethodBindT<Vector3_const&,Vector3_const&,bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012a388;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Vector3 const&, Vector3 const&, bool>::~MethodBindT() */

void __thiscall
MethodBindT<Vector3_const&,Vector3_const&,bool>::~MethodBindT
          (MethodBindT<Vector3_const&,Vector3_const&,bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012a388;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Vector3 const&, Vector3 const&, Vector3 const&, bool>::~MethodBindT() */

void __thiscall
MethodBindT<Vector3_const&,Vector3_const&,Vector3_const&,bool>::~MethodBindT
          (MethodBindT<Vector3_const&,Vector3_const&,Vector3_const&,bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012a3e8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Vector3 const&, Vector3 const&, Vector3 const&, bool>::~MethodBindT() */

void __thiscall
MethodBindT<Vector3_const&,Vector3_const&,Vector3_const&,bool>::~MethodBindT
          (MethodBindT<Vector3_const&,Vector3_const&,Vector3_const&,bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012a3e8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Vector3, Vector3>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Vector3,Vector3>::~MethodBindTRC(MethodBindTRC<Vector3,Vector3> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012a448;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Vector3, Vector3>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Vector3,Vector3>::~MethodBindTRC(MethodBindTRC<Vector3,Vector3> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012a448;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Vector3 const&, Vector3 const&, bool>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<Vector3_const&,Vector3_const&,bool>::_gen_argument_type
          (MethodBindT<Vector3_const&,Vector3_const&,bool> *this,int param_1)

{
  char cVar1;
  
  cVar1 = '\0';
  if ((uint)param_1 < 3) {
    cVar1 = (param_1 != 2) * '\b' + '\x01';
  }
  return cVar1;
}



/* MethodBindT<Vector3 const&, Vector3 const&, Vector3 const&, bool>::_gen_argument_type(int) const
    */

char __thiscall
MethodBindT<Vector3_const&,Vector3_const&,Vector3_const&,bool>::_gen_argument_type
          (MethodBindT<Vector3_const&,Vector3_const&,Vector3_const&,bool> *this,int param_1)

{
  char cVar1;
  
  cVar1 = '\0';
  if ((uint)param_1 < 4) {
    cVar1 = (param_1 != 3) * '\b' + '\x01';
  }
  return cVar1;
}



/* MethodBindT<Ref<Node3DGizmo>, int, Transform3D>::_gen_argument_type(int) const */

undefined8 __thiscall
MethodBindT<Ref<Node3DGizmo>,int,Transform3D>::_gen_argument_type
          (MethodBindT<Ref<Node3DGizmo>,int,Transform3D> *this,int param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((((uint)param_1 < 3) && (uVar1 = 0x18, param_1 != 0)) && (uVar1 = 0x12, param_1 == 1)) {
    uVar1 = 2;
  }
  return uVar1;
}



/* CallableCustomMethodPointer<Node3D, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<Node3D,void>::get_object(CallableCustomMethodPointer<Node3D,void> *this)

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
      goto LAB_0011110d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0011110d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0011110d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
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



/* Node3DGizmo::_get_class_namev() const */

undefined8 * Node3DGizmo::_get_class_namev(void)

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
LAB_00112743:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00112743;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"Node3DGizmo");
      goto LAB_001127ae;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"Node3DGizmo");
LAB_001127ae:
  return &_get_class_namev()::_class_name_static;
}



/* Node3D::_get_class_namev() const */

undefined8 * Node3D::_get_class_namev(void)

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
LAB_00112823:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00112823;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"Node3D");
      goto LAB_0011288e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"Node3D");
LAB_0011288e:
  return &_get_class_namev()::_class_name_static;
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



/* MethodBindTRC<Node3D*>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Node3D*>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  bool bVar4;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = 0;
  local_30 = 6;
  local_38 = "Node3D";
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  *puVar3 = 0x18;
  *(undefined8 *)(puVar3 + 2) = 0;
  StringName::StringName((StringName *)(puVar3 + 4),(StringName *)&local_38);
  bVar4 = StringName::configured != '\0';
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  puVar3[10] = 6;
  if ((bVar4) && (local_38 != (char *)0x0)) {
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
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Node3DGizmo::get_class() const */

void Node3DGizmo::get_class(void)

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



/* Node3D::get_class() const */

void Node3D::get_class(void)

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



/* MethodBindTRC<Ref<World3D>>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Ref<World3D>>::_gen_argument_type_info(int param_1)

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
  local_48 = "World3D";
  local_40 = 7;
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
      goto LAB_00112d40;
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
LAB_00112d40:
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



/* MethodBindTRC<NodePath>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<NodePath>::_gen_argument_type_info(int param_1)

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
  local_48 = &_LC17;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 0x16;
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
      goto joined_r0x00112f5c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x00112f5c:
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



/* MethodBindTRC<Basis>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Basis>::_gen_argument_type_info(int param_1)

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
  local_48 = &_LC17;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 0x11;
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
      goto joined_r0x001130dc;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x001130dc:
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



/* MethodBindTRC<Transform3D>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Transform3D>::_gen_argument_type_info(int param_1)

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
  local_48 = &_LC17;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 0x12;
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
      goto joined_r0x0011325c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0011325c:
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



/* MethodBindTR<Transform3D>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTR<Transform3D>::_gen_argument_type_info(int param_1)

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
  local_48 = &_LC17;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 0x12;
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
      goto joined_r0x001133dc;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x001133dc:
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



/* MethodBindTRC<TypedArray<Node3DGizmo>>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<TypedArray<Node3DGizmo>>::_gen_argument_type_info(int param_1)

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
  local_48 = "Node3DGizmo";
  local_40 = 0xb;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 0x1c;
  puVar3[6] = 0x1f;
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
      if (*(char **)(puVar3 + 4) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(char **)(puVar3 + 4) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x0011355c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0011355c:
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
  local_48 = &_LC17;
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
      goto joined_r0x001136dc;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x001136dc:
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



/* MethodBindTRC<Quaternion>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Quaternion>::_gen_argument_type_info(int param_1)

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
  local_48 = &_LC17;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 0xf;
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
      goto joined_r0x0011385c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0011385c:
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



/* MethodBindTRC<Vector3>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Vector3>::_gen_argument_type_info(int param_1)

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
  local_48 = &_LC17;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 9;
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
      goto joined_r0x001139dc;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x001139dc:
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
            if (lVar5 == 0) goto LAB_00113a9f;
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
LAB_00113a9f:
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
    if (cVar6 != '\0') goto LAB_00113b53;
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
          plVar1 = (long *)(*(long *)(lVar4 + 0x10) + -0x10);
          if (*(long *)(lVar4 + 0x10) != 0) {
            do {
              lVar5 = *plVar1;
              if (lVar5 == 0) goto LAB_00113c2b;
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
LAB_00113c2b:
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
      if (cVar6 != '\0') goto LAB_00113b53;
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
                if (lVar5 == 0) goto LAB_00113d0b;
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
LAB_00113d0b:
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
        if (cVar6 != '\0') goto LAB_00113b53;
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = String::operator==(param_1,"Object");
        return uVar7;
      }
      goto LAB_00113db4;
    }
  }
LAB_00113b53:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00113db4:
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
            if (lVar5 == 0) goto LAB_001140af;
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
LAB_001140af:
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
    if (cVar6 != '\0') goto LAB_00114163;
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
              if (lVar5 == 0) goto LAB_00114213;
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
LAB_00114213:
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
      if (cVar6 != '\0') goto LAB_00114163;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==(param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_00114163:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Node3DGizmo::is_class(String const&) const */

undefined8 __thiscall Node3DGizmo::is_class(Node3DGizmo *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_0011433f;
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
LAB_0011433f:
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
    if (cVar5 != '\0') goto LAB_001143f3;
  }
  cVar5 = String::operator==(param_1,"Node3DGizmo");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_001143f3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
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
LAB_001145b8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001145b8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x001145d6;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x001145d6:
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



/* Node3DGizmo::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Node3DGizmo::_get_property_listv(Node3DGizmo *this,List *param_1,bool param_2)

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
  local_78 = "Node3DGizmo";
  local_70 = 0xb;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Node3DGizmo";
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
LAB_001149b8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001149b8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x001149d5;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x001149d5:
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
  StringName::StringName((StringName *)&local_78,"Node3DGizmo",false);
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



/* Node3D::_validate_propertyv(PropertyInfo&) const */

void __thiscall Node3D::_validate_propertyv(Node3D *this,PropertyInfo *param_1)

{
  if ((code *)PTR__validate_property_00132008 != Object::_validate_property) {
    Node::_validate_property((PropertyInfo *)this);
  }
  _validate_property(this,param_1);
  return;
}



/* Node3D::_property_can_revertv(StringName const&) const */

void __thiscall Node3D::_property_can_revertv(Node3D *this,StringName *param_1)

{
  _property_can_revert(this,param_1);
  return;
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



/* Callable create_custom_callable_function_pointer<Node3D>(Node3D*, char const*, void
   (Node3D::*)()) */

Node3D * create_custom_callable_function_pointer<Node3D>
                   (Node3D *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC17;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00129998;
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



/* MethodDefinition D_METHOD<char const*>(char const*, char const* const) */

char * D_METHOD<char_const*>(char *param_1,char *param_2)

{
  long in_FS_OFFSET;
  undefined1 local_38 [8];
  undefined8 local_30;
  undefined1 *local_28 [3];
  long local_10;
  
  local_28[0] = local_38;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = 0;
  D_METHODP(param_1,(char ***)param_2,(uint)local_28);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
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



/* Node3D::_property_get_revertv(StringName const&, Variant&) const */

void __thiscall Node3D::_property_get_revertv(Node3D *this,StringName *param_1,Variant *param_2)

{
  _property_get_revert(this,param_1,param_2);
  return;
}



/* WARNING: Removing unreachable block (ram,0x00115288) */
/* WARNING: Removing unreachable block (ram,0x0011541d) */
/* WARNING: Removing unreachable block (ram,0x00115429) */
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



/* godot::details::enum_qualified_name_to_class_info_name(String const&) */

details * __thiscall
godot::details::enum_qualified_name_to_class_info_name(details *this,String *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long in_FS_OFFSET;
  long local_60;
  char local_58 [8];
  long *local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  String::split(local_58,SUB81(param_1,0),0x115477);
  if ((local_50 != (long *)0x0) && (2 < local_50[-1])) {
    local_60 = 0;
    local_48 = &_LC42;
    local_40 = 1;
    String::parse_latin1((StrRange *)&local_60);
    if (local_50 == (long *)0x0) {
      lVar7 = 0;
      lVar6 = -2;
    }
    else {
      lVar7 = local_50[-1];
      lVar6 = lVar7 + -2;
      if (-1 < lVar6) {
        String::operator+((String *)&local_48,(String *)(local_50 + lVar6));
        String::operator+((String *)this,(String *)&local_48);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        goto LAB_0011556d;
      }
    }
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,lVar6,lVar7,"p_index","size()","",false,true)
    ;
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  local_60 = 0;
  local_48 = &_LC42;
  local_40 = 1;
  String::parse_latin1((StrRange *)&local_60);
  String::join((Vector *)this);
  lVar7 = local_60;
  if (local_60 != 0) {
    LOCK();
    plVar1 = (long *)(local_60 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_60 = 0;
      Memory::free_static((void *)(lVar7 + -0x10),false);
    }
  }
LAB_0011556d:
  plVar1 = local_50;
  if (local_50 != (long *)0x0) {
    LOCK();
    plVar5 = local_50 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_50 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar7 = local_50[-1];
      local_50 = (long *)0x0;
      if (lVar7 != 0) {
        lVar6 = 0;
        plVar5 = plVar1;
        do {
          if (*plVar5 != 0) {
            LOCK();
            plVar2 = (long *)(*plVar5 + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar3 = *plVar5;
              *plVar5 = 0;
              Memory::free_static((void *)(lVar3 + -0x10),false);
            }
          }
          lVar6 = lVar6 + 1;
          plVar5 = plVar5 + 1;
        } while (lVar7 != lVar6);
      }
      Memory::free_static(plVar1 + -2,false);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GetTypeInfo<Node3D::RotationEditMode, void>::get_class_info() */

GetTypeInfo<Node3D::RotationEditMode,void> * __thiscall
GetTypeInfo<Node3D::RotationEditMode,void>::get_class_info
          (GetTypeInfo<Node3D::RotationEditMode,void> *this)

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
  local_48 = "Node3D::RotationEditMode";
  local_40 = 0x18;
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



/* MethodBindTRC<EulerOrder>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<EulerOrder>::_gen_argument_type_info(int param_1)

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
  local_58 = 0;
  local_48 = "EulerOrder";
  local_40 = 10;
  String::parse_latin1((StrRange *)&local_58);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_50,(String *)&local_58);
  StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
  *puVar3 = 2;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  puVar3[10] = 0x10006;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_48);
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
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Node3D::RotationEditMode>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Node3D::RotationEditMode>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = 0;
  local_30 = 0x18;
  local_38 = "Node3D::RotationEditMode";
  String::parse_latin1((StrRange *)&local_40);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_38,(String *)&local_40);
  StringName::StringName((StringName *)&local_48,(String *)&local_38,false);
  *puVar4 = 2;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  puVar4[10] = 0x10006;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_48);
  if ((StringName::configured != '\0') && (local_48 != 0)) {
    StringName::unref();
  }
  pcVar3 = local_38;
  if (local_38 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)(local_38 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_38 = (char *)0x0;
      Memory::free_static(pcVar3 + -0x10,false);
    }
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
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<Node3D, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<Node3D,void>::call
          (CallableCustomMethodPointer<Node3D,void> *this,Variant **param_1,int param_2,
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
      goto LAB_00115ccf;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_00115ccf;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00115ca8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_00115d91;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_00115ccf:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC169,"./core/object/callable_method_pointer.h",0x67,
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
LAB_00115d91:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Node3DGizmo::_initialize_classv() */

void Node3DGizmo::_initialize_classv(void)

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
  if (initialize_class()::initialized == '\0') {
    if (RefCounted::initialize_class()::initialized == '\0') {
      Object::initialize_class();
      local_58 = 0;
      local_40 = 6;
      local_48 = "Object";
      String::parse_latin1((StrRange *)&local_58);
      StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
      local_48 = "RefCounted";
      local_60 = 0;
      local_40 = 10;
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
      if ((code *)PTR__bind_methods_00132010 != Object::_bind_methods) {
        RefCounted::_bind_methods();
      }
      RefCounted::initialize_class()::initialized = '\x01';
    }
    local_48 = "RefCounted";
    local_58 = 0;
    local_40 = 10;
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "Node3DGizmo";
    local_60 = 0;
    local_40 = 0xb;
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
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindT<Quaternion const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<Quaternion_const&>::_gen_argument_type_info(int param_1)

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
  if (in_EDX != 0) goto LAB_00116059;
  local_78 = 0;
  local_68 = &_LC17;
  local_80 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._8_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,0xf);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00116150:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00116150;
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
LAB_00116059:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar7;
}



/* MethodBindT<Transform3D const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<Transform3D_const&>::_gen_argument_type_info(int param_1)

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
  if (in_EDX != 0) goto LAB_00116309;
  local_78 = 0;
  local_68 = &_LC17;
  local_80 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._8_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,0x12);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00116400:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00116400;
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
LAB_00116309:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar7;
}



/* MethodBindT<NodePath const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<NodePath_const&>::_gen_argument_type_info(int param_1)

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
  if (in_EDX != 0) goto LAB_001165b9;
  local_78 = 0;
  local_68 = &_LC17;
  local_80 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._8_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,0x16);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_001166b0:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_001166b0;
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
LAB_001165b9:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar7;
}



/* MethodBindT<Basis const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<Basis_const&>::_gen_argument_type_info(int param_1)

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
  if (in_EDX != 0) goto LAB_00116869;
  local_78 = 0;
  local_68 = &_LC17;
  local_80 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._8_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,0x11);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00116960:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00116960;
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
LAB_00116869:
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
  if (in_EDX != 0) goto LAB_00116b19;
  local_78 = 0;
  local_68 = &_LC17;
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
LAB_00116c10:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00116c10;
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
LAB_00116b19:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar7;
}



/* Node3D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Node3D::_get_property_listv(Node3D *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
  undefined4 *puVar4;
  long in_FS_OFFSET;
  CowData<char32_t> *local_b8;
  StringName *local_b0;
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
    local_88 = 0;
    local_90 = 0;
    local_78 = "Node";
    local_70 = 4;
    String::parse_latin1((StrRange *)&local_90);
    local_78 = "Node";
    local_98 = 0;
    local_70 = 4;
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
LAB_001171dd:
      local_50 = 0x80;
      StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
    }
    else {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_001171dd;
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
    }
    local_b8 = (CowData<char32_t> *)&local_70;
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    if ((StringName::configured != '\0') && (local_68 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref(local_b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    if ((StringName::configured != '\0') && (local_88 != 0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_78,"Node",false);
    ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
    if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
      StringName::unref();
    }
  }
  local_b0 = (StringName *)&local_68;
  local_b8 = (CowData<char32_t> *)&local_70;
  local_88 = 0;
  local_78 = "Node3D";
  local_90 = 0;
  local_70 = 6;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Node3D";
  local_98 = 0;
  local_70 = 6;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref(local_b8,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 == 0) {
LAB_00116f10:
    local_50 = 0x80;
    StringName::operator=(local_b0,(StringName *)&local_88);
LAB_00116f1f:
    lVar2 = *(long *)param_1;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00116f10;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 == local_80) {
      if ((StringName::configured != '\0') && (local_80 != 0)) {
        StringName::unref();
      }
      goto LAB_00116f1f;
    }
    StringName::unref();
    lVar2 = *(long *)param_1;
    local_68 = local_80;
  }
  if (lVar2 == 0) {
    pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar3;
    *(undefined4 *)pauVar3[1] = 0;
    *pauVar3 = (undefined1  [16])0x0;
  }
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
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 2),(CowData *)local_b8);
  }
  StringName::operator=((StringName *)(puVar4 + 4),local_b0);
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
  CowData<char32_t>::_unref(local_b8);
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
  if (!param_2) goto LAB_0011708f;
  local_88 = 0;
  local_90 = 0;
  local_78 = "Node";
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Node";
  local_98 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref(local_b8,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 == 0) {
LAB_001173a0:
    local_50 = 0x80;
    StringName::operator=(local_b0,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001173a0;
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
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref(local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"Node",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
LAB_0011708f:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Node3D::RotationEditMode>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<Node3D::RotationEditMode>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  long lVar5;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar6;
  long in_FS_OFFSET;
  long local_90;
  details local_88 [8];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  char *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar6 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar6 = 0;
  puVar6[6] = 0;
  *(undefined8 *)(puVar6 + 8) = 0;
  puVar6[10] = 6;
  *(undefined1 (*) [16])(puVar6 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    local_80 = 0;
    local_68 = "Node3D::RotationEditMode";
    local_60._0_8_ = 0x18;
    String::parse_latin1((StrRange *)&local_80);
    godot::details::enum_qualified_name_to_class_info_name(local_88,(String *)&local_80);
    StringName::StringName((StringName *)&local_90,(String *)local_88,false);
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
    if ((StringName::configured != '\0') && (local_90 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    *puVar6 = local_68._0_4_;
    if (*(long *)(puVar6 + 2) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar6 + 2));
      uVar4 = local_60._0_8_;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_60._8_8_;
      local_60 = auVar2 << 0x40;
      *(undefined8 *)(puVar6 + 2) = uVar4;
    }
    if (*(long *)(puVar6 + 4) != local_60._8_8_) {
      StringName::unref();
      uVar4 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8 *)(puVar6 + 4) = uVar4;
    }
    lVar5 = local_48;
    puVar6[6] = (undefined4)local_50;
    if (*(long *)(puVar6 + 8) == local_48) {
      puVar6[10] = local_40;
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
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar6 + 8));
      *(long *)(puVar6 + 8) = local_48;
      puVar6[10] = local_40;
    }
    if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
      StringName::unref();
    }
    uVar4 = local_60._0_8_;
    if (local_60._0_8_ != 0) {
      LOCK();
      plVar1 = (long *)(local_60._0_8_ + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        auVar3._8_8_ = 0;
        auVar3._0_8_ = local_60._8_8_;
        local_60 = auVar3 << 0x40;
        Memory::free_static((void *)(uVar4 + -0x10),false);
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<EulerOrder>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<EulerOrder>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  long lVar5;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar6;
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  details local_78 [8];
  long local_70;
  char *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar6 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar6 = 0;
  puVar6[6] = 0;
  *(undefined8 *)(puVar6 + 8) = 0;
  puVar6[10] = 6;
  *(undefined1 (*) [16])(puVar6 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    local_80 = 0;
    local_68 = "EulerOrder";
    local_60._0_8_ = 10;
    String::parse_latin1((StrRange *)&local_80);
    godot::details::enum_qualified_name_to_class_info_name(local_78,(String *)&local_80);
    StringName::StringName((StringName *)&local_70,(String *)local_78,false);
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
    if ((StringName::configured != '\0') && (local_70 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    *puVar6 = local_68._0_4_;
    if (*(long *)(puVar6 + 2) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar6 + 2));
      uVar4 = local_60._0_8_;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_60._8_8_;
      local_60 = auVar2 << 0x40;
      *(undefined8 *)(puVar6 + 2) = uVar4;
    }
    if (*(long *)(puVar6 + 4) != local_60._8_8_) {
      StringName::unref();
      uVar4 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8 *)(puVar6 + 4) = uVar4;
    }
    lVar5 = local_48;
    puVar6[6] = (undefined4)local_50;
    if (*(long *)(puVar6 + 8) == local_48) {
      puVar6[10] = local_40;
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
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar6 + 8));
      *(long *)(puVar6 + 8) = local_48;
      puVar6[10] = local_40;
    }
    if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
      StringName::unref();
    }
    uVar4 = local_60._0_8_;
    if (local_60._0_8_ != 0) {
      LOCK();
      plVar1 = (long *)(local_60._0_8_ + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        auVar3._8_8_ = 0;
        auVar3._0_8_ = local_60._8_8_;
        local_60 = auVar3 << 0x40;
        Memory::free_static((void *)(uVar4 + -0x10),false);
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector3, Vector3>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Vector3,Vector3>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  undefined8 local_b0;
  undefined8 local_a8;
  long local_a0;
  long local_98;
  undefined1 local_90 [16];
  undefined8 local_80;
  long local_78;
  undefined4 local_70;
  undefined *local_68;
  long local_60;
  ulong local_58;
  undefined4 local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_98 = 0;
  if (in_EDX == 0) {
    local_80 = 0;
    local_90._0_8_ = 0;
    local_90._8_8_ = 0;
    local_78 = 0;
    local_70 = 6;
    local_a0 = 0;
    local_a8 = 0;
    local_68 = &_LC17;
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_a8);
    local_b0 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_68,9,(CowData<char32_t> *)&local_b0,0,(StrRange *)&local_a8,6,
               &local_a0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    if ((StringName::configured != '\0') && (local_a0 != 0)) {
      StringName::unref();
    }
    local_98 = CONCAT44(local_98._4_4_,local_68._0_4_);
    if (local_90._0_8_ != local_60) {
      CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
      local_90._0_8_ = local_60;
      local_60 = 0;
    }
    if (local_90._8_8_ != local_58) {
      StringName::unref();
      local_90._8_8_ = local_58;
      local_58 = 0;
    }
    local_80 = CONCAT44(local_80._4_4_,local_50);
    if (local_78 != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      local_78 = local_48;
      local_48 = 0;
    }
    local_70 = local_40;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
    uVar3 = local_90._8_8_;
    uVar2 = local_90._0_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_90._8_8_;
    local_90 = auVar1 << 0x40;
    *puVar4 = (undefined4)local_98;
    *(undefined8 *)(puVar4 + 2) = uVar2;
    *(undefined8 *)(puVar4 + 4) = uVar3;
    puVar4[6] = (undefined4)local_80;
    *(long *)(puVar4 + 8) = local_78;
    puVar4[10] = local_70;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
    goto LAB_00117c7a;
  }
  local_a0 = 0;
  local_60 = 0;
  local_68 = &_LC17;
  String::parse_latin1((StrRange *)&local_a0);
  local_a8 = 0;
  *puVar4 = 9;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (local_a0 == 0) {
    puVar4[10] = 6;
LAB_00117c3f:
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_98);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_a0);
    puVar4[10] = 6;
    if (puVar4[6] != 0x11) goto LAB_00117c3f;
    StringName::StringName((StringName *)&local_68,(String *)(puVar4 + 8),false);
    if (*(undefined **)(puVar4 + 4) == local_68) {
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar4 + 4) = local_68;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  if ((StringName::configured != '\0') && (local_98 != 0)) {
    StringName::unref();
  }
LAB_00117c7a:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<Node3D, Transform3D const&>(void (Node3D::*)(Transform3D const&))
    */

MethodBind * create_method_bind<Node3D,Transform3D_const&>(_func_void_Transform3D_ptr *param_1)

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
  *(_func_void_Transform3D_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00129a28;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "Node3D";
  local_30 = 6;
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



/* MethodBind* create_method_bind<Node3D, Transform3D>(Transform3D (Node3D::*)() const) */

MethodBind * create_method_bind<Node3D,Transform3D>(_func_Transform3D *param_1)

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
  *(_func_Transform3D **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00129a88;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "Node3D";
  local_30 = 6;
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



/* MethodBind* create_method_bind<Node3D, Vector3 const&>(void (Node3D::*)(Vector3 const&)) */

MethodBind * create_method_bind<Node3D,Vector3_const&>(_func_void_Vector3_ptr *param_1)

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
  *(_func_void_Vector3_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00129ae8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "Node3D";
  local_30 = 6;
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



/* MethodBind* create_method_bind<Node3D, Vector3>(Vector3 (Node3D::*)() const) */

MethodBind * create_method_bind<Node3D,Vector3>(_func_Vector3 *param_1)

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
  *(_func_Vector3 **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00129b48;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "Node3D";
  local_30 = 6;
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



/* MethodBind* create_method_bind<Node3D, EulerOrder>(void (Node3D::*)(EulerOrder)) */

MethodBind * create_method_bind<Node3D,EulerOrder>(_func_void_EulerOrder *param_1)

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
  *(_func_void_EulerOrder **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00129ba8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "Node3D";
  local_30 = 6;
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



/* MethodBind* create_method_bind<Node3D, EulerOrder>(EulerOrder (Node3D::*)() const) */

MethodBind * create_method_bind<Node3D,EulerOrder>(_func_EulerOrder *param_1)

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
  *(_func_EulerOrder **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00129c08;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "Node3D";
  local_30 = 6;
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



/* MethodBind* create_method_bind<Node3D, Node3D::RotationEditMode>(void
   (Node3D::*)(Node3D::RotationEditMode)) */

MethodBind *
create_method_bind<Node3D,Node3D::RotationEditMode>(_func_void_RotationEditMode *param_1)

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
  *(_func_void_RotationEditMode **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00129c68;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "Node3D";
  local_30 = 6;
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



/* MethodBind* create_method_bind<Node3D, Node3D::RotationEditMode>(Node3D::RotationEditMode
   (Node3D::*)() const) */

MethodBind * create_method_bind<Node3D,Node3D::RotationEditMode>(_func_RotationEditMode *param_1)

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
  *(_func_RotationEditMode **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00129cc8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "Node3D";
  local_30 = 6;
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



/* MethodBind* create_method_bind<Node3D, Quaternion const&>(void (Node3D::*)(Quaternion const&)) */

MethodBind * create_method_bind<Node3D,Quaternion_const&>(_func_void_Quaternion_ptr *param_1)

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
  *(_func_void_Quaternion_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00129d28;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "Node3D";
  local_30 = 6;
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



/* MethodBind* create_method_bind<Node3D, Quaternion>(Quaternion (Node3D::*)() const) */

MethodBind * create_method_bind<Node3D,Quaternion>(_func_Quaternion *param_1)

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
  *(_func_Quaternion **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00129d88;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "Node3D";
  local_30 = 6;
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



/* MethodBind* create_method_bind<Node3D, Basis const&>(void (Node3D::*)(Basis const&)) */

MethodBind * create_method_bind<Node3D,Basis_const&>(_func_void_Basis_ptr *param_1)

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
  *(_func_void_Basis_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00129de8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "Node3D";
  local_30 = 6;
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



/* MethodBind* create_method_bind<Node3D, Basis>(Basis (Node3D::*)() const) */

MethodBind * create_method_bind<Node3D,Basis>(_func_Basis *param_1)

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
  *(_func_Basis **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00129e48;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "Node3D";
  local_30 = 6;
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



/* MethodBind* create_method_bind<Node3D, Transform3D>(Transform3D (Node3D::*)()) */

MethodBind * create_method_bind<Node3D,Transform3D>(_func_Transform3D *param_1)

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
  *(_func_Transform3D **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00129ea8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "Node3D";
  local_30 = 6;
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



/* MethodBind* create_method_bind<Node3D, Node3D*>(Node3D* (Node3D::*)() const) */

MethodBind * create_method_bind<Node3D,Node3D*>(_func_Node3D_ptr *param_1)

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
  *(_func_Node3D_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00129f08;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "Node3D";
  local_30 = 6;
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



/* MethodBind* create_method_bind<Node3D, bool>(void (Node3D::*)(bool)) */

MethodBind * create_method_bind<Node3D,bool>(_func_void_bool *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_00129f68;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "Node3D";
  local_30 = 6;
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



/* MethodBind* create_method_bind<Node3D, bool>(bool (Node3D::*)() const) */

MethodBind * create_method_bind<Node3D,bool>(_func_bool *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_00129fc8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "Node3D";
  local_30 = 6;
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



/* MethodBind* create_method_bind<Node3D, Ref<World3D>>(Ref<World3D> (Node3D::*)() const) */

MethodBind * create_method_bind<Node3D,Ref<World3D>>(_func_Ref *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_0012a028;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "Node3D";
  local_30 = 6;
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



/* MethodBind* create_method_bind<Node3D>(void (Node3D::*)()) */

MethodBind * create_method_bind<Node3D>(_func_void *param_1)

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
  *(_func_void **)(this + 0x58) = param_1;
  *(undefined8 *)(this + 0x60) = in_RSI;
  *(undefined ***)this = &PTR__gen_argument_type_0012a088;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "Node3D";
  local_30 = 6;
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



/* MethodBind* create_method_bind<Node3D, NodePath const&>(void (Node3D::*)(NodePath const&)) */

MethodBind * create_method_bind<Node3D,NodePath_const&>(_func_void_NodePath_ptr *param_1)

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
  *(_func_void_NodePath_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012a0e8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "Node3D";
  local_30 = 6;
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



/* MethodBind* create_method_bind<Node3D, NodePath>(NodePath (Node3D::*)() const) */

MethodBind * create_method_bind<Node3D,NodePath>(_func_NodePath *param_1)

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
  *(_func_NodePath **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012a148;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "Node3D";
  local_30 = 6;
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



/* MethodBind* create_method_bind<Node3D, Ref<Node3DGizmo> >(void (Node3D::*)(Ref<Node3DGizmo>)) */

MethodBind * create_method_bind<Node3D,Ref<Node3DGizmo>>(_func_void_Ref *param_1)

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
  *(_func_void_Ref **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012a1a8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "Node3D";
  local_30 = 6;
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



/* MethodBind* create_method_bind<Node3D, TypedArray<Node3DGizmo>>(TypedArray<Node3DGizmo>
   (Node3D::*)() const) */

MethodBind * create_method_bind<Node3D,TypedArray<Node3DGizmo>>(_func_TypedArray *param_1)

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
  *(_func_TypedArray **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012a208;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "Node3D";
  local_30 = 6;
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



/* MethodBind* create_method_bind<Node3D, Ref<Node3DGizmo>, int, Transform3D>(void
   (Node3D::*)(Ref<Node3DGizmo>, int, Transform3D)) */

MethodBind *
create_method_bind<Node3D,Ref<Node3DGizmo>,int,Transform3D>(_func_void_Ref_int_Transform3D *param_1)

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
  *(_func_void_Ref_int_Transform3D **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012a268;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 3;
  local_40 = 0;
  local_38 = "Node3D";
  local_30 = 6;
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



/* MethodBind* create_method_bind<Node3D, Vector3 const&, float>(void (Node3D::*)(Vector3 const&,
   float)) */

MethodBind * create_method_bind<Node3D,Vector3_const&,float>(_func_void_Vector3_ptr_float *param_1)

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
  *(_func_void_Vector3_ptr_float **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012a2c8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "Node3D";
  local_30 = 6;
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



/* MethodBind* create_method_bind<Node3D, float>(void (Node3D::*)(float)) */

MethodBind * create_method_bind<Node3D,float>(_func_void_float *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_0012a328;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "Node3D";
  local_30 = 6;
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



/* MethodBind* create_method_bind<Node3D, Vector3 const&, Vector3 const&, bool>(void
   (Node3D::*)(Vector3 const&, Vector3 const&, bool)) */

MethodBind *
create_method_bind<Node3D,Vector3_const&,Vector3_const&,bool>
          (_func_void_Vector3_ptr_Vector3_ptr_bool *param_1)

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
  *(_func_void_Vector3_ptr_Vector3_ptr_bool **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012a388;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 3;
  local_40 = 0;
  local_38 = "Node3D";
  local_30 = 6;
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



/* MethodBind* create_method_bind<Node3D, Vector3 const&, Vector3 const&, Vector3 const&, bool>(void
   (Node3D::*)(Vector3 const&, Vector3 const&, Vector3 const&, bool)) */

MethodBind *
create_method_bind<Node3D,Vector3_const&,Vector3_const&,Vector3_const&,bool>
          (_func_void_Vector3_ptr_Vector3_ptr_Vector3_ptr_bool *param_1)

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
  *(_func_void_Vector3_ptr_Vector3_ptr_Vector3_ptr_bool **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012a3e8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 4;
  local_40 = 0;
  local_38 = "Node3D";
  local_30 = 6;
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



/* MethodBind* create_method_bind<Node3D, Vector3, Vector3>(Vector3 (Node3D::*)(Vector3) const) */

MethodBind * create_method_bind<Node3D,Vector3,Vector3>(_func_Vector3_Vector3 *param_1)

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
  *(_func_Vector3_Vector3 **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012a448;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "Node3D";
  local_30 = 6;
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



/* Node3D::_bind_methods() [clone .cold] */

void Node3D::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CowData<Ref<Node3DGizmo> >::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Ref<Node3DGizmo>>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* Node3D::_initialize_classv() */

void Node3D::_initialize_classv(void)

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
  if (initialize_class()::initialized == '\0') {
    if (Node::initialize_class()::initialized == '\0') {
      Object::initialize_class();
      local_58 = 0;
      local_40 = 6;
      local_48 = "Object";
      String::parse_latin1((StrRange *)&local_58);
      StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
      local_48 = "Node";
      local_60 = 0;
      local_40 = 4;
      String::parse_latin1((StrRange *)&local_60);
      StringName::StringName((StringName *)&local_48,(String *)&local_60,false);
      ClassDB::_add_class2((StringName *)&local_48,(StringName *)&local_50);
      if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_50 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      if ((code *)PTR__bind_methods_00132018 != Object::_bind_methods) {
        Node::_bind_methods();
      }
      Node::initialize_class()::initialized = '\x01';
    }
    local_48 = "Node";
    local_58 = 0;
    local_40 = 4;
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "Node3D";
    local_60 = 0;
    local_40 = 6;
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
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CowData<Ref<Node3DGizmo> >::_unref() */

void __thiscall CowData<Ref<Node3DGizmo>>::_unref(CowData<Ref<Node3DGizmo>> *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  code *pcVar4;
  char cVar5;
  long *plVar6;
  long lVar7;
  
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
  plVar1 = *(long **)this;
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  lVar2 = plVar1[-1];
  *(undefined8 *)this = 0;
  if (lVar2 != 0) {
    lVar7 = 0;
    plVar6 = plVar1;
LAB_0011a00d:
    do {
      if (*plVar6 != 0) {
        cVar5 = RefCounted::unreference();
        if (cVar5 != '\0') {
          pOVar3 = (Object *)*plVar6;
          cVar5 = predelete_handler(pOVar3);
          if (cVar5 != '\0') {
            lVar7 = lVar7 + 1;
            plVar6 = plVar6 + 1;
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
            if (lVar2 == lVar7) break;
            goto LAB_0011a00d;
          }
        }
      }
      lVar7 = lVar7 + 1;
      plVar6 = plVar6 + 1;
    } while (lVar2 != lVar7);
  }
  Memory::free_static(plVar1 + -2,false);
  return;
}



/* Node3D::_notificationv(int, bool) */

void __thiscall Node3D::_notificationv(Node3D *this,int param_1,bool param_2)

{
  if (!param_2) {
    if ((code *)PTR__notification_00132020 != Object::_notification) {
      Node::_notification((int)this);
    }
    _notification(this,param_1);
    return;
  }
  _notification(this,param_1);
  if ((code *)PTR__notification_00132020 != Object::_notification) {
    Node::_notification((int)this);
    return;
  }
  return;
}



/* CowData<Ref<Node3DGizmo> >::_realloc(long) */

undefined8 __thiscall
CowData<Ref<Node3DGizmo>>::_realloc(CowData<Ref<Node3DGizmo>> *this,long param_1)

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
/* Error CowData<Ref<Node3DGizmo> >::resize<false>(long) */

undefined8 __thiscall
CowData<Ref<Node3DGizmo>>::resize<false>(CowData<Ref<Node3DGizmo>> *this,long param_1)

{
  long *plVar1;
  Object *pOVar2;
  code *pcVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  
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
    lVar7 = 0;
    lVar8 = 0;
  }
  else {
    lVar7 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar7) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar8 = lVar7 * 8;
    if (lVar8 != 0) {
      uVar9 = lVar8 - 1U | lVar8 - 1U >> 1;
      uVar9 = uVar9 | uVar9 >> 2;
      uVar9 = uVar9 | uVar9 >> 4;
      uVar9 = uVar9 | uVar9 >> 8;
      uVar9 = uVar9 | uVar9 >> 0x10;
      lVar8 = (uVar9 | uVar9 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 == 0) {
LAB_0011a4f0:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar9 = param_1 * 8 - 1;
  uVar9 = uVar9 >> 1 | uVar9;
  uVar9 = uVar9 | uVar9 >> 2;
  uVar9 = uVar9 | uVar9 >> 4;
  uVar9 = uVar9 | uVar9 >> 8;
  uVar9 = uVar9 | uVar9 >> 0x10;
  uVar9 = uVar9 | uVar9 >> 0x20;
  lVar11 = uVar9 + 1;
  if (lVar11 == 0) goto LAB_0011a4f0;
  if (param_1 <= lVar7) {
    lVar7 = *(long *)this;
    uVar9 = param_1;
    while (lVar7 != 0) {
      if (*(ulong *)(lVar7 + -8) <= uVar9) {
LAB_0011a39a:
        if (lVar11 != lVar8) {
          uVar5 = _realloc(this,lVar11);
          if ((int)uVar5 != 0) {
            return uVar5;
          }
          lVar7 = *(long *)this;
          if (lVar7 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
        }
        *(long *)(lVar7 + -8) = param_1;
        return 0;
      }
      while (plVar1 = (long *)(lVar7 + uVar9 * 8), *plVar1 == 0) {
        uVar9 = uVar9 + 1;
        if (*(ulong *)(lVar7 + -8) <= uVar9) goto LAB_0011a39a;
      }
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
        pOVar2 = (Object *)*plVar1;
        cVar4 = predelete_handler(pOVar2);
        if (cVar4 != '\0') {
          (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
          Memory::free_static(pOVar2,false);
        }
      }
      uVar9 = uVar9 + 1;
      lVar7 = *(long *)this;
    }
    goto LAB_0011a360;
  }
  if (lVar11 == lVar8) {
LAB_0011a46b:
    puVar10 = *(undefined8 **)this;
    if (puVar10 == (undefined8 *)0x0) {
LAB_0011a360:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar7 = puVar10[-1];
    if (param_1 <= lVar7) goto LAB_0011a44b;
  }
  else {
    if (lVar7 != 0) {
      uVar5 = _realloc(this,lVar11);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      goto LAB_0011a46b;
    }
    puVar6 = (undefined8 *)Memory::alloc_static(uVar9 + 0x11,false);
    if (puVar6 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar10 = puVar6 + 2;
    *puVar6 = 1;
    puVar6[1] = 0;
    *(undefined8 **)this = puVar10;
    lVar7 = 0;
  }
  memset(puVar10 + lVar7,0,(param_1 - lVar7) * 8);
LAB_0011a44b:
  puVar10[-1] = param_1;
  return 0;
}



/* WARNING: Removing unreachable block (ram,0x0011a668) */
/* WARNING: Removing unreachable block (ram,0x0011a7fd) */
/* WARNING: Removing unreachable block (ram,0x0011a809) */
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



/* MethodBindTRC<Vector3, Vector3>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Vector3,Vector3>::validated_call
          (MethodBindTRC<Vector3,Vector3> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
  undefined1 auVar4 [12];
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
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
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_58,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      lVar1 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar3 = (long *)(local_60 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011a996;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  auVar4 = (*pcVar2)(*(undefined8 *)(*param_2 + 8),*(undefined4 *)(*param_2 + 0x10),
                     param_1 + *(long *)(this + 0x60));
  *(undefined1 (*) [12])(param_3 + 8) = auVar4;
LAB_0011a996:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector3, Vector3>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Vector3,Vector3>::ptrcall
          (MethodBindTRC<Vector3,Vector3> *this,Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
  undefined1 auVar4 [12];
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
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
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_58,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      lVar1 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar3 = (long *)(local_60 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011aba5;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  auVar4 = (*pcVar2)(**param_2,*(undefined4 *)((long)*param_2 + 8),param_1 + *(long *)(this + 0x60))
  ;
  *(undefined1 (*) [12])param_3 = auVar4;
LAB_0011aba5:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector3 const&, Vector3 const&, Vector3 const&, bool>::validated_call(Object*,
   Variant const**, Variant*) const */

void MethodBindT<Vector3_const&,Vector3_const&,Vector3_const&,bool>::validated_call
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
      local_40 = 0x35;
      local_50 = 0;
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
      goto LAB_0011af2f;
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
                    /* WARNING: Could not recover jumptable at 0x0011addc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8,
               *(long *)(param_3 + 8) + 8,*(long *)(param_3 + 0x10) + 8,
               *(undefined1 *)(*(long *)(param_3 + 0x18) + 8));
    return;
  }
LAB_0011af2f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector3 const&, Vector3 const&, Vector3 const&, bool>::ptrcall(Object*, void const**,
   void*) const */

void MethodBindT<Vector3_const&,Vector3_const&,Vector3_const&,bool>::ptrcall
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
      goto LAB_0011b129;
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
                    /* WARNING: Could not recover jumptable at 0x0011afb3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3,
               *(undefined8 *)((long)param_3 + 8),*(undefined8 *)((long)param_3 + 0x10),
               **(char **)((long)param_3 + 0x18) != '\0');
    return;
  }
LAB_0011b129:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector3 const&, Vector3 const&, bool>::validated_call(Object*, Variant const**,
   Variant*) const */

void MethodBindT<Vector3_const&,Vector3_const&,bool>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  long *plVar1;
  char *pcVar2;
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar3;
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
      pVVar3 = param_2[0x23];
      if (pVVar3 == (Variant *)0x0) {
        pVVar3 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar3 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_48 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0011b31a;
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
                    /* WARNING: Could not recover jumptable at 0x0011b1a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8,
               *(long *)(param_3 + 8) + 8,*(undefined1 *)(*(long *)(param_3 + 0x10) + 8));
    return;
  }
LAB_0011b31a:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector3 const&, Vector3 const&, bool>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Vector3_const&,Vector3_const&,bool>::ptrcall
               (Object *param_1,void **param_2,void *param_3)

{
  char *pcVar1;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar2;
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
      plVar2 = (long *)param_2[0x23];
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar2 = (long *)((long)param_2[1] + 0x20);
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
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      pcVar1 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar2 = (long *)(local_48 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar1 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0011b524;
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
                    /* WARNING: Could not recover jumptable at 0x0011b38d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3,
               *(undefined8 *)((long)param_3 + 8),**(char **)((long)param_3 + 0x10) != '\0');
    return;
  }
LAB_0011b524:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<float>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<float>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  long *plVar1;
  long lVar2;
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar3;
  long in_FS_OFFSET;
  undefined1 auVar4 [16];
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar3 = param_2[0x23];
      if (pVVar3 == (Variant *)0x0) {
        pVVar3 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar3 = param_2[1] + 0x20;
    }
    if (local_38 == *(char **)pVVar3) {
      if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0;
      local_30 = 0x35;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
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
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0011b722;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar4._4_12_ = SUB1612((undefined1  [16])0x0,4);
    auVar4._0_4_ = (float)*(double *)(*(long *)param_3 + 8);
                    /* WARNING: Could not recover jumptable at 0x0011b58e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(auVar4._0_8_,(long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0011b722:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<float>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<float>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar2;
  long in_FS_OFFSET;
  undefined1 auVar3 [16];
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar2 = (long *)param_2[0x23];
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar2 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_38 == (char *)*plVar2) {
      if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0;
      local_30 = 0x35;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
      lVar1 = local_40;
      if (local_40 != 0) {
        LOCK();
        plVar2 = (long *)(local_40 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          local_40 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0011b922;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
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
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar3._4_12_ = SUB1612((undefined1  [16])0x0,4);
    auVar3._0_4_ = (float)**param_3;
                    /* WARNING: Could not recover jumptable at 0x0011b78d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(auVar3._0_8_,(long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0011b922:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector3 const&, float>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Vector3_const&,float>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  long *plVar1;
  char *pcVar2;
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar3;
  long in_FS_OFFSET;
  undefined1 auVar4 [16];
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
      pVVar3 = param_2[0x23];
      if (pVVar3 == (Variant *)0x0) {
        pVVar3 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar3 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar3) {
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
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_48 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0011bb34;
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
    auVar4._4_12_ = SUB1612((undefined1  [16])0x0,4);
    auVar4._0_4_ = (float)*(double *)(*(long *)(param_3 + 8) + 8);
                    /* WARNING: Could not recover jumptable at 0x0011b99a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              (auVar4._0_8_,(long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8
              );
    return;
  }
LAB_0011bb34:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector3 const&, float>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Vector3_const&,float>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar2;
  long in_FS_OFFSET;
  undefined1 auVar3 [16];
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar2 = (long *)param_2[0x23];
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar2 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_38 == (char *)*plVar2) {
      if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0;
      local_30 = 0x35;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
      lVar1 = local_40;
      if (local_40 != 0) {
        LOCK();
        plVar2 = (long *)(local_40 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          local_40 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0011bd3a;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Load size is inaccurate */
    auVar3._4_12_ = SUB1612((undefined1  [16])0x0,4);
    auVar3._0_4_ = (float)**(double **)((long)param_3 + 8);
                    /* WARNING: Could not recover jumptable at 0x0011bba1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              (auVar3._0_8_,(long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3);
    return;
  }
LAB_0011bd3a:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<TypedArray<Node3DGizmo>>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindTRC<TypedArray<Node3DGizmo>>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  char *pcVar3;
  Variant *pVVar4;
  long *plVar5;
  undefined4 in_register_00000014;
  long *plVar6;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar6 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar6 != (long *)0x0) && (plVar6[1] != 0)) && (*(char *)(plVar6[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar6[1] == 0) {
      plVar5 = (long *)plVar6[0x23];
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*plVar6 + 0x40))(plVar6);
      }
    }
    else {
      plVar5 = (long *)(plVar6[1] + 0x20);
    }
    if (local_58 == (char *)*plVar5) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC169,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      pcVar3 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar6 = (long *)(local_58 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar6 = (long *)(local_60 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011bea0;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar4 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar4 & 1) != 0) {
        pVVar4 = *(Variant **)(pVVar4 + *(long *)((long)plVar6 + (long)pVVar1) + -1);
      }
      (*(code *)pVVar4)((Array *)&local_58);
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
LAB_0011bea0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<NodePath>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<NodePath>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  char *pcVar3;
  Variant *pVVar4;
  long *plVar5;
  undefined4 in_register_00000014;
  long *plVar6;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar6 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar6 != (long *)0x0) && (plVar6[1] != 0)) && (*(char *)(plVar6[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar6[1] == 0) {
      plVar5 = (long *)plVar6[0x23];
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*plVar6 + 0x40))(plVar6);
      }
    }
    else {
      plVar5 = (long *)(plVar6[1] + 0x20);
    }
    if (local_58 == (char *)*plVar5) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC169,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      pcVar3 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar6 = (long *)(local_58 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar6 = (long *)(local_60 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011c190;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar4 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar4 & 1) != 0) {
        pVVar4 = *(Variant **)(pVVar4 + *(long *)((long)plVar6 + (long)pVVar1) + -1);
      }
      (*(code *)pVVar4)((NodePath *)&local_58);
      Variant::Variant((Variant *)local_48,(NodePath *)&local_58);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
      NodePath::~NodePath((NodePath *)&local_58);
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
LAB_0011c190:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<NodePath>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<NodePath>::validated_call
          (MethodBindTRC<NodePath> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  Variant **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  Variant **local_48;
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
    if (local_48 == (Variant **)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Variant **)0x11a858;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((NodePath *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(NodePath *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
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
      goto LAB_0011c409;
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
  (*pcVar2)((NodePath *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  NodePath::operator=((NodePath *)(param_3 + 8),(NodePath *)&local_48);
  NodePath::~NodePath((NodePath *)&local_48);
LAB_0011c409:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<NodePath>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<NodePath>::ptrcall
          (MethodBindTRC<NodePath> *this,Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  void **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  void **local_48;
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
    if (local_48 == (void **)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (void **)0x11a858;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((NodePath *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(NodePath *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
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
      goto LAB_0011c5fa;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    param_2 = *(void ***)(param_1 + *(long *)(this + 0x60));
    pcVar2 = *(code **)(pcVar2 + (long)param_2 + -1);
  }
  (*pcVar2)((NodePath *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  NodePath::operator=((NodePath *)param_3,(NodePath *)&local_48);
  NodePath::~NodePath((NodePath *)&local_48);
LAB_0011c5fa:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<NodePath const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<NodePath_const&>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  long *plVar1;
  long lVar2;
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar3;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar3 = param_2[0x23];
      if (pVVar3 == (Variant *)0x0) {
        pVVar3 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar3 = param_2[1] + 0x20;
    }
    if (local_38 == *(char **)pVVar3) {
      if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0;
      local_30 = 0x35;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
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
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0011c982;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0011c7e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8);
    return;
  }
LAB_0011c982:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<NodePath const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<NodePath_const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  char *pcVar1;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar2;
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
      plVar2 = (long *)param_2[0x23];
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar2 = (long *)((long)param_2[1] + 0x20);
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
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      pcVar1 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar2 = (long *)(local_48 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar1 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0011cb84;
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
                    /* WARNING: Could not recover jumptable at 0x0011c9e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3);
    return;
  }
LAB_0011cb84:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  char *pcVar3;
  Variant *pVVar4;
  long *plVar5;
  undefined4 in_register_00000014;
  long *plVar6;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  plVar6 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar6 != (long *)0x0) && (plVar6[1] != 0)) && (*(char *)(plVar6[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (plVar6[1] == 0) {
      plVar5 = (long *)plVar6[0x23];
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*plVar6 + 0x40))(plVar6);
      }
    }
    else {
      plVar5 = (long *)(plVar6[1] + 0x20);
    }
    if (local_48 == (char *)*plVar5) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC169,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      pcVar3 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar6 = (long *)(local_48 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar6 = (long *)(local_50 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011ccb0;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar4 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar4 & 1) != 0) {
        pVVar4 = *(Variant **)(pVVar4 + *(long *)((long)plVar6 + (long)pVVar1) + -1);
      }
      (*(code *)pVVar4)();
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
LAB_0011ccb0:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  long *plVar1;
  long lVar2;
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar3;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar3 = param_2[0x23];
      if (pVVar3 == (Variant *)0x0) {
        pVVar3 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar3 = param_2[1] + 0x20;
    }
    if (local_38 == *(char **)pVVar3) {
      if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_30 = 0x35;
      local_40 = 0;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
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
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0011d088;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0011cf12. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0011d088:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar2;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar2 = (long *)param_2[0x23];
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar2 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_38 == (char *)*plVar2) {
      if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_30 = 0x35;
      local_40 = 0;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
      lVar1 = local_40;
      if (local_40 != 0) {
        LOCK();
        plVar2 = (long *)(local_40 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          local_40 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0011d258;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0011d0e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0011d258:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<bool>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  char *pcVar3;
  bool bVar4;
  long *plVar6;
  undefined4 in_register_00000014;
  long *plVar7;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  Variant *pVVar5;
  
  plVar7 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar7 != (long *)0x0) && (plVar7[1] != 0)) && (*(char *)(plVar7[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar7[1] == 0) {
      plVar6 = (long *)plVar7[0x23];
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)(**(code **)(*plVar7 + 0x40))(plVar7);
      }
    }
    else {
      plVar6 = (long *)(plVar7[1] + 0x20);
    }
    if (local_58 == (char *)*plVar6) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC169,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      pcVar3 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar7 = (long *)(local_58 + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar7 = (long *)(local_60 + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011d320;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar5 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar5 & 1) != 0) {
        pVVar5 = *(Variant **)(pVVar5 + *(long *)((long)plVar7 + (long)pVVar1) + -1);
      }
      bVar4 = (bool)(*(code *)pVVar5)();
      Variant::Variant((Variant *)local_48,bVar4);
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
LAB_0011d320:
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
  long lVar1;
  Variant VVar2;
  long *plVar4;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar3;
  
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
    if (local_48 == (char *)*plVar4) {
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
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar4 = (long *)(local_50 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011d582;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  VVar2 = (Variant)(*pcVar3)(param_1 + *(long *)(this + 0x60));
  param_3[8] = VVar2;
LAB_0011d582:
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
  long lVar1;
  undefined1 uVar2;
  long *plVar4;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar3;
  
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
    if (local_48 == (char *)*plVar4) {
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
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar4 = (long *)(local_50 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011d761;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar2 = (*pcVar3)(param_1 + *(long *)(this + 0x60));
  *(undefined1 *)param_3 = uVar2;
LAB_0011d761:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<bool>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<bool>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  long *plVar1;
  char *pcVar2;
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar3;
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
      pVVar3 = param_2[0x23];
      if (pVVar3 == (Variant *)0x0) {
        pVVar3 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar3 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar3) {
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
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_48 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0011dae4;
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
                    /* WARNING: Could not recover jumptable at 0x0011d94d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined1 *)(*(long *)param_3 + 8));
    return;
  }
LAB_0011dae4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<bool>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<bool>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  char *pcVar1;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar2;
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
      plVar2 = (long *)param_2[0x23];
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar2 = (long *)((long)param_2[1] + 0x20);
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
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      pcVar1 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar2 = (long *)(local_48 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar1 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0011dcec;
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
                    /* WARNING: Could not recover jumptable at 0x0011db52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3 != '\0');
    return;
  }
LAB_0011dcec:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Node3D*>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<Node3D*>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  char *pcVar3;
  Object *pOVar4;
  long *plVar6;
  undefined4 in_register_00000014;
  long *plVar7;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  Variant *pVVar5;
  
  plVar7 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar7 != (long *)0x0) && (plVar7[1] != 0)) && (*(char *)(plVar7[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar7[1] == 0) {
      plVar6 = (long *)plVar7[0x23];
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)(**(code **)(*plVar7 + 0x40))(plVar7);
      }
    }
    else {
      plVar6 = (long *)(plVar7[1] + 0x20);
    }
    if (local_58 == (char *)*plVar6) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC169,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      pcVar3 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar7 = (long *)(local_58 + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar7 = (long *)(local_60 + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011ddc0;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar5 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar5 & 1) != 0) {
        pVVar5 = *(Variant **)(pVVar5 + *(long *)((long)plVar7 + (long)pVVar1) + -1);
      }
      pOVar4 = (Object *)(*(code *)pVVar5)();
      Variant::Variant((Variant *)local_48,pOVar4);
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
LAB_0011ddc0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Transform3D>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTR<Transform3D>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  char *pcVar3;
  Variant *pVVar4;
  long *plVar5;
  undefined4 in_register_00000014;
  long *plVar6;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_a8;
  long local_a0;
  char *local_98;
  undefined8 local_90;
  undefined4 local_88 [2];
  undefined8 local_80;
  undefined8 uStack_78;
  Transform3D local_68 [56];
  long local_30;
  
  plVar6 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar6 != (long *)0x0) && (plVar6[1] != 0)) && (*(char *)(plVar6[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_98,(StringName *)(param_2 + 3));
    if (plVar6[1] == 0) {
      plVar5 = (long *)plVar6[0x23];
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*plVar6 + 0x40))(plVar6);
      }
    }
    else {
      plVar5 = (long *)(plVar6[1] + 0x20);
    }
    if (local_98 == (char *)*plVar5) {
      if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_98 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_a0 = 0;
      local_90 = 0x35;
      String::parse_latin1((StrRange *)&local_a0);
      vformat<StringName>((StringName *)&local_98,(StrRange *)&local_a0,&local_a8);
      _err_print_error(&_LC169,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_98,0,0);
      pcVar3 = local_98;
      if (local_98 != (char *)0x0) {
        LOCK();
        plVar6 = (long *)(local_98 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_98 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_a0;
      if (local_a0 != 0) {
        LOCK();
        plVar6 = (long *)(local_a0 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_a0 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_a8 != 0)) {
        StringName::unref();
      }
      goto LAB_0011e0b0;
    }
    if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar4 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar4 & 1) != 0) {
        pVVar4 = *(Variant **)(pVVar4 + *(long *)((long)plVar6 + (long)pVVar1) + -1);
      }
      (*(code *)pVVar4)(local_68);
      Variant::Variant((Variant *)local_88,local_68);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_88[0];
      *(undefined8 *)(param_1 + 8) = local_80;
      *(undefined8 *)(param_1 + 0x10) = uStack_78;
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
LAB_0011e0b0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Transform3D>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTR<Transform3D>::validated_call
          (MethodBindTR<Transform3D> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  long *plVar3;
  Variant **extraout_RDX;
  long in_FS_OFFSET;
  long local_88;
  undefined8 local_80;
  Variant **local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_78,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_78 == (Variant **)*plVar3) {
      if ((StringName::configured != '\0') && (local_78 != (Variant **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_78 = (Variant **)0x11a858;
      local_70 = 0x35;
      local_80 = 0;
      String::parse_latin1((StrRange *)&local_80);
      vformat<StringName>((StringName *)&local_78,(StrRange *)&local_80,&local_88);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_78,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      if ((StringName::configured != '\0') && (local_88 != 0)) {
        StringName::unref();
      }
      goto LAB_0011e334;
    }
    param_2 = local_78;
    if ((StringName::configured != '\0') && (local_78 != (Variant **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    param_2 = *(Variant ***)(param_1 + *(long *)(this + 0x60));
    pcVar2 = *(code **)(pcVar2 + (long)param_2 + -1);
  }
  (*pcVar2)(&local_68,param_1 + *(long *)(this + 0x60),param_2);
  puVar1 = *(undefined8 **)(param_3 + 8);
  *puVar1 = local_68;
  puVar1[1] = uStack_60;
  puVar1[2] = local_58;
  puVar1[3] = uStack_50;
  puVar1[4] = local_48;
  puVar1[5] = uStack_40;
LAB_0011e334:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Transform3D>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<Transform3D>::ptrcall
          (MethodBindTR<Transform3D> *this,Object *param_1,void **param_2,void *param_3)

{
  code *pcVar1;
  long *plVar2;
  void **extraout_RDX;
  long in_FS_OFFSET;
  long local_88;
  undefined8 local_80;
  void **local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_78,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_78 == (void **)*plVar2) {
      if ((StringName::configured != '\0') && (local_78 != (void **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_78 = (void **)0x11a858;
      local_70 = 0x35;
      local_80 = 0;
      String::parse_latin1((StrRange *)&local_80);
      vformat<StringName>((StringName *)&local_78,(StrRange *)&local_80,&local_88);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_78,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      if ((StringName::configured != '\0') && (local_88 != 0)) {
        StringName::unref();
      }
      goto LAB_0011e502;
    }
    param_2 = local_78;
    if ((StringName::configured != '\0') && (local_78 != (void **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    param_2 = *(void ***)(param_1 + *(long *)(this + 0x60));
    pcVar1 = *(code **)(pcVar1 + (long)param_2 + -1);
  }
  (*pcVar1)(&local_68,param_1 + *(long *)(this + 0x60),param_2);
  *(undefined8 *)param_3 = local_68;
  *(undefined8 *)((long)param_3 + 8) = uStack_60;
  *(undefined8 *)((long)param_3 + 0x10) = local_58;
  *(undefined8 *)((long)param_3 + 0x18) = uStack_50;
  *(undefined8 *)((long)param_3 + 0x20) = local_48;
  *(undefined8 *)((long)param_3 + 0x28) = uStack_40;
LAB_0011e502:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Basis>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<Basis>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  char *pcVar3;
  Variant *pVVar4;
  long *plVar5;
  undefined4 in_register_00000014;
  long *plVar6;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_98;
  long local_90;
  char *local_88;
  undefined8 local_80;
  undefined4 local_78 [2];
  undefined8 local_70;
  undefined8 uStack_68;
  Basis local_58 [40];
  long local_30;
  
  plVar6 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar6 != (long *)0x0) && (plVar6[1] != 0)) && (*(char *)(plVar6[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_88,(StringName *)(param_2 + 3));
    if (plVar6[1] == 0) {
      plVar5 = (long *)plVar6[0x23];
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*plVar6 + 0x40))(plVar6);
      }
    }
    else {
      plVar5 = (long *)(plVar6[1] + 0x20);
    }
    if (local_88 == (char *)*plVar5) {
      if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_88 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_90 = 0;
      local_80 = 0x35;
      String::parse_latin1((StrRange *)&local_90);
      vformat<StringName>((StringName *)&local_88,(StrRange *)&local_90,&local_98);
      _err_print_error(&_LC169,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_88,0,0);
      pcVar3 = local_88;
      if (local_88 != (char *)0x0) {
        LOCK();
        plVar6 = (long *)(local_88 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_88 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_90;
      if (local_90 != 0) {
        LOCK();
        plVar6 = (long *)(local_90 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_90 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_98 != 0)) {
        StringName::unref();
      }
      goto LAB_0011e740;
    }
    if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar4 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar4 & 1) != 0) {
        pVVar4 = *(Variant **)(pVVar4 + *(long *)((long)plVar6 + (long)pVVar1) + -1);
      }
      (*(code *)pVVar4)(local_58);
      Variant::Variant((Variant *)local_78,local_58);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_78[0];
      *(undefined8 *)(param_1 + 8) = local_70;
      *(undefined8 *)(param_1 + 0x10) = uStack_68;
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
LAB_0011e740:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Basis>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Basis>::validated_call
          (MethodBindTRC<Basis> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  long *plVar3;
  Variant **extraout_RDX;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  Variant **local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_68 == (Variant **)*plVar3) {
      if ((StringName::configured != '\0') && (local_68 != (Variant **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = (Variant **)0x11a858;
      local_60 = 0x35;
      local_70 = 0;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_0011e9c1;
    }
    param_2 = local_68;
    if ((StringName::configured != '\0') && (local_68 != (Variant **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    param_2 = *(Variant ***)(param_1 + *(long *)(this + 0x60));
    pcVar2 = *(code **)(pcVar2 + (long)param_2 + -1);
  }
  (*pcVar2)(&local_58,param_1 + *(long *)(this + 0x60),param_2);
  puVar1 = *(undefined8 **)(param_3 + 8);
  *(undefined4 *)(puVar1 + 4) = local_38;
  *puVar1 = local_58;
  puVar1[1] = uStack_50;
  puVar1[2] = local_48;
  puVar1[3] = uStack_40;
LAB_0011e9c1:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Basis>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Basis>::ptrcall
          (MethodBindTRC<Basis> *this,Object *param_1,void **param_2,void *param_3)

{
  code *pcVar1;
  long *plVar2;
  void **extraout_RDX;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  void **local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_68 == (void **)*plVar2) {
      if ((StringName::configured != '\0') && (local_68 != (void **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = (void **)0x11a858;
      local_60 = 0x35;
      local_70 = 0;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_0011eb8f;
    }
    param_2 = local_68;
    if ((StringName::configured != '\0') && (local_68 != (void **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    param_2 = *(void ***)(param_1 + *(long *)(this + 0x60));
    pcVar1 = *(code **)(pcVar1 + (long)param_2 + -1);
  }
  (*pcVar1)(&local_58,param_1 + *(long *)(this + 0x60),param_2);
  *(undefined4 *)((long)param_3 + 0x20) = local_38;
  *(undefined8 *)param_3 = local_58;
  *(undefined8 *)((long)param_3 + 8) = uStack_50;
  *(undefined8 *)((long)param_3 + 0x10) = local_48;
  *(undefined8 *)((long)param_3 + 0x18) = uStack_40;
LAB_0011eb8f:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Basis const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Basis_const&>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  long *plVar1;
  long lVar2;
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar3;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar3 = param_2[0x23];
      if (pVVar3 == (Variant *)0x0) {
        pVVar3 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar3 = param_2[1] + 0x20;
    }
    if (local_38 == *(char **)pVVar3) {
      if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0;
      local_30 = 0x35;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
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
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0011eef2;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0011ed59. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined8 *)(*(long *)param_3 + 8));
    return;
  }
LAB_0011eef2:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Basis const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Basis_const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar2;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar2 = (long *)param_2[0x23];
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar2 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_38 == (char *)*plVar2) {
      if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0;
      local_30 = 0x35;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
      lVar1 = local_40;
      if (local_40 != 0) {
        LOCK();
        plVar2 = (long *)(local_40 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          local_40 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0011f0f2;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
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
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0011ef55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3);
    return;
  }
LAB_0011f0f2:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Quaternion>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<Quaternion>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  char *pcVar3;
  Variant *pVVar4;
  long *plVar5;
  undefined4 in_register_00000014;
  long *plVar6;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_78;
  long local_70;
  char *local_68;
  undefined8 local_60;
  Quaternion local_58 [16];
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar6 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar6 != (long *)0x0) && (plVar6[1] != 0)) && (*(char *)(plVar6[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar6[1] == 0) {
      plVar5 = (long *)plVar6[0x23];
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*plVar6 + 0x40))(plVar6);
      }
    }
    else {
      plVar5 = (long *)(plVar6[1] + 0x20);
    }
    if (local_68 == (char *)*plVar5) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC169,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      pcVar3 = local_68;
      if (local_68 != (char *)0x0) {
        LOCK();
        plVar6 = (long *)(local_68 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_68 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_70;
      if (local_70 != 0) {
        LOCK();
        plVar6 = (long *)(local_70 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_70 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_0011f1d0;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar4 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar4 & 1) != 0) {
        pVVar4 = *(Variant **)(pVVar4 + *(long *)((long)plVar6 + (long)pVVar1) + -1);
      }
      (*(code *)pVVar4)(local_58);
      Variant::Variant((Variant *)local_48,local_58);
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
LAB_0011f1d0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Quaternion>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Quaternion>::validated_call
          (MethodBindTRC<Quaternion> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  code *pcVar1;
  long *plVar2;
  Variant **extraout_RDX;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  Variant **local_58;
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
    if (local_58 == (Variant **)*plVar2) {
      if ((StringName::configured != '\0') && (local_58 != (Variant **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = (Variant **)0x11a858;
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
      goto LAB_0011f43d;
    }
    param_2 = local_58;
    if ((StringName::configured != '\0') && (local_58 != (Variant **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    param_2 = *(Variant ***)(param_1 + *(long *)(this + 0x60));
    pcVar1 = *(code **)(pcVar1 + (long)param_2 + -1);
  }
  (*pcVar1)(&local_48,param_1 + *(long *)(this + 0x60),param_2);
  *(undefined4 *)(param_3 + 8) = local_48;
  *(undefined4 *)(param_3 + 0xc) = uStack_44;
  *(undefined4 *)(param_3 + 0x10) = uStack_40;
  *(undefined4 *)(param_3 + 0x14) = uStack_3c;
LAB_0011f43d:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Quaternion>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Quaternion>::ptrcall
          (MethodBindTRC<Quaternion> *this,Object *param_1,void **param_2,void *param_3)

{
  code *pcVar1;
  long *plVar2;
  void **extraout_RDX;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  void **local_58;
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
    if (local_58 == (void **)*plVar2) {
      if ((StringName::configured != '\0') && (local_58 != (void **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = (void **)0x11a858;
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
      goto LAB_0011f5fc;
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
  *(undefined4 *)param_3 = local_48;
  *(undefined4 *)((long)param_3 + 4) = uStack_44;
  *(undefined4 *)((long)param_3 + 8) = uStack_40;
  *(undefined4 *)((long)param_3 + 0xc) = uStack_3c;
LAB_0011f5fc:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Quaternion const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Quaternion_const&>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  long *plVar1;
  char *pcVar2;
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar3;
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
      pVVar3 = param_2[0x23];
      if (pVVar3 == (Variant *)0x0) {
        pVVar3 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar3 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar3) {
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
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_48 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0011f964;
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
                    /* WARNING: Could not recover jumptable at 0x0011f7cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8);
    return;
  }
LAB_0011f964:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Quaternion const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Quaternion_const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  char *pcVar1;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar2;
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
      plVar2 = (long *)param_2[0x23];
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar2 = (long *)((long)param_2[1] + 0x20);
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
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      pcVar1 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar2 = (long *)(local_48 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar1 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0011fb64;
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
                    /* WARNING: Could not recover jumptable at 0x0011f9c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3);
    return;
  }
LAB_0011fb64:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Node3D::RotationEditMode>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTRC<Node3D::RotationEditMode>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  char *pcVar3;
  int iVar4;
  long *plVar6;
  undefined4 in_register_00000014;
  long *plVar7;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  Variant *pVVar5;
  
  plVar7 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar7 != (long *)0x0) && (plVar7[1] != 0)) && (*(char *)(plVar7[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar7[1] == 0) {
      plVar6 = (long *)plVar7[0x23];
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)(**(code **)(*plVar7 + 0x40))(plVar7);
      }
    }
    else {
      plVar6 = (long *)(plVar7[1] + 0x20);
    }
    if (local_58 == (char *)*plVar6) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC169,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      pcVar3 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar7 = (long *)(local_58 + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar7 = (long *)(local_60 + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011fc30;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar5 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar5 & 1) != 0) {
        pVVar5 = *(Variant **)(pVVar5 + *(long *)((long)plVar7 + (long)pVVar1) + -1);
      }
      iVar4 = (*(code *)pVVar5)();
      Variant::Variant((Variant *)local_48,iVar4);
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
LAB_0011fc30:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Node3D::RotationEditMode>::validated_call(Object*, Variant const**, Variant*) const
    */

void __thiscall
MethodBindTRC<Node3D::RotationEditMode>::validated_call
          (MethodBindTRC<Node3D::RotationEditMode> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  long lVar1;
  uint uVar2;
  long *plVar4;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar3;
  
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
    if (local_48 == (char *)*plVar4) {
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
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar4 = (long *)(local_50 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011fe94;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar2 = (*pcVar3)(param_1 + *(long *)(this + 0x60));
  *(ulong *)(param_3 + 8) = (ulong)uVar2;
LAB_0011fe94:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Node3D::RotationEditMode>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Node3D::RotationEditMode>::ptrcall
          (MethodBindTRC<Node3D::RotationEditMode> *this,Object *param_1,void **param_2,
          void *param_3)

{
  char *pcVar1;
  uint uVar2;
  long *plVar4;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar3;
  
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
    if (local_48 == (char *)*plVar4) {
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
      pcVar1 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar4 = (long *)(local_48 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar1 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00120073;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar2 = (*pcVar3)(param_1 + *(long *)(this + 0x60));
  *(ulong *)param_3 = (ulong)uVar2;
LAB_00120073:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Node3D::RotationEditMode>::validated_call(Object*, Variant const**, Variant*) const
    */

void MethodBindT<Node3D::RotationEditMode>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  long *plVar1;
  char *pcVar2;
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar3;
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
      pVVar3 = param_2[0x23];
      if (pVVar3 == (Variant *)0x0) {
        pVVar3 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar3 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar3) {
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
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_48 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00120404;
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
                    /* WARNING: Could not recover jumptable at 0x0012026c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_00120404:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Node3D::RotationEditMode>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Node3D::RotationEditMode>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar2;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar2 = (long *)param_2[0x23];
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar2 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_38 == (char *)*plVar2) {
      if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0;
      local_30 = 0x35;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
      lVar1 = local_40;
      if (local_40 != 0) {
        LOCK();
        plVar2 = (long *)(local_40 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          local_40 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00120602;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
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
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00120467. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_00120602:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<EulerOrder>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<EulerOrder>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  char *pcVar3;
  int iVar4;
  long *plVar6;
  undefined4 in_register_00000014;
  long *plVar7;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  undefined8 uStack_38;
  long local_30;
  Variant *pVVar5;
  
  plVar7 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar7 != (long *)0x0) && (plVar7[1] != 0)) && (*(char *)(plVar7[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar7[1] == 0) {
      plVar6 = (long *)plVar7[0x23];
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)(**(code **)(*plVar7 + 0x40))(plVar7);
      }
    }
    else {
      plVar6 = (long *)(plVar7[1] + 0x20);
    }
    if (local_58 == (char *)*plVar6) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC169,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      pcVar3 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar7 = (long *)(local_58 + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar7 = (long *)(local_60 + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_001206d0;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar5 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar5 & 1) != 0) {
        pVVar5 = *(Variant **)(pVVar5 + *(long *)((long)plVar7 + (long)pVVar1) + -1);
      }
      iVar4 = (*(code *)pVVar5)();
      uStack_38 = 0;
      local_40 = (long)iVar4;
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = 2;
      *(long *)(param_1 + 8) = local_40;
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
LAB_001206d0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<EulerOrder>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<EulerOrder>::validated_call
          (MethodBindTRC<EulerOrder> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  int iVar2;
  long *plVar4;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar3;
  
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
    if (local_48 == (char *)*plVar4) {
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
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar4 = (long *)(local_50 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00120934;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  iVar2 = (*pcVar3)(param_1 + *(long *)(this + 0x60));
  *(long *)(param_3 + 8) = (long)iVar2;
LAB_00120934:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<EulerOrder>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<EulerOrder>::ptrcall
          (MethodBindTRC<EulerOrder> *this,Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  int iVar2;
  long *plVar4;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar3;
  
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
    if (local_48 == (char *)*plVar4) {
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
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar4 = (long *)(local_50 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00120b13;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  iVar2 = (*pcVar3)(param_1 + *(long *)(this + 0x60));
  *(long *)param_3 = (long)iVar2;
LAB_00120b13:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<EulerOrder>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<EulerOrder>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  long *plVar1;
  long lVar2;
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar3;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar3 = param_2[0x23];
      if (pVVar3 == (Variant *)0x0) {
        pVVar3 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar3 = param_2[1] + 0x20;
    }
    if (local_38 == *(char **)pVVar3) {
      if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0;
      local_30 = 0x35;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
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
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00120ea2;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00120d08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_00120ea2:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<EulerOrder>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<EulerOrder>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar2;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar2 = (long *)param_2[0x23];
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar2 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_38 == (char *)*plVar2) {
      if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0;
      local_30 = 0x35;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
      lVar1 = local_40;
      if (local_40 != 0) {
        LOCK();
        plVar2 = (long *)(local_40 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          local_40 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_001210a2;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
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
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00120f07. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_001210a2:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector3>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<Vector3>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  long lVar4;
  char *pcVar5;
  Variant *pVVar6;
  long *plVar7;
  undefined4 in_register_00000014;
  long *plVar8;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_78;
  long local_70;
  char *local_68;
  undefined8 local_60;
  undefined1 local_54 [12];
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar8 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar8 != (long *)0x0) && (plVar8[1] != 0)) && (*(char *)(plVar8[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar8[1] == 0) {
      plVar7 = (long *)plVar8[0x23];
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)(**(code **)(*plVar8 + 0x40))(plVar8);
      }
    }
    else {
      plVar7 = (long *)(plVar8[1] + 0x20);
    }
    if (local_68 == (char *)*plVar7) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC169,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      pcVar5 = local_68;
      if (local_68 != (char *)0x0) {
        LOCK();
        plVar8 = (long *)(local_68 + -0x10);
        *plVar8 = *plVar8 + -1;
        UNLOCK();
        if (*plVar8 == 0) {
          local_68 = (char *)0x0;
          Memory::free_static(pcVar5 + -0x10,false);
        }
      }
      lVar4 = local_70;
      if (local_70 != 0) {
        LOCK();
        plVar8 = (long *)(local_70 + -0x10);
        *plVar8 = *plVar8 + -1;
        UNLOCK();
        if (*plVar8 == 0) {
          local_70 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      auVar3._8_4_ = local_54._8_4_;
      auVar3._0_8_ = local_54._0_8_;
      if ((StringName::configured != '\0') && (local_54 = auVar3, local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_00121180;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  auVar2._8_4_ = local_54._8_4_;
  auVar2._0_8_ = local_54._0_8_;
  pVVar6 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar6 & 1) != 0) {
        pVVar6 = *(Variant **)(pVVar6 + *(long *)((long)plVar8 + (long)pVVar1) + -1);
      }
      local_54 = (*(code *)pVVar6)();
      Variant::Variant((Variant *)local_48,local_54);
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
      local_54 = auVar2;
    }
  }
  else {
    *in_R9 = 3;
    in_R9[2] = 0;
  }
LAB_00121180:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector3>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Vector3>::validated_call
          (MethodBindTRC<Vector3> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  char *pcVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
  undefined1 auVar4 [12];
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
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_58 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0x35;
      local_60 = 0;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_58,0,0);
      pcVar1 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_58 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar1 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_001213eb;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  auVar4 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(undefined1 (*) [12])(param_3 + 8) = auVar4;
LAB_001213eb:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector3>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Vector3>::ptrcall
          (MethodBindTRC<Vector3> *this,Object *param_1,void **param_2,void *param_3)

{
  char *pcVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
  undefined1 auVar4 [12];
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
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_58 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0x35;
      local_60 = 0;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_58,0,0);
      pcVar1 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_58 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar1 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_001215ca;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  auVar4 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(undefined1 (*) [12])param_3 = auVar4;
LAB_001215ca:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector3 const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Vector3_const&>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  long *plVar1;
  char *pcVar2;
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar3;
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
      pVVar3 = param_2[0x23];
      if (pVVar3 == (Variant *)0x0) {
        pVVar3 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar3 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar3) {
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
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_48 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00121954;
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
                    /* WARNING: Could not recover jumptable at 0x001217bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8);
    return;
  }
LAB_00121954:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector3 const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Vector3_const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar2;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar2 = (long *)param_2[0x23];
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar2 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_38 == (char *)*plVar2) {
      if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0;
      local_30 = 0x35;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
      lVar1 = local_40;
      if (local_40 != 0) {
        LOCK();
        plVar2 = (long *)(local_40 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          local_40 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00121b52;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
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
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001219b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3);
    return;
  }
LAB_00121b52:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Transform3D>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<Transform3D>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  char *pcVar3;
  Variant *pVVar4;
  long *plVar5;
  undefined4 in_register_00000014;
  long *plVar6;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_a8;
  long local_a0;
  char *local_98;
  undefined8 local_90;
  undefined4 local_88 [2];
  undefined8 local_80;
  undefined8 uStack_78;
  Transform3D local_68 [56];
  long local_30;
  
  plVar6 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar6 != (long *)0x0) && (plVar6[1] != 0)) && (*(char *)(plVar6[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_98,(StringName *)(param_2 + 3));
    if (plVar6[1] == 0) {
      plVar5 = (long *)plVar6[0x23];
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*plVar6 + 0x40))(plVar6);
      }
    }
    else {
      plVar5 = (long *)(plVar6[1] + 0x20);
    }
    if (local_98 == (char *)*plVar5) {
      if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_98 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_a0 = 0;
      local_90 = 0x35;
      String::parse_latin1((StrRange *)&local_a0);
      vformat<StringName>((StringName *)&local_98,(StrRange *)&local_a0,&local_a8);
      _err_print_error(&_LC169,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_98,0,0);
      pcVar3 = local_98;
      if (local_98 != (char *)0x0) {
        LOCK();
        plVar6 = (long *)(local_98 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_98 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_a0;
      if (local_a0 != 0) {
        LOCK();
        plVar6 = (long *)(local_a0 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_a0 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_a8 != 0)) {
        StringName::unref();
      }
      goto LAB_00121c30;
    }
    if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar4 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar4 & 1) != 0) {
        pVVar4 = *(Variant **)(pVVar4 + *(long *)((long)plVar6 + (long)pVVar1) + -1);
      }
      (*(code *)pVVar4)(local_68);
      Variant::Variant((Variant *)local_88,local_68);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_88[0];
      *(undefined8 *)(param_1 + 8) = local_80;
      *(undefined8 *)(param_1 + 0x10) = uStack_78;
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
LAB_00121c30:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Transform3D>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Transform3D>::validated_call
          (MethodBindTRC<Transform3D> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  long *plVar3;
  Variant **extraout_RDX;
  long in_FS_OFFSET;
  long local_88;
  undefined8 local_80;
  Variant **local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_78,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_78 == (Variant **)*plVar3) {
      if ((StringName::configured != '\0') && (local_78 != (Variant **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_78 = (Variant **)0x11a858;
      local_70 = 0x35;
      local_80 = 0;
      String::parse_latin1((StrRange *)&local_80);
      vformat<StringName>((StringName *)&local_78,(StrRange *)&local_80,&local_88);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_78,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      if ((StringName::configured != '\0') && (local_88 != 0)) {
        StringName::unref();
      }
      goto LAB_00121eb4;
    }
    param_2 = local_78;
    if ((StringName::configured != '\0') && (local_78 != (Variant **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    param_2 = *(Variant ***)(param_1 + *(long *)(this + 0x60));
    pcVar2 = *(code **)(pcVar2 + (long)param_2 + -1);
  }
  (*pcVar2)(&local_68,param_1 + *(long *)(this + 0x60),param_2);
  puVar1 = *(undefined8 **)(param_3 + 8);
  *puVar1 = local_68;
  puVar1[1] = uStack_60;
  puVar1[2] = local_58;
  puVar1[3] = uStack_50;
  puVar1[4] = local_48;
  puVar1[5] = uStack_40;
LAB_00121eb4:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Transform3D>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Transform3D>::ptrcall
          (MethodBindTRC<Transform3D> *this,Object *param_1,void **param_2,void *param_3)

{
  code *pcVar1;
  long *plVar2;
  void **extraout_RDX;
  long in_FS_OFFSET;
  long local_88;
  undefined8 local_80;
  void **local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_78,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_78 == (void **)*plVar2) {
      if ((StringName::configured != '\0') && (local_78 != (void **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_78 = (void **)0x11a858;
      local_70 = 0x35;
      local_80 = 0;
      String::parse_latin1((StrRange *)&local_80);
      vformat<StringName>((StringName *)&local_78,(StrRange *)&local_80,&local_88);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_78,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      if ((StringName::configured != '\0') && (local_88 != 0)) {
        StringName::unref();
      }
      goto LAB_00122082;
    }
    param_2 = local_78;
    if ((StringName::configured != '\0') && (local_78 != (void **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    param_2 = *(void ***)(param_1 + *(long *)(this + 0x60));
    pcVar1 = *(code **)(pcVar1 + (long)param_2 + -1);
  }
  (*pcVar1)(&local_68,param_1 + *(long *)(this + 0x60),param_2);
  *(undefined8 *)param_3 = local_68;
  *(undefined8 *)((long)param_3 + 8) = uStack_60;
  *(undefined8 *)((long)param_3 + 0x10) = local_58;
  *(undefined8 *)((long)param_3 + 0x18) = uStack_50;
  *(undefined8 *)((long)param_3 + 0x20) = local_48;
  *(undefined8 *)((long)param_3 + 0x28) = uStack_40;
LAB_00122082:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Transform3D const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Transform3D_const&>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  long *plVar1;
  char *pcVar2;
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar3;
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
      pVVar3 = param_2[0x23];
      if (pVVar3 == (Variant *)0x0) {
        pVVar3 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar3 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar3) {
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
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_48 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_001223e4;
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
                    /* WARNING: Could not recover jumptable at 0x0012224d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined8 *)(*(long *)param_3 + 8));
    return;
  }
LAB_001223e4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Transform3D const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Transform3D_const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  char *pcVar1;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar2;
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
      plVar2 = (long *)param_2[0x23];
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar2 = (long *)((long)param_2[1] + 0x20);
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
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      pcVar1 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar2 = (long *)(local_48 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar1 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_001225e4;
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
                    /* WARNING: Could not recover jumptable at 0x00122449. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3);
    return;
  }
LAB_001225e4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<Node3DGizmo> >::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Ref<Node3DGizmo>>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  Object *pOVar2;
  char cVar3;
  Object *pOVar4;
  Variant *pVVar5;
  code *pcVar6;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  Object *local_58;
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
    if (local_58 == (Object *)*(long *)pVVar5) {
      if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = (Object *)0x11a858;
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
      goto LAB_001226e8;
    }
    if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar6 = *(code **)(param_1 + 0x58);
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar6 & 1) != 0) {
    pcVar6 = *(code **)(pcVar6 + *(long *)((long)param_2 + lVar1) + -1);
  }
  Variant::Variant((Variant *)local_48,*(Object **)(*(long *)param_3 + 0x10));
  local_58 = (Object *)0x0;
  pOVar4 = (Object *)Variant::get_validated_object();
  pOVar2 = local_58;
  if (pOVar4 != local_58) {
    if (pOVar4 == (Object *)0x0) {
      if (local_58 != (Object *)0x0) {
        local_58 = (Object *)0x0;
LAB_001226a6:
        cVar3 = RefCounted::unreference();
        if (cVar3 != '\0') {
          cVar3 = predelete_handler(pOVar2);
          if (cVar3 != '\0') {
            (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
            Memory::free_static(pOVar2,false);
          }
        }
      }
    }
    else {
      pOVar4 = (Object *)__dynamic_cast(pOVar4,&Object::typeinfo,&Node3DGizmo::typeinfo,0);
      if (pOVar2 != pOVar4) {
        local_58 = pOVar4;
        if (pOVar4 != (Object *)0x0) {
          cVar3 = RefCounted::reference();
          if (cVar3 == '\0') {
            local_58 = (Object *)0x0;
          }
        }
        if (pOVar2 != (Object *)0x0) goto LAB_001226a6;
      }
    }
  }
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  (*pcVar6)((long *)((long)param_2 + lVar1));
  if (local_58 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    pOVar2 = local_58;
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_58);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
LAB_001226e8:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<Node3DGizmo>, int, Transform3D>::validated_call(Object*, Variant const**,
   Variant*) const */

void MethodBindT<Ref<Node3DGizmo>,int,Transform3D>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  undefined4 uVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  Object *pOVar5;
  Variant *pVVar6;
  code *pcVar7;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  Object *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar6 = param_2[0x23];
      if (pVVar6 == (Variant *)0x0) {
        pVVar6 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar6 = param_2[1] + 0x20;
    }
    if (local_68 == (Object *)*(long *)pVVar6) {
      if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = (Object *)0x11a858;
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_00122a5c;
    }
    if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar7 = *(code **)(param_1 + 0x58);
  lVar2 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar7 & 1) != 0) {
    pcVar7 = *(code **)(pcVar7 + *(long *)((long)param_2 + lVar2) + -1);
  }
  uVar1 = *(undefined4 *)(*(long *)(param_3 + 8) + 8);
  Variant::Variant((Variant *)local_58,*(Object **)(*(long *)param_3 + 0x10));
  local_68 = (Object *)0x0;
  pOVar5 = (Object *)Variant::get_validated_object();
  pOVar3 = local_68;
  if (pOVar5 != local_68) {
    if (pOVar5 == (Object *)0x0) {
      if (local_68 != (Object *)0x0) {
        local_68 = (Object *)0x0;
LAB_001229ef:
        cVar4 = RefCounted::unreference();
        if (cVar4 != '\0') {
          cVar4 = predelete_handler(pOVar3);
          if (cVar4 != '\0') {
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
          }
        }
      }
    }
    else {
      pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&Node3DGizmo::typeinfo,0);
      if (pOVar3 != pOVar5) {
        local_68 = pOVar5;
        if (pOVar5 != (Object *)0x0) {
          cVar4 = RefCounted::reference();
          if (cVar4 == '\0') {
            local_68 = (Object *)0x0;
          }
        }
        if (pOVar3 != (Object *)0x0) goto LAB_001229ef;
      }
    }
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  (*pcVar7)((long *)((long)param_2 + lVar2),(StringName *)&local_68,uVar1);
  if (local_68 != (Object *)0x0) {
    cVar4 = RefCounted::unreference();
    pOVar3 = local_68;
    if (cVar4 != '\0') {
      cVar4 = predelete_handler(local_68);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
LAB_00122a5c:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<Node3DGizmo> >::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Ref<Node3DGizmo>>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  Object *pOVar2;
  char cVar3;
  long *plVar4;
  code *pcVar5;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Object *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar4 = (long *)param_2[0x23];
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar4 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (Object *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Object *)0x11a858;
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
      goto LAB_00122d1c;
    }
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar5 = *(code **)(param_1 + 0x58);
                    /* WARNING: Load size is inaccurate */
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar5 & 1) != 0) {
    pcVar5 = *(code **)(pcVar5 + *(long *)((long)param_2 + lVar1) + -1);
  }
  if ((*param_3 == (long *)0x0) || (local_48 = (Object *)**param_3, local_48 == (Object *)0x0)) {
LAB_00122cf8:
    local_48 = (Object *)0x0;
  }
  else {
    cVar3 = RefCounted::init_ref();
    if (cVar3 == '\0') goto LAB_00122cf8;
  }
  (*pcVar5)((long *)((long)param_2 + lVar1));
  if (local_48 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    pOVar2 = local_48;
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_48);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
LAB_00122d1c:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<Node3DGizmo>, int, Transform3D>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Ref<Node3DGizmo>,int,Transform3D>::ptrcall
               (Object *param_1,void **param_2,void *param_3)

{
  undefined4 uVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  long *plVar5;
  code *pcVar6;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Object *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar5 = (long *)param_2[0x23];
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar5 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (Object *)*plVar5) {
      if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Object *)0x11a858;
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
      goto LAB_00122f90;
    }
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar6 = *(code **)(param_1 + 0x58);
  lVar2 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar6 & 1) != 0) {
    pcVar6 = *(code **)(pcVar6 + *(long *)((long)param_2 + lVar2) + -1);
  }
  uVar1 = **(undefined4 **)((long)param_3 + 8);
                    /* WARNING: Load size is inaccurate */
  if ((*param_3 == (long *)0x0) || (local_48 = (Object *)**param_3, local_48 == (Object *)0x0)) {
LAB_00122f43:
    local_48 = (Object *)0x0;
  }
  else {
    cVar4 = RefCounted::init_ref();
    if (cVar4 == '\0') goto LAB_00122f43;
  }
  (*pcVar6)((long *)((long)param_2 + lVar2),(StringName *)&local_48,uVar1);
  if (local_48 != (Object *)0x0) {
    cVar4 = RefCounted::unreference();
    pOVar3 = local_48;
    if (cVar4 != '\0') {
      cVar4 = predelete_handler(local_48);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
LAB_00122f90:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<TypedArray<Node3DGizmo>>::validated_call(Object*, Variant const**, Variant*) const
    */

void __thiscall
MethodBindTRC<TypedArray<Node3DGizmo>>::validated_call
          (MethodBindTRC<TypedArray<Node3DGizmo>> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  Variant **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  Variant **local_48;
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
    if (local_48 == (Variant **)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Variant **)0x11a858;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((Array *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Array *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
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
      goto LAB_001231a9;
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
  (*pcVar2)((Array *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  Array::operator=((Array *)(param_3 + 8),(Array *)&local_48);
  Array::~Array((Array *)&local_48);
LAB_001231a9:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<TypedArray<Node3DGizmo>>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<TypedArray<Node3DGizmo>>::ptrcall
          (MethodBindTRC<TypedArray<Node3DGizmo>> *this,Object *param_1,void **param_2,void *param_3
          )

{
  void **ppvVar1;
  void **ppvVar2;
  code *pcVar3;
  long *plVar4;
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
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (void **)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (void **)0x11a858;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((Array *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Array *)&local_48,0,0);
      ppvVar2 = local_48;
      if (local_48 != (void **)0x0) {
        LOCK();
        ppvVar1 = local_48 + -2;
        *ppvVar1 = (void *)((long)*ppvVar1 + -1);
        UNLOCK();
        if (*ppvVar1 == (void *)0x0) {
          local_48 = (void **)0x0;
          Memory::free_static(ppvVar2 + -2,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0012339a;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    param_2 = *(void ***)(param_1 + *(long *)(this + 0x60));
    pcVar3 = *(code **)(pcVar3 + (long)param_2 + -1);
  }
  (*pcVar3)((Array *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  Array::operator=((Array *)param_3,(Array *)&local_48);
  Array::~Array((Array *)&local_48);
LAB_0012339a:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<World3D>>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<Ref<World3D>>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Object *pOVar1;
  Variant *pVVar2;
  Object *pOVar3;
  char cVar4;
  Variant *pVVar5;
  long *plVar6;
  undefined4 in_register_00000014;
  long *plVar7;
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
  
  plVar7 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar7 != (long *)0x0) && (plVar7[1] != 0)) && (*(char *)(plVar7[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar7[1] == 0) {
      plVar6 = (long *)plVar7[0x23];
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)(**(code **)(*plVar7 + 0x40))(plVar7);
      }
    }
    else {
      plVar6 = (long *)(plVar7[1] + 0x20);
    }
    if (local_58 == (Object *)*plVar6) {
      if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = (Object *)0x11a858;
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC169,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      pOVar3 = local_58;
      if (local_58 != (Object *)0x0) {
        LOCK();
        pOVar1 = local_58 + -0x10;
        *(long *)pOVar1 = *(long *)pOVar1 + -1;
        UNLOCK();
        if (*(long *)pOVar1 == 0) {
          local_58 = (Object *)0x0;
          Memory::free_static(pOVar3 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00123640;
    }
    if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pVVar5 = param_2[0xb];
  pVVar2 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar5 & 1) != 0) {
        pVVar5 = *(Variant **)(pVVar5 + *(long *)((long)plVar7 + (long)pVVar2) + -1);
      }
      (*(code *)pVVar5)(&local_58);
      Variant::Variant((Variant *)local_48,local_58);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
      if (local_58 != (Object *)0x0) {
        cVar4 = RefCounted::unreference();
        pOVar3 = local_58;
        if (cVar4 != '\0') {
          cVar4 = predelete_handler(local_58);
          if (cVar4 != '\0') {
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
          }
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
LAB_00123640:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<World3D>>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Ref<World3D>>::ptrcall
          (MethodBindTRC<Ref<World3D>> *this,Object *param_1,void **param_2,void *param_3)

{
  char cVar1;
  code *pcVar2;
  Object *pOVar3;
  long *plVar4;
  Object *extraout_RDX;
  Object *pOVar5;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Object *local_48;
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
    if (local_48 == (Object *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Object *)0x11a858;
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
      goto LAB_001238f6;
    }
    param_2 = (void **)local_48;
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
      param_2 = (void **)extraout_RDX;
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    param_2 = *(void ***)(param_1 + *(long *)(this + 0x60));
    pcVar2 = *(code **)((Object *)((long)param_2 + -1) + (long)pcVar2);
  }
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  if (local_48 == (Object *)0x0) {
                    /* WARNING: Load size is inaccurate */
    pOVar5 = *param_3;
    if (pOVar5 == (Object *)0x0) goto LAB_001238f6;
    *(undefined8 *)param_3 = 0;
    goto LAB_00123939;
  }
  pOVar3 = (Object *)__dynamic_cast(local_48,&Object::typeinfo,&RefCounted::typeinfo,0);
                    /* WARNING: Load size is inaccurate */
  pOVar5 = *param_3;
  if (pOVar5 != pOVar3) {
    *(Object **)param_3 = pOVar3;
    if (pOVar3 == (Object *)0x0) {
      if (pOVar5 != (Object *)0x0) goto LAB_00123939;
    }
    else {
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        *(undefined8 *)param_3 = 0;
      }
      if (pOVar5 != (Object *)0x0) {
LAB_00123939:
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(pOVar5);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
      if (local_48 == (Object *)0x0) goto LAB_001238f6;
    }
  }
  cVar1 = RefCounted::unreference();
  pOVar5 = local_48;
  if (cVar1 != '\0') {
    cVar1 = predelete_handler(local_48);
    if (cVar1 != '\0') {
      (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
      Memory::free_static(pOVar5,false);
    }
  }
LAB_001238f6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Node3D*>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Node3D*>::validated_call
          (MethodBindTRC<Node3D*> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
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
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
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
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00123ce2;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar2)(param_1 + *(long *)(this + 0x60));
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    Variant::ObjData::ref_pointer((Object *)(param_3 + 8));
    return;
  }
LAB_00123ce2:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Node3D*>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Node3D*>::ptrcall
          (MethodBindTRC<Node3D*> *this,Object *param_1,void **param_2,void *param_3)

{
  char *pcVar1;
  undefined8 uVar2;
  long *plVar4;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar3;
  
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
    if (local_48 == (char *)*plVar4) {
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
      pcVar1 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar4 = (long *)(local_48 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar1 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00123d31;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar2 = (*pcVar3)(param_1 + *(long *)(this + 0x60));
  *(undefined8 *)param_3 = uVar2;
LAB_00123d31:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector3 const&>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<Vector3_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined1 auVar4 [12];
  undefined8 uVar5;
  char *pcVar6;
  char cVar7;
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
  long local_88;
  undefined8 local_80;
  char *local_78;
  undefined8 local_70;
  undefined1 local_60 [4] [12];
  long local_30;
  
  plVar11 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar11 != (long *)0x0) && (plVar11[1] != 0)) && (*(char *)(plVar11[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_78,(StringName *)(param_2 + 3));
    if (plVar11[1] == 0) {
      plVar9 = (long *)plVar11[0x23];
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)(**(code **)(*plVar11 + 0x40))(plVar11);
      }
    }
    else {
      plVar9 = (long *)(plVar11[1] + 0x20);
    }
    if (local_78 == (char *)*plVar9) {
      if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_78 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_80 = 0;
      local_70 = 0x35;
      String::parse_latin1((StrRange *)&local_80);
      vformat<StringName>((StringName *)&local_78,(StrRange *)&local_80,&local_88);
      _err_print_error(&_LC169,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_78,0,0);
      pcVar6 = local_78;
      if (local_78 != (char *)0x0) {
        LOCK();
        plVar11 = (long *)(local_78 + -0x10);
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (*plVar11 == 0) {
          local_78 = (char *)0x0;
          Memory::free_static(pcVar6 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      auVar4._8_4_ = local_60[0]._8_4_;
      auVar4._0_8_ = local_60[0]._0_8_;
      if ((StringName::configured != '\0') && (local_60[0] = auVar4, local_88 != 0)) {
        StringName::unref();
      }
      goto LAB_00123fc8;
    }
    if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar13 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar12 = param_2[5];
    if (pVVar12 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_00124020;
LAB_00124010:
      pVVar12 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar12 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00124020:
        uVar8 = 4;
        goto LAB_00123fbd;
      }
      if (in_R8D == 1) goto LAB_00124010;
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
    cVar7 = Variant::can_convert_strict(*(undefined4 *)pVVar12,9);
    uVar5 = _LC260;
    if (cVar7 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar5;
    }
    local_60[0] = Variant::operator_cast_to_Vector3(pVVar12);
    (*(code *)pVVar13)((Variant *)((long)plVar11 + (long)pVVar1),local_60);
  }
  else {
    uVar8 = 3;
LAB_00123fbd:
    *in_R9 = uVar8;
    in_R9[2] = 1;
  }
LAB_00123fc8:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTRC<Vector3, Vector3>::call(Object*, Variant const**, int, Callable::CallError&) const
    */

Object * MethodBindTRC<Vector3,Vector3>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined1 auVar4 [12];
  undefined8 uVar5;
  char cVar6;
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
  undefined1 auVar13 [16];
  long local_98;
  undefined8 local_90;
  char *local_88;
  undefined8 local_80;
  undefined1 local_78 [4] [12];
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar10 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar10 != (long *)0x0) && (plVar10[1] != 0)) && (*(char *)(plVar10[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_88,(StringName *)(param_2 + 3));
    if (plVar10[1] == 0) {
      plVar8 = (long *)plVar10[0x23];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*plVar10 + 0x40))(plVar10);
      }
    }
    else {
      plVar8 = (long *)(plVar10[1] + 0x20);
    }
    if (local_88 == (char *)*plVar8) {
      if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_88 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_90 = 0;
      local_80 = 0x35;
      String::parse_latin1((StrRange *)&local_90);
      vformat<StringName>((StringName *)&local_88,(StrRange *)&local_90,&local_98);
      _err_print_error(&_LC169,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_88,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      auVar4._8_4_ = local_78[0]._8_4_;
      auVar4._0_8_ = local_78[0]._0_8_;
      if ((StringName::configured != '\0') && (local_78[0] = auVar4, local_98 != 0)) {
        StringName::unref();
      }
      goto LAB_00124360;
    }
    if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar12 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar11 = param_2[5];
    if (pVVar11 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_001243a0;
LAB_00124390:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_001243a0:
        uVar7 = 4;
        goto LAB_00124355;
      }
      if (in_R8D == 1) goto LAB_00124390;
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
    cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar11,9);
    uVar5 = _LC260;
    if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar5;
    }
    auVar13 = Variant::operator_cast_to_Vector3(pVVar11);
    local_78[0] = (*(code *)pVVar12)(auVar13._0_8_,auVar13._8_8_ & 0xffffffff,
                                     (Variant *)((long)plVar10 + (long)pVVar1));
    Variant::Variant((Variant *)local_48,local_78[0]);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_48[0];
    *(undefined8 *)(param_1 + 8) = local_40;
    *(undefined8 *)(param_1 + 0x10) = uStack_38;
  }
  else {
    uVar7 = 3;
LAB_00124355:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_00124360:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector3 const&, Vector3 const&, bool>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<Vector3_const&,Vector3_const&,bool>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  code *pcVar3;
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  undefined8 uVar9;
  char cVar10;
  bool bVar11;
  undefined4 uVar12;
  long lVar13;
  long *plVar14;
  uint uVar15;
  int iVar16;
  undefined4 in_register_00000014;
  long *plVar17;
  Variant *pVVar18;
  long lVar19;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar20;
  long in_FS_OFFSET;
  long local_d8;
  undefined8 local_d0;
  char *local_c8;
  undefined8 local_c0;
  undefined1 local_ac [12];
  undefined1 local_a0 [3] [12];
  undefined1 local_7c [12];
  undefined1 local_70 [12];
  undefined1 local_64 [12];
  Variant *local_58 [3];
  long local_40;
  
  plVar17 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar17 != (long *)0x0) && (plVar17[1] != 0)) && (*(char *)(plVar17[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_c8,(StringName *)(param_2 + 3));
    if (plVar17[1] == 0) {
      plVar14 = (long *)plVar17[0x23];
      if (plVar14 == (long *)0x0) {
        plVar14 = (long *)(**(code **)(*plVar17 + 0x40))(plVar17);
      }
    }
    else {
      plVar14 = (long *)(plVar17[1] + 0x20);
    }
    if (local_c8 == (char *)*plVar14) {
      if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_c8 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_d0 = 0;
      local_c0 = 0x35;
      String::parse_latin1((StrRange *)&local_d0);
      vformat<StringName>((StringName *)&local_c8,(StrRange *)&local_d0,&local_d8);
      _err_print_error(&_LC169,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_c8,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
      auVar8._8_4_ = local_64._8_4_;
      auVar8._0_8_ = local_64._0_8_;
      auVar7._8_4_ = local_70._8_4_;
      auVar7._0_8_ = local_70._0_8_;
      auVar6._8_4_ = local_7c._8_4_;
      auVar6._0_8_ = local_7c._0_8_;
      auVar5._8_4_ = local_a0[0]._8_4_;
      auVar5._0_8_ = local_a0[0]._0_8_;
      auVar4._8_4_ = local_ac._8_4_;
      auVar4._0_8_ = local_ac._0_8_;
      if ((StringName::configured != '\0') &&
         (local_ac = auVar4, local_a0[0] = auVar5, local_7c = auVar6, local_70 = auVar7,
         local_64 = auVar8, local_d8 != 0)) {
        StringName::unref();
      }
      goto LAB_0012478a;
    }
    if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar20 = param_2[0xb];
  pVVar1 = param_2[0xc];
  uVar12 = 3;
  if (in_R8D < 4) {
    pVVar2 = param_2[5];
    if (pVVar2 == (Variant *)0x0) {
      iVar16 = 0;
      lVar19 = 0;
    }
    else {
      lVar19 = *(long *)(pVVar2 + -8);
      iVar16 = (int)lVar19;
    }
    if ((int)(3 - in_R8D) <= iVar16) {
      lVar13 = 0;
      do {
        if ((int)lVar13 < (int)in_R8D) {
          pVVar18 = *(Variant **)(param_4 + lVar13 * 8);
        }
        else {
          uVar15 = iVar16 + -3 + (int)lVar13;
          if (lVar19 <= (int)uVar15) {
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,(long)(int)uVar15,lVar19,"p_index",
                       "size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          pVVar18 = pVVar2 + (ulong)uVar15 * 0x18;
        }
        local_58[lVar13] = pVVar18;
        lVar13 = lVar13 + 1;
      } while (lVar13 != 3);
      *in_R9 = 0;
      if (((ulong)pVVar20 & 1) != 0) {
        pVVar20 = *(Variant **)(pVVar20 + *(long *)((long)plVar17 + (long)pVVar1) + -1);
      }
      cVar10 = Variant::can_convert_strict(*(undefined4 *)local_58[2],1);
      uVar9 = _LC261;
      if (cVar10 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar9;
      }
      bVar11 = Variant::operator_cast_to_bool(local_58[2]);
      cVar10 = Variant::can_convert_strict(*(undefined4 *)local_58[1],9);
      uVar9 = _LC262;
      if (cVar10 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar9;
      }
      local_ac = Variant::operator_cast_to_Vector3(local_58[1]);
      local_7c = local_ac;
      local_70 = local_ac;
      local_64 = local_ac;
      cVar10 = Variant::can_convert_strict(*(undefined4 *)local_58[0],9);
      uVar9 = _LC260;
      if (cVar10 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar9;
      }
      local_a0[0] = Variant::operator_cast_to_Vector3(local_58[0]);
      local_7c = local_a0[0];
      (*(code *)pVVar20)((Variant *)((long)plVar17 + (long)pVVar1),local_a0,local_ac,bVar11);
      goto LAB_0012478a;
    }
    uVar12 = 4;
  }
  *in_R9 = uVar12;
  in_R9[2] = 3;
LAB_0012478a:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector3 const&, Vector3 const&, Vector3 const&, bool>::call(Object*, Variant const**,
   int, Callable::CallError&) const */

Object * MethodBindT<Vector3_const&,Vector3_const&,Vector3_const&,bool>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  code *pcVar3;
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  undefined8 uVar12;
  char *pcVar13;
  char cVar14;
  bool bVar15;
  undefined4 uVar16;
  long lVar17;
  long *plVar18;
  uint uVar19;
  int iVar20;
  undefined4 in_register_00000014;
  long *plVar21;
  Variant *pVVar22;
  long lVar23;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar24;
  long in_FS_OFFSET;
  long local_108;
  long local_100;
  char *local_f8;
  undefined8 local_f0;
  undefined1 local_e0 [12];
  undefined1 local_d4 [12];
  undefined1 local_c8 [3] [12];
  undefined1 local_a4 [12];
  undefined1 local_98 [12];
  undefined1 local_8c [12];
  undefined1 local_80 [12];
  undefined1 local_74 [12];
  Variant *local_68 [5];
  long local_40;
  
  plVar21 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar21 != (long *)0x0) && (plVar21[1] != 0)) && (*(char *)(plVar21[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_f8,(StringName *)(param_2 + 3));
    if (plVar21[1] == 0) {
      plVar18 = (long *)plVar21[0x23];
      if (plVar18 == (long *)0x0) {
        plVar18 = (long *)(**(code **)(*plVar21 + 0x40))(plVar21);
      }
    }
    else {
      plVar18 = (long *)(plVar21[1] + 0x20);
    }
    if (local_f8 == (char *)*plVar18) {
      if ((StringName::configured != '\0') && (local_f8 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_f8 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_100 = 0;
      local_f0 = 0x35;
      String::parse_latin1((StrRange *)&local_100);
      vformat<StringName>((StringName *)&local_f8,(StrRange *)&local_100,&local_108);
      _err_print_error(&_LC169,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_f8,0);
      pcVar13 = local_f8;
      if (local_f8 != (char *)0x0) {
        LOCK();
        plVar21 = (long *)(local_f8 + -0x10);
        *plVar21 = *plVar21 + -1;
        UNLOCK();
        if (*plVar21 == 0) {
          local_f8 = (char *)0x0;
          Memory::free_static(pcVar13 + -0x10,false);
        }
      }
      lVar23 = local_100;
      if (local_100 != 0) {
        LOCK();
        plVar21 = (long *)(local_100 + -0x10);
        *plVar21 = *plVar21 + -1;
        UNLOCK();
        if (*plVar21 == 0) {
          local_100 = 0;
          Memory::free_static((void *)(lVar23 + -0x10),false);
        }
      }
      auVar11._8_4_ = local_74._8_4_;
      auVar11._0_8_ = local_74._0_8_;
      auVar10._8_4_ = local_8c._8_4_;
      auVar10._0_8_ = local_8c._0_8_;
      auVar9._8_4_ = local_80._8_4_;
      auVar9._0_8_ = local_80._0_8_;
      auVar8._8_4_ = local_98._8_4_;
      auVar8._0_8_ = local_98._0_8_;
      auVar7._8_4_ = local_a4._8_4_;
      auVar7._0_8_ = local_a4._0_8_;
      auVar6._8_4_ = local_c8[0]._8_4_;
      auVar6._0_8_ = local_c8[0]._0_8_;
      auVar5._8_4_ = local_d4._8_4_;
      auVar5._0_8_ = local_d4._0_8_;
      auVar4._8_4_ = local_e0._8_4_;
      auVar4._0_8_ = local_e0._0_8_;
      if ((StringName::configured != '\0') &&
         (local_e0 = auVar4, local_d4 = auVar5, local_c8[0] = auVar6, local_a4 = auVar7,
         local_98 = auVar8, local_80 = auVar9, local_8c = auVar10, local_74 = auVar11,
         local_108 != 0)) {
        StringName::unref();
      }
      goto LAB_00124c22;
    }
    if ((StringName::configured != '\0') && (local_f8 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar24 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 5) {
    pVVar2 = param_2[5];
    if (pVVar2 == (Variant *)0x0) {
      iVar20 = 0;
      lVar23 = 0;
    }
    else {
      lVar23 = *(long *)(pVVar2 + -8);
      iVar20 = (int)lVar23;
    }
    if ((int)(4 - in_R8D) <= iVar20) {
      lVar17 = 0;
      do {
        if ((int)lVar17 < (int)in_R8D) {
          pVVar22 = *(Variant **)(param_4 + lVar17 * 8);
        }
        else {
          uVar19 = iVar20 + -4 + (int)lVar17;
          if (lVar23 <= (int)uVar19) {
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,(long)(int)uVar19,lVar23,"p_index",
                       "size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          pVVar22 = pVVar2 + (ulong)uVar19 * 0x18;
        }
        local_68[lVar17] = pVVar22;
        lVar17 = lVar17 + 1;
      } while (lVar17 != 4);
      *in_R9 = 0;
      if (((ulong)pVVar24 & 1) != 0) {
        pVVar24 = *(Variant **)(pVVar24 + *(long *)((long)plVar21 + (long)pVVar1) + -1);
      }
      cVar14 = Variant::can_convert_strict(*(undefined4 *)local_68[3],1);
      uVar12 = _LC263;
      if (cVar14 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar12;
      }
      bVar15 = Variant::operator_cast_to_bool(local_68[3]);
      cVar14 = Variant::can_convert_strict(*(undefined4 *)local_68[2],9);
      uVar12 = _LC264;
      if (cVar14 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar12;
      }
      local_e0 = Variant::operator_cast_to_Vector3(local_68[2]);
      local_8c = local_e0;
      local_80 = local_e0;
      local_74 = local_e0;
      cVar14 = Variant::can_convert_strict(*(undefined4 *)local_68[1],9);
      uVar12 = _LC262;
      if (cVar14 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar12;
      }
      local_d4 = Variant::operator_cast_to_Vector3(local_68[1]);
      local_a4 = local_d4;
      local_98 = local_d4;
      local_8c = local_d4;
      cVar14 = Variant::can_convert_strict(*(undefined4 *)local_68[0],9);
      uVar12 = _LC260;
      if (cVar14 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar12;
      }
      local_c8[0] = Variant::operator_cast_to_Vector3(local_68[0]);
      local_a4 = local_c8[0];
      (*(code *)pVVar24)((Variant *)((long)plVar21 + (long)pVVar1),local_c8,local_d4,local_e0,bVar15
                        );
      goto LAB_00124c22;
    }
    uVar16 = 4;
  }
  else {
    uVar16 = 3;
  }
  *in_R9 = uVar16;
  in_R9[2] = 4;
LAB_00124c22:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<Node3DGizmo> >::call(Object*, Variant const**, int, Callable::CallError&) const
    */

Object * MethodBindT<Ref<Node3DGizmo>>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  Object *pOVar5;
  char cVar6;
  undefined4 uVar7;
  Object *pOVar8;
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
  Object *local_48;
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
    if (local_48 == (Object *)*plVar9) {
      if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Object *)0x11a858;
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC169,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00125010;
    }
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pVVar13 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (1 < in_R8D) {
    uVar7 = 3;
LAB_00125005:
    *in_R9 = uVar7;
    in_R9[2] = 1;
    goto LAB_00125010;
  }
  pVVar12 = param_2[5];
  if (pVVar12 == (Variant *)0x0) {
    if (in_R8D != 1) goto LAB_00125060;
LAB_00125050:
    pVVar12 = *(Variant **)param_4;
  }
  else {
    lVar2 = *(long *)(pVVar12 + -8);
    if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00125060:
      uVar7 = 4;
      goto LAB_00125005;
    }
    if (in_R8D == 1) goto LAB_00125050;
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
  cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar12);
  uVar4 = _LC265;
  if (cVar6 == '\0') {
    *in_R9 = 2;
    *(undefined8 *)(in_R9 + 1) = uVar4;
  }
  local_48 = (Object *)0x0;
  pOVar8 = (Object *)Variant::get_validated_object();
  pOVar5 = local_48;
  if (pOVar8 != local_48) {
    if (pOVar8 == (Object *)0x0) {
      if (local_48 != (Object *)0x0) {
        local_48 = (Object *)0x0;
LAB_0012517d:
        cVar6 = RefCounted::unreference();
        if (cVar6 != '\0') {
          cVar6 = predelete_handler(pOVar5);
          if (cVar6 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
    }
    else {
      pOVar8 = (Object *)__dynamic_cast(pOVar8,&Object::typeinfo,&Node3DGizmo::typeinfo,0);
      if (pOVar5 != pOVar8) {
        local_48 = pOVar8;
        if (pOVar8 != (Object *)0x0) {
          cVar6 = RefCounted::reference();
          if (cVar6 == '\0') {
            local_48 = (Object *)0x0;
          }
        }
        if (pOVar5 != (Object *)0x0) goto LAB_0012517d;
      }
    }
  }
  (*(code *)pVVar13)((Variant *)((long)plVar11 + (long)pVVar1));
  if (local_48 != (Object *)0x0) {
    cVar6 = RefCounted::unreference();
    pOVar5 = local_48;
    if (cVar6 != '\0') {
      cVar6 = predelete_handler(local_48);
      if (cVar6 != '\0') {
        (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
        Memory::free_static(pOVar5,false);
      }
    }
  }
LAB_00125010:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Transform3D const&>::call(Object*, Variant const**, int, Callable::CallError&) const
    */

Object * MethodBindT<Transform3D_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  long *plVar7;
  long lVar8;
  undefined4 in_register_00000014;
  long *plVar9;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar10;
  Variant *pVVar11;
  long in_FS_OFFSET;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  Variant local_68 [56];
  long local_30;
  
  plVar9 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar9 != (long *)0x0) && (plVar9[1] != 0)) && (*(char *)(plVar9[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_78,(StringName *)(param_2 + 3));
    if (plVar9[1] == 0) {
      plVar7 = (long *)plVar9[0x23];
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)(**(code **)(*plVar9 + 0x40))(plVar9);
      }
    }
    else {
      plVar7 = (long *)(plVar9[1] + 0x20);
    }
    if (local_78 == (char *)*plVar7) {
      if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_78 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_80 = 0;
      local_70 = 0x35;
      String::parse_latin1((StrRange *)&local_80);
      vformat<StringName>((StringName *)&local_78,(StrRange *)&local_80,&local_88);
      _err_print_error(&_LC169,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_78,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      lVar2 = local_80;
      if (local_80 != 0) {
        LOCK();
        plVar9 = (long *)(local_80 + -0x10);
        *plVar9 = *plVar9 + -1;
        UNLOCK();
        if (*plVar9 == 0) {
          local_80 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_88 != 0)) {
        StringName::unref();
      }
      goto LAB_001253b0;
    }
    if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar11 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar10 = param_2[5];
    if (pVVar10 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_00125400;
LAB_001253f0:
      pVVar10 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar10 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00125400:
        uVar6 = 4;
        goto LAB_001253a5;
      }
      if (in_R8D == 1) goto LAB_001253f0;
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
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar10,0x12);
    uVar4 = _LC266;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_Transform3D(local_68);
    (*(code *)pVVar11)((Variant *)((long)plVar9 + (long)pVVar1),local_68);
  }
  else {
    uVar6 = 3;
LAB_001253a5:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_001253b0:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<Node3DGizmo>, int, Transform3D>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<Ref<Node3DGizmo>,int,Transform3D>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  code *pcVar3;
  undefined8 uVar4;
  Object *pOVar5;
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  long lVar9;
  Object *pOVar10;
  long *plVar11;
  uint uVar12;
  undefined4 in_register_00000014;
  long *plVar13;
  Variant *pVVar14;
  long lVar15;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar16;
  long in_FS_OFFSET;
  long local_b8;
  long local_b0;
  Object *local_a8;
  undefined8 local_a0;
  Variant *local_98 [4];
  Variant local_78 [56];
  long local_40;
  
  plVar13 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar13 != (long *)0x0) && (plVar13[1] != 0)) && (*(char *)(plVar13[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_a8,(StringName *)(param_2 + 3));
    if (plVar13[1] == 0) {
      plVar11 = (long *)plVar13[0x23];
      if (plVar11 == (long *)0x0) {
        plVar11 = (long *)(**(code **)(*plVar13 + 0x40))(plVar13);
      }
    }
    else {
      plVar11 = (long *)(plVar13[1] + 0x20);
    }
    if (local_a8 == (Object *)*plVar11) {
      if ((StringName::configured != '\0') && (local_a8 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_a8 = (Object *)0x11a858;
      local_b0 = 0;
      local_a0 = 0x35;
      String::parse_latin1((StrRange *)&local_b0);
      vformat<StringName>((StringName *)&local_a8,(StrRange *)&local_b0,&local_b8);
      _err_print_error(&_LC169,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_a8,0);
      pOVar5 = local_a8;
      if (local_a8 != (Object *)0x0) {
        LOCK();
        pOVar10 = local_a8 + -0x10;
        *(long *)pOVar10 = *(long *)pOVar10 + -1;
        UNLOCK();
        if (*(long *)pOVar10 == 0) {
          local_a8 = (Object *)0x0;
          Memory::free_static(pOVar5 + -0x10,false);
        }
      }
      lVar15 = local_b0;
      if (local_b0 != 0) {
        LOCK();
        plVar13 = (long *)(local_b0 + -0x10);
        *plVar13 = *plVar13 + -1;
        UNLOCK();
        if (*plVar13 == 0) {
          local_b0 = 0;
          Memory::free_static((void *)(lVar15 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_b8 != 0)) {
        StringName::unref();
      }
      goto LAB_00125852;
    }
    if ((StringName::configured != '\0') && (local_a8 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pVVar16 = param_2[0xb];
  pVVar1 = param_2[0xc];
  uVar7 = 3;
  if (in_R8D < 4) {
    pVVar2 = param_2[5];
    if (pVVar2 == (Variant *)0x0) {
      iVar8 = 0;
      lVar15 = 0;
    }
    else {
      lVar15 = *(long *)(pVVar2 + -8);
      iVar8 = (int)lVar15;
    }
    if ((int)(3 - in_R8D) <= iVar8) {
      lVar9 = 0;
      do {
        if ((int)lVar9 < (int)in_R8D) {
          pVVar14 = *(Variant **)(param_4 + lVar9 * 8);
        }
        else {
          uVar12 = iVar8 + -3 + (int)lVar9;
          if (lVar15 <= (int)uVar12) {
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,(long)(int)uVar12,lVar15,"p_index",
                       "size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          pVVar14 = pVVar2 + (ulong)uVar12 * 0x18;
        }
        local_98[lVar9] = pVVar14;
        lVar9 = lVar9 + 1;
      } while (lVar9 != 3);
      *in_R9 = 0;
      if (((ulong)pVVar16 & 1) != 0) {
        pVVar16 = *(Variant **)(pVVar16 + *(long *)((long)plVar13 + (long)pVVar1) + -1);
      }
      cVar6 = Variant::can_convert_strict(*(undefined4 *)local_98[2],0x12);
      uVar4 = _LC267;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      Variant::operator_cast_to_Transform3D(local_78);
      cVar6 = Variant::can_convert_strict(*(undefined4 *)local_98[1],2);
      uVar4 = _LC268;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      iVar8 = Variant::operator_cast_to_int(local_98[1]);
      cVar6 = Variant::can_convert_strict(*(undefined4 *)local_98[0]);
      uVar4 = _LC265;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      local_a8 = (Object *)0x0;
      pOVar10 = (Object *)Variant::get_validated_object();
      pOVar5 = local_a8;
      if (pOVar10 != local_a8) {
        if (pOVar10 == (Object *)0x0) {
          if (local_a8 != (Object *)0x0) {
            local_a8 = (Object *)0x0;
LAB_001257ab:
            cVar6 = RefCounted::unreference();
            if (cVar6 != '\0') {
              cVar6 = predelete_handler(pOVar5);
              if (cVar6 != '\0') {
                (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
                Memory::free_static(pOVar5,false);
              }
            }
          }
        }
        else {
          pOVar10 = (Object *)__dynamic_cast(pOVar10,&Object::typeinfo,&Node3DGizmo::typeinfo,0);
          if (pOVar5 != pOVar10) {
            local_a8 = pOVar10;
            if (pOVar10 != (Object *)0x0) {
              cVar6 = RefCounted::reference();
              if (cVar6 == '\0') {
                local_a8 = (Object *)0x0;
              }
            }
            if (pOVar5 != (Object *)0x0) goto LAB_001257ab;
          }
        }
      }
      (*(code *)pVVar16)((Variant *)((long)plVar13 + (long)pVVar1),&local_a8,iVar8);
      if (local_a8 != (Object *)0x0) {
        cVar6 = RefCounted::unreference();
        pOVar5 = local_a8;
        if (cVar6 != '\0') {
          cVar6 = predelete_handler(local_a8);
          if (cVar6 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
      goto LAB_00125852;
    }
    uVar7 = 4;
  }
  *in_R9 = uVar7;
  in_R9[2] = 3;
LAB_00125852:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<NodePath const&>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<NodePath_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char *pcVar5;
  char cVar6;
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
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  plVar10 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar10 != (long *)0x0) && (plVar10[1] != 0)) && (*(char *)(plVar10[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (plVar10[1] == 0) {
      plVar8 = (long *)plVar10[0x23];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*plVar10 + 0x40))(plVar10);
      }
    }
    else {
      plVar8 = (long *)(plVar10[1] + 0x20);
    }
    if (local_48 == (char *)*plVar8) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC169,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      pcVar5 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar10 = (long *)(local_48 + -0x10);
        *plVar10 = *plVar10 + -1;
        UNLOCK();
        if (*plVar10 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar5 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00125c30;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar12 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar11 = param_2[5];
    if (pVVar11 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_00125c80;
LAB_00125c70:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00125c80:
        uVar7 = 4;
        goto LAB_00125c25;
      }
      if (in_R8D == 1) goto LAB_00125c70;
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
    cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar11,0x16);
    uVar4 = _LC269;
    if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_NodePath((Variant *)&local_48);
    (*(code *)pVVar12)((Variant *)((long)plVar10 + (long)pVVar1),(Variant *)&local_48);
    NodePath::~NodePath((NodePath *)&local_48);
  }
  else {
    uVar7 = 3;
LAB_00125c25:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_00125c30:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Basis const&>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<Basis_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char *pcVar5;
  char cVar6;
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
  Variant local_58 [40];
  long local_30;
  
  plVar10 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
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
      _err_print_error(&_LC169,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_68,0,0);
      pcVar5 = local_68;
      if (local_68 != (char *)0x0) {
        LOCK();
        plVar10 = (long *)(local_68 + -0x10);
        *plVar10 = *plVar10 + -1;
        UNLOCK();
        if (*plVar10 == 0) {
          local_68 = (char *)0x0;
          Memory::free_static(pcVar5 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_00125f80;
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
      if (in_R8D != 1) goto LAB_00125fd0;
LAB_00125fc0:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00125fd0:
        uVar7 = 4;
        goto LAB_00125f75;
      }
      if (in_R8D == 1) goto LAB_00125fc0;
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
    cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar11,0x11);
    uVar4 = _LC270;
    if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_Basis(local_58);
    (*(code *)pVVar12)((Variant *)((long)plVar10 + (long)pVVar1),local_58);
  }
  else {
    uVar7 = 3;
LAB_00125f75:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_00125f80:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<World3D>>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Ref<World3D>>::validated_call
          (MethodBindTRC<Ref<World3D>> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  Object *pOVar1;
  char cVar2;
  code *pcVar3;
  long *plVar4;
  Variant **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  Object *local_50;
  Variant **local_48;
  Object *local_40;
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
    if (local_48 == (Variant **)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Variant **)0x11a858;
      local_50 = (Object *)0x0;
      local_40 = (Object *)0x35;
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
      goto LAB_00126246;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    param_2 = *(Variant ***)(param_1 + *(long *)(this + 0x60));
    pcVar3 = *(code **)(pcVar3 + (long)param_2 + -1);
  }
  (*pcVar3)(&local_50,param_1 + *(long *)(this + 0x60),param_2);
  if (local_50 == (Object *)0x0) {
    Variant::ObjData::unref();
  }
  else {
    local_48 = *(Variant ***)(local_50 + 0x60);
    local_40 = local_50;
    Variant::ObjData::ref((ObjData *)(param_3 + 8));
  }
  if (local_50 != (Object *)0x0) {
    cVar2 = RefCounted::unreference();
    pOVar1 = local_50;
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(local_50);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
LAB_00126246:
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
    goto LAB_001264ed;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_00126550;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_00126550:
      uVar6 = 4;
LAB_001264ed:
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
      goto LAB_0012646b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0012646b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_float **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,3);
  uVar4 = _LC271;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  fVar9 = Variant::operator_cast_to_float(this);
                    /* WARNING: Could not recover jumptable at 0x001264c4. Too many branches */
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
      _err_print_error(&_LC169,"./core/object/method_bind.h",0x154,
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
      goto LAB_001265b6;
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
LAB_001265b6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, Vector3 const&, float>(__UnexistingClass*, void
   (__UnexistingClass::*)(Vector3 const&, float), Variant const**, int, Callable::CallError&,
   Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,Vector3_const&,float>
               (__UnexistingClass *param_1,_func_void_Vector3_ptr_float *param_2,Variant **param_3,
               int param_4,CallError *param_5,Vector *param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 in_register_0000000c;
  long *plVar9;
  long lVar10;
  Variant *this;
  uint uVar11;
  int iVar12;
  Variant *this_00;
  long in_FS_OFFSET;
  float fVar13;
  long in_stack_00000008;
  
  plVar9 = (long *)CONCAT44(in_register_0000000c,param_4);
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar11 = (uint)param_5;
  if (uVar11 < 3) {
    lVar2 = *(long *)(in_stack_00000008 + 8);
    iVar7 = 2 - uVar11;
    if (lVar2 == 0) {
      if (iVar7 != 0) goto LAB_00126908;
      this = (Variant *)*plVar9;
LAB_0012695d:
      this_00 = (Variant *)plVar9[1];
    }
    else {
      lVar3 = *(long *)(lVar2 + -8);
      iVar12 = (int)lVar3;
      if (iVar12 < iVar7) {
LAB_00126908:
        uVar8 = 4;
        goto LAB_0012690d;
      }
      if (uVar11 == 0) {
        lVar10 = (long)(iVar12 + -2);
        if (lVar3 <= lVar10) goto LAB_00126978;
        this = (Variant *)(lVar2 + lVar10 * 0x18);
      }
      else {
        this = (Variant *)*plVar9;
        if (uVar11 == 2) goto LAB_0012695d;
      }
      lVar10 = (long)(int)((uVar11 ^ 1) + (iVar12 - iVar7));
      if (lVar3 <= lVar10) {
LAB_00126978:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar10,lVar3,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      this_00 = (Variant *)(lVar2 + lVar10 * 0x18);
    }
    *(undefined4 *)param_6 = 0;
    if (((ulong)param_2 & 1) != 0) {
      param_2 = *(_func_void_Vector3_ptr_float **)
                 (param_2 + *(long *)(param_1 + (long)param_3) + -1);
    }
    cVar6 = Variant::can_convert_strict(*(undefined4 *)this_00,3);
    uVar5 = _LC272;
    if (cVar6 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar5;
    }
    fVar13 = Variant::operator_cast_to_float(this_00);
    cVar6 = Variant::can_convert_strict(*(undefined4 *)this,9);
    uVar5 = _LC260;
    if (cVar6 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar5;
    }
    Variant::operator_cast_to_Vector3(this);
    (*param_2)(param_1 + (long)param_3,fVar13);
  }
  else {
    uVar8 = 3;
LAB_0012690d:
    *(undefined4 *)param_6 = uVar8;
    *(undefined4 *)(param_6 + 8) = 2;
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector3 const&, float>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindT<Vector3_const&,float>::call
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
      _err_print_error(&_LC169,"./core/object/method_bind.h",0x154,
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
      goto LAB_00126a16;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,Vector3_const&,float>
            (p_Var4,(_func_void_Vector3_ptr_float *)param_2[0xb],(Variant **)param_2[0xc],
             (int)param_4,in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00126a16:
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
    goto LAB_00126d1d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_00126d80;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_00126d80:
      uVar6 = 4;
LAB_00126d1d:
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
      goto LAB_00126c9b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_00126c9b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_bool **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,1);
  uVar4 = _LC273;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_bool(this);
                    /* WARNING: Could not recover jumptable at 0x00126cf7. Too many branches */
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
      _err_print_error(&_LC169,"./core/object/method_bind.h",0x154,
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
      goto LAB_00126de6;
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
LAB_00126de6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, Quaternion const&>(__UnexistingClass*, void
   (__UnexistingClass::*)(Quaternion const&), Variant const**, int, Callable::CallError&,
   Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,Quaternion_const&>
               (__UnexistingClass *param_1,_func_void_Quaternion_ptr *param_2,Variant **param_3,
               int param_4,CallError *param_5,Vector *param_6)

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
  undefined4 *puVar9;
  long in_FS_OFFSET;
  long in_stack_00000008;
  Variant aVStack_48 [24];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar8 = (uint)param_5;
  if (uVar8 < 2) {
    lVar1 = *(long *)(in_stack_00000008 + 8);
    if (lVar1 == 0) {
      if (uVar8 != 1) goto LAB_00127168;
LAB_001270e8:
      puVar9 = *(undefined4 **)CONCAT44(in_register_0000000c,param_4);
    }
    else {
      lVar2 = *(long *)(lVar1 + -8);
      if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_00127168:
        uVar6 = 4;
        goto LAB_001270f5;
      }
      if (uVar8 == 1) goto LAB_001270e8;
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
      puVar9 = (undefined4 *)(lVar1 + lVar7 * 0x18);
    }
    *(undefined4 *)param_6 = 0;
    if (((ulong)param_2 & 1) != 0) {
      param_2 = *(_func_void_Quaternion_ptr **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
    }
    cVar5 = Variant::can_convert_strict(*puVar9,0xf);
    uVar4 = _LC274;
    if (cVar5 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar4;
    }
    Variant::operator_cast_to_Quaternion(aVStack_48);
    (*param_2)((Quaternion *)(param_1 + (long)param_3));
  }
  else {
    uVar6 = 3;
LAB_001270f5:
    *(undefined4 *)param_6 = uVar6;
    *(undefined4 *)(param_6 + 8) = 1;
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindT<Quaternion const&>::call(Object*, Variant const**, int, Callable::CallError&) const
    */

Object * MethodBindT<Quaternion_const&>::call
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
      _err_print_error(&_LC169,"./core/object/method_bind.h",0x154,
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
      goto LAB_001271d6;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,Quaternion_const&>
            (p_Var4,(_func_void_Quaternion_ptr *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,
             in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_001271d6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, Node3D::RotationEditMode>(__UnexistingClass*,
   void (__UnexistingClass::*)(Node3D::RotationEditMode), Variant const**, int,
   Callable::CallError&, Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,Node3D::RotationEditMode>
               (__UnexistingClass *param_1,_func_void_RotationEditMode *param_2,Variant **param_3,
               int param_4,CallError *param_5,Vector *param_6)

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
    goto LAB_001274dd;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_00127540;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_00127540:
      uVar6 = 4;
LAB_001274dd:
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
      goto LAB_0012745b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0012745b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_RotationEditMode **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC275;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_long(this);
                    /* WARNING: Could not recover jumptable at 0x001274b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)((char)(param_1 + (long)param_3));
  return;
}



/* MethodBindT<Node3D::RotationEditMode>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindT<Node3D::RotationEditMode>::call
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
      _err_print_error(&_LC169,"./core/object/method_bind.h",0x154,
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
      goto LAB_001275a6;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,Node3D::RotationEditMode>
            (p_Var4,(_func_void_RotationEditMode *)param_2[0xb],(Variant **)param_2[0xc],
             (int)param_4,in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_001275a6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, EulerOrder>(__UnexistingClass*, void
   (__UnexistingClass::*)(EulerOrder), Variant const**, int, Callable::CallError&, Vector<Variant>
   const&) */

void call_with_variant_args_dv<__UnexistingClass,EulerOrder>
               (__UnexistingClass *param_1,_func_void_EulerOrder *param_2,Variant **param_3,
               int param_4,CallError *param_5,Vector *param_6)

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
    goto LAB_001278ad;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_00127910;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_00127910:
      uVar6 = 4;
LAB_001278ad:
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
      goto LAB_0012782b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0012782b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_EulerOrder **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC275;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_long(this);
                    /* WARNING: Could not recover jumptable at 0x00127886. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)((char)(param_1 + (long)param_3));
  return;
}



/* MethodBindT<EulerOrder>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<EulerOrder>::call
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
      _err_print_error(&_LC169,"./core/object/method_bind.h",0x154,
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
      goto LAB_00127976;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,EulerOrder>
            (p_Var4,(_func_void_EulerOrder *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,
             in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00127976:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info_helper<Vector3 const&>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<Vector3_const&>
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
  if (iVar7 != param_1) goto LAB_00127bb7;
  local_78 = 0;
  local_68 = &_LC17;
  local_80 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._8_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,9);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00127cb0:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00127cb0;
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
LAB_00127bb7:
  *param_2 = iVar7 + 1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindT<Vector3 const&>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<Vector3_const&>::_gen_argument_type_info(int param_1)

{
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar1;
  long in_FS_OFFSET;
  int local_14;
  long local_10;
  
  pPVar1 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)pPVar1 = 0;
  *(undefined4 *)(pPVar1 + 0x18) = 0;
  *(undefined8 *)(pPVar1 + 0x20) = 0;
  *(undefined4 *)(pPVar1 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar1 + 8) = (undefined1  [16])0x0;
  local_14 = 0;
  call_get_argument_type_info_helper<Vector3_const&>(in_EDX,&local_14,pPVar1);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector3 const&, Vector3 const&, bool>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<Vector3_const&,Vector3_const&,bool>::_gen_argument_type_info(int param_1)

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
  call_get_argument_type_info_helper<Vector3_const&>(in_EDX,&local_8c,pPVar7);
  call_get_argument_type_info_helper<Vector3_const&>(in_EDX,&local_8c,pPVar7);
  if (in_EDX != local_8c) goto LAB_00127f14;
  local_78 = 0;
  local_68 = &_LC17;
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
LAB_00128010:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00128010;
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
LAB_00127f14:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pPVar7;
}



/* MethodBindT<Vector3 const&, Vector3 const&, Vector3 const&, bool>::_gen_argument_type_info(int)
   const */

PropertyInfo *
MethodBindT<Vector3_const&,Vector3_const&,Vector3_const&,bool>::_gen_argument_type_info(int param_1)

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
  call_get_argument_type_info_helper<Vector3_const&>(in_EDX,&local_8c,pPVar7);
  call_get_argument_type_info_helper<Vector3_const&>(in_EDX,&local_8c,pPVar7);
  call_get_argument_type_info_helper<Vector3_const&>(in_EDX,&local_8c,pPVar7);
  if (in_EDX != local_8c) goto LAB_00128201;
  local_78 = 0;
  local_68 = &_LC17;
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
LAB_001282f8:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_001282f8;
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
LAB_00128201:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pPVar7;
}



/* void call_get_argument_type_info_helper<float>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<float>(int param_1,int *param_2,PropertyInfo *param_3)

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
  if (iVar7 != param_1) goto LAB_00128497;
  local_78 = 0;
  local_68 = &_LC17;
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
LAB_00128590:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00128590;
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
LAB_00128497:
  *param_2 = iVar7 + 1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindT<Vector3 const&, float>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<Vector3_const&,float>::_gen_argument_type_info(int param_1)

{
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar1;
  long in_FS_OFFSET;
  int local_24;
  long local_20;
  
  pPVar1 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)pPVar1 = 0;
  *(undefined4 *)(pPVar1 + 0x18) = 0;
  *(undefined8 *)(pPVar1 + 0x20) = 0;
  *(undefined4 *)(pPVar1 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar1 + 8) = (undefined1  [16])0x0;
  local_24 = 0;
  call_get_argument_type_info_helper<Vector3_const&>(in_EDX,&local_24,pPVar1);
  call_get_argument_type_info_helper<float>(in_EDX,&local_24,pPVar1);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<float>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<float>::_gen_argument_type_info(int param_1)

{
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar1;
  long in_FS_OFFSET;
  int local_14;
  long local_10;
  
  pPVar1 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)pPVar1 = 0;
  *(undefined4 *)(pPVar1 + 0x18) = 0;
  *(undefined8 *)(pPVar1 + 0x20) = 0;
  *(undefined4 *)(pPVar1 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar1 + 8) = (undefined1  [16])0x0;
  local_14 = 0;
  call_get_argument_type_info_helper<float>(in_EDX,&local_14,pPVar1);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info_helper<Ref<Node3DGizmo> >(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<Ref<Node3DGizmo>>
               (int param_1,int *param_2,PropertyInfo *param_3)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  long lVar5;
  int iVar6;
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
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar6 = *param_2;
  if (iVar6 != param_1) goto LAB_00128837;
  local_78 = 0;
  local_68 = "Node3DGizmo";
  local_80 = 0;
  local_60._0_8_ = 0xb;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (char *)CONCAT44(local_68._4_4_,0x18);
  local_50 = 0x11;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00128a0d:
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
    if (local_50 == 0x11) goto LAB_00128a0d;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *(undefined4 *)param_3 = local_68._0_4_;
  if (*(long *)(param_3 + 8) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 8));
    uVar4 = local_60._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *(undefined8 *)(param_3 + 8) = uVar4;
  }
  if (*(long *)(param_3 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar4 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(param_3 + 0x10) = uVar4;
  }
  lVar5 = local_48;
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
        Memory::free_static((void *)(lVar5 + -0x10),false);
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
  uVar4 = local_60._0_8_;
  if (local_60._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_60._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar3._8_8_ = 0;
      auVar3._0_8_ = local_60._8_8_;
      local_60 = auVar3 << 0x40;
      Memory::free_static((void *)(uVar4 + -0x10),false);
    }
  }
  iVar6 = *param_2;
LAB_00128837:
  *param_2 = iVar6 + 1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindT<Ref<Node3DGizmo> >::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<Ref<Node3DGizmo>>::_gen_argument_type_info(int param_1)

{
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar1;
  long in_FS_OFFSET;
  int local_14;
  long local_10;
  
  pPVar1 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)pPVar1 = 0;
  *(undefined4 *)(pPVar1 + 0x18) = 0;
  *(undefined8 *)(pPVar1 + 0x20) = 0;
  *(undefined4 *)(pPVar1 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar1 + 8) = (undefined1  [16])0x0;
  local_14 = 0;
  call_get_argument_type_info_helper<Ref<Node3DGizmo>>(in_EDX,&local_14,pPVar1);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info<Ref<Node3DGizmo>, int, Transform3D>(int, PropertyInfo&) */

void call_get_argument_type_info<Ref<Node3DGizmo>,int,Transform3D>
               (int param_1,PropertyInfo *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  long lVar5;
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
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_8c = 0;
  call_get_argument_type_info_helper<Ref<Node3DGizmo>>(param_1,&local_8c,param_2);
  if (param_1 == local_8c) {
    local_78 = 0;
    local_80 = 0;
    local_68 = &_LC17;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_60._8_8_;
    local_60 = auVar1 << 0x40;
    String::parse_latin1((StrRange *)&local_80);
    local_68 = (undefined *)CONCAT44(local_68._4_4_,2);
  }
  else {
    local_8c = local_8c + 1;
    if (param_1 != local_8c) goto LAB_00128b81;
    local_78 = 0;
    local_80 = 0;
    local_68 = &_LC17;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = local_60._8_8_;
    local_60 = auVar3 << 0x40;
    String::parse_latin1((StrRange *)&local_80);
    local_68 = (undefined *)CONCAT44(local_68._4_4_,0x12);
  }
  local_88 = 0;
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00128c78:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00128c78;
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
  *(undefined4 *)param_2 = local_68._0_4_;
  if (*(long *)(param_2 + 8) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 8));
    uVar4 = local_60._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *(undefined8 *)(param_2 + 8) = uVar4;
  }
  if (*(long *)(param_2 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar4 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(param_2 + 0x10) = uVar4;
  }
  *(int *)(param_2 + 0x18) = local_50;
  if (*(long *)(param_2 + 0x20) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 0x20));
    lVar5 = local_48;
    local_48 = 0;
    *(long *)(param_2 + 0x20) = lVar5;
  }
  *(undefined4 *)(param_2 + 0x28) = local_40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
LAB_00128b81:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindT<Ref<Node3DGizmo>, int, Transform3D>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<Ref<Node3DGizmo>,int,Transform3D>::_gen_argument_type_info(int param_1)

{
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar1;
  
  pPVar1 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  *(undefined4 *)pPVar1 = 0;
  *(undefined4 *)(pPVar1 + 0x18) = 0;
  *(undefined8 *)(pPVar1 + 0x20) = 0;
  *(undefined4 *)(pPVar1 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar1 + 8) = (undefined1  [16])0x0;
  call_get_argument_type_info<Ref<Node3DGizmo>,int,Transform3D>(in_EDX,pPVar1);
  return pPVar1;
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
/* MethodBindTRC<Vector3, Vector3>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Vector3,Vector3>::~MethodBindTRC(MethodBindTRC<Vector3,Vector3> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Vector3 const&, Vector3 const&, Vector3 const&, bool>::~MethodBindT() */

void __thiscall
MethodBindT<Vector3_const&,Vector3_const&,Vector3_const&,bool>::~MethodBindT
          (MethodBindT<Vector3_const&,Vector3_const&,Vector3_const&,bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Vector3 const&, Vector3 const&, bool>::~MethodBindT() */

void __thiscall
MethodBindT<Vector3_const&,Vector3_const&,bool>::~MethodBindT
          (MethodBindT<Vector3_const&,Vector3_const&,bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Vector3 const&>::~MethodBindT() */

void __thiscall MethodBindT<Vector3_const&>::~MethodBindT(MethodBindT<Vector3_const&> *this)

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
/* MethodBindT<Vector3 const&, float>::~MethodBindT() */

void __thiscall
MethodBindT<Vector3_const&,float>::~MethodBindT(MethodBindT<Vector3_const&,float> *this)

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
/* MethodBindT<bool>::~MethodBindT() */

void __thiscall MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Ref<Node3DGizmo>, int, Transform3D>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<Node3DGizmo>,int,Transform3D>::~MethodBindT
          (MethodBindT<Ref<Node3DGizmo>,int,Transform3D> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<TypedArray<Node3DGizmo>>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<TypedArray<Node3DGizmo>>::~MethodBindTRC(MethodBindTRC<TypedArray<Node3DGizmo>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Ref<Node3DGizmo> >::~MethodBindT() */

void __thiscall MethodBindT<Ref<Node3DGizmo>>::~MethodBindT(MethodBindT<Ref<Node3DGizmo>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<NodePath>::~MethodBindTRC() */

void __thiscall MethodBindTRC<NodePath>::~MethodBindTRC(MethodBindTRC<NodePath> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<NodePath const&>::~MethodBindT() */

void __thiscall MethodBindT<NodePath_const&>::~MethodBindT(MethodBindT<NodePath_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Ref<World3D>>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Ref<World3D>>::~MethodBindTRC(MethodBindTRC<Ref<World3D>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Node3D*>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Node3D*>::~MethodBindTRC(MethodBindTRC<Node3D*> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Vector3>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Vector3>::~MethodBindTRC(MethodBindTRC<Vector3> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Basis>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Basis>::~MethodBindTRC(MethodBindTRC<Basis> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Basis const&>::~MethodBindT() */

void __thiscall MethodBindT<Basis_const&>::~MethodBindT(MethodBindT<Basis_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<Transform3D>::~MethodBindTR() */

void __thiscall MethodBindTR<Transform3D>::~MethodBindTR(MethodBindTR<Transform3D> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Transform3D>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Transform3D>::~MethodBindTRC(MethodBindTRC<Transform3D> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Transform3D const&>::~MethodBindT() */

void __thiscall MethodBindT<Transform3D_const&>::~MethodBindT(MethodBindT<Transform3D_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Quaternion>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Quaternion>::~MethodBindTRC(MethodBindTRC<Quaternion> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Quaternion const&>::~MethodBindT() */

void __thiscall MethodBindT<Quaternion_const&>::~MethodBindT(MethodBindT<Quaternion_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Node3D::RotationEditMode>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Node3D::RotationEditMode>::~MethodBindTRC
          (MethodBindTRC<Node3D::RotationEditMode> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Node3D::RotationEditMode>::~MethodBindT() */

void __thiscall
MethodBindT<Node3D::RotationEditMode>::~MethodBindT(MethodBindT<Node3D::RotationEditMode> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<EulerOrder>::~MethodBindTRC() */

void __thiscall MethodBindTRC<EulerOrder>::~MethodBindTRC(MethodBindTRC<EulerOrder> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<EulerOrder>::~MethodBindT() */

void __thiscall MethodBindT<EulerOrder>::~MethodBindT(MethodBindT<EulerOrder> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<Node3D, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Node3D,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Node3D,void> *this)

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


