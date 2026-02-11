
/* GodotGeneric6DOFJoint3D::calcAnchorPos() */

void __thiscall GodotGeneric6DOFJoint3D::calcAnchorPos(GodotGeneric6DOFJoint3D *this)

{
  float fVar1;
  float fVar2;
  
  if (*(float *)(*(long *)(this + 0x40) + 0x170) == 0.0) {
    fVar1 = 0.0;
    fVar2 = _LC1;
  }
  else {
    fVar2 = *(float *)(*(long *)(this + 0x38) + 0x170) /
            (*(float *)(*(long *)(this + 0x40) + 0x170) + *(float *)(*(long *)(this + 0x38) + 0x170)
            );
    fVar1 = _LC1 - fVar2;
  }
  *(float *)(this + 0x3ac) = *(float *)(this + 0x340) * fVar2 + *(float *)(this + 0x370) * fVar1;
  *(ulong *)(this + 0x3a4) =
       CONCAT44(fVar1 * (float)((ulong)*(undefined8 *)(this + 0x368) >> 0x20) +
                fVar2 * (float)((ulong)*(undefined8 *)(this + 0x338) >> 0x20),
                fVar1 * (float)*(undefined8 *)(this + 0x368) +
                fVar2 * (float)*(undefined8 *)(this + 0x338));
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
            if (*(long **)(this + 0x20) != plVar34) goto LAB_00100289;
          }
          else if (*(long **)(this + 0x20) != plVar34) {
LAB_00100289:
            plVar10 = (long *)plVar34[1];
            goto joined_r0x00100290;
          }
          *(long *)(this + 0x20) = plVar34[1];
          plVar34 = (long *)*plVar4;
          plVar10 = (long *)plVar34[1];
joined_r0x00100290:
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



/* GodotG6DOFRotationalLimitMotor3D::testLimitValue(float) */

undefined8 __thiscall
GodotG6DOFRotationalLimitMotor3D::testLimitValue
          (GodotG6DOFRotationalLimitMotor3D *this,float param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)this;
  fVar2 = *(float *)(this + 4);
  if (fVar1 <= fVar2) {
    if (param_1 < fVar1) {
      *(undefined4 *)(this + 0x2c) = 1;
      *(float *)(this + 0x28) = param_1 - fVar1;
      return 1;
    }
    if (fVar2 < param_1) {
      *(undefined4 *)(this + 0x2c) = 2;
      *(float *)(this + 0x28) = param_1 - fVar2;
      return 2;
    }
  }
  *(undefined4 *)(this + 0x2c) = 0;
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GodotG6DOFRotationalLimitMotor3D::solveAngularLimits(float, Vector3&, float, GodotBody3D*,
   GodotBody3D*, bool, bool) */

undefined8 __thiscall
GodotG6DOFRotationalLimitMotor3D::solveAngularLimits
          (GodotG6DOFRotationalLimitMotor3D *this,float param_1,Vector3 *param_2,float param_3,
          GodotBody3D *param_4,GodotBody3D *param_5,bool param_6,bool param_7)

