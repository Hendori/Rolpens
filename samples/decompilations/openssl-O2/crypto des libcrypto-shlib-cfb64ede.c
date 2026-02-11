
void DES_ede3_cfb64_encrypt
               (uchar *in,uchar *out,long length,DES_key_schedule *ks1,DES_key_schedule *ks2,
               DES_key_schedule *ks3,DES_cblock *ivec,int *num,int enc)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  uint uVar4;
  byte *pbVar5;
  long in_FS_OFFSET;
  DES_cblock local_48;
  long local_40;
  
  uVar4 = *num;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (enc == 0) {
    pbVar5 = in;
    if (length != 0) {
      do {
        if (uVar4 == 0) {
          local_48 = *ivec;
          DES_encrypt3((uint *)local_48,ks1,ks2,ks3);
          *ivec = local_48;
        }
        bVar2 = *pbVar5;
        pbVar5 = pbVar5 + 1;
        bVar1 = (*ivec)[(int)uVar4];
        (*ivec)[(int)uVar4] = bVar2;
        uVar4 = uVar4 + 1 & 7;
        *out = bVar2 ^ bVar1;
        out = out + 1;
      } while (in + (length - (long)pbVar5) != (uchar *)0x0);
    }
  }
  else if (length != 0) {
    pbVar5 = in;
    do {
      if (uVar4 == 0) {
        local_48 = *ivec;
        DES_encrypt3((uint *)local_48,ks1,ks2,ks3);
        *ivec = local_48;
      }
      lVar3 = (long)(int)uVar4;
      bVar2 = *pbVar5;
      pbVar5 = pbVar5 + 1;
      bVar2 = bVar2 ^ (*ivec)[lVar3];
      uVar4 = uVar4 + 1 & 7;
      *out = bVar2;
      (*ivec)[lVar3] = bVar2;
      out = out + 1;
    } while (in + (length - (long)pbVar5) != (uchar *)0x0);
  }
  *num = uVar4;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



void DES_ede3_cfb_encrypt
               (uchar *in,uchar *out,int numbits,long length,DES_key_schedule *ks1,
               DES_key_schedule *ks2,DES_key_schedule *ks3,DES_cblock *ivec,int enc)

