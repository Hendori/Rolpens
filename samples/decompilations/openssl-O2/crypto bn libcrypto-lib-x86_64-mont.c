
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
bn_mul_mont(ulong param_1,ulong *param_2,ulong *param_3,ulong *param_4,ulong *param_5,uint param_6)

{
  ulong *puVar1;
  ulong *puVar2;
  undefined1 (*pauVar3) [16];
  ulong uVar4;
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
  unkint9 Var85;
  unkint9 Var86;
  unkint9 Var87;
  unkint9 Var88;
  unkint9 Var89;
  unkint9 Var90;
  unkint9 Var91;
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  undefined1 auVar158 [16];
  undefined1 auVar159 [16];
  undefined1 auVar160 [16];
  undefined1 auVar161 [16];
  undefined1 auVar162 [16];
  undefined1 auVar163 [16];
  undefined1 auVar164 [16];
  undefined1 auVar165 [16];
  undefined1 auVar166 [16];
  undefined1 auVar167 [16];
  undefined1 auVar168 [16];
  undefined1 auVar169 [16];
  undefined1 auVar170 [16];
  undefined1 auVar171 [16];
  undefined1 auVar172 [16];
  undefined1 auVar173 [16];
  undefined1 auVar174 [16];
  undefined1 auVar175 [16];
  undefined1 auVar176 [16];
  undefined1 auVar177 [16];
  undefined1 auVar178 [16];
  undefined1 auVar179 [16];
  undefined1 auVar180 [16];
  undefined1 auVar181 [16];
  undefined1 auVar182 [16];
  undefined1 auVar183 [16];
  undefined1 auVar184 [16];
  undefined1 auVar185 [16];
  undefined1 auVar186 [16];
  undefined1 auVar187 [16];
  undefined1 auVar188 [16];
  undefined1 auVar189 [16];
  undefined1 auVar190 [16];
  undefined1 auVar191 [16];
  undefined1 auVar192 [16];
  undefined1 auVar193 [16];
  undefined1 auVar194 [16];
  undefined1 auVar195 [16];
  undefined1 auVar196 [16];
  undefined1 auVar197 [16];
  undefined1 auVar198 [16];
  undefined1 auVar199 [16];
  undefined1 auVar200 [16];
  undefined1 auVar201 [16];
  undefined1 auVar202 [16];
  undefined1 auVar203 [16];
  undefined1 auVar204 [16];
  undefined1 auVar205 [16];
  undefined1 auVar206 [16];
  undefined1 auVar207 [16];
  undefined1 auVar208 [16];
  undefined1 auVar209 [16];
  uint uVar210;
  uint uVar211;
  uint uVar212;
  uint uVar213;
  uint uVar214;
  uint uVar215;
  uint uVar216;
  uint uVar217;
  uint uVar218;
  uint uVar219;
  uint uVar220;
  uint uVar221;
  uint uVar222;
  uint uVar223;
  uint uVar224;
  uint uVar225;
  int iVar226;
  ulong uVar227;
  long lVar228;
  long lVar229;
  ulong uVar230;
  ulong uVar231;
  ulong uVar232;
  long lVar233;
  ulong *puVar234;
  undefined1 (*pauVar235) [16];
  ulong uVar236;
  ulong uVar237;
  ulong uVar238;
  undefined1 *puVar239;
  ulong *puVar240;
  long *plVar241;
  uint *puVar242;
  ulong *puVar243;
  ulong *puVar244;
  ulong uVar245;
  long lVar246;
  ulong uVar247;
  ulong uVar248;
  bool bVar249;
  bool bVar250;
  long *extraout_XMM1_Qa;
  long *extraout_XMM1_Qa_00;
  uint uVar251;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [32];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  
  uVar247 = (ulong)param_6;
  if (((param_6 & 3) != 0) || (param_6 < 8)) {
    puVar244 = (ulong *)((ulong)(auStack_40 + uVar247 * -8) & 0xfffffffffffffc00);
    for (puVar234 = (ulong *)((long)puVar244 +
                             ((ulong)(&stack0xffffffffffffffd0 + -(long)puVar244) &
                             0xfffffffffffff000)); puVar244 < puVar234; puVar234 = puVar234 + -0x200
        ) {
    }
    puVar234[uVar247 + 1] = (ulong)register0x00000020;
    uVar227 = *param_5;
    uVar248 = *param_3;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = *param_2;
    auVar45._8_8_ = 0;
    auVar45._0_8_ = uVar248;
    uVar230 = SUB168(auVar5 * auVar45,8);
    uVar232 = SUB168(auVar5 * auVar45,0);
    uVar237 = uVar227 * uVar232;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = *param_4;
    auVar46._8_8_ = 0;
    auVar46._0_8_ = uVar237;
    uVar245 = param_2[1];
    uVar231 = SUB168(auVar6 * auVar46,8) + (ulong)CARRY8(uVar232,SUB168(auVar6 * auVar46,0));
    uVar232 = 1;
    while( true ) {
      auVar160._8_8_ = 0;
      auVar160._0_8_ = uVar231;
      auVar159._8_8_ = 0;
      auVar159._0_8_ = uVar230;
      auVar156._8_8_ = 0;
      auVar156._0_8_ = uVar231;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar245;
      auVar47._8_8_ = 0;
      auVar47._0_8_ = uVar248;
      auVar159 = auVar7 * auVar47 + auVar159;
      uVar245 = auVar159._0_8_;
      auVar161._8_8_ = 0;
      auVar161._0_8_ = uVar245;
      auVar158._8_8_ = 0;
      auVar158._0_8_ = uVar245;
      uVar230 = auVar159._8_8_;
      uVar238 = uVar232 + 1;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = param_4[uVar232];
      auVar48._8_8_ = 0;
      auVar48._0_8_ = uVar237;
      if (uVar238 == uVar247) break;
      uVar245 = param_2[uVar238];
      auVar158 = auVar8 * auVar48 + auVar156 + auVar158;
      uVar231 = auVar158._8_8_;
      puVar234[uVar232 - 1] = auVar158._0_8_;
      uVar232 = uVar238;
    }
    uVar245 = *param_2;
    auVar161 = auVar8 * auVar48 + auVar160 + auVar161;
    uVar248 = auVar161._8_8_;
    puVar234[uVar232 - 1] = auVar161._0_8_;
    puVar234[uVar247 - 1] = uVar248 + uVar230;
    puVar234[uVar247] = (ulong)CARRY8(uVar248,uVar230);
    uVar248 = 1;
    do {
      uVar232 = param_3[uVar248];
      auVar162._8_8_ = 0;
      auVar162._0_8_ = *puVar234;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = uVar245;
      auVar49._8_8_ = 0;
      auVar49._0_8_ = uVar232;
      auVar162 = auVar9 * auVar49 + auVar162;
      uVar230 = auVar162._0_8_;
      uVar237 = auVar162._8_8_;
      uVar236 = uVar227 * uVar230;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = *param_4;
      auVar50._8_8_ = 0;
      auVar50._0_8_ = uVar236;
      uVar245 = param_2[1];
      uVar238 = SUB168(auVar10 * auVar50,8) + (ulong)CARRY8(uVar230,SUB168(auVar10 * auVar50,0));
      uVar230 = puVar234[1];
      uVar231 = 1;
      while( true ) {
        auVar166._8_8_ = 0;
        auVar166._0_8_ = uVar238;
        auVar165._8_8_ = 0;
        auVar165._0_8_ = uVar230;
        auVar164._8_8_ = 0;
        auVar164._0_8_ = uVar237;
        auVar157._8_8_ = 0;
        auVar157._0_8_ = uVar238;
        auVar11._8_8_ = 0;
        auVar11._0_8_ = uVar245;
        auVar51._8_8_ = 0;
        auVar51._0_8_ = uVar232;
        auVar165 = auVar11 * auVar51 + auVar164 + auVar165;
        auVar163._8_8_ = 0;
        auVar163._0_8_ = auVar165._0_8_;
        uVar237 = auVar165._8_8_;
        uVar4 = uVar231 + 1;
        auVar12._8_8_ = 0;
        auVar12._0_8_ = param_4[uVar231];
        auVar52._8_8_ = 0;
        auVar52._0_8_ = uVar236;
        auVar12 = auVar12 * auVar52;
        if (uVar4 == uVar247) break;
        uVar245 = param_2[uVar4];
        auVar163 = auVar12 + auVar157 + auVar163;
        uVar230 = puVar234[uVar4];
        uVar238 = auVar163._8_8_;
        puVar234[uVar231 - 1] = auVar163._0_8_;
        uVar231 = uVar4;
      }
      uVar245 = *param_2;
      auVar5 = auVar165 + auVar12 + auVar166;
      uVar232 = puVar234[uVar4];
      puVar234[uVar231 - 1] = auVar5._0_8_;
      uVar230 = auVar5._8_8_;
      puVar234[uVar247 - 1] = uVar230 + uVar232;
      puVar234[uVar247] =
           (ulong)CARRY8(auVar12._8_8_ + (ulong)CARRY8(uVar238,auVar12._0_8_) +
                         (ulong)CARRY8(uVar238 + auVar12._0_8_,auVar165._0_8_),uVar237) +
           (ulong)CARRY8(uVar230,uVar232);
      uVar248 = uVar248 + 1;
    } while (uVar248 < uVar247);
    bVar249 = false;
    lVar229 = 0;
    uVar227 = *puVar234;
    uVar248 = uVar247;
    do {
      uVar245 = (ulong)bVar249;
      uVar232 = uVar227 - param_4[lVar229];
      bVar249 = uVar227 < param_4[lVar229] || uVar232 < uVar245;
      *(ulong *)(param_1 + lVar229 * 8) = uVar232 - uVar245;
      uVar227 = puVar234[lVar229 + 1];
      lVar229 = lVar229 + 1;
      uVar248 = uVar248 - 1;
    } while (uVar248 != 0);
    lVar229 = 0;
    uVar248 = uVar247;
    do {
      uVar245 = *(ulong *)(param_1 + lVar229 * 8);
      uVar232 = puVar234[lVar229];
      puVar234[lVar229] = uVar247;
      *(ulong *)(param_1 + lVar229 * 8) =
           uVar232 & uVar227 - bVar249 | uVar245 & (uVar227 - bVar249 ^ 0xffffffffffffffff);
      lVar229 = lVar229 + 1;
      uVar248 = uVar248 - 1;
    } while (uVar248 != 0);
    return 1;
  }
  if ((param_3 == param_2) && ((param_6 & 7) == 0)) {
    puVar234 = (ulong *)(ulong)(param_6 << 3);
    uVar247 = *param_5;
    uVar227 = (ulong)(auStack_70 + ((long)puVar234 * -2 - (long)param_2)) & 0xfff;
    if ((ulong)param_6 << 5 < uVar227) {
      uVar248 = (long)puVar234 * -2 + 0xfc0;
      lVar229 = uVar227 - uVar248;
      if (uVar227 < uVar248) {
        lVar229 = 0;
      }
      puVar239 = auStack_70 + ((long)puVar234 * -2 - lVar229);
    }
    else {
      puVar239 = auStack_70 + ((long)puVar234 * -2 - uVar227);
    }
    puVar244 = (ulong *)((ulong)puVar239 & 0xffffffffffffffc0);
    for (puVar243 = (ulong *)(((ulong)(&stack0xffffffffffffffd0 + -(long)puVar244) &
                              0xfffffffffffff000) + (long)puVar244); puVar244 < puVar243;
        puVar243 = puVar243 + -0x200) {
    }
    puVar243[4] = uVar247;
    puVar243[5] = (ulong)register0x00000020;
    if ((_bn_sqrx8x_internal & 0x80100) == 0x80100) {
      puVar243[-1] = 0x1008cb;
      iVar226 = bn_sqrx8x_internal(0,param_1,param_4,-(long)puVar234);
      puVar234 = (ulong *)(uVar247 + (long)param_4);
      lVar229 = (long)param_4 >> 5;
      bVar249 = ((long)param_4 >> 4 & 1U) != 0;
      plVar241 = extraout_XMM1_Qa;
      puVar243 = param_4;
    }
    else {
      puVar243[-1] = 0x1008e5;
      param_4 = puVar234;
      iVar226 = bn_sqr8x_internal();
      puVar234 = (ulong *)(param_1 + (long)param_4);
      lVar229 = (long)param_4 >> 5;
      bVar249 = ((long)param_4 >> 4 & 1U) != 0;
      plVar241 = extraout_XMM1_Qa_00;
      puVar243 = param_4;
    }
    do {
      uVar247 = *puVar234;
      puVar240 = puVar234 + 1;
      puVar1 = puVar234 + 2;
      puVar2 = puVar234 + 3;
      puVar234 = puVar234 + 4;
      uVar227 = (ulong)bVar249;
      uVar232 = uVar247 - *puVar244;
      uVar247 = (ulong)(uVar247 < *puVar244 || uVar232 < uVar227);
      uVar230 = *puVar240 - puVar244[1];
      uVar248 = (ulong)(*puVar240 < puVar244[1] || uVar230 < uVar247);
      uVar231 = *puVar1 - puVar244[2];
      uVar245 = (ulong)(*puVar1 < puVar244[2] || uVar231 < uVar248);
      uVar237 = *puVar2 - puVar244[3];
      bVar249 = *puVar2 < puVar244[3] || uVar237 < uVar245;
      puVar244 = puVar244 + 4;
      *plVar241 = uVar232 - uVar227;
      plVar241[1] = uVar230 - uVar247;
      plVar241[2] = uVar231 - uVar248;
      plVar241[3] = uVar237 - uVar245;
      plVar241 = plVar241 + 4;
      lVar229 = lVar229 + 1;
    } while (lVar229 != 0);
    uVar251 = iVar226 - (uint)bVar249;
    pauVar235 = (undefined1 (*) [16])((long)puVar234 + (long)puVar243);
    puVar242 = (uint *)((long)plVar241 + (long)puVar243);
    do {
      uVar210 = *(uint *)*pauVar235;
      uVar211 = *(uint *)(*pauVar235 + 4);
      uVar212 = *(uint *)(*pauVar235 + 8);
      uVar213 = *(uint *)(*pauVar235 + 0xc);
      uVar214 = *(uint *)pauVar235[1];
      uVar215 = *(uint *)(pauVar235[1] + 4);
      uVar216 = *(uint *)(pauVar235[1] + 8);
      uVar217 = *(uint *)(pauVar235[1] + 0xc);
      uVar222 = *puVar242;
      uVar223 = puVar242[1];
      uVar224 = puVar242[2];
      uVar225 = puVar242[3];
      uVar218 = puVar242[4];
      uVar219 = puVar242[5];
      uVar220 = puVar242[6];
      uVar221 = puVar242[7];
      *pauVar235 = (undefined1  [16])0x0;
      pauVar235[1] = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(*pauVar235 + (long)param_4) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(pauVar235[1] + (long)param_4) = (undefined1  [16])0x0;
      *puVar242 = uVar222 & -(uint)(uVar251 == 0) | uVar210 & uVar251;
      puVar242[1] = uVar223 & -(uint)(uVar251 == 0) | uVar211 & uVar251;
      puVar242[2] = uVar224 & -(uint)(uVar251 == 0) | uVar212 & uVar251;
      puVar242[3] = uVar225 & -(uint)(uVar251 == 0) | uVar213 & uVar251;
      puVar242[4] = uVar218 & -(uint)(uVar251 == 0) | uVar214 & uVar251;
      puVar242[5] = uVar219 & -(uint)(uVar251 == 0) | uVar215 & uVar251;
      puVar242[6] = uVar220 & -(uint)(uVar251 == 0) | uVar216 & uVar251;
      puVar242[7] = uVar221 & -(uint)(uVar251 == 0) | uVar217 & uVar251;
      puVar243 = puVar243 + 4;
      pauVar235 = pauVar235 + 2;
      puVar242 = puVar242 + 8;
    } while (puVar243 != (ulong *)0x0);
    return 1;
  }
  if ((_bn_sqrx8x_internal & 0x80100) != 0x80100) {
    puVar244 = (ulong *)((ulong)(auStack_50 + uVar247 * -8) & 0xfffffffffffffc00);
    for (puVar234 = (ulong *)((long)puVar244 +
                             ((ulong)(&stack0xffffffffffffffd0 + -(long)puVar244) &
                             0xfffffffffffff000)); puVar244 < puVar234; puVar234 = puVar234 + -0x200
        ) {
    }
    puVar234[uVar247 + 1] = (ulong)register0x00000020;
    puVar234[uVar247 + 2] = param_1;
    uVar248 = *param_5;
    uVar245 = *param_3;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = *param_2;
    auVar53._8_8_ = 0;
    auVar53._0_8_ = uVar245;
    auVar167._8_8_ = 0;
    auVar167._0_8_ = SUB168(auVar13 * auVar53,8);
    uVar227 = SUB168(auVar13 * auVar53,0);
    uVar237 = uVar248 * uVar227;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = *param_4;
    auVar54._8_8_ = 0;
    auVar54._0_8_ = uVar237;
    auVar168._8_8_ = 0;
    auVar168._0_8_ =
         SUB168(auVar14 * auVar54,8) + (ulong)CARRY8(uVar227,SUB168(auVar14 * auVar54,0));
    auVar15._8_8_ = 0;
    auVar15._0_8_ = param_2[1];
    auVar55._8_8_ = 0;
    auVar55._0_8_ = uVar245;
    auVar167 = auVar15 * auVar55 + auVar167;
    auVar169._8_8_ = 0;
    auVar169._0_8_ = auVar167._0_8_;
    uVar230 = auVar167._8_8_;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = param_4[1];
    auVar56._8_8_ = 0;
    auVar56._0_8_ = uVar237;
    uVar232 = param_2[2];
    auVar169 = auVar16 * auVar56 + auVar168 + auVar169;
    uVar231 = auVar169._8_8_;
    *puVar234 = auVar169._0_8_;
    uVar227 = 4;
    do {
      uVar238 = uVar227;
      auVar171._8_8_ = 0;
      auVar171._0_8_ = uVar231;
      auVar170._8_8_ = 0;
      auVar170._0_8_ = uVar230;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = uVar232;
      auVar57._8_8_ = 0;
      auVar57._0_8_ = uVar245;
      auVar170 = auVar17 * auVar57 + auVar170;
      auVar172._8_8_ = 0;
      auVar172._0_8_ = auVar170._0_8_;
      auVar173._8_8_ = 0;
      auVar173._0_8_ = auVar170._8_8_;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = param_4[uVar238 - 2];
      auVar58._8_8_ = 0;
      auVar58._0_8_ = uVar237;
      uVar227 = param_2[uVar238 - 1];
      auVar172 = auVar18 * auVar58 + auVar171 + auVar172;
      auVar174._8_8_ = 0;
      auVar174._0_8_ = auVar172._8_8_;
      puVar234[uVar238 - 3] = auVar172._0_8_;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = uVar227;
      auVar59._8_8_ = 0;
      auVar59._0_8_ = uVar245;
      auVar173 = auVar19 * auVar59 + auVar173;
      auVar175._8_8_ = 0;
      auVar175._0_8_ = auVar173._0_8_;
      auVar176._8_8_ = 0;
      auVar176._0_8_ = auVar173._8_8_;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = param_4[uVar238 - 1];
      auVar60._8_8_ = 0;
      auVar60._0_8_ = uVar237;
      uVar227 = param_2[uVar238];
      auVar175 = auVar20 * auVar60 + auVar174 + auVar175;
      auVar177._8_8_ = 0;
      auVar177._0_8_ = auVar175._8_8_;
      puVar234[uVar238 - 2] = auVar175._0_8_;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar227;
      auVar61._8_8_ = 0;
      auVar61._0_8_ = uVar245;
      auVar176 = auVar21 * auVar61 + auVar176;
      auVar178._8_8_ = 0;
      auVar178._0_8_ = auVar176._0_8_;
      auVar179._8_8_ = 0;
      auVar179._0_8_ = auVar176._8_8_;
      auVar22._8_8_ = 0;
      auVar22._0_8_ = param_4[uVar238];
      auVar62._8_8_ = 0;
      auVar62._0_8_ = uVar237;
      uVar227 = param_2[uVar238 + 1];
      auVar178 = auVar22 * auVar62 + auVar177 + auVar178;
      auVar180._8_8_ = 0;
      auVar180._0_8_ = auVar178._8_8_;
      puVar234[uVar238 - 1] = auVar178._0_8_;
      auVar23._8_8_ = 0;
      auVar23._0_8_ = uVar227;
      auVar63._8_8_ = 0;
      auVar63._0_8_ = uVar245;
      auVar179 = auVar23 * auVar63 + auVar179;
      auVar181._8_8_ = 0;
      auVar181._0_8_ = auVar179._0_8_;
      uVar230 = auVar179._8_8_;
      auVar182._8_8_ = 0;
      auVar182._0_8_ = uVar230;
      uVar227 = uVar238 + 4;
      auVar24._8_8_ = 0;
      auVar24._0_8_ = param_4[uVar238 + 1];
      auVar64._8_8_ = 0;
      auVar64._0_8_ = uVar237;
      uVar232 = param_2[uVar238 + 2];
      auVar181 = auVar24 * auVar64 + auVar180 + auVar181;
      uVar231 = auVar181._8_8_;
      auVar183._8_8_ = 0;
      auVar183._0_8_ = uVar231;
      puVar234[uVar238] = auVar181._0_8_;
    } while (uVar227 < uVar247);
    auVar25._8_8_ = 0;
    auVar25._0_8_ = uVar232;
    auVar65._8_8_ = 0;
    auVar65._0_8_ = uVar245;
    auVar182 = auVar25 * auVar65 + auVar182;
    auVar184._8_8_ = 0;
    auVar184._0_8_ = auVar182._0_8_;
    auVar185._8_8_ = 0;
    auVar185._0_8_ = auVar182._8_8_;
    auVar26._8_8_ = 0;
    auVar26._0_8_ = param_4[uVar238 + 2];
    auVar66._8_8_ = 0;
    auVar66._0_8_ = uVar237;
    uVar232 = param_2[uVar238 + 3];
    auVar184 = auVar26 * auVar66 + auVar183 + auVar184;
    auVar186._8_8_ = 0;
    auVar186._0_8_ = auVar184._8_8_;
    puVar234[uVar238 + 1] = auVar184._0_8_;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar232;
    auVar67._8_8_ = 0;
    auVar67._0_8_ = uVar245;
    auVar185 = auVar27 * auVar67 + auVar185;
    auVar187._8_8_ = 0;
    auVar187._0_8_ = auVar185._0_8_;
    uVar232 = auVar185._8_8_;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = param_4[uVar238 + 3];
    auVar68._8_8_ = 0;
    auVar68._0_8_ = uVar237;
    uVar245 = *param_2;
    auVar187 = auVar28 * auVar68 + auVar186 + auVar187;
    uVar230 = auVar187._8_8_;
    puVar234[uVar238 + 2] = auVar187._0_8_;
    puVar234[uVar238 + 3] = uVar230 + uVar232;
    puVar234[uVar227] = (ulong)CARRY8(uVar230,uVar232);
    uVar227 = 1;
    do {
      uVar230 = param_3[uVar227];
      auVar188._8_8_ = 0;
      auVar188._0_8_ = *puVar234;
      auVar29._8_8_ = 0;
      auVar29._0_8_ = uVar245;
      auVar69._8_8_ = 0;
      auVar69._0_8_ = uVar230;
      auVar188 = auVar29 * auVar69 + auVar188;
      uVar245 = auVar188._0_8_;
      auVar189._8_8_ = 0;
      auVar189._0_8_ = auVar188._8_8_;
      uVar238 = uVar248 * uVar245;
      auVar30._8_8_ = 0;
      auVar30._0_8_ = *param_4;
      auVar70._8_8_ = 0;
      auVar70._0_8_ = uVar238;
      auVar190._8_8_ = 0;
      auVar190._0_8_ =
           SUB168(auVar30 * auVar70,8) + (ulong)CARRY8(uVar245,SUB168(auVar30 * auVar70,0));
      auVar31._8_8_ = 0;
      auVar31._0_8_ = param_2[1];
      auVar71._8_8_ = 0;
      auVar71._0_8_ = uVar230;
      auVar189 = auVar31 * auVar71 + auVar189;
      uVar245 = auVar189._0_8_;
      auVar191._8_8_ = 0;
      auVar191._0_8_ = uVar245 + puVar234[1];
      uVar231 = auVar189._8_8_ + (ulong)CARRY8(uVar245,puVar234[1]);
      auVar32._8_8_ = 0;
      auVar32._0_8_ = param_4[1];
      auVar72._8_8_ = 0;
      auVar72._0_8_ = uVar238;
      uVar245 = param_2[2];
      auVar191 = auVar32 * auVar72 + auVar190 + auVar191;
      uVar237 = auVar191._8_8_;
      *puVar234 = auVar191._0_8_;
      uVar232 = 4;
      do {
        uVar236 = uVar232;
        auVar193._8_8_ = 0;
        auVar193._0_8_ = uVar237;
        auVar192._8_8_ = 0;
        auVar192._0_8_ = uVar231;
        auVar33._8_8_ = 0;
        auVar33._0_8_ = uVar245;
        auVar73._8_8_ = 0;
        auVar73._0_8_ = uVar230;
        auVar192 = auVar33 * auVar73 + auVar192;
        uVar245 = auVar192._0_8_;
        auVar194._8_8_ = 0;
        auVar194._0_8_ = uVar245 + puVar234[uVar236 - 2];
        auVar195._8_8_ = 0;
        auVar195._0_8_ = auVar192._8_8_ + (ulong)CARRY8(uVar245,puVar234[uVar236 - 2]);
        auVar34._8_8_ = 0;
        auVar34._0_8_ = param_4[uVar236 - 2];
        auVar74._8_8_ = 0;
        auVar74._0_8_ = uVar238;
        uVar245 = param_2[uVar236 - 1];
        auVar194 = auVar34 * auVar74 + auVar193 + auVar194;
        auVar196._8_8_ = 0;
        auVar196._0_8_ = auVar194._8_8_;
        puVar234[uVar236 - 3] = auVar194._0_8_;
        auVar35._8_8_ = 0;
        auVar35._0_8_ = uVar245;
        auVar75._8_8_ = 0;
        auVar75._0_8_ = uVar230;
        auVar195 = auVar35 * auVar75 + auVar195;
        uVar245 = auVar195._0_8_;
        auVar197._8_8_ = 0;
        auVar197._0_8_ = uVar245 + puVar234[uVar236 - 1];
        auVar198._8_8_ = 0;
        auVar198._0_8_ = auVar195._8_8_ + (ulong)CARRY8(uVar245,puVar234[uVar236 - 1]);
        auVar36._8_8_ = 0;
        auVar36._0_8_ = param_4[uVar236 - 1];
        auVar76._8_8_ = 0;
        auVar76._0_8_ = uVar238;
        uVar245 = param_2[uVar236];
        auVar197 = auVar36 * auVar76 + auVar196 + auVar197;
        auVar199._8_8_ = 0;
        auVar199._0_8_ = auVar197._8_8_;
        puVar234[uVar236 - 2] = auVar197._0_8_;
        auVar37._8_8_ = 0;
        auVar37._0_8_ = uVar245;
        auVar77._8_8_ = 0;
        auVar77._0_8_ = uVar230;
        auVar198 = auVar37 * auVar77 + auVar198;
        uVar245 = auVar198._0_8_;
        auVar200._8_8_ = 0;
        auVar200._0_8_ = uVar245 + puVar234[uVar236];
        auVar201._8_8_ = 0;
        auVar201._0_8_ = auVar198._8_8_ + (ulong)CARRY8(uVar245,puVar234[uVar236]);
        auVar38._8_8_ = 0;
        auVar38._0_8_ = param_4[uVar236];
        auVar78._8_8_ = 0;
        auVar78._0_8_ = uVar238;
        uVar245 = param_2[uVar236 + 1];
        auVar200 = auVar38 * auVar78 + auVar199 + auVar200;
        auVar202._8_8_ = 0;
        auVar202._0_8_ = auVar200._8_8_;
        puVar234[uVar236 - 1] = auVar200._0_8_;
        auVar39._8_8_ = 0;
        auVar39._0_8_ = uVar245;
        auVar79._8_8_ = 0;
        auVar79._0_8_ = uVar230;
        auVar201 = auVar39 * auVar79 + auVar201;
        uVar245 = auVar201._0_8_;
        auVar203._8_8_ = 0;
        auVar203._0_8_ = uVar245 + puVar234[uVar236 + 1];
        uVar231 = auVar201._8_8_ + (ulong)CARRY8(uVar245,puVar234[uVar236 + 1]);
        auVar204._8_8_ = 0;
        auVar204._0_8_ = uVar231;
        uVar232 = uVar236 + 4;
        auVar40._8_8_ = 0;
        auVar40._0_8_ = param_4[uVar236 + 1];
        auVar80._8_8_ = 0;
        auVar80._0_8_ = uVar238;
        uVar245 = param_2[uVar236 + 2];
        auVar203 = auVar40 * auVar80 + auVar202 + auVar203;
        uVar237 = auVar203._8_8_;
        auVar205._8_8_ = 0;
        auVar205._0_8_ = uVar237;
        puVar234[uVar236] = auVar203._0_8_;
      } while (uVar232 < uVar247);
      auVar41._8_8_ = 0;
      auVar41._0_8_ = uVar245;
      auVar81._8_8_ = 0;
      auVar81._0_8_ = uVar230;
      auVar204 = auVar41 * auVar81 + auVar204;
      uVar245 = auVar204._0_8_;
      auVar206._8_8_ = 0;
      auVar206._0_8_ = uVar245 + puVar234[uVar236 + 2];
      auVar207._8_8_ = 0;
      auVar207._0_8_ = auVar204._8_8_ + (ulong)CARRY8(uVar245,puVar234[uVar236 + 2]);
      auVar42._8_8_ = 0;
      auVar42._0_8_ = param_4[uVar236 + 2];
      auVar82._8_8_ = 0;
      auVar82._0_8_ = uVar238;
      uVar245 = param_2[uVar236 + 3];
      auVar206 = auVar42 * auVar82 + auVar205 + auVar206;
      auVar208._8_8_ = 0;
      auVar208._0_8_ = auVar206._8_8_;
      puVar234[uVar236 + 1] = auVar206._0_8_;
      auVar43._8_8_ = 0;
      auVar43._0_8_ = uVar245;
      auVar83._8_8_ = 0;
      auVar83._0_8_ = uVar230;
      auVar207 = auVar43 * auVar83 + auVar207;
      uVar245 = auVar207._0_8_;
      auVar209._8_8_ = 0;
      auVar209._0_8_ = uVar245 + puVar234[uVar236 + 3];
      uVar231 = auVar207._8_8_ + (ulong)CARRY8(uVar245,puVar234[uVar236 + 3]);
      uVar227 = uVar227 + 1;
      auVar44._8_8_ = 0;
      auVar44._0_8_ = param_4[uVar236 + 3];
      auVar84._8_8_ = 0;
      auVar84._0_8_ = uVar238;
      uVar245 = *param_2;
      auVar209 = auVar44 * auVar84 + auVar208 + auVar209;
      uVar237 = auVar209._8_8_;
      puVar234[uVar236 + 2] = auVar209._0_8_;
      uVar238 = uVar237 + uVar231;
      uVar230 = puVar234[uVar247];
      puVar234[uVar236 + 3] = uVar238 + puVar234[uVar247];
      puVar234[uVar232] = (ulong)CARRY8(uVar237,uVar231) + (ulong)CARRY8(uVar238,uVar230);
    } while (uVar227 < uVar247);
    uVar227 = puVar234[uVar247 + 2];
    uVar230 = uVar247 - 4 >> 2;
    lVar228 = *puVar234 - *param_4;
    uVar247 = puVar234[2];
    uVar248 = puVar234[3];
    uVar245 = (ulong)(*puVar234 < *param_4);
    uVar232 = puVar234[1] - param_4[1];
    bVar249 = puVar234[1] < param_4[1] || uVar232 < uVar245;
    lVar233 = uVar232 - uVar245;
    lVar229 = 0;
    do {
      lVar246 = lVar229;
      *(long *)(uVar227 + lVar246 * 8) = lVar228;
      *(long *)(uVar227 + 8 + lVar246 * 8) = lVar233;
      uVar237 = uVar247 - param_4[lVar246 + 2];
      uVar245 = puVar234[lVar246 + 4];
      uVar232 = puVar234[lVar246 + 5];
      uVar231 = (ulong)(uVar247 < param_4[lVar246 + 2] || uVar237 < bVar249);
      uVar247 = param_4[lVar246 + 3];
      uVar238 = uVar248 - param_4[lVar246 + 3];
      *(ulong *)(uVar227 + 0x10 + lVar246 * 8) = uVar237 - bVar249;
      *(ulong *)(uVar227 + 0x18 + lVar246 * 8) = uVar238 - uVar231;
      uVar231 = (ulong)(uVar248 < uVar247 || uVar238 < uVar231);
      uVar237 = uVar245 - param_4[lVar246 + 4];
      lVar228 = uVar237 - uVar231;
      uVar247 = puVar234[lVar246 + 6];
      uVar248 = puVar234[lVar246 + 7];
      uVar245 = (ulong)(uVar245 < param_4[lVar246 + 4] || uVar237 < uVar231);
      uVar231 = uVar232 - param_4[lVar246 + 5];
      bVar249 = uVar232 < param_4[lVar246 + 5] || uVar231 < uVar245;
      lVar233 = uVar231 - uVar245;
      lVar229 = lVar246 + 4;
      uVar230 = uVar230 - 1;
    } while (uVar230 != 0);
    *(long *)(uVar227 + lVar229 * 8) = lVar228;
    uVar245 = puVar234[lVar246 + 8];
    uVar232 = param_4[lVar246 + 6];
    uVar230 = uVar247 - param_4[lVar246 + 6];
    *(long *)(uVar227 + 8 + lVar229 * 8) = lVar233;
    uVar232 = (ulong)(uVar247 < uVar232 || uVar230 < bVar249);
    uVar247 = param_4[lVar246 + 7];
    uVar231 = uVar248 - param_4[lVar246 + 7];
    *(ulong *)(uVar227 + 0x10 + lVar229 * 8) = uVar230 - bVar249;
    uVar251 = (int)uVar245 - (uint)(uVar248 < uVar247 || uVar231 < uVar232);
    *(ulong *)(uVar227 + 0x18 + lVar229 * 8) = uVar231 - uVar232;
    uVar247 = (ulong)(param_6 >> 2);
    lVar229 = 0;
    do {
      puVar242 = (uint *)((long)puVar234 + lVar229);
      uVar222 = *puVar242;
      uVar223 = puVar242[1];
      uVar224 = puVar242[2];
      uVar225 = puVar242[3];
      puVar242 = (uint *)(uVar227 + lVar229);
      uVar218 = *puVar242;
      uVar219 = puVar242[1];
      uVar220 = puVar242[2];
      uVar221 = puVar242[3];
      puVar242 = (uint *)((long)puVar234 + lVar229 + 0x10);
      uVar214 = *puVar242;
      uVar215 = puVar242[1];
      uVar216 = puVar242[2];
      uVar217 = puVar242[3];
      *(undefined1 (*) [16])((long)puVar234 + lVar229) = (undefined1  [16])0x0;
      puVar242 = (uint *)(uVar227 + 0x10 + lVar229);
      uVar210 = *puVar242;
      uVar211 = puVar242[1];
      uVar212 = puVar242[2];
      uVar213 = puVar242[3];
      puVar242 = (uint *)(uVar227 + lVar229);
      *puVar242 = uVar222 & uVar251 | uVar218 & (uVar251 ^ 0xffffffff);
      puVar242[1] = uVar223 & uVar251 | uVar219 & (uVar251 ^ 0xffffffff);
      puVar242[2] = uVar224 & uVar251 | uVar220 & (uVar251 ^ 0xffffffff);
      puVar242[3] = uVar225 & uVar251 | uVar221 & (uVar251 ^ 0xffffffff);
      *(undefined1 (*) [16])((long)puVar234 + lVar229 + 0x10) = (undefined1  [16])0x0;
      puVar242 = (uint *)(uVar227 + 0x10 + lVar229);
      *puVar242 = uVar214 & uVar251 | uVar210 & (uVar251 ^ 0xffffffff);
      puVar242[1] = uVar215 & uVar251 | uVar211 & (uVar251 ^ 0xffffffff);
      puVar242[2] = uVar216 & uVar251 | uVar212 & (uVar251 ^ 0xffffffff);
      puVar242[3] = uVar217 & uVar251 | uVar213 & (uVar251 ^ 0xffffffff);
      lVar229 = lVar229 + 0x20;
      uVar247 = uVar247 - 1;
    } while (uVar247 != 0);
    return 1;
  }
  uVar227 = (ulong)(param_6 << 3);
  uVar247 = *param_5;
  puVar244 = (ulong *)((ulong)(auStack_78 + -uVar227) & 0xffffffffffffff80);
  for (puVar234 = (ulong *)((long)puVar244 +
                           ((ulong)(&stack0xffffffffffffffd0 + -(long)puVar244) & 0xfffffffffffff000
                           )); puVar244 < puVar234; puVar234 = puVar234 + -0x200) {
  }
  *puVar234 = uVar227;
  puVar234[2] = (long)param_3 + uVar227;
  puVar234[3] = uVar247;
  puVar234[4] = param_1;
  puVar234[5] = (ulong)register0x00000020;
  puVar234[6] = (ulong)((param_6 << 3) >> 5) - 1;
  uVar247 = *param_3;
  auVar92._8_8_ = 0;
  auVar92._0_8_ = uVar247;
  auVar124._8_8_ = 0;
  auVar124._0_8_ = *param_2;
  uVar232 = SUB168(auVar92 * auVar124,0);
  uVar245 = SUB168(auVar92 * auVar124,8);
  auVar93._8_8_ = 0;
  auVar93._0_8_ = uVar247;
  auVar125._8_8_ = 0;
  auVar125._0_8_ = param_2[1];
  uVar231 = SUB168(auVar93 * auVar125,0);
  uVar238 = SUB168(auVar93 * auVar125,8);
  puVar234[1] = (ulong)(param_3 + 1);
  auVar94._8_8_ = 0;
  auVar94._0_8_ = uVar247;
  auVar126._8_8_ = 0;
  auVar126._0_8_ = param_2[2];
  uVar237 = SUB168(auVar94 * auVar126,0);
  uVar227 = (ulong)CARRY8(uVar231,uVar245);
  uVar248 = uVar237 + uVar238;
  uVar230 = uVar232 * puVar234[3];
  auVar95._8_8_ = 0;
  auVar95._0_8_ = uVar247;
  auVar127._8_8_ = 0;
  auVar127._0_8_ = param_2[3];
  param_2 = param_2 + 4;
  Var85 = (unkuint9)
          (SUB168(auVar94 * auVar126,8) +
          (ulong)(CARRY8(uVar237,uVar238) || CARRY8(uVar248,uVar227))) +
          (unkuint9)SUB168(auVar95 * auVar127,0) + (unkuint9)0;
  Var86 = (unkuint9)SUB168(auVar95 * auVar127,8) + (unkuint9)0 +
          (unkuint9)((char)((unkuint9)Var85 >> 0x40) != '\0');
  uVar237 = (ulong)Var86;
  auVar96._8_8_ = 0;
  auVar96._0_8_ = uVar230;
  auVar128._8_8_ = 0;
  auVar128._0_8_ = *param_4;
  Var90 = (unkuint9)SUB168(auVar96 * auVar128,8) + (unkuint9)(uVar231 + uVar245) + (unkuint9)0;
  auVar97._8_8_ = 0;
  auVar97._0_8_ = uVar230;
  auVar129._8_8_ = 0;
  auVar129._0_8_ = param_4[1];
  Var86 = (unkuint9)(ulong)Var90 + (unkuint9)SUB168(auVar97 * auVar129,0) +
          (unkuint9)
          ((char)((unkuint9)uVar232 + (unkuint9)SUB168(auVar96 * auVar128,0) +
                  (unkuint9)((char)((unkuint9)Var86 >> 0x40) != '\0') >> 0x40) != '\0');
  Var90 = (unkuint9)SUB168(auVar97 * auVar129,8) + (unkuint9)(uVar248 + uVar227) +
          (unkuint9)((char)((unkuint9)Var90 >> 0x40) != '\0');
  auVar98._8_8_ = 0;
  auVar98._0_8_ = uVar230;
  auVar130._8_8_ = 0;
  auVar130._0_8_ = param_4[2];
  uVar227 = puVar234[6];
  puVar234[8] = (ulong)Var86;
  Var86 = (unkuint9)(ulong)Var90 + (unkuint9)SUB168(auVar98 * auVar130,0) +
          (unkuint9)((char)((unkuint9)Var86 >> 0x40) != '\0');
  Var90 = (unkuint9)SUB168(auVar98 * auVar130,8) + (unkuint9)(ulong)Var85 +
          (unkuint9)((char)((unkuint9)Var90 >> 0x40) != '\0');
  auVar99._8_8_ = 0;
  auVar99._0_8_ = uVar230;
  auVar131._8_8_ = 0;
  auVar131._0_8_ = param_4[3];
  puVar234[9] = (ulong)Var86;
  Var85 = (unkuint9)(ulong)Var90 + (unkuint9)SUB168(auVar99 * auVar131,0) +
          (unkuint9)((char)((unkuint9)Var86 >> 0x40) != '\0');
  bVar249 = (char)((unkuint9)Var85 >> 0x40) != '\0';
  Var86 = (unkuint9)SUB168(auVar99 * auVar131,8) + (unkuint9)0 +
          (unkuint9)((char)((unkuint9)Var90 >> 0x40) != '\0');
  bVar250 = (char)((unkuint9)Var86 >> 0x40) != '\0';
  uVar248 = (ulong)Var86;
  param_4 = param_4 + 4;
  puVar234[10] = (ulong)Var85;
  puVar244 = puVar234 + 0xc;
  do {
    puVar243 = puVar244;
    Var85 = (unkuint9)uVar248 + (unkuint9)0 + (unkuint9)bVar249;
    auVar100._8_8_ = 0;
    auVar100._0_8_ = uVar247;
    auVar132._8_8_ = 0;
    auVar132._0_8_ = *param_2;
    Var86 = (unkuint9)SUB168(auVar100 * auVar132,0) + (unkuint9)uVar237 +
            (unkuint9)((char)((unkuint9)Var85 >> 0x40) != '\0');
    auVar101._8_8_ = 0;
    auVar101._0_8_ = uVar247;
    auVar133._8_8_ = 0;
    auVar133._0_8_ = param_2[1];
    Var90 = (unkuint9)SUB168(auVar101 * auVar133,0) + (unkuint9)SUB168(auVar100 * auVar132,8) +
            (unkuint9)((char)((unkuint9)Var86 >> 0x40) != '\0');
    auVar102._8_8_ = 0;
    auVar102._0_8_ = uVar247;
    auVar134._8_8_ = 0;
    auVar134._0_8_ = param_2[2];
    Var87 = (unkuint9)SUB168(auVar102 * auVar134,0) + (unkuint9)SUB168(auVar101 * auVar133,8) +
            (unkuint9)((char)((unkuint9)Var90 >> 0x40) != '\0');
    auVar103._8_8_ = 0;
    auVar103._0_8_ = uVar247;
    auVar135._8_8_ = 0;
    auVar135._0_8_ = param_2[3];
    Var88 = (unkuint9)SUB168(auVar103 * auVar135,0) + (unkuint9)SUB168(auVar102 * auVar134,8) +
            (unkuint9)((char)((unkuint9)Var87 >> 0x40) != '\0');
    Var89 = (unkuint9)SUB168(auVar103 * auVar135,8) + (unkuint9)0 +
            (unkuint9)((char)((unkuint9)Var88 >> 0x40) != '\0');
    uVar237 = (ulong)Var89;
    param_2 = param_2 + 4;
    puVar244 = puVar243 + 4;
    Var86 = (unkuint9)(ulong)Var86 + (unkuint9)(ulong)Var85 + (unkuint9)bVar250;
    auVar104._8_8_ = 0;
    auVar104._0_8_ = uVar230;
    auVar136._8_8_ = 0;
    auVar136._0_8_ = *param_4;
    Var85 = (unkuint9)(ulong)Var86 + (unkuint9)SUB168(auVar104 * auVar136,0) +
            (unkuint9)((char)((unkuint9)Var89 >> 0x40) != '\0');
    Var90 = (unkuint9)(ulong)Var90 + (unkuint9)SUB168(auVar104 * auVar136,8) +
            (unkuint9)((char)((unkuint9)Var86 >> 0x40) != '\0');
    auVar105._8_8_ = 0;
    auVar105._0_8_ = uVar230;
    auVar137._8_8_ = 0;
    auVar137._0_8_ = param_4[1];
    Var86 = (unkuint9)(ulong)Var90 + (unkuint9)SUB168(auVar105 * auVar137,0) +
            (unkuint9)((char)((unkuint9)Var85 >> 0x40) != '\0');
    Var90 = (unkuint9)(ulong)Var87 + (unkuint9)SUB168(auVar105 * auVar137,8) +
            (unkuint9)((char)((unkuint9)Var90 >> 0x40) != '\0');
    auVar106._8_8_ = 0;
    auVar106._0_8_ = uVar230;
    auVar138._8_8_ = 0;
    auVar138._0_8_ = param_4[2];
    puVar243[-1] = (ulong)Var85;
    Var85 = (unkuint9)(ulong)Var90 + (unkuint9)SUB168(auVar106 * auVar138,0) +
            (unkuint9)((char)((unkuint9)Var86 >> 0x40) != '\0');
    *puVar243 = (ulong)Var86;
    Var86 = (unkuint9)(ulong)Var88 + (unkuint9)SUB168(auVar106 * auVar138,8) +
            (unkuint9)((char)((unkuint9)Var90 >> 0x40) != '\0');
    auVar107._8_8_ = 0;
    auVar107._0_8_ = uVar230;
    auVar139._8_8_ = 0;
    auVar139._0_8_ = param_4[3];
    puVar243[1] = (ulong)Var85;
    Var85 = (unkuint9)(ulong)Var86 + (unkuint9)SUB168(auVar107 * auVar139,0) +
            (unkuint9)((char)((unkuint9)Var85 >> 0x40) != '\0');
    bVar249 = (char)((unkuint9)Var85 >> 0x40) != '\0';
    uVar248 = SUB168(auVar107 * auVar139,8) + (ulong)((char)((unkuint9)Var86 >> 0x40) != '\0');
    param_4 = param_4 + 4;
    puVar243[2] = (ulong)Var85;
    bVar250 = SBORROW8(uVar227,1);
    uVar227 = uVar227 - 1;
  } while (uVar227 != 0);
  uVar247 = *puVar234;
  puVar240 = (ulong *)puVar234[1];
  uVar227 = (ulong)CARRY8(uVar237,uVar248 + bVar249);
  puVar243[3] = uVar237 + uVar248 + bVar249;
  do {
    uVar248 = *puVar240;
    param_2 = (ulong *)((long)param_2 - uVar247);
    *puVar244 = -uVar227;
    param_4 = (ulong *)((long)param_4 - uVar247);
    auVar108._8_8_ = 0;
    auVar108._0_8_ = uVar248;
    auVar140._8_8_ = 0;
    auVar140._0_8_ = *param_2;
    auVar109._8_8_ = 0;
    auVar109._0_8_ = uVar248;
    auVar141._8_8_ = 0;
    auVar141._0_8_ = param_2[1];
    Var86 = (unkuint9)SUB168(auVar108 * auVar140,0) + (unkuint9)puVar234[8] + (unkuint9)0;
    uVar247 = (ulong)Var86;
    Var85 = (unkuint9)SUB168(auVar108 * auVar140,8) + (unkuint9)SUB168(auVar109 * auVar141,0) +
            (unkuint9)0;
    auVar110._8_8_ = 0;
    auVar110._0_8_ = uVar248;
    auVar142._8_8_ = 0;
    auVar142._0_8_ = param_2[2];
    Var86 = (unkuint9)(ulong)Var85 + (unkuint9)puVar234[9] +
            (unkuint9)((char)((unkuint9)Var86 >> 0x40) != '\0');
    Var85 = (unkuint9)SUB168(auVar109 * auVar141,8) + (unkuint9)SUB168(auVar110 * auVar142,0) +
            (unkuint9)((char)((unkuint9)Var85 >> 0x40) != '\0');
    Var90 = (unkuint9)(ulong)Var85 + (unkuint9)puVar234[10] +
            (unkuint9)((char)((unkuint9)Var86 >> 0x40) != '\0');
    puVar234[1] = (ulong)(puVar240 + 1);
    uVar227 = uVar247 * puVar234[3];
    auVar111._8_8_ = 0;
    auVar111._0_8_ = uVar248;
    auVar143._8_8_ = 0;
    auVar143._0_8_ = param_2[3];
    Var85 = (unkuint9)
            (ulong)((unkuint9)
                    (ulong)((unkuint9)SUB168(auVar110 * auVar142,8) + (unkuint9)0 +
                           (unkuint9)((char)((unkuint9)Var85 >> 0x40) != '\0')) + (unkuint9)0 +
                   (unkuint9)((char)((unkuint9)Var90 >> 0x40) != '\0')) +
            (unkuint9)SUB168(auVar111 * auVar143,0) + (unkuint9)0;
    Var87 = (unkuint9)(ulong)Var85 + (unkuint9)puVar234[0xb] + (unkuint9)0;
    Var85 = (unkuint9)SUB168(auVar111 * auVar143,8) + (unkuint9)0 +
            (unkuint9)((char)((unkuint9)Var85 >> 0x40) != '\0');
    param_2 = param_2 + 4;
    Var88 = (unkuint9)(ulong)Var85 + (unkuint9)0 +
            (unkuint9)((char)((unkuint9)Var87 >> 0x40) != '\0');
    uVar245 = (ulong)Var88;
    auVar112._8_8_ = 0;
    auVar112._0_8_ = uVar227;
    auVar144._8_8_ = 0;
    auVar144._0_8_ = *param_4;
    Var86 = (unkuint9)SUB168(auVar112 * auVar144,8) + (unkuint9)(ulong)Var86 +
            (unkuint9)((char)((unkuint9)Var88 >> 0x40) != '\0');
    auVar113._8_8_ = 0;
    auVar113._0_8_ = uVar227;
    auVar145._8_8_ = 0;
    auVar145._0_8_ = param_4[1];
    Var85 = (unkuint9)(ulong)Var86 + (unkuint9)SUB168(auVar113 * auVar145,0) +
            (unkuint9)
            ((char)((unkuint9)uVar247 + (unkuint9)SUB168(auVar112 * auVar144,0) +
                    (unkuint9)((char)((unkuint9)Var85 >> 0x40) != '\0') >> 0x40) != '\0');
    Var86 = (unkuint9)SUB168(auVar113 * auVar145,8) + (unkuint9)(ulong)Var90 +
            (unkuint9)((char)((unkuint9)Var86 >> 0x40) != '\0');
    auVar114._8_8_ = 0;
    auVar114._0_8_ = uVar227;
    auVar146._8_8_ = 0;
    auVar146._0_8_ = param_4[2];
    puVar234[8] = (ulong)Var85;
    Var85 = (unkuint9)(ulong)Var86 + (unkuint9)SUB168(auVar114 * auVar146,0) +
            (unkuint9)((char)((unkuint9)Var85 >> 0x40) != '\0');
    Var86 = (unkuint9)SUB168(auVar114 * auVar146,8) + (unkuint9)(ulong)Var87 +
            (unkuint9)((char)((unkuint9)Var86 >> 0x40) != '\0');
    auVar115._8_8_ = 0;
    auVar115._0_8_ = uVar227;
    auVar147._8_8_ = 0;
    auVar147._0_8_ = param_4[3];
    puVar234[9] = (ulong)Var85;
    param_4 = param_4 + 4;
    Var85 = (unkuint9)(ulong)Var86 + (unkuint9)SUB168(auVar115 * auVar147,0) +
            (unkuint9)((char)((unkuint9)Var85 >> 0x40) != '\0');
    bVar249 = (char)((unkuint9)Var85 >> 0x40) != '\0';
    Var86 = (unkuint9)SUB168(auVar115 * auVar147,8) + (unkuint9)0 +
            (unkuint9)((char)((unkuint9)Var86 >> 0x40) != '\0');
    bVar250 = (char)((unkuint9)Var86 >> 0x40) != '\0';
    uVar232 = (ulong)Var86;
    uVar247 = puVar234[6];
    puVar234[10] = (ulong)Var85;
    puVar244 = puVar234 + 0xc;
    do {
      puVar243 = puVar244;
      auVar116._8_8_ = 0;
      auVar116._0_8_ = uVar248;
      auVar148._8_8_ = 0;
      auVar148._0_8_ = *param_2;
      Var85 = (unkuint9)uVar232 + (unkuint9)0 + (unkuint9)bVar249;
      Var90 = (unkuint9)SUB168(auVar116 * auVar148,0) + (unkuint9)uVar245 + (unkuint9)bVar250;
      auVar117._8_8_ = 0;
      auVar117._0_8_ = uVar248;
      auVar149._8_8_ = 0;
      auVar149._0_8_ = param_2[1];
      Var86 = (unkuint9)(ulong)Var90 + (unkuint9)*puVar243 +
              (unkuint9)((char)((unkuint9)Var85 >> 0x40) != '\0');
      Var87 = (unkuint9)SUB168(auVar117 * auVar149,0) + (unkuint9)SUB168(auVar116 * auVar148,8) +
              (unkuint9)((char)((unkuint9)Var90 >> 0x40) != '\0');
      auVar118._8_8_ = 0;
      auVar118._0_8_ = uVar248;
      auVar150._8_8_ = 0;
      auVar150._0_8_ = param_2[2];
      Var90 = (unkuint9)(ulong)Var87 + (unkuint9)puVar243[1] +
              (unkuint9)((char)((unkuint9)Var86 >> 0x40) != '\0');
      Var88 = (unkuint9)SUB168(auVar118 * auVar150,0) + (unkuint9)SUB168(auVar117 * auVar149,8) +
              (unkuint9)((char)((unkuint9)Var87 >> 0x40) != '\0');
      auVar119._8_8_ = 0;
      auVar119._0_8_ = uVar248;
      auVar151._8_8_ = 0;
      auVar151._0_8_ = param_2[3];
      Var87 = (unkuint9)(ulong)Var88 + (unkuint9)puVar243[2] +
              (unkuint9)((char)((unkuint9)Var90 >> 0x40) != '\0');
      Var89 = (unkuint9)SUB168(auVar119 * auVar151,0) + (unkuint9)SUB168(auVar118 * auVar150,8) +
              (unkuint9)((char)((unkuint9)Var88 >> 0x40) != '\0');
      Var88 = (unkuint9)(ulong)Var89 + (unkuint9)puVar243[3] +
              (unkuint9)((char)((unkuint9)Var87 >> 0x40) != '\0');
      Var91 = (unkuint9)SUB168(auVar119 * auVar151,8) + (unkuint9)0 +
              (unkuint9)((char)((unkuint9)Var89 >> 0x40) != '\0');
      param_2 = param_2 + 4;
      puVar244 = puVar243 + 4;
      Var89 = (unkuint9)(ulong)Var91 + (unkuint9)0 +
              (unkuint9)((char)((unkuint9)Var88 >> 0x40) != '\0');
      uVar245 = (ulong)Var89;
      Var86 = (unkuint9)(ulong)Var86 + (unkuint9)(ulong)Var85 +
              (unkuint9)((char)((unkuint9)Var91 >> 0x40) != '\0');
      auVar120._8_8_ = 0;
      auVar120._0_8_ = uVar227;
      auVar152._8_8_ = 0;
      auVar152._0_8_ = *param_4;
      Var85 = (unkuint9)(ulong)Var86 + (unkuint9)SUB168(auVar120 * auVar152,0) +
              (unkuint9)((char)((unkuint9)Var89 >> 0x40) != '\0');
      Var90 = (unkuint9)(ulong)Var90 + (unkuint9)SUB168(auVar120 * auVar152,8) +
              (unkuint9)((char)((unkuint9)Var86 >> 0x40) != '\0');
      auVar121._8_8_ = 0;
      auVar121._0_8_ = uVar227;
      auVar153._8_8_ = 0;
      auVar153._0_8_ = param_4[1];
      Var86 = (unkuint9)(ulong)Var90 + (unkuint9)SUB168(auVar121 * auVar153,0) +
              (unkuint9)((char)((unkuint9)Var85 >> 0x40) != '\0');
      Var90 = (unkuint9)(ulong)Var87 + (unkuint9)SUB168(auVar121 * auVar153,8) +
              (unkuint9)((char)((unkuint9)Var90 >> 0x40) != '\0');
      auVar122._8_8_ = 0;
      auVar122._0_8_ = uVar227;
      auVar154._8_8_ = 0;
      auVar154._0_8_ = param_4[2];
      puVar243[-1] = (ulong)Var85;
      Var85 = (unkuint9)(ulong)Var90 + (unkuint9)SUB168(auVar122 * auVar154,0) +
              (unkuint9)((char)((unkuint9)Var86 >> 0x40) != '\0');
      Var90 = (unkuint9)(ulong)Var88 + (unkuint9)SUB168(auVar122 * auVar154,8) +
              (unkuint9)((char)((unkuint9)Var90 >> 0x40) != '\0');
      auVar123._8_8_ = 0;
      auVar123._0_8_ = uVar227;
      auVar155._8_8_ = 0;
      auVar155._0_8_ = param_4[3];
      *puVar243 = (ulong)Var86;
      puVar243[1] = (ulong)Var85;
      Var85 = (unkuint9)(ulong)Var90 + (unkuint9)SUB168(auVar123 * auVar155,0) +
              (unkuint9)((char)((unkuint9)Var85 >> 0x40) != '\0');
      bVar249 = (char)((unkuint9)Var85 >> 0x40) != '\0';
      uVar232 = SUB168(auVar123 * auVar155,8) + (ulong)((char)((unkuint9)Var90 >> 0x40) != '\0');
      param_4 = param_4 + 4;
      puVar243[2] = (ulong)Var85;
      bVar250 = SBORROW8(uVar247,1);
      uVar247 = uVar247 - 1;
    } while (uVar247 != 0);
    uVar247 = *puVar234;
    puVar240 = (ulong *)puVar234[1];
    uVar248 = uVar245 + uVar232 + bVar249;
    uVar227 = (ulong)(CARRY8(uVar245,uVar232 + bVar249) || CARRY8(uVar248,(ulong)(*puVar244 != 0)));
    puVar243[3] = uVar248 + (*puVar244 != 0);
  } while (puVar240 != (ulong *)puVar234[2]);
  puVar244 = puVar234 + 8;
  param_4 = (ulong *)((long)param_4 - uVar247);
  uVar248 = uVar247 >> 5;
  bVar249 = (uVar247 >> 4 & 1) != 0;
  plVar241 = (long *)puVar234[4];
  do {
    uVar245 = *puVar244;
    puVar243 = puVar244 + 1;
    puVar240 = puVar244 + 2;
    puVar1 = puVar244 + 3;
    puVar244 = puVar244 + 4;
    uVar232 = (ulong)bVar249;
    uVar237 = uVar245 - *param_4;
    uVar245 = (ulong)(uVar245 < *param_4 || uVar237 < uVar232);
    uVar238 = *puVar243 - param_4[1];
    uVar230 = (ulong)(*puVar243 < param_4[1] || uVar238 < uVar245);
    uVar236 = *puVar240 - param_4[2];
    uVar231 = (ulong)(*puVar240 < param_4[2] || uVar236 < uVar230);
    uVar4 = *puVar1 - param_4[3];
    bVar249 = *puVar1 < param_4[3] || uVar4 < uVar231;
    param_4 = param_4 + 4;
    *plVar241 = uVar237 - uVar232;
    plVar241[1] = uVar238 - uVar245;
    plVar241[2] = uVar236 - uVar230;
    plVar241[3] = uVar4 - uVar231;
    plVar241 = plVar241 + 4;
    uVar248 = uVar248 - 1;
  } while (uVar248 != 0);
  uVar251 = (uint)(uVar227 - bVar249);
  pauVar235 = (undefined1 (*) [16])(puVar234 + 8);
  puVar242 = (uint *)((long)plVar241 - uVar247);
  do {
    uVar210 = *(uint *)(*pauVar235 + 4);
    uVar211 = *(uint *)(*pauVar235 + 8);
    uVar212 = *(uint *)(*pauVar235 + 0xc);
    uVar213 = *(uint *)pauVar235[1];
    uVar214 = *(uint *)(pauVar235[1] + 4);
    uVar215 = *(uint *)(pauVar235[1] + 8);
    uVar216 = *(uint *)(pauVar235[1] + 0xc);
    pauVar3 = pauVar235 + 2;
    uVar221 = *puVar242;
    uVar222 = puVar242[1];
    uVar223 = puVar242[2];
    uVar224 = puVar242[3];
    uVar217 = puVar242[4];
    uVar218 = puVar242[5];
    uVar219 = puVar242[6];
    uVar220 = puVar242[7];
    *pauVar235 = (undefined1  [16])0x0;
    pauVar235[1] = (undefined1  [16])0x0;
    *puVar242 = uVar221 & -(uint)(uVar251 == 0) | *(uint *)*pauVar235 & uVar251;
    puVar242[1] = uVar222 & -(uint)(uVar251 == 0) | uVar210 & uVar251;
    puVar242[2] = uVar223 & -(uint)(uVar251 == 0) | uVar211 & uVar251;
    puVar242[3] = uVar224 & -(uint)(uVar251 == 0) | uVar212 & uVar251;
    puVar242[4] = uVar217 & -(uint)(uVar251 == 0) | uVar213 & uVar251;
    puVar242[5] = uVar218 & -(uint)(uVar251 == 0) | uVar214 & uVar251;
    puVar242[6] = uVar219 & -(uint)(uVar251 == 0) | uVar215 & uVar251;
    puVar242[7] = uVar220 & -(uint)(uVar251 == 0) | uVar216 & uVar251;
    uVar247 = uVar247 - 0x20;
    pauVar235 = pauVar3;
    puVar242 = puVar242 + 8;
  } while (uVar247 != 0);
  *(undefined8 *)*pauVar3 = 0;
  return 1;
}