{
  long lVar1;
  long in_FS_OFFSET;
  float fVar2;
  undefined8 uVar3;
  undefined1 auVar6 [12];
  undefined1 auVar5 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_28;
  float fStack_24;
  float local_1c;
  float fStack_18;
  undefined1 auVar4 [16];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (this[0x24] == (GodotG6DOFRotationalLimitMotor3D)0x0) {
    if (*(int *)(this + 0x2c) != 0) {
LAB_001006a0:
      fVar2 = *(float *)(this + 0x10);
      fVar7 = ((float)(*(uint *)(this + 0x1c) ^ _LC2) * *(float *)(this + 0x28)) / param_1;
      goto LAB_0010040a;
    }
  }
  else {
    if (*(int *)(this + 0x2c) != 0) goto LAB_001006a0;
    fVar7 = *(float *)(this + 8);
    fVar2 = *(float *)(this + 0xc);
LAB_0010040a:
    fVar11 = *(float *)(param_4 + 0xec);
    local_28 = (float)*(undefined8 *)(param_4 + 0xe4);
    fStack_24 = (float)((ulong)*(undefined8 *)(param_4 + 0xe4) >> 0x20);
    if (param_5 != (GodotBody3D *)0x0) {
      local_1c = (float)*(undefined8 *)(param_5 + 0xe4);
      local_28 = local_28 - local_1c;
      fStack_18 = (float)((ulong)*(undefined8 *)(param_5 + 0xe4) >> 0x20);
      fStack_24 = fStack_24 - fStack_18;
      fVar11 = fVar11 - *(float *)(param_5 + 0xec);
    }
    fVar9 = *(float *)param_2;
    fVar10 = *(float *)(param_2 + 4);
    fVar8 = *(float *)(param_2 + 8);
    fVar7 = (fVar7 - (local_28 * fVar9 + fStack_24 * fVar10 + fVar11 * fVar8) *
                     *(float *)(this + 0x14)) * *(float *)(this + 0x18);
    if (_LC3 <= ABS(fVar7)) {
      fVar2 = fVar2 * param_1;
      auVar4 = ZEXT416((uint)fVar2);
      fVar7 = param_3 * fVar7 * (_LC1 + *(float *)(this + 0x20));
      if (fVar7 <= 0.0) {
        auVar4._0_4_ = (float)((uint)fVar2 ^ _LC2);
        auVar4._4_4_ = _UNK_001034c4;
        auVar4._8_4_ = _UNK_001034c8;
        auVar4._12_4_ = _UNK_001034cc;
        if (auVar4._0_4_ <= fVar7) {
          auVar4._0_4_ = fVar7;
        }
      }
      else if (fVar7 <= fVar2) {
        auVar4 = ZEXT416((uint)fVar7);
      }
      fVar7 = *(float *)(this + 0x30);
      auVar6 = auVar4._4_12_;
      fVar2 = auVar4._0_4_ + fVar7;
      if ((_LC4 < fVar2) || (fVar2 < _LC27)) {
        fVar2 = 0.0;
        auVar6 = (undefined1  [12])0x0;
      }
      *(float *)(this + 0x30) = fVar2;
      auVar5._0_4_ = fVar2 - fVar7;
      auVar5._4_12_ = auVar6;
      uVar3 = auVar5._0_8_;
      fVar8 = fVar8 * auVar5._0_4_;
      fVar10 = fVar10 * auVar5._0_4_;
      fVar9 = fVar9 * auVar5._0_4_;
      if (param_6) {
        *(float *)(param_4 + 0xec) =
             *(float *)(param_4 + 0x1d0) * fVar8 +
             *(float *)(param_4 + 0x1c8) * fVar9 + *(float *)(param_4 + 0x1cc) * fVar10 +
             *(float *)(param_4 + 0xec);
        *(ulong *)(param_4 + 0xe4) =
             CONCAT44((float)((ulong)*(undefined8 *)(param_4 + 0x1bc) >> 0x20) * fVar10 +
                      *(float *)(param_4 + 0x1bc) * fVar9 + *(float *)(param_4 + 0x1c4) * fVar8 +
                      (float)((ulong)*(undefined8 *)(param_4 + 0xe4) >> 0x20),
                      (float)*(undefined8 *)(param_4 + 0x1b4) * fVar10 +
                      *(float *)(param_4 + 0x1b0) * fVar9 + *(float *)(param_4 + 0x1b8) * fVar8 +
                      (float)*(undefined8 *)(param_4 + 0xe4));
      }
      if ((param_5 != (GodotBody3D *)0x0) && (param_7)) {
        fVar8 = (float)((uint)fVar8 ^ _LC2);
        fVar10 = (float)((uint)fVar10 ^ _LC2);
        fVar9 = (float)((uint)fVar9 ^ _LC2);
        *(float *)(param_5 + 0xec) =
             *(float *)(param_5 + 0x1d0) * fVar8 +
             *(float *)(param_5 + 0x1c8) * fVar9 + *(float *)(param_5 + 0x1cc) * fVar10 +
             *(float *)(param_5 + 0xec);
        *(ulong *)(param_5 + 0xe4) =
             CONCAT44((float)((ulong)*(undefined8 *)(param_5 + 0x1bc) >> 0x20) * fVar10 +
                      *(float *)(param_5 + 0x1bc) * fVar9 + *(float *)(param_5 + 0x1c4) * fVar8 +
                      (float)((ulong)*(undefined8 *)(param_5 + 0xe4) >> 0x20),
                      (float)*(undefined8 *)(param_5 + 0x1b4) * fVar10 +
                      *(float *)(param_5 + 0x1b0) * fVar9 + *(float *)(param_5 + 0x1b8) * fVar8 +
                      (float)*(undefined8 *)(param_5 + 0xe4));
      }
      goto LAB_001003da;
    }
  }
  uVar3 = 0;
LAB_001003da:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



/* GodotG6DOFTranslationalLimitMotor3D::solveLinearAxis(float, float, GodotBody3D*, Vector3 const&,
   GodotBody3D*, Vector3 const&, bool, bool, int, Vector3 const&, Vector3 const&) */

undefined8 __thiscall
GodotG6DOFTranslationalLimitMotor3D::solveLinearAxis
          (GodotG6DOFTranslationalLimitMotor3D *this,float param_1,float param_2,
          GodotBody3D *param_3,Vector3 *param_4,GodotBody3D *param_5,Vector3 *param_6,bool param_7,
          bool param_8,int param_9,Vector3 *param_10,Vector3 *param_11)

{
  GodotG6DOFTranslationalLimitMotor3D *pGVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [12];
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
  
  uVar2 = _LC2;
  fVar16 = *(float *)(param_11 + 8) - *(float *)(param_3 + 0x74);
  fVar17 = *(float *)(param_11 + 4) - *(float *)(param_3 + 0x70);
  fVar20 = *(float *)(param_11 + 8) - *(float *)(param_5 + 0x74);
  fVar9 = *(float *)(param_11 + 4) - *(float *)(param_5 + 0x70);
  fVar18 = *(float *)param_11 - *(float *)(param_3 + 0x6c);
  fVar19 = *(float *)param_11 - *(float *)(param_5 + 0x6c);
  fVar21 = fVar16 - *(float *)(param_3 + 0x200);
  fVar3 = fVar17 - *(float *)(param_3 + 0x1fc);
  fVar15 = fVar20 - *(float *)(param_5 + 0x200);
  fVar10 = fVar9 - *(float *)(param_5 + 0x1fc);
  fVar11 = fVar19 - *(float *)(param_5 + 0x1f8);
  fVar14 = fVar18 - *(float *)(param_3 + 0x1f8);
  pGVar1 = this + (long)param_9 * 4;
  fVar8 = *(float *)pGVar1;
  fVar5 = *(float *)(pGVar1 + 0xc);
  fVar4 = (float)((uint)((*(float *)(param_4 + 4) - *(float *)(param_6 + 4)) *
                         *(float *)(param_10 + 4) +
                         (*(float *)param_4 - *(float *)param_6) * *(float *)param_10 +
                        (*(float *)(param_4 + 8) - *(float *)(param_6 + 8)) *
                        *(float *)(param_10 + 8)) ^ _LC2);
  auVar6 = ZEXT416((uint)fVar4);
  fVar13 = _LC4;
  fVar12 = _LC27;
  if (fVar8 < fVar5) {
    if (fVar4 <= fVar5) {
      if (fVar8 <= fVar4) {
        return 0;
      }
      auVar6 = ZEXT416((uint)(fVar4 - fVar8));
      fVar13 = 0.0;
    }
    else {
      auVar6 = ZEXT416((uint)(fVar4 - fVar5));
      fVar12 = 0.0;
    }
  }
  fVar8 = *(float *)(pGVar1 + 0x18);
  auVar7 = auVar6._4_12_;
  fVar5 = ((auVar6._0_4_ * *(float *)(pGVar1 + 0x3c)) / param_1 -
          ((((fVar3 * *(float *)(param_3 + 0xe4) - fVar14 * *(float *)(param_3 + 0xe8)) +
            *(float *)(param_3 + 0xe0)) -
           ((fVar10 * *(float *)(param_5 + 0xe4) - fVar11 * *(float *)(param_5 + 0xe8)) +
           *(float *)(param_5 + 0xe0))) * *(float *)(param_10 + 8) +
          (((*(float *)(param_3 + 0xec) * fVar14 - fVar21 * *(float *)(param_3 + 0xe4)) +
           *(float *)(param_3 + 0xdc)) -
          ((*(float *)(param_5 + 0xec) * fVar11 - fVar15 * *(float *)(param_5 + 0xe4)) +
          *(float *)(param_5 + 0xdc))) * *(float *)(param_10 + 4) +
          (((*(float *)(param_3 + 0xe8) * fVar21 - *(float *)(param_3 + 0xec) * fVar3) +
           *(float *)(param_3 + 0xd8)) -
          ((*(float *)(param_5 + 0xe8) * fVar15 - *(float *)(param_5 + 0xec) * fVar10) +
          *(float *)(param_5 + 0xd8))) * *(float *)param_10) * *(float *)(pGVar1 + 0x30)) *
          *(float *)(pGVar1 + 0x24) * param_2 + fVar8;
  if ((fVar13 < fVar5) || (fVar5 < fVar12)) {
    fVar5 = 0.0;
    auVar7 = (undefined1  [12])0x0;
  }
  *(float *)(pGVar1 + 0x18) = fVar5;
  auVar6._0_4_ = fVar5 - fVar8;
  auVar6._4_12_ = auVar7;
  fVar13 = *(float *)(param_10 + 8) * auVar6._0_4_;
  fVar5 = *(float *)(param_10 + 4) * auVar6._0_4_;
  fVar8 = *(float *)param_10 * auVar6._0_4_;
  if (param_7) {
    fVar17 = fVar17 - *(float *)(param_3 + 0x1fc);
    fVar18 = fVar18 - *(float *)(param_3 + 0x1f8);
    fVar16 = fVar16 - *(float *)(param_3 + 0x200);
    fVar12 = *(float *)(param_3 + 0x170);
    fVar4 = fVar5 * fVar18 - fVar8 * fVar17;
    fVar10 = fVar8 * fVar16 - fVar18 * fVar13;
    fVar3 = fVar17 * fVar13 - fVar16 * fVar5;
    *(ulong *)(param_3 + 0xd8) =
         CONCAT44(fVar5 * fVar12 + *(float *)(param_3 + 0xdc),
                  fVar8 * fVar12 + *(float *)(param_3 + 0xd8));
    *(ulong *)(param_3 + 0xe0) =
         CONCAT44(fVar3 * *(float *)(param_3 + 0x1b0) + fVar10 * *(float *)(param_3 + 0x1b4) +
                  fVar4 * *(float *)(param_3 + 0x1b8) + *(float *)(param_3 + 0xe4),
                  fVar12 * fVar13 + *(float *)(param_3 + 0xe0));
    *(ulong *)(param_3 + 0xe8) =
         CONCAT44((float)((ulong)*(undefined8 *)(param_3 + 0xe8) >> 0x20) +
                  *(float *)(param_3 + 0x1d0) * fVar4 +
                  (float)((ulong)*(undefined8 *)(param_3 + 0x1c8) >> 0x20) * fVar10 +
                  *(float *)(param_3 + 0x1c8) * fVar3,
                  (float)*(undefined8 *)(param_3 + 0xe8) +
                  *(float *)(param_3 + 0x1c4) * fVar4 +
                  (float)*(undefined8 *)(param_3 + 0x1c0) * fVar10 +
                  *(float *)(param_3 + 0x1bc) * fVar3);
  }
  if (param_8) {
    fVar13 = (float)((uint)fVar13 ^ uVar2);
    fVar5 = (float)((uint)fVar5 ^ uVar2);
    fVar8 = (float)((uint)fVar8 ^ uVar2);
    fVar9 = fVar9 - *(float *)(param_5 + 0x1fc);
    fVar19 = fVar19 - *(float *)(param_5 + 0x1f8);
    fVar20 = fVar20 - *(float *)(param_5 + 0x200);
    fVar12 = *(float *)(param_5 + 0x170);
    fVar4 = fVar19 * fVar5 - fVar9 * fVar8;
    fVar19 = fVar20 * fVar8 - fVar19 * fVar13;
    fVar3 = fVar9 * fVar13 - fVar20 * fVar5;
    *(ulong *)(param_5 + 0xd8) =
         CONCAT44(fVar5 * fVar12 + *(float *)(param_5 + 0xdc),
                  fVar8 * fVar12 + *(float *)(param_5 + 0xd8));
    *(ulong *)(param_5 + 0xe0) =
         CONCAT44(fVar3 * *(float *)(param_5 + 0x1b0) + *(float *)(param_5 + 0x1b4) * fVar19 +
                  fVar4 * *(float *)(param_5 + 0x1b8) + *(float *)(param_5 + 0xe4),
                  fVar12 * fVar13 + *(float *)(param_5 + 0xe0));
    *(ulong *)(param_5 + 0xe8) =
         CONCAT44((float)((ulong)*(undefined8 *)(param_5 + 0xe8) >> 0x20) +
                  (float)((ulong)*(undefined8 *)(param_5 + 0x1c8) >> 0x20) * fVar19 +
                  *(float *)(param_5 + 0x1c8) * fVar3 + *(float *)(param_5 + 0x1d0) * fVar4,
                  (float)*(undefined8 *)(param_5 + 0xe8) +
                  (float)*(undefined8 *)(param_5 + 0x1c0) * fVar19 +
                  *(float *)(param_5 + 0x1bc) * fVar3 + *(float *)(param_5 + 0x1c4) * fVar4);
  }
  return auVar6._0_8_;
}



/* GodotGeneric6DOFJoint3D::solve(float) */

void __thiscall GodotGeneric6DOFJoint3D::solve(GodotGeneric6DOFJoint3D *this,float param_1)

{
  GodotG6DOFRotationalLimitMotor3D *this_00;
  long lVar1;
  Vector3 *pVVar2;
  GodotGeneric6DOFJoint3D *pGVar3;
  long in_FS_OFFSET;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_3c;
  undefined4 local_34;
  long local_30;
  
  lVar1 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_6c = *(undefined8 *)(this + 0x338);
  local_78 = 0;
  local_70 = 0;
  local_64 = *(undefined4 *)(this + 0x340);
  *(float *)(this + 0x310) = param_1;
  local_60 = *(undefined8 *)(this + 0x368);
  local_58 = *(undefined4 *)(this + 0x370);
  do {
    if (this[lVar1 + 0x270] != (GodotGeneric6DOFJoint3D)0x0) {
      if (*(float *)(this + lVar1 * 4 + 0x228) <= *(float *)(this + lVar1 * 4 + 0x234)) {
        if (this[0x3b0] == (GodotGeneric6DOFJoint3D)0x0) {
          local_70 = *(undefined4 *)(this + lVar1 * 4 + 0x35c);
          local_78 = CONCAT44((int)((ulong)*(undefined8 *)(this + lVar1 * 4 + 0x34c) >> 0x20),
                              (int)*(undefined8 *)(this + lVar1 * 4 + 0x344));
        }
        else {
          local_70 = *(undefined4 *)(this + lVar1 * 4 + 0x32c);
          local_78 = CONCAT44((int)((ulong)*(undefined8 *)(this + lVar1 * 4 + 0x31c) >> 0x20),
                              (int)*(undefined8 *)(this + lVar1 * 4 + 0x314));
        }
        GodotG6DOFTranslationalLimitMotor3D::solveLinearAxis
                  ((GodotG6DOFTranslationalLimitMotor3D *)(this + 0x228),*(float *)(this + 0x310),
                   _LC1 / *(float *)(this + lVar1 * 0x40 + 0xe4),*(GodotBody3D **)(this + 0x38),
                   (Vector3 *)&local_6c,*(GodotBody3D **)(this + 0x40),(Vector3 *)&local_60,
                   (bool)this[0x30],(bool)this[0x31],(int)lVar1,(Vector3 *)&local_78,
                   (Vector3 *)(this + 0x3a4));
      }
    }
    lVar1 = lVar1 + 1;
  } while (lVar1 != 3);
  local_54 = 0;
  pVVar2 = (Vector3 *)(this + 0x380);
  pGVar3 = this + 0x1a4;
  local_4c = 0;
  this_00 = (GodotG6DOFRotationalLimitMotor3D *)(this + 0x274);
  do {
    if ((this_00[0x25] != (GodotG6DOFRotationalLimitMotor3D)0x0) &&
       ((this_00[0x24] != (GodotG6DOFRotationalLimitMotor3D)0x0 || (*(int *)(this_00 + 0x2c) != 0)))
       ) {
      local_54 = *(undefined8 *)pVVar2;
      local_4c = *(undefined4 *)(pVVar2 + 8);
      local_48 = local_54;
      local_40 = local_4c;
      local_3c = local_54;
      local_34 = local_4c;
      GodotG6DOFRotationalLimitMotor3D::solveAngularLimits
                (this_00,*(float *)(this + 0x310),(Vector3 *)&local_54,_LC1 / *(float *)pGVar3,
                 *(GodotBody3D **)(this + 0x38),*(GodotBody3D **)(this + 0x40),(bool)this[0x30],
                 (bool)this[0x31]);
    }
    pVVar2 = pVVar2 + 0xc;
    pGVar3 = pGVar3 + 0x40;
    this_00 = this_00 + 0x34;
  } while (pVVar2 != (Vector3 *)(this + 0x3a4));
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotGeneric6DOFJoint3D::calculateAngleInfo() */

void __thiscall GodotGeneric6DOFJoint3D::calculateAngleInfo(GodotGeneric6DOFJoint3D *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float local_48;
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
  Basis::inverse();
  fVar3 = *(float *)(this + 0x314);
  fVar4 = *(float *)(this + 0x318);
  fVar5 = *(float *)(this + 800);
  fVar1 = *(float *)(this + 0x334);
  fVar7 = *(float *)(this + 0x324);
  fVar2 = *(float *)(this + 0x32c);
  local_48 = *(float *)(this + 0x31c) * fStack_20 + *(float *)(this + 0x328) * fStack_1c +
             fVar1 * local_18;
  fVar8 = *(float *)(this + 0x330);
  local_68 = fStack_30 * fVar2 + fVar5 * fStack_34 + fVar3 * local_38;
  fStack_64 = fStack_30 * fVar8 + fVar7 * fStack_34 + fVar4 * local_38;
  fStack_60 = fStack_30 * fVar1 +
              *(float *)(this + 0x328) * fStack_34 + *(float *)(this + 0x31c) * local_38;
  fStack_5c = fStack_24 * fVar2 + fVar5 * local_28 + fVar3 * fStack_2c;
  local_58 = fVar8 * fStack_24 + fVar4 * fStack_2c + fVar7 * local_28;
  fStack_54 = fVar1 * fStack_24 +
              *(float *)(this + 0x31c) * fStack_2c + *(float *)(this + 0x328) * local_28;
  fStack_50 = fVar2 * local_18 + fVar3 * fStack_20 + fVar5 * fStack_1c;
  fStack_4c = fVar8 * local_18 + fVar4 * fStack_20 + fVar7 * fStack_1c;
  uVar6 = Basis::get_euler(&local_68,0);
  fVar1 = *(float *)(this + 0x350);
  fVar2 = *(float *)(this + 0x328);
  *(float *)(this + 0x37c) = fVar8;
  fVar8 = *(float *)(this + 0x31c);
  fVar3 = *(float *)(this + 0x344);
  *(undefined8 *)(this + 0x374) = uVar6;
  fVar4 = *(float *)(this + 0x35c);
  fVar5 = *(float *)(this + 0x334);
  fVar10 = fVar8 * fVar1 - fVar2 * fVar3;
  fVar7 = fVar5 * fVar3 - fVar8 * fVar4;
  fVar9 = fVar2 * fVar4 - fVar5 * fVar1;
  *(float *)(this + 0x3a0) = fVar7 * fVar3 - fVar9 * fVar1;
  *(float *)(this + 0x380) = fVar7 * fVar5 - fVar10 * fVar2;
  *(float *)(this + 900) = fVar10 * fVar8 - fVar9 * fVar5;
  *(float *)(this + 0x388) = fVar9 * fVar2 - fVar7 * fVar8;
  *(float *)(this + 0x38c) = fVar4 * fVar2 - fVar1 * fVar5;
  *(float *)(this + 0x390) = fVar3 * fVar5 - fVar4 * fVar8;
  *(float *)(this + 0x394) = fVar1 * fVar8 - fVar3 * fVar2;
  *(float *)(this + 0x398) = fVar10 * fVar1 - fVar7 * fVar4;
  *(float *)(this + 0x39c) = fVar9 * fVar4 - fVar10 * fVar3;
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotGeneric6DOFJoint3D::calculateTransforms() */

void __thiscall GodotGeneric6DOFJoint3D::calculateTransforms(GodotGeneric6DOFJoint3D *this)

{
  long in_FS_OFFSET;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  Transform3D::operator*((Transform3D *)&local_58,(Transform3D *)(*(long *)(this + 0x38) + 0x48));
  *(undefined8 *)(this + 0x314) = local_58;
  *(undefined8 *)(this + 0x31c) = uStack_50;
  *(undefined8 *)(this + 0x324) = local_48;
  *(undefined8 *)(this + 0x32c) = uStack_40;
  *(undefined8 *)(this + 0x334) = local_38;
  *(undefined8 *)(this + 0x33c) = uStack_30;
  Transform3D::operator*((Transform3D *)&local_58,(Transform3D *)(*(long *)(this + 0x40) + 0x48));
  *(undefined8 *)(this + 0x344) = local_58;
  *(undefined8 *)(this + 0x34c) = uStack_50;
  *(undefined8 *)(this + 0x354) = local_48;
  *(undefined8 *)(this + 0x35c) = uStack_40;
  *(undefined8 *)(this + 0x364) = local_38;
  *(undefined8 *)(this + 0x36c) = uStack_30;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    calculateAngleInfo(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotGeneric6DOFJoint3D::buildLinearJacobian(GodotJacobianEntry3D&, Vector3 const&, Vector3
   const&, Vector3 const&) */

void __thiscall
GodotGeneric6DOFJoint3D::buildLinearJacobian
          (GodotGeneric6DOFJoint3D *this,GodotJacobianEntry3D *param_1,Vector3 *param_2,
          Vector3 *param_3,Vector3 *param_4)

{
  float fVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long in_FS_OFFSET;
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
  float local_100;
  float fStack_fc;
  float local_f4;
  float fStack_f0;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float fStack_44;
  float local_40;
  float fStack_3c;
  float local_38;
  
  lVar3 = *(long *)(this + 0x40);
  lVar4 = *(long *)(this + 0x38);
  lVar5 = *(long *)(in_FS_OFFSET + 0x28);
  fVar7 = *(float *)(lVar3 + 0x170);
  fVar1 = *(float *)(lVar4 + 0x170);
  fStack_f0 = (float)((ulong)*(undefined8 *)(lVar3 + 0x1f8) >> 0x20);
  fStack_f0 = (*(float *)(param_4 + 4) - *(float *)(lVar3 + 0x70)) - fStack_f0;
  fVar9 = (*(float *)(param_4 + 8) - *(float *)(lVar3 + 0x74)) - *(float *)(lVar3 + 0x200);
  local_f4 = (float)*(undefined8 *)(lVar3 + 0x1f8);
  local_f4 = (*(float *)param_4 - *(float *)(lVar3 + 0x6c)) - local_f4;
  fStack_fc = (float)((ulong)*(undefined8 *)(lVar4 + 0x1f8) >> 0x20);
  fStack_fc = (*(float *)(param_3 + 4) - *(float *)(lVar4 + 0x70)) - fStack_fc;
  fVar12 = (*(float *)(param_3 + 8) - *(float *)(lVar4 + 0x74)) - *(float *)(lVar4 + 0x200);
  local_100 = (float)*(undefined8 *)(lVar4 + 0x1f8);
  local_100 = (*(float *)param_3 - *(float *)(lVar4 + 0x6c)) - local_100;
  Basis::transposed();
  Basis::transposed();
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  fVar14 = *(float *)(param_1 + 4);
  fVar8 = *(float *)param_1;
  uVar2 = *(undefined4 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 8) = uVar2;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  fVar16 = local_100 * fVar14 - fStack_fc * fVar8;
  fVar6 = *(float *)(param_1 + 8);
  fVar18 = fVar12 * fVar8 - local_100 * fVar6;
  fVar12 = fStack_fc * fVar6 - fVar12 * fVar14;
  fVar11 = local_a0 * fVar12 + local_9c * fVar18 + local_98 * fVar16;
  fVar13 = local_ac * fVar12 + local_a8 * fVar18 + local_a4 * fVar16;
  fVar12 = fVar12 * local_b8 + fVar18 * local_b4 + fVar16 * local_b0;
  fVar19 = local_f4 * (float)((uint)fVar14 ^ _LC2) - fStack_f0 * (float)((uint)fVar8 ^ _LC2);
  fVar16 = (float)((uint)fVar8 ^ _LC2) * fVar9 - local_f4 * (float)((uint)fVar6 ^ _LC2);
  fVar8 = fStack_f0 * (float)((uint)fVar6 ^ _LC2) - fVar9 * (float)((uint)fVar14 ^ _LC2);
  fVar15 = *(float *)(lVar4 + 0x178) * fVar13;
  fVar17 = *(float *)(lVar4 + 0x174) * fVar12;
  fVar18 = local_48 * fVar16 + local_4c * fVar8 + fStack_44 * fVar19;
  fVar10 = fStack_3c * fVar16 + local_40 * fVar8 + local_38 * fVar19;
  fVar14 = *(float *)(lVar4 + 0x17c);
  *(float *)(param_1 + 0x28) = fVar15;
  fVar14 = fVar14 * fVar11;
  *(float *)(param_1 + 0x24) = fVar17;
  *(ulong *)(param_1 + 0x1c) = CONCAT44(fVar10,fVar18);
  fVar6 = fVar8 * local_58 + fVar16 * local_54 + local_50 * fVar19;
  *(float *)(param_1 + 0x2c) = fVar14;
  fVar8 = *(float *)(lVar3 + 0x174);
  *(ulong *)(param_1 + 0xc) = CONCAT44(fVar13,fVar12);
  *(ulong *)(param_1 + 0x14) = CONCAT44(fVar6,fVar11);
  fVar8 = fVar8 * fVar6;
  fVar9 = (float)*(undefined8 *)(lVar3 + 0x178) * fVar18;
  fVar16 = (float)((ulong)*(undefined8 *)(lVar3 + 0x178) >> 0x20) * fVar10;
  *(float *)(param_1 + 0x30) = fVar8;
  *(ulong *)(param_1 + 0x34) = CONCAT44(fVar16,fVar9);
  fVar7 = fVar6 * fVar8 + fVar18 * fVar9 + fVar10 * fVar16 +
          fVar12 * fVar17 + fVar13 * fVar15 + fVar11 * fVar14 + fVar1 + fVar7;
  *(float *)(param_1 + 0x3c) = fVar7;
  if (fVar7 <= 0.0) {
    _err_print_error("GodotJacobianEntry3D",
                     "modules/godot_physics_3d/joints/godot_jacobian_entry_3d.h",0x4b,
                     "Condition \"m_Adiag <= real_t(0.0)\" is true.",0,0);
  }
  if (lVar5 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotGeneric6DOFJoint3D::buildAngularJacobian(GodotJacobianEntry3D&, Vector3 const&) */

void __thiscall
GodotGeneric6DOFJoint3D::buildAngularJacobian
          (GodotGeneric6DOFJoint3D *this,GodotJacobianEntry3D *param_1,Vector3 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  long in_FS_OFFSET;
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
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined4 uVar23;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float fStack_44;
  float local_40;
  float fStack_3c;
  float local_38;
  
  lVar2 = *(long *)(this + 0x40);
  lVar3 = *(long *)(this + 0x38);
  lVar4 = *(long *)(in_FS_OFFSET + 0x28);
  Basis::transposed();
  lVar5 = *(long *)(this + 0x38);
  uVar19 = *(undefined8 *)(lVar5 + 0x1d4);
  uVar20 = *(undefined8 *)(lVar5 + 0x1dc);
  uVar21 = *(undefined8 *)(lVar5 + 0x1e4);
  uVar22 = *(undefined8 *)(lVar5 + 0x1ec);
  uVar23 = *(undefined4 *)(lVar5 + 500);
  Basis::transposed();
  *(undefined8 *)param_1 = 0;
  uVar6 = _LC2;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  fVar15 = *(float *)param_2;
  fVar17 = *(float *)(param_2 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  fVar18 = *(float *)(param_2 + 8);
  fVar12 = local_a0 * fVar15 + local_9c * fVar17 + local_98 * fVar18;
  fVar14 = (float)((uint)fVar17 ^ uVar6);
  fVar13 = local_ac * fVar15 + local_a8 * fVar17 + local_a4 * fVar18;
  fVar8 = (float)((uint)fVar15 ^ uVar6);
  fVar10 = (float)((uint)fVar18 ^ uVar6);
  fVar7 = local_b8 * fVar15 + local_b4 * fVar17 + local_b0 * fVar18;
  fVar9 = fVar8 * local_58 + fVar14 * local_54 + fVar10 * local_50;
  fVar11 = local_48 * fVar14 + local_4c * fVar8 + fStack_44 * fVar10;
  fVar8 = fStack_3c * fVar14 + local_40 * fVar8 + local_38 * fVar10;
  *(ulong *)(param_1 + 0xc) = CONCAT44(fVar13,fVar7);
  *(ulong *)(param_1 + 0x14) = CONCAT44(fVar9,fVar12);
  fVar15 = *(float *)(lVar2 + 0x174);
  fVar17 = *(float *)(lVar3 + 0x178);
  fVar18 = *(float *)(lVar3 + 0x174);
  *(ulong *)(param_1 + 0x1c) = CONCAT44(fVar8,fVar11);
  uVar1 = *(undefined8 *)(lVar2 + 0x178);
  fVar17 = fVar17 * fVar13;
  fVar18 = fVar18 * fVar7;
  fVar16 = *(float *)(lVar3 + 0x17c) * fVar12;
  fVar10 = (float)uVar1 * fVar11;
  fVar14 = (float)((ulong)uVar1 >> 0x20) * fVar8;
  fVar15 = fVar15 * fVar9;
  *(float *)(param_1 + 0x28) = fVar17;
  *(float *)(param_1 + 0x24) = fVar18;
  *(float *)(param_1 + 0x2c) = fVar16;
  *(ulong *)(param_1 + 0x34) = CONCAT44(fVar14,fVar10);
  *(float *)(param_1 + 0x30) = fVar15;
  fVar15 = fVar7 * fVar18 + fVar13 * fVar17 + fVar12 * fVar16 +
           fVar9 * fVar15 + fVar11 * fVar10 + fVar8 * fVar14;
  *(float *)(param_1 + 0x3c) = fVar15;
  if (fVar15 <= 0.0) {
    _err_print_error("GodotJacobianEntry3D",
                     "modules/godot_physics_3d/joints/godot_jacobian_entry_3d.h",0x5b,
                     "Condition \"m_Adiag <= real_t(0.0)\" is true.",0,0,uVar19,uVar20,uVar21,uVar22
                     ,uVar23);
  }
  if (lVar4 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotGeneric6DOFJoint3D::testAngularLimitMotor(int) */

uint __thiscall
GodotGeneric6DOFJoint3D::testAngularLimitMotor(GodotGeneric6DOFJoint3D *this,int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  long lVar5;
  
  lVar5 = (long)param_1;
  fVar1 = *(float *)(this + lVar5 * 4 + 0x374);
  fVar2 = *(float *)(this + lVar5 * 0x34 + 0x274);
  fVar3 = *(float *)(this + lVar5 * 0x34 + 0x278);
  if (fVar2 <= fVar3) {
    if (fVar1 < fVar2) {
      *(undefined4 *)(this + lVar5 * 0x34 + 0x2a0) = 1;
      *(float *)(this + lVar5 * 0x34 + 0x29c) = fVar1 - fVar2;
      goto LAB_00101a3e;
    }
    if (fVar3 < fVar1) {
      *(undefined4 *)(this + lVar5 * 0x34 + 0x2a0) = 2;
      *(float *)(this + lVar5 * 0x34 + 0x29c) = fVar1 - fVar3;
      goto LAB_00101a3e;
    }
  }
  *(undefined4 *)(this + lVar5 * 0x34 + 0x2a0) = 0;
LAB_00101a3e:
  uVar4 = (uint)(byte)this[lVar5 * 0x34 + 0x298];
  if (this[lVar5 * 0x34 + 0x298] == (GodotGeneric6DOFJoint3D)0x0) {
    uVar4 = CONCAT31((int3)((uint)*(int *)(this + lVar5 * 0x34 + 0x2a0) >> 8),
                     *(int *)(this + lVar5 * 0x34 + 0x2a0) != 0);
  }
  return uVar4;
}



/* GodotGeneric6DOFJoint3D::setup(float) */

ulong GodotGeneric6DOFJoint3D::setup(float param_1)

{
  char cVar1;
  int iVar2;
  GodotJacobianEntry3D *pGVar3;
  GodotGeneric6DOFJoint3D *in_RDI;
  GodotGeneric6DOFJoint3D *this;
  GodotGeneric6DOFJoint3D *pGVar4;
  byte bVar5;
  undefined8 unaff_R13;
  GodotGeneric6DOFJoint3D *pGVar6;
  long in_FS_OFFSET;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_80;
  float local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined8 local_58;
  float local_50;
  undefined8 local_4c;
  float local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = GodotBody3D::get_mode();
  in_RDI[0x30] = (GodotGeneric6DOFJoint3D)(1 < iVar2);
  iVar2 = GodotBody3D::get_mode();
  in_RDI[0x31] = (GodotGeneric6DOFJoint3D)(1 < iVar2);
  bVar5 = 1 < iVar2 | (byte)in_RDI[0x30];
  if (bVar5 != 0) {
    *(undefined8 *)(in_RDI + 0x240) = 0;
    *(undefined4 *)(in_RDI + 0x248) = 0;
    pGVar6 = in_RDI + 0x270;
    pGVar4 = in_RDI + 0x228;
    *(undefined4 *)(in_RDI + 0x2a4) = 0;
    *(undefined4 *)(in_RDI + 0x2d8) = 0;
    *(undefined4 *)(in_RDI + 0x30c) = 0;
    Transform3D::operator*
              ((Transform3D *)&local_b8,(Transform3D *)(*(long *)(in_RDI + 0x38) + 0x48));
    pGVar3 = (GodotJacobianEntry3D *)(in_RDI + 0xa8);
    *(undefined8 *)(in_RDI + 0x314) = local_b8;
    *(undefined8 *)(in_RDI + 0x31c) = uStack_b0;
    *(undefined8 *)(in_RDI + 0x324) = local_a8;
    *(undefined8 *)(in_RDI + 0x32c) = uStack_a0;
    *(undefined8 *)(in_RDI + 0x334) = local_98;
    *(undefined8 *)(in_RDI + 0x33c) = uStack_90;
    Transform3D::operator*
              ((Transform3D *)&local_b8,(Transform3D *)(*(long *)(in_RDI + 0x40) + 0x48));
    *(undefined8 *)(in_RDI + 0x344) = local_b8;
    *(undefined8 *)(in_RDI + 0x34c) = uStack_b0;
    *(undefined8 *)(in_RDI + 0x354) = local_a8;
    *(undefined8 *)(in_RDI + 0x35c) = uStack_a0;
    *(undefined8 *)(in_RDI + 0x364) = local_98;
    *(undefined8 *)(in_RDI + 0x36c) = uStack_90;
    calculateAngleInfo(in_RDI);
    (**(code **)(*(long *)in_RDI + 0x40))();
    local_70 = *(undefined8 *)(in_RDI + 0x3a4);
    local_68 = *(undefined4 *)(in_RDI + 0x3ac);
    local_80 = 0;
    local_78 = 0.0;
    local_64 = local_70;
    local_5c = local_68;
    do {
      if ((*pGVar6 != (GodotGeneric6DOFJoint3D)0x0) &&
         (*(float *)pGVar4 <= *(float *)(pGVar4 + 0xc))) {
        if (in_RDI[0x3b0] == (GodotGeneric6DOFJoint3D)0x0) {
          local_78 = *(float *)(pGVar4 + 0x134);
          local_80 = CONCAT44((int)((ulong)*(undefined8 *)(pGVar4 + 0x124) >> 0x20),
                              (int)*(undefined8 *)(pGVar4 + 0x11c));
        }
        else {
          local_78 = *(float *)(pGVar4 + 0x104);
          local_80 = CONCAT44((int)((ulong)*(undefined8 *)(pGVar4 + 0xf4) >> 0x20),
                              (int)*(undefined8 *)(pGVar4 + 0xec));
        }
        buildLinearJacobian(in_RDI,pGVar3,(Vector3 *)&local_80,(Vector3 *)&local_70,
                            (Vector3 *)&local_64);
      }
      pGVar3 = pGVar3 + 0x40;
      pGVar6 = pGVar6 + 1;
      pGVar4 = pGVar4 + 4;
    } while (pGVar3 != (GodotJacobianEntry3D *)(in_RDI + 0x168));
    pGVar6 = in_RDI + 0x299;
    pGVar4 = in_RDI + 0x380;
    iVar2 = 0;
    do {
      if (*pGVar6 != (GodotGeneric6DOFJoint3D)0x0) {
        this = in_RDI;
        cVar1 = testAngularLimitMotor(in_RDI,iVar2);
        if (cVar1 != '\0') {
          local_80 = *(undefined8 *)pGVar4;
          local_78 = *(float *)(pGVar4 + 8);
          local_58 = local_80;
          local_50 = local_78;
          local_4c = local_80;
          local_44 = local_78;
          buildAngularJacobian(this,pGVar3,(Vector3 *)&local_80);
        }
      }
      iVar2 = iVar2 + 1;
      pGVar6 = pGVar6 + 0x34;
      pGVar4 = pGVar4 + 0xc;
      pGVar3 = pGVar3 + 0x40;
    } while (iVar2 != 3);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return CONCAT71((int7)((ulong)unaff_R13 >> 8),bVar5) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotGeneric6DOFJoint3D::updateRHS(float) */

void GodotGeneric6DOFJoint3D::updateRHS(float param_1)

{
  return;
}



/* GodotGeneric6DOFJoint3D::getAxis(int) const */

void GodotGeneric6DOFJoint3D::getAxis(int param_1)

{
  long in_FS_OFFSET;
  
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotGeneric6DOFJoint3D::getAngle(int) const */

undefined4 __thiscall GodotGeneric6DOFJoint3D::getAngle(GodotGeneric6DOFJoint3D *this,int param_1)

{
  return *(undefined4 *)(this + (long)param_1 * 4 + 0x374);
}



/* GodotGeneric6DOFJoint3D::set_param(Vector3::Axis, PhysicsServer3D::G6DOFJointAxisParam, float) */

void __thiscall
GodotGeneric6DOFJoint3D::set_param
          (undefined4 param_1,GodotGeneric6DOFJoint3D *this,uint param_3,undefined4 param_4)

{
  if (param_3 < 3) {
    switch(param_4) {
    case 0:
      *(undefined4 *)(this + (long)(int)param_3 * 4 + 0x228) = param_1;
      return;
    case 1:
      *(undefined4 *)(this + (long)(int)param_3 * 4 + 0x234) = param_1;
      return;
    case 2:
      *(undefined4 *)(this + (long)(int)param_3 * 4 + 0x24c) = param_1;
      return;
    case 3:
      *(undefined4 *)(this + (long)(int)param_3 * 4 + 0x264) = param_1;
      return;
    case 4:
      *(undefined4 *)(this + (long)(int)param_3 * 4 + 600) = param_1;
      return;
    default:
      return;
    case 10:
      *(undefined4 *)(this + (long)(int)param_3 * 0x34 + 0x274) = param_1;
      return;
    case 0xb:
      *(undefined4 *)(this + (long)(int)param_3 * 0x34 + 0x278) = param_1;
      return;
    case 0xc:
      *(undefined4 *)(this + (long)(int)param_3 * 0x34 + 0x28c) = param_1;
      return;
    case 0xd:
      *(undefined4 *)(this + (long)(int)param_3 * 0x34 + 0x288) = param_1;
      return;
    case 0xe:
      *(undefined4 *)(this + (long)(int)param_3 * 0x34 + 0x294) = param_1;
      return;
    case 0xf:
    case 0x12:
      *(undefined4 *)(this + (long)(int)param_3 * 0x34 + 0x284) = param_1;
      return;
    case 0x10:
      *(undefined4 *)(this + (long)(int)param_3 * 0x34 + 0x290) = param_1;
      return;
    case 0x11:
      *(undefined4 *)(this + (long)(int)param_3 * 0x34 + 0x27c) = param_1;
      return;
    }
  }
  _err_print_index_error
            ("set_param","modules/godot_physics_3d/joints/godot_generic_6dof_joint_3d.cpp",0x1c0,
             (ulong)param_3,3,"p_axis","3","",false,false);
  return;
}



/* GodotGeneric6DOFJoint3D::get_param(Vector3::Axis, PhysicsServer3D::G6DOFJointAxisParam) const */

undefined4 __thiscall
GodotGeneric6DOFJoint3D::get_param(GodotGeneric6DOFJoint3D *this,uint param_2,undefined4 param_3)

{
  if (param_2 < 3) {
    switch(param_3) {
    case 0:
      return *(undefined4 *)(this + (long)(int)param_2 * 4 + 0x228);
    case 1:
      return *(undefined4 *)(this + (long)(int)param_2 * 4 + 0x234);
    case 2:
      return *(undefined4 *)(this + (long)(int)param_2 * 4 + 0x24c);
    case 3:
      return *(undefined4 *)(this + (long)(int)param_2 * 4 + 0x264);
    case 4:
      return *(undefined4 *)(this + (long)(int)param_2 * 4 + 600);
    default:
      return 0;
    case 10:
      return *(undefined4 *)(this + (long)(int)param_2 * 0x34 + 0x274);
    case 0xb:
      return *(undefined4 *)(this + (long)(int)param_2 * 0x34 + 0x278);
    case 0xc:
      return *(undefined4 *)(this + (long)(int)param_2 * 0x34 + 0x28c);
    case 0xd:
      return *(undefined4 *)(this + (long)(int)param_2 * 0x34 + 0x288);
    case 0xe:
      return *(undefined4 *)(this + (long)(int)param_2 * 0x34 + 0x294);
    case 0xf:
      return *(undefined4 *)(this + (long)(int)param_2 * 0x34 + 0x284);
    case 0x10:
      return *(undefined4 *)(this + (long)(int)param_2 * 0x34 + 0x290);
    case 0x11:
      return *(undefined4 *)(this + (long)(int)param_2 * 0x34 + 0x27c);
    case 0x12:
      return *(undefined4 *)(this + (long)(int)param_2 * 0x34 + 0x280);
    }
  }
  _err_print_index_error
            ("get_param","modules/godot_physics_3d/joints/godot_generic_6dof_joint_3d.cpp",0x217,
             (ulong)param_2,3,"p_axis","3","",false,false);
  return 0;
}



/* GodotGeneric6DOFJoint3D::set_flag(Vector3::Axis, PhysicsServer3D::G6DOFJointAxisFlag, bool) */

void __thiscall
GodotGeneric6DOFJoint3D::set_flag
          (GodotGeneric6DOFJoint3D *this,uint param_2,int param_3,GodotGeneric6DOFJoint3D param_4)

{
  if (2 < param_2) {
    _err_print_index_error
              ("set_flag","modules/godot_physics_3d/joints/godot_generic_6dof_joint_3d.cpp",0x26f,
               (ulong)param_2,3,"p_axis","3","",false,false);
    return;
  }
  if (param_3 == 1) {
    this[(long)(int)param_2 * 0x34 + 0x299] = param_4;
    return;
  }
  if (param_3 == 4) {
    this[(long)(int)param_2 * 0x34 + 0x298] = param_4;
    return;
  }
  if (param_3 == 0) {
    this[(long)(int)param_2 + 0x270] = param_4;
    return;
  }
  return;
}



/* GodotGeneric6DOFJoint3D::get_flag(Vector3::Axis, PhysicsServer3D::G6DOFJointAxisFlag) const */

GodotGeneric6DOFJoint3D __thiscall
GodotGeneric6DOFJoint3D::get_flag(GodotGeneric6DOFJoint3D *this,uint param_2,int param_3)

{
  if (2 < param_2) {
    _err_print_index_error
              ("get_flag","modules/godot_physics_3d/joints/godot_generic_6dof_joint_3d.cpp",0x28a,
               (ulong)param_2,3,"p_axis","3","",false,false);
    return (GodotGeneric6DOFJoint3D)0x0;
  }
  if (param_3 == 1) {
    return this[(long)(int)param_2 * 0x34 + 0x299];
  }
  if (param_3 == 4) {
    return this[(long)(int)param_2 * 0x34 + 0x298];
  }
  if (param_3 != 0) {
    return (GodotGeneric6DOFJoint3D)0x0;
  }
  return this[(long)(int)param_2 + 0x270];
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GodotGeneric6DOFJoint3D::GodotGeneric6DOFJoint3D(GodotBody3D*, GodotBody3D*, Transform3D const&,
   Transform3D const&, bool) */

void __thiscall
GodotGeneric6DOFJoint3D::GodotGeneric6DOFJoint3D
          (GodotGeneric6DOFJoint3D *this,GodotBody3D *param_1,GodotBody3D *param_2,
          Transform3D *param_3,Transform3D *param_4,bool param_5)

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
  undefined4 uVar12;
  GodotGeneric6DOFJoint3D *pGVar13;
  GodotGeneric6DOFJoint3D *pGVar14;
  undefined4 *puVar15;
  long in_FS_OFFSET;
  undefined1 auVar16 [16];
  GodotGeneric6DOFJoint3D *local_28;
  long local_20;
  
  uVar2 = *(undefined8 *)(param_3 + 8);
  uVar3 = *(undefined8 *)(param_3 + 0x10);
  uVar4 = *(undefined8 *)(param_3 + 0x18);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar5 = *(undefined8 *)(param_3 + 0x20);
  uVar6 = *(undefined8 *)(param_3 + 0x28);
  uVar7 = *(undefined8 *)param_4;
  uVar8 = *(undefined8 *)(param_4 + 8);
  uVar9 = *(undefined8 *)(param_4 + 0x10);
  uVar10 = *(undefined8 *)(param_4 + 0x18);
  *(undefined8 *)(this + 0x48) = *(undefined8 *)param_3;
  *(undefined8 *)(this + 0x50) = uVar2;
  uVar2 = *(undefined8 *)(param_4 + 0x20);
  uVar11 = *(undefined8 *)(param_4 + 0x28);
  *(undefined8 *)(this + 0x28) = 0;
  uVar12 = _LC1;
  *(undefined4 *)(this + 0x10) = 2;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x20) = 1;
  this[0x24] = (GodotGeneric6DOFJoint3D)0x1;
  *(undefined2 *)(this + 0x30) = 0;
  *(GodotGeneric6DOFJoint3D **)(this + 8) = this + 0x38;
  *(undefined ***)this = &PTR_get_soft_body_ptr_001032f8;
  *(undefined8 *)(this + 0x58) = uVar3;
  *(undefined8 *)(this + 0x60) = uVar4;
  *(undefined8 *)(this + 0x68) = uVar5;
  *(undefined8 *)(this + 0x70) = uVar6;
  *(undefined8 *)(this + 0x78) = uVar7;
  *(undefined8 *)(this + 0x80) = uVar8;
  *(undefined8 *)(this + 0x88) = uVar9;
  *(undefined8 *)(this + 0x90) = uVar10;
  *(undefined8 *)(this + 0x98) = uVar2;
  *(undefined8 *)(this + 0xa0) = uVar11;
  pGVar14 = this + 0xa8;
  do {
    *(undefined8 *)pGVar14 = 0;
    pGVar13 = pGVar14 + 0x40;
    *(undefined4 *)(pGVar14 + 8) = 0;
    *(undefined8 *)(pGVar14 + 0xc) = 0;
    *(undefined4 *)(pGVar14 + 0x14) = 0;
    *(undefined8 *)(pGVar14 + 0x18) = 0;
    *(undefined4 *)(pGVar14 + 0x20) = 0;
    *(undefined8 *)(pGVar14 + 0x24) = 0;
    *(undefined4 *)(pGVar14 + 0x2c) = 0;
    *(undefined8 *)(pGVar14 + 0x30) = 0;
    *(undefined4 *)(pGVar14 + 0x38) = 0;
    *(undefined4 *)(pGVar14 + 0x3c) = uVar12;
    pGVar14 = pGVar13;
  } while (pGVar13 != this + 0x168);
  do {
    *(undefined8 *)pGVar13 = 0;
    pGVar14 = pGVar13 + 0x40;
    *(undefined4 *)(pGVar13 + 8) = 0;
    *(undefined8 *)(pGVar13 + 0xc) = 0;
    *(undefined4 *)(pGVar13 + 0x14) = 0;
    *(undefined8 *)(pGVar13 + 0x18) = 0;
    *(undefined4 *)(pGVar13 + 0x20) = 0;
    *(undefined8 *)(pGVar13 + 0x24) = 0;
    *(undefined4 *)(pGVar13 + 0x2c) = 0;
    *(undefined8 *)(pGVar13 + 0x30) = 0;
    *(undefined4 *)(pGVar13 + 0x38) = 0;
    *(undefined4 *)(pGVar13 + 0x3c) = uVar12;
    uVar2 = _LC25;
    pGVar13 = pGVar14;
  } while (this + 0x228 != pGVar14);
  this[0x272] = (GodotGeneric6DOFJoint3D)0x1;
  *(undefined1 (*) [16])(this + 0x228) = (undefined1  [16])0x0;
  uVar6 = _UNK_001034f8;
  uVar5 = __LC27;
  *(undefined1 (*) [16])(this + 0x238) = (undefined1  [16])0x0;
  uVar4 = _UNK_001034d8;
  uVar3 = __LC23;
  *(undefined2 *)(this + 0x270) = 0x101;
  *(undefined8 *)(this + 0x248) = uVar3;
  *(undefined8 *)(this + 0x250) = uVar4;
  uVar4 = _UNK_001034e8;
  uVar3 = CONCAT44(_UNK_001034e4,_LC1);
  *(undefined8 *)(this + 0x268) = uVar2;
  *(undefined8 *)(this + 600) = uVar3;
  *(undefined8 *)(this + 0x260) = uVar4;
  uVar3 = _LC25;
  uVar2 = __LC28;
  pGVar14 = this + 0x274;
  do {
    *(undefined4 *)(pGVar14 + 0x20) = 0;
    pGVar13 = pGVar14 + 0x34;
    *(undefined8 *)pGVar14 = uVar5;
    *(undefined8 *)(pGVar14 + 8) = uVar6;
    *(undefined8 *)(pGVar14 + 0x10) = uVar2;
    *(undefined8 *)(pGVar14 + 0x18) = uVar3;
    *(undefined2 *)(pGVar14 + 0x24) = 0;
    *(undefined4 *)(pGVar14 + 0x28) = 0;
    *(undefined4 *)(pGVar14 + 0x2c) = 0;
    *(undefined4 *)(pGVar14 + 0x30) = 0;
    uVar7 = _UNK_00103518;
    uVar4 = _LC30;
    pGVar14 = pGVar13;
  } while (this + 0x310 != pGVar13);
  *(GodotBody3D **)(this + 0x38) = param_1;
  *(GodotBody3D **)(this + 0x40) = param_2;
  this[0x3b0] = (GodotGeneric6DOFJoint3D)param_5;
  *(undefined8 *)(this + 0x330) = uVar4;
  *(undefined8 *)(this + 0x338) = 0;
  *(undefined4 *)(this + 0x340) = 0;
  *(undefined8 *)(this + 0x368) = 0;
  *(undefined4 *)(this + 0x370) = 0;
  *(undefined8 *)(this + 0x374) = 0;
  *(undefined4 *)(this + 0x37c) = 0;
  *(undefined8 *)(this + 0x380) = 0;
  *(undefined4 *)(this + 0x388) = 0;
  *(undefined8 *)(this + 0x38c) = 0;
  *(undefined4 *)(this + 0x394) = 0;
  *(undefined8 *)(this + 0x398) = 0;
  *(undefined4 *)(this + 0x3a0) = 0;
  *(undefined8 *)(this + 0x3a4) = 0;
  *(undefined4 *)(this + 0x3ac) = 0;
  *(undefined8 *)(this + 0x310) = uVar4;
  *(undefined8 *)(this + 0x318) = uVar7;
  *(undefined8 *)(this + 800) = uVar4;
  *(undefined8 *)(this + 0x328) = uVar7;
  auVar16 = ZEXT416(_LC31);
  *(undefined1 (*) [16])(this + 0x344) = auVar16;
  *(undefined1 (*) [16])(this + 0x354) = auVar16;
  *(undefined4 *)(this + 0x364) = uVar12;
  local_28 = this;
  puVar15 = (undefined4 *)
            HashMap<GodotConstraint3D*,int,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint3D*>,DefaultTypedAllocator<HashMapElement<GodotConstraint3D*,int>>>
            ::operator[]((HashMap<GodotConstraint3D*,int,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint3D*>,DefaultTypedAllocator<HashMapElement<GodotConstraint3D*,int>>>
                          *)(param_1 + 0x2f0),(GodotConstraint3D **)&local_28);
  lVar1 = *(long *)(this + 0x40);
  *puVar15 = 0;
  local_28 = this;
  puVar15 = (undefined4 *)
            HashMap<GodotConstraint3D*,int,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint3D*>,DefaultTypedAllocator<HashMapElement<GodotConstraint3D*,int>>>
            ::operator[]((HashMap<GodotConstraint3D*,int,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint3D*>,DefaultTypedAllocator<HashMapElement<GodotConstraint3D*,int>>>
                          *)(lVar1 + 0x2f0),(GodotConstraint3D **)&local_28);
  *puVar15 = 1;
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



/* GodotGeneric6DOFJoint3D::get_type() const */

undefined8 GodotGeneric6DOFJoint3D::get_type(void)

{
  return 4;
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
  *(undefined ***)this = &PTR_get_soft_body_ptr_001032a8;
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



/* GodotGeneric6DOFJoint3D::~GodotGeneric6DOFJoint3D() */

void __thiscall GodotGeneric6DOFJoint3D::~GodotGeneric6DOFJoint3D(GodotGeneric6DOFJoint3D *this)

{
  long lVar1;
  long lVar2;
  long in_FS_OFFSET;
  GodotGeneric6DOFJoint3D *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR_get_soft_body_ptr_001032a8;
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
  *(undefined ***)this = &PTR_get_soft_body_ptr_001032a8;
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



/* GodotGeneric6DOFJoint3D::~GodotGeneric6DOFJoint3D() */

void __thiscall GodotGeneric6DOFJoint3D::~GodotGeneric6DOFJoint3D(GodotGeneric6DOFJoint3D *this)

{
  long lVar1;
  long lVar2;
  long in_FS_OFFSET;
  GodotGeneric6DOFJoint3D *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR_get_soft_body_ptr_001032a8;
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
    operator_delete(this,0x3b8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
    lStack_90 = 0x1030c2;
    local_70 = (void *)Memory::alloc_static(uVar39,false);
    *(void **)(this + 8) = local_70;
    if (uVar47 == 0) {
      iVar43 = *(int *)(this + 0x2c);
      pGVar56 = *param_1;
      if (local_70 == (void *)0x0) goto LAB_00102beb;
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
        lStack_90 = 0x10310a;
        memset(local_70,0,uVar39);
        iVar43 = *(int *)(this + 0x2c);
        pGVar56 = *param_1;
      }
    }
    if (iVar43 != 0) {
      uVar40 = (ulong)*(uint *)(this + 0x28);
      lVar52 = *(long *)(this + 0x10);
      goto LAB_00102f93;
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
LAB_00102f93:
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
            goto LAB_00102f74;
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
LAB_00102beb:
  if ((float)uVar55 * __LC17 < (float)(iVar43 + 1)) {
    uVar47 = *(uint *)(this + 0x28);
    if (uVar47 == 0x1c) {
      pauVar42 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_00102f74;
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
LAB_00102f74:
  auVar59._8_8_ = lStack_90;
  auVar59._0_8_ = pauVar42[1] + 8;
  return auVar59;
}



/* WARNING: Control flow encountered bad instruction data */
/* GodotGeneric6DOFJoint3D::~GodotGeneric6DOFJoint3D() */

void __thiscall GodotGeneric6DOFJoint3D::~GodotGeneric6DOFJoint3D(GodotGeneric6DOFJoint3D *this)

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


