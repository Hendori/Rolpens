
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::ClosestPoint::GetBaryCentricCoordinates(JPH::Vec3, JPH::Vec3, JPH::Vec3, float&, float&,
   float&) [clone .isra.0] */

void JPH::ClosestPoint::GetBaryCentricCoordinates
               (undefined8 param_1,float param_2,undefined8 param_3,float param_4,undefined8 param_5
               ,float param_6,float *param_7,float *param_8,float *param_9)

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
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_18;
  undefined4 uStack_14;
  
  fVar2 = _LC3;
  fVar12 = (float)((ulong)param_5 >> 0x20);
  fVar11 = (float)param_5;
  local_18 = (float)param_3;
  uStack_14 = (float)((ulong)param_3 >> 0x20);
  local_38 = (float)param_1;
  uStack_34 = (float)((ulong)param_1 >> 0x20);
  fVar8 = local_18 - local_38;
  fVar9 = uStack_14 - uStack_34;
  fVar10 = param_4 - param_2;
  fVar5 = fVar11 - local_38;
  fVar6 = fVar12 - uStack_34;
  fVar7 = param_6 - param_2;
  fVar1 = fVar11 - local_18;
  fVar3 = fVar12 - uStack_14;
  fVar4 = param_6 - param_4;
  fVar15 = fVar10 * fVar10 + fVar9 * fVar9 + fVar8 * fVar8 + 0.0;
  fVar14 = fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5 + 0.0;
  fVar13 = fVar4 * fVar4 + fVar3 * fVar3 + fVar1 * fVar1 + 0.0;
  if (fVar13 < fVar15) {
    fVar15 = fVar4 * fVar7 + fVar6 * fVar3 + fVar5 * fVar1 + 0.0;
    fVar8 = fVar13 * fVar14 - fVar15 * fVar15;
    if (_LC1 <= fVar8) {
      fVar5 = fVar7 * param_6 + fVar6 * fVar12 + fVar5 * fVar11 + 0.0;
      fVar1 = fVar4 * param_6 + fVar12 * fVar3 + fVar11 * fVar1 + 0.0;
      fVar14 = (fVar1 * fVar14 - fVar15 * fVar5) / fVar8;
      *param_7 = (fVar13 * fVar5 - fVar15 * fVar1) / fVar8;
      *param_8 = fVar14;
      *param_9 = (fVar2 - *param_7) - fVar14;
      return;
    }
    if (fVar14 <= fVar13) {
      if (fVar13 < _LC2) {
        if (param_6 * param_6 + fVar12 * fVar12 + fVar11 * fVar11 + 0.0 <=
            param_4 * param_4 + uStack_14 * uStack_14 + local_18 * local_18 + 0.0) {
          *param_8 = 0.0;
          *param_9 = 1.0;
        }
        else {
          *param_8 = 1.0;
          *param_9 = 0.0;
        }
      }
      else {
        fVar13 = (float)((uint)(fVar4 * param_4 + uStack_14 * fVar3 + local_18 * fVar1 + 0.0) ^
                        __LC4) / fVar13;
        fVar2 = _LC3 - fVar13;
        *param_9 = fVar13;
        *param_8 = fVar2;
      }
      *param_7 = 0.0;
      return;
    }
    if (fVar14 < _LC2) {
      fVar2 = uStack_34 * uStack_34 + local_38 * local_38 + 0.0;
      goto LAB_0010047a;
    }
    fVar2 = uStack_34 * fVar6 + local_38 * fVar5 + 0.0;
  }
  else {
    fVar2 = fVar7 * fVar10 + fVar6 * fVar9 + fVar5 * fVar8 + 0.0;
    fVar1 = fVar14 * fVar15 - fVar2 * fVar2;
    if (_LC1 <= fVar1) {
      fVar13 = fVar10 * param_2 + fVar9 * uStack_34 + fVar8 * local_38 + 0.0;
      fVar3 = uStack_34 * fVar6 + local_38 * fVar5 + 0.0 + param_2 * fVar7;
      fVar15 = (fVar2 * fVar13 - fVar3 * fVar15) / fVar1;
      *param_8 = (fVar2 * fVar3 - fVar14 * fVar13) / fVar1;
      fVar2 = _LC3;
      *param_9 = fVar15;
      *param_7 = (fVar2 - *param_8) - fVar15;
      return;
    }
    if (fVar14 < fVar15) {
      if (fVar15 < _LC2) {
        if (param_4 * param_4 + uStack_14 * uStack_14 + local_18 * local_18 + 0.0 <=
            param_2 * param_2 + uStack_34 * uStack_34 + local_38 * local_38 + 0.0) {
          *param_7 = 0.0;
          *param_8 = 1.0;
        }
        else {
          *param_7 = 1.0;
          *param_8 = 0.0;
        }
      }
      else {
        fVar15 = (float)((uint)(uStack_34 * fVar9 + local_38 * fVar8 + 0.0 + param_2 * fVar10) ^
                        __LC4) / fVar15;
        fVar2 = _LC3 - fVar15;
        *param_8 = fVar15;
        *param_7 = fVar2;
      }
      *param_9 = 0.0;
      return;
    }
    if (fVar14 < _LC2) {
      fVar2 = uStack_34 * uStack_34 + local_38 * local_38 + 0.0;
LAB_0010047a:
      if (param_6 * param_6 + fVar12 * fVar12 + fVar11 * fVar11 + 0.0 <= param_2 * param_2 + fVar2)
      {
        *param_7 = 0.0;
        *param_9 = 1.0;
      }
      else {
        *param_7 = 1.0;
        *param_9 = 0.0;
      }
      goto LAB_0010033a;
    }
    fVar2 = uStack_34 * fVar6 + local_38 * fVar5 + 0.0;
  }
  fVar14 = (float)((uint)(fVar2 + fVar7 * param_2) ^ __LC4) / fVar14;
  fVar2 = _LC3 - fVar14;
  *param_9 = fVar14;
  *param_7 = fVar2;
LAB_0010033a:
  *param_8 = 0.0;
  return;
}



/* JPH::CollideConvexVsTriangles::CollideConvexVsTriangles(JPH::ConvexShape const*, JPH::Vec3,
   JPH::Vec3, JPH::Mat44 const&, JPH::Mat44 const&, JPH::SubShapeID const&,
   JPH::CollideShapeSettings const&, JPH::CollisionCollector<JPH::CollideShapeResult,
   JPH::CollisionCollectorTraitsCollideShape>&) */

void __thiscall
JPH::CollideConvexVsTriangles::CollideConvexVsTriangles
          (undefined8 param_1_00,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          CollideConvexVsTriangles *this,long *param_1,undefined8 *param_7,float *param_8,
          undefined4 *param_9,long param_10,undefined8 param_11)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  long lVar24;
  long in_FS_OFFSET;
  float fVar25;
  float fVar30;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar31;
  float fVar34;
  float fVar35;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float fVar36;
  float fVar37;
  float fVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float local_68 [18];
  long local_20;
  
  uVar4 = param_7[2];
  uVar9 = param_7[3];
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(this + 0x20) = param_1_00;
  *(undefined8 *)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x50) = uVar4;
  *(undefined8 *)(this + 0x58) = uVar9;
  uVar16 = param_7[6];
  uVar17 = param_7[7];
  *(undefined8 *)(this + 0x30) = param_3;
  *(undefined8 *)(this + 0x38) = param_4;
  uVar4 = *param_7;
  uVar9 = param_7[1];
  *(undefined8 *)(this + 8) = param_11;
  *(undefined8 *)(this + 0x40) = uVar4;
  *(undefined8 *)(this + 0x48) = uVar9;
  uVar4 = param_7[4];
  uVar9 = param_7[5];
  *(undefined8 *)(this + 0x70) = uVar16;
  *(undefined8 *)(this + 0x78) = uVar17;
  *(long *)this = param_10;
  *(long **)(this + 0x10) = param_1;
  *(undefined8 *)(this + 0x60) = uVar4;
  *(undefined8 *)(this + 0x68) = uVar9;
  uVar21 = _LC21;
  uVar22 = _LC10;
  fVar34 = *param_8;
  fVar35 = param_8[1];
  fVar36 = param_8[2];
  fVar31 = param_8[6];
  fVar37 = (float)*(undefined8 *)(param_8 + 4);
  fVar38 = (float)((ulong)*(undefined8 *)(param_8 + 4) >> 0x20);
  *(undefined4 *)(this + 0xc0) = _LC10;
  *(undefined4 *)(this + 0xc4) = uVar22;
  *(undefined4 *)(this + 200) = uVar22;
  *(undefined4 *)(this + 0xcc) = uVar22;
  uVar23 = *param_9;
  *(undefined4 *)(this + 0xd0) = uVar21;
  *(undefined4 *)(this + 0xd4) = uVar21;
  *(undefined4 *)(this + 0xd8) = uVar21;
  *(undefined4 *)(this + 0xdc) = uVar21;
  *(undefined4 *)(this + 0xf0) = uVar21;
  *(undefined4 *)(this + 0xf4) = uVar21;
  *(undefined4 *)(this + 0xf8) = uVar21;
  *(undefined4 *)(this + 0xfc) = uVar21;
  *(undefined1 (*) [16])(this + 0x2190) = (undefined1  [16])0x0;
  uVar4 = *(undefined8 *)(param_8 + 8);
  *(undefined4 *)(this + 0xe0) = uVar22;
  *(undefined4 *)(this + 0xe4) = uVar22;
  *(undefined4 *)(this + 0xe8) = uVar22;
  *(undefined4 *)(this + 0xec) = uVar22;
  fVar25 = (float)uVar4;
  fVar30 = (float)((ulong)uVar4 >> 0x20);
  fVar2 = param_8[10];
  *(undefined4 *)(this + 0x100) = uVar23;
  fVar3 = param_8[0xc];
  fVar10 = param_8[0xd];
  fVar11 = param_8[0xe];
  lVar24 = 0;
  do {
    pfVar1 = (float *)((long)param_7 + lVar24);
    fVar12 = *pfVar1;
    fVar13 = pfVar1[1];
    fVar14 = pfVar1[2];
    fVar15 = pfVar1[3];
    *(float *)((long)local_68 + lVar24) =
         fVar15 * (0.0 - (fVar3 * fVar34 + fVar10 * fVar35 + fVar11 * fVar36)) +
         fVar12 * fVar34 + fVar13 * fVar35 + fVar14 * fVar36;
    *(float *)((long)local_68 + lVar24 + 4) =
         fVar15 * (0.0 - (fVar3 * fVar37 + fVar10 * fVar38 + fVar11 * fVar31)) +
         fVar12 * fVar37 + fVar13 * fVar38 + fVar14 * fVar31;
    *(float *)((long)local_68 + lVar24 + 8) =
         fVar15 * (0.0 - (fVar3 * fVar25 + fVar10 * fVar30 + fVar11 * fVar2)) +
         fVar12 * fVar25 + fVar13 * fVar30 + fVar14 * fVar2;
    *(float *)((long)local_68 + lVar24 + 0xc) =
         fVar15 * 1.0 + fVar12 * 0.0 + fVar13 * 0.0 + fVar14 * 0.0;
    lVar24 = lVar24 + 0x10;
  } while (lVar24 != 0x40);
  lVar24 = *param_1;
  auVar39._4_4_ = (float)local_68._16_8_;
  auVar39._0_4_ = local_68[0];
  auVar39._8_4_ = (float)local_68._32_8_;
  auVar39._12_4_ = 0;
  auVar8._4_4_ = SUB84(local_68._16_8_,4);
  auVar8._0_4_ = local_68[1];
  auVar8._8_4_ = SUB84(local_68._32_8_,4);
  auVar8._12_4_ = 0;
  *(undefined1 (*) [16])(this + 0x90) = auVar8;
  *(undefined1 (*) [16])(this + 0x80) = auVar39;
  auVar27._4_4_ = local_68[6];
  auVar27._0_4_ = local_68[2];
  auVar27._8_4_ = local_68[10];
  auVar27._12_4_ = 0;
  *(undefined1 (*) [16])(this + 0xa0) = auVar27;
  *(undefined4 *)(this + 0xbc) = _LC3;
  *(ulong *)(this + 0xb0) =
       CONCAT44(0.0 - (local_68[0xc] * (float)local_68._16_8_ +
                       local_68[0xd] * SUB84(local_68._16_8_,4) + local_68[0xe] * local_68[6]),
                0.0 - (local_68[0xc] * local_68[0] + local_68[0xd] * local_68[1] +
                      local_68[0xe] * local_68[2]));
  *(float *)(this + 0xb8) =
       0.0 - (local_68[0xc] * (float)local_68._32_8_ + local_68[0xd] * SUB84(local_68._32_8_,4) +
             local_68[0xe] * local_68[10]);
  (**(code **)(lVar24 + 0x20))(&local_88);
  uVar23 = _LC3;
  local_a8 = (float)param_1_00;
  fStack_a4 = (float)((ulong)param_1_00 >> 0x20);
  fStack_a0 = (float)param_2;
  fStack_9c = (float)((ulong)param_2 >> 0x20);
  auVar26._0_8_ = CONCAT44(fStack_a4 * fStack_84,local_a8 * local_88);
  auVar26._8_4_ = fStack_a0 * fStack_80;
  auVar26._12_4_ = fStack_9c * fStack_7c;
  lVar24 = 0;
  auVar32._8_4_ = auVar26._8_4_;
  auVar32._0_8_ = auVar26._0_8_;
  auVar32._12_4_ = auVar26._12_4_;
  auVar33._4_4_ = fStack_a4 * fStack_74;
  auVar33._0_4_ = local_a8 * local_78;
  auVar33._8_4_ = fStack_a0 * fStack_70;
  auVar33._12_4_ = fStack_9c * fStack_6c;
  auVar33 = maxps(auVar32,auVar33);
  auVar5._4_4_ = fStack_a4 * fStack_74;
  auVar5._0_4_ = local_a8 * local_78;
  auVar5._8_4_ = fStack_a0 * fStack_70;
  auVar5._12_4_ = fStack_9c * fStack_6c;
  auVar27 = minps(auVar26,auVar5);
  fVar31 = *(float *)(param_10 + 0x20);
  *(float *)(this + 0xc0) = auVar27._0_4_ - fVar31;
  *(float *)(this + 0xc4) = auVar27._4_4_ - fVar31;
  *(float *)(this + 200) = auVar27._8_4_ - fVar31;
  *(float *)(this + 0xcc) = auVar27._12_4_ - fVar31;
  *(float *)(this + 0xd0) = fVar31 + auVar33._0_4_;
  *(float *)(this + 0xd4) = fVar31 + auVar33._4_4_;
  *(float *)(this + 0xd8) = fVar31 + auVar33._8_4_;
  *(float *)(this + 0xdc) = fVar31 + auVar33._12_4_;
  fVar31 = local_68[0xc];
  fVar34 = local_68[0xd];
  fVar35 = local_68[0xe];
  fVar36 = local_68[0xf];
  do {
    fVar2 = *(float *)(this + lVar24 + 0xc0);
    fVar3 = *(float *)(this + lVar24 + 0xd0);
    auVar28._0_8_ = CONCAT44(fVar2 * local_68[lVar24 + 1],fVar2 * local_68[lVar24]);
    auVar28._8_4_ = fVar2 * local_68[lVar24 + 2];
    auVar28._12_4_ = fVar2 * local_68[lVar24 + 3];
    pfVar1 = local_68 + lVar24;
    lVar18 = lVar24 + 1;
    lVar19 = lVar24 + 2;
    lVar20 = lVar24 + 3;
    lVar24 = lVar24 + 4;
    auVar40._8_4_ = auVar28._8_4_;
    auVar40._0_8_ = auVar28._0_8_;
    auVar40._12_4_ = auVar28._12_4_;
    auVar6._4_4_ = fVar3 * local_68[lVar18];
    auVar6._0_4_ = fVar3 * *pfVar1;
    auVar6._8_4_ = fVar3 * local_68[lVar19];
    auVar6._12_4_ = fVar3 * local_68[lVar20];
    auVar33 = minps(auVar40,auVar6);
    auVar7._4_4_ = fVar3 * local_68[lVar18];
    auVar7._0_4_ = fVar3 * *pfVar1;
    auVar7._8_4_ = fVar3 * local_68[lVar19];
    auVar7._12_4_ = fVar3 * local_68[lVar20];
    auVar27 = maxps(auVar28,auVar7);
    local_68[0xc] = local_68[0xc] + auVar33._0_4_;
    local_68[0xd] = local_68[0xd] + auVar33._4_4_;
    local_68[0xe] = local_68[0xe] + auVar33._8_4_;
    local_68[0xf] = local_68[0xf] + auVar33._12_4_;
    fVar31 = fVar31 + auVar27._0_4_;
    fVar34 = fVar34 + auVar27._4_4_;
    fVar35 = fVar35 + auVar27._8_4_;
    fVar36 = fVar36 + auVar27._12_4_;
  } while (lVar24 != 0xc);
  fStack_90 = (float)param_4;
  fStack_8c = (float)((ulong)param_4 >> 0x20);
  *(float *)(this + 0xe0) = local_68[0xc];
  *(float *)(this + 0xe4) = local_68[0xd];
  *(float *)(this + 0xe8) = local_68[0xe];
  *(float *)(this + 0xec) = local_68[0xf];
  *(float *)(this + 0xf0) = fVar31;
  *(float *)(this + 0xf4) = fVar34;
  *(float *)(this + 0xf8) = fVar35;
  *(float *)(this + 0xfc) = fVar36;
  auVar29._4_4_ = -(uint)((float)((ulong)param_3 >> 0x20) < 0.0);
  auVar29._0_4_ = -(uint)((float)param_3 < 0.0);
  auVar29._8_4_ = -(uint)(fStack_90 < 0.0);
  auVar29._12_4_ = -(uint)(fStack_8c < 0.0);
  uVar22 = movmskps(0xc,auVar29);
  if ((POPCOUNT((byte)uVar22 & 7) & 1U) != 0) {
    uVar23 = _LC18;
  }
  *(undefined4 *)(this + 0x104) = uVar23;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::CollideConvexVsTriangles::Collide(JPH::Vec3, JPH::Vec3, JPH::Vec3, unsigned char,
   JPH::SubShapeID const&) */

void JPH::CollideConvexVsTriangles::Collide
               (undefined8 param_1,float param_2,undefined8 param_3,float param_4,undefined8 param_5
               ,float param_6,long *param_7,byte param_8,undefined4 *param_9)

