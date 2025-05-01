
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sha256_multi_block(undefined1 (*param_1) [32],undefined8 *param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  undefined1 (*pauVar6) [32];
  uint *puVar7;
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  undefined1 auVar13 [32];
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
  undefined1 auVar25 [32];
  undefined1 auVar26 [16];
  undefined1 auVar27 [32];
  undefined1 auVar28 [16];
  undefined1 auVar29 [32];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined4 uVar33;
  int iVar34;
  int *piVar35;
  undefined1 (*pauVar36) [32];
  uint *puVar37;
  undefined1 (*pauVar38) [16];
  uint *puVar39;
  undefined4 *puVar40;
  undefined1 (*pauVar41) [16];
  uint *puVar42;
  uint *puVar43;
  undefined4 *puVar44;
  undefined4 *puVar45;
  undefined4 *puVar46;
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
  uint uVar61;
  uint uVar62;
  uint uVar92;
  uint uVar93;
  uint uVar94;
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
  undefined1 auVar83 [32];
  undefined1 auVar84 [32];
  undefined1 auVar85 [32];
  undefined1 auVar86 [32];
  undefined1 auVar87 [32];
  undefined1 auVar88 [32];
  undefined1 auVar89 [32];
  undefined1 auVar90 [32];
  undefined1 auVar91 [32];
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
  undefined1 auVar114 [32];
  undefined1 auVar115 [32];
  undefined1 auVar116 [32];
  undefined1 auVar117 [16];
  undefined1 in_ZMM3 [64];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 in_ZMM4 [64];
  int iVar244;
  undefined1 auVar123 [16];
  int iVar122;
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [32];
  undefined1 auVar129 [32];
  undefined1 auVar130 [32];
  undefined1 auVar131 [32];
  undefined1 auVar132 [32];
  undefined1 auVar133 [32];
  undefined1 auVar134 [32];
  undefined1 auVar135 [32];
  undefined1 auVar136 [32];
  undefined1 auVar137 [32];
  undefined1 auVar138 [32];
  undefined1 auVar139 [32];
  undefined1 auVar140 [32];
  undefined1 auVar141 [32];
  undefined1 auVar142 [32];
  undefined1 auVar143 [32];
  int iVar241;
  int iVar242;
  undefined1 in_ZMM5 [64];
  undefined1 auVar145 [64];
  undefined1 auVar147 [64];
  int iVar243;
  undefined1 auVar151 [64];
  undefined1 auVar153 [64];
  undefined1 auVar157 [64];
  undefined1 auVar159 [64];
  undefined1 auVar163 [64];
  undefined1 auVar165 [64];
  undefined1 auVar169 [64];
  undefined1 auVar171 [64];
  undefined1 auVar175 [64];
  undefined1 auVar177 [64];
  undefined1 auVar181 [64];
  undefined1 auVar183 [64];
  undefined1 auVar187 [64];
  undefined1 auVar189 [64];
  undefined1 auVar193 [64];
  undefined1 auVar195 [64];
  undefined1 auVar199 [64];
  undefined1 auVar201 [64];
  undefined1 auVar205 [64];
  undefined1 auVar207 [64];
  undefined1 auVar211 [64];
  undefined1 auVar213 [64];
  undefined1 auVar217 [64];
  undefined1 auVar219 [64];
  undefined1 auVar223 [64];
  undefined1 auVar225 [64];
  undefined1 auVar229 [64];
  undefined1 auVar231 [64];
  undefined1 auVar235 [64];
  undefined1 auVar237 [64];
  undefined1 auVar240 [64];
  undefined1 auVar245 [16];
  undefined1 auVar246 [16];
  undefined1 auVar247 [16];
  undefined1 auVar248 [16];
  undefined1 auVar249 [16];
  undefined1 in_ZMM6 [64];
  uint uVar250;
  uint uVar256;
  uint uVar257;
  uint uVar258;
  undefined1 auVar251 [16];
  undefined1 auVar252 [16];
  undefined1 auVar253 [16];
  undefined1 auVar254 [16];
  undefined1 auVar255 [32];
  undefined1 auVar259 [16];
  undefined1 auVar260 [16];
  undefined1 auVar261 [16];
  undefined1 auVar263 [16];
  undefined1 auVar264 [16];
  undefined1 auVar265 [16];
  undefined1 auVar266 [16];
  undefined1 auVar267 [16];
  undefined1 auVar268 [16];
  undefined1 auVar269 [16];
  undefined1 auVar270 [16];
  undefined1 auVar271 [16];
  undefined1 auVar272 [16];
  undefined1 in_ZMM8 [64];
  undefined1 auVar262 [16];
  undefined1 auVar273 [64];
  undefined1 auVar274 [16];
  undefined1 auVar275 [16];
  undefined1 auVar276 [16];
  undefined1 auVar277 [16];
  undefined1 auVar278 [16];
  undefined1 auVar279 [16];
  undefined1 auVar280 [16];
  undefined1 auVar281 [16];
  undefined1 auVar282 [16];
  undefined1 auVar283 [16];
  undefined1 auVar284 [16];
  undefined1 auVar285 [16];
  undefined1 auVar286 [16];
  undefined1 auVar287 [16];
  undefined1 in_ZMM9 [64];
  undefined1 auVar289 [16];
  undefined1 auVar290 [16];
  undefined1 auVar291 [16];
  undefined1 auVar292 [16];
  undefined1 auVar293 [16];
  undefined1 auVar294 [16];
  undefined1 auVar295 [16];
  undefined1 auVar296 [16];
  undefined1 auVar297 [16];
  undefined1 auVar298 [16];
  undefined1 auVar299 [16];
  undefined1 auVar300 [16];
  undefined1 in_ZMM10 [64];
  undefined1 auVar301 [64];
  undefined1 auVar302 [16];
  undefined1 auVar303 [16];
  undefined1 auVar304 [16];
  undefined1 auVar305 [16];
  undefined1 auVar306 [16];
  undefined1 auVar307 [16];
  undefined1 auVar308 [16];
  undefined1 auVar309 [16];
  undefined1 auVar310 [16];
  undefined1 auVar311 [16];
  undefined1 auVar312 [16];
  undefined1 auVar313 [16];
  undefined1 in_ZMM11 [64];
  undefined1 auVar315 [16];
  undefined1 auVar316 [16];
  undefined1 auVar317 [16];
  undefined1 auVar318 [16];
  undefined1 auVar319 [16];
  undefined1 auVar320 [16];
  undefined1 auVar321 [16];
  undefined1 auVar322 [16];
  undefined1 in_ZMM12 [64];
  undefined1 auVar323 [64];
  undefined1 auVar325 [64];
  undefined1 auVar327 [16];
  undefined1 auVar328 [16];
  undefined1 auVar329 [16];
  undefined1 auVar330 [16];
  undefined1 auVar331 [16];
  undefined1 auVar332 [16];
  undefined1 auVar333 [16];
  undefined1 auVar334 [16];
  undefined1 auVar335 [16];
  undefined1 auVar336 [16];
  undefined1 auVar337 [16];
  undefined1 auVar338 [16];
  undefined1 in_ZMM13 [64];
  undefined1 auVar341 [64];
  undefined1 auVar343 [16];
  undefined1 auVar344 [16];
  undefined1 auVar345 [16];
  undefined1 auVar346 [16];
  undefined1 auVar347 [16];
  undefined1 auVar348 [16];
  undefined1 auVar349 [16];
  undefined1 auVar350 [16];
  undefined1 auVar351 [16];
  undefined1 in_ZMM14 [64];
  undefined1 auVar353 [16];
  undefined1 auVar354 [16];
  undefined1 auVar355 [16];
  undefined1 auVar356 [16];
  undefined1 auVar357 [16];
  undefined1 auVar358 [16];
  undefined1 auVar359 [16];
  undefined1 auVar360 [16];
  undefined1 auVar361 [16];
  undefined1 auVar362 [16];
  undefined1 auVar363 [32];
  undefined1 in_ZMM15 [64];
  undefined1 auStack_2e0 [32];
  undefined1 auStack_2c0 [32];
  undefined1 auStack_2a0 [32];
  undefined1 auStack_280 [32];
  undefined1 auStack_260 [32];
  undefined1 auStack_240 [32];
  undefined1 auStack_220 [32];
  undefined1 local_200 [20];
  uint uStack_1ec;
  uint uStack_1e8;
  uint uStack_1e4;
  undefined1 local_1e0 [20];
  uint uStack_1cc;
  uint uStack_1c8;
  uint uStack_1c4;
  undefined1 local_1c0 [20];
  uint uStack_1ac;
  uint uStack_1a8;
  uint uStack_1a4;
  undefined1 local_1a0 [20];
  uint uStack_18c;
  uint uStack_188;
  uint uStack_184;
  undefined1 local_180 [20];
  uint uStack_16c;
  uint uStack_168;
  uint uStack_164;
  undefined1 local_160 [20];
  uint uStack_14c;
  uint uStack_148;
  uint uStack_144;
  undefined1 local_140 [20];
  uint uStack_12c;
  uint uStack_128;
  uint uStack_124;
  undefined1 local_120 [20];
  uint uStack_10c;
  uint uStack_108;
  uint uStack_104;
  undefined1 local_100 [16];
  uint uStack_e8;
  undefined1 local_f0 [16];
  int iStack_e4;
  undefined1 auVar144 [64];
  undefined1 auVar148 [64];
  undefined1 auVar150 [64];
  undefined1 auVar154 [64];
  undefined1 auVar156 [64];
  undefined1 auVar160 [64];
  undefined1 auVar162 [64];
  undefined1 auVar166 [64];
  undefined1 auVar168 [64];
  undefined1 auVar172 [64];
  undefined1 auVar174 [64];
  undefined1 auVar178 [64];
  undefined1 auVar180 [64];
  undefined1 auVar184 [64];
  undefined1 auVar186 [64];
  undefined1 auVar190 [64];
  undefined1 auVar192 [64];
  undefined1 auVar196 [64];
  undefined1 auVar198 [64];
  undefined1 auVar202 [64];
  undefined1 auVar204 [64];
  undefined1 auVar208 [64];
  undefined1 auVar210 [64];
  undefined1 auVar214 [64];
  undefined1 auVar216 [64];
  undefined1 auVar220 [64];
  undefined1 auVar222 [64];
  undefined1 auVar226 [64];
  undefined1 auVar228 [64];
  undefined1 auVar232 [64];
  undefined1 auVar234 [64];
  undefined1 auVar238 [64];
  undefined1 auVar149 [64];
  undefined1 auVar155 [64];
  undefined1 auVar161 [64];
  undefined1 auVar167 [64];
  undefined1 auVar173 [64];
  undefined1 auVar179 [64];
  undefined1 auVar185 [64];
  undefined1 auVar191 [64];
  undefined1 auVar197 [64];
  undefined1 auVar203 [64];
  undefined1 auVar209 [64];
  undefined1 auVar215 [64];
  undefined1 auVar221 [64];
  undefined1 auVar227 [64];
  undefined1 auVar233 [64];
  undefined1 auVar239 [64];
  undefined1 auVar146 [64];
  undefined1 auVar152 [64];
  undefined1 auVar158 [64];
  undefined1 auVar164 [64];
  undefined1 auVar170 [64];
  undefined1 auVar176 [64];
  undefined1 auVar182 [64];
  undefined1 auVar188 [64];
  undefined1 auVar194 [64];
  undefined1 auVar200 [64];
  undefined1 auVar206 [64];
  undefined1 auVar212 [64];
  undefined1 auVar218 [64];
  undefined1 auVar224 [64];
  undefined1 auVar230 [64];
  undefined1 auVar236 [64];
  undefined1 auVar288 [64];
  undefined1 auVar314 [64];
  undefined1 auVar326 [64];
  undefined1 auVar324 [64];
  undefined1 auVar342 [64];
  undefined1 auVar340 [64];
  undefined1 auVar339 [64];
  undefined1 auVar352 [64];
  undefined1 auVar364 [64];
  
  if ((_DAT_00109004 >> 0x3d & 1) != 0) {
    iVar34 = param_3 << 1;
    param_1 = param_1 + 4;
    stack0xffffffffffffff10 = &stack0x00000000;
    do {
      uStack_e8 = iVar34;
      pauVar38 = (undefined1 (*) [16])*param_2;
      iVar34 = *(int *)(param_2 + 1);
      iVar122 = iVar34;
      if (iVar34 < 1) {
        pauVar38 = (undefined1 (*) [16])local_200;
        iVar122 = 0;
      }
      iVar241 = *(int *)(param_2 + 3);
      if (iVar122 < iVar241) {
        iVar122 = iVar241;
      }
      local_100._4_4_ = iVar241;
      local_100._0_4_ = iVar34;
      pauVar41 = (undefined1 (*) [16])param_2[2];
      if (iVar241 < 1) {
        pauVar41 = (undefined1 (*) [16])local_200;
      }
      if (iVar122 == 0) {
        return;
      }
      auVar326._16_48_ = in_ZMM12._16_48_;
      auVar342._16_48_ = in_ZMM13._16_48_;
      in_ZMM3._0_16_ = _DAT_00107e10;
      local_1c0._4_4_ = (int)*(undefined8 *)*param_1;
      local_1c0._0_4_ = (int)*(undefined8 *)param_1[1];
      local_1c0._8_4_ = (int)*(undefined8 *)param_1[-3];
      local_1c0._12_4_ = (int)*(undefined8 *)param_1[-4];
      uStack_1ac = (int)*(undefined8 *)param_1[2];
      local_1c0._16_4_ = (int)*(undefined8 *)param_1[3];
      uStack_1a8 = (int)*(undefined8 *)param_1[-1];
      uStack_1a4 = (int)*(undefined8 *)param_1[-2];
      local_1a0._4_4_ = (int)((ulong)*(undefined8 *)*param_1 >> 0x20);
      local_1a0._0_4_ = (int)((ulong)*(undefined8 *)param_1[1] >> 0x20);
      local_1a0._8_4_ = (int)((ulong)*(undefined8 *)param_1[-3] >> 0x20);
      local_1a0._12_4_ = (int)((ulong)*(undefined8 *)param_1[-4] >> 0x20);
      uStack_18c = (int)((ulong)*(undefined8 *)param_1[2] >> 0x20);
      local_1a0._16_4_ = (int)((ulong)*(undefined8 *)param_1[3] >> 0x20);
      uStack_188 = (int)((ulong)*(undefined8 *)param_1[-1] >> 0x20);
      uStack_184 = (int)((ulong)*(undefined8 *)param_1[-2] >> 0x20);
      do {
        auVar8 = _local_100;
        auVar338 = in_ZMM3._0_16_;
        auVar118 = pshufb(*pauVar38,auVar338);
        auVar268 = pshufb(*pauVar41,auVar338);
        auVar123 = pshufb(pauVar38[1],auVar338);
        auVar47._0_4_ = _K256_shaext + auVar118._0_4_;
        auVar47._4_4_ = _UNK_00107e24 + auVar118._4_4_;
        auVar47._8_4_ = _UNK_00107e28 + auVar118._8_4_;
        auVar47._12_4_ = _UNK_00107e2c + auVar118._12_4_;
        auVar283 = pshufb(pauVar41[1],auVar338);
        auVar95._0_4_ = _K256_shaext + auVar268._0_4_;
        auVar95._4_4_ = _UNK_00107e24 + auVar268._4_4_;
        auVar95._8_4_ = _UNK_00107e28 + auVar268._8_4_;
        auVar95._12_4_ = _UNK_00107e2c + auVar268._12_4_;
        auVar336 = sha256rnds2_sha(register0x00001540,local_1c0._0_16_,auVar47);
        auVar79 = sha256rnds2_sha(register0x000015c0,local_1a0._0_16_,auVar95);
        auVar117._4_4_ = auVar47._12_4_;
        auVar117._0_4_ = auVar47._8_4_;
        auVar117._8_4_ = auVar47._0_4_;
        auVar117._12_4_ = auVar47._0_4_;
        auVar117 = sha256rnds2_sha(local_1c0._0_16_,auVar336,auVar117);
        auVar337._4_4_ = auVar95._12_4_;
        auVar337._0_4_ = auVar95._8_4_;
        auVar337._8_4_ = auVar95._0_4_;
        auVar337._12_4_ = auVar95._0_4_;
        auVar63._0_4_ = _DAT_00107e30 + auVar123._0_4_;
        auVar63._4_4_ = _UNK_00107e34 + auVar123._4_4_;
        auVar63._8_4_ = _UNK_00107e38 + auVar123._8_4_;
        auVar63._12_4_ = _UNK_00107e3c + auVar123._12_4_;
        auVar82 = pshufb(pauVar38[2],auVar338);
        auVar80 = sha256rnds2_sha(local_1a0._0_16_,auVar79,auVar337);
        auVar96._0_4_ = _DAT_00107e30 + auVar283._0_4_;
        auVar96._4_4_ = _UNK_00107e34 + auVar283._4_4_;
        auVar96._8_4_ = _UNK_00107e38 + auVar283._8_4_;
        auVar96._12_4_ = _UNK_00107e3c + auVar283._12_4_;
        auVar337 = sha256rnds2_sha(auVar336,auVar117,auVar63);
        auVar81 = pshufb(pauVar38[3],auVar338);
        auVar78 = pshufb(pauVar41[2],auVar338);
        auVar111 = sha256rnds2_sha(auVar79,auVar80,auVar96);
        auVar336._4_4_ = auVar63._12_4_;
        auVar336._0_4_ = auVar63._8_4_;
        auVar336._8_4_ = auVar63._0_4_;
        auVar336._12_4_ = auVar63._0_4_;
        auVar79 = pshufb(pauVar41[3],auVar338);
        auVar47 = sha256msg1_sha(auVar118,auVar123);
        auVar336 = sha256rnds2_sha(auVar117,auVar337,auVar336);
        auVar338._4_4_ = auVar96._12_4_;
        auVar338._0_4_ = auVar96._8_4_;
        auVar338._8_4_ = auVar96._0_4_;
        auVar338._12_4_ = auVar96._0_4_;
        auVar64._0_4_ = _DAT_00107e40 + auVar82._0_4_;
        auVar64._4_4_ = _UNK_00107e44 + auVar82._4_4_;
        auVar64._8_4_ = _UNK_00107e48 + auVar82._8_4_;
        auVar64._12_4_ = _UNK_00107e4c + auVar82._12_4_;
        auVar80 = sha256rnds2_sha(auVar80,auVar111,auVar338);
        auVar97._0_4_ = _DAT_00107e40 + auVar78._0_4_;
        auVar97._4_4_ = _UNK_00107e44 + auVar78._4_4_;
        auVar97._8_4_ = _UNK_00107e48 + auVar78._8_4_;
        auVar97._12_4_ = _UNK_00107e4c + auVar78._12_4_;
        auVar338 = sha256rnds2_sha(auVar337,auVar336,auVar64);
        auVar337 = sha256msg1_sha(auVar268,auVar283);
        auVar268 = sha256rnds2_sha(auVar111,auVar80,auVar97);
        auVar118._4_4_ = auVar64._12_4_;
        auVar118._0_4_ = auVar64._8_4_;
        auVar118._8_4_ = auVar64._0_4_;
        auVar118._12_4_ = auVar64._0_4_;
        auVar119._0_4_ = auVar47._0_4_ + auVar82._4_4_;
        auVar119._4_4_ = auVar47._4_4_ + auVar82._8_4_;
        auVar119._8_4_ = auVar47._8_4_ + auVar82._12_4_;
        auVar119._12_4_ = auVar47._12_4_ + auVar81._0_4_;
        auVar117 = sha256msg1_sha(auVar123,auVar82);
        auVar118 = sha256rnds2_sha(auVar336,auVar338,auVar118);
        auVar123._4_4_ = auVar97._12_4_;
        auVar123._0_4_ = auVar97._8_4_;
        auVar123._8_4_ = auVar97._0_4_;
        auVar123._12_4_ = auVar97._0_4_;
        auVar65._0_4_ = _DAT_00107e50 + auVar81._0_4_;
        auVar65._4_4_ = _UNK_00107e54 + auVar81._4_4_;
        auVar65._8_4_ = _UNK_00107e58 + auVar81._8_4_;
        auVar65._12_4_ = _UNK_00107e5c + auVar81._12_4_;
        auVar123 = sha256rnds2_sha(auVar80,auVar268,auVar123);
        auVar336 = sha256msg1_sha(auVar283,auVar78);
        auVar269._0_4_ = auVar337._0_4_ + auVar78._4_4_;
        auVar269._4_4_ = auVar337._4_4_ + auVar78._8_4_;
        auVar269._8_4_ = auVar337._8_4_ + auVar78._12_4_;
        auVar269._12_4_ = auVar337._12_4_ + auVar79._0_4_;
        auVar98._0_4_ = _DAT_00107e50 + auVar79._0_4_;
        auVar98._4_4_ = _UNK_00107e54 + auVar79._4_4_;
        auVar98._8_4_ = _UNK_00107e58 + auVar79._8_4_;
        auVar98._12_4_ = _UNK_00107e5c + auVar79._12_4_;
        auVar47 = sha256msg2_sha(auVar119,auVar81);
        auVar283 = sha256rnds2_sha(auVar338,auVar118,auVar65);
        auVar111 = sha256rnds2_sha(auVar268,auVar123,auVar98);
        auVar338 = sha256msg2_sha(auVar269,auVar79);
        auVar268._4_4_ = auVar65._12_4_;
        auVar268._0_4_ = auVar65._8_4_;
        auVar268._8_4_ = auVar65._0_4_;
        auVar268._12_4_ = auVar65._0_4_;
        auVar124._0_4_ = auVar117._0_4_ + auVar81._4_4_;
        auVar124._4_4_ = auVar117._4_4_ + auVar81._8_4_;
        auVar124._8_4_ = auVar117._8_4_ + auVar81._12_4_;
        auVar124._12_4_ = auVar117._12_4_ + auVar47._0_4_;
        auVar337 = sha256msg1_sha(auVar82,auVar81);
        auVar268 = sha256rnds2_sha(auVar118,auVar283,auVar268);
        auVar82._4_4_ = auVar98._12_4_;
        auVar82._0_4_ = auVar98._8_4_;
        auVar82._8_4_ = auVar98._0_4_;
        auVar82._12_4_ = auVar98._0_4_;
        auVar66._0_4_ = _DAT_00107e60 + auVar47._0_4_;
        auVar66._4_4_ = _UNK_00107e64 + auVar47._4_4_;
        auVar66._8_4_ = _UNK_00107e68 + auVar47._8_4_;
        auVar66._12_4_ = _UNK_00107e6c + auVar47._12_4_;
        auVar80 = sha256rnds2_sha(auVar123,auVar111,auVar82);
        auVar123 = sha256msg1_sha(auVar78,auVar79);
        auVar284._0_4_ = auVar336._0_4_ + auVar79._4_4_;
        auVar284._4_4_ = auVar336._4_4_ + auVar79._8_4_;
        auVar284._8_4_ = auVar336._8_4_ + auVar79._12_4_;
        auVar284._12_4_ = auVar336._12_4_ + auVar338._0_4_;
        auVar99._0_4_ = _DAT_00107e60 + auVar338._0_4_;
        auVar99._4_4_ = _UNK_00107e64 + auVar338._4_4_;
        auVar99._8_4_ = _UNK_00107e68 + auVar338._8_4_;
        auVar99._12_4_ = _UNK_00107e6c + auVar338._12_4_;
        auVar117 = sha256msg2_sha(auVar124,auVar47);
        auVar78 = sha256rnds2_sha(auVar283,auVar268,auVar66);
        auVar111 = sha256rnds2_sha(auVar111,auVar80,auVar99);
        auVar118 = sha256msg2_sha(auVar284,auVar338);
        auVar283._4_4_ = auVar66._12_4_;
        auVar283._0_4_ = auVar66._8_4_;
        auVar283._8_4_ = auVar66._0_4_;
        auVar283._12_4_ = auVar66._0_4_;
        auVar246._0_4_ = auVar337._0_4_ + auVar47._4_4_;
        auVar246._4_4_ = auVar337._4_4_ + auVar47._8_4_;
        auVar246._8_4_ = auVar337._8_4_ + auVar47._12_4_;
        auVar246._12_4_ = auVar337._12_4_ + auVar117._0_4_;
        auVar336 = sha256msg1_sha(auVar81,auVar47);
        auVar82 = sha256rnds2_sha(auVar268,auVar78,auVar283);
        auVar81._4_4_ = auVar99._12_4_;
        auVar81._0_4_ = auVar99._8_4_;
        auVar81._8_4_ = auVar99._0_4_;
        auVar81._12_4_ = auVar99._0_4_;
        auVar67._0_4_ = _DAT_00107e70 + auVar117._0_4_;
        auVar67._4_4_ = _UNK_00107e74 + auVar117._4_4_;
        auVar67._8_4_ = _UNK_00107e78 + auVar117._8_4_;
        auVar67._12_4_ = _UNK_00107e7c + auVar117._12_4_;
        auVar81 = sha256rnds2_sha(auVar80,auVar111,auVar81);
        auVar268 = sha256msg1_sha(auVar79,auVar338);
        auVar297._0_4_ = auVar123._0_4_ + auVar338._4_4_;
        auVar297._4_4_ = auVar123._4_4_ + auVar338._8_4_;
        auVar297._8_4_ = auVar123._8_4_ + auVar338._12_4_;
        auVar297._12_4_ = auVar123._12_4_ + auVar118._0_4_;
        auVar100._0_4_ = _DAT_00107e70 + auVar118._0_4_;
        auVar100._4_4_ = _UNK_00107e74 + auVar118._4_4_;
        auVar100._8_4_ = _UNK_00107e78 + auVar118._8_4_;
        auVar100._12_4_ = _UNK_00107e7c + auVar118._12_4_;
        auVar337 = sha256msg2_sha(auVar246,auVar117);
        auVar283 = sha256rnds2_sha(auVar78,auVar82,auVar67);
        auVar80 = sha256rnds2_sha(auVar111,auVar81,auVar100);
        auVar123 = sha256msg2_sha(auVar297,auVar118);
        auVar78._4_4_ = auVar67._12_4_;
        auVar78._0_4_ = auVar67._8_4_;
        auVar78._8_4_ = auVar67._0_4_;
        auVar78._12_4_ = auVar67._0_4_;
        auVar251._0_4_ = auVar336._0_4_ + auVar117._4_4_;
        auVar251._4_4_ = auVar336._4_4_ + auVar117._8_4_;
        auVar251._8_4_ = auVar336._8_4_ + auVar117._12_4_;
        auVar251._12_4_ = auVar336._12_4_ + auVar337._0_4_;
        auVar47 = sha256msg1_sha(auVar47,auVar117);
        auVar82 = sha256rnds2_sha(auVar82,auVar283,auVar78);
        auVar79._4_4_ = auVar100._12_4_;
        auVar79._0_4_ = auVar100._8_4_;
        auVar79._8_4_ = auVar100._0_4_;
        auVar79._12_4_ = auVar100._0_4_;
        auVar68._0_4_ = _DAT_00107e80 + auVar337._0_4_;
        auVar68._4_4_ = _UNK_00107e84 + auVar337._4_4_;
        auVar68._8_4_ = _UNK_00107e88 + auVar337._8_4_;
        auVar68._12_4_ = _UNK_00107e8c + auVar337._12_4_;
        auVar81 = sha256rnds2_sha(auVar81,auVar80,auVar79);
        auVar338 = sha256msg1_sha(auVar338,auVar118);
        auVar311._0_4_ = auVar268._0_4_ + auVar118._4_4_;
        auVar311._4_4_ = auVar268._4_4_ + auVar118._8_4_;
        auVar311._8_4_ = auVar268._8_4_ + auVar118._12_4_;
        auVar311._12_4_ = auVar268._12_4_ + auVar123._0_4_;
        auVar101._0_4_ = _DAT_00107e80 + auVar123._0_4_;
        auVar101._4_4_ = _UNK_00107e84 + auVar123._4_4_;
        auVar101._8_4_ = _UNK_00107e88 + auVar123._8_4_;
        auVar101._12_4_ = _UNK_00107e8c + auVar123._12_4_;
        auVar336 = sha256msg2_sha(auVar251,auVar337);
        auVar283 = sha256rnds2_sha(auVar283,auVar82,auVar68);
        auVar78 = sha256rnds2_sha(auVar80,auVar81,auVar101);
        auVar268 = sha256msg2_sha(auVar311,auVar123);
        auVar80._4_4_ = auVar68._12_4_;
        auVar80._0_4_ = auVar68._8_4_;
        auVar80._8_4_ = auVar68._0_4_;
        auVar80._12_4_ = auVar68._0_4_;
        auVar120._0_4_ = auVar47._0_4_ + auVar337._4_4_;
        auVar120._4_4_ = auVar47._4_4_ + auVar337._8_4_;
        auVar120._8_4_ = auVar47._8_4_ + auVar337._12_4_;
        auVar120._12_4_ = auVar47._12_4_ + auVar336._0_4_;
        auVar117 = sha256msg1_sha(auVar117,auVar337);
        auVar82 = sha256rnds2_sha(auVar82,auVar283,auVar80);
        auVar111._4_4_ = auVar101._12_4_;
        auVar111._0_4_ = auVar101._8_4_;
        auVar111._8_4_ = auVar101._0_4_;
        auVar111._12_4_ = auVar101._0_4_;
        auVar69._0_4_ = _DAT_00107e90 + auVar336._0_4_;
        auVar69._4_4_ = _UNK_00107e94 + auVar336._4_4_;
        auVar69._8_4_ = _UNK_00107e98 + auVar336._8_4_;
        auVar69._12_4_ = _UNK_00107e9c + auVar336._12_4_;
        auVar81 = sha256rnds2_sha(auVar81,auVar78,auVar111);
        auVar118 = sha256msg1_sha(auVar118,auVar123);
        auVar270._0_4_ = auVar338._0_4_ + auVar123._4_4_;
        auVar270._4_4_ = auVar338._4_4_ + auVar123._8_4_;
        auVar270._8_4_ = auVar338._8_4_ + auVar123._12_4_;
        auVar270._12_4_ = auVar338._12_4_ + auVar268._0_4_;
        auVar102._0_4_ = _DAT_00107e90 + auVar268._0_4_;
        auVar102._4_4_ = _UNK_00107e94 + auVar268._4_4_;
        auVar102._8_4_ = _UNK_00107e98 + auVar268._8_4_;
        auVar102._12_4_ = _UNK_00107e9c + auVar268._12_4_;
        auVar47 = sha256msg2_sha(auVar120,auVar336);
        auVar283 = sha256rnds2_sha(auVar283,auVar82,auVar69);
        auVar78 = sha256rnds2_sha(auVar78,auVar81,auVar102);
        auVar338 = sha256msg2_sha(auVar270,auVar268);
        auVar112._4_4_ = auVar69._12_4_;
        auVar112._0_4_ = auVar69._8_4_;
        auVar112._8_4_ = auVar69._0_4_;
        auVar112._12_4_ = auVar69._0_4_;
        auVar125._0_4_ = auVar117._0_4_ + auVar336._4_4_;
        auVar125._4_4_ = auVar117._4_4_ + auVar336._8_4_;
        auVar125._8_4_ = auVar117._8_4_ + auVar336._12_4_;
        auVar125._12_4_ = auVar117._12_4_ + auVar47._0_4_;
        auVar337 = sha256msg1_sha(auVar337,auVar336);
        auVar82 = sha256rnds2_sha(auVar82,auVar283,auVar112);
        auVar113._4_4_ = auVar102._12_4_;
        auVar113._0_4_ = auVar102._8_4_;
        auVar113._8_4_ = auVar102._0_4_;
        auVar113._12_4_ = auVar102._0_4_;
        auVar70._0_4_ = _DAT_00107ea0 + auVar47._0_4_;
        auVar70._4_4_ = _UNK_00107ea4 + auVar47._4_4_;
        auVar70._8_4_ = _UNK_00107ea8 + auVar47._8_4_;
        auVar70._12_4_ = _UNK_00107eac + auVar47._12_4_;
        auVar81 = sha256rnds2_sha(auVar81,auVar78,auVar113);
        auVar123 = sha256msg1_sha(auVar123,auVar268);
        auVar285._0_4_ = auVar118._0_4_ + auVar268._4_4_;
        auVar285._4_4_ = auVar118._4_4_ + auVar268._8_4_;
        auVar285._8_4_ = auVar118._8_4_ + auVar268._12_4_;
        auVar285._12_4_ = auVar118._12_4_ + auVar338._0_4_;
        auVar103._0_4_ = _DAT_00107ea0 + auVar338._0_4_;
        auVar103._4_4_ = _UNK_00107ea4 + auVar338._4_4_;
        auVar103._8_4_ = _UNK_00107ea8 + auVar338._8_4_;
        auVar103._12_4_ = _UNK_00107eac + auVar338._12_4_;
        auVar117 = sha256msg2_sha(auVar125,auVar47);
        auVar283 = sha256rnds2_sha(auVar283,auVar82,auVar70);
        auVar78 = sha256rnds2_sha(auVar78,auVar81,auVar103);
        auVar118 = sha256msg2_sha(auVar285,auVar338);
        auVar254._4_4_ = auVar70._12_4_;
        auVar254._0_4_ = auVar70._8_4_;
        auVar254._8_4_ = auVar70._0_4_;
        auVar254._12_4_ = auVar70._0_4_;
        auVar247._0_4_ = auVar337._0_4_ + auVar47._4_4_;
        auVar247._4_4_ = auVar337._4_4_ + auVar47._8_4_;
        auVar247._8_4_ = auVar337._8_4_ + auVar47._12_4_;
        auVar247._12_4_ = auVar337._12_4_ + auVar117._0_4_;
        auVar336 = sha256msg1_sha(auVar336,auVar47);
        auVar82 = sha256rnds2_sha(auVar82,auVar283,auVar254);
        auVar362._4_4_ = auVar103._12_4_;
        auVar362._0_4_ = auVar103._8_4_;
        auVar362._8_4_ = auVar103._0_4_;
        auVar362._12_4_ = auVar103._0_4_;
        auVar71._0_4_ = _DAT_00107eb0 + auVar117._0_4_;
        auVar71._4_4_ = _UNK_00107eb4 + auVar117._4_4_;
        auVar71._8_4_ = _UNK_00107eb8 + auVar117._8_4_;
        auVar71._12_4_ = _UNK_00107ebc + auVar117._12_4_;
        auVar81 = sha256rnds2_sha(auVar81,auVar78,auVar362);
        auVar268 = sha256msg1_sha(auVar268,auVar338);
        auVar298._0_4_ = auVar123._0_4_ + auVar338._4_4_;
        auVar298._4_4_ = auVar123._4_4_ + auVar338._8_4_;
        auVar298._8_4_ = auVar123._8_4_ + auVar338._12_4_;
        auVar298._12_4_ = auVar123._12_4_ + auVar118._0_4_;
        auVar104._0_4_ = _DAT_00107eb0 + auVar118._0_4_;
        auVar104._4_4_ = _UNK_00107eb4 + auVar118._4_4_;
        auVar104._8_4_ = _UNK_00107eb8 + auVar118._8_4_;
        auVar104._12_4_ = _UNK_00107ebc + auVar118._12_4_;
        auVar337 = sha256msg2_sha(auVar247,auVar117);
        auVar283 = sha256rnds2_sha(auVar283,auVar82,auVar71);
        auVar78 = sha256rnds2_sha(auVar78,auVar81,auVar104);
        auVar123 = sha256msg2_sha(auVar298,auVar118);
        auVar272._4_4_ = auVar71._12_4_;
        auVar272._0_4_ = auVar71._8_4_;
        auVar272._8_4_ = auVar71._0_4_;
        auVar272._12_4_ = auVar71._0_4_;
        auVar252._0_4_ = auVar336._0_4_ + auVar117._4_4_;
        auVar252._4_4_ = auVar336._4_4_ + auVar117._8_4_;
        auVar252._8_4_ = auVar336._8_4_ + auVar117._12_4_;
        auVar252._12_4_ = auVar336._12_4_ + auVar337._0_4_;
        auVar47 = sha256msg1_sha(auVar47,auVar117);
        auVar82 = sha256rnds2_sha(auVar82,auVar283,auVar272);
        auVar48._4_4_ = auVar104._12_4_;
        auVar48._0_4_ = auVar104._8_4_;
        auVar48._8_4_ = auVar104._0_4_;
        auVar48._12_4_ = auVar104._0_4_;
        auVar72._0_4_ = _DAT_00107ec0 + auVar337._0_4_;
        auVar72._4_4_ = _UNK_00107ec4 + auVar337._4_4_;
        auVar72._8_4_ = _UNK_00107ec8 + auVar337._8_4_;
        auVar72._12_4_ = _UNK_00107ecc + auVar337._12_4_;
        auVar81 = sha256rnds2_sha(auVar81,auVar78,auVar48);
        auVar338 = sha256msg1_sha(auVar338,auVar118);
        auVar312._0_4_ = auVar268._0_4_ + auVar118._4_4_;
        auVar312._4_4_ = auVar268._4_4_ + auVar118._8_4_;
        auVar312._8_4_ = auVar268._8_4_ + auVar118._12_4_;
        auVar312._12_4_ = auVar268._12_4_ + auVar123._0_4_;
        auVar105._0_4_ = _DAT_00107ec0 + auVar123._0_4_;
        auVar105._4_4_ = _UNK_00107ec4 + auVar123._4_4_;
        auVar105._8_4_ = _UNK_00107ec8 + auVar123._8_4_;
        auVar105._12_4_ = _UNK_00107ecc + auVar123._12_4_;
        auVar336 = sha256msg2_sha(auVar252,auVar337);
        auVar283 = sha256rnds2_sha(auVar283,auVar82,auVar72);
        auVar78 = sha256rnds2_sha(auVar78,auVar81,auVar105);
        auVar268 = sha256msg2_sha(auVar312,auVar123);
        auVar49._4_4_ = auVar72._12_4_;
        auVar49._0_4_ = auVar72._8_4_;
        auVar49._8_4_ = auVar72._0_4_;
        auVar49._12_4_ = auVar72._0_4_;
        auVar121._0_4_ = auVar47._0_4_ + auVar337._4_4_;
        auVar121._4_4_ = auVar47._4_4_ + auVar337._8_4_;
        auVar121._8_4_ = auVar47._8_4_ + auVar337._12_4_;
        auVar121._12_4_ = auVar47._12_4_ + auVar336._0_4_;
        auVar117 = sha256msg1_sha(auVar117,auVar337);
        auVar82 = sha256rnds2_sha(auVar82,auVar283,auVar49);
        auVar50._4_4_ = auVar105._12_4_;
        auVar50._0_4_ = auVar105._8_4_;
        auVar50._8_4_ = auVar105._0_4_;
        auVar50._12_4_ = auVar105._0_4_;
        auVar73._0_4_ = _DAT_00107ed0 + auVar336._0_4_;
        auVar73._4_4_ = _UNK_00107ed4 + auVar336._4_4_;
        auVar73._8_4_ = _UNK_00107ed8 + auVar336._8_4_;
        auVar73._12_4_ = _UNK_00107edc + auVar336._12_4_;
        auVar81 = sha256rnds2_sha(auVar81,auVar78,auVar50);
        auVar118 = sha256msg1_sha(auVar118,auVar123);
        auVar271._0_4_ = auVar338._0_4_ + auVar123._4_4_;
        auVar271._4_4_ = auVar338._4_4_ + auVar123._8_4_;
        auVar271._8_4_ = auVar338._8_4_ + auVar123._12_4_;
        auVar271._12_4_ = auVar338._12_4_ + auVar268._0_4_;
        auVar106._0_4_ = _DAT_00107ed0 + auVar268._0_4_;
        auVar106._4_4_ = _UNK_00107ed4 + auVar268._4_4_;
        auVar106._8_4_ = _UNK_00107ed8 + auVar268._8_4_;
        auVar106._12_4_ = _UNK_00107edc + auVar268._12_4_;
        auVar47 = sha256msg2_sha(auVar121,auVar336);
        auVar283 = sha256rnds2_sha(auVar283,auVar82,auVar73);
        auVar78 = sha256rnds2_sha(auVar78,auVar81,auVar106);
        auVar338 = sha256msg2_sha(auVar271,auVar268);
        auVar51._4_4_ = auVar73._12_4_;
        auVar51._0_4_ = auVar73._8_4_;
        auVar51._8_4_ = auVar73._0_4_;
        auVar51._12_4_ = auVar73._0_4_;
        auVar126._0_4_ = auVar117._0_4_ + auVar336._4_4_;
        auVar126._4_4_ = auVar117._4_4_ + auVar336._8_4_;
        auVar126._8_4_ = auVar117._8_4_ + auVar336._12_4_;
        auVar126._12_4_ = auVar117._12_4_ + auVar47._0_4_;
        auVar337 = sha256msg1_sha(auVar337,auVar336);
        auVar82 = sha256rnds2_sha(auVar82,auVar283,auVar51);
        auVar52._4_4_ = auVar106._12_4_;
        auVar52._0_4_ = auVar106._8_4_;
        auVar52._8_4_ = auVar106._0_4_;
        auVar52._12_4_ = auVar106._0_4_;
        auVar74._0_4_ = _DAT_00107ee0 + auVar47._0_4_;
        auVar74._4_4_ = _UNK_00107ee4 + auVar47._4_4_;
        auVar74._8_4_ = _UNK_00107ee8 + auVar47._8_4_;
        auVar74._12_4_ = _UNK_00107eec + auVar47._12_4_;
        auVar81 = sha256rnds2_sha(auVar81,auVar78,auVar52);
        auVar123 = sha256msg1_sha(auVar123,auVar268);
        auVar286._0_4_ = auVar118._0_4_ + auVar268._4_4_;
        auVar286._4_4_ = auVar118._4_4_ + auVar268._8_4_;
        auVar286._8_4_ = auVar118._8_4_ + auVar268._12_4_;
        auVar286._12_4_ = auVar118._12_4_ + auVar338._0_4_;
        auVar107._0_4_ = _DAT_00107ee0 + auVar338._0_4_;
        auVar107._4_4_ = _UNK_00107ee4 + auVar338._4_4_;
        auVar107._8_4_ = _UNK_00107ee8 + auVar338._8_4_;
        auVar107._12_4_ = _UNK_00107eec + auVar338._12_4_;
        auVar117 = sha256msg2_sha(auVar126,auVar47);
        auVar283 = sha256rnds2_sha(auVar283,auVar82,auVar74);
        auVar78 = sha256rnds2_sha(auVar78,auVar81,auVar107);
        auVar118 = sha256msg2_sha(auVar286,auVar338);
        auVar53._4_4_ = auVar74._12_4_;
        auVar53._0_4_ = auVar74._8_4_;
        auVar53._8_4_ = auVar74._0_4_;
        auVar53._12_4_ = auVar74._0_4_;
        auVar248._0_4_ = auVar337._0_4_ + auVar47._4_4_;
        auVar248._4_4_ = auVar337._4_4_ + auVar47._8_4_;
        auVar248._8_4_ = auVar337._8_4_ + auVar47._12_4_;
        auVar248._12_4_ = auVar337._12_4_ + auVar117._0_4_;
        auVar337 = sha256msg1_sha(auVar336,auVar47);
        auVar82 = sha256rnds2_sha(auVar82,auVar283,auVar53);
        auVar54._4_4_ = auVar107._12_4_;
        auVar54._0_4_ = auVar107._8_4_;
        auVar54._8_4_ = auVar107._0_4_;
        auVar54._12_4_ = auVar107._0_4_;
        auVar75._0_4_ = _DAT_00107ef0 + auVar117._0_4_;
        auVar75._4_4_ = _UNK_00107ef4 + auVar117._4_4_;
        auVar75._8_4_ = _UNK_00107ef8 + auVar117._8_4_;
        auVar75._12_4_ = _UNK_00107efc + auVar117._12_4_;
        auVar81 = sha256rnds2_sha(auVar81,auVar78,auVar54);
        auVar268 = sha256msg1_sha(auVar268,auVar338);
        auVar299._0_4_ = auVar123._0_4_ + auVar338._4_4_;
        auVar299._4_4_ = auVar123._4_4_ + auVar338._8_4_;
        auVar299._8_4_ = auVar123._8_4_ + auVar338._12_4_;
        auVar299._12_4_ = auVar123._12_4_ + auVar118._0_4_;
        auVar108._0_4_ = _DAT_00107ef0 + auVar118._0_4_;
        auVar108._4_4_ = _UNK_00107ef4 + auVar118._4_4_;
        auVar108._8_4_ = _UNK_00107ef8 + auVar118._8_4_;
        auVar108._12_4_ = _UNK_00107efc + auVar118._12_4_;
        auVar47 = sha256msg2_sha(auVar248,auVar117);
        auVar338 = sha256rnds2_sha(auVar283,auVar82,auVar75);
        auVar283 = sha256rnds2_sha(auVar78,auVar81,auVar108);
        auVar336 = sha256msg2_sha(auVar299,auVar118);
        auVar55._4_4_ = auVar75._12_4_;
        auVar55._0_4_ = auVar75._8_4_;
        auVar55._8_4_ = auVar75._0_4_;
        auVar55._12_4_ = auVar75._0_4_;
        auVar253._0_4_ = auVar337._0_4_ + auVar117._4_4_;
        auVar253._4_4_ = auVar337._4_4_ + auVar117._8_4_;
        auVar253._8_4_ = auVar337._8_4_ + auVar117._12_4_;
        auVar253._12_4_ = auVar337._12_4_ + auVar47._0_4_;
        auVar337 = sha256rnds2_sha(auVar82,auVar338,auVar55);
        auVar56._4_4_ = auVar108._12_4_;
        auVar56._0_4_ = auVar108._8_4_;
        auVar56._8_4_ = auVar108._0_4_;
        auVar56._12_4_ = auVar108._0_4_;
        auVar76._0_4_ = _DAT_00107f00 + auVar47._0_4_;
        auVar76._4_4_ = _UNK_00107f04 + auVar47._4_4_;
        auVar76._8_4_ = _UNK_00107f08 + auVar47._8_4_;
        auVar76._12_4_ = _UNK_00107f0c + auVar47._12_4_;
        auVar123 = sha256rnds2_sha(auVar81,auVar283,auVar56);
        auVar313._0_4_ = auVar268._0_4_ + auVar118._4_4_;
        auVar313._4_4_ = auVar268._4_4_ + auVar118._8_4_;
        auVar313._8_4_ = auVar268._8_4_ + auVar118._12_4_;
        auVar313._12_4_ = auVar268._12_4_ + auVar336._0_4_;
        auVar109._0_4_ = _DAT_00107f00 + auVar336._0_4_;
        auVar109._4_4_ = _UNK_00107f04 + auVar336._4_4_;
        auVar109._8_4_ = _UNK_00107f08 + auVar336._8_4_;
        auVar109._12_4_ = _UNK_00107f0c + auVar336._12_4_;
        auVar47 = sha256msg2_sha(auVar253,auVar47);
        auVar338 = sha256rnds2_sha(auVar338,auVar337,auVar76);
        auVar118 = sha256rnds2_sha(auVar283,auVar123,auVar109);
        auVar117 = sha256msg2_sha(auVar313,auVar336);
        auVar57._4_4_ = auVar76._12_4_;
        auVar57._0_4_ = auVar76._8_4_;
        auVar57._8_4_ = auVar76._0_4_;
        auVar57._12_4_ = auVar76._0_4_;
        auVar77._0_4_ = _DAT_00107f10 + auVar47._0_4_;
        auVar77._4_4_ = _UNK_00107f14 + auVar47._4_4_;
        auVar77._8_4_ = _UNK_00107f18 + auVar47._8_4_;
        auVar77._12_4_ = _UNK_00107f1c + auVar47._12_4_;
        auVar47 = sha256rnds2_sha(auVar337,auVar338,auVar57);
        auVar58._4_4_ = auVar109._12_4_;
        auVar58._0_4_ = auVar109._8_4_;
        auVar58._8_4_ = auVar109._0_4_;
        auVar58._12_4_ = auVar109._0_4_;
        auVar110._0_4_ = _DAT_00107f10 + auVar117._0_4_;
        auVar110._4_4_ = _UNK_00107f14 + auVar117._4_4_;
        auVar110._8_4_ = _UNK_00107f18 + auVar117._8_4_;
        auVar110._12_4_ = _UNK_00107f1c + auVar117._12_4_;
        auVar117 = sha256rnds2_sha(auVar123,auVar118,auVar58);
        pauVar38 = pauVar38 + 4;
        if ((int)local_100._0_4_ < 2) {
          pauVar38 = (undefined1 (*) [16])local_200;
        }
        pauVar41 = pauVar41 + 4;
        if ((int)local_100._4_4_ < 2) {
          pauVar41 = (undefined1 (*) [16])local_200;
        }
        auVar337 = sha256rnds2_sha(auVar338,auVar47,auVar77);
        auVar336 = sha256rnds2_sha(auVar118,auVar117,auVar110);
        auVar59._4_4_ = auVar77._12_4_;
        auVar59._0_4_ = auVar77._8_4_;
        auVar59._8_4_ = auVar77._0_4_;
        auVar59._12_4_ = auVar77._0_4_;
        auVar287._0_4_ = -(uint)(0 < (int)local_100._0_4_);
        auVar287._4_4_ = -(uint)(0 < (int)local_100._0_4_);
        auVar287._8_4_ = -(uint)(0 < (int)local_100._0_4_);
        auVar287._12_4_ = -(uint)(0 < (int)local_100._0_4_);
        auVar300._0_4_ = -(uint)(0 < (int)local_100._4_4_);
        auVar300._4_4_ = -(uint)(0 < (int)local_100._4_4_);
        auVar300._8_4_ = -(uint)(0 < (int)local_100._4_4_);
        auVar300._12_4_ = -(uint)(0 < (int)local_100._4_4_);
        auVar47 = sha256rnds2_sha(auVar47,auVar337,auVar59);
        auVar60._4_4_ = auVar110._12_4_;
        auVar60._0_4_ = auVar110._8_4_;
        auVar60._8_4_ = auVar110._0_4_;
        auVar60._12_4_ = auVar110._0_4_;
        auVar117 = sha256rnds2_sha(auVar117,auVar336,auVar60);
        auVar337 = auVar337 & auVar287;
        auVar336 = auVar336 & auVar300;
        auVar47 = auVar47 & auVar287;
        auVar117 = auVar117 & auVar300;
        local_100._4_4_ = local_100._4_4_ - (uint)(0 < (int)local_100._4_4_);
        local_100._0_4_ = local_100._0_4_ - (uint)(0 < (int)local_100._0_4_);
        local_1c0._16_4_ = auVar337._0_4_ + local_1c0._16_4_;
        uStack_1ac = auVar337._4_4_ + uStack_1ac;
        uStack_1a8 = auVar337._8_4_ + uStack_1a8;
        uStack_1a4 = auVar337._12_4_ + uStack_1a4;
        local_1a0._16_4_ = auVar336._0_4_ + local_1a0._16_4_;
        uStack_18c = auVar336._4_4_ + uStack_18c;
        uStack_188 = auVar336._8_4_ + uStack_188;
        uStack_184 = auVar336._12_4_ + uStack_184;
        local_1c0._0_4_ = auVar47._0_4_ + local_1c0._0_4_;
        local_1c0._4_4_ = auVar47._4_4_ + local_1c0._4_4_;
        local_1c0._8_4_ = auVar47._8_4_ + local_1c0._8_4_;
        local_1c0._12_4_ = auVar47._12_4_ + local_1c0._12_4_;
        local_1a0._0_4_ = auVar117._0_4_ + local_1a0._0_4_;
        local_1a0._4_4_ = auVar117._4_4_ + local_1a0._4_4_;
        local_1a0._8_4_ = auVar117._8_4_ + local_1a0._8_4_;
        local_1a0._12_4_ = auVar117._12_4_ + local_1a0._12_4_;
        stack0xffffffffffffff08 = auVar8._8_24_;
        auVar9 = _local_100;
        iVar122 = iVar122 + -1;
      } while (iVar122 != 0);
      uStack_e8 = auVar8._24_4_;
      auVar325._0_8_ = CONCAT44(local_1c0._8_4_,local_1c0._12_4_);
      auVar326._8_4_ = local_1c0._4_4_;
      auVar326._0_8_ = auVar325._0_8_;
      auVar341._0_8_ = CONCAT44(uStack_1a8,uStack_1a4);
      auVar342._8_4_ = uStack_1ac;
      auVar342._0_8_ = auVar341._0_8_;
      auVar326._12_4_ = local_1a0._8_4_;
      auVar325._12_52_ = auVar326._12_52_;
      auVar325._8_4_ = local_1c0._8_4_;
      auVar324._8_56_ = auVar325._8_56_;
      auVar324._0_8_ = CONCAT44(local_1a0._12_4_,local_1c0._12_4_);
      auVar127._0_8_ = CONCAT44(local_1a0._4_4_,local_1c0._4_4_);
      auVar127._8_4_ = local_1c0._0_4_;
      auVar127._12_4_ = local_1a0._0_4_;
      auVar342._12_4_ = uStack_188;
      auVar341._12_52_ = auVar342._12_52_;
      auVar341._8_4_ = uStack_1a8;
      auVar340._8_56_ = auVar341._8_56_;
      auVar340._0_8_ = CONCAT44(uStack_184,uStack_1a4);
      auVar249._0_8_ = CONCAT44(uStack_18c,uStack_1ac);
      auVar249._8_4_ = local_1c0._16_4_;
      auVar249._12_4_ = local_1a0._16_4_;
      *(undefined8 *)param_1[-4] = auVar324._0_8_;
      in_ZMM12._0_16_ = auVar324._0_16_ >> 0x40;
      in_ZMM12._16_48_ = auVar326._16_48_;
      *(undefined8 *)*param_1 = auVar127._0_8_;
      *(long *)param_1[-3] = auVar325._8_8_;
      *(long *)param_1[1] = auVar127._8_8_;
      *(undefined8 *)param_1[-2] = auVar340._0_8_;
      in_ZMM13._0_16_ = auVar340._0_16_ >> 0x40;
      in_ZMM13._16_48_ = auVar342._16_48_;
      *(undefined8 *)param_1[2] = auVar249._0_8_;
      *(long *)param_1[-1] = auVar341._8_8_;
      *(long *)param_1[3] = auVar249._8_8_;
      param_1 = (undefined1 (*) [32])(*param_1 + 8);
      param_2 = param_2 + 4;
      iVar34 = uStack_e8 + -1;
      _local_100 = auVar9;
    } while (iVar34 != 0);
    return;
  }
  if ((_DAT_00109004 & 0x10000000) == 0) {
    stack0xffffffffffffff10 = &stack0x00000000;
    param_1 = param_1 + 4;
    do {
      uStack_e8 = param_3;
      auVar8 = _local_100;
      puVar37 = (uint *)*param_2;
      local_100._0_4_ = *(undefined4 *)(param_2 + 1);
      iVar34 = local_100._0_4_;
      if ((int)local_100._0_4_ < 1) {
        puVar37 = (uint *)&DAT_00107680;
        iVar34 = 0;
      }
      puVar40 = (undefined4 *)param_2[2];
      local_100._4_4_ = *(undefined4 *)(param_2 + 3);
      if (iVar34 < (int)local_100._4_4_) {
        iVar34 = local_100._4_4_;
      }
      if ((int)local_100._4_4_ < 1) {
        puVar40 = (undefined4 *)&DAT_00107680;
      }
      puVar44 = (undefined4 *)param_2[4];
      local_100._8_4_ = *(undefined4 *)(param_2 + 5);
      if (iVar34 < (int)local_100._8_4_) {
        iVar34 = local_100._8_4_;
      }
      if ((int)local_100._8_4_ < 1) {
        puVar44 = (undefined4 *)&DAT_00107680;
      }
      puVar45 = (undefined4 *)param_2[6];
      local_100._12_4_ = *(undefined4 *)(param_2 + 7);
      if (iVar34 < (int)local_100._12_4_) {
        iVar34 = local_100._12_4_;
      }
      local_f0 = auVar8._16_16_;
      if ((int)local_100._12_4_ < 1) {
        puVar45 = (undefined4 *)&DAT_00107680;
      }
      if (iVar34 == 0) {
        return;
      }
      in_ZMM8._0_16_ = *(undefined1 (*) [16])param_1[-4];
      in_ZMM9._0_16_ = *(undefined1 (*) [16])param_1[-3];
      in_ZMM10._0_16_ = *(undefined1 (*) [16])param_1[-2];
      in_ZMM11._0_16_ = *(undefined1 (*) [16])param_1[-1];
      in_ZMM12._0_16_ = *(undefined1 (*) [16])*param_1;
      in_ZMM13._0_16_ = *(undefined1 (*) [16])param_1[1];
      in_ZMM14._0_16_ = *(undefined1 (*) [16])param_1[2];
      in_ZMM15._0_16_ = *(undefined1 (*) [16])param_1[3];
      in_ZMM6._0_16_ = _DAT_00107e00;
      do {
        auVar8 = _local_100;
        auVar336 = in_ZMM9._0_16_;
        uVar62 = *puVar37;
        auVar146._16_48_ = in_ZMM5._16_48_;
        auVar146._0_16_ = ZEXT416(uVar62);
        auVar145._12_52_ = auVar146._12_52_;
        auVar145._4_8_ = 0;
        auVar145._0_4_ = uVar62;
        auVar144._8_56_ = auVar145._8_56_;
        auVar144._0_8_ = CONCAT44(*puVar44,uVar62);
        auVar149._0_12_ = auVar144._0_12_;
        auVar149._12_4_ = *puVar45;
        auVar149._16_48_ = auVar146._16_48_;
        auVar148._12_52_ = auVar149._12_52_;
        auVar148._8_4_ = *puVar44;
        auVar148._0_8_ = auVar144._0_8_;
        auVar147._8_56_ = auVar148._8_56_;
        auVar147._4_4_ = *puVar40;
        auVar147._0_4_ = uVar62;
        auVar338 = in_ZMM12._0_16_;
        auVar117 = in_ZMM6._0_16_;
        auVar240._0_16_ = pshufb(auVar147._0_16_,auVar117);
        uVar250 = in_ZMM12._0_4_;
        uVar256 = in_ZMM12._4_4_;
        uVar257 = in_ZMM12._8_4_;
        uVar258 = in_ZMM12._12_4_;
        auVar337 = in_ZMM8._0_16_;
        uVar61 = in_ZMM8._0_4_;
        uVar92 = in_ZMM8._4_4_;
        uVar93 = in_ZMM8._8_4_;
        uVar94 = in_ZMM8._12_4_;
        auVar47 = ~auVar338 & in_ZMM14._0_16_ ^ auVar338 & in_ZMM13._0_16_;
        iVar122 = SUB164(auVar240._0_16_,0) + in_ZMM15._0_4_ + _K256 +
                  (uVar250 >> 6 ^ uVar250 << 7 ^ uVar250 >> 0xb ^ uVar250 << 0x15 ^ uVar250 >> 0x19
                  ^ uVar250 << 0x1a) + auVar47._0_4_;
        iVar241 = SUB164(auVar240._0_16_,4) + in_ZMM15._4_4_ + _UNK_00107604 +
                  (uVar256 >> 6 ^ uVar256 << 7 ^ uVar256 >> 0xb ^ uVar256 << 0x15 ^ uVar256 >> 0x19
                  ^ uVar256 << 0x1a) + auVar47._4_4_;
        iVar242 = SUB164(auVar240._0_16_,8) + in_ZMM15._8_4_ + _UNK_00107608 +
                  (uVar257 >> 6 ^ uVar257 << 7 ^ uVar257 >> 0xb ^ uVar257 << 0x15 ^ uVar257 >> 0x19
                  ^ uVar257 << 0x1a) + auVar47._8_4_;
        iVar243 = SUB164(auVar240._0_16_,0xc) + in_ZMM15._12_4_ + _UNK_0010760c +
                  (uVar258 >> 6 ^ uVar258 << 7 ^ uVar258 >> 0xb ^ uVar258 << 0x15 ^ uVar258 >> 0x19
                  ^ uVar258 << 0x1a) + auVar47._12_4_;
        auVar364._16_48_ = in_ZMM15._16_48_;
        auVar47 = auVar336 ^ (in_ZMM10._0_16_ ^ auVar336) & (auVar336 ^ auVar337);
        auVar302._0_4_ = in_ZMM11._0_4_ + iVar122;
        auVar302._4_4_ = in_ZMM11._4_4_ + iVar241;
        auVar302._8_4_ = in_ZMM11._8_4_ + iVar242;
        auVar314._16_48_ = in_ZMM11._16_48_;
        auVar302._12_4_ = in_ZMM11._12_4_ + iVar243;
        auVar353._0_4_ =
             auVar47._0_4_ + iVar122 +
             (uVar61 >> 0x16 ^ uVar61 >> 2 ^ uVar61 << 10 ^ uVar61 >> 0xd ^ uVar61 << 0x13 ^
             uVar61 << 0x1e);
        auVar353._4_4_ =
             auVar47._4_4_ + iVar241 +
             (uVar92 >> 0x16 ^ uVar92 >> 2 ^ uVar92 << 10 ^ uVar92 >> 0xd ^ uVar92 << 0x13 ^
             uVar92 << 0x1e);
        auVar353._8_4_ =
             auVar47._8_4_ + iVar242 +
             (uVar93 >> 0x16 ^ uVar93 >> 2 ^ uVar93 << 10 ^ uVar93 >> 0xd ^ uVar93 << 0x13 ^
             uVar93 << 0x1e);
        auVar353._12_4_ =
             auVar47._12_4_ + iVar243 +
             (uVar94 >> 0x16 ^ uVar94 >> 2 ^ uVar94 << 10 ^ uVar94 >> 0xd ^ uVar94 << 0x13 ^
             uVar94 << 0x1e);
        uVar62 = puVar37[1];
        auVar152._0_16_ = ZEXT416(uVar62);
        auVar152._16_48_ = auVar146._16_48_;
        auVar151._12_52_ = auVar152._12_52_;
        auVar151._4_8_ = 0;
        auVar151._0_4_ = uVar62;
        auVar150._8_56_ = auVar151._8_56_;
        auVar150._0_8_ = CONCAT44(puVar44[1],uVar62);
        auVar155._0_12_ = auVar150._0_12_;
        auVar155._12_4_ = puVar45[1];
        auVar155._16_48_ = auVar146._16_48_;
        auVar154._12_52_ = auVar155._12_52_;
        auVar154._8_4_ = puVar44[1];
        auVar154._0_8_ = auVar150._0_8_;
        auVar153._8_56_ = auVar154._8_56_;
        auVar153._4_4_ = puVar40[1];
        auVar153._0_4_ = uVar62;
        register0x00001340 = pshufb(auVar153._0_16_,auVar117);
        local_200._0_16_ = auVar240._0_16_;
        auVar47 = ~auVar302 & in_ZMM13._0_16_ ^ auVar302 & auVar338;
        iVar122 = SUB164(register0x00001340,0) + in_ZMM14._0_4_ + _DAT_00107620 +
                  (auVar302._0_4_ >> 6 ^ auVar302._0_4_ * 0x80 ^ auVar302._0_4_ >> 0xb ^
                   auVar302._0_4_ * 0x200000 ^ auVar302._0_4_ >> 0x19 ^ auVar302._0_4_ * 0x4000000)
                  + auVar47._0_4_;
        iVar241 = SUB164(register0x00001340,4) + in_ZMM14._4_4_ + _UNK_00107624 +
                  (auVar302._4_4_ >> 6 ^ auVar302._4_4_ * 0x80 ^ auVar302._4_4_ >> 0xb ^
                   auVar302._4_4_ * 0x200000 ^ auVar302._4_4_ >> 0x19 ^ auVar302._4_4_ * 0x4000000)
                  + auVar47._4_4_;
        iVar242 = SUB164(register0x00001340,8) + in_ZMM14._8_4_ + _UNK_00107628 +
                  (auVar302._8_4_ >> 6 ^ auVar302._8_4_ * 0x80 ^ auVar302._8_4_ >> 0xb ^
                   auVar302._8_4_ * 0x200000 ^ auVar302._8_4_ >> 0x19 ^ auVar302._8_4_ * 0x4000000)
                  + auVar47._8_4_;
        iVar243 = SUB164(register0x00001340,0xc) + in_ZMM14._12_4_ + _UNK_0010762c +
                  (auVar302._12_4_ >> 6 ^ auVar302._12_4_ * 0x80 ^ auVar302._12_4_ >> 0xb ^
                   auVar302._12_4_ * 0x200000 ^ auVar302._12_4_ >> 0x19 ^
                  auVar302._12_4_ * 0x4000000) + auVar47._12_4_;
        auVar352._16_48_ = in_ZMM14._16_48_;
        auVar47 = auVar337 ^ (auVar336 ^ auVar337) & (auVar337 ^ auVar353);
        auVar289._0_4_ = in_ZMM10._0_4_ + iVar122;
        auVar289._4_4_ = in_ZMM10._4_4_ + iVar241;
        auVar289._8_4_ = in_ZMM10._8_4_ + iVar242;
        auVar301._16_48_ = in_ZMM10._16_48_;
        auVar289._12_4_ = in_ZMM10._12_4_ + iVar243;
        auVar343._0_4_ =
             auVar47._0_4_ + iVar122 +
             (auVar353._0_4_ >> 0x16 ^
              auVar353._0_4_ >> 2 ^ auVar353._0_4_ * 0x400 ^ auVar353._0_4_ >> 0xd ^
              auVar353._0_4_ * 0x80000 ^ auVar353._0_4_ * 0x40000000);
        auVar343._4_4_ =
             auVar47._4_4_ + iVar241 +
             (auVar353._4_4_ >> 0x16 ^
              auVar353._4_4_ >> 2 ^ auVar353._4_4_ * 0x400 ^ auVar353._4_4_ >> 0xd ^
              auVar353._4_4_ * 0x80000 ^ auVar353._4_4_ * 0x40000000);
        auVar343._8_4_ =
             auVar47._8_4_ + iVar242 +
             (auVar353._8_4_ >> 0x16 ^
              auVar353._8_4_ >> 2 ^ auVar353._8_4_ * 0x400 ^ auVar353._8_4_ >> 0xd ^
              auVar353._8_4_ * 0x80000 ^ auVar353._8_4_ * 0x40000000);
        auVar343._12_4_ =
             auVar47._12_4_ + iVar243 +
             (auVar353._12_4_ >> 0x16 ^
              auVar353._12_4_ >> 2 ^ auVar353._12_4_ * 0x400 ^ auVar353._12_4_ >> 0xd ^
              auVar353._12_4_ * 0x80000 ^ auVar353._12_4_ * 0x40000000);
        uVar62 = puVar37[2];
        auVar158._0_16_ = ZEXT416(uVar62);
        auVar158._16_48_ = auVar146._16_48_;
        auVar157._12_52_ = auVar158._12_52_;
        auVar157._4_8_ = 0;
        auVar157._0_4_ = uVar62;
        auVar156._8_56_ = auVar157._8_56_;
        auVar156._0_8_ = CONCAT44(puVar44[2],uVar62);
        auVar161._0_12_ = auVar156._0_12_;
        auVar161._12_4_ = puVar45[2];
        auVar161._16_48_ = auVar146._16_48_;
        auVar160._12_52_ = auVar161._12_52_;
        auVar160._8_4_ = puVar44[2];
        auVar160._0_8_ = auVar156._0_8_;
        auVar159._8_56_ = auVar160._8_56_;
        auVar159._4_4_ = puVar40[2];
        auVar159._0_4_ = uVar62;
        local_1e0._0_16_ = pshufb(auVar159._0_16_,auVar117);
        auVar47 = ~auVar289 & auVar338 ^ auVar289 & auVar302;
        iVar122 = SUB164(local_1e0._0_16_,0) + in_ZMM13._0_4_ + _DAT_00107640 +
                  (auVar289._0_4_ >> 6 ^ auVar289._0_4_ * 0x80 ^ auVar289._0_4_ >> 0xb ^
                   auVar289._0_4_ * 0x200000 ^ auVar289._0_4_ >> 0x19 ^ auVar289._0_4_ * 0x4000000)
                  + auVar47._0_4_;
        iVar241 = SUB164(local_1e0._0_16_,4) + in_ZMM13._4_4_ + _UNK_00107644 +
                  (auVar289._4_4_ >> 6 ^ auVar289._4_4_ * 0x80 ^ auVar289._4_4_ >> 0xb ^
                   auVar289._4_4_ * 0x200000 ^ auVar289._4_4_ >> 0x19 ^ auVar289._4_4_ * 0x4000000)
                  + auVar47._4_4_;
        iVar242 = SUB164(local_1e0._0_16_,8) + in_ZMM13._8_4_ + _UNK_00107648 +
                  (auVar289._8_4_ >> 6 ^ auVar289._8_4_ * 0x80 ^ auVar289._8_4_ >> 0xb ^
                   auVar289._8_4_ * 0x200000 ^ auVar289._8_4_ >> 0x19 ^ auVar289._8_4_ * 0x4000000)
                  + auVar47._8_4_;
        iVar243 = SUB164(local_1e0._0_16_,0xc) + in_ZMM13._12_4_ + _UNK_0010764c +
                  (auVar289._12_4_ >> 6 ^ auVar289._12_4_ * 0x80 ^ auVar289._12_4_ >> 0xb ^
                   auVar289._12_4_ * 0x200000 ^ auVar289._12_4_ >> 0x19 ^
                  auVar289._12_4_ * 0x4000000) + auVar47._12_4_;
        auVar339._16_48_ = in_ZMM13._16_48_;
        auVar47 = auVar353 ^ (auVar337 ^ auVar353) & (auVar353 ^ auVar343);
        auVar274._0_4_ = in_ZMM9._0_4_ + iVar122;
        auVar274._4_4_ = in_ZMM9._4_4_ + iVar241;
        auVar274._8_4_ = in_ZMM9._8_4_ + iVar242;
        auVar288._16_48_ = in_ZMM9._16_48_;
        auVar274._12_4_ = in_ZMM9._12_4_ + iVar243;
        auVar327._0_4_ =
             auVar47._0_4_ + iVar122 +
             (auVar343._0_4_ >> 0x16 ^
              auVar343._0_4_ >> 2 ^ auVar343._0_4_ * 0x400 ^ auVar343._0_4_ >> 0xd ^
              auVar343._0_4_ * 0x80000 ^ auVar343._0_4_ * 0x40000000);
        auVar327._4_4_ =
             auVar47._4_4_ + iVar241 +
             (auVar343._4_4_ >> 0x16 ^
              auVar343._4_4_ >> 2 ^ auVar343._4_4_ * 0x400 ^ auVar343._4_4_ >> 0xd ^
              auVar343._4_4_ * 0x80000 ^ auVar343._4_4_ * 0x40000000);
        auVar327._8_4_ =
             auVar47._8_4_ + iVar242 +
             (auVar343._8_4_ >> 0x16 ^
              auVar343._8_4_ >> 2 ^ auVar343._8_4_ * 0x400 ^ auVar343._8_4_ >> 0xd ^
              auVar343._8_4_ * 0x80000 ^ auVar343._8_4_ * 0x40000000);
        auVar327._12_4_ =
             auVar47._12_4_ + iVar243 +
             (auVar343._12_4_ >> 0x16 ^
              auVar343._12_4_ >> 2 ^ auVar343._12_4_ * 0x400 ^ auVar343._12_4_ >> 0xd ^
              auVar343._12_4_ * 0x80000 ^ auVar343._12_4_ * 0x40000000);
        uVar62 = puVar37[3];
        auVar164._0_16_ = ZEXT416(uVar62);
        auVar164._16_48_ = auVar146._16_48_;
        auVar163._12_52_ = auVar164._12_52_;
        auVar163._4_8_ = 0;
        auVar163._0_4_ = uVar62;
        auVar162._8_56_ = auVar163._8_56_;
        auVar162._0_8_ = CONCAT44(puVar44[3],uVar62);
        auVar167._0_12_ = auVar162._0_12_;
        auVar167._12_4_ = puVar45[3];
        auVar167._16_48_ = auVar146._16_48_;
        auVar166._12_52_ = auVar167._12_52_;
        auVar166._8_4_ = puVar44[3];
        auVar166._0_8_ = auVar162._0_8_;
        auVar165._8_56_ = auVar166._8_56_;
        auVar165._4_4_ = puVar40[3];
        auVar165._0_4_ = uVar62;
        register0x00001340 = pshufb(auVar165._0_16_,auVar117);
        auVar47 = ~auVar274 & auVar302 ^ auVar274 & auVar289;
        iVar122 = SUB164(register0x00001340,0) + uVar250 + _DAT_00107660 +
                  (auVar274._0_4_ >> 6 ^ auVar274._0_4_ * 0x80 ^ auVar274._0_4_ >> 0xb ^
                   auVar274._0_4_ * 0x200000 ^ auVar274._0_4_ >> 0x19 ^ auVar274._0_4_ * 0x4000000)
                  + auVar47._0_4_;
        iVar241 = SUB164(register0x00001340,4) + uVar256 + _UNK_00107664 +
                  (auVar274._4_4_ >> 6 ^ auVar274._4_4_ * 0x80 ^ auVar274._4_4_ >> 0xb ^
                   auVar274._4_4_ * 0x200000 ^ auVar274._4_4_ >> 0x19 ^ auVar274._4_4_ * 0x4000000)
                  + auVar47._4_4_;
        iVar242 = SUB164(register0x00001340,8) + uVar257 + _UNK_00107668 +
                  (auVar274._8_4_ >> 6 ^ auVar274._8_4_ * 0x80 ^ auVar274._8_4_ >> 0xb ^
                   auVar274._8_4_ * 0x200000 ^ auVar274._8_4_ >> 0x19 ^ auVar274._8_4_ * 0x4000000)
                  + auVar47._8_4_;
        iVar243 = SUB164(register0x00001340,0xc) + uVar258 + _UNK_0010766c +
                  (auVar274._12_4_ >> 6 ^ auVar274._12_4_ * 0x80 ^ auVar274._12_4_ >> 0xb ^
                   auVar274._12_4_ * 0x200000 ^ auVar274._12_4_ >> 0x19 ^
                  auVar274._12_4_ * 0x4000000) + auVar47._12_4_;
        auVar323._16_48_ = in_ZMM12._16_48_;
        auVar47 = auVar343 ^ (auVar353 ^ auVar343) & (auVar343 ^ auVar327);
        auVar259._0_4_ = uVar61 + iVar122;
        auVar259._4_4_ = uVar92 + iVar241;
        auVar259._8_4_ = uVar93 + iVar242;
        auVar273._16_48_ = in_ZMM8._16_48_;
        auVar259._12_4_ = uVar94 + iVar243;
        auVar315._0_4_ =
             auVar47._0_4_ + iVar122 +
             (auVar327._0_4_ >> 0x16 ^
              auVar327._0_4_ >> 2 ^ auVar327._0_4_ * 0x400 ^ auVar327._0_4_ >> 0xd ^
              auVar327._0_4_ * 0x80000 ^ auVar327._0_4_ * 0x40000000);
        auVar315._4_4_ =
             auVar47._4_4_ + iVar241 +
             (auVar327._4_4_ >> 0x16 ^
              auVar327._4_4_ >> 2 ^ auVar327._4_4_ * 0x400 ^ auVar327._4_4_ >> 0xd ^
              auVar327._4_4_ * 0x80000 ^ auVar327._4_4_ * 0x40000000);
        auVar315._8_4_ =
             auVar47._8_4_ + iVar242 +
             (auVar327._8_4_ >> 0x16 ^
              auVar327._8_4_ >> 2 ^ auVar327._8_4_ * 0x400 ^ auVar327._8_4_ >> 0xd ^
              auVar327._8_4_ * 0x80000 ^ auVar327._8_4_ * 0x40000000);
        auVar315._12_4_ =
             auVar47._12_4_ + iVar243 +
             (auVar327._12_4_ >> 0x16 ^
              auVar327._12_4_ >> 2 ^ auVar327._12_4_ * 0x400 ^ auVar327._12_4_ >> 0xd ^
              auVar327._12_4_ * 0x80000 ^ auVar327._12_4_ * 0x40000000);
        uVar62 = puVar37[4];
        auVar170._0_16_ = ZEXT416(uVar62);
        auVar170._16_48_ = auVar146._16_48_;
        auVar169._12_52_ = auVar170._12_52_;
        auVar169._4_8_ = 0;
        auVar169._0_4_ = uVar62;
        auVar168._8_56_ = auVar169._8_56_;
        auVar168._0_8_ = CONCAT44(puVar44[4],uVar62);
        auVar173._0_12_ = auVar168._0_12_;
        auVar173._12_4_ = puVar45[4];
        auVar173._16_48_ = auVar146._16_48_;
        auVar172._12_52_ = auVar173._12_52_;
        auVar172._8_4_ = puVar44[4];
        auVar172._0_8_ = auVar168._0_8_;
        auVar171._8_56_ = auVar172._8_56_;
        auVar171._4_4_ = puVar40[4];
        auVar171._0_4_ = uVar62;
        local_1c0._0_16_ = pshufb(auVar171._0_16_,auVar117);
        auVar47 = ~auVar259 & auVar289 ^ auVar259 & auVar274;
        iVar122 = SUB164(local_1c0._0_16_,0) + auVar302._0_4_ + _DAT_00107680 +
                  (auVar259._0_4_ >> 6 ^ auVar259._0_4_ * 0x80 ^ auVar259._0_4_ >> 0xb ^
                   auVar259._0_4_ * 0x200000 ^ auVar259._0_4_ >> 0x19 ^ auVar259._0_4_ * 0x4000000)
                  + auVar47._0_4_;
        iVar241 = SUB164(local_1c0._0_16_,4) + auVar302._4_4_ + _UNK_00107684 +
                  (auVar259._4_4_ >> 6 ^ auVar259._4_4_ * 0x80 ^ auVar259._4_4_ >> 0xb ^
                   auVar259._4_4_ * 0x200000 ^ auVar259._4_4_ >> 0x19 ^ auVar259._4_4_ * 0x4000000)
                  + auVar47._4_4_;
        iVar242 = SUB164(local_1c0._0_16_,8) + auVar302._8_4_ + _UNK_00107688 +
                  (auVar259._8_4_ >> 6 ^ auVar259._8_4_ * 0x80 ^ auVar259._8_4_ >> 0xb ^
                   auVar259._8_4_ * 0x200000 ^ auVar259._8_4_ >> 0x19 ^ auVar259._8_4_ * 0x4000000)
                  + auVar47._8_4_;
        iVar243 = SUB164(local_1c0._0_16_,0xc) + auVar302._12_4_ + _UNK_0010768c +
                  (auVar259._12_4_ >> 6 ^ auVar259._12_4_ * 0x80 ^ auVar259._12_4_ >> 0xb ^
                   auVar259._12_4_ * 0x200000 ^ auVar259._12_4_ >> 0x19 ^
                  auVar259._12_4_ * 0x4000000) + auVar47._12_4_;
        auVar47 = auVar327 ^ (auVar343 ^ auVar327) & (auVar327 ^ auVar315);
        auVar354._0_4_ = auVar353._0_4_ + iVar122;
        auVar354._4_4_ = auVar353._4_4_ + iVar241;
        auVar354._8_4_ = auVar353._8_4_ + iVar242;
        auVar354._12_4_ = auVar353._12_4_ + iVar243;
        auVar303._0_4_ =
             auVar47._0_4_ + iVar122 +
             (auVar315._0_4_ >> 0x16 ^
              auVar315._0_4_ >> 2 ^ auVar315._0_4_ * 0x400 ^ auVar315._0_4_ >> 0xd ^
              auVar315._0_4_ * 0x80000 ^ auVar315._0_4_ * 0x40000000);
        auVar303._4_4_ =
             auVar47._4_4_ + iVar241 +
             (auVar315._4_4_ >> 0x16 ^
              auVar315._4_4_ >> 2 ^ auVar315._4_4_ * 0x400 ^ auVar315._4_4_ >> 0xd ^
              auVar315._4_4_ * 0x80000 ^ auVar315._4_4_ * 0x40000000);
        auVar303._8_4_ =
             auVar47._8_4_ + iVar242 +
             (auVar315._8_4_ >> 0x16 ^
              auVar315._8_4_ >> 2 ^ auVar315._8_4_ * 0x400 ^ auVar315._8_4_ >> 0xd ^
              auVar315._8_4_ * 0x80000 ^ auVar315._8_4_ * 0x40000000);
        auVar303._12_4_ =
             auVar47._12_4_ + iVar243 +
             (auVar315._12_4_ >> 0x16 ^
              auVar315._12_4_ >> 2 ^ auVar315._12_4_ * 0x400 ^ auVar315._12_4_ >> 0xd ^
              auVar315._12_4_ * 0x80000 ^ auVar315._12_4_ * 0x40000000);
        uVar62 = puVar37[5];
        auVar176._0_16_ = ZEXT416(uVar62);
        auVar176._16_48_ = auVar146._16_48_;
        auVar175._12_52_ = auVar176._12_52_;
        auVar175._4_8_ = 0;
        auVar175._0_4_ = uVar62;
        auVar174._8_56_ = auVar175._8_56_;
        auVar174._0_8_ = CONCAT44(puVar44[5],uVar62);
        auVar179._0_12_ = auVar174._0_12_;
        auVar179._12_4_ = puVar45[5];
        auVar179._16_48_ = auVar146._16_48_;
        auVar178._12_52_ = auVar179._12_52_;
        auVar178._8_4_ = puVar44[5];
        auVar178._0_8_ = auVar174._0_8_;
        auVar177._8_56_ = auVar178._8_56_;
        auVar177._4_4_ = puVar40[5];
        auVar177._0_4_ = uVar62;
        register0x00001340 = pshufb(auVar177._0_16_,auVar117);
        auVar47 = ~auVar354 & auVar274 ^ auVar354 & auVar259;
        iVar122 = SUB164(register0x00001340,0) + auVar289._0_4_ + _DAT_001076a0 +
                  (auVar354._0_4_ >> 6 ^ auVar354._0_4_ * 0x80 ^ auVar354._0_4_ >> 0xb ^
                   auVar354._0_4_ * 0x200000 ^ auVar354._0_4_ >> 0x19 ^ auVar354._0_4_ * 0x4000000)
                  + auVar47._0_4_;
        iVar241 = SUB164(register0x00001340,4) + auVar289._4_4_ + _UNK_001076a4 +
                  (auVar354._4_4_ >> 6 ^ auVar354._4_4_ * 0x80 ^ auVar354._4_4_ >> 0xb ^
                   auVar354._4_4_ * 0x200000 ^ auVar354._4_4_ >> 0x19 ^ auVar354._4_4_ * 0x4000000)
                  + auVar47._4_4_;
        iVar242 = SUB164(register0x00001340,8) + auVar289._8_4_ + _UNK_001076a8 +
                  (auVar354._8_4_ >> 6 ^ auVar354._8_4_ * 0x80 ^ auVar354._8_4_ >> 0xb ^
                   auVar354._8_4_ * 0x200000 ^ auVar354._8_4_ >> 0x19 ^ auVar354._8_4_ * 0x4000000)
                  + auVar47._8_4_;
        iVar243 = SUB164(register0x00001340,0xc) + auVar289._12_4_ + _UNK_001076ac +
                  (auVar354._12_4_ >> 6 ^ auVar354._12_4_ * 0x80 ^ auVar354._12_4_ >> 0xb ^
                   auVar354._12_4_ * 0x200000 ^ auVar354._12_4_ >> 0x19 ^
                  auVar354._12_4_ * 0x4000000) + auVar47._12_4_;
        auVar47 = auVar315 ^ (auVar327 ^ auVar315) & (auVar315 ^ auVar303);
        auVar344._0_4_ = auVar343._0_4_ + iVar122;
        auVar344._4_4_ = auVar343._4_4_ + iVar241;
        auVar344._8_4_ = auVar343._8_4_ + iVar242;
        auVar344._12_4_ = auVar343._12_4_ + iVar243;
        auVar290._0_4_ =
             auVar47._0_4_ + iVar122 +
             (auVar303._0_4_ >> 0x16 ^
              auVar303._0_4_ >> 2 ^ auVar303._0_4_ * 0x400 ^ auVar303._0_4_ >> 0xd ^
              auVar303._0_4_ * 0x80000 ^ auVar303._0_4_ * 0x40000000);
        auVar290._4_4_ =
             auVar47._4_4_ + iVar241 +
             (auVar303._4_4_ >> 0x16 ^
              auVar303._4_4_ >> 2 ^ auVar303._4_4_ * 0x400 ^ auVar303._4_4_ >> 0xd ^
              auVar303._4_4_ * 0x80000 ^ auVar303._4_4_ * 0x40000000);
        auVar290._8_4_ =
             auVar47._8_4_ + iVar242 +
             (auVar303._8_4_ >> 0x16 ^
              auVar303._8_4_ >> 2 ^ auVar303._8_4_ * 0x400 ^ auVar303._8_4_ >> 0xd ^
              auVar303._8_4_ * 0x80000 ^ auVar303._8_4_ * 0x40000000);
        auVar290._12_4_ =
             auVar47._12_4_ + iVar243 +
             (auVar303._12_4_ >> 0x16 ^
              auVar303._12_4_ >> 2 ^ auVar303._12_4_ * 0x400 ^ auVar303._12_4_ >> 0xd ^
              auVar303._12_4_ * 0x80000 ^ auVar303._12_4_ * 0x40000000);
        uVar62 = puVar37[6];
        auVar182._0_16_ = ZEXT416(uVar62);
        auVar182._16_48_ = auVar146._16_48_;
        auVar181._12_52_ = auVar182._12_52_;
        auVar181._4_8_ = 0;
        auVar181._0_4_ = uVar62;
        auVar180._8_56_ = auVar181._8_56_;
        auVar180._0_8_ = CONCAT44(puVar44[6],uVar62);
        auVar185._0_12_ = auVar180._0_12_;
        auVar185._12_4_ = puVar45[6];
        auVar185._16_48_ = auVar146._16_48_;
        auVar184._12_52_ = auVar185._12_52_;
        auVar184._8_4_ = puVar44[6];
        auVar184._0_8_ = auVar180._0_8_;
        auVar183._8_56_ = auVar184._8_56_;
        auVar183._4_4_ = puVar40[6];
        auVar183._0_4_ = uVar62;
        local_1a0._0_16_ = pshufb(auVar183._0_16_,auVar117);
        auVar47 = ~auVar344 & auVar259 ^ auVar344 & auVar354;
        iVar122 = SUB164(local_1a0._0_16_,0) + auVar274._0_4_ + _DAT_001076c0 +
                  (auVar344._0_4_ >> 6 ^ auVar344._0_4_ * 0x80 ^ auVar344._0_4_ >> 0xb ^
                   auVar344._0_4_ * 0x200000 ^ auVar344._0_4_ >> 0x19 ^ auVar344._0_4_ * 0x4000000)
                  + auVar47._0_4_;
        iVar241 = SUB164(local_1a0._0_16_,4) + auVar274._4_4_ + _UNK_001076c4 +
                  (auVar344._4_4_ >> 6 ^ auVar344._4_4_ * 0x80 ^ auVar344._4_4_ >> 0xb ^
                   auVar344._4_4_ * 0x200000 ^ auVar344._4_4_ >> 0x19 ^ auVar344._4_4_ * 0x4000000)
                  + auVar47._4_4_;
        iVar242 = SUB164(local_1a0._0_16_,8) + auVar274._8_4_ + _UNK_001076c8 +
                  (auVar344._8_4_ >> 6 ^ auVar344._8_4_ * 0x80 ^ auVar344._8_4_ >> 0xb ^
                   auVar344._8_4_ * 0x200000 ^ auVar344._8_4_ >> 0x19 ^ auVar344._8_4_ * 0x4000000)
                  + auVar47._8_4_;
        iVar243 = SUB164(local_1a0._0_16_,0xc) + auVar274._12_4_ + _UNK_001076cc +
                  (auVar344._12_4_ >> 6 ^ auVar344._12_4_ * 0x80 ^ auVar344._12_4_ >> 0xb ^
                   auVar344._12_4_ * 0x200000 ^ auVar344._12_4_ >> 0x19 ^
                  auVar344._12_4_ * 0x4000000) + auVar47._12_4_;
        auVar47 = auVar303 ^ (auVar315 ^ auVar303) & (auVar303 ^ auVar290);
        auVar328._0_4_ = auVar327._0_4_ + iVar122;
        auVar328._4_4_ = auVar327._4_4_ + iVar241;
        auVar328._8_4_ = auVar327._8_4_ + iVar242;
        auVar328._12_4_ = auVar327._12_4_ + iVar243;
        auVar275._0_4_ =
             auVar47._0_4_ + iVar122 +
             (auVar290._0_4_ >> 0x16 ^
              auVar290._0_4_ >> 2 ^ auVar290._0_4_ * 0x400 ^ auVar290._0_4_ >> 0xd ^
              auVar290._0_4_ * 0x80000 ^ auVar290._0_4_ * 0x40000000);
        auVar275._4_4_ =
             auVar47._4_4_ + iVar241 +
             (auVar290._4_4_ >> 0x16 ^
              auVar290._4_4_ >> 2 ^ auVar290._4_4_ * 0x400 ^ auVar290._4_4_ >> 0xd ^
              auVar290._4_4_ * 0x80000 ^ auVar290._4_4_ * 0x40000000);
        auVar275._8_4_ =
             auVar47._8_4_ + iVar242 +
             (auVar290._8_4_ >> 0x16 ^
              auVar290._8_4_ >> 2 ^ auVar290._8_4_ * 0x400 ^ auVar290._8_4_ >> 0xd ^
              auVar290._8_4_ * 0x80000 ^ auVar290._8_4_ * 0x40000000);
        auVar275._12_4_ =
             auVar47._12_4_ + iVar243 +
             (auVar290._12_4_ >> 0x16 ^
              auVar290._12_4_ >> 2 ^ auVar290._12_4_ * 0x400 ^ auVar290._12_4_ >> 0xd ^
              auVar290._12_4_ * 0x80000 ^ auVar290._12_4_ * 0x40000000);
        uVar62 = puVar37[7];
        auVar188._0_16_ = ZEXT416(uVar62);
        auVar188._16_48_ = auVar146._16_48_;
        auVar187._12_52_ = auVar188._12_52_;
        auVar187._4_8_ = 0;
        auVar187._0_4_ = uVar62;
        auVar186._8_56_ = auVar187._8_56_;
        auVar186._0_8_ = CONCAT44(puVar44[7],uVar62);
        auVar191._0_12_ = auVar186._0_12_;
        auVar191._12_4_ = puVar45[7];
        auVar191._16_48_ = auVar146._16_48_;
        auVar190._12_52_ = auVar191._12_52_;
        auVar190._8_4_ = puVar44[7];
        auVar190._0_8_ = auVar186._0_8_;
        auVar189._8_56_ = auVar190._8_56_;
        auVar189._4_4_ = puVar40[7];
        auVar189._0_4_ = uVar62;
        register0x00001340 = pshufb(auVar189._0_16_,auVar117);
        auVar47 = ~auVar328 & auVar354 ^ auVar328 & auVar344;
        iVar122 = SUB164(register0x00001340,0) + auVar259._0_4_ + _DAT_001076e0 +
                  (auVar328._0_4_ >> 6 ^ auVar328._0_4_ * 0x80 ^ auVar328._0_4_ >> 0xb ^
                   auVar328._0_4_ * 0x200000 ^ auVar328._0_4_ >> 0x19 ^ auVar328._0_4_ * 0x4000000)
                  + auVar47._0_4_;
        iVar241 = SUB164(register0x00001340,4) + auVar259._4_4_ + _UNK_001076e4 +
                  (auVar328._4_4_ >> 6 ^ auVar328._4_4_ * 0x80 ^ auVar328._4_4_ >> 0xb ^
                   auVar328._4_4_ * 0x200000 ^ auVar328._4_4_ >> 0x19 ^ auVar328._4_4_ * 0x4000000)
                  + auVar47._4_4_;
        iVar242 = SUB164(register0x00001340,8) + auVar259._8_4_ + _UNK_001076e8 +
                  (auVar328._8_4_ >> 6 ^ auVar328._8_4_ * 0x80 ^ auVar328._8_4_ >> 0xb ^
                   auVar328._8_4_ * 0x200000 ^ auVar328._8_4_ >> 0x19 ^ auVar328._8_4_ * 0x4000000)
                  + auVar47._8_4_;
        iVar243 = SUB164(register0x00001340,0xc) + auVar259._12_4_ + _UNK_001076ec +
                  (auVar328._12_4_ >> 6 ^ auVar328._12_4_ * 0x80 ^ auVar328._12_4_ >> 0xb ^
                   auVar328._12_4_ * 0x200000 ^ auVar328._12_4_ >> 0x19 ^
                  auVar328._12_4_ * 0x4000000) + auVar47._12_4_;
        auVar47 = auVar290 ^ (auVar303 ^ auVar290) & (auVar290 ^ auVar275);
        auVar316._0_4_ = auVar315._0_4_ + iVar122;
        auVar316._4_4_ = auVar315._4_4_ + iVar241;
        auVar316._8_4_ = auVar315._8_4_ + iVar242;
        auVar316._12_4_ = auVar315._12_4_ + iVar243;
        auVar260._0_4_ =
             auVar47._0_4_ + iVar122 +
             (auVar275._0_4_ >> 0x16 ^
              auVar275._0_4_ >> 2 ^ auVar275._0_4_ * 0x400 ^ auVar275._0_4_ >> 0xd ^
              auVar275._0_4_ * 0x80000 ^ auVar275._0_4_ * 0x40000000);
        auVar260._4_4_ =
             auVar47._4_4_ + iVar241 +
             (auVar275._4_4_ >> 0x16 ^
              auVar275._4_4_ >> 2 ^ auVar275._4_4_ * 0x400 ^ auVar275._4_4_ >> 0xd ^
              auVar275._4_4_ * 0x80000 ^ auVar275._4_4_ * 0x40000000);
        auVar260._8_4_ =
             auVar47._8_4_ + iVar242 +
             (auVar275._8_4_ >> 0x16 ^
              auVar275._8_4_ >> 2 ^ auVar275._8_4_ * 0x400 ^ auVar275._8_4_ >> 0xd ^
              auVar275._8_4_ * 0x80000 ^ auVar275._8_4_ * 0x40000000);
        auVar260._12_4_ =
             auVar47._12_4_ + iVar243 +
             (auVar275._12_4_ >> 0x16 ^
              auVar275._12_4_ >> 2 ^ auVar275._12_4_ * 0x400 ^ auVar275._12_4_ >> 0xd ^
              auVar275._12_4_ * 0x80000 ^ auVar275._12_4_ * 0x40000000);
        uVar62 = puVar37[8];
        auVar194._0_16_ = ZEXT416(uVar62);
        auVar194._16_48_ = auVar146._16_48_;
        auVar193._12_52_ = auVar194._12_52_;
        auVar193._4_8_ = 0;
        auVar193._0_4_ = uVar62;
        auVar192._8_56_ = auVar193._8_56_;
        auVar192._0_8_ = CONCAT44(puVar44[8],uVar62);
        auVar197._0_12_ = auVar192._0_12_;
        auVar197._12_4_ = puVar45[8];
        auVar197._16_48_ = auVar146._16_48_;
        auVar196._12_52_ = auVar197._12_52_;
        auVar196._8_4_ = puVar44[8];
        auVar196._0_8_ = auVar192._0_8_;
        auVar195._8_56_ = auVar196._8_56_;
        auVar195._4_4_ = puVar40[8];
        auVar195._0_4_ = uVar62;
        local_180._0_16_ = pshufb(auVar195._0_16_,auVar117);
        auVar47 = ~auVar316 & auVar344 ^ auVar316 & auVar328;
        iVar122 = SUB164(local_180._0_16_,0) + auVar354._0_4_ + _DAT_00107700 +
                  (auVar316._0_4_ >> 6 ^ auVar316._0_4_ * 0x80 ^ auVar316._0_4_ >> 0xb ^
                   auVar316._0_4_ * 0x200000 ^ auVar316._0_4_ >> 0x19 ^ auVar316._0_4_ * 0x4000000)
                  + auVar47._0_4_;
        iVar241 = SUB164(local_180._0_16_,4) + auVar354._4_4_ + _UNK_00107704 +
                  (auVar316._4_4_ >> 6 ^ auVar316._4_4_ * 0x80 ^ auVar316._4_4_ >> 0xb ^
                   auVar316._4_4_ * 0x200000 ^ auVar316._4_4_ >> 0x19 ^ auVar316._4_4_ * 0x4000000)
                  + auVar47._4_4_;
        iVar242 = SUB164(local_180._0_16_,8) + auVar354._8_4_ + _UNK_00107708 +
                  (auVar316._8_4_ >> 6 ^ auVar316._8_4_ * 0x80 ^ auVar316._8_4_ >> 0xb ^
                   auVar316._8_4_ * 0x200000 ^ auVar316._8_4_ >> 0x19 ^ auVar316._8_4_ * 0x4000000)
                  + auVar47._8_4_;
        iVar243 = SUB164(local_180._0_16_,0xc) + auVar354._12_4_ + _UNK_0010770c +
                  (auVar316._12_4_ >> 6 ^ auVar316._12_4_ * 0x80 ^ auVar316._12_4_ >> 0xb ^
                   auVar316._12_4_ * 0x200000 ^ auVar316._12_4_ >> 0x19 ^
                  auVar316._12_4_ * 0x4000000) + auVar47._12_4_;
        auVar47 = auVar275 ^ (auVar290 ^ auVar275) & (auVar275 ^ auVar260);
        auVar304._0_4_ = auVar303._0_4_ + iVar122;
        auVar304._4_4_ = auVar303._4_4_ + iVar241;
        auVar304._8_4_ = auVar303._8_4_ + iVar242;
        auVar304._12_4_ = auVar303._12_4_ + iVar243;
        auVar355._0_4_ =
             auVar47._0_4_ + iVar122 +
             (auVar260._0_4_ >> 0x16 ^
              auVar260._0_4_ >> 2 ^ auVar260._0_4_ * 0x400 ^ auVar260._0_4_ >> 0xd ^
              auVar260._0_4_ * 0x80000 ^ auVar260._0_4_ * 0x40000000);
        auVar355._4_4_ =
             auVar47._4_4_ + iVar241 +
             (auVar260._4_4_ >> 0x16 ^
              auVar260._4_4_ >> 2 ^ auVar260._4_4_ * 0x400 ^ auVar260._4_4_ >> 0xd ^
              auVar260._4_4_ * 0x80000 ^ auVar260._4_4_ * 0x40000000);
        auVar355._8_4_ =
             auVar47._8_4_ + iVar242 +
             (auVar260._8_4_ >> 0x16 ^
              auVar260._8_4_ >> 2 ^ auVar260._8_4_ * 0x400 ^ auVar260._8_4_ >> 0xd ^
              auVar260._8_4_ * 0x80000 ^ auVar260._8_4_ * 0x40000000);
        auVar355._12_4_ =
             auVar47._12_4_ + iVar243 +
             (auVar260._12_4_ >> 0x16 ^
              auVar260._12_4_ >> 2 ^ auVar260._12_4_ * 0x400 ^ auVar260._12_4_ >> 0xd ^
              auVar260._12_4_ * 0x80000 ^ auVar260._12_4_ * 0x40000000);
        uVar62 = puVar37[9];
        auVar200._0_16_ = ZEXT416(uVar62);
        auVar200._16_48_ = auVar146._16_48_;
        auVar199._12_52_ = auVar200._12_52_;
        auVar199._4_8_ = 0;
        auVar199._0_4_ = uVar62;
        auVar198._8_56_ = auVar199._8_56_;
        auVar198._0_8_ = CONCAT44(puVar44[9],uVar62);
        auVar203._0_12_ = auVar198._0_12_;
        auVar203._12_4_ = puVar45[9];
        auVar203._16_48_ = auVar146._16_48_;
        auVar202._12_52_ = auVar203._12_52_;
        auVar202._8_4_ = puVar44[9];
        auVar202._0_8_ = auVar198._0_8_;
        auVar201._8_56_ = auVar202._8_56_;
        auVar201._4_4_ = puVar40[9];
        auVar201._0_4_ = uVar62;
        register0x00001340 = pshufb(auVar201._0_16_,auVar117);
        auVar47 = ~auVar304 & auVar328 ^ auVar304 & auVar316;
        iVar122 = SUB164(register0x00001340,0) + auVar344._0_4_ + _DAT_00107720 +
                  (auVar304._0_4_ >> 6 ^ auVar304._0_4_ * 0x80 ^ auVar304._0_4_ >> 0xb ^
                   auVar304._0_4_ * 0x200000 ^ auVar304._0_4_ >> 0x19 ^ auVar304._0_4_ * 0x4000000)
                  + auVar47._0_4_;
        iVar241 = SUB164(register0x00001340,4) + auVar344._4_4_ + _UNK_00107724 +
                  (auVar304._4_4_ >> 6 ^ auVar304._4_4_ * 0x80 ^ auVar304._4_4_ >> 0xb ^
                   auVar304._4_4_ * 0x200000 ^ auVar304._4_4_ >> 0x19 ^ auVar304._4_4_ * 0x4000000)
                  + auVar47._4_4_;
        iVar242 = SUB164(register0x00001340,8) + auVar344._8_4_ + _UNK_00107728 +
                  (auVar304._8_4_ >> 6 ^ auVar304._8_4_ * 0x80 ^ auVar304._8_4_ >> 0xb ^
                   auVar304._8_4_ * 0x200000 ^ auVar304._8_4_ >> 0x19 ^ auVar304._8_4_ * 0x4000000)
                  + auVar47._8_4_;
        iVar243 = SUB164(register0x00001340,0xc) + auVar344._12_4_ + _UNK_0010772c +
                  (auVar304._12_4_ >> 6 ^ auVar304._12_4_ * 0x80 ^ auVar304._12_4_ >> 0xb ^
                   auVar304._12_4_ * 0x200000 ^ auVar304._12_4_ >> 0x19 ^
                  auVar304._12_4_ * 0x4000000) + auVar47._12_4_;
        auVar47 = auVar260 ^ (auVar275 ^ auVar260) & (auVar260 ^ auVar355);
        auVar291._0_4_ = auVar290._0_4_ + iVar122;
        auVar291._4_4_ = auVar290._4_4_ + iVar241;
        auVar291._8_4_ = auVar290._8_4_ + iVar242;
        auVar291._12_4_ = auVar290._12_4_ + iVar243;
        auVar345._0_4_ =
             auVar47._0_4_ + iVar122 +
             (auVar355._0_4_ >> 0x16 ^
              auVar355._0_4_ >> 2 ^ auVar355._0_4_ * 0x400 ^ auVar355._0_4_ >> 0xd ^
              auVar355._0_4_ * 0x80000 ^ auVar355._0_4_ * 0x40000000);
        auVar345._4_4_ =
             auVar47._4_4_ + iVar241 +
             (auVar355._4_4_ >> 0x16 ^
              auVar355._4_4_ >> 2 ^ auVar355._4_4_ * 0x400 ^ auVar355._4_4_ >> 0xd ^
              auVar355._4_4_ * 0x80000 ^ auVar355._4_4_ * 0x40000000);
        auVar345._8_4_ =
             auVar47._8_4_ + iVar242 +
             (auVar355._8_4_ >> 0x16 ^
              auVar355._8_4_ >> 2 ^ auVar355._8_4_ * 0x400 ^ auVar355._8_4_ >> 0xd ^
              auVar355._8_4_ * 0x80000 ^ auVar355._8_4_ * 0x40000000);
        auVar345._12_4_ =
             auVar47._12_4_ + iVar243 +
             (auVar355._12_4_ >> 0x16 ^
              auVar355._12_4_ >> 2 ^ auVar355._12_4_ * 0x400 ^ auVar355._12_4_ >> 0xd ^
              auVar355._12_4_ * 0x80000 ^ auVar355._12_4_ * 0x40000000);
        uVar62 = puVar37[10];
        auVar206._0_16_ = ZEXT416(uVar62);
        auVar206._16_48_ = auVar146._16_48_;
        auVar205._12_52_ = auVar206._12_52_;
        auVar205._4_8_ = 0;
        auVar205._0_4_ = uVar62;
        auVar204._8_56_ = auVar205._8_56_;
        auVar204._0_8_ = CONCAT44(puVar44[10],uVar62);
        auVar209._0_12_ = auVar204._0_12_;
        auVar209._12_4_ = puVar45[10];
        auVar209._16_48_ = auVar146._16_48_;
        auVar208._12_52_ = auVar209._12_52_;
        auVar208._8_4_ = puVar44[10];
        auVar208._0_8_ = auVar204._0_8_;
        auVar207._8_56_ = auVar208._8_56_;
        auVar207._4_4_ = puVar40[10];
        auVar207._0_4_ = uVar62;
        local_160._0_16_ = pshufb(auVar207._0_16_,auVar117);
        auVar47 = ~auVar291 & auVar316 ^ auVar291 & auVar304;
        iVar122 = SUB164(local_160._0_16_,0) + auVar328._0_4_ + _DAT_00107740 +
                  (auVar291._0_4_ >> 6 ^ auVar291._0_4_ * 0x80 ^ auVar291._0_4_ >> 0xb ^
                   auVar291._0_4_ * 0x200000 ^ auVar291._0_4_ >> 0x19 ^ auVar291._0_4_ * 0x4000000)
                  + auVar47._0_4_;
        iVar241 = SUB164(local_160._0_16_,4) + auVar328._4_4_ + _UNK_00107744 +
                  (auVar291._4_4_ >> 6 ^ auVar291._4_4_ * 0x80 ^ auVar291._4_4_ >> 0xb ^
                   auVar291._4_4_ * 0x200000 ^ auVar291._4_4_ >> 0x19 ^ auVar291._4_4_ * 0x4000000)
                  + auVar47._4_4_;
        iVar242 = SUB164(local_160._0_16_,8) + auVar328._8_4_ + _UNK_00107748 +
                  (auVar291._8_4_ >> 6 ^ auVar291._8_4_ * 0x80 ^ auVar291._8_4_ >> 0xb ^
                   auVar291._8_4_ * 0x200000 ^ auVar291._8_4_ >> 0x19 ^ auVar291._8_4_ * 0x4000000)
                  + auVar47._8_4_;
        iVar243 = SUB164(local_160._0_16_,0xc) + auVar328._12_4_ + _UNK_0010774c +
                  (auVar291._12_4_ >> 6 ^ auVar291._12_4_ * 0x80 ^ auVar291._12_4_ >> 0xb ^
                   auVar291._12_4_ * 0x200000 ^ auVar291._12_4_ >> 0x19 ^
                  auVar291._12_4_ * 0x4000000) + auVar47._12_4_;
        auVar47 = auVar355 ^ (auVar260 ^ auVar355) & (auVar355 ^ auVar345);
        auVar276._0_4_ = auVar275._0_4_ + iVar122;
        auVar276._4_4_ = auVar275._4_4_ + iVar241;
        auVar276._8_4_ = auVar275._8_4_ + iVar242;
        auVar276._12_4_ = auVar275._12_4_ + iVar243;
        auVar329._0_4_ =
             auVar47._0_4_ + iVar122 +
             (auVar345._0_4_ >> 0x16 ^
              auVar345._0_4_ >> 2 ^ auVar345._0_4_ * 0x400 ^ auVar345._0_4_ >> 0xd ^
              auVar345._0_4_ * 0x80000 ^ auVar345._0_4_ * 0x40000000);
        auVar329._4_4_ =
             auVar47._4_4_ + iVar241 +
             (auVar345._4_4_ >> 0x16 ^
              auVar345._4_4_ >> 2 ^ auVar345._4_4_ * 0x400 ^ auVar345._4_4_ >> 0xd ^
              auVar345._4_4_ * 0x80000 ^ auVar345._4_4_ * 0x40000000);
        auVar329._8_4_ =
             auVar47._8_4_ + iVar242 +
             (auVar345._8_4_ >> 0x16 ^
              auVar345._8_4_ >> 2 ^ auVar345._8_4_ * 0x400 ^ auVar345._8_4_ >> 0xd ^
              auVar345._8_4_ * 0x80000 ^ auVar345._8_4_ * 0x40000000);
        auVar329._12_4_ =
             auVar47._12_4_ + iVar243 +
             (auVar345._12_4_ >> 0x16 ^
              auVar345._12_4_ >> 2 ^ auVar345._12_4_ * 0x400 ^ auVar345._12_4_ >> 0xd ^
              auVar345._12_4_ * 0x80000 ^ auVar345._12_4_ * 0x40000000);
        uVar62 = puVar37[0xb];
        auVar212._0_16_ = ZEXT416(uVar62);
        auVar212._16_48_ = auVar146._16_48_;
        auVar211._12_52_ = auVar212._12_52_;
        auVar211._4_8_ = 0;
        auVar211._0_4_ = uVar62;
        auVar210._8_56_ = auVar211._8_56_;
        auVar210._0_8_ = CONCAT44(puVar44[0xb],uVar62);
        auVar215._0_12_ = auVar210._0_12_;
        auVar215._12_4_ = puVar45[0xb];
        auVar215._16_48_ = auVar146._16_48_;
        auVar214._12_52_ = auVar215._12_52_;
        auVar214._8_4_ = puVar44[0xb];
        auVar214._0_8_ = auVar210._0_8_;
        auVar213._8_56_ = auVar214._8_56_;
        auVar213._4_4_ = puVar40[0xb];
        auVar213._0_4_ = uVar62;
        register0x00001340 = pshufb(auVar213._0_16_,auVar117);
        auVar47 = ~auVar276 & auVar304 ^ auVar276 & auVar291;
        iVar122 = SUB164(register0x00001340,0) + auVar316._0_4_ + _DAT_00107760 +
                  (auVar276._0_4_ >> 6 ^ auVar276._0_4_ * 0x80 ^ auVar276._0_4_ >> 0xb ^
                   auVar276._0_4_ * 0x200000 ^ auVar276._0_4_ >> 0x19 ^ auVar276._0_4_ * 0x4000000)
                  + auVar47._0_4_;
        iVar241 = SUB164(register0x00001340,4) + auVar316._4_4_ + _UNK_00107764 +
                  (auVar276._4_4_ >> 6 ^ auVar276._4_4_ * 0x80 ^ auVar276._4_4_ >> 0xb ^
                   auVar276._4_4_ * 0x200000 ^ auVar276._4_4_ >> 0x19 ^ auVar276._4_4_ * 0x4000000)
                  + auVar47._4_4_;
        iVar242 = SUB164(register0x00001340,8) + auVar316._8_4_ + _UNK_00107768 +
                  (auVar276._8_4_ >> 6 ^ auVar276._8_4_ * 0x80 ^ auVar276._8_4_ >> 0xb ^
                   auVar276._8_4_ * 0x200000 ^ auVar276._8_4_ >> 0x19 ^ auVar276._8_4_ * 0x4000000)
                  + auVar47._8_4_;
        iVar243 = SUB164(register0x00001340,0xc) + auVar316._12_4_ + _UNK_0010776c +
                  (auVar276._12_4_ >> 6 ^ auVar276._12_4_ * 0x80 ^ auVar276._12_4_ >> 0xb ^
                   auVar276._12_4_ * 0x200000 ^ auVar276._12_4_ >> 0x19 ^
                  auVar276._12_4_ * 0x4000000) + auVar47._12_4_;
        auVar47 = auVar345 ^ (auVar355 ^ auVar345) & (auVar345 ^ auVar329);
        auVar261._0_4_ = auVar260._0_4_ + iVar122;
        auVar261._4_4_ = auVar260._4_4_ + iVar241;
        auVar261._8_4_ = auVar260._8_4_ + iVar242;
        auVar261._12_4_ = auVar260._12_4_ + iVar243;
        auVar317._0_4_ =
             auVar47._0_4_ + iVar122 +
             (auVar329._0_4_ >> 0x16 ^
              auVar329._0_4_ >> 2 ^ auVar329._0_4_ * 0x400 ^ auVar329._0_4_ >> 0xd ^
              auVar329._0_4_ * 0x80000 ^ auVar329._0_4_ * 0x40000000);
        auVar317._4_4_ =
             auVar47._4_4_ + iVar241 +
             (auVar329._4_4_ >> 0x16 ^
              auVar329._4_4_ >> 2 ^ auVar329._4_4_ * 0x400 ^ auVar329._4_4_ >> 0xd ^
              auVar329._4_4_ * 0x80000 ^ auVar329._4_4_ * 0x40000000);
        auVar317._8_4_ =
             auVar47._8_4_ + iVar242 +
             (auVar329._8_4_ >> 0x16 ^
              auVar329._8_4_ >> 2 ^ auVar329._8_4_ * 0x400 ^ auVar329._8_4_ >> 0xd ^
              auVar329._8_4_ * 0x80000 ^ auVar329._8_4_ * 0x40000000);
        auVar317._12_4_ =
             auVar47._12_4_ + iVar243 +
             (auVar329._12_4_ >> 0x16 ^
              auVar329._12_4_ >> 2 ^ auVar329._12_4_ * 0x400 ^ auVar329._12_4_ >> 0xd ^
              auVar329._12_4_ * 0x80000 ^ auVar329._12_4_ * 0x40000000);
        uVar62 = puVar37[0xc];
        auVar218._0_16_ = ZEXT416(uVar62);
        auVar218._16_48_ = auVar146._16_48_;
        auVar217._12_52_ = auVar218._12_52_;
        auVar217._4_8_ = 0;
        auVar217._0_4_ = uVar62;
        auVar216._8_56_ = auVar217._8_56_;
        auVar216._0_8_ = CONCAT44(puVar44[0xc],uVar62);
        auVar221._0_12_ = auVar216._0_12_;
        auVar221._12_4_ = puVar45[0xc];
        auVar221._16_48_ = auVar146._16_48_;
        auVar220._12_52_ = auVar221._12_52_;
        auVar220._8_4_ = puVar44[0xc];
        auVar220._0_8_ = auVar216._0_8_;
        auVar219._8_56_ = auVar220._8_56_;
        auVar219._4_4_ = puVar40[0xc];
        auVar219._0_4_ = uVar62;
        local_140._0_16_ = pshufb(auVar219._0_16_,auVar117);
        auVar47 = ~auVar261 & auVar291 ^ auVar261 & auVar276;
        iVar122 = SUB164(local_140._0_16_,0) + auVar304._0_4_ + _DAT_00107780 +
                  (auVar261._0_4_ >> 6 ^ auVar261._0_4_ * 0x80 ^ auVar261._0_4_ >> 0xb ^
                   auVar261._0_4_ * 0x200000 ^ auVar261._0_4_ >> 0x19 ^ auVar261._0_4_ * 0x4000000)
                  + auVar47._0_4_;
        iVar241 = SUB164(local_140._0_16_,4) + auVar304._4_4_ + _UNK_00107784 +
                  (auVar261._4_4_ >> 6 ^ auVar261._4_4_ * 0x80 ^ auVar261._4_4_ >> 0xb ^
                   auVar261._4_4_ * 0x200000 ^ auVar261._4_4_ >> 0x19 ^ auVar261._4_4_ * 0x4000000)
                  + auVar47._4_4_;
        iVar242 = SUB164(local_140._0_16_,8) + auVar304._8_4_ + _UNK_00107788 +
                  (auVar261._8_4_ >> 6 ^ auVar261._8_4_ * 0x80 ^ auVar261._8_4_ >> 0xb ^
                   auVar261._8_4_ * 0x200000 ^ auVar261._8_4_ >> 0x19 ^ auVar261._8_4_ * 0x4000000)
                  + auVar47._8_4_;
        iVar243 = SUB164(local_140._0_16_,0xc) + auVar304._12_4_ + _UNK_0010778c +
                  (auVar261._12_4_ >> 6 ^ auVar261._12_4_ * 0x80 ^ auVar261._12_4_ >> 0xb ^
                   auVar261._12_4_ * 0x200000 ^ auVar261._12_4_ >> 0x19 ^
                  auVar261._12_4_ * 0x4000000) + auVar47._12_4_;
        auVar47 = auVar329 ^ (auVar345 ^ auVar329) & (auVar329 ^ auVar317);
        auVar356._0_4_ = auVar355._0_4_ + iVar122;
        auVar356._4_4_ = auVar355._4_4_ + iVar241;
        auVar356._8_4_ = auVar355._8_4_ + iVar242;
        auVar356._12_4_ = auVar355._12_4_ + iVar243;
        auVar364._0_16_ = auVar356;
        auVar305._0_4_ =
             auVar47._0_4_ + iVar122 +
             (auVar317._0_4_ >> 0x16 ^
              auVar317._0_4_ >> 2 ^ auVar317._0_4_ * 0x400 ^ auVar317._0_4_ >> 0xd ^
              auVar317._0_4_ * 0x80000 ^ auVar317._0_4_ * 0x40000000);
        auVar305._4_4_ =
             auVar47._4_4_ + iVar241 +
             (auVar317._4_4_ >> 0x16 ^
              auVar317._4_4_ >> 2 ^ auVar317._4_4_ * 0x400 ^ auVar317._4_4_ >> 0xd ^
              auVar317._4_4_ * 0x80000 ^ auVar317._4_4_ * 0x40000000);
        auVar305._8_4_ =
             auVar47._8_4_ + iVar242 +
             (auVar317._8_4_ >> 0x16 ^
              auVar317._8_4_ >> 2 ^ auVar317._8_4_ * 0x400 ^ auVar317._8_4_ >> 0xd ^
              auVar317._8_4_ * 0x80000 ^ auVar317._8_4_ * 0x40000000);
        auVar305._12_4_ =
             auVar47._12_4_ + iVar243 +
             (auVar317._12_4_ >> 0x16 ^
              auVar317._12_4_ >> 2 ^ auVar317._12_4_ * 0x400 ^ auVar317._12_4_ >> 0xd ^
              auVar317._12_4_ * 0x80000 ^ auVar317._12_4_ * 0x40000000);
        auVar314._0_16_ = auVar305;
        uVar62 = puVar37[0xd];
        auVar224._0_16_ = ZEXT416(uVar62);
        auVar224._16_48_ = auVar146._16_48_;
        auVar223._12_52_ = auVar224._12_52_;
        auVar223._4_8_ = 0;
        auVar223._0_4_ = uVar62;
        auVar222._8_56_ = auVar223._8_56_;
        auVar222._0_8_ = CONCAT44(puVar44[0xd],uVar62);
        auVar227._0_12_ = auVar222._0_12_;
        auVar227._12_4_ = puVar45[0xd];
        auVar227._16_48_ = auVar146._16_48_;
        auVar226._12_52_ = auVar227._12_52_;
        auVar226._8_4_ = puVar44[0xd];
        auVar226._0_8_ = auVar222._0_8_;
        auVar225._8_56_ = auVar226._8_56_;
        auVar225._4_4_ = puVar40[0xd];
        auVar225._0_4_ = uVar62;
        register0x00001340 = pshufb(auVar225._0_16_,auVar117);
        auVar47 = ~auVar356 & auVar276 ^ auVar356 & auVar261;
        iVar122 = SUB164(register0x00001340,0) + auVar291._0_4_ + _DAT_001077a0 +
                  (auVar356._0_4_ >> 6 ^ auVar356._0_4_ * 0x80 ^ auVar356._0_4_ >> 0xb ^
                   auVar356._0_4_ * 0x200000 ^ auVar356._0_4_ >> 0x19 ^ auVar356._0_4_ * 0x4000000)
                  + auVar47._0_4_;
        iVar241 = SUB164(register0x00001340,4) + auVar291._4_4_ + _UNK_001077a4 +
                  (auVar356._4_4_ >> 6 ^ auVar356._4_4_ * 0x80 ^ auVar356._4_4_ >> 0xb ^
                   auVar356._4_4_ * 0x200000 ^ auVar356._4_4_ >> 0x19 ^ auVar356._4_4_ * 0x4000000)
                  + auVar47._4_4_;
        iVar242 = SUB164(register0x00001340,8) + auVar291._8_4_ + _UNK_001077a8 +
                  (auVar356._8_4_ >> 6 ^ auVar356._8_4_ * 0x80 ^ auVar356._8_4_ >> 0xb ^
                   auVar356._8_4_ * 0x200000 ^ auVar356._8_4_ >> 0x19 ^ auVar356._8_4_ * 0x4000000)
                  + auVar47._8_4_;
        iVar243 = SUB164(register0x00001340,0xc) + auVar291._12_4_ + _UNK_001077ac +
                  (auVar356._12_4_ >> 6 ^ auVar356._12_4_ * 0x80 ^ auVar356._12_4_ >> 0xb ^
                   auVar356._12_4_ * 0x200000 ^ auVar356._12_4_ >> 0x19 ^
                  auVar356._12_4_ * 0x4000000) + auVar47._12_4_;
        auVar47 = auVar317 ^ (auVar329 ^ auVar317) & (auVar317 ^ auVar305);
        auVar346._0_4_ = auVar345._0_4_ + iVar122;
        auVar346._4_4_ = auVar345._4_4_ + iVar241;
        auVar346._8_4_ = auVar345._8_4_ + iVar242;
        auVar346._12_4_ = auVar345._12_4_ + iVar243;
        auVar352._0_16_ = auVar346;
        auVar262._0_4_ =
             auVar47._0_4_ + iVar122 +
             (auVar305._0_4_ >> 0x16 ^
              auVar305._0_4_ >> 2 ^ auVar305._0_4_ * 0x400 ^ auVar305._0_4_ >> 0xd ^
              auVar305._0_4_ * 0x80000 ^ auVar305._0_4_ * 0x40000000);
        auVar262._4_4_ =
             auVar47._4_4_ + iVar241 +
             (auVar305._4_4_ >> 0x16 ^
              auVar305._4_4_ >> 2 ^ auVar305._4_4_ * 0x400 ^ auVar305._4_4_ >> 0xd ^
              auVar305._4_4_ * 0x80000 ^ auVar305._4_4_ * 0x40000000);
        auVar262._8_4_ =
             auVar47._8_4_ + iVar242 +
             (auVar305._8_4_ >> 0x16 ^
              auVar305._8_4_ >> 2 ^ auVar305._8_4_ * 0x400 ^ auVar305._8_4_ >> 0xd ^
              auVar305._8_4_ * 0x80000 ^ auVar305._8_4_ * 0x40000000);
        auVar262._12_4_ =
             auVar47._12_4_ + iVar243 +
             (auVar305._12_4_ >> 0x16 ^
              auVar305._12_4_ >> 2 ^ auVar305._12_4_ * 0x400 ^ auVar305._12_4_ >> 0xd ^
              auVar305._12_4_ * 0x80000 ^ auVar305._12_4_ * 0x40000000);
        auVar301._0_16_ = auVar262;
        uVar62 = puVar37[0xe];
        auVar230._0_16_ = ZEXT416(uVar62);
        auVar230._16_48_ = auVar146._16_48_;
        auVar229._12_52_ = auVar230._12_52_;
        auVar229._4_8_ = 0;
        auVar229._0_4_ = uVar62;
        auVar228._8_56_ = auVar229._8_56_;
        auVar228._0_8_ = CONCAT44(puVar44[0xe],uVar62);
        auVar233._0_12_ = auVar228._0_12_;
        auVar233._12_4_ = puVar45[0xe];
        auVar233._16_48_ = auVar146._16_48_;
        auVar232._12_52_ = auVar233._12_52_;
        auVar232._8_4_ = puVar44[0xe];
        auVar232._0_8_ = auVar228._0_8_;
        auVar231._8_56_ = auVar232._8_56_;
        auVar231._4_4_ = puVar40[0xe];
        auVar231._0_4_ = uVar62;
        local_120._0_16_ = pshufb(auVar231._0_16_,auVar117);
        auVar47 = ~auVar346 & auVar261 ^ auVar346 & auVar356;
        iVar122 = SUB164(local_120._0_16_,0) + auVar276._0_4_ + _DAT_001077c0 +
                  (auVar346._0_4_ >> 6 ^ auVar346._0_4_ * 0x80 ^ auVar346._0_4_ >> 0xb ^
                   auVar346._0_4_ * 0x200000 ^ auVar346._0_4_ >> 0x19 ^ auVar346._0_4_ * 0x4000000)
                  + auVar47._0_4_;
        iVar241 = SUB164(local_120._0_16_,4) + auVar276._4_4_ + _UNK_001077c4 +
                  (auVar346._4_4_ >> 6 ^ auVar346._4_4_ * 0x80 ^ auVar346._4_4_ >> 0xb ^
                   auVar346._4_4_ * 0x200000 ^ auVar346._4_4_ >> 0x19 ^ auVar346._4_4_ * 0x4000000)
                  + auVar47._4_4_;
        iVar242 = SUB164(local_120._0_16_,8) + auVar276._8_4_ + _UNK_001077c8 +
                  (auVar346._8_4_ >> 6 ^ auVar346._8_4_ * 0x80 ^ auVar346._8_4_ >> 0xb ^
                   auVar346._8_4_ * 0x200000 ^ auVar346._8_4_ >> 0x19 ^ auVar346._8_4_ * 0x4000000)
                  + auVar47._8_4_;
        iVar243 = SUB164(local_120._0_16_,0xc) + auVar276._12_4_ + _UNK_001077cc +
                  (auVar346._12_4_ >> 6 ^ auVar346._12_4_ * 0x80 ^ auVar346._12_4_ >> 0xb ^
                   auVar346._12_4_ * 0x200000 ^ auVar346._12_4_ >> 0x19 ^
                  auVar346._12_4_ * 0x4000000) + auVar47._12_4_;
        auVar47 = auVar305 ^ (auVar317 ^ auVar305) & (auVar305 ^ auVar262);
        auVar330._0_4_ = auVar329._0_4_ + iVar122;
        auVar330._4_4_ = auVar329._4_4_ + iVar241;
        auVar330._8_4_ = auVar329._8_4_ + iVar242;
        auVar330._12_4_ = auVar329._12_4_ + iVar243;
        auVar339._0_16_ = auVar330;
        auVar277._0_4_ =
             auVar47._0_4_ + iVar122 +
             (auVar262._0_4_ >> 0x16 ^
              auVar262._0_4_ >> 2 ^ auVar262._0_4_ * 0x400 ^ auVar262._0_4_ >> 0xd ^
              auVar262._0_4_ * 0x80000 ^ auVar262._0_4_ * 0x40000000);
        auVar277._4_4_ =
             auVar47._4_4_ + iVar241 +
             (auVar262._4_4_ >> 0x16 ^
              auVar262._4_4_ >> 2 ^ auVar262._4_4_ * 0x400 ^ auVar262._4_4_ >> 0xd ^
              auVar262._4_4_ * 0x80000 ^ auVar262._4_4_ * 0x40000000);
        auVar277._8_4_ =
             auVar47._8_4_ + iVar242 +
             (auVar262._8_4_ >> 0x16 ^
              auVar262._8_4_ >> 2 ^ auVar262._8_4_ * 0x400 ^ auVar262._8_4_ >> 0xd ^
              auVar262._8_4_ * 0x80000 ^ auVar262._8_4_ * 0x40000000);
        auVar277._12_4_ =
             auVar47._12_4_ + iVar243 +
             (auVar262._12_4_ >> 0x16 ^
              auVar262._12_4_ >> 2 ^ auVar262._12_4_ * 0x400 ^ auVar262._12_4_ >> 0xd ^
              auVar262._12_4_ * 0x80000 ^ auVar262._12_4_ * 0x40000000);
        auVar288._0_16_ = auVar277;
        uVar62 = puVar37[0xf];
        puVar37 = puVar37 + 0x10;
        puVar46 = puVar40 + 0xf;
        puVar40 = puVar40 + 0x10;
        puVar1 = puVar44 + 0xf;
        puVar44 = puVar44 + 0x10;
        puVar2 = puVar45 + 0xf;
        puVar45 = puVar45 + 0x10;
        auVar236._0_16_ = ZEXT416(uVar62);
        auVar236._16_48_ = auVar146._16_48_;
        auVar235._12_52_ = auVar236._12_52_;
        auVar235._4_8_ = 0;
        auVar235._0_4_ = uVar62;
        auVar234._8_56_ = auVar235._8_56_;
        auVar234._0_8_ = CONCAT44(*puVar1,uVar62);
        auVar239._0_12_ = auVar234._0_12_;
        auVar239._12_4_ = *puVar2;
        auVar239._16_48_ = auVar146._16_48_;
        auVar238._12_52_ = auVar239._12_52_;
        auVar238._8_4_ = *puVar1;
        auVar238._0_8_ = auVar234._0_8_;
        auVar237._8_56_ = auVar238._8_56_;
        auVar237._4_4_ = *puVar46;
        auVar237._0_4_ = uVar62;
        register0x00001340 = pshufb(auVar237._0_16_,auVar117);
        auVar47 = ~auVar330 & auVar356 ^ auVar330 & auVar346;
        in_ZMM4._0_16_ = auVar262 ^ auVar277;
        iVar122 = SUB164(register0x00001340,0) + auVar261._0_4_ + _DAT_001077e0 +
                  (auVar330._0_4_ >> 6 ^ auVar330._0_4_ * 0x80 ^ auVar330._0_4_ >> 0xb ^
                   auVar330._0_4_ * 0x200000 ^ auVar330._0_4_ >> 0x19 ^ auVar330._0_4_ * 0x4000000)
                  + auVar47._0_4_;
        iVar241 = SUB164(register0x00001340,4) + auVar261._4_4_ + _UNK_001077e4 +
                  (auVar330._4_4_ >> 6 ^ auVar330._4_4_ * 0x80 ^ auVar330._4_4_ >> 0xb ^
                   auVar330._4_4_ * 0x200000 ^ auVar330._4_4_ >> 0x19 ^ auVar330._4_4_ * 0x4000000)
                  + auVar47._4_4_;
        iVar242 = SUB164(register0x00001340,8) + auVar261._8_4_ + _UNK_001077e8 +
                  (auVar330._8_4_ >> 6 ^ auVar330._8_4_ * 0x80 ^ auVar330._8_4_ >> 0xb ^
                   auVar330._8_4_ * 0x200000 ^ auVar330._8_4_ >> 0x19 ^ auVar330._8_4_ * 0x4000000)
                  + auVar47._8_4_;
        iVar243 = SUB164(register0x00001340,0xc) + auVar261._12_4_ + _UNK_001077ec +
                  (auVar330._12_4_ >> 6 ^ auVar330._12_4_ * 0x80 ^ auVar330._12_4_ >> 0xb ^
                   auVar330._12_4_ * 0x200000 ^ auVar330._12_4_ >> 0x19 ^
                  auVar330._12_4_ * 0x4000000) + auVar47._12_4_;
        auVar262 = auVar262 ^ (auVar305 ^ auVar262) & in_ZMM4._0_16_;
        auVar323._0_4_ = auVar317._0_4_ + iVar122;
        auVar323._4_4_ = auVar317._4_4_ + iVar241;
        auVar323._8_4_ = auVar317._8_4_ + iVar242;
        auVar323._12_4_ = auVar317._12_4_ + iVar243;
        auVar273._0_4_ =
             auVar262._0_4_ + iVar122 +
             (auVar277._0_4_ >> 0x16 ^
              auVar277._0_4_ >> 2 ^ auVar277._0_4_ * 0x400 ^ auVar277._0_4_ >> 0xd ^
              auVar277._0_4_ * 0x80000 ^ auVar277._0_4_ * 0x40000000);
        auVar273._4_4_ =
             auVar262._4_4_ + iVar241 +
             (auVar277._4_4_ >> 0x16 ^
              auVar277._4_4_ >> 2 ^ auVar277._4_4_ * 0x400 ^ auVar277._4_4_ >> 0xd ^
              auVar277._4_4_ * 0x80000 ^ auVar277._4_4_ * 0x40000000);
        auVar273._8_4_ =
             auVar262._8_4_ + iVar242 +
             (auVar277._8_4_ >> 0x16 ^
              auVar277._8_4_ >> 2 ^ auVar277._8_4_ * 0x400 ^ auVar277._8_4_ >> 0xd ^
              auVar277._8_4_ * 0x80000 ^ auVar277._8_4_ * 0x40000000);
        auVar273._12_4_ =
             auVar262._12_4_ + iVar243 +
             (auVar277._12_4_ >> 0x16 ^
              auVar277._12_4_ >> 2 ^ auVar277._12_4_ * 0x400 ^ auVar277._12_4_ >> 0xd ^
              auVar277._12_4_ * 0x80000 ^ auVar277._12_4_ * 0x40000000);
        piVar35 = (int *)&DAT_00107880;
        auVar240._16_48_ = auVar146._16_48_;
        iVar122 = 3;
        do {
          local_200._0_4_ =
               auVar240._0_4_ + local_180._16_4_ +
               ((uint)local_200._16_4_ >> 3 ^ (uint)local_200._16_4_ >> 7 ^ local_200._16_4_ << 0xe
                ^ (uint)local_200._16_4_ >> 0x12 ^ local_200._16_4_ << 0x19) +
               ((uint)local_120._0_4_ >> 10 ^ (uint)local_120._0_4_ >> 0x11 ^ local_120._0_4_ << 0xd
                ^ (uint)local_120._0_4_ >> 0x13 ^ local_120._0_4_ << 0xf);
          local_200._4_4_ =
               auVar240._4_4_ + uStack_16c +
               (uStack_1ec >> 3 ^ uStack_1ec >> 7 ^ uStack_1ec << 0xe ^ uStack_1ec >> 0x12 ^
               uStack_1ec << 0x19) +
               ((uint)local_120._4_4_ >> 10 ^ (uint)local_120._4_4_ >> 0x11 ^ local_120._4_4_ << 0xd
                ^ (uint)local_120._4_4_ >> 0x13 ^ local_120._4_4_ << 0xf);
          local_200._8_4_ =
               auVar240._8_4_ + uStack_168 +
               (uStack_1e8 >> 3 ^ uStack_1e8 >> 7 ^ uStack_1e8 << 0xe ^ uStack_1e8 >> 0x12 ^
               uStack_1e8 << 0x19) +
               ((uint)local_120._8_4_ >> 10 ^ (uint)local_120._8_4_ >> 0x11 ^ local_120._8_4_ << 0xd
                ^ (uint)local_120._8_4_ >> 0x13 ^ local_120._8_4_ << 0xf);
          local_200._12_4_ =
               auVar240._12_4_ + uStack_164 +
               (uStack_1e4 >> 3 ^ uStack_1e4 >> 7 ^ uStack_1e4 << 0xe ^ uStack_1e4 >> 0x12 ^
               uStack_1e4 << 0x19) +
               ((uint)local_120._12_4_ >> 10 ^ (uint)local_120._12_4_ >> 0x11 ^
                local_120._12_4_ << 0xd ^ (uint)local_120._12_4_ >> 0x13 ^ local_120._12_4_ << 0xf);
          auVar336 = auVar323._0_16_;
          uVar94 = auVar323._0_4_;
          uVar250 = auVar323._4_4_;
          uVar256 = auVar323._8_4_;
          uVar257 = auVar323._12_4_;
          auVar337 = auVar273._0_16_;
          uVar62 = auVar273._0_4_;
          uVar61 = auVar273._4_4_;
          uVar92 = auVar273._8_4_;
          uVar93 = auVar273._12_4_;
          auVar47 = ~auVar336 & auVar352._0_16_ ^ auVar336 & auVar339._0_16_;
          auVar117 = auVar288._0_16_ ^ auVar337;
          iVar241 = local_200._0_4_ + auVar364._0_4_ + piVar35[-0x20] +
                    (uVar94 >> 6 ^ uVar94 << 7 ^ uVar94 >> 0xb ^ uVar94 << 0x15 ^ uVar94 >> 0x19 ^
                    uVar94 << 0x1a) + auVar47._0_4_;
          iVar242 = local_200._4_4_ + auVar364._4_4_ + piVar35[-0x1f] +
                    (uVar250 >> 6 ^ uVar250 << 7 ^ uVar250 >> 0xb ^ uVar250 << 0x15 ^
                     uVar250 >> 0x19 ^ uVar250 << 0x1a) + auVar47._4_4_;
          iVar243 = local_200._8_4_ + auVar364._8_4_ + piVar35[-0x1e] +
                    (uVar256 >> 6 ^ uVar256 << 7 ^ uVar256 >> 0xb ^ uVar256 << 0x15 ^
                     uVar256 >> 0x19 ^ uVar256 << 0x1a) + auVar47._8_4_;
          iVar244 = local_200._12_4_ + auVar364._12_4_ + piVar35[-0x1d] +
                    (uVar257 >> 6 ^ uVar257 << 7 ^ uVar257 >> 0xb ^ uVar257 << 0x15 ^
                     uVar257 >> 0x19 ^ uVar257 << 0x1a) + auVar47._12_4_;
          auVar47 = auVar288._0_16_ ^ in_ZMM4._0_16_ & auVar117;
          auVar306._0_4_ = auVar314._0_4_ + iVar241;
          auVar306._4_4_ = auVar314._4_4_ + iVar242;
          auVar306._8_4_ = auVar314._8_4_ + iVar243;
          auVar306._12_4_ = auVar314._12_4_ + iVar244;
          auVar357._0_4_ =
               auVar47._0_4_ + iVar241 +
               (uVar62 >> 0x16 ^ uVar62 >> 2 ^ uVar62 << 10 ^ uVar62 >> 0xd ^ uVar62 << 0x13 ^
               uVar62 << 0x1e);
          auVar357._4_4_ =
               auVar47._4_4_ + iVar242 +
               (uVar61 >> 0x16 ^ uVar61 >> 2 ^ uVar61 << 10 ^ uVar61 >> 0xd ^ uVar61 << 0x13 ^
               uVar61 << 0x1e);
          auVar357._8_4_ =
               auVar47._8_4_ + iVar243 +
               (uVar92 >> 0x16 ^ uVar92 >> 2 ^ uVar92 << 10 ^ uVar92 >> 0xd ^ uVar92 << 0x13 ^
               uVar92 << 0x1e);
          auVar357._12_4_ =
               auVar47._12_4_ + iVar244 +
               (uVar93 >> 0x16 ^ uVar93 >> 2 ^ uVar93 << 10 ^ uVar93 >> 0xd ^ uVar93 << 0x13 ^
               uVar93 << 0x1e);
          local_200._16_4_ =
               local_200._16_4_ + local_160._0_4_ +
               ((uint)local_1e0._0_4_ >> 3 ^ (uint)local_1e0._0_4_ >> 7 ^ local_1e0._0_4_ << 0xe ^
                (uint)local_1e0._0_4_ >> 0x12 ^ local_1e0._0_4_ << 0x19) +
               ((uint)local_120._16_4_ >> 10 ^ (uint)local_120._16_4_ >> 0x11 ^
                local_120._16_4_ << 0xd ^ (uint)local_120._16_4_ >> 0x13 ^ local_120._16_4_ << 0xf);
          uStack_1ec = uStack_1ec + local_160._4_4_ +
                       ((uint)local_1e0._4_4_ >> 3 ^ (uint)local_1e0._4_4_ >> 7 ^
                        local_1e0._4_4_ << 0xe ^ (uint)local_1e0._4_4_ >> 0x12 ^
                       local_1e0._4_4_ << 0x19) +
                       (uStack_10c >> 10 ^ uStack_10c >> 0x11 ^ uStack_10c << 0xd ^
                        uStack_10c >> 0x13 ^ uStack_10c << 0xf);
          uStack_1e8 = uStack_1e8 + local_160._8_4_ +
                       ((uint)local_1e0._8_4_ >> 3 ^ (uint)local_1e0._8_4_ >> 7 ^
                        local_1e0._8_4_ << 0xe ^ (uint)local_1e0._8_4_ >> 0x12 ^
                       local_1e0._8_4_ << 0x19) +
                       (uStack_108 >> 10 ^ uStack_108 >> 0x11 ^ uStack_108 << 0xd ^
                        uStack_108 >> 0x13 ^ uStack_108 << 0xf);
          uStack_1e4 = uStack_1e4 + local_160._12_4_ +
                       ((uint)local_1e0._12_4_ >> 3 ^ (uint)local_1e0._12_4_ >> 7 ^
                        local_1e0._12_4_ << 0xe ^ (uint)local_1e0._12_4_ >> 0x12 ^
                       local_1e0._12_4_ << 0x19) +
                       (uStack_104 >> 10 ^ uStack_104 >> 0x11 ^ uStack_104 << 0xd ^
                        uStack_104 >> 0x13 ^ uStack_104 << 0xf);
          auVar47 = ~auVar306 & auVar339._0_16_ ^ auVar306 & auVar336;
          iVar241 = local_200._16_4_ + auVar352._0_4_ + piVar35[-0x18] +
                    (auVar306._0_4_ >> 6 ^ auVar306._0_4_ * 0x80 ^ auVar306._0_4_ >> 0xb ^
                     auVar306._0_4_ * 0x200000 ^ auVar306._0_4_ >> 0x19 ^ auVar306._0_4_ * 0x4000000
                    ) + auVar47._0_4_;
          iVar242 = uStack_1ec + auVar352._4_4_ + piVar35[-0x17] +
                    (auVar306._4_4_ >> 6 ^ auVar306._4_4_ * 0x80 ^ auVar306._4_4_ >> 0xb ^
                     auVar306._4_4_ * 0x200000 ^ auVar306._4_4_ >> 0x19 ^ auVar306._4_4_ * 0x4000000
                    ) + auVar47._4_4_;
          iVar243 = uStack_1e8 + auVar352._8_4_ + piVar35[-0x16] +
                    (auVar306._8_4_ >> 6 ^ auVar306._8_4_ * 0x80 ^ auVar306._8_4_ >> 0xb ^
                     auVar306._8_4_ * 0x200000 ^ auVar306._8_4_ >> 0x19 ^ auVar306._8_4_ * 0x4000000
                    ) + auVar47._8_4_;
          iVar244 = uStack_1e4 + auVar352._12_4_ + piVar35[-0x15] +
                    (auVar306._12_4_ >> 6 ^ auVar306._12_4_ * 0x80 ^ auVar306._12_4_ >> 0xb ^
                     auVar306._12_4_ * 0x200000 ^ auVar306._12_4_ >> 0x19 ^
                    auVar306._12_4_ * 0x4000000) + auVar47._12_4_;
          auVar47 = auVar337 ^ auVar117 & (auVar337 ^ auVar357);
          auVar292._0_4_ = auVar301._0_4_ + iVar241;
          auVar292._4_4_ = auVar301._4_4_ + iVar242;
          auVar292._8_4_ = auVar301._8_4_ + iVar243;
          auVar292._12_4_ = auVar301._12_4_ + iVar244;
          auVar347._0_4_ =
               auVar47._0_4_ + iVar241 +
               (auVar357._0_4_ >> 0x16 ^
                auVar357._0_4_ >> 2 ^ auVar357._0_4_ * 0x400 ^ auVar357._0_4_ >> 0xd ^
                auVar357._0_4_ * 0x80000 ^ auVar357._0_4_ * 0x40000000);
          auVar347._4_4_ =
               auVar47._4_4_ + iVar242 +
               (auVar357._4_4_ >> 0x16 ^
                auVar357._4_4_ >> 2 ^ auVar357._4_4_ * 0x400 ^ auVar357._4_4_ >> 0xd ^
                auVar357._4_4_ * 0x80000 ^ auVar357._4_4_ * 0x40000000);
          auVar347._8_4_ =
               auVar47._8_4_ + iVar243 +
               (auVar357._8_4_ >> 0x16 ^
                auVar357._8_4_ >> 2 ^ auVar357._8_4_ * 0x400 ^ auVar357._8_4_ >> 0xd ^
                auVar357._8_4_ * 0x80000 ^ auVar357._8_4_ * 0x40000000);
          auVar347._12_4_ =
               auVar47._12_4_ + iVar244 +
               (auVar357._12_4_ >> 0x16 ^
                auVar357._12_4_ >> 2 ^ auVar357._12_4_ * 0x400 ^ auVar357._12_4_ >> 0xd ^
                auVar357._12_4_ * 0x80000 ^ auVar357._12_4_ * 0x40000000);
          local_1e0._0_4_ =
               local_1e0._0_4_ + local_160._16_4_ +
               ((uint)local_1e0._16_4_ >> 3 ^ (uint)local_1e0._16_4_ >> 7 ^ local_1e0._16_4_ << 0xe
                ^ (uint)local_1e0._16_4_ >> 0x12 ^ local_1e0._16_4_ << 0x19) +
               ((uint)local_200._0_4_ >> 10 ^ (uint)local_200._0_4_ >> 0x11 ^
                local_200._0_4_ * 0x2000 ^ (uint)local_200._0_4_ >> 0x13 ^ local_200._0_4_ * 0x8000)
          ;
          local_1e0._4_4_ =
               local_1e0._4_4_ + uStack_14c +
               (uStack_1cc >> 3 ^ uStack_1cc >> 7 ^ uStack_1cc << 0xe ^ uStack_1cc >> 0x12 ^
               uStack_1cc << 0x19) +
               ((uint)local_200._4_4_ >> 10 ^ (uint)local_200._4_4_ >> 0x11 ^
                local_200._4_4_ * 0x2000 ^ (uint)local_200._4_4_ >> 0x13 ^ local_200._4_4_ * 0x8000)
          ;
          local_1e0._8_4_ =
               local_1e0._8_4_ + uStack_148 +
               (uStack_1c8 >> 3 ^ uStack_1c8 >> 7 ^ uStack_1c8 << 0xe ^ uStack_1c8 >> 0x12 ^
               uStack_1c8 << 0x19) +
               ((uint)local_200._8_4_ >> 10 ^ (uint)local_200._8_4_ >> 0x11 ^
                local_200._8_4_ * 0x2000 ^ (uint)local_200._8_4_ >> 0x13 ^ local_200._8_4_ * 0x8000)
          ;
          local_1e0._12_4_ =
               local_1e0._12_4_ + uStack_144 +
               (uStack_1c4 >> 3 ^ uStack_1c4 >> 7 ^ uStack_1c4 << 0xe ^ uStack_1c4 >> 0x12 ^
               uStack_1c4 << 0x19) +
               ((uint)local_200._12_4_ >> 10 ^ (uint)local_200._12_4_ >> 0x11 ^
                local_200._12_4_ * 0x2000 ^ (uint)local_200._12_4_ >> 0x13 ^
               local_200._12_4_ * 0x8000);
          auVar47 = ~auVar292 & auVar336 ^ auVar292 & auVar306;
          iVar241 = local_1e0._0_4_ + auVar339._0_4_ + piVar35[-0x10] +
                    (auVar292._0_4_ >> 6 ^ auVar292._0_4_ * 0x80 ^ auVar292._0_4_ >> 0xb ^
                     auVar292._0_4_ * 0x200000 ^ auVar292._0_4_ >> 0x19 ^ auVar292._0_4_ * 0x4000000
                    ) + auVar47._0_4_;
          iVar242 = local_1e0._4_4_ + auVar339._4_4_ + piVar35[-0xf] +
                    (auVar292._4_4_ >> 6 ^ auVar292._4_4_ * 0x80 ^ auVar292._4_4_ >> 0xb ^
                     auVar292._4_4_ * 0x200000 ^ auVar292._4_4_ >> 0x19 ^ auVar292._4_4_ * 0x4000000
                    ) + auVar47._4_4_;
          iVar243 = local_1e0._8_4_ + auVar339._8_4_ + piVar35[-0xe] +
                    (auVar292._8_4_ >> 6 ^ auVar292._8_4_ * 0x80 ^ auVar292._8_4_ >> 0xb ^
                     auVar292._8_4_ * 0x200000 ^ auVar292._8_4_ >> 0x19 ^ auVar292._8_4_ * 0x4000000
                    ) + auVar47._8_4_;
          iVar244 = local_1e0._12_4_ + auVar339._12_4_ + piVar35[-0xd] +
                    (auVar292._12_4_ >> 6 ^ auVar292._12_4_ * 0x80 ^ auVar292._12_4_ >> 0xb ^
                     auVar292._12_4_ * 0x200000 ^ auVar292._12_4_ >> 0x19 ^
                    auVar292._12_4_ * 0x4000000) + auVar47._12_4_;
          auVar47 = auVar357 ^ (auVar337 ^ auVar357) & (auVar357 ^ auVar347);
          auVar278._0_4_ = auVar288._0_4_ + iVar241;
          auVar278._4_4_ = auVar288._4_4_ + iVar242;
          auVar278._8_4_ = auVar288._8_4_ + iVar243;
          auVar278._12_4_ = auVar288._12_4_ + iVar244;
          auVar331._0_4_ =
               auVar47._0_4_ + iVar241 +
               (auVar347._0_4_ >> 0x16 ^
                auVar347._0_4_ >> 2 ^ auVar347._0_4_ * 0x400 ^ auVar347._0_4_ >> 0xd ^
                auVar347._0_4_ * 0x80000 ^ auVar347._0_4_ * 0x40000000);
          auVar331._4_4_ =
               auVar47._4_4_ + iVar242 +
               (auVar347._4_4_ >> 0x16 ^
                auVar347._4_4_ >> 2 ^ auVar347._4_4_ * 0x400 ^ auVar347._4_4_ >> 0xd ^
                auVar347._4_4_ * 0x80000 ^ auVar347._4_4_ * 0x40000000);
          auVar331._8_4_ =
               auVar47._8_4_ + iVar243 +
               (auVar347._8_4_ >> 0x16 ^
                auVar347._8_4_ >> 2 ^ auVar347._8_4_ * 0x400 ^ auVar347._8_4_ >> 0xd ^
                auVar347._8_4_ * 0x80000 ^ auVar347._8_4_ * 0x40000000);
          auVar331._12_4_ =
               auVar47._12_4_ + iVar244 +
               (auVar347._12_4_ >> 0x16 ^
                auVar347._12_4_ >> 2 ^ auVar347._12_4_ * 0x400 ^ auVar347._12_4_ >> 0xd ^
                auVar347._12_4_ * 0x80000 ^ auVar347._12_4_ * 0x40000000);
          local_1e0._16_4_ =
               local_1e0._16_4_ + local_140._0_4_ +
               ((uint)local_1c0._0_4_ >> 3 ^ (uint)local_1c0._0_4_ >> 7 ^ local_1c0._0_4_ << 0xe ^
                (uint)local_1c0._0_4_ >> 0x12 ^ local_1c0._0_4_ << 0x19) +
               ((uint)local_200._16_4_ >> 10 ^ (uint)local_200._16_4_ >> 0x11 ^
                local_200._16_4_ * 0x2000 ^ (uint)local_200._16_4_ >> 0x13 ^
               local_200._16_4_ * 0x8000);
          uStack_1cc = uStack_1cc + local_140._4_4_ +
                       ((uint)local_1c0._4_4_ >> 3 ^ (uint)local_1c0._4_4_ >> 7 ^
                        local_1c0._4_4_ << 0xe ^ (uint)local_1c0._4_4_ >> 0x12 ^
                       local_1c0._4_4_ << 0x19) +
                       (uStack_1ec >> 10 ^ uStack_1ec >> 0x11 ^ uStack_1ec * 0x2000 ^
                        uStack_1ec >> 0x13 ^ uStack_1ec * 0x8000);
          uStack_1c8 = uStack_1c8 + local_140._8_4_ +
                       ((uint)local_1c0._8_4_ >> 3 ^ (uint)local_1c0._8_4_ >> 7 ^
                        local_1c0._8_4_ << 0xe ^ (uint)local_1c0._8_4_ >> 0x12 ^
                       local_1c0._8_4_ << 0x19) +
                       (uStack_1e8 >> 10 ^ uStack_1e8 >> 0x11 ^ uStack_1e8 * 0x2000 ^
                        uStack_1e8 >> 0x13 ^ uStack_1e8 * 0x8000);
          uStack_1c4 = uStack_1c4 + local_140._12_4_ +
                       ((uint)local_1c0._12_4_ >> 3 ^ (uint)local_1c0._12_4_ >> 7 ^
                        local_1c0._12_4_ << 0xe ^ (uint)local_1c0._12_4_ >> 0x12 ^
                       local_1c0._12_4_ << 0x19) +
                       (uStack_1e4 >> 10 ^ uStack_1e4 >> 0x11 ^ uStack_1e4 * 0x2000 ^
                        uStack_1e4 >> 0x13 ^ uStack_1e4 * 0x8000);
          auVar47 = ~auVar278 & auVar306 ^ auVar278 & auVar292;
          iVar241 = local_1e0._16_4_ + uVar94 + piVar35[-8] +
                    (auVar278._0_4_ >> 6 ^ auVar278._0_4_ * 0x80 ^ auVar278._0_4_ >> 0xb ^
                     auVar278._0_4_ * 0x200000 ^ auVar278._0_4_ >> 0x19 ^ auVar278._0_4_ * 0x4000000
                    ) + auVar47._0_4_;
          iVar242 = uStack_1cc + uVar250 + piVar35[-7] +
                    (auVar278._4_4_ >> 6 ^ auVar278._4_4_ * 0x80 ^ auVar278._4_4_ >> 0xb ^
                     auVar278._4_4_ * 0x200000 ^ auVar278._4_4_ >> 0x19 ^ auVar278._4_4_ * 0x4000000
                    ) + auVar47._4_4_;
          iVar243 = uStack_1c8 + uVar256 + piVar35[-6] +
                    (auVar278._8_4_ >> 6 ^ auVar278._8_4_ * 0x80 ^ auVar278._8_4_ >> 0xb ^
                     auVar278._8_4_ * 0x200000 ^ auVar278._8_4_ >> 0x19 ^ auVar278._8_4_ * 0x4000000
                    ) + auVar47._8_4_;
          iVar244 = uStack_1c4 + uVar257 + piVar35[-5] +
                    (auVar278._12_4_ >> 6 ^ auVar278._12_4_ * 0x80 ^ auVar278._12_4_ >> 0xb ^
                     auVar278._12_4_ * 0x200000 ^ auVar278._12_4_ >> 0x19 ^
                    auVar278._12_4_ * 0x4000000) + auVar47._12_4_;
          auVar47 = auVar347 ^ (auVar357 ^ auVar347) & (auVar347 ^ auVar331);
          auVar263._0_4_ = uVar62 + iVar241;
          auVar263._4_4_ = uVar61 + iVar242;
          auVar263._8_4_ = uVar92 + iVar243;
          auVar263._12_4_ = uVar93 + iVar244;
          auVar318._0_4_ =
               auVar47._0_4_ + iVar241 +
               (auVar331._0_4_ >> 0x16 ^
                auVar331._0_4_ >> 2 ^ auVar331._0_4_ * 0x400 ^ auVar331._0_4_ >> 0xd ^
                auVar331._0_4_ * 0x80000 ^ auVar331._0_4_ * 0x40000000);
          auVar318._4_4_ =
               auVar47._4_4_ + iVar242 +
               (auVar331._4_4_ >> 0x16 ^
                auVar331._4_4_ >> 2 ^ auVar331._4_4_ * 0x400 ^ auVar331._4_4_ >> 0xd ^
                auVar331._4_4_ * 0x80000 ^ auVar331._4_4_ * 0x40000000);
          auVar318._8_4_ =
               auVar47._8_4_ + iVar243 +
               (auVar331._8_4_ >> 0x16 ^
                auVar331._8_4_ >> 2 ^ auVar331._8_4_ * 0x400 ^ auVar331._8_4_ >> 0xd ^
                auVar331._8_4_ * 0x80000 ^ auVar331._8_4_ * 0x40000000);
          auVar318._12_4_ =
               auVar47._12_4_ + iVar244 +
               (auVar331._12_4_ >> 0x16 ^
                auVar331._12_4_ >> 2 ^ auVar331._12_4_ * 0x400 ^ auVar331._12_4_ >> 0xd ^
                auVar331._12_4_ * 0x80000 ^ auVar331._12_4_ * 0x40000000);
          local_1c0._0_4_ =
               local_1c0._0_4_ + local_140._16_4_ +
               ((uint)local_1c0._16_4_ >> 3 ^ (uint)local_1c0._16_4_ >> 7 ^ local_1c0._16_4_ << 0xe
                ^ (uint)local_1c0._16_4_ >> 0x12 ^ local_1c0._16_4_ << 0x19) +
               ((uint)local_1e0._0_4_ >> 10 ^ (uint)local_1e0._0_4_ >> 0x11 ^
                local_1e0._0_4_ * 0x2000 ^ (uint)local_1e0._0_4_ >> 0x13 ^ local_1e0._0_4_ * 0x8000)
          ;
          local_1c0._4_4_ =
               local_1c0._4_4_ + uStack_12c +
               (uStack_1ac >> 3 ^ uStack_1ac >> 7 ^ uStack_1ac << 0xe ^ uStack_1ac >> 0x12 ^
               uStack_1ac << 0x19) +
               ((uint)local_1e0._4_4_ >> 10 ^ (uint)local_1e0._4_4_ >> 0x11 ^
                local_1e0._4_4_ * 0x2000 ^ (uint)local_1e0._4_4_ >> 0x13 ^ local_1e0._4_4_ * 0x8000)
          ;
          local_1c0._8_4_ =
               local_1c0._8_4_ + uStack_128 +
               (uStack_1a8 >> 3 ^ uStack_1a8 >> 7 ^ uStack_1a8 << 0xe ^ uStack_1a8 >> 0x12 ^
               uStack_1a8 << 0x19) +
               ((uint)local_1e0._8_4_ >> 10 ^ (uint)local_1e0._8_4_ >> 0x11 ^
                local_1e0._8_4_ * 0x2000 ^ (uint)local_1e0._8_4_ >> 0x13 ^ local_1e0._8_4_ * 0x8000)
          ;
          local_1c0._12_4_ =
               local_1c0._12_4_ + uStack_124 +
               (uStack_1a4 >> 3 ^ uStack_1a4 >> 7 ^ uStack_1a4 << 0xe ^ uStack_1a4 >> 0x12 ^
               uStack_1a4 << 0x19) +
               ((uint)local_1e0._12_4_ >> 10 ^ (uint)local_1e0._12_4_ >> 0x11 ^
                local_1e0._12_4_ * 0x2000 ^ (uint)local_1e0._12_4_ >> 0x13 ^
               local_1e0._12_4_ * 0x8000);
          auVar47 = ~auVar263 & auVar292 ^ auVar263 & auVar278;
          iVar241 = local_1c0._0_4_ + auVar306._0_4_ + *piVar35 +
                    (auVar263._0_4_ >> 6 ^ auVar263._0_4_ * 0x80 ^ auVar263._0_4_ >> 0xb ^
                     auVar263._0_4_ * 0x200000 ^ auVar263._0_4_ >> 0x19 ^ auVar263._0_4_ * 0x4000000
                    ) + auVar47._0_4_;
          iVar242 = local_1c0._4_4_ + auVar306._4_4_ + piVar35[1] +
                    (auVar263._4_4_ >> 6 ^ auVar263._4_4_ * 0x80 ^ auVar263._4_4_ >> 0xb ^
                     auVar263._4_4_ * 0x200000 ^ auVar263._4_4_ >> 0x19 ^ auVar263._4_4_ * 0x4000000
                    ) + auVar47._4_4_;
          iVar243 = local_1c0._8_4_ + auVar306._8_4_ + piVar35[2] +
                    (auVar263._8_4_ >> 6 ^ auVar263._8_4_ * 0x80 ^ auVar263._8_4_ >> 0xb ^
                     auVar263._8_4_ * 0x200000 ^ auVar263._8_4_ >> 0x19 ^ auVar263._8_4_ * 0x4000000
                    ) + auVar47._8_4_;
          iVar244 = local_1c0._12_4_ + auVar306._12_4_ + piVar35[3] +
                    (auVar263._12_4_ >> 6 ^ auVar263._12_4_ * 0x80 ^ auVar263._12_4_ >> 0xb ^
                     auVar263._12_4_ * 0x200000 ^ auVar263._12_4_ >> 0x19 ^
                    auVar263._12_4_ * 0x4000000) + auVar47._12_4_;
          auVar47 = auVar331 ^ (auVar347 ^ auVar331) & (auVar331 ^ auVar318);
          auVar358._0_4_ = auVar357._0_4_ + iVar241;
          auVar358._4_4_ = auVar357._4_4_ + iVar242;
          auVar358._8_4_ = auVar357._8_4_ + iVar243;
          auVar358._12_4_ = auVar357._12_4_ + iVar244;
          auVar307._0_4_ =
               auVar47._0_4_ + iVar241 +
               (auVar318._0_4_ >> 0x16 ^
                auVar318._0_4_ >> 2 ^ auVar318._0_4_ * 0x400 ^ auVar318._0_4_ >> 0xd ^
                auVar318._0_4_ * 0x80000 ^ auVar318._0_4_ * 0x40000000);
          auVar307._4_4_ =
               auVar47._4_4_ + iVar242 +
               (auVar318._4_4_ >> 0x16 ^
                auVar318._4_4_ >> 2 ^ auVar318._4_4_ * 0x400 ^ auVar318._4_4_ >> 0xd ^
                auVar318._4_4_ * 0x80000 ^ auVar318._4_4_ * 0x40000000);
          auVar307._8_4_ =
               auVar47._8_4_ + iVar243 +
               (auVar318._8_4_ >> 0x16 ^
                auVar318._8_4_ >> 2 ^ auVar318._8_4_ * 0x400 ^ auVar318._8_4_ >> 0xd ^
                auVar318._8_4_ * 0x80000 ^ auVar318._8_4_ * 0x40000000);
          auVar307._12_4_ =
               auVar47._12_4_ + iVar244 +
               (auVar318._12_4_ >> 0x16 ^
                auVar318._12_4_ >> 2 ^ auVar318._12_4_ * 0x400 ^ auVar318._12_4_ >> 0xd ^
                auVar318._12_4_ * 0x80000 ^ auVar318._12_4_ * 0x40000000);
          local_1c0._16_4_ =
               local_1c0._16_4_ + local_120._0_4_ +
               ((uint)local_1a0._0_4_ >> 3 ^ (uint)local_1a0._0_4_ >> 7 ^ local_1a0._0_4_ << 0xe ^
                (uint)local_1a0._0_4_ >> 0x12 ^ local_1a0._0_4_ << 0x19) +
               ((uint)local_1e0._16_4_ >> 10 ^ (uint)local_1e0._16_4_ >> 0x11 ^
                local_1e0._16_4_ * 0x2000 ^ (uint)local_1e0._16_4_ >> 0x13 ^
               local_1e0._16_4_ * 0x8000);
          uStack_1ac = uStack_1ac + local_120._4_4_ +
                       ((uint)local_1a0._4_4_ >> 3 ^ (uint)local_1a0._4_4_ >> 7 ^
                        local_1a0._4_4_ << 0xe ^ (uint)local_1a0._4_4_ >> 0x12 ^
                       local_1a0._4_4_ << 0x19) +
                       (uStack_1cc >> 10 ^ uStack_1cc >> 0x11 ^ uStack_1cc * 0x2000 ^
                        uStack_1cc >> 0x13 ^ uStack_1cc * 0x8000);
          uStack_1a8 = uStack_1a8 + local_120._8_4_ +
                       ((uint)local_1a0._8_4_ >> 3 ^ (uint)local_1a0._8_4_ >> 7 ^
                        local_1a0._8_4_ << 0xe ^ (uint)local_1a0._8_4_ >> 0x12 ^
                       local_1a0._8_4_ << 0x19) +
                       (uStack_1c8 >> 10 ^ uStack_1c8 >> 0x11 ^ uStack_1c8 * 0x2000 ^
                        uStack_1c8 >> 0x13 ^ uStack_1c8 * 0x8000);
          uStack_1a4 = uStack_1a4 + local_120._12_4_ +
                       ((uint)local_1a0._12_4_ >> 3 ^ (uint)local_1a0._12_4_ >> 7 ^
                        local_1a0._12_4_ << 0xe ^ (uint)local_1a0._12_4_ >> 0x12 ^
                       local_1a0._12_4_ << 0x19) +
                       (uStack_1c4 >> 10 ^ uStack_1c4 >> 0x11 ^ uStack_1c4 * 0x2000 ^
                        uStack_1c4 >> 0x13 ^ uStack_1c4 * 0x8000);
          auVar47 = ~auVar358 & auVar278 ^ auVar358 & auVar263;
          iVar241 = local_1c0._16_4_ + auVar292._0_4_ + piVar35[8] +
                    (auVar358._0_4_ >> 6 ^ auVar358._0_4_ * 0x80 ^ auVar358._0_4_ >> 0xb ^
                     auVar358._0_4_ * 0x200000 ^ auVar358._0_4_ >> 0x19 ^ auVar358._0_4_ * 0x4000000
                    ) + auVar47._0_4_;
          iVar242 = uStack_1ac + auVar292._4_4_ + piVar35[9] +
                    (auVar358._4_4_ >> 6 ^ auVar358._4_4_ * 0x80 ^ auVar358._4_4_ >> 0xb ^
                     auVar358._4_4_ * 0x200000 ^ auVar358._4_4_ >> 0x19 ^ auVar358._4_4_ * 0x4000000
                    ) + auVar47._4_4_;
          iVar243 = uStack_1a8 + auVar292._8_4_ + piVar35[10] +
                    (auVar358._8_4_ >> 6 ^ auVar358._8_4_ * 0x80 ^ auVar358._8_4_ >> 0xb ^
                     auVar358._8_4_ * 0x200000 ^ auVar358._8_4_ >> 0x19 ^ auVar358._8_4_ * 0x4000000
                    ) + auVar47._8_4_;
          iVar244 = uStack_1a4 + auVar292._12_4_ + piVar35[0xb] +
                    (auVar358._12_4_ >> 6 ^ auVar358._12_4_ * 0x80 ^ auVar358._12_4_ >> 0xb ^
                     auVar358._12_4_ * 0x200000 ^ auVar358._12_4_ >> 0x19 ^
                    auVar358._12_4_ * 0x4000000) + auVar47._12_4_;
          auVar47 = auVar318 ^ (auVar331 ^ auVar318) & (auVar318 ^ auVar307);
          auVar348._0_4_ = auVar347._0_4_ + iVar241;
          auVar348._4_4_ = auVar347._4_4_ + iVar242;
          auVar348._8_4_ = auVar347._8_4_ + iVar243;
          auVar348._12_4_ = auVar347._12_4_ + iVar244;
          auVar293._0_4_ =
               auVar47._0_4_ + iVar241 +
               (auVar307._0_4_ >> 0x16 ^
                auVar307._0_4_ >> 2 ^ auVar307._0_4_ * 0x400 ^ auVar307._0_4_ >> 0xd ^
                auVar307._0_4_ * 0x80000 ^ auVar307._0_4_ * 0x40000000);
          auVar293._4_4_ =
               auVar47._4_4_ + iVar242 +
               (auVar307._4_4_ >> 0x16 ^
                auVar307._4_4_ >> 2 ^ auVar307._4_4_ * 0x400 ^ auVar307._4_4_ >> 0xd ^
                auVar307._4_4_ * 0x80000 ^ auVar307._4_4_ * 0x40000000);
          auVar293._8_4_ =
               auVar47._8_4_ + iVar243 +
               (auVar307._8_4_ >> 0x16 ^
                auVar307._8_4_ >> 2 ^ auVar307._8_4_ * 0x400 ^ auVar307._8_4_ >> 0xd ^
                auVar307._8_4_ * 0x80000 ^ auVar307._8_4_ * 0x40000000);
          auVar293._12_4_ =
               auVar47._12_4_ + iVar244 +
               (auVar307._12_4_ >> 0x16 ^
                auVar307._12_4_ >> 2 ^ auVar307._12_4_ * 0x400 ^ auVar307._12_4_ >> 0xd ^
                auVar307._12_4_ * 0x80000 ^ auVar307._12_4_ * 0x40000000);
          local_1a0._0_4_ =
               local_1a0._0_4_ + local_120._16_4_ +
               ((uint)local_1a0._16_4_ >> 3 ^ (uint)local_1a0._16_4_ >> 7 ^ local_1a0._16_4_ << 0xe
                ^ (uint)local_1a0._16_4_ >> 0x12 ^ local_1a0._16_4_ << 0x19) +
               ((uint)local_1c0._0_4_ >> 10 ^ (uint)local_1c0._0_4_ >> 0x11 ^
                local_1c0._0_4_ * 0x2000 ^ (uint)local_1c0._0_4_ >> 0x13 ^ local_1c0._0_4_ * 0x8000)
          ;
          local_1a0._4_4_ =
               local_1a0._4_4_ + uStack_10c +
               (uStack_18c >> 3 ^ uStack_18c >> 7 ^ uStack_18c << 0xe ^ uStack_18c >> 0x12 ^
               uStack_18c << 0x19) +
               ((uint)local_1c0._4_4_ >> 10 ^ (uint)local_1c0._4_4_ >> 0x11 ^
                local_1c0._4_4_ * 0x2000 ^ (uint)local_1c0._4_4_ >> 0x13 ^ local_1c0._4_4_ * 0x8000)
          ;
          local_1a0._8_4_ =
               local_1a0._8_4_ + uStack_108 +
               (uStack_188 >> 3 ^ uStack_188 >> 7 ^ uStack_188 << 0xe ^ uStack_188 >> 0x12 ^
               uStack_188 << 0x19) +
               ((uint)local_1c0._8_4_ >> 10 ^ (uint)local_1c0._8_4_ >> 0x11 ^
                local_1c0._8_4_ * 0x2000 ^ (uint)local_1c0._8_4_ >> 0x13 ^ local_1c0._8_4_ * 0x8000)
          ;
          local_1a0._12_4_ =
               local_1a0._12_4_ + uStack_104 +
               (uStack_184 >> 3 ^ uStack_184 >> 7 ^ uStack_184 << 0xe ^ uStack_184 >> 0x12 ^
               uStack_184 << 0x19) +
               ((uint)local_1c0._12_4_ >> 10 ^ (uint)local_1c0._12_4_ >> 0x11 ^
                local_1c0._12_4_ * 0x2000 ^ (uint)local_1c0._12_4_ >> 0x13 ^
               local_1c0._12_4_ * 0x8000);
          auVar47 = ~auVar348 & auVar263 ^ auVar348 & auVar358;
          iVar241 = local_1a0._0_4_ + auVar278._0_4_ + piVar35[0x10] +
                    (auVar348._0_4_ >> 6 ^ auVar348._0_4_ * 0x80 ^ auVar348._0_4_ >> 0xb ^
                     auVar348._0_4_ * 0x200000 ^ auVar348._0_4_ >> 0x19 ^ auVar348._0_4_ * 0x4000000
                    ) + auVar47._0_4_;
          iVar242 = local_1a0._4_4_ + auVar278._4_4_ + piVar35[0x11] +
                    (auVar348._4_4_ >> 6 ^ auVar348._4_4_ * 0x80 ^ auVar348._4_4_ >> 0xb ^
                     auVar348._4_4_ * 0x200000 ^ auVar348._4_4_ >> 0x19 ^ auVar348._4_4_ * 0x4000000
                    ) + auVar47._4_4_;
          iVar243 = local_1a0._8_4_ + auVar278._8_4_ + piVar35[0x12] +
                    (auVar348._8_4_ >> 6 ^ auVar348._8_4_ * 0x80 ^ auVar348._8_4_ >> 0xb ^
                     auVar348._8_4_ * 0x200000 ^ auVar348._8_4_ >> 0x19 ^ auVar348._8_4_ * 0x4000000
                    ) + auVar47._8_4_;
          iVar244 = local_1a0._12_4_ + auVar278._12_4_ + piVar35[0x13] +
                    (auVar348._12_4_ >> 6 ^ auVar348._12_4_ * 0x80 ^ auVar348._12_4_ >> 0xb ^
                     auVar348._12_4_ * 0x200000 ^ auVar348._12_4_ >> 0x19 ^
                    auVar348._12_4_ * 0x4000000) + auVar47._12_4_;
          auVar47 = auVar307 ^ (auVar318 ^ auVar307) & (auVar307 ^ auVar293);
          auVar332._0_4_ = auVar331._0_4_ + iVar241;
          auVar332._4_4_ = auVar331._4_4_ + iVar242;
          auVar332._8_4_ = auVar331._8_4_ + iVar243;
          auVar332._12_4_ = auVar331._12_4_ + iVar244;
          auVar279._0_4_ =
               auVar47._0_4_ + iVar241 +
               (auVar293._0_4_ >> 0x16 ^
                auVar293._0_4_ >> 2 ^ auVar293._0_4_ * 0x400 ^ auVar293._0_4_ >> 0xd ^
                auVar293._0_4_ * 0x80000 ^ auVar293._0_4_ * 0x40000000);
          auVar279._4_4_ =
               auVar47._4_4_ + iVar242 +
               (auVar293._4_4_ >> 0x16 ^
                auVar293._4_4_ >> 2 ^ auVar293._4_4_ * 0x400 ^ auVar293._4_4_ >> 0xd ^
                auVar293._4_4_ * 0x80000 ^ auVar293._4_4_ * 0x40000000);
          auVar279._8_4_ =
               auVar47._8_4_ + iVar243 +
               (auVar293._8_4_ >> 0x16 ^
                auVar293._8_4_ >> 2 ^ auVar293._8_4_ * 0x400 ^ auVar293._8_4_ >> 0xd ^
                auVar293._8_4_ * 0x80000 ^ auVar293._8_4_ * 0x40000000);
          auVar279._12_4_ =
               auVar47._12_4_ + iVar244 +
               (auVar293._12_4_ >> 0x16 ^
                auVar293._12_4_ >> 2 ^ auVar293._12_4_ * 0x400 ^ auVar293._12_4_ >> 0xd ^
                auVar293._12_4_ * 0x80000 ^ auVar293._12_4_ * 0x40000000);
          local_1a0._16_4_ =
               local_1a0._16_4_ + local_200._0_4_ +
               ((uint)local_180._0_4_ >> 3 ^ (uint)local_180._0_4_ >> 7 ^ local_180._0_4_ << 0xe ^
                (uint)local_180._0_4_ >> 0x12 ^ local_180._0_4_ << 0x19) +
               ((uint)local_1c0._16_4_ >> 10 ^ (uint)local_1c0._16_4_ >> 0x11 ^
                local_1c0._16_4_ * 0x2000 ^ (uint)local_1c0._16_4_ >> 0x13 ^
               local_1c0._16_4_ * 0x8000);
          uStack_18c = uStack_18c + local_200._4_4_ +
                       ((uint)local_180._4_4_ >> 3 ^ (uint)local_180._4_4_ >> 7 ^
                        local_180._4_4_ << 0xe ^ (uint)local_180._4_4_ >> 0x12 ^
                       local_180._4_4_ << 0x19) +
                       (uStack_1ac >> 10 ^ uStack_1ac >> 0x11 ^ uStack_1ac * 0x2000 ^
                        uStack_1ac >> 0x13 ^ uStack_1ac * 0x8000);
          uStack_188 = uStack_188 + local_200._8_4_ +
                       ((uint)local_180._8_4_ >> 3 ^ (uint)local_180._8_4_ >> 7 ^
                        local_180._8_4_ << 0xe ^ (uint)local_180._8_4_ >> 0x12 ^
                       local_180._8_4_ << 0x19) +
                       (uStack_1a8 >> 10 ^ uStack_1a8 >> 0x11 ^ uStack_1a8 * 0x2000 ^
                        uStack_1a8 >> 0x13 ^ uStack_1a8 * 0x8000);
          uStack_184 = uStack_184 + local_200._12_4_ +
                       ((uint)local_180._12_4_ >> 3 ^ (uint)local_180._12_4_ >> 7 ^
                        local_180._12_4_ << 0xe ^ (uint)local_180._12_4_ >> 0x12 ^
                       local_180._12_4_ << 0x19) +
                       (uStack_1a4 >> 10 ^ uStack_1a4 >> 0x11 ^ uStack_1a4 * 0x2000 ^
                        uStack_1a4 >> 0x13 ^ uStack_1a4 * 0x8000);
          auVar47 = ~auVar332 & auVar358 ^ auVar332 & auVar348;
          iVar241 = local_1a0._16_4_ + auVar263._0_4_ + piVar35[0x18] +
                    (auVar332._0_4_ >> 6 ^ auVar332._0_4_ * 0x80 ^ auVar332._0_4_ >> 0xb ^
                     auVar332._0_4_ * 0x200000 ^ auVar332._0_4_ >> 0x19 ^ auVar332._0_4_ * 0x4000000
                    ) + auVar47._0_4_;
          iVar242 = uStack_18c + auVar263._4_4_ + piVar35[0x19] +
                    (auVar332._4_4_ >> 6 ^ auVar332._4_4_ * 0x80 ^ auVar332._4_4_ >> 0xb ^
                     auVar332._4_4_ * 0x200000 ^ auVar332._4_4_ >> 0x19 ^ auVar332._4_4_ * 0x4000000
                    ) + auVar47._4_4_;
          iVar243 = uStack_188 + auVar263._8_4_ + piVar35[0x1a] +
                    (auVar332._8_4_ >> 6 ^ auVar332._8_4_ * 0x80 ^ auVar332._8_4_ >> 0xb ^
                     auVar332._8_4_ * 0x200000 ^ auVar332._8_4_ >> 0x19 ^ auVar332._8_4_ * 0x4000000
                    ) + auVar47._8_4_;
          iVar244 = uStack_184 + auVar263._12_4_ + piVar35[0x1b] +
                    (auVar332._12_4_ >> 6 ^ auVar332._12_4_ * 0x80 ^ auVar332._12_4_ >> 0xb ^
                     auVar332._12_4_ * 0x200000 ^ auVar332._12_4_ >> 0x19 ^
                    auVar332._12_4_ * 0x4000000) + auVar47._12_4_;
          auVar47 = auVar293 ^ (auVar307 ^ auVar293) & (auVar293 ^ auVar279);
          auVar319._0_4_ = auVar318._0_4_ + iVar241;
          auVar319._4_4_ = auVar318._4_4_ + iVar242;
          auVar319._8_4_ = auVar318._8_4_ + iVar243;
          auVar319._12_4_ = auVar318._12_4_ + iVar244;
          auVar264._0_4_ =
               auVar47._0_4_ + iVar241 +
               (auVar279._0_4_ >> 0x16 ^
                auVar279._0_4_ >> 2 ^ auVar279._0_4_ * 0x400 ^ auVar279._0_4_ >> 0xd ^
                auVar279._0_4_ * 0x80000 ^ auVar279._0_4_ * 0x40000000);
          auVar264._4_4_ =
               auVar47._4_4_ + iVar242 +
               (auVar279._4_4_ >> 0x16 ^
                auVar279._4_4_ >> 2 ^ auVar279._4_4_ * 0x400 ^ auVar279._4_4_ >> 0xd ^
                auVar279._4_4_ * 0x80000 ^ auVar279._4_4_ * 0x40000000);
          auVar264._8_4_ =
               auVar47._8_4_ + iVar243 +
               (auVar279._8_4_ >> 0x16 ^
                auVar279._8_4_ >> 2 ^ auVar279._8_4_ * 0x400 ^ auVar279._8_4_ >> 0xd ^
                auVar279._8_4_ * 0x80000 ^ auVar279._8_4_ * 0x40000000);
          auVar264._12_4_ =
               auVar47._12_4_ + iVar244 +
               (auVar279._12_4_ >> 0x16 ^
                auVar279._12_4_ >> 2 ^ auVar279._12_4_ * 0x400 ^ auVar279._12_4_ >> 0xd ^
                auVar279._12_4_ * 0x80000 ^ auVar279._12_4_ * 0x40000000);
          local_180._0_4_ =
               local_180._0_4_ + local_200._16_4_ +
               ((uint)local_180._16_4_ >> 3 ^ (uint)local_180._16_4_ >> 7 ^ local_180._16_4_ << 0xe
                ^ (uint)local_180._16_4_ >> 0x12 ^ local_180._16_4_ << 0x19) +
               ((uint)local_1a0._0_4_ >> 10 ^ (uint)local_1a0._0_4_ >> 0x11 ^
                local_1a0._0_4_ * 0x2000 ^ (uint)local_1a0._0_4_ >> 0x13 ^ local_1a0._0_4_ * 0x8000)
          ;
          local_180._4_4_ =
               local_180._4_4_ + uStack_1ec +
               (uStack_16c >> 3 ^ uStack_16c >> 7 ^ uStack_16c << 0xe ^ uStack_16c >> 0x12 ^
               uStack_16c << 0x19) +
               ((uint)local_1a0._4_4_ >> 10 ^ (uint)local_1a0._4_4_ >> 0x11 ^
                local_1a0._4_4_ * 0x2000 ^ (uint)local_1a0._4_4_ >> 0x13 ^ local_1a0._4_4_ * 0x8000)
          ;
          local_180._8_4_ =
               local_180._8_4_ + uStack_1e8 +
               (uStack_168 >> 3 ^ uStack_168 >> 7 ^ uStack_168 << 0xe ^ uStack_168 >> 0x12 ^
               uStack_168 << 0x19) +
               ((uint)local_1a0._8_4_ >> 10 ^ (uint)local_1a0._8_4_ >> 0x11 ^
                local_1a0._8_4_ * 0x2000 ^ (uint)local_1a0._8_4_ >> 0x13 ^ local_1a0._8_4_ * 0x8000)
          ;
          local_180._12_4_ =
               local_180._12_4_ + uStack_1e4 +
               (uStack_164 >> 3 ^ uStack_164 >> 7 ^ uStack_164 << 0xe ^ uStack_164 >> 0x12 ^
               uStack_164 << 0x19) +
               ((uint)local_1a0._12_4_ >> 10 ^ (uint)local_1a0._12_4_ >> 0x11 ^
                local_1a0._12_4_ * 0x2000 ^ (uint)local_1a0._12_4_ >> 0x13 ^
               local_1a0._12_4_ * 0x8000);
          auVar47 = ~auVar319 & auVar348 ^ auVar319 & auVar332;
          iVar241 = local_180._0_4_ + auVar358._0_4_ + piVar35[0x20] +
                    (auVar319._0_4_ >> 6 ^ auVar319._0_4_ * 0x80 ^ auVar319._0_4_ >> 0xb ^
                     auVar319._0_4_ * 0x200000 ^ auVar319._0_4_ >> 0x19 ^ auVar319._0_4_ * 0x4000000
                    ) + auVar47._0_4_;
          iVar242 = local_180._4_4_ + auVar358._4_4_ + piVar35[0x21] +
                    (auVar319._4_4_ >> 6 ^ auVar319._4_4_ * 0x80 ^ auVar319._4_4_ >> 0xb ^
                     auVar319._4_4_ * 0x200000 ^ auVar319._4_4_ >> 0x19 ^ auVar319._4_4_ * 0x4000000
                    ) + auVar47._4_4_;
          iVar243 = local_180._8_4_ + auVar358._8_4_ + piVar35[0x22] +
                    (auVar319._8_4_ >> 6 ^ auVar319._8_4_ * 0x80 ^ auVar319._8_4_ >> 0xb ^
                     auVar319._8_4_ * 0x200000 ^ auVar319._8_4_ >> 0x19 ^ auVar319._8_4_ * 0x4000000
                    ) + auVar47._8_4_;
          iVar244 = local_180._12_4_ + auVar358._12_4_ + piVar35[0x23] +
                    (auVar319._12_4_ >> 6 ^ auVar319._12_4_ * 0x80 ^ auVar319._12_4_ >> 0xb ^
                     auVar319._12_4_ * 0x200000 ^ auVar319._12_4_ >> 0x19 ^
                    auVar319._12_4_ * 0x4000000) + auVar47._12_4_;
          auVar47 = auVar279 ^ (auVar293 ^ auVar279) & (auVar279 ^ auVar264);
          auVar308._0_4_ = auVar307._0_4_ + iVar241;
          auVar308._4_4_ = auVar307._4_4_ + iVar242;
          auVar308._8_4_ = auVar307._8_4_ + iVar243;
          auVar308._12_4_ = auVar307._12_4_ + iVar244;
          auVar359._0_4_ =
               auVar47._0_4_ + iVar241 +
               (auVar264._0_4_ >> 0x16 ^
                auVar264._0_4_ >> 2 ^ auVar264._0_4_ * 0x400 ^ auVar264._0_4_ >> 0xd ^
                auVar264._0_4_ * 0x80000 ^ auVar264._0_4_ * 0x40000000);
          auVar359._4_4_ =
               auVar47._4_4_ + iVar242 +
               (auVar264._4_4_ >> 0x16 ^
                auVar264._4_4_ >> 2 ^ auVar264._4_4_ * 0x400 ^ auVar264._4_4_ >> 0xd ^
                auVar264._4_4_ * 0x80000 ^ auVar264._4_4_ * 0x40000000);
          auVar359._8_4_ =
               auVar47._8_4_ + iVar243 +
               (auVar264._8_4_ >> 0x16 ^
                auVar264._8_4_ >> 2 ^ auVar264._8_4_ * 0x400 ^ auVar264._8_4_ >> 0xd ^
                auVar264._8_4_ * 0x80000 ^ auVar264._8_4_ * 0x40000000);
          auVar359._12_4_ =
               auVar47._12_4_ + iVar244 +
               (auVar264._12_4_ >> 0x16 ^
                auVar264._12_4_ >> 2 ^ auVar264._12_4_ * 0x400 ^ auVar264._12_4_ >> 0xd ^
                auVar264._12_4_ * 0x80000 ^ auVar264._12_4_ * 0x40000000);
          local_180._16_4_ =
               local_180._16_4_ + local_1e0._0_4_ +
               ((uint)local_160._0_4_ >> 3 ^ (uint)local_160._0_4_ >> 7 ^ local_160._0_4_ << 0xe ^
                (uint)local_160._0_4_ >> 0x12 ^ local_160._0_4_ << 0x19) +
               ((uint)local_1a0._16_4_ >> 10 ^ (uint)local_1a0._16_4_ >> 0x11 ^
                local_1a0._16_4_ * 0x2000 ^ (uint)local_1a0._16_4_ >> 0x13 ^
               local_1a0._16_4_ * 0x8000);
          uStack_16c = uStack_16c + local_1e0._4_4_ +
                       ((uint)local_160._4_4_ >> 3 ^ (uint)local_160._4_4_ >> 7 ^
                        local_160._4_4_ << 0xe ^ (uint)local_160._4_4_ >> 0x12 ^
                       local_160._4_4_ << 0x19) +
                       (uStack_18c >> 10 ^ uStack_18c >> 0x11 ^ uStack_18c * 0x2000 ^
                        uStack_18c >> 0x13 ^ uStack_18c * 0x8000);
          uStack_168 = uStack_168 + local_1e0._8_4_ +
                       ((uint)local_160._8_4_ >> 3 ^ (uint)local_160._8_4_ >> 7 ^
                        local_160._8_4_ << 0xe ^ (uint)local_160._8_4_ >> 0x12 ^
                       local_160._8_4_ << 0x19) +
                       (uStack_188 >> 10 ^ uStack_188 >> 0x11 ^ uStack_188 * 0x2000 ^
                        uStack_188 >> 0x13 ^ uStack_188 * 0x8000);
          uStack_164 = uStack_164 + local_1e0._12_4_ +
                       ((uint)local_160._12_4_ >> 3 ^ (uint)local_160._12_4_ >> 7 ^
                        local_160._12_4_ << 0xe ^ (uint)local_160._12_4_ >> 0x12 ^
                       local_160._12_4_ << 0x19) +
                       (uStack_184 >> 10 ^ uStack_184 >> 0x11 ^ uStack_184 * 0x2000 ^
                        uStack_184 >> 0x13 ^ uStack_184 * 0x8000);
          auVar47 = ~auVar308 & auVar332 ^ auVar308 & auVar319;
          iVar241 = local_180._16_4_ + auVar348._0_4_ + piVar35[0x28] +
                    (auVar308._0_4_ >> 6 ^ auVar308._0_4_ * 0x80 ^ auVar308._0_4_ >> 0xb ^
                     auVar308._0_4_ * 0x200000 ^ auVar308._0_4_ >> 0x19 ^ auVar308._0_4_ * 0x4000000
                    ) + auVar47._0_4_;
          iVar242 = uStack_16c + auVar348._4_4_ + piVar35[0x29] +
                    (auVar308._4_4_ >> 6 ^ auVar308._4_4_ * 0x80 ^ auVar308._4_4_ >> 0xb ^
                     auVar308._4_4_ * 0x200000 ^ auVar308._4_4_ >> 0x19 ^ auVar308._4_4_ * 0x4000000
                    ) + auVar47._4_4_;
          iVar243 = uStack_168 + auVar348._8_4_ + piVar35[0x2a] +
                    (auVar308._8_4_ >> 6 ^ auVar308._8_4_ * 0x80 ^ auVar308._8_4_ >> 0xb ^
                     auVar308._8_4_ * 0x200000 ^ auVar308._8_4_ >> 0x19 ^ auVar308._8_4_ * 0x4000000
                    ) + auVar47._8_4_;
          iVar244 = uStack_164 + auVar348._12_4_ + piVar35[0x2b] +
                    (auVar308._12_4_ >> 6 ^ auVar308._12_4_ * 0x80 ^ auVar308._12_4_ >> 0xb ^
                     auVar308._12_4_ * 0x200000 ^ auVar308._12_4_ >> 0x19 ^
                    auVar308._12_4_ * 0x4000000) + auVar47._12_4_;
          auVar47 = auVar264 ^ (auVar279 ^ auVar264) & (auVar264 ^ auVar359);
          auVar294._0_4_ = auVar293._0_4_ + iVar241;
          auVar294._4_4_ = auVar293._4_4_ + iVar242;
          auVar294._8_4_ = auVar293._8_4_ + iVar243;
          auVar294._12_4_ = auVar293._12_4_ + iVar244;
          auVar349._0_4_ =
               auVar47._0_4_ + iVar241 +
               (auVar359._0_4_ >> 0x16 ^
                auVar359._0_4_ >> 2 ^ auVar359._0_4_ * 0x400 ^ auVar359._0_4_ >> 0xd ^
                auVar359._0_4_ * 0x80000 ^ auVar359._0_4_ * 0x40000000);
          auVar349._4_4_ =
               auVar47._4_4_ + iVar242 +
               (auVar359._4_4_ >> 0x16 ^
                auVar359._4_4_ >> 2 ^ auVar359._4_4_ * 0x400 ^ auVar359._4_4_ >> 0xd ^
                auVar359._4_4_ * 0x80000 ^ auVar359._4_4_ * 0x40000000);
          auVar349._8_4_ =
               auVar47._8_4_ + iVar243 +
               (auVar359._8_4_ >> 0x16 ^
                auVar359._8_4_ >> 2 ^ auVar359._8_4_ * 0x400 ^ auVar359._8_4_ >> 0xd ^
                auVar359._8_4_ * 0x80000 ^ auVar359._8_4_ * 0x40000000);
          auVar349._12_4_ =
               auVar47._12_4_ + iVar244 +
               (auVar359._12_4_ >> 0x16 ^
                auVar359._12_4_ >> 2 ^ auVar359._12_4_ * 0x400 ^ auVar359._12_4_ >> 0xd ^
                auVar359._12_4_ * 0x80000 ^ auVar359._12_4_ * 0x40000000);
          local_160._0_4_ =
               local_160._0_4_ + local_1e0._16_4_ +
               ((uint)local_160._16_4_ >> 3 ^ (uint)local_160._16_4_ >> 7 ^ local_160._16_4_ << 0xe
                ^ (uint)local_160._16_4_ >> 0x12 ^ local_160._16_4_ << 0x19) +
               ((uint)local_180._0_4_ >> 10 ^ (uint)local_180._0_4_ >> 0x11 ^
                local_180._0_4_ * 0x2000 ^ (uint)local_180._0_4_ >> 0x13 ^ local_180._0_4_ * 0x8000)
          ;
          local_160._4_4_ =
               local_160._4_4_ + uStack_1cc +
               (uStack_14c >> 3 ^ uStack_14c >> 7 ^ uStack_14c << 0xe ^ uStack_14c >> 0x12 ^
               uStack_14c << 0x19) +
               ((uint)local_180._4_4_ >> 10 ^ (uint)local_180._4_4_ >> 0x11 ^
                local_180._4_4_ * 0x2000 ^ (uint)local_180._4_4_ >> 0x13 ^ local_180._4_4_ * 0x8000)
          ;
          local_160._8_4_ =
               local_160._8_4_ + uStack_1c8 +
               (uStack_148 >> 3 ^ uStack_148 >> 7 ^ uStack_148 << 0xe ^ uStack_148 >> 0x12 ^
               uStack_148 << 0x19) +
               ((uint)local_180._8_4_ >> 10 ^ (uint)local_180._8_4_ >> 0x11 ^
                local_180._8_4_ * 0x2000 ^ (uint)local_180._8_4_ >> 0x13 ^ local_180._8_4_ * 0x8000)
          ;
          local_160._12_4_ =
               local_160._12_4_ + uStack_1c4 +
               (uStack_144 >> 3 ^ uStack_144 >> 7 ^ uStack_144 << 0xe ^ uStack_144 >> 0x12 ^
               uStack_144 << 0x19) +
               ((uint)local_180._12_4_ >> 10 ^ (uint)local_180._12_4_ >> 0x11 ^
                local_180._12_4_ * 0x2000 ^ (uint)local_180._12_4_ >> 0x13 ^
               local_180._12_4_ * 0x8000);
          auVar47 = ~auVar294 & auVar319 ^ auVar294 & auVar308;
          iVar241 = local_160._0_4_ + auVar332._0_4_ + piVar35[0x30] +
                    (auVar294._0_4_ >> 6 ^ auVar294._0_4_ * 0x80 ^ auVar294._0_4_ >> 0xb ^
                     auVar294._0_4_ * 0x200000 ^ auVar294._0_4_ >> 0x19 ^ auVar294._0_4_ * 0x4000000
                    ) + auVar47._0_4_;
          iVar242 = local_160._4_4_ + auVar332._4_4_ + piVar35[0x31] +
                    (auVar294._4_4_ >> 6 ^ auVar294._4_4_ * 0x80 ^ auVar294._4_4_ >> 0xb ^
                     auVar294._4_4_ * 0x200000 ^ auVar294._4_4_ >> 0x19 ^ auVar294._4_4_ * 0x4000000
                    ) + auVar47._4_4_;
          iVar243 = local_160._8_4_ + auVar332._8_4_ + piVar35[0x32] +
                    (auVar294._8_4_ >> 6 ^ auVar294._8_4_ * 0x80 ^ auVar294._8_4_ >> 0xb ^
                     auVar294._8_4_ * 0x200000 ^ auVar294._8_4_ >> 0x19 ^ auVar294._8_4_ * 0x4000000
                    ) + auVar47._8_4_;
          iVar244 = local_160._12_4_ + auVar332._12_4_ + piVar35[0x33] +
                    (auVar294._12_4_ >> 6 ^ auVar294._12_4_ * 0x80 ^ auVar294._12_4_ >> 0xb ^
                     auVar294._12_4_ * 0x200000 ^ auVar294._12_4_ >> 0x19 ^
                    auVar294._12_4_ * 0x4000000) + auVar47._12_4_;
          auVar47 = auVar359 ^ (auVar264 ^ auVar359) & (auVar359 ^ auVar349);
          auVar280._0_4_ = auVar279._0_4_ + iVar241;
          auVar280._4_4_ = auVar279._4_4_ + iVar242;
          auVar280._8_4_ = auVar279._8_4_ + iVar243;
          auVar280._12_4_ = auVar279._12_4_ + iVar244;
          auVar333._0_4_ =
               auVar47._0_4_ + iVar241 +
               (auVar349._0_4_ >> 0x16 ^
                auVar349._0_4_ >> 2 ^ auVar349._0_4_ * 0x400 ^ auVar349._0_4_ >> 0xd ^
                auVar349._0_4_ * 0x80000 ^ auVar349._0_4_ * 0x40000000);
          auVar333._4_4_ =
               auVar47._4_4_ + iVar242 +
               (auVar349._4_4_ >> 0x16 ^
                auVar349._4_4_ >> 2 ^ auVar349._4_4_ * 0x400 ^ auVar349._4_4_ >> 0xd ^
                auVar349._4_4_ * 0x80000 ^ auVar349._4_4_ * 0x40000000);
          auVar333._8_4_ =
               auVar47._8_4_ + iVar243 +
               (auVar349._8_4_ >> 0x16 ^
                auVar349._8_4_ >> 2 ^ auVar349._8_4_ * 0x400 ^ auVar349._8_4_ >> 0xd ^
                auVar349._8_4_ * 0x80000 ^ auVar349._8_4_ * 0x40000000);
          auVar333._12_4_ =
               auVar47._12_4_ + iVar244 +
               (auVar349._12_4_ >> 0x16 ^
                auVar349._12_4_ >> 2 ^ auVar349._12_4_ * 0x400 ^ auVar349._12_4_ >> 0xd ^
                auVar349._12_4_ * 0x80000 ^ auVar349._12_4_ * 0x40000000);
          local_160._16_4_ =
               local_160._16_4_ + local_1c0._0_4_ +
               ((uint)local_140._0_4_ >> 3 ^ (uint)local_140._0_4_ >> 7 ^ local_140._0_4_ << 0xe ^
                (uint)local_140._0_4_ >> 0x12 ^ local_140._0_4_ << 0x19) +
               ((uint)local_180._16_4_ >> 10 ^ (uint)local_180._16_4_ >> 0x11 ^
                local_180._16_4_ * 0x2000 ^ (uint)local_180._16_4_ >> 0x13 ^
               local_180._16_4_ * 0x8000);
          uStack_14c = uStack_14c + local_1c0._4_4_ +
                       ((uint)local_140._4_4_ >> 3 ^ (uint)local_140._4_4_ >> 7 ^
                        local_140._4_4_ << 0xe ^ (uint)local_140._4_4_ >> 0x12 ^
                       local_140._4_4_ << 0x19) +
                       (uStack_16c >> 10 ^ uStack_16c >> 0x11 ^ uStack_16c * 0x2000 ^
                        uStack_16c >> 0x13 ^ uStack_16c * 0x8000);
          uStack_148 = uStack_148 + local_1c0._8_4_ +
                       ((uint)local_140._8_4_ >> 3 ^ (uint)local_140._8_4_ >> 7 ^
                        local_140._8_4_ << 0xe ^ (uint)local_140._8_4_ >> 0x12 ^
                       local_140._8_4_ << 0x19) +
                       (uStack_168 >> 10 ^ uStack_168 >> 0x11 ^ uStack_168 * 0x2000 ^
                        uStack_168 >> 0x13 ^ uStack_168 * 0x8000);
          uStack_144 = uStack_144 + local_1c0._12_4_ +
                       ((uint)local_140._12_4_ >> 3 ^ (uint)local_140._12_4_ >> 7 ^
                        local_140._12_4_ << 0xe ^ (uint)local_140._12_4_ >> 0x12 ^
                       local_140._12_4_ << 0x19) +
                       (uStack_164 >> 10 ^ uStack_164 >> 0x11 ^ uStack_164 * 0x2000 ^
                        uStack_164 >> 0x13 ^ uStack_164 * 0x8000);
          auVar47 = ~auVar280 & auVar308 ^ auVar280 & auVar294;
          iVar241 = local_160._16_4_ + auVar319._0_4_ + piVar35[0x38] +
                    (auVar280._0_4_ >> 6 ^ auVar280._0_4_ * 0x80 ^ auVar280._0_4_ >> 0xb ^
                     auVar280._0_4_ * 0x200000 ^ auVar280._0_4_ >> 0x19 ^ auVar280._0_4_ * 0x4000000
                    ) + auVar47._0_4_;
          iVar242 = uStack_14c + auVar319._4_4_ + piVar35[0x39] +
                    (auVar280._4_4_ >> 6 ^ auVar280._4_4_ * 0x80 ^ auVar280._4_4_ >> 0xb ^
                     auVar280._4_4_ * 0x200000 ^ auVar280._4_4_ >> 0x19 ^ auVar280._4_4_ * 0x4000000
                    ) + auVar47._4_4_;
          iVar243 = uStack_148 + auVar319._8_4_ + piVar35[0x3a] +
                    (auVar280._8_4_ >> 6 ^ auVar280._8_4_ * 0x80 ^ auVar280._8_4_ >> 0xb ^
                     auVar280._8_4_ * 0x200000 ^ auVar280._8_4_ >> 0x19 ^ auVar280._8_4_ * 0x4000000
                    ) + auVar47._8_4_;
          iVar244 = uStack_144 + auVar319._12_4_ + piVar35[0x3b] +
                    (auVar280._12_4_ >> 6 ^ auVar280._12_4_ * 0x80 ^ auVar280._12_4_ >> 0xb ^
                     auVar280._12_4_ * 0x200000 ^ auVar280._12_4_ >> 0x19 ^
                    auVar280._12_4_ * 0x4000000) + auVar47._12_4_;
          auVar47 = auVar349 ^ (auVar359 ^ auVar349) & (auVar349 ^ auVar333);
          auVar265._0_4_ = auVar264._0_4_ + iVar241;
          auVar265._4_4_ = auVar264._4_4_ + iVar242;
          auVar265._8_4_ = auVar264._8_4_ + iVar243;
          auVar265._12_4_ = auVar264._12_4_ + iVar244;
          auVar320._0_4_ =
               auVar47._0_4_ + iVar241 +
               (auVar333._0_4_ >> 0x16 ^
                auVar333._0_4_ >> 2 ^ auVar333._0_4_ * 0x400 ^ auVar333._0_4_ >> 0xd ^
                auVar333._0_4_ * 0x80000 ^ auVar333._0_4_ * 0x40000000);
          auVar320._4_4_ =
               auVar47._4_4_ + iVar242 +
               (auVar333._4_4_ >> 0x16 ^
                auVar333._4_4_ >> 2 ^ auVar333._4_4_ * 0x400 ^ auVar333._4_4_ >> 0xd ^
                auVar333._4_4_ * 0x80000 ^ auVar333._4_4_ * 0x40000000);
          auVar320._8_4_ =
               auVar47._8_4_ + iVar243 +
               (auVar333._8_4_ >> 0x16 ^
                auVar333._8_4_ >> 2 ^ auVar333._8_4_ * 0x400 ^ auVar333._8_4_ >> 0xd ^
                auVar333._8_4_ * 0x80000 ^ auVar333._8_4_ * 0x40000000);
          auVar320._12_4_ =
               auVar47._12_4_ + iVar244 +
               (auVar333._12_4_ >> 0x16 ^
                auVar333._12_4_ >> 2 ^ auVar333._12_4_ * 0x400 ^ auVar333._12_4_ >> 0xd ^
                auVar333._12_4_ * 0x80000 ^ auVar333._12_4_ * 0x40000000);
          local_140._0_4_ =
               local_140._0_4_ + local_1c0._16_4_ +
               ((uint)local_140._16_4_ >> 3 ^ (uint)local_140._16_4_ >> 7 ^ local_140._16_4_ << 0xe
                ^ (uint)local_140._16_4_ >> 0x12 ^ local_140._16_4_ << 0x19) +
               ((uint)local_160._0_4_ >> 10 ^ (uint)local_160._0_4_ >> 0x11 ^
                local_160._0_4_ * 0x2000 ^ (uint)local_160._0_4_ >> 0x13 ^ local_160._0_4_ * 0x8000)
          ;
          local_140._4_4_ =
               local_140._4_4_ + uStack_1ac +
               (uStack_12c >> 3 ^ uStack_12c >> 7 ^ uStack_12c << 0xe ^ uStack_12c >> 0x12 ^
               uStack_12c << 0x19) +
               ((uint)local_160._4_4_ >> 10 ^ (uint)local_160._4_4_ >> 0x11 ^
                local_160._4_4_ * 0x2000 ^ (uint)local_160._4_4_ >> 0x13 ^ local_160._4_4_ * 0x8000)
          ;
          local_140._8_4_ =
               local_140._8_4_ + uStack_1a8 +
               (uStack_128 >> 3 ^ uStack_128 >> 7 ^ uStack_128 << 0xe ^ uStack_128 >> 0x12 ^
               uStack_128 << 0x19) +
               ((uint)local_160._8_4_ >> 10 ^ (uint)local_160._8_4_ >> 0x11 ^
                local_160._8_4_ * 0x2000 ^ (uint)local_160._8_4_ >> 0x13 ^ local_160._8_4_ * 0x8000)
          ;
          local_140._12_4_ =
               local_140._12_4_ + uStack_1a4 +
               (uStack_124 >> 3 ^ uStack_124 >> 7 ^ uStack_124 << 0xe ^ uStack_124 >> 0x12 ^
               uStack_124 << 0x19) +
               ((uint)local_160._12_4_ >> 10 ^ (uint)local_160._12_4_ >> 0x11 ^
                local_160._12_4_ * 0x2000 ^ (uint)local_160._12_4_ >> 0x13 ^
               local_160._12_4_ * 0x8000);
          auVar47 = ~auVar265 & auVar294 ^ auVar265 & auVar280;
          iVar241 = local_140._0_4_ + auVar308._0_4_ + piVar35[0x40] +
                    (auVar265._0_4_ >> 6 ^ auVar265._0_4_ * 0x80 ^ auVar265._0_4_ >> 0xb ^
                     auVar265._0_4_ * 0x200000 ^ auVar265._0_4_ >> 0x19 ^ auVar265._0_4_ * 0x4000000
                    ) + auVar47._0_4_;
          iVar242 = local_140._4_4_ + auVar308._4_4_ + piVar35[0x41] +
                    (auVar265._4_4_ >> 6 ^ auVar265._4_4_ * 0x80 ^ auVar265._4_4_ >> 0xb ^
                     auVar265._4_4_ * 0x200000 ^ auVar265._4_4_ >> 0x19 ^ auVar265._4_4_ * 0x4000000
                    ) + auVar47._4_4_;
          iVar243 = local_140._8_4_ + auVar308._8_4_ + piVar35[0x42] +
                    (auVar265._8_4_ >> 6 ^ auVar265._8_4_ * 0x80 ^ auVar265._8_4_ >> 0xb ^
                     auVar265._8_4_ * 0x200000 ^ auVar265._8_4_ >> 0x19 ^ auVar265._8_4_ * 0x4000000
                    ) + auVar47._8_4_;
          iVar244 = local_140._12_4_ + auVar308._12_4_ + piVar35[0x43] +
                    (auVar265._12_4_ >> 6 ^ auVar265._12_4_ * 0x80 ^ auVar265._12_4_ >> 0xb ^
                     auVar265._12_4_ * 0x200000 ^ auVar265._12_4_ >> 0x19 ^
                    auVar265._12_4_ * 0x4000000) + auVar47._12_4_;
          auVar47 = auVar333 ^ (auVar349 ^ auVar333) & (auVar333 ^ auVar320);
          auVar360._0_4_ = auVar359._0_4_ + iVar241;
          auVar360._4_4_ = auVar359._4_4_ + iVar242;
          auVar360._8_4_ = auVar359._8_4_ + iVar243;
          auVar360._12_4_ = auVar359._12_4_ + iVar244;
          auVar364._0_16_ = auVar360;
          auVar309._0_4_ =
               auVar47._0_4_ + iVar241 +
               (auVar320._0_4_ >> 0x16 ^
                auVar320._0_4_ >> 2 ^ auVar320._0_4_ * 0x400 ^ auVar320._0_4_ >> 0xd ^
                auVar320._0_4_ * 0x80000 ^ auVar320._0_4_ * 0x40000000);
          auVar309._4_4_ =
               auVar47._4_4_ + iVar242 +
               (auVar320._4_4_ >> 0x16 ^
                auVar320._4_4_ >> 2 ^ auVar320._4_4_ * 0x400 ^ auVar320._4_4_ >> 0xd ^
                auVar320._4_4_ * 0x80000 ^ auVar320._4_4_ * 0x40000000);
          auVar309._8_4_ =
               auVar47._8_4_ + iVar243 +
               (auVar320._8_4_ >> 0x16 ^
                auVar320._8_4_ >> 2 ^ auVar320._8_4_ * 0x400 ^ auVar320._8_4_ >> 0xd ^
                auVar320._8_4_ * 0x80000 ^ auVar320._8_4_ * 0x40000000);
          auVar309._12_4_ =
               auVar47._12_4_ + iVar244 +
               (auVar320._12_4_ >> 0x16 ^
                auVar320._12_4_ >> 2 ^ auVar320._12_4_ * 0x400 ^ auVar320._12_4_ >> 0xd ^
                auVar320._12_4_ * 0x80000 ^ auVar320._12_4_ * 0x40000000);
          auVar314._0_16_ = auVar309;
          local_140._16_4_ =
               local_140._16_4_ + local_1a0._0_4_ +
               ((uint)local_120._0_4_ >> 3 ^ (uint)local_120._0_4_ >> 7 ^ local_120._0_4_ << 0xe ^
                (uint)local_120._0_4_ >> 0x12 ^ local_120._0_4_ << 0x19) +
               ((uint)local_160._16_4_ >> 10 ^ (uint)local_160._16_4_ >> 0x11 ^
                local_160._16_4_ * 0x2000 ^ (uint)local_160._16_4_ >> 0x13 ^
               local_160._16_4_ * 0x8000);
          uStack_12c = uStack_12c + local_1a0._4_4_ +
                       ((uint)local_120._4_4_ >> 3 ^ (uint)local_120._4_4_ >> 7 ^
                        local_120._4_4_ << 0xe ^ (uint)local_120._4_4_ >> 0x12 ^
                       local_120._4_4_ << 0x19) +
                       (uStack_14c >> 10 ^ uStack_14c >> 0x11 ^ uStack_14c * 0x2000 ^
                        uStack_14c >> 0x13 ^ uStack_14c * 0x8000);
          uStack_128 = uStack_128 + local_1a0._8_4_ +
                       ((uint)local_120._8_4_ >> 3 ^ (uint)local_120._8_4_ >> 7 ^
                        local_120._8_4_ << 0xe ^ (uint)local_120._8_4_ >> 0x12 ^
                       local_120._8_4_ << 0x19) +
                       (uStack_148 >> 10 ^ uStack_148 >> 0x11 ^ uStack_148 * 0x2000 ^
                        uStack_148 >> 0x13 ^ uStack_148 * 0x8000);
          uStack_124 = uStack_124 + local_1a0._12_4_ +
                       ((uint)local_120._12_4_ >> 3 ^ (uint)local_120._12_4_ >> 7 ^
                        local_120._12_4_ << 0xe ^ (uint)local_120._12_4_ >> 0x12 ^
                       local_120._12_4_ << 0x19) +
                       (uStack_144 >> 10 ^ uStack_144 >> 0x11 ^ uStack_144 * 0x2000 ^
                        uStack_144 >> 0x13 ^ uStack_144 * 0x8000);
          auVar47 = ~auVar360 & auVar280 ^ auVar360 & auVar265;
          iVar241 = local_140._16_4_ + auVar294._0_4_ + piVar35[0x48] +
                    (auVar360._0_4_ >> 6 ^ auVar360._0_4_ * 0x80 ^ auVar360._0_4_ >> 0xb ^
                     auVar360._0_4_ * 0x200000 ^ auVar360._0_4_ >> 0x19 ^ auVar360._0_4_ * 0x4000000
                    ) + auVar47._0_4_;
          iVar242 = uStack_12c + auVar294._4_4_ + piVar35[0x49] +
                    (auVar360._4_4_ >> 6 ^ auVar360._4_4_ * 0x80 ^ auVar360._4_4_ >> 0xb ^
                     auVar360._4_4_ * 0x200000 ^ auVar360._4_4_ >> 0x19 ^ auVar360._4_4_ * 0x4000000
                    ) + auVar47._4_4_;
          iVar243 = uStack_128 + auVar294._8_4_ + piVar35[0x4a] +
                    (auVar360._8_4_ >> 6 ^ auVar360._8_4_ * 0x80 ^ auVar360._8_4_ >> 0xb ^
                     auVar360._8_4_ * 0x200000 ^ auVar360._8_4_ >> 0x19 ^ auVar360._8_4_ * 0x4000000
                    ) + auVar47._8_4_;
          iVar244 = uStack_124 + auVar294._12_4_ + piVar35[0x4b] +
                    (auVar360._12_4_ >> 6 ^ auVar360._12_4_ * 0x80 ^ auVar360._12_4_ >> 0xb ^
                     auVar360._12_4_ * 0x200000 ^ auVar360._12_4_ >> 0x19 ^
                    auVar360._12_4_ * 0x4000000) + auVar47._12_4_;
          auVar47 = auVar320 ^ (auVar333 ^ auVar320) & (auVar320 ^ auVar309);
          auVar350._0_4_ = auVar349._0_4_ + iVar241;
          auVar350._4_4_ = auVar349._4_4_ + iVar242;
          auVar350._8_4_ = auVar349._8_4_ + iVar243;
          auVar350._12_4_ = auVar349._12_4_ + iVar244;
          auVar352._0_16_ = auVar350;
          auVar295._0_4_ =
               auVar47._0_4_ + iVar241 +
               (auVar309._0_4_ >> 0x16 ^
                auVar309._0_4_ >> 2 ^ auVar309._0_4_ * 0x400 ^ auVar309._0_4_ >> 0xd ^
                auVar309._0_4_ * 0x80000 ^ auVar309._0_4_ * 0x40000000);
          auVar295._4_4_ =
               auVar47._4_4_ + iVar242 +
               (auVar309._4_4_ >> 0x16 ^
                auVar309._4_4_ >> 2 ^ auVar309._4_4_ * 0x400 ^ auVar309._4_4_ >> 0xd ^
                auVar309._4_4_ * 0x80000 ^ auVar309._4_4_ * 0x40000000);
          auVar295._8_4_ =
               auVar47._8_4_ + iVar243 +
               (auVar309._8_4_ >> 0x16 ^
                auVar309._8_4_ >> 2 ^ auVar309._8_4_ * 0x400 ^ auVar309._8_4_ >> 0xd ^
                auVar309._8_4_ * 0x80000 ^ auVar309._8_4_ * 0x40000000);
          auVar295._12_4_ =
               auVar47._12_4_ + iVar244 +
               (auVar309._12_4_ >> 0x16 ^
                auVar309._12_4_ >> 2 ^ auVar309._12_4_ * 0x400 ^ auVar309._12_4_ >> 0xd ^
                auVar309._12_4_ * 0x80000 ^ auVar309._12_4_ * 0x40000000);
          auVar301._0_16_ = auVar295;
          local_120._0_4_ =
               local_120._0_4_ + local_1a0._16_4_ +
               ((uint)local_120._16_4_ >> 3 ^ (uint)local_120._16_4_ >> 7 ^ local_120._16_4_ << 0xe
                ^ (uint)local_120._16_4_ >> 0x12 ^ local_120._16_4_ << 0x19) +
               ((uint)local_140._0_4_ >> 10 ^ (uint)local_140._0_4_ >> 0x11 ^
                local_140._0_4_ * 0x2000 ^ (uint)local_140._0_4_ >> 0x13 ^ local_140._0_4_ * 0x8000)
          ;
          local_120._4_4_ =
               local_120._4_4_ + uStack_18c +
               (uStack_10c >> 3 ^ uStack_10c >> 7 ^ uStack_10c << 0xe ^ uStack_10c >> 0x12 ^
               uStack_10c << 0x19) +
               ((uint)local_140._4_4_ >> 10 ^ (uint)local_140._4_4_ >> 0x11 ^
                local_140._4_4_ * 0x2000 ^ (uint)local_140._4_4_ >> 0x13 ^ local_140._4_4_ * 0x8000)
          ;
          local_120._8_4_ =
               local_120._8_4_ + uStack_188 +
               (uStack_108 >> 3 ^ uStack_108 >> 7 ^ uStack_108 << 0xe ^ uStack_108 >> 0x12 ^
               uStack_108 << 0x19) +
               ((uint)local_140._8_4_ >> 10 ^ (uint)local_140._8_4_ >> 0x11 ^
                local_140._8_4_ * 0x2000 ^ (uint)local_140._8_4_ >> 0x13 ^ local_140._8_4_ * 0x8000)
          ;
          local_120._12_4_ =
               local_120._12_4_ + uStack_184 +
               (uStack_104 >> 3 ^ uStack_104 >> 7 ^ uStack_104 << 0xe ^ uStack_104 >> 0x12 ^
               uStack_104 << 0x19) +
               ((uint)local_140._12_4_ >> 10 ^ (uint)local_140._12_4_ >> 0x11 ^
                local_140._12_4_ * 0x2000 ^ (uint)local_140._12_4_ >> 0x13 ^
               local_140._12_4_ * 0x8000);
          auVar47 = ~auVar350 & auVar265 ^ auVar350 & auVar360;
          iVar241 = local_120._0_4_ + auVar280._0_4_ + piVar35[0x50] +
                    (auVar350._0_4_ >> 6 ^ auVar350._0_4_ * 0x80 ^ auVar350._0_4_ >> 0xb ^
                     auVar350._0_4_ * 0x200000 ^ auVar350._0_4_ >> 0x19 ^ auVar350._0_4_ * 0x4000000
                    ) + auVar47._0_4_;
          iVar242 = local_120._4_4_ + auVar280._4_4_ + piVar35[0x51] +
                    (auVar350._4_4_ >> 6 ^ auVar350._4_4_ * 0x80 ^ auVar350._4_4_ >> 0xb ^
                     auVar350._4_4_ * 0x200000 ^ auVar350._4_4_ >> 0x19 ^ auVar350._4_4_ * 0x4000000
                    ) + auVar47._4_4_;
          iVar243 = local_120._8_4_ + auVar280._8_4_ + piVar35[0x52] +
                    (auVar350._8_4_ >> 6 ^ auVar350._8_4_ * 0x80 ^ auVar350._8_4_ >> 0xb ^
                     auVar350._8_4_ * 0x200000 ^ auVar350._8_4_ >> 0x19 ^ auVar350._8_4_ * 0x4000000
                    ) + auVar47._8_4_;
          iVar244 = local_120._12_4_ + auVar280._12_4_ + piVar35[0x53] +
                    (auVar350._12_4_ >> 6 ^ auVar350._12_4_ * 0x80 ^ auVar350._12_4_ >> 0xb ^
                     auVar350._12_4_ * 0x200000 ^ auVar350._12_4_ >> 0x19 ^
                    auVar350._12_4_ * 0x4000000) + auVar47._12_4_;
          auVar47 = auVar309 ^ (auVar320 ^ auVar309) & (auVar309 ^ auVar295);
          auVar334._0_4_ = auVar333._0_4_ + iVar241;
          auVar334._4_4_ = auVar333._4_4_ + iVar242;
          auVar334._8_4_ = auVar333._8_4_ + iVar243;
          auVar334._12_4_ = auVar333._12_4_ + iVar244;
          auVar339._0_16_ = auVar334;
          auVar281._0_4_ =
               auVar47._0_4_ + iVar241 +
               (auVar295._0_4_ >> 0x16 ^
                auVar295._0_4_ >> 2 ^ auVar295._0_4_ * 0x400 ^ auVar295._0_4_ >> 0xd ^
                auVar295._0_4_ * 0x80000 ^ auVar295._0_4_ * 0x40000000);
          auVar281._4_4_ =
               auVar47._4_4_ + iVar242 +
               (auVar295._4_4_ >> 0x16 ^
                auVar295._4_4_ >> 2 ^ auVar295._4_4_ * 0x400 ^ auVar295._4_4_ >> 0xd ^
                auVar295._4_4_ * 0x80000 ^ auVar295._4_4_ * 0x40000000);
          auVar281._8_4_ =
               auVar47._8_4_ + iVar243 +
               (auVar295._8_4_ >> 0x16 ^
                auVar295._8_4_ >> 2 ^ auVar295._8_4_ * 0x400 ^ auVar295._8_4_ >> 0xd ^
                auVar295._8_4_ * 0x80000 ^ auVar295._8_4_ * 0x40000000);
          auVar281._12_4_ =
               auVar47._12_4_ + iVar244 +
               (auVar295._12_4_ >> 0x16 ^
                auVar295._12_4_ >> 2 ^ auVar295._12_4_ * 0x400 ^ auVar295._12_4_ >> 0xd ^
                auVar295._12_4_ * 0x80000 ^ auVar295._12_4_ * 0x40000000);
          auVar288._0_16_ = auVar281;
          auVar240._0_16_ = local_200._0_16_;
          local_120._16_4_ =
               local_120._16_4_ + local_180._0_4_ +
               ((uint)local_200._0_4_ >> 3 ^ (uint)local_200._0_4_ >> 7 ^ local_200._0_4_ * 0x4000 ^
                (uint)local_200._0_4_ >> 0x12 ^ local_200._0_4_ * 0x2000000) +
               ((uint)local_140._16_4_ >> 10 ^ (uint)local_140._16_4_ >> 0x11 ^
                local_140._16_4_ * 0x2000 ^ (uint)local_140._16_4_ >> 0x13 ^
               local_140._16_4_ * 0x8000);
          uStack_10c = uStack_10c + local_180._4_4_ +
                       ((uint)local_200._4_4_ >> 3 ^ (uint)local_200._4_4_ >> 7 ^
                        local_200._4_4_ * 0x4000 ^ (uint)local_200._4_4_ >> 0x12 ^
                       local_200._4_4_ * 0x2000000) +
                       (uStack_12c >> 10 ^ uStack_12c >> 0x11 ^ uStack_12c * 0x2000 ^
                        uStack_12c >> 0x13 ^ uStack_12c * 0x8000);
          uStack_108 = uStack_108 + local_180._8_4_ +
                       ((uint)local_200._8_4_ >> 3 ^ (uint)local_200._8_4_ >> 7 ^
                        local_200._8_4_ * 0x4000 ^ (uint)local_200._8_4_ >> 0x12 ^
                       local_200._8_4_ * 0x2000000) +
                       (uStack_128 >> 10 ^ uStack_128 >> 0x11 ^ uStack_128 * 0x2000 ^
                        uStack_128 >> 0x13 ^ uStack_128 * 0x8000);
          uStack_104 = uStack_104 + local_180._12_4_ +
                       ((uint)local_200._12_4_ >> 3 ^ (uint)local_200._12_4_ >> 7 ^
                        local_200._12_4_ * 0x4000 ^ (uint)local_200._12_4_ >> 0x12 ^
                       local_200._12_4_ * 0x2000000) +
                       (uStack_124 >> 10 ^ uStack_124 >> 0x11 ^ uStack_124 * 0x2000 ^
                        uStack_124 >> 0x13 ^ uStack_124 * 0x8000);
          auVar47 = ~auVar334 & auVar360 ^ auVar334 & auVar350;
          in_ZMM4._0_16_ = auVar295 ^ auVar281;
          in_ZMM6._0_4_ =
               local_120._16_4_ + auVar265._0_4_ + piVar35[0x58] +
               (auVar334._0_4_ >> 6 ^ auVar334._0_4_ * 0x80 ^ auVar334._0_4_ >> 0xb ^
                auVar334._0_4_ * 0x200000 ^ auVar334._0_4_ >> 0x19 ^ auVar334._0_4_ * 0x4000000) +
               auVar47._0_4_;
          in_ZMM6._4_4_ =
               uStack_10c + auVar265._4_4_ + piVar35[0x59] +
               (auVar334._4_4_ >> 6 ^ auVar334._4_4_ * 0x80 ^ auVar334._4_4_ >> 0xb ^
                auVar334._4_4_ * 0x200000 ^ auVar334._4_4_ >> 0x19 ^ auVar334._4_4_ * 0x4000000) +
               auVar47._4_4_;
          in_ZMM6._8_4_ =
               uStack_108 + auVar265._8_4_ + piVar35[0x5a] +
               (auVar334._8_4_ >> 6 ^ auVar334._8_4_ * 0x80 ^ auVar334._8_4_ >> 0xb ^
                auVar334._8_4_ * 0x200000 ^ auVar334._8_4_ >> 0x19 ^ auVar334._8_4_ * 0x4000000) +
               auVar47._8_4_;
          in_ZMM6._12_4_ =
               uStack_104 + auVar265._12_4_ + piVar35[0x5b] +
               (auVar334._12_4_ >> 6 ^ auVar334._12_4_ * 0x80 ^ auVar334._12_4_ >> 0xb ^
                auVar334._12_4_ * 0x200000 ^ auVar334._12_4_ >> 0x19 ^ auVar334._12_4_ * 0x4000000)
               + auVar47._12_4_;
          auVar47 = auVar295 ^ (auVar309 ^ auVar295) & in_ZMM4._0_16_;
          auVar321._0_4_ = auVar320._0_4_ + in_ZMM6._0_4_;
          auVar321._4_4_ = auVar320._4_4_ + in_ZMM6._4_4_;
          auVar321._8_4_ = auVar320._8_4_ + in_ZMM6._8_4_;
          auVar321._12_4_ = auVar320._12_4_ + in_ZMM6._12_4_;
          auVar323._0_16_ = auVar321;
          auVar266._0_4_ =
               auVar47._0_4_ + in_ZMM6._0_4_ +
               (auVar281._0_4_ >> 0x16 ^
                auVar281._0_4_ >> 2 ^ auVar281._0_4_ * 0x400 ^ auVar281._0_4_ >> 0xd ^
                auVar281._0_4_ * 0x80000 ^ auVar281._0_4_ * 0x40000000);
          auVar266._4_4_ =
               auVar47._4_4_ + in_ZMM6._4_4_ +
               (auVar281._4_4_ >> 0x16 ^
                auVar281._4_4_ >> 2 ^ auVar281._4_4_ * 0x400 ^ auVar281._4_4_ >> 0xd ^
                auVar281._4_4_ * 0x80000 ^ auVar281._4_4_ * 0x40000000);
          auVar266._8_4_ =
               auVar47._8_4_ + in_ZMM6._8_4_ +
               (auVar281._8_4_ >> 0x16 ^
                auVar281._8_4_ >> 2 ^ auVar281._8_4_ * 0x400 ^ auVar281._8_4_ >> 0xd ^
                auVar281._8_4_ * 0x80000 ^ auVar281._8_4_ * 0x40000000);
          auVar266._12_4_ =
               auVar47._12_4_ + in_ZMM6._12_4_ +
               (auVar281._12_4_ >> 0x16 ^
                auVar281._12_4_ >> 2 ^ auVar281._12_4_ * 0x400 ^ auVar281._12_4_ >> 0xd ^
                auVar281._12_4_ * 0x80000 ^ auVar281._12_4_ * 0x40000000);
          auVar273._0_16_ = auVar266;
          piVar35 = piVar35 + 0x80;
          iVar122 = iVar122 + -1;
        } while (iVar122 != 0);
        uVar33 = local_100._12_4_;
        if ((int)local_100._0_4_ < 2) {
          puVar37 = (uint *)&DAT_00107680;
        }
        if ((int)local_100._4_4_ < 2) {
          puVar40 = (undefined4 *)&DAT_00107680;
        }
        auVar245._0_4_ = -(uint)(0 < (int)local_100._0_4_);
        auVar245._4_4_ = -(uint)(0 < (int)local_100._4_4_);
        auVar245._8_4_ = -(uint)(0 < (int)local_100._8_4_);
        auVar245._12_4_ = -(uint)(0 < (int)local_100._12_4_);
        if ((int)local_100._8_4_ < 2) {
          puVar44 = (undefined4 *)&DAT_00107680;
        }
        local_100._4_4_ = local_100._4_4_ + auVar245._4_4_;
        local_100._0_4_ = local_100._0_4_ + auVar245._0_4_;
        local_100._8_4_ = local_100._8_4_ + auVar245._8_4_;
        local_100._12_4_ = local_100._12_4_ + auVar245._12_4_;
        if ((int)uVar33 < 2) {
          puVar45 = (undefined4 *)&DAT_00107680;
        }
        auVar266 = auVar266 & auVar245;
        auVar281 = auVar281 & auVar245;
        auVar295 = auVar295 & auVar245;
        auVar309 = auVar309 & auVar245;
        auVar267._0_4_ = auVar266._0_4_ + *(int *)param_1[-4];
        auVar267._4_4_ = auVar266._4_4_ + *(int *)(param_1[-4] + 4);
        auVar267._8_4_ = auVar266._8_4_ + *(int *)(param_1[-4] + 8);
        auVar267._12_4_ = auVar266._12_4_ + *(int *)(param_1[-4] + 0xc);
        in_ZMM8._16_48_ = auVar273._16_48_;
        in_ZMM8._0_16_ = auVar267;
        auVar47 = *(undefined1 (*) [16])*param_1;
        auVar321 = auVar321 & auVar245;
        auVar282._0_4_ = auVar281._0_4_ + *(int *)param_1[-3];
        auVar282._4_4_ = auVar281._4_4_ + *(int *)(param_1[-3] + 4);
        auVar282._8_4_ = auVar281._8_4_ + *(int *)(param_1[-3] + 8);
        auVar282._12_4_ = auVar281._12_4_ + *(int *)(param_1[-3] + 0xc);
        in_ZMM9._16_48_ = auVar288._16_48_;
        in_ZMM9._0_16_ = auVar282;
        auVar117 = *(undefined1 (*) [16])param_1[1];
        auVar334 = auVar334 & auVar245;
        auVar296._0_4_ = auVar295._0_4_ + *(int *)param_1[-2];
        auVar296._4_4_ = auVar295._4_4_ + *(int *)(param_1[-2] + 4);
        auVar296._8_4_ = auVar295._8_4_ + *(int *)(param_1[-2] + 8);
        auVar296._12_4_ = auVar295._12_4_ + *(int *)(param_1[-2] + 0xc);
        in_ZMM10._16_48_ = auVar301._16_48_;
        in_ZMM10._0_16_ = auVar296;
        auVar337 = *(undefined1 (*) [16])param_1[2];
        auVar350 = auVar350 & auVar245;
        auVar310._0_4_ = auVar309._0_4_ + *(int *)param_1[-1];
        auVar310._4_4_ = auVar309._4_4_ + *(int *)(param_1[-1] + 4);
        auVar310._8_4_ = auVar309._8_4_ + *(int *)(param_1[-1] + 8);
        auVar310._12_4_ = auVar309._12_4_ + *(int *)(param_1[-1] + 0xc);
        in_ZMM11._16_48_ = auVar314._16_48_;
        in_ZMM11._0_16_ = auVar310;
        auVar336 = *(undefined1 (*) [16])param_1[3];
        in_ZMM5._16_48_ = auVar240._16_48_;
        in_ZMM5._0_16_ = auVar336;
        auVar360 = auVar360 & auVar245;
        auVar322._0_4_ = auVar321._0_4_ + auVar47._0_4_;
        auVar322._4_4_ = auVar321._4_4_ + auVar47._4_4_;
        auVar322._8_4_ = auVar321._8_4_ + auVar47._8_4_;
        auVar322._12_4_ = auVar321._12_4_ + auVar47._12_4_;
        in_ZMM12._16_48_ = auVar323._16_48_;
        in_ZMM12._0_16_ = auVar322;
        auVar335._0_4_ = auVar334._0_4_ + auVar117._0_4_;
        auVar335._4_4_ = auVar334._4_4_ + auVar117._4_4_;
        auVar335._8_4_ = auVar334._8_4_ + auVar117._8_4_;
        auVar335._12_4_ = auVar334._12_4_ + auVar117._12_4_;
        in_ZMM13._16_48_ = auVar339._16_48_;
        in_ZMM13._0_16_ = auVar335;
        *(undefined1 (*) [16])param_1[-4] = auVar267;
        auVar351._0_4_ = auVar350._0_4_ + auVar337._0_4_;
        auVar351._4_4_ = auVar350._4_4_ + auVar337._4_4_;
        auVar351._8_4_ = auVar350._8_4_ + auVar337._8_4_;
        auVar351._12_4_ = auVar350._12_4_ + auVar337._12_4_;
        in_ZMM14._16_48_ = auVar352._16_48_;
        in_ZMM14._0_16_ = auVar351;
        *(undefined1 (*) [16])param_1[-3] = auVar282;
        auVar361._0_4_ = auVar360._0_4_ + auVar336._0_4_;
        auVar361._4_4_ = auVar360._4_4_ + auVar336._4_4_;
        auVar361._8_4_ = auVar360._8_4_ + auVar336._8_4_;
        auVar361._12_4_ = auVar360._12_4_ + auVar336._12_4_;
        in_ZMM15._16_48_ = auVar364._16_48_;
        in_ZMM15._0_16_ = auVar361;
        *(undefined1 (*) [16])param_1[-2] = auVar296;
        *(undefined1 (*) [16])param_1[-1] = auVar310;
        *(undefined1 (*) [16])*param_1 = auVar322;
        *(undefined1 (*) [16])param_1[1] = auVar335;
        *(undefined1 (*) [16])param_1[2] = auVar351;
        *(undefined1 (*) [16])param_1[3] = auVar361;
        local_f0 = auVar8._16_16_;
        auVar9 = _local_100;
        in_ZMM6._0_16_ = _DAT_00107e00;
        iVar34 = iVar34 + -1;
      } while (iVar34 != 0);
      uStack_e8 = auVar8._24_4_;
      param_1 = (undefined1 (*) [32])(*param_1 + 0x10);
      param_2 = param_2 + 8;
      param_3 = uStack_e8 - 1;
      _local_100 = auVar9;
    } while (param_3 != 0);
    return;
  }
  if ((1 < param_3) && ((_DAT_00109004 >> 0x20 & 0x20) != 0)) {
    pauVar6 = param_1 + 4;
    puVar37 = (uint *)*param_2;
    local_100._0_4_ = *(undefined4 *)(param_2 + 1);
    iVar34 = local_100._0_4_;
    if ((int)local_100._0_4_ < 1) {
      puVar37 = (uint *)&DAT_00107680;
      iVar34 = 0;
    }
    puVar42 = (uint *)param_2[2];
    local_100._4_4_ = *(undefined4 *)(param_2 + 3);
    if (iVar34 < (int)local_100._4_4_) {
      iVar34 = local_100._4_4_;
    }
    if ((int)local_100._4_4_ < 1) {
      puVar42 = (uint *)&DAT_00107680;
    }
    puVar40 = (undefined4 *)param_2[4];
    local_100._8_4_ = *(undefined4 *)(param_2 + 5);
    if (iVar34 < (int)local_100._8_4_) {
      iVar34 = local_100._8_4_;
    }
    if ((int)local_100._8_4_ < 1) {
      puVar40 = (undefined4 *)&DAT_00107680;
    }
    puVar44 = (undefined4 *)param_2[6];
    local_100._12_4_ = *(undefined4 *)(param_2 + 7);
    if (iVar34 < (int)local_100._12_4_) {
      iVar34 = local_100._12_4_;
    }
    if ((int)local_100._12_4_ < 1) {
      puVar44 = (undefined4 *)&DAT_00107680;
    }
    puVar39 = (uint *)param_2[8];
    unique0x0000de00 = *(int *)(param_2 + 9);
    if (iVar34 < unique0x0000de00) {
      iVar34 = unique0x0000de00;
    }
    if (unique0x0000de00 < 1) {
      puVar39 = (uint *)&DAT_00107680;
    }
    puVar43 = (uint *)param_2[10];
    unique0x0000de00 = *(int *)(param_2 + 0xb);
    if (iVar34 < unique0x0000de00) {
      iVar34 = unique0x0000de00;
    }
    if (unique0x0000de00 < 1) {
      puVar43 = (uint *)&DAT_00107680;
    }
    puVar45 = (undefined4 *)param_2[0xc];
    uStack_e8 = *(uint *)(param_2 + 0xd);
    if (iVar34 < (int)uStack_e8) {
      iVar34 = uStack_e8;
    }
    if ((int)uStack_e8 < 1) {
      puVar45 = (undefined4 *)&DAT_00107680;
    }
    puVar46 = (undefined4 *)param_2[0xe];
    iStack_e4 = *(int *)(param_2 + 0xf);
    if (iVar34 < iStack_e4) {
      iVar34 = iStack_e4;
    }
    if (iStack_e4 < 1) {
      puVar46 = (undefined4 *)&DAT_00107680;
    }
    auVar8 = *param_1;
    auVar9 = param_1[1];
    auVar10 = param_1[2];
    auVar11 = param_1[3];
    auVar12 = *pauVar6;
    auVar87 = param_1[5];
    auVar91 = param_1[6];
    auVar13 = param_1[7];
    auVar90._16_16_ = _DAT_00107e10;
    auVar90._0_16_ = _DAT_00107e00;
    do {
      auVar47 = vpinsrd_avx(ZEXT416(*puVar37),*puVar40,1);
      auVar117 = vpinsrd_avx(ZEXT416(*puVar39),*puVar45,1);
      auVar337 = vpinsrd_avx(ZEXT416(*puVar42),*puVar44,1);
      auVar88 = vpunpckldq_avx2(ZEXT1632(auVar47),ZEXT1632(auVar337));
      auVar47 = vpinsrd_avx(ZEXT416(*puVar43),*puVar46,1);
      auVar89 = vpunpckldq_avx2(ZEXT1632(auVar117),ZEXT1632(auVar47));
      auVar128._0_16_ = ZEXT116(0) * auVar89._0_16_ + ZEXT116(1) * auVar88._0_16_;
      auVar128._16_16_ = ZEXT116(0) * auVar88._16_16_ + ZEXT116(1) * auVar89._0_16_;
      auVar88 = vpshufb_avx2(auVar128,auVar90);
      auVar255 = vpsrld_avx2(auVar12,6);
      auVar114 = vpslld_avx2(auVar12,0x1a);
      auVar13 = vpaddd_avx2(auVar88,auVar13);
      auVar83 = vpsrld_avx2(auVar12,0xb);
      auVar115 = vpslld_avx2(auVar12,0x15);
      auVar89._4_4_ = _UNK_00107604;
      auVar89._0_4_ = _K256;
      auVar89._8_4_ = _UNK_00107608;
      auVar89._12_4_ = _UNK_0010760c;
      auVar89._16_16_ = _UNK_00107610;
      auVar13 = vpaddd_avx2(auVar13,auVar89);
      auVar84 = vpsrld_avx2(auVar12,0x19);
      auVar116 = vpslld_avx2(auVar12,7);
      auVar86 = vpandn_avx2(auVar12,auVar91);
      auVar89 = vpand_avx2(auVar12,auVar87);
      auVar363 = vpsrld_avx2(auVar8,2);
      auVar85 = vpslld_avx2(auVar8,0x1e);
      auVar13 = vpaddd_avx2(auVar13,auVar255 ^ auVar114 ^ auVar83 ^ auVar115 ^ auVar84 ^ auVar116);
      auVar83 = vpsrld_avx2(auVar8,0xd);
      auVar84 = vpslld_avx2(auVar8,0x13);
      auVar13 = vpaddd_avx2(auVar13,auVar86 ^ auVar89);
      auVar89 = vpand_avx2(auVar10 ^ auVar9,auVar9 ^ auVar8);
      auVar86 = vpsrld_avx2(auVar8,0x16);
      auVar114 = vpslld_avx2(auVar8,10);
      auVar11 = vpaddd_avx2(auVar11,auVar13);
      auVar13 = vpaddd_avx2(auVar9 ^ auVar89,auVar13);
      auVar13 = vpaddd_avx2(auVar13,auVar363 ^ auVar85 ^ auVar83 ^ auVar84 ^ auVar86 ^ auVar114);
      auVar47 = vpinsrd_avx(ZEXT416(puVar37[1]),puVar40[1],1);
      auVar117 = vpinsrd_avx(ZEXT416(puVar39[1]),puVar45[1],1);
      auVar337 = vpinsrd_avx(ZEXT416(puVar42[1]),puVar44[1],1);
      auVar89 = vpunpckldq_avx2(ZEXT1632(auVar47),ZEXT1632(auVar337));
      auVar47 = vpinsrd_avx(ZEXT416(puVar43[1]),puVar46[1],1);
      auVar86 = vpunpckldq_avx2(ZEXT1632(auVar117),ZEXT1632(auVar47));
      auVar129._0_16_ = ZEXT116(0) * auVar86._0_16_ + ZEXT116(1) * auVar89._0_16_;
      auVar129._16_16_ = ZEXT116(0) * auVar89._16_16_ + ZEXT116(1) * auVar86._0_16_;
      auStack_2e0 = vpshufb_avx2(auVar129,auVar90);
      auVar255 = vpsrld_avx2(auVar11,6);
      auVar114 = vpslld_avx2(auVar11,0x1a);
      auVar91 = vpaddd_avx2(auStack_2e0,auVar91);
      auVar83 = vpsrld_avx2(auVar11,0xb);
      auVar115 = vpslld_avx2(auVar11,0x15);
      auVar86._4_4_ = _UNK_00107624;
      auVar86._0_4_ = _DAT_00107620;
      auVar86._8_4_ = _UNK_00107628;
      auVar86._12_4_ = _UNK_0010762c;
      auVar86._16_16_ = _UNK_00107630;
      auVar91 = vpaddd_avx2(auVar91,auVar86);
      auVar84 = vpsrld_avx2(auVar11,0x19);
      auVar116 = vpslld_avx2(auVar11,7);
      auVar86 = vpandn_avx2(auVar11,auVar87);
      auVar89 = vpand_avx2(auVar11,auVar12);
      auVar363 = vpsrld_avx2(auVar13,2);
      auVar85 = vpslld_avx2(auVar13,0x1e);
      auVar91 = vpaddd_avx2(auVar91,auVar255 ^ auVar114 ^ auVar83 ^ auVar115 ^ auVar84 ^ auVar116);
      auVar83 = vpsrld_avx2(auVar13,0xd);
      auVar84 = vpslld_avx2(auVar13,0x13);
      auVar91 = vpaddd_avx2(auVar91,auVar86 ^ auVar89);
      auVar89 = vpand_avx2(auVar9 ^ auVar8,auVar8 ^ auVar13);
      auVar86 = vpsrld_avx2(auVar13,0x16);
      auVar114 = vpslld_avx2(auVar13,10);
      auVar10 = vpaddd_avx2(auVar10,auVar91);
      auVar91 = vpaddd_avx2(auVar8 ^ auVar89,auVar91);
      auVar91 = vpaddd_avx2(auVar91,auVar363 ^ auVar85 ^ auVar83 ^ auVar84 ^ auVar86 ^ auVar114);
      auVar47 = vpinsrd_avx(ZEXT416(puVar37[2]),puVar40[2],1);
      auVar117 = vpinsrd_avx(ZEXT416(puVar39[2]),puVar45[2],1);
      auVar337 = vpinsrd_avx(ZEXT416(puVar42[2]),puVar44[2],1);
      auVar89 = vpunpckldq_avx2(ZEXT1632(auVar47),ZEXT1632(auVar337));
      auVar47 = vpinsrd_avx(ZEXT416(puVar43[2]),puVar46[2],1);
      auVar86 = vpunpckldq_avx2(ZEXT1632(auVar117),ZEXT1632(auVar47));
      auVar130._0_16_ = ZEXT116(0) * auVar86._0_16_ + ZEXT116(1) * auVar89._0_16_;
      auVar130._16_16_ = ZEXT116(0) * auVar89._16_16_ + ZEXT116(1) * auVar86._0_16_;
      auStack_2c0 = vpshufb_avx2(auVar130,auVar90);
      auVar255 = vpsrld_avx2(auVar10,6);
      auVar114 = vpslld_avx2(auVar10,0x1a);
      auVar87 = vpaddd_avx2(auStack_2c0,auVar87);
      auVar84 = vpsrld_avx2(auVar10,0xb);
      auVar115 = vpslld_avx2(auVar10,0x15);
      auVar83._4_4_ = _UNK_00107644;
      auVar83._0_4_ = _DAT_00107640;
      auVar83._8_4_ = _UNK_00107648;
      auVar83._12_4_ = _UNK_0010764c;
      auVar83._16_16_ = _UNK_00107650;
      auVar87 = vpaddd_avx2(auVar87,auVar83);
      auVar83 = vpsrld_avx2(auVar10,0x19);
      auVar116 = vpslld_avx2(auVar10,7);
      auVar86 = vpandn_avx2(auVar10,auVar12);
      auVar89 = vpand_avx2(auVar10,auVar11);
      auVar363 = vpsrld_avx2(auVar91,2);
      auVar85 = vpslld_avx2(auVar91,0x1e);
      auVar87 = vpaddd_avx2(auVar87,auVar255 ^ auVar114 ^ auVar84 ^ auVar115 ^ auVar83 ^ auVar116);
      auVar83 = vpsrld_avx2(auVar91,0xd);
      auVar84 = vpslld_avx2(auVar91,0x13);
      auVar87 = vpaddd_avx2(auVar87,auVar86 ^ auVar89);
      auVar89 = vpand_avx2(auVar8 ^ auVar13,auVar13 ^ auVar91);
      auVar86 = vpsrld_avx2(auVar91,0x16);
      auVar114 = vpslld_avx2(auVar91,10);
      auVar9 = vpaddd_avx2(auVar9,auVar87);
      auVar87 = vpaddd_avx2(auVar13 ^ auVar89,auVar87);
      auVar87 = vpaddd_avx2(auVar87,auVar363 ^ auVar85 ^ auVar83 ^ auVar84 ^ auVar86 ^ auVar114);
      auVar47 = vpinsrd_avx(ZEXT416(puVar37[3]),puVar40[3],1);
      auVar117 = vpinsrd_avx(ZEXT416(puVar39[3]),puVar45[3],1);
      auVar337 = vpinsrd_avx(ZEXT416(puVar42[3]),puVar44[3],1);
      auVar89 = vpunpckldq_avx2(ZEXT1632(auVar47),ZEXT1632(auVar337));
      auVar47 = vpinsrd_avx(ZEXT416(puVar43[3]),puVar46[3],1);
      auVar86 = vpunpckldq_avx2(ZEXT1632(auVar117),ZEXT1632(auVar47));
      auVar131._0_16_ = ZEXT116(0) * auVar86._0_16_ + ZEXT116(1) * auVar89._0_16_;
      auVar131._16_16_ = ZEXT116(0) * auVar89._16_16_ + ZEXT116(1) * auVar86._0_16_;
      auStack_2a0 = vpshufb_avx2(auVar131,auVar90);
      auVar255 = vpsrld_avx2(auVar9,6);
      auVar114 = vpslld_avx2(auVar9,0x1a);
      auVar12 = vpaddd_avx2(auStack_2a0,auVar12);
      auVar83 = vpsrld_avx2(auVar9,0xb);
      auVar115 = vpslld_avx2(auVar9,0x15);
      auVar84._4_4_ = _UNK_00107664;
      auVar84._0_4_ = _DAT_00107660;
      auVar84._8_4_ = _UNK_00107668;
      auVar84._12_4_ = _UNK_0010766c;
      auVar84._16_16_ = _UNK_00107670;
      auVar12 = vpaddd_avx2(auVar12,auVar84);
      auVar84 = vpsrld_avx2(auVar9,0x19);
      auVar116 = vpslld_avx2(auVar9,7);
      auVar86 = vpandn_avx2(auVar9,auVar11);
      auVar89 = vpand_avx2(auVar9,auVar10);
      auVar363 = vpsrld_avx2(auVar87,2);
      auVar85 = vpslld_avx2(auVar87,0x1e);
      auVar12 = vpaddd_avx2(auVar12,auVar255 ^ auVar114 ^ auVar83 ^ auVar115 ^ auVar84 ^ auVar116);
      auVar83 = vpsrld_avx2(auVar87,0xd);
      auVar84 = vpslld_avx2(auVar87,0x13);
      auVar12 = vpaddd_avx2(auVar12,auVar86 ^ auVar89);
      auVar89 = vpand_avx2(auVar13 ^ auVar91,auVar91 ^ auVar87);
      auVar86 = vpsrld_avx2(auVar87,0x16);
      auVar114 = vpslld_avx2(auVar87,10);
      auVar8 = vpaddd_avx2(auVar8,auVar12);
      auVar12 = vpaddd_avx2(auVar91 ^ auVar89,auVar12);
      auVar12 = vpaddd_avx2(auVar12,auVar363 ^ auVar85 ^ auVar83 ^ auVar84 ^ auVar86 ^ auVar114);
      auVar47 = vpinsrd_avx(ZEXT416(puVar37[4]),puVar40[4],1);
      auVar117 = vpinsrd_avx(ZEXT416(puVar39[4]),puVar45[4],1);
      auVar337 = vpinsrd_avx(ZEXT416(puVar42[4]),puVar44[4],1);
      auVar89 = vpunpckldq_avx2(ZEXT1632(auVar47),ZEXT1632(auVar337));
      auVar47 = vpinsrd_avx(ZEXT416(puVar43[4]),puVar46[4],1);
      auVar86 = vpunpckldq_avx2(ZEXT1632(auVar117),ZEXT1632(auVar47));
      auVar132._0_16_ = ZEXT116(0) * auVar86._0_16_ + ZEXT116(1) * auVar89._0_16_;
      auVar132._16_16_ = ZEXT116(0) * auVar89._16_16_ + ZEXT116(1) * auVar86._0_16_;
      auStack_280 = vpshufb_avx2(auVar132,auVar90);
      auVar255 = vpsrld_avx2(auVar8,6);
      auVar114 = vpslld_avx2(auVar8,0x1a);
      auVar11 = vpaddd_avx2(auStack_280,auVar11);
      auVar83 = vpsrld_avx2(auVar8,0xb);
      auVar115 = vpslld_avx2(auVar8,0x15);
      auVar85._4_4_ = _UNK_00107684;
      auVar85._0_4_ = _DAT_00107680;
      auVar85._8_4_ = _UNK_00107688;
      auVar85._12_4_ = _UNK_0010768c;
      auVar85._16_16_ = _UNK_00107690;
      auVar11 = vpaddd_avx2(auVar11,auVar85);
      auVar84 = vpsrld_avx2(auVar8,0x19);
      auVar116 = vpslld_avx2(auVar8,7);
      auVar86 = vpandn_avx2(auVar8,auVar10);
      auVar89 = vpand_avx2(auVar8,auVar9);
      auVar363 = vpsrld_avx2(auVar12,2);
      auVar85 = vpslld_avx2(auVar12,0x1e);
      auVar11 = vpaddd_avx2(auVar11,auVar255 ^ auVar114 ^ auVar83 ^ auVar115 ^ auVar84 ^ auVar116);
      auVar83 = vpsrld_avx2(auVar12,0xd);
      auVar84 = vpslld_avx2(auVar12,0x13);
      auVar11 = vpaddd_avx2(auVar11,auVar86 ^ auVar89);
      auVar89 = vpand_avx2(auVar91 ^ auVar87,auVar87 ^ auVar12);
      auVar86 = vpsrld_avx2(auVar12,0x16);
      auVar114 = vpslld_avx2(auVar12,10);
      auVar13 = vpaddd_avx2(auVar13,auVar11);
      auVar11 = vpaddd_avx2(auVar87 ^ auVar89,auVar11);
      auVar11 = vpaddd_avx2(auVar11,auVar363 ^ auVar85 ^ auVar83 ^ auVar84 ^ auVar86 ^ auVar114);
      auVar47 = vpinsrd_avx(ZEXT416(puVar37[5]),puVar40[5],1);
      auVar117 = vpinsrd_avx(ZEXT416(puVar39[5]),puVar45[5],1);
      auVar337 = vpinsrd_avx(ZEXT416(puVar42[5]),puVar44[5],1);
      auVar89 = vpunpckldq_avx2(ZEXT1632(auVar47),ZEXT1632(auVar337));
      auVar47 = vpinsrd_avx(ZEXT416(puVar43[5]),puVar46[5],1);
      auVar86 = vpunpckldq_avx2(ZEXT1632(auVar117),ZEXT1632(auVar47));
      auVar133._0_16_ = ZEXT116(0) * auVar86._0_16_ + ZEXT116(1) * auVar89._0_16_;
      auVar133._16_16_ = ZEXT116(0) * auVar89._16_16_ + ZEXT116(1) * auVar86._0_16_;
      auStack_260 = vpshufb_avx2(auVar133,auVar90);
      auVar255 = vpsrld_avx2(auVar13,6);
      auVar115 = vpslld_avx2(auVar13,0x1a);
      auVar10 = vpaddd_avx2(auStack_260,auVar10);
      auVar83 = vpsrld_avx2(auVar13,0xb);
      auVar116 = vpslld_avx2(auVar13,0x15);
      auVar114._4_4_ = _UNK_001076a4;
      auVar114._0_4_ = _DAT_001076a0;
      auVar114._8_4_ = _UNK_001076a8;
      auVar114._12_4_ = _UNK_001076ac;
      auVar114._16_16_ = _UNK_001076b0;
      auVar10 = vpaddd_avx2(auVar10,auVar114);
      auVar84 = vpsrld_avx2(auVar13,0x19);
      auVar114 = vpslld_avx2(auVar13,7);
      auVar86 = vpandn_avx2(auVar13,auVar9);
      auVar89 = vpand_avx2(auVar13,auVar8);
      auVar363 = vpsrld_avx2(auVar11,2);
      auVar85 = vpslld_avx2(auVar11,0x1e);
      auVar10 = vpaddd_avx2(auVar10,auVar255 ^ auVar115 ^ auVar83 ^ auVar116 ^ auVar84 ^ auVar114);
      auVar83 = vpsrld_avx2(auVar11,0xd);
      auVar84 = vpslld_avx2(auVar11,0x13);
      auVar10 = vpaddd_avx2(auVar10,auVar86 ^ auVar89);
      auVar89 = vpand_avx2(auVar87 ^ auVar12,auVar12 ^ auVar11);
      auVar86 = vpsrld_avx2(auVar11,0x16);
      auVar114 = vpslld_avx2(auVar11,10);
      auVar91 = vpaddd_avx2(auVar91,auVar10);
      auVar10 = vpaddd_avx2(auVar12 ^ auVar89,auVar10);
      auVar10 = vpaddd_avx2(auVar10,auVar363 ^ auVar85 ^ auVar83 ^ auVar84 ^ auVar86 ^ auVar114);
      auVar47 = vpinsrd_avx(ZEXT416(puVar37[6]),puVar40[6],1);
      auVar117 = vpinsrd_avx(ZEXT416(puVar39[6]),puVar45[6],1);
      auVar337 = vpinsrd_avx(ZEXT416(puVar42[6]),puVar44[6],1);
      auVar89 = vpunpckldq_avx2(ZEXT1632(auVar47),ZEXT1632(auVar337));
      auVar47 = vpinsrd_avx(ZEXT416(puVar43[6]),puVar46[6],1);
      auVar86 = vpunpckldq_avx2(ZEXT1632(auVar117),ZEXT1632(auVar47));
      auVar134._0_16_ = ZEXT116(0) * auVar86._0_16_ + ZEXT116(1) * auVar89._0_16_;
      auVar134._16_16_ = ZEXT116(0) * auVar89._16_16_ + ZEXT116(1) * auVar86._0_16_;
      auStack_240 = vpshufb_avx2(auVar134,auVar90);
      auVar255 = vpsrld_avx2(auVar91,6);
      auVar114 = vpslld_avx2(auVar91,0x1a);
      auVar9 = vpaddd_avx2(auStack_240,auVar9);
      auVar83 = vpsrld_avx2(auVar91,0xb);
      auVar116 = vpslld_avx2(auVar91,0x15);
      auVar115._4_4_ = _UNK_001076c4;
      auVar115._0_4_ = _DAT_001076c0;
      auVar115._8_4_ = _UNK_001076c8;
      auVar115._12_4_ = _UNK_001076cc;
      auVar115._16_16_ = _UNK_001076d0;
      auVar9 = vpaddd_avx2(auVar9,auVar115);
      auVar84 = vpsrld_avx2(auVar91,0x19);
      auVar115 = vpslld_avx2(auVar91,7);
      auVar86 = vpandn_avx2(auVar91,auVar8);
      auVar89 = vpand_avx2(auVar91,auVar13);
      auVar363 = vpsrld_avx2(auVar10,2);
      auVar85 = vpslld_avx2(auVar10,0x1e);
      auVar9 = vpaddd_avx2(auVar9,auVar255 ^ auVar114 ^ auVar83 ^ auVar116 ^ auVar84 ^ auVar115);
      auVar83 = vpsrld_avx2(auVar10,0xd);
      auVar84 = vpslld_avx2(auVar10,0x13);
      auVar9 = vpaddd_avx2(auVar9,auVar86 ^ auVar89);
      auVar89 = vpand_avx2(auVar12 ^ auVar11,auVar11 ^ auVar10);
      auVar86 = vpsrld_avx2(auVar10,0x16);
      auVar114 = vpslld_avx2(auVar10,10);
      auVar87 = vpaddd_avx2(auVar87,auVar9);
      auVar9 = vpaddd_avx2(auVar11 ^ auVar89,auVar9);
      auVar9 = vpaddd_avx2(auVar9,auVar363 ^ auVar85 ^ auVar83 ^ auVar84 ^ auVar86 ^ auVar114);
      auVar47 = vpinsrd_avx(ZEXT416(puVar37[7]),puVar40[7],1);
      auVar117 = vpinsrd_avx(ZEXT416(puVar39[7]),puVar45[7],1);
      auVar337 = vpinsrd_avx(ZEXT416(puVar42[7]),puVar44[7],1);
      auVar89 = vpunpckldq_avx2(ZEXT1632(auVar47),ZEXT1632(auVar337));
      auVar47 = vpinsrd_avx(ZEXT416(puVar43[7]),puVar46[7],1);
      auVar86 = vpunpckldq_avx2(ZEXT1632(auVar117),ZEXT1632(auVar47));
      auVar135._0_16_ = ZEXT116(0) * auVar86._0_16_ + ZEXT116(1) * auVar89._0_16_;
      auVar135._16_16_ = ZEXT116(0) * auVar89._16_16_ + ZEXT116(1) * auVar86._0_16_;
      auStack_220 = vpshufb_avx2(auVar135,auVar90);
      auVar255 = vpsrld_avx2(auVar87,6);
      auVar114 = vpslld_avx2(auVar87,0x1a);
      auVar8 = vpaddd_avx2(auStack_220,auVar8);
      auVar83 = vpsrld_avx2(auVar87,0xb);
      auVar115 = vpslld_avx2(auVar87,0x15);
      auVar116._4_4_ = _UNK_001076e4;
      auVar116._0_4_ = _DAT_001076e0;
      auVar116._8_4_ = _UNK_001076e8;
      auVar116._12_4_ = _UNK_001076ec;
      auVar116._16_16_ = _UNK_001076f0;
      auVar8 = vpaddd_avx2(auVar8,auVar116);
      auVar84 = vpsrld_avx2(auVar87,0x19);
      auVar116 = vpslld_avx2(auVar87,7);
      auVar86 = vpandn_avx2(auVar87,auVar13);
      auVar89 = vpand_avx2(auVar87,auVar91);
      auVar363 = vpsrld_avx2(auVar9,2);
      auVar85 = vpslld_avx2(auVar9,0x1e);
      auVar8 = vpaddd_avx2(auVar8,auVar255 ^ auVar114 ^ auVar83 ^ auVar115 ^ auVar84 ^ auVar116);
      auVar83 = vpsrld_avx2(auVar9,0xd);
      auVar84 = vpslld_avx2(auVar9,0x13);
      auVar8 = vpaddd_avx2(auVar8,auVar86 ^ auVar89);
      auVar89 = vpand_avx2(auVar11 ^ auVar10,auVar10 ^ auVar9);
      auVar86 = vpsrld_avx2(auVar9,0x16);
      auVar114 = vpslld_avx2(auVar9,10);
      auVar12 = vpaddd_avx2(auVar12,auVar8);
      auVar8 = vpaddd_avx2(auVar10 ^ auVar89,auVar8);
      auVar8 = vpaddd_avx2(auVar8,auVar363 ^ auVar85 ^ auVar83 ^ auVar84 ^ auVar86 ^ auVar114);
      auVar47 = vpinsrd_avx(ZEXT416(puVar37[8]),puVar40[8],1);
      auVar117 = vpinsrd_avx(ZEXT416(puVar39[8]),puVar45[8],1);
      auVar337 = vpinsrd_avx(ZEXT416(puVar42[8]),puVar44[8],1);
      auVar89 = vpunpckldq_avx2(ZEXT1632(auVar47),ZEXT1632(auVar337));
      auVar47 = vpinsrd_avx(ZEXT416(puVar43[8]),puVar46[8],1);
      auVar86 = vpunpckldq_avx2(ZEXT1632(auVar117),ZEXT1632(auVar47));
      auVar136._0_16_ = ZEXT116(0) * auVar86._0_16_ + ZEXT116(1) * auVar89._0_16_;
      auVar136._16_16_ = ZEXT116(0) * auVar89._16_16_ + ZEXT116(1) * auVar86._0_16_;
      _local_200 = vpshufb_avx2(auVar136,auVar90);
      auVar363 = vpsrld_avx2(auVar12,6);
      auVar114 = vpslld_avx2(auVar12,0x1a);
      auVar13 = vpaddd_avx2(_local_200,auVar13);
      auVar83 = vpsrld_avx2(auVar12,0xb);
      auVar115 = vpslld_avx2(auVar12,0x15);
      auVar255._4_4_ = _UNK_00107704;
      auVar255._0_4_ = _DAT_00107700;
      auVar255._8_4_ = _UNK_00107708;
      auVar255._12_4_ = _UNK_0010770c;
      auVar255._16_16_ = _UNK_00107710;
      auVar13 = vpaddd_avx2(auVar13,auVar255);
      auVar84 = vpsrld_avx2(auVar12,0x19);
      auVar116 = vpslld_avx2(auVar12,7);
      auVar86 = vpandn_avx2(auVar12,auVar91);
      auVar89 = vpand_avx2(auVar12,auVar87);
      auVar255 = vpsrld_avx2(auVar8,2);
      auVar85 = vpslld_avx2(auVar8,0x1e);
      auVar13 = vpaddd_avx2(auVar13,auVar363 ^ auVar114 ^ auVar83 ^ auVar115 ^ auVar84 ^ auVar116);
      auVar83 = vpsrld_avx2(auVar8,0xd);
      auVar84 = vpslld_avx2(auVar8,0x13);
      auVar13 = vpaddd_avx2(auVar13,auVar86 ^ auVar89);
      auVar89 = vpand_avx2(auVar10 ^ auVar9,auVar9 ^ auVar8);
      auVar86 = vpsrld_avx2(auVar8,0x16);
      auVar114 = vpslld_avx2(auVar8,10);
      auVar11 = vpaddd_avx2(auVar11,auVar13);
      auVar13 = vpaddd_avx2(auVar9 ^ auVar89,auVar13);
      auVar13 = vpaddd_avx2(auVar13,auVar255 ^ auVar85 ^ auVar83 ^ auVar84 ^ auVar86 ^ auVar114);
      auVar47 = vpinsrd_avx(ZEXT416(puVar37[9]),puVar40[9],1);
      auVar117 = vpinsrd_avx(ZEXT416(puVar39[9]),puVar45[9],1);
      auVar337 = vpinsrd_avx(ZEXT416(puVar42[9]),puVar44[9],1);
      auVar89 = vpunpckldq_avx2(ZEXT1632(auVar47),ZEXT1632(auVar337));
      auVar47 = vpinsrd_avx(ZEXT416(puVar43[9]),puVar46[9],1);
      auVar86 = vpunpckldq_avx2(ZEXT1632(auVar117),ZEXT1632(auVar47));
      auVar137._0_16_ = ZEXT116(0) * auVar86._0_16_ + ZEXT116(1) * auVar89._0_16_;
      auVar137._16_16_ = ZEXT116(0) * auVar89._16_16_ + ZEXT116(1) * auVar86._0_16_;
      _local_1e0 = vpshufb_avx2(auVar137,auVar90);
      auVar255 = vpsrld_avx2(auVar11,6);
      auVar114 = vpslld_avx2(auVar11,0x1a);
      auVar91 = vpaddd_avx2(_local_1e0,auVar91);
      auVar83 = vpsrld_avx2(auVar11,0xb);
      auVar115 = vpslld_avx2(auVar11,0x15);
      auVar363._4_4_ = _UNK_00107724;
      auVar363._0_4_ = _DAT_00107720;
      auVar363._8_4_ = _UNK_00107728;
      auVar363._12_4_ = _UNK_0010772c;
      auVar363._16_16_ = _UNK_00107730;
      auVar91 = vpaddd_avx2(auVar91,auVar363);
      auVar84 = vpsrld_avx2(auVar11,0x19);
      auVar116 = vpslld_avx2(auVar11,7);
      auVar86 = vpandn_avx2(auVar11,auVar87);
      auVar89 = vpand_avx2(auVar11,auVar12);
      auVar363 = vpsrld_avx2(auVar13,2);
      auVar85 = vpslld_avx2(auVar13,0x1e);
      auVar91 = vpaddd_avx2(auVar91,auVar255 ^ auVar114 ^ auVar83 ^ auVar115 ^ auVar84 ^ auVar116);
      auVar83 = vpsrld_avx2(auVar13,0xd);
      auVar84 = vpslld_avx2(auVar13,0x13);
      auVar91 = vpaddd_avx2(auVar91,auVar86 ^ auVar89);
      auVar89 = vpand_avx2(auVar9 ^ auVar8,auVar8 ^ auVar13);
      auVar86 = vpsrld_avx2(auVar13,0x16);
      auVar114 = vpslld_avx2(auVar13,10);
      auVar10 = vpaddd_avx2(auVar10,auVar91);
      auVar91 = vpaddd_avx2(auVar8 ^ auVar89,auVar91);
      auVar91 = vpaddd_avx2(auVar91,auVar363 ^ auVar85 ^ auVar83 ^ auVar84 ^ auVar86 ^ auVar114);
      auVar47 = vpinsrd_avx(ZEXT416(puVar37[10]),puVar40[10],1);
      auVar117 = vpinsrd_avx(ZEXT416(puVar39[10]),puVar45[10],1);
      auVar337 = vpinsrd_avx(ZEXT416(puVar42[10]),puVar44[10],1);
      auVar89 = vpunpckldq_avx2(ZEXT1632(auVar47),ZEXT1632(auVar337));
      auVar47 = vpinsrd_avx(ZEXT416(puVar43[10]),puVar46[10],1);
      auVar86 = vpunpckldq_avx2(ZEXT1632(auVar117),ZEXT1632(auVar47));
      auVar138._0_16_ = ZEXT116(0) * auVar86._0_16_ + ZEXT116(1) * auVar89._0_16_;
      auVar138._16_16_ = ZEXT116(0) * auVar89._16_16_ + ZEXT116(1) * auVar86._0_16_;
      _local_1c0 = vpshufb_avx2(auVar138,auVar90);
      auVar255 = vpsrld_avx2(auVar10,6);
      auVar114 = vpslld_avx2(auVar10,0x1a);
      auVar87 = vpaddd_avx2(_local_1c0,auVar87);
      auVar83 = vpsrld_avx2(auVar10,0xb);
      auVar115 = vpslld_avx2(auVar10,0x15);
      auVar25._4_4_ = _UNK_00107744;
      auVar25._0_4_ = _DAT_00107740;
      auVar25._8_4_ = _UNK_00107748;
      auVar25._12_4_ = _UNK_0010774c;
      auVar25._16_16_ = _UNK_00107750;
      auVar87 = vpaddd_avx2(auVar87,auVar25);
      auVar84 = vpsrld_avx2(auVar10,0x19);
      auVar116 = vpslld_avx2(auVar10,7);
      auVar86 = vpandn_avx2(auVar10,auVar12);
      auVar89 = vpand_avx2(auVar10,auVar11);
      auVar363 = vpsrld_avx2(auVar91,2);
      auVar85 = vpslld_avx2(auVar91,0x1e);
      auVar87 = vpaddd_avx2(auVar87,auVar255 ^ auVar114 ^ auVar83 ^ auVar115 ^ auVar84 ^ auVar116);
      auVar83 = vpsrld_avx2(auVar91,0xd);
      auVar84 = vpslld_avx2(auVar91,0x13);
      auVar87 = vpaddd_avx2(auVar87,auVar86 ^ auVar89);
      auVar89 = vpand_avx2(auVar8 ^ auVar13,auVar13 ^ auVar91);
      auVar86 = vpsrld_avx2(auVar91,0x16);
      auVar114 = vpslld_avx2(auVar91,10);
      auVar9 = vpaddd_avx2(auVar9,auVar87);
      auVar87 = vpaddd_avx2(auVar13 ^ auVar89,auVar87);
      auVar87 = vpaddd_avx2(auVar87,auVar363 ^ auVar85 ^ auVar83 ^ auVar84 ^ auVar86 ^ auVar114);
      auVar47 = vpinsrd_avx(ZEXT416(puVar37[0xb]),puVar40[0xb],1);
      auVar117 = vpinsrd_avx(ZEXT416(puVar39[0xb]),puVar45[0xb],1);
      auVar337 = vpinsrd_avx(ZEXT416(puVar42[0xb]),puVar44[0xb],1);
      auVar89 = vpunpckldq_avx2(ZEXT1632(auVar47),ZEXT1632(auVar337));
      auVar47 = vpinsrd_avx(ZEXT416(puVar43[0xb]),puVar46[0xb],1);
      auVar86 = vpunpckldq_avx2(ZEXT1632(auVar117),ZEXT1632(auVar47));
      auVar139._0_16_ = ZEXT116(0) * auVar86._0_16_ + ZEXT116(1) * auVar89._0_16_;
      auVar139._16_16_ = ZEXT116(0) * auVar89._16_16_ + ZEXT116(1) * auVar86._0_16_;
      _local_1a0 = vpshufb_avx2(auVar139,auVar90);
      auVar255 = vpsrld_avx2(auVar9,6);
      auVar114 = vpslld_avx2(auVar9,0x1a);
      auVar12 = vpaddd_avx2(_local_1a0,auVar12);
      auVar83 = vpsrld_avx2(auVar9,0xb);
      auVar115 = vpslld_avx2(auVar9,0x15);
      auVar27._4_4_ = _UNK_00107764;
      auVar27._0_4_ = _DAT_00107760;
      auVar27._8_4_ = _UNK_00107768;
      auVar27._12_4_ = _UNK_0010776c;
      auVar27._16_16_ = _UNK_00107770;
      auVar12 = vpaddd_avx2(auVar12,auVar27);
      auVar84 = vpsrld_avx2(auVar9,0x19);
      auVar116 = vpslld_avx2(auVar9,7);
      auVar86 = vpandn_avx2(auVar9,auVar11);
      auVar89 = vpand_avx2(auVar9,auVar10);
      auVar363 = vpsrld_avx2(auVar87,2);
      auVar85 = vpslld_avx2(auVar87,0x1e);
      auVar12 = vpaddd_avx2(auVar12,auVar255 ^ auVar114 ^ auVar83 ^ auVar115 ^ auVar84 ^ auVar116);
      auVar83 = vpsrld_avx2(auVar87,0xd);
      auVar84 = vpslld_avx2(auVar87,0x13);
      auVar12 = vpaddd_avx2(auVar12,auVar86 ^ auVar89);
      auVar89 = vpand_avx2(auVar13 ^ auVar91,auVar91 ^ auVar87);
      auVar86 = vpsrld_avx2(auVar87,0x16);
      auVar114 = vpslld_avx2(auVar87,10);
      auVar8 = vpaddd_avx2(auVar8,auVar12);
      auVar12 = vpaddd_avx2(auVar91 ^ auVar89,auVar12);
      auVar12 = vpaddd_avx2(auVar12,auVar363 ^ auVar85 ^ auVar83 ^ auVar84 ^ auVar86 ^ auVar114);
      auVar47 = vpinsrd_avx(ZEXT416(puVar37[0xc]),puVar40[0xc],1);
      auVar117 = vpinsrd_avx(ZEXT416(puVar39[0xc]),puVar45[0xc],1);
      auVar337 = vpinsrd_avx(ZEXT416(puVar42[0xc]),puVar44[0xc],1);
      auVar89 = vpunpckldq_avx2(ZEXT1632(auVar47),ZEXT1632(auVar337));
      auVar47 = vpinsrd_avx(ZEXT416(puVar43[0xc]),puVar46[0xc],1);
      auVar86 = vpunpckldq_avx2(ZEXT1632(auVar117),ZEXT1632(auVar47));
      auVar140._0_16_ = ZEXT116(0) * auVar86._0_16_ + ZEXT116(1) * auVar89._0_16_;
      auVar140._16_16_ = ZEXT116(0) * auVar89._16_16_ + ZEXT116(1) * auVar86._0_16_;
      _local_180 = vpshufb_avx2(auVar140,auVar90);
      auVar255 = vpsrld_avx2(auVar8,6);
      auVar114 = vpslld_avx2(auVar8,0x1a);
      auVar11 = vpaddd_avx2(_local_180,auVar11);
      auVar83 = vpsrld_avx2(auVar8,0xb);
      auVar115 = vpslld_avx2(auVar8,0x15);
      auVar29._4_4_ = _UNK_00107784;
      auVar29._0_4_ = _DAT_00107780;
      auVar29._8_4_ = _UNK_00107788;
      auVar29._12_4_ = _UNK_0010778c;
      auVar29._16_16_ = _UNK_00107790;
      auVar11 = vpaddd_avx2(auVar11,auVar29);
      auVar84 = vpsrld_avx2(auVar8,0x19);
      auVar116 = vpslld_avx2(auVar8,7);
      auVar86 = vpandn_avx2(auVar8,auVar10);
      auVar89 = vpand_avx2(auVar8,auVar9);
      auVar363 = vpsrld_avx2(auVar12,2);
      auVar85 = vpslld_avx2(auVar12,0x1e);
      auVar11 = vpaddd_avx2(auVar11,auVar255 ^ auVar114 ^ auVar83 ^ auVar115 ^ auVar84 ^ auVar116);
      auVar83 = vpsrld_avx2(auVar12,0xd);
      auVar114 = vpslld_avx2(auVar12,0x13);
      auVar11 = vpaddd_avx2(auVar11,auVar86 ^ auVar89);
      auVar89 = vpand_avx2(auVar91 ^ auVar87,auVar87 ^ auVar12);
      auVar84 = vpsrld_avx2(auVar12,0x16);
      auVar115 = vpslld_avx2(auVar12,10);
      auVar86 = vpaddd_avx2(auVar13,auVar11);
      auVar11 = vpaddd_avx2(auVar87 ^ auVar89,auVar11);
      auVar89 = vpaddd_avx2(auVar11,auVar363 ^ auVar85 ^ auVar83 ^ auVar114 ^ auVar84 ^ auVar115);
      auVar47 = vpinsrd_avx(ZEXT416(puVar37[0xd]),puVar40[0xd],1);
      auVar117 = vpinsrd_avx(ZEXT416(puVar39[0xd]),puVar45[0xd],1);
      auVar337 = vpinsrd_avx(ZEXT416(puVar42[0xd]),puVar44[0xd],1);
      auVar11 = vpunpckldq_avx2(ZEXT1632(auVar47),ZEXT1632(auVar337));
      auVar47 = vpinsrd_avx(ZEXT416(puVar43[0xd]),puVar46[0xd],1);
      auVar13 = vpunpckldq_avx2(ZEXT1632(auVar117),ZEXT1632(auVar47));
      auVar141._0_16_ = ZEXT116(0) * auVar13._0_16_ + ZEXT116(1) * auVar11._0_16_;
      auVar141._16_16_ = ZEXT116(0) * auVar11._16_16_ + ZEXT116(1) * auVar13._0_16_;
      _local_160 = vpshufb_avx2(auVar141,auVar90);
      auVar255 = vpsrld_avx2(auVar86,6);
      auVar114 = vpslld_avx2(auVar86,0x1a);
      auVar10 = vpaddd_avx2(_local_160,auVar10);
      auVar83 = vpsrld_avx2(auVar86,0xb);
      auVar115 = vpslld_avx2(auVar86,0x15);
      auVar11._4_4_ = _UNK_001077a4;
      auVar11._0_4_ = _DAT_001077a0;
      auVar11._8_4_ = _UNK_001077a8;
      auVar11._12_4_ = _UNK_001077ac;
      auVar11._16_16_ = _UNK_001077b0;
      auVar10 = vpaddd_avx2(auVar10,auVar11);
      auVar84 = vpsrld_avx2(auVar86,0x19);
      auVar116 = vpslld_avx2(auVar86,7);
      auVar13 = vpandn_avx2(auVar86,auVar9);
      auVar11 = vpand_avx2(auVar86,auVar8);
      auVar363 = vpsrld_avx2(auVar89,2);
      auVar85 = vpslld_avx2(auVar89,0x1e);
      auVar10 = vpaddd_avx2(auVar10,auVar255 ^ auVar114 ^ auVar83 ^ auVar115 ^ auVar84 ^ auVar116);
      auVar83 = vpsrld_avx2(auVar89,0xd);
      auVar114 = vpslld_avx2(auVar89,0x13);
      auVar10 = vpaddd_avx2(auVar10,auVar13 ^ auVar11);
      auVar11 = vpand_avx2(auVar87 ^ auVar12,auVar12 ^ auVar89);
      auVar84 = vpsrld_avx2(auVar89,0x16);
      auVar115 = vpslld_avx2(auVar89,10);
      auVar13 = vpaddd_avx2(auVar91,auVar10);
      auVar10 = vpaddd_avx2(auVar12 ^ auVar11,auVar10);
      auVar91 = vpaddd_avx2(auVar10,auVar363 ^ auVar85 ^ auVar83 ^ auVar114 ^ auVar84 ^ auVar115);
      auVar47 = vpinsrd_avx(ZEXT416(puVar37[0xe]),puVar40[0xe],1);
      auVar117 = vpinsrd_avx(ZEXT416(puVar39[0xe]),puVar45[0xe],1);
      auVar337 = vpinsrd_avx(ZEXT416(puVar42[0xe]),puVar44[0xe],1);
      auVar10 = vpunpckldq_avx2(ZEXT1632(auVar47),ZEXT1632(auVar337));
      auVar47 = vpinsrd_avx(ZEXT416(puVar43[0xe]),puVar46[0xe],1);
      auVar11 = vpunpckldq_avx2(ZEXT1632(auVar117),ZEXT1632(auVar47));
      auVar142._0_16_ = ZEXT116(0) * auVar11._0_16_ + ZEXT116(1) * auVar10._0_16_;
      auVar142._16_16_ = ZEXT116(0) * auVar10._16_16_ + ZEXT116(1) * auVar11._0_16_;
      _local_140 = vpshufb_avx2(auVar142,auVar90);
      auVar255 = vpsrld_avx2(auVar13,6);
      auVar114 = vpslld_avx2(auVar13,0x1a);
      auVar9 = vpaddd_avx2(_local_140,auVar9);
      auVar83 = vpsrld_avx2(auVar13,0xb);
      auVar115 = vpslld_avx2(auVar13,0x15);
      auVar10._4_4_ = _UNK_001077c4;
      auVar10._0_4_ = _DAT_001077c0;
      auVar10._8_4_ = _UNK_001077c8;
      auVar10._12_4_ = _UNK_001077cc;
      auVar10._16_16_ = _UNK_001077d0;
      auVar9 = vpaddd_avx2(auVar9,auVar10);
      auVar84 = vpsrld_avx2(auVar13,0x19);
      auVar116 = vpslld_avx2(auVar13,7);
      auVar11 = vpandn_avx2(auVar13,auVar8);
      auVar10 = vpand_avx2(auVar13,auVar86);
      auVar363 = vpsrld_avx2(auVar91,2);
      auVar85 = vpslld_avx2(auVar91,0x1e);
      auVar9 = vpaddd_avx2(auVar9,auVar255 ^ auVar114 ^ auVar83 ^ auVar115 ^ auVar84 ^ auVar116);
      auVar83 = vpsrld_avx2(auVar91,0xd);
      auVar114 = vpslld_avx2(auVar91,0x13);
      auVar9 = vpaddd_avx2(auVar9,auVar11 ^ auVar10);
      auVar11 = vpand_avx2(auVar12 ^ auVar89,auVar89 ^ auVar91);
      auVar84 = vpsrld_avx2(auVar91,0x16);
      auVar115 = vpslld_avx2(auVar91,10);
      auVar10 = vpaddd_avx2(auVar87,auVar9);
      auVar9 = vpaddd_avx2(auVar89 ^ auVar11,auVar9);
      auVar11 = vpaddd_avx2(auVar9,auVar363 ^ auVar85 ^ auVar83 ^ auVar114 ^ auVar84 ^ auVar115);
      puVar7 = puVar37 + 0xf;
      puVar37 = puVar37 + 0x10;
      puVar3 = puVar39 + 0xf;
      puVar39 = puVar39 + 0x10;
      puVar4 = puVar42 + 0xf;
      puVar42 = puVar42 + 0x10;
      puVar5 = puVar43 + 0xf;
      puVar43 = puVar43 + 0x10;
      auVar47 = vpinsrd_avx(ZEXT416(*puVar7),puVar40[0xf],1);
      puVar40 = puVar40 + 0x10;
      auVar117 = vpinsrd_avx(ZEXT416(*puVar3),puVar45[0xf],1);
      puVar45 = puVar45 + 0x10;
      auVar337 = vpinsrd_avx(ZEXT416(*puVar4),puVar44[0xf],1);
      puVar44 = puVar44 + 0x10;
      auVar9 = vpunpckldq_avx2(ZEXT1632(auVar47),ZEXT1632(auVar337));
      auVar47 = vpinsrd_avx(ZEXT416(*puVar5),puVar46[0xf],1);
      puVar46 = puVar46 + 0x10;
      auVar87 = vpunpckldq_avx2(ZEXT1632(auVar117),ZEXT1632(auVar47));
      auVar143._0_16_ = ZEXT116(0) * auVar87._0_16_ + ZEXT116(1) * auVar9._0_16_;
      auVar143._16_16_ = ZEXT116(0) * auVar9._16_16_ + ZEXT116(1) * auVar87._0_16_;
      _local_120 = vpshufb_avx2(auVar143,auVar90);
      auVar255 = vpsrld_avx2(auVar10,6);
      auVar114 = vpslld_avx2(auVar10,0x1a);
      auVar8 = vpaddd_avx2(_local_120,auVar8);
      auVar83 = vpsrld_avx2(auVar10,0xb);
      auVar115 = vpslld_avx2(auVar10,0x15);
      auVar9._4_4_ = _UNK_001077e4;
      auVar9._0_4_ = _DAT_001077e0;
      auVar9._8_4_ = _UNK_001077e8;
      auVar9._12_4_ = _UNK_001077ec;
      auVar9._16_16_ = _UNK_001077f0;
      auVar8 = vpaddd_avx2(auVar8,auVar9);
      auVar84 = vpsrld_avx2(auVar10,0x19);
      auVar116 = vpslld_avx2(auVar10,7);
      auVar87 = vpandn_avx2(auVar10,auVar86);
      auVar9 = vpand_avx2(auVar10,auVar13);
      auVar363 = vpsrld_avx2(auVar11,2);
      auVar85 = vpslld_avx2(auVar11,0x1e);
      auVar90 = auVar91 ^ auVar11;
      auVar8 = vpaddd_avx2(auVar8,auVar255 ^ auVar114 ^ auVar83 ^ auVar115 ^ auVar84 ^ auVar116);
      auVar83 = vpsrld_avx2(auVar11,0xd);
      auVar114 = vpslld_avx2(auVar11,0x13);
      auVar8 = vpaddd_avx2(auVar8,auVar87 ^ auVar9);
      auVar87 = vpand_avx2(auVar89 ^ auVar91,auVar90);
      auVar84 = vpsrld_avx2(auVar11,0x16);
      auVar115 = vpslld_avx2(auVar11,10);
      auVar9 = vpaddd_avx2(auVar12,auVar8);
      auVar8 = vpaddd_avx2(auVar91 ^ auVar87,auVar8);
      auVar8 = vpaddd_avx2(auVar8,auVar363 ^ auVar85 ^ auVar83 ^ auVar114 ^ auVar84 ^ auVar115);
      iVar122 = 3;
      pauVar36 = (undefined1 (*) [32])&DAT_00107780;
      do {
        auVar12 = vpaddd_avx2(auVar88,_local_1e0);
        auVar116 = vpsrld_avx2(auStack_2e0,3);
        auVar87 = vpsrld_avx2(auStack_2e0,7);
        auVar84 = vpslld_avx2(auStack_2e0,0x19);
        auVar88 = vpsrld_avx2(auStack_2e0,0x12);
        auVar85 = vpslld_avx2(auStack_2e0,0xe);
        auVar115 = vpsrld_avx2(_local_140,10);
        auVar83 = vpsrld_avx2(_local_140,0x11);
        auVar114 = vpslld_avx2(_local_140,0xf);
        auVar12 = vpaddd_avx2(auVar12,auVar116 ^ auVar87 ^ auVar84 ^ auVar88 ^ auVar85);
        auVar87 = vpsrld_avx2(_local_140,0x13);
        auVar88 = vpslld_avx2(_local_140,0xd);
        auVar88 = vpaddd_avx2(auVar12,auVar115 ^ auVar83 ^ auVar114 ^ auVar87 ^ auVar88);
        auVar255 = vpsrld_avx2(auVar9,6);
        auVar114 = vpslld_avx2(auVar9,0x1a);
        auVar12 = vpaddd_avx2(auVar88,auVar86);
        auVar83 = vpsrld_avx2(auVar9,0xb);
        auVar115 = vpslld_avx2(auVar9,0x15);
        auVar12 = vpaddd_avx2(auVar12,pauVar36[4]);
        auVar84 = vpsrld_avx2(auVar9,0x19);
        auVar116 = vpslld_avx2(auVar9,7);
        auVar86 = vpandn_avx2(auVar9,auVar13);
        auVar87 = vpand_avx2(auVar9,auVar10);
        auVar363 = vpsrld_avx2(auVar8,2);
        auVar85 = vpslld_avx2(auVar8,0x1e);
        auVar12 = vpaddd_avx2(auVar12,auVar255 ^ auVar114 ^ auVar83 ^ auVar115 ^ auVar84 ^ auVar116)
        ;
        auVar83 = vpsrld_avx2(auVar8,0xd);
        auVar84 = vpslld_avx2(auVar8,0x13);
        auVar12 = vpaddd_avx2(auVar12,auVar86 ^ auVar87);
        auVar90 = vpand_avx2(auVar90,auVar11 ^ auVar8);
        auVar86 = vpsrld_avx2(auVar8,0x16);
        auVar114 = vpslld_avx2(auVar8,10);
        auVar87 = vpaddd_avx2(auVar89,auVar12);
        auVar12 = vpaddd_avx2(auVar11 ^ auVar90,auVar12);
        auVar12 = vpaddd_avx2(auVar12,auVar363 ^ auVar85 ^ auVar83 ^ auVar84 ^ auVar86 ^ auVar114);
        auVar90 = vpaddd_avx2(auStack_2e0,_local_1c0);
        auVar116 = vpsrld_avx2(auStack_2c0,3);
        auVar89 = vpsrld_avx2(auStack_2c0,7);
        auVar84 = vpslld_avx2(auStack_2c0,0x19);
        auVar86 = vpsrld_avx2(auStack_2c0,0x12);
        auVar85 = vpslld_avx2(auStack_2c0,0xe);
        auVar115 = vpsrld_avx2(_local_120,10);
        auVar83 = vpsrld_avx2(_local_120,0x11);
        auVar114 = vpslld_avx2(_local_120,0xf);
        auVar90 = vpaddd_avx2(auVar90,auVar116 ^ auVar89 ^ auVar84 ^ auVar86 ^ auVar85);
        auVar89 = vpsrld_avx2(_local_120,0x13);
        auVar86 = vpslld_avx2(_local_120,0xd);
        auStack_2e0 = vpaddd_avx2(auVar90,auVar115 ^ auVar83 ^ auVar114 ^ auVar89 ^ auVar86);
        auVar116 = vpsrld_avx2(auVar87,6);
        auVar85 = vpslld_avx2(auVar87,0x1a);
        auVar13 = vpaddd_avx2(auStack_2e0,auVar13);
        auVar86 = vpsrld_avx2(auVar87,0xb);
        auVar114 = vpslld_avx2(auVar87,0x15);
        auVar13 = vpaddd_avx2(auVar13,pauVar36[5]);
        auVar83 = vpsrld_avx2(auVar87,0x19);
        auVar115 = vpslld_avx2(auVar87,7);
        auVar89 = vpandn_avx2(auVar87,auVar10);
        auVar90 = vpand_avx2(auVar87,auVar9);
        auVar255 = vpsrld_avx2(auVar12,2);
        auVar84 = vpslld_avx2(auVar12,0x1e);
        auVar13 = vpaddd_avx2(auVar13,auVar116 ^ auVar85 ^ auVar86 ^ auVar114 ^ auVar83 ^ auVar115);
        auVar86 = vpsrld_avx2(auVar12,0xd);
        auVar83 = vpslld_avx2(auVar12,0x13);
        auVar13 = vpaddd_avx2(auVar13,auVar89 ^ auVar90);
        auVar90 = vpand_avx2(auVar11 ^ auVar8,auVar8 ^ auVar12);
        auVar89 = vpsrld_avx2(auVar12,0x16);
        auVar85 = vpslld_avx2(auVar12,10);
        auVar91 = vpaddd_avx2(auVar91,auVar13);
        auVar13 = vpaddd_avx2(auVar8 ^ auVar90,auVar13);
        auVar13 = vpaddd_avx2(auVar13,auVar255 ^ auVar84 ^ auVar86 ^ auVar83 ^ auVar89 ^ auVar85);
        auVar90 = vpaddd_avx2(auStack_2c0,_local_1a0);
        auVar116 = vpsrld_avx2(auStack_2a0,3);
        auVar89 = vpsrld_avx2(auStack_2a0,7);
        auVar84 = vpslld_avx2(auStack_2a0,0x19);
        auVar86 = vpsrld_avx2(auStack_2a0,0x12);
        auVar85 = vpslld_avx2(auStack_2a0,0xe);
        auVar115 = vpsrld_avx2(auVar88,10);
        auVar83 = vpsrld_avx2(auVar88,0x11);
        auVar114 = vpslld_avx2(auVar88,0xf);
        auVar90 = vpaddd_avx2(auVar90,auVar116 ^ auVar89 ^ auVar84 ^ auVar86 ^ auVar85);
        auVar89 = vpsrld_avx2(auVar88,0x13);
        auVar86 = vpslld_avx2(auVar88,0xd);
        auStack_2c0 = vpaddd_avx2(auVar90,auVar115 ^ auVar83 ^ auVar114 ^ auVar89 ^ auVar86);
        auVar116 = vpsrld_avx2(auVar91,6);
        auVar85 = vpslld_avx2(auVar91,0x1a);
        auVar10 = vpaddd_avx2(auStack_2c0,auVar10);
        auVar86 = vpsrld_avx2(auVar91,0xb);
        auVar114 = vpslld_avx2(auVar91,0x15);
        auVar10 = vpaddd_avx2(auVar10,pauVar36[6]);
        auVar83 = vpsrld_avx2(auVar91,0x19);
        auVar115 = vpslld_avx2(auVar91,7);
        auVar89 = vpandn_avx2(auVar91,auVar9);
        auVar90 = vpand_avx2(auVar91,auVar87);
        auVar255 = vpsrld_avx2(auVar13,2);
        auVar84 = vpslld_avx2(auVar13,0x1e);
        auVar10 = vpaddd_avx2(auVar10,auVar116 ^ auVar85 ^ auVar86 ^ auVar114 ^ auVar83 ^ auVar115);
        auVar86 = vpsrld_avx2(auVar13,0xd);
        auVar83 = vpslld_avx2(auVar13,0x13);
        auVar10 = vpaddd_avx2(auVar10,auVar89 ^ auVar90);
        auVar90 = vpand_avx2(auVar8 ^ auVar12,auVar12 ^ auVar13);
        auVar89 = vpsrld_avx2(auVar13,0x16);
        auVar85 = vpslld_avx2(auVar13,10);
        auVar11 = vpaddd_avx2(auVar11,auVar10);
        auVar10 = vpaddd_avx2(auVar12 ^ auVar90,auVar10);
        auVar10 = vpaddd_avx2(auVar10,auVar255 ^ auVar84 ^ auVar86 ^ auVar83 ^ auVar89 ^ auVar85);
        auVar90 = vpaddd_avx2(auStack_2a0,_local_180);
        auVar116 = vpsrld_avx2(auStack_280,3);
        auVar89 = vpsrld_avx2(auStack_280,7);
        auVar84 = vpslld_avx2(auStack_280,0x19);
        auVar86 = vpsrld_avx2(auStack_280,0x12);
        auVar85 = vpslld_avx2(auStack_280,0xe);
        auVar115 = vpsrld_avx2(auStack_2e0,10);
        auVar83 = vpsrld_avx2(auStack_2e0,0x11);
        auVar114 = vpslld_avx2(auStack_2e0,0xf);
        auVar90 = vpaddd_avx2(auVar90,auVar116 ^ auVar89 ^ auVar84 ^ auVar86 ^ auVar85);
        auVar89 = vpsrld_avx2(auStack_2e0,0x13);
        auVar86 = vpslld_avx2(auStack_2e0,0xd);
        auStack_2a0 = vpaddd_avx2(auVar90,auVar115 ^ auVar83 ^ auVar114 ^ auVar89 ^ auVar86);
        auVar116 = vpsrld_avx2(auVar11,6);
        auVar85 = vpslld_avx2(auVar11,0x1a);
        auVar9 = vpaddd_avx2(auStack_2a0,auVar9);
        auVar86 = vpsrld_avx2(auVar11,0xb);
        auVar114 = vpslld_avx2(auVar11,0x15);
        auVar9 = vpaddd_avx2(auVar9,pauVar36[7]);
        auVar83 = vpsrld_avx2(auVar11,0x19);
        auVar115 = vpslld_avx2(auVar11,7);
        auVar89 = vpandn_avx2(auVar11,auVar87);
        auVar90 = vpand_avx2(auVar11,auVar91);
        auVar255 = vpsrld_avx2(auVar10,2);
        auVar84 = vpslld_avx2(auVar10,0x1e);
        auVar9 = vpaddd_avx2(auVar9,auVar116 ^ auVar85 ^ auVar86 ^ auVar114 ^ auVar83 ^ auVar115);
        auVar86 = vpsrld_avx2(auVar10,0xd);
        auVar83 = vpslld_avx2(auVar10,0x13);
        auVar9 = vpaddd_avx2(auVar9,auVar89 ^ auVar90);
        auVar90 = vpand_avx2(auVar12 ^ auVar13,auVar13 ^ auVar10);
        auVar89 = vpsrld_avx2(auVar10,0x16);
        auVar85 = vpslld_avx2(auVar10,10);
        auVar8 = vpaddd_avx2(auVar8,auVar9);
        auVar9 = vpaddd_avx2(auVar13 ^ auVar90,auVar9);
        auVar9 = vpaddd_avx2(auVar9,auVar255 ^ auVar84 ^ auVar86 ^ auVar83 ^ auVar89 ^ auVar85);
        auVar90 = vpaddd_avx2(auStack_280,_local_160);
        auVar116 = vpsrld_avx2(auStack_260,3);
        auVar89 = vpsrld_avx2(auStack_260,7);
        auVar84 = vpslld_avx2(auStack_260,0x19);
        auVar86 = vpsrld_avx2(auStack_260,0x12);
        auVar85 = vpslld_avx2(auStack_260,0xe);
        auVar115 = vpsrld_avx2(auStack_2c0,10);
        auVar83 = vpsrld_avx2(auStack_2c0,0x11);
        auVar114 = vpslld_avx2(auStack_2c0,0xf);
        auVar90 = vpaddd_avx2(auVar90,auVar116 ^ auVar89 ^ auVar84 ^ auVar86 ^ auVar85);
        auVar89 = vpsrld_avx2(auStack_2c0,0x13);
        auVar86 = vpslld_avx2(auStack_2c0,0xd);
        auStack_280 = vpaddd_avx2(auVar90,auVar115 ^ auVar83 ^ auVar114 ^ auVar89 ^ auVar86);
        auVar116 = vpsrld_avx2(auVar8,6);
        auVar85 = vpslld_avx2(auVar8,0x1a);
        auVar87 = vpaddd_avx2(auStack_280,auVar87);
        auVar86 = vpsrld_avx2(auVar8,0xb);
        auVar114 = vpslld_avx2(auVar8,0x15);
        auVar87 = vpaddd_avx2(auVar87,pauVar36[8]);
        auVar83 = vpsrld_avx2(auVar8,0x19);
        auVar115 = vpslld_avx2(auVar8,7);
        auVar89 = vpandn_avx2(auVar8,auVar91);
        auVar90 = vpand_avx2(auVar8,auVar11);
        auVar255 = vpsrld_avx2(auVar9,2);
        auVar84 = vpslld_avx2(auVar9,0x1e);
        auVar87 = vpaddd_avx2(auVar87,auVar116 ^ auVar85 ^ auVar86 ^ auVar114 ^ auVar83 ^ auVar115);
        auVar86 = vpsrld_avx2(auVar9,0xd);
        auVar83 = vpslld_avx2(auVar9,0x13);
        auVar87 = vpaddd_avx2(auVar87,auVar89 ^ auVar90);
        auVar90 = vpand_avx2(auVar13 ^ auVar10,auVar10 ^ auVar9);
        auVar89 = vpsrld_avx2(auVar9,0x16);
        auVar85 = vpslld_avx2(auVar9,10);
        auVar12 = vpaddd_avx2(auVar12,auVar87);
        auVar87 = vpaddd_avx2(auVar10 ^ auVar90,auVar87);
        auVar87 = vpaddd_avx2(auVar87,auVar255 ^ auVar84 ^ auVar86 ^ auVar83 ^ auVar89 ^ auVar85);
        auVar90 = vpaddd_avx2(auStack_260,_local_140);
        auVar116 = vpsrld_avx2(auStack_240,3);
        auVar89 = vpsrld_avx2(auStack_240,7);
        auVar84 = vpslld_avx2(auStack_240,0x19);
        auVar86 = vpsrld_avx2(auStack_240,0x12);
        auVar85 = vpslld_avx2(auStack_240,0xe);
        auVar115 = vpsrld_avx2(auStack_2a0,10);
        auVar83 = vpsrld_avx2(auStack_2a0,0x11);
        auVar114 = vpslld_avx2(auStack_2a0,0xf);
        auVar90 = vpaddd_avx2(auVar90,auVar116 ^ auVar89 ^ auVar84 ^ auVar86 ^ auVar85);
        auVar89 = vpsrld_avx2(auStack_2a0,0x13);
        auVar86 = vpslld_avx2(auStack_2a0,0xd);
        auStack_260 = vpaddd_avx2(auVar90,auVar115 ^ auVar83 ^ auVar114 ^ auVar89 ^ auVar86);
        auVar116 = vpsrld_avx2(auVar12,6);
        auVar85 = vpslld_avx2(auVar12,0x1a);
        auVar91 = vpaddd_avx2(auStack_260,auVar91);
        auVar86 = vpsrld_avx2(auVar12,0xb);
        auVar114 = vpslld_avx2(auVar12,0x15);
        auVar91 = vpaddd_avx2(auVar91,pauVar36[9]);
        auVar83 = vpsrld_avx2(auVar12,0x19);
        auVar115 = vpslld_avx2(auVar12,7);
        auVar89 = vpandn_avx2(auVar12,auVar11);
        auVar90 = vpand_avx2(auVar12,auVar8);
        auVar255 = vpsrld_avx2(auVar87,2);
        auVar84 = vpslld_avx2(auVar87,0x1e);
        auVar91 = vpaddd_avx2(auVar91,auVar116 ^ auVar85 ^ auVar86 ^ auVar114 ^ auVar83 ^ auVar115);
        auVar86 = vpsrld_avx2(auVar87,0xd);
        auVar83 = vpslld_avx2(auVar87,0x13);
        auVar91 = vpaddd_avx2(auVar91,auVar89 ^ auVar90);
        auVar90 = vpand_avx2(auVar10 ^ auVar9,auVar9 ^ auVar87);
        auVar89 = vpsrld_avx2(auVar87,0x16);
        auVar85 = vpslld_avx2(auVar87,10);
        auVar13 = vpaddd_avx2(auVar13,auVar91);
        auVar91 = vpaddd_avx2(auVar9 ^ auVar90,auVar91);
        auVar91 = vpaddd_avx2(auVar91,auVar255 ^ auVar84 ^ auVar86 ^ auVar83 ^ auVar89 ^ auVar85);
        auVar90 = vpaddd_avx2(auStack_240,_local_120);
        auVar116 = vpsrld_avx2(auStack_220,3);
        auVar89 = vpsrld_avx2(auStack_220,7);
        auVar84 = vpslld_avx2(auStack_220,0x19);
        auVar86 = vpsrld_avx2(auStack_220,0x12);
        auVar85 = vpslld_avx2(auStack_220,0xe);
        auVar115 = vpsrld_avx2(auStack_280,10);
        auVar83 = vpsrld_avx2(auStack_280,0x11);
        auVar114 = vpslld_avx2(auStack_280,0xf);
        auVar90 = vpaddd_avx2(auVar90,auVar116 ^ auVar89 ^ auVar84 ^ auVar86 ^ auVar85);
        auVar89 = vpsrld_avx2(auStack_280,0x13);
        auVar86 = vpslld_avx2(auStack_280,0xd);
        auStack_240 = vpaddd_avx2(auVar90,auVar115 ^ auVar83 ^ auVar114 ^ auVar89 ^ auVar86);
        auVar116 = vpsrld_avx2(auVar13,6);
        auVar85 = vpslld_avx2(auVar13,0x1a);
        auVar11 = vpaddd_avx2(auStack_240,auVar11);
        auVar86 = vpsrld_avx2(auVar13,0xb);
        auVar114 = vpslld_avx2(auVar13,0x15);
        auVar11 = vpaddd_avx2(auVar11,pauVar36[10]);
        auVar83 = vpsrld_avx2(auVar13,0x19);
        auVar115 = vpslld_avx2(auVar13,7);
        auVar89 = vpandn_avx2(auVar13,auVar8);
        auVar90 = vpand_avx2(auVar13,auVar12);
        auVar255 = vpsrld_avx2(auVar91,2);
        auVar84 = vpslld_avx2(auVar91,0x1e);
        auVar11 = vpaddd_avx2(auVar11,auVar116 ^ auVar85 ^ auVar86 ^ auVar114 ^ auVar83 ^ auVar115);
        auVar86 = vpsrld_avx2(auVar91,0xd);
        auVar83 = vpslld_avx2(auVar91,0x13);
        auVar11 = vpaddd_avx2(auVar11,auVar89 ^ auVar90);
        auVar90 = vpand_avx2(auVar9 ^ auVar87,auVar87 ^ auVar91);
        auVar89 = vpsrld_avx2(auVar91,0x16);
        auVar85 = vpslld_avx2(auVar91,10);
        auVar10 = vpaddd_avx2(auVar10,auVar11);
        auVar11 = vpaddd_avx2(auVar87 ^ auVar90,auVar11);
        auVar11 = vpaddd_avx2(auVar11,auVar255 ^ auVar84 ^ auVar86 ^ auVar83 ^ auVar89 ^ auVar85);
        auVar90 = vpaddd_avx2(auStack_220,auVar88);
        auVar116 = vpsrld_avx2(_local_200,3);
        auVar89 = vpsrld_avx2(_local_200,7);
        auVar84 = vpslld_avx2(_local_200,0x19);
        auVar86 = vpsrld_avx2(_local_200,0x12);
        auVar85 = vpslld_avx2(_local_200,0xe);
        auVar115 = vpsrld_avx2(auStack_260,10);
        auVar83 = vpsrld_avx2(auStack_260,0x11);
        auVar114 = vpslld_avx2(auStack_260,0xf);
        auVar90 = vpaddd_avx2(auVar90,auVar116 ^ auVar89 ^ auVar84 ^ auVar86 ^ auVar85);
        auVar89 = vpsrld_avx2(auStack_260,0x13);
        auVar86 = vpslld_avx2(auStack_260,0xd);
        auStack_220 = vpaddd_avx2(auVar90,auVar115 ^ auVar83 ^ auVar114 ^ auVar89 ^ auVar86);
        auVar116 = vpsrld_avx2(auVar10,6);
        auVar85 = vpslld_avx2(auVar10,0x1a);
        auVar8 = vpaddd_avx2(auStack_220,auVar8);
        auVar86 = vpsrld_avx2(auVar10,0xb);
        auVar114 = vpslld_avx2(auVar10,0x15);
        auVar8 = vpaddd_avx2(auVar8,pauVar36[0xb]);
        auVar83 = vpsrld_avx2(auVar10,0x19);
        auVar115 = vpslld_avx2(auVar10,7);
        auVar89 = vpandn_avx2(auVar10,auVar12);
        auVar90 = vpand_avx2(auVar10,auVar13);
        auVar255 = vpsrld_avx2(auVar11,2);
        auVar84 = vpslld_avx2(auVar11,0x1e);
        auVar8 = vpaddd_avx2(auVar8,auVar116 ^ auVar85 ^ auVar86 ^ auVar114 ^ auVar83 ^ auVar115);
        auVar86 = vpsrld_avx2(auVar11,0xd);
        auVar83 = vpslld_avx2(auVar11,0x13);
        auVar8 = vpaddd_avx2(auVar8,auVar89 ^ auVar90);
        auVar90 = vpand_avx2(auVar87 ^ auVar91,auVar91 ^ auVar11);
        auVar89 = vpsrld_avx2(auVar11,0x16);
        auVar85 = vpslld_avx2(auVar11,10);
        auVar9 = vpaddd_avx2(auVar9,auVar8);
        auVar8 = vpaddd_avx2(auVar91 ^ auVar90,auVar8);
        auVar8 = vpaddd_avx2(auVar8,auVar255 ^ auVar84 ^ auVar86 ^ auVar83 ^ auVar89 ^ auVar85);
        auVar90 = vpaddd_avx2(_local_200,auStack_2e0);
        auVar116 = vpsrld_avx2(_local_1e0,3);
        auVar89 = vpsrld_avx2(_local_1e0,7);
        auVar84 = vpslld_avx2(_local_1e0,0x19);
        auVar86 = vpsrld_avx2(_local_1e0,0x12);
        auVar85 = vpslld_avx2(_local_1e0,0xe);
        auVar115 = vpsrld_avx2(auStack_240,10);
        auVar83 = vpsrld_avx2(auStack_240,0x11);
        auVar114 = vpslld_avx2(auStack_240,0xf);
        auVar90 = vpaddd_avx2(auVar90,auVar116 ^ auVar89 ^ auVar84 ^ auVar86 ^ auVar85);
        auVar89 = vpsrld_avx2(auStack_240,0x13);
        auVar86 = vpslld_avx2(auStack_240,0xd);
        _local_200 = vpaddd_avx2(auVar90,auVar115 ^ auVar83 ^ auVar114 ^ auVar89 ^ auVar86);
        auVar116 = vpsrld_avx2(auVar9,6);
        auVar85 = vpslld_avx2(auVar9,0x1a);
        auVar12 = vpaddd_avx2(_local_200,auVar12);
        auVar86 = vpsrld_avx2(auVar9,0xb);
        auVar114 = vpslld_avx2(auVar9,0x15);
        auVar12 = vpaddd_avx2(auVar12,pauVar36[0xc]);
        auVar83 = vpsrld_avx2(auVar9,0x19);
        auVar115 = vpslld_avx2(auVar9,7);
        auVar89 = vpandn_avx2(auVar9,auVar13);
        auVar90 = vpand_avx2(auVar9,auVar10);
        auVar255 = vpsrld_avx2(auVar8,2);
        auVar84 = vpslld_avx2(auVar8,0x1e);
        auVar12 = vpaddd_avx2(auVar12,auVar116 ^ auVar85 ^ auVar86 ^ auVar114 ^ auVar83 ^ auVar115);
        auVar86 = vpsrld_avx2(auVar8,0xd);
        auVar83 = vpslld_avx2(auVar8,0x13);
        auVar12 = vpaddd_avx2(auVar12,auVar89 ^ auVar90);
        auVar90 = vpand_avx2(auVar91 ^ auVar11,auVar11 ^ auVar8);
        auVar89 = vpsrld_avx2(auVar8,0x16);
        auVar85 = vpslld_avx2(auVar8,10);
        auVar87 = vpaddd_avx2(auVar87,auVar12);
        auVar12 = vpaddd_avx2(auVar11 ^ auVar90,auVar12);
        auVar12 = vpaddd_avx2(auVar12,auVar255 ^ auVar84 ^ auVar86 ^ auVar83 ^ auVar89 ^ auVar85);
        auVar90 = vpaddd_avx2(_local_1e0,auStack_2c0);
        auVar116 = vpsrld_avx2(_local_1c0,3);
        auVar89 = vpsrld_avx2(_local_1c0,7);
        auVar84 = vpslld_avx2(_local_1c0,0x19);
        auVar86 = vpsrld_avx2(_local_1c0,0x12);
        auVar85 = vpslld_avx2(_local_1c0,0xe);
        auVar115 = vpsrld_avx2(auStack_220,10);
        auVar83 = vpsrld_avx2(auStack_220,0x11);
        auVar114 = vpslld_avx2(auStack_220,0xf);
        auVar90 = vpaddd_avx2(auVar90,auVar116 ^ auVar89 ^ auVar84 ^ auVar86 ^ auVar85);
        auVar89 = vpsrld_avx2(auStack_220,0x13);
        auVar86 = vpslld_avx2(auStack_220,0xd);
        _local_1e0 = vpaddd_avx2(auVar90,auVar115 ^ auVar83 ^ auVar114 ^ auVar89 ^ auVar86);
        auVar116 = vpsrld_avx2(auVar87,6);
        auVar85 = vpslld_avx2(auVar87,0x1a);
        auVar13 = vpaddd_avx2(_local_1e0,auVar13);
        auVar86 = vpsrld_avx2(auVar87,0xb);
        auVar114 = vpslld_avx2(auVar87,0x15);
        auVar13 = vpaddd_avx2(auVar13,pauVar36[0xd]);
        auVar83 = vpsrld_avx2(auVar87,0x19);
        auVar115 = vpslld_avx2(auVar87,7);
        auVar89 = vpandn_avx2(auVar87,auVar10);
        auVar90 = vpand_avx2(auVar87,auVar9);
        auVar255 = vpsrld_avx2(auVar12,2);
        auVar84 = vpslld_avx2(auVar12,0x1e);
        auVar13 = vpaddd_avx2(auVar13,auVar116 ^ auVar85 ^ auVar86 ^ auVar114 ^ auVar83 ^ auVar115);
        auVar86 = vpsrld_avx2(auVar12,0xd);
        auVar83 = vpslld_avx2(auVar12,0x13);
        auVar13 = vpaddd_avx2(auVar13,auVar89 ^ auVar90);
        auVar90 = vpand_avx2(auVar11 ^ auVar8,auVar8 ^ auVar12);
        auVar89 = vpsrld_avx2(auVar12,0x16);
        auVar85 = vpslld_avx2(auVar12,10);
        auVar91 = vpaddd_avx2(auVar91,auVar13);
        auVar13 = vpaddd_avx2(auVar8 ^ auVar90,auVar13);
        auVar13 = vpaddd_avx2(auVar13,auVar255 ^ auVar84 ^ auVar86 ^ auVar83 ^ auVar89 ^ auVar85);
        auVar90 = vpaddd_avx2(_local_1c0,auStack_2a0);
        auVar116 = vpsrld_avx2(_local_1a0,3);
        auVar89 = vpsrld_avx2(_local_1a0,7);
        auVar84 = vpslld_avx2(_local_1a0,0x19);
        auVar86 = vpsrld_avx2(_local_1a0,0x12);
        auVar85 = vpslld_avx2(_local_1a0,0xe);
        auVar115 = vpsrld_avx2(_local_200,10);
        auVar83 = vpsrld_avx2(_local_200,0x11);
        auVar114 = vpslld_avx2(_local_200,0xf);
        auVar90 = vpaddd_avx2(auVar90,auVar116 ^ auVar89 ^ auVar84 ^ auVar86 ^ auVar85);
        auVar89 = vpsrld_avx2(_local_200,0x13);
        auVar86 = vpslld_avx2(_local_200,0xd);
        _local_1c0 = vpaddd_avx2(auVar90,auVar115 ^ auVar83 ^ auVar114 ^ auVar89 ^ auVar86);
        auVar116 = vpsrld_avx2(auVar91,6);
        auVar85 = vpslld_avx2(auVar91,0x1a);
        auVar10 = vpaddd_avx2(_local_1c0,auVar10);
        auVar86 = vpsrld_avx2(auVar91,0xb);
        auVar114 = vpslld_avx2(auVar91,0x15);
        auVar10 = vpaddd_avx2(auVar10,pauVar36[0xe]);
        auVar83 = vpsrld_avx2(auVar91,0x19);
        auVar115 = vpslld_avx2(auVar91,7);
        auVar89 = vpandn_avx2(auVar91,auVar9);
        auVar90 = vpand_avx2(auVar91,auVar87);
        auVar255 = vpsrld_avx2(auVar13,2);
        auVar84 = vpslld_avx2(auVar13,0x1e);
        auVar10 = vpaddd_avx2(auVar10,auVar116 ^ auVar85 ^ auVar86 ^ auVar114 ^ auVar83 ^ auVar115);
        auVar86 = vpsrld_avx2(auVar13,0xd);
        auVar83 = vpslld_avx2(auVar13,0x13);
        auVar10 = vpaddd_avx2(auVar10,auVar89 ^ auVar90);
        auVar90 = vpand_avx2(auVar8 ^ auVar12,auVar12 ^ auVar13);
        auVar89 = vpsrld_avx2(auVar13,0x16);
        auVar85 = vpslld_avx2(auVar13,10);
        auVar11 = vpaddd_avx2(auVar11,auVar10);
        auVar10 = vpaddd_avx2(auVar12 ^ auVar90,auVar10);
        auVar10 = vpaddd_avx2(auVar10,auVar255 ^ auVar84 ^ auVar86 ^ auVar83 ^ auVar89 ^ auVar85);
        auVar90 = vpaddd_avx2(_local_1a0,auStack_280);
        auVar116 = vpsrld_avx2(_local_180,3);
        auVar89 = vpsrld_avx2(_local_180,7);
        auVar84 = vpslld_avx2(_local_180,0x19);
        auVar86 = vpsrld_avx2(_local_180,0x12);
        auVar85 = vpslld_avx2(_local_180,0xe);
        auVar115 = vpsrld_avx2(_local_1e0,10);
        auVar83 = vpsrld_avx2(_local_1e0,0x11);
        auVar114 = vpslld_avx2(_local_1e0,0xf);
        auVar90 = vpaddd_avx2(auVar90,auVar116 ^ auVar89 ^ auVar84 ^ auVar86 ^ auVar85);
        auVar89 = vpsrld_avx2(_local_1e0,0x13);
        auVar86 = vpslld_avx2(_local_1e0,0xd);
        _local_1a0 = vpaddd_avx2(auVar90,auVar115 ^ auVar83 ^ auVar114 ^ auVar89 ^ auVar86);
        auVar116 = vpsrld_avx2(auVar11,6);
        auVar85 = vpslld_avx2(auVar11,0x1a);
        auVar9 = vpaddd_avx2(_local_1a0,auVar9);
        auVar86 = vpsrld_avx2(auVar11,0xb);
        auVar114 = vpslld_avx2(auVar11,0x15);
        auVar9 = vpaddd_avx2(auVar9,pauVar36[0xf]);
        auVar83 = vpsrld_avx2(auVar11,0x19);
        auVar115 = vpslld_avx2(auVar11,7);
        auVar89 = vpandn_avx2(auVar11,auVar87);
        auVar90 = vpand_avx2(auVar11,auVar91);
        auVar255 = vpsrld_avx2(auVar10,2);
        auVar84 = vpslld_avx2(auVar10,0x1e);
        auVar9 = vpaddd_avx2(auVar9,auVar116 ^ auVar85 ^ auVar86 ^ auVar114 ^ auVar83 ^ auVar115);
        auVar86 = vpsrld_avx2(auVar10,0xd);
        auVar83 = vpslld_avx2(auVar10,0x13);
        auVar9 = vpaddd_avx2(auVar9,auVar89 ^ auVar90);
        auVar90 = vpand_avx2(auVar12 ^ auVar13,auVar13 ^ auVar10);
        auVar89 = vpsrld_avx2(auVar10,0x16);
        auVar85 = vpslld_avx2(auVar10,10);
        auVar8 = vpaddd_avx2(auVar8,auVar9);
        auVar9 = vpaddd_avx2(auVar13 ^ auVar90,auVar9);
        auVar9 = vpaddd_avx2(auVar9,auVar255 ^ auVar84 ^ auVar86 ^ auVar83 ^ auVar89 ^ auVar85);
        auVar90 = vpaddd_avx2(_local_180,auStack_260);
        auVar116 = vpsrld_avx2(_local_160,3);
        auVar89 = vpsrld_avx2(_local_160,7);
        auVar84 = vpslld_avx2(_local_160,0x19);
        auVar86 = vpsrld_avx2(_local_160,0x12);
        auVar85 = vpslld_avx2(_local_160,0xe);
        auVar115 = vpsrld_avx2(_local_1c0,10);
        auVar83 = vpsrld_avx2(_local_1c0,0x11);
        auVar114 = vpslld_avx2(_local_1c0,0xf);
        auVar90 = vpaddd_avx2(auVar90,auVar116 ^ auVar89 ^ auVar84 ^ auVar86 ^ auVar85);
        auVar89 = vpsrld_avx2(_local_1c0,0x13);
        auVar86 = vpslld_avx2(_local_1c0,0xd);
        _local_180 = vpaddd_avx2(auVar90,auVar115 ^ auVar83 ^ auVar114 ^ auVar89 ^ auVar86);
        auVar116 = vpsrld_avx2(auVar8,6);
        auVar85 = vpslld_avx2(auVar8,0x1a);
        auVar87 = vpaddd_avx2(_local_180,auVar87);
        auVar86 = vpsrld_avx2(auVar8,0xb);
        auVar114 = vpslld_avx2(auVar8,0x15);
        auVar87 = vpaddd_avx2(auVar87,pauVar36[0x10]);
        auVar83 = vpsrld_avx2(auVar8,0x19);
        auVar115 = vpslld_avx2(auVar8,7);
        auVar89 = vpandn_avx2(auVar8,auVar91);
        auVar90 = vpand_avx2(auVar8,auVar11);
        auVar255 = vpsrld_avx2(auVar9,2);
        auVar84 = vpslld_avx2(auVar9,0x1e);
        auVar87 = vpaddd_avx2(auVar87,auVar116 ^ auVar85 ^ auVar86 ^ auVar114 ^ auVar83 ^ auVar115);
        auVar83 = vpsrld_avx2(auVar9,0xd);
        auVar85 = vpslld_avx2(auVar9,0x13);
        auVar87 = vpaddd_avx2(auVar87,auVar89 ^ auVar90);
        auVar90 = vpand_avx2(auVar13 ^ auVar10,auVar10 ^ auVar9);
        auVar89 = vpsrld_avx2(auVar9,0x16);
        auVar114 = vpslld_avx2(auVar9,10);
        auVar86 = vpaddd_avx2(auVar12,auVar87);
        auVar12 = vpaddd_avx2(auVar10 ^ auVar90,auVar87);
        auVar89 = vpaddd_avx2(auVar12,auVar255 ^ auVar84 ^ auVar83 ^ auVar85 ^ auVar89 ^ auVar114);
        auVar12 = vpaddd_avx2(_local_160,auStack_240);
        auVar116 = vpsrld_avx2(_local_140,3);
        auVar87 = vpsrld_avx2(_local_140,7);
        auVar84 = vpslld_avx2(_local_140,0x19);
        auVar90 = vpsrld_avx2(_local_140,0x12);
        auVar85 = vpslld_avx2(_local_140,0xe);
        auVar115 = vpsrld_avx2(_local_1a0,10);
        auVar83 = vpsrld_avx2(_local_1a0,0x11);
        auVar114 = vpslld_avx2(_local_1a0,0xf);
        auVar12 = vpaddd_avx2(auVar12,auVar116 ^ auVar87 ^ auVar84 ^ auVar90 ^ auVar85);
        auVar87 = vpsrld_avx2(_local_1a0,0x13);
        auVar90 = vpslld_avx2(_local_1a0,0xd);
        _local_160 = vpaddd_avx2(auVar12,auVar115 ^ auVar83 ^ auVar114 ^ auVar87 ^ auVar90);
        auVar116 = vpsrld_avx2(auVar86,6);
        auVar85 = vpslld_avx2(auVar86,0x1a);
        auVar12 = vpaddd_avx2(_local_160,auVar91);
        auVar90 = vpsrld_avx2(auVar86,0xb);
        auVar114 = vpslld_avx2(auVar86,0x15);
        auVar12 = vpaddd_avx2(auVar12,pauVar36[0x11]);
        auVar83 = vpsrld_avx2(auVar86,0x19);
        auVar115 = vpslld_avx2(auVar86,7);
        auVar91 = vpandn_avx2(auVar86,auVar11);
        auVar87 = vpand_avx2(auVar86,auVar8);
        auVar255 = vpsrld_avx2(auVar89,2);
        auVar84 = vpslld_avx2(auVar89,0x1e);
        auVar12 = vpaddd_avx2(auVar12,auVar116 ^ auVar85 ^ auVar90 ^ auVar114 ^ auVar83 ^ auVar115);
        auVar90 = vpsrld_avx2(auVar89,0xd);
        auVar83 = vpslld_avx2(auVar89,0x13);
        auVar12 = vpaddd_avx2(auVar12,auVar91 ^ auVar87);
        auVar87 = vpand_avx2(auVar10 ^ auVar9,auVar9 ^ auVar89);
        auVar91 = vpsrld_avx2(auVar89,0x16);
        auVar85 = vpslld_avx2(auVar89,10);
        auVar13 = vpaddd_avx2(auVar13,auVar12);
        auVar12 = vpaddd_avx2(auVar9 ^ auVar87,auVar12);
        auVar91 = vpaddd_avx2(auVar12,auVar255 ^ auVar84 ^ auVar90 ^ auVar83 ^ auVar91 ^ auVar85);
        auVar12 = vpaddd_avx2(_local_140,auStack_220);
        auVar116 = vpsrld_avx2(_local_120,3);
        auVar87 = vpsrld_avx2(_local_120,7);
        auVar84 = vpslld_avx2(_local_120,0x19);
        auVar90 = vpsrld_avx2(_local_120,0x12);
        auVar85 = vpslld_avx2(_local_120,0xe);
        auVar115 = vpsrld_avx2(_local_180,10);
        auVar83 = vpsrld_avx2(_local_180,0x11);
        auVar114 = vpslld_avx2(_local_180,0xf);
        auVar12 = vpaddd_avx2(auVar12,auVar116 ^ auVar87 ^ auVar84 ^ auVar90 ^ auVar85);
        auVar87 = vpsrld_avx2(_local_180,0x13);
        auVar90 = vpslld_avx2(_local_180,0xd);
        _local_140 = vpaddd_avx2(auVar12,auVar115 ^ auVar83 ^ auVar114 ^ auVar87 ^ auVar90);
        auVar116 = vpsrld_avx2(auVar13,6);
        auVar85 = vpslld_avx2(auVar13,0x1a);
        auVar11 = vpaddd_avx2(_local_140,auVar11);
        auVar90 = vpsrld_avx2(auVar13,0xb);
        auVar114 = vpslld_avx2(auVar13,0x15);
        auVar11 = vpaddd_avx2(auVar11,pauVar36[0x12]);
        auVar83 = vpsrld_avx2(auVar13,0x19);
        auVar115 = vpslld_avx2(auVar13,7);
        auVar87 = vpandn_avx2(auVar13,auVar8);
        auVar12 = vpand_avx2(auVar13,auVar86);
        auVar255 = vpsrld_avx2(auVar91,2);
        auVar84 = vpslld_avx2(auVar91,0x1e);
        auVar11 = vpaddd_avx2(auVar11,auVar116 ^ auVar85 ^ auVar90 ^ auVar114 ^ auVar83 ^ auVar115);
        auVar90 = vpsrld_avx2(auVar91,0xd);
        auVar83 = vpslld_avx2(auVar91,0x13);
        auVar11 = vpaddd_avx2(auVar11,auVar87 ^ auVar12);
        auVar12 = vpand_avx2(auVar9 ^ auVar89,auVar89 ^ auVar91);
        auVar87 = vpsrld_avx2(auVar91,0x16);
        auVar85 = vpslld_avx2(auVar91,10);
        auVar10 = vpaddd_avx2(auVar10,auVar11);
        auVar11 = vpaddd_avx2(auVar89 ^ auVar12,auVar11);
        auVar11 = vpaddd_avx2(auVar11,auVar255 ^ auVar84 ^ auVar90 ^ auVar83 ^ auVar87 ^ auVar85);
        auVar12 = vpaddd_avx2(_local_120,_local_200);
        auVar116 = vpsrld_avx2(auVar88,3);
        auVar87 = vpsrld_avx2(auVar88,7);
        auVar84 = vpslld_avx2(auVar88,0x19);
        auVar90 = vpsrld_avx2(auVar88,0x12);
        auVar85 = vpslld_avx2(auVar88,0xe);
        auVar115 = vpsrld_avx2(_local_160,10);
        auVar83 = vpsrld_avx2(_local_160,0x11);
        auVar114 = vpslld_avx2(_local_160,0xf);
        auVar12 = vpaddd_avx2(auVar12,auVar116 ^ auVar87 ^ auVar84 ^ auVar90 ^ auVar85);
        auVar87 = vpsrld_avx2(_local_160,0x13);
        auVar90 = vpslld_avx2(_local_160,0xd);
        _local_120 = vpaddd_avx2(auVar12,auVar115 ^ auVar83 ^ auVar114 ^ auVar87 ^ auVar90);
        auVar255 = vpsrld_avx2(auVar10,6);
        auVar114 = vpslld_avx2(auVar10,0x1a);
        auVar8 = vpaddd_avx2(_local_120,auVar8);
        auVar83 = vpsrld_avx2(auVar10,0xb);
        auVar115 = vpslld_avx2(auVar10,0x15);
        auVar8 = vpaddd_avx2(auVar8,pauVar36[0x13]);
        auVar84 = vpsrld_avx2(auVar10,0x19);
        auVar116 = vpslld_avx2(auVar10,7);
        auVar87 = vpandn_avx2(auVar10,auVar86);
        auVar12 = vpand_avx2(auVar10,auVar13);
        auVar363 = vpsrld_avx2(auVar11,2);
        auVar85 = vpslld_avx2(auVar11,0x1e);
        auVar90 = auVar91 ^ auVar11;
        auVar8 = vpaddd_avx2(auVar8,auVar255 ^ auVar114 ^ auVar83 ^ auVar115 ^ auVar84 ^ auVar116);
        auVar83 = vpsrld_avx2(auVar11,0xd);
        auVar84 = vpslld_avx2(auVar11,0x13);
        auVar8 = vpaddd_avx2(auVar8,auVar87 ^ auVar12);
        auVar12 = vpand_avx2(auVar89 ^ auVar91,auVar90);
        auVar87 = vpsrld_avx2(auVar11,0x16);
        auVar114 = vpslld_avx2(auVar11,10);
        auVar9 = vpaddd_avx2(auVar9,auVar8);
        auVar8 = vpaddd_avx2(auVar91 ^ auVar12,auVar8);
        auVar8 = vpaddd_avx2(auVar8,auVar363 ^ auVar85 ^ auVar83 ^ auVar84 ^ auVar87 ^ auVar114);
        iVar122 = iVar122 + -1;
        pauVar36 = pauVar36 + 0x10;
      } while (iVar122 != 0);
      if ((int)local_100._0_4_ < 2) {
        puVar37 = (uint *)&DAT_00107680;
      }
      if ((int)local_100._4_4_ < 2) {
        puVar42 = (uint *)&DAT_00107680;
      }
      if ((int)local_100._8_4_ < 2) {
        puVar40 = (undefined4 *)&DAT_00107680;
      }
      if ((int)local_100._12_4_ < 2) {
        puVar44 = (undefined4 *)&DAT_00107680;
      }
      if (stack0xffffffffffffff10 < 2) {
        puVar39 = (uint *)&DAT_00107680;
      }
      if (stack0xffffffffffffff14 < 2) {
        puVar43 = (uint *)&DAT_00107680;
      }
      if ((int)uStack_e8 < 2) {
        puVar45 = (undefined4 *)&DAT_00107680;
      }
      if (iStack_e4 < 2) {
        puVar46 = (undefined4 *)&DAT_00107680;
      }
      auVar88 = vpcmpgtd_avx2(_local_100,(undefined1  [32])0x0);
      _local_100 = vpaddd_avx2(_local_100,auVar88);
      auVar8 = vpand_avx2(auVar8,auVar88);
      auVar11 = vpand_avx2(auVar11,auVar88);
      auVar12 = vpand_avx2(auVar91,auVar88);
      auVar87 = vpand_avx2(auVar89,auVar88);
      auVar8 = vpaddd_avx2(auVar8,*param_1);
      auVar91 = vpand_avx2(auVar9,auVar88);
      auVar9 = vpaddd_avx2(auVar11,param_1[1]);
      auVar90 = vpand_avx2(auVar10,auVar88);
      auVar10 = vpaddd_avx2(auVar12,param_1[2]);
      auVar13 = vpand_avx2(auVar13,auVar88);
      auVar11 = vpaddd_avx2(auVar87,param_1[3]);
      auVar88 = vpand_avx2(auVar86,auVar88);
      auVar12 = vpaddd_avx2(auVar91,*pauVar6);
      auVar87 = vpaddd_avx2(auVar90,param_1[5]);
      *param_1 = auVar8;
      auVar91 = vpaddd_avx2(auVar13,param_1[6]);
      param_1[1] = auVar9;
      auVar13 = vpaddd_avx2(auVar88,param_1[7]);
      param_1[2] = auVar10;
      param_1[3] = auVar11;
      *pauVar6 = auVar12;
      param_1[5] = auVar87;
      param_1[6] = auVar91;
      param_1[7] = auVar13;
      auVar90._16_16_ = _DAT_00107e10;
      auVar90._0_16_ = _DAT_00107e00;
      iVar34 = iVar34 + -1;
    } while (iVar34 != 0);
    return;
  }
  stack0xffffffffffffff10 = &stack0x00000000;
  param_1 = param_1 + 4;
  do {
    uStack_e8 = param_3;
    auVar8 = _local_100;
    puVar37 = (uint *)*param_2;
    local_100._0_4_ = *(undefined4 *)(param_2 + 1);
    iVar34 = local_100._0_4_;
    if ((int)local_100._0_4_ < 1) {
      puVar37 = (uint *)&DAT_00107680;
      iVar34 = 0;
    }
    puVar42 = (uint *)param_2[2];
    local_100._4_4_ = *(undefined4 *)(param_2 + 3);
    if (iVar34 < (int)local_100._4_4_) {
      iVar34 = local_100._4_4_;
    }
    if ((int)local_100._4_4_ < 1) {
      puVar42 = (uint *)&DAT_00107680;
    }
    puVar40 = (undefined4 *)param_2[4];
    local_100._8_4_ = *(undefined4 *)(param_2 + 5);
    if (iVar34 < (int)local_100._8_4_) {
      iVar34 = local_100._8_4_;
    }
    if ((int)local_100._8_4_ < 1) {
      puVar40 = (undefined4 *)&DAT_00107680;
    }
    puVar44 = (undefined4 *)param_2[6];
    local_100._12_4_ = *(undefined4 *)(param_2 + 7);
    if (iVar34 < (int)local_100._12_4_) {
      iVar34 = local_100._12_4_;
    }
    local_f0 = auVar8._16_16_;
    if ((int)local_100._12_4_ < 1) {
      puVar44 = (undefined4 *)&DAT_00107680;
    }
    if (iVar34 == 0) {
      return;
    }
    auVar47 = *(undefined1 (*) [16])param_1[-4];
    auVar117 = *(undefined1 (*) [16])param_1[-3];
    auVar337 = *(undefined1 (*) [16])param_1[-2];
    auVar336 = *(undefined1 (*) [16])param_1[-1];
    auVar338 = *(undefined1 (*) [16])*param_1;
    auVar118 = *(undefined1 (*) [16])param_1[1];
    auVar123 = *(undefined1 (*) [16])param_1[2];
    auVar268 = *(undefined1 (*) [16])param_1[3];
    do {
      auVar8 = _local_100;
      auVar82 = vpinsrd_avx(ZEXT416(*puVar37),*puVar40,1);
      auVar283 = vpinsrd_avx(ZEXT416(*puVar42),*puVar44,1);
      auVar82 = vpunpckldq_avx(auVar82,auVar283);
      auVar82 = vpshufb_avx(auVar82,_DAT_00107e00);
      auVar254 = vpsrld_avx(auVar338,6);
      auVar111 = vpslld_avx(auVar338,0x1a);
      auVar268 = vpaddd_avx(auVar82,auVar268);
      auVar78 = vpsrld_avx(auVar338,0xb);
      auVar112 = vpslld_avx(auVar338,0x15);
      auVar14._4_4_ = _UNK_00107604;
      auVar14._0_4_ = _K256;
      auVar14._8_4_ = _UNK_00107608;
      auVar14._12_4_ = _UNK_0010760c;
      auVar268 = vpaddd_avx(auVar268,auVar14);
      auVar79 = vpsrld_avx(auVar338,0x19);
      auVar113 = vpslld_avx(auVar338,7);
      auVar81 = vpandn_avx(auVar338,auVar123);
      auVar283 = vpand_avx(auVar338,auVar118);
      auVar362 = vpsrld_avx(auVar47,2);
      auVar80 = vpslld_avx(auVar47,0x1e);
      auVar268 = vpaddd_avx(auVar268,auVar254 ^ auVar111 ^ auVar78 ^ auVar112 ^ auVar79 ^ auVar113);
      auVar78 = vpsrld_avx(auVar47,0xd);
      auVar79 = vpslld_avx(auVar47,0x13);
      auVar268 = vpaddd_avx(auVar268,auVar81 ^ auVar283);
      auVar283 = vpand_avx(auVar337 ^ auVar117,auVar117 ^ auVar47);
      auVar81 = vpsrld_avx(auVar47,0x16);
      auVar111 = vpslld_avx(auVar47,10);
      auVar336 = vpaddd_avx(auVar336,auVar268);
      auVar268 = vpaddd_avx(auVar117 ^ auVar283,auVar268);
      auVar268 = vpaddd_avx(auVar268,auVar362 ^ auVar80 ^ auVar78 ^ auVar79 ^ auVar81 ^ auVar111);
      auVar283 = vpinsrd_avx(ZEXT416(puVar37[1]),puVar40[1],1);
      auVar81 = vpinsrd_avx(ZEXT416(puVar42[1]),puVar44[1],1);
      auVar283 = vpunpckldq_avx(auVar283,auVar81);
      unique0x000fad00 = vpshufb_avx(auVar283,_DAT_00107e00);
      auVar254 = vpsrld_avx(auVar336,6);
      auVar111 = vpslld_avx(auVar336,0x1a);
      auVar123 = vpaddd_avx(unique0x000fad00,auVar123);
      auVar78 = vpsrld_avx(auVar336,0xb);
      auVar112 = vpslld_avx(auVar336,0x15);
      auVar15._4_4_ = _UNK_00107624;
      auVar15._0_4_ = _DAT_00107620;
      auVar15._8_4_ = _UNK_00107628;
      auVar15._12_4_ = _UNK_0010762c;
      auVar123 = vpaddd_avx(auVar123,auVar15);
      auVar79 = vpsrld_avx(auVar336,0x19);
      auVar113 = vpslld_avx(auVar336,7);
      auVar81 = vpandn_avx(auVar336,auVar118);
      auVar283 = vpand_avx(auVar336,auVar338);
      auVar362 = vpsrld_avx(auVar268,2);
      auVar80 = vpslld_avx(auVar268,0x1e);
      auVar123 = vpaddd_avx(auVar123,auVar254 ^ auVar111 ^ auVar78 ^ auVar112 ^ auVar79 ^ auVar113);
      auVar78 = vpsrld_avx(auVar268,0xd);
      auVar79 = vpslld_avx(auVar268,0x13);
      auVar123 = vpaddd_avx(auVar123,auVar81 ^ auVar283);
      auVar283 = vpand_avx(auVar117 ^ auVar47,auVar47 ^ auVar268);
      auVar81 = vpsrld_avx(auVar268,0x16);
      auVar111 = vpslld_avx(auVar268,10);
      auVar337 = vpaddd_avx(auVar337,auVar123);
      auVar123 = vpaddd_avx(auVar47 ^ auVar283,auVar123);
      auVar123 = vpaddd_avx(auVar123,auVar362 ^ auVar80 ^ auVar78 ^ auVar79 ^ auVar81 ^ auVar111);
      auVar283 = vpinsrd_avx(ZEXT416(puVar37[2]),puVar40[2],1);
      auVar81 = vpinsrd_avx(ZEXT416(puVar42[2]),puVar44[2],1);
      auVar283 = vpunpckldq_avx(auVar283,auVar81);
      local_1e0._0_16_ = vpshufb_avx(auVar283,_DAT_00107e00);
      auVar254 = vpsrld_avx(auVar337,6);
      auVar111 = vpslld_avx(auVar337,0x1a);
      auVar118 = vpaddd_avx(local_1e0._0_16_,auVar118);
      auVar78 = vpsrld_avx(auVar337,0xb);
      auVar112 = vpslld_avx(auVar337,0x15);
      auVar16._4_4_ = _UNK_00107644;
      auVar16._0_4_ = _DAT_00107640;
      auVar16._8_4_ = _UNK_00107648;
      auVar16._12_4_ = _UNK_0010764c;
      auVar118 = vpaddd_avx(auVar118,auVar16);
      auVar79 = vpsrld_avx(auVar337,0x19);
      auVar113 = vpslld_avx(auVar337,7);
      auVar81 = vpandn_avx(auVar337,auVar338);
      auVar283 = vpand_avx(auVar337,auVar336);
      auVar362 = vpsrld_avx(auVar123,2);
      auVar80 = vpslld_avx(auVar123,0x1e);
      auVar118 = vpaddd_avx(auVar118,auVar254 ^ auVar111 ^ auVar78 ^ auVar112 ^ auVar79 ^ auVar113);
      auVar78 = vpsrld_avx(auVar123,0xd);
      auVar79 = vpslld_avx(auVar123,0x13);
      auVar118 = vpaddd_avx(auVar118,auVar81 ^ auVar283);
      auVar283 = vpand_avx(auVar47 ^ auVar268,auVar268 ^ auVar123);
      auVar81 = vpsrld_avx(auVar123,0x16);
      auVar111 = vpslld_avx(auVar123,10);
      auVar117 = vpaddd_avx(auVar117,auVar118);
      auVar118 = vpaddd_avx(auVar268 ^ auVar283,auVar118);
      auVar118 = vpaddd_avx(auVar118,auVar362 ^ auVar80 ^ auVar78 ^ auVar79 ^ auVar81 ^ auVar111);
      auVar283 = vpinsrd_avx(ZEXT416(puVar37[3]),puVar40[3],1);
      auVar81 = vpinsrd_avx(ZEXT416(puVar42[3]),puVar44[3],1);
      auVar283 = vpunpckldq_avx(auVar283,auVar81);
      unique0x000fad00 = vpshufb_avx(auVar283,_DAT_00107e00);
      auVar254 = vpsrld_avx(auVar117,6);
      auVar111 = vpslld_avx(auVar117,0x1a);
      auVar338 = vpaddd_avx(unique0x000fad00,auVar338);
      auVar78 = vpsrld_avx(auVar117,0xb);
      auVar112 = vpslld_avx(auVar117,0x15);
      auVar17._4_4_ = _UNK_00107664;
      auVar17._0_4_ = _DAT_00107660;
      auVar17._8_4_ = _UNK_00107668;
      auVar17._12_4_ = _UNK_0010766c;
      auVar338 = vpaddd_avx(auVar338,auVar17);
      auVar79 = vpsrld_avx(auVar117,0x19);
      auVar113 = vpslld_avx(auVar117,7);
      auVar81 = vpandn_avx(auVar117,auVar336);
      auVar283 = vpand_avx(auVar117,auVar337);
      auVar362 = vpsrld_avx(auVar118,2);
      auVar80 = vpslld_avx(auVar118,0x1e);
      auVar338 = vpaddd_avx(auVar338,auVar254 ^ auVar111 ^ auVar78 ^ auVar112 ^ auVar79 ^ auVar113);
      auVar78 = vpsrld_avx(auVar118,0xd);
      auVar79 = vpslld_avx(auVar118,0x13);
      auVar338 = vpaddd_avx(auVar338,auVar81 ^ auVar283);
      auVar283 = vpand_avx(auVar268 ^ auVar123,auVar123 ^ auVar118);
      auVar81 = vpsrld_avx(auVar118,0x16);
      auVar111 = vpslld_avx(auVar118,10);
      auVar47 = vpaddd_avx(auVar47,auVar338);
      auVar338 = vpaddd_avx(auVar123 ^ auVar283,auVar338);
      auVar338 = vpaddd_avx(auVar338,auVar362 ^ auVar80 ^ auVar78 ^ auVar79 ^ auVar81 ^ auVar111);
      auVar283 = vpinsrd_avx(ZEXT416(puVar37[4]),puVar40[4],1);
      auVar81 = vpinsrd_avx(ZEXT416(puVar42[4]),puVar44[4],1);
      auVar283 = vpunpckldq_avx(auVar283,auVar81);
      local_1c0._0_16_ = vpshufb_avx(auVar283,_DAT_00107e00);
      auVar254 = vpsrld_avx(auVar47,6);
      auVar111 = vpslld_avx(auVar47,0x1a);
      auVar336 = vpaddd_avx(local_1c0._0_16_,auVar336);
      auVar78 = vpsrld_avx(auVar47,0xb);
      auVar112 = vpslld_avx(auVar47,0x15);
      auVar18._4_4_ = _UNK_00107684;
      auVar18._0_4_ = _DAT_00107680;
      auVar18._8_4_ = _UNK_00107688;
      auVar18._12_4_ = _UNK_0010768c;
      auVar336 = vpaddd_avx(auVar336,auVar18);
      auVar79 = vpsrld_avx(auVar47,0x19);
      auVar113 = vpslld_avx(auVar47,7);
      auVar81 = vpandn_avx(auVar47,auVar337);
      auVar283 = vpand_avx(auVar47,auVar117);
      auVar362 = vpsrld_avx(auVar338,2);
      auVar80 = vpslld_avx(auVar338,0x1e);
      auVar336 = vpaddd_avx(auVar336,auVar254 ^ auVar111 ^ auVar78 ^ auVar112 ^ auVar79 ^ auVar113);
      auVar78 = vpsrld_avx(auVar338,0xd);
      auVar79 = vpslld_avx(auVar338,0x13);
      auVar336 = vpaddd_avx(auVar336,auVar81 ^ auVar283);
      auVar283 = vpand_avx(auVar123 ^ auVar118,auVar118 ^ auVar338);
      auVar81 = vpsrld_avx(auVar338,0x16);
      auVar111 = vpslld_avx(auVar338,10);
      auVar268 = vpaddd_avx(auVar268,auVar336);
      auVar336 = vpaddd_avx(auVar118 ^ auVar283,auVar336);
      auVar336 = vpaddd_avx(auVar336,auVar362 ^ auVar80 ^ auVar78 ^ auVar79 ^ auVar81 ^ auVar111);
      auVar283 = vpinsrd_avx(ZEXT416(puVar37[5]),puVar40[5],1);
      auVar81 = vpinsrd_avx(ZEXT416(puVar42[5]),puVar44[5],1);
      auVar283 = vpunpckldq_avx(auVar283,auVar81);
      unique0x000fad00 = vpshufb_avx(auVar283,_DAT_00107e00);
      auVar254 = vpsrld_avx(auVar268,6);
      auVar111 = vpslld_avx(auVar268,0x1a);
      auVar337 = vpaddd_avx(unique0x000fad00,auVar337);
      auVar78 = vpsrld_avx(auVar268,0xb);
      auVar112 = vpslld_avx(auVar268,0x15);
      auVar19._4_4_ = _UNK_001076a4;
      auVar19._0_4_ = _DAT_001076a0;
      auVar19._8_4_ = _UNK_001076a8;
      auVar19._12_4_ = _UNK_001076ac;
      auVar337 = vpaddd_avx(auVar337,auVar19);
      auVar79 = vpsrld_avx(auVar268,0x19);
      auVar113 = vpslld_avx(auVar268,7);
      auVar81 = vpandn_avx(auVar268,auVar117);
      auVar283 = vpand_avx(auVar268,auVar47);
      auVar362 = vpsrld_avx(auVar336,2);
      auVar80 = vpslld_avx(auVar336,0x1e);
      auVar337 = vpaddd_avx(auVar337,auVar254 ^ auVar111 ^ auVar78 ^ auVar112 ^ auVar79 ^ auVar113);
      auVar78 = vpsrld_avx(auVar336,0xd);
      auVar79 = vpslld_avx(auVar336,0x13);
      auVar337 = vpaddd_avx(auVar337,auVar81 ^ auVar283);
      auVar283 = vpand_avx(auVar118 ^ auVar338,auVar338 ^ auVar336);
      auVar81 = vpsrld_avx(auVar336,0x16);
      auVar111 = vpslld_avx(auVar336,10);
      auVar123 = vpaddd_avx(auVar123,auVar337);
      auVar337 = vpaddd_avx(auVar338 ^ auVar283,auVar337);
      auVar337 = vpaddd_avx(auVar337,auVar362 ^ auVar80 ^ auVar78 ^ auVar79 ^ auVar81 ^ auVar111);
      auVar283 = vpinsrd_avx(ZEXT416(puVar37[6]),puVar40[6],1);
      auVar81 = vpinsrd_avx(ZEXT416(puVar42[6]),puVar44[6],1);
      auVar283 = vpunpckldq_avx(auVar283,auVar81);
      local_1a0._0_16_ = vpshufb_avx(auVar283,_DAT_00107e00);
      auVar254 = vpsrld_avx(auVar123,6);
      auVar111 = vpslld_avx(auVar123,0x1a);
      auVar117 = vpaddd_avx(local_1a0._0_16_,auVar117);
      auVar78 = vpsrld_avx(auVar123,0xb);
      auVar112 = vpslld_avx(auVar123,0x15);
      auVar20._4_4_ = _UNK_001076c4;
      auVar20._0_4_ = _DAT_001076c0;
      auVar20._8_4_ = _UNK_001076c8;
      auVar20._12_4_ = _UNK_001076cc;
      auVar117 = vpaddd_avx(auVar117,auVar20);
      auVar79 = vpsrld_avx(auVar123,0x19);
      auVar113 = vpslld_avx(auVar123,7);
      auVar81 = vpandn_avx(auVar123,auVar47);
      auVar283 = vpand_avx(auVar123,auVar268);
      auVar362 = vpsrld_avx(auVar337,2);
      auVar80 = vpslld_avx(auVar337,0x1e);
      auVar117 = vpaddd_avx(auVar117,auVar254 ^ auVar111 ^ auVar78 ^ auVar112 ^ auVar79 ^ auVar113);
      auVar78 = vpsrld_avx(auVar337,0xd);
      auVar79 = vpslld_avx(auVar337,0x13);
      auVar117 = vpaddd_avx(auVar117,auVar81 ^ auVar283);
      auVar283 = vpand_avx(auVar338 ^ auVar336,auVar336 ^ auVar337);
      auVar81 = vpsrld_avx(auVar337,0x16);
      auVar111 = vpslld_avx(auVar337,10);
      auVar118 = vpaddd_avx(auVar118,auVar117);
      auVar117 = vpaddd_avx(auVar336 ^ auVar283,auVar117);
      auVar117 = vpaddd_avx(auVar117,auVar362 ^ auVar80 ^ auVar78 ^ auVar79 ^ auVar81 ^ auVar111);
      auVar283 = vpinsrd_avx(ZEXT416(puVar37[7]),puVar40[7],1);
      auVar81 = vpinsrd_avx(ZEXT416(puVar42[7]),puVar44[7],1);
      auVar283 = vpunpckldq_avx(auVar283,auVar81);
      unique0x000fad00 = vpshufb_avx(auVar283,_DAT_00107e00);
      auVar254 = vpsrld_avx(auVar118,6);
      auVar111 = vpslld_avx(auVar118,0x1a);
      auVar47 = vpaddd_avx(unique0x000fad00,auVar47);
      auVar78 = vpsrld_avx(auVar118,0xb);
      auVar112 = vpslld_avx(auVar118,0x15);
      auVar21._4_4_ = _UNK_001076e4;
      auVar21._0_4_ = _DAT_001076e0;
      auVar21._8_4_ = _UNK_001076e8;
      auVar21._12_4_ = _UNK_001076ec;
      auVar47 = vpaddd_avx(auVar47,auVar21);
      auVar79 = vpsrld_avx(auVar118,0x19);
      auVar113 = vpslld_avx(auVar118,7);
      auVar81 = vpandn_avx(auVar118,auVar268);
      auVar283 = vpand_avx(auVar118,auVar123);
      auVar362 = vpsrld_avx(auVar117,2);
      auVar80 = vpslld_avx(auVar117,0x1e);
      auVar47 = vpaddd_avx(auVar47,auVar254 ^ auVar111 ^ auVar78 ^ auVar112 ^ auVar79 ^ auVar113);
      auVar78 = vpsrld_avx(auVar117,0xd);
      auVar79 = vpslld_avx(auVar117,0x13);
      auVar47 = vpaddd_avx(auVar47,auVar81 ^ auVar283);
      auVar283 = vpand_avx(auVar336 ^ auVar337,auVar337 ^ auVar117);
      auVar81 = vpsrld_avx(auVar117,0x16);
      auVar111 = vpslld_avx(auVar117,10);
      auVar338 = vpaddd_avx(auVar338,auVar47);
      auVar47 = vpaddd_avx(auVar337 ^ auVar283,auVar47);
      auVar47 = vpaddd_avx(auVar47,auVar362 ^ auVar80 ^ auVar78 ^ auVar79 ^ auVar81 ^ auVar111);
      auVar283 = vpinsrd_avx(ZEXT416(puVar37[8]),puVar40[8],1);
      auVar81 = vpinsrd_avx(ZEXT416(puVar42[8]),puVar44[8],1);
      auVar283 = vpunpckldq_avx(auVar283,auVar81);
      local_180._0_16_ = vpshufb_avx(auVar283,_DAT_00107e00);
      auVar254 = vpsrld_avx(auVar338,6);
      auVar111 = vpslld_avx(auVar338,0x1a);
      auVar268 = vpaddd_avx(local_180._0_16_,auVar268);
      auVar78 = vpsrld_avx(auVar338,0xb);
      auVar112 = vpslld_avx(auVar338,0x15);
      auVar22._4_4_ = _UNK_00107704;
      auVar22._0_4_ = _DAT_00107700;
      auVar22._8_4_ = _UNK_00107708;
      auVar22._12_4_ = _UNK_0010770c;
      auVar268 = vpaddd_avx(auVar268,auVar22);
      auVar79 = vpsrld_avx(auVar338,0x19);
      auVar113 = vpslld_avx(auVar338,7);
      auVar81 = vpandn_avx(auVar338,auVar123);
      auVar283 = vpand_avx(auVar338,auVar118);
      auVar362 = vpsrld_avx(auVar47,2);
      auVar80 = vpslld_avx(auVar47,0x1e);
      auVar268 = vpaddd_avx(auVar268,auVar254 ^ auVar111 ^ auVar78 ^ auVar112 ^ auVar79 ^ auVar113);
      auVar78 = vpsrld_avx(auVar47,0xd);
      auVar79 = vpslld_avx(auVar47,0x13);
      auVar268 = vpaddd_avx(auVar268,auVar81 ^ auVar283);
      auVar283 = vpand_avx(auVar337 ^ auVar117,auVar117 ^ auVar47);
      auVar81 = vpsrld_avx(auVar47,0x16);
      auVar111 = vpslld_avx(auVar47,10);
      auVar336 = vpaddd_avx(auVar336,auVar268);
      auVar268 = vpaddd_avx(auVar117 ^ auVar283,auVar268);
      auVar268 = vpaddd_avx(auVar268,auVar362 ^ auVar80 ^ auVar78 ^ auVar79 ^ auVar81 ^ auVar111);
      auVar283 = vpinsrd_avx(ZEXT416(puVar37[9]),puVar40[9],1);
      auVar81 = vpinsrd_avx(ZEXT416(puVar42[9]),puVar44[9],1);
      auVar283 = vpunpckldq_avx(auVar283,auVar81);
      unique0x000fad00 = vpshufb_avx(auVar283,_DAT_00107e00);
      auVar254 = vpsrld_avx(auVar336,6);
      auVar111 = vpslld_avx(auVar336,0x1a);
      auVar123 = vpaddd_avx(unique0x000fad00,auVar123);
      auVar78 = vpsrld_avx(auVar336,0xb);
      auVar112 = vpslld_avx(auVar336,0x15);
      auVar23._4_4_ = _UNK_00107724;
      auVar23._0_4_ = _DAT_00107720;
      auVar23._8_4_ = _UNK_00107728;
      auVar23._12_4_ = _UNK_0010772c;
      auVar123 = vpaddd_avx(auVar123,auVar23);
      auVar79 = vpsrld_avx(auVar336,0x19);
      auVar113 = vpslld_avx(auVar336,7);
      auVar81 = vpandn_avx(auVar336,auVar118);
      auVar283 = vpand_avx(auVar336,auVar338);
      auVar362 = vpsrld_avx(auVar268,2);
      auVar80 = vpslld_avx(auVar268,0x1e);
      auVar123 = vpaddd_avx(auVar123,auVar254 ^ auVar111 ^ auVar78 ^ auVar112 ^ auVar79 ^ auVar113);
      auVar78 = vpsrld_avx(auVar268,0xd);
      auVar79 = vpslld_avx(auVar268,0x13);
      auVar123 = vpaddd_avx(auVar123,auVar81 ^ auVar283);
      auVar283 = vpand_avx(auVar117 ^ auVar47,auVar47 ^ auVar268);
      auVar81 = vpsrld_avx(auVar268,0x16);
      auVar111 = vpslld_avx(auVar268,10);
      auVar337 = vpaddd_avx(auVar337,auVar123);
      auVar123 = vpaddd_avx(auVar47 ^ auVar283,auVar123);
      auVar123 = vpaddd_avx(auVar123,auVar362 ^ auVar80 ^ auVar78 ^ auVar79 ^ auVar81 ^ auVar111);
      auVar283 = vpinsrd_avx(ZEXT416(puVar37[10]),puVar40[10],1);
      auVar81 = vpinsrd_avx(ZEXT416(puVar42[10]),puVar44[10],1);
      auVar283 = vpunpckldq_avx(auVar283,auVar81);
      local_160._0_16_ = vpshufb_avx(auVar283,_DAT_00107e00);
      auVar254 = vpsrld_avx(auVar337,6);
      auVar111 = vpslld_avx(auVar337,0x1a);
      auVar118 = vpaddd_avx(local_160._0_16_,auVar118);
      auVar78 = vpsrld_avx(auVar337,0xb);
      auVar112 = vpslld_avx(auVar337,0x15);
      auVar24._4_4_ = _UNK_00107744;
      auVar24._0_4_ = _DAT_00107740;
      auVar24._8_4_ = _UNK_00107748;
      auVar24._12_4_ = _UNK_0010774c;
      auVar118 = vpaddd_avx(auVar118,auVar24);
      auVar79 = vpsrld_avx(auVar337,0x19);
      auVar113 = vpslld_avx(auVar337,7);
      auVar81 = vpandn_avx(auVar337,auVar338);
      auVar283 = vpand_avx(auVar337,auVar336);
      auVar362 = vpsrld_avx(auVar123,2);
      auVar80 = vpslld_avx(auVar123,0x1e);
      auVar118 = vpaddd_avx(auVar118,auVar254 ^ auVar111 ^ auVar78 ^ auVar112 ^ auVar79 ^ auVar113);
      auVar78 = vpsrld_avx(auVar123,0xd);
      auVar79 = vpslld_avx(auVar123,0x13);
      auVar118 = vpaddd_avx(auVar118,auVar81 ^ auVar283);
      auVar283 = vpand_avx(auVar47 ^ auVar268,auVar268 ^ auVar123);
      auVar81 = vpsrld_avx(auVar123,0x16);
      auVar111 = vpslld_avx(auVar123,10);
      auVar117 = vpaddd_avx(auVar117,auVar118);
      auVar118 = vpaddd_avx(auVar268 ^ auVar283,auVar118);
      auVar118 = vpaddd_avx(auVar118,auVar362 ^ auVar80 ^ auVar78 ^ auVar79 ^ auVar81 ^ auVar111);
      auVar283 = vpinsrd_avx(ZEXT416(puVar37[0xb]),puVar40[0xb],1);
      auVar81 = vpinsrd_avx(ZEXT416(puVar42[0xb]),puVar44[0xb],1);
      auVar283 = vpunpckldq_avx(auVar283,auVar81);
      unique0x000fad00 = vpshufb_avx(auVar283,_DAT_00107e00);
      auVar254 = vpsrld_avx(auVar117,6);
      auVar111 = vpslld_avx(auVar117,0x1a);
      auVar338 = vpaddd_avx(unique0x000fad00,auVar338);
      auVar78 = vpsrld_avx(auVar117,0xb);
      auVar112 = vpslld_avx(auVar117,0x15);
      auVar26._4_4_ = _UNK_00107764;
      auVar26._0_4_ = _DAT_00107760;
      auVar26._8_4_ = _UNK_00107768;
      auVar26._12_4_ = _UNK_0010776c;
      auVar338 = vpaddd_avx(auVar338,auVar26);
      auVar79 = vpsrld_avx(auVar117,0x19);
      auVar113 = vpslld_avx(auVar117,7);
      auVar81 = vpandn_avx(auVar117,auVar336);
      auVar283 = vpand_avx(auVar117,auVar337);
      auVar362 = vpsrld_avx(auVar118,2);
      auVar80 = vpslld_avx(auVar118,0x1e);
      auVar338 = vpaddd_avx(auVar338,auVar254 ^ auVar111 ^ auVar78 ^ auVar112 ^ auVar79 ^ auVar113);
      auVar78 = vpsrld_avx(auVar118,0xd);
      auVar79 = vpslld_avx(auVar118,0x13);
      auVar338 = vpaddd_avx(auVar338,auVar81 ^ auVar283);
      auVar283 = vpand_avx(auVar268 ^ auVar123,auVar123 ^ auVar118);
      auVar81 = vpsrld_avx(auVar118,0x16);
      auVar111 = vpslld_avx(auVar118,10);
      auVar47 = vpaddd_avx(auVar47,auVar338);
      auVar338 = vpaddd_avx(auVar123 ^ auVar283,auVar338);
      auVar338 = vpaddd_avx(auVar338,auVar362 ^ auVar80 ^ auVar78 ^ auVar79 ^ auVar81 ^ auVar111);
      auVar283 = vpinsrd_avx(ZEXT416(puVar37[0xc]),puVar40[0xc],1);
      auVar81 = vpinsrd_avx(ZEXT416(puVar42[0xc]),puVar44[0xc],1);
      auVar283 = vpunpckldq_avx(auVar283,auVar81);
      local_140._0_16_ = vpshufb_avx(auVar283,_DAT_00107e00);
      auVar254 = vpsrld_avx(auVar47,6);
      auVar111 = vpslld_avx(auVar47,0x1a);
      auVar336 = vpaddd_avx(local_140._0_16_,auVar336);
      auVar78 = vpsrld_avx(auVar47,0xb);
      auVar112 = vpslld_avx(auVar47,0x15);
      auVar28._4_4_ = _UNK_00107784;
      auVar28._0_4_ = _DAT_00107780;
      auVar28._8_4_ = _UNK_00107788;
      auVar28._12_4_ = _UNK_0010778c;
      auVar336 = vpaddd_avx(auVar336,auVar28);
      auVar79 = vpsrld_avx(auVar47,0x19);
      auVar113 = vpslld_avx(auVar47,7);
      auVar81 = vpandn_avx(auVar47,auVar337);
      auVar283 = vpand_avx(auVar47,auVar117);
      auVar362 = vpsrld_avx(auVar338,2);
      auVar80 = vpslld_avx(auVar338,0x1e);
      auVar336 = vpaddd_avx(auVar336,auVar254 ^ auVar111 ^ auVar78 ^ auVar112 ^ auVar79 ^ auVar113);
      auVar78 = vpsrld_avx(auVar338,0xd);
      auVar79 = vpslld_avx(auVar338,0x13);
      auVar336 = vpaddd_avx(auVar336,auVar81 ^ auVar283);
      auVar283 = vpand_avx(auVar123 ^ auVar118,auVar118 ^ auVar338);
      auVar81 = vpsrld_avx(auVar338,0x16);
      auVar111 = vpslld_avx(auVar338,10);
      auVar268 = vpaddd_avx(auVar268,auVar336);
      auVar336 = vpaddd_avx(auVar118 ^ auVar283,auVar336);
      auVar283 = vpaddd_avx(auVar336,auVar362 ^ auVar80 ^ auVar78 ^ auVar79 ^ auVar81 ^ auVar111);
      auVar336 = vpinsrd_avx(ZEXT416(puVar37[0xd]),puVar40[0xd],1);
      auVar81 = vpinsrd_avx(ZEXT416(puVar42[0xd]),puVar44[0xd],1);
      auVar336 = vpunpckldq_avx(auVar336,auVar81);
      unique0x000fad00 = vpshufb_avx(auVar336,_DAT_00107e00);
      auVar254 = vpsrld_avx(auVar268,6);
      auVar111 = vpslld_avx(auVar268,0x1a);
      auVar337 = vpaddd_avx(unique0x000fad00,auVar337);
      auVar78 = vpsrld_avx(auVar268,0xb);
      auVar112 = vpslld_avx(auVar268,0x15);
      auVar30._4_4_ = _UNK_001077a4;
      auVar30._0_4_ = _DAT_001077a0;
      auVar30._8_4_ = _UNK_001077a8;
      auVar30._12_4_ = _UNK_001077ac;
      auVar337 = vpaddd_avx(auVar337,auVar30);
      auVar79 = vpsrld_avx(auVar268,0x19);
      auVar113 = vpslld_avx(auVar268,7);
      auVar81 = vpandn_avx(auVar268,auVar117);
      auVar336 = vpand_avx(auVar268,auVar47);
      auVar362 = vpsrld_avx(auVar283,2);
      auVar80 = vpslld_avx(auVar283,0x1e);
      auVar337 = vpaddd_avx(auVar337,auVar254 ^ auVar111 ^ auVar78 ^ auVar112 ^ auVar79 ^ auVar113);
      auVar78 = vpsrld_avx(auVar283,0xd);
      auVar111 = vpslld_avx(auVar283,0x13);
      auVar337 = vpaddd_avx(auVar337,auVar81 ^ auVar336);
      auVar81 = vpand_avx(auVar118 ^ auVar338,auVar338 ^ auVar283);
      auVar79 = vpsrld_avx(auVar283,0x16);
      auVar112 = vpslld_avx(auVar283,10);
      auVar336 = vpaddd_avx(auVar123,auVar337);
      auVar337 = vpaddd_avx(auVar338 ^ auVar81,auVar337);
      auVar337 = vpaddd_avx(auVar337,auVar362 ^ auVar80 ^ auVar78 ^ auVar111 ^ auVar79 ^ auVar112);
      auVar123 = vpinsrd_avx(ZEXT416(puVar37[0xe]),puVar40[0xe],1);
      auVar81 = vpinsrd_avx(ZEXT416(puVar42[0xe]),puVar44[0xe],1);
      auVar123 = vpunpckldq_avx(auVar123,auVar81);
      local_120._0_16_ = vpshufb_avx(auVar123,_DAT_00107e00);
      auVar254 = vpsrld_avx(auVar336,6);
      auVar111 = vpslld_avx(auVar336,0x1a);
      auVar117 = vpaddd_avx(local_120._0_16_,auVar117);
      auVar78 = vpsrld_avx(auVar336,0xb);
      auVar112 = vpslld_avx(auVar336,0x15);
      auVar31._4_4_ = _UNK_001077c4;
      auVar31._0_4_ = _DAT_001077c0;
      auVar31._8_4_ = _UNK_001077c8;
      auVar31._12_4_ = _UNK_001077cc;
      auVar117 = vpaddd_avx(auVar117,auVar31);
      auVar79 = vpsrld_avx(auVar336,0x19);
      auVar113 = vpslld_avx(auVar336,7);
      auVar81 = vpandn_avx(auVar336,auVar47);
      auVar123 = vpand_avx(auVar336,auVar268);
      auVar362 = vpsrld_avx(auVar337,2);
      auVar80 = vpslld_avx(auVar337,0x1e);
      auVar117 = vpaddd_avx(auVar117,auVar254 ^ auVar111 ^ auVar78 ^ auVar112 ^ auVar79 ^ auVar113);
      auVar78 = vpsrld_avx(auVar337,0xd);
      auVar79 = vpslld_avx(auVar337,0x13);
      auVar117 = vpaddd_avx(auVar117,auVar81 ^ auVar123);
      auVar123 = vpand_avx(auVar338 ^ auVar283,auVar283 ^ auVar337);
      auVar81 = vpsrld_avx(auVar337,0x16);
      auVar111 = vpslld_avx(auVar337,10);
      auVar118 = vpaddd_avx(auVar118,auVar117);
      auVar117 = vpaddd_avx(auVar283 ^ auVar123,auVar117);
      auVar117 = vpaddd_avx(auVar117,auVar362 ^ auVar80 ^ auVar78 ^ auVar79 ^ auVar81 ^ auVar111);
      puVar39 = puVar37 + 0xf;
      puVar37 = puVar37 + 0x10;
      puVar43 = puVar42 + 0xf;
      puVar42 = puVar42 + 0x10;
      auVar123 = vpinsrd_avx(ZEXT416(*puVar39),puVar40[0xf],1);
      puVar40 = puVar40 + 0x10;
      auVar81 = vpinsrd_avx(ZEXT416(*puVar43),puVar44[0xf],1);
      puVar44 = puVar44 + 0x10;
      auVar123 = vpunpckldq_avx(auVar123,auVar81);
      unique0x000fad00 = vpshufb_avx(auVar123,_DAT_00107e00);
      auVar362 = vpsrld_avx(auVar118,6);
      auVar112 = vpslld_avx(auVar118,0x1a);
      auVar47 = vpaddd_avx(unique0x000fad00,auVar47);
      auVar79 = vpsrld_avx(auVar118,0xb);
      auVar113 = vpslld_avx(auVar118,0x15);
      auVar32._4_4_ = _UNK_001077e4;
      auVar32._0_4_ = _DAT_001077e0;
      auVar32._8_4_ = _UNK_001077e8;
      auVar32._12_4_ = _UNK_001077ec;
      auVar47 = vpaddd_avx(auVar47,auVar32);
      auVar80 = vpsrld_avx(auVar118,0x19);
      auVar254 = vpslld_avx(auVar118,7);
      auVar81 = vpandn_avx(auVar118,auVar268);
      auVar123 = vpand_avx(auVar118,auVar336);
      auVar272 = vpsrld_avx(auVar117,2);
      auVar111 = vpslld_avx(auVar117,0x1e);
      auVar78 = auVar337 ^ auVar117;
      auVar47 = vpaddd_avx(auVar47,auVar362 ^ auVar112 ^ auVar79 ^ auVar113 ^ auVar80 ^ auVar254);
      auVar79 = vpsrld_avx(auVar117,0xd);
      auVar80 = vpslld_avx(auVar117,0x13);
      auVar47 = vpaddd_avx(auVar47,auVar81 ^ auVar123);
      auVar123 = vpand_avx(auVar283 ^ auVar337,auVar78);
      auVar81 = vpsrld_avx(auVar117,0x16);
      auVar112 = vpslld_avx(auVar117,10);
      auVar338 = vpaddd_avx(auVar338,auVar47);
      auVar47 = vpaddd_avx(auVar337 ^ auVar123,auVar47);
      auVar47 = vpaddd_avx(auVar47,auVar272 ^ auVar111 ^ auVar79 ^ auVar80 ^ auVar81 ^ auVar112);
      iVar122 = 3;
      pauVar38 = (undefined1 (*) [16])&DAT_00107780;
      do {
        auVar123 = vpaddd_avx(auVar82,stack0xfffffffffffffe90);
        auVar254 = vpsrld_avx(stack0xfffffffffffffe10,3);
        auVar82 = vpsrld_avx(stack0xfffffffffffffe10,7);
        auVar80 = vpslld_avx(stack0xfffffffffffffe10,0x19);
        auVar81 = vpsrld_avx(stack0xfffffffffffffe10,0x12);
        auVar111 = vpslld_avx(stack0xfffffffffffffe10,0xe);
        auVar113 = vpsrld_avx(local_120._0_16_,10);
        auVar79 = vpsrld_avx(local_120._0_16_,0x11);
        auVar112 = vpslld_avx(local_120._0_16_,0xf);
        auVar123 = vpaddd_avx(auVar123,auVar254 ^ auVar82 ^ auVar80 ^ auVar81 ^ auVar111);
        auVar82 = vpsrld_avx(local_120._0_16_,0x13);
        auVar81 = vpslld_avx(local_120._0_16_,0xd);
        auVar82 = vpaddd_avx(auVar123,auVar113 ^ auVar79 ^ auVar112 ^ auVar82 ^ auVar81);
        auVar362 = vpsrld_avx(auVar338,6);
        auVar112 = vpslld_avx(auVar338,0x1a);
        auVar123 = vpaddd_avx(auVar82,auVar268);
        auVar79 = vpsrld_avx(auVar338,0xb);
        auVar113 = vpslld_avx(auVar338,0x15);
        auVar123 = vpaddd_avx(auVar123,pauVar38[8]);
        auVar80 = vpsrld_avx(auVar338,0x19);
        auVar254 = vpslld_avx(auVar338,7);
        auVar81 = vpandn_avx(auVar338,auVar336);
        auVar268 = vpand_avx(auVar338,auVar118);
        auVar272 = vpsrld_avx(auVar47,2);
        auVar111 = vpslld_avx(auVar47,0x1e);
        auVar123 = vpaddd_avx(auVar123,auVar362 ^ auVar112 ^ auVar79 ^ auVar113 ^ auVar80 ^ auVar254
                             );
        auVar79 = vpsrld_avx(auVar47,0xd);
        auVar80 = vpslld_avx(auVar47,0x13);
        auVar123 = vpaddd_avx(auVar123,auVar81 ^ auVar268);
        auVar81 = vpand_avx(auVar78,auVar117 ^ auVar47);
        auVar78 = vpsrld_avx(auVar47,0x16);
        auVar112 = vpslld_avx(auVar47,10);
        auVar268 = vpaddd_avx(auVar283,auVar123);
        auVar123 = vpaddd_avx(auVar117 ^ auVar81,auVar123);
        auVar123 = vpaddd_avx(auVar123,auVar272 ^ auVar111 ^ auVar79 ^ auVar80 ^ auVar78 ^ auVar112)
        ;
        auVar283 = vpaddd_avx(stack0xfffffffffffffe10,local_160._0_16_);
        auVar254 = vpsrld_avx(local_1e0._0_16_,3);
        auVar81 = vpsrld_avx(local_1e0._0_16_,7);
        auVar80 = vpslld_avx(local_1e0._0_16_,0x19);
        auVar78 = vpsrld_avx(local_1e0._0_16_,0x12);
        auVar111 = vpslld_avx(local_1e0._0_16_,0xe);
        auVar113 = vpsrld_avx(stack0xfffffffffffffef0,10);
        auVar79 = vpsrld_avx(stack0xfffffffffffffef0,0x11);
        auVar112 = vpslld_avx(stack0xfffffffffffffef0,0xf);
        auVar283 = vpaddd_avx(auVar283,auVar254 ^ auVar81 ^ auVar80 ^ auVar78 ^ auVar111);
        auVar81 = vpsrld_avx(stack0xfffffffffffffef0,0x13);
        auVar78 = vpslld_avx(stack0xfffffffffffffef0,0xd);
        unique0x000f4780 = vpaddd_avx(auVar283,auVar113 ^ auVar79 ^ auVar112 ^ auVar81 ^ auVar78);
        auVar254 = vpsrld_avx(auVar268,6);
        auVar111 = vpslld_avx(auVar268,0x1a);
        auVar336 = vpaddd_avx(unique0x000f4780,auVar336);
        auVar78 = vpsrld_avx(auVar268,0xb);
        auVar112 = vpslld_avx(auVar268,0x15);
        auVar336 = vpaddd_avx(auVar336,pauVar38[10]);
        auVar79 = vpsrld_avx(auVar268,0x19);
        auVar113 = vpslld_avx(auVar268,7);
        auVar81 = vpandn_avx(auVar268,auVar118);
        auVar283 = vpand_avx(auVar268,auVar338);
        auVar362 = vpsrld_avx(auVar123,2);
        auVar80 = vpslld_avx(auVar123,0x1e);
        auVar336 = vpaddd_avx(auVar336,auVar254 ^ auVar111 ^ auVar78 ^ auVar112 ^ auVar79 ^ auVar113
                             );
        auVar78 = vpsrld_avx(auVar123,0xd);
        auVar79 = vpslld_avx(auVar123,0x13);
        auVar336 = vpaddd_avx(auVar336,auVar81 ^ auVar283);
        auVar283 = vpand_avx(auVar117 ^ auVar47,auVar47 ^ auVar123);
        auVar81 = vpsrld_avx(auVar123,0x16);
        auVar111 = vpslld_avx(auVar123,10);
        auVar337 = vpaddd_avx(auVar337,auVar336);
        auVar336 = vpaddd_avx(auVar47 ^ auVar283,auVar336);
        auVar336 = vpaddd_avx(auVar336,auVar362 ^ auVar80 ^ auVar78 ^ auVar79 ^ auVar81 ^ auVar111);
        auVar283 = vpaddd_avx(local_1e0._0_16_,stack0xfffffffffffffeb0);
        auVar254 = vpsrld_avx(stack0xfffffffffffffe30,3);
        auVar81 = vpsrld_avx(stack0xfffffffffffffe30,7);
        auVar80 = vpslld_avx(stack0xfffffffffffffe30,0x19);
        auVar78 = vpsrld_avx(stack0xfffffffffffffe30,0x12);
        auVar111 = vpslld_avx(stack0xfffffffffffffe30,0xe);
        auVar113 = vpsrld_avx(auVar82,10);
        auVar79 = vpsrld_avx(auVar82,0x11);
        auVar112 = vpslld_avx(auVar82,0xf);
        auVar283 = vpaddd_avx(auVar283,auVar254 ^ auVar81 ^ auVar80 ^ auVar78 ^ auVar111);
        auVar81 = vpsrld_avx(auVar82,0x13);
        auVar78 = vpslld_avx(auVar82,0xd);
        local_1e0._0_16_ = vpaddd_avx(auVar283,auVar113 ^ auVar79 ^ auVar112 ^ auVar81 ^ auVar78);
        auVar254 = vpsrld_avx(auVar337,6);
        auVar111 = vpslld_avx(auVar337,0x1a);
        auVar118 = vpaddd_avx(local_1e0._0_16_,auVar118);
        auVar78 = vpsrld_avx(auVar337,0xb);
        auVar112 = vpslld_avx(auVar337,0x15);
        auVar118 = vpaddd_avx(auVar118,pauVar38[0xc]);
        auVar79 = vpsrld_avx(auVar337,0x19);
        auVar113 = vpslld_avx(auVar337,7);
        auVar81 = vpandn_avx(auVar337,auVar338);
        auVar283 = vpand_avx(auVar337,auVar268);
        auVar362 = vpsrld_avx(auVar336,2);
        auVar80 = vpslld_avx(auVar336,0x1e);
        auVar118 = vpaddd_avx(auVar118,auVar254 ^ auVar111 ^ auVar78 ^ auVar112 ^ auVar79 ^ auVar113
                             );
        auVar78 = vpsrld_avx(auVar336,0xd);
        auVar79 = vpslld_avx(auVar336,0x13);
        auVar118 = vpaddd_avx(auVar118,auVar81 ^ auVar283);
        auVar283 = vpand_avx(auVar47 ^ auVar123,auVar123 ^ auVar336);
        auVar81 = vpsrld_avx(auVar336,0x16);
        auVar111 = vpslld_avx(auVar336,10);
        auVar117 = vpaddd_avx(auVar117,auVar118);
        auVar118 = vpaddd_avx(auVar123 ^ auVar283,auVar118);
        auVar118 = vpaddd_avx(auVar118,auVar362 ^ auVar80 ^ auVar78 ^ auVar79 ^ auVar81 ^ auVar111);
        auVar283 = vpaddd_avx(stack0xfffffffffffffe30,local_140._0_16_);
        auVar254 = vpsrld_avx(local_1c0._0_16_,3);
        auVar81 = vpsrld_avx(local_1c0._0_16_,7);
        auVar80 = vpslld_avx(local_1c0._0_16_,0x19);
        auVar78 = vpsrld_avx(local_1c0._0_16_,0x12);
        auVar111 = vpslld_avx(local_1c0._0_16_,0xe);
        auVar113 = vpsrld_avx(unique0x000f4780,10);
        auVar79 = vpsrld_avx(unique0x000f4780,0x11);
        auVar112 = vpslld_avx(unique0x000f4780,0xf);
        auVar283 = vpaddd_avx(auVar283,auVar254 ^ auVar81 ^ auVar80 ^ auVar78 ^ auVar111);
        auVar81 = vpsrld_avx(unique0x000f4780,0x13);
        auVar78 = vpslld_avx(unique0x000f4780,0xd);
        unique0x000f4780 = vpaddd_avx(auVar283,auVar113 ^ auVar79 ^ auVar112 ^ auVar81 ^ auVar78);
        auVar254 = vpsrld_avx(auVar117,6);
        auVar111 = vpslld_avx(auVar117,0x1a);
        auVar338 = vpaddd_avx(unique0x000f4780,auVar338);
        auVar78 = vpsrld_avx(auVar117,0xb);
        auVar112 = vpslld_avx(auVar117,0x15);
        auVar338 = vpaddd_avx(auVar338,pauVar38[0xe]);
        auVar79 = vpsrld_avx(auVar117,0x19);
        auVar113 = vpslld_avx(auVar117,7);
        auVar81 = vpandn_avx(auVar117,auVar268);
        auVar283 = vpand_avx(auVar117,auVar337);
        auVar362 = vpsrld_avx(auVar118,2);
        auVar80 = vpslld_avx(auVar118,0x1e);
        auVar338 = vpaddd_avx(auVar338,auVar254 ^ auVar111 ^ auVar78 ^ auVar112 ^ auVar79 ^ auVar113
                             );
        auVar78 = vpsrld_avx(auVar118,0xd);
        auVar79 = vpslld_avx(auVar118,0x13);
        auVar338 = vpaddd_avx(auVar338,auVar81 ^ auVar283);
        auVar283 = vpand_avx(auVar123 ^ auVar336,auVar336 ^ auVar118);
        auVar81 = vpsrld_avx(auVar118,0x16);
        auVar111 = vpslld_avx(auVar118,10);
        auVar47 = vpaddd_avx(auVar47,auVar338);
        auVar338 = vpaddd_avx(auVar336 ^ auVar283,auVar338);
        auVar338 = vpaddd_avx(auVar338,auVar362 ^ auVar80 ^ auVar78 ^ auVar79 ^ auVar81 ^ auVar111);
        auVar283 = vpaddd_avx(local_1c0._0_16_,stack0xfffffffffffffed0);
        auVar254 = vpsrld_avx(stack0xfffffffffffffe50,3);
        auVar81 = vpsrld_avx(stack0xfffffffffffffe50,7);
        auVar80 = vpslld_avx(stack0xfffffffffffffe50,0x19);
        auVar78 = vpsrld_avx(stack0xfffffffffffffe50,0x12);
        auVar111 = vpslld_avx(stack0xfffffffffffffe50,0xe);
        auVar113 = vpsrld_avx(local_1e0._0_16_,10);
        auVar79 = vpsrld_avx(local_1e0._0_16_,0x11);
        auVar112 = vpslld_avx(local_1e0._0_16_,0xf);
        auVar283 = vpaddd_avx(auVar283,auVar254 ^ auVar81 ^ auVar80 ^ auVar78 ^ auVar111);
        auVar81 = vpsrld_avx(local_1e0._0_16_,0x13);
        auVar78 = vpslld_avx(local_1e0._0_16_,0xd);
        local_1c0._0_16_ = vpaddd_avx(auVar283,auVar113 ^ auVar79 ^ auVar112 ^ auVar81 ^ auVar78);
        auVar254 = vpsrld_avx(auVar47,6);
        auVar111 = vpslld_avx(auVar47,0x1a);
        auVar268 = vpaddd_avx(local_1c0._0_16_,auVar268);
        auVar78 = vpsrld_avx(auVar47,0xb);
        auVar112 = vpslld_avx(auVar47,0x15);
        auVar268 = vpaddd_avx(auVar268,pauVar38[0x10]);
        auVar79 = vpsrld_avx(auVar47,0x19);
        auVar113 = vpslld_avx(auVar47,7);
        auVar81 = vpandn_avx(auVar47,auVar337);
        auVar283 = vpand_avx(auVar47,auVar117);
        auVar362 = vpsrld_avx(auVar338,2);
        auVar80 = vpslld_avx(auVar338,0x1e);
        auVar268 = vpaddd_avx(auVar268,auVar254 ^ auVar111 ^ auVar78 ^ auVar112 ^ auVar79 ^ auVar113
                             );
        auVar78 = vpsrld_avx(auVar338,0xd);
        auVar79 = vpslld_avx(auVar338,0x13);
        auVar268 = vpaddd_avx(auVar268,auVar81 ^ auVar283);
        auVar283 = vpand_avx(auVar336 ^ auVar118,auVar118 ^ auVar338);
        auVar81 = vpsrld_avx(auVar338,0x16);
        auVar111 = vpslld_avx(auVar338,10);
        auVar123 = vpaddd_avx(auVar123,auVar268);
        auVar268 = vpaddd_avx(auVar118 ^ auVar283,auVar268);
        auVar268 = vpaddd_avx(auVar268,auVar362 ^ auVar80 ^ auVar78 ^ auVar79 ^ auVar81 ^ auVar111);
        auVar283 = vpaddd_avx(stack0xfffffffffffffe50,local_120._0_16_);
        auVar254 = vpsrld_avx(local_1a0._0_16_,3);
        auVar81 = vpsrld_avx(local_1a0._0_16_,7);
        auVar80 = vpslld_avx(local_1a0._0_16_,0x19);
        auVar78 = vpsrld_avx(local_1a0._0_16_,0x12);
        auVar111 = vpslld_avx(local_1a0._0_16_,0xe);
        auVar113 = vpsrld_avx(unique0x000f4780,10);
        auVar79 = vpsrld_avx(unique0x000f4780,0x11);
        auVar112 = vpslld_avx(unique0x000f4780,0xf);
        auVar283 = vpaddd_avx(auVar283,auVar254 ^ auVar81 ^ auVar80 ^ auVar78 ^ auVar111);
        auVar81 = vpsrld_avx(unique0x000f4780,0x13);
        auVar78 = vpslld_avx(unique0x000f4780,0xd);
        unique0x000f4780 = vpaddd_avx(auVar283,auVar113 ^ auVar79 ^ auVar112 ^ auVar81 ^ auVar78);
        auVar254 = vpsrld_avx(auVar123,6);
        auVar111 = vpslld_avx(auVar123,0x1a);
        auVar337 = vpaddd_avx(unique0x000f4780,auVar337);
        auVar78 = vpsrld_avx(auVar123,0xb);
        auVar112 = vpslld_avx(auVar123,0x15);
        auVar337 = vpaddd_avx(auVar337,pauVar38[0x12]);
        auVar79 = vpsrld_avx(auVar123,0x19);
        auVar113 = vpslld_avx(auVar123,7);
        auVar81 = vpandn_avx(auVar123,auVar117);
        auVar283 = vpand_avx(auVar123,auVar47);
        auVar362 = vpsrld_avx(auVar268,2);
        auVar80 = vpslld_avx(auVar268,0x1e);
        auVar337 = vpaddd_avx(auVar337,auVar254 ^ auVar111 ^ auVar78 ^ auVar112 ^ auVar79 ^ auVar113
                             );
        auVar78 = vpsrld_avx(auVar268,0xd);
        auVar79 = vpslld_avx(auVar268,0x13);
        auVar337 = vpaddd_avx(auVar337,auVar81 ^ auVar283);
        auVar283 = vpand_avx(auVar118 ^ auVar338,auVar338 ^ auVar268);
        auVar81 = vpsrld_avx(auVar268,0x16);
        auVar111 = vpslld_avx(auVar268,10);
        auVar336 = vpaddd_avx(auVar336,auVar337);
        auVar337 = vpaddd_avx(auVar338 ^ auVar283,auVar337);
        auVar337 = vpaddd_avx(auVar337,auVar362 ^ auVar80 ^ auVar78 ^ auVar79 ^ auVar81 ^ auVar111);
        auVar283 = vpaddd_avx(local_1a0._0_16_,stack0xfffffffffffffef0);
        auVar254 = vpsrld_avx(stack0xfffffffffffffe70,3);
        auVar81 = vpsrld_avx(stack0xfffffffffffffe70,7);
        auVar80 = vpslld_avx(stack0xfffffffffffffe70,0x19);
        auVar78 = vpsrld_avx(stack0xfffffffffffffe70,0x12);
        auVar111 = vpslld_avx(stack0xfffffffffffffe70,0xe);
        auVar113 = vpsrld_avx(local_1c0._0_16_,10);
        auVar79 = vpsrld_avx(local_1c0._0_16_,0x11);
        auVar112 = vpslld_avx(local_1c0._0_16_,0xf);
        auVar283 = vpaddd_avx(auVar283,auVar254 ^ auVar81 ^ auVar80 ^ auVar78 ^ auVar111);
        auVar81 = vpsrld_avx(local_1c0._0_16_,0x13);
        auVar78 = vpslld_avx(local_1c0._0_16_,0xd);
        local_1a0._0_16_ = vpaddd_avx(auVar283,auVar113 ^ auVar79 ^ auVar112 ^ auVar81 ^ auVar78);
        auVar254 = vpsrld_avx(auVar336,6);
        auVar111 = vpslld_avx(auVar336,0x1a);
        auVar117 = vpaddd_avx(local_1a0._0_16_,auVar117);
        auVar78 = vpsrld_avx(auVar336,0xb);
        auVar112 = vpslld_avx(auVar336,0x15);
        auVar117 = vpaddd_avx(auVar117,pauVar38[0x14]);
        auVar79 = vpsrld_avx(auVar336,0x19);
        auVar113 = vpslld_avx(auVar336,7);
        auVar81 = vpandn_avx(auVar336,auVar47);
        auVar283 = vpand_avx(auVar336,auVar123);
        auVar362 = vpsrld_avx(auVar337,2);
        auVar80 = vpslld_avx(auVar337,0x1e);
        auVar117 = vpaddd_avx(auVar117,auVar254 ^ auVar111 ^ auVar78 ^ auVar112 ^ auVar79 ^ auVar113
                             );
        auVar78 = vpsrld_avx(auVar337,0xd);
        auVar79 = vpslld_avx(auVar337,0x13);
        auVar117 = vpaddd_avx(auVar117,auVar81 ^ auVar283);
        auVar283 = vpand_avx(auVar338 ^ auVar268,auVar268 ^ auVar337);
        auVar81 = vpsrld_avx(auVar337,0x16);
        auVar111 = vpslld_avx(auVar337,10);
        auVar118 = vpaddd_avx(auVar118,auVar117);
        auVar117 = vpaddd_avx(auVar268 ^ auVar283,auVar117);
        auVar117 = vpaddd_avx(auVar117,auVar362 ^ auVar80 ^ auVar78 ^ auVar79 ^ auVar81 ^ auVar111);
        auVar283 = vpaddd_avx(stack0xfffffffffffffe70,auVar82);
        auVar254 = vpsrld_avx(local_180._0_16_,3);
        auVar81 = vpsrld_avx(local_180._0_16_,7);
        auVar80 = vpslld_avx(local_180._0_16_,0x19);
        auVar78 = vpsrld_avx(local_180._0_16_,0x12);
        auVar111 = vpslld_avx(local_180._0_16_,0xe);
        auVar113 = vpsrld_avx(unique0x000f4780,10);
        auVar79 = vpsrld_avx(unique0x000f4780,0x11);
        auVar112 = vpslld_avx(unique0x000f4780,0xf);
        auVar283 = vpaddd_avx(auVar283,auVar254 ^ auVar81 ^ auVar80 ^ auVar78 ^ auVar111);
        auVar81 = vpsrld_avx(unique0x000f4780,0x13);
        auVar78 = vpslld_avx(unique0x000f4780,0xd);
        unique0x000f4780 = vpaddd_avx(auVar283,auVar113 ^ auVar79 ^ auVar112 ^ auVar81 ^ auVar78);
        auVar254 = vpsrld_avx(auVar118,6);
        auVar111 = vpslld_avx(auVar118,0x1a);
        auVar47 = vpaddd_avx(unique0x000f4780,auVar47);
        auVar78 = vpsrld_avx(auVar118,0xb);
        auVar112 = vpslld_avx(auVar118,0x15);
        auVar47 = vpaddd_avx(auVar47,pauVar38[0x16]);
        auVar79 = vpsrld_avx(auVar118,0x19);
        auVar113 = vpslld_avx(auVar118,7);
        auVar81 = vpandn_avx(auVar118,auVar123);
        auVar283 = vpand_avx(auVar118,auVar336);
        auVar362 = vpsrld_avx(auVar117,2);
        auVar80 = vpslld_avx(auVar117,0x1e);
        auVar47 = vpaddd_avx(auVar47,auVar254 ^ auVar111 ^ auVar78 ^ auVar112 ^ auVar79 ^ auVar113);
        auVar78 = vpsrld_avx(auVar117,0xd);
        auVar79 = vpslld_avx(auVar117,0x13);
        auVar47 = vpaddd_avx(auVar47,auVar81 ^ auVar283);
        auVar283 = vpand_avx(auVar268 ^ auVar337,auVar337 ^ auVar117);
        auVar81 = vpsrld_avx(auVar117,0x16);
        auVar111 = vpslld_avx(auVar117,10);
        auVar338 = vpaddd_avx(auVar338,auVar47);
        auVar47 = vpaddd_avx(auVar337 ^ auVar283,auVar47);
        auVar47 = vpaddd_avx(auVar47,auVar362 ^ auVar80 ^ auVar78 ^ auVar79 ^ auVar81 ^ auVar111);
        auVar283 = vpaddd_avx(local_180._0_16_,unique0x000f4780);
        auVar254 = vpsrld_avx(stack0xfffffffffffffe90,3);
        auVar81 = vpsrld_avx(stack0xfffffffffffffe90,7);
        auVar80 = vpslld_avx(stack0xfffffffffffffe90,0x19);
        auVar78 = vpsrld_avx(stack0xfffffffffffffe90,0x12);
        auVar111 = vpslld_avx(stack0xfffffffffffffe90,0xe);
        auVar113 = vpsrld_avx(local_1a0._0_16_,10);
        auVar79 = vpsrld_avx(local_1a0._0_16_,0x11);
        auVar112 = vpslld_avx(local_1a0._0_16_,0xf);
        auVar283 = vpaddd_avx(auVar283,auVar254 ^ auVar81 ^ auVar80 ^ auVar78 ^ auVar111);
        auVar81 = vpsrld_avx(local_1a0._0_16_,0x13);
        auVar78 = vpslld_avx(local_1a0._0_16_,0xd);
        local_180._0_16_ = vpaddd_avx(auVar283,auVar113 ^ auVar79 ^ auVar112 ^ auVar81 ^ auVar78);
        auVar254 = vpsrld_avx(auVar338,6);
        auVar111 = vpslld_avx(auVar338,0x1a);
        auVar123 = vpaddd_avx(local_180._0_16_,auVar123);
        auVar78 = vpsrld_avx(auVar338,0xb);
        auVar112 = vpslld_avx(auVar338,0x15);
        auVar123 = vpaddd_avx(auVar123,pauVar38[0x18]);
        auVar79 = vpsrld_avx(auVar338,0x19);
        auVar113 = vpslld_avx(auVar338,7);
        auVar81 = vpandn_avx(auVar338,auVar336);
        auVar283 = vpand_avx(auVar338,auVar118);
        auVar362 = vpsrld_avx(auVar47,2);
        auVar80 = vpslld_avx(auVar47,0x1e);
        auVar123 = vpaddd_avx(auVar123,auVar254 ^ auVar111 ^ auVar78 ^ auVar112 ^ auVar79 ^ auVar113
                             );
        auVar78 = vpsrld_avx(auVar47,0xd);
        auVar79 = vpslld_avx(auVar47,0x13);
        auVar123 = vpaddd_avx(auVar123,auVar81 ^ auVar283);
        auVar283 = vpand_avx(auVar337 ^ auVar117,auVar117 ^ auVar47);
        auVar81 = vpsrld_avx(auVar47,0x16);
        auVar111 = vpslld_avx(auVar47,10);
        auVar268 = vpaddd_avx(auVar268,auVar123);
        auVar123 = vpaddd_avx(auVar117 ^ auVar283,auVar123);
        auVar123 = vpaddd_avx(auVar123,auVar362 ^ auVar80 ^ auVar78 ^ auVar79 ^ auVar81 ^ auVar111);
        auVar283 = vpaddd_avx(stack0xfffffffffffffe90,local_1e0._0_16_);
        auVar254 = vpsrld_avx(local_160._0_16_,3);
        auVar81 = vpsrld_avx(local_160._0_16_,7);
        auVar80 = vpslld_avx(local_160._0_16_,0x19);
        auVar78 = vpsrld_avx(local_160._0_16_,0x12);
        auVar111 = vpslld_avx(local_160._0_16_,0xe);
        auVar113 = vpsrld_avx(unique0x000f4780,10);
        auVar79 = vpsrld_avx(unique0x000f4780,0x11);
        auVar112 = vpslld_avx(unique0x000f4780,0xf);
        auVar283 = vpaddd_avx(auVar283,auVar254 ^ auVar81 ^ auVar80 ^ auVar78 ^ auVar111);
        auVar81 = vpsrld_avx(unique0x000f4780,0x13);
        auVar78 = vpslld_avx(unique0x000f4780,0xd);
        unique0x000f4780 = vpaddd_avx(auVar283,auVar113 ^ auVar79 ^ auVar112 ^ auVar81 ^ auVar78);
        auVar254 = vpsrld_avx(auVar268,6);
        auVar111 = vpslld_avx(auVar268,0x1a);
        auVar336 = vpaddd_avx(unique0x000f4780,auVar336);
        auVar78 = vpsrld_avx(auVar268,0xb);
        auVar112 = vpslld_avx(auVar268,0x15);
        auVar336 = vpaddd_avx(auVar336,pauVar38[0x1a]);
        auVar79 = vpsrld_avx(auVar268,0x19);
        auVar113 = vpslld_avx(auVar268,7);
        auVar81 = vpandn_avx(auVar268,auVar118);
        auVar283 = vpand_avx(auVar268,auVar338);
        auVar362 = vpsrld_avx(auVar123,2);
        auVar80 = vpslld_avx(auVar123,0x1e);
        auVar336 = vpaddd_avx(auVar336,auVar254 ^ auVar111 ^ auVar78 ^ auVar112 ^ auVar79 ^ auVar113
                             );
        auVar78 = vpsrld_avx(auVar123,0xd);
        auVar79 = vpslld_avx(auVar123,0x13);
        auVar336 = vpaddd_avx(auVar336,auVar81 ^ auVar283);
        auVar283 = vpand_avx(auVar117 ^ auVar47,auVar47 ^ auVar123);
        auVar81 = vpsrld_avx(auVar123,0x16);
        auVar111 = vpslld_avx(auVar123,10);
        auVar337 = vpaddd_avx(auVar337,auVar336);
        auVar336 = vpaddd_avx(auVar47 ^ auVar283,auVar336);
        auVar336 = vpaddd_avx(auVar336,auVar362 ^ auVar80 ^ auVar78 ^ auVar79 ^ auVar81 ^ auVar111);
        auVar283 = vpaddd_avx(local_160._0_16_,unique0x000f4780);
        auVar254 = vpsrld_avx(stack0xfffffffffffffeb0,3);
        auVar81 = vpsrld_avx(stack0xfffffffffffffeb0,7);
        auVar80 = vpslld_avx(stack0xfffffffffffffeb0,0x19);
        auVar78 = vpsrld_avx(stack0xfffffffffffffeb0,0x12);
        auVar111 = vpslld_avx(stack0xfffffffffffffeb0,0xe);
        auVar113 = vpsrld_avx(local_180._0_16_,10);
        auVar79 = vpsrld_avx(local_180._0_16_,0x11);
        auVar112 = vpslld_avx(local_180._0_16_,0xf);
        auVar283 = vpaddd_avx(auVar283,auVar254 ^ auVar81 ^ auVar80 ^ auVar78 ^ auVar111);
        auVar81 = vpsrld_avx(local_180._0_16_,0x13);
        auVar78 = vpslld_avx(local_180._0_16_,0xd);
        local_160._0_16_ = vpaddd_avx(auVar283,auVar113 ^ auVar79 ^ auVar112 ^ auVar81 ^ auVar78);
        auVar254 = vpsrld_avx(auVar337,6);
        auVar111 = vpslld_avx(auVar337,0x1a);
        auVar118 = vpaddd_avx(local_160._0_16_,auVar118);
        auVar78 = vpsrld_avx(auVar337,0xb);
        auVar112 = vpslld_avx(auVar337,0x15);
        auVar118 = vpaddd_avx(auVar118,pauVar38[0x1c]);
        auVar79 = vpsrld_avx(auVar337,0x19);
        auVar113 = vpslld_avx(auVar337,7);
        auVar81 = vpandn_avx(auVar337,auVar338);
        auVar283 = vpand_avx(auVar337,auVar268);
        auVar362 = vpsrld_avx(auVar336,2);
        auVar80 = vpslld_avx(auVar336,0x1e);
        auVar118 = vpaddd_avx(auVar118,auVar254 ^ auVar111 ^ auVar78 ^ auVar112 ^ auVar79 ^ auVar113
                             );
        auVar78 = vpsrld_avx(auVar336,0xd);
        auVar79 = vpslld_avx(auVar336,0x13);
        auVar118 = vpaddd_avx(auVar118,auVar81 ^ auVar283);
        auVar283 = vpand_avx(auVar47 ^ auVar123,auVar123 ^ auVar336);
        auVar81 = vpsrld_avx(auVar336,0x16);
        auVar111 = vpslld_avx(auVar336,10);
        auVar117 = vpaddd_avx(auVar117,auVar118);
        auVar118 = vpaddd_avx(auVar123 ^ auVar283,auVar118);
        auVar118 = vpaddd_avx(auVar118,auVar362 ^ auVar80 ^ auVar78 ^ auVar79 ^ auVar81 ^ auVar111);
        auVar283 = vpaddd_avx(stack0xfffffffffffffeb0,local_1c0._0_16_);
        auVar254 = vpsrld_avx(local_140._0_16_,3);
        auVar81 = vpsrld_avx(local_140._0_16_,7);
        auVar80 = vpslld_avx(local_140._0_16_,0x19);
        auVar78 = vpsrld_avx(local_140._0_16_,0x12);
        auVar111 = vpslld_avx(local_140._0_16_,0xe);
        auVar113 = vpsrld_avx(unique0x000f4780,10);
        auVar79 = vpsrld_avx(unique0x000f4780,0x11);
        auVar112 = vpslld_avx(unique0x000f4780,0xf);
        auVar283 = vpaddd_avx(auVar283,auVar254 ^ auVar81 ^ auVar80 ^ auVar78 ^ auVar111);
        auVar81 = vpsrld_avx(unique0x000f4780,0x13);
        auVar78 = vpslld_avx(unique0x000f4780,0xd);
        unique0x000f4780 = vpaddd_avx(auVar283,auVar113 ^ auVar79 ^ auVar112 ^ auVar81 ^ auVar78);
        auVar254 = vpsrld_avx(auVar117,6);
        auVar111 = vpslld_avx(auVar117,0x1a);
        auVar338 = vpaddd_avx(unique0x000f4780,auVar338);
        auVar78 = vpsrld_avx(auVar117,0xb);
        auVar112 = vpslld_avx(auVar117,0x15);
        auVar338 = vpaddd_avx(auVar338,pauVar38[0x1e]);
        auVar79 = vpsrld_avx(auVar117,0x19);
        auVar113 = vpslld_avx(auVar117,7);
        auVar81 = vpandn_avx(auVar117,auVar268);
        auVar283 = vpand_avx(auVar117,auVar337);
        auVar362 = vpsrld_avx(auVar118,2);
        auVar80 = vpslld_avx(auVar118,0x1e);
        auVar338 = vpaddd_avx(auVar338,auVar254 ^ auVar111 ^ auVar78 ^ auVar112 ^ auVar79 ^ auVar113
                             );
        auVar78 = vpsrld_avx(auVar118,0xd);
        auVar79 = vpslld_avx(auVar118,0x13);
        auVar338 = vpaddd_avx(auVar338,auVar81 ^ auVar283);
        auVar283 = vpand_avx(auVar123 ^ auVar336,auVar336 ^ auVar118);
        auVar81 = vpsrld_avx(auVar118,0x16);
        auVar111 = vpslld_avx(auVar118,10);
        auVar47 = vpaddd_avx(auVar47,auVar338);
        auVar338 = vpaddd_avx(auVar336 ^ auVar283,auVar338);
        auVar338 = vpaddd_avx(auVar338,auVar362 ^ auVar80 ^ auVar78 ^ auVar79 ^ auVar81 ^ auVar111);
        auVar283 = vpaddd_avx(local_140._0_16_,unique0x000f4780);
        auVar254 = vpsrld_avx(stack0xfffffffffffffed0,3);
        auVar81 = vpsrld_avx(stack0xfffffffffffffed0,7);
        auVar80 = vpslld_avx(stack0xfffffffffffffed0,0x19);
        auVar78 = vpsrld_avx(stack0xfffffffffffffed0,0x12);
        auVar111 = vpslld_avx(stack0xfffffffffffffed0,0xe);
        auVar113 = vpsrld_avx(local_160._0_16_,10);
        auVar79 = vpsrld_avx(local_160._0_16_,0x11);
        auVar112 = vpslld_avx(local_160._0_16_,0xf);
        auVar283 = vpaddd_avx(auVar283,auVar254 ^ auVar81 ^ auVar80 ^ auVar78 ^ auVar111);
        auVar81 = vpsrld_avx(local_160._0_16_,0x13);
        auVar78 = vpslld_avx(local_160._0_16_,0xd);
        local_140._0_16_ = vpaddd_avx(auVar283,auVar113 ^ auVar79 ^ auVar112 ^ auVar81 ^ auVar78);
        auVar254 = vpsrld_avx(auVar47,6);
        auVar111 = vpslld_avx(auVar47,0x1a);
        auVar268 = vpaddd_avx(local_140._0_16_,auVar268);
        auVar78 = vpsrld_avx(auVar47,0xb);
        auVar112 = vpslld_avx(auVar47,0x15);
        auVar268 = vpaddd_avx(auVar268,pauVar38[0x20]);
        auVar79 = vpsrld_avx(auVar47,0x19);
        auVar113 = vpslld_avx(auVar47,7);
        auVar81 = vpandn_avx(auVar47,auVar337);
        auVar283 = vpand_avx(auVar47,auVar117);
        auVar362 = vpsrld_avx(auVar338,2);
        auVar80 = vpslld_avx(auVar338,0x1e);
        auVar268 = vpaddd_avx(auVar268,auVar254 ^ auVar111 ^ auVar78 ^ auVar112 ^ auVar79 ^ auVar113
                             );
        auVar78 = vpsrld_avx(auVar338,0xd);
        auVar111 = vpslld_avx(auVar338,0x13);
        auVar283 = vpaddd_avx(auVar268,auVar81 ^ auVar283);
        auVar81 = vpand_avx(auVar336 ^ auVar118,auVar118 ^ auVar338);
        auVar79 = vpsrld_avx(auVar338,0x16);
        auVar112 = vpslld_avx(auVar338,10);
        auVar268 = vpaddd_avx(auVar123,auVar283);
        auVar123 = vpaddd_avx(auVar118 ^ auVar81,auVar283);
        auVar283 = vpaddd_avx(auVar123,auVar362 ^ auVar80 ^ auVar78 ^ auVar111 ^ auVar79 ^ auVar112)
        ;
        auVar123 = vpaddd_avx(stack0xfffffffffffffed0,local_1a0._0_16_);
        auVar254 = vpsrld_avx(local_120._0_16_,3);
        auVar81 = vpsrld_avx(local_120._0_16_,7);
        auVar80 = vpslld_avx(local_120._0_16_,0x19);
        auVar78 = vpsrld_avx(local_120._0_16_,0x12);
        auVar111 = vpslld_avx(local_120._0_16_,0xe);
        auVar113 = vpsrld_avx(unique0x000f4780,10);
        auVar79 = vpsrld_avx(unique0x000f4780,0x11);
        auVar112 = vpslld_avx(unique0x000f4780,0xf);
        auVar123 = vpaddd_avx(auVar123,auVar254 ^ auVar81 ^ auVar80 ^ auVar78 ^ auVar111);
        auVar81 = vpsrld_avx(unique0x000f4780,0x13);
        auVar78 = vpslld_avx(unique0x000f4780,0xd);
        unique0x000f4780 = vpaddd_avx(auVar123,auVar113 ^ auVar79 ^ auVar112 ^ auVar81 ^ auVar78);
        auVar254 = vpsrld_avx(auVar268,6);
        auVar111 = vpslld_avx(auVar268,0x1a);
        auVar337 = vpaddd_avx(unique0x000f4780,auVar337);
        auVar78 = vpsrld_avx(auVar268,0xb);
        auVar112 = vpslld_avx(auVar268,0x15);
        auVar337 = vpaddd_avx(auVar337,pauVar38[0x22]);
        auVar79 = vpsrld_avx(auVar268,0x19);
        auVar113 = vpslld_avx(auVar268,7);
        auVar81 = vpandn_avx(auVar268,auVar117);
        auVar123 = vpand_avx(auVar268,auVar47);
        auVar362 = vpsrld_avx(auVar283,2);
        auVar80 = vpslld_avx(auVar283,0x1e);
        auVar337 = vpaddd_avx(auVar337,auVar254 ^ auVar111 ^ auVar78 ^ auVar112 ^ auVar79 ^ auVar113
                             );
        auVar78 = vpsrld_avx(auVar283,0xd);
        auVar79 = vpslld_avx(auVar283,0x13);
        auVar337 = vpaddd_avx(auVar337,auVar81 ^ auVar123);
        auVar123 = vpand_avx(auVar118 ^ auVar338,auVar338 ^ auVar283);
        auVar81 = vpsrld_avx(auVar283,0x16);
        auVar111 = vpslld_avx(auVar283,10);
        auVar336 = vpaddd_avx(auVar336,auVar337);
        auVar337 = vpaddd_avx(auVar338 ^ auVar123,auVar337);
        auVar337 = vpaddd_avx(auVar337,auVar362 ^ auVar80 ^ auVar78 ^ auVar79 ^ auVar81 ^ auVar111);
        auVar123 = vpaddd_avx(local_120._0_16_,unique0x000f4780);
        auVar254 = vpsrld_avx(stack0xfffffffffffffef0,3);
        auVar81 = vpsrld_avx(stack0xfffffffffffffef0,7);
        auVar80 = vpslld_avx(stack0xfffffffffffffef0,0x19);
        auVar78 = vpsrld_avx(stack0xfffffffffffffef0,0x12);
        auVar111 = vpslld_avx(stack0xfffffffffffffef0,0xe);
        auVar113 = vpsrld_avx(local_140._0_16_,10);
        auVar79 = vpsrld_avx(local_140._0_16_,0x11);
        auVar112 = vpslld_avx(local_140._0_16_,0xf);
        auVar123 = vpaddd_avx(auVar123,auVar254 ^ auVar81 ^ auVar80 ^ auVar78 ^ auVar111);
        auVar81 = vpsrld_avx(local_140._0_16_,0x13);
        auVar78 = vpslld_avx(local_140._0_16_,0xd);
        local_120._0_16_ = vpaddd_avx(auVar123,auVar113 ^ auVar79 ^ auVar112 ^ auVar81 ^ auVar78);
        auVar254 = vpsrld_avx(auVar336,6);
        auVar111 = vpslld_avx(auVar336,0x1a);
        auVar117 = vpaddd_avx(local_120._0_16_,auVar117);
        auVar78 = vpsrld_avx(auVar336,0xb);
        auVar112 = vpslld_avx(auVar336,0x15);
        auVar117 = vpaddd_avx(auVar117,pauVar38[0x24]);
        auVar79 = vpsrld_avx(auVar336,0x19);
        auVar113 = vpslld_avx(auVar336,7);
        auVar81 = vpandn_avx(auVar336,auVar47);
        auVar123 = vpand_avx(auVar336,auVar268);
        auVar362 = vpsrld_avx(auVar337,2);
        auVar80 = vpslld_avx(auVar337,0x1e);
        auVar117 = vpaddd_avx(auVar117,auVar254 ^ auVar111 ^ auVar78 ^ auVar112 ^ auVar79 ^ auVar113
                             );
        auVar78 = vpsrld_avx(auVar337,0xd);
        auVar79 = vpslld_avx(auVar337,0x13);
        auVar117 = vpaddd_avx(auVar117,auVar81 ^ auVar123);
        auVar123 = vpand_avx(auVar338 ^ auVar283,auVar283 ^ auVar337);
        auVar81 = vpsrld_avx(auVar337,0x16);
        auVar111 = vpslld_avx(auVar337,10);
        auVar118 = vpaddd_avx(auVar118,auVar117);
        auVar117 = vpaddd_avx(auVar283 ^ auVar123,auVar117);
        auVar117 = vpaddd_avx(auVar117,auVar362 ^ auVar80 ^ auVar78 ^ auVar79 ^ auVar81 ^ auVar111);
        auVar123 = vpaddd_avx(stack0xfffffffffffffef0,local_180._0_16_);
        auVar254 = vpsrld_avx(auVar82,3);
        auVar81 = vpsrld_avx(auVar82,7);
        auVar80 = vpslld_avx(auVar82,0x19);
        auVar78 = vpsrld_avx(auVar82,0x12);
        auVar111 = vpslld_avx(auVar82,0xe);
        auVar113 = vpsrld_avx(unique0x000f4780,10);
        auVar79 = vpsrld_avx(unique0x000f4780,0x11);
        auVar112 = vpslld_avx(unique0x000f4780,0xf);
        auVar123 = vpaddd_avx(auVar123,auVar254 ^ auVar81 ^ auVar80 ^ auVar78 ^ auVar111);
        auVar81 = vpsrld_avx(unique0x000f4780,0x13);
        auVar78 = vpslld_avx(unique0x000f4780,0xd);
        unique0x000f4780 = vpaddd_avx(auVar123,auVar113 ^ auVar79 ^ auVar112 ^ auVar81 ^ auVar78);
        auVar362 = vpsrld_avx(auVar118,6);
        auVar112 = vpslld_avx(auVar118,0x1a);
        auVar47 = vpaddd_avx(unique0x000f4780,auVar47);
        auVar79 = vpsrld_avx(auVar118,0xb);
        auVar113 = vpslld_avx(auVar118,0x15);
        auVar47 = vpaddd_avx(auVar47,pauVar38[0x26]);
        auVar80 = vpsrld_avx(auVar118,0x19);
        auVar254 = vpslld_avx(auVar118,7);
        auVar81 = vpandn_avx(auVar118,auVar268);
        auVar123 = vpand_avx(auVar118,auVar336);
        auVar272 = vpsrld_avx(auVar117,2);
        auVar111 = vpslld_avx(auVar117,0x1e);
        auVar78 = auVar337 ^ auVar117;
        auVar47 = vpaddd_avx(auVar47,auVar362 ^ auVar112 ^ auVar79 ^ auVar113 ^ auVar80 ^ auVar254);
        auVar79 = vpsrld_avx(auVar117,0xd);
        auVar80 = vpslld_avx(auVar117,0x13);
        auVar47 = vpaddd_avx(auVar47,auVar81 ^ auVar123);
        auVar123 = vpand_avx(auVar283 ^ auVar337,auVar78);
        auVar81 = vpsrld_avx(auVar117,0x16);
        auVar112 = vpslld_avx(auVar117,10);
        auVar338 = vpaddd_avx(auVar338,auVar47);
        auVar47 = vpaddd_avx(auVar337 ^ auVar123,auVar47);
        auVar47 = vpaddd_avx(auVar47,auVar272 ^ auVar111 ^ auVar79 ^ auVar80 ^ auVar81 ^ auVar112);
        iVar122 = iVar122 + -1;
        pauVar38 = pauVar38 + 0x20;
      } while (iVar122 != 0);
      if ((int)local_100._0_4_ < 2) {
        puVar37 = (uint *)&DAT_00107680;
      }
      if ((int)local_100._4_4_ < 2) {
        puVar42 = (uint *)&DAT_00107680;
      }
      if ((int)local_100._8_4_ < 2) {
        puVar40 = (undefined4 *)&DAT_00107680;
      }
      if ((int)local_100._12_4_ < 2) {
        puVar44 = (undefined4 *)&DAT_00107680;
      }
      auVar81 = vpcmpgtd_avx(local_100,(undefined1  [16])0x0);
      auVar82 = vpaddd_avx(local_100,auVar81);
      auVar47 = vpand_avx(auVar47,auVar81);
      auVar117 = vpand_avx(auVar117,auVar81);
      auVar337 = vpand_avx(auVar337,auVar81);
      auVar123 = vpand_avx(auVar283,auVar81);
      auVar47 = vpaddd_avx(auVar47,*(undefined1 (*) [16])param_1[-4]);
      auVar338 = vpand_avx(auVar338,auVar81);
      auVar117 = vpaddd_avx(auVar117,*(undefined1 (*) [16])param_1[-3]);
      auVar118 = vpand_avx(auVar118,auVar81);
      auVar337 = vpaddd_avx(auVar337,*(undefined1 (*) [16])param_1[-2]);
      auVar283 = vpand_avx(auVar336,auVar81);
      auVar336 = vpaddd_avx(auVar123,*(undefined1 (*) [16])param_1[-1]);
      auVar268 = vpand_avx(auVar268,auVar81);
      auVar338 = vpaddd_avx(auVar338,*(undefined1 (*) [16])*param_1);
      auVar118 = vpaddd_avx(auVar118,*(undefined1 (*) [16])param_1[1]);
      *(undefined1 (*) [16])param_1[-4] = auVar47;
      auVar123 = vpaddd_avx(auVar283,*(undefined1 (*) [16])param_1[2]);
      *(undefined1 (*) [16])param_1[-3] = auVar117;
      auVar268 = vpaddd_avx(auVar268,*(undefined1 (*) [16])param_1[3]);
      *(undefined1 (*) [16])param_1[-2] = auVar337;
      *(undefined1 (*) [16])param_1[-1] = auVar336;
      *(undefined1 (*) [16])*param_1 = auVar338;
      *(undefined1 (*) [16])param_1[1] = auVar118;
      *(undefined1 (*) [16])param_1[2] = auVar123;
      *(undefined1 (*) [16])param_1[3] = auVar268;
      local_100 = auVar82;
      auVar9 = _local_100;
      iVar34 = iVar34 + -1;
    } while (iVar34 != 0);
    uStack_e8 = auVar8._24_4_;
    param_1 = (undefined1 (*) [32])(*param_1 + 0x10);
    param_2 = param_2 + 8;
    param_3 = uStack_e8 - 1;
    _local_100 = auVar9;
  } while (param_3 != 0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sha256_multi_block_shaext(long param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  undefined1 (*pauVar3) [16];
  undefined1 (*pauVar4) [16];
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
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined8 uVar88;
  undefined1 auVar89 [16];
  undefined8 uVar90;
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auStack_200 [64];
  undefined1 local_1c0 [16];
  undefined1 local_1b0 [16];
  undefined1 local_1a0 [16];
  undefined1 local_190 [16];
  int local_100;
  int iStack_fc;
  
  param_3 = param_3 << 1;
  piVar2 = (int *)(param_1 + 0x80);
  do {
    pauVar3 = (undefined1 (*) [16])*param_2;
    local_100 = *(int *)(param_2 + 1);
    iVar1 = local_100;
    if (local_100 < 1) {
      pauVar3 = (undefined1 (*) [16])auStack_200;
      iVar1 = 0;
    }
    iStack_fc = *(int *)(param_2 + 3);
    if (iVar1 < iStack_fc) {
      iVar1 = iStack_fc;
    }
    pauVar4 = (undefined1 (*) [16])param_2[2];
    if (iStack_fc < 1) {
      pauVar4 = (undefined1 (*) [16])auStack_200;
    }
    if (iVar1 == 0) {
      return;
    }
    local_1c0._4_4_ = (int)*(undefined8 *)piVar2;
    local_1c0._0_4_ = (int)*(undefined8 *)(piVar2 + 8);
    local_1c0._8_4_ = (int)*(undefined8 *)(piVar2 + -0x18);
    local_1c0._12_4_ = (int)*(undefined8 *)(piVar2 + -0x20);
    local_1b0._4_4_ = (int)*(undefined8 *)(piVar2 + 0x10);
    local_1b0._0_4_ = (int)*(undefined8 *)(piVar2 + 0x18);
    local_1b0._8_4_ = (int)*(undefined8 *)(piVar2 + -8);
    local_1b0._12_4_ = (int)*(undefined8 *)(piVar2 + -0x10);
    local_1a0._4_4_ = (int)((ulong)*(undefined8 *)piVar2 >> 0x20);
    local_1a0._0_4_ = (int)((ulong)*(undefined8 *)(piVar2 + 8) >> 0x20);
    local_1a0._8_4_ = (int)((ulong)*(undefined8 *)(piVar2 + -0x18) >> 0x20);
    local_1a0._12_4_ = (int)((ulong)*(undefined8 *)(piVar2 + -0x20) >> 0x20);
    local_190._4_4_ = (int)((ulong)*(undefined8 *)(piVar2 + 0x10) >> 0x20);
    local_190._0_4_ = (int)((ulong)*(undefined8 *)(piVar2 + 0x18) >> 0x20);
    local_190._8_4_ = (int)((ulong)*(undefined8 *)(piVar2 + -8) >> 0x20);
    local_190._12_4_ = (int)((ulong)*(undefined8 *)(piVar2 + -0x10) >> 0x20);
    do {
      auVar54 = pshufb(*pauVar3,_DAT_00107e10);
      auVar71 = pshufb(*pauVar4,_DAT_00107e10);
      auVar59 = pshufb(pauVar3[1],_DAT_00107e10);
      auVar55._0_4_ = _K256_shaext + auVar54._0_4_;
      auVar55._4_4_ = _UNK_00107e24 + auVar54._4_4_;
      auVar55._8_4_ = _UNK_00107e28 + auVar54._8_4_;
      auVar55._12_4_ = _UNK_00107e2c + auVar54._12_4_;
      auVar75 = pshufb(pauVar4[1],_DAT_00107e10);
      auVar38._0_4_ = _K256_shaext + auVar71._0_4_;
      auVar38._4_4_ = _UNK_00107e24 + auVar71._4_4_;
      auVar38._8_4_ = _UNK_00107e28 + auVar71._8_4_;
      auVar38._12_4_ = _UNK_00107e2c + auVar71._12_4_;
      auVar91 = sha256rnds2_sha(local_1b0,local_1c0,auVar55);
      auVar94 = sha256rnds2_sha(local_190,local_1a0,auVar38);
      auVar89._4_4_ = auVar55._12_4_;
      auVar89._0_4_ = auVar55._8_4_;
      auVar89._8_4_ = auVar55._0_4_;
      auVar89._12_4_ = auVar55._0_4_;
      auVar89 = sha256rnds2_sha(local_1c0,auVar91,auVar89);
      auVar92._4_4_ = auVar38._12_4_;
      auVar92._0_4_ = auVar38._8_4_;
      auVar92._8_4_ = auVar38._0_4_;
      auVar92._12_4_ = auVar38._0_4_;
      auVar23._0_4_ = _DAT_00107e30 + auVar59._0_4_;
      auVar23._4_4_ = _UNK_00107e34 + auVar59._4_4_;
      auVar23._8_4_ = _UNK_00107e38 + auVar59._8_4_;
      auVar23._12_4_ = _UNK_00107e3c + auVar59._12_4_;
      auVar63 = pshufb(pauVar3[2],_DAT_00107e10);
      auVar93 = sha256rnds2_sha(local_1a0,auVar94,auVar92);
      auVar39._0_4_ = _DAT_00107e30 + auVar75._0_4_;
      auVar39._4_4_ = _UNK_00107e34 + auVar75._4_4_;
      auVar39._8_4_ = _UNK_00107e38 + auVar75._8_4_;
      auVar39._12_4_ = _UNK_00107e3c + auVar75._12_4_;
      auVar92 = sha256rnds2_sha(auVar91,auVar89,auVar23);
      auVar67 = pshufb(pauVar3[3],_DAT_00107e10);
      auVar80 = pshufb(pauVar4[2],_DAT_00107e10);
      auVar95 = sha256rnds2_sha(auVar94,auVar93,auVar39);
      auVar91._4_4_ = auVar23._12_4_;
      auVar91._0_4_ = auVar23._8_4_;
      auVar91._8_4_ = auVar23._0_4_;
      auVar91._12_4_ = auVar23._0_4_;
      auVar94 = pshufb(pauVar4[3],_DAT_00107e10);
      auVar55 = sha256msg1_sha(auVar54,auVar59);
      auVar91 = sha256rnds2_sha(auVar89,auVar92,auVar91);
      auVar54._4_4_ = auVar39._12_4_;
      auVar54._0_4_ = auVar39._8_4_;
      auVar54._8_4_ = auVar39._0_4_;
      auVar54._12_4_ = auVar39._0_4_;
      auVar24._0_4_ = _DAT_00107e40 + auVar63._0_4_;
      auVar24._4_4_ = _UNK_00107e44 + auVar63._4_4_;
      auVar24._8_4_ = _UNK_00107e48 + auVar63._8_4_;
      auVar24._12_4_ = _UNK_00107e4c + auVar63._12_4_;
      auVar93 = sha256rnds2_sha(auVar93,auVar95,auVar54);
      auVar40._0_4_ = _DAT_00107e40 + auVar80._0_4_;
      auVar40._4_4_ = _UNK_00107e44 + auVar80._4_4_;
      auVar40._8_4_ = _UNK_00107e48 + auVar80._8_4_;
      auVar40._12_4_ = _UNK_00107e4c + auVar80._12_4_;
      auVar54 = sha256rnds2_sha(auVar92,auVar91,auVar24);
      auVar92 = sha256msg1_sha(auVar71,auVar75);
      auVar95 = sha256rnds2_sha(auVar95,auVar93,auVar40);
      auVar71._4_4_ = auVar24._12_4_;
      auVar71._0_4_ = auVar24._8_4_;
      auVar71._8_4_ = auVar24._0_4_;
      auVar71._12_4_ = auVar24._0_4_;
      auVar56._0_4_ = auVar55._0_4_ + auVar63._4_4_;
      auVar56._4_4_ = auVar55._4_4_ + auVar63._8_4_;
      auVar56._8_4_ = auVar55._8_4_ + auVar63._12_4_;
      auVar56._12_4_ = auVar55._12_4_ + auVar67._0_4_;
      auVar89 = sha256msg1_sha(auVar59,auVar63);
      auVar71 = sha256rnds2_sha(auVar91,auVar54,auVar71);
      auVar59._4_4_ = auVar40._12_4_;
      auVar59._0_4_ = auVar40._8_4_;
      auVar59._8_4_ = auVar40._0_4_;
      auVar59._12_4_ = auVar40._0_4_;
      auVar25._0_4_ = _DAT_00107e50 + auVar67._0_4_;
      auVar25._4_4_ = _UNK_00107e54 + auVar67._4_4_;
      auVar25._8_4_ = _UNK_00107e58 + auVar67._8_4_;
      auVar25._12_4_ = _UNK_00107e5c + auVar67._12_4_;
      auVar59 = sha256rnds2_sha(auVar93,auVar95,auVar59);
      auVar91 = sha256msg1_sha(auVar75,auVar80);
      auVar72._0_4_ = auVar92._0_4_ + auVar80._4_4_;
      auVar72._4_4_ = auVar92._4_4_ + auVar80._8_4_;
      auVar72._8_4_ = auVar92._8_4_ + auVar80._12_4_;
      auVar72._12_4_ = auVar92._12_4_ + auVar94._0_4_;
      auVar41._0_4_ = _DAT_00107e50 + auVar94._0_4_;
      auVar41._4_4_ = _UNK_00107e54 + auVar94._4_4_;
      auVar41._8_4_ = _UNK_00107e58 + auVar94._8_4_;
      auVar41._12_4_ = _UNK_00107e5c + auVar94._12_4_;
      auVar55 = sha256msg2_sha(auVar56,auVar67);
      auVar93 = sha256rnds2_sha(auVar54,auVar71,auVar25);
      auVar96 = sha256rnds2_sha(auVar95,auVar59,auVar41);
      auVar54 = sha256msg2_sha(auVar72,auVar94);
      auVar75._4_4_ = auVar25._12_4_;
      auVar75._0_4_ = auVar25._8_4_;
      auVar75._8_4_ = auVar25._0_4_;
      auVar75._12_4_ = auVar25._0_4_;
      auVar60._0_4_ = auVar89._0_4_ + auVar67._4_4_;
      auVar60._4_4_ = auVar89._4_4_ + auVar67._8_4_;
      auVar60._8_4_ = auVar89._8_4_ + auVar67._12_4_;
      auVar60._12_4_ = auVar89._12_4_ + auVar55._0_4_;
      auVar92 = sha256msg1_sha(auVar63,auVar67);
      auVar75 = sha256rnds2_sha(auVar71,auVar93,auVar75);
      auVar63._4_4_ = auVar41._12_4_;
      auVar63._0_4_ = auVar41._8_4_;
      auVar63._8_4_ = auVar41._0_4_;
      auVar63._12_4_ = auVar41._0_4_;
      auVar26._0_4_ = _DAT_00107e60 + auVar55._0_4_;
      auVar26._4_4_ = _UNK_00107e64 + auVar55._4_4_;
      auVar26._8_4_ = _UNK_00107e68 + auVar55._8_4_;
      auVar26._12_4_ = _UNK_00107e6c + auVar55._12_4_;
      auVar95 = sha256rnds2_sha(auVar59,auVar96,auVar63);
      auVar59 = sha256msg1_sha(auVar80,auVar94);
      auVar76._0_4_ = auVar91._0_4_ + auVar94._4_4_;
      auVar76._4_4_ = auVar91._4_4_ + auVar94._8_4_;
      auVar76._8_4_ = auVar91._8_4_ + auVar94._12_4_;
      auVar76._12_4_ = auVar91._12_4_ + auVar54._0_4_;
      auVar42._0_4_ = _DAT_00107e60 + auVar54._0_4_;
      auVar42._4_4_ = _UNK_00107e64 + auVar54._4_4_;
      auVar42._8_4_ = _UNK_00107e68 + auVar54._8_4_;
      auVar42._12_4_ = _UNK_00107e6c + auVar54._12_4_;
      auVar89 = sha256msg2_sha(auVar60,auVar55);
      auVar93 = sha256rnds2_sha(auVar93,auVar75,auVar26);
      auVar96 = sha256rnds2_sha(auVar96,auVar95,auVar42);
      auVar71 = sha256msg2_sha(auVar76,auVar54);
      auVar80._4_4_ = auVar26._12_4_;
      auVar80._0_4_ = auVar26._8_4_;
      auVar80._8_4_ = auVar26._0_4_;
      auVar80._12_4_ = auVar26._0_4_;
      auVar64._0_4_ = auVar92._0_4_ + auVar55._4_4_;
      auVar64._4_4_ = auVar92._4_4_ + auVar55._8_4_;
      auVar64._8_4_ = auVar92._8_4_ + auVar55._12_4_;
      auVar64._12_4_ = auVar92._12_4_ + auVar89._0_4_;
      auVar91 = sha256msg1_sha(auVar67,auVar55);
      auVar63 = sha256rnds2_sha(auVar75,auVar93,auVar80);
      auVar67._4_4_ = auVar42._12_4_;
      auVar67._0_4_ = auVar42._8_4_;
      auVar67._8_4_ = auVar42._0_4_;
      auVar67._12_4_ = auVar42._0_4_;
      auVar27._0_4_ = _DAT_00107e70 + auVar89._0_4_;
      auVar27._4_4_ = _UNK_00107e74 + auVar89._4_4_;
      auVar27._8_4_ = _UNK_00107e78 + auVar89._8_4_;
      auVar27._12_4_ = _UNK_00107e7c + auVar89._12_4_;
      auVar67 = sha256rnds2_sha(auVar95,auVar96,auVar67);
      auVar75 = sha256msg1_sha(auVar94,auVar54);
      auVar81._0_4_ = auVar59._0_4_ + auVar54._4_4_;
      auVar81._4_4_ = auVar59._4_4_ + auVar54._8_4_;
      auVar81._8_4_ = auVar59._8_4_ + auVar54._12_4_;
      auVar81._12_4_ = auVar59._12_4_ + auVar71._0_4_;
      auVar43._0_4_ = _DAT_00107e70 + auVar71._0_4_;
      auVar43._4_4_ = _UNK_00107e74 + auVar71._4_4_;
      auVar43._8_4_ = _UNK_00107e78 + auVar71._8_4_;
      auVar43._12_4_ = _UNK_00107e7c + auVar71._12_4_;
      auVar92 = sha256msg2_sha(auVar64,auVar89);
      auVar80 = sha256rnds2_sha(auVar93,auVar63,auVar27);
      auVar95 = sha256rnds2_sha(auVar96,auVar67,auVar43);
      auVar59 = sha256msg2_sha(auVar81,auVar71);
      auVar94._4_4_ = auVar27._12_4_;
      auVar94._0_4_ = auVar27._8_4_;
      auVar94._8_4_ = auVar27._0_4_;
      auVar94._12_4_ = auVar27._0_4_;
      auVar68._0_4_ = auVar91._0_4_ + auVar89._4_4_;
      auVar68._4_4_ = auVar91._4_4_ + auVar89._8_4_;
      auVar68._8_4_ = auVar91._8_4_ + auVar89._12_4_;
      auVar68._12_4_ = auVar91._12_4_ + auVar92._0_4_;
      auVar55 = sha256msg1_sha(auVar55,auVar89);
      auVar63 = sha256rnds2_sha(auVar63,auVar80,auVar94);
      auVar93._4_4_ = auVar43._12_4_;
      auVar93._0_4_ = auVar43._8_4_;
      auVar93._8_4_ = auVar43._0_4_;
      auVar93._12_4_ = auVar43._0_4_;
      auVar28._0_4_ = _DAT_00107e80 + auVar92._0_4_;
      auVar28._4_4_ = _UNK_00107e84 + auVar92._4_4_;
      auVar28._8_4_ = _UNK_00107e88 + auVar92._8_4_;
      auVar28._12_4_ = _UNK_00107e8c + auVar92._12_4_;
      auVar67 = sha256rnds2_sha(auVar67,auVar95,auVar93);
      auVar54 = sha256msg1_sha(auVar54,auVar71);
      auVar85._0_4_ = auVar75._0_4_ + auVar71._4_4_;
      auVar85._4_4_ = auVar75._4_4_ + auVar71._8_4_;
      auVar85._8_4_ = auVar75._8_4_ + auVar71._12_4_;
      auVar85._12_4_ = auVar75._12_4_ + auVar59._0_4_;
      auVar44._0_4_ = _DAT_00107e80 + auVar59._0_4_;
      auVar44._4_4_ = _UNK_00107e84 + auVar59._4_4_;
      auVar44._8_4_ = _UNK_00107e88 + auVar59._8_4_;
      auVar44._12_4_ = _UNK_00107e8c + auVar59._12_4_;
      auVar91 = sha256msg2_sha(auVar68,auVar92);
      auVar80 = sha256rnds2_sha(auVar80,auVar63,auVar28);
      auVar94 = sha256rnds2_sha(auVar95,auVar67,auVar44);
      auVar75 = sha256msg2_sha(auVar85,auVar59);
      auVar95._4_4_ = auVar28._12_4_;
      auVar95._0_4_ = auVar28._8_4_;
      auVar95._8_4_ = auVar28._0_4_;
      auVar95._12_4_ = auVar28._0_4_;
      auVar57._0_4_ = auVar55._0_4_ + auVar92._4_4_;
      auVar57._4_4_ = auVar55._4_4_ + auVar92._8_4_;
      auVar57._8_4_ = auVar55._8_4_ + auVar92._12_4_;
      auVar57._12_4_ = auVar55._12_4_ + auVar91._0_4_;
      auVar89 = sha256msg1_sha(auVar89,auVar92);
      auVar63 = sha256rnds2_sha(auVar63,auVar80,auVar95);
      auVar96._4_4_ = auVar44._12_4_;
      auVar96._0_4_ = auVar44._8_4_;
      auVar96._8_4_ = auVar44._0_4_;
      auVar96._12_4_ = auVar44._0_4_;
      auVar29._0_4_ = _DAT_00107e90 + auVar91._0_4_;
      auVar29._4_4_ = _UNK_00107e94 + auVar91._4_4_;
      auVar29._8_4_ = _UNK_00107e98 + auVar91._8_4_;
      auVar29._12_4_ = _UNK_00107e9c + auVar91._12_4_;
      auVar67 = sha256rnds2_sha(auVar67,auVar94,auVar96);
      auVar71 = sha256msg1_sha(auVar71,auVar59);
      auVar73._0_4_ = auVar54._0_4_ + auVar59._4_4_;
      auVar73._4_4_ = auVar54._4_4_ + auVar59._8_4_;
      auVar73._8_4_ = auVar54._8_4_ + auVar59._12_4_;
      auVar73._12_4_ = auVar54._12_4_ + auVar75._0_4_;
      auVar45._0_4_ = _DAT_00107e90 + auVar75._0_4_;
      auVar45._4_4_ = _UNK_00107e94 + auVar75._4_4_;
      auVar45._8_4_ = _UNK_00107e98 + auVar75._8_4_;
      auVar45._12_4_ = _UNK_00107e9c + auVar75._12_4_;
      auVar55 = sha256msg2_sha(auVar57,auVar91);
      auVar80 = sha256rnds2_sha(auVar80,auVar63,auVar29);
      auVar94 = sha256rnds2_sha(auVar94,auVar67,auVar45);
      auVar54 = sha256msg2_sha(auVar73,auVar75);
      auVar5._4_4_ = auVar29._12_4_;
      auVar5._0_4_ = auVar29._8_4_;
      auVar5._8_4_ = auVar29._0_4_;
      auVar5._12_4_ = auVar29._0_4_;
      auVar61._0_4_ = auVar89._0_4_ + auVar91._4_4_;
      auVar61._4_4_ = auVar89._4_4_ + auVar91._8_4_;
      auVar61._8_4_ = auVar89._8_4_ + auVar91._12_4_;
      auVar61._12_4_ = auVar89._12_4_ + auVar55._0_4_;
      auVar92 = sha256msg1_sha(auVar92,auVar91);
      auVar63 = sha256rnds2_sha(auVar63,auVar80,auVar5);
      auVar6._4_4_ = auVar45._12_4_;
      auVar6._0_4_ = auVar45._8_4_;
      auVar6._8_4_ = auVar45._0_4_;
      auVar6._12_4_ = auVar45._0_4_;
      auVar30._0_4_ = _DAT_00107ea0 + auVar55._0_4_;
      auVar30._4_4_ = _UNK_00107ea4 + auVar55._4_4_;
      auVar30._8_4_ = _UNK_00107ea8 + auVar55._8_4_;
      auVar30._12_4_ = _UNK_00107eac + auVar55._12_4_;
      auVar67 = sha256rnds2_sha(auVar67,auVar94,auVar6);
      auVar59 = sha256msg1_sha(auVar59,auVar75);
      auVar77._0_4_ = auVar71._0_4_ + auVar75._4_4_;
      auVar77._4_4_ = auVar71._4_4_ + auVar75._8_4_;
      auVar77._8_4_ = auVar71._8_4_ + auVar75._12_4_;
      auVar77._12_4_ = auVar71._12_4_ + auVar54._0_4_;
      auVar46._0_4_ = _DAT_00107ea0 + auVar54._0_4_;
      auVar46._4_4_ = _UNK_00107ea4 + auVar54._4_4_;
      auVar46._8_4_ = _UNK_00107ea8 + auVar54._8_4_;
      auVar46._12_4_ = _UNK_00107eac + auVar54._12_4_;
      auVar89 = sha256msg2_sha(auVar61,auVar55);
      auVar80 = sha256rnds2_sha(auVar80,auVar63,auVar30);
      auVar94 = sha256rnds2_sha(auVar94,auVar67,auVar46);
      auVar71 = sha256msg2_sha(auVar77,auVar54);
      auVar7._4_4_ = auVar30._12_4_;
      auVar7._0_4_ = auVar30._8_4_;
      auVar7._8_4_ = auVar30._0_4_;
      auVar7._12_4_ = auVar30._0_4_;
      auVar65._0_4_ = auVar92._0_4_ + auVar55._4_4_;
      auVar65._4_4_ = auVar92._4_4_ + auVar55._8_4_;
      auVar65._8_4_ = auVar92._8_4_ + auVar55._12_4_;
      auVar65._12_4_ = auVar92._12_4_ + auVar89._0_4_;
      auVar91 = sha256msg1_sha(auVar91,auVar55);
      auVar63 = sha256rnds2_sha(auVar63,auVar80,auVar7);
      auVar8._4_4_ = auVar46._12_4_;
      auVar8._0_4_ = auVar46._8_4_;
      auVar8._8_4_ = auVar46._0_4_;
      auVar8._12_4_ = auVar46._0_4_;
      auVar31._0_4_ = _DAT_00107eb0 + auVar89._0_4_;
      auVar31._4_4_ = _UNK_00107eb4 + auVar89._4_4_;
      auVar31._8_4_ = _UNK_00107eb8 + auVar89._8_4_;
      auVar31._12_4_ = _UNK_00107ebc + auVar89._12_4_;
      auVar67 = sha256rnds2_sha(auVar67,auVar94,auVar8);
      auVar75 = sha256msg1_sha(auVar75,auVar54);
      auVar82._0_4_ = auVar59._0_4_ + auVar54._4_4_;
      auVar82._4_4_ = auVar59._4_4_ + auVar54._8_4_;
      auVar82._8_4_ = auVar59._8_4_ + auVar54._12_4_;
      auVar82._12_4_ = auVar59._12_4_ + auVar71._0_4_;
      auVar47._0_4_ = _DAT_00107eb0 + auVar71._0_4_;
      auVar47._4_4_ = _UNK_00107eb4 + auVar71._4_4_;
      auVar47._8_4_ = _UNK_00107eb8 + auVar71._8_4_;
      auVar47._12_4_ = _UNK_00107ebc + auVar71._12_4_;
      auVar92 = sha256msg2_sha(auVar65,auVar89);
      auVar80 = sha256rnds2_sha(auVar80,auVar63,auVar31);
      auVar94 = sha256rnds2_sha(auVar94,auVar67,auVar47);
      auVar59 = sha256msg2_sha(auVar82,auVar71);
      auVar9._4_4_ = auVar31._12_4_;
      auVar9._0_4_ = auVar31._8_4_;
      auVar9._8_4_ = auVar31._0_4_;
      auVar9._12_4_ = auVar31._0_4_;
      auVar69._0_4_ = auVar91._0_4_ + auVar89._4_4_;
      auVar69._4_4_ = auVar91._4_4_ + auVar89._8_4_;
      auVar69._8_4_ = auVar91._8_4_ + auVar89._12_4_;
      auVar69._12_4_ = auVar91._12_4_ + auVar92._0_4_;
      auVar55 = sha256msg1_sha(auVar55,auVar89);
      auVar63 = sha256rnds2_sha(auVar63,auVar80,auVar9);
      auVar10._4_4_ = auVar47._12_4_;
      auVar10._0_4_ = auVar47._8_4_;
      auVar10._8_4_ = auVar47._0_4_;
      auVar10._12_4_ = auVar47._0_4_;
      auVar32._0_4_ = _DAT_00107ec0 + auVar92._0_4_;
      auVar32._4_4_ = _UNK_00107ec4 + auVar92._4_4_;
      auVar32._8_4_ = _UNK_00107ec8 + auVar92._8_4_;
      auVar32._12_4_ = _UNK_00107ecc + auVar92._12_4_;
      auVar67 = sha256rnds2_sha(auVar67,auVar94,auVar10);
      auVar54 = sha256msg1_sha(auVar54,auVar71);
      auVar86._0_4_ = auVar75._0_4_ + auVar71._4_4_;
      auVar86._4_4_ = auVar75._4_4_ + auVar71._8_4_;
      auVar86._8_4_ = auVar75._8_4_ + auVar71._12_4_;
      auVar86._12_4_ = auVar75._12_4_ + auVar59._0_4_;
      auVar48._0_4_ = _DAT_00107ec0 + auVar59._0_4_;
      auVar48._4_4_ = _UNK_00107ec4 + auVar59._4_4_;
      auVar48._8_4_ = _UNK_00107ec8 + auVar59._8_4_;
      auVar48._12_4_ = _UNK_00107ecc + auVar59._12_4_;
      auVar91 = sha256msg2_sha(auVar69,auVar92);
      auVar80 = sha256rnds2_sha(auVar80,auVar63,auVar32);
      auVar94 = sha256rnds2_sha(auVar94,auVar67,auVar48);
      auVar75 = sha256msg2_sha(auVar86,auVar59);
      auVar11._4_4_ = auVar32._12_4_;
      auVar11._0_4_ = auVar32._8_4_;
      auVar11._8_4_ = auVar32._0_4_;
      auVar11._12_4_ = auVar32._0_4_;
      auVar58._0_4_ = auVar55._0_4_ + auVar92._4_4_;
      auVar58._4_4_ = auVar55._4_4_ + auVar92._8_4_;
      auVar58._8_4_ = auVar55._8_4_ + auVar92._12_4_;
      auVar58._12_4_ = auVar55._12_4_ + auVar91._0_4_;
      auVar89 = sha256msg1_sha(auVar89,auVar92);
      auVar63 = sha256rnds2_sha(auVar63,auVar80,auVar11);
      auVar12._4_4_ = auVar48._12_4_;
      auVar12._0_4_ = auVar48._8_4_;
      auVar12._8_4_ = auVar48._0_4_;
      auVar12._12_4_ = auVar48._0_4_;
      auVar33._0_4_ = _DAT_00107ed0 + auVar91._0_4_;
      auVar33._4_4_ = _UNK_00107ed4 + auVar91._4_4_;
      auVar33._8_4_ = _UNK_00107ed8 + auVar91._8_4_;
      auVar33._12_4_ = _UNK_00107edc + auVar91._12_4_;
      auVar67 = sha256rnds2_sha(auVar67,auVar94,auVar12);
      auVar71 = sha256msg1_sha(auVar71,auVar59);
      auVar74._0_4_ = auVar54._0_4_ + auVar59._4_4_;
      auVar74._4_4_ = auVar54._4_4_ + auVar59._8_4_;
      auVar74._8_4_ = auVar54._8_4_ + auVar59._12_4_;
      auVar74._12_4_ = auVar54._12_4_ + auVar75._0_4_;
      auVar49._0_4_ = _DAT_00107ed0 + auVar75._0_4_;
      auVar49._4_4_ = _UNK_00107ed4 + auVar75._4_4_;
      auVar49._8_4_ = _UNK_00107ed8 + auVar75._8_4_;
      auVar49._12_4_ = _UNK_00107edc + auVar75._12_4_;
      auVar55 = sha256msg2_sha(auVar58,auVar91);
      auVar80 = sha256rnds2_sha(auVar80,auVar63,auVar33);
      auVar94 = sha256rnds2_sha(auVar94,auVar67,auVar49);
      auVar54 = sha256msg2_sha(auVar74,auVar75);
      auVar13._4_4_ = auVar33._12_4_;
      auVar13._0_4_ = auVar33._8_4_;
      auVar13._8_4_ = auVar33._0_4_;
      auVar13._12_4_ = auVar33._0_4_;
      auVar62._0_4_ = auVar89._0_4_ + auVar91._4_4_;
      auVar62._4_4_ = auVar89._4_4_ + auVar91._8_4_;
      auVar62._8_4_ = auVar89._8_4_ + auVar91._12_4_;
      auVar62._12_4_ = auVar89._12_4_ + auVar55._0_4_;
      auVar92 = sha256msg1_sha(auVar92,auVar91);
      auVar63 = sha256rnds2_sha(auVar63,auVar80,auVar13);
      auVar14._4_4_ = auVar49._12_4_;
      auVar14._0_4_ = auVar49._8_4_;
      auVar14._8_4_ = auVar49._0_4_;
      auVar14._12_4_ = auVar49._0_4_;
      auVar34._0_4_ = _DAT_00107ee0 + auVar55._0_4_;
      auVar34._4_4_ = _UNK_00107ee4 + auVar55._4_4_;
      auVar34._8_4_ = _UNK_00107ee8 + auVar55._8_4_;
      auVar34._12_4_ = _UNK_00107eec + auVar55._12_4_;
      auVar67 = sha256rnds2_sha(auVar67,auVar94,auVar14);
      auVar59 = sha256msg1_sha(auVar59,auVar75);
      auVar78._0_4_ = auVar71._0_4_ + auVar75._4_4_;
      auVar78._4_4_ = auVar71._4_4_ + auVar75._8_4_;
      auVar78._8_4_ = auVar71._8_4_ + auVar75._12_4_;
      auVar78._12_4_ = auVar71._12_4_ + auVar54._0_4_;
      auVar50._0_4_ = _DAT_00107ee0 + auVar54._0_4_;
      auVar50._4_4_ = _UNK_00107ee4 + auVar54._4_4_;
      auVar50._8_4_ = _UNK_00107ee8 + auVar54._8_4_;
      auVar50._12_4_ = _UNK_00107eec + auVar54._12_4_;
      auVar89 = sha256msg2_sha(auVar62,auVar55);
      auVar80 = sha256rnds2_sha(auVar80,auVar63,auVar34);
      auVar94 = sha256rnds2_sha(auVar94,auVar67,auVar50);
      auVar71 = sha256msg2_sha(auVar78,auVar54);
      auVar15._4_4_ = auVar34._12_4_;
      auVar15._0_4_ = auVar34._8_4_;
      auVar15._8_4_ = auVar34._0_4_;
      auVar15._12_4_ = auVar34._0_4_;
      auVar66._0_4_ = auVar92._0_4_ + auVar55._4_4_;
      auVar66._4_4_ = auVar92._4_4_ + auVar55._8_4_;
      auVar66._8_4_ = auVar92._8_4_ + auVar55._12_4_;
      auVar66._12_4_ = auVar92._12_4_ + auVar89._0_4_;
      auVar92 = sha256msg1_sha(auVar91,auVar55);
      auVar63 = sha256rnds2_sha(auVar63,auVar80,auVar15);
      auVar16._4_4_ = auVar50._12_4_;
      auVar16._0_4_ = auVar50._8_4_;
      auVar16._8_4_ = auVar50._0_4_;
      auVar16._12_4_ = auVar50._0_4_;
      auVar35._0_4_ = _DAT_00107ef0 + auVar89._0_4_;
      auVar35._4_4_ = _UNK_00107ef4 + auVar89._4_4_;
      auVar35._8_4_ = _UNK_00107ef8 + auVar89._8_4_;
      auVar35._12_4_ = _UNK_00107efc + auVar89._12_4_;
      auVar67 = sha256rnds2_sha(auVar67,auVar94,auVar16);
      auVar75 = sha256msg1_sha(auVar75,auVar54);
      auVar83._0_4_ = auVar59._0_4_ + auVar54._4_4_;
      auVar83._4_4_ = auVar59._4_4_ + auVar54._8_4_;
      auVar83._8_4_ = auVar59._8_4_ + auVar54._12_4_;
      auVar83._12_4_ = auVar59._12_4_ + auVar71._0_4_;
      auVar51._0_4_ = _DAT_00107ef0 + auVar71._0_4_;
      auVar51._4_4_ = _UNK_00107ef4 + auVar71._4_4_;
      auVar51._8_4_ = _UNK_00107ef8 + auVar71._8_4_;
      auVar51._12_4_ = _UNK_00107efc + auVar71._12_4_;
      auVar55 = sha256msg2_sha(auVar66,auVar89);
      auVar54 = sha256rnds2_sha(auVar80,auVar63,auVar35);
      auVar80 = sha256rnds2_sha(auVar94,auVar67,auVar51);
      auVar91 = sha256msg2_sha(auVar83,auVar71);
      auVar17._4_4_ = auVar35._12_4_;
      auVar17._0_4_ = auVar35._8_4_;
      auVar17._8_4_ = auVar35._0_4_;
      auVar17._12_4_ = auVar35._0_4_;
      auVar70._0_4_ = auVar92._0_4_ + auVar89._4_4_;
      auVar70._4_4_ = auVar92._4_4_ + auVar89._8_4_;
      auVar70._8_4_ = auVar92._8_4_ + auVar89._12_4_;
      auVar70._12_4_ = auVar92._12_4_ + auVar55._0_4_;
      auVar92 = sha256rnds2_sha(auVar63,auVar54,auVar17);
      auVar18._4_4_ = auVar51._12_4_;
      auVar18._0_4_ = auVar51._8_4_;
      auVar18._8_4_ = auVar51._0_4_;
      auVar18._12_4_ = auVar51._0_4_;
      auVar36._0_4_ = _DAT_00107f00 + auVar55._0_4_;
      auVar36._4_4_ = _UNK_00107f04 + auVar55._4_4_;
      auVar36._8_4_ = _UNK_00107f08 + auVar55._8_4_;
      auVar36._12_4_ = _UNK_00107f0c + auVar55._12_4_;
      auVar59 = sha256rnds2_sha(auVar67,auVar80,auVar18);
      auVar87._0_4_ = auVar75._0_4_ + auVar71._4_4_;
      auVar87._4_4_ = auVar75._4_4_ + auVar71._8_4_;
      auVar87._8_4_ = auVar75._8_4_ + auVar71._12_4_;
      auVar87._12_4_ = auVar75._12_4_ + auVar91._0_4_;
      auVar52._0_4_ = _DAT_00107f00 + auVar91._0_4_;
      auVar52._4_4_ = _UNK_00107f04 + auVar91._4_4_;
      auVar52._8_4_ = _UNK_00107f08 + auVar91._8_4_;
      auVar52._12_4_ = _UNK_00107f0c + auVar91._12_4_;
      auVar55 = sha256msg2_sha(auVar70,auVar55);
      auVar54 = sha256rnds2_sha(auVar54,auVar92,auVar36);
      auVar71 = sha256rnds2_sha(auVar80,auVar59,auVar52);
      auVar89 = sha256msg2_sha(auVar87,auVar91);
      auVar19._4_4_ = auVar36._12_4_;
      auVar19._0_4_ = auVar36._8_4_;
      auVar19._8_4_ = auVar36._0_4_;
      auVar19._12_4_ = auVar36._0_4_;
      auVar37._0_4_ = _DAT_00107f10 + auVar55._0_4_;
      auVar37._4_4_ = _UNK_00107f14 + auVar55._4_4_;
      auVar37._8_4_ = _UNK_00107f18 + auVar55._8_4_;
      auVar37._12_4_ = _UNK_00107f1c + auVar55._12_4_;
      auVar55 = sha256rnds2_sha(auVar92,auVar54,auVar19);
      auVar20._4_4_ = auVar52._12_4_;
      auVar20._0_4_ = auVar52._8_4_;
      auVar20._8_4_ = auVar52._0_4_;
      auVar20._12_4_ = auVar52._0_4_;
      auVar53._0_4_ = _DAT_00107f10 + auVar89._0_4_;
      auVar53._4_4_ = _UNK_00107f14 + auVar89._4_4_;
      auVar53._8_4_ = _UNK_00107f18 + auVar89._8_4_;
      auVar53._12_4_ = _UNK_00107f1c + auVar89._12_4_;
      auVar89 = sha256rnds2_sha(auVar59,auVar71,auVar20);
      pauVar3 = pauVar3 + 4;
      if (local_100 < 2) {
        pauVar3 = (undefined1 (*) [16])auStack_200;
      }
      pauVar4 = pauVar4 + 4;
      if (iStack_fc < 2) {
        pauVar4 = (undefined1 (*) [16])auStack_200;
      }
      auVar92 = sha256rnds2_sha(auVar54,auVar55,auVar37);
      auVar91 = sha256rnds2_sha(auVar71,auVar89,auVar53);
      auVar21._4_4_ = auVar37._12_4_;
      auVar21._0_4_ = auVar37._8_4_;
      auVar21._8_4_ = auVar37._0_4_;
      auVar21._12_4_ = auVar37._0_4_;
      auVar79._0_4_ = -(uint)(0 < local_100);
      auVar79._4_4_ = -(uint)(0 < local_100);
      auVar79._8_4_ = -(uint)(0 < local_100);
      auVar79._12_4_ = -(uint)(0 < local_100);
      auVar84._0_4_ = -(uint)(0 < iStack_fc);
      auVar84._4_4_ = -(uint)(0 < iStack_fc);
      auVar84._8_4_ = -(uint)(0 < iStack_fc);
      auVar84._12_4_ = -(uint)(0 < iStack_fc);
      auVar55 = sha256rnds2_sha(auVar55,auVar92,auVar21);
      auVar22._4_4_ = auVar53._12_4_;
      auVar22._0_4_ = auVar53._8_4_;
      auVar22._8_4_ = auVar53._0_4_;
      auVar22._12_4_ = auVar53._0_4_;
      auVar89 = sha256rnds2_sha(auVar89,auVar91,auVar22);
      auVar92 = auVar92 & auVar79;
      auVar91 = auVar91 & auVar84;
      auVar55 = auVar55 & auVar79;
      auVar89 = auVar89 & auVar84;
      local_1b0._0_4_ = auVar92._0_4_ + local_1b0._0_4_;
      local_1b0._4_4_ = auVar92._4_4_ + local_1b0._4_4_;
      local_1b0._8_4_ = auVar92._8_4_ + local_1b0._8_4_;
      local_1b0._12_4_ = auVar92._12_4_ + local_1b0._12_4_;
      local_190._0_4_ = auVar91._0_4_ + local_190._0_4_;
      local_190._4_4_ = auVar91._4_4_ + local_190._4_4_;
      local_190._8_4_ = auVar91._8_4_ + local_190._8_4_;
      local_190._12_4_ = auVar91._12_4_ + local_190._12_4_;
      local_1c0._0_4_ = auVar55._0_4_ + local_1c0._0_4_;
      local_1c0._4_4_ = auVar55._4_4_ + local_1c0._4_4_;
      local_1c0._8_4_ = auVar55._8_4_ + local_1c0._8_4_;
      local_1c0._12_4_ = auVar55._12_4_ + local_1c0._12_4_;
      local_1a0._0_4_ = auVar89._0_4_ + local_1a0._0_4_;
      local_1a0._4_4_ = auVar89._4_4_ + local_1a0._4_4_;
      local_1a0._8_4_ = auVar89._8_4_ + local_1a0._8_4_;
      local_1a0._12_4_ = auVar89._12_4_ + local_1a0._12_4_;
      local_100 = local_100 - (uint)(0 < local_100);
      iStack_fc = iStack_fc - (uint)(0 < iStack_fc);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    uVar88 = CONCAT44(local_1a0._12_4_,local_1c0._12_4_);
    uVar90 = CONCAT44(local_190._12_4_,local_1b0._12_4_);
    *(undefined8 *)(piVar2 + -0x20) = uVar88;
    *piVar2 = local_1c0._4_4_;
    piVar2[1] = local_1a0._4_4_;
    piVar2[-0x16] = local_1c0._8_4_;
    piVar2[-0x15] = local_1a0._8_4_;
    piVar2[10] = local_1c0._0_4_;
    piVar2[0xb] = local_1a0._0_4_;
    *(undefined8 *)(piVar2 + -0x10) = uVar90;
    piVar2[0x10] = local_1b0._4_4_;
    piVar2[0x11] = local_190._4_4_;
    piVar2[-6] = local_1b0._8_4_;
    piVar2[-5] = local_190._8_4_;
    piVar2[0x1a] = local_1b0._0_4_;
    piVar2[0x1b] = local_190._0_4_;
    piVar2 = piVar2 + 2;
    param_2 = param_2 + 4;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sha256_multi_block_avx
               (undefined1 (*param_1) [32],undefined8 *param_2,uint param_3,ulong param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  undefined1 (*pauVar4) [32];
  uint *puVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [32];
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  undefined1 auVar18 [32];
  undefined1 auVar19 [32];
  undefined1 auVar20 [32];
  undefined1 auVar21 [32];
  undefined1 auVar22 [16];
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  int iVar27;
  int iVar28;
  undefined1 (*pauVar29) [16];
  undefined1 (*pauVar30) [32];
  uint *puVar31;
  uint *puVar32;
  uint *puVar33;
  uint *puVar34;
  undefined4 *puVar35;
  undefined4 *puVar36;
  undefined4 *puVar37;
  undefined4 *puVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [32];
  undefined1 auVar45 [32];
  undefined1 auVar46 [32];
  undefined1 auVar47 [32];
  undefined1 auVar48 [32];
  undefined1 auVar49 [32];
  undefined1 auVar50 [32];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [32];
  undefined1 auVar55 [32];
  undefined1 auVar56 [32];
  undefined1 auVar57 [32];
  undefined1 auVar58 [32];
  undefined1 auVar59 [32];
  undefined1 auVar60 [32];
  undefined1 auVar61 [32];
  undefined1 auVar62 [32];
  undefined1 auVar63 [32];
  undefined1 auVar64 [32];
  undefined1 auVar65 [32];
  undefined1 auVar66 [32];
  undefined1 auVar67 [32];
  undefined1 auVar68 [32];
  undefined1 auVar69 [32];
  undefined1 auVar70 [32];
  undefined1 auVar71 [32];
  undefined1 auVar72 [32];
  undefined1 auVar73 [16];
  undefined1 auVar74 [32];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [32];
  undefined1 auStack_2e0 [32];
  undefined1 auStack_2c0 [32];
  undefined1 auStack_2a0 [32];
  undefined1 auStack_280 [32];
  undefined1 auStack_260 [32];
  undefined1 auStack_240 [32];
  undefined1 auStack_220 [32];
  undefined1 local_200 [32];
  undefined1 local_1e0 [32];
  undefined1 local_1c0 [32];
  undefined1 local_1a0 [32];
  undefined1 local_180 [32];
  undefined1 local_160 [32];
  undefined1 local_140 [32];
  undefined1 local_120 [32];
  undefined1 local_100 [16];
  uint uStack_e8;
  undefined1 local_f0 [16];
  int iStack_e4;
  
  if ((1 < param_3) && ((param_4 >> 0x20 & 0x20) != 0)) {
    pauVar4 = param_1 + 4;
    puVar31 = (uint *)*param_2;
    local_100._0_4_ = *(undefined4 *)(param_2 + 1);
    iVar28 = local_100._0_4_;
    if ((int)local_100._0_4_ < 1) {
      puVar31 = (uint *)&DAT_00107680;
      iVar28 = 0;
    }
    puVar33 = (uint *)param_2[2];
    local_100._4_4_ = *(undefined4 *)(param_2 + 3);
    if (iVar28 < (int)local_100._4_4_) {
      iVar28 = local_100._4_4_;
    }
    if ((int)local_100._4_4_ < 1) {
      puVar33 = (uint *)&DAT_00107680;
    }
    puVar35 = (undefined4 *)param_2[4];
    local_100._8_4_ = *(undefined4 *)(param_2 + 5);
    if (iVar28 < (int)local_100._8_4_) {
      iVar28 = local_100._8_4_;
    }
    if ((int)local_100._8_4_ < 1) {
      puVar35 = (undefined4 *)&DAT_00107680;
    }
    puVar37 = (undefined4 *)param_2[6];
    local_100._12_4_ = *(undefined4 *)(param_2 + 7);
    if (iVar28 < (int)local_100._12_4_) {
      iVar28 = local_100._12_4_;
    }
    if ((int)local_100._12_4_ < 1) {
      puVar37 = (undefined4 *)&DAT_00107680;
    }
    puVar32 = (uint *)param_2[8];
    unique0x0000de00 = *(int *)(param_2 + 9);
    if (iVar28 < unique0x0000de00) {
      iVar28 = unique0x0000de00;
    }
    if (unique0x0000de00 < 1) {
      puVar32 = (uint *)&DAT_00107680;
    }
    puVar34 = (uint *)param_2[10];
    unique0x0000de00 = *(int *)(param_2 + 0xb);
    if (iVar28 < unique0x0000de00) {
      iVar28 = unique0x0000de00;
    }
    if (unique0x0000de00 < 1) {
      puVar34 = (uint *)&DAT_00107680;
    }
    puVar36 = (undefined4 *)param_2[0xc];
    uStack_e8 = *(uint *)(param_2 + 0xd);
    if (iVar28 < (int)uStack_e8) {
      iVar28 = uStack_e8;
    }
    if ((int)uStack_e8 < 1) {
      puVar36 = (undefined4 *)&DAT_00107680;
    }
    puVar38 = (undefined4 *)param_2[0xe];
    iStack_e4 = *(int *)(param_2 + 0xf);
    if (iVar28 < iStack_e4) {
      iVar28 = iStack_e4;
    }
    if (iStack_e4 < 1) {
      puVar38 = (undefined4 *)&DAT_00107680;
    }
    auVar14 = *param_1;
    auVar15 = param_1[1];
    auVar16 = param_1[2];
    auVar17 = param_1[3];
    auVar18 = *pauVar4;
    auVar19 = param_1[5];
    auVar20 = param_1[6];
    auVar21 = param_1[7];
    auVar48._16_16_ = _DAT_00107e10;
    auVar48._0_16_ = _DAT_00107e00;
    do {
      auVar6 = vpinsrd_avx(ZEXT416(*puVar31),*puVar35,1);
      auVar7 = vpinsrd_avx(ZEXT416(*puVar32),*puVar36,1);
      auVar8 = vpinsrd_avx(ZEXT416(*puVar33),*puVar37,1);
      auVar49 = vpunpckldq_avx2(ZEXT1632(auVar6),ZEXT1632(auVar8));
      auVar6 = vpinsrd_avx(ZEXT416(*puVar34),*puVar38,1);
      auVar50 = vpunpckldq_avx2(ZEXT1632(auVar7),ZEXT1632(auVar6));
      auVar57._0_16_ = ZEXT116(0) * auVar50._0_16_ + ZEXT116(1) * auVar49._0_16_;
      auVar57._16_16_ = ZEXT116(0) * auVar49._16_16_ + ZEXT116(1) * auVar50._0_16_;
      auVar49 = vpshufb_avx2(auVar57,auVar48);
      auVar74 = vpsrld_avx2(auVar18,6);
      auVar54 = vpslld_avx2(auVar18,0x1a);
      auVar21 = vpaddd_avx2(auVar49,auVar21);
      auVar44 = vpsrld_avx2(auVar18,0xb);
      auVar55 = vpslld_avx2(auVar18,0x15);
      auVar50._16_16_ = _UNK_00107610;
      auVar50._0_16_ = _K256;
      auVar21 = vpaddd_avx2(auVar21,auVar50);
      auVar45 = vpsrld_avx2(auVar18,0x19);
      auVar56 = vpslld_avx2(auVar18,7);
      auVar47 = vpandn_avx2(auVar18,auVar20);
      auVar50 = vpand_avx2(auVar18,auVar19);
      auVar77 = vpsrld_avx2(auVar14,2);
      auVar46 = vpslld_avx2(auVar14,0x1e);
      auVar21 = vpaddd_avx2(auVar21,auVar74 ^ auVar54 ^ auVar44 ^ auVar55 ^ auVar45 ^ auVar56);
      auVar44 = vpsrld_avx2(auVar14,0xd);
      auVar45 = vpslld_avx2(auVar14,0x13);
      auVar21 = vpaddd_avx2(auVar21,auVar47 ^ auVar50);
      auVar50 = vpand_avx2(auVar16 ^ auVar15,auVar15 ^ auVar14);
      auVar47 = vpsrld_avx2(auVar14,0x16);
      auVar54 = vpslld_avx2(auVar14,10);
      auVar17 = vpaddd_avx2(auVar17,auVar21);
      auVar21 = vpaddd_avx2(auVar15 ^ auVar50,auVar21);
      auVar21 = vpaddd_avx2(auVar21,auVar77 ^ auVar46 ^ auVar44 ^ auVar45 ^ auVar47 ^ auVar54);
      auVar6 = vpinsrd_avx(ZEXT416(puVar31[1]),puVar35[1],1);
      auVar7 = vpinsrd_avx(ZEXT416(puVar32[1]),puVar36[1],1);
      auVar8 = vpinsrd_avx(ZEXT416(puVar33[1]),puVar37[1],1);
      auVar50 = vpunpckldq_avx2(ZEXT1632(auVar6),ZEXT1632(auVar8));
      auVar6 = vpinsrd_avx(ZEXT416(puVar34[1]),puVar38[1],1);
      auVar47 = vpunpckldq_avx2(ZEXT1632(auVar7),ZEXT1632(auVar6));
      auVar58._0_16_ = ZEXT116(0) * auVar47._0_16_ + ZEXT116(1) * auVar50._0_16_;
      auVar58._16_16_ = ZEXT116(0) * auVar50._16_16_ + ZEXT116(1) * auVar47._0_16_;
      auStack_2e0 = vpshufb_avx2(auVar58,auVar48);
      auVar74 = vpsrld_avx2(auVar17,6);
      auVar54 = vpslld_avx2(auVar17,0x1a);
      auVar20 = vpaddd_avx2(auStack_2e0,auVar20);
      auVar44 = vpsrld_avx2(auVar17,0xb);
      auVar55 = vpslld_avx2(auVar17,0x15);
      auVar47._16_16_ = _UNK_00107630;
      auVar47._0_16_ = _DAT_00107620;
      auVar20 = vpaddd_avx2(auVar20,auVar47);
      auVar45 = vpsrld_avx2(auVar17,0x19);
      auVar56 = vpslld_avx2(auVar17,7);
      auVar47 = vpandn_avx2(auVar17,auVar19);
      auVar50 = vpand_avx2(auVar17,auVar18);
      auVar77 = vpsrld_avx2(auVar21,2);
      auVar46 = vpslld_avx2(auVar21,0x1e);
      auVar20 = vpaddd_avx2(auVar20,auVar74 ^ auVar54 ^ auVar44 ^ auVar55 ^ auVar45 ^ auVar56);
      auVar44 = vpsrld_avx2(auVar21,0xd);
      auVar45 = vpslld_avx2(auVar21,0x13);
      auVar20 = vpaddd_avx2(auVar20,auVar47 ^ auVar50);
      auVar50 = vpand_avx2(auVar15 ^ auVar14,auVar14 ^ auVar21);
      auVar47 = vpsrld_avx2(auVar21,0x16);
      auVar54 = vpslld_avx2(auVar21,10);
      auVar16 = vpaddd_avx2(auVar16,auVar20);
      auVar20 = vpaddd_avx2(auVar14 ^ auVar50,auVar20);
      auVar20 = vpaddd_avx2(auVar20,auVar77 ^ auVar46 ^ auVar44 ^ auVar45 ^ auVar47 ^ auVar54);
      auVar6 = vpinsrd_avx(ZEXT416(puVar31[2]),puVar35[2],1);
      auVar7 = vpinsrd_avx(ZEXT416(puVar32[2]),puVar36[2],1);
      auVar8 = vpinsrd_avx(ZEXT416(puVar33[2]),puVar37[2],1);
      auVar50 = vpunpckldq_avx2(ZEXT1632(auVar6),ZEXT1632(auVar8));
      auVar6 = vpinsrd_avx(ZEXT416(puVar34[2]),puVar38[2],1);
      auVar47 = vpunpckldq_avx2(ZEXT1632(auVar7),ZEXT1632(auVar6));
      auVar59._0_16_ = ZEXT116(0) * auVar47._0_16_ + ZEXT116(1) * auVar50._0_16_;
      auVar59._16_16_ = ZEXT116(0) * auVar50._16_16_ + ZEXT116(1) * auVar47._0_16_;
      auStack_2c0 = vpshufb_avx2(auVar59,auVar48);
      auVar74 = vpsrld_avx2(auVar16,6);
      auVar54 = vpslld_avx2(auVar16,0x1a);
      auVar19 = vpaddd_avx2(auStack_2c0,auVar19);
      auVar45 = vpsrld_avx2(auVar16,0xb);
      auVar55 = vpslld_avx2(auVar16,0x15);
      auVar44._16_16_ = _UNK_00107650;
      auVar44._0_16_ = _DAT_00107640;
      auVar19 = vpaddd_avx2(auVar19,auVar44);
      auVar44 = vpsrld_avx2(auVar16,0x19);
      auVar56 = vpslld_avx2(auVar16,7);
      auVar47 = vpandn_avx2(auVar16,auVar18);
      auVar50 = vpand_avx2(auVar16,auVar17);
      auVar77 = vpsrld_avx2(auVar20,2);
      auVar46 = vpslld_avx2(auVar20,0x1e);
      auVar19 = vpaddd_avx2(auVar19,auVar74 ^ auVar54 ^ auVar45 ^ auVar55 ^ auVar44 ^ auVar56);
      auVar44 = vpsrld_avx2(auVar20,0xd);
      auVar45 = vpslld_avx2(auVar20,0x13);
      auVar19 = vpaddd_avx2(auVar19,auVar47 ^ auVar50);
      auVar50 = vpand_avx2(auVar14 ^ auVar21,auVar21 ^ auVar20);
      auVar47 = vpsrld_avx2(auVar20,0x16);
      auVar54 = vpslld_avx2(auVar20,10);
      auVar15 = vpaddd_avx2(auVar15,auVar19);
      auVar19 = vpaddd_avx2(auVar21 ^ auVar50,auVar19);
      auVar19 = vpaddd_avx2(auVar19,auVar77 ^ auVar46 ^ auVar44 ^ auVar45 ^ auVar47 ^ auVar54);
      auVar6 = vpinsrd_avx(ZEXT416(puVar31[3]),puVar35[3],1);
      auVar7 = vpinsrd_avx(ZEXT416(puVar32[3]),puVar36[3],1);
      auVar8 = vpinsrd_avx(ZEXT416(puVar33[3]),puVar37[3],1);
      auVar50 = vpunpckldq_avx2(ZEXT1632(auVar6),ZEXT1632(auVar8));
      auVar6 = vpinsrd_avx(ZEXT416(puVar34[3]),puVar38[3],1);
      auVar47 = vpunpckldq_avx2(ZEXT1632(auVar7),ZEXT1632(auVar6));
      auVar60._0_16_ = ZEXT116(0) * auVar47._0_16_ + ZEXT116(1) * auVar50._0_16_;
      auVar60._16_16_ = ZEXT116(0) * auVar50._16_16_ + ZEXT116(1) * auVar47._0_16_;
      auStack_2a0 = vpshufb_avx2(auVar60,auVar48);
      auVar74 = vpsrld_avx2(auVar15,6);
      auVar54 = vpslld_avx2(auVar15,0x1a);
      auVar18 = vpaddd_avx2(auStack_2a0,auVar18);
      auVar44 = vpsrld_avx2(auVar15,0xb);
      auVar55 = vpslld_avx2(auVar15,0x15);
      auVar45._16_16_ = _UNK_00107670;
      auVar45._0_16_ = _DAT_00107660;
      auVar18 = vpaddd_avx2(auVar18,auVar45);
      auVar45 = vpsrld_avx2(auVar15,0x19);
      auVar56 = vpslld_avx2(auVar15,7);
      auVar47 = vpandn_avx2(auVar15,auVar17);
      auVar50 = vpand_avx2(auVar15,auVar16);
      auVar77 = vpsrld_avx2(auVar19,2);
      auVar46 = vpslld_avx2(auVar19,0x1e);
      auVar18 = vpaddd_avx2(auVar18,auVar74 ^ auVar54 ^ auVar44 ^ auVar55 ^ auVar45 ^ auVar56);
      auVar44 = vpsrld_avx2(auVar19,0xd);
      auVar45 = vpslld_avx2(auVar19,0x13);
      auVar18 = vpaddd_avx2(auVar18,auVar47 ^ auVar50);
      auVar50 = vpand_avx2(auVar21 ^ auVar20,auVar20 ^ auVar19);
      auVar47 = vpsrld_avx2(auVar19,0x16);
      auVar54 = vpslld_avx2(auVar19,10);
      auVar14 = vpaddd_avx2(auVar14,auVar18);
      auVar18 = vpaddd_avx2(auVar20 ^ auVar50,auVar18);
      auVar18 = vpaddd_avx2(auVar18,auVar77 ^ auVar46 ^ auVar44 ^ auVar45 ^ auVar47 ^ auVar54);
      auVar6 = vpinsrd_avx(ZEXT416(puVar31[4]),puVar35[4],1);
      auVar7 = vpinsrd_avx(ZEXT416(puVar32[4]),puVar36[4],1);
      auVar8 = vpinsrd_avx(ZEXT416(puVar33[4]),puVar37[4],1);
      auVar50 = vpunpckldq_avx2(ZEXT1632(auVar6),ZEXT1632(auVar8));
      auVar6 = vpinsrd_avx(ZEXT416(puVar34[4]),puVar38[4],1);
      auVar47 = vpunpckldq_avx2(ZEXT1632(auVar7),ZEXT1632(auVar6));
      auVar61._0_16_ = ZEXT116(0) * auVar47._0_16_ + ZEXT116(1) * auVar50._0_16_;
      auVar61._16_16_ = ZEXT116(0) * auVar50._16_16_ + ZEXT116(1) * auVar47._0_16_;
      auStack_280 = vpshufb_avx2(auVar61,auVar48);
      auVar74 = vpsrld_avx2(auVar14,6);
      auVar54 = vpslld_avx2(auVar14,0x1a);
      auVar17 = vpaddd_avx2(auStack_280,auVar17);
      auVar44 = vpsrld_avx2(auVar14,0xb);
      auVar55 = vpslld_avx2(auVar14,0x15);
      auVar46._16_16_ = _UNK_00107690;
      auVar46._0_16_ = _DAT_00107680;
      auVar17 = vpaddd_avx2(auVar17,auVar46);
      auVar45 = vpsrld_avx2(auVar14,0x19);
      auVar56 = vpslld_avx2(auVar14,7);
      auVar47 = vpandn_avx2(auVar14,auVar16);
      auVar50 = vpand_avx2(auVar14,auVar15);
      auVar77 = vpsrld_avx2(auVar18,2);
      auVar46 = vpslld_avx2(auVar18,0x1e);
      auVar17 = vpaddd_avx2(auVar17,auVar74 ^ auVar54 ^ auVar44 ^ auVar55 ^ auVar45 ^ auVar56);
      auVar44 = vpsrld_avx2(auVar18,0xd);
      auVar45 = vpslld_avx2(auVar18,0x13);
      auVar17 = vpaddd_avx2(auVar17,auVar47 ^ auVar50);
      auVar50 = vpand_avx2(auVar20 ^ auVar19,auVar19 ^ auVar18);
      auVar47 = vpsrld_avx2(auVar18,0x16);
      auVar54 = vpslld_avx2(auVar18,10);
      auVar21 = vpaddd_avx2(auVar21,auVar17);
      auVar17 = vpaddd_avx2(auVar19 ^ auVar50,auVar17);
      auVar17 = vpaddd_avx2(auVar17,auVar77 ^ auVar46 ^ auVar44 ^ auVar45 ^ auVar47 ^ auVar54);
      auVar6 = vpinsrd_avx(ZEXT416(puVar31[5]),puVar35[5],1);
      auVar7 = vpinsrd_avx(ZEXT416(puVar32[5]),puVar36[5],1);
      auVar8 = vpinsrd_avx(ZEXT416(puVar33[5]),puVar37[5],1);
      auVar50 = vpunpckldq_avx2(ZEXT1632(auVar6),ZEXT1632(auVar8));
      auVar6 = vpinsrd_avx(ZEXT416(puVar34[5]),puVar38[5],1);
      auVar47 = vpunpckldq_avx2(ZEXT1632(auVar7),ZEXT1632(auVar6));
      auVar62._0_16_ = ZEXT116(0) * auVar47._0_16_ + ZEXT116(1) * auVar50._0_16_;
      auVar62._16_16_ = ZEXT116(0) * auVar50._16_16_ + ZEXT116(1) * auVar47._0_16_;
      auStack_260 = vpshufb_avx2(auVar62,auVar48);
      auVar74 = vpsrld_avx2(auVar21,6);
      auVar55 = vpslld_avx2(auVar21,0x1a);
      auVar16 = vpaddd_avx2(auStack_260,auVar16);
      auVar44 = vpsrld_avx2(auVar21,0xb);
      auVar56 = vpslld_avx2(auVar21,0x15);
      auVar54._16_16_ = _UNK_001076b0;
      auVar54._0_16_ = _DAT_001076a0;
      auVar16 = vpaddd_avx2(auVar16,auVar54);
      auVar45 = vpsrld_avx2(auVar21,0x19);
      auVar54 = vpslld_avx2(auVar21,7);
      auVar47 = vpandn_avx2(auVar21,auVar15);
      auVar50 = vpand_avx2(auVar21,auVar14);
      auVar77 = vpsrld_avx2(auVar17,2);
      auVar46 = vpslld_avx2(auVar17,0x1e);
      auVar16 = vpaddd_avx2(auVar16,auVar74 ^ auVar55 ^ auVar44 ^ auVar56 ^ auVar45 ^ auVar54);
      auVar44 = vpsrld_avx2(auVar17,0xd);
      auVar45 = vpslld_avx2(auVar17,0x13);
      auVar16 = vpaddd_avx2(auVar16,auVar47 ^ auVar50);
      auVar50 = vpand_avx2(auVar19 ^ auVar18,auVar18 ^ auVar17);
      auVar47 = vpsrld_avx2(auVar17,0x16);
      auVar54 = vpslld_avx2(auVar17,10);
      auVar20 = vpaddd_avx2(auVar20,auVar16);
      auVar16 = vpaddd_avx2(auVar18 ^ auVar50,auVar16);
      auVar16 = vpaddd_avx2(auVar16,auVar77 ^ auVar46 ^ auVar44 ^ auVar45 ^ auVar47 ^ auVar54);
      auVar6 = vpinsrd_avx(ZEXT416(puVar31[6]),puVar35[6],1);
      auVar7 = vpinsrd_avx(ZEXT416(puVar32[6]),puVar36[6],1);
      auVar8 = vpinsrd_avx(ZEXT416(puVar33[6]),puVar37[6],1);
      auVar50 = vpunpckldq_avx2(ZEXT1632(auVar6),ZEXT1632(auVar8));
      auVar6 = vpinsrd_avx(ZEXT416(puVar34[6]),puVar38[6],1);
      auVar47 = vpunpckldq_avx2(ZEXT1632(auVar7),ZEXT1632(auVar6));
      auVar63._0_16_ = ZEXT116(0) * auVar47._0_16_ + ZEXT116(1) * auVar50._0_16_;
      auVar63._16_16_ = ZEXT116(0) * auVar50._16_16_ + ZEXT116(1) * auVar47._0_16_;
      auStack_240 = vpshufb_avx2(auVar63,auVar48);
      auVar74 = vpsrld_avx2(auVar20,6);
      auVar54 = vpslld_avx2(auVar20,0x1a);
      auVar15 = vpaddd_avx2(auStack_240,auVar15);
      auVar44 = vpsrld_avx2(auVar20,0xb);
      auVar56 = vpslld_avx2(auVar20,0x15);
      auVar55._16_16_ = _UNK_001076d0;
      auVar55._0_16_ = _DAT_001076c0;
      auVar15 = vpaddd_avx2(auVar15,auVar55);
      auVar45 = vpsrld_avx2(auVar20,0x19);
      auVar55 = vpslld_avx2(auVar20,7);
      auVar47 = vpandn_avx2(auVar20,auVar14);
      auVar50 = vpand_avx2(auVar20,auVar21);
      auVar77 = vpsrld_avx2(auVar16,2);
      auVar46 = vpslld_avx2(auVar16,0x1e);
      auVar15 = vpaddd_avx2(auVar15,auVar74 ^ auVar54 ^ auVar44 ^ auVar56 ^ auVar45 ^ auVar55);
      auVar44 = vpsrld_avx2(auVar16,0xd);
      auVar45 = vpslld_avx2(auVar16,0x13);
      auVar15 = vpaddd_avx2(auVar15,auVar47 ^ auVar50);
      auVar50 = vpand_avx2(auVar18 ^ auVar17,auVar17 ^ auVar16);
      auVar47 = vpsrld_avx2(auVar16,0x16);
      auVar54 = vpslld_avx2(auVar16,10);
      auVar19 = vpaddd_avx2(auVar19,auVar15);
      auVar15 = vpaddd_avx2(auVar17 ^ auVar50,auVar15);
      auVar15 = vpaddd_avx2(auVar15,auVar77 ^ auVar46 ^ auVar44 ^ auVar45 ^ auVar47 ^ auVar54);
      auVar6 = vpinsrd_avx(ZEXT416(puVar31[7]),puVar35[7],1);
      auVar7 = vpinsrd_avx(ZEXT416(puVar32[7]),puVar36[7],1);
      auVar8 = vpinsrd_avx(ZEXT416(puVar33[7]),puVar37[7],1);
      auVar50 = vpunpckldq_avx2(ZEXT1632(auVar6),ZEXT1632(auVar8));
      auVar6 = vpinsrd_avx(ZEXT416(puVar34[7]),puVar38[7],1);
      auVar47 = vpunpckldq_avx2(ZEXT1632(auVar7),ZEXT1632(auVar6));
      auVar64._0_16_ = ZEXT116(0) * auVar47._0_16_ + ZEXT116(1) * auVar50._0_16_;
      auVar64._16_16_ = ZEXT116(0) * auVar50._16_16_ + ZEXT116(1) * auVar47._0_16_;
      auStack_220 = vpshufb_avx2(auVar64,auVar48);
      auVar74 = vpsrld_avx2(auVar19,6);
      auVar54 = vpslld_avx2(auVar19,0x1a);
      auVar14 = vpaddd_avx2(auStack_220,auVar14);
      auVar44 = vpsrld_avx2(auVar19,0xb);
      auVar55 = vpslld_avx2(auVar19,0x15);
      auVar56._16_16_ = _UNK_001076f0;
      auVar56._0_16_ = _DAT_001076e0;
      auVar14 = vpaddd_avx2(auVar14,auVar56);
      auVar45 = vpsrld_avx2(auVar19,0x19);
      auVar56 = vpslld_avx2(auVar19,7);
      auVar47 = vpandn_avx2(auVar19,auVar21);
      auVar50 = vpand_avx2(auVar19,auVar20);
      auVar77 = vpsrld_avx2(auVar15,2);
      auVar46 = vpslld_avx2(auVar15,0x1e);
      auVar14 = vpaddd_avx2(auVar14,auVar74 ^ auVar54 ^ auVar44 ^ auVar55 ^ auVar45 ^ auVar56);
      auVar44 = vpsrld_avx2(auVar15,0xd);
      auVar45 = vpslld_avx2(auVar15,0x13);
      auVar14 = vpaddd_avx2(auVar14,auVar47 ^ auVar50);
      auVar50 = vpand_avx2(auVar17 ^ auVar16,auVar16 ^ auVar15);
      auVar47 = vpsrld_avx2(auVar15,0x16);
      auVar54 = vpslld_avx2(auVar15,10);
      auVar18 = vpaddd_avx2(auVar18,auVar14);
      auVar14 = vpaddd_avx2(auVar16 ^ auVar50,auVar14);
      auVar14 = vpaddd_avx2(auVar14,auVar77 ^ auVar46 ^ auVar44 ^ auVar45 ^ auVar47 ^ auVar54);
      auVar6 = vpinsrd_avx(ZEXT416(puVar31[8]),puVar35[8],1);
      auVar7 = vpinsrd_avx(ZEXT416(puVar32[8]),puVar36[8],1);
      auVar8 = vpinsrd_avx(ZEXT416(puVar33[8]),puVar37[8],1);
      auVar50 = vpunpckldq_avx2(ZEXT1632(auVar6),ZEXT1632(auVar8));
      auVar6 = vpinsrd_avx(ZEXT416(puVar34[8]),puVar38[8],1);
      auVar47 = vpunpckldq_avx2(ZEXT1632(auVar7),ZEXT1632(auVar6));
      auVar65._0_16_ = ZEXT116(0) * auVar47._0_16_ + ZEXT116(1) * auVar50._0_16_;
      auVar65._16_16_ = ZEXT116(0) * auVar50._16_16_ + ZEXT116(1) * auVar47._0_16_;
      local_200 = vpshufb_avx2(auVar65,auVar48);
      auVar77 = vpsrld_avx2(auVar18,6);
      auVar54 = vpslld_avx2(auVar18,0x1a);
      auVar21 = vpaddd_avx2(local_200,auVar21);
      auVar44 = vpsrld_avx2(auVar18,0xb);
      auVar55 = vpslld_avx2(auVar18,0x15);
      auVar74._16_16_ = _UNK_00107710;
      auVar74._0_16_ = _DAT_00107700;
      auVar21 = vpaddd_avx2(auVar21,auVar74);
      auVar45 = vpsrld_avx2(auVar18,0x19);
      auVar56 = vpslld_avx2(auVar18,7);
      auVar47 = vpandn_avx2(auVar18,auVar20);
      auVar50 = vpand_avx2(auVar18,auVar19);
      auVar74 = vpsrld_avx2(auVar14,2);
      auVar46 = vpslld_avx2(auVar14,0x1e);
      auVar21 = vpaddd_avx2(auVar21,auVar77 ^ auVar54 ^ auVar44 ^ auVar55 ^ auVar45 ^ auVar56);
      auVar44 = vpsrld_avx2(auVar14,0xd);
      auVar45 = vpslld_avx2(auVar14,0x13);
      auVar21 = vpaddd_avx2(auVar21,auVar47 ^ auVar50);
      auVar50 = vpand_avx2(auVar16 ^ auVar15,auVar15 ^ auVar14);
      auVar47 = vpsrld_avx2(auVar14,0x16);
      auVar54 = vpslld_avx2(auVar14,10);
      auVar17 = vpaddd_avx2(auVar17,auVar21);
      auVar21 = vpaddd_avx2(auVar15 ^ auVar50,auVar21);
      auVar21 = vpaddd_avx2(auVar21,auVar74 ^ auVar46 ^ auVar44 ^ auVar45 ^ auVar47 ^ auVar54);
      auVar6 = vpinsrd_avx(ZEXT416(puVar31[9]),puVar35[9],1);
      auVar7 = vpinsrd_avx(ZEXT416(puVar32[9]),puVar36[9],1);
      auVar8 = vpinsrd_avx(ZEXT416(puVar33[9]),puVar37[9],1);
      auVar50 = vpunpckldq_avx2(ZEXT1632(auVar6),ZEXT1632(auVar8));
      auVar6 = vpinsrd_avx(ZEXT416(puVar34[9]),puVar38[9],1);
      auVar47 = vpunpckldq_avx2(ZEXT1632(auVar7),ZEXT1632(auVar6));
      auVar66._0_16_ = ZEXT116(0) * auVar47._0_16_ + ZEXT116(1) * auVar50._0_16_;
      auVar66._16_16_ = ZEXT116(0) * auVar50._16_16_ + ZEXT116(1) * auVar47._0_16_;
      local_1e0 = vpshufb_avx2(auVar66,auVar48);
      auVar74 = vpsrld_avx2(auVar17,6);
      auVar54 = vpslld_avx2(auVar17,0x1a);
      auVar20 = vpaddd_avx2(local_1e0,auVar20);
      auVar44 = vpsrld_avx2(auVar17,0xb);
      auVar55 = vpslld_avx2(auVar17,0x15);
      auVar77._16_16_ = _UNK_00107730;
      auVar77._0_16_ = _DAT_00107720;
      auVar20 = vpaddd_avx2(auVar20,auVar77);
      auVar45 = vpsrld_avx2(auVar17,0x19);
      auVar56 = vpslld_avx2(auVar17,7);
      auVar47 = vpandn_avx2(auVar17,auVar19);
      auVar50 = vpand_avx2(auVar17,auVar18);
      auVar77 = vpsrld_avx2(auVar21,2);
      auVar46 = vpslld_avx2(auVar21,0x1e);
      auVar20 = vpaddd_avx2(auVar20,auVar74 ^ auVar54 ^ auVar44 ^ auVar55 ^ auVar45 ^ auVar56);
      auVar44 = vpsrld_avx2(auVar21,0xd);
      auVar45 = vpslld_avx2(auVar21,0x13);
      auVar20 = vpaddd_avx2(auVar20,auVar47 ^ auVar50);
      auVar50 = vpand_avx2(auVar15 ^ auVar14,auVar14 ^ auVar21);
      auVar47 = vpsrld_avx2(auVar21,0x16);
      auVar54 = vpslld_avx2(auVar21,10);
      auVar16 = vpaddd_avx2(auVar16,auVar20);
      auVar20 = vpaddd_avx2(auVar14 ^ auVar50,auVar20);
      auVar20 = vpaddd_avx2(auVar20,auVar77 ^ auVar46 ^ auVar44 ^ auVar45 ^ auVar47 ^ auVar54);
      auVar6 = vpinsrd_avx(ZEXT416(puVar31[10]),puVar35[10],1);
      auVar7 = vpinsrd_avx(ZEXT416(puVar32[10]),puVar36[10],1);
      auVar8 = vpinsrd_avx(ZEXT416(puVar33[10]),puVar37[10],1);
      auVar50 = vpunpckldq_avx2(ZEXT1632(auVar6),ZEXT1632(auVar8));
      auVar6 = vpinsrd_avx(ZEXT416(puVar34[10]),puVar38[10],1);
      auVar47 = vpunpckldq_avx2(ZEXT1632(auVar7),ZEXT1632(auVar6));
      auVar67._0_16_ = ZEXT116(0) * auVar47._0_16_ + ZEXT116(1) * auVar50._0_16_;
      auVar67._16_16_ = ZEXT116(0) * auVar50._16_16_ + ZEXT116(1) * auVar47._0_16_;
      local_1c0 = vpshufb_avx2(auVar67,auVar48);
      auVar74 = vpsrld_avx2(auVar16,6);
      auVar54 = vpslld_avx2(auVar16,0x1a);
      auVar19 = vpaddd_avx2(local_1c0,auVar19);
      auVar44 = vpsrld_avx2(auVar16,0xb);
      auVar55 = vpslld_avx2(auVar16,0x15);
      auVar23._16_16_ = _UNK_00107750;
      auVar23._0_16_ = _DAT_00107740;
      auVar19 = vpaddd_avx2(auVar19,auVar23);
      auVar45 = vpsrld_avx2(auVar16,0x19);
      auVar56 = vpslld_avx2(auVar16,7);
      auVar47 = vpandn_avx2(auVar16,auVar18);
      auVar50 = vpand_avx2(auVar16,auVar17);
      auVar77 = vpsrld_avx2(auVar20,2);
      auVar46 = vpslld_avx2(auVar20,0x1e);
      auVar19 = vpaddd_avx2(auVar19,auVar74 ^ auVar54 ^ auVar44 ^ auVar55 ^ auVar45 ^ auVar56);
      auVar44 = vpsrld_avx2(auVar20,0xd);
      auVar45 = vpslld_avx2(auVar20,0x13);
      auVar19 = vpaddd_avx2(auVar19,auVar47 ^ auVar50);
      auVar50 = vpand_avx2(auVar14 ^ auVar21,auVar21 ^ auVar20);
      auVar47 = vpsrld_avx2(auVar20,0x16);
      auVar54 = vpslld_avx2(auVar20,10);
      auVar15 = vpaddd_avx2(auVar15,auVar19);
      auVar19 = vpaddd_avx2(auVar21 ^ auVar50,auVar19);
      auVar19 = vpaddd_avx2(auVar19,auVar77 ^ auVar46 ^ auVar44 ^ auVar45 ^ auVar47 ^ auVar54);
      auVar6 = vpinsrd_avx(ZEXT416(puVar31[0xb]),puVar35[0xb],1);
      auVar7 = vpinsrd_avx(ZEXT416(puVar32[0xb]),puVar36[0xb],1);
      auVar8 = vpinsrd_avx(ZEXT416(puVar33[0xb]),puVar37[0xb],1);
      auVar50 = vpunpckldq_avx2(ZEXT1632(auVar6),ZEXT1632(auVar8));
      auVar6 = vpinsrd_avx(ZEXT416(puVar34[0xb]),puVar38[0xb],1);
      auVar47 = vpunpckldq_avx2(ZEXT1632(auVar7),ZEXT1632(auVar6));
      auVar68._0_16_ = ZEXT116(0) * auVar47._0_16_ + ZEXT116(1) * auVar50._0_16_;
      auVar68._16_16_ = ZEXT116(0) * auVar50._16_16_ + ZEXT116(1) * auVar47._0_16_;
      local_1a0 = vpshufb_avx2(auVar68,auVar48);
      auVar74 = vpsrld_avx2(auVar15,6);
      auVar54 = vpslld_avx2(auVar15,0x1a);
      auVar18 = vpaddd_avx2(local_1a0,auVar18);
      auVar44 = vpsrld_avx2(auVar15,0xb);
      auVar55 = vpslld_avx2(auVar15,0x15);
      auVar24._16_16_ = _UNK_00107770;
      auVar24._0_16_ = _DAT_00107760;
      auVar18 = vpaddd_avx2(auVar18,auVar24);
      auVar45 = vpsrld_avx2(auVar15,0x19);
      auVar56 = vpslld_avx2(auVar15,7);
      auVar47 = vpandn_avx2(auVar15,auVar17);
      auVar50 = vpand_avx2(auVar15,auVar16);
      auVar77 = vpsrld_avx2(auVar19,2);
      auVar46 = vpslld_avx2(auVar19,0x1e);
      auVar18 = vpaddd_avx2(auVar18,auVar74 ^ auVar54 ^ auVar44 ^ auVar55 ^ auVar45 ^ auVar56);
      auVar44 = vpsrld_avx2(auVar19,0xd);
      auVar45 = vpslld_avx2(auVar19,0x13);
      auVar18 = vpaddd_avx2(auVar18,auVar47 ^ auVar50);
      auVar50 = vpand_avx2(auVar21 ^ auVar20,auVar20 ^ auVar19);
      auVar47 = vpsrld_avx2(auVar19,0x16);
      auVar54 = vpslld_avx2(auVar19,10);
      auVar14 = vpaddd_avx2(auVar14,auVar18);
      auVar18 = vpaddd_avx2(auVar20 ^ auVar50,auVar18);
      auVar18 = vpaddd_avx2(auVar18,auVar77 ^ auVar46 ^ auVar44 ^ auVar45 ^ auVar47 ^ auVar54);
      auVar6 = vpinsrd_avx(ZEXT416(puVar31[0xc]),puVar35[0xc],1);
      auVar7 = vpinsrd_avx(ZEXT416(puVar32[0xc]),puVar36[0xc],1);
      auVar8 = vpinsrd_avx(ZEXT416(puVar33[0xc]),puVar37[0xc],1);
      auVar50 = vpunpckldq_avx2(ZEXT1632(auVar6),ZEXT1632(auVar8));
      auVar6 = vpinsrd_avx(ZEXT416(puVar34[0xc]),puVar38[0xc],1);
      auVar47 = vpunpckldq_avx2(ZEXT1632(auVar7),ZEXT1632(auVar6));
      auVar69._0_16_ = ZEXT116(0) * auVar47._0_16_ + ZEXT116(1) * auVar50._0_16_;
      auVar69._16_16_ = ZEXT116(0) * auVar50._16_16_ + ZEXT116(1) * auVar47._0_16_;
      local_180 = vpshufb_avx2(auVar69,auVar48);
      auVar74 = vpsrld_avx2(auVar14,6);
      auVar54 = vpslld_avx2(auVar14,0x1a);
      auVar17 = vpaddd_avx2(local_180,auVar17);
      auVar44 = vpsrld_avx2(auVar14,0xb);
      auVar55 = vpslld_avx2(auVar14,0x15);
      auVar25._16_16_ = _UNK_00107790;
      auVar25._0_16_ = _DAT_00107780;
      auVar17 = vpaddd_avx2(auVar17,auVar25);
      auVar45 = vpsrld_avx2(auVar14,0x19);
      auVar56 = vpslld_avx2(auVar14,7);
      auVar47 = vpandn_avx2(auVar14,auVar16);
      auVar50 = vpand_avx2(auVar14,auVar15);
      auVar77 = vpsrld_avx2(auVar18,2);
      auVar46 = vpslld_avx2(auVar18,0x1e);
      auVar17 = vpaddd_avx2(auVar17,auVar74 ^ auVar54 ^ auVar44 ^ auVar55 ^ auVar45 ^ auVar56);
      auVar44 = vpsrld_avx2(auVar18,0xd);
      auVar54 = vpslld_avx2(auVar18,0x13);
      auVar17 = vpaddd_avx2(auVar17,auVar47 ^ auVar50);
      auVar47 = vpand_avx2(auVar20 ^ auVar19,auVar19 ^ auVar18);
      auVar45 = vpsrld_avx2(auVar18,0x16);
      auVar55 = vpslld_avx2(auVar18,10);
      auVar50 = vpaddd_avx2(auVar21,auVar17);
      auVar17 = vpaddd_avx2(auVar19 ^ auVar47,auVar17);
      auVar21 = vpaddd_avx2(auVar17,auVar77 ^ auVar46 ^ auVar44 ^ auVar54 ^ auVar45 ^ auVar55);
      auVar6 = vpinsrd_avx(ZEXT416(puVar31[0xd]),puVar35[0xd],1);
      auVar7 = vpinsrd_avx(ZEXT416(puVar32[0xd]),puVar36[0xd],1);
      auVar8 = vpinsrd_avx(ZEXT416(puVar33[0xd]),puVar37[0xd],1);
      auVar17 = vpunpckldq_avx2(ZEXT1632(auVar6),ZEXT1632(auVar8));
      auVar6 = vpinsrd_avx(ZEXT416(puVar34[0xd]),puVar38[0xd],1);
      auVar47 = vpunpckldq_avx2(ZEXT1632(auVar7),ZEXT1632(auVar6));
      auVar70._0_16_ = ZEXT116(0) * auVar47._0_16_ + ZEXT116(1) * auVar17._0_16_;
      auVar70._16_16_ = ZEXT116(0) * auVar17._16_16_ + ZEXT116(1) * auVar47._0_16_;
      local_160 = vpshufb_avx2(auVar70,auVar48);
      auVar74 = vpsrld_avx2(auVar50,6);
      auVar54 = vpslld_avx2(auVar50,0x1a);
      auVar16 = vpaddd_avx2(local_160,auVar16);
      auVar44 = vpsrld_avx2(auVar50,0xb);
      auVar55 = vpslld_avx2(auVar50,0x15);
      auVar17._16_16_ = _UNK_001077b0;
      auVar17._0_16_ = _DAT_001077a0;
      auVar16 = vpaddd_avx2(auVar16,auVar17);
      auVar45 = vpsrld_avx2(auVar50,0x19);
      auVar56 = vpslld_avx2(auVar50,7);
      auVar47 = vpandn_avx2(auVar50,auVar15);
      auVar17 = vpand_avx2(auVar50,auVar14);
      auVar77 = vpsrld_avx2(auVar21,2);
      auVar46 = vpslld_avx2(auVar21,0x1e);
      auVar16 = vpaddd_avx2(auVar16,auVar74 ^ auVar54 ^ auVar44 ^ auVar55 ^ auVar45 ^ auVar56);
      auVar44 = vpsrld_avx2(auVar21,0xd);
      auVar45 = vpslld_avx2(auVar21,0x13);
      auVar16 = vpaddd_avx2(auVar16,auVar47 ^ auVar17);
      auVar17 = vpand_avx2(auVar19 ^ auVar18,auVar18 ^ auVar21);
      auVar47 = vpsrld_avx2(auVar21,0x16);
      auVar54 = vpslld_avx2(auVar21,10);
      auVar20 = vpaddd_avx2(auVar20,auVar16);
      auVar16 = vpaddd_avx2(auVar18 ^ auVar17,auVar16);
      auVar16 = vpaddd_avx2(auVar16,auVar77 ^ auVar46 ^ auVar44 ^ auVar45 ^ auVar47 ^ auVar54);
      auVar6 = vpinsrd_avx(ZEXT416(puVar31[0xe]),puVar35[0xe],1);
      auVar7 = vpinsrd_avx(ZEXT416(puVar32[0xe]),puVar36[0xe],1);
      auVar8 = vpinsrd_avx(ZEXT416(puVar33[0xe]),puVar37[0xe],1);
      auVar17 = vpunpckldq_avx2(ZEXT1632(auVar6),ZEXT1632(auVar8));
      auVar6 = vpinsrd_avx(ZEXT416(puVar34[0xe]),puVar38[0xe],1);
      auVar47 = vpunpckldq_avx2(ZEXT1632(auVar7),ZEXT1632(auVar6));
      auVar71._0_16_ = ZEXT116(0) * auVar47._0_16_ + ZEXT116(1) * auVar17._0_16_;
      auVar71._16_16_ = ZEXT116(0) * auVar17._16_16_ + ZEXT116(1) * auVar47._0_16_;
      local_140 = vpshufb_avx2(auVar71,auVar48);
      auVar74 = vpsrld_avx2(auVar20,6);
      auVar54 = vpslld_avx2(auVar20,0x1a);
      auVar15 = vpaddd_avx2(local_140,auVar15);
      auVar44 = vpsrld_avx2(auVar20,0xb);
      auVar55 = vpslld_avx2(auVar20,0x15);
      auVar26._16_16_ = _UNK_001077d0;
      auVar26._0_16_ = _DAT_001077c0;
      auVar15 = vpaddd_avx2(auVar15,auVar26);
      auVar45 = vpsrld_avx2(auVar20,0x19);
      auVar56 = vpslld_avx2(auVar20,7);
      auVar47 = vpandn_avx2(auVar20,auVar14);
      auVar17 = vpand_avx2(auVar20,auVar50);
      auVar77 = vpsrld_avx2(auVar16,2);
      auVar46 = vpslld_avx2(auVar16,0x1e);
      auVar15 = vpaddd_avx2(auVar15,auVar74 ^ auVar54 ^ auVar44 ^ auVar55 ^ auVar45 ^ auVar56);
      auVar44 = vpsrld_avx2(auVar16,0xd);
      auVar45 = vpslld_avx2(auVar16,0x13);
      auVar15 = vpaddd_avx2(auVar15,auVar47 ^ auVar17);
      auVar17 = vpand_avx2(auVar18 ^ auVar21,auVar21 ^ auVar16);
      auVar47 = vpsrld_avx2(auVar16,0x16);
      auVar54 = vpslld_avx2(auVar16,10);
      auVar19 = vpaddd_avx2(auVar19,auVar15);
      auVar15 = vpaddd_avx2(auVar21 ^ auVar17,auVar15);
      auVar17 = vpaddd_avx2(auVar15,auVar77 ^ auVar46 ^ auVar44 ^ auVar45 ^ auVar47 ^ auVar54);
      puVar5 = puVar31 + 0xf;
      puVar31 = puVar31 + 0x10;
      puVar1 = puVar32 + 0xf;
      puVar32 = puVar32 + 0x10;
      puVar2 = puVar33 + 0xf;
      puVar33 = puVar33 + 0x10;
      puVar3 = puVar34 + 0xf;
      puVar34 = puVar34 + 0x10;
      auVar6 = vpinsrd_avx(ZEXT416(*puVar5),puVar35[0xf],1);
      puVar35 = puVar35 + 0x10;
      auVar7 = vpinsrd_avx(ZEXT416(*puVar1),puVar36[0xf],1);
      puVar36 = puVar36 + 0x10;
      auVar8 = vpinsrd_avx(ZEXT416(*puVar2),puVar37[0xf],1);
      puVar37 = puVar37 + 0x10;
      auVar15 = vpunpckldq_avx2(ZEXT1632(auVar6),ZEXT1632(auVar8));
      auVar6 = vpinsrd_avx(ZEXT416(*puVar3),puVar38[0xf],1);
      puVar38 = puVar38 + 0x10;
      auVar47 = vpunpckldq_avx2(ZEXT1632(auVar7),ZEXT1632(auVar6));
      auVar72._0_16_ = ZEXT116(0) * auVar47._0_16_ + ZEXT116(1) * auVar15._0_16_;
      auVar72._16_16_ = ZEXT116(0) * auVar15._16_16_ + ZEXT116(1) * auVar47._0_16_;
      local_120 = vpshufb_avx2(auVar72,auVar48);
      auVar74 = vpsrld_avx2(auVar19,6);
      auVar54 = vpslld_avx2(auVar19,0x1a);
      auVar14 = vpaddd_avx2(local_120,auVar14);
      auVar44 = vpsrld_avx2(auVar19,0xb);
      auVar55 = vpslld_avx2(auVar19,0x15);
      auVar15._16_16_ = _UNK_001077f0;
      auVar15._0_16_ = _DAT_001077e0;
      auVar14 = vpaddd_avx2(auVar14,auVar15);
      auVar45 = vpsrld_avx2(auVar19,0x19);
      auVar56 = vpslld_avx2(auVar19,7);
      auVar48 = vpandn_avx2(auVar19,auVar50);
      auVar15 = vpand_avx2(auVar19,auVar20);
      auVar77 = vpsrld_avx2(auVar17,2);
      auVar46 = vpslld_avx2(auVar17,0x1e);
      auVar47 = auVar16 ^ auVar17;
      auVar14 = vpaddd_avx2(auVar14,auVar74 ^ auVar54 ^ auVar44 ^ auVar55 ^ auVar45 ^ auVar56);
      auVar44 = vpsrld_avx2(auVar17,0xd);
      auVar54 = vpslld_avx2(auVar17,0x13);
      auVar14 = vpaddd_avx2(auVar14,auVar48 ^ auVar15);
      auVar48 = vpand_avx2(auVar21 ^ auVar16,auVar47);
      auVar45 = vpsrld_avx2(auVar17,0x16);
      auVar55 = vpslld_avx2(auVar17,10);
      auVar15 = vpaddd_avx2(auVar18,auVar14);
      auVar14 = vpaddd_avx2(auVar16 ^ auVar48,auVar14);
      auVar14 = vpaddd_avx2(auVar14,auVar77 ^ auVar46 ^ auVar44 ^ auVar54 ^ auVar45 ^ auVar55);
      iVar27 = 3;
      pauVar30 = (undefined1 (*) [32])&DAT_00107780;
      do {
        auVar18 = vpaddd_avx2(auVar49,local_1e0);
        auVar56 = vpsrld_avx2(auStack_2e0,3);
        auVar48 = vpsrld_avx2(auStack_2e0,7);
        auVar45 = vpslld_avx2(auStack_2e0,0x19);
        auVar49 = vpsrld_avx2(auStack_2e0,0x12);
        auVar46 = vpslld_avx2(auStack_2e0,0xe);
        auVar55 = vpsrld_avx2(local_140,10);
        auVar44 = vpsrld_avx2(local_140,0x11);
        auVar54 = vpslld_avx2(local_140,0xf);
        auVar18 = vpaddd_avx2(auVar18,auVar56 ^ auVar48 ^ auVar45 ^ auVar49 ^ auVar46);
        auVar48 = vpsrld_avx2(local_140,0x13);
        auVar49 = vpslld_avx2(local_140,0xd);
        auVar49 = vpaddd_avx2(auVar18,auVar55 ^ auVar44 ^ auVar54 ^ auVar48 ^ auVar49);
        auVar74 = vpsrld_avx2(auVar15,6);
        auVar54 = vpslld_avx2(auVar15,0x1a);
        auVar18 = vpaddd_avx2(auVar49,auVar50);
        auVar44 = vpsrld_avx2(auVar15,0xb);
        auVar55 = vpslld_avx2(auVar15,0x15);
        auVar18 = vpaddd_avx2(auVar18,pauVar30[4]);
        auVar45 = vpsrld_avx2(auVar15,0x19);
        auVar56 = vpslld_avx2(auVar15,7);
        auVar50 = vpandn_avx2(auVar15,auVar20);
        auVar48 = vpand_avx2(auVar15,auVar19);
        auVar77 = vpsrld_avx2(auVar14,2);
        auVar46 = vpslld_avx2(auVar14,0x1e);
        auVar18 = vpaddd_avx2(auVar18,auVar74 ^ auVar54 ^ auVar44 ^ auVar55 ^ auVar45 ^ auVar56);
        auVar44 = vpsrld_avx2(auVar14,0xd);
        auVar45 = vpslld_avx2(auVar14,0x13);
        auVar18 = vpaddd_avx2(auVar18,auVar50 ^ auVar48);
        auVar48 = vpand_avx2(auVar47,auVar17 ^ auVar14);
        auVar50 = vpsrld_avx2(auVar14,0x16);
        auVar47 = vpslld_avx2(auVar14,10);
        auVar21 = vpaddd_avx2(auVar21,auVar18);
        auVar18 = vpaddd_avx2(auVar17 ^ auVar48,auVar18);
        auVar18 = vpaddd_avx2(auVar18,auVar77 ^ auVar46 ^ auVar44 ^ auVar45 ^ auVar50 ^ auVar47);
        auVar48 = vpaddd_avx2(auStack_2e0,local_1c0);
        auVar56 = vpsrld_avx2(auStack_2c0,3);
        auVar50 = vpsrld_avx2(auStack_2c0,7);
        auVar45 = vpslld_avx2(auStack_2c0,0x19);
        auVar47 = vpsrld_avx2(auStack_2c0,0x12);
        auVar46 = vpslld_avx2(auStack_2c0,0xe);
        auVar55 = vpsrld_avx2(local_120,10);
        auVar44 = vpsrld_avx2(local_120,0x11);
        auVar54 = vpslld_avx2(local_120,0xf);
        auVar48 = vpaddd_avx2(auVar48,auVar56 ^ auVar50 ^ auVar45 ^ auVar47 ^ auVar46);
        auVar50 = vpsrld_avx2(local_120,0x13);
        auVar47 = vpslld_avx2(local_120,0xd);
        auStack_2e0 = vpaddd_avx2(auVar48,auVar55 ^ auVar44 ^ auVar54 ^ auVar50 ^ auVar47);
        auVar56 = vpsrld_avx2(auVar21,6);
        auVar46 = vpslld_avx2(auVar21,0x1a);
        auVar20 = vpaddd_avx2(auStack_2e0,auVar20);
        auVar47 = vpsrld_avx2(auVar21,0xb);
        auVar54 = vpslld_avx2(auVar21,0x15);
        auVar20 = vpaddd_avx2(auVar20,pauVar30[5]);
        auVar44 = vpsrld_avx2(auVar21,0x19);
        auVar55 = vpslld_avx2(auVar21,7);
        auVar50 = vpandn_avx2(auVar21,auVar19);
        auVar48 = vpand_avx2(auVar21,auVar15);
        auVar74 = vpsrld_avx2(auVar18,2);
        auVar45 = vpslld_avx2(auVar18,0x1e);
        auVar20 = vpaddd_avx2(auVar20,auVar56 ^ auVar46 ^ auVar47 ^ auVar54 ^ auVar44 ^ auVar55);
        auVar47 = vpsrld_avx2(auVar18,0xd);
        auVar44 = vpslld_avx2(auVar18,0x13);
        auVar20 = vpaddd_avx2(auVar20,auVar50 ^ auVar48);
        auVar48 = vpand_avx2(auVar17 ^ auVar14,auVar14 ^ auVar18);
        auVar50 = vpsrld_avx2(auVar18,0x16);
        auVar46 = vpslld_avx2(auVar18,10);
        auVar16 = vpaddd_avx2(auVar16,auVar20);
        auVar20 = vpaddd_avx2(auVar14 ^ auVar48,auVar20);
        auVar20 = vpaddd_avx2(auVar20,auVar74 ^ auVar45 ^ auVar47 ^ auVar44 ^ auVar50 ^ auVar46);
        auVar48 = vpaddd_avx2(auStack_2c0,local_1a0);
        auVar56 = vpsrld_avx2(auStack_2a0,3);
        auVar50 = vpsrld_avx2(auStack_2a0,7);
        auVar45 = vpslld_avx2(auStack_2a0,0x19);
        auVar47 = vpsrld_avx2(auStack_2a0,0x12);
        auVar46 = vpslld_avx2(auStack_2a0,0xe);
        auVar55 = vpsrld_avx2(auVar49,10);
        auVar44 = vpsrld_avx2(auVar49,0x11);
        auVar54 = vpslld_avx2(auVar49,0xf);
        auVar48 = vpaddd_avx2(auVar48,auVar56 ^ auVar50 ^ auVar45 ^ auVar47 ^ auVar46);
        auVar50 = vpsrld_avx2(auVar49,0x13);
        auVar47 = vpslld_avx2(auVar49,0xd);
        auStack_2c0 = vpaddd_avx2(auVar48,auVar55 ^ auVar44 ^ auVar54 ^ auVar50 ^ auVar47);
        auVar56 = vpsrld_avx2(auVar16,6);
        auVar46 = vpslld_avx2(auVar16,0x1a);
        auVar19 = vpaddd_avx2(auStack_2c0,auVar19);
        auVar47 = vpsrld_avx2(auVar16,0xb);
        auVar54 = vpslld_avx2(auVar16,0x15);
        auVar19 = vpaddd_avx2(auVar19,pauVar30[6]);
        auVar44 = vpsrld_avx2(auVar16,0x19);
        auVar55 = vpslld_avx2(auVar16,7);
        auVar50 = vpandn_avx2(auVar16,auVar15);
        auVar48 = vpand_avx2(auVar16,auVar21);
        auVar74 = vpsrld_avx2(auVar20,2);
        auVar45 = vpslld_avx2(auVar20,0x1e);
        auVar19 = vpaddd_avx2(auVar19,auVar56 ^ auVar46 ^ auVar47 ^ auVar54 ^ auVar44 ^ auVar55);
        auVar47 = vpsrld_avx2(auVar20,0xd);
        auVar44 = vpslld_avx2(auVar20,0x13);
        auVar19 = vpaddd_avx2(auVar19,auVar50 ^ auVar48);
        auVar48 = vpand_avx2(auVar14 ^ auVar18,auVar18 ^ auVar20);
        auVar50 = vpsrld_avx2(auVar20,0x16);
        auVar46 = vpslld_avx2(auVar20,10);
        auVar17 = vpaddd_avx2(auVar17,auVar19);
        auVar19 = vpaddd_avx2(auVar18 ^ auVar48,auVar19);
        auVar19 = vpaddd_avx2(auVar19,auVar74 ^ auVar45 ^ auVar47 ^ auVar44 ^ auVar50 ^ auVar46);
        auVar48 = vpaddd_avx2(auStack_2a0,local_180);
        auVar56 = vpsrld_avx2(auStack_280,3);
        auVar50 = vpsrld_avx2(auStack_280,7);
        auVar45 = vpslld_avx2(auStack_280,0x19);
        auVar47 = vpsrld_avx2(auStack_280,0x12);
        auVar46 = vpslld_avx2(auStack_280,0xe);
        auVar55 = vpsrld_avx2(auStack_2e0,10);
        auVar44 = vpsrld_avx2(auStack_2e0,0x11);
        auVar54 = vpslld_avx2(auStack_2e0,0xf);
        auVar48 = vpaddd_avx2(auVar48,auVar56 ^ auVar50 ^ auVar45 ^ auVar47 ^ auVar46);
        auVar50 = vpsrld_avx2(auStack_2e0,0x13);
        auVar47 = vpslld_avx2(auStack_2e0,0xd);
        auStack_2a0 = vpaddd_avx2(auVar48,auVar55 ^ auVar44 ^ auVar54 ^ auVar50 ^ auVar47);
        auVar56 = vpsrld_avx2(auVar17,6);
        auVar46 = vpslld_avx2(auVar17,0x1a);
        auVar15 = vpaddd_avx2(auStack_2a0,auVar15);
        auVar47 = vpsrld_avx2(auVar17,0xb);
        auVar54 = vpslld_avx2(auVar17,0x15);
        auVar15 = vpaddd_avx2(auVar15,pauVar30[7]);
        auVar44 = vpsrld_avx2(auVar17,0x19);
        auVar55 = vpslld_avx2(auVar17,7);
        auVar50 = vpandn_avx2(auVar17,auVar21);
        auVar48 = vpand_avx2(auVar17,auVar16);
        auVar74 = vpsrld_avx2(auVar19,2);
        auVar45 = vpslld_avx2(auVar19,0x1e);
        auVar15 = vpaddd_avx2(auVar15,auVar56 ^ auVar46 ^ auVar47 ^ auVar54 ^ auVar44 ^ auVar55);
        auVar47 = vpsrld_avx2(auVar19,0xd);
        auVar44 = vpslld_avx2(auVar19,0x13);
        auVar15 = vpaddd_avx2(auVar15,auVar50 ^ auVar48);
        auVar48 = vpand_avx2(auVar18 ^ auVar20,auVar20 ^ auVar19);
        auVar50 = vpsrld_avx2(auVar19,0x16);
        auVar46 = vpslld_avx2(auVar19,10);
        auVar14 = vpaddd_avx2(auVar14,auVar15);
        auVar15 = vpaddd_avx2(auVar20 ^ auVar48,auVar15);
        auVar15 = vpaddd_avx2(auVar15,auVar74 ^ auVar45 ^ auVar47 ^ auVar44 ^ auVar50 ^ auVar46);
        auVar48 = vpaddd_avx2(auStack_280,local_160);
        auVar56 = vpsrld_avx2(auStack_260,3);
        auVar50 = vpsrld_avx2(auStack_260,7);
        auVar45 = vpslld_avx2(auStack_260,0x19);
        auVar47 = vpsrld_avx2(auStack_260,0x12);
        auVar46 = vpslld_avx2(auStack_260,0xe);
        auVar55 = vpsrld_avx2(auStack_2c0,10);
        auVar44 = vpsrld_avx2(auStack_2c0,0x11);
        auVar54 = vpslld_avx2(auStack_2c0,0xf);
        auVar48 = vpaddd_avx2(auVar48,auVar56 ^ auVar50 ^ auVar45 ^ auVar47 ^ auVar46);
        auVar50 = vpsrld_avx2(auStack_2c0,0x13);
        auVar47 = vpslld_avx2(auStack_2c0,0xd);
        auStack_280 = vpaddd_avx2(auVar48,auVar55 ^ auVar44 ^ auVar54 ^ auVar50 ^ auVar47);
        auVar56 = vpsrld_avx2(auVar14,6);
        auVar46 = vpslld_avx2(auVar14,0x1a);
        auVar21 = vpaddd_avx2(auStack_280,auVar21);
        auVar47 = vpsrld_avx2(auVar14,0xb);
        auVar54 = vpslld_avx2(auVar14,0x15);
        auVar21 = vpaddd_avx2(auVar21,pauVar30[8]);
        auVar44 = vpsrld_avx2(auVar14,0x19);
        auVar55 = vpslld_avx2(auVar14,7);
        auVar50 = vpandn_avx2(auVar14,auVar16);
        auVar48 = vpand_avx2(auVar14,auVar17);
        auVar74 = vpsrld_avx2(auVar15,2);
        auVar45 = vpslld_avx2(auVar15,0x1e);
        auVar21 = vpaddd_avx2(auVar21,auVar56 ^ auVar46 ^ auVar47 ^ auVar54 ^ auVar44 ^ auVar55);
        auVar47 = vpsrld_avx2(auVar15,0xd);
        auVar44 = vpslld_avx2(auVar15,0x13);
        auVar21 = vpaddd_avx2(auVar21,auVar50 ^ auVar48);
        auVar48 = vpand_avx2(auVar20 ^ auVar19,auVar19 ^ auVar15);
        auVar50 = vpsrld_avx2(auVar15,0x16);
        auVar46 = vpslld_avx2(auVar15,10);
        auVar18 = vpaddd_avx2(auVar18,auVar21);
        auVar21 = vpaddd_avx2(auVar19 ^ auVar48,auVar21);
        auVar21 = vpaddd_avx2(auVar21,auVar74 ^ auVar45 ^ auVar47 ^ auVar44 ^ auVar50 ^ auVar46);
        auVar48 = vpaddd_avx2(auStack_260,local_140);
        auVar56 = vpsrld_avx2(auStack_240,3);
        auVar50 = vpsrld_avx2(auStack_240,7);
        auVar45 = vpslld_avx2(auStack_240,0x19);
        auVar47 = vpsrld_avx2(auStack_240,0x12);
        auVar46 = vpslld_avx2(auStack_240,0xe);
        auVar55 = vpsrld_avx2(auStack_2a0,10);
        auVar44 = vpsrld_avx2(auStack_2a0,0x11);
        auVar54 = vpslld_avx2(auStack_2a0,0xf);
        auVar48 = vpaddd_avx2(auVar48,auVar56 ^ auVar50 ^ auVar45 ^ auVar47 ^ auVar46);
        auVar50 = vpsrld_avx2(auStack_2a0,0x13);
        auVar47 = vpslld_avx2(auStack_2a0,0xd);
        auStack_260 = vpaddd_avx2(auVar48,auVar55 ^ auVar44 ^ auVar54 ^ auVar50 ^ auVar47);
        auVar56 = vpsrld_avx2(auVar18,6);
        auVar46 = vpslld_avx2(auVar18,0x1a);
        auVar16 = vpaddd_avx2(auStack_260,auVar16);
        auVar47 = vpsrld_avx2(auVar18,0xb);
        auVar54 = vpslld_avx2(auVar18,0x15);
        auVar16 = vpaddd_avx2(auVar16,pauVar30[9]);
        auVar44 = vpsrld_avx2(auVar18,0x19);
        auVar55 = vpslld_avx2(auVar18,7);
        auVar50 = vpandn_avx2(auVar18,auVar17);
        auVar48 = vpand_avx2(auVar18,auVar14);
        auVar74 = vpsrld_avx2(auVar21,2);
        auVar45 = vpslld_avx2(auVar21,0x1e);
        auVar16 = vpaddd_avx2(auVar16,auVar56 ^ auVar46 ^ auVar47 ^ auVar54 ^ auVar44 ^ auVar55);
        auVar47 = vpsrld_avx2(auVar21,0xd);
        auVar44 = vpslld_avx2(auVar21,0x13);
        auVar16 = vpaddd_avx2(auVar16,auVar50 ^ auVar48);
        auVar48 = vpand_avx2(auVar19 ^ auVar15,auVar15 ^ auVar21);
        auVar50 = vpsrld_avx2(auVar21,0x16);
        auVar46 = vpslld_avx2(auVar21,10);
        auVar20 = vpaddd_avx2(auVar20,auVar16);
        auVar16 = vpaddd_avx2(auVar15 ^ auVar48,auVar16);
        auVar16 = vpaddd_avx2(auVar16,auVar74 ^ auVar45 ^ auVar47 ^ auVar44 ^ auVar50 ^ auVar46);
        auVar48 = vpaddd_avx2(auStack_240,local_120);
        auVar56 = vpsrld_avx2(auStack_220,3);
        auVar50 = vpsrld_avx2(auStack_220,7);
        auVar45 = vpslld_avx2(auStack_220,0x19);
        auVar47 = vpsrld_avx2(auStack_220,0x12);
        auVar46 = vpslld_avx2(auStack_220,0xe);
        auVar55 = vpsrld_avx2(auStack_280,10);
        auVar44 = vpsrld_avx2(auStack_280,0x11);
        auVar54 = vpslld_avx2(auStack_280,0xf);
        auVar48 = vpaddd_avx2(auVar48,auVar56 ^ auVar50 ^ auVar45 ^ auVar47 ^ auVar46);
        auVar50 = vpsrld_avx2(auStack_280,0x13);
        auVar47 = vpslld_avx2(auStack_280,0xd);
        auStack_240 = vpaddd_avx2(auVar48,auVar55 ^ auVar44 ^ auVar54 ^ auVar50 ^ auVar47);
        auVar56 = vpsrld_avx2(auVar20,6);
        auVar46 = vpslld_avx2(auVar20,0x1a);
        auVar17 = vpaddd_avx2(auStack_240,auVar17);
        auVar47 = vpsrld_avx2(auVar20,0xb);
        auVar54 = vpslld_avx2(auVar20,0x15);
        auVar17 = vpaddd_avx2(auVar17,pauVar30[10]);
        auVar44 = vpsrld_avx2(auVar20,0x19);
        auVar55 = vpslld_avx2(auVar20,7);
        auVar50 = vpandn_avx2(auVar20,auVar14);
        auVar48 = vpand_avx2(auVar20,auVar18);
        auVar74 = vpsrld_avx2(auVar16,2);
        auVar45 = vpslld_avx2(auVar16,0x1e);
        auVar17 = vpaddd_avx2(auVar17,auVar56 ^ auVar46 ^ auVar47 ^ auVar54 ^ auVar44 ^ auVar55);
        auVar47 = vpsrld_avx2(auVar16,0xd);
        auVar44 = vpslld_avx2(auVar16,0x13);
        auVar17 = vpaddd_avx2(auVar17,auVar50 ^ auVar48);
        auVar48 = vpand_avx2(auVar15 ^ auVar21,auVar21 ^ auVar16);
        auVar50 = vpsrld_avx2(auVar16,0x16);
        auVar46 = vpslld_avx2(auVar16,10);
        auVar19 = vpaddd_avx2(auVar19,auVar17);
        auVar17 = vpaddd_avx2(auVar21 ^ auVar48,auVar17);
        auVar17 = vpaddd_avx2(auVar17,auVar74 ^ auVar45 ^ auVar47 ^ auVar44 ^ auVar50 ^ auVar46);
        auVar48 = vpaddd_avx2(auStack_220,auVar49);
        auVar56 = vpsrld_avx2(local_200,3);
        auVar50 = vpsrld_avx2(local_200,7);
        auVar45 = vpslld_avx2(local_200,0x19);
        auVar47 = vpsrld_avx2(local_200,0x12);
        auVar46 = vpslld_avx2(local_200,0xe);
        auVar55 = vpsrld_avx2(auStack_260,10);
        auVar44 = vpsrld_avx2(auStack_260,0x11);
        auVar54 = vpslld_avx2(auStack_260,0xf);
        auVar48 = vpaddd_avx2(auVar48,auVar56 ^ auVar50 ^ auVar45 ^ auVar47 ^ auVar46);
        auVar50 = vpsrld_avx2(auStack_260,0x13);
        auVar47 = vpslld_avx2(auStack_260,0xd);
        auStack_220 = vpaddd_avx2(auVar48,auVar55 ^ auVar44 ^ auVar54 ^ auVar50 ^ auVar47);
        auVar56 = vpsrld_avx2(auVar19,6);
        auVar46 = vpslld_avx2(auVar19,0x1a);
        auVar14 = vpaddd_avx2(auStack_220,auVar14);
        auVar47 = vpsrld_avx2(auVar19,0xb);
        auVar54 = vpslld_avx2(auVar19,0x15);
        auVar14 = vpaddd_avx2(auVar14,pauVar30[0xb]);
        auVar44 = vpsrld_avx2(auVar19,0x19);
        auVar55 = vpslld_avx2(auVar19,7);
        auVar50 = vpandn_avx2(auVar19,auVar18);
        auVar48 = vpand_avx2(auVar19,auVar20);
        auVar74 = vpsrld_avx2(auVar17,2);
        auVar45 = vpslld_avx2(auVar17,0x1e);
        auVar14 = vpaddd_avx2(auVar14,auVar56 ^ auVar46 ^ auVar47 ^ auVar54 ^ auVar44 ^ auVar55);
        auVar47 = vpsrld_avx2(auVar17,0xd);
        auVar44 = vpslld_avx2(auVar17,0x13);
        auVar14 = vpaddd_avx2(auVar14,auVar50 ^ auVar48);
        auVar48 = vpand_avx2(auVar21 ^ auVar16,auVar16 ^ auVar17);
        auVar50 = vpsrld_avx2(auVar17,0x16);
        auVar46 = vpslld_avx2(auVar17,10);
        auVar15 = vpaddd_avx2(auVar15,auVar14);
        auVar14 = vpaddd_avx2(auVar16 ^ auVar48,auVar14);
        auVar14 = vpaddd_avx2(auVar14,auVar74 ^ auVar45 ^ auVar47 ^ auVar44 ^ auVar50 ^ auVar46);
        auVar48 = vpaddd_avx2(local_200,auStack_2e0);
        auVar56 = vpsrld_avx2(local_1e0,3);
        auVar50 = vpsrld_avx2(local_1e0,7);
        auVar45 = vpslld_avx2(local_1e0,0x19);
        auVar47 = vpsrld_avx2(local_1e0,0x12);
        auVar46 = vpslld_avx2(local_1e0,0xe);
        auVar55 = vpsrld_avx2(auStack_240,10);
        auVar44 = vpsrld_avx2(auStack_240,0x11);
        auVar54 = vpslld_avx2(auStack_240,0xf);
        auVar48 = vpaddd_avx2(auVar48,auVar56 ^ auVar50 ^ auVar45 ^ auVar47 ^ auVar46);
        auVar50 = vpsrld_avx2(auStack_240,0x13);
        auVar47 = vpslld_avx2(auStack_240,0xd);
        local_200 = vpaddd_avx2(auVar48,auVar55 ^ auVar44 ^ auVar54 ^ auVar50 ^ auVar47);
        auVar56 = vpsrld_avx2(auVar15,6);
        auVar46 = vpslld_avx2(auVar15,0x1a);
        auVar18 = vpaddd_avx2(local_200,auVar18);
        auVar47 = vpsrld_avx2(auVar15,0xb);
        auVar54 = vpslld_avx2(auVar15,0x15);
        auVar18 = vpaddd_avx2(auVar18,pauVar30[0xc]);
        auVar44 = vpsrld_avx2(auVar15,0x19);
        auVar55 = vpslld_avx2(auVar15,7);
        auVar50 = vpandn_avx2(auVar15,auVar20);
        auVar48 = vpand_avx2(auVar15,auVar19);
        auVar74 = vpsrld_avx2(auVar14,2);
        auVar45 = vpslld_avx2(auVar14,0x1e);
        auVar18 = vpaddd_avx2(auVar18,auVar56 ^ auVar46 ^ auVar47 ^ auVar54 ^ auVar44 ^ auVar55);
        auVar47 = vpsrld_avx2(auVar14,0xd);
        auVar44 = vpslld_avx2(auVar14,0x13);
        auVar18 = vpaddd_avx2(auVar18,auVar50 ^ auVar48);
        auVar48 = vpand_avx2(auVar16 ^ auVar17,auVar17 ^ auVar14);
        auVar50 = vpsrld_avx2(auVar14,0x16);
        auVar46 = vpslld_avx2(auVar14,10);
        auVar21 = vpaddd_avx2(auVar21,auVar18);
        auVar18 = vpaddd_avx2(auVar17 ^ auVar48,auVar18);
        auVar18 = vpaddd_avx2(auVar18,auVar74 ^ auVar45 ^ auVar47 ^ auVar44 ^ auVar50 ^ auVar46);
        auVar48 = vpaddd_avx2(local_1e0,auStack_2c0);
        auVar56 = vpsrld_avx2(local_1c0,3);
        auVar50 = vpsrld_avx2(local_1c0,7);
        auVar45 = vpslld_avx2(local_1c0,0x19);
        auVar47 = vpsrld_avx2(local_1c0,0x12);
        auVar46 = vpslld_avx2(local_1c0,0xe);
        auVar55 = vpsrld_avx2(auStack_220,10);
        auVar44 = vpsrld_avx2(auStack_220,0x11);
        auVar54 = vpslld_avx2(auStack_220,0xf);
        auVar48 = vpaddd_avx2(auVar48,auVar56 ^ auVar50 ^ auVar45 ^ auVar47 ^ auVar46);
        auVar50 = vpsrld_avx2(auStack_220,0x13);
        auVar47 = vpslld_avx2(auStack_220,0xd);
        local_1e0 = vpaddd_avx2(auVar48,auVar55 ^ auVar44 ^ auVar54 ^ auVar50 ^ auVar47);
        auVar56 = vpsrld_avx2(auVar21,6);
        auVar46 = vpslld_avx2(auVar21,0x1a);
        auVar20 = vpaddd_avx2(local_1e0,auVar20);
        auVar47 = vpsrld_avx2(auVar21,0xb);
        auVar54 = vpslld_avx2(auVar21,0x15);
        auVar20 = vpaddd_avx2(auVar20,pauVar30[0xd]);
        auVar44 = vpsrld_avx2(auVar21,0x19);
        auVar55 = vpslld_avx2(auVar21,7);
        auVar50 = vpandn_avx2(auVar21,auVar19);
        auVar48 = vpand_avx2(auVar21,auVar15);
        auVar74 = vpsrld_avx2(auVar18,2);
        auVar45 = vpslld_avx2(auVar18,0x1e);
        auVar20 = vpaddd_avx2(auVar20,auVar56 ^ auVar46 ^ auVar47 ^ auVar54 ^ auVar44 ^ auVar55);
        auVar47 = vpsrld_avx2(auVar18,0xd);
        auVar44 = vpslld_avx2(auVar18,0x13);
        auVar20 = vpaddd_avx2(auVar20,auVar50 ^ auVar48);
        auVar48 = vpand_avx2(auVar17 ^ auVar14,auVar14 ^ auVar18);
        auVar50 = vpsrld_avx2(auVar18,0x16);
        auVar46 = vpslld_avx2(auVar18,10);
        auVar16 = vpaddd_avx2(auVar16,auVar20);
        auVar20 = vpaddd_avx2(auVar14 ^ auVar48,auVar20);
        auVar20 = vpaddd_avx2(auVar20,auVar74 ^ auVar45 ^ auVar47 ^ auVar44 ^ auVar50 ^ auVar46);
        auVar48 = vpaddd_avx2(local_1c0,auStack_2a0);
        auVar56 = vpsrld_avx2(local_1a0,3);
        auVar50 = vpsrld_avx2(local_1a0,7);
        auVar45 = vpslld_avx2(local_1a0,0x19);
        auVar47 = vpsrld_avx2(local_1a0,0x12);
        auVar46 = vpslld_avx2(local_1a0,0xe);
        auVar55 = vpsrld_avx2(local_200,10);
        auVar44 = vpsrld_avx2(local_200,0x11);
        auVar54 = vpslld_avx2(local_200,0xf);
        auVar48 = vpaddd_avx2(auVar48,auVar56 ^ auVar50 ^ auVar45 ^ auVar47 ^ auVar46);
        auVar50 = vpsrld_avx2(local_200,0x13);
        auVar47 = vpslld_avx2(local_200,0xd);
        local_1c0 = vpaddd_avx2(auVar48,auVar55 ^ auVar44 ^ auVar54 ^ auVar50 ^ auVar47);
        auVar56 = vpsrld_avx2(auVar16,6);
        auVar46 = vpslld_avx2(auVar16,0x1a);
        auVar19 = vpaddd_avx2(local_1c0,auVar19);
        auVar47 = vpsrld_avx2(auVar16,0xb);
        auVar54 = vpslld_avx2(auVar16,0x15);
        auVar19 = vpaddd_avx2(auVar19,pauVar30[0xe]);
        auVar44 = vpsrld_avx2(auVar16,0x19);
        auVar55 = vpslld_avx2(auVar16,7);
        auVar50 = vpandn_avx2(auVar16,auVar15);
        auVar48 = vpand_avx2(auVar16,auVar21);
        auVar74 = vpsrld_avx2(auVar20,2);
        auVar45 = vpslld_avx2(auVar20,0x1e);
        auVar19 = vpaddd_avx2(auVar19,auVar56 ^ auVar46 ^ auVar47 ^ auVar54 ^ auVar44 ^ auVar55);
        auVar47 = vpsrld_avx2(auVar20,0xd);
        auVar44 = vpslld_avx2(auVar20,0x13);
        auVar19 = vpaddd_avx2(auVar19,auVar50 ^ auVar48);
        auVar48 = vpand_avx2(auVar14 ^ auVar18,auVar18 ^ auVar20);
        auVar50 = vpsrld_avx2(auVar20,0x16);
        auVar46 = vpslld_avx2(auVar20,10);
        auVar17 = vpaddd_avx2(auVar17,auVar19);
        auVar19 = vpaddd_avx2(auVar18 ^ auVar48,auVar19);
        auVar19 = vpaddd_avx2(auVar19,auVar74 ^ auVar45 ^ auVar47 ^ auVar44 ^ auVar50 ^ auVar46);
        auVar48 = vpaddd_avx2(local_1a0,auStack_280);
        auVar56 = vpsrld_avx2(local_180,3);
        auVar50 = vpsrld_avx2(local_180,7);
        auVar45 = vpslld_avx2(local_180,0x19);
        auVar47 = vpsrld_avx2(local_180,0x12);
        auVar46 = vpslld_avx2(local_180,0xe);
        auVar55 = vpsrld_avx2(local_1e0,10);
        auVar44 = vpsrld_avx2(local_1e0,0x11);
        auVar54 = vpslld_avx2(local_1e0,0xf);
        auVar48 = vpaddd_avx2(auVar48,auVar56 ^ auVar50 ^ auVar45 ^ auVar47 ^ auVar46);
        auVar50 = vpsrld_avx2(local_1e0,0x13);
        auVar47 = vpslld_avx2(local_1e0,0xd);
        local_1a0 = vpaddd_avx2(auVar48,auVar55 ^ auVar44 ^ auVar54 ^ auVar50 ^ auVar47);
        auVar56 = vpsrld_avx2(auVar17,6);
        auVar46 = vpslld_avx2(auVar17,0x1a);
        auVar15 = vpaddd_avx2(local_1a0,auVar15);
        auVar47 = vpsrld_avx2(auVar17,0xb);
        auVar54 = vpslld_avx2(auVar17,0x15);
        auVar15 = vpaddd_avx2(auVar15,pauVar30[0xf]);
        auVar44 = vpsrld_avx2(auVar17,0x19);
        auVar55 = vpslld_avx2(auVar17,7);
        auVar50 = vpandn_avx2(auVar17,auVar21);
        auVar48 = vpand_avx2(auVar17,auVar16);
        auVar74 = vpsrld_avx2(auVar19,2);
        auVar45 = vpslld_avx2(auVar19,0x1e);
        auVar15 = vpaddd_avx2(auVar15,auVar56 ^ auVar46 ^ auVar47 ^ auVar54 ^ auVar44 ^ auVar55);
        auVar47 = vpsrld_avx2(auVar19,0xd);
        auVar44 = vpslld_avx2(auVar19,0x13);
        auVar15 = vpaddd_avx2(auVar15,auVar50 ^ auVar48);
        auVar48 = vpand_avx2(auVar18 ^ auVar20,auVar20 ^ auVar19);
        auVar50 = vpsrld_avx2(auVar19,0x16);
        auVar46 = vpslld_avx2(auVar19,10);
        auVar14 = vpaddd_avx2(auVar14,auVar15);
        auVar15 = vpaddd_avx2(auVar20 ^ auVar48,auVar15);
        auVar15 = vpaddd_avx2(auVar15,auVar74 ^ auVar45 ^ auVar47 ^ auVar44 ^ auVar50 ^ auVar46);
        auVar48 = vpaddd_avx2(local_180,auStack_260);
        auVar56 = vpsrld_avx2(local_160,3);
        auVar50 = vpsrld_avx2(local_160,7);
        auVar45 = vpslld_avx2(local_160,0x19);
        auVar47 = vpsrld_avx2(local_160,0x12);
        auVar46 = vpslld_avx2(local_160,0xe);
        auVar55 = vpsrld_avx2(local_1c0,10);
        auVar44 = vpsrld_avx2(local_1c0,0x11);
        auVar54 = vpslld_avx2(local_1c0,0xf);
        auVar48 = vpaddd_avx2(auVar48,auVar56 ^ auVar50 ^ auVar45 ^ auVar47 ^ auVar46);
        auVar50 = vpsrld_avx2(local_1c0,0x13);
        auVar47 = vpslld_avx2(local_1c0,0xd);
        local_180 = vpaddd_avx2(auVar48,auVar55 ^ auVar44 ^ auVar54 ^ auVar50 ^ auVar47);
        auVar56 = vpsrld_avx2(auVar14,6);
        auVar46 = vpslld_avx2(auVar14,0x1a);
        auVar21 = vpaddd_avx2(local_180,auVar21);
        auVar47 = vpsrld_avx2(auVar14,0xb);
        auVar54 = vpslld_avx2(auVar14,0x15);
        auVar21 = vpaddd_avx2(auVar21,pauVar30[0x10]);
        auVar44 = vpsrld_avx2(auVar14,0x19);
        auVar55 = vpslld_avx2(auVar14,7);
        auVar50 = vpandn_avx2(auVar14,auVar16);
        auVar48 = vpand_avx2(auVar14,auVar17);
        auVar74 = vpsrld_avx2(auVar15,2);
        auVar45 = vpslld_avx2(auVar15,0x1e);
        auVar21 = vpaddd_avx2(auVar21,auVar56 ^ auVar46 ^ auVar47 ^ auVar54 ^ auVar44 ^ auVar55);
        auVar47 = vpsrld_avx2(auVar15,0xd);
        auVar46 = vpslld_avx2(auVar15,0x13);
        auVar21 = vpaddd_avx2(auVar21,auVar50 ^ auVar48);
        auVar48 = vpand_avx2(auVar20 ^ auVar19,auVar19 ^ auVar15);
        auVar44 = vpsrld_avx2(auVar15,0x16);
        auVar54 = vpslld_avx2(auVar15,10);
        auVar50 = vpaddd_avx2(auVar18,auVar21);
        auVar18 = vpaddd_avx2(auVar19 ^ auVar48,auVar21);
        auVar21 = vpaddd_avx2(auVar18,auVar74 ^ auVar45 ^ auVar47 ^ auVar46 ^ auVar44 ^ auVar54);
        auVar18 = vpaddd_avx2(local_160,auStack_240);
        auVar56 = vpsrld_avx2(local_140,3);
        auVar48 = vpsrld_avx2(local_140,7);
        auVar45 = vpslld_avx2(local_140,0x19);
        auVar47 = vpsrld_avx2(local_140,0x12);
        auVar46 = vpslld_avx2(local_140,0xe);
        auVar55 = vpsrld_avx2(local_1a0,10);
        auVar44 = vpsrld_avx2(local_1a0,0x11);
        auVar54 = vpslld_avx2(local_1a0,0xf);
        auVar18 = vpaddd_avx2(auVar18,auVar56 ^ auVar48 ^ auVar45 ^ auVar47 ^ auVar46);
        auVar48 = vpsrld_avx2(local_1a0,0x13);
        auVar47 = vpslld_avx2(local_1a0,0xd);
        local_160 = vpaddd_avx2(auVar18,auVar55 ^ auVar44 ^ auVar54 ^ auVar48 ^ auVar47);
        auVar56 = vpsrld_avx2(auVar50,6);
        auVar46 = vpslld_avx2(auVar50,0x1a);
        auVar16 = vpaddd_avx2(local_160,auVar16);
        auVar47 = vpsrld_avx2(auVar50,0xb);
        auVar54 = vpslld_avx2(auVar50,0x15);
        auVar16 = vpaddd_avx2(auVar16,pauVar30[0x11]);
        auVar44 = vpsrld_avx2(auVar50,0x19);
        auVar55 = vpslld_avx2(auVar50,7);
        auVar48 = vpandn_avx2(auVar50,auVar17);
        auVar18 = vpand_avx2(auVar50,auVar14);
        auVar74 = vpsrld_avx2(auVar21,2);
        auVar45 = vpslld_avx2(auVar21,0x1e);
        auVar16 = vpaddd_avx2(auVar16,auVar56 ^ auVar46 ^ auVar47 ^ auVar54 ^ auVar44 ^ auVar55);
        auVar47 = vpsrld_avx2(auVar21,0xd);
        auVar44 = vpslld_avx2(auVar21,0x13);
        auVar16 = vpaddd_avx2(auVar16,auVar48 ^ auVar18);
        auVar18 = vpand_avx2(auVar19 ^ auVar15,auVar15 ^ auVar21);
        auVar48 = vpsrld_avx2(auVar21,0x16);
        auVar46 = vpslld_avx2(auVar21,10);
        auVar20 = vpaddd_avx2(auVar20,auVar16);
        auVar16 = vpaddd_avx2(auVar15 ^ auVar18,auVar16);
        auVar16 = vpaddd_avx2(auVar16,auVar74 ^ auVar45 ^ auVar47 ^ auVar44 ^ auVar48 ^ auVar46);
        auVar18 = vpaddd_avx2(local_140,auStack_220);
        auVar56 = vpsrld_avx2(local_120,3);
        auVar48 = vpsrld_avx2(local_120,7);
        auVar45 = vpslld_avx2(local_120,0x19);
        auVar47 = vpsrld_avx2(local_120,0x12);
        auVar46 = vpslld_avx2(local_120,0xe);
        auVar55 = vpsrld_avx2(local_180,10);
        auVar44 = vpsrld_avx2(local_180,0x11);
        auVar54 = vpslld_avx2(local_180,0xf);
        auVar18 = vpaddd_avx2(auVar18,auVar56 ^ auVar48 ^ auVar45 ^ auVar47 ^ auVar46);
        auVar48 = vpsrld_avx2(local_180,0x13);
        auVar47 = vpslld_avx2(local_180,0xd);
        local_140 = vpaddd_avx2(auVar18,auVar55 ^ auVar44 ^ auVar54 ^ auVar48 ^ auVar47);
        auVar56 = vpsrld_avx2(auVar20,6);
        auVar46 = vpslld_avx2(auVar20,0x1a);
        auVar17 = vpaddd_avx2(local_140,auVar17);
        auVar47 = vpsrld_avx2(auVar20,0xb);
        auVar54 = vpslld_avx2(auVar20,0x15);
        auVar17 = vpaddd_avx2(auVar17,pauVar30[0x12]);
        auVar44 = vpsrld_avx2(auVar20,0x19);
        auVar55 = vpslld_avx2(auVar20,7);
        auVar48 = vpandn_avx2(auVar20,auVar14);
        auVar18 = vpand_avx2(auVar20,auVar50);
        auVar74 = vpsrld_avx2(auVar16,2);
        auVar45 = vpslld_avx2(auVar16,0x1e);
        auVar17 = vpaddd_avx2(auVar17,auVar56 ^ auVar46 ^ auVar47 ^ auVar54 ^ auVar44 ^ auVar55);
        auVar47 = vpsrld_avx2(auVar16,0xd);
        auVar44 = vpslld_avx2(auVar16,0x13);
        auVar17 = vpaddd_avx2(auVar17,auVar48 ^ auVar18);
        auVar18 = vpand_avx2(auVar15 ^ auVar21,auVar21 ^ auVar16);
        auVar48 = vpsrld_avx2(auVar16,0x16);
        auVar46 = vpslld_avx2(auVar16,10);
        auVar19 = vpaddd_avx2(auVar19,auVar17);
        auVar17 = vpaddd_avx2(auVar21 ^ auVar18,auVar17);
        auVar17 = vpaddd_avx2(auVar17,auVar74 ^ auVar45 ^ auVar47 ^ auVar44 ^ auVar48 ^ auVar46);
        auVar18 = vpaddd_avx2(local_120,local_200);
        auVar56 = vpsrld_avx2(auVar49,3);
        auVar48 = vpsrld_avx2(auVar49,7);
        auVar45 = vpslld_avx2(auVar49,0x19);
        auVar47 = vpsrld_avx2(auVar49,0x12);
        auVar46 = vpslld_avx2(auVar49,0xe);
        auVar55 = vpsrld_avx2(local_160,10);
        auVar44 = vpsrld_avx2(local_160,0x11);
        auVar54 = vpslld_avx2(local_160,0xf);
        auVar18 = vpaddd_avx2(auVar18,auVar56 ^ auVar48 ^ auVar45 ^ auVar47 ^ auVar46);
        auVar48 = vpsrld_avx2(local_160,0x13);
        auVar47 = vpslld_avx2(local_160,0xd);
        local_120 = vpaddd_avx2(auVar18,auVar55 ^ auVar44 ^ auVar54 ^ auVar48 ^ auVar47);
        auVar74 = vpsrld_avx2(auVar19,6);
        auVar54 = vpslld_avx2(auVar19,0x1a);
        auVar14 = vpaddd_avx2(local_120,auVar14);
        auVar44 = vpsrld_avx2(auVar19,0xb);
        auVar55 = vpslld_avx2(auVar19,0x15);
        auVar14 = vpaddd_avx2(auVar14,pauVar30[0x13]);
        auVar45 = vpsrld_avx2(auVar19,0x19);
        auVar56 = vpslld_avx2(auVar19,7);
        auVar48 = vpandn_avx2(auVar19,auVar50);
        auVar18 = vpand_avx2(auVar19,auVar20);
        auVar77 = vpsrld_avx2(auVar17,2);
        auVar46 = vpslld_avx2(auVar17,0x1e);
        auVar47 = auVar16 ^ auVar17;
        auVar14 = vpaddd_avx2(auVar14,auVar74 ^ auVar54 ^ auVar44 ^ auVar55 ^ auVar45 ^ auVar56);
        auVar44 = vpsrld_avx2(auVar17,0xd);
        auVar45 = vpslld_avx2(auVar17,0x13);
        auVar14 = vpaddd_avx2(auVar14,auVar48 ^ auVar18);
        auVar18 = vpand_avx2(auVar21 ^ auVar16,auVar47);
        auVar48 = vpsrld_avx2(auVar17,0x16);
        auVar54 = vpslld_avx2(auVar17,10);
        auVar15 = vpaddd_avx2(auVar15,auVar14);
        auVar14 = vpaddd_avx2(auVar16 ^ auVar18,auVar14);
        auVar14 = vpaddd_avx2(auVar14,auVar77 ^ auVar46 ^ auVar44 ^ auVar45 ^ auVar48 ^ auVar54);
        iVar27 = iVar27 + -1;
        pauVar30 = pauVar30 + 0x10;
      } while (iVar27 != 0);
      if ((int)local_100._0_4_ < 2) {
        puVar31 = (uint *)&DAT_00107680;
      }
      if ((int)local_100._4_4_ < 2) {
        puVar33 = (uint *)&DAT_00107680;
      }
      if ((int)local_100._8_4_ < 2) {
        puVar35 = (undefined4 *)&DAT_00107680;
      }
      if ((int)local_100._12_4_ < 2) {
        puVar37 = (undefined4 *)&DAT_00107680;
      }
      if (stack0xffffffffffffff10 < 2) {
        puVar32 = (uint *)&DAT_00107680;
      }
      if (stack0xffffffffffffff14 < 2) {
        puVar34 = (uint *)&DAT_00107680;
      }
      if ((int)uStack_e8 < 2) {
        puVar36 = (undefined4 *)&DAT_00107680;
      }
      if (iStack_e4 < 2) {
        puVar38 = (undefined4 *)&DAT_00107680;
      }
      auVar48 = vpcmpgtd_avx2(_local_100,(undefined1  [32])0x0);
      _local_100 = vpaddd_avx2(_local_100,auVar48);
      auVar14 = vpand_avx2(auVar14,auVar48);
      auVar17 = vpand_avx2(auVar17,auVar48);
      auVar16 = vpand_avx2(auVar16,auVar48);
      auVar18 = vpand_avx2(auVar21,auVar48);
      auVar14 = vpaddd_avx2(auVar14,*param_1);
      auVar21 = vpand_avx2(auVar15,auVar48);
      auVar15 = vpaddd_avx2(auVar17,param_1[1]);
      auVar19 = vpand_avx2(auVar19,auVar48);
      auVar16 = vpaddd_avx2(auVar16,param_1[2]);
      auVar20 = vpand_avx2(auVar20,auVar48);
      auVar17 = vpaddd_avx2(auVar18,param_1[3]);
      auVar48 = vpand_avx2(auVar50,auVar48);
      auVar18 = vpaddd_avx2(auVar21,*pauVar4);
      auVar19 = vpaddd_avx2(auVar19,param_1[5]);
      *param_1 = auVar14;
      auVar20 = vpaddd_avx2(auVar20,param_1[6]);
      param_1[1] = auVar15;
      auVar21 = vpaddd_avx2(auVar48,param_1[7]);
      param_1[2] = auVar16;
      param_1[3] = auVar17;
      *pauVar4 = auVar18;
      param_1[5] = auVar19;
      param_1[6] = auVar20;
      param_1[7] = auVar21;
      auVar48._16_16_ = _DAT_00107e10;
      auVar48._0_16_ = _DAT_00107e00;
      iVar28 = iVar28 + -1;
    } while (iVar28 != 0);
    return;
  }
  stack0xffffffffffffff10 = &stack0x00000000;
  param_1 = param_1 + 4;
  while( true ) {
    uStack_e8 = param_3;
    auVar14 = _local_100;
    puVar31 = (uint *)*param_2;
    local_100._0_4_ = *(undefined4 *)(param_2 + 1);
    iVar28 = local_100._0_4_;
    if ((int)local_100._0_4_ < 1) {
      puVar31 = (uint *)&DAT_00107680;
      iVar28 = 0;
    }
    puVar33 = (uint *)param_2[2];
    local_100._4_4_ = *(undefined4 *)(param_2 + 3);
    if (iVar28 < (int)local_100._4_4_) {
      iVar28 = local_100._4_4_;
    }
    if ((int)local_100._4_4_ < 1) {
      puVar33 = (uint *)&DAT_00107680;
    }
    puVar35 = (undefined4 *)param_2[4];
    local_100._8_4_ = *(undefined4 *)(param_2 + 5);
    if (iVar28 < (int)local_100._8_4_) {
      iVar28 = local_100._8_4_;
    }
    if ((int)local_100._8_4_ < 1) {
      puVar35 = (undefined4 *)&DAT_00107680;
    }
    puVar37 = (undefined4 *)param_2[6];
    local_100._12_4_ = *(undefined4 *)(param_2 + 7);
    if (iVar28 < (int)local_100._12_4_) {
      iVar28 = local_100._12_4_;
    }
    local_f0 = auVar14._16_16_;
    if ((int)local_100._12_4_ < 1) {
      puVar37 = (undefined4 *)&DAT_00107680;
    }
    if (iVar28 == 0) break;
    auVar6 = *(undefined1 (*) [16])param_1[-4];
    auVar7 = *(undefined1 (*) [16])param_1[-3];
    auVar8 = *(undefined1 (*) [16])param_1[-2];
    auVar9 = *(undefined1 (*) [16])param_1[-1];
    auVar10 = *(undefined1 (*) [16])*param_1;
    auVar11 = *(undefined1 (*) [16])param_1[1];
    auVar12 = *(undefined1 (*) [16])param_1[2];
    auVar13 = *(undefined1 (*) [16])param_1[3];
    do {
      auVar14 = _local_100;
      auVar43 = vpinsrd_avx(ZEXT416(*puVar31),*puVar35,1);
      auVar22 = vpinsrd_avx(ZEXT416(*puVar33),*puVar37,1);
      auVar43 = vpunpckldq_avx(auVar43,auVar22);
      auVar43 = vpshufb_avx(auVar43,_DAT_00107e00);
      auVar73 = vpsrld_avx(auVar10,6);
      auVar51 = vpslld_avx(auVar10,0x1a);
      auVar13 = vpaddd_avx(auVar43,auVar13);
      auVar39 = vpsrld_avx(auVar10,0xb);
      auVar52 = vpslld_avx(auVar10,0x15);
      auVar13 = vpaddd_avx(auVar13,_K256);
      auVar40 = vpsrld_avx(auVar10,0x19);
      auVar53 = vpslld_avx(auVar10,7);
      auVar42 = vpandn_avx(auVar10,auVar12);
      auVar22 = vpand_avx(auVar10,auVar11);
      auVar76 = vpsrld_avx(auVar6,2);
      auVar41 = vpslld_avx(auVar6,0x1e);
      auVar13 = vpaddd_avx(auVar13,auVar73 ^ auVar51 ^ auVar39 ^ auVar52 ^ auVar40 ^ auVar53);
      auVar39 = vpsrld_avx(auVar6,0xd);
      auVar40 = vpslld_avx(auVar6,0x13);
      auVar13 = vpaddd_avx(auVar13,auVar42 ^ auVar22);
      auVar22 = vpand_avx(auVar8 ^ auVar7,auVar7 ^ auVar6);
      auVar42 = vpsrld_avx(auVar6,0x16);
      auVar51 = vpslld_avx(auVar6,10);
      auVar9 = vpaddd_avx(auVar9,auVar13);
      auVar13 = vpaddd_avx(auVar7 ^ auVar22,auVar13);
      auVar13 = vpaddd_avx(auVar13,auVar76 ^ auVar41 ^ auVar39 ^ auVar40 ^ auVar42 ^ auVar51);
      auVar22 = vpinsrd_avx(ZEXT416(puVar31[1]),puVar35[1],1);
      auVar42 = vpinsrd_avx(ZEXT416(puVar33[1]),puVar37[1],1);
      auVar22 = vpunpckldq_avx(auVar22,auVar42);
      local_200._16_16_ = vpshufb_avx(auVar22,_DAT_00107e00);
      auVar73 = vpsrld_avx(auVar9,6);
      auVar51 = vpslld_avx(auVar9,0x1a);
      auVar12 = vpaddd_avx(local_200._16_16_,auVar12);
      auVar39 = vpsrld_avx(auVar9,0xb);
      auVar52 = vpslld_avx(auVar9,0x15);
      auVar12 = vpaddd_avx(auVar12,_DAT_00107620);
      auVar40 = vpsrld_avx(auVar9,0x19);
      auVar53 = vpslld_avx(auVar9,7);
      auVar42 = vpandn_avx(auVar9,auVar11);
      auVar22 = vpand_avx(auVar9,auVar10);
      auVar76 = vpsrld_avx(auVar13,2);
      auVar41 = vpslld_avx(auVar13,0x1e);
      auVar12 = vpaddd_avx(auVar12,auVar73 ^ auVar51 ^ auVar39 ^ auVar52 ^ auVar40 ^ auVar53);
      auVar39 = vpsrld_avx(auVar13,0xd);
      auVar40 = vpslld_avx(auVar13,0x13);
      auVar12 = vpaddd_avx(auVar12,auVar42 ^ auVar22);
      auVar22 = vpand_avx(auVar7 ^ auVar6,auVar6 ^ auVar13);
      auVar42 = vpsrld_avx(auVar13,0x16);
      auVar51 = vpslld_avx(auVar13,10);
      auVar8 = vpaddd_avx(auVar8,auVar12);
      auVar12 = vpaddd_avx(auVar6 ^ auVar22,auVar12);
      auVar12 = vpaddd_avx(auVar12,auVar76 ^ auVar41 ^ auVar39 ^ auVar40 ^ auVar42 ^ auVar51);
      auVar22 = vpinsrd_avx(ZEXT416(puVar31[2]),puVar35[2],1);
      auVar42 = vpinsrd_avx(ZEXT416(puVar33[2]),puVar37[2],1);
      auVar22 = vpunpckldq_avx(auVar22,auVar42);
      local_1e0._0_16_ = vpshufb_avx(auVar22,_DAT_00107e00);
      auVar73 = vpsrld_avx(auVar8,6);
      auVar51 = vpslld_avx(auVar8,0x1a);
      auVar11 = vpaddd_avx(local_1e0._0_16_,auVar11);
      auVar39 = vpsrld_avx(auVar8,0xb);
      auVar52 = vpslld_avx(auVar8,0x15);
      auVar11 = vpaddd_avx(auVar11,_DAT_00107640);
      auVar40 = vpsrld_avx(auVar8,0x19);
      auVar53 = vpslld_avx(auVar8,7);
      auVar42 = vpandn_avx(auVar8,auVar10);
      auVar22 = vpand_avx(auVar8,auVar9);
      auVar76 = vpsrld_avx(auVar12,2);
      auVar41 = vpslld_avx(auVar12,0x1e);
      auVar11 = vpaddd_avx(auVar11,auVar73 ^ auVar51 ^ auVar39 ^ auVar52 ^ auVar40 ^ auVar53);
      auVar39 = vpsrld_avx(auVar12,0xd);
      auVar40 = vpslld_avx(auVar12,0x13);
      auVar11 = vpaddd_avx(auVar11,auVar42 ^ auVar22);
      auVar22 = vpand_avx(auVar6 ^ auVar13,auVar13 ^ auVar12);
      auVar42 = vpsrld_avx(auVar12,0x16);
      auVar51 = vpslld_avx(auVar12,10);
      auVar7 = vpaddd_avx(auVar7,auVar11);
      auVar11 = vpaddd_avx(auVar13 ^ auVar22,auVar11);
      auVar11 = vpaddd_avx(auVar11,auVar76 ^ auVar41 ^ auVar39 ^ auVar40 ^ auVar42 ^ auVar51);
      auVar22 = vpinsrd_avx(ZEXT416(puVar31[3]),puVar35[3],1);
      auVar42 = vpinsrd_avx(ZEXT416(puVar33[3]),puVar37[3],1);
      auVar22 = vpunpckldq_avx(auVar22,auVar42);
      local_1e0._16_16_ = vpshufb_avx(auVar22,_DAT_00107e00);
      auVar73 = vpsrld_avx(auVar7,6);
      auVar51 = vpslld_avx(auVar7,0x1a);
      auVar10 = vpaddd_avx(local_1e0._16_16_,auVar10);
      auVar39 = vpsrld_avx(auVar7,0xb);
      auVar52 = vpslld_avx(auVar7,0x15);
      auVar10 = vpaddd_avx(auVar10,_DAT_00107660);
      auVar40 = vpsrld_avx(auVar7,0x19);
      auVar53 = vpslld_avx(auVar7,7);
      auVar42 = vpandn_avx(auVar7,auVar9);
      auVar22 = vpand_avx(auVar7,auVar8);
      auVar76 = vpsrld_avx(auVar11,2);
      auVar41 = vpslld_avx(auVar11,0x1e);
      auVar10 = vpaddd_avx(auVar10,auVar73 ^ auVar51 ^ auVar39 ^ auVar52 ^ auVar40 ^ auVar53);
      auVar39 = vpsrld_avx(auVar11,0xd);
      auVar40 = vpslld_avx(auVar11,0x13);
      auVar10 = vpaddd_avx(auVar10,auVar42 ^ auVar22);
      auVar22 = vpand_avx(auVar13 ^ auVar12,auVar12 ^ auVar11);
      auVar42 = vpsrld_avx(auVar11,0x16);
      auVar51 = vpslld_avx(auVar11,10);
      auVar6 = vpaddd_avx(auVar6,auVar10);
      auVar10 = vpaddd_avx(auVar12 ^ auVar22,auVar10);
      auVar10 = vpaddd_avx(auVar10,auVar76 ^ auVar41 ^ auVar39 ^ auVar40 ^ auVar42 ^ auVar51);
      auVar22 = vpinsrd_avx(ZEXT416(puVar31[4]),puVar35[4],1);
      auVar42 = vpinsrd_avx(ZEXT416(puVar33[4]),puVar37[4],1);
      auVar22 = vpunpckldq_avx(auVar22,auVar42);
      local_1c0._0_16_ = vpshufb_avx(auVar22,_DAT_00107e00);
      auVar73 = vpsrld_avx(auVar6,6);
      auVar51 = vpslld_avx(auVar6,0x1a);
      auVar9 = vpaddd_avx(local_1c0._0_16_,auVar9);
      auVar39 = vpsrld_avx(auVar6,0xb);
      auVar52 = vpslld_avx(auVar6,0x15);
      auVar9 = vpaddd_avx(auVar9,_DAT_00107680);
      auVar40 = vpsrld_avx(auVar6,0x19);
      auVar53 = vpslld_avx(auVar6,7);
      auVar42 = vpandn_avx(auVar6,auVar8);
      auVar22 = vpand_avx(auVar6,auVar7);
      auVar76 = vpsrld_avx(auVar10,2);
      auVar41 = vpslld_avx(auVar10,0x1e);
      auVar9 = vpaddd_avx(auVar9,auVar73 ^ auVar51 ^ auVar39 ^ auVar52 ^ auVar40 ^ auVar53);
      auVar39 = vpsrld_avx(auVar10,0xd);
      auVar40 = vpslld_avx(auVar10,0x13);
      auVar9 = vpaddd_avx(auVar9,auVar42 ^ auVar22);
      auVar22 = vpand_avx(auVar12 ^ auVar11,auVar11 ^ auVar10);
      auVar42 = vpsrld_avx(auVar10,0x16);
      auVar51 = vpslld_avx(auVar10,10);
      auVar13 = vpaddd_avx(auVar13,auVar9);
      auVar9 = vpaddd_avx(auVar11 ^ auVar22,auVar9);
      auVar9 = vpaddd_avx(auVar9,auVar76 ^ auVar41 ^ auVar39 ^ auVar40 ^ auVar42 ^ auVar51);
      auVar22 = vpinsrd_avx(ZEXT416(puVar31[5]),puVar35[5],1);
      auVar42 = vpinsrd_avx(ZEXT416(puVar33[5]),puVar37[5],1);
      auVar22 = vpunpckldq_avx(auVar22,auVar42);
      local_1c0._16_16_ = vpshufb_avx(auVar22,_DAT_00107e00);
      auVar73 = vpsrld_avx(auVar13,6);
      auVar51 = vpslld_avx(auVar13,0x1a);
      auVar8 = vpaddd_avx(local_1c0._16_16_,auVar8);
      auVar39 = vpsrld_avx(auVar13,0xb);
      auVar52 = vpslld_avx(auVar13,0x15);
      auVar8 = vpaddd_avx(auVar8,_DAT_001076a0);
      auVar40 = vpsrld_avx(auVar13,0x19);
      auVar53 = vpslld_avx(auVar13,7);
      auVar42 = vpandn_avx(auVar13,auVar7);
      auVar22 = vpand_avx(auVar13,auVar6);
      auVar76 = vpsrld_avx(auVar9,2);
      auVar41 = vpslld_avx(auVar9,0x1e);
      auVar8 = vpaddd_avx(auVar8,auVar73 ^ auVar51 ^ auVar39 ^ auVar52 ^ auVar40 ^ auVar53);
      auVar39 = vpsrld_avx(auVar9,0xd);
      auVar40 = vpslld_avx(auVar9,0x13);
      auVar8 = vpaddd_avx(auVar8,auVar42 ^ auVar22);
      auVar22 = vpand_avx(auVar11 ^ auVar10,auVar10 ^ auVar9);
      auVar42 = vpsrld_avx(auVar9,0x16);
      auVar51 = vpslld_avx(auVar9,10);
      auVar12 = vpaddd_avx(auVar12,auVar8);
      auVar8 = vpaddd_avx(auVar10 ^ auVar22,auVar8);
      auVar8 = vpaddd_avx(auVar8,auVar76 ^ auVar41 ^ auVar39 ^ auVar40 ^ auVar42 ^ auVar51);
      auVar22 = vpinsrd_avx(ZEXT416(puVar31[6]),puVar35[6],1);
      auVar42 = vpinsrd_avx(ZEXT416(puVar33[6]),puVar37[6],1);
      auVar22 = vpunpckldq_avx(auVar22,auVar42);
      local_1a0._0_16_ = vpshufb_avx(auVar22,_DAT_00107e00);
      auVar73 = vpsrld_avx(auVar12,6);
      auVar51 = vpslld_avx(auVar12,0x1a);
      auVar7 = vpaddd_avx(local_1a0._0_16_,auVar7);
      auVar39 = vpsrld_avx(auVar12,0xb);
      auVar52 = vpslld_avx(auVar12,0x15);
      auVar7 = vpaddd_avx(auVar7,_DAT_001076c0);
      auVar40 = vpsrld_avx(auVar12,0x19);
      auVar53 = vpslld_avx(auVar12,7);
      auVar42 = vpandn_avx(auVar12,auVar6);
      auVar22 = vpand_avx(auVar12,auVar13);
      auVar76 = vpsrld_avx(auVar8,2);
      auVar41 = vpslld_avx(auVar8,0x1e);
      auVar7 = vpaddd_avx(auVar7,auVar73 ^ auVar51 ^ auVar39 ^ auVar52 ^ auVar40 ^ auVar53);
      auVar39 = vpsrld_avx(auVar8,0xd);
      auVar40 = vpslld_avx(auVar8,0x13);
      auVar7 = vpaddd_avx(auVar7,auVar42 ^ auVar22);
      auVar22 = vpand_avx(auVar10 ^ auVar9,auVar9 ^ auVar8);
      auVar42 = vpsrld_avx(auVar8,0x16);
      auVar51 = vpslld_avx(auVar8,10);
      auVar11 = vpaddd_avx(auVar11,auVar7);
      auVar7 = vpaddd_avx(auVar9 ^ auVar22,auVar7);
      auVar7 = vpaddd_avx(auVar7,auVar76 ^ auVar41 ^ auVar39 ^ auVar40 ^ auVar42 ^ auVar51);
      auVar22 = vpinsrd_avx(ZEXT416(puVar31[7]),puVar35[7],1);
      auVar42 = vpinsrd_avx(ZEXT416(puVar33[7]),puVar37[7],1);
      auVar22 = vpunpckldq_avx(auVar22,auVar42);
      local_1a0._16_16_ = vpshufb_avx(auVar22,_DAT_00107e00);
      auVar73 = vpsrld_avx(auVar11,6);
      auVar51 = vpslld_avx(auVar11,0x1a);
      auVar6 = vpaddd_avx(local_1a0._16_16_,auVar6);
      auVar39 = vpsrld_avx(auVar11,0xb);
      auVar52 = vpslld_avx(auVar11,0x15);
      auVar6 = vpaddd_avx(auVar6,_DAT_001076e0);
      auVar40 = vpsrld_avx(auVar11,0x19);
      auVar53 = vpslld_avx(auVar11,7);
      auVar42 = vpandn_avx(auVar11,auVar13);
      auVar22 = vpand_avx(auVar11,auVar12);
      auVar76 = vpsrld_avx(auVar7,2);
      auVar41 = vpslld_avx(auVar7,0x1e);
      auVar6 = vpaddd_avx(auVar6,auVar73 ^ auVar51 ^ auVar39 ^ auVar52 ^ auVar40 ^ auVar53);
      auVar39 = vpsrld_avx(auVar7,0xd);
      auVar40 = vpslld_avx(auVar7,0x13);
      auVar6 = vpaddd_avx(auVar6,auVar42 ^ auVar22);
      auVar22 = vpand_avx(auVar9 ^ auVar8,auVar8 ^ auVar7);
      auVar42 = vpsrld_avx(auVar7,0x16);
      auVar51 = vpslld_avx(auVar7,10);
      auVar10 = vpaddd_avx(auVar10,auVar6);
      auVar6 = vpaddd_avx(auVar8 ^ auVar22,auVar6);
      auVar6 = vpaddd_avx(auVar6,auVar76 ^ auVar41 ^ auVar39 ^ auVar40 ^ auVar42 ^ auVar51);
      auVar22 = vpinsrd_avx(ZEXT416(puVar31[8]),puVar35[8],1);
      auVar42 = vpinsrd_avx(ZEXT416(puVar33[8]),puVar37[8],1);
      auVar22 = vpunpckldq_avx(auVar22,auVar42);
      local_180._0_16_ = vpshufb_avx(auVar22,_DAT_00107e00);
      auVar73 = vpsrld_avx(auVar10,6);
      auVar51 = vpslld_avx(auVar10,0x1a);
      auVar13 = vpaddd_avx(local_180._0_16_,auVar13);
      auVar39 = vpsrld_avx(auVar10,0xb);
      auVar52 = vpslld_avx(auVar10,0x15);
      auVar13 = vpaddd_avx(auVar13,_DAT_00107700);
      auVar40 = vpsrld_avx(auVar10,0x19);
      auVar53 = vpslld_avx(auVar10,7);
      auVar42 = vpandn_avx(auVar10,auVar12);
      auVar22 = vpand_avx(auVar10,auVar11);
      auVar76 = vpsrld_avx(auVar6,2);
      auVar41 = vpslld_avx(auVar6,0x1e);
      auVar13 = vpaddd_avx(auVar13,auVar73 ^ auVar51 ^ auVar39 ^ auVar52 ^ auVar40 ^ auVar53);
      auVar39 = vpsrld_avx(auVar6,0xd);
      auVar40 = vpslld_avx(auVar6,0x13);
      auVar13 = vpaddd_avx(auVar13,auVar42 ^ auVar22);
      auVar22 = vpand_avx(auVar8 ^ auVar7,auVar7 ^ auVar6);
      auVar42 = vpsrld_avx(auVar6,0x16);
      auVar51 = vpslld_avx(auVar6,10);
      auVar9 = vpaddd_avx(auVar9,auVar13);
      auVar13 = vpaddd_avx(auVar7 ^ auVar22,auVar13);
      auVar13 = vpaddd_avx(auVar13,auVar76 ^ auVar41 ^ auVar39 ^ auVar40 ^ auVar42 ^ auVar51);
      auVar22 = vpinsrd_avx(ZEXT416(puVar31[9]),puVar35[9],1);
      auVar42 = vpinsrd_avx(ZEXT416(puVar33[9]),puVar37[9],1);
      auVar22 = vpunpckldq_avx(auVar22,auVar42);
      local_180._16_16_ = vpshufb_avx(auVar22,_DAT_00107e00);
      auVar73 = vpsrld_avx(auVar9,6);
      auVar51 = vpslld_avx(auVar9,0x1a);
      auVar12 = vpaddd_avx(local_180._16_16_,auVar12);
      auVar39 = vpsrld_avx(auVar9,0xb);
      auVar52 = vpslld_avx(auVar9,0x15);
      auVar12 = vpaddd_avx(auVar12,_DAT_00107720);
      auVar40 = vpsrld_avx(auVar9,0x19);
      auVar53 = vpslld_avx(auVar9,7);
      auVar42 = vpandn_avx(auVar9,auVar11);
      auVar22 = vpand_avx(auVar9,auVar10);
      auVar76 = vpsrld_avx(auVar13,2);
      auVar41 = vpslld_avx(auVar13,0x1e);
      auVar12 = vpaddd_avx(auVar12,auVar73 ^ auVar51 ^ auVar39 ^ auVar52 ^ auVar40 ^ auVar53);
      auVar39 = vpsrld_avx(auVar13,0xd);
      auVar40 = vpslld_avx(auVar13,0x13);
      auVar12 = vpaddd_avx(auVar12,auVar42 ^ auVar22);
      auVar22 = vpand_avx(auVar7 ^ auVar6,auVar6 ^ auVar13);
      auVar42 = vpsrld_avx(auVar13,0x16);
      auVar51 = vpslld_avx(auVar13,10);
      auVar8 = vpaddd_avx(auVar8,auVar12);
      auVar12 = vpaddd_avx(auVar6 ^ auVar22,auVar12);
      auVar12 = vpaddd_avx(auVar12,auVar76 ^ auVar41 ^ auVar39 ^ auVar40 ^ auVar42 ^ auVar51);
      auVar22 = vpinsrd_avx(ZEXT416(puVar31[10]),puVar35[10],1);
      auVar42 = vpinsrd_avx(ZEXT416(puVar33[10]),puVar37[10],1);
      auVar22 = vpunpckldq_avx(auVar22,auVar42);
      local_160._0_16_ = vpshufb_avx(auVar22,_DAT_00107e00);
      auVar73 = vpsrld_avx(auVar8,6);
      auVar51 = vpslld_avx(auVar8,0x1a);
      auVar11 = vpaddd_avx(local_160._0_16_,auVar11);
      auVar39 = vpsrld_avx(auVar8,0xb);
      auVar52 = vpslld_avx(auVar8,0x15);
      auVar11 = vpaddd_avx(auVar11,_DAT_00107740);
      auVar40 = vpsrld_avx(auVar8,0x19);
      auVar53 = vpslld_avx(auVar8,7);
      auVar42 = vpandn_avx(auVar8,auVar10);
      auVar22 = vpand_avx(auVar8,auVar9);
      auVar76 = vpsrld_avx(auVar12,2);
      auVar41 = vpslld_avx(auVar12,0x1e);
      auVar11 = vpaddd_avx(auVar11,auVar73 ^ auVar51 ^ auVar39 ^ auVar52 ^ auVar40 ^ auVar53);
      auVar39 = vpsrld_avx(auVar12,0xd);
      auVar40 = vpslld_avx(auVar12,0x13);
      auVar11 = vpaddd_avx(auVar11,auVar42 ^ auVar22);
      auVar22 = vpand_avx(auVar6 ^ auVar13,auVar13 ^ auVar12);
      auVar42 = vpsrld_avx(auVar12,0x16);
      auVar51 = vpslld_avx(auVar12,10);
      auVar7 = vpaddd_avx(auVar7,auVar11);
      auVar11 = vpaddd_avx(auVar13 ^ auVar22,auVar11);
      auVar11 = vpaddd_avx(auVar11,auVar76 ^ auVar41 ^ auVar39 ^ auVar40 ^ auVar42 ^ auVar51);
      auVar22 = vpinsrd_avx(ZEXT416(puVar31[0xb]),puVar35[0xb],1);
      auVar42 = vpinsrd_avx(ZEXT416(puVar33[0xb]),puVar37[0xb],1);
      auVar22 = vpunpckldq_avx(auVar22,auVar42);
      local_160._16_16_ = vpshufb_avx(auVar22,_DAT_00107e00);
      auVar73 = vpsrld_avx(auVar7,6);
      auVar51 = vpslld_avx(auVar7,0x1a);
      auVar10 = vpaddd_avx(local_160._16_16_,auVar10);
      auVar39 = vpsrld_avx(auVar7,0xb);
      auVar52 = vpslld_avx(auVar7,0x15);
      auVar10 = vpaddd_avx(auVar10,_DAT_00107760);
      auVar40 = vpsrld_avx(auVar7,0x19);
      auVar53 = vpslld_avx(auVar7,7);
      auVar42 = vpandn_avx(auVar7,auVar9);
      auVar22 = vpand_avx(auVar7,auVar8);
      auVar76 = vpsrld_avx(auVar11,2);
      auVar41 = vpslld_avx(auVar11,0x1e);
      auVar10 = vpaddd_avx(auVar10,auVar73 ^ auVar51 ^ auVar39 ^ auVar52 ^ auVar40 ^ auVar53);
      auVar39 = vpsrld_avx(auVar11,0xd);
      auVar40 = vpslld_avx(auVar11,0x13);
      auVar10 = vpaddd_avx(auVar10,auVar42 ^ auVar22);
      auVar22 = vpand_avx(auVar13 ^ auVar12,auVar12 ^ auVar11);
      auVar42 = vpsrld_avx(auVar11,0x16);
      auVar51 = vpslld_avx(auVar11,10);
      auVar6 = vpaddd_avx(auVar6,auVar10);
      auVar10 = vpaddd_avx(auVar12 ^ auVar22,auVar10);
      auVar10 = vpaddd_avx(auVar10,auVar76 ^ auVar41 ^ auVar39 ^ auVar40 ^ auVar42 ^ auVar51);
      auVar22 = vpinsrd_avx(ZEXT416(puVar31[0xc]),puVar35[0xc],1);
      auVar42 = vpinsrd_avx(ZEXT416(puVar33[0xc]),puVar37[0xc],1);
      auVar22 = vpunpckldq_avx(auVar22,auVar42);
      local_140._0_16_ = vpshufb_avx(auVar22,_DAT_00107e00);
      auVar73 = vpsrld_avx(auVar6,6);
      auVar51 = vpslld_avx(auVar6,0x1a);
      auVar9 = vpaddd_avx(local_140._0_16_,auVar9);
      auVar39 = vpsrld_avx(auVar6,0xb);
      auVar52 = vpslld_avx(auVar6,0x15);
      auVar9 = vpaddd_avx(auVar9,_DAT_00107780);
      auVar40 = vpsrld_avx(auVar6,0x19);
      auVar53 = vpslld_avx(auVar6,7);
      auVar42 = vpandn_avx(auVar6,auVar8);
      auVar22 = vpand_avx(auVar6,auVar7);
      auVar76 = vpsrld_avx(auVar10,2);
      auVar41 = vpslld_avx(auVar10,0x1e);
      auVar9 = vpaddd_avx(auVar9,auVar73 ^ auVar51 ^ auVar39 ^ auVar52 ^ auVar40 ^ auVar53);
      auVar39 = vpsrld_avx(auVar10,0xd);
      auVar40 = vpslld_avx(auVar10,0x13);
      auVar9 = vpaddd_avx(auVar9,auVar42 ^ auVar22);
      auVar22 = vpand_avx(auVar12 ^ auVar11,auVar11 ^ auVar10);
      auVar42 = vpsrld_avx(auVar10,0x16);
      auVar51 = vpslld_avx(auVar10,10);
      auVar13 = vpaddd_avx(auVar13,auVar9);
      auVar9 = vpaddd_avx(auVar11 ^ auVar22,auVar9);
      auVar9 = vpaddd_avx(auVar9,auVar76 ^ auVar41 ^ auVar39 ^ auVar40 ^ auVar42 ^ auVar51);
      auVar22 = vpinsrd_avx(ZEXT416(puVar31[0xd]),puVar35[0xd],1);
      auVar42 = vpinsrd_avx(ZEXT416(puVar33[0xd]),puVar37[0xd],1);
      auVar22 = vpunpckldq_avx(auVar22,auVar42);
      local_140._16_16_ = vpshufb_avx(auVar22,_DAT_00107e00);
      auVar73 = vpsrld_avx(auVar13,6);
      auVar51 = vpslld_avx(auVar13,0x1a);
      auVar8 = vpaddd_avx(local_140._16_16_,auVar8);
      auVar39 = vpsrld_avx(auVar13,0xb);
      auVar52 = vpslld_avx(auVar13,0x15);
      auVar8 = vpaddd_avx(auVar8,_DAT_001077a0);
      auVar40 = vpsrld_avx(auVar13,0x19);
      auVar53 = vpslld_avx(auVar13,7);
      auVar42 = vpandn_avx(auVar13,auVar7);
      auVar22 = vpand_avx(auVar13,auVar6);
      auVar76 = vpsrld_avx(auVar9,2);
      auVar41 = vpslld_avx(auVar9,0x1e);
      auVar8 = vpaddd_avx(auVar8,auVar73 ^ auVar51 ^ auVar39 ^ auVar52 ^ auVar40 ^ auVar53);
      auVar39 = vpsrld_avx(auVar9,0xd);
      auVar40 = vpslld_avx(auVar9,0x13);
      auVar8 = vpaddd_avx(auVar8,auVar42 ^ auVar22);
      auVar22 = vpand_avx(auVar11 ^ auVar10,auVar10 ^ auVar9);
      auVar42 = vpsrld_avx(auVar9,0x16);
      auVar51 = vpslld_avx(auVar9,10);
      auVar12 = vpaddd_avx(auVar12,auVar8);
      auVar8 = vpaddd_avx(auVar10 ^ auVar22,auVar8);
      auVar8 = vpaddd_avx(auVar8,auVar76 ^ auVar41 ^ auVar39 ^ auVar40 ^ auVar42 ^ auVar51);
      auVar22 = vpinsrd_avx(ZEXT416(puVar31[0xe]),puVar35[0xe],1);
      auVar42 = vpinsrd_avx(ZEXT416(puVar33[0xe]),puVar37[0xe],1);
      auVar22 = vpunpckldq_avx(auVar22,auVar42);
      local_120._0_16_ = vpshufb_avx(auVar22,_DAT_00107e00);
      auVar73 = vpsrld_avx(auVar12,6);
      auVar51 = vpslld_avx(auVar12,0x1a);
      auVar7 = vpaddd_avx(local_120._0_16_,auVar7);
      auVar39 = vpsrld_avx(auVar12,0xb);
      auVar52 = vpslld_avx(auVar12,0x15);
      auVar7 = vpaddd_avx(auVar7,_DAT_001077c0);
      auVar40 = vpsrld_avx(auVar12,0x19);
      auVar53 = vpslld_avx(auVar12,7);
      auVar42 = vpandn_avx(auVar12,auVar6);
      auVar22 = vpand_avx(auVar12,auVar13);
      auVar76 = vpsrld_avx(auVar8,2);
      auVar41 = vpslld_avx(auVar8,0x1e);
      auVar7 = vpaddd_avx(auVar7,auVar73 ^ auVar51 ^ auVar39 ^ auVar52 ^ auVar40 ^ auVar53);
      auVar39 = vpsrld_avx(auVar8,0xd);
      auVar40 = vpslld_avx(auVar8,0x13);
      auVar7 = vpaddd_avx(auVar7,auVar42 ^ auVar22);
      auVar22 = vpand_avx(auVar10 ^ auVar9,auVar9 ^ auVar8);
      auVar42 = vpsrld_avx(auVar8,0x16);
      auVar51 = vpslld_avx(auVar8,10);
      auVar11 = vpaddd_avx(auVar11,auVar7);
      auVar7 = vpaddd_avx(auVar9 ^ auVar22,auVar7);
      auVar22 = vpaddd_avx(auVar7,auVar76 ^ auVar41 ^ auVar39 ^ auVar40 ^ auVar42 ^ auVar51);
      puVar32 = puVar31 + 0xf;
      puVar31 = puVar31 + 0x10;
      puVar34 = puVar33 + 0xf;
      puVar33 = puVar33 + 0x10;
      auVar7 = vpinsrd_avx(ZEXT416(*puVar32),puVar35[0xf],1);
      puVar35 = puVar35 + 0x10;
      auVar42 = vpinsrd_avx(ZEXT416(*puVar34),puVar37[0xf],1);
      puVar37 = puVar37 + 0x10;
      auVar7 = vpunpckldq_avx(auVar7,auVar42);
      local_120._16_16_ = vpshufb_avx(auVar7,_DAT_00107e00);
      auVar76 = vpsrld_avx(auVar11,6);
      auVar52 = vpslld_avx(auVar11,0x1a);
      auVar6 = vpaddd_avx(local_120._16_16_,auVar6);
      auVar40 = vpsrld_avx(auVar11,0xb);
      auVar53 = vpslld_avx(auVar11,0x15);
      auVar6 = vpaddd_avx(auVar6,_DAT_001077e0);
      auVar41 = vpsrld_avx(auVar11,0x19);
      auVar73 = vpslld_avx(auVar11,7);
      auVar42 = vpandn_avx(auVar11,auVar13);
      auVar7 = vpand_avx(auVar11,auVar12);
      auVar75 = vpsrld_avx(auVar22,2);
      auVar51 = vpslld_avx(auVar22,0x1e);
      auVar39 = auVar8 ^ auVar22;
      auVar6 = vpaddd_avx(auVar6,auVar76 ^ auVar52 ^ auVar40 ^ auVar53 ^ auVar41 ^ auVar73);
      auVar40 = vpsrld_avx(auVar22,0xd);
      auVar52 = vpslld_avx(auVar22,0x13);
      auVar6 = vpaddd_avx(auVar6,auVar42 ^ auVar7);
      auVar42 = vpand_avx(auVar9 ^ auVar8,auVar39);
      auVar41 = vpsrld_avx(auVar22,0x16);
      auVar53 = vpslld_avx(auVar22,10);
      auVar7 = vpaddd_avx(auVar10,auVar6);
      auVar6 = vpaddd_avx(auVar8 ^ auVar42,auVar6);
      auVar6 = vpaddd_avx(auVar6,auVar75 ^ auVar51 ^ auVar40 ^ auVar52 ^ auVar41 ^ auVar53);
      iVar27 = 3;
      pauVar29 = (undefined1 (*) [16])&DAT_00107780;
      do {
        auVar10 = vpaddd_avx(auVar43,local_180._16_16_);
        auVar73 = vpsrld_avx(local_200._16_16_,3);
        auVar43 = vpsrld_avx(local_200._16_16_,7);
        auVar41 = vpslld_avx(local_200._16_16_,0x19);
        auVar42 = vpsrld_avx(local_200._16_16_,0x12);
        auVar51 = vpslld_avx(local_200._16_16_,0xe);
        auVar53 = vpsrld_avx(local_120._0_16_,10);
        auVar40 = vpsrld_avx(local_120._0_16_,0x11);
        auVar52 = vpslld_avx(local_120._0_16_,0xf);
        auVar10 = vpaddd_avx(auVar10,auVar73 ^ auVar43 ^ auVar41 ^ auVar42 ^ auVar51);
        auVar43 = vpsrld_avx(local_120._0_16_,0x13);
        auVar42 = vpslld_avx(local_120._0_16_,0xd);
        auVar43 = vpaddd_avx(auVar10,auVar53 ^ auVar40 ^ auVar52 ^ auVar43 ^ auVar42);
        auVar76 = vpsrld_avx(auVar7,6);
        auVar52 = vpslld_avx(auVar7,0x1a);
        auVar10 = vpaddd_avx(auVar43,auVar13);
        auVar40 = vpsrld_avx(auVar7,0xb);
        auVar53 = vpslld_avx(auVar7,0x15);
        auVar10 = vpaddd_avx(auVar10,pauVar29[8]);
        auVar41 = vpsrld_avx(auVar7,0x19);
        auVar73 = vpslld_avx(auVar7,7);
        auVar42 = vpandn_avx(auVar7,auVar12);
        auVar13 = vpand_avx(auVar7,auVar11);
        auVar75 = vpsrld_avx(auVar6,2);
        auVar51 = vpslld_avx(auVar6,0x1e);
        auVar10 = vpaddd_avx(auVar10,auVar76 ^ auVar52 ^ auVar40 ^ auVar53 ^ auVar41 ^ auVar73);
        auVar40 = vpsrld_avx(auVar6,0xd);
        auVar41 = vpslld_avx(auVar6,0x13);
        auVar10 = vpaddd_avx(auVar10,auVar42 ^ auVar13);
        auVar13 = vpand_avx(auVar39,auVar22 ^ auVar6);
        auVar42 = vpsrld_avx(auVar6,0x16);
        auVar39 = vpslld_avx(auVar6,10);
        auVar9 = vpaddd_avx(auVar9,auVar10);
        auVar10 = vpaddd_avx(auVar22 ^ auVar13,auVar10);
        auVar10 = vpaddd_avx(auVar10,auVar75 ^ auVar51 ^ auVar40 ^ auVar41 ^ auVar42 ^ auVar39);
        auVar13 = vpaddd_avx(local_200._16_16_,local_160._0_16_);
        auVar73 = vpsrld_avx(local_1e0._0_16_,3);
        auVar42 = vpsrld_avx(local_1e0._0_16_,7);
        auVar41 = vpslld_avx(local_1e0._0_16_,0x19);
        auVar39 = vpsrld_avx(local_1e0._0_16_,0x12);
        auVar51 = vpslld_avx(local_1e0._0_16_,0xe);
        auVar53 = vpsrld_avx(local_120._16_16_,10);
        auVar40 = vpsrld_avx(local_120._16_16_,0x11);
        auVar52 = vpslld_avx(local_120._16_16_,0xf);
        auVar13 = vpaddd_avx(auVar13,auVar73 ^ auVar42 ^ auVar41 ^ auVar39 ^ auVar51);
        auVar42 = vpsrld_avx(local_120._16_16_,0x13);
        auVar39 = vpslld_avx(local_120._16_16_,0xd);
        local_200._16_16_ = vpaddd_avx(auVar13,auVar53 ^ auVar40 ^ auVar52 ^ auVar42 ^ auVar39);
        auVar73 = vpsrld_avx(auVar9,6);
        auVar51 = vpslld_avx(auVar9,0x1a);
        auVar12 = vpaddd_avx(local_200._16_16_,auVar12);
        auVar39 = vpsrld_avx(auVar9,0xb);
        auVar52 = vpslld_avx(auVar9,0x15);
        auVar12 = vpaddd_avx(auVar12,pauVar29[10]);
        auVar40 = vpsrld_avx(auVar9,0x19);
        auVar53 = vpslld_avx(auVar9,7);
        auVar42 = vpandn_avx(auVar9,auVar11);
        auVar13 = vpand_avx(auVar9,auVar7);
        auVar76 = vpsrld_avx(auVar10,2);
        auVar41 = vpslld_avx(auVar10,0x1e);
        auVar12 = vpaddd_avx(auVar12,auVar73 ^ auVar51 ^ auVar39 ^ auVar52 ^ auVar40 ^ auVar53);
        auVar39 = vpsrld_avx(auVar10,0xd);
        auVar40 = vpslld_avx(auVar10,0x13);
        auVar12 = vpaddd_avx(auVar12,auVar42 ^ auVar13);
        auVar13 = vpand_avx(auVar22 ^ auVar6,auVar6 ^ auVar10);
        auVar42 = vpsrld_avx(auVar10,0x16);
        auVar51 = vpslld_avx(auVar10,10);
        auVar8 = vpaddd_avx(auVar8,auVar12);
        auVar12 = vpaddd_avx(auVar6 ^ auVar13,auVar12);
        auVar12 = vpaddd_avx(auVar12,auVar76 ^ auVar41 ^ auVar39 ^ auVar40 ^ auVar42 ^ auVar51);
        auVar13 = vpaddd_avx(local_1e0._0_16_,local_160._16_16_);
        auVar73 = vpsrld_avx(local_1e0._16_16_,3);
        auVar42 = vpsrld_avx(local_1e0._16_16_,7);
        auVar41 = vpslld_avx(local_1e0._16_16_,0x19);
        auVar39 = vpsrld_avx(local_1e0._16_16_,0x12);
        auVar51 = vpslld_avx(local_1e0._16_16_,0xe);
        auVar53 = vpsrld_avx(auVar43,10);
        auVar40 = vpsrld_avx(auVar43,0x11);
        auVar52 = vpslld_avx(auVar43,0xf);
        auVar13 = vpaddd_avx(auVar13,auVar73 ^ auVar42 ^ auVar41 ^ auVar39 ^ auVar51);
        auVar42 = vpsrld_avx(auVar43,0x13);
        auVar39 = vpslld_avx(auVar43,0xd);
        local_1e0._0_16_ = vpaddd_avx(auVar13,auVar53 ^ auVar40 ^ auVar52 ^ auVar42 ^ auVar39);
        auVar73 = vpsrld_avx(auVar8,6);
        auVar51 = vpslld_avx(auVar8,0x1a);
        auVar11 = vpaddd_avx(local_1e0._0_16_,auVar11);
        auVar39 = vpsrld_avx(auVar8,0xb);
        auVar52 = vpslld_avx(auVar8,0x15);
        auVar11 = vpaddd_avx(auVar11,pauVar29[0xc]);
        auVar40 = vpsrld_avx(auVar8,0x19);
        auVar53 = vpslld_avx(auVar8,7);
        auVar42 = vpandn_avx(auVar8,auVar7);
        auVar13 = vpand_avx(auVar8,auVar9);
        auVar76 = vpsrld_avx(auVar12,2);
        auVar41 = vpslld_avx(auVar12,0x1e);
        auVar11 = vpaddd_avx(auVar11,auVar73 ^ auVar51 ^ auVar39 ^ auVar52 ^ auVar40 ^ auVar53);
        auVar39 = vpsrld_avx(auVar12,0xd);
        auVar51 = vpslld_avx(auVar12,0x13);
        auVar11 = vpaddd_avx(auVar11,auVar42 ^ auVar13);
        auVar42 = vpand_avx(auVar6 ^ auVar10,auVar10 ^ auVar12);
        auVar40 = vpsrld_avx(auVar12,0x16);
        auVar52 = vpslld_avx(auVar12,10);
        auVar13 = vpaddd_avx(auVar22,auVar11);
        auVar11 = vpaddd_avx(auVar10 ^ auVar42,auVar11);
        auVar11 = vpaddd_avx(auVar11,auVar76 ^ auVar41 ^ auVar39 ^ auVar51 ^ auVar40 ^ auVar52);
        auVar22 = vpaddd_avx(local_1e0._16_16_,local_140._0_16_);
        auVar73 = vpsrld_avx(local_1c0._0_16_,3);
        auVar42 = vpsrld_avx(local_1c0._0_16_,7);
        auVar41 = vpslld_avx(local_1c0._0_16_,0x19);
        auVar39 = vpsrld_avx(local_1c0._0_16_,0x12);
        auVar51 = vpslld_avx(local_1c0._0_16_,0xe);
        auVar53 = vpsrld_avx(local_200._16_16_,10);
        auVar40 = vpsrld_avx(local_200._16_16_,0x11);
        auVar52 = vpslld_avx(local_200._16_16_,0xf);
        auVar22 = vpaddd_avx(auVar22,auVar73 ^ auVar42 ^ auVar41 ^ auVar39 ^ auVar51);
        auVar42 = vpsrld_avx(local_200._16_16_,0x13);
        auVar39 = vpslld_avx(local_200._16_16_,0xd);
        local_1e0._16_16_ = vpaddd_avx(auVar22,auVar53 ^ auVar40 ^ auVar52 ^ auVar42 ^ auVar39);
        auVar73 = vpsrld_avx(auVar13,6);
        auVar51 = vpslld_avx(auVar13,0x1a);
        auVar7 = vpaddd_avx(local_1e0._16_16_,auVar7);
        auVar39 = vpsrld_avx(auVar13,0xb);
        auVar52 = vpslld_avx(auVar13,0x15);
        auVar7 = vpaddd_avx(auVar7,pauVar29[0xe]);
        auVar40 = vpsrld_avx(auVar13,0x19);
        auVar53 = vpslld_avx(auVar13,7);
        auVar42 = vpandn_avx(auVar13,auVar9);
        auVar22 = vpand_avx(auVar13,auVar8);
        auVar76 = vpsrld_avx(auVar11,2);
        auVar41 = vpslld_avx(auVar11,0x1e);
        auVar7 = vpaddd_avx(auVar7,auVar73 ^ auVar51 ^ auVar39 ^ auVar52 ^ auVar40 ^ auVar53);
        auVar39 = vpsrld_avx(auVar11,0xd);
        auVar40 = vpslld_avx(auVar11,0x13);
        auVar7 = vpaddd_avx(auVar7,auVar42 ^ auVar22);
        auVar22 = vpand_avx(auVar10 ^ auVar12,auVar12 ^ auVar11);
        auVar42 = vpsrld_avx(auVar11,0x16);
        auVar51 = vpslld_avx(auVar11,10);
        auVar6 = vpaddd_avx(auVar6,auVar7);
        auVar7 = vpaddd_avx(auVar12 ^ auVar22,auVar7);
        auVar7 = vpaddd_avx(auVar7,auVar76 ^ auVar41 ^ auVar39 ^ auVar40 ^ auVar42 ^ auVar51);
        auVar22 = vpaddd_avx(local_1c0._0_16_,local_140._16_16_);
        auVar73 = vpsrld_avx(local_1c0._16_16_,3);
        auVar42 = vpsrld_avx(local_1c0._16_16_,7);
        auVar41 = vpslld_avx(local_1c0._16_16_,0x19);
        auVar39 = vpsrld_avx(local_1c0._16_16_,0x12);
        auVar51 = vpslld_avx(local_1c0._16_16_,0xe);
        auVar53 = vpsrld_avx(local_1e0._0_16_,10);
        auVar40 = vpsrld_avx(local_1e0._0_16_,0x11);
        auVar52 = vpslld_avx(local_1e0._0_16_,0xf);
        auVar22 = vpaddd_avx(auVar22,auVar73 ^ auVar42 ^ auVar41 ^ auVar39 ^ auVar51);
        auVar42 = vpsrld_avx(local_1e0._0_16_,0x13);
        auVar39 = vpslld_avx(local_1e0._0_16_,0xd);
        local_1c0._0_16_ = vpaddd_avx(auVar22,auVar53 ^ auVar40 ^ auVar52 ^ auVar42 ^ auVar39);
        auVar73 = vpsrld_avx(auVar6,6);
        auVar51 = vpslld_avx(auVar6,0x1a);
        auVar9 = vpaddd_avx(local_1c0._0_16_,auVar9);
        auVar39 = vpsrld_avx(auVar6,0xb);
        auVar52 = vpslld_avx(auVar6,0x15);
        auVar9 = vpaddd_avx(auVar9,pauVar29[0x10]);
        auVar40 = vpsrld_avx(auVar6,0x19);
        auVar53 = vpslld_avx(auVar6,7);
        auVar42 = vpandn_avx(auVar6,auVar8);
        auVar22 = vpand_avx(auVar6,auVar13);
        auVar76 = vpsrld_avx(auVar7,2);
        auVar41 = vpslld_avx(auVar7,0x1e);
        auVar9 = vpaddd_avx(auVar9,auVar73 ^ auVar51 ^ auVar39 ^ auVar52 ^ auVar40 ^ auVar53);
        auVar39 = vpsrld_avx(auVar7,0xd);
        auVar40 = vpslld_avx(auVar7,0x13);
        auVar9 = vpaddd_avx(auVar9,auVar42 ^ auVar22);
        auVar22 = vpand_avx(auVar12 ^ auVar11,auVar11 ^ auVar7);
        auVar42 = vpsrld_avx(auVar7,0x16);
        auVar51 = vpslld_avx(auVar7,10);
        auVar10 = vpaddd_avx(auVar10,auVar9);
        auVar9 = vpaddd_avx(auVar11 ^ auVar22,auVar9);
        auVar9 = vpaddd_avx(auVar9,auVar76 ^ auVar41 ^ auVar39 ^ auVar40 ^ auVar42 ^ auVar51);
        auVar22 = vpaddd_avx(local_1c0._16_16_,local_120._0_16_);
        auVar73 = vpsrld_avx(local_1a0._0_16_,3);
        auVar42 = vpsrld_avx(local_1a0._0_16_,7);
        auVar41 = vpslld_avx(local_1a0._0_16_,0x19);
        auVar39 = vpsrld_avx(local_1a0._0_16_,0x12);
        auVar51 = vpslld_avx(local_1a0._0_16_,0xe);
        auVar53 = vpsrld_avx(local_1e0._16_16_,10);
        auVar40 = vpsrld_avx(local_1e0._16_16_,0x11);
        auVar52 = vpslld_avx(local_1e0._16_16_,0xf);
        auVar22 = vpaddd_avx(auVar22,auVar73 ^ auVar42 ^ auVar41 ^ auVar39 ^ auVar51);
        auVar42 = vpsrld_avx(local_1e0._16_16_,0x13);
        auVar39 = vpslld_avx(local_1e0._16_16_,0xd);
        local_1c0._16_16_ = vpaddd_avx(auVar22,auVar53 ^ auVar40 ^ auVar52 ^ auVar42 ^ auVar39);
        auVar73 = vpsrld_avx(auVar10,6);
        auVar51 = vpslld_avx(auVar10,0x1a);
        auVar8 = vpaddd_avx(local_1c0._16_16_,auVar8);
        auVar39 = vpsrld_avx(auVar10,0xb);
        auVar52 = vpslld_avx(auVar10,0x15);
        auVar8 = vpaddd_avx(auVar8,pauVar29[0x12]);
        auVar40 = vpsrld_avx(auVar10,0x19);
        auVar53 = vpslld_avx(auVar10,7);
        auVar42 = vpandn_avx(auVar10,auVar13);
        auVar22 = vpand_avx(auVar10,auVar6);
        auVar76 = vpsrld_avx(auVar9,2);
        auVar41 = vpslld_avx(auVar9,0x1e);
        auVar8 = vpaddd_avx(auVar8,auVar73 ^ auVar51 ^ auVar39 ^ auVar52 ^ auVar40 ^ auVar53);
        auVar39 = vpsrld_avx(auVar9,0xd);
        auVar40 = vpslld_avx(auVar9,0x13);
        auVar8 = vpaddd_avx(auVar8,auVar42 ^ auVar22);
        auVar22 = vpand_avx(auVar11 ^ auVar7,auVar7 ^ auVar9);
        auVar42 = vpsrld_avx(auVar9,0x16);
        auVar51 = vpslld_avx(auVar9,10);
        auVar12 = vpaddd_avx(auVar12,auVar8);
        auVar8 = vpaddd_avx(auVar7 ^ auVar22,auVar8);
        auVar8 = vpaddd_avx(auVar8,auVar76 ^ auVar41 ^ auVar39 ^ auVar40 ^ auVar42 ^ auVar51);
        auVar22 = vpaddd_avx(local_1a0._0_16_,local_120._16_16_);
        auVar73 = vpsrld_avx(local_1a0._16_16_,3);
        auVar42 = vpsrld_avx(local_1a0._16_16_,7);
        auVar41 = vpslld_avx(local_1a0._16_16_,0x19);
        auVar39 = vpsrld_avx(local_1a0._16_16_,0x12);
        auVar51 = vpslld_avx(local_1a0._16_16_,0xe);
        auVar53 = vpsrld_avx(local_1c0._0_16_,10);
        auVar40 = vpsrld_avx(local_1c0._0_16_,0x11);
        auVar52 = vpslld_avx(local_1c0._0_16_,0xf);
        auVar22 = vpaddd_avx(auVar22,auVar73 ^ auVar42 ^ auVar41 ^ auVar39 ^ auVar51);
        auVar42 = vpsrld_avx(local_1c0._0_16_,0x13);
        auVar39 = vpslld_avx(local_1c0._0_16_,0xd);
        local_1a0._0_16_ = vpaddd_avx(auVar22,auVar53 ^ auVar40 ^ auVar52 ^ auVar42 ^ auVar39);
        auVar73 = vpsrld_avx(auVar12,6);
        auVar51 = vpslld_avx(auVar12,0x1a);
        auVar13 = vpaddd_avx(local_1a0._0_16_,auVar13);
        auVar39 = vpsrld_avx(auVar12,0xb);
        auVar52 = vpslld_avx(auVar12,0x15);
        auVar13 = vpaddd_avx(auVar13,pauVar29[0x14]);
        auVar40 = vpsrld_avx(auVar12,0x19);
        auVar53 = vpslld_avx(auVar12,7);
        auVar42 = vpandn_avx(auVar12,auVar6);
        auVar22 = vpand_avx(auVar12,auVar10);
        auVar76 = vpsrld_avx(auVar8,2);
        auVar41 = vpslld_avx(auVar8,0x1e);
        auVar13 = vpaddd_avx(auVar13,auVar73 ^ auVar51 ^ auVar39 ^ auVar52 ^ auVar40 ^ auVar53);
        auVar39 = vpsrld_avx(auVar8,0xd);
        auVar40 = vpslld_avx(auVar8,0x13);
        auVar13 = vpaddd_avx(auVar13,auVar42 ^ auVar22);
        auVar22 = vpand_avx(auVar7 ^ auVar9,auVar9 ^ auVar8);
        auVar42 = vpsrld_avx(auVar8,0x16);
        auVar51 = vpslld_avx(auVar8,10);
        auVar11 = vpaddd_avx(auVar11,auVar13);
        auVar13 = vpaddd_avx(auVar9 ^ auVar22,auVar13);
        auVar13 = vpaddd_avx(auVar13,auVar76 ^ auVar41 ^ auVar39 ^ auVar40 ^ auVar42 ^ auVar51);
        auVar22 = vpaddd_avx(local_1a0._16_16_,auVar43);
        auVar73 = vpsrld_avx(local_180._0_16_,3);
        auVar42 = vpsrld_avx(local_180._0_16_,7);
        auVar41 = vpslld_avx(local_180._0_16_,0x19);
        auVar39 = vpsrld_avx(local_180._0_16_,0x12);
        auVar51 = vpslld_avx(local_180._0_16_,0xe);
        auVar53 = vpsrld_avx(local_1c0._16_16_,10);
        auVar40 = vpsrld_avx(local_1c0._16_16_,0x11);
        auVar52 = vpslld_avx(local_1c0._16_16_,0xf);
        auVar22 = vpaddd_avx(auVar22,auVar73 ^ auVar42 ^ auVar41 ^ auVar39 ^ auVar51);
        auVar42 = vpsrld_avx(local_1c0._16_16_,0x13);
        auVar39 = vpslld_avx(local_1c0._16_16_,0xd);
        local_1a0._16_16_ = vpaddd_avx(auVar22,auVar53 ^ auVar40 ^ auVar52 ^ auVar42 ^ auVar39);
        auVar73 = vpsrld_avx(auVar11,6);
        auVar51 = vpslld_avx(auVar11,0x1a);
        auVar6 = vpaddd_avx(local_1a0._16_16_,auVar6);
        auVar39 = vpsrld_avx(auVar11,0xb);
        auVar52 = vpslld_avx(auVar11,0x15);
        auVar6 = vpaddd_avx(auVar6,pauVar29[0x16]);
        auVar40 = vpsrld_avx(auVar11,0x19);
        auVar53 = vpslld_avx(auVar11,7);
        auVar42 = vpandn_avx(auVar11,auVar10);
        auVar22 = vpand_avx(auVar11,auVar12);
        auVar76 = vpsrld_avx(auVar13,2);
        auVar41 = vpslld_avx(auVar13,0x1e);
        auVar6 = vpaddd_avx(auVar6,auVar73 ^ auVar51 ^ auVar39 ^ auVar52 ^ auVar40 ^ auVar53);
        auVar39 = vpsrld_avx(auVar13,0xd);
        auVar40 = vpslld_avx(auVar13,0x13);
        auVar6 = vpaddd_avx(auVar6,auVar42 ^ auVar22);
        auVar22 = vpand_avx(auVar9 ^ auVar8,auVar8 ^ auVar13);
        auVar42 = vpsrld_avx(auVar13,0x16);
        auVar51 = vpslld_avx(auVar13,10);
        auVar7 = vpaddd_avx(auVar7,auVar6);
        auVar6 = vpaddd_avx(auVar8 ^ auVar22,auVar6);
        auVar6 = vpaddd_avx(auVar6,auVar76 ^ auVar41 ^ auVar39 ^ auVar40 ^ auVar42 ^ auVar51);
        auVar22 = vpaddd_avx(local_180._0_16_,local_200._16_16_);
        auVar73 = vpsrld_avx(local_180._16_16_,3);
        auVar42 = vpsrld_avx(local_180._16_16_,7);
        auVar41 = vpslld_avx(local_180._16_16_,0x19);
        auVar39 = vpsrld_avx(local_180._16_16_,0x12);
        auVar51 = vpslld_avx(local_180._16_16_,0xe);
        auVar53 = vpsrld_avx(local_1a0._0_16_,10);
        auVar40 = vpsrld_avx(local_1a0._0_16_,0x11);
        auVar52 = vpslld_avx(local_1a0._0_16_,0xf);
        auVar22 = vpaddd_avx(auVar22,auVar73 ^ auVar42 ^ auVar41 ^ auVar39 ^ auVar51);
        auVar42 = vpsrld_avx(local_1a0._0_16_,0x13);
        auVar39 = vpslld_avx(local_1a0._0_16_,0xd);
        local_180._0_16_ = vpaddd_avx(auVar22,auVar53 ^ auVar40 ^ auVar52 ^ auVar42 ^ auVar39);
        auVar73 = vpsrld_avx(auVar7,6);
        auVar51 = vpslld_avx(auVar7,0x1a);
        auVar10 = vpaddd_avx(local_180._0_16_,auVar10);
        auVar39 = vpsrld_avx(auVar7,0xb);
        auVar52 = vpslld_avx(auVar7,0x15);
        auVar10 = vpaddd_avx(auVar10,pauVar29[0x18]);
        auVar40 = vpsrld_avx(auVar7,0x19);
        auVar53 = vpslld_avx(auVar7,7);
        auVar42 = vpandn_avx(auVar7,auVar12);
        auVar22 = vpand_avx(auVar7,auVar11);
        auVar76 = vpsrld_avx(auVar6,2);
        auVar41 = vpslld_avx(auVar6,0x1e);
        auVar10 = vpaddd_avx(auVar10,auVar73 ^ auVar51 ^ auVar39 ^ auVar52 ^ auVar40 ^ auVar53);
        auVar39 = vpsrld_avx(auVar6,0xd);
        auVar40 = vpslld_avx(auVar6,0x13);
        auVar10 = vpaddd_avx(auVar10,auVar42 ^ auVar22);
        auVar22 = vpand_avx(auVar8 ^ auVar13,auVar13 ^ auVar6);
        auVar42 = vpsrld_avx(auVar6,0x16);
        auVar51 = vpslld_avx(auVar6,10);
        auVar9 = vpaddd_avx(auVar9,auVar10);
        auVar10 = vpaddd_avx(auVar13 ^ auVar22,auVar10);
        auVar10 = vpaddd_avx(auVar10,auVar76 ^ auVar41 ^ auVar39 ^ auVar40 ^ auVar42 ^ auVar51);
        auVar22 = vpaddd_avx(local_180._16_16_,local_1e0._0_16_);
        auVar73 = vpsrld_avx(local_160._0_16_,3);
        auVar42 = vpsrld_avx(local_160._0_16_,7);
        auVar41 = vpslld_avx(local_160._0_16_,0x19);
        auVar39 = vpsrld_avx(local_160._0_16_,0x12);
        auVar51 = vpslld_avx(local_160._0_16_,0xe);
        auVar53 = vpsrld_avx(local_1a0._16_16_,10);
        auVar40 = vpsrld_avx(local_1a0._16_16_,0x11);
        auVar52 = vpslld_avx(local_1a0._16_16_,0xf);
        auVar22 = vpaddd_avx(auVar22,auVar73 ^ auVar42 ^ auVar41 ^ auVar39 ^ auVar51);
        auVar42 = vpsrld_avx(local_1a0._16_16_,0x13);
        auVar39 = vpslld_avx(local_1a0._16_16_,0xd);
        local_180._16_16_ = vpaddd_avx(auVar22,auVar53 ^ auVar40 ^ auVar52 ^ auVar42 ^ auVar39);
        auVar73 = vpsrld_avx(auVar9,6);
        auVar51 = vpslld_avx(auVar9,0x1a);
        auVar12 = vpaddd_avx(local_180._16_16_,auVar12);
        auVar39 = vpsrld_avx(auVar9,0xb);
        auVar52 = vpslld_avx(auVar9,0x15);
        auVar12 = vpaddd_avx(auVar12,pauVar29[0x1a]);
        auVar40 = vpsrld_avx(auVar9,0x19);
        auVar53 = vpslld_avx(auVar9,7);
        auVar42 = vpandn_avx(auVar9,auVar11);
        auVar22 = vpand_avx(auVar9,auVar7);
        auVar76 = vpsrld_avx(auVar10,2);
        auVar41 = vpslld_avx(auVar10,0x1e);
        auVar12 = vpaddd_avx(auVar12,auVar73 ^ auVar51 ^ auVar39 ^ auVar52 ^ auVar40 ^ auVar53);
        auVar39 = vpsrld_avx(auVar10,0xd);
        auVar40 = vpslld_avx(auVar10,0x13);
        auVar12 = vpaddd_avx(auVar12,auVar42 ^ auVar22);
        auVar22 = vpand_avx(auVar13 ^ auVar6,auVar6 ^ auVar10);
        auVar42 = vpsrld_avx(auVar10,0x16);
        auVar51 = vpslld_avx(auVar10,10);
        auVar8 = vpaddd_avx(auVar8,auVar12);
        auVar12 = vpaddd_avx(auVar6 ^ auVar22,auVar12);
        auVar12 = vpaddd_avx(auVar12,auVar76 ^ auVar41 ^ auVar39 ^ auVar40 ^ auVar42 ^ auVar51);
        auVar22 = vpaddd_avx(local_160._0_16_,local_1e0._16_16_);
        auVar73 = vpsrld_avx(local_160._16_16_,3);
        auVar42 = vpsrld_avx(local_160._16_16_,7);
        auVar41 = vpslld_avx(local_160._16_16_,0x19);
        auVar39 = vpsrld_avx(local_160._16_16_,0x12);
        auVar51 = vpslld_avx(local_160._16_16_,0xe);
        auVar53 = vpsrld_avx(local_180._0_16_,10);
        auVar40 = vpsrld_avx(local_180._0_16_,0x11);
        auVar52 = vpslld_avx(local_180._0_16_,0xf);
        auVar22 = vpaddd_avx(auVar22,auVar73 ^ auVar42 ^ auVar41 ^ auVar39 ^ auVar51);
        auVar42 = vpsrld_avx(local_180._0_16_,0x13);
        auVar39 = vpslld_avx(local_180._0_16_,0xd);
        local_160._0_16_ = vpaddd_avx(auVar22,auVar53 ^ auVar40 ^ auVar52 ^ auVar42 ^ auVar39);
        auVar73 = vpsrld_avx(auVar8,6);
        auVar51 = vpslld_avx(auVar8,0x1a);
        auVar11 = vpaddd_avx(local_160._0_16_,auVar11);
        auVar39 = vpsrld_avx(auVar8,0xb);
        auVar52 = vpslld_avx(auVar8,0x15);
        auVar11 = vpaddd_avx(auVar11,pauVar29[0x1c]);
        auVar40 = vpsrld_avx(auVar8,0x19);
        auVar53 = vpslld_avx(auVar8,7);
        auVar42 = vpandn_avx(auVar8,auVar7);
        auVar22 = vpand_avx(auVar8,auVar9);
        auVar76 = vpsrld_avx(auVar12,2);
        auVar41 = vpslld_avx(auVar12,0x1e);
        auVar11 = vpaddd_avx(auVar11,auVar73 ^ auVar51 ^ auVar39 ^ auVar52 ^ auVar40 ^ auVar53);
        auVar39 = vpsrld_avx(auVar12,0xd);
        auVar51 = vpslld_avx(auVar12,0x13);
        auVar11 = vpaddd_avx(auVar11,auVar42 ^ auVar22);
        auVar42 = vpand_avx(auVar6 ^ auVar10,auVar10 ^ auVar12);
        auVar40 = vpsrld_avx(auVar12,0x16);
        auVar52 = vpslld_avx(auVar12,10);
        auVar22 = vpaddd_avx(auVar13,auVar11);
        auVar11 = vpaddd_avx(auVar10 ^ auVar42,auVar11);
        auVar11 = vpaddd_avx(auVar11,auVar76 ^ auVar41 ^ auVar39 ^ auVar51 ^ auVar40 ^ auVar52);
        auVar13 = vpaddd_avx(local_160._16_16_,local_1c0._0_16_);
        auVar73 = vpsrld_avx(local_140._0_16_,3);
        auVar42 = vpsrld_avx(local_140._0_16_,7);
        auVar41 = vpslld_avx(local_140._0_16_,0x19);
        auVar39 = vpsrld_avx(local_140._0_16_,0x12);
        auVar51 = vpslld_avx(local_140._0_16_,0xe);
        auVar53 = vpsrld_avx(local_180._16_16_,10);
        auVar40 = vpsrld_avx(local_180._16_16_,0x11);
        auVar52 = vpslld_avx(local_180._16_16_,0xf);
        auVar13 = vpaddd_avx(auVar13,auVar73 ^ auVar42 ^ auVar41 ^ auVar39 ^ auVar51);
        auVar42 = vpsrld_avx(local_180._16_16_,0x13);
        auVar39 = vpslld_avx(local_180._16_16_,0xd);
        local_160._16_16_ = vpaddd_avx(auVar13,auVar53 ^ auVar40 ^ auVar52 ^ auVar42 ^ auVar39);
        auVar73 = vpsrld_avx(auVar22,6);
        auVar51 = vpslld_avx(auVar22,0x1a);
        auVar7 = vpaddd_avx(local_160._16_16_,auVar7);
        auVar39 = vpsrld_avx(auVar22,0xb);
        auVar52 = vpslld_avx(auVar22,0x15);
        auVar7 = vpaddd_avx(auVar7,pauVar29[0x1e]);
        auVar40 = vpsrld_avx(auVar22,0x19);
        auVar53 = vpslld_avx(auVar22,7);
        auVar42 = vpandn_avx(auVar22,auVar9);
        auVar13 = vpand_avx(auVar22,auVar8);
        auVar76 = vpsrld_avx(auVar11,2);
        auVar41 = vpslld_avx(auVar11,0x1e);
        auVar7 = vpaddd_avx(auVar7,auVar73 ^ auVar51 ^ auVar39 ^ auVar52 ^ auVar40 ^ auVar53);
        auVar39 = vpsrld_avx(auVar11,0xd);
        auVar40 = vpslld_avx(auVar11,0x13);
        auVar7 = vpaddd_avx(auVar7,auVar42 ^ auVar13);
        auVar13 = vpand_avx(auVar10 ^ auVar12,auVar12 ^ auVar11);
        auVar42 = vpsrld_avx(auVar11,0x16);
        auVar51 = vpslld_avx(auVar11,10);
        auVar6 = vpaddd_avx(auVar6,auVar7);
        auVar7 = vpaddd_avx(auVar12 ^ auVar13,auVar7);
        auVar7 = vpaddd_avx(auVar7,auVar76 ^ auVar41 ^ auVar39 ^ auVar40 ^ auVar42 ^ auVar51);
        auVar13 = vpaddd_avx(local_140._0_16_,local_1c0._16_16_);
        auVar73 = vpsrld_avx(local_140._16_16_,3);
        auVar42 = vpsrld_avx(local_140._16_16_,7);
        auVar41 = vpslld_avx(local_140._16_16_,0x19);
        auVar39 = vpsrld_avx(local_140._16_16_,0x12);
        auVar51 = vpslld_avx(local_140._16_16_,0xe);
        auVar53 = vpsrld_avx(local_160._0_16_,10);
        auVar40 = vpsrld_avx(local_160._0_16_,0x11);
        auVar52 = vpslld_avx(local_160._0_16_,0xf);
        auVar13 = vpaddd_avx(auVar13,auVar73 ^ auVar42 ^ auVar41 ^ auVar39 ^ auVar51);
        auVar42 = vpsrld_avx(local_160._0_16_,0x13);
        auVar39 = vpslld_avx(local_160._0_16_,0xd);
        local_140._0_16_ = vpaddd_avx(auVar13,auVar53 ^ auVar40 ^ auVar52 ^ auVar42 ^ auVar39);
        auVar73 = vpsrld_avx(auVar6,6);
        auVar51 = vpslld_avx(auVar6,0x1a);
        auVar9 = vpaddd_avx(local_140._0_16_,auVar9);
        auVar39 = vpsrld_avx(auVar6,0xb);
        auVar52 = vpslld_avx(auVar6,0x15);
        auVar9 = vpaddd_avx(auVar9,pauVar29[0x20]);
        auVar40 = vpsrld_avx(auVar6,0x19);
        auVar53 = vpslld_avx(auVar6,7);
        auVar42 = vpandn_avx(auVar6,auVar8);
        auVar13 = vpand_avx(auVar6,auVar22);
        auVar76 = vpsrld_avx(auVar7,2);
        auVar41 = vpslld_avx(auVar7,0x1e);
        auVar9 = vpaddd_avx(auVar9,auVar73 ^ auVar51 ^ auVar39 ^ auVar52 ^ auVar40 ^ auVar53);
        auVar39 = vpsrld_avx(auVar7,0xd);
        auVar51 = vpslld_avx(auVar7,0x13);
        auVar9 = vpaddd_avx(auVar9,auVar42 ^ auVar13);
        auVar42 = vpand_avx(auVar12 ^ auVar11,auVar11 ^ auVar7);
        auVar40 = vpsrld_avx(auVar7,0x16);
        auVar52 = vpslld_avx(auVar7,10);
        auVar13 = vpaddd_avx(auVar10,auVar9);
        auVar9 = vpaddd_avx(auVar11 ^ auVar42,auVar9);
        auVar9 = vpaddd_avx(auVar9,auVar76 ^ auVar41 ^ auVar39 ^ auVar51 ^ auVar40 ^ auVar52);
        auVar10 = vpaddd_avx(local_140._16_16_,local_1a0._0_16_);
        auVar73 = vpsrld_avx(local_120._0_16_,3);
        auVar42 = vpsrld_avx(local_120._0_16_,7);
        auVar41 = vpslld_avx(local_120._0_16_,0x19);
        auVar39 = vpsrld_avx(local_120._0_16_,0x12);
        auVar51 = vpslld_avx(local_120._0_16_,0xe);
        auVar53 = vpsrld_avx(local_160._16_16_,10);
        auVar40 = vpsrld_avx(local_160._16_16_,0x11);
        auVar52 = vpslld_avx(local_160._16_16_,0xf);
        auVar10 = vpaddd_avx(auVar10,auVar73 ^ auVar42 ^ auVar41 ^ auVar39 ^ auVar51);
        auVar42 = vpsrld_avx(local_160._16_16_,0x13);
        auVar39 = vpslld_avx(local_160._16_16_,0xd);
        local_140._16_16_ = vpaddd_avx(auVar10,auVar53 ^ auVar40 ^ auVar52 ^ auVar42 ^ auVar39);
        auVar73 = vpsrld_avx(auVar13,6);
        auVar51 = vpslld_avx(auVar13,0x1a);
        auVar8 = vpaddd_avx(local_140._16_16_,auVar8);
        auVar39 = vpsrld_avx(auVar13,0xb);
        auVar52 = vpslld_avx(auVar13,0x15);
        auVar8 = vpaddd_avx(auVar8,pauVar29[0x22]);
        auVar40 = vpsrld_avx(auVar13,0x19);
        auVar53 = vpslld_avx(auVar13,7);
        auVar42 = vpandn_avx(auVar13,auVar22);
        auVar10 = vpand_avx(auVar13,auVar6);
        auVar76 = vpsrld_avx(auVar9,2);
        auVar41 = vpslld_avx(auVar9,0x1e);
        auVar8 = vpaddd_avx(auVar8,auVar73 ^ auVar51 ^ auVar39 ^ auVar52 ^ auVar40 ^ auVar53);
        auVar39 = vpsrld_avx(auVar9,0xd);
        auVar40 = vpslld_avx(auVar9,0x13);
        auVar8 = vpaddd_avx(auVar8,auVar42 ^ auVar10);
        auVar10 = vpand_avx(auVar11 ^ auVar7,auVar7 ^ auVar9);
        auVar42 = vpsrld_avx(auVar9,0x16);
        auVar51 = vpslld_avx(auVar9,10);
        auVar12 = vpaddd_avx(auVar12,auVar8);
        auVar8 = vpaddd_avx(auVar7 ^ auVar10,auVar8);
        auVar8 = vpaddd_avx(auVar8,auVar76 ^ auVar41 ^ auVar39 ^ auVar40 ^ auVar42 ^ auVar51);
        auVar10 = vpaddd_avx(local_120._0_16_,local_1a0._16_16_);
        auVar73 = vpsrld_avx(local_120._16_16_,3);
        auVar42 = vpsrld_avx(local_120._16_16_,7);
        auVar41 = vpslld_avx(local_120._16_16_,0x19);
        auVar39 = vpsrld_avx(local_120._16_16_,0x12);
        auVar51 = vpslld_avx(local_120._16_16_,0xe);
        auVar53 = vpsrld_avx(local_140._0_16_,10);
        auVar40 = vpsrld_avx(local_140._0_16_,0x11);
        auVar52 = vpslld_avx(local_140._0_16_,0xf);
        auVar10 = vpaddd_avx(auVar10,auVar73 ^ auVar42 ^ auVar41 ^ auVar39 ^ auVar51);
        auVar42 = vpsrld_avx(local_140._0_16_,0x13);
        auVar39 = vpslld_avx(local_140._0_16_,0xd);
        local_120._0_16_ = vpaddd_avx(auVar10,auVar53 ^ auVar40 ^ auVar52 ^ auVar42 ^ auVar39);
        auVar73 = vpsrld_avx(auVar12,6);
        auVar51 = vpslld_avx(auVar12,0x1a);
        auVar10 = vpaddd_avx(local_120._0_16_,auVar22);
        auVar39 = vpsrld_avx(auVar12,0xb);
        auVar52 = vpslld_avx(auVar12,0x15);
        auVar10 = vpaddd_avx(auVar10,pauVar29[0x24]);
        auVar40 = vpsrld_avx(auVar12,0x19);
        auVar53 = vpslld_avx(auVar12,7);
        auVar42 = vpandn_avx(auVar12,auVar6);
        auVar22 = vpand_avx(auVar12,auVar13);
        auVar76 = vpsrld_avx(auVar8,2);
        auVar41 = vpslld_avx(auVar8,0x1e);
        auVar10 = vpaddd_avx(auVar10,auVar73 ^ auVar51 ^ auVar39 ^ auVar52 ^ auVar40 ^ auVar53);
        auVar39 = vpsrld_avx(auVar8,0xd);
        auVar40 = vpslld_avx(auVar8,0x13);
        auVar10 = vpaddd_avx(auVar10,auVar42 ^ auVar22);
        auVar22 = vpand_avx(auVar7 ^ auVar9,auVar9 ^ auVar8);
        auVar42 = vpsrld_avx(auVar8,0x16);
        auVar51 = vpslld_avx(auVar8,10);
        auVar11 = vpaddd_avx(auVar11,auVar10);
        auVar10 = vpaddd_avx(auVar9 ^ auVar22,auVar10);
        auVar22 = vpaddd_avx(auVar10,auVar76 ^ auVar41 ^ auVar39 ^ auVar40 ^ auVar42 ^ auVar51);
        auVar10 = vpaddd_avx(local_120._16_16_,local_180._0_16_);
        auVar73 = vpsrld_avx(auVar43,3);
        auVar42 = vpsrld_avx(auVar43,7);
        auVar41 = vpslld_avx(auVar43,0x19);
        auVar39 = vpsrld_avx(auVar43,0x12);
        auVar51 = vpslld_avx(auVar43,0xe);
        auVar53 = vpsrld_avx(local_140._16_16_,10);
        auVar40 = vpsrld_avx(local_140._16_16_,0x11);
        auVar52 = vpslld_avx(local_140._16_16_,0xf);
        auVar10 = vpaddd_avx(auVar10,auVar73 ^ auVar42 ^ auVar41 ^ auVar39 ^ auVar51);
        auVar42 = vpsrld_avx(local_140._16_16_,0x13);
        auVar39 = vpslld_avx(local_140._16_16_,0xd);
        local_120._16_16_ = vpaddd_avx(auVar10,auVar53 ^ auVar40 ^ auVar52 ^ auVar42 ^ auVar39);
        auVar76 = vpsrld_avx(auVar11,6);
        auVar52 = vpslld_avx(auVar11,0x1a);
        auVar6 = vpaddd_avx(local_120._16_16_,auVar6);
        auVar40 = vpsrld_avx(auVar11,0xb);
        auVar53 = vpslld_avx(auVar11,0x15);
        auVar6 = vpaddd_avx(auVar6,pauVar29[0x26]);
        auVar41 = vpsrld_avx(auVar11,0x19);
        auVar73 = vpslld_avx(auVar11,7);
        auVar42 = vpandn_avx(auVar11,auVar13);
        auVar10 = vpand_avx(auVar11,auVar12);
        auVar75 = vpsrld_avx(auVar22,2);
        auVar51 = vpslld_avx(auVar22,0x1e);
        auVar39 = auVar8 ^ auVar22;
        auVar6 = vpaddd_avx(auVar6,auVar76 ^ auVar52 ^ auVar40 ^ auVar53 ^ auVar41 ^ auVar73);
        auVar40 = vpsrld_avx(auVar22,0xd);
        auVar41 = vpslld_avx(auVar22,0x13);
        auVar6 = vpaddd_avx(auVar6,auVar42 ^ auVar10);
        auVar10 = vpand_avx(auVar9 ^ auVar8,auVar39);
        auVar42 = vpsrld_avx(auVar22,0x16);
        auVar52 = vpslld_avx(auVar22,10);
        auVar7 = vpaddd_avx(auVar7,auVar6);
        auVar6 = vpaddd_avx(auVar8 ^ auVar10,auVar6);
        auVar6 = vpaddd_avx(auVar6,auVar75 ^ auVar51 ^ auVar40 ^ auVar41 ^ auVar42 ^ auVar52);
        iVar27 = iVar27 + -1;
        pauVar29 = pauVar29 + 0x20;
      } while (iVar27 != 0);
      if ((int)local_100._0_4_ < 2) {
        puVar31 = (uint *)&DAT_00107680;
      }
      if ((int)local_100._4_4_ < 2) {
        puVar33 = (uint *)&DAT_00107680;
      }
      if ((int)local_100._8_4_ < 2) {
        puVar35 = (undefined4 *)&DAT_00107680;
      }
      if ((int)local_100._12_4_ < 2) {
        puVar37 = (undefined4 *)&DAT_00107680;
      }
      auVar42 = vpcmpgtd_avx(local_100,(undefined1  [16])0x0);
      auVar43 = vpaddd_avx(local_100,auVar42);
      auVar6 = vpand_avx(auVar6,auVar42);
      auVar10 = vpand_avx(auVar22,auVar42);
      auVar8 = vpand_avx(auVar8,auVar42);
      auVar9 = vpand_avx(auVar9,auVar42);
      auVar6 = vpaddd_avx(auVar6,*(undefined1 (*) [16])param_1[-4]);
      auVar22 = vpand_avx(auVar7,auVar42);
      auVar7 = vpaddd_avx(auVar10,*(undefined1 (*) [16])param_1[-3]);
      auVar11 = vpand_avx(auVar11,auVar42);
      auVar8 = vpaddd_avx(auVar8,*(undefined1 (*) [16])param_1[-2]);
      auVar12 = vpand_avx(auVar12,auVar42);
      auVar9 = vpaddd_avx(auVar9,*(undefined1 (*) [16])param_1[-1]);
      auVar13 = vpand_avx(auVar13,auVar42);
      auVar10 = vpaddd_avx(auVar22,*(undefined1 (*) [16])*param_1);
      auVar11 = vpaddd_avx(auVar11,*(undefined1 (*) [16])param_1[1]);
      *(undefined1 (*) [16])param_1[-4] = auVar6;
      auVar12 = vpaddd_avx(auVar12,*(undefined1 (*) [16])param_1[2]);
      *(undefined1 (*) [16])param_1[-3] = auVar7;
      auVar13 = vpaddd_avx(auVar13,*(undefined1 (*) [16])param_1[3]);
      *(undefined1 (*) [16])param_1[-2] = auVar8;
      *(undefined1 (*) [16])param_1[-1] = auVar9;
      *(undefined1 (*) [16])*param_1 = auVar10;
      *(undefined1 (*) [16])param_1[1] = auVar11;
      *(undefined1 (*) [16])param_1[2] = auVar12;
      *(undefined1 (*) [16])param_1[3] = auVar13;
      local_100 = auVar43;
      auVar15 = _local_100;
      iVar28 = iVar28 + -1;
    } while (iVar28 != 0);
    uStack_e8 = auVar14._24_4_;
    param_1 = (undefined1 (*) [32])(*param_1 + 0x10);
    param_2 = param_2 + 8;
    param_3 = uStack_e8 - 1;
    _local_100 = auVar15;
    if (param_3 == 0) {
      return;
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sha256_multi_block_avx2(undefined1 (*param_1) [32],undefined8 *param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  undefined1 (*pauVar4) [32];
  uint *puVar5;
  undefined1 auVar6 [32];
  undefined1 auVar7 [32];
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  undefined1 auVar13 [32];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [32];
  int iVar18;
  int iVar19;
  undefined1 (*pauVar20) [32];
  uint *puVar21;
  uint *puVar22;
  undefined4 *puVar23;
  undefined4 *puVar24;
  uint *puVar25;
  uint *puVar26;
  undefined4 *puVar27;
  undefined4 *puVar28;
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  undefined1 auVar38 [32];
  undefined1 auVar39 [32];
  undefined1 auVar40 [32];
  undefined1 auVar41 [32];
  undefined1 auVar42 [32];
  undefined1 auVar43 [32];
  undefined1 auVar44 [64];
  undefined1 auVar45 [32];
  undefined1 auVar46 [32];
  undefined1 auVar47 [32];
  undefined1 local_2e0 [32];
  undefined1 local_2c0 [32];
  undefined1 local_2a0 [32];
  undefined1 local_280 [32];
  undefined1 local_260 [32];
  undefined1 local_240 [32];
  undefined1 local_220 [32];
  undefined1 local_200 [32];
  undefined1 local_1e0 [32];
  undefined1 local_1c0 [32];
  undefined1 local_1a0 [32];
  undefined1 local_180 [32];
  undefined1 local_160 [32];
  undefined1 local_140 [32];
  undefined1 local_120 [32];
  undefined1 local_100 [32];
  
  pauVar4 = param_1 + 4;
  puVar25 = (uint *)*param_2;
  local_100._0_4_ = *(undefined4 *)(param_2 + 1);
  iVar19 = local_100._0_4_;
  if ((int)local_100._0_4_ < 1) {
    puVar25 = (uint *)&DAT_00107680;
    iVar19 = 0;
  }
  puVar26 = (uint *)param_2[2];
  local_100._4_4_ = *(undefined4 *)(param_2 + 3);
  if (iVar19 < (int)local_100._4_4_) {
    iVar19 = local_100._4_4_;
  }
  if ((int)local_100._4_4_ < 1) {
    puVar26 = (uint *)&DAT_00107680;
  }
  puVar27 = (undefined4 *)param_2[4];
  local_100._8_4_ = *(undefined4 *)(param_2 + 5);
  if (iVar19 < (int)local_100._8_4_) {
    iVar19 = local_100._8_4_;
  }
  if ((int)local_100._8_4_ < 1) {
    puVar27 = (undefined4 *)&DAT_00107680;
  }
  puVar28 = (undefined4 *)param_2[6];
  local_100._12_4_ = *(undefined4 *)(param_2 + 7);
  if (iVar19 < (int)local_100._12_4_) {
    iVar19 = local_100._12_4_;
  }
  if ((int)local_100._12_4_ < 1) {
    puVar28 = (undefined4 *)&DAT_00107680;
  }
  puVar21 = (uint *)param_2[8];
  local_100._16_4_ = *(undefined4 *)(param_2 + 9);
  if (iVar19 < (int)local_100._16_4_) {
    iVar19 = local_100._16_4_;
  }
  if ((int)local_100._16_4_ < 1) {
    puVar21 = (uint *)&DAT_00107680;
  }
  puVar22 = (uint *)param_2[10];
  local_100._20_4_ = *(undefined4 *)(param_2 + 0xb);
  if (iVar19 < (int)local_100._20_4_) {
    iVar19 = local_100._20_4_;
  }
  if ((int)local_100._20_4_ < 1) {
    puVar22 = (uint *)&DAT_00107680;
  }
  puVar23 = (undefined4 *)param_2[0xc];
  local_100._24_4_ = *(undefined4 *)(param_2 + 0xd);
  if (iVar19 < (int)local_100._24_4_) {
    iVar19 = local_100._24_4_;
  }
  if ((int)local_100._24_4_ < 1) {
    puVar23 = (undefined4 *)&DAT_00107680;
  }
  puVar24 = (undefined4 *)param_2[0xe];
  local_100._28_4_ = *(undefined4 *)(param_2 + 0xf);
  if (iVar19 < (int)local_100._28_4_) {
    iVar19 = local_100._28_4_;
  }
  if ((int)local_100._28_4_ < 1) {
    puVar24 = (undefined4 *)&DAT_00107680;
  }
  auVar6 = *param_1;
  auVar7 = param_1[1];
  auVar8 = param_1[2];
  auVar9 = param_1[3];
  auVar10 = *pauVar4;
  auVar11 = param_1[5];
  auVar12 = param_1[6];
  auVar13 = param_1[7];
  auVar44 = ZEXT3264(_DAT_00107e00);
  do {
    auVar14 = vpinsrd_avx(ZEXT416(*puVar25),*puVar27,1);
    auVar15 = vpinsrd_avx(ZEXT416(*puVar21),*puVar23,1);
    auVar16 = vpinsrd_avx(ZEXT416(*puVar26),*puVar28,1);
    auVar33 = vpunpckldq_avx2(ZEXT1632(auVar14),ZEXT1632(auVar16));
    auVar14 = vpinsrd_avx(ZEXT416(*puVar22),*puVar24,1);
    auVar17 = vpunpckldq_avx2(ZEXT1632(auVar15),ZEXT1632(auVar14));
    auVar32._0_16_ = ZEXT116(0) * auVar17._0_16_ + ZEXT116(1) * auVar33._0_16_;
    auVar32._16_16_ = ZEXT116(0) * auVar33._16_16_ + ZEXT116(1) * auVar17._0_16_;
    auVar43 = auVar44._0_32_;
    auVar33 = vpshufb_avx2(auVar32,auVar43);
    auVar45 = vpsrld_avx2(auVar10,6);
    auVar34 = vpslld_avx2(auVar10,0x1a);
    auVar13 = vpaddd_avx2(auVar33,auVar13);
    auVar29 = vpsrld_avx2(auVar10,0xb);
    auVar35 = vpslld_avx2(auVar10,0x15);
    auVar13 = vpaddd_avx2(auVar13,_K256);
    auVar30 = vpsrld_avx2(auVar10,0x19);
    auVar36 = vpslld_avx2(auVar10,7);
    auVar32 = vpandn_avx2(auVar10,auVar12);
    auVar17 = vpand_avx2(auVar10,auVar11);
    auVar47 = vpsrld_avx2(auVar6,2);
    auVar31 = vpslld_avx2(auVar6,0x1e);
    auVar13 = vpaddd_avx2(auVar13,auVar45 ^ auVar34 ^ auVar29 ^ auVar35 ^ auVar30 ^ auVar36);
    auVar29 = vpsrld_avx2(auVar6,0xd);
    auVar30 = vpslld_avx2(auVar6,0x13);
    auVar13 = vpaddd_avx2(auVar13,auVar32 ^ auVar17);
    auVar17 = vpand_avx2(auVar8 ^ auVar7,auVar7 ^ auVar6);
    auVar32 = vpsrld_avx2(auVar6,0x16);
    auVar34 = vpslld_avx2(auVar6,10);
    auVar9 = vpaddd_avx2(auVar9,auVar13);
    auVar13 = vpaddd_avx2(auVar7 ^ auVar17,auVar13);
    auVar13 = vpaddd_avx2(auVar13,auVar47 ^ auVar31 ^ auVar29 ^ auVar30 ^ auVar32 ^ auVar34);
    auVar14 = vpinsrd_avx(ZEXT416(puVar25[1]),puVar27[1],1);
    auVar15 = vpinsrd_avx(ZEXT416(puVar21[1]),puVar23[1],1);
    auVar16 = vpinsrd_avx(ZEXT416(puVar26[1]),puVar28[1],1);
    auVar17 = vpunpckldq_avx2(ZEXT1632(auVar14),ZEXT1632(auVar16));
    auVar14 = vpinsrd_avx(ZEXT416(puVar22[1]),puVar24[1],1);
    auVar32 = vpunpckldq_avx2(ZEXT1632(auVar15),ZEXT1632(auVar14));
    auVar29._0_16_ = ZEXT116(0) * auVar32._0_16_ + ZEXT116(1) * auVar17._0_16_;
    auVar29._16_16_ = ZEXT116(0) * auVar17._16_16_ + ZEXT116(1) * auVar32._0_16_;
    local_2e0 = vpshufb_avx2(auVar29,auVar43);
    auVar45 = vpsrld_avx2(auVar9,6);
    auVar34 = vpslld_avx2(auVar9,0x1a);
    auVar12 = vpaddd_avx2(local_2e0,auVar12);
    auVar29 = vpsrld_avx2(auVar9,0xb);
    auVar35 = vpslld_avx2(auVar9,0x15);
    auVar12 = vpaddd_avx2(auVar12,_DAT_00107620);
    auVar30 = vpsrld_avx2(auVar9,0x19);
    auVar36 = vpslld_avx2(auVar9,7);
    auVar32 = vpandn_avx2(auVar9,auVar11);
    auVar17 = vpand_avx2(auVar9,auVar10);
    auVar47 = vpsrld_avx2(auVar13,2);
    auVar31 = vpslld_avx2(auVar13,0x1e);
    auVar12 = vpaddd_avx2(auVar12,auVar45 ^ auVar34 ^ auVar29 ^ auVar35 ^ auVar30 ^ auVar36);
    auVar29 = vpsrld_avx2(auVar13,0xd);
    auVar30 = vpslld_avx2(auVar13,0x13);
    auVar12 = vpaddd_avx2(auVar12,auVar32 ^ auVar17);
    auVar17 = vpand_avx2(auVar7 ^ auVar6,auVar6 ^ auVar13);
    auVar32 = vpsrld_avx2(auVar13,0x16);
    auVar34 = vpslld_avx2(auVar13,10);
    auVar8 = vpaddd_avx2(auVar8,auVar12);
    auVar12 = vpaddd_avx2(auVar6 ^ auVar17,auVar12);
    auVar12 = vpaddd_avx2(auVar12,auVar47 ^ auVar31 ^ auVar29 ^ auVar30 ^ auVar32 ^ auVar34);
    auVar14 = vpinsrd_avx(ZEXT416(puVar25[2]),puVar27[2],1);
    auVar15 = vpinsrd_avx(ZEXT416(puVar21[2]),puVar23[2],1);
    auVar16 = vpinsrd_avx(ZEXT416(puVar26[2]),puVar28[2],1);
    auVar17 = vpunpckldq_avx2(ZEXT1632(auVar14),ZEXT1632(auVar16));
    auVar14 = vpinsrd_avx(ZEXT416(puVar22[2]),puVar24[2],1);
    auVar32 = vpunpckldq_avx2(ZEXT1632(auVar15),ZEXT1632(auVar14));
    auVar30._0_16_ = ZEXT116(0) * auVar32._0_16_ + ZEXT116(1) * auVar17._0_16_;
    auVar30._16_16_ = ZEXT116(0) * auVar17._16_16_ + ZEXT116(1) * auVar32._0_16_;
    local_2c0 = vpshufb_avx2(auVar30,auVar43);
    auVar45 = vpsrld_avx2(auVar8,6);
    auVar34 = vpslld_avx2(auVar8,0x1a);
    auVar11 = vpaddd_avx2(local_2c0,auVar11);
    auVar29 = vpsrld_avx2(auVar8,0xb);
    auVar35 = vpslld_avx2(auVar8,0x15);
    auVar11 = vpaddd_avx2(auVar11,_DAT_00107640);
    auVar30 = vpsrld_avx2(auVar8,0x19);
    auVar36 = vpslld_avx2(auVar8,7);
    auVar32 = vpandn_avx2(auVar8,auVar10);
    auVar17 = vpand_avx2(auVar8,auVar9);
    auVar47 = vpsrld_avx2(auVar12,2);
    auVar31 = vpslld_avx2(auVar12,0x1e);
    auVar11 = vpaddd_avx2(auVar11,auVar45 ^ auVar34 ^ auVar29 ^ auVar35 ^ auVar30 ^ auVar36);
    auVar29 = vpsrld_avx2(auVar12,0xd);
    auVar30 = vpslld_avx2(auVar12,0x13);
    auVar11 = vpaddd_avx2(auVar11,auVar32 ^ auVar17);
    auVar17 = vpand_avx2(auVar6 ^ auVar13,auVar13 ^ auVar12);
    auVar32 = vpsrld_avx2(auVar12,0x16);
    auVar34 = vpslld_avx2(auVar12,10);
    auVar7 = vpaddd_avx2(auVar7,auVar11);
    auVar11 = vpaddd_avx2(auVar13 ^ auVar17,auVar11);
    auVar11 = vpaddd_avx2(auVar11,auVar47 ^ auVar31 ^ auVar29 ^ auVar30 ^ auVar32 ^ auVar34);
    auVar14 = vpinsrd_avx(ZEXT416(puVar25[3]),puVar27[3],1);
    auVar15 = vpinsrd_avx(ZEXT416(puVar21[3]),puVar23[3],1);
    auVar16 = vpinsrd_avx(ZEXT416(puVar26[3]),puVar28[3],1);
    auVar17 = vpunpckldq_avx2(ZEXT1632(auVar14),ZEXT1632(auVar16));
    auVar14 = vpinsrd_avx(ZEXT416(puVar22[3]),puVar24[3],1);
    auVar32 = vpunpckldq_avx2(ZEXT1632(auVar15),ZEXT1632(auVar14));
    auVar31._0_16_ = ZEXT116(0) * auVar32._0_16_ + ZEXT116(1) * auVar17._0_16_;
    auVar31._16_16_ = ZEXT116(0) * auVar17._16_16_ + ZEXT116(1) * auVar32._0_16_;
    local_2a0 = vpshufb_avx2(auVar31,auVar43);
    auVar45 = vpsrld_avx2(auVar7,6);
    auVar34 = vpslld_avx2(auVar7,0x1a);
    auVar10 = vpaddd_avx2(local_2a0,auVar10);
    auVar29 = vpsrld_avx2(auVar7,0xb);
    auVar35 = vpslld_avx2(auVar7,0x15);
    auVar10 = vpaddd_avx2(auVar10,_DAT_00107660);
    auVar30 = vpsrld_avx2(auVar7,0x19);
    auVar36 = vpslld_avx2(auVar7,7);
    auVar32 = vpandn_avx2(auVar7,auVar9);
    auVar17 = vpand_avx2(auVar7,auVar8);
    auVar47 = vpsrld_avx2(auVar11,2);
    auVar31 = vpslld_avx2(auVar11,0x1e);
    auVar10 = vpaddd_avx2(auVar10,auVar45 ^ auVar34 ^ auVar29 ^ auVar35 ^ auVar30 ^ auVar36);
    auVar29 = vpsrld_avx2(auVar11,0xd);
    auVar30 = vpslld_avx2(auVar11,0x13);
    auVar10 = vpaddd_avx2(auVar10,auVar32 ^ auVar17);
    auVar17 = vpand_avx2(auVar13 ^ auVar12,auVar12 ^ auVar11);
    auVar32 = vpsrld_avx2(auVar11,0x16);
    auVar34 = vpslld_avx2(auVar11,10);
    auVar6 = vpaddd_avx2(auVar6,auVar10);
    auVar10 = vpaddd_avx2(auVar12 ^ auVar17,auVar10);
    auVar10 = vpaddd_avx2(auVar10,auVar47 ^ auVar31 ^ auVar29 ^ auVar30 ^ auVar32 ^ auVar34);
    auVar14 = vpinsrd_avx(ZEXT416(puVar25[4]),puVar27[4],1);
    auVar15 = vpinsrd_avx(ZEXT416(puVar21[4]),puVar23[4],1);
    auVar16 = vpinsrd_avx(ZEXT416(puVar26[4]),puVar28[4],1);
    auVar17 = vpunpckldq_avx2(ZEXT1632(auVar14),ZEXT1632(auVar16));
    auVar14 = vpinsrd_avx(ZEXT416(puVar22[4]),puVar24[4],1);
    auVar32 = vpunpckldq_avx2(ZEXT1632(auVar15),ZEXT1632(auVar14));
    auVar34._0_16_ = ZEXT116(0) * auVar32._0_16_ + ZEXT116(1) * auVar17._0_16_;
    auVar34._16_16_ = ZEXT116(0) * auVar17._16_16_ + ZEXT116(1) * auVar32._0_16_;
    local_280 = vpshufb_avx2(auVar34,auVar43);
    auVar45 = vpsrld_avx2(auVar6,6);
    auVar34 = vpslld_avx2(auVar6,0x1a);
    auVar9 = vpaddd_avx2(local_280,auVar9);
    auVar29 = vpsrld_avx2(auVar6,0xb);
    auVar35 = vpslld_avx2(auVar6,0x15);
    auVar9 = vpaddd_avx2(auVar9,_DAT_00107680);
    auVar30 = vpsrld_avx2(auVar6,0x19);
    auVar36 = vpslld_avx2(auVar6,7);
    auVar32 = vpandn_avx2(auVar6,auVar8);
    auVar17 = vpand_avx2(auVar6,auVar7);
    auVar47 = vpsrld_avx2(auVar10,2);
    auVar31 = vpslld_avx2(auVar10,0x1e);
    auVar9 = vpaddd_avx2(auVar9,auVar45 ^ auVar34 ^ auVar29 ^ auVar35 ^ auVar30 ^ auVar36);
    auVar29 = vpsrld_avx2(auVar10,0xd);
    auVar30 = vpslld_avx2(auVar10,0x13);
    auVar9 = vpaddd_avx2(auVar9,auVar32 ^ auVar17);
    auVar17 = vpand_avx2(auVar12 ^ auVar11,auVar11 ^ auVar10);
    auVar32 = vpsrld_avx2(auVar10,0x16);
    auVar34 = vpslld_avx2(auVar10,10);
    auVar13 = vpaddd_avx2(auVar13,auVar9);
    auVar9 = vpaddd_avx2(auVar11 ^ auVar17,auVar9);
    auVar9 = vpaddd_avx2(auVar9,auVar47 ^ auVar31 ^ auVar29 ^ auVar30 ^ auVar32 ^ auVar34);
    auVar14 = vpinsrd_avx(ZEXT416(puVar25[5]),puVar27[5],1);
    auVar15 = vpinsrd_avx(ZEXT416(puVar21[5]),puVar23[5],1);
    auVar16 = vpinsrd_avx(ZEXT416(puVar26[5]),puVar28[5],1);
    auVar17 = vpunpckldq_avx2(ZEXT1632(auVar14),ZEXT1632(auVar16));
    auVar14 = vpinsrd_avx(ZEXT416(puVar22[5]),puVar24[5],1);
    auVar32 = vpunpckldq_avx2(ZEXT1632(auVar15),ZEXT1632(auVar14));
    auVar35._0_16_ = ZEXT116(0) * auVar32._0_16_ + ZEXT116(1) * auVar17._0_16_;
    auVar35._16_16_ = ZEXT116(0) * auVar17._16_16_ + ZEXT116(1) * auVar32._0_16_;
    local_260 = vpshufb_avx2(auVar35,auVar43);
    auVar45 = vpsrld_avx2(auVar13,6);
    auVar34 = vpslld_avx2(auVar13,0x1a);
    auVar8 = vpaddd_avx2(local_260,auVar8);
    auVar29 = vpsrld_avx2(auVar13,0xb);
    auVar35 = vpslld_avx2(auVar13,0x15);
    auVar8 = vpaddd_avx2(auVar8,_DAT_001076a0);
    auVar30 = vpsrld_avx2(auVar13,0x19);
    auVar36 = vpslld_avx2(auVar13,7);
    auVar32 = vpandn_avx2(auVar13,auVar7);
    auVar17 = vpand_avx2(auVar13,auVar6);
    auVar47 = vpsrld_avx2(auVar9,2);
    auVar31 = vpslld_avx2(auVar9,0x1e);
    auVar8 = vpaddd_avx2(auVar8,auVar45 ^ auVar34 ^ auVar29 ^ auVar35 ^ auVar30 ^ auVar36);
    auVar29 = vpsrld_avx2(auVar9,0xd);
    auVar30 = vpslld_avx2(auVar9,0x13);
    auVar8 = vpaddd_avx2(auVar8,auVar32 ^ auVar17);
    auVar17 = vpand_avx2(auVar11 ^ auVar10,auVar10 ^ auVar9);
    auVar32 = vpsrld_avx2(auVar9,0x16);
    auVar34 = vpslld_avx2(auVar9,10);
    auVar12 = vpaddd_avx2(auVar12,auVar8);
    auVar8 = vpaddd_avx2(auVar10 ^ auVar17,auVar8);
    auVar8 = vpaddd_avx2(auVar8,auVar47 ^ auVar31 ^ auVar29 ^ auVar30 ^ auVar32 ^ auVar34);
    auVar14 = vpinsrd_avx(ZEXT416(puVar25[6]),puVar27[6],1);
    auVar15 = vpinsrd_avx(ZEXT416(puVar21[6]),puVar23[6],1);
    auVar16 = vpinsrd_avx(ZEXT416(puVar26[6]),puVar28[6],1);
    auVar17 = vpunpckldq_avx2(ZEXT1632(auVar14),ZEXT1632(auVar16));
    auVar14 = vpinsrd_avx(ZEXT416(puVar22[6]),puVar24[6],1);
    auVar32 = vpunpckldq_avx2(ZEXT1632(auVar15),ZEXT1632(auVar14));
    auVar36._0_16_ = ZEXT116(0) * auVar32._0_16_ + ZEXT116(1) * auVar17._0_16_;
    auVar36._16_16_ = ZEXT116(0) * auVar17._16_16_ + ZEXT116(1) * auVar32._0_16_;
    local_240 = vpshufb_avx2(auVar36,auVar43);
    auVar45 = vpsrld_avx2(auVar12,6);
    auVar34 = vpslld_avx2(auVar12,0x1a);
    auVar7 = vpaddd_avx2(local_240,auVar7);
    auVar29 = vpsrld_avx2(auVar12,0xb);
    auVar35 = vpslld_avx2(auVar12,0x15);
    auVar7 = vpaddd_avx2(auVar7,_DAT_001076c0);
    auVar30 = vpsrld_avx2(auVar12,0x19);
    auVar36 = vpslld_avx2(auVar12,7);
    auVar32 = vpandn_avx2(auVar12,auVar6);
    auVar17 = vpand_avx2(auVar12,auVar13);
    auVar47 = vpsrld_avx2(auVar8,2);
    auVar31 = vpslld_avx2(auVar8,0x1e);
    auVar7 = vpaddd_avx2(auVar7,auVar45 ^ auVar34 ^ auVar29 ^ auVar35 ^ auVar30 ^ auVar36);
    auVar29 = vpsrld_avx2(auVar8,0xd);
    auVar30 = vpslld_avx2(auVar8,0x13);
    auVar7 = vpaddd_avx2(auVar7,auVar32 ^ auVar17);
    auVar17 = vpand_avx2(auVar10 ^ auVar9,auVar9 ^ auVar8);
    auVar32 = vpsrld_avx2(auVar8,0x16);
    auVar34 = vpslld_avx2(auVar8,10);
    auVar11 = vpaddd_avx2(auVar11,auVar7);
    auVar7 = vpaddd_avx2(auVar9 ^ auVar17,auVar7);
    auVar7 = vpaddd_avx2(auVar7,auVar47 ^ auVar31 ^ auVar29 ^ auVar30 ^ auVar32 ^ auVar34);
    auVar14 = vpinsrd_avx(ZEXT416(puVar25[7]),puVar27[7],1);
    auVar15 = vpinsrd_avx(ZEXT416(puVar21[7]),puVar23[7],1);
    auVar16 = vpinsrd_avx(ZEXT416(puVar26[7]),puVar28[7],1);
    auVar17 = vpunpckldq_avx2(ZEXT1632(auVar14),ZEXT1632(auVar16));
    auVar14 = vpinsrd_avx(ZEXT416(puVar22[7]),puVar24[7],1);
    auVar32 = vpunpckldq_avx2(ZEXT1632(auVar15),ZEXT1632(auVar14));
    auVar45._0_16_ = ZEXT116(0) * auVar32._0_16_ + ZEXT116(1) * auVar17._0_16_;
    auVar45._16_16_ = ZEXT116(0) * auVar17._16_16_ + ZEXT116(1) * auVar32._0_16_;
    local_220 = vpshufb_avx2(auVar45,auVar43);
    auVar45 = vpsrld_avx2(auVar11,6);
    auVar34 = vpslld_avx2(auVar11,0x1a);
    auVar6 = vpaddd_avx2(local_220,auVar6);
    auVar29 = vpsrld_avx2(auVar11,0xb);
    auVar35 = vpslld_avx2(auVar11,0x15);
    auVar6 = vpaddd_avx2(auVar6,_DAT_001076e0);
    auVar30 = vpsrld_avx2(auVar11,0x19);
    auVar36 = vpslld_avx2(auVar11,7);
    auVar32 = vpandn_avx2(auVar11,auVar13);
    auVar17 = vpand_avx2(auVar11,auVar12);
    auVar47 = vpsrld_avx2(auVar7,2);
    auVar31 = vpslld_avx2(auVar7,0x1e);
    auVar6 = vpaddd_avx2(auVar6,auVar45 ^ auVar34 ^ auVar29 ^ auVar35 ^ auVar30 ^ auVar36);
    auVar29 = vpsrld_avx2(auVar7,0xd);
    auVar30 = vpslld_avx2(auVar7,0x13);
    auVar6 = vpaddd_avx2(auVar6,auVar32 ^ auVar17);
    auVar17 = vpand_avx2(auVar9 ^ auVar8,auVar8 ^ auVar7);
    auVar32 = vpsrld_avx2(auVar7,0x16);
    auVar34 = vpslld_avx2(auVar7,10);
    auVar10 = vpaddd_avx2(auVar10,auVar6);
    auVar6 = vpaddd_avx2(auVar8 ^ auVar17,auVar6);
    auVar6 = vpaddd_avx2(auVar6,auVar47 ^ auVar31 ^ auVar29 ^ auVar30 ^ auVar32 ^ auVar34);
    auVar14 = vpinsrd_avx(ZEXT416(puVar25[8]),puVar27[8],1);
    auVar15 = vpinsrd_avx(ZEXT416(puVar21[8]),puVar23[8],1);
    auVar16 = vpinsrd_avx(ZEXT416(puVar26[8]),puVar28[8],1);
    auVar17 = vpunpckldq_avx2(ZEXT1632(auVar14),ZEXT1632(auVar16));
    auVar14 = vpinsrd_avx(ZEXT416(puVar22[8]),puVar24[8],1);
    auVar32 = vpunpckldq_avx2(ZEXT1632(auVar15),ZEXT1632(auVar14));
    auVar47._0_16_ = ZEXT116(0) * auVar32._0_16_ + ZEXT116(1) * auVar17._0_16_;
    auVar47._16_16_ = ZEXT116(0) * auVar17._16_16_ + ZEXT116(1) * auVar32._0_16_;
    local_200 = vpshufb_avx2(auVar47,auVar43);
    auVar45 = vpsrld_avx2(auVar10,6);
    auVar34 = vpslld_avx2(auVar10,0x1a);
    auVar13 = vpaddd_avx2(local_200,auVar13);
    auVar29 = vpsrld_avx2(auVar10,0xb);
    auVar35 = vpslld_avx2(auVar10,0x15);
    auVar13 = vpaddd_avx2(auVar13,_DAT_00107700);
    auVar30 = vpsrld_avx2(auVar10,0x19);
    auVar36 = vpslld_avx2(auVar10,7);
    auVar32 = vpandn_avx2(auVar10,auVar12);
    auVar17 = vpand_avx2(auVar10,auVar11);
    auVar47 = vpsrld_avx2(auVar6,2);
    auVar31 = vpslld_avx2(auVar6,0x1e);
    auVar13 = vpaddd_avx2(auVar13,auVar45 ^ auVar34 ^ auVar29 ^ auVar35 ^ auVar30 ^ auVar36);
    auVar29 = vpsrld_avx2(auVar6,0xd);
    auVar30 = vpslld_avx2(auVar6,0x13);
    auVar13 = vpaddd_avx2(auVar13,auVar32 ^ auVar17);
    auVar17 = vpand_avx2(auVar8 ^ auVar7,auVar7 ^ auVar6);
    auVar32 = vpsrld_avx2(auVar6,0x16);
    auVar34 = vpslld_avx2(auVar6,10);
    auVar9 = vpaddd_avx2(auVar9,auVar13);
    auVar13 = vpaddd_avx2(auVar7 ^ auVar17,auVar13);
    auVar13 = vpaddd_avx2(auVar13,auVar47 ^ auVar31 ^ auVar29 ^ auVar30 ^ auVar32 ^ auVar34);
    auVar14 = vpinsrd_avx(ZEXT416(puVar25[9]),puVar27[9],1);
    auVar15 = vpinsrd_avx(ZEXT416(puVar21[9]),puVar23[9],1);
    auVar16 = vpinsrd_avx(ZEXT416(puVar26[9]),puVar28[9],1);
    auVar17 = vpunpckldq_avx2(ZEXT1632(auVar14),ZEXT1632(auVar16));
    auVar14 = vpinsrd_avx(ZEXT416(puVar22[9]),puVar24[9],1);
    auVar32 = vpunpckldq_avx2(ZEXT1632(auVar15),ZEXT1632(auVar14));
    auVar46._0_16_ = ZEXT116(0) * auVar32._0_16_ + ZEXT116(1) * auVar17._0_16_;
    auVar46._16_16_ = ZEXT116(0) * auVar17._16_16_ + ZEXT116(1) * auVar32._0_16_;
    local_1e0 = vpshufb_avx2(auVar46,auVar43);
    auVar45 = vpsrld_avx2(auVar9,6);
    auVar34 = vpslld_avx2(auVar9,0x1a);
    auVar12 = vpaddd_avx2(local_1e0,auVar12);
    auVar29 = vpsrld_avx2(auVar9,0xb);
    auVar35 = vpslld_avx2(auVar9,0x15);
    auVar12 = vpaddd_avx2(auVar12,_DAT_00107720);
    auVar30 = vpsrld_avx2(auVar9,0x19);
    auVar36 = vpslld_avx2(auVar9,7);
    auVar32 = vpandn_avx2(auVar9,auVar11);
    auVar17 = vpand_avx2(auVar9,auVar10);
    auVar47 = vpsrld_avx2(auVar13,2);
    auVar31 = vpslld_avx2(auVar13,0x1e);
    auVar12 = vpaddd_avx2(auVar12,auVar45 ^ auVar34 ^ auVar29 ^ auVar35 ^ auVar30 ^ auVar36);
    auVar29 = vpsrld_avx2(auVar13,0xd);
    auVar30 = vpslld_avx2(auVar13,0x13);
    auVar12 = vpaddd_avx2(auVar12,auVar32 ^ auVar17);
    auVar17 = vpand_avx2(auVar7 ^ auVar6,auVar6 ^ auVar13);
    auVar32 = vpsrld_avx2(auVar13,0x16);
    auVar34 = vpslld_avx2(auVar13,10);
    auVar8 = vpaddd_avx2(auVar8,auVar12);
    auVar12 = vpaddd_avx2(auVar6 ^ auVar17,auVar12);
    auVar12 = vpaddd_avx2(auVar12,auVar47 ^ auVar31 ^ auVar29 ^ auVar30 ^ auVar32 ^ auVar34);
    auVar14 = vpinsrd_avx(ZEXT416(puVar25[10]),puVar27[10],1);
    auVar15 = vpinsrd_avx(ZEXT416(puVar21[10]),puVar23[10],1);
    auVar16 = vpinsrd_avx(ZEXT416(puVar26[10]),puVar28[10],1);
    auVar17 = vpunpckldq_avx2(ZEXT1632(auVar14),ZEXT1632(auVar16));
    auVar14 = vpinsrd_avx(ZEXT416(puVar22[10]),puVar24[10],1);
    auVar32 = vpunpckldq_avx2(ZEXT1632(auVar15),ZEXT1632(auVar14));
    auVar37._0_16_ = ZEXT116(0) * auVar32._0_16_ + ZEXT116(1) * auVar17._0_16_;
    auVar37._16_16_ = ZEXT116(0) * auVar17._16_16_ + ZEXT116(1) * auVar32._0_16_;
    local_1c0 = vpshufb_avx2(auVar37,auVar43);
    auVar45 = vpsrld_avx2(auVar8,6);
    auVar34 = vpslld_avx2(auVar8,0x1a);
    auVar11 = vpaddd_avx2(local_1c0,auVar11);
    auVar29 = vpsrld_avx2(auVar8,0xb);
    auVar35 = vpslld_avx2(auVar8,0x15);
    auVar11 = vpaddd_avx2(auVar11,_DAT_00107740);
    auVar30 = vpsrld_avx2(auVar8,0x19);
    auVar36 = vpslld_avx2(auVar8,7);
    auVar32 = vpandn_avx2(auVar8,auVar10);
    auVar17 = vpand_avx2(auVar8,auVar9);
    auVar47 = vpsrld_avx2(auVar12,2);
    auVar31 = vpslld_avx2(auVar12,0x1e);
    auVar11 = vpaddd_avx2(auVar11,auVar45 ^ auVar34 ^ auVar29 ^ auVar35 ^ auVar30 ^ auVar36);
    auVar29 = vpsrld_avx2(auVar12,0xd);
    auVar30 = vpslld_avx2(auVar12,0x13);
    auVar11 = vpaddd_avx2(auVar11,auVar32 ^ auVar17);
    auVar17 = vpand_avx2(auVar6 ^ auVar13,auVar13 ^ auVar12);
    auVar32 = vpsrld_avx2(auVar12,0x16);
    auVar34 = vpslld_avx2(auVar12,10);
    auVar7 = vpaddd_avx2(auVar7,auVar11);
    auVar11 = vpaddd_avx2(auVar13 ^ auVar17,auVar11);
    auVar11 = vpaddd_avx2(auVar11,auVar47 ^ auVar31 ^ auVar29 ^ auVar30 ^ auVar32 ^ auVar34);
    auVar14 = vpinsrd_avx(ZEXT416(puVar25[0xb]),puVar27[0xb],1);
    auVar15 = vpinsrd_avx(ZEXT416(puVar21[0xb]),puVar23[0xb],1);
    auVar16 = vpinsrd_avx(ZEXT416(puVar26[0xb]),puVar28[0xb],1);
    auVar17 = vpunpckldq_avx2(ZEXT1632(auVar14),ZEXT1632(auVar16));
    auVar14 = vpinsrd_avx(ZEXT416(puVar22[0xb]),puVar24[0xb],1);
    auVar32 = vpunpckldq_avx2(ZEXT1632(auVar15),ZEXT1632(auVar14));
    auVar38._0_16_ = ZEXT116(0) * auVar32._0_16_ + ZEXT116(1) * auVar17._0_16_;
    auVar38._16_16_ = ZEXT116(0) * auVar17._16_16_ + ZEXT116(1) * auVar32._0_16_;
    local_1a0 = vpshufb_avx2(auVar38,auVar43);
    auVar45 = vpsrld_avx2(auVar7,6);
    auVar34 = vpslld_avx2(auVar7,0x1a);
    auVar10 = vpaddd_avx2(local_1a0,auVar10);
    auVar29 = vpsrld_avx2(auVar7,0xb);
    auVar35 = vpslld_avx2(auVar7,0x15);
    auVar10 = vpaddd_avx2(auVar10,_DAT_00107760);
    auVar30 = vpsrld_avx2(auVar7,0x19);
    auVar36 = vpslld_avx2(auVar7,7);
    auVar32 = vpandn_avx2(auVar7,auVar9);
    auVar17 = vpand_avx2(auVar7,auVar8);
    auVar47 = vpsrld_avx2(auVar11,2);
    auVar31 = vpslld_avx2(auVar11,0x1e);
    auVar10 = vpaddd_avx2(auVar10,auVar45 ^ auVar34 ^ auVar29 ^ auVar35 ^ auVar30 ^ auVar36);
    auVar29 = vpsrld_avx2(auVar11,0xd);
    auVar30 = vpslld_avx2(auVar11,0x13);
    auVar10 = vpaddd_avx2(auVar10,auVar32 ^ auVar17);
    auVar17 = vpand_avx2(auVar13 ^ auVar12,auVar12 ^ auVar11);
    auVar32 = vpsrld_avx2(auVar11,0x16);
    auVar34 = vpslld_avx2(auVar11,10);
    auVar6 = vpaddd_avx2(auVar6,auVar10);
    auVar10 = vpaddd_avx2(auVar12 ^ auVar17,auVar10);
    auVar10 = vpaddd_avx2(auVar10,auVar47 ^ auVar31 ^ auVar29 ^ auVar30 ^ auVar32 ^ auVar34);
    auVar14 = vpinsrd_avx(ZEXT416(puVar25[0xc]),puVar27[0xc],1);
    auVar15 = vpinsrd_avx(ZEXT416(puVar21[0xc]),puVar23[0xc],1);
    auVar16 = vpinsrd_avx(ZEXT416(puVar26[0xc]),puVar28[0xc],1);
    auVar17 = vpunpckldq_avx2(ZEXT1632(auVar14),ZEXT1632(auVar16));
    auVar14 = vpinsrd_avx(ZEXT416(puVar22[0xc]),puVar24[0xc],1);
    auVar32 = vpunpckldq_avx2(ZEXT1632(auVar15),ZEXT1632(auVar14));
    auVar39._0_16_ = ZEXT116(0) * auVar32._0_16_ + ZEXT116(1) * auVar17._0_16_;
    auVar39._16_16_ = ZEXT116(0) * auVar17._16_16_ + ZEXT116(1) * auVar32._0_16_;
    local_180 = vpshufb_avx2(auVar39,auVar43);
    auVar45 = vpsrld_avx2(auVar6,6);
    auVar34 = vpslld_avx2(auVar6,0x1a);
    auVar9 = vpaddd_avx2(local_180,auVar9);
    auVar29 = vpsrld_avx2(auVar6,0xb);
    auVar35 = vpslld_avx2(auVar6,0x15);
    auVar9 = vpaddd_avx2(auVar9,_DAT_00107780);
    auVar30 = vpsrld_avx2(auVar6,0x19);
    auVar36 = vpslld_avx2(auVar6,7);
    auVar32 = vpandn_avx2(auVar6,auVar8);
    auVar17 = vpand_avx2(auVar6,auVar7);
    auVar47 = vpsrld_avx2(auVar10,2);
    auVar31 = vpslld_avx2(auVar10,0x1e);
    auVar9 = vpaddd_avx2(auVar9,auVar45 ^ auVar34 ^ auVar29 ^ auVar35 ^ auVar30 ^ auVar36);
    auVar29 = vpsrld_avx2(auVar10,0xd);
    auVar34 = vpslld_avx2(auVar10,0x13);
    auVar9 = vpaddd_avx2(auVar9,auVar32 ^ auVar17);
    auVar32 = vpand_avx2(auVar12 ^ auVar11,auVar11 ^ auVar10);
    auVar30 = vpsrld_avx2(auVar10,0x16);
    auVar35 = vpslld_avx2(auVar10,10);
    auVar17 = vpaddd_avx2(auVar13,auVar9);
    auVar9 = vpaddd_avx2(auVar11 ^ auVar32,auVar9);
    auVar13 = vpaddd_avx2(auVar9,auVar47 ^ auVar31 ^ auVar29 ^ auVar34 ^ auVar30 ^ auVar35);
    auVar14 = vpinsrd_avx(ZEXT416(puVar25[0xd]),puVar27[0xd],1);
    auVar15 = vpinsrd_avx(ZEXT416(puVar21[0xd]),puVar23[0xd],1);
    auVar16 = vpinsrd_avx(ZEXT416(puVar26[0xd]),puVar28[0xd],1);
    auVar9 = vpunpckldq_avx2(ZEXT1632(auVar14),ZEXT1632(auVar16));
    auVar14 = vpinsrd_avx(ZEXT416(puVar22[0xd]),puVar24[0xd],1);
    auVar32 = vpunpckldq_avx2(ZEXT1632(auVar15),ZEXT1632(auVar14));
    auVar40._0_16_ = ZEXT116(0) * auVar32._0_16_ + ZEXT116(1) * auVar9._0_16_;
    auVar40._16_16_ = ZEXT116(0) * auVar9._16_16_ + ZEXT116(1) * auVar32._0_16_;
    local_160 = vpshufb_avx2(auVar40,auVar43);
    auVar45 = vpsrld_avx2(auVar17,6);
    auVar34 = vpslld_avx2(auVar17,0x1a);
    auVar8 = vpaddd_avx2(local_160,auVar8);
    auVar29 = vpsrld_avx2(auVar17,0xb);
    auVar35 = vpslld_avx2(auVar17,0x15);
    auVar8 = vpaddd_avx2(auVar8,_DAT_001077a0);
    auVar30 = vpsrld_avx2(auVar17,0x19);
    auVar36 = vpslld_avx2(auVar17,7);
    auVar32 = vpandn_avx2(auVar17,auVar7);
    auVar9 = vpand_avx2(auVar17,auVar6);
    auVar47 = vpsrld_avx2(auVar13,2);
    auVar31 = vpslld_avx2(auVar13,0x1e);
    auVar8 = vpaddd_avx2(auVar8,auVar45 ^ auVar34 ^ auVar29 ^ auVar35 ^ auVar30 ^ auVar36);
    auVar29 = vpsrld_avx2(auVar13,0xd);
    auVar34 = vpslld_avx2(auVar13,0x13);
    auVar8 = vpaddd_avx2(auVar8,auVar32 ^ auVar9);
    auVar32 = vpand_avx2(auVar11 ^ auVar10,auVar10 ^ auVar13);
    auVar30 = vpsrld_avx2(auVar13,0x16);
    auVar35 = vpslld_avx2(auVar13,10);
    auVar9 = vpaddd_avx2(auVar12,auVar8);
    auVar8 = vpaddd_avx2(auVar10 ^ auVar32,auVar8);
    auVar8 = vpaddd_avx2(auVar8,auVar47 ^ auVar31 ^ auVar29 ^ auVar34 ^ auVar30 ^ auVar35);
    auVar14 = vpinsrd_avx(ZEXT416(puVar25[0xe]),puVar27[0xe],1);
    auVar15 = vpinsrd_avx(ZEXT416(puVar21[0xe]),puVar23[0xe],1);
    auVar16 = vpinsrd_avx(ZEXT416(puVar26[0xe]),puVar28[0xe],1);
    auVar12 = vpunpckldq_avx2(ZEXT1632(auVar14),ZEXT1632(auVar16));
    auVar14 = vpinsrd_avx(ZEXT416(puVar22[0xe]),puVar24[0xe],1);
    auVar32 = vpunpckldq_avx2(ZEXT1632(auVar15),ZEXT1632(auVar14));
    auVar41._0_16_ = ZEXT116(0) * auVar32._0_16_ + ZEXT116(1) * auVar12._0_16_;
    auVar41._16_16_ = ZEXT116(0) * auVar12._16_16_ + ZEXT116(1) * auVar32._0_16_;
    local_140 = vpshufb_avx2(auVar41,auVar43);
    auVar45 = vpsrld_avx2(auVar9,6);
    auVar34 = vpslld_avx2(auVar9,0x1a);
    auVar7 = vpaddd_avx2(local_140,auVar7);
    auVar29 = vpsrld_avx2(auVar9,0xb);
    auVar35 = vpslld_avx2(auVar9,0x15);
    auVar7 = vpaddd_avx2(auVar7,_DAT_001077c0);
    auVar30 = vpsrld_avx2(auVar9,0x19);
    auVar36 = vpslld_avx2(auVar9,7);
    auVar32 = vpandn_avx2(auVar9,auVar6);
    auVar12 = vpand_avx2(auVar9,auVar17);
    auVar47 = vpsrld_avx2(auVar8,2);
    auVar31 = vpslld_avx2(auVar8,0x1e);
    auVar7 = vpaddd_avx2(auVar7,auVar45 ^ auVar34 ^ auVar29 ^ auVar35 ^ auVar30 ^ auVar36);
    auVar29 = vpsrld_avx2(auVar8,0xd);
    auVar30 = vpslld_avx2(auVar8,0x13);
    auVar7 = vpaddd_avx2(auVar7,auVar32 ^ auVar12);
    auVar12 = vpand_avx2(auVar10 ^ auVar13,auVar13 ^ auVar8);
    auVar32 = vpsrld_avx2(auVar8,0x16);
    auVar34 = vpslld_avx2(auVar8,10);
    auVar11 = vpaddd_avx2(auVar11,auVar7);
    auVar7 = vpaddd_avx2(auVar13 ^ auVar12,auVar7);
    auVar12 = vpaddd_avx2(auVar7,auVar47 ^ auVar31 ^ auVar29 ^ auVar30 ^ auVar32 ^ auVar34);
    puVar5 = puVar25 + 0xf;
    puVar25 = puVar25 + 0x10;
    puVar1 = puVar21 + 0xf;
    puVar21 = puVar21 + 0x10;
    puVar2 = puVar26 + 0xf;
    puVar26 = puVar26 + 0x10;
    puVar3 = puVar22 + 0xf;
    puVar22 = puVar22 + 0x10;
    auVar14 = vpinsrd_avx(ZEXT416(*puVar5),puVar27[0xf],1);
    puVar27 = puVar27 + 0x10;
    auVar15 = vpinsrd_avx(ZEXT416(*puVar1),puVar23[0xf],1);
    puVar23 = puVar23 + 0x10;
    auVar16 = vpinsrd_avx(ZEXT416(*puVar2),puVar28[0xf],1);
    puVar28 = puVar28 + 0x10;
    auVar7 = vpunpckldq_avx2(ZEXT1632(auVar14),ZEXT1632(auVar16));
    auVar14 = vpinsrd_avx(ZEXT416(*puVar3),puVar24[0xf],1);
    puVar24 = puVar24 + 0x10;
    auVar32 = vpunpckldq_avx2(ZEXT1632(auVar15),ZEXT1632(auVar14));
    auVar42._0_16_ = ZEXT116(0) * auVar32._0_16_ + ZEXT116(1) * auVar7._0_16_;
    auVar42._16_16_ = ZEXT116(0) * auVar7._16_16_ + ZEXT116(1) * auVar32._0_16_;
    local_120 = vpshufb_avx2(auVar42,auVar43);
    auVar47 = vpsrld_avx2(auVar11,6);
    auVar35 = vpslld_avx2(auVar11,0x1a);
    auVar6 = vpaddd_avx2(local_120,auVar6);
    auVar30 = vpsrld_avx2(auVar11,0xb);
    auVar36 = vpslld_avx2(auVar11,0x15);
    auVar6 = vpaddd_avx2(auVar6,_DAT_001077e0);
    auVar31 = vpsrld_avx2(auVar11,0x19);
    auVar45 = vpslld_avx2(auVar11,7);
    auVar32 = vpandn_avx2(auVar11,auVar17);
    auVar7 = vpand_avx2(auVar11,auVar9);
    auVar46 = vpsrld_avx2(auVar12,2);
    auVar34 = vpslld_avx2(auVar12,0x1e);
    auVar29 = auVar8 ^ auVar12;
    auVar6 = vpaddd_avx2(auVar6,auVar47 ^ auVar35 ^ auVar30 ^ auVar36 ^ auVar31 ^ auVar45);
    auVar30 = vpsrld_avx2(auVar12,0xd);
    auVar35 = vpslld_avx2(auVar12,0x13);
    auVar6 = vpaddd_avx2(auVar6,auVar32 ^ auVar7);
    auVar32 = vpand_avx2(auVar13 ^ auVar8,auVar29);
    auVar31 = vpsrld_avx2(auVar12,0x16);
    auVar36 = vpslld_avx2(auVar12,10);
    auVar7 = vpaddd_avx2(auVar10,auVar6);
    auVar6 = vpaddd_avx2(auVar8 ^ auVar32,auVar6);
    auVar6 = vpaddd_avx2(auVar6,auVar46 ^ auVar34 ^ auVar30 ^ auVar35 ^ auVar31 ^ auVar36);
    iVar18 = 3;
    pauVar20 = (undefined1 (*) [32])&DAT_00107780;
    do {
      auVar10 = vpaddd_avx2(auVar33,local_1e0);
      auVar45 = vpsrld_avx2(local_2e0,3);
      auVar33 = vpsrld_avx2(local_2e0,7);
      auVar31 = vpslld_avx2(local_2e0,0x19);
      auVar32 = vpsrld_avx2(local_2e0,0x12);
      auVar34 = vpslld_avx2(local_2e0,0xe);
      auVar36 = vpsrld_avx2(local_140,10);
      auVar30 = vpsrld_avx2(local_140,0x11);
      auVar35 = vpslld_avx2(local_140,0xf);
      auVar10 = vpaddd_avx2(auVar10,auVar45 ^ auVar33 ^ auVar31 ^ auVar32 ^ auVar34);
      auVar33 = vpsrld_avx2(local_140,0x13);
      auVar32 = vpslld_avx2(local_140,0xd);
      auVar33 = vpaddd_avx2(auVar10,auVar36 ^ auVar30 ^ auVar35 ^ auVar33 ^ auVar32);
      auVar47 = vpsrld_avx2(auVar7,6);
      auVar35 = vpslld_avx2(auVar7,0x1a);
      auVar10 = vpaddd_avx2(auVar33,auVar17);
      auVar30 = vpsrld_avx2(auVar7,0xb);
      auVar36 = vpslld_avx2(auVar7,0x15);
      auVar10 = vpaddd_avx2(auVar10,pauVar20[4]);
      auVar31 = vpsrld_avx2(auVar7,0x19);
      auVar45 = vpslld_avx2(auVar7,7);
      auVar32 = vpandn_avx2(auVar7,auVar9);
      auVar17 = vpand_avx2(auVar7,auVar11);
      auVar46 = vpsrld_avx2(auVar6,2);
      auVar34 = vpslld_avx2(auVar6,0x1e);
      auVar10 = vpaddd_avx2(auVar10,auVar47 ^ auVar35 ^ auVar30 ^ auVar36 ^ auVar31 ^ auVar45);
      auVar30 = vpsrld_avx2(auVar6,0xd);
      auVar31 = vpslld_avx2(auVar6,0x13);
      auVar10 = vpaddd_avx2(auVar10,auVar32 ^ auVar17);
      auVar17 = vpand_avx2(auVar29,auVar12 ^ auVar6);
      auVar32 = vpsrld_avx2(auVar6,0x16);
      auVar29 = vpslld_avx2(auVar6,10);
      auVar13 = vpaddd_avx2(auVar13,auVar10);
      auVar10 = vpaddd_avx2(auVar12 ^ auVar17,auVar10);
      auVar10 = vpaddd_avx2(auVar10,auVar46 ^ auVar34 ^ auVar30 ^ auVar31 ^ auVar32 ^ auVar29);
      auVar17 = vpaddd_avx2(local_2e0,local_1c0);
      auVar45 = vpsrld_avx2(local_2c0,3);
      auVar32 = vpsrld_avx2(local_2c0,7);
      auVar31 = vpslld_avx2(local_2c0,0x19);
      auVar29 = vpsrld_avx2(local_2c0,0x12);
      auVar34 = vpslld_avx2(local_2c0,0xe);
      auVar36 = vpsrld_avx2(local_120,10);
      auVar30 = vpsrld_avx2(local_120,0x11);
      auVar35 = vpslld_avx2(local_120,0xf);
      auVar17 = vpaddd_avx2(auVar17,auVar45 ^ auVar32 ^ auVar31 ^ auVar29 ^ auVar34);
      auVar32 = vpsrld_avx2(local_120,0x13);
      auVar29 = vpslld_avx2(local_120,0xd);
      local_2e0 = vpaddd_avx2(auVar17,auVar36 ^ auVar30 ^ auVar35 ^ auVar32 ^ auVar29);
      auVar45 = vpsrld_avx2(auVar13,6);
      auVar34 = vpslld_avx2(auVar13,0x1a);
      auVar9 = vpaddd_avx2(local_2e0,auVar9);
      auVar29 = vpsrld_avx2(auVar13,0xb);
      auVar35 = vpslld_avx2(auVar13,0x15);
      auVar9 = vpaddd_avx2(auVar9,pauVar20[5]);
      auVar30 = vpsrld_avx2(auVar13,0x19);
      auVar36 = vpslld_avx2(auVar13,7);
      auVar32 = vpandn_avx2(auVar13,auVar11);
      auVar17 = vpand_avx2(auVar13,auVar7);
      auVar47 = vpsrld_avx2(auVar10,2);
      auVar31 = vpslld_avx2(auVar10,0x1e);
      auVar9 = vpaddd_avx2(auVar9,auVar45 ^ auVar34 ^ auVar29 ^ auVar35 ^ auVar30 ^ auVar36);
      auVar29 = vpsrld_avx2(auVar10,0xd);
      auVar30 = vpslld_avx2(auVar10,0x13);
      auVar9 = vpaddd_avx2(auVar9,auVar32 ^ auVar17);
      auVar17 = vpand_avx2(auVar12 ^ auVar6,auVar6 ^ auVar10);
      auVar32 = vpsrld_avx2(auVar10,0x16);
      auVar34 = vpslld_avx2(auVar10,10);
      auVar8 = vpaddd_avx2(auVar8,auVar9);
      auVar9 = vpaddd_avx2(auVar6 ^ auVar17,auVar9);
      auVar9 = vpaddd_avx2(auVar9,auVar47 ^ auVar31 ^ auVar29 ^ auVar30 ^ auVar32 ^ auVar34);
      auVar17 = vpaddd_avx2(local_2c0,local_1a0);
      auVar45 = vpsrld_avx2(local_2a0,3);
      auVar32 = vpsrld_avx2(local_2a0,7);
      auVar31 = vpslld_avx2(local_2a0,0x19);
      auVar29 = vpsrld_avx2(local_2a0,0x12);
      auVar34 = vpslld_avx2(local_2a0,0xe);
      auVar36 = vpsrld_avx2(auVar33,10);
      auVar30 = vpsrld_avx2(auVar33,0x11);
      auVar35 = vpslld_avx2(auVar33,0xf);
      auVar17 = vpaddd_avx2(auVar17,auVar45 ^ auVar32 ^ auVar31 ^ auVar29 ^ auVar34);
      auVar32 = vpsrld_avx2(auVar33,0x13);
      auVar29 = vpslld_avx2(auVar33,0xd);
      local_2c0 = vpaddd_avx2(auVar17,auVar36 ^ auVar30 ^ auVar35 ^ auVar32 ^ auVar29);
      auVar45 = vpsrld_avx2(auVar8,6);
      auVar34 = vpslld_avx2(auVar8,0x1a);
      auVar11 = vpaddd_avx2(local_2c0,auVar11);
      auVar29 = vpsrld_avx2(auVar8,0xb);
      auVar35 = vpslld_avx2(auVar8,0x15);
      auVar11 = vpaddd_avx2(auVar11,pauVar20[6]);
      auVar30 = vpsrld_avx2(auVar8,0x19);
      auVar36 = vpslld_avx2(auVar8,7);
      auVar32 = vpandn_avx2(auVar8,auVar7);
      auVar17 = vpand_avx2(auVar8,auVar13);
      auVar47 = vpsrld_avx2(auVar9,2);
      auVar31 = vpslld_avx2(auVar9,0x1e);
      auVar11 = vpaddd_avx2(auVar11,auVar45 ^ auVar34 ^ auVar29 ^ auVar35 ^ auVar30 ^ auVar36);
      auVar29 = vpsrld_avx2(auVar9,0xd);
      auVar30 = vpslld_avx2(auVar9,0x13);
      auVar11 = vpaddd_avx2(auVar11,auVar32 ^ auVar17);
      auVar17 = vpand_avx2(auVar6 ^ auVar10,auVar10 ^ auVar9);
      auVar32 = vpsrld_avx2(auVar9,0x16);
      auVar34 = vpslld_avx2(auVar9,10);
      auVar12 = vpaddd_avx2(auVar12,auVar11);
      auVar11 = vpaddd_avx2(auVar10 ^ auVar17,auVar11);
      auVar11 = vpaddd_avx2(auVar11,auVar47 ^ auVar31 ^ auVar29 ^ auVar30 ^ auVar32 ^ auVar34);
      auVar17 = vpaddd_avx2(local_2a0,local_180);
      auVar45 = vpsrld_avx2(local_280,3);
      auVar32 = vpsrld_avx2(local_280,7);
      auVar31 = vpslld_avx2(local_280,0x19);
      auVar29 = vpsrld_avx2(local_280,0x12);
      auVar34 = vpslld_avx2(local_280,0xe);
      auVar36 = vpsrld_avx2(local_2e0,10);
      auVar30 = vpsrld_avx2(local_2e0,0x11);
      auVar35 = vpslld_avx2(local_2e0,0xf);
      auVar17 = vpaddd_avx2(auVar17,auVar45 ^ auVar32 ^ auVar31 ^ auVar29 ^ auVar34);
      auVar32 = vpsrld_avx2(local_2e0,0x13);
      auVar29 = vpslld_avx2(local_2e0,0xd);
      local_2a0 = vpaddd_avx2(auVar17,auVar36 ^ auVar30 ^ auVar35 ^ auVar32 ^ auVar29);
      auVar45 = vpsrld_avx2(auVar12,6);
      auVar34 = vpslld_avx2(auVar12,0x1a);
      auVar7 = vpaddd_avx2(local_2a0,auVar7);
      auVar29 = vpsrld_avx2(auVar12,0xb);
      auVar35 = vpslld_avx2(auVar12,0x15);
      auVar7 = vpaddd_avx2(auVar7,pauVar20[7]);
      auVar30 = vpsrld_avx2(auVar12,0x19);
      auVar36 = vpslld_avx2(auVar12,7);
      auVar32 = vpandn_avx2(auVar12,auVar13);
      auVar17 = vpand_avx2(auVar12,auVar8);
      auVar47 = vpsrld_avx2(auVar11,2);
      auVar31 = vpslld_avx2(auVar11,0x1e);
      auVar7 = vpaddd_avx2(auVar7,auVar45 ^ auVar34 ^ auVar29 ^ auVar35 ^ auVar30 ^ auVar36);
      auVar29 = vpsrld_avx2(auVar11,0xd);
      auVar30 = vpslld_avx2(auVar11,0x13);
      auVar7 = vpaddd_avx2(auVar7,auVar32 ^ auVar17);
      auVar17 = vpand_avx2(auVar10 ^ auVar9,auVar9 ^ auVar11);
      auVar32 = vpsrld_avx2(auVar11,0x16);
      auVar34 = vpslld_avx2(auVar11,10);
      auVar6 = vpaddd_avx2(auVar6,auVar7);
      auVar7 = vpaddd_avx2(auVar9 ^ auVar17,auVar7);
      auVar7 = vpaddd_avx2(auVar7,auVar47 ^ auVar31 ^ auVar29 ^ auVar30 ^ auVar32 ^ auVar34);
      auVar17 = vpaddd_avx2(local_280,local_160);
      auVar45 = vpsrld_avx2(local_260,3);
      auVar32 = vpsrld_avx2(local_260,7);
      auVar31 = vpslld_avx2(local_260,0x19);
      auVar29 = vpsrld_avx2(local_260,0x12);
      auVar34 = vpslld_avx2(local_260,0xe);
      auVar36 = vpsrld_avx2(local_2c0,10);
      auVar30 = vpsrld_avx2(local_2c0,0x11);
      auVar35 = vpslld_avx2(local_2c0,0xf);
      auVar17 = vpaddd_avx2(auVar17,auVar45 ^ auVar32 ^ auVar31 ^ auVar29 ^ auVar34);
      auVar32 = vpsrld_avx2(local_2c0,0x13);
      auVar29 = vpslld_avx2(local_2c0,0xd);
      local_280 = vpaddd_avx2(auVar17,auVar36 ^ auVar30 ^ auVar35 ^ auVar32 ^ auVar29);
      auVar45 = vpsrld_avx2(auVar6,6);
      auVar34 = vpslld_avx2(auVar6,0x1a);
      auVar13 = vpaddd_avx2(local_280,auVar13);
      auVar29 = vpsrld_avx2(auVar6,0xb);
      auVar35 = vpslld_avx2(auVar6,0x15);
      auVar13 = vpaddd_avx2(auVar13,pauVar20[8]);
      auVar30 = vpsrld_avx2(auVar6,0x19);
      auVar36 = vpslld_avx2(auVar6,7);
      auVar32 = vpandn_avx2(auVar6,auVar8);
      auVar17 = vpand_avx2(auVar6,auVar12);
      auVar47 = vpsrld_avx2(auVar7,2);
      auVar31 = vpslld_avx2(auVar7,0x1e);
      auVar13 = vpaddd_avx2(auVar13,auVar45 ^ auVar34 ^ auVar29 ^ auVar35 ^ auVar30 ^ auVar36);
      auVar29 = vpsrld_avx2(auVar7,0xd);
      auVar30 = vpslld_avx2(auVar7,0x13);
      auVar13 = vpaddd_avx2(auVar13,auVar32 ^ auVar17);
      auVar17 = vpand_avx2(auVar9 ^ auVar11,auVar11 ^ auVar7);
      auVar32 = vpsrld_avx2(auVar7,0x16);
      auVar34 = vpslld_avx2(auVar7,10);
      auVar10 = vpaddd_avx2(auVar10,auVar13);
      auVar13 = vpaddd_avx2(auVar11 ^ auVar17,auVar13);
      auVar13 = vpaddd_avx2(auVar13,auVar47 ^ auVar31 ^ auVar29 ^ auVar30 ^ auVar32 ^ auVar34);
      auVar17 = vpaddd_avx2(local_260,local_140);
      auVar45 = vpsrld_avx2(local_240,3);
      auVar32 = vpsrld_avx2(local_240,7);
      auVar31 = vpslld_avx2(local_240,0x19);
      auVar29 = vpsrld_avx2(local_240,0x12);
      auVar34 = vpslld_avx2(local_240,0xe);
      auVar36 = vpsrld_avx2(local_2a0,10);
      auVar30 = vpsrld_avx2(local_2a0,0x11);
      auVar35 = vpslld_avx2(local_2a0,0xf);
      auVar17 = vpaddd_avx2(auVar17,auVar45 ^ auVar32 ^ auVar31 ^ auVar29 ^ auVar34);
      auVar32 = vpsrld_avx2(local_2a0,0x13);
      auVar29 = vpslld_avx2(local_2a0,0xd);
      local_260 = vpaddd_avx2(auVar17,auVar36 ^ auVar30 ^ auVar35 ^ auVar32 ^ auVar29);
      auVar45 = vpsrld_avx2(auVar10,6);
      auVar34 = vpslld_avx2(auVar10,0x1a);
      auVar8 = vpaddd_avx2(local_260,auVar8);
      auVar29 = vpsrld_avx2(auVar10,0xb);
      auVar35 = vpslld_avx2(auVar10,0x15);
      auVar8 = vpaddd_avx2(auVar8,pauVar20[9]);
      auVar30 = vpsrld_avx2(auVar10,0x19);
      auVar36 = vpslld_avx2(auVar10,7);
      auVar32 = vpandn_avx2(auVar10,auVar12);
      auVar17 = vpand_avx2(auVar10,auVar6);
      auVar47 = vpsrld_avx2(auVar13,2);
      auVar31 = vpslld_avx2(auVar13,0x1e);
      auVar8 = vpaddd_avx2(auVar8,auVar45 ^ auVar34 ^ auVar29 ^ auVar35 ^ auVar30 ^ auVar36);
      auVar29 = vpsrld_avx2(auVar13,0xd);
      auVar30 = vpslld_avx2(auVar13,0x13);
      auVar8 = vpaddd_avx2(auVar8,auVar32 ^ auVar17);
      auVar17 = vpand_avx2(auVar11 ^ auVar7,auVar7 ^ auVar13);
      auVar32 = vpsrld_avx2(auVar13,0x16);
      auVar34 = vpslld_avx2(auVar13,10);
      auVar9 = vpaddd_avx2(auVar9,auVar8);
      auVar8 = vpaddd_avx2(auVar7 ^ auVar17,auVar8);
      auVar8 = vpaddd_avx2(auVar8,auVar47 ^ auVar31 ^ auVar29 ^ auVar30 ^ auVar32 ^ auVar34);
      auVar17 = vpaddd_avx2(local_240,local_120);
      auVar45 = vpsrld_avx2(local_220,3);
      auVar32 = vpsrld_avx2(local_220,7);
      auVar31 = vpslld_avx2(local_220,0x19);
      auVar29 = vpsrld_avx2(local_220,0x12);
      auVar34 = vpslld_avx2(local_220,0xe);
      auVar36 = vpsrld_avx2(local_280,10);
      auVar30 = vpsrld_avx2(local_280,0x11);
      auVar35 = vpslld_avx2(local_280,0xf);
      auVar17 = vpaddd_avx2(auVar17,auVar45 ^ auVar32 ^ auVar31 ^ auVar29 ^ auVar34);
      auVar32 = vpsrld_avx2(local_280,0x13);
      auVar29 = vpslld_avx2(local_280,0xd);
      local_240 = vpaddd_avx2(auVar17,auVar36 ^ auVar30 ^ auVar35 ^ auVar32 ^ auVar29);
      auVar45 = vpsrld_avx2(auVar9,6);
      auVar34 = vpslld_avx2(auVar9,0x1a);
      auVar12 = vpaddd_avx2(local_240,auVar12);
      auVar29 = vpsrld_avx2(auVar9,0xb);
      auVar35 = vpslld_avx2(auVar9,0x15);
      auVar12 = vpaddd_avx2(auVar12,pauVar20[10]);
      auVar30 = vpsrld_avx2(auVar9,0x19);
      auVar36 = vpslld_avx2(auVar9,7);
      auVar32 = vpandn_avx2(auVar9,auVar6);
      auVar17 = vpand_avx2(auVar9,auVar10);
      auVar47 = vpsrld_avx2(auVar8,2);
      auVar31 = vpslld_avx2(auVar8,0x1e);
      auVar12 = vpaddd_avx2(auVar12,auVar45 ^ auVar34 ^ auVar29 ^ auVar35 ^ auVar30 ^ auVar36);
      auVar29 = vpsrld_avx2(auVar8,0xd);
      auVar30 = vpslld_avx2(auVar8,0x13);
      auVar12 = vpaddd_avx2(auVar12,auVar32 ^ auVar17);
      auVar17 = vpand_avx2(auVar7 ^ auVar13,auVar13 ^ auVar8);
      auVar32 = vpsrld_avx2(auVar8,0x16);
      auVar34 = vpslld_avx2(auVar8,10);
      auVar11 = vpaddd_avx2(auVar11,auVar12);
      auVar12 = vpaddd_avx2(auVar13 ^ auVar17,auVar12);
      auVar12 = vpaddd_avx2(auVar12,auVar47 ^ auVar31 ^ auVar29 ^ auVar30 ^ auVar32 ^ auVar34);
      auVar17 = vpaddd_avx2(local_220,auVar33);
      auVar45 = vpsrld_avx2(local_200,3);
      auVar32 = vpsrld_avx2(local_200,7);
      auVar31 = vpslld_avx2(local_200,0x19);
      auVar29 = vpsrld_avx2(local_200,0x12);
      auVar34 = vpslld_avx2(local_200,0xe);
      auVar36 = vpsrld_avx2(local_260,10);
      auVar30 = vpsrld_avx2(local_260,0x11);
      auVar35 = vpslld_avx2(local_260,0xf);
      auVar17 = vpaddd_avx2(auVar17,auVar45 ^ auVar32 ^ auVar31 ^ auVar29 ^ auVar34);
      auVar32 = vpsrld_avx2(local_260,0x13);
      auVar29 = vpslld_avx2(local_260,0xd);
      local_220 = vpaddd_avx2(auVar17,auVar36 ^ auVar30 ^ auVar35 ^ auVar32 ^ auVar29);
      auVar45 = vpsrld_avx2(auVar11,6);
      auVar34 = vpslld_avx2(auVar11,0x1a);
      auVar6 = vpaddd_avx2(local_220,auVar6);
      auVar29 = vpsrld_avx2(auVar11,0xb);
      auVar35 = vpslld_avx2(auVar11,0x15);
      auVar6 = vpaddd_avx2(auVar6,pauVar20[0xb]);
      auVar30 = vpsrld_avx2(auVar11,0x19);
      auVar36 = vpslld_avx2(auVar11,7);
      auVar32 = vpandn_avx2(auVar11,auVar10);
      auVar17 = vpand_avx2(auVar11,auVar9);
      auVar47 = vpsrld_avx2(auVar12,2);
      auVar31 = vpslld_avx2(auVar12,0x1e);
      auVar6 = vpaddd_avx2(auVar6,auVar45 ^ auVar34 ^ auVar29 ^ auVar35 ^ auVar30 ^ auVar36);
      auVar29 = vpsrld_avx2(auVar12,0xd);
      auVar30 = vpslld_avx2(auVar12,0x13);
      auVar6 = vpaddd_avx2(auVar6,auVar32 ^ auVar17);
      auVar17 = vpand_avx2(auVar13 ^ auVar8,auVar8 ^ auVar12);
      auVar32 = vpsrld_avx2(auVar12,0x16);
      auVar34 = vpslld_avx2(auVar12,10);
      auVar7 = vpaddd_avx2(auVar7,auVar6);
      auVar6 = vpaddd_avx2(auVar8 ^ auVar17,auVar6);
      auVar6 = vpaddd_avx2(auVar6,auVar47 ^ auVar31 ^ auVar29 ^ auVar30 ^ auVar32 ^ auVar34);
      auVar17 = vpaddd_avx2(local_200,local_2e0);
      auVar45 = vpsrld_avx2(local_1e0,3);
      auVar32 = vpsrld_avx2(local_1e0,7);
      auVar31 = vpslld_avx2(local_1e0,0x19);
      auVar29 = vpsrld_avx2(local_1e0,0x12);
      auVar34 = vpslld_avx2(local_1e0,0xe);
      auVar36 = vpsrld_avx2(local_240,10);
      auVar30 = vpsrld_avx2(local_240,0x11);
      auVar35 = vpslld_avx2(local_240,0xf);
      auVar17 = vpaddd_avx2(auVar17,auVar45 ^ auVar32 ^ auVar31 ^ auVar29 ^ auVar34);
      auVar32 = vpsrld_avx2(local_240,0x13);
      auVar29 = vpslld_avx2(local_240,0xd);
      local_200 = vpaddd_avx2(auVar17,auVar36 ^ auVar30 ^ auVar35 ^ auVar32 ^ auVar29);
      auVar45 = vpsrld_avx2(auVar7,6);
      auVar34 = vpslld_avx2(auVar7,0x1a);
      auVar10 = vpaddd_avx2(local_200,auVar10);
      auVar29 = vpsrld_avx2(auVar7,0xb);
      auVar35 = vpslld_avx2(auVar7,0x15);
      auVar10 = vpaddd_avx2(auVar10,pauVar20[0xc]);
      auVar30 = vpsrld_avx2(auVar7,0x19);
      auVar36 = vpslld_avx2(auVar7,7);
      auVar32 = vpandn_avx2(auVar7,auVar9);
      auVar17 = vpand_avx2(auVar7,auVar11);
      auVar47 = vpsrld_avx2(auVar6,2);
      auVar31 = vpslld_avx2(auVar6,0x1e);
      auVar10 = vpaddd_avx2(auVar10,auVar45 ^ auVar34 ^ auVar29 ^ auVar35 ^ auVar30 ^ auVar36);
      auVar29 = vpsrld_avx2(auVar6,0xd);
      auVar30 = vpslld_avx2(auVar6,0x13);
      auVar10 = vpaddd_avx2(auVar10,auVar32 ^ auVar17);
      auVar17 = vpand_avx2(auVar8 ^ auVar12,auVar12 ^ auVar6);
      auVar32 = vpsrld_avx2(auVar6,0x16);
      auVar34 = vpslld_avx2(auVar6,10);
      auVar13 = vpaddd_avx2(auVar13,auVar10);
      auVar10 = vpaddd_avx2(auVar12 ^ auVar17,auVar10);
      auVar10 = vpaddd_avx2(auVar10,auVar47 ^ auVar31 ^ auVar29 ^ auVar30 ^ auVar32 ^ auVar34);
      auVar17 = vpaddd_avx2(local_1e0,local_2c0);
      auVar45 = vpsrld_avx2(local_1c0,3);
      auVar32 = vpsrld_avx2(local_1c0,7);
      auVar31 = vpslld_avx2(local_1c0,0x19);
      auVar29 = vpsrld_avx2(local_1c0,0x12);
      auVar34 = vpslld_avx2(local_1c0,0xe);
      auVar36 = vpsrld_avx2(local_220,10);
      auVar30 = vpsrld_avx2(local_220,0x11);
      auVar35 = vpslld_avx2(local_220,0xf);
      auVar17 = vpaddd_avx2(auVar17,auVar45 ^ auVar32 ^ auVar31 ^ auVar29 ^ auVar34);
      auVar32 = vpsrld_avx2(local_220,0x13);
      auVar29 = vpslld_avx2(local_220,0xd);
      local_1e0 = vpaddd_avx2(auVar17,auVar36 ^ auVar30 ^ auVar35 ^ auVar32 ^ auVar29);
      auVar45 = vpsrld_avx2(auVar13,6);
      auVar34 = vpslld_avx2(auVar13,0x1a);
      auVar9 = vpaddd_avx2(local_1e0,auVar9);
      auVar29 = vpsrld_avx2(auVar13,0xb);
      auVar35 = vpslld_avx2(auVar13,0x15);
      auVar9 = vpaddd_avx2(auVar9,pauVar20[0xd]);
      auVar30 = vpsrld_avx2(auVar13,0x19);
      auVar36 = vpslld_avx2(auVar13,7);
      auVar32 = vpandn_avx2(auVar13,auVar11);
      auVar17 = vpand_avx2(auVar13,auVar7);
      auVar47 = vpsrld_avx2(auVar10,2);
      auVar31 = vpslld_avx2(auVar10,0x1e);
      auVar9 = vpaddd_avx2(auVar9,auVar45 ^ auVar34 ^ auVar29 ^ auVar35 ^ auVar30 ^ auVar36);
      auVar29 = vpsrld_avx2(auVar10,0xd);
      auVar30 = vpslld_avx2(auVar10,0x13);
      auVar9 = vpaddd_avx2(auVar9,auVar32 ^ auVar17);
      auVar17 = vpand_avx2(auVar12 ^ auVar6,auVar6 ^ auVar10);
      auVar32 = vpsrld_avx2(auVar10,0x16);
      auVar34 = vpslld_avx2(auVar10,10);
      auVar8 = vpaddd_avx2(auVar8,auVar9);
      auVar9 = vpaddd_avx2(auVar6 ^ auVar17,auVar9);
      auVar9 = vpaddd_avx2(auVar9,auVar47 ^ auVar31 ^ auVar29 ^ auVar30 ^ auVar32 ^ auVar34);
      auVar17 = vpaddd_avx2(local_1c0,local_2a0);
      auVar45 = vpsrld_avx2(local_1a0,3);
      auVar32 = vpsrld_avx2(local_1a0,7);
      auVar31 = vpslld_avx2(local_1a0,0x19);
      auVar29 = vpsrld_avx2(local_1a0,0x12);
      auVar34 = vpslld_avx2(local_1a0,0xe);
      auVar36 = vpsrld_avx2(local_200,10);
      auVar30 = vpsrld_avx2(local_200,0x11);
      auVar35 = vpslld_avx2(local_200,0xf);
      auVar17 = vpaddd_avx2(auVar17,auVar45 ^ auVar32 ^ auVar31 ^ auVar29 ^ auVar34);
      auVar32 = vpsrld_avx2(local_200,0x13);
      auVar29 = vpslld_avx2(local_200,0xd);
      local_1c0 = vpaddd_avx2(auVar17,auVar36 ^ auVar30 ^ auVar35 ^ auVar32 ^ auVar29);
      auVar45 = vpsrld_avx2(auVar8,6);
      auVar34 = vpslld_avx2(auVar8,0x1a);
      auVar11 = vpaddd_avx2(local_1c0,auVar11);
      auVar29 = vpsrld_avx2(auVar8,0xb);
      auVar35 = vpslld_avx2(auVar8,0x15);
      auVar11 = vpaddd_avx2(auVar11,pauVar20[0xe]);
      auVar30 = vpsrld_avx2(auVar8,0x19);
      auVar36 = vpslld_avx2(auVar8,7);
      auVar32 = vpandn_avx2(auVar8,auVar7);
      auVar17 = vpand_avx2(auVar8,auVar13);
      auVar47 = vpsrld_avx2(auVar9,2);
      auVar31 = vpslld_avx2(auVar9,0x1e);
      auVar11 = vpaddd_avx2(auVar11,auVar45 ^ auVar34 ^ auVar29 ^ auVar35 ^ auVar30 ^ auVar36);
      auVar29 = vpsrld_avx2(auVar9,0xd);
      auVar30 = vpslld_avx2(auVar9,0x13);
      auVar11 = vpaddd_avx2(auVar11,auVar32 ^ auVar17);
      auVar17 = vpand_avx2(auVar6 ^ auVar10,auVar10 ^ auVar9);
      auVar32 = vpsrld_avx2(auVar9,0x16);
      auVar34 = vpslld_avx2(auVar9,10);
      auVar12 = vpaddd_avx2(auVar12,auVar11);
      auVar11 = vpaddd_avx2(auVar10 ^ auVar17,auVar11);
      auVar11 = vpaddd_avx2(auVar11,auVar47 ^ auVar31 ^ auVar29 ^ auVar30 ^ auVar32 ^ auVar34);
      auVar17 = vpaddd_avx2(local_1a0,local_280);
      auVar45 = vpsrld_avx2(local_180,3);
      auVar32 = vpsrld_avx2(local_180,7);
      auVar31 = vpslld_avx2(local_180,0x19);
      auVar29 = vpsrld_avx2(local_180,0x12);
      auVar34 = vpslld_avx2(local_180,0xe);
      auVar36 = vpsrld_avx2(local_1e0,10);
      auVar30 = vpsrld_avx2(local_1e0,0x11);
      auVar35 = vpslld_avx2(local_1e0,0xf);
      auVar17 = vpaddd_avx2(auVar17,auVar45 ^ auVar32 ^ auVar31 ^ auVar29 ^ auVar34);
      auVar32 = vpsrld_avx2(local_1e0,0x13);
      auVar29 = vpslld_avx2(local_1e0,0xd);
      local_1a0 = vpaddd_avx2(auVar17,auVar36 ^ auVar30 ^ auVar35 ^ auVar32 ^ auVar29);
      auVar45 = vpsrld_avx2(auVar12,6);
      auVar34 = vpslld_avx2(auVar12,0x1a);
      auVar7 = vpaddd_avx2(local_1a0,auVar7);
      auVar29 = vpsrld_avx2(auVar12,0xb);
      auVar35 = vpslld_avx2(auVar12,0x15);
      auVar7 = vpaddd_avx2(auVar7,pauVar20[0xf]);
      auVar30 = vpsrld_avx2(auVar12,0x19);
      auVar36 = vpslld_avx2(auVar12,7);
      auVar32 = vpandn_avx2(auVar12,auVar13);
      auVar17 = vpand_avx2(auVar12,auVar8);
      auVar47 = vpsrld_avx2(auVar11,2);
      auVar31 = vpslld_avx2(auVar11,0x1e);
      auVar7 = vpaddd_avx2(auVar7,auVar45 ^ auVar34 ^ auVar29 ^ auVar35 ^ auVar30 ^ auVar36);
      auVar29 = vpsrld_avx2(auVar11,0xd);
      auVar30 = vpslld_avx2(auVar11,0x13);
      auVar7 = vpaddd_avx2(auVar7,auVar32 ^ auVar17);
      auVar17 = vpand_avx2(auVar10 ^ auVar9,auVar9 ^ auVar11);
      auVar32 = vpsrld_avx2(auVar11,0x16);
      auVar34 = vpslld_avx2(auVar11,10);
      auVar6 = vpaddd_avx2(auVar6,auVar7);
      auVar7 = vpaddd_avx2(auVar9 ^ auVar17,auVar7);
      auVar7 = vpaddd_avx2(auVar7,auVar47 ^ auVar31 ^ auVar29 ^ auVar30 ^ auVar32 ^ auVar34);
      auVar17 = vpaddd_avx2(local_180,local_260);
      auVar45 = vpsrld_avx2(local_160,3);
      auVar32 = vpsrld_avx2(local_160,7);
      auVar31 = vpslld_avx2(local_160,0x19);
      auVar29 = vpsrld_avx2(local_160,0x12);
      auVar34 = vpslld_avx2(local_160,0xe);
      auVar36 = vpsrld_avx2(local_1c0,10);
      auVar30 = vpsrld_avx2(local_1c0,0x11);
      auVar35 = vpslld_avx2(local_1c0,0xf);
      auVar17 = vpaddd_avx2(auVar17,auVar45 ^ auVar32 ^ auVar31 ^ auVar29 ^ auVar34);
      auVar32 = vpsrld_avx2(local_1c0,0x13);
      auVar29 = vpslld_avx2(local_1c0,0xd);
      local_180 = vpaddd_avx2(auVar17,auVar36 ^ auVar30 ^ auVar35 ^ auVar32 ^ auVar29);
      auVar45 = vpsrld_avx2(auVar6,6);
      auVar34 = vpslld_avx2(auVar6,0x1a);
      auVar13 = vpaddd_avx2(local_180,auVar13);
      auVar29 = vpsrld_avx2(auVar6,0xb);
      auVar35 = vpslld_avx2(auVar6,0x15);
      auVar13 = vpaddd_avx2(auVar13,pauVar20[0x10]);
      auVar30 = vpsrld_avx2(auVar6,0x19);
      auVar36 = vpslld_avx2(auVar6,7);
      auVar32 = vpandn_avx2(auVar6,auVar8);
      auVar17 = vpand_avx2(auVar6,auVar12);
      auVar47 = vpsrld_avx2(auVar7,2);
      auVar31 = vpslld_avx2(auVar7,0x1e);
      auVar13 = vpaddd_avx2(auVar13,auVar45 ^ auVar34 ^ auVar29 ^ auVar35 ^ auVar30 ^ auVar36);
      auVar29 = vpsrld_avx2(auVar7,0xd);
      auVar34 = vpslld_avx2(auVar7,0x13);
      auVar13 = vpaddd_avx2(auVar13,auVar32 ^ auVar17);
      auVar32 = vpand_avx2(auVar9 ^ auVar11,auVar11 ^ auVar7);
      auVar30 = vpsrld_avx2(auVar7,0x16);
      auVar35 = vpslld_avx2(auVar7,10);
      auVar17 = vpaddd_avx2(auVar10,auVar13);
      auVar10 = vpaddd_avx2(auVar11 ^ auVar32,auVar13);
      auVar13 = vpaddd_avx2(auVar10,auVar47 ^ auVar31 ^ auVar29 ^ auVar34 ^ auVar30 ^ auVar35);
      auVar10 = vpaddd_avx2(local_160,local_240);
      auVar45 = vpsrld_avx2(local_140,3);
      auVar32 = vpsrld_avx2(local_140,7);
      auVar31 = vpslld_avx2(local_140,0x19);
      auVar29 = vpsrld_avx2(local_140,0x12);
      auVar34 = vpslld_avx2(local_140,0xe);
      auVar36 = vpsrld_avx2(local_1a0,10);
      auVar30 = vpsrld_avx2(local_1a0,0x11);
      auVar35 = vpslld_avx2(local_1a0,0xf);
      auVar10 = vpaddd_avx2(auVar10,auVar45 ^ auVar32 ^ auVar31 ^ auVar29 ^ auVar34);
      auVar32 = vpsrld_avx2(local_1a0,0x13);
      auVar29 = vpslld_avx2(local_1a0,0xd);
      local_160 = vpaddd_avx2(auVar10,auVar36 ^ auVar30 ^ auVar35 ^ auVar32 ^ auVar29);
      auVar45 = vpsrld_avx2(auVar17,6);
      auVar34 = vpslld_avx2(auVar17,0x1a);
      auVar8 = vpaddd_avx2(local_160,auVar8);
      auVar29 = vpsrld_avx2(auVar17,0xb);
      auVar35 = vpslld_avx2(auVar17,0x15);
      auVar8 = vpaddd_avx2(auVar8,pauVar20[0x11]);
      auVar30 = vpsrld_avx2(auVar17,0x19);
      auVar36 = vpslld_avx2(auVar17,7);
      auVar32 = vpandn_avx2(auVar17,auVar12);
      auVar10 = vpand_avx2(auVar17,auVar6);
      auVar47 = vpsrld_avx2(auVar13,2);
      auVar31 = vpslld_avx2(auVar13,0x1e);
      auVar8 = vpaddd_avx2(auVar8,auVar45 ^ auVar34 ^ auVar29 ^ auVar35 ^ auVar30 ^ auVar36);
      auVar29 = vpsrld_avx2(auVar13,0xd);
      auVar30 = vpslld_avx2(auVar13,0x13);
      auVar8 = vpaddd_avx2(auVar8,auVar32 ^ auVar10);
      auVar10 = vpand_avx2(auVar11 ^ auVar7,auVar7 ^ auVar13);
      auVar32 = vpsrld_avx2(auVar13,0x16);
      auVar34 = vpslld_avx2(auVar13,10);
      auVar9 = vpaddd_avx2(auVar9,auVar8);
      auVar8 = vpaddd_avx2(auVar7 ^ auVar10,auVar8);
      auVar8 = vpaddd_avx2(auVar8,auVar47 ^ auVar31 ^ auVar29 ^ auVar30 ^ auVar32 ^ auVar34);
      auVar10 = vpaddd_avx2(local_140,local_220);
      auVar45 = vpsrld_avx2(local_120,3);
      auVar32 = vpsrld_avx2(local_120,7);
      auVar31 = vpslld_avx2(local_120,0x19);
      auVar29 = vpsrld_avx2(local_120,0x12);
      auVar34 = vpslld_avx2(local_120,0xe);
      auVar36 = vpsrld_avx2(local_180,10);
      auVar30 = vpsrld_avx2(local_180,0x11);
      auVar35 = vpslld_avx2(local_180,0xf);
      auVar10 = vpaddd_avx2(auVar10,auVar45 ^ auVar32 ^ auVar31 ^ auVar29 ^ auVar34);
      auVar32 = vpsrld_avx2(local_180,0x13);
      auVar29 = vpslld_avx2(local_180,0xd);
      local_140 = vpaddd_avx2(auVar10,auVar36 ^ auVar30 ^ auVar35 ^ auVar32 ^ auVar29);
      auVar45 = vpsrld_avx2(auVar9,6);
      auVar34 = vpslld_avx2(auVar9,0x1a);
      auVar10 = vpaddd_avx2(local_140,auVar12);
      auVar29 = vpsrld_avx2(auVar9,0xb);
      auVar35 = vpslld_avx2(auVar9,0x15);
      auVar10 = vpaddd_avx2(auVar10,pauVar20[0x12]);
      auVar30 = vpsrld_avx2(auVar9,0x19);
      auVar36 = vpslld_avx2(auVar9,7);
      auVar32 = vpandn_avx2(auVar9,auVar6);
      auVar12 = vpand_avx2(auVar9,auVar17);
      auVar47 = vpsrld_avx2(auVar8,2);
      auVar31 = vpslld_avx2(auVar8,0x1e);
      auVar10 = vpaddd_avx2(auVar10,auVar45 ^ auVar34 ^ auVar29 ^ auVar35 ^ auVar30 ^ auVar36);
      auVar29 = vpsrld_avx2(auVar8,0xd);
      auVar30 = vpslld_avx2(auVar8,0x13);
      auVar10 = vpaddd_avx2(auVar10,auVar32 ^ auVar12);
      auVar12 = vpand_avx2(auVar7 ^ auVar13,auVar13 ^ auVar8);
      auVar32 = vpsrld_avx2(auVar8,0x16);
      auVar34 = vpslld_avx2(auVar8,10);
      auVar11 = vpaddd_avx2(auVar11,auVar10);
      auVar10 = vpaddd_avx2(auVar13 ^ auVar12,auVar10);
      auVar12 = vpaddd_avx2(auVar10,auVar47 ^ auVar31 ^ auVar29 ^ auVar30 ^ auVar32 ^ auVar34);
      auVar10 = vpaddd_avx2(local_120,local_200);
      auVar45 = vpsrld_avx2(auVar33,3);
      auVar32 = vpsrld_avx2(auVar33,7);
      auVar31 = vpslld_avx2(auVar33,0x19);
      auVar29 = vpsrld_avx2(auVar33,0x12);
      auVar34 = vpslld_avx2(auVar33,0xe);
      auVar36 = vpsrld_avx2(local_160,10);
      auVar30 = vpsrld_avx2(local_160,0x11);
      auVar35 = vpslld_avx2(local_160,0xf);
      auVar10 = vpaddd_avx2(auVar10,auVar45 ^ auVar32 ^ auVar31 ^ auVar29 ^ auVar34);
      auVar32 = vpsrld_avx2(local_160,0x13);
      auVar29 = vpslld_avx2(local_160,0xd);
      local_120 = vpaddd_avx2(auVar10,auVar36 ^ auVar30 ^ auVar35 ^ auVar32 ^ auVar29);
      auVar47 = vpsrld_avx2(auVar11,6);
      auVar35 = vpslld_avx2(auVar11,0x1a);
      auVar6 = vpaddd_avx2(local_120,auVar6);
      auVar30 = vpsrld_avx2(auVar11,0xb);
      auVar36 = vpslld_avx2(auVar11,0x15);
      auVar6 = vpaddd_avx2(auVar6,pauVar20[0x13]);
      auVar31 = vpsrld_avx2(auVar11,0x19);
      auVar45 = vpslld_avx2(auVar11,7);
      auVar32 = vpandn_avx2(auVar11,auVar17);
      auVar10 = vpand_avx2(auVar11,auVar9);
      auVar46 = vpsrld_avx2(auVar12,2);
      auVar34 = vpslld_avx2(auVar12,0x1e);
      auVar29 = auVar8 ^ auVar12;
      auVar6 = vpaddd_avx2(auVar6,auVar47 ^ auVar35 ^ auVar30 ^ auVar36 ^ auVar31 ^ auVar45);
      auVar30 = vpsrld_avx2(auVar12,0xd);
      auVar31 = vpslld_avx2(auVar12,0x13);
      auVar6 = vpaddd_avx2(auVar6,auVar32 ^ auVar10);
      auVar10 = vpand_avx2(auVar13 ^ auVar8,auVar29);
      auVar32 = vpsrld_avx2(auVar12,0x16);
      auVar35 = vpslld_avx2(auVar12,10);
      auVar7 = vpaddd_avx2(auVar7,auVar6);
      auVar6 = vpaddd_avx2(auVar8 ^ auVar10,auVar6);
      auVar6 = vpaddd_avx2(auVar6,auVar46 ^ auVar34 ^ auVar30 ^ auVar31 ^ auVar32 ^ auVar35);
      iVar18 = iVar18 + -1;
      pauVar20 = pauVar20 + 0x10;
    } while (iVar18 != 0);
    if ((int)local_100._0_4_ < 2) {
      puVar25 = (uint *)&DAT_00107680;
    }
    if ((int)local_100._4_4_ < 2) {
      puVar26 = (uint *)&DAT_00107680;
    }
    if ((int)local_100._8_4_ < 2) {
      puVar27 = (undefined4 *)&DAT_00107680;
    }
    if ((int)local_100._12_4_ < 2) {
      puVar28 = (undefined4 *)&DAT_00107680;
    }
    if ((int)local_100._16_4_ < 2) {
      puVar21 = (uint *)&DAT_00107680;
    }
    if ((int)local_100._20_4_ < 2) {
      puVar22 = (uint *)&DAT_00107680;
    }
    if ((int)local_100._24_4_ < 2) {
      puVar23 = (undefined4 *)&DAT_00107680;
    }
    if ((int)local_100._28_4_ < 2) {
      puVar24 = (undefined4 *)&DAT_00107680;
    }
    auVar32 = vpcmpgtd_avx2(local_100,(undefined1  [32])0x0);
    local_100 = vpaddd_avx2(local_100,auVar32);
    auVar6 = vpand_avx2(auVar6,auVar32);
    auVar10 = vpand_avx2(auVar12,auVar32);
    auVar8 = vpand_avx2(auVar8,auVar32);
    auVar12 = vpand_avx2(auVar13,auVar32);
    auVar6 = vpaddd_avx2(auVar6,*param_1);
    auVar13 = vpand_avx2(auVar7,auVar32);
    auVar7 = vpaddd_avx2(auVar10,param_1[1]);
    auVar11 = vpand_avx2(auVar11,auVar32);
    auVar8 = vpaddd_avx2(auVar8,param_1[2]);
    auVar33 = vpand_avx2(auVar9,auVar32);
    auVar9 = vpaddd_avx2(auVar12,param_1[3]);
    auVar17 = vpand_avx2(auVar17,auVar32);
    auVar10 = vpaddd_avx2(auVar13,*pauVar4);
    auVar11 = vpaddd_avx2(auVar11,param_1[5]);
    *param_1 = auVar6;
    auVar12 = vpaddd_avx2(auVar33,param_1[6]);
    param_1[1] = auVar7;
    auVar13 = vpaddd_avx2(auVar17,param_1[7]);
    param_1[2] = auVar8;
    param_1[3] = auVar9;
    *pauVar4 = auVar10;
    param_1[5] = auVar11;
    param_1[6] = auVar12;
    param_1[7] = auVar13;
    auVar44 = ZEXT3264(_DAT_00107e00);
    iVar19 = iVar19 + -1;
  } while (iVar19 != 0);
  return;
}


