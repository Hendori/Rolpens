
void sha256_update(SHA256_CTX *param_1,void *param_2,ulong param_3)

{
  uint uVar1;
  void *data;
  uint uVar2;
  ulong len;
  undefined8 uVar4;
  uint uVar3;
  int iVar5;
  
  if ((ulong)param_1->num == 0) {
    uVar2 = (uint)param_3;
    param_3 = param_3 & 0xffffffffffffffc0;
  }
  else {
    len = 0x40 - (ulong)param_1->num;
    if (param_3 < len) {
      len = param_3;
    }
    SHA256_Update(param_1,param_2,len);
    uVar2 = (uint)(param_3 - len);
    param_3 = param_3 - len & 0xffffffffffffffc0;
    param_2 = (void *)((long)param_2 + len);
  }
  data = param_2;
  if (param_3 != 0) {
    data = (void *)((long)param_2 + param_3);
    sha256_block_data_order(param_1,param_2,param_3 >> 6);
    uVar1 = (int)param_3 * 8;
    uVar4._0_4_ = param_1->Nl;
    uVar4._4_4_ = param_1->Nh;
    uVar3 = (int)uVar4 + uVar1;
    iVar5 = (int)((ulong)uVar4 >> 0x20) + (int)(param_3 >> 0x1d);
    uVar4 = CONCAT44(iVar5,uVar3);
    param_1->Nl = (int)uVar4;
    param_1->Nh = (int)((ulong)uVar4 >> 0x20);
    if (uVar3 < uVar1) {
      param_1->Nh = iVar5 + 1;
    }
  }
  if ((ulong)(uVar2 & 0x3f) != 0) {
    SHA256_Update(param_1,data,(ulong)(uVar2 & 0x3f));
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 aesni_cbc_hmac_sha256_tls1_multiblock_aad(long param_1,long param_2)

{
  long lVar1;
  ushort uVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  byte bVar7;
  
  lVar1 = *(long *)(param_2 + 8);
  uVar2 = *(ushort *)(lVar1 + 0xb) << 8 | *(ushort *)(lVar1 + 0xb) >> 8;
  uVar3 = (uint)uVar2;
  uVar4 = 0xffffffff;
  if (((*(byte *)(param_1 + 0x6c) & 2) != 0) &&
     (0x301 < (ushort)(*(ushort *)(lVar1 + 9) << 8 | *(ushort *)(lVar1 + 9) >> 8))) {
    if (uVar2 == 0) {
      if (7 < *(uint *)(param_2 + 0x18) - 4) {
        return 0xffffffff;
      }
      uVar5 = *(uint *)(param_2 + 0x18) >> 2;
      uVar3 = *(uint *)(param_2 + 0x10);
      bVar7 = (char)uVar5 + 1;
      iVar6 = uVar5 << 2;
    }
    else {
      if (uVar2 < 0x1000) {
        return 0;
      }
      if (uVar2 < 0x2000) {
        iVar6 = 4;
        bVar7 = 2;
      }
      else {
        iVar6 = (-(uint)((_memcpy & 0x20) == 0) & 0xfffffffc) + 8;
        bVar7 = 3 - ((_memcpy & 0x20) == 0);
      }
    }
    *(undefined8 *)(param_1 + 0x2d8) = *(undefined8 *)(param_1 + 0x1f8);
    *(undefined8 *)(param_1 + 0x2e0) = *(undefined8 *)(param_1 + 0x200);
    *(undefined8 *)(param_1 + 0x2e8) = *(undefined8 *)(param_1 + 0x208);
    *(undefined8 *)(param_1 + 0x2f0) = *(undefined8 *)(param_1 + 0x210);
    *(undefined8 *)(param_1 + 0x2f8) = *(undefined8 *)(param_1 + 0x218);
    *(undefined8 *)(param_1 + 0x300) = *(undefined8 *)(param_1 + 0x220);
    *(undefined8 *)(param_1 + 0x308) = *(undefined8 *)(param_1 + 0x228);
    *(undefined8 *)(param_1 + 0x310) = *(undefined8 *)(param_1 + 0x230);
    *(undefined8 *)(param_1 + 0x318) = *(undefined8 *)(param_1 + 0x238);
    *(undefined8 *)(param_1 + 800) = *(undefined8 *)(param_1 + 0x240);
    *(undefined8 *)(param_1 + 0x328) = *(undefined8 *)(param_1 + 0x248);
    *(undefined8 *)(param_1 + 0x330) = *(undefined8 *)(param_1 + 0x250);
    *(undefined8 *)(param_1 + 0x338) = *(undefined8 *)(param_1 + 600);
    *(undefined8 *)(param_1 + 0x340) = *(undefined8 *)(param_1 + 0x260);
    sha256_update(param_1 + 0x2d8,lVar1,0xd);
    uVar5 = uVar3 >> (bVar7 & 0x1f);
    uVar3 = (uVar3 + uVar5) - (uVar5 << (bVar7 & 0x1f));
    if ((uVar5 < uVar3) && ((uVar3 + 0x16 & 0x3f) < iVar6 - 1U)) {
      uVar5 = uVar5 + 1;
      uVar3 = (uVar3 - iVar6) + 1;
    }
    *(int *)(param_2 + 0x18) = iVar6;
    *(int *)(param_1 + 0x1d8) = iVar6;
    iVar6 = (uVar5 + 0x30 & 0xfffffff0) + 0x15;
    *(uint *)(param_1 + 0x1dc) =
         ((uVar3 + 0x30 & 0xfffffff0) + 0x15 + (iVar6 << (bVar7 & 0x1f))) - iVar6;
    uVar4 = 1;
  }
  return uVar4;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int aesni_cbc_hmac_sha256_cipher
              (long param_1,void *param_2,void *param_3,ulong param_4,long param_5,
              undefined8 param_6)

{
  SHA256_CTX *c;
  uchar *md;
  long lVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  uint uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  long lVar20;
  uint uVar21;
  void *pvVar22;
  uint uVar23;
  uint uVar24;
  byte *pbVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  long lVar32;
  long in_FS_OFFSET;
  uint uVar33;
  int iVar36;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined8 uStack_100;
  SHA256_CTX *local_f0;
  void *local_e8;
  long local_e0;
  void *local_d8;
  ulong local_d0;
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  long local_40;
  
  uVar31 = *(ulong *)(param_1 + 0x1b8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar36 = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0xffffffffffffffff;
  uVar30 = (ulong)((uint)param_4 & 0xf);
  if ((param_4 & 0xf) != 0) goto LAB_001004bb;
  if ((*(byte *)(param_1 + 0x6c) & 2) == 0) {
    aesni_cbc_encrypt(param_3,param_2,param_4,param_1 + 0xc0,param_1 + 0x20,0);
    if (uVar31 != 0xffffffffffffffff) {
      iVar36 = 0;
      uVar16 = (ulong)(0x301 < CONCAT11(*(undefined1 *)(param_1 + 0x1bc + uVar31),
                                        *(undefined1 *)(param_1 + 0x1bd + uVar31)));
      lVar14 = uVar16 * 0x10;
      if (param_4 < lVar14 + 0x21U) goto LAB_001004bb;
      uVar5 = *(undefined8 *)(param_1 + 0x1f8);
      uVar6 = *(undefined8 *)(param_1 + 0x200);
      local_d8 = (void *)((long)param_2 + lVar14);
      lVar14 = param_4 + uVar16 * -0x10;
      uVar7 = *(undefined8 *)(param_1 + 0x208);
      uVar8 = *(undefined8 *)(param_1 + 0x210);
      bVar4 = *(byte *)((long)local_d8 + lVar14 + -1);
      uVar13 = (int)lVar14 - 0x21;
      uVar9 = *(undefined8 *)(param_1 + 0x218);
      uVar10 = *(undefined8 *)(param_1 + 0x220);
      uVar23 = 0xff - uVar13 >> 0x18 | uVar13 & 0xff;
      uVar33 = uVar23 ^ (uVar23 - bVar4 ^ (uint)bVar4 | uVar23 ^ bVar4);
      uVar13 = (int)uVar33 >> 0x1f;
      uVar13 = ~uVar13 & (uint)bVar4 | uVar13 & uVar23;
      lVar32 = lVar14 - (ulong)(uVar13 + 0x21);
      *(char *)(param_1 + 0x1bf + uVar31) = (char)lVar32;
      *(char *)(param_1 + 0x1be + uVar31) = (char)((ulong)lVar32 >> 8);
      c = (SHA256_CTX *)(param_1 + 0x2d8);
      *(undefined8 *)(param_1 + 0x2d8) = uVar5;
      *(undefined8 *)(param_1 + 0x2e0) = uVar6;
      *(undefined8 *)(param_1 + 0x2e8) = uVar7;
      *(undefined8 *)(param_1 + 0x2f0) = uVar8;
      *(undefined8 *)(param_1 + 0x2f8) = uVar9;
      *(undefined8 *)(param_1 + 0x300) = uVar10;
      *(undefined8 *)(param_1 + 0x308) = *(undefined8 *)(param_1 + 0x228);
      *(undefined8 *)(param_1 + 0x310) = *(undefined8 *)(param_1 + 0x230);
      *(undefined8 *)(param_1 + 0x318) = *(undefined8 *)(param_1 + 0x238);
      *(undefined8 *)(param_1 + 800) = *(undefined8 *)(param_1 + 0x240);
      *(undefined8 *)(param_1 + 0x328) = *(undefined8 *)(param_1 + 0x248);
      *(undefined8 *)(param_1 + 0x330) = *(undefined8 *)(param_1 + 0x250);
      *(undefined8 *)(param_1 + 0x338) = *(undefined8 *)(param_1 + 600);
      *(undefined8 *)(param_1 + 0x340) = *(undefined8 *)(param_1 + 0x260);
      sha256_update(c,param_1 + 0x1c0,uVar31);
      uVar31 = lVar14 - 0x20;
      if (0x13f < uVar31) {
        lVar14 = (lVar14 - 0x160U & 0xffffffffffffffc0) + (ulong)(0x40 - *(int *)(param_1 + 0x340));
        lVar32 = lVar32 - lVar14;
        sha256_update(c,local_d8,lVar14);
        local_d8 = (void *)((long)local_d8 + lVar14);
        uVar31 = uVar31 - lVar14;
      }
      lVar14 = param_1 + 0x300;
      uVar17 = *(uint *)(param_1 + 0x340);
      local_80 = (undefined1  [16])0x0;
      uVar26 = *(int *)(param_1 + 0x2f8) + (int)lVar32 * 8;
      local_70 = (undefined1  [16])0x0;
      uVar26 = uVar26 >> 0x18 | (uVar26 & 0xff0000) >> 8 | (uVar26 & 0xff00) << 8 |
               uVar26 * 0x1000000;
      if (uVar31 == 0) {
        uVar16 = 0;
      }
      else {
        lVar20 = -lVar32;
        do {
          uVar16 = (ulong)uVar17;
          uVar17 = uVar17 + 1;
          bVar4 = (byte)((ulong)lVar20 >> 0x38);
          *(byte *)(param_1 + 0x300 + uVar16) =
               ~((byte)((ulong)-lVar20 >> 0x38) | bVar4) & 0x80 |
               *(byte *)((long)local_d8 + lVar20 + lVar32) & bVar4;
          if (uVar17 == 0x40) {
            uVar17 = (uint)((ulong)(7 - lVar20) >> 0x20);
            *(uint *)(param_1 + 0x33c) = *(uint *)(param_1 + 0x33c) | uVar26 & (int)uVar17 >> 0x1f;
            sha256_block_data_order(c,lVar14,1);
            iVar36 = (int)((uint)((ulong)(lVar20 + -0x48) >> 0x20) & uVar17) >> 0x1f;
            uVar17 = 0;
            auVar34._4_4_ = iVar36;
            auVar34._0_4_ = iVar36;
            auVar34._8_4_ = iVar36;
            auVar34._12_4_ = iVar36;
            local_70 = *(undefined1 (*) [16])(param_1 + 0x2e8) & auVar34 | local_70;
            local_80 = auVar34 & *(undefined1 (*) [16])(param_1 + 0x2d8) | local_80;
          }
          lVar20 = lVar20 + 1;
          uVar16 = uVar31;
        } while (lVar20 != uVar31 - lVar32);
      }
      uVar29 = (ulong)uVar17;
      if (uVar17 < 0x40) {
        puVar3 = (undefined8 *)(param_1 + 0x300 + uVar29);
        uVar15 = 0x40 - uVar29;
        uVar18 = (uint)uVar15;
        if (uVar18 < 8) {
          if ((uVar15 & 4) == 0) {
            if ((uVar18 != 0) && (*(undefined1 *)puVar3 = 0, (uVar15 & 2) != 0)) {
              *(undefined2 *)((long)puVar3 + ((uVar15 & 0xffffffff) - 2)) = 0;
            }
          }
          else {
            *(undefined4 *)puVar3 = 0;
            *(undefined4 *)((long)puVar3 + ((uVar15 & 0xffffffff) - 4)) = 0;
          }
        }
        else {
          *puVar3 = 0;
          *(undefined8 *)((long)puVar3 + ((uVar15 & 0xffffffff) - 8)) = 0;
          uVar18 = uVar18 + ((int)puVar3 - (int)((ulong)(puVar3 + 1) & 0xfffffffffffffff8)) &
                   0xfffffff8;
          if (7 < uVar18) {
            uVar19 = 0;
            do {
              uVar15 = (ulong)uVar19;
              uVar19 = uVar19 + 8;
              *(undefined8 *)(((ulong)(puVar3 + 1) & 0xfffffffffffffff8) + uVar15) = 0;
            } while (uVar19 < uVar18);
          }
        }
        lVar20 = -0x49 - lVar32;
        uVar16 = (uVar16 + 0x40) - uVar29;
        if (0x38 < uVar17) goto LAB_00100bf2;
      }
      else {
LAB_00100bf2:
        uVar17 = (uint)((lVar32 + 8) - uVar16 >> 0x20);
        *(uint *)(param_1 + 0x33c) = *(uint *)(param_1 + 0x33c) | uVar26 & (int)uVar17 >> 0x1f;
        sha256_block_data_order(c,lVar14,1);
        lVar20 = -0x49 - lVar32;
        lVar1 = uVar16 + lVar20;
        uVar16 = uVar16 + 0x40;
        iVar36 = (int)((uint)((ulong)lVar1 >> 0x20) & uVar17) >> 0x1f;
        auVar35._4_4_ = iVar36;
        auVar35._0_4_ = iVar36;
        auVar35._8_4_ = iVar36;
        auVar35._12_4_ = iVar36;
        local_80 = auVar35 & *(undefined1 (*) [16])(param_1 + 0x2d8) | local_80;
        local_70 = *(undefined1 (*) [16])(param_1 + 0x2e8) & auVar35 | local_70;
        *(undefined1 (*) [16])(param_1 + 0x300) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(param_1 + 0x310) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(param_1 + 800) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(param_1 + 0x330) = (undefined1  [16])0x0;
      }
      *(uint *)(param_1 + 0x33c) = uVar26;
      sha256_block_data_order(c,lVar14,1);
      uVar19 = (uint)((long)(uVar16 + lVar20) >> 0x3f);
      uVar24 = *(uint *)(param_1 + 0x2e4) & uVar19 | local_80._12_4_;
      uVar28 = *(uint *)(param_1 + 0x2dc) & uVar19 | local_80._4_4_;
      uVar21 = *(uint *)(param_1 + 0x2e8) & uVar19 | local_70._0_4_;
      uVar27 = *(uint *)(param_1 + 0x2e0) & uVar19 | local_80._8_4_;
      uVar26 = *(uint *)(param_1 + 0x2ec) & uVar19 | local_70._4_4_;
      uVar18 = *(uint *)(param_1 + 0x2f0) & uVar19 | local_70._8_4_;
      uVar17 = *(uint *)(param_1 + 0x2f4) & uVar19 | local_70._12_4_;
      uVar19 = uVar19 & *(uint *)(param_1 + 0x2d8) | local_80._0_4_;
      auVar11._4_8_ = local_80._8_8_;
      auVar11._0_4_ =
           uVar28 >> 0x18 | (uVar28 & 0xff0000) >> 8 | (uVar28 & 0xff00) << 8 | uVar28 << 0x18;
      local_80._0_8_ = auVar11._0_8_ << 0x20;
      local_80._8_4_ =
           uVar27 >> 0x18 | (uVar27 & 0xff0000) >> 8 | (uVar27 & 0xff00) << 8 | uVar27 << 0x18;
      uVar17 = uVar17 >> 0x18 | (uVar17 & 0xff0000) >> 8 | (uVar17 & 0xff00) << 8 | uVar17 << 0x18;
      auVar12._4_8_ = local_70._8_8_;
      auVar12._0_4_ =
           uVar26 >> 0x18 | (uVar26 & 0xff0000) >> 8 | (uVar26 & 0xff00) << 8 | uVar26 << 0x18;
      local_70._0_12_ = auVar12 << 0x20;
      local_70._12_4_ = uVar17;
      local_80._12_4_ =
           uVar24 >> 0x18 | (uVar24 & 0xff0000) >> 8 | (uVar24 & 0xff00) << 8 | uVar24 << 0x18;
      local_70._0_4_ =
           uVar21 >> 0x18 | (uVar21 & 0xff0000) >> 8 | (uVar21 & 0xff00) << 8 | uVar21 << 0x18;
      local_70._8_4_ =
           uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 | (uVar18 & 0xff00) << 8 | uVar18 << 0x18;
      local_80._0_4_ =
           uVar19 >> 0x18 | (uVar19 & 0xff0000) >> 8 | (uVar19 & 0xff00) << 8 | uVar19 << 0x18;
      *(undefined8 *)(param_1 + 0x2f8) = *(undefined8 *)(param_1 + 0x288);
      *(undefined8 *)(param_1 + 0x300) = *(undefined8 *)(param_1 + 0x290);
      *(undefined8 *)(param_1 + 0x2d8) = *(undefined8 *)(param_1 + 0x268);
      *(undefined8 *)(param_1 + 0x2e0) = *(undefined8 *)(param_1 + 0x270);
      *(undefined8 *)(param_1 + 0x2e8) = *(undefined8 *)(param_1 + 0x278);
      *(undefined8 *)(param_1 + 0x2f0) = *(undefined8 *)(param_1 + 0x280);
      *(undefined8 *)(param_1 + 0x308) = *(undefined8 *)(param_1 + 0x298);
      *(undefined8 *)(param_1 + 0x310) = *(undefined8 *)(param_1 + 0x2a0);
      *(undefined8 *)(param_1 + 0x318) = *(undefined8 *)(param_1 + 0x2a8);
      *(undefined8 *)(param_1 + 800) = *(undefined8 *)(param_1 + 0x2b0);
      *(undefined8 *)(param_1 + 0x328) = *(undefined8 *)(param_1 + 0x2b8);
      *(undefined8 *)(param_1 + 0x330) = *(undefined8 *)(param_1 + 0x2c0);
      *(undefined8 *)(param_1 + 0x338) = *(undefined8 *)(param_1 + 0x2c8);
      *(undefined8 *)(param_1 + 0x340) = *(undefined8 *)(param_1 + 0x2d0);
      sha256_update(c,local_80,0x20);
      SHA256_Final(local_80,c);
      uVar26 = 0;
      uVar17 = ((int)(uVar31 - uVar23) - (int)lVar32) - 0x21;
      pbVar25 = (byte *)((long)local_d8 + (uVar31 - uVar23) + -1);
      do {
        bVar4 = *pbVar25;
        pbVar25 = pbVar25 + 1;
        uVar18 = (int)uVar17 >> 0x1f;
        uVar23 = -uVar17 - 0x21 & uVar17;
        pbVar2 = local_80 + uVar30;
        uVar30 = uVar30 + (uVar23 >> 0x1f);
        uVar17 = uVar17 + 1;
        uVar26 = uVar26 | (uint)(bVar4 ^ *pbVar2) & (int)uVar23 >> 0x1f | ~uVar18 & (bVar4 ^ uVar13)
        ;
      } while (pbVar25 != (byte *)((long)local_d8 + uVar31 + 0x1f));
      iVar36 = ((int)(-uVar26 | uVar33) >> 0x1f) + 1;
      goto LAB_001004bb;
    }
    sha256_update(param_1 + 0x2d8,param_2,param_4);
  }
  else {
    if (uVar31 == 0xffffffffffffffff) {
      lVar14 = 0;
      uVar31 = param_4;
      pvVar22 = param_3;
    }
    else {
      if ((uVar31 + 0x30 & 0xfffffffffffffff0) != param_4) goto LAB_001004bb;
      lVar14 = (ulong)(0x301 < *(uint *)(param_1 + 0x1c0)) * 0x10;
      pvVar22 = (void *)((long)param_3 + lVar14);
    }
    if (((((DAT_0010201b & 0x20) == 0) &&
         (((_DAT_00102014 & 0x10000000) == 0 ||
          ((_OPENSSL_ia32cap_P & 0x40000000) == 0 && (_DAT_00102014 & 0x800) == 0)))) ||
        (uVar16 = lVar14 + (ulong)(0x40 - *(int *)(param_1 + 0x340)), uVar31 <= uVar16)) ||
       (uVar29 = uVar31 - uVar16, uVar29 < 0x40)) {
      uVar16 = param_1 + 0xc0;
      local_e8 = param_2;
      local_d0 = param_4;
    }
    else {
      uStack_100 = 0x100a42;
      sha256_update(param_1 + 0x2d8,pvVar22);
      param_5 = (long)param_3 + uVar16;
      aesni_cbc_sha256_enc
                (param_3,param_2,uVar29 >> 6,param_1 + 0xc0,param_1 + 0x20,param_1 + 0x2d8);
      uVar30 = uVar29 & 0xffffffffffffffc0;
      uVar13 = (int)uVar30 * 8;
      uVar33 = uVar13 + (int)*(undefined8 *)(param_1 + 0x2f8);
      iVar36 = (int)(uVar29 >> 0x1d) + (int)((ulong)*(undefined8 *)(param_1 + 0x2f8) >> 0x20);
      *(ulong *)(param_1 + 0x2f8) = CONCAT44(iVar36,uVar33);
      if (uVar33 < uVar13) {
        *(int *)(param_1 + 0x2fc) = iVar36 + 1;
      }
      local_e8 = (void *)((long)param_2 + uVar30);
      lVar14 = uVar16 + uVar30;
      pvVar22 = (void *)((long)param_3 + lVar14);
      uVar16 = param_4 - uVar30;
      param_6 = uStack_100;
      local_d0 = uVar16;
    }
    local_d8 = (void *)(param_1 + 0x20);
    local_e0 = param_1 + 0xc0;
    local_f0 = (SHA256_CTX *)(param_1 + 0x2d8);
    sha256_update(local_f0,pvVar22,uVar31 - lVar14,uVar16,param_5,param_6);
    if (uVar31 == param_4) {
      aesni_cbc_encrypt((long)param_3 + uVar30,local_e8,local_d0,local_e0,local_d8,1);
    }
    else {
      if (param_3 != param_2) {
        memcpy(local_e8,(void *)((long)param_3 + uVar30),uVar31 - uVar30);
      }
      md = (uchar *)((long)param_2 + uVar31);
      SHA256_Final(md,local_f0);
      *(undefined8 *)(param_1 + 0x2d8) = *(undefined8 *)(param_1 + 0x268);
      *(undefined8 *)(param_1 + 0x2e0) = *(undefined8 *)(param_1 + 0x270);
      *(undefined8 *)(param_1 + 0x2e8) = *(undefined8 *)(param_1 + 0x278);
      *(undefined8 *)(param_1 + 0x2f0) = *(undefined8 *)(param_1 + 0x280);
      *(undefined8 *)(param_1 + 0x2f8) = *(undefined8 *)(param_1 + 0x288);
      *(undefined8 *)(param_1 + 0x300) = *(undefined8 *)(param_1 + 0x290);
      *(undefined8 *)(param_1 + 0x308) = *(undefined8 *)(param_1 + 0x298);
      *(undefined8 *)(param_1 + 0x310) = *(undefined8 *)(param_1 + 0x2a0);
      *(undefined8 *)(param_1 + 0x318) = *(undefined8 *)(param_1 + 0x2a8);
      *(undefined8 *)(param_1 + 800) = *(undefined8 *)(param_1 + 0x2b0);
      *(undefined8 *)(param_1 + 0x328) = *(undefined8 *)(param_1 + 0x2b8);
      *(undefined8 *)(param_1 + 0x330) = *(undefined8 *)(param_1 + 0x2c0);
      *(undefined8 *)(param_1 + 0x338) = *(undefined8 *)(param_1 + 0x2c8);
      *(undefined8 *)(param_1 + 0x340) = *(undefined8 *)(param_1 + 0x2d0);
      sha256_update(local_f0,md,0x20);
      SHA256_Final(md,local_f0);
      uVar30 = uVar31 + 0x20;
      if (uVar30 < param_4) {
        memset((void *)(uVar30 + (long)param_2),((uint)param_4 - 1) - (int)uVar30 & 0xff,
               (param_4 - 0x20) - uVar31);
      }
      aesni_cbc_encrypt(local_e8,local_e8,local_d0,local_e0,local_d8,1);
    }
  }
  iVar36 = 1;
LAB_001004bb:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar36;
}



uint aesni_cbc_hmac_sha256_init_key(long param_1,undefined8 param_2)

{
  uint uVar1;
  
  if ((*(byte *)(param_1 + 0x6c) & 2) == 0) {
    uVar1 = aesni_set_decrypt_key(param_2,*(int *)(param_1 + 0x48) * 8,param_1 + 0xc0);
  }
  else {
    uVar1 = aesni_set_encrypt_key();
  }
  SHA256_Init((SHA256_CTX *)(param_1 + 0x1f8));
  *(undefined8 *)(param_1 + 0x1b8) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x90) = 1;
  *(undefined8 *)(param_1 + 0x268) = *(undefined8 *)(param_1 + 0x1f8);
  *(undefined8 *)(param_1 + 0x270) = *(undefined8 *)(param_1 + 0x200);
  *(undefined8 *)(param_1 + 0x98) = 0x30;
  *(undefined8 *)(param_1 + 0x278) = *(undefined8 *)(param_1 + 0x208);
  *(undefined8 *)(param_1 + 0x280) = *(undefined8 *)(param_1 + 0x210);
  *(undefined8 *)(param_1 + 0x288) = *(undefined8 *)(param_1 + 0x218);
  *(undefined8 *)(param_1 + 0x290) = *(undefined8 *)(param_1 + 0x220);
  *(undefined8 *)(param_1 + 0x298) = *(undefined8 *)(param_1 + 0x228);
  *(undefined8 *)(param_1 + 0x2a0) = *(undefined8 *)(param_1 + 0x230);
  *(undefined8 *)(param_1 + 0x2a8) = *(undefined8 *)(param_1 + 0x238);
  *(undefined8 *)(param_1 + 0x2b0) = *(undefined8 *)(param_1 + 0x240);
  *(undefined8 *)(param_1 + 0x2b8) = *(undefined8 *)(param_1 + 0x248);
  *(undefined8 *)(param_1 + 0x2c0) = *(undefined8 *)(param_1 + 0x250);
  *(undefined8 *)(param_1 + 0x2c8) = *(undefined8 *)(param_1 + 600);
  *(undefined8 *)(param_1 + 0x2d0) = *(undefined8 *)(param_1 + 0x260);
  *(undefined8 *)(param_1 + 0x2d8) = *(undefined8 *)(param_1 + 0x1f8);
  *(undefined8 *)(param_1 + 0x2e0) = *(undefined8 *)(param_1 + 0x200);
  *(undefined8 *)(param_1 + 0x2e8) = *(undefined8 *)(param_1 + 0x208);
  *(undefined8 *)(param_1 + 0x2f0) = *(undefined8 *)(param_1 + 0x210);
  *(undefined8 *)(param_1 + 0x2f8) = *(undefined8 *)(param_1 + 0x218);
  *(undefined8 *)(param_1 + 0x300) = *(undefined8 *)(param_1 + 0x220);
  *(undefined8 *)(param_1 + 0x308) = *(undefined8 *)(param_1 + 0x228);
  *(undefined8 *)(param_1 + 0x310) = *(undefined8 *)(param_1 + 0x230);
  *(undefined8 *)(param_1 + 0x318) = *(undefined8 *)(param_1 + 0x238);
  *(undefined8 *)(param_1 + 800) = *(undefined8 *)(param_1 + 0x240);
  *(undefined8 *)(param_1 + 0x328) = *(undefined8 *)(param_1 + 0x248);
  *(undefined8 *)(param_1 + 0x330) = *(undefined8 *)(param_1 + 0x250);
  *(undefined8 *)(param_1 + 0x338) = *(undefined8 *)(param_1 + 600);
  *(undefined8 *)(param_1 + 0x340) = *(undefined8 *)(param_1 + 0x260);
  return ~uVar1 >> 0x1f;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long tls1_multi_block_encrypt
               (long param_1,undefined1 *param_2,long param_3,uint param_4,int param_5)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  ushort uVar15;
  int iVar16;
  uint uVar17;
  undefined4 uVar18;
  long lVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  uint *puVar23;
  uint *puVar24;
  byte bVar25;
  uint uVar26;
  ulong uVar27;
  int iVar28;
  uint uVar29;
  undefined4 *puVar30;
  ulong *puVar31;
  uint uVar32;
  ulong uVar33;
  long *plVar34;
  undefined1 *puVar35;
  long lVar36;
  ulong *puVar37;
  uint uVar38;
  ulong uVar39;
  ulong uVar40;
  uint uVar41;
  uint uVar42;
  long in_FS_OFFSET;
  byte bVar43;
  uint local_834;
  long *local_828;
  uint local_820;
  long *local_818;
  long local_7f0;
  long *local_7d0;
  long local_7a8;
  int local_7a0 [2];
  long local_798 [14];
  long local_728;
  undefined4 local_720 [2];
  long alStack_718 [14];
  long local_6a8;
  undefined1 *puStack_6a0;
  undefined4 local_698 [2];
  ulong local_690;
  undefined8 uStack_688;
  undefined1 local_668 [256];
  ulong local_568 [129];
  uint local_160;
  uint auStack_15c [71];
  long local_40;
  
  bVar43 = 0;
  lVar19 = 0;
  uVar41 = param_5 * 4;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar16 = RAND_bytes_ex(*(undefined8 *)(param_1 + 0xb8),local_568,param_5 << 6,0);
  if (iVar16 < 1) goto LAB_00101465;
  bVar25 = (char)param_5 + 1;
  local_834 = param_4 >> (bVar25 & 0x1f);
  local_820 = (param_4 + local_834) - (local_834 << (bVar25 & 0x1f));
  if ((local_834 < local_820) && ((local_820 + 0x16 & 0x3f) < uVar41 - 1)) {
    local_834 = local_834 + 1;
    local_820 = local_820 + param_5 * -4 + 1;
  }
  local_7a8 = param_3;
  local_6a8 = param_3;
  puStack_6a0 = param_2 + 0x15;
  *(ulong *)(param_2 + 5) = local_568[0];
  *(ulong *)(param_2 + 0xd) = local_568[1];
  local_690 = local_568[0];
  uStack_688 = local_568[1];
  uVar26 = local_820;
  if (local_834 <= local_820) {
    uVar26 = local_834;
  }
  uVar26 = uVar26 - 0x33;
  if ((int)uVar41 < 2) {
    local_568[0] = *(ulong *)(param_1 + 0x300);
    sha256_multi_block(&local_160,&local_728,0);
    if (0x83f < uVar26) goto LAB_001011e6;
    sha256_multi_block(&local_160,&local_7a8,0);
    puVar37 = local_568;
    for (lVar19 = 0x80; lVar19 != 0; lVar19 = lVar19 + -1) {
      *puVar37 = 0;
      puVar37 = puVar37 + (ulong)bVar43 * -2 + 1;
    }
LAB_00101887:
    local_828 = &local_728;
    sha256_multi_block(&local_160,local_828,0);
    lVar19 = 0;
    puVar37 = local_568;
    for (lVar36 = 0x80; lVar36 != 0; lVar36 = lVar36 + -1) {
      *puVar37 = 0;
      puVar37 = puVar37 + (ulong)bVar43 * -2 + 1;
    }
    sha256_multi_block(&local_160,local_828,0);
  }
  else {
    plVar21 = &local_7a8;
    puVar35 = local_668;
    puVar37 = local_568 + 2;
    plVar20 = plVar21;
    do {
      uVar39 = *puVar37;
      uVar40 = puVar37[1];
      uVar27 = (long)puVar35 - (long)&local_6a8;
      plVar20[2] = *plVar20 + (ulong)local_834;
      *(ulong *)(puVar35 + -0x18) = *plVar20 + (ulong)local_834;
      lVar19 = *(long *)(puVar35 + -0x38) + (ulong)((local_834 + 0x30 & 0xfffffff0) + 0x15);
      *(long *)(puVar35 + -0x10) = lVar19;
      *(ulong *)(lVar19 + -0x10) = uVar39;
      *(ulong *)(lVar19 + -8) = uVar40;
      if (uVar27 < 0x140) {
        uVar27 = 0x140;
      }
      puVar31 = puVar37 + 2;
      plVar20 = plVar20 + 2;
      lVar19 = __memcpy_chk(puVar35,puVar37,0x10,(long)&local_6a8 + (uVar27 - (long)puVar35));
      puVar35 = (undefined1 *)(lVar19 + 0x28);
      puVar37 = puVar31;
    } while (puVar31 != local_568 + (ulong)uVar41 * 2);
    uVar42 = *(uint *)(param_1 + 0x2f4);
    local_568[0] = *(ulong *)(param_1 + 0x300);
    uVar17 = *(uint *)(param_1 + 0x2d8);
    uVar32 = *(uint *)(param_1 + 0x2e4);
    uVar29 = *(uint *)(param_1 + 0x2dc);
    uVar39 = local_568[0] >> 0x38;
    uVar40 = local_568[0] & 0xff000000000000;
    uVar27 = local_568[0] & 0xff0000000000;
    uVar9 = local_568[0] & 0xff00000000;
    uVar10 = local_568[0] & 0xff000000;
    uVar11 = local_568[0] & 0xff0000;
    uVar12 = local_568[0] & 0xff00;
    uVar13 = local_568[0] << 0x38;
    uVar38 = *(uint *)(param_1 + 0x2e0);
    uVar3 = *(uint *)(param_1 + 0x2e8);
    uVar4 = *(uint *)(param_1 + 0x2ec);
    bVar25 = *(byte *)(param_1 + 0x30a);
    bVar1 = *(byte *)(param_1 + 0x309);
    uVar5 = *(uint *)(param_1 + 0x2f0);
    bVar2 = *(byte *)(param_1 + 0x308);
    puVar23 = &local_160;
    puVar37 = local_568;
    lVar19 = 0;
    plVar20 = plVar21;
    do {
      puVar23[0x18] = uVar32;
      uVar7 = local_820;
      if (uVar41 - 1 != (uint)lVar19) {
        uVar7 = local_834;
      }
      puVar23[0x20] = uVar3;
      *puVar23 = uVar17;
      *(char *)((long)puVar37 + 0xc) = (char)uVar7;
      puVar23[8] = uVar29;
      puVar23[0x38] = uVar42;
      puVar23[0x10] = uVar38;
      puVar23[0x28] = uVar4;
      puVar23[0x30] = uVar5;
      uVar33 = (uVar39 | uVar40 >> 0x28 | uVar27 >> 0x18 | uVar9 >> 8 | uVar10 << 8 | uVar11 << 0x18
                | uVar12 << 0x28 | uVar13) + lVar19;
      *puVar37 = uVar33 >> 0x38 | (uVar33 & 0xff000000000000) >> 0x28 |
                 (uVar33 & 0xff0000000000) >> 0x18 | (uVar33 & 0xff00000000) >> 8 |
                 (uVar33 & 0xff000000) << 8 | (uVar33 & 0xff0000) << 0x18 |
                 (uVar33 & 0xff00) << 0x28 | uVar33 << 0x38;
      *(uint *)(puVar37 + 1) =
           ((uVar7 & 0xff00 | (uint)bVar25) << 8 | (uint)bVar1) << 8 | (uint)bVar2;
      puVar8 = (undefined8 *)*plVar20;
      uVar14 = puVar8[1];
      *(undefined8 *)((long)puVar37 + 0xd) = *puVar8;
      *(undefined8 *)((long)puVar37 + 0x15) = uVar14;
      uVar14 = puVar8[3];
      *(undefined8 *)((long)puVar37 + 0x1d) = puVar8[2];
      *(undefined8 *)((long)puVar37 + 0x25) = uVar14;
      uVar14 = puVar8[5];
      *(undefined8 *)((long)puVar37 + 0x2d) = puVar8[4];
      *(undefined8 *)((long)puVar37 + 0x35) = uVar14;
      uVar6 = *(uint *)((long)puVar8 + 0x2f);
      *plVar20 = (long)puVar8 + 0x33;
      *(uint *)(plVar20 + 1) = uVar7 - 0x33 >> 6;
      lVar36 = lVar19 + 1;
      *(uint *)((long)puVar37 + 0x3c) = uVar6;
      (&local_728)[lVar19 * 2] = (long)puVar37;
      puVar37 = puVar37 + 0x10;
      local_720[lVar19 * 4] = 1;
      puVar23 = puVar23 + 1;
      lVar19 = lVar36;
      plVar20 = plVar20 + 2;
    } while ((uint)lVar36 < uVar41);
    sha256_multi_block(&local_160,&local_728,param_5);
    if (uVar26 < 0x840) {
      sha256_multi_block(&local_160,plVar21,param_5);
      iVar16 = 0;
      puVar37 = local_568;
      for (lVar19 = 0x80; lVar19 != 0; lVar19 = lVar19 + -1) {
        *puVar37 = 0;
        puVar37 = puVar37 + (ulong)bVar43 * -2 + 1;
      }
    }
    else {
      plVar20 = &local_728;
      puVar30 = local_698;
      do {
        lVar19 = *plVar21;
        plVar34 = plVar20 + 2;
        plVar21 = plVar21 + 2;
        *(undefined4 *)(plVar20 + 1) = 0x20;
        *plVar20 = lVar19;
        *puVar30 = 0x80;
        plVar20 = plVar34;
        puVar30 = puVar30 + 10;
      } while (plVar34 != alStack_718 + (ulong)(uVar41 - 1) * 2);
LAB_001011e6:
      local_828 = &local_728;
      local_7d0 = &local_6a8;
      local_818 = &local_7a8;
      uVar42 = uVar26 >> 6;
      do {
        sha256_multi_block(&local_160,local_828,param_5);
        aesni_multi_cbc_encrypt(local_7d0,param_1 + 0xc0,param_5);
        plVar21 = local_818;
        plVar20 = local_7d0;
        plVar34 = local_828;
        if (param_5 != 0) {
          do {
            lVar19 = *plVar21;
            *(int *)(plVar21 + 1) = (int)plVar21[1] + -0x20;
            plVar22 = plVar21 + 2;
            *(undefined4 *)(plVar34 + 1) = 0x20;
            *plVar21 = lVar19 + 0x800;
            *plVar34 = lVar19 + 0x800;
            lVar19 = plVar20[1];
            *(undefined4 *)(plVar20 + 2) = 0x80;
            *plVar20 = *plVar20 + __LC0;
            plVar20[1] = lVar19 + _UNK_00101d28;
            lVar36 = *(long *)(lVar19 + 0x7f8);
            plVar20[3] = *(long *)(lVar19 + 0x7f0);
            plVar20[4] = lVar36;
            plVar21 = plVar22;
            plVar20 = plVar20 + 5;
            plVar34 = plVar34 + 2;
          } while (local_798 + (ulong)(uVar41 - 1) * 2 != plVar22);
        }
        uVar42 = uVar42 - 0x20;
      } while (0x20 < uVar42);
      iVar16 = (((uVar26 >> 6) - 0x21 >> 5) + 1) * 0x800;
      sha256_multi_block(&local_160,local_818,param_5);
      puVar37 = local_568;
      for (lVar19 = 0x80; lVar19 != 0; lVar19 = lVar19 + -1) {
        *puVar37 = 0;
        puVar37 = puVar37 + (ulong)bVar43 * -2 + 1;
      }
      if (param_5 == 0) goto LAB_00101887;
    }
    uVar26 = uVar41 - 1;
    local_7d0 = &local_6a8;
    local_828 = &local_728;
    lVar19 = 0;
    puVar37 = local_568;
    uVar42 = 0;
    uVar17 = local_834;
    while( true ) {
      uVar32 = uVar17 + (-0x33 - iVar16) + *(int *)((long)local_7a0 + lVar19) * -0x40;
      lVar36 = __memcpy_chk(puVar37,(ulong)(uint)(*(int *)((long)local_7a0 + lVar19) * 0x40) +
                                    *(long *)((long)local_7a0 + lVar19 + -8),(ulong)uVar32,
                            lVar19 * -8 + 0x400);
      *(undefined1 *)((long)local_568 + (ulong)uVar32 + (ulong)uVar42 * 0x80) = 0x80;
      uVar17 = uVar17 * 8 + 0x268;
      uVar17 = uVar17 >> 0x18 | (uVar17 & 0xff0000) >> 8 | (uVar17 & 0xff00) << 8 |
               uVar17 * 0x1000000;
      if (uVar32 < 0x38) {
        *(uint *)(lVar36 + 0x3c) = uVar17;
        uVar18 = 1;
      }
      else {
        *(uint *)(lVar36 + 0x7c) = uVar17;
        uVar18 = 2;
      }
      *(undefined4 *)((long)local_720 + lVar19) = uVar18;
      *(long *)((long)local_828 + lVar19) = lVar36;
      uVar32 = uVar42 + 1;
      puVar37 = (ulong *)(lVar36 + 0x80);
      lVar19 = lVar19 + 0x10;
      if (uVar41 == uVar32) break;
      uVar42 = uVar32;
      uVar17 = local_820;
      if (uVar32 != uVar26) {
        uVar17 = local_834;
      }
    }
    sha256_multi_block(&local_160,local_828,param_5);
    uVar41 = *(uint *)(param_1 + 0x268);
    uVar17 = *(uint *)(param_1 + 0x26c);
    puVar37 = local_568;
    for (lVar19 = 0x80; lVar19 != 0; lVar19 = lVar19 + -1) {
      *puVar37 = 0;
      puVar37 = puVar37 + (ulong)bVar43 * -2 + 1;
    }
    uVar32 = *(uint *)(param_1 + 0x270);
    uVar29 = *(uint *)(param_1 + 0x274);
    uVar38 = *(uint *)(param_1 + 0x278);
    uVar3 = *(uint *)(param_1 + 0x27c);
    uVar4 = *(uint *)(param_1 + 0x280);
    uVar5 = *(uint *)(param_1 + 0x284);
    puVar23 = &local_160;
    plVar21 = local_828;
    puVar37 = local_568;
    do {
      uVar7 = *puVar23;
      *puVar23 = uVar41;
      puVar24 = puVar23 + 1;
      *(uint *)puVar37 =
           uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
      uVar7 = puVar23[8];
      *(uint *)((long)puVar37 + 4) =
           uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
      uVar7 = puVar23[0x10];
      *(uint *)(puVar37 + 1) =
           uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
      uVar7 = puVar23[0x18];
      *(uint *)((long)puVar37 + 0xc) =
           uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
      uVar7 = puVar23[0x20];
      *(uint *)(puVar37 + 2) =
           uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
      uVar7 = puVar23[0x28];
      *(uint *)((long)puVar37 + 0x14) =
           uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
      uVar7 = puVar23[0x30];
      *(uint *)(puVar37 + 3) =
           uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
      uVar7 = puVar23[0x38];
      *plVar21 = (long)puVar37;
      puVar23[8] = uVar17;
      puVar23[0x10] = uVar32;
      puVar23[0x18] = uVar29;
      puVar23[0x20] = uVar38;
      puVar23[0x28] = uVar3;
      puVar23[0x30] = uVar4;
      *(uint *)((long)puVar37 + 0x1c) =
           uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
      puVar23[0x38] = uVar5;
      *(undefined1 *)(puVar37 + 4) = 0x80;
      *(uint *)((long)puVar37 + 0x3c) = 0x30000;
      *(undefined4 *)(plVar21 + 1) = 1;
      puVar23 = puVar24;
      plVar21 = plVar21 + 2;
      puVar37 = puVar37 + 0x10;
    } while (auStack_15c + uVar26 != puVar24);
    sha256_multi_block(&local_160,local_828,param_5);
    local_828 = (long *)0x0;
    puVar23 = &local_160;
    uVar41 = local_834;
    uVar17 = 0;
    while( true ) {
      memcpy((void *)local_7d0[1],(void *)*local_7d0,(ulong)(uVar41 - iVar16));
      uVar32 = *puVar23;
      *local_7d0 = local_7d0[1];
      puVar24 = (uint *)(param_2 + (uVar41 + 0x15));
      *puVar24 = uVar32 >> 0x18 | (uVar32 & 0xff0000) >> 8 | (uVar32 & 0xff00) << 8 | uVar32 << 0x18
      ;
      uVar32 = puVar23[8];
      puVar24[1] = uVar32 >> 0x18 | (uVar32 & 0xff0000) >> 8 | (uVar32 & 0xff00) << 8 |
                   uVar32 << 0x18;
      uVar32 = puVar23[0x10];
      puVar24[2] = uVar32 >> 0x18 | (uVar32 & 0xff0000) >> 8 | (uVar32 & 0xff00) << 8 |
                   uVar32 << 0x18;
      uVar32 = puVar23[0x18];
      puVar24[3] = uVar32 >> 0x18 | (uVar32 & 0xff0000) >> 8 | (uVar32 & 0xff00) << 8 |
                   uVar32 << 0x18;
      uVar32 = puVar23[0x20];
      puVar24[4] = uVar32 >> 0x18 | (uVar32 & 0xff0000) >> 8 | (uVar32 & 0xff00) << 8 |
                   uVar32 << 0x18;
      uVar32 = puVar23[0x28];
      puVar24[5] = uVar32 >> 0x18 | (uVar32 & 0xff0000) >> 8 | (uVar32 & 0xff00) << 8 |
                   uVar32 << 0x18;
      uVar32 = puVar23[0x30];
      puVar24[6] = uVar32 >> 0x18 | (uVar32 & 0xff0000) >> 8 | (uVar32 & 0xff00) << 8 |
                   uVar32 << 0x18;
      uVar32 = puVar23[0x38];
      puVar24[7] = uVar32 >> 0x18 | (uVar32 & 0xff0000) >> 8 | (uVar32 & 0xff00) << 8 |
                   uVar32 << 0x18;
      uVar29 = ~(uVar41 + 0x20) & 0xf;
      uVar32 = uVar29 + 1;
      uVar39 = (ulong)uVar32;
      lVar19 = (ulong)uVar29 * 0x101010101010101;
      if (uVar32 < 8) {
        if ((uVar32 & 4) == 0) {
          if ((uVar32 != 0) && (*(char *)(puVar24 + 8) = (char)lVar19, (uVar32 & 2) != 0)) {
            *(short *)((long)puVar24 + uVar39 + 0x1e) = (short)lVar19;
          }
        }
        else {
          puVar24[8] = (uint)lVar19;
          *(uint *)((long)puVar24 + uVar39 + 0x1c) = (uint)lVar19;
        }
      }
      else {
        *(long *)(puVar24 + 8) = lVar19;
        *(long *)((long)puVar24 + uVar39 + 0x18) = lVar19;
        uVar32 = uVar32 + ((int)(puVar24 + 8) - (int)((ulong)(puVar24 + 10) & 0xfffffffffffffff8)) &
                 0xfffffff8;
        if (7 < uVar32) {
          uVar38 = 0;
          do {
            uVar40 = (ulong)uVar38;
            uVar38 = uVar38 + 8;
            *(long *)(((ulong)(puVar24 + 10) & 0xfffffffffffffff8) + uVar40) = lVar19;
          } while (uVar38 < uVar32);
        }
      }
      iVar28 = uVar29 + uVar41 + 0x20;
      puVar35 = (undefined1 *)(uVar39 + (long)(puVar24 + 8));
      plVar21 = local_7d0 + 5;
      puVar23 = puVar23 + 1;
      *(uint *)(local_7d0 + 2) = (uint)((1 - iVar16) + iVar28) >> 4;
      *param_2 = *(undefined1 *)(param_1 + 0x308);
      param_2[1] = *(undefined1 *)(param_1 + 0x309);
      param_2[2] = *(undefined1 *)(param_1 + 0x30a);
      uVar15 = (short)iVar28 + 0x11;
      *(ushort *)(param_2 + 3) = uVar15 * 0x100 | uVar15 >> 8;
      lVar19 = (long)local_828 + (ulong)(iVar28 + 0x16);
      uVar32 = uVar17 + 1;
      if (uVar42 == uVar17) break;
      local_7d0 = plVar21;
      param_2 = puVar35;
      uVar41 = local_820;
      uVar17 = uVar32;
      local_828 = (long *)lVar19;
      if (uVar32 != uVar26) {
        uVar41 = local_834;
      }
    }
  }
  local_7d0 = &local_6a8;
  local_7f0 = param_1 + 0xc0;
  aesni_multi_cbc_encrypt(local_7d0,local_7f0,param_5);
  OPENSSL_cleanse(local_568,0x400);
  OPENSSL_cleanse(&local_160,0x100);
  *(long *)(param_1 + 0x1e8) = lVar19;
LAB_00101465:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar19;
}



void aesni_cbc_hmac_sha256_tls1_multiblock_encrypt(undefined8 param_1,undefined8 *param_2)

{
  tls1_multi_block_encrypt(param_1,*param_2,param_2[1],param_2[2],*(uint *)(param_2 + 3) >> 2);
  return;
}



undefined8 aesni_cbc_hmac_sha256_set_tls1_aad(long param_1,undefined8 *param_2,int param_3)

{
  undefined8 uVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  
  if (param_3 != 0xd) {
    return 0xffffffff;
  }
  uVar2 = *(ushort *)((long)param_2 + 0xb) << 8 | *(ushort *)((long)param_2 + 0xb) >> 8;
  uVar4 = (uint)uVar2;
  if ((*(byte *)(param_1 + 0x6c) & 2) == 0) {
    *(undefined8 *)(param_1 + 0x1c0) = *param_2;
    uVar1 = *(undefined8 *)((long)param_2 + 5);
    *(undefined8 *)(param_1 + 0x1b8) = 0xd;
    *(undefined8 *)(param_1 + 0x1c5) = uVar1;
    *(undefined8 *)(param_1 + 0x1f0) = 0x20;
  }
  else {
    *(ulong *)(param_1 + 0x1b8) = (ulong)uVar2;
    uVar3 = *(ushort *)((long)param_2 + 9) << 8 | *(ushort *)((long)param_2 + 9) >> 8;
    *(uint *)(param_1 + 0x1c0) = (uint)uVar3;
    if (0x301 < uVar3) {
      if (uVar2 < 0x10) {
        return 0;
      }
      uVar4 = uVar2 - 0x10;
      *(ushort *)((long)param_2 + 0xb) = (ushort)uVar4 << 8 | (ushort)uVar4 >> 8;
    }
    *(undefined8 *)(param_1 + 0x2d8) = *(undefined8 *)(param_1 + 0x1f8);
    *(undefined8 *)(param_1 + 0x2e0) = *(undefined8 *)(param_1 + 0x200);
    *(undefined8 *)(param_1 + 0x2e8) = *(undefined8 *)(param_1 + 0x208);
    *(undefined8 *)(param_1 + 0x2f0) = *(undefined8 *)(param_1 + 0x210);
    *(undefined8 *)(param_1 + 0x2f8) = *(undefined8 *)(param_1 + 0x218);
    *(undefined8 *)(param_1 + 0x300) = *(undefined8 *)(param_1 + 0x220);
    *(undefined8 *)(param_1 + 0x308) = *(undefined8 *)(param_1 + 0x228);
    *(undefined8 *)(param_1 + 0x310) = *(undefined8 *)(param_1 + 0x230);
    *(undefined8 *)(param_1 + 0x318) = *(undefined8 *)(param_1 + 0x238);
    *(undefined8 *)(param_1 + 800) = *(undefined8 *)(param_1 + 0x240);
    *(undefined8 *)(param_1 + 0x328) = *(undefined8 *)(param_1 + 0x248);
    *(undefined8 *)(param_1 + 0x330) = *(undefined8 *)(param_1 + 0x250);
    *(undefined8 *)(param_1 + 0x338) = *(undefined8 *)(param_1 + 600);
    *(undefined8 *)(param_1 + 0x340) = *(undefined8 *)(param_1 + 0x260);
    sha256_update(param_1 + 0x2d8,param_2,0xd);
    *(long *)(param_1 + 0x1f0) = (long)(int)((uVar4 + 0x30 & 0xfffffff0) - uVar4);
  }
  return 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int aesni_cbc_hmac_sha256_tls1_multiblock_max_bufsize(long param_1)

{
  SHA256_CTX *c;
  ulong *puVar1;
  ulong *puVar2;
  size_t __n;
  char *__src;
  char *pcVar3;
  long in_FS_OFFSET;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  ulong uStack_40;
  long lStack_38;
  
  if (*(long *)(param_1 + 0x1e0) != 0) {
    return ((int)*(long *)(param_1 + 0x1e0) + 0x30U & 0xfffffff0) + 0x15;
  }
  __src = "providers/implementations/ciphers/cipher_aes_cbc_hmac_sha256_hw.c";
  pcVar3 = "assertion failed: ctx->multiblock_max_send_fragment != 0";
  OPENSSL_die("assertion failed: ctx->multiblock_max_send_fragment != 0",
              "providers/implementations/ciphers/cipher_aes_cbc_hmac_sha256_hw.c",0x2f8);
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  auStack_80 = (undefined1  [16])0x0;
  auStack_70 = (undefined1  [16])0x0;
  auStack_60 = (undefined1  [16])0x0;
  auStack_50 = (undefined1  [16])0x0;
  if (__n < 0x41) {
    memcpy(auStack_80,__src,__n);
  }
  else {
    c = (SHA256_CTX *)(pcVar3 + 0x1f8);
    SHA256_Init(c);
    sha256_update(c,__src,__n);
    SHA256_Final(auStack_80,c);
  }
  puVar1 = (ulong *)auStack_80;
  do {
    puVar2 = puVar1 + 2;
    *puVar1 = *puVar1 ^ __LC3;
    puVar1[1] = puVar1[1] ^ _UNK_00101d38;
    puVar1 = puVar2;
  } while (puVar2 != &uStack_40);
  SHA256_Init((SHA256_CTX *)(pcVar3 + 0x1f8));
  sha256_update((SHA256_CTX *)(pcVar3 + 0x1f8),auStack_80,0x40);
  puVar1 = (ulong *)auStack_80;
  do {
    puVar2 = puVar1 + 2;
    *puVar1 = *puVar1 ^ __LC4;
    puVar1[1] = puVar1[1] ^ _UNK_00101d48;
    puVar1 = puVar2;
  } while (puVar2 != &uStack_40);
  SHA256_Init((SHA256_CTX *)(pcVar3 + 0x268));
  sha256_update((SHA256_CTX *)(pcVar3 + 0x268),auStack_80,0x40);
  OPENSSL_cleanse(auStack_80,0x40);
  if (lStack_38 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void aesni_cbc_hmac_sha256_set_mac_key(long param_1,void *param_2,size_t param_3)

{
  SHA256_CTX *c;
  ulong *puVar1;
  ulong *puVar2;
  long in_FS_OFFSET;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  ulong local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  local_48 = (undefined1  [16])0x0;
  if (param_3 < 0x41) {
    memcpy(local_78,param_2,param_3);
  }
  else {
    c = (SHA256_CTX *)(param_1 + 0x1f8);
    SHA256_Init(c);
    sha256_update(c,param_2,param_3);
    SHA256_Final(local_78,c);
  }
  puVar1 = (ulong *)local_78;
  do {
    puVar2 = puVar1 + 2;
    *puVar1 = *puVar1 ^ __LC3;
    puVar1[1] = puVar1[1] ^ _UNK_00101d38;
    puVar1 = puVar2;
  } while (puVar2 != &local_38);
  SHA256_Init((SHA256_CTX *)(param_1 + 0x1f8));
  sha256_update((SHA256_CTX *)(param_1 + 0x1f8),local_78,0x40);
  puVar1 = (ulong *)local_78;
  do {
    puVar2 = puVar1 + 2;
    *puVar1 = *puVar1 ^ __LC4;
    puVar1[1] = puVar1[1] ^ _UNK_00101d48;
    puVar1 = puVar2;
  } while (puVar2 != &local_38);
  SHA256_Init((SHA256_CTX *)(param_1 + 0x268));
  sha256_update((SHA256_CTX *)(param_1 + 0x268),local_78,0x40);
  OPENSSL_cleanse(local_78,0x40);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool ossl_cipher_capable_aes_cbc_hmac_sha256(void)

{
  int iVar1;
  
  if ((DAT_00102017 & 2) == 0) {
    return false;
  }
  iVar1 = aesni_cbc_sha256_enc(0,0,0,0,0,0,0);
  return iVar1 != 0;
}



undefined1 * ossl_prov_cipher_hw_aes_cbc_hmac_sha256(void)

{
  return cipher_hw_aes_hmac_sha256;
}


