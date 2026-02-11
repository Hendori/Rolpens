
/* Quaternion::angle_to(Quaternion const&) const */

undefined8 __thiscall Quaternion::angle_to(Quaternion *this,Quaternion *param_1)

{
  float fVar1;
  undefined1 auVar2 [16];
  undefined1 extraout_var [12];
  
  fVar1 = *(float *)this * *(float *)param_1 + *(float *)(this + 4) * *(float *)(param_1 + 4) +
          *(float *)(this + 8) * *(float *)(param_1 + 8) +
          *(float *)(this + 0xc) * *(float *)(param_1 + 0xc);
  fVar1 = fVar1 * fVar1;
  fVar1 = (fVar1 + fVar1) - _LC1;
  if (_LC1 < fVar1) {
    return 0;
  }
  auVar2._0_4_ = acosf(fVar1);
  auVar2._4_12_ = extraout_var;
  return auVar2._0_8_;
}



/* Quaternion::TEMPNAMEPLACEHOLDERVALUE(Quaternion const&) */

void __thiscall Quaternion::operator*=(Quaternion *this,Quaternion *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = *(float *)this;
  fVar2 = *(float *)(this + 4);
  fVar3 = *(float *)(this + 8);
  fVar4 = *(float *)(this + 0xc);
  fVar5 = *(float *)param_1;
  fVar6 = *(float *)(param_1 + 4);
  fVar7 = *(float *)(param_1 + 8);
  fVar8 = *(float *)(param_1 + 0xc);
  *(float *)this = (fVar4 * fVar5 + fVar1 * fVar8 + fVar2 * fVar7) - fVar3 * fVar6;
  *(float *)(this + 4) = (fVar4 * fVar6 + fVar2 * fVar8 + fVar3 * fVar5) - fVar1 * fVar7;
  *(float *)(this + 8) = (fVar4 * fVar7 + fVar3 * fVar8 + fVar1 * fVar6) - fVar2 * fVar5;
  *(float *)(this + 0xc) = ((fVar4 * fVar8 - fVar1 * fVar5) - fVar2 * fVar6) - fVar3 * fVar7;
  return;
}



/* Quaternion::TEMPNAMEPLACEHOLDERVALUE(Quaternion const&) const */

void __thiscall Quaternion::operator*(Quaternion *this,Quaternion *param_1)

{
  undefined8 uVar1;
  Quaternion *in_RDX;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)(this + 8) = uVar1;
  operator*=(this,in_RDX);
  return;
}



/* Quaternion::is_equal_approx(Quaternion const&) const */

undefined4 __thiscall Quaternion::is_equal_approx(Quaternion *this,Quaternion *param_1)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  
  fVar1 = *(float *)this;
  if (*(float *)param_1 == fVar1) {
LAB_0010014f:
    fVar1 = *(float *)(this + 4);
    if (*(float *)(param_1 + 4) != fVar1) {
      fVar4 = _LC2;
      if (_LC2 <= ABS(fVar1) * _LC2) {
        fVar4 = ABS(fVar1) * _LC2;
      }
      if (fVar4 <= ABS(fVar1 - *(float *)(param_1 + 4))) goto LAB_00100230;
    }
    fVar1 = *(float *)(this + 8);
    if (*(float *)(param_1 + 8) != fVar1) {
      fVar4 = _LC2;
      if (_LC2 <= ABS(fVar1) * _LC2) {
        fVar4 = ABS(fVar1) * _LC2;
      }
      if (fVar4 <= ABS(fVar1 - *(float *)(param_1 + 8))) goto LAB_00100230;
    }
    fVar1 = *(float *)(this + 0xc);
    uVar3 = 1;
    if (*(float *)(param_1 + 0xc) != fVar1) {
      fVar2 = ABS(fVar1 - *(float *)(param_1 + 0xc));
      fVar4 = _LC2;
      if (_LC2 <= ABS(fVar1) * _LC2) {
        fVar4 = ABS(fVar1) * _LC2;
      }
      return CONCAT31((int3)((uint)fVar2 >> 8),fVar2 < fVar4);
    }
  }
  else {
    fVar4 = _LC2;
    if (_LC2 <= ABS(fVar1) * _LC2) {
      fVar4 = ABS(fVar1) * _LC2;
    }
    if (ABS(fVar1 - *(float *)param_1) < fVar4) goto LAB_0010014f;
LAB_00100230:
    uVar3 = 0;
  }
  return uVar3;
}



/* Quaternion::is_finite() const */

bool __thiscall Quaternion::is_finite(Quaternion *this)

{
  bool bVar1;
  
  bVar1 = false;
  if ((((float)(*(uint *)this & _LC3) <= _LC4) && ((float)(*(uint *)(this + 4) & _LC3) <= _LC4)) &&
     ((float)(*(uint *)(this + 8) & _LC3) <= _LC4)) {
    bVar1 = (float)(*(uint *)(this + 0xc) & _LC3) <= _LC4;
  }
  return bVar1;
}



/* Quaternion::length() const */

float __thiscall Quaternion::length(Quaternion *this)

{
  return SQRT(*(float *)(this + 0xc) * *(float *)(this + 0xc) +
              *(float *)this * *(float *)this + *(float *)(this + 4) * *(float *)(this + 4) +
              *(float *)(this + 8) * *(float *)(this + 8));
}



/* Quaternion::normalize() */

void __thiscall Quaternion::normalize(Quaternion *this)

{
  float fVar1;
  
  fVar1 = _LC1 / SQRT(*(float *)this * *(float *)this + *(float *)(this + 4) * *(float *)(this + 4)
                      + *(float *)(this + 8) * *(float *)(this + 8) +
                      *(float *)(this + 0xc) * *(float *)(this + 0xc));
  *(float *)this = fVar1 * *(float *)this;
  *(float *)(this + 4) = fVar1 * *(float *)(this + 4);
  *(float *)(this + 8) = fVar1 * *(float *)(this + 8);
  *(float *)(this + 0xc) = fVar1 * *(float *)(this + 0xc);
  return;
}



/* Quaternion::normalized() const */

void Quaternion::normalized(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *in_RSI;
  float *in_RDI;
  float fVar4;
  
  fVar1 = in_RSI[1];
  fVar2 = in_RSI[2];
  fVar3 = in_RSI[3];
  fVar4 = _LC1 / SQRT(*in_RSI * *in_RSI + in_RSI[1] * in_RSI[1] + in_RSI[2] * in_RSI[2] +
                      in_RSI[3] * in_RSI[3]);
  *in_RDI = fVar4 * *in_RSI;
  in_RDI[1] = fVar4 * fVar1;
  in_RDI[2] = fVar4 * fVar2;
  in_RDI[3] = fVar4 * fVar3;
  return;
}



/* Quaternion::is_normalized() const */

