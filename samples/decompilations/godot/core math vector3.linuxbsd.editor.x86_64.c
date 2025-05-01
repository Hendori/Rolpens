
/* Vector3::rotate(Vector3 const&, float) */

void Vector3::rotate(Vector3 *param_1,float param_2)

{
  float fVar1;
  long in_FS_OFFSET;
  float fVar2;
  float fVar3;
  Vector3 local_38 [4];
  float fStack_34;
  undefined1 local_28 [12];
  float fStack_1c;
  float local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = 1.0;
  _local_38 = ZEXT416(_LC1);
  _local_28 = ZEXT416(_LC1);
  Basis::set_axis_angle(local_38,param_2);
  fVar1 = *(float *)(param_1 + 8);
  fVar2 = (float)*(undefined8 *)param_1;
  fVar3 = (float)((ulong)*(undefined8 *)param_1 >> 0x20);
  *(float *)(param_1 + 8) = (float)local_28._8_4_ * fVar2 + fStack_1c * fVar3 + local_18 * fVar1;
  *(ulong *)param_1 =
       CONCAT44(SUB164(_local_38,0xc) * fVar2 + fVar3 * (float)local_28._0_4_ +
                SUB164(_local_28,4) * fVar1,
                SUB164(_local_38,0) * fVar2 + fVar3 * fStack_34 + SUB164(_local_38,8) * fVar1);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Vector3::rotated(Vector3 const&, float) const */

undefined1  [16] Vector3::rotated(Vector3 *param_1,float param_2)

{
  long in_FS_OFFSET;
  undefined1 auVar1 [16];
  undefined8 local_28;
  undefined4 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = *(undefined8 *)param_1;
  local_20 = *(undefined4 *)(param_1 + 8);
  rotate((Vector3 *)&local_28,param_2);
  auVar1._8_4_ = local_20;
  auVar1._0_8_ = local_28;
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar1._12_4_ = 0;
    return auVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Vector3::clamp(Vector3 const&, Vector3 const&) const */

void __thiscall Vector3::clamp(Vector3 *this,Vector3 *param_1,Vector3 *param_2)

{
  float fVar1;
  long in_FS_OFFSET;
  float fVar2;
  
  fVar1 = *(float *)this;
  fVar2 = *(float *)param_1;
  if ((*(float *)param_1 <= fVar1) && (fVar2 = *(float *)param_2, fVar1 <= *(float *)param_2)) {
    fVar2 = fVar1;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(fVar2);
  }
  return;
}



/* Vector3::clampf(float, float) const */

void __thiscall Vector3::clampf(Vector3 *this,float param_1,float param_2)

{
  float fVar1;
  long in_FS_OFFSET;
  
  fVar1 = *(float *)this;
  if ((param_1 <= fVar1) && (param_1 = param_2, fVar1 <= param_2)) {
    param_1 = fVar1;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_1);
  }
  return;
}



/* Vector3::snap(Vector3 const&) */

void __thiscall Vector3::snap(Vector3 *this,Vector3 *param_1)

{
  double dVar1;
  
  dVar1 = (double)Math::snapped((double)*(float *)this,(double)*(float *)param_1);
  *(float *)this = (float)dVar1;
  dVar1 = (double)Math::snapped((double)*(float *)(this + 4),(double)*(float *)(param_1 + 4));
  *(float *)(this + 4) = (float)dVar1;
  dVar1 = (double)Math::snapped((double)*(float *)(this + 8),(double)*(float *)(param_1 + 8));
  *(float *)(this + 8) = (float)dVar1;
  return;
}



/* Vector3::snapped(Vector3 const&) const */

undefined1  [16] __thiscall Vector3::snapped(Vector3 *this,Vector3 *param_1)

{
  float fVar1;
  float fVar2;
  long lVar3;
  long in_FS_OFFSET;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  
  fVar1 = *(float *)(this + 4);
  fVar2 = *(float *)(this + 8);
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  dVar4 = (double)Math::snapped((double)*(float *)this,(double)*(float *)param_1);
  dVar5 = (double)Math::snapped((double)fVar1,(double)*(float *)(param_1 + 4));
  auVar6._4_4_ = (float)dVar5;
  auVar6._0_4_ = (float)dVar4;
  dVar4 = (double)Math::snapped((double)fVar2,(double)*(float *)(param_1 + 8));
  auVar6._8_4_ = (float)dVar4;
  if (lVar3 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar6._12_4_ = 0;
    return auVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Vector3::snapf(float) */

void __thiscall Vector3::snapf(Vector3 *this,float param_1)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (double)param_1;
  dVar1 = (double)Math::snapped((double)*(float *)this,dVar2);
  *(float *)this = (float)dVar1;
  dVar1 = (double)Math::snapped((double)*(float *)(this + 4),dVar2);
  *(float *)(this + 4) = (float)dVar1;
  dVar1 = (double)Math::snapped((double)*(float *)(this + 8),dVar2);
  *(float *)(this + 8) = (float)dVar1;
  return;
}



/* Vector3::snappedf(float) const */

undefined1  [16] __thiscall Vector3::snappedf(Vector3 *this,float param_1)

{
  float fVar1;
  float fVar2;
  long lVar3;
  long in_FS_OFFSET;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  
  dVar6 = (double)param_1;
  fVar1 = *(float *)(this + 4);
  fVar2 = *(float *)(this + 8);
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  dVar4 = (double)Math::snapped((double)*(float *)this,dVar6);
  dVar5 = (double)Math::snapped((double)fVar1,dVar6);
  auVar7._4_4_ = (float)dVar5;
  auVar7._0_4_ = (float)dVar4;
  dVar4 = (double)Math::snapped((double)fVar2,dVar6);
  auVar7._8_4_ = (float)dVar4;
  if (lVar3 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar7._12_4_ = 0;
    return auVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Vector3::limit_length(float) const */

void __thiscall Vector3::limit_length(Vector3 *this,float param_1)

{
  long in_FS_OFFSET;
  undefined1 auVar1 [16];
  float fVar2;
  undefined1 auVar3 [16];
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = *(ulong *)this;
  fVar2 = (float)(*(ulong *)this >> 0x20);
  fVar2 = SQRT(*(float *)this * *(float *)this + fVar2 * fVar2 +
               *(float *)(this + 8) * *(float *)(this + 8));
  if ((0.0 < fVar2) && (param_1 < fVar2)) {
    auVar3._4_4_ = fVar2;
    auVar3._0_4_ = fVar2;
    auVar3._8_8_ = _LC3;
    divps(auVar1,auVar3);
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Vector3::move_toward(Vector3 const&, float) const */

undefined1  [16] __thiscall Vector3::move_toward(Vector3 *this,Vector3 *param_1,float param_2)

{
  undefined1 auVar1 [16];
  long in_FS_OFFSET;
  float fVar2;
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined8 local_20;
  float local_18;
  
  fVar5 = (float)*(undefined8 *)this;
  auVar3._0_4_ = (float)*(undefined8 *)param_1 - fVar5;
  fVar6 = (float)((ulong)*(undefined8 *)this >> 0x20);
  auVar3._4_4_ = (float)((ulong)*(undefined8 *)param_1 >> 0x20) - fVar6;
  auVar3._8_8_ = 0;
  fVar4 = *(float *)(param_1 + 8) - *(float *)(this + 8);
  fVar2 = SQRT(auVar3._0_4_ * auVar3._0_4_ + auVar3._4_4_ * auVar3._4_4_ + fVar4 * fVar4);
  if ((fVar2 <= param_2) || (fVar2 < _LC4)) {
    local_20 = *(undefined8 *)param_1;
    local_18 = *(float *)(param_1 + 8);
  }
  else {
    auVar1._4_4_ = fVar2;
    auVar1._0_4_ = fVar2;
    auVar1._8_4_ = (int)_LC3;
    auVar1._12_4_ = (int)((ulong)_LC3 >> 0x20);
    auVar3 = divps(auVar3,auVar1);
    local_18 = (fVar4 / fVar2) * param_2 + *(float *)(this + 8);
    local_20 = CONCAT44(auVar3._4_4_ * param_2 + fVar6,auVar3._0_4_ * param_2 + fVar5);
  }
  auVar7._8_4_ = local_18;
  auVar7._0_8_ = local_20;
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar7._12_4_ = 0;
    return auVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Vector3::octahedron_encode() const */

void __thiscall Vector3::octahedron_encode(Vector3 *this)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float fVar4;
  float fStack_4;
  
  uVar1 = *(ulong *)this;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar1;
  fStack_4 = (float)(uVar1 >> 0x20);
  fVar4 = ABS(fStack_4) + ABS((float)uVar1) + ABS(*(float *)(this + 8));
  auVar2._4_4_ = fVar4;
  auVar2._0_4_ = fVar4;
  auVar2._8_4_ = (int)_LC3;
  auVar2._12_4_ = (int)((ulong)_LC3 >> 0x20);
  divps(auVar3,auVar2);
  if (0.0 <= *(float *)(this + 8) / fVar4) {
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Vector3::octahedron_decode(Vector2 const&) */

undefined1  [16] Vector3::octahedron_decode(Vector2 *param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  float fVar2;
  undefined1 auVar3 [16];
  float fVar4;
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  
  fVar2 = (*(float *)param_1 + *(float *)param_1) - _LC1;
  fVar4 = (*(float *)(param_1 + 4) + *(float *)(param_1 + 4)) - _LC1;
  fVar6 = (_LC1 - ABS(fVar2)) - ABS(fVar4);
  fVar7 = 0.0;
  if ((fVar6 <= 0.0) && (fVar7 = _LC1, _LC7 <= fVar6)) {
    fVar7 = (float)((uint)fVar6 ^ __LC5);
  }
  auVar3._0_4_ = fVar2 + (float)(((uint)fVar7 ^ __LC5) & -(uint)(0.0 <= fVar2) |
                                ~-(uint)(0.0 <= fVar2) & (uint)fVar7);
  if (0.0 <= fVar4) {
    fVar7 = (float)((uint)fVar7 ^ __LC5);
  }
  fVar4 = fVar4 + fVar7;
  fVar7 = auVar3._0_4_ * auVar3._0_4_ + fVar4 * fVar4 + fVar6 * fVar6;
  fVar2 = 0.0;
  uVar1 = 0;
  if (fVar7 != 0.0) {
    fVar7 = SQRT(fVar7);
    auVar3._4_4_ = fVar4;
    auVar3._8_8_ = 0;
    fVar2 = fVar6 / fVar7;
    auVar5._4_4_ = fVar7;
    auVar5._0_4_ = fVar7;
    auVar5._8_8_ = _LC3;
    auVar3 = divps(auVar3,auVar5);
    uVar1 = auVar3._0_8_;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  auVar8._8_4_ = fVar2;
  auVar8._0_8_ = uVar1;
  auVar8._12_4_ = 0;
  return auVar8;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Vector3::octahedron_tangent_encode(float) const */

ulong __thiscall Vector3::octahedron_tangent_encode(Vector3 *this,float param_1)

{
  float fVar1;
  ulong uVar2;
  float fVar3;
  
  uVar2 = octahedron_encode(this);
  fVar3 = (float)(uVar2 >> 0x20);
  fVar1 = _LC8;
  if (__LC9 < fVar3) {
    fVar1 = fVar3 * _LC10 + _LC10;
  }
  if (param_1 < 0.0) {
    fVar1 = _LC1 - fVar1;
  }
  return uVar2 & 0xffffffff | (ulong)(uint)fVar1 << 0x20;
}



/* Vector3::octahedron_tangent_decode(Vector2 const&, float*) */

void Vector3::octahedron_tangent_decode(Vector2 *param_1,float *param_2)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  float fVar2;
  float fVar3;
  undefined4 local_30;
  float fStack_2c;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = *(undefined8 *)param_1;
  fStack_2c = (float)((ulong)uVar1 >> 0x20);
  fVar2 = (fStack_2c + fStack_2c) - _LC1;
  fVar3 = _LC1;
  if (fVar2 < 0.0) {
    fVar3 = _LC7;
  }
  *param_2 = fVar3;
  _local_30 = CONCAT44(ABS(fVar2),(int)uVar1);
  octahedron_decode((Vector2 *)&local_30);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Vector3::outer(Vector3 const&) const */

Vector3 * Vector3::outer(Vector3 *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *in_RDX;
  float *in_RSI;
  
  fVar1 = in_RDX[2];
  fVar2 = *in_RSI;
  fVar3 = in_RDX[1];
  fVar4 = *in_RDX;
  fVar5 = in_RSI[1];
  fVar6 = in_RSI[2];
  *(float *)(param_1 + 0x20) = fVar1 * fVar6;
  *(float *)param_1 = fVar2 * fVar4;
  *(float *)(param_1 + 4) = fVar2 * fVar3;
  *(float *)(param_1 + 8) = fVar2 * fVar1;
  *(float *)(param_1 + 0xc) = fVar5 * fVar4;
  *(float *)(param_1 + 0x10) = fVar5 * fVar3;
  *(float *)(param_1 + 0x14) = fVar5 * fVar1;
  *(float *)(param_1 + 0x18) = fVar6 * fVar4;
  *(float *)(param_1 + 0x1c) = fVar6 * fVar3;
  return param_1;
}



/* Vector3::is_equal_approx(Vector3 const&) const */

undefined4 __thiscall Vector3::is_equal_approx(Vector3 *this,Vector3 *param_1)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  
  fVar1 = *(float *)this;
  if (*(float *)param_1 == fVar1) {
LAB_00100a7a:
    fVar1 = *(float *)(this + 4);
    if (*(float *)(param_1 + 4) != fVar1) {
      fVar4 = _LC4;
      if (_LC4 <= ABS(fVar1) * _LC4) {
        fVar4 = ABS(fVar1) * _LC4;
      }
      if (fVar4 <= ABS(fVar1 - *(float *)(param_1 + 4))) goto LAB_00100b10;
    }
    fVar1 = *(float *)(this + 8);
    uVar3 = 1;
    if (*(float *)(param_1 + 8) != fVar1) {
      fVar2 = ABS(fVar1 - *(float *)(param_1 + 8));
      fVar4 = _LC4;
      if (_LC4 <= ABS(fVar1) * _LC4) {
        fVar4 = ABS(fVar1) * _LC4;
      }
      return CONCAT31((int3)((uint)fVar2 >> 8),fVar2 < fVar4);
    }
  }
  else {
    fVar4 = _LC4;
    if (_LC4 <= ABS(fVar1) * _LC4) {
      fVar4 = ABS(fVar1) * _LC4;
    }
    if (ABS(fVar1 - *(float *)param_1) < fVar4) goto LAB_00100a7a;
LAB_00100b10:
    uVar3 = 0;
  }
  return uVar3;
}



/* Vector3::is_zero_approx() const */

undefined4 __thiscall Vector3::is_zero_approx(Vector3 *this)

{
  if ((ABS(*(float *)this) < _LC4) && (ABS(*(float *)(this + 4)) < _LC4)) {
    return CONCAT31((int3)((uint)ABS(*(float *)(this + 8)) >> 8),ABS(*(float *)(this + 8)) < _LC4);
  }
  return 0;
}



/* Vector3::is_finite() const */

bool __thiscall Vector3::is_finite(Vector3 *this)

{
  bool bVar1;
  
  bVar1 = false;
  if (((float)(*(uint *)this & _LC11) <= _LC12) && ((float)(*(uint *)(this + 4) & _LC11) <= _LC12))
  {
    bVar1 = (float)(*(uint *)(this + 8) & _LC11) <= _LC12;
  }
  return bVar1;
}



/* Vector3::operator String() const */

Vector3 * __thiscall Vector3::operator_cast_to_String(Vector3 *this)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  float *in_RSI;
  long in_FS_OFFSET;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  undefined *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = 0;
  local_58 = &_LC13;
  local_50 = 1;
  String::parse_latin1((StrRange *)&local_60);
  String::num_real(in_RSI[2],SUB81(&local_68,0));
  local_58 = &_LC14;
  local_78 = 0;
  local_50 = 2;
  String::parse_latin1((StrRange *)&local_78);
  String::num_real(in_RSI[1],SUB81(&local_88,0));
  local_58 = &_LC14;
  local_98 = 0;
  local_50 = 2;
  String::parse_latin1((StrRange *)&local_98);
  String::num_real(*in_RSI,SUB81(&local_a8,0));
  operator+((char *)&local_a0,&_LC15);
  String::operator+((String *)&local_90,(String *)&local_a0);
  String::operator+((String *)&local_80,(String *)&local_90);
  String::operator+((String *)&local_70,(String *)&local_80);
  String::operator+((String *)&local_58,(String *)&local_70);
  String::operator+((String *)this,(String *)&local_58);
  puVar3 = local_58;
  if (local_58 != (undefined *)0x0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = (undefined *)0x0;
      Memory::free_static(puVar3 + -0x10,false);
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
  lVar2 = local_a0;
  if (local_a0 != 0) {
    LOCK();
    plVar1 = (long *)(local_a0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_a0 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_a8;
  if (local_a8 != 0) {
    LOCK();
    plVar1 = (long *)(local_a8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_a8 = 0;
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
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Vector3::operator Vector3i() const */

undefined1  [16] __thiscall Vector3::operator_cast_to_Vector3i(Vector3 *this)

{
  long in_FS_OFFSET;
  undefined1 auVar1 [16];
  
  auVar1._8_4_ = (int)*(float *)(this + 8);
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar1._4_4_ = (int)(float)((ulong)*(undefined8 *)this >> 0x20);
    auVar1._0_4_ = (int)(float)*(undefined8 *)this;
    auVar1._12_4_ = 0;
    return auVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