{
  char *pcVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  byte bVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  long in_FS_OFFSET;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar22;
  float fVar23;
  undefined1 auVar24 [16];
  float fVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
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
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  undefined8 local_6d8;
  undefined8 uStack_6d0;
  float local_6c8;
  float fStack_6c4;
  undefined8 local_6b8;
  undefined8 uStack_6b0;
  float local_6a8;
  float local_5f0;
  float local_5ec;
  long local_5e8;
  undefined4 local_5e0;
  float local_5d8;
  float fStack_5d4;
  float fStack_5d0;
  float fStack_5cc;
  float local_5c8;
  float fStack_5c4;
  float fStack_5c0;
  float fStack_5bc;
  float local_5b8;
  float fStack_5b4;
  float fStack_5b0;
  float fStack_5ac;
  float local_5a8;
  float fStack_5a4;
  float fStack_5a0;
  float fStack_59c;
  float local_598;
  float fStack_594;
  float fStack_590;
  float fStack_58c;
  float local_588;
  float fStack_584;
  float fStack_580;
  float fStack_57c;
  GJKClosestPoint local_578 [192];
  undefined4 local_4b8;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  undefined8 local_498;
  undefined8 uStack_490;
  float local_488;
  float fStack_484;
  float fStack_480;
  float fStack_47c;
  float local_478;
  undefined4 local_474;
  undefined4 local_470;
  undefined4 local_46c;
  undefined4 local_468 [132];
  undefined4 local_258;
  float local_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  float local_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  float local_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  long local_40;
  
  fVar10 = *(float *)(param_7 + 6);
  fVar18 = *(float *)((long)param_7 + 0x34);
  fVar20 = *(float *)(param_7 + 7);
  local_6d8._0_4_ = (float)param_1;
  local_6d8._4_4_ = (float)((ulong)param_1 >> 0x20);
  fVar25 = *(float *)(param_7 + 0x12);
  fVar11 = *(float *)((long)param_7 + 0x94);
  fVar19 = *(float *)(param_7 + 0x13);
  fVar21 = *(float *)((long)param_7 + 0x9c);
  local_6d8._0_4_ = (float)local_6d8 * fVar10;
  local_6d8._4_4_ = local_6d8._4_4_ * fVar18;
  param_2 = param_2 * fVar20;
  fVar22 = *(float *)(param_7 + 0x10);
  fVar13 = *(float *)((long)param_7 + 0x84);
  fVar12 = *(float *)(param_7 + 0x11);
  fVar23 = *(float *)((long)param_7 + 0x8c);
  fVar48 = *(float *)(param_7 + 0x14);
  fVar49 = *(float *)((long)param_7 + 0xa4);
  fVar50 = *(float *)(param_7 + 0x15);
  fVar51 = *(float *)((long)param_7 + 0xac);
  fVar36 = *(float *)(param_7 + 0x16);
  fVar37 = *(float *)((long)param_7 + 0xb4);
  fVar38 = *(float *)(param_7 + 0x17);
  fVar39 = *(float *)((long)param_7 + 0xbc);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_6c8 = (float)param_3;
  fStack_6c4 = (float)((ulong)param_3 >> 0x20);
  local_6c8 = local_6c8 * fVar10;
  fStack_6c4 = fStack_6c4 * fVar18;
  param_4 = param_4 * fVar20;
  local_6b8._0_4_ = (float)param_5;
  local_6b8._4_4_ = (float)((ulong)param_5 >> 0x20);
  fVar10 = fVar10 * (float)local_6b8;
  fVar18 = fVar18 * local_6b8._4_4_;
  fVar20 = fVar20 * param_6;
  fVar32 = (float)local_6d8 * fVar22 + local_6d8._4_4_ * fVar25 + param_2 * fVar48 + fVar36;
  fVar33 = (float)local_6d8 * fVar13 + local_6d8._4_4_ * fVar11 + param_2 * fVar49 + fVar37;
  fVar34 = (float)local_6d8 * fVar12 + local_6d8._4_4_ * fVar19 + param_2 * fVar50 + fVar38;
  fVar35 = (float)local_6d8 * fVar23 + local_6d8._4_4_ * fVar21 + param_2 * fVar51 + fVar39;
  lVar7 = *param_7;
  fVar40 = local_6c8 * fVar22 + fStack_6c4 * fVar25 + param_4 * fVar48 + fVar36;
  fVar41 = local_6c8 * fVar13 + fStack_6c4 * fVar11 + param_4 * fVar49 + fVar37;
  fVar42 = local_6c8 * fVar12 + fStack_6c4 * fVar19 + param_4 * fVar50 + fVar38;
  fVar43 = local_6c8 * fVar23 + fStack_6c4 * fVar21 + param_4 * fVar51 + fVar39;
  fVar36 = fVar10 * fVar22 + fVar18 * fVar25 + fVar20 * fVar48 + fVar36;
  fVar37 = fVar10 * fVar13 + fVar18 * fVar11 + fVar20 * fVar49 + fVar37;
  fVar38 = fVar10 * fVar12 + fVar18 * fVar19 + fVar20 * fVar50 + fVar38;
  fVar39 = fVar10 * fVar23 + fVar18 * fVar21 + fVar20 * fVar51 + fVar39;
  fVar25 = (fVar37 - fVar33) * (fVar40 - fVar32) - (fVar41 - fVar33) * (fVar36 - fVar32);
  fVar10 = *(float *)((long)param_7 + 0x104);
  fVar18 = ((fVar38 - fVar34) * (fVar41 - fVar33) - (fVar42 - fVar34) * (fVar37 - fVar33)) * fVar10;
  fVar20 = ((fVar36 - fVar32) * (fVar42 - fVar34) - (fVar40 - fVar32) * (fVar38 - fVar34)) * fVar10;
  local_6a8 = fVar25 * fVar10;
  fVar25 = fVar25 * fVar10;
  fVar10 = local_6a8 * fVar34 + fVar33 * fVar20 + fVar32 * fVar18 + 0.0;
  if ((*(char *)(lVar7 + 0x24) == '\0') && (0.0 < fVar10)) goto LAB_001012db;
  auVar26._4_4_ = fVar33;
  auVar26._0_4_ = fVar32;
  auVar26._8_4_ = fVar34;
  auVar26._12_4_ = fVar35;
  auVar14._4_4_ = fVar33;
  auVar14._0_4_ = fVar32;
  auVar14._8_4_ = fVar34;
  auVar14._12_4_ = fVar35;
  auVar15._4_4_ = fVar41;
  auVar15._0_4_ = fVar40;
  auVar15._8_4_ = fVar42;
  auVar15._12_4_ = fVar43;
  auVar27 = minps(auVar26,auVar15);
  auVar28._4_4_ = fVar41;
  auVar28._0_4_ = fVar40;
  auVar28._8_4_ = fVar42;
  auVar28._12_4_ = fVar43;
  auVar15 = maxps(auVar14,auVar28);
  auVar16._4_4_ = fVar37;
  auVar16._0_4_ = fVar36;
  auVar16._8_4_ = fVar38;
  auVar16._12_4_ = fVar39;
  auVar28 = minps(auVar27,auVar16);
  auVar27._4_4_ = fVar37;
  auVar27._0_4_ = fVar36;
  auVar27._8_4_ = fVar38;
  auVar27._12_4_ = fVar39;
  auVar16 = maxps(auVar15,auVar27);
  auVar17._4_4_ = -(uint)(auVar16._4_4_ < *(float *)((long)param_7 + 0xc4));
  auVar17._0_4_ = -(uint)(auVar16._0_4_ < *(float *)(param_7 + 0x18));
  auVar17._8_4_ = -(uint)(auVar16._8_4_ < *(float *)(param_7 + 0x19));
  auVar17._12_4_ = -(uint)(auVar16._12_4_ < *(float *)((long)param_7 + 0xcc));
  auVar24._4_4_ = -(uint)(*(float *)((long)param_7 + 0xd4) < auVar28._4_4_);
  auVar24._0_4_ = -(uint)(*(float *)(param_7 + 0x1a) < auVar28._0_4_);
  auVar24._8_4_ = -(uint)(*(float *)(param_7 + 0x1b) < auVar28._8_4_);
  auVar24._12_4_ = -(uint)(*(float *)((long)param_7 + 0xdc) < auVar28._12_4_);
  uVar9 = movmskps((int)param_9,auVar17 | auVar24);
  if ((uVar9 & 7) != 0) goto LAB_001012db;
  plVar8 = (long *)param_7[0x432];
  local_4b8 = 0;
  fVar11 = 0.0 - fVar18;
  fVar19 = 0.0 - fVar20;
  fVar21 = 0.0 - local_6a8;
  fVar22 = 0.0 - fVar25;
  local_5d8 = fVar11;
  fStack_5d4 = fVar19;
  fStack_5d0 = fVar21;
  fStack_5cc = fVar22;
  local_5a8 = fVar32;
  fStack_5a4 = fVar33;
  fStack_5a0 = fVar34;
  fStack_59c = fVar35;
  local_598 = fVar40;
  fStack_594 = fVar41;
  fStack_590 = fVar42;
  fStack_58c = fVar43;
  local_588 = fVar36;
  fStack_584 = fVar37;
  fStack_580 = fVar38;
  fStack_57c = fVar39;
  if (plVar8 == (long *)0x0) {
    plVar8 = (long *)(**(code **)(*(long *)param_7[2] + 0x130))
                               (param_7[4],param_7[5],(long *)param_7[2],0,param_7 + 0x22);
    param_7[0x432] = (long)plVar8;
    lVar7 = *param_7;
  }
  fVar13 = *(float *)(lVar7 + 4);
  fVar12 = (float)(**(code **)(*plVar8 + 0x18))();
  fVar12 = *(float *)(*param_7 + 0x20) + fVar12;
  fVar23 = fVar12 + 0.0;
  fVar23 = fVar23 * fVar23;
  fVar13 = GJKClosestPoint::GetClosestPoints<JPH::ConvexShape::Support,JPH::TriangleConvexSupport>
                     (local_578,(Support *)param_7[0x432],(TriangleConvexSupport *)&local_5a8,fVar13
                      ,fVar23,(Vec3 *)&local_5d8,(Vec3 *)&local_5c8,(Vec3 *)&local_5b8);
  if (fVar23 < fVar13) goto LAB_001012db;
  if (0.0 < fVar13) {
    fVar23 = 0.0 / SQRT(fVar13);
    fVar12 = fVar12 / SQRT(fVar13);
    local_5b8 = local_5b8 - fVar23 * local_5d8;
    fStack_5b4 = fStack_5b4 - fVar23 * fStack_5d4;
    fStack_5b0 = fStack_5b0 - fVar23 * fStack_5d0;
    fStack_5ac = fStack_5ac - fVar23 * fStack_5cc;
    local_5c8 = fVar12 * local_5d8 + local_5c8;
    fStack_5c4 = fVar12 * fStack_5d4 + fStack_5c4;
    fStack_5c0 = fVar12 * fStack_5d0 + fStack_5c0;
    fStack_5bc = fVar12 * fStack_5cc + fStack_5bc;
  }
  else {
    local_5e8 = param_7[0x433];
    if (local_5e8 == 0) {
      local_5e8 = (**(code **)(*(long *)param_7[2] + 0x130))
                            (param_7[4],param_7[5],(long *)param_7[2],1,param_7 + 0x22a);
      param_7[0x433] = local_5e8;
    }
    local_5e0 = *(undefined4 *)(*param_7 + 0x20);
    bVar5 = EPAPenetrationDepth::
            GetPenetrationDepthStepEPA<JPH::AddConvexRadius<JPH::ConvexShape::Support>,JPH::TriangleConvexSupport>
                      ((EPAPenetrationDepth *)local_578,(AddConvexRadius *)&local_5e8,
                       (TriangleConvexSupport *)&local_5a8,*(float *)(*param_7 + 8),
                       (Vec3 *)&local_5d8,(Vec3 *)&local_5c8,(Vec3 *)&local_5b8);
    if (!bVar5) goto LAB_001012db;
  }
  pcVar1 = (char *)*param_7;
  plVar8 = (long *)param_7[1];
  fVar13 = SQRT((fStack_5b0 - fStack_5c0) * (fStack_5b0 - fStack_5c0) +
                (local_5b8 - local_5c8) * (local_5b8 - local_5c8) + 0.0 +
                (fStack_5b4 - fStack_5c4) * (fStack_5b4 - fStack_5c4)) - *(float *)(pcVar1 + 0x20);
  if (*(float *)(plVar8 + 1) <= (float)((uint)fVar13 ^ __LC4)) goto LAB_001012db;
  fVar12 = SQRT(fStack_5d0 * fStack_5d0 + fStack_5d4 * fStack_5d4 + local_5d8 * local_5d8 + 0.0);
  if (0.0 < fVar12) {
    fVar23 = *(float *)(pcVar1 + 0x20) / fVar12;
    local_5c8 = local_5c8 - fVar23 * local_5d8;
    fStack_5c4 = fStack_5c4 - fVar23 * fStack_5d4;
    fStack_5c0 = fStack_5c0 - fVar23 * fStack_5d0;
    fStack_5bc = fStack_5bc - fVar23 * fStack_5cc;
  }
  fVar23 = *(float *)(param_7 + 10);
  fVar48 = *(float *)((long)param_7 + 0x54);
  fVar49 = *(float *)(param_7 + 0xb);
  fVar50 = *(float *)((long)param_7 + 0x5c);
  fVar51 = *(float *)(param_7 + 8);
  fVar52 = *(float *)((long)param_7 + 0x44);
  fVar53 = *(float *)(param_7 + 9);
  fVar54 = *(float *)((long)param_7 + 0x4c);
  fVar44 = *(float *)(param_7 + 0xc);
  fVar45 = *(float *)((long)param_7 + 100);
  fVar46 = *(float *)(param_7 + 0xd);
  fVar47 = *(float *)((long)param_7 + 0x6c);
  if ((*pcVar1 == '\0') && (param_8 != 7)) {
    fVar31 = *(float *)(pcVar1 + 0x10);
    fVar3 = *(float *)(pcVar1 + 0x14);
    fVar4 = *(float *)(pcVar1 + 0x18);
    fVar29 = fVar53 * fVar4 + fVar52 * fVar3 + fVar31 * fVar51;
    fVar30 = fVar49 * fVar4 + fVar48 * fVar3 + fVar31 * fVar23;
    fVar31 = fVar46 * fVar4 + fVar45 * fVar3 + fVar31 * fVar44;
    if (fVar10 <= 0.0) {
      fVar18 = fVar11;
      fVar20 = fVar19;
      fVar25 = fVar22;
      local_6a8 = fVar21;
    }
    fVar10 = SQRT(local_6a8 * local_6a8 + fVar20 * fVar20 + fVar18 * fVar18 + 0.0);
    if ((fVar31 * local_6a8 + fVar30 * fVar20 + fVar29 * fVar18 + 0.0) * fVar12 <=
        (fStack_5d0 * fVar31 + fStack_5d4 * fVar30 + fVar29 * local_5d8 + 0.0) * fVar10) {
      if (param_8 == 0) {
LAB_001010bd:
        local_5d8 = fVar18;
        fStack_5d4 = fVar20;
        fStack_5d0 = local_6a8;
        fStack_5cc = fVar25;
      }
      else if (local_6a8 * fStack_5d0 + fVar20 * fStack_5d4 + local_5d8 * fVar18 + 0.0 <=
               fVar12 * __LC76 * fVar10) {
        local_6b8 = CONCAT44(fVar41 - fStack_5b4,fVar40 - local_5b8);
        uStack_6b0 = CONCAT44(fVar43 - fStack_5ac,fVar42 - fStack_5b0);
        local_6d8 = CONCAT44(fVar37 - fStack_5b4,fVar36 - local_5b8);
        uStack_6d0 = CONCAT44(fVar39 - fStack_5ac,fVar38 - fStack_5b0);
        ClosestPoint::GetBaryCentricCoordinates
                  (CONCAT44(fVar33 - fStack_5b4,fVar32 - local_5b8),
                   CONCAT44(fVar35 - fStack_5ac,fVar34 - fStack_5b0),local_6b8,uStack_6b0,local_6d8,
                   uStack_6d0,&local_5f0,&local_5ec,&local_5e8);
        if (__LC77 < local_5f0) {
          bVar6 = 5;
        }
        else if (__LC77 < local_5ec) {
          bVar6 = 3;
        }
        else if (__LC77 < (float)local_5e8) {
          bVar6 = 6;
        }
        else if (local_5f0 < _LC78) {
          bVar6 = 2;
        }
        else if (local_5ec < _LC78) {
          bVar6 = 4;
        }
        else {
          bVar6 = 1;
          if (_LC78 <= (float)local_5e8) goto LAB_001010bd;
        }
        if ((param_8 & bVar6) == 0) goto LAB_001010bd;
      }
    }
  }
  fVar10 = *(float *)(param_7 + 0xe);
  fVar18 = *(float *)((long)param_7 + 0x74);
  fVar20 = *(float *)(param_7 + 0xf);
  fVar25 = *(float *)((long)param_7 + 0x7c);
  fVar11 = local_5c8 * fVar52;
  fVar19 = local_5c8 * fVar53;
  fVar21 = local_5c8 * fVar54;
  fVar22 = fStack_5c4 * fVar49;
  fVar39 = fStack_5c4 * fVar50;
  local_46c = 0xffffffff;
  fVar43 = fStack_5c0 * fVar47;
  fVar12 = fStack_5b4 * fVar49;
  fVar35 = fStack_5b4 * fVar50;
  local_5c8 = local_5c8 * fVar51 + fStack_5c4 * fVar23 + fStack_5c0 * fVar44 + fVar10;
  fStack_5c4 = fVar11 + fStack_5c4 * fVar48 + fStack_5c0 * fVar45 + fVar18;
  fStack_5c0 = fVar19 + fVar22 + fStack_5c0 * fVar46 + fVar20;
  fStack_5bc = fVar21 + fVar39 + fVar43 + fVar25;
  fVar11 = local_5b8 * fVar52;
  fVar19 = local_5b8 * fVar53;
  fVar21 = local_5b8 * fVar54;
  fVar22 = fStack_5b0 * fVar47;
  local_5b8 = local_5b8 * fVar51 + fStack_5b4 * fVar23 + fStack_5b0 * fVar44 + fVar10;
  fStack_5b4 = fVar11 + fStack_5b4 * fVar48 + fStack_5b0 * fVar45 + fVar18;
  fStack_5b0 = fVar19 + fVar12 + fStack_5b0 * fVar46 + fVar20;
  fStack_5ac = fVar21 + fVar35 + fVar22 + fVar25;
  local_488 = local_5d8 * fVar51 + fStack_5d4 * fVar23 + fStack_5d0 * fVar44;
  fStack_484 = local_5d8 * fVar52 + fStack_5d4 * fVar48 + fStack_5d0 * fVar45;
  fStack_480 = local_5d8 * fVar53 + fStack_5d4 * fVar49 + fStack_5d0 * fVar46;
  fStack_47c = local_5d8 * fVar54 + fStack_5d4 * fVar50 + fStack_5d0 * fVar47;
  if (plVar8[2] != 0) {
    local_46c = *(undefined4 *)(plVar8[2] + 0x34);
  }
  local_4a8 = CONCAT44(fStack_5c4,local_5c8);
  uStack_4a0 = CONCAT44(fStack_5bc,fStack_5c0);
  local_474 = (undefined4)param_7[0x20];
  local_470 = *param_9;
  local_498 = CONCAT44(fStack_5b4,local_5b8);
  uStack_490 = CONCAT44(fStack_5ac,fStack_5b0);
  local_468[0] = 0;
  local_258 = 0;
  local_478 = fVar13;
  if (pcVar1[1] == '\0') {
    pcVar2 = *(code **)(*(long *)param_7[2] + 0x60);
    local_6d8 = CONCAT44(0.0 - fStack_5d4,0.0 - local_5d8);
    uStack_6d0 = CONCAT44(0.0 - fStack_5cc,0.0 - fStack_5d0);
    local_5e8 = CONCAT44(local_5e8._4_4_,0xffffffff);
    if (pcVar2 != Shape::GetSupportingFace) {
      (*pcVar2)(local_6d8,uStack_6d0,param_7[4],param_7[5],(long *)param_7[2],&local_5e8,param_7 + 8
                ,local_468);
      fVar51 = *(float *)(param_7 + 8);
      fVar52 = *(float *)((long)param_7 + 0x44);
      fVar53 = *(float *)(param_7 + 9);
      fVar54 = *(float *)((long)param_7 + 0x4c);
      fVar23 = *(float *)(param_7 + 10);
      fVar48 = *(float *)((long)param_7 + 0x54);
      fVar49 = *(float *)(param_7 + 0xb);
      fVar50 = *(float *)((long)param_7 + 0x5c);
      fVar44 = *(float *)(param_7 + 0xc);
      fVar45 = *(float *)((long)param_7 + 100);
      fVar46 = *(float *)(param_7 + 0xd);
      fVar47 = *(float *)((long)param_7 + 0x6c);
      fVar10 = *(float *)(param_7 + 0xe);
      fVar18 = *(float *)((long)param_7 + 0x74);
      fVar20 = *(float *)(param_7 + 0xf);
      fVar25 = *(float *)((long)param_7 + 0x7c);
      plVar8 = (long *)param_7[1];
    }
    local_258 = 3;
    local_248 = fVar33 * fVar23 + fVar32 * fVar51 + fVar34 * fVar44 + fVar10;
    fStack_244 = fVar33 * fVar48 + fVar32 * fVar52 + fVar34 * fVar45 + fVar18;
    fStack_240 = fVar33 * fVar49 + fVar32 * fVar53 + fVar34 * fVar46 + fVar20;
    fStack_23c = fVar33 * fVar50 + fVar32 * fVar54 + fVar34 * fVar47 + fVar25;
    local_238 = fVar40 * fVar51 + fVar41 * fVar23 + fVar42 * fVar44 + fVar10;
    fStack_234 = fVar40 * fVar52 + fVar41 * fVar48 + fVar42 * fVar45 + fVar18;
    fStack_230 = fVar40 * fVar53 + fVar41 * fVar49 + fVar42 * fVar46 + fVar20;
    fStack_22c = fVar40 * fVar54 + fVar41 * fVar50 + fVar42 * fVar47 + fVar25;
    local_228 = fVar10 + fVar36 * fVar51 + fVar37 * fVar23 + fVar38 * fVar44;
    fStack_224 = fVar18 + fVar36 * fVar52 + fVar37 * fVar48 + fVar38 * fVar45;
    fStack_220 = fVar20 + fVar36 * fVar53 + fVar37 * fVar49 + fVar38 * fVar46;
    fStack_21c = fVar25 + fVar36 * fVar54 + fVar37 * fVar50 + fVar38 * fVar47;
  }
  (**(code **)(*plVar8 + 0x28))(plVar8,&local_4a8);
LAB_001012db:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* JPH::Shape::GetSupportingFace(JPH::SubShapeID const&, JPH::Vec3, JPH::Vec3, JPH::Mat44 const&,
   JPH::StaticArray<JPH::Vec3, 32u>&) const */

void JPH::Shape::GetSupportingFace(void)

{
  return;
}



/* JPH::Vec3
   JPH::EPAPenetrationDepth::SupportPoints::Add<JPH::AddConvexRadius<JPH::ConvexShape::Support>,
   JPH::TriangleConvexSupport>(JPH::AddConvexRadius<JPH::ConvexShape::Support> const&,
   JPH::TriangleConvexSupport const&, JPH::Vec3, int&) [clone .isra.0] */

undefined1  [16]
JPH::EPAPenetrationDepth::SupportPoints::
Add<JPH::AddConvexRadius<JPH::ConvexShape::Support>,JPH::TriangleConvexSupport>
          (float param_1_00,undefined8 param_2_00,undefined8 param_3,uint *param_1,long *param_2,
          float *param_6,uint *param_7)

{
  float *pfVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined8 local_48;
  undefined8 uStack_40;
  
  fVar4 = (float)((ulong)param_2_00 >> 0x20);
  fVar3 = (float)param_2_00;
  uStack_40._0_4_ = (float)param_3;
  fVar5 = (float)uStack_40;
  uStack_40._4_4_ = (float)((ulong)param_3 >> 0x20);
  fVar7 = SQRT((float)uStack_40 * (float)uStack_40 + fVar4 * fVar4 + fVar3 * fVar3 + 0.0);
  if (fVar7 <= 0.0) {
    auVar12 = (**(code **)(*param_2 + 0x10))(param_2);
    local_48._0_4_ = auVar12._0_4_;
    local_48._4_4_ = auVar12._4_4_;
    uStack_40._0_4_ = auVar12._8_4_;
    uStack_40._4_4_ = auVar12._12_4_;
    fVar7 = (float)local_48;
    fVar6 = local_48._4_4_;
    fVar8 = (float)uStack_40;
    fVar9 = uStack_40._4_4_;
  }
  else {
    param_1_00 = param_1_00 / fVar7;
    fVar8 = (float)uStack_40 * param_1_00;
    fVar9 = uStack_40._4_4_ * param_1_00;
    auVar12 = (**(code **)(*param_2 + 0x10))();
    local_48._0_4_ = auVar12._0_4_;
    local_48._4_4_ = auVar12._4_4_;
    uStack_40._0_4_ = auVar12._8_4_;
    uStack_40._4_4_ = auVar12._12_4_;
    fVar7 = (float)local_48 + fVar3 * param_1_00;
    fVar6 = local_48._4_4_ + fVar4 * param_1_00;
    fVar8 = (float)uStack_40 + fVar8;
    fVar9 = uStack_40._4_4_ + fVar9;
  }
  fVar3 = 0.0 - fVar3;
  fVar4 = 0.0 - fVar4;
  fVar5 = 0.0 - fVar5;
  fVar11 = param_6[2] * fVar5 + param_6[1] * fVar4 + *param_6 * fVar3 + 0.0;
  fVar10 = param_6[6] * fVar5 + param_6[5] * fVar4 + param_6[4] * fVar3 + 0.0;
  fVar5 = fVar5 * param_6[10] + fVar4 * param_6[9] + fVar3 * param_6[8] + 0.0;
  if (fVar11 <= fVar10) {
    if (fVar5 < fVar10) {
      fVar5 = param_6[4];
      fVar3 = param_6[5];
      fVar4 = param_6[6];
      fVar10 = param_6[7];
      goto LAB_00101659;
    }
  }
  else if (fVar5 < fVar11) {
    fVar5 = *param_6;
    fVar3 = param_6[1];
    fVar4 = param_6[2];
    fVar10 = param_6[3];
    goto LAB_00101659;
  }
  fVar5 = param_6[8];
  fVar3 = param_6[9];
  fVar4 = param_6[10];
  fVar10 = param_6[0xb];
LAB_00101659:
  *param_7 = *param_1;
  uVar2 = *param_1;
  local_48 = CONCAT44(fVar6 - fVar3,fVar7 - fVar5);
  uStack_40 = CONCAT44(fVar9 - fVar10,fVar8 - fVar4);
  *param_1 = uVar2 + 1;
  pfVar1 = (float *)(param_1 + (ulong)uVar2 * 4 + 4);
  *pfVar1 = fVar7 - fVar5;
  pfVar1[1] = fVar6 - fVar3;
  pfVar1[2] = fVar8 - fVar4;
  pfVar1[3] = fVar9 - fVar10;
  uVar2 = *param_7;
  pfVar1 = (float *)(param_1 + ((long)(int)uVar2 + 0x81) * 4);
  *pfVar1 = fVar7;
  pfVar1[1] = fVar6;
  pfVar1[2] = fVar8;
  pfVar1[3] = fVar9;
  pfVar1 = (float *)(param_1 + ((long)(int)uVar2 + 0x81) * 4 + 0x200);
  *pfVar1 = fVar5;
  pfVar1[1] = fVar3;
  pfVar1[2] = fVar4;
  pfVar1[3] = fVar10;
  auVar12._8_8_ = uStack_40;
  auVar12._0_8_ = local_48;
  return auVar12;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::ClosestPoint::OriginOutsideOfTetrahedronPlanes(JPH::Vec3, JPH::Vec3, JPH::Vec3, JPH::Vec3)
    */

undefined1  [16]
JPH::ClosestPoint::OriginOutsideOfTetrahedronPlanes
          (undefined8 param_1,float param_2,undefined8 param_3,float param_4,undefined8 param_5,
          float param_6,undefined8 param_7,float param_8)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  int iVar5;
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
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_28;
  undefined4 uStack_24;
  
  fVar20 = (float)((ulong)param_5 >> 0x20);
  fVar31 = (float)((ulong)param_1 >> 0x20);
  fVar30 = (float)param_1;
  local_48 = (float)param_3;
  uStack_44 = (float)((ulong)param_3 >> 0x20);
  fVar16 = local_48 - fVar30;
  fVar17 = uStack_44 - fVar31;
  fVar18 = param_4 - param_2;
  fVar9 = (float)param_5 - fVar30;
  fVar10 = fVar20 - fVar31;
  fVar11 = param_6 - param_2;
  local_28 = (float)param_7;
  uStack_24 = (float)((ulong)param_7 >> 0x20);
  fVar6 = local_28 - fVar30;
  fVar7 = uStack_24 - fVar31;
  fVar8 = param_8 - param_2;
  fVar19 = (float)param_5 - local_48;
  fVar20 = fVar20 - uStack_44;
  fVar21 = fVar10 * fVar16 - fVar17 * fVar9;
  fVar22 = fVar11 * fVar17 - fVar18 * fVar10;
  fVar23 = fVar9 * fVar18 - fVar16 * fVar11;
  fVar24 = fVar17 * fVar6 - fVar7 * fVar16;
  fVar26 = fVar18 * fVar7 - fVar8 * fVar17;
  fVar27 = fVar16 * fVar8 - fVar6 * fVar18;
  fVar13 = fVar7 * fVar9 - fVar10 * fVar6;
  fVar14 = fVar8 * fVar10 - fVar11 * fVar7;
  fVar15 = fVar6 * fVar11 - fVar9 * fVar8;
  fVar12 = fVar20 * (local_28 - local_48) - (uStack_24 - uStack_44) * fVar19;
  fVar20 = (param_6 - param_4) * (uStack_24 - uStack_44) - (param_8 - param_4) * fVar20;
  fVar19 = fVar19 * (param_8 - param_4) - (local_28 - local_48) * (param_6 - param_4);
  fVar25 = param_2 * fVar13;
  fVar28 = fVar22 * fVar30 + 0.0 + fVar23 * fVar31 + fVar21 * param_2;
  fVar29 = fVar14 * fVar30 + 0.0 + fVar15 * fVar31 + fVar25;
  fVar30 = fVar30 * fVar26 + 0.0 + fVar31 * fVar27 + param_2 * fVar24;
  fVar31 = local_48 * fVar20 + 0.0 + uStack_44 * fVar19 + param_4 * fVar12;
  auVar1._4_4_ = fVar13 * fVar18 + fVar15 * fVar17 + fVar14 * fVar16 + 0.0;
  auVar1._0_4_ = fVar8 * fVar21 + fVar7 * fVar23 + fVar6 * fVar22 + 0.0;
  auVar1._8_4_ = fVar11 * fVar24 + fVar10 * fVar27 + fVar26 * fVar9 + 0.0;
  auVar1._12_4_ = (uint)(fVar12 * fVar18 + fVar17 * fVar19 + fVar16 * fVar20 + 0.0) ^ __LC4;
  iVar5 = movmskps(fVar25,auVar1);
  if (iVar5 == 0) {
    auVar4._4_4_ = -(uint)(_LC6 <= fVar29);
    auVar4._0_4_ = -(uint)(_LC6 <= fVar28);
    auVar4._8_4_ = -(uint)(_LC6 <= fVar30);
    auVar4._12_4_ = -(uint)(_LC6 <= fVar31);
    return auVar4;
  }
  if (iVar5 == 0xf) {
    auVar2._4_4_ = -(uint)(fVar29 <= _LC8);
    auVar2._0_4_ = -(uint)(fVar28 <= _LC8);
    auVar2._8_4_ = -(uint)(fVar30 <= _LC8);
    auVar2._12_4_ = -(uint)(fVar31 <= _LC8);
    return auVar2;
  }
  auVar3._8_4_ = 0xffffffff;
  auVar3._0_8_ = 0xffffffffffffffff;
  auVar3._12_4_ = 0xffffffff;
  return auVar3;
}



/* JPH::EPAConvexHullBuilder::FindEdge(JPH::EPAConvexHullBuilder::Triangle*, JPH::Vec3,
   JPH::StaticArray<JPH::EPAConvexHullBuilder::Edge, 128u>&) */

ulong JPH::EPAConvexHullBuilder::FindEdge
                (undefined8 param_1_00,float param_2,long param_1,long param_4,uint *param_5)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  int iVar8;
  int iVar9;
  long *plVar10;
  ulong unaff_RBP;
  int iVar11;
  long lVar12;
  long in_FS_OFFSET;
  long local_828;
  undefined8 local_820;
  long lStack_818;
  undefined4 auStack_810 [508];
  long local_20;
  
  local_820 = _LC9;
  iVar8 = 0;
  iVar9 = -1;
  lVar12 = 0;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined1 *)(param_4 + 0x5e) = 1;
  local_828 = param_4;
  iVar11 = -1;
