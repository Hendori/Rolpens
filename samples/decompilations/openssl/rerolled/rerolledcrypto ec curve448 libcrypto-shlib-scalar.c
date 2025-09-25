void sc_montmul(long *param_1, ulong *param_2, ulong *param_3) {
   undefined1 auVar1[16];
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   undefined1 auVar12[16];
   undefined1 auVar13[16];
   undefined1 auVar14[16];
   undefined1 auVar15[16];
   undefined1 auVar16[16];
   undefined1 auVar17[16];
   undefined1 auVar18[16];
   undefined1 auVar19[16];
   undefined1 auVar20[16];
   undefined1 auVar21[16];
   undefined1 auVar22[16];
   undefined1 auVar23[16];
   undefined1 auVar24[16];
   undefined1 auVar25[16];
   undefined1 auVar26[16];
   undefined1 auVar27[16];
   undefined1 auVar28[16];
   undefined1 auVar29[16];
   undefined1 auVar30[16];
   undefined1 auVar31[16];
   undefined1 auVar32[16];
   undefined1 auVar33[16];
   undefined1 auVar34[16];
   undefined1 auVar35[16];
   undefined1 auVar36[16];
   undefined1 auVar37[16];
   undefined1 auVar38[16];
   undefined1 auVar39[16];
   undefined1 auVar40[16];
   undefined1 auVar41[16];
   undefined1 auVar42[16];
   undefined1 auVar43[16];
   undefined1 auVar44[16];
   undefined1 auVar45[16];
   ulong uVar46;
   ulong uVar47;
   ulong uVar48;
   ulong uVar49;
   ulong uVar50;
   ulong uVar51;
   ulong uVar52;
   ulong uVar53;
   ulong *local_108;
   ulong local_f8;
   ulong local_e8;
   ulong local_d8;
   ulong local_c8;
   ulong local_b8;
   ulong local_b0;
   ulong local_a8;
   ulong local_98;
   local_f8 = 0;
   local_b0 = 0;
   local_98 = 0;
   local_a8 = 0;
   local_c8 = 0;
   local_d8 = 0;
   local_e8 = 0;
   local_b8 = 0;
   local_108 = param_2;
   do {
      auVar45._8_8_ = 0;
      auVar45._0_8_ = local_f8;
      auVar44._8_8_ = 0;
      auVar44._0_8_ = local_b0;
      auVar43._8_8_ = 0;
      auVar43._0_8_ = local_98;
      auVar42._8_8_ = 0;
      auVar42._0_8_ = local_a8;
      auVar41._8_8_ = 0;
      auVar41._0_8_ = local_c8;
      auVar40._8_8_ = 0;
      auVar40._0_8_ = local_d8;
      auVar39._8_8_ = 0;
      auVar39._0_8_ = local_e8;
      uVar48 = *local_108;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = *param_3;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar48;
      auVar39 = auVar1 * auVar8 + auVar39;
      uVar46 = auVar39._0_8_;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = auVar39._8_8_;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = param_3[1];
      auVar9._8_8_ = 0;
      auVar9._0_8_ = uVar48;
      auVar40 = auVar2 * auVar9 + auVar21 + auVar40;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = param_3[2];
      auVar10._8_8_ = 0;
      auVar10._0_8_ = uVar48;
      auVar22._8_8_ = 0;
      auVar22._0_8_ = auVar40._8_8_;
      auVar41 = auVar3 * auVar10 + auVar22 + auVar41;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = param_3[3];
      auVar11._8_8_ = 0;
      auVar11._0_8_ = uVar48;
      auVar23._8_8_ = 0;
      auVar23._0_8_ = auVar41._8_8_;
      auVar42 = auVar4 * auVar11 + auVar23 + auVar42;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = param_3[4];
      auVar12._8_8_ = 0;
      auVar12._0_8_ = uVar48;
      auVar24._8_8_ = 0;
      auVar24._0_8_ = auVar42._8_8_;
      auVar43 = auVar5 * auVar12 + auVar24 + auVar43;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = param_3[5];
      auVar13._8_8_ = 0;
      auVar13._0_8_ = uVar48;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = auVar43._8_8_;
      auVar44 = auVar6 * auVar13 + auVar25 + auVar44;
      auVar26._8_8_ = 0;
      auVar26._0_8_ = auVar44._8_8_;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar48;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = param_3[6];
      auVar45 = auVar7 * auVar14 + auVar26 + auVar45;
      uVar47 = auVar45._8_8_;
      uVar48 = uVar46 * 0x3bd440fae918bc5;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = uVar48;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = uVar48;
      auVar27._8_8_ = 0;
      auVar27._0_8_ = auVar40._0_8_;
      auVar28._8_8_ = 0;
      auVar28._0_8_ = SUB168(ZEXT816(0x2378c292ab5844f3) * auVar15, 8) + (ulong)CARRY8(uVar46, SUB168(ZEXT816(0x2378c292ab5844f3) * auVar15, 0));
      auVar28 = ZEXT816(0x216cc2728dc58f55) * auVar16 + auVar27 + auVar28;
      local_e8 = auVar28._0_8_;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = uVar48;
      auVar29._8_8_ = 0;
      auVar29._0_8_ = auVar41._0_8_;
      auVar30._8_8_ = 0;
      auVar30._0_8_ = auVar28._8_8_;
      auVar30 = ZEXT816(0xc44edb49aed63690) * auVar17 + auVar29 + auVar30;
      local_d8 = auVar30._0_8_;
      auVar31._8_8_ = 0;
      auVar31._0_8_ = auVar42._0_8_;
      auVar32._8_8_ = 0;
      auVar32._0_8_ = auVar30._8_8_;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = uVar48;
      auVar32 = ZEXT816(0xffffffff7cca23e9) * auVar18 + auVar31 + auVar32;
      local_c8 = auVar32._0_8_;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = uVar48;
      auVar34._8_8_ = 0;
      auVar34._0_8_ = auVar32._8_8_;
      auVar33._8_8_ = 0;
      auVar33._0_8_ = auVar43._0_8_;
      auVar34 = ZEXT816(0xffffffffffffffff) * auVar19 + auVar33 + auVar34;
      local_a8 = auVar34._0_8_;
      auVar37._8_8_ = 0;
      auVar37._0_8_ = auVar44._0_8_;
      auVar38._8_8_ = 0;
      auVar38._0_8_ = auVar34._8_8_;
      auVar38 = ZEXT816(0xffffffffffffffff) * auVar19 + auVar37 + auVar38;
      local_98 = auVar38._0_8_;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar48;
      auVar36._8_8_ = 0;
      auVar36._0_8_ = auVar38._8_8_;
      auVar35._8_8_ = 0;
      auVar35._0_8_ = auVar45._0_8_;
      auVar36 = ZEXT816(0x3fffffffffffffff) * auVar20 + auVar35 + auVar36;
      local_b0 = auVar36._0_8_;
      uVar46 = auVar36._8_8_;
      uVar48 = uVar46 + uVar47;
      local_f8 = uVar48 + local_b8;
      local_b8 = (ulong)CARRY8(uVar46, uVar47) + (ulong)CARRY8(uVar48, local_b8);
      local_108 = local_108 + 1;
   }
 while ( param_2 + 7 != local_108 );
   uVar48 = ( ulong )(0x2378c292ab5844f2 < local_e8) - 1;
   uVar47 = uVar48 + local_d8 + 0xde933d8d723a70ab;
   uVar48 = ( (long)uVar48 >> 0x3f ) + (ulong)CARRY8(uVar48, local_d8) + -1 + ( ulong )(0x216cc2728dc58f54 < uVar48 + local_d8);
   uVar53 = local_c8 + uVar48 + 0x3bb124b65129c970;
   uVar48 = ( (long)uVar48 >> 0x3f ) + (ulong)CARRY8(local_c8, uVar48) + -1 + ( ulong )(0xc44edb49aed6368f < local_c8 + uVar48);
   uVar51 = uVar48 + local_a8 + 0x8335dc17;
   uVar48 = ( (long)uVar48 >> 0x3f ) + (ulong)CARRY8(uVar48, local_a8) + -1 + ( ulong )(0xffffffff7cca23e8 < uVar48 + local_a8);
   uVar52 = local_98 + uVar48 + 1;
   uVar48 = ( (long)uVar48 >> 0x3f ) + (ulong)CARRY8(local_98, uVar48) + -1 + ( ulong )(0xfffffffffffffffe < local_98 + uVar48);
   uVar49 = local_b0 + uVar48 + 1;
   uVar50 = ( (long)uVar48 >> 0x3f ) + (ulong)CARRY8(local_b0, uVar48) + -1 + ( ulong )(0xfffffffffffffffe < local_b0 + uVar48);
   local_b8 = local_b8 + ( (long)uVar50 >> 0x3f ) + (ulong)CARRY8(local_f8, uVar50) + -1 + ( ulong )(0x3ffffffffffffffe < local_f8 + uVar50);
   uVar48 = (ulong)CARRY8(local_e8 + 0xdc873d6d54a7bb0d, local_b8 & 0x2378c292ab5844f3);
   *param_1 = local_e8 + 0xdc873d6d54a7bb0d + ( local_b8 & 0x2378c292ab5844f3 );
   uVar46 = uVar48 + uVar47;
   uVar47 = (ulong)CARRY8(uVar48, uVar47) + (ulong)CARRY8(uVar46, local_b8 & 0x216cc2728dc58f55);
   param_1[1] = uVar46 + ( local_b8 & 0x216cc2728dc58f55 );
   uVar48 = uVar53 + uVar47;
   uVar46 = (ulong)CARRY8(uVar53, uVar47) + (ulong)CARRY8(uVar48, local_b8 & 0xc44edb49aed63690);
   param_1[2] = uVar48 + ( local_b8 & 0xc44edb49aed63690 );
   uVar48 = uVar51 + uVar46;
   uVar46 = (ulong)CARRY8(uVar51, uVar46) + (ulong)CARRY8(uVar48, local_b8 & 0xffffffff7cca23e9);
   param_1[3] = uVar48 + ( local_b8 & 0xffffffff7cca23e9 );
   uVar48 = uVar46 + uVar52;
   uVar46 = (ulong)CARRY8(uVar46, uVar52) + (ulong)CARRY8(uVar48, local_b8);
   param_1[4] = uVar48 + local_b8;
   uVar48 = uVar49 + uVar46;
   param_1[5] = uVar48 + local_b8;
   param_1[6] = (ulong)CARRY8(uVar49, uVar46) + (ulong)CARRY8(uVar48, local_b8) + local_f8 + uVar50 + 0xc000000000000001 + ( local_b8 & 0x3fffffffffffffff );
   return;
}
void ossl_curve448_scalar_mul(undefined8 param_1) {
   sc_montmul();
   sc_montmul(param_1, param_1, sc_r2);
   return;
}
void ossl_curve448_scalar_sub(long *param_1, ulong *param_2, ulong *param_3) {
   ulong uVar1;
   ulong uVar2;
   ulong uVar3;
   ulong uVar4;
   ulong uVar5;
   ulong uVar6;
   ulong uVar7;
   ulong uVar8;
   ulong uVar9;
   ulong uVar10;
   ulong uVar11;
   uVar1 = *param_2;
   uVar2 = *param_3;
   uVar5 = -(ulong)(uVar1 < uVar2);
   *param_1 = uVar1 - uVar2;
   uVar3 = uVar5 + param_2[1];
   uVar4 = uVar3 - param_3[1];
   uVar5 = ( ( (long)uVar5 >> 0x3f ) + (ulong)CARRY8(uVar5, param_2[1]) ) - ( ulong )(uVar3 < param_3[1]);
   param_1[1] = uVar4;
   uVar3 = uVar5 + param_2[2];
   uVar6 = uVar3 - param_3[2];
   uVar9 = ( ( (long)uVar5 >> 0x3f ) + (ulong)CARRY8(uVar5, param_2[2]) ) - ( ulong )(uVar3 < param_3[2]);
   param_1[2] = uVar6;
   uVar5 = param_2[3];
   uVar7 = uVar9 + param_2[3];
   uVar3 = param_3[3];
   uVar11 = uVar7 - param_3[3];
   param_1[3] = uVar11;
   uVar3 = ( ( (long)uVar9 >> 0x3f ) + (ulong)CARRY8(uVar9, uVar5) ) - ( ulong )(uVar7 < uVar3);
   uVar5 = uVar3 + param_2[4];
   uVar7 = uVar5 - param_3[4];
   uVar3 = ( ( (long)uVar3 >> 0x3f ) + (ulong)CARRY8(uVar3, param_2[4]) ) - ( ulong )(uVar5 < param_3[4]);
   param_1[4] = uVar7;
   uVar5 = uVar3 + param_2[5];
   uVar9 = uVar5 - param_3[5];
   uVar3 = ( ( (long)uVar3 >> 0x3f ) + (ulong)CARRY8(uVar3, param_2[5]) ) - ( ulong )(uVar5 < param_3[5]);
   param_1[5] = uVar9;
   uVar8 = uVar3 + param_2[6];
   uVar5 = param_3[6];
   uVar10 = ( ( (long)uVar3 >> 0x3f ) + (ulong)CARRY8(uVar3, param_2[6]) ) - ( ulong )(uVar8 < param_3[6]);
   uVar3 = (ulong)CARRY8(uVar1 - uVar2, uVar10 & 0x2378c292ab5844f3);
   *param_1 = ( uVar1 - uVar2 ) + ( uVar10 & 0x2378c292ab5844f3 );
   uVar1 = uVar3 + uVar4;
   uVar2 = (ulong)CARRY8(uVar3, uVar4) + (ulong)CARRY8(uVar1, uVar10 & 0x216cc2728dc58f55);
   param_1[1] = uVar1 + ( uVar10 & 0x216cc2728dc58f55 );
   uVar1 = uVar2 + uVar6;
   uVar2 = (ulong)CARRY8(uVar2, uVar6) + (ulong)CARRY8(uVar1, uVar10 & 0xc44edb49aed63690);
   param_1[2] = uVar1 + ( uVar10 & 0xc44edb49aed63690 );
   uVar1 = uVar11 + uVar2;
   uVar2 = (ulong)CARRY8(uVar11, uVar2) + (ulong)CARRY8(uVar1, uVar10 & 0xffffffff7cca23e9);
   param_1[3] = uVar1 + ( uVar10 & 0xffffffff7cca23e9 );
   uVar1 = uVar2 + uVar7;
   uVar2 = (ulong)CARRY8(uVar2, uVar7) + (ulong)CARRY8(uVar1, uVar10);
   param_1[4] = uVar1 + uVar10;
   uVar1 = uVar2 + uVar9;
   param_1[5] = uVar10 + uVar1;
   param_1[6] = ( uVar8 - uVar5 ) + (ulong)CARRY8(uVar2, uVar9) + (ulong)CARRY8(uVar10, uVar1) + ( uVar10 & 0x3fffffffffffffff );
   return;
}
void ossl_curve448_scalar_add(long *param_1, ulong *param_2, ulong *param_3) {
   ulong uVar1;
   ulong uVar2;
   ulong uVar3;
   ulong uVar4;
   ulong uVar5;
   ulong uVar6;
   ulong uVar7;
   ulong uVar8;
   ulong uVar9;
   ulong uVar10;
   ulong uVar11;
   ulong uVar12;
   ulong uVar13;
   uVar3 = (ulong)CARRY8(*param_3, *param_2);
   uVar9 = param_3[1] + param_2[1];
   uVar10 = uVar9 + uVar3;
   uVar9 = (ulong)CARRY8(param_3[1], param_2[1]) + (ulong)CARRY8(uVar9, uVar3);
   uVar3 = param_3[2] + param_2[2];
   uVar12 = uVar9 + uVar3;
   uVar9 = (ulong)CARRY8(param_3[2], param_2[2]) + (ulong)CARRY8(uVar9, uVar3);
   uVar3 = param_3[3] + param_2[3];
   uVar4 = uVar3 + uVar9;
   uVar9 = (ulong)CARRY8(param_3[3], param_2[3]) + (ulong)CARRY8(uVar3, uVar9);
   uVar3 = param_3[4] + param_2[4];
   uVar5 = uVar3 + uVar9;
   uVar9 = (ulong)CARRY8(param_3[4], param_2[4]) + (ulong)CARRY8(uVar3, uVar9);
   uVar3 = param_3[5] + param_2[5];
   uVar6 = uVar3 + uVar9;
   uVar8 = (ulong)CARRY8(param_3[5], param_2[5]) + (ulong)CARRY8(uVar3, uVar9);
   uVar7 = param_3[6] + param_2[6];
   uVar1 = uVar7 + uVar8;
   uVar3 = *param_2 + *param_3;
   uVar2 = uVar3 + 0xdc873d6d54a7bb0d;
   uVar3 = ( ulong )(0x2378c292ab5844f2 < uVar3) - 1;
   uVar9 = uVar10 + uVar3;
   uVar11 = uVar9 + 0xde933d8d723a70ab;
   uVar3 = ( (long)uVar3 >> 0x3f ) + (ulong)CARRY8(uVar10, uVar3) + -1 + ( ulong )(0x216cc2728dc58f54 < uVar9);
   uVar9 = uVar12 + uVar3;
   uVar13 = uVar9 + 0x3bb124b65129c970;
   uVar10 = ( (long)uVar3 >> 0x3f ) + (ulong)CARRY8(uVar12, uVar3) + -1 + ( ulong )(0xc44edb49aed6368f < uVar9);
   uVar3 = uVar4 + uVar10;
   uVar9 = uVar3 + 0x8335dc17;
   uVar3 = ( (long)uVar10 >> 0x3f ) + (ulong)CARRY8(uVar4, uVar10) + -1 + ( ulong )(0xffffffff7cca23e8 < uVar3);
   uVar4 = uVar3 + uVar5;
   uVar12 = uVar4 + 1;
   uVar4 = ( (long)uVar3 >> 0x3f ) + (ulong)CARRY8(uVar3, uVar5) + -1 + ( ulong )(0xfffffffffffffffe < uVar4);
   uVar3 = uVar4 + uVar6;
   uVar10 = uVar3 + 1;
   uVar3 = ( (long)uVar4 >> 0x3f ) + (ulong)CARRY8(uVar4, uVar6) + -1 + ( ulong )(0xfffffffffffffffe < uVar3);
   uVar5 = uVar3 + uVar1;
   uVar1 = (ulong)CARRY8(param_3[6], param_2[6]) + (ulong)CARRY8(uVar7, uVar8) + ( (long)uVar3 >> 0x3f ) + (ulong)CARRY8(uVar3, uVar1) + -1 + ( ulong )(0x3ffffffffffffffe < uVar5);
   uVar3 = (ulong)CARRY8(uVar2, uVar1 & 0x2378c292ab5844f3);
   *param_1 = uVar2 + ( uVar1 & 0x2378c292ab5844f3 );
   uVar4 = uVar3 + uVar11;
   uVar2 = (ulong)CARRY8(uVar3, uVar11) + (ulong)CARRY8(uVar4, uVar1 & 0x216cc2728dc58f55);
   param_1[1] = uVar4 + ( uVar1 & 0x216cc2728dc58f55 );
   uVar3 = uVar2 + uVar13;
   uVar4 = (ulong)CARRY8(uVar2, uVar13) + (ulong)CARRY8(uVar3, uVar1 & 0xc44edb49aed63690);
   param_1[2] = uVar3 + ( uVar1 & 0xc44edb49aed63690 );
   uVar3 = uVar9 + uVar4;
   uVar9 = (ulong)CARRY8(uVar9, uVar4) + (ulong)CARRY8(uVar3, uVar1 & 0xffffffff7cca23e9);
   param_1[3] = uVar3 + ( uVar1 & 0xffffffff7cca23e9 );
   uVar3 = uVar9 + uVar12;
   uVar9 = (ulong)CARRY8(uVar9, uVar12) + (ulong)CARRY8(uVar3, uVar1);
   param_1[4] = uVar3 + uVar1;
   uVar3 = uVar10 + uVar9;
   param_1[5] = uVar3 + uVar1;
   param_1[6] = uVar5 + 0xc000000000000001 + (ulong)CARRY8(uVar10, uVar9) + (ulong)CARRY8(uVar3, uVar1) + ( uVar1 & 0x3fffffffffffffff );
   return;
}
uint ossl_curve448_scalar_decode(ulong *param_1, long param_2) {
   byte *pbVar1;
   ulong *puVar2;
   char cVar3;
   uint uVar4;
   ulong uVar5;
   uint uVar6;
   ulong uVar7;
   ulong uVar8;
   long lVar9;
   long lVar10;
   uVar7 = 0;
   lVar10 = 0;
   do {
      lVar9 = lVar10;
      uVar8 = 0;
      uVar5 = 0;
      do {
         pbVar1 = (byte*)( param_2 + uVar7 );
         cVar3 = (char)uVar5;
         uVar5 = uVar5 + 1;
         uVar7 = uVar7 + 1;
         uVar8 = uVar8 | ( ulong ) * pbVar1 << ( cVar3 * '\b' & 0x3fU );
         if (7 < uVar5) break;
      }
 while ( uVar7 < 0x38 );
      param_1[lVar9] = uVar8;
      lVar10 = lVar9 + 1;
      if (lVar10 == 7) goto LAB_00100b76;
   }
 while ( uVar7 != 0x38 );
   param_1[lVar10] = 0;
   if (lVar9 != 5) {
      puVar2 = param_1 + lVar9 + 2;
      uVar7 = ( 7 - ( lVar9 + 2 ) ) * 8;
      *puVar2 = 0;
      *(undefined8*)( (long)puVar2 + ( ( uVar7 & 0xffffffff ) - 8 ) ) = 0;
      uVar6 = (int)uVar7 + ( (int)puVar2 - (int)( ( ulong )(puVar2 + 1) & 0xfffffffffffffff8 ) ) & 0xfffffff8;
      if (7 < uVar6) {
         uVar4 = 0;
         do {
            uVar7 = (ulong)uVar4;
            uVar4 = uVar4 + 8;
            *(undefined8*)( ( ( ulong )(puVar2 + 1) & 0xfffffffffffffff8 ) + uVar7 ) = 0;
         }
 while ( uVar4 < uVar6 );
      }

   }

   LAB_00100b76:uVar7 = ( ulong )(0x2378c292ab5844f2 < *param_1) - 1;
   uVar7 = ( (long)uVar7 >> 0x3f ) + (ulong)CARRY8(uVar7, param_1[1]) + -1 + ( ulong )(0x216cc2728dc58f54 < uVar7 + param_1[1]);
   uVar7 = ( (long)uVar7 >> 0x3f ) + (ulong)CARRY8(uVar7, param_1[2]) + -1 + ( ulong )(0xc44edb49aed6368f < uVar7 + param_1[2]);
   uVar7 = ( (long)uVar7 >> 0x3f ) + (ulong)CARRY8(uVar7, param_1[3]) + -1 + ( ulong )(0xffffffff7cca23e8 < uVar7 + param_1[3]);
   uVar7 = ( (long)uVar7 >> 0x3f ) + (ulong)CARRY8(uVar7, param_1[4]) + -1 + ( ulong )(0xfffffffffffffffe < uVar7 + param_1[4]);
   uVar8 = ( (long)uVar7 >> 0x3f ) + (ulong)CARRY8(uVar7, param_1[5]) + -1 + ( ulong )(0xfffffffffffffffe < uVar7 + param_1[5]);
   uVar7 = param_1[6];
   uVar5 = param_1[6];
   ossl_curve448_scalar_mul(param_1, param_1, ossl_curve448_scalar_one);
   return ~(uint)((long)((((long)uVar8 >> 0x3f) + (ulong)CARRY8(uVar8,uVar7) + -1 +
                         (ulong)(0x3ffffffffffffffe < uVar8 + uVar5) & 0xffffffff) - 1) >> 0x3f);
}
void ossl_curve448_scalar_destroy(void *param_1) {
   OPENSSL_cleanse(param_1, 0x38);
   return;
}
void ossl_curve448_scalar_decode_long(ulong *param_1, long param_2, ulong param_3) {
   long lVar1;
   byte *pbVar2;
   char cVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   undefined8 uVar7;
   undefined8 uVar8;
   undefined8 uVar9;
   uint uVar10;
   ulong uVar11;
   int iVar12;
   ulong uVar13;
   ulong uVar14;
   ulong uVar15;
   long lVar16;
   ulong uVar17;
   long in_FS_OFFSET;
   undefined *puStack_c0;
   ulong local_b8[8];
   undefined1 local_78[56];
   long local_40;
   uVar9 = ossl_curve448_scalar_zero._48_8_;
   uVar8 = ossl_curve448_scalar_zero._40_8_;
   uVar7 = ossl_curve448_scalar_zero._32_8_;
   uVar6 = ossl_curve448_scalar_zero._24_8_;
   uVar5 = ossl_curve448_scalar_zero._16_8_;
   uVar4 = ossl_curve448_scalar_zero._8_8_;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_3 == 0) {
      *param_1 = ossl_curve448_scalar_zero._0_8_;
      param_1[1] = uVar4;
      param_1[6] = uVar9;
      param_1[2] = uVar5;
      param_1[3] = uVar6;
      param_1[4] = uVar7;
      param_1[5] = uVar8;
   }
 else {
      uVar17 = ( param_3 / 0x38 ) * 0x38;
      uVar15 = param_3 % 0x38;
      if (param_3 == uVar17) {
         uVar17 = param_3 - 0x38;
         uVar15 = 0x38;
      }

      uVar13 = 0;
      lVar16 = 0;
      do {
         if (uVar15 <= uVar13) {
            local_b8[lVar16] = 0;
            if (lVar16 != 6) {
               lVar1 = ( lVar16 + 1 ) * 8;
               uVar15 = ( 7 - ( lVar16 + 1 ) ) * 8;
               iVar12 = (int)uVar15;
               *(undefined8*)( (long)local_b8 + ( uVar15 & 0xffffffff ) + lVar1 + -8 ) = 0;
               if (7 < iVar12 - 1U) {
                  uVar10 = 0;
                  do {
                     uVar15 = (ulong)uVar10;
                     uVar10 = uVar10 + 8;
                     *(undefined8*)( (long)local_b8 + uVar15 + lVar1 ) = 0;
                  }
 while ( uVar10 < iVar12 - 8U );
               }

            }

            break;
         }

         lVar1 = uVar17 + uVar13;
         uVar14 = 0;
         uVar11 = 0;
         do {
            pbVar2 = (byte*)( lVar1 + param_2 + uVar11 );
            cVar3 = (char)uVar11;
            uVar11 = uVar11 + 1;
            uVar13 = uVar13 + 1;
            uVar14 = uVar14 | ( ulong ) * pbVar2 << ( cVar3 * '\b' & 0x3fU );
            if (7 < uVar11) break;
         }
 while ( uVar13 < uVar15 );
         local_b8[lVar16] = uVar14;
         lVar16 = lVar16 + 1;
      }
 while ( lVar16 != 7 );
      if (param_3 == 0x38) {
         puStack_c0 = (undefined*)0x100ea7;
         ossl_curve448_scalar_mul(param_1, local_b8, ossl_curve448_scalar_one);
         puStack_c0 = (undefined*)0x100eaf;
         ossl_curve448_scalar_destroy(local_b8);
      }
 else {
         while (uVar17 != 0) {
            uVar17 = uVar17 - 0x38;
            puStack_c0 = (undefined*)0x100d82;
            sc_montmul(local_b8, local_b8, sc_r2);
            puStack_c0 = (undefined*)0x100d8e;
            ossl_curve448_scalar_decode(local_78, param_2 + uVar17);
            puStack_c0 = (undefined*)0x100d9c;
            ossl_curve448_scalar_add(local_b8, local_b8, local_78);
         }
;
         param_1[6] = local_b8[6];
         *param_1 = local_b8[0];
         for (int i = 0; i < 5; i++) {
            param_1[( i + 1 )] = local_b8[( i + 1 )];
         }

         puStack_c0 = (undefined*)0x100dcf;
         ossl_curve448_scalar_destroy(local_b8);
         puStack_c0 = (undefined*)0x100dd7;
         ossl_curve448_scalar_destroy(local_78);
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   puStack_c0 = &UNK_00100eb9;
   __stack_chk_fail();
}
void ossl_curve448_scalar_encode(undefined1 *param_1, undefined8 *param_2) {
   *param_1 = (char)*param_2;
   for (int i = 0; i < 7; i++) {
      param_1[( i + 1 )] = (char)( ( ulong ) * param_2 >> ( 8*i + 8 ) );
   }

   for (int i = 0; i < 6; i++) {
      param_1[( 8*i + 8 )] = (char)param_2[( i + 1 )];
      for (int j = 0; j < 3; j++) {
         param_1[( 8*i + ( j + 9 ) )] = (char)( (ulong)param_2[( i + 1 )] >> ( 8*j + 8 ) );
      }

      param_1[( 8*i + 12 )] = (char)*(undefined4*)( (long)param_2 + ( 8*i + 12 ) );
      param_1[( 8*i + 13 )] = (char)( (ulong)param_2[( i + 1 )] >> 40 );
      param_1[( 8*i + 14 )] = (char)*(undefined2*)( (long)param_2 + ( 8*i + 14 ) );
      param_1[( 8*i + 15 )] = *(undefined1*)( (long)param_2 + ( 8*i + 15 ) );
   }

   return;
}
void ossl_curve448_scalar_halve(ulong *param_1, ulong *param_2) {
   ulong uVar1;
   ulong uVar2;
   ulong uVar3;
   ulong uVar4;
   ulong uVar5;
   ulong uVar6;
   uVar3 = *param_2;
   uVar1 = -(ulong)((uint)uVar3 & 1);
   uVar4 = (ulong)CARRY8(uVar1 & 0x2378c292ab5844f3, uVar3);
   uVar6 = param_2[1];
   uVar2 = ( uVar1 & 0x216cc2728dc58f55 ) + param_2[1];
   *param_1 = uVar3 + ( uVar1 & 0x2378c292ab5844f3 );
   uVar3 = (ulong)CARRY8(uVar1 & 0x216cc2728dc58f55, uVar6) + (ulong)CARRY8(uVar2, uVar4);
   param_1[1] = uVar2 + uVar4;
   uVar6 = ( uVar1 & 0xc44edb49aed63690 ) + param_2[2];
   uVar2 = (ulong)CARRY8(uVar1 & 0xc44edb49aed63690, param_2[2]) + (ulong)CARRY8(uVar6, uVar3);
   param_1[2] = uVar6 + uVar3;
   uVar3 = ( uVar1 & 0xffffffff7cca23e9 ) + param_2[3];
   uVar4 = (ulong)CARRY8(uVar1 & 0xffffffff7cca23e9, param_2[3]) + (ulong)CARRY8(uVar3, uVar2);
   param_1[3] = uVar3 + uVar2;
   uVar3 = uVar1 + param_2[4];
   uVar6 = (ulong)CARRY8(uVar1, param_2[4]) + (ulong)CARRY8(uVar3, uVar4);
   param_1[4] = uVar3 + uVar4;
   uVar3 = uVar1 + param_2[5];
   uVar5 = (ulong)CARRY8(uVar1, param_2[5]) + (ulong)CARRY8(uVar3, uVar6);
   param_1[5] = uVar3 + uVar6;
   uVar3 = param_2[6];
   uVar4 = ( uVar1 & 0x3fffffffffffffff ) + param_2[6];
   *param_1 = *param_1 >> 1 | param_1[1] << 0x3f;
   param_1[1] = param_1[1] >> 1 | param_1[2] << 0x3f;
   uVar2 = uVar4 + uVar5;
   param_1[6] = uVar2;
   param_1[2] = param_1[3] << 0x3f | param_1[2] >> 1;
   param_1[3] = param_1[4] << 0x3f | param_1[3] >> 1;
   uVar6 = param_1[6];
   param_1[6] = uVar2 >> 1 | (ulong)CARRY8(uVar1 & 0x3fffffffffffffff, uVar3) + (ulong)CARRY8(uVar4, uVar5) << 0x3f;
   param_1[4] = param_1[5] << 0x3f | param_1[4] >> 1;
   param_1[5] = uVar6 << 0x3f | param_1[5] >> 1;
   return;
}

