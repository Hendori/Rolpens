
/* Vector2i::clamp(Vector2i const&, Vector2i const&) const */

undefined8 __thiscall Vector2i::clamp(Vector2i *this,Vector2i *param_1,Vector2i *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(this + 4);
  iVar3 = *(int *)(param_2 + 4);
  if (iVar1 < *(int *)(param_2 + 4)) {
    iVar3 = iVar1;
  }
  iVar4 = *(int *)(param_1 + 4);
  if (*(int *)(param_1 + 4) <= iVar1) {
    iVar4 = iVar3;
  }
  iVar1 = *(int *)this;
  iVar3 = *(int *)param_2;
  if (iVar1 < *(int *)param_2) {
    iVar3 = iVar1;
  }
  iVar2 = *(int *)param_1;
  if (*(int *)param_1 <= iVar1) {
    iVar2 = iVar3;
  }
  return CONCAT44(iVar4,iVar2);
}



/* Vector2i::clampi(int, int) const */

ulong __thiscall Vector2i::clampi(Vector2i *this,int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar1 = *(uint *)(this + 4);
  uVar3 = (ulong)(uint)param_2;
  if ((int)uVar1 <= param_2) {
    uVar3 = (ulong)uVar1;
  }
  uVar2 = *(uint *)this;
  if ((int)uVar1 < param_1) {
    uVar3 = (ulong)(uint)param_1;
  }
  if ((int)uVar2 <= param_2) {
    param_2 = uVar2;
  }
  if (param_1 <= (int)uVar2) {
    param_1 = param_2;
  }
  return (ulong)(uint)param_1 | uVar3 << 0x20;
}



/* Vector2i::snapped(Vector2i const&) const */

undefined8 __thiscall Vector2i::snapped(Vector2i *this,Vector2i *param_1)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (double)Math::snapped((double)*(int *)(this + 4),(double)*(int *)(param_1 + 4));
  dVar2 = (double)Math::snapped((double)*(int *)this,(double)*(int *)param_1);
  return CONCAT44((int)dVar1,(int)dVar2);
}



/* Vector2i::snappedi(int) const */

undefined8 __thiscall Vector2i::snappedi(Vector2i *this,int param_1)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (double)Math::snapped((double)*(int *)(this + 4),(double)param_1);
  dVar2 = (double)Math::snapped((double)*(int *)this,(double)param_1);
  return CONCAT44((int)dVar1,(int)dVar2);
}



/* Vector2i::length_squared() const */

long __thiscall Vector2i::length_squared(Vector2i *this)

{
  return (long)*(int *)this * (long)*(int *)this +
         (long)*(int *)(this + 4) * (long)*(int *)(this + 4);
}



/* Vector2i::length() const */

double __thiscall Vector2i::length(Vector2i *this)

{
  double dVar1;
  
  dVar1 = (double)((long)*(int *)this * (long)*(int *)this +
                  (long)*(int *)(this + 4) * (long)*(int *)(this + 4));
  if (0.0 <= dVar1) {
    return SQRT(dVar1);
  }
  dVar1 = sqrt(dVar1);
  return dVar1;
}



/* Vector2i::TEMPNAMEPLACEHOLDERVALUE(Vector2i const&) const */

undefined8 __thiscall Vector2i::operator+(Vector2i *this,Vector2i *param_1)

{
  return CONCAT44((int)((ulong)*(undefined8 *)this >> 0x20) +
                  (int)((ulong)*(undefined8 *)param_1 >> 0x20),
                  (int)*(undefined8 *)this + (int)*(undefined8 *)param_1);
}



/* Vector2i::TEMPNAMEPLACEHOLDERVALUE(Vector2i const&) */

void __thiscall Vector2i::operator+=(Vector2i *this,Vector2i *param_1)

{
  *(ulong *)this =
       CONCAT44((int)((ulong)*(undefined8 *)this >> 0x20) +
                (int)((ulong)*(undefined8 *)param_1 >> 0x20),
                (int)*(undefined8 *)this + (int)*(undefined8 *)param_1);
  return;
}



/* Vector2i::TEMPNAMEPLACEHOLDERVALUE(Vector2i const&) const */

undefined8 __thiscall Vector2i::operator-(Vector2i *this,Vector2i *param_1)

{
  return CONCAT44((int)((ulong)*(undefined8 *)this >> 0x20) -
                  (int)((ulong)*(undefined8 *)param_1 >> 0x20),
                  (int)*(undefined8 *)this - (int)*(undefined8 *)param_1);
}



/* Vector2i::TEMPNAMEPLACEHOLDERVALUE(Vector2i const&) */

void __thiscall Vector2i::operator-=(Vector2i *this,Vector2i *param_1)

{
  *(ulong *)this =
       CONCAT44((int)((ulong)*(undefined8 *)this >> 0x20) -
                (int)((ulong)*(undefined8 *)param_1 >> 0x20),
                (int)*(undefined8 *)this - (int)*(undefined8 *)param_1);
  return;
}



/* Vector2i::TEMPNAMEPLACEHOLDERVALUE(Vector2i const&) const */

