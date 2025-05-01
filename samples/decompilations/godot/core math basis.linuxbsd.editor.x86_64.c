
/* Basis::invert() */

void __thiscall Basis::invert(Basis *this)

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
  
  fVar1 = *(float *)(this + 0x10);
  fVar2 = *(float *)(this + 0x14);
  fVar3 = *(float *)(this + 0x20);
  fVar4 = *(float *)(this + 0x1c);
  fVar5 = *(float *)this;
  fVar6 = *(float *)(this + 0x18);
  fVar7 = *(float *)(this + 0xc);
  fVar8 = *(float *)(this + 4);
  fVar11 = fVar1 * fVar3 - fVar2 * fVar4;
  fVar13 = fVar2 * fVar6 - fVar3 * fVar7;
  fVar10 = fVar4 * fVar7 - fVar1 * fVar6;
  fVar9 = *(float *)(this + 8);
  fVar12 = fVar11 * fVar5 + fVar13 * fVar8 + fVar10 * fVar9;
  if (fVar12 != 0.0) {
    fVar12 = _LC4 / fVar12;
    *(float *)this = fVar11 * fVar12;
    *(float *)(this + 4) = (fVar4 * fVar9 - fVar3 * fVar8) * fVar12;
    *(float *)(this + 8) = (fVar2 * fVar8 - fVar1 * fVar9) * fVar12;
    *(float *)(this + 0xc) = fVar13 * fVar12;
    *(float *)(this + 0x20) = (fVar1 * fVar5 - fVar7 * fVar8) * fVar12;
    *(float *)(this + 0x10) = (fVar3 * fVar5 - fVar6 * fVar9) * fVar12;
    *(float *)(this + 0x14) = (fVar9 * fVar7 - fVar2 * fVar5) * fVar12;
    *(float *)(this + 0x18) = fVar10 * fVar12;
    *(float *)(this + 0x1c) = (fVar6 * fVar8 - fVar4 * fVar5) * fVar12;
    return;
  }
  _err_print_error("invert","core/math/basis.cpp",0x2f,"Condition \"det == 0\" is true.",0,0);
  return;
}



/* Basis::orthonormalize() */

void __thiscall Basis::orthonormalize(Basis *this)

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
  
  fVar11 = *(float *)(this + 0xc);
  fVar4 = *(float *)this;
  fVar9 = *(float *)(this + 0x18);
  fVar3 = *(float *)(this + 0x20);
  fVar2 = *(float *)(this + 0x14);
  fVar8 = *(float *)(this + 8);
  fVar5 = fVar4 * fVar4 + fVar11 * fVar11 + fVar9 * fVar9;
  if (fVar5 == 0.0) {
    fVar9 = 0.0;
    fVar4 = 0.0;
    fVar11 = fVar4;
  }
  else {
    fVar5 = SQRT(fVar5);
    fVar4 = fVar4 / fVar5;
    fVar11 = fVar11 / fVar5;
    fVar9 = fVar9 / fVar5;
  }
  fVar5 = *(float *)(this + 4) * fVar4 + fVar11 * *(float *)(this + 0x10) +
          *(float *)(this + 0x1c) * fVar9;
  fVar10 = *(float *)(this + 0x1c) - fVar5 * fVar9;
  fVar1 = *(float *)(this + 0x10) - fVar11 * fVar5;
  fVar5 = *(float *)(this + 4) - fVar5 * fVar4;
  fVar6 = fVar5 * fVar5 + fVar1 * fVar1 + fVar10 * fVar10;
  if (fVar6 == 0.0) {
    fVar10 = 0.0;
    fVar1 = 0.0;
    fVar5 = fVar1;
  }
  else {
    fVar6 = SQRT(fVar6);
    fVar5 = fVar5 / fVar6;
    fVar1 = fVar1 / fVar6;
    fVar10 = fVar10 / fVar6;
  }
  fVar12 = fVar10 * fVar3 + fVar5 * fVar8 + fVar2 * fVar1;
  fVar7 = fVar8 * fVar4 + fVar11 * fVar2 + fVar3 * fVar9;
  fVar6 = (fVar3 - fVar7 * fVar9) - fVar10 * fVar12;
  fVar3 = (fVar2 - fVar11 * fVar7) - fVar12 * fVar1;
  fVar2 = (fVar8 - fVar7 * fVar4) - fVar12 * fVar5;
  fVar8 = fVar2 * fVar2 + fVar3 * fVar3 + fVar6 * fVar6;
  if (fVar8 == 0.0) {
    fVar6 = 0.0;
    fVar2 = 0.0;
    fVar3 = fVar2;
  }
  else {
    fVar8 = SQRT(fVar8);
    fVar2 = fVar2 / fVar8;
    fVar3 = fVar3 / fVar8;
    fVar6 = fVar6 / fVar8;
  }
  *(float *)(this + 0x20) = fVar6;
  *(float *)this = fVar4;
  *(float *)(this + 4) = fVar5;
  *(float *)(this + 8) = fVar2;
  *(float *)(this + 0xc) = fVar11;
  *(float *)(this + 0x10) = fVar1;
  *(float *)(this + 0x14) = fVar3;
  *(float *)(this + 0x18) = fVar9;
  *(float *)(this + 0x1c) = fVar10;
  return;
}



/* Basis::orthonormalized() const */

void Basis::orthonormalized(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *in_RSI;
  Basis *in_RDI;
  
  uVar2 = in_RSI[1];
  uVar3 = in_RSI[2];
  uVar4 = in_RSI[3];
  uVar1 = *(undefined4 *)(in_RSI + 4);
  *(undefined8 *)in_RDI = *in_RSI;
  *(undefined8 *)(in_RDI + 8) = uVar2;
  *(undefined4 *)(in_RDI + 0x20) = uVar1;
  *(undefined8 *)(in_RDI + 0x10) = uVar3;
  *(undefined8 *)(in_RDI + 0x18) = uVar4;
  orthonormalize(in_RDI);
  return;
}



/* Basis::is_orthogonal() const */

undefined4 __thiscall Basis::is_orthogonal(Basis *this)

{
  float fVar1;
  
  if (ABS(*(float *)(this + 4) * *(float *)this + *(float *)(this + 0x10) * *(float *)(this + 0xc) +
          *(float *)(this + 0x1c) * *(float *)(this + 0x18)) < _LC5) {
    if (ABS(*(float *)this * *(float *)(this + 8) + *(float *)(this + 0xc) * *(float *)(this + 0x14)
            + *(float *)(this + 0x18) * *(float *)(this + 0x20)) < _LC5) {
      fVar1 = ABS(*(float *)(this + 8) * *(float *)(this + 4) +
                  *(float *)(this + 0x14) * *(float *)(this + 0x10) +
                  *(float *)(this + 0x20) * *(float *)(this + 0x1c));
      return CONCAT31((int3)((uint)fVar1 >> 8),fVar1 < _LC5);
    }
  }
  return 0;
}



/* Basis::is_orthonormal() const */

undefined4 __thiscall Basis::is_orthonormal(Basis *this)

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
  
  fVar5 = *(float *)(this + 0xc);
  fVar1 = *(float *)this;
  fVar2 = *(float *)(this + 0x18);
  fVar6 = fVar1 * fVar1 + fVar5 * fVar5 + fVar2 * fVar2;
  if (fVar6 != _LC4) {
    fVar9 = _LC5;
    if (_LC5 <= ABS(fVar6) * _LC5) {
      fVar9 = ABS(fVar6) * _LC5;
    }
    if (fVar9 <= ABS(fVar6 - _LC4)) {
      return 0;
    }
  }
  fVar6 = *(float *)(this + 0x10);
  fVar9 = *(float *)(this + 4);
  fVar3 = *(float *)(this + 0x1c);
  fVar7 = fVar9 * fVar9 + fVar6 * fVar6 + fVar3 * fVar3;
  if (fVar7 != _LC4) {
    fVar10 = _LC5;
    if (_LC5 <= ABS(fVar7) * _LC5) {
      fVar10 = ABS(fVar7) * _LC5;
    }
    if (fVar10 <= ABS(fVar7 - _LC4)) {
      return 0;
    }
  }
  fVar7 = *(float *)(this + 0x14);
  fVar10 = *(float *)(this + 8);
  fVar4 = *(float *)(this + 0x20);
  fVar8 = fVar10 * fVar10 + fVar7 * fVar7 + fVar4 * fVar4;
  if (fVar8 != _LC4) {
    fVar11 = _LC5;
    if (_LC5 <= ABS(fVar8) * _LC5) {
      fVar11 = ABS(fVar8) * _LC5;
    }
    if (fVar11 <= ABS(fVar8 - _LC4)) {
      return 0;
    }
  }
  if ((ABS(fVar9 * fVar1 + fVar6 * fVar5 + fVar3 * fVar2) < _LC5) &&
     (ABS(fVar1 * fVar10 + fVar5 * fVar7 + fVar2 * fVar4) < _LC5)) {
    fVar5 = ABS(fVar10 * fVar9 + fVar7 * fVar6 + fVar4 * fVar3);
    return CONCAT31((int3)((uint)fVar5 >> 8),fVar5 < _LC5);
  }
  return 0;
}



/* Basis::is_conformal() const */

undefined4 __thiscall Basis::is_conformal(Basis *this)

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
  
  fVar7 = *(float *)(this + 0xc);
  fVar1 = *(float *)this;
  fVar2 = *(float *)(this + 0x18);
  fVar3 = *(float *)(this + 0x10);
  fVar4 = *(float *)(this + 4);
  fVar5 = *(float *)(this + 0x1c);
  fVar8 = fVar1 * fVar1 + fVar7 * fVar7 + fVar2 * fVar2;
  fVar9 = fVar4 * fVar4 + fVar3 * fVar3 + fVar5 * fVar5;
  if (fVar9 != fVar8) {
    fVar11 = _LC5;
    if (_LC5 <= ABS(fVar8) * _LC5) {
      fVar11 = ABS(fVar8) * _LC5;
    }
    if (fVar11 <= ABS(fVar8 - fVar9)) {
      return 0;
    }
  }
  fVar9 = *(float *)(this + 0x14);
  fVar11 = *(float *)(this + 8);
  fVar6 = *(float *)(this + 0x20);
  fVar10 = fVar11 * fVar11 + fVar9 * fVar9 + fVar6 * fVar6;
  if (fVar8 != fVar10) {
    fVar12 = _LC5;
    if (_LC5 <= ABS(fVar8) * _LC5) {
      fVar12 = ABS(fVar8) * _LC5;
    }
    if (fVar12 <= ABS(fVar8 - fVar10)) {
      return 0;
    }
  }
  if ((ABS(fVar4 * fVar1 + fVar3 * fVar7 + fVar5 * fVar2) < _LC5) &&
     (ABS(fVar1 * fVar11 + fVar7 * fVar9 + fVar2 * fVar6) < _LC5)) {
    fVar7 = ABS(fVar11 * fVar4 + fVar9 * fVar3 + fVar6 * fVar5);
    return CONCAT31((int3)((uint)fVar7 >> 8),fVar7 < _LC5);
  }
  return 0;
}



/* Basis::is_diagonal() const */

undefined4 __thiscall Basis::is_diagonal(Basis *this)

{
  if ((((ABS(*(float *)(this + 4)) < _LC5) && (ABS(*(float *)(this + 8)) < _LC5)) &&
      (ABS(*(float *)(this + 0xc)) < _LC5)) &&
     ((ABS(*(float *)(this + 0x14)) < _LC5 && (ABS(*(float *)(this + 0x18)) < _LC5)))) {
    return CONCAT31((int3)((uint)ABS(*(float *)(this + 0x1c)) >> 8),
                    ABS(*(float *)(this + 0x1c)) < _LC5);
  }
  return 0;
}



/* Basis::is_rotation() const */

ulong __thiscall Basis::is_rotation(Basis *this)

{
  ulong uVar1;
  float fVar2;
  
  uVar1 = is_conformal(this);
  if (((char)uVar1 != '\0') &&
     (fVar2 = ((*(float *)(this + 0x10) * *(float *)(this + 0x20) -
               *(float *)(this + 0x1c) * *(float *)(this + 0x14)) * *(float *)this -
              (*(float *)(this + 0x20) * *(float *)(this + 4) -
              *(float *)(this + 0x1c) * *(float *)(this + 8)) * *(float *)(this + 0xc)) +
              (*(float *)(this + 0x14) * *(float *)(this + 4) -
              *(float *)(this + 0x10) * *(float *)(this + 8)) * *(float *)(this + 0x18),
     fVar2 != _LC4)) {
    fVar2 = ABS(fVar2 - _LC4);
    uVar1 = (ulong)CONCAT31((int3)((uint)fVar2 >> 8),fVar2 < _LC6);
  }
  return uVar1;
}



/* Basis::is_symmetric() const */

undefined4 __thiscall Basis::is_symmetric(Basis *this)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  
  fVar1 = *(float *)(this + 4);
  if (*(float *)(this + 0xc) == fVar1) {
LAB_00100a2c:
    fVar1 = *(float *)(this + 8);
    if (*(float *)(this + 0x18) != fVar1) {
      fVar4 = _LC5;
      if (_LC5 <= ABS(fVar1) * _LC5) {
        fVar4 = ABS(fVar1) * _LC5;
      }
      if (fVar4 <= ABS(fVar1 - *(float *)(this + 0x18))) goto LAB_00100ac0;
    }
    fVar1 = *(float *)(this + 0x14);
    uVar3 = 1;
    if (*(float *)(this + 0x1c) != fVar1) {
      fVar2 = ABS(fVar1 - *(float *)(this + 0x1c));
      fVar4 = _LC5;
      if (_LC5 <= ABS(fVar1) * _LC5) {
        fVar4 = ABS(fVar1) * _LC5;
      }
      return CONCAT31((int3)((uint)fVar2 >> 8),fVar2 < fVar4);
    }
  }
  else {
    fVar4 = _LC5;
    if (_LC5 <= ABS(fVar1) * _LC5) {
      fVar4 = ABS(fVar1) * _LC5;
    }
    if (ABS(fVar1 - *(float *)(this + 0xc)) < fVar4) goto LAB_00100a2c;
LAB_00100ac0:
    uVar3 = 0;
  }
  return uVar3;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Basis::diagonalize() */

undefined1 (*) [16] Basis::diagonalize(void)

