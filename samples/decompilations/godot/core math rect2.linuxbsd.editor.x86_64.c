
/* Rect2::is_equal_approx(Rect2 const&) const */

undefined8 Rect2::is_equal_approx(Rect2 *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = Vector2::is_equal_approx((Vector2 *)param_1);
  if (cVar1 == '\0') {
    return 0;
  }
  uVar2 = Vector2::is_equal_approx((Vector2 *)(param_1 + 8));
  return uVar2;
}



/* Rect2::is_finite() const */

undefined8 Rect2::is_finite(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = Vector2::is_finite();
  if (cVar1 == '\0') {
    return 0;
  }
  uVar2 = Vector2::is_finite();
  return uVar2;
}



/* Rect2::intersects_segment(Vector2 const&, Vector2 const&, Vector2*, Vector2*) const */

undefined8 __thiscall
Rect2::intersects_segment
          (Rect2 *this,Vector2 *param_1,Vector2 *param_2,Vector2 *param_3,Vector2 *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long in_FS_OFFSET;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(float *)(this + 8) <= 0.0 && *(float *)(this + 8) != 0.0) ||
     (*(float *)(this + 0xc) <= 0.0 && *(float *)(this + 0xc) != 0.0)) {
    _err_print_error("intersects_segment","core/math/rect2.cpp",0x30,
                     "Rect2 size is negative, this is not supported. Use Rect2.abs() to get a Rect2 with a positive size."
                     ,0,0);
  }
  fVar14 = 0.0;
  lVar5 = 0;
  lVar7 = 0;
  fVar11 = 0.0;
  fVar12 = _LC1;
  do {
    fVar1 = *(float *)(param_1 + lVar5 * 4);
    fVar2 = *(float *)(param_2 + lVar5 * 4);
    fVar3 = *(float *)(this + lVar5 * 4);
    fVar10 = *(float *)(this + lVar5 * 4 + 8) + fVar3;
    fVar8 = _LC1;
    if (fVar2 <= fVar1) {
      if ((fVar2 <= fVar10) && (fVar3 <= fVar1)) {
        fVar13 = 0.0;
        if (fVar10 < fVar1) {
          fVar13 = (fVar10 - fVar1) / (fVar2 - fVar1);
        }
        fVar9 = _LC1;
        if (fVar2 < fVar3) {
          fVar8 = (fVar3 - fVar1) / (fVar2 - fVar1);
          fVar9 = _LC1;
        }
        goto LAB_00100180;
      }
LAB_00100278:
      uVar6 = 0;
      goto LAB_00100225;
    }
    if ((fVar10 < fVar1) || (fVar2 < fVar3)) goto LAB_00100278;
    fVar13 = 0.0;
    if (fVar1 < fVar3) {
      fVar13 = (fVar3 - fVar1) / (fVar2 - fVar1);
    }
    fVar9 = _LC2;
    if (fVar10 < fVar2) {
      fVar8 = (fVar10 - fVar1) / (fVar2 - fVar1);
    }
LAB_00100180:
    if (fVar11 < fVar13) {
      lVar7 = (long)(int)lVar5;
      fVar11 = fVar13;
      fVar14 = fVar9;
    }
    if (fVar12 <= fVar8) {
      fVar8 = fVar12;
    }
    fVar12 = fVar8;
    if (fVar12 < fVar11) goto LAB_00100278;
    if (lVar5 != 0) {
      uVar6 = *(undefined8 *)param_2;
      uVar4 = *(undefined8 *)param_1;
      if (param_4 != (Vector2 *)0x0) {
        local_38 = 0;
        *(float *)((long)&local_38 + lVar7 * 4) = fVar14;
        *(undefined8 *)param_4 = local_38;
      }
      if (param_3 != (Vector2 *)0x0) {
        *(ulong *)param_3 =
             CONCAT44(((float)((ulong)uVar6 >> 0x20) - (float)((ulong)uVar4 >> 0x20)) * fVar11 +
                      (float)((ulong)*(undefined8 *)param_1 >> 0x20),
                      ((float)uVar6 - (float)uVar4) * fVar11 + (float)*(undefined8 *)param_1);
      }
      uVar6 = 1;
LAB_00100225:
      if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return uVar6;
    }
    lVar5 = 1;
  } while( true );
}