undefined8
bn_mul4x_mont(ulong param_1,ulong *param_2,ulong *param_3,ulong *param_4,ulong *param_5,uint param_6
             )

{
  ulong *puVar1;
  undefined1 (*pauVar2) [16];
  ulong *puVar3;
  ulong uVar4;
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
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  unkint9 Var69;
  unkint9 Var70;
  unkint9 Var71;
  unkint9 Var72;
  unkint9 Var73;
  unkint9 Var74;
  unkint9 Var75;
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
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  undefined1 auVar158 [16];
  undefined1 auVar159 [16];
  undefined1 auVar160 [16];
  undefined1 auVar161 [16];
  undefined1 auVar162 [16];
  undefined1 auVar163 [16];
  undefined1 auVar164 [16];
  undefined1 auVar165 [16];
  undefined1 auVar166 [16];
  undefined1 auVar167 [16];
  undefined1 auVar168 [16];
  undefined1 auVar169 [16];
  undefined1 auVar170 [16];
  undefined1 auVar171 [16];
  undefined1 auVar172 [16];
  undefined1 auVar173 [16];
  undefined1 auVar174 [16];
  undefined1 auVar175 [16];
  undefined1 auVar176 [16];
  undefined1 auVar177 [16];
  undefined1 auVar178 [16];
  undefined1 auVar179 [16];
  undefined1 auVar180 [16];
  undefined1 auVar181 [16];
  undefined1 auVar182 [16];
  uint uVar183;
  uint uVar184;
  uint uVar185;
  uint uVar186;
  uint uVar187;
  uint uVar188;
  uint uVar189;
  uint uVar190;
  uint uVar191;
  uint uVar192;
  uint uVar193;
  uint uVar194;
  uint uVar195;
  uint uVar196;
  uint uVar197;
  uint uVar198;
  ulong uVar199;
  long lVar200;
  long lVar201;
  ulong uVar202;
  ulong uVar203;
  ulong uVar204;
  long lVar205;
  ulong *puVar206;
  undefined1 (*pauVar207) [16];
  ulong uVar208;
  ulong uVar209;
  ulong *puVar210;
  long *plVar211;
  uint *puVar212;
  ulong *puVar213;
  ulong uVar214;
  uint in_R11D;
  long lVar215;
  ulong uVar216;
  ulong uVar217;
  ulong uVar218;
  bool bVar219;
  bool bVar220;
  uint uVar221;
  undefined1 auStack_78 [40];
  undefined1 auStack_50 [32];
  
  uVar217 = (ulong)param_6;
  if ((in_R11D & 0x80100) != 0x80100) {
    puVar213 = (ulong *)((ulong)(auStack_50 + uVar217 * -8) & 0xfffffffffffffc00);
    for (puVar3 = (ulong *)((long)puVar213 +
                           ((ulong)(&stack0xffffffffffffffd0 + -(long)puVar213) & 0xfffffffffffff000
                           )); puVar213 < puVar3; puVar3 = puVar3 + -0x200) {
    }
    puVar3[uVar217 + 1] = (ulong)register0x00000020;
    puVar3[uVar217 + 2] = param_1;
    uVar218 = *param_5;
    uVar214 = *param_3;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = *param_2;
    auVar37._8_8_ = 0;
    auVar37._0_8_ = uVar214;
    auVar140._8_8_ = 0;
    auVar140._0_8_ = SUB168(auVar5 * auVar37,8);
    uVar199 = SUB168(auVar5 * auVar37,0);
    uVar208 = uVar218 * uVar199;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = *param_4;
    auVar38._8_8_ = 0;
    auVar38._0_8_ = uVar208;
    auVar141._8_8_ = 0;
    auVar141._0_8_ = SUB168(auVar6 * auVar38,8) + (ulong)CARRY8(uVar199,SUB168(auVar6 * auVar38,0));
    auVar7._8_8_ = 0;
    auVar7._0_8_ = param_2[1];
    auVar39._8_8_ = 0;
    auVar39._0_8_ = uVar214;
    auVar140 = auVar7 * auVar39 + auVar140;
    auVar142._8_8_ = 0;
    auVar142._0_8_ = auVar140._0_8_;
    uVar202 = auVar140._8_8_;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = param_4[1];
    auVar40._8_8_ = 0;
    auVar40._0_8_ = uVar208;
    uVar204 = param_2[2];
    auVar142 = auVar8 * auVar40 + auVar141 + auVar142;
    uVar203 = auVar142._8_8_;
    *puVar3 = auVar142._0_8_;
    uVar199 = 4;
    do {
      uVar209 = uVar199;
      auVar144._8_8_ = 0;
      auVar144._0_8_ = uVar203;
      auVar143._8_8_ = 0;
      auVar143._0_8_ = uVar202;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = uVar204;
      auVar41._8_8_ = 0;
      auVar41._0_8_ = uVar214;
      auVar143 = auVar9 * auVar41 + auVar143;
      auVar145._8_8_ = 0;
      auVar145._0_8_ = auVar143._0_8_;
      auVar146._8_8_ = 0;
      auVar146._0_8_ = auVar143._8_8_;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = param_4[uVar209 - 2];
      auVar42._8_8_ = 0;
      auVar42._0_8_ = uVar208;
      uVar199 = param_2[uVar209 - 1];
      auVar145 = auVar10 * auVar42 + auVar144 + auVar145;
      auVar147._8_8_ = 0;
      auVar147._0_8_ = auVar145._8_8_;
      puVar3[uVar209 - 3] = auVar145._0_8_;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = uVar199;
      auVar43._8_8_ = 0;
      auVar43._0_8_ = uVar214;
      auVar146 = auVar11 * auVar43 + auVar146;
      auVar148._8_8_ = 0;
      auVar148._0_8_ = auVar146._0_8_;
      auVar149._8_8_ = 0;
      auVar149._0_8_ = auVar146._8_8_;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = param_4[uVar209 - 1];
      auVar44._8_8_ = 0;
      auVar44._0_8_ = uVar208;
      uVar199 = param_2[uVar209];
      auVar148 = auVar12 * auVar44 + auVar147 + auVar148;
      auVar150._8_8_ = 0;
      auVar150._0_8_ = auVar148._8_8_;
      puVar3[uVar209 - 2] = auVar148._0_8_;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = uVar199;
      auVar45._8_8_ = 0;
      auVar45._0_8_ = uVar214;
      auVar149 = auVar13 * auVar45 + auVar149;
      auVar151._8_8_ = 0;
      auVar151._0_8_ = auVar149._0_8_;
      auVar152._8_8_ = 0;
      auVar152._0_8_ = auVar149._8_8_;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = param_4[uVar209];
      auVar46._8_8_ = 0;
      auVar46._0_8_ = uVar208;
      uVar199 = param_2[uVar209 + 1];
      auVar151 = auVar14 * auVar46 + auVar150 + auVar151;
      auVar153._8_8_ = 0;
      auVar153._0_8_ = auVar151._8_8_;
      puVar3[uVar209 - 1] = auVar151._0_8_;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = uVar199;
      auVar47._8_8_ = 0;
      auVar47._0_8_ = uVar214;
      auVar152 = auVar15 * auVar47 + auVar152;
      auVar154._8_8_ = 0;
      auVar154._0_8_ = auVar152._0_8_;
      uVar202 = auVar152._8_8_;
      auVar155._8_8_ = 0;
      auVar155._0_8_ = uVar202;
      uVar199 = uVar209 + 4;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = param_4[uVar209 + 1];
      auVar48._8_8_ = 0;
      auVar48._0_8_ = uVar208;
      uVar204 = param_2[uVar209 + 2];
      auVar154 = auVar16 * auVar48 + auVar153 + auVar154;
      uVar203 = auVar154._8_8_;
      auVar156._8_8_ = 0;
      auVar156._0_8_ = uVar203;
      puVar3[uVar209] = auVar154._0_8_;
    } while (uVar199 < uVar217);
    auVar17._8_8_ = 0;
    auVar17._0_8_ = uVar204;
    auVar49._8_8_ = 0;
    auVar49._0_8_ = uVar214;
    auVar155 = auVar17 * auVar49 + auVar155;
    auVar157._8_8_ = 0;
    auVar157._0_8_ = auVar155._0_8_;
    auVar158._8_8_ = 0;
    auVar158._0_8_ = auVar155._8_8_;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = param_4[uVar209 + 2];
    auVar50._8_8_ = 0;
    auVar50._0_8_ = uVar208;
    uVar204 = param_2[uVar209 + 3];
    auVar157 = auVar18 * auVar50 + auVar156 + auVar157;
    auVar159._8_8_ = 0;
    auVar159._0_8_ = auVar157._8_8_;
    puVar3[uVar209 + 1] = auVar157._0_8_;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar204;
    auVar51._8_8_ = 0;
    auVar51._0_8_ = uVar214;
    auVar158 = auVar19 * auVar51 + auVar158;
    auVar160._8_8_ = 0;
    auVar160._0_8_ = auVar158._0_8_;
    uVar204 = auVar158._8_8_;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = param_4[uVar209 + 3];
    auVar52._8_8_ = 0;
    auVar52._0_8_ = uVar208;
    uVar214 = *param_2;
    auVar160 = auVar20 * auVar52 + auVar159 + auVar160;
    uVar202 = auVar160._8_8_;
    puVar3[uVar209 + 2] = auVar160._0_8_;
    puVar3[uVar209 + 3] = uVar202 + uVar204;
    puVar3[uVar199] = (ulong)CARRY8(uVar202,uVar204);
    uVar199 = 1;
    do {
      uVar202 = param_3[uVar199];
      auVar161._8_8_ = 0;
      auVar161._0_8_ = *puVar3;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar214;
      auVar53._8_8_ = 0;
      auVar53._0_8_ = uVar202;
      auVar161 = auVar21 * auVar53 + auVar161;
      uVar214 = auVar161._0_8_;
      auVar162._8_8_ = 0;
      auVar162._0_8_ = auVar161._8_8_;
      uVar209 = uVar218 * uVar214;
      auVar22._8_8_ = 0;
      auVar22._0_8_ = *param_4;
      auVar54._8_8_ = 0;
      auVar54._0_8_ = uVar209;
      auVar163._8_8_ = 0;
      auVar163._0_8_ =
           SUB168(auVar22 * auVar54,8) + (ulong)CARRY8(uVar214,SUB168(auVar22 * auVar54,0));
      auVar23._8_8_ = 0;
      auVar23._0_8_ = param_2[1];
      auVar55._8_8_ = 0;
      auVar55._0_8_ = uVar202;
      auVar162 = auVar23 * auVar55 + auVar162;
      uVar214 = auVar162._0_8_;
      auVar164._8_8_ = 0;
      auVar164._0_8_ = uVar214 + puVar3[1];
      uVar203 = auVar162._8_8_ + (ulong)CARRY8(uVar214,puVar3[1]);
      auVar24._8_8_ = 0;
      auVar24._0_8_ = param_4[1];
      auVar56._8_8_ = 0;
      auVar56._0_8_ = uVar209;
      uVar214 = param_2[2];
      auVar164 = auVar24 * auVar56 + auVar163 + auVar164;
      uVar208 = auVar164._8_8_;
      *puVar3 = auVar164._0_8_;
      uVar204 = 4;
      do {
        uVar216 = uVar204;
        auVar166._8_8_ = 0;
        auVar166._0_8_ = uVar208;
        auVar165._8_8_ = 0;
        auVar165._0_8_ = uVar203;
        auVar25._8_8_ = 0;
        auVar25._0_8_ = uVar214;
        auVar57._8_8_ = 0;
        auVar57._0_8_ = uVar202;
        auVar165 = auVar25 * auVar57 + auVar165;
        uVar214 = auVar165._0_8_;
        auVar167._8_8_ = 0;
        auVar167._0_8_ = uVar214 + puVar3[uVar216 - 2];
        auVar168._8_8_ = 0;
        auVar168._0_8_ = auVar165._8_8_ + (ulong)CARRY8(uVar214,puVar3[uVar216 - 2]);
        auVar26._8_8_ = 0;
        auVar26._0_8_ = param_4[uVar216 - 2];
        auVar58._8_8_ = 0;
        auVar58._0_8_ = uVar209;
        uVar214 = param_2[uVar216 - 1];
        auVar167 = auVar26 * auVar58 + auVar166 + auVar167;
        auVar169._8_8_ = 0;
        auVar169._0_8_ = auVar167._8_8_;
        puVar3[uVar216 - 3] = auVar167._0_8_;
        auVar27._8_8_ = 0;
        auVar27._0_8_ = uVar214;
        auVar59._8_8_ = 0;
        auVar59._0_8_ = uVar202;
        auVar168 = auVar27 * auVar59 + auVar168;
        uVar214 = auVar168._0_8_;
        auVar170._8_8_ = 0;
        auVar170._0_8_ = uVar214 + puVar3[uVar216 - 1];
        auVar171._8_8_ = 0;
        auVar171._0_8_ = auVar168._8_8_ + (ulong)CARRY8(uVar214,puVar3[uVar216 - 1]);
        auVar28._8_8_ = 0;
        auVar28._0_8_ = param_4[uVar216 - 1];
        auVar60._8_8_ = 0;
        auVar60._0_8_ = uVar209;
        uVar214 = param_2[uVar216];
        auVar170 = auVar28 * auVar60 + auVar169 + auVar170;
        auVar172._8_8_ = 0;
        auVar172._0_8_ = auVar170._8_8_;
        puVar3[uVar216 - 2] = auVar170._0_8_;
        auVar29._8_8_ = 0;
        auVar29._0_8_ = uVar214;
        auVar61._8_8_ = 0;
        auVar61._0_8_ = uVar202;
        auVar171 = auVar29 * auVar61 + auVar171;
        uVar214 = auVar171._0_8_;
        auVar173._8_8_ = 0;
        auVar173._0_8_ = uVar214 + puVar3[uVar216];
        auVar174._8_8_ = 0;
        auVar174._0_8_ = auVar171._8_8_ + (ulong)CARRY8(uVar214,puVar3[uVar216]);
        auVar30._8_8_ = 0;
        auVar30._0_8_ = param_4[uVar216];
        auVar62._8_8_ = 0;
        auVar62._0_8_ = uVar209;
        uVar214 = param_2[uVar216 + 1];
        auVar173 = auVar30 * auVar62 + auVar172 + auVar173;
        auVar175._8_8_ = 0;
        auVar175._0_8_ = auVar173._8_8_;
        puVar3[uVar216 - 1] = auVar173._0_8_;
        auVar31._8_8_ = 0;
        auVar31._0_8_ = uVar214;
        auVar63._8_8_ = 0;
        auVar63._0_8_ = uVar202;
        auVar174 = auVar31 * auVar63 + auVar174;
        uVar214 = auVar174._0_8_;
        auVar176._8_8_ = 0;
        auVar176._0_8_ = uVar214 + puVar3[uVar216 + 1];
        uVar203 = auVar174._8_8_ + (ulong)CARRY8(uVar214,puVar3[uVar216 + 1]);
        auVar177._8_8_ = 0;
        auVar177._0_8_ = uVar203;
        uVar204 = uVar216 + 4;
        auVar32._8_8_ = 0;
        auVar32._0_8_ = param_4[uVar216 + 1];
        auVar64._8_8_ = 0;
        auVar64._0_8_ = uVar209;
        uVar214 = param_2[uVar216 + 2];
        auVar176 = auVar32 * auVar64 + auVar175 + auVar176;
        uVar208 = auVar176._8_8_;
        auVar178._8_8_ = 0;
        auVar178._0_8_ = uVar208;
        puVar3[uVar216] = auVar176._0_8_;
      } while (uVar204 < uVar217);
      auVar33._8_8_ = 0;
      auVar33._0_8_ = uVar214;
      auVar65._8_8_ = 0;
      auVar65._0_8_ = uVar202;
      auVar177 = auVar33 * auVar65 + auVar177;
      uVar214 = auVar177._0_8_;
      auVar179._8_8_ = 0;
      auVar179._0_8_ = uVar214 + puVar3[uVar216 + 2];
      auVar180._8_8_ = 0;
      auVar180._0_8_ = auVar177._8_8_ + (ulong)CARRY8(uVar214,puVar3[uVar216 + 2]);
      auVar34._8_8_ = 0;
      auVar34._0_8_ = param_4[uVar216 + 2];
      auVar66._8_8_ = 0;
      auVar66._0_8_ = uVar209;
      uVar214 = param_2[uVar216 + 3];
      auVar179 = auVar34 * auVar66 + auVar178 + auVar179;
      auVar181._8_8_ = 0;
      auVar181._0_8_ = auVar179._8_8_;
      puVar3[uVar216 + 1] = auVar179._0_8_;
      auVar35._8_8_ = 0;
      auVar35._0_8_ = uVar214;
      auVar67._8_8_ = 0;
      auVar67._0_8_ = uVar202;
      auVar180 = auVar35 * auVar67 + auVar180;
      uVar214 = auVar180._0_8_;
      auVar182._8_8_ = 0;
      auVar182._0_8_ = uVar214 + puVar3[uVar216 + 3];
      uVar203 = auVar180._8_8_ + (ulong)CARRY8(uVar214,puVar3[uVar216 + 3]);
      uVar199 = uVar199 + 1;
      auVar36._8_8_ = 0;
      auVar36._0_8_ = param_4[uVar216 + 3];
      auVar68._8_8_ = 0;
      auVar68._0_8_ = uVar209;
      uVar214 = *param_2;
      auVar182 = auVar36 * auVar68 + auVar181 + auVar182;
      uVar208 = auVar182._8_8_;
      puVar3[uVar216 + 2] = auVar182._0_8_;
      uVar209 = uVar208 + uVar203;
      uVar202 = puVar3[uVar217];
      puVar3[uVar216 + 3] = uVar209 + puVar3[uVar217];
      puVar3[uVar204] = (ulong)CARRY8(uVar208,uVar203) + (ulong)CARRY8(uVar209,uVar202);
    } while (uVar199 < uVar217);
    uVar199 = puVar3[uVar217 + 2];
    uVar202 = uVar217 - 4 >> 2;
    lVar200 = *puVar3 - *param_4;
    uVar217 = puVar3[2];
    uVar218 = puVar3[3];
    uVar214 = (ulong)(*puVar3 < *param_4);
    uVar204 = puVar3[1] - param_4[1];
    bVar219 = puVar3[1] < param_4[1] || uVar204 < uVar214;
    lVar205 = uVar204 - uVar214;
    lVar201 = 0;
    do {
      lVar215 = lVar201;
      *(long *)(uVar199 + lVar215 * 8) = lVar200;
      *(long *)(uVar199 + 8 + lVar215 * 8) = lVar205;
      uVar208 = uVar217 - param_4[lVar215 + 2];
      uVar214 = puVar3[lVar215 + 4];
      uVar204 = puVar3[lVar215 + 5];
      uVar203 = (ulong)(uVar217 < param_4[lVar215 + 2] || uVar208 < bVar219);
      uVar217 = param_4[lVar215 + 3];
      uVar209 = uVar218 - param_4[lVar215 + 3];
      *(ulong *)(uVar199 + 0x10 + lVar215 * 8) = uVar208 - bVar219;
      *(ulong *)(uVar199 + 0x18 + lVar215 * 8) = uVar209 - uVar203;
      uVar203 = (ulong)(uVar218 < uVar217 || uVar209 < uVar203);
      uVar208 = uVar214 - param_4[lVar215 + 4];
      lVar200 = uVar208 - uVar203;
      uVar217 = puVar3[lVar215 + 6];
      uVar218 = puVar3[lVar215 + 7];
      uVar214 = (ulong)(uVar214 < param_4[lVar215 + 4] || uVar208 < uVar203);
      uVar203 = uVar204 - param_4[lVar215 + 5];
      bVar219 = uVar204 < param_4[lVar215 + 5] || uVar203 < uVar214;
      lVar205 = uVar203 - uVar214;
      lVar201 = lVar215 + 4;
      uVar202 = uVar202 - 1;
    } while (uVar202 != 0);
    *(long *)(uVar199 + lVar201 * 8) = lVar200;
    uVar214 = puVar3[lVar215 + 8];
    uVar204 = param_4[lVar215 + 6];
    uVar202 = uVar217 - param_4[lVar215 + 6];
    *(long *)(uVar199 + 8 + lVar201 * 8) = lVar205;
    uVar204 = (ulong)(uVar217 < uVar204 || uVar202 < bVar219);
    uVar217 = param_4[lVar215 + 7];
    uVar203 = uVar218 - param_4[lVar215 + 7];
    *(ulong *)(uVar199 + 0x10 + lVar201 * 8) = uVar202 - bVar219;
    uVar221 = (int)uVar214 - (uint)(uVar218 < uVar217 || uVar203 < uVar204);
    *(ulong *)(uVar199 + 0x18 + lVar201 * 8) = uVar203 - uVar204;
    uVar217 = (ulong)(param_6 >> 2);
    lVar201 = 0;
    do {
      puVar212 = (uint *)((long)puVar3 + lVar201);
      uVar195 = *puVar212;
      uVar196 = puVar212[1];
      uVar197 = puVar212[2];
      uVar198 = puVar212[3];
      puVar212 = (uint *)(uVar199 + lVar201);
      uVar191 = *puVar212;
      uVar192 = puVar212[1];
      uVar193 = puVar212[2];
      uVar194 = puVar212[3];
      puVar212 = (uint *)((long)puVar3 + lVar201 + 0x10);
      uVar187 = *puVar212;
      uVar188 = puVar212[1];
      uVar189 = puVar212[2];
      uVar190 = puVar212[3];
      *(undefined1 (*) [16])((long)puVar3 + lVar201) = (undefined1  [16])0x0;
      puVar212 = (uint *)(uVar199 + 0x10 + lVar201);
      uVar183 = *puVar212;
      uVar184 = puVar212[1];
      uVar185 = puVar212[2];
      uVar186 = puVar212[3];
      puVar212 = (uint *)(uVar199 + lVar201);
      *puVar212 = uVar195 & uVar221 | uVar191 & (uVar221 ^ 0xffffffff);
      puVar212[1] = uVar196 & uVar221 | uVar192 & (uVar221 ^ 0xffffffff);
      puVar212[2] = uVar197 & uVar221 | uVar193 & (uVar221 ^ 0xffffffff);
      puVar212[3] = uVar198 & uVar221 | uVar194 & (uVar221 ^ 0xffffffff);
      *(undefined1 (*) [16])((long)puVar3 + lVar201 + 0x10) = (undefined1  [16])0x0;
      puVar212 = (uint *)(uVar199 + 0x10 + lVar201);
      *puVar212 = uVar187 & uVar221 | uVar183 & (uVar221 ^ 0xffffffff);
      puVar212[1] = uVar188 & uVar221 | uVar184 & (uVar221 ^ 0xffffffff);
      puVar212[2] = uVar189 & uVar221 | uVar185 & (uVar221 ^ 0xffffffff);
      puVar212[3] = uVar190 & uVar221 | uVar186 & (uVar221 ^ 0xffffffff);
      lVar201 = lVar201 + 0x20;
      uVar217 = uVar217 - 1;
    } while (uVar217 != 0);
    return 1;
  }
  uVar199 = (ulong)(param_6 << 3);
  uVar217 = *param_5;
  puVar213 = (ulong *)((ulong)(auStack_78 + -uVar199) & 0xffffffffffffff80);
  for (puVar3 = (ulong *)((long)puVar213 +
                         ((ulong)(&stack0xffffffffffffffd0 + -(long)puVar213) & 0xfffffffffffff000))
      ; puVar213 < puVar3; puVar3 = puVar3 + -0x200) {
  }
  *puVar3 = uVar199;
  puVar3[2] = (long)param_3 + uVar199;
  puVar3[3] = uVar217;
  puVar3[4] = param_1;
  puVar3[5] = (ulong)register0x00000020;
  puVar3[6] = (ulong)((param_6 << 3) >> 5) - 1;
  uVar217 = *param_3;
  auVar76._8_8_ = 0;
  auVar76._0_8_ = uVar217;
  auVar108._8_8_ = 0;
  auVar108._0_8_ = *param_2;
  uVar204 = SUB168(auVar76 * auVar108,0);
  uVar214 = SUB168(auVar76 * auVar108,8);
  auVar77._8_8_ = 0;
  auVar77._0_8_ = uVar217;
  auVar109._8_8_ = 0;
  auVar109._0_8_ = param_2[1];
  uVar203 = SUB168(auVar77 * auVar109,0);
  uVar209 = SUB168(auVar77 * auVar109,8);
  puVar3[1] = (ulong)(param_3 + 1);
  auVar78._8_8_ = 0;
  auVar78._0_8_ = uVar217;
  auVar110._8_8_ = 0;
  auVar110._0_8_ = param_2[2];
  uVar208 = SUB168(auVar78 * auVar110,0);
  uVar199 = (ulong)CARRY8(uVar203,uVar214);
  uVar218 = uVar208 + uVar209;
  uVar202 = uVar204 * puVar3[3];
  auVar79._8_8_ = 0;
  auVar79._0_8_ = uVar217;
  auVar111._8_8_ = 0;
  auVar111._0_8_ = param_2[3];
  param_2 = param_2 + 4;
  Var69 = (unkuint9)
          (SUB168(auVar78 * auVar110,8) +
          (ulong)(CARRY8(uVar208,uVar209) || CARRY8(uVar218,uVar199))) +
          (unkuint9)SUB168(auVar79 * auVar111,0) + (unkuint9)0;
  Var70 = (unkuint9)SUB168(auVar79 * auVar111,8) + (unkuint9)0 +
          (unkuint9)((char)((unkuint9)Var69 >> 0x40) != '\0');
  uVar208 = (ulong)Var70;
  auVar80._8_8_ = 0;
  auVar80._0_8_ = uVar202;
  auVar112._8_8_ = 0;
  auVar112._0_8_ = *param_4;
  Var74 = (unkuint9)SUB168(auVar80 * auVar112,8) + (unkuint9)(uVar203 + uVar214) + (unkuint9)0;
  auVar81._8_8_ = 0;
  auVar81._0_8_ = uVar202;
  auVar113._8_8_ = 0;
  auVar113._0_8_ = param_4[1];
  Var70 = (unkuint9)(ulong)Var74 + (unkuint9)SUB168(auVar81 * auVar113,0) +
          (unkuint9)
          ((char)((unkuint9)uVar204 + (unkuint9)SUB168(auVar80 * auVar112,0) +
                  (unkuint9)((char)((unkuint9)Var70 >> 0x40) != '\0') >> 0x40) != '\0');
  Var74 = (unkuint9)SUB168(auVar81 * auVar113,8) + (unkuint9)(uVar218 + uVar199) +
          (unkuint9)((char)((unkuint9)Var74 >> 0x40) != '\0');
  auVar82._8_8_ = 0;
  auVar82._0_8_ = uVar202;
  auVar114._8_8_ = 0;
  auVar114._0_8_ = param_4[2];
  uVar199 = puVar3[6];
  puVar3[8] = (ulong)Var70;
  Var70 = (unkuint9)(ulong)Var74 + (unkuint9)SUB168(auVar82 * auVar114,0) +
          (unkuint9)((char)((unkuint9)Var70 >> 0x40) != '\0');
  Var74 = (unkuint9)SUB168(auVar82 * auVar114,8) + (unkuint9)(ulong)Var69 +
          (unkuint9)((char)((unkuint9)Var74 >> 0x40) != '\0');
  auVar83._8_8_ = 0;
  auVar83._0_8_ = uVar202;
  auVar115._8_8_ = 0;
  auVar115._0_8_ = param_4[3];
  puVar3[9] = (ulong)Var70;
  Var69 = (unkuint9)(ulong)Var74 + (unkuint9)SUB168(auVar83 * auVar115,0) +
          (unkuint9)((char)((unkuint9)Var70 >> 0x40) != '\0');
  bVar219 = (char)((unkuint9)Var69 >> 0x40) != '\0';
  Var70 = (unkuint9)SUB168(auVar83 * auVar115,8) + (unkuint9)0 +
          (unkuint9)((char)((unkuint9)Var74 >> 0x40) != '\0');
  bVar220 = (char)((unkuint9)Var70 >> 0x40) != '\0';
  uVar218 = (ulong)Var70;
  param_4 = param_4 + 4;
  puVar3[10] = (ulong)Var69;
  puVar213 = puVar3 + 0xc;
  do {
    puVar206 = puVar213;
    Var69 = (unkuint9)uVar218 + (unkuint9)0 + (unkuint9)bVar219;
    auVar84._8_8_ = 0;
    auVar84._0_8_ = uVar217;
    auVar116._8_8_ = 0;
    auVar116._0_8_ = *param_2;
    Var70 = (unkuint9)SUB168(auVar84 * auVar116,0) + (unkuint9)uVar208 +
            (unkuint9)((char)((unkuint9)Var69 >> 0x40) != '\0');
    auVar85._8_8_ = 0;
    auVar85._0_8_ = uVar217;
    auVar117._8_8_ = 0;
    auVar117._0_8_ = param_2[1];
    Var74 = (unkuint9)SUB168(auVar85 * auVar117,0) + (unkuint9)SUB168(auVar84 * auVar116,8) +
            (unkuint9)((char)((unkuint9)Var70 >> 0x40) != '\0');
    auVar86._8_8_ = 0;
    auVar86._0_8_ = uVar217;
    auVar118._8_8_ = 0;
    auVar118._0_8_ = param_2[2];
    Var71 = (unkuint9)SUB168(auVar86 * auVar118,0) + (unkuint9)SUB168(auVar85 * auVar117,8) +
            (unkuint9)((char)((unkuint9)Var74 >> 0x40) != '\0');
    auVar87._8_8_ = 0;
    auVar87._0_8_ = uVar217;
    auVar119._8_8_ = 0;
    auVar119._0_8_ = param_2[3];
    Var72 = (unkuint9)SUB168(auVar87 * auVar119,0) + (unkuint9)SUB168(auVar86 * auVar118,8) +
            (unkuint9)((char)((unkuint9)Var71 >> 0x40) != '\0');
    Var73 = (unkuint9)SUB168(auVar87 * auVar119,8) + (unkuint9)0 +
            (unkuint9)((char)((unkuint9)Var72 >> 0x40) != '\0');
    uVar208 = (ulong)Var73;
    param_2 = param_2 + 4;
    puVar213 = puVar206 + 4;
    Var70 = (unkuint9)(ulong)Var70 + (unkuint9)(ulong)Var69 + (unkuint9)bVar220;
    auVar88._8_8_ = 0;
    auVar88._0_8_ = uVar202;
    auVar120._8_8_ = 0;
    auVar120._0_8_ = *param_4;
    Var69 = (unkuint9)(ulong)Var70 + (unkuint9)SUB168(auVar88 * auVar120,0) +
            (unkuint9)((char)((unkuint9)Var73 >> 0x40) != '\0');
    Var74 = (unkuint9)(ulong)Var74 + (unkuint9)SUB168(auVar88 * auVar120,8) +
            (unkuint9)((char)((unkuint9)Var70 >> 0x40) != '\0');
    auVar89._8_8_ = 0;
    auVar89._0_8_ = uVar202;
    auVar121._8_8_ = 0;
    auVar121._0_8_ = param_4[1];
    Var70 = (unkuint9)(ulong)Var74 + (unkuint9)SUB168(auVar89 * auVar121,0) +
            (unkuint9)((char)((unkuint9)Var69 >> 0x40) != '\0');
    Var74 = (unkuint9)(ulong)Var71 + (unkuint9)SUB168(auVar89 * auVar121,8) +
            (unkuint9)((char)((unkuint9)Var74 >> 0x40) != '\0');
    auVar90._8_8_ = 0;
    auVar90._0_8_ = uVar202;
    auVar122._8_8_ = 0;
    auVar122._0_8_ = param_4[2];
    puVar206[-1] = (ulong)Var69;
    Var69 = (unkuint9)(ulong)Var74 + (unkuint9)SUB168(auVar90 * auVar122,0) +
            (unkuint9)((char)((unkuint9)Var70 >> 0x40) != '\0');
    *puVar206 = (ulong)Var70;
    Var70 = (unkuint9)(ulong)Var72 + (unkuint9)SUB168(auVar90 * auVar122,8) +
            (unkuint9)((char)((unkuint9)Var74 >> 0x40) != '\0');
    auVar91._8_8_ = 0;
    auVar91._0_8_ = uVar202;
    auVar123._8_8_ = 0;
    auVar123._0_8_ = param_4[3];
    puVar206[1] = (ulong)Var69;
    Var69 = (unkuint9)(ulong)Var70 + (unkuint9)SUB168(auVar91 * auVar123,0) +
            (unkuint9)((char)((unkuint9)Var69 >> 0x40) != '\0');
    bVar219 = (char)((unkuint9)Var69 >> 0x40) != '\0';
    uVar218 = SUB168(auVar91 * auVar123,8) + (ulong)((char)((unkuint9)Var70 >> 0x40) != '\0');
    param_4 = param_4 + 4;
    puVar206[2] = (ulong)Var69;
    bVar220 = SBORROW8(uVar199,1);
    uVar199 = uVar199 - 1;
  } while (uVar199 != 0);
  uVar217 = *puVar3;
  puVar210 = (ulong *)puVar3[1];
  uVar199 = (ulong)CARRY8(uVar208,uVar218 + bVar219);
  puVar206[3] = uVar208 + uVar218 + bVar219;
  do {
    uVar218 = *puVar210;
    param_2 = (ulong *)((long)param_2 - uVar217);
    *puVar213 = -uVar199;
    param_4 = (ulong *)((long)param_4 - uVar217);
    auVar92._8_8_ = 0;
    auVar92._0_8_ = uVar218;
    auVar124._8_8_ = 0;
    auVar124._0_8_ = *param_2;
    auVar93._8_8_ = 0;
    auVar93._0_8_ = uVar218;
    auVar125._8_8_ = 0;
    auVar125._0_8_ = param_2[1];
    Var70 = (unkuint9)SUB168(auVar92 * auVar124,0) + (unkuint9)puVar3[8] + (unkuint9)0;
    uVar217 = (ulong)Var70;
    Var69 = (unkuint9)SUB168(auVar92 * auVar124,8) + (unkuint9)SUB168(auVar93 * auVar125,0) +
            (unkuint9)0;
    auVar94._8_8_ = 0;
    auVar94._0_8_ = uVar218;
    auVar126._8_8_ = 0;
    auVar126._0_8_ = param_2[2];
    Var70 = (unkuint9)(ulong)Var69 + (unkuint9)puVar3[9] +
            (unkuint9)((char)((unkuint9)Var70 >> 0x40) != '\0');
    Var69 = (unkuint9)SUB168(auVar93 * auVar125,8) + (unkuint9)SUB168(auVar94 * auVar126,0) +
            (unkuint9)((char)((unkuint9)Var69 >> 0x40) != '\0');
    Var74 = (unkuint9)(ulong)Var69 + (unkuint9)puVar3[10] +
            (unkuint9)((char)((unkuint9)Var70 >> 0x40) != '\0');
    puVar3[1] = (ulong)(puVar210 + 1);
    uVar199 = uVar217 * puVar3[3];
    auVar95._8_8_ = 0;
    auVar95._0_8_ = uVar218;
    auVar127._8_8_ = 0;
    auVar127._0_8_ = param_2[3];
    Var69 = (unkuint9)
            (ulong)((unkuint9)
                    (ulong)((unkuint9)SUB168(auVar94 * auVar126,8) + (unkuint9)0 +
                           (unkuint9)((char)((unkuint9)Var69 >> 0x40) != '\0')) + (unkuint9)0 +
                   (unkuint9)((char)((unkuint9)Var74 >> 0x40) != '\0')) +
            (unkuint9)SUB168(auVar95 * auVar127,0) + (unkuint9)0;
    Var71 = (unkuint9)(ulong)Var69 + (unkuint9)puVar3[0xb] + (unkuint9)0;
    Var69 = (unkuint9)SUB168(auVar95 * auVar127,8) + (unkuint9)0 +
            (unkuint9)((char)((unkuint9)Var69 >> 0x40) != '\0');
    param_2 = param_2 + 4;
    Var72 = (unkuint9)(ulong)Var69 + (unkuint9)0 +
            (unkuint9)((char)((unkuint9)Var71 >> 0x40) != '\0');
    uVar214 = (ulong)Var72;
    auVar96._8_8_ = 0;
    auVar96._0_8_ = uVar199;
    auVar128._8_8_ = 0;
    auVar128._0_8_ = *param_4;
    Var70 = (unkuint9)SUB168(auVar96 * auVar128,8) + (unkuint9)(ulong)Var70 +
            (unkuint9)((char)((unkuint9)Var72 >> 0x40) != '\0');
    auVar97._8_8_ = 0;
    auVar97._0_8_ = uVar199;
    auVar129._8_8_ = 0;
    auVar129._0_8_ = param_4[1];
    Var69 = (unkuint9)(ulong)Var70 + (unkuint9)SUB168(auVar97 * auVar129,0) +
            (unkuint9)
            ((char)((unkuint9)uVar217 + (unkuint9)SUB168(auVar96 * auVar128,0) +
                    (unkuint9)((char)((unkuint9)Var69 >> 0x40) != '\0') >> 0x40) != '\0');
    Var70 = (unkuint9)SUB168(auVar97 * auVar129,8) + (unkuint9)(ulong)Var74 +
            (unkuint9)((char)((unkuint9)Var70 >> 0x40) != '\0');
    auVar98._8_8_ = 0;
    auVar98._0_8_ = uVar199;
    auVar130._8_8_ = 0;
    auVar130._0_8_ = param_4[2];
    puVar3[8] = (ulong)Var69;
    Var69 = (unkuint9)(ulong)Var70 + (unkuint9)SUB168(auVar98 * auVar130,0) +
            (unkuint9)((char)((unkuint9)Var69 >> 0x40) != '\0');
    Var70 = (unkuint9)SUB168(auVar98 * auVar130,8) + (unkuint9)(ulong)Var71 +
            (unkuint9)((char)((unkuint9)Var70 >> 0x40) != '\0');
    auVar99._8_8_ = 0;
    auVar99._0_8_ = uVar199;
    auVar131._8_8_ = 0;
    auVar131._0_8_ = param_4[3];
    puVar3[9] = (ulong)Var69;
    param_4 = param_4 + 4;
    Var69 = (unkuint9)(ulong)Var70 + (unkuint9)SUB168(auVar99 * auVar131,0) +
            (unkuint9)((char)((unkuint9)Var69 >> 0x40) != '\0');
    bVar219 = (char)((unkuint9)Var69 >> 0x40) != '\0';
    Var70 = (unkuint9)SUB168(auVar99 * auVar131,8) + (unkuint9)0 +
            (unkuint9)((char)((unkuint9)Var70 >> 0x40) != '\0');
    bVar220 = (char)((unkuint9)Var70 >> 0x40) != '\0';
    uVar204 = (ulong)Var70;
    uVar217 = puVar3[6];
    puVar3[10] = (ulong)Var69;
    puVar213 = puVar3 + 0xc;
    do {
      puVar206 = puVar213;
      auVar100._8_8_ = 0;
      auVar100._0_8_ = uVar218;
      auVar132._8_8_ = 0;
      auVar132._0_8_ = *param_2;
      Var69 = (unkuint9)uVar204 + (unkuint9)0 + (unkuint9)bVar219;
      Var74 = (unkuint9)SUB168(auVar100 * auVar132,0) + (unkuint9)uVar214 + (unkuint9)bVar220;
      auVar101._8_8_ = 0;
      auVar101._0_8_ = uVar218;
      auVar133._8_8_ = 0;
      auVar133._0_8_ = param_2[1];
      Var70 = (unkuint9)(ulong)Var74 + (unkuint9)*puVar206 +
              (unkuint9)((char)((unkuint9)Var69 >> 0x40) != '\0');
      Var71 = (unkuint9)SUB168(auVar101 * auVar133,0) + (unkuint9)SUB168(auVar100 * auVar132,8) +
              (unkuint9)((char)((unkuint9)Var74 >> 0x40) != '\0');
      auVar102._8_8_ = 0;
      auVar102._0_8_ = uVar218;
      auVar134._8_8_ = 0;
      auVar134._0_8_ = param_2[2];
      Var74 = (unkuint9)(ulong)Var71 + (unkuint9)puVar206[1] +
              (unkuint9)((char)((unkuint9)Var70 >> 0x40) != '\0');
      Var72 = (unkuint9)SUB168(auVar102 * auVar134,0) + (unkuint9)SUB168(auVar101 * auVar133,8) +
              (unkuint9)((char)((unkuint9)Var71 >> 0x40) != '\0');
      auVar103._8_8_ = 0;
      auVar103._0_8_ = uVar218;
      auVar135._8_8_ = 0;
      auVar135._0_8_ = param_2[3];
      Var71 = (unkuint9)(ulong)Var72 + (unkuint9)puVar206[2] +
              (unkuint9)((char)((unkuint9)Var74 >> 0x40) != '\0');
      Var73 = (unkuint9)SUB168(auVar103 * auVar135,0) + (unkuint9)SUB168(auVar102 * auVar134,8) +
              (unkuint9)((char)((unkuint9)Var72 >> 0x40) != '\0');
      Var72 = (unkuint9)(ulong)Var73 + (unkuint9)puVar206[3] +
              (unkuint9)((char)((unkuint9)Var71 >> 0x40) != '\0');
      Var75 = (unkuint9)SUB168(auVar103 * auVar135,8) + (unkuint9)0 +
              (unkuint9)((char)((unkuint9)Var73 >> 0x40) != '\0');
      param_2 = param_2 + 4;
      puVar213 = puVar206 + 4;
      Var73 = (unkuint9)(ulong)Var75 + (unkuint9)0 +
              (unkuint9)((char)((unkuint9)Var72 >> 0x40) != '\0');
      uVar214 = (ulong)Var73;
      Var70 = (unkuint9)(ulong)Var70 + (unkuint9)(ulong)Var69 +
              (unkuint9)((char)((unkuint9)Var75 >> 0x40) != '\0');
      auVar104._8_8_ = 0;
      auVar104._0_8_ = uVar199;
      auVar136._8_8_ = 0;
      auVar136._0_8_ = *param_4;
      Var69 = (unkuint9)(ulong)Var70 + (unkuint9)SUB168(auVar104 * auVar136,0) +
              (unkuint9)((char)((unkuint9)Var73 >> 0x40) != '\0');
      Var74 = (unkuint9)(ulong)Var74 + (unkuint9)SUB168(auVar104 * auVar136,8) +
              (unkuint9)((char)((unkuint9)Var70 >> 0x40) != '\0');
      auVar105._8_8_ = 0;
      auVar105._0_8_ = uVar199;
      auVar137._8_8_ = 0;
      auVar137._0_8_ = param_4[1];
      Var70 = (unkuint9)(ulong)Var74 + (unkuint9)SUB168(auVar105 * auVar137,0) +
              (unkuint9)((char)((unkuint9)Var69 >> 0x40) != '\0');
      Var74 = (unkuint9)(ulong)Var71 + (unkuint9)SUB168(auVar105 * auVar137,8) +
              (unkuint9)((char)((unkuint9)Var74 >> 0x40) != '\0');
      auVar106._8_8_ = 0;
      auVar106._0_8_ = uVar199;
      auVar138._8_8_ = 0;
      auVar138._0_8_ = param_4[2];
      puVar206[-1] = (ulong)Var69;
      Var69 = (unkuint9)(ulong)Var74 + (unkuint9)SUB168(auVar106 * auVar138,0) +
              (unkuint9)((char)((unkuint9)Var70 >> 0x40) != '\0');
      Var74 = (unkuint9)(ulong)Var72 + (unkuint9)SUB168(auVar106 * auVar138,8) +
              (unkuint9)((char)((unkuint9)Var74 >> 0x40) != '\0');
      auVar107._8_8_ = 0;
      auVar107._0_8_ = uVar199;
      auVar139._8_8_ = 0;
      auVar139._0_8_ = param_4[3];
      *puVar206 = (ulong)Var70;
      puVar206[1] = (ulong)Var69;
      Var69 = (unkuint9)(ulong)Var74 + (unkuint9)SUB168(auVar107 * auVar139,0) +
              (unkuint9)((char)((unkuint9)Var69 >> 0x40) != '\0');
      bVar219 = (char)((unkuint9)Var69 >> 0x40) != '\0';
      uVar204 = SUB168(auVar107 * auVar139,8) + (ulong)((char)((unkuint9)Var74 >> 0x40) != '\0');
      param_4 = param_4 + 4;
      puVar206[2] = (ulong)Var69;
      bVar220 = SBORROW8(uVar217,1);
      uVar217 = uVar217 - 1;
    } while (uVar217 != 0);
    uVar217 = *puVar3;
    puVar210 = (ulong *)puVar3[1];
    uVar218 = uVar214 + uVar204 + bVar219;
    uVar199 = (ulong)(CARRY8(uVar214,uVar204 + bVar219) || CARRY8(uVar218,(ulong)(*puVar213 != 0)));
    puVar206[3] = uVar218 + (*puVar213 != 0);
  } while (puVar210 != (ulong *)puVar3[2]);
  puVar213 = puVar3 + 8;
  param_4 = (ulong *)((long)param_4 - uVar217);
  uVar218 = uVar217 >> 5;
  bVar219 = (uVar217 >> 4 & 1) != 0;
  plVar211 = (long *)puVar3[4];
  do {
    uVar214 = *puVar213;
    puVar206 = puVar213 + 1;
    puVar210 = puVar213 + 2;
    puVar1 = puVar213 + 3;
    puVar213 = puVar213 + 4;
    uVar204 = (ulong)bVar219;
    uVar208 = uVar214 - *param_4;
    uVar214 = (ulong)(uVar214 < *param_4 || uVar208 < uVar204);
    uVar209 = *puVar206 - param_4[1];
    uVar202 = (ulong)(*puVar206 < param_4[1] || uVar209 < uVar214);
    uVar216 = *puVar210 - param_4[2];
    uVar203 = (ulong)(*puVar210 < param_4[2] || uVar216 < uVar202);
    uVar4 = *puVar1 - param_4[3];
    bVar219 = *puVar1 < param_4[3] || uVar4 < uVar203;
    param_4 = param_4 + 4;
    *plVar211 = uVar208 - uVar204;
    plVar211[1] = uVar209 - uVar214;
    plVar211[2] = uVar216 - uVar202;
    plVar211[3] = uVar4 - uVar203;
    plVar211 = plVar211 + 4;
    uVar218 = uVar218 - 1;
  } while (uVar218 != 0);
  uVar221 = (uint)(uVar199 - bVar219);
  pauVar207 = (undefined1 (*) [16])(puVar3 + 8);
  puVar212 = (uint *)((long)plVar211 - uVar217);
  do {
    uVar183 = *(uint *)(*pauVar207 + 4);
    uVar184 = *(uint *)(*pauVar207 + 8);
    uVar185 = *(uint *)(*pauVar207 + 0xc);
    uVar186 = *(uint *)pauVar207[1];
    uVar187 = *(uint *)(pauVar207[1] + 4);
    uVar188 = *(uint *)(pauVar207[1] + 8);
    uVar189 = *(uint *)(pauVar207[1] + 0xc);
    pauVar2 = pauVar207 + 2;
    uVar194 = *puVar212;
    uVar195 = puVar212[1];
    uVar196 = puVar212[2];
    uVar197 = puVar212[3];
    uVar190 = puVar212[4];
    uVar191 = puVar212[5];
    uVar192 = puVar212[6];
    uVar193 = puVar212[7];
    *pauVar207 = (undefined1  [16])0x0;
    pauVar207[1] = (undefined1  [16])0x0;
    *puVar212 = uVar194 & -(uint)(uVar221 == 0) | *(uint *)*pauVar207 & uVar221;
    puVar212[1] = uVar195 & -(uint)(uVar221 == 0) | uVar183 & uVar221;
    puVar212[2] = uVar196 & -(uint)(uVar221 == 0) | uVar184 & uVar221;
    puVar212[3] = uVar197 & -(uint)(uVar221 == 0) | uVar185 & uVar221;
    puVar212[4] = uVar190 & -(uint)(uVar221 == 0) | uVar186 & uVar221;
    puVar212[5] = uVar191 & -(uint)(uVar221 == 0) | uVar187 & uVar221;
    puVar212[6] = uVar192 & -(uint)(uVar221 == 0) | uVar188 & uVar221;
    puVar212[7] = uVar193 & -(uint)(uVar221 == 0) | uVar189 & uVar221;
    uVar217 = uVar217 - 0x20;
    pauVar207 = pauVar2;
    puVar212 = puVar212 + 8;
  } while (uVar217 != 0);
  *(undefined8 *)*pauVar2 = 0;
  return 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
bn_sqr8x_mont(long param_1,long param_2,undefined8 param_3,ulong param_4,ulong *param_5,uint param_6
             )

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  uint uVar27;
  long lVar28;
  ulong *puVar29;
  undefined1 (*pauVar30) [16];
  ulong *puVar31;
  long *plVar33;
  uint *puVar34;
  ulong uVar35;
  ulong uVar36;
  ulong uVar37;
  bool bVar38;
  long *extraout_XMM1_Qa;
  long *extraout_XMM1_Qa_00;
  undefined1 auStack_70 [64];
  undefined1 *puVar32;
  
  uVar35 = (ulong)(param_6 << 3);
  uVar36 = *param_5;
  uVar37 = (ulong)(auStack_70 + (uVar35 * -2 - param_2)) & 0xfff;
  if ((ulong)param_6 << 5 < uVar37) {
    uVar4 = uVar35 * -2 + 0xfc0;
    lVar28 = uVar37 - uVar4;
    if (uVar37 < uVar4) {
      lVar28 = 0;
    }
    puVar32 = auStack_70 + (uVar35 * -2 - lVar28);
  }
  else {
    puVar32 = auStack_70 + (uVar35 * -2 - uVar37);
  }
  puVar31 = (ulong *)((ulong)puVar32 & 0xffffffffffffffc0);
  for (puVar29 = (ulong *)(((ulong)(&stack0xffffffffffffffd0 + -(long)puVar31) & 0xfffffffffffff000)
                          + (long)puVar31); puVar31 < puVar29; puVar29 = puVar29 + -0x200) {
  }
  puVar29[4] = uVar36;
  puVar29[5] = (ulong)register0x00000020;
  if ((_bn_sqrx8x_internal & 0x80100) == 0x80100) {
    puVar29[-1] = 0x1008cb;
    iVar26 = bn_sqrx8x_internal(0,param_1,param_4,-uVar35);
    puVar29 = (ulong *)(uVar36 + param_4);
    lVar28 = (long)param_4 >> 5;
    bVar38 = ((long)param_4 >> 4 & 1U) != 0;
    plVar33 = extraout_XMM1_Qa;
    uVar36 = param_4;
  }
  else {
    puVar29[-1] = 0x1008e5;
    param_4 = uVar35;
    iVar26 = bn_sqr8x_internal();
    puVar29 = (ulong *)(param_1 + param_4);
    lVar28 = (long)param_4 >> 5;
    bVar38 = ((long)param_4 >> 4 & 1U) != 0;
    plVar33 = extraout_XMM1_Qa_00;
    uVar36 = param_4;
  }
  do {
    uVar35 = *puVar29;
    puVar1 = puVar29 + 1;
    puVar2 = puVar29 + 2;
    puVar3 = puVar29 + 3;
    puVar29 = puVar29 + 4;
    uVar37 = (ulong)bVar38;
    uVar6 = uVar35 - *puVar31;
    uVar35 = (ulong)(uVar35 < *puVar31 || uVar6 < uVar37);
    uVar7 = *puVar1 - puVar31[1];
    uVar4 = (ulong)(*puVar1 < puVar31[1] || uVar7 < uVar35);
    uVar8 = *puVar2 - puVar31[2];
    uVar5 = (ulong)(*puVar2 < puVar31[2] || uVar8 < uVar4);
    uVar9 = *puVar3 - puVar31[3];
    bVar38 = *puVar3 < puVar31[3] || uVar9 < uVar5;
    puVar31 = puVar31 + 4;
    *plVar33 = uVar6 - uVar37;
    plVar33[1] = uVar7 - uVar35;
    plVar33[2] = uVar8 - uVar4;
    plVar33[3] = uVar9 - uVar5;
    plVar33 = plVar33 + 4;
    lVar28 = lVar28 + 1;
  } while (lVar28 != 0);
  uVar27 = iVar26 - (uint)bVar38;
  pauVar30 = (undefined1 (*) [16])((long)puVar29 + uVar36);
  puVar34 = (uint *)((long)plVar33 + uVar36);
  do {
    uVar10 = *(uint *)*pauVar30;
    uVar11 = *(uint *)(*pauVar30 + 4);
    uVar12 = *(uint *)(*pauVar30 + 8);
    uVar13 = *(uint *)(*pauVar30 + 0xc);
    uVar14 = *(uint *)pauVar30[1];
    uVar15 = *(uint *)(pauVar30[1] + 4);
    uVar16 = *(uint *)(pauVar30[1] + 8);
    uVar17 = *(uint *)(pauVar30[1] + 0xc);
    uVar22 = *puVar34;
    uVar23 = puVar34[1];
    uVar24 = puVar34[2];
    uVar25 = puVar34[3];
    uVar18 = puVar34[4];
    uVar19 = puVar34[5];
    uVar20 = puVar34[6];
    uVar21 = puVar34[7];
    *pauVar30 = (undefined1  [16])0x0;
    pauVar30[1] = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(*pauVar30 + param_4) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(pauVar30[1] + param_4) = (undefined1  [16])0x0;
    *puVar34 = uVar22 & -(uint)(uVar27 == 0) | uVar10 & uVar27;
    puVar34[1] = uVar23 & -(uint)(uVar27 == 0) | uVar11 & uVar27;
    puVar34[2] = uVar24 & -(uint)(uVar27 == 0) | uVar12 & uVar27;
    puVar34[3] = uVar25 & -(uint)(uVar27 == 0) | uVar13 & uVar27;
    puVar34[4] = uVar18 & -(uint)(uVar27 == 0) | uVar14 & uVar27;
    puVar34[5] = uVar19 & -(uint)(uVar27 == 0) | uVar15 & uVar27;
    puVar34[6] = uVar20 & -(uint)(uVar27 == 0) | uVar16 & uVar27;
    puVar34[7] = uVar21 & -(uint)(uVar27 == 0) | uVar17 & uVar27;
    uVar36 = uVar36 + 0x20;
    pauVar30 = pauVar30 + 2;
    puVar34 = puVar34 + 8;
  } while (uVar36 != 0);
  return 1;
}



