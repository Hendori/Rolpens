
/* AABB::get_volume() const */

float __thiscall AABB::get_volume(AABB *this)

{
  return *(float *)(this + 0xc) * *(float *)(this + 0x10) * *(float *)(this + 0x14);
}



/* AABB::TEMPNAMEPLACEHOLDERVALUE(AABB const&) const */

ulong __thiscall AABB::operator==(AABB *this,AABB *param_1)

{
  undefined8 in_RAX;
  ulong uVar1;
  
  if ((((*(float *)param_1 == *(float *)this) && (*(float *)(this + 4) == *(float *)(param_1 + 4)))
      && (*(float *)(this + 8) == *(float *)(param_1 + 8))) &&
     ((*(float *)(this + 0xc) == *(float *)(param_1 + 0xc) &&
      (*(float *)(this + 0x10) == *(float *)(param_1 + 0x10))))) {
    uVar1 = CONCAT71((int7)((ulong)in_RAX >> 8),
                     !NAN(*(float *)(this + 0x14)) && !NAN(*(float *)(param_1 + 0x14))) & 0xffffffff
    ;
    if (*(float *)(this + 0x14) != *(float *)(param_1 + 0x14)) {
      uVar1 = 0;
    }
    return uVar1;
  }
  return 0;
}



/* AABB::TEMPNAMEPLACEHOLDERVALUE(AABB const&) const */

ulong __thiscall AABB::operator!=(AABB *this,AABB *param_1)

{
  undefined8 in_RAX;
  ulong uVar1;
  
  if ((((*(float *)param_1 == *(float *)this) && (*(float *)(this + 4) == *(float *)(param_1 + 4)))
      && (*(float *)(this + 8) == *(float *)(param_1 + 8))) &&
     ((*(float *)(this + 0xc) == *(float *)(param_1 + 0xc) &&
      (*(float *)(this + 0x10) == *(float *)(param_1 + 0x10))))) {
    uVar1 = CONCAT71((int7)((ulong)in_RAX >> 8),
                     NAN(*(float *)(this + 0x14)) || NAN(*(float *)(param_1 + 0x14))) & 0xffffffff;
    if (*(float *)(this + 0x14) != *(float *)(param_1 + 0x14)) {
      uVar1 = 1;
    }
    return uVar1;
  }
  return 1;
}



/* AABB::merge_with(AABB const&) */

void __thiscall AABB::merge_with(AABB *this,AABB *param_1)

{
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
  
  fVar8 = *(float *)(this + 0xc);
  if ((((fVar8 < 0.0) || (fVar10 = *(float *)(this + 0x10), fVar10 < 0.0)) ||
      (fVar12 = *(float *)(this + 0x14), fVar12 < 0.0)) ||
     (((fVar5 = *(float *)(param_1 + 0xc), fVar5 < 0.0 ||
       (fVar6 = *(float *)(param_1 + 0x10), fVar6 < 0.0)) ||
      (fVar7 = *(float *)(param_1 + 0x14), fVar7 < 0.0)))) {
    _err_print_error("merge_with","core/math/aabb.cpp",0x33,
                     "AABB size is negative, this is not supported. Use AABB.abs() to get an AABB with a positive size."
                     ,0,0);
    fVar7 = *(float *)(param_1 + 0x14);
    fVar6 = *(float *)(param_1 + 0x10);
    fVar5 = *(float *)(param_1 + 0xc);
    fVar12 = *(float *)(this + 0x14);
    fVar10 = *(float *)(this + 0x10);
    fVar8 = *(float *)(this + 0xc);
  }
  fVar11 = *(float *)param_1;
  fVar13 = *(float *)this;
  fVar1 = *(float *)(param_1 + 4);
  fVar2 = *(float *)(param_1 + 8);
  fVar3 = *(float *)(this + 4);
  fVar4 = *(float *)(this + 8);
  fVar9 = fVar8 + fVar13;
  if (fVar8 + fVar13 <= fVar5 + fVar11) {
    fVar9 = fVar5 + fVar11;
  }
  if (fVar11 <= fVar13) {
    fVar13 = fVar11;
  }
  fVar8 = fVar3;
  if (fVar1 <= fVar3) {
    fVar8 = fVar1;
  }
  fVar5 = fVar4;
  if (fVar2 <= fVar4) {
    fVar5 = fVar2;
  }
  fVar11 = fVar10 + fVar3;
  if (fVar10 + fVar3 <= fVar6 + fVar1) {
    fVar11 = fVar6 + fVar1;
  }
  fVar10 = fVar12 + fVar4;
  if (fVar12 + fVar4 <= fVar7 + fVar2) {
    fVar10 = fVar7 + fVar2;
  }
  *(ulong *)this = CONCAT44(fVar8,fVar13);
  *(ulong *)(this + 8) = CONCAT44(fVar9 - fVar13,fVar5);
  *(ulong *)(this + 0x10) = CONCAT44(fVar10 - fVar5,fVar11 - fVar8);
  return;
}