undefined4 __thiscall Quaternion::is_normalized(Quaternion *this)

{
  undefined4 uVar1;
  float fVar2;
  
  fVar2 = *(float *)this * *(float *)this + *(float *)(this + 4) * *(float *)(this + 4) +
          *(float *)(this + 8) * *(float *)(this + 8) +
          *(float *)(this + 0xc) * *(float *)(this + 0xc);
  uVar1 = 1;
  if (fVar2 != _LC1) {
    fVar2 = ABS(fVar2 - _LC1);
    uVar1 = CONCAT31((int3)((uint)fVar2 >> 8),fVar2 < _LC5);
  }
  return uVar1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Quaternion::log() const */

void Quaternion::log(void)

{
  undefined8 *in_RSI;
  undefined8 *in_RDI;
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  float fVar5;
  
  fVar3 = _LC1;
  fVar2 = *(float *)((long)in_RSI + 0xc);
  uVar4 = *in_RSI;
  fVar5 = *(float *)(in_RSI + 1);
  fVar1 = _LC6;
  if ((fVar2 < _LC7) || (fVar1 = 0.0, _LC1 < fVar2)) {
    if (__LC8 < (double)ABS(fVar2)) goto LAB_0010045e;
    fVar2 = sqrtf(_LC1 - fVar2 * fVar2);
  }
  else {
    fVar1 = acosf(fVar2);
    fVar1 = fVar1 + fVar1;
    if (__LC8 < (double)ABS(fVar2)) goto LAB_0010045e;
    fVar2 = SQRT(fVar3 - fVar2 * fVar2);
  }
  fVar3 = fVar3 / fVar2;
  fVar5 = fVar5 * fVar3;
  uVar4 = CONCAT44((float)((ulong)uVar4 >> 0x20) * fVar3,(float)uVar4 * fVar3);
LAB_0010045e:
  *(undefined4 *)((long)in_RDI + 0xc) = 0;
  *(float *)(in_RDI + 1) = fVar1 * fVar5;
  *in_RDI = CONCAT44(fVar1 * (float)((ulong)uVar4 >> 0x20),fVar1 * (float)uVar4);
  return;
}



/* Quaternion::operator String() const */

Quaternion * __thiscall Quaternion::operator_cast_to_String(Quaternion *this)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  float *in_RSI;
  long in_FS_OFFSET;
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
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
  local_58 = &_LC9;
  local_60 = 0;
  local_50 = 1;
  String::parse_latin1((StrRange *)&local_60);
  String::num_real(in_RSI[3],SUB81(&local_68,0));
  local_58 = &_LC10;
  local_78 = 0;
  local_50 = 2;
  String::parse_latin1((StrRange *)&local_78);
  String::num_real(in_RSI[2],SUB81(&local_88,0));
  local_58 = &_LC10;
  local_98 = 0;
  local_50 = 2;
  String::parse_latin1((StrRange *)&local_98);
  String::num_real(in_RSI[1],SUB81(&local_a8,0));
  local_58 = &_LC10;
  local_b8 = 0;
  local_50 = 2;
  String::parse_latin1((StrRange *)&local_b8);
  String::num_real(*in_RSI,SUB81(&local_c8,0));
  operator+((char *)&local_c0,&_LC11);
  String::operator+((String *)&local_b0,(String *)&local_c0);
  String::operator+((String *)&local_a0,(String *)&local_b0);
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
  lVar2 = local_b0;
  if (local_b0 != 0) {
    LOCK();
    plVar1 = (long *)(local_b0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_b0 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_c0;
  if (local_c0 != 0) {
    LOCK();
    plVar1 = (long *)(local_c0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_c0 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_c8;
  if (local_c8 != 0) {
    LOCK();
    plVar1 = (long *)(local_c8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_c8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_b8;
  if (local_b8 != 0) {
    LOCK();
    plVar1 = (long *)(local_b8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_b8 = 0;
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



/* Quaternion::get_euler(EulerOrder) const */

undefined1  [16] __thiscall Quaternion::get_euler(Quaternion *this,undefined4 param_2)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long in_FS_OFFSET;
  float fVar4;
  undefined1 auVar5 [16];
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  undefined1 local_68 [12];
  Quaternion local_58 [16];
  undefined1 local_48 [16];
  float local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  fVar4 = *(float *)this * *(float *)this + *(float *)(this + 4) * *(float *)(this + 4) +
          *(float *)(this + 8) * *(float *)(this + 8) +
          *(float *)(this + 0xc) * *(float *)(this + 0xc);
  if ((fVar4 == _LC1) || (ABS(fVar4 - _LC1) < _LC5)) {
    local_58 = (Quaternion  [16])ZEXT416((uint)_LC1);
    local_38 = _LC1;
    local_48 = (undefined1  [16])local_58;
    Basis::set_quaternion(local_58);
    local_68 = Basis::get_euler(local_58,param_2);
  }
  else {
    local_80 = 0;
    local_78 = " must be normalized.";
    local_70 = 0x14;
    String::parse_latin1((StrRange *)&local_80);
    operator_cast_to_String((Quaternion *)&local_90);
    operator+((char *)&local_88,"The quaternion ");
    String::operator+((String *)&local_78,(String *)&local_88);
    _err_print_error("get_euler","core/math/quaternion.cpp",0x2c,
                     "Condition \"!is_normalized()\" is true. Returning: Vector3(0, 0, 0)",
                     (String *)&local_78,0,0);
    pcVar3 = local_78;
    if (local_78 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_78 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_78 = (char *)0x0;
        Memory::free_static(pcVar3 + -0x10,false);
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
    local_68 = ZEXT812(0);
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  auVar5._12_4_ = 0;
  auVar5._0_12_ = local_68;
  return auVar5;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Quaternion::inverse() const */

void Quaternion::inverse(void)

{
  long *plVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  long lVar7;
  char *pcVar8;
  float *in_RSI;
  uint *in_RDI;
  long in_FS_OFFSET;
  float fVar9;
  uint uVar10;
  uint uVar11;
  long local_60;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  fVar2 = *in_RSI;
  fVar3 = in_RSI[1];
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  fVar4 = in_RSI[2];
  fVar5 = in_RSI[3];
  fVar9 = fVar2 * fVar2 + fVar3 * fVar3 + fVar4 * fVar4 + fVar5 * fVar5;
  if ((fVar9 == _LC1) || (ABS(fVar9 - _LC1) < _LC5)) {
    uVar11 = (uint)fVar3 ^ _LC27;
    uVar10 = (uint)fVar4 ^ _LC27;
    *in_RDI = (uint)fVar2 ^ _LC27;
    in_RDI[1] = uVar11;
    in_RDI[2] = uVar10;
    in_RDI[3] = (uint)fVar5;
  }
  else {
    local_50 = 0;
    local_40 = 0x14;
    local_48 = " must be normalized.";
    String::parse_latin1((StrRange *)&local_50);
    operator_cast_to_String((Quaternion *)&local_60);
    operator+((char *)&local_58,"The quaternion ");
    String::operator+((String *)&local_48,(String *)&local_58);
    _err_print_error("inverse","core/math/quaternion.cpp",0x5b,
                     "Condition \"!is_normalized()\" is true. Returning: Quaternion()",
                     (String *)&local_48,0,0);
    pcVar8 = local_48;
    if (local_48 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = (char *)0x0;
        Memory::free_static(pcVar8 + -0x10,false);
      }
    }
    lVar7 = local_58;
    if (local_58 != 0) {
      LOCK();
      plVar1 = (long *)(local_58 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_58 = 0;
        Memory::free_static((void *)(lVar7 + -0x10),false);
      }
    }
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
    uVar6 = _UNK_001039c8;
    *(undefined8 *)in_RDI = __LC20;
    *(undefined8 *)(in_RDI + 2) = uVar6;
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Quaternion::slerp(Quaternion const&, float) const */

Quaternion * Quaternion::slerp(Quaternion *param_1,float param_2)

{
  long *plVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  long lVar10;
  char *pcVar11;
  float *in_RDX;
  undefined8 uVar12;
  float *in_RSI;
  long in_FS_OFFSET;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  double dVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  long local_60;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  fVar15 = *in_RSI;
  fVar16 = in_RSI[1];
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  fVar17 = in_RSI[2];
  fVar2 = in_RSI[3];
  fVar6 = *in_RSI;
  fVar7 = in_RSI[1];
  fVar8 = in_RSI[2];
  fVar9 = in_RSI[3];
  fVar13 = fVar15 * fVar15 + fVar16 * fVar16 + fVar17 * fVar17 + fVar2 * fVar2;
  if ((fVar13 == _LC1) || (ABS(fVar13 - _LC1) < _LC5)) {
    fVar13 = *in_RDX;
    fVar3 = in_RDX[1];
    fVar4 = in_RDX[2];
    fVar5 = in_RDX[3];
    fVar19 = *in_RDX;
    fVar20 = in_RDX[1];
    fVar21 = in_RDX[2];
    fVar22 = in_RDX[3];
    fVar14 = fVar13 * fVar13 + fVar3 * fVar3 + fVar4 * fVar4 + fVar5 * fVar5;
    if ((fVar14 == _LC1) || (ABS(fVar14 - _LC1) < _LC5)) {
      fVar15 = fVar16 * fVar3 + fVar15 * fVar13 + fVar17 * fVar4 + fVar5 * fVar2;
      if (fVar15 < 0.0) {
        fVar15 = (float)((uint)fVar15 ^ _LC27);
        fVar19 = (float)((uint)fVar19 ^ _LC27);
        fVar20 = (float)((uint)fVar20 ^ _LC27);
        fVar21 = (float)((uint)fVar21 ^ _LC27);
        fVar22 = (float)((uint)fVar22 ^ _LC27);
        if (_LC1 - fVar15 <= _LC2) goto LAB_00101171;
LAB_001011d6:
        fVar16 = acosf(fVar15);
        fVar17 = sinf(fVar16);
        dVar18 = sin((_LC28 - (double)param_2) * (double)fVar16);
        fVar15 = (float)(dVar18 / (double)fVar17);
        fVar16 = sinf(fVar16 * param_2);
        param_2 = fVar16 / fVar17;
      }
      else {
        if (_LC2 < _LC1 - fVar15) goto LAB_001011d6;
LAB_00101171:
        fVar15 = _LC1 - param_2;
      }
      *(float *)param_1 = param_2 * fVar19 + fVar15 * fVar6;
      *(float *)(param_1 + 4) = param_2 * fVar20 + fVar15 * fVar7;
      *(float *)(param_1 + 8) = param_2 * fVar21 + fVar15 * fVar8;
      *(float *)(param_1 + 0xc) = param_2 * fVar22 + fVar15 * fVar9;
      goto LAB_00101189;
    }
    local_50 = 0;
    local_48 = " must be normalized.";
    local_40 = 0x14;
    String::parse_latin1((StrRange *)&local_50);
    operator_cast_to_String((Quaternion *)&local_60);
    operator+((char *)&local_58,"The end quaternion ");
    String::operator+((String *)&local_48,(String *)&local_58);
    pcVar11 = "Condition \"!p_to.is_normalized()\" is true. Returning: Quaternion()";
    uVar12 = 0x74;
  }
  else {
    local_50 = 0;
    local_48 = " must be normalized.";
    local_40 = 0x14;
    String::parse_latin1((StrRange *)&local_50);
    operator_cast_to_String((Quaternion *)&local_60);
    operator+((char *)&local_58,"The start quaternion ");
    String::operator+((String *)&local_48,(String *)&local_58);
    pcVar11 = "Condition \"!is_normalized()\" is true. Returning: Quaternion()";
    uVar12 = 0x73;
  }
  _err_print_error("slerp","core/math/quaternion.cpp",uVar12,pcVar11,&local_48,0,0);
  pcVar11 = local_48;
  if (local_48 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)(local_48 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_48 = (char *)0x0;
      Memory::free_static(pcVar11 + -0x10,false);
    }
  }
  lVar10 = local_58;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar10 + -0x10),false);
    }
  }
  lVar10 = local_60;
  if (local_60 != 0) {
    LOCK();
    plVar1 = (long *)(local_60 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_60 = 0;
      Memory::free_static((void *)(lVar10 + -0x10),false);
    }
  }
  lVar10 = local_50;
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
  uVar12 = _UNK_001039c8;
  *(undefined8 *)param_1 = __LC20;
  *(undefined8 *)(param_1 + 8) = uVar12;
LAB_00101189:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Quaternion::slerpni(Quaternion const&, float) const */

Quaternion * Quaternion::slerpni(Quaternion *param_1,float param_2)

{
  long *plVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  long lVar15;
  char *pcVar16;
  float *in_RDX;
  undefined8 uVar17;
  float *in_RSI;
  long in_FS_OFFSET;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  long local_60;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  fVar18 = *in_RSI;
  fVar7 = *in_RSI;
  fVar8 = in_RSI[1];
  fVar9 = in_RSI[2];
  fVar10 = in_RSI[3];
  fVar2 = in_RSI[1];
  fVar19 = in_RSI[2];
  fVar3 = in_RSI[3];
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  fVar20 = fVar18 * fVar18 + fVar2 * fVar2 + fVar19 * fVar19 + fVar3 * fVar3;
  if ((fVar20 == _LC1) || (ABS(fVar20 - _LC1) < _LC5)) {
    fVar20 = *in_RDX;
    fVar4 = in_RDX[1];
    fVar5 = in_RDX[2];
    fVar6 = in_RDX[3];
    fVar11 = *in_RDX;
    fVar12 = in_RDX[1];
    fVar13 = in_RDX[2];
    fVar14 = in_RDX[3];
    fVar21 = fVar20 * fVar20 + fVar4 * fVar4 + fVar5 * fVar5 + fVar6 * fVar6;
    if ((fVar21 == _LC1) || (ABS(fVar21 - _LC1) < _LC5)) {
      fVar18 = fVar20 * fVar18 + fVar2 * fVar4 + fVar19 * fVar5 + fVar6 * fVar3;
      if (ABS(fVar18) <= __LC32) {
        fVar19 = _LC30;
        fVar2 = _LC29;
        if (_LC7 <= fVar18) {
          if (fVar18 <= _LC1) {
            fVar19 = acosf(fVar18);
            fVar18 = sinf(fVar19);
            fVar2 = _LC1 / fVar18;
          }
          else {
            fVar19 = 0.0;
            fVar2 = _LC1 / 0.0;
          }
        }
        fVar18 = sinf(param_2 * fVar19);
        fVar18 = fVar2 * fVar18;
        fVar19 = sinf((_LC1 - param_2) * fVar19);
        fVar19 = fVar19 * fVar2;
        *(float *)param_1 = fVar19 * fVar7 + fVar18 * fVar11;
        *(float *)(param_1 + 4) = fVar19 * fVar8 + fVar18 * fVar12;
        *(float *)(param_1 + 8) = fVar19 * fVar9 + fVar18 * fVar13;
        *(float *)(param_1 + 0xc) = fVar19 * fVar10 + fVar18 * fVar14;
      }
      else {
        *(float *)param_1 = fVar7;
        *(float *)(param_1 + 4) = fVar8;
        *(float *)(param_1 + 8) = fVar9;
        *(float *)(param_1 + 0xc) = fVar10;
      }
      goto LAB_001015c2;
    }
    local_50 = 0;
    local_48 = " must be normalized.";
    local_40 = 0x14;
    String::parse_latin1((StrRange *)&local_50);
    operator_cast_to_String((Quaternion *)&local_60);
    operator+((char *)&local_58,"The end quaternion ");
    String::operator+((String *)&local_48,(String *)&local_58);
    pcVar16 = "Condition \"!p_to.is_normalized()\" is true. Returning: Quaternion()";
    uVar17 = 0x9d;
  }
  else {
    local_50 = 0;
    local_48 = " must be normalized.";
    local_40 = 0x14;
    String::parse_latin1((StrRange *)&local_50);
    operator_cast_to_String((Quaternion *)&local_60);
    operator+((char *)&local_58,"The start quaternion ");
    String::operator+((String *)&local_48,(String *)&local_58);
    pcVar16 = "Condition \"!is_normalized()\" is true. Returning: Quaternion()";
    uVar17 = 0x9c;
  }
  _err_print_error("slerpni","core/math/quaternion.cpp",uVar17,pcVar16,&local_48,0,0);
  pcVar16 = local_48;
  if (local_48 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)(local_48 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_48 = (char *)0x0;
      Memory::free_static(pcVar16 + -0x10,false);
    }
  }
  lVar15 = local_58;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar15 + -0x10),false);
    }
  }
  lVar15 = local_60;
  if (local_60 != 0) {
    LOCK();
    plVar1 = (long *)(local_60 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_60 = 0;
      Memory::free_static((void *)(lVar15 + -0x10),false);
    }
  }
  lVar15 = local_50;
  if (local_50 != 0) {
    LOCK();
    plVar1 = (long *)(local_50 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_50 = 0;
      Memory::free_static((void *)(lVar15 + -0x10),false);
    }
  }
  uVar17 = _UNK_001039c8;
  *(undefined8 *)param_1 = __LC20;
  *(undefined8 *)(param_1 + 8) = uVar17;
LAB_001015c2:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Quaternion::get_axis() const */

void __thiscall Quaternion::get_axis(Quaternion *this)

{
  long lVar1;
  long in_FS_OFFSET;
  float fVar2;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  fVar2 = *(float *)(this + 0xc);
  if (((double)ABS(fVar2) <= __LC8) && (fVar2 = _LC1 - fVar2 * fVar2, fVar2 < 0.0)) {
    sqrtf(fVar2);
  }
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Quaternion::get_angle() const */

ulong __thiscall Quaternion::get_angle(Quaternion *this)

{
  float fVar1;
  ulong uVar2;
  undefined1 extraout_var [12];
  undefined1 auVar3 [16];
  
  fVar1 = *(float *)(this + 0xc);
  uVar2 = (ulong)_LC6;
  if ((_LC7 <= fVar1) && (uVar2 = 0, fVar1 <= _LC1)) {
    fVar1 = acosf(fVar1);
    auVar3._0_4_ = fVar1 + fVar1;
    auVar3._4_12_ = extraout_var;
    return auVar3._0_8_;
  }
  return uVar2;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Quaternion::Quaternion(Vector3 const&, float) */

void __thiscall Quaternion::Quaternion(Quaternion *this,Vector3 *param_1,float param_2)

{
  long *plVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  long lVar6;
  char *pcVar7;
  long in_FS_OFFSET;
  float fVar8;
  float local_70;
  float local_6c [3];
  long local_60;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  uVar5 = _UNK_001039c8;
  fVar2 = *(float *)param_1;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  fVar3 = *(float *)(param_1 + 4);
  fVar4 = *(float *)(param_1 + 8);
  *(undefined8 *)this = __LC20;
  *(undefined8 *)(this + 8) = uVar5;
  fVar8 = fVar2 * fVar2 + fVar3 * fVar3 + fVar4 * fVar4;
  if (fVar8 != _LC1) {
    if (_LC5 <= ABS(fVar8 - _LC1)) {
      local_50 = 0;
      local_40 = 0x14;
      local_48 = " must be normalized.";
      String::parse_latin1((StrRange *)&local_50);
      Vector3::operator_cast_to_String((Vector3 *)&local_48);
      operator+((char *)&local_58,"The axis Vector3 ");
      String::operator+((String *)&local_60,(String *)&local_58);
      _err_print_error("Quaternion","core/math/quaternion.cpp",0x129,
                       "Condition \"!p_axis.is_normalized()\" is true.",(String *)&local_60,0,0);
      lVar6 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar1 = (long *)(local_60 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar6 + -0x10),false);
        }
      }
      lVar6 = local_58;
      if (local_58 != 0) {
        LOCK();
        plVar1 = (long *)(local_58 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_58 = 0;
          Memory::free_static((void *)(lVar6 + -0x10),false);
        }
      }
      pcVar7 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_48 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar7 + -0x10,false);
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
      goto LAB_00101ac1;
    }
    fVar8 = SQRT(fVar8);
    if (fVar8 == 0.0) {
      *(undefined4 *)(this + 0xc) = 0;
      goto LAB_00101ac1;
    }
  }
  sincosf(param_2 * _LC36,local_6c,&local_70);
  local_6c[0] = local_6c[0] / fVar8;
  *(float *)this = fVar2 * local_6c[0];
  *(float *)(this + 4) = fVar3 * local_6c[0];
  *(float *)(this + 8) = local_6c[0] * fVar4;
  *(float *)(this + 0xc) = local_70;
LAB_00101ac1:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Quaternion::exp() const */

void Quaternion::exp(void)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong *in_RSI;
  Quaternion *in_RDI;
  long in_FS_OFFSET;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar7;
  undefined8 local_20;
  float local_18;
  long local_10;
  
  uVar2 = _UNK_001039c8;
  uVar1 = *in_RSI;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar1;
  fVar4 = *(float *)(in_RSI + 1);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  fVar3 = (float)(uVar1 >> 0x20);
  fVar3 = (float)uVar1 * (float)uVar1 + fVar3 * fVar3 + fVar4 * fVar4;
  fVar7 = SQRT(fVar3);
  local_20 = 0;
  local_18 = 0.0;
  if (fVar3 != 0.0) {
    local_18 = fVar4 / fVar7;
    auVar5._4_4_ = fVar7;
    auVar5._0_4_ = fVar7;
    auVar5._8_8_ = _LC37;
    auVar6 = divps(auVar6,auVar5);
    local_20 = auVar6._0_8_;
  }
  if (((double)fVar7 < _LC38) ||
     ((fVar4 = (float)((ulong)local_20 >> 0x20),
      fVar4 = (float)local_20 * (float)local_20 + fVar4 * fVar4 + local_18 * local_18, fVar4 != _LC1
      && (_LC5 <= ABS(fVar4 - _LC1))))) {
    *(undefined8 *)in_RDI = __LC20;
    *(undefined8 *)(in_RDI + 8) = uVar2;
  }
  else {
    Quaternion(in_RDI,(Vector3 *)&local_20,fVar7);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Quaternion::spherical_cubic_interpolate(Quaternion const&, Quaternion const&, Quaternion const&,
   float) const */

Quaternion *
Quaternion::spherical_cubic_interpolate
          (Quaternion *param_1,Quaternion *param_2,Quaternion *param_3,float param_4)

{
  long *plVar1;
  long lVar2;
  undefined8 *in_RCX;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 *in_R8;
  long in_FS_OFFSET;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  long local_140;
  long local_138;
  long local_130;
  char *local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  float local_d0;
  undefined8 local_c8;
  float local_c0;
  undefined8 local_b8;
  float local_b0;
  undefined8 local_a8;
  float local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68 [8];
  undefined8 uStack_60;
  undefined1 local_58 [16];
  float local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  fVar5 = *(float *)param_2 * *(float *)param_2 + *(float *)(param_2 + 4) * *(float *)(param_2 + 4)
          + *(float *)(param_2 + 8) * *(float *)(param_2 + 8) +
          *(float *)(param_2 + 0xc) * *(float *)(param_2 + 0xc);
  if ((fVar5 == _LC1) || (ABS(fVar5 - _LC1) < _LC5)) {
    fVar5 = *(float *)param_3 * *(float *)param_3 +
            *(float *)(param_3 + 4) * *(float *)(param_3 + 4) +
            *(float *)(param_3 + 8) * *(float *)(param_3 + 8) +
            *(float *)(param_3 + 0xc) * *(float *)(param_3 + 0xc);
    if ((fVar5 == _LC1) || (ABS(fVar5 - _LC1) < _LC5)) {
      local_108 = *in_RCX;
      uStack_100 = in_RCX[1];
      _local_68 = ZEXT416((uint)_LC1);
      local_e8 = *in_R8;
      uStack_e0 = in_R8[1];
      local_48 = _LC1;
      local_118 = *(undefined8 *)param_2;
      uStack_110 = *(undefined8 *)(param_2 + 8);
      local_f8 = *(undefined8 *)param_3;
      uStack_f0 = *(undefined8 *)(param_3 + 8);
      local_58 = _local_68;
      Basis::set_quaternion((Quaternion *)local_68);
      Basis::get_rotation_quaternion();
      _local_68 = ZEXT416((uint)_LC1);
      local_118 = local_78;
      uStack_110 = uStack_70;
      local_48 = _LC1;
      local_58 = _local_68;
      Basis::set_quaternion((Quaternion *)local_68);
      Basis::get_rotation_quaternion();
      _local_68 = ZEXT416((uint)_LC1);
      local_108 = local_78;
      uStack_100 = uStack_70;
      local_48 = _LC1;
      local_58 = _local_68;
      Basis::set_quaternion((Quaternion *)local_68);
      Basis::get_rotation_quaternion();
      _local_68 = ZEXT416((uint)_LC1);
      local_f8 = local_78;
      uStack_f0 = uStack_70;
      local_48 = _LC1;
      local_58 = _local_68;
      Basis::set_quaternion((Quaternion *)local_68);
      Basis::get_rotation_quaternion();
      if ((int)(local_108._4_4_ * local_118._4_4_ + (float)local_108 * (float)local_118 +
                (float)uStack_100 * (float)uStack_110 + uStack_100._4_4_ * uStack_110._4_4_) < 0) {
        local_108._0_4_ = (float)((uint)(float)local_108 ^ _LC27);
        local_108._4_4_ = (float)((uint)local_108._4_4_ ^ _LC27);
        uStack_100._0_4_ = (float)((uint)(float)uStack_100 ^ _LC27);
        uStack_100._4_4_ = (float)((uint)uStack_100._4_4_ ^ _LC27);
      }
      fVar5 = (float)local_78;
      fVar12 = local_78._4_4_;
      fVar6 = (float)uStack_70;
      fVar7 = uStack_70._4_4_;
      if ((int)((float)local_118 * (float)local_f8 + local_118._4_4_ * local_f8._4_4_ +
                (float)uStack_110 * (float)uStack_f0 + uStack_110._4_4_ * uStack_f0._4_4_) < 0) {
        local_f8._0_4_ = (float)((uint)(float)local_f8 ^ _LC27);
        local_f8._4_4_ = (float)((uint)local_f8._4_4_ ^ _LC27);
        uStack_f0._0_4_ = (float)((uint)(float)uStack_f0 ^ _LC27);
        uStack_f0._4_4_ = (float)((uint)uStack_f0._4_4_ ^ _LC27);
        if (uStack_f0._4_4_ * uStack_70._4_4_ +
            (float)local_f8 * (float)local_78 + local_78._4_4_ * local_f8._4_4_ +
            (float)uStack_70 * (float)uStack_f0 <= 0.0) goto LAB_001021e0;
      }
      else if ((int)((float)local_78 * (float)local_f8 + local_f8._4_4_ * local_78._4_4_ +
                     (float)uStack_f0 * (float)uStack_70 + uStack_f0._4_4_ * uStack_70._4_4_) < 0) {
LAB_001021e0:
        fVar5 = (float)((uint)(float)local_78 ^ _LC27);
        fVar12 = (float)((uint)local_78._4_4_ ^ _LC27);
        fVar6 = (float)((uint)(float)uStack_70 ^ _LC27);
        fVar7 = (float)((uint)uStack_70._4_4_ ^ _LC27);
      }
      local_e8 = CONCAT44(fVar12,fVar5);
      uStack_e0 = CONCAT44(fVar7,fVar6);
      inverse();
      operator*=((Quaternion *)local_68,(Quaternion *)&local_f8);
      log();
      inverse();
      operator*=((Quaternion *)local_68,(Quaternion *)&local_108);
      log();
      inverse();
      uStack_60 = uStack_70;
      local_68 = (undefined1  [8])local_78;
      operator*=((Quaternion *)local_68,(Quaternion *)&local_e8);
      log();
      fVar5 = (float)local_d8;
      fVar12 = (float)((ulong)local_d8 >> 0x20);
      local_9c = 0;
      fVar11 = param_4 * param_4;
      fVar7 = (float)local_c8;
      fVar8 = (float)((ulong)local_c8 >> 0x20);
      fVar10 = param_4 * fVar11;
      fVar6 = (float)((ulong)local_b8 >> 0x20);
      local_a8 = CONCAT44((((fVar8 + fVar8 + _UNK_00103a04 * fVar12) - fVar6) * fVar11 +
                           (fVar12 - fVar8) * param_4 + 0.0 +
                          (((0.0 - fVar8) - fVar12 * _LC45._4_4_) + fVar6) * fVar10) * _UNK_00103a14
                          ,(((fVar7 + fVar7 + _LC44 * fVar5) - (float)local_b8) * fVar11 +
                            (fVar5 - fVar7) * param_4 + 0.0 +
                           (((0.0 - fVar7) - fVar5 * (float)_LC45) + (float)local_b8) * fVar10) *
                           _LC36);
      local_a0 = (((local_c0 + local_c0 + _LC44 * local_d0) - local_b0) * fVar11 +
                  (local_d0 - local_c0) * param_4 + 0.0 +
                 (((0.0 - local_c0) - local_d0 * (float)_LC45) + local_b0) * fVar10) * _LC36;
      exp();
      local_98 = local_118;
      uStack_90 = uStack_110;
      operator*=((Quaternion *)&local_98,(Quaternion *)local_68);
      inverse();
      local_78 = local_88;
      uStack_70 = uStack_80;
      operator*=((Quaternion *)&local_78,(Quaternion *)&local_118);
      log();
      fVar5 = (float)uStack_60;
      fVar6 = SUB124(_local_68,0);
      fVar13 = (float)_LC45 * fVar6;
      fVar8 = SUB124(_local_68,4);
      fVar14 = _LC45._4_4_ * fVar8;
      fVar15 = _LC47 * fVar6;
      fVar16 = _UNK_00103a1c * fVar8;
      inverse();
      local_78 = local_88;
      uStack_70 = uStack_80;
      operator*=((Quaternion *)&local_78,(Quaternion *)&local_108);
      log();
      fVar7 = SUB124(_local_68,0);
      fVar9 = SUB124(_local_68,4);
      fVar12 = (float)uStack_60;
      inverse();
      local_78 = local_88;
      uStack_70 = uStack_80;
      operator*=((Quaternion *)&local_78,(Quaternion *)&local_e8);
      log();
      local_a8 = CONCAT44((((((fVar9 + fVar9) - fVar16) + 0.0) - SUB124(_local_68,4)) * fVar11 +
                           (0.0 - fVar9) * param_4 + fVar8 + fVar8 +
                          (SUB124(_local_68,4) + (fVar14 - fVar9)) * fVar10) * _UNK_00103a14,
                          (((((fVar7 + fVar7) - fVar15) + 0.0) - SUB124(_local_68,0)) * fVar11 +
                           (0.0 - fVar7) * param_4 + fVar6 + fVar6 +
                          (SUB124(_local_68,0) + (fVar13 - fVar7)) * fVar10) * _LC36);
      local_a0 = (((((fVar12 + fVar12) - _LC47 * fVar5) + 0.0) - (float)uStack_60) * fVar11 +
                  (0.0 - fVar12) * param_4 + fVar5 + fVar5 +
                 ((fVar5 * (float)_LC45 - fVar12) + (float)uStack_60) * fVar10) * _LC36;
      exp();
      local_78 = local_f8;
      uStack_70 = uStack_f0;
      operator*=((Quaternion *)&local_78,(Quaternion *)local_68);
      slerp(param_1,param_4);
      goto LAB_0010268d;
    }
    local_130 = 0;
    local_128 = " must be normalized.";
    local_120 = 0x14;
    String::parse_latin1((StrRange *)&local_130);
    operator_cast_to_String((Quaternion *)&local_140);
    operator+((char *)&local_138,"The end quaternion ");
    String::operator+((String *)&local_128,(String *)&local_138);
    pcVar3 = "Condition \"!p_b.is_normalized()\" is true. Returning: Quaternion()";
    uVar4 = 0xb5;
  }
  else {
    local_130 = 0;
    local_128 = " must be normalized.";
    local_120 = 0x14;
    String::parse_latin1((StrRange *)&local_130);
    operator_cast_to_String((Quaternion *)&local_140);
    operator+((char *)&local_138,"The start quaternion ");
    String::operator+((String *)&local_128,(String *)&local_138);
    pcVar3 = "Condition \"!is_normalized()\" is true. Returning: Quaternion()";
    uVar4 = 0xb4;
  }
  _err_print_error("spherical_cubic_interpolate","core/math/quaternion.cpp",uVar4,pcVar3,&local_128,
                   0,0);
  pcVar3 = local_128;
  if (local_128 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)(local_128 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_128 = (char *)0x0;
      Memory::free_static(pcVar3 + -0x10,false);
    }
  }
  lVar2 = local_138;
  if (local_138 != 0) {
    LOCK();
    plVar1 = (long *)(local_138 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_138 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_140;
  if (local_140 != 0) {
    LOCK();
    plVar1 = (long *)(local_140 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_140 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_130;
  if (local_130 != 0) {
    LOCK();
    plVar1 = (long *)(local_130 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_130 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  uVar4 = _UNK_001039c8;
  *(undefined8 *)param_1 = __LC20;
  *(undefined8 *)(param_1 + 8) = uVar4;
LAB_0010268d:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Quaternion::spherical_cubic_interpolate_in_time(Quaternion const&, Quaternion const&, Quaternion
   const&, float, float, float, float) const */

Quaternion *
Quaternion::spherical_cubic_interpolate_in_time
          (Quaternion *param_1,Quaternion *param_2,Quaternion *param_3,float param_4,float param_5,
          float param_6,float param_7)

{
  long *plVar1;
  long lVar2;
  undefined8 *in_RCX;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 *in_R8;
  long in_FS_OFFSET;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  long local_140;
  long local_138;
  long local_130;
  char *local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_b8;
  float local_b4;
  float local_b0;
  undefined8 local_a8;
  float local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68 [8];
  undefined8 uStack_60;
  undefined1 local_58 [16];
  undefined4 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  fVar5 = *(float *)param_2 * *(float *)param_2 + *(float *)(param_2 + 4) * *(float *)(param_2 + 4)
          + *(float *)(param_2 + 8) * *(float *)(param_2 + 8) +
          *(float *)(param_2 + 0xc) * *(float *)(param_2 + 0xc);
  if ((fVar5 == _LC1) || (ABS(fVar5 - _LC1) < _LC5)) {
    fVar5 = *(float *)param_3 * *(float *)param_3 +
            *(float *)(param_3 + 4) * *(float *)(param_3 + 4) +
            *(float *)(param_3 + 8) * *(float *)(param_3 + 8) +
            *(float *)(param_3 + 0xc) * *(float *)(param_3 + 0xc);
    if ((fVar5 == _LC1) || (ABS(fVar5 - _LC1) < _LC5)) {
      local_108 = *in_RCX;
      uStack_100 = in_RCX[1];
      local_e8 = *in_R8;
      uStack_e0 = in_R8[1];
      _local_68 = ZEXT416((uint)_LC1);
      local_48 = 0x3f800000;
      local_118 = *(undefined8 *)param_2;
      uStack_110 = *(undefined8 *)(param_2 + 8);
      local_f8 = *(undefined8 *)param_3;
      uStack_f0 = *(undefined8 *)(param_3 + 8);
      local_58 = _local_68;
      Basis::set_quaternion((Quaternion *)local_68);
      Basis::get_rotation_quaternion();
      _local_68 = ZEXT416((uint)_LC1);
      local_48 = 0x3f800000;
      local_118 = local_78;
      uStack_110 = uStack_70;
      local_58 = _local_68;
      Basis::set_quaternion((Quaternion *)local_68);
      Basis::get_rotation_quaternion();
      _local_68 = ZEXT416((uint)_LC1);
      local_48 = 0x3f800000;
      local_108 = local_78;
      uStack_100 = uStack_70;
      local_58 = _local_68;
      Basis::set_quaternion((Quaternion *)local_68);
      Basis::get_rotation_quaternion();
      _local_68 = ZEXT416((uint)_LC1);
      local_f8 = local_78;
      uStack_f0 = uStack_70;
      local_48 = 0x3f800000;
      local_58 = _local_68;
      Basis::set_quaternion((Quaternion *)local_68);
      Basis::get_rotation_quaternion();
      if ((int)(local_108._4_4_ * local_118._4_4_ + (float)local_108 * (float)local_118 +
                (float)uStack_100 * (float)uStack_110 + uStack_100._4_4_ * uStack_110._4_4_) < 0) {
        local_108._0_4_ = (float)((uint)(float)local_108 ^ _LC27);
        local_108._4_4_ = (float)((uint)local_108._4_4_ ^ _LC27);
        uStack_100._0_4_ = (float)((uint)(float)uStack_100 ^ _LC27);
        uStack_100._4_4_ = (float)((uint)uStack_100._4_4_ ^ _LC27);
      }
      fVar5 = (float)local_78;
      fVar15 = local_78._4_4_;
      fVar13 = (float)uStack_70;
      fVar6 = uStack_70._4_4_;
      if ((int)((float)local_118 * (float)local_f8 + local_118._4_4_ * local_f8._4_4_ +
                (float)uStack_110 * (float)uStack_f0 + uStack_110._4_4_ * uStack_f0._4_4_) < 0) {
        local_f8._0_4_ = (float)((uint)(float)local_f8 ^ _LC27);
        local_f8._4_4_ = (float)((uint)local_f8._4_4_ ^ _LC27);
        uStack_f0._0_4_ = (float)((uint)(float)uStack_f0 ^ _LC27);
        uStack_f0._4_4_ = (float)((uint)uStack_f0._4_4_ ^ _LC27);
        if (uStack_f0._4_4_ * uStack_70._4_4_ +
            (float)local_f8 * (float)local_78 + local_f8._4_4_ * local_78._4_4_ +
            (float)uStack_f0 * (float)uStack_70 <= 0.0) goto LAB_00102d41;
      }
      else if ((int)((float)local_f8 * (float)local_78 + local_f8._4_4_ * local_78._4_4_ +
                     (float)uStack_f0 * (float)uStack_70 + uStack_70._4_4_ * uStack_f0._4_4_) < 0) {
LAB_00102d41:
        fVar5 = (float)((uint)(float)local_78 ^ _LC27);
        fVar15 = (float)((uint)local_78._4_4_ ^ _LC27);
        fVar13 = (float)((uint)(float)uStack_70 ^ _LC27);
        fVar6 = (float)((uint)uStack_70._4_4_ ^ _LC27);
      }
      local_e8 = CONCAT44(fVar15,fVar5);
      uStack_e0 = CONCAT44(fVar6,fVar13);
      inverse();
      operator*=((Quaternion *)local_68,(Quaternion *)&local_f8);
      log();
      inverse();
      operator*=((Quaternion *)local_68,(Quaternion *)&local_108);
      log();
      inverse();
      uStack_60 = uStack_70;
      local_68 = (undefined1  [8])local_78;
      operator*=((Quaternion *)local_68,(Quaternion *)&local_e8);
      log();
      local_9c = 0;
      fVar15 = param_4 * param_5 + 0.0;
      fVar5 = 0.0;
      if (param_6 != 0.0) {
        fVar5 = (float)((uint)(fVar15 - param_6) ^ _LC27) / param_6;
      }
      local_c8 = (0.0 - local_c8) * fVar5 + local_c8;
      fVar13 = _LC36;
      if (param_5 != 0.0) {
        fVar13 = fVar15 / param_5;
      }
      fVar11 = local_d8 * fVar13 + 0.0;
      fVar6 = _LC1;
      if (param_7 - param_5 != 0.0) {
        fVar6 = (fVar15 - param_5) / (param_7 - param_5);
      }
      fVar14 = 0.0;
      if (param_5 - param_6 != 0.0) {
        fVar14 = (fVar15 - param_6) / (param_5 - param_6);
      }
      local_c8 = (fVar11 - local_c8) * fVar14 + local_c8;
      fVar12 = _LC1;
      if (param_7 != 0.0) {
        fVar12 = fVar15 / param_7;
      }
      fVar15 = local_d4 * fVar13 + 0.0;
      local_c4 = (0.0 - local_c4) * fVar5 + local_c4;
      local_c4 = local_c4 + (fVar15 - local_c4) * fVar14;
      local_c0 = (0.0 - local_c0) * fVar5 + local_c0;
      local_a8 = CONCAT44((((((local_b4 - local_d4) * fVar6 + local_d4) - fVar15) * fVar12 + fVar15)
                          - local_c4) * fVar13 + local_c4,
                          local_c8 +
                          (((((local_b8 - local_d8) * fVar6 + local_d8) - fVar11) * fVar12 + fVar11)
                          - local_c8) * fVar13);
      fVar15 = local_d0 * fVar13 + 0.0;
      local_c0 = (fVar15 - local_c0) * fVar14 + local_c0;
      local_a0 = (((((local_b0 - local_d0) * fVar6 + local_d0) - fVar15) * fVar12 + fVar15) -
                 local_c0) * fVar13 + local_c0;
      exp();
      local_98 = local_118;
      uStack_90 = uStack_110;
      operator*=((Quaternion *)&local_98,(Quaternion *)local_68);
      inverse();
      local_78 = local_88;
      uStack_70 = uStack_80;
      operator*=((Quaternion *)&local_78,(Quaternion *)&local_118);
      log();
      fVar11 = SUB124(_local_68,0);
      fVar8 = SUB124(_local_68,4);
      fVar9 = (0.0 - fVar11) * fVar13 + fVar11;
      fVar10 = (0.0 - fVar8) * fVar13 + fVar8;
      fVar15 = (float)uStack_60;
      inverse();
      local_78 = local_88;
      uStack_70 = uStack_80;
      operator*=((Quaternion *)&local_78,(Quaternion *)&local_108);
      log();
      fVar7 = (fVar11 - SUB124(_local_68,0)) * fVar5 + SUB124(_local_68,0);
      fVar8 = (fVar8 - SUB124(_local_68,4)) * fVar5 + SUB124(_local_68,4);
      fVar11 = (float)uStack_60;
      fVar7 = fVar14 * (fVar9 - fVar7) + fVar7;
      fVar8 = fVar14 * (fVar10 - fVar8) + fVar8;
      inverse();
      local_78 = local_88;
      uStack_70 = uStack_80;
      operator*=((Quaternion *)&local_78,(Quaternion *)&local_e8);
      log();
      local_a8 = CONCAT44(((((fVar6 * SUB124(_local_68,4) + 0.0) - fVar10) * fVar12 + fVar10) -
                          fVar8) * fVar13 + fVar8,
                          ((((fVar6 * SUB124(_local_68,0) + 0.0) - fVar9) * fVar12 + fVar9) - fVar7)
                          * fVar13 + fVar7);
      fVar11 = (fVar15 - fVar11) * fVar5 + fVar11;
      fVar15 = (0.0 - fVar15) * fVar13 + fVar15;
      fVar11 = (fVar15 - fVar11) * fVar14 + fVar11;
      local_a0 = (((((float)uStack_60 * fVar6 + 0.0) - fVar15) * fVar12 + fVar15) - fVar11) * fVar13
                 + fVar11;
      exp();
      local_78 = local_f8;
      uStack_70 = uStack_f0;
      operator*=((Quaternion *)&local_78,(Quaternion *)local_68);
      slerp(param_1,param_4);
      goto LAB_00103344;
    }
    local_130 = 0;
    local_128 = " must be normalized.";
    local_120 = 0x14;
    String::parse_latin1((StrRange *)&local_130);
    operator_cast_to_String((Quaternion *)&local_140);
    operator+((char *)&local_138,"The end quaternion ");
    String::operator+((String *)&local_128,(String *)&local_138);
    pcVar3 = "Condition \"!p_b.is_normalized()\" is true. Returning: Quaternion()";
    uVar4 = 0xe8;
  }
  else {
    local_130 = 0;
    local_128 = " must be normalized.";
    local_120 = 0x14;
    String::parse_latin1((StrRange *)&local_130);
    operator_cast_to_String((Quaternion *)&local_140);
    operator+((char *)&local_138,"The start quaternion ");
    String::operator+((String *)&local_128,(String *)&local_138);
    pcVar3 = "Condition \"!is_normalized()\" is true. Returning: Quaternion()";
    uVar4 = 0xe7;
  }
  _err_print_error("spherical_cubic_interpolate_in_time","core/math/quaternion.cpp",uVar4,pcVar3,
                   &local_128,0,0);
  pcVar3 = local_128;
  if (local_128 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)(local_128 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_128 = (char *)0x0;
      Memory::free_static(pcVar3 + -0x10,false);
    }
  }
  lVar2 = local_138;
  if (local_138 != 0) {
    LOCK();
    plVar1 = (long *)(local_138 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_138 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_140;
  if (local_140 != 0) {
    LOCK();
    plVar1 = (long *)(local_140 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_140 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_130;
  if (local_130 != 0) {
    LOCK();
    plVar1 = (long *)(local_130 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_130 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  uVar4 = _UNK_001039c8;
  *(undefined8 *)param_1 = __LC20;
  *(undefined8 *)(param_1 + 8) = uVar4;
LAB_00103344:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Quaternion::from_euler(Vector3 const&) */

Quaternion * __thiscall Quaternion::from_euler(Quaternion *this,Vector3 *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_30;
  float local_2c [3];
  
  sincosf(_LC36 * *(float *)(param_1 + 4),local_2c,&local_30);
  fVar5 = local_2c[0];
  fVar1 = local_30;
  sincosf(_LC36 * *(float *)param_1,local_2c,&local_30);
  fVar3 = local_2c[0];
  fVar2 = local_30;
  sincosf(_LC36 * *(float *)(param_1 + 8),local_2c,&local_30);
  fVar4 = fVar3 * fVar5;
  fVar5 = fVar5 * fVar2;
  fVar6 = (float)((uint)fVar4 ^ _LC27);
  *(float *)this = fVar5 * local_2c[0] + fVar1 * fVar3 * local_30;
  *(float *)(this + 4) = fVar5 * local_30 - fVar1 * fVar3 * local_2c[0];
  *(float *)(this + 8) = fVar6 * local_30 + fVar1 * fVar2 * local_2c[0];
  *(float *)(this + 0xc) = fVar4 * local_2c[0] + fVar1 * fVar2 * local_30;
  return this;
}


