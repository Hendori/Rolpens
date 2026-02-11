
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CAST_set_key(CAST_KEY *key,int len,uchar *data)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  uint uVar16;
  uint uVar17;
  uint uVar18;
  long lVar19;
  ulong uVar20;
  int *piVar21;
  uint uVar22;
  ulong uVar23;
  uint uVar24;
  ulong uVar25;
  ulong uVar26;
  uint uVar27;
  uint uVar28;
  ulong uVar29;
  ulong uVar30;
  int iVar31;
  ulong uVar32;
  ulong uVar33;
  ulong uVar34;
  uint uVar35;
  uint uVar36;
  ulong uVar37;
  ulong uVar38;
  long in_FS_OFFSET;
  bool bVar39;
  undefined1 auVar40 [16];
  int *local_190;
  ulong local_188;
  ulong local_178;
  ulong local_168;
  ulong local_150;
  ulong local_130;
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  int local_c8 [16];
  int local_88 [18];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar19 = 0;
  local_108 = (undefined1  [16])0x0;
  iVar31 = 0x10;
  if (len < 0x11) {
    iVar31 = len;
  }
  local_f8 = (undefined1  [16])0x0;
  local_e8 = (undefined1  [16])0x0;
  local_d8 = (undefined1  [16])0x0;
  if (0 < len) {
    do {
      *(uint *)(local_108 + lVar19 * 4) = (uint)data[lVar19];
      lVar19 = lVar19 + 1;
    } while ((int)lVar19 < iVar31);
  }
  key->short_key = (uint)(len < 0xb);
  auVar15 = __LC1;
  auVar14 = __LC0;
  local_130 = (ulong)(uint)local_d8._0_4_;
  uVar20 = (ulong)(uint)local_d8._8_4_;
  uVar16 = local_108._0_4_ << 0x18 | local_108._4_4_ << 0x10 | local_108._12_4_ |
           local_108._8_4_ << 8;
  uVar17 = local_f8._0_4_ << 0x18 | local_f8._4_4_ << 0x10 | local_f8._12_4_ | local_f8._8_4_ << 8;
  uVar28 = *(uint *)(CAST_S_table6 + (ulong)(uint)local_e8._0_4_ * 4);
  local_150 = (ulong)(uint)local_d8._4_4_;
  local_188 = (ulong)(uint)(local_e8._0_4_ << 0x18 | local_e8._4_4_ << 0x10 | local_e8._12_4_ |
                           local_e8._8_4_ << 8);
  uVar27 = local_d8._0_4_ << 0x18 | local_d8._4_4_ << 0x10 | local_d8._12_4_ | local_d8._8_4_ << 8;
  uVar22 = *(uint *)(CAST_S_table5 + (ulong)(uint)local_d8._12_4_ * 4);
  uVar35 = *(uint *)(CAST_S_table5 + (ulong)(uint)local_e8._12_4_ * 4);
  piVar21 = local_c8;
  local_178 = (ulong)(uint)local_e8._8_4_;
  local_168 = (ulong)(uint)local_e8._4_4_;
  local_190 = piVar21;
  do {
    uVar28 = *(uint *)(CAST_S_table4 + local_150 * 4) ^ *(uint *)(CAST_S_table6 + local_130 * 4) ^
             *(uint *)(CAST_S_table7 + uVar20 * 4) ^ uVar16 ^ uVar22 ^ uVar28;
    uVar33 = (ulong)(uVar28 & 0xff);
    uVar20 = (ulong)(uVar28 >> 0x18);
    uVar32 = (ulong)(uVar28 >> 0x10 & 0xff);
    uVar22 = *(uint *)(CAST_S_table6 + uVar32 * 4);
    uVar23 = (ulong)(uVar28 >> 8 & 0xff);
    local_188._0_4_ =
         *(uint *)(CAST_S_table4 + uVar20 * 4) ^ *(uint *)(CAST_S_table7 + uVar33 * 4) ^
         *(uint *)(CAST_S_table7 + local_178 * 4) ^ *(uint *)(CAST_S_table5 + uVar23 * 4) ^ uVar22 ^
         (uint)local_188;
    local_178 = (ulong)(uint)local_188;
    uVar25 = (ulong)((uint)local_188 >> 8 & 0xff);
    local_178 = local_178 & 0xff;
    uVar26 = (ulong)((uint)local_188 >> 0x10 & 0xff);
    uVar27 = *(uint *)(CAST_S_table7 + (ulong)((uint)local_188 >> 0x18) * 4) ^
             *(uint *)(CAST_S_table4 + local_178 * 4) ^ *(uint *)(CAST_S_table4 + local_168 * 4) ^
             *(uint *)(CAST_S_table5 + uVar25 * 4) ^ *(uint *)(CAST_S_table6 + uVar26 * 4) ^ uVar27;
    uVar29 = (ulong)(uVar27 >> 0x10 & 0xff);
    uVar35 = uVar35 ^ *(uint *)(CAST_S_table6 + (ulong)(uVar27 & 0xff) * 4) ^
                      *(uint *)(CAST_S_table7 + (ulong)(uVar27 >> 0x18) * 4) ^
                      *(uint *)(CAST_S_table4 + (ulong)(uVar27 >> 8 & 0xff) * 4) ^
                      *(uint *)(CAST_S_table5 + uVar29 * 4) ^ uVar17;
    uVar16 = *(uint *)(CAST_S_table7 + uVar25 * 4);
    uVar17 = *(uint *)(CAST_S_table7 + uVar23 * 4);
    uVar18 = *(uint *)(CAST_S_table5 + local_178 * 4);
    uVar24 = *(uint *)(CAST_S_table6 + uVar33 * 4);
    uVar36 = *(uint *)(CAST_S_table6 + uVar29 * 4);
    uVar2 = *(uint *)(CAST_S_table4 + (ulong)(uVar35 >> 0x18) * 4);
    uVar3 = *(uint *)(CAST_S_table5 + (ulong)(uVar35 >> 0x10 & 0xff) * 4);
    uVar4 = *(uint *)(CAST_S_table7 + uVar20 * 4);
    uVar5 = *(uint *)(CAST_S_table5 + (ulong)(uVar35 & 0xff) * 4);
    uVar6 = *(uint *)(CAST_S_table7 + (ulong)(uVar35 >> 0x18) * 4);
    uVar7 = *(uint *)(CAST_S_table4 + (ulong)(uVar35 >> 8 & 0xff) * 4);
    uVar8 = *(uint *)(CAST_S_table6 + (ulong)((uint)local_188 >> 0x18) * 4);
    uVar9 = *(uint *)(CAST_S_table6 + uVar20 * 4);
    uVar10 = *(uint *)(CAST_S_table4 + uVar26 * 4);
    *(ulong *)local_190 =
         CONCAT44(*(uint *)(CAST_S_table5 + uVar25 * 4) ^ *(uint *)(CAST_S_table6 + uVar26 * 4) ^
                  *(uint *)(CAST_S_table7 + (ulong)((uint)local_188 >> 0x18) * 4) ^
                  *(uint *)(CAST_S_table5 + (ulong)(uVar27 & 0xff) * 4) ^
                  *(uint *)(CAST_S_table4 + (ulong)(uVar27 >> 8 & 0xff) * 4),
                  *(uint *)(CAST_S_table6 + local_178 * 4) ^ *(uint *)(CAST_S_table4 + uVar23 * 4) ^
                  uVar16 ^ *(uint *)(CAST_S_table4 + (ulong)(uVar27 >> 0x18) * 4) ^
                  *(uint *)(CAST_S_table5 + uVar29 * 4));
    *(ulong *)(local_190 + 2) =
         CONCAT44(uVar22 ^ uVar4 ^ uVar5 ^ uVar6 ^ uVar7,uVar2 ^ uVar36 ^ uVar17 ^ uVar24 ^ uVar3);
    uVar27 = uVar18 ^ uVar8 ^ uVar9 ^ uVar16 ^ uVar10 ^ uVar27;
    uVar30 = (ulong)(uVar27 >> 0x10 & 0xff);
    uVar26 = (ulong)(uVar27 & 0xff);
    uVar17 = uVar28 ^ uVar17 ^ *(uint *)(CAST_S_table4 + (ulong)(uVar27 >> 0x18) * 4) ^
             *(uint *)(CAST_S_table7 + uVar26 * 4) ^
             *(uint *)(CAST_S_table5 + (ulong)(uVar27 >> 8 & 0xff) * 4) ^
             *(uint *)(CAST_S_table6 + uVar30 * 4);
    uVar20 = (ulong)(uVar17 >> 0x10 & 0xff);
    uVar28 = *(uint *)(CAST_S_table5 + (ulong)(uVar17 >> 8 & 0xff) * 4);
    uVar22 = *(uint *)(CAST_S_table4 + (ulong)(uVar17 & 0xff) * 4);
    uVar24 = (uint)local_188 ^ *(uint *)(CAST_S_table4 + uVar32 * 4) ^ uVar22 ^
             *(uint *)(CAST_S_table7 + (ulong)(uVar17 >> 0x18) * 4) ^ uVar28 ^
             *(uint *)(CAST_S_table6 + uVar20 * 4);
    uVar34 = (ulong)(uVar24 >> 0x10 & 0xff);
    uVar29 = (ulong)(uVar24 >> 0x18);
    uVar37 = (ulong)(uVar24 & 0xff);
    uVar23 = (ulong)(uVar24 >> 8 & 0xff);
    uVar18 = uVar35 ^ *(uint *)(CAST_S_table5 + uVar33 * 4) ^ *(uint *)(CAST_S_table6 + uVar37 * 4)
             ^ *(uint *)(CAST_S_table7 + uVar29 * 4) ^ *(uint *)(CAST_S_table4 + uVar23 * 4) ^
             *(uint *)(CAST_S_table5 + uVar34 * 4);
    uVar32 = (ulong)(uVar18 >> 0x10 & 0xff);
    uVar35 = *(uint *)(CAST_S_table6 + (ulong)(uVar18 >> 0x18) * 4);
    uVar25 = (ulong)(uVar18 >> 8 & 0xff);
    local_190[4] = *(uint *)(CAST_S_table5 + (ulong)(uVar27 >> 8 & 0xff) * 4) ^
                   *(uint *)(CAST_S_table4 + uVar26 * 4) ^ *(uint *)(CAST_S_table4 + uVar29 * 4) ^
                   uVar35 ^ *(uint *)(CAST_S_table7 + uVar32 * 4);
    local_190[5] = *(uint *)(CAST_S_table4 + uVar30 * 4) ^
                   *(uint *)(CAST_S_table5 + (ulong)(uVar27 >> 0x18) * 4) ^
                   *(uint *)(CAST_S_table7 + (ulong)(uVar18 & 0xff) * 4) ^
                   *(uint *)(CAST_S_table6 + uVar25 * 4) ^ *(uint *)(CAST_S_table5 + uVar32 * 4);
    uVar16 = *(uint *)(CAST_S_table6 + uVar29 * 4);
    local_190[6] = uVar22 ^ *(uint *)(CAST_S_table6 + uVar26 * 4) ^ uVar28 ^ uVar16 ^
                   *(uint *)(CAST_S_table7 + uVar34 * 4);
    uVar28 = *(uint *)(CAST_S_table5 + (ulong)(uVar18 & 0xff) * 4);
    local_190[7] = *(uint *)(CAST_S_table5 + (ulong)(uVar17 >> 0x18) * 4) ^
                   *(uint *)(CAST_S_table7 + (ulong)(uVar17 & 0xff) * 4) ^
                   *(uint *)(CAST_S_table4 + uVar20 * 4) ^ *(uint *)(CAST_S_table7 + uVar37 * 4) ^
                   *(uint *)(CAST_S_table6 + uVar23 * 4);
    uVar27 = *(uint *)(CAST_S_table7 + uVar25 * 4) ^
             uVar16 ^ uVar27 ^ uVar35 ^ uVar28 ^ *(uint *)(CAST_S_table4 + uVar32 * 4);
    uVar32 = (ulong)(uVar27 & 0xff);
    uVar29 = (ulong)(uVar27 >> 8 & 0xff);
    uVar26 = (ulong)(uVar27 >> 0x10 & 0xff);
    uVar38 = (ulong)(uVar27 >> 0x18);
    uVar24 = *(uint *)(CAST_S_table6 + uVar26 * 4) ^
             uVar24 ^ *(uint *)(CAST_S_table7 + uVar23 * 4) ^ *(uint *)(CAST_S_table4 + uVar38 * 4)
             ^ *(uint *)(CAST_S_table7 + uVar32 * 4) ^ *(uint *)(CAST_S_table5 + uVar29 * 4);
    uVar25 = (ulong)(uVar24 >> 8 & 0xff);
    uVar28 = *(uint *)(CAST_S_table4 + (ulong)(uVar24 & 0xff) * 4);
    uVar20 = (ulong)(uVar24 >> 0x18);
    uVar22 = *(uint *)(CAST_S_table5 + uVar25 * 4);
    uVar33 = (ulong)(uVar24 >> 0x10 & 0xff);
    uVar16 = uVar18 ^ *(uint *)(CAST_S_table4 + uVar34 * 4) ^ uVar28 ^
             *(uint *)(CAST_S_table7 + uVar20 * 4) ^ uVar22 ^ *(uint *)(CAST_S_table6 + uVar33 * 4);
    uVar30 = (ulong)(uVar16 >> 0x10 & 0xff);
    uVar23 = (ulong)(uVar16 >> 8 & 0xff);
    uVar36 = *(uint *)(CAST_S_table5 + uVar30 * 4) ^
             uVar17 ^ *(uint *)(CAST_S_table5 + uVar37 * 4) ^
             *(uint *)(CAST_S_table6 + (ulong)(uVar16 & 0xff) * 4) ^
             *(uint *)(CAST_S_table7 + (ulong)(uVar16 >> 0x18) * 4) ^
             *(uint *)(CAST_S_table4 + uVar23 * 4);
    uVar35 = *(uint *)(CAST_S_table4 + uVar26 * 4);
    uVar17 = *(uint *)(CAST_S_table5 + uVar38 * 4);
    local_190[8] = *(uint *)(CAST_S_table4 + uVar30 * 4) ^
                   *(uint *)(CAST_S_table5 + uVar29 * 4) ^ *(uint *)(CAST_S_table4 + uVar32 * 4) ^
                   *(uint *)(CAST_S_table6 + (ulong)(uVar36 >> 0x18) * 4) ^
                   *(uint *)(CAST_S_table7 + (ulong)(uVar36 >> 0x10 & 0xff) * 4);
    local_190[9] = uVar35 ^ uVar17 ^ *(uint *)(CAST_S_table7 + (ulong)(uVar36 & 0xff) * 4) ^
                   *(uint *)(CAST_S_table5 + (ulong)(uVar36 >> 0x18) * 4) ^
                   *(uint *)(CAST_S_table6 + (ulong)(uVar36 >> 8 & 0xff) * 4);
    uVar17 = *(uint *)(CAST_S_table4 + uVar33 * 4);
    local_190[10] =
         uVar28 ^ *(uint *)(CAST_S_table6 + uVar29 * 4) ^ uVar22 ^
         *(uint *)(CAST_S_table6 + (ulong)(uVar16 >> 0x18) * 4) ^
         *(uint *)(CAST_S_table7 + uVar30 * 4);
    uVar28 = *(uint *)(CAST_S_table7 + uVar25 * 4);
    local_190[0xb] =
         uVar17 ^ uVar28 ^ *(uint *)(CAST_S_table5 + uVar20 * 4) ^
         *(uint *)(CAST_S_table7 + (ulong)(uVar16 & 0xff) * 4) ^
         *(uint *)(CAST_S_table6 + uVar23 * 4);
    uVar16 = *(uint *)(CAST_S_table5 + (ulong)(uVar24 & 0xff) * 4) ^
             *(uint *)(CAST_S_table6 + uVar20 * 4) ^ *(uint *)(CAST_S_table6 + uVar38 * 4) ^ uVar17
             ^ uVar28 ^ uVar16;
    uVar23 = (ulong)(uVar16 >> 8 & 0xff);
    uVar18 = *(uint *)(CAST_S_table6 + (ulong)(uVar16 >> 0x10 & 0xff) * 4);
    uVar30 = (ulong)(uVar16 & 0xff);
    uVar17 = uVar18 ^ *(uint *)(CAST_S_table7 + uVar29 * 4) ^ uVar27 ^
                      *(uint *)(CAST_S_table4 + (ulong)(uVar16 >> 0x18) * 4) ^
                      *(uint *)(CAST_S_table7 + uVar30 * 4) ^ *(uint *)(CAST_S_table5 + uVar23 * 4);
    uVar25 = (ulong)(uVar17 & 0xff);
    uVar28 = *(uint *)(CAST_S_table6 + (ulong)(uVar17 >> 0x10 & 0xff) * 4);
    uVar26 = (ulong)(uVar17 >> 8 & 0xff);
    uVar22 = *(uint *)(CAST_S_table7 + (ulong)(uVar17 >> 0x18) * 4);
    uVar35 = *(uint *)(CAST_S_table4 + uVar25 * 4) ^ uVar24 ^ uVar35 ^ uVar22 ^
             *(uint *)(CAST_S_table5 + uVar26 * 4) ^ uVar28;
    local_178 = (ulong)(uVar35 >> 8 & 0xff);
    local_188 = (ulong)uVar35;
    uVar24 = *(uint *)(CAST_S_table4 + local_178 * 4);
    local_168 = (ulong)(uVar35 >> 0x10 & 0xff);
    uVar29 = (ulong)(uVar35 >> 0x18);
    uVar35 = *(uint *)(CAST_S_table5 + (local_188 & 0xff) * 4);
    uVar27 = *(uint *)(CAST_S_table5 + local_168 * 4) ^
             uVar36 ^ *(uint *)(CAST_S_table5 + uVar32 * 4) ^
             *(uint *)(CAST_S_table6 + (local_188 & 0xff) * 4) ^
             *(uint *)(CAST_S_table7 + uVar29 * 4) ^ uVar24;
    local_130 = (ulong)(uVar27 >> 0x18);
    local_150 = (ulong)(uVar27 >> 0x10);
    uVar36 = *(uint *)(CAST_S_table5 + uVar25 * 4);
    uVar20 = (ulong)(uVar27 >> 8 & 0xff);
    local_190[0xc] =
         *(uint *)(CAST_S_table6 + uVar25 * 4) ^ *(uint *)(CAST_S_table4 + uVar30 * 4) ^
         *(uint *)(CAST_S_table7 + uVar26 * 4) ^ *(uint *)(CAST_S_table4 + uVar29 * 4) ^
         *(uint *)(CAST_S_table5 + local_168 * 4);
    local_150 = local_150 & 0xff;
    local_190[0xd] = uVar22 ^ uVar36 ^ uVar28 ^ uVar35 ^ uVar24;
    uVar28 = *(uint *)(CAST_S_table6 + uVar29 * 4);
    local_190[0xe] =
         *(uint *)(CAST_S_table6 + uVar30 * 4) ^ *(uint *)(CAST_S_table7 + uVar23 * 4) ^ uVar28 ^
         *(uint *)(CAST_S_table4 + local_130 * 4) ^ *(uint *)(CAST_S_table5 + local_150 * 4);
    uVar22 = *(uint *)(CAST_S_table5 + (ulong)(uVar27 & 0xff) * 4);
    local_190[0xf] =
         uVar18 ^ *(uint *)(CAST_S_table7 + (ulong)(uVar16 >> 0x18) * 4) ^ uVar22 ^
         *(uint *)(CAST_S_table4 + uVar20 * 4) ^ *(uint *)(CAST_S_table7 + local_150 * 4);
    bVar39 = local_190 == piVar21;
    local_190 = local_88;
  } while (bVar39);
  do {
    piVar1 = piVar21 + 0x10;
    piVar11 = piVar21 + 0x11;
    piVar12 = piVar21 + 0x12;
    piVar13 = piVar21 + 0x13;
    iVar31 = *piVar21;
    uVar28 = piVar21[1];
    uVar22 = piVar21[2];
    uVar35 = piVar21[3];
    piVar21 = piVar21 + 4;
    auVar40._0_4_ = *piVar1 + auVar14._0_4_;
    auVar40._4_4_ = *piVar11 + auVar14._4_4_;
    auVar40._8_4_ = *piVar12 + auVar14._8_4_;
    auVar40._12_4_ = *piVar13 + auVar14._12_4_;
    auVar40 = auVar40 & auVar15;
    *(ulong *)key->data = CONCAT44(auVar40._0_4_,iVar31);
    key->data[4] = uVar28;
    key->data[5] = auVar40._4_4_;
    key->data[4] = uVar22;
    key->data[5] = auVar40._8_4_;
    key->data[6] = uVar35;
    key->data[7] = auVar40._12_4_;
    key = (CAST_KEY *)(key->data + 8);
  } while (local_88 != piVar21);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


