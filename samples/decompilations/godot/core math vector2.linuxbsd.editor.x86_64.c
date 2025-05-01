
/* Vector2::angle() const */

void __thiscall Vector2::angle(Vector2 *this)

{
  atan2f(*(float *)(this + 4),*(float *)this);
  return;
}



/* Vector2::from_angle(float) */

undefined8 Vector2::from_angle(float param_1)

{
  undefined8 local_10;
  
  sincosf(param_1,(float *)((long)&local_10 + 4),(float *)&local_10);
  return local_10;
}



/* Vector2::length() const */

float __thiscall Vector2::length(Vector2 *this)

{
  return SQRT(*(float *)this * *(float *)this + *(float *)(this + 4) * *(float *)(this + 4));
}



/* Vector2::length_squared() const */

float __thiscall Vector2::length_squared(Vector2 *this)

{
  return *(float *)this * *(float *)this + *(float *)(this + 4) * *(float *)(this + 4);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Vector2::normalize() */

void __thiscall Vector2::normalize(Vector2 *this)

{
  undefined1 auVar1 [16];
  float fVar2;
  undefined1 auVar3 [16];
  
  auVar3._8_8_ = 0;
  auVar3._0_8_ = *(ulong *)this;
  fVar2 = (float)(*(ulong *)this >> 0x20);
  fVar2 = *(float *)this * *(float *)this + fVar2 * fVar2;
  if (fVar2 != 0.0) {
    fVar2 = SQRT(fVar2);
    auVar1._4_4_ = fVar2;
    auVar1._0_4_ = fVar2;
    auVar1._8_4_ = (int)__LC2;
    auVar1._12_4_ = (int)((ulong)__LC2 >> 0x20);
    auVar3 = divps(auVar3,auVar1);
    *(long *)this = auVar3._0_8_;
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Vector2::normalized() const */

ulong __thiscall Vector2::normalized(Vector2 *this)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float fVar4;
  
  uVar1 = *(ulong *)this;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar1;
  fVar4 = (float)(uVar1 >> 0x20);
  fVar4 = (float)uVar1 * (float)uVar1 + fVar4 * fVar4;
  if (fVar4 != 0.0) {
    fVar4 = SQRT(fVar4);
    auVar2._4_4_ = fVar4;
    auVar2._0_4_ = fVar4;
    auVar2._8_4_ = (int)__LC2;
    auVar2._12_4_ = (int)((ulong)__LC2 >> 0x20);
    auVar3 = divps(auVar3,auVar2);
    return auVar3._0_8_;
  }
  return uVar1;
}



/* Vector2::is_normalized() const */

undefined4 __thiscall Vector2::is_normalized(Vector2 *this)

{
  undefined4 uVar1;
  float fVar2;
  
  fVar2 = *(float *)this * *(float *)this + *(float *)(this + 4) * *(float *)(this + 4);
  uVar1 = 1;
  if (fVar2 != _LC2) {
    fVar2 = ABS(fVar2 - _LC2);
    uVar1 = CONCAT31((int3)((uint)fVar2 >> 8),fVar2 < _LC3);
  }
  return uVar1;
}



/* Vector2::distance_to(Vector2 const&) const */

float __thiscall Vector2::distance_to(Vector2 *this,Vector2 *param_1)

{
  return SQRT((*(float *)this - *(float *)param_1) * (*(float *)this - *(float *)param_1) +
              (*(float *)(this + 4) - *(float *)(param_1 + 4)) *
              (*(float *)(this + 4) - *(float *)(param_1 + 4)));
}



/* Vector2::distance_squared_to(Vector2 const&) const */

float __thiscall Vector2::distance_squared_to(Vector2 *this,Vector2 *param_1)

{
  return (*(float *)this - *(float *)param_1) * (*(float *)this - *(float *)param_1) +
         (*(float *)(this + 4) - *(float *)(param_1 + 4)) *
         (*(float *)(this + 4) - *(float *)(param_1 + 4));
}



/* Vector2::angle_to(Vector2 const&) const */

void __thiscall Vector2::angle_to(Vector2 *this,Vector2 *param_1)

{
  atan2f(*(float *)this * *(float *)(param_1 + 4) - *(float *)param_1 * *(float *)(this + 4),
         *(float *)(this + 4) * *(float *)(param_1 + 4) + *(float *)this * *(float *)param_1);
  return;
}



/* Vector2::angle_to_point(Vector2 const&) const */

void __thiscall Vector2::angle_to_point(Vector2 *this,Vector2 *param_1)

{
  atan2f(*(float *)(param_1 + 4) - *(float *)(this + 4),*(float *)param_1 - *(float *)this);
  return;
}



/* Vector2::dot(Vector2 const&) const */

float __thiscall Vector2::dot(Vector2 *this,Vector2 *param_1)

{
  return *(float *)this * *(float *)param_1 + *(float *)(this + 4) * *(float *)(param_1 + 4);
}



/* Vector2::cross(Vector2 const&) const */

float __thiscall Vector2::cross(Vector2 *this,Vector2 *param_1)

{
  return *(float *)this * *(float *)(param_1 + 4) - *(float *)(this + 4) * *(float *)param_1;
}



/* Vector2::sign() const */

undefined8 __thiscall Vector2::sign(Vector2 *this)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = _LC2;
  if (*(float *)(this + 4) <= 0.0) {
    uVar2 = _LC4 & -(uint)(*(float *)(this + 4) < 0.0);
  }
  uVar1 = _LC2;
  if (*(float *)this <= 0.0) {
    uVar1 = _LC4 & -(uint)(*(float *)this < 0.0);
  }
  return CONCAT44(uVar2,uVar1);
}



/* Vector2::floor() const */

void Vector2::floor(void)

{
  return;
}



/* Vector2::ceil() const */

void Vector2::ceil(void)

{
  return;
}



/* Vector2::round() const */

void __thiscall Vector2::round(Vector2 *this)

{
  roundf(*(float *)(this + 4));
  roundf(*(float *)this);
  return;
}



/* Vector2::rotated(float) const */

undefined8 __thiscall Vector2::rotated(Vector2 *this,float param_1)

{
  float fVar1;
  float fVar2;
  float local_10;
  float local_c;
  
  sincosf(param_1,&local_c,&local_10);
  fVar1 = (float)*(undefined8 *)this;
  fVar2 = (float)((ulong)*(undefined8 *)this >> 0x20);
  return CONCAT44(fVar1 * local_c + fVar2 * local_10,fVar1 * local_10 - fVar2 * local_c);
}



/* Vector2::posmod(float) const */

void __thiscall Vector2::posmod(Vector2 *this,float param_1)

{
  float fVar1;
  ushort in_FPUStatusWord;
  float fVar2;
  float local_28;
  
  fVar1 = *(float *)(this + 4);
  do {
    fVar1 = fVar1 - (fVar1 / param_1) * param_1;
  } while ((in_FPUStatusWord & 0x400) != 0);
  if (NAN(fVar1)) {
    fmodf(*(float *)(this + 4),param_1);
    local_28 = *(float *)this;
    fVar2 = local_28;
  }
  else {
    local_28 = *(float *)this;
    fVar2 = local_28;
    if ((fVar1 < 0.0) && (param_1 <= 0.0)) {
      do {
        fVar2 = fVar2 - (fVar2 / param_1) * param_1;
      } while ((in_FPUStatusWord & 0x400) != 0);
      if (NAN(fVar2)) goto LAB_00100632;
      if (fVar2 < 0.0) {
        return;
      }
      goto LAB_0010055b;
    }
  }
  do {
    fVar2 = fVar2 - (fVar2 / param_1) * param_1;
  } while ((in_FPUStatusWord & 0x400) != 0);
  if (NAN(fVar2)) {
LAB_00100632:
    fmodf(local_28,param_1);
    return;
  }
  if (fVar2 < 0.0) {
    if (param_1 <= 0.0) {
      return;
    }
    return;
  }
LAB_0010055b:
  if ((0.0 < fVar2) && (param_1 < 0.0)) {
    return;
  }
  return;
}



/* Vector2::posmodv(Vector2 const&) const */

void __thiscall Vector2::posmodv(Vector2 *this,Vector2 *param_1)

{
  float fVar1;
  float fVar2;
  ushort in_FPUStatusWord;
  
  fVar1 = *(float *)(param_1 + 4);
  fVar2 = *(float *)(this + 4);
  do {
    fVar2 = fVar2 - (fVar2 / fVar1) * fVar1;
  } while ((in_FPUStatusWord & 0x400) != 0);
  if (NAN(fVar2)) {
    fmodf(*(float *)(this + 4),fVar1);
  }
  fVar1 = *(float *)param_1;
  fVar2 = *(float *)this;
  do {
    fVar2 = fVar2 - (fVar2 / fVar1) * fVar1;
  } while ((in_FPUStatusWord & 0x400) != 0);
  if (NAN(fVar2)) {
    fmodf(*(float *)this,fVar1);
  }
  else if (fVar2 < 0.0) {
    if (0.0 < fVar1) {
      return;
    }
  }
  else if ((0.0 < fVar2) && (fVar1 < 0.0)) {
    return;
  }
  return;
}



/* Vector2::project(Vector2 const&) const */

undefined8 __thiscall Vector2::project(Vector2 *this,Vector2 *param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)param_1;
  fVar2 = (float)((ulong)*(undefined8 *)param_1 >> 0x20);
  fVar1 = (*(float *)this * fVar1 + *(float *)(this + 4) * fVar2) / (fVar1 * fVar1 + fVar2 * fVar2);
  return CONCAT44(fVar1 * fVar2,fVar1 * (float)*(undefined8 *)param_1);
}



