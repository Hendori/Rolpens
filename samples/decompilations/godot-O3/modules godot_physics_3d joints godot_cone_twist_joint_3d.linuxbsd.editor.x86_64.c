
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GodotConeTwistJoint3D::solve(float) */

void __thiscall GodotConeTwistJoint3D::solve(GodotConeTwistJoint3D *this,float param_1)

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
  GodotConeTwistJoint3D GVar10;
  GodotConeTwistJoint3D GVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  GodotConeTwistJoint3D *pGVar16;
  long in_FS_OFFSET;
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
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float local_28;
  float fStack_24;
  float local_1c;
  float fStack_18;
  
  uVar15 = _LC17;
  lVar12 = *(long *)(this + 0x38);
  lVar13 = *(long *)(in_FS_OFFSET + 0x28);
  lVar14 = *(long *)(this + 0x40);
  if (this[0x1b8] == (GodotConeTwistJoint3D)0x0) {
    pGVar16 = this + 0x48;
    fVar20 = *(float *)(this + 0x130);
    fVar28 = *(float *)(this + 0x134);
    fVar27 = *(float *)(this + 0x138);
    fVar22 = *(float *)(lVar12 + 0x60) * fVar20 + *(float *)(lVar12 + 100) * fVar28 +
             *(float *)(lVar12 + 0x68) * fVar27 + *(float *)(lVar12 + 0x74);
    fVar19 = *(float *)(this + 0x164);
    fVar31 = *(float *)(this + 0x168);
    fVar23 = *(float *)(lVar12 + 0x54) * fVar20 + *(float *)(lVar12 + 0x58) * fVar28 +
             *(float *)(lVar12 + 0x5c) * fVar27 + *(float *)(lVar12 + 0x70);
    fVar17 = fVar20 * *(float *)(lVar12 + 0x48) + fVar28 * *(float *)(lVar12 + 0x4c) +
             fVar27 * *(float *)(lVar12 + 0x50) + *(float *)(lVar12 + 0x6c);
    fVar20 = *(float *)(this + 0x160);
    fVar32 = *(float *)(lVar14 + 100) * fVar19 + *(float *)(lVar14 + 0x60) * fVar20 +
             *(float *)(lVar14 + 0x68) * fVar31 + *(float *)(lVar14 + 0x74);
    fVar29 = (fVar22 - *(float *)(lVar12 + 0x74)) - *(float *)(lVar12 + 0x200);
    fVar37 = (fVar23 - *(float *)(lVar12 + 0x70)) - *(float *)(lVar12 + 0x1fc);
    fVar18 = (fVar17 - *(float *)(lVar12 + 0x6c)) - *(float *)(lVar12 + 0x1f8);
    fVar28 = *(float *)(lVar12 + 0xe4);
    fVar35 = *(float *)(lVar14 + 0x54) * fVar20 + *(float *)(lVar14 + 0x58) * fVar19 +
             *(float *)(lVar14 + 0x5c) * fVar31 + *(float *)(lVar14 + 0x70);
    fVar27 = *(float *)(lVar12 + 0xe8);
    fVar1 = *(float *)(lVar14 + 0xe4);
    fVar21 = fVar31 * *(float *)(lVar14 + 0x50) +
             fVar20 * *(float *)(lVar14 + 0x48) + fVar19 * *(float *)(lVar14 + 0x4c) +
             *(float *)(lVar14 + 0x6c);
    fVar24 = (fVar32 - *(float *)(lVar14 + 0x74)) - *(float *)(lVar14 + 0x200);
    fVar20 = *(float *)(lVar12 + 0xec);
    GVar10 = this[0x30];
    fVar19 = *(float *)(lVar14 + 0xe8);
    GVar11 = this[0x31];
    fVar36 = (fVar35 - *(float *)(lVar14 + 0x70)) - *(float *)(lVar14 + 0x1fc);
    fVar33 = (fVar21 - *(float *)(lVar14 + 0x6c)) - *(float *)(lVar14 + 0x1f8);
    fVar31 = *(float *)(lVar14 + 0xec);
    fVar2 = *(float *)(lVar12 + 0xd8);
    fVar3 = *(float *)(lVar12 + 0xe0);
    fVar4 = *(float *)(lVar12 + 0xdc);
    fVar5 = *(float *)(lVar14 + 0xec);
    fVar6 = *(float *)(lVar14 + 0xe8);
    fVar7 = *(float *)(lVar14 + 0xe0);
    fVar8 = *(float *)(lVar14 + 0xdc);
    fVar9 = *(float *)(lVar14 + 0xd8);
    do {
      fVar26 = *(float *)pGVar16;
      fVar30 = *(float *)(pGVar16 + 4);
      fVar34 = *(float *)(pGVar16 + 8);
      fVar25 = (((float)((uint)((fVar23 - fVar35) * fVar30 + (fVar17 - fVar21) * fVar26 +
                               (fVar22 - fVar32) * fVar34) ^ uVar15) * __LC3) / param_1) *
               (_LC42._4_4_ / *(float *)(pGVar16 + 0x3c)) -
               ((((fVar18 * fVar20 - fVar28 * fVar29) + fVar4) -
                ((fVar33 * fVar31 - fVar1 * fVar24) + fVar8)) * fVar30 +
                (((fVar29 * fVar27 - fVar37 * fVar20) + fVar2) -
                ((fVar24 * fVar6 - fVar36 * fVar5) + fVar9)) * fVar26 +
               (((fVar37 * fVar28 - fVar18 * fVar27) + fVar3) -
               ((fVar36 * fVar1 - fVar19 * fVar33) + fVar7)) * fVar34) *
               (_LC42._4_4_ / *(float *)(pGVar16 + 0x3c));
      fVar34 = fVar34 * fVar25;
      fVar30 = fVar30 * fVar25;
      fVar26 = fVar25 * fVar26;
      *(float *)(this + 0x108) = *(float *)(this + 0x108) + fVar25;
      if (GVar10 != (GodotConeTwistJoint3D)0x0) {
        fVar25 = *(float *)(lVar12 + 0x170);
        fVar38 = (fVar23 - *(float *)(lVar12 + 0x70)) - *(float *)(lVar12 + 0x1fc);
        fVar40 = (fVar17 - *(float *)(lVar12 + 0x6c)) - *(float *)(lVar12 + 0x1f8);
        fVar39 = (fVar22 - *(float *)(lVar12 + 0x74)) - *(float *)(lVar12 + 0x200);
        fVar41 = fVar30 * fVar40 - fVar26 * fVar38;
        fVar40 = fVar26 * fVar39 - fVar40 * fVar34;
        fVar38 = fVar38 * fVar34 - fVar39 * fVar30;
        *(ulong *)(lVar12 + 0xd8) =
             CONCAT44(fVar30 * fVar25 + *(float *)(lVar12 + 0xdc),
                      fVar26 * fVar25 + *(float *)(lVar12 + 0xd8));
        *(ulong *)(lVar12 + 0xe0) =
             CONCAT44(fVar38 * *(float *)(lVar12 + 0x1b0) + fVar40 * *(float *)(lVar12 + 0x1b4) +
                      fVar41 * *(float *)(lVar12 + 0x1b8) + *(float *)(lVar12 + 0xe4),
                      fVar25 * fVar34 + *(float *)(lVar12 + 0xe0));
        *(ulong *)(lVar12 + 0xe8) =
             CONCAT44((float)((ulong)*(undefined8 *)(lVar12 + 0xe8) >> 0x20) +
                      *(float *)(lVar12 + 0x1cc) * fVar40 +
                      fVar38 * (float)((ulong)*(undefined8 *)(lVar12 + 0x1c4) >> 0x20) +
                      (float)((ulong)*(undefined8 *)(lVar12 + 0x1cc) >> 0x20) * fVar41,
                      (float)*(undefined8 *)(lVar12 + 0xe8) +
                      *(float *)(lVar12 + 0x1c0) * fVar40 +
                      fVar38 * (float)*(undefined8 *)(lVar12 + 0x1bc) +
                      (float)*(undefined8 *)(lVar12 + 0x1c4) * fVar41);
      }
      if (GVar11 != (GodotConeTwistJoint3D)0x0) {
        fVar34 = (float)((uint)fVar34 ^ uVar15);
        fVar30 = (float)((uint)fVar30 ^ uVar15);
        fVar26 = (float)((uint)fVar26 ^ uVar15);
        fVar40 = (fVar32 - *(float *)(lVar14 + 0x74)) - *(float *)(lVar14 + 0x200);
        fVar38 = (fVar35 - *(float *)(lVar14 + 0x70)) - *(float *)(lVar14 + 0x1fc);
        fVar25 = *(float *)(lVar14 + 0x170);
        fVar41 = (fVar21 - *(float *)(lVar14 + 0x6c)) - *(float *)(lVar14 + 0x1f8);
        fVar39 = fVar38 * fVar34 - fVar40 * fVar30;
        fVar42 = fVar41 * fVar30 - fVar38 * fVar26;
        fVar38 = fVar40 * fVar26 - fVar41 * fVar34;
        *(ulong *)(lVar14 + 0xd8) =
             CONCAT44(fVar30 * fVar25 + *(float *)(lVar14 + 0xdc),
                      fVar26 * fVar25 + *(float *)(lVar14 + 0xd8));
        *(ulong *)(lVar14 + 0xe0) =
             CONCAT44(*(float *)(lVar14 + 0x1b4) * fVar38 + fVar39 * *(float *)(lVar14 + 0x1b0) +
                      fVar42 * *(float *)(lVar14 + 0x1b8) + *(float *)(lVar14 + 0xe4),
                      fVar25 * fVar34 + *(float *)(lVar14 + 0xe0));
        *(ulong *)(lVar14 + 0xe8) =
             CONCAT44((float)((ulong)*(undefined8 *)(lVar14 + 0xe8) >> 0x20) +
                      (float)((ulong)*(undefined8 *)(lVar14 + 0x1cc) >> 0x20) * fVar42 +
                      fVar38 * *(float *)(lVar14 + 0x1cc) +
                      fVar39 * (float)((ulong)*(undefined8 *)(lVar14 + 0x1c4) >> 0x20),
                      (float)*(undefined8 *)(lVar14 + 0xe8) +
                      (float)*(undefined8 *)(lVar14 + 0x1c4) * fVar42 +
                      fVar38 * *(float *)(lVar14 + 0x1c0) +
                      fVar39 * (float)*(undefined8 *)(lVar14 + 0x1bc));
      }
      pGVar16 = pGVar16 + 0x40;
    } while (pGVar16 != this + 0x108);
  }
  fVar20 = *(float *)(lVar12 + 0xec);
  local_1c = (float)*(undefined8 *)(lVar12 + 0xe4);
  fStack_18 = (float)((ulong)*(undefined8 *)(lVar12 + 0xe4) >> 0x20);
  fVar28 = *(float *)(lVar14 + 0xec);
  local_28 = (float)*(undefined8 *)(lVar14 + 0xe4);
  fStack_24 = (float)((ulong)*(undefined8 *)(lVar14 + 0xe4) >> 0x20);
  if (this[0x1ba] != (GodotConeTwistJoint3D)0x0) {
    fVar27 = *(float *)(this + 0x1b0);
    fVar19 = (((local_28 - local_1c) * *(float *)(this + 0x184) +
               (fStack_24 - fStack_18) * *(float *)(this + 0x188) +
              (fVar28 - fVar20) * *(float *)(this + 0x18c)) * *(float *)(this + 0x174) *
              *(float *)(this + 0x174) +
             (_LC42._4_4_ / param_1) * *(float *)(this + 0x1a8) * *(float *)(this + 0x170)) *
             *(float *)(this + 0x19c) + fVar27;
    if (fVar19 <= 0.0) {
      fVar19 = 0.0;
    }
    *(float *)(this + 0x1b0) = fVar19;
    fVar19 = fVar19 - fVar27;
    fVar27 = *(float *)(this + 0x18c) * fVar19;
    fVar31 = *(float *)(this + 0x188) * fVar19;
    fVar19 = fVar19 * *(float *)(this + 0x184);
    if (this[0x30] != (GodotConeTwistJoint3D)0x0) {
      *(float *)(lVar12 + 0xec) =
           *(float *)(lVar12 + 0x1d0) * fVar27 +
           *(float *)(lVar12 + 0x1c8) * fVar19 + *(float *)(lVar12 + 0x1cc) * fVar31 +
           *(float *)(lVar12 + 0xec);
      *(ulong *)(lVar12 + 0xe4) =
           CONCAT44((float)((ulong)*(undefined8 *)(lVar12 + 0x1bc) >> 0x20) * fVar31 +
                    *(float *)(lVar12 + 0x1bc) * fVar19 + *(float *)(lVar12 + 0x1c4) * fVar27 +
                    (float)((ulong)*(undefined8 *)(lVar12 + 0xe4) >> 0x20),
                    (float)*(undefined8 *)(lVar12 + 0x1b4) * fVar31 +
                    *(float *)(lVar12 + 0x1b0) * fVar19 + *(float *)(lVar12 + 0x1b8) * fVar27 +
                    (float)*(undefined8 *)(lVar12 + 0xe4));
    }
    if (this[0x31] != (GodotConeTwistJoint3D)0x0) {
      fVar27 = (float)((uint)fVar27 ^ _LC17);
      fVar31 = (float)((uint)fVar31 ^ _LC17);
      fVar19 = (float)((uint)fVar19 ^ _LC17);
      *(float *)(lVar14 + 0xec) =
           *(float *)(lVar14 + 0x1d0) * fVar27 +
           *(float *)(lVar14 + 0x1c8) * fVar19 + *(float *)(lVar14 + 0x1cc) * fVar31 +
           *(float *)(lVar14 + 0xec);
      *(ulong *)(lVar14 + 0xe4) =
           CONCAT44((float)((ulong)*(undefined8 *)(lVar14 + 0x1bc) >> 0x20) * fVar31 +
                    fVar19 * *(float *)(lVar14 + 0x1bc) + *(float *)(lVar14 + 0x1c4) * fVar27 +
                    (float)((ulong)*(undefined8 *)(lVar14 + 0xe4) >> 0x20),
                    (float)*(undefined8 *)(lVar14 + 0x1b4) * fVar31 +
                    fVar19 * *(float *)(lVar14 + 0x1b0) + *(float *)(lVar14 + 0x1b8) * fVar27 +
                    (float)*(undefined8 *)(lVar14 + 0xe4));
    }
  }
  if (this[0x1b9] != (GodotConeTwistJoint3D)0x0) {
    fVar27 = *(float *)(this + 0x1b4);
    fVar20 = (((local_28 - local_1c) * *(float *)(this + 400) +
               (fStack_24 - fStack_18) * *(float *)(this + 0x194) +
              (fVar28 - fVar20) * *(float *)(this + 0x198)) * *(float *)(this + 0x174) *
              *(float *)(this + 0x174) +
             (_LC42._4_4_ / param_1) * *(float *)(this + 0x1ac) * *(float *)(this + 0x170)) *
             *(float *)(this + 0x1a0) + fVar27;
    if (fVar20 <= 0.0) {
      fVar20 = 0.0;
    }
    *(float *)(this + 0x1b4) = fVar20;
    fVar20 = fVar20 - fVar27;
    fVar28 = *(float *)(this + 0x198) * fVar20;
    fVar27 = *(float *)(this + 0x194) * fVar20;
    fVar20 = fVar20 * *(float *)(this + 400);
    if (this[0x30] != (GodotConeTwistJoint3D)0x0) {
      *(float *)(lVar12 + 0xec) =
           *(float *)(lVar12 + 0x1d0) * fVar28 +
           *(float *)(lVar12 + 0x1c8) * fVar20 + *(float *)(lVar12 + 0x1cc) * fVar27 +
           *(float *)(lVar12 + 0xec);
      *(ulong *)(lVar12 + 0xe4) =
           CONCAT44((float)((ulong)*(undefined8 *)(lVar12 + 0x1bc) >> 0x20) * fVar27 +
                    *(float *)(lVar12 + 0x1bc) * fVar20 + *(float *)(lVar12 + 0x1c4) * fVar28 +
                    (float)((ulong)*(undefined8 *)(lVar12 + 0xe4) >> 0x20),
                    (float)*(undefined8 *)(lVar12 + 0x1b4) * fVar27 +
                    *(float *)(lVar12 + 0x1b0) * fVar20 + *(float *)(lVar12 + 0x1b8) * fVar28 +
                    (float)*(undefined8 *)(lVar12 + 0xe4));
    }
    if (this[0x31] != (GodotConeTwistJoint3D)0x0) {
      fVar28 = (float)((uint)fVar28 ^ _LC17);
      fVar27 = (float)((uint)fVar27 ^ _LC17);
      fVar20 = (float)((uint)fVar20 ^ _LC17);
      *(float *)(lVar14 + 0xec) =
           *(float *)(lVar14 + 0x1d0) * fVar28 +
           *(float *)(lVar14 + 0x1c8) * fVar20 + *(float *)(lVar14 + 0x1cc) * fVar27 +
           *(float *)(lVar14 + 0xec);
      *(ulong *)(lVar14 + 0xe4) =
           CONCAT44((float)((ulong)*(undefined8 *)(lVar14 + 0x1bc) >> 0x20) * fVar27 +
                    fVar20 * *(float *)(lVar14 + 0x1bc) + *(float *)(lVar14 + 0x1c4) * fVar28 +
                    (float)((ulong)*(undefined8 *)(lVar14 + 0xe4) >> 0x20),
                    (float)*(undefined8 *)(lVar14 + 0x1b4) * fVar27 +
                    fVar20 * *(float *)(lVar14 + 0x1b0) + *(float *)(lVar14 + 0x1b8) * fVar28 +
                    (float)*(undefined8 *)(lVar14 + 0xe4));
    }
  }
  if (lVar13 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
            if (*(long **)(this + 0x20) != plVar34) goto LAB_00100dd9;
          }
          else if (*(long **)(this + 0x20) != plVar34) {
LAB_00100dd9:
            plVar10 = (long *)plVar34[1];
            goto joined_r0x00100de0;
          }
          *(long *)(this + 0x20) = plVar34[1];
          plVar34 = (long *)*plVar4;
          plVar10 = (long *)plVar34[1];
