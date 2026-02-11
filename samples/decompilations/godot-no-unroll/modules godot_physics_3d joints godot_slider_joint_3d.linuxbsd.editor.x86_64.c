
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GodotSliderJoint3D::solve(float) */

void __thiscall GodotSliderJoint3D::solve(GodotSliderJoint3D *this,float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  GodotSliderJoint3D GVar4;
  GodotSliderJoint3D GVar5;
  GodotSliderJoint3D GVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  GodotSliderJoint3D *pGVar13;
  long in_FS_OFFSET;
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
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float local_68;
  float local_1c;
  float fStack_18;
  
  uVar10 = _LC1;
  lVar7 = *(long *)(this + 0x38);
  lVar8 = *(long *)(in_FS_OFFSET + 0x28);
  lVar9 = *(long *)(this + 0x40);
  lVar12 = 0;
  fVar28 = *(float *)(this + 0x33c) - *(float *)(lVar7 + 0x1f8);
  GVar4 = this[0x30];
  pGVar13 = this + 0x104;
  fVar20 = *(float *)(this + 0x34c) - *(float *)(lVar9 + 0x1fc);
  fVar16 = *(float *)(this + 0x348) - *(float *)(lVar9 + 0x1f8);
  fVar32 = *(float *)(this + 0x340) - *(float *)(lVar7 + 0x1fc);
  fVar26 = *(float *)(this + 0x344) - *(float *)(lVar7 + 0x200);
  fVar31 = *(float *)(lVar7 + 0xe4);
  fVar14 = *(float *)(this + 0x350) - *(float *)(lVar9 + 0x200);
  fVar30 = *(float *)(lVar7 + 0xe8);
  fVar19 = *(float *)(lVar9 + 0xe8);
  fVar1 = *(float *)(lVar9 + 0xec);
  fVar2 = *(float *)(lVar7 + 0xec);
  GVar5 = this[0x31];
  fVar3 = *(float *)(lVar9 + 0xe4);
  fVar18 = *(float *)(lVar7 + 0xe0);
  fVar27 = *(float *)(lVar7 + 0xdc);
  fVar22 = *(float *)(lVar9 + 0xe0);
  fVar23 = *(float *)(lVar9 + 0xdc);
  fVar24 = *(float *)(lVar7 + 0xd8);
  fVar29 = *(float *)(lVar9 + 0xd8);
  GVar6 = this[0x360];
  do {
    fVar21 = (((fVar26 * fVar30 - fVar32 * fVar2) + fVar24) -
             ((fVar14 * fVar19 - fVar20 * fVar1) + fVar29)) * *(float *)pGVar13 +
             (((fVar28 * fVar2 - fVar31 * fVar26) + fVar27) -
             ((fVar16 * fVar1 - fVar3 * fVar14) + fVar23)) * *(float *)(pGVar13 + 4) +
             (((fVar32 * fVar31 - fVar28 * fVar30) + fVar18) -
             ((fVar20 * fVar3 - fVar16 * fVar19) + fVar22)) * *(float *)(pGVar13 + 8);
    if (lVar12 == 0) {
      if (this[0x100] == (GodotSliderJoint3D)0x0) {
        fVar15 = *(float *)(this + 0xb8);
        fVar17 = *(float *)(this + 0xbc);
        fVar34 = *(float *)(this + 0xc0);
      }
      else {
        fVar15 = *(float *)(this + 0xd0);
        fVar17 = *(float *)(this + 0xd4);
        fVar34 = *(float *)(this + 0xd8);
      }
    }
    else {
      fVar15 = *(float *)(this + 0xe8);
      fVar17 = *(float *)(this + 0xec);
      fVar34 = *(float *)(this + 0xf0);
    }
    fVar25 = *(float *)(this + lVar12 * 4 + 0x1c4);
    fVar15 = ((fVar17 * *(float *)(this + lVar12 * 4 + 0x330)) / param_1 - fVar34 * fVar21) * fVar15
             * fVar25;
    fVar17 = *(float *)(pGVar13 + 8) * fVar15;
    fVar34 = *(float *)(pGVar13 + 4) * fVar15;
    fVar15 = fVar15 * *(float *)pGVar13;
    if (GVar4 != (GodotSliderJoint3D)0x0) {
      fVar33 = *(float *)(lVar7 + 0x170);
      *(float *)(lVar7 + 0xd8) = fVar15 * fVar33 + *(float *)(lVar7 + 0xd8);
      fVar37 = *(float *)(this + 0x33c) - *(float *)(lVar7 + 0x1f8);
      *(float *)(lVar7 + 0xdc) = fVar34 * fVar33 + *(float *)(lVar7 + 0xdc);
      *(float *)(lVar7 + 0xe0) = fVar33 * fVar17 + *(float *)(lVar7 + 0xe0);
      fVar33 = *(float *)(this + 0x340) - *(float *)(lVar7 + 0x1fc);
      fVar35 = *(float *)(this + 0x344) - *(float *)(lVar7 + 0x200);
      fVar36 = fVar34 * fVar37 - fVar15 * fVar33;
      fVar37 = fVar15 * fVar35 - fVar37 * fVar17;
      fVar33 = fVar33 * fVar17 - fVar35 * fVar34;
      *(float *)(lVar7 + 0xe4) =
           fVar33 * *(float *)(lVar7 + 0x1b0) + fVar37 * *(float *)(lVar7 + 0x1b4) +
           fVar36 * *(float *)(lVar7 + 0x1b8) + *(float *)(lVar7 + 0xe4);
      *(ulong *)(lVar7 + 0xe8) =
           CONCAT44((float)((ulong)*(undefined8 *)(lVar7 + 0xe8) >> 0x20) +
                    (float)((ulong)*(undefined8 *)(lVar7 + 0x1c8) >> 0x20) * fVar37 +
                    *(float *)(lVar7 + 0x1c8) * fVar33 + *(float *)(lVar7 + 0x1d0) * fVar36,
                    (float)*(undefined8 *)(lVar7 + 0xe8) +
                    (float)*(undefined8 *)(lVar7 + 0x1c0) * fVar37 +
                    *(float *)(lVar7 + 0x1bc) * fVar33 + *(float *)(lVar7 + 0x1c4) * fVar36);
    }
    if (GVar5 != (GodotSliderJoint3D)0x0) {
      fVar33 = *(float *)(lVar9 + 0x170);
      fVar15 = (float)((uint)fVar15 ^ uVar10);
      fVar34 = (float)((uint)fVar34 ^ uVar10);
      fVar17 = (float)((uint)fVar17 ^ uVar10);
      *(float *)(lVar9 + 0xd8) = fVar33 * fVar15 + *(float *)(lVar9 + 0xd8);
      fVar37 = *(float *)(this + 0x348) - *(float *)(lVar9 + 0x1f8);
      *(float *)(lVar9 + 0xdc) = fVar33 * fVar34 + *(float *)(lVar9 + 0xdc);
      fVar36 = *(float *)(this + 0x34c) - *(float *)(lVar9 + 0x1fc);
      *(float *)(lVar9 + 0xe0) = fVar33 * fVar17 + *(float *)(lVar9 + 0xe0);
      fVar33 = *(float *)(this + 0x350) - *(float *)(lVar9 + 0x200);
      fVar35 = fVar37 * fVar34 - fVar36 * fVar15;
      fVar15 = fVar15 * fVar33 - fVar37 * fVar17;
      fVar17 = fVar17 * fVar36 - fVar33 * fVar34;
      *(float *)(lVar9 + 0xe4) =
           fVar17 * *(float *)(lVar9 + 0x1b0) + fVar15 * *(float *)(lVar9 + 0x1b4) +
           fVar35 * *(float *)(lVar9 + 0x1b8) + *(float *)(lVar9 + 0xe4);
      *(ulong *)(lVar9 + 0xe8) =
           CONCAT44((float)((ulong)*(undefined8 *)(lVar9 + 0xe8) >> 0x20) +
                    (float)((ulong)*(undefined8 *)(lVar9 + 0x1c8) >> 0x20) * fVar15 +
                    *(float *)(lVar9 + 0x1c8) * fVar17 + *(float *)(lVar9 + 0x1d0) * fVar35,
                    (float)*(undefined8 *)(lVar9 + 0xe8) +
                    (float)*(undefined8 *)(lVar9 + 0x1c0) * fVar15 +
                    *(float *)(lVar9 + 0x1bc) * fVar17 + *(float *)(lVar9 + 0x1c4) * fVar35);
    }
    uVar11 = _LC1;
    if (((int)lVar12 == 0) && (GVar6 != (GodotSliderJoint3D)0x0)) {
      fVar15 = *(float *)(this + 0x36c);
      fVar17 = *(float *)(this + 0x368);
      if (fVar15 < fVar17) {
        fVar25 = (float)((uint)(fVar21 + *(float *)(this + 0x364)) ^ _LC1) * fVar25;
        fVar21 = ABS(fVar25) + fVar15;
        if (fVar21 <= fVar17) {
          fVar17 = fVar21;
        }
        fVar15 = fVar17 - fVar15;
        if (fVar25 < 0.0) {
          fVar15 = (float)((uint)fVar15 ^ _LC1);
        }
        *(float *)(this + 0x36c) = fVar17;
        fVar17 = *(float *)(this + 0x10c) * fVar15;
        fVar21 = *(float *)(this + 0x108) * fVar15;
        fVar15 = fVar15 * *(float *)(this + 0x104);
        if (GVar4 != (GodotSliderJoint3D)0x0) {
          fVar34 = *(float *)(lVar7 + 0x170);
          *(float *)(lVar7 + 0xd8) = fVar15 * fVar34 + *(float *)(lVar7 + 0xd8);
          fVar35 = *(float *)(this + 0x33c) - *(float *)(lVar7 + 0x1f8);
          *(float *)(lVar7 + 0xdc) = fVar21 * fVar34 + *(float *)(lVar7 + 0xdc);
          *(float *)(lVar7 + 0xe0) = fVar34 * fVar17 + *(float *)(lVar7 + 0xe0);
          fVar34 = *(float *)(this + 0x340) - *(float *)(lVar7 + 0x1fc);
          fVar25 = *(float *)(this + 0x344) - *(float *)(lVar7 + 0x200);
          fVar33 = fVar21 * fVar35 - fVar15 * fVar34;
          fVar35 = fVar15 * fVar25 - fVar35 * fVar17;
          fVar34 = fVar34 * fVar17 - fVar25 * fVar21;
          *(float *)(lVar7 + 0xe4) =
               fVar34 * *(float *)(lVar7 + 0x1b0) + fVar35 * *(float *)(lVar7 + 0x1b4) +
               fVar33 * *(float *)(lVar7 + 0x1b8) + *(float *)(lVar7 + 0xe4);
          *(ulong *)(lVar7 + 0xe8) =
               CONCAT44((float)((ulong)*(undefined8 *)(lVar7 + 0xe8) >> 0x20) +
                        (float)((ulong)*(undefined8 *)(lVar7 + 0x1c8) >> 0x20) * fVar35 +
                        *(float *)(lVar7 + 0x1c8) * fVar34 + *(float *)(lVar7 + 0x1d0) * fVar33,
                        (float)*(undefined8 *)(lVar7 + 0xe8) +
                        (float)*(undefined8 *)(lVar7 + 0x1c0) * fVar35 +
                        *(float *)(lVar7 + 0x1bc) * fVar34 + *(float *)(lVar7 + 0x1c4) * fVar33);
        }
        if (GVar5 != (GodotSliderJoint3D)0x0) {
          fVar34 = *(float *)(lVar9 + 0x170);
          fVar21 = (float)((uint)fVar21 ^ uVar11);
          fVar15 = (float)((uint)fVar15 ^ uVar11);
          fVar17 = (float)((uint)fVar17 ^ uVar11);
          *(float *)(lVar9 + 0xd8) = fVar34 * fVar15 + *(float *)(lVar9 + 0xd8);
          fVar35 = *(float *)(this + 0x348) - *(float *)(lVar9 + 0x1f8);
          *(float *)(lVar9 + 0xdc) = fVar34 * fVar21 + *(float *)(lVar9 + 0xdc);
          fVar33 = *(float *)(this + 0x34c) - *(float *)(lVar9 + 0x1fc);
          *(float *)(lVar9 + 0xe0) = fVar34 * fVar17 + *(float *)(lVar9 + 0xe0);
          fVar34 = *(float *)(this + 0x350) - *(float *)(lVar9 + 0x200);
          fVar25 = fVar35 * fVar21 - fVar33 * fVar15;
          fVar15 = fVar15 * fVar34 - fVar35 * fVar17;
          fVar21 = fVar33 * fVar17 - fVar34 * fVar21;
          *(float *)(lVar9 + 0xe4) =
               fVar25 * *(float *)(lVar9 + 0x1b8) +
               fVar21 * *(float *)(lVar9 + 0x1b0) + fVar15 * *(float *)(lVar9 + 0x1b4) +
               *(float *)(lVar9 + 0xe4);
          *(ulong *)(lVar9 + 0xe8) =
               CONCAT44((float)((ulong)*(undefined8 *)(lVar9 + 0xe8) >> 0x20) +
                        (float)((ulong)*(undefined8 *)(lVar9 + 0x1c8) >> 0x20) * fVar15 +
                        *(float *)(lVar9 + 0x1c8) * fVar21 + *(float *)(lVar9 + 0x1d0) * fVar25,
                        (float)*(undefined8 *)(lVar9 + 0xe8) +
                        (float)*(undefined8 *)(lVar9 + 0x1c0) * fVar15 +
                        *(float *)(lVar9 + 0x1bc) * fVar21 + *(float *)(lVar9 + 0x1c4) * fVar25);
        }
      }
    }
    lVar12 = lVar12 + 1;
    pGVar13 = pGVar13 + 0x40;
  } while (lVar12 != 3);
  fVar31 = *(float *)(this + 0x2a0);
  fVar30 = *(float *)(this + 0x2ac);
  fVar19 = *(float *)(this + 0x2d0);
  fVar1 = *(float *)(this + 0x294);
  fVar29 = (float)*(undefined8 *)(lVar7 + 0xe4);
  fVar16 = (float)((ulong)*(undefined8 *)(lVar7 + 0xe4) >> 0x20);
  fVar18 = *(float *)(lVar7 + 0xec);
  fVar2 = *(float *)(this + 0x2c4);
  fVar3 = *(float *)(this + 0x2dc);
  local_1c = (float)*(undefined8 *)(lVar9 + 0xe4);
  fStack_18 = (float)((ulong)*(undefined8 *)(lVar9 + 0xe4) >> 0x20);
  fVar27 = *(float *)(lVar9 + 0xec);
  fVar22 = fVar29 * fVar1 + fVar16 * fVar31 + fVar18 * fVar30;
  fVar23 = fStack_18 * fVar19 + local_1c * fVar2 + fVar27 * fVar3;
  fVar14 = (fVar16 - fVar22 * fVar31) - (fStack_18 - fVar23 * fVar19);
  fVar24 = (fVar18 - fVar22 * fVar30) - (fVar27 - fVar23 * fVar3);
  local_68 = (fVar29 - fVar22 * fVar1) - (local_1c - fVar23 * fVar2);
  fVar20 = fVar14 * fVar14 + local_68 * local_68 + fVar24 * fVar24;
  fVar26 = SQRT(fVar20);
  if (__LC2 < fVar26) {
    if (fVar20 == 0.0) {
      fVar26 = 0.0;
      fVar20 = 0.0;
      fVar28 = 0.0;
    }
    else {
      fVar20 = fVar14 / fVar26;
      fVar28 = local_68 / fVar26;
      fVar26 = fVar24 / fVar26;
    }
    fVar20 = (_LC3 / ((*(float *)(lVar9 + 0x1bc) * fVar20 + *(float *)(lVar9 + 0x1b0) * fVar28 +
                      *(float *)(lVar9 + 0x1c8) * fVar26) * fVar28 +
                      (*(float *)(lVar9 + 0x1c0) * fVar20 + *(float *)(lVar9 + 0x1b4) * fVar28 +
                      *(float *)(lVar9 + 0x1cc) * fVar26) * fVar20 +
                      (*(float *)(lVar9 + 0x1c4) * fVar20 + *(float *)(lVar9 + 0x1b8) * fVar28 +
                      *(float *)(lVar9 + 0x1d0) * fVar26) * fVar26 +
                     (*(float *)(lVar7 + 0x1c0) * fVar20 + *(float *)(lVar7 + 0x1b4) * fVar28 +
                     *(float *)(lVar7 + 0x1cc) * fVar26) * fVar20 +
                     (*(float *)(lVar7 + 0x1bc) * fVar20 + *(float *)(lVar7 + 0x1b0) * fVar28 +
                     *(float *)(lVar7 + 0x1c8) * fVar26) * fVar28 +
                     (fVar20 * *(float *)(lVar7 + 0x1c4) + fVar28 * *(float *)(lVar7 + 0x1b8) +
                     *(float *)(lVar7 + 0x1d0) * fVar26) * fVar26)) * *(float *)(this + 0xfc) *
             *(float *)(this + 0xf4);
    local_68 = local_68 * fVar20;
    fVar14 = fVar14 * fVar20;
    fVar24 = fVar24 * fVar20;
  }
  fVar28 = _LC3 / param_1;
  fVar26 = (fVar2 * fVar30 - fVar3 * fVar1) * fVar28;
  fVar20 = (fVar3 * fVar31 - fVar19 * fVar30) * fVar28;
  fVar28 = (fVar19 * fVar1 - fVar2 * fVar31) * fVar28;
  fVar32 = fVar26 * fVar26 + fVar20 * fVar20 + fVar28 * fVar28;
  fVar21 = SQRT(fVar32);
  if (__LC2 < fVar21) {
    if (fVar32 == 0.0) {
      fVar21 = 0.0;
      fVar15 = 0.0;
      fVar32 = 0.0;
    }
    else {
      fVar32 = fVar20 / fVar21;
      fVar15 = fVar26 / fVar21;
      fVar21 = fVar28 / fVar21;
    }
    fVar32 = (_LC3 / ((*(float *)(lVar9 + 0x1bc) * fVar15 + *(float *)(lVar9 + 0x1b0) * fVar32 +
                      *(float *)(lVar9 + 0x1c8) * fVar21) * fVar32 +
                      (*(float *)(lVar9 + 0x1c0) * fVar15 + *(float *)(lVar9 + 0x1b4) * fVar32 +
                      *(float *)(lVar9 + 0x1cc) * fVar21) * fVar15 +
                      (*(float *)(lVar9 + 0x1c4) * fVar15 + *(float *)(lVar9 + 0x1b8) * fVar32 +
                      *(float *)(lVar9 + 0x1d0) * fVar21) * fVar21 +
                     (*(float *)(lVar7 + 0x1c0) * fVar15 + *(float *)(lVar7 + 0x1b4) * fVar32 +
                     *(float *)(lVar7 + 0x1cc) * fVar21) * fVar15 +
                     (*(float *)(lVar7 + 0x1bc) * fVar15 + *(float *)(lVar7 + 0x1b0) * fVar32 +
                     *(float *)(lVar7 + 0x1c8) * fVar21) * fVar32 +
                     (fVar15 * *(float *)(lVar7 + 0x1c4) + fVar32 * *(float *)(lVar7 + 0x1b8) +
                     *(float *)(lVar7 + 0x1d0) * fVar21) * fVar21)) * *(float *)(this + 0xf8) *
             *(float *)(this + 0xf4);
    fVar20 = fVar20 * fVar32;
    fVar26 = fVar26 * fVar32;
    fVar28 = fVar28 * fVar32;
  }
  if (GVar4 != (GodotSliderJoint3D)0x0) {
    fVar15 = fVar20 - local_68;
    fVar21 = fVar26 - fVar14;
    fVar32 = fVar28 - fVar24;
    *(float *)(lVar7 + 0xec) =
         *(float *)(lVar7 + 0x1d0) * fVar32 +
         *(float *)(lVar7 + 0x1cc) * fVar21 + *(float *)(lVar7 + 0x1c8) * fVar15 + fVar18;
    *(ulong *)(lVar7 + 0xe4) =
         CONCAT44((float)((ulong)*(undefined8 *)(lVar7 + 0x1c0) >> 0x20) * fVar32 +
                  *(float *)(lVar7 + 0x1c0) * fVar21 +
                  (float)((ulong)*(undefined8 *)(lVar7 + 0x1b8) >> 0x20) * fVar15 + fVar16,
                  (float)*(undefined8 *)(lVar7 + 0x1b8) * fVar32 +
                  *(float *)(lVar7 + 0x1b4) * fVar21 +
                  (float)*(undefined8 *)(lVar7 + 0x1b0) * fVar15 + fVar29);
  }
  if (GVar5 != (GodotSliderJoint3D)0x0) {
    fVar14 = fVar14 - fVar26;
    fVar24 = fVar24 - fVar28;
    local_68 = local_68 - fVar20;
    *(float *)(lVar9 + 0xec) =
         *(float *)(lVar9 + 0x1d0) * fVar24 +
         *(float *)(lVar9 + 0x1cc) * fVar14 + *(float *)(lVar9 + 0x1c8) * local_68 +
         *(float *)(lVar9 + 0xec);
    *(ulong *)(lVar9 + 0xe4) =
         CONCAT44((float)((ulong)*(undefined8 *)(lVar9 + 0x1bc) >> 0x20) * fVar14 +
                  *(float *)(lVar9 + 0x1bc) * local_68 + fVar24 * *(float *)(lVar9 + 0x1c4) +
                  (float)((ulong)*(undefined8 *)(lVar9 + 0xe4) >> 0x20),
                  (float)*(undefined8 *)(lVar9 + 0x1b4) * fVar14 +
                  *(float *)(lVar9 + 0x1b0) * local_68 + fVar24 * *(float *)(lVar9 + 0x1b8) +
                  (float)*(undefined8 *)(lVar9 + 0xe4));
  }
  fVar24 = *(float *)(this + 0x35c);
  fVar18 = (fStack_18 - fVar16) * fVar31 + (local_1c - fVar29) * fVar1 + (fVar27 - fVar18) * fVar30;
  if (this[0x101] == (GodotSliderJoint3D)0x0) {
    fVar18 = *(float *)(this + 0xc4) * fVar24 *
             ((*(float *)(this + 0x358) * *(float *)(this + 200)) / param_1 +
             fVar18 * *(float *)(this + 0xcc));
  }
  else {
    fVar18 = *(float *)(this + 0xdc) * fVar24 *
             ((*(float *)(this + 0x358) * *(float *)(this + 0xe0)) / param_1 +
             fVar18 * *(float *)(this + 0xe4));
  }
  fVar27 = fVar18 * fVar30;
  fVar29 = fVar18 * fVar31;
  fVar18 = fVar18 * fVar1;
  if (GVar4 != (GodotSliderJoint3D)0x0) {
    *(float *)(lVar7 + 0xec) =
         *(float *)(lVar7 + 0x1d0) * fVar27 +
         *(float *)(lVar7 + 0x1c8) * fVar18 + *(float *)(lVar7 + 0x1cc) * fVar29 +
         *(float *)(lVar7 + 0xec);
    *(ulong *)(lVar7 + 0xe4) =
         CONCAT44((float)((ulong)*(undefined8 *)(lVar7 + 0x1bc) >> 0x20) * fVar29 +
                  *(float *)(lVar7 + 0x1bc) * fVar18 + *(float *)(lVar7 + 0x1c4) * fVar27 +
                  (float)((ulong)*(undefined8 *)(lVar7 + 0xe4) >> 0x20),
                  (float)*(undefined8 *)(lVar7 + 0x1b4) * fVar29 +
                  *(float *)(lVar7 + 0x1b0) * fVar18 + *(float *)(lVar7 + 0x1b8) * fVar27 +
                  (float)*(undefined8 *)(lVar7 + 0xe4));
  }
  if (GVar5 != (GodotSliderJoint3D)0x0) {
    fVar27 = (float)((uint)fVar27 ^ _LC1);
    fVar29 = (float)((uint)fVar29 ^ _LC1);
    fVar18 = (float)((uint)fVar18 ^ _LC1);
    *(float *)(lVar9 + 0xec) =
         *(float *)(lVar9 + 0x1c8) * fVar18 + *(float *)(lVar9 + 0x1cc) * fVar29 +
         *(float *)(lVar9 + 0x1d0) * fVar27 + *(float *)(lVar9 + 0xec);
    *(ulong *)(lVar9 + 0xe4) =
         CONCAT44((float)((ulong)*(undefined8 *)(lVar9 + 0x1bc) >> 0x20) * fVar29 +
                  fVar18 * *(float *)(lVar9 + 0x1bc) + *(float *)(lVar9 + 0x1c4) * fVar27 +
                  (float)((ulong)*(undefined8 *)(lVar9 + 0xe4) >> 0x20),
                  (float)*(undefined8 *)(lVar9 + 0x1b4) * fVar29 +
                  fVar18 * *(float *)(lVar9 + 0x1b0) + *(float *)(lVar9 + 0x1b8) * fVar27 +
                  (float)*(undefined8 *)(lVar9 + 0xe4));
  }
  if (this[0x370] != (GodotSliderJoint3D)0x0) {
    fVar18 = *(float *)(this + 0x37c);
    fVar27 = *(float *)(this + 0x378);
    if (fVar18 < fVar27) {
      fVar24 = fVar24 * (*(float *)(this + 0x374) -
                        ((fVar22 * fVar1 - fVar23 * fVar2) * fVar1 +
                         (fVar22 * fVar31 - fVar23 * fVar19) * fVar31 +
                        (fVar22 * fVar30 - fVar23 * fVar3) * fVar30));
      fVar19 = ABS(fVar24) + fVar18;
      if (fVar19 <= fVar27) {
        fVar27 = fVar19;
      }
      fVar18 = fVar27 - fVar18;
      if (fVar24 < 0.0) {
        fVar18 = (float)((uint)fVar18 ^ _LC1);
      }
      fVar30 = fVar30 * fVar18;
      *(float *)(this + 0x37c) = fVar27;
      fVar31 = fVar31 * fVar18;
      fVar18 = fVar18 * fVar1;
      if (GVar4 != (GodotSliderJoint3D)0x0) {
        *(float *)(lVar7 + 0xec) =
             *(float *)(lVar7 + 0x1d0) * fVar30 +
             *(float *)(lVar7 + 0x1c8) * fVar18 + *(float *)(lVar7 + 0x1cc) * fVar31 +
             *(float *)(lVar7 + 0xec);
        *(ulong *)(lVar7 + 0xe4) =
             CONCAT44((float)((ulong)*(undefined8 *)(lVar7 + 0x1bc) >> 0x20) * fVar31 +
                      *(float *)(lVar7 + 0x1bc) * fVar18 + *(float *)(lVar7 + 0x1c4) * fVar30 +
                      (float)((ulong)*(undefined8 *)(lVar7 + 0xe4) >> 0x20),
                      (float)*(undefined8 *)(lVar7 + 0x1b4) * fVar31 +
                      *(float *)(lVar7 + 0x1b0) * fVar18 + *(float *)(lVar7 + 0x1b8) * fVar30 +
                      (float)*(undefined8 *)(lVar7 + 0xe4));
      }
      if (GVar5 != (GodotSliderJoint3D)0x0) {
        fVar30 = (float)((uint)fVar30 ^ _LC1);
        fVar31 = (float)((uint)fVar31 ^ _LC1);
        fVar18 = (float)((uint)fVar18 ^ _LC1);
        *(float *)(lVar9 + 0xec) =
             *(float *)(lVar9 + 0x1d0) * fVar30 +
             *(float *)(lVar9 + 0x1c8) * fVar18 + *(float *)(lVar9 + 0x1cc) * fVar31 +
             *(float *)(lVar9 + 0xec);
        *(ulong *)(lVar9 + 0xe4) =
             CONCAT44((float)((ulong)*(undefined8 *)(lVar9 + 0x1bc) >> 0x20) * fVar31 +
                      fVar18 * *(float *)(lVar9 + 0x1bc) + *(float *)(lVar9 + 0x1c4) * fVar30 +
                      (float)((ulong)*(undefined8 *)(lVar9 + 0xe4) >> 0x20),
                      (float)*(undefined8 *)(lVar9 + 0x1b4) * fVar31 +
                      fVar18 * *(float *)(lVar9 + 0x1b0) + *(float *)(lVar9 + 0x1b8) * fVar30 +
                      (float)*(undefined8 *)(lVar9 + 0xe4));
      }
    }
  }
  if (lVar8 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* HashMap<GodotConstraint3D*, int, HashMapHasherDefault,
   HashMapComparatorDefault<GodotConstraint3D*>,
   DefaultTypedAllocator<HashMapElement<GodotConstraint3D*, int> > >::erase(GodotConstraint3D*
   const&) [clone .isra.0] */

void __thiscall
HashMap<GodotConstraint3D*,int,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint3D*>,DefaultTypedAllocator<HashMapElement<GodotConstraint3D*,int>>>
::erase(HashMap<GodotConstraint3D*,int,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint3D*>,DefaultTypedAllocator<HashMapElement<GodotConstraint3D*,int>>>
        *this,GodotConstraint3D **param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  ulong uVar29;
  uint uVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  long *plVar34;
  ulong uVar35;
  uint uVar36;
  uint uVar37;
  uint *puVar38;
  
  lVar6 = *(long *)(this + 8);
  if ((lVar6 != 0) && (*(int *)(this + 0x2c) != 0)) {
    lVar7 = *(long *)(this + 0x10);
    uVar5 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    uVar35 = CONCAT44(0,uVar5);
    lVar8 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    uVar29 = (long)*param_1 * 0x3ffff - 1;
    uVar29 = (uVar29 ^ uVar29 >> 0x1f) * 0x15;
    uVar29 = (uVar29 ^ uVar29 >> 0xb) * 0x41;
    uVar29 = uVar29 >> 0x16 ^ uVar29;
    uVar32 = uVar29 & 0xffffffff;
    if ((int)uVar29 == 0) {
      uVar32 = 1;
    }
    auVar11._8_8_ = 0;
    auVar11._0_8_ = uVar32 * lVar8;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = uVar35;
    uVar29 = SUB168(auVar11 * auVar20,8);
    uVar37 = *(uint *)(lVar7 + uVar29 * 4);
    uVar33 = (ulong)SUB164(auVar11 * auVar20,8);
    if (uVar37 != 0) {
      uVar36 = 0;
      do {
        auVar14._8_8_ = 0;
        auVar14._0_8_ = (ulong)((int)uVar33 + 1) * lVar8;
        auVar23._8_8_ = 0;
        auVar23._0_8_ = uVar35;
        uVar31 = SUB168(auVar14 * auVar23,8);
        uVar30 = SUB164(auVar14 * auVar23,8);
        if (((uint)uVar32 == uVar37) &&
           (*param_1 == *(GodotConstraint3D **)(*(long *)(lVar6 + uVar29 * 8) + 0x10))) {
          puVar38 = (uint *)(lVar7 + uVar31 * 4);
          uVar37 = *puVar38;
          if ((uVar37 != 0) &&
             (auVar15._8_8_ = 0, auVar15._0_8_ = (ulong)uVar37 * lVar8, auVar24._8_8_ = 0,
             auVar24._0_8_ = uVar35, auVar16._8_8_ = 0,
             auVar16._0_8_ = (ulong)((uVar30 + uVar5) - SUB164(auVar15 * auVar24,8)) * lVar8,
             auVar25._8_8_ = 0, auVar25._0_8_ = uVar35, uVar29 = (ulong)uVar30, uVar32 = uVar33,
             SUB164(auVar16 * auVar25,8) != 0)) {
            while( true ) {
              uVar33 = uVar29;
              puVar1 = (uint *)(lVar7 + uVar32 * 4);
              *puVar38 = *puVar1;
              puVar2 = (undefined8 *)(lVar6 + uVar31 * 8);
              *puVar1 = uVar37;
              puVar3 = (undefined8 *)(lVar6 + uVar32 * 8);
              uVar9 = *puVar2;
              *puVar2 = *puVar3;
              *puVar3 = uVar9;
              auVar19._8_8_ = 0;
              auVar19._0_8_ = (ulong)((int)uVar33 + 1) * lVar8;
              auVar28._8_8_ = 0;
              auVar28._0_8_ = uVar35;
              uVar31 = SUB168(auVar19 * auVar28,8);
              puVar38 = (uint *)(lVar7 + uVar31 * 4);
              uVar37 = *puVar38;
              if ((uVar37 == 0) ||
                 (auVar17._8_8_ = 0, auVar17._0_8_ = (ulong)uVar37 * lVar8, auVar26._8_8_ = 0,
                 auVar26._0_8_ = uVar35, auVar18._8_8_ = 0,
                 auVar18._0_8_ =
                      (ulong)((SUB164(auVar19 * auVar28,8) + uVar5) - SUB164(auVar17 * auVar26,8)) *
                      lVar8, auVar27._8_8_ = 0, auVar27._0_8_ = uVar35,
                 SUB164(auVar18 * auVar27,8) == 0)) break;
              uVar29 = uVar31 & 0xffffffff;
              uVar32 = uVar33;
            }
          }
          plVar4 = (long *)(lVar6 + uVar33 * 8);
          *(undefined4 *)(lVar7 + uVar33 * 4) = 0;
          plVar34 = (long *)*plVar4;
          if (*(long **)(this + 0x18) == plVar34) {
            *(long *)(this + 0x18) = *plVar34;
            plVar34 = (long *)*plVar4;
            if (*(long **)(this + 0x20) != plVar34) goto LAB_00101789;
          }
          else if (*(long **)(this + 0x20) != plVar34) {
LAB_00101789:
            plVar10 = (long *)plVar34[1];
            goto joined_r0x00101790;
          }
          *(long *)(this + 0x20) = plVar34[1];
          plVar34 = (long *)*plVar4;
          plVar10 = (long *)plVar34[1];
joined_r0x00101790:
          if (plVar10 != (long *)0x0) {
            *plVar10 = *plVar34;
            plVar34 = (long *)*plVar4;
          }
          if (*plVar34 != 0) {
            *(long *)(*plVar34 + 8) = plVar34[1];
            plVar34 = (long *)*plVar4;
          }
          Memory::free_static(plVar34,false);
          *(undefined8 *)(*(long *)(this + 8) + uVar33 * 8) = 0;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + -1;
          return;
        }
        uVar37 = *(uint *)(lVar7 + uVar31 * 4);
        uVar33 = uVar31 & 0xffffffff;
        uVar36 = uVar36 + 1;
      } while ((uVar37 != 0) &&
              (auVar12._8_8_ = 0, auVar12._0_8_ = (ulong)uVar37 * lVar8, auVar21._8_8_ = 0,
              auVar21._0_8_ = uVar35, auVar13._8_8_ = 0,
              auVar13._0_8_ = (ulong)((uVar5 + uVar30) - SUB164(auVar12 * auVar21,8)) * lVar8,
              auVar22._8_8_ = 0, auVar22._0_8_ = uVar35, uVar29 = uVar31,
              uVar36 <= SUB164(auVar13 * auVar22,8)));
    }
  }
  return;
}



/* GodotSliderJoint3D::calculateTransforms() */

void __thiscall GodotSliderJoint3D::calculateTransforms(GodotSliderJoint3D *this)

{
  float fVar1;
  GodotSliderJoint3D *pGVar2;
  GodotSliderJoint3D *pGVar3;
  long in_FS_OFFSET;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  Transform3D::operator*((Transform3D *)&local_58,(Transform3D *)(*(long *)(this + 0x38) + 0x48));
  *(undefined8 *)(this + 0x294) = local_58;
  *(undefined8 *)(this + 0x29c) = uStack_50;
  *(undefined8 *)(this + 0x2a4) = local_48;
  *(undefined8 *)(this + 0x2ac) = uStack_40;
  *(undefined8 *)(this + 0x2b4) = local_38;
  *(undefined8 *)(this + 700) = uStack_30;
  Transform3D::operator*((Transform3D *)&local_58,(Transform3D *)(*(long *)(this + 0x40) + 0x48));
  *(undefined8 *)(this + 0x2c4) = local_58;
  *(undefined8 *)(this + 0x2cc) = uStack_50;
  fVar7 = (float)*(undefined8 *)(this + 0x294);
  fVar1 = *(float *)(this + 0x2ac);
  *(undefined8 *)(this + 0x2d4) = local_48;
  *(undefined8 *)(this + 0x2dc) = uStack_40;
  *(undefined8 *)(this + 0x300) = *(undefined8 *)(this + 0x2b8);
  *(undefined8 *)(this + 0x2e4) = local_38;
  *(undefined8 *)(this + 0x2ec) = uStack_30;
  *(undefined4 *)(this + 0x308) = *(undefined4 *)(this + 0x2c0);
  *(ulong *)(this + 0x2f4) = CONCAT44((int)((ulong)*(undefined8 *)(this + 0x29c) >> 0x20),fVar7);
  *(undefined8 *)(this + 0x30c) = *(undefined8 *)(this + 0x2e8);
  *(float *)(this + 0x2fc) = fVar1;
  *(undefined4 *)(this + 0x314) = *(undefined4 *)(this + 0x2f0);
  fVar4 = (float)*(undefined8 *)(this + 0x310) - (float)*(undefined8 *)(this + 0x304);
  fVar6 = (float)((ulong)*(undefined8 *)(this + 0x310) >> 0x20) -
          (float)((ulong)*(undefined8 *)(this + 0x304) >> 0x20);
  *(ulong *)(this + 0x328) = CONCAT44(fVar6,fVar4);
  fVar8 = *(float *)(this + 0x30c) - *(float *)(this + 0x300);
  fVar5 = fVar8 * fVar7 + *(float *)(this + 0x2a0) * fVar4 + fVar1 * fVar6;
  *(float *)(this + 0x318) = *(float *)(this + 0x300) + fVar7 * fVar5;
  *(float *)(this + 0x31c) = *(float *)(this + 0x304) + *(float *)(this + 0x2a0) * fVar5;
  *(float *)(this + 800) = *(float *)(this + 0x308) + fVar5 * fVar1;
  *(float *)(this + 0x324) = *(float *)(this + 0x30c) - *(float *)(this + 0x300);
  pGVar2 = this + 0x294;
  do {
    pGVar3 = pGVar2 + 4;
    *(float *)(pGVar2 + 0x9c) =
         *(float *)pGVar2 * fVar8 + *(float *)(pGVar2 + 0xc) * fVar4 +
         *(float *)(pGVar2 + 0x18) * fVar6;
    pGVar2 = pGVar3;
  } while (pGVar3 != this + 0x2a0);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotSliderJoint3D::testLinLimits() */

void __thiscall GodotSliderJoint3D::testLinLimits(GodotSliderJoint3D *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *(float *)(this + 0xa8);
  fVar2 = *(float *)(this + 0xac);
  this[0x100] = (GodotSliderJoint3D)0x0;
  fVar3 = *(float *)(this + 0x330);
  *(float *)(this + 0x354) = fVar3;
  if (fVar1 <= fVar2) {
    if (fVar2 < fVar3) {
      this[0x100] = (GodotSliderJoint3D)0x1;
      *(float *)(this + 0x330) = fVar3 - fVar2;
      return;
    }
    if (fVar3 < fVar1) {
      this[0x100] = (GodotSliderJoint3D)0x1;
      *(float *)(this + 0x330) = fVar3 - fVar1;
      return;
    }
  }
  *(undefined4 *)(this + 0x330) = 0;
  return;
}



/* GodotSliderJoint3D::testAngLimits() */

void __thiscall GodotSliderJoint3D::testAngLimits(GodotSliderJoint3D *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = *(float *)(this + 0xb0);
  fVar2 = *(float *)(this + 0xb4);
  *(undefined4 *)(this + 0x358) = 0;
  this[0x101] = (GodotSliderJoint3D)0x0;
  if (fVar1 <= fVar2) {
    fVar4 = *(float *)(this + 0x298) * *(float *)(this + 0x2c8) +
            *(float *)(this + 0x2a4) * *(float *)(this + 0x2d4) +
            *(float *)(this + 0x2b0) * *(float *)(this + 0x2e0);
    fVar5 = *(float *)(this + 0x2c8) * *(float *)(this + 0x29c) +
            *(float *)(this + 0x2d4) * *(float *)(this + 0x2a8) +
            *(float *)(this + 0x2e0) * *(float *)(this + 0x2b4);
    fVar3 = ABS(fVar5);
    if (fVar4 < 0.0) {
      fVar3 = _LC5 - ((fVar3 + fVar4) / (fVar3 - fVar4)) * _LC4;
    }
    else {
      fVar3 = _LC4 - ((fVar4 - fVar3) / (fVar3 + fVar4)) * _LC4;
    }
    if (fVar5 < 0.0) {
      fVar3 = (float)((uint)fVar3 ^ _LC1);
    }
    if (fVar3 < fVar1) {
      this[0x101] = (GodotSliderJoint3D)0x1;
      *(float *)(this + 0x358) = fVar3 - fVar1;
      return;
    }
    if (fVar2 < fVar3) {
      this[0x101] = (GodotSliderJoint3D)0x1;
      *(float *)(this + 0x358) = fVar3 - fVar2;
    }
  }
  return;
}



/* GodotSliderJoint3D::setup(float) */

byte GodotSliderJoint3D::setup(float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  uint uVar8;
  int iVar9;
  byte bVar10;
  long lVar11;
  long lVar12;
  GodotSliderJoint3D *in_RDI;
  GodotSliderJoint3D *pGVar13;
  GodotSliderJoint3D *pGVar14;
  long in_FS_OFFSET;
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
  undefined8 *puVar32;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_110;
  float local_108;
  undefined8 local_104;
  float local_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  float local_68;
  float fStack_64;
  float local_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float local_50;
  float fStack_4c;
  float local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar9 = GodotBody3D::get_mode();
  in_RDI[0x30] = (GodotSliderJoint3D)(1 < iVar9);
  iVar9 = GodotBody3D::get_mode();
  in_RDI[0x31] = (GodotSliderJoint3D)(1 < iVar9);
  bVar10 = 1 < iVar9 | (byte)in_RDI[0x30];
  if (bVar10 == 0) goto LAB_001028bf;
  pGVar13 = in_RDI + 0x104;
  Transform3D::operator*((Transform3D *)&local_148,(Transform3D *)(*(long *)(in_RDI + 0x38) + 0x48))
  ;
  *(undefined8 *)(in_RDI + 0x294) = local_148;
  *(undefined8 *)(in_RDI + 0x29c) = uStack_140;
  *(undefined8 *)(in_RDI + 0x2a4) = local_138;
  *(undefined8 *)(in_RDI + 0x2ac) = uStack_130;
  *(undefined8 *)(in_RDI + 0x2b4) = local_128;
  *(undefined8 *)(in_RDI + 700) = uStack_120;
  Transform3D::operator*((Transform3D *)&local_148,(Transform3D *)(*(long *)(in_RDI + 0x40) + 0x48))
  ;
  lVar12 = *(long *)(in_RDI + 0x38);
  *(undefined8 *)(in_RDI + 0x2c4) = local_148;
  *(undefined8 *)(in_RDI + 0x2cc) = uStack_140;
  fVar27 = *(float *)(in_RDI + 0x2ac);
  *(undefined8 *)(in_RDI + 0x2d4) = local_138;
  *(undefined8 *)(in_RDI + 0x2dc) = uStack_130;
  *(undefined8 *)(in_RDI + 0x300) = *(undefined8 *)(in_RDI + 0x2b8);
  *(undefined8 *)(in_RDI + 0x2e4) = local_128;
  *(undefined8 *)(in_RDI + 0x2ec) = uStack_120;
  *(undefined4 *)(in_RDI + 0x308) = *(undefined4 *)(in_RDI + 0x2c0);
  fVar26 = (float)*(undefined8 *)(in_RDI + 0x294);
  *(float *)(in_RDI + 0x2fc) = fVar27;
  *(undefined8 *)(in_RDI + 0x30c) = *(undefined8 *)(in_RDI + 0x2e8);
  *(ulong *)(in_RDI + 0x2f4) =
       CONCAT44((int)((ulong)*(undefined8 *)(in_RDI + 0x29c) >> 0x20),fVar26);
  *(undefined4 *)(in_RDI + 0x314) = *(undefined4 *)(in_RDI + 0x2f0);
  puVar32 = &local_98;
  fVar15 = (float)*(undefined8 *)(in_RDI + 0x310);
  fVar17 = fVar15 - (float)*(undefined8 *)(in_RDI + 0x304);
  fVar16 = (float)((ulong)*(undefined8 *)(in_RDI + 0x310) >> 0x20);
  fVar18 = fVar16 - (float)((ulong)*(undefined8 *)(in_RDI + 0x304) >> 0x20);
  *(ulong *)(in_RDI + 0x328) = CONCAT44(fVar18,fVar17);
  fVar18 = (*(float *)(in_RDI + 0x30c) - *(float *)(in_RDI + 0x300)) * fVar26 +
           fVar17 * *(float *)(in_RDI + 0x2a0) + fVar18 * fVar27;
  fVar17 = fVar26 * fVar18 + *(float *)(in_RDI + 0x300);
  fVar26 = *(float *)(in_RDI + 0x2a0) * fVar18 + *(float *)(in_RDI + 0x304);
  fVar27 = fVar18 * fVar27 + *(float *)(in_RDI + 0x308);
  *(float *)(in_RDI + 0x318) = fVar17;
  *(float *)(in_RDI + 0x31c) = fVar26;
  *(float *)(in_RDI + 800) = fVar27;
  *(float *)(in_RDI + 0x324) = *(float *)(in_RDI + 0x30c) - *(float *)(in_RDI + 0x300);
  fVar17 = fVar17 - *(float *)(lVar12 + 0x6c);
  fVar26 = fVar26 - *(float *)(lVar12 + 0x70);
  fVar27 = fVar27 - *(float *)(lVar12 + 0x74);
  *(float *)(in_RDI + 0x33c) = fVar17;
  *(float *)(in_RDI + 0x340) = fVar26;
  lVar11 = *(long *)(in_RDI + 0x40);
  *(float *)(in_RDI + 0x344) = fVar27;
  fVar18 = *(float *)(in_RDI + 0x30c) - *(float *)(lVar11 + 0x6c);
  fVar15 = fVar15 - (float)*(undefined8 *)(lVar11 + 0x70);
  fVar16 = fVar16 - (float)((ulong)*(undefined8 *)(lVar11 + 0x70) >> 0x20);
  *(float *)(in_RDI + 0x348) = fVar18;
  *(float *)(in_RDI + 0x34c) = fVar15;
  *(float *)(in_RDI + 0x350) = fVar16;
  pGVar14 = in_RDI + 0x1c4;
  while( true ) {
    uVar5 = *(undefined8 *)(lVar11 + 0x1f8);
    fVar19 = *(float *)(lVar11 + 0x170);
    fVar23 = *(float *)(pGVar14 + 0xe8);
    fVar20 = *(float *)(pGVar14 + 0xdc);
    fVar21 = *(float *)(pGVar14 + 0xd0);
    local_fc = *(float *)(lVar11 + 0x200);
    local_104._4_4_ = (float)((ulong)uVar5 >> 0x20);
    fVar15 = fVar15 - local_104._4_4_;
    local_104._0_4_ = (float)uVar5;
    fVar18 = fVar18 - (float)local_104;
    local_98 = *(undefined8 *)(lVar11 + 0x1d4);
    uStack_90 = *(undefined8 *)(lVar11 + 0x1dc);
    uVar6 = *(undefined8 *)(lVar12 + 0x1f8);
    fVar16 = fVar16 - local_fc;
    fVar24 = *(float *)(lVar12 + 0x170);
    local_108 = *(float *)(lVar12 + 0x200);
    local_110._4_4_ = (float)((ulong)uVar6 >> 0x20);
    fVar26 = fVar26 - local_110._4_4_;
    local_110._0_4_ = (float)uVar6;
    fVar17 = fVar17 - (float)local_110;
    fVar27 = fVar27 - local_108;
    local_88 = *(undefined8 *)(lVar11 + 0x1e4);
    uStack_80 = *(undefined8 *)(lVar11 + 0x1ec);
    local_78 = *(undefined4 *)(lVar11 + 500);
    local_110 = uVar6;
    local_104 = uVar5;
    Basis::transposed();
    lVar7 = *(long *)(in_RDI + 0x38);
    local_f8 = *(undefined8 *)(lVar7 + 0x1d4);
    uStack_f0 = *(undefined8 *)(lVar7 + 0x1dc);
    local_e8 = *(undefined8 *)(lVar7 + 0x1e4);
    uStack_e0 = *(undefined8 *)(lVar7 + 0x1ec);
    local_d8 = *(undefined4 *)(lVar7 + 500);
    Basis::transposed();
    uVar8 = _LC1;
    *(undefined8 *)(pGVar13 + 0x24) = 0;
    *(float *)(pGVar13 + 0x2c) = 0.0;
    *(undefined8 *)(pGVar13 + 0x30) = 0;
    *(float *)(pGVar13 + 0x38) = 0.0;
    *(float *)pGVar13 = fVar21;
    fVar28 = fVar17 * fVar20 - fVar26 * fVar21;
    *(float *)(pGVar13 + 4) = fVar20;
    *(float *)(pGVar13 + 8) = fVar23;
    fVar26 = fVar26 * fVar23 - fVar27 * fVar20;
    fVar27 = fVar27 * fVar21 - fVar17 * fVar23;
    fVar22 = local_b0 * fVar26 + local_ac * fVar27 + local_a8 * fVar28;
    *(float *)(pGVar13 + 0x14) = fVar22;
    fVar25 = local_bc * fVar26 + local_b8 * fVar27 + local_b4 * fVar28;
    fVar27 = fVar26 * local_c8 + fVar27 * local_c4 + fVar28 * local_c0;
    *(float *)(pGVar13 + 0x10) = fVar25;
    *(float *)(pGVar13 + 0xc) = fVar27;
    fVar28 = fVar18 * (float)((uint)fVar20 ^ uVar8) - fVar15 * (float)((uint)fVar21 ^ uVar8);
    fVar18 = (float)((uint)fVar21 ^ uVar8) * fVar16 - fVar18 * (float)((uint)fVar23 ^ uVar8);
    fVar26 = fVar15 * (float)((uint)fVar23 ^ uVar8) - fVar16 * (float)((uint)fVar20 ^ uVar8);
    fVar31 = *(float *)(lVar12 + 0x178) * fVar25;
    fVar16 = local_50 * fVar26 + fStack_4c * fVar18 + local_48 * fVar28;
    *(float *)(pGVar13 + 0x28) = fVar31;
    *(float *)(pGVar13 + 0x20) = fVar16;
    fVar30 = *(float *)(lVar12 + 0x17c) * fVar22;
    *(float *)(pGVar13 + 0x2c) = fVar30;
    fVar29 = *(float *)(lVar11 + 0x17c) * fVar16;
    fVar17 = fVar26 * local_68 + fVar18 * fStack_64 + local_60 * fVar28;
    fVar26 = fVar26 * fStack_5c + fVar18 * local_58 + fStack_54 * fVar28;
    uVar5 = *(undefined8 *)(lVar11 + 0x174);
    *(float *)(pGVar13 + 0x38) = fVar29;
    *(float *)(pGVar13 + 0x18) = fVar17;
    *(float *)(pGVar13 + 0x1c) = fVar26;
    fVar15 = (float)uVar5 * fVar17;
    fVar18 = (float)((ulong)uVar5 >> 0x20) * fVar26;
    fVar28 = *(float *)(lVar12 + 0x174) * fVar27;
    *(ulong *)(pGVar13 + 0x30) = CONCAT44(fVar18,fVar15);
    *(float *)(pGVar13 + 0x24) = fVar28;
    fVar27 = fVar27 * fVar28 + fVar25 * fVar31 + fVar22 * fVar30 + fVar24 + fVar19 +
             fVar16 * fVar29 + fVar18 * fVar26 + fVar15 * fVar17;
    *(float *)(pGVar13 + 0x3c) = fVar27;
    if (fVar27 <= 0.0) {
      _err_print_error("GodotJacobianEntry3D",
                       "modules/godot_physics_3d/joints/godot_jacobian_entry_3d.h",0x4b,
                       "Condition \"m_Adiag <= real_t(0.0)\" is true.",0,0,puVar32);
      fVar27 = *(float *)(pGVar13 + 0x3c);
    }
    pGVar13 = pGVar13 + 0x40;
    *(float *)pGVar14 = _LC3 / fVar27;
    *(float *)(pGVar14 + 0x16c) =
         fVar21 * *(float *)(in_RDI + 0x324) + fVar20 * *(float *)(in_RDI + 0x328) +
         fVar23 * *(float *)(in_RDI + 0x32c);
    if (pGVar13 == in_RDI + 0x1c4) break;
    lVar11 = *(long *)(in_RDI + 0x40);
    lVar12 = *(long *)(in_RDI + 0x38);
    fVar27 = *(float *)(in_RDI + 0x344);
    fVar26 = *(float *)(in_RDI + 0x340);
    fVar17 = *(float *)(in_RDI + 0x33c);
    fVar16 = *(float *)(in_RDI + 0x350);
    fVar15 = *(float *)(in_RDI + 0x34c);
    fVar18 = *(float *)(in_RDI + 0x348);
    pGVar14 = pGVar14 + 4;
  }
  fVar27 = *(float *)(in_RDI + 0xa8);
  in_RDI[0x100] = (GodotSliderJoint3D)0x0;
  fVar26 = *(float *)(in_RDI + 0xac);
  fVar17 = *(float *)(in_RDI + 0x330);
  *(float *)(in_RDI + 0x354) = fVar17;
  if (fVar27 <= fVar26) {
    if (fVar17 <= fVar26) {
      if (fVar27 <= fVar17) goto LAB_0010240c;
      in_RDI[0x100] = (GodotSliderJoint3D)0x1;
      *(float *)(in_RDI + 0x330) = fVar17 - fVar27;
    }
    else {
      in_RDI[0x100] = (GodotSliderJoint3D)0x1;
      *(float *)(in_RDI + 0x330) = fVar17 - fVar26;
    }
  }
  else {
LAB_0010240c:
    *(undefined4 *)(in_RDI + 0x330) = 0;
  }
  pGVar13 = in_RDI + 0x294;
  pGVar14 = in_RDI + 0x1d0;
  do {
    lVar12 = *(long *)(in_RDI + 0x40);
    fVar27 = *(float *)(pGVar13 + 0x18);
    fVar26 = *(float *)(pGVar13 + 0xc);
    fVar17 = *(float *)pGVar13;
    local_98 = *(undefined8 *)(lVar12 + 0x1d4);
    uStack_90 = *(undefined8 *)(lVar12 + 0x1dc);
    lVar11 = *(long *)(in_RDI + 0x38);
    local_88 = *(undefined8 *)(lVar12 + 0x1e4);
    uStack_80 = *(undefined8 *)(lVar12 + 0x1ec);
    local_78 = *(undefined4 *)(lVar12 + 500);
    Basis::transposed();
    lVar7 = *(long *)(in_RDI + 0x38);
    local_f8 = *(undefined8 *)(lVar7 + 0x1d4);
    uStack_f0 = *(undefined8 *)(lVar7 + 0x1dc);
    local_e8 = *(undefined8 *)(lVar7 + 0x1e4);
    uStack_e0 = *(undefined8 *)(lVar7 + 0x1ec);
    local_d8 = *(undefined4 *)(lVar7 + 500);
    Basis::transposed();
    uVar8 = _LC1;
    *(undefined8 *)pGVar14 = 0;
    *(undefined4 *)(pGVar14 + 8) = 0;
    *(undefined8 *)(pGVar14 + 0x24) = 0;
    *(undefined8 *)(pGVar14 + 0x30) = 0;
    *(undefined4 *)(pGVar14 + 0x2c) = 0;
    *(undefined4 *)(pGVar14 + 0x38) = 0;
    fVar20 = local_b0 * fVar17 + local_ac * fVar26 + local_a8 * fVar27;
    fVar23 = (float)((uint)fVar26 ^ uVar8);
    fVar21 = local_bc * fVar17 + local_b8 * fVar26 + local_b4 * fVar27;
    fVar16 = (float)((uint)fVar17 ^ uVar8);
    fVar19 = (float)((uint)fVar27 ^ uVar8);
    fVar17 = local_c8 * fVar17 + local_c4 * fVar26 + local_c0 * fVar27;
    fVar22 = *(float *)(lVar11 + 0x178) * fVar21;
    fVar15 = fVar16 * local_68 + fVar23 * fStack_64 + fVar19 * local_60;
    fVar18 = local_58 * fVar23 + fStack_5c * fVar16 + fStack_54 * fVar19;
    fVar16 = fStack_4c * fVar23 + local_50 * fVar16 + local_48 * fVar19;
    fVar24 = *(float *)(lVar11 + 0x17c) * fVar20;
    *(ulong *)(pGVar14 + 0x1c) = CONCAT44(fVar16,fVar18);
    *(ulong *)(pGVar14 + 0xc) = CONCAT44(fVar21,fVar17);
    *(ulong *)(pGVar14 + 0x14) = CONCAT44(fVar15,fVar20);
    fVar27 = *(float *)(lVar11 + 0x174);
    fVar26 = *(float *)(lVar12 + 0x174);
    uVar5 = *(undefined8 *)(lVar12 + 0x178);
    *(float *)(pGVar14 + 0x28) = fVar22;
    fVar27 = fVar27 * fVar17;
    *(float *)(pGVar14 + 0x2c) = fVar24;
    fVar19 = (float)uVar5 * fVar18;
    fVar23 = (float)((ulong)uVar5 >> 0x20) * fVar16;
    fVar26 = fVar26 * fVar15;
    *(float *)(pGVar14 + 0x24) = fVar27;
    *(ulong *)(pGVar14 + 0x34) = CONCAT44(fVar23,fVar19);
    *(float *)(pGVar14 + 0x30) = fVar26;
    fVar27 = fVar17 * fVar27 + fVar21 * fVar22 + fVar20 * fVar24 +
             fVar15 * fVar26 + fVar18 * fVar19 + fVar16 * fVar23;
    *(float *)(pGVar14 + 0x3c) = fVar27;
    if (fVar27 <= 0.0) {
      _err_print_error("GodotJacobianEntry3D",
                       "modules/godot_physics_3d/joints/godot_jacobian_entry_3d.h",0x5b,
                       "Condition \"m_Adiag <= real_t(0.0)\" is true.",0,0);
    }
    pGVar14 = pGVar14 + 0x40;
    pGVar13 = pGVar13 + 4;
  } while (pGVar14 != in_RDI + 0x290);
  testAngLimits(in_RDI);
  lVar12 = *(long *)(in_RDI + 0x40);
  fVar27 = *(float *)(in_RDI + 0x2a0);
  fVar26 = *(float *)(in_RDI + 0x294);
  fVar17 = *(float *)(in_RDI + 0x2ac);
  fVar16 = *(float *)(lVar12 + 0x1b0);
  fVar15 = *(float *)(lVar12 + 0x1bc);
  fVar18 = *(float *)(lVar12 + 0x1c0);
  lVar11 = *(long *)(in_RDI + 0x38);
  fVar19 = *(float *)(lVar11 + 0x1c0);
  fVar23 = *(float *)(lVar12 + 0x1c8);
  fVar20 = *(float *)(lVar12 + 0x1b4);
  fVar21 = *(float *)(lVar12 + 0x1cc);
  fVar24 = *(float *)(lVar12 + 0x1c4);
  fVar22 = *(float *)(lVar12 + 0x1b8);
  fVar25 = *(float *)(lVar12 + 0x1d0);
  fVar28 = *(float *)(lVar11 + 0x1bc);
  fVar29 = *(float *)(lVar11 + 0x1b0);
  fVar30 = *(float *)(lVar11 + 0x1c8);
  fVar31 = *(float *)(lVar11 + 0x1b4);
  fVar1 = *(float *)(lVar11 + 0x1b8);
  fVar2 = *(float *)(lVar11 + 0x1cc);
  fVar3 = *(float *)(lVar11 + 0x1c4);
  fVar4 = *(float *)(lVar11 + 0x1d0);
  *(undefined4 *)(in_RDI + 0x36c) = 0;
  *(undefined4 *)(in_RDI + 0x37c) = 0;
  *(float *)(in_RDI + 0x35c) =
       _LC3 / ((fVar16 * fVar26 + fVar15 * fVar27 + fVar23 * fVar17) * fVar26 +
               (fVar20 * fVar26 + fVar18 * fVar27 + fVar21 * fVar17) * fVar27 +
               (fVar22 * fVar26 + fVar24 * fVar27 + fVar25 * fVar17) * fVar17 +
              (fVar26 * fVar1 + fVar27 * fVar3 + fVar4 * fVar17) * fVar17 +
              (fVar29 * fVar26 + fVar28 * fVar27 + fVar30 * fVar17) * fVar26 +
              (fVar31 * fVar26 + fVar19 * fVar27 + fVar2 * fVar17) * fVar27);
LAB_001028bf:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GodotSliderJoint3D::getAncorInA() */

undefined1  [16] __thiscall GodotSliderJoint3D::getAncorInA(GodotSliderJoint3D *this)

{
  long lVar1;
  long in_FS_OFFSET;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined8 local_48;
  float fStack_44;
  float local_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  float local_30;
  float local_2c;
  float local_28;
  undefined8 local_24;
  float local_1c;
  
  fVar2 = (*(float *)(this + 0xa8) + *(float *)(this + 0xac)) * __LC9;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  fVar3 = *(float *)(this + 0x2fc) * fVar2 + *(float *)(this + 0x308);
  fVar4 = *(float *)(this + 0x2f8) * fVar2 + *(float *)(this + 0x304);
  fVar2 = fVar2 * *(float *)(this + 0x2f4) + *(float *)(this + 0x300);
  Transform3D::inverse();
  auVar5._4_4_ = fStack_3c * fVar2 + local_38 * fVar4 + fStack_34 * fVar3 +
                 (float)((ulong)local_24 >> 0x20);
  auVar5._0_4_ = (float)local_48 * fVar2 + fStack_44 * fVar4 + local_40 * fVar3 + (float)local_24;
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar5._8_4_ = fVar2 * local_30 + fVar4 * local_2c + fVar3 * local_28 + local_1c;
    auVar5._12_4_ = 0;
    return auVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotSliderJoint3D::getAncorInB() */

undefined1  [16] __thiscall GodotSliderJoint3D::getAncorInB(GodotSliderJoint3D *this)

{
  long in_FS_OFFSET;
  undefined1 auVar1 [16];
  
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar1._12_4_ = 0;
    auVar1._0_12_ = *(undefined1 (*) [12])(this + 0x9c);
    return auVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotSliderJoint3D::set_param(PhysicsServer3D::SliderJointParam, float) */

void __thiscall
GodotSliderJoint3D::set_param(undefined4 param_1,GodotSliderJoint3D *this,undefined4 param_3)

{
  switch(param_3) {
  case 0:
    *(undefined4 *)(this + 0xac) = param_1;
    return;
  case 1:
    *(undefined4 *)(this + 0xa8) = param_1;
    return;
  case 2:
    *(undefined4 *)(this + 0xd0) = param_1;
    return;
  case 3:
    *(undefined4 *)(this + 0xd4) = param_1;
    return;
  case 4:
    *(undefined4 *)(this + 0xd8) = param_1;
    return;
  case 5:
    *(undefined4 *)(this + 0xb8) = param_1;
    return;
  case 6:
    *(undefined4 *)(this + 0xbc) = param_1;
    return;
  case 7:
    *(undefined4 *)(this + 0xc0) = param_1;
    return;
  case 8:
    *(undefined4 *)(this + 0xe8) = param_1;
    return;
  case 9:
    *(undefined4 *)(this + 0xec) = param_1;
    return;
  case 10:
    *(undefined4 *)(this + 0xf0) = param_1;
    return;
  case 0xb:
    *(undefined4 *)(this + 0xb4) = param_1;
    return;
  case 0xc:
    *(undefined4 *)(this + 0xb0) = param_1;
    return;
  case 0xd:
    *(undefined4 *)(this + 0xdc) = param_1;
    return;
  case 0xe:
    *(undefined4 *)(this + 0xe0) = param_1;
    return;
  case 0xf:
    *(undefined4 *)(this + 0xe4) = param_1;
    return;
  case 0x10:
    *(undefined4 *)(this + 0xc4) = param_1;
    return;
  case 0x11:
    *(undefined4 *)(this + 200) = param_1;
    return;
  case 0x12:
    *(undefined4 *)(this + 0xcc) = param_1;
    return;
  case 0x13:
    *(undefined4 *)(this + 0xf4) = param_1;
    return;
  case 0x14:
    *(undefined4 *)(this + 0xf8) = param_1;
    return;
  case 0x15:
    *(undefined4 *)(this + 0xfc) = param_1;
  }
  return;
}



/* GodotSliderJoint3D::get_param(PhysicsServer3D::SliderJointParam) const */

undefined4 __thiscall GodotSliderJoint3D::get_param(GodotSliderJoint3D *this,undefined4 param_2)

{
  switch(param_2) {
  case 0:
    return *(undefined4 *)(this + 0xac);
  case 1:
    return *(undefined4 *)(this + 0xa8);
  case 2:
    return *(undefined4 *)(this + 0xd0);
  case 3:
    return *(undefined4 *)(this + 0xd4);
  case 4:
    return *(undefined4 *)(this + 0xd8);
  case 5:
    return *(undefined4 *)(this + 0xb8);
  case 6:
    return *(undefined4 *)(this + 0xbc);
  case 7:
    return *(undefined4 *)(this + 0xc0);
  case 8:
    return *(undefined4 *)(this + 0xe8);
  case 9:
    return *(undefined4 *)(this + 0xec);
  case 10:
    return *(undefined4 *)(this + 0xf0);
  case 0xb:
    return *(undefined4 *)(this + 0xb4);
  case 0xc:
    return *(undefined4 *)(this + 0xb0);
  case 0xd:
    return *(undefined4 *)(this + 0xdc);
  case 0xe:
    return *(undefined4 *)(this + 0xe0);
  case 0xf:
    return *(undefined4 *)(this + 0xe4);
  case 0x10:
    return *(undefined4 *)(this + 0xc4);
  case 0x11:
    return *(undefined4 *)(this + 200);
  case 0x12:
    return *(undefined4 *)(this + 0xcc);
  case 0x13:
    return *(undefined4 *)(this + 0xf4);
  case 0x14:
    return *(undefined4 *)(this + 0xf8);
  case 0x15:
    return *(undefined4 *)(this + 0xfc);
  default:
    return 0;
  }
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GodotSliderJoint3D::GodotSliderJoint3D(GodotBody3D*, GodotBody3D*, Transform3D const&,
   Transform3D const&) */

void __thiscall
GodotSliderJoint3D::GodotSliderJoint3D
          (GodotSliderJoint3D *this,GodotBody3D *param_1,GodotBody3D *param_2,Transform3D *param_3,
          Transform3D *param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  uint uVar17;
  GodotSliderJoint3D *pGVar18;
  GodotSliderJoint3D *pGVar19;
  undefined4 *puVar20;
  long in_FS_OFFSET;
  GodotSliderJoint3D *local_28;
  long local_20;
  
  uVar16 = _UNK_001040f8;
  uVar14 = CONCAT44(_UNK_001040f4,_LC3);
  uVar2 = *(undefined8 *)param_3;
  uVar3 = *(undefined8 *)(param_3 + 8);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = *(undefined8 *)(param_3 + 0x10);
  uVar5 = *(undefined8 *)(param_3 + 0x18);
  uVar6 = *(undefined8 *)(param_3 + 0x20);
  uVar7 = *(undefined8 *)(param_3 + 0x28);
  *(GodotSliderJoint3D **)(this + 8) = this + 0x38;
  uVar8 = *(undefined8 *)param_4;
  uVar9 = *(undefined8 *)(param_4 + 8);
  uVar10 = *(undefined8 *)(param_4 + 0x10);
  uVar11 = *(undefined8 *)(param_4 + 0x18);
  uVar12 = *(undefined8 *)(param_4 + 0x20);
  uVar13 = *(undefined8 *)(param_4 + 0x28);
  *(undefined2 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0xa8) = uVar14;
  *(undefined8 *)(this + 0xb0) = uVar16;
  uVar16 = _UNK_00104108;
  uVar14 = __LC19;
  *(undefined ***)this = &PTR_get_soft_body_ptr_00103f20;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x10) = 2;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x20) = 1;
  this[0x24] = (GodotSliderJoint3D)0x1;
  *(undefined8 *)(this + 0x48) = uVar2;
  *(undefined8 *)(this + 0x50) = uVar3;
  *(undefined8 *)(this + 0x58) = uVar4;
  *(undefined8 *)(this + 0x60) = uVar5;
  *(undefined8 *)(this + 0x68) = uVar6;
  *(undefined8 *)(this + 0x70) = uVar7;
  *(undefined8 *)(this + 0x78) = uVar8;
  *(undefined8 *)(this + 0x80) = uVar9;
  *(undefined8 *)(this + 0x88) = uVar10;
  *(undefined8 *)(this + 0x90) = uVar11;
  *(undefined8 *)(this + 0x98) = uVar12;
  *(undefined8 *)(this + 0xa0) = uVar13;
  *(undefined8 *)(this + 0xb8) = uVar14;
  *(undefined8 *)(this + 0xc0) = uVar16;
  uVar4 = _LC23;
  uVar3 = _UNK_00104118;
  uVar2 = __LC20;
  *(undefined2 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 200) = uVar2;
  *(undefined8 *)(this + 0xd0) = uVar3;
  uVar3 = _LC23;
  uVar2 = __LC21;
  *(undefined8 *)(this + 0xf8) = uVar4;
  *(undefined8 *)(this + 0xd8) = uVar2;
  *(undefined8 *)(this + 0xe0) = uVar3;
  uVar2 = _UNK_00104138;
  *(undefined8 *)(this + 0xe8) = __LC22;
  *(undefined8 *)(this + 0xf0) = uVar2;
  uVar15 = _LC3;
  pGVar19 = this + 0x104;
  do {
    *(undefined8 *)pGVar19 = 0;
    pGVar18 = pGVar19 + 0x40;
    *(undefined4 *)(pGVar19 + 8) = 0;
    *(undefined8 *)(pGVar19 + 0xc) = 0;
    *(undefined4 *)(pGVar19 + 0x14) = 0;
    *(undefined8 *)(pGVar19 + 0x18) = 0;
    *(undefined4 *)(pGVar19 + 0x20) = 0;
    *(undefined8 *)(pGVar19 + 0x24) = 0;
    *(undefined4 *)(pGVar19 + 0x2c) = 0;
    *(undefined8 *)(pGVar19 + 0x30) = 0;
    *(undefined4 *)(pGVar19 + 0x38) = 0;
    *(undefined4 *)(pGVar19 + 0x3c) = uVar15;
    pGVar19 = pGVar18;
  } while (this + 0x1c4 != pGVar18);
  *(undefined8 *)(this + 0x1c4) = 0;
  *(undefined4 *)(this + 0x1cc) = 0;
  pGVar19 = this + 0x1d0;
  do {
    *(undefined8 *)pGVar19 = 0;
    pGVar18 = pGVar19 + 0x40;
    *(undefined4 *)(pGVar19 + 8) = 0;
    *(undefined8 *)(pGVar19 + 0xc) = 0;
    *(undefined4 *)(pGVar19 + 0x14) = 0;
    *(undefined8 *)(pGVar19 + 0x18) = 0;
    *(undefined4 *)(pGVar19 + 0x20) = 0;
    *(undefined8 *)(pGVar19 + 0x24) = 0;
    *(undefined4 *)(pGVar19 + 0x2c) = 0;
    *(undefined8 *)(pGVar19 + 0x30) = 0;
    *(undefined4 *)(pGVar19 + 0x38) = 0;
    *(undefined4 *)(pGVar19 + 0x3c) = uVar15;
    uVar3 = _UNK_00104148;
    uVar2 = _LC25;
    pGVar19 = pGVar18;
  } while (pGVar18 != this + 0x290);
  *(undefined4 *)(this + 0x2e4) = uVar15;
  *(undefined8 *)(this + 0x2b8) = 0;
  *(undefined8 *)(this + 0x290) = uVar2;
  *(undefined8 *)(this + 0x298) = uVar3;
  *(undefined8 *)(this + 0x2a0) = uVar2;
  *(undefined8 *)(this + 0x2a8) = uVar3;
  uVar17 = _LC26;
  *(undefined1 (*) [16])(this + 0x2c4) = ZEXT416(_LC26);
  *(undefined1 (*) [16])(this + 0x2d4) = ZEXT416(uVar17);
  *(undefined8 *)(this + 0x2b0) = uVar2;
  *(undefined4 *)(this + 0x2c0) = 0;
  *(undefined8 *)(this + 0x2e8) = 0;
  *(undefined4 *)(this + 0x2f0) = 0;
  *(undefined8 *)(this + 0x2f4) = 0;
  *(undefined4 *)(this + 0x2fc) = 0;
  *(undefined8 *)(this + 0x300) = 0;
  *(undefined4 *)(this + 0x308) = 0;
  *(undefined8 *)(this + 0x30c) = 0;
  *(undefined4 *)(this + 0x314) = 0;
  *(undefined8 *)(this + 0x318) = 0;
  *(undefined4 *)(this + 800) = 0;
  *(undefined8 *)(this + 0x324) = 0;
  *(undefined4 *)(this + 0x32c) = 0;
  *(undefined8 *)(this + 0x330) = 0;
  *(undefined4 *)(this + 0x338) = 0;
  *(undefined8 *)(this + 0x33c) = 0;
  *(undefined4 *)(this + 0x344) = 0;
  *(undefined8 *)(this + 0x348) = 0;
  *(undefined4 *)(this + 0x350) = 0;
  *(undefined8 *)(this + 0x354) = 0;
  *(undefined4 *)(this + 0x35c) = 0;
  this[0x360] = (GodotSliderJoint3D)0x0;
  *(undefined8 *)(this + 0x364) = 0;
  *(GodotBody3D **)(this + 0x38) = param_1;
  *(GodotBody3D **)(this + 0x40) = param_2;
  *(undefined4 *)(this + 0x36c) = 0;
  this[0x370] = (GodotSliderJoint3D)0x0;
  *(undefined8 *)(this + 0x374) = 0;
  *(undefined4 *)(this + 0x37c) = 0;
  local_28 = this;
  puVar20 = (undefined4 *)
            HashMap<GodotConstraint3D*,int,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint3D*>,DefaultTypedAllocator<HashMapElement<GodotConstraint3D*,int>>>
            ::operator[]((HashMap<GodotConstraint3D*,int,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint3D*>,DefaultTypedAllocator<HashMapElement<GodotConstraint3D*,int>>>
                          *)(param_1 + 0x2f0),(GodotConstraint3D **)&local_28);
  lVar1 = *(long *)(this + 0x40);
  *puVar20 = 0;
  local_28 = this;
  puVar20 = (undefined4 *)
            HashMap<GodotConstraint3D*,int,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint3D*>,DefaultTypedAllocator<HashMapElement<GodotConstraint3D*,int>>>
            ::operator[]((HashMap<GodotConstraint3D*,int,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint3D*>,DefaultTypedAllocator<HashMapElement<GodotConstraint3D*,int>>>
                          *)(lVar1 + 0x2f0),(GodotConstraint3D **)&local_28);
  *puVar20 = 1;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotConstraint3D::get_soft_body_ptr(int) const */

undefined8 GodotConstraint3D::get_soft_body_ptr(int param_1)

{
  return 0;
}



/* GodotConstraint3D::get_soft_body_count() const */

undefined8 GodotConstraint3D::get_soft_body_count(void)

{
  return 0;
}



/* GodotJoint3D::setup(float) */

undefined8 GodotJoint3D::setup(float param_1)

{
  return 0;
}



/* GodotJoint3D::pre_solve(float) */

undefined8 GodotJoint3D::pre_solve(float param_1)

{
  return 1;
}



/* GodotJoint3D::solve(float) */

void GodotJoint3D::solve(float param_1)

{
  return;
}



/* GodotJoint3D::get_type() const */

undefined8 GodotJoint3D::get_type(void)

{
  return 5;
}



/* GodotSliderJoint3D::get_type() const */

undefined8 GodotSliderJoint3D::get_type(void)

{
  return 2;
}



/* GodotJoint3D::~GodotJoint3D() */

void __thiscall GodotJoint3D::~GodotJoint3D(GodotJoint3D *this)

{
  long lVar1;
  long lVar2;
  long in_FS_OFFSET;
  GodotJoint3D *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR_get_soft_body_ptr_00103ed0;
  if (0 < *(int *)(this + 0x10)) {
    lVar2 = 0;
    do {
      lVar1 = *(long *)(*(long *)(this + 8) + lVar2 * 8);
      if (lVar1 != 0) {
        local_28 = this;
        HashMap<GodotConstraint3D*,int,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint3D*>,DefaultTypedAllocator<HashMapElement<GodotConstraint3D*,int>>>
        ::erase((HashMap<GodotConstraint3D*,int,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint3D*>,DefaultTypedAllocator<HashMapElement<GodotConstraint3D*,int>>>
                 *)(lVar1 + 0x2f0),(GodotConstraint3D **)&local_28);
      }
      lVar2 = lVar2 + 1;
    } while ((int)lVar2 < *(int *)(this + 0x10));
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotSliderJoint3D::~GodotSliderJoint3D() */

void __thiscall GodotSliderJoint3D::~GodotSliderJoint3D(GodotSliderJoint3D *this)

{
  long lVar1;
  long lVar2;
  long in_FS_OFFSET;
  GodotSliderJoint3D *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR_get_soft_body_ptr_00103ed0;
  if (0 < *(int *)(this + 0x10)) {
    lVar2 = 0;
    do {
      lVar1 = *(long *)(*(long *)(this + 8) + lVar2 * 8);
      if (lVar1 != 0) {
        local_28 = this;
        HashMap<GodotConstraint3D*,int,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint3D*>,DefaultTypedAllocator<HashMapElement<GodotConstraint3D*,int>>>
        ::erase((HashMap<GodotConstraint3D*,int,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint3D*>,DefaultTypedAllocator<HashMapElement<GodotConstraint3D*,int>>>
                 *)(lVar1 + 0x2f0),(GodotConstraint3D **)&local_28);
      }
      lVar2 = lVar2 + 1;
    } while ((int)lVar2 < *(int *)(this + 0x10));
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotJoint3D::~GodotJoint3D() */

void __thiscall GodotJoint3D::~GodotJoint3D(GodotJoint3D *this)

{
  long lVar1;
  long lVar2;
  long in_FS_OFFSET;
  GodotJoint3D *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR_get_soft_body_ptr_00103ed0;
  if (0 < *(int *)(this + 0x10)) {
    lVar2 = 0;
    do {
      lVar1 = *(long *)(*(long *)(this + 8) + lVar2 * 8);
      if (lVar1 != 0) {
        local_28 = this;
        HashMap<GodotConstraint3D*,int,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint3D*>,DefaultTypedAllocator<HashMapElement<GodotConstraint3D*,int>>>
        ::erase((HashMap<GodotConstraint3D*,int,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint3D*>,DefaultTypedAllocator<HashMapElement<GodotConstraint3D*,int>>>
                 *)(lVar1 + 0x2f0),(GodotConstraint3D **)&local_28);
      }
      lVar2 = lVar2 + 1;
    } while ((int)lVar2 < *(int *)(this + 0x10));
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    operator_delete(this,0x38);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotSliderJoint3D::~GodotSliderJoint3D() */

void __thiscall GodotSliderJoint3D::~GodotSliderJoint3D(GodotSliderJoint3D *this)

{
  long lVar1;
  long lVar2;
  long in_FS_OFFSET;
  GodotSliderJoint3D *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR_get_soft_body_ptr_00103ed0;
  if (0 < *(int *)(this + 0x10)) {
    lVar2 = 0;
    do {
      lVar1 = *(long *)(*(long *)(this + 8) + lVar2 * 8);
      if (lVar1 != 0) {
        local_28 = this;
        HashMap<GodotConstraint3D*,int,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint3D*>,DefaultTypedAllocator<HashMapElement<GodotConstraint3D*,int>>>
        ::erase((HashMap<GodotConstraint3D*,int,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint3D*>,DefaultTypedAllocator<HashMapElement<GodotConstraint3D*,int>>>
                 *)(lVar1 + 0x2f0),(GodotConstraint3D **)&local_28);
      }
      lVar2 = lVar2 + 1;
    } while ((int)lVar2 < *(int *)(this + 0x10));
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    operator_delete(this,0x380);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotSliderJoint3D::get_param(PhysicsServer3D::SliderJointParam) const [clone .cold] */

undefined8 GodotSliderJoint3D::get_param(void)

{
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<GodotConstraint3D*, int, HashMapHasherDefault,
   HashMapComparatorDefault<GodotConstraint3D*>,
   DefaultTypedAllocator<HashMapElement<GodotConstraint3D*, int> > >::operator[](GodotConstraint3D*
   const&) */

undefined1  [16] __thiscall
HashMap<GodotConstraint3D*,int,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint3D*>,DefaultTypedAllocator<HashMapElement<GodotConstraint3D*,int>>>
::operator[](HashMap<GodotConstraint3D*,int,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint3D*>,DefaultTypedAllocator<HashMapElement<GodotConstraint3D*,int>>>
             *this,GodotConstraint3D **param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  long lVar3;
  void *pvVar4;
  void *__s;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 (*pauVar37) [16];
  uint uVar38;
  ulong uVar39;
  ulong uVar40;
  undefined8 uVar41;
  void *__s_00;
  undefined1 (*pauVar42) [16];
  int iVar43;
  uint uVar44;
  long lVar45;
  long lVar46;
  uint uVar47;
  undefined8 uVar48;
  uint uVar49;
  uint uVar50;
  ulong uVar51;
  long lVar52;
  uint uVar53;
  ulong uVar54;
  ulong uVar55;
  GodotConstraint3D *pGVar56;
  undefined1 (*pauVar57) [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  long lStack_90;
  void *local_70;
  
  local_70 = *(void **)(this + 8);
  uVar40 = (ulong)*(uint *)(this + 0x28);
  pGVar56 = *param_1;
  uVar47 = *(uint *)(hash_table_size_primes + uVar40 * 4);
  uVar55 = CONCAT44(0,uVar47);
  if (local_70 == (void *)0x0) {
    uVar40 = uVar55 * 4;
    uVar39 = uVar55 * 8;
    uVar41 = Memory::alloc_static(uVar40,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    lStack_90 = 0x103cf2;
    local_70 = (void *)Memory::alloc_static(uVar39,false);
    *(void **)(this + 8) = local_70;
    if (uVar47 == 0) {
      iVar43 = *(int *)(this + 0x2c);
      pGVar56 = *param_1;
      if (local_70 == (void *)0x0) goto LAB_0010381b;
    }
    else {
      pvVar4 = *(void **)(this + 0x10);
      if ((pvVar4 < (void *)((long)local_70 + uVar39)) &&
         (local_70 < (void *)((long)pvVar4 + uVar40))) {
        uVar40 = 0;
        do {
          *(undefined4 *)((long)pvVar4 + uVar40 * 4) = 0;
          *(undefined8 *)((long)local_70 + uVar40 * 8) = 0;
          uVar40 = uVar40 + 1;
        } while (uVar55 != uVar40);
        iVar43 = *(int *)(this + 0x2c);
        pGVar56 = *param_1;
      }
      else {
        memset(pvVar4,0,uVar40);
        lStack_90 = 0x103d3a;
        memset(local_70,0,uVar39);
        iVar43 = *(int *)(this + 0x2c);
        pGVar56 = *param_1;
      }
    }
    if (iVar43 != 0) {
      uVar40 = (ulong)*(uint *)(this + 0x28);
      lVar52 = *(long *)(this + 0x10);
      goto LAB_00103bc3;
    }
  }
  else {
    iVar43 = *(int *)(this + 0x2c);
    if (iVar43 != 0) {
      lVar52 = *(long *)(this + 0x10);
      lVar3 = *(long *)(hash_table_size_primes_inv + uVar40 * 8);
      uVar39 = (long)pGVar56 * 0x3ffff - 1;
      uVar39 = (uVar39 ^ uVar39 >> 0x1f) * 0x15;
      uVar39 = (uVar39 ^ uVar39 >> 0xb) * 0x41;
      uVar39 = uVar39 >> 0x16 ^ uVar39;
      uVar54 = uVar39 & 0xffffffff;
      if ((int)uVar39 == 0) {
        uVar54 = 1;
      }
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar54 * lVar3;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar55;
      lVar45 = SUB168(auVar5 * auVar21,8);
      uVar44 = *(uint *)(lVar52 + lVar45 * 4);
      uVar53 = SUB164(auVar5 * auVar21,8);
      if (uVar44 != 0) {
        uVar50 = 0;
        lVar46 = lVar45;
        do {
          if (((uint)uVar54 == uVar44) &&
             (pGVar56 == *(GodotConstraint3D **)(*(long *)((long)local_70 + lVar45 * 8) + 0x10))) {
            auVar58._0_8_ = *(long *)((long)local_70 + (ulong)uVar53 * 8) + 0x18;
            auVar58._8_8_ = lVar46;
            return auVar58;
          }
          uVar50 = uVar50 + 1;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (ulong)(uVar53 + 1) * lVar3;
          auVar22._8_8_ = 0;
          auVar22._0_8_ = uVar55;
          lVar45 = SUB168(auVar6 * auVar22,8);
          uVar44 = *(uint *)(lVar52 + lVar45 * 4);
          uVar53 = SUB164(auVar6 * auVar22,8);
        } while ((uVar44 != 0) &&
                (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar44 * lVar3, auVar23._8_8_ = 0,
                auVar23._0_8_ = uVar55, auVar8._8_8_ = 0,
                auVar8._0_8_ = (ulong)((uVar53 + uVar47) - SUB164(auVar7 * auVar23,8)) * lVar3,
                auVar24._8_8_ = 0, auVar24._0_8_ = uVar55, lVar46 = SUB168(auVar8 * auVar24,8),
                uVar50 <= SUB164(auVar8 * auVar24,8)));
      }
LAB_00103bc3:
      uVar51 = CONCAT44(0,*(uint *)(hash_table_size_primes + uVar40 * 4));
      lVar3 = *(long *)(hash_table_size_primes_inv + uVar40 * 8);
      uVar39 = (long)pGVar56 * 0x3ffff - 1;
      uVar39 = (uVar39 ^ uVar39 >> 0x1f) * 0x15;
      uVar39 = (uVar39 ^ uVar39 >> 0xb) * 0x41;
      uVar39 = uVar39 >> 0x16 ^ uVar39;
      uVar54 = uVar39 & 0xffffffff;
      if ((int)uVar39 == 0) {
        uVar54 = 1;
      }
      auVar17._8_8_ = 0;
      auVar17._0_8_ = uVar54 * lVar3;
      auVar33._8_8_ = 0;
      auVar33._0_8_ = uVar51;
      lVar45 = SUB168(auVar17 * auVar33,8);
      uVar47 = *(uint *)(lVar52 + lVar45 * 4);
      uVar44 = SUB164(auVar17 * auVar33,8);
      if (uVar47 != 0) {
        uVar53 = 0;
        lVar46 = lVar45;
        do {
          if (((uint)uVar54 == uVar47) &&
             (*(GodotConstraint3D **)(*(long *)((long)local_70 + lVar45 * 8) + 0x10) == pGVar56)) {
            pauVar42 = *(undefined1 (**) [16])((long)local_70 + (ulong)uVar44 * 8);
            *(undefined4 *)(pauVar42[1] + 8) = 0;
            lStack_90 = lVar46;
            goto LAB_00103ba4;
          }
          uVar53 = uVar53 + 1;
          auVar18._8_8_ = 0;
          auVar18._0_8_ = (ulong)(uVar44 + 1) * lVar3;
          auVar34._8_8_ = 0;
          auVar34._0_8_ = uVar51;
          lVar45 = SUB168(auVar18 * auVar34,8);
          uVar47 = *(uint *)(lVar52 + lVar45 * 4);
          uVar44 = SUB164(auVar18 * auVar34,8);
        } while ((uVar47 != 0) &&
                (auVar19._8_8_ = 0, auVar19._0_8_ = (ulong)uVar47 * lVar3, auVar35._8_8_ = 0,
                auVar35._0_8_ = uVar51, auVar20._8_8_ = 0,
                auVar20._0_8_ =
                     (ulong)((*(uint *)(hash_table_size_primes + uVar40 * 4) + uVar44) -
                            SUB164(auVar19 * auVar35,8)) * lVar3, auVar36._8_8_ = 0,
                auVar36._0_8_ = uVar51, lVar46 = SUB168(auVar20 * auVar36,8),
                uVar53 <= SUB164(auVar20 * auVar36,8)));
      }
    }
  }
LAB_0010381b:
  if ((float)uVar55 * __LC11 < (float)(iVar43 + 1)) {
    uVar47 = *(uint *)(this + 0x28);
    if (uVar47 == 0x1c) {
      pauVar42 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_00103ba4;
    }
    uVar40 = (ulong)(uVar47 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar44 = *(uint *)(hash_table_size_primes + (ulong)uVar47 * 4);
    if (uVar47 + 1 < 2) {
      uVar40 = 2;
    }
    uVar47 = *(uint *)(hash_table_size_primes + uVar40 * 4);
    uVar39 = (ulong)uVar47;
    *(int *)(this + 0x28) = (int)uVar40;
    pvVar4 = *(void **)(this + 0x10);
    uVar40 = uVar39 * 4;
    uVar55 = uVar39 * 8;
    uVar41 = Memory::alloc_static(uVar40,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    __s_00 = (void *)Memory::alloc_static(uVar55,false);
    *(void **)(this + 8) = __s_00;
    if (uVar47 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar55)) && (__s_00 < (void *)((long)__s + uVar40))) {
        uVar40 = 0;
        do {
          *(undefined4 *)((long)__s + uVar40 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar40 * 8) = 0;
          uVar40 = uVar40 + 1;
        } while (uVar39 != uVar40);
      }
      else {
        memset(__s,0,uVar40);
        memset(__s_00,0,uVar55);
      }
    }
    if (uVar44 != 0) {
      uVar40 = 0;
      do {
        uVar47 = *(uint *)((long)pvVar4 + uVar40 * 4);
        if (uVar47 != 0) {
          lVar52 = *(long *)(this + 0x10);
          uVar49 = 0;
          uVar53 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar55 = CONCAT44(0,uVar53);
          lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar9._8_8_ = 0;
          auVar9._0_8_ = (ulong)uVar47 * lVar3;
          auVar25._8_8_ = 0;
          auVar25._0_8_ = uVar55;
          lVar45 = SUB168(auVar9 * auVar25,8);
          puVar1 = (uint *)(lVar52 + lVar45 * 4);
          iVar43 = SUB164(auVar9 * auVar25,8);
          uVar50 = *puVar1;
          uVar41 = *(undefined8 *)((long)local_70 + uVar40 * 8);
          while (uVar50 != 0) {
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)uVar50 * lVar3;
            auVar26._8_8_ = 0;
            auVar26._0_8_ = uVar55;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = (ulong)((uVar53 + iVar43) - SUB164(auVar10 * auVar26,8)) * lVar3;
            auVar27._8_8_ = 0;
            auVar27._0_8_ = uVar55;
            uVar38 = SUB164(auVar11 * auVar27,8);
            uVar48 = uVar41;
            if (uVar38 < uVar49) {
              *puVar1 = uVar47;
              puVar2 = (undefined8 *)((long)__s_00 + lVar45 * 8);
              uVar48 = *puVar2;
              *puVar2 = uVar41;
              uVar47 = uVar50;
              uVar49 = uVar38;
            }
            uVar49 = uVar49 + 1;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = (ulong)(iVar43 + 1) * lVar3;
            auVar28._8_8_ = 0;
            auVar28._0_8_ = uVar55;
            lVar45 = SUB168(auVar12 * auVar28,8);
            puVar1 = (uint *)(lVar52 + lVar45 * 4);
            iVar43 = SUB164(auVar12 * auVar28,8);
            uVar41 = uVar48;
            uVar50 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar45 * 8) = uVar41;
          *puVar1 = uVar47;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar40 = uVar40 + 1;
      } while (uVar40 != uVar44);
      Memory::free_static(local_70,false);
      Memory::free_static(pvVar4,false);
    }
  }
  pGVar56 = *param_1;
  pauVar42 = (undefined1 (*) [16])operator_new(0x20,"");
  *(GodotConstraint3D **)pauVar42[1] = pGVar56;
  *(undefined4 *)(pauVar42[1] + 8) = 0;
  *pauVar42 = (undefined1  [16])0x0;
  puVar2 = *(undefined8 **)(this + 0x20);
  if (puVar2 == (undefined8 *)0x0) {
    *(undefined1 (**) [16])(this + 0x18) = pauVar42;
  }
  else {
    *puVar2 = pauVar42;
    *(undefined8 **)(*pauVar42 + 8) = puVar2;
  }
  lVar52 = *(long *)(this + 0x10);
  *(undefined1 (**) [16])(this + 0x20) = pauVar42;
  uVar40 = (long)*param_1 * 0x3ffff - 1;
  uVar40 = (uVar40 ^ uVar40 >> 0x1f) * 0x15;
  uVar40 = (uVar40 ^ uVar40 >> 0xb) * 0x41;
  uVar40 = uVar40 >> 0x16 ^ uVar40;
  uVar55 = uVar40 & 0xffffffff;
  if ((int)uVar40 == 0) {
    uVar55 = 1;
  }
  uVar50 = 0;
  lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar53 = (uint)uVar55;
  uVar47 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar40 = CONCAT44(0,uVar47);
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar55 * lVar3;
  auVar29._8_8_ = 0;
  auVar29._0_8_ = uVar40;
  lStack_90 = SUB168(auVar13 * auVar29,8);
  lVar45 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar52 + lStack_90 * 4);
  iVar43 = SUB164(auVar13 * auVar29,8);
  uVar44 = *puVar1;
  pauVar37 = pauVar42;
  while (uVar44 != 0) {
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)uVar44 * lVar3;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar40;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)((uVar47 + iVar43) - SUB164(auVar14 * auVar30,8)) * lVar3;
    auVar31._8_8_ = 0;
    auVar31._0_8_ = uVar40;
    uVar53 = SUB164(auVar15 * auVar31,8);
    pauVar57 = pauVar37;
    if (uVar53 < uVar50) {
      *puVar1 = (uint)uVar55;
      uVar55 = (ulong)uVar44;
      puVar2 = (undefined8 *)(lVar45 + lStack_90 * 8);
      pauVar57 = (undefined1 (*) [16])*puVar2;
      *puVar2 = pauVar37;
      uVar50 = uVar53;
    }
    uVar53 = (uint)uVar55;
    uVar50 = uVar50 + 1;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = (ulong)(iVar43 + 1) * lVar3;
    auVar32._8_8_ = 0;
    auVar32._0_8_ = uVar40;
    lStack_90 = SUB168(auVar16 * auVar32,8);
    puVar1 = (uint *)(lVar52 + lStack_90 * 4);
    iVar43 = SUB164(auVar16 * auVar32,8);
    pauVar37 = pauVar57;
    uVar44 = *puVar1;
  }
  *(undefined1 (**) [16])(lVar45 + lStack_90 * 8) = pauVar37;
  *puVar1 = uVar53;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_00103ba4:
  auVar59._8_8_ = lStack_90;
  auVar59._0_8_ = pauVar42[1] + 8;
  return auVar59;
}



/* WARNING: Control flow encountered bad instruction data */
/* GodotSliderJoint3D::~GodotSliderJoint3D() */

void __thiscall GodotSliderJoint3D::~GodotSliderJoint3D(GodotSliderJoint3D *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* GodotJoint3D::~GodotJoint3D() */

void __thiscall GodotJoint3D::~GodotJoint3D(GodotJoint3D *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