/* Vector2::clamp(Vector2 const&, Vector2 const&) const */

undefined8 __thiscall Vector2::clamp(Vector2 *this,Vector2 *param_1,Vector2 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *(float *)(this + 4);
  fVar3 = *(float *)(param_1 + 4);
  if ((*(float *)(param_1 + 4) <= fVar1) &&
     (fVar3 = *(float *)(param_2 + 4), fVar1 <= *(float *)(param_2 + 4))) {
    fVar3 = fVar1;
  }
  fVar1 = *(float *)this;
  fVar2 = *(float *)param_1;
  if ((*(float *)param_1 <= fVar1) && (fVar2 = *(float *)param_2, fVar1 <= *(float *)param_2)) {
    fVar2 = fVar1;
  }
  return CONCAT44(fVar3,fVar2);
}



/* Vector2::clampf(float, float) const */

undefined8 __thiscall Vector2::clampf(Vector2 *this,float param_1,float param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)(this + 4);
  fVar2 = param_1;
  if ((param_1 <= fVar1) && (fVar2 = param_2, fVar1 <= param_2)) {
    fVar2 = fVar1;
  }
  fVar1 = *(float *)this;
  if ((param_1 <= fVar1) && (param_1 = param_2, fVar1 <= param_2)) {
    param_1 = fVar1;
  }
  return CONCAT44(fVar2,param_1);
}