joined_r0x00100de0:
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GodotConeTwistJoint3D::setup(float) */

byte GodotConeTwistJoint3D::setup(float param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  undefined8 *puVar8;
  float *pfVar9;
  float fVar10;
  long in_RDI;
  char *pcVar11;
  void *pvVar12;
  long lVar13;
  long lVar14;
  long in_FS_OFFSET;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar20;
  undefined1 auVar19 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined8 uVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar32;
  undefined1 auVar33 [16];
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float local_1e8;
  float local_1e0;
  float local_1dc;
  float local_1d4;
  float local_1d0;
  float local_1cc;
  float local_1b8;
  float fStack_1b4;
  long local_170;
  long local_168;
  long local_160;
  char *local_158;
  undefined8 local_150;
  undefined8 local_140;
  float local_138;
  undefined8 local_134;
  float local_12c;
  undefined8 local_128;
  float local_120;
  float local_11c;
  float fStack_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined8 local_c8;
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
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float fStack_54;
  float local_50;
  float fStack_4c;
  float local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar7 = GodotBody3D::get_mode();
  *(bool *)(in_RDI + 0x30) = 1 < iVar7;
  iVar7 = GodotBody3D::get_mode();
  *(bool *)(in_RDI + 0x31) = 1 < iVar7;
  local_1e8 = _LC42._4_4_;
  bVar5 = 1 < iVar7 | *(byte *)(in_RDI + 0x30);
  if (bVar5 == 0) goto LAB_00102210;
  *(undefined4 *)(in_RDI + 0x108) = 0;
  *(undefined8 *)(in_RDI + 0x1a4) = 0;
  *(undefined2 *)(in_RDI + 0x1b9) = 0;
  *(undefined8 *)(in_RDI + 0x1b0) = 0;
  if (*(char *)(in_RDI + 0x1b8) == '\0') {
    lVar14 = *(long *)(in_RDI + 0x38);
    lVar13 = *(long *)(in_RDI + 0x40);
    fVar26 = *(float *)(in_RDI + 0x130);
    fVar17 = *(float *)(in_RDI + 0x134);
    fVar15 = *(float *)(in_RDI + 0x138);
    fVar21 = *(float *)(in_RDI + 0x160);
    fVar32 = *(float *)(lVar14 + 0x74);
    fVar34 = *(float *)(lVar14 + 0x70);
    fVar16 = *(float *)(lVar13 + 0x74);
    fVar25 = *(float *)(lVar14 + 0x60) * fVar26 + *(float *)(lVar14 + 100) * fVar17 +
             *(float *)(lVar14 + 0x68) * fVar15 + fVar32;
    fVar22 = *(float *)(in_RDI + 0x168);
    fVar28 = *(float *)(lVar14 + 0x6c);
    fVar23 = *(float *)(in_RDI + 0x164);
    fVar27 = *(float *)(lVar14 + 0x54) * fVar26 + *(float *)(lVar14 + 0x58) * fVar17 +
             *(float *)(lVar14 + 0x5c) * fVar15 + fVar34;
    fVar15 = fVar26 * *(float *)(lVar14 + 0x48) + fVar17 * *(float *)(lVar14 + 0x4c) +
             fVar15 * *(float *)(lVar14 + 0x50) + fVar28;
    fVar17 = *(float *)(lVar13 + 0x70);
    fVar44 = *(float *)(lVar13 + 100) * fVar23 + *(float *)(lVar13 + 0x60) * fVar21 +
             *(float *)(lVar13 + 0x68) * fVar22 + fVar16;
    fVar26 = *(float *)(lVar13 + 0x6c);
    fVar42 = *(float *)(lVar13 + 0x58) * fVar23 + *(float *)(lVar13 + 0x54) * fVar21 +
             *(float *)(lVar13 + 0x5c) * fVar22 + fVar17;
    fVar43 = fVar42 - fVar27;
    local_11c = 0.0;
    local_114 = 0.0;
    local_120 = fVar44 - fVar25;
    fVar21 = fVar23 * *(float *)(lVar13 + 0x4c) + fVar21 * *(float *)(lVar13 + 0x48) +
             fVar22 * *(float *)(lVar13 + 0x50) + fVar26;
    fVar22 = fVar21 - fVar15;
    fVar23 = fVar43 * fVar43 + fVar22 * fVar22 + local_120 * local_120;
    if (_LC19 <= ABS(fVar23)) {
      if (fVar23 == 0.0) {
        local_128 = 0;
        goto LAB_00101120;
      }
      fVar23 = SQRT(fVar23);
      local_120 = local_120 / fVar23;
      fVar22 = fVar22 / fVar23;
      fVar43 = fVar43 / fVar23;
      local_110 = (float)((uint)local_120 ^ (uint)_LC17);
      local_128 = CONCAT44(fVar43,fVar22);
      if ((double)ABS(local_120) <= __LC20) {
        local_1e8 = _LC42._4_4_;
        goto LAB_00101135;
      }
      local_1e8 = _LC42._4_4_;
      fVar23 = local_120 * local_120 + fVar43 * fVar43;
      fVar35 = _LC42._4_4_ / SQRT(fVar23);
      fStack_118 = local_110 * fVar35;
      local_114 = fVar43 * fVar35;
      local_110 = fVar35 * fVar23;
      local_108 = fStack_118 * fVar22;
      local_10c = (float)((uint)fVar22 ^ (uint)_LC17) * local_114;
    }
    else {
      local_128 = (ulong)(uint)local_1e8;
LAB_00101120:
      local_120 = 0.0;
      local_110 = _LC17;
LAB_00101135:
      local_108 = (float)local_128 * (float)local_128 + local_128._4_4_ * local_128._4_4_;
      fVar22 = local_1e8 / SQRT(local_108);
      fStack_118 = (float)local_128 * fVar22;
      local_11c = (float)((uint)local_128._4_4_ ^ (uint)_LC17) * fVar22;
      local_108 = local_108 * fVar22;
      local_110 = fStack_118 * local_110;
      local_10c = local_11c * local_120;
    }
    uVar24 = 0;
    pfVar9 = (float *)(in_RDI + 0x48);
    puVar8 = &local_128;
    fVar22 = _LC17;
    while( true ) {
      uVar29 = *(undefined8 *)(lVar13 + 0x1f8);
      local_12c = *(float *)(lVar13 + 0x200);
      local_134._4_4_ = (float)((ulong)uVar29 >> 0x20);
      fVar43 = (fVar42 - fVar17) - local_134._4_4_;
      uVar2 = *(undefined8 *)(lVar14 + 0x1f8);
      fVar37 = (fVar44 - fVar16) - local_12c;
      local_134._0_4_ = (float)uVar29;
      fVar38 = (fVar21 - fVar26) - (float)local_134;
      local_138 = *(float *)(lVar14 + 0x200);
      local_140._4_4_ = (float)((ulong)uVar2 >> 0x20);
      fVar16 = (fVar27 - fVar34) - local_140._4_4_;
      local_140._0_4_ = (float)uVar2;
      fVar35 = (fVar15 - fVar28) - (float)local_140;
      fVar26 = *(float *)(lVar13 + 0x170);
      fVar17 = *(float *)(lVar14 + 0x170);
      fVar41 = (fVar25 - fVar32) - local_138;
      local_98 = *(undefined8 *)(lVar13 + 0x1d4);
      uStack_90 = *(undefined8 *)(lVar13 + 0x1dc);
      local_88 = *(undefined8 *)(lVar13 + 0x1e4);
      uStack_80 = *(undefined8 *)(lVar13 + 0x1ec);
      local_78 = *(undefined4 *)(lVar13 + 500);
      local_140 = uVar2;
      local_134 = uVar29;
      Basis::transposed();
      lVar3 = *(long *)(in_RDI + 0x38);
      local_f8 = *(undefined8 *)(lVar3 + 0x1d4);
      uStack_f0 = *(undefined8 *)(lVar3 + 0x1dc);
      local_e8 = *(undefined8 *)(lVar3 + 0x1e4);
      uStack_e0 = *(undefined8 *)(lVar3 + 0x1ec);
      local_d8 = *(undefined4 *)(lVar3 + 500);
      Basis::transposed();
      uVar29 = *puVar8;
      pfVar9[9] = 0.0;
      pfVar9[10] = 0.0;
      pfVar9[0xb] = 0.0;
      *(undefined8 *)pfVar9 = uVar29;
      fVar32 = pfVar9[1];
      fVar23 = *pfVar9;
      fVar28 = *(float *)(puVar8 + 1);
      pfVar9[0xc] = 0.0;
      pfVar9[0xd] = 0.0;
      pfVar9[2] = fVar28;
      pfVar9[0xe] = 0.0;
      fVar34 = fVar35 * fVar32 - fVar16 * fVar23;
      fVar28 = pfVar9[2];
      fVar35 = fVar41 * fVar23 - fVar35 * fVar28;
      fVar16 = fVar16 * fVar28 - fVar41 * fVar32;
      fVar41 = local_b0 * fVar16 + local_ac * fVar35 + local_a8 * fVar34;
      pfVar9[5] = fVar41;
      fVar36 = local_bc * fVar16 + local_b8 * fVar35 + local_b4 * fVar34;
      fVar16 = fVar16 * (float)local_c8 + fVar35 * local_c8._4_4_ + fVar34 * local_c0;
      pfVar9[4] = fVar36;
      pfVar9[3] = fVar16;
      fVar40 = fVar38 * (float)((uint)fVar32 ^ (uint)fVar22) -
               fVar43 * (float)((uint)fVar23 ^ (uint)fVar22);
      fVar34 = (float)((uint)fVar23 ^ (uint)fVar22) * fVar37 -
               fVar38 * (float)((uint)fVar28 ^ (uint)fVar22);
      fVar23 = fVar43 * (float)((uint)fVar28 ^ (uint)fVar22) -
               fVar37 * (float)((uint)fVar32 ^ (uint)fVar22);
      fVar38 = *(float *)(lVar14 + 0x178) * fVar36;
      fVar39 = *(float *)(lVar14 + 0x174) * fVar16;
      pfVar9[10] = fVar38;
      pfVar9[9] = fVar39;
      fVar37 = *(float *)(lVar14 + 0x17c) * fVar41;
      fVar43 = local_58 * fVar34 + local_5c * fVar23 + fStack_54 * fVar40;
      fVar35 = fStack_4c * fVar34 + local_50 * fVar23 + local_48 * fVar40;
      fVar32 = *(float *)(lVar13 + 0x174);
      pfVar9[0xb] = fVar37;
      *(ulong *)(pfVar9 + 7) = CONCAT44(fVar35,fVar43);
      fVar23 = fVar23 * local_68 + fVar34 * local_64 + local_60 * fVar40;
      fVar28 = (float)*(undefined8 *)(lVar13 + 0x178) * fVar43;
      fVar34 = (float)((ulong)*(undefined8 *)(lVar13 + 0x178) >> 0x20) * fVar35;
      fVar32 = fVar32 * fVar23;
      pfVar9[6] = fVar23;
      *(ulong *)(pfVar9 + 0xd) = CONCAT44(fVar34,fVar28);
      pfVar9[0xc] = fVar32;
      fVar26 = fVar23 * fVar32 + fVar28 * fVar43 + fVar34 * fVar35 +
               fVar16 * fVar39 + fVar36 * fVar38 + fVar41 * fVar37 + fVar17 + fVar26;
      pfVar9[0xf] = fVar26;
      if (fVar26 <= 0.0) {
        _err_print_error("GodotJacobianEntry3D",
                         "modules/godot_physics_3d/joints/godot_jacobian_entry_3d.h",0x4b,
                         "Condition \"m_Adiag <= real_t(0.0)\" is true.",0,0,fVar22,uVar24);
      }
      pfVar9 = pfVar9 + 0x10;
      puVar8 = (undefined8 *)((long)puVar8 + 0xc);
      if (pfVar9 == (float *)(in_RDI + 0x108)) break;
      lVar13 = *(long *)(in_RDI + 0x40);
      lVar14 = *(long *)(in_RDI + 0x38);
      fVar16 = *(float *)(lVar13 + 0x74);
      fVar32 = *(float *)(lVar14 + 0x74);
      fVar34 = *(float *)(lVar14 + 0x70);
      fVar28 = *(float *)(lVar14 + 0x6c);
      fVar17 = *(float *)(lVar13 + 0x70);
      fVar26 = *(float *)(lVar13 + 0x6c);
    }
  }
  lVar14 = *(long *)(in_RDI + 0x38);
  lVar13 = *(long *)(in_RDI + 0x40);
  fVar26 = *(float *)(lVar14 + 0x60);
  fVar40 = (float)*(undefined8 *)(in_RDI + 0x114);
  fVar32 = (float)((ulong)*(undefined8 *)(in_RDI + 0x114) >> 0x20);
  fVar17 = *(float *)(lVar14 + 0x68);
  fVar21 = (float)*(undefined8 *)(in_RDI + 0x10c);
  fVar45 = (float)*(undefined8 *)(lVar14 + 0x60);
  fVar36 = (float)((ulong)*(undefined8 *)(lVar14 + 0x60) >> 0x20);
  fVar39 = (float)((ulong)*(undefined8 *)(lVar14 + 0x48) >> 0x20);
  fVar37 = (float)*(undefined8 *)(lVar14 + 0x48);
  fVar15 = (float)*(undefined8 *)(in_RDI + 0x124);
  fVar41 = (float)*(undefined8 *)(lVar14 + 0x58);
  local_c0 = *(float *)(lVar14 + 100) * fVar32 + fVar21 * fVar26 + fVar15 * fVar17;
  fVar16 = *(float *)(lVar14 + 0x4c) * fVar32 + fVar21 * fVar37 +
           fVar15 * (float)*(undefined8 *)(lVar14 + 0x50);
  fVar43 = *(float *)(lVar14 + 0x58) * fVar32 +
           fVar21 * (float)((ulong)*(undefined8 *)(lVar14 + 0x50) >> 0x20) +
           fVar15 * (float)((ulong)*(undefined8 *)(lVar14 + 0x58) >> 0x20);
  local_c8 = CONCAT44(fVar43,fVar16);
  uVar2 = *(undefined8 *)(lVar13 + 0x60);
  fVar23 = *(float *)(lVar13 + 0x68);
  uVar4 = *(undefined8 *)(lVar13 + 0x48);
  fVar34 = (float)*(undefined8 *)(in_RDI + 0x154);
  fVar15 = *(float *)(lVar13 + 0x54);
  uVar29 = *(undefined8 *)(lVar13 + 0x58);
  fVar42 = (float)((ulong)*(undefined8 *)(in_RDI + 0x144) >> 0x20);
  fVar25 = (float)*(undefined8 *)(in_RDI + 0x13c);
  fVar28 = (float)((ulong)uVar2 >> 0x20);
  fVar21 = *(float *)(lVar13 + 0x5c);
  fVar35 = *(float *)(lVar13 + 0x60) * fVar25 + fVar28 * fVar42 + fVar23 * fVar34;
  fVar32 = *(float *)(lVar13 + 0x50);
  uStack_90 = CONCAT44(uStack_90._4_4_,fVar35);
  fVar38 = (float)uVar4;
  fVar22 = *(float *)(in_RDI + 0x178);
  fVar27 = *(float *)(lVar13 + 0x4c) * fVar42 + fVar38 * fVar25 +
           (float)*(undefined8 *)(lVar13 + 0x50) * fVar34;
  fVar44 = *(float *)(lVar13 + 0x58) * fVar42 +
           (float)((ulong)*(undefined8 *)(lVar13 + 0x50) >> 0x20) * fVar25 +
           (float)((ulong)uVar29 >> 0x20) * fVar34;
  local_98 = CONCAT44(fVar44,fVar27);
  if (__LC24 <= fVar22) {
    fVar10 = *(float *)(in_RDI + 0x128);
    fVar18 = (float)((ulong)*(undefined8 *)(in_RDI + 0x118) >> 0x20);
    fVar46 = (float)*(undefined8 *)(in_RDI + 0x110);
    local_1b8 = *(float *)(lVar14 + 0x54) * fVar46 + fVar41 * fVar18 +
                *(float *)(lVar14 + 0x5c) * fVar10;
    fStack_1b4 = fVar26 * fVar46 + fVar36 * fVar18 + fVar17 * fVar10;
    local_1e0 = fVar18 * fVar36 + fVar46 * fVar45 + fVar10 * fVar17;
    local_1dc = fVar18 * fVar39 + fVar46 * fVar37 + fVar10 * *(float *)(lVar14 + 0x50);
    fVar46 = fVar16 * fVar27 + fVar43 * fVar44 + local_c0 * fVar35;
    fVar18 = local_1e0 * fVar35 + local_1b8 * fVar44 + local_1dc * fVar27;
    fVar10 = ABS(fVar18);
    if (fVar46 < 0.0) {
      fVar10 = _LC26 - ((fVar10 + fVar46) / (fVar10 - fVar46)) * _LC25;
    }
    else {
      fVar10 = _LC25 - ((fVar46 - fVar10) / (fVar10 + fVar46)) * _LC25;
    }
    fVar18 = (fVar18 * fVar18 + fVar46 * fVar46) * _LC27 * _LC27;
    fVar10 = (fVar18 / (local_1e8 + fVar18)) * fVar10;
    fVar10 = ABS(fVar10 * fVar10);
  }
  else {
    local_1b8 = 0.0;
    fStack_1b4 = 0.0;
    fVar10 = 0.0;
    local_1dc = 0.0;
    local_1e0 = 0.0;
  }
  fVar18 = *(float *)(in_RDI + 0x17c);
  if (fVar18 < __LC24) {
    fVar26 = 0.0;
    fVar41 = 0.0;
    local_1d0 = 0.0;
    local_1cc = 0.0;
    local_1d4 = 0.0;
  }
  else {
    fVar46 = *(float *)(in_RDI + 300);
    fVar20 = (float)((ulong)*(undefined8 *)(in_RDI + 0x11c) >> 0x20);
    local_1cc = *(float *)(lVar14 + 0x54) * fVar40 + fVar41 * fVar20 +
                *(float *)(lVar14 + 0x5c) * fVar46;
    fVar41 = fVar26 * fVar40 + fVar36 * fVar20 + fVar17 * fVar46;
    local_1d4 = fVar40 * fVar45 + fVar20 * fVar36 + fVar46 * fVar17;
    local_1d0 = fVar40 * fVar37 + fVar20 * fVar39 + fVar46 * *(float *)(lVar14 + 0x50);
    fVar36 = fVar16 * fVar27 + fVar43 * fVar44 + local_c0 * fVar35;
    fVar17 = local_1d4 * fVar35 + local_1cc * fVar44 + local_1d0 * fVar27;
    fVar26 = ABS(fVar17);
    if (fVar36 < 0.0) {
      fVar26 = _LC26 - ((fVar26 + fVar36) / (fVar26 - fVar36)) * _LC25;
    }
    else {
      fVar26 = _LC25 - _LC25 * ((fVar36 - fVar26) / (fVar26 + fVar36));
    }
    fVar17 = (fVar17 * fVar17 + fVar36 * fVar36) * _LC27 * _LC27;
    fVar26 = (fVar17 / (local_1e8 + fVar17)) * fVar26;
    fVar26 = ABS(fVar26 * fVar26);
  }
  fVar26 = fVar10 * (local_1e8 / (fVar22 * fVar22)) + fVar26 * (local_1e8 / (fVar18 * fVar18));
  if (local_1e8 < fVar26) {
    *(undefined1 *)(in_RDI + 0x1ba) = 1;
    *(float *)(in_RDI + 0x1a8) = fVar26 - local_1e8;
    fVar26 = local_1d0 * fVar27 + local_1cc * fVar44 + local_1d4 * fVar35;
    fVar39 = local_1dc * fVar27 + local_1b8 * fVar44 + local_1e0 * fVar35;
    fVar37 = (float)((ulong)uVar4 >> 0x20);
    fVar22 = (float)uVar2;
    fVar36 = local_1cc * fVar26 + local_1b8 * fVar39;
    fVar17 = fVar26 * local_1d0 + fVar39 * local_1dc;
    auVar31._0_4_ =
         (fVar15 * fVar25 + (float)uVar29 * fVar42 + fVar21 * fVar34) *
         (fVar26 * local_1d4 + fVar39 * local_1e0) -
         (fVar22 * fVar25 + fVar28 * fVar42 + fVar23 * fVar34) * fVar36;
    auVar31._4_4_ =
         fVar35 * fVar17 -
         (fVar38 * fVar25 + fVar37 * fVar42 + fVar32 * fVar34) *
         (fVar41 * fVar26 + fStack_1b4 * fVar39);
    auVar31._8_4_ = 0.0 - (fVar28 * 0.0 + fVar22 * 0.0 + 0.0) * 0.0;
    auVar31._12_4_ = 0.0 - (fVar37 * 0.0 + fVar38 * 0.0 + 0.0) * 0.0;
    fVar15 = fVar36 * fVar27 - fVar17 * fVar44;
    fVar17 = auVar31._4_4_ * auVar31._4_4_ + auVar31._0_4_ * auVar31._0_4_ + fVar15 * fVar15;
    fVar26 = 0.0;
    uVar29 = 0;
    if (fVar17 != 0.0) {
      fVar17 = SQRT(fVar17);
      fVar26 = fVar15 / fVar17;
      auVar19._4_4_ = fVar17;
      auVar19._0_4_ = fVar17;
      auVar19._8_8_ = _LC9;
      auVar31 = divps(auVar31,auVar19);
      uVar29 = auVar31._0_8_;
    }
    if (fVar27 * fVar16 + fVar44 * fVar43 + local_c0 * fVar35 < 0.0) {
      fVar26 = (float)((uint)fVar26 ^ (uint)_LC17);
      uVar29 = CONCAT44((uint)((ulong)uVar29 >> 0x20) ^ _LC18._4_4_,(uint)uVar29 ^ (uint)_LC18);
    }
    *(undefined8 *)(in_RDI + 0x184) = uVar29;
    fVar15 = (float)uVar29;
    *(float *)(in_RDI + 0x18c) = fVar26;
    fVar17 = (float)((ulong)uVar29 >> 0x20);
    *(float *)(in_RDI + 0x19c) =
         local_1e8 /
         ((*(float *)(lVar13 + 0x1b0) * fVar15 + *(float *)(lVar13 + 0x1bc) * fVar17 +
          *(float *)(lVar13 + 0x1c8) * fVar26) * fVar15 +
          (*(float *)(lVar13 + 0x1b4) * fVar15 + *(float *)(lVar13 + 0x1c0) * fVar17 +
          *(float *)(lVar13 + 0x1cc) * fVar26) * fVar17 +
          (*(float *)(lVar13 + 0x1b8) * fVar15 + *(float *)(lVar13 + 0x1c4) * fVar17 +
          *(float *)(lVar13 + 0x1d0) * fVar26) * fVar26 +
         (*(float *)(lVar14 + 0x1b0) * fVar15 + *(float *)(lVar14 + 0x1bc) * fVar17 +
         *(float *)(lVar14 + 0x1c8) * fVar26) * fVar15 +
         (*(float *)(lVar14 + 0x1b4) * fVar15 + *(float *)(lVar14 + 0x1c0) * fVar17 +
         *(float *)(lVar14 + 0x1cc) * fVar26) * fVar17 +
         (fVar15 * *(float *)(lVar14 + 0x1b8) + fVar17 * *(float *)(lVar14 + 0x1c4) +
         *(float *)(lVar14 + 0x1d0) * fVar26) * fVar26);
  }
  if (0.0 <= *(float *)(in_RDI + 0x180)) {
    fVar26 = *(float *)(in_RDI + 0x14c);
    fVar17 = *(float *)(in_RDI + 0x140);
    fVar15 = *(float *)(in_RDI + 0x158);
    fVar21 = *(float *)(lVar13 + 0x60) * fVar17 + *(float *)(lVar13 + 100) * fVar26 +
             *(float *)(lVar13 + 0x68) * fVar15;
    fVar32 = *(float *)(lVar13 + 0x54) * fVar17 + *(float *)(lVar13 + 0x58) * fVar26 +
             *(float *)(lVar13 + 0x5c) * fVar15;
    fVar26 = fVar17 * *(float *)(lVar13 + 0x48) + fVar26 * *(float *)(lVar13 + 0x4c) +
             fVar15 * *(float *)(lVar13 + 0x50);
    Quaternion::Quaternion((Quaternion *)&local_68,(Vector3 *)&local_98,(Vector3 *)&local_c8);
    cVar6 = Quaternion::is_normalized();
    if (cVar6 == '\0') {
      local_158 = " must be normalized.";
      local_160 = 0;
      local_150 = 0x14;
      String::parse_latin1((StrRange *)&local_160);
      Quaternion::operator_cast_to_String((Quaternion *)&local_170);
      operator+((char *)&local_168,"The quaternion ");
      String::operator+((String *)&local_158,(String *)&local_168);
      _err_print_error("xform","./core/math/quaternion.h",0x5c,
                       "Condition \"!is_normalized()\" is true. Returning: p_v",(String *)&local_158
                       ,0,0);
      if (local_158 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_158 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          pcVar11 = local_158 + -0x10;
          local_158 = (char *)0x0;
          Memory::free_static(pcVar11,false);
        }
      }
      if (local_168 != 0) {
        LOCK();
        plVar1 = (long *)(local_168 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          pvVar12 = (void *)(local_168 + -0x10);
          local_168 = 0;
          Memory::free_static(pvVar12,false);
        }
      }
      if (local_170 != 0) {
        LOCK();
        plVar1 = (long *)(local_170 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          pvVar12 = (void *)(local_170 + -0x10);
          local_170 = 0;
          Memory::free_static(pvVar12,false);
        }
      }
      if (local_160 != 0) {
        LOCK();
        plVar1 = (long *)(local_160 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          pvVar12 = (void *)(local_160 + -0x10);
          local_160 = 0;
          Memory::free_static(pvVar12,false);
        }
      }
    }
    else {
      fVar23 = local_68 * fVar32 - local_64 * fVar26;
      fVar22 = local_60 * fVar26 - local_68 * fVar21;
      fVar15 = local_64 * fVar21 - local_60 * fVar32;
      fVar17 = (local_68 * fVar22 - local_64 * fVar15) + fVar23 * local_5c;
      fVar21 = fVar21 + fVar17 + fVar17;
      fVar17 = (local_64 * fVar23 - local_60 * fVar22) + fVar15 * local_5c;
      fVar15 = (local_60 * fVar15 - local_68 * fVar23) + fVar22 * local_5c;
      fVar26 = fVar26 + fVar17 + fVar17;
      fVar32 = fVar32 + fVar15 + fVar15;
    }
    fVar17 = (float)_LC16;
    fVar15 = _LC17;
    fVar22 = local_1dc * fVar26 + local_1b8 * fVar32 + local_1e0 * fVar21;
    fVar21 = fVar26 * local_1d0 + fVar32 * local_1cc + fVar21 * local_1d4;
    fVar26 = ABS(fVar21);
    if (fVar22 < 0.0) {
      fVar26 = _LC26 - _LC25 * ((fVar26 + fVar22) / (fVar26 - fVar22));
    }
    else {
      fVar26 = _LC25 - ((fVar22 - fVar26) / (fVar26 + fVar22)) * _LC25;
    }
    if (fVar21 < 0.0) {
      fVar26 = (float)((uint)fVar26 ^ (uint)_LC17);
    }
    fVar21 = *(float *)(in_RDI + 0x180);
    fVar32 = 0.0;
    if (__LC24 < fVar21) {
      fVar32 = *(float *)(in_RDI + 0x16c);
    }
    fVar32 = (float)((uint)fVar21 ^ (uint)_LC17) * fVar32;
    if (fVar26 <= fVar32) {
      *(undefined1 *)(in_RDI + 0x1b9) = 1;
      *(uint *)(in_RDI + 0x1ac) = (uint)(fVar21 + fVar26) ^ (uint)fVar15;
      auVar30._0_4_ = ((float)local_98 + (float)local_c8) * (float)_LC16;
      auVar30._4_4_ = (local_98._4_4_ + local_c8._4_4_) * _LC16._4_4_;
      auVar30._8_8_ = 0;
      fVar26 = ((float)uStack_90 + local_c0) * (float)_LC16;
      fVar17 = auVar30._0_4_ * auVar30._0_4_ + auVar30._4_4_ * auVar30._4_4_ + fVar26 * fVar26;
      if (fVar17 == 0.0) {
        uVar29 = CONCAT44(_LC18._4_4_,(uint)_LC18);
        fVar15 = _LC17;
      }
      else {
        fVar17 = SQRT(fVar17);
        auVar33._4_4_ = fVar17;
        auVar33._0_4_ = fVar17;
        auVar33._8_8_ = _LC9;
        auVar31 = divps(auVar30,auVar33);
        fVar15 = (float)((uint)(fVar26 / fVar17) ^ (uint)fVar15);
        uVar29 = CONCAT44(auVar31._4_4_ ^ _LC18._4_4_,auVar31._0_4_ ^ (uint)_LC18);
      }
      lVar14 = *(long *)(in_RDI + 0x40);
      *(undefined8 *)(in_RDI + 400) = uVar29;
      fVar17 = (float)uVar29;
      lVar13 = *(long *)(in_RDI + 0x38);
      *(float *)(in_RDI + 0x198) = fVar15;
      fVar26 = (float)((ulong)uVar29 >> 0x20);
      *(float *)(in_RDI + 0x1a0) =
           local_1e8 /
           ((*(float *)(lVar14 + 0x1b0) * fVar17 + *(float *)(lVar14 + 0x1bc) * fVar26 +
            *(float *)(lVar14 + 0x1c8) * fVar15) * fVar17 +
            (*(float *)(lVar14 + 0x1b4) * fVar17 + *(float *)(lVar14 + 0x1c0) * fVar26 +
            *(float *)(lVar14 + 0x1cc) * fVar15) * fVar26 +
            (*(float *)(lVar14 + 0x1b8) * fVar17 + *(float *)(lVar14 + 0x1c4) * fVar26 +
            *(float *)(lVar14 + 0x1d0) * fVar15) * fVar15 +
           (*(float *)(lVar13 + 0x1b0) * fVar17 + *(float *)(lVar13 + 0x1bc) * fVar26 +
           *(float *)(lVar13 + 0x1c8) * fVar15) * fVar17 +
           (*(float *)(lVar13 + 0x1b4) * fVar17 + *(float *)(lVar13 + 0x1c0) * fVar26 +
           *(float *)(lVar13 + 0x1cc) * fVar15) * fVar26 +
           (fVar17 * *(float *)(lVar13 + 0x1b8) + fVar26 * *(float *)(lVar13 + 0x1c4) +
           *(float *)(lVar13 + 0x1d0) * fVar15) * fVar15);
    }
    else if ((float)((uint)fVar32 ^ (uint)_LC17) < fVar26) {
      *(undefined1 *)(in_RDI + 0x1b9) = 1;
      *(float *)(in_RDI + 0x1ac) = fVar26 - fVar21;
      fVar26 = ((float)local_98 + (float)local_c8) * fVar17;
      fVar21 = ((float)uStack_90 + local_c0) * fVar17;
      fVar17 = (local_98._4_4_ + local_c8._4_4_) * fVar17;
      *(float *)(in_RDI + 0x194) = fVar17;
      fVar15 = fVar26 * fVar26 + fVar17 * fVar17 + fVar21 * fVar21;
      if (fVar15 == 0.0) {
        *(undefined4 *)(in_RDI + 0x198) = 0;
        fVar21 = 0.0;
        fVar17 = 0.0;
        fVar26 = 0.0;
        *(undefined8 *)(in_RDI + 400) = 0;
      }
      else {
        fVar15 = SQRT(fVar15);
        fVar26 = fVar26 / fVar15;
        fVar17 = fVar17 / fVar15;
        *(float *)(in_RDI + 400) = fVar26;
        fVar21 = fVar21 / fVar15;
        *(float *)(in_RDI + 0x194) = fVar17;
        *(float *)(in_RDI + 0x198) = fVar21;
      }
      lVar14 = *(long *)(in_RDI + 0x40);
      lVar13 = *(long *)(in_RDI + 0x38);
      *(float *)(in_RDI + 0x1a0) =
           local_1e8 /
           ((*(float *)(lVar14 + 0x1b8) * fVar26 + *(float *)(lVar14 + 0x1c4) * fVar17 +
            *(float *)(lVar14 + 0x1d0) * fVar21) * fVar21 +
            (*(float *)(lVar14 + 0x1b0) * fVar26 + *(float *)(lVar14 + 0x1bc) * fVar17 +
            *(float *)(lVar14 + 0x1c8) * fVar21) * fVar26 +
            (*(float *)(lVar14 + 0x1b4) * fVar26 + *(float *)(lVar14 + 0x1c0) * fVar17 +
            *(float *)(lVar14 + 0x1cc) * fVar21) * fVar17 +
           (fVar26 * *(float *)(lVar13 + 0x1b8) + fVar17 * *(float *)(lVar13 + 0x1c4) +
           *(float *)(lVar13 + 0x1d0) * fVar21) * fVar21 +
           (*(float *)(lVar13 + 0x1b0) * fVar26 + *(float *)(lVar13 + 0x1bc) * fVar17 +
           *(float *)(lVar13 + 0x1c8) * fVar21) * fVar26 +
           (*(float *)(lVar13 + 0x1b4) * fVar26 + *(float *)(lVar13 + 0x1c0) * fVar17 +
           *(float *)(lVar13 + 0x1cc) * fVar21) * fVar17);
    }
  }
