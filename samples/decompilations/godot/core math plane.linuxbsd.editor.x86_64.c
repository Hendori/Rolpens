
/* Plane::set_normal(Vector3 const&) */

void __thiscall Plane::set_normal(Plane *this,Vector3 *param_1)

{
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  return;
}



/* Plane::normalize() */

void __thiscall Plane::normalize(Plane *this)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  auVar3._8_8_ = 0;
  auVar3._0_8_ = *(ulong *)this;
  fVar1 = *(float *)(this + 8);
  fVar2 = (float)(*(ulong *)this >> 0x20);
  fVar2 = SQRT(*(float *)this * *(float *)this + fVar2 * fVar2 + fVar1 * fVar1);
  if (fVar2 != 0.0) {
    auVar4._4_4_ = fVar2;
    auVar4._0_4_ = fVar2;
    auVar4._8_8_ = _LC1;
    auVar3 = divps(auVar3,auVar4);
    *(float *)(this + 8) = fVar1 / fVar2;
    *(long *)this = auVar3._0_8_;
    *(float *)(this + 0xc) = *(float *)(this + 0xc) / fVar2;
    return;
  }
  *(undefined8 *)this = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  return;
}



/* Plane::normalized() const */

undefined1  [16] __thiscall Plane::normalized(Plane *this)