{
  char cVar1;
  long lVar2;
  int iVar3;
  Basis *in_RSI;
  undefined1 (*in_RDI) [16];
  ulong uVar4;
  int iVar5;
  long in_FS_OFFSET;
  float fVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_60;
  float local_5c;
  undefined1 local_58 [4];
  float afStack_54 [3];
  undefined1 local_48 [8];
  float fStack_40;
  float fStack_3c;
  float local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  cVar1 = is_symmetric(in_RSI);
  if (cVar1 == '\0') {
    _err_print_error("diagonalize","core/math/basis.cpp",0x9a,
                     "Condition \"!is_symmetric()\" is true. Returning: Basis()",0,0);
    fVar17 = _LC4;
    *(undefined4 *)in_RDI[2] = 0x3f800000;
    *in_RDI = ZEXT416((uint)fVar17);
    in_RDI[1] = ZEXT416((uint)fVar17);
  }
  else {
    fVar17 = *(float *)(in_RSI + 4);
    fVar10 = *(float *)(in_RSI + 8);
    local_a4 = *(float *)(in_RSI + 0x14);
    fVar6 = fVar17 * fVar17;
    fVar8 = fVar10 * fVar10;
    fVar7 = local_a4 * local_a4;
    local_8c = fVar6 + fVar8 + fVar7;
    if (__LC12 < local_8c) {
      local_84 = *(float *)(in_RSI + 0x20);
      iVar5 = 0x400;
      local_90 = 0.0;
      local_ac = *(float *)(in_RSI + 0x10);
      local_a0 = 1.0;
      local_b0 = *(float *)(in_RSI + 0x1c);
      local_7c = 0.0;
      local_a8 = *(float *)in_RSI;
      local_94 = 0.0;
      local_9c = *(float *)(in_RSI + 0xc);
      local_74 = 1.0;
      local_98 = *(float *)(in_RSI + 0x18);
      local_80 = 0.0;
      local_78 = 0.0;
      local_88 = 0.0;
      local_70 = 1.0;
      while( true ) {
        fVar11 = local_84;
        if (fVar8 < fVar6) {
          if (fVar6 < fVar7) {
            iVar3 = 2;
            uVar4 = 1;
            fVar8 = local_a4;
            fVar6 = local_ac;
          }
          else {
            iVar3 = 1;
            uVar4 = 0;
            fVar8 = fVar17;
            fVar7 = fVar6;
            fVar6 = local_a8;
            fVar11 = local_ac;
          }
        }
        else {
          iVar3 = 2;
          uVar4 = (ulong)(fVar8 < fVar7);
          fVar8 = *(float *)(in_RSI + uVar4 * 0xc + 8);
          fVar7 = fVar8 * fVar8;
          fVar6 = *(float *)(in_RSI + uVar4 * 0x10);
        }
        fVar13 = _LC7;
        uVar9 = _LC8;
        fVar12 = _LC7;
        if (fVar6 != fVar11) {
          fVar14 = _LC5;
          if (_LC5 <= ABS(fVar11) * _LC5) {
            fVar14 = ABS(fVar11) * _LC5;
          }
          if (fVar14 <= ABS(fVar11 - fVar6)) {
            fVar6 = atanf((fVar8 + fVar8) / (fVar11 - fVar6));
            sincosf(fVar6 * _LC13,&local_5c,&local_60);
            fVar13 = local_60;
            uVar9 = (uint)local_5c ^ _LC14;
            fVar12 = local_5c;
          }
        }
        lVar2 = (long)iVar3;
        _local_58 = ZEXT416((uint)_LC4);
        local_38 = 1.0;
        _local_48 = _local_58;
        *(float *)(local_58 + lVar2 * 0x10) = fVar13;
        local_8c = local_8c - fVar7;
        *(float *)(local_58 + uVar4 * 0x10) = fVar13;
        *(float *)(local_58 + (lVar2 * 3 + uVar4) * 4) = fVar12;
        fVar7 = fStack_3c;
        *(uint *)(local_58 + (lVar2 + uVar4 * 3) * 4) = uVar9;
        fVar15 = fStack_40 * fVar10 + fVar7 * local_a4 + local_84 * local_38;
        fVar8 = fVar7 * local_ac + fStack_40 * fVar17 + local_b0 * local_38;
        fVar16 = local_9c * fStack_3c + local_a8 * fStack_40 + local_98 * local_38;
        fVar13 = local_a4 * (float)local_48._0_4_ + afStack_54[2] * fVar10 +
                 local_84 * (float)local_48._4_4_;
        fVar6 = local_ac * (float)local_48._0_4_ + afStack_54[2] * fVar17 +
                local_b0 * (float)local_48._4_4_;
        fVar14 = local_9c * (float)local_48._0_4_ + local_a8 * afStack_54[2] +
                 local_98 * (float)local_48._4_4_;
        fVar11 = local_a4 * afStack_54[0] + fVar10 * (float)local_58 + afStack_54[1] * local_84;
        fVar7 = local_ac * afStack_54[0] + fVar17 * (float)local_58 + local_b0 * afStack_54[1];
        fVar12 = local_9c * afStack_54[0] + local_a8 * (float)local_58 + local_98 * afStack_54[1];
        local_84 = fStack_3c * fVar8 + fStack_40 * fVar16 + local_38 * fVar15;
        local_b0 = fVar8 * (float)local_48._0_4_ + afStack_54[2] * fVar16 +
                   (float)local_48._4_4_ * fVar15;
        local_98 = fVar8 * afStack_54[0] + fVar16 * (float)local_58 + fVar15 * afStack_54[1];
        local_a4 = fStack_3c * fVar6 + fStack_40 * fVar14 + local_38 * fVar13;
        local_ac = (float)local_48._0_4_ * fVar6 + afStack_54[2] * fVar14 +
                   (float)local_48._4_4_ * fVar13;
        local_9c = fVar6 * afStack_54[0] + fVar14 * (float)local_58 + fVar13 * afStack_54[1];
        *(float *)(in_RSI + 0xc) = local_9c;
        fVar10 = fStack_3c * fVar7 + fStack_40 * fVar12 + local_38 * fVar11;
        *(float *)(in_RSI + 8) = fVar10;
        fVar17 = (float)local_48._0_4_ * fVar7 + afStack_54[2] * fVar12 +
                 (float)local_48._4_4_ * fVar11;
        local_a8 = fVar7 * afStack_54[0] + fVar12 * (float)local_58 + fVar11 * afStack_54[1];
        *(float *)(in_RSI + 4) = fVar17;
        *(float *)in_RSI = local_a8;
        *(float *)(in_RSI + 0x10) = local_ac;
        *(float *)(in_RSI + 0x18) = local_98;
        *(float *)(in_RSI + 0x1c) = local_b0;
        *(float *)(in_RSI + 0x14) = local_a4;
        fVar13 = local_7c * fStack_40 + fStack_3c * local_78 + local_70 * local_38;
        fVar16 = fStack_3c * local_74 + local_80 * fStack_40 + local_90 * local_38;
        fVar14 = fStack_40 * local_a0 + local_94 * fStack_3c + local_38 * local_88;
        fVar11 = afStack_54[2] * local_7c + local_78 * (float)local_48._0_4_ +
                 local_70 * (float)local_48._4_4_;
        fVar12 = local_74 * (float)local_48._0_4_ + afStack_54[2] * local_80 +
                 local_90 * (float)local_48._4_4_;
        fVar15 = (float)local_48._4_4_ * local_88 +
                 (float)local_48._0_4_ * local_94 + local_a0 * afStack_54[2];
        local_7c = afStack_54[0] * local_78 + local_7c * (float)local_58 + afStack_54[1] * local_70;
        local_80 = afStack_54[0] * local_74 + local_80 * (float)local_58 + local_90 * afStack_54[1];
        local_a0 = (float)local_58 * local_a0 + local_94 * afStack_54[0] + afStack_54[1] * local_88;
        if ((local_8c <= __LC12) || (iVar5 = iVar5 + -1, iVar5 == 0)) break;
        fVar8 = fVar10 * fVar10;
        fVar6 = fVar17 * fVar17;
        fVar7 = local_a4 * local_a4;
        local_94 = fVar15;
        local_90 = fVar16;
        local_88 = fVar14;
        local_78 = fVar11;
        local_74 = fVar12;
        local_70 = fVar13;
      }
      *(float *)(in_RSI + 0x20) = local_84;
    }
    else {
      fVar16 = 0.0;
      fVar15 = 0.0;
      local_7c = 0.0;
      fVar14 = 0.0;
      local_a0 = _LC4;
      local_80 = 0.0;
      fVar11 = fVar14;
      fVar12 = _LC4;
      fVar13 = _LC4;
    }
    *(float *)(*in_RDI + 0xc) = fVar15;
    *(float *)in_RDI[1] = fVar12;
    *(float *)*in_RDI = local_a0;
    *(float *)(in_RDI[1] + 4) = fVar11;
    *(float *)(*in_RDI + 4) = local_80;
    *(float *)(in_RDI[1] + 8) = fVar14;
    *(float *)(*in_RDI + 8) = local_7c;
    *(float *)(in_RDI[1] + 0xc) = fVar16;
    *(float *)in_RDI[2] = fVar13;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return in_RDI;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Basis::inverse() const */

void Basis::inverse(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *in_RSI;
  Basis *in_RDI;
  
  uVar1 = *in_RSI;
  uVar2 = in_RSI[1];
  uVar3 = in_RSI[2];
  uVar4 = in_RSI[3];
  *(undefined4 *)(in_RDI + 0x20) = *(undefined4 *)(in_RSI + 4);
  *(undefined8 *)in_RDI = uVar1;
  *(undefined8 *)(in_RDI + 8) = uVar2;
  *(undefined8 *)(in_RDI + 0x10) = uVar3;
  *(undefined8 *)(in_RDI + 0x18) = uVar4;
  invert(in_RDI);
  return;
}



/* Basis::transpose() */

void __thiscall Basis::transpose(Basis *this)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(this + 4);
  *(ulong *)(this + 4) =
       CONCAT44((int)((ulong)*(undefined8 *)(this + 0x14) >> 0x20),(int)*(undefined8 *)(this + 0xc))
  ;
  *(undefined4 *)(this + 0xc) = uVar1;
  uVar1 = *(undefined4 *)(this + 0x1c);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(this + 0x14);
  *(ulong *)(this + 0x14) = CONCAT44(*(undefined4 *)(this + 8),uVar1);
  return;
}



/* Basis::transposed() const */

void Basis::transposed(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *in_RSI;
  undefined8 *in_RDI;
  
  uVar2 = *in_RSI;
  uVar3 = in_RSI[1];
  uVar4 = in_RSI[3];
  uVar1 = *(undefined4 *)(in_RSI + 4);
  in_RDI[2] = in_RSI[2];
  in_RDI[3] = uVar4;
  *in_RDI = uVar2;
  in_RDI[1] = uVar3;
  *(undefined4 *)(in_RDI + 4) = uVar1;
  uVar1 = *(undefined4 *)((long)in_RDI + 4);
  *(ulong *)((long)in_RDI + 4) =
       CONCAT44((int)((ulong)*(undefined8 *)((long)in_RDI + 0x14) >> 0x20),
                (int)*(undefined8 *)((long)in_RDI + 0xc));
  *(undefined4 *)((long)in_RDI + 0xc) = uVar1;
  uVar1 = *(undefined4 *)((long)in_RDI + 0x1c);
  *(undefined4 *)((long)in_RDI + 0x1c) = *(undefined4 *)((long)in_RDI + 0x14);
  *(ulong *)((long)in_RDI + 0x14) = CONCAT44(*(undefined4 *)(in_RDI + 1),uVar1);
  return;
}



/* Basis::from_scale(Vector3 const&) */

Basis * __thiscall Basis::from_scale(Basis *this,Vector3 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar2 = *(undefined4 *)(param_1 + 4);
  *(undefined8 *)(this + 0xc) = 0;
  uVar3 = *(undefined4 *)param_1;
  *(undefined8 *)(this + 0x1c) = 0;
  *(undefined8 *)(this + 4) = 0;
  *(undefined8 *)(this + 0x14) = 0;
  *(undefined4 *)this = uVar3;
  *(undefined4 *)(this + 0x10) = uVar2;
  *(undefined4 *)(this + 0x20) = uVar1;
  return this;
}



/* Basis::scale(Vector3 const&) */

void __thiscall Basis::scale(Basis *this,Vector3 *param_1)

{
  *(float *)this = *(float *)this * *(float *)param_1;
  *(float *)(this + 4) = *(float *)(this + 4) * *(float *)param_1;
  *(float *)(this + 8) = *(float *)(this + 8) * *(float *)param_1;
  *(float *)(this + 0xc) = *(float *)(this + 0xc) * *(float *)(param_1 + 4);
  *(float *)(this + 0x10) = *(float *)(this + 0x10) * *(float *)(param_1 + 4);
  *(float *)(this + 0x14) = *(float *)(this + 0x14) * *(float *)(param_1 + 4);
  *(float *)(this + 0x18) = *(float *)(this + 0x18) * *(float *)(param_1 + 8);
  *(float *)(this + 0x1c) = *(float *)(this + 0x1c) * *(float *)(param_1 + 8);
  *(float *)(this + 0x20) = *(float *)(this + 0x20) * *(float *)(param_1 + 8);
  return;
}



/* Basis::scaled(Vector3 const&) const */

Vector3 * Basis::scaled(Vector3 *param_1)

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
  float *in_RDX;
  float *in_RSI;
  
  fVar1 = in_RDX[1];
  fVar2 = in_RDX[2];
  fVar3 = *in_RDX;
  fVar4 = in_RSI[4];
  fVar5 = in_RSI[5];
  fVar6 = in_RSI[6];
  fVar7 = in_RSI[7];
  fVar8 = *in_RSI;
  fVar9 = in_RSI[1];
  fVar10 = in_RSI[2];
  fVar11 = in_RSI[3];
  *(float *)(param_1 + 0x20) = in_RSI[8];
  *(float *)(param_1 + 0x10) = fVar4 * fVar1;
  *(float *)(param_1 + 0x14) = fVar5 * fVar1;
  *(float *)(param_1 + 0x18) = fVar6 * fVar2;
  *(float *)(param_1 + 0x1c) = fVar7 * fVar2;
  *(float *)(param_1 + 0x20) = fVar2 * *(float *)(param_1 + 0x20);
  *(float *)param_1 = fVar3 * fVar8;
  *(float *)(param_1 + 4) = fVar3 * fVar9;
  *(float *)(param_1 + 8) = fVar3 * fVar10;
  *(float *)(param_1 + 0xc) = fVar1 * fVar11;
  return param_1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Basis::get_uniform_scale() const */

float __thiscall Basis::get_uniform_scale(Basis *this)

{
  return (SQRT(*(float *)(this + 0x10) * *(float *)(this + 0x10) +
               *(float *)(this + 0xc) * *(float *)(this + 0xc) +
               *(float *)(this + 0x14) * *(float *)(this + 0x14)) +
          SQRT(*(float *)this * *(float *)this + *(float *)(this + 4) * *(float *)(this + 4) +
               *(float *)(this + 8) * *(float *)(this + 8)) +
         SQRT(*(float *)(this + 0x18) * *(float *)(this + 0x18) +
              *(float *)(this + 0x1c) * *(float *)(this + 0x1c) +
              *(float *)(this + 0x20) * *(float *)(this + 0x20))) / __LC15;
}



/* Basis::scaled_local(Vector3 const&) const */

Vector3 * Basis::scaled_local(Vector3 *param_1)

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
  float *in_RDX;
  float *in_RSI;
  
  fVar6 = in_RDX[2];
  fVar1 = in_RSI[8];
  fVar2 = in_RDX[1];
  fVar3 = *in_RDX;
  fVar7 = *in_RSI;
  fVar8 = in_RSI[1];
  fVar9 = in_RSI[3];
  fVar10 = in_RSI[4];
  fVar11 = in_RSI[6];
  fVar12 = in_RSI[7];
  fVar4 = in_RSI[5];
  fVar5 = in_RSI[2];
  *(float *)(param_1 + 0x20) = in_RSI[6] * 0.0 + in_RSI[7] * 0.0 + fVar6 * fVar1;
  *(float *)param_1 = fVar8 * 0.0 + fVar7 * fVar3 + fVar5 * 0.0;
  *(float *)(param_1 + 4) = fVar7 * 0.0 + fVar8 * fVar2 + fVar5 * 0.0;
  *(float *)(param_1 + 8) = fVar7 * 0.0 + fVar8 * 0.0 + fVar5 * fVar6;
  *(float *)(param_1 + 0xc) = fVar10 * 0.0 + fVar9 * fVar3 + fVar4 * 0.0;
  *(float *)(param_1 + 0x10) = fVar9 * 0.0 + fVar10 * fVar2 + fVar4 * 0.0;
  *(float *)(param_1 + 0x14) = fVar9 * 0.0 + fVar10 * 0.0 + fVar4 * fVar6;
  *(float *)(param_1 + 0x18) = fVar12 * 0.0 + fVar11 * fVar3 + fVar1 * 0.0;
  *(float *)(param_1 + 0x1c) = fVar11 * 0.0 + fVar12 * fVar2 + fVar1 * 0.0;
  return param_1;
}