LAB_00102210:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar5;
}



/* GodotConeTwistJoint3D::set_param(PhysicsServer3D::ConeTwistJointParam, float) */

void __thiscall
GodotConeTwistJoint3D::set_param(undefined4 param_1,GodotConeTwistJoint3D *this,undefined4 param_3)

{
  switch(param_3) {
  case 0:
    *(ulong *)(this + 0x178) = CONCAT44(param_1,param_1);
    return;
  case 1:
    *(undefined4 *)(this + 0x180) = param_1;
    return;
  case 2:
    *(undefined4 *)(this + 0x170) = param_1;
    return;
  case 3:
    *(undefined4 *)(this + 0x16c) = param_1;
    return;
  case 4:
    *(undefined4 *)(this + 0x174) = param_1;
  }
  return;
}



/* GodotConeTwistJoint3D::get_param(PhysicsServer3D::ConeTwistJointParam) const */

undefined4 __thiscall
GodotConeTwistJoint3D::get_param(GodotConeTwistJoint3D *this,undefined4 param_2)

{
  switch(param_2) {
  case 0:
    return *(undefined4 *)(this + 0x178);
  case 1:
    return *(undefined4 *)(this + 0x180);
  case 2:
    return *(undefined4 *)(this + 0x170);
  case 3:
    return *(undefined4 *)(this + 0x16c);
  case 4:
    return *(undefined4 *)(this + 0x174);
  default:
    return 0;
  }
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GodotConeTwistJoint3D::GodotConeTwistJoint3D(GodotBody3D*, GodotBody3D*, Transform3D const&,
   Transform3D const&) */

void __thiscall
GodotConeTwistJoint3D::GodotConeTwistJoint3D
          (GodotConeTwistJoint3D *this,GodotBody3D *param_1,GodotBody3D *param_2,
          Transform3D *param_3,Transform3D *param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  GodotConeTwistJoint3D *pGVar12;
  GodotConeTwistJoint3D *pGVar13;
  undefined4 *puVar14;
  long in_FS_OFFSET;
  GodotConeTwistJoint3D *local_28;
  long local_20;
  
  uVar8 = _LC42._4_4_;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this[0x24] = (GodotConeTwistJoint3D)0x1;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x10) = 2;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x20) = 1;
  *(GodotConeTwistJoint3D **)(this + 8) = this + 0x38;
  *(undefined2 *)(this + 0x30) = 0;
  *(undefined ***)this = &PTR_get_soft_body_ptr_00103f10;
  pGVar12 = this + 0x48;
  do {
    *(undefined8 *)pGVar12 = 0;
    pGVar13 = pGVar12 + 0x40;
    *(undefined4 *)(pGVar12 + 8) = 0;
    *(undefined8 *)(pGVar12 + 0xc) = 0;
    *(undefined4 *)(pGVar12 + 0x14) = 0;
    *(undefined8 *)(pGVar12 + 0x18) = 0;
    *(undefined4 *)(pGVar12 + 0x20) = 0;
    *(undefined8 *)(pGVar12 + 0x24) = 0;
    *(undefined4 *)(pGVar12 + 0x2c) = 0;
    *(undefined8 *)(pGVar12 + 0x30) = 0;
    *(undefined4 *)(pGVar12 + 0x38) = 0;
    *(undefined4 *)(pGVar12 + 0x3c) = uVar8;
    uVar3 = _UNK_00104118;
    uVar2 = __LC41;
    pGVar12 = pGVar13;
  } while (this + 0x108 != pGVar13);
  *(GodotBody3D **)(this + 0x40) = param_2;
  uVar4 = CONCAT44(_LC42._4_4_,(undefined4)_LC42);
  *(GodotBody3D **)(this + 0x38) = param_1;
  *(undefined4 *)(this + 0x15c) = uVar8;
  uVar11 = _UNK_00104138;
  uVar10 = __LC44;
  *(undefined8 *)(this + 0x108) = uVar2;
  *(undefined8 *)(this + 0x110) = uVar3;
  uVar9 = _LC43;
  *(undefined8 *)(this + 0x128) = uVar4;
  *(undefined1 (*) [16])(this + 0x13c) = ZEXT416(uVar9);
  *(undefined1 (*) [16])(this + 0x14c) = ZEXT416(uVar9);
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined4 *)(this + 0x138) = 0;
  *(undefined8 *)(this + 0x160) = 0;
  *(undefined4 *)(this + 0x168) = 0;
  *(undefined8 *)(this + 0x184) = 0;
  *(undefined4 *)(this + 0x18c) = 0;
  *(undefined8 *)(this + 400) = 0;
  *(undefined4 *)(this + 0x198) = 0;
  uVar2 = *(undefined8 *)param_3;
  uVar3 = *(undefined8 *)(param_3 + 8);
  uVar4 = *(undefined8 *)(param_3 + 0x10);
  uVar5 = *(undefined8 *)(param_3 + 0x18);
  uVar6 = *(undefined8 *)(param_3 + 0x20);
  uVar7 = *(undefined8 *)(param_3 + 0x28);
  *(undefined8 *)(this + 0x16c) = uVar10;
  *(undefined8 *)(this + 0x174) = uVar11;
  *(undefined1 (*) [16])(this + 0x19c) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x10c) = uVar2;
  *(undefined8 *)(this + 0x114) = uVar3;
  *(undefined8 *)(this + 0x11c) = uVar4;
  *(undefined8 *)(this + 0x124) = uVar5;
  *(undefined8 *)(this + 300) = uVar6;
  *(undefined8 *)(this + 0x134) = uVar7;
  *(undefined2 *)(this + 0x1b8) = 0;
  *(undefined8 *)(this + 0x17c) = 0;
  *(undefined8 *)(this + 0x1ac) = 0;
  *(undefined4 *)(this + 0x1b4) = 0;
  this[0x1ba] = (GodotConeTwistJoint3D)0x0;
  uVar2 = *(undefined8 *)(param_4 + 8);
  uVar3 = *(undefined8 *)(param_4 + 0x10);
  uVar4 = *(undefined8 *)(param_4 + 0x18);
  uVar5 = *(undefined8 *)(param_4 + 0x20);
  uVar6 = *(undefined8 *)(param_4 + 0x28);
  *(undefined8 *)(this + 0x13c) = *(undefined8 *)param_4;
  *(undefined8 *)(this + 0x144) = uVar2;
  *(undefined8 *)(this + 0x14c) = uVar3;
  *(undefined8 *)(this + 0x154) = uVar4;
  *(undefined8 *)(this + 0x15c) = uVar5;
  *(undefined8 *)(this + 0x164) = uVar6;
  local_28 = this;
  puVar14 = (undefined4 *)
            HashMap<GodotConstraint3D*,int,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint3D*>,DefaultTypedAllocator<HashMapElement<GodotConstraint3D*,int>>>
            ::operator[]((HashMap<GodotConstraint3D*,int,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint3D*>,DefaultTypedAllocator<HashMapElement<GodotConstraint3D*,int>>>
                          *)(param_1 + 0x2f0),(GodotConstraint3D **)&local_28);
  lVar1 = *(long *)(this + 0x40);
  *puVar14 = 0;
  local_28 = this;
  puVar14 = (undefined4 *)
            HashMap<GodotConstraint3D*,int,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint3D*>,DefaultTypedAllocator<HashMapElement<GodotConstraint3D*,int>>>
            ::operator[]((HashMap<GodotConstraint3D*,int,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint3D*>,DefaultTypedAllocator<HashMapElement<GodotConstraint3D*,int>>>
                          *)(lVar1 + 0x2f0),(GodotConstraint3D **)&local_28);
  *puVar14 = 1;
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



