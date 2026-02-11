
void x25519_fe51_mul(undefined8 param_1,ulong *param_2,ulong *param_3)

{
  ulong uVar1;
  undefined1 auVar2 [16];
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
  
  uVar1 = *param_3;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = *param_2;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar1;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = *param_2;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = param_3[1];
  auVar4._8_8_ = 0;
  auVar4._0_8_ = param_2[1];
  auVar15._8_8_ = 0;
  auVar15._0_8_ = param_3[4] * 0x13;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = param_2[2];
  auVar16._8_8_ = 0;
  auVar16._0_8_ = param_3[4] * 0x13;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = param_2[2];
  auVar17._8_8_ = 0;
  auVar17._0_8_ = param_3[3] * 0x13;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = param_2[3];
  auVar18._8_8_ = 0;
  auVar18._0_8_ = param_3[3] * 0x13;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = param_2[3];
  auVar19._8_8_ = 0;
  auVar19._0_8_ = param_3[2] * 0x13;
  auVar2 = auVar4 * auVar15 + auVar2 * auVar13 + auVar6 * auVar17 + auVar8 * auVar19;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = param_2[4];
  auVar20._8_8_ = 0;
  auVar20._0_8_ = param_3[2] * 0x13;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = param_2[4];
  auVar21._8_8_ = 0;
  auVar21._0_8_ = param_3[1] * 0x13;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = param_2[1];
  auVar22._8_8_ = 0;
  auVar22._0_8_ = uVar1;
  auVar3 = auVar3 * auVar14 + auVar5 * auVar16 + auVar7 * auVar18 + auVar9 * auVar20 +
           auVar11 * auVar22;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = param_2[4];
  auVar23._8_8_ = 0;
  auVar23._0_8_ = uVar1;
  FUN_001002c0(param_1,param_2,SUB168(auVar12 * auVar23,8),
               auVar2._8_8_ + SUB168(auVar10 * auVar21,8) +
               (ulong)CARRY8(auVar2._0_8_,SUB168(auVar10 * auVar21,0)),auVar3._0_8_,auVar3._8_8_);
  return;
}



void x25519_fe51_sqr(undefined8 param_1,ulong *param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
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
  ulong uVar14;
  
  uVar1 = *param_2;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar1;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar1;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_2[1];
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar1 * 2;
  uVar14 = param_2[3] * 0x13;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = param_2[1] * 2;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = param_2[4] * 0x13;
  auVar2 = auVar4 * auVar10 + auVar2 * auVar8;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = param_2[3];
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar14;
  uVar1 = param_2[2] * 2;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar14;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar1;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar1;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = param_2[4] * 0x13;
  auVar3 = auVar3 * auVar9 + auVar5 * auVar11 + auVar7 * auVar13;
  FUN_001002c0(param_1,uVar1,SUB168(auVar7 * auVar13,8),
               auVar2._8_8_ + SUB168(auVar6 * auVar12,8) +
               (ulong)CARRY8(auVar2._0_8_,SUB168(auVar6 * auVar12,0)),auVar3._0_8_,auVar3._8_8_);
  return;
}



void FUN_001002c0(ulong *param_1,undefined8 param_2,undefined8 param_3,long param_4,ulong param_5,
                 long param_6)

{
  ulong uVar1;
  ulong unaff_RBX;
  ulong uVar2;
  ulong in_R10;
  long in_R11;
  ulong uVar3;
  ulong unaff_R12;
  ulong uVar4;
  long unaff_R13;
  ulong uVar5;
  ulong unaff_R14;
  ulong uVar6;
  long unaff_R15;
  
  uVar3 = in_R11 << 0xd | in_R10 >> 0x33;
  uVar4 = unaff_R12 + uVar3;
  uVar1 = param_4 << 0xd | unaff_RBX >> 0x33;
  uVar2 = param_5 + uVar1;
  uVar5 = (unaff_R13 + (ulong)CARRY8(unaff_R12,uVar3)) * 0x2000 | uVar4 >> 0x33;
  uVar6 = unaff_R14 + uVar5;
  uVar3 = (in_R10 & 0x7ffffffffffff) +
          ((param_6 + (ulong)CARRY8(param_5,uVar1)) * 0x2000 | uVar2 >> 0x33);
  uVar1 = (unaff_RBX & 0x7ffffffffffff) +
          ((unaff_R15 + (ulong)CARRY8(unaff_R14,uVar5)) * 0x2000 | uVar6 >> 0x33) * 0x13;
  *param_1 = uVar1 & 0x7ffffffffffff;
  param_1[1] = (uVar2 & 0x7ffffffffffff) + (uVar1 >> 0x33);
  param_1[2] = uVar3 & 0x7ffffffffffff;
  param_1[3] = (uVar4 & 0x7ffffffffffff) + (uVar3 >> 0x33);
  param_1[4] = uVar6 & 0x7ffffffffffff;
  return;
}



