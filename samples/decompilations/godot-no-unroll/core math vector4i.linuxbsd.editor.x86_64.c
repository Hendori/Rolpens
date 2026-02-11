
/* Vector4i::min_axis_index() const */

undefined1 __thiscall Vector4i::min_axis_index(Vector4i *this)

{
  undefined1 uVar1;
  int iVar2;
  
  uVar1 = *(int *)(this + 4) <= *(int *)this;
  iVar2 = *(int *)(this + 4);
  if (!(bool)uVar1) {
    iVar2 = *(int *)this;
  }
  if (iVar2 < *(int *)(this + 8)) {
    if (*(int *)(this + 0xc) <= iVar2) {
      uVar1 = 3;
    }
    return uVar1;
  }
  uVar1 = 2;
  if (*(int *)(this + 0xc) <= *(int *)(this + 8)) {
    uVar1 = 3;
  }
  return uVar1;
}



/* Vector4i::max_axis_index() const */

undefined1 __thiscall Vector4i::max_axis_index(Vector4i *this)

{
  undefined1 uVar1;
  int iVar2;
  
  uVar1 = *(int *)this < *(int *)(this + 4);
  iVar2 = *(int *)(this + 4);
  if (!(bool)uVar1) {
    iVar2 = *(int *)this;
  }
  if (*(int *)(this + 8) <= iVar2) {
    if (iVar2 < *(int *)(this + 0xc)) {
      uVar1 = 3;
    }
    return uVar1;
  }
  uVar1 = 2;
  if (*(int *)(this + 8) < *(int *)(this + 0xc)) {
    uVar1 = 3;
  }
  return uVar1;
}



/* Vector4i::clamp(Vector4i const&, Vector4i const&) const */

undefined1  [16] __thiscall Vector4i::clamp(Vector4i *this,Vector4i *param_1,Vector4i *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 auVar7 [16];
  
  iVar1 = *(int *)(this + 0xc);
  iVar2 = *(int *)(this + 8);
  iVar3 = *(int *)(this + 4);
  iVar4 = *(int *)this;
  iVar6 = *(int *)(param_2 + 0xc);
  if (iVar1 < *(int *)(param_2 + 0xc)) {
    iVar6 = iVar1;
  }
  iVar5 = *(int *)(param_1 + 0xc);
  if (*(int *)(param_1 + 0xc) <= iVar1) {
    iVar5 = iVar6;
  }
  iVar1 = *(int *)(param_2 + 8);
  if (iVar2 < *(int *)(param_2 + 8)) {
    iVar1 = iVar2;
  }
  iVar6 = *(int *)(param_1 + 8);
  if (*(int *)(param_1 + 8) <= iVar2) {
    iVar6 = iVar1;
  }
  iVar1 = *(int *)(param_2 + 4);
  if (iVar3 < *(int *)(param_2 + 4)) {
    iVar1 = iVar3;
  }
  iVar2 = *(int *)(param_1 + 4);
  if (*(int *)(param_1 + 4) <= iVar3) {
    iVar2 = iVar1;
  }
  iVar1 = *(int *)param_2;
  if (iVar4 < *(int *)param_2) {
    iVar1 = iVar4;
  }
  iVar3 = *(int *)param_1;
  if (*(int *)param_1 <= iVar4) {
    iVar3 = iVar1;
  }
  auVar7._4_4_ = iVar2;
  auVar7._0_4_ = iVar3;
  auVar7._12_4_ = iVar5;
  auVar7._8_4_ = iVar6;
  return auVar7;
}



/* Vector4i::clampi(int, int) const */