undefined8 __thiscall Vector2i::operator*(Vector2i *this,Vector2i *param_1)

{
  return CONCAT44(*(int *)(this + 4) * *(int *)(param_1 + 4),*(int *)this * *(int *)param_1);
}



/* Vector2i::TEMPNAMEPLACEHOLDERVALUE(int) const */

undefined8 __thiscall Vector2i::operator*(Vector2i *this,int param_1)

{
  return CONCAT44(param_1 * *(int *)(this + 4),param_1 * *(int *)this);
}



/* Vector2i::TEMPNAMEPLACEHOLDERVALUE(int) */

void __thiscall Vector2i::operator*=(Vector2i *this,int param_1)

{
  *(int *)this = *(int *)this * param_1;
  *(int *)(this + 4) = param_1 * *(int *)(this + 4);
  return;
}



/* Vector2i::TEMPNAMEPLACEHOLDERVALUE(Vector2i const&) const */

undefined1  [16] __thiscall Vector2i::operator/(Vector2i *this,Vector2i *param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = (long)*(int *)this % (long)*(int *)param_1 & 0xffffffff;
  auVar1._0_8_ = (long)*(int *)this / (long)*(int *)param_1 & 0xffffffffU |
                 (long)*(int *)(this + 4) / (long)*(int *)(param_1 + 4) << 0x20;
  return auVar1;
}



/* Vector2i::TEMPNAMEPLACEHOLDERVALUE(int) const */

undefined1  [16] __thiscall Vector2i::operator/(Vector2i *this,int param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = (long)*(int *)this % (long)param_1 & 0xffffffff;
  auVar1._0_8_ = (long)*(int *)this / (long)param_1 & 0xffffffffU |
                 (long)*(int *)(this + 4) / (long)param_1 << 0x20;
  return auVar1;
}



/* Vector2i::TEMPNAMEPLACEHOLDERVALUE(int) */

void __thiscall Vector2i::operator/=(Vector2i *this,int param_1)

{
  *(int *)this = *(int *)this / param_1;
  *(int *)(this + 4) = *(int *)(this + 4) / param_1;
  return;
}



/* Vector2i::TEMPNAMEPLACEHOLDERVALUE(Vector2i const&) const */

ulong __thiscall Vector2i::operator%(Vector2i *this,Vector2i *param_1)

{
  return (long)*(int *)this % (long)*(int *)param_1 & 0xffffffffU |
         (long)*(int *)(this + 4) % (long)*(int *)(param_1 + 4) << 0x20;
}



/* Vector2i::TEMPNAMEPLACEHOLDERVALUE(int) const */

ulong __thiscall Vector2i::operator%(Vector2i *this,int param_1)

{
  return (long)*(int *)this % (long)param_1 & 0xffffffffU |
         (long)*(int *)(this + 4) % (long)param_1 << 0x20;
}



/* Vector2i::TEMPNAMEPLACEHOLDERVALUE(int) */

ulong __thiscall Vector2i::operator%=(Vector2i *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 4);
  *(int *)this = *(int *)this % param_1;
  *(int *)(this + 4) = iVar1 % param_1;
  return (long)iVar1 / (long)param_1 & 0xffffffff;
}



/* Vector2i::TEMPNAMEPLACEHOLDERVALUE() const */

undefined8 __thiscall Vector2i::operator-(Vector2i *this)

{
  return CONCAT44(-(int)((ulong)*(undefined8 *)this >> 0x20),-(int)*(undefined8 *)this);
}



/* Vector2i::TEMPNAMEPLACEHOLDERVALUE(Vector2i const&) const */

undefined4 __thiscall Vector2i::operator==(Vector2i *this,Vector2i *param_1)

{
  if (*(int *)this != *(int *)param_1) {
    return 0;
  }
  return CONCAT31((int3)((uint)*(int *)(param_1 + 4) >> 8),
                  *(int *)(this + 4) == *(int *)(param_1 + 4));
}



/* Vector2i::TEMPNAMEPLACEHOLDERVALUE(Vector2i const&) const */

undefined4 __thiscall Vector2i::operator!=(Vector2i *this,Vector2i *param_1)

{
  if (*(int *)this != *(int *)param_1) {
    return 1;
  }
  return CONCAT31((int3)((uint)*(int *)(param_1 + 4) >> 8),
                  *(int *)(this + 4) != *(int *)(param_1 + 4));
}



/* Vector2i::operator String() const */

Vector2i * __thiscall Vector2i::operator_cast_to_String(Vector2i *this)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
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
  local_58 = &_LC1;
  String::parse_latin1((StrRange *)&local_60);
  itos((long)&local_68);
  local_78 = 0;
  local_58 = &_LC2;
  local_50 = 2;
  String::parse_latin1((StrRange *)&local_78);
  itos((long)&local_88);
  ::operator+((char *)&local_80,&_LC3);
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



/* Vector2i::operator Vector2() const */

void __thiscall Vector2i::operator_cast_to_Vector2(Vector2i *this)

{
  return;
}


