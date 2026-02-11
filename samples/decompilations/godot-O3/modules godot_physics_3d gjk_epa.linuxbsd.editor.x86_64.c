
/* GjkEpa2::GJK::getsupport(Vector3 const&, GjkEpa2::GJK::sSV&) const [clone .isra.0] */

void GjkEpa2::GJK::getsupport(Vector3 *param_1,sSV *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uint uVar13;
  long in_FS_OFFSET;
  float in_XMM0_Da;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 in_XMM0_Db;
  float fVar17;
  float fVar18;
  float in_XMM1_Da;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 in_XMM1_Db;
  undefined1 auVar22 [16];
  float in_XMM2_Da;
  float fVar23;
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [12];
  undefined8 local_40;
  float local_38;
  undefined1 local_30 [12];
  long local_20;
  
  uVar13 = _LC6;
  auVar22._4_4_ = in_XMM1_Da;
  auVar22._0_4_ = in_XMM0_Da;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  auVar22._8_4_ = in_XMM0_Db;
  auVar22._12_4_ = in_XMM1_Db;
  fVar14 = SQRT(in_XMM0_Da * in_XMM0_Da + in_XMM1_Da * in_XMM1_Da + in_XMM2_Da * in_XMM2_Da);
  auVar25._4_4_ = fVar14;
  auVar25._0_4_ = fVar14;
  auVar25._8_8_ = _LC4;
  auVar22 = divps(auVar22,auVar25);
  *(float *)(param_2 + 8) = in_XMM2_Da / fVar14;
  fVar23 = (float)((uint)(in_XMM2_Da / fVar14) ^ uVar13);
  *(long *)param_2 = auVar22._0_8_;
  fVar14 = (float)(auVar22._0_4_ ^ uVar13);
  fVar24 = (float)(auVar22._4_4_ ^ uVar13);
  local_38 = *(float *)(param_1 + 0x48) * fVar14 + *(float *)(param_1 + 0x54) * fVar24 +
             *(float *)(param_1 + 0x60) * fVar23;
  local_40 = CONCAT44(fVar14 * (float)((ulong)*(undefined8 *)(param_1 + 0x40) >> 0x20) +
                      (float)((ulong)*(undefined8 *)(param_1 + 0x4c) >> 0x20) * fVar24 +
                      fVar23 * (float)((ulong)*(undefined8 *)(param_1 + 0x58) >> 0x20),
                      fVar14 * (float)*(undefined8 *)(param_1 + 0x40) +
                      (float)*(undefined8 *)(param_1 + 0x4c) * fVar24 +
                      fVar23 * (float)*(undefined8 *)(param_1 + 0x58));
  local_30 = (**(code **)(param_1 + 0x78))(*(undefined8 *)(param_1 + 8),&local_40);
  fVar19 = local_30._8_4_;
  fVar14 = *(float *)(param_1 + 0x5c);
  fVar23 = *(float *)(param_1 + 0x50);
  fVar15 = local_30._0_4_;
  fVar17 = local_30._4_4_;
  uVar5 = *(undefined8 *)(param_1 + 0x48);
  fVar24 = *(float *)(param_1 + 0x58);
  fVar1 = *(float *)(param_1 + 0x60);
  fVar2 = *(float *)(param_1 + 0x6c);
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  fVar3 = *(float *)(param_1 + 0x44);
  fVar4 = *(float *)(param_2 + 8);
  uVar7 = *(undefined8 *)(param_1 + 0x50);
  fVar20 = (float)*(undefined8 *)param_2;
  fVar16 = (float)((ulong)*(undefined8 *)param_2 >> 0x20);
  uVar8 = *(undefined8 *)(param_1 + 100);
  local_38 = *(float *)(param_1 + 0x18) * fVar20 + *(float *)(param_1 + 0x24) * fVar16 +
             *(float *)(param_1 + 0x30) * fVar4;
  local_40 = CONCAT44(fVar16 * (float)((ulong)*(undefined8 *)(param_1 + 0x1c) >> 0x20) +
                      fVar20 * (float)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x20) +
                      fVar4 * (float)((ulong)*(undefined8 *)(param_1 + 0x28) >> 0x20),
                      fVar16 * (float)*(undefined8 *)(param_1 + 0x1c) +
                      fVar20 * (float)*(undefined8 *)(param_1 + 0x10) +
                      fVar4 * (float)*(undefined8 *)(param_1 + 0x28));
  auVar26 = (**(code **)(param_1 + 0x78))(*(undefined8 *)param_1,&local_40);
  fVar21 = auVar26._8_4_;
  uVar9 = *(undefined8 *)(param_1 + 0x18);
  uVar10 = *(undefined8 *)(param_1 + 0x10);
  fVar16 = auVar26._0_4_;
  fVar18 = auVar26._4_4_;
  fVar4 = *(float *)(param_1 + 0x20);
  fVar20 = *(float *)(param_1 + 0x14);
  uVar11 = *(undefined8 *)(param_1 + 0x20);
  uVar12 = *(undefined8 *)(param_1 + 0x34);
  *(float *)(param_2 + 0x14) =
       (fVar16 * *(float *)(param_1 + 0x28) + *(float *)(param_1 + 0x2c) * fVar18 +
        *(float *)(param_1 + 0x30) * fVar21 + *(float *)(param_1 + 0x3c)) -
       (fVar15 * fVar24 + fVar14 * fVar17 + fVar1 * fVar19 + fVar2);
  *(ulong *)(param_2 + 0xc) =
       CONCAT44(((float)((ulong)uVar9 >> 0x20) * fVar16 + fVar18 * fVar4 +
                 (float)((ulong)uVar11 >> 0x20) * fVar21 + (float)((ulong)uVar12 >> 0x20)) -
                ((float)((ulong)uVar5 >> 0x20) * fVar15 + fVar23 * fVar17 +
                 (float)((ulong)uVar7 >> 0x20) * fVar19 + (float)((ulong)uVar8 >> 0x20)),
                ((float)uVar10 * fVar16 + fVar18 * fVar20 + (float)uVar9 * fVar21 + (float)uVar12) -
                ((float)uVar6 * fVar15 + fVar3 * fVar17 + (float)uVar5 * fVar19 + (float)uVar8));
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
  local_30 = auVar26;
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GjkEpa2::Distance(GodotShape3D const*, Transform3D const&, float, GodotShape3D const*,
   Transform3D const&, float, Vector3 const&, GjkEpa2::sResults&) */

undefined8
GjkEpa2::Distance(GodotShape3D *param_1,Transform3D *param_2,float param_3,GodotShape3D *param_4,
                 Transform3D *param_5,float param_6,Vector3 *param_7,sResults *param_8)