{
  long in_FS_OFFSET;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  float fVar3;
  
  fVar3 = SUB164(*(undefined1 (*) [16])this,0);
  auVar1._0_4_ = SQRT(fVar3 * fVar3 + *(float *)(this + 4) * *(float *)(this + 4) +
                      *(float *)(this + 8) * *(float *)(this + 8));
  auVar2 = (undefined1  [16])0x0;
  if (auVar1._0_4_ != 0.0) {
    auVar1._4_4_ = auVar1._0_4_;
    auVar1._8_4_ = auVar1._0_4_;
    auVar1._12_4_ = auVar1._0_4_;
    auVar2 = divps(*(undefined1 (*) [16])this,auVar1);
  }
  if (*(long *)(in_FS_OFFSET + 0x28) != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return auVar2;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Plane::get_any_perpendicular_normal() const */

undefined1  [16] __thiscall Plane::get_any_perpendicular_normal(Plane *this)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  float fVar9;
  undefined1 auVar8 [16];
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if ((get_any_perpendicular_normal()::p1 == '\0') &&
     (iVar2 = __cxa_guard_acquire(&get_any_perpendicular_normal()::p1), iVar2 != 0)) {
    ram0x00100dd8 = 0x3f800000;
    DAT_00100de0 = 0.0;
    __cxa_guard_release(&get_any_perpendicular_normal()::p1);
  }
  if ((get_any_perpendicular_normal()::p2 == '\0') &&
     (iVar2 = __cxa_guard_acquire(&get_any_perpendicular_normal()::p2), iVar2 != 0)) {
    DAT_00100dc8 = 0.0;
    get_any_perpendicular_normal()::p2 = _LC3;
    __cxa_guard_release(&get_any_perpendicular_normal()::p2);
  }
  fVar11 = (float)((ulong)*(undefined8 *)this >> 0x20);
  fVar5 = *(float *)(this + 8);
  fVar4 = DAT_00100dd6._2_4_ * *(float *)this + DAT_00100dd6_6 * fVar11 + fVar5 * DAT_00100de0;
  fVar10 = DAT_00100de0;
  fVar6 = DAT_00100dd6._2_4_;
  fVar9 = DAT_00100dd6_6;
  if (__LC5 < (float)(((uint)fVar4 ^ _LC4) & -(uint)(fVar4 < 0.0) |
                     ~-(uint)(fVar4 < 0.0) & (uint)fVar4)) {
    fVar4 = (float)get_any_perpendicular_normal()::p2 * *(float *)this +
            get_any_perpendicular_normal()::p2._4_4_ * fVar11 + DAT_00100dc8 * fVar5;
    fVar10 = DAT_00100dc8;
    fVar6 = (float)get_any_perpendicular_normal()::p2;
    fVar9 = get_any_perpendicular_normal()::p2._4_4_;
  }
  fVar10 = fVar10 - fVar5 * fVar4;
  auVar8._0_4_ = fVar6 - fVar4 * (float)*(undefined8 *)this;
  auVar8._4_4_ = fVar9 - fVar4 * fVar11;
  auVar8._8_8_ = 0;
  fVar5 = auVar8._0_4_ * auVar8._0_4_ + auVar8._4_4_ * auVar8._4_4_ + fVar10 * fVar10;
  fVar6 = 0.0;
  uVar3 = 0;
  if (fVar5 != 0.0) {
    fVar5 = SQRT(fVar5);
    auVar7._4_4_ = fVar5;
    auVar7._0_4_ = fVar5;
    auVar7._8_8_ = _LC1;
    auVar8 = divps(auVar8,auVar7);
    fVar6 = fVar10 / fVar5;
    uVar3 = auVar8._0_8_;
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar12._8_4_ = fVar6;
    auVar12._0_8_ = uVar3;
    auVar12._12_4_ = 0;
    return auVar12;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Plane::intersect_3(Plane const&, Plane const&, Vector3*) const */

undefined8 __thiscall Plane::intersect_3(Plane *this,Plane *param_1,Plane *param_2,Vector3 *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar10;
  undefined1 auVar9 [16];
  float fVar11;
  float fVar12;
  float fVar14;
  undefined1 auVar13 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  fVar1 = *(float *)param_1;
  fVar2 = *(float *)this;
  uVar7 = 0;
  fVar8 = (float)*(undefined8 *)(param_1 + 4);
  fVar10 = (float)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20);
  fVar17 = (float)*(undefined8 *)(this + 4);
  fVar12 = (float)*(undefined8 *)(param_2 + 4);
  fVar18 = (float)((ulong)*(undefined8 *)(this + 4) >> 0x20);
  fVar15 = *(float *)(param_1 + 8) * fVar17 - fVar8 * *(float *)(this + 8);
  fVar16 = fVar1 * fVar18 - fVar10 * fVar2;
  fVar3 = *(float *)param_2;
  fVar11 = fVar2 * fVar8 - fVar1 * fVar17;
  fVar14 = (float)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20);
  fVar19 = fVar15 * fVar3 + fVar16 * fVar12 + fVar14 * fVar11;
  if (_LC6 <= ABS(fVar19)) {
    if (param_3 != (Vector3 *)0x0) {
      fVar4 = *(float *)(param_2 + 0xc);
      fVar5 = *(float *)(param_1 + 0xc);
      fVar6 = *(float *)(this + 0xc);
      auVar9._0_4_ = (fVar8 * fVar14 - *(float *)(param_1 + 8) * fVar12) * fVar6 +
                     (fVar12 * *(float *)(this + 8) - fVar17 * fVar14) * fVar5 + fVar4 * fVar15;
      auVar9._4_4_ = (fVar10 * fVar3 - fVar1 * fVar14) * fVar6 +
                     (fVar14 * fVar2 - fVar18 * fVar3) * fVar5 + fVar4 * fVar16;
      auVar9._8_8_ = 0;
      auVar13._4_4_ = fVar19;
      auVar13._0_4_ = fVar19;
      auVar13._8_8_ = _LC1;
      auVar9 = divps(auVar9,auVar13);
      *(float *)(param_3 + 8) =
           ((fVar1 * fVar12 - fVar8 * fVar3) * fVar6 + (fVar3 * fVar17 - fVar2 * fVar12) * fVar5 +
           fVar4 * fVar11) / fVar19;
      *(long *)param_3 = auVar9._0_8_;
    }
    uVar7 = 1;
  }
  return uVar7;
}



/* Plane::intersects_ray(Vector3 const&, Vector3 const&, Vector3*) const */

undefined8 __thiscall
Plane::intersects_ray(Plane *this,Vector3 *param_1,Vector3 *param_2,Vector3 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar4 = (float)*(undefined8 *)param_2;
  fVar5 = (float)((ulong)*(undefined8 *)param_2 >> 0x20);
  uVar2 = 0;
  fVar3 = fVar4 * *(float *)this + fVar5 * *(float *)(this + 4) +
          *(float *)(this + 8) * *(float *)(param_2 + 8);
  if (_LC6 <= ABS(fVar3)) {
    uVar1 = *(undefined8 *)param_1;
    fVar6 = (float)((ulong)uVar1 >> 0x20);
    fVar3 = ((*(float *)this * *(float *)param_1 + fVar6 * *(float *)(this + 4) +
             *(float *)(this + 8) * *(float *)(param_1 + 8)) - *(float *)(this + 0xc)) / fVar3;
    if (fVar3 <= _LC6) {
      fVar3 = (float)((uint)fVar3 ^ _LC4);
      uVar2 = 1;
      *(float *)(param_3 + 8) = fVar3 * *(float *)(param_2 + 8) + *(float *)(param_1 + 8);
      *(ulong *)param_3 = CONCAT44(fVar3 * fVar5 + fVar6,fVar3 * fVar4 + (float)uVar1);
    }
  }
  return uVar2;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Plane::intersects_segment(Vector3 const&, Vector3 const&, Vector3*) const */

undefined8 __thiscall
Plane::intersects_segment(Plane *this,Vector3 *param_1,Vector3 *param_2,Vector3 *param_3)

{
  float fVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar4 = (float)*(undefined8 *)param_1;
  fVar5 = (float)((ulong)*(undefined8 *)param_1 >> 0x20);
  fVar1 = *(float *)(param_1 + 8);
  fVar6 = fVar4 - (float)*(undefined8 *)param_2;
  fVar7 = fVar5 - (float)((ulong)*(undefined8 *)param_2 >> 0x20);
  uVar2 = 0;
  fVar3 = fVar6 * *(float *)this + fVar7 * *(float *)(this + 4) +
          *(float *)(this + 8) * (fVar1 - *(float *)(param_2 + 8));
  if (((_LC6 <= ABS(fVar3)) &&
      (fVar3 = ((fVar4 * *(float *)this + *(float *)(this + 4) * fVar5 +
                *(float *)(this + 8) * fVar1) - *(float *)(this + 0xc)) / fVar3, _LC7 <= fVar3)) &&
     (fVar3 <= __LC8)) {
    fVar3 = (float)((uint)fVar3 ^ _LC4);
    uVar2 = 1;
    *(float *)(param_3 + 8) = fVar3 * (fVar1 - *(float *)(param_2 + 8)) + fVar1;
    *(ulong *)param_3 = CONCAT44(fVar3 * fVar7 + fVar5,fVar3 * fVar6 + fVar4);
  }
  return uVar2;
}



/* Plane::intersect_3_bind(Plane const&, Plane const&) const */

Plane * Plane::intersect_3_bind(Plane *param_1,Plane *param_2)

{
  char cVar1;
  Plane *in_RCX;
  Plane *in_RDX;
  Vector3 *pVVar2;
  long in_FS_OFFSET;
  undefined8 local_1c;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  pVVar2 = (Vector3 *)&local_1c;
  local_14 = 0;
  local_1c = 0;
  cVar1 = intersect_3(param_2,in_RDX,in_RCX,pVVar2);
  if (cVar1 == '\0') {
    *(undefined4 *)param_1 = 0;
    *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  }
  else {
    Variant::Variant((Variant *)param_1,pVVar2);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Plane::intersects_ray_bind(Vector3 const&, Vector3 const&) const */

Vector3 * Plane::intersects_ray_bind(Vector3 *param_1,Vector3 *param_2)

{
  undefined8 *in_RCX;
  float *in_RDX;
  long in_FS_OFFSET;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 local_20;
  float local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0;
  fVar2 = (float)*in_RCX;
  fVar3 = (float)((ulong)*in_RCX >> 0x20);
  local_18 = 0.0;
  fVar1 = fVar2 * *(float *)param_2 + fVar3 * *(float *)(param_2 + 4) +
          *(float *)(in_RCX + 1) * *(float *)(param_2 + 8);
  if (_LC6 <= ABS(fVar1)) {
    fVar4 = (float)((ulong)*(undefined8 *)in_RDX >> 0x20);
    fVar1 = ((*(float *)param_2 * *in_RDX + fVar4 * *(float *)(param_2 + 4) +
             *(float *)(param_2 + 8) * in_RDX[2]) - *(float *)(param_2 + 0xc)) / fVar1;
    if (fVar1 <= _LC6) {
      fVar1 = (float)((uint)fVar1 ^ _LC4);
      local_18 = *(float *)(in_RCX + 1) * fVar1 + in_RDX[2];
      local_20 = CONCAT44(fVar1 * fVar3 + fVar4,fVar1 * fVar2 + (float)*(undefined8 *)in_RDX);
      Variant::Variant((Variant *)param_1,(Vector3 *)&local_20);
      goto LAB_0010088e;
    }
  }
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_0010088e:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Plane::intersects_segment_bind(Vector3 const&, Vector3 const&) const */

Vector3 * Plane::intersects_segment_bind(Vector3 *param_1,Vector3 *param_2)

{
  char cVar1;
  Vector3 *in_RCX;
  Vector3 *in_RDX;
  Vector3 *pVVar2;
  long in_FS_OFFSET;
  undefined8 local_1c;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  pVVar2 = (Vector3 *)&local_1c;
  local_14 = 0;
  local_1c = 0;
  cVar1 = intersects_segment((Plane *)param_2,in_RDX,in_RCX,pVVar2);
  if (cVar1 == '\0') {
    *(undefined4 *)param_1 = 0;
    *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  }
  else {
    Variant::Variant((Variant *)param_1,pVVar2);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Plane::is_equal_approx_any_side(Plane const&) const */

ulong __thiscall Plane::is_equal_approx_any_side(Plane *this,Plane *param_1)

{
  float fVar1;
  long lVar2;
  char cVar3;
  float fVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  float fVar6;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  cVar3 = Vector3::is_equal_approx((Vector3 *)this);
  if (cVar3 == '\0') {
LAB_001009d0:
    uVar5 = Vector3::is_equal_approx((Vector3 *)this);
    if ((char)uVar5 == '\0') goto LAB_001009b2;
    fVar1 = *(float *)(this + 0xc);
    if ((float)(_LC4 ^ (uint)*(float *)(param_1 + 0xc)) != fVar1) {
      fVar4 = ABS(*(float *)(param_1 + 0xc) + fVar1);
      fVar6 = _LC6;
      if (_LC6 <= ABS(fVar1) * _LC6) {
        fVar6 = ABS(fVar1) * _LC6;
      }
      uVar5 = (ulong)CONCAT31((int3)((uint)fVar4 >> 8),fVar4 < fVar6);
      goto LAB_001009b2;
    }
  }
  else {
    fVar1 = *(float *)(this + 0xc);
    if (*(float *)(param_1 + 0xc) != fVar1) {
      fVar6 = _LC6;
      if (_LC6 <= ABS(fVar1) * _LC6) {
        fVar6 = ABS(fVar1) * _LC6;
      }
      if (fVar6 <= ABS(fVar1 - *(float *)(param_1 + 0xc))) goto LAB_001009d0;
    }
  }
  uVar5 = 1;
LAB_001009b2:
  if (lVar2 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}



/* Plane::is_equal_approx(Plane const&) const */

ulong __thiscall Plane::is_equal_approx(Plane *this,Plane *param_1)

{
  float fVar1;
  float fVar2;
  ulong uVar3;
  float fVar4;
  
  uVar3 = Vector3::is_equal_approx((Vector3 *)this);
  if ((char)uVar3 != '\0') {
    fVar1 = *(float *)(this + 0xc);
    if (*(float *)(param_1 + 0xc) != fVar1) {
      fVar2 = ABS(fVar1 - *(float *)(param_1 + 0xc));
      fVar4 = _LC6;
      if (_LC6 <= ABS(fVar1) * _LC6) {
        fVar4 = ABS(fVar1) * _LC6;
      }
      uVar3 = (ulong)CONCAT31((int3)((uint)fVar2 >> 8),fVar2 < fVar4);
    }
  }
  return uVar3;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Plane::is_finite() const */

char __thiscall Plane::is_finite(Plane *this)

{
  char cVar1;
  
  cVar1 = Vector3::is_finite();
  if (cVar1 != '\0') {
    cVar1 = (float)(*(uint *)(this + 0xc) & __LC11) <= _LC12;
  }
  return cVar1;
}



/* Plane::operator String() const */

Plane * __thiscall Plane::operator_cast_to_String(Plane *this)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long in_RSI;
  long in_FS_OFFSET;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = 0;
  local_50 = 1;
  local_58 = "]";
  String::parse_latin1((StrRange *)&local_60);
  String::num_real(*(float *)(in_RSI + 0xc),SUB81(&local_68,0));
  local_78 = 0;
  local_58 = ", D: ";
  local_50 = 5;
  String::parse_latin1((StrRange *)&local_78);
  Vector3::operator_cast_to_String((Vector3 *)&local_88);
  operator+((char *)&local_80,&_LC15);
  String::operator+((String *)&local_70,(String *)&local_80);
  String::operator+((String *)&local_58,(String *)&local_70);
  String::operator+((String *)this,(String *)&local_58);
  pcVar3 = local_58;
  if (local_58 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = (char *)0x0;
      Memory::free_static(pcVar3 + -0x10,false);
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


