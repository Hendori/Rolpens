
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rsaz_512_sqr(ulong *param_1,ulong *param_2,undefined8 param_3,undefined8 param_4,int param_5)

{
  unkint9 Var1;
  unkint9 Var2;
  unkint9 Var3;
  unkint9 Var4;
  unkint9 Var5;
  unkint9 Var6;
  unkint9 Var7;
  unkint9 Var8;
  unkint9 Var9;
  unkint9 Var10;
  unkint9 Var11;
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
  undefined1 auVar65 [16];
  ulong uVar66;
  ulong uVar67;
  long lVar68;
  ulong uVar69;
  ulong uVar70;
  ulong uVar71;
  ulong uVar72;
  
  uVar69 = *param_2;
  uVar72 = param_2[1];
  if ((_DAT_00102008 & 0x80100) == 0x80100) {
    do {
      auVar12._8_8_ = 0;
      auVar12._0_8_ = uVar69;
      auVar39._8_8_ = 0;
      auVar39._0_8_ = uVar72;
      uVar67 = SUB168(auVar12 * auVar39,0);
      auVar13._8_8_ = 0;
      auVar13._0_8_ = uVar69;
      auVar40._8_8_ = 0;
      auVar40._0_8_ = param_2[2];
      auVar14._8_8_ = 0;
      auVar14._0_8_ = uVar69;
      auVar41._8_8_ = 0;
      auVar41._0_8_ = param_2[3];
      Var1 = (unkuint9)SUB168(auVar12 * auVar39,8) + (unkuint9)SUB168(auVar13 * auVar40,0) +
             (unkuint9)0;
      uVar70 = (ulong)Var1;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = uVar69;
      auVar42._8_8_ = 0;
      auVar42._0_8_ = param_2[4];
      Var1 = (unkuint9)SUB168(auVar13 * auVar40,8) + (unkuint9)SUB168(auVar14 * auVar41,0) +
             (unkuint9)((char)((unkuint9)Var1 >> 0x40) != '\0');
      auVar16._8_8_ = 0;
      auVar16._0_8_ = uVar69;
      auVar43._8_8_ = 0;
      auVar43._0_8_ = param_2[5];
      Var2 = (unkuint9)SUB168(auVar14 * auVar41,8) + (unkuint9)SUB168(auVar15 * auVar42,0) +
             (unkuint9)((char)((unkuint9)Var1 >> 0x40) != '\0');
      auVar17._8_8_ = 0;
      auVar17._0_8_ = uVar69;
      auVar44._8_8_ = 0;
      auVar44._0_8_ = param_2[6];
      Var3 = (unkuint9)SUB168(auVar15 * auVar42,8) + (unkuint9)SUB168(auVar16 * auVar43,0) +
             (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
      Var4 = (unkuint9)SUB168(auVar16 * auVar43,8) + (unkuint9)SUB168(auVar17 * auVar44,0) +
             (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
      auVar18._8_8_ = 0;
      auVar18._0_8_ = uVar69;
      auVar45._8_8_ = 0;
      auVar45._0_8_ = param_2[7];
      Var5 = (unkuint9)SUB168(auVar17 * auVar44,8) + (unkuint9)SUB168(auVar18 * auVar45,0) +
             (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
      auVar19._8_8_ = 0;
      auVar19._0_8_ = uVar69;
      auVar46._8_8_ = 0;
      auVar46._0_8_ = uVar69;
      uVar66 = SUB168(auVar19 * auVar46,0);
      Var7 = (unkuint9)uVar67 + (unkuint9)uVar67 + (unkuint9)0;
      Var6 = (unkuint9)(ulong)Var7 + (unkuint9)SUB168(auVar19 * auVar46,8) + (unkuint9)0;
      lVar68 = (long)Var6;
      Var7 = (unkuint9)0 + (unkuint9)0 + (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
      Var6 = (unkuint9)(ulong)Var7 + (unkuint9)0 +
             (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar72;
      auVar47._8_8_ = 0;
      auVar47._0_8_ = param_2[2];
      Var7 = (unkuint9)(ulong)Var1 + (unkuint9)SUB168(auVar20 * auVar47,0) +
             (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
      uVar67 = (ulong)Var7;
      Var1 = (unkuint9)(ulong)Var2 + (unkuint9)SUB168(auVar20 * auVar47,8) +
             (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar72;
      auVar48._8_8_ = 0;
      auVar48._0_8_ = param_2[3];
      Var2 = (unkuint9)(ulong)Var1 + (unkuint9)SUB168(auVar21 * auVar48,0) +
             (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
      uVar71 = (ulong)Var2;
      writeToShadowStack(SUB164(auVar21 * auVar48,8),(int)Var3);
      auVar22._8_8_ = 0;
      auVar22._0_8_ = uVar72;
      auVar49._8_8_ = 0;
      auVar49._0_8_ = param_2[4];
      Var3 = (unkuint9)(ulong)Var3 + (unkuint9)SUB168(auVar22 * auVar49,0) +
             (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
      Var1 = (unkuint9)(ulong)Var4 + (unkuint9)SUB168(auVar22 * auVar49,8) +
             (unkuint9)((char)((unkuint9)Var1 >> 0x40) != '\0');
      auVar23._8_8_ = 0;
      auVar23._0_8_ = uVar72;
      auVar50._8_8_ = 0;
      auVar50._0_8_ = param_2[5];
      Var4 = (unkuint9)(ulong)Var1 + (unkuint9)SUB168(auVar23 * auVar50,0) +
             (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
      Var1 = (unkuint9)(ulong)Var5 + (unkuint9)SUB168(auVar23 * auVar50,8) +
             (unkuint9)((char)((unkuint9)Var1 >> 0x40) != '\0');
      auVar24._8_8_ = 0;
      auVar24._0_8_ = uVar72;
      auVar51._8_8_ = 0;
      auVar51._0_8_ = param_2[6];
      Var7 = (unkuint9)(ulong)Var1 + (unkuint9)SUB168(auVar24 * auVar51,0) +
             (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
      Var1 = (unkuint9)
             (ulong)((unkuint9)SUB168(auVar18 * auVar45,8) + (unkuint9)0 +
                    (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0')) +
             (unkuint9)SUB168(auVar24 * auVar51,8) +
             (unkuint9)((char)((unkuint9)Var1 >> 0x40) != '\0');
      auVar25._8_8_ = 0;
      auVar25._0_8_ = uVar72;
      auVar52._8_8_ = 0;
      auVar52._0_8_ = param_2[7];
      Var5 = (unkuint9)(ulong)Var1 + (unkuint9)SUB168(auVar25 * auVar52,0) +
             (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
      auVar26._8_8_ = 0;
      auVar26._0_8_ = uVar72;
      auVar53._8_8_ = 0;
      auVar53._0_8_ = uVar72;
      uVar69 = param_2[2];
      Var8 = (unkuint9)uVar70 + (unkuint9)uVar70 + (unkuint9)0;
      Var2 = (unkuint9)SUB168(auVar26 * auVar53,0) + (unkuint9)(ulong)Var6 + (unkuint9)0;
      Var6 = (unkuint9)uVar67 + (unkuint9)uVar67 +
             (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
      Var9 = (unkuint9)0 + (unkuint9)0 + (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
      Var2 = (unkuint9)(ulong)Var9 + (unkuint9)0 +
             (unkuint9)
             ((char)((unkuint9)(ulong)Var6 + (unkuint9)SUB168(auVar26 * auVar53,8) +
                     (unkuint9)
                     ((char)((unkuint9)(ulong)Var8 + (unkuint9)(ulong)Var2 +
                             (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0') >> 0x40) != '\0') >>
                    0x40) != '\0');
      auVar27._8_8_ = 0;
      auVar27._0_8_ = uVar69;
      auVar54._8_8_ = 0;
      auVar54._0_8_ = param_2[3];
      Var6 = (unkuint9)(ulong)Var3 + (unkuint9)SUB168(auVar27 * auVar54,0) +
             (unkuint9)((char)((unkuint9)Var9 >> 0x40) != '\0');
      uVar72 = (ulong)Var6;
      Var3 = (unkuint9)(ulong)Var4 + (unkuint9)SUB168(auVar27 * auVar54,8) +
             (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
      auVar28._8_8_ = 0;
      auVar28._0_8_ = uVar69;
      auVar55._8_8_ = 0;
      auVar55._0_8_ = param_2[4];
      Var4 = (unkuint9)(ulong)Var3 + (unkuint9)SUB168(auVar28 * auVar55,0) +
             (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
      uVar67 = (ulong)Var4;
      Var3 = (unkuint9)(ulong)Var7 + (unkuint9)SUB168(auVar28 * auVar55,8) +
             (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
      auVar29._8_8_ = 0;
      auVar29._0_8_ = uVar69;
      auVar56._8_8_ = 0;
      auVar56._0_8_ = param_2[5];
      Var4 = (unkuint9)(ulong)Var3 + (unkuint9)SUB168(auVar29 * auVar56,0) +
             (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
      Var3 = (unkuint9)(ulong)Var5 + (unkuint9)SUB168(auVar29 * auVar56,8) +
             (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
      auVar30._8_8_ = 0;
      auVar30._0_8_ = uVar69;
      auVar57._8_8_ = 0;
      auVar57._0_8_ = param_2[6];
      Var6 = (unkuint9)(ulong)Var3 + (unkuint9)SUB168(auVar30 * auVar57,0) +
             (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
      auVar31._8_8_ = 0;
      auVar31._0_8_ = uVar69;
      auVar58._8_8_ = 0;
      auVar58._0_8_ = param_2[7];
      auVar32._8_8_ = 0;
      auVar32._0_8_ = uVar69;
      auVar59._8_8_ = 0;
      auVar59._0_8_ = uVar69;
      uVar69 = param_2[3];
      Var7 = (unkuint9)uVar71 + (unkuint9)uVar71 + (unkuint9)0;
      Var2 = (unkuint9)SUB168(auVar32 * auVar59,0) + (unkuint9)(ulong)Var2 + (unkuint9)0;
      Var8 = (unkuint9)uVar72 + (unkuint9)uVar72 +
             (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
      Var9 = (unkuint9)0 + (unkuint9)0 + (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
      Var2 = (unkuint9)(ulong)Var9 + (unkuint9)0 +
             (unkuint9)
             ((char)((unkuint9)(ulong)Var8 + (unkuint9)SUB168(auVar32 * auVar59,8) +
                     (unkuint9)
                     ((char)((unkuint9)(ulong)Var7 + (unkuint9)(ulong)Var2 +
                             (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0') >> 0x40) != '\0') >>
                    0x40) != '\0');
      auVar33._8_8_ = 0;
      auVar33._0_8_ = uVar69;
      auVar60._8_8_ = 0;
      auVar60._0_8_ = param_2[4];
      Var7 = (unkuint9)(ulong)Var4 + (unkuint9)SUB168(auVar33 * auVar60,0) +
             (unkuint9)((char)((unkuint9)Var9 >> 0x40) != '\0');
      uVar72 = (ulong)Var7;
      Var4 = (unkuint9)(ulong)Var6 + (unkuint9)SUB168(auVar33 * auVar60,8) +
             (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
      auVar34._8_8_ = 0;
      auVar34._0_8_ = uVar69;
      auVar61._8_8_ = 0;
      auVar61._0_8_ = param_2[5];
      Var7 = (unkuint9)(ulong)Var4 + (unkuint9)SUB168(auVar34 * auVar61,0) +
             (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
      uVar70 = (ulong)Var7;
      auVar35._8_8_ = 0;
      auVar35._0_8_ = uVar69;
      auVar62._8_8_ = 0;
      auVar62._0_8_ = param_2[6];
      auVar36._8_8_ = 0;
      auVar36._0_8_ = uVar69;
      auVar63._8_8_ = 0;
      auVar63._0_8_ = uVar69;
      uVar69 = param_2[4];
      Var8 = (unkuint9)uVar67 + (unkuint9)uVar67 + (unkuint9)0;
      Var2 = (unkuint9)SUB168(auVar36 * auVar63,0) + (unkuint9)(ulong)Var2 + (unkuint9)0;
      Var9 = (unkuint9)uVar72 + (unkuint9)uVar72 +
             (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
      Var10 = (unkuint9)0 + (unkuint9)0 + (unkuint9)((char)((unkuint9)Var9 >> 0x40) != '\0');
      auVar37._8_8_ = 0;
      auVar37._0_8_ = uVar69;
      auVar64._8_8_ = 0;
      auVar64._0_8_ = param_2[5];
      auVar38._8_8_ = 0;
      auVar38._0_8_ = uVar69;
      auVar65._8_8_ = 0;
      auVar65._0_8_ = uVar69;
      Var11 = (unkuint9)uVar70 + (unkuint9)uVar70 + (unkuint9)0;
      Var2 = (unkuint9)SUB168(auVar38 * auVar65,0) +
             (unkuint9)
             (ulong)((unkuint9)(ulong)Var10 + (unkuint9)0 +
                    (unkuint9)
                    ((char)((unkuint9)(ulong)Var9 + (unkuint9)SUB168(auVar36 * auVar63,8) +
                            (unkuint9)
                            ((char)((unkuint9)(ulong)Var8 + (unkuint9)(ulong)Var2 +
                                    (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0') >> 0x40) !=
                            '\0') >> 0x40) != '\0')) + (unkuint9)0;
      Var2 = (unkuint9)(ulong)Var11 + (unkuint9)(ulong)Var2 +
             (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
      uVar72 = (ulong)Var2;
      __rsaz_512_reducex(param_1,param_2,param_4);
      uVar69 = uVar66 + uVar72;
      uVar72 = lVar68 + (SUB168(auVar25 * auVar52,8) +
                         (ulong)((char)((unkuint9)Var1 >> 0x40) != '\0') +
                         (ulong)((char)((unkuint9)Var5 >> 0x40) != '\0') +
                         SUB168(auVar30 * auVar57,8) +
                         (ulong)((char)((unkuint9)Var3 >> 0x40) != '\0') +
                         SUB168(auVar31 * auVar58,0) +
                         (ulong)((char)((unkuint9)Var6 >> 0x40) != '\0') +
                         SUB168(auVar34 * auVar61,8) +
                         (ulong)((char)((unkuint9)Var4 >> 0x40) != '\0') +
                         SUB168(auVar35 * auVar62,0) +
                         (ulong)((char)((unkuint9)Var7 >> 0x40) != '\0') +
                         SUB168(auVar37 * auVar64,0) +
                        (ulong)((char)((unkuint9)Var10 >> 0x40) != '\0')) * 2 +
                        (ulong)((char)((unkuint9)Var11 >> 0x40) != '\0') +
                        SUB168(auVar38 * auVar65,8) +
                        (ulong)((char)((unkuint9)Var2 >> 0x40) != '\0') +
               (ulong)CARRY8(uVar66,uVar72);
      param_2 = param_1;
      __rsaz_512_subtract();
      param_5 = param_5 + -1;
      param_1 = param_2;
    } while (param_5 != 0);
  }
  else {
    do {
      __rsaz_512_reduce();
      __rsaz_512_subtract();
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rsaz_512_mul(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  
  if ((_DAT_00102008 & 0x80100) == 0x80100) {
    uVar1 = __rsaz_512_mulx(param_1,param_2,*param_3);
    __rsaz_512_reducex(uVar1,param_2,param_5);
  }
  else {
    uVar1 = __rsaz_512_mul(param_1,param_4);
    __rsaz_512_reduce(uVar1);
  }
  __rsaz_512_subtract();
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rsaz_512_mul_gather4
               (undefined8 param_1,ulong *param_2,undefined1 (*param_3) [16],undefined8 param_4,
               undefined8 param_5,int param_6)

{
  undefined1 (*pauVar1) [16];
  undefined1 (*pauVar2) [16];
  undefined1 (*pauVar3) [16];
  undefined1 (*pauVar4) [16];
  undefined1 (*pauVar5) [16];
  undefined1 (*pauVar6) [16];
  undefined1 (*pauVar7) [16];
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
  unkint9 Var40;
  unkint9 Var41;
  char cVar42;
  unkint9 Var43;
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
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  ulong *puVar97;
  long lVar98;
  ulong uVar99;
  ulong uVar100;
  undefined1 (*pauVar101) [16];
  ulong *puVar102;
  ulong uVar103;
  ulong uVar104;
  ulong uVar105;
  ulong uVar106;
  ulong uVar107;
  ulong uVar108;
  bool bVar109;
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  int iVar112;
  int iVar114;
  int iVar115;
  int iVar116;
  undefined1 auVar113 [16];
  int iVar117;
  int iVar119;
  int iVar120;
  int iVar121;
  undefined1 auVar118 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  ulong local_c0 [10];
  ulong local_70;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  ulong local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  auVar110._0_4_ = -(uint)(_DAT_00101b00 == param_6);
  auVar110._4_4_ = -(uint)(_UNK_00101b04 == param_6);
  auVar110._8_4_ = -(uint)(_UNK_00101b08 == param_6);
  auVar110._12_4_ = -(uint)(_UNK_00101b0c == param_6);
  iVar112 = _DAT_00101b10 + _DAT_00101b10 + _DAT_00101b00;
  iVar114 = _UNK_00101b14 + _UNK_00101b14 + _UNK_00101b04;
  iVar115 = _UNK_00101b18 + _UNK_00101b18 + _UNK_00101b08;
  iVar116 = _UNK_00101b1c + _UNK_00101b1c + _UNK_00101b0c;
  auVar111._0_4_ = -(uint)(_DAT_00101b10 + _DAT_00101b00 == param_6);
  auVar111._4_4_ = -(uint)(_UNK_00101b14 + _UNK_00101b04 == param_6);
  auVar111._8_4_ = -(uint)(_UNK_00101b18 + _UNK_00101b08 == param_6);
  auVar111._12_4_ = -(uint)(_UNK_00101b1c + _UNK_00101b0c == param_6);
  iVar117 = _DAT_00101b10 + iVar112;
  iVar119 = _UNK_00101b14 + iVar114;
  iVar120 = _UNK_00101b18 + iVar115;
  iVar121 = _UNK_00101b1c + iVar116;
  auVar113._0_4_ = -(uint)(iVar112 == param_6);
  auVar113._4_4_ = -(uint)(iVar114 == param_6);
  auVar113._8_4_ = -(uint)(iVar115 == param_6);
  auVar113._12_4_ = -(uint)(iVar116 == param_6);
  iVar112 = _DAT_00101b10 + iVar117;
  iVar114 = _UNK_00101b14 + iVar119;
  iVar115 = _UNK_00101b18 + iVar120;
  iVar116 = _UNK_00101b1c + iVar121;
  auVar118._0_4_ = -(uint)(iVar117 == param_6);
  auVar118._4_4_ = -(uint)(iVar119 == param_6);
  auVar118._8_4_ = -(uint)(iVar120 == param_6);
  auVar118._12_4_ = -(uint)(iVar121 == param_6);
  iVar117 = _DAT_00101b10 + iVar112;
  iVar119 = _UNK_00101b14 + iVar114;
  iVar120 = _UNK_00101b18 + iVar115;
  iVar121 = _UNK_00101b1c + iVar116;
  auVar122._0_4_ = -(uint)(iVar112 == param_6);
  auVar122._4_4_ = -(uint)(iVar114 == param_6);
  auVar122._8_4_ = -(uint)(iVar115 == param_6);
  auVar122._12_4_ = -(uint)(iVar116 == param_6);
  iVar112 = _DAT_00101b10 + iVar117;
  iVar114 = _UNK_00101b14 + iVar119;
  iVar115 = _UNK_00101b18 + iVar120;
  iVar116 = _UNK_00101b1c + iVar121;
  auVar123._0_4_ = -(uint)(iVar117 == param_6);
  auVar123._4_4_ = -(uint)(iVar119 == param_6);
  auVar123._8_4_ = -(uint)(iVar120 == param_6);
  auVar123._12_4_ = -(uint)(iVar121 == param_6);
  auVar124._0_4_ = -(uint)(iVar112 == param_6);
  auVar124._4_4_ = -(uint)(iVar114 == param_6);
  auVar124._8_4_ = -(uint)(iVar115 == param_6);
  auVar124._12_4_ = -(uint)(iVar116 == param_6);
  auVar125._0_4_ = -(uint)(_DAT_00101b10 + iVar112 == param_6);
  auVar125._4_4_ = -(uint)(_UNK_00101b14 + iVar114 == param_6);
  auVar125._8_4_ = -(uint)(_UNK_00101b18 + iVar115 == param_6);
  auVar125._12_4_ = -(uint)(_UNK_00101b1c + iVar116 == param_6);
  pauVar101 = param_3 + 8;
  auVar126 = *param_3 & auVar110 | param_3[2] & auVar113 | param_3[4] & auVar122 |
             param_3[6] & auVar124 |
             param_3[1] & auVar111 | param_3[3] & auVar118 | param_3[5] & auVar123 |
             param_3[7] & auVar125;
  uVar99 = auVar126._0_8_ | auVar126._8_8_;
  local_48 = param_5;
  local_40 = param_1;
  local_38 = param_4;
  if ((_DAT_00102008 & 0x80100) == 0x80100) {
    auVar126._8_8_ = 0;
    auVar126._0_8_ = uVar99;
    auVar58._8_8_ = 0;
    auVar58._0_8_ = *param_2;
    bVar109 = false;
    auVar127._8_8_ = 0;
    auVar127._0_8_ = uVar99;
    auVar59._8_8_ = 0;
    auVar59._0_8_ = param_2[1];
    auVar44._8_8_ = 0;
    auVar44._0_8_ = uVar99;
    auVar60._8_8_ = 0;
    auVar60._0_8_ = param_2[2];
    Var40 = (unkuint9)SUB168(auVar126 * auVar58,8) + (unkuint9)SUB168(auVar127 * auVar59,0) +
            (unkuint9)0;
    local_c0[7] = (ulong)Var40;
    auVar45._8_8_ = 0;
    auVar45._0_8_ = uVar99;
    auVar61._8_8_ = 0;
    auVar61._0_8_ = param_2[3];
    Var40 = (unkuint9)SUB168(auVar127 * auVar59,8) + (unkuint9)SUB168(auVar44 * auVar60,0) +
            (unkuint9)((char)((unkuint9)Var40 >> 0x40) != '\0');
    local_c0[8] = (ulong)Var40;
    auVar46._8_8_ = 0;
    auVar46._0_8_ = uVar99;
    auVar62._8_8_ = 0;
    auVar62._0_8_ = param_2[4];
    Var40 = (unkuint9)SUB168(auVar44 * auVar60,8) + (unkuint9)SUB168(auVar45 * auVar61,0) +
            (unkuint9)((char)((unkuint9)Var40 >> 0x40) != '\0');
    local_c0[9] = (ulong)Var40;
    auVar47._8_8_ = 0;
    auVar47._0_8_ = uVar99;
    auVar63._8_8_ = 0;
    auVar63._0_8_ = param_2[5];
    Var40 = (unkuint9)SUB168(auVar45 * auVar61,8) + (unkuint9)SUB168(auVar46 * auVar62,0) +
            (unkuint9)((char)((unkuint9)Var40 >> 0x40) != '\0');
    local_70 = (ulong)Var40;
    auVar48._8_8_ = 0;
    auVar48._0_8_ = uVar99;
    auVar64._8_8_ = 0;
    auVar64._0_8_ = param_2[6];
    Var40 = (unkuint9)SUB168(auVar46 * auVar62,8) + (unkuint9)SUB168(auVar47 * auVar63,0) +
            (unkuint9)((char)((unkuint9)Var40 >> 0x40) != '\0');
    local_68 = (ulong)Var40;
    auVar49._8_8_ = 0;
    auVar49._0_8_ = uVar99;
    auVar65._8_8_ = 0;
    auVar65._0_8_ = param_2[7];
    Var40 = (unkuint9)SUB168(auVar47 * auVar63,8) + (unkuint9)SUB168(auVar48 * auVar64,0) +
            (unkuint9)((char)((unkuint9)Var40 >> 0x40) != '\0');
    local_60 = (ulong)Var40;
    Var40 = (unkuint9)SUB168(auVar48 * auVar64,8) + (unkuint9)SUB168(auVar49 * auVar65,0) +
            (unkuint9)((char)((unkuint9)Var40 >> 0x40) != '\0');
    local_58 = (ulong)Var40;
    Var40 = (unkuint9)SUB168(auVar49 * auVar65,8) + (unkuint9)0 +
            (unkuint9)((char)((unkuint9)Var40 >> 0x40) != '\0');
    cVar42 = (char)((unkuint9)Var40 >> 0x40);
    local_50 = (ulong)Var40;
    lVar98 = -7;
    do {
      auVar127 = *pauVar101;
      pauVar1 = pauVar101 + 1;
      pauVar2 = pauVar101 + 2;
      pauVar3 = pauVar101 + 3;
      pauVar4 = pauVar101 + 4;
      pauVar5 = pauVar101 + 5;
      pauVar6 = pauVar101 + 6;
      pauVar7 = pauVar101 + 7;
      pauVar101 = pauVar101 + 8;
      auVar127 = auVar127 & auVar110 | *pauVar2 & auVar113 | *pauVar4 & auVar122 |
                 *pauVar6 & auVar124 |
                 *pauVar1 & auVar111 | *pauVar3 & auVar118 | *pauVar5 & auVar123 |
                 *pauVar7 & auVar125;
      uVar99 = auVar127._0_8_ | auVar127._8_8_;
      auVar50._8_8_ = 0;
      auVar50._0_8_ = uVar99;
      auVar66._8_8_ = 0;
      auVar66._0_8_ = *param_2;
      Var40 = (unkuint9)local_c0[7] + (unkuint9)SUB168(auVar50 * auVar66,0) +
              (unkuint9)(cVar42 != '\0');
      Var43 = (unkuint9)SUB168(auVar50 * auVar66,8) + (unkuint9)local_c0[8] + (unkuint9)bVar109;
      auVar51._8_8_ = 0;
      auVar51._0_8_ = uVar99;
      auVar67._8_8_ = 0;
      auVar67._0_8_ = param_2[1];
      Var41 = (unkuint9)(ulong)Var43 + (unkuint9)SUB168(auVar51 * auVar67,0) +
              (unkuint9)((char)((unkuint9)Var40 >> 0x40) != '\0');
      local_c0[7] = (ulong)Var41;
      Var43 = (unkuint9)SUB168(auVar51 * auVar67,8) + (unkuint9)local_c0[9] +
              (unkuint9)((char)((unkuint9)Var43 >> 0x40) != '\0');
      auVar52._8_8_ = 0;
      auVar52._0_8_ = uVar99;
      auVar68._8_8_ = 0;
      auVar68._0_8_ = param_2[2];
      Var41 = (unkuint9)(ulong)Var43 + (unkuint9)SUB168(auVar52 * auVar68,0) +
              (unkuint9)((char)((unkuint9)Var41 >> 0x40) != '\0');
      local_c0[8] = (ulong)Var41;
      Var43 = (unkuint9)SUB168(auVar52 * auVar68,8) + (unkuint9)local_70 +
              (unkuint9)((char)((unkuint9)Var43 >> 0x40) != '\0');
      auVar53._8_8_ = 0;
      auVar53._0_8_ = uVar99;
      auVar69._8_8_ = 0;
      auVar69._0_8_ = param_2[3];
      Var41 = (unkuint9)(ulong)Var43 + (unkuint9)SUB168(auVar53 * auVar69,0) +
              (unkuint9)((char)((unkuint9)Var41 >> 0x40) != '\0');
      local_c0[9] = (ulong)Var41;
      Var43 = (unkuint9)SUB168(auVar53 * auVar69,8) + (unkuint9)local_68 +
              (unkuint9)((char)((unkuint9)Var43 >> 0x40) != '\0');
      auVar54._8_8_ = 0;
      auVar54._0_8_ = uVar99;
      auVar70._8_8_ = 0;
      auVar70._0_8_ = param_2[4];
      Var41 = (unkuint9)(ulong)Var43 + (unkuint9)SUB168(auVar54 * auVar70,0) +
              (unkuint9)((char)((unkuint9)Var41 >> 0x40) != '\0');
      local_70 = (ulong)Var41;
      Var43 = (unkuint9)SUB168(auVar54 * auVar70,8) + (unkuint9)local_60 +
              (unkuint9)((char)((unkuint9)Var43 >> 0x40) != '\0');
      auVar55._8_8_ = 0;
      auVar55._0_8_ = uVar99;
      auVar71._8_8_ = 0;
      auVar71._0_8_ = param_2[5];
      Var41 = (unkuint9)(ulong)Var43 + (unkuint9)SUB168(auVar55 * auVar71,0) +
              (unkuint9)((char)((unkuint9)Var41 >> 0x40) != '\0');
      local_68 = (ulong)Var41;
      Var43 = (unkuint9)SUB168(auVar55 * auVar71,8) + (unkuint9)local_58 +
              (unkuint9)((char)((unkuint9)Var43 >> 0x40) != '\0');
      auVar56._8_8_ = 0;
      auVar56._0_8_ = uVar99;
      auVar72._8_8_ = 0;
      auVar72._0_8_ = param_2[6];
      Var41 = (unkuint9)(ulong)Var43 + (unkuint9)SUB168(auVar56 * auVar72,0) +
              (unkuint9)((char)((unkuint9)Var41 >> 0x40) != '\0');
      local_60 = (ulong)Var41;
      Var43 = (unkuint9)SUB168(auVar56 * auVar72,8) + (unkuint9)local_50 +
              (unkuint9)((char)((unkuint9)Var43 >> 0x40) != '\0');
      auVar57._8_8_ = 0;
      auVar57._0_8_ = uVar99;
      auVar73._8_8_ = 0;
      auVar73._0_8_ = param_2[7];
      local_c0[lVar98 + 7] = (ulong)Var40;
      Var40 = (unkuint9)(ulong)Var43 + (unkuint9)SUB168(auVar57 * auVar73,0) +
              (unkuint9)((char)((unkuint9)Var41 >> 0x40) != '\0');
      local_58 = (ulong)Var40;
      Var40 = (unkuint9)
              (ulong)((unkuint9)SUB168(auVar57 * auVar73,8) + (unkuint9)0 +
                     (unkuint9)((char)((unkuint9)Var43 >> 0x40) != '\0')) + (unkuint9)0 +
              (unkuint9)((char)((unkuint9)Var40 >> 0x40) != '\0');
      cVar42 = (char)((unkuint9)Var40 >> 0x40);
      local_50 = (ulong)Var40;
      bVar109 = SCARRY8(lVar98,1);
      lVar98 = lVar98 + 1;
    } while (lVar98 != 0);
    __rsaz_512_reducex(param_1,param_2,param_5,0,SUB168(auVar126 * auVar58,0),local_c0[0]);
  }
  else {
    auVar8._8_8_ = 0;
    auVar8._0_8_ = *param_2;
    auVar24._8_8_ = 0;
    auVar24._0_8_ = uVar99;
    auVar74._8_8_ = 0;
    auVar74._0_8_ = SUB168(auVar8 * auVar24,8);
    auVar9._8_8_ = 0;
    auVar9._0_8_ = param_2[1];
    auVar25._8_8_ = 0;
    auVar25._0_8_ = uVar99;
    auVar74 = auVar9 * auVar25 + auVar74;
    uVar103 = auVar74._0_8_;
    auVar75._8_8_ = 0;
    auVar75._0_8_ = auVar74._8_8_;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = param_2[2];
    auVar26._8_8_ = 0;
    auVar26._0_8_ = uVar99;
    auVar75 = auVar10 * auVar26 + auVar75;
    uVar104 = auVar75._0_8_;
    auVar76._8_8_ = 0;
    auVar76._0_8_ = auVar75._8_8_;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = param_2[3];
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar99;
    auVar76 = auVar11 * auVar27 + auVar76;
    uVar105 = auVar76._0_8_;
    auVar77._8_8_ = 0;
    auVar77._0_8_ = auVar76._8_8_;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = param_2[4];
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar99;
    auVar77 = auVar12 * auVar28 + auVar77;
    uVar106 = auVar77._0_8_;
    auVar78._8_8_ = 0;
    auVar78._0_8_ = auVar77._8_8_;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = param_2[5];
    auVar29._8_8_ = 0;
    auVar29._0_8_ = uVar99;
    auVar78 = auVar13 * auVar29 + auVar78;
    uVar107 = auVar78._0_8_;
    auVar79._8_8_ = 0;
    auVar79._0_8_ = auVar78._8_8_;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = param_2[6];
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar99;
    auVar79 = auVar14 * auVar30 + auVar79;
    uVar108 = auVar79._0_8_;
    auVar80._8_8_ = 0;
    auVar80._0_8_ = auVar79._8_8_;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = param_2[7];
    auVar31._8_8_ = 0;
    auVar31._0_8_ = uVar99;
    auVar80 = auVar15 * auVar31 + auVar80;
    uVar99 = *param_2;
    iVar112 = 7;
    puVar97 = local_c0;
    do {
      puVar102 = puVar97;
      auVar90._8_8_ = 0;
      auVar90._0_8_ = uVar108;
      auVar88._8_8_ = 0;
      auVar88._0_8_ = uVar107;
      auVar86._8_8_ = 0;
      auVar86._0_8_ = uVar106;
      auVar84._8_8_ = 0;
      auVar84._0_8_ = uVar105;
      auVar82._8_8_ = 0;
      auVar82._0_8_ = uVar104;
      auVar81._8_8_ = 0;
      auVar81._0_8_ = uVar103;
      auVar94._8_8_ = 0;
      auVar94._0_8_ = auVar80._8_8_;
      auVar92._8_8_ = 0;
      auVar92._0_8_ = auVar80._0_8_;
      auVar126 = *pauVar101;
      pauVar1 = pauVar101 + 1;
      pauVar2 = pauVar101 + 2;
      pauVar3 = pauVar101 + 3;
      pauVar4 = pauVar101 + 4;
      pauVar5 = pauVar101 + 5;
      pauVar6 = pauVar101 + 6;
      pauVar7 = pauVar101 + 7;
      pauVar101 = pauVar101 + 8;
      auVar126 = auVar126 & auVar110 | *pauVar2 & auVar113 | *pauVar4 & auVar122 |
                 *pauVar6 & auVar124 |
                 *pauVar1 & auVar111 | *pauVar3 & auVar118 | *pauVar5 & auVar123 |
                 *pauVar7 & auVar125;
      uVar100 = auVar126._0_8_ | auVar126._8_8_;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = uVar99;
      auVar32._8_8_ = 0;
      auVar32._0_8_ = uVar100;
      auVar81 = auVar16 * auVar32 + auVar81;
      uVar99 = param_2[1];
      *puVar102 = auVar81._0_8_;
      auVar83._8_8_ = 0;
      auVar83._0_8_ = auVar81._8_8_;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = uVar99;
      auVar33._8_8_ = 0;
      auVar33._0_8_ = uVar100;
      auVar83 = auVar17 * auVar33 + auVar82 + auVar83;
      uVar103 = auVar83._0_8_;
      auVar85._8_8_ = 0;
      auVar85._0_8_ = auVar83._8_8_;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = param_2[2];
      auVar34._8_8_ = 0;
      auVar34._0_8_ = uVar100;
      auVar85 = auVar18 * auVar34 + auVar84 + auVar85;
      uVar104 = auVar85._0_8_;
      auVar87._8_8_ = 0;
      auVar87._0_8_ = auVar85._8_8_;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = param_2[3];
      auVar35._8_8_ = 0;
      auVar35._0_8_ = uVar100;
      auVar87 = auVar19 * auVar35 + auVar86 + auVar87;
      uVar105 = auVar87._0_8_;
      auVar89._8_8_ = 0;
      auVar89._0_8_ = auVar87._8_8_;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = param_2[4];
      auVar36._8_8_ = 0;
      auVar36._0_8_ = uVar100;
      auVar89 = auVar20 * auVar36 + auVar88 + auVar89;
      uVar106 = auVar89._0_8_;
      auVar91._8_8_ = 0;
      auVar91._0_8_ = auVar89._8_8_;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = param_2[5];
      auVar37._8_8_ = 0;
      auVar37._0_8_ = uVar100;
      auVar91 = auVar21 * auVar37 + auVar90 + auVar91;
      uVar107 = auVar91._0_8_;
      auVar93._8_8_ = 0;
      auVar93._0_8_ = auVar91._8_8_;
      auVar22._8_8_ = 0;
      auVar22._0_8_ = param_2[6];
      auVar38._8_8_ = 0;
      auVar38._0_8_ = uVar100;
      auVar93 = auVar22 * auVar38 + auVar92 + auVar93;
      uVar108 = auVar93._0_8_;
      uVar99 = auVar93._8_8_;
      auVar96._8_8_ = 0;
      auVar96._0_8_ = uVar99;
      auVar95._8_8_ = 0;
      auVar95._0_8_ = uVar99;
      auVar23._8_8_ = 0;
      auVar23._0_8_ = param_2[7];
      auVar39._8_8_ = 0;
      auVar39._0_8_ = uVar100;
      auVar94 = auVar23 * auVar39 + auVar94;
      uVar99 = *param_2;
      auVar80 = auVar94 + auVar95;
      iVar112 = iVar112 + -1;
      puVar97 = puVar102 + 1;
    } while (iVar112 != 0);
    puVar102[1] = uVar103;
    puVar102[2] = uVar104;
    puVar102[3] = uVar105;
    puVar102[4] = uVar106;
    puVar102[5] = uVar107;
    puVar102[6] = uVar108;
    *(undefined1 (*) [16])(puVar102 + 7) = auVar94 + auVar96;
    __rsaz_512_reduce(local_40);
  }
  __rsaz_512_subtract();
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rsaz_512_mul_scatter4
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               long param_5,uint param_6)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  ulong local_c8;
  ulong local_c0;
  ulong local_b8;
  ulong local_b0;
  ulong local_a8;
  ulong local_a0;
  ulong local_98;
  long local_90;
  ulong local_88;
  ulong local_80;
  ulong local_78;
  ulong local_70;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  long local_50;
  
  plVar4 = (long *)(param_5 + (ulong)param_6 * 8);
  if ((_DAT_00102008 & 0x80100) == 0x80100) {
    uVar9 = __rsaz_512_mulx(param_1,param_2,*param_1);
    __rsaz_512_reducex(uVar9);
  }
  else {
    uVar9 = __rsaz_512_mul(param_1,param_3);
    __rsaz_512_reduce(uVar9);
  }
  lVar5 = local_c8 + local_88;
  lVar6 = local_c0 + local_80 + (ulong)CARRY8(local_c8,local_88);
  uVar1 = (ulong)(CARRY8(local_c0,local_80) ||
                 CARRY8(local_c0 + local_80,(ulong)CARRY8(local_c8,local_88)));
  lVar7 = local_b8 + local_78 + uVar1;
  uVar1 = (ulong)(CARRY8(local_b8,local_78) || CARRY8(local_b8 + local_78,uVar1));
  lVar8 = local_b0 + local_70 + uVar1;
  uVar1 = (ulong)(CARRY8(local_b0,local_70) || CARRY8(local_b0 + local_70,uVar1));
  uVar2 = (ulong)(CARRY8(local_a8,local_68) || CARRY8(local_a8 + local_68,uVar1));
  uVar3 = (ulong)(CARRY8(local_a0,local_60) || CARRY8(local_a0 + local_60,uVar2));
  __rsaz_512_subtract();
  *plVar4 = lVar5;
  plVar4[0x10] = lVar6;
  plVar4[0x20] = lVar7;
  plVar4[0x30] = lVar8;
  plVar4[0x40] = local_a8 + local_68 + uVar1;
  plVar4[0x50] = local_a0 + local_60 + uVar2;
  plVar4[0x60] = local_98 + local_58 + uVar3;
  plVar4[0x70] = local_90 + local_50 +
                 (ulong)(CARRY8(local_98,local_58) || CARRY8(local_98 + local_58,uVar3));
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rsaz_512_mul_by_one(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,
                        undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar5 = *param_2;
  uVar6 = param_2[1];
  uVar7 = param_2[2];
  uVar8 = param_2[3];
  uVar1 = param_2[4];
  uVar2 = param_2[5];
  uVar3 = param_2[6];
  uVar4 = param_2[7];
  if ((_DAT_00102008 & 0x80100) == 0x80100) {
    __rsaz_512_reducex(param_1,param_2,param_4);
  }
  else {
    __rsaz_512_reduce();
  }
  *param_1 = uVar5;
  param_1[1] = uVar6;
  param_1[2] = uVar7;
  param_1[3] = uVar8;
  param_1[4] = uVar1;
  param_1[5] = uVar2;
  param_1[6] = uVar3;
  param_1[7] = uVar4;
  return;
}



void rsaz_512_scatter4(long param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  
  puVar2 = (undefined8 *)(param_1 + param_3 * 8);
  iVar3 = 8;
  do {
    uVar1 = *param_2;
    param_2 = param_2 + 1;
    *puVar2 = uVar1;
    puVar2 = puVar2 + 0x10;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rsaz_512_gather4(long param_1,uint *param_2,int param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  uint uVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  uint uVar17;
  uint uVar18;
  uint *puVar19;
  uint uVar20;
  uint uVar21;
  uint *puVar22;
  uint uVar23;
  uint uVar24;
  uint *puVar25;
  uint uVar26;
  uint uVar27;
  uint *puVar28;
  uint uVar29;
  uint uVar30;
  uint *puVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint *puVar35;
  uint uVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  int iVar45;
  int iVar46;
  int iVar47;
  int iVar48;
  int iVar49;
  int iVar50;
  int iVar51;
  int iVar52;
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
  int iVar63;
  int iVar64;
  int iVar65;
  
  iVar38 = _DAT_00101b10 + _DAT_00101b00;
  iVar39 = _UNK_00101b14 + _UNK_00101b04;
  iVar40 = _UNK_00101b18 + _UNK_00101b08;
  iVar41 = _UNK_00101b1c + _UNK_00101b0c;
  bVar8 = _DAT_00101b00 == param_3;
  bVar9 = _UNK_00101b04 == param_3;
  bVar10 = _UNK_00101b08 == param_3;
  bVar11 = _UNK_00101b0c == param_3;
  iVar42 = _DAT_00101b10 + iVar38;
  iVar43 = _UNK_00101b14 + iVar39;
  iVar44 = _UNK_00101b18 + iVar40;
  iVar45 = _UNK_00101b1c + iVar41;
  iVar46 = _DAT_00101b10 + iVar42;
  iVar47 = _UNK_00101b14 + iVar43;
  iVar48 = _UNK_00101b18 + iVar44;
  iVar49 = _UNK_00101b1c + iVar45;
  iVar50 = _DAT_00101b10 + iVar46;
  iVar51 = _UNK_00101b14 + iVar47;
  iVar52 = _UNK_00101b18 + iVar48;
  iVar53 = _UNK_00101b1c + iVar49;
  iVar54 = _DAT_00101b10 + iVar50;
  iVar55 = _UNK_00101b14 + iVar51;
  iVar56 = _UNK_00101b18 + iVar52;
  iVar57 = _UNK_00101b1c + iVar53;
  iVar58 = _DAT_00101b10 + iVar54;
  iVar59 = _UNK_00101b14 + iVar55;
  iVar60 = _UNK_00101b18 + iVar56;
  iVar61 = _UNK_00101b1c + iVar57;
  iVar62 = _DAT_00101b10 + iVar58;
  iVar63 = _UNK_00101b14 + iVar59;
  iVar64 = _UNK_00101b18 + iVar60;
  iVar65 = _UNK_00101b1c + iVar61;
  iVar37 = 8;
  do {
    uVar33 = *param_2;
    uVar34 = param_2[1];
    puVar35 = param_2 + 2;
    uVar36 = param_2[3];
    puVar1 = param_2 + 4;
    uVar21 = param_2[5];
    puVar22 = param_2 + 6;
    uVar23 = param_2[7];
    puVar2 = param_2 + 8;
    uVar30 = param_2[9];
    puVar31 = param_2 + 10;
    uVar32 = param_2[0xb];
    puVar3 = param_2 + 0xc;
    uVar18 = param_2[0xd];
    puVar19 = param_2 + 0xe;
    uVar20 = param_2[0xf];
    puVar4 = param_2 + 0x10;
    uVar27 = param_2[0x11];
    puVar28 = param_2 + 0x12;
    uVar29 = param_2[0x13];
    puVar5 = param_2 + 0x14;
    uVar15 = param_2[0x15];
    puVar16 = param_2 + 0x16;
    uVar17 = param_2[0x17];
    puVar6 = param_2 + 0x18;
    uVar24 = param_2[0x19];
    puVar25 = param_2 + 0x1a;
    uVar26 = param_2[0x1b];
    puVar7 = param_2 + 0x1c;
    uVar12 = param_2[0x1d];
    puVar13 = param_2 + 0x1e;
    uVar14 = param_2[0x1f];
    param_2 = param_2 + 0x20;
    *(uint *)(param_1 + 8) =
         uVar33 & -(uint)bVar8 | *puVar2 & -(uint)(iVar42 == param_3) |
         *puVar4 & -(uint)(iVar50 == param_3) | *puVar6 & -(uint)(iVar58 == param_3) |
         *puVar1 & -(uint)(iVar38 == param_3) | *puVar3 & -(uint)(iVar46 == param_3) |
         *puVar5 & -(uint)(iVar54 == param_3) | *puVar7 & -(uint)(iVar62 == param_3) |
         *puVar35 & -(uint)bVar10 | *puVar31 & -(uint)(iVar44 == param_3) |
         *puVar28 & -(uint)(iVar52 == param_3) | *puVar25 & -(uint)(iVar60 == param_3) |
         *puVar22 & -(uint)(iVar40 == param_3) | *puVar19 & -(uint)(iVar48 == param_3) |
         *puVar16 & -(uint)(iVar56 == param_3) | *puVar13 & -(uint)(iVar64 == param_3);
    *(uint *)(param_1 + 0xc) =
         uVar34 & -(uint)bVar9 | uVar30 & -(uint)(iVar43 == param_3) |
         uVar27 & -(uint)(iVar51 == param_3) | uVar24 & -(uint)(iVar59 == param_3) |
         uVar21 & -(uint)(iVar39 == param_3) | uVar18 & -(uint)(iVar47 == param_3) |
         uVar15 & -(uint)(iVar55 == param_3) | uVar12 & -(uint)(iVar63 == param_3) |
         uVar36 & -(uint)bVar11 | uVar32 & -(uint)(iVar45 == param_3) |
         uVar29 & -(uint)(iVar53 == param_3) | uVar26 & -(uint)(iVar61 == param_3) |
         uVar23 & -(uint)(iVar41 == param_3) | uVar20 & -(uint)(iVar49 == param_3) |
         uVar17 & -(uint)(iVar57 == param_3) | uVar14 & -(uint)(iVar65 == param_3);
    param_1 = param_1 + 8;
    iVar37 = iVar37 + -1;
  } while (iVar37 != 0);
  return;
}