LAB_00101a70:
  do {
    while( true ) {
      iVar9 = iVar9 + 1;
      *(int *)((long)&local_820 + lVar12 * 0x10 + 4) = iVar9;
      if (iVar9 < 3) break;
      plVar10 = (long *)(&local_828)[lVar12 * 2];
      plVar7 = plVar10;
      do {
        if (*plVar7 != 0) {
          *(undefined8 *)(*plVar7 + (long)(int)plVar7[1] * 0x10) = 0;
          *plVar7 = 0;
        }
        plVar7 = plVar7 + 2;
      } while (plVar10 + 6 != plVar7);
      if (*(char *)((long)plVar10 + 0x5f) == '\0') {
        *plVar10 = *(long *)(param_1 + 0x6010);
        *(long **)(param_1 + 0x6010) = plVar10;
      }
      iVar8 = iVar8 + -1;
      if (iVar8 < 0) {
        unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),2 < *param_5);
LAB_00101bf8:
        if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
          return unaff_RBP & 0xffffffff;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      lVar12 = (long)iVar8;
      iVar9 = *(int *)((long)&local_820 + lVar12 * 0x10 + 4);
    }
    while( true ) {
      lVar3 = (&local_828)[lVar12 * 2];
      lVar6 = (long)((*(int *)(&local_820 + lVar12 * 2) + iVar9) % 3);
      plVar10 = (long *)(lVar6 * 0x10 + lVar3);
      lVar4 = *plVar10;
      if ((lVar4 == 0) || (unaff_RBP = (ulong)*(byte *)(lVar4 + 0x5e), *(byte *)(lVar4 + 0x5e) != 0)
         ) goto LAB_00101a70;
      if ((param_2 - *(float *)(lVar4 + 0x48)) * *(float *)(lVar4 + 0x38) +
          ((float)((ulong)param_1_00 >> 0x20) - *(float *)(lVar4 + 0x44)) * *(float *)(lVar4 + 0x34)
          + *(float *)(lVar4 + 0x30) * ((float)param_1_00 - *(float *)(lVar4 + 0x40)) + 0.0 <= 0.0)
      break;
      iVar8 = iVar8 + 1;
      lVar3 = plVar10[1];
      *(undefined1 *)(lVar4 + 0x5e) = 1;
      lVar12 = (long)iVar8;
      *(int *)(&local_820 + lVar12 * 2) = (int)lVar3;
      iVar9 = 1;
      (&local_828)[lVar12 * 2] = lVar4;
      *(undefined4 *)((long)&local_820 + lVar12 * 0x10 + 4) = 1;
    }
    if ((*(int *)((long)plVar10 + 0xc) != iVar11) && (iVar11 != -1)) goto LAB_00101bf8;
    iVar11 = *(int *)(lVar4 + 0xc + (long)(int)plVar10[1] * 0x10);
    uVar2 = *param_5;
    *param_5 = uVar2 + 1;
    puVar1 = (undefined8 *)(lVar3 + lVar6 * 0x10);
    uVar5 = puVar1[1];
    *(undefined8 *)(param_5 + (ulong)uVar2 * 4 + 2) = *puVar1;
    *(undefined8 *)(param_5 + (ulong)uVar2 * 4 + 2 + 2) = uVar5;
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::EPAConvexHullBuilder::Triangle::Triangle(int, int, int, JPH::Vec3 const*) */

void __thiscall
JPH::EPAConvexHullBuilder::Triangle::Triangle
          (Triangle *this,int param_1,int param_2,int param_3,Vec3 *param_4)

