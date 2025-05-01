
/* Face3::intersects_ray(Vector3 const&, Vector3 const&, Vector3*) const */

undefined8 __thiscall
Face3::intersects_ray(Face3 *this,Vector3 *param_1,Vector3 *param_2,Vector3 *param_3)

{
  float fVar1;
  undefined8 uVar2;
  undefined8 uVar3;
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
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  fVar8 = *(float *)this;
  fVar16 = *(float *)(this + 4);
  fVar9 = (float)*(undefined8 *)param_2;
  fVar15 = *(float *)(this + 0x1c) - fVar16;
  fVar18 = (float)((ulong)*(undefined8 *)param_2 >> 0x20);
  fVar17 = *(float *)(this + 8);
  fVar10 = *(float *)(this + 0x18) - fVar8;
  fVar1 = *(float *)(param_2 + 8);
  uVar3 = 0;
  uVar2 = 0;
  fVar4 = *(float *)(this + 0x14) - fVar17;
  fVar14 = *(float *)(this + 0x20) - fVar17;
  fVar13 = *(float *)(this + 0xc) - fVar8;
  fVar5 = *(float *)(this + 0x10) - fVar16;
  fVar11 = fVar9 * fVar15 - fVar18 * fVar10;
  fVar6 = fVar1 * fVar10 - fVar9 * fVar14;
  fVar12 = fVar18 * fVar14 - fVar1 * fVar15;
  fVar7 = fVar5 * fVar6 + fVar13 * fVar12 + fVar4 * fVar11;
  if (_LC0 <= ABS(fVar7)) {
    fVar7 = _LC1 / fVar7;
    fVar19 = (float)*(undefined8 *)param_1;
    fVar8 = fVar19 - fVar8;
    fVar17 = *(float *)(param_1 + 8) - fVar17;
    fVar20 = (float)((ulong)*(undefined8 *)param_1 >> 0x20);
    fVar16 = fVar20 - fVar16;
    fVar6 = (fVar6 * fVar16 + fVar12 * fVar8 + fVar11 * fVar17) * fVar7;
    if ((0.0 <= fVar6) && (fVar6 <= _LC1)) {
      fVar11 = fVar5 * fVar8 - fVar13 * fVar16;
      fVar12 = fVar13 * fVar17 - fVar8 * fVar4;
      fVar8 = fVar4 * fVar16 - fVar5 * fVar17;
      fVar16 = (fVar9 * fVar8 + fVar18 * fVar12 + fVar1 * fVar11) * fVar7;
      uVar3 = uVar2;
      if ((0.0 <= fVar16) &&
         ((fVar6 + fVar16 <= _LC1 &&
          (fVar7 = (fVar14 * fVar11 + fVar10 * fVar8 + fVar15 * fVar12) * fVar7, _LC0 < fVar7)))) {
        if (param_3 != (Vector3 *)0x0) {
          *(float *)(param_3 + 8) = fVar1 * fVar7 + *(float *)(param_1 + 8);
          *(ulong *)param_3 = CONCAT44(fVar7 * fVar18 + fVar20,fVar7 * fVar9 + fVar19);
        }
        uVar3 = 1;
      }
    }
  }
  return uVar3;
}



/* Face3::intersects_segment(Vector3 const&, Vector3 const&, Vector3*) const */

undefined8 __thiscall
Face3::intersects_segment(Face3 *this,Vector3 *param_1,Vector3 *param_2,Vector3 *param_3)

{
  float fVar1;
  undefined8 uVar2;
  undefined8 uVar3;
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
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  fVar1 = *(float *)(param_1 + 8);
  fVar9 = *(float *)this;
  fVar19 = (float)*(undefined8 *)param_1;
  fVar16 = (float)*(undefined8 *)param_2 - fVar19;
  fVar20 = (float)((ulong)*(undefined8 *)param_1 >> 0x20);
  fVar17 = (float)((ulong)*(undefined8 *)param_2 >> 0x20) - fVar20;
  fVar18 = *(float *)(this + 4);
  fVar8 = *(float *)(this + 8);
  fVar15 = *(float *)(this + 0x1c) - fVar18;
  fVar4 = *(float *)(this + 0x14) - fVar8;
  uVar3 = 0;
  uVar2 = 0;
  fVar14 = *(float *)(this + 0x20) - fVar8;
  fVar13 = *(float *)(param_2 + 8) - fVar1;
  fVar10 = *(float *)(this + 0x18) - fVar9;
  fVar5 = *(float *)(this + 0x10) - fVar18;
  fVar21 = *(float *)(this + 0xc) - fVar9;
  fVar11 = fVar16 * fVar15 - fVar17 * fVar10;
  fVar6 = fVar13 * fVar10 - fVar16 * fVar14;
  fVar12 = fVar17 * fVar14 - fVar13 * fVar15;
  fVar7 = fVar5 * fVar6 + fVar21 * fVar12 + fVar4 * fVar11;
  if (_LC0 <= ABS(fVar7)) {
    fVar7 = _LC1 / fVar7;
    fVar8 = fVar1 - fVar8;
    fVar18 = fVar20 - fVar18;
    fVar9 = fVar19 - fVar9;
    fVar6 = (fVar6 * fVar18 + fVar12 * fVar9 + fVar11 * fVar8) * fVar7;
    if ((0.0 <= fVar6) && (fVar6 <= _LC1)) {
      fVar11 = fVar5 * fVar9 - fVar21 * fVar18;
      fVar12 = fVar21 * fVar8 - fVar9 * fVar4;
      fVar9 = fVar4 * fVar18 - fVar5 * fVar8;
      fVar18 = (fVar16 * fVar9 + fVar17 * fVar12 + fVar13 * fVar11) * fVar7;
      uVar3 = uVar2;
      if ((0.0 <= fVar18) &&
         (((fVar6 + fVar18 <= _LC1 &&
           (fVar7 = (fVar14 * fVar11 + fVar10 * fVar9 + fVar15 * fVar12) * fVar7, _LC0 < fVar7)) &&
          (fVar7 <= _LC1)))) {
        if (param_3 != (Vector3 *)0x0) {
          *(float *)(param_3 + 8) = fVar13 * fVar7 + fVar1;
          *(ulong *)param_3 = CONCAT44(fVar7 * fVar17 + fVar20,fVar7 * fVar16 + fVar19);
        }
        uVar3 = 1;
      }
    }
  }
  return uVar3;
}