/* Basis::scale_local(Vector3 const&) */

void Basis::scale_local(Vector3 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  scaled_local((Vector3 *)&local_48);
  *(undefined4 *)(param_1 + 0x20) = local_28;
  *(undefined8 *)param_1 = local_48;
  *(undefined8 *)(param_1 + 8) = uStack_40;
  *(undefined8 *)(param_1 + 0x10) = local_38;
  *(undefined8 *)(param_1 + 0x18) = uStack_30;
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Basis::scaled_orthogonal(Vector3 const&) const */

Vector3 * Basis::scaled_orthogonal(Vector3 *param_1)

{
  Vector3 *pVVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  Basis *pBVar4;
  Basis *pBVar5;
  float *in_RDX;
  float *pfVar6;
  undefined8 *in_RSI;
  Basis *pBVar7;
  float *pfVar8;
  Vector3 *pVVar9;
  Basis *this;
  float fVar10;
  long in_FS_OFFSET;
  char cVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined8 local_60;
  float local_58;
  undefined8 local_50;
  float local_48;
  float local_44 [3];
  undefined8 local_38;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  undefined8 uStack_20;
  float local_18;
  long local_10;
  
  fVar16 = _LC4;
  pVVar1 = param_1 + 0xc;
  fVar19 = *in_RDX;
  local_38 = *in_RSI;
  uVar2 = in_RSI[1];
  fVar17 = in_RDX[1];
  fVar18 = in_RDX[2];
  this = (Basis *)&local_38;
  uVar3 = in_RSI[2];
  uStack_20 = in_RSI[3];
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = *(float *)(in_RSI + 4);
  *(undefined8 *)param_1 = local_38;
  *(undefined8 *)(param_1 + 8) = uVar2;
  fVar17 = fVar17 - fVar16;
  fVar19 = fVar19 - fVar16;
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  *(undefined8 *)(param_1 + 0x18) = uStack_20;
  fVar18 = fVar18 - fVar16;
  *(float *)(param_1 + 0x20) = local_18;
  pBVar7 = (Basis *)&fStack_2c;
  fStack_30 = (float)uVar2;
  fStack_2c = (float)((ulong)uVar2 >> 0x20);
  fStack_28 = (float)uVar3;
  fStack_24 = (float)((ulong)uVar3 >> 0x20);
  cVar11 = (int)(fVar17 + fVar19 + fVar18) < 0;
  pVVar9 = param_1;
  fVar10 = fVar17;
  fVar14 = fVar17;
  auVar20 = orthonormalize(this);
  pfVar8 = (float *)&local_60;
  local_44[0] = 0.0;
  local_44[1] = 0.0;
  local_44[2] = 0.0;
  local_58 = fVar17 * fStack_24 + fVar19 * fStack_30 + fVar18 * local_18;
  local_60 = CONCAT44(fStack_28 * fVar14 + (float)((ulong)local_38 >> 0x20) * auVar20._12_4_ +
                      (float)((ulong)uStack_20 >> 0x20) * auVar20._4_4_,
                      fStack_2c * fVar10 + (float)local_38 * auVar20._8_4_ +
                      (float)uStack_20 * auVar20._0_4_);
  do {
    fVar19 = *(float *)(param_1 + 0xc);
    fVar17 = *(float *)param_1;
    fVar18 = *(float *)(param_1 + 0x18);
    fVar10 = *pfVar8;
    fVar14 = fVar17 * fVar17 + fVar19 * fVar19 + fVar18 * fVar18;
    pBVar4 = this;
    pfVar6 = local_44;
    do {
      if (fVar14 == 0.0) {
        fVar15 = 0.0;
        fVar13 = 0.0;
        fVar12 = 0.0;
      }
      else {
        fVar15 = SQRT(fVar14);
        fVar12 = fVar17 / fVar15;
        fVar13 = fVar19 / fVar15;
        fVar15 = fVar18 / fVar15;
      }
      pBVar5 = pBVar4 + 4;
      *pfVar6 = (float)((uint)(fVar12 * *(float *)pBVar4 + fVar13 * *(float *)(pBVar4 + 0xc) +
                              fVar15 * *(float *)(pBVar4 + 0x18)) & _LC16) * fVar10 + *pfVar6;
      pBVar4 = pBVar5;
      pfVar6 = pfVar6 + 1;
    } while (pBVar5 != pBVar7);
    param_1 = param_1 + 4;
    pfVar8 = pfVar8 + 1;
  } while (pVVar1 != param_1);
  fVar19 = local_44[0];
  fVar17 = local_44[1];
  local_48 = local_44[2];
  if ((bool)cVar11 != (int)(local_44[1] + local_44[0] + local_44[2]) < 0) {
    local_48 = (float)((uint)local_44[2] ^ _LC14);
    fVar19 = (float)((uint)local_44[0] ^ (uint)_LC17);
    fVar17 = (float)((uint)local_44[1] ^ _LC17._4_4_);
  }
  local_48 = local_48 + fVar16;
  local_50 = CONCAT44(fVar17 + _LC18._4_4_,fVar19 + (float)_LC18);
  scaled_local((Vector3 *)&local_98);
  *(undefined4 *)(pVVar9 + 0x20) = local_78;
  *(undefined8 *)pVVar9 = local_98;
  *(undefined8 *)(pVVar9 + 8) = uStack_90;
  *(undefined8 *)(pVVar9 + 0x10) = local_88;
  *(undefined8 *)(pVVar9 + 0x18) = uStack_80;
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pVVar9;
}



/* Basis::scale_orthogonal(Vector3 const&) */

void Basis::scale_orthogonal(Vector3 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  scaled_orthogonal((Vector3 *)&local_48);
  *(undefined8 *)param_1 = local_48;
  *(undefined8 *)(param_1 + 8) = uStack_40;
  *(undefined8 *)(param_1 + 0x10) = local_38;
  *(undefined8 *)(param_1 + 0x18) = uStack_30;
  *(undefined4 *)(param_1 + 0x20) = local_28;
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Basis::get_scale_abs() const */

undefined1  [16] __thiscall Basis::get_scale_abs(Basis *this)

{
  float fVar1;
  long in_FS_OFFSET;
  float fVar2;
  float fVar3;
  float fVar5;
  float fVar6;
  undefined1 auVar4 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  
  fVar8 = (float)*(undefined8 *)this;
  fVar9 = (float)((ulong)*(undefined8 *)this >> 0x20);
  fVar7 = (float)*(undefined8 *)(this + 0x18);
  fVar1 = (float)((ulong)*(undefined8 *)(this + 0x18) >> 0x20);
  fVar5 = (float)((ulong)*(undefined8 *)(this + 0x10) >> 0x20);
  fVar2 = (float)*(undefined8 *)(this + 0x10);
  auVar10._8_4_ =
       SQRT(*(float *)(this + 0x20) * *(float *)(this + 0x20) +
            *(float *)(this + 8) * *(float *)(this + 8) +
            *(float *)(this + 0x14) * *(float *)(this + 0x14));
  fVar6 = (float)((ulong)*(undefined8 *)(this + 8) >> 0x20);
  fVar3 = (float)*(undefined8 *)(this + 8);
  auVar4._0_4_ = fVar6 * fVar6 + fVar8 * fVar8 + fVar7 * fVar7;
  auVar4._4_4_ = fVar9 * fVar9 + fVar2 * fVar2 + fVar1 * fVar1;
  auVar4._8_4_ = fVar3 * fVar3 + fVar9 * fVar9 + 0.0;
  auVar4._12_4_ = fVar8 * fVar8 + fVar5 * fVar5 + 0.0;
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar4 = sqrtps(auVar4,auVar4);
    auVar10._0_8_ = auVar4._0_8_;
    auVar10._12_4_ = 0;
    return auVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Basis::get_scale_global() const */

void __thiscall Basis::get_scale_global(Basis *this)

{
  float fVar1;
  long in_FS_OFFSET;
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  
  fVar3 = (float)*(undefined8 *)(this + 8);
  fVar4 = (float)((ulong)*(undefined8 *)(this + 8) >> 0x20);
  fVar1 = (float)((ulong)*(undefined8 *)(this + 0x10) >> 0x20);
  auVar2._0_4_ = *(float *)(this + 4) * *(float *)(this + 4) +
                 (float)*(undefined8 *)this * (float)*(undefined8 *)this + fVar3 * fVar3;
  auVar2._4_4_ = *(float *)(this + 0x10) * *(float *)(this + 0x10) + fVar4 * fVar4 + fVar1 * fVar1;
  auVar2._8_8_ = 0;
  sqrtps(auVar2,auVar2);
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Basis::get_scale() const */

void __thiscall Basis::get_scale(Basis *this)

{
  long lVar1;
  long in_FS_OFFSET;
  float fVar2;
  float fVar3;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  fVar2 = ((*(float *)(this + 0x10) * *(float *)(this + 0x20) -
           *(float *)(this + 0x1c) * *(float *)(this + 0x14)) * *(float *)this -
          (*(float *)(this + 0x20) * *(float *)(this + 4) -
          *(float *)(this + 0x1c) * *(float *)(this + 8)) * *(float *)(this + 0xc)) +
          (*(float *)(this + 0x14) * *(float *)(this + 4) -
          *(float *)(this + 0x10) * *(float *)(this + 8)) * *(float *)(this + 0x18);
  fVar3 = _LC4;
  if (fVar2 <= 0.0) {
    fVar3 = (float)((uint)_LC19 & -(uint)(fVar2 < 0.0));
  }
  fVar2 = (float)get_scale_abs(this);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar2 * fVar3);
}



/* Basis::orthogonalize() */

void __thiscall Basis::orthogonalize(Basis *this)

{
  long in_FS_OFFSET;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined1 local_1c [12];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_1c = get_scale(this);
  orthonormalize(this);
  scaled_local((Vector3 *)&local_58);
  *(undefined8 *)this = local_58;
  *(undefined8 *)(this + 8) = uStack_50;
  *(undefined8 *)(this + 0x10) = local_48;
  *(undefined8 *)(this + 0x18) = uStack_40;
  *(undefined4 *)(this + 0x20) = local_38;
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Basis::orthogonalized() const */

void Basis::orthogonalized(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *in_RSI;
  Basis *in_RDI;
  long in_FS_OFFSET;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined1 local_1c [12];
  long local_10;
  
  uVar2 = in_RSI[1];
  uVar3 = in_RSI[2];
  uVar4 = in_RSI[3];
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = *(undefined4 *)(in_RSI + 4);
  *(undefined8 *)in_RDI = *in_RSI;
  *(undefined8 *)(in_RDI + 8) = uVar2;
  *(undefined4 *)(in_RDI + 0x20) = uVar1;
  *(undefined8 *)(in_RDI + 0x10) = uVar3;
  *(undefined8 *)(in_RDI + 0x18) = uVar4;
  local_1c = get_scale(in_RDI);
  orthonormalize(in_RDI);
  scaled_local((Vector3 *)&local_58);
  *(undefined8 *)in_RDI = local_58;
  *(undefined8 *)(in_RDI + 8) = uStack_50;
  *(undefined8 *)(in_RDI + 0x10) = local_48;
  *(undefined8 *)(in_RDI + 0x18) = uStack_40;
  *(undefined4 *)(in_RDI + 0x20) = local_38;
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Basis::rotref_posscale_decomposition(Basis&) const */

undefined1  [16] __thiscall Basis::rotref_posscale_decomposition(Basis *this,Basis *param_1)

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
  char cVar11;
  char *pcVar12;
  Basis *this_00;
  undefined8 uVar13;
  long in_FS_OFFSET;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  ulong uVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [12];
  float local_108;
  float fStack_104;
  ulong local_78;
  float local_70;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float local_48;
  undefined1 local_38 [8];
  float fStack_30;
  float fStack_2c;
  undefined1 local_28 [8];
  float fStack_20;
  float fStack_1c;
  float local_18;
  long local_10;
  
  fVar4 = *(float *)this;
  fVar5 = *(float *)(this + 4);
  fVar16 = *(float *)(this + 8);
  fVar6 = *(float *)(this + 0xc);
  fVar7 = *(float *)(this + 0x10);
  fVar8 = *(float *)(this + 0x14);
  fVar9 = *(float *)(this + 0x18);
  fVar10 = *(float *)(this + 0x1c);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  fVar18 = *(float *)(this + 0x1c);
  fVar1 = *(float *)(this + 0x20);
  uVar13 = *(undefined8 *)(this + 0x1c);
  fVar2 = *(float *)(this + 0x14);
  fVar3 = *(float *)(this + 8);
  if (((*(float *)(this + 0x10) * fVar1 - fVar18 * fVar2) * *(float *)this -
      (*(float *)(this + 4) * fVar1 - fVar18 * fVar16) * *(float *)(this + 0xc)) +
      (*(float *)(this + 4) * fVar2 - *(float *)(this + 0x10) * fVar16) * fVar9 == 0.0) {
    uVar13 = 0x14c;
    pcVar12 = "Condition \"determinant() == 0\" is true. Returning: Vector3()";
  }
  else {
    local_108 = (float)uVar13;
    fStack_104 = (float)((ulong)uVar13 >> 0x20);
    local_58 = fVar7 * fVar7 + fVar5 * fVar5 + fVar10 * local_108;
    fStack_54 = fVar8 * fVar7 + fVar16 * fVar5 + fVar10 * fStack_104;
    fStack_50 = fVar6 * fVar8 + fVar16 * fVar4 + fVar9 * fVar1;
    fStack_4c = fVar8 * fVar7 + fVar16 * fVar5 + fVar10 * fVar1;
    local_68 = fVar6 * fVar6 + fVar4 * fVar4 + fVar9 * fVar9;
    fStack_64 = fVar7 * fVar6 + fVar5 * fVar4 + fVar18 * fVar9;
    fStack_60 = fVar8 * fVar6 + fVar16 * fVar4 + fVar1 * fVar9;
    fStack_5c = fVar7 * fVar6 + fVar5 * fVar4 + fVar18 * fVar9;
    local_48 = fVar16 * fVar16 + fVar2 * fVar2 + fVar1 * fVar1;
    cVar11 = is_diagonal((Basis *)&local_68);
    if (cVar11 == '\0') {
      uVar13 = 0x14f;
      pcVar12 = "Condition \"!m.is_diagonal()\" is true. Returning: Vector3()";
    }
    else {
      auVar20 = get_scale(this_00);
      fVar16 = auVar20._8_4_;
      auVar15._0_8_ = auVar20._0_8_;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = _LC18;
      uVar17 = _LC23 & auVar15._0_8_;
      auVar15._8_8_ = _LC18;
      auVar15 = divps(auVar14,auVar15);
      local_18 = _LC4;
      local_78 = auVar15._0_8_;
      local_70 = _LC4 / fVar16;
      _local_38 = ZEXT416((uint)_LC4);
      _local_28 = _local_38;
      scale((Basis *)local_38,(Vector3 *)&local_78);
      *(float *)(param_1 + 0x20) =
           fVar9 * fStack_30 + (float)local_28._4_4_ * fVar18 + fVar1 * local_18;
      *(float *)param_1 = (float)local_38._0_4_ * fVar4 + fStack_2c * fVar5 + fStack_20 * fVar3;
      *(float *)(param_1 + 4) =
           (float)local_38._4_4_ * fVar4 + (float)local_28._0_4_ * fVar5 + fStack_1c * fVar3;
      *(float *)(param_1 + 8) = fStack_30 * fVar4 + (float)local_28._4_4_ * fVar5 + local_18 * fVar3
      ;
      *(float *)(param_1 + 0xc) =
           (float)local_38._0_4_ * fVar6 + fStack_2c * fVar7 + fStack_20 * fVar2;
      *(float *)(param_1 + 0x10) =
           (float)local_28._0_4_ * fVar7 + fVar6 * (float)local_38._4_4_ + fStack_1c * fVar2;
      *(float *)(param_1 + 0x14) =
           (float)local_28._4_4_ * fVar7 + fVar6 * fStack_30 + local_18 * fVar2;
      *(float *)(param_1 + 0x18) =
           fStack_2c * fVar10 + fVar9 * (float)local_38._0_4_ + fStack_20 * fVar1;
      *(float *)(param_1 + 0x1c) =
           (float)local_28._0_4_ * fVar10 + fVar9 * (float)local_38._4_4_ + fStack_1c * fVar1;
      cVar11 = is_orthogonal(param_1);
      if (cVar11 != '\0') {
        local_70 = ABS(fVar16);
        local_78 = uVar17;
        goto LAB_001022dd;
      }
      uVar13 = 0x156;
      pcVar12 = "Condition \"!rotref.is_orthogonal()\" is true. Returning: Vector3()";
    }
  }
  _err_print_error("rotref_posscale_decomposition","core/math/basis.cpp",uVar13,pcVar12,0,0);
  local_78 = 0;
  local_70 = 0.0;
LAB_001022dd:
  auVar19._8_4_ = local_70;
  auVar19._0_8_ = local_78;
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  auVar19._12_4_ = 0;
  return auVar19;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Basis::get_euler(EulerOrder) const */

undefined1  [16] __thiscall Basis::get_euler(Basis *this,undefined4 param_2)

{
  float __y;
  long lVar1;
  long in_FS_OFFSET;
  float fVar2;
  undefined1 auVar3 [16];
  float local_40;
  float local_3c;
  float local_20;
  float fStack_1c;
  float local_18;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  switch(param_2) {
  case 0:
    fVar2 = *(float *)(this + 8);
    if (_LC27 <= fVar2) {
      local_20 = atan2f(*(float *)(this + 0x1c),*(float *)(this + 0x10));
      local_18 = 0.0;
      fStack_1c = _LC26;
    }
    else if (fVar2 <= __LC28) {
      local_20 = atan2f(*(float *)(this + 0x1c),*(float *)(this + 0x10));
      local_18 = 0.0;
      fStack_1c = _LC25;
    }
    else if (((*(float *)(this + 0xc) == 0.0) && (*(float *)(this + 4) == 0.0)) &&
            ((*(float *)(this + 0x14) == 0.0 &&
             ((*(float *)(this + 0x1c) == 0.0 && (_LC4 == *(float *)(this + 0x10))))))) {
      fStack_1c = atan2f(fVar2,*(float *)this);
      local_18 = 0.0;
      local_20 = 0.0;
    }
    else {
      local_20 = atan2f((float)((uint)*(float *)(this + 0x14) ^ _LC14),*(float *)(this + 0x20));
      fStack_1c = asinf(fVar2);
      local_18 = atan2f((float)(*(uint *)(this + 4) ^ _LC14),*(float *)this);
    }
    break;
  case 1:
    fVar2 = *(float *)(this + 4);
    if (_LC27 <= fVar2) {
      local_20 = atan2f(*(float *)(this + 0x14),*(float *)(this + 0x20));
      fStack_1c = 0.0;
      local_20 = (float)((uint)local_20 ^ _LC14);
      local_18 = _LC25;
      break;
    }
    if (fVar2 <= __LC28) {
      local_20 = atan2f(*(float *)(this + 0x14),*(float *)(this + 0x20));
      fStack_1c = 0.0;
      local_20 = (float)((uint)local_20 ^ _LC14);
      local_18 = _LC26;
      break;
    }
    local_3c = atan2f(*(float *)(this + 0x1c),*(float *)(this + 0x10));
    local_40 = atan2f(*(float *)(this + 8),*(float *)this);
    fVar2 = (float)((uint)fVar2 ^ _LC14);
    goto LAB_001026ae;
  case 2:
    fVar2 = *(float *)(this + 0x14);
    if (_LC27 <= fVar2) {
      fStack_1c = atan2f(*(float *)(this + 4),*(float *)this);
      local_18 = 0.0;
      fStack_1c = (float)((uint)fStack_1c ^ _LC14);
      local_20 = _LC25;
    }
    else if (fVar2 <= __LC28) {
      fStack_1c = atan2f(*(float *)(this + 4),*(float *)this);
      local_18 = 0.0;
      local_20 = _LC26;
    }
    else {
      __y = *(float *)(this + 0xc);
      if ((((__y == 0.0) && (*(float *)(this + 4) == 0.0)) && (*(float *)(this + 8) == 0.0)) &&
         ((*(float *)(this + 0x18) == 0.0 && (_LC4 == *(float *)this)))) {
        local_20 = atan2f((float)((uint)fVar2 ^ _LC14),*(float *)(this + 0x10));
        local_18 = 0.0;
        fStack_1c = 0.0;
      }
      else {
        local_20 = asinf((float)((uint)fVar2 ^ _LC14));
        fStack_1c = atan2f(*(float *)(this + 8),*(float *)(this + 0x20));
        local_18 = atan2f(__y,*(float *)(this + 0x10));
      }
    }
    break;
  case 3:
    fVar2 = *(float *)(this + 0xc);
    if (_LC27 <= fVar2) {
      local_20 = atan2f(*(float *)(this + 0x1c),*(float *)(this + 0x20));
      fStack_1c = 0.0;
      local_18 = _LC26;
      break;
    }
    if (fVar2 <= __LC28) {
      local_20 = atan2f(*(float *)(this + 0x1c),*(float *)(this + 0x20));
      fStack_1c = 0.0;
      local_18 = _LC25;
      break;
    }
    local_3c = atan2f((float)(*(uint *)(this + 0x14) ^ _LC14),*(float *)(this + 0x10));
    local_40 = atan2f((float)(*(uint *)(this + 0x18) ^ _LC14),*(float *)this);
LAB_001026ae:
    local_18 = asinf(fVar2);
    local_20 = local_3c;
    fStack_1c = local_40;
    break;
  case 4:
    fVar2 = *(float *)(this + 0x1c);
    if (_LC27 <= fVar2) {
      fStack_1c = atan2f(*(float *)(this + 8),*(float *)this);
      local_18 = 0.0;
      local_20 = _LC26;
    }
    else if (__LC28 < fVar2) {
      local_20 = asinf(fVar2);
      fStack_1c = atan2f((float)(*(uint *)(this + 0x18) ^ _LC14),*(float *)(this + 0x20));
      local_18 = atan2f((float)(*(uint *)(this + 4) ^ _LC14),*(float *)(this + 0x10));
    }
    else {
      fStack_1c = atan2f(*(float *)(this + 8),*(float *)this);
      local_18 = 0.0;
      local_20 = _LC25;
    }
    break;
  case 5:
    fVar2 = *(float *)(this + 0x18);
    if (_LC27 <= fVar2) {
      local_18 = atan2f(*(float *)(this + 4),*(float *)(this + 0x10));
      local_20 = 0.0;
      local_18 = (float)((uint)local_18 ^ _LC14);
      fStack_1c = _LC25;
    }
    else if (__LC28 < fVar2) {
      local_20 = atan2f(*(float *)(this + 0x1c),*(float *)(this + 0x20));
      fStack_1c = asinf((float)((uint)fVar2 ^ _LC14));
      local_18 = atan2f(*(float *)(this + 0xc),*(float *)this);
    }
    else {
      local_18 = atan2f(*(float *)(this + 4),*(float *)(this + 0x10));
      local_18 = (float)((uint)local_18 ^ _LC14);
      local_20 = 0.0;
      fStack_1c = _LC26;
    }
    break;
  default:
    _err_print_error("get_euler","core/math/basis.cpp",0x28c,
                     "Method/function failed. Returning: Vector3()",
                     "Invalid parameter for get_euler(order)",0,0);
    local_18 = 0.0;
    local_20 = 0.0;
    fStack_1c = 0.0;
  }
  auVar3._4_4_ = fStack_1c;
  auVar3._0_4_ = local_20;
  auVar3._8_4_ = local_18;
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar3._12_4_ = 0;
    return auVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Basis::get_euler_normalized(EulerOrder) const */

void Basis::get_euler_normalized(undefined8 *param_1)

{
  Basis *this;
  long in_FS_OFFSET;
  undefined4 extraout_XMM1_Da;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  float local_18;
  long local_10;
  
  local_38 = *param_1;
  uStack_30 = param_1[1];
  local_28 = param_1[2];
  uStack_20 = param_1[3];
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = *(float *)(param_1 + 4);
  this = (Basis *)&local_38;
  orthonormalize(this);
  if ((((float)local_28 * local_18 - uStack_20._4_4_ * local_28._4_4_) * (float)local_38 -
      (local_18 * local_38._4_4_ - uStack_20._4_4_ * (float)uStack_30) * uStack_30._4_4_) +
      (local_28._4_4_ * local_38._4_4_ - (float)local_28 * (float)uStack_30) * (float)uStack_20 <
      0.0) {
    local_40 = 0xbf800000;
    local_48 = _LC19;
    scale(this,(Vector3 *)&local_48);
  }
  local_48 = get_euler();
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
  local_40 = extraout_XMM1_Da;
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Basis::set_euler(Vector3 const&, EulerOrder) */

ulong __thiscall Basis::set_euler(Basis *this,float *param_1,uint param_3)

{
  ulong uVar1;
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
  float fVar15;
  float fVar16;
  float fVar17;
  float local_30;
  float local_2c;
  
  sincosf(*param_1,&local_2c,&local_30);
  fVar5 = local_2c;
  fVar10 = local_30;
  fVar4 = (float)((uint)local_2c ^ _LC14);
  sincosf(param_1[1],&local_2c,&local_30);
  fVar13 = local_2c;
  fVar3 = local_30;
  fVar8 = (float)((uint)local_2c ^ _LC14);
  sincosf(param_1[2],&local_2c,&local_30);
  fVar2 = (float)((uint)local_2c ^ _LC14);
  if (param_3 < 6) {
    uVar1 = (long)&switchD_00102c75::switchdataD_001068dc +
            (long)(int)(&switchD_00102c75::switchdataD_001068dc)[param_3];
    switch(param_3) {
    case 0:
      fVar14 = local_30 * 0.0;
      fVar17 = local_2c * 0.0;
      fVar7 = fVar3 * 0.0;
      fVar6 = local_2c + fVar14 + 0.0;
      fVar11 = fVar8 * 0.0 + 0.0 + fVar3;
      fVar12 = fVar13 * local_2c + fVar14 + fVar7;
      fVar15 = fVar8 * local_30 + fVar17 + fVar7;
      fVar9 = (local_30 - fVar17) + 0.0;
      fVar7 = fVar7 + 0.0 + fVar13;
      fVar8 = fVar7 * 0.0;
      fVar17 = fVar3 * local_30 + fVar17 + fVar13 * 0.0;
      fVar3 = fVar2 * fVar3 + fVar14 + fVar13 * 0.0;
      fVar2 = fVar17 * 0.0;
      fVar13 = fVar3 * 0.0;
      fVar3 = fVar3 + fVar9 * 0.0 + fVar12 * 0.0;
      *(ulong *)this = CONCAT44(fVar3,fVar6 * 0.0 + fVar17 + fVar15 * 0.0);
      *(ulong *)(this + 8) =
           CONCAT44(fVar10 * fVar6 + fVar2 + fVar4 * fVar15,fVar7 + 0.0 + fVar11 * 0.0);
      *(float *)(this + 0x20) = fVar5 * 0.0 + fVar8 + fVar11 * fVar10;
      *(ulong *)(this + 0x10) =
           CONCAT44(fVar10 * 0.0 + fVar8 + fVar4 * fVar11,fVar10 * fVar9 + fVar13 + fVar4 * fVar12);
      *(ulong *)(this + 0x18) =
           CONCAT44(fVar9 * fVar5 + fVar13 + fVar12 * fVar10,fVar6 * fVar5 + fVar2 + fVar15 * fVar10
                   );
      return (ulong)(uint)fVar3;
    case 1:
      fVar11 = local_30 * 0.0;
      fVar7 = fVar10 * 0.0;
      fVar12 = fVar5 * local_30 + fVar2 * 0.0 + fVar7;
      fVar6 = fVar5 * local_2c + fVar11 + fVar7;
      fVar9 = fVar5 * 0.0 + 0.0 + fVar10;
      fVar5 = (fVar7 + 0.0) - fVar5;
      fVar7 = (fVar11 - local_2c) + 0.0;
      fVar11 = fVar10 * local_2c + fVar11 + fVar4 * 0.0;
      fVar10 = fVar2 * 0.0 + fVar10 * local_30 + fVar4 * 0.0;
      fVar4 = fVar12 * 0.0;
      fVar14 = fVar7 * 0.0;
      fVar2 = local_2c * 0.0 + local_30 + 0.0;
      fVar17 = fVar10 * 0.0;
      *(float *)this = fVar3 * fVar2 + fVar14 + fVar8 * 0.0;
      *(float *)(this + 4) = fVar2 * 0.0 + fVar7 + 0.0;
      *(float *)(this + 8) = fVar2 * fVar13 + fVar14 + fVar3 * 0.0;
      *(float *)(this + 0xc) = fVar3 * fVar11 + fVar17 + fVar8 * fVar5;
      *(float *)(this + 0x20) = fVar6 * fVar13 + fVar4 + fVar9 * fVar3;
      *(ulong *)(this + 0x10) =
           CONCAT44(fVar11 * fVar13 + fVar17 + fVar5 * fVar3,fVar10 + fVar11 * 0.0 + fVar5 * 0.0);
      *(ulong *)(this + 0x18) =
           CONCAT44(fVar6 * 0.0 + fVar12 + fVar9 * 0.0,fVar3 * fVar6 + fVar4 + fVar8 * fVar9);
      return uVar1;
    case 2:
      fVar4 = fVar4 * 0.0;
      fVar6 = fVar3 * 0.0;
      fVar9 = fVar10 * 0.0;
      fVar12 = (0.0 - fVar5) + fVar9;
      fVar7 = fVar8 * 0.0 + fVar4 + fVar10 * fVar3;
      fVar11 = fVar8 * 0.0 + fVar9 + fVar5 * fVar3;
      fVar8 = (fVar10 + 0.0) - fVar4;
      fVar9 = fVar9 + fVar6 + fVar5 * fVar13;
      fVar5 = fVar4 + fVar6 + fVar10 * fVar13;
      fVar4 = fVar7 * 0.0;
      fVar6 = (0.0 - fVar13) + fVar6;
      fVar17 = fVar12 * 0.0;
      fVar10 = fVar3 + 0.0 + fVar13 * 0.0;
      fVar3 = fVar5 * 0.0;
      *(float *)this = local_30 * fVar10 + local_2c * fVar9 + fVar3;
      *(float *)(this + 4) = local_30 * fVar9 + fVar2 * fVar10 + fVar3;
      *(float *)(this + 8) = fVar10 * 0.0 + fVar9 * 0.0 + fVar5;
      *(float *)(this + 0xc) = local_30 * 0.0 + local_2c * fVar8 + fVar17;
      *(float *)(this + 0x20) = fVar6 * 0.0 + fVar11 * 0.0 + fVar7;
      *(ulong *)(this + 0x10) =
           CONCAT44(fVar8 * 0.0 + 0.0 + fVar12,fVar2 * 0.0 + local_30 * fVar8 + fVar17);
      *(ulong *)(this + 0x18) =
           CONCAT44(fVar2 * fVar6 + local_30 * fVar11 + fVar4,
                    local_30 * fVar6 + local_2c * fVar11 + fVar4);
      return uVar1;
    case 3:
      fVar17 = local_2c * 0.0;
      fVar14 = local_30 * 0.0;
      fVar9 = fVar3 * 0.0;
      fVar15 = (local_30 - fVar17) + 0.0;
      fVar6 = local_2c + fVar14 + 0.0;
      fVar12 = fVar13 * local_2c + fVar14 + fVar9;
      fVar7 = fVar8 * local_30 + fVar17 + fVar9;
      fVar11 = fVar8 * 0.0 + 0.0 + fVar3;
      fVar8 = fVar9 + 0.0 + fVar13;
      fVar2 = fVar2 * fVar3 + fVar14 + fVar13 * 0.0;
      fVar3 = fVar3 * local_30 + fVar17 + fVar13 * 0.0;
      *(float *)this = fVar2 * 0.0 + fVar3 + fVar8 * 0.0;
      *(float *)(this + 4) = fVar3 * 0.0 + fVar10 * fVar2 + fVar5 * fVar8;
      *(float *)(this + 8) = fVar3 * 0.0 + fVar4 * fVar2 + fVar8 * fVar10;
      *(float *)(this + 0xc) = fVar15 * 0.0 + fVar6 + 0.0;
      *(float *)(this + 0x20) = fVar7 * 0.0 + fVar12 * fVar4 + fVar11 * fVar10;
      *(float *)(this + 0x10) = fVar10 * fVar15 + fVar6 * 0.0 + fVar5 * 0.0;
      *(float *)(this + 0x14) = fVar15 * fVar4 + fVar6 * 0.0 + fVar10 * 0.0;
      *(float *)(this + 0x18) = fVar7 + fVar12 * 0.0 + fVar11 * 0.0;
      *(float *)(this + 0x1c) = fVar10 * fVar12 + fVar7 * 0.0 + fVar5 * fVar11;
      return uVar1;
    case 4:
      fVar15 = fVar10 * 0.0;
      fVar11 = local_2c * 0.0;
      fVar16 = local_30 * 0.0;
      fVar17 = fVar4 * 0.0;
      fVar9 = fVar15 + 0.0 + fVar5;
      fVar6 = (local_30 - fVar11) + 0.0;
      fVar7 = (fVar10 * local_30 + fVar11) - fVar17;
      fVar2 = (fVar2 * fVar10 + fVar16) - fVar17;
      fVar12 = fVar9 * 0.0;
      fVar4 = fVar4 * local_30 + fVar11 + fVar15;
      fVar14 = fVar2 * 0.0;
      fVar10 = fVar17 + 0.0 + fVar10;
      fVar15 = fVar5 * local_2c + fVar16 + fVar15;
      fVar5 = local_2c + fVar16 + 0.0;
      fVar11 = fVar7 * 0.0;
      *(float *)this = fVar3 * fVar6 + fVar14 + fVar8 * fVar15;
      *(float *)(this + 4) = fVar2 + fVar6 * 0.0 + fVar15 * 0.0;
      *(float *)(this + 8) = fVar6 * fVar13 + fVar14 + fVar15 * fVar3;
      *(float *)(this + 0xc) = fVar3 * fVar5 + fVar11 + fVar8 * fVar4;
      *(ulong *)(this + 0x10) =
           CONCAT44(fVar5 * fVar13 + fVar11 + fVar4 * fVar3,fVar5 * 0.0 + fVar7 + fVar4 * 0.0);
      *(float *)(this + 0x18) = fVar3 * 0.0 + fVar12 + fVar8 * fVar10;
      *(float *)(this + 0x1c) = fVar9 + 0.0 + fVar10 * 0.0;
      *(float *)(this + 0x20) = fVar13 * 0.0 + fVar12 + fVar10 * fVar3;
      return uVar1;
    case 5:
      fVar17 = fVar3 * 0.0;
      fVar6 = local_30 * 0.0;
      fVar2 = fVar13 * 0.0;
      fVar15 = local_2c * 0.0;
      fVar8 = (fVar17 + 0.0) - fVar13;
      fVar12 = fVar2 + 0.0 + fVar3;
      fVar9 = local_30 + fVar15 + 0.0;
      fVar11 = (fVar3 * local_2c + fVar6) - fVar2;
      fVar2 = (fVar3 * local_30 - fVar15) - fVar2;
      fVar3 = fVar8 * 0.0;
      fVar7 = fVar13 * local_2c + fVar6 + fVar17;
      fVar6 = (fVar6 - local_2c) + 0.0;
      fVar14 = fVar11 * 0.0;
      fVar17 = (fVar13 * local_30 - fVar15) + fVar17;
      *(float *)this = fVar17 * 0.0 + fVar2 + fVar6 * 0.0;
      *(float *)(this + 4) = fVar5 * fVar17 + fVar10 * fVar6 + fVar2 * 0.0;
      *(float *)(this + 8) = fVar17 * fVar10 + fVar4 * fVar6 + fVar2 * 0.0;
      *(float *)(this + 0xc) = fVar7 * 0.0 + fVar11 + fVar9 * 0.0;
      *(ulong *)(this + 0x10) =
           CONCAT44(fVar9 * fVar4 + fVar14 + fVar7 * fVar10,fVar10 * fVar9 + fVar14 + fVar5 * fVar7)
      ;
      *(float *)(this + 0x20) = fVar4 * 0.0 + fVar3 + fVar10 * fVar12;
      *(ulong *)(this + 0x18) =
           CONCAT44(fVar10 * 0.0 + fVar3 + fVar5 * fVar12,fVar8 + 0.0 + fVar12 * 0.0);
      return uVar1;
    }
  }
  _err_print_error("set_euler","core/math/basis.cpp",0x2b5,"Method/function failed.",
                   "Invalid Euler order parameter.",0);
  return 0;
}



/* Basis::rotated(Vector3 const&, EulerOrder) const */

float * Basis::rotated(float *param_1,float *param_2,undefined8 param_3,undefined4 param_4)

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
  long in_FS_OFFSET;
  undefined1 local_48 [8];
  float fStack_40;
  float fStack_3c;
  undefined1 local_38 [8];
  float fStack_30;
  float fStack_2c;
  float local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = 1.0;
  _local_48 = ZEXT416(_LC4);
  _local_38 = ZEXT416(_LC4);
  set_euler((Basis *)local_48,param_3,param_4);
  fVar4 = *param_2;
  fVar5 = param_2[1];
  fVar6 = param_2[2];
  fVar7 = param_2[3];
  fVar1 = param_2[8];
  fVar8 = param_2[4];
  fVar9 = param_2[5];
  fVar2 = param_2[6];
  fVar3 = param_2[7];
  param_1[8] = fVar1 * local_28 + param_2[2] * fStack_30 + param_2[5] * fStack_2c;
  *param_1 = fVar7 * (float)local_48._4_4_ + fVar4 * (float)local_48._0_4_ + fStack_40 * fVar2;
  param_1[1] = fVar8 * (float)local_48._4_4_ + fVar5 * (float)local_48._0_4_ + fStack_40 * fVar3;
  param_1[2] = fVar9 * (float)local_48._4_4_ + fVar6 * (float)local_48._0_4_ + fStack_40 * fVar1;
  param_1[3] = fVar7 * (float)local_38._0_4_ + fVar4 * fStack_3c + (float)local_38._4_4_ * fVar2;
  param_1[4] = fVar8 * (float)local_38._0_4_ + fVar5 * fStack_3c + fVar3 * (float)local_38._4_4_;
  param_1[5] = fVar9 * (float)local_38._0_4_ + fVar6 * fStack_3c + fVar1 * (float)local_38._4_4_;
  param_1[6] = fVar7 * fStack_2c + fVar4 * fStack_30 + fVar2 * local_28;
  param_1[7] = fVar8 * fStack_2c + fVar5 * fStack_30 + fVar3 * local_28;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Basis::rotate(Vector3 const&, EulerOrder) */

void __thiscall Basis::rotate(Basis *this,undefined8 param_1,undefined4 param_3)

{
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  rotated(&local_48,this,param_1,param_3);
  *(undefined8 *)this = local_48;
  *(undefined8 *)(this + 8) = uStack_40;
  *(undefined8 *)(this + 0x10) = local_38;
  *(undefined8 *)(this + 0x18) = uStack_30;
  *(undefined4 *)(this + 0x20) = local_28;
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Basis::is_equal_approx(Basis const&) const */

undefined8 Basis::is_equal_approx(Basis *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = Vector3::is_equal_approx((Vector3 *)param_1);
  if (cVar1 != '\0') {
    cVar1 = Vector3::is_equal_approx((Vector3 *)(param_1 + 0xc));
    if (cVar1 != '\0') {
      uVar2 = Vector3::is_equal_approx((Vector3 *)(param_1 + 0x18));
      return uVar2;
    }
  }
  return 0;
}



/* Basis::is_finite() const */

undefined8 Basis::is_finite(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = Vector3::is_finite();
  if (cVar1 != '\0') {
    cVar1 = Vector3::is_finite();
    if (cVar1 != '\0') {
      uVar2 = Vector3::is_finite();
      return uVar2;
    }
  }
  return 0;
}



/* Basis::TEMPNAMEPLACEHOLDERVALUE(Basis const&) const */

undefined8 __thiscall Basis::operator==(Basis *this,Basis *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  while (((*(float *)(param_1 + lVar1) == *(float *)(this + lVar1) &&
          (*(float *)(this + lVar1 + 4) == *(float *)(param_1 + lVar1 + 4))) &&
         (*(float *)(this + lVar1 + 8) == *(float *)(param_1 + lVar1 + 8)))) {
    lVar1 = lVar1 + 0xc;
    if (lVar1 == 0x24) {
      return 1;
    }
  }
  return 0;
}



/* Basis::TEMPNAMEPLACEHOLDERVALUE(Basis const&) const */

undefined8 __thiscall Basis::operator!=(Basis *this,Basis *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  while (((*(float *)(this + lVar1) == *(float *)(param_1 + lVar1) &&
          (*(float *)(this + lVar1 + 4) == *(float *)(param_1 + lVar1 + 4))) &&
         (*(float *)(this + lVar1 + 8) == *(float *)(param_1 + lVar1 + 8)))) {
    lVar1 = lVar1 + 0xc;
    if (lVar1 == 0x24) {
      return 0;
    }
  }
  return 1;
}



/* Basis::operator String() const */

Basis * __thiscall Basis::operator_cast_to_String(Basis *this)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  undefined8 *in_RSI;
  long in_FS_OFFSET;
  long local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  char *local_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_90 = 0;
  local_80 = 1;
  local_88 = "]";
  String::parse_latin1((StrRange *)&local_90);
  local_48 = *(undefined4 *)(in_RSI + 4);
  local_50 = CONCAT44((int)((ulong)in_RSI[2] >> 0x20),(int)in_RSI[1]);
  Vector3::operator_cast_to_String((Vector3 *)&local_98);
  local_a8 = 0;
  local_88 = ", Z: ";
  local_80 = 5;
  String::parse_latin1((StrRange *)&local_a8);
  local_58 = *(undefined4 *)((long)in_RSI + 0x1c);
  local_60 = CONCAT44((int)((ulong)*(undefined8 *)((long)in_RSI + 0xc) >> 0x20),
                      (int)*(undefined8 *)((long)in_RSI + 4));
  Vector3::operator_cast_to_String((Vector3 *)&local_b8);
  local_88 = ", Y: ";
  local_c8 = 0;
  local_80 = 5;
  String::parse_latin1((StrRange *)&local_c8);
  local_68 = *(undefined4 *)(in_RSI + 3);
  local_70 = CONCAT44((int)((ulong)in_RSI[1] >> 0x20),(int)*in_RSI);
  Vector3::operator_cast_to_String((Vector3 *)&local_d8);
  operator+((char *)&local_d0,&_LC39);
  String::operator+((String *)&local_c0,(String *)&local_d0);
  String::operator+((String *)&local_b0,(String *)&local_c0);
  String::operator+((String *)&local_a0,(String *)&local_b0);
  String::operator+((String *)&local_88,(String *)&local_a0);
  String::operator+((String *)this,(String *)&local_88);
  pcVar3 = local_88;
  if (local_88 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)(local_88 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_88 = (char *)0x0;
      Memory::free_static(pcVar3 + -0x10,false);
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
  lVar2 = local_d0;
  if (local_d0 != 0) {
    LOCK();
    plVar1 = (long *)(local_d0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_d0 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_d8;
  if (local_d8 != 0) {
    LOCK();
    plVar1 = (long *)(local_d8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_d8 = 0;
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
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Basis::get_quaternion() const */

void Basis::get_quaternion(void)

{
  long *plVar1;
  int iVar2;
  undefined8 uVar3;
  float fVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char cVar9;
  long lVar10;
  Basis *in_RSI;
  float *in_RDI;
  long lVar11;
  long lVar12;
  long in_FS_OFFSET;
  float fVar13;
  float fVar14;
  long local_90;
  long local_88;
  long local_80;
  undefined8 local_78;
  float local_70 [6];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  float local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  cVar9 = is_rotation(in_RSI);
  if (cVar9 == '\0') {
    local_80 = 0;
    local_78 = 
    " must be normalized in order to be casted to a Quaternion. Use get_rotation_quaternion() or call orthonormalized() if the Basis contains linearly independent vectors."
    ;
    local_70[0] = 2.32616e-43;
    local_70[1] = 0.0;
    String::parse_latin1((StrRange *)&local_80);
    operator_cast_to_String((Basis *)&local_90);
    operator+((char *)&local_88,"Basis ");
    String::operator+((String *)&local_78,(String *)&local_88);
    _err_print_error("get_quaternion","core/math/basis.cpp",0x2da,
                     "Condition \"!is_rotation()\" is true. Returning: Quaternion()",
                     (String *)&local_78,0,0);
    pcVar5 = local_78;
    if (local_78 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_78 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_78 = (char *)0x0;
        Memory::free_static(pcVar5 + -0x10,false);
      }
    }
    lVar10 = local_88;
    if (local_88 != 0) {
      LOCK();
      plVar1 = (long *)(local_88 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_88 = 0;
        Memory::free_static((void *)(lVar10 + -0x10),false);
      }
    }
    lVar10 = local_90;
    if (local_90 != 0) {
      LOCK();
      plVar1 = (long *)(local_90 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_90 = 0;
        Memory::free_static((void *)(lVar10 + -0x10),false);
      }
    }
    lVar10 = local_80;
    if (local_80 != 0) {
      LOCK();
      plVar1 = (long *)(local_80 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_80 = 0;
        Memory::free_static((void *)(lVar10 + -0x10),false);
      }
    }
    fVar4 = _LC50._4_4_;
    fVar14 = (float)_LC50;
    fVar13 = _UNK_00106974;
    *in_RDI = __LC44;
    in_RDI[1] = fVar13;
    in_RDI[2] = fVar14;
    in_RDI[3] = fVar4;
  }
  else {
    local_58 = *(undefined8 *)in_RSI;
    uStack_50 = *(undefined8 *)(in_RSI + 8);
    local_48 = *(undefined8 *)(in_RSI + 0x10);
    uVar3 = *(undefined8 *)(in_RSI + 0x18);
    fVar13 = *(float *)(in_RSI + 0x20);
    uVar6 = local_58;
    uVar7 = uStack_50;
    uVar8 = local_48;
    uStack_40 = uVar3;
    uVar3 = uStack_40;
    local_38 = fVar13;
    fVar14 = (float)local_58 + (float)local_48 + fVar13;
    if (0.0 < fVar14) {
      uStack_40._4_4_ = (float)((ulong)uVar3 >> 0x20);
      local_48._4_4_ = (float)((ulong)local_48 >> 0x20);
      uStack_40._0_4_ = (float)uVar3;
      local_70[4] = SQRT(fVar14 + _LC4);
      fVar13 = local_70[4] * _LC13;
      local_70[4] = _LC13 / local_70[4];
      uStack_50._4_4_ = (float)((ulong)uStack_50 >> 0x20);
      local_58._4_4_ = (float)((ulong)local_58 >> 0x20);
      local_70[2] = (uStack_40._4_4_ - local_48._4_4_) * local_70[4];
      local_70[3] = ((float)uStack_50 - (float)uStack_40) * local_70[4];
      local_70[4] = (uStack_50._4_4_ - local_58._4_4_) * local_70[4];
      local_58 = uVar6;
      uStack_50 = uVar7;
      local_48 = uVar8;
      uStack_40 = uVar3;
    }
    else {
      if ((float)local_58 < (float)local_48) {
        if (fVar13 <= (float)local_48) {
          lVar12 = 1;
          lVar10 = 0;
          lVar11 = 2;
          fVar14 = (float)local_48;
          local_48._0_4_ = (float)local_58;
        }
        else {
          lVar12 = 2;
          lVar11 = 0;
          lVar10 = 1;
          fVar14 = fVar13;
          fVar13 = (float)local_58;
        }
      }
      else {
        iVar2 = (uint)((float)local_58 < fVar13) * 2;
        lVar12 = (long)iVar2;
        lVar11 = (long)(int)((iVar2 + 1U) % 3);
        lVar10 = (long)(int)((iVar2 + 2U) % 3);
        local_48._0_4_ = *(float *)(&local_58 + lVar10 * 2);
        fVar14 = *(float *)(&local_58 + lVar12 * 2);
        fVar13 = *(float *)(&local_58 + lVar11 * 2);
      }
      fVar13 = ((fVar14 - fVar13) - (float)local_48) + _LC4;
      if (fVar13 < 0.0) {
        local_58 = uVar6;
        local_48 = uVar8;
        fVar13 = sqrtf(fVar13);
      }
      else {
        fVar13 = SQRT(fVar13);
        local_58 = uVar6;
        local_48 = uVar8;
      }
      fVar14 = _LC13 / fVar13;
      local_70[lVar12 + 2] = fVar13 * _LC13;
      fVar13 = (*(float *)((long)&local_58 + (lVar10 * 3 + lVar11) * 4) -
               *(float *)((long)&local_58 + (lVar11 * 3 + lVar10) * 4)) * fVar14;
      local_70[lVar11 + 2] =
           (*(float *)((long)&local_58 + (lVar11 * 3 + lVar12) * 4) +
           *(float *)((long)&local_58 + (lVar12 * 3 + lVar11) * 4)) * fVar14;
      local_70[lVar10 + 2] =
           (*(float *)((long)&local_58 + (lVar10 * 3 + lVar12) * 4) +
           *(float *)((long)&local_58 + (lVar12 * 3 + lVar10) * 4)) * fVar14;
    }
    *in_RDI = local_70[2];
    in_RDI[1] = local_70[3];
    in_RDI[2] = local_70[4];
    in_RDI[3] = fVar13;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Basis::get_rotation_quaternion() const */

void Basis::get_rotation_quaternion(void)

{
  undefined8 *in_RSI;
  Basis *this;
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  float local_18;
  long local_10;
  
  local_38 = *in_RSI;
  uStack_30 = in_RSI[1];
  local_28 = in_RSI[2];
  uStack_20 = in_RSI[3];
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = *(float *)(in_RSI + 4);
  this = (Basis *)&local_38;
  orthonormalize(this);
  if ((((float)local_28 * local_18 - uStack_20._4_4_ * local_28._4_4_) * (float)local_38 -
      (local_18 * local_38._4_4_ - uStack_20._4_4_ * (float)uStack_30) * uStack_30._4_4_) +
      (local_28._4_4_ * local_38._4_4_ - (float)local_28 * (float)uStack_30) * (float)uStack_20 <
      0.0) {
    local_40 = 0xbf800000;
    local_48 = _LC19;
    scale(this,(Vector3 *)&local_48);
  }
  get_quaternion();
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Basis::get_axis_angle(Vector3&, float&) const */

void __thiscall Basis::get_axis_angle(Basis *this,Vector3 *param_1,float *param_2)

{
  undefined8 uVar1;
  char cVar2;
  Vector3 *pVVar3;
  float fVar4;
  double dVar5;
  float fVar6;
  float __x;
  float fVar7;
  undefined1 auVar8 [16];
  float fVar9;
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  fVar4 = (float)_LC19;
  fVar7 = *(float *)(this + 4);
  fVar6 = *(float *)(this + 0xc);
  fVar14 = *(float *)(this + 8);
  fVar15 = *(float *)(this + 0x18);
  fVar13 = *(float *)(this + 0x14);
  fVar11 = *(float *)(this + 0x1c);
  fVar9 = fVar14 - fVar15;
  if (((_LC5 <= ABS(fVar7 - fVar6)) || (_LC5 <= ABS(fVar9))) || (_LC5 <= ABS(fVar13 - fVar11))) {
    fVar11 = fVar11 - fVar13;
    fVar6 = fVar6 - fVar7;
    dVar5 = (double)SQRT(fVar11 * fVar11 + fVar9 * fVar9 + fVar6 * fVar6);
    if (ABS(dVar5) < _LC47) {
      dVar5 = _LC45;
    }
    auVar8._0_8_ = (double)fVar11;
    auVar8._8_8_ = (double)fVar9;
    auVar10._8_8_ = dVar5;
    auVar10._0_8_ = dVar5;
    auVar8 = divpd(auVar8,auVar10);
    *(float *)(param_1 + 8) = (float)((double)fVar6 / dVar5);
    fVar7 = _LC46;
    *(ulong *)param_1 = CONCAT44((float)auVar8._8_8_,(float)auVar8._0_8_);
    fVar6 = ((*(float *)this + *(float *)(this + 0x10) + *(float *)(this + 0x20)) - _LC4) * _LC13;
    if ((fVar4 <= fVar6) && (fVar7 = 0.0, fVar6 <= _LC4)) {
      fVar7 = acosf(fVar6);
      *param_2 = fVar7;
      return;
    }
  }
  else {
    pVVar3 = param_1;
    cVar2 = is_diagonal(this);
    uVar1 = _LC50;
    if ((cVar2 == '\0') ||
       (_LC48 <= (double)ABS((*(float *)this + *(float *)(this + 0x10) + *(float *)(this + 0x20)) -
                             __LC15))) {
      fVar4 = (*(float *)this + _LC4) * _LC13;
      fVar9 = (*(float *)(this + 0x10) + _LC4) * _LC13;
      __x = (*(float *)(this + 0x20) + _LC4) * _LC13;
      fVar12 = (fVar7 + fVar6) * _LC49;
      fVar15 = (fVar14 + fVar15) * _LC49;
      fVar14 = (fVar13 + fVar11) * _LC49;
      fVar7 = _LC7;
      fVar6 = _LC7;
      if ((fVar4 <= fVar9) || (fVar4 <= __x)) {
        fVar4 = _LC7;
        if (__x < fVar9) {
          if (_LC47 <= (double)fVar9) {
            if (fVar9 < 0.0) {
              fVar6 = sqrtf(fVar9);
            }
            else {
              fVar6 = SQRT(fVar9);
            }
            fVar4 = fVar12 / fVar6;
            fVar7 = fVar14 / fVar6;
          }
          else {
            fVar6 = 0.0;
          }
        }
        else if (_LC47 <= (double)__x) {
          if (__x < 0.0) {
            fVar7 = sqrtf(__x);
          }
          else {
            fVar7 = SQRT(__x);
          }
          fVar6 = fVar14 / fVar7;
          fVar4 = fVar15 / fVar7;
        }
        else {
          fVar7 = 0.0;
        }
      }
      else if (_LC47 <= (double)fVar4) {
        if (fVar4 < 0.0) {
          fVar4 = sqrtf(fVar4);
        }
        else {
          fVar4 = SQRT(fVar4);
        }
        fVar7 = fVar15 / fVar4;
        fVar6 = fVar12 / fVar4;
      }
      else {
        fVar4 = 0.0;
      }
      fVar14 = _LC46;
      *(float *)(param_1 + 8) = fVar7;
      *(ulong *)param_1 = CONCAT44(fVar6,fVar4);
      *param_2 = fVar14;
      return;
    }
    *(undefined4 *)(pVVar3 + 8) = 0;
    fVar7 = 0.0;
    *(undefined8 *)pVVar3 = uVar1;
  }
  *param_2 = fVar7;
  return;
}



/* Basis::get_rotation_axis_angle(Vector3&, float&) const */

void Basis::get_rotation_axis_angle(Vector3 *param_1,float *param_2)

{
  Basis *this;
  long in_FS_OFFSET;
  undefined1 auVar1 [16];
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  float local_18;
  long local_10;
  
  local_38 = *(undefined8 *)param_1;
  uStack_30 = *(undefined8 *)(param_1 + 8);
  local_28 = *(undefined8 *)(param_1 + 0x10);
  uStack_20 = *(undefined8 *)(param_1 + 0x18);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = *(float *)(param_1 + 0x20);
  this = (Basis *)&local_38;
  auVar1 = orthonormalize(this);
  if ((((float)local_28 * local_18 - uStack_20._4_4_ * local_28._4_4_) * (float)local_38 -
      (local_18 * local_38._4_4_ - uStack_20._4_4_ * (float)uStack_30) * uStack_30._4_4_) +
      (local_28._4_4_ * local_38._4_4_ - (float)local_28 * (float)uStack_30) * (float)uStack_20 <
      0.0) {
    local_40 = 0xbf800000;
    local_48 = _LC19;
    auVar1 = scale(this,(Vector3 *)&local_48);
  }
  get_axis_angle(this,auVar1._0_8_,auVar1._8_8_);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Basis::get_rotation_axis_angle_local(Vector3&, float&) const */

void __thiscall Basis::get_rotation_axis_angle_local(Basis *this,Vector3 *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  Vector3 *pVVar4;
  Basis *this_00;
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined4 local_40;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = *(float *)(this + 0x20);
  this_00 = (Basis *)&local_38;
  fStack_28 = (float)*(undefined8 *)(this + 0x10);
  fStack_24 = (float)((ulong)*(undefined8 *)(this + 0x10) >> 0x20);
  fStack_20 = (float)*(undefined8 *)(this + 0x18);
  fStack_1c = (float)((ulong)*(undefined8 *)(this + 0x18) >> 0x20);
  fVar3 = fStack_1c;
  local_38 = (float)*(undefined8 *)this;
  fStack_34 = (float)((ulong)*(undefined8 *)this >> 0x20);
  fVar1 = fStack_34;
  fStack_30 = (float)*(undefined8 *)(this + 8);
  fVar2 = fStack_30;
  fStack_2c = (float)((ulong)*(undefined8 *)(this + 8) >> 0x20);
  fStack_34 = fStack_2c;
  fStack_30 = fStack_20;
  fStack_2c = fVar1;
  fStack_1c = fStack_24;
  fStack_24 = fVar3;
  fStack_20 = fVar2;
  pVVar4 = (Vector3 *)orthonormalize(this_00);
  if (((fStack_28 * local_18 - fStack_1c * fStack_24) * local_38 -
      (local_18 * fStack_34 - fStack_1c * fStack_30) * fStack_2c) +
      (fStack_24 * fStack_34 - fStack_28 * fStack_30) * fStack_20 < 0.0) {
    local_40 = 0xbf800000;
    local_48 = _LC19;
    pVVar4 = (Vector3 *)scale(this_00,(Vector3 *)&local_48);
  }
  get_axis_angle(this_00,pVVar4,param_2);
  *param_2 = (float)((uint)*param_2 ^ _LC14);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Basis::set_quaternion(Quaternion const&) */

void __thiscall Basis::set_quaternion(Basis *this,Quaternion *param_1)

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
  
  fVar5 = _LC4;
  fVar1 = *(float *)param_1;
  fVar2 = *(float *)(param_1 + 4);
  fVar3 = *(float *)(param_1 + 8);
  fVar4 = *(float *)(param_1 + 0xc);
  fVar6 = _LC51 / (fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3 + fVar4 * fVar4);
  fVar8 = fVar6 * fVar2;
  fVar7 = fVar6 * fVar3;
  fVar9 = fVar1 * fVar6 * fVar4;
  fVar6 = fVar1 * fVar6 * fVar1;
  *(float *)this = _LC4 - (fVar8 * fVar2 + fVar7 * fVar3);
  *(float *)(this + 4) = fVar1 * fVar8 - fVar4 * fVar7;
  *(float *)(this + 8) = fVar8 * fVar4 + fVar1 * fVar7;
  *(float *)(this + 0xc) = fVar4 * fVar7 + fVar1 * fVar8;
  *(float *)(this + 0x20) = fVar5 - (fVar6 + fVar8 * fVar2);
  *(float *)(this + 0x10) = fVar5 - (fVar7 * fVar3 + fVar6);
  *(float *)(this + 0x14) = fVar2 * fVar7 - fVar9;
  *(float *)(this + 0x18) = fVar1 * fVar7 - fVar8 * fVar4;
  *(float *)(this + 0x1c) = fVar9 + fVar2 * fVar7;
  return;
}



/* Basis::rotated(Quaternion const&) const */

Quaternion * Basis::rotated(Quaternion *param_1)

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
  float *pfVar10;
  Quaternion *in_RDX;
  long in_FS_OFFSET;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  pfVar10 = (float *)set_quaternion((Basis *)&local_38,in_RDX);
  fVar4 = *pfVar10;
  fVar5 = pfVar10[1];
  fVar6 = pfVar10[2];
  fVar7 = pfVar10[3];
  fVar1 = pfVar10[8];
  fVar8 = pfVar10[4];
  fVar9 = pfVar10[5];
  fVar2 = pfVar10[6];
  fVar3 = pfVar10[7];
  *(float *)(param_1 + 0x20) = fVar1 * local_18 + pfVar10[2] * fStack_20 + pfVar10[5] * fStack_1c;
  *(float *)param_1 = fVar7 * fStack_34 + fVar4 * local_38 + fStack_30 * fVar2;
  *(float *)(param_1 + 4) = fVar8 * fStack_34 + fVar5 * local_38 + fStack_30 * fVar3;
  *(float *)(param_1 + 8) = fVar9 * fStack_34 + fVar6 * local_38 + fStack_30 * fVar1;
  *(float *)(param_1 + 0xc) = fVar7 * local_28 + fVar4 * fStack_2c + fStack_24 * fVar2;
  *(float *)(param_1 + 0x10) = fVar8 * local_28 + fVar5 * fStack_2c + fVar3 * fStack_24;
  *(float *)(param_1 + 0x14) = fVar9 * local_28 + fVar6 * fStack_2c + fVar1 * fStack_24;
  *(float *)(param_1 + 0x18) = fVar7 * fStack_1c + fVar4 * fStack_20 + fVar2 * local_18;
  *(float *)(param_1 + 0x1c) = fVar8 * fStack_1c + fVar5 * fStack_20 + fVar3 * local_18;
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Basis::rotate(Quaternion const&) */

void Basis::rotate(Quaternion *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  rotated((Quaternion *)&local_48);
  *(undefined8 *)param_1 = local_48;
  *(undefined8 *)(param_1 + 8) = uStack_40;
  *(undefined8 *)(param_1 + 0x10) = local_38;
  *(undefined8 *)(param_1 + 0x18) = uStack_30;
  *(undefined4 *)(param_1 + 0x20) = local_28;
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Basis::set_axis_angle(Vector3 const&, float) */

void __thiscall Basis::set_axis_angle(Basis *this,Vector3 *param_1,float param_2)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long in_FS_OFFSET;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_70;
  float local_6c [3];
  long local_60;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  fVar6 = *(float *)(param_1 + 4) * *(float *)(param_1 + 4);
  fVar7 = *(float *)param_1 * *(float *)param_1;
  fVar5 = *(float *)(param_1 + 8) * *(float *)(param_1 + 8);
  fVar4 = fVar6 + fVar7 + fVar5;
  if ((fVar4 == _LC4) || (ABS(fVar4 - _LC4) < _LC6)) {
    sincosf(param_2,local_6c,&local_70);
    fVar4 = _LC4;
    *(float *)this = (_LC4 - fVar7) * local_70 + fVar7;
    *(float *)(this + 0x10) = (fVar4 - fVar6) * local_70 + fVar6;
    fVar6 = fVar4 - local_70;
    *(float *)(this + 0x20) = (fVar4 - fVar5) * local_70 + fVar5;
    fVar4 = *(float *)(param_1 + 8);
    fVar5 = *(float *)param_1 * *(float *)(param_1 + 4) * fVar6;
    *(float *)(this + 0xc) = fVar5 + fVar4 * local_6c[0];
    *(float *)(this + 4) = fVar5 - fVar4 * local_6c[0];
    fVar4 = *(float *)(param_1 + 4);
    fVar5 = *(float *)param_1 * *(float *)(param_1 + 8) * fVar6;
    *(float *)(this + 0x18) = fVar5 - fVar4 * local_6c[0];
    *(float *)(this + 8) = fVar5 + fVar4 * local_6c[0];
    fVar4 = *(float *)param_1;
    fVar6 = fVar6 * *(float *)(param_1 + 4) * *(float *)(param_1 + 8);
    *(float *)(this + 0x1c) = fVar6 + local_6c[0] * fVar4;
    *(float *)(this + 0x14) = fVar6 - local_6c[0] * fVar4;
  }
  else {
    local_50 = 0;
    local_48 = " must be normalized.";
    local_40 = 0x14;
    String::parse_latin1((StrRange *)&local_50);
    Vector3::operator_cast_to_String((Vector3 *)&local_60);
    operator+((char *)&local_58,"The axis Vector3 ");
    String::operator+((String *)&local_48,(String *)&local_58);
    _err_print_error("set_axis_angle","core/math/basis.cpp",0x359,
                     "Condition \"!p_axis.is_normalized()\" is true.",(String *)&local_48,0,0);
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
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Basis::rotate_to_align(Vector3, Vector3) */

void Basis::rotate_to_align
               (undefined8 param_1,float param_2,undefined8 param_3,float param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  long in_FS_OFFSET;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  float local_68;
  float fStack_64;
  undefined8 local_48;
  float local_40;
  undefined1 local_38 [8];
  float fStack_30;
  float fStack_2c;
  undefined1 local_28 [8];
  float fStack_20;
  float fStack_1c;
  float local_18;
  long local_10;
  
  fVar5 = (float)((ulong)param_1 >> 0x20);
  fVar6 = (float)param_1;
  local_68 = (float)param_3;
  fStack_64 = (float)((ulong)param_3 >> 0x20);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  auVar7._0_4_ = param_4 * fVar5 - param_2 * fStack_64;
  auVar7._4_4_ = local_68 * param_2 - fVar6 * param_4;
  auVar7._8_4_ = fStack_64 * 0.0 - 0.0;
  auVar7._12_4_ = local_68 * 0.0 - 0.0;
  fVar9 = fVar6 * fStack_64 - local_68 * fVar5;
  fVar8 = auVar7._0_4_ * auVar7._0_4_ + auVar7._4_4_ * auVar7._4_4_ + fVar9 * fVar9;
  if (fVar8 != 0.0) {
    fVar8 = SQRT(fVar8);
    local_40 = fVar9 / fVar8;
    auVar10._4_4_ = fVar8;
    auVar10._0_4_ = fVar8;
    auVar10._8_8_ = _LC18;
    auVar7 = divps(auVar7,auVar10);
    local_48 = auVar7._0_8_;
    if (auVar7._0_4_ * auVar7._0_4_ + auVar7._4_4_ * auVar7._4_4_ + local_40 * local_40 != 0.0) {
      fVar5 = fVar6 * local_68 + fStack_64 * fVar5 + param_4 * param_2;
      fVar6 = (float)_LC19;
      if (((float)_LC19 <= fVar5) && (fVar6 = _LC4, fVar5 <= _LC4)) {
        fVar6 = fVar5;
      }
      fVar5 = _LC4;
      fVar6 = acosf(fVar6);
      _local_38 = ZEXT416((uint)_LC4);
      _local_28 = _local_38;
      local_18 = fVar5;
      set_axis_angle((Basis *)local_38,(Vector3 *)&local_48,fVar6);
      fVar6 = param_5[8];
      fVar9 = *param_5;
      fVar1 = param_5[1];
      fVar2 = param_5[2];
      fVar3 = param_5[3];
      fVar4 = param_5[4];
      fVar5 = param_5[7];
      fVar8 = param_5[6];
      param_5[8] = fVar6 * local_18 + param_5[2] * fStack_20 + param_5[5] * fStack_1c;
      *param_5 = fVar3 * (float)local_38._4_4_ + fVar9 * (float)local_38._0_4_ + fStack_30 * fVar8;
      param_5[1] = fVar4 * (float)local_38._4_4_ + fVar1 * (float)local_38._0_4_ + fStack_30 * fVar5
      ;
      param_5[2] = param_5[5] * (float)local_38._4_4_ + fVar2 * (float)local_38._0_4_ +
                   fStack_30 * fVar6;
      param_5[3] = fVar3 * (float)local_28._0_4_ + fVar9 * fStack_2c + (float)local_28._4_4_ * fVar8
      ;
      param_5[4] = fVar5 * (float)local_28._4_4_ + fVar1 * fStack_2c + fVar4 * (float)local_28._0_4_
      ;
      param_5[5] = fVar6 * (float)local_28._4_4_ +
                   fVar2 * fStack_2c + param_5[5] * (float)local_28._0_4_;
      param_5[6] = fVar8 * local_18 + fVar9 * fStack_20 + fVar3 * fStack_1c;
      param_5[7] = fVar5 * local_18 + fVar1 * fStack_20 + fVar4 * fStack_1c;
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Basis::rotated(Vector3 const&, float) const */

Vector3 * Basis::rotated(Vector3 *param_1,float param_2)

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
  Vector3 *in_RDX;
  float *in_RSI;
  long in_FS_OFFSET;
  undefined1 local_48 [8];
  float fStack_40;
  float fStack_3c;
  undefined1 local_38 [8];
  float fStack_30;
  float fStack_2c;
  float local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = 1.0;
  _local_48 = ZEXT416(_LC4);
  _local_38 = ZEXT416(_LC4);
  set_axis_angle((Basis *)local_48,in_RDX,param_2);
  fVar4 = *in_RSI;
  fVar5 = in_RSI[1];
  fVar6 = in_RSI[2];
  fVar7 = in_RSI[3];
  fVar1 = in_RSI[8];
  fVar8 = in_RSI[4];
  fVar9 = in_RSI[5];
  fVar2 = in_RSI[6];
  fVar3 = in_RSI[7];
  *(float *)(param_1 + 0x20) = fVar1 * local_28 + in_RSI[2] * fStack_30 + in_RSI[5] * fStack_2c;
  *(float *)param_1 =
       fVar7 * (float)local_48._4_4_ + fVar4 * (float)local_48._0_4_ + fStack_40 * fVar2;
  *(float *)(param_1 + 4) =
       fVar8 * (float)local_48._4_4_ + fVar5 * (float)local_48._0_4_ + fStack_40 * fVar3;
  *(float *)(param_1 + 8) =
       fVar9 * (float)local_48._4_4_ + fVar6 * (float)local_48._0_4_ + fStack_40 * fVar1;
  *(float *)(param_1 + 0xc) =
       fVar7 * (float)local_38._0_4_ + fVar4 * fStack_3c + (float)local_38._4_4_ * fVar2;
  *(float *)(param_1 + 0x10) =
       fVar8 * (float)local_38._0_4_ + fVar5 * fStack_3c + fVar3 * (float)local_38._4_4_;
  *(float *)(param_1 + 0x14) =
       fVar9 * (float)local_38._0_4_ + fVar6 * fStack_3c + fVar1 * (float)local_38._4_4_;
  *(float *)(param_1 + 0x18) = fVar7 * fStack_2c + fVar4 * fStack_30 + fVar2 * local_28;
  *(float *)(param_1 + 0x1c) = fVar8 * fStack_2c + fVar5 * fStack_30 + fVar3 * local_28;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Basis::rotate(Vector3 const&, float) */

void Basis::rotate(Vector3 *param_1,float param_2)

{
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  rotated((Vector3 *)&local_48,param_2);
  *(undefined8 *)param_1 = local_48;
  *(undefined8 *)(param_1 + 8) = uStack_40;
  *(undefined8 *)(param_1 + 0x10) = local_38;
  *(undefined8 *)(param_1 + 0x18) = uStack_30;
  *(undefined4 *)(param_1 + 0x20) = local_28;
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Basis::rotated_local(Vector3 const&, float) const */

Vector3 * Basis::rotated_local(Vector3 *param_1,float param_2)

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
  Vector3 *in_RDX;
  float *in_RSI;
  long in_FS_OFFSET;
  undefined1 local_48 [8];
  float fStack_40;
  float fStack_3c;
  undefined1 local_38 [8];
  float fStack_30;
  float fStack_2c;
  float local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = 1.0;
  _local_48 = ZEXT416(_LC4);
  _local_38 = ZEXT416(_LC4);
  set_axis_angle((Basis *)local_48,in_RDX,param_2);
  fVar4 = *in_RSI;
  fVar5 = in_RSI[1];
  fVar6 = in_RSI[3];
  fVar7 = in_RSI[4];
  fVar8 = in_RSI[6];
  fVar9 = in_RSI[7];
  fVar1 = in_RSI[8];
  fVar2 = in_RSI[5];
  fVar3 = in_RSI[2];
  *(float *)(param_1 + 0x20) =
       fStack_40 * in_RSI[6] + (float)local_38._4_4_ * in_RSI[7] + local_28 * fVar1;
  *(float *)param_1 = fVar3 * fStack_30 + (float)local_48._0_4_ * fVar4 + fStack_3c * fVar5;
  *(float *)(param_1 + 4) =
       fVar3 * fStack_2c + (float)local_48._4_4_ * fVar4 + (float)local_38._0_4_ * fVar5;
  *(float *)(param_1 + 8) = fVar3 * local_28 + fStack_40 * fVar4 + (float)local_38._4_4_ * fVar5;
  *(float *)(param_1 + 0xc) = fVar2 * fStack_30 + (float)local_48._0_4_ * fVar6 + fStack_3c * fVar7;
  *(float *)(param_1 + 0x10) =
       (float)local_38._0_4_ * fVar7 + fVar6 * (float)local_48._4_4_ + fStack_2c * fVar2;
  *(float *)(param_1 + 0x14) = (float)local_38._4_4_ * fVar7 + fVar6 * fStack_40 + local_28 * fVar2;
  *(float *)(param_1 + 0x18) = fStack_3c * fVar9 + fVar8 * (float)local_48._0_4_ + fStack_30 * fVar1
  ;
  *(float *)(param_1 + 0x1c) =
       (float)local_38._0_4_ * fVar9 + fVar8 * (float)local_48._4_4_ + fStack_2c * fVar1;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Basis::rotate_local(Vector3 const&, float) */

void Basis::rotate_local(Vector3 *param_1,float param_2)

{
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  rotated_local((Vector3 *)&local_48,param_2);
  *(undefined8 *)param_1 = local_48;
  *(undefined8 *)(param_1 + 8) = uStack_40;
  *(undefined8 *)(param_1 + 0x10) = local_38;
  *(undefined8 *)(param_1 + 0x18) = uStack_30;
  *(undefined4 *)(param_1 + 0x20) = local_28;
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Basis::set_axis_angle_scale(Vector3 const&, float, Vector3 const&) */

void __thiscall
Basis::set_axis_angle_scale(Basis *this,Vector3 *param_1,float param_2,Vector3 *param_3)

{
  undefined4 uVar1;
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  long local_10;
  
  uVar1 = *(undefined4 *)param_3;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(this + 4) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)this = uVar1;
  uVar1 = *(undefined4 *)(param_3 + 4);
  *(undefined8 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x10) = uVar1;
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_3 + 8);
  rotated((Vector3 *)&local_48,param_2);
  *(undefined8 *)this = local_48;
  *(undefined8 *)(this + 8) = uStack_40;
  *(undefined8 *)(this + 0x10) = local_38;
  *(undefined8 *)(this + 0x18) = uStack_30;
  *(undefined4 *)(this + 0x20) = local_28;
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Basis::set_euler_scale(Vector3 const&, Vector3 const&, EulerOrder) */

void Basis::set_euler_scale(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  long local_10;
  
  uVar1 = *param_3;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)((long)param_1 + 4) = 0;
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  *(undefined4 *)param_1 = uVar1;
  uVar1 = param_3[1];
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 2) = uVar1;
  *(undefined4 *)(param_1 + 4) = param_3[2];
  rotated(&local_48,param_1,param_2);
  *param_1 = local_48;
  param_1[1] = uStack_40;
  param_1[2] = local_38;
  param_1[3] = uStack_30;
  *(undefined4 *)(param_1 + 4) = local_28;
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Basis::set_quaternion_scale(Quaternion const&, Vector3 const&) */

void __thiscall Basis::set_quaternion_scale(Basis *this,Quaternion *param_1,Vector3 *param_2)

{
  undefined4 uVar1;
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  long local_10;
  
  uVar1 = *(undefined4 *)param_2;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(this + 4) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)this = uVar1;
  uVar1 = *(undefined4 *)(param_2 + 4);
  *(undefined8 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x10) = uVar1;
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_2 + 8);
  rotated((Quaternion *)&local_48);
  *(undefined8 *)this = local_48;
  *(undefined8 *)(this + 8) = uStack_40;
  *(undefined8 *)(this + 0x10) = local_38;
  *(undefined8 *)(this + 0x18) = uStack_30;
  *(undefined4 *)(this + 0x20) = local_28;
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Basis::_set_diagonal(Vector3 const&) */

void __thiscall Basis::_set_diagonal(Basis *this,Vector3 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)param_1;
  *(undefined8 *)(this + 4) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)this = uVar1;
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined8 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x10) = uVar1;
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 8);
  return;
}



/* Basis::lerp(Basis const&, float) const */

Basis * Basis::lerp(Basis *param_1,float param_2)

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
  float fVar14;
  float fVar15;
  float fVar16;
  float *in_RDX;
  float *in_RSI;
  
  fVar1 = *in_RSI;
  fVar2 = in_RSI[1];
  fVar3 = in_RSI[2];
  fVar4 = in_RSI[3];
  fVar5 = in_RSI[4];
  fVar6 = in_RSI[5];
  fVar7 = in_RSI[6];
  fVar8 = in_RSI[7];
  fVar9 = in_RDX[4];
  fVar10 = in_RDX[5];
  fVar11 = in_RDX[6];
  fVar12 = in_RDX[7];
  fVar13 = *in_RDX;
  fVar14 = in_RDX[1];
  fVar15 = in_RDX[2];
  fVar16 = in_RDX[3];
  *(float *)(param_1 + 0x20) = param_2 * (in_RDX[8] - in_RSI[8]) + in_RSI[8];
  *(float *)(param_1 + 0x10) = (fVar9 - fVar5) * param_2 + fVar5;
  *(float *)(param_1 + 0x14) = (fVar10 - fVar6) * param_2 + fVar6;
  *(float *)(param_1 + 0x18) = (fVar11 - fVar7) * param_2 + fVar7;
  *(float *)(param_1 + 0x1c) = (fVar12 - fVar8) * param_2 + fVar8;
  *(float *)param_1 = (fVar13 - fVar1) * param_2 + fVar1;
  *(float *)(param_1 + 4) = (fVar14 - fVar2) * param_2 + fVar2;
  *(float *)(param_1 + 8) = (fVar15 - fVar3) * param_2 + fVar3;
  *(float *)(param_1 + 0xc) = (fVar16 - fVar4) * param_2 + fVar4;
  return param_1;
}



/* Basis::slerp(Basis const&, float) const */

Basis * Basis::slerp(Basis *param_1,float param_2)

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
  float fVar14;
  float fVar15;
  float *in_RDX;
  float *in_RSI;
  long in_FS_OFFSET;
  float fVar17;
  undefined1 auVar16 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  Quaternion local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  get_quaternion();
  get_quaternion();
  Quaternion::slerp(local_58,param_2);
  set_quaternion(param_1,local_58);
  fVar5 = *in_RSI;
  fVar6 = in_RSI[1];
  fVar7 = in_RSI[3];
  fVar8 = in_RSI[4];
  fVar9 = in_RSI[6];
  fVar10 = in_RSI[7];
  fVar17 = in_RDX[2];
  fVar1 = in_RSI[2];
  fVar4 = *in_RDX;
  fVar11 = in_RDX[1];
  fVar12 = in_RDX[3];
  fVar13 = in_RDX[4];
  fVar14 = in_RDX[6];
  fVar15 = in_RDX[7];
  fVar2 = in_RDX[5];
  fVar3 = in_RSI[5];
  auVar20._0_4_ = fVar11 * fVar11 + fVar4 * fVar4;
  auVar20._4_4_ = fVar11 * fVar11 + fVar4 * fVar4;
  auVar20._8_4_ = fVar11 * fVar11 + fVar4 * fVar4;
  auVar20._12_4_ = fVar13 * fVar13 + fVar12 * fVar12;
  fVar4 = in_RDX[8];
  auVar16._4_4_ = fVar17 * fVar17 + auVar20._4_4_;
  auVar16._0_4_ = fVar17 * fVar17 + auVar20._0_4_;
  auVar16._8_4_ = fVar17 * fVar17 + auVar20._8_4_;
  auVar16._12_4_ = fVar2 * fVar2 + auVar20._12_4_;
  auVar20 = sqrtps(auVar20,auVar16);
  auVar22._0_4_ = fVar13 * fVar13 + fVar12 * fVar12 + fVar2 * fVar2;
  auVar22._4_4_ = fVar13 * fVar13 + fVar12 * fVar12 + fVar2 * fVar2;
  auVar22._8_4_ = fVar15 * fVar15 + fVar14 * fVar14 + fVar4 * fVar4;
  auVar22._12_4_ = fVar15 * fVar15 + fVar14 * fVar14 + fVar4 * fVar4;
  fVar17 = in_RSI[8];
  auVar21._4_4_ = fVar17;
  auVar21._0_4_ = fVar17;
  auVar21._8_8_ = 0;
  auVar16 = sqrtps(auVar22,auVar22);
  auVar19._4_4_ = fVar1 * fVar1 + fVar5 * fVar5 + fVar6 * fVar6;
  auVar19._0_4_ = fVar1 * fVar1 + fVar5 * fVar5 + fVar6 * fVar6;
  auVar19._8_4_ = fVar1 * fVar1 + fVar5 * fVar5 + fVar6 * fVar6;
  auVar19._12_4_ = fVar3 * fVar3 + fVar7 * fVar7 + fVar8 * fVar8;
  auVar22 = sqrtps(auVar21,auVar19);
  auVar18._0_4_ = fVar3 * fVar3 + fVar7 * fVar7 + fVar8 * fVar8;
  auVar18._4_4_ = fVar3 * fVar3 + fVar7 * fVar7 + fVar8 * fVar8;
  auVar18._8_4_ = fVar17 * fVar17 + fVar9 * fVar9 + fVar10 * fVar10;
  auVar18._12_4_ = fVar17 * fVar17 + fVar9 * fVar9 + fVar10 * fVar10;
  auVar19 = sqrtps(auVar18,auVar18);
  fVar17 = (auVar16._8_4_ - auVar19._8_4_) * param_2 + auVar19._8_4_;
  *(float *)param_1 =
       ((auVar20._0_4_ - auVar22._0_4_) * param_2 + auVar22._0_4_) * *(float *)param_1;
  *(float *)(param_1 + 4) =
       ((auVar20._4_4_ - auVar22._4_4_) * param_2 + auVar22._4_4_) * *(float *)(param_1 + 4);
  *(float *)(param_1 + 8) =
       ((auVar20._8_4_ - auVar22._8_4_) * param_2 + auVar22._8_4_) * *(float *)(param_1 + 8);
  *(float *)(param_1 + 0xc) =
       ((auVar20._12_4_ - auVar22._12_4_) * param_2 + auVar22._12_4_) * *(float *)(param_1 + 0xc);
  *(float *)(param_1 + 0x10) =
       *(float *)(param_1 + 0x10) * ((auVar16._0_4_ - auVar19._0_4_) * param_2 + auVar19._0_4_);
  *(float *)(param_1 + 0x14) =
       *(float *)(param_1 + 0x14) * ((auVar16._4_4_ - auVar19._4_4_) * param_2 + auVar19._4_4_);
  *(float *)(param_1 + 0x18) = *(float *)(param_1 + 0x18) * fVar17;
  *(float *)(param_1 + 0x1c) =
       *(float *)(param_1 + 0x1c) * ((auVar16._12_4_ - auVar19._12_4_) * param_2 + auVar19._12_4_);
  *(float *)(param_1 + 0x20) = fVar17 * *(float *)(param_1 + 0x20);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Basis::rotate_sh(float*) */

void __thiscall Basis::rotate_sh(Basis *this,float *param_1)

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
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  
  fVar1 = param_1[7];
  fVar17 = param_1[8];
  fVar2 = *(float *)(this + 0xc);
  fVar3 = *(float *)(this + 0x14);
  fVar12 = *(float *)this;
  fVar4 = *(float *)(this + 0x18);
  fVar5 = *(float *)(this + 0x20);
  fVar6 = *(float *)(this + 4);
  fVar7 = *(float *)(this + 8);
  fVar16 = *(float *)(this + 0x10);
  fVar20 = *(float *)(this + 0x1c);
  fVar33 = (fVar1 + fVar17 + fVar17) - param_1[5];
  fVar13 = (float)((uint)param_1[5] ^ _LC14);
  fVar18 = (float)((uint)fVar1 ^ _LC14);
  fVar27 = fVar16 + fVar2;
  fVar14 = fVar2 + fVar3;
  fVar17 = _LC56 * param_1[6] + param_1[4] + fVar1 + fVar17;
  fVar24 = fVar20 + fVar5;
  fVar31 = fVar4 * fVar4 - __LC57;
  fVar21 = fVar20 + fVar4;
  fVar29 = fVar12 * fVar33;
  fVar19 = fVar4 + fVar5;
  fVar15 = fVar16 + fVar3;
  fVar30 = fVar7 * fVar17;
  fVar25 = fVar5 * fVar5 - __LC57;
  fVar32 = (fVar12 + fVar6) * param_1[4];
  fVar1 = param_1[4];
  fVar23 = fVar21 * fVar21 - __LC58;
  fVar8 = param_1[4];
  fVar28 = fVar18 * (fVar12 + fVar7);
  fVar26 = fVar19 * fVar19 - __LC58;
  fVar22 = fVar13 * (fVar6 + fVar7);
  fVar9 = param_1[2];
  fVar10 = param_1[1];
  fVar11 = param_1[1];
  param_1[1] = (fVar16 * param_1[1] - fVar3 * param_1[2]) + fVar2 * param_1[3];
  param_1[2] = (fVar5 * param_1[2] - fVar20 * fVar10) - fVar4 * param_1[3];
  param_1[3] = (fVar6 * fVar11 - fVar7 * fVar9) + fVar12 * param_1[3];
  param_1[4] = fVar15 * fVar22 + fVar27 * fVar32 + fVar3 * fVar30 + fVar2 * fVar29 + fVar14 * fVar28
  ;
  fVar16 = (float)((uint)(fVar24 * fVar22 +
                         fVar19 * fVar28 + fVar21 * fVar32 + fVar4 * fVar29 + fVar5 * fVar30) ^
                  _LC14);
  fVar20 = _LC59 * ((fVar24 * fVar24 - __LC58) * fVar13 +
                   fVar26 * fVar18 + fVar23 * fVar8 + fVar25 * fVar17 + fVar31 * fVar33);
  fVar12 = (((fVar6 + fVar7) * fVar22 - fVar15 * fVar13 * fVar15) +
           (fVar30 * fVar7 - fVar3 * fVar17 * fVar3) + (fVar29 * fVar12 - fVar2 * fVar33 * fVar2) +
           ((fVar12 + fVar6) * fVar32 - fVar27 * fVar1 * fVar27) +
           ((fVar12 + fVar7) * fVar28 - fVar14 * fVar18 * fVar14)) * __LC60;
  param_1[5] = (float)((uint)(fVar24 * fVar13 * fVar15 +
                             fVar21 * fVar1 * fVar27 +
                             fVar5 * fVar3 * fVar17 + fVar4 * fVar2 * fVar33 +
                             fVar19 * fVar18 * fVar14) ^ _LC14);
  param_1[6] = fVar20;
  param_1[7] = fVar16;
  param_1[8] = fVar12;
  return;
}



/* Basis::looking_at(Vector3 const&, Vector3 const&, bool) */

Basis * __thiscall Basis::looking_at(Basis *this,Vector3 *param_1,Vector3 *param_2,bool param_3)

{
  float fVar1;
  ulong uVar2;
  long lVar3;
  float fVar4;
  char cVar5;
  char *pcVar6;
  undefined8 uVar7;
  char *pcVar8;
  long in_FS_OFFSET;
  float fVar9;
  float fVar11;
  undefined1 auVar10 [16];
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  float fVar17;
  undefined8 uVar18;
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  cVar5 = Vector3::is_zero_approx();
  if (cVar5 == '\0') {
    cVar5 = Vector3::is_zero_approx();
    if (cVar5 == '\0') {
      uVar2 = *(ulong *)(param_1 + 4);
      fVar20 = *(float *)param_1;
      fVar21 = (float)uVar2;
      fVar15 = (float)(uVar2 >> 0x20);
      fVar12 = fVar20 * fVar20 + fVar21 * fVar21 + fVar15 * fVar15;
      if (fVar12 == 0.0) {
        uVar18 = 0;
        fVar12 = 0.0;
        uVar7 = 0;
        fVar20 = 0.0;
      }
      else {
        fVar12 = SQRT(fVar12);
        auVar19._8_8_ = 0;
        auVar19._0_8_ = uVar2;
        auVar10._4_4_ = fVar20;
        auVar10._0_4_ = fVar15;
        auVar10._8_4_ = fVar21;
        auVar10._12_4_ = fVar20;
        fVar20 = fVar20 / fVar12;
        auVar16._4_4_ = fVar12;
        auVar16._0_4_ = fVar12;
        auVar16._8_8_ = _LC18;
        auVar19 = divps(auVar19,auVar16);
        uVar18 = auVar19._0_8_;
        auVar10 = divps(auVar10,auVar16);
        uVar7 = auVar10._0_8_;
        fVar12 = *(float *)(param_1 + 4) / fVar12;
      }
      if (!param_3) {
        uVar18 = CONCAT44((uint)((ulong)uVar18 >> 0x20) ^ _LC17._4_4_,(uint)uVar18 ^ (uint)_LC17);
        uVar7 = CONCAT44((uint)((ulong)uVar7 >> 0x20) ^ _LC17._4_4_,(uint)uVar7 ^ (uint)_LC17);
        fVar12 = (float)((uint)fVar12 ^ _LC14);
        fVar20 = (float)((uint)fVar20 ^ _LC14);
      }
      fVar9 = (float)uVar7;
      fVar11 = (float)((ulong)uVar7 >> 0x20);
      fVar17 = (float)uVar18;
      fVar21 = *(float *)param_2 * fVar17 - fVar11 * *(float *)(param_2 + 4);
      fVar13 = (float)*(undefined8 *)(param_2 + 4) * fVar9 - *(float *)(param_2 + 8) * fVar17;
      fVar15 = (float)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20) * fVar11 -
               *(float *)param_2 * (float)((ulong)uVar18 >> 0x20);
      cVar5 = Vector3::is_zero_approx();
      if (cVar5 == '\0') {
LAB_00105ff3:
        fVar14 = fVar13 * fVar13 + fVar15 * fVar15 + fVar21 * fVar21;
        if (fVar14 == 0.0) goto LAB_0010602d;
        fVar14 = SQRT(fVar14);
        fVar13 = fVar13 / fVar14;
        fVar15 = fVar15 / fVar14;
        fVar21 = fVar21 / fVar14;
      }
      else {
        _err_print_error("looking_at","core/math/basis.cpp",0x422,
                         "Target and up vectors are colinear. This is not advised as it may cause unwanted rotation around local Z axis."
                         ,0,1);
        cVar5 = Vector3::is_zero_approx();
        if (cVar5 == '\0') {
          fVar21 = *(float *)param_2;
          fVar14 = *(float *)(param_2 + 4);
          fVar1 = *(float *)(param_2 + 8);
          fVar23 = fVar21 * 0.0;
          fVar13 = fVar14 * 0.0;
          fVar15 = fVar1 * 0.0;
          fVar4 = fVar13;
          fVar22 = fVar1;
          if ((ABS(fVar21) <= ABS(fVar14)) && (ABS(fVar21) <= ABS(fVar1))) {
            fVar21 = fVar23;
            fVar4 = fVar14;
            fVar22 = fVar15;
            fVar15 = fVar1;
          }
          fVar13 = fVar13 - fVar22;
          fVar15 = fVar15 - fVar23;
          fVar21 = fVar21 - fVar4;
          fVar14 = fVar13 * fVar13 + fVar15 * fVar15 + fVar21 * fVar21;
          if (fVar14 != 0.0) {
            fVar14 = SQRT(fVar14);
            fVar13 = fVar13 / fVar14;
            fVar15 = fVar15 / fVar14;
            fVar21 = fVar21 / fVar14;
            goto LAB_00105ff3;
          }
        }
        else {
          _err_print_error("get_any_perpendicular","./core/math/vector3.h",0x150,
                           "Condition \"is_zero_approx()\" is true. Returning: Vector3(0, 0, 0)",
                           "The Vector3 must not be zero.",0,0);
        }
LAB_0010602d:
        fVar21 = 0.0;
        fVar13 = 0.0;
        fVar15 = 0.0;
      }
      *(float *)(this + 0x20) = fVar9;
      *(float *)this = fVar13;
      *(float *)(this + 4) = fVar17 * fVar21 - fVar9 * fVar15;
      *(float *)(this + 8) = fVar20;
      *(float *)(this + 0xc) = fVar15;
      *(ulong *)(this + 0x10) = CONCAT44(fVar12,fVar9 * fVar13 - fVar11 * fVar21);
      *(ulong *)(this + 0x18) = CONCAT44(fVar11 * fVar15 - fVar17 * fVar13,fVar21);
      goto LAB_00106093;
    }
    pcVar8 = "The up vector can\'t be zero.";
    uVar7 = 0x41a;
    pcVar6 = "Condition \"p_up.is_zero_approx()\" is true. Returning: Basis()";
  }
  else {
    pcVar8 = "The target vector can\'t be zero.";
    uVar7 = 0x419;
    pcVar6 = "Condition \"p_target.is_zero_approx()\" is true. Returning: Basis()";
  }
  _err_print_error("looking_at","core/math/basis.cpp",uVar7,pcVar6,pcVar8,0,0);
  auVar10 = ZEXT416(_LC4);
  *(undefined4 *)(this + 0x20) = 0x3f800000;
  *(undefined1 (*) [16])this = auVar10;
  *(undefined1 (*) [16])(this + 0x10) = auVar10;
LAB_00106093:
  if (lVar3 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