void x25519_fe51_mul121666(undefined8 param_1,ulong *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = *param_2;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_2[1];
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_2[4];
  FUN_001002c0(param_1,param_2,SUB168(ZEXT816(0x1db42) * auVar3,8),
               SUB168(ZEXT816(0x1db42) * auVar1,8),SUB168(ZEXT816(0x1db42) * auVar2,0),
               SUB168(ZEXT816(0x1db42) * auVar2,8));
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint x25519_fe64_eligible(void)

{
  uint uVar1;
  
  uVar1 = 0;
  if ((_DAT_00101008 & 0x80100) == 0x80100) {
    uVar1 = _DAT_00101008 & 0x80100;
  }
  return uVar1;
}



void x25519_fe64_mul(undefined8 param_1,ulong *param_2,ulong *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = *param_2;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = *param_3;
  FUN_00100680(0,param_2,0x26,param_3[1],SUB168(auVar1 * auVar2,0),
               *param_2 * param_3[1] + SUB168(auVar1 * auVar2,8) + param_2[1] * *param_3);
  return;
}



void x25519_fe64_sqr(undefined8 param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  unkint9 Var5;
  unkint9 Var6;
  unkint9 Var7;
  unkint9 Var8;
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
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar1;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = uVar1;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar1;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar2;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar1;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = uVar3;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar1;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar4;
  Var5 = (unkuint9)SUB168(auVar12 * auVar19,0) + (unkuint9)SUB168(auVar11 * auVar18,8) +
         (unkuint9)
         ((char)((unkuint9)SUB168(auVar11 * auVar18,0) + (unkuint9)SUB168(auVar10 * auVar17,8) +
                 (unkuint9)0 >> 0x40) != '\0');
  Var6 = (unkuint9)SUB168(auVar12 * auVar19,8) + (unkuint9)0 +
         (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar2;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar3;
  Var6 = (unkuint9)(ulong)Var6 + (unkuint9)SUB168(auVar13 * auVar20,8) +
         (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar2;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = uVar4;
  Var7 = (unkuint9)SUB168(auVar14 * auVar21,8) + (unkuint9)0 +
         (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar3;
  auVar22._8_8_ = 0;
  auVar22._0_8_ = uVar4;
  Var8 = (unkuint9)SUB168(auVar15 * auVar22,8) + (unkuint9)0 +
         (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
  FUN_00100680(0,uVar4,0x26,uVar2,SUB168(auVar9 * auVar16,0),
               SUB168(auVar10 * auVar17,0) * 2 + (ulong)((char)((unkuint9)Var8 >> 0x40) != '\0') +
               SUB168(auVar9 * auVar16,8) +
               (ulong)((char)((unkuint9)(ulong)Var8 + (unkuint9)0 +
                              (unkuint9)
                              ((char)((unkuint9)(ulong)Var7 + (unkuint9)SUB168(auVar15 * auVar22,0)
                                      + (unkuint9)
                                        ((char)((unkuint9)(ulong)Var6 +
                                                (unkuint9)SUB168(auVar14 * auVar21,0) +
                                                (unkuint9)
                                                ((char)((unkuint9)(ulong)Var5 +
                                                        (unkuint9)SUB168(auVar13 * auVar20,0) +
                                                        (unkuint9)0 >> 0x40) != '\0') >> 0x40) !=
                                        '\0') >> 0x40) != '\0') >> 0x40) != '\0'));
  return;
}



void FUN_00100680(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,ulong param_5,
                 ulong param_6,undefined8 param_7,long *param_8)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  unkint9 Var4;
  unkint9 Var5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  ulong uVar14;
  ulong uVar15;
  ulong in_R10;
  ulong uVar16;
  ulong in_R11;
  ulong uVar17;
  ulong unaff_R12;
  ulong unaff_R13;
  ulong unaff_R14;
  ulong unaff_R15;
  byte in_CF;
  byte in_OF;
  
  auVar6._8_8_ = 0;
  auVar6._0_8_ = param_3;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = unaff_R12;
  Var4 = (unkuint9)param_5 + (unkuint9)SUB168(auVar6 * auVar10,0) + (unkuint9)in_CF;
  uVar14 = (ulong)Var4;
  Var5 = (unkuint9)param_6 + (unkuint9)SUB168(auVar6 * auVar10,8) + (unkuint9)in_OF;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = param_3;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = unaff_R13;
  Var4 = (unkuint9)(ulong)Var5 + (unkuint9)SUB168(auVar7 * auVar11,0) +
         (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
  uVar15 = (ulong)Var4;
  Var5 = (unkuint9)in_R10 + (unkuint9)SUB168(auVar7 * auVar11,8) +
         (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
  auVar8._8_8_ = 0;
  auVar8._0_8_ = param_3;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = unaff_R14;
  Var4 = (unkuint9)(ulong)Var5 + (unkuint9)SUB168(auVar8 * auVar12,0) +
         (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
  uVar16 = (ulong)Var4;
  Var5 = (unkuint9)in_R11 + (unkuint9)SUB168(auVar8 * auVar12,8) +
         (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
  auVar9._8_8_ = 0;
  auVar9._0_8_ = param_3;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = unaff_R15;
  Var4 = (unkuint9)(ulong)Var5 + (unkuint9)SUB168(auVar9 * auVar13,0) +
         (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
  uVar17 = (ulong)Var4;
  param_3 = (SUB168(auVar9 * auVar13,8) + param_1 * 2 +
             (ulong)((char)((unkuint9)Var5 >> 0x40) != '\0') +
            (ulong)((char)((unkuint9)Var4 >> 0x40) != '\0')) * param_3;
  uVar1 = (ulong)CARRY8(uVar14,param_3);
  uVar2 = (ulong)CARRY8(uVar15,uVar1);
  uVar3 = (ulong)CARRY8(uVar16,uVar2);
  param_8[1] = uVar15 + uVar1;
  param_8[2] = uVar16 + uVar2;
  param_8[3] = uVar17 + uVar3;
  *param_8 = uVar14 + param_3 + (-(ulong)CARRY8(uVar17,uVar3) & 0x26);
  return;
}



void x25519_fe64_mul121666(long *param_1,ulong *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = *param_2;
  uVar8 = SUB168(ZEXT816(0x1db42) * auVar1,0);
  uVar6 = SUB168(ZEXT816(0x1db42) * auVar1,8);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_2[1];
  uVar9 = SUB168(ZEXT816(0x1db42) * auVar2,0);
  uVar5 = SUB168(ZEXT816(0x1db42) * auVar2,8);
  uVar10 = uVar9 + uVar6;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_2[2];
  uVar11 = SUB168(ZEXT816(0x1db42) * auVar3,0);
  uVar7 = SUB168(ZEXT816(0x1db42) * auVar3,8);
  uVar6 = (ulong)CARRY8(uVar9,uVar6);
  uVar9 = uVar11 + uVar5;
  uVar12 = uVar9 + uVar6;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = param_2[3];
  uVar13 = SUB168(ZEXT816(0x1db42) * auVar4,0);
  uVar6 = (ulong)(CARRY8(uVar11,uVar5) || CARRY8(uVar9,uVar6));
  uVar9 = uVar13 + uVar7;
  uVar11 = uVar9 + uVar6;
  uVar7 = (SUB168(ZEXT816(0x1db42) * auVar4,8) +
          (ulong)(CARRY8(uVar13,uVar7) || CARRY8(uVar9,uVar6))) * 0x26;
  uVar6 = (ulong)CARRY8(uVar8,uVar7);
  uVar9 = (ulong)CARRY8(uVar10,uVar6);
  uVar5 = (ulong)CARRY8(uVar12,uVar9);
  param_1[1] = uVar10 + uVar6;
  param_1[2] = uVar12 + uVar9;
  param_1[3] = uVar11 + uVar5;
  *param_1 = uVar8 + uVar7 + (-(ulong)CARRY8(uVar11,uVar5) & 0x26);
  return;
}



void x25519_fe64_add(long *param_1,ulong *param_2,ulong *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar4 = *param_2 + *param_3;
  uVar1 = (ulong)CARRY8(*param_2,*param_3);
  uVar2 = param_2[1] + param_3[1];
  uVar5 = uVar2 + uVar1;
  uVar1 = (ulong)(CARRY8(param_2[1],param_3[1]) || CARRY8(uVar2,uVar1));
  uVar2 = param_2[2] + param_3[2];
  uVar6 = uVar2 + uVar1;
  uVar1 = (ulong)(CARRY8(param_2[2],param_3[2]) || CARRY8(uVar2,uVar1));
  uVar2 = param_2[3] + param_3[3];
  uVar7 = uVar2 + uVar1;
  uVar3 = -(ulong)(CARRY8(param_2[3],param_3[3]) || CARRY8(uVar2,uVar1)) & 0x26;
  uVar1 = (ulong)CARRY8(uVar4,uVar3);
  uVar2 = (ulong)CARRY8(uVar5,uVar1);
  param_1[1] = uVar5 + uVar1;
  uVar1 = (ulong)CARRY8(uVar6,uVar2);
  param_1[2] = uVar6 + uVar2;
  param_1[3] = uVar7 + uVar1;
  *param_1 = uVar4 + uVar3 + (-(ulong)CARRY8(uVar7,uVar1) & 0x26);
  return;
}



void x25519_fe64_sub(long *param_1,ulong *param_2,ulong *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar4 = *param_2 - *param_3;
  uVar1 = (ulong)(*param_2 < *param_3);
  uVar2 = param_2[1] - param_3[1];
  uVar5 = uVar2 - uVar1;
  uVar1 = (ulong)(param_2[1] < param_3[1] || uVar2 < uVar1);
  uVar2 = param_2[2] - param_3[2];
  uVar6 = uVar2 - uVar1;
  uVar1 = (ulong)(param_2[2] < param_3[2] || uVar2 < uVar1);
  uVar2 = param_2[3] - param_3[3];
  uVar7 = uVar2 - uVar1;
  uVar3 = -(ulong)(param_2[3] < param_3[3] || uVar2 < uVar1) & 0x26;
  uVar1 = (ulong)(uVar4 < uVar3);
  uVar2 = (ulong)(uVar5 < uVar1);
  param_1[1] = uVar5 - uVar1;
  uVar1 = (ulong)(uVar6 < uVar2);
  param_1[2] = uVar6 - uVar2;
  param_1[3] = uVar7 - uVar1;
  *param_1 = (uVar4 - uVar3) - (-(ulong)(uVar7 < uVar1) & 0x26);
  return;
}



void x25519_fe64_tobytes(long *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar7 = ((long)param_2[3] >> 0x3f & 0x13U) + 0x13;
  uVar4 = *param_2 + uVar7;
  uVar7 = (ulong)CARRY8(*param_2,uVar7);
  uVar5 = param_2[1] + uVar7;
  uVar7 = (ulong)CARRY8(param_2[1],uVar7);
  uVar6 = param_2[2] + uVar7;
  uVar2 = (param_2[3] & 0x7fffffffffffffff) + (ulong)CARRY8(param_2[2],uVar7);
  uVar3 = ~((long)uVar2 >> 0x3f) & 0x13;
  uVar7 = (ulong)(uVar4 < uVar3);
  uVar1 = (ulong)(uVar5 < uVar7);
  *param_1 = uVar4 - uVar3;
  param_1[1] = uVar5 - uVar7;
  param_1[2] = uVar6 - uVar1;
  param_1[3] = (uVar2 & 0x7fffffffffffffff) - (ulong)(uVar6 < uVar1);
  return;
}