/* Face3::is_degenerate() const */

bool __thiscall Face3::is_degenerate(Face3 *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar4 = *(float *)this - *(float *)(this + 0xc);
  fVar1 = *(float *)(this + 4) - *(float *)(this + 0x10);
  fVar2 = *(float *)this - *(float *)(this + 0x18);
  fVar3 = *(float *)(this + 8) - *(float *)(this + 0x14);
  fVar6 = *(float *)(this + 4) - *(float *)(this + 0x1c);
  fVar7 = *(float *)(this + 8) - *(float *)(this + 0x20);
  fVar5 = fVar4 * fVar6 - fVar1 * fVar2;
  fVar2 = fVar2 * fVar3 - fVar4 * fVar7;
  fVar1 = fVar1 * fVar7 - fVar3 * fVar6;
  return fVar1 * fVar1 + fVar2 * fVar2 + fVar5 * fVar5 < _LC3;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Face3::split_by_plane(Plane const&, Face3*, bool*) const */

int __thiscall Face3::split_by_plane(Face3 *this,Plane *param_1,Face3 *param_2,bool *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  char cVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  undefined8 *extraout_RDX;
  Vector3 *pVVar8;
  int iVar9;
  long lVar10;
  uint uVar11;
  long in_FS_OFFSET;
  float fVar12;
  float fVar13;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_9c;
  undefined4 local_94;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  cVar4 = is_degenerate(this);
  if (cVar4 == '\0') {
    local_a0 = 0;
    iVar7 = 0;
    local_94 = 0;
    iVar9 = 0;
    local_a8 = 0;
    uVar11 = 1;
    local_9c = 0;
    local_90 = 0;
    local_88 = 0;
    local_84 = 0;
    local_7c = 0;
    local_78 = 0;
    local_70 = 0;
    local_6c = 0;
    local_64 = 0;
    local_60 = 0;
    local_58 = 0;
    local_54 = 0;
    local_4c = 0;
    pVVar8 = (Vector3 *)this;
    do {
      fVar12 = *(float *)pVVar8 * *(float *)param_1 +
               *(float *)((Vector3 *)param_1 + 4) * *(float *)(pVVar8 + 4) +
               *(float *)((Vector3 *)param_1 + 8) * *(float *)(pVVar8 + 8);
      fVar13 = fVar12 - *(float *)((Vector3 *)param_1 + 0xc);
      if (fVar13 < 0.0) {
        fVar13 = (float)((uint)fVar13 ^ __LC7);
      }
      if (_LC0 < fVar13) {
        if (*(float *)((Vector3 *)param_1 + 0xc) < fVar12) {
          if (3 < iVar9) {
            _err_print_error("split_by_plane","core/math/face3.cpp",0x37,
                             "Condition \"above_count >= 4\" is true. Returning: 0",0,0);
            iVar9 = 0;
            goto LAB_001007b6;
          }
          *(undefined8 *)((long)&local_a8 + (long)iVar9 * 0xc) = *(undefined8 *)pVVar8;
          (&local_a0)[(long)iVar9 * 3] = *(undefined4 *)(pVVar8 + 8);
          iVar9 = iVar9 + 1;
        }
        else {
          if (3 < iVar7) {
            _err_print_error("split_by_plane","core/math/face3.cpp",0x3c,
                             "Condition \"below_count >= 4\" is true. Returning: 0",0,0);
            iVar9 = 0;
            goto LAB_001007b6;
          }
          *(undefined8 *)((long)&local_78 + (long)iVar7 * 0xc) = *(undefined8 *)pVVar8;
          (&local_70)[(long)iVar7 * 3] = *(undefined4 *)(pVVar8 + 8);
          iVar7 = iVar7 + 1;
        }
        cVar4 = Plane::intersects_segment
                          ((Vector3 *)param_1,pVVar8,(Vector3 *)this + (long)(int)(uVar11 % 3) * 0xc
                          );
        lVar5 = (long)iVar9;
        lVar10 = (long)iVar7;
        if (cVar4 != '\0') {
          if (3 < iVar9) {
            _err_print_error("split_by_plane","core/math/face3.cpp",0x48,
                             "Condition \"above_count >= 4\" is true. Returning: 0",0,0);
            iVar9 = 0;
            goto LAB_001007b6;
          }
          iVar9 = iVar9 + 1;
          *(undefined8 *)((long)&local_a8 + lVar5 * 0xc) = 0;
          (&local_a0)[lVar5 * 3] = 0;
          if (3 < iVar7) {
            _err_print_error("split_by_plane","core/math/face3.cpp",0x4a,
                             "Condition \"below_count >= 4\" is true. Returning: 0",0,0);
            iVar9 = 0;
            goto LAB_001007b6;
          }
          iVar7 = iVar7 + 1;
          *(undefined8 *)((long)&local_78 + lVar10 * 0xc) = 0;
          (&local_70)[lVar10 * 3] = 0;
        }
      }
      else {
        if (3 < iVar9) {
          _err_print_error("split_by_plane","core/math/face3.cpp",0x2f,
                           "Condition \"above_count >= 4\" is true. Returning: 0",0,0);
          iVar9 = 0;
          goto LAB_001007b6;
        }
        uVar3 = *(undefined8 *)pVVar8;
        uVar2 = *(undefined4 *)(pVVar8 + 8);
        *(undefined8 *)((long)&local_a8 + (long)iVar9 * 0xc) = uVar3;
        (&local_a0)[(long)iVar9 * 3] = uVar2;
        if (3 < iVar7) {
          _err_print_error("split_by_plane","core/math/face3.cpp",0x31,
                           "Condition \"below_count >= 4\" is true. Returning: 0",0,0);
          iVar9 = 0;
          goto LAB_001007b6;
        }
        lVar5 = (long)iVar7;
        iVar7 = iVar7 + 1;
        *(undefined8 *)((long)&local_78 + lVar5 * 0xc) = uVar3;
        (&local_70)[lVar5 * 3] = uVar2;
        iVar9 = iVar9 + 1;
      }
      uVar11 = uVar11 + 1;
      pVVar8 = pVVar8 + 0xc;
    } while (uVar11 != 4);
    if ((iVar9 < 4) || (iVar7 < 4)) {
      iVar6 = 0;
      if (2 < iVar9) {
        uStack_cc = (undefined4)local_9c;
        uStack_c8 = (undefined4)((ulong)local_9c >> 0x20);
        iVar6 = 1;
        *(undefined4 *)(extraout_RDX + 4) = local_88;
        *extraout_RDX = local_a8;
        extraout_RDX[1] = CONCAT44(uStack_cc,local_a0);
        extraout_RDX[2] = CONCAT44(local_94,uStack_c8);
        extraout_RDX[3] = local_90;
        *param_3 = true;
        if (iVar9 == 4) {
          iVar6 = 2;
          uStack_cc = (undefined4)local_84;
          uStack_c8 = (undefined4)((ulong)local_84 >> 0x20);
          *(undefined4 *)((long)extraout_RDX + 0x44) = local_a0;
          *(undefined8 *)((long)extraout_RDX + 0x24) = local_90;
          *(ulong *)((long)extraout_RDX + 0x2c) = CONCAT44(uStack_cc,local_88);
          *(ulong *)((long)extraout_RDX + 0x34) = CONCAT44(local_7c,uStack_c8);
          *(undefined8 *)((long)extraout_RDX + 0x3c) = local_a8;
          param_3[1] = true;
        }
      }
      iVar9 = iVar6;
      if (2 < iVar7) {
        uStack_cc = (undefined4)local_6c;
        uStack_c8 = (undefined4)((ulong)local_6c >> 0x20);
        lVar5 = (long)iVar6 * 0x24;
        *(undefined4 *)((long)extraout_RDX + lVar5 + 0x20) = local_58;
        *(undefined8 *)((long)extraout_RDX + lVar5) = local_78;
        ((undefined8 *)((long)extraout_RDX + lVar5))[1] = CONCAT44(uStack_cc,local_70);
        puVar1 = (undefined8 *)((long)extraout_RDX + lVar5 + 0x10);
        *puVar1 = CONCAT44(local_64,uStack_c8);
        puVar1[1] = local_60;
        param_3[iVar6] = false;
        iVar9 = iVar6 + 1;
        if (iVar7 == 4) {
          lVar10 = (long)iVar9;
          iVar9 = iVar6 + 2;
          uStack_cc = (undefined4)local_54;
          uStack_c8 = (undefined4)((ulong)local_54 >> 0x20);
          *(undefined4 *)((long)extraout_RDX + lVar5 + 0x44) = local_70;
          puVar1 = (undefined8 *)((long)extraout_RDX + lVar5 + 0x24);
          *puVar1 = local_60;
          puVar1[1] = CONCAT44(uStack_cc,local_58);
          puVar1 = (undefined8 *)((long)extraout_RDX + lVar5 + 0x34);
          *puVar1 = CONCAT44(local_4c,uStack_c8);
          puVar1[1] = local_78;
          param_3[lVar10] = false;
        }
      }
    }
    else {
      _err_print_error("split_by_plane","core/math/face3.cpp",0x51,
                       "Condition \"above_count >= 4 && below_count >= 4\" is true. Returning: 0",0,
                       0);
      iVar9 = 0;
    }
  }
  else {
    _err_print_error("split_by_plane","core/math/face3.cpp",0x24,
                     "Condition \"is_degenerate()\" is true. Returning: 0",0,0);
    iVar9 = 0;
  }
LAB_001007b6:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar9;
}



/* Face3::get_random_point_inside() const */

void Face3::get_random_point_inside(void)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  Math::random(0.0,_LC11);
  Math::random(0.0,_LC11);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Face3::get_plane(ClockDirection) const */

void Face3::get_plane(void)

{
  long in_FS_OFFSET;
  
  if (*(long *)(in_FS_OFFSET + 0x28) != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Face3::get_area() const */

float __thiscall Face3::get_area(Face3 *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar3 = *(float *)(this + 4) - *(float *)(this + 0x10);
  fVar5 = *(float *)this - *(float *)(this + 0xc);
  fVar6 = *(float *)(this + 4) - *(float *)(this + 0x1c);
  fVar1 = *(float *)this - *(float *)(this + 0x18);
  fVar7 = *(float *)(this + 8) - *(float *)(this + 0x20);
  fVar4 = *(float *)(this + 8) - *(float *)(this + 0x14);
  fVar2 = fVar1 * fVar4 - fVar5 * fVar7;
  fVar4 = fVar3 * fVar7 - fVar4 * fVar6;
  fVar1 = fVar5 * fVar6 - fVar3 * fVar1;
  return SQRT(fVar4 * fVar4 + fVar2 * fVar2 + fVar1 * fVar1) * _LC13;
}



/* Face3::operator String() const */

Face3 * __thiscall Face3::operator_cast_to_String(Face3 *this)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  long in_FS_OFFSET;
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
  Vector3::operator_cast_to_String((Vector3 *)&local_60);
  local_58 = &_LC14;
  local_68 = 0;
  local_50 = 2;
  String::parse_latin1((StrRange *)&local_68);
  Vector3::operator_cast_to_String((Vector3 *)&local_78);
  local_58 = &_LC14;
  local_88 = 0;
  local_50 = 2;
  String::parse_latin1((StrRange *)&local_88);
  Vector3::operator_cast_to_String((Vector3 *)&local_98);
  local_a0 = 0;
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



/* Face3::project_range(Vector3 const&, Transform3D const&, float&, float&) const */

void __thiscall
Face3::project_range
          (Face3 *this,Vector3 *param_1,Transform3D *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  
  iVar3 = 0;
  while( true ) {
    while( true ) {
      fVar4 = *(float *)this;
      fVar1 = *(float *)(this + 4);
      fVar2 = *(float *)(this + 8);
      fVar4 = (*(float *)param_2 * fVar4 + *(float *)(param_2 + 4) * fVar1 +
               *(float *)(param_2 + 8) * fVar2 + *(float *)(param_2 + 0x24)) * *(float *)param_1 +
              (*(float *)(param_2 + 0xc) * fVar4 + *(float *)(param_2 + 0x10) * fVar1 +
               *(float *)(param_2 + 0x14) * fVar2 + *(float *)(param_2 + 0x28)) *
              *(float *)(param_1 + 4) +
              (fVar4 * *(float *)(param_2 + 0x18) + fVar1 * *(float *)(param_2 + 0x1c) +
               fVar2 * *(float *)(param_2 + 0x20) + *(float *)(param_2 + 0x2c)) *
              *(float *)(param_1 + 8);
      if (iVar3 != 0) break;
      *param_4 = fVar4;
      this = this + 0xc;
      iVar3 = 1;
      *param_3 = fVar4;
    }
    if (*param_4 <= fVar4 && fVar4 != *param_4) {
      *param_4 = fVar4;
    }
    if (fVar4 < *param_3) {
      *param_3 = fVar4;
    }
    if (iVar3 == 2) break;
    this = this + 0xc;
    iVar3 = 2;
  }
  return;
}



/* Face3::intersects_aabb(AABB const&) const */

char __thiscall Face3::intersects_aabb(Face3 *this,AABB *param_1)

{
  float fVar1;
  undefined1 auVar2 [16];
  char cVar3;
  float *pfVar4;
  uint uVar5;
  long in_FS_OFFSET;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  ulong uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float local_e0;
  float local_dc;
  float local_d8;
  float fStack_d4;
  float local_d0;
  float local_c8;
  float fStack_c4;
  float local_c0;
  undefined8 local_b8;
  float local_b0;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float local_88;
  float local_84 [3];
  Transform3D local_78 [16];
  undefined1 local_68 [16];
  uint local_58;
  undefined8 local_54;
  undefined4 local_4c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = (Transform3D  [16])get_plane(this,0);
  cVar3 = AABB::intersects_plane((Plane *)param_1);
  if (cVar3 != '\0') {
    fVar16 = *(float *)this;
    fVar10 = *(float *)(this + 0xc);
    fVar11 = fVar10;
    fVar12 = fVar16;
    if (fVar10 <= fVar16) {
      fVar11 = fVar16;
      fVar12 = (float)(~-(uint)(fVar10 < fVar16) & (uint)fVar16 |
                      -(uint)(fVar10 < fVar16) & (uint)fVar10);
    }
    fVar13 = *(float *)(this + 0x18);
    fVar6 = fVar13;
    if (fVar13 <= fVar11) {
      fVar6 = fVar11;
    }
    fVar11 = fVar13;
    if (fVar12 <= fVar13) {
      fVar11 = fVar12;
    }
    if ((*(float *)param_1 <= fVar6) && (fVar11 <= *(float *)param_1 + *(float *)(param_1 + 0xc))) {
      fVar11 = *(float *)(this + 4);
      fVar12 = *(float *)(this + 0x10);
      fVar6 = fVar11;
      fVar7 = fVar12;
      if (fVar12 <= fVar11) {
        fVar6 = (float)(~-(uint)(fVar12 < fVar11) & (uint)fVar11 |
                       -(uint)(fVar12 < fVar11) & (uint)fVar12);
        fVar7 = fVar11;
      }
      fVar18 = *(float *)(this + 0x1c);
      fVar19 = fVar18;
      if (fVar18 <= fVar7) {
        fVar19 = fVar7;
      }
      fVar7 = fVar18;
      if (fVar6 <= fVar18) {
        fVar7 = fVar6;
      }
      if ((*(float *)(param_1 + 4) <= fVar19) &&
         (fVar7 <= *(float *)(param_1 + 4) + *(float *)(param_1 + 0x10))) {
        fVar6 = *(float *)(this + 8);
        fVar7 = *(float *)(this + 0x14);
        fVar19 = fVar7;
        fVar15 = fVar6;
        if (fVar7 <= fVar6) {
          fVar19 = fVar6;
          fVar15 = (float)(~-(uint)(fVar7 < fVar6) & (uint)fVar6 |
                          -(uint)(fVar7 < fVar6) & (uint)fVar7);
        }
        fVar1 = *(float *)(this + 0x20);
        fVar20 = fVar1;
        if (fVar1 <= fVar19) {
          fVar20 = fVar19;
        }
        fVar19 = fVar1;
        if (fVar15 <= fVar1) {
          fVar19 = fVar15;
        }
        if ((*(float *)(param_1 + 8) <= fVar20) &&
           (fVar19 <= *(float *)(param_1 + 8) + *(float *)(param_1 + 0x14))) {
          local_a8 = fVar16 - fVar10;
          fStack_a0 = fVar6 - fVar7;
          fStack_9c = fVar10 - fVar13;
          fStack_a4 = fVar11 - fVar12;
          fStack_94 = fVar7 - fVar1;
          local_98 = fVar12 - fVar18;
          fStack_90 = fVar13 - fVar16;
          fStack_8c = fVar18 - fVar11;
          local_88 = fVar1 - fVar6;
          uVar5 = 0;
          do {
            local_d8 = 0.0;
            fStack_d4 = 0.0;
            local_d0 = 0.0;
            local_c8 = 0.0;
            fStack_c4 = 0.0;
            local_c0 = 0.0;
            AABB::get_edge((int)param_1,(Vector3 *)(ulong)uVar5,(Vector3 *)&local_d8);
            auVar14._0_8_ = CONCAT44(local_d0 - local_c0,fStack_d4 - fStack_c4);
            auVar14._8_8_ = 0;
            fVar10 = local_d0 - local_c0;
            fVar11 = local_d8 - local_c8;
            fVar12 = 0.0;
            fVar13 = 0.0;
            pfVar4 = &local_a8;
            uVar9 = _LC1;
            fVar16 = fVar11;
            uVar17 = auVar14._0_8_;
            do {
              fVar6 = (float)*(undefined8 *)(pfVar4 + 1);
              auVar8._0_4_ = pfVar4[2] * auVar14._0_4_ - fVar10 * fVar6;
              auVar8._4_4_ = *pfVar4 * auVar14._4_4_ -
                             fVar11 * (float)((ulong)*(undefined8 *)(pfVar4 + 1) >> 0x20);
              auVar8._8_4_ = auVar14._8_4_ * 0.0 - fVar12 * 0.0;
              auVar8._12_4_ = auVar14._12_4_ * 0.0 - fVar13 * 0.0;
              fVar6 = fVar6 * fVar16 - *pfVar4 * (float)uVar17;
              fVar7 = auVar8._0_4_ * auVar8._0_4_ + auVar8._4_4_ * auVar8._4_4_ + fVar6 * fVar6;
              if (_LC15 <= fVar7) {
                fVar7 = SQRT(fVar7);
                local_54 = 0;
                local_b0 = fVar6 / fVar7;
                local_4c = 0;
                auVar2._4_4_ = fVar7;
                auVar2._0_4_ = fVar7;
                auVar2._8_4_ = (int)_LC16;
                auVar2._12_4_ = (int)((ulong)_LC16 >> 0x20);
                auVar8 = divps(auVar8,auVar2);
                local_b8 = auVar8._0_8_;
                local_78 = (Transform3D  [16])ZEXT416(_LC1);
                fVar7 = ABS(auVar8._0_4_) * _LC13 * *(float *)(param_1 + 0xc) +
                        ABS(auVar8._4_4_) * _LC13 * *(float *)(param_1 + 0x10) +
                        ABS(local_b0) * _LC13 * *(float *)(param_1 + 0x14);
                local_68 = ZEXT416(_LC1);
                fVar6 = local_b0 * (_LC13 * *(float *)(param_1 + 0x14) + *(float *)(param_1 + 8)) +
                        (_LC13 * *(float *)(param_1 + 0xc) + *(float *)param_1) * auVar8._0_4_ +
                        (_LC13 * *(float *)(param_1 + 0x10) + *(float *)(param_1 + 4)) *
                        auVar8._4_4_;
                fVar18 = fVar6 - fVar7;
                fVar7 = fVar7 + fVar6;
                local_58 = uVar9;
                project_range(this,(Vector3 *)&local_b8,local_78,&local_e0,&local_dc);
                if ((fVar7 < local_e0) || (local_dc < fVar18)) goto LAB_001017f0;
              }
              pfVar4 = pfVar4 + 3;
            } while (local_84 != pfVar4);
            uVar5 = uVar5 + 1;
          } while (uVar5 != 0xc);
          goto LAB_00101795;
        }
      }
    }
  }
LAB_001017f0:
  cVar3 = '\0';
LAB_00101795:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return cVar3;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Face3::get_support(Vector3 const&, Transform3D const&, Vector3*, int*, int) const */

void __thiscall
Face3::get_support(Face3 *this,Vector3 *param_1,Transform3D *param_2,Vector3 *param_3,int *param_4,
                  int param_5)

{
  Face3 *pFVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  Face3 *pFVar8;
  long in_FS_OFFSET;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar25 [12];
  float local_48;
  float fStack_44;
  
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  if (0 < param_5) {
    fVar14 = *(float *)(param_1 + 4);
    fVar11 = *(float *)param_1;
    fVar18 = *(float *)(param_2 + 0x20);
    fVar10 = *(float *)(param_1 + 8);
    fVar22 = *(float *)(param_2 + 0x10);
    fVar19 = *(float *)(param_2 + 0x1c);
    fVar16 = (float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20);
    fVar9 = (float)*(undefined8 *)(param_2 + 8);
    fVar12 = (float)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20);
    fVar17 = *(float *)(param_2 + 8) * fVar11 + fVar16 * fVar14 + fVar18 * fVar10;
    fVar21 = *(float *)(param_2 + 4);
    fVar15 = fVar21 * fVar11 + fVar22 * fVar14 + fVar10 * fVar19;
    fVar13 = (float)*(undefined8 *)param_2;
    fVar20 = *(float *)(param_2 + 0x18);
    fVar14 = fVar11 * *(float *)param_2 + fVar12 * fVar14 + fVar10 * fVar20;
    auVar25 = get_plane(this,0);
    local_48 = auVar25._0_4_;
    fStack_44 = auVar25._4_4_;
    if (__LC18 < (double)(local_48 * fVar14 + fStack_44 * fVar15 + auVar25._8_4_ * fVar17)) {
      lVar7 = 3;
      if (param_5 < 4) {
        lVar7 = (long)param_5;
      }
      *param_4 = (int)lVar7;
      pFVar8 = this + lVar7 * 0xc;
      while( true ) {
        uVar2 = *(undefined8 *)this;
        fVar14 = *(float *)(this + 8);
        this = this + 0xc;
        fVar11 = (float)uVar2;
        fVar10 = (float)((ulong)uVar2 >> 0x20);
        uVar2 = *(undefined8 *)(param_2 + 0x24);
        *(float *)(param_3 + 8) =
             fVar11 * fVar20 + fVar10 * fVar19 + fVar18 * fVar14 + *(float *)(param_2 + 0x2c);
        *(ulong *)param_3 =
             CONCAT44(fVar11 * fVar12 + fVar10 * fVar22 + fVar14 * fVar16 +
                      (float)((ulong)uVar2 >> 0x20),
                      fVar11 * fVar13 + fVar10 * fVar21 + fVar14 * fVar9 + (float)uVar2);
        if (this == pFVar8) break;
        fVar21 = *(float *)(param_2 + 4);
        fVar12 = (float)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20);
        fVar9 = (float)*(undefined8 *)(param_2 + 8);
        fVar16 = (float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20);
        fVar22 = *(float *)(param_2 + 0x10);
        fVar20 = *(float *)(param_2 + 0x18);
        fVar19 = *(float *)(param_2 + 0x1c);
        fVar18 = *(float *)(param_2 + 0x20);
        fVar13 = (float)*(undefined8 *)param_2;
        param_3 = param_3 + 0xc;
      }
    }
    else {
      lVar6 = 0;
      lVar7 = -1;
      pFVar8 = this;
      fVar11 = 0.0;
      while( true ) {
        while( true ) {
          fVar10 = *(float *)(pFVar8 + 4) * fVar15 + *(float *)pFVar8 * fVar14 +
                   *(float *)(pFVar8 + 8) * fVar17;
          if ((int)lVar6 != 0) break;
          pFVar8 = pFVar8 + 0xc;
          lVar7 = 0;
          lVar6 = 1;
          fVar11 = fVar10;
        }
        if (fVar11 < fVar10) {
          lVar7 = lVar6;
          fVar11 = fVar10;
        }
        if ((int)lVar6 == 2) break;
        pFVar8 = pFVar8 + 0xc;
        lVar6 = 2;
      }
      pFVar8 = this;
      uVar4 = 0;
      do {
        uVar5 = uVar4 + 1;
        if ((uVar4 == (uint)lVar7) || ((uint)lVar7 == uVar5)) {
          pFVar1 = this + (long)(int)(uVar5 % 3) * 0xc;
          fVar24 = *(float *)(pFVar8 + 4) - *(float *)(pFVar1 + 4);
          fVar11 = *(float *)pFVar8 - *(float *)pFVar1;
          fVar23 = *(float *)(pFVar8 + 8) - *(float *)(pFVar1 + 8);
          fVar10 = fVar11 * fVar11 + fVar24 * fVar24 + fVar23 * fVar23;
          if (fVar10 == 0.0) {
            fVar11 = fVar15 * 0.0 + fVar14 * 0.0 + fVar17 * 0.0;
          }
          else {
            fVar10 = SQRT(fVar10);
            fVar11 = (fVar11 / fVar10) * fVar14 + (fVar24 / fVar10) * fVar15 +
                     (fVar23 / fVar10) * fVar17;
            if (fVar11 < 0.0) {
              fVar11 = (float)((uint)fVar11 ^ __LC7);
            }
          }
          if ((double)fVar11 < _LC19) {
            if (2 < param_5) {
              param_5 = 2;
            }
            *param_4 = param_5;
            uVar5 = uVar4;
            while( true ) {
              fVar14 = *(float *)(this + (long)(int)(uVar5 % 3) * 0xc + 8);
              fVar11 = (float)*(undefined8 *)(this + (long)(int)(uVar5 % 3) * 0xc);
              fVar10 = (float)((ulong)*(undefined8 *)(this + (long)(int)(uVar5 % 3) * 0xc) >> 0x20);
              uVar2 = *(undefined8 *)(param_2 + 0x24);
              *(float *)(param_3 + 8) =
                   fVar11 * fVar20 + fVar10 * fVar19 + fVar18 * fVar14 + *(float *)(param_2 + 0x2c);
              *(ulong *)param_3 =
                   CONCAT44(fVar10 * fVar22 + fVar11 * fVar12 + fVar14 * fVar16 +
                            (float)((ulong)uVar2 >> 0x20),
                            fVar10 * fVar21 + fVar11 * fVar13 + fVar14 * fVar9 + (float)uVar2);
              if (param_5 + uVar4 == uVar5 + 1) break;
              param_3 = param_3 + 0xc;
              fVar21 = *(float *)(param_2 + 4);
              fVar12 = (float)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20);
              fVar9 = (float)*(undefined8 *)(param_2 + 8);
              fVar16 = (float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20);
              fVar22 = *(float *)(param_2 + 0x10);
              fVar20 = *(float *)(param_2 + 0x18);
              fVar19 = *(float *)(param_2 + 0x1c);
              fVar18 = *(float *)(param_2 + 0x20);
              fVar13 = (float)*(undefined8 *)param_2;
              uVar5 = uVar5 + 1;
            }
            goto LAB_00101b3c;
          }
        }
        pFVar8 = pFVar8 + 0xc;
        uVar4 = uVar5;
      } while (uVar5 != 3);
      *param_4 = 1;
      fVar14 = *(float *)(this + lVar7 * 0xc + 8);
      fVar11 = (float)*(undefined8 *)(this + lVar7 * 0xc);
      fVar10 = (float)((ulong)*(undefined8 *)(this + lVar7 * 0xc) >> 0x20);
      uVar2 = *(undefined8 *)(param_2 + 0x24);
      *(float *)(param_3 + 8) =
           fVar11 * fVar20 + fVar10 * fVar19 + fVar18 * fVar14 + *(float *)(param_2 + 0x2c);
      *(ulong *)param_3 =
           CONCAT44(fVar11 * fVar12 + fVar10 * fVar22 + fVar14 * fVar16 +
                    (float)((ulong)uVar2 >> 0x20),
                    fVar11 * fVar13 + fVar10 * fVar21 + fVar14 * fVar9 + (float)uVar2);
    }
  }
LAB_00101b3c:
  if (lVar3 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Face3::get_closest_point_to(Vector3 const&) const */

void __thiscall Face3::get_closest_point_to(Face3 *this,Vector3 *param_1)

{
  long in_FS_OFFSET;
  float fVar1;
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
  
  fVar1 = *(float *)(this + 8);
  fVar12 = (float)*(undefined8 *)this;
  fVar7 = (float)*(undefined8 *)(this + 0xc) - fVar12;
  fVar13 = (float)((ulong)*(undefined8 *)this >> 0x20);
  fVar8 = (float)((ulong)*(undefined8 *)(this + 0xc) >> 0x20) - fVar13;
  fVar9 = (float)*(undefined8 *)(this + 0x18) - fVar12;
  fVar10 = (float)((ulong)*(undefined8 *)(this + 0x18) >> 0x20) - fVar13;
  fVar5 = *(float *)(this + 0x14) - fVar1;
  fVar6 = *(float *)(this + 0x20) - fVar1;
  fVar4 = fVar7 * fVar7 + fVar8 * fVar8 + fVar5 * fVar5;
  fVar3 = fVar9 * fVar7 + fVar10 * fVar8 + fVar6 * fVar5;
  fVar11 = fVar6 * fVar6 + fVar10 * fVar10 + fVar9 * fVar9;
  fVar2 = fVar7 * (fVar12 - *(float *)param_1) + fVar8 * (fVar13 - *(float *)(param_1 + 4)) +
          (fVar1 - *(float *)(param_1 + 8)) * fVar5;
  fVar8 = (fVar12 - *(float *)param_1) * fVar9 + (fVar13 - *(float *)(param_1 + 4)) * fVar10 +
          (fVar1 - *(float *)(param_1 + 8)) * fVar6;
  fVar10 = fVar11 * fVar4 - fVar3 * fVar3;
  fVar6 = fVar8 * fVar3 - fVar2 * fVar11;
  fVar13 = fVar2 * fVar3 - fVar8 * fVar4;
  fVar1 = fVar7;
  fVar5 = fVar9;
  if (fVar6 + fVar13 < fVar10) {
    if (fVar6 < 0.0) {
      if ((0.0 <= fVar13) || (0.0 <= fVar2)) {
        fVar11 = (float)((uint)fVar8 ^ __LC7) / fVar11;
        if (fVar11 < 0.0) {
          fVar1 = fVar7 * 0.0;
          fVar5 = fVar9 * 0.0;
          goto LAB_00102020;
        }
        goto LAB_00102190;
      }
    }
    else if (0.0 <= fVar13) {
      fVar10 = _LC1 / fVar10;
      fVar1 = fVar6 * fVar10 * fVar7;
      fVar5 = fVar10 * fVar13 * fVar9;
      goto LAB_00102020;
    }
    fVar4 = (float)((uint)fVar2 ^ __LC7) / fVar4;
    if (fVar4 < 0.0) {
      fVar1 = fVar7 * 0.0;
      fVar5 = fVar9 * 0.0;
      goto LAB_00102020;
    }
LAB_001021e0:
    if (_LC1 < fVar4) {
      fVar5 = fVar9 * 0.0;
    }
    else {
      fVar1 = fVar4 * fVar7;
      fVar5 = fVar9 * 0.0;
    }
  }
  else {
    if (fVar6 < 0.0) {
      if (fVar8 + fVar11 <= fVar2 + fVar3) {
        fVar1 = fVar7 * 0.0;
        fVar11 = (float)((uint)fVar8 ^ __LC7) / fVar11;
        if (fVar11 < 0.0) {
          fVar5 = fVar9 * 0.0;
          goto LAB_00102020;
        }
LAB_00102190:
        if (_LC1 < fVar11) {
          fVar1 = fVar7 * 0.0;
        }
        else {
          fVar1 = fVar7 * 0.0;
          fVar5 = fVar11 * fVar9;
        }
        goto LAB_00102020;
      }
      fVar6 = ((fVar8 + fVar11) - (fVar2 + fVar3)) / ((fVar4 - (fVar3 + fVar3)) + fVar11);
    }
    else if (0.0 <= fVar13) {
      fVar6 = (((fVar8 + fVar11) - fVar3) - fVar2) / ((fVar4 - (fVar3 + fVar3)) + fVar11);
    }
    else {
      if (fVar2 + fVar4 <= fVar8 + fVar3) {
        fVar5 = fVar9 * 0.0;
        fVar4 = (float)((uint)fVar2 ^ __LC7) / fVar4;
        if (fVar4 < 0.0) {
          fVar1 = fVar7 * 0.0;
          goto LAB_00102020;
        }
        goto LAB_001021e0;
      }
      fVar6 = (((fVar8 + fVar11) - fVar3) - fVar2) / ((fVar4 - (fVar3 + fVar3)) + fVar11);
    }
    if (0.0 <= fVar6) {
      if (fVar6 <= _LC1) {
        fVar1 = fVar6 * fVar7;
        fVar5 = (_LC1 - fVar6) * fVar9;
      }
      else {
        fVar5 = fVar9 * 0.0;
      }
    }
    else {
      fVar1 = fVar7 * 0.0;
    }
  }
LAB_00102020:
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar1 + fVar12 + fVar5);
}