/* Vector2::snapped(Vector2 const&) const */

void __thiscall Vector2::snapped(Vector2 *this,Vector2 *param_1)

{
  Math::snapped((double)*(float *)(this + 4),(double)*(float *)(param_1 + 4));
  Math::snapped((double)*(float *)this,(double)*(float *)param_1);
  return;
}



/* Vector2::snappedf(float) const */

void __thiscall Vector2::snappedf(Vector2 *this,float param_1)

{
  Math::snapped((double)*(float *)(this + 4),(double)param_1);
  Math::snapped((double)*(float *)this,(double)param_1);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Vector2::limit_length(float) const */

void __thiscall Vector2::limit_length(Vector2 *this,float param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  float fVar3;
  
  auVar2._8_8_ = 0;
  auVar2._0_8_ = *(ulong *)this;
  fVar3 = (float)(*(ulong *)this >> 0x20);
  fVar3 = SQRT(*(float *)this * *(float *)this + fVar3 * fVar3);
  if ((0.0 < fVar3) && (param_1 < fVar3)) {
    auVar1._4_4_ = fVar3;
    auVar1._0_4_ = fVar3;
    auVar1._8_4_ = (int)__LC2;
    auVar1._12_4_ = (int)((ulong)__LC2 >> 0x20);
    divps(auVar2,auVar1);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Vector2::move_toward(Vector2 const&, float) const */

undefined8 __thiscall Vector2::move_toward(Vector2 *this,Vector2 *param_1,float param_2)

{
  undefined1 auVar1 [16];
  float fVar2;
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  
  fVar4 = (float)*(undefined8 *)this;
  auVar3._0_4_ = (float)*(undefined8 *)param_1 - fVar4;
  fVar5 = (float)((ulong)*(undefined8 *)this >> 0x20);
  auVar3._4_4_ = (float)((ulong)*(undefined8 *)param_1 >> 0x20) - fVar5;
  auVar3._8_8_ = 0;
  fVar2 = SQRT(auVar3._0_4_ * auVar3._0_4_ + auVar3._4_4_ * auVar3._4_4_);
  if ((param_2 < fVar2) && (_LC9 <= fVar2)) {
    auVar1._4_4_ = fVar2;
    auVar1._0_4_ = fVar2;
    auVar1._8_4_ = (int)__LC2;
    auVar1._12_4_ = (int)((ulong)__LC2 >> 0x20);
    auVar3 = divps(auVar3,auVar1);
    return CONCAT44(param_2 * auVar3._4_4_ + fVar5,param_2 * auVar3._0_4_ + fVar4);
  }
  return *(undefined8 *)param_1;
}



/* Vector2::is_equal_approx(Vector2 const&) const */

undefined4 __thiscall Vector2::is_equal_approx(Vector2 *this,Vector2 *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *(float *)this;
  if (*(float *)param_1 != fVar1) {
    fVar3 = _LC9;
    if (_LC9 <= ABS(fVar1) * _LC9) {
      fVar3 = ABS(fVar1) * _LC9;
    }
    if (fVar3 <= ABS(fVar1 - *(float *)param_1)) {
      return 0;
    }
  }
  fVar1 = *(float *)(this + 4);
  if (*(float *)(param_1 + 4) == fVar1) {
    return 1;
  }
  fVar2 = ABS(fVar1 - *(float *)(param_1 + 4));
  fVar3 = _LC9;
  if (_LC9 <= ABS(fVar1) * _LC9) {
    fVar3 = ABS(fVar1) * _LC9;
  }
  return CONCAT31((int3)((uint)fVar2 >> 8),fVar2 < fVar3);
}



/* Vector2::is_zero_approx() const */

undefined4 __thiscall Vector2::is_zero_approx(Vector2 *this)

{
  if (ABS(*(float *)this) < _LC9) {
    return CONCAT31((int3)((uint)ABS(*(float *)(this + 4)) >> 8),ABS(*(float *)(this + 4)) < _LC9);
  }
  return 0;
}



/* Vector2::is_finite() const */

bool __thiscall Vector2::is_finite(Vector2 *this)

{
  bool bVar1;
  
  bVar1 = false;
  if ((float)(*(uint *)this & _LC6) <= _LC10) {
    bVar1 = (float)(*(uint *)(this + 4) & _LC6) <= _LC10;
  }
  return bVar1;
}



/* Vector2::operator String() const */

Vector2 * __thiscall Vector2::operator_cast_to_String(Vector2 *this)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  float *in_RSI;
  long in_FS_OFFSET;
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
  local_50 = 1;
  local_58 = &_LC11;
  String::parse_latin1((StrRange *)&local_60);
  String::num_real(in_RSI[1],SUB81(&local_68,0));
  local_78 = 0;
  local_58 = &_LC12;
  local_50 = 2;
  String::parse_latin1((StrRange *)&local_78);
  String::num_real(*in_RSI,SUB81(&local_88,0));
  operator+((char *)&local_80,&_LC13);
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



/* Vector2::slide(Vector2 const&) const */

void __thiscall Vector2::slide(Vector2 *this,Vector2 *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long in_FS_OFFSET;
  float fVar4;
  long local_60;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  fVar4 = (float)((ulong)*(undefined8 *)param_1 >> 0x20);
  fVar4 = *(float *)param_1 * *(float *)param_1 + fVar4 * fVar4;
  if ((fVar4 != _LC2) && (_LC3 <= ABS(fVar4 - _LC2))) {
    local_50 = 0;
    local_48 = "must be normalized.";
    local_40 = 0x13;
    String::parse_latin1((StrRange *)&local_50);
    operator_cast_to_String((Vector2 *)&local_60);
    operator+((char *)&local_58,"The normal Vector2 ");
    String::operator+((String *)&local_48,(String *)&local_58);
    _err_print_error("slide","core/math/vector2.cpp",0xb1,
                     "Condition \"!p_normal.is_normalized()\" is true. Returning: Vector2()",
                     (String *)&local_48,0,0);
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
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Vector2::reflect(Vector2 const&) const */

void __thiscall Vector2::reflect(Vector2 *this,Vector2 *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long in_FS_OFFSET;
  float fVar4;
  long local_60;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  fVar4 = (float)((ulong)*(undefined8 *)param_1 >> 0x20);
  fVar4 = *(float *)param_1 * *(float *)param_1 + fVar4 * fVar4;
  if ((fVar4 != _LC2) && (_LC3 <= ABS(fVar4 - _LC2))) {
    local_50 = 0;
    local_48 = "must be normalized.";
    local_40 = 0x13;
    String::parse_latin1((StrRange *)&local_50);
    operator_cast_to_String((Vector2 *)&local_60);
    operator+((char *)&local_58,"The normal Vector2 ");
    String::operator+((String *)&local_48,(String *)&local_58);
    _err_print_error("reflect","core/math/vector2.cpp",0xbc,
                     "Condition \"!p_normal.is_normalized()\" is true. Returning: Vector2()",
                     (String *)&local_48,0,0);
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
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Vector2::bounce(Vector2 const&) const */

undefined8 __thiscall Vector2::bounce(Vector2 *this,Vector2 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = reflect(this,param_1);
  return CONCAT44((uint)((ulong)uVar1 >> 0x20) ^ _LC20._4_4_,(uint)uVar1 ^ (uint)_LC20);
}



/* Vector2::operator Vector2i() const */

undefined8 __thiscall Vector2::operator_cast_to_Vector2i(Vector2 *this)

{
  return CONCAT44((int)(float)((ulong)*(undefined8 *)this >> 0x20),(int)(float)*(undefined8 *)this);
}