/* AABB::is_equal_approx(AABB const&) const */

undefined8 AABB::is_equal_approx(AABB *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = Vector3::is_equal_approx((Vector3 *)param_1);
  if (cVar1 == '\0') {
    return 0;
  }
  uVar2 = Vector3::is_equal_approx((Vector3 *)(param_1 + 0xc));
  return uVar2;
}



/* AABB::is_finite() const */

undefined8 AABB::is_finite(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = Vector3::is_finite();
  if (cVar1 == '\0') {
    return 0;
  }
  uVar2 = Vector3::is_finite();
  return uVar2;
}



/* AABB::intersection(AABB const&) const */

AABB * AABB::intersection(AABB *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *in_RDX;
  float *in_RSI;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar4 = in_RSI[3];
  if (((((fVar4 < 0.0) || (fVar8 = in_RSI[4], fVar8 < 0.0)) || (fVar5 = in_RSI[5], fVar5 < 0.0)) ||
      ((fVar6 = in_RDX[3], fVar6 < 0.0 || (fVar9 = in_RDX[4], fVar9 < 0.0)))) ||
     (fVar10 = in_RDX[5], fVar10 < 0.0)) {
    _err_print_error("intersection","core/math/aabb.cpp",0x56,
                     "AABB size is negative, this is not supported. Use AABB.abs() to get an AABB with a positive size."
                     ,0,0);
    fVar10 = in_RDX[5];
    fVar9 = in_RDX[4];
    fVar6 = in_RDX[3];
    fVar5 = in_RSI[5];
    fVar8 = in_RSI[4];
    fVar4 = in_RSI[3];
  }
  fVar1 = *in_RDX;
  fVar7 = *in_RSI;
  fVar12 = in_RSI[1];
  fVar11 = in_RSI[2];
  fVar6 = fVar6 + fVar1;
  fVar2 = in_RDX[1];
  fVar3 = in_RDX[2];
  if ((fVar7 <= fVar6) && (fVar4 = fVar4 + fVar7, fVar1 <= fVar4)) {
    fVar9 = fVar9 + fVar2;
    if (fVar7 <= fVar1) {
      fVar7 = fVar1;
    }
    if (fVar6 <= fVar4) {
      fVar4 = fVar6;
    }
    if ((fVar12 <= fVar9) && (fVar8 = fVar8 + fVar12, fVar2 <= fVar8)) {
      fVar10 = fVar10 + fVar3;
      if (fVar9 <= fVar8) {
        fVar8 = fVar9;
      }
      if (fVar12 <= fVar2) {
        fVar12 = fVar2;
      }
      if ((fVar11 <= fVar10) && (fVar5 = fVar5 + fVar11, fVar3 <= fVar5)) {
        if (fVar10 <= fVar5) {
          fVar5 = fVar10;
        }
        if (fVar11 <= fVar3) {
          fVar11 = fVar3;
        }
        *(ulong *)param_1 = CONCAT44(fVar12,fVar7);
        *(ulong *)(param_1 + 8) = CONCAT44(fVar4 - fVar7,fVar11);
        *(ulong *)(param_1 + 0x10) = CONCAT44(fVar5 - fVar11,fVar8 - fVar12);
        return param_1;
      }
    }
  }
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return param_1;
}



/* AABB::find_intersects_ray(Vector3 const&, Vector3 const&, bool&, Vector3*, Vector3*) const */

undefined8 __thiscall
AABB::find_intersects_ray
          (AABB *this,Vector3 *param_1,Vector3 *param_2,bool *param_3,Vector3 *param_4,
          Vector3 *param_5)