{
  float fVar1;
  uint *puVar2;
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
  int iVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined8 uVar23;
  uint uVar24;
  ulong uVar25;
  code *pcVar26;
  long in_FS_OFFSET;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined8 extraout_XMM0_Qb;
  float fVar31;
  float fVar32;
  undefined1 auVar33 [16];
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined1 auVar41 [16];
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
  undefined1 auVar52 [12];
  float local_3d0;
  float fStack_3cc;
  float local_3b8;
  undefined8 local_268;
  float local_260;
  GodotShape3D *local_258;
  GodotShape3D *local_250;
  undefined8 local_248;
  float fStack_240;
  float fStack_23c;
  float fStack_238;
  float fStack_234;
  undefined8 uStack_230;
  float local_228;
  float fStack_224;
  float fStack_220;
  undefined4 uStack_21c;
  undefined8 local_218;
  float fStack_210;
  float fStack_20c;
  float fStack_208;
  float fStack_204;
  undefined8 uStack_200;
  float local_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  undefined8 local_1e8;
  code *local_1e0;
  GJK local_1d8 [16];
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [16];
  uint local_1a8;
  undefined8 local_1a4;
  undefined4 local_19c;
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  uint local_178;
  undefined8 local_174;
  undefined4 local_16c;
  undefined8 local_168;
  undefined8 local_160;
  undefined1 local_158 [16];
  undefined8 local_d8 [12];
  undefined8 local_78 [4];
  undefined8 local_58;
  long local_50;
  undefined4 local_48;
  long local_40;
  
  pcVar26 = MinkowskiDiff::get_support_with_margin;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined1 (*) [16])(param_8 + 4) = (undefined1  [16])0x0;
  *(undefined8 *)(param_8 + 0x14) = 0;
  local_248 = *(undefined8 *)param_2;
  uVar23 = *(undefined8 *)(param_2 + 8);
  local_1e8 = CONCAT44(param_6,param_3);
  *(undefined4 *)param_8 = 0;
  fStack_240 = (float)uVar23;
  fStack_23c = (float)((ulong)uVar23 >> 0x20);
  uStack_230 = *(undefined8 *)(param_2 + 0x18);
  fStack_238 = (float)*(undefined8 *)(param_2 + 0x10);
  fStack_234 = (float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20);
  local_228 = (float)*(undefined8 *)(param_2 + 0x20);
  fStack_224 = (float)((ulong)*(undefined8 *)(param_2 + 0x20) >> 0x20);
  fStack_220 = (float)*(undefined8 *)(param_2 + 0x28);
  uStack_21c = (undefined4)((ulong)*(undefined8 *)(param_2 + 0x28) >> 0x20);
  local_218 = *(undefined8 *)param_5;
  fStack_210 = (float)*(undefined8 *)(param_5 + 8);
  fStack_20c = (float)((ulong)*(undefined8 *)(param_5 + 8) >> 0x20);
  uStack_200 = *(undefined8 *)(param_5 + 0x18);
  fStack_208 = (float)*(undefined8 *)(param_5 + 0x10);
  fStack_204 = (float)((ulong)*(undefined8 *)(param_5 + 0x10) >> 0x20);
  local_1f8 = (float)*(undefined8 *)(param_5 + 0x20);
  fStack_1f4 = (float)((ulong)*(undefined8 *)(param_5 + 0x20) >> 0x20);
  fStack_1f0 = (float)*(undefined8 *)(param_5 + 0x28);
  fStack_1ec = (float)((ulong)*(undefined8 *)(param_5 + 0x28) >> 0x20);
  if ((param_3 <= 0.0) && (param_6 <= 0.0)) {
    pcVar26 = MinkowskiDiff::get_support_without_margin;
  }
  local_1c8 = ZEXT416(_LC7);
  local_1a4 = 0;
  local_19c = 0;
  local_174 = 0;
  local_16c = 0;
  local_168 = 0;
  local_160 = 0;
  local_1a8 = _LC7;
  local_178 = _LC7;
  puVar21 = local_d8;
  do {
    *puVar21 = 0;
    puVar22 = puVar21 + 3;
    *(undefined4 *)(puVar21 + 1) = 0;
    *(undefined8 *)((long)puVar21 + 0xc) = 0;
    *(undefined4 *)((long)puVar21 + 0x14) = 0;
    puVar21 = puVar22;
  } while (local_78 != puVar22);
  local_58 = 0;
  local_50 = 0;
  local_48 = 2;
  local_158 = (undefined1  [16])0x0;
  local_258 = param_1;
  local_250 = param_4;
  local_1e0 = pcVar26;
  local_1b8 = local_1c8;
  local_198 = local_1c8;
  local_188 = local_1c8;
  iVar20 = GJK::Evaluate(local_1d8,(MinkowskiDiff *)&local_258,param_7);
  fVar19 = fStack_1ec;
  fVar18 = fStack_1f0;
  fVar17 = fStack_1f4;
  fVar16 = local_1f8;
  uVar23 = uStack_200;
  fVar14 = fStack_204;
  fVar13 = fStack_208;
  fVar12 = fStack_20c;
  fVar11 = fStack_210;
  fVar8 = fStack_220;
  fVar7 = fStack_224;
  fVar6 = local_228;
  fVar5 = fStack_234;
  fVar4 = fStack_238;
  fVar37 = fStack_23c;
  fVar29 = fStack_240;
  if (iVar20 == 0) {
    if (*(int *)(local_50 + 0x30) == 0) {
      fVar43 = 0.0;
      fVar44 = 0.0;
      fVar37 = 0.0;
      fVar45 = 0.0;
      fVar46 = 0.0;
      fVar47 = 0.0;
      fVar48 = 0.0;
      auVar41._0_8_ = 0;
      fVar29 = 0.0;
    }
    else {
      fVar49 = 0.0;
      fVar45 = 0.0;
      fVar46 = 0.0;
      fVar47 = 0.0;
      fVar48 = 0.0;
      fVar10 = local_218._4_4_;
      fVar9 = (float)local_218;
      fVar15 = (float)uStack_200;
      fVar3 = local_248._4_4_;
      fVar42 = (float)uStack_230;
      fVar38 = (float)((ulong)uStack_230 >> 0x20);
      fVar35 = (float)local_248;
      fVar36 = 0.0;
      fVar39 = 0.0;
      local_3d0 = 0.0;
      fStack_3cc = 0.0;
      fVar43 = 0.0;
      fVar44 = 0.0;
      local_3b8 = 0.0;
      uVar24 = 0;
      do {
        uVar25 = (ulong)uVar24;
        fVar1 = *(float *)(local_50 + 0x20 + uVar25 * 4);
        puVar21 = *(undefined8 **)(local_50 + uVar25 * 8);
        uVar24 = uVar24 + 1;
        auVar41._0_8_ = *puVar21;
        fVar27 = *(float *)(puVar21 + 1);
        fVar28 = (float)auVar41._0_8_;
        fVar30 = (float)((ulong)auVar41._0_8_ >> 0x20);
        local_268 = CONCAT44(fVar30 * fVar4 + fVar28 * fVar3 + fVar27 * fVar38,
                             fVar30 * fVar37 + fVar28 * fVar35 + fVar27 * fVar42);
        local_260 = fVar30 * fVar5 + fVar29 * fVar28 + fVar27 * fVar6;
        auVar52 = (*pcVar26)(param_1,&local_268);
        fVar31 = auVar52._8_4_;
        fVar27 = auVar52._0_4_;
        fVar30 = auVar52._4_4_;
        puVar2 = *(uint **)(local_50 + uVar25 * 8);
        local_3d0 = local_3d0 + (fVar27 * fVar35 + fVar30 * fVar3 + fVar31 * fVar29 + fVar7) * fVar1
        ;
        fStack_3cc = fStack_3cc +
                     (fVar27 * fVar37 + fVar30 * fVar4 + fVar31 * fVar5 + fVar8) * fVar1;
        fVar34 = fVar27 * fVar35 + fVar30 * fVar3 + fVar31 * fVar29;
        local_3b8 = (fVar7 + fVar34) * fVar1 + local_3b8;
        fVar50 = (float)(puVar2[2] ^ _LC6);
        fVar51 = (float)(puVar2[1] ^ _LC6);
        fVar28 = (float)(*puVar2 ^ _LC6);
        fVar40 = (float)((ulong)uVar23 >> 0x20);
        local_260 = fVar28 * fVar11 + fVar51 * fVar14 + fVar50 * fVar16;
        local_268 = CONCAT44(fVar51 * fVar13 + fVar28 * fVar10 + fVar50 * fVar40,
                             fVar51 * fVar12 + fVar28 * fVar9 + fVar50 * fVar15);
        auVar52 = (*pcVar26)(param_4,&local_268);
        fVar32 = auVar52._8_4_;
        fVar28 = auVar52._0_4_;
        fVar50 = auVar52._4_4_;
        fVar51 = (float)((ulong)extraout_XMM0_Qb >> 0x20);
        fVar36 = fVar36 + (fVar9 * fVar28 + fVar10 * fVar50 + fVar11 * fVar32 + fVar17) * fVar1;
        fVar39 = fVar39 + (fVar12 * fVar28 + fVar13 * fVar50 + fVar14 * fVar32 + fVar18) * fVar1;
        fVar43 = fVar43 + (fVar50 * fVar13 + fVar28 * fVar12 + fVar32 * fVar14 + fVar18) * fVar1;
        fVar44 = fVar44 + (fVar50 * fVar40 + fVar28 * fVar15 + fVar32 * fVar16 + fVar19) * fVar1;
        fVar28 = fVar9 * fVar28 + fVar10 * fVar50 + fVar32 * fVar11;
        fVar45 = fVar45 + (fVar34 + fVar7) * fVar1;
        fVar46 = fVar46 + (fVar37 * fVar27 + fVar4 * fVar30 + fVar5 * fVar31 + fVar8) * fVar1;
        fVar47 = fVar47 + (fVar42 * fVar27 + fVar30 * fVar38 + fVar6 * fVar31 + fVar7) * fVar1;
        fVar48 = fVar48 + (fVar28 + fVar17) * fVar1;
        fVar49 = fVar49 + (fVar28 + fVar17) * fVar1;
      } while (uVar24 < *(uint *)(local_50 + 0x30));
      fStack_3cc = fStack_3cc - fVar39;
      auVar41._0_8_ = CONCAT44(fStack_3cc,local_3d0 - fVar36);
      auVar41._8_4_ =
           0.0 - (((float)extraout_XMM0_Qb * 0.0 + (float)extraout_XMM0_Qb * 0.0 + 0.0 + 0.0) * 0.0
                 + 0.0);
      auVar41._12_4_ = 0.0 - ((fVar51 * 0.0 + fVar51 * 0.0 + 0.0 + 0.0) * 0.0 + 0.0);
      fVar29 = fVar47 - fVar44;
      fVar37 = SQRT((local_3b8 - fVar49) * (local_3b8 - fVar49) + fStack_3cc * fStack_3cc +
                    fVar29 * fVar29);
      if (_LC11 < fVar37) {
        fVar29 = fVar29 / fVar37;
        auVar33._4_4_ = fVar37;
        auVar33._0_4_ = fVar37;
        auVar33._8_8_ = _LC4;
        auVar41 = divps(auVar41,auVar33);
      }
    }
    *(float *)(param_8 + 4) = fVar45;
    *(float *)(param_8 + 8) = fVar46;
    *(float *)(param_8 + 0xc) = fVar47;
    *(float *)(param_8 + 0x10) = fVar48;
    uVar23 = 1;
    *(float *)(param_8 + 0x14) = fVar43;
    *(float *)(param_8 + 0x18) = fVar44;
    *(float *)(param_8 + 0x28) = fVar37;
    *(undefined8 *)(param_8 + 0x1c) = auVar41._0_8_;
    *(float *)(param_8 + 0x24) = fVar29;
  }
  else {
    uVar23 = 0;
    *(uint *)param_8 = (iVar20 != 1) + 1;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar23;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GjkEpa2::Penetration(GodotShape3D const*, Transform3D const&, float, GodotShape3D const*,
   Transform3D const&, float, Vector3 const&, GjkEpa2::sResults&) */

undefined8
GjkEpa2::Penetration
          (GodotShape3D *param_1,Transform3D *param_2,float param_3,GodotShape3D *param_4,
          Transform3D *param_5,float param_6,Vector3 *param_7,sResults *param_8)

{
  long lVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  int iVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined1 *puVar17;
  undefined8 uVar19;
  undefined1 *puVar20;
  code *pcVar21;
  long lVar22;
  long in_FS_OFFSET;
  uint uVar23;
  undefined1 auVar24 [16];
  float fVar25;
  uint uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auVar31 [12];
  undefined1 local_6030 [24576];
  undefined1 *puVar18;
  
  puVar18 = &stack0xffffffffffffffd0;
  do {
    puVar20 = puVar18;
    *(undefined8 *)(puVar20 + -0x1000) = *(undefined8 *)(puVar20 + -0x1000);
    puVar18 = puVar20 + -0x1000;
  } while (puVar20 + -0x1000 != local_6030);
  pcVar21 = MinkowskiDiff::get_support_with_margin;
  *(undefined8 *)(puVar20 + 0x4ff0) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  *(undefined1 (*) [16])(param_8 + 4) = (undefined1  [16])0x0;
  *(undefined8 *)(param_8 + 0x14) = 0;
  uVar5 = *(undefined8 *)param_2;
  uVar19 = *(undefined8 *)(param_2 + 8);
  *(ulong *)(puVar20 + -0x1638) = CONCAT44(param_6,param_3);
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  uVar7 = *(undefined8 *)(param_2 + 0x18);
  uVar8 = *(undefined8 *)(param_2 + 0x20);
  uVar9 = *(undefined8 *)(param_2 + 0x28);
  uVar10 = *(undefined8 *)(param_5 + 0x10);
  uVar11 = *(undefined8 *)(param_5 + 0x18);
  uVar12 = *(undefined8 *)(param_5 + 0x20);
  uVar13 = *(undefined8 *)(param_5 + 0x28);
  *(undefined8 *)(puVar20 + -0x1698) = uVar5;
  *(undefined8 *)(puVar20 + -0x1690) = uVar19;
  uVar5 = *(undefined8 *)param_5;
  uVar19 = *(undefined8 *)(param_5 + 8);
  *(undefined4 *)param_8 = 0;
  *(GodotShape3D **)(puVar20 + -0x16a8) = param_1;
  *(GodotShape3D **)(puVar20 + -0x16a0) = param_4;
  *(undefined8 *)(puVar20 + -0x1688) = uVar6;
  *(undefined8 *)(puVar20 + -0x1680) = uVar7;
  *(undefined8 *)(puVar20 + -0x1678) = uVar8;
  *(undefined8 *)(puVar20 + -0x1670) = uVar9;
  *(undefined8 *)(puVar20 + -0x1668) = uVar5;
  *(undefined8 *)(puVar20 + -0x1660) = uVar19;
  *(undefined8 *)(puVar20 + -0x1658) = uVar10;
  *(undefined8 *)(puVar20 + -0x1650) = uVar11;
  *(undefined8 *)(puVar20 + -0x1648) = uVar12;
  *(undefined8 *)(puVar20 + -0x1640) = uVar13;
  if ((param_3 <= 0.0) && (param_6 <= 0.0)) {
    pcVar21 = MinkowskiDiff::get_support_without_margin;
  }
  *(code **)(puVar20 + -0x1630) = pcVar21;
  auVar24 = ZEXT416(_LC7);
  *(undefined8 *)(puVar20 + -0x15f4) = 0;
  *(undefined4 *)(puVar20 + -0x15ec) = 0;
  *(undefined8 *)(puVar20 + -0x15c4) = 0;
  *(undefined4 *)(puVar20 + -0x15bc) = 0;
  *(undefined8 *)(puVar20 + -0x15b8) = 0;
  *(undefined8 *)(puVar20 + -0x15b0) = 0;
  *(undefined1 (*) [16])(puVar20 + -0x1618) = auVar24;
  *(undefined1 (*) [16])(puVar20 + -0x1608) = auVar24;
  *(uint *)(puVar20 + -0x15f8) = _LC7;
  *(undefined1 (*) [16])(puVar20 + -0x15e8) = auVar24;
  *(undefined1 (*) [16])(puVar20 + -0x15d8) = auVar24;
  *(uint *)(puVar20 + -0x15c8) = _LC7;
  puVar16 = (undefined8 *)(puVar20 + -0x1528);
  do {
    *puVar16 = 0;
    puVar15 = puVar16 + 3;
    *(undefined4 *)(puVar16 + 1) = 0;
    *(undefined8 *)((long)puVar16 + 0xc) = 0;
    *(undefined4 *)((long)puVar16 + 0x14) = 0;
    puVar16 = puVar15;
  } while ((undefined8 *)(puVar20 + -0x14c8) != puVar15);
  uVar5 = *(undefined8 *)param_7;
  *(undefined1 (*) [16])(puVar20 + -0x15a8) = (undefined1  [16])0x0;
  uVar23 = *(uint *)(param_7 + 8);
  *(float *)(puVar20 + -0x1724) = param_3;
  *(undefined8 *)(puVar20 + -0x14a8) = 0;
  *(undefined8 *)(puVar20 + -0x14a0) = 0;
  *(undefined4 *)(puVar20 + -0x1498) = 2;
  *(ulong *)(puVar20 + -0x1488) =
       CONCAT44((uint)((ulong)uVar5 >> 0x20) ^ _LC14._4_4_,(uint)uVar5 ^ (uint)_LC14);
  *(uint *)(puVar20 + -0x1480) = uVar23 ^ _LC6;
  *(undefined8 *)(puVar20 + -0x1730) = 0x100f4c;
  iVar14 = GJK::Evaluate((GJK *)(puVar20 + -0x1628),(MinkowskiDiff *)(puVar20 + -0x16a8),
                         (Vector3 *)(puVar20 + -0x1488));
  uVar2 = *(undefined4 *)(puVar20 + -0x1724);
  if (iVar14 == 1) {
    puVar16 = (undefined8 *)(puVar20 + -0x1438);
    do {
      *puVar16 = 0;
      puVar15 = puVar16 + 3;
      *(undefined4 *)(puVar16 + 1) = 0;
      *(undefined8 *)((long)puVar16 + 0xc) = 0;
      *(undefined4 *)((long)puVar16 + 0x14) = 0;
      puVar16 = puVar15;
    } while ((undefined8 *)(puVar20 + -0x838) != puVar15);
    puVar16 = (undefined8 *)(puVar20 + -0x838);
    do {
      *puVar16 = 0;
      puVar15 = puVar16 + 0xb;
      *(undefined4 *)(puVar16 + 1) = 0;
      *(undefined4 *)((long)puVar16 + 0xc) = 0;
      *(undefined1 *)((long)puVar16 + 0x53) = 0;
      puVar16 = puVar15;
    } while (puVar15 != (undefined8 *)(puVar20 + 0x4fc8));
    *(undefined4 *)(puVar20 + 0x4fc8) = 0;
    *(undefined8 *)(puVar20 + 0x4fd0) = 0;
    *(undefined4 *)(puVar20 + 0x4fd8) = 0;
    *(undefined4 *)(puVar20 + -0x1488) = 9;
    *(undefined8 *)(puVar20 + 0x4fb0) = 0;
    *(undefined8 *)(puVar20 + 0x4fb8) = 0;
    *(undefined1 (*) [16])(puVar20 + -0x1448) = (undefined1  [16])0x0;
    puVar18 = puVar20 + 0x4f70;
    while (puVar17 = puVar18 + -0x58, puVar20 + -0x890 != puVar17) {
      *(undefined1 **)(puVar18 + -0x10) = puVar18;
      *(undefined8 *)(puVar18 + -0x18) = 0;
      *(undefined1 **)(puVar18 + 0x40) = puVar17;
      puVar18 = puVar17;
    }
    uVar5 = *(undefined8 *)param_7;
    uVar23 = *(uint *)(param_7 + 8);
    *(undefined1 **)(puVar20 + 0x4fe0) = puVar18;
    *(undefined4 *)(puVar20 + -0x1718) = uVar2;
    *(undefined4 *)(puVar20 + 0x4fe8) = 0x100;
    *(ulong *)(puVar20 + -0x16b8) =
         CONCAT44((uint)((ulong)uVar5 >> 0x20) ^ _LC14._4_4_,(uint)uVar5 ^ (uint)_LC14);
    *(uint *)(puVar20 + -0x16b0) = uVar23 ^ _LC6;
    *(undefined8 *)(puVar20 + -0x1730) = 0x1010cd;
    iVar14 = EPA::Evaluate((EPA *)(puVar20 + -0x1488),(GJK *)(puVar20 + -0x1628),
                           (Vector3 *)(puVar20 + -0x16b8));
    if (iVar14 != 9) {
      if (*(int *)(puVar20 + -0x1450) == 0) {
        fVar29 = 0.0;
        fVar27 = 0.0;
        fVar28 = 0.0;
      }
      else {
        uVar5 = *(undefined8 *)(puVar20 + -0x168c);
        lVar22 = 0;
        fVar29 = 0.0;
        uVar19 = *(undefined8 *)(puVar20 + -0x1698);
        *(undefined4 *)(puVar20 + -0x1724) = *(undefined4 *)(puVar20 + -0x1678);
        uVar6 = *(undefined8 *)(puVar20 + -0x1680);
        *(int *)(puVar20 + -0x1700) = (int)((ulong)uVar5 >> 0x20);
        *(int *)(puVar20 + -0x16f8) = (int)((ulong)uVar19 >> 0x20);
        *(int *)(puVar20 + -0x1708) = (int)((ulong)uVar6 >> 0x20);
        *(undefined4 *)(puVar20 + -0x16f0) = *(undefined4 *)(puVar20 + -0x166c);
        *(undefined4 *)(puVar20 + -0x16ec) = *(undefined4 *)(puVar20 + -0x1670);
        fVar28 = 0.0;
        *(undefined4 *)(puVar20 + -0x16d0) = *(undefined4 *)(puVar20 + -0x1674);
        fVar27 = 0.0;
        *(int *)(puVar20 + -0x16f4) = (int)uVar19;
        *(int *)(puVar20 + -0x16fc) = (int)uVar5;
        *(int *)(puVar20 + -0x1704) = (int)uVar6;
        *(undefined8 *)(puVar20 + -0x16e8) = uVar6;
        *(undefined8 *)(puVar20 + -0x16e0) = uVar5;
        *(undefined8 *)(puVar20 + -0x16d8) = uVar19;
        *(undefined4 *)(puVar20 + -0x1720) = *(undefined4 *)(puVar20 + -0x1690);
        *(undefined4 *)(puVar20 + -0x171c) = *(undefined4 *)(puVar20 + -0x1684);
        *(undefined4 *)(puVar20 + -0x16cc) = *(undefined4 *)(puVar20 + -0x1718);
        do {
          puVar16 = *(undefined8 **)(puVar20 + lVar22 * 8 + -0x1480);
          *(float *)(puVar20 + -0x170c) = fVar29;
          *(float *)(puVar20 + -0x1710) = fVar27;
          uVar5 = *puVar16;
          fVar27 = *(float *)(puVar16 + 1);
          *(float *)(puVar20 + -0x1714) = fVar28;
          lVar1 = lVar22 * 4;
          lVar22 = lVar22 + 1;
          fVar28 = (float)uVar5;
          fVar29 = (float)((ulong)uVar5 >> 0x20);
          *(undefined4 *)(puVar20 + -0x1718) = *(undefined4 *)(puVar20 + lVar1 + -0x1460);
          *(ulong *)(puVar20 + -0x16c8) =
               CONCAT44(fVar29 * (float)((ulong)*(undefined8 *)(puVar20 + -0x16e0) >> 0x20) +
                        fVar28 * (float)((ulong)*(undefined8 *)(puVar20 + -0x16d8) >> 0x20) +
                        fVar27 * (float)((ulong)*(undefined8 *)(puVar20 + -0x16e8) >> 0x20),
                        fVar29 * (float)*(undefined8 *)(puVar20 + -0x16e0) +
                        fVar28 * (float)*(undefined8 *)(puVar20 + -0x16d8) +
                        fVar27 * (float)*(undefined8 *)(puVar20 + -0x16e8));
          *(float *)(puVar20 + -0x16c0) =
               *(float *)(puVar20 + -0x1724) * fVar27 +
               *(float *)(puVar20 + -0x1720) * fVar28 + fVar29 * *(float *)(puVar20 + -0x171c);
          *(undefined8 *)(puVar20 + -0x1730) = 0x101287;
          auVar31 = (*pcVar21)(param_1,puVar20 + -0x16c8);
          fVar29 = *(float *)(puVar20 + -0x16b8);
          fVar3 = *(float *)(puVar20 + -0x16b4);
          *(undefined1 (*) [12])(puVar20 + -0x16b8) = auVar31;
          fVar4 = *(float *)(puVar20 + -0x16b0);
          fVar25 = *(float *)(puVar20 + -0x1718);
          fVar28 = *(float *)(puVar20 + -0x1714) +
                   (*(float *)(puVar20 + -0x16f4) * fVar29 + *(float *)(puVar20 + -0x16f8) * fVar3 +
                    *(float *)(puVar20 + -0x1720) * fVar4 + *(float *)(puVar20 + -0x16d0)) * fVar25;
          fVar27 = *(float *)(puVar20 + -0x1710) +
                   (*(float *)(puVar20 + -0x16fc) * fVar29 + *(float *)(puVar20 + -0x1700) * fVar3 +
                    *(float *)(puVar20 + -0x171c) * fVar4 + *(float *)(puVar20 + -0x16ec)) * fVar25;
          fVar29 = *(float *)(puVar20 + -0x170c) +
                   (fVar4 * *(float *)(puVar20 + -0x1724) +
                    fVar29 * *(float *)(puVar20 + -0x1704) + fVar3 * *(float *)(puVar20 + -0x1708) +
                   *(float *)(puVar20 + -0x16f0)) * fVar25;
        } while ((uint)lVar22 < *(uint *)(puVar20 + -0x1450));
      }
      uVar5 = *(undefined8 *)(puVar20 + -0x1440);
      fVar3 = *(float *)(puVar20 + -0x1448);
      fVar4 = *(float *)(puVar20 + -0x1444);
      *(undefined4 *)param_8 = 1;
      uVar19 = 1;
      fVar25 = (float)uVar5;
      uVar23 = (uint)fVar3 ^ _LC6;
      fVar30 = (float)((ulong)uVar5 >> 0x20);
      uVar26 = (uint)fVar4 ^ _LC6;
      *(ulong *)(param_8 + 4) = CONCAT44(fVar27,fVar28);
      *(ulong *)(param_8 + 0xc) = CONCAT44(fVar28 - fVar3 * fVar30,fVar29);
      *(ulong *)(param_8 + 0x14) = CONCAT44(fVar29 - fVar25 * fVar30,fVar27 - fVar4 * fVar30);
      *(ulong *)(param_8 + 0x1c) = CONCAT44(uVar26,uVar23);
      *(ulong *)(param_8 + 0x24) = CONCAT44((uint)fVar30 ^ _LC14._4_4_,(uint)fVar25 ^ (uint)_LC14);
      goto LAB_00100f5e;
    }
    *(undefined4 *)param_8 = 3;
  }
  else if (iVar14 == 2) {
    *(undefined4 *)param_8 = 2;
  }
  uVar19 = 0;
LAB_00100f5e:
  if (*(long *)(puVar20 + 0x4ff0) == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar19;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar20 + -0x1730) = &UNK_00101421;
  __stack_chk_fail();
}



/* gjk_epa_calculate_distance(GodotShape3D const*, Transform3D const&, GodotShape3D const*,
   Transform3D const&, Vector3&, Vector3&) */

void gjk_epa_calculate_distance
               (GodotShape3D *param_1,Transform3D *param_2,GodotShape3D *param_3,
               Transform3D *param_4,Vector3 *param_5,Vector3 *param_6)

{
  char cVar1;
  long in_FS_OFFSET;
  undefined8 local_68;
  float local_60;
  sResults local_58 [4];
  undefined8 local_54;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_3c;
  undefined4 local_34;
  undefined4 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = *(float *)(param_4 + 0x2c) - *(float *)(param_2 + 0x2c);
  local_68 = CONCAT44((float)((ulong)*(undefined8 *)(param_4 + 0x24) >> 0x20) -
                      (float)((ulong)*(undefined8 *)(param_2 + 0x24) >> 0x20),
                      (float)*(undefined8 *)(param_4 + 0x24) -
                      (float)*(undefined8 *)(param_2 + 0x24));
  local_3c = 0;
  local_34 = 0;
  local_30 = 0;
  cVar1 = GjkEpa2::Distance(param_1,param_2,0.0,param_3,param_4,0.0,(Vector3 *)&local_68,local_58);
  if (cVar1 != '\0') {
    *(undefined8 *)param_5 = local_54;
    *(undefined4 *)(param_5 + 8) = local_4c;
    *(undefined8 *)param_6 = local_48;
    *(undefined4 *)(param_6 + 8) = local_40;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* gjk_epa_calculate_penetration(GodotShape3D const*, Transform3D const&, GodotShape3D const*,
   Transform3D const&, void (*)(Vector3 const&, int, Vector3 const&, int, Vector3 const&, void*),
   void*, bool, float, float) */

ulong gjk_epa_calculate_penetration
                (GodotShape3D *param_1,Transform3D *param_2,GodotShape3D *param_3,
                Transform3D *param_4,
                _func_void_Vector3_ptr_int_Vector3_ptr_int_Vector3_ptr_void_ptr *param_5,
                void *param_6,bool param_7,float param_8,float param_9)

{
  ulong uVar1;
  Vector3 *pVVar2;
  Vector3 *pVVar3;
  long in_FS_OFFSET;
  float fVar4;
  undefined1 auVar5 [16];
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 local_78;
  float local_70;
  sResults local_68 [4];
  undefined8 local_64;
  float local_5c;
  undefined8 local_58;
  float local_50;
  undefined8 local_4c;
  undefined4 local_44;
  undefined4 local_40;
  long local_30;
  
  local_70 = *(float *)(param_4 + 0x2c) - *(float *)(param_2 + 0x2c);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = CONCAT44((float)((ulong)*(undefined8 *)(param_4 + 0x24) >> 0x20) -
                      (float)((ulong)*(undefined8 *)(param_2 + 0x24) >> 0x20),
                      (float)*(undefined8 *)(param_4 + 0x24) -
                      (float)*(undefined8 *)(param_2 + 0x24));
  local_5c = 0.0;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0.0;
  local_4c = 0;
  local_44 = 0;
  local_40 = 0;
  uVar1 = GjkEpa2::Penetration
                    (param_1,param_2,param_8,param_3,param_4,param_9,(Vector3 *)&local_78,local_68);
  if (((char)uVar1 != '\0') &&
     (param_5 != (_func_void_Vector3_ptr_int_Vector3_ptr_int_Vector3_ptr_void_ptr *)0x0)) {
    fVar4 = (float)((ulong)local_58 >> 0x20);
    fVar6 = (float)((ulong)local_64 >> 0x20);
    if (param_7) {
      auVar9._0_4_ = (float)local_58 - (float)local_64;
      auVar9._4_4_ = fVar4 - fVar6;
      auVar9._8_8_ = 0;
      fVar6 = local_50 - local_5c;
      fVar4 = auVar9._0_4_ * auVar9._0_4_ + auVar9._4_4_ * auVar9._4_4_ + fVar6 * fVar6;
      local_78 = 0;
      local_70 = 0.0;
      if (fVar4 != 0.0) {
        fVar4 = SQRT(fVar4);
        local_70 = fVar6 / fVar4;
        auVar7._4_4_ = fVar4;
        auVar7._0_4_ = fVar4;
        auVar7._8_8_ = _LC4;
        auVar9 = divps(auVar9,auVar7);
        local_78 = auVar9._0_8_;
      }
      pVVar3 = (Vector3 *)&local_58;
      pVVar2 = (Vector3 *)&local_64;
    }
    else {
      auVar8._0_4_ = (float)local_64 - (float)local_58;
      auVar8._4_4_ = fVar6 - fVar4;
      auVar8._8_8_ = 0;
      fVar6 = local_5c - local_50;
      fVar4 = auVar8._0_4_ * auVar8._0_4_ + auVar8._4_4_ * auVar8._4_4_ + fVar6 * fVar6;
      local_78 = 0;
      local_70 = 0.0;
      if (fVar4 != 0.0) {
        fVar4 = SQRT(fVar4);
        local_70 = fVar6 / fVar4;
        auVar5._4_4_ = fVar4;
        auVar5._0_4_ = fVar4;
        auVar5._8_8_ = _LC4;
        auVar9 = divps(auVar8,auVar5);
        local_78 = auVar9._0_8_;
      }
      pVVar3 = (Vector3 *)&local_64;
      pVVar2 = (Vector3 *)&local_58;
    }
    (*param_5)(pVVar3,0,pVVar2,0,(Vector3 *)&local_78,param_6);
    uVar1 = uVar1 & 0xff;
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GjkEpa2::MinkowskiDiff::get_support_with_margin(GodotShape3D const*, Vector3 const&, float) */

void GjkEpa2::MinkowskiDiff::get_support_with_margin
               (GodotShape3D *param_1,Vector3 *param_2,float param_3)

{
  ulong uVar1;
  long in_FS_OFFSET;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float fVar4;
  float extraout_XMM1_Da;
  undefined8 local_40;
  float local_38;
  float local_28;
  float local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = *(ulong *)param_2;
  local_40._0_4_ = (float)uVar1;
  fVar4 = (float)(uVar1 >> 0x20);
  local_38 = *(float *)(param_2 + 8);
  fVar4 = (float)local_40 * (float)local_40 + fVar4 * fVar4 + local_38 * local_38;
  if (_LC3 <= (double)fVar4) {
    if (fVar4 == 0.0) {
      local_38 = 0.0;
      local_40 = 0;
    }
    else {
      fVar4 = SQRT(fVar4);
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar1;
      local_38 = local_38 / fVar4;
      auVar3._4_4_ = fVar4;
      auVar3._0_4_ = fVar4;
      auVar3._8_4_ = (int)_LC4;
      auVar3._12_4_ = (int)((ulong)_LC4 >> 0x20);
      auVar3 = divps(auVar2,auVar3);
      local_40 = auVar3._0_8_;
    }
  }
  else {
    local_40 = CONCAT44(_UNK_001045dc,_LC1);
    local_38 = _LC1;
  }
  fVar4 = param_3 * local_38;
  (**(code **)(*(long *)param_1 + 0x20))(param_1,&local_40);
  local_18 = fVar4 + extraout_XMM1_Da;
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
  local_28 = extraout_XMM1_Da;
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GjkEpa2::MinkowskiDiff::get_support_without_margin(GodotShape3D const*, Vector3 const&, float) */

void GjkEpa2::MinkowskiDiff::get_support_without_margin
               (GodotShape3D *param_1,Vector3 *param_2,float param_3)

{
  float fVar1;
  ulong uVar2;
  long in_FS_OFFSET;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 local_28;
  float local_20;
  long local_10;
  
  uVar2 = *(ulong *)param_2;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar2;
  fVar1 = *(float *)(param_2 + 8);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  fVar3 = (float)(uVar2 >> 0x20);
  fVar3 = (float)uVar2 * (float)uVar2 + fVar3 * fVar3 + fVar1 * fVar1;
  local_20 = 0.0;
  local_28 = 0;
  if (fVar3 != 0.0) {
    fVar3 = SQRT(fVar3);
    local_20 = fVar1 / fVar3;
    auVar4._4_4_ = fVar3;
    auVar4._0_4_ = fVar3;
    auVar4._8_8_ = _LC4;
    auVar5 = divps(auVar5,auVar4);
    local_28 = auVar5._0_8_;
  }
  (**(code **)(*(long *)param_1 + 0x20))(param_1,&local_28);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* GjkEpa2::EPA::getedgedist(GjkEpa2::EPA::sFace*, GjkEpa2::GJK::sSV*, GjkEpa2::GJK::sSV*, float&)
   [clone .isra.0] */

undefined8 GjkEpa2::EPA::getedgedist(sFace *param_1,sSV *param_2,sSV *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar11 = *(float *)(param_3 + 0x14);
  fVar1 = *(float *)(param_3 + 0x10);
  fVar2 = *(float *)(param_2 + 0x14);
  fVar3 = *(float *)(param_2 + 0x10);
  fVar9 = fVar11 - fVar2;
  fVar10 = fVar1 - fVar3;
  fVar4 = *(float *)(param_3 + 0xc);
  fVar5 = *(float *)(param_2 + 0xc);
  fVar8 = fVar4 - fVar5;
  if (0.0 <= (*(float *)(param_1 + 4) * fVar8 - *(float *)param_1 * fVar10) * fVar2 +
             (fVar10 * *(float *)(param_1 + 8) - fVar9 * *(float *)(param_1 + 4)) * fVar5 +
             (fVar9 * *(float *)param_1 - *(float *)(param_1 + 8) * fVar8) * fVar3) {
    return 0;
  }
  if (fVar5 * fVar8 + fVar3 * fVar10 + fVar2 * fVar9 <= 0.0) {
    fVar6 = fVar1 * fVar1 + fVar4 * fVar4 + fVar11 * fVar11;
    if (fVar4 * fVar8 + fVar1 * fVar10 + fVar11 * fVar9 < 0.0) {
      *param_4 = SQRT(fVar6);
    }
    else {
      fVar11 = fVar4 * fVar5 + fVar1 * fVar3 + fVar11 * fVar2;
      fVar11 = (fVar6 * (fVar2 * fVar2 + fVar5 * fVar5 + fVar3 * fVar3) - fVar11 * fVar11) /
               (fVar9 * fVar9 + fVar8 * fVar8 + fVar10 * fVar10);
      if (fVar11 <= 0.0) {
        fVar11 = 0.0;
      }
      else {
        dVar7 = (double)fVar11;
        if (dVar7 < 0.0) {
          dVar7 = sqrt(dVar7);
          *param_4 = (float)dVar7;
          return 1;
        }
        fVar11 = (float)SQRT(dVar7);
      }
      *param_4 = fVar11;
    }
    return 1;
  }
  *param_4 = SQRT(fVar3 * fVar3 + fVar5 * fVar5 + fVar2 * fVar2);
  return 1;
}



/* GjkEpa2::GJK::EncloseOrigin() */

undefined4 __thiscall GjkEpa2::GJK::EncloseOrigin(GJK *this)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  sSV *psVar6;
  undefined8 uVar7;
  char cVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  long *plVar12;
  ulong uVar13;
  float *pfVar14;
  ulong uVar15;
  long in_FS_OFFSET;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float local_40 [4];
  long local_30;
  
  fVar21 = _LC7;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  plVar12 = *(long **)(this + 0x188);
  uVar11 = *(uint *)(plVar12 + 6);
  uVar13 = (ulong)uVar11;
  if (uVar11 == 3) {
    lVar2 = plVar12[2];
    lVar3 = *plVar12;
    lVar4 = plVar12[1];
    fVar18 = *(float *)(lVar2 + 0x10) - *(float *)(lVar3 + 0x10);
    fVar17 = *(float *)(lVar2 + 0x14) - *(float *)(lVar3 + 0x14);
    fVar22 = *(float *)(lVar4 + 0x10) - *(float *)(lVar3 + 0x10);
    fVar19 = *(float *)(lVar2 + 0xc) - *(float *)(lVar3 + 0xc);
    fVar21 = *(float *)(lVar4 + 0x14) - *(float *)(lVar3 + 0x14);
    fVar16 = *(float *)(lVar4 + 0xc) - *(float *)(lVar3 + 0xc);
    fVar20 = fVar19 * fVar21 - fVar16 * fVar17;
    fVar21 = fVar22 * fVar17 - fVar21 * fVar18;
    fVar19 = fVar16 * fVar18 - fVar22 * fVar19;
    if (0.0 < fVar21 * fVar21 + fVar20 * fVar20 + fVar19 * fVar19) {
      iVar10 = *(int *)(this + 0x180);
      *(undefined4 *)((long)plVar12 + 0x2c) = 0;
      psVar6 = *(sSV **)(this + (ulong)(iVar10 - 1U) * 8 + 0x160);
      *(uint *)(this + 0x180) = iVar10 - 1U;
      *(undefined4 *)(plVar12 + 6) = 4;
      plVar12[3] = (long)psVar6;
      getsupport((Vector3 *)this,psVar6);
      cVar8 = EncloseOrigin(this);
      if (cVar8 == '\0') {
        lVar2 = *(long *)(this + 0x188);
        uVar11 = *(uint *)(this + 0x180);
        iVar10 = *(int *)(lVar2 + 0x30);
        uVar13 = (ulong)(iVar10 - 1);
        psVar6 = *(sSV **)(lVar2 + uVar13 * 8);
        *(sSV **)(this + (ulong)uVar11 * 8 + 0x160) = psVar6;
        *(undefined4 *)(lVar2 + 0x20 + uVar13 * 4) = 0;
        *(uint *)(this + 0x180) = uVar11;
        *(sSV **)(lVar2 + uVar13 * 8) = psVar6;
        *(int *)(lVar2 + 0x30) = iVar10;
        getsupport((Vector3 *)this,psVar6);
        cVar8 = EncloseOrigin(this);
        if (cVar8 == '\0') {
          lVar2 = *(long *)(this + 0x188);
          uVar11 = *(int *)(lVar2 + 0x30) - 1;
          *(uint *)(lVar2 + 0x30) = uVar11;
          uVar7 = *(undefined8 *)(lVar2 + (ulong)uVar11 * 8);
          uVar11 = *(uint *)(this + 0x180);
          *(uint *)(this + 0x180) = uVar11 + 1;
          *(undefined8 *)(this + (ulong)uVar11 * 8 + 0x160) = uVar7;
          uVar9 = 0;
          goto LAB_00101d07;
        }
      }
LAB_00101f4d:
      uVar9 = 1;
      goto LAB_00101d07;
    }
  }
  else if (uVar11 < 4) {
    if (uVar11 == 1) {
      pfVar14 = local_40;
      iVar10 = *(int *)(this + 0x180);
      uVar15 = 1;
      do {
        *(undefined4 *)((long)plVar12 + uVar15 * 4 + 0x20) = 0;
        psVar6 = *(sSV **)(this + (ulong)(iVar10 - 1U) * 8 + 0x160);
        local_40[2] = 0.0;
        local_40[0] = 0.0;
        local_40[1] = 0.0;
        *(uint *)(this + 0x180) = iVar10 - 1U;
        *pfVar14 = fVar21;
        plVar12[uVar15] = (long)psVar6;
        *(int *)(plVar12 + 6) = (int)uVar13 + 1;
        getsupport((Vector3 *)this,psVar6);
        cVar8 = EncloseOrigin(this);
        if (cVar8 != '\0') goto LAB_00101f4d;
        lVar2 = *(long *)(this + 0x188);
        uVar11 = *(uint *)(this + 0x180);
        iVar10 = *(int *)(lVar2 + 0x30);
        uVar13 = (ulong)(iVar10 - 1);
        psVar6 = *(sSV **)(lVar2 + uVar13 * 8);
        *(sSV **)(this + (ulong)uVar11 * 8 + 0x160) = psVar6;
        *(undefined4 *)(lVar2 + 0x20 + uVar13 * 4) = 0;
        *(uint *)(this + 0x180) = uVar11;
        *(sSV **)(lVar2 + uVar13 * 8) = psVar6;
        *(int *)(lVar2 + 0x30) = iVar10;
        getsupport((Vector3 *)this,psVar6);
        cVar8 = EncloseOrigin(this);
        if (cVar8 != '\0') goto LAB_00101f4d;
        plVar12 = *(long **)(this + 0x188);
        uVar1 = *(uint *)(this + 0x180);
        pfVar14 = pfVar14 + 1;
        uVar11 = (int)plVar12[6] - 1;
        uVar13 = (ulong)uVar11;
        iVar10 = uVar1 + 1;
        lVar2 = plVar12[uVar13];
        *(uint *)(plVar12 + 6) = uVar11;
        *(int *)(this + 0x180) = iVar10;
        *(long *)(this + (ulong)uVar1 * 8 + 0x160) = lVar2;
        uVar15 = uVar13;
      } while (pfVar14 != local_40 + 3);
      uVar9 = 0;
      goto LAB_00101d07;
    }
    if (uVar11 == 2) {
      lVar2 = *plVar12;
      lVar3 = plVar12[1];
      pfVar14 = local_40;
      fVar22 = *(float *)(lVar3 + 0x14) - *(float *)(lVar2 + 0x14);
      fVar20 = *(float *)(lVar3 + 0x10) - *(float *)(lVar2 + 0x10);
      fVar19 = *(float *)(lVar3 + 0xc) - *(float *)(lVar2 + 0xc);
      do {
        local_40[2] = 0.0;
        local_40[0] = 0.0;
        local_40[1] = 0.0;
        *pfVar14 = fVar21;
        fVar18 = fVar19 * local_40[1] - fVar20 * local_40[0];
        fVar17 = local_40[0] * fVar22 - fVar19 * local_40[2];
        fVar16 = local_40[2] * fVar20 - local_40[1] * fVar22;
        if (0.0 < fVar16 * fVar16 + fVar17 * fVar17 + fVar18 * fVar18) {
          iVar10 = *(int *)(this + 0x180);
          uVar11 = *(uint *)(plVar12 + 6);
          *(undefined4 *)((long)plVar12 + (ulong)uVar11 * 4 + 0x20) = 0;
          psVar6 = *(sSV **)(this + (ulong)(iVar10 - 1U) * 8 + 0x160);
          *(uint *)(this + 0x180) = iVar10 - 1U;
          plVar12[uVar11] = (long)psVar6;
          *(uint *)(plVar12 + 6) = uVar11 + 1;
          getsupport((Vector3 *)this,psVar6);
          cVar8 = EncloseOrigin(this);
          if (cVar8 != '\0') goto LAB_00101f4d;
          lVar2 = *(long *)(this + 0x188);
          uVar11 = *(uint *)(this + 0x180);
          iVar10 = *(int *)(lVar2 + 0x30);
          uVar13 = (ulong)(iVar10 - 1);
          psVar6 = *(sSV **)(lVar2 + uVar13 * 8);
          *(sSV **)(this + (ulong)uVar11 * 8 + 0x160) = psVar6;
          *(undefined4 *)(lVar2 + 0x20 + uVar13 * 4) = 0;
          *(uint *)(this + 0x180) = uVar11;
          *(sSV **)(lVar2 + uVar13 * 8) = psVar6;
          *(int *)(lVar2 + 0x30) = iVar10;
          getsupport((Vector3 *)this,psVar6);
          cVar8 = EncloseOrigin(this);
          if (cVar8 != '\0') goto LAB_00101f4d;
          plVar12 = *(long **)(this + 0x188);
          uVar11 = (int)plVar12[6] - 1;
          *(uint *)(plVar12 + 6) = uVar11;
          lVar2 = plVar12[uVar11];
          uVar11 = *(uint *)(this + 0x180);
          *(uint *)(this + 0x180) = uVar11 + 1;
          *(long *)(this + (ulong)uVar11 * 8 + 0x160) = lVar2;
        }
        pfVar14 = pfVar14 + 1;
      } while (pfVar14 != local_40 + 3);
    }
  }
  else if (uVar11 == 4) {
    lVar2 = plVar12[2];
    lVar3 = plVar12[3];
    lVar4 = plVar12[1];
    lVar5 = *plVar12;
    fVar21 = *(float *)(lVar3 + 0x14);
    fVar19 = *(float *)(lVar3 + 0x10);
    fVar18 = *(float *)(lVar2 + 0x14) - fVar21;
    fVar20 = *(float *)(lVar3 + 0xc);
    fVar22 = *(float *)(lVar4 + 0x14) - fVar21;
    fVar24 = *(float *)(lVar2 + 0x10) - fVar19;
    fVar16 = *(float *)(lVar2 + 0xc) - fVar20;
    fVar21 = *(float *)(lVar5 + 0x14) - fVar21;
    fVar17 = *(float *)(lVar4 + 0x10) - fVar19;
    fVar23 = *(float *)(lVar4 + 0xc) - fVar20;
    fVar19 = *(float *)(lVar5 + 0x10) - fVar19;
    fVar20 = *(float *)(lVar5 + 0xc) - fVar20;
    fVar21 = ABS(((((fVar21 * fVar23 * fVar24 + fVar19 * fVar22 * fVar16) - fVar22 * fVar20 * fVar24
                   ) - fVar19 * fVar23 * fVar18) + fVar20 * fVar17 * fVar18) -
                 fVar21 * fVar17 * fVar16);
    uVar9 = CONCAT31((int3)((uint)fVar21 >> 8),0.0 < fVar21);
    goto LAB_00101d07;
  }
  uVar9 = 0;
LAB_00101d07:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GjkEpa2::GJK::projectorigin(Vector3 const&, Vector3 const&, Vector3 const&, float*, unsigned
   int&) */

float GjkEpa2::GJK::projectorigin
                (Vector3 *param_1,Vector3 *param_2,Vector3 *param_3,float *param_4,uint *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  uint uVar5;
  Vector3 *pVVar6;
  byte bVar7;
  bool bVar8;
  bool bVar9;
  float *pfVar10;
  uint uVar11;
  long lVar12;
  long in_FS_OFFSET;
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
  Vector3 *local_88 [4];
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float local_48;
  long local_40;
  
  fVar14 = *(float *)(param_1 + 8);
  fVar18 = *(float *)(param_1 + 4);
  fVar17 = *(float *)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pfVar10 = (float *)0x0;
  fStack_60 = fVar14 - *(float *)(param_2 + 8);
  fStack_54 = *(float *)(param_2 + 8) - *(float *)(param_3 + 8);
  fStack_64 = fVar18 - *(float *)(param_2 + 4);
  local_48 = *(float *)(param_3 + 8) - fVar14;
  local_88[0] = param_1;
  local_68 = fVar17 - *(float *)param_2;
  local_88[1] = param_2;
  local_58 = *(float *)(param_2 + 4) - *(float *)(param_3 + 4);
  fStack_4c = *(float *)(param_3 + 4) - fVar18;
  local_88[2] = param_3;
  fStack_5c = *(float *)param_2 - *(float *)param_3;
  fStack_50 = *(float *)param_3 - fVar17;
  fVar23 = fStack_5c * fStack_60 - local_68 * fStack_54;
  fVar24 = local_58 * local_68 - fStack_5c * fStack_64;
  fVar13 = fStack_64 * fStack_54 - fStack_60 * local_58;
  fVar19 = fVar24 * fVar24 + fVar23 * fVar23 + fVar13 * fVar13;
  fVar21 = 0.0;
  fVar25 = _LC8;
  if (0.0 < fVar19) {
    lVar12 = 0;
    bVar9 = false;
    bVar8 = false;
    pfVar10 = &local_68;
    fVar16 = 0.0;
    do {
      if (0.0 < (*pfVar10 * fVar23 - pfVar10[1] * fVar13) * fVar14 +
                (pfVar10[2] * fVar13 - fVar24 * *pfVar10) * fVar18 +
                (fVar24 * pfVar10[1] - fVar23 * pfVar10[2]) * fVar17) {
        uVar4 = (&projectorigin(Vector3_const&,Vector3_const&,Vector3_const&,float*,unsigned_int&)::
                  imd3)[lVar12];
        bVar7 = (byte)lVar12;
        pVVar6 = local_88[uVar4];
        fVar1 = *(float *)pVVar6;
        fVar2 = *(float *)(pVVar6 + 4);
        fVar3 = *(float *)(pVVar6 + 8);
        fVar22 = fVar2 - fVar18;
        fVar26 = fVar1 - fVar17;
        fVar20 = fVar3 - fVar14;
        fVar15 = fVar22 * fVar22 + fVar26 * fVar26 + fVar20 * fVar20;
        if (fVar15 <= 0.0) {
          if ((fVar25 < 0.0) || (_LC8 < fVar25)) {
            uVar11 = 1 << (bVar7 & 0x1f);
            if (!bVar8) {
              uVar11 = 0;
            }
            fVar25 = _LC8;
            fVar14 = _LC8;
            if (bVar9) goto LAB_0010271a;
LAB_00102685:
            uVar5 = (&projectorigin(Vector3_const&,Vector3_const&,Vector3_const&,float*,unsigned_int&)
                      ::imd3)[uVar4];
            *param_5 = uVar11;
            param_4[lVar12] = fVar21;
            param_4[uVar4] = fVar16;
            param_4[uVar5] = 0.0;
          }
        }
        else {
          fVar16 = (float)((uint)(fVar26 * fVar17 + fVar22 * fVar18 + fVar20 * fVar14) ^ _LC6) /
                   fVar15;
          if (fVar16 < _LC7) {
            if (0.0 < fVar16) {
              fVar21 = _LC7 - fVar16;
              fVar18 = fVar22 * fVar16 + fVar18;
              fVar14 = fVar20 * fVar16 + fVar14;
              fVar17 = fVar26 * fVar16 + fVar17;
              fVar14 = fVar17 * fVar17 + fVar18 * fVar18 + fVar14 * fVar14;
              if (0.0 <= fVar25) {
                bVar9 = true;
                bVar8 = true;
                if (fVar25 <= fVar14) goto LAB_00102386;
              }
              bVar9 = true;
              bVar8 = true;
              uVar11 = 1 << (bVar7 & 0x1f);
              goto LAB_0010271a;
            }
            fVar14 = fVar14 * fVar14 + fVar17 * fVar17 + fVar18 * fVar18;
            fVar21 = _LC7;
            if ((fVar25 < 0.0) || (fVar14 < fVar25)) {
              fVar16 = 0.0;
              bVar9 = false;
              bVar8 = true;
              uVar11 = 1 << (bVar7 & 0x1f);
              fVar25 = fVar14;
              goto LAB_00102685;
            }
            fVar16 = 0.0;
            bVar9 = false;
            bVar8 = true;
          }
          else {
            fVar14 = fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2;
            fVar16 = _LC7;
            if ((fVar25 < 0.0) || (fVar14 < fVar25)) {
              bVar9 = true;
              bVar8 = false;
              uVar11 = 0;
              fVar21 = 0.0;
LAB_0010271a:
              uVar11 = uVar11 + (1 << ((byte)uVar4 & 0x1f));
              fVar25 = fVar14;
              goto LAB_00102685;
            }
            bVar9 = true;
            bVar8 = false;
            fVar21 = 0.0;
          }
        }
      }
LAB_00102386:
      lVar12 = lVar12 + 1;
      pfVar10 = pfVar10 + 3;
      if (lVar12 == 3) goto LAB_001024b0;
      pVVar6 = local_88[lVar12];
      fVar17 = *(float *)pVVar6;
      fVar18 = *(float *)(pVVar6 + 4);
      fVar14 = *(float *)(pVVar6 + 8);
    } while( true );
  }
LAB_001022a9:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_1,param_2,pfVar10);
  }
  return fVar25;
LAB_001024b0:
  if (fVar25 < 0.0) {
    fVar14 = *(float *)param_1;
    fVar17 = *(float *)(param_1 + 4);
    fVar18 = *(float *)(param_2 + 8);
    fVar21 = *(float *)param_2;
    fVar25 = *(float *)(param_1 + 8);
    *param_5 = 7;
    fVar16 = (fVar14 * fVar13 + fVar17 * fVar23 + fVar25 * fVar24) / fVar19;
    fVar23 = fVar23 * fVar16;
    fVar24 = fVar24 * fVar16;
    fVar16 = fVar16 * fVar13;
    fVar13 = local_58 * (fVar18 - fVar24) - fStack_54 * (*(float *)(param_2 + 4) - fVar23);
    fVar25 = fVar16 * fVar16 + fVar23 * fVar23 + fVar24 * fVar24;
    fVar17 = (fVar21 - fVar16) * fStack_54 - fStack_5c * (fVar18 - fVar24);
    fVar14 = fStack_5c * (*(float *)(param_2 + 4) - fVar23) - local_58 * (fVar21 - fVar16);
    fVar17 = SQRT(fVar14 * fVar14 + fVar13 * fVar13 + fVar17 * fVar17) / SQRT(fVar19);
    *param_4 = fVar17;
    fVar14 = _LC7;
    fVar18 = (*(float *)param_3 - fVar16) * local_48 -
             fStack_50 * (*(float *)(param_3 + 8) - fVar24);
    fVar13 = fStack_4c * (*(float *)(param_3 + 8) - fVar24) -
             local_48 * (*(float *)(param_3 + 4) - fVar23);
    fVar21 = fStack_50 * (*(float *)(param_3 + 4) - fVar23) -
             fStack_4c * (*(float *)param_3 - fVar16);
    fVar18 = SQRT(fVar13 * fVar13 + fVar18 * fVar18 + fVar21 * fVar21) / SQRT(fVar19);
    param_4[1] = fVar18;
    param_4[2] = fVar14 - (fVar17 + fVar18);
  }
  goto LAB_001022a9;
}



/* GjkEpa2::GJK::projectorigin(Vector3 const&, Vector3 const&, Vector3 const&, Vector3 const&,
   float*, unsigned int&) */

void GjkEpa2::GJK::projectorigin
               (Vector3 *param_1,Vector3 *param_2,Vector3 *param_3,Vector3 *param_4,float *param_5,
               uint *param_6)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  float *pfVar5;
  int iVar6;
  long lVar7;
  long in_FS_OFFSET;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  uint local_9c;
  undefined8 local_98;
  float local_90;
  Vector3 *local_88 [4];
  float local_68 [4];
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float local_48;
  long local_40;
  
  fVar8 = *(float *)param_4;
  fVar13 = *(float *)(param_4 + 8);
  fVar11 = *(float *)param_2;
  fVar14 = *(float *)(param_4 + 4);
  fVar1 = *(float *)(param_2 + 4);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_88[0] = param_1;
  local_88[1] = param_2;
  local_88[2] = param_3;
  local_48 = *(float *)(param_3 + 8) - fVar13;
  local_68[0] = *(float *)param_1 - (float)*(undefined8 *)param_4;
  local_68[1] = (float)((ulong)*(undefined8 *)param_1 >> 0x20) -
                (float)((ulong)*(undefined8 *)param_4 >> 0x20);
  local_68[2] = *(float *)(param_1 + 8) - fVar13;
  fVar9 = fVar11 - fVar8;
  local_88[3] = param_4;
  local_68[3] = fVar9;
  fVar10 = fVar1 - fVar14;
  fVar12 = *(float *)(param_2 + 8) - fVar13;
  fStack_50 = *(float *)param_3 - fVar8;
  fStack_4c = *(float *)(param_3 + 4) - fVar14;
  local_58 = fVar10;
  fStack_54 = fVar12;
  fVar15 = (local_68[0] * fVar10 * local_48 +
           (((fVar12 * local_68[1] * fStack_50 + fVar9 * local_68[2] * fStack_4c) -
            fVar12 * local_68[0] * fStack_4c) - local_68[1] * fVar9 * local_48)) -
           local_68[2] * fVar10 * fStack_50;
  if (((((*(float *)(param_1 + 8) - *(float *)(param_2 + 8)) * (fVar1 - *(float *)(param_3 + 4)) -
        (*(float *)(param_2 + 8) - *(float *)(param_3 + 8)) * (*(float *)(param_1 + 4) - fVar1)) *
        *(float *)param_1 +
        ((*(float *)(param_2 + 8) - *(float *)(param_3 + 8)) * (*(float *)param_1 - fVar11) -
        (fVar11 - *(float *)param_3) * (*(float *)(param_1 + 8) - *(float *)(param_2 + 8))) *
        *(float *)(param_1 + 4) +
       ((fVar11 - *(float *)param_3) * (*(float *)(param_1 + 4) - fVar1) -
       (fVar1 - *(float *)(param_3 + 4)) * (*(float *)param_1 - fVar11)) * *(float *)(param_1 + 8))
       * fVar15 <= 0.0) && (0.0 < ABS(fVar15))) {
    pfVar5 = local_68;
    lVar7 = 0;
    local_98 = 0;
    local_9c = 0;
    local_90 = 0.0;
    fVar11 = _LC8;
    while( true ) {
      if (0.0 < ((pfVar5[1] * fVar12 - pfVar5[2] * fVar10) * fVar8 +
                 (pfVar5[2] * fVar9 - fVar12 * *pfVar5) * fVar14 +
                (*pfVar5 * fVar10 - pfVar5[1] * fVar9) * fVar13) * fVar15) {
        uVar2 = (&projectorigin(Vector3_const&,Vector3_const&,Vector3_const&,Vector3_const&,float*,unsigned_int&)
                  ::imd3)[lVar7];
        fVar8 = (float)projectorigin(local_88[lVar7],local_88[uVar2],param_4,(float *)&local_98,
                                     &local_9c);
        if ((fVar11 < 0.0) || (fVar8 < fVar11)) {
          iVar6 = 0;
          if ((local_9c & 1) != 0) {
            iVar6 = 1 << ((byte)lVar7 & 0x1f);
          }
          if ((local_9c & 2) != 0) {
            iVar6 = iVar6 + (1 << ((byte)uVar2 & 0x1f));
          }
          uVar3 = (&projectorigin(Vector3_const&,Vector3_const&,Vector3_const&,Vector3_const&,float*,unsigned_int&)
                    ::imd3)[uVar2];
          *param_6 = (local_9c * 2 & 8) + iVar6;
          param_5[lVar7] = (float)local_98;
          param_5[uVar2] = local_98._4_4_;
          param_5[uVar3] = 0.0;
          param_5[3] = local_90;
          fVar11 = fVar8;
        }
      }
      if (lVar7 == 2) break;
      lVar7 = lVar7 + 1;
      pfVar5 = pfVar5 + 3;
      uVar4 = (ulong)(uint)(&projectorigin(Vector3_const&,Vector3_const&,Vector3_const&,Vector3_const&,float*,unsigned_int&)
                             ::imd3)[lVar7];
      fVar8 = *(float *)param_4;
      fVar14 = *(float *)(param_4 + 4);
      fVar13 = *(float *)(param_4 + 8);
      fVar12 = local_68[uVar4 * 3 + 2];
      fVar10 = local_68[uVar4 * 3 + 1];
      fVar9 = local_68[uVar4 * 3];
    }
    if (fVar11 < 0.0) {
      fVar8 = *(float *)(param_3 + 4);
      fVar13 = *(float *)(param_3 + 8);
      *param_6 = 0xf;
      fVar8 = (((((fVar13 * *(float *)param_2 * *(float *)(param_4 + 4) +
                  fVar8 * *(float *)(param_2 + 8) * *(float *)param_4) -
                 *(float *)(param_2 + 8) * *(float *)param_3 * *(float *)(param_4 + 4)) -
                fVar8 * *(float *)param_2 * *(float *)(param_4 + 8)) +
               *(float *)param_3 * *(float *)(param_2 + 4) * *(float *)(param_4 + 8)) -
              fVar13 * *(float *)(param_2 + 4) * *(float *)param_4) / fVar15;
      *param_5 = fVar8;
      fVar13 = (((((*(float *)(param_1 + 8) * *(float *)param_3 * *(float *)(param_4 + 4) +
                   *(float *)(param_1 + 4) * *(float *)(param_3 + 8) * *(float *)param_4) -
                  *(float *)(param_3 + 8) * *(float *)param_1 * *(float *)(param_4 + 4)) -
                 *(float *)(param_1 + 4) * *(float *)param_3 * *(float *)(param_4 + 8)) +
                *(float *)param_1 * *(float *)(param_3 + 4) * *(float *)(param_4 + 8)) -
               *(float *)(param_1 + 8) * *(float *)(param_3 + 4) * *(float *)param_4) / fVar15;
      param_5[1] = fVar13;
      fVar15 = (((((*(float *)(param_2 + 8) * *(float *)param_1 * *(float *)(param_4 + 4) +
                   *(float *)(param_2 + 4) * *(float *)(param_1 + 8) * *(float *)param_4) -
                  *(float *)(param_1 + 8) * *(float *)param_2 * *(float *)(param_4 + 4)) -
                 *(float *)(param_2 + 4) * *(float *)param_1 * *(float *)(param_4 + 8)) +
                *(float *)param_2 * *(float *)(param_1 + 4) * *(float *)(param_4 + 8)) -
               *(float *)(param_2 + 8) * *(float *)(param_1 + 4) * *(float *)param_4) / fVar15;
      param_5[2] = fVar15;
      param_5[3] = _LC7 - (fVar8 + fVar13 + fVar15);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GjkEpa2::GJK::Evaluate(GjkEpa2::MinkowskiDiff const&, Vector3 const&) */

int __thiscall GjkEpa2::GJK::Evaluate(GJK *this,MinkowskiDiff *param_1,Vector3 *param_2)

{
  sSV *psVar1;
  float fVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  float fVar10;
  uint uVar11;
  int iVar12;
  float *pfVar13;
  GJK *pGVar14;
  ulong uVar15;
  uint uVar16;
  ulong uVar17;
  uint uVar18;
  ulong uVar19;
  long in_FS_OFFSET;
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
  float local_ac;
  int local_a8;
  float local_a0;
  uint local_8c;
  undefined8 local_88;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  float local_48 [2];
  long local_40;
  
  uVar9 = *(undefined8 *)param_1;
  uVar3 = *(undefined8 *)(param_1 + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)(this + 0x184) = 0;
  *(undefined8 *)this = uVar9;
  *(undefined8 *)(this + 8) = uVar3;
  uVar9 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  *(GJK **)(this + 0x160) = this + 0x100;
  *(undefined8 *)(this + 0x10) = uVar9;
  *(undefined8 *)(this + 0x18) = uVar3;
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  *(GJK **)(this + 0x168) = this + 0x118;
  *(undefined8 *)(this + 0x20) = uVar9;
  *(undefined8 *)(this + 0x28) = uVar3;
  uVar9 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  *(GJK **)(this + 0x170) = this + 0x130;
  psVar1 = (sSV *)(this + 0x148);
  *(undefined8 *)(this + 0x30) = uVar9;
  *(undefined8 *)(this + 0x38) = uVar3;
  uVar9 = *(undefined8 *)(param_1 + 0x40);
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  *(sSV **)(this + 0x178) = psVar1;
  *(undefined4 *)(this + 400) = 0;
  *(undefined8 *)(this + 0x40) = uVar9;
  *(undefined8 *)(this + 0x48) = uVar3;
  uVar9 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(this + 0x50) = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(this + 0x58) = uVar9;
  uVar9 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(this + 0x60) = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(this + 0x68) = uVar9;
  uVar9 = *(undefined8 *)(param_1 + 0x70);
  uVar3 = *(undefined8 *)(param_1 + 0x78);
  *(undefined4 *)(this + 0x8c) = 0;
  *(undefined8 *)(this + 0x70) = uVar9;
  *(undefined8 *)(this + 0x78) = uVar3;
  *(undefined8 *)(this + 0x80) = *(undefined8 *)param_2;
  *(undefined4 *)(this + 0x88) = *(undefined4 *)(param_2 + 8);
  fVar10 = _LC7;
  local_a0 = *(float *)(this + 0x84) * *(float *)(this + 0x84) +
             *(float *)(this + 0x80) * *(float *)(this + 0x80) +
             *(float *)(this + 0x88) * *(float *)(this + 0x88);
  *(sSV **)(this + 0x90) = psVar1;
  uVar11 = 0;
  *(undefined4 *)(this + 0xb0) = 0;
  *(undefined4 *)(this + 0x180) = 3;
  *(undefined4 *)(this + 0xc0) = 1;
  getsupport((Vector3 *)this,psVar1);
  local_a8 = 0;
  uVar18 = *(uint *)(this + 0x184);
  local_78 = *(undefined8 *)(*(long *)(this + 0x90) + 0xc);
  local_70 = *(undefined4 *)(*(long *)(this + 0x90) + 0x14);
  *(float *)(this + 0xb0) = fVar10;
  fVar28 = _LC11;
  local_ac = 0.0;
  *(undefined8 *)(this + 0x80) = local_78;
  *(undefined4 *)(this + 0x88) = local_70;
  local_6c = local_78;
  local_64 = local_70;
  local_60 = local_78;
  local_58 = local_70;
  local_54 = local_78;
  local_4c = local_70;
  do {
    uVar17 = (ulong)uVar18;
    uVar18 = 1 - uVar18;
    fVar26 = SQRT(*(float *)(this + 0x80) * *(float *)(this + 0x80) +
                  *(float *)(this + 0x84) * *(float *)(this + 0x84) +
                  *(float *)(this + 0x88) * *(float *)(this + 0x88));
    if (fVar26 < fVar28) {
      *(undefined4 *)(this + 400) = 1;
LAB_00103712:
      *(GJK **)(this + 0x188) = this + uVar17 * 0x38 + 0x90;
      iVar12 = 1;
      *(undefined4 *)(this + 0x8c) = 0;
      goto LAB_001034f6;
    }
    uVar4 = *(uint *)(this + uVar17 * 0x38 + 0xc0);
    *(undefined4 *)(this + ((ulong)uVar4 + 0x2c + uVar17 * 0xe) * 4) = 0;
    psVar1 = *(sSV **)(this + (ulong)(*(int *)(this + 0x180) - 1U) * 8 + 0x160);
    *(uint *)(this + 0x180) = *(int *)(this + 0x180) - 1U;
    *(sSV **)(this + (uVar17 * 7 + 0x12 + (ulong)uVar4) * 8) = psVar1;
    *(uint *)(this + uVar17 * 0x38 + 0xc0) = uVar4 + 1;
    getsupport((Vector3 *)this,psVar1);
    fVar28 = _LC11;
    iVar12 = *(int *)(this + uVar17 * 0x38 + 0xc0);
    lVar7 = *(long *)(this + (uVar17 * 7 + 0x12 + (ulong)(iVar12 - 1)) * 8);
    pfVar13 = (float *)&local_78;
    fVar24 = *(float *)(lVar7 + 0x14);
    fVar2 = *(float *)(lVar7 + 0x10);
    fVar30 = *(float *)(lVar7 + 0xc);
    do {
      fVar22 = fVar2 - pfVar13[1];
      fVar20 = fVar30 - *pfVar13;
      fVar21 = fVar24 - pfVar13[2];
      if (fVar20 * fVar20 + fVar22 * fVar22 + fVar21 * fVar21 < _LC11) goto LAB_00103578;
      pfVar13 = pfVar13 + 3;
    } while (local_48 != pfVar13);
    fVar20 = *(float *)(this + 0x80);
    uVar11 = uVar11 + 1 & 3;
    uVar5 = *(undefined4 *)(lVar7 + 0x14);
    fVar21 = *(float *)(this + 0x84);
    fVar22 = *(float *)(this + 0x88);
    *(undefined8 *)((long)&local_78 + (ulong)uVar11 * 0xc) = *(undefined8 *)(lVar7 + 0xc);
    (&local_70)[(ulong)uVar11 * 3] = uVar5;
    fVar24 = (fVar30 * fVar20 + fVar2 * fVar21 + fVar24 * fVar22) / fVar26;
    if (fVar24 <= local_ac) {
      fVar24 = local_ac;
    }
    if ((fVar26 - fVar24) - fVar26 * _LC11 <= 0.0) {
LAB_00103578:
      uVar17 = (ulong)*(uint *)(this + 0x184);
      iVar12 = *(int *)(this + uVar17 * 0x38 + 0xc0);
      *(uint *)(this + uVar17 * 0x38 + 0xc0) = iVar12 - 1U;
      uVar9 = *(undefined8 *)(this + (uVar17 * 7 + 0x12 + (ulong)(iVar12 - 1U)) * 8);
      uVar18 = *(uint *)(this + 0x180);
      *(uint *)(this + 0x180) = uVar18 + 1;
      *(undefined8 *)(this + (ulong)uVar18 * 8 + 0x160) = uVar9;
      iVar12 = *(int *)(this + 400);
      *(GJK **)(this + 0x188) = this + uVar17 * 0x38 + 0x90;
      if (iVar12 != 0) goto LAB_001035e4;
      *(float *)(this + 0x8c) =
           SQRT(*(float *)(this + 0x80) * *(float *)(this + 0x80) +
                *(float *)(this + 0x84) * *(float *)(this + 0x84) +
                *(float *)(this + 0x88) * *(float *)(this + 0x88));
      goto LAB_001034f6;
    }
    local_8c = 0;
    if (iVar12 == 3) {
      local_a0 = (float)projectorigin((Vector3 *)(*(long *)(this + uVar17 * 0x38 + 0x90) + 0xc),
                                      (Vector3 *)(*(long *)(this + uVar17 * 0x38 + 0x98) + 0xc),
                                      (Vector3 *)(*(long *)(this + uVar17 * 0x38 + 0xa0) + 0xc),
                                      (float *)&local_88,&local_8c);
LAB_00103440:
      fVar28 = _LC11;
      if (local_a0 < 0.0) goto LAB_00103578;
      *(undefined4 *)(this + (ulong)uVar18 * 0x38 + 0xc0) = 0;
      *(uint *)(this + 0x184) = uVar18;
      uVar4 = *(uint *)(this + uVar17 * 0x38 + 0xc0);
      *(undefined4 *)(this + 0x88) = 0;
      *(undefined8 *)(this + 0x80) = 0;
      uVar16 = local_8c;
      if (uVar4 != 0) {
LAB_001032c8:
        uVar19 = (ulong)uVar18;
        uVar15 = 0;
        pGVar14 = this + uVar17 * 0x38;
        do {
          uVar9 = *(undefined8 *)(pGVar14 + 0x90);
          if ((1 << ((byte)uVar15 & 0x1f) & uVar16) == 0) {
            uVar6 = *(uint *)(this + 0x180);
            *(uint *)(this + 0x180) = uVar6 + 1;
            *(undefined8 *)(this + (ulong)uVar6 * 8 + 0x160) = uVar9;
          }
          else {
            uVar6 = *(uint *)(this + uVar19 * 0x38 + 0xc0);
            fVar26 = *(float *)((long)&local_88 + uVar15 * 4);
            *(undefined8 *)(this + ((ulong)uVar6 + 0x12 + uVar19 * 7) * 8) = uVar9;
            *(uint *)(this + uVar19 * 0x38 + 0xc0) = uVar6 + 1;
            *(float *)(this + ((ulong)uVar6 + 0x2c + uVar19 * 0xe) * 4) = fVar26;
            fVar2 = *(float *)(*(long *)(pGVar14 + 0x90) + 0x14);
            uVar9 = *(undefined8 *)(*(long *)(pGVar14 + 0x90) + 0xc);
            uVar3 = *(undefined8 *)(this + 0x80);
            *(float *)(this + 0x80) = (float)uVar3 + (float)uVar9 * fVar26;
            *(float *)(this + 0x84) =
                 (float)((ulong)uVar3 >> 0x20) + (float)((ulong)uVar9 >> 0x20) * fVar26;
            *(float *)(this + 0x88) = fVar2 * fVar26 + *(float *)(this + 0x88);
          }
          uVar15 = uVar15 + 1;
          pGVar14 = pGVar14 + 8;
        } while (uVar15 != uVar4);
      }
      if (uVar16 != 0xf) goto LAB_00103399;
      uVar17 = (ulong)uVar18;
      *(undefined4 *)(this + 400) = 1;
      if (local_a8 != 0x7f) goto LAB_00103712;
LAB_001034cd:
      *(undefined4 *)(this + 400) = 2;
      *(GJK **)(this + 0x188) = this + (ulong)uVar18 * 0x38 + 0x90;
      iVar12 = 2;
      goto LAB_001034f6;
    }
    if (iVar12 == 4) {
      local_a0 = (float)projectorigin((Vector3 *)(*(long *)(this + uVar17 * 0x38 + 0x90) + 0xc),
                                      (Vector3 *)(*(long *)(this + uVar17 * 0x38 + 0x98) + 0xc),
                                      (Vector3 *)(*(long *)(this + uVar17 * 0x38 + 0xa0) + 0xc),
                                      (Vector3 *)(*(long *)(this + uVar17 * 0x38 + 0xa8) + 0xc),
                                      (float *)&local_88,&local_8c);
      goto LAB_00103440;
    }
    if (iVar12 != 2) goto LAB_00103440;
    lVar7 = *(long *)(this + uVar17 * 0x38 + 0x98);
    lVar8 = *(long *)(this + uVar17 * 0x38 + 0x90);
    fVar26 = *(float *)(lVar7 + 0x10);
    fVar2 = *(float *)(lVar7 + 0xc);
    fVar30 = *(float *)(lVar8 + 0x10);
    fVar20 = *(float *)(lVar8 + 0xc);
    fVar21 = *(float *)(lVar7 + 0x14);
    fVar22 = *(float *)(lVar8 + 0x14);
    fVar29 = fVar26 - fVar30;
    fVar25 = fVar2 - fVar20;
    fVar27 = fVar21 - fVar22;
    fVar23 = fVar25 * fVar25 + fVar29 * fVar29 + fVar27 * fVar27;
    if (fVar23 <= 0.0) goto LAB_00103578;
    fVar23 = (float)((uint)(fVar20 * fVar25 + fVar30 * fVar29 + fVar22 * fVar27) ^ _LC6) / fVar23;
    if (fVar23 < fVar10) {
      if (0.0 < fVar23) {
        local_8c = 3;
        fVar30 = fVar29 * fVar23 + fVar30;
        fVar20 = fVar25 * fVar23 + fVar20;
        local_88 = CONCAT44(fVar23,fVar10 - fVar23);
        fVar22 = fVar27 * fVar23 + fVar22;
        local_a0 = fVar20 * fVar20 + fVar30 * fVar30 + fVar22 * fVar22;
        goto LAB_00103440;
      }
      local_88 = CONCAT44(_UNK_00104614,_LC7);
      local_8c = 1;
      uVar16 = 1;
      local_a0 = fVar20 * fVar20 + fVar30 * fVar30 + fVar22 * fVar22;
    }
    else {
      local_8c = 2;
      local_a0 = fVar2 * fVar2 + fVar26 * fVar26 + fVar21 * fVar21;
      uVar16 = 2;
      local_88 = _LC10;
    }
    *(undefined4 *)(this + (ulong)uVar18 * 0x38 + 0xc0) = 0;
    *(uint *)(this + 0x184) = uVar18;
    uVar4 = *(uint *)(this + uVar17 * 0x38 + 0xc0);
    *(undefined8 *)(this + 0x80) = 0;
    *(undefined4 *)(this + 0x88) = 0;
    if (uVar4 != 0) goto LAB_001032c8;
LAB_00103399:
    local_a8 = local_a8 + 1;
    if (local_a8 == 0x80) goto LAB_001034cd;
    iVar12 = *(int *)(this + 400);
    local_ac = fVar24;
    if (iVar12 != 0) {
      *(GJK **)(this + 0x188) = this + (ulong)uVar18 * 0x38 + 0x90;
LAB_001035e4:
      if (iVar12 == 1) {
        *(undefined4 *)(this + 0x8c) = 0;
        iVar12 = 1;
      }
LAB_001034f6:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return iVar12;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GjkEpa2::EPA::newface(GjkEpa2::GJK::sSV*, GjkEpa2::GJK::sSV*, GjkEpa2::GJK::sSV*, bool) */

sFace * __thiscall
GjkEpa2::EPA::newface(EPA *this,sSV *param_1,sSV *param_2,sSV *param_3,bool param_4)

{
  sFace *psVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  sFace *psVar4;
  long lVar5;
  undefined1 auVar6 [16];
  char cVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar15;
  undefined1 auVar14 [16];
  float fVar16;
  float fVar17;
  
  psVar4 = *(sFace **)(this + 0x6468);
  if (psVar4 == (sFace *)0x0) {
    *(undefined4 *)this = 5;
  }
  else {
    if (*(long *)(psVar4 + 0x48) != 0) {
      *(undefined8 *)(*(long *)(psVar4 + 0x48) + 0x40) = *(undefined8 *)(psVar4 + 0x40);
    }
    if (*(long *)(psVar4 + 0x40) != 0) {
      *(undefined8 *)(*(long *)(psVar4 + 0x40) + 0x48) = *(undefined8 *)(psVar4 + 0x48);
    }
    if (psVar4 == *(sFace **)(this + 0x6468)) {
      *(undefined8 *)(this + 0x6468) = *(undefined8 *)(psVar4 + 0x48);
    }
    *(int *)(this + 0x6470) = *(int *)(this + 0x6470) + -1;
    *(undefined8 *)(psVar4 + 0x40) = 0;
    lVar5 = *(long *)(this + 0x6458);
    *(long *)(psVar4 + 0x48) = lVar5;
    if (lVar5 != 0) {
      *(sFace **)(lVar5 + 0x40) = psVar4;
    }
    *(int *)(this + 0x6460) = *(int *)(this + 0x6460) + 1;
    *(sFace **)(this + 0x6458) = psVar4;
    psVar4[0x53] = (sFace)0x0;
    fVar9 = *(float *)(param_1 + 0xc);
    fVar12 = *(float *)(param_1 + 0x14);
    fVar13 = *(float *)(param_3 + 0x14);
    *(sSV **)(psVar4 + 0x10) = param_1;
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    uVar3 = *(undefined8 *)(param_3 + 0x10);
    *(sSV **)(psVar4 + 0x18) = param_2;
    fVar16 = *(float *)(param_3 + 0xc);
    fVar10 = *(float *)(param_2 + 0xc);
    *(sSV **)(psVar4 + 0x20) = param_3;
    fVar11 = (float)uVar2;
    fVar17 = (float)uVar3 - fVar11;
    fVar15 = (float)((ulong)uVar2 >> 0x20);
    fVar16 = fVar16 - fVar9;
    fVar11 = (float)*(undefined8 *)(param_2 + 0x10) - fVar11;
    fVar10 = fVar10 - fVar9;
    fVar13 = fVar11 * (fVar13 - fVar12) - (*(float *)(param_2 + 0x14) - fVar12) * fVar17;
    fVar15 = ((float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20) - fVar15) * fVar16 -
             fVar10 * ((float)((ulong)uVar3 >> 0x20) - fVar15);
    auVar14._0_8_ = CONCAT44(fVar15,fVar13);
    fVar9 = fVar10 * fVar17 - fVar11 * fVar16;
    *(ulong *)psVar4 = auVar14._0_8_;
    *(float *)(psVar4 + 8) = fVar9;
    fVar12 = SQRT(fVar13 * fVar13 + fVar15 * fVar15 + fVar9 * fVar9);
    if (fVar12 <= __LC12) {
      uVar8 = 2;
    }
    else {
      psVar1 = psVar4 + 0xc;
      cVar7 = getedgedist(psVar4,param_1,param_2,(float *)psVar1);
      if (((cVar7 == '\0') &&
          (cVar7 = getedgedist(psVar4,param_2,param_3,(float *)psVar1), cVar7 == '\0')) &&
         (cVar7 = getedgedist(psVar4,param_3,param_1,(float *)psVar1), cVar7 == '\0')) {
        *(float *)(psVar4 + 0xc) =
             (fVar13 * *(float *)(param_1 + 0xc) + fVar15 * *(float *)(param_1 + 0x10) +
             *(float *)(param_1 + 0x14) * fVar9) / fVar12;
      }
      auVar14._8_8_ = 0;
      auVar6._4_4_ = fVar12;
      auVar6._0_4_ = fVar12;
      auVar6._8_4_ = (int)_LC4;
      auVar6._12_4_ = (int)((ulong)_LC4 >> 0x20);
      auVar14 = divps(auVar14,auVar6);
      *(float *)(psVar4 + 8) = fVar9 / fVar12;
      *(long *)psVar4 = auVar14._0_8_;
      if (param_4) {
        return psVar4;
      }
      uVar8 = 3;
      if (_LC13 <= *(float *)(psVar4 + 0xc)) {
        return psVar4;
      }
    }
    *(undefined4 *)this = uVar8;
    if (*(long *)(psVar4 + 0x48) != 0) {
      *(undefined8 *)(*(long *)(psVar4 + 0x48) + 0x40) = *(undefined8 *)(psVar4 + 0x40);
    }
    if (*(long *)(psVar4 + 0x40) != 0) {
      *(undefined8 *)(*(long *)(psVar4 + 0x40) + 0x48) = *(undefined8 *)(psVar4 + 0x48);
    }
    if (psVar4 == *(sFace **)(this + 0x6458)) {
      *(undefined8 *)(this + 0x6458) = *(undefined8 *)(psVar4 + 0x48);
    }
    *(int *)(this + 0x6460) = *(int *)(this + 0x6460) + -1;
    *(undefined8 *)(psVar4 + 0x40) = 0;
    lVar5 = *(long *)(this + 0x6468);
    *(long *)(psVar4 + 0x48) = lVar5;
    if (lVar5 != 0) {
      *(sFace **)(lVar5 + 0x40) = psVar4;
    }
    *(sFace **)(this + 0x6468) = psVar4;
    *(int *)(this + 0x6470) = *(int *)(this + 0x6470) + 1;
  }
  return (sFace *)0x0;
}



/* GjkEpa2::EPA::expand(unsigned int, GjkEpa2::GJK::sSV*, GjkEpa2::EPA::sFace*, unsigned int,
   GjkEpa2::EPA::sHorizon&) */

undefined8 __thiscall
GjkEpa2::EPA::expand
          (EPA *this,uint param_1,sSV *param_2,sFace *param_3,uint param_4,sHorizon *param_5)

{
  uint uVar1;
  long lVar2;
  char cVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  
  if ((byte)param_3[0x53] == param_1) {
    return 0;
  }
  uVar6 = (ulong)param_4;
  uVar4 = (ulong)*(uint *)(expand(unsigned_int,GjkEpa2::GJK::sSV*,GjkEpa2::EPA::sFace*,unsigned_int,GjkEpa2::EPA::sHorizon&)
                           ::i1m3 + uVar6 * 4);
  if (_LC13 <= (*(float *)param_3 * *(float *)(param_2 + 0xc) +
                *(float *)(param_3 + 4) * *(float *)(param_2 + 0x10) +
               *(float *)(param_3 + 8) * *(float *)(param_2 + 0x14)) - *(float *)(param_3 + 0xc)) {
    param_3[0x53] = SUB41(param_1,0);
    uVar1 = *(uint *)(expand(unsigned_int,GjkEpa2::GJK::sSV*,GjkEpa2::EPA::sFace*,unsigned_int,GjkEpa2::EPA::sHorizon&)
                      ::i2m3 + uVar6 * 4);
    cVar3 = expand(this,param_1,param_2,*(sFace **)(param_3 + uVar4 * 8 + 0x28),
                   (uint)(byte)param_3[uVar4 + 0x50],param_5);
    if ((cVar3 != '\0') &&
       (cVar3 = expand(this,param_1,param_2,*(sFace **)(param_3 + (ulong)uVar1 * 8 + 0x28),
                       (uint)(byte)param_3[(ulong)uVar1 + 0x50],param_5), cVar3 != '\0')) {
      if (*(long *)(param_3 + 0x48) != 0) {
        *(undefined8 *)(*(long *)(param_3 + 0x48) + 0x40) = *(undefined8 *)(param_3 + 0x40);
      }
      if (*(long *)(param_3 + 0x40) != 0) {
        *(undefined8 *)(*(long *)(param_3 + 0x40) + 0x48) = *(undefined8 *)(param_3 + 0x48);
      }
      if (param_3 == *(sFace **)(this + 0x6458)) {
        *(undefined8 *)(this + 0x6458) = *(undefined8 *)(param_3 + 0x48);
      }
      *(int *)(this + 0x6460) = *(int *)(this + 0x6460) + -1;
      *(undefined8 *)(param_3 + 0x40) = 0;
      lVar5 = *(long *)(this + 0x6468);
      *(long *)(param_3 + 0x48) = lVar5;
      if (lVar5 != 0) {
        *(sFace **)(lVar5 + 0x40) = param_3;
      }
      *(int *)(this + 0x6470) = *(int *)(this + 0x6470) + 1;
      *(sFace **)(this + 0x6468) = param_3;
      return 1;
    }
  }
  else {
    lVar5 = newface(this,*(sSV **)(param_3 + uVar4 * 8 + 0x10),*(sSV **)(param_3 + uVar6 * 8 + 0x10)
                    ,param_2,false);
    if (lVar5 != 0) {
      *(char *)(lVar5 + 0x50) = (char)param_4;
      *(sFace **)(lVar5 + 0x28) = param_3;
      param_3[uVar6 + 0x50] = (sFace)0x0;
      *(long *)(param_3 + uVar6 * 8 + 0x28) = lVar5;
      lVar2 = *(long *)param_5;
      if (lVar2 == 0) {
        *(long *)(param_5 + 8) = lVar5;
      }
      else {
        *(undefined1 *)(lVar2 + 0x51) = 2;
        *(long *)(lVar2 + 0x30) = lVar5;
        *(undefined1 *)(lVar5 + 0x52) = 1;
        *(long *)(lVar5 + 0x38) = lVar2;
      }
      *(int *)(param_5 + 0x10) = *(int *)(param_5 + 0x10) + 1;
      *(long *)param_5 = lVar5;
      return 1;
    }
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GjkEpa2::EPA::Evaluate(GjkEpa2::GJK&, Vector3 const&) */

undefined4 __thiscall GjkEpa2::EPA::Evaluate(EPA *this,GJK *param_1,Vector3 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  sSV *psVar4;
  sSV *psVar5;
  char cVar6;
  byte bVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  float *pfVar12;
  int iVar13;
  sSV *psVar14;
  float *pfVar15;
  uint uVar16;
  sSV *psVar17;
  int iVar18;
  uint uVar19;
  long in_FS_OFFSET;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar23 [16];
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar27;
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
  float local_8c;
  long local_80;
  long local_78;
  long lStack_70;
  undefined4 local_68;
  float local_64;
  float local_60;
  float local_5c;
  undefined1 local_58 [16];
  uint local_48;
  long local_40;
  
  plVar3 = *(long **)(param_1 + 0x188);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((1 < *(uint *)(plVar3 + 6)) && (cVar6 = GJK::EncloseOrigin(param_1), cVar6 != '\0')) {
    lVar8 = *(long *)(this + 0x6458);
    if (lVar8 != 0) {
      iVar13 = *(int *)(this + 0x6470);
      iVar18 = *(int *)(this + 0x6460) + iVar13;
      do {
        if (*(long *)(lVar8 + 0x48) != 0) {
          *(undefined8 *)(*(long *)(lVar8 + 0x48) + 0x40) = *(undefined8 *)(lVar8 + 0x40);
        }
        if (*(long *)(lVar8 + 0x40) != 0) {
          *(undefined8 *)(*(long *)(lVar8 + 0x40) + 0x48) = *(undefined8 *)(lVar8 + 0x48);
        }
        if (lVar8 == *(long *)(this + 0x6458)) {
          *(undefined8 *)(this + 0x6458) = *(undefined8 *)(lVar8 + 0x48);
        }
        *(int *)(this + 0x6460) = (iVar18 + -1) - iVar13;
        *(undefined8 *)(lVar8 + 0x40) = 0;
        lVar9 = *(long *)(this + 0x6468);
        *(long *)(lVar8 + 0x48) = lVar9;
        if (lVar9 != 0) {
          *(long *)(lVar9 + 0x40) = lVar8;
        }
        *(long *)(this + 0x6468) = lVar8;
        lVar8 = *(long *)(this + 0x6458);
        iVar13 = iVar13 + 1;
      } while (lVar8 != 0);
      *(int *)(this + 0x6470) = iVar13;
    }
    lVar8 = plVar3[3];
    psVar17 = (sSV *)*plVar3;
    *(undefined4 *)this = 0;
    psVar4 = (sSV *)plVar3[2];
    psVar5 = (sSV *)plVar3[1];
    *(undefined4 *)(this + 0x6450) = 0;
    fVar22 = *(float *)(lVar8 + 0x14);
    fVar20 = *(float *)(lVar8 + 0x10);
    fVar35 = *(float *)(lVar8 + 0xc);
    psVar14 = psVar5;
    if ((((((*(float *)(psVar17 + 0x14) - fVar22) * (*(float *)(psVar5 + 0xc) - fVar35) *
            (*(float *)(psVar4 + 0x10) - fVar20) +
           (*(float *)(psVar17 + 0x10) - fVar20) * (*(float *)(psVar5 + 0x14) - fVar22) *
           (*(float *)(psVar4 + 0xc) - fVar35)) -
          (*(float *)(psVar5 + 0x14) - fVar22) * (*(float *)(psVar17 + 0xc) - fVar35) *
          (*(float *)(psVar4 + 0x10) - fVar20)) -
         (*(float *)(psVar17 + 0x10) - fVar20) * (*(float *)(psVar5 + 0xc) - fVar35) *
         (*(float *)(psVar4 + 0x14) - fVar22)) +
        (*(float *)(psVar17 + 0xc) - fVar35) * (*(float *)(psVar5 + 0x10) - fVar20) *
        (*(float *)(psVar4 + 0x14) - fVar22)) -
        (*(float *)(psVar17 + 0x14) - fVar22) * (*(float *)(psVar5 + 0x10) - fVar20) *
        (*(float *)(psVar4 + 0xc) - fVar35) < 0.0) {
      *plVar3 = (long)psVar5;
      plVar3[1] = (long)psVar17;
      plVar3[4] = CONCAT44((int)plVar3[4],(int)((ulong)plVar3[4] >> 0x20));
      psVar14 = psVar17;
      psVar17 = psVar5;
    }
    lVar8 = newface(this,psVar17,psVar14,psVar4,true);
    lVar9 = newface(this,(sSV *)plVar3[1],(sSV *)*plVar3,(sSV *)plVar3[3],true);
    lVar10 = newface(this,(sSV *)plVar3[2],(sSV *)plVar3[1],(sSV *)plVar3[3],true);
    lVar11 = newface(this,(sSV *)*plVar3,(sSV *)plVar3[2],(sSV *)plVar3[3],true);
    if (*(int *)(this + 0x6460) == 4) {
      pfVar15 = *(float **)(this + 0x6458);
      local_8c = pfVar15[3];
      pfVar12 = *(float **)(pfVar15 + 0x12);
      fVar22 = local_8c * local_8c;
      if (pfVar12 != (float *)0x0) {
        do {
          fVar20 = pfVar12[3] * pfVar12[3];
          if (fVar20 < fVar22) {
            pfVar15 = pfVar12;
            fVar22 = fVar20;
          }
          pfVar12 = *(float **)(pfVar12 + 0x12);
        } while (pfVar12 != (float *)0x0);
        local_8c = pfVar15[3];
      }
      local_64 = *pfVar15;
      local_80 = *(long *)(pfVar15 + 8);
      local_60 = pfVar15[1];
      local_5c = pfVar15[2];
      local_78 = *(long *)(pfVar15 + 4);
      lStack_70 = *(long *)(pfVar15 + 6);
      *(long *)(lVar8 + 0x28) = lVar9;
      *(undefined1 *)(lVar8 + 0x50) = 0;
      *(undefined1 *)(lVar9 + 0x50) = 0;
      *(long *)(lVar9 + 0x28) = lVar8;
      *(undefined1 *)(lVar8 + 0x51) = 0;
      *(long *)(lVar8 + 0x30) = lVar10;
      *(undefined1 *)(lVar10 + 0x50) = 1;
      *(long *)(lVar10 + 0x28) = lVar8;
      *(undefined1 *)(lVar8 + 0x52) = 0;
      *(long *)(lVar8 + 0x38) = lVar11;
      *(undefined1 *)(lVar11 + 0x50) = 2;
      *(long *)(lVar11 + 0x28) = lVar8;
      *(undefined1 *)(lVar9 + 0x51) = 2;
      *(long *)(lVar9 + 0x30) = lVar11;
      *(long *)(lVar11 + 0x38) = lVar9;
      *(undefined1 *)(lVar11 + 0x52) = 1;
      *(undefined1 *)(lVar9 + 0x52) = 1;
      *(long *)(lVar9 + 0x38) = lVar10;
      *(long *)(lVar10 + 0x30) = lVar9;
      uVar16 = 0;
      *(undefined2 *)(lVar10 + 0x51) = 0x102;
      *(long *)(lVar10 + 0x38) = lVar11;
      *(undefined1 *)(lVar11 + 0x51) = 2;
      *(long *)(lVar11 + 0x30) = lVar10;
      *(undefined4 *)this = 0;
      do {
        uVar19 = *(uint *)(this + 0x6450);
        if (0x7f < uVar19) {
          *(undefined4 *)this = 6;
          local_68 = 6;
          goto LAB_001042d0;
        }
        uVar16 = uVar16 + 1;
        *(uint *)(this + 0x6450) = uVar19 + 1;
        lVar8 = (ulong)uVar19 * 0x18;
        *(char *)((long)pfVar15 + 0x53) = (char)uVar16;
        local_58 = (undefined1  [16])0x0;
        local_48 = 0;
        GJK::getsupport((Vector3 *)param_1,(sSV *)(this + lVar8 + 0x50));
        if ((*pfVar15 * *(float *)(this + lVar8 + 0x5c) +
             pfVar15[1] * *(float *)(this + lVar8 + 0x60) +
            pfVar15[2] * *(float *)(this + lVar8 + 100)) - pfVar15[3] <= __LC12) {
          local_68 = 7;
LAB_001042c8:
          *(undefined4 *)this = local_68;
          goto LAB_001042d0;
        }
        lVar9 = 1;
        do {
          bVar7 = expand(this,uVar16,(sSV *)(this + lVar8 + 0x50),
                         *(sFace **)(pfVar15 + lVar9 * 2 + 8),
                         (uint)*(byte *)((long)pfVar15 + lVar9 + 0x4f),(sHorizon *)local_58);
          uVar19 = (uint)lVar9;
          lVar9 = lVar9 + 1;
        } while ((uVar19 < 3 & bVar7) != 0);
        local_68 = 4;
        if ((bVar7 == 0) || (local_48 < 3)) goto LAB_001042c8;
        *(undefined1 *)(local_58._0_8_ + 0x51) = 2;
        *(undefined8 *)(local_58._0_8_ + 0x30) = local_58._8_8_;
        *(undefined1 *)(local_58._8_8_ + 0x52) = 1;
        *(undefined8 *)(local_58._8_8_ + 0x38) = local_58._0_8_;
        if (*(long *)(pfVar15 + 0x12) != 0) {
          *(undefined8 *)(*(long *)(pfVar15 + 0x12) + 0x40) = *(undefined8 *)(pfVar15 + 0x10);
        }
        if (*(long *)(pfVar15 + 0x10) != 0) {
          *(undefined8 *)(*(long *)(pfVar15 + 0x10) + 0x48) = *(undefined8 *)(pfVar15 + 0x12);
        }
        if (pfVar15 == *(float **)(this + 0x6458)) {
          *(undefined8 *)(this + 0x6458) = *(undefined8 *)(pfVar15 + 0x12);
        }
        *(int *)(this + 0x6460) = *(int *)(this + 0x6460) + -1;
        pfVar15[0x10] = 0.0;
        pfVar15[0x11] = 0.0;
        lVar8 = *(long *)(this + 0x6468);
        *(long *)(pfVar15 + 0x12) = lVar8;
        if (lVar8 != 0) {
          *(float **)(lVar8 + 0x40) = pfVar15;
        }
        *(float **)(this + 0x6468) = pfVar15;
        pfVar15 = *(float **)(this + 0x6458);
        *(int *)(this + 0x6470) = *(int *)(this + 0x6470) + 1;
        local_8c = pfVar15[3];
        pfVar12 = *(float **)(pfVar15 + 0x12);
        fVar22 = local_8c * local_8c;
        if (pfVar12 != (float *)0x0) {
          do {
            fVar20 = pfVar12[3] * pfVar12[3];
            if (fVar20 < fVar22) {
              pfVar15 = pfVar12;
              fVar22 = fVar20;
            }
            pfVar12 = *(float **)(pfVar12 + 0x12);
          } while (pfVar12 != (float *)0x0);
          local_8c = pfVar15[3];
        }
        local_64 = *pfVar15;
        local_60 = pfVar15[1];
        local_5c = pfVar15[2];
        local_80 = *(long *)(pfVar15 + 8);
        local_78 = *(long *)(pfVar15 + 4);
        lStack_70 = *(long *)(pfVar15 + 6);
      } while (uVar16 != 0xff);
      local_68 = *(undefined4 *)this;
LAB_001042d0:
      *(undefined4 *)(this + 0x38) = 3;
      fVar24 = local_5c * local_8c;
      *(long *)(this + 0x18) = local_80;
      *(ulong *)(this + 0x40) = CONCAT44(local_60,local_64);
      *(ulong *)(this + 0x48) = CONCAT44(local_8c,local_5c);
      local_64 = local_64 * local_8c;
      fVar32 = *(float *)(local_80 + 0xc);
      fVar22 = *(float *)(local_80 + 0x14);
      local_8c = local_8c * local_60;
      fVar21 = *(float *)(lStack_70 + 0x14);
      fVar20 = *(float *)(lStack_70 + 0xc);
      *(long *)(this + 8) = local_78;
      *(long *)(this + 0x10) = lStack_70;
      fVar35 = *(float *)(lStack_70 + 0x10);
      fVar30 = fVar22 - fVar24;
      fVar29 = *(float *)(local_80 + 0x10);
      fVar33 = fVar21 - fVar24;
      fVar37 = fVar20 - local_64;
      fVar27 = fVar32 - local_64;
      fVar36 = fVar29 - local_8c;
      fVar31 = fVar35 - local_8c;
      fVar34 = fVar37 * fVar36 - fVar31 * fVar27;
      fVar27 = fVar27 * fVar33 - fVar37 * fVar30;
      fVar30 = fVar31 * fVar30 - fVar36 * fVar33;
      fVar31 = SQRT(fVar30 * fVar30 + fVar27 * fVar27 + fVar34 * fVar34);
      *(float *)(this + 0x28) = fVar31;
      fVar22 = fVar22 - fVar24;
      fVar39 = *(float *)(local_78 + 0x14) - fVar24;
      fVar29 = fVar29 - local_8c;
      fVar30 = *(float *)(local_78 + 0x10) - local_8c;
      fVar32 = fVar32 - local_64;
      fVar33 = *(float *)(local_78 + 0xc) - local_64;
      fVar21 = fVar21 - fVar24;
      fVar27 = *(float *)(local_80 + 0x14) - fVar24;
      fVar35 = fVar35 - local_8c;
      fVar34 = *(float *)(local_80 + 0x10) - local_8c;
      fVar37 = fVar22 * fVar35 - fVar29 * fVar21;
      fVar38 = fVar39 * fVar34 - fVar30 * fVar27;
      fVar20 = fVar20 - local_64;
      fVar36 = *(float *)(local_80 + 0xc) - local_64;
      fVar22 = fVar21 * fVar32 - fVar22 * fVar20;
      fVar21 = fVar27 * fVar33 - fVar39 * fVar36;
      fVar20 = fVar29 * fVar20 - fVar32 * fVar35;
      fVar35 = fVar30 * fVar36 - fVar33 * fVar34;
      auVar26._0_4_ = fVar22 * fVar22 + fVar37 * fVar37 + fVar20 * fVar20;
      auVar26._4_4_ = fVar21 * fVar21 + fVar38 * fVar38 + fVar35 * fVar35;
      auVar26._8_8_ = 0;
      auVar26 = sqrtps(auVar26,auVar26);
      *(float *)(this + 0x2c) = auVar26._4_4_;
      fVar29 = *(float *)(lStack_70 + 0x14) - fVar24;
      fVar20 = *(float *)(lStack_70 + 0x10) - local_8c;
      fVar24 = *(float *)(local_78 + 0x14) - fVar24;
      fVar22 = *(float *)(lStack_70 + 0xc) - local_64;
      local_8c = *(float *)(local_78 + 0x10) - local_8c;
      local_64 = *(float *)(local_78 + 0xc) - local_64;
      fVar35 = local_64 * fVar20 - local_8c * fVar22;
      fVar22 = fVar22 * fVar24 - local_64 * fVar29;
      fVar20 = local_8c * fVar29 - fVar24 * fVar20;
      fVar22 = SQRT(fVar35 * fVar35 + fVar20 * fVar20 + fVar22 * fVar22);
      fVar20 = auVar26._4_4_ + fVar31 + fVar22;
      auVar28._4_4_ = fVar20;
      auVar28._0_4_ = fVar20;
      auVar28._8_8_ = _LC4;
      auVar26 = divps(auVar26,auVar28);
      *(float *)(this + 0x30) = fVar22 / fVar20;
      *(long *)(this + 0x28) = auVar26._0_8_;
      goto LAB_00103f71;
    }
  }
  uVar1 = *(undefined8 *)param_2;
  uVar2 = *(undefined8 *)(param_2 + 4);
  *(undefined4 *)this = 8;
  fVar35 = (float)uVar1;
  fVar22 = (float)uVar2;
  fVar20 = (float)((ulong)uVar2 >> 0x20);
  uVar16 = (uint)_LC14;
  uVar19 = (uint)((ulong)_LC14 >> 0x20);
  fVar29 = (float)((uint)fVar20 ^ uVar19);
  *(ulong *)(this + 0x44) = CONCAT44(fVar29,(uint)fVar22 ^ uVar16);
  auVar23._0_4_ = SQRT(fVar35 * fVar35 + fVar22 * fVar22 + fVar20 * fVar20);
  if (auVar23._0_4_ <= 0.0) {
    *(undefined8 *)(this + 0x40) = 0x3f800000;
    *(undefined4 *)(this + 0x48) = 0;
  }
  else {
    auVar25._0_4_ = (uint)fVar35 ^ uVar16;
    auVar25._4_4_ = (uint)((ulong)uVar1 >> 0x20) ^ uVar19;
    auVar25._8_8_ = 0;
    auVar23._4_4_ = auVar23._0_4_;
    auVar23._8_8_ = _LC4;
    auVar26 = divps(auVar25,auVar23);
    *(float *)(this + 0x48) = fVar29 / auVar23._0_4_;
    *(long *)(this + 0x40) = auVar26._0_8_;
  }
  lVar8 = *plVar3;
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined4 *)(this + 0x38) = 1;
  *(long *)(this + 8) = lVar8;
  *(undefined4 *)(this + 0x28) = 0x3f800000;
  local_68 = 8;
LAB_00103f71:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_68;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