undefined1  [16] __thiscall Vector4i::clampi(Vector4i *this,int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  
  uVar5 = *(uint *)(this + 0xc);
  uVar1 = *(uint *)(this + 8);
  uVar2 = *(uint *)(this + 4);
  uVar3 = *(uint *)this;
  uVar4 = param_2;
  if ((int)uVar5 <= param_2) {
    uVar4 = uVar5;
  }
  uVar6 = (ulong)uVar4;
  if ((int)uVar5 < param_1) {
    uVar6 = (ulong)(uint)param_1;
  }
  uVar5 = param_2;
  if ((int)uVar1 <= param_2) {
    uVar5 = uVar1;
  }
  if ((int)uVar1 < param_1) {
    uVar5 = param_1;
  }
  uVar1 = param_2;
  if ((int)uVar2 <= param_2) {
    uVar1 = uVar2;
  }
  uVar7 = (ulong)uVar1;
  if ((int)uVar2 < param_1) {
    uVar7 = (ulong)(uint)param_1;
  }
  if ((int)uVar3 <= param_2) {
    param_2 = uVar3;
  }
  if (param_1 <= (int)uVar3) {
    param_1 = param_2;
  }
  auVar8._0_8_ = (ulong)(uint)param_1 | uVar7 << 0x20;
  auVar8._8_8_ = (ulong)uVar5 | uVar6 << 0x20;
  return auVar8;
}



/* Vector4i::snapped(Vector4i const&) const */

undefined1  [16] __thiscall Vector4i::snapped(Vector4i *this,Vector4i *param_1)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar2 = (double)Math::snapped((double)*(int *)(this + 0xc),(double)*(int *)(param_1 + 0xc));
  dVar3 = (double)Math::snapped((double)*(int *)(this + 8),(double)*(int *)(param_1 + 8));
  dVar4 = (double)Math::snapped((double)*(int *)(this + 4),(double)*(int *)(param_1 + 4));
  dVar5 = (double)Math::snapped((double)*(int *)this,(double)*(int *)param_1);
  auVar1._12_4_ = (int)dVar2;
  auVar1._8_4_ = (int)dVar3;
  auVar1._4_4_ = (int)dVar4;
  auVar1._0_4_ = (int)dVar5;
  return auVar1;
}



/* Vector4i::snappedi(int) const */

undefined1  [16] __thiscall Vector4i::snappedi(Vector4i *this,int param_1)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar5 = (double)param_1;
  dVar2 = (double)Math::snapped((double)*(int *)(this + 0xc),dVar5);
  dVar3 = (double)Math::snapped((double)*(int *)(this + 8),dVar5);
  dVar4 = (double)Math::snapped((double)*(int *)(this + 4),dVar5);
  dVar5 = (double)Math::snapped((double)*(int *)this,dVar5);
  auVar1._12_4_ = (int)dVar2;
  auVar1._8_4_ = (int)dVar3;
  auVar1._4_4_ = (int)dVar4;
  auVar1._0_4_ = (int)dVar5;
  return auVar1;
}



/* Vector4i::operator String() const */

Vector4i * __thiscall Vector4i::operator_cast_to_String(Vector4i *this)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
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
  local_58 = &_LC0;
  local_60 = 0;
  local_50 = 1;
  String::parse_latin1((StrRange *)&local_60);
  itos((long)&local_68);
  local_58 = &_LC1;
  local_78 = 0;
  local_50 = 2;
  String::parse_latin1((StrRange *)&local_78);
  itos((long)&local_88);
  local_58 = &_LC1;
  local_98 = 0;
  local_50 = 2;
  String::parse_latin1((StrRange *)&local_98);
  itos((long)&local_a8);
  local_58 = &_LC1;
  local_b8 = 0;
  local_50 = 2;
  String::parse_latin1((StrRange *)&local_b8);
  itos((long)&local_c8);
  operator+((char *)&local_c0,&_LC2);
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



/* Vector4i::operator Vector4() const */

undefined1  [16] __thiscall Vector4i::operator_cast_to_Vector4(Vector4i *this)

{
  undefined1 auVar1 [16];
  
  auVar1._4_4_ = (float)*(int *)(this + 4);
  auVar1._0_4_ = (float)*(int *)this;
  auVar1._8_4_ = (float)*(int *)(this + 8);
  auVar1._12_4_ = (float)*(int *)(this + 0xc);
  return auVar1;
}



/* Vector4i::Vector4i(Vector4 const&) */

void __thiscall Vector4i::Vector4i(Vector4i *this,Vector4 *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *(float *)(param_1 + 4);
  fVar2 = *(float *)(param_1 + 8);
  fVar3 = *(float *)(param_1 + 0xc);
  *(int *)this = (int)*(float *)param_1;
  *(int *)(this + 4) = (int)fVar1;
  *(int *)(this + 8) = (int)fVar2;
  *(int *)(this + 0xc) = (int)fVar3;
  return;
}