{
  float *pfVar1;
  float fVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  ulong uVar8;
  long in_FS_OFFSET;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 local_50;
  float local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((*(float *)(this + 0xc) < 0.0) ||
      (uVar6 = CONCAT44(*(float *)(this + 0x10),*(float *)(this + 0xc)),
      *(float *)(this + 0x10) < 0.0)) || (fVar12 = *(float *)(this + 0x14), fVar12 < 0.0)) {
    _err_print_error("find_intersects_ray","core/math/aabb.cpp",0x80,
                     "AABB size is negative, this is not supported. Use AABB.abs() to get an AABB with a positive size."
                     ,0,0);
    fVar12 = *(float *)(this + 0x14);
    uVar6 = *(undefined8 *)(this + 0xc);
  }
  uVar3 = *(undefined8 *)this;
  fVar13 = *(float *)(this + 8);
  *param_3 = false;
  uVar4 = 0;
  uVar8 = 0;
  local_48 = fVar12 + fVar13;
  local_50 = CONCAT44((float)((ulong)uVar3 >> 0x20) + (float)((ulong)uVar6 >> 0x20),
                      (float)uVar3 + (float)uVar6);
  fVar12 = _LC6;
  fVar13 = _LC5;
  do {
    fVar11 = *(float *)(param_2 + uVar4 * 4);
    fVar2 = *(float *)(param_1 + uVar4 * 4);
    if (fVar11 == 0.0) {
      if ((fVar2 < *(float *)(this + uVar4 * 4)) ||
         (pfVar1 = (float *)((long)&local_50 + uVar4 * 4), *pfVar1 <= fVar2 && fVar2 != *pfVar1)) {
LAB_00100650:
        uVar6 = 0;
        goto LAB_001005e1;
      }
    }
    else {
      fVar10 = (*(float *)(this + uVar4 * 4) - fVar2) / fVar11;
      fVar11 = (*(float *)((long)&local_50 + uVar4 * 4) - fVar2) / fVar11;
      fVar2 = fVar10;
      if (fVar10 <= fVar11) {
        fVar2 = fVar11;
        fVar11 = fVar10;
      }
      if (fVar12 <= fVar11) {
        uVar8 = uVar4 & 0xffffffff;
        fVar12 = fVar11;
      }
      if (((fVar2 < fVar13) && (fVar13 = fVar2, fVar2 < 0.0)) || (fVar13 < fVar12))
      goto LAB_00100650;
    }
    uVar4 = uVar4 + 1;
    if (uVar4 == 3) {
      *param_3 = fVar12 < 0.0;
      iVar7 = (int)uVar8;
      if (param_4 != (Vector3 *)0x0) {
        uVar6 = *(undefined8 *)param_2;
        lVar5 = (long)iVar7;
        uVar3 = *(undefined8 *)param_1;
        *(float *)(param_4 + 8) = *(float *)(param_2 + 8) * fVar12 + *(float *)(param_1 + 8);
        *(ulong *)param_4 =
             CONCAT44((float)((ulong)uVar6 >> 0x20) * fVar12 + (float)((ulong)uVar3 >> 0x20),
                      (float)uVar6 * fVar12 + (float)uVar3);
        if (*(float *)(param_2 + lVar5 * 4) < 0.0) {
          uVar9 = *(undefined4 *)((long)&local_50 + lVar5 * 4);
        }
        else {
          uVar9 = *(undefined4 *)(this + lVar5 * 4);
        }
        *(undefined4 *)(param_4 + lVar5 * 4) = uVar9;
      }
      if (param_5 != (Vector3 *)0x0) {
        *(undefined8 *)param_5 = 0;
        uVar9 = _LC7;
        *(undefined4 *)(param_5 + 8) = 0;
        if (*(float *)(param_2 + (long)iVar7 * 4) < 0.0) {
          uVar9 = _LC8;
        }
        *(undefined4 *)(param_5 + (long)iVar7 * 4) = uVar9;
      }
      uVar6 = 1;
LAB_001005e1:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return uVar6;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  } while( true );
}



/* AABB::intersects_segment(Vector3 const&, Vector3 const&, Vector3*, Vector3*) const */