{
  byte *pbVar1;
  byte *pbVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  undefined1 auVar19 [15];
  undefined1 auVar20 [14];
  undefined1 auVar21 [15];
  undefined1 auVar22 [15];
  undefined1 auVar23 [15];
  undefined1 auVar24 [14];
  undefined1 auVar25 [15];
  undefined1 auVar26 [15];
  undefined1 auVar27 [15];
  undefined1 auVar28 [14];
  undefined1 auVar29 [15];
  undefined1 auVar30 [15];
  undefined1 auVar31 [15];
  undefined1 auVar32 [14];
  undefined1 auVar33 [15];
  undefined1 auVar34 [15];
  undefined1 auVar35 [15];
  undefined1 auVar36 [15];
  undefined1 auVar37 [14];
  undefined1 auVar38 [15];
  undefined1 auVar39 [15];
  undefined1 auVar40 [15];
  undefined1 auVar41 [15];
  undefined1 auVar42 [14];
  undefined1 auVar43 [15];
  undefined1 auVar44 [15];
  undefined1 auVar45 [15];
  undefined1 auVar46 [15];
  undefined1 auVar47 [14];
  undefined1 auVar48 [15];
  undefined1 auVar49 [15];
  undefined1 auVar50 [15];
  undefined1 auVar51 [15];
  undefined1 auVar52 [14];
  undefined1 auVar53 [15];
  undefined1 auVar54 [15];
  undefined1 auVar55 [15];
  undefined1 auVar56 [15];
  undefined1 auVar57 [15];
  undefined1 auVar58 [15];
  undefined1 auVar59 [15];
  undefined1 auVar60 [15];
  undefined1 auVar61 [15];
  undefined1 auVar62 [15];
  undefined1 auVar63 [15];
  undefined1 auVar64 [15];
  undefined1 auVar65 [15];
  undefined1 auVar66 [15];
  undefined1 auVar67 [15];
  undefined1 auVar68 [15];
  undefined1 auVar69 [15];
  undefined1 auVar70 [15];
  undefined1 auVar71 [15];
  undefined1 auVar72 [15];
  undefined1 auVar73 [14];
  undefined1 auVar74 [15];
  undefined1 auVar75 [15];
  undefined1 auVar76 [15];
  undefined1 auVar77 [15];
  undefined1 auVar78 [14];
  undefined1 auVar79 [15];
  undefined1 auVar80 [15];
  undefined1 auVar81 [15];
  undefined1 auVar82 [15];
  undefined1 auVar83 [14];
  undefined1 auVar84 [15];
  undefined1 auVar85 [15];
  undefined1 auVar86 [15];
  undefined1 auVar87 [15];
  undefined1 auVar88 [14];
  undefined1 auVar89 [15];
  undefined1 auVar90 [15];
  undefined1 auVar91 [15];
  undefined1 auVar92 [15];
  undefined1 auVar93 [15];
  undefined1 auVar94 [15];
  undefined1 auVar95 [15];
  undefined1 auVar96 [15];
  undefined1 auVar97 [15];
  undefined1 auVar98 [15];
  undefined1 auVar99 [15];
  undefined1 auVar100 [15];
  undefined1 auVar101 [15];
  undefined1 auVar102 [15];
  undefined1 auVar103 [15];
  undefined1 auVar104 [15];
  undefined1 auVar105 [15];
  undefined1 auVar106 [15];
  undefined1 auVar107 [15];
  undefined1 auVar108 [13];
  undefined1 auVar109 [13];
  undefined1 auVar110 [13];
  undefined1 auVar111 [15];
  undefined1 auVar112 [15];
  undefined1 auVar113 [15];
  undefined1 auVar114 [13];
  undefined1 auVar115 [13];
  undefined1 auVar116 [13];
  undefined1 auVar117 [15];
  undefined1 auVar118 [15];
  undefined1 auVar119 [15];
  undefined1 auVar120 [13];
  undefined1 auVar121 [13];
  undefined1 auVar122 [13];
  undefined1 auVar123 [15];
  undefined1 auVar124 [15];
  undefined1 auVar125 [15];
  undefined1 auVar126 [15];
  undefined1 auVar127 [15];
  undefined1 auVar128 [13];
  undefined1 auVar129 [13];
  undefined1 auVar130 [13];
  undefined1 auVar131 [15];
  undefined1 auVar132 [15];
  undefined1 auVar133 [15];
  undefined1 auVar134 [15];
  undefined1 auVar135 [15];
  undefined1 auVar136 [15];
  undefined1 auVar137 [15];
  undefined1 auVar138 [15];
  undefined1 auVar139 [15];
  undefined1 auVar140 [15];
  undefined1 auVar141 [15];
  undefined1 auVar142 [15];
  undefined1 auVar143 [15];
  undefined1 auVar144 [15];
  undefined1 auVar145 [15];
  undefined1 auVar146 [15];
  undefined1 auVar147 [15];
  undefined1 auVar148 [15];
  undefined1 auVar149 [15];
  undefined1 auVar150 [15];
  undefined1 auVar151 [15];
  undefined1 auVar152 [15];
  undefined1 auVar153 [15];
  undefined1 auVar154 [15];
  undefined1 auVar155 [15];
  unkuint9 Var156;
  undefined1 auVar157 [11];
  undefined1 auVar158 [15];
  undefined1 auVar159 [15];
  undefined1 auVar160 [15];
  undefined1 auVar161 [15];
  undefined1 auVar162 [15];
  undefined1 auVar163 [14];
  undefined1 auVar164 [16];
  undefined1 auVar165 [13];
  undefined1 auVar166 [16];
  undefined1 auVar167 [15];
  undefined1 auVar168 [11];
  undefined1 auVar169 [15];
  undefined1 auVar170 [15];
  undefined1 auVar171 [11];
  undefined1 auVar172 [15];
  undefined1 auVar173 [15];
  undefined1 auVar174 [15];
  undefined1 auVar175 [15];
  undefined1 auVar176 [15];
  undefined1 auVar177 [14];
  undefined1 auVar178 [13];
  undefined1 auVar179 [16];
  undefined1 auVar180 [15];
  undefined1 auVar181 [11];
  undefined1 auVar182 [15];
  undefined1 auVar183 [15];
  undefined1 auVar184 [11];
  undefined1 auVar185 [15];
  undefined1 auVar186 [15];
  undefined1 auVar187 [15];
  undefined1 auVar188 [15];
  undefined1 auVar189 [15];
  undefined1 auVar190 [14];
  undefined1 auVar191 [16];
  undefined1 auVar192 [13];
  undefined1 auVar193 [16];
  undefined1 auVar194 [15];
  undefined1 auVar195 [11];
  undefined1 auVar196 [15];
  undefined1 auVar197 [15];
  undefined1 auVar198 [15];
  undefined1 auVar199 [15];
  undefined1 auVar200 [15];
  undefined1 auVar201 [15];
  undefined1 auVar202 [15];
  undefined1 auVar203 [11];
  undefined1 auVar204 [14];
  undefined1 auVar205 [16];
  undefined1 auVar206 [13];
  undefined1 auVar207 [16];
  undefined1 auVar208 [15];
  undefined1 auVar209 [11];
  undefined1 auVar210 [15];
  undefined1 auVar211 [15];
  undefined1 auVar212 [15];
  undefined1 auVar213 [15];
  undefined1 auVar214 [15];
  undefined1 auVar215 [15];
  undefined1 auVar216 [15];
  undefined1 auVar217 [15];
  undefined1 auVar218 [15];
  undefined1 auVar219 [15];
  undefined1 auVar220 [15];
  undefined1 auVar221 [15];
  undefined1 auVar222 [15];
  undefined1 auVar223 [15];
  undefined1 auVar224 [15];
  undefined1 auVar225 [15];
  undefined1 auVar226 [15];
  undefined1 auVar227 [15];
  undefined1 auVar228 [15];
  undefined1 auVar229 [15];
  undefined1 auVar230 [15];
  undefined1 auVar231 [15];
  undefined1 auVar232 [15];
  undefined1 auVar233 [15];
  undefined1 auVar234 [15];
  uint6 uVar235;
  uint5 uVar236;
  undefined8 uVar237;
  undefined1 auVar238 [15];
  undefined1 auVar239 [15];
  undefined1 auVar240 [15];
  undefined1 auVar241 [15];
  uint uVar242;
  uint uVar243;
  ulong *puVar244;
  ulong uVar245;
  uint uVar246;
  uchar *puVar247;
  ulong uVar248;
  uchar *puVar249;
  uint uVar250;
  ulong uVar251;
  ulong uVar252;
  uint uVar253;
  ulong uVar254;
  uint uVar255;
  long in_FS_OFFSET;
  byte bVar256;
  undefined1 uVar288;
  undefined1 uVar289;
  int iVar258;
  ulong uVar259;
  undefined1 auVar262 [12];
  undefined1 uVar291;
  undefined1 uVar295;
  unkuint10 Var260;
  undefined1 uVar292;
  undefined2 uVar293;
  undefined1 uVar296;
  int iVar294;
  undefined1 auVar264 [16];
  undefined1 auVar268 [16];
  undefined1 auVar271 [16];
  undefined1 auVar272 [16];
  undefined1 auVar275 [16];
  undefined1 auVar278 [16];
  undefined1 auVar263 [12];
  undefined1 auVar279 [16];
  undefined1 auVar283 [16];
  undefined1 auVar286 [16];
  undefined2 uVar290;
  undefined2 uVar297;
  undefined1 auVar287 [16];
  byte bVar298;
  int iVar299;
  int iVar339;
  undefined2 uVar341;
  undefined1 auVar300 [12];
  undefined1 auVar304 [16];
  undefined1 auVar308 [16];
  undefined1 auVar311 [16];
  undefined1 auVar312 [16];
  undefined1 auVar313 [16];
  undefined1 auVar301 [12];
  undefined1 auVar314 [16];
  undefined1 auVar318 [16];
  undefined1 auVar321 [16];
  undefined1 auVar322 [16];
  undefined1 auVar302 [12];
  undefined1 auVar323 [16];
  undefined1 auVar327 [16];
  undefined1 auVar330 [16];
  undefined1 auVar331 [16];
  undefined1 auVar303 [12];
  undefined1 auVar332 [16];
  undefined1 auVar336 [16];
  int iVar342;
  undefined1 auVar343 [12];
  int iVar356;
  undefined1 auVar344 [16];
  int iVar357;
  undefined1 auVar345 [16];
  undefined1 auVar346 [16];
  undefined1 auVar347 [16];
  undefined1 auVar351 [16];
  undefined1 auVar354 [16];
  undefined1 auVar355 [16];
  undefined1 auVar358 [16];
  undefined1 auVar359 [16];
  undefined1 auVar360 [16];
  undefined1 auVar361 [16];
  undefined1 auVar362 [16];
  undefined1 auVar363 [16];
  undefined1 auVar364 [16];
  undefined1 auVar365 [16];
  undefined1 auVar366 [16];
  undefined1 auVar367 [16];
  undefined1 auVar368 [16];
  uchar *local_f8;
  ulong local_b8;
  byte local_a8;
  ulong local_98;
  uint local_8c;
  uint local_70;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint uStack_54;
  byte bStack_50;
  uint7 uStack_4f;
  long local_40;
  ushort uVar257;
  undefined1 auVar261 [12];
  undefined1 auVar265 [16];
  undefined1 auVar280 [16];
  undefined1 auVar266 [16];
  undefined1 auVar269 [16];
  undefined1 auVar273 [16];
  undefined1 auVar276 [16];
  undefined1 auVar281 [16];
  undefined1 auVar284 [16];
  undefined1 auVar267 [16];
  undefined1 auVar270 [16];
  undefined1 auVar274 [16];
  undefined1 auVar277 [16];
  undefined1 auVar282 [16];
  undefined1 auVar285 [16];
  undefined1 auVar305 [16];
  undefined1 auVar315 [16];
  undefined1 auVar324 [16];
  undefined1 auVar333 [16];
  undefined1 auVar306 [16];
  undefined1 auVar309 [16];
  undefined1 auVar316 [16];
  undefined1 auVar319 [16];
  undefined1 auVar325 [16];
  undefined1 auVar328 [16];
  undefined1 auVar334 [16];
  undefined1 auVar337 [16];
  undefined1 auVar307 [16];
  undefined1 auVar310 [16];
  undefined1 auVar317 [16];
  undefined1 auVar320 [16];
  undefined1 auVar326 [16];
  undefined1 auVar329 [16];
  undefined1 auVar335 [16];
  undefined1 auVar338 [16];
  int iVar340;
  undefined1 auVar348 [16];
  undefined1 auVar349 [16];
  undefined1 auVar352 [16];
  undefined1 auVar350 [16];
  undefined1 auVar353 [16];
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (numbits < 0x41) {
    uVar242 = numbits + 7;
    uVar246 = *(uint *)*ivec;
    uVar259 = (ulong)uVar246;
    uVar250 = *(uint *)(*ivec + 4);
    uVar251 = (ulong)uVar250;
    uVar254 = (ulong)(uVar242 >> 3);
    local_f8 = out;
    if (enc == 0) {
      if (uVar254 <= (ulong)length) {
        if (-1 < numbits) {
          uVar242 = numbits;
        }
        local_b8 = length - uVar254;
        puVar249 = in + uVar254;
        puVar244 = (ulong *)((long)((int)uVar242 >> 3) + (long)&local_58);
        uVar242 = (uint)(numbits >> 0x1f) >> 0x1d;
        iVar258 = (uVar242 - (numbits + uVar242 & 7)) + 8;
        local_60 = uVar246;
        local_5c = uVar250;
        DES_encrypt3(&local_60,ks1,ks2,ks3);
        switch(uVar254) {
        default:
          local_70 = 0;
          puVar249 = puVar249 + uVar254;
          uVar253 = 0;
          uVar248 = 0;
          local_8c = 0;
          uVar246 = 0;
          uVar250 = 0;
          uVar242 = 0;
          local_98 = 0;
          uVar243 = 0;
          local_a8 = 0;
          bStack_50 = local_a8;
          break;
        case 1:
          bStack_50 = puVar249[-1];
          uVar243 = (uint)bStack_50;
          local_8c = 0;
          uVar253 = 0;
          uVar248 = 0;
          local_70 = 0;
          uVar246 = 0;
          uVar250 = 0;
          uVar242 = 0;
          local_98 = 0;
          break;
        case 2:
          uVar242 = 0;
          uVar250 = 0;
          goto LAB_00100939;
        case 3:
          uVar242 = 0;
          uVar250 = 0;
          goto LAB_0010092c;
        case 4:
          uVar242 = 0;
          goto LAB_00100921;
        case 5:
          goto switchD_00100410_caseD_5;
        case 6:
          goto switchD_00100410_caseD_6;
        case 7:
          goto switchD_00100410_caseD_7;
        case 8:
          goto switchD_00100410_caseD_8;
        }
LAB_001009a7:
        uStack_54 = (uint)((((uVar251 >> 0x18) << 8 | uVar251 >> 0x10 & 0xff) << 8 |
                           uVar251 >> 8 & 0xff) << 8) | (uint)uVar251 & 0xff;
        local_58 = (uint)((((uVar259 >> 0x18) << 8 | uVar259 >> 0x10 & 0xff) << 8 |
                          uVar259 >> 8 & 0xff) << 8) | (uint)uVar259 & 0xff;
        uStack_4f = (uint7)(((((((ulong)(byte)local_70 << 8 | (ulong)(uVar253 & 0xff)) << 8 |
                               (ulong)(byte)local_8c) << 8 | uVar248) << 8 | (ulong)uVar246) << 8 |
                            (ulong)(uVar250 & 0xff)) << 8) | (uint7)local_98;
        uVar246 = numbits & 7;
        if (uVar246 == 0) {
          local_58 = (uint)*puVar244;
          uStack_54 = (uint)(*puVar244 >> 0x20);
        }
        else {
          memmove(&local_58,puVar244,9);
          uVar259 = CONCAT44(uStack_54,local_58);
          auVar40[0xe] = bStack_50;
          auVar40._0_14_ = ZEXT114(bStack_50) << 0x38;
          uVar296 = (undefined1)(uStack_54 >> 0x18);
          auVar59[0xc] = uVar296;
          auVar59._0_12_ = ZEXT112(bStack_50) << 0x38;
          auVar59._13_2_ = auVar40._13_2_;
          auVar76._12_3_ = auVar59._12_3_;
          auVar76._0_12_ = ZEXT112(bStack_50) << 0x38;
          uVar295 = (undefined1)(uStack_54 >> 0x10);
          auVar95[10] = uVar295;
          auVar95._0_10_ = (unkuint10)bStack_50 << 0x38;
          auVar95._11_4_ = auVar76._11_4_;
          auVar113._10_5_ = auVar95._10_5_;
          auVar113._0_10_ = (unkuint10)bStack_50 << 0x38;
          uVar292 = (undefined1)(uStack_54 >> 8);
          auVar170._7_8_ = 0;
          auVar170._0_7_ = (uint7)(CONCAT62(auVar113._9_6_,CONCAT11(uVar292,bStack_50)) >> 8);
          uVar291 = (undefined1)uStack_54;
          Var156 = CONCAT81(SUB158(auVar170 << 0x40,7),uVar291);
          auVar217._9_6_ = 0;
          auVar217._0_9_ = Var156;
          uVar289 = (undefined1)(local_58 >> 0x18);
          auVar171._1_10_ = SUB1510(auVar217 << 0x30,5);
          auVar171[0] = uVar289;
          auVar218._11_4_ = 0;
          auVar218._0_11_ = auVar171;
          uVar288 = (undefined1)(local_58 >> 0x10);
          uVar257 = (ushort)(local_58 >> 8);
          auVar143[2] = uVar288;
          auVar143._0_2_ = uVar257;
          auVar143._3_12_ = SUB1512(auVar218 << 0x20,3);
          bVar256 = (byte)(local_58 >> 8);
          auVar152[1] = 0;
          auVar152[0] = bVar256;
          auVar152._2_13_ = auVar143._2_13_;
          auVar366._8_8_ = 0;
          auVar366._0_8_ = (long)iVar258;
          auVar23[0xe] = bStack_50;
          auVar23._0_14_ = ZEXT114(bStack_50) << 0x38;
          auVar41[0xc] = uVar296;
          auVar41._0_12_ = ZEXT112(bStack_50) << 0x38;
          auVar41._13_2_ = auVar23._13_2_;
          auVar60._12_3_ = auVar41._12_3_;
          auVar60._0_12_ = ZEXT112(bStack_50) << 0x38;
          auVar77[10] = uVar295;
          auVar77._0_10_ = (unkuint10)bStack_50 << 0x38;
          auVar77._11_4_ = auVar60._11_4_;
          auVar96._10_5_ = auVar77._10_5_;
          auVar96._0_10_ = (unkuint10)bStack_50 << 0x38;
          uVar237 = CONCAT62(auVar96._9_6_,CONCAT11(uVar292,bStack_50));
          auVar172._7_8_ = 0;
          auVar172._0_7_ = (uint7)((ulong)uVar237 >> 8);
          auVar173._8_7_ = 0;
          auVar173._0_8_ = SUB158(auVar172 << 0x40,7);
          auVar174._9_6_ = 0;
          auVar174._0_9_ = SUB159(auVar173 << 0x38,6);
          auVar175._10_5_ = 0;
          auVar175._0_10_ = SUB1510(auVar174 << 0x30,5);
          auVar176._11_4_ = 0;
          auVar176._0_11_ = SUB1511(auVar175 << 0x28,4);
          auVar239._12_3_ = 0;
          auVar239._0_12_ = SUB1512(auVar176 << 0x20,3);
          auVar144._2_13_ = SUB1513(auVar239 << 0x18,2);
          auVar144._0_2_ = uVar257 & 0xff;
          uVar290 = (undefined2)Var156;
          auVar42._10_2_ = 0;
          auVar42._0_10_ = auVar152._0_10_;
          auVar42._12_2_ = uVar290;
          uVar250 = (uint)((ulong)uVar237 >> 8);
          Var260 = (unkuint10)auVar144._0_4_ << 0x40;
          auVar24._10_2_ = 0;
          auVar24._0_10_ = auVar152._0_10_;
          auVar24._12_2_ = uVar290;
          uVar235 = CONCAT42(auVar24._10_4_,auVar171._0_2_);
          auVar177._6_8_ = 0;
          auVar177._0_6_ = uVar235;
          auVar78._4_2_ = auVar143._2_2_;
          auVar78._0_4_ = auVar152._0_4_;
          auVar78._6_8_ = SUB148(auVar177 << 0x40,6);
          iVar294 = (int)(auVar152._0_4_ & 0xffff) >> auVar366;
          iVar299 = auVar78._4_4_ >> auVar366;
          auVar262._0_8_ = CONCAT44(iVar299,iVar294);
          auVar262._8_4_ = (int)uVar235 >> auVar366;
          iVar339 = (int)CONCAT42(auVar42._10_4_,auVar171._0_2_) >> auVar366;
          iVar340 = (int)(auVar42._10_4_ >> 0x10) >> auVar366;
          uVar341 = (undefined2)((uint)iVar340 >> 0x10);
          uVar290 = (undefined2)((uint)iVar299 >> 0x10);
          auVar274._12_2_ = uVar290;
          auVar274._0_12_ = auVar262;
          auVar274._14_2_ = uVar341;
          auVar273._12_4_ = auVar274._12_4_;
          auVar273._0_10_ = auVar262._0_10_;
          uVar297 = (undefined2)iVar340;
          auVar273._10_2_ = uVar297;
          auVar272._10_6_ = auVar273._10_6_;
          auVar272._8_2_ = (short)iVar299;
          auVar272._0_8_ = auVar262._0_8_;
          uVar293 = (undefined2)((uint)iVar339 >> 0x10);
          auVar359._2_8_ = auVar272._8_8_;
          auVar359._0_2_ = uVar293;
          auVar359._10_6_ = 0;
          auVar278._0_2_ = (undefined2)iVar294;
          auVar313._12_4_ = 0;
          auVar313._0_12_ = SUB1612(auVar359 << 0x30,4);
          auVar313 = auVar313 << 0x20;
          auVar114._10_2_ = 0;
          auVar114._0_10_ = Var260;
          auVar114[0xc] = bStack_50;
          auVar115._10_2_ = 0;
          auVar115._0_10_ = Var260;
          auVar115[0xc] = bStack_50;
          uVar236 = CONCAT32(auVar115._10_3_,auVar41._12_2_);
          auVar178._5_8_ = 0;
          auVar178._0_5_ = uVar236;
          auVar116._4_2_ = auVar77._10_2_;
          auVar116._0_4_ = uVar250;
          auVar116._6_7_ = SUB137(auVar178 << 0x40,6);
          iVar340 = (int)(uVar250 & 0xffff) >> auVar366;
          iVar342 = auVar116._4_4_ >> auVar366;
          auVar301._0_8_ = CONCAT44(iVar342,iVar340);
          auVar301._8_4_ = (int)uVar236 >> auVar366;
          iVar356 = (int)CONCAT32(auVar114._10_3_,auVar41._12_2_) >> auVar366;
          iVar357 = (int)(uint)(uint3)(auVar114._10_3_ >> 0x10) >> auVar366;
          auVar277._0_12_ = auVar313._0_12_;
          auVar277._12_2_ = uVar293;
          auVar277._14_2_ = uVar341;
          auVar276._12_4_ = auVar277._12_4_;
          auVar276._0_10_ = auVar313._0_10_;
          auVar276._10_2_ = uVar290;
          auVar275._10_6_ = auVar276._10_6_;
          auVar275._0_8_ = auVar313._0_8_;
          auVar275._8_2_ = (short)((uint)iVar294 >> 0x10);
          auVar278._8_8_ = auVar275._8_8_;
          auVar278._6_2_ = uVar297;
          auVar278._4_2_ = (short)iVar339;
          auVar278._2_2_ = (short)iVar299;
          uVar341 = (undefined2)((uint)iVar357 >> 0x10);
          uVar290 = (undefined2)((uint)iVar342 >> 0x10);
          auVar317._12_2_ = uVar290;
          auVar317._0_12_ = auVar301;
          auVar317._14_2_ = uVar341;
          auVar316._12_4_ = auVar317._12_4_;
          auVar316._0_10_ = auVar301._0_10_;
          uVar297 = (undefined2)iVar357;
          auVar316._10_2_ = uVar297;
          auVar315._10_6_ = auVar316._10_6_;
          auVar315._8_2_ = (short)iVar342;
          auVar315._0_8_ = auVar301._0_8_;
          uVar293 = (undefined2)((uint)iVar356 >> 0x10);
          auVar179._2_8_ = auVar315._8_8_;
          auVar179._0_2_ = uVar293;
          auVar179._10_6_ = 0;
          auVar321._0_2_ = (undefined2)iVar340;
          auVar314._12_4_ = 0;
          auVar314._0_12_ = SUB1612(auVar179 << 0x30,4);
          auVar314 = auVar314 << 0x20;
          auVar345._8_8_ = 0;
          auVar345._0_8_ = _LC0;
          auVar320._0_12_ = auVar314._0_12_;
          auVar320._12_2_ = uVar293;
          auVar320._14_2_ = uVar341;
          auVar319._12_4_ = auVar320._12_4_;
          auVar319._0_10_ = auVar314._0_10_;
          auVar319._10_2_ = uVar290;
          auVar318._10_6_ = auVar319._10_6_;
          auVar318._0_8_ = auVar314._0_8_;
          auVar318._8_2_ = (short)((uint)iVar340 >> 0x10);
          auVar321._8_8_ = auVar318._8_8_;
          auVar321._6_2_ = uVar297;
          auVar321._4_2_ = (short)iVar356;
          auVar321._2_2_ = (short)iVar342;
          auVar278 = auVar278 & auVar345;
          auVar321 = auVar321 & auVar345;
          sVar3 = auVar278._0_2_;
          sVar5 = auVar278._2_2_;
          sVar7 = auVar278._4_2_;
          sVar9 = auVar278._6_2_;
          sVar11 = auVar321._0_2_;
          sVar13 = auVar321._2_2_;
          sVar15 = auVar321._4_2_;
          sVar17 = auVar321._6_2_;
          auVar25._8_6_ = 0;
          auVar25._0_8_ = uVar259;
          auVar25[0xe] = uVar296;
          auVar43._8_4_ = 0;
          auVar43._0_8_ = uVar259;
          auVar43[0xc] = uVar295;
          auVar43._13_2_ = auVar25._13_2_;
          auVar61._8_4_ = 0;
          auVar61._0_8_ = uVar259;
          auVar61._12_3_ = auVar43._12_3_;
          auVar79._8_2_ = 0;
          auVar79._0_8_ = uVar259;
          auVar79[10] = uVar292;
          auVar79._11_4_ = auVar61._11_4_;
          auVar97._8_2_ = 0;
          auVar97._0_8_ = uVar259;
          auVar97._10_5_ = auVar79._10_5_;
          auVar117[8] = uVar291;
          auVar117._0_8_ = uVar259;
          auVar117._9_6_ = auVar97._9_6_;
          auVar360[7] = 0;
          auVar360._0_7_ = auVar117._8_7_;
          auVar180._7_8_ = 0;
          auVar180._0_7_ = auVar117._8_7_;
          auVar219._1_8_ = SUB158(auVar180 << 0x40,7);
          auVar219[0] = uVar289;
          auVar219._9_6_ = 0;
          auVar181._1_10_ = SUB1510(auVar219 << 0x30,5);
          auVar181[0] = uVar288;
          auVar220._11_4_ = 0;
          auVar220._0_11_ = auVar181;
          uVar257 = (ushort)local_58;
          auVar133[2] = bVar256;
          auVar133._0_2_ = uVar257;
          auVar133._3_12_ = SUB1512(auVar220 << 0x20,3);
          auVar145[1] = 0;
          auVar145[0] = (byte)local_58;
          auVar145._2_13_ = auVar133._2_13_;
          auVar26._8_6_ = 0;
          auVar26._0_8_ = uVar259;
          auVar26[0xe] = uVar296;
          auVar44._8_4_ = 0;
          auVar44._0_8_ = uVar259;
          auVar44[0xc] = uVar295;
          auVar44._13_2_ = auVar26._13_2_;
          auVar62._8_4_ = 0;
          auVar62._0_8_ = uVar259;
          auVar62._12_3_ = auVar44._12_3_;
          auVar80._8_2_ = 0;
          auVar80._0_8_ = uVar259;
          auVar80[10] = uVar292;
          auVar80._11_4_ = auVar62._11_4_;
          auVar98._8_2_ = 0;
          auVar98._0_8_ = uVar259;
          auVar98._10_5_ = auVar80._10_5_;
          auVar118[8] = uVar291;
          auVar118._0_8_ = uVar259;
          auVar118._9_6_ = auVar98._9_6_;
          auVar182._7_8_ = 0;
          auVar182._0_7_ = auVar118._8_7_;
          auVar221._1_8_ = SUB158(auVar182 << 0x40,7);
          auVar221[0] = uVar289;
          auVar221._9_6_ = 0;
          auVar222._1_10_ = SUB1510(auVar221 << 0x30,5);
          auVar222[0] = uVar288;
          auVar222._11_4_ = 0;
          auVar134[2] = bVar256;
          auVar134._0_2_ = uVar257;
          auVar134._3_12_ = SUB1512(auVar222 << 0x20,3);
          auVar322._0_2_ = uVar257 & 0xff;
          auVar322._2_13_ = auVar134._2_13_;
          auVar322[0xf] = 0;
          auVar360._8_4_ = auVar145._0_4_;
          auVar360._12_4_ = auVar181._0_4_;
          auVar313 = psllw(auVar322,ZEXT416(uVar246));
          auVar359 = psllw(auVar360,ZEXT416(uVar246));
          auVar313 = auVar313 & auVar345;
          auVar345 = auVar345 & auVar359;
          sVar4 = auVar313._0_2_;
          sVar6 = auVar313._2_2_;
          sVar8 = auVar313._4_2_;
          sVar10 = auVar313._6_2_;
          sVar12 = auVar345._0_2_;
          sVar14 = auVar345._2_2_;
          sVar16 = auVar345._4_2_;
          sVar18 = auVar345._6_2_;
          uVar259 = CONCAT44(CONCAT13((0 < sVar17) * (sVar17 < 0x100) * auVar321[6] -
                                      (0xff < sVar17),
                                      CONCAT12((0 < sVar15) * (sVar15 < 0x100) * auVar321[4] -
                                               (0xff < sVar15),
                                               CONCAT11((0 < sVar13) * (sVar13 < 0x100) *
                                                        auVar321[2] - (0xff < sVar13),
                                                        (0 < sVar11) * (sVar11 < 0x100) *
                                                        auVar321[0] - (0xff < sVar11)))),
                             CONCAT13((0 < sVar9) * (sVar9 < 0x100) * auVar278[6] - (0xff < sVar9),
                                      CONCAT12((0 < sVar7) * (sVar7 < 0x100) * auVar278[4] -
                                               (0xff < sVar7),
                                               CONCAT11((0 < sVar5) * (sVar5 < 0x100) * auVar278[2]
                                                        - (0xff < sVar5),
                                                        (0 < sVar3) * (sVar3 < 0x100) * auVar278[0]
                                                        - (0xff < sVar3))))) |
                    CONCAT44(CONCAT13((0 < sVar18) * (sVar18 < 0x100) * auVar345[6] -
                                      (0xff < sVar18),
                                      CONCAT12((0 < sVar16) * (sVar16 < 0x100) * auVar345[4] -
                                               (0xff < sVar16),
                                               CONCAT11((0 < sVar14) * (sVar14 < 0x100) *
                                                        auVar345[2] - (0xff < sVar14),
                                                        (0 < sVar12) * (sVar12 < 0x100) *
                                                        auVar345[0] - (0xff < sVar12)))),
                             CONCAT13((0 < sVar10) * (sVar10 < 0x100) * auVar313[6] -
                                      (0xff < sVar10),
                                      CONCAT12((0 < sVar8) * (sVar8 < 0x100) * auVar313[4] -
                                               (0xff < sVar8),
                                               CONCAT11((0 < sVar6) * (sVar6 < 0x100) * auVar313[2]
                                                        - (0xff < sVar6),
                                                        (0 < sVar4) * (sVar4 < 0x100) * auVar313[0]
                                                        - (0xff < sVar4)))));
          local_58 = (uint)uVar259;
          uStack_54 = (uint)(uVar259 >> 0x20);
        }
        uVar248 = (ulong)uStack_54;
        uVar259 = (ulong)local_58;
LAB_00100ba2:
        uVar242 = uVar242 ^ local_5c;
        uVar243 = local_60 ^ uVar243;
        local_f8 = local_f8 + uVar254;
        puVar247 = local_f8;
        uVar251 = uVar248;
        switch(uVar254) {
        default:
          do {
            uVar246 = (uint)uVar259;
            local_f8 = local_f8 + uVar254;
            if (local_b8 < uVar254) goto LAB_001002d8;
            puVar249 = puVar249 + uVar254;
            local_b8 = local_b8 - uVar254;
            local_60 = uVar246;
            local_5c = (uint)uVar251;
            DES_encrypt3(&local_60,ks1,ks2,ks3);
            switch(uVar254) {
            default:
              while( true ) {
                uStack_54 = (uint)((((uVar251 >> 0x18) << 8 | uVar251 >> 0x10 & 0xff) << 8 |
                                   uVar251 >> 8 & 0xff) << 8) | (uint)uVar251 & 0xff;
                local_58 = (uint)((((uVar259 >> 0x18 & 0xff) << 8 | uVar259 >> 0x10 & 0xff) << 8 |
                                  uVar259 >> 8 & 0xff) << 8) | (uint)uVar259 & 0xff;
                bStack_50 = 0;
                uStack_4f = 0;
                if ((numbits & 7U) == 0) {
                  uVar259 = *puVar244;
                  local_58 = (uint)uVar259;
                  uStack_54 = (uint)(uVar259 >> 0x20);
                }
                else {
                  memmove(&local_58,puVar244,9);
                  auVar368._8_8_ = 0;
                  auVar368._0_8_ = (long)iVar258;
                  auVar362._8_8_ = 0;
                  auVar362._0_8_ = (long)iVar258;
                  uVar259 = CONCAT44(uStack_54,local_58);
                  auVar50[0xe] = bStack_50;
                  auVar50._0_14_ = ZEXT114(bStack_50) << 0x38;
                  uVar296 = (undefined1)(uStack_54 >> 0x18);
                  auVar67[0xc] = uVar296;
                  auVar67._0_12_ = ZEXT112(bStack_50) << 0x38;
                  auVar67._13_2_ = auVar50._13_2_;
                  auVar86._12_3_ = auVar67._12_3_;
                  auVar86._0_12_ = ZEXT112(bStack_50) << 0x38;
                  uVar295 = (undefined1)(uStack_54 >> 0x10);
                  auVar103[10] = uVar295;
                  auVar103._0_10_ = (unkuint10)bStack_50 << 0x38;
                  auVar103._11_4_ = auVar86._11_4_;
                  auVar125._10_5_ = auVar103._10_5_;
                  auVar125._0_10_ = (unkuint10)bStack_50 << 0x38;
                  uVar292 = (undefined1)(uStack_54 >> 8);
                  uVar237 = CONCAT62(auVar125._9_6_,CONCAT11(uVar292,bStack_50));
                  auVar197._7_8_ = 0;
                  auVar197._0_7_ = (uint7)((ulong)uVar237 >> 8);
                  uVar291 = (undefined1)uStack_54;
                  auVar198._8_7_ = 0;
                  auVar198._0_8_ = SUB158(auVar197 << 0x40,7);
                  auVar199._9_6_ = 0;
                  auVar199._0_9_ = SUB159(auVar198 << 0x38,6);
                  uVar289 = (undefined1)(local_58 >> 0x18);
                  auVar200._10_5_ = 0;
                  auVar200._0_10_ = SUB1510(auVar199 << 0x30,5);
                  auVar201._11_4_ = 0;
                  auVar201._0_11_ = SUB1511(auVar200 << 0x28,4);
                  uVar288 = (undefined1)(local_58 >> 0x10);
                  uVar257 = (ushort)(local_58 >> 8);
                  auVar241._12_3_ = 0;
                  auVar241._0_12_ = SUB1512(auVar201 << 0x20,3);
                  bVar256 = (byte)(local_58 >> 8);
                  auVar154[1] = 0;
                  auVar154[0] = bVar256;
                  auVar154._2_13_ = SUB1513(auVar241 << 0x18,2);
                  auVar31[0xe] = bStack_50;
                  auVar31._0_14_ = ZEXT114(bStack_50) << 0x38;
                  auVar51[0xc] = uVar296;
                  auVar51._0_12_ = ZEXT112(bStack_50) << 0x38;
                  auVar51._13_2_ = auVar31._13_2_;
                  auVar68._12_3_ = auVar51._12_3_;
                  auVar68._0_12_ = ZEXT112(bStack_50) << 0x38;
                  auVar87[10] = uVar295;
                  auVar87._0_10_ = (unkuint10)bStack_50 << 0x38;
                  auVar87._11_4_ = auVar68._11_4_;
                  auVar104._10_5_ = auVar87._10_5_;
                  auVar104._0_10_ = (unkuint10)bStack_50 << 0x38;
                  auVar202._7_8_ = 0;
                  auVar202._0_7_ =
                       (uint7)(CONCAT62(auVar104._9_6_,CONCAT11(uVar292,bStack_50)) >> 8);
                  Var156 = CONCAT81(SUB158(auVar202 << 0x40,7),uVar291);
                  auVar229._9_6_ = 0;
                  auVar229._0_9_ = Var156;
                  auVar203._1_10_ = SUB1510(auVar229 << 0x30,5);
                  auVar203[0] = uVar289;
                  auVar230._11_4_ = 0;
                  auVar230._0_11_ = auVar203;
                  auVar137[2] = uVar288;
                  auVar137._0_2_ = uVar257;
                  auVar137._3_12_ = SUB1512(auVar230 << 0x20,3);
                  auVar149._2_13_ = auVar137._2_13_;
                  auVar149._0_2_ = uVar257 & 0xff;
                  uVar242 = (uint)((ulong)uVar237 >> 8);
                  Var260 = (unkuint10)auVar154._0_4_ << 0x40;
                  uVar290 = (undefined2)Var156;
                  auVar52._10_2_ = 0;
                  auVar52._0_10_ = auVar149._0_10_;
                  auVar52._12_2_ = uVar290;
                  auVar32._10_2_ = 0;
                  auVar32._0_10_ = auVar149._0_10_;
                  auVar32._12_2_ = uVar290;
                  uVar235 = CONCAT42(auVar32._10_4_,auVar203._0_2_);
                  auVar204._6_8_ = 0;
                  auVar204._0_6_ = uVar235;
                  auVar88._4_2_ = auVar137._2_2_;
                  auVar88._0_4_ = auVar149._0_4_;
                  auVar88._6_8_ = SUB148(auVar204 << 0x40,6);
                  iVar339 = (int)(auVar149._0_4_ & 0xffff) >> auVar368;
                  iVar340 = auVar88._4_4_ >> auVar368;
                  auVar303._0_8_ = CONCAT44(iVar340,iVar339);
                  auVar303._8_4_ = (int)uVar235 >> auVar368;
                  iVar342 = (int)CONCAT42(auVar52._10_4_,auVar203._0_2_) >> auVar368;
                  iVar294 = (int)(auVar52._10_4_ >> 0x10) >> auVar368;
                  uVar341 = (undefined2)((uint)iVar294 >> 0x10);
                  uVar290 = (undefined2)((uint)iVar340 >> 0x10);
                  auVar335._12_2_ = uVar290;
                  auVar335._0_12_ = auVar303;
                  auVar335._14_2_ = uVar341;
                  auVar334._12_4_ = auVar335._12_4_;
                  auVar334._0_10_ = auVar303._0_10_;
                  uVar297 = (undefined2)iVar294;
                  auVar334._10_2_ = uVar297;
                  auVar333._10_6_ = auVar334._10_6_;
                  auVar333._8_2_ = (short)iVar340;
                  auVar333._0_8_ = auVar303._0_8_;
                  uVar293 = (undefined2)((uint)iVar342 >> 0x10);
                  auVar205._2_8_ = auVar333._8_8_;
                  auVar205._0_2_ = uVar293;
                  auVar205._10_6_ = 0;
                  auVar287._0_2_ = (undefined2)iVar339;
                  auVar332._12_4_ = 0;
                  auVar332._0_12_ = SUB1612(auVar205 << 0x30,4);
                  auVar332 = auVar332 << 0x20;
                  auVar128._10_2_ = 0;
                  auVar128._0_10_ = Var260;
                  auVar128[0xc] = bStack_50;
                  auVar129._10_2_ = 0;
                  auVar129._0_10_ = Var260;
                  auVar129[0xc] = bStack_50;
                  uVar236 = CONCAT32(auVar129._10_3_,auVar67._12_2_);
                  auVar206._5_8_ = 0;
                  auVar206._0_5_ = uVar236;
                  auVar130._4_2_ = auVar103._10_2_;
                  auVar130._0_4_ = uVar242;
                  auVar130._6_7_ = SUB137(auVar206 << 0x40,6);
                  iVar356 = (int)(uVar242 & 0xffff) >> auVar362;
                  iVar357 = auVar130._4_4_ >> auVar362;
                  auVar343._0_8_ = CONCAT44(iVar357,iVar356);
                  auVar343._8_4_ = (int)uVar236 >> auVar362;
                  iVar294 = (int)CONCAT32(auVar128._10_3_,auVar67._12_2_) >> auVar362;
                  iVar299 = (int)(uint)(uint3)(auVar128._10_3_ >> 0x10) >> auVar362;
                  auVar338._0_12_ = auVar332._0_12_;
                  auVar338._12_2_ = uVar293;
                  auVar338._14_2_ = uVar341;
                  auVar337._12_4_ = auVar338._12_4_;
                  auVar337._0_10_ = auVar332._0_10_;
                  auVar337._10_2_ = uVar290;
                  auVar336._10_6_ = auVar337._10_6_;
                  auVar336._0_8_ = auVar332._0_8_;
                  auVar336._8_2_ = (short)((uint)iVar339 >> 0x10);
                  auVar287._8_8_ = auVar336._8_8_;
                  auVar287._6_2_ = uVar297;
                  auVar287._4_2_ = (short)iVar342;
                  auVar287._2_2_ = (short)iVar340;
                  auVar363._8_8_ = 0;
                  auVar363._0_8_ = _LC0;
                  uVar297 = (undefined2)((uint)iVar299 >> 0x10);
                  uVar341 = (undefined2)((uint)iVar357 >> 0x10);
                  auVar350._12_2_ = uVar341;
                  auVar350._0_12_ = auVar343;
                  auVar350._14_2_ = uVar297;
                  uVar293 = (undefined2)iVar299;
                  auVar349._12_4_ = auVar350._12_4_;
                  auVar349._0_10_ = auVar343._0_10_;
                  auVar349._10_2_ = uVar293;
                  auVar348._10_6_ = auVar349._10_6_;
                  auVar348._8_2_ = (short)iVar357;
                  auVar348._0_8_ = auVar343._0_8_;
                  uVar290 = (undefined2)((uint)iVar294 >> 0x10);
                  auVar207._2_8_ = auVar348._8_8_;
                  auVar207._0_2_ = uVar290;
                  auVar207._10_6_ = 0;
                  auVar354._0_2_ = (undefined2)iVar356;
                  auVar347._12_4_ = 0;
                  auVar347._0_12_ = SUB1612(auVar207 << 0x30,4);
                  auVar347 = auVar347 << 0x20;
                  auVar287 = auVar287 & auVar363;
                  auVar353._0_12_ = auVar347._0_12_;
                  auVar353._12_2_ = uVar290;
                  auVar353._14_2_ = uVar297;
                  auVar352._12_4_ = auVar353._12_4_;
                  auVar352._0_10_ = auVar347._0_10_;
                  auVar352._10_2_ = uVar341;
                  auVar351._10_6_ = auVar352._10_6_;
                  auVar351._0_8_ = auVar347._0_8_;
                  auVar351._8_2_ = (short)((uint)iVar356 >> 0x10);
                  auVar354._8_8_ = auVar351._8_8_;
                  auVar354._6_2_ = uVar293;
                  auVar354._4_2_ = (short)iVar294;
                  auVar354._2_2_ = (short)iVar357;
                  auVar354 = auVar354 & auVar363;
                  sVar3 = auVar287._0_2_;
                  sVar5 = auVar287._2_2_;
                  sVar7 = auVar287._4_2_;
                  sVar9 = auVar287._6_2_;
                  sVar11 = auVar354._0_2_;
                  sVar13 = auVar354._2_2_;
                  sVar15 = auVar354._4_2_;
                  sVar17 = auVar354._6_2_;
                  auVar33._8_6_ = 0;
                  auVar33._0_8_ = uVar259;
                  auVar33[0xe] = uVar296;
                  auVar53._8_4_ = 0;
                  auVar53._0_8_ = uVar259;
                  auVar53[0xc] = uVar295;
                  auVar53._13_2_ = auVar33._13_2_;
                  auVar69._8_4_ = 0;
                  auVar69._0_8_ = uVar259;
                  auVar69._12_3_ = auVar53._12_3_;
                  auVar89._8_2_ = 0;
                  auVar89._0_8_ = uVar259;
                  auVar89[10] = uVar292;
                  auVar89._11_4_ = auVar69._11_4_;
                  auVar105._8_2_ = 0;
                  auVar105._0_8_ = uVar259;
                  auVar105._10_5_ = auVar89._10_5_;
                  auVar126[8] = uVar291;
                  auVar126._0_8_ = uVar259;
                  auVar126._9_6_ = auVar105._9_6_;
                  auVar364[7] = 0;
                  auVar364._0_7_ = auVar126._8_7_;
                  auVar208._7_8_ = 0;
                  auVar208._0_7_ = auVar126._8_7_;
                  auVar231._1_8_ = SUB158(auVar208 << 0x40,7);
                  auVar231[0] = uVar289;
                  auVar231._9_6_ = 0;
                  auVar209._1_10_ = SUB1510(auVar231 << 0x30,5);
                  auVar209[0] = uVar288;
                  auVar232._11_4_ = 0;
                  auVar232._0_11_ = auVar209;
                  uVar257 = (ushort)local_58;
                  auVar138[2] = bVar256;
                  auVar138._0_2_ = uVar257;
                  auVar138._3_12_ = SUB1512(auVar232 << 0x20,3);
                  auVar150[1] = 0;
                  auVar150[0] = (byte)local_58;
                  auVar150._2_13_ = auVar138._2_13_;
                  auVar364._8_4_ = auVar150._0_4_;
                  auVar364._12_4_ = auVar209._0_4_;
                  auVar34._8_6_ = 0;
                  auVar34._0_8_ = uVar259;
                  auVar34[0xe] = uVar296;
                  auVar54._8_4_ = 0;
                  auVar54._0_8_ = uVar259;
                  auVar54[0xc] = uVar295;
                  auVar54._13_2_ = auVar34._13_2_;
                  auVar70._8_4_ = 0;
                  auVar70._0_8_ = uVar259;
                  auVar70._12_3_ = auVar54._12_3_;
                  auVar90._8_2_ = 0;
                  auVar90._0_8_ = uVar259;
                  auVar90[10] = uVar292;
                  auVar90._11_4_ = auVar70._11_4_;
                  auVar106._8_2_ = 0;
                  auVar106._0_8_ = uVar259;
                  auVar106._10_5_ = auVar90._10_5_;
                  auVar127[8] = uVar291;
                  auVar127._0_8_ = uVar259;
                  auVar127._9_6_ = auVar106._9_6_;
                  auVar210._7_8_ = 0;
                  auVar210._0_7_ = auVar127._8_7_;
                  auVar233._1_8_ = SUB158(auVar210 << 0x40,7);
                  auVar233[0] = uVar289;
                  auVar233._9_6_ = 0;
                  auVar234._1_10_ = SUB1510(auVar233 << 0x30,5);
                  auVar234[0] = uVar288;
                  auVar234._11_4_ = 0;
                  auVar139[2] = bVar256;
                  auVar139._0_2_ = uVar257;
                  auVar139._3_12_ = SUB1512(auVar234 << 0x20,3);
                  auVar355._0_2_ = uVar257 & 0xff;
                  auVar355._2_13_ = auVar139._2_13_;
                  auVar355[0xf] = 0;
                  auVar359 = psllw(auVar355,ZEXT416(numbits & 7));
                  auVar313 = psllw(auVar364,ZEXT416(numbits & 7));
                  auVar359 = auVar359 & auVar363;
                  auVar313 = auVar313 & auVar363;
                  sVar4 = auVar359._0_2_;
                  sVar6 = auVar359._2_2_;
                  sVar8 = auVar359._4_2_;
                  sVar10 = auVar359._6_2_;
                  sVar12 = auVar313._0_2_;
                  sVar14 = auVar313._2_2_;
                  sVar16 = auVar313._4_2_;
                  sVar18 = auVar313._6_2_;
                  local_58 = CONCAT13((0 < sVar9) * (sVar9 < 0x100) * auVar287[6] - (0xff < sVar9),
                                      CONCAT12((0 < sVar7) * (sVar7 < 0x100) * auVar287[4] -
                                               (0xff < sVar7),
                                               CONCAT11((0 < sVar5) * (sVar5 < 0x100) * auVar287[2]
                                                        - (0xff < sVar5),
                                                        (0 < sVar3) * (sVar3 < 0x100) * auVar287[0]
                                                        - (0xff < sVar3)))) |
                             CONCAT13((0 < sVar10) * (sVar10 < 0x100) * auVar359[6] -
                                      (0xff < sVar10),
                                      CONCAT12((0 < sVar8) * (sVar8 < 0x100) * auVar359[4] -
                                               (0xff < sVar8),
                                               CONCAT11((0 < sVar6) * (sVar6 < 0x100) * auVar359[2]
                                                        - (0xff < sVar6),
                                                        (0 < sVar4) * (sVar4 < 0x100) * auVar359[0]
                                                        - (0xff < sVar4))));
                  uStack_54 = CONCAT13((0 < sVar17) * (sVar17 < 0x100) * auVar354[6] -
                                       (0xff < sVar17),
                                       CONCAT12((0 < sVar15) * (sVar15 < 0x100) * auVar354[4] -
                                                (0xff < sVar15),
                                                CONCAT11((0 < sVar13) * (sVar13 < 0x100) *
                                                         auVar354[2] - (0xff < sVar13),
                                                         (0 < sVar11) * (sVar11 < 0x100) *
                                                         auVar354[0] - (0xff < sVar11)))) |
                              CONCAT13((0 < sVar18) * (sVar18 < 0x100) * auVar313[6] -
                                       (0xff < sVar18),
                                       CONCAT12((0 < sVar16) * (sVar16 < 0x100) * auVar313[4] -
                                                (0xff < sVar16),
                                                CONCAT11((0 < sVar14) * (sVar14 < 0x100) *
                                                         auVar313[2] - (0xff < sVar14),
                                                         (0 < sVar12) * (sVar12 < 0x100) *
                                                         auVar313[0] - (0xff < sVar12))));
                  uVar259 = (ulong)local_58;
                }
                uVar251 = (ulong)uStack_54;
                if (local_b8 < uVar254) break;
                local_b8 = local_b8 - uVar254;
                local_60 = (uint)uVar259;
                local_5c = uStack_54;
                DES_encrypt3(&local_60,ks1,ks2,ks3);
              }
              goto LAB_001002d8;
            case 1:
              bVar256 = puVar249[-1];
              uStack_54 = (uint)((((uVar251 >> 0x18) << 8 | uVar251 >> 0x10 & 0xff) << 8 |
                                 uVar251 >> 8 & 0xff) << 8) | (uint)uVar251 & 0xff;
              local_58 = (uint)((((uVar259 >> 0x18) << 8 | uVar259 >> 0x10 & 0xff) << 8 |
                                uVar259 >> 8 & 0xff) << 8) | uVar246 & 0xff;
              uStack_4f = 0;
              uVar242 = numbits & 7;
              bStack_50 = bVar256;
              if (uVar242 == 0) {
                uVar248 = *puVar244;
                local_58 = (uint)uVar248;
                uStack_54 = (uint)(uVar248 >> 0x20);
                uVar259 = uVar248 & 0xffffffff;
                uVar248 = uVar248 >> 0x20;
              }
              else {
                memmove(&local_58,puVar244,9);
                uVar259 = CONCAT44(uStack_54,local_58);
                auVar45[0xe] = bStack_50;
                auVar45._0_14_ = ZEXT114(bStack_50) << 0x38;
                uVar296 = (undefined1)(uStack_54 >> 0x18);
                auVar63[0xc] = uVar296;
                auVar63._0_12_ = ZEXT112(bStack_50) << 0x38;
                auVar63._13_2_ = auVar45._13_2_;
                auVar81._12_3_ = auVar63._12_3_;
                auVar81._0_12_ = ZEXT112(bStack_50) << 0x38;
                uVar295 = (undefined1)(uStack_54 >> 0x10);
                auVar99[10] = uVar295;
                auVar99._0_10_ = (unkuint10)bStack_50 << 0x38;
                auVar99._11_4_ = auVar81._11_4_;
                auVar119._10_5_ = auVar99._10_5_;
                auVar119._0_10_ = (unkuint10)bStack_50 << 0x38;
                uVar292 = (undefined1)(uStack_54 >> 8);
                auVar183._7_8_ = 0;
                auVar183._0_7_ = (uint7)(CONCAT62(auVar119._9_6_,CONCAT11(uVar292,bStack_50)) >> 8);
                uVar291 = (undefined1)uStack_54;
                Var156 = CONCAT81(SUB158(auVar183 << 0x40,7),uVar291);
                auVar223._9_6_ = 0;
                auVar223._0_9_ = Var156;
                uVar289 = (undefined1)(local_58 >> 0x18);
                auVar184._1_10_ = SUB1510(auVar223 << 0x30,5);
                auVar184[0] = uVar289;
                auVar224._11_4_ = 0;
                auVar224._0_11_ = auVar184;
                uVar288 = (undefined1)(local_58 >> 0x10);
                uVar257 = (ushort)(local_58 >> 8);
                auVar146[2] = uVar288;
                auVar146._0_2_ = uVar257;
                auVar146._3_12_ = SUB1512(auVar224 << 0x20,3);
                bVar298 = (byte)(local_58 >> 8);
                auVar153[1] = 0;
                auVar153[0] = bVar298;
                auVar153._2_13_ = auVar146._2_13_;
                auVar367._8_8_ = 0;
                auVar367._0_8_ = (long)iVar258;
                auVar27[0xe] = bStack_50;
                auVar27._0_14_ = ZEXT114(bStack_50) << 0x38;
                auVar46[0xc] = uVar296;
                auVar46._0_12_ = ZEXT112(bStack_50) << 0x38;
                auVar46._13_2_ = auVar27._13_2_;
                auVar64._12_3_ = auVar46._12_3_;
                auVar64._0_12_ = ZEXT112(bStack_50) << 0x38;
                auVar82[10] = uVar295;
                auVar82._0_10_ = (unkuint10)bStack_50 << 0x38;
                auVar82._11_4_ = auVar64._11_4_;
                auVar100._10_5_ = auVar82._10_5_;
                auVar100._0_10_ = (unkuint10)bStack_50 << 0x38;
                uVar237 = CONCAT62(auVar100._9_6_,CONCAT11(uVar292,bStack_50));
                auVar185._7_8_ = 0;
                auVar185._0_7_ = (uint7)((ulong)uVar237 >> 8);
                auVar186._8_7_ = 0;
                auVar186._0_8_ = SUB158(auVar185 << 0x40,7);
                auVar187._9_6_ = 0;
                auVar187._0_9_ = SUB159(auVar186 << 0x38,6);
                auVar188._10_5_ = 0;
                auVar188._0_10_ = SUB1510(auVar187 << 0x30,5);
                auVar189._11_4_ = 0;
                auVar189._0_11_ = SUB1511(auVar188 << 0x28,4);
                auVar240._12_3_ = 0;
                auVar240._0_12_ = SUB1512(auVar189 << 0x20,3);
                auVar147._2_13_ = SUB1513(auVar240 << 0x18,2);
                auVar147._0_2_ = uVar257 & 0xff;
                uVar290 = (undefined2)Var156;
                auVar47._10_2_ = 0;
                auVar47._0_10_ = auVar153._0_10_;
                auVar47._12_2_ = uVar290;
                uVar246 = (uint)((ulong)uVar237 >> 8);
                Var260 = (unkuint10)auVar147._0_4_ << 0x40;
                auVar28._10_2_ = 0;
                auVar28._0_10_ = auVar153._0_10_;
                auVar28._12_2_ = uVar290;
                uVar235 = CONCAT42(auVar28._10_4_,auVar184._0_2_);
                auVar190._6_8_ = 0;
                auVar190._0_6_ = uVar235;
                auVar83._4_2_ = auVar146._2_2_;
                auVar83._0_4_ = auVar153._0_4_;
                auVar83._6_8_ = SUB148(auVar190 << 0x40,6);
                iVar294 = (int)(auVar153._0_4_ & 0xffff) >> auVar367;
                iVar299 = auVar83._4_4_ >> auVar367;
                auVar263._0_8_ = CONCAT44(iVar299,iVar294);
                auVar263._8_4_ = (int)uVar235 >> auVar367;
                iVar339 = (int)CONCAT42(auVar47._10_4_,auVar184._0_2_) >> auVar367;
                iVar340 = (int)(auVar47._10_4_ >> 0x10) >> auVar367;
                uVar341 = (undefined2)((uint)iVar340 >> 0x10);
                uVar290 = (undefined2)((uint)iVar299 >> 0x10);
                auVar282._12_2_ = uVar290;
                auVar282._0_12_ = auVar263;
                auVar282._14_2_ = uVar341;
                auVar281._12_4_ = auVar282._12_4_;
                auVar281._0_10_ = auVar263._0_10_;
                uVar297 = (undefined2)iVar340;
                auVar281._10_2_ = uVar297;
                auVar280._10_6_ = auVar281._10_6_;
                auVar280._8_2_ = (short)iVar299;
                auVar280._0_8_ = auVar263._0_8_;
                uVar293 = (undefined2)((uint)iVar339 >> 0x10);
                auVar191._2_8_ = auVar280._8_8_;
                auVar191._0_2_ = uVar293;
                auVar191._10_6_ = 0;
                auVar286._0_2_ = (undefined2)iVar294;
                auVar279._12_4_ = 0;
                auVar279._0_12_ = SUB1612(auVar191 << 0x30,4);
                auVar279 = auVar279 << 0x20;
                auVar120._10_2_ = 0;
                auVar120._0_10_ = Var260;
                auVar120[0xc] = bStack_50;
                auVar121._10_2_ = 0;
                auVar121._0_10_ = Var260;
                auVar121[0xc] = bStack_50;
                uVar236 = CONCAT32(auVar121._10_3_,auVar46._12_2_);
                auVar192._5_8_ = 0;
                auVar192._0_5_ = uVar236;
                auVar122._4_2_ = auVar82._10_2_;
                auVar122._0_4_ = uVar246;
                auVar122._6_7_ = SUB137(auVar192 << 0x40,6);
                iVar340 = (int)(uVar246 & 0xffff) >> auVar367;
                iVar342 = auVar122._4_4_ >> auVar367;
                auVar302._0_8_ = CONCAT44(iVar342,iVar340);
                auVar302._8_4_ = (int)uVar236 >> auVar367;
                iVar356 = (int)CONCAT32(auVar120._10_3_,auVar46._12_2_) >> auVar367;
                iVar357 = (int)(uint)(uint3)(auVar120._10_3_ >> 0x10) >> auVar367;
                auVar285._0_12_ = auVar279._0_12_;
                auVar285._12_2_ = uVar293;
                auVar285._14_2_ = uVar341;
                auVar284._12_4_ = auVar285._12_4_;
                auVar284._0_10_ = auVar279._0_10_;
                auVar284._10_2_ = uVar290;
                auVar283._10_6_ = auVar284._10_6_;
                auVar283._0_8_ = auVar279._0_8_;
                auVar283._8_2_ = (short)((uint)iVar294 >> 0x10);
                auVar286._8_8_ = auVar283._8_8_;
                auVar286._6_2_ = uVar297;
                auVar286._4_2_ = (short)iVar339;
                auVar286._2_2_ = (short)iVar299;
                uVar341 = (undefined2)((uint)iVar357 >> 0x10);
                uVar290 = (undefined2)((uint)iVar342 >> 0x10);
                auVar326._12_2_ = uVar290;
                auVar326._0_12_ = auVar302;
                auVar326._14_2_ = uVar341;
                auVar325._12_4_ = auVar326._12_4_;
                auVar325._0_10_ = auVar302._0_10_;
                uVar297 = (undefined2)iVar357;
                auVar325._10_2_ = uVar297;
                auVar324._10_6_ = auVar325._10_6_;
                auVar324._8_2_ = (short)iVar342;
                auVar324._0_8_ = auVar302._0_8_;
                uVar293 = (undefined2)((uint)iVar356 >> 0x10);
                auVar193._2_8_ = auVar324._8_8_;
                auVar193._0_2_ = uVar293;
                auVar193._10_6_ = 0;
                auVar330._0_2_ = (undefined2)iVar340;
                auVar323._12_4_ = 0;
                auVar323._0_12_ = SUB1612(auVar193 << 0x30,4);
                auVar323 = auVar323 << 0x20;
                auVar346._8_8_ = 0;
                auVar346._0_8_ = _LC0;
                auVar329._0_12_ = auVar323._0_12_;
                auVar329._12_2_ = uVar293;
                auVar329._14_2_ = uVar341;
                auVar328._12_4_ = auVar329._12_4_;
                auVar328._0_10_ = auVar323._0_10_;
                auVar328._10_2_ = uVar290;
                auVar327._10_6_ = auVar328._10_6_;
                auVar327._0_8_ = auVar323._0_8_;
                auVar327._8_2_ = (short)((uint)iVar340 >> 0x10);
                auVar330._8_8_ = auVar327._8_8_;
                auVar330._6_2_ = uVar297;
                auVar330._4_2_ = (short)iVar356;
                auVar330._2_2_ = (short)iVar342;
                auVar286 = auVar286 & auVar346;
                auVar330 = auVar330 & auVar346;
                sVar3 = auVar286._0_2_;
                sVar5 = auVar286._2_2_;
                sVar7 = auVar286._4_2_;
                sVar9 = auVar286._6_2_;
                sVar11 = auVar330._0_2_;
                sVar13 = auVar330._2_2_;
                sVar15 = auVar330._4_2_;
                sVar17 = auVar330._6_2_;
                auVar29._8_6_ = 0;
                auVar29._0_8_ = uVar259;
                auVar29[0xe] = uVar296;
                auVar48._8_4_ = 0;
                auVar48._0_8_ = uVar259;
                auVar48[0xc] = uVar295;
                auVar48._13_2_ = auVar29._13_2_;
                auVar65._8_4_ = 0;
                auVar65._0_8_ = uVar259;
                auVar65._12_3_ = auVar48._12_3_;
                auVar84._8_2_ = 0;
                auVar84._0_8_ = uVar259;
                auVar84[10] = uVar292;
                auVar84._11_4_ = auVar65._11_4_;
                auVar101._8_2_ = 0;
                auVar101._0_8_ = uVar259;
                auVar101._10_5_ = auVar84._10_5_;
                auVar123[8] = uVar291;
                auVar123._0_8_ = uVar259;
                auVar123._9_6_ = auVar101._9_6_;
                auVar361[7] = 0;
                auVar361._0_7_ = auVar123._8_7_;
                auVar194._7_8_ = 0;
                auVar194._0_7_ = auVar123._8_7_;
                auVar225._1_8_ = SUB158(auVar194 << 0x40,7);
                auVar225[0] = uVar289;
                auVar225._9_6_ = 0;
                auVar195._1_10_ = SUB1510(auVar225 << 0x30,5);
                auVar195[0] = uVar288;
                auVar226._11_4_ = 0;
                auVar226._0_11_ = auVar195;
                uVar257 = (ushort)local_58;
                auVar135[2] = bVar298;
                auVar135._0_2_ = uVar257;
                auVar135._3_12_ = SUB1512(auVar226 << 0x20,3);
                auVar148[1] = 0;
                auVar148[0] = (byte)local_58;
                auVar148._2_13_ = auVar135._2_13_;
                auVar30._8_6_ = 0;
                auVar30._0_8_ = uVar259;
                auVar30[0xe] = uVar296;
                auVar49._8_4_ = 0;
                auVar49._0_8_ = uVar259;
                auVar49[0xc] = uVar295;
                auVar49._13_2_ = auVar30._13_2_;
                auVar66._8_4_ = 0;
                auVar66._0_8_ = uVar259;
                auVar66._12_3_ = auVar49._12_3_;
                auVar85._8_2_ = 0;
                auVar85._0_8_ = uVar259;
                auVar85[10] = uVar292;
                auVar85._11_4_ = auVar66._11_4_;
                auVar102._8_2_ = 0;
                auVar102._0_8_ = uVar259;
                auVar102._10_5_ = auVar85._10_5_;
                auVar124[8] = uVar291;
                auVar124._0_8_ = uVar259;
                auVar124._9_6_ = auVar102._9_6_;
                auVar196._7_8_ = 0;
                auVar196._0_7_ = auVar124._8_7_;
                auVar227._1_8_ = SUB158(auVar196 << 0x40,7);
                auVar227[0] = uVar289;
                auVar227._9_6_ = 0;
                auVar228._1_10_ = SUB1510(auVar227 << 0x30,5);
                auVar228[0] = uVar288;
                auVar228._11_4_ = 0;
                auVar136[2] = bVar298;
                auVar136._0_2_ = uVar257;
                auVar136._3_12_ = SUB1512(auVar228 << 0x20,3);
                auVar331._0_2_ = uVar257 & 0xff;
                auVar331._2_13_ = auVar136._2_13_;
                auVar331[0xf] = 0;
                auVar361._8_4_ = auVar148._0_4_;
                auVar361._12_4_ = auVar195._0_4_;
                auVar313 = psllw(auVar331,ZEXT416(uVar242));
                auVar359 = psllw(auVar361,ZEXT416(uVar242));
                auVar313 = auVar313 & auVar346;
                auVar346 = auVar346 & auVar359;
                sVar4 = auVar313._0_2_;
                sVar6 = auVar313._2_2_;
                sVar8 = auVar313._4_2_;
                sVar10 = auVar313._6_2_;
                sVar12 = auVar346._0_2_;
                sVar14 = auVar346._2_2_;
                sVar16 = auVar346._4_2_;
                sVar18 = auVar346._6_2_;
                local_58 = CONCAT13((0 < sVar9) * (sVar9 < 0x100) * auVar286[6] - (0xff < sVar9),
                                    CONCAT12((0 < sVar7) * (sVar7 < 0x100) * auVar286[4] -
                                             (0xff < sVar7),
                                             CONCAT11((0 < sVar5) * (sVar5 < 0x100) * auVar286[2] -
                                                      (0xff < sVar5),
                                                      (0 < sVar3) * (sVar3 < 0x100) * auVar286[0] -
                                                      (0xff < sVar3)))) |
                           CONCAT13((0 < sVar10) * (sVar10 < 0x100) * auVar313[6] - (0xff < sVar10),
                                    CONCAT12((0 < sVar8) * (sVar8 < 0x100) * auVar313[4] -
                                             (0xff < sVar8),
                                             CONCAT11((0 < sVar6) * (sVar6 < 0x100) * auVar313[2] -
                                                      (0xff < sVar6),
                                                      (0 < sVar4) * (sVar4 < 0x100) * auVar313[0] -
                                                      (0xff < sVar4))));
                uStack_54 = CONCAT13((0 < sVar17) * (sVar17 < 0x100) * auVar330[6] - (0xff < sVar17)
                                     ,CONCAT12((0 < sVar15) * (sVar15 < 0x100) * auVar330[4] -
                                               (0xff < sVar15),
                                               CONCAT11((0 < sVar13) * (sVar13 < 0x100) *
                                                        auVar330[2] - (0xff < sVar13),
                                                        (0 < sVar11) * (sVar11 < 0x100) *
                                                        auVar330[0] - (0xff < sVar11)))) |
                            CONCAT13((0 < sVar18) * (sVar18 < 0x100) * auVar346[6] - (0xff < sVar18)
                                     ,CONCAT12((0 < sVar16) * (sVar16 < 0x100) * auVar346[4] -
                                               (0xff < sVar16),
                                               CONCAT11((0 < sVar14) * (sVar14 < 0x100) *
                                                        auVar346[2] - (0xff < sVar14),
                                                        (0 < sVar12) * (sVar12 < 0x100) *
                                                        auVar346[0] - (0xff < sVar12))));
                uVar259 = (ulong)local_58;
                uVar248 = (ulong)uStack_54;
              }
              local_f8 = local_f8 + 1;
              uVar243 = local_60 ^ bVar256;
              break;
            case 2:
              uVar242 = 0;
              uVar243 = (uint)*(ushort *)(puVar249 + -2);
              goto LAB_00100969;
            case 3:
              uVar242 = 0;
              uVar243 = (uint)puVar249[-1] << 0x10 | (uint)puVar249[-3] | (uint)puVar249[-2] << 8;
              goto LAB_00100969;
            case 4:
              uVar242 = 0;
              uVar243 = (uint)puVar249[-3] << 8 |
                        (uint)puVar249[-2] << 0x10 | (uint)puVar249[-1] << 0x18 | (uint)puVar249[-4]
              ;
              if (numbits != 0x20) goto LAB_00100969;
              uVar248 = (ulong)uVar243;
              uVar243 = local_60 ^ uVar243;
              puVar247 = local_f8 + 4;
              uVar259 = uVar251;
switchD_00100bd0_caseD_4:
              local_f8 = puVar247 + -1;
              puVar247[-1] = (uchar)(uVar243 >> 0x18);
LAB_00100c0f:
              puVar247 = local_f8 + -1;
              local_f8[-1] = (uchar)(uVar243 >> 0x10);
switchD_00100bd0_caseD_2:
              puVar247[-1] = (uchar)(uVar243 >> 8);
              local_f8 = puVar247 + -1;
              break;
            case 5:
              goto switchD_00100410_caseD_5;
            case 6:
              goto switchD_00100410_caseD_6;
            case 7:
              goto switchD_00100410_caseD_7;
            case 8:
              goto switchD_00100410_caseD_8;
            }
LAB_00100c23:
            local_f8[-1] = (uchar)uVar243;
            local_f8 = local_f8 + -1;
            uVar251 = uVar248;
          } while( true );
        case 1:
          goto LAB_00100c23;
        case 2:
          goto switchD_00100bd0_caseD_2;
        case 3:
          goto LAB_00100c0f;
        case 4:
          goto switchD_00100bd0_caseD_4;
        case 5:
          break;
        case 8:
          local_f8 = local_f8 + -1;
          *local_f8 = (uchar)(uVar242 >> 0x18);
        case 7:
          local_f8 = local_f8 + -1;
          *local_f8 = (uchar)(uVar242 >> 0x10);
        case 6:
          local_f8[-1] = (uchar)(uVar242 >> 8);
          local_f8 = local_f8 + -1;
        }
        local_f8[-1] = (uchar)uVar242;
        puVar247 = local_f8 + -1;
        goto switchD_00100bd0_caseD_4;
      }
    }
    else if (uVar254 <= (ulong)length) {
      if (-1 < numbits) {
        uVar242 = numbits;
      }
      uVar248 = length - uVar254;
      puVar249 = in + uVar254;
      puVar244 = (ulong *)((long)((int)uVar242 >> 3) + (long)&local_58);
      uVar242 = (uint)(numbits >> 0x1f) >> 0x1d;
      local_60 = uVar246;
      local_5c = uVar250;
      DES_encrypt3(&local_60,ks1,ks2,ks3);
      switch(uVar254) {
      default:
        uVar259 = (ulong)uVar246;
        uVar246 = 0;
        uVar251 = (ulong)uVar250;
        uVar250 = 0;
        break;
      case 1:
        uVar259 = (ulong)uVar246;
        uVar251 = (ulong)uVar250;
        uVar246 = 0;
        uVar250 = 0;
        goto LAB_00100469;
      case 2:
        uVar259 = (ulong)uVar246;
        uVar246 = 0;
        uVar250 = 0;
        goto LAB_0010045c;
      case 3:
        uVar259 = (ulong)uVar246;
        uVar246 = 0;
        uVar250 = 0;
        goto LAB_0010044f;
      case 4:
        uVar259 = (ulong)uVar246;
        uVar246 = 0;
        goto LAB_00100444;
      case 5:
        goto switchD_001002d1_caseD_5;
      case 6:
        goto switchD_001002d1_caseD_6;
      case 7:
        goto switchD_001002d1_caseD_7;
      case 8:
        goto switchD_001002d1_caseD_8;
      }
LAB_00100473:
      uVar255 = (uint)uVar259;
      uVar250 = uVar250 ^ local_60;
      uVar245 = (ulong)uVar250;
      local_f8 = local_f8 + uVar254;
      puVar249 = puVar249 + uVar254;
      uVar246 = uVar246 ^ local_5c;
      bVar256 = (byte)uVar250;
      uVar253 = uVar250 >> 0x10;
      uVar243 = uVar250 >> 8 & 0xff;
      uVar252 = uVar251;
      switch(uVar254) {
      default:
switchD_001004b2_caseD_0:
        do {
          bStack_50 = (byte)uVar250;
          local_f8 = local_f8 + uVar254;
          uStack_54 = (uint)((((uVar251 >> 0x18) << 8 | uVar251 >> 0x10 & 0xff) << 8 |
                             uVar251 >> 8 & 0xff) << 8) | (uint)uVar251 & 0xff;
          uStack_4f = (uint7)((((((ulong)(ushort)(uVar246 >> 0x10) << 8 |
                                 (ulong)(uVar246 >> 8 & 0xff)) << 8 | (ulong)(uVar246 & 0xff)) << 8
                               | uVar245 >> 0x18) << 8 | (ulong)(uVar253 & 0xff)) << 8) |
                      (uint7)uVar243;
          local_58 = (uint)((((uVar259 >> 0x18 & 0xff) << 8 | uVar259 >> 0x10 & 0xff) << 8 |
                            uVar259 >> 8 & 0xff) << 8) | (uint)uVar259 & 0xff;
          if ((numbits & 7U) != 0) {
LAB_00100750:
            memmove(&local_58,puVar244,9);
            uVar259 = CONCAT44(uStack_54,local_58);
            auVar365._8_8_ = 0;
            auVar365._0_8_ = (long)(int)((uVar242 - (numbits + uVar242 & 7)) + 8);
            auVar35[0xe] = bStack_50;
            auVar35._0_14_ = ZEXT114(bStack_50) << 0x38;
            uVar296 = (undefined1)(uStack_54 >> 0x18);
            auVar55[0xc] = uVar296;
            auVar55._0_12_ = ZEXT112(bStack_50) << 0x38;
            auVar55._13_2_ = auVar35._13_2_;
            auVar71._12_3_ = auVar55._12_3_;
            auVar71._0_12_ = ZEXT112(bStack_50) << 0x38;
            uVar295 = (undefined1)(uStack_54 >> 0x10);
            auVar91[10] = uVar295;
            auVar91._0_10_ = (unkuint10)bStack_50 << 0x38;
            auVar91._11_4_ = auVar71._11_4_;
            auVar107._10_5_ = auVar91._10_5_;
            auVar107._0_10_ = (unkuint10)bStack_50 << 0x38;
            uVar292 = (undefined1)(uStack_54 >> 8);
            auVar155._7_8_ = 0;
            auVar155._0_7_ = (uint7)(CONCAT62(auVar107._9_6_,CONCAT11(uVar292,bStack_50)) >> 8);
            uVar291 = (undefined1)uStack_54;
            Var156 = CONCAT81(SUB158(auVar155 << 0x40,7),uVar291);
            auVar211._9_6_ = 0;
            auVar211._0_9_ = Var156;
            uVar289 = (undefined1)(local_58 >> 0x18);
            auVar157._1_10_ = SUB1510(auVar211 << 0x30,5);
            auVar157[0] = uVar289;
            auVar212._11_4_ = 0;
            auVar212._0_11_ = auVar157;
            uVar288 = (undefined1)(local_58 >> 0x10);
            uVar257 = (ushort)(local_58 >> 8);
            auVar140[2] = uVar288;
            auVar140._0_2_ = uVar257;
            auVar140._3_12_ = SUB1512(auVar212 << 0x20,3);
            bVar256 = (byte)(local_58 >> 8);
            auVar151[1] = 0;
            auVar151[0] = bVar256;
            auVar151._2_13_ = auVar140._2_13_;
            auVar19[0xe] = bStack_50;
            auVar19._0_14_ = ZEXT114(bStack_50) << 0x38;
            auVar36[0xc] = uVar296;
            auVar36._0_12_ = ZEXT112(bStack_50) << 0x38;
            auVar36._13_2_ = auVar19._13_2_;
            auVar56._12_3_ = auVar36._12_3_;
            auVar56._0_12_ = ZEXT112(bStack_50) << 0x38;
            auVar72[10] = uVar295;
            auVar72._0_10_ = (unkuint10)bStack_50 << 0x38;
            auVar72._11_4_ = auVar56._11_4_;
            auVar92._10_5_ = auVar72._10_5_;
            auVar92._0_10_ = (unkuint10)bStack_50 << 0x38;
            uVar237 = CONCAT62(auVar92._9_6_,CONCAT11(uVar292,bStack_50));
            auVar158._7_8_ = 0;
            auVar158._0_7_ = (uint7)((ulong)uVar237 >> 8);
            auVar159._8_7_ = 0;
            auVar159._0_8_ = SUB158(auVar158 << 0x40,7);
            auVar160._9_6_ = 0;
            auVar160._0_9_ = SUB159(auVar159 << 0x38,6);
            auVar161._10_5_ = 0;
            auVar161._0_10_ = SUB1510(auVar160 << 0x30,5);
            auVar162._11_4_ = 0;
            auVar162._0_11_ = SUB1511(auVar161 << 0x28,4);
            auVar238._12_3_ = 0;
            auVar238._0_12_ = SUB1512(auVar162 << 0x20,3);
            auVar141._2_13_ = SUB1513(auVar238 << 0x18,2);
            auVar141._0_2_ = uVar257 & 0xff;
            uVar290 = (undefined2)Var156;
            auVar37._10_2_ = 0;
            auVar37._0_10_ = auVar151._0_10_;
            auVar37._12_2_ = uVar290;
            uVar246 = (uint)((ulong)uVar237 >> 8);
            Var260 = (unkuint10)auVar141._0_4_ << 0x40;
            auVar20._10_2_ = 0;
            auVar20._0_10_ = auVar151._0_10_;
            auVar20._12_2_ = uVar290;
            uVar235 = CONCAT42(auVar20._10_4_,auVar157._0_2_);
            auVar163._6_8_ = 0;
            auVar163._0_6_ = uVar235;
            auVar73._4_2_ = auVar140._2_2_;
            auVar73._0_4_ = auVar151._0_4_;
            auVar73._6_8_ = SUB148(auVar163 << 0x40,6);
            iVar258 = (int)(auVar151._0_4_ & 0xffff) >> auVar365;
            iVar294 = auVar73._4_4_ >> auVar365;
            auVar261._0_8_ = CONCAT44(iVar294,iVar258);
            auVar261._8_4_ = (int)uVar235 >> auVar365;
            iVar299 = (int)CONCAT42(auVar37._10_4_,auVar157._0_2_) >> auVar365;
            iVar339 = (int)(auVar37._10_4_ >> 0x10) >> auVar365;
            uVar341 = (undefined2)((uint)iVar339 >> 0x10);
            uVar290 = (undefined2)((uint)iVar294 >> 0x10);
            auVar267._12_2_ = uVar290;
            auVar267._0_12_ = auVar261;
            auVar267._14_2_ = uVar341;
            auVar266._12_4_ = auVar267._12_4_;
            auVar266._0_10_ = auVar261._0_10_;
            uVar297 = (undefined2)iVar339;
            auVar266._10_2_ = uVar297;
            auVar265._10_6_ = auVar266._10_6_;
            auVar265._8_2_ = (short)iVar294;
            auVar265._0_8_ = auVar261._0_8_;
            uVar293 = (undefined2)((uint)iVar299 >> 0x10);
            auVar164._2_8_ = auVar265._8_8_;
            auVar164._0_2_ = uVar293;
            auVar164._10_6_ = 0;
            auVar271._0_2_ = (undefined2)iVar258;
            auVar264._12_4_ = 0;
            auVar264._0_12_ = SUB1612(auVar164 << 0x30,4);
            auVar264 = auVar264 << 0x20;
            auVar108._10_2_ = 0;
            auVar108._0_10_ = Var260;
            auVar108[0xc] = bStack_50;
            auVar109._10_2_ = 0;
            auVar109._0_10_ = Var260;
            auVar109[0xc] = bStack_50;
            uVar236 = CONCAT32(auVar109._10_3_,auVar36._12_2_);
            auVar165._5_8_ = 0;
            auVar165._0_5_ = uVar236;
            auVar110._4_2_ = auVar72._10_2_;
            auVar110._0_4_ = uVar246;
            auVar110._6_7_ = SUB137(auVar165 << 0x40,6);
            iVar339 = (int)(uVar246 & 0xffff) >> auVar365;
            iVar340 = auVar110._4_4_ >> auVar365;
            auVar300._0_8_ = CONCAT44(iVar340,iVar339);
            auVar300._8_4_ = (int)uVar236 >> auVar365;
            iVar342 = (int)CONCAT32(auVar108._10_3_,auVar36._12_2_) >> auVar365;
            iVar356 = (int)(uint)(uint3)(auVar108._10_3_ >> 0x10) >> auVar365;
            auVar270._0_12_ = auVar264._0_12_;
            auVar270._12_2_ = uVar293;
            auVar270._14_2_ = uVar341;
            auVar269._12_4_ = auVar270._12_4_;
            auVar269._0_10_ = auVar264._0_10_;
            auVar269._10_2_ = uVar290;
            auVar268._10_6_ = auVar269._10_6_;
            auVar268._0_8_ = auVar264._0_8_;
            auVar268._8_2_ = (short)((uint)iVar258 >> 0x10);
            auVar271._8_8_ = auVar268._8_8_;
            auVar271._6_2_ = uVar297;
            auVar271._4_2_ = (short)iVar299;
            auVar271._2_2_ = (short)iVar294;
            uVar341 = (undefined2)((uint)iVar356 >> 0x10);
            uVar290 = (undefined2)((uint)iVar340 >> 0x10);
            auVar307._12_2_ = uVar290;
            auVar307._0_12_ = auVar300;
            auVar307._14_2_ = uVar341;
            auVar306._12_4_ = auVar307._12_4_;
            auVar306._0_10_ = auVar300._0_10_;
            uVar297 = (undefined2)iVar356;
            auVar306._10_2_ = uVar297;
            auVar305._10_6_ = auVar306._10_6_;
            auVar305._8_2_ = (short)iVar340;
            auVar305._0_8_ = auVar300._0_8_;
            uVar293 = (undefined2)((uint)iVar342 >> 0x10);
            auVar166._2_8_ = auVar305._8_8_;
            auVar166._0_2_ = uVar293;
            auVar166._10_6_ = 0;
            auVar311._0_2_ = (undefined2)iVar339;
            auVar304._12_4_ = 0;
            auVar304._0_12_ = SUB1612(auVar166 << 0x30,4);
            auVar304 = auVar304 << 0x20;
            auVar344._8_8_ = 0;
            auVar344._0_8_ = _LC0;
            auVar310._0_12_ = auVar304._0_12_;
            auVar310._12_2_ = uVar293;
            auVar310._14_2_ = uVar341;
            auVar309._12_4_ = auVar310._12_4_;
            auVar309._0_10_ = auVar304._0_10_;
            auVar309._10_2_ = uVar290;
            auVar308._10_6_ = auVar309._10_6_;
            auVar308._0_8_ = auVar304._0_8_;
            auVar308._8_2_ = (short)((uint)iVar339 >> 0x10);
            auVar311._8_8_ = auVar308._8_8_;
            auVar311._6_2_ = uVar297;
            auVar311._4_2_ = (short)iVar342;
            auVar311._2_2_ = (short)iVar340;
            auVar271 = auVar271 & auVar344;
            auVar311 = auVar311 & auVar344;
            sVar3 = auVar271._0_2_;
            sVar5 = auVar271._2_2_;
            sVar7 = auVar271._4_2_;
            sVar9 = auVar271._6_2_;
            sVar11 = auVar311._0_2_;
            sVar13 = auVar311._2_2_;
            sVar15 = auVar311._4_2_;
            sVar17 = auVar311._6_2_;
            auVar21._8_6_ = 0;
            auVar21._0_8_ = uVar259;
            auVar21[0xe] = uVar296;
            auVar38._8_4_ = 0;
            auVar38._0_8_ = uVar259;
            auVar38[0xc] = uVar295;
            auVar38._13_2_ = auVar21._13_2_;
            auVar57._8_4_ = 0;
            auVar57._0_8_ = uVar259;
            auVar57._12_3_ = auVar38._12_3_;
            auVar74._8_2_ = 0;
            auVar74._0_8_ = uVar259;
            auVar74[10] = uVar292;
            auVar74._11_4_ = auVar57._11_4_;
            auVar93._8_2_ = 0;
            auVar93._0_8_ = uVar259;
            auVar93._10_5_ = auVar74._10_5_;
            auVar111[8] = uVar291;
            auVar111._0_8_ = uVar259;
            auVar111._9_6_ = auVar93._9_6_;
            auVar358[7] = 0;
            auVar358._0_7_ = auVar111._8_7_;
            auVar167._7_8_ = 0;
            auVar167._0_7_ = auVar111._8_7_;
            auVar213._1_8_ = SUB158(auVar167 << 0x40,7);
            auVar213[0] = uVar289;
            auVar213._9_6_ = 0;
            auVar168._1_10_ = SUB1510(auVar213 << 0x30,5);
            auVar168[0] = uVar288;
            auVar214._11_4_ = 0;
            auVar214._0_11_ = auVar168;
            uVar257 = (ushort)local_58;
            auVar131[2] = bVar256;
            auVar131._0_2_ = uVar257;
            auVar131._3_12_ = SUB1512(auVar214 << 0x20,3);
            auVar142[1] = 0;
            auVar142[0] = (byte)local_58;
            auVar142._2_13_ = auVar131._2_13_;
            auVar22._8_6_ = 0;
            auVar22._0_8_ = uVar259;
            auVar22[0xe] = uVar296;
            auVar39._8_4_ = 0;
            auVar39._0_8_ = uVar259;
            auVar39[0xc] = uVar295;
            auVar39._13_2_ = auVar22._13_2_;
            auVar58._8_4_ = 0;
            auVar58._0_8_ = uVar259;
            auVar58._12_3_ = auVar39._12_3_;
            auVar75._8_2_ = 0;
            auVar75._0_8_ = uVar259;
            auVar75[10] = uVar292;
            auVar75._11_4_ = auVar58._11_4_;
            auVar94._8_2_ = 0;
            auVar94._0_8_ = uVar259;
            auVar94._10_5_ = auVar75._10_5_;
            auVar112[8] = uVar291;
            auVar112._0_8_ = uVar259;
            auVar112._9_6_ = auVar94._9_6_;
            auVar169._7_8_ = 0;
            auVar169._0_7_ = auVar112._8_7_;
            auVar215._1_8_ = SUB158(auVar169 << 0x40,7);
            auVar215[0] = uVar289;
            auVar215._9_6_ = 0;
            auVar216._1_10_ = SUB1510(auVar215 << 0x30,5);
            auVar216[0] = uVar288;
            auVar216._11_4_ = 0;
            auVar132[2] = bVar256;
            auVar132._0_2_ = uVar257;
            auVar132._3_12_ = SUB1512(auVar216 << 0x20,3);
            auVar312._0_2_ = uVar257 & 0xff;
            auVar312._2_13_ = auVar132._2_13_;
            auVar312[0xf] = 0;
            auVar358._8_4_ = auVar142._0_4_;
            auVar358._12_4_ = auVar168._0_4_;
            auVar313 = psllw(auVar312,ZEXT416(numbits & 7));
            auVar359 = psllw(auVar358,ZEXT416(numbits & 7));
            auVar313 = auVar313 & auVar344;
            auVar344 = auVar344 & auVar359;
            sVar4 = auVar313._0_2_;
            sVar6 = auVar313._2_2_;
            sVar8 = auVar313._4_2_;
            sVar10 = auVar313._6_2_;
            sVar12 = auVar344._0_2_;
            sVar14 = auVar344._2_2_;
            sVar16 = auVar344._4_2_;
            sVar18 = auVar344._6_2_;
            uVar259 = CONCAT44(CONCAT13((0 < sVar17) * (sVar17 < 0x100) * auVar311[6] -
                                        (0xff < sVar17),
                                        CONCAT12((0 < sVar15) * (sVar15 < 0x100) * auVar311[4] -
                                                 (0xff < sVar15),
                                                 CONCAT11((0 < sVar13) * (sVar13 < 0x100) *
                                                          auVar311[2] - (0xff < sVar13),
                                                          (0 < sVar11) * (sVar11 < 0x100) *
                                                          auVar311[0] - (0xff < sVar11)))),
                               CONCAT13((0 < sVar9) * (sVar9 < 0x100) * auVar271[6] - (0xff < sVar9)
                                        ,CONCAT12((0 < sVar7) * (sVar7 < 0x100) * auVar271[4] -
                                                  (0xff < sVar7),
                                                  CONCAT11((0 < sVar5) * (sVar5 < 0x100) *
                                                           auVar271[2] - (0xff < sVar5),
                                                           (0 < sVar3) * (sVar3 < 0x100) *
                                                           auVar271[0] - (0xff < sVar3))))) |
                      CONCAT44(CONCAT13((0 < sVar18) * (sVar18 < 0x100) * auVar344[6] -
                                        (0xff < sVar18),
                                        CONCAT12((0 < sVar16) * (sVar16 < 0x100) * auVar344[4] -
                                                 (0xff < sVar16),
                                                 CONCAT11((0 < sVar14) * (sVar14 < 0x100) *
                                                          auVar344[2] - (0xff < sVar14),
                                                          (0 < sVar12) * (sVar12 < 0x100) *
                                                          auVar344[0] - (0xff < sVar12)))),
                               CONCAT13((0 < sVar10) * (sVar10 < 0x100) * auVar313[6] -
                                        (0xff < sVar10),
                                        CONCAT12((0 < sVar8) * (sVar8 < 0x100) * auVar313[4] -
                                                 (0xff < sVar8),
                                                 CONCAT11((0 < sVar6) * (sVar6 < 0x100) *
                                                          auVar313[2] - (0xff < sVar6),
                                                          (0 < sVar4) * (sVar4 < 0x100) *
                                                          auVar313[0] - (0xff < sVar4)))));
            local_58 = (uint)uVar259;
            uStack_54 = (uint)(uVar259 >> 0x20);
LAB_00100733:
            uVar251 = (ulong)uStack_54;
            uVar259 = (ulong)local_58;
LAB_0010051c:
            uVar250 = (uint)uVar251;
            if (uVar248 < uVar254) goto LAB_001002d8;
            uVar248 = uVar248 - uVar254;
            puVar249 = puVar249 + uVar254;
            uVar255 = (uint)uVar259;
            local_60 = uVar255;
            local_5c = uVar250;
            DES_encrypt3(&local_60,ks1,ks2,ks3);
            uVar252 = uVar251;
            uVar246 = local_5c;
            switch(uVar254) {
            default:
              local_f8 = local_f8 + uVar254;
              puVar249 = puVar249 + uVar254;
              uVar243 = local_60 >> 8 & 0xff;
              uVar245 = (ulong)local_60;
              uVar253 = local_60 >> 0x10;
              uVar250 = local_60;
              goto switchD_001004b2_caseD_0;
            case 1:
              local_f8 = local_f8 + 1;
              uVar250 = puVar249[-1] ^ local_60;
              bStack_50 = (byte)uVar250;
              uVar243 = local_60 >> 8 & 0xff;
              uVar253 = local_60 >> 0x10;
LAB_001008d0:
              local_f8[-1] = bStack_50;
              break;
            case 2:
              local_f8 = local_f8 + 2;
              uVar250 = *(ushort *)(puVar249 + -2) ^ local_60;
              bStack_50 = (byte)uVar250;
              uVar243 = uVar250 >> 8 & 0xff;
              uVar253 = local_60 >> 0x10;
LAB_00100891:
              local_f8[-1] = (uchar)uVar243;
              local_f8[-2] = bStack_50;
              break;
            case 3:
              local_f8 = local_f8 + 3;
              uVar250 = ((uint)puVar249[-3] | (uint)puVar249[-2] << 8 | (uint)puVar249[-1] << 0x10)
                        ^ local_60;
              bStack_50 = (byte)uVar250;
              uVar243 = uVar250 >> 8 & 0xff;
              uVar253 = uVar250 >> 0x10;
LAB_00100622:
              local_f8[-1] = (uchar)uVar253;
              local_f8[-2] = (uchar)uVar243;
              local_f8[-3] = bStack_50;
              break;
            case 4:
              goto switchD_0010056c_caseD_4;
            case 5:
              goto switchD_001002d1_caseD_5;
            case 6:
              goto switchD_001002d1_caseD_6;
            case 7:
              goto switchD_001002d1_caseD_7;
            case 8:
              goto switchD_001002d1_caseD_8;
            }
            goto LAB_00100632;
          }
          uVar259 = *puVar244;
          local_58 = (uint)uVar259;
          uStack_54 = (uint)(uVar259 >> 0x20);
          uVar251 = (ulong)uStack_54;
          if (uVar248 < uVar254) goto LAB_001002d8;
          uVar248 = uVar248 - uVar254;
          local_60 = local_58;
          local_5c = uStack_54;
          DES_encrypt3(&local_60,ks1,ks2,ks3);
          local_f8 = local_f8 + uVar254;
          puVar249 = puVar249 + uVar254 * 2;
          uVar245 = (ulong)local_60;
          uVar253 = local_60 >> 0x10;
          uVar243 = local_60 >> 8 & 0xff;
          uVar246 = local_5c;
          uVar250 = local_60;
        } while( true );
      case 1:
        bStack_50 = bVar256;
        goto LAB_001008d0;
      case 2:
        bStack_50 = bVar256;
        goto LAB_00100891;
      case 3:
        bStack_50 = bVar256;
        goto LAB_00100622;
      case 4:
        goto LAB_001004f3;
      case 5:
        goto switchD_001004b2_caseD_5;
      case 6:
        break;
      case 8:
        local_f8[-1] = (uchar)(uVar246 >> 0x18);
        local_f8 = local_f8 + -1;
      case 7:
        local_f8[-1] = (uchar)(uVar246 >> 0x10);
        local_f8 = local_f8 + -1;
      }
      local_f8[-1] = (uchar)(uVar246 >> 8);
      local_f8 = local_f8 + -1;
switchD_001004b2_caseD_5:
      local_f8[-1] = (uchar)uVar246;
      local_f8 = local_f8 + -1;
      goto LAB_001004f3;
    }
LAB_001002d8:
    *ivec = (DES_cblock)
            ((((((((uVar251 >> 0x18) << 8 | uVar251 >> 0x10 & 0xff) << 8 | uVar251 >> 8 & 0xff) << 8
                | uVar251 & 0xff) << 8 | uVar259 >> 0x18 & 0xff) << 8 | uVar259 >> 0x10 & 0xff) << 8
             | (uVar259 & 0xffffffff) >> 8 & 0xff) << 8 | uVar259 & 0xff);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
switchD_00100410_caseD_8:
  pbVar1 = puVar249 + -1;
  puVar249 = puVar249 + -1;
  uVar242 = (uint)*pbVar1 << 0x18;
  goto LAB_00100cb2;
switchD_00100410_caseD_7:
  uVar242 = 0;
LAB_00100cb2:
  pbVar1 = puVar249 + -1;
  puVar249 = puVar249 + -1;
  uVar242 = (uint)*pbVar1 << 0x10 | uVar242;
LAB_00100908:
  pbVar1 = puVar249 + -1;
  puVar249 = puVar249 + -1;
  uVar242 = (uint)*pbVar1 << 8 | uVar242;
LAB_00100915:
  pbVar1 = puVar249 + -1;
  puVar249 = puVar249 + -1;
  uVar242 = *pbVar1 | uVar242;
LAB_00100921:
  pbVar1 = puVar249 + -1;
  puVar249 = puVar249 + -1;
  uVar250 = (uint)*pbVar1 << 0x18;
LAB_0010092c:
  uVar250 = (uint)puVar249[-1] << 0x10 | uVar250;
  puVar249 = puVar249 + -1;
LAB_00100939:
  pbVar1 = puVar249 + -2;
  pbVar2 = puVar249 + -1;
  puVar249 = puVar249 + (uVar254 - 2);
  uVar243 = (uint)*pbVar2 << 8 | uVar250 | *pbVar1;
  if (numbits == 0x20) {
    uVar248 = (ulong)uVar243;
    uVar259 = uVar251;
    goto LAB_00100ba2;
  }
  if (numbits == 0x40) {
    uVar248 = (ulong)uVar242;
    uVar259 = (ulong)uVar243;
    goto LAB_00100ba2;
  }
  uVar259 = (ulong)uVar246;
LAB_00100969:
  bStack_50 = (byte)uVar243;
  uVar250 = uVar243 >> 0x10;
  uVar248 = (ulong)(uVar242 & 0xff);
  uVar253 = uVar242 >> 0x10;
  local_98 = (ulong)(uVar243 >> 8) & 0xffffffff000000ff;
  uVar246 = uVar243 >> 0x18;
  local_8c = uVar242 >> 8 & 0xff;
  local_70 = uVar242 >> 0x18;
  goto LAB_001009a7;
switchD_00100410_caseD_6:
  uVar242 = 0;
  goto LAB_00100908;
switchD_00100410_caseD_5:
  uVar242 = 0;
  goto LAB_00100915;
switchD_001002d1_caseD_8:
  pbVar1 = puVar249 + -1;
  puVar249 = puVar249 + -1;
  uVar246 = (uint)*pbVar1 << 0x18;
  goto LAB_0010041a;
switchD_001002d1_caseD_7:
  uVar246 = 0;
LAB_0010041a:
  pbVar1 = puVar249 + -1;
  puVar249 = puVar249 + -1;
  uVar246 = (uint)*pbVar1 << 0x10 | uVar246;
LAB_0010042d:
  pbVar1 = puVar249 + -1;
  puVar249 = puVar249 + -1;
  uVar246 = (uint)*pbVar1 << 8 | uVar246;
LAB_0010043a:
  pbVar1 = puVar249 + -1;
  puVar249 = puVar249 + -1;
  uVar246 = *pbVar1 | uVar246;
LAB_00100444:
  uVar251 = (ulong)uVar250;
  pbVar1 = puVar249 + -1;
  puVar249 = puVar249 + -1;
  uVar250 = (uint)*pbVar1 << 0x18;
LAB_0010044f:
  pbVar1 = puVar249 + -1;
  puVar249 = puVar249 + -1;
  uVar250 = (uint)*pbVar1 << 0x10 | uVar250;
LAB_0010045c:
  pbVar1 = puVar249 + -1;
  puVar249 = puVar249 + -1;
  uVar250 = (uint)*pbVar1 << 8 | uVar250;
LAB_00100469:
  pbVar1 = puVar249 + -1;
  puVar249 = puVar249 + -1;
  uVar250 = *pbVar1 | uVar250;
  goto LAB_00100473;
switchD_001002d1_caseD_6:
  uVar246 = 0;
  goto LAB_0010042d;
switchD_001002d1_caseD_5:
  uVar246 = 0;
  goto LAB_0010043a;
switchD_0010056c_caseD_4:
  uVar253 = ((uint)puVar249[-4] |
            (uint)puVar249[-3] << 8 | (uint)puVar249[-2] << 0x10 | (uint)puVar249[-1] << 0x18) ^
            local_60;
  bVar256 = (byte)uVar253;
  uVar245 = (ulong)uVar253;
  uVar243 = uVar253 >> 8 & 0xff;
  local_f8 = local_f8 + 4;
  uVar253 = uVar253 >> 0x10;
LAB_001004f3:
  uVar250 = (uint)uVar245;
  local_f8[-2] = (uchar)uVar253;
  local_f8[-3] = (uchar)uVar243;
  local_f8[-1] = (uchar)(uVar245 >> 0x18);
  local_f8[-4] = bVar256;
  local_f8 = local_f8 + (uVar254 - 4);
  uVar251 = uVar245;
  uVar259 = uVar252;
  if (numbits == 0x20) goto LAB_0010051c;
  if (numbits == 0x40) {
    uVar251 = (ulong)uVar246;
    uVar259 = uVar245;
    goto LAB_0010051c;
  }
  uVar259 = (ulong)uVar255;
  bStack_50 = bVar256;
LAB_00100632:
  uStack_54 = (uint)((((uVar252 >> 0x18) << 8 | uVar252 >> 0x10 & 0xff) << 8 | uVar252 >> 8 & 0xff)
                    << 8) | (uint)uVar252 & 0xff;
  uStack_4f = (uint7)(((((((ulong)(uVar246 >> 0x18) << 8 | (ulong)(uVar246 >> 0x10 & 0xff)) << 8 |
                         (ulong)(uVar246 >> 8 & 0xff)) << 8 | (ulong)(uVar246 & 0xff)) << 8 |
                       (ulong)(uVar250 >> 0x18)) << 8 | (ulong)(uVar253 & 0xff)) << 8) |
              (uint7)uVar243;
  local_58 = (uint)((((uVar259 >> 0x18) << 8 | uVar259 >> 0x10 & 0xff) << 8 | uVar259 >> 8 & 0xff)
                   << 8) | (uint)uVar259 & 0xff;
  if ((numbits & 7U) != 0) goto LAB_00100750;
  local_58 = (uint)*puVar244;
  uStack_54 = (uint)(*puVar244 >> 0x20);
  goto LAB_00100733;
}


