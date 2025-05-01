
/* Node2D::_edit_get_position() const */

undefined8 __thiscall Node2D::_edit_get_position(Node2D *this)

{
  return *(undefined8 *)(this + 0x54c);
}



/* Node2D::_edit_get_scale() const */

undefined8 __thiscall Node2D::_edit_get_scale(Node2D *this)

{
  return *(undefined8 *)(this + 0x558);
}



/* Node2D::_edit_get_rotation() const */

undefined4 __thiscall Node2D::_edit_get_rotation(Node2D *this)

{
  return *(undefined4 *)(this + 0x554);
}



/* Node2D::_edit_use_rotation() const */

undefined8 Node2D::_edit_use_rotation(void)

{
  return 1;
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



/* Node2D::_set_xform_dirty(bool) const */

void __thiscall Node2D::_set_xform_dirty(Node2D *this,bool param_1)

{
  long in_FS_OFFSET;
  
  if (_GLOBAL_OFFSET_TABLE_ != (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    Node::current_process_thread_group();
  }
  if (*(long *)(in_FS_OFFSET + lRam00000000001000e5) != 0) {
    if (!param_1) {
      this[0x548] = (Node2D)param_1;
      return;
    }
    this[0x548] = (Node2D)0x1;
    return;
  }
  this[0x548] = (Node2D)param_1;
  return;
}



/* Node2D::_update_xform_values() const */

void __thiscall Node2D::_update_xform_values(Node2D *this)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  bool bVar2;
  undefined4 uVar3;
  
  uVar3 = Transform2D::get_rotation();
  *(undefined4 *)(this + 0x554) = uVar3;
  uVar3 = Transform2D::get_skew();
  *(undefined4 *)(this + 0x560) = uVar3;
  *(undefined8 *)(this + 0x54c) = *(undefined8 *)(this + 0x574);
  uVar1 = Transform2D::get_scale();
  bVar2 = _GLOBAL_OFFSET_TABLE_ != (undefined *)0x0;
  *(undefined8 *)(this + 0x558) = uVar1;
  if (bVar2) {
                    /* WARNING: Subroutine does not return */
    Node::current_process_thread_group();
  }
  if (*(long *)(in_FS_OFFSET + lRam0000000000100188) != 0) {
    this[0x548] = (Node2D)0x0;
    return;
  }
  this[0x548] = (Node2D)0x0;
  return;
}



/* Node2D::_update_transform() */

void __thiscall Node2D::_update_transform(Node2D *this)

{
  float __x;
  float fVar1;
  float fVar2;
  float fVar3;
  long *plVar4;
  float local_20;
  float local_1c;
  
  __x = *(float *)(this + 0x554);
  sincosf(__x,&local_1c,&local_20);
  fVar3 = local_1c;
  fVar2 = local_20;
  fVar1 = *(float *)(this + 0x558);
  sincosf(__x + *(float *)(this + 0x560),&local_1c,&local_20);
  local_1c = (float)((uint)local_1c ^ _LC7);
  *(undefined8 *)(this + 0x574) = *(undefined8 *)(this + 0x54c);
  *(float *)(this + 0x564) = fVar2 * fVar1;
  *(float *)(this + 0x568) = fVar1 * fVar3;
  *(float *)(this + 0x56c) = local_1c * *(float *)(this + 0x55c);
  *(float *)(this + 0x570) = *(float *)(this + 0x55c) * local_20;
  plVar4 = (long *)RenderingServer::get_singleton();
  (**(code **)(*plVar4 + 0xeb0))(plVar4,*(undefined8 *)(this + 0x428),this + 0x564);
  CanvasItem::_notify_transform((CanvasItem *)this);
  if (((((byte)this[0x2fa] & 0x40) != 0) && (this[0x48d] == (Node2D)0x0)) &&
     (this[0x490] != (Node2D)0x0)) {
    Object::notification((int)this,true);
    return;
  }
  return;
}



/* Node2D::_edit_set_state(Dictionary const&) */

void __thiscall Node2D::_edit_set_state(Node2D *this,Dictionary *param_1)

{
  undefined8 uVar1;
  Variant *pVVar2;
  long in_FS_OFFSET;
  float fVar3;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_48,"position");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)param_1);
  uVar1 = Variant::operator_cast_to_Vector2(pVVar2);
  *(undefined8 *)(this + 0x54c) = uVar1;
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_48,"rotation");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)param_1);
  fVar3 = Variant::operator_cast_to_float(pVVar2);
  *(float *)(this + 0x554) = fVar3;
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_48,"scale");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)param_1);
  uVar1 = Variant::operator_cast_to_Vector2(pVVar2);
  *(undefined8 *)(this + 0x558) = uVar1;
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_48,"skew");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)param_1);
  fVar3 = Variant::operator_cast_to_float(pVVar2);
  *(float *)(this + 0x560) = fVar3;
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    _update_transform(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Node2D::_edit_set_rotation(float) */

void __thiscall Node2D::_edit_set_rotation(Node2D *this,float param_1)

{
  *(float *)(this + 0x554) = param_1;
  _update_transform(this);
  return;
}



/* Node2D::_edit_set_rect(Rect2 const&) */

void __thiscall Node2D::_edit_set_rect(Node2D *this,Rect2 *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  char cVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  float local_20;
  float local_1c;
  
  if ((*(code **)(*(long *)this + 600) != CanvasItem::_edit_use_rect) &&
     (cVar3 = (**(code **)(*(long *)this + 600))(), cVar3 != '\0')) {
    if (*(code **)(*(long *)this + 0x260) == CanvasItem::_edit_get_rect) {
      fVar9 = 0.0;
      fVar10 = *(float *)(param_1 + 8);
      fVar5 = 0.0;
      fVar7 = _LC12;
      fVar4 = _LC12;
    }
    else {
      auVar12 = (**(code **)(*(long *)this + 0x260))(this);
      fVar7 = auVar12._8_4_;
      if (fVar7 == 0.0) {
        fVar10 = *(float *)(param_1 + 8);
        fVar9 = 0.0;
        fVar7 = _LC12;
      }
      else {
        fVar10 = *(float *)(param_1 + 8);
        fVar9 = (float)(auVar12._0_4_ ^ _LC7) / fVar7;
        fVar7 = fVar10 / fVar7;
      }
      fVar4 = auVar12._12_4_;
      if (fVar4 == 0.0) {
        fVar5 = 0.0;
        fVar4 = _LC12;
      }
      else {
        fVar5 = (float)(auVar12._4_4_ ^ _LC7) / fVar4;
        fVar4 = *(float *)(param_1 + 0xc) / fVar4;
      }
    }
    uVar2 = _LC7;
    fVar8 = fVar9 * fVar10 + *(float *)param_1;
    fVar6 = *(float *)(param_1 + 4) + fVar5 * *(float *)(param_1 + 0xc);
    fVar10 = *(float *)(this + 0x554);
    sincosf(fVar10,&local_1c,&local_20);
    fVar5 = local_1c;
    fVar9 = local_20;
    uVar1 = *(undefined8 *)(this + 0x554);
    sincosf(fVar10 + *(float *)(this + 0x560),&local_1c,&local_20);
    fVar10 = (float)*(undefined8 *)(this + 0x55c);
    fVar11 = (float)((ulong)uVar1 >> 0x20);
    *(ulong *)(this + 0x54c) =
         CONCAT44(local_20 * fVar10 * fVar6 + fVar8 * fVar11 * fVar5 + 0.0 +
                  (float)((ulong)*(undefined8 *)(this + 0x54c) >> 0x20),
                  (float)((uint)local_1c ^ uVar2) * fVar10 * fVar6 + fVar8 * fVar11 * fVar9 + 0.0 +
                  (float)*(undefined8 *)(this + 0x54c));
    *(ulong *)(this + 0x558) = CONCAT44(fVar10 * fVar4,fVar11 * fVar7);
    _update_transform(this);
    return;
  }
  _err_print_error("_edit_set_rect","scene/2d/node_2d.cpp",0x55,
                   "Condition \"!_edit_use_rect()\" is true.",0,0);
  return;
}



/* WARNING: Removing unreachable block (ram,0x00100745) */
/* WARNING: Removing unreachable block (ram,0x00100725) */
/* WARNING: Removing unreachable block (ram,0x001007a0) */
/* WARNING: Removing unreachable block (ram,0x001007c8) */
/* WARNING: Removing unreachable block (ram,0x001007d5) */
/* WARNING: Removing unreachable block (ram,0x0010087a) */
/* WARNING: Removing unreachable block (ram,0x00100752) */
/* WARNING: Removing unreachable block (ram,0x001007a9) */
/* WARNING: Removing unreachable block (ram,0x00100757) */
/* WARNING: Removing unreachable block (ram,0x00100736) */
/* WARNING: Removing unreachable block (ram,0x0010073b) */
/* WARNING: Removing unreachable block (ram,0x0010075c) */
/* WARNING: Removing unreachable block (ram,0x001007ae) */
/* WARNING: Removing unreachable block (ram,0x00100764) */
/* WARNING: Removing unreachable block (ram,0x001007b7) */
/* WARNING: Removing unreachable block (ram,0x0010076f) */
/* WARNING: Removing unreachable block (ram,0x0010078e) */
/* WARNING: Removing unreachable block (ram,0x00100885) */
/* Node2D::set_position(Vector2 const&) */

void __thiscall Node2D::set_position(Node2D *this,Vector2 *param_1)

{
                    /* WARNING: Subroutine does not return */
  Node::current_process_thread_group();
}



/* Node2D::_edit_set_position(Vector2 const&) */

void __thiscall Node2D::_edit_set_position(Node2D *this,Vector2 *param_1)

{
  set_position(this,param_1);
  return;
}



/* WARNING: Removing unreachable block (ram,0x001008f7) */
/* WARNING: Removing unreachable block (ram,0x001008d7) */
/* WARNING: Removing unreachable block (ram,0x00100950) */
/* WARNING: Removing unreachable block (ram,0x00100978) */
/* WARNING: Removing unreachable block (ram,0x00100985) */
/* WARNING: Removing unreachable block (ram,0x00100a2a) */
/* WARNING: Removing unreachable block (ram,0x00100904) */
/* WARNING: Removing unreachable block (ram,0x00100959) */
/* WARNING: Removing unreachable block (ram,0x00100909) */
/* WARNING: Removing unreachable block (ram,0x001008e8) */
/* WARNING: Removing unreachable block (ram,0x001008ed) */
/* WARNING: Removing unreachable block (ram,0x0010090e) */
/* WARNING: Removing unreachable block (ram,0x0010095e) */
/* WARNING: Removing unreachable block (ram,0x00100916) */
/* WARNING: Removing unreachable block (ram,0x00100967) */
/* WARNING: Removing unreachable block (ram,0x00100921) */
/* WARNING: Removing unreachable block (ram,0x0010093c) */
/* WARNING: Removing unreachable block (ram,0x00100a35) */
/* Node2D::set_rotation(float) */

void __thiscall Node2D::set_rotation(Node2D *this,float param_1)

{
                    /* WARNING: Subroutine does not return */
  Node::current_process_thread_group();
}



/* WARNING: Removing unreachable block (ram,0x00100a77) */
/* WARNING: Removing unreachable block (ram,0x00100ad8) */
/* WARNING: Removing unreachable block (ram,0x00100ae1) */
/* WARNING: Removing unreachable block (ram,0x00100a88) */
/* WARNING: Removing unreachable block (ram,0x00100a8d) */
/* WARNING: Removing unreachable block (ram,0x00100a97) */
/* WARNING: Removing unreachable block (ram,0x00100aea) */
/* WARNING: Removing unreachable block (ram,0x00100b8f) */
/* WARNING: Removing unreachable block (ram,0x00100aa0) */
/* WARNING: Removing unreachable block (ram,0x00100ab4) */
/* WARNING: Removing unreachable block (ram,0x00100b9a) */
/* Node2D::set_rotation_degrees(float) */

void __thiscall Node2D::set_rotation_degrees(Node2D *this,float param_1)

{
                    /* WARNING: Subroutine does not return */
  Node::current_process_thread_group();
}



/* WARNING: Removing unreachable block (ram,0x00100bf7) */
/* WARNING: Removing unreachable block (ram,0x00100bd7) */
/* WARNING: Removing unreachable block (ram,0x00100c50) */
/* WARNING: Removing unreachable block (ram,0x00100c78) */
/* WARNING: Removing unreachable block (ram,0x00100c85) */
/* WARNING: Removing unreachable block (ram,0x00100d2a) */
/* WARNING: Removing unreachable block (ram,0x00100c04) */
/* WARNING: Removing unreachable block (ram,0x00100c59) */
/* WARNING: Removing unreachable block (ram,0x00100c09) */
/* WARNING: Removing unreachable block (ram,0x00100be8) */
/* WARNING: Removing unreachable block (ram,0x00100bed) */
/* WARNING: Removing unreachable block (ram,0x00100c0e) */
/* WARNING: Removing unreachable block (ram,0x00100c5e) */
/* WARNING: Removing unreachable block (ram,0x00100c16) */
/* WARNING: Removing unreachable block (ram,0x00100c67) */
/* WARNING: Removing unreachable block (ram,0x00100c21) */
/* WARNING: Removing unreachable block (ram,0x00100c3c) */
/* WARNING: Removing unreachable block (ram,0x00100d35) */
/* Node2D::set_skew(float) */

void __thiscall Node2D::set_skew(Node2D *this,float param_1)

{
                    /* WARNING: Subroutine does not return */
  Node::current_process_thread_group();
}



/* WARNING: Removing unreachable block (ram,0x00100d99) */
/* WARNING: Removing unreachable block (ram,0x00100d75) */
/* WARNING: Removing unreachable block (ram,0x00100e40) */
/* WARNING: Removing unreachable block (ram,0x00100e70) */
/* WARNING: Removing unreachable block (ram,0x00100e7d) */
/* WARNING: Removing unreachable block (ram,0x00100f22) */
/* WARNING: Removing unreachable block (ram,0x00100da6) */
/* WARNING: Removing unreachable block (ram,0x00100e49) */
/* WARNING: Removing unreachable block (ram,0x00100dab) */
/* WARNING: Removing unreachable block (ram,0x00100d8a) */
/* WARNING: Removing unreachable block (ram,0x00100d8f) */
/* WARNING: Removing unreachable block (ram,0x00100db0) */
/* WARNING: Removing unreachable block (ram,0x00100e52) */
/* WARNING: Removing unreachable block (ram,0x00100dbc) */
/* WARNING: Removing unreachable block (ram,0x00100e5f) */
/* WARNING: Removing unreachable block (ram,0x00100dcb) */
/* WARNING: Removing unreachable block (ram,0x00100dec) */
/* WARNING: Removing unreachable block (ram,0x00100df4) */
/* WARNING: Removing unreachable block (ram,0x00100e08) */
/* WARNING: Removing unreachable block (ram,0x00100e10) */
/* WARNING: Removing unreachable block (ram,0x00100e24) */
/* WARNING: Removing unreachable block (ram,0x00100f2d) */
/* Node2D::set_scale(Vector2 const&) */

void __thiscall Node2D::set_scale(Node2D *this,Vector2 *param_1)

{
                    /* WARNING: Subroutine does not return */
  Node::current_process_thread_group();
}



/* Node2D::_edit_set_scale(Vector2 const&) */

void __thiscall Node2D::_edit_set_scale(Node2D *this,Vector2 *param_1)

{
  set_scale(this,param_1);
  return;
}



/* WARNING: Removing unreachable block (ram,0x00100f80) */
/* WARNING: Removing unreachable block (ram,0x00100fe8) */
/* WARNING: Removing unreachable block (ram,0x00100ff5) */
/* WARNING: Removing unreachable block (ram,0x00101002) */
/* WARNING: Removing unreachable block (ram,0x001010a0) */
/* WARNING: Removing unreachable block (ram,0x00100f8f) */
/* WARNING: Removing unreachable block (ram,0x00100f94) */
/* WARNING: Removing unreachable block (ram,0x00100f99) */
/* WARNING: Removing unreachable block (ram,0x00100fd0) */
/* WARNING: Removing unreachable block (ram,0x00100fa1) */
/* WARNING: Removing unreachable block (ram,0x00100fdb) */
/* WARNING: Removing unreachable block (ram,0x00100faa) */
/* WARNING: Removing unreachable block (ram,0x00100fb2) */
/* WARNING: Removing unreachable block (ram,0x00100fc6) */
/* WARNING: Removing unreachable block (ram,0x001010ae) */
/* Node2D::get_position() const */

void __thiscall Node2D::get_position(Node2D *this)

{
                    /* WARNING: Subroutine does not return */
  Node::current_process_thread_group();
}



/* WARNING: Removing unreachable block (ram,0x001010f0) */
/* WARNING: Removing unreachable block (ram,0x00101158) */
/* WARNING: Removing unreachable block (ram,0x00101165) */
/* WARNING: Removing unreachable block (ram,0x00101172) */
/* WARNING: Removing unreachable block (ram,0x00101210) */
/* WARNING: Removing unreachable block (ram,0x001010ff) */
/* WARNING: Removing unreachable block (ram,0x00101104) */
/* WARNING: Removing unreachable block (ram,0x00101109) */
/* WARNING: Removing unreachable block (ram,0x00101140) */
/* WARNING: Removing unreachable block (ram,0x00101111) */
/* WARNING: Removing unreachable block (ram,0x0010114b) */
/* WARNING: Removing unreachable block (ram,0x0010111a) */
/* WARNING: Removing unreachable block (ram,0x00101122) */
/* WARNING: Removing unreachable block (ram,0x00101136) */
/* WARNING: Removing unreachable block (ram,0x0010121e) */
/* Node2D::get_rotation() const */

void __thiscall Node2D::get_rotation(Node2D *this)

{
                    /* WARNING: Subroutine does not return */
  Node::current_process_thread_group();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Node2D::get_rotation_degrees() const */

undefined8 __thiscall Node2D::get_rotation_degrees(Node2D *this)

{
  char cVar1;
  long in_FS_OFFSET;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  CowData<char32_t> aCStack_48 [8];
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  undefined8 uVar2;
  undefined8 extraout_XMM0_Qb;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (_GLOBAL_OFFSET_TABLE_ != (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    Node::current_process_thread_group();
  }
  if (*(long *)(in_FS_OFFSET + lRam0000000000101265) == 0) {
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
      _err_print_error("get_rotation_degrees","scene/2d/node_2d.cpp",0xde,
                       "Condition \"!is_readable_from_caller_thread()\" is true. Returning: (0)",
                       (CowData<char32_t> *)&local_38,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
      CowData<char32_t>::_unref(aCStack_48);
      uVar2 = 0;
      goto LAB_0010127c;
    }
  }
  auVar3._0_8_ = get_rotation(this);
  auVar3._8_8_ = extraout_XMM0_Qb;
  auVar4._4_12_ = auVar3._4_12_;
  auVar4._0_4_ = (float)auVar3._0_8_ * __LC38;
  uVar2 = auVar4._0_8_;
LAB_0010127c:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x00101390) */
/* WARNING: Removing unreachable block (ram,0x001013f8) */
/* WARNING: Removing unreachable block (ram,0x00101405) */
/* WARNING: Removing unreachable block (ram,0x00101412) */
/* WARNING: Removing unreachable block (ram,0x001014b0) */
/* WARNING: Removing unreachable block (ram,0x0010139f) */
/* WARNING: Removing unreachable block (ram,0x001013a4) */
/* WARNING: Removing unreachable block (ram,0x001013a9) */
/* WARNING: Removing unreachable block (ram,0x001013e0) */
/* WARNING: Removing unreachable block (ram,0x001013b1) */
/* WARNING: Removing unreachable block (ram,0x001013eb) */
/* WARNING: Removing unreachable block (ram,0x001013ba) */
/* WARNING: Removing unreachable block (ram,0x001013c2) */
/* WARNING: Removing unreachable block (ram,0x001013d6) */
/* WARNING: Removing unreachable block (ram,0x001014be) */
/* Node2D::get_skew() const */

void __thiscall Node2D::get_skew(Node2D *this)

{
                    /* WARNING: Subroutine does not return */
  Node::current_process_thread_group();
}



/* WARNING: Removing unreachable block (ram,0x00101500) */
/* WARNING: Removing unreachable block (ram,0x00101568) */
/* WARNING: Removing unreachable block (ram,0x00101575) */
/* WARNING: Removing unreachable block (ram,0x00101582) */
/* WARNING: Removing unreachable block (ram,0x00101620) */
/* WARNING: Removing unreachable block (ram,0x0010150f) */
/* WARNING: Removing unreachable block (ram,0x00101514) */
/* WARNING: Removing unreachable block (ram,0x00101519) */
/* WARNING: Removing unreachable block (ram,0x00101550) */
/* WARNING: Removing unreachable block (ram,0x00101521) */
/* WARNING: Removing unreachable block (ram,0x0010155b) */
/* WARNING: Removing unreachable block (ram,0x0010152a) */
/* WARNING: Removing unreachable block (ram,0x00101532) */
/* WARNING: Removing unreachable block (ram,0x00101546) */
/* WARNING: Removing unreachable block (ram,0x0010162e) */
/* Node2D::get_scale() const */

void __thiscall Node2D::get_scale(Node2D *this)

{
                    /* WARNING: Subroutine does not return */
  Node::current_process_thread_group();
}



/* Node2D::_edit_get_state() const */

void Node2D::_edit_get_state(void)

{
  char cVar1;
  Variant *pVVar2;
  Node2D *in_RSI;
  Dictionary *in_RDI;
  long in_FS_OFFSET;
  float fVar3;
  undefined8 local_80;
  int local_78 [8];
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Dictionary::Dictionary(in_RDI);
  local_80 = get_position(in_RSI);
  Variant::Variant((Variant *)local_58,(Vector2 *)&local_80);
  Variant::Variant((Variant *)local_78,"position");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)in_RDI);
  if (pVVar2 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_58[0];
    *(undefined8 *)(pVVar2 + 8) = local_50;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  fVar3 = (float)get_rotation(in_RSI);
  Variant::Variant((Variant *)local_58,fVar3);
  Variant::Variant((Variant *)local_78,"rotation");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)in_RDI);
  if (pVVar2 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_58[0];
    *(undefined8 *)(pVVar2 + 8) = local_50;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  local_80 = get_scale(in_RSI);
  Variant::Variant((Variant *)local_58,(Vector2 *)&local_80);
  Variant::Variant((Variant *)local_78,"scale");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)in_RDI);
  if (pVVar2 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_58[0];
    *(undefined8 *)(pVVar2 + 8) = local_50;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  fVar3 = (float)get_skew(in_RSI);
  Variant::Variant((Variant *)local_58,fVar3);
  Variant::Variant((Variant *)local_78,"skew");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)in_RDI);
  if (pVVar2 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_58[0];
    *(undefined8 *)(pVVar2 + 8) = local_50;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Node2D::get_transform() const */

void Node2D::get_transform(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
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
  if (*(long *)(in_FS_OFFSET + lRam0000000000101a1a) == 0) {
    cVar3 = is_current_thread_safe_for_nodes();
    if ((cVar3 == '\0') && ((*(byte *)(in_RSI + 0x2fa) & 0x40) != 0)) {
      Node::get_description();
      local_48 = 
      "This function in this node (%s) can only be accessed from either the main thread or a thread group. Use call_deferred() instead."
      ;
      local_40 = 0x80;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<String>((CowData<char32_t> *)&local_48,(StrRange *)&local_50,aCStack_58);
      _err_print_error("get_transform","scene/2d/node_2d.cpp",0xf5,
                       "Condition \"!is_readable_from_caller_thread()\" is true. Returning: (Transform2D())"
                       ,(CowData<char32_t> *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      CowData<char32_t>::_unref(aCStack_58);
      *in_RDI = 0x3f800000;
      in_RDI[1] = 0x3f80000000000000;
      in_RDI[2] = 0;
      goto LAB_00101a37;
    }
  }
  uVar1 = *(undefined8 *)(in_RSI + 0x564);
  uVar2 = *(undefined8 *)(in_RSI + 0x56c);
  in_RDI[2] = *(undefined8 *)(in_RSI + 0x574);
  *in_RDI = uVar1;
  in_RDI[1] = uVar2;
LAB_00101a37:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x00101b66) */
/* WARNING: Removing unreachable block (ram,0x00101bc8) */
/* WARNING: Removing unreachable block (ram,0x00101bd1) */
/* WARNING: Removing unreachable block (ram,0x00101b77) */
/* WARNING: Removing unreachable block (ram,0x00101b7c) */
/* WARNING: Removing unreachable block (ram,0x00101b86) */
/* WARNING: Removing unreachable block (ram,0x00101bda) */
/* WARNING: Removing unreachable block (ram,0x00101c80) */
/* WARNING: Removing unreachable block (ram,0x00101b8f) */
/* WARNING: Removing unreachable block (ram,0x00101bab) */
/* WARNING: Removing unreachable block (ram,0x00101c89) */
/* Node2D::rotate(float) */

void __thiscall Node2D::rotate(Node2D *this,float param_1)

{
                    /* WARNING: Subroutine does not return */
  Node::current_process_thread_group();
}



/* WARNING: Removing unreachable block (ram,0x00101cc5) */
/* WARNING: Removing unreachable block (ram,0x00101d38) */
/* WARNING: Removing unreachable block (ram,0x00101d41) */
/* WARNING: Removing unreachable block (ram,0x00101cd6) */
/* WARNING: Removing unreachable block (ram,0x00101cdb) */
/* WARNING: Removing unreachable block (ram,0x00101ce5) */
/* WARNING: Removing unreachable block (ram,0x00101d4a) */
/* WARNING: Removing unreachable block (ram,0x00101cee) */
/* WARNING: Removing unreachable block (ram,0x00101d15) */
/* WARNING: Removing unreachable block (ram,0x00101d29) */
/* WARNING: Removing unreachable block (ram,0x00101de4) */
/* Node2D::translate(Vector2 const&) */

void __thiscall Node2D::translate(Node2D *this,Vector2 *param_1)

{
                    /* WARNING: Subroutine does not return */
  Node::current_process_thread_group();
}



/* WARNING: Removing unreachable block (ram,0x00101e25) */
/* WARNING: Removing unreachable block (ram,0x00101e98) */
/* WARNING: Removing unreachable block (ram,0x00101ea1) */
/* WARNING: Removing unreachable block (ram,0x00101e36) */
/* WARNING: Removing unreachable block (ram,0x00101e3b) */
/* WARNING: Removing unreachable block (ram,0x00101e45) */
/* WARNING: Removing unreachable block (ram,0x00101eaa) */
/* WARNING: Removing unreachable block (ram,0x00101e4e) */
/* WARNING: Removing unreachable block (ram,0x00101e75) */
/* WARNING: Removing unreachable block (ram,0x00101e89) */
/* WARNING: Removing unreachable block (ram,0x00101f44) */
/* Node2D::apply_scale(Vector2 const&) */

void __thiscall Node2D::apply_scale(Node2D *this,Vector2 *param_1)

{
                    /* WARNING: Subroutine does not return */
  Node::current_process_thread_group();
}



/* WARNING: Removing unreachable block (ram,0x00101f93) */
/* WARNING: Removing unreachable block (ram,0x00102038) */
/* WARNING: Removing unreachable block (ram,0x00102041) */
/* WARNING: Removing unreachable block (ram,0x00101fa8) */
/* WARNING: Removing unreachable block (ram,0x00101fad) */
/* WARNING: Removing unreachable block (ram,0x00101fb7) */
/* WARNING: Removing unreachable block (ram,0x0010204e) */
/* WARNING: Removing unreachable block (ram,0x00101fc4) */
/* WARNING: Removing unreachable block (ram,0x001020f0) */
/* WARNING: Removing unreachable block (ram,0x00101fe8) */
/* WARNING: Removing unreachable block (ram,0x00102014) */
/* WARNING: Removing unreachable block (ram,0x00102028) */
/* WARNING: Removing unreachable block (ram,0x001020ff) */
/* Node2D::move_x(float, bool) */

void __thiscall Node2D::move_x(Node2D *this,float param_1,bool param_2)

{
                    /* WARNING: Subroutine does not return */
  Node::current_process_thread_group();
}



/* WARNING: Removing unreachable block (ram,0x00102153) */
/* WARNING: Removing unreachable block (ram,0x001021f8) */
/* WARNING: Removing unreachable block (ram,0x00102201) */
/* WARNING: Removing unreachable block (ram,0x00102168) */
/* WARNING: Removing unreachable block (ram,0x0010216d) */
/* WARNING: Removing unreachable block (ram,0x00102177) */
/* WARNING: Removing unreachable block (ram,0x0010220e) */
/* WARNING: Removing unreachable block (ram,0x00102184) */
/* WARNING: Removing unreachable block (ram,0x001022b0) */
/* WARNING: Removing unreachable block (ram,0x001021a8) */
/* WARNING: Removing unreachable block (ram,0x001021d4) */
/* WARNING: Removing unreachable block (ram,0x001021e8) */
/* WARNING: Removing unreachable block (ram,0x001022bf) */
/* Node2D::move_y(float, bool) */

void __thiscall Node2D::move_y(Node2D *this,float param_1,bool param_2)

{
                    /* WARNING: Subroutine does not return */
  Node::current_process_thread_group();
}



/* Node2D::get_global_position() const */

undefined8 __thiscall Node2D::get_global_position(Node2D *this)

{
  char cVar1;
  long in_FS_OFFSET;
  CowData<char32_t> aCStack_58 [8];
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  undefined1 local_38 [16];
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (_GLOBAL_OFFSET_TABLE_ != (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    Node::current_process_thread_group();
  }
  if (*(long *)(in_FS_OFFSET + lRam0000000000102305) == 0) {
    cVar1 = is_current_thread_safe_for_nodes();
    if ((cVar1 == '\0') && (((byte)this[0x2fa] & 0x40) != 0)) {
      Node::get_description();
      local_48 = 
      "This function in this node (%s) can only be accessed from either the main thread or a thread group. Use call_deferred() instead."
      ;
      local_40 = 0x80;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<String>((CowData<char32_t> *)&local_48,(StrRange *)&local_50,aCStack_58);
      _err_print_error("get_global_position","scene/2d/node_2d.cpp",0x122,
                       "Condition \"!is_readable_from_caller_thread()\" is true. Returning: (Point2())"
                       ,(CowData<char32_t> *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      CowData<char32_t>::_unref(aCStack_58);
      local_28 = 0;
      goto LAB_00102323;
    }
  }
  (**(code **)(*(long *)this + 0x298))(local_38,this);
LAB_00102323:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_28;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x00102435) */
/* WARNING: Removing unreachable block (ram,0x00102500) */
/* WARNING: Removing unreachable block (ram,0x0010250d) */
/* WARNING: Removing unreachable block (ram,0x0010244a) */
/* WARNING: Removing unreachable block (ram,0x0010244f) */
/* WARNING: Removing unreachable block (ram,0x00102459) */
/* WARNING: Removing unreachable block (ram,0x00102466) */
/* WARNING: Removing unreachable block (ram,0x001025b8) */
/* WARNING: Removing unreachable block (ram,0x001025c8) */
/* WARNING: Removing unreachable block (ram,0x0010247a) */
/* WARNING: Removing unreachable block (ram,0x0010251a) */
/* WARNING: Removing unreachable block (ram,0x001024d7) */
/* WARNING: Removing unreachable block (ram,0x001024eb) */
/* WARNING: Removing unreachable block (ram,0x001025dd) */
/* Node2D::set_global_position(Vector2 const&) */

void __thiscall Node2D::set_global_position(Node2D *this,Vector2 *param_1)

{
                    /* WARNING: Subroutine does not return */
  Node::current_process_thread_group();
}



/* WARNING: Removing unreachable block (ram,0x00102625) */
/* WARNING: Removing unreachable block (ram,0x00102698) */
/* WARNING: Removing unreachable block (ram,0x001026a1) */
/* WARNING: Removing unreachable block (ram,0x00102636) */
/* WARNING: Removing unreachable block (ram,0x0010263b) */
/* WARNING: Removing unreachable block (ram,0x00102645) */
/* WARNING: Removing unreachable block (ram,0x001026aa) */
/* WARNING: Removing unreachable block (ram,0x0010264e) */
/* WARNING: Removing unreachable block (ram,0x00102675) */
/* WARNING: Removing unreachable block (ram,0x00102689) */
/* WARNING: Removing unreachable block (ram,0x00102744) */
/* Node2D::global_translate(Vector2 const&) */

void __thiscall Node2D::global_translate(Node2D *this,Vector2 *param_1)

{
                    /* WARNING: Subroutine does not return */
  Node::current_process_thread_group();
}



/* Node2D::get_global_rotation() const */

undefined8 __thiscall Node2D::get_global_rotation(Node2D *this)

{
  char cVar1;
  long in_FS_OFFSET;
  undefined8 uVar2;
  CowData<char32_t> aCStack_58 [8];
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  undefined1 local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (_GLOBAL_OFFSET_TABLE_ != (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    Node::current_process_thread_group();
  }
  if (*(long *)(in_FS_OFFSET + lRam0000000000102785) == 0) {
    cVar1 = is_current_thread_safe_for_nodes();
    if ((cVar1 == '\0') && (((byte)this[0x2fa] & 0x40) != 0)) {
      Node::get_description();
      local_48 = 
      "This function in this node (%s) can only be accessed from either the main thread or a thread group. Use call_deferred() instead."
      ;
      local_40 = 0x80;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<String>((CowData<char32_t> *)&local_48,(StrRange *)&local_50,aCStack_58);
      _err_print_error("get_global_rotation","scene/2d/node_2d.cpp",0x132,
                       "Condition \"!is_readable_from_caller_thread()\" is true. Returning: (0)",
                       (CowData<char32_t> *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      CowData<char32_t>::_unref(aCStack_58);
      uVar2 = 0;
      goto LAB_001027a8;
    }
  }
  (**(code **)(*(long *)this + 0x298))(local_38,this);
  uVar2 = Transform2D::get_rotation();
LAB_001027a8:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Node2D::get_global_rotation_degrees() const */

undefined8 __thiscall Node2D::get_global_rotation_degrees(Node2D *this)

{
  char cVar1;
  long in_FS_OFFSET;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  CowData<char32_t> aCStack_48 [8];
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  undefined8 uVar2;
  undefined8 extraout_XMM0_Qb;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (_GLOBAL_OFFSET_TABLE_ != (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    Node::current_process_thread_group();
  }
  if (*(long *)(in_FS_OFFSET + lRam00000000001028b5) == 0) {
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
      _err_print_error("get_global_rotation_degrees","scene/2d/node_2d.cpp",0x137,
                       "Condition \"!is_readable_from_caller_thread()\" is true. Returning: (0)",
                       (CowData<char32_t> *)&local_38,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
      CowData<char32_t>::_unref(aCStack_48);
      uVar2 = 0;
      goto LAB_001028cc;
    }
  }
  auVar3._0_8_ = get_global_rotation(this);
  auVar3._8_8_ = extraout_XMM0_Qb;
  auVar4._4_12_ = auVar3._4_12_;
  auVar4._0_4_ = (float)auVar3._0_8_ * __LC38;
  uVar2 = auVar4._0_8_;
LAB_001028cc:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Node2D::get_global_skew() const */

undefined8 __thiscall Node2D::get_global_skew(Node2D *this)

{
  char cVar1;
  long in_FS_OFFSET;
  undefined8 uVar2;
  CowData<char32_t> aCStack_58 [8];
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  undefined1 local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (_GLOBAL_OFFSET_TABLE_ != (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    Node::current_process_thread_group();
  }
  if (*(long *)(in_FS_OFFSET + lRam00000000001029e5) == 0) {
    cVar1 = is_current_thread_safe_for_nodes();
    if ((cVar1 == '\0') && (((byte)this[0x2fa] & 0x40) != 0)) {
      Node::get_description();
      local_48 = 
      "This function in this node (%s) can only be accessed from either the main thread or a thread group. Use call_deferred() instead."
      ;
      local_40 = 0x80;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<String>((CowData<char32_t> *)&local_48,(StrRange *)&local_50,aCStack_58);
      _err_print_error("get_global_skew","scene/2d/node_2d.cpp",0x13c,
                       "Condition \"!is_readable_from_caller_thread()\" is true. Returning: (0)",
                       (CowData<char32_t> *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      CowData<char32_t>::_unref(aCStack_58);
      uVar2 = 0;
      goto LAB_00102a08;
    }
  }
  (**(code **)(*(long *)this + 0x298))(local_38,this);
  uVar2 = Transform2D::get_skew();
LAB_00102a08:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x00102b1f) */
/* WARNING: Removing unreachable block (ram,0x00102c10) */
/* WARNING: Removing unreachable block (ram,0x00102c1d) */
/* WARNING: Removing unreachable block (ram,0x00102b34) */
/* WARNING: Removing unreachable block (ram,0x00102b39) */
/* WARNING: Removing unreachable block (ram,0x00102b43) */
/* WARNING: Removing unreachable block (ram,0x00102b50) */
/* WARNING: Removing unreachable block (ram,0x00102cc8) */
/* WARNING: Removing unreachable block (ram,0x00102cdb) */
/* WARNING: Removing unreachable block (ram,0x00102b64) */
/* WARNING: Removing unreachable block (ram,0x00102c2a) */
/* WARNING: Removing unreachable block (ram,0x00102be9) */
/* WARNING: Removing unreachable block (ram,0x00102c00) */
/* WARNING: Removing unreachable block (ram,0x00102cf7) */
/* Node2D::set_global_rotation(float) */

void __thiscall Node2D::set_global_rotation(Node2D *this,float param_1)

{
                    /* WARNING: Subroutine does not return */
  Node::current_process_thread_group();
}



/* WARNING: Removing unreachable block (ram,0x00102d37) */
/* WARNING: Removing unreachable block (ram,0x00102d98) */
/* WARNING: Removing unreachable block (ram,0x00102da1) */
/* WARNING: Removing unreachable block (ram,0x00102d48) */
/* WARNING: Removing unreachable block (ram,0x00102d4d) */
/* WARNING: Removing unreachable block (ram,0x00102d57) */
/* WARNING: Removing unreachable block (ram,0x00102daa) */
/* WARNING: Removing unreachable block (ram,0x00102e4f) */
/* WARNING: Removing unreachable block (ram,0x00102d60) */
/* WARNING: Removing unreachable block (ram,0x00102d74) */
/* WARNING: Removing unreachable block (ram,0x00102e5a) */
/* Node2D::set_global_rotation_degrees(float) */

void __thiscall Node2D::set_global_rotation_degrees(Node2D *this,float param_1)

{
                    /* WARNING: Subroutine does not return */
  Node::current_process_thread_group();
}



/* WARNING: Removing unreachable block (ram,0x00102e9f) */
/* WARNING: Removing unreachable block (ram,0x00102f90) */
/* WARNING: Removing unreachable block (ram,0x00102f9d) */
/* WARNING: Removing unreachable block (ram,0x00102eb4) */
/* WARNING: Removing unreachable block (ram,0x00102eb9) */
/* WARNING: Removing unreachable block (ram,0x00102ec3) */
/* WARNING: Removing unreachable block (ram,0x00102ed0) */
/* WARNING: Removing unreachable block (ram,0x00103048) */
/* WARNING: Removing unreachable block (ram,0x0010305b) */
/* WARNING: Removing unreachable block (ram,0x00102ee4) */
/* WARNING: Removing unreachable block (ram,0x00102faa) */
/* WARNING: Removing unreachable block (ram,0x00102f69) */
/* WARNING: Removing unreachable block (ram,0x00102f80) */
/* WARNING: Removing unreachable block (ram,0x00103077) */
/* Node2D::set_global_skew(float) */

void __thiscall Node2D::set_global_skew(Node2D *this,float param_1)

{
                    /* WARNING: Subroutine does not return */
  Node::current_process_thread_group();
}



/* Node2D::get_global_scale() const */

undefined8 __thiscall Node2D::get_global_scale(Node2D *this)

{
  char cVar1;
  long in_FS_OFFSET;
  undefined8 uVar2;
  CowData<char32_t> aCStack_58 [8];
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  undefined1 local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (_GLOBAL_OFFSET_TABLE_ != (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    Node::current_process_thread_group();
  }
  if (*(long *)(in_FS_OFFSET + lRam00000000001030b5) == 0) {
    cVar1 = is_current_thread_safe_for_nodes();
    if ((cVar1 == '\0') && (((byte)this[0x2fa] & 0x40) != 0)) {
      Node::get_description();
      local_48 = 
      "This function in this node (%s) can only be accessed from either the main thread or a thread group. Use call_deferred() instead."
      ;
      local_40 = 0x80;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<String>((CowData<char32_t> *)&local_48,(StrRange *)&local_50,aCStack_58);
      _err_print_error("get_global_scale","scene/2d/node_2d.cpp",0x162,
                       "Condition \"!is_readable_from_caller_thread()\" is true. Returning: (Size2())"
                       ,(CowData<char32_t> *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      CowData<char32_t>::_unref(aCStack_58);
      uVar2 = 0;
      goto LAB_001030d8;
    }
  }
  (**(code **)(*(long *)this + 0x298))(local_38,this);
  uVar2 = Transform2D::get_scale();
LAB_001030d8:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x001031ed) */
/* WARNING: Removing unreachable block (ram,0x001032f0) */
/* WARNING: Removing unreachable block (ram,0x001032fd) */
/* WARNING: Removing unreachable block (ram,0x00103202) */
/* WARNING: Removing unreachable block (ram,0x00103207) */
/* WARNING: Removing unreachable block (ram,0x00103211) */
/* WARNING: Removing unreachable block (ram,0x0010321e) */
/* WARNING: Removing unreachable block (ram,0x001033a8) */
/* WARNING: Removing unreachable block (ram,0x001033bb) */
/* WARNING: Removing unreachable block (ram,0x00103232) */
/* WARNING: Removing unreachable block (ram,0x0010330a) */
/* WARNING: Removing unreachable block (ram,0x001032c1) */
/* WARNING: Removing unreachable block (ram,0x001032d8) */
/* WARNING: Removing unreachable block (ram,0x001033d5) */
/* Node2D::set_global_scale(Vector2 const&) */

void __thiscall Node2D::set_global_scale(Node2D *this,Vector2 *param_1)

{
                    /* WARNING: Subroutine does not return */
  Node::current_process_thread_group();
}



/* WARNING: Removing unreachable block (ram,0x00103439) */
/* WARNING: Removing unreachable block (ram,0x00103415) */
/* WARNING: Removing unreachable block (ram,0x001034e0) */
/* WARNING: Removing unreachable block (ram,0x001034ed) */
/* WARNING: Removing unreachable block (ram,0x001034fa) */
/* WARNING: Removing unreachable block (ram,0x00103446) */
/* WARNING: Removing unreachable block (ram,0x00103462) */
/* WARNING: Removing unreachable block (ram,0x0010342a) */
/* WARNING: Removing unreachable block (ram,0x0010342f) */
/* WARNING: Removing unreachable block (ram,0x00103467) */
/* WARNING: Removing unreachable block (ram,0x001035c0) */
/* WARNING: Removing unreachable block (ram,0x00103473) */
/* WARNING: Removing unreachable block (ram,0x0010347a) */
/* WARNING: Removing unreachable block (ram,0x00103598) */
/* WARNING: Removing unreachable block (ram,0x00103487) */
/* WARNING: Removing unreachable block (ram,0x0010349b) */
/* WARNING: Removing unreachable block (ram,0x001034a4) */
/* WARNING: Removing unreachable block (ram,0x001035d0) */
/* WARNING: Removing unreachable block (ram,0x001035e0) */
/* WARNING: Removing unreachable block (ram,0x001034b8) */
/* WARNING: Removing unreachable block (ram,0x001034cc) */
/* WARNING: Removing unreachable block (ram,0x001035f9) */
/* Node2D::set_transform(Transform2D const&) */

void __thiscall Node2D::set_transform(Node2D *this,Transform2D *param_1)

{
                    /* WARNING: Subroutine does not return */
  Node::current_process_thread_group();
}



/* WARNING: Removing unreachable block (ram,0x00103638) */
/* WARNING: Removing unreachable block (ram,0x001036e0) */
/* WARNING: Removing unreachable block (ram,0x001036ed) */
/* WARNING: Removing unreachable block (ram,0x0010364d) */
/* WARNING: Removing unreachable block (ram,0x00103652) */
/* WARNING: Removing unreachable block (ram,0x0010365c) */
/* WARNING: Removing unreachable block (ram,0x00103669) */
/* WARNING: Removing unreachable block (ram,0x00103798) */
/* WARNING: Removing unreachable block (ram,0x001037a8) */
/* WARNING: Removing unreachable block (ram,0x0010367d) */
/* WARNING: Removing unreachable block (ram,0x001036fa) */
/* WARNING: Removing unreachable block (ram,0x001036bc) */
/* WARNING: Removing unreachable block (ram,0x001036d0) */
/* WARNING: Removing unreachable block (ram,0x001037c0) */
/* Node2D::set_global_transform(Transform2D const&) */

void __thiscall Node2D::set_global_transform(Node2D *this,Transform2D *param_1)

{
                    /* WARNING: Subroutine does not return */
  Node::current_process_thread_group();
}



/* Node2D::to_local(Vector2) const */

void Node2D::to_local(long *param_1)

{
  char cVar1;
  long in_FS_OFFSET;
  CowData<char32_t> local_78 [8];
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  undefined1 local_58 [56];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (_GLOBAL_OFFSET_TABLE_ != (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    Node::current_process_thread_group();
  }
  if (*(long *)(in_FS_OFFSET + lRam000000000010380b) == 0) {
    cVar1 = is_current_thread_safe_for_nodes();
    if ((cVar1 == '\0') && ((*(byte *)((long)param_1 + 0x2fa) & 0x40) != 0)) {
      Node::get_description();
      local_68 = 
      "This function in this node (%s) can only be accessed from either the main thread or a thread group. Use call_deferred() instead."
      ;
      local_70 = 0;
      local_60 = 0x80;
      String::parse_latin1((StrRange *)&local_70);
      vformat<String>((CowData<char32_t> *)&local_68,(StrRange *)&local_70,local_78);
      _err_print_error("to_local","scene/2d/node_2d.cpp",0x1a5,
                       "Condition \"!is_readable_from_caller_thread()\" is true. Returning: (Point2())"
                       ,(CowData<char32_t> *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      CowData<char32_t>::_unref(local_78);
      goto LAB_00103865;
    }
  }
  (**(code **)(*param_1 + 0x298))(local_58,param_1);
  Transform2D::affine_inverse();
LAB_00103865:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Node2D::get_angle_to(Vector2 const&) const */

undefined8 __thiscall Node2D::get_angle_to(Node2D *this,Vector2 *param_1)

{
  char cVar1;
  long in_FS_OFFSET;
  undefined8 uVar2;
  undefined8 uVar3;
  CowData<char32_t> local_48 [8];
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (_GLOBAL_OFFSET_TABLE_ != (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    Node::current_process_thread_group();
  }
  if (*(long *)(in_FS_OFFSET + lRam0000000000103988) == 0) {
    cVar1 = is_current_thread_safe_for_nodes();
    if ((cVar1 == '\0') && (((byte)this[0x2fa] & 0x40) != 0)) {
      Node::get_description();
      local_38 = 
      "This function in this node (%s) can only be accessed from either the main thread or a thread group. Use call_deferred() instead."
      ;
      local_40 = 0;
      local_30 = 0x80;
      String::parse_latin1((StrRange *)&local_40);
      vformat<String>((CowData<char32_t> *)&local_38,(StrRange *)&local_40,local_48);
      _err_print_error("get_angle_to","scene/2d/node_2d.cpp",0x1a0,
                       "Condition \"!is_readable_from_caller_thread()\" is true. Returning: (0)",
                       (CowData<char32_t> *)&local_38,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
      CowData<char32_t>::_unref(local_48);
      uVar2 = 0;
      goto LAB_001039c2;
    }
  }
  uVar2 = get_scale(this);
  uVar3 = to_local(*(undefined8 *)param_1,this);
  local_28 = CONCAT44((float)((ulong)uVar2 >> 0x20) * (float)((ulong)uVar3 >> 0x20),
                      (float)uVar2 * (float)uVar3);
  uVar2 = Vector2::angle();
LAB_001039c2:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x00103ad5) */
/* WARNING: Removing unreachable block (ram,0x00103b30) */
/* WARNING: Removing unreachable block (ram,0x00103b39) */
/* WARNING: Removing unreachable block (ram,0x00103ae6) */
/* WARNING: Removing unreachable block (ram,0x00103aeb) */
/* WARNING: Removing unreachable block (ram,0x00103af5) */
/* WARNING: Removing unreachable block (ram,0x00103b42) */
/* WARNING: Removing unreachable block (ram,0x00103be7) */
/* WARNING: Removing unreachable block (ram,0x00103afe) */
/* WARNING: Removing unreachable block (ram,0x00103b1d) */
/* WARNING: Removing unreachable block (ram,0x00103bf2) */
/* Node2D::look_at(Vector2 const&) */

void __thiscall Node2D::look_at(Node2D *this,Vector2 *param_1)

{
                    /* WARNING: Subroutine does not return */
  Node::current_process_thread_group();
}



/* Node2D::to_global(Vector2) const */

void Node2D::to_global(long *param_1)

{
  char cVar1;
  long in_FS_OFFSET;
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  undefined1 local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (_GLOBAL_OFFSET_TABLE_ != (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    Node::current_process_thread_group();
  }
  if (*(long *)(in_FS_OFFSET + lRam0000000000103c3b) == 0) {
    cVar1 = is_current_thread_safe_for_nodes();
    if ((cVar1 == '\0') && ((*(byte *)((long)param_1 + 0x2fa) & 0x40) != 0)) {
      Node::get_description();
      local_48 = 
      "This function in this node (%s) can only be accessed from either the main thread or a thread group. Use call_deferred() instead."
      ;
      local_50 = 0;
      local_40 = 0x80;
      String::parse_latin1((StrRange *)&local_50);
      vformat<String>((CowData<char32_t> *)&local_48,(StrRange *)&local_50,local_58);
      _err_print_error("to_global","scene/2d/node_2d.cpp",0x1aa,
                       "Condition \"!is_readable_from_caller_thread()\" is true. Returning: (Point2())"
                       ,(CowData<char32_t> *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      CowData<char32_t>::_unref(local_58);
      goto LAB_00103c85;
    }
  }
  (**(code **)(*param_1 + 0x298))(local_38,param_1);
LAB_00103c85:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Node2D::get_relative_transform_to_parent(Node const*) const */

Node * Node2D::get_relative_transform_to_parent(Node *param_1)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  long *in_RDX;
  long *in_RSI;
  long in_FS_OFFSET;
  CowData<char32_t> aCStack_88 [8];
  undefined8 local_80;
  char *local_78;
  undefined8 local_70;
  Node local_68 [32];
  undefined1 local_48 [24];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (_GLOBAL_OFFSET_TABLE_ != (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    Node::current_process_thread_group();
  }
  if (*(long *)(in_FS_OFFSET + lRam0000000000103d9f) == 0) {
    cVar1 = is_current_thread_safe_for_nodes();
    if ((cVar1 == '\0') && ((*(byte *)((long)in_RSI + 0x2fa) & 0x40) != 0)) {
      Node::get_description();
      local_78 = 
      "This function in this node (%s) can only be accessed from either the main thread or a thread group. Use call_deferred() instead."
      ;
      local_70 = 0x80;
      local_80 = 0;
      String::parse_latin1((StrRange *)&local_80);
      vformat<String>((CowData<char32_t> *)&local_78,(StrRange *)&local_80,aCStack_88);
      _err_print_error("get_relative_transform_to_parent","scene/2d/node_2d.cpp",0x18b,
                       "Condition \"!is_readable_from_caller_thread()\" is true. Returning: (Transform2D())"
                       ,(CowData<char32_t> *)&local_78,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      CowData<char32_t>::_unref(aCStack_88);
      *(undefined8 *)param_1 = 0x3f800000;
      *(undefined8 *)(param_1 + 8) = 0x3f80000000000000;
      *(undefined8 *)(param_1 + 0x10) = 0;
      goto LAB_00103e26;
    }
  }
  if (in_RSI != in_RDX) {
    lVar2 = Node::get_parent();
    if (lVar2 != 0) {
      plVar3 = (long *)__dynamic_cast(lVar2,&Object::typeinfo,&typeinfo,0);
      if (plVar3 != (long *)0x0) {
        if (in_RDX == plVar3) {
          (**(code **)(*in_RSI + 0x290))(param_1);
        }
        else {
          (**(code **)(*in_RSI + 0x290))(local_48);
          get_relative_transform_to_parent(local_68);
          Transform2D::operator*((Transform2D *)param_1,(Transform2D *)local_68);
        }
        goto LAB_00103e26;
      }
    }
    _err_print_error("get_relative_transform_to_parent","scene/2d/node_2d.cpp",0x192,
                     "Parameter \"parent_2d\" is null.",0,0);
  }
  *(undefined8 *)param_1 = 0x3f800000;
  *(undefined8 *)(param_1 + 8) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x10) = 0;
LAB_00103e26:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Node2D::_notification(int) */

void __thiscall Node2D::_notification(Node2D *this,int param_1)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  long *plVar4;
  long in_FS_OFFSET;
  CowData<char32_t> aCStack_58 [8];
  undefined8 local_50;
  Viewport local_48 [24];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 10) {
    if (((byte)this[0x2fa] & 0x40) != 0) {
      cVar2 = is_current_thread_safe_for_nodes();
      if (cVar2 == '\0') {
        Node::get_description();
        local_50 = 0;
        String::parse_latin1
                  ((String_conflict *)&local_50,
                   "This function in this node (%s) can only be accessed from the main thread. Use call_deferred() instead."
                  );
        vformat<String>((CowData<char32_t> *)local_48,(String_conflict *)&local_50,aCStack_58);
        _err_print_error("_notification","scene/2d/node_2d.cpp",0x1b1,
                         "Condition \"is_inside_tree() && !is_current_thread_safe_for_nodes()\" is true."
                         ,(CowData<char32_t> *)local_48,0,0);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_48);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
        CowData<char32_t>::_unref(aCStack_58);
        goto LAB_00103fc1;
      }
    }
    if (*(long *)(this + 600) != 0) {
      plVar4 = (long *)Node::get_parent();
      pcVar1 = *(code **)(*plVar4 + 0x108);
      create_custom_callable_function_pointer<Viewport>
                (local_48,*(char **)(this + 600),(_func_void *)"&Viewport::gui_set_root_order_dirty"
                );
      if (_notification(int)::{lambda()#1}::operator()()::sname == '\0') {
        iVar3 = __cxa_guard_acquire(&_notification(int)::{lambda()#1}::operator()()::sname);
        if (iVar3 != 0) {
          _scs_create((char *)&_notification(int)::{lambda()#1}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_notification(int)::{lambda()#1}::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&_notification(int)::{lambda()#1}::operator()()::sname);
        }
      }
      (*pcVar1)(plVar4,&_notification(int)::{lambda()#1}::operator()()::sname,local_48,8);
      Callable::~Callable((Callable *)local_48);
    }
  }
  else if (param_1 == 0xb) {
    if (((byte)this[0x2fa] & 0x40) != 0) {
      cVar2 = is_current_thread_safe_for_nodes();
      if (cVar2 == '\0') {
        Node::get_description();
        local_50 = 0;
        String::parse_latin1
                  ((String_conflict *)&local_50,
                   "This function in this node (%s) can only be accessed from the main thread. Use call_deferred() instead."
                  );
        vformat<String>((CowData<char32_t> *)local_48,(String_conflict *)&local_50,aCStack_58);
        _err_print_error("_notification","scene/2d/node_2d.cpp",0x1b8,
                         "Condition \"is_inside_tree() && !is_current_thread_safe_for_nodes()\" is true."
                         ,(CowData<char32_t> *)local_48,0,0);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_48);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
        CowData<char32_t>::_unref(aCStack_58);
        goto LAB_00103fc1;
      }
    }
    if (*(long *)(this + 600) != 0) {
      plVar4 = (long *)Node::get_parent();
      pcVar1 = *(code **)(*plVar4 + 0x110);
      create_custom_callable_function_pointer<Viewport>
                (local_48,*(char **)(this + 600),(_func_void *)"&Viewport::gui_set_root_order_dirty"
                );
      if (_notification(int)::{lambda()#2}::operator()()::sname == '\0') {
        iVar3 = __cxa_guard_acquire(&_notification(int)::{lambda()#2}::operator()()::sname);
        if (iVar3 != 0) {
          _scs_create((char *)&_notification(int)::{lambda()#2}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_notification(int)::{lambda()#2}::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&_notification(int)::{lambda()#2}::operator()()::sname);
        }
      }
      (*pcVar1)(plVar4,&_notification(int)::{lambda()#2}::operator()()::sname,local_48);
      Callable::~Callable((Callable *)local_48);
    }
  }
LAB_00103fc1:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Node2D::_bind_methods() */

void Node2D::_bind_methods(void)

{
  char cVar1;
  MethodBind *pMVar2;
  uint uVar3;
  long in_FS_OFFSET;
  undefined8 local_138;
  long local_130;
  long local_128;
  long local_120;
  long local_118;
  long local_110;
  char *local_108;
  undefined8 local_100;
  char *local_f8;
  undefined8 local_f0;
  char *local_e8;
  int local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  char *local_c8;
  undefined8 local_c0;
  char *local_b8;
  char *pcStack_b0;
  undefined8 local_a8;
  Variant *local_98;
  char *pcStack_90;
  undefined8 local_88;
  Variant **local_78;
  undefined1 auStack_70 [16];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_c0 = 0;
  local_c8 = "position";
  uVar3 = (uint)(Variant *)&local_78;
  local_78 = (Variant **)&local_c8;
  D_METHODP((char *)&local_f8,(char ***)"set_position",uVar3);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar2 = create_method_bind<Node2D,Vector2_const&>(set_position);
  ClassDB::bind_methodfi(1,pMVar2,false,(MethodDefinition *)&local_f8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_f8);
  local_c8 = "radians";
  local_c0 = 0;
  local_78 = (Variant **)&local_c8;
  D_METHODP((char *)&local_f8,(char ***)"set_rotation",uVar3);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar2 = create_method_bind<Node2D,float>(set_rotation);
  ClassDB::bind_methodfi(1,pMVar2,false,(MethodDefinition *)&local_f8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_f8);
  local_c0 = 0;
  local_c8 = "degrees";
  local_78 = (Variant **)&local_c8;
  D_METHODP((char *)&local_f8,(char ***)"set_rotation_degrees",uVar3);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar2 = create_method_bind<Node2D,float>(set_rotation_degrees);
  ClassDB::bind_methodfi(1,pMVar2,false,(MethodDefinition *)&local_f8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_f8);
  local_c8 = "radians";
  local_c0 = 0;
  local_78 = (Variant **)&local_c8;
  D_METHODP((char *)&local_f8,(char ***)"set_skew",uVar3);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar2 = create_method_bind<Node2D,float>(set_skew);
  ClassDB::bind_methodfi(1,pMVar2,false,(MethodDefinition *)&local_f8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_f8);
  local_c0 = 0;
  local_c8 = "scale";
  local_78 = (Variant **)&local_c8;
  D_METHODP((char *)&local_f8,(char ***)"set_scale",uVar3);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar2 = create_method_bind<Node2D,Vector2_const&>(set_scale);
  ClassDB::bind_methodfi(1,pMVar2,false,(MethodDefinition *)&local_f8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_f8);
  D_METHODP((char *)&local_f8,(char ***)"get_position",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar2 = create_method_bind<Node2D,Vector2>(get_position);
  ClassDB::bind_methodfi(1,pMVar2,false,(MethodDefinition *)&local_f8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_f8);
  D_METHODP((char *)&local_f8,(char ***)"get_rotation",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar2 = create_method_bind<Node2D,float>(get_rotation);
  ClassDB::bind_methodfi(1,pMVar2,false,(MethodDefinition *)&local_f8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_f8);
  D_METHODP((char *)&local_f8,(char ***)"get_rotation_degrees",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar2 = create_method_bind<Node2D,float>(get_rotation_degrees);
  ClassDB::bind_methodfi(1,pMVar2,false,(MethodDefinition *)&local_f8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_f8);
  D_METHODP((char *)&local_f8,(char ***)"get_skew",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar2 = create_method_bind<Node2D,float>(get_skew);
  ClassDB::bind_methodfi(1,pMVar2,false,(MethodDefinition *)&local_f8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_f8);
  D_METHODP((char *)&local_f8,(char ***)"get_scale",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar2 = create_method_bind<Node2D,Vector2>(get_scale);
  ClassDB::bind_methodfi(1,pMVar2,false,(MethodDefinition *)&local_f8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_f8);
  local_c8 = "radians";
  local_c0 = 0;
  local_78 = (Variant **)&local_c8;
  D_METHODP((char *)&local_f8,(char ***)"rotate",uVar3);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar2 = create_method_bind<Node2D,float>(rotate);
  ClassDB::bind_methodfi(1,pMVar2,false,(MethodDefinition *)&local_f8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_f8);
  local_88 = 0;
  local_98 = (Variant *)0x10942b;
  pcStack_90 = "scaled";
  auStack_70._0_8_ = &pcStack_90;
  local_78 = &local_98;
  D_METHODP((char *)&local_f8,(char ***)"move_local_x",uVar3);
  Variant::Variant((Variant *)&local_78,false);
  local_58 = (undefined1  [16])0x0;
  local_60 = 0;
  local_98 = (Variant *)&local_78;
  pMVar2 = create_method_bind<Node2D,float,bool>(move_x);
  ClassDB::bind_methodfi(1,pMVar2,false,(MethodDefinition *)&local_f8,&local_98,1);
  if (Variant::needs_deinit[(int)local_60] == '\0') {
    cVar1 = Variant::needs_deinit[(int)local_78];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[(int)local_78];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_f8);
  local_a8 = 0;
  local_b8 = "delta";
  pcStack_b0 = "scaled";
  auStack_70._0_8_ = &pcStack_b0;
  local_78 = (Variant **)&local_b8;
  D_METHODP((char *)&local_f8,(char ***)"move_local_y",uVar3);
  Variant::Variant((Variant *)&local_78,false);
  local_58 = (undefined1  [16])0x0;
  local_60 = 0;
  local_98 = (Variant *)&local_78;
  pMVar2 = create_method_bind<Node2D,float,bool>(move_y);
  ClassDB::bind_methodfi(1,pMVar2,false,(MethodDefinition *)&local_f8,&local_98,1);
  if (Variant::needs_deinit[(int)local_60] == '\0') {
    cVar1 = Variant::needs_deinit[(int)local_78];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[(int)local_78];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_f8);
  local_98 = (Variant *)0x109462;
  pcStack_90 = (char *)0x0;
  local_78 = &local_98;
  D_METHODP((char *)&local_f8,(char ***)"translate",uVar3);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar2 = create_method_bind<Node2D,Vector2_const&>(translate);
  ClassDB::bind_methodfi(1,pMVar2,false,(MethodDefinition *)&local_f8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_f8);
  local_98 = (Variant *)0x109462;
  pcStack_90 = (char *)0x0;
  local_78 = &local_98;
  D_METHODP((char *)&local_f8,(char ***)"global_translate",uVar3);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar2 = create_method_bind<Node2D,Vector2_const&>(global_translate);
  ClassDB::bind_methodfi(1,pMVar2,false,(MethodDefinition *)&local_f8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_f8);
  pcStack_90 = (char *)0x0;
  local_98 = (Variant *)0x109469;
  local_78 = &local_98;
  D_METHODP((char *)&local_f8,(char ***)"apply_scale",uVar3);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar2 = create_method_bind<Node2D,Vector2_const&>(apply_scale);
  ClassDB::bind_methodfi(1,pMVar2,false,(MethodDefinition *)&local_f8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_f8);
  pcStack_90 = (char *)0x0;
  local_98 = (Variant *)0x1091e5;
  local_78 = &local_98;
  D_METHODP((char *)&local_f8,(char ***)"set_global_position",uVar3);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar2 = create_method_bind<Node2D,Vector2_const&>(set_global_position);
  ClassDB::bind_methodfi(1,pMVar2,false,(MethodDefinition *)&local_f8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_f8);
  D_METHODP((char *)&local_f8,(char ***)"get_global_position",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar2 = create_method_bind<Node2D,Vector2>(get_global_position);
  ClassDB::bind_methodfi(1,pMVar2,false,(MethodDefinition *)&local_f8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_f8);
  local_98 = (Variant *)0x109438;
  pcStack_90 = (char *)0x0;
  local_78 = &local_98;
  D_METHODP((char *)&local_f8,(char ***)"set_global_rotation",uVar3);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar2 = create_method_bind<Node2D,float>(set_global_rotation);
  ClassDB::bind_methodfi(1,pMVar2,false,(MethodDefinition *)&local_f8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_f8);
  pcStack_90 = (char *)0x0;
  local_98 = (Variant *)0x109440;
  local_78 = &local_98;
  D_METHODP((char *)&local_f8,(char ***)"set_global_rotation_degrees",uVar3);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar2 = create_method_bind<Node2D,float>(set_global_rotation_degrees);
  ClassDB::bind_methodfi(1,pMVar2,false,(MethodDefinition *)&local_f8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_f8);
  D_METHODP((char *)&local_f8,(char ***)"get_global_rotation",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar2 = create_method_bind<Node2D,float>(get_global_rotation);
  ClassDB::bind_methodfi(1,pMVar2,false,(MethodDefinition *)&local_f8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_f8);
  D_METHODP((char *)&local_f8,(char ***)"get_global_rotation_degrees",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar2 = create_method_bind<Node2D,float>(get_global_rotation_degrees);
  ClassDB::bind_methodfi(1,pMVar2,false,(MethodDefinition *)&local_f8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_f8);
  local_98 = (Variant *)0x109438;
  pcStack_90 = (char *)0x0;
  local_78 = &local_98;
  D_METHODP((char *)&local_f8,(char ***)"set_global_skew",uVar3);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar2 = create_method_bind<Node2D,float>(set_global_skew);
  ClassDB::bind_methodfi(1,pMVar2,false,(MethodDefinition *)&local_f8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_f8);
  D_METHODP((char *)&local_f8,(char ***)"get_global_skew",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar2 = create_method_bind<Node2D,float>(get_global_skew);
  ClassDB::bind_methodfi(1,pMVar2,false,(MethodDefinition *)&local_f8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_f8);
  pcStack_90 = (char *)0x0;
  local_98 = (Variant *)0x1091f7;
  local_78 = &local_98;
  D_METHODP((char *)&local_f8,(char ***)"set_global_scale",uVar3);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar2 = create_method_bind<Node2D,Vector2_const&>(set_global_scale);
  ClassDB::bind_methodfi(1,pMVar2,false,(MethodDefinition *)&local_f8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_f8);
  D_METHODP((char *)&local_f8,(char ***)"get_global_scale",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar2 = create_method_bind<Node2D,Vector2>(get_global_scale);
  ClassDB::bind_methodfi(1,pMVar2,false,(MethodDefinition *)&local_f8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_f8);
  local_98 = (Variant *)0x10946f;
  pcStack_90 = (char *)0x0;
  local_78 = &local_98;
  D_METHODP((char *)&local_f8,(char ***)"set_transform",uVar3);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar2 = create_method_bind<Node2D,Transform2D_const&>(set_transform);
  ClassDB::bind_methodfi(1,pMVar2,false,(MethodDefinition *)&local_f8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_f8);
  local_98 = (Variant *)0x10946f;
  pcStack_90 = (char *)0x0;
  local_78 = &local_98;
  D_METHODP((char *)&local_f8,(char ***)"set_global_transform",uVar3);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar2 = create_method_bind<Node2D,Transform2D_const&>(set_global_transform);
  ClassDB::bind_methodfi(1,pMVar2,false,(MethodDefinition *)&local_f8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_f8);
  local_98 = (Variant *)0x109475;
  pcStack_90 = (char *)0x0;
  local_78 = &local_98;
  D_METHODP((char *)&local_f8,(char ***)"look_at",uVar3);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar2 = create_method_bind<Node2D,Vector2_const&>(look_at);
  ClassDB::bind_methodfi(1,pMVar2,false,(MethodDefinition *)&local_f8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_f8);
  local_98 = (Variant *)0x109475;
  pcStack_90 = (char *)0x0;
  local_78 = &local_98;
  D_METHODP((char *)&local_f8,(char ***)"get_angle_to",uVar3);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar2 = create_method_bind<Node2D,float,Vector2_const&>(get_angle_to);
  ClassDB::bind_methodfi(1,pMVar2,false,(MethodDefinition *)&local_f8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_f8);
  pcStack_90 = (char *)0x0;
  local_98 = (Variant *)0x10947b;
  local_78 = &local_98;
  D_METHODP((char *)&local_f8,(char ***)"to_local",uVar3);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar2 = create_method_bind<Node2D,Vector2,Vector2>(to_local);
  ClassDB::bind_methodfi(1,pMVar2,false,(MethodDefinition *)&local_f8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_f8);
  pcStack_90 = (char *)0x0;
  local_98 = (Variant *)0x109488;
  local_78 = &local_98;
  D_METHODP((char *)&local_f8,(char ***)"to_global",uVar3);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar2 = create_method_bind<Node2D,Vector2,Vector2>(to_global);
  ClassDB::bind_methodfi(1,pMVar2,false,(MethodDefinition *)&local_f8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_f8);
  pcStack_90 = (char *)0x0;
  local_98 = (Variant *)0x109494;
  local_78 = &local_98;
  D_METHODP((char *)&local_f8,(char ***)"get_relative_transform_to_parent",uVar3);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar2 = create_method_bind<Node2D,Transform2D,Node_const*>(get_relative_transform_to_parent);
  ClassDB::bind_methodfi(1,pMVar2,false,(MethodDefinition *)&local_f8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_f8);
  local_108 = (char *)0x0;
  local_f8 = "";
  local_f0 = 0;
  String::parse_latin1((StrRange *)&local_108);
  local_f8 = "Transform";
  local_110 = 0;
  local_f0 = 9;
  String::parse_latin1((StrRange *)&local_110);
  local_f8 = "Node2D";
  local_118 = 0;
  local_f0 = 6;
  String::parse_latin1((StrRange *)&local_118);
  StringName::StringName((StringName *)&local_f8,(String_conflict *)&local_118,false);
  ClassDB::add_property_group
            ((StringName *)&local_f8,(String_conflict *)&local_110,(String_conflict *)&local_108,0);
  if ((StringName::configured != '\0') && (local_f8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  _scs_create((char *)&local_110,true);
  _scs_create((char *)&local_118,true);
  local_f8 = "-99999,99999,or_less,or_greater,hide_slider,suffix:px";
  local_120 = 0;
  local_128 = 0;
  local_f0 = 0x35;
  String::parse_latin1((StrRange *)&local_128);
  local_130 = 0;
  local_f8 = "position";
  local_f0 = 8;
  String::parse_latin1((StrRange *)&local_130);
  local_f8 = (char *)CONCAT44(local_f8._4_4_,5);
  local_f0 = 0;
  if (local_130 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_f0,(CowData *)&local_130);
  }
  local_e8 = (char *)0x0;
  local_e0 = 1;
  local_d8 = 0;
  if (local_128 == 0) {
LAB_0010574b:
    local_d0 = 6;
    StringName::operator=((StringName *)&local_e8,(StringName *)&local_120);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_d8,(CowData *)&local_128);
    local_d0 = 6;
    if (local_e0 != 0x11) goto LAB_0010574b;
    StringName::StringName((StringName *)&local_108,(String_conflict *)&local_d8,false);
    if (local_e8 == local_108) {
      if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_e8 = local_108;
    }
  }
  local_138 = 0;
  local_108 = "Node2D";
  local_100 = 6;
  String::parse_latin1((StrRange *)&local_138);
  StringName::StringName((StringName *)&local_108,(String_conflict *)&local_138,false);
  ClassDB::add_property
            ((StringName *)&local_108,(PropertyInfo *)&local_f8,(StringName *)&local_118,
             (StringName *)&local_110,-1);
  if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_130);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
  if ((((StringName::configured != '\0') &&
       ((local_120 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_118 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_110 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_110,true);
  _scs_create((char *)&local_118,true);
  local_f8 = "-360,360,0.1,or_less,or_greater,radians_as_degrees";
  local_120 = 0;
  local_128 = 0;
  local_f0 = 0x32;
  String::parse_latin1((StrRange *)&local_128);
  local_130 = 0;
  local_f8 = "rotation";
  local_f0 = 8;
  String::parse_latin1((StrRange *)&local_130);
  local_f8 = (char *)CONCAT44(local_f8._4_4_,3);
  local_f0 = 0;
  if (local_130 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_f0,(CowData *)&local_130);
  }
  local_e8 = (char *)0x0;
  local_e0 = 1;
  local_d8 = 0;
  if (local_128 == 0) {
LAB_00105983:
    local_d0 = 6;
    StringName::operator=((StringName *)&local_e8,(StringName *)&local_120);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_d8,(CowData *)&local_128);
    local_d0 = 6;
    if (local_e0 != 0x11) goto LAB_00105983;
    StringName::StringName((StringName *)&local_108,(String_conflict *)&local_d8,false);
    if (local_e8 == local_108) {
      if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_e8 = local_108;
    }
  }
  local_138 = 0;
  local_108 = "Node2D";
  local_100 = 6;
  String::parse_latin1((StrRange *)&local_138);
  StringName::StringName((StringName *)&local_108,(String_conflict *)&local_138,false);
  ClassDB::add_property
            ((StringName *)&local_108,(PropertyInfo *)&local_f8,(StringName *)&local_118,
             (StringName *)&local_110,-1);
  if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_130);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
  if (((StringName::configured != '\0') &&
      ((local_120 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (((local_118 == 0 || (StringName::unref(), StringName::configured != '\0')) && (local_110 != 0)
      ))) {
    StringName::unref();
  }
  _scs_create((char *)&local_110,true);
  _scs_create((char *)&local_118,true);
  local_f8 = "";
  local_120 = 0;
  local_128 = 0;
  local_f0 = 0;
  String::parse_latin1((StrRange *)&local_128);
  local_130 = 0;
  local_f8 = "rotation_degrees";
  local_f0 = 0x10;
  String::parse_latin1((StrRange *)&local_130);
  local_f8 = (char *)CONCAT44(local_f8._4_4_,3);
  local_f0 = 0;
  if (local_130 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_f0,(CowData *)&local_130);
  }
  local_e8 = (char *)0x0;
  local_e0 = 0;
  local_d8 = 0;
  if (local_128 == 0) {
LAB_00105bb3:
    local_d0 = 0;
    StringName::operator=((StringName *)&local_e8,(StringName *)&local_120);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_d8,(CowData *)&local_128);
    local_d0 = 0;
    if (local_e0 != 0x11) goto LAB_00105bb3;
    StringName::StringName((StringName *)&local_108,(String_conflict *)&local_d8,false);
    if (local_e8 == local_108) {
      if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_e8 = local_108;
    }
  }
  local_138 = 0;
  local_108 = "Node2D";
  local_100 = 6;
  String::parse_latin1((StrRange *)&local_138);
  StringName::StringName((StringName *)&local_108,(String_conflict *)&local_138,false);
  ClassDB::add_property
            ((StringName *)&local_108,(PropertyInfo *)&local_f8,(StringName *)&local_118,
             (StringName *)&local_110,-1);
  if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_130);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
  if ((((StringName::configured != '\0') &&
       ((local_120 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_118 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_110 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_110,true);
  _scs_create((char *)&local_118,true);
  local_f8 = "";
  local_120 = 0;
  local_128 = 0;
  local_f0 = 0;
  String::parse_latin1((StrRange *)&local_128);
  local_130 = 0;
  local_f8 = "scale";
  local_f0 = 5;
  String::parse_latin1((StrRange *)&local_130);
  local_f8 = (char *)CONCAT44(local_f8._4_4_,5);
  local_f0 = 0;
  if (local_130 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_f0,(CowData *)&local_130);
  }
  local_e8 = (char *)0x0;
  local_e0 = 5;
  local_d8 = 0;
  if (local_128 == 0) {
LAB_00105de3:
    local_d0 = 6;
    StringName::operator=((StringName *)&local_e8,(StringName *)&local_120);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_d8,(CowData *)&local_128);
    local_d0 = 6;
    if (local_e0 != 0x11) goto LAB_00105de3;
    StringName::StringName((StringName *)&local_108,(String_conflict *)&local_d8,false);
    if (local_e8 == local_108) {
      if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_e8 = local_108;
    }
  }
  local_138 = 0;
  local_108 = "Node2D";
  local_100 = 6;
  String::parse_latin1((StrRange *)&local_138);
  StringName::StringName((StringName *)&local_108,(String_conflict *)&local_138,false);
  ClassDB::add_property
            ((StringName *)&local_108,(PropertyInfo *)&local_f8,(StringName *)&local_118,
             (StringName *)&local_110,-1);
  if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_130);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
  if (((StringName::configured != '\0') &&
      ((local_120 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (((local_118 == 0 || (StringName::unref(), StringName::configured != '\0')) && (local_110 != 0)
      ))) {
    StringName::unref();
  }
  _scs_create((char *)&local_110,true);
  _scs_create((char *)&local_118,true);
  local_f8 = "-89.9,89.9,0.1,radians_as_degrees";
  local_120 = 0;
  local_128 = 0;
  local_f0 = 0x21;
  String::parse_latin1((StrRange *)&local_128);
  local_130 = 0;
  local_f8 = "skew";
  local_f0 = 4;
  String::parse_latin1((StrRange *)&local_130);
  local_f8 = (char *)CONCAT44(local_f8._4_4_,3);
  local_f0 = 0;
  if (local_130 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_f0,(CowData *)&local_130);
  }
  local_e8 = (char *)0x0;
  local_e0 = 1;
  local_d8 = 0;
  if (local_128 == 0) {
LAB_00106013:
    local_d0 = 6;
    StringName::operator=((StringName *)&local_e8,(StringName *)&local_120);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_d8,(CowData *)&local_128);
    local_d0 = 6;
    if (local_e0 != 0x11) goto LAB_00106013;
    StringName::StringName((StringName *)&local_108,(String_conflict *)&local_d8,false);
    if (local_e8 == local_108) {
      if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_e8 = local_108;
    }
  }
  local_138 = 0;
  local_108 = "Node2D";
  local_100 = 6;
  String::parse_latin1((StrRange *)&local_138);
  StringName::StringName((StringName *)&local_108,(String_conflict *)&local_138,false);
  ClassDB::add_property
            ((StringName *)&local_108,(PropertyInfo *)&local_f8,(StringName *)&local_118,
             (StringName *)&local_110,-1);
  if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_130);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
  if ((((StringName::configured != '\0') &&
       ((local_120 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_118 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_110 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_110,true);
  _scs_create((char *)&local_118,true);
  local_f8 = "suffix:px";
  local_120 = 0;
  local_128 = 0;
  local_f0 = 9;
  String::parse_latin1((StrRange *)&local_128);
  local_130 = 0;
  local_f8 = "transform";
  local_f0 = 9;
  String::parse_latin1((StrRange *)&local_130);
  local_f8 = (char *)CONCAT44(local_f8._4_4_,0xb);
  local_f0 = 0;
  if (local_130 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_f0,(CowData *)&local_130);
  }
  local_e8 = (char *)0x0;
  local_e0 = 0;
  local_d8 = 0;
  if (local_128 == 0) {
LAB_00106243:
    local_d0 = 0;
    StringName::operator=((StringName *)&local_e8,(StringName *)&local_120);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_d8,(CowData *)&local_128);
    local_d0 = 0;
    if (local_e0 != 0x11) goto LAB_00106243;
    StringName::StringName((StringName *)&local_108,(String_conflict *)&local_d8,false);
    if (local_e8 == local_108) {
      if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_e8 = local_108;
    }
  }
  local_138 = 0;
  local_108 = "Node2D";
  local_100 = 6;
  String::parse_latin1((StrRange *)&local_138);
  StringName::StringName((StringName *)&local_108,(String_conflict *)&local_138,false);
  ClassDB::add_property
            ((StringName *)&local_108,(PropertyInfo *)&local_f8,(StringName *)&local_118,
             (StringName *)&local_110,-1);
  if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_130);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
  if ((((StringName::configured != '\0') &&
       ((local_120 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_118 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_110 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_110,true);
  _scs_create((char *)&local_118,true);
  local_f8 = "suffix:px";
  local_120 = 0;
  local_128 = 0;
  local_f0 = 9;
  String::parse_latin1((StrRange *)&local_128);
  local_130 = 0;
  local_f8 = "global_position";
  local_f0 = 0xf;
  String::parse_latin1((StrRange *)&local_130);
  local_f8 = (char *)CONCAT44(local_f8._4_4_,5);
  local_f0 = 0;
  if (local_130 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_f0,(CowData *)&local_130);
  }
  local_e8 = (char *)0x0;
  local_e0 = 0;
  local_d8 = 0;
  if (local_128 == 0) {
LAB_00106473:
    local_d0 = 0;
    StringName::operator=((StringName *)&local_e8,(StringName *)&local_120);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_d8,(CowData *)&local_128);
    local_d0 = 0;
    if (local_e0 != 0x11) goto LAB_00106473;
    StringName::StringName((StringName *)&local_108,(String_conflict *)&local_d8,false);
    if (local_e8 == local_108) {
      if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_e8 = local_108;
    }
  }
  local_138 = 0;
  local_108 = "Node2D";
  local_100 = 6;
  String::parse_latin1((StrRange *)&local_138);
  StringName::StringName((StringName *)&local_108,(String_conflict *)&local_138,false);
  ClassDB::add_property
            ((StringName *)&local_108,(PropertyInfo *)&local_f8,(StringName *)&local_118,
             (StringName *)&local_110,-1);
  if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_130);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
  if ((((StringName::configured != '\0') &&
       ((local_120 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_118 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_110 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_110,true);
  _scs_create((char *)&local_118,true);
  local_f8 = "radians_as_degrees";
  local_120 = 0;
  local_128 = 0;
  local_f0 = 0x12;
  String::parse_latin1((StrRange *)&local_128);
  local_130 = 0;
  local_f8 = "global_rotation";
  local_f0 = 0xf;
  String::parse_latin1((StrRange *)&local_130);
  local_f8 = (char *)CONCAT44(local_f8._4_4_,3);
  local_f0 = 0;
  if (local_130 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_f0,(CowData *)&local_130);
  }
  local_e8 = (char *)0x0;
  local_e0 = 0;
  local_d8 = 0;
  if (local_128 == 0) {
LAB_001066a3:
    local_d0 = 0;
    StringName::operator=((StringName *)&local_e8,(StringName *)&local_120);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_d8,(CowData *)&local_128);
    local_d0 = 0;
    if (local_e0 != 0x11) goto LAB_001066a3;
    StringName::StringName((StringName *)&local_108,(String_conflict *)&local_d8,false);
    if (local_e8 == local_108) {
      if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_e8 = local_108;
    }
  }
  local_138 = 0;
  local_108 = "Node2D";
  local_100 = 6;
  String::parse_latin1((StrRange *)&local_138);
  StringName::StringName((StringName *)&local_108,(String_conflict *)&local_138,false);
  ClassDB::add_property
            ((StringName *)&local_108,(PropertyInfo *)&local_f8,(StringName *)&local_118,
             (StringName *)&local_110,-1);
  if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_130);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
  if (((StringName::configured != '\0') &&
      ((local_120 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (((local_118 == 0 || (StringName::unref(), StringName::configured != '\0')) && (local_110 != 0)
      ))) {
    StringName::unref();
  }
  _scs_create((char *)&local_110,true);
  _scs_create((char *)&local_118,true);
  local_f8 = "";
  local_120 = 0;
  local_128 = 0;
  local_f0 = 0;
  String::parse_latin1((StrRange *)&local_128);
  local_130 = 0;
  local_f8 = "global_rotation_degrees";
  local_f0 = 0x17;
  String::parse_latin1((StrRange *)&local_130);
  local_f8 = (char *)CONCAT44(local_f8._4_4_,3);
  local_f0 = 0;
  if (local_130 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_f0,(CowData *)&local_130);
  }
  local_e8 = (char *)0x0;
  local_e0 = 0;
  local_d8 = 0;
  if (local_128 == 0) {
LAB_001068d3:
    local_d0 = 0;
    StringName::operator=((StringName *)&local_e8,(StringName *)&local_120);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_d8,(CowData *)&local_128);
    local_d0 = 0;
    if (local_e0 != 0x11) goto LAB_001068d3;
    StringName::StringName((StringName *)&local_108,(String_conflict *)&local_d8,false);
    if (local_e8 == local_108) {
      if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_e8 = local_108;
    }
  }
  local_138 = 0;
  local_108 = "Node2D";
  local_100 = 6;
  String::parse_latin1((StrRange *)&local_138);
  StringName::StringName((StringName *)&local_108,(String_conflict *)&local_138,false);
  ClassDB::add_property
            ((StringName *)&local_108,(PropertyInfo *)&local_f8,(StringName *)&local_118,
             (StringName *)&local_110,-1);
  if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_130);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
  if ((((StringName::configured != '\0') &&
       ((local_120 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_118 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_110 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_110,true);
  _scs_create((char *)&local_118,true);
  local_f8 = "";
  local_120 = 0;
  local_128 = 0;
  local_f0 = 0;
  String::parse_latin1((StrRange *)&local_128);
  local_130 = 0;
  local_f8 = "global_scale";
  local_f0 = 0xc;
  String::parse_latin1((StrRange *)&local_130);
  local_f8 = (char *)CONCAT44(local_f8._4_4_,5);
  local_f0 = 0;
  if (local_130 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_f0,(CowData *)&local_130);
  }
  local_e8 = (char *)0x0;
  local_e0 = 0;
  local_d8 = 0;
  if (local_128 == 0) {
LAB_00106b03:
    local_d0 = 0;
    StringName::operator=((StringName *)&local_e8,(StringName *)&local_120);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_d8,(CowData *)&local_128);
    local_d0 = 0;
    if (local_e0 != 0x11) goto LAB_00106b03;
    StringName::StringName((StringName *)&local_108,(String_conflict *)&local_d8,false);
    if (local_e8 == local_108) {
      if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_e8 = local_108;
    }
  }
  local_138 = 0;
  local_108 = "Node2D";
  local_100 = 6;
  String::parse_latin1((StrRange *)&local_138);
  StringName::StringName((StringName *)&local_108,(String_conflict *)&local_138,false);
  ClassDB::add_property
            ((StringName *)&local_108,(PropertyInfo *)&local_f8,(StringName *)&local_118,
             (StringName *)&local_110,-1);
  if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_130);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
  if ((((StringName::configured != '\0') &&
       ((local_120 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_118 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_110 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_110,true);
  _scs_create((char *)&local_118,true);
  local_f8 = "radians_as_degrees";
  local_120 = 0;
  local_128 = 0;
  local_f0 = 0x12;
  String::parse_latin1((StrRange *)&local_128);
  local_130 = 0;
  local_f8 = "global_skew";
  local_f0 = 0xb;
  String::parse_latin1((StrRange *)&local_130);
  local_f8 = (char *)CONCAT44(local_f8._4_4_,3);
  local_f0 = 0;
  if (local_130 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_f0,(CowData *)&local_130);
  }
  local_e8 = (char *)0x0;
  local_e0 = 0;
  local_d8 = 0;
  if (local_128 == 0) {
LAB_00106d33:
    local_d0 = 0;
    StringName::operator=((StringName *)&local_e8,(StringName *)&local_120);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_d8,(CowData *)&local_128);
    local_d0 = 0;
    if (local_e0 != 0x11) goto LAB_00106d33;
    StringName::StringName((StringName *)&local_108,(String_conflict *)&local_d8,false);
    if (local_e8 == local_108) {
      if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_e8 = local_108;
    }
  }
  local_138 = 0;
  local_108 = "Node2D";
  local_100 = 6;
  String::parse_latin1((StrRange *)&local_138);
  StringName::StringName((StringName *)&local_108,(String_conflict *)&local_138,false);
  ClassDB::add_property
            ((StringName *)&local_108,(PropertyInfo *)&local_f8,(StringName *)&local_118,
             (StringName *)&local_110,-1);
  if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_130);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
  if ((((StringName::configured != '\0') &&
       ((local_120 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_118 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_110 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_110,true);
  _scs_create((char *)&local_118,true);
  local_f8 = "suffix:px";
  local_120 = 0;
  local_128 = 0;
  local_f0 = 9;
  String::parse_latin1((StrRange *)&local_128);
  local_130 = 0;
  local_f8 = "global_transform";
  local_f0 = 0x10;
  String::parse_latin1((StrRange *)&local_130);
  local_f8 = (char *)CONCAT44(local_f8._4_4_,0xb);
  local_f0 = 0;
  if (local_130 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_f0,(CowData *)&local_130);
  }
  local_e8 = (char *)0x0;
  local_e0 = 0;
  local_d8 = 0;
  if (local_128 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_d8,(CowData *)&local_128);
    local_d0 = 0;
    if (local_e0 == 0x11) {
      StringName::StringName((StringName *)&local_108,(String_conflict *)&local_d8,false);
      if (local_e8 == local_108) {
        if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_e8 = local_108;
      }
      goto LAB_00106f75;
    }
  }
  local_d0 = 0;
  StringName::operator=((StringName *)&local_e8,(StringName *)&local_120);
LAB_00106f75:
  local_138 = 0;
  local_108 = "Node2D";
  local_100 = 6;
  String::parse_latin1((StrRange *)&local_138);
  StringName::StringName((StringName *)&local_108,(String_conflict *)&local_138,false);
  ClassDB::add_property
            ((StringName *)&local_108,(PropertyInfo *)&local_f8,(StringName *)&local_118,
             (StringName *)&local_110,-1);
  if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_130);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
  if ((((StringName::configured != '\0') &&
       ((local_120 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_118 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_110 != 0)) {
    StringName::unref();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x001074fa) */
/* WARNING: Removing unreachable block (ram,0x00107580) */
/* WARNING: Removing unreachable block (ram,0x00107589) */
/* WARNING: Removing unreachable block (ram,0x0010750b) */
/* WARNING: Removing unreachable block (ram,0x00107510) */
/* WARNING: Removing unreachable block (ram,0x0010751a) */
/* WARNING: Removing unreachable block (ram,0x00107523) */
/* WARNING: Removing unreachable block (ram,0x00107630) */
/* WARNING: Removing unreachable block (ram,0x00107640) */
/* WARNING: Removing unreachable block (ram,0x0010752c) */
/* WARNING: Removing unreachable block (ram,0x00107592) */
/* WARNING: Removing unreachable block (ram,0x0010755b) */
/* WARNING: Removing unreachable block (ram,0x0010756f) */
/* WARNING: Removing unreachable block (ram,0x0010765c) */
/* Node2D::reparent(Node*, bool) */

void __thiscall Node2D::reparent(Node2D *this,Node *param_1,bool param_2)

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



/* Object::_bind_compatibility_methods() */

void Object::_bind_compatibility_methods(void)

{
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



/* CanvasItem::_edit_get_minimum_size() const */

undefined8 CanvasItem::_edit_get_minimum_size(void)

{
  return 0xbf800000bf800000;
}



/* CanvasItem::_edit_use_pivot() const */

undefined8 CanvasItem::_edit_use_pivot(void)

{
  return 0;
}



/* CanvasItem::_edit_set_pivot(Vector2 const&) */

void CanvasItem::_edit_set_pivot(Vector2 *param_1)

{
  return;
}



/* CanvasItem::_edit_get_pivot() const */

undefined8 CanvasItem::_edit_get_pivot(void)

{
  return 0;
}



/* CanvasItem::_edit_use_rect() const */

undefined8 CanvasItem::_edit_use_rect(void)

{
  return 0;
}



/* CanvasItem::_edit_get_rect() const */

undefined1  [16] CanvasItem::_edit_get_rect(void)

{
  return ZEXT816(0);
}



/* CanvasItem::get_anchorable_rect() const */

undefined1  [16] CanvasItem::get_anchorable_rect(void)

{
  return ZEXT816(0);
}



/* Node2D::is_class_ptr(void*) const */

uint __thiscall Node2D::is_class_ptr(Node2D *this,void *param_1)

{
  return (uint)CONCAT71(0x111a,(undefined4 *)param_1 == &CanvasItem::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x111a,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x111a,(undefined4 *)param_1 == &Node::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x111a,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* Node2D::_property_can_revertv(StringName const&) const */

undefined8 Node2D::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* Node2D::_property_get_revertv(StringName const&, Variant&) const */

undefined8 Node2D::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* CallableCustomMethodPointer<Viewport, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Viewport,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Viewport,void> *this)

{
  return;
}



/* MethodBindTRC<Transform2D, Node const*>::_gen_argument_type(int) const */

char __thiscall
MethodBindTRC<Transform2D,Node_const*>::_gen_argument_type
          (MethodBindTRC<Transform2D,Node_const*> *this,int param_1)

{
  return (-(param_1 == 0) & 0xdU) + 0xb;
}



/* MethodBindTRC<Transform2D, Node const*>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Transform2D,Node_const*>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<Vector2, Vector2>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<Vector2,Vector2>::_gen_argument_type(int param_1)

{
  return 5;
}



/* MethodBindTRC<Vector2, Vector2>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Vector2,Vector2>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<float, Vector2 const&>::_gen_argument_type(int) const */

char __thiscall
MethodBindTRC<float,Vector2_const&>::_gen_argument_type
          (MethodBindTRC<float,Vector2_const&> *this,int param_1)

{
  return (-(param_1 == 0) & 2U) + 3;
}



/* MethodBindTRC<float, Vector2 const&>::get_argument_meta(int) const */

uint __thiscall
MethodBindTRC<float,Vector2_const&>::get_argument_meta
          (MethodBindTRC<float,Vector2_const&> *this,int param_1)

{
  return param_1 >> 0x1f & 9;
}



/* MethodBindT<Transform2D const&>::_gen_argument_type(int) const */

byte __thiscall
MethodBindT<Transform2D_const&>::_gen_argument_type
          (MethodBindT<Transform2D_const&> *this,int param_1)

{
  return -(param_1 == 0) & 0xb;
}



/* MethodBindT<Transform2D const&>::get_argument_meta(int) const */

undefined8 MethodBindT<Transform2D_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<float, bool>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<float,bool>::_gen_argument_type(MethodBindT<float,bool> *this,int param_1)

{
  char cVar1;
  
  cVar1 = '\0';
  if ((uint)param_1 < 2) {
    cVar1 = (-(param_1 == 0) & 2U) + 1;
  }
  return cVar1;
}



/* MethodBindT<float, bool>::get_argument_meta(int) const */

byte __thiscall
MethodBindT<float,bool>::get_argument_meta(MethodBindT<float,bool> *this,int param_1)

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



/* MethodBindTRC<Vector2>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<Vector2>::_gen_argument_type(int param_1)

{
  return 5;
}



/* MethodBindTRC<Vector2>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Vector2>::get_argument_meta(int param_1)

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



/* MethodBindT<Vector2 const&>::_gen_argument_type(int) const */

byte __thiscall
MethodBindT<Vector2_const&>::_gen_argument_type(MethodBindT<Vector2_const&> *this,int param_1)

{
  return -(param_1 == 0) & 5;
}



/* MethodBindT<Vector2 const&>::get_argument_meta(int) const */

undefined8 MethodBindT<Vector2_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* CallableCustomMethodPointer<Viewport, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<Viewport,void>::get_argument_count
          (CallableCustomMethodPointer<Viewport,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<Viewport, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Viewport,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Viewport,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointerBase::get_method() const */

void CallableCustomMethodPointerBase::get_method(void)

{
  long in_RSI;
  StringName *in_RDI;
  
  StringName::StringName(in_RDI,*(char **)(in_RSI + 0x20),false);
  return;
}



/* MethodBindT<float, bool>::~MethodBindT() */

void __thiscall MethodBindT<float,bool>::~MethodBindT(MethodBindT<float,bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00111850;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<float, bool>::~MethodBindT() */

void __thiscall MethodBindT<float,bool>::~MethodBindT(MethodBindT<float,bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00111850;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<float>::~MethodBindT() */

void __thiscall MethodBindT<float>::~MethodBindT(MethodBindT<float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00111730;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<float>::~MethodBindT() */

void __thiscall MethodBindT<float>::~MethodBindT(MethodBindT<float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00111730;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<float>::~MethodBindTRC() */

void __thiscall MethodBindTRC<float>::~MethodBindTRC(MethodBindTRC<float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001117f0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<float>::~MethodBindTRC() */

void __thiscall MethodBindTRC<float>::~MethodBindTRC(MethodBindTRC<float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001117f0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Vector2>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Vector2>::~MethodBindTRC(MethodBindTRC<Vector2> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00111790;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Vector2>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Vector2>::~MethodBindTRC(MethodBindTRC<Vector2> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00111790;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Transform2D const&>::~MethodBindT() */

void __thiscall MethodBindT<Transform2D_const&>::~MethodBindT(MethodBindT<Transform2D_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001118b0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Transform2D const&>::~MethodBindT() */

void __thiscall MethodBindT<Transform2D_const&>::~MethodBindT(MethodBindT<Transform2D_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001118b0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Vector2 const&>::~MethodBindT() */

void __thiscall MethodBindT<Vector2_const&>::~MethodBindT(MethodBindT<Vector2_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001116d0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Vector2 const&>::~MethodBindT() */

void __thiscall MethodBindT<Vector2_const&>::~MethodBindT(MethodBindT<Vector2_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001116d0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<float, Vector2 const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<float,Vector2_const&>::~MethodBindTRC(MethodBindTRC<float,Vector2_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00111910;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<float, Vector2 const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<float,Vector2_const&>::~MethodBindTRC(MethodBindTRC<float,Vector2_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00111910;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Vector2, Vector2>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Vector2,Vector2>::~MethodBindTRC(MethodBindTRC<Vector2,Vector2> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00111970;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Vector2, Vector2>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Vector2,Vector2>::~MethodBindTRC(MethodBindTRC<Vector2,Vector2> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00111970;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Transform2D, Node const*>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Transform2D,Node_const*>::~MethodBindTRC(MethodBindTRC<Transform2D,Node_const*> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001119d0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Transform2D, Node const*>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Transform2D,Node_const*>::~MethodBindTRC(MethodBindTRC<Transform2D,Node_const*> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001119d0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* Node2D::~Node2D() */

void __thiscall Node2D::~Node2D(Node2D *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00111350;
  CanvasItem::~CanvasItem((CanvasItem *)this);
  return;
}



/* Node2D::~Node2D() */

void __thiscall Node2D::~Node2D(Node2D *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00111350;
  CanvasItem::~CanvasItem((CanvasItem *)this);
  operator_delete(this,0x580);
  return;
}



/* Node2D::_getv(StringName const&, Variant&) const */

undefined8 Node2D::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__get_00116008 != Object::_get) {
    uVar1 = CanvasItem::_get(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* Node2D::_setv(StringName const&, Variant const&) */

undefined8 Node2D::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__set_00116010 != Object::_set) {
    uVar1 = CanvasItem::_set(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* CallableCustomMethodPointer<Viewport, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<Viewport,void>::get_object
          (CallableCustomMethodPointer<Viewport,void> *this)

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
      goto LAB_00107e5d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00107e5d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00107e5d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* Node2D::_validate_propertyv(PropertyInfo&) const */

void Node2D::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  if ((code *)PTR__validate_property_00116018 == Node::_validate_property) {
    return;
  }
  CanvasItem::_validate_property(param_1);
  return;
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



/* Node2D::_get_class_namev() const */

undefined8 * Node2D::_get_class_namev(void)

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
LAB_00107fc3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00107fc3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"Node2D");
      goto LAB_0010802e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"Node2D");
LAB_0010802e:
  return &_get_class_namev()::_class_name_static;
}



/* Node2D::get_class() const */

void Node2D::get_class(void)

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
  local_48 = &_LC4;
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
      StringName::StringName((StringName *)&local_48,(String_conflict *)(puVar3 + 8),false);
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
      goto joined_r0x0010827c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010827c:
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



/* MethodBindTRC<Vector2>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Vector2>::_gen_argument_type_info(int param_1)

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
  local_48 = &_LC4;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 5;
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
      StringName::StringName((StringName *)&local_48,(String_conflict *)(puVar3 + 8),false);
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
      goto joined_r0x001083fc;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x001083fc:
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

void __thiscall String::parse_latin1(String_conflict *this,char *param_1)

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



/* Node::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void Node::_get_property_listv(List *param_1,bool param_2)

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
  undefined *local_78;
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
  local_78 = &_LC5;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC5;
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
LAB_00108698:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00108698;
    StringName::StringName((StringName *)&local_80,(String_conflict *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x001086b6;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x001086b6:
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
  StringName::StringName((StringName *)&local_78,"Node",false);
  ClassDB::get_property_list((StringName *)&local_78,pLVar6,true,(Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (undefined *)0x0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CanvasItem::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall CanvasItem::_get_property_listv(CanvasItem *this,List *param_1,bool param_2)

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
    Node::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "CanvasItem";
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "CanvasItem";
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
LAB_00108a98:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00108a98;
    StringName::StringName((StringName *)&local_80,(String_conflict *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00108ab5;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00108ab5:
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
  *(long **)(puVar5 + 0x10) = plVar1;
  *(undefined8 *)(puVar5 + 0xc) = 0;
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
  StringName::StringName((StringName *)&local_78,"CanvasItem",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if ((code *)PTR__get_property_list_00116020 != Object::_get_property_list) {
    CanvasItem::_get_property_list((List *)this);
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



/* Node2D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Node2D::_get_property_listv(Node2D *this,List *param_1,bool param_2)

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
    CanvasItem::_get_property_listv((CanvasItem *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "Node2D";
  local_70 = 6;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Node2D";
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
  if (local_90 == 0) {
LAB_00108f18:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00108f18;
    StringName::StringName((StringName *)&local_80,(String_conflict *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00108f35;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00108f35:
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
  StringName::StringName((StringName *)&local_78,"Node2D",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      CanvasItem::_get_property_listv((CanvasItem *)this,param_1,true);
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



/* Callable create_custom_callable_function_pointer<Viewport>(Viewport*, char const*, void
   (Viewport::*)()) */

Viewport *
create_custom_callable_function_pointer<Viewport>
          (Viewport *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC4;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00111640;
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



/* WARNING: Removing unreachable block (ram,0x00109d08) */
/* WARNING: Removing unreachable block (ram,0x00109e9d) */
/* WARNING: Removing unreachable block (ram,0x00109ea9) */
/* String vformat<String>(String const&, String const) */

undefined8 * vformat<String>(undefined8 *param_1,bool *param_2,String_conflict *param_3)

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



/* WARNING: Removing unreachable block (ram,0x00109f50) */
/* Node2D::_notificationv(int, bool) */

void __thiscall Node2D::_notificationv(Node2D *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    _notification(this,param_1);
    if ((code *)PTR__notification_00116028 != Node::_notification) {
      CanvasItem::_notification(iVar1);
    }
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  if ((code *)PTR__notification_00116028 != Node::_notification) {
    CanvasItem::_notification(iVar1);
  }
  _notification(this,param_1);
  return;
}



/* CallableCustomMethodPointer<Viewport, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<Viewport,void>::call
          (CallableCustomMethodPointer<Viewport,void> *this,Variant **param_1,int param_2,
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
      goto LAB_0010a17f;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0010a17f;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010a158. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_0010a241;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0010a17f:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String_conflict *)"Invalid Object id \'");
    String::operator+((String_conflict *)&local_48,(String_conflict *)local_58);
    _err_print_error(&_LC77,"./core/object/callable_method_pointer.h",0x67,
                     "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                     (String_conflict *)&local_48,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    CowData<char32_t>::_unref(local_58);
    CowData<char32_t>::_unref(local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010a241:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Node2D::is_class(String const&) const */

undefined8 __thiscall Node2D::is_class(Node2D *this,String_conflict *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
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
    lVar3 = *(long *)(lVar2 + 0x20);
    if (lVar3 == 0) {
      local_60 = 0;
    }
    else {
      pcVar5 = *(char **)(lVar3 + 8);
      local_60 = 0;
      if (pcVar5 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar3 + 0x10) + -0x10);
        if (*(long *)(lVar3 + 0x10) != 0) {
          do {
            lVar4 = *plVar1;
            if (lVar4 == 0) goto LAB_0010a2bf;
            LOCK();
            lVar7 = *plVar1;
            bVar9 = lVar4 == lVar7;
            if (bVar9) {
              *plVar1 = lVar4 + 1;
              lVar7 = lVar4;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar7 != -1) {
            local_60 = *(long *)(lVar3 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar5);
        local_58 = pcVar5;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_0010a2bf:
    cVar6 = String::operator==(param_1,(String_conflict *)&local_60);
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
    if (cVar6 != '\0') goto LAB_0010a373;
  }
  cVar6 = String::operator==(param_1,"Node2D");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar3 = *(long *)(lVar2 + 0x20);
      if (lVar3 == 0) {
        local_60 = 0;
      }
      else {
        pcVar5 = *(char **)(lVar3 + 8);
        local_60 = 0;
        if (pcVar5 == (char *)0x0) {
          plVar1 = (long *)(*(long *)(lVar3 + 0x10) + -0x10);
          if (*(long *)(lVar3 + 0x10) != 0) {
            do {
              lVar4 = *plVar1;
              if (lVar4 == 0) goto LAB_0010a4a3;
              LOCK();
              lVar7 = *plVar1;
              bVar9 = lVar4 == lVar7;
              if (bVar9) {
                *plVar1 = lVar4 + 1;
                lVar7 = lVar4;
              }
              UNLOCK();
            } while (!bVar9);
            if (lVar7 != -1) {
              local_60 = *(long *)(lVar3 + 0x10);
            }
          }
        }
        else {
          local_50 = strlen(pcVar5);
          local_58 = pcVar5;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
LAB_0010a4a3:
      cVar6 = String::operator==(param_1,(String_conflict *)&local_60);
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
      if (cVar6 != '\0') goto LAB_0010a373;
    }
    cVar6 = String::operator==(param_1,"CanvasItem");
    if (cVar6 == '\0') {
      for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
        lVar3 = *(long *)(lVar2 + 0x20);
        if (lVar3 == 0) {
          local_60 = 0;
        }
        else {
          pcVar5 = *(char **)(lVar3 + 8);
          local_60 = 0;
          if (pcVar5 == (char *)0x0) {
            if (*(long *)(lVar3 + 0x10) != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
            }
          }
          else {
            local_50 = strlen(pcVar5);
            local_58 = pcVar5;
            String::parse_latin1((StrRange *)&local_60);
          }
        }
        cVar6 = String::operator==(param_1,(String_conflict *)&local_60);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        if (cVar6 != '\0') goto LAB_0010a373;
      }
      cVar6 = String::operator==(param_1,"Node");
      if (cVar6 == '\0') {
        for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
          lVar3 = *(long *)(lVar2 + 0x20);
          if (lVar3 == 0) {
            local_58 = (char *)0x0;
          }
          else {
            local_58 = (char *)0x0;
            if (*(char **)(lVar3 + 8) == (char *)0x0) {
              if (*(long *)(lVar3 + 0x10) != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)(lVar3 + 0x10));
              }
            }
            else {
              String::parse_latin1((String_conflict *)&local_58,*(char **)(lVar3 + 8));
            }
          }
          cVar6 = String::operator==(param_1,(String_conflict *)&local_58);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
          if (cVar6 != '\0') goto LAB_0010a373;
        }
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar8 = String::operator==(param_1,"Object");
          return uVar8;
        }
        goto LAB_0010a61e;
      }
    }
  }
LAB_0010a373:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010a61e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<float, bool>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<float,bool>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uVar7;
  long lVar8;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar9;
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
  
  puVar9 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar9 = 0;
  puVar9[6] = 0;
  *(undefined8 *)(puVar9 + 8) = 0;
  puVar9[10] = 6;
  *(undefined1 (*) [16])(puVar9 + 2) = (undefined1  [16])0x0;
  if (in_EDX != 0) {
    if (in_EDX != 1) goto LAB_0010a68a;
    local_88 = 0;
    local_78 = &_LC4;
    local_90 = 0;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = local_70._8_8_;
    local_70 = auVar3 << 0x40;
    String::parse_latin1((StrRange *)&local_90);
    local_98 = 0;
    local_78 = (undefined *)CONCAT44(local_78._4_4_,1);
    local_60 = 0;
    local_58 = 0;
    local_70 = (undefined1  [16])0x0;
    if (local_90 == 0) {
LAB_0010a930:
      local_50 = 6;
      StringName::operator=((StringName *)(local_70 + 8),(StringName *)&local_88);
    }
    else {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
      local_50 = 6;
      if (local_60 != 0x11) goto LAB_0010a930;
      StringName::StringName((StringName *)&local_80,(String_conflict *)&local_58,false);
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
    *puVar9 = local_78._0_4_;
    if (*(long *)(puVar9 + 2) != local_70._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar9 + 2));
      uVar7 = local_70._0_8_;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = local_70._8_8_;
      local_70 = auVar5 << 0x40;
      *(undefined8 *)(puVar9 + 2) = uVar7;
    }
    if (*(long *)(puVar9 + 4) != local_70._8_8_) {
      StringName::unref();
      uVar7 = local_70._8_8_;
      local_70._8_8_ = 0;
      *(undefined8 *)(puVar9 + 4) = uVar7;
    }
    lVar8 = local_58;
    puVar9[6] = local_60;
    if (*(long *)(puVar9 + 8) == local_58) {
      puVar9[10] = local_50;
      if (local_58 != 0) {
        LOCK();
        plVar1 = (long *)(local_58 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_58 = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
      }
    }
    else {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar9 + 8));
      *(long *)(puVar9 + 8) = local_58;
      puVar9[10] = local_50;
    }
    if ((StringName::configured != '\0') && (local_70._8_8_ != 0)) {
      StringName::unref();
    }
    uVar7 = local_70._0_8_;
    if (local_70._0_8_ != 0) {
      LOCK();
      plVar1 = (long *)(local_70._0_8_ + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        auVar6._8_8_ = 0;
        auVar6._0_8_ = local_70._8_8_;
        local_70 = auVar6 << 0x40;
        Memory::free_static((void *)(uVar7 + -0x10),false);
      }
    }
    goto LAB_0010a68a;
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = &_LC4;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_70._8_8_;
  local_70 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_90);
  local_98 = 0;
  local_78 = (undefined *)CONCAT44(local_78._4_4_,3);
  local_60 = 0;
  local_58 = 0;
  local_70 = (undefined1  [16])0x0;
  if (local_90 == 0) {
LAB_0010a858:
    local_50 = 6;
    StringName::operator=((StringName *)(local_70 + 8),(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 6;
    if (local_60 != 0x11) goto LAB_0010a858;
    StringName::StringName((StringName *)&local_80,(String_conflict *)&local_58,false);
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
  *puVar9 = local_78._0_4_;
  if (*(long *)(puVar9 + 2) != local_70._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar9 + 2));
    uVar7 = local_70._0_8_;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = local_70._8_8_;
    local_70 = auVar4 << 0x40;
    *(undefined8 *)(puVar9 + 2) = uVar7;
  }
  if (*(long *)(puVar9 + 4) != local_70._8_8_) {
    StringName::unref();
    uVar7 = local_70._8_8_;
    local_70._8_8_ = 0;
    *(undefined8 *)(puVar9 + 4) = uVar7;
  }
  puVar9[6] = local_60;
  if (*(long *)(puVar9 + 8) != local_58) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar9 + 8));
    lVar8 = local_58;
    local_58 = 0;
    *(long *)(puVar9 + 8) = lVar8;
  }
  puVar9[10] = local_50;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
LAB_0010a68a:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar9;
}



/* MethodBindTRC<Vector2, Vector2>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Vector2,Vector2>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined8 uVar6;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar7;
  long in_FS_OFFSET;
  undefined8 local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  undefined1 local_90 [16];
  undefined8 local_80;
  long local_78;
  undefined4 local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar7 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_98 = 0;
  if (in_EDX != 0) {
    local_a0 = 0;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._0_8_;
    local_60 = auVar2 << 0x40;
    local_68 = &_LC4;
    String::parse_latin1((StrRange *)&local_a0);
    local_a8 = 0;
    *puVar7 = 5;
    puVar7[6] = 0;
    *(undefined8 *)(puVar7 + 8) = 0;
    *(undefined1 (*) [16])(puVar7 + 2) = (undefined1  [16])0x0;
    if (local_a0 == 0) {
      puVar7[10] = 6;
LAB_0010acb7:
      StringName::operator=((StringName *)(puVar7 + 4),(StringName *)&local_98);
    }
    else {
      CowData<char32_t>::_ref((CowData<char32_t> *)(puVar7 + 8),(CowData *)&local_a0);
      puVar7[10] = 6;
      if (puVar7[6] != 0x11) goto LAB_0010acb7;
      StringName::StringName((StringName *)&local_68,(String_conflict *)(puVar7 + 8),false);
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
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    if ((StringName::configured != '\0') && (local_98 != 0)) {
      StringName::unref();
    }
    goto LAB_0010acf2;
  }
  local_80 = 0;
  local_90._0_8_ = 0;
  local_90._8_8_ = 0;
  local_78 = 0;
  local_70 = 6;
  local_a8 = 0;
  local_b0 = 0;
  local_68 = &_LC4;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._0_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_b0);
  local_b8 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,5);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_b0 == 0) {
LAB_0010ad28:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_a8);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_b0);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_0010ad28;
    StringName::StringName((StringName *)&local_a0,(String_conflict *)&local_48,false);
    if (local_60._8_8_ == local_a0) {
      if ((StringName::configured != '\0') && (local_a0 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_60._8_8_ = local_a0;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  if ((StringName::configured != '\0') && (local_a8 != 0)) {
    StringName::unref();
  }
  local_98 = CONCAT44(local_98._4_4_,local_68._0_4_);
  if (local_90._0_8_ != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
    local_90._0_8_ = local_60._0_8_;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = local_60._8_8_;
    local_60 = auVar3 << 0x40;
  }
  if (local_90._8_8_ != local_60._8_8_) {
    StringName::unref();
    local_90._8_8_ = local_60._8_8_;
    local_60._8_8_ = 0;
  }
  local_80 = CONCAT44(local_80._4_4_,local_50);
  if (local_78 != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    local_78 = local_48;
    local_48 = 0;
  }
  local_70 = local_40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
  uVar6 = local_90._8_8_;
  uVar5 = local_90._0_8_;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = local_90._8_8_;
  local_90 = auVar4 << 0x40;
  *puVar7 = (undefined4)local_98;
  *(undefined8 *)(puVar7 + 2) = uVar5;
  *(undefined8 *)(puVar7 + 4) = uVar6;
  puVar7[6] = (undefined4)local_80;
  *(long *)(puVar7 + 8) = local_78;
  puVar7[10] = local_70;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
LAB_0010acf2:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar7;
}



/* MethodBindTRC<Transform2D, Node const*>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Transform2D,Node_const*>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
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
    local_70 = 6;
    local_68 = &_LC5;
    local_78 = 0;
    local_a8 = 0;
    local_60 = 4;
    String::parse_latin1((StrRange *)&local_a8);
    StringName::StringName((StringName *)&local_a0,(String_conflict *)&local_a8,false);
    local_68 = (undefined *)CONCAT44(local_68._4_4_,0x18);
    local_60 = 0;
    StringName::StringName((StringName *)&local_58,(StringName *)&local_a0);
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    if ((StringName::configured != '\0') && (local_a0 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
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
    goto LAB_0010b150;
  }
  local_a0 = 0;
  local_60 = 0;
  local_68 = &_LC4;
  String::parse_latin1((StrRange *)&local_a0);
  local_a8 = 0;
  *puVar4 = 0xb;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (local_a0 == 0) {
    puVar4[10] = 6;
LAB_0010b117:
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_98);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_a0);
    puVar4[10] = 6;
    if (puVar4[6] != 0x11) goto LAB_0010b117;
    StringName::StringName((StringName *)&local_68,(String_conflict *)(puVar4 + 8),false);
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
LAB_0010b150:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
  if (in_EDX != 0) goto LAB_0010b1e9;
  local_78 = 0;
  local_68 = &_LC4;
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
LAB_0010b2e5:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_0010b2e5;
    StringName::StringName((StringName *)&local_70,(String_conflict *)&local_48,false);
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
LAB_0010b1e9:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
}



/* MethodBindT<Transform2D const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<Transform2D_const&>::_gen_argument_type_info(int param_1)

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
  if (in_EDX != 0) goto LAB_0010b459;
  local_78 = 0;
  local_68 = &_LC4;
  local_80 = 0;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,0xb);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_0010b555:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_0010b555;
    StringName::StringName((StringName *)&local_70,(String_conflict *)&local_48,false);
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
LAB_0010b459:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
}



/* MethodBind* create_method_bind<Node2D, Vector2 const&>(void (Node2D::*)(Vector2 const&)) */

MethodBind * create_method_bind<Node2D,Vector2_const&>(_func_void_Vector2_ptr *param_1)

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
  *(_func_void_Vector2_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001116d0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "Node2D";
  local_30 = 6;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String_conflict *)&local_40,false);
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



/* MethodBind* create_method_bind<Node2D, float>(void (Node2D::*)(float)) */

MethodBind * create_method_bind<Node2D,float>(_func_void_float *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_00111730;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "Node2D";
  local_30 = 6;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String_conflict *)&local_40,false);
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



/* MethodBind* create_method_bind<Node2D, Vector2>(Vector2 (Node2D::*)() const) */

MethodBind * create_method_bind<Node2D,Vector2>(_func_Vector2 *param_1)

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
  *(_func_Vector2 **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00111790;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "Node2D";
  local_30 = 6;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String_conflict *)&local_40,false);
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



/* MethodBind* create_method_bind<Node2D, float>(float (Node2D::*)() const) */

MethodBind * create_method_bind<Node2D,float>(_func_float *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_001117f0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "Node2D";
  local_30 = 6;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String_conflict *)&local_40,false);
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



/* MethodBind* create_method_bind<Node2D, float, bool>(void (Node2D::*)(float, bool)) */

MethodBind * create_method_bind<Node2D,float,bool>(_func_void_float_bool *param_1)

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
  *(_func_void_float_bool **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00111850;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "Node2D";
  local_30 = 6;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String_conflict *)&local_40,false);
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



/* MethodBind* create_method_bind<Node2D, Transform2D const&>(void (Node2D::*)(Transform2D const&))
    */

MethodBind * create_method_bind<Node2D,Transform2D_const&>(_func_void_Transform2D_ptr *param_1)

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
  *(_func_void_Transform2D_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001118b0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "Node2D";
  local_30 = 6;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String_conflict *)&local_40,false);
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



/* MethodBind* create_method_bind<Node2D, float, Vector2 const&>(float (Node2D::*)(Vector2 const&)
   const) */

MethodBind * create_method_bind<Node2D,float,Vector2_const&>(_func_float_Vector2_ptr *param_1)

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
  *(_func_float_Vector2_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00111910;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "Node2D";
  local_30 = 6;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String_conflict *)&local_40,false);
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



/* MethodBind* create_method_bind<Node2D, Vector2, Vector2>(Vector2 (Node2D::*)(Vector2) const) */

MethodBind * create_method_bind<Node2D,Vector2,Vector2>(_func_Vector2_Vector2 *param_1)

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
  *(_func_Vector2_Vector2 **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00111970;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "Node2D";
  local_30 = 6;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String_conflict *)&local_40,false);
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



/* MethodBind* create_method_bind<Node2D, Transform2D, Node const*>(Transform2D (Node2D::*)(Node
   const*) const) */

MethodBind * create_method_bind<Node2D,Transform2D,Node_const*>(_func_Transform2D_Node_ptr *param_1)

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
  *(_func_Transform2D_Node_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001119d0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "Node2D";
  local_30 = 6;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String_conflict *)&local_40,false);
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



/* Node2D::_initialize_classv() */

void Node2D::_initialize_classv(void)

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
  if (initialize_class()::initialized == '\0') {
    if (CanvasItem::initialize_class()::initialized == '\0') {
      if (Node::initialize_class()::initialized == '\0') {
        Object::initialize_class();
        local_68 = 0;
        local_50 = 6;
        local_58 = "Object";
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(String_conflict *)&local_68,false);
        local_58 = "Node";
        local_70 = 0;
        local_50 = 4;
        String::parse_latin1((StrRange *)&local_70);
        StringName::StringName((StringName *)&local_58,(String_conflict *)&local_70,false);
        ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
        if ((StringName::configured != '\0') && (local_58 != (undefined *)0x0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        if ((StringName::configured != '\0') && (local_60 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        if ((code *)PTR__bind_methods_00116040 != Node::_bind_methods) {
          Node::_bind_methods();
        }
        Node::initialize_class()::initialized = '\x01';
      }
      local_58 = "Node";
      local_68 = 0;
      local_50 = 4;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String_conflict *)&local_68,false);
      local_58 = "CanvasItem";
      local_70 = 0;
      local_50 = 10;
      String::parse_latin1((StrRange *)&local_70);
      StringName::StringName((StringName *)&local_58,(String_conflict *)&local_70,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      if ((code *)PTR__bind_methods_00116030 != Node::_bind_methods) {
        CanvasItem::_bind_methods();
      }
      if ((code *)PTR__bind_compatibility_methods_00116038 != Object::_bind_compatibility_methods) {
        CanvasItem::_bind_compatibility_methods();
      }
      CanvasItem::initialize_class()::initialized = '\x01';
    }
    local_58 = "CanvasItem";
    local_68 = 0;
    local_50 = 10;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String_conflict *)&local_68,false);
    local_58 = "Node2D";
    local_70 = 0;
    local_50 = 6;
    String::parse_latin1((StrRange *)&local_70);
    StringName::StringName((StringName *)&local_58,(String_conflict *)&local_70,false);
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
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x0010c5c8) */
/* WARNING: Removing unreachable block (ram,0x0010c75d) */
/* WARNING: Removing unreachable block (ram,0x0010c769) */
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



/* MethodBindTRC<Vector2, Vector2>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Vector2,Vector2>::validated_call
          (MethodBindTRC<Vector2,Vector2> *this,Object *param_1,Variant **param_2,Variant *param_3)

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
      goto LAB_0010c8ec;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar3 = (*pcVar1)(*(undefined8 *)(*param_2 + 8),param_1 + *(long *)(this + 0x60));
  *(undefined8 *)(param_3 + 8) = uVar3;
LAB_0010c8ec:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector2, Vector2>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Vector2,Vector2>::ptrcall
          (MethodBindTRC<Vector2,Vector2> *this,Object *param_1,void **param_2,void *param_3)

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
      goto LAB_0010cacb;
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
  uVar3 = (*pcVar1)(**param_2,param_1 + *(long *)(this + 0x60));
  *(undefined8 *)param_3 = uVar3;
LAB_0010cacb:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<float, Vector2 const&>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<float,Vector2_const&>::validated_call
          (MethodBindTRC<float,Vector2_const&> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

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
      goto LAB_0010ccaf;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  fVar3 = (float)(*pcVar1)(param_1 + *(long *)(this + 0x60),*param_2 + 8);
  *(double *)(param_3 + 8) = (double)fVar3;
LAB_0010ccaf:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<float, Vector2 const&>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<float,Vector2_const&>::ptrcall
          (MethodBindTRC<float,Vector2_const&> *this,Object *param_1,void **param_2,void *param_3)

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
      goto LAB_0010ce8b;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  fVar3 = (float)(*pcVar1)(param_1 + *(long *)(this + 0x60),*param_2);
  *(double *)param_3 = (double)fVar3;
LAB_0010ce8b:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Transform2D const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Transform2D_const&>::validated_call
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
      goto LAB_0010d1f1;
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
                    /* WARNING: Could not recover jumptable at 0x0010d07d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined8 *)(*(long *)param_3 + 8));
    return;
  }
LAB_0010d1f1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Transform2D const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Transform2D_const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_0010d3f4;
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
                    /* WARNING: Could not recover jumptable at 0x0010d259. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3);
    return;
  }
LAB_0010d3f4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<float, bool>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<float,bool>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

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
      goto LAB_0010d5e1;
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
                    /* WARNING: Could not recover jumptable at 0x0010d46a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              (auVar2._0_8_,(long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined1 *)(*(long *)(param_3 + 8) + 8));
    return;
  }
LAB_0010d5e1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<float, bool>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<float,bool>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_0010d7d1;
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
    auVar2._4_12_ = SUB1612((undefined1  [16])0x0,4);
    auVar2._0_4_ = (float)**param_3;
                    /* WARNING: Could not recover jumptable at 0x0010d65e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              (auVar2._0_8_,(long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               **(char **)((long)param_3 + 8) != '\0');
    return;
  }
LAB_0010d7d1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<float>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<float>::call
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
  float fVar7;
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
      _err_print_error(&_LC77,"./core/object/method_bind.h",0x267,
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
      goto LAB_0010d930;
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
      fVar7 = (float)(*(code *)pVVar4)();
      Variant::Variant((Variant *)local_48,fVar7);
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
LAB_0010d930:
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
  char *pcVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
  float fVar4;
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
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      pcVar1 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_48 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar1 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010db98;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  fVar4 = (float)(*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(double *)(param_3 + 8) = (double)fVar4;
LAB_0010db98:
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
  long lVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
  float fVar4;
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
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
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
      goto LAB_0010dd77;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  fVar4 = (float)(*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(double *)param_3 = (double)fVar4;
LAB_0010dd77:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector2>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<Vector2>::call
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
      _err_print_error(&_LC77,"./core/object/method_bind.h",0x267,
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
      goto LAB_0010dfe0;
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
      local_50 = (*(code *)pVVar4)();
      Variant::Variant((Variant *)local_48,(Vector2 *)&local_50);
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
LAB_0010dfe0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector2>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Vector2>::validated_call
          (MethodBindTRC<Vector2> *this,Object *param_1,Variant **param_2,Variant *param_3)

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
      goto LAB_0010e244;
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
LAB_0010e244:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector2>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Vector2>::ptrcall
          (MethodBindTRC<Vector2> *this,Object *param_1,void **param_2,void *param_3)

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
      goto LAB_0010e3f3;
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
LAB_0010e3f3:
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
      goto LAB_0010e739;
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
                    /* WARNING: Could not recover jumptable at 0x0010e5c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(auVar2._0_8_,(long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0010e739:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<float>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<float>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  char *pcVar1;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar2;
  long in_FS_OFFSET;
  undefined1 auVar3 [16];
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
      goto LAB_0010e93c;
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
    auVar3._4_12_ = SUB1612((undefined1  [16])0x0,4);
    auVar3._0_4_ = (float)**param_3;
                    /* WARNING: Could not recover jumptable at 0x0010e7a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(auVar3._0_8_,(long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0010e93c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector2 const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Vector2_const&>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

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
      goto LAB_0010eb44;
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
                    /* WARNING: Could not recover jumptable at 0x0010e9ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8);
    return;
  }
LAB_0010eb44:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector2 const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Vector2_const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_0010ed44;
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
                    /* WARNING: Could not recover jumptable at 0x0010eba9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3);
    return;
  }
LAB_0010ed44:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Transform2D, Node const*>::validated_call(Object*, Variant const**, Variant*) const
    */

void __thiscall
MethodBindTRC<Transform2D,Node_const*>::validated_call
          (MethodBindTRC<Transform2D,Node_const*> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
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
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010edb0;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar2)(&local_48,param_1 + *(long *)(this + 0x60),*(undefined8 *)(*param_2 + 0x10));
  puVar1 = *(undefined8 **)(param_3 + 8);
  puVar1[2] = local_38;
  *puVar1 = local_48;
  puVar1[1] = uStack_40;
LAB_0010edb0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Transform2D, Node const*>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Transform2D,Node_const*>::ptrcall
          (MethodBindTRC<Transform2D,Node_const*> *this,Object *param_1,void **param_2,void *param_3
          )

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  long local_88;
  undefined8 local_80;
  char *local_78;
  undefined8 local_70;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
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
    if (local_78 == (char *)*plVar2) {
      if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_78 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_80 = 0;
      local_70 = 0x35;
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
      goto LAB_0010efa2;
    }
    if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  plVar2 = (long *)*param_2;
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  if (plVar2 != (long *)0x0) {
    plVar2 = (long *)*plVar2;
  }
  (*pcVar1)(&local_48,param_1 + *(long *)(this + 0x60),plVar2);
  *(undefined8 *)((long)param_3 + 0x10) = local_38;
  *(undefined8 *)param_3 = local_48;
  *(undefined8 *)((long)param_3 + 8) = uStack_40;
LAB_0010efa2:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Transform2D, Node const*>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTRC<Transform2D,Node_const*>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  code *pcVar2;
  undefined8 uVar3;
  char cVar4;
  undefined4 uVar5;
  Object *pOVar6;
  long *plVar7;
  Object *pOVar8;
  long lVar9;
  long lVar10;
  undefined4 in_register_00000014;
  long *plVar11;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar12;
  Variant *pVVar13;
  long in_FS_OFFSET;
  long local_98;
  undefined8 local_90;
  char *local_88;
  undefined8 local_80;
  undefined4 local_78 [2];
  undefined8 local_70;
  undefined8 uStack_68;
  Transform2D local_58 [24];
  long local_40;
  
  plVar11 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar11 != (long *)0x0) && (plVar11[1] != 0)) && (*(char *)(plVar11[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_88,(StringName *)(param_2 + 3));
    if (plVar11[1] == 0) {
      plVar7 = (long *)plVar11[0x23];
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)(**(code **)(*plVar11 + 0x40))(plVar11);
      }
    }
    else {
      plVar7 = (long *)(plVar11[1] + 0x20);
    }
    if (local_88 == (char *)*plVar7) {
      if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_88 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_90 = 0;
      local_80 = 0x35;
      String::parse_latin1((StrRange *)&local_90);
      vformat<StringName>((StringName *)&local_88,(StrRange *)&local_90,&local_98);
      _err_print_error(&_LC77,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_88,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      if ((StringName::configured != '\0') && (local_98 != 0)) {
        StringName::unref();
      }
      goto LAB_0010f2c8;
    }
    if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar13 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (1 < in_R8D) {
    uVar5 = 3;
LAB_0010f2bd:
    *in_R9 = uVar5;
    in_R9[2] = 1;
    goto LAB_0010f2c8;
  }
  pVVar12 = param_2[5];
  if (pVVar12 == (Variant *)0x0) {
    if (in_R8D != 1) goto LAB_0010f310;
LAB_0010f300:
    pVVar12 = *(Variant **)param_4;
  }
  else {
    lVar9 = *(long *)(pVVar12 + -8);
    if ((int)lVar9 < (int)(in_R8D ^ 1)) {
LAB_0010f310:
      uVar5 = 4;
      goto LAB_0010f2bd;
    }
    if (in_R8D == 1) goto LAB_0010f300;
    lVar10 = (long)((int)lVar9 + -1);
    if (lVar9 <= lVar10) {
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,lVar10,lVar9,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    pVVar12 = pVVar12 + lVar10 * 0x18;
  }
  *in_R9 = 0;
  if (((ulong)pVVar13 & 1) != 0) {
    pVVar13 = *(Variant **)(pVVar13 + *(long *)((long)plVar11 + (long)pVVar1) + -1);
  }
  cVar4 = Variant::can_convert_strict(*(undefined4 *)pVVar12,0x18);
  if (cVar4 == '\0') {
LAB_0010f236:
    uVar3 = _LC117;
    *in_R9 = 2;
    *(undefined8 *)(in_R9 + 1) = uVar3;
  }
  else {
    pOVar6 = Variant::operator_cast_to_Object_(pVVar12);
    pOVar8 = Variant::operator_cast_to_Object_(pVVar12);
    if (((pOVar8 == (Object *)0x0) ||
        (lVar9 = __dynamic_cast(pOVar8,&Object::typeinfo,&Node::typeinfo,0), lVar9 == 0)) &&
       (pOVar6 != (Object *)0x0)) goto LAB_0010f236;
  }
  pOVar6 = Variant::operator_cast_to_Object_(pVVar12);
  if (pOVar6 != (Object *)0x0) {
    pOVar6 = (Object *)__dynamic_cast(pOVar6,&Object::typeinfo,&Node::typeinfo,0);
  }
  (*(code *)pVVar13)(local_58,(Variant *)((long)plVar11 + (long)pVVar1),pOVar6);
  Variant::Variant((Variant *)local_78,local_58);
  if (Variant::needs_deinit[*(int *)param_1] != '\0') {
    Variant::_clear_internal();
  }
  *(undefined4 *)param_1 = local_78[0];
  *(undefined8 *)(param_1 + 8) = local_70;
  *(undefined8 *)(param_1 + 0x10) = uStack_68;
LAB_0010f2c8:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindT<Vector2 const&>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<Vector2_const&>::call
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
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  undefined8 local_38;
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
      _err_print_error(&_LC77,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010f6f0;
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
      if (in_R8D != 1) goto LAB_0010f740;
LAB_0010f730:
      pVVar10 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar10 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0010f740:
        uVar6 = 4;
        goto LAB_0010f6e5;
      }
      if (in_R8D == 1) goto LAB_0010f730;
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
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar10,5);
    uVar4 = _LC120;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    local_38 = Variant::operator_cast_to_Vector2(pVVar10);
    (*(code *)pVVar11)((Variant *)((long)plVar9 + (long)pVVar1),&local_38);
  }
  else {
    uVar6 = 3;
LAB_0010f6e5:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_0010f6f0:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<float, Vector2 const&>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindTRC<float,Vector2_const&>::call
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
  float fVar12;
  long local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar9 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar9 != (long *)0x0) && (plVar9[1] != 0)) && (*(char *)(plVar9[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar9[1] == 0) {
      plVar7 = (long *)plVar9[0x23];
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)(**(code **)(*plVar9 + 0x40))(plVar9);
      }
    }
    else {
      plVar7 = (long *)(plVar9[1] + 0x20);
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
      _err_print_error(&_LC77,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_0010fa40;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar11 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar10 = param_2[5];
    if (pVVar10 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_0010fa80;
LAB_0010fa70:
      pVVar10 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar10 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0010fa80:
        uVar6 = 4;
        goto LAB_0010fa35;
      }
      if (in_R8D == 1) goto LAB_0010fa70;
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
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar10,5);
    uVar4 = _LC120;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    local_50 = Variant::operator_cast_to_Vector2(pVVar10);
    fVar12 = (float)(*(code *)pVVar11)((Variant *)((long)plVar9 + (long)pVVar1),&local_50);
    Variant::Variant((Variant *)local_48,fVar12);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_48[0];
    *(undefined8 *)(param_1 + 8) = local_40;
    *(undefined8 *)(param_1 + 0x10) = uStack_38;
  }
  else {
    uVar6 = 3;
LAB_0010fa35:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_0010fa40:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector2, Vector2>::call(Object*, Variant const**, int, Callable::CallError&) const
    */

Object * MethodBindTRC<Vector2,Vector2>::call
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
  long local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar9 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar9 != (long *)0x0) && (plVar9[1] != 0)) && (*(char *)(plVar9[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar9[1] == 0) {
      plVar7 = (long *)plVar9[0x23];
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)(**(code **)(*plVar9 + 0x40))(plVar9);
      }
    }
    else {
      plVar7 = (long *)(plVar9[1] + 0x20);
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
      _err_print_error(&_LC77,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_0010fdc0;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar11 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar10 = param_2[5];
    if (pVVar10 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_0010fe00;
LAB_0010fdf0:
      pVVar10 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar10 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0010fe00:
        uVar6 = 4;
        goto LAB_0010fdb5;
      }
      if (in_R8D == 1) goto LAB_0010fdf0;
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
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar10,5);
    uVar4 = _LC120;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_Vector2(pVVar10);
    local_50 = (*(code *)pVVar11)((Variant *)((long)plVar9 + (long)pVVar1));
    Variant::Variant((Variant *)local_48,(Vector2 *)&local_50);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_48[0];
    *(undefined8 *)(param_1 + 8) = local_40;
    *(undefined8 *)(param_1 + 0x10) = uStack_38;
  }
  else {
    uVar6 = 3;
LAB_0010fdb5:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_0010fdc0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, Transform2D const&>(__UnexistingClass*, void
   (__UnexistingClass::*)(Transform2D const&), Variant const**, int, Callable::CallError&,
   Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,Transform2D_const&>
               (__UnexistingClass *param_1,_func_void_Transform2D_ptr *param_2,Variant **param_3,
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
      if (uVar8 != 1) goto LAB_00110178;
LAB_001100f8:
      puVar9 = *(undefined4 **)CONCAT44(in_register_0000000c,param_4);
    }
    else {
      lVar2 = *(long *)(lVar1 + -8);
      if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_00110178:
        uVar6 = 4;
        goto LAB_00110105;
      }
      if (uVar8 == 1) goto LAB_001100f8;
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
      param_2 = *(_func_void_Transform2D_ptr **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
    }
    cVar5 = Variant::can_convert_strict(*puVar9,0xb);
    uVar4 = _LC121;
    if (cVar5 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar4;
    }
    Variant::operator_cast_to_Transform2D(aVStack_48);
    (*param_2)((Transform2D *)(param_1 + (long)param_3));
  }
  else {
    uVar6 = 3;
LAB_00110105:
    *(undefined4 *)param_6 = uVar6;
    *(undefined4 *)(param_6 + 8) = 1;
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindT<Transform2D const&>::call(Object*, Variant const**, int, Callable::CallError&) const
    */

Object * MethodBindT<Transform2D_const&>::call
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
      _err_print_error(&_LC77,"./core/object/method_bind.h",0x154,
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
      goto LAB_001101e6;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,Transform2D_const&>
            (p_Var4,(_func_void_Transform2D_ptr *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4
             ,in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_001101e6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, float, bool>(__UnexistingClass*, void
   (__UnexistingClass::*)(float, bool), Variant const**, int, Callable::CallError&, Vector<Variant>
   const&) */

void call_with_variant_args_dv<__UnexistingClass,float,bool>
               (__UnexistingClass *param_1,_func_void_float_bool *param_2,Variant **param_3,
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
  float fVar12;
  long in_stack_00000008;
  
  plVar8 = (long *)CONCAT44(in_register_0000000c,param_4);
  uVar10 = (uint)param_5;
  if (2 < uVar10) {
    uVar7 = 3;
    goto LAB_0011051d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  iVar6 = 2 - uVar10;
  if (lVar1 == 0) {
    if (iVar6 == 0) {
      this = (Variant *)*plVar8;
LAB_0011054d:
      this_00 = (Variant *)plVar8[1];
      goto LAB_00110485;
    }
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    iVar11 = (int)lVar2;
    if (iVar6 <= iVar11) {
      if (uVar10 == 0) {
        lVar9 = (long)(iVar11 + -2);
        if (lVar2 <= lVar9) goto LAB_00110568;
        this = (Variant *)(lVar1 + lVar9 * 0x18);
      }
      else {
        this = (Variant *)*plVar8;
        if (uVar10 == 2) goto LAB_0011054d;
      }
      lVar9 = (long)(int)((uVar10 ^ 1) + (iVar11 - iVar6));
      if (lVar2 <= lVar9) {
LAB_00110568:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this_00 = (Variant *)(lVar1 + lVar9 * 0x18);
LAB_00110485:
      *(undefined4 *)param_6 = 0;
      if (((ulong)param_2 & 1) != 0) {
        param_2 = *(_func_void_float_bool **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
      }
      cVar5 = Variant::can_convert_strict(*(undefined4 *)this_00,1);
      uVar4 = _LC122;
      if (cVar5 == '\0') {
        *(undefined4 *)param_6 = 2;
        *(undefined8 *)(param_6 + 4) = uVar4;
      }
      Variant::operator_cast_to_bool(this_00);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)this,3);
      uVar4 = _LC123;
      if (cVar5 == '\0') {
        *(undefined4 *)param_6 = 2;
        *(undefined8 *)(param_6 + 4) = uVar4;
      }
      fVar12 = Variant::operator_cast_to_float(this);
                    /* WARNING: Could not recover jumptable at 0x0011050a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*param_2)(fVar12,SUB81(param_1 + (long)param_3,0));
      return;
    }
  }
  uVar7 = 4;
LAB_0011051d:
  *(undefined4 *)param_6 = uVar7;
  *(undefined4 *)(param_6 + 8) = 2;
  return;
}



/* MethodBindT<float, bool>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<float,bool>::call
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
      _err_print_error(&_LC77,"./core/object/method_bind.h",0x154,
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
      goto LAB_00110606;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,float,bool>
            (p_Var4,(_func_void_float_bool *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,
             in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00110606:
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
    goto LAB_0011090d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_00110970;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_00110970:
      uVar6 = 4;
LAB_0011090d:
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
      goto LAB_0011088b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0011088b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_float **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,3);
  uVar4 = _LC123;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  fVar9 = Variant::operator_cast_to_float(this);
                    /* WARNING: Could not recover jumptable at 0x001108e4. Too many branches */
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
      _err_print_error(&_LC77,"./core/object/method_bind.h",0x154,
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
      goto LAB_001109d6;
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
LAB_001109d6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info_helper<Vector2 const&>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<Vector2_const&>
               (int param_1,int *param_2,PropertyInfo *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  int iVar5;
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
  iVar5 = *param_2;
  if (iVar5 != param_1) goto LAB_00110c17;
  local_78 = 0;
  local_68 = &_LC4;
  local_80 = 0;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,5);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00110d15:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00110d15;
    StringName::StringName((StringName *)&local_70,(String_conflict *)&local_48,false);
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
    uVar3 = local_60._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *(undefined8 *)(param_3 + 8) = uVar3;
  }
  if (*(long *)(param_3 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar3 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(param_3 + 0x10) = uVar3;
  }
  *(int *)(param_3 + 0x18) = local_50;
  if (*(long *)(param_3 + 0x20) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 0x20));
    lVar4 = local_48;
    local_48 = 0;
    *(long *)(param_3 + 0x20) = lVar4;
  }
  *(undefined4 *)(param_3 + 0x28) = local_40;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
  iVar5 = *param_2;
LAB_00110c17:
  *param_2 = iVar5 + 1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindT<Vector2 const&>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<Vector2_const&>::_gen_argument_type_info(int param_1)

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
  call_get_argument_type_info_helper<Vector2_const&>(in_EDX,&local_14,pPVar1);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<float, Vector2 const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<float,Vector2_const&>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  long lVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  long local_78;
  ulong local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<Vector2_const&>(0,(int *)&local_70,(PropertyInfo *)&local_68)
    ;
    *puVar4 = local_68._0_4_;
    *(undefined8 *)(puVar4 + 2) = local_60._0_8_;
    *(undefined8 *)(puVar4 + 4) = local_60._8_8_;
    puVar4[6] = (undefined4)local_50;
    *(undefined8 *)(puVar4 + 8) = local_48;
    puVar4[10] = local_40;
    goto LAB_00110f55;
  }
  local_70 = 0;
  local_68 = &_LC4;
  local_78 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._0_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  *puVar4 = 3;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar4[10] = 6;
LAB_00111067:
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_70);
    lVar3 = local_78;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_78);
    puVar4[10] = 6;
    if (puVar4[6] != 0x11) goto LAB_00111067;
    StringName::StringName((StringName *)&local_68,(String_conflict *)(puVar4 + 8),false);
    if (*(undefined **)(puVar4 + 4) == local_68) {
      lVar3 = local_78;
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
        lVar3 = local_78;
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar4 + 4) = local_68;
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
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_00110f55:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodDefinition::~MethodDefinition() */

void __thiscall MethodDefinition::~MethodDefinition(MethodDefinition *this)

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
/* Node2D::~Node2D() */

void __thiscall Node2D::~Node2D(Node2D *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Transform2D, Node const*>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Transform2D,Node_const*>::~MethodBindTRC(MethodBindTRC<Transform2D,Node_const*> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Vector2, Vector2>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Vector2,Vector2>::~MethodBindTRC(MethodBindTRC<Vector2,Vector2> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<float, Vector2 const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<float,Vector2_const&>::~MethodBindTRC(MethodBindTRC<float,Vector2_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Vector2 const&>::~MethodBindT() */

void __thiscall MethodBindT<Vector2_const&>::~MethodBindT(MethodBindT<Vector2_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Transform2D const&>::~MethodBindT() */

void __thiscall MethodBindT<Transform2D_const&>::~MethodBindT(MethodBindT<Transform2D_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Vector2>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Vector2>::~MethodBindTRC(MethodBindTRC<Vector2> *this)

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
/* MethodBindT<float, bool>::~MethodBindT() */

void __thiscall MethodBindT<float,bool>::~MethodBindT(MethodBindT<float,bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<Viewport, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Viewport,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Viewport,void> *this)

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