undefined8 __thiscall
AABB::intersects_segment
          (AABB *this,Vector3 *param_1,Vector3 *param_2,Vector3 *param_3,Vector3 *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long in_FS_OFFSET;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 local_3c;
  undefined4 local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((*(float *)(this + 0xc) <= 0.0 && *(float *)(this + 0xc) != 0.0) ||
      (*(float *)(this + 0x10) <= 0.0 && *(float *)(this + 0x10) != 0.0)) ||
     (*(float *)(this + 0x14) <= 0.0 && *(float *)(this + 0x14) != 0.0)) {
    _err_print_error("intersects_segment","core/math/aabb.cpp",0xbf,
                     "AABB size is negative, this is not supported. Use AABB.abs() to get an AABB with a positive size."
                     ,0,0);
  }
  fVar15 = 0.0;
  lVar6 = 0;
  lVar8 = 0;
  fVar12 = 0.0;
  fVar13 = _LC8;
  do {
    fVar1 = *(float *)(param_1 + lVar6 * 4);
    fVar2 = *(float *)(param_2 + lVar6 * 4);
    fVar3 = *(float *)(this + lVar6 * 4);
    fVar11 = *(float *)(this + lVar6 * 4 + 0xc) + fVar3;
    fVar9 = _LC8;
    if (fVar2 <= fVar1) {
      if ((fVar2 <= fVar11) && (fVar3 <= fVar1)) {
        fVar14 = 0.0;
        if (fVar11 < fVar1) {
          fVar14 = (fVar11 - fVar1) / (fVar2 - fVar1);
        }
        fVar10 = _LC8;
        if (fVar2 < fVar3) {
          fVar9 = (fVar3 - fVar1) / (fVar2 - fVar1);
          fVar10 = _LC8;
        }
        goto LAB_00100795;
      }
LAB_00100910:
      uVar7 = 0;
      goto LAB_00100838;
    }
    if ((fVar11 < fVar1) || (fVar2 < fVar3)) goto LAB_00100910;
    fVar14 = 0.0;
    if (fVar1 < fVar3) {
      fVar14 = (fVar3 - fVar1) / (fVar2 - fVar1);
    }
    fVar10 = _LC7;
    if (fVar11 < fVar2) {
      fVar9 = (fVar11 - fVar1) / (fVar2 - fVar1);
    }
LAB_00100795:
    if (fVar12 < fVar14) {
      lVar8 = (long)(int)lVar6;
      fVar12 = fVar14;
      fVar15 = fVar10;
    }
    if (fVar13 <= fVar9) {
      fVar9 = fVar13;
    }
    fVar13 = fVar9;
    if (fVar13 < fVar12) goto LAB_00100910;
    lVar6 = lVar6 + 1;
  } while (lVar6 != 3);
  fVar13 = *(float *)(param_2 + 8);
  fVar1 = *(float *)(param_1 + 8);
  uVar7 = *(undefined8 *)param_2;
  uVar4 = *(undefined8 *)param_1;
  if (param_4 != (Vector3 *)0x0) {
    local_3c = 0;
    local_34 = 0;
    *(float *)((long)&local_3c + lVar8 * 4) = fVar15;
    *(undefined8 *)param_4 = local_3c;
    *(undefined4 *)(param_4 + 8) = local_34;
  }
  if (param_3 != (Vector3 *)0x0) {
    uVar5 = *(undefined8 *)param_1;
    *(float *)(param_3 + 8) = (fVar13 - fVar1) * fVar12 + *(float *)(param_1 + 8);
    *(ulong *)param_3 =
         CONCAT44(((float)((ulong)uVar7 >> 0x20) - (float)((ulong)uVar4 >> 0x20)) * fVar12 +
                  (float)((ulong)uVar5 >> 0x20),
                  ((float)uVar7 - (float)uVar4) * fVar12 + (float)uVar5);
  }
  uVar7 = 1;
LAB_00100838:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}



/* AABB::intersects_plane(Plane const&) const */

uint __thiscall AABB::intersects_plane(AABB *this,Plane *param_1)

