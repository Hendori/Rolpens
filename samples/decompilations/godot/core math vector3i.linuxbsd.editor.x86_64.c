
/* Vector3i::min_axis_index() const */

char __thiscall Vector3i::min_axis_index(Vector3i *this)

{
  if (*(int *)this < *(int *)(this + 4)) {
    return (*(int *)(this + 8) <= *(int *)this) * '\x02';
  }
  return (*(int *)(this + 8) <= *(int *)(this + 4)) + '\x01';
}



/* Vector3i::max_axis_index() const */

char __thiscall Vector3i::max_axis_index(Vector3i *this)

{
  if (*(int *)this < *(int *)(this + 4)) {
    return (*(int *)(this + 4) < *(int *)(this + 8)) + '\x01';
  }
  return (*(int *)this < *(int *)(this + 8)) * '\x02';
}



/* Vector3i::clamp(Vector3i const&, Vector3i const&) const */

undefined8 __thiscall Vector3i::clamp(Vector3i *this,Vector3i *param_1,Vector3i *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long in_FS_OFFSET;
  
  iVar1 = *(int *)(this + 8);
  iVar4 = *(int *)(this + 4);
  iVar2 = *(int *)this;
  iVar5 = *(int *)(param_2 + 8);
  if (iVar1 < *(int *)(param_2 + 8)) {
    iVar5 = iVar1;
  }
  iVar3 = *(int *)(param_1 + 8);
  if (*(int *)(param_1 + 8) <= iVar1) {
    iVar3 = iVar5;
  }
  iVar1 = *(int *)(param_2 + 4);
  if (iVar4 < *(int *)(param_2 + 4)) {
    iVar1 = iVar4;
  }
  iVar5 = *(int *)(param_1 + 4);
  if (*(int *)(param_1 + 4) <= iVar4) {
    iVar5 = iVar1;
  }
  iVar1 = *(int *)param_2;
  if (iVar2 < *(int *)param_2) {
    iVar1 = iVar2;
  }
  iVar4 = *(int *)param_1;
  if (*(int *)param_1 <= iVar2) {
    iVar4 = iVar1;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
    return CONCAT44(iVar5,iVar4);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar5,param_1,iVar3);
}



/* Vector3i::clampi(int, int) const */

undefined8 __thiscall Vector3i::clampi(Vector3i *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long in_FS_OFFSET;
  
  iVar4 = *(int *)(this + 8);
  iVar1 = *(int *)(this + 4);
  iVar2 = *(int *)this;
  iVar3 = param_2;
  if (iVar4 <= param_2) {
    iVar3 = iVar4;
  }
  if (iVar4 < param_1) {
    iVar3 = param_1;
  }
  iVar4 = param_2;
  if (iVar1 <= param_2) {
    iVar4 = iVar1;
  }
  if (iVar1 < param_1) {
    iVar4 = param_1;
  }
  if (iVar2 <= param_2) {
    param_2 = iVar2;
  }
  if (param_1 <= iVar2) {
    param_1 = param_2;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
    return CONCAT44(iVar4,param_1);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2,param_1,iVar3);
}



/* Vector3i::snapped(Vector3i const&) const */

undefined1  [16] __thiscall Vector3i::snapped(Vector3i *this,Vector3i *param_1)

{
  long lVar1;
  long in_FS_OFFSET;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  dVar2 = (double)Math::snapped((double)*(int *)(this + 8),(double)*(int *)(param_1 + 8));
  dVar3 = (double)Math::snapped((double)*(int *)(this + 4),(double)*(int *)(param_1 + 4));
  dVar4 = (double)Math::snapped((double)*(int *)this,(double)*(int *)param_1);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar5._8_4_ = (int)dVar2;
    auVar5._4_4_ = (int)dVar3;
    auVar5._0_4_ = (int)dVar4;
    auVar5._12_4_ = 0;
    return auVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Vector3i::snappedi(int) const */

undefined1  [16] __thiscall Vector3i::snappedi(Vector3i *this,int param_1)

{
  long lVar1;
  long in_FS_OFFSET;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  
  dVar4 = (double)param_1;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  dVar2 = (double)Math::snapped((double)*(int *)(this + 8),dVar4);
  dVar3 = (double)Math::snapped((double)*(int *)(this + 4),dVar4);
  dVar4 = (double)Math::snapped((double)*(int *)this,dVar4);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar5._8_4_ = (int)dVar2;
    auVar5._4_4_ = (int)dVar3;
    auVar5._0_4_ = (int)dVar4;
    auVar5._12_4_ = 0;
    return auVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Vector3i::operator String() const */

Vector3i * __thiscall Vector3i::operator_cast_to_String(Vector3i *this)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
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
  local_58 = &_LC0;
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
  operator+((char *)&local_a0,&_LC2);
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



/* Vector3i::operator Vector3() const */

void __thiscall Vector3i::operator_cast_to_Vector3(Vector3i *this)

{
  long in_FS_OFFSET;
  
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