/* Rect2::intersects_transformed(Transform2D const&, Rect2 const&) const */

bool __thiscall Rect2::intersects_transformed(Rect2 *this,Transform2D *param_1,Rect2 *param_2)

{
  long lVar1;
  bool bVar2;
  Vector2 *pVVar3;
  long in_FS_OFFSET;
  float fVar4;
  float extraout_XMM0_Da;
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
  float local_b0;
  float local_ac;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if ((((*(float *)(this + 8) <= 0.0 && *(float *)(this + 8) != 0.0) ||
       (*(float *)(this + 0xc) <= 0.0 && *(float *)(this + 0xc) != 0.0)) ||
      (fVar5 = *(float *)(param_2 + 8), fVar5 < 0.0)) ||
     (fVar13 = *(float *)(param_2 + 0xc), fVar13 < 0.0)) {
    _err_print_error("intersects_transformed","core/math/rect2.cpp",0x71,
                     "Rect2 size is negative, this is not supported. Use Rect2.abs() to get a Rect2 with a positive size."
                     ,0,0);
    fVar5 = *(float *)(param_2 + 8);
    fVar13 = *(float *)(param_2 + 0xc);
  }
  fVar4 = (float)*(undefined8 *)param_2;
  fVar11 = *(float *)(param_2 + 4);
  fVar5 = fVar4 + fVar5;
  fVar14 = (float)*(undefined8 *)param_1;
  fVar15 = (float)((ulong)*(undefined8 *)param_1 >> 0x20);
  fVar10 = (fVar11 + fVar13) * (float)*(undefined8 *)(param_1 + 8);
  fVar12 = (fVar11 + fVar13) * (float)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20);
  fVar13 = *(float *)(this + 4);
  fVar8 = (float)*(undefined8 *)(param_1 + 0x10);
  fVar6 = fVar5 * fVar14 + fVar10 + fVar8;
  fVar9 = (float)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x20);
  fVar7 = fVar5 * fVar15 + fVar12 + fVar9;
  fVar8 = fVar4 * fVar14 + fVar10 + fVar8;
  fVar9 = fVar4 * fVar15 + fVar12 + fVar9;
  fVar4 = *(float *)param_2 * *(float *)param_1 + *(float *)(param_1 + 8) * fVar11 +
          *(float *)(param_1 + 0x10);
  fVar10 = *(float *)param_2 * *(float *)(param_1 + 4) + *(float *)(param_1 + 0xc) * fVar11 +
           *(float *)(param_1 + 0x14);
  fVar12 = *(float *)param_1 * fVar5 + *(float *)(param_1 + 8) * fVar11 + *(float *)(param_1 + 0x10)
  ;
  fVar5 = *(float *)(param_1 + 4) * fVar5 + *(float *)(param_1 + 0xc) * fVar11 +
          *(float *)(param_1 + 0x14);
  if (((((fVar13 < fVar10) || (fVar13 < fVar5)) || ((fVar13 < fVar9 || (fVar13 < fVar7)))) &&
      (((fVar13 = *(float *)(this + 0xc) + fVar13, fVar10 < fVar13 || (fVar5 < fVar13)) ||
       ((fVar9 < fVar13 || (fVar7 < fVar13)))))) &&
     (((((fVar5 = *(float *)this, fVar5 < fVar4 || (fVar5 < fVar12)) || (fVar5 < fVar8)) ||
       (fVar5 < fVar6)) &&
      (((fVar5 = *(float *)(this + 8) + fVar5, fVar4 < fVar5 || (fVar12 < fVar5)) ||
       ((fVar8 < fVar5 || (fVar6 < fVar5)))))))) {
    local_b0 = (float)Vector2::dot((Vector2 *)param_1);
    fVar5 = (float)Vector2::dot((Vector2 *)param_1);
    local_ac = fVar5;
    if ((fVar5 <= local_b0) && (local_ac = local_b0, fVar5 < local_b0)) {
      local_b0 = fVar5;
    }
    fVar13 = (float)Vector2::dot((Vector2 *)param_1);
    fVar5 = fVar13;
    if (local_b0 <= fVar13) {
      fVar5 = local_b0;
    }
    if (fVar13 <= local_ac) {
      fVar13 = local_ac;
    }
    fVar4 = (float)Vector2::dot((Vector2 *)param_1);
    fVar11 = fVar4;
    if (fVar4 <= fVar13) {
      fVar11 = fVar13;
    }
    if (fVar5 <= fVar4) {
      fVar4 = fVar5;
    }
    fVar13 = (float)Vector2::dot((Vector2 *)param_1);
    fVar10 = (float)Vector2::dot((Vector2 *)param_1);
    fVar5 = fVar10;
    if ((fVar10 <= fVar13) && (fVar5 = fVar13, fVar10 < fVar13)) {
      fVar13 = fVar10;
    }
    fVar10 = (float)Vector2::dot((Vector2 *)param_1);
    fVar12 = fVar10;
    if (fVar10 <= fVar5) {
      fVar12 = fVar5;
    }
    if (fVar13 <= fVar10) {
      fVar10 = fVar13;
    }
    fVar5 = (float)Vector2::dot((Vector2 *)param_1);
    fVar13 = fVar5;
    if (fVar5 <= fVar12) {
      fVar13 = fVar12;
    }
    if (fVar10 <= fVar5) {
      fVar5 = fVar10;
    }
    if ((fVar4 <= fVar13) && (fVar5 <= fVar11)) {
      pVVar3 = (Vector2 *)(param_1 + 8);
      local_b0 = (float)Vector2::dot(pVVar3);
      fVar5 = (float)Vector2::dot(pVVar3);
      local_ac = fVar5;
      if ((fVar5 <= local_b0) && (local_ac = local_b0, fVar5 < local_b0)) {
        local_b0 = fVar5;
      }
      fVar13 = (float)Vector2::dot(pVVar3);
      fVar5 = fVar13;
      if (local_b0 <= fVar13) {
        fVar5 = local_b0;
      }
      if (fVar13 <= local_ac) {
        fVar13 = local_ac;
      }
      fVar4 = (float)Vector2::dot(pVVar3);
      fVar11 = fVar4;
      if (fVar4 <= fVar13) {
        fVar11 = fVar13;
      }
      if (fVar5 <= fVar4) {
        fVar4 = fVar5;
      }
      fVar13 = (float)Vector2::dot(pVVar3);
      fVar10 = (float)Vector2::dot(pVVar3);
      fVar5 = fVar10;
      if ((fVar10 <= fVar13) && (fVar5 = fVar13, fVar10 < fVar13)) {
        fVar13 = fVar10;
      }
      fVar10 = (float)Vector2::dot(pVVar3);
      fVar12 = fVar10;
      if (fVar10 <= fVar5) {
        fVar12 = fVar5;
      }
      if (fVar13 <= fVar10) {
        fVar10 = fVar13;
      }
      Vector2::dot(pVVar3);
      fVar5 = extraout_XMM0_Da;
      if (extraout_XMM0_Da <= fVar12) {
        fVar5 = fVar12;
      }
      fVar13 = extraout_XMM0_Da;
      if (fVar10 <= extraout_XMM0_Da) {
        fVar13 = fVar10;
      }
      if (fVar4 <= fVar5) {
        bVar2 = fVar13 <= fVar11;
        goto LAB_001003e9;
      }
    }
  }
  bVar2 = false;
LAB_001003e9:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar2;
}



/* Rect2::operator String() const */

Rect2 * __thiscall Rect2::operator_cast_to_String(Rect2 *this)

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
  Vector2::operator_cast_to_String((Vector2 *)&local_68);
  local_78 = 0;
  local_58 = ", S: ";
  local_50 = 5;
  String::parse_latin1((StrRange *)&local_78);
  Vector2::operator_cast_to_String((Vector2 *)&local_88);
  operator+((char *)&local_80,&_LC9);
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



/* Rect2::operator Rect2i() const */

void __thiscall Rect2::operator_cast_to_Rect2i(Rect2 *this)

{
  Vector2::operator_cast_to_Vector2i((Vector2 *)(this + 8));
  Vector2::operator_cast_to_Vector2i((Vector2 *)this);
  return;
}