{
  undefined1 auVar1 [16];
  uint uVar2;
  uint uVar3;
  float *pfVar4;
  long in_FS_OFFSET;
  undefined1 local_78 [16];
  undefined4 local_68;
  float local_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float local_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  undefined1 local_44 [16];
  float local_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  undefined8 local_24;
  float local_1c;
  float local_18 [2];
  long local_10;
  
  pfVar4 = (float *)local_78;
  auVar1 = *(undefined1 (*) [16])this;
  fStack_58 = *(float *)(this + 8);
  uVar3 = 0;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  fStack_5c = *(float *)(this + 4) + *(float *)(this + 0x10);
  uVar2 = 0;
  local_78._0_12_ = auVar1._0_12_;
  local_78._12_4_ = auVar1._0_4_;
  local_1c = *(float *)(this + 0x14) + fStack_58;
  local_68 = auVar1._4_4_;
  fStack_60 = *(float *)this;
  fStack_30 = *(float *)(this + 0xc) + fStack_60;
  local_64 = local_1c;
  local_24 = CONCAT44((float)((ulong)*(undefined8 *)this >> 0x20) +
                      (float)((ulong)*(undefined8 *)(this + 0xc) >> 0x20),
                      (float)*(undefined8 *)this + (float)*(undefined8 *)(this + 0xc));
  local_44._8_4_ = fStack_30;
  local_44._0_8_ = auVar1._4_8_;
  local_44._12_4_ = auVar1._4_4_;
  local_34 = local_1c;
  fStack_2c = fStack_5c;
  fStack_28 = fStack_58;
  local_54 = fStack_60;
  fStack_50 = fStack_5c;
  fStack_4c = local_1c;
  fStack_48 = fStack_30;
  do {
    if ((*pfVar4 * *(float *)param_1 + pfVar4[1] * *(float *)(param_1 + 4) +
        pfVar4[2] * *(float *)(param_1 + 8)) - *(float *)(param_1 + 0xc) <= 0.0) {
      uVar3 = 1;
    }
    else {
      uVar2 = 1;
    }
    pfVar4 = pfVar4 + 3;
  } while (local_18 != pfVar4);
  if (*(long *)(in_FS_OFFSET + 0x28) != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2 & uVar3;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AABB::get_longest_axis() const */

undefined1  [16] __thiscall AABB::get_longest_axis(AABB *this)

{
  float fVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined4 uVar3;
  undefined1 auVar4 [16];
  
  uVar2 = _LC12;
  fVar1 = *(float *)(this + 0x10);
  if (*(float *)(this + 0x10) <= *(float *)(this + 0xc)) {
    uVar2 = CONCAT44(_UNK_0010153c,_LC8);
    fVar1 = *(float *)(this + 0xc);
  }
  if (fVar1 < *(float *)(this + 0x14)) {
    uVar2 = 0;
    uVar3 = _LC8;
  }
  else {
    uVar3 = 0;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar4._8_4_ = uVar3;
    auVar4._0_8_ = uVar2;
    auVar4._12_4_ = 0;
    return auVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AABB::get_longest_axis_index() const */

undefined1 __thiscall AABB::get_longest_axis_index(AABB *this)

{
  float fVar1;
  float fVar2;
  undefined1 uVar3;
  float fVar4;
  
  fVar1 = *(float *)(this + 0xc);
  fVar2 = *(float *)(this + 0x10);
  fVar4 = fVar2;
  if (fVar2 <= fVar1) {
    fVar4 = fVar1;
  }
  uVar3 = fVar1 < fVar2;
  if (fVar4 < *(float *)(this + 0x14)) {
    uVar3 = 2;
  }
  return uVar3;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AABB::get_shortest_axis() const */

undefined1  [16] __thiscall AABB::get_shortest_axis(AABB *this)

{
  float fVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined4 uVar3;
  undefined1 auVar4 [16];
  
  uVar2 = _LC12;
  fVar1 = *(float *)(this + 0x10);
  if (*(float *)(this + 0xc) <= *(float *)(this + 0x10)) {
    uVar2 = CONCAT44(_UNK_0010153c,_LC8);
    fVar1 = *(float *)(this + 0xc);
  }
  if (*(float *)(this + 0x14) <= fVar1 && fVar1 != *(float *)(this + 0x14)) {
    uVar2 = 0;
    uVar3 = _LC8;
  }
  else {
    uVar3 = 0;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar4._8_4_ = uVar3;
    auVar4._0_8_ = uVar2;
    auVar4._12_4_ = 0;
    return auVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AABB::get_shortest_axis_index() const */

undefined1 __thiscall AABB::get_shortest_axis_index(AABB *this)

{
  float fVar1;
  float fVar2;
  undefined1 uVar3;
  float fVar4;
  
  fVar1 = *(float *)(this + 0xc);
  fVar2 = *(float *)(this + 0x10);
  fVar4 = fVar2;
  if (fVar1 <= fVar2) {
    fVar4 = fVar1;
  }
  uVar3 = fVar2 < fVar1;
  if (*(float *)(this + 0x14) <= fVar4 && fVar4 != *(float *)(this + 0x14)) {
    uVar3 = 2;
  }
  return uVar3;
}



/* AABB::merge(AABB const&) const */

AABB * AABB::merge(AABB *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  AABB *in_RDX;
  undefined8 *in_RSI;
  
  uVar2 = in_RSI[1];
  uVar1 = in_RSI[2];
  *(undefined8 *)param_1 = *in_RSI;
  *(undefined8 *)(param_1 + 8) = uVar2;
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  merge_with(param_1,in_RDX);
  return param_1;
}



/* AABB::expand(Vector3 const&) const */

Vector3 * AABB::expand(Vector3 *param_1)

{
  float fVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float *in_RDX;
  undefined8 *in_RSI;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  uVar3 = in_RSI[1];
  uVar2 = in_RSI[2];
  *(undefined8 *)param_1 = *in_RSI;
  *(undefined8 *)(param_1 + 8) = uVar3;
  fVar8 = *(float *)(param_1 + 0xc);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  if (((fVar8 < 0.0) || (*(float *)(param_1 + 0x10) <= 0.0 && *(float *)(param_1 + 0x10) != 0.0)) ||
     (*(float *)(param_1 + 0x14) <= 0.0 && *(float *)(param_1 + 0x14) != 0.0)) {
    _err_print_error("expand_to","core/math/aabb.h",0x158,
                     "AABB size is negative, this is not supported. Use AABB.abs() to get an AABB with a positive size."
                     ,0,0);
  }
  fVar7 = *in_RDX;
  fVar9 = *(float *)param_1;
  fVar4 = in_RDX[1];
  fVar6 = *(float *)(param_1 + 4);
  fVar8 = fVar8 + fVar9;
  fVar1 = *(float *)(param_1 + 8);
  fVar5 = fVar7;
  if (fVar9 <= fVar7) {
    fVar5 = fVar9;
  }
  if (fVar7 <= fVar8) {
    fVar7 = fVar8;
  }
  fVar8 = fVar4;
  if (fVar6 <= fVar4) {
    fVar8 = fVar6;
  }
  if (fVar4 <= *(float *)(param_1 + 0x10) + fVar6) {
    fVar4 = *(float *)(param_1 + 0x10) + fVar6;
  }
  fVar9 = in_RDX[2];
  fVar6 = fVar9;
  if (fVar9 <= *(float *)(param_1 + 0x14) + fVar1) {
    fVar6 = *(float *)(param_1 + 0x14) + fVar1;
  }
  if (fVar1 <= fVar9) {
    fVar9 = fVar1;
  }
  *(ulong *)param_1 = CONCAT44(fVar8,fVar5);
  *(ulong *)(param_1 + 8) = CONCAT44(fVar7 - fVar5,fVar9);
  *(ulong *)(param_1 + 0x10) = CONCAT44(fVar6 - fVar9,fVar4 - fVar8);
  return param_1;
}



/* AABB::grow(float) const */

void AABB::grow(float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *in_RSI;
  float *in_RDI;
  float fVar5;
  
  fVar1 = *in_RSI;
  fVar2 = in_RSI[1];
  fVar3 = in_RSI[2];
  fVar4 = in_RSI[3];
  fVar5 = param_1 + param_1;
  *(ulong *)(in_RDI + 4) =
       CONCAT44(fVar5 + (float)((ulong)*(undefined8 *)(in_RSI + 4) >> 0x20),
                fVar5 + (float)*(undefined8 *)(in_RSI + 4));
  *in_RDI = fVar1 - param_1;
  in_RDI[1] = fVar2 - param_1;
  in_RDI[2] = fVar3 - param_1;
  in_RDI[3] = fVar4 + fVar5;
  return;
}



/* AABB::get_edge(int, Vector3&, Vector3&) const */

void __thiscall AABB::get_edge(AABB *this,int param_1,Vector3 *param_2,Vector3 *param_3)

{
  float fVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  
  if (0xb < (uint)param_1) {
    _err_print_index_error
              ("get_edge","core/math/aabb.cpp",0x16a,(long)param_1,0xc,"p_edge","12","",false,false)
    ;
    return;
  }
  fVar4 = *(float *)this;
  fVar7 = *(float *)(this + 4);
  fVar5 = *(float *)(this + 8);
  uVar6 = *(undefined4 *)(this + 4);
  switch(param_1) {
  case 0:
    fVar7 = *(float *)(this + 0xc);
    *(float *)(param_2 + 8) = fVar5;
    *(ulong *)param_2 = CONCAT44(uVar6,fVar4 + fVar7);
    uVar2 = *(undefined8 *)this;
    *(undefined4 *)(param_3 + 8) = *(undefined4 *)(this + 8);
    *(undefined8 *)param_3 = uVar2;
    return;
  case 1:
    fVar7 = *(float *)(this + 0xc);
    *(float *)(param_2 + 8) = fVar5 + *(float *)(this + 0x14);
    *(ulong *)param_2 = CONCAT44(uVar6,fVar4 + fVar7);
    fVar5 = *(float *)(this + 8);
    fVar4 = *(float *)this;
    break;
  case 2:
    fVar1 = *(float *)(this + 0x14);
    *(float *)param_2 = fVar4;
    *(float *)(param_2 + 4) = fVar7;
    *(float *)(param_2 + 8) = fVar5 + fVar1;
    fVar5 = *(float *)(this + 8) + *(float *)(this + 0x14);
    break;
  case 3:
    *(float *)param_2 = fVar4;
    *(float *)(param_2 + 4) = fVar7;
    *(float *)(param_2 + 8) = fVar5;
    fVar5 = *(float *)(this + 8);
    fVar7 = *(float *)(this + 0x14);
    *(ulong *)param_3 = CONCAT44(*(undefined4 *)(this + 4),fVar4);
    *(float *)(param_3 + 8) = fVar5 + fVar7;
    return;
  case 4:
    fVar1 = *(float *)(this + 0x10);
    *(float *)(param_2 + 8) = fVar5;
    *(ulong *)param_2 = CONCAT44(fVar7 + fVar1,fVar4);
    fVar4 = fVar4 + *(float *)(this + 0xc);
    uVar6 = *(undefined4 *)(this + 8);
    goto LAB_00100dc2;
  case 5:
    uVar2 = *(undefined8 *)(this + 0xc);
    *(float *)(param_2 + 8) = fVar5;
    *(ulong *)param_2 = CONCAT44((float)((ulong)uVar2 >> 0x20) + fVar7,(float)uVar2 + fVar4);
    uVar2 = *(undefined8 *)(this + 0xc);
    uVar3 = *(undefined8 *)this;
    *(float *)(param_3 + 8) = *(float *)(this + 8) + *(float *)(this + 0x14);
    *(ulong *)param_3 =
         CONCAT44((float)((ulong)uVar2 >> 0x20) + (float)((ulong)uVar3 >> 0x20),
                  (float)uVar2 + (float)uVar3);
    return;
  case 6:
    uVar2 = *(undefined8 *)(this + 0xc);
    *(float *)(param_2 + 8) = fVar5 + *(float *)(this + 0x14);
    *(ulong *)param_2 = CONCAT44((float)((ulong)uVar2 >> 0x20) + fVar7,(float)uVar2 + fVar4);
    fVar5 = *(float *)(this + 8);
    fVar4 = *(float *)(this + 0x14);
    *(ulong *)param_3 = CONCAT44(*(float *)(this + 4) + *(float *)(this + 0x10),*(undefined4 *)this)
    ;
    *(float *)(param_3 + 8) = fVar5 + fVar4;
    return;
  case 7:
    fVar7 = fVar7 + *(float *)(this + 0x10);
    fVar5 = fVar5 + *(float *)(this + 0x14);
  case 9:
    *(float *)param_2 = fVar4;
    *(float *)(param_2 + 4) = fVar7;
    *(float *)(param_2 + 8) = fVar5;
    uVar6 = *(undefined4 *)(this + 8);
LAB_00100dc2:
    fVar5 = *(float *)(this + 4);
    fVar7 = *(float *)(this + 0x10);
    *(undefined4 *)(param_3 + 8) = uVar6;
    *(ulong *)param_3 = CONCAT44(fVar5 + fVar7,fVar4);
    return;
  case 8:
    fVar1 = *(float *)(this + 0x14);
    *(float *)param_2 = fVar4;
    *(float *)(param_2 + 4) = fVar7;
    *(float *)(param_2 + 8) = fVar5 + fVar1;
    fVar5 = *(float *)(this + 8);
    fVar7 = *(float *)(this + 0x14);
    *(ulong *)param_3 = CONCAT44(*(float *)(this + 4) + *(float *)(this + 0x10),fVar4);
    *(float *)(param_3 + 8) = fVar5 + fVar7;
    return;
  case 10:
    fVar1 = *(float *)(this + 0xc);
    *(float *)(param_2 + 8) = fVar5;
    *(ulong *)param_2 = CONCAT44(fVar7,fVar4 + fVar1);
    fVar5 = *(float *)(this + 0x10);
    fVar4 = *(float *)(this + 0xc);
    uVar2 = *(undefined8 *)this;
    *(undefined4 *)(param_3 + 8) = *(undefined4 *)(this + 8);
    *(ulong *)param_3 = CONCAT44(fVar5 + (float)((ulong)uVar2 >> 0x20),fVar4 + (float)uVar2);
    return;
  case 0xb:
    fVar7 = *(float *)(this + 0xc);
    *(float *)(param_2 + 8) = fVar5 + *(float *)(this + 0x14);
    *(ulong *)param_2 = CONCAT44(uVar6,fVar4 + fVar7);
    uVar2 = *(undefined8 *)(this + 4);
    fVar5 = *(float *)(this + 0x10);
    uVar3 = *(undefined8 *)(this + 0xc);
    fVar4 = *(float *)this;
    *(float *)(param_3 + 8) = *(float *)(this + 0x14) + *(float *)(this + 8);
    *(ulong *)param_3 = CONCAT44((float)uVar2 + fVar5,(float)uVar3 + fVar4);
    return;
  }
  fVar7 = *(float *)(this + 0xc);
  uVar6 = *(undefined4 *)(this + 4);
  *(float *)(param_3 + 8) = fVar5;
  *(ulong *)param_3 = CONCAT44(uVar6,fVar4 + fVar7);
  return;
}



/* AABB::intersects_segment_bind(Vector3 const&, Vector3 const&) const */

Vector3 * AABB::intersects_segment_bind(Vector3 *param_1,Vector3 *param_2)

{
  char cVar1;
  Vector3 *in_RCX;
  Vector3 *in_RDX;
  long in_FS_OFFSET;
  undefined8 local_2c;
  undefined4 local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_24 = 0;
  local_2c = 0;
  cVar1 = intersects_segment((AABB *)param_2,in_RDX,in_RCX,(Vector3 *)&local_2c,(Vector3 *)0x0);
  if (cVar1 == '\0') {
    *(undefined4 *)param_1 = 0;
    *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  }
  else {
    Variant::Variant((Variant *)param_1,(Vector3 *)&local_2c);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AABB::intersects_ray_bind(Vector3 const&, Vector3 const&) const */

Vector3 * AABB::intersects_ray_bind(Vector3 *param_1,Vector3 *param_2)

{
  char cVar1;
  Vector3 *in_RCX;
  Vector3 *in_RDX;
  long in_FS_OFFSET;
  bool local_2d;
  undefined8 local_2c;
  undefined4 local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_2c = 0;
  local_24 = 0;
  cVar1 = find_intersects_ray((AABB *)param_2,in_RDX,in_RCX,&local_2d,(Vector3 *)&local_2c,
                              (Vector3 *)0x0);
  if (cVar1 == '\0') {
    *(undefined4 *)param_1 = 0;
    *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  }
  else if (local_2d == false) {
    Variant::Variant((Variant *)param_1,(Vector3 *)&local_2c);
  }
  else {
    Variant::Variant((Variant *)param_1,in_RDX);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AABB::operator String() const */

AABB * __thiscall AABB::operator_cast_to_String(AABB *this)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
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
  Vector3::operator_cast_to_String((Vector3 *)&local_68);
  local_78 = 0;
  local_58 = ", S: ";
  local_50 = 5;
  String::parse_latin1((StrRange *)&local_78);
  Vector3::operator_cast_to_String((Vector3 *)&local_88);
  operator+((char *)&local_80,&_LC21);
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


