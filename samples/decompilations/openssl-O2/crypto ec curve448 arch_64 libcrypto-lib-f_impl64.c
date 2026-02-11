
void ossl_gf_mul(ulong *param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
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
  long lVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  ulong *puVar22;
  ulong uVar23;
  ulong uVar24;
  long in_FS_OFFSET;
  long lVar25;
  long lVar26;
  ulong *local_d8;
  long local_d0;
  ulong local_a8 [13];
  long local_40;
  
  local_d8 = (ulong *)(param_3 + 0x20);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar20 = 0;
  do {
    plVar1 = (long *)(param_2 + 0x20 + lVar20);
    lVar25 = plVar1[1];
    lVar26 = ((long *)(param_2 + lVar20))[1];
    plVar2 = (long *)(param_3 + 0x20 + lVar20);
    lVar18 = *plVar2;
    lVar19 = plVar2[1];
    *(long *)((long)local_a8 + lVar20) = *plVar1 + *(long *)(param_2 + lVar20);
    *(long *)((long)local_a8 + lVar20 + 8) = lVar25 + lVar26;
    lVar25 = *(long *)(param_3 + lVar20) + lVar18;
    lVar26 = ((long *)(param_3 + lVar20))[1] + lVar19;
    *(long *)((long)local_a8 + lVar20 + 0x20) = lVar25;
    *(long *)((long)local_a8 + lVar20 + 0x28) = lVar26;
    *(long *)((long)local_a8 + lVar20 + 0x40) = lVar25 + lVar18;
    *(long *)((long)local_a8 + lVar20 + 0x48) = lVar26 + lVar19;
    lVar20 = lVar20 + 0x10;
  } while (lVar20 != 0x20);
  lVar20 = 0;
  auVar16 = ZEXT816(0);
  local_d0 = 1;
  auVar17 = ZEXT816(0);
  do {
    lVar25 = 0;
    auVar15 = ZEXT816(0);
    puVar22 = local_d8;
    do {
      uVar21 = (ulong)((uint)lVar20 - (int)lVar25);
      auVar3._8_8_ = 0;
      auVar3._0_8_ = *(ulong *)(param_2 + lVar25 * 8);
      auVar9._8_8_ = 0;
      auVar9._0_8_ = *(ulong *)(param_3 + uVar21 * 8);
      auVar15 = auVar3 * auVar9 + auVar15;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_a8[lVar25];
      auVar10._8_8_ = 0;
      auVar10._0_8_ = local_a8[uVar21 + 4];
      auVar16 = auVar4 * auVar10 + auVar16;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = *(ulong *)(param_2 + 0x20 + lVar25 * 8);
      auVar11._8_8_ = 0;
      auVar11._0_8_ = *puVar22;
      auVar17 = auVar5 * auVar11 + auVar17;
      lVar25 = lVar25 + 1;
      puVar22 = puVar22 + -1;
    } while ((uint)lVar25 <= (uint)lVar20);
    if (local_d0 != 4) {
      lVar26 = 0x18;
      lVar25 = local_d0;
      do {
        auVar6._8_8_ = 0;
        auVar6._0_8_ = *(ulong *)(param_3 + 0x20 + lVar26);
        auVar12._8_8_ = 0;
        auVar12._0_8_ = *(ulong *)(param_2 + lVar25 * 8);
        auVar15 = auVar6 * auVar12 + auVar15;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = *(ulong *)((long)local_a8 + lVar26 + 0x40);
        auVar13._8_8_ = 0;
        auVar13._0_8_ = local_a8[lVar25];
        auVar16 = auVar7 * auVar13 + auVar16;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = *(ulong *)((long)local_a8 + lVar26 + 0x20);
        auVar14._8_8_ = 0;
        auVar14._0_8_ = *(ulong *)(param_2 + 0x20 + lVar25 * 8);
        auVar17 = auVar8 * auVar14 + auVar17;
        lVar25 = lVar25 + 1;
        lVar26 = lVar26 + -8;
      } while ((int)lVar25 != 4);
    }
    auVar3 = auVar16 - auVar15;
    local_d0 = local_d0 + 1;
    param_1[lVar20] = SUB168(auVar15 + auVar17,0) & 0xffffffffffffff;
    auVar17 = auVar15 + auVar17 >> 0x38;
    local_d8 = local_d8 + 1;
    auVar16 = auVar3 >> 0x38;
    param_1[lVar20 + 4] = auVar3._0_8_ & 0xffffffffffffff;
    lVar20 = lVar20 + 1;
  } while (lVar20 != 4);
  uVar23 = SUB168(auVar17 + auVar16,0);
  uVar24 = uVar23 + param_1[4];
  uVar21 = auVar16._0_8_ + *param_1;
  param_1[5] = param_1[5] +
               (uVar24 >> 0x38 |
               (SUB168(auVar17 + auVar16,8) + (ulong)CARRY8(uVar23,param_1[4])) * 0x100);
  param_1[4] = uVar24 & 0xffffffffffffff;
  param_1[1] = param_1[1] +
               (uVar21 >> 0x38 | (auVar16._8_8_ + (ulong)CARRY8(auVar16._0_8_,*param_1)) * 0x100);
  *param_1 = uVar21 & 0xffffffffffffff;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



void ossl_gf_mulw_unsigned(ulong *param_1,long param_2,uint param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  lVar6 = 0;
  auVar5 = ZEXT816(0);
  auVar2 = ZEXT816(0);
  do {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = CONCAT44(0,param_3);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = *(ulong *)(param_2 + lVar6);
    auVar1 = auVar1 * auVar3 + auVar2;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = CONCAT44(0,param_3);
    auVar4._8_8_ = 0;
    auVar4._0_8_ = *(ulong *)(param_2 + 0x20 + lVar6);
    auVar3 = auVar2 * auVar4 + auVar5;
    auVar2 = auVar1 >> 0x38;
    *(ulong *)((long)param_1 + lVar6) = auVar1._0_8_ & 0xffffffffffffff;
    auVar5 = auVar3 >> 0x38;
    *(ulong *)((long)param_1 + lVar6 + 0x20) = auVar3._0_8_ & 0xffffffffffffff;
    lVar6 = lVar6 + 8;
  } while (lVar6 != 0x20);
  uVar7 = SUB168(auVar5 + auVar2,0);
  uVar8 = uVar7 + param_1[4];
  param_1[5] = param_1[5] +
               (uVar8 >> 0x38 |
               (SUB168(auVar5 + auVar2,8) + (ulong)CARRY8(uVar7,param_1[4])) * 0x100);
  uVar7 = *param_1;
  uVar9 = auVar5._0_8_ + *param_1;
  param_1[4] = uVar8 & 0xffffffffffffff;
  *param_1 = uVar9 & 0xffffffffffffff;
  param_1[1] = param_1[1] +
               (uVar9 >> 0x38 | (auVar5._8_8_ + (ulong)CARRY8(auVar5._0_8_,uVar7)) * 0x100);
  return;
}



void ossl_gf_sqr(long *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
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
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  ulong uVar65;
  ulong uVar66;
  ulong uVar67;
  ulong uVar68;
  ulong uVar69;
  ulong uVar70;
  ulong uVar71;
  ulong uVar72;
  ulong uVar73;
  ulong uVar74;
  ulong uVar75;
  ulong uVar76;
  long local_88;
  ulong local_78;
  long local_68;
  
  uVar66 = param_2[1];
  uVar67 = param_2[7];
  uVar68 = param_2[2];
  uVar70 = param_2[3];
  uVar71 = *param_2;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar66;
  auVar33._8_8_ = 0;
  auVar33._0_8_ = uVar68;
  uVar72 = param_2[4];
  uVar73 = *param_2 + param_2[4];
  uVar74 = param_2[1] + param_2[5];
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar70;
  auVar34._8_8_ = 0;
  auVar34._0_8_ = uVar71;
  uVar75 = param_2[6] + param_2[2];
  uVar76 = param_2[7] + param_2[3];
  auVar3 = auVar3 * auVar33 + auVar4 * auVar34;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar74;
  auVar35._8_8_ = 0;
  auVar35._0_8_ = uVar75;
  uVar1 = param_2[6];
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar76;
  auVar36._8_8_ = 0;
  auVar36._0_8_ = uVar73;
  uVar2 = param_2[5];
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar2;
  auVar37._8_8_ = 0;
  auVar37._0_8_ = uVar1;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar67;
  auVar38._8_8_ = 0;
  auVar38._0_8_ = uVar72;
  auVar5 = (auVar5 * auVar35 + auVar6 * auVar36) - auVar3;
  auVar3 = auVar3 + auVar7 * auVar37 + auVar8 * auVar38;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar74 * 2;
  auVar39._8_8_ = 0;
  auVar39._0_8_ = uVar76;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar75;
  auVar40._8_8_ = 0;
  auVar40._0_8_ = uVar75;
  auVar4 = auVar9 * auVar39 + auVar10 * auVar40 + (auVar5 >> 0x37);
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar71;
  auVar41._8_8_ = 0;
  auVar41._0_8_ = uVar71;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar2 * 2;
  auVar42._8_8_ = 0;
  auVar42._0_8_ = uVar67;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar1;
  auVar43._8_8_ = 0;
  auVar43._0_8_ = uVar1;
  local_88 = auVar3._0_8_;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar73;
  auVar44._8_8_ = 0;
  auVar44._0_8_ = uVar73;
  auVar3 = auVar4 + auVar13 * auVar43 + (auVar12 * auVar42 - auVar11 * auVar41) + (auVar3 >> 0x37) +
                    auVar14 * auVar44;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar72;
  auVar45._8_8_ = 0;
  auVar45._0_8_ = uVar72;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = uVar68;
  auVar46._8_8_ = 0;
  auVar46._0_8_ = uVar68;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar66 * 2;
  auVar47._8_8_ = 0;
  auVar47._0_8_ = uVar70;
  auVar4 = auVar4 + (((auVar11 * auVar41 + auVar15 * auVar45) - auVar16 * auVar46) -
                    auVar17 * auVar47);
  local_78 = auVar3._0_8_;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = uVar75 * 2;
  auVar48._8_8_ = 0;
  auVar48._0_8_ = uVar76;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar71 * 2;
  auVar49._8_8_ = 0;
  auVar49._0_8_ = uVar66;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar1 * 2;
  auVar50._8_8_ = 0;
  auVar50._0_8_ = uVar67;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = uVar73 * 2;
  auVar51._8_8_ = 0;
  auVar51._0_8_ = uVar74;
  auVar3 = (auVar3 >> 0x38) +
           auVar18 * auVar48 + auVar21 * auVar51 + (auVar20 * auVar50 - auVar19 * auVar49);
  uVar65 = auVar3._0_8_;
  uVar69 = auVar3._8_8_;
  auVar22._8_8_ = 0;
  auVar22._0_8_ = uVar72 * 2;
  auVar52._8_8_ = 0;
  auVar52._0_8_ = uVar2;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = uVar68 * 2;
  auVar53._8_8_ = 0;
  auVar53._0_8_ = uVar70;
  auVar6 = auVar18 * auVar48 + ((auVar19 * auVar49 + auVar22 * auVar52) - auVar23 * auVar53) +
           (auVar4 >> 0x38);
  param_1[1] = auVar6._0_8_ & 0xffffffffffffff;
  auVar63._8_8_ = uVar69 >> 0x38;
  auVar63._0_8_ = uVar65 >> 0x38 | uVar69 * 0x100;
  param_1[5] = uVar65 & 0xffffffffffffff;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = uVar76;
  auVar54._8_8_ = 0;
  auVar54._0_8_ = uVar76;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = uVar71 * 2;
  auVar55._8_8_ = 0;
  auVar55._0_8_ = uVar68;
  auVar26._8_8_ = 0;
  auVar26._0_8_ = uVar66;
  auVar56._8_8_ = 0;
  auVar56._0_8_ = uVar66;
  auVar3 = auVar26 * auVar56 + auVar25 * auVar55;
  auVar27._8_8_ = 0;
  auVar27._0_8_ = uVar74;
  auVar57._8_8_ = 0;
  auVar57._0_8_ = uVar74;
  auVar28._8_8_ = 0;
  auVar28._0_8_ = uVar67;
  auVar58._8_8_ = 0;
  auVar58._0_8_ = uVar67;
  auVar29._8_8_ = 0;
  auVar29._0_8_ = uVar73 * 2;
  auVar59._8_8_ = 0;
  auVar59._0_8_ = uVar75;
  auVar63 = auVar24 * auVar54 + auVar28 * auVar58 + (auVar27 * auVar57 - auVar3) + auVar29 * auVar59
            + auVar63;
  auVar30._8_8_ = 0;
  auVar30._0_8_ = uVar72 * 2;
  auVar60._8_8_ = 0;
  auVar60._0_8_ = uVar1;
  auVar31._8_8_ = 0;
  auVar31._0_8_ = uVar70;
  auVar61._8_8_ = 0;
  auVar61._0_8_ = uVar70;
  auVar32._8_8_ = 0;
  auVar32._0_8_ = uVar2;
  auVar62._8_8_ = 0;
  auVar62._0_8_ = uVar2;
  auVar3 = (auVar6 >> 0x38) +
           auVar3 + auVar32 * auVar62 + (auVar30 * auVar60 - auVar31 * auVar61) + auVar24 * auVar54;
  uVar66 = auVar3._0_8_;
  uVar70 = auVar3._8_8_;
  uVar67 = uVar66 >> 0x38 | uVar70 * 0x100;
  param_1[2] = uVar66 & 0xffffffffffffff;
  param_1[6] = auVar63._0_8_ & 0xffffffffffffff;
  uVar66 = local_88 * 2 & 0xffffffffffffff;
  uVar68 = uVar67 + uVar66;
  local_68 = auVar5._0_8_;
  auVar64._8_8_ = 0;
  auVar64._0_8_ = local_68 * 2 & 0xffffffffffffff;
  auVar64 = (auVar63 >> 0x38) + auVar64;
  uVar71 = auVar64._0_8_;
  param_1[3] = uVar68 & 0xffffffffffffff;
  uVar72 = uVar71 >> 0x38 | auVar64._8_8_ << 8;
  param_1[7] = uVar71 & 0xffffffffffffff;
  param_1[4] = (uVar68 >> 0x38 | ((uVar70 >> 0x38) + (ulong)CARRY8(uVar67,uVar66)) * 0x100) + uVar72
               + (local_78 & 0xffffffffffffff);
  *param_1 = (auVar4._0_8_ & 0xffffffffffffff) + uVar72;
  return;
}


