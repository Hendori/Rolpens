
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CAST_set_key(CAST_KEY *key,int len,uchar *data)

{
  int iVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 auVar12 [15];
  undefined1 auVar13 [14];
  undefined1 auVar14 [15];
  undefined1 auVar15 [14];
  undefined1 auVar16 [14];
  undefined1 auVar17 [15];
  undefined1 auVar18 [15];
  undefined1 auVar19 [15];
  undefined1 auVar20 [15];
  undefined1 auVar21 [15];
  undefined1 auVar22 [15];
  undefined1 auVar23 [15];
  undefined1 auVar24 [14];
  undefined1 auVar25 [13];
  undefined1 auVar26 [13];
  undefined1 auVar27 [13];
  undefined1 auVar28 [15];
  undefined1 auVar29 [15];
  undefined1 auVar30 [14];
  undefined1 auVar31 [15];
  undefined1 auVar32 [15];
  undefined1 auVar33 [15];
  undefined1 auVar34 [14];
  undefined1 auVar35 [15];
  undefined1 auVar36 [15];
  undefined1 auVar37 [15];
  undefined1 auVar38 [15];
  undefined1 auVar39 [13];
  undefined1 auVar40 [13];
  undefined1 auVar41 [13];
  undefined1 auVar42 [13];
  undefined1 auVar43 [15];
  undefined1 auVar44 [15];
  undefined1 auVar45 [15];
  undefined1 auVar46 [15];
  undefined1 auVar47 [15];
  undefined1 auVar48 [15];
  unkuint9 Var49;
  undefined1 auVar50 [11];
  undefined1 auVar51 [14];
  undefined1 auVar52 [13];
  undefined1 auVar53 [15];
  undefined1 auVar54 [15];
  undefined1 auVar55 [15];
  undefined1 auVar56 [15];
  undefined1 auVar57 [15];
  undefined1 auVar58 [15];
  undefined1 auVar59 [11];
  undefined1 auVar60 [14];
  undefined1 auVar61 [13];
  undefined1 auVar62 [15];
  undefined1 auVar63 [15];
  undefined1 auVar64 [15];
  undefined1 auVar65 [15];
  undefined1 auVar66 [15];
  int iVar67;
  int iVar68;
  uint uVar69;
  uint uVar70;
  uint uVar71;
  ulong uVar72;
  uint uVar73;
  ulong uVar74;
  uint uVar75;
  ulong uVar76;
  ulong uVar77;
  uint uVar78;
  uint uVar79;
  int iVar80;
  ulong uVar81;
  ulong uVar82;
  ulong uVar83;
  ulong uVar84;
  ulong uVar85;
  uint uVar86;
  uint uVar87;
  ulong uVar88;
  ulong uVar89;
  long in_FS_OFFSET;
  bool bVar90;
  unkuint10 Var91;
  undefined1 uVar93;
  undefined1 uVar94;
  undefined1 uVar95;
  undefined1 uVar96;
  undefined1 auVar92 [16];
  undefined2 uVar97;
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  uint *local_190;
  ulong local_188;
  ulong local_178;
  ulong local_168;
  ulong local_150;
  ulong local_130;
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  uint local_c8;
  uint uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  uint local_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  undefined4 local_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  undefined4 local_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  uint local_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int local_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int local_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_108 = (undefined1  [16])0x0;
  local_f8 = (undefined1  [16])0x0;
  iVar68 = 0x10;
  if (len < 0x11) {
    iVar68 = len;
  }
  local_e8 = (undefined1  [16])0x0;
  local_d8 = (undefined1  [16])0x0;
  if (0 < len) {
    if (len < 0x10) {
      if (iVar68 - 1U < 7) {
        iVar80 = 0;
      }
      else {
        uVar72 = *(ulong *)data;
        uVar96 = (undefined1)(uVar72 >> 0x38);
        auVar18._8_6_ = 0;
        auVar18._0_8_ = uVar72;
        auVar18[0xe] = uVar96;
        uVar95 = (undefined1)(uVar72 >> 0x30);
        auVar21._8_4_ = 0;
        auVar21._0_8_ = uVar72;
        auVar21[0xc] = uVar95;
        auVar21._13_2_ = auVar18._13_2_;
        auVar28._8_4_ = 0;
        auVar28._0_8_ = uVar72;
        auVar28._12_3_ = auVar21._12_3_;
        uVar94 = (undefined1)(uVar72 >> 0x28);
        auVar32._8_2_ = 0;
        auVar32._0_8_ = uVar72;
        auVar32[10] = uVar94;
        auVar32._11_4_ = auVar28._11_4_;
        auVar36._8_2_ = 0;
        auVar36._0_8_ = uVar72;
        auVar36._10_5_ = auVar32._10_5_;
        uVar93 = (undefined1)(uVar72 >> 0x20);
        auVar38[8] = uVar93;
        auVar38._0_8_ = uVar72;
        auVar38._9_6_ = auVar36._9_6_;
        auVar53._7_8_ = 0;
        auVar53._0_7_ = auVar38._8_7_;
        auVar54._8_7_ = 0;
        auVar54._0_8_ = SUB158(auVar53 << 0x40,7);
        auVar55._9_6_ = 0;
        auVar55._0_9_ = SUB159(auVar54 << 0x38,6);
        auVar56._10_5_ = 0;
        auVar56._0_10_ = SUB1510(auVar55 << 0x30,5);
        auVar57._11_4_ = 0;
        auVar57._0_11_ = SUB1511(auVar56 << 0x28,4);
        auVar66._12_3_ = 0;
        auVar66._0_12_ = SUB1512(auVar57 << 0x20,3);
        auVar47[1] = 0;
        auVar47[0] = (byte)uVar72;
        auVar47._2_13_ = SUB1513(auVar66 << 0x18,2);
        auVar14._8_6_ = 0;
        auVar14._0_8_ = uVar72;
        auVar14[0xe] = uVar96;
        auVar19._8_4_ = 0;
        auVar19._0_8_ = uVar72;
        auVar19[0xc] = uVar95;
        auVar19._13_2_ = auVar14._13_2_;
        auVar22._8_4_ = 0;
        auVar22._0_8_ = uVar72;
        auVar22._12_3_ = auVar19._12_3_;
        auVar29._8_2_ = 0;
        auVar29._0_8_ = uVar72;
        auVar29[10] = uVar94;
        auVar29._11_4_ = auVar22._11_4_;
        auVar33._8_2_ = 0;
        auVar33._0_8_ = uVar72;
        auVar33._10_5_ = auVar29._10_5_;
        auVar37[8] = uVar93;
        auVar37._0_8_ = uVar72;
        auVar37._9_6_ = auVar33._9_6_;
        auVar58._7_8_ = 0;
        auVar58._0_7_ = auVar37._8_7_;
        Var49 = CONCAT81(SUB158(auVar58 << 0x40,7),(char)(uVar72 >> 0x18));
        auVar64._9_6_ = 0;
        auVar64._0_9_ = Var49;
        auVar59._1_10_ = SUB1510(auVar64 << 0x30,5);
        auVar59[0] = (char)(uVar72 >> 0x10);
        auVar65._11_4_ = 0;
        auVar65._0_11_ = auVar59;
        auVar44[2] = (char)(uVar72 >> 8);
        auVar44._0_2_ = (ushort)uVar72;
        auVar44._3_12_ = SUB1512(auVar65 << 0x20,3);
        auVar46._2_13_ = auVar44._2_13_;
        auVar46._0_2_ = (ushort)uVar72 & 0xff;
        Var91 = (unkuint10)auVar47._0_4_ << 0x40;
        uVar97 = (undefined2)Var49;
        auVar15._10_2_ = 0;
        auVar15._0_10_ = auVar46._0_10_;
        auVar15._12_2_ = uVar97;
        local_108._12_4_ = auVar15._10_4_ >> 0x10;
        local_108._8_4_ = (int)CONCAT42(auVar15._10_4_,auVar59._0_2_);
        auVar16._10_2_ = 0;
        auVar16._0_10_ = auVar46._0_10_;
        auVar16._12_2_ = uVar97;
        auVar60._2_4_ = auVar16._10_4_;
        auVar60._0_2_ = auVar59._0_2_;
        auVar60._6_8_ = 0;
        auVar30._4_2_ = auVar44._2_2_;
        auVar30._0_4_ = auVar46._0_4_;
        auVar30._6_8_ = SUB148(auVar60 << 0x40,6);
        auVar34._4_10_ = auVar30._4_10_;
        auVar34._0_4_ = auVar46._0_4_ & 0xffff;
        auVar39._10_2_ = 0;
        auVar39._0_10_ = Var91;
        auVar39[0xc] = uVar96;
        auVar40._10_2_ = 0;
        auVar40._0_10_ = Var91;
        auVar40[0xc] = uVar96;
        auVar61._2_3_ = auVar40._10_3_;
        auVar61._0_2_ = auVar21._12_2_;
        auVar61._5_8_ = 0;
        auVar41._4_2_ = auVar32._10_2_;
        auVar41._0_4_ = auVar38._8_4_;
        auVar41._6_7_ = SUB137(auVar61 << 0x40,6);
        auVar42._4_9_ = auVar41._4_9_;
        auVar42._0_4_ = auVar38._8_4_ & 0xffff;
        local_f8._12_3_ = auVar39._10_3_ >> 0x10;
        local_f8._8_4_ = (int)CONCAT32(auVar39._10_3_,auVar21._12_2_);
        local_108._0_8_ = auVar34._0_8_;
        local_f8._0_8_ = auVar42._0_8_;
        local_f8[0xf] = 0;
        if (iVar68 == 8) goto LAB_001000b9;
        iVar80 = 8;
      }
      *(uint *)(local_108 + (long)iVar80 * 4) = (uint)data[iVar80];
      iVar1 = iVar80 + 1;
      if (iVar1 < iVar68) {
        *(uint *)(local_108 + (long)iVar1 * 4) = (uint)data[iVar1];
        iVar1 = iVar80 + 2;
        if (iVar1 < iVar68) {
          *(uint *)(local_108 + (long)iVar1 * 4) = (uint)data[iVar1];
          iVar1 = iVar80 + 3;
          if (iVar1 < iVar68) {
            *(uint *)(local_108 + (long)iVar1 * 4) = (uint)data[iVar1];
            iVar1 = iVar80 + 4;
            if (iVar1 < iVar68) {
              *(uint *)(local_108 + (long)iVar1 * 4) = (uint)data[iVar1];
              iVar1 = iVar80 + 5;
              if (iVar1 < iVar68) {
                iVar80 = iVar80 + 6;
                *(uint *)(local_108 + (long)iVar1 * 4) = (uint)data[iVar1];
                if (iVar80 < iVar68) {
                  *(uint *)(local_108 + (long)iVar80 * 4) = (uint)data[iVar80];
                }
              }
            }
          }
        }
      }
    }
    else {
      auVar2 = *(undefined1 (*) [16])data;
      uVar79 = CONCAT13(0,CONCAT12(auVar2[9],(ushort)auVar2[8]));
      auVar12[0xd] = 0;
      auVar12._0_13_ = auVar2._0_13_;
      auVar12[0xe] = auVar2[7];
      auVar17[0xc] = auVar2[6];
      auVar17._0_12_ = auVar2._0_12_;
      auVar17._13_2_ = auVar12._13_2_;
      auVar20[0xb] = 0;
      auVar20._0_11_ = auVar2._0_11_;
      auVar20._12_3_ = auVar17._12_3_;
      auVar23[10] = auVar2[5];
      auVar23._0_10_ = auVar2._0_10_;
      auVar23._11_4_ = auVar20._11_4_;
      auVar31[9] = 0;
      auVar31._0_9_ = auVar2._0_9_;
      auVar31._10_5_ = auVar23._10_5_;
      auVar35[8] = auVar2[4];
      auVar35._0_8_ = auVar2._0_8_;
      auVar35._9_6_ = auVar31._9_6_;
      auVar48._7_8_ = 0;
      auVar48._0_7_ = auVar35._8_7_;
      Var49 = CONCAT81(SUB158(auVar48 << 0x40,7),auVar2[3]);
      auVar62._9_6_ = 0;
      auVar62._0_9_ = Var49;
      auVar50._1_10_ = SUB1510(auVar62 << 0x30,5);
      auVar50[0] = auVar2[2];
      auVar63._11_4_ = 0;
      auVar63._0_11_ = auVar50;
      auVar43[2] = auVar2[1];
      auVar43._0_2_ = auVar2._0_2_;
      auVar43._3_12_ = SUB1512(auVar63 << 0x20,3);
      auVar45._2_13_ = auVar43._2_13_;
      auVar45._0_2_ = auVar2._0_2_ & 0xff;
      local_f8._2_2_ = 0;
      local_f8._0_2_ = auVar35._8_2_;
      local_f8._4_2_ = auVar23._10_2_;
      local_f8._6_2_ = 0;
      local_f8._8_2_ = auVar17._12_2_;
      local_f8._10_2_ = 0;
      local_f8[0xc] = auVar2[7];
      local_f8._13_3_ = 0;
      auVar13._10_2_ = 0;
      auVar13._0_10_ = auVar45._0_10_;
      auVar13._12_2_ = (short)Var49;
      auVar51._2_4_ = auVar13._10_4_;
      auVar51._0_2_ = auVar50._0_2_;
      auVar51._6_8_ = 0;
      auVar24._4_2_ = auVar43._2_2_;
      auVar24._0_4_ = auVar45._0_4_;
      auVar24._6_8_ = SUB148(auVar51 << 0x40,6);
      local_108._0_4_ = auVar45._0_4_ & 0xffff;
      local_108._4_10_ = auVar24._4_10_;
      local_108._14_2_ = 0;
      local_d8._1_3_ = 0;
      local_d8[0] = auVar2[0xc];
      local_d8[4] = auVar2[0xd];
      local_d8._5_3_ = 0;
      local_d8[8] = auVar2[0xe];
      local_d8._9_3_ = 0;
      local_d8[0xc] = auVar2[0xf];
      local_d8._13_3_ = 0;
      auVar25[0xc] = auVar2[0xb];
      auVar25._0_12_ = ZEXT112(auVar2[0xc]) << 0x40;
      auVar26._10_3_ = auVar25._10_3_;
      auVar26._0_10_ = (unkuint10)auVar2[10] << 0x40;
      auVar52._5_8_ = 0;
      auVar52._0_5_ = auVar26._8_5_;
      auVar27[4] = auVar2[9];
      auVar27._0_4_ = uVar79;
      auVar27[5] = 0;
      auVar27._6_7_ = SUB137(auVar52 << 0x40,6);
      local_e8._0_4_ = uVar79 & 0xffff;
      local_e8._4_9_ = auVar27._4_9_;
      local_e8._13_3_ = 0;
    }
  }
LAB_001000b9:
  key->short_key = (uint)(len < 0xb);
  auVar2 = __LC1;
  iVar67 = _UNK_00102b6c;
  iVar1 = _UNK_00102b68;
  iVar80 = _UNK_00102b64;
  iVar68 = __LC0;
  local_130 = (ulong)(uint)local_d8._0_4_;
  uVar72 = (ulong)(uint)local_d8._8_4_;
  uVar69 = local_108._0_4_ << 0x18 | local_108._4_4_ << 0x10 | local_108._12_4_ |
           local_108._8_4_ << 8;
  uVar70 = local_f8._0_4_ << 0x18 | local_f8._4_4_ << 0x10 | local_f8._12_4_ | local_f8._8_4_ << 8;
  uVar79 = *(uint *)(CAST_S_table6 + (ulong)(uint)local_e8._0_4_ * 4);
  local_150 = (ulong)(uint)local_d8._4_4_;
  local_188 = (ulong)(uint)(local_e8._0_4_ << 0x18 | local_e8._4_4_ << 0x10 | local_e8._12_4_ |
                           local_e8._8_4_ << 8);
  uVar78 = local_d8._0_4_ << 0x18 | local_d8._4_4_ << 0x10 | local_d8._12_4_ | local_d8._8_4_ << 8;
  uVar73 = *(uint *)(CAST_S_table5 + (ulong)(uint)local_d8._12_4_ * 4);
  uVar86 = *(uint *)(CAST_S_table5 + (ulong)(uint)local_e8._12_4_ * 4);
  local_178 = (ulong)(uint)local_e8._8_4_;
  local_168 = (ulong)(uint)local_e8._4_4_;
  local_190 = &local_c8;
  do {
    uVar79 = *(uint *)(CAST_S_table4 + local_150 * 4) ^ *(uint *)(CAST_S_table6 + local_130 * 4) ^
             *(uint *)(CAST_S_table7 + uVar72 * 4) ^ uVar69 ^ uVar73 ^ uVar79;
    uVar84 = (ulong)(uVar79 & 0xff);
    uVar72 = (ulong)(uVar79 >> 0x18);
    uVar83 = (ulong)(uVar79 >> 0x10 & 0xff);
    uVar73 = *(uint *)(CAST_S_table6 + uVar83 * 4);
    uVar74 = (ulong)(uVar79 >> 8 & 0xff);
    local_188._0_4_ =
         *(uint *)(CAST_S_table4 + uVar72 * 4) ^ *(uint *)(CAST_S_table7 + uVar84 * 4) ^
         *(uint *)(CAST_S_table7 + local_178 * 4) ^ *(uint *)(CAST_S_table5 + uVar74 * 4) ^ uVar73 ^
         (uint)local_188;
    local_178 = (ulong)(uint)local_188;
    uVar76 = (ulong)((uint)local_188 >> 8 & 0xff);
    local_178 = local_178 & 0xff;
    uVar77 = (ulong)((uint)local_188 >> 0x10 & 0xff);
    uVar78 = *(uint *)(CAST_S_table7 + (ulong)((uint)local_188 >> 0x18) * 4) ^
             *(uint *)(CAST_S_table4 + local_178 * 4) ^ *(uint *)(CAST_S_table4 + local_168 * 4) ^
             *(uint *)(CAST_S_table5 + uVar76 * 4) ^ *(uint *)(CAST_S_table6 + uVar77 * 4) ^ uVar78;
    uVar81 = (ulong)(uVar78 >> 0x10 & 0xff);
    uVar86 = uVar86 ^ *(uint *)(CAST_S_table6 + (ulong)(uVar78 & 0xff) * 4) ^
                      *(uint *)(CAST_S_table7 + (ulong)(uVar78 >> 0x18) * 4) ^
                      *(uint *)(CAST_S_table4 + (ulong)(uVar78 >> 8 & 0xff) * 4) ^
                      *(uint *)(CAST_S_table5 + uVar81 * 4) ^ uVar70;
    uVar69 = *(uint *)(CAST_S_table7 + uVar76 * 4);
    uVar70 = *(uint *)(CAST_S_table7 + uVar74 * 4);
    uVar71 = *(uint *)(CAST_S_table5 + local_178 * 4);
    uVar75 = *(uint *)(CAST_S_table6 + uVar84 * 4);
    uVar87 = *(uint *)(CAST_S_table6 + uVar81 * 4);
    uVar3 = *(uint *)(CAST_S_table4 + (ulong)(uVar86 >> 0x18) * 4);
    uVar4 = *(uint *)(CAST_S_table5 + (ulong)(uVar86 >> 0x10 & 0xff) * 4);
    uVar5 = *(uint *)(CAST_S_table7 + uVar72 * 4);
    uVar6 = *(uint *)(CAST_S_table5 + (ulong)(uVar86 & 0xff) * 4);
    uVar7 = *(uint *)(CAST_S_table7 + (ulong)(uVar86 >> 0x18) * 4);
    uVar8 = *(uint *)(CAST_S_table4 + (ulong)(uVar86 >> 8 & 0xff) * 4);
    uVar9 = *(uint *)(CAST_S_table6 + (ulong)((uint)local_188 >> 0x18) * 4);
    uVar10 = *(uint *)(CAST_S_table6 + uVar72 * 4);
    uVar11 = *(uint *)(CAST_S_table4 + uVar77 * 4);
    *(ulong *)local_190 =
         CONCAT44(*(uint *)(CAST_S_table5 + uVar76 * 4) ^ *(uint *)(CAST_S_table6 + uVar77 * 4) ^
                  *(uint *)(CAST_S_table7 + (ulong)((uint)local_188 >> 0x18) * 4) ^
                  *(uint *)(CAST_S_table5 + (ulong)(uVar78 & 0xff) * 4) ^
                  *(uint *)(CAST_S_table4 + (ulong)(uVar78 >> 8 & 0xff) * 4),
                  *(uint *)(CAST_S_table6 + local_178 * 4) ^ *(uint *)(CAST_S_table4 + uVar74 * 4) ^
                  uVar69 ^ *(uint *)(CAST_S_table4 + (ulong)(uVar78 >> 0x18) * 4) ^
                  *(uint *)(CAST_S_table5 + uVar81 * 4));
    *(ulong *)(local_190 + 2) =
         CONCAT44(uVar73 ^ uVar5 ^ uVar6 ^ uVar7 ^ uVar8,uVar3 ^ uVar87 ^ uVar70 ^ uVar75 ^ uVar4);
    uVar78 = uVar71 ^ uVar9 ^ uVar10 ^ uVar69 ^ uVar11 ^ uVar78;
    uVar82 = (ulong)(uVar78 >> 0x10 & 0xff);
    uVar77 = (ulong)(uVar78 & 0xff);
    uVar70 = uVar79 ^ uVar70 ^ *(uint *)(CAST_S_table4 + (ulong)(uVar78 >> 0x18) * 4) ^
             *(uint *)(CAST_S_table7 + uVar77 * 4) ^
             *(uint *)(CAST_S_table5 + (ulong)(uVar78 >> 8 & 0xff) * 4) ^
             *(uint *)(CAST_S_table6 + uVar82 * 4);
    uVar72 = (ulong)(uVar70 >> 0x10 & 0xff);
    uVar79 = *(uint *)(CAST_S_table5 + (ulong)(uVar70 >> 8 & 0xff) * 4);
    uVar73 = *(uint *)(CAST_S_table4 + (ulong)(uVar70 & 0xff) * 4);
    uVar75 = (uint)local_188 ^ *(uint *)(CAST_S_table4 + uVar83 * 4) ^ uVar73 ^
             *(uint *)(CAST_S_table7 + (ulong)(uVar70 >> 0x18) * 4) ^ uVar79 ^
             *(uint *)(CAST_S_table6 + uVar72 * 4);
    uVar85 = (ulong)(uVar75 >> 0x10 & 0xff);
    uVar81 = (ulong)(uVar75 >> 0x18);
    uVar88 = (ulong)(uVar75 & 0xff);
    uVar74 = (ulong)(uVar75 >> 8 & 0xff);
    uVar71 = uVar86 ^ *(uint *)(CAST_S_table5 + uVar84 * 4) ^ *(uint *)(CAST_S_table6 + uVar88 * 4)
             ^ *(uint *)(CAST_S_table7 + uVar81 * 4) ^ *(uint *)(CAST_S_table4 + uVar74 * 4) ^
             *(uint *)(CAST_S_table5 + uVar85 * 4);
    uVar83 = (ulong)(uVar71 >> 0x10 & 0xff);
    uVar86 = *(uint *)(CAST_S_table6 + (ulong)(uVar71 >> 0x18) * 4);
    uVar76 = (ulong)(uVar71 >> 8 & 0xff);
    local_190[4] = *(uint *)(CAST_S_table5 + (ulong)(uVar78 >> 8 & 0xff) * 4) ^
                   *(uint *)(CAST_S_table4 + uVar77 * 4) ^ *(uint *)(CAST_S_table4 + uVar81 * 4) ^
                   uVar86 ^ *(uint *)(CAST_S_table7 + uVar83 * 4);
    local_190[5] = *(uint *)(CAST_S_table4 + uVar82 * 4) ^
                   *(uint *)(CAST_S_table5 + (ulong)(uVar78 >> 0x18) * 4) ^
                   *(uint *)(CAST_S_table7 + (ulong)(uVar71 & 0xff) * 4) ^
                   *(uint *)(CAST_S_table6 + uVar76 * 4) ^ *(uint *)(CAST_S_table5 + uVar83 * 4);
    uVar69 = *(uint *)(CAST_S_table6 + uVar81 * 4);
    local_190[6] = uVar73 ^ *(uint *)(CAST_S_table6 + uVar77 * 4) ^ uVar79 ^ uVar69 ^
                   *(uint *)(CAST_S_table7 + uVar85 * 4);
    uVar79 = *(uint *)(CAST_S_table5 + (ulong)(uVar71 & 0xff) * 4);
    local_190[7] = *(uint *)(CAST_S_table5 + (ulong)(uVar70 >> 0x18) * 4) ^
                   *(uint *)(CAST_S_table7 + (ulong)(uVar70 & 0xff) * 4) ^
                   *(uint *)(CAST_S_table4 + uVar72 * 4) ^ *(uint *)(CAST_S_table7 + uVar88 * 4) ^
                   *(uint *)(CAST_S_table6 + uVar74 * 4);
    uVar78 = *(uint *)(CAST_S_table7 + uVar76 * 4) ^
             uVar69 ^ uVar78 ^ uVar86 ^ uVar79 ^ *(uint *)(CAST_S_table4 + uVar83 * 4);
    uVar83 = (ulong)(uVar78 & 0xff);
    uVar81 = (ulong)(uVar78 >> 8 & 0xff);
    uVar77 = (ulong)(uVar78 >> 0x10 & 0xff);
    uVar89 = (ulong)(uVar78 >> 0x18);
    uVar75 = *(uint *)(CAST_S_table6 + uVar77 * 4) ^
             uVar75 ^ *(uint *)(CAST_S_table7 + uVar74 * 4) ^ *(uint *)(CAST_S_table4 + uVar89 * 4)
             ^ *(uint *)(CAST_S_table7 + uVar83 * 4) ^ *(uint *)(CAST_S_table5 + uVar81 * 4);
    uVar76 = (ulong)(uVar75 >> 8 & 0xff);
    uVar79 = *(uint *)(CAST_S_table4 + (ulong)(uVar75 & 0xff) * 4);
    uVar72 = (ulong)(uVar75 >> 0x18);
    uVar73 = *(uint *)(CAST_S_table5 + uVar76 * 4);
    uVar84 = (ulong)(uVar75 >> 0x10 & 0xff);
    uVar69 = uVar71 ^ *(uint *)(CAST_S_table4 + uVar85 * 4) ^ uVar79 ^
             *(uint *)(CAST_S_table7 + uVar72 * 4) ^ uVar73 ^ *(uint *)(CAST_S_table6 + uVar84 * 4);
    uVar82 = (ulong)(uVar69 >> 0x10 & 0xff);
    uVar74 = (ulong)(uVar69 >> 8 & 0xff);
    uVar87 = *(uint *)(CAST_S_table5 + uVar82 * 4) ^
             uVar70 ^ *(uint *)(CAST_S_table5 + uVar88 * 4) ^
             *(uint *)(CAST_S_table6 + (ulong)(uVar69 & 0xff) * 4) ^
             *(uint *)(CAST_S_table7 + (ulong)(uVar69 >> 0x18) * 4) ^
             *(uint *)(CAST_S_table4 + uVar74 * 4);
    uVar86 = *(uint *)(CAST_S_table4 + uVar77 * 4);
    uVar70 = *(uint *)(CAST_S_table5 + uVar89 * 4);
    local_190[8] = *(uint *)(CAST_S_table4 + uVar82 * 4) ^
                   *(uint *)(CAST_S_table5 + uVar81 * 4) ^ *(uint *)(CAST_S_table4 + uVar83 * 4) ^
                   *(uint *)(CAST_S_table6 + (ulong)(uVar87 >> 0x18) * 4) ^
                   *(uint *)(CAST_S_table7 + (ulong)(uVar87 >> 0x10 & 0xff) * 4);
    local_190[9] = uVar86 ^ uVar70 ^ *(uint *)(CAST_S_table7 + (ulong)(uVar87 & 0xff) * 4) ^
                   *(uint *)(CAST_S_table5 + (ulong)(uVar87 >> 0x18) * 4) ^
                   *(uint *)(CAST_S_table6 + (ulong)(uVar87 >> 8 & 0xff) * 4);
    uVar70 = *(uint *)(CAST_S_table4 + uVar84 * 4);
    local_190[10] =
         uVar79 ^ *(uint *)(CAST_S_table6 + uVar81 * 4) ^ uVar73 ^
         *(uint *)(CAST_S_table6 + (ulong)(uVar69 >> 0x18) * 4) ^
         *(uint *)(CAST_S_table7 + uVar82 * 4);
    uVar79 = *(uint *)(CAST_S_table7 + uVar76 * 4);
    local_190[0xb] =
         uVar70 ^ uVar79 ^ *(uint *)(CAST_S_table5 + uVar72 * 4) ^
         *(uint *)(CAST_S_table7 + (ulong)(uVar69 & 0xff) * 4) ^
         *(uint *)(CAST_S_table6 + uVar74 * 4);
    uVar69 = *(uint *)(CAST_S_table5 + (ulong)(uVar75 & 0xff) * 4) ^
             *(uint *)(CAST_S_table6 + uVar72 * 4) ^ *(uint *)(CAST_S_table6 + uVar89 * 4) ^ uVar70
             ^ uVar79 ^ uVar69;
    uVar74 = (ulong)(uVar69 >> 8 & 0xff);
    uVar71 = *(uint *)(CAST_S_table6 + (ulong)(uVar69 >> 0x10 & 0xff) * 4);
    uVar82 = (ulong)(uVar69 & 0xff);
    uVar70 = uVar71 ^ *(uint *)(CAST_S_table7 + uVar81 * 4) ^ uVar78 ^
                      *(uint *)(CAST_S_table4 + (ulong)(uVar69 >> 0x18) * 4) ^
                      *(uint *)(CAST_S_table7 + uVar82 * 4) ^ *(uint *)(CAST_S_table5 + uVar74 * 4);
    uVar76 = (ulong)(uVar70 & 0xff);
    uVar79 = *(uint *)(CAST_S_table6 + (ulong)(uVar70 >> 0x10 & 0xff) * 4);
    uVar77 = (ulong)(uVar70 >> 8 & 0xff);
    uVar73 = *(uint *)(CAST_S_table7 + (ulong)(uVar70 >> 0x18) * 4);
    uVar86 = *(uint *)(CAST_S_table4 + uVar76 * 4) ^ uVar75 ^ uVar86 ^ uVar73 ^
             *(uint *)(CAST_S_table5 + uVar77 * 4) ^ uVar79;
    local_178 = (ulong)(uVar86 >> 8 & 0xff);
    local_188 = (ulong)uVar86;
    uVar75 = *(uint *)(CAST_S_table4 + local_178 * 4);
    local_168 = (ulong)(uVar86 >> 0x10 & 0xff);
    uVar81 = (ulong)(uVar86 >> 0x18);
    uVar86 = *(uint *)(CAST_S_table5 + (local_188 & 0xff) * 4);
    uVar78 = *(uint *)(CAST_S_table5 + local_168 * 4) ^
             uVar87 ^ *(uint *)(CAST_S_table5 + uVar83 * 4) ^
             *(uint *)(CAST_S_table6 + (local_188 & 0xff) * 4) ^
             *(uint *)(CAST_S_table7 + uVar81 * 4) ^ uVar75;
    local_130 = (ulong)(uVar78 >> 0x18);
    local_150 = (ulong)(uVar78 >> 0x10);
    uVar87 = *(uint *)(CAST_S_table5 + uVar76 * 4);
    uVar72 = (ulong)(uVar78 >> 8 & 0xff);
    local_190[0xc] =
         *(uint *)(CAST_S_table6 + uVar76 * 4) ^ *(uint *)(CAST_S_table4 + uVar82 * 4) ^
         *(uint *)(CAST_S_table7 + uVar77 * 4) ^ *(uint *)(CAST_S_table4 + uVar81 * 4) ^
         *(uint *)(CAST_S_table5 + local_168 * 4);
    local_150 = local_150 & 0xff;
    local_190[0xd] = uVar73 ^ uVar87 ^ uVar79 ^ uVar86 ^ uVar75;
    uVar79 = *(uint *)(CAST_S_table6 + uVar81 * 4);
    local_190[0xe] =
         *(uint *)(CAST_S_table6 + uVar82 * 4) ^ *(uint *)(CAST_S_table7 + uVar74 * 4) ^ uVar79 ^
         *(uint *)(CAST_S_table4 + local_130 * 4) ^ *(uint *)(CAST_S_table5 + local_150 * 4);
    uVar73 = *(uint *)(CAST_S_table5 + (ulong)(uVar78 & 0xff) * 4);
    local_190[0xf] =
         uVar71 ^ *(uint *)(CAST_S_table7 + (ulong)(uVar69 >> 0x18) * 4) ^ uVar73 ^
         *(uint *)(CAST_S_table4 + uVar72 * 4) ^ *(uint *)(CAST_S_table7 + local_150 * 4);
    bVar90 = local_190 == &local_c8;
    local_190 = &local_88;
  } while (bVar90);
  auVar98._0_4_ = local_88 + __LC0;
  auVar98._4_4_ = iStack_84 + _UNK_00102b64;
  auVar98._8_4_ = iStack_80 + _UNK_00102b68;
  auVar98._12_4_ = iStack_7c + _UNK_00102b6c;
  auVar98 = auVar98 & __LC1;
  key->data[4] = uStack_c0;
  key->data[5] = auVar98._8_4_;
  key->data[6] = uStack_bc;
  key->data[7] = auVar98._12_4_;
  key->data[0] = local_c8;
  key->data[1] = auVar98._0_4_;
  key->data[2] = uStack_c4;
  key->data[3] = auVar98._4_4_;
  auVar99._0_4_ = local_78 + iVar68;
  auVar99._4_4_ = iStack_74 + iVar80;
  auVar99._8_4_ = iStack_70 + iVar1;
  auVar99._12_4_ = iStack_6c + iVar67;
  auVar99 = auVar99 & auVar2;
  key->data[0xc] = uStack_b0;
  key->data[0xd] = auVar99._8_4_;
  key->data[0xe] = uStack_ac;
  key->data[0xf] = auVar99._12_4_;
  auVar100._0_4_ = local_68 + iVar68;
  auVar100._4_4_ = iStack_64 + iVar80;
  auVar100._8_4_ = iStack_60 + iVar1;
  auVar100._12_4_ = iStack_5c + iVar67;
  key->data[8] = local_b8;
  key->data[9] = auVar99._0_4_;
  key->data[10] = uStack_b4;
  key->data[0xb] = auVar99._4_4_;
  auVar92._0_4_ = iVar68 + local_58;
  auVar92._4_4_ = iVar80 + iStack_54;
  auVar92._8_4_ = iVar1 + iStack_50;
  auVar92._12_4_ = iVar67 + iStack_4c;
  auVar100 = auVar100 & auVar2;
  auVar92 = auVar92 & auVar2;
  key->data[0x14] = uStack_a0;
  key->data[0x15] = auVar100._8_4_;
  key->data[0x16] = uStack_9c;
  key->data[0x17] = auVar100._12_4_;
  *(ulong *)(key->data + 0x10) = CONCAT44(auVar100._0_4_,local_a8);
  key->data[0x14] = uStack_a4;
  key->data[0x15] = auVar100._4_4_;
  key->data[0x1c] = uStack_90;
  key->data[0x1d] = auVar92._8_4_;
  key->data[0x1e] = uStack_8c;
  key->data[0x1f] = auVar92._12_4_;
  *(ulong *)(key->data + 0x18) = CONCAT44(auVar92._0_4_,local_98);
  key->data[0x1c] = uStack_94;
  key->data[0x1d] = auVar92._4_4_;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