undefined8
bn_mulx4x_mont(ulong param_1,ulong *param_2,ulong *param_3,ulong *param_4,ulong *param_5,int param_6
              )

{
  ulong *puVar1;
  undefined1 (*pauVar2) [16];
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  unkint9 Var6;
  unkint9 Var7;
  unkint9 Var8;
  unkint9 Var9;
  unkint9 Var10;
  unkint9 Var11;
  unkint9 Var12;
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
  uint uVar77;
  uint uVar78;
  uint uVar79;
  uint uVar80;
  uint uVar81;
  uint uVar82;
  uint uVar83;
  uint uVar84;
  uint uVar85;
  uint uVar86;
  uint uVar87;
  uint uVar88;
  uint uVar89;
  uint uVar90;
  uint uVar91;
  ulong uVar92;
  ulong *puVar93;
  undefined1 (*pauVar94) [16];
  ulong *puVar95;
  ulong uVar96;
  ulong *puVar97;
  long *plVar98;
  uint *puVar99;
  ulong uVar100;
  ulong uVar101;
  ulong uVar102;
  ulong uVar103;
  ulong uVar104;
  ulong uVar105;
  ulong uVar106;
  bool bVar107;
  bool bVar108;
  uint uVar109;
  undefined1 auStack_78 [72];
  
  uVar96 = (ulong)(uint)(param_6 << 3);
  uVar102 = *param_5;
  puVar95 = (ulong *)((ulong)(auStack_78 + -uVar96) & 0xffffffffffffff80);
  for (puVar3 = (ulong *)((long)puVar95 +
                         ((ulong)(&stack0xffffffffffffffd0 + -(long)puVar95) & 0xfffffffffffff000));
      puVar95 < puVar3; puVar3 = puVar3 + -0x200) {
  }
  *puVar3 = uVar96;
  puVar3[2] = (long)param_3 + uVar96;
  puVar3[3] = uVar102;
  puVar3[4] = param_1;
  puVar3[5] = (ulong)register0x00000020;
  puVar3[6] = (ulong)((uint)(param_6 << 3) >> 5) - 1;
  uVar102 = *param_3;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar102;
  auVar45._8_8_ = 0;
  auVar45._0_8_ = *param_2;
  uVar100 = SUB168(auVar13 * auVar45,0);
  uVar92 = SUB168(auVar13 * auVar45,8);
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar102;
  auVar46._8_8_ = 0;
  auVar46._0_8_ = param_2[1];
  uVar103 = SUB168(auVar14 * auVar46,0);
  uVar105 = SUB168(auVar14 * auVar46,8);
  puVar3[1] = (ulong)(param_3 + 1);
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar102;
  auVar47._8_8_ = 0;
  auVar47._0_8_ = param_2[2];
  uVar104 = SUB168(auVar15 * auVar47,0);
  uVar96 = (ulong)CARRY8(uVar103,uVar92);
  uVar106 = uVar104 + uVar105;
  uVar101 = uVar100 * puVar3[3];
  auVar16._8_8_ = 0;
  auVar16._0_8_ = uVar102;
  auVar48._8_8_ = 0;
  auVar48._0_8_ = param_2[3];
  param_2 = param_2 + 4;
  Var6 = (unkuint9)
         (SUB168(auVar15 * auVar47,8) + (ulong)(CARRY8(uVar104,uVar105) || CARRY8(uVar106,uVar96)))
         + (unkuint9)SUB168(auVar16 * auVar48,0) + (unkuint9)0;
  Var7 = (unkuint9)SUB168(auVar16 * auVar48,8) + (unkuint9)0 +
         (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
  uVar104 = (ulong)Var7;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar101;
  auVar49._8_8_ = 0;
  auVar49._0_8_ = *param_4;
  Var11 = (unkuint9)SUB168(auVar17 * auVar49,8) + (unkuint9)(uVar103 + uVar92) + (unkuint9)0;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = uVar101;
  auVar50._8_8_ = 0;
  auVar50._0_8_ = param_4[1];
  Var7 = (unkuint9)(ulong)Var11 + (unkuint9)SUB168(auVar18 * auVar50,0) +
         (unkuint9)
         ((char)((unkuint9)uVar100 + (unkuint9)SUB168(auVar17 * auVar49,0) +
                 (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0') >> 0x40) != '\0');
  Var11 = (unkuint9)SUB168(auVar18 * auVar50,8) + (unkuint9)(uVar106 + uVar96) +
          (unkuint9)((char)((unkuint9)Var11 >> 0x40) != '\0');
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar101;
  auVar51._8_8_ = 0;
  auVar51._0_8_ = param_4[2];
  uVar96 = puVar3[6];
  puVar3[8] = (ulong)Var7;
  Var7 = (unkuint9)(ulong)Var11 + (unkuint9)SUB168(auVar19 * auVar51,0) +
         (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
  Var11 = (unkuint9)SUB168(auVar19 * auVar51,8) + (unkuint9)(ulong)Var6 +
          (unkuint9)((char)((unkuint9)Var11 >> 0x40) != '\0');
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar101;
  auVar52._8_8_ = 0;
  auVar52._0_8_ = param_4[3];
  puVar3[9] = (ulong)Var7;
  Var6 = (unkuint9)(ulong)Var11 + (unkuint9)SUB168(auVar20 * auVar52,0) +
         (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
  bVar107 = (char)((unkuint9)Var6 >> 0x40) != '\0';
  Var7 = (unkuint9)SUB168(auVar20 * auVar52,8) + (unkuint9)0 +
         (unkuint9)((char)((unkuint9)Var11 >> 0x40) != '\0');
  bVar108 = (char)((unkuint9)Var7 >> 0x40) != '\0';
  uVar106 = (ulong)Var7;
  param_4 = param_4 + 4;
  puVar3[10] = (ulong)Var6;
  puVar95 = puVar3 + 0xc;
  do {
    puVar93 = puVar95;
    Var6 = (unkuint9)uVar106 + (unkuint9)0 + (unkuint9)bVar107;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar102;
    auVar53._8_8_ = 0;
    auVar53._0_8_ = *param_2;
    Var7 = (unkuint9)SUB168(auVar21 * auVar53,0) + (unkuint9)uVar104 +
           (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    auVar22._8_8_ = 0;
    auVar22._0_8_ = uVar102;
    auVar54._8_8_ = 0;
    auVar54._0_8_ = param_2[1];
    Var11 = (unkuint9)SUB168(auVar22 * auVar54,0) + (unkuint9)SUB168(auVar21 * auVar53,8) +
            (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
    auVar23._8_8_ = 0;
    auVar23._0_8_ = uVar102;
    auVar55._8_8_ = 0;
    auVar55._0_8_ = param_2[2];
    Var8 = (unkuint9)SUB168(auVar23 * auVar55,0) + (unkuint9)SUB168(auVar22 * auVar54,8) +
           (unkuint9)((char)((unkuint9)Var11 >> 0x40) != '\0');
    auVar24._8_8_ = 0;
    auVar24._0_8_ = uVar102;
    auVar56._8_8_ = 0;
    auVar56._0_8_ = param_2[3];
    Var9 = (unkuint9)SUB168(auVar24 * auVar56,0) + (unkuint9)SUB168(auVar23 * auVar55,8) +
           (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
    Var10 = (unkuint9)SUB168(auVar24 * auVar56,8) + (unkuint9)0 +
            (unkuint9)((char)((unkuint9)Var9 >> 0x40) != '\0');
    uVar104 = (ulong)Var10;
    param_2 = param_2 + 4;
    puVar95 = puVar93 + 4;
    Var7 = (unkuint9)(ulong)Var7 + (unkuint9)(ulong)Var6 + (unkuint9)bVar108;
    auVar25._8_8_ = 0;
    auVar25._0_8_ = uVar101;
    auVar57._8_8_ = 0;
    auVar57._0_8_ = *param_4;
    Var6 = (unkuint9)(ulong)Var7 + (unkuint9)SUB168(auVar25 * auVar57,0) +
           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    Var11 = (unkuint9)(ulong)Var11 + (unkuint9)SUB168(auVar25 * auVar57,8) +
            (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
    auVar26._8_8_ = 0;
    auVar26._0_8_ = uVar101;
    auVar58._8_8_ = 0;
    auVar58._0_8_ = param_4[1];
    Var7 = (unkuint9)(ulong)Var11 + (unkuint9)SUB168(auVar26 * auVar58,0) +
           (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    Var11 = (unkuint9)(ulong)Var8 + (unkuint9)SUB168(auVar26 * auVar58,8) +
            (unkuint9)((char)((unkuint9)Var11 >> 0x40) != '\0');
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar101;
    auVar59._8_8_ = 0;
    auVar59._0_8_ = param_4[2];
    puVar93[-1] = (ulong)Var6;
    Var6 = (unkuint9)(ulong)Var11 + (unkuint9)SUB168(auVar27 * auVar59,0) +
           (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
    *puVar93 = (ulong)Var7;
    Var7 = (unkuint9)(ulong)Var9 + (unkuint9)SUB168(auVar27 * auVar59,8) +
           (unkuint9)((char)((unkuint9)Var11 >> 0x40) != '\0');
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar101;
    auVar60._8_8_ = 0;
    auVar60._0_8_ = param_4[3];
    puVar93[1] = (ulong)Var6;
    Var6 = (unkuint9)(ulong)Var7 + (unkuint9)SUB168(auVar28 * auVar60,0) +
           (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    bVar107 = (char)((unkuint9)Var6 >> 0x40) != '\0';
    uVar106 = SUB168(auVar28 * auVar60,8) + (ulong)((char)((unkuint9)Var7 >> 0x40) != '\0');
    param_4 = param_4 + 4;
    puVar93[2] = (ulong)Var6;
    bVar108 = SBORROW8(uVar96,1);
    uVar96 = uVar96 - 1;
  } while (uVar96 != 0);
  uVar102 = *puVar3;
  puVar97 = (ulong *)puVar3[1];
  uVar96 = (ulong)CARRY8(uVar104,uVar106 + bVar107);
  puVar93[3] = uVar104 + uVar106 + bVar107;
  do {
    uVar106 = *puVar97;
    param_2 = (ulong *)((long)param_2 - uVar102);
    *puVar95 = -uVar96;
    param_4 = (ulong *)((long)param_4 - uVar102);
    auVar29._8_8_ = 0;
    auVar29._0_8_ = uVar106;
    auVar61._8_8_ = 0;
    auVar61._0_8_ = *param_2;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar106;
    auVar62._8_8_ = 0;
    auVar62._0_8_ = param_2[1];
    Var7 = (unkuint9)SUB168(auVar29 * auVar61,0) + (unkuint9)puVar3[8] + (unkuint9)0;
    uVar102 = (ulong)Var7;
    Var6 = (unkuint9)SUB168(auVar29 * auVar61,8) + (unkuint9)SUB168(auVar30 * auVar62,0) +
           (unkuint9)0;
    auVar31._8_8_ = 0;
    auVar31._0_8_ = uVar106;
    auVar63._8_8_ = 0;
    auVar63._0_8_ = param_2[2];
    Var7 = (unkuint9)(ulong)Var6 + (unkuint9)puVar3[9] +
           (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
    Var6 = (unkuint9)SUB168(auVar30 * auVar62,8) + (unkuint9)SUB168(auVar31 * auVar63,0) +
           (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    Var11 = (unkuint9)(ulong)Var6 + (unkuint9)puVar3[10] +
            (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
    puVar3[1] = (ulong)(puVar97 + 1);
    uVar96 = uVar102 * puVar3[3];
    auVar32._8_8_ = 0;
    auVar32._0_8_ = uVar106;
    auVar64._8_8_ = 0;
    auVar64._0_8_ = param_2[3];
    Var6 = (unkuint9)
           (ulong)((unkuint9)
                   (ulong)((unkuint9)SUB168(auVar31 * auVar63,8) + (unkuint9)0 +
                          (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0')) + (unkuint9)0 +
                  (unkuint9)((char)((unkuint9)Var11 >> 0x40) != '\0')) +
           (unkuint9)SUB168(auVar32 * auVar64,0) + (unkuint9)0;
    Var8 = (unkuint9)(ulong)Var6 + (unkuint9)puVar3[0xb] + (unkuint9)0;
    Var6 = (unkuint9)SUB168(auVar32 * auVar64,8) + (unkuint9)0 +
           (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    param_2 = param_2 + 4;
    Var9 = (unkuint9)(ulong)Var6 + (unkuint9)0 + (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
    uVar92 = (ulong)Var9;
    auVar33._8_8_ = 0;
    auVar33._0_8_ = uVar96;
    auVar65._8_8_ = 0;
    auVar65._0_8_ = *param_4;
    Var7 = (unkuint9)SUB168(auVar33 * auVar65,8) + (unkuint9)(ulong)Var7 +
           (unkuint9)((char)((unkuint9)Var9 >> 0x40) != '\0');
    auVar34._8_8_ = 0;
    auVar34._0_8_ = uVar96;
    auVar66._8_8_ = 0;
    auVar66._0_8_ = param_4[1];
    Var6 = (unkuint9)(ulong)Var7 + (unkuint9)SUB168(auVar34 * auVar66,0) +
           (unkuint9)
           ((char)((unkuint9)uVar102 + (unkuint9)SUB168(auVar33 * auVar65,0) +
                   (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0') >> 0x40) != '\0');
    Var7 = (unkuint9)SUB168(auVar34 * auVar66,8) + (unkuint9)(ulong)Var11 +
           (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
    auVar35._8_8_ = 0;
    auVar35._0_8_ = uVar96;
    auVar67._8_8_ = 0;
    auVar67._0_8_ = param_4[2];
    puVar3[8] = (ulong)Var6;
    Var6 = (unkuint9)(ulong)Var7 + (unkuint9)SUB168(auVar35 * auVar67,0) +
           (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    Var7 = (unkuint9)SUB168(auVar35 * auVar67,8) + (unkuint9)(ulong)Var8 +
           (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
    auVar36._8_8_ = 0;
    auVar36._0_8_ = uVar96;
    auVar68._8_8_ = 0;
    auVar68._0_8_ = param_4[3];
    puVar3[9] = (ulong)Var6;
    param_4 = param_4 + 4;
    Var6 = (unkuint9)(ulong)Var7 + (unkuint9)SUB168(auVar36 * auVar68,0) +
           (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    bVar107 = (char)((unkuint9)Var6 >> 0x40) != '\0';
    Var7 = (unkuint9)SUB168(auVar36 * auVar68,8) + (unkuint9)0 +
           (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
    bVar108 = (char)((unkuint9)Var7 >> 0x40) != '\0';
    uVar100 = (ulong)Var7;
    uVar102 = puVar3[6];
    puVar3[10] = (ulong)Var6;
    puVar95 = puVar3 + 0xc;
    do {
      puVar93 = puVar95;
      auVar37._8_8_ = 0;
      auVar37._0_8_ = uVar106;
      auVar69._8_8_ = 0;
      auVar69._0_8_ = *param_2;
      Var6 = (unkuint9)uVar100 + (unkuint9)0 + (unkuint9)bVar107;
      Var11 = (unkuint9)SUB168(auVar37 * auVar69,0) + (unkuint9)uVar92 + (unkuint9)bVar108;
      auVar38._8_8_ = 0;
      auVar38._0_8_ = uVar106;
      auVar70._8_8_ = 0;
      auVar70._0_8_ = param_2[1];
      Var7 = (unkuint9)(ulong)Var11 + (unkuint9)*puVar93 +
             (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
      Var8 = (unkuint9)SUB168(auVar38 * auVar70,0) + (unkuint9)SUB168(auVar37 * auVar69,8) +
             (unkuint9)((char)((unkuint9)Var11 >> 0x40) != '\0');
      auVar39._8_8_ = 0;
      auVar39._0_8_ = uVar106;
      auVar71._8_8_ = 0;
      auVar71._0_8_ = param_2[2];
      Var11 = (unkuint9)(ulong)Var8 + (unkuint9)puVar93[1] +
              (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
      Var9 = (unkuint9)SUB168(auVar39 * auVar71,0) + (unkuint9)SUB168(auVar38 * auVar70,8) +
             (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
      auVar40._8_8_ = 0;
      auVar40._0_8_ = uVar106;
      auVar72._8_8_ = 0;
      auVar72._0_8_ = param_2[3];
      Var8 = (unkuint9)(ulong)Var9 + (unkuint9)puVar93[2] +
             (unkuint9)((char)((unkuint9)Var11 >> 0x40) != '\0');
      Var10 = (unkuint9)SUB168(auVar40 * auVar72,0) + (unkuint9)SUB168(auVar39 * auVar71,8) +
              (unkuint9)((char)((unkuint9)Var9 >> 0x40) != '\0');
      Var9 = (unkuint9)(ulong)Var10 + (unkuint9)puVar93[3] +
             (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
      Var12 = (unkuint9)SUB168(auVar40 * auVar72,8) + (unkuint9)0 +
              (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
      param_2 = param_2 + 4;
      puVar95 = puVar93 + 4;
      Var10 = (unkuint9)(ulong)Var12 + (unkuint9)0 +
              (unkuint9)((char)((unkuint9)Var9 >> 0x40) != '\0');
      uVar92 = (ulong)Var10;
      Var7 = (unkuint9)(ulong)Var7 + (unkuint9)(ulong)Var6 +
             (unkuint9)((char)((unkuint9)Var12 >> 0x40) != '\0');
      auVar41._8_8_ = 0;
      auVar41._0_8_ = uVar96;
      auVar73._8_8_ = 0;
      auVar73._0_8_ = *param_4;
      Var6 = (unkuint9)(ulong)Var7 + (unkuint9)SUB168(auVar41 * auVar73,0) +
             (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
      Var11 = (unkuint9)(ulong)Var11 + (unkuint9)SUB168(auVar41 * auVar73,8) +
              (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
      auVar42._8_8_ = 0;
      auVar42._0_8_ = uVar96;
      auVar74._8_8_ = 0;
      auVar74._0_8_ = param_4[1];
      Var7 = (unkuint9)(ulong)Var11 + (unkuint9)SUB168(auVar42 * auVar74,0) +
             (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
      Var11 = (unkuint9)(ulong)Var8 + (unkuint9)SUB168(auVar42 * auVar74,8) +
              (unkuint9)((char)((unkuint9)Var11 >> 0x40) != '\0');
      auVar43._8_8_ = 0;
      auVar43._0_8_ = uVar96;
      auVar75._8_8_ = 0;
      auVar75._0_8_ = param_4[2];
      puVar93[-1] = (ulong)Var6;
      Var6 = (unkuint9)(ulong)Var11 + (unkuint9)SUB168(auVar43 * auVar75,0) +
             (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
      Var11 = (unkuint9)(ulong)Var9 + (unkuint9)SUB168(auVar43 * auVar75,8) +
              (unkuint9)((char)((unkuint9)Var11 >> 0x40) != '\0');
      auVar44._8_8_ = 0;
      auVar44._0_8_ = uVar96;
      auVar76._8_8_ = 0;
      auVar76._0_8_ = param_4[3];
      *puVar93 = (ulong)Var7;
      puVar93[1] = (ulong)Var6;
      Var6 = (unkuint9)(ulong)Var11 + (unkuint9)SUB168(auVar44 * auVar76,0) +
             (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
      bVar107 = (char)((unkuint9)Var6 >> 0x40) != '\0';
      uVar100 = SUB168(auVar44 * auVar76,8) + (ulong)((char)((unkuint9)Var11 >> 0x40) != '\0');
      param_4 = param_4 + 4;
      puVar93[2] = (ulong)Var6;
      bVar108 = SBORROW8(uVar102,1);
      uVar102 = uVar102 - 1;
    } while (uVar102 != 0);
    uVar102 = *puVar3;
    puVar97 = (ulong *)puVar3[1];
    uVar106 = uVar92 + uVar100 + bVar107;
    uVar96 = (ulong)(CARRY8(uVar92,uVar100 + bVar107) || CARRY8(uVar106,(ulong)(*puVar95 != 0)));
    puVar93[3] = uVar106 + (*puVar95 != 0);
  } while (puVar97 != (ulong *)puVar3[2]);
  puVar95 = puVar3 + 8;
  param_4 = (ulong *)((long)param_4 - uVar102);
  uVar106 = uVar102 >> 5;
  bVar107 = (uVar102 >> 4 & 1) != 0;
  plVar98 = (long *)puVar3[4];
  do {
    uVar92 = *puVar95;
    puVar93 = puVar95 + 1;
    puVar97 = puVar95 + 2;
    puVar1 = puVar95 + 3;
    puVar95 = puVar95 + 4;
    uVar100 = (ulong)bVar107;
    uVar104 = uVar92 - *param_4;
    uVar92 = (ulong)(uVar92 < *param_4 || uVar104 < uVar100);
    uVar105 = *puVar93 - param_4[1];
    uVar101 = (ulong)(*puVar93 < param_4[1] || uVar105 < uVar92);
    uVar4 = *puVar97 - param_4[2];
    uVar103 = (ulong)(*puVar97 < param_4[2] || uVar4 < uVar101);
    uVar5 = *puVar1 - param_4[3];
    bVar107 = *puVar1 < param_4[3] || uVar5 < uVar103;
    param_4 = param_4 + 4;
    *plVar98 = uVar104 - uVar100;
    plVar98[1] = uVar105 - uVar92;
    plVar98[2] = uVar4 - uVar101;
    plVar98[3] = uVar5 - uVar103;
    plVar98 = plVar98 + 4;
    uVar106 = uVar106 - 1;
  } while (uVar106 != 0);
  uVar109 = (uint)(uVar96 - bVar107);
  pauVar94 = (undefined1 (*) [16])(puVar3 + 8);
  puVar99 = (uint *)((long)plVar98 - uVar102);
  do {
    uVar77 = *(uint *)(*pauVar94 + 4);
    uVar78 = *(uint *)(*pauVar94 + 8);
    uVar79 = *(uint *)(*pauVar94 + 0xc);
    uVar80 = *(uint *)pauVar94[1];
    uVar81 = *(uint *)(pauVar94[1] + 4);
    uVar82 = *(uint *)(pauVar94[1] + 8);
    uVar83 = *(uint *)(pauVar94[1] + 0xc);
    pauVar2 = pauVar94 + 2;
    uVar88 = *puVar99;
    uVar89 = puVar99[1];
    uVar90 = puVar99[2];
    uVar91 = puVar99[3];
    uVar84 = puVar99[4];
    uVar85 = puVar99[5];
    uVar86 = puVar99[6];
    uVar87 = puVar99[7];
    *pauVar94 = (undefined1  [16])0x0;
    pauVar94[1] = (undefined1  [16])0x0;
    *puVar99 = uVar88 & -(uint)(uVar109 == 0) | *(uint *)*pauVar94 & uVar109;
    puVar99[1] = uVar89 & -(uint)(uVar109 == 0) | uVar77 & uVar109;
    puVar99[2] = uVar90 & -(uint)(uVar109 == 0) | uVar78 & uVar109;
    puVar99[3] = uVar91 & -(uint)(uVar109 == 0) | uVar79 & uVar109;
    puVar99[4] = uVar84 & -(uint)(uVar109 == 0) | uVar80 & uVar109;
    puVar99[5] = uVar85 & -(uint)(uVar109 == 0) | uVar81 & uVar109;
    puVar99[6] = uVar86 & -(uint)(uVar109 == 0) | uVar82 & uVar109;
    puVar99[7] = uVar87 & -(uint)(uVar109 == 0) | uVar83 & uVar109;
    uVar102 = uVar102 - 0x20;
    pauVar94 = pauVar2;
    puVar99 = puVar99 + 8;
  } while (uVar102 != 0);
  *(undefined8 *)*pauVar2 = 0;
  return 1;
}