{
  float *pfVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  float fVar9;
  float fVar12;
  float fVar13;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined4 uVar25;
  float fVar26;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  *(undefined4 *)(this + 0x50) = 0x7f7fffff;
  uVar25 = _LC12;
  *(int *)(this + 0xc) = param_1;
  *(int *)(this + 0x2c) = param_3;
  uVar4 = *(undefined8 *)(param_4 + (long)param_1 * 0x10);
  uVar5 = *(undefined8 *)((long)(param_4 + (long)param_1 * 0x10) + 8);
  *(int *)(this + 0x1c) = param_2;
  pfVar1 = (float *)(param_4 + (long)param_3 * 0x10);
  fVar9 = *pfVar1;
  fVar12 = pfVar1[1];
  fVar13 = pfVar1[2];
  fVar20 = pfVar1[3];
  *(undefined2 *)(this + 0x5d) = 0;
  uVar6 = *(undefined8 *)(param_4 + (long)param_2 * 0x10);
  uVar7 = *(undefined8 *)((long)(param_4 + (long)param_2 * 0x10) + 8);
  local_28 = (float)uVar4;
  fStack_24 = (float)((ulong)uVar4 >> 0x20);
  fStack_20 = (float)uVar5;
  fStack_1c = (float)((ulong)uVar5 >> 0x20);
  fVar21 = fVar9 - local_28;
  fVar22 = fVar12 - fStack_24;
  fVar23 = fVar13 - fStack_20;
  fVar24 = fVar20 - fStack_1c;
  this[0x5f] = (Triangle)0x0;
  local_18 = (float)uVar6;
  fStack_14 = (float)((ulong)uVar6 >> 0x20);
  fStack_10 = (float)uVar7;
  fStack_c = (float)((ulong)uVar7 >> 0x20);
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 0x10) = 0;
  auVar14._0_4_ = local_28 + local_18 + fVar9;
  auVar14._4_4_ = fStack_24 + fStack_14 + fVar12;
  auVar14._8_4_ = fStack_20 + fStack_10 + fVar13;
  auVar14._12_4_ = fStack_1c + fStack_c + fVar20;
  *(undefined8 *)(this + 0x20) = 0;
  fVar9 = fVar9 - local_18;
  fVar12 = fVar12 - fStack_14;
  fVar13 = fVar13 - fStack_10;
  auVar15._4_4_ = uVar25;
  auVar15._0_4_ = uVar25;
  auVar15._8_4_ = uVar25;
  auVar15._12_4_ = uVar25;
  auVar15 = divps(auVar14,auVar15);
  fVar16 = local_18 - local_28;
  fVar17 = fStack_14 - fStack_24;
  fVar18 = fStack_10 - fStack_20;
  fStack_1c = fStack_c - fStack_1c;
  fVar26 = fVar23 * fVar23 + fVar22 * fVar22 + fVar21 * fVar21 + 0.0;
  *(undefined1 (*) [16])(this + 0x40) = auVar15;
  fVar19 = fVar13 * fVar13 + fVar12 * fVar12 + fVar9 * fVar9 + 0.0;
  if (fVar19 <= fVar26) {
    fVar21 = fVar12 * fVar16 - fVar17 * fVar9;
    fVar22 = fVar13 * fVar17 - fVar18 * fVar12;
    fVar23 = fVar9 * fVar18 - fVar16 * fVar13;
    *(float *)(this + 0x30) = fVar22;
    *(float *)(this + 0x34) = fVar23;
    *(float *)(this + 0x38) = fVar21;
    *(float *)(this + 0x3c) = fVar21;
    fVar24 = fVar21 * fVar21 + fVar23 * fVar23 + fVar22 * fVar22 + 0.0;
    if (_LC13 < fVar24) {
      fVar21 = fVar21 * auVar15._8_4_ + fVar23 * auVar15._4_4_ + fVar22 * auVar15._0_4_ + 0.0;
      *(float *)(this + 0x50) = ((float)((uint)fVar21 & _LC14) * fVar21) / fVar24;
      fVar21 = fVar9 * fVar16 + 0.0 + fVar12 * fVar17 + fVar13 * fVar18;
      fVar22 = fVar16 * fVar16 + 0.0 + fVar17 * fVar17 + fVar18 * fVar18;
      fVar23 = fVar22 * fVar19 - fVar21 * fVar21;
      if (0.0 < fVar23) {
        uVar25 = (undefined4)_LC15;
        uVar8 = (ulong)_LC15 >> 0x20;
        this[0x5c] = (Triangle)0x0;
        fVar24 = __LC16;
        fVar26 = fVar18 * fStack_10 + fVar17 * fStack_14 + fVar16 * local_18 + 0.0;
        fVar9 = fVar12 * fStack_14 + fVar9 * local_18 + 0.0 + fStack_10 * fVar13;
        auVar11._0_4_ = fVar19 * fVar26 - fVar9 * fVar21;
        auVar11._4_4_ = fVar21 * fVar26 - fVar9 * fVar22;
        auVar11._8_4_ =
             fVar19 * fStack_1c -
             fVar12 * (fVar13 * fVar16 + 0.0 + fVar18 * fVar17 + fVar18 * fVar18);
        auVar11._12_4_ =
             fVar22 * fStack_1c -
             fVar12 * ((fVar20 - fStack_c) * fVar16 + 0.0 + fStack_1c * fVar17 + fStack_1c * fVar18)
        ;
        auVar3._4_4_ = fVar23;
        auVar3._0_4_ = fVar23;
        auVar3._8_4_ = uVar25;
        auVar3._12_4_ = (int)uVar8;
        auVar15 = divps(auVar11,auVar3);
        *(long *)(this + 0x54) = auVar15._0_8_;
        if (((fVar24 < auVar15._0_4_) && (__LC16 < auVar15._4_4_)) &&
           (auVar15._0_4_ + auVar15._4_4_ < _LC17)) goto LAB_0010213c;
      }
    }
  }
  else {
    fVar9 = fVar22 * fVar16 - fVar17 * fVar21;
    fVar12 = fVar23 * fVar17 - fVar18 * fVar22;
    fVar13 = fVar21 * fVar18 - fVar16 * fVar23;
    *(float *)(this + 0x30) = fVar12;
    *(float *)(this + 0x34) = fVar13;
    *(float *)(this + 0x38) = fVar9;
    *(float *)(this + 0x3c) = fVar9;
    fVar20 = fVar13 * fVar13 + fVar12 * fVar12 + 0.0 + fVar9 * fVar9;
    if (_LC13 < fVar20) {
      fVar9 = fVar9 * auVar15._8_4_ + fVar13 * auVar15._4_4_ + auVar15._0_4_ * fVar12 + 0.0;
      *(float *)(this + 0x50) = ((float)((uint)fVar9 & _LC14) * fVar9) / fVar20;
      fVar9 = fVar18 * fVar18 + fVar17 * fVar17 + fVar16 * fVar16 + 0.0;
      fVar12 = fVar18 * fVar23 + fVar17 * fVar22 + fVar16 * fVar21 + 0.0;
      fVar13 = fVar9 * fVar26 - fVar12 * fVar12;
      if (0.0 < fVar13) {
        this[0x5c] = (Triangle)0x1;
        fVar20 = __LC16;
        auVar10._0_4_ =
             (fVar21 * local_28 + 0.0 + fVar22 * fStack_24 + fVar23 * fStack_20) * fVar12 -
             (fVar16 * local_28 + 0.0 + fStack_24 * fVar17 + fStack_20 * fVar18) * fVar26;
        auVar10._4_4_ =
             (fVar16 * local_28 + 0.0 + fVar17 * fStack_24 + fVar18 * fStack_20) * fVar12 -
             (fVar21 * local_28 + 0.0 + fStack_24 * fVar22 + fStack_20 * fVar23) * fVar9;
        auVar10._8_4_ =
             (fVar23 * 0.0 + 0.0 + fVar18 * 0.0 + fVar18 * 0.0) * fStack_1c -
             (fVar18 * 0.0 + 0.0 + fVar23 * 0.0 + fVar23 * 0.0) * fVar23;
        auVar10._12_4_ =
             (fVar24 * 0.0 + 0.0 + fStack_1c * 0.0 + fStack_1c * 0.0) * fStack_1c -
             (fStack_1c * 0.0 + 0.0 + fVar24 * 0.0 + fVar24 * 0.0) * fVar18;
        auVar2._4_4_ = fVar13;
        auVar2._0_4_ = fVar13;
        auVar2._8_4_ = (int)_LC15;
        auVar2._12_4_ = (int)((ulong)_LC15 >> 0x20);
        auVar15 = divps(auVar10,auVar2);
        *(long *)(this + 0x54) = auVar15._0_8_;
        if (((fVar20 < auVar15._0_4_) && (__LC16 < auVar15._4_4_)) &&
           (auVar15._4_4_ + auVar15._0_4_ < _LC17)) {
LAB_0010213c:
          this[0x5d] = (Triangle)0x1;
          return;
        }
      }
    }
  }
  return;
}



/* JPH::EPAConvexHullBuilder::AddPoint(JPH::EPAConvexHullBuilder::Triangle*, int, float,
   JPH::StaticArray<JPH::EPAConvexHullBuilder::Triangle*, 128u>&) */

uint __thiscall
JPH::EPAConvexHullBuilder::AddPoint
          (EPAConvexHullBuilder *this,Triangle *param_1,int param_2,float param_3,
          StaticArray *param_4)