/* GodotConeTwistJoint3D::get_type() const */

undefined8 GodotConeTwistJoint3D::get_type(void)

{
  return 3;
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
  *(undefined ***)this = &PTR_get_soft_body_ptr_00103ec0;
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



/* GodotConeTwistJoint3D::~GodotConeTwistJoint3D() */

void __thiscall GodotConeTwistJoint3D::~GodotConeTwistJoint3D(GodotConeTwistJoint3D *this)

{
  long lVar1;
  long lVar2;
  long in_FS_OFFSET;
  GodotConeTwistJoint3D *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR_get_soft_body_ptr_00103ec0;
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
  *(undefined ***)this = &PTR_get_soft_body_ptr_00103ec0;
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



/* GodotConeTwistJoint3D::~GodotConeTwistJoint3D() */

void __thiscall GodotConeTwistJoint3D::~GodotConeTwistJoint3D(GodotConeTwistJoint3D *this)

{
  long lVar1;
  long lVar2;
  long in_FS_OFFSET;
  GodotConeTwistJoint3D *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR_get_soft_body_ptr_00103ec0;
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
    operator_delete(this,0x1c0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Quaternion::Quaternion(Vector3 const&, Vector3 const&) */

void __thiscall Quaternion::Quaternion(Quaternion *this,Vector3 *param_1,Vector3 *param_2)

{
  ulong uVar1;
  long lVar2;
  char cVar3;
  long in_FS_OFFSET;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  uVar7 = CONCAT44(_LC42._4_4_,(undefined4)_LC42);
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)this = __LC4;
  *(undefined8 *)(this + 8) = uVar7;
  cVar3 = Vector3::is_zero_approx();
  if ((cVar3 != '\0') || (cVar3 = Vector3::is_zero_approx(), cVar3 != '\0')) {
    _err_print_error("Quaternion","./core/math/quaternion.h",0x91,
                     "Condition \"p_v0.is_zero_approx() || p_v1.is_zero_approx()\" is true.",
                     "The vectors must not be zero.",0,0);
    goto LAB_001032b3;
  }
  uVar1 = *(ulong *)param_1;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar1;
  fVar6 = *(float *)(param_1 + 8);
  fVar4 = (float)(uVar1 >> 0x20);
  fVar4 = (float)uVar1 * (float)uVar1 + fVar4 * fVar4 + fVar6 * fVar6;
  uVar7 = 0;
  fVar16 = 0.0;
  if (fVar4 != 0.0) {
    fVar4 = SQRT(fVar4);
    fVar16 = fVar6 / fVar4;
    auVar10._4_4_ = fVar4;
    auVar10._0_4_ = fVar4;
    auVar10._8_8_ = _LC9;
    auVar12 = divps(auVar12,auVar10);
    uVar7 = auVar12._0_8_;
  }
  fVar6 = *(float *)param_2;
  fVar4 = *(float *)(param_2 + 4);
  fVar9 = (float)uVar7;
  fVar13 = (float)((ulong)uVar7 >> 0x20);
  fVar14 = *(float *)(param_2 + 8);
  fVar5 = fVar6 * fVar6 + fVar4 * fVar4 + fVar14 * fVar14;
  if (fVar5 == 0.0) {
    fVar14 = fVar9 * 0.0;
    fVar13 = fVar13 * 0.0;
    fVar16 = fVar16 * 0.0;
    fVar5 = fVar14 + fVar13 + fVar16;
    fVar15 = fVar13;
    fVar4 = fVar14;
    fVar17 = fVar16;
  }
  else {
    fVar5 = SQRT(fVar5);
    fVar4 = fVar4 / fVar5;
    fVar6 = fVar6 / fVar5;
    fVar14 = fVar14 / fVar5;
    fVar5 = fVar6 * fVar9 + fVar4 * fVar13 + fVar14 * fVar16;
    if (__LC11 < (float)((uint)fVar5 & __LC10)) {
      if (0.0 <= fVar5) goto LAB_001032b3;
      cVar3 = Vector3::is_zero_approx();
      if (cVar3 == '\0') {
        fVar15 = fVar9 * 0.0;
        fVar5 = fVar13 * 0.0;
        fVar14 = fVar16 * 0.0;
        fVar4 = fVar16;
        fVar6 = fVar5;
        if ((ABS(fVar9) <= ABS(fVar13)) && (ABS(fVar9) <= ABS(fVar16))) {
          fVar9 = fVar15;
          fVar4 = fVar14;
          fVar6 = fVar13;
          fVar14 = fVar16;
        }
        auVar8._0_4_ = fVar5 - fVar4;
        fVar14 = fVar14 - fVar15;
        fVar9 = fVar9 - fVar6;
        fVar6 = auVar8._0_4_ * auVar8._0_4_ + fVar14 * fVar14 + fVar9 * fVar9;
        if (fVar6 == 0.0) goto LAB_001033c3;
        fVar6 = SQRT(fVar6);
        auVar8._4_4_ = fVar14;
        auVar8._8_8_ = 0;
        fVar9 = fVar9 / fVar6;
        auVar11._4_4_ = fVar6;
        auVar11._0_4_ = fVar6;
        auVar11._8_8_ = _LC9;
        auVar12 = divps(auVar8,auVar11);
        uVar7 = auVar12._0_8_;
      }
      else {
        _err_print_error("get_any_perpendicular","./core/math/vector3.h",0x150,
                         "Condition \"is_zero_approx()\" is true. Returning: Vector3(0, 0, 0)",
                         "The Vector3 must not be zero.",0,0);
LAB_001033c3:
        uVar7 = 0;
        fVar9 = 0.0;
      }
      *(undefined4 *)(this + 0xc) = 0;
      *(undefined8 *)this = uVar7;
      *(float *)(this + 8) = fVar9;
      goto LAB_001032b3;
    }
    fVar17 = fVar4 * fVar16;
    fVar15 = fVar14 * fVar13;
    fVar16 = fVar16 * fVar6;
    fVar14 = fVar14 * fVar9;
    fVar4 = fVar4 * fVar9;
    fVar13 = fVar6 * fVar13;
  }
  fVar6 = SQRT(fVar5 + _LC42._4_4_ + fVar5 + _LC42._4_4_);
  fVar9 = _LC42._4_4_ / fVar6;
  fVar6 = fVar6 * (float)_LC16;
  *(ulong *)this = CONCAT44((fVar16 - fVar14) * fVar9,(fVar15 - fVar17) * fVar9);
  *(ulong *)(this + 8) = CONCAT44(fVar6,fVar9 * (fVar4 - fVar13));
LAB_001032b3:
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotConeTwistJoint3D::get_param(PhysicsServer3D::ConeTwistJointParam) const [clone .cold] */

undefined8 GodotConeTwistJoint3D::get_param(void)

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
    lStack_90 = 0x103ce2;
    local_70 = (void *)Memory::alloc_static(uVar39,false);
    *(void **)(this + 8) = local_70;
    if (uVar47 == 0) {
      iVar43 = *(int *)(this + 0x2c);
      pGVar56 = *param_1;
      if (local_70 == (void *)0x0) goto LAB_0010380b;
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
        lStack_90 = 0x103d2a;
        memset(local_70,0,uVar39);
        iVar43 = *(int *)(this + 0x2c);
        pGVar56 = *param_1;
      }
    }
    if (iVar43 != 0) {
      uVar40 = (ulong)*(uint *)(this + 0x28);
      lVar52 = *(long *)(this + 0x10);
      goto LAB_00103bb3;
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
LAB_00103bb3:
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
            goto LAB_00103b94;
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
LAB_0010380b:
  if ((float)uVar55 * __LC34 < (float)(iVar43 + 1)) {
    uVar47 = *(uint *)(this + 0x28);
    if (uVar47 == 0x1c) {
      pauVar42 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_00103b94;
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
LAB_00103b94:
  auVar59._8_8_ = lStack_90;
  auVar59._0_8_ = pauVar42[1] + 8;
  return auVar59;
}



/* WARNING: Control flow encountered bad instruction data */
/* Quaternion::Quaternion(Vector3 const&, Vector3 const&) */

void __thiscall Quaternion::Quaternion(Quaternion *this,Vector3 *param_1,Vector3 *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* GodotConeTwistJoint3D::~GodotConeTwistJoint3D() */

void __thiscall GodotConeTwistJoint3D::~GodotConeTwistJoint3D(GodotConeTwistJoint3D *this)

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


