
/* JPH::StaticArray<JPH::Vec3, 1026u>::~StaticArray() */

void __thiscall JPH::StaticArray<JPH::Vec3,1026u>::~StaticArray(StaticArray<JPH::Vec3,1026u> *this)

{
  return;
}



/* JPH::sCreateVertices(JPH::StaticArray<JPH::Vec3, 1026u>&, JPH::Vec3, JPH::Vec3, JPH::Vec3, int)
    */

void JPH::sCreateVertices
               (undefined8 param_1_00,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,uint *param_1,int param_8,ulong param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  float *pfVar7;
  float *pfVar8;
  uint uVar9;
  uint uVar10;
  ulong extraout_RDX;
  float *pfVar11;
  ulong uVar12;
  ulong uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  
  do {
    pfVar7 = (float *)(param_1 + 4);
    local_58 = (float)param_3;
    fStack_54 = (float)((ulong)param_3 >> 0x20);
    fStack_50 = (float)param_4;
    fStack_4c = (float)((ulong)param_4 >> 0x20);
    local_68 = (float)param_1_00;
    fStack_64 = (float)((ulong)param_1_00 >> 0x20);
    fStack_60 = (float)param_2;
    fStack_5c = (float)((ulong)param_2 >> 0x20);
    auVar17._0_4_ = local_58 + local_68;
    auVar17._4_4_ = fStack_54 + fStack_64;
    auVar17._8_4_ = fStack_50 + fStack_60;
    auVar17._12_4_ = fStack_4c + fStack_5c;
    auVar18._0_4_ =
         SQRT(auVar17._8_4_ * auVar17._8_4_ +
              auVar17._4_4_ * auVar17._4_4_ + auVar17._0_4_ * auVar17._0_4_ + 0.0);
    auVar18._4_4_ = auVar18._0_4_;
    auVar18._8_4_ = auVar18._0_4_;
    auVar18._12_4_ = auVar18._0_4_;
    auVar18 = divps(auVar17,auVar18);
    local_48 = (float)param_5;
    fStack_44 = (float)((ulong)param_5 >> 0x20);
    fStack_40 = (float)param_6;
    fStack_3c = (float)((ulong)param_6 >> 0x20);
    auVar19._0_4_ = local_58 + local_48;
    auVar19._4_4_ = fStack_54 + fStack_44;
    auVar19._8_4_ = fStack_50 + fStack_40;
    auVar19._12_4_ = fStack_4c + fStack_3c;
    auVar20._0_4_ =
         SQRT(auVar19._8_4_ * auVar19._8_4_ +
              auVar19._4_4_ * auVar19._4_4_ + auVar19._0_4_ * auVar19._0_4_ + 0.0);
    auVar20._4_4_ = auVar20._0_4_;
    auVar20._8_4_ = auVar20._0_4_;
    auVar20._12_4_ = auVar20._0_4_;
    auVar20 = divps(auVar19,auVar20);
    auVar21._0_4_ = local_48 + local_68;
    auVar21._4_4_ = fStack_44 + fStack_64;
    auVar21._8_4_ = fStack_40 + fStack_60;
    auVar21._12_4_ = fStack_3c + fStack_5c;
    auVar22._0_4_ =
         SQRT(auVar21._8_4_ * auVar21._8_4_ +
              auVar21._4_4_ * auVar21._4_4_ + auVar21._0_4_ * auVar21._0_4_ + 0.0);
    auVar22._4_4_ = auVar22._0_4_;
    auVar22._8_4_ = auVar22._0_4_;
    auVar22._12_4_ = auVar22._0_4_;
    auVar22 = divps(auVar21,auVar22);
    uVar13 = (ulong)*param_1;
    pfVar11 = pfVar7 + uVar13 * 4;
    local_78 = auVar18._0_8_;
    uVar5 = local_78;
    uStack_70 = auVar18._8_8_;
    uVar6 = uStack_70;
    local_88 = auVar22._0_8_;
    uVar3 = local_88;
    uStack_80 = auVar22._8_8_;
    uVar4 = uStack_80;
    local_98 = auVar20._0_8_;
    uVar1 = local_98;
    uStack_90 = auVar20._8_8_;
    uVar2 = uStack_90;
    pfVar8 = pfVar7;
    if (uVar13 != 0) {
      do {
        local_78._0_4_ = auVar18._0_4_;
        local_78._4_4_ = auVar18._4_4_;
        uStack_70._0_4_ = auVar18._8_4_;
        uStack_70._4_4_ = auVar18._12_4_;
        auVar14._4_4_ = -(uint)(local_78._4_4_ == pfVar8[1]);
        auVar14._0_4_ = -(uint)((float)local_78 == *pfVar8);
        auVar14._8_4_ = -(uint)((float)uStack_70 == pfVar8[2]);
        auVar14._12_4_ = -(uint)(uStack_70._4_4_ == pfVar8[3]);
        uVar9 = movmskps((int)param_9,auVar14);
        param_9 = (ulong)(~uVar9 & 7);
        uVar12 = uVar13;
        if ((~uVar9 & 7) == 0) goto LAB_0010419c;
        pfVar8 = pfVar8 + 4;
      } while (pfVar11 != pfVar8);
    }
    uVar9 = *param_1 + 1;
    uVar12 = (ulong)uVar9;
    *param_1 = uVar9;
    param_9 = uVar12 * 0x10;
    *(undefined8 *)(param_1 + uVar13 * 4 + 4) = uVar5;
    *(undefined8 *)(param_1 + uVar13 * 4 + 4 + 2) = uVar6;
    pfVar11 = pfVar7 + uVar12 * 4;
    uVar13 = uVar12;
    if (uVar12 != 0) {
LAB_0010419c:
      uVar9 = (uint)uVar12;
      pfVar8 = pfVar7;
      do {
        local_98._0_4_ = auVar20._0_4_;
        local_98._4_4_ = auVar20._4_4_;
        uStack_90._0_4_ = auVar20._8_4_;
        uStack_90._4_4_ = auVar20._12_4_;
        auVar15._4_4_ = -(uint)(local_98._4_4_ == pfVar8[1]);
        auVar15._0_4_ = -(uint)((float)local_98 == *pfVar8);
        auVar15._8_4_ = -(uint)((float)uStack_90 == pfVar8[2]);
        auVar15._12_4_ = -(uint)(uStack_90._4_4_ == pfVar8[3]);
        uVar10 = movmskps((int)param_9,auVar15);
        param_9 = (ulong)(~uVar10 & 7);
        uVar13 = uVar12;
        if ((~uVar10 & 7) == 0) goto LAB_001041d5;
        pfVar8 = pfVar8 + 4;
      } while (pfVar11 != pfVar8);
    }
    uVar9 = uVar9 + 1;
    uVar12 = (ulong)uVar9;
    *param_1 = uVar9;
    *(undefined8 *)(param_1 + uVar13 * 4 + 4) = uVar1;
    *(undefined8 *)(param_1 + uVar13 * 4 + 4 + 2) = uVar2;
    uVar13 = (ulong)uVar9;
    param_9 = uVar13 * 0x10;
    pfVar11 = pfVar7 + uVar13 * 4;
    if (uVar13 != 0) {
LAB_001041d5:
      do {
        uVar9 = (uint)uVar12;
        local_88._0_4_ = auVar22._0_4_;
        local_88._4_4_ = auVar22._4_4_;
        uStack_80._0_4_ = auVar22._8_4_;
        uStack_80._4_4_ = auVar22._12_4_;
        auVar16._4_4_ = -(uint)(local_88._4_4_ == pfVar7[1]);
        auVar16._0_4_ = -(uint)((float)local_88 == *pfVar7);
        auVar16._8_4_ = -(uint)((float)uStack_80 == pfVar7[2]);
        auVar16._12_4_ = -(uint)(uStack_80._4_4_ == pfVar7[3]);
        uVar10 = movmskps((int)param_9,auVar16);
        param_9 = (ulong)(~uVar10 & 7);
        if ((~uVar10 & 7) == 0) goto joined_r0x00104278;
        pfVar7 = pfVar7 + 4;
      } while (pfVar11 != pfVar7);
    }
    *param_1 = uVar9 + 1;
    *(undefined8 *)(param_1 + uVar13 * 4 + 4) = uVar3;
    *(undefined8 *)(param_1 + uVar13 * 4 + 4 + 2) = uVar4;
joined_r0x00104278:
    if (param_8 == 0) {
      return;
    }
    param_8 = param_8 + -1;
    sCreateVertices(param_1_00,param_2,uVar5,uVar6,uVar3,uVar4,param_1,param_8);
    sCreateVertices(uVar5,uVar6,uVar1,uVar2,uVar3,uVar4,param_1,param_8);
    sCreateVertices(uVar5,uVar6,param_3,param_4,uVar1,uVar2,param_1,param_8);
    param_9 = extraout_RDX;
    param_1_00 = uVar3;
    param_2 = uVar4;
    param_3 = uVar1;
    param_4 = uVar2;
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::Vec3::sUnitSphere */

void JPH::Vec3::_GLOBAL__sub_I_sUnitSphere(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (DVec3::cTrue == '\0') {
    DVec3::cTrue = '\x01';
    DVec3::cTrue = _LC1;
  }
  sUnitSphere._16_16_ = ZEXT416(_LC2);
  uVar1 = 0x100000;
  uVar2 = 0x3f8000003f800000;
  sUnitSphere._32_16_ = ZEXT416(_LC3);
  sUnitSphere._0_4_ = 6;
  sUnitSphere._48_8_ = __LC4;
  sUnitSphere._56_8_ = _UNK_001045d8;
  sUnitSphere._64_8_ = __LC5;
  sUnitSphere._72_8_ = _UNK_001045e8;
  sUnitSphere._80_8_ = __LC6;
  sUnitSphere._88_8_ = _UNK_001045f8;
  sUnitSphere._96_8_ = __LC7;
  sUnitSphere._104_8_ = _UNK_00104608;
  sCreateVertices(0x3f800000,0,0x3f80000000000000,0,0,0x3f8000003f800000,0x100000,3);
  uVar4 = 0xbf800000;
  sCreateVertices(0xbf800000,0,0x3f80000000000000,0,0,uVar2,uVar1,3);
  sCreateVertices(0x3f800000,0,0xbf80000000000000,0,0,uVar2,uVar1,3);
  uVar3 = 0xbf80000000000000;
  sCreateVertices(uVar4,0,0xbf80000000000000,0,0,uVar2,uVar1,3);
  sCreateVertices(0x3f800000,0,0x3f80000000000000,0,0,0xbf800000bf800000,uVar1,3);
  sCreateVertices(uVar4,0,0x3f80000000000000,0,0,0xbf800000bf800000,uVar1,3);
  sCreateVertices(0x3f800000,0,uVar3,0,0,0xbf800000bf800000,uVar1,3);
  sCreateVertices(uVar4,0,uVar3,0,0,0xbf800000bf800000,uVar1,3);
  __cxa_atexit(StaticArray<JPH::Vec3,1026u>::~StaticArray,uVar1,&__dso_handle);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::StaticArray<JPH::Vec3, 1026u>::~StaticArray() */

void __thiscall JPH::StaticArray<JPH::Vec3,1026u>::~StaticArray(StaticArray<JPH::Vec3,1026u> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


