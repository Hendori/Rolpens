void ITransformOne(byte *param_1, ulong *param_2, undefined1 *param_3) {
   ulong uVar1;
   ulong uVar2;
   ulong uVar3;
   undefined1 auVar4[12];
   undefined1 auVar5[12];
   undefined1 auVar6[12];
   undefined1 auVar7[12];
   uint uVar8;
   int *piVar9;
   long in_FS_OFFSET;
   int iVar10;
   int iVar11;
   int iVar12;
   short sVar16;
   short sVar17;
   int iVar18;
   undefined2 uVar19;
   undefined1 auVar13[16];
   int iVar20;
   int iVar24;
   undefined1 auVar21[16];
   int iVar25;
   int iVar26;
   int iVar30;
   undefined1 auVar27[16];
   int iVar31;
   undefined1 auVar32[16];
   int iVar35;
   int iVar39;
   undefined1 auVar36[16];
   int iVar40;
   int iVar41;
   int iVar42;
   short sVar46;
   short sVar47;
   undefined2 uVar48;
   int iVar49;
   undefined1 auVar43[16];
   undefined1 auVar50[16];
   undefined1 auVar53[16];
   undefined8 local_68;
   undefined8 local_60;
   undefined8 local_58;
   undefined8 local_50;
   undefined8 local_48;
   undefined8 local_40;
   undefined8 local_38;
   undefined8 local_30;
   long local_20;
   undefined1 auVar14[16];
   undefined1 auVar15[16];
   undefined1 auVar22[16];
   undefined1 auVar23[16];
   undefined1 auVar28[16];
   undefined1 auVar29[16];
   undefined1 auVar33[16];
   undefined1 auVar34[16];
   undefined1 auVar37[16];
   undefined1 auVar38[16];
   undefined1 auVar44[16];
   undefined1 auVar45[16];
   undefined1 auVar51[16];
   undefined1 auVar52[16];
   undefined1 auVar54[16];
   undefined1 auVar55[16];
   piVar9 = (int*)&local_68;
   uVar1 = *param_2;
   uVar2 = param_2[3];
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar3 = param_2[1];
   sVar16 = (short)( uVar1 >> 0x10 );
   sVar17 = (short)( uVar1 >> 0x20 );
   uVar19 = ( undefined2 )(uVar1 >> 0x30);
   auVar38._8_4_ = 0;
   auVar38._0_8_ = uVar1;
   auVar38._12_2_ = uVar19;
   auVar38._14_2_ = -(ushort)((long)uVar1 < 0);
   auVar37._12_4_ = auVar38._12_4_;
   auVar37._8_2_ = 0;
   auVar37._0_8_ = uVar1;
   auVar37._10_2_ = -(ushort)(sVar17 < 0);
   auVar36._10_6_ = auVar37._10_6_;
   auVar36._8_2_ = sVar17;
   auVar36._0_8_ = uVar1;
   auVar4._4_8_ = auVar36._8_8_;
   auVar4._2_2_ = -(ushort)(sVar16 < 0);
   auVar4._0_2_ = sVar16;
   iVar35 = CONCAT22(-(ushort)((short)uVar1 < 0), (short)uVar1);
   auVar34._8_4_ = 0;
   auVar34._0_8_ = uVar1;
   auVar34._12_2_ = uVar19;
   auVar34._14_2_ = -(ushort)((long)uVar1 < 0);
   auVar33._12_4_ = auVar34._12_4_;
   auVar33._8_2_ = 0;
   auVar33._0_8_ = uVar1;
   auVar33._10_2_ = -(ushort)(sVar17 < 0);
   auVar32._10_6_ = auVar33._10_6_;
   auVar32._8_2_ = sVar17;
   auVar32._0_8_ = uVar1;
   uVar1 = param_2[2];
   sVar16 = (short)( uVar1 >> 0x10 );
   sVar17 = (short)( uVar1 >> 0x20 );
   uVar19 = ( undefined2 )(uVar1 >> 0x30);
   auVar15._8_4_ = 0;
   auVar15._0_8_ = uVar1;
   auVar15._12_2_ = uVar19;
   auVar15._14_2_ = -(ushort)((long)uVar1 < 0);
   auVar14._12_4_ = auVar15._12_4_;
   auVar14._8_2_ = 0;
   auVar14._0_8_ = uVar1;
   auVar14._10_2_ = -(ushort)(sVar17 < 0);
   auVar13._10_6_ = auVar14._10_6_;
   auVar13._8_2_ = sVar17;
   auVar13._0_8_ = uVar1;
   auVar23._8_4_ = 0;
   auVar23._0_8_ = uVar1;
   auVar23._12_2_ = uVar19;
   auVar23._14_2_ = -(ushort)((long)uVar1 < 0);
   auVar22._12_4_ = auVar23._12_4_;
   auVar22._8_2_ = 0;
   auVar22._0_8_ = uVar1;
   auVar22._10_2_ = -(ushort)(sVar17 < 0);
   auVar21._10_6_ = auVar22._10_6_;
   auVar21._8_2_ = sVar17;
   auVar21._0_8_ = uVar1;
   auVar5._4_8_ = auVar21._8_8_;
   auVar5._2_2_ = -(ushort)(sVar16 < 0);
   auVar5._0_2_ = sVar16;
   iVar10 = CONCAT22(-(ushort)((short)uVar1 < 0), (short)uVar1);
   iVar41 = iVar10 + iVar35;
   iVar42 = auVar5._0_4_ + auVar4._0_4_;
   iVar35 = iVar35 - iVar10;
   iVar39 = auVar4._0_4_ - auVar5._0_4_;
   iVar40 = auVar13._8_4_ + auVar32._8_4_;
   iVar31 = auVar32._8_4_ - auVar13._8_4_;
   sVar46 = (short)( uVar2 >> 0x10 );
   sVar47 = (short)( uVar2 >> 0x20 );
   uVar48 = ( undefined2 )(uVar2 >> 0x30);
   sVar16 = (short)( uVar3 >> 0x10 );
   sVar17 = (short)( uVar3 >> 0x20 );
   uVar19 = ( undefined2 )(uVar3 >> 0x30);
   auVar52._8_4_ = 0;
   auVar52._0_8_ = uVar2;
   auVar52._12_2_ = uVar48;
   auVar52._14_2_ = -(ushort)((long)uVar2 < 0);
   auVar51._12_4_ = auVar52._12_4_;
   auVar51._8_2_ = 0;
   auVar51._0_8_ = uVar2;
   auVar51._10_2_ = -(ushort)(sVar47 < 0);
   auVar50._10_6_ = auVar51._10_6_;
   auVar50._8_2_ = sVar47;
   auVar50._0_8_ = uVar2;
   auVar6._4_8_ = auVar50._8_8_;
   auVar6._2_2_ = -(ushort)(sVar46 < 0);
   auVar6._0_2_ = sVar46;
   iVar12 = CONCAT22(-(ushort)((short)uVar2 < 0), (short)uVar2);
   auVar45._8_4_ = 0;
   auVar45._0_8_ = uVar2;
   auVar45._12_2_ = uVar48;
   auVar45._14_2_ = -(ushort)((long)uVar2 < 0);
   auVar44._12_4_ = auVar45._12_4_;
   auVar44._8_2_ = 0;
   auVar44._0_8_ = uVar2;
   auVar44._10_2_ = -(ushort)(sVar47 < 0);
   auVar43._10_6_ = auVar44._10_6_;
   auVar43._8_2_ = sVar47;
   auVar43._0_8_ = uVar2;
   auVar55._8_4_ = 0;
   auVar55._0_8_ = uVar3;
   auVar55._12_2_ = uVar19;
   auVar55._14_2_ = -(ushort)((long)uVar3 < 0);
   auVar54._12_4_ = auVar55._12_4_;
   auVar54._8_2_ = 0;
   auVar54._0_8_ = uVar3;
   auVar54._10_2_ = -(ushort)(sVar17 < 0);
   auVar53._10_6_ = auVar54._10_6_;
   auVar53._8_2_ = sVar17;
   auVar53._0_8_ = uVar3;
   auVar7._4_8_ = auVar53._8_8_;
   auVar7._2_2_ = -(ushort)(sVar16 < 0);
   auVar7._0_2_ = sVar16;
   iVar18 = CONCAT22(-(ushort)((short)uVar3 < 0), (short)uVar3);
   iVar49 = auVar43._8_4_;
   iVar10 = auVar6._0_4_;
   iVar11 = auVar7._0_4_;
   auVar29._8_4_ = 0;
   auVar29._0_8_ = uVar3;
   auVar29._12_2_ = uVar19;
   auVar29._14_2_ = -(ushort)((long)uVar3 < 0);
   auVar28._12_4_ = auVar29._12_4_;
   auVar28._8_2_ = 0;
   auVar28._0_8_ = uVar3;
   auVar28._10_2_ = -(ushort)(sVar17 < 0);
   auVar27._10_6_ = auVar28._10_6_;
   auVar27._8_2_ = sVar17;
   auVar27._0_8_ = uVar3;
   iVar30 = auVar27._8_4_;
   iVar25 = ( iVar18 * 0x8a8c >> 0x10 ) - ( ( iVar12 * 0x4e7b >> 0x10 ) + iVar12 );
   iVar26 = ( iVar11 * 0x8a8c >> 0x10 ) - ( ( iVar10 * 0x4e7b >> 0x10 ) + iVar10 );
   iVar20 = ( iVar30 * 0x8a8c >> 0x10 ) - ( ( iVar49 * 0x4e7b >> 0x10 ) + iVar49 );
   iVar24 = ( auVar28._12_4_ * 0x8a8c >> 0x10 ) - ( ( auVar44._12_4_ * 0x4e7b >> 0x10 ) + auVar44._12_4_ );
   iVar12 = ( iVar18 * 0x4e7b >> 0x10 ) + iVar18 + ( iVar12 * 0x8a8c >> 0x10 );
   iVar18 = ( iVar11 * 0x4e7b >> 0x10 ) + iVar11 + ( iVar10 * 0x8a8c >> 0x10 );
   iVar10 = ( iVar30 * 0x4e7b >> 0x10 ) + iVar30 + ( iVar49 * 0x8a8c >> 0x10 );
   iVar11 = ( auVar28._12_4_ * 0x4e7b >> 0x10 ) + auVar28._12_4_ + ( auVar44._12_4_ * 0x8a8c >> 0x10 );
   local_60 = CONCAT44(iVar41 - iVar12, iVar35 - iVar25);
   local_68 = CONCAT44(iVar35 + iVar25, iVar41 + iVar12);
   local_58 = CONCAT44(iVar39 + iVar26, iVar42 + iVar18);
   local_50 = CONCAT44(iVar42 - iVar18, iVar39 - iVar26);
   local_40 = CONCAT44(iVar40 - iVar10, iVar31 - iVar20);
   local_48 = CONCAT44(iVar31 + iVar20, iVar40 + iVar10);
   local_38 = CONCAT44(( auVar33._12_4_ - auVar14._12_4_ ) + iVar24, auVar14._12_4_ + auVar33._12_4_ + iVar11);
   local_30 = CONCAT44(( auVar14._12_4_ + auVar33._12_4_ ) - iVar11, ( auVar33._12_4_ - auVar14._12_4_ ) - iVar24);
   do {
      iVar11 = piVar9[0xc];
      iVar12 = piVar9[4];
      iVar10 = piVar9[8] + *piVar9 + 4;
      iVar18 = ( *piVar9 + 4 ) - piVar9[8];
      iVar20 = ( iVar12 * 0x8a8c >> 0x10 ) - ( ( iVar11 * 0x4e7b >> 0x10 ) + iVar11 );
      iVar11 = ( iVar12 * 0x4e7b >> 0x10 ) + iVar12 + ( iVar11 * 0x8a8c >> 0x10 );
      uVar8 = ( iVar11 + iVar10 >> 3 ) + ( uint ) * param_1;
      if (0xff < uVar8) {
         uVar8 = (int)~uVar8 >> 0x1f;
      }

      *param_3 = (char)uVar8;
      uVar8 = ( iVar20 + iVar18 >> 3 ) + (uint)param_1[1];
      if (0xff < uVar8) {
         uVar8 = (int)~uVar8 >> 0x1f;
      }

      param_3[1] = (char)uVar8;
      uVar8 = ( iVar18 - iVar20 >> 3 ) + (uint)param_1[2];
      if (0xff < uVar8) {
         uVar8 = (int)~uVar8 >> 0x1f;
      }

      param_3[2] = (char)uVar8;
      uVar8 = ( iVar10 - iVar11 >> 3 ) + (uint)param_1[3];
      if (0xff < uVar8) {
         uVar8 = (int)~uVar8 >> 0x1f;
      }

      piVar9 = piVar9 + 1;
      param_1 = param_1 + 0x20;
      param_3[3] = (char)uVar8;
      param_3 = param_3 + 0x20;
   }
 while ( piVar9 != (int*)&local_58 );
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void FTransform_C(byte *param_1, byte *param_2, undefined8 *param_3) {
   undefined1 auVar1[16];
   undefined1 auVar2[16];
   undefined1 auVar3[12];
   undefined1 auVar4[16];
   undefined1 auVar5[12];
   int iVar6;
   int iVar7;
   undefined8 *puVar8;
   undefined8 *puVar9;
   long in_FS_OFFSET;
   int iVar10;
   int iVar11;
   int iVar27;
   undefined1 auVar12[16];
   undefined1 auVar16[16];
   uint uVar28;
   undefined1 auVar20[16];
   undefined1 auVar23[16];
   short sVar29;
   short sVar30;
   undefined2 uVar31;
   short sVar32;
   short sVar33;
   int iVar34;
   int iVar35;
   int iVar36;
   int iVar37;
   int iVar38;
   int iVar39;
   int iVar48;
   undefined1 auVar40[16];
   undefined1 auVar44[16];
   int iVar49;
   int iVar50;
   int iVar51;
   int iVar52;
   int iVar53;
   undefined2 uVar54;
   int iVar55;
   short sVar56;
   int iVar57;
   int iVar58;
   int iVar59;
   int iVar60;
   undefined8 local_68[9];
   long local_20;
   undefined1 auVar13[16];
   undefined1 auVar15[16];
   undefined1 auVar14[16];
   undefined1 auVar17[16];
   undefined1 auVar24[16];
   undefined1 auVar18[16];
   undefined1 auVar21[16];
   undefined1 auVar25[16];
   undefined1 auVar19[16];
   undefined1 auVar22[16];
   undefined1 auVar26[16];
   undefined1 auVar41[16];
   undefined1 auVar43[16];
   undefined1 auVar42[16];
   undefined1 auVar45[16];
   undefined1 auVar46[16];
   undefined1 auVar47[16];
   iVar38 = _LC1._4_4_;
   iVar27 = (int)_LC1;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   puVar8 = local_68;
   do {
      puVar9 = puVar8 + 2;
      iVar10 = ( (uint)param_1[1] - (uint)param_2[1] ) + ( (uint)param_1[2] - (uint)param_2[2] );
      iVar6 = ( (uint)param_1[1] - (uint)param_2[1] ) - ( (uint)param_1[2] - (uint)param_2[2] );
      iVar11 = ( ( uint ) * param_1 - ( uint ) * param_2 ) + ( (uint)param_1[3] - (uint)param_2[3] );
      iVar7 = ( ( uint ) * param_1 - ( uint ) * param_2 ) - ( (uint)param_1[3] - (uint)param_2[3] );
      *puVar8 = CONCAT44(iVar6 * 0x8a9 + 0x714 + iVar7 * 0x14e8 >> 9, ( iVar11 + iVar10 ) * 8);
      puVar8[1] = CONCAT44(iVar7 * 0x8a9 + 0x3a9 + iVar6 * -0x14e8 >> 9, ( iVar11 - iVar10 ) * 8);
      param_2 = param_2 + 0x20;
      param_1 = param_1 + 0x20;
      puVar8 = puVar9;
   }
 while ( local_68 + 8 != puVar9 );
   iVar10 = (int)( (ulong)local_68[4] >> 0x20 );
   iVar59 = (int)local_68[4] + (int)local_68[2];
   iVar52 = (int)( (ulong)local_68[2] >> 0x20 );
   iVar60 = iVar10 + iVar52;
   iVar11 = (int)( (ulong)local_68[6] >> 0x20 );
   iVar7 = (int)local_68[6] + (int)local_68[0];
   iVar37 = (int)( (ulong)local_68[0] >> 0x20 );
   iVar48 = iVar11 + iVar37;
   iVar36 = (int)local_68[0] - (int)local_68[6];
   iVar37 = iVar37 - iVar11;
   iVar11 = (int)( (ulong)local_68[5] >> 0x20 );
   iVar57 = (int)local_68[5] + (int)local_68[3];
   iVar50 = (int)( (ulong)local_68[3] >> 0x20 );
   iVar58 = iVar11 + iVar50;
   iVar6 = (int)( (ulong)local_68[7] >> 0x20 );
   iVar53 = (int)local_68[7] + (int)local_68[1];
   iVar35 = (int)( (ulong)local_68[1] >> 0x20 );
   iVar55 = iVar6 + iVar35;
   iVar34 = (int)local_68[1] - (int)local_68[7];
   iVar35 = iVar35 - iVar6;
   iVar49 = (int)local_68[3] - (int)local_68[5];
   iVar50 = iVar50 - iVar11;
   iVar51 = (int)local_68[2] - (int)local_68[4];
   iVar52 = iVar52 - iVar10;
   iVar10 = iVar59 + iVar7 + (int)_LC0;
   iVar6 = iVar60 + iVar48 + _LC0._4_4_;
   iVar39 = ( iVar7 - iVar59 ) + (int)_LC0;
   iVar60 = ( iVar48 - iVar60 ) + _LC0._4_4_;
   iVar48 = iVar57 + iVar53 + (int)_LC0;
   iVar59 = iVar58 + iVar55 + _LC0._4_4_;
   iVar57 = ( iVar53 - iVar57 ) + (int)_LC0;
   iVar58 = ( iVar55 - iVar58 ) + _LC0._4_4_;
   iVar11 = iVar10 >> 4;
   iVar7 = iVar6 >> 4;
   auVar13._0_8_ = CONCAT44(iVar7, iVar11);
   auVar15._8_4_ = 0;
   auVar15._0_8_ = auVar13._0_8_;
   iVar53 = iVar39 >> 4;
   iVar55 = iVar60 >> 4;
   auVar41._0_8_ = CONCAT44(iVar55, iVar53);
   auVar43._8_4_ = 0;
   auVar43._0_8_ = auVar41._0_8_;
   sVar32 = (short)( iVar59 >> 0x14 );
   sVar56 = (short)( iVar6 >> 0x14 );
   uVar31 = ( undefined2 )(iVar59 >> 4);
   auVar14._8_2_ = 0;
   auVar14._0_8_ = auVar13._0_8_;
   uVar54 = (undefined2)iVar7;
   sVar29 = (short)( iVar48 >> 0x14 );
   auVar15._12_2_ = sVar56;
   auVar15._14_2_ = sVar32;
   auVar14._12_4_ = auVar15._12_4_;
   auVar14._10_2_ = uVar31;
   auVar13._10_6_ = auVar14._10_6_;
   auVar13._8_2_ = uVar54;
   auVar1._2_8_ = auVar13._8_8_;
   auVar1._0_2_ = sVar29;
   auVar1._10_6_ = 0;
   auVar12._12_4_ = 0;
   auVar12._0_12_ = SUB1612(auVar1 << 0x30, 4);
   auVar12 = auVar12 << 0x20;
   auVar19._0_12_ = auVar12._0_12_;
   auVar19._12_2_ = sVar29;
   auVar19._14_2_ = sVar32;
   auVar18._12_4_ = auVar19._12_4_;
   auVar18._0_10_ = auVar12._0_10_;
   auVar18._10_2_ = sVar56;
   auVar17._10_6_ = auVar18._10_6_;
   auVar17._0_8_ = auVar12._0_8_;
   auVar17._8_2_ = (short)( iVar10 >> 0x14 );
   auVar16._8_8_ = auVar17._8_8_;
   auVar16._6_2_ = uVar31;
   auVar16._4_2_ = (short)( iVar48 >> 4 );
   auVar16._2_2_ = uVar54;
   auVar16._0_2_ = (short)iVar11;
   *param_3 = auVar16._0_8_;
   sVar56 = (short)( iVar58 >> 0x14 );
   sVar29 = (short)( iVar60 >> 0x14 );
   auVar43._12_2_ = sVar29;
   auVar43._14_2_ = sVar56;
   auVar42._12_4_ = auVar43._12_4_;
   auVar42._8_2_ = 0;
   auVar42._0_8_ = auVar41._0_8_;
   uVar54 = ( undefined2 )(iVar58 >> 4);
   auVar42._10_2_ = uVar54;
   uVar31 = (undefined2)iVar55;
   auVar41._10_6_ = auVar42._10_6_;
   auVar41._8_2_ = uVar31;
   sVar32 = (short)( iVar57 >> 0x14 );
   auVar2._2_8_ = auVar41._8_8_;
   auVar2._0_2_ = sVar32;
   auVar2._10_6_ = 0;
   auVar44._0_2_ = (undefined2)iVar53;
   auVar40._12_4_ = 0;
   auVar40._0_12_ = SUB1612(auVar2 << 0x30, 4);
   auVar40 = auVar40 << 0x20;
   auVar47._0_12_ = auVar40._0_12_;
   auVar47._12_2_ = sVar32;
   auVar47._14_2_ = sVar56;
   auVar46._12_4_ = auVar47._12_4_;
   auVar46._0_10_ = auVar40._0_10_;
   auVar46._10_2_ = sVar29;
   auVar45._10_6_ = auVar46._10_6_;
   auVar45._0_8_ = auVar40._0_8_;
   auVar45._8_2_ = (short)( iVar39 >> 0x14 );
   auVar44._8_8_ = auVar45._8_8_;
   auVar44._6_2_ = uVar54;
   auVar44._4_2_ = (short)( iVar57 >> 4 );
   auVar44._2_2_ = uVar31;
   param_3[1] = CONCAT26(( ~-(ushort)(iVar35 == 0) & (ushort)_LC2._4_4_ ) + (short)( ( uint )(iVar50 * 0x8a9 + iVar35 * 0x14e8 + iVar38) >> 0x10 ), CONCAT24(( ~-(ushort)(iVar34 == 0) & (ushort)(undefined4)_LC2 ) + (short)( ( uint )(iVar49 * 0x8a9 + iVar34 * 0x14e8 + iVar27) >> 0x10 ), CONCAT22(( ~-(ushort)(iVar37 == 0) & (ushort)_LC2._4_4_ ) + (short)( ( uint )(iVar52 * 0x8a9 + iVar37 * 0x14e8 + iVar38) >> 0x10 ), ( ~-(ushort)(iVar36 == 0) & (ushort)(undefined4)_LC2 ) + (short)( ( uint )(iVar51 * 0x8a9 + iVar36 * 0x14e8 + iVar27) >> 0x10 ))));
   param_3[2] = auVar44._0_8_;
   iVar38 = (int)( (ulong)_LC3 >> 0x20 );
   iVar27 = iVar37 * 0x8a9 + iVar52 * -0x14e8 + iVar38;
   uVar28 = iVar27 >> 0x10;
   auVar3._4_8_ = 0;
   auVar3._0_4_ = uVar28;
   auVar22._0_12_ = auVar3 << 0x20;
   sVar32 = (short)( ( uint )(iVar35 * 0x8a9 + iVar50 * -0x14e8 + iVar38) >> 0x10 );
   sVar56 = (short)( (uint)iVar27 >> 0x10 );
   sVar29 = (short)( ( uint )(iVar34 * 0x8a9 + iVar49 * -0x14e8 + (int)_LC3) >> 0x10 );
   sVar30 = sVar29 >> 0xf;
   sVar33 = (short)( ( uint )(iVar36 * 0x8a9 + iVar51 * -0x14e8 + (int)_LC3) >> 0x10 );
   auVar22._12_2_ = sVar56 >> 0xf;
   auVar22._14_2_ = sVar32 >> 0xf;
   auVar21._12_4_ = auVar22._12_4_;
   auVar21._10_2_ = sVar32;
   auVar21._0_10_ = (unkuint10)uVar28 << 0x20;
   auVar5._4_2_ = sVar56;
   auVar5._0_4_ = uVar28;
   auVar5._6_6_ = auVar21._10_6_;
   auVar4._2_8_ = auVar5._4_8_;
   auVar4._0_2_ = sVar30;
   auVar4._10_6_ = 0;
   auVar20._12_4_ = 0;
   auVar20._0_12_ = SUB1612(auVar4 << 0x30, 4);
   auVar20 = auVar20 << 0x20;
   auVar26._0_12_ = auVar20._0_12_;
   auVar26._12_2_ = sVar30;
   auVar26._14_2_ = sVar32 >> 0xf;
   auVar25._12_4_ = auVar26._12_4_;
   auVar25._0_10_ = auVar20._0_10_;
   auVar25._10_2_ = sVar56 >> 0xf;
   auVar24._10_6_ = auVar25._10_6_;
   auVar24._0_8_ = auVar20._0_8_;
   auVar24._8_2_ = sVar33 >> 0xf;
   auVar23._8_8_ = auVar24._8_8_;
   auVar23._6_2_ = sVar32;
   auVar23._4_2_ = sVar29;
   auVar23._2_2_ = sVar56;
   auVar23._0_2_ = sVar33;
   param_3[3] = auVar23._0_8_;
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void FTransform2_C(long param_1, long param_2, long param_3) {
   ( *VP8FTransform )();
   /* WARNING: Could not recover jumptable at 0x001008f8. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( *VP8FTransform )(param_1 + 4, param_2 + 4, param_3 + 0x20);
   return;
}
void FTransformWHT_C(short *param_1, undefined8 *param_2) {
   undefined1 auVar1[16];
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   int iVar5;
   int *piVar6;
   int *piVar7;
   int iVar8;
   long in_FS_OFFSET;
   int iVar9;
   undefined1 auVar10[16];
   undefined1 auVar14[16];
   undefined1 auVar18[16];
   undefined1 auVar22[16];
   int iVar28;
   short sVar29;
   undefined2 uVar30;
   int iVar31;
   short sVar32;
   int iVar33;
   int iVar34;
   int iVar35;
   int iVar52;
   undefined1 auVar36[16];
   undefined1 auVar40[16];
   undefined1 auVar44[16];
   undefined1 auVar48[16];
   int iVar53;
   int iVar54;
   int iVar55;
   int iVar56;
   int iVar57;
   int iVar58;
   int iVar59;
   int iVar60;
   int iVar61;
   int iVar62;
   int local_58[18];
   long local_10;
   undefined1 auVar11[16];
   undefined1 auVar13[16];
   undefined1 auVar12[16];
   undefined1 auVar15[16];
   undefined1 auVar19[16];
   undefined1 auVar21[16];
   undefined1 auVar20[16];
   undefined1 auVar23[16];
   undefined1 auVar16[16];
   undefined1 auVar24[16];
   undefined1 auVar17[16];
   undefined1 auVar25[16];
   undefined2 uVar26;
   short sVar27;
   undefined1 auVar37[16];
   undefined1 auVar39[16];
   undefined1 auVar38[16];
   undefined1 auVar41[16];
   undefined1 auVar45[16];
   undefined1 auVar47[16];
   undefined1 auVar46[16];
   undefined1 auVar49[16];
   undefined1 auVar42[16];
   undefined1 auVar50[16];
   undefined1 auVar43[16];
   undefined1 auVar51[16];
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   piVar6 = local_58;
   do {
      piVar7 = piVar6 + 4;
      iVar9 = (int)*param_1 + (int)param_1[0x20];
      iVar5 = (int)*param_1 - (int)param_1[0x20];
      iVar35 = (int)param_1[0x10] + (int)param_1[0x30];
      iVar8 = (int)param_1[0x10] - (int)param_1[0x30];
      *piVar6 = iVar9 + iVar35;
      piVar6[1] = iVar8 + iVar5;
      piVar6[2] = iVar5 - iVar8;
      piVar6[3] = iVar9 - iVar35;
      param_1 = param_1 + 0x40;
      piVar6 = piVar7;
   }
 while ( local_58 + 0x10 != piVar7 );
   iVar61 = (int)local_58._48_8_ + (int)local_58._16_8_;
   iVar62 = SUB84(local_58._48_8_, 4) + SUB84(local_58._16_8_, 4);
   iVar28 = (int)local_58._32_8_ + (int)local_58._0_8_;
   iVar31 = SUB84(local_58._32_8_, 4) + SUB84(local_58._0_8_, 4);
   iVar5 = (int)local_58._56_8_ + (int)local_58._24_8_;
   iVar60 = SUB84(local_58._56_8_, 4) + SUB84(local_58._24_8_, 4);
   iVar53 = (int)local_58._40_8_ + (int)local_58._8_8_;
   iVar54 = SUB84(local_58._40_8_, 4) + SUB84(local_58._8_8_, 4);
   iVar33 = (int)local_58._8_8_ - (int)local_58._40_8_;
   iVar34 = SUB84(local_58._8_8_, 4) - SUB84(local_58._40_8_, 4);
   iVar9 = (int)local_58._0_8_ - (int)local_58._32_8_;
   iVar8 = SUB84(local_58._0_8_, 4) - SUB84(local_58._32_8_, 4);
   iVar35 = iVar61 + iVar28;
   iVar52 = iVar62 + iVar31;
   iVar57 = (int)local_58._16_8_ - (int)local_58._48_8_;
   iVar58 = SUB84(local_58._16_8_, 4) - SUB84(local_58._48_8_, 4);
   iVar55 = (int)local_58._24_8_ - (int)local_58._56_8_;
   iVar56 = SUB84(local_58._24_8_, 4) - SUB84(local_58._56_8_, 4);
   iVar28 = iVar28 - iVar61;
   iVar31 = iVar31 - iVar62;
   iVar61 = iVar5 + iVar53;
   iVar62 = iVar60 + iVar54;
   iVar53 = iVar53 - iVar5;
   iVar54 = iVar54 - iVar60;
   iVar5 = iVar35 >> 1;
   iVar60 = iVar52 >> 1;
   auVar37._0_8_ = CONCAT44(iVar60, iVar5);
   auVar39._8_4_ = 0;
   auVar39._0_8_ = auVar37._0_8_;
   sVar29 = (short)( iVar62 >> 0x11 );
   sVar32 = (short)( iVar52 >> 0x11 );
   uVar26 = ( undefined2 )(iVar62 >> 1);
   auVar38._8_2_ = 0;
   auVar38._0_8_ = auVar37._0_8_;
   uVar30 = (undefined2)iVar60;
   sVar27 = (short)( iVar61 >> 0x11 );
   auVar39._12_2_ = sVar32;
   auVar39._14_2_ = sVar29;
   auVar38._12_4_ = auVar39._12_4_;
   auVar38._10_2_ = uVar26;
   auVar37._10_6_ = auVar38._10_6_;
   auVar37._8_2_ = uVar30;
   auVar1._2_8_ = auVar37._8_8_;
   auVar1._0_2_ = sVar27;
   auVar1._10_6_ = 0;
   auVar36._12_4_ = 0;
   auVar36._0_12_ = SUB1612(auVar1 << 0x30, 4);
   auVar36 = auVar36 << 0x20;
   iVar62 = iVar33 + iVar55;
   iVar59 = iVar34 + iVar56;
   iVar33 = iVar33 - iVar55;
   iVar34 = iVar34 - iVar56;
   auVar43._0_12_ = auVar36._0_12_;
   auVar43._12_2_ = sVar27;
   auVar43._14_2_ = sVar29;
   auVar42._12_4_ = auVar43._12_4_;
   auVar42._0_10_ = auVar36._0_10_;
   auVar42._10_2_ = sVar32;
   auVar41._10_6_ = auVar42._10_6_;
   auVar41._0_8_ = auVar36._0_8_;
   auVar41._8_2_ = (short)( iVar35 >> 0x11 );
   auVar40._8_8_ = auVar41._8_8_;
   auVar40._6_2_ = uVar26;
   auVar40._4_2_ = (short)( iVar61 >> 1 );
   auVar40._2_2_ = uVar30;
   auVar40._0_2_ = (short)iVar5;
   *param_2 = auVar40._0_8_;
   iVar35 = iVar9 - iVar57;
   iVar52 = iVar8 - iVar58;
   iVar9 = iVar9 + iVar57;
   iVar8 = iVar8 + iVar58;
   iVar5 = iVar35 >> 1;
   iVar60 = iVar52 >> 1;
   auVar11._0_8_ = CONCAT44(iVar60, iVar5);
   auVar13._8_4_ = 0;
   auVar13._0_8_ = auVar11._0_8_;
   iVar55 = iVar9 >> 1;
   iVar56 = iVar8 >> 1;
   auVar45._0_8_ = CONCAT44(iVar56, iVar55);
   auVar47._8_4_ = 0;
   auVar47._0_8_ = auVar45._0_8_;
   sVar32 = (short)( iVar59 >> 0x11 );
   sVar27 = (short)( iVar8 >> 0x11 );
   auVar47._12_2_ = sVar27;
   auVar47._14_2_ = sVar32;
   auVar46._12_4_ = auVar47._12_4_;
   auVar46._8_2_ = 0;
   auVar46._0_8_ = auVar45._0_8_;
   uVar30 = ( undefined2 )(iVar59 >> 1);
   auVar46._10_2_ = uVar30;
   uVar26 = (undefined2)iVar56;
   auVar45._10_6_ = auVar46._10_6_;
   auVar45._8_2_ = uVar26;
   sVar29 = (short)( iVar62 >> 0x11 );
   auVar2._2_8_ = auVar45._8_8_;
   auVar2._0_2_ = sVar29;
   auVar2._10_6_ = 0;
   auVar48._0_2_ = (undefined2)iVar55;
   auVar44._12_4_ = 0;
   auVar44._0_12_ = SUB1612(auVar2 << 0x30, 4);
   auVar44 = auVar44 << 0x20;
   auVar51._0_12_ = auVar44._0_12_;
   auVar51._12_2_ = sVar29;
   auVar51._14_2_ = sVar32;
   auVar50._12_4_ = auVar51._12_4_;
   auVar50._0_10_ = auVar44._0_10_;
   auVar50._10_2_ = sVar27;
   auVar49._10_6_ = auVar50._10_6_;
   auVar49._0_8_ = auVar44._0_8_;
   auVar49._8_2_ = (short)( iVar9 >> 0x11 );
   auVar48._8_8_ = auVar49._8_8_;
   auVar48._6_2_ = uVar30;
   auVar48._4_2_ = (short)( iVar62 >> 1 );
   auVar48._2_2_ = uVar26;
   param_2[1] = auVar48._0_8_;
   sVar32 = (short)( iVar34 >> 0x11 );
   sVar27 = (short)( iVar52 >> 0x11 );
   auVar13._12_2_ = sVar27;
   auVar13._14_2_ = sVar32;
   auVar12._12_4_ = auVar13._12_4_;
   auVar12._8_2_ = 0;
   auVar12._0_8_ = auVar11._0_8_;
   uVar30 = ( undefined2 )(iVar34 >> 1);
   auVar12._10_2_ = uVar30;
   uVar26 = (undefined2)iVar60;
   auVar11._10_6_ = auVar12._10_6_;
   auVar11._8_2_ = uVar26;
   sVar29 = (short)( iVar33 >> 0x11 );
   auVar3._2_8_ = auVar11._8_8_;
   auVar3._0_2_ = sVar29;
   auVar3._10_6_ = 0;
   auVar14._0_2_ = (undefined2)iVar5;
   auVar10._12_4_ = 0;
   auVar10._0_12_ = SUB1612(auVar3 << 0x30, 4);
   auVar10 = auVar10 << 0x20;
   auVar17._0_12_ = auVar10._0_12_;
   auVar17._12_2_ = sVar29;
   auVar17._14_2_ = sVar32;
   auVar16._12_4_ = auVar17._12_4_;
   auVar16._0_10_ = auVar10._0_10_;
   auVar16._10_2_ = sVar27;
   auVar15._10_6_ = auVar16._10_6_;
   auVar15._0_8_ = auVar10._0_8_;
   auVar15._8_2_ = (short)( iVar35 >> 0x11 );
   auVar14._8_8_ = auVar15._8_8_;
   auVar14._6_2_ = uVar30;
   auVar14._4_2_ = (short)( iVar33 >> 1 );
   auVar14._2_2_ = uVar26;
   param_2[2] = auVar14._0_8_;
   iVar9 = iVar28 >> 1;
   iVar35 = iVar31 >> 1;
   auVar19._0_8_ = CONCAT44(iVar35, iVar9);
   auVar21._8_4_ = 0;
   auVar21._0_8_ = auVar19._0_8_;
   sVar32 = (short)( iVar54 >> 0x11 );
   sVar27 = (short)( iVar31 >> 0x11 );
   auVar21._12_2_ = sVar27;
   auVar21._14_2_ = sVar32;
   auVar20._12_4_ = auVar21._12_4_;
   auVar20._8_2_ = 0;
   auVar20._0_8_ = auVar19._0_8_;
   uVar30 = ( undefined2 )(iVar54 >> 1);
   auVar20._10_2_ = uVar30;
   uVar26 = (undefined2)iVar35;
   auVar19._10_6_ = auVar20._10_6_;
   auVar19._8_2_ = uVar26;
   sVar29 = (short)( iVar53 >> 0x11 );
   auVar4._2_8_ = auVar19._8_8_;
   auVar4._0_2_ = sVar29;
   auVar4._10_6_ = 0;
   auVar22._0_2_ = (undefined2)iVar9;
   auVar18._12_4_ = 0;
   auVar18._0_12_ = SUB1612(auVar4 << 0x30, 4);
   auVar18 = auVar18 << 0x20;
   auVar25._0_12_ = auVar18._0_12_;
   auVar25._12_2_ = sVar29;
   auVar25._14_2_ = sVar32;
   auVar24._12_4_ = auVar25._12_4_;
   auVar24._0_10_ = auVar18._0_10_;
   auVar24._10_2_ = sVar27;
   auVar23._10_6_ = auVar24._10_6_;
   auVar23._0_8_ = auVar18._0_8_;
   auVar23._8_2_ = (short)( iVar28 >> 0x11 );
   auVar22._8_8_ = auVar23._8_8_;
   auVar22._6_2_ = uVar30;
   auVar22._4_2_ = (short)( iVar53 >> 1 );
   auVar22._2_2_ = uVar26;
   param_2[3] = auVar22._0_8_;
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
int SSE16x8_C(long param_1, long param_2) {
   undefined1 auVar1[15];
   undefined1 auVar2[15];
   undefined1 auVar3[15];
   undefined1 auVar4[15];
   undefined1 auVar5[15];
   undefined1 auVar6[15];
   undefined1 auVar7[15];
   undefined1 auVar8[15];
   undefined1 auVar9[15];
   undefined1 auVar10[15];
   undefined1 auVar11[15];
   undefined1 auVar12[15];
   undefined1 auVar13[15];
   undefined1 auVar14[15];
   unkuint9 Var15;
   undefined1 auVar16[11];
   undefined1 auVar17[13];
   undefined1 auVar18[15];
   unkuint9 Var19;
   undefined1 auVar20[11];
   undefined1 auVar21[15];
   undefined1 auVar22[15];
   undefined1 auVar23[15];
   undefined1 auVar24[15];
   int iVar25;
   long lVar26;
   undefined1 auVar27[16];
   undefined1 auVar28[16];
   undefined1 auVar29[16];
   undefined1 auVar30[16];
   lVar26 = 0;
   iVar25 = 0;
   do {
      auVar28 = *(undefined1(*) [16])( param_1 + lVar26 );
      auVar30 = *(undefined1(*) [16])( param_2 + lVar26 );
      lVar26 = lVar26 + 0x20;
      auVar2[0xd] = 0;
      auVar2._0_13_ = auVar28._0_13_;
      auVar2[0xe] = auVar28[7];
      auVar4[0xc] = auVar28[6];
      auVar4._0_12_ = auVar28._0_12_;
      auVar4._13_2_ = auVar2._13_2_;
      auVar6[0xb] = 0;
      auVar6._0_11_ = auVar28._0_11_;
      auVar6._12_3_ = auVar4._12_3_;
      auVar8[10] = auVar28[5];
      auVar8._0_10_ = auVar28._0_10_;
      auVar8._11_4_ = auVar6._11_4_;
      auVar10[9] = 0;
      auVar10._0_9_ = auVar28._0_9_;
      auVar10._10_5_ = auVar8._10_5_;
      auVar12[8] = auVar28[4];
      auVar12._0_8_ = auVar28._0_8_;
      auVar12._9_6_ = auVar10._9_6_;
      auVar14._7_8_ = 0;
      auVar14._0_7_ = auVar12._8_7_;
      Var15 = CONCAT81(SUB158(auVar14 << 0x40, 7), auVar28[3]);
      auVar21._9_6_ = 0;
      auVar21._0_9_ = Var15;
      auVar16._1_10_ = SUB1510(auVar21 << 0x30, 5);
      auVar16[0] = auVar28[2];
      auVar22._11_4_ = 0;
      auVar22._0_11_ = auVar16;
      auVar17._1_12_ = SUB1512(auVar22 << 0x20, 3);
      auVar17[0] = auVar28[1];
      auVar1[0xd] = 0;
      auVar1._0_13_ = auVar30._0_13_;
      auVar1[0xe] = auVar30[7];
      auVar3[0xc] = auVar30[6];
      auVar3._0_12_ = auVar30._0_12_;
      auVar3._13_2_ = auVar1._13_2_;
      auVar5[0xb] = 0;
      auVar5._0_11_ = auVar30._0_11_;
      auVar5._12_3_ = auVar3._12_3_;
      auVar7[10] = auVar30[5];
      auVar7._0_10_ = auVar30._0_10_;
      auVar7._11_4_ = auVar5._11_4_;
      auVar9[9] = 0;
      auVar9._0_9_ = auVar30._0_9_;
      auVar9._10_5_ = auVar7._10_5_;
      auVar11[8] = auVar30[4];
      auVar11._0_8_ = auVar30._0_8_;
      auVar11._9_6_ = auVar9._9_6_;
      auVar18._7_8_ = 0;
      auVar18._0_7_ = auVar11._8_7_;
      Var19 = CONCAT81(SUB158(auVar18 << 0x40, 7), auVar30[3]);
      auVar23._9_6_ = 0;
      auVar23._0_9_ = Var19;
      auVar20._1_10_ = SUB1510(auVar23 << 0x30, 5);
      auVar20[0] = auVar30[2];
      auVar24._11_4_ = 0;
      auVar24._0_11_ = auVar20;
      auVar13[2] = auVar30[1];
      auVar13._0_2_ = auVar30._0_2_;
      auVar13._3_12_ = SUB1512(auVar24 << 0x20, 3);
      auVar27._0_2_ = (ushort)auVar28[0] - ( auVar30._0_2_ & 0xff );
      auVar27._2_2_ = auVar17._0_2_ - auVar13._2_2_;
      auVar27._4_2_ = auVar16._0_2_ - auVar20._0_2_;
      auVar27._6_2_ = (short)Var15 - (short)Var19;
      auVar27._8_2_ = auVar12._8_2_ - auVar11._8_2_;
      auVar27._10_2_ = auVar8._10_2_ - auVar7._10_2_;
      auVar27._12_2_ = auVar4._12_2_ - auVar3._12_2_;
      auVar27._14_2_ = ( auVar2._13_2_ >> 8 ) - ( auVar1._13_2_ >> 8 );
      auVar29._0_2_ = (ushort)auVar28[8] - (ushort)auVar30[8];
      auVar29._2_2_ = (ushort)auVar28[9] - (ushort)auVar30[9];
      auVar29._4_2_ = (ushort)auVar28[10] - (ushort)auVar30[10];
      auVar29._6_2_ = (ushort)auVar28[0xb] - (ushort)auVar30[0xb];
      auVar29._8_2_ = (ushort)auVar28[0xc] - (ushort)auVar30[0xc];
      auVar29._10_2_ = (ushort)auVar28[0xd] - (ushort)auVar30[0xd];
      auVar29._12_2_ = (ushort)auVar28[0xe] - (ushort)auVar30[0xe];
      auVar29._14_2_ = (ushort)auVar28[0xf] - (ushort)auVar30[0xf];
      auVar30 = pmaddwd(auVar29, auVar29);
      auVar28 = pmaddwd(auVar27, auVar27);
      iVar25 = iVar25 + auVar28._0_4_ + auVar30._0_4_ + auVar28._8_4_ + auVar30._8_4_ + auVar28._4_4_ + auVar30._4_4_ + auVar28._12_4_ + auVar30._12_4_;
   }
 while ( lVar26 != 0x100 );
   return iVar25;
}
void Mean16x4_C(byte *param_1, int *param_2) {
   byte *pbVar1;
   byte *pbVar2;
   byte *pbVar3;
   int iVar4;
   byte *pbVar5;
   long lVar6;
   pbVar1 = param_1 + 0x10;
   do {
      param_1 = param_1 + 4;
      lVar6 = 0;
      iVar4 = 0;
      pbVar5 = param_1;
      do {
         pbVar2 = pbVar5 + -4;
         do {
            pbVar3 = pbVar2;
            iVar4 = iVar4 + ( uint ) * pbVar3;
            pbVar2 = pbVar3 + 1;
         }
 while ( pbVar3 + 1 != pbVar5 );
         lVar6 = lVar6 + 0x20;
         pbVar5 = pbVar3 + 0x21;
      }
 while ( lVar6 != 0x80 );
      *param_2 = iVar4;
      param_2 = param_2 + 1;
   }
 while ( param_1 != pbVar1 );
   return;
}
int TTransform(byte *param_1, ushort *param_2) {
   ushort *puVar1;
   ushort *puVar2;
   ushort *puVar3;
   ushort uVar4;
   int iVar5;
   int iVar6;
   int iVar7;
   int *piVar8;
   int *piVar9;
   int iVar10;
   int iVar11;
   int iVar12;
   int *piVar13;
   int iVar14;
   int iVar15;
   long in_FS_OFFSET;
   int local_68[18];
   long local_20;
   piVar13 = local_68;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   piVar8 = local_68;
   do {
      piVar9 = piVar8 + 4;
      iVar14 = ( uint ) * param_1 + (uint)param_1[2];
      iVar6 = ( uint ) * param_1 - (uint)param_1[2];
      iVar15 = (uint)param_1[1] + (uint)param_1[3];
      iVar11 = (uint)param_1[1] - (uint)param_1[3];
      *piVar8 = iVar14 + iVar15;
      piVar8[1] = iVar11 + iVar6;
      piVar8[2] = iVar6 - iVar11;
      piVar8[3] = iVar14 - iVar15;
      param_1 = param_1 + 0x20;
      piVar8 = piVar9;
   }
 while ( local_68 + 0x10 != piVar9 );
   iVar6 = 0;
   do {
      iVar11 = *piVar13 + piVar13[8];
      iVar14 = piVar13[4] + piVar13[0xc];
      iVar10 = piVar13[4] - piVar13[0xc];
      iVar7 = *piVar13 - piVar13[8];
      iVar12 = iVar11 + iVar14;
      iVar15 = -iVar12;
      if (0 < iVar12) {
         iVar15 = iVar12;
      }

      uVar4 = *param_2;
      iVar12 = iVar10 + iVar7;
      iVar5 = -iVar12;
      if (0 < iVar12) {
         iVar5 = iVar12;
      }

      puVar1 = param_2 + 4;
      iVar7 = iVar7 - iVar10;
      puVar2 = param_2 + 8;
      if (iVar7 < 1) {
         iVar7 = -iVar7;
      }

      iVar11 = iVar11 - iVar14;
      puVar3 = param_2 + 0xc;
      iVar14 = -iVar11;
      if (0 < iVar11) {
         iVar14 = iVar11;
      }

      piVar13 = piVar13 + 1;
      param_2 = param_2 + 1;
      iVar6 = iVar14 * ( uint ) * puVar3 + iVar7 * ( uint ) * puVar2 + iVar5 * ( uint ) * puVar1 + iVar15 * (uint)uVar4 + iVar6;
   }
 while ( local_68 + 4 != piVar13 );
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar6;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
int Disto4x4_C(undefined8 param_1, undefined8 param_2, undefined8 param_3) {
   int iVar1;
   int iVar2;
   iVar1 = TTransform(param_1, param_3);
   iVar2 = TTransform(param_2, param_3);
   iVar2 = iVar2 - iVar1;
   iVar1 = -iVar2;
   if (0 < iVar2) {
      iVar1 = iVar2;
   }

   return iVar1 >> 5;
}
uint QuantizeBlock_C(long param_1, long param_2, long param_3) {
   short *psVar1;
   short sVar2;
   short sVar3;
   int iVar4;
   uint uVar5;
   uint uVar6;
   ulong uVar7;
   short *psVar8;
   ulong uVar9;
   ulong uVar10;
   uVar9 = 0xffffffff;
   uVar7 = 0;
   do {
      while (true) {
         uVar10 = uVar7;
         uVar7 = ( ulong )(byte)(&kZigzag)[uVar10];
         psVar1 = (short*)( param_1 + uVar7 * 2 );
         sVar2 = *psVar1;
         iVar4 = (int)sVar2;
         if (sVar2 < 0) {
            iVar4 = -(int)sVar2;
         }

         psVar8 = (short*)( uVar7 * 2 + param_3 );
         if (*(uint*)( param_3 + 0x80 + uVar7 * 4 ) < iVar4 + (uint)(ushort)psVar8[0x60]) break;
         *(undefined2*)( param_2 + uVar10 * 2 ) = 0;
         *psVar1 = 0;
         LAB_00100dc5:uVar7 = uVar10 + 1;
         if (uVar10 + 1 == 0x10) {
            return ~(uint)uVar9 >> 0x1f;
         }

      }
;
      sVar3 = *psVar8;
      uVar6 = (uint)(ushort)psVar8[0x10] * ( iVar4 + (uint)(ushort)psVar8[0x60] ) + *(int*)( param_3 + 0x40 + uVar7 * 4 );
      uVar5 = uVar6 >> 0x11;
      if (uVar6 < 0x10000000) {
         uVar6 = -uVar5;
         if (-1 < sVar2) {
            uVar6 = uVar5;
         }

         *psVar1 = sVar3 * (short)uVar6;
         *(short*)( param_2 + uVar10 * 2 ) = (short)uVar6;
         if (uVar6 == 0) goto LAB_00100dc5;
      }
 else if (sVar2 < 0) {
         *psVar1 = sVar3 * -0x7ff;
         *(undefined2*)( param_2 + uVar10 * 2 ) = 0xf801;
      }
 else {
         *psVar1 = sVar3 * 0x7ff;
         *(undefined2*)( param_2 + uVar10 * 2 ) = 0x7ff;
      }

      uVar9 = uVar10 & 0xffffffff;
      uVar7 = uVar10 + 1;
      if (uVar10 + 1 == 0x10) {
         return ~(uint)uVar10 >> 0x1f;
      }

   }
 while ( true );
}
uint Quantize2Blocks_C(long param_1, long param_2, undefined8 param_3) {
   uint uVar1;
   int iVar2;
   uVar1 = ( *VP8EncQuantizeBlock )();
   iVar2 = ( *VP8EncQuantizeBlock )(param_1 + 0x20, param_2 + 0x20, param_3);
   return iVar2 * 2 | uVar1;
}
void Copy4x4_C(long param_1, long param_2) {
   long lVar1;
   lVar1 = 0;
   do {
      *(undefined4*)( param_2 + lVar1 ) = *(undefined4*)( param_1 + lVar1 );
      lVar1 = lVar1 + 0x20;
   }
 while ( lVar1 != 0x80 );
   return;
}
void ITransform_C(long param_1, long param_2, long param_3, int param_4) {
   ITransformOne();
   if (param_4 == 0) {
      return;
   }

   ITransformOne(param_1 + 4, param_2 + 0x20, param_3 + 4);
   return;
}
void Copy16x8_C(long param_1, long param_2) {
   undefined8 uVar1;
   long lVar2;
   lVar2 = 0;
   do {
      uVar1 = ( (undefined8*)( param_1 + lVar2 ) )[1];
      *(undefined8*)( param_2 + lVar2 ) = *(undefined8*)( param_1 + lVar2 );
      ( (undefined8*)( param_2 + lVar2 ) )[1] = uVar1;
      lVar2 = lVar2 + 0x20;
   }
 while ( lVar2 != 0x100 );
   return;
}
int Disto16x16_C(long param_1, long param_2, undefined8 param_3) {
   int iVar1;
   int iVar2;
   long lVar3;
   int iVar4;
   long lVar5;
   long lVar6;
   undefined8 local_50;
   lVar5 = param_1 + 0x10;
   iVar4 = 0;
   local_50 = 0;
   do {
      lVar6 = param_1 + local_50;
      lVar3 = param_2 + local_50;
      do {
         iVar1 = TTransform(lVar6, param_3);
         iVar2 = TTransform(lVar3, param_3);
         iVar2 = iVar2 - iVar1;
         iVar1 = -iVar2;
         if (0 < iVar2) {
            iVar1 = iVar2;
         }

         lVar6 = lVar6 + 4;
         lVar3 = lVar3 + 4;
         iVar4 = iVar4 + ( iVar1 >> 5 );
      }
 while ( lVar5 != lVar6 );
      local_50 = local_50 + 0x80;
      lVar5 = lVar5 + 0x80;
   }
 while ( local_50 != 0x200 );
   return iVar4;
}
int SSE8x8_C(long param_1, long param_2) {
   long lVar1;
   byte *pbVar2;
   byte *pbVar3;
   int iVar4;
   int iVar5;
   long lVar6;
   lVar1 = param_1 + 0x100;
   iVar5 = 0;
   do {
      lVar6 = 0;
      do {
         pbVar2 = (byte*)( param_1 + lVar6 );
         pbVar3 = (byte*)( param_2 + lVar6 );
         lVar6 = lVar6 + 1;
         iVar4 = ( uint ) * pbVar2 - ( uint ) * pbVar3;
         iVar5 = iVar5 + iVar4 * iVar4;
      }
 while ( lVar6 != 8 );
      param_1 = param_1 + 0x20;
      param_2 = param_2 + 0x20;
   }
 while ( param_1 != lVar1 );
   return iVar5;
}
int SSE4x4_C(long param_1, long param_2) {
   long lVar1;
   byte *pbVar2;
   byte *pbVar3;
   int iVar4;
   int iVar5;
   long lVar6;
   lVar1 = param_1 + 0x80;
   iVar5 = 0;
   do {
      lVar6 = 0;
      do {
         pbVar2 = (byte*)( param_1 + lVar6 );
         pbVar3 = (byte*)( param_2 + lVar6 );
         lVar6 = lVar6 + 1;
         iVar4 = ( uint ) * pbVar2 - ( uint ) * pbVar3;
         iVar5 = iVar5 + iVar4 * iVar4;
      }
 while ( lVar6 != 4 );
      param_1 = param_1 + 0x20;
      param_2 = param_2 + 0x20;
   }
 while ( param_1 != lVar1 );
   return iVar5;
}
int SSE16x16_C(long param_1, long param_2) {
   undefined1 auVar1[15];
   undefined1 auVar2[15];
   undefined1 auVar3[15];
   undefined1 auVar4[15];
   undefined1 auVar5[15];
   undefined1 auVar6[15];
   undefined1 auVar7[15];
   undefined1 auVar8[15];
   undefined1 auVar9[15];
   undefined1 auVar10[15];
   undefined1 auVar11[15];
   undefined1 auVar12[15];
   undefined1 auVar13[15];
   undefined1 auVar14[15];
   unkuint9 Var15;
   undefined1 auVar16[11];
   undefined1 auVar17[13];
   undefined1 auVar18[15];
   unkuint9 Var19;
   undefined1 auVar20[11];
   undefined1 auVar21[15];
   undefined1 auVar22[15];
   undefined1 auVar23[15];
   undefined1 auVar24[15];
   int iVar25;
   long lVar26;
   undefined1 auVar27[16];
   undefined1 auVar28[16];
   undefined1 auVar29[16];
   undefined1 auVar30[16];
   lVar26 = 0;
   iVar25 = 0;
   do {
      auVar28 = *(undefined1(*) [16])( param_1 + lVar26 );
      auVar30 = *(undefined1(*) [16])( param_2 + lVar26 );
      lVar26 = lVar26 + 0x20;
      auVar2[0xd] = 0;
      auVar2._0_13_ = auVar28._0_13_;
      auVar2[0xe] = auVar28[7];
      auVar4[0xc] = auVar28[6];
      auVar4._0_12_ = auVar28._0_12_;
      auVar4._13_2_ = auVar2._13_2_;
      auVar6[0xb] = 0;
      auVar6._0_11_ = auVar28._0_11_;
      auVar6._12_3_ = auVar4._12_3_;
      auVar8[10] = auVar28[5];
      auVar8._0_10_ = auVar28._0_10_;
      auVar8._11_4_ = auVar6._11_4_;
      auVar10[9] = 0;
      auVar10._0_9_ = auVar28._0_9_;
      auVar10._10_5_ = auVar8._10_5_;
      auVar12[8] = auVar28[4];
      auVar12._0_8_ = auVar28._0_8_;
      auVar12._9_6_ = auVar10._9_6_;
      auVar14._7_8_ = 0;
      auVar14._0_7_ = auVar12._8_7_;
      Var15 = CONCAT81(SUB158(auVar14 << 0x40, 7), auVar28[3]);
      auVar21._9_6_ = 0;
      auVar21._0_9_ = Var15;
      auVar16._1_10_ = SUB1510(auVar21 << 0x30, 5);
      auVar16[0] = auVar28[2];
      auVar22._11_4_ = 0;
      auVar22._0_11_ = auVar16;
      auVar17._1_12_ = SUB1512(auVar22 << 0x20, 3);
      auVar17[0] = auVar28[1];
      auVar1[0xd] = 0;
      auVar1._0_13_ = auVar30._0_13_;
      auVar1[0xe] = auVar30[7];
      auVar3[0xc] = auVar30[6];
      auVar3._0_12_ = auVar30._0_12_;
      auVar3._13_2_ = auVar1._13_2_;
      auVar5[0xb] = 0;
      auVar5._0_11_ = auVar30._0_11_;
      auVar5._12_3_ = auVar3._12_3_;
      auVar7[10] = auVar30[5];
      auVar7._0_10_ = auVar30._0_10_;
      auVar7._11_4_ = auVar5._11_4_;
      auVar9[9] = 0;
      auVar9._0_9_ = auVar30._0_9_;
      auVar9._10_5_ = auVar7._10_5_;
      auVar11[8] = auVar30[4];
      auVar11._0_8_ = auVar30._0_8_;
      auVar11._9_6_ = auVar9._9_6_;
      auVar18._7_8_ = 0;
      auVar18._0_7_ = auVar11._8_7_;
      Var19 = CONCAT81(SUB158(auVar18 << 0x40, 7), auVar30[3]);
      auVar23._9_6_ = 0;
      auVar23._0_9_ = Var19;
      auVar20._1_10_ = SUB1510(auVar23 << 0x30, 5);
      auVar20[0] = auVar30[2];
      auVar24._11_4_ = 0;
      auVar24._0_11_ = auVar20;
      auVar13[2] = auVar30[1];
      auVar13._0_2_ = auVar30._0_2_;
      auVar13._3_12_ = SUB1512(auVar24 << 0x20, 3);
      auVar27._0_2_ = (ushort)auVar28[0] - ( auVar30._0_2_ & 0xff );
      auVar27._2_2_ = auVar17._0_2_ - auVar13._2_2_;
      auVar27._4_2_ = auVar16._0_2_ - auVar20._0_2_;
      auVar27._6_2_ = (short)Var15 - (short)Var19;
      auVar27._8_2_ = auVar12._8_2_ - auVar11._8_2_;
      auVar27._10_2_ = auVar8._10_2_ - auVar7._10_2_;
      auVar27._12_2_ = auVar4._12_2_ - auVar3._12_2_;
      auVar27._14_2_ = ( auVar2._13_2_ >> 8 ) - ( auVar1._13_2_ >> 8 );
      auVar29._0_2_ = (ushort)auVar28[8] - (ushort)auVar30[8];
      auVar29._2_2_ = (ushort)auVar28[9] - (ushort)auVar30[9];
      auVar29._4_2_ = (ushort)auVar28[10] - (ushort)auVar30[10];
      auVar29._6_2_ = (ushort)auVar28[0xb] - (ushort)auVar30[0xb];
      auVar29._8_2_ = (ushort)auVar28[0xc] - (ushort)auVar30[0xc];
      auVar29._10_2_ = (ushort)auVar28[0xd] - (ushort)auVar30[0xd];
      auVar29._12_2_ = (ushort)auVar28[0xe] - (ushort)auVar30[0xe];
      auVar29._14_2_ = (ushort)auVar28[0xf] - (ushort)auVar30[0xf];
      auVar30 = pmaddwd(auVar29, auVar29);
      auVar28 = pmaddwd(auVar27, auVar27);
      iVar25 = iVar25 + auVar28._0_4_ + auVar30._0_4_ + auVar28._8_4_ + auVar30._8_4_ + auVar28._4_4_ + auVar30._4_4_ + auVar28._12_4_ + auVar30._12_4_;
   }
 while ( lVar26 != 0x200 );
   return iVar25;
}
void CollectHistogram_C(long param_1, long param_2, int param_3, int param_4, int *param_5) {
   ushort uVar1;
   int iVar2;
   ushort uVar3;
   uint uVar4;
   ulong uVar5;
   int iVar6;
   long lVar7;
   ushort *puVar8;
   ulong uVar9;
   int *piVar10;
   long in_FS_OFFSET;
   ushort local_e8[16];
   ushort local_c8[68];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   puVar8 = local_c8;
   for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
      for (int i = 0; i < 4; i++) {
         puVar8[i] = 0;
      }

      puVar8 = puVar8 + 4;
   }

   if (param_3 < param_4) {
      piVar10 = (int*)( VP8DspScan + (long)param_3 * 4 );
      do {
         ( *VP8FTransform )(*piVar10 + param_1, param_2 + *piVar10, local_e8);
         puVar8 = local_e8;
         do {
            uVar1 = *puVar8;
            uVar3 = -uVar1;
            if (0 < (short)uVar1) {
               uVar3 = uVar1;
            }

            uVar4 = (int)(uint)uVar3 >> 3;
            if (0x1f < uVar4) {
               uVar4 = 0x1f;
            }

            puVar8 = puVar8 + 1;
            *(int*)( local_c8 + (long)(int)uVar4 * 2 ) = *(int*)( local_c8 + (long)(int)uVar4 * 2 ) + 1;
         }
 while ( local_c8 != puVar8 );
         piVar10 = piVar10 + 1;
      }
 while ( piVar10 != (int*)( VP8DspScan + ( (long)param_3 + ( ulong )(uint)(param_4 - param_3) ) * 4 ) );
   }

   uVar5 = 0;
   uVar9 = 1;
   iVar6 = 0;
   do {
      iVar2 = *(int*)( local_c8 + uVar5 * 2 );
      if (( 0 < iVar2 ) && ( uVar9 = iVar6 < iVar2 )) {
         iVar6 = iVar2;
      }

      uVar5 = uVar5 + 1;
   }
 while ( uVar5 != 0x20 );
   *param_5 = iVar6;
   param_5[1] = (int)uVar9;
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void Intra4Preds_C(long param_1, byte *param_2) {
   byte *pbVar1;
   undefined4 uVar2;
   undefined4 uVar3;
   undefined4 uVar4;
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   uint6 uVar12;
   ulong uVar13;
   undefined1 auVar14[11];
   undefined1 auVar15[13];
   undefined1 uVar16;
   uint uVar17;
   int *piVar18;
   long lVar19;
   int iVar20;
   byte *pbVar21;
   undefined1 uVar22;
   uint uVar23;
   long lVar24;
   uint uVar25;
   uint uVar26;
   uint uVar27;
   int iVar28;
   ushort uVar29;
   ushort uVar42;
   ushort uVar44;
   ushort uVar45;
   undefined1 auVar30[16];
   ushort uVar46;
   undefined1 auVar31[16];
   undefined1 auVar34[16];
   undefined1 auVar41[16];
   ushort uVar47;
   ushort uVar48;
   byte bVar49;
   ushort uVar50;
   ushort uVar51;
   byte bVar54;
   undefined1 uVar55;
   byte bVar56;
   undefined1 auVar52[16];
   undefined1 auVar53[16];
   byte bVar57;
   byte bVar58;
   byte bVar59;
   byte bVar60;
   byte bVar61;
   byte bVar62;
   undefined1 auVar35[16];
   undefined1 auVar36[16];
   undefined1 auVar32[16];
   undefined1 auVar37[16];
   undefined1 auVar38[16];
   undefined1 auVar33[16];
   undefined1 auVar39[16];
   undefined1 auVar40[16];
   undefined1 uVar43;
   uVar17 = 4;
   pbVar21 = param_2;
   do {
      bVar49 = *pbVar21;
      pbVar1 = pbVar21 + -5;
      pbVar21 = pbVar21 + 1;
      uVar17 = uVar17 + (uint)bVar49 + ( uint ) * pbVar1;
   }
 while ( param_2 + 4 != pbVar21 );
   piVar18 = (int*)( param_1 + 0x600 );
   do {
      *piVar18 = ( uVar17 >> 3 & 0xff ) * 0x1010101;
      piVar18 = piVar18 + 8;
   }
 while ( (int*)( param_1 + 0x680 ) != piVar18 );
   bVar49 = param_2[-1];
   pbVar21 = param_2 + -2;
   lVar24 = param_1 + 0x604;
   do {
      bVar54 = *pbVar21;
      lVar19 = 0;
      do {
         *(undefined*)( lVar24 + lVar19 ) = ( &DAT_0010271f )[(ulong)param_2[lVar19] + ( (ulong)bVar54 - (ulong)bVar49 )];
         lVar19 = lVar19 + 1;
      }
 while ( lVar19 != 4 );
      pbVar21 = pbVar21 + -1;
      lVar24 = lVar24 + 0x20;
   }
 while ( param_2 + -6 != pbVar21 );
   uVar2 = *(undefined4*)param_2;
   uVar3 = *(undefined4*)( param_2 + -1 );
   uVar4 = *(undefined4*)( param_2 + 1 );
   bVar56 = ( byte )((uint)uVar2 >> 0x18);
   bVar54 = ( byte )((uint)uVar2 >> 0x10);
   bVar49 = ( byte )((uint)uVar2 >> 8);
   bVar59 = ( byte )((uint)uVar3 >> 0x18);
   bVar58 = ( byte )((uint)uVar3 >> 0x10);
   bVar57 = ( byte )((uint)uVar3 >> 8);
   bVar62 = ( byte )((uint)uVar4 >> 0x18);
   bVar61 = ( byte )((uint)uVar4 >> 0x10);
   bVar60 = ( byte )((uint)uVar4 >> 8);
   auVar52._0_2_ = (ushort)bVar54 + (short)_LC4;
   auVar52._2_2_ = (ushort)bVar56 + _LC4._2_2_;
   auVar52[4] = (char)uVar2;
   auVar52[5] = 0;
   auVar52[6] = bVar49;
   auVar52[7] = 0;
   auVar52[8] = (char)uVar2;
   auVar52[9] = 0;
   auVar52[10] = bVar49;
   auVar52[0xb] = 0;
   auVar52[0xc] = bVar54;
   auVar52[0xd] = 0;
   auVar52[0xe] = bVar56;
   auVar52[0xf] = 0;
   auVar30 = psllw(ZEXT716(CONCAT16(bVar56, (uint6)CONCAT14(bVar54, CONCAT22((ushort)bVar49 + _LC4._2_2_, ( (ushort)uVar2 & 0xff ) + (short)_LC4)))), 1);
   auVar53 = psllw(auVar52, 1);
   uVar29 = auVar30._0_2_ + ( (ushort)uVar3 & 0xff ) + ( (ushort)uVar4 & 0xff );
   uVar42 = auVar30._2_2_ + (ushort)bVar57 + (ushort)bVar60;
   uVar44 = auVar30._4_2_ + (ushort)bVar58 + (ushort)bVar61;
   uVar45 = auVar30._6_2_ + (ushort)bVar59 + (ushort)bVar62;
   uVar47 = (ushort)bVar58 + (ushort)bVar61 + auVar53._0_2_;
   uVar48 = (ushort)bVar59 + (ushort)bVar62 + auVar53._2_2_;
   uVar50 = ( (ushort)uVar3 & 0xff ) + ( (ushort)uVar4 & 0xff ) + auVar53._4_2_;
   uVar51 = (ushort)bVar57 + (ushort)bVar60 + auVar53._6_2_;
   uVar46 = uVar45 >> 2;
   uVar17 = CONCAT22(auVar30._8_2_ >> 2, uVar46);
   uVar12 = CONCAT24(auVar30._10_2_ >> 2, uVar17);
   auVar14._6_5_ = 0;
   auVar14._0_6_ = uVar12;
   uVar13 = CONCAT26(auVar30._12_2_ >> 2, uVar12);
   auVar15._8_5_ = 0;
   auVar15._0_8_ = uVar13;
   bVar49 = ( byte )(uVar48 >> 10);
   uVar22 = ( undefined1 )(uVar48 >> 2);
   uVar55 = ( undefined1 )(uVar42 >> 2);
   uVar16 = ( undefined1 )(uVar47 >> 2);
   uVar43 = ( undefined1 )(uVar29 >> 2);
   auVar33._14_2_ = ( undefined2 )(CONCAT19(( byte )(uVar51 >> 10), CONCAT18(( byte )(uVar45 >> 10), uVar13)) >> 0x40);
   auVar33[0xd] = (char)( uVar51 >> 2 );
   auVar33._0_13_ = auVar15 << 0x30;
   auVar32._12_4_ = ( undefined4 )(CONCAT37(auVar33._13_3_, CONCAT16((char)uVar46, uVar12)) >> 0x30);
   auVar32[0xb] = ( byte )(uVar50 >> 10);
   auVar32._0_11_ = auVar14 << 0x30;
   auVar31._10_6_ = ( undefined6 )(CONCAT55(auVar32._11_5_, CONCAT14(( byte )(uVar44 >> 10), uVar17)) >> 0x20);
   auVar31[9] = (char)( uVar50 >> 2 );
   auVar31._0_9_ = (unkuint9)uVar17 << 0x30;
   auVar8._1_8_ = (long)( CONCAT73(auVar31._9_7_, CONCAT12((char)( uVar44 >> 2 ), uVar46)) >> 0x10 );
   auVar8[0] = bVar49;
   auVar8._9_7_ = 0;
   auVar7._10_6_ = 0;
   auVar7._0_10_ = SUB1610(auVar8 << 0x38, 6);
   auVar6._11_5_ = 0;
   auVar6._0_11_ = SUB1611(auVar7 << 0x30, 5);
   auVar5._12_4_ = 0;
   auVar5._0_12_ = SUB1612(auVar6 << 0x28, 4);
   auVar53._13_3_ = 0;
   auVar53._0_13_ = SUB1613(auVar5 << 0x20, 3);
   auVar30._14_2_ = 0;
   auVar30._0_14_ = SUB1614(auVar53 << 0x18, 2);
   auVar30 = auVar30 << 0x10;
   auVar40._0_14_ = auVar30._0_14_;
   auVar40[0xe] = bVar49;
   auVar40[0xf] = ( byte )(uVar47 >> 10);
   auVar39._14_2_ = auVar40._14_2_;
   auVar39._0_13_ = auVar30._0_13_;
   auVar39[0xd] = ( byte )(uVar29 >> 10);
   auVar38._13_3_ = auVar39._13_3_;
   auVar38._0_12_ = auVar30._0_12_;
   auVar38[0xc] = ( byte )(uVar42 >> 10);
   auVar37._12_4_ = auVar38._12_4_;
   auVar37._0_11_ = auVar30._0_11_;
   auVar37[0xb] = uVar16;
   auVar36._11_5_ = auVar37._11_5_;
   auVar36._0_10_ = auVar30._0_10_;
   auVar36[10] = uVar22;
   auVar35._10_6_ = auVar36._10_6_;
   auVar35._0_9_ = auVar30._0_9_;
   auVar35[9] = uVar43;
   auVar11._2_7_ = auVar35._9_7_;
   auVar11[1] = uVar55;
   auVar11[0] = bVar49;
   auVar11._9_7_ = 0;
   auVar10._10_6_ = 0;
   auVar10._0_10_ = SUB1610(auVar11 << 0x38, 6);
   auVar9._11_5_ = 0;
   auVar9._0_11_ = SUB1611(auVar10 << 0x30, 5);
   auVar34._4_12_ = SUB1612(auVar9 << 0x28, 4);
   auVar34[3] = uVar22;
   auVar34[2] = uVar16;
   auVar34[1] = uVar55;
   auVar34[0] = uVar43;
   uVar2 = auVar34._0_4_;
   for (int i = 0; i < 4; i++) {
      *(undefined4*)( param_1 + ( 32*i + 1544 ) ) = uVar2;
   }

   uVar17 = (uint)param_2[-4];
   bVar49 = param_2[-2];
   uVar23 = (uint)param_2[-3];
   bVar54 = param_2[-5];
   *(int*)( param_1 + 0x60c ) = ( (int)( uVar23 + 2 + (uint)param_2[-1] + (uint)bVar49 * 2 ) >> 2 ) * 0x1010101;
   *(int*)( param_1 + 0x62c ) = ( (int)( uVar17 + 2 + (uint)bVar49 + uVar23 * 2 ) >> 2 ) * 0x1010101;
   *(int*)( param_1 + 0x64c ) = ( (int)( bVar54 + 2 + uVar23 + uVar17 * 2 ) >> 2 ) * 0x1010101;
   *(int*)( param_1 + 0x66c ) = ( (int)( (uint)bVar54 * 3 + 2 + uVar17 ) >> 2 ) * 0x1010101;
   bVar49 = param_2[-3];
   bVar54 = param_2[-4];
   bVar56 = param_2[-2];
   bVar57 = param_2[-1];
   bVar58 = *param_2;
   bVar59 = param_2[1];
   bVar60 = param_2[2];
   bVar61 = param_2[3];
   *(char*)( param_1 + 0x670 ) = (char)( (int)( (uint)bVar49 + (uint)bVar54 * 2 + 2 + (uint)param_2[-5] ) >> 2 );
   uVar16 = ( undefined1 )((int)( bVar54 + 2 + (uint)bVar56 + (uint)bVar49 * 2 ) >> 2);
   *(undefined1*)( param_1 + 0x671 ) = uVar16;
   *(undefined1*)( param_1 + 0x650 ) = uVar16;
   uVar16 = ( undefined1 )((int)( bVar49 + 2 + (uint)bVar57 + (uint)bVar56 * 2 ) >> 2);
   for (int i = 0; i < 3; i++) {
      *(undefined1*)( param_1 + ( -33*i + 1650 ) ) = uVar16;
   }

   uVar16 = ( undefined1 )((int)( bVar56 + 2 + (uint)bVar58 + (uint)bVar57 * 2 ) >> 2);
   for (int i = 0; i < 4; i++) {
      *(undefined1*)( param_1 + ( -33*i + 1651 ) ) = uVar16;
   }

   uVar16 = ( undefined1 )((int)( bVar57 + 2 + (uint)bVar59 + (uint)bVar58 * 2 ) >> 2);
   for (int i = 0; i < 3; i++) {
      *(undefined1*)( param_1 + ( -33*i + 1619 ) ) = uVar16;
   }

   uVar16 = ( undefined1 )((int)( bVar58 + 2 + (uint)bVar60 + (uint)bVar59 * 2 ) >> 2);
   *(undefined1*)( param_1 + 0x633 ) = uVar16;
   *(undefined1*)( param_1 + 0x612 ) = uVar16;
   *(char*)( param_1 + 0x613 ) = (char)( (int)( bVar59 + 2 + (uint)bVar61 + (uint)bVar60 * 2 ) >> 2 );
   bVar49 = param_2[-1];
   bVar54 = *param_2;
   bVar56 = param_2[1];
   bVar57 = param_2[2];
   uVar17 = (uint)param_2[-2];
   bVar58 = param_2[-3];
   bVar59 = param_2[3];
   bVar60 = param_2[-4];
   uVar16 = ( undefined1 )((int)( (uint)bVar49 + (uint)bVar54 + 1 ) >> 1);
   *(undefined1*)( param_1 + 0x655 ) = uVar16;
   *(undefined1*)( param_1 + 0x614 ) = uVar16;
   uVar16 = ( undefined1 )((int)( (uint)bVar54 + (uint)bVar56 + 1 ) >> 1);
   *(undefined1*)( param_1 + 0x656 ) = uVar16;
   *(undefined1*)( param_1 + 0x615 ) = uVar16;
   uVar16 = ( undefined1 )((int)( (uint)bVar56 + (uint)bVar57 + 1 ) >> 1);
   *(undefined1*)( param_1 + 0x657 ) = uVar16;
   *(undefined1*)( param_1 + 0x616 ) = uVar16;
   *(char*)( param_1 + 0x617 ) = (char)( (int)( bVar57 + 1 + (uint)bVar59 ) >> 1 );
   *(char*)( param_1 + 0x674 ) = (char)( (int)( uVar17 + 2 + (uint)bVar60 + (uint)bVar58 * 2 ) >> 2 );
   *(char*)( param_1 + 0x654 ) = (char)( (int)( bVar49 + 2 + (uint)bVar58 + uVar17 * 2 ) >> 2 );
   uVar16 = ( undefined1 )((int)( bVar54 + 2 + uVar17 + (uint)bVar49 * 2 ) >> 2);
   *(undefined1*)( param_1 + 0x675 ) = uVar16;
   *(undefined1*)( param_1 + 0x634 ) = uVar16;
   uVar16 = ( undefined1 )((int)( bVar56 + 2 + (uint)bVar54 + (uint)bVar49 + (uint)bVar54 ) >> 2);
   *(undefined1*)( param_1 + 0x676 ) = uVar16;
   *(undefined1*)( param_1 + 0x635 ) = uVar16;
   uVar16 = ( undefined1 )((int)( bVar57 + 2 + (uint)bVar56 + (uint)bVar54 + (uint)bVar56 ) >> 2);
   *(undefined1*)( param_1 + 0x677 ) = uVar16;
   *(undefined1*)( param_1 + 0x636 ) = uVar16;
   *(char*)( param_1 + 0x637 ) = (char)( (int)( bVar59 + 2 + (uint)bVar57 + (uint)bVar56 + (uint)bVar57 ) >> 2 );
   bVar49 = param_2[1];
   uVar26 = (uint)param_2[2];
   uVar25 = (uint)param_2[3];
   uVar27 = (uint)param_2[4];
   uVar23 = (uint)param_2[5];
   uVar17 = (uint)param_2[6];
   bVar54 = param_2[7];
   *(char*)( param_1 + 0x618 ) = (char)( (int)( uVar26 + 2 + ( uint ) * param_2 + (uint)bVar49 * 2 ) >> 2 );
   uVar16 = ( undefined1 )((int)( uVar25 + 2 + (uint)bVar49 + uVar26 * 2 ) >> 2);
   *(undefined1*)( param_1 + 0x638 ) = uVar16;
   *(undefined1*)( param_1 + 0x619 ) = uVar16;
   uVar16 = ( undefined1 )((int)( uVar27 + 2 + uVar26 + uVar25 * 2 ) >> 2);
   for (int i = 0; i < 3; i++) {
      *(undefined1*)( param_1 + ( -31*i + 1624 ) ) = uVar16;
   }

   uVar16 = ( undefined1 )((int)( uVar23 + 2 + uVar25 + uVar27 * 2 ) >> 2);
   for (int i = 0; i < 4; i++) {
      *(undefined1*)( param_1 + ( -31*i + 1656 ) ) = uVar16;
   }

   uVar16 = ( undefined1 )((int)( uVar17 + 2 + uVar27 + uVar23 * 2 ) >> 2);
   for (int i = 0; i < 3; i++) {
      *(undefined1*)( param_1 + ( -31*i + 1657 ) ) = uVar16;
   }

   uVar16 = ( undefined1 )((int)( bVar54 + 2 + uVar23 + uVar17 * 2 ) >> 2);
   *(undefined1*)( param_1 + 0x67a ) = uVar16;
   *(undefined1*)( param_1 + 0x65b ) = uVar16;
   *(char*)( param_1 + 0x67b ) = (char)( (int)( (uint)bVar54 * 3 + 2 + uVar17 ) >> 2 );
   bVar49 = param_2[1];
   bVar54 = param_2[2];
   uVar17 = (uint)param_2[3];
   uVar23 = (uint)param_2[4];
   iVar28 = ( uint ) * param_2 + (uint)bVar49;
   uVar27 = (uint)param_2[5];
   bVar56 = param_2[7];
   bVar57 = param_2[6];
   iVar20 = (uint)bVar54 + (uint)param_2[3];
   *(char*)( param_1 + 0x61c ) = (char)( iVar28 + 1 >> 1 );
   *(char*)( param_1 + 0x63c ) = (char)( (int)( bVar54 + 2 + (uint)bVar49 + iVar28 ) >> 2 );
   uVar16 = ( undefined1 )((int)( (uint)bVar49 + (uint)bVar54 + 1 ) >> 1);
   *(undefined1*)( param_1 + 0x65c ) = uVar16;
   *(undefined1*)( param_1 + 0x61d ) = uVar16;
   uVar16 = ( undefined1 )((int)( uVar17 + 2 + (uint)bVar54 + (uint)bVar49 + (uint)bVar54 ) >> 2);
   *(undefined1*)( param_1 + 0x67c ) = uVar16;
   uVar22 = ( undefined1 )(iVar20 + 1 >> 1);
   *(undefined1*)( param_1 + 0x65d ) = uVar22;
   *(undefined1*)( param_1 + 0x61e ) = uVar22;
   *(undefined1*)( param_1 + 0x63d ) = uVar16;
   uVar16 = ( undefined1 )((int)( uVar23 + 2 + uVar17 + iVar20 ) >> 2);
   *(undefined1*)( param_1 + 0x67d ) = uVar16;
   *(undefined1*)( param_1 + 0x63e ) = uVar16;
   uVar22 = ( undefined1 )((int)( uVar17 + uVar23 + 1 ) >> 1);
   *(undefined1*)( param_1 + 0x65e ) = uVar22;
   uVar16 = ( undefined1 )((int)( uVar27 + 2 + uVar17 + uVar23 + uVar23 ) >> 2);
   *(undefined1*)( param_1 + 0x67e ) = uVar16;
   *(undefined1*)( param_1 + 0x63f ) = uVar16;
   *(undefined1*)( param_1 + 0x61f ) = uVar22;
   *(char*)( param_1 + 0x65f ) = (char)( (int)( bVar57 + 2 + uVar23 + uVar27 * 2 ) >> 2 );
   *(char*)( param_1 + 0x67f ) = (char)( (int)( bVar56 + 2 + uVar27 + (uint)bVar57 * 2 ) >> 2 );
   bVar49 = param_2[-1];
   bVar54 = param_2[-2];
   bVar56 = param_2[-3];
   bVar57 = param_2[-4];
   uVar25 = ( uint ) * param_2;
   bVar58 = param_2[1];
   bVar59 = param_2[2];
   bVar60 = param_2[-5];
   uVar16 = ( undefined1 )((int)( (uint)bVar49 + (uint)bVar54 + 1 ) >> 1);
   *(undefined1*)( param_1 + 0x6a2 ) = uVar16;
   iVar20 = (uint)bVar60 + (uint)bVar57;
   *(undefined1*)( param_1 + 0x680 ) = uVar16;
   uVar17 = (int)( (uint)bVar54 + (uint)bVar56 + 1 ) >> 1;
   uVar27 = (int)( bVar49 + 2 + (uint)bVar54 + (uint)bVar56 + (uint)bVar54 ) >> 2;
   *(char*)( param_1 + 0x6a0 ) = (char)uVar17;
   *(char*)( param_1 + 0x6a1 ) = (char)uVar27;
   *(char*)( param_1 + 0x683 ) = (char)( (int)( bVar59 + 2 + uVar25 + (uint)bVar58 * 2 ) >> 2 );
   uVar23 = (int)( bVar54 + 2 + (uint)bVar56 + (uint)bVar57 + (uint)bVar56 ) >> 2 & 0xff;
   uVar16 = ( undefined1 )((int)( uVar25 + 2 + (uint)bVar49 + (uint)bVar54 + (uint)bVar49 ) >> 2);
   *(undefined1*)( param_1 + 0x6a3 ) = uVar16;
   *(undefined1*)( param_1 + 0x681 ) = uVar16;
   *(char*)( param_1 + 0x682 ) = (char)( (int)( bVar58 + 2 + (uint)bVar49 + uVar25 * 2 ) >> 2 );
   uVar25 = (int)( (uint)bVar56 + (uint)bVar57 + 1 ) >> 1 & 0xff;
   *(uint*)( param_1 + 0x6c0 ) = ( ( ( uVar27 & 0xff ) << 8 | uVar17 & 0xff ) << 8 | uVar23 ) << 8 | uVar25;
   *(uint*)( param_1 + 0x6e0 ) = ( ( uVar23 << 8 | uVar25 ) << 8 | (int)( bVar56 + 2 + (uint)bVar57 + iVar20 ) >> 2 & 0xffU ) << 8 | iVar20 + 1 >> 1 & 0xffU;
   uVar23 = (uint)param_2[-4];
   bVar49 = param_2[-3];
   uVar17 = *(uint*)( param_2 + -5 );
   iVar28 = (uint)bVar49 + (uint)param_2[-4];
   uVar43 = ( undefined1 )(uVar17 >> 0x18);
   uVar22 = ( undefined1 )(uVar17 >> 0x10);
   uVar16 = ( undefined1 )(uVar17 >> 8);
   auVar41._4_4_ = (int)( CONCAT35(CONCAT21(CONCAT11(uVar43, uVar43), uVar22), CONCAT14(uVar22, uVar17)) >> 0x20 );
   auVar41[3] = uVar16;
   auVar41[2] = uVar16;
   auVar41[0] = (undefined1)uVar17;
   auVar41[1] = auVar41[0];
   auVar41._8_8_ = 0;
   iVar20 = (uint)param_2[-2] + (uint)bVar49;
   uVar17 = uVar17 & 0xff;
   auVar30 = pshuflw(auVar41, auVar41, 0xe0);
   *(int*)( param_1 + 0x6e4 ) = auVar30._0_4_;
   *(char*)( param_1 + 0x684 ) = (char)( iVar20 + 1 >> 1 );
   *(char*)( param_1 + 0x685 ) = (char)( (int)( uVar23 + 2 + (uint)bVar49 + iVar20 ) >> 2 );
   uVar22 = ( undefined1 )(iVar28 + 1 >> 1);
   *(undefined1*)( param_1 + 0x6a4 ) = uVar22;
   uVar16 = ( undefined1 )((int)( uVar17 + 2 + uVar23 + iVar28 ) >> 2);
   *(undefined1*)( param_1 + 0x6a5 ) = uVar16;
   *(undefined1*)( param_1 + 0x687 ) = uVar16;
   *(undefined1*)( param_1 + 0x686 ) = uVar22;
   uVar16 = ( undefined1 )((int)( uVar23 + uVar17 + 2 + uVar17 * 2 ) >> 2);
   *(undefined1*)( param_1 + 0x6c5 ) = uVar16;
   *(undefined1*)( param_1 + 0x6a7 ) = uVar16;
   uVar16 = ( undefined1 )((int)( uVar23 + uVar17 + 1 ) >> 1);
   *(undefined1*)( param_1 + 0x6c4 ) = uVar16;
   *(undefined1*)( param_1 + 0x6a6 ) = uVar16;
   *(short*)( param_1 + 0x6c6 ) = auVar30._0_2_;
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void Intra16Preds_C(undefined8 *param_1, undefined1 (*param_2)[16], undefined1 (*param_3)[16]) {
   undefined1 auVar1[16];
   byte bVar2;
   byte bVar3;
   undefined1 auVar4[14];
   undefined1 auVar5[15];
   undefined1 auVar6[14];
   undefined1 auVar7[14];
   undefined1 auVar8[15];
   undefined1 auVar9[15];
   undefined1 auVar10[15];
   undefined1 auVar11[15];
   undefined1 auVar12[15];
   undefined1 auVar13[15];
   undefined1 auVar14[15];
   undefined1 auVar15[14];
   undefined1 auVar16[13];
   undefined1 auVar17[13];
   undefined1 auVar18[13];
   uint uVar19;
   undefined1 auVar20[15];
   undefined1 auVar21[13];
   undefined1 auVar22[13];
   undefined1 auVar23[13];
   undefined1 auVar24[15];
   undefined1 auVar25[14];
   undefined1 auVar26[13];
   undefined1 auVar27[13];
   undefined1 auVar28[13];
   undefined1 auVar29[15];
   undefined1 auVar30[15];
   undefined1 auVar31[15];
   undefined1 auVar32[15];
   undefined1 auVar33[15];
   undefined1 auVar34[15];
   undefined1 auVar35[15];
   undefined1 auVar36[15];
   undefined1 auVar37[15];
   undefined1 auVar38[15];
   undefined1 auVar39[15];
   undefined1 auVar40[15];
   undefined8 uVar41;
   undefined1 auVar42[15];
   unkuint9 Var43;
   undefined1 auVar44[11];
   undefined1 auVar45[13];
   undefined1 auVar46[14];
   undefined1 auVar47[13];
   undefined1 auVar48[15];
   undefined1 auVar49[11];
   undefined1 auVar50[14];
   undefined1 auVar51[13];
   undefined1 auVar52[15];
   undefined1 auVar53[11];
   undefined1 auVar54[13];
   undefined1 auVar55[14];
   undefined1 auVar56[13];
   undefined1 auVar57[15];
   undefined1 auVar58[15];
   undefined1 auVar59[15];
   undefined1 auVar60[15];
   undefined1 auVar61[15];
   undefined1 auVar62[15];
   uint6 uVar63;
   undefined1 *puVar64;
   undefined8 uVar65;
   long lVar66;
   undefined8 *puVar67;
   undefined8 *puVar68;
   undefined1 uVar69;
   int iVar70;
   undefined8 *puVar71;
   undefined1(*pauVar72)[16];
   undefined2 uVar73;
   int iVar74;
   undefined4 uVar75;
   ushort uVar76;
   uint uVar77;
   if (param_3 == (undefined1(*) [16])0x0) {
      uVar69 = 0x80;
      if (param_2 != (undefined1(*) [16])0x0) {
         auVar1 = *param_2;
         uVar77 = CONCAT13(0, CONCAT12(auVar1[9], (ushort)auVar1[8]));
         auVar10[0xd] = 0;
         auVar10._0_13_ = auVar1._0_13_;
         auVar10[0xe] = auVar1[7];
         auVar13[0xc] = auVar1[6];
         auVar13._0_12_ = auVar1._0_12_;
         auVar13._13_2_ = auVar10._13_2_;
         auVar24[0xb] = 0;
         auVar24._0_11_ = auVar1._0_11_;
         auVar24._12_3_ = auVar13._12_3_;
         uVar19 = auVar24._11_4_;
         auVar31[10] = auVar1[5];
         auVar31._0_10_ = auVar1._0_10_;
         auVar31._11_4_ = uVar19;
         auVar34[9] = 0;
         auVar34._0_9_ = auVar1._0_9_;
         auVar34._10_5_ = auVar31._10_5_;
         auVar36[8] = auVar1[4];
         auVar36._0_8_ = auVar1._0_8_;
         auVar36._9_6_ = auVar34._9_6_;
         auVar52._7_8_ = 0;
         auVar52._0_7_ = auVar36._8_7_;
         Var43 = CONCAT81(SUB158(auVar52 << 0x40, 7), auVar1[3]);
         auVar61._9_6_ = 0;
         auVar61._0_9_ = Var43;
         auVar53._1_10_ = SUB1510(auVar61 << 0x30, 5);
         auVar53[0] = auVar1[2];
         auVar62._11_4_ = 0;
         auVar62._0_11_ = auVar53;
         auVar54._1_12_ = SUB1512(auVar62 << 0x20, 3);
         auVar54[0] = auVar1[1];
         auVar40[1] = 0;
         auVar40[0] = auVar1[0];
         auVar40._2_13_ = auVar54;
         auVar7._10_2_ = 0;
         auVar7._0_10_ = auVar40._0_10_;
         auVar7._12_2_ = (short)Var43;
         uVar63 = CONCAT42(auVar7._10_4_, auVar53._0_2_);
         auVar55._6_8_ = 0;
         auVar55._0_6_ = uVar63;
         auVar25._4_2_ = auVar54._0_2_;
         auVar25._0_4_ = auVar40._0_4_;
         auVar25._6_8_ = SUB148(auVar55 << 0x40, 6);
         auVar26[0xc] = auVar1[0xb];
         auVar26._0_12_ = ZEXT112(auVar1[0xc]) << 0x40;
         auVar27._10_3_ = auVar26._10_3_;
         auVar27._0_10_ = (unkuint10)auVar1[10] << 0x40;
         auVar56._5_8_ = 0;
         auVar56._0_5_ = auVar27._8_5_;
         auVar28[4] = auVar1[9];
         auVar28._0_4_ = uVar77;
         auVar28[5] = 0;
         auVar28._6_7_ = SUB137(auVar56 << 0x40, 6);
         uVar69 = ( undefined1 )((int)( ( (uint)auVar36._8_2_ + ( auVar40._0_4_ & 0xffff ) + ( uVar77 & 0xffff ) + (uint)auVar1[0xc] + ( uVar19 >> 8 & 0xffff ) + (int)uVar63 + auVar27._8_4_ + (uint)auVar1[0xe] + (uint)auVar31._10_2_ + auVar25._4_4_ + auVar28._4_4_ + (uint)auVar1[0xd] + ( uVar19 >> 0x18 ) + ( auVar7._10_4_ >> 0x10 ) + ( uint )(uint3)(auVar26._10_3_ >> 0x10) + (uint)auVar1[0xf] ) * 2 + 0x10 ) >> 5);
      }

   }
 else {
      auVar1 = *param_3;
      uVar77 = CONCAT13(0, CONCAT12(auVar1[9], (ushort)auVar1[8]));
      auVar8[0xd] = 0;
      auVar8._0_13_ = auVar1._0_13_;
      auVar8[0xe] = auVar1[7];
      auVar11[0xc] = auVar1[6];
      auVar11._0_12_ = auVar1._0_12_;
      auVar11._13_2_ = auVar8._13_2_;
      auVar14[0xb] = 0;
      auVar14._0_11_ = auVar1._0_11_;
      auVar14._12_3_ = auVar11._12_3_;
      uVar19 = auVar14._11_4_;
      auVar29[10] = auVar1[5];
      auVar29._0_10_ = auVar1._0_10_;
      auVar29._11_4_ = uVar19;
      auVar32[9] = 0;
      auVar32._0_9_ = auVar1._0_9_;
      auVar32._10_5_ = auVar29._10_5_;
      auVar35[8] = auVar1[4];
      auVar35._0_8_ = auVar1._0_8_;
      auVar35._9_6_ = auVar32._9_6_;
      auVar42._7_8_ = 0;
      auVar42._0_7_ = auVar35._8_7_;
      Var43 = CONCAT81(SUB158(auVar42 << 0x40, 7), auVar1[3]);
      auVar57._9_6_ = 0;
      auVar57._0_9_ = Var43;
      auVar44._1_10_ = SUB1510(auVar57 << 0x30, 5);
      auVar44[0] = auVar1[2];
      auVar58._11_4_ = 0;
      auVar58._0_11_ = auVar44;
      auVar45._1_12_ = SUB1512(auVar58 << 0x20, 3);
      auVar45[0] = auVar1[1];
      auVar39[1] = 0;
      auVar39[0] = auVar1[0];
      auVar39._2_13_ = auVar45;
      auVar4._10_2_ = 0;
      auVar4._0_10_ = auVar39._0_10_;
      auVar4._12_2_ = (short)Var43;
      uVar63 = CONCAT42(auVar4._10_4_, auVar44._0_2_);
      auVar46._6_8_ = 0;
      auVar46._0_6_ = uVar63;
      auVar15._4_2_ = auVar45._0_2_;
      auVar15._0_4_ = auVar39._0_4_;
      auVar15._6_8_ = SUB148(auVar46 << 0x40, 6);
      auVar16[0xc] = auVar1[0xb];
      auVar16._0_12_ = ZEXT112(auVar1[0xc]) << 0x40;
      auVar17._10_3_ = auVar16._10_3_;
      auVar17._0_10_ = (unkuint10)auVar1[10] << 0x40;
      auVar47._5_8_ = 0;
      auVar47._0_5_ = auVar17._8_5_;
      auVar18[4] = auVar1[9];
      auVar18._0_4_ = uVar77;
      auVar18[5] = 0;
      auVar18._6_7_ = SUB137(auVar47 << 0x40, 6);
      iVar74 = (uint)auVar35._8_2_ + ( auVar39._0_4_ & 0xffff ) + ( uVar77 & 0xffff ) + (uint)auVar1[0xc] + ( uVar19 >> 8 & 0xffff ) + (int)uVar63 + auVar17._8_4_ + (uint)auVar1[0xe] + (uint)auVar29._10_2_ + auVar15._4_4_ + auVar18._4_4_ + (uint)auVar1[0xd] + ( uVar19 >> 0x18 ) + ( auVar4._10_4_ >> 0x10 ) + ( uint )(uint3)(auVar16._10_3_ >> 0x10) + (uint)auVar1[0xf];
      iVar70 = iVar74 * 2;
      if (param_2 != (undefined1(*) [16])0x0) {
         auVar1 = *param_2;
         uVar77 = CONCAT13(0, CONCAT12(auVar1[9], (ushort)auVar1[8]));
         auVar5[0xd] = 0;
         auVar5._0_13_ = auVar1._0_13_;
         auVar5[0xe] = auVar1[7];
         auVar9[0xc] = auVar1[6];
         auVar9._0_12_ = auVar1._0_12_;
         auVar9._13_2_ = auVar5._13_2_;
         auVar12[0xb] = 0;
         auVar12._0_11_ = auVar1._0_11_;
         auVar12._12_3_ = auVar9._12_3_;
         uVar19 = auVar12._11_4_;
         auVar20[10] = auVar1[5];
         auVar20._0_10_ = auVar1._0_10_;
         auVar20._11_4_ = uVar19;
         auVar30[9] = 0;
         auVar30._0_9_ = auVar1._0_9_;
         auVar30._10_5_ = auVar20._10_5_;
         auVar33[8] = auVar1[4];
         auVar33._0_8_ = auVar1._0_8_;
         auVar33._9_6_ = auVar30._9_6_;
         auVar48._7_8_ = 0;
         auVar48._0_7_ = auVar33._8_7_;
         Var43 = CONCAT81(SUB158(auVar48 << 0x40, 7), auVar1[3]);
         auVar59._9_6_ = 0;
         auVar59._0_9_ = Var43;
         auVar49._1_10_ = SUB1510(auVar59 << 0x30, 5);
         auVar49[0] = auVar1[2];
         auVar60._11_4_ = 0;
         auVar60._0_11_ = auVar49;
         auVar37[2] = auVar1[1];
         auVar37._0_2_ = auVar1._0_2_;
         auVar37._3_12_ = SUB1512(auVar60 << 0x20, 3);
         uVar76 = auVar1._0_2_ & 0xff;
         auVar38._2_13_ = auVar37._2_13_;
         auVar38._0_2_ = uVar76;
         auVar6._10_2_ = 0;
         auVar6._0_10_ = auVar38._0_10_;
         auVar6._12_2_ = (short)Var43;
         uVar63 = CONCAT42(auVar6._10_4_, auVar49._0_2_);
         auVar50._6_8_ = 0;
         auVar50._0_6_ = uVar63;
         auVar21[0xc] = auVar1[0xb];
         auVar21._0_12_ = ZEXT112(auVar1[0xc]) << 0x40;
         auVar22._10_3_ = auVar21._10_3_;
         auVar22._0_10_ = (unkuint10)auVar1[10] << 0x40;
         auVar51._5_8_ = 0;
         auVar51._0_5_ = auVar22._8_5_;
         auVar23[4] = auVar1[9];
         auVar23._0_4_ = uVar77;
         auVar23[5] = 0;
         auVar23._6_7_ = SUB137(auVar51 << 0x40, 6);
         iVar70 = (uint)uVar76 + (uint)auVar33._8_2_ + ( uVar77 & 0xffff ) + (uint)auVar1[0xc] + (int)uVar63 + ( uVar19 >> 8 & 0xffff ) + auVar22._8_4_ + (uint)auVar1[0xe] + (int)CONCAT82(SUB148(auVar50 << 0x40, 6), auVar37._2_2_) + (uint)auVar20._10_2_ + auVar23._4_4_ + (uint)auVar1[0xd] + ( auVar6._10_4_ >> 0x10 ) + ( uVar19 >> 0x18 ) + ( uint )(uint3)(auVar21._10_3_ >> 0x10) + (uint)auVar1[0xf] + iVar74;
      }

      uVar69 = ( undefined1 )(iVar70 + 0x10 >> 5);
   }

   uVar75 = CONCAT22(CONCAT11(uVar69, uVar69), CONCAT11(uVar69, uVar69));
   puVar67 = param_1;
   do {
      puVar68 = puVar67;
      *(undefined4*)puVar68 = uVar75;
      *(undefined4*)( (long)puVar68 + 4 ) = uVar75;
      *(undefined4*)( puVar68 + 1 ) = uVar75;
      *(undefined4*)( (long)puVar68 + 0xc ) = uVar75;
      puVar67 = puVar68 + 8;
      *(undefined4*)( puVar68 + 4 ) = uVar75;
      *(undefined4*)( (long)puVar68 + 0x24 ) = uVar75;
      *(undefined4*)( puVar68 + 5 ) = uVar75;
      *(undefined4*)( (long)puVar68 + 0x2c ) = uVar75;
      uVar65 = _UNK_001029f8;
      uVar41 = __LC5;
   }
 while ( puVar67 != param_1 + 0x40 );
   puVar71 = param_1 + 0x80;
   if (param_3 == (undefined1(*) [16])0x0) {
      if (( (int)puVar71 - (int)puVar67 & 0x20U ) != 0) {
         *puVar67 = __LC5;
         puVar68[9] = uVar65;
         puVar67 = puVar68 + 0xc;
         if (puVar71 == puVar68 + 0xc) goto LAB_00101a89;
      }

      do {
         *puVar67 = uVar41;
         puVar67[1] = uVar65;
         puVar68 = puVar67 + 8;
         puVar67[4] = uVar41;
         puVar67[5] = uVar65;
         puVar67 = puVar68;
      }
 while ( puVar71 != puVar68 );
   }
 else {
      do {
         uVar41 = *(undefined8*)( *param_3 + 8 );
         puVar68 = puVar67 + 4;
         *puVar67 = *(undefined8*)*param_3;
         puVar67[1] = uVar41;
         puVar67 = puVar68;
      }
 while ( puVar68 != puVar71 );
   }

   LAB_00101a89:uVar65 = _UNK_00102a08;
   uVar41 = __LC6;
   puVar67 = param_1 + 0x42;
   if (param_2 == (undefined1(*) [16])0x0) {
      puVar68 = puVar67;
      do {
         *puVar68 = uVar41;
         puVar68[1] = uVar65;
         puVar71 = puVar68 + 8;
         puVar68[4] = uVar41;
         puVar68[5] = uVar65;
         puVar68 = puVar71;
      }
 while ( param_1 + 0x82 != puVar71 );
      puVar68 = param_1 + 2;
      if (param_3 == (undefined1(*) [16])0x0) {
         if (( (int)puVar67 - (int)puVar68 & 0x20U ) != 0) {
            *puVar68 = uVar41;
            param_1[3] = uVar65;
            puVar68 = param_1 + 6;
            if (param_1 + 6 == puVar67) {
               return;
            }

         }

         do {
            *puVar68 = uVar41;
            puVar68[1] = uVar65;
            puVar71 = puVar68 + 8;
            puVar68[4] = uVar41;
            puVar68[5] = uVar65;
            puVar68 = puVar71;
         }
 while ( puVar71 != puVar67 );
         return;
      }

      do {
         uVar41 = *(undefined8*)( *param_3 + 8 );
         puVar71 = puVar68 + 4;
         *puVar68 = *(undefined8*)*param_3;
         puVar68[1] = uVar41;
         puVar68 = puVar71;
      }
 while ( puVar67 != puVar71 );
      return;
   }

   puVar68 = puVar67;
   pauVar72 = param_2;
   do {
      puVar64 = *pauVar72;
      puVar71 = puVar68 + 4;
      pauVar72 = (undefined1(*) [16])( *pauVar72 + 1 );
      uVar73 = CONCAT11(*puVar64, *puVar64);
      uVar75 = CONCAT22(uVar73, uVar73);
      *(undefined4*)puVar68 = uVar75;
      *(undefined4*)( (long)puVar68 + 4 ) = uVar75;
      *(undefined4*)( puVar68 + 1 ) = uVar75;
      *(undefined4*)( (long)puVar68 + 0xc ) = uVar75;
      puVar68 = puVar71;
   }
 while ( puVar71 != param_1 + 0x82 );
   param_1 = param_1 + 2;
   if (param_3 == (undefined1(*) [16])0x0) {
      do {
         puVar64 = *param_2;
         puVar68 = param_1 + 4;
         param_2 = (undefined1(*) [16])( *param_2 + 1 );
         uVar73 = CONCAT11(*puVar64, *puVar64);
         uVar75 = CONCAT22(uVar73, uVar73);
         *(undefined4*)param_1 = uVar75;
         *(undefined4*)( (long)param_1 + 4 ) = uVar75;
         *(undefined4*)( param_1 + 1 ) = uVar75;
         *(undefined4*)( (long)param_1 + 0xc ) = uVar75;
         param_1 = puVar68;
      }
 while ( puVar67 != puVar68 );
      return;
   }

   bVar2 = param_2[-1][0xf];
   do {
      bVar3 = ( *param_2 )[0];
      lVar66 = 0;
      do {
         *(undefined*)( (long)param_1 + lVar66 ) = ( &DAT_0010271f )[( ulong )(byte)(*param_3)[lVar66] + ( (ulong)bVar3 - (ulong)bVar2 )];
         lVar66 = lVar66 + 1;
      }
 while ( lVar66 != 0x10 );
      param_1 = param_1 + 4;
      param_2 = (undefined1(*) [16])( *param_2 + 1 );
   }
 while ( puVar67 != param_1 );
   return;
}
void IntraChromaPreds_C(long param_1, ulong *param_2, ulong *param_3) {
   byte bVar1;
   undefined1 auVar2[15];
   undefined1 auVar3[14];
   undefined1 auVar4[15];
   undefined1 auVar5[15];
   undefined1 auVar6[14];
   undefined1 auVar7[14];
   undefined1 auVar8[15];
   undefined1 auVar9[14];
   undefined1 auVar10[15];
   undefined1 auVar11[15];
   undefined1 auVar12[14];
   undefined1 auVar13[14];
   undefined1 auVar14[15];
   undefined1 auVar15[14];
   undefined1 auVar16[15];
   undefined1 auVar17[15];
   undefined1 auVar18[14];
   undefined1 auVar19[14];
   undefined1 auVar20[15];
   undefined1 auVar21[15];
   undefined1 auVar22[14];
   undefined1 auVar23[14];
   undefined1 auVar24[15];
   undefined1 auVar25[15];
   undefined1 auVar26[14];
   undefined1 auVar27[15];
   undefined1 auVar28[15];
   undefined1 auVar29[15];
   undefined1 auVar30[15];
   undefined1 auVar31[14];
   undefined1 auVar32[15];
   undefined1 auVar33[15];
   undefined1 auVar34[15];
   undefined1 auVar35[15];
   undefined1 auVar36[14];
   undefined1 auVar37[15];
   undefined1 auVar38[15];
   undefined1 auVar39[15];
   undefined1 auVar40[15];
   undefined1 auVar41[15];
   undefined1 auVar42[15];
   undefined1 auVar43[15];
   undefined1 auVar44[15];
   undefined1 auVar45[15];
   undefined1 auVar46[15];
   undefined1 auVar47[15];
   undefined1 auVar48[15];
   undefined1 auVar49[15];
   undefined1 auVar50[15];
   undefined1 auVar51[15];
   undefined1 auVar52[15];
   undefined1 auVar53[15];
   undefined1 auVar54[15];
   undefined1 auVar55[15];
   undefined1 auVar56[15];
   undefined1 auVar57[14];
   undefined1 auVar58[15];
   undefined1 auVar59[15];
   undefined1 auVar60[14];
   undefined1 auVar61[15];
   undefined1 auVar62[15];
   undefined1 auVar63[14];
   undefined1 auVar64[15];
   undefined1 auVar65[15];
   undefined1 auVar66[14];
   undefined1 auVar67[15];
   undefined1 auVar68[15];
   undefined1 auVar69[14];
   undefined1 auVar70[15];
   undefined1 auVar71[15];
   undefined1 auVar72[14];
   undefined1 auVar73[15];
   undefined1 auVar74[15];
   undefined1 auVar75[14];
   undefined1 auVar76[15];
   undefined1 auVar77[15];
   undefined1 auVar78[15];
   undefined1 auVar79[15];
   undefined1 auVar80[15];
   undefined1 auVar81[15];
   undefined1 auVar82[15];
   undefined1 auVar83[15];
   undefined1 auVar84[15];
   undefined1 auVar85[15];
   undefined1 auVar86[15];
   undefined1 auVar87[15];
   undefined1 auVar88[15];
   undefined1 auVar89[15];
   undefined1 auVar90[15];
   undefined1 auVar91[15];
   undefined1 auVar92[13];
   undefined1 auVar93[13];
   undefined1 auVar94[15];
   undefined1 auVar95[15];
   undefined1 auVar96[13];
   undefined1 auVar97[13];
   undefined1 auVar98[13];
   undefined1 auVar99[15];
   undefined1 auVar100[15];
   undefined1 auVar101[15];
   undefined1 auVar102[15];
   undefined1 auVar103[13];
   undefined1 auVar104[13];
   undefined1 auVar105[13];
   undefined1 auVar106[15];
   undefined1 auVar107[15];
   undefined1 auVar108[13];
   undefined1 auVar109[13];
   undefined1 auVar110[15];
   undefined1 auVar111[15];
   undefined1 auVar112[13];
   undefined1 auVar113[13];
   undefined1 auVar114[15];
   undefined1 auVar115[15];
   undefined1 auVar116[13];
   undefined1 auVar117[13];
   undefined1 auVar118[15];
   undefined1 auVar119[15];
   undefined1 auVar120[13];
   undefined1 auVar121[13];
   undefined1 auVar122[15];
   undefined1 auVar123[15];
   undefined1 auVar124[15];
   undefined1 auVar125[15];
   undefined1 auVar126[15];
   undefined1 auVar127[15];
   undefined1 auVar128[15];
   undefined1 auVar129[15];
   undefined1 auVar130[15];
   undefined1 auVar131[15];
   undefined1 auVar132[15];
   undefined1 auVar133[15];
   undefined1 auVar134[15];
   undefined1 auVar135[15];
   undefined1 auVar136[15];
   undefined1 auVar137[15];
   undefined1 auVar138[15];
   undefined1 auVar139[15];
   undefined1 auVar140[15];
   undefined1 auVar141[15];
   undefined1 auVar142[15];
   undefined1 auVar143[15];
   undefined1 auVar144[15];
   unkuint9 Var145;
   undefined1 auVar146[11];
   undefined1 auVar147[15];
   undefined1 auVar148[15];
   undefined1 auVar149[15];
   undefined1 auVar150[15];
   undefined1 auVar151[15];
   undefined1 auVar152[14];
   undefined1 auVar153[13];
   undefined1 auVar154[15];
   undefined1 auVar155[11];
   undefined1 auVar156[15];
   undefined1 auVar157[15];
   undefined1 auVar158[15];
   undefined1 auVar159[15];
   undefined1 auVar160[15];
   undefined1 auVar161[14];
   undefined1 auVar162[13];
   undefined1 auVar163[15];
   undefined1 auVar164[15];
   undefined1 auVar165[15];
   undefined1 auVar166[15];
   undefined1 auVar167[15];
   undefined1 auVar168[15];
   undefined1 auVar169[11];
   undefined1 auVar170[14];
   undefined1 auVar171[13];
   undefined1 auVar172[15];
   undefined1 auVar173[15];
   undefined1 auVar174[15];
   undefined1 auVar175[15];
   undefined1 auVar176[15];
   undefined1 auVar177[15];
   undefined1 auVar178[11];
   undefined1 auVar179[14];
   undefined1 auVar180[13];
   undefined1 auVar181[15];
   undefined1 auVar182[11];
   undefined1 auVar183[15];
   undefined1 auVar184[15];
   undefined1 auVar185[15];
   undefined1 auVar186[15];
   undefined1 auVar187[15];
   undefined1 auVar188[14];
   undefined1 auVar189[13];
   undefined1 auVar190[15];
   undefined1 auVar191[15];
   undefined1 auVar192[15];
   undefined1 auVar193[15];
   undefined1 auVar194[15];
   undefined1 auVar195[15];
   undefined1 auVar196[11];
   undefined1 auVar197[14];
   undefined1 auVar198[13];
   undefined1 auVar199[15];
   undefined1 auVar200[15];
   undefined1 auVar201[15];
   undefined1 auVar202[15];
   undefined1 auVar203[15];
   undefined1 auVar204[15];
   undefined1 auVar205[11];
   undefined1 auVar206[14];
   undefined1 auVar207[13];
   undefined1 auVar208[15];
   undefined1 auVar209[15];
   undefined1 auVar210[15];
   undefined1 auVar211[15];
   undefined1 auVar212[15];
   undefined1 auVar213[15];
   undefined1 auVar214[15];
   undefined1 auVar215[15];
   undefined1 auVar216[15];
   undefined1 auVar217[15];
   undefined1 auVar218[15];
   undefined1 auVar219[15];
   undefined1 auVar220[15];
   undefined1 auVar221[15];
   undefined1 auVar222[15];
   undefined1 auVar223[15];
   undefined1 auVar224[15];
   undefined1 auVar225[15];
   undefined1 auVar226[15];
   undefined1 auVar227[15];
   undefined1 auVar228[15];
   long lVar229;
   ulong *puVar230;
   ulong *puVar231;
   int iVar232;
   ulong *puVar233;
   int iVar234;
   uint uVar235;
   ulong uVar236;
   ulong *puVar237;
   ulong *puVar238;
   undefined2 uVar239;
   undefined1 uVar241;
   undefined1 uVar242;
   undefined1 uVar243;
   undefined1 uVar244;
   unkuint10 Var240;
   ushort uVar245;
   if (param_3 == (ulong*)0x0) {
      uVar235 = 0x80;
      if (param_2 != (ulong*)0x0) {
         uVar236 = *param_2;
         uVar244 = ( undefined1 )(uVar236 >> 0x38);
         auVar34._8_6_ = 0;
         auVar34._0_8_ = uVar236;
         auVar34[0xe] = uVar244;
         uVar243 = ( undefined1 )(uVar236 >> 0x30);
         auVar49._8_4_ = 0;
         auVar49._0_8_ = uVar236;
         auVar49[0xc] = uVar243;
         auVar49._13_2_ = auVar34._13_2_;
         auVar67._8_4_ = 0;
         auVar67._0_8_ = uVar236;
         auVar67._12_3_ = auVar49._12_3_;
         uVar242 = ( undefined1 )(uVar236 >> 0x28);
         auVar84._8_2_ = 0;
         auVar84._0_8_ = uVar236;
         auVar84[10] = uVar242;
         auVar84._11_4_ = auVar67._11_4_;
         auVar106._8_2_ = 0;
         auVar106._0_8_ = uVar236;
         auVar106._10_5_ = auVar84._10_5_;
         uVar241 = ( undefined1 )(uVar236 >> 0x20);
         auVar122[8] = uVar241;
         auVar122._0_8_ = uVar236;
         auVar122._9_6_ = auVar106._9_6_;
         auVar181._7_8_ = 0;
         auVar181._0_7_ = auVar122._8_7_;
         Var145 = CONCAT81(SUB158(auVar181 << 0x40, 7), (char)( uVar236 >> 0x18 ));
         auVar216._9_6_ = 0;
         auVar216._0_9_ = Var145;
         auVar182._1_10_ = SUB1510(auVar216 << 0x30, 5);
         auVar182[0] = (char)( uVar236 >> 0x10 );
         auVar217._11_4_ = 0;
         auVar217._0_11_ = auVar182;
         auVar135[2] = (char)( uVar236 >> 8 );
         auVar135._0_2_ = (ushort)uVar236;
         auVar135._3_12_ = SUB1512(auVar217 << 0x20, 3);
         auVar143[1] = 0;
         auVar143[0] = (byte)uVar236;
         auVar143._2_13_ = auVar135._2_13_;
         auVar14._8_6_ = 0;
         auVar14._0_8_ = uVar236;
         auVar14[0xe] = uVar244;
         auVar35._8_4_ = 0;
         auVar35._0_8_ = uVar236;
         auVar35[0xc] = uVar243;
         auVar35._13_2_ = auVar14._13_2_;
         auVar50._8_4_ = 0;
         auVar50._0_8_ = uVar236;
         auVar50._12_3_ = auVar35._12_3_;
         auVar68._8_2_ = 0;
         auVar68._0_8_ = uVar236;
         auVar68[10] = uVar242;
         auVar68._11_4_ = auVar50._11_4_;
         auVar85._8_2_ = 0;
         auVar85._0_8_ = uVar236;
         auVar85._10_5_ = auVar68._10_5_;
         auVar107[8] = uVar241;
         auVar107._0_8_ = uVar236;
         auVar107._9_6_ = auVar85._9_6_;
         auVar183._7_8_ = 0;
         auVar183._0_7_ = auVar107._8_7_;
         auVar184._8_7_ = 0;
         auVar184._0_8_ = SUB158(auVar183 << 0x40, 7);
         auVar185._9_6_ = 0;
         auVar185._0_9_ = SUB159(auVar184 << 0x38, 6);
         auVar186._10_5_ = 0;
         auVar186._0_10_ = SUB1510(auVar185 << 0x30, 5);
         auVar187._11_4_ = 0;
         auVar187._0_11_ = SUB1511(auVar186 << 0x28, 4);
         auVar226._12_3_ = 0;
         auVar226._0_12_ = SUB1512(auVar187 << 0x20, 3);
         auVar136._2_13_ = SUB1513(auVar226 << 0x18, 2);
         auVar136._0_2_ = (ushort)uVar236 & 0xff;
         Var240 = (unkuint10)auVar136._0_4_ << 0x40;
         uVar239 = (undefined2)Var145;
         auVar36._10_2_ = 0;
         auVar36._0_10_ = auVar143._0_10_;
         auVar36._12_2_ = uVar239;
         auVar15._10_2_ = 0;
         auVar15._0_10_ = auVar143._0_10_;
         auVar15._12_2_ = uVar239;
         auVar188._2_4_ = auVar15._10_4_;
         auVar188._0_2_ = auVar182._0_2_;
         auVar188._6_8_ = 0;
         auVar69._4_2_ = auVar135._2_2_;
         auVar69._0_4_ = auVar143._0_4_;
         auVar69._6_8_ = SUB148(auVar188 << 0x40, 6);
         auVar108._10_2_ = 0;
         auVar108._0_10_ = Var240;
         auVar108[0xc] = uVar244;
         auVar189._2_3_ = auVar108._10_3_;
         auVar189._0_2_ = auVar35._12_2_;
         auVar189._5_8_ = 0;
         auVar109._10_2_ = 0;
         auVar109._0_10_ = Var240;
         auVar109[0xc] = uVar244;
         uVar235 = (int)( ( ( auVar36._10_4_ >> 0x10 ) + auVar69._4_4_ + (int)CONCAT72(SUB137(auVar189 << 0x40, 6), auVar68._10_2_) + ( uint )(uint3)(auVar109._10_3_ >> 0x10) + (int)CONCAT42(auVar36._10_4_, auVar182._0_2_) + ( auVar143._0_4_ & 0xffff ) + (uint)auVar107._8_2_ + (int)CONCAT32(auVar109._10_3_, auVar35._12_2_) ) * 2 + 8 ) >> 4;
      }

   }
 else {
      uVar236 = *param_3;
      uVar244 = ( undefined1 )(uVar236 >> 0x38);
      auVar24._8_6_ = 0;
      auVar24._0_8_ = uVar236;
      auVar24[0xe] = uVar244;
      uVar243 = ( undefined1 )(uVar236 >> 0x30);
      auVar41._8_4_ = 0;
      auVar41._0_8_ = uVar236;
      auVar41[0xc] = uVar243;
      auVar41._13_2_ = auVar24._13_2_;
      auVar55._8_4_ = 0;
      auVar55._0_8_ = uVar236;
      auVar55._12_3_ = auVar41._12_3_;
      uVar242 = ( undefined1 )(uVar236 >> 0x28);
      auVar76._8_2_ = 0;
      auVar76._0_8_ = uVar236;
      auVar76[10] = uVar242;
      auVar76._11_4_ = auVar55._11_4_;
      auVar90._8_2_ = 0;
      auVar90._0_8_ = uVar236;
      auVar90._10_5_ = auVar76._10_5_;
      uVar241 = ( undefined1 )(uVar236 >> 0x20);
      auVar118[8] = uVar241;
      auVar118._0_8_ = uVar236;
      auVar118._9_6_ = auVar90._9_6_;
      auVar144._7_8_ = 0;
      auVar144._0_7_ = auVar118._8_7_;
      Var145 = CONCAT81(SUB158(auVar144 << 0x40, 7), (char)( uVar236 >> 0x18 ));
      auVar208._9_6_ = 0;
      auVar208._0_9_ = Var145;
      auVar146._1_10_ = SUB1510(auVar208 << 0x30, 5);
      auVar146[0] = (char)( uVar236 >> 0x10 );
      auVar209._11_4_ = 0;
      auVar209._0_11_ = auVar146;
      auVar128[2] = (char)( uVar236 >> 8 );
      auVar128._0_2_ = (ushort)uVar236;
      auVar128._3_12_ = SUB1512(auVar209 << 0x20, 3);
      auVar141[1] = 0;
      auVar141[0] = (byte)uVar236;
      auVar141._2_13_ = auVar128._2_13_;
      auVar2._8_6_ = 0;
      auVar2._0_8_ = uVar236;
      auVar2[0xe] = uVar244;
      auVar25._8_4_ = 0;
      auVar25._0_8_ = uVar236;
      auVar25[0xc] = uVar243;
      auVar25._13_2_ = auVar2._13_2_;
      auVar42._8_4_ = 0;
      auVar42._0_8_ = uVar236;
      auVar42._12_3_ = auVar25._12_3_;
      auVar56._8_2_ = 0;
      auVar56._0_8_ = uVar236;
      auVar56[10] = uVar242;
      auVar56._11_4_ = auVar42._11_4_;
      auVar77._8_2_ = 0;
      auVar77._0_8_ = uVar236;
      auVar77._10_5_ = auVar56._10_5_;
      auVar91[8] = uVar241;
      auVar91._0_8_ = uVar236;
      auVar91._9_6_ = auVar77._9_6_;
      auVar147._7_8_ = 0;
      auVar147._0_7_ = auVar91._8_7_;
      auVar148._8_7_ = 0;
      auVar148._0_8_ = SUB158(auVar147 << 0x40, 7);
      auVar149._9_6_ = 0;
      auVar149._0_9_ = SUB159(auVar148 << 0x38, 6);
      auVar150._10_5_ = 0;
      auVar150._0_10_ = SUB1510(auVar149 << 0x30, 5);
      auVar151._11_4_ = 0;
      auVar151._0_11_ = SUB1511(auVar150 << 0x28, 4);
      auVar222._12_3_ = 0;
      auVar222._0_12_ = SUB1512(auVar151 << 0x20, 3);
      auVar129._2_13_ = SUB1513(auVar222 << 0x18, 2);
      auVar129._0_2_ = (ushort)uVar236 & 0xff;
      Var240 = (unkuint10)auVar129._0_4_ << 0x40;
      uVar239 = (undefined2)Var145;
      auVar26._10_2_ = 0;
      auVar26._0_10_ = auVar141._0_10_;
      auVar26._12_2_ = uVar239;
      auVar3._10_2_ = 0;
      auVar3._0_10_ = auVar141._0_10_;
      auVar3._12_2_ = uVar239;
      auVar152._2_4_ = auVar3._10_4_;
      auVar152._0_2_ = auVar146._0_2_;
      auVar152._6_8_ = 0;
      auVar57._4_2_ = auVar128._2_2_;
      auVar57._0_4_ = auVar141._0_4_;
      auVar57._6_8_ = SUB148(auVar152 << 0x40, 6);
      auVar92._10_2_ = 0;
      auVar92._0_10_ = Var240;
      auVar92[0xc] = uVar244;
      auVar153._2_3_ = auVar92._10_3_;
      auVar153._0_2_ = auVar25._12_2_;
      auVar153._5_8_ = 0;
      auVar93._10_2_ = 0;
      auVar93._0_10_ = Var240;
      auVar93[0xc] = uVar244;
      iVar232 = (int)CONCAT42(auVar26._10_4_, auVar146._0_2_) + ( auVar141._0_4_ & 0xffff ) + (uint)auVar91._8_2_ + (int)CONCAT32(auVar93._10_3_, auVar25._12_2_) + ( auVar26._10_4_ >> 0x10 ) + auVar57._4_4_ + (int)CONCAT72(SUB137(auVar153 << 0x40, 6), auVar56._10_2_) + ( uint )(uint3)(auVar93._10_3_ >> 0x10);
      iVar234 = iVar232 * 2;
      if (param_2 != (ulong*)0x0) {
         uVar236 = *param_2;
         uVar244 = ( undefined1 )(uVar236 >> 0x38);
         auVar4._8_6_ = 0;
         auVar4._0_8_ = uVar236;
         auVar4[0xe] = uVar244;
         uVar243 = ( undefined1 )(uVar236 >> 0x30);
         auVar27._8_4_ = 0;
         auVar27._0_8_ = uVar236;
         auVar27[0xc] = uVar243;
         auVar27._13_2_ = auVar4._13_2_;
         auVar43._8_4_ = 0;
         auVar43._0_8_ = uVar236;
         auVar43._12_3_ = auVar27._12_3_;
         uVar242 = ( undefined1 )(uVar236 >> 0x28);
         auVar58._8_2_ = 0;
         auVar58._0_8_ = uVar236;
         auVar58[10] = uVar242;
         auVar58._11_4_ = auVar43._11_4_;
         auVar78._8_2_ = 0;
         auVar78._0_8_ = uVar236;
         auVar78._10_5_ = auVar58._10_5_;
         uVar241 = ( undefined1 )(uVar236 >> 0x20);
         auVar94[8] = uVar241;
         auVar94._0_8_ = uVar236;
         auVar94._9_6_ = auVar78._9_6_;
         auVar154._7_8_ = 0;
         auVar154._0_7_ = auVar94._8_7_;
         Var145 = CONCAT81(SUB158(auVar154 << 0x40, 7), (char)( uVar236 >> 0x18 ));
         auVar210._9_6_ = 0;
         auVar210._0_9_ = Var145;
         auVar155._1_10_ = SUB1510(auVar210 << 0x30, 5);
         auVar155[0] = (char)( uVar236 >> 0x10 );
         auVar211._11_4_ = 0;
         auVar211._0_11_ = auVar155;
         auVar123[2] = (char)( uVar236 >> 8 );
         auVar123._0_2_ = (ushort)uVar236;
         auVar123._3_12_ = SUB1512(auVar211 << 0x20, 3);
         auVar130[1] = 0;
         auVar130[0] = (byte)uVar236;
         auVar130._2_13_ = auVar123._2_13_;
         auVar5._8_6_ = 0;
         auVar5._0_8_ = uVar236;
         auVar5[0xe] = uVar244;
         auVar28._8_4_ = 0;
         auVar28._0_8_ = uVar236;
         auVar28[0xc] = uVar243;
         auVar28._13_2_ = auVar5._13_2_;
         auVar44._8_4_ = 0;
         auVar44._0_8_ = uVar236;
         auVar44._12_3_ = auVar28._12_3_;
         auVar59._8_2_ = 0;
         auVar59._0_8_ = uVar236;
         auVar59[10] = uVar242;
         auVar59._11_4_ = auVar44._11_4_;
         auVar79._8_2_ = 0;
         auVar79._0_8_ = uVar236;
         auVar79._10_5_ = auVar59._10_5_;
         auVar95[8] = uVar241;
         auVar95._0_8_ = uVar236;
         auVar95._9_6_ = auVar79._9_6_;
         auVar156._7_8_ = 0;
         auVar156._0_7_ = auVar95._8_7_;
         auVar157._8_7_ = 0;
         auVar157._0_8_ = SUB158(auVar156 << 0x40, 7);
         auVar158._9_6_ = 0;
         auVar158._0_9_ = SUB159(auVar157 << 0x38, 6);
         auVar159._10_5_ = 0;
         auVar159._0_10_ = SUB1510(auVar158 << 0x30, 5);
         auVar160._11_4_ = 0;
         auVar160._0_11_ = SUB1511(auVar159 << 0x28, 4);
         auVar223._12_3_ = 0;
         auVar223._0_12_ = SUB1512(auVar160 << 0x20, 3);
         auVar131._2_13_ = SUB1513(auVar223 << 0x18, 2);
         auVar131._0_2_ = (ushort)uVar236 & 0xff;
         Var240 = (unkuint10)auVar131._0_4_ << 0x40;
         uVar239 = (undefined2)Var145;
         auVar6._10_2_ = 0;
         auVar6._0_10_ = auVar130._0_10_;
         auVar6._12_2_ = uVar239;
         auVar7._10_2_ = 0;
         auVar7._0_10_ = auVar130._0_10_;
         auVar7._12_2_ = uVar239;
         auVar161._2_4_ = auVar7._10_4_;
         auVar161._0_2_ = auVar155._0_2_;
         auVar161._6_8_ = 0;
         auVar60._4_2_ = auVar123._2_2_;
         auVar60._0_4_ = auVar130._0_4_;
         auVar60._6_8_ = SUB148(auVar161 << 0x40, 6);
         auVar96._10_2_ = 0;
         auVar96._0_10_ = Var240;
         auVar96[0xc] = uVar244;
         auVar162._2_3_ = auVar96._10_3_;
         auVar162._0_2_ = auVar28._12_2_;
         auVar162._5_8_ = 0;
         auVar97._4_2_ = auVar59._10_2_;
         auVar97._0_4_ = auVar95._8_4_;
         auVar97._6_7_ = SUB137(auVar162 << 0x40, 6);
         auVar98._10_2_ = 0;
         auVar98._0_10_ = Var240;
         auVar98[0xc] = uVar244;
         iVar234 = (int)CONCAT42(auVar6._10_4_, auVar155._0_2_) + ( auVar130._0_4_ & 0xffff ) + ( auVar95._8_4_ & 0xffff ) + (int)CONCAT32(auVar98._10_3_, auVar28._12_2_) + ( auVar6._10_4_ >> 0x10 ) + auVar60._4_4_ + auVar97._4_4_ + ( uint )(uint3)(auVar98._10_3_ >> 0x10) + iVar232;
      }

      uVar235 = iVar234 + 8 >> 4;
   }

   uVar236 = ( ulong )(uVar235 & 0xff) * 0x101010101010101;
   puVar238 = (ulong*)( param_1 + 0x400 );
   do {
      puVar231 = puVar238;
      *puVar231 = uVar236;
      puVar238 = puVar231 + 8;
      puVar231[4] = uVar236;
   }
 while ( puVar238 != (ulong*)( param_1 + 0x500 ) );
   puVar233 = (ulong*)( param_1 + 0x600 );
   if (param_3 == (ulong*)0x0) {
      if (( (int)puVar233 - (int)puVar238 & 0x20U ) != 0) {
         *puVar238 = 0x7f7f7f7f7f7f7f7f;
         puVar238 = puVar231 + 0xc;
         if (puVar233 == puVar238) goto LAB_00101db8;
      }

      do {
         *puVar238 = 0x7f7f7f7f7f7f7f7f;
         puVar231 = puVar238 + 8;
         puVar238[4] = 0x7f7f7f7f7f7f7f7f;
         puVar238 = puVar231;
      }
 while ( puVar233 != puVar231 );
   }
 else {
      do {
         puVar231 = puVar238 + 4;
         *puVar238 = *param_3;
         puVar238 = puVar231;
      }
 while ( puVar231 != puVar233 );
   }

   LAB_00101db8:puVar238 = (ulong*)( param_1 + 0x510 );
   if (param_2 == (ulong*)0x0) {
      puVar231 = puVar238;
      do {
         *puVar231 = 0x8181818181818181;
         puVar233 = puVar231 + 8;
         puVar231[4] = 0x8181818181818181;
         puVar231 = puVar233;
      }
 while ( puVar233 != (ulong*)( param_1 + 0x610 ) );
      puVar231 = (ulong*)( param_1 + 0x410 );
      if (param_3 != (ulong*)0x0) {
         do {
            puVar233 = puVar231 + 4;
            *puVar231 = *param_3;
            puVar231 = puVar233;
         }
 while ( puVar233 != puVar238 );
         uVar236 = param_3[1];
         puVar238 = (ulong*)0x0;
         uVar244 = ( undefined1 )(uVar236 >> 0x38);
         auVar16._8_6_ = 0;
         auVar16._0_8_ = uVar236;
         auVar16[0xe] = uVar244;
         uVar243 = ( undefined1 )(uVar236 >> 0x30);
         auVar37._8_4_ = 0;
         auVar37._0_8_ = uVar236;
         auVar37[0xc] = uVar243;
         auVar37._13_2_ = auVar16._13_2_;
         auVar51._8_4_ = 0;
         auVar51._0_8_ = uVar236;
         auVar51._12_3_ = auVar37._12_3_;
         uVar242 = ( undefined1 )(uVar236 >> 0x28);
         auVar70._8_2_ = 0;
         auVar70._0_8_ = uVar236;
         auVar70[10] = uVar242;
         auVar70._11_4_ = auVar51._11_4_;
         auVar86._8_2_ = 0;
         auVar86._0_8_ = uVar236;
         auVar86._10_5_ = auVar70._10_5_;
         uVar241 = ( undefined1 )(uVar236 >> 0x20);
         auVar110[8] = uVar241;
         auVar110._0_8_ = uVar236;
         auVar110._9_6_ = auVar86._9_6_;
         auVar190._7_8_ = 0;
         auVar190._0_7_ = auVar110._8_7_;
         auVar191._8_7_ = 0;
         auVar191._0_8_ = SUB158(auVar190 << 0x40, 7);
         auVar192._9_6_ = 0;
         auVar192._0_9_ = SUB159(auVar191 << 0x38, 6);
         auVar193._10_5_ = 0;
         auVar193._0_10_ = SUB1510(auVar192 << 0x30, 5);
         auVar194._11_4_ = 0;
         auVar194._0_11_ = SUB1511(auVar193 << 0x28, 4);
         uVar245 = (ushort)uVar236;
         auVar227._12_3_ = 0;
         auVar227._0_12_ = SUB1512(auVar194 << 0x20, 3);
         auVar137._2_13_ = SUB1513(auVar227 << 0x18, 2);
         auVar137._0_2_ = uVar245 & 0xff;
         auVar17._8_6_ = 0;
         auVar17._0_8_ = uVar236;
         auVar17[0xe] = uVar244;
         auVar38._8_4_ = 0;
         auVar38._0_8_ = uVar236;
         auVar38[0xc] = uVar243;
         auVar38._13_2_ = auVar17._13_2_;
         auVar52._8_4_ = 0;
         auVar52._0_8_ = uVar236;
         auVar52._12_3_ = auVar38._12_3_;
         auVar71._8_2_ = 0;
         auVar71._0_8_ = uVar236;
         auVar71[10] = uVar242;
         auVar71._11_4_ = auVar52._11_4_;
         auVar87._8_2_ = 0;
         auVar87._0_8_ = uVar236;
         auVar87._10_5_ = auVar71._10_5_;
         auVar111[8] = uVar241;
         auVar111._0_8_ = uVar236;
         auVar111._9_6_ = auVar87._9_6_;
         auVar195._7_8_ = 0;
         auVar195._0_7_ = auVar111._8_7_;
         Var145 = CONCAT81(SUB158(auVar195 << 0x40, 7), (char)( uVar236 >> 0x18 ));
         auVar218._9_6_ = 0;
         auVar218._0_9_ = Var145;
         auVar196._1_10_ = SUB1510(auVar218 << 0x30, 5);
         auVar196[0] = (char)( uVar236 >> 0x10 );
         auVar219._11_4_ = 0;
         auVar219._0_11_ = auVar196;
         auVar126[2] = (char)( uVar236 >> 8 );
         auVar126._0_2_ = uVar245;
         auVar126._3_12_ = SUB1512(auVar219 << 0x20, 3);
         auVar138._2_13_ = auVar126._2_13_;
         auVar138._0_2_ = uVar245 & 0xff;
         Var240 = (unkuint10)auVar137._0_4_ << 0x40;
         uVar239 = (undefined2)Var145;
         auVar18._10_2_ = 0;
         auVar18._0_10_ = auVar138._0_10_;
         auVar18._12_2_ = uVar239;
         auVar19._10_2_ = 0;
         auVar19._0_10_ = auVar138._0_10_;
         auVar19._12_2_ = uVar239;
         auVar197._2_4_ = auVar19._10_4_;
         auVar197._0_2_ = auVar196._0_2_;
         auVar197._6_8_ = 0;
         auVar72._4_2_ = auVar126._2_2_;
         auVar72._0_4_ = auVar138._0_4_;
         auVar72._6_8_ = SUB148(auVar197 << 0x40, 6);
         auVar112._10_2_ = 0;
         auVar112._0_10_ = Var240;
         auVar112[0xc] = uVar244;
         auVar198._2_3_ = auVar112._10_3_;
         auVar198._0_2_ = auVar37._12_2_;
         auVar198._5_8_ = 0;
         auVar113._10_2_ = 0;
         auVar113._0_10_ = Var240;
         auVar113[0xc] = uVar244;
         iVar234 = ( ( auVar138._0_4_ & 0xffff ) + (int)CONCAT42(auVar18._10_4_, auVar196._0_2_) + (uint)auVar110._8_2_ + (int)CONCAT32(auVar113._10_3_, auVar37._12_2_) + auVar72._4_4_ + ( auVar18._10_4_ >> 0x10 ) + (int)CONCAT72(SUB137(auVar198 << 0x40, 6), auVar70._10_2_) + ( uint )(uint3)(auVar113._10_3_ >> 0x10) ) * 2;
         goto LAB_00101f0d;
      }

      if (( (int)puVar238 - (int)puVar231 & 0x20U ) == 0) goto LAB_001022fc;
      *puVar231 = 0x8181818181818181;
      for (puVar231 = (ulong*)( param_1 + 0x430 ); puVar238 != puVar231; puVar231 = puVar231 + 8) {
         LAB_001022fc:*puVar231 = 0x8181818181818181;
         puVar231[4] = 0x8181818181818181;
      }

      param_3 = (ulong*)0x0;
      puVar238 = (ulong*)0x0;
      uVar235 = 0x80;
   }
 else {
      puVar231 = puVar238;
      puVar233 = param_2;
      do {
         uVar236 = *puVar233;
         puVar237 = puVar231 + 4;
         puVar233 = (ulong*)( (long)puVar233 + 1 );
         *puVar231 = (ulong)(byte)uVar236 * 0x101010101010101;
         puVar231 = puVar237;
      }
 while ( (ulong*)( param_1 + 0x610 ) != puVar237 );
      puVar231 = (ulong*)( param_1 + 0x410 );
      puVar233 = param_2;
      if (param_3 == (ulong*)0x0) {
         do {
            puVar237 = puVar231 + 4;
            *puVar231 = ( ulong )(byte) * puVar233 * 0x101010101010101;
            puVar233 = (ulong*)( (long)puVar233 + 1 );
            puVar231 = puVar237;
         }
 while ( puVar238 != puVar237 );
         puVar238 = param_2 + 2;
         param_3 = (ulong*)0x0;
         uVar236 = param_2[2];
         uVar244 = ( undefined1 )(uVar236 >> 0x38);
         auVar20._8_6_ = 0;
         auVar20._0_8_ = uVar236;
         auVar20[0xe] = uVar244;
         uVar243 = ( undefined1 )(uVar236 >> 0x30);
         auVar39._8_4_ = 0;
         auVar39._0_8_ = uVar236;
         auVar39[0xc] = uVar243;
         auVar39._13_2_ = auVar20._13_2_;
         auVar53._8_4_ = 0;
         auVar53._0_8_ = uVar236;
         auVar53._12_3_ = auVar39._12_3_;
         uVar242 = ( undefined1 )(uVar236 >> 0x28);
         auVar73._8_2_ = 0;
         auVar73._0_8_ = uVar236;
         auVar73[10] = uVar242;
         auVar73._11_4_ = auVar53._11_4_;
         auVar88._8_2_ = 0;
         auVar88._0_8_ = uVar236;
         auVar88._10_5_ = auVar73._10_5_;
         uVar241 = ( undefined1 )(uVar236 >> 0x20);
         auVar114[8] = uVar241;
         auVar114._0_8_ = uVar236;
         auVar114._9_6_ = auVar88._9_6_;
         auVar199._7_8_ = 0;
         auVar199._0_7_ = auVar114._8_7_;
         auVar200._8_7_ = 0;
         auVar200._0_8_ = SUB158(auVar199 << 0x40, 7);
         auVar201._9_6_ = 0;
         auVar201._0_9_ = SUB159(auVar200 << 0x38, 6);
         auVar202._10_5_ = 0;
         auVar202._0_10_ = SUB1510(auVar201 << 0x30, 5);
         auVar203._11_4_ = 0;
         auVar203._0_11_ = SUB1511(auVar202 << 0x28, 4);
         uVar245 = (ushort)uVar236;
         auVar228._12_3_ = 0;
         auVar228._0_12_ = SUB1512(auVar203 << 0x20, 3);
         auVar139._2_13_ = SUB1513(auVar228 << 0x18, 2);
         auVar139._0_2_ = uVar245 & 0xff;
         auVar21._8_6_ = 0;
         auVar21._0_8_ = uVar236;
         auVar21[0xe] = uVar244;
         auVar40._8_4_ = 0;
         auVar40._0_8_ = uVar236;
         auVar40[0xc] = uVar243;
         auVar40._13_2_ = auVar21._13_2_;
         auVar54._8_4_ = 0;
         auVar54._0_8_ = uVar236;
         auVar54._12_3_ = auVar40._12_3_;
         auVar74._8_2_ = 0;
         auVar74._0_8_ = uVar236;
         auVar74[10] = uVar242;
         auVar74._11_4_ = auVar54._11_4_;
         auVar89._8_2_ = 0;
         auVar89._0_8_ = uVar236;
         auVar89._10_5_ = auVar74._10_5_;
         auVar115[8] = uVar241;
         auVar115._0_8_ = uVar236;
         auVar115._9_6_ = auVar89._9_6_;
         auVar204._7_8_ = 0;
         auVar204._0_7_ = auVar115._8_7_;
         Var145 = CONCAT81(SUB158(auVar204 << 0x40, 7), (char)( uVar236 >> 0x18 ));
         auVar220._9_6_ = 0;
         auVar220._0_9_ = Var145;
         auVar205._1_10_ = SUB1510(auVar220 << 0x30, 5);
         auVar205[0] = (char)( uVar236 >> 0x10 );
         auVar221._11_4_ = 0;
         auVar221._0_11_ = auVar205;
         auVar127[2] = (char)( uVar236 >> 8 );
         auVar127._0_2_ = uVar245;
         auVar127._3_12_ = SUB1512(auVar221 << 0x20, 3);
         auVar140._2_13_ = auVar127._2_13_;
         auVar140._0_2_ = uVar245 & 0xff;
         Var240 = (unkuint10)auVar139._0_4_ << 0x40;
         uVar239 = (undefined2)Var145;
         auVar22._10_2_ = 0;
         auVar22._0_10_ = auVar140._0_10_;
         auVar22._12_2_ = uVar239;
         auVar23._10_2_ = 0;
         auVar23._0_10_ = auVar140._0_10_;
         auVar23._12_2_ = uVar239;
         auVar206._2_4_ = auVar23._10_4_;
         auVar206._0_2_ = auVar205._0_2_;
         auVar206._6_8_ = 0;
         auVar75._4_2_ = auVar127._2_2_;
         auVar75._0_4_ = auVar140._0_4_;
         auVar75._6_8_ = SUB148(auVar206 << 0x40, 6);
         auVar116._10_2_ = 0;
         auVar116._0_10_ = Var240;
         auVar116[0xc] = uVar244;
         auVar207._2_3_ = auVar116._10_3_;
         auVar207._0_2_ = auVar39._12_2_;
         auVar207._5_8_ = 0;
         auVar117._10_2_ = 0;
         auVar117._0_10_ = Var240;
         auVar117[0xc] = uVar244;
         uVar235 = (int)( ( ( auVar140._0_4_ & 0xffff ) + (int)CONCAT42(auVar22._10_4_, auVar205._0_2_) + (uint)auVar114._8_2_ + (int)CONCAT32(auVar117._10_3_, auVar39._12_2_) + auVar75._4_4_ + ( auVar22._10_4_ >> 0x10 ) + (int)CONCAT72(SUB137(auVar207 << 0x40, 6), auVar73._10_2_) + ( uint )(uint3)(auVar117._10_3_ >> 0x10) ) * 2 + 8 ) >> 4;
      }
 else {
         bVar1 = *(byte*)( (long)param_2 + -1 );
         do {
            uVar236 = *puVar233;
            lVar229 = 0;
            do {
               *(undefined*)( (long)puVar231 + lVar229 ) = ( &DAT_0010271f )[( ulong ) * (byte*)( (long)param_3 + lVar229 ) + ( (ulong)(byte)uVar236 - (ulong)bVar1 )];
               lVar229 = lVar229 + 1;
            }
 while ( lVar229 != 8 );
            puVar231 = puVar231 + 4;
            puVar233 = (ulong*)( (long)puVar233 + 1 );
         }
 while ( puVar238 != puVar231 );
         uVar236 = param_3[1];
         puVar238 = param_2 + 2;
         uVar244 = ( undefined1 )(uVar236 >> 0x38);
         auVar29._8_6_ = 0;
         auVar29._0_8_ = uVar236;
         auVar29[0xe] = uVar244;
         uVar243 = ( undefined1 )(uVar236 >> 0x30);
         auVar45._8_4_ = 0;
         auVar45._0_8_ = uVar236;
         auVar45[0xc] = uVar243;
         auVar45._13_2_ = auVar29._13_2_;
         auVar61._8_4_ = 0;
         auVar61._0_8_ = uVar236;
         auVar61._12_3_ = auVar45._12_3_;
         uVar242 = ( undefined1 )(uVar236 >> 0x28);
         auVar80._8_2_ = 0;
         auVar80._0_8_ = uVar236;
         auVar80[10] = uVar242;
         auVar80._11_4_ = auVar61._11_4_;
         auVar99._8_2_ = 0;
         auVar99._0_8_ = uVar236;
         auVar99._10_5_ = auVar80._10_5_;
         uVar241 = ( undefined1 )(uVar236 >> 0x20);
         auVar119[8] = uVar241;
         auVar119._0_8_ = uVar236;
         auVar119._9_6_ = auVar99._9_6_;
         auVar163._7_8_ = 0;
         auVar163._0_7_ = auVar119._8_7_;
         auVar164._8_7_ = 0;
         auVar164._0_8_ = SUB158(auVar163 << 0x40, 7);
         auVar165._9_6_ = 0;
         auVar165._0_9_ = SUB159(auVar164 << 0x38, 6);
         auVar166._10_5_ = 0;
         auVar166._0_10_ = SUB1510(auVar165 << 0x30, 5);
         auVar167._11_4_ = 0;
         auVar167._0_11_ = SUB1511(auVar166 << 0x28, 4);
         auVar224._12_3_ = 0;
         auVar224._0_12_ = SUB1512(auVar167 << 0x20, 3);
         auVar142[1] = 0;
         auVar142[0] = (byte)uVar236;
         auVar142._2_13_ = SUB1513(auVar224 << 0x18, 2);
         auVar8._8_6_ = 0;
         auVar8._0_8_ = uVar236;
         auVar8[0xe] = uVar244;
         auVar30._8_4_ = 0;
         auVar30._0_8_ = uVar236;
         auVar30[0xc] = uVar243;
         auVar30._13_2_ = auVar8._13_2_;
         auVar46._8_4_ = 0;
         auVar46._0_8_ = uVar236;
         auVar46._12_3_ = auVar30._12_3_;
         auVar62._8_2_ = 0;
         auVar62._0_8_ = uVar236;
         auVar62[10] = uVar242;
         auVar62._11_4_ = auVar46._11_4_;
         auVar81._8_2_ = 0;
         auVar81._0_8_ = uVar236;
         auVar81._10_5_ = auVar62._10_5_;
         auVar100[8] = uVar241;
         auVar100._0_8_ = uVar236;
         auVar100._9_6_ = auVar81._9_6_;
         auVar168._7_8_ = 0;
         auVar168._0_7_ = auVar100._8_7_;
         Var145 = CONCAT81(SUB158(auVar168 << 0x40, 7), (char)( uVar236 >> 0x18 ));
         auVar212._9_6_ = 0;
         auVar212._0_9_ = Var145;
         auVar169._1_10_ = SUB1510(auVar212 << 0x30, 5);
         auVar169[0] = (char)( uVar236 >> 0x10 );
         auVar213._11_4_ = 0;
         auVar213._0_11_ = auVar169;
         auVar124[2] = (char)( uVar236 >> 8 );
         auVar124._0_2_ = (ushort)uVar236;
         auVar124._3_12_ = SUB1512(auVar213 << 0x20, 3);
         auVar132._2_13_ = auVar124._2_13_;
         auVar132._0_2_ = (ushort)uVar236 & 0xff;
         Var240 = (unkuint10)auVar142._0_4_ << 0x40;
         uVar239 = (undefined2)Var145;
         auVar31._10_2_ = 0;
         auVar31._0_10_ = auVar132._0_10_;
         auVar31._12_2_ = uVar239;
         auVar9._10_2_ = 0;
         auVar9._0_10_ = auVar132._0_10_;
         auVar9._12_2_ = uVar239;
         auVar170._2_4_ = auVar9._10_4_;
         auVar170._0_2_ = auVar169._0_2_;
         auVar170._6_8_ = 0;
         auVar63._4_2_ = auVar124._2_2_;
         auVar63._0_4_ = auVar132._0_4_;
         auVar63._6_8_ = SUB148(auVar170 << 0x40, 6);
         auVar120._10_2_ = 0;
         auVar120._0_10_ = Var240;
         auVar120[0xc] = uVar244;
         auVar171._2_3_ = auVar120._10_3_;
         auVar171._0_2_ = auVar45._12_2_;
         auVar171._5_8_ = 0;
         uVar236 = param_2[2];
         auVar121._10_2_ = 0;
         auVar121._0_10_ = Var240;
         auVar121[0xc] = uVar244;
         uVar244 = ( undefined1 )(uVar236 >> 0x38);
         auVar10._8_6_ = 0;
         auVar10._0_8_ = uVar236;
         auVar10[0xe] = uVar244;
         uVar243 = ( undefined1 )(uVar236 >> 0x30);
         auVar32._8_4_ = 0;
         auVar32._0_8_ = uVar236;
         auVar32[0xc] = uVar243;
         auVar32._13_2_ = auVar10._13_2_;
         auVar47._8_4_ = 0;
         auVar47._0_8_ = uVar236;
         auVar47._12_3_ = auVar32._12_3_;
         uVar242 = ( undefined1 )(uVar236 >> 0x28);
         auVar64._8_2_ = 0;
         auVar64._0_8_ = uVar236;
         auVar64[10] = uVar242;
         auVar64._11_4_ = auVar47._11_4_;
         auVar82._8_2_ = 0;
         auVar82._0_8_ = uVar236;
         auVar82._10_5_ = auVar64._10_5_;
         uVar241 = ( undefined1 )(uVar236 >> 0x20);
         auVar101[8] = uVar241;
         auVar101._0_8_ = uVar236;
         auVar101._9_6_ = auVar82._9_6_;
         auVar172._7_8_ = 0;
         auVar172._0_7_ = auVar101._8_7_;
         auVar173._8_7_ = 0;
         auVar173._0_8_ = SUB158(auVar172 << 0x40, 7);
         auVar174._9_6_ = 0;
         auVar174._0_9_ = SUB159(auVar173 << 0x38, 6);
         auVar175._10_5_ = 0;
         auVar175._0_10_ = SUB1510(auVar174 << 0x30, 5);
         auVar176._11_4_ = 0;
         auVar176._0_11_ = SUB1511(auVar175 << 0x28, 4);
         auVar225._12_3_ = 0;
         auVar225._0_12_ = SUB1512(auVar176 << 0x20, 3);
         auVar133[1] = 0;
         auVar133[0] = (byte)uVar236;
         auVar133._2_13_ = SUB1513(auVar225 << 0x18, 2);
         auVar11._8_6_ = 0;
         auVar11._0_8_ = uVar236;
         auVar11[0xe] = uVar244;
         auVar33._8_4_ = 0;
         auVar33._0_8_ = uVar236;
         auVar33[0xc] = uVar243;
         auVar33._13_2_ = auVar11._13_2_;
         auVar48._8_4_ = 0;
         auVar48._0_8_ = uVar236;
         auVar48._12_3_ = auVar33._12_3_;
         auVar65._8_2_ = 0;
         auVar65._0_8_ = uVar236;
         auVar65[10] = uVar242;
         auVar65._11_4_ = auVar48._11_4_;
         auVar83._8_2_ = 0;
         auVar83._0_8_ = uVar236;
         auVar83._10_5_ = auVar65._10_5_;
         auVar102[8] = uVar241;
         auVar102._0_8_ = uVar236;
         auVar102._9_6_ = auVar83._9_6_;
         auVar177._7_8_ = 0;
         auVar177._0_7_ = auVar102._8_7_;
         Var145 = CONCAT81(SUB158(auVar177 << 0x40, 7), (char)( uVar236 >> 0x18 ));
         auVar214._9_6_ = 0;
         auVar214._0_9_ = Var145;
         auVar178._1_10_ = SUB1510(auVar214 << 0x30, 5);
         auVar178[0] = (char)( uVar236 >> 0x10 );
         auVar215._11_4_ = 0;
         auVar215._0_11_ = auVar178;
         auVar125[2] = (char)( uVar236 >> 8 );
         auVar125._0_2_ = (ushort)uVar236;
         auVar125._3_12_ = SUB1512(auVar215 << 0x20, 3);
         auVar134._2_13_ = auVar125._2_13_;
         auVar134._0_2_ = (ushort)uVar236 & 0xff;
         Var240 = (unkuint10)auVar133._0_4_ << 0x40;
         uVar239 = (undefined2)Var145;
         auVar12._10_2_ = 0;
         auVar12._0_10_ = auVar134._0_10_;
         auVar12._12_2_ = uVar239;
         auVar179._2_4_ = auVar12._10_4_;
         auVar179._0_2_ = auVar178._0_2_;
         auVar179._6_8_ = 0;
         auVar66._4_2_ = auVar125._2_2_;
         auVar66._0_4_ = auVar134._0_4_;
         auVar66._6_8_ = SUB148(auVar179 << 0x40, 6);
         auVar13._10_2_ = 0;
         auVar13._0_10_ = auVar134._0_10_;
         auVar13._12_2_ = uVar239;
         auVar103._10_2_ = 0;
         auVar103._0_10_ = Var240;
         auVar103[0xc] = uVar244;
         auVar180._2_3_ = auVar103._10_3_;
         auVar180._0_2_ = auVar32._12_2_;
         auVar180._5_8_ = 0;
         auVar104._4_2_ = auVar64._10_2_;
         auVar104._0_4_ = auVar101._8_4_;
         auVar104._6_7_ = SUB137(auVar180 << 0x40, 6);
         auVar105._10_2_ = 0;
         auVar105._0_10_ = Var240;
         auVar105[0xc] = uVar244;
         iVar234 = auVar66._4_4_ + ( auVar13._10_4_ >> 0x10 ) + auVar104._4_4_ + ( uint )(uint3)(auVar105._10_3_ >> 0x10) + ( auVar134._0_4_ & 0xffff ) + (int)CONCAT42(auVar13._10_4_, auVar178._0_2_) + ( auVar101._8_4_ & 0xffff ) + (int)CONCAT32(auVar105._10_3_, auVar32._12_2_) + ( auVar31._10_4_ >> 0x10 ) + auVar63._4_4_ + (int)CONCAT72(SUB137(auVar171 << 0x40, 6), auVar80._10_2_) + ( uint )(uint3)(auVar121._10_3_ >> 0x10) + (int)CONCAT42(auVar31._10_4_, auVar169._0_2_) + ( auVar132._0_4_ & 0xffff ) + (uint)auVar119._8_2_ + (int)CONCAT32(auVar121._10_3_, auVar45._12_2_);
         LAB_00101f0d:param_3 = param_3 + 1;
         uVar235 = iVar234 + 8 >> 4;
      }

   }

   uVar236 = ( ulong )(uVar235 & 0xff) * 0x101010101010101;
   puVar231 = (ulong*)( param_1 + 0x408 );
   do {
      puVar233 = puVar231;
      *puVar233 = uVar236;
      puVar231 = puVar233 + 8;
      puVar233[4] = uVar236;
   }
 while ( puVar231 != (ulong*)( param_1 + 0x508 ) );
   puVar237 = (ulong*)( param_1 + 0x608 );
   if (param_3 == (ulong*)0x0) {
      if (( (int)puVar237 - (int)puVar231 & 0x20U ) != 0) {
         *puVar231 = 0x7f7f7f7f7f7f7f7f;
         puVar231 = puVar233 + 0xc;
         if (puVar237 == puVar231) goto LAB_00101f68;
      }

      do {
         *puVar231 = 0x7f7f7f7f7f7f7f7f;
         puVar233 = puVar231 + 8;
         puVar231[4] = 0x7f7f7f7f7f7f7f7f;
         puVar231 = puVar233;
      }
 while ( puVar237 != puVar233 );
   }
 else {
      do {
         puVar233 = puVar231 + 4;
         *puVar231 = *param_3;
         puVar231 = puVar233;
      }
 while ( puVar233 != puVar237 );
   }

   LAB_00101f68:puVar231 = (ulong*)( param_1 + 0x518 );
   if (puVar238 == (ulong*)0x0) {
      puVar238 = puVar231;
      do {
         *puVar238 = 0x8181818181818181;
         puVar233 = puVar238 + 8;
         puVar238[4] = 0x8181818181818181;
         puVar238 = puVar233;
      }
 while ( puVar233 != (ulong*)( param_1 + 0x618 ) );
      puVar238 = (ulong*)( param_1 + 0x418 );
      if (param_3 != (ulong*)0x0) {
         do {
            puVar233 = puVar238 + 4;
            *puVar238 = *param_3;
            puVar238 = puVar233;
         }
 while ( puVar231 != puVar233 );
         return;
      }

      if (( (int)puVar231 - (int)puVar238 & 0x20U ) != 0) {
         *puVar238 = 0x8181818181818181;
         puVar238 = (ulong*)( param_1 + 0x438 );
         if ((ulong*)( param_1 + 0x438 ) == puVar231) {
            return;
         }

      }

      do {
         *puVar238 = 0x8181818181818181;
         puVar238[4] = 0x8181818181818181;
         if (puVar238 + 8 == puVar231) {
            return;
         }

         puVar238[8] = 0x8181818181818181;
         puVar233 = puVar238 + 0x10;
         puVar238[0xc] = 0x8181818181818181;
         puVar238 = puVar233;
      }
 while ( puVar233 != puVar231 );
   }
 else {
      puVar233 = puVar231;
      puVar237 = puVar238;
      do {
         uVar236 = *puVar237;
         puVar230 = puVar233 + 4;
         puVar237 = (ulong*)( (long)puVar237 + 1 );
         *puVar233 = (ulong)(byte)uVar236 * 0x101010101010101;
         puVar233 = puVar230;
      }
 while ( puVar230 != (ulong*)( param_1 + 0x618 ) );
      puVar233 = (ulong*)( param_1 + 0x418 );
      if (param_3 == (ulong*)0x0) {
         do {
            uVar236 = *puVar238;
            puVar237 = puVar233 + 4;
            puVar238 = (ulong*)( (long)puVar238 + 1 );
            *puVar233 = (ulong)(byte)uVar236 * 0x101010101010101;
            puVar233 = puVar237;
         }
 while ( puVar231 != puVar237 );
      }
 else {
         bVar1 = *(byte*)( (long)puVar238 + -1 );
         do {
            uVar236 = *puVar238;
            lVar229 = 0;
            do {
               *(undefined*)( (long)puVar233 + lVar229 ) = ( &DAT_0010271f )[( ulong ) * (byte*)( (long)param_3 + lVar229 ) + ( (ulong)(byte)uVar236 - (ulong)bVar1 )];
               lVar229 = lVar229 + 1;
            }
 while ( lVar229 != 8 );
            puVar233 = puVar233 + 4;
            puVar238 = (ulong*)( (long)puVar238 + 1 );
         }
 while ( puVar231 != puVar233 );
      }

   }

   return;
}
void VP8SetHistogramData(long param_1, int *param_2) {
   int iVar1;
   ulong uVar2;
   int iVar3;
   ulong uVar4;
   uVar2 = 0;
   uVar4 = 1;
   iVar3 = 0;
   do {
      iVar1 = *(int*)( param_1 + uVar2 * 4 );
      if (0 < iVar1) {
         uVar4 = uVar2 & 0xffffffff;
         if (iVar3 < iVar1) {
            iVar3 = iVar1;
         }

      }

      uVar2 = uVar2 + 1;
   }
 while ( uVar2 != 0x20 );
   *param_2 = iVar3;
   param_2[1] = (int)uVar4;
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void VP8EncDspInit(void) {
   int iVar1;
   long lVar2;
   if ((code*)VP8EncDspInit_body_last_cpuinfo_used_0 == _VP8GetCPUInfo) {
      return;
   }

   VP8DspInit();
   if (tables_ok == 0) {
      lVar2 = -0xff;
      do {
         for (; (uint)lVar2 < 0x100; lVar2 = lVar2 + 1) {
            ( &DAT_0010271f )[lVar2] = (char)lVar2;
         }

         ( &DAT_0010271f )[lVar2] = (char)~(byte)((ulong)lVar2 >> 0x18) >> 7;
         lVar2 = lVar2 + 1;
      }
 while ( lVar2 != 0x1ff );
      tables_ok = 1;
   }

   VP8ITransform = ITransform_C;
   VP8FTransform = FTransform_C;
   VP8FTransformWHT = FTransformWHT_C;
   VP8TDisto4x4 = Disto4x4_C;
   VP8TDisto16x16 = Disto16x16_C;
   VP8CollectHistogram = CollectHistogram_C;
   VP8SSE16x16 = SSE16x16_C;
   VP8SSE16x8 = SSE16x8_C;
   VP8SSE8x8 = SSE8x8_C;
   VP8SSE4x4 = SSE4x4_C;
   VP8EncQuantizeBlock = QuantizeBlock_C;
   VP8EncQuantizeBlockWHT = QuantizeBlock_C;
   VP8Copy4x4 = Copy4x4_C;
   VP8EncQuantize2Blocks = Quantize2Blocks_C;
   VP8FTransform2 = FTransform2_C;
   VP8Copy16x8 = Copy16x8_C;
   VP8EncPredLuma4 = Intra4Preds_C;
   VP8EncPredLuma16 = Intra16Preds_C;
   VP8EncPredChroma8 = IntraChromaPreds_C;
   VP8Mean16x4 = Mean16x4_C;
   if (( _VP8GetCPUInfo != (code*)0x0 ) && ( iVar1 = iVar1 != 0 )) {
      VP8EncDspInitSSE2();
   }

   VP8EncDspInit_body_last_cpuinfo_used_0 = _VP8GetCPUInfo;
   return;
}