{
  float *pfVar1;
  float fVar2;
  Triangle TVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  int iVar13;
  uint uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  ulong uVar20;
  int *piVar21;
  EPAConvexHullBuilder *this_00;
  ulong uVar22;
  long in_FS_OFFSET;
  int local_848;
  int local_844;
  long local_840;
  int local_838 [510];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_848 = 0;
  puVar15 = (undefined8 *)(((ulong)(uint)param_2 + 1) * 0x10 + *(long *)(this + 0x6020));
  uVar14 = FindEdge(*puVar15,puVar15[1],this,param_1,&local_848);
  iVar13 = local_848;
  if ((char)uVar14 == '\0') {
LAB_00102410:
    uVar14 = 0;
  }
  else if (0 < local_848) {
    uVar20 = (ulong)(local_848 + 1);
    lVar8 = *(long *)(this + 0x6020);
    uVar22 = 1;
    do {
      while( true ) {
        this_00 = *(EPAConvexHullBuilder **)(this + 0x6010);
        iVar4 = (&local_844)[uVar22 * 4];
        iVar5 = local_838[(long)(int)((long)((ulong)(uint)((int)uVar22 >> 0x1f) << 0x20 |
                                            uVar22 & 0xffffffff) % (long)iVar13) * 4 + 1];
        if (this_00 == (EPAConvexHullBuilder *)0x0) {
          iVar7 = *(int *)(this + 0x6018);
          if (0xff < iVar7) goto LAB_00102410;
          *(int *)(this + 0x6018) = iVar7 + 1;
          this_00 = this + (long)iVar7 * 0x60 + 0x10;
        }
        else {
          *(undefined8 *)(this + 0x6010) = *(undefined8 *)this_00;
        }
        Triangle::Triangle((Triangle *)this_00,iVar4,iVar5,param_2,(Vec3 *)(lVar8 + 0x10));
        uVar6 = *(uint *)param_4;
        TVar3 = ((Triangle *)this_00)[0x5d];
        fVar2 = *(float *)((Triangle *)this_00 + 0x50);
        *(uint *)param_4 = uVar6 + 1;
        *(EPAConvexHullBuilder **)(param_4 + (ulong)uVar6 * 8 + 8) = this_00;
        if (((TVar3 == (Triangle)0x0) || (param_3 <= fVar2)) && (0.0 <= fVar2)) break;
        uVar16 = (ulong)*(uint *)(this + 0x6028) + 1;
        *(uint *)(this + 0x6028) = *(uint *)(this + 0x6028) + 1;
        *(EPAConvexHullBuilder **)(this + uVar16 * 8 + 0x6028) = this_00;
        lVar17 = (uVar16 & 0xffffffff) - 1;
        ((Triangle *)this_00)[0x5f] = (Triangle)0x1;
        if (0 < lVar17) {
          lVar19 = lVar17 * 8;
          do {
            lVar12 = lVar19 + 0x6030;
            lVar17 = lVar17 + -1 >> 1;
            lVar9 = *(long *)(this + lVar12);
            lVar19 = lVar17 * 8;
            lVar10 = *(long *)(this + lVar19 + 0x6030);
            fVar2 = *(float *)(lVar10 + 0x50);
            pfVar1 = (float *)(lVar9 + 0x50);
            if (fVar2 < *pfVar1 || fVar2 == *pfVar1) break;
            *(long *)(this + lVar19 + 0x6030) = lVar9;
            *(long *)(this + lVar12) = lVar10;
          } while (lVar17 != 0);
        }
        uVar22 = uVar22 + 1;
        if (uVar20 == uVar22) goto LAB_00102313;
      }
      uVar22 = uVar22 + 1;
    } while (uVar20 != uVar22);
LAB_00102313:
    uVar14 = uVar14 & 0xff;
    uVar22 = 1;
    piVar21 = local_838;
    do {
      plVar11 = *(long **)(param_4 + uVar22 * 8);
      iVar4 = *piVar21;
      lVar8 = *(long *)(piVar21 + -2);
      *(int *)(plVar11 + 1) = iVar4;
      plVar18 = (long *)((long)iVar4 * 0x10 + lVar8);
      *plVar11 = lVar8;
      *plVar18 = (long)plVar11;
      *(undefined4 *)(plVar18 + 1) = 0;
      lVar8 = *(long *)(param_4 +
                       (long)((int)((long)((ulong)(uint)((int)uVar22 >> 0x1f) << 0x20 |
                                          uVar22 & 0xffffffff) % (long)iVar13) + 1) * 8);
      lVar17 = *(long *)(param_4 + uVar22 * 8);
      uVar22 = uVar22 + 1;
      *(long *)(lVar17 + 0x10) = lVar8;
      *(undefined4 *)(lVar17 + 0x18) = 2;
      *(long *)(lVar8 + 0x20) = lVar17;
      *(undefined4 *)(lVar8 + 0x28) = 1;
      piVar21 = piVar21 + 4;
    } while (uVar20 != uVar22);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar14;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* bool 
   JPH::EPAPenetrationDepth::GetPenetrationDepthStepEPA<JPH::AddConvexRadius<JPH::ConvexShape::Support>,
   JPH::TriangleConvexSupport>(JPH::AddConvexRadius<JPH::ConvexShape::Support> const&,
   JPH::TriangleConvexSupport const&, float, JPH::Vec3&, JPH::Vec3&, JPH::Vec3&) */

bool __thiscall
JPH::EPAPenetrationDepth::
GetPenetrationDepthStepEPA<JPH::AddConvexRadius<JPH::ConvexShape::Support>,JPH::TriangleConvexSupport>
          (EPAPenetrationDepth *this,AddConvexRadius *param_1,TriangleConvexSupport *param_2,
          float param_3,Vec3 *param_4,Vec3 *param_5,Vec3 *param_6)

{
  ulong uVar1;
  undefined1 *puVar2;
  long *plVar3;
  float *pfVar4;
  Vec3 *pVVar5;
  Triangle *pTVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  char cVar14;
  bool bVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined1 *puVar22;
  Triangle *pTVar23;
  ulong uVar24;
  Triangle *pTVar25;
  long lVar26;
  ulong uVar27;
  float *pfVar28;
  int iVar29;
  uint uVar30;
  long in_FS_OFFSET;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar35;
  undefined1 auVar34 [12];
  undefined8 extraout_XMM0_Qb;
  float fVar36;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  float fVar37;
  float fVar42;
  uint uVar43;
  float fVar44;
  undefined1 auVar38 [16];
  uint uVar41;
  uint uVar45;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  float fVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  undefined1 auVar49 [16];
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  undefined1 auVar56 [16];
  undefined1 local_8030 [32768];
  
  puVar2 = &stack0xffffffffffffffd0;
  do {
    puVar22 = puVar2;
    *(undefined8 *)(puVar22 + -0x1000) = *(undefined8 *)(puVar22 + -0x1000);
    puVar2 = puVar22 + -0x1000;
  } while (puVar22 + -0x1000 != local_8030);
  uVar30 = *(uint *)(this + 0xc0);
  iVar29 = uVar30 << 4;
  *(Vec3 **)(puVar22 + -0x14a8) = param_5;
  *(Vec3 **)(puVar22 + -0x14a0) = param_6;
  pTVar25 = (Triangle *)(puVar22 + 0x828);
  *(Vec3 **)(puVar22 + -0x14b0) = param_4;
  *(float *)(puVar22 + -0x14b4) = param_3;
  *(undefined8 *)(puVar22 + 0x6ff0) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  puVar2 = puVar22 + 0x7c8;
  *(undefined1 **)(puVar22 + -0x14f8) = puVar2;
  *(undefined1 **)(puVar22 + -0x1508) = puVar22 + -0x1058;
  *(Triangle **)(puVar22 + -0x1518) = pTVar25;
  *(undefined1 **)(puVar22 + -0x1510) = puVar2;
  *(undefined1 **)(puVar22 + -0x14d8) = puVar2;
  *(Triangle **)(puVar22 + -0x14d0) = pTVar25;
  *(undefined1 **)(puVar22 + -0x14c0) = puVar22 + -0x1048;
  *(undefined8 *)(puVar22 + -0x1520) = 0x1024ef;
  __memcpy_chk(puVar22 + -0x1048,this,iVar29,0x1800);
  *(undefined8 *)(puVar22 + -0x1520) = 0x102508;
  __memcpy_chk(puVar22 + -0x848,this + 0x40,iVar29,0x1000);
  *(undefined8 *)(puVar22 + -0x1520) = 0x102524;
  __memcpy_chk(puVar22 + -0x48,this + 0x80,iVar29,0x800);
  uVar47 = *(undefined8 *)(puVar22 + -0x1518);
  uVar48 = *(undefined8 *)(puVar22 + -0x1510);
  *(uint *)(puVar22 + -0x1058) = uVar30;
  if (uVar30 == 1) {
    uVar7 = *(undefined8 *)(puVar22 + -0x1508);
    uVar8 = *(undefined8 *)param_1;
    *(undefined8 *)(puVar22 + -0x1518) = uVar47;
    *(undefined8 *)(puVar22 + -0x1510) = uVar48;
    *(undefined4 *)(puVar22 + -0x1058) = 0;
    *(undefined8 *)(puVar22 + -0x1520) = 0x102e9f;
    SupportPoints::Add<JPH::AddConvexRadius<JPH::ConvexShape::Support>,JPH::TriangleConvexSupport>
              (uVar7,uVar8,param_2,puVar22 + -0x1478);
    uVar47 = *(undefined8 *)param_1;
    *(undefined8 *)(puVar22 + -0x1520) = 0x102ec5;
    SupportPoints::Add<JPH::AddConvexRadius<JPH::ConvexShape::Support>,JPH::TriangleConvexSupport>
              (uVar7,uVar47,param_2,puVar22 + -0x1474);
    uVar47 = *(undefined8 *)param_1;
    *(undefined8 *)(puVar22 + -0x1520) = 0x102ef5;
    SupportPoints::Add<JPH::AddConvexRadius<JPH::ConvexShape::Support>,JPH::TriangleConvexSupport>
              (uVar7,uVar47,param_2,puVar22 + -0x1470);
    uVar47 = *(undefined8 *)param_1;
    *(undefined8 *)(puVar22 + -0x1520) = 0x102f2f;
    SupportPoints::Add<JPH::AddConvexRadius<JPH::ConvexShape::Support>,JPH::TriangleConvexSupport>
              (uVar7,uVar47,param_2,puVar22 + -0x146c);
    uVar30 = *(uint *)(puVar22 + -0x1058);
    uVar47 = *(undefined8 *)(puVar22 + -0x1518);
    uVar48 = *(undefined8 *)(puVar22 + -0x1510);
  }
  else if (uVar30 == 2) {
    auVar56._0_4_ = *(float *)(puVar22 + -0x1038) - *(float *)(puVar22 + -0x1048);
    auVar56._4_4_ = *(float *)(puVar22 + -0x1034) - *(float *)(puVar22 + -0x1044);
    auVar56._8_4_ = *(float *)(puVar22 + -0x1030) - *(float *)(puVar22 + -0x1040);
    auVar56._12_4_ = *(float *)(puVar22 + -0x102c) - *(float *)(puVar22 + -0x103c);
    auVar38._0_4_ =
         SQRT(auVar56._8_4_ * auVar56._8_4_ +
              auVar56._4_4_ * auVar56._4_4_ + auVar56._0_4_ * auVar56._0_4_ + 0.0);
    auVar38._4_4_ = auVar38._0_4_;
    auVar38._8_4_ = auVar38._0_4_;
    auVar38._12_4_ = auVar38._0_4_;
    auVar56 = divps(auVar56,auVar38);
    uVar30 = (__LC54 << 0x1f) >> 0x1f;
    uVar41 = (_UNK_00104be4 << 0x1f) >> 0x1f;
    uVar43 = (_UNK_00104be8 << 0x1f) >> 0x1f;
    uVar45 = (_UNK_00104bec << 0x1f) >> 0x1f;
    fVar36 = auVar56._0_4_;
    fVar35 = auVar56._4_4_;
    fVar31 = auVar56._8_4_;
    *(undefined1 (*) [16])(puVar22 + -0x1518) = auVar56;
    *(long *)(puVar22 + -0x1518) = auVar56._0_8_;
    *(ulong *)(puVar22 + -0x1510) =
         *(ulong *)(puVar22 + -0x1510) & 0xffffffff00000000 | (ulong)(uint)fVar31;
    fVar46 = (float)(__LC50 & ((__LC74 & uVar30 | ~uVar30 & (uint)((float)__LC54 + __LC66)) ^
                              __LC49 & __LC54 << 0x1e ^ __LC54 << 0x1f) |
                    ~__LC50 & (uint)((float)(((uint)((float)__LC54 + __LC66) & uVar30 |
                                             ~uVar30 & __LC74) ^ (__LC48 ^ __LC54 << 0x1e) & __LC49)
                                    * *(float *)(puVar22 + -0x1518)));
    fVar37 = (float)(_UNK_00104bc4 &
                     ((_UNK_00104c04 & uVar41 |
                      ~uVar41 & (uint)((float)_UNK_00104be4 + _UNK_00104bf4)) ^
                     _UNK_00104bb4 & _UNK_00104be4 << 0x1e ^ _UNK_00104be4 << 0x1f) |
                    ~_UNK_00104bc4 &
                    (uint)((float)(((uint)((float)_UNK_00104be4 + _UNK_00104bf4) & uVar41 |
                                   ~uVar41 & _UNK_00104c04) ^
                                  (_UNK_00104ba4 ^ _UNK_00104be4 << 0x1e) & _UNK_00104bb4) *
                          *(float *)(puVar22 + -0x1514)));
    fVar42 = (float)((uint)_LC9 &
                     ((_UNK_00104c08 & uVar43 |
                      ~uVar43 & (uint)((float)_UNK_00104be8 + _UNK_00104bf8)) ^
                     _UNK_00104bb8 & _UNK_00104be8 << 0x1e ^ _UNK_00104be8 << 0x1f) |
                    ~(uint)_LC9 &
                    (uint)((float)(((uint)((float)_UNK_00104be8 + _UNK_00104bf8) & uVar43 |
                                   ~uVar43 & _UNK_00104c08) ^
                                  (_UNK_00104ba8 ^ _UNK_00104be8 << 0x1e) & _UNK_00104bb8) *
                          *(float *)(puVar22 + -0x1510)));
    fVar44 = (float)(_LC9._4_4_ &
                     ((_UNK_00104c0c & uVar45 |
                      ~uVar45 & (uint)((float)_UNK_00104bec + _UNK_00104bfc)) ^
                     _UNK_00104bbc & _UNK_00104bec << 0x1e ^ _UNK_00104bec << 0x1f) |
                    ~_LC9._4_4_ &
                    (uint)((float)(((uint)((float)_UNK_00104bec + _UNK_00104bfc) & uVar45 |
                                   ~uVar45 & _UNK_00104c0c) ^
                                  (_UNK_00104bac ^ _UNK_00104bec << 0x1e) & _UNK_00104bbc) *
                          *(float *)(puVar22 + -0x150c)));
    fVar50 = fVar46 + fVar46;
    fVar54 = fVar37 + fVar37;
    fVar33 = (fVar42 + fVar42) * fVar42;
    fVar55 = (fVar42 + fVar42) * fVar44;
    fVar51 = fVar50 * fVar42 + fVar54 * fVar44;
    fVar53 = fVar50 * fVar42 - fVar54 * fVar44;
    fVar32 = fVar42 * fVar54 + fVar50 * fVar44;
    fVar44 = fVar42 * fVar54 - fVar50 * fVar44;
    fVar52 = (_LC3 - fVar46 * fVar50) - fVar54 * fVar37;
    fVar42 = fVar37 * fVar50 + fVar55;
    fVar55 = fVar37 * fVar50 - fVar55;
    fVar46 = (_LC3 - fVar33) - fVar46 * fVar50;
    fVar33 = (_LC3 - fVar54 * fVar37) - fVar33;
    if ((float)((uint)fVar35 & _LC14) < (float)(_LC14 & (uint)fVar36)) {
      auVar49._4_4_ = 0;
      auVar49._0_4_ = fVar31;
      auVar49._12_4_ = (uint)fVar36 ^ __LC4;
      auVar49._8_4_ = (uint)fVar36 ^ __LC4;
      auVar40._0_4_ = SQRT(fVar36 * fVar36 + fVar31 * fVar31);
      auVar40._4_4_ = auVar40._0_4_;
      auVar40._8_4_ = auVar40._0_4_;
      auVar40._12_4_ = auVar40._0_4_;
      auVar56 = divps(auVar49,auVar40);
      *(undefined1 (*) [16])(puVar22 + -0x14e8) = auVar56;
    }
    else {
      auVar10._8_4_ = (uint)fVar35 ^ __LC4;
      auVar10._4_4_ = (uint)fVar35 ^ __LC4;
      auVar10._0_4_ = fVar31;
      auVar10._12_4_ = 0;
      auVar39._0_4_ = SQRT(fVar35 * fVar35 + fVar31 * fVar31);
      auVar39._4_4_ = auVar39._0_4_;
      auVar39._8_4_ = auVar39._0_4_;
      auVar39._12_4_ = auVar39._0_4_;
      auVar56 = divps(auVar10 << 0x20,auVar39);
      *(undefined1 (*) [16])(puVar22 + -0x14e8) = auVar56;
    }
    fVar36 = *(float *)(puVar22 + -0x14e4);
    fVar35 = *(float *)(puVar22 + -0x14e8);
    uVar7 = *(undefined8 *)(puVar22 + -0x1508);
    *(undefined8 *)(puVar22 + -0x1488) = uVar47;
    *(undefined8 *)(puVar22 + -0x1480) = uVar48;
    uVar47 = *(undefined8 *)param_1;
    fVar31 = *(float *)(puVar22 + -0x14e0);
    fVar37 = fVar36 * fVar46 + fVar35 * fVar42 + fVar31 * fVar44 + _UNK_00104bd4;
    *(float *)(puVar22 + -0x1518) = fVar36 * fVar55 + fVar35 * fVar33 + fVar31 * fVar51 + __LC51;
    *(float *)(puVar22 + -0x1514) = fVar37;
    *(float *)(puVar22 + -0x1510) =
         fVar36 * fVar32 + fVar35 * fVar53 + fVar31 * fVar52 + _UNK_00104bd8;
    *(float *)(puVar22 + -0x150c) = fVar36 * 0.0 + fVar35 * 0.0 + fVar31 * 0.0 + _LC3;
    fVar36 = *(float *)(puVar22 + -0x1518);
    fVar35 = *(float *)(puVar22 + -0x1510);
    *(float *)(puVar22 + -0x1498) = fVar33 * fVar36 + fVar37 * fVar55 + fVar35 * fVar51 + __LC51;
    *(float *)(puVar22 + -0x1494) =
         fVar42 * fVar36 + fVar37 * fVar46 + fVar35 * fVar44 + _UNK_00104bd4;
    *(float *)(puVar22 + -0x1490) =
         fVar53 * fVar36 + fVar37 * fVar32 + fVar35 * fVar52 + _UNK_00104bd8;
    *(float *)(puVar22 + -0x148c) = fVar36 * 0.0 + fVar37 * 0.0 + fVar35 * 0.0 + _LC3;
    *(undefined8 *)(puVar22 + -0x1520) = 0x102de7;
    SupportPoints::Add<JPH::AddConvexRadius<JPH::ConvexShape::Support>,JPH::TriangleConvexSupport>
              (uVar7,uVar47,param_2,puVar22 + -0x1474);
    uVar47 = *(undefined8 *)param_1;
    *(undefined8 *)(puVar22 + -0x1520) = 0x102e0e;
    SupportPoints::Add<JPH::AddConvexRadius<JPH::ConvexShape::Support>,JPH::TriangleConvexSupport>
              (uVar7,uVar47,param_2,puVar22 + -0x1470);
    uVar47 = *(undefined8 *)param_1;
    *(undefined8 *)(puVar22 + -0x1520) = 0x102e3c;
    SupportPoints::Add<JPH::AddConvexRadius<JPH::ConvexShape::Support>,JPH::TriangleConvexSupport>
              (uVar7,uVar47,param_2,puVar22 + -0x146c);
    uVar30 = *(uint *)(puVar22 + -0x1058);
    uVar47 = *(undefined8 *)(puVar22 + -0x1488);
    uVar48 = *(undefined8 *)(puVar22 + -0x1480);
  }
  pVVar5 = *(Vec3 **)(puVar22 + -0x14c0);
  *(undefined8 *)(puVar22 + -0x1518) = uVar47;
  *(undefined8 *)(puVar22 + -0x1510) = uVar48;
  *(undefined8 *)(puVar22 + 0x67c8) = 0;
  *(undefined8 *)(puVar22 + 0x67d8) = *(undefined8 *)(puVar22 + -0x1508);
  *(undefined4 *)(puVar22 + 0x67e0) = 0;
  *(undefined4 *)(puVar22 + 0x67d0) = 1;
  *(undefined8 *)(puVar22 + -0x1520) = 0x102599;
  EPAConvexHullBuilder::Triangle::Triangle(*(Triangle **)(puVar22 + -0x14f8),0,1,2,pVVar5);
  *(undefined4 *)(puVar22 + 0x67d0) = 2;
  *(undefined8 *)(puVar22 + -0x1520) = 0x1025bb;
  EPAConvexHullBuilder::Triangle::Triangle(pTVar25,0,2,1,pVVar5);
  uVar47 = *(undefined8 *)(puVar22 + -0x14f8);
  *(Triangle **)(puVar22 + 0x7c8) = pTVar25;
  *(undefined4 *)(puVar22 + 2000) = 2;
  *(undefined8 *)(puVar22 + 0x848) = uVar47;
  *(undefined4 *)(puVar22 + 0x850) = 0;
  *(Triangle **)(puVar22 + 0x7d8) = pTVar25;
  *(undefined4 *)(puVar22 + 0x7e0) = 1;
  *(undefined8 *)(puVar22 + 0x838) = uVar47;
  *(undefined4 *)(puVar22 + 0x840) = 1;
  *(Triangle **)(puVar22 + 0x7e8) = pTVar25;
  *(undefined4 *)(puVar22 + 0x7f0) = 0;
  *(undefined8 *)(puVar22 + 0x828) = uVar47;
  *(undefined4 *)(puVar22 + 0x830) = 2;
  puVar22[0x827] = 1;
  *(undefined4 *)(puVar22 + 0x67e0) = 2;
  puVar22[0x887] = 1;
  *(undefined8 *)(puVar22 + 0x67e8) = *(undefined8 *)(puVar22 + -0x14d8);
  *(undefined8 *)(puVar22 + 0x67f0) = *(undefined8 *)(puVar22 + -0x14d0);
  if (*(float *)(puVar22 + 0x818) < *(float *)(puVar22 + 0x878) ||
      *(float *)(puVar22 + 0x818) == *(float *)(puVar22 + 0x878)) {
    pTVar25 = *(Triangle **)(puVar22 + -0x14f8);
  }
  else {
    *(undefined8 *)(puVar22 + 0x67e8) = *(undefined8 *)(puVar22 + -0x1518);
    *(undefined8 *)(puVar22 + 0x67f0) = *(undefined8 *)(puVar22 + -0x1510);
  }
  if (uVar30 < 4) {
    uVar24 = 2;
    uVar27 = 2;
  }
  else {
    pfVar28 = (float *)(puVar22 + -0x1018);
    uVar30 = 3;
    uVar24 = 2;
    uVar27 = 2;
    plVar3 = (long *)(puVar22 + 0x67e8);
    do {
      if (uVar27 != 0) {
        pTVar23 = (Triangle *)0x0;
        fVar36 = 0.0;
        plVar16 = plVar3;
LAB_001026fd:
        do {
          pTVar6 = (Triangle *)*plVar16;
          if (pTVar6[0x5e] == (Triangle)0x0) {
            fVar32 = *(float *)(pTVar6 + 0x30);
            fVar33 = *(float *)(pTVar6 + 0x34);
            fVar35 = *(float *)(pTVar6 + 0x38);
            fVar31 = (pfVar28[2] - *(float *)(pTVar6 + 0x48)) * fVar35 +
                     (pfVar28[1] - *(float *)(pTVar6 + 0x44)) * fVar33 +
                     (*pfVar28 - *(float *)(pTVar6 + 0x40)) * fVar32 + 0.0;
            if (0.0 < fVar31) {
              fVar32 = (fVar31 * fVar31) /
                       (fVar35 * fVar35 + fVar33 * fVar33 + fVar32 * fVar32 + 0.0);
              if (fVar36 < fVar32) {
                pTVar23 = pTVar6;
                fVar36 = fVar32;
              }
              plVar16 = plVar16 + 1;
              if (plVar3 + uVar27 == plVar16) break;
              goto LAB_001026fd;
            }
          }
          plVar16 = plVar16 + 1;
        } while (plVar3 + uVar27 != plVar16);
        if (pTVar23 != (Triangle *)0x0) {
          *(undefined4 *)(puVar22 + -0x1468) = 0;
          *(undefined8 *)(puVar22 + -0x1520) = 0x1027b3;
          cVar14 = EPAConvexHullBuilder::AddPoint
                             ((EPAConvexHullBuilder *)(puVar22 + 0x7b8),pTVar23,uVar30,_LC10,
                              (StaticArray *)(puVar22 + -0x1468));
          if (cVar14 == '\0') goto LAB_00102aa0;
          uVar24 = (ulong)*(uint *)(puVar22 + 0x67e0);
          pTVar25 = *(Triangle **)(puVar22 + 0x67e8);
          uVar27 = uVar24;
        }
      }
      uVar30 = uVar30 + 1;
      pfVar28 = pfVar28 + 4;
    } while (uVar30 < *(uint *)(puVar22 + -0x1058));
  }
  uVar47 = *(undefined8 *)(puVar22 + -0x1508);
  do {
    uVar1 = uVar27 * 8;
    lVar21 = *(long *)(puVar22 + uVar1 + 0x67e0);
    lVar18 = ((long)uVar1 >> 3) + -1;
    if (pTVar25[0x5e] == (Triangle)0x0) {
      if (0.0 <= *(float *)(pTVar25 + 0x50)) {
        pTVar23 = (Triangle *)0x0;
        fVar36 = _LC10;
        break;
      }
      *(Triangle **)(puVar22 + uVar1 + 0x67e0) = pTVar25;
      *(long *)(puVar22 + 0x67e8) = lVar21;
      if (0x10 < uVar1) {
        fVar36 = *(float *)(lVar21 + 0x50);
        lVar20 = 1;
        lVar19 = 0;
        lVar26 = 0;
        do {
          fVar32 = *(float *)(*(long *)(puVar22 + lVar20 * 8 + 0x67e8) + 0x50);
          lVar19 = lVar19 + 2;
          if (fVar36 <= fVar32) {
            if ((lVar18 <= lVar19) ||
               (lVar17 = lVar19,
               fVar36 < *(float *)(*(long *)(puVar22 + lVar19 * 8 + 0x67e8) + 0x50) ||
               fVar36 == *(float *)(*(long *)(puVar22 + lVar19 * 8 + 0x67e8) + 0x50))) break;
          }
          else {
            lVar17 = lVar20;
            if ((lVar19 < lVar18) &&
               (lVar17 = lVar19,
               fVar32 < *(float *)(*(long *)(puVar22 + lVar19 * 8 + 0x67e8) + 0x50) ||
               fVar32 == *(float *)(*(long *)(puVar22 + lVar19 * 8 + 0x67e8) + 0x50))) {
              lVar17 = lVar20;
            }
          }
          if (lVar26 == lVar17) break;
          *(long *)(puVar22 + lVar26 * 8 + 0x67e8) = *(long *)(puVar22 + lVar17 * 8 + 0x67e8);
          lVar19 = lVar17 * 2;
          *(long *)(puVar22 + lVar17 * 8 + 0x67e8) = lVar21;
          lVar20 = lVar19 + 1;
          lVar26 = lVar17;
        } while (lVar20 < lVar18);
      }
      uVar48 = *(undefined8 *)param_1;
      *(int *)(puVar22 + 0x67e0) = (int)uVar24 + -1;
      *(undefined8 *)(puVar22 + -0x1520) = 0x1028fa;
      auVar56 = SupportPoints::
                Add<JPH::AddConvexRadius<JPH::ConvexShape::Support>,JPH::TriangleConvexSupport>
                          (uVar47,uVar48,param_2,puVar22 + -0x146c);
      fVar36 = *(float *)(pTVar25 + 0x30);
      *(undefined4 *)(puVar22 + -0x1468) = 0;
      *(long *)(puVar22 + -0x1518) = auVar56._0_8_;
      *(undefined8 *)(puVar22 + -0x1510) = extraout_XMM0_Qb;
      *(long *)(puVar22 + -0x1510) = auVar56._8_8_;
      if ((*(float *)(puVar22 + -0x1510) - *(float *)(pTVar25 + 0x48)) * *(float *)(pTVar25 + 0x38)
          + (*(float *)(puVar22 + -0x1514) - *(float *)(pTVar25 + 0x44)) *
            *(float *)(pTVar25 + 0x34) +
            fVar36 * (*(float *)(puVar22 + -0x1518) - *(float *)(pTVar25 + 0x40)) + 0.0 <= 0.0)
      goto LAB_00102aa0;
      *(undefined8 *)(puVar22 + -0x1520) = 0x102978;
      cVar14 = EPAConvexHullBuilder::AddPoint
                         ((EPAConvexHullBuilder *)(puVar22 + 0x7b8),pTVar25,
                          *(int *)(puVar22 + -0x146c),_LC10,(StaticArray *)(puVar22 + -0x1468));
      if (cVar14 == '\0') goto LAB_00102aa0;
      *(undefined8 *)pTVar25 = *(undefined8 *)(puVar22 + 0x67c8);
      uVar30 = *(uint *)(puVar22 + 0x67e0);
      *(Triangle **)(puVar22 + 0x67c8) = pTVar25;
      if ((uVar30 == 0) || (0x1f < *(uint *)(puVar22 + -0x1058))) goto LAB_00102aa0;
    }
    else {
      *(Triangle **)(puVar22 + uVar1 + 0x67e0) = pTVar25;
      *(long *)(puVar22 + 0x67e8) = lVar21;
      if (1 < lVar18) {
        fVar36 = *(float *)(lVar21 + 0x50);
        lVar20 = 1;
        lVar19 = 0;
        lVar26 = 0;
        do {
          fVar32 = *(float *)(*(long *)(puVar22 + lVar20 * 8 + 0x67e8) + 0x50);
          lVar19 = lVar19 + 2;
          if (fVar36 <= fVar32) {
            if ((lVar18 <= lVar19) ||
               (lVar17 = lVar19,
               fVar36 < *(float *)(*(long *)(puVar22 + lVar19 * 8 + 0x67e8) + 0x50) ||
               fVar36 == *(float *)(*(long *)(puVar22 + lVar19 * 8 + 0x67e8) + 0x50))) break;
          }
          else {
            lVar17 = lVar20;
            if ((lVar19 < lVar18) &&
               (lVar17 = lVar19,
               fVar32 < *(float *)(*(long *)(puVar22 + lVar19 * 8 + 0x67e8) + 0x50) ||
               fVar32 == *(float *)(*(long *)(puVar22 + lVar19 * 8 + 0x67e8) + 0x50))) {
              lVar17 = lVar20;
            }
          }
          if (lVar17 == lVar26) break;
          *(long *)(puVar22 + lVar26 * 8 + 0x67e8) = *(long *)(puVar22 + lVar17 * 8 + 0x67e8);
          lVar19 = lVar17 * 2;
          *(long *)(puVar22 + lVar17 * 8 + 0x67e8) = lVar21;
          lVar20 = lVar19 + 1;
          lVar26 = lVar17;
        } while (lVar20 < lVar18);
      }
      iVar29 = (int)uVar24 + -1;
      *(int *)(puVar22 + 0x67e0) = iVar29;
      if (iVar29 == 0) goto LAB_00102aa0;
      *(undefined8 *)pTVar25 = *(undefined8 *)(puVar22 + 0x67c8);
      uVar30 = *(uint *)(puVar22 + 0x67e0);
      *(Triangle **)(puVar22 + 0x67c8) = pTVar25;
    }
    uVar24 = (ulong)uVar30;
    pTVar25 = *(Triangle **)(puVar22 + 0x67e8);
    uVar27 = uVar24;
  } while( true );
LAB_00102fa7:
  lVar21 = uVar27 * 8;
  lVar18 = *(long *)(puVar22 + lVar21 + 0x67e0);
  lVar20 = (lVar21 >> 3) + -1;
  *(Triangle **)(puVar22 + lVar21 + 0x67e0) = pTVar25;
  *(long *)(puVar22 + 0x67e8) = lVar18;
  if (1 < lVar20) {
    fVar32 = *(float *)(lVar18 + 0x50);
    lVar21 = 1;
    lVar19 = 0;
    lVar26 = 0;
    do {
      fVar33 = *(float *)(*(long *)(puVar22 + lVar21 * 8 + 0x67e8) + 0x50);
      lVar19 = lVar19 + 2;
      if (fVar32 <= fVar33) {
        if ((lVar20 <= lVar19) ||
           (lVar17 = lVar19,
           fVar32 < *(float *)(*(long *)(puVar22 + lVar19 * 8 + 0x67e8) + 0x50) ||
           fVar32 == *(float *)(*(long *)(puVar22 + lVar19 * 8 + 0x67e8) + 0x50))) break;
      }
      else {
        lVar17 = lVar21;
        if ((lVar19 < lVar20) &&
           (lVar17 = lVar19,
           fVar33 < *(float *)(*(long *)(puVar22 + lVar19 * 8 + 0x67e8) + 0x50) ||
           fVar33 == *(float *)(*(long *)(puVar22 + lVar19 * 8 + 0x67e8) + 0x50))) {
          lVar17 = lVar21;
        }
      }
      if (lVar26 == lVar17) break;
      *(long *)(puVar22 + lVar26 * 8 + 0x67e8) = *(long *)(puVar22 + lVar17 * 8 + 0x67e8);
      lVar19 = lVar17 * 2;
      *(long *)(puVar22 + lVar17 * 8 + 0x67e8) = lVar18;
      lVar21 = lVar19 + 1;
      lVar26 = lVar17;
    } while (lVar21 < lVar20);
  }
  uVar30 = (int)uVar24 - 1;
  pTVar25 = *(Triangle **)(puVar22 + (ulong)uVar30 * 8 + 0x67e8);
  *(uint *)(puVar22 + 0x67e0) = uVar30;
  if (pTVar25[0x5e] == (Triangle)0x0) {
    if (fVar36 <= *(float *)(pTVar25 + 0x50)) goto LAB_0010309f;
    if (pTVar23 != (Triangle *)0x0) {
      *(undefined8 *)pTVar23 = *(undefined8 *)(puVar22 + 0x67c8);
      *(Triangle **)(puVar22 + 0x67c8) = pTVar23;
    }
    uVar47 = *(undefined8 *)param_1;
    *(float *)(puVar22 + -0x14f8) = fVar36;
    *(undefined8 *)(puVar22 + -0x1520) = 0x1032b5;
    auVar56 = SupportPoints::
              Add<JPH::AddConvexRadius<JPH::ConvexShape::Support>,JPH::TriangleConvexSupport>
                        (*(undefined8 *)(puVar22 + -0x1508),uVar47,param_2,puVar22 + -0x146c);
    fVar36 = *(float *)(pTVar25 + 0x30);
    fVar32 = *(float *)(pTVar25 + 0x34);
    *(long *)(puVar22 + -0x1518) = auVar56._0_8_;
    *(undefined8 *)(puVar22 + -0x1510) = extraout_XMM0_Qb_00;
    fVar33 = *(float *)(pTVar25 + 0x38);
    *(long *)(puVar22 + -0x1510) = auVar56._8_8_;
    fVar35 = auVar56._8_4_ * fVar33 +
             (float)((ulong)*(undefined8 *)(puVar22 + -0x1518) >> 0x20) * fVar32 +
             (float)*(undefined8 *)(puVar22 + -0x1518) * fVar36 + 0.0;
    if (fVar35 < 0.0) goto LAB_00102aa0;
    fVar31 = (fVar35 * fVar35) / (fVar33 * fVar33 + fVar32 * fVar32 + fVar36 * fVar36 + 0.0);
    pTVar23 = pTVar25;
    if (fVar31 - *(float *)(pTVar25 + 0x50) <
        *(float *)(pTVar25 + 0x50) * *(float *)(puVar22 + -0x14b4)) goto LAB_0010309f;
    if (*(float *)(puVar22 + -0x14f8) <= fVar31) {
      fVar31 = *(float *)(puVar22 + -0x14f8);
    }
    if ((*(float *)(puVar22 + -0x1510) - *(float *)(pTVar25 + 0x48)) * fVar33 +
        (*(float *)(puVar22 + -0x1514) - *(float *)(pTVar25 + 0x44)) * fVar32 +
        (*(float *)(puVar22 + -0x1518) - *(float *)(pTVar25 + 0x40)) * fVar36 + 0.0 <= 0.0)
    goto LAB_0010309f;
    *(float *)(puVar22 + -0x14f8) = fVar35;
    *(float *)(puVar22 + -0x1518) = fVar31;
    *(undefined4 *)(puVar22 + -0x1468) = 0;
    *(undefined8 *)(puVar22 + -0x1520) = 0x1033dc;
    cVar14 = EPAConvexHullBuilder::AddPoint
                       ((EPAConvexHullBuilder *)(puVar22 + 0x7b8),pTVar25,
                        *(int *)(puVar22 + -0x146c),fVar31,(StaticArray *)(puVar22 + -0x1468));
    if (cVar14 == '\0') goto LAB_0010309f;
    plVar16 = (long *)(puVar22 + -0x1460);
    fVar36 = *(float *)(puVar22 + -0x1518);
    plVar3 = plVar16 + *(uint *)(puVar22 + -0x1468);
    if ((ulong)*(uint *)(puVar22 + -0x1468) != 0) {
      do {
        lVar21 = *plVar16;
        if ((float)((ulong)*(undefined8 *)(lVar21 + 0x40) >> 0x20) * *(float *)(lVar21 + 0x34) +
            (float)*(undefined8 *)(lVar21 + 0x40) * *(float *)(lVar21 + 0x30) + 0.0 +
            *(float *)(lVar21 + 0x38) * *(float *)(lVar21 + 0x48) < 0.0) {
          fVar32 = (float)*(undefined8 *)(pTVar25 + 0x30);
          fVar33 = (float)((ulong)*(undefined8 *)(pTVar25 + 0x30) >> 0x20);
          fVar36 = *(float *)(pTVar25 + 0x38);
          fVar31 = *(float *)(param_2 + 8) * fVar36 +
                   *(float *)(param_2 + 4) * fVar33 + *(float *)param_2 * fVar32 + 0.0;
          fVar35 = *(float *)(param_2 + 0x18) * fVar36 +
                   *(float *)(param_2 + 0x14) * fVar33 + *(float *)(param_2 + 0x10) * fVar32 + 0.0;
          fVar36 = fVar33 * *(float *)(param_2 + 0x24) + fVar32 * *(float *)(param_2 + 0x20) + 0.0 +
                   fVar36 * *(float *)(param_2 + 0x28);
          if (fVar31 <= fVar35) {
            if (fVar35 <= fVar36) goto LAB_00103664;
            uVar47 = *(undefined8 *)(param_2 + 0x10);
            uVar48 = *(undefined8 *)(param_2 + 0x18);
          }
          else if (fVar31 <= fVar36) {
LAB_00103664:
            uVar47 = *(undefined8 *)(param_2 + 0x20);
            uVar48 = *(undefined8 *)(param_2 + 0x28);
          }
          else {
            uVar47 = *(undefined8 *)param_2;
            uVar48 = *(undefined8 *)(param_2 + 8);
          }
          *(undefined8 *)(puVar22 + -0x1508) = uVar47;
          *(undefined8 *)(puVar22 + -0x1500) = uVar48;
          fVar36 = *(float *)(pTVar25 + 0x34);
          fVar32 = *(float *)(pTVar25 + 0x38);
          fVar33 = *(float *)(pTVar25 + 0x3c);
          lVar21 = **(long **)param_1;
          *(float *)(puVar22 + -0x1518) = 0.0 - *(float *)(pTVar25 + 0x30);
          *(float *)(puVar22 + -0x1514) = 0.0 - fVar36;
          *(float *)(puVar22 + -0x1510) = 0.0 - fVar32;
          *(float *)(puVar22 + -0x150c) = 0.0 - fVar33;
          pcVar9 = *(code **)(lVar21 + 0x10);
          fVar36 = SQRT(*(float *)(puVar22 + -0x1514) * *(float *)(puVar22 + -0x1514) +
                        *(float *)(puVar22 + -0x1518) * *(float *)(puVar22 + -0x1518) + 0.0 +
                        *(float *)(puVar22 + -0x1510) * *(float *)(puVar22 + -0x1510));
          if (fVar36 <= 0.0) {
            *(undefined4 *)(puVar22 + -0x14f8) = *(undefined4 *)(puVar22 + -0x14f8);
            *(undefined8 *)(puVar22 + -0x1520) = 0x10364b;
            auVar56 = (*pcVar9)(*(undefined8 *)(puVar22 + -0x1518),
                                *(undefined8 *)(puVar22 + -0x1510));
            fVar36 = *(float *)(puVar22 + -0x14f8);
            *(long *)(puVar22 + -0x1518) = auVar56._0_8_;
            *(undefined8 *)(puVar22 + -0x1510) = extraout_XMM0_Qb_02;
            *(long *)(puVar22 + -0x1510) = auVar56._8_8_;
            auVar34 = SUB1612(*(undefined1 (*) [16])(puVar22 + -0x1518),0);
          }
          else {
            fVar36 = *(float *)(param_1 + 8) / fVar36;
            *(undefined4 *)(puVar22 + -0x14e8) = *(undefined4 *)(puVar22 + -0x14f8);
            *(float *)(puVar22 + -0x14f8) = *(float *)(puVar22 + -0x1518) * fVar36;
            *(float *)(puVar22 + -0x14f4) = *(float *)(puVar22 + -0x1514) * fVar36;
            *(float *)(puVar22 + -0x14f0) = *(float *)(puVar22 + -0x1510) * fVar36;
            *(float *)(puVar22 + -0x14ec) = *(float *)(puVar22 + -0x150c) * fVar36;
            *(undefined8 *)(puVar22 + -0x1520) = 0x103582;
            auVar56 = (*pcVar9)(*(undefined8 *)(puVar22 + -0x1518),
                                *(undefined8 *)(puVar22 + -0x1510));
            fVar36 = *(float *)(puVar22 + -0x14e8);
            *(long *)(puVar22 + -0x1518) = auVar56._0_8_;
            *(undefined8 *)(puVar22 + -0x1510) = extraout_XMM0_Qb_01;
            *(long *)(puVar22 + -0x1510) = auVar56._8_8_;
            auVar34._0_4_ = *(float *)(puVar22 + -0x1518) + *(float *)(puVar22 + -0x14f8);
            auVar34._4_4_ = *(float *)(puVar22 + -0x1514) + *(float *)(puVar22 + -0x14f4);
            auVar34._8_4_ = *(float *)(puVar22 + -0x1510) + *(float *)(puVar22 + -0x14f0);
          }
          bVar15 = (float)((uint)((auVar34._8_4_ - *(float *)(puVar22 + -0x1500)) *
                                  *(float *)(pTVar25 + 0x38) +
                                 (auVar34._4_4_ - *(float *)(puVar22 + -0x1504)) *
                                 *(float *)(pTVar25 + 0x34) +
                                 *(float *)(pTVar25 + 0x30) *
                                 (auVar34._0_4_ - *(float *)(puVar22 + -0x1508)) + 0.0) ^ __LC4) <
                   fVar36;
          goto LAB_001030a8;
        }
        plVar16 = plVar16 + 1;
      } while (plVar3 != plVar16);
    }
  }
  else {
    *(undefined8 *)pTVar25 = *(undefined8 *)(puVar22 + 0x67c8);
    *(Triangle **)(puVar22 + 0x67c8) = pTVar25;
    pTVar25 = pTVar23;
  }
  uVar30 = *(uint *)(puVar22 + 0x67e0);
  uVar24 = (ulong)uVar30;
  pTVar23 = pTVar25;
  if ((uVar30 == 0) || (0x7f < *(uint *)(puVar22 + -0x1058))) goto LAB_0010309f;
  pTVar25 = *(Triangle **)(puVar22 + 0x67e8);
  uVar27 = (ulong)uVar30;
  goto LAB_00102fa7;
LAB_0010309f:
  pTVar25 = pTVar23;
  bVar15 = false;
  if (pTVar25 != (Triangle *)0x0) {
LAB_001030a8:
    pfVar28 = *(float **)(puVar22 + -0x14b0);
    fVar32 = (*(float *)(pTVar25 + 0x48) * *(float *)(pTVar25 + 0x38) +
             (float)((ulong)*(undefined8 *)(pTVar25 + 0x30) >> 0x20) * *(float *)(pTVar25 + 0x44) +
             (float)*(undefined8 *)(pTVar25 + 0x30) * *(float *)(pTVar25 + 0x40) + 0.0) /
             (*(float *)(pTVar25 + 0x38) * *(float *)(pTVar25 + 0x38) +
             *(float *)(pTVar25 + 0x30) * *(float *)(pTVar25 + 0x30) + 0.0 +
             *(float *)(pTVar25 + 0x34) * *(float *)(pTVar25 + 0x34));
    fVar36 = *(float *)(pTVar25 + 0x3c);
    fVar33 = fVar32 * *(float *)(pTVar25 + 0x30);
    fVar35 = fVar32 * *(float *)(pTVar25 + 0x34);
    fVar31 = fVar32 * *(float *)(pTVar25 + 0x38);
    *pfVar28 = fVar33;
    pfVar28[1] = fVar35;
    pfVar28[2] = fVar31;
    pfVar28[3] = fVar32 * fVar36;
    if (_LC1 < fVar31 * fVar31 + fVar33 * fVar33 + 0.0 + fVar35 * fVar35) {
      if (bVar15) {
        *pfVar28 = 0.0 - fVar33;
        pfVar28[1] = 0.0 - fVar35;
        pfVar28[2] = 0.0 - fVar31;
        pfVar28[3] = 0.0 - fVar32 * fVar36;
      }
      fVar36 = *(float *)(pTVar25 + 0x54);
      fVar32 = *(float *)(pTVar25 + 0x58);
      lVar18 = ((long)*(int *)(pTVar25 + 0xc) + 0x81) * 0x10;
      lVar20 = ((long)*(int *)(pTVar25 + 0x1c) + 0x81) * 0x10;
      lVar21 = ((long)*(int *)(pTVar25 + 0x2c) + 0x81) * 0x10;
      pfVar28 = (float *)(puVar22 + lVar18 + -0x1058);
      fVar33 = *pfVar28;
      fVar35 = pfVar28[1];
      fVar31 = pfVar28[2];
      fVar46 = pfVar28[3];
      pfVar28 = (float *)(puVar22 + lVar20 + -0x1058);
      fVar37 = *pfVar28;
      fVar42 = pfVar28[1];
      fVar44 = pfVar28[2];
      fVar50 = pfVar28[3];
      pfVar28 = (float *)(puVar22 + lVar21 + -0x1058);
      pfVar4 = (float *)(puVar22 + lVar18 + -0x858);
      fVar51 = *pfVar4;
      fVar52 = pfVar4[1];
      fVar53 = pfVar4[2];
      fVar54 = pfVar4[3];
      pfVar4 = (float *)(puVar22 + lVar20 + -0x858);
      fVar55 = *pfVar4;
      fVar11 = pfVar4[1];
      fVar12 = pfVar4[2];
      fVar13 = pfVar4[3];
      pfVar4 = (float *)(puVar22 + lVar21 + -0x858);
      if (pTVar25[0x5c] == (Triangle)0x0) {
        fVar37 = (fVar33 - fVar37) * fVar36 + fVar37 + (*pfVar28 - fVar37) * fVar32;
        fVar42 = (fVar35 - fVar42) * fVar36 + fVar42 + (pfVar28[1] - fVar42) * fVar32;
        fVar44 = (fVar31 - fVar44) * fVar36 + fVar44 + (pfVar28[2] - fVar44) * fVar32;
        fVar46 = (fVar46 - fVar50) * fVar36 + fVar50 + (pfVar28[3] - fVar50) * fVar32;
        fVar33 = (fVar51 - fVar55) * fVar36 + fVar55 + (*pfVar4 - fVar55) * fVar32;
        fVar35 = (fVar52 - fVar11) * fVar36 + fVar11 + (pfVar4[1] - fVar11) * fVar32;
        fVar31 = (fVar53 - fVar12) * fVar36 + fVar12 + (pfVar4[2] - fVar12) * fVar32;
        fVar36 = (fVar54 - fVar13) * fVar36 + fVar13 + (pfVar4[3] - fVar13) * fVar32;
      }
      else {
        fVar37 = (*pfVar28 - fVar33) * fVar32 + (fVar37 - fVar33) * fVar36 + fVar33;
        fVar42 = (pfVar28[1] - fVar35) * fVar32 + (fVar42 - fVar35) * fVar36 + fVar35;
        fVar44 = (pfVar28[2] - fVar31) * fVar32 + (fVar44 - fVar31) * fVar36 + fVar31;
        fVar46 = (pfVar28[3] - fVar46) * fVar32 + (fVar50 - fVar46) * fVar36 + fVar46;
        fVar33 = (*pfVar4 - fVar51) * fVar32 + (fVar55 - fVar51) * fVar36 + fVar51;
        fVar35 = (pfVar4[1] - fVar52) * fVar32 + (fVar11 - fVar52) * fVar36 + fVar52;
        fVar31 = (pfVar4[2] - fVar53) * fVar32 + (fVar12 - fVar53) * fVar36 + fVar53;
        fVar36 = (pfVar4[3] - fVar54) * fVar32 + (fVar13 - fVar54) * fVar36 + fVar54;
      }
      pfVar28 = *(float **)(puVar22 + -0x14a8);
      *pfVar28 = fVar37;
      pfVar28[1] = fVar42;
      pfVar28[2] = fVar44;
      pfVar28[3] = fVar46;
      pfVar28 = *(float **)(puVar22 + -0x14a0);
      *pfVar28 = fVar33;
      pfVar28[1] = fVar35;
      pfVar28[2] = fVar31;
      pfVar28[3] = fVar36;
      bVar15 = true;
      goto LAB_00102aa2;
    }
  }
LAB_00102aa0:
  bVar15 = false;
LAB_00102aa2:
  if (*(long *)(puVar22 + 0x6ff0) == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar15;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar22 + -0x1520) = &UNK_00103626;
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::Vec3 JPH::ClosestPoint::GetClosestPointOnTriangle<true>(JPH::Vec3, JPH::Vec3, JPH::Vec3,
   unsigned int&) */

undefined1  [16]
JPH::ClosestPoint::GetClosestPointOnTriangle<true>
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,int *param_7)

{
  int iVar1;
  float fVar2;
  uint uVar3;
  float fVar4;
  uint uVar6;
  float fVar7;
  uint uVar8;
  float fVar9;
  uint uVar10;
  undefined1 auVar5 [16];
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar11 [16];
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
  undefined1 local_78 [8];
  undefined8 uStack_70;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  
  fVar18 = (float)((ulong)param_6 >> 0x20);
  fVar29 = (float)param_6;
  local_78._0_4_ = (undefined4)param_5;
  local_78._4_4_ = (undefined4)((ulong)param_5 >> 0x20);
  local_58._0_4_ = (float)param_1;
  local_58._4_4_ = (float)((ulong)param_1 >> 0x20);
  uStack_50._0_4_ = (float)param_2;
  local_68 = (float)param_3;
  fStack_64 = (float)((ulong)param_3 >> 0x20);
  fStack_60 = (float)param_4;
  fStack_5c = (float)((ulong)param_4 >> 0x20);
  fVar26 = (float)local_78._0_4_ - local_68;
  fVar27 = (float)local_78._4_4_ - fStack_64;
  fVar28 = fVar29 - fStack_60;
  fVar2 = (fVar29 - (float)uStack_50) * (fVar29 - (float)uStack_50) +
          ((float)local_78._0_4_ - (float)local_58) * ((float)local_78._0_4_ - (float)local_58) +
          0.0 + ((float)local_78._4_4_ - local_58._4_4_) * ((float)local_78._4_4_ - local_58._4_4_);
  fVar30 = fVar28 * fVar28 + fVar27 * fVar27 + fVar26 * fVar26 + 0.0;
  iVar1 = -(uint)(fVar30 < fVar2);
  uVar3 = iVar1 >> 0x1f;
  uVar6 = (int)-(uint)(fVar30 < fVar2) >> 0x1f;
  uVar8 = (int)-(uint)(fVar30 < fVar2) >> 0x1f;
  uVar10 = (int)-(uint)(fVar30 < fVar2) >> 0x1f;
  uStack_50._4_4_ = (uint)((ulong)param_2 >> 0x20);
  fVar4 = (float)(local_78._0_4_ & uVar3 | ~uVar3 & (uint)(float)local_58);
  fVar12 = (float)(local_78._4_4_ & uVar6 | ~uVar6 & (uint)local_58._4_4_);
  fVar13 = (float)((uint)fVar29 & uVar8 | ~uVar8 & (uint)(float)uStack_50);
  fVar14 = (float)((uint)fVar18 & uVar10 | ~uVar10 & uStack_50._4_4_);
  fVar15 = local_68 - fVar4;
  fVar16 = fStack_64 - fVar12;
  fVar17 = fStack_60 - fVar13;
  fVar19 = (float)(uVar3 & (uint)(float)local_58 | ~uVar3 & local_78._0_4_);
  fVar21 = (float)(uVar6 & (uint)local_58._4_4_ | ~uVar6 & local_78._4_4_);
  fVar23 = (float)(uVar8 & (uint)(float)uStack_50 | ~uVar8 & (uint)fVar29);
  fVar25 = (float)(uVar10 & uStack_50._4_4_ | ~uVar10 & (uint)fVar18);
  local_58 = CONCAT44(fVar21,fVar19);
  uStack_50 = CONCAT44(fVar25,fVar23);
  fVar20 = fVar19 - fVar4;
  fVar22 = fVar21 - fVar12;
  fVar24 = fVar23 - fVar13;
  fVar2 = fVar22 * fVar15 - fVar16 * fVar20;
  fVar7 = fVar24 * fVar16 - fVar17 * fVar22;
  fVar9 = fVar20 * fVar17 - fVar15 * fVar24;
  fVar31 = fVar2 * fVar2 + fVar9 * fVar9 + fVar7 * fVar7 + 0.0;
  if (fVar31 < _LC13) {
    iVar1 = 4;
    fVar31 = fVar29 * fVar29 +
             (float)local_78._4_4_ * (float)local_78._4_4_ +
             (float)local_78._0_4_ * (float)local_78._0_4_ + 0.0;
    fVar15 = fVar24 * fVar24 + fVar22 * fVar22 + fVar20 * fVar20 + 0.0;
    fVar2 = (float)local_78._0_4_;
    fVar7 = (float)local_78._4_4_;
    uStack_70._0_4_ = fVar29;
    uStack_70._4_4_ = fVar18;
    fVar9 = fVar31;
    if (_LC2 < fVar15) {
      fVar15 = (float)((uint)(fVar24 * fVar13 + fVar12 * fVar22 + fVar20 * fVar4 + 0.0) ^ __LC4) /
               fVar15;
      if (fVar15 < 0.0) {
        fVar16 = 0.0;
      }
      else {
        fVar16 = _LC3;
        if (fVar15 <= _LC3) {
          fVar16 = fVar15;
        }
      }
      iVar1 = 5;
      fVar2 = fVar16 * fVar20 + fVar4;
      fVar7 = fVar16 * fVar22 + fVar12;
      uStack_70._0_4_ = fVar16 * fVar24 + fVar13;
      fVar9 = (float)uStack_70 * (float)uStack_70 + fVar2 * fVar2 + 0.0 + fVar7 * fVar7;
      uStack_70._4_4_ = fVar16 * (fVar25 - fVar14) + fVar14;
      if (fVar31 <= fVar9) {
        iVar1 = 4;
        fVar2 = (float)local_78._0_4_;
        fVar7 = (float)local_78._4_4_;
        uStack_70._0_4_ = fVar29;
        uStack_70._4_4_ = fVar18;
        fVar9 = fVar31;
      }
    }
    if (_LC2 < fVar30) {
      fVar30 = (float)((uint)(fVar28 * fStack_60 + fVar27 * fStack_64 + fVar26 * local_68 + 0.0) ^
                      __LC4) / fVar30;
      if (fVar30 < 0.0) {
        fVar4 = 0.0;
      }
      else {
        fVar4 = _LC3;
        if (fVar30 <= _LC3) {
          fVar4 = fVar30;
        }
      }
      local_68 = fVar4 * fVar26 + local_68;
      fStack_64 = fVar4 * fVar27 + fStack_64;
      fStack_60 = fVar4 * fVar28 + fStack_60;
      if (fStack_60 * fStack_60 + local_68 * local_68 + 0.0 + fStack_64 * fStack_64 < fVar9) {
        iVar1 = 6;
        fVar2 = local_68;
        fVar7 = fStack_64;
        uStack_70._0_4_ = fStack_60;
        uStack_70._4_4_ = fVar4 * (fVar18 - fStack_5c) + fStack_5c;
      }
    }
    *param_7 = iVar1;
    local_78._4_4_ = fVar7;
    local_78._0_4_ = fVar2;
    return _local_78;
  }
  fVar29 = (0.0 - fVar13) * fVar17 + fVar16 * (0.0 - fVar12) + fVar15 * (0.0 - fVar4) + 0.0;
  fVar30 = (0.0 - fVar13) * fVar24 + (0.0 - fVar12) * fVar22 + (0.0 - fVar4) * fVar20 + 0.0;
  if ((fVar29 <= 0.0) && (fVar30 <= 0.0)) {
    local_78._4_4_ = fVar12;
    local_78._0_4_ = fVar4;
    uStack_70._0_4_ = fVar13;
    uStack_70._4_4_ = fVar14;
    *param_7 = (-(uint)(iVar1 == 0) & 0xfffffffd) + 4;
    return _local_78;
  }
  fVar26 = (0.0 - fStack_60) * fVar17 + fVar16 * (0.0 - fStack_64) + (0.0 - local_68) * fVar15 + 0.0
  ;
  fVar18 = (0.0 - fStack_60) * fVar24 + (0.0 - fStack_64) * fVar22 + (0.0 - local_68) * fVar20 + 0.0
  ;
  if (fVar26 < 0.0) {
    if ((fVar29 * fVar18 <= fVar30 * fVar26) && (0.0 <= fVar29)) goto LAB_00103c8e;
  }
  else {
    if (fVar18 <= fVar26) {
      *param_7 = 2;
      uStack_70 = param_4;
      local_78 = (undefined1  [8])param_3;
      return _local_78;
    }
    if (((fVar29 * fVar18 <= fVar30 * fVar26) && (0.0 <= fVar29)) && (fVar26 == 0.0)) {
LAB_00103c8e:
      *param_7 = (-(uint)(iVar1 == 0) & 0xfffffffd) + 6;
      fVar29 = fVar29 / (fVar29 - fVar26);
      local_78._4_4_ = fVar29 * fVar16 + fVar12;
      local_78._0_4_ = fVar29 * fVar15 + fVar4;
      uStack_70._0_4_ = fVar29 * fVar17 + fVar13;
      uStack_70._4_4_ = fVar29 * (fStack_5c - fVar14) + fVar14;
      return _local_78;
    }
  }
  fVar27 = (0.0 - fVar23) * fVar24 + fVar22 * (0.0 - fVar21) + fVar20 * (0.0 - fVar19) + 0.0;
  fVar15 = fVar17 * (0.0 - fVar23) + fVar16 * (0.0 - fVar21) + fVar15 * (0.0 - fVar19) + 0.0;
  if (fVar27 < 0.0) {
    if ((fVar30 * fVar15 <= fVar29 * fVar27) && (0.0 <= fVar30)) goto LAB_00103e44;
  }
  else {
    if (fVar15 <= fVar27) {
      uStack_70 = uStack_50;
      local_78 = (undefined1  [8])local_58;
      *param_7 = (-(uint)(iVar1 == 0) & 3) + 1;
      return _local_78;
    }
    if (((fVar30 * fVar15 <= fVar29 * fVar27) && (0.0 <= fVar30)) && (fVar27 == 0.0)) {
LAB_00103e44:
      *param_7 = 5;
      fVar30 = fVar30 / (fVar30 - fVar27);
      local_78._4_4_ = fVar30 * fVar22 + fVar12;
      local_78._0_4_ = fVar30 * fVar20 + fVar4;
      uStack_70._0_4_ = fVar30 * fVar24 + fVar13;
      uStack_70._4_4_ = fVar30 * (fVar25 - fVar14) + fVar14;
      return _local_78;
    }
  }
  if (((fVar26 * fVar27 <= fVar18 * fVar15) && (fVar18 = fVar18 - fVar26, 0.0 <= fVar18)) &&
     (0.0 <= fVar15 - fVar27)) {
    fVar18 = fVar18 / ((fVar15 - fVar27) + fVar18);
    *param_7 = (-(uint)(iVar1 == 0) & 3) + 3;
    local_78._4_4_ = (fVar21 - fStack_64) * fVar18 + fStack_64;
    local_78._0_4_ = (fVar19 - local_68) * fVar18 + local_68;
    uStack_70._0_4_ = (fVar23 - fStack_60) * fVar18 + fStack_60;
    uStack_70._4_4_ = (fVar25 - fStack_5c) * fVar18 + fStack_5c;
    return _local_78;
  }
  *param_7 = 7;
  fVar31 = fVar31 * _LC12;
  fVar30 = (fVar13 + fStack_60 + fVar23) * fVar2 +
           (fVar12 + fStack_64 + fVar21) * fVar9 + (fVar4 + local_68 + fVar19) * fVar7 + 0.0;
  auVar5._0_4_ = fVar7 * fVar30;
  auVar5._4_4_ = fVar9 * fVar30;
  auVar5._8_4_ = fVar2 * fVar30;
  auVar5._12_4_ = fVar2 * fVar30;
  auVar11._4_4_ = fVar31;
  auVar11._0_4_ = fVar31;
  auVar11._8_4_ = fVar31;
  auVar11._12_4_ = fVar31;
  auVar5 = divps(auVar5,auVar11);
  return auVar5;
}



/* JPH::Vec3 JPH::ClosestPoint::GetClosestPointOnTetrahedron<true>(JPH::Vec3, JPH::Vec3, JPH::Vec3,
   JPH::Vec3, unsigned int&) */

undefined1  [16]
JPH::ClosestPoint::GetClosestPointOnTetrahedron<true>
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,uint *param_9)

{
  uint uVar1;
  long in_FS_OFFSET;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  int local_98;
  int local_90;
  undefined8 local_80;
  undefined8 local_78;
  float local_70;
  uint local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = 0;
  local_78 = 0;
  auVar6 = OriginOutsideOfTetrahedronPlanes();
  local_98 = auVar6._0_4_;
  local_90 = auVar6._8_4_;
  fVar3 = (float)((ulong)param_1 >> 0x20);
  if (local_98 == 0) {
    uVar1 = 0xf;
    fVar3 = _LC10;
  }
  else {
    local_70 = (float)param_2;
    uVar1 = 1;
    fVar3 = local_70 * local_70 + fVar3 * fVar3 + (float)param_1 * (float)param_1 + 0.0;
    local_80 = param_1;
    local_78 = param_2;
  }
  if (auVar6._0_8_ >> 0x20 != 0) {
    auVar4 = GetClosestPointOnTriangle<true>
                       (param_1,param_2,param_5,param_6,param_7,param_8,&local_24);
    fVar2 = auVar4._8_4_ * auVar4._8_4_ +
            auVar4._4_4_ * auVar4._4_4_ + auVar4._0_4_ * auVar4._0_4_ + 0.0;
    if (fVar2 < fVar3) {
      uVar1 = local_24 * 2 & 0xc | local_24 & 1;
      goto joined_r0x00103f5d;
    }
  }
  auVar4._8_8_ = local_78;
  auVar4._0_8_ = local_80;
  fVar2 = fVar3;
joined_r0x00103f5d:
  if (local_90 != 0) {
    auVar5 = GetClosestPointOnTriangle<true>
                       (param_1,param_2,param_3,param_4,param_7,param_8,&local_24);
    fVar3 = auVar5._8_4_ * auVar5._8_4_ +
            auVar5._4_4_ * auVar5._4_4_ + auVar5._0_4_ * auVar5._0_4_ + 0.0;
    if (fVar3 < fVar2) {
      uVar1 = local_24 * 2 & 8 | local_24 & 3;
      fVar2 = fVar3;
      auVar4 = auVar5;
    }
  }
  if ((auVar6._8_8_ >> 0x20 != 0) &&
     (auVar6 = GetClosestPointOnTriangle<true>
                         (param_3,param_4,param_5,param_6,param_7,param_8,&local_24),
     auVar6._8_4_ * auVar6._8_4_ + auVar6._4_4_ * auVar6._4_4_ + auVar6._0_4_ * auVar6._0_4_ + 0.0 <
     fVar2)) {
    uVar1 = local_24 * 2;
    auVar4 = auVar6;
  }
  *param_9 = uVar1;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return auVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* float JPH::GJKClosestPoint::GetClosestPoints<JPH::ConvexShape::Support,
   JPH::TriangleConvexSupport>(JPH::ConvexShape::Support const&, JPH::TriangleConvexSupport const&,
   float, float, JPH::Vec3&, JPH::Vec3&, JPH::Vec3&) */

float __thiscall
JPH::GJKClosestPoint::GetClosestPoints<JPH::ConvexShape::Support,JPH::TriangleConvexSupport>
          (GJKClosestPoint *this,Support *param_1,TriangleConvexSupport *param_2,float param_3,
          float param_4,Vec3 *param_5,Vec3 *param_6,Vec3 *param_7)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined1 auVar6 [12];
  GJKClosestPoint *pGVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  GJKClosestPoint *pGVar11;
  long in_FS_OFFSET;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 local_a8 [8];
  float fStack_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float local_84;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float local_4c;
  float local_48;
  float local_44;
  long local_40;
  
  fVar13 = _LC10;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  fVar12 = *(float *)param_5;
  *(undefined4 *)(this + 0xc0) = 0;
  local_84 = *(float *)(param_5 + 8) * *(float *)(param_5 + 8) +
             *(float *)(param_5 + 4) * *(float *)(param_5 + 4) + fVar12 * fVar12 + 0.0;
  do {
    auVar19 = (**(code **)(*(long *)param_1 + 0x10))
                        (*(undefined8 *)param_5,*(undefined8 *)(param_5 + 8),param_1);
    fVar12 = 0.0 - *(float *)param_5;
    fVar14 = 0.0 - *(float *)(param_5 + 4);
    fVar15 = 0.0 - *(float *)(param_5 + 8);
    fVar17 = *(float *)(param_2 + 8) * fVar15 +
             *(float *)(param_2 + 4) * fVar14 + *(float *)param_2 * fVar12 + 0.0;
    fVar16 = *(float *)(param_2 + 0x18) * fVar15 +
             *(float *)(param_2 + 0x14) * fVar14 + *(float *)(param_2 + 0x10) * fVar12 + 0.0;
    fVar12 = fVar15 * *(float *)(param_2 + 0x28) +
             fVar14 * *(float *)(param_2 + 0x24) + fVar12 * *(float *)(param_2 + 0x20) + 0.0;
    if (fVar17 <= fVar16) {
      if (fVar16 <= fVar12) goto LAB_001046f0;
      fVar12 = *(float *)(param_2 + 0x10);
      fVar14 = *(float *)(param_2 + 0x14);
      fVar15 = *(float *)(param_2 + 0x18);
      fVar16 = *(float *)(param_2 + 0x1c);
    }
    else if (fVar17 <= fVar12) {
LAB_001046f0:
      fVar12 = *(float *)(param_2 + 0x20);
      fVar14 = *(float *)(param_2 + 0x24);
      fVar15 = *(float *)(param_2 + 0x28);
      fVar16 = *(float *)(param_2 + 0x2c);
    }
    else {
      fVar12 = *(float *)param_2;
      fVar14 = *(float *)(param_2 + 4);
      fVar15 = *(float *)(param_2 + 8);
      fVar16 = *(float *)(param_2 + 0xc);
    }
    local_a8._0_4_ = auVar19._0_4_;
    local_a8._4_4_ = auVar19._4_4_;
    fStack_a0 = auVar19._8_4_;
    fStack_9c = auVar19._12_4_;
    fVar17 = (fStack_a0 - fVar15) * *(float *)(param_5 + 8) +
             ((float)local_a8._4_4_ - fVar14) * *(float *)(param_5 + 4) +
             *(float *)param_5 * ((float)local_a8._0_4_ - fVar12) + 0.0;
    if ((fVar17 < 0.0) && (fVar18 = _LC10, param_4 * local_84 < fVar17 * fVar17)) goto LAB_00104541;
    iVar1 = *(int *)(this + 0xc0);
    iVar8 = iVar1 + 1;
    pGVar7 = this + (long)iVar1 * 0x10;
    *(float *)pGVar7 = (float)local_a8._0_4_ - fVar12;
    *(float *)(pGVar7 + 4) = (float)local_a8._4_4_ - fVar14;
    *(float *)(pGVar7 + 8) = fStack_a0 - fVar15;
    *(float *)(pGVar7 + 0xc) = fStack_9c - fVar16;
    *(undefined1 (*) [16])(pGVar7 + 0x40) = auVar19;
    pGVar7 = this + (long)iVar1 * 0x10 + 0x80;
    *(float *)pGVar7 = fVar12;
    *(float *)(pGVar7 + 4) = fVar14;
    *(float *)(pGVar7 + 8) = fVar15;
    *(float *)(pGVar7 + 0xc) = fVar16;
    *(int *)(this + 0xc0) = iVar8;
    if (iVar8 == 3) {
      auVar19 = ClosestPoint::GetClosestPointOnTriangle<true>
                          (*(undefined8 *)this,*(undefined8 *)(this + 8),
                           *(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x18),
                           *(undefined8 *)(this + 0x20),*(undefined8 *)(this + 0x28),&local_44);
      fStack_a0 = auVar19._8_4_;
    }
    else if (iVar8 < 4) {
      if (iVar8 == 1) {
        local_44 = 1.4013e-45;
        auVar19 = *(undefined1 (*) [16])this;
        fStack_a0 = *(float *)(this + 8);
      }
      else {
        if (iVar8 != 2) goto LAB_00104a98;
        auVar6 = *(undefined1 (*) [12])this;
        local_98 = (float)*(undefined8 *)this;
        fStack_94 = (float)((ulong)*(undefined8 *)this >> 0x20);
        fStack_90 = (float)*(undefined8 *)(this + 8);
        fStack_8c = (float)((ulong)*(undefined8 *)(this + 8) >> 0x20);
        fStack_9c = fStack_8c;
        _local_a8 = auVar6;
        uVar5 = *(undefined8 *)(this + 0x10);
        local_78 = (float)uVar5;
        fStack_74 = (float)((ulong)uVar5 >> 0x20);
        fStack_70 = (float)*(undefined8 *)(this + 0x18);
        fVar12 = local_78 - auVar6._0_4_;
        fVar15 = fStack_74 - auVar6._4_4_;
        fVar16 = fStack_70 - auVar6._8_4_;
        fVar14 = fVar16 * fVar16 + fVar15 * fVar15 + fVar12 * fVar12 + 0.0;
        if (fVar14 < _LC2) {
          if (fStack_90 * fStack_90 + fStack_94 * fStack_94 + local_98 * local_98 + 0.0 <
              fStack_70 * fStack_70 + fStack_74 * fStack_74 + local_78 * local_78 + 0.0)
          goto LAB_0010485a;
LAB_00104864:
          local_44 = 2.8026e-45;
          _local_a8 = *(undefined1 (*) [16])(this + 0x10);
        }
        else {
          fVar14 = (float)((uint)(fVar16 * fStack_90 + fVar15 * fStack_94 + fVar12 * local_98 + 0.0)
                          ^ __LC4) / fVar14;
          if (fVar14 <= 0.0) {
LAB_0010485a:
            local_44 = 1.4013e-45;
          }
          else {
            fVar12 = _LC3 - fVar14;
            if (fVar12 <= 0.0) goto LAB_00104864;
            fStack_6c = (float)((ulong)*(undefined8 *)(this + 0x18) >> 0x20);
            local_44 = 4.2039e-45;
            local_a8._4_4_ = fVar14 * fStack_74 + fVar12 * fStack_94;
            local_a8._0_4_ = fVar14 * local_78 + fVar12 * local_98;
            fStack_a0 = fVar14 * fStack_70 + fVar12 * fStack_90;
            fStack_9c = fVar14 * fStack_6c + fVar12 * fStack_8c;
          }
        }
        auVar19 = _local_a8;
      }
    }
    else {
      if (iVar8 != 4) {
LAB_00104a98:
        *(int *)(this + 0xc0) = iVar1;
        fVar18 = local_84;
        goto LAB_00104541;
      }
      auVar19 = ClosestPoint::GetClosestPointOnTetrahedron<true>
                          (*(undefined8 *)this,*(undefined8 *)(this + 8),
                           *(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x18),
                           *(undefined8 *)(this + 0x20),*(undefined8 *)(this + 0x28),
                           *(undefined8 *)(this + 0x30),*(undefined8 *)(this + 0x38),&local_44);
      fStack_a0 = auVar19._8_4_;
    }
    fVar18 = fStack_a0 * fStack_a0 +
             auVar19._4_4_ * auVar19._4_4_ + auVar19._0_4_ * auVar19._0_4_ + 0.0;
    if (fVar13 <= fVar18) {
      *(int *)(this + 0xc0) = iVar1;
      iVar8 = iVar1;
      fVar18 = local_84;
LAB_00104505:
      if (iVar8 == 2) {
        local_98 = (float)*(undefined8 *)(this + 0x10);
        fStack_94 = (float)((ulong)*(undefined8 *)(this + 0x10) >> 0x20);
        fStack_90 = (float)*(undefined8 *)(this + 0x18);
        local_a8._0_4_ = (undefined4)*(undefined8 *)this;
        local_a8._4_4_ = (undefined4)((ulong)*(undefined8 *)this >> 0x20);
        fStack_a0 = (float)*(undefined8 *)(this + 8);
        fVar13 = local_98 - (float)local_a8._0_4_;
        fVar14 = fStack_94 - (float)local_a8._4_4_;
        fVar15 = fStack_90 - fStack_a0;
        fVar12 = fVar15 * fVar15 + fVar14 * fVar14 + fVar13 * fVar13 + 0.0;
        if (fVar12 < _LC2) {
          if (fStack_90 * fStack_90 + fStack_94 * fStack_94 + local_98 * local_98 + 0.0 <=
              (float)local_a8._4_4_ * (float)local_a8._4_4_ +
              (float)local_a8._0_4_ * (float)local_a8._0_4_ + 0.0 + fStack_a0 * fStack_a0) {
            fVar13 = 0.0;
            fVar12 = _LC3;
          }
          else {
            fVar12 = 0.0;
            fVar13 = _LC3;
          }
        }
        else {
          fVar12 = (float)((uint)(fVar15 * fStack_a0 +
                                 fVar14 * (float)local_a8._4_4_ +
                                 fVar13 * (float)local_a8._0_4_ + 0.0) ^ __LC4) / fVar12;
          fVar13 = _LC3 - fVar12;
        }
        fVar14 = *(float *)(this + 0x54);
        fVar15 = *(float *)(this + 0x58);
        fVar16 = *(float *)(this + 0x5c);
        fVar17 = *(float *)(this + 0x44);
        fVar2 = *(float *)(this + 0x48);
        fVar3 = *(float *)(this + 0x4c);
        *(float *)param_6 = *(float *)(this + 0x50) * fVar12 + *(float *)(this + 0x40) * fVar13;
        *(float *)(param_6 + 4) = fVar14 * fVar12 + fVar17 * fVar13;
        *(float *)(param_6 + 8) = fVar15 * fVar12 + fVar2 * fVar13;
        *(float *)(param_6 + 0xc) = fVar16 * fVar12 + fVar3 * fVar13;
        fVar14 = *(float *)(this + 0x94);
        fVar15 = *(float *)(this + 0x98);
        fVar16 = *(float *)(this + 0x9c);
        fVar17 = *(float *)(this + 0x84);
        fVar2 = *(float *)(this + 0x88);
        fVar3 = *(float *)(this + 0x8c);
        *(float *)param_7 = fVar12 * *(float *)(this + 0x90) + fVar13 * *(float *)(this + 0x80);
        *(float *)(param_7 + 4) = fVar12 * fVar14 + fVar13 * fVar17;
        *(float *)(param_7 + 8) = fVar12 * fVar15 + fVar13 * fVar2;
        *(float *)(param_7 + 0xc) = fVar12 * fVar16 + fVar13 * fVar3;
      }
      else if (iVar8 == 3) {
        ClosestPoint::GetBaryCentricCoordinates
                  (*(undefined8 *)this,*(undefined8 *)(this + 8),*(undefined8 *)(this + 0x10),
                   *(undefined8 *)(this + 0x18),*(undefined8 *)(this + 0x20),
                   *(undefined8 *)(this + 0x28),&local_4c,&local_48,&local_44);
        fVar12 = *(float *)(this + 0x54);
        fVar13 = *(float *)(this + 0x58);
        fVar14 = *(float *)(this + 0x5c);
        fVar15 = *(float *)(this + 0x44);
        fVar16 = *(float *)(this + 0x48);
        fVar17 = *(float *)(this + 0x4c);
        fVar2 = *(float *)(this + 100);
        fVar3 = *(float *)(this + 0x68);
        fVar4 = *(float *)(this + 0x6c);
        *(float *)param_6 =
             *(float *)(this + 0x50) * local_48 + *(float *)(this + 0x40) * local_4c +
             *(float *)(this + 0x60) * local_44;
        *(float *)(param_6 + 4) = fVar12 * local_48 + fVar15 * local_4c + fVar2 * local_44;
        *(float *)(param_6 + 8) = fVar13 * local_48 + fVar16 * local_4c + fVar3 * local_44;
        *(float *)(param_6 + 0xc) = fVar14 * local_48 + fVar17 * local_4c + fVar4 * local_44;
        fVar12 = *(float *)(this + 0x94);
        fVar13 = *(float *)(this + 0x98);
        fVar14 = *(float *)(this + 0x9c);
        fVar15 = *(float *)(this + 0x84);
        fVar16 = *(float *)(this + 0x88);
        fVar17 = *(float *)(this + 0x8c);
        fVar2 = *(float *)(this + 0xa4);
        fVar3 = *(float *)(this + 0xa8);
        fVar4 = *(float *)(this + 0xac);
        *(float *)param_7 =
             local_48 * *(float *)(this + 0x90) + local_4c * *(float *)(this + 0x80) +
             local_44 * *(float *)(this + 0xa0);
        *(float *)(param_7 + 4) = local_48 * fVar12 + local_4c * fVar15 + local_44 * fVar2;
        *(float *)(param_7 + 8) = local_48 * fVar13 + local_4c * fVar16 + local_44 * fVar3;
        *(float *)(param_7 + 0xc) = local_48 * fVar14 + local_4c * fVar17 + local_44 * fVar4;
      }
      else if (iVar8 == 1) {
        uVar5 = *(undefined8 *)(this + 0x48);
        *(undefined8 *)param_6 = *(undefined8 *)(this + 0x40);
        *(undefined8 *)(param_6 + 8) = uVar5;
        uVar5 = *(undefined8 *)(this + 0x88);
        *(undefined8 *)param_7 = *(undefined8 *)(this + 0x80);
        *(undefined8 *)(param_7 + 8) = uVar5;
      }
LAB_00104541:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return fVar18;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    *(long *)param_5 = auVar19._0_8_;
    *(ulong *)(param_5 + 8) = auVar19._8_8_ & 0xffffffff00000000 | (ulong)(uint)fStack_a0;
    if (local_44 == 2.10195e-44) {
      fVar18 = 0.0;
      *(undefined1 (*) [16])param_5 = (undefined1  [16])0x0;
      goto LAB_00104505;
    }
    iVar9 = 0;
    iVar8 = 0;
    pGVar7 = this;
    if (((uint)local_44 & 1) == 0) goto joined_r0x001045ec;
LAB_001045b3:
    lVar10 = (long)iVar8;
    uVar5 = *(undefined8 *)(pGVar7 + 8);
    iVar8 = iVar8 + 1;
    pGVar11 = this + lVar10 * 0x10;
    *(undefined8 *)pGVar11 = *(undefined8 *)pGVar7;
    *(undefined8 *)(pGVar11 + 8) = uVar5;
    uVar5 = *(undefined8 *)(pGVar7 + 0x48);
    *(undefined8 *)(pGVar11 + 0x40) = *(undefined8 *)(pGVar7 + 0x40);
    *(undefined8 *)(pGVar11 + 0x48) = uVar5;
    *(undefined1 (*) [16])(pGVar11 + 0x80) = *(undefined1 (*) [16])(pGVar7 + 0x80);
joined_r0x001045ec:
    if (iVar9 < iVar1) break;
    *(int *)(this + 0xc0) = iVar8;
    if (fVar18 <= param_3 * param_3) {
      *(undefined1 (*) [16])param_5 = (undefined1  [16])0x0;
      goto LAB_00104ab1;
    }
    fVar12 = *(float *)(this + 8) * *(float *)(this + 8) +
             *(float *)(this + 4) * *(float *)(this + 4) + *(float *)this * *(float *)this + 0.0;
    if (1 < iVar8) {
      pGVar7 = this + 0x10;
      fVar14 = fVar12;
      do {
        pGVar11 = pGVar7 + 0x10;
        fVar12 = *(float *)(pGVar7 + 8) * *(float *)(pGVar7 + 8) +
                 *(float *)pGVar7 * *(float *)pGVar7 + 0.0 +
                 *(float *)(pGVar7 + 4) * *(float *)(pGVar7 + 4);
        if (fVar12 <= fVar14) {
          fVar12 = fVar14;
        }
        pGVar7 = pGVar11;
        fVar14 = fVar12;
      } while (pGVar11 != this + (ulong)(iVar8 - 2) * 0x10 + 0x20);
    }
    if (fVar18 <= fVar12 * _LC8) {
      *(undefined1 (*) [16])param_5 = (undefined1  [16])0x0;
LAB_00104ab1:
      fVar18 = 0.0;
      goto LAB_00104505;
    }
    *(float *)param_5 = 0.0 - *(float *)param_5;
    *(float *)(param_5 + 4) = 0.0 - *(float *)(param_5 + 4);
    *(float *)(param_5 + 8) = 0.0 - *(float *)(param_5 + 8);
    *(float *)(param_5 + 0xc) = 0.0 - *(float *)(param_5 + 0xc);
    fVar14 = fVar13 * _LC8;
    fVar12 = fVar13 - fVar18;
    fVar13 = fVar18;
    local_84 = fVar18;
    if (fVar12 <= fVar14) goto LAB_00104505;
  } while( true );
  iVar9 = iVar9 + 1;
  pGVar7 = pGVar7 + 0x10;
  if ((1 << ((byte)iVar9 & 0x1f) & (uint)local_44) != 0) goto LAB_001045b3;
  goto joined_r0x001045ec;
}



/* JPH::CollideConvexVsTriangles::CollideConvexVsTriangles(JPH::ConvexShape const*, JPH::Vec3,
   JPH::Vec3, JPH::Mat44 const&, JPH::Mat44 const&, JPH::SubShapeID const&,
   JPH::CollideShapeSettings const&, JPH::CollisionCollector<JPH::CollideShapeResult,
   JPH::CollisionCollectorTraitsCollideShape>&) */

void JPH::CollideConvexVsTriangles::_GLOBAL__sub_I_CollideConvexVsTriangles(void)

{
  if (DVec3::cTrue == '\0') {
    DVec3::cTrue = '\x01';
    DVec3::cTrue = _LC79;
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::EPAConvexHullBuilder::Triangle::Triangle(int, int, int, JPH::Vec3 const*) */

void __thiscall
JPH::EPAConvexHullBuilder::Triangle::Triangle
          (Triangle *this,int param_1,int param_2,int param_3,Vec3 *param_4)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


