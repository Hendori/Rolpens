
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
    uVar3 = uVar1 + (int)uVar4;
    iVar5 = (int)(param_3 >> 0x1d) + (int)((ulong)uVar4 >> 0x20);
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
              (long param_1,void *param_2,void *param_3,ulong param_4,undefined8 param_5)

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
  undefined4 uVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  uint uVar19;
  uint uVar20;
  long lVar21;
  ulong uVar22;
  uint uVar23;
  void *pvVar24;
  uint uVar25;
  uint uVar26;
  byte *pbVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  ulong uVar31;
  ulong uVar32;
  long in_FS_OFFSET;
  uint uVar33;
  int iVar36;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined8 uStack_100;
  SHA256_CTX *local_f0;
  void *local_e8;
  long local_e0;
  long local_d8;
  void *local_d0;
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  long local_40;
  
  uVar22 = *(ulong *)(param_1 + 0x1b8);
  uVar18 = (ulong)*(uint *)(param_1 + 0x340);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar36 = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0xffffffffffffffff;
  uVar32 = (ulong)((uint)param_4 & 0xf);
  if ((param_4 & 0xf) != 0) goto LAB_001004d6;
  if ((*(byte *)(param_1 + 0x6c) & 2) == 0) {
    aesni_cbc_encrypt(param_3,param_2,param_4,param_1 + 0xc0,param_1 + 0x20,0);
    if (uVar22 != 0xffffffffffffffff) {
      iVar36 = 0;
      uVar18 = (ulong)(0x301 < CONCAT11(*(undefined1 *)(param_1 + 0x1bc + uVar22),
                                        *(undefined1 *)(param_1 + 0x1bd + uVar22)));
      lVar16 = uVar18 * 0x10;
      if (param_4 < lVar16 + 0x21U) goto LAB_001004d6;
      local_d0 = (void *)((long)param_2 + lVar16);
      lVar16 = param_4 + uVar18 * -0x10;
      uVar5 = *(undefined8 *)(param_1 + 0x1f8);
      uVar6 = *(undefined8 *)(param_1 + 0x200);
      uVar7 = *(undefined8 *)(param_1 + 0x208);
      uVar8 = *(undefined8 *)(param_1 + 0x210);
      bVar4 = *(byte *)((long)local_d0 + lVar16 + -1);
      uVar15 = (int)lVar16 - 0x21;
      uVar9 = *(undefined8 *)(param_1 + 0x218);
      uVar10 = *(undefined8 *)(param_1 + 0x220);
      uVar33 = 0xff - uVar15 >> 0x18 | uVar15 & 0xff;
      uVar25 = uVar33 ^ (uVar33 - bVar4 ^ (uint)bVar4 | uVar33 ^ bVar4);
      uVar15 = (int)uVar25 >> 0x1f;
      uVar15 = (uint)bVar4 & ~uVar15 | uVar15 & uVar33;
      local_e0 = lVar16 - (ulong)(uVar15 + 0x21);
      *(char *)(param_1 + 0x1bf + uVar22) = (char)local_e0;
      c = (SHA256_CTX *)(param_1 + 0x2d8);
      *(char *)(param_1 + 0x1be + uVar22) = (char)((ulong)local_e0 >> 8);
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
      sha256_update(c,param_1 + 0x1c0,uVar22);
      uVar18 = lVar16 - 0x20;
      if (0x13f < uVar18) {
        lVar16 = (lVar16 - 0x160U & 0xffffffffffffffc0) + (ulong)(0x40 - *(int *)(param_1 + 0x340));
        sha256_update(c,local_d0,lVar16);
        local_e0 = local_e0 - lVar16;
        local_d0 = (void *)((long)local_d0 + lVar16);
        uVar18 = uVar18 - lVar16;
      }
      lVar16 = param_1 + 0x300;
      uVar14 = *(uint *)(param_1 + 0x340);
      local_80 = (undefined1  [16])0x0;
      uVar28 = *(int *)(param_1 + 0x2f8) + (int)local_e0 * 8;
      local_70 = (undefined1  [16])0x0;
      uVar28 = uVar28 >> 0x18 | (uVar28 & 0xff0000) >> 8 | (uVar28 & 0xff00) << 8 |
               uVar28 * 0x1000000;
      if (uVar18 == 0) {
        uVar22 = 0;
      }
      else {
        lVar21 = -local_e0;
        uVar19 = uVar14;
        do {
          while( true ) {
            uVar14 = uVar19 + 1;
            bVar4 = (byte)((ulong)lVar21 >> 0x38);
            *(byte *)(param_1 + 0x300 + (ulong)uVar19) =
                 ~((byte)((ulong)-lVar21 >> 0x38) | bVar4) & 0x80 |
                 *(byte *)((long)local_d0 + lVar21 + local_e0) & bVar4;
            uVar22 = uVar18;
            if (uVar19 != 0x3f) break;
            uVar14 = (uint)((ulong)(7 - lVar21) >> 0x20);
            *(uint *)(param_1 + 0x33c) = *(uint *)(param_1 + 0x33c) | uVar28 & (int)uVar14 >> 0x1f;
            sha256_block_data_order(c,lVar16,1);
            lVar1 = lVar21 + -0x48;
            lVar21 = lVar21 + 1;
            iVar36 = (int)((uint)((ulong)lVar1 >> 0x20) & uVar14) >> 0x1f;
            auVar34._4_4_ = iVar36;
            auVar34._0_4_ = iVar36;
            auVar34._8_4_ = iVar36;
            auVar34._12_4_ = iVar36;
            local_70 = *(undefined1 (*) [16])(param_1 + 0x2e8) & auVar34 | local_70;
            local_80 = auVar34 & *(undefined1 (*) [16])(param_1 + 0x2d8) | local_80;
            if (uVar18 - local_e0 == lVar21) {
              uVar31 = 0;
              uVar14 = 0;
              goto LAB_001008c2;
            }
            uVar19 = 0;
          }
          lVar21 = lVar21 + 1;
          uVar19 = uVar14;
        } while (lVar21 != uVar18 - local_e0);
      }
      uVar31 = (ulong)uVar14;
      if (uVar14 < 0x40) {
LAB_001008c2:
        puVar3 = (undefined8 *)(param_1 + 0x300 + uVar31);
        uVar17 = 0x40 - uVar31;
        uVar19 = (uint)uVar17;
        if (uVar19 < 8) {
          if ((uVar17 & 4) == 0) {
            if ((uVar19 != 0) && (*(undefined1 *)puVar3 = 0, (uVar17 & 2) != 0)) {
              *(undefined2 *)((long)puVar3 + ((uVar17 & 0xffffffff) - 2)) = 0;
            }
          }
          else {
            *(undefined4 *)puVar3 = 0;
            *(undefined4 *)((long)puVar3 + ((uVar17 & 0xffffffff) - 4)) = 0;
          }
        }
        else {
          *puVar3 = 0;
          *(undefined8 *)((long)puVar3 + ((uVar17 & 0xffffffff) - 8)) = 0;
          uVar19 = uVar19 + ((int)puVar3 - (int)((ulong)(puVar3 + 1) & 0xfffffffffffffff8)) &
                   0xfffffff8;
          if (7 < uVar19) {
            uVar20 = 0;
            do {
              uVar17 = (ulong)uVar20;
              uVar20 = uVar20 + 8;
              *(undefined8 *)(((ulong)(puVar3 + 1) & 0xfffffffffffffff8) + uVar17) = 0;
            } while (uVar20 < uVar19);
          }
        }
        uVar22 = (uVar22 + 0x40) - uVar31;
        lVar21 = -0x49 - local_e0;
        if (0x38 < uVar14) goto LAB_00100c6b;
      }
      else {
LAB_00100c6b:
        uVar14 = (uint)((local_e0 + 8) - uVar22 >> 0x20);
        *(uint *)(param_1 + 0x33c) = *(uint *)(param_1 + 0x33c) | uVar28 & (int)uVar14 >> 0x1f;
        sha256_block_data_order(c,lVar16,1);
        lVar21 = -0x49 - local_e0;
        lVar1 = uVar22 + lVar21;
        uVar22 = uVar22 + 0x40;
        iVar36 = (int)((uint)((ulong)lVar1 >> 0x20) & uVar14) >> 0x1f;
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
      *(uint *)(param_1 + 0x33c) = uVar28;
      sha256_block_data_order(c,lVar16,1);
      uVar13 = local_80._12_4_;
      uVar20 = (uint)((long)(uVar22 + lVar21) >> 0x3f);
      uVar26 = local_80._12_4_ | *(uint *)(param_1 + 0x2e4) & uVar20;
      uVar30 = *(uint *)(param_1 + 0x2dc) & uVar20 | local_80._4_4_;
      uVar29 = *(uint *)(param_1 + 0x2e0) & uVar20 | local_80._8_4_;
      uVar23 = *(uint *)(param_1 + 0x2e8) & uVar20 | local_70._0_4_;
      uVar28 = *(uint *)(param_1 + 0x2ec) & uVar20 | local_70._4_4_;
      uVar19 = *(uint *)(param_1 + 0x2f0) & uVar20 | local_70._8_4_;
      uVar14 = *(uint *)(param_1 + 0x2f4) & uVar20 | local_70._12_4_;
      uVar20 = uVar20 & *(uint *)(param_1 + 0x2d8) | local_80._0_4_;
      auVar11._4_8_ = local_80._8_8_;
      auVar11._0_4_ =
           uVar30 >> 0x18 | (uVar30 & 0xff0000) >> 8 | (uVar30 & 0xff00) << 8 | uVar30 << 0x18;
      local_80._0_8_ = auVar11._0_8_ << 0x20;
      local_80._8_4_ =
           uVar29 >> 0x18 | (uVar29 & 0xff0000) >> 8 | (uVar29 & 0xff00) << 8 | uVar29 << 0x18;
      local_80 = CONCAT412(uVar13,local_80._0_12_);
      uVar14 = uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 | uVar14 << 0x18;
      auVar12._4_8_ = local_70._8_8_;
      auVar12._0_4_ =
           uVar28 >> 0x18 | (uVar28 & 0xff0000) >> 8 | (uVar28 & 0xff00) << 8 | uVar28 << 0x18;
      local_70._0_12_ = auVar12 << 0x20;
      local_70._12_4_ = uVar14;
      local_80._0_4_ =
           uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 | (uVar20 & 0xff00) << 8 | uVar20 << 0x18;
      local_80._12_4_ =
           uVar26 >> 0x18 | (uVar26 & 0xff0000) >> 8 | (uVar26 & 0xff00) << 8 | uVar26 << 0x18;
      local_70._0_4_ =
           uVar23 >> 0x18 | (uVar23 & 0xff0000) >> 8 | (uVar23 & 0xff00) << 8 | uVar23 << 0x18;
      local_70._8_4_ =
           uVar19 >> 0x18 | (uVar19 & 0xff0000) >> 8 | (uVar19 & 0xff00) << 8 | uVar19 << 0x18;
      *(undefined8 *)(param_1 + 0x2f8) = *(undefined8 *)(param_1 + 0x288);
      *(undefined8 *)(param_1 + 0x300) = *(undefined8 *)(param_1 + 0x290);
      *(undefined8 *)(param_1 + 0x308) = *(undefined8 *)(param_1 + 0x298);
      *(undefined8 *)(param_1 + 0x310) = *(undefined8 *)(param_1 + 0x2a0);
      *(undefined8 *)(param_1 + 0x2d8) = *(undefined8 *)(param_1 + 0x268);
      *(undefined8 *)(param_1 + 0x2e0) = *(undefined8 *)(param_1 + 0x270);
      *(undefined8 *)(param_1 + 0x2e8) = *(undefined8 *)(param_1 + 0x278);
      *(undefined8 *)(param_1 + 0x2f0) = *(undefined8 *)(param_1 + 0x280);
      *(undefined8 *)(param_1 + 0x318) = *(undefined8 *)(param_1 + 0x2a8);
      *(undefined8 *)(param_1 + 800) = *(undefined8 *)(param_1 + 0x2b0);
      *(undefined8 *)(param_1 + 0x328) = *(undefined8 *)(param_1 + 0x2b8);
      *(undefined8 *)(param_1 + 0x330) = *(undefined8 *)(param_1 + 0x2c0);
      *(undefined8 *)(param_1 + 0x338) = *(undefined8 *)(param_1 + 0x2c8);
      *(undefined8 *)(param_1 + 0x340) = *(undefined8 *)(param_1 + 0x2d0);
      sha256_update(c,local_80,0x20);
      SHA256_Final(local_80,c);
      uVar28 = 0;
      uVar14 = ((int)(uVar18 - uVar33) - (int)local_e0) - 0x21;
      pbVar27 = (byte *)((long)local_d0 + (uVar18 - uVar33) + -1);
      do {
        bVar4 = *pbVar27;
        pbVar27 = pbVar27 + 1;
        uVar19 = (int)uVar14 >> 0x1f;
        uVar33 = -uVar14 - 0x21 & uVar14;
        pbVar2 = local_80 + uVar32;
        uVar32 = uVar32 + (uVar33 >> 0x1f);
        uVar14 = uVar14 + 1;
        uVar28 = uVar28 | (uint)(bVar4 ^ *pbVar2) & (int)uVar33 >> 0x1f | ~uVar19 & (bVar4 ^ uVar15)
        ;
      } while (pbVar27 != (byte *)((long)local_d0 + uVar18 + 0x1f));
      iVar36 = ((int)(-uVar28 | uVar25) >> 0x1f) + 1;
      goto LAB_001004d6;
    }
    sha256_update(param_1 + 0x2d8,param_2,param_4);
  }
  else {
    if (uVar22 == 0xffffffffffffffff) {
      lVar16 = 0;
      uVar22 = param_4;
      pvVar24 = param_3;
    }
    else {
      if ((uVar22 + 0x30 & 0xfffffffffffffff0) != param_4) goto LAB_001004d6;
      lVar16 = (ulong)(0x301 < *(uint *)(param_1 + 0x1c0)) * 0x10;
      pvVar24 = (void *)((long)param_3 + lVar16);
    }
    local_e8 = param_2;
    local_d0 = (void *)param_4;
    if ((DAT_0010301b & 0x20) == 0) {
      if ((_DAT_00103014 & 0x10000000) == 0) goto LAB_00100748;
      if ((_OPENSSL_ia32cap_P & 0x40000000) != 0 || (_DAT_00103014 & 0x800) != 0) goto LAB_00100367;
    }
    else {
LAB_00100367:
      uVar18 = lVar16 + (ulong)(0x40 - *(uint *)(param_1 + 0x340));
      if (uVar18 < uVar22) {
        uVar31 = uVar22 - uVar18;
        if (uVar31 < 0x40) {
          uVar18 = param_1 + 0x20;
          local_d0 = (void *)param_4;
        }
        else {
          uStack_100 = 0x100b66;
          sha256_update(param_1 + 0x2d8,pvVar24);
          aesni_cbc_sha256_enc
                    (param_3,param_2,uVar31 >> 6,param_1 + 0xc0,param_1 + 0x20,param_1 + 0x2d8,
                     (long)param_3 + uVar18);
          uVar32 = uVar31 & 0xffffffffffffffc0;
          uVar15 = (int)uVar32 * 8;
          uVar33 = uVar15 + (int)*(undefined8 *)(param_1 + 0x2f8);
          iVar36 = (int)(uVar31 >> 0x1d) + (int)((ulong)*(undefined8 *)(param_1 + 0x2f8) >> 0x20);
          *(ulong *)(param_1 + 0x2f8) = CONCAT44(iVar36,uVar33);
          if (uVar33 < uVar15) {
            *(int *)(param_1 + 0x2fc) = iVar36 + 1;
          }
          lVar16 = uVar18 + uVar32;
          local_e8 = (void *)((long)param_2 + uVar32);
          uVar18 = param_4 - uVar32;
          pvVar24 = (void *)((long)param_3 + lVar16);
          param_5 = uStack_100;
          local_d0 = (void *)uVar18;
        }
      }
      else {
LAB_00100748:
        uVar18 = param_1 + 0xc0;
      }
    }
    local_d8 = param_1 + 0x20;
    local_e0 = param_1 + 0xc0;
    local_f0 = (SHA256_CTX *)(param_1 + 0x2d8);
    sha256_update(local_f0,pvVar24,uVar22 - lVar16,uVar18,param_5);
    if (uVar22 == param_4) {
      aesni_cbc_encrypt((long)param_3 + uVar32,local_e8,local_d0,local_e0,local_d8,1);
    }
    else {
      if (param_3 != param_2) {
        memcpy(local_e8,(void *)((long)param_3 + uVar32),uVar22 - uVar32);
      }
      md = (uchar *)((long)param_2 + uVar22);
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
      uVar18 = uVar22 + 0x20;
      if (uVar18 < param_4) {
        memset((void *)(uVar18 + (long)param_2),((uint)param_4 - 1) - (int)uVar18 & 0xff,
               (param_4 - 0x20) - uVar22);
      }
      aesni_cbc_encrypt(local_e8,local_e8,local_d0,local_e0,local_d8,1);
    }
  }
  iVar36 = 1;
LAB_001004d6:
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
               (long param_1,undefined1 *param_2,ulong *param_3,uint param_4,int param_5)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  ushort uVar14;
  int iVar15;
  long lVar16;
  uint *puVar17;
  uint *puVar18;
  byte bVar19;
  uint uVar20;
  ulong uVar21;
  ulong **ppuVar22;
  ulong *puVar23;
  ulong uVar24;
  undefined8 *puVar25;
  long lVar26;
  ulong *puVar27;
  uint uVar28;
  ulong uVar29;
  ulong uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  long in_FS_OFFSET;
  byte bVar35;
  undefined1 *puVar36;
  uint local_824;
  long local_810;
  uint local_808;
  int local_804;
  ulong **local_800;
  long local_7f0;
  ulong **local_7c8;
  ulong *local_7a8;
  int local_7a0 [2];
  ulong *local_798;
  int local_790;
  uint *local_788;
  int local_780;
  uint *local_778;
  int local_770;
  uint *local_768;
  int local_760;
  uint *local_758;
  int local_750;
  uint *local_748;
  int local_740;
  uint *local_738;
  int local_730;
  ulong *local_728;
  undefined4 local_720 [2];
  uint *local_718;
  undefined4 local_710;
  uint *local_708;
  undefined4 local_700;
  uint *local_6f8;
  undefined4 local_6f0;
  uint *local_6e8;
  undefined4 local_6e0;
  uint *local_6d8;
  undefined4 local_6d0;
  uint *local_6c8;
  undefined4 local_6c0;
  uint *local_6b8;
  undefined4 local_6b0;
  ulong *local_6a8 [2];
  undefined4 local_698;
  ulong local_690;
  undefined8 uStack_688;
  long local_680;
  long lStack_678;
  undefined4 local_670;
  undefined8 local_668;
  undefined8 uStack_660;
  long local_658;
  long lStack_650;
  undefined4 local_648;
  undefined8 local_640;
  undefined8 uStack_638;
  long local_630;
  long lStack_628;
  undefined4 local_620;
  undefined8 local_618;
  undefined8 uStack_610;
  long local_608;
  long lStack_600;
  undefined4 local_5f8;
  undefined8 local_5f0;
  undefined8 uStack_5e8;
  long local_5e0;
  long lStack_5d8;
  undefined4 local_5d0;
  undefined8 local_5c8;
  undefined8 uStack_5c0;
  long local_5b8;
  long lStack_5b0;
  undefined4 local_5a8;
  undefined8 local_5a0;
  undefined8 uStack_598;
  long local_590;
  long lStack_588;
  undefined4 local_580;
  undefined8 local_578;
  undefined8 uStack_570;
  undefined8 local_568;
  uint uStack_560;
  uint uStack_55c;
  undefined8 local_558;
  uint uStack_550;
  uint uStack_54c;
  undefined1 local_548;
  undefined4 uStack_52c;
  uint local_4e8;
  uint local_4e4;
  uint local_4e0;
  uint local_4dc;
  uint local_4d8;
  uint local_4d4;
  uint local_4d0;
  uint local_4cc;
  undefined1 local_4c8;
  undefined4 local_4ac;
  uint local_468;
  uint local_464;
  uint local_460;
  uint local_45c;
  uint local_458;
  uint local_454;
  uint local_450;
  uint local_44c;
  undefined1 local_448;
  undefined4 local_42c;
  uint local_3e8;
  uint local_3e4;
  uint local_3e0;
  uint local_3dc;
  uint local_3d8;
  uint local_3d4;
  uint local_3d0;
  uint local_3cc;
  undefined1 local_3c8;
  undefined4 local_3ac;
  uint local_368;
  uint local_364;
  uint local_360;
  uint local_35c;
  uint local_358;
  uint local_354;
  uint local_350;
  uint local_34c;
  undefined1 local_348;
  undefined4 local_32c;
  uint local_2e8;
  uint local_2e4;
  uint local_2e0;
  uint local_2dc;
  uint local_2d8;
  uint local_2d4;
  uint local_2d0;
  uint local_2cc;
  undefined1 local_2c8;
  undefined4 local_2ac;
  uint local_268;
  uint local_264;
  uint local_260;
  uint local_25c;
  uint local_258;
  uint local_254;
  uint local_250;
  uint local_24c;
  undefined1 local_248;
  undefined4 local_22c;
  uint local_1e8;
  uint local_1e4;
  uint local_1e0;
  uint local_1dc;
  uint local_1d8;
  uint local_1d4;
  uint local_1d0;
  uint local_1cc;
  undefined1 local_1c8;
  undefined4 local_1ac;
  uint local_160;
  uint local_15c;
  uint local_158;
  uint local_154;
  uint local_150;
  uint local_14c;
  uint local_148;
  uint local_144;
  uint local_140;
  uint local_13c;
  uint local_138;
  uint local_134;
  uint local_130;
  uint local_12c;
  uint local_128;
  uint local_124;
  uint local_120;
  uint local_11c;
  uint local_118;
  uint local_114;
  uint local_110;
  uint local_10c;
  uint local_108;
  uint local_104;
  uint local_100;
  uint local_fc;
  uint local_f8;
  uint local_f4;
  uint local_f0;
  uint local_ec;
  uint local_e8;
  uint local_e4;
  uint local_e0;
  uint local_dc;
  uint local_d8;
  uint local_d4;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  long local_40;
  
  bVar35 = 0;
  uVar34 = param_5 * 4;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar15 = RAND_bytes_ex(*(undefined8 *)(param_1 + 0xb8),&local_568,param_5 << 6,0);
  local_810 = 0;
  if (iVar15 < 1) goto LAB_00101805;
  bVar19 = (char)param_5 + 1;
  local_824 = param_4 >> (bVar19 & 0x1f);
  local_808 = (param_4 + local_824) - (local_824 << (bVar19 & 0x1f));
  if ((local_824 < local_808) && ((local_808 + 0x16 & 0x3f) < uVar34 - 1)) {
    local_824 = local_824 + 1;
    local_808 = local_808 + param_5 * -4 + 1;
  }
  local_7a8 = param_3;
  uStack_688 = CONCAT44(uStack_55c,uStack_560);
  local_6a8[0] = param_3;
  local_6a8[1] = (ulong *)(param_2 + 0x15);
  *(ulong *)(param_2 + 5) = local_568;
  *(undefined8 *)(param_2 + 0xd) = uStack_688;
  local_690 = local_568;
  uVar20 = local_808;
  if (local_824 <= local_808) {
    uVar20 = local_824;
  }
  uVar20 = uVar20 - 0x33;
  if ((int)uVar34 < 2) {
    local_568 = *(ulong *)(param_1 + 0x300);
    sha256_multi_block(&local_160,&local_728,0);
    if (0x83f < uVar20) goto LAB_00101372;
    sha256_multi_block(&local_160,&local_7a8,0);
    puVar27 = &local_568;
    for (lVar16 = 0x80; lVar16 != 0; lVar16 = lVar16 + -1) {
      *puVar27 = 0;
      puVar27 = puVar27 + (ulong)bVar35 * -2 + 1;
    }
LAB_001022ff:
    sha256_multi_block(&local_160,&local_728,0);
    puVar27 = &local_568;
    for (lVar16 = 0x80; lVar16 != 0; lVar16 = lVar16 + -1) {
      *puVar27 = 0;
      puVar27 = puVar27 + (ulong)bVar35 * -2 + 1;
    }
    sha256_multi_block(&local_160,&local_728,0);
    local_810 = 0;
  }
  else {
    puVar25 = &local_668;
    ppuVar22 = &local_7a8;
    puVar27 = &local_558;
    do {
      uVar29 = *puVar27;
      uVar30 = puVar27[1];
      uVar21 = (long)puVar25 - (long)local_6a8;
      ppuVar22[2] = (ulong *)((long)*ppuVar22 + (ulong)local_824);
      puVar25[-3] = (ulong *)((long)*ppuVar22 + (ulong)local_824);
      lVar16 = puVar25[-7] + (ulong)((local_824 + 0x30 & 0xfffffff0) + 0x15);
      puVar25[-2] = lVar16;
      *(ulong *)(lVar16 + -0x10) = uVar29;
      *(ulong *)(lVar16 + -8) = uVar30;
      if (uVar21 < 0x140) {
        uVar21 = 0x140;
      }
      puVar23 = puVar27 + 2;
      ppuVar22 = ppuVar22 + 2;
      lVar16 = __memcpy_chk(puVar25,puVar27,0x10,(long)local_6a8 + (uVar21 - (long)puVar25));
      puVar25 = (undefined8 *)(lVar16 + 0x28);
      puVar27 = puVar23;
    } while (puVar23 != &local_568 + (ulong)uVar34 * 2);
    uVar32 = *(uint *)(param_1 + 0x2e8);
    local_568 = *(ulong *)(param_1 + 0x300);
    uVar31 = *(uint *)(param_1 + 0x2d8);
    uVar28 = *(uint *)(param_1 + 0x2ec);
    uVar3 = *(uint *)(param_1 + 0x2f4);
    uVar4 = *(uint *)(param_1 + 0x2dc);
    uVar5 = *(uint *)(param_1 + 0x2f0);
    uVar6 = *(uint *)(param_1 + 0x2e0);
    uVar33 = *(uint *)(param_1 + 0x2e4);
    bVar19 = *(byte *)(param_1 + 0x30a);
    bVar1 = *(byte *)(param_1 + 0x309);
    bVar2 = *(byte *)(param_1 + 0x308);
    uVar29 = local_568 >> 0x38;
    uVar30 = local_568 & 0xff000000000000;
    uVar21 = local_568 & 0xff0000000000;
    uVar8 = local_568 & 0xff00000000;
    uVar9 = local_568 & 0xff000000;
    uVar10 = local_568 & 0xff0000;
    uVar11 = local_568 & 0xff00;
    uVar12 = local_568 << 0x38;
    puVar17 = &local_160;
    puVar27 = &local_568;
    ppuVar22 = &local_7a8;
    lVar16 = 0;
    do {
      puVar17[0x10] = uVar6;
      uVar13 = local_808;
      if (uVar34 - 1 != (int)lVar16) {
        uVar13 = local_824;
      }
      puVar17[0x18] = uVar33;
      *puVar17 = uVar31;
      *(char *)((long)puVar27 + 0xc) = (char)uVar13;
      puVar17[8] = uVar4;
      puVar17[0x38] = uVar3;
      puVar17[0x20] = uVar32;
      puVar17[0x28] = uVar28;
      puVar17[0x30] = uVar5;
      uVar24 = (uVar29 | uVar30 >> 0x28 | uVar21 >> 0x18 | uVar8 >> 8 | uVar9 << 8 | uVar10 << 0x18
                | uVar11 << 0x28 | uVar12) + lVar16;
      *puVar27 = uVar24 >> 0x38 | (uVar24 & 0xff000000000000) >> 0x28 |
                 (uVar24 & 0xff0000000000) >> 0x18 | (uVar24 & 0xff00000000) >> 8 |
                 (uVar24 & 0xff000000) << 8 | (uVar24 & 0xff0000) << 0x18 |
                 (uVar24 & 0xff00) << 0x28 | uVar24 << 0x38;
      *(uint *)(puVar27 + 1) =
           ((uVar13 & 0xff00 | (uint)bVar19) << 8 | (uint)bVar1) << 8 | (uint)bVar2;
      puVar23 = *ppuVar22;
      uVar24 = puVar23[1];
      *(ulong *)((long)puVar27 + 0xd) = *puVar23;
      *(ulong *)((long)puVar27 + 0x15) = uVar24;
      uVar24 = puVar23[3];
      *(ulong *)((long)puVar27 + 0x1d) = puVar23[2];
      *(ulong *)((long)puVar27 + 0x25) = uVar24;
      uVar24 = puVar23[5];
      *(ulong *)((long)puVar27 + 0x2d) = puVar23[4];
      *(ulong *)((long)puVar27 + 0x35) = uVar24;
      uVar7 = *(undefined4 *)((long)puVar23 + 0x2f);
      *(uint *)(ppuVar22 + 1) = uVar13 - 0x33 >> 6;
      lVar26 = lVar16 + 1;
      *(undefined4 *)((long)puVar27 + 0x3c) = uVar7;
      (&local_728)[lVar16 * 2] = puVar27;
      puVar27 = puVar27 + 0x10;
      *ppuVar22 = (ulong *)((long)puVar23 + 0x33);
      local_720[lVar16 * 4] = 1;
      puVar17 = puVar17 + 1;
      ppuVar22 = ppuVar22 + 2;
      lVar16 = lVar26;
    } while ((uint)lVar26 < uVar34);
    sha256_multi_block(&local_160,&local_728,param_5);
    if (uVar20 < 0x840) {
      sha256_multi_block(&local_160,&local_7a8,param_5);
      local_804 = 0;
      puVar27 = &local_568;
      for (lVar16 = 0x80; lVar16 != 0; lVar16 = lVar16 + -1) {
        *puVar27 = 0;
        puVar27 = puVar27 + (ulong)bVar35 * -2 + 1;
      }
    }
    else {
      local_720[0] = 0x20;
      local_698 = 0x80;
      local_728 = local_7a8;
      local_710 = 0x20;
      local_718 = (uint *)local_798;
      local_670 = 0x80;
      local_708 = local_788;
      local_700 = 0x20;
      local_648 = 0x80;
      local_6f8 = local_778;
      local_6f0 = 0x20;
      local_620 = 0x80;
      if (uVar34 != 4) {
        local_6e0 = 0x20;
        local_5f8 = 0x80;
        local_6e8 = local_768;
        local_6d0 = 0x20;
        local_6d8 = local_758;
        local_5d0 = 0x80;
        local_6c8 = local_748;
        local_6c0 = 0x20;
        local_5a8 = 0x80;
        if (uVar34 == 8) {
          local_6b0 = 0x20;
          local_580 = 0x80;
          local_6b8 = local_738;
        }
      }
LAB_00101372:
      local_7c8 = local_6a8;
      local_800 = &local_7a8;
      uVar32 = uVar20 >> 6;
      do {
        sha256_multi_block(&local_160,&local_728,param_5);
        aesni_multi_cbc_encrypt(local_7c8,param_1 + 0xc0,param_5);
        if (param_5 != 0) {
          local_7a0[0] = local_7a0[0] + -0x20;
          local_790 = local_790 + -0x20;
          local_7a8 = local_7a8 + 0x100;
          local_720[0] = 0x20;
          local_6a8[0] = (ulong *)((long)local_6a8[0] + __LC0);
          puVar36 = (undefined1 *)((long)local_6a8[1] + _UNK_00102848);
          local_690 = *(ulong *)((long)local_6a8[1] + 0x7f0);
          uStack_688 = *(undefined8 *)((long)local_6a8[1] + 0x7f8);
          local_698 = 0x80;
          local_798 = (ulong *)((long)local_798 + 0x800);
          local_680 = local_680 + __LC0;
          lVar16 = lStack_678 + _UNK_00102848;
          local_710 = 0x20;
          local_668 = *(undefined8 *)(lStack_678 + 0x7f0);
          uStack_660 = *(undefined8 *)(lStack_678 + 0x7f8);
          local_670 = 0x80;
          local_728 = local_7a8;
          local_718 = (uint *)local_798;
          local_6a8[1] = (ulong *)puVar36;
          lStack_678 = lVar16;
          if (2 < (int)uVar34) {
            local_780 = local_780 + -0x20;
            local_770 = local_770 + -0x20;
            local_788 = local_788 + 0x200;
            local_700 = 0x20;
            local_658 = local_658 + __LC0;
            lVar16 = lStack_650 + _UNK_00102848;
            local_640 = *(undefined8 *)(lStack_650 + 0x7f0);
            uStack_638 = *(undefined8 *)(lStack_650 + 0x7f8);
            local_648 = 0x80;
            local_778 = local_778 + 0x200;
            local_630 = local_630 + __LC0;
            lVar26 = lStack_628 + _UNK_00102848;
            local_6f0 = 0x20;
            local_618 = *(undefined8 *)(lStack_628 + 0x7f0);
            uStack_610 = *(undefined8 *)(lStack_628 + 0x7f8);
            local_620 = 0x80;
            local_708 = local_788;
            local_6f8 = local_778;
            lStack_650 = lVar16;
            lStack_628 = lVar26;
            if (uVar34 != 4) {
              local_760 = local_760 + -0x20;
              local_750 = local_750 + -0x20;
              local_768 = local_768 + 0x200;
              local_740 = local_740 + -0x20;
              local_608 = local_608 + __LC0;
              local_5f0 = *(undefined8 *)(lStack_600 + 0x7f0);
              uStack_5e8 = *(undefined8 *)(lStack_600 + 0x7f8);
              local_6e0 = 0x20;
              local_758 = local_758 + 0x200;
              local_5e0 = local_5e0 + __LC0;
              local_5c8 = *(undefined8 *)(lStack_5d8 + 0x7f0);
              uStack_5c0 = *(undefined8 *)(lStack_5d8 + 0x7f8);
              local_5f8 = 0x80;
              local_5b8 = local_5b8 + __LC0;
              local_748 = local_748 + 0x200;
              local_5a0 = *(undefined8 *)(lStack_5b0 + 0x7f0);
              uStack_598 = *(undefined8 *)(lStack_5b0 + 0x7f8);
              local_6d0 = 0x20;
              local_5d0 = 0x80;
              local_6c0 = 0x20;
              local_5a8 = 0x80;
              local_730 = local_730 + -0x20;
              local_738 = local_738 + 0x200;
              local_6b0 = 0x20;
              local_590 = local_590 + __LC0;
              local_578 = *(undefined8 *)(lStack_588 + 0x7f0);
              uStack_570 = *(undefined8 *)(lStack_588 + 0x7f8);
              local_580 = 0x80;
              local_6e8 = local_768;
              local_6d8 = local_758;
              local_6c8 = local_748;
              local_6b8 = local_738;
              lStack_600 = lStack_600 + _UNK_00102848;
              lStack_5d8 = lStack_5d8 + _UNK_00102848;
              lStack_5b0 = lStack_5b0 + _UNK_00102848;
              lStack_588 = lStack_588 + _UNK_00102848;
            }
          }
        }
        uVar32 = uVar32 - 0x20;
      } while (0x20 < uVar32);
      local_804 = (((uVar20 >> 6) - 0x21 >> 5) + 1) * 0x800;
      sha256_multi_block(&local_160,local_800,param_5);
      puVar27 = &local_568;
      for (lVar16 = 0x80; lVar16 != 0; lVar16 = lVar16 + -1) {
        *puVar27 = 0;
        puVar27 = puVar27 + (ulong)bVar35 * -2 + 1;
      }
      if (param_5 == 0) goto LAB_001022ff;
    }
    local_7c8 = local_6a8;
    uVar32 = 0;
    lVar16 = 0;
    puVar27 = &local_568;
    uVar20 = local_824;
    while( true ) {
      uVar31 = uVar20 + (-0x33 - local_804) + *(int *)((long)local_7a0 + lVar16) * -0x40;
      lVar26 = __memcpy_chk(puVar27,(ulong)(uint)(*(int *)((long)local_7a0 + lVar16) * 0x40) +
                                    *(long *)((long)local_7a0 + lVar16 + -8),(ulong)uVar31,
                            lVar16 * -8 + 0x400);
      *(undefined1 *)((long)&local_568 + (ulong)uVar31 + (ulong)uVar32 * 0x80) = 0x80;
      uVar20 = uVar20 * 8 + 0x268;
      uVar20 = uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 | (uVar20 & 0xff00) << 8 |
               uVar20 * 0x1000000;
      if (uVar31 < 0x38) {
        *(uint *)(lVar26 + 0x3c) = uVar20;
        *(undefined4 *)((long)local_720 + lVar16) = 1;
        *(long *)((long)&local_728 + lVar16) = lVar26;
      }
      else {
        *(uint *)(lVar26 + 0x7c) = uVar20;
        *(undefined4 *)((long)local_720 + lVar16) = 2;
        *(long *)((long)&local_728 + lVar16) = lVar26;
      }
      if (uVar32 + 1 == uVar34) break;
      uVar32 = uVar32 + 1;
      puVar27 = (ulong *)(lVar26 + 0x80);
      lVar16 = lVar16 + 0x10;
      uVar20 = local_824;
      if (uVar32 == uVar34 - 1) {
        uVar20 = local_808;
      }
    }
    sha256_multi_block(&local_160,&local_728,param_5);
    puVar27 = &local_568;
    for (lVar16 = 0x80; lVar16 != 0; lVar16 = lVar16 + -1) {
      *puVar27 = 0;
      puVar27 = puVar27 + (ulong)bVar35 * -2 + 1;
    }
    uVar20 = *(uint *)(param_1 + 0x268);
    uVar32 = *(uint *)(param_1 + 0x26c);
    uVar31 = *(uint *)(param_1 + 0x270);
    uVar28 = *(uint *)(param_1 + 0x274);
    uVar3 = *(uint *)(param_1 + 0x278);
    uVar4 = *(uint *)(param_1 + 0x27c);
    uVar5 = *(uint *)(param_1 + 0x280);
    uVar6 = *(uint *)(param_1 + 0x284);
    local_568 = CONCAT44(local_140 >> 0x18 | (local_140 & 0xff0000) >> 8 | (local_140 & 0xff00) << 8
                         | local_140 << 0x18,
                         local_160 >> 0x18 | (local_160 & 0xff0000) >> 8 | (local_160 & 0xff00) << 8
                         | local_160 << 0x18);
    uStack_560 = local_120 >> 0x18 | (local_120 & 0xff0000) >> 8 | (local_120 & 0xff00) << 8 |
                 local_120 << 0x18;
    uStack_55c = local_100 >> 0x18 | (local_100 & 0xff0000) >> 8 | (local_100 & 0xff00) << 8 |
                 local_100 << 0x18;
    local_558._0_4_ =
         local_e0 >> 0x18 | (local_e0 & 0xff0000) >> 8 | (local_e0 & 0xff00) << 8 | local_e0 << 0x18
    ;
    local_558._4_4_ =
         local_c0 >> 0x18 | (local_c0 & 0xff0000) >> 8 | (local_c0 & 0xff00) << 8 | local_c0 << 0x18
    ;
    uStack_550 = local_a0 >> 0x18 | (local_a0 & 0xff0000) >> 8 | (local_a0 & 0xff00) << 8 |
                 local_a0 << 0x18;
    uStack_54c = local_80 >> 0x18 | (local_80 & 0xff0000) >> 8 | (local_80 & 0xff00) << 8 |
                 local_80 << 0x18;
    local_4e8 = local_15c >> 0x18 | (local_15c & 0xff0000) >> 8 | (local_15c & 0xff00) << 8 |
                local_15c << 0x18;
    local_4e4 = local_13c >> 0x18 | (local_13c & 0xff0000) >> 8 | (local_13c & 0xff00) << 8 |
                local_13c << 0x18;
    local_4e0 = local_11c >> 0x18 | (local_11c & 0xff0000) >> 8 | (local_11c & 0xff00) << 8 |
                local_11c << 0x18;
    local_4dc = local_fc >> 0x18 | (local_fc & 0xff0000) >> 8 | (local_fc & 0xff00) << 8 |
                local_fc << 0x18;
    local_4d8 = local_dc >> 0x18 | (local_dc & 0xff0000) >> 8 | (local_dc & 0xff00) << 8 |
                local_dc << 0x18;
    local_4d4 = local_bc >> 0x18 | (local_bc & 0xff0000) >> 8 | (local_bc & 0xff00) << 8 |
                local_bc << 0x18;
    local_4d0 = local_9c >> 0x18 | (local_9c & 0xff0000) >> 8 | (local_9c & 0xff00) << 8 |
                local_9c << 0x18;
    local_4cc = local_7c >> 0x18 | (local_7c & 0xff0000) >> 8 | (local_7c & 0xff00) << 8 |
                local_7c << 0x18;
    local_548 = 0x80;
    uStack_52c = 0x30000;
    local_4c8 = 0x80;
    local_4ac = 0x30000;
    if (2 < (int)uVar34) {
      local_448 = 0x80;
      local_468 = local_158 >> 0x18 | (local_158 & 0xff0000) >> 8 | (local_158 & 0xff00) << 8 |
                  local_158 << 0x18;
      local_42c = 0x30000;
      local_464 = local_138 >> 0x18 | (local_138 & 0xff0000) >> 8 | (local_138 & 0xff00) << 8 |
                  local_138 << 0x18;
      local_460 = local_118 >> 0x18 | (local_118 & 0xff0000) >> 8 | (local_118 & 0xff00) << 8 |
                  local_118 << 0x18;
      local_45c = local_f8 >> 0x18 | (local_f8 & 0xff0000) >> 8 | (local_f8 & 0xff00) << 8 |
                  local_f8 << 0x18;
      local_458 = local_d8 >> 0x18 | (local_d8 & 0xff0000) >> 8 | (local_d8 & 0xff00) << 8 |
                  local_d8 << 0x18;
      local_454 = local_b8 >> 0x18 | (local_b8 & 0xff0000) >> 8 | (local_b8 & 0xff00) << 8 |
                  local_b8 << 0x18;
      local_450 = local_98 >> 0x18 | (local_98 & 0xff0000) >> 8 | (local_98 & 0xff00) << 8 |
                  local_98 << 0x18;
      local_44c = local_78 >> 0x18 | (local_78 & 0xff0000) >> 8 | (local_78 & 0xff00) << 8 |
                  local_78 << 0x18;
      local_3e8 = local_154 >> 0x18 | (local_154 & 0xff0000) >> 8 | (local_154 & 0xff00) << 8 |
                  local_154 << 0x18;
      local_3e4 = local_134 >> 0x18 | (local_134 & 0xff0000) >> 8 | (local_134 & 0xff00) << 8 |
                  local_134 << 0x18;
      local_3e0 = local_114 >> 0x18 | (local_114 & 0xff0000) >> 8 | (local_114 & 0xff00) << 8 |
                  local_114 << 0x18;
      local_3dc = local_f4 >> 0x18 | (local_f4 & 0xff0000) >> 8 | (local_f4 & 0xff00) << 8 |
                  local_f4 << 0x18;
      local_3d8 = local_d4 >> 0x18 | (local_d4 & 0xff0000) >> 8 | (local_d4 & 0xff00) << 8 |
                  local_d4 << 0x18;
      local_3d4 = local_b4 >> 0x18 | (local_b4 & 0xff0000) >> 8 | (local_b4 & 0xff00) << 8 |
                  local_b4 << 0x18;
      local_3d0 = local_94 >> 0x18 | (local_94 & 0xff0000) >> 8 | (local_94 & 0xff00) << 8 |
                  local_94 << 0x18;
      local_3cc = local_74 >> 0x18 | (local_74 & 0xff0000) >> 8 | (local_74 & 0xff00) << 8 |
                  local_74 << 0x18;
      local_3c8 = 0x80;
      local_3ac = 0x30000;
      local_158 = uVar20;
      local_154 = uVar20;
      local_138 = uVar32;
      local_134 = uVar32;
      local_118 = uVar31;
      local_114 = uVar31;
      local_f8 = uVar28;
      local_f4 = uVar28;
      local_d8 = uVar3;
      local_d4 = uVar3;
      local_b8 = uVar4;
      local_b4 = uVar4;
      local_98 = uVar5;
      local_94 = uVar5;
      local_78 = uVar6;
      local_74 = uVar6;
      if (uVar34 == 4) {
        local_710 = 1;
        local_718 = &local_4e8;
        local_708 = &local_468;
        local_6f8 = &local_3e8;
        local_700 = 1;
        local_6f0 = 1;
      }
      else {
        local_348 = 0x80;
        local_368 = local_150 >> 0x18 | (local_150 & 0xff0000) >> 8 | (local_150 & 0xff00) << 8 |
                    local_150 << 0x18;
        local_32c = 0x30000;
        local_364 = local_130 >> 0x18 | (local_130 & 0xff0000) >> 8 | (local_130 & 0xff00) << 8 |
                    local_130 << 0x18;
        local_360 = local_110 >> 0x18 | (local_110 & 0xff0000) >> 8 | (local_110 & 0xff00) << 8 |
                    local_110 << 0x18;
        local_35c = local_f0 >> 0x18 | (local_f0 & 0xff0000) >> 8 | (local_f0 & 0xff00) << 8 |
                    local_f0 << 0x18;
        local_358 = local_d0 >> 0x18 | (local_d0 & 0xff0000) >> 8 | (local_d0 & 0xff00) << 8 |
                    local_d0 << 0x18;
        local_354 = local_b0 >> 0x18 | (local_b0 & 0xff0000) >> 8 | (local_b0 & 0xff00) << 8 |
                    local_b0 << 0x18;
        local_350 = local_90 >> 0x18 | (local_90 & 0xff0000) >> 8 | (local_90 & 0xff00) << 8 |
                    local_90 << 0x18;
        local_34c = local_70 >> 0x18 | (local_70 & 0xff0000) >> 8 | (local_70 & 0xff00) << 8 |
                    local_70 << 0x18;
        local_2e8 = local_14c >> 0x18 | (local_14c & 0xff0000) >> 8 | (local_14c & 0xff00) << 8 |
                    local_14c << 0x18;
        local_2e4 = local_12c >> 0x18 | (local_12c & 0xff0000) >> 8 | (local_12c & 0xff00) << 8 |
                    local_12c << 0x18;
        local_2e0 = local_10c >> 0x18 | (local_10c & 0xff0000) >> 8 | (local_10c & 0xff00) << 8 |
                    local_10c << 0x18;
        local_2c8 = 0x80;
        local_2ac = 0x30000;
        local_2dc = local_ec >> 0x18 | (local_ec & 0xff0000) >> 8 | (local_ec & 0xff00) << 8 |
                    local_ec << 0x18;
        local_2d8 = local_cc >> 0x18 | (local_cc & 0xff0000) >> 8 | (local_cc & 0xff00) << 8 |
                    local_cc << 0x18;
        local_2d4 = local_ac >> 0x18 | (local_ac & 0xff0000) >> 8 | (local_ac & 0xff00) << 8 |
                    local_ac << 0x18;
        local_2d0 = local_8c >> 0x18 | (local_8c & 0xff0000) >> 8 | (local_8c & 0xff00) << 8 |
                    local_8c << 0x18;
        local_2cc = local_6c >> 0x18 | (local_6c & 0xff0000) >> 8 | (local_6c & 0xff00) << 8 |
                    local_6c << 0x18;
        local_268 = local_148 >> 0x18 | (local_148 & 0xff0000) >> 8 | (local_148 & 0xff00) << 8 |
                    local_148 << 0x18;
        local_264 = local_128 >> 0x18 | (local_128 & 0xff0000) >> 8 | (local_128 & 0xff00) << 8 |
                    local_128 << 0x18;
        local_260 = local_108 >> 0x18 | (local_108 & 0xff0000) >> 8 | (local_108 & 0xff00) << 8 |
                    local_108 << 0x18;
        local_25c = local_e8 >> 0x18 | (local_e8 & 0xff0000) >> 8 | (local_e8 & 0xff00) << 8 |
                    local_e8 << 0x18;
        local_258 = local_c8 >> 0x18 | (local_c8 & 0xff0000) >> 8 | (local_c8 & 0xff00) << 8 |
                    local_c8 << 0x18;
        local_254 = local_a8 >> 0x18 | (local_a8 & 0xff0000) >> 8 | (local_a8 & 0xff00) << 8 |
                    local_a8 << 0x18;
        local_250 = local_88 >> 0x18 | (local_88 & 0xff0000) >> 8 | (local_88 & 0xff00) << 8 |
                    local_88 << 0x18;
        local_24c = local_68 >> 0x18 | (local_68 & 0xff0000) >> 8 | (local_68 & 0xff00) << 8 |
                    local_68 << 0x18;
        local_248 = 0x80;
        local_22c = 0x30000;
        local_150 = uVar20;
        local_14c = uVar20;
        local_148 = uVar20;
        local_130 = uVar32;
        local_12c = uVar32;
        local_128 = uVar32;
        local_110 = uVar31;
        local_10c = uVar31;
        local_108 = uVar31;
        local_f0 = uVar28;
        local_ec = uVar28;
        local_e8 = uVar28;
        local_d0 = uVar3;
        local_cc = uVar3;
        local_c8 = uVar3;
        local_b0 = uVar4;
        local_ac = uVar4;
        local_a8 = uVar4;
        local_90 = uVar5;
        local_8c = uVar5;
        local_88 = uVar5;
        local_70 = uVar6;
        local_6c = uVar6;
        local_68 = uVar6;
        if (uVar34 == 8) {
          local_1ac = 0x30000;
          local_1c8 = 0x80;
          local_710 = 1;
          local_1dc = local_e4 >> 0x18 | (local_e4 & 0xff0000) >> 8 | (local_e4 & 0xff00) << 8 |
                      local_e4 << 0x18;
          local_700 = 1;
          local_1d8 = local_c4 >> 0x18 | (local_c4 & 0xff0000) >> 8 | (local_c4 & 0xff00) << 8 |
                      local_c4 << 0x18;
          local_6f0 = 1;
          local_1d4 = local_a4 >> 0x18 | (local_a4 & 0xff0000) >> 8 | (local_a4 & 0xff00) << 8 |
                      local_a4 << 0x18;
          local_6e0 = 1;
          local_1d0 = local_84 >> 0x18 | (local_84 & 0xff0000) >> 8 | (local_84 & 0xff00) << 8 |
                      local_84 << 0x18;
          local_6d0 = 1;
          local_1e8 = local_144 >> 0x18 | (local_144 & 0xff0000) >> 8 | (local_144 & 0xff00) << 8 |
                      local_144 << 0x18;
          local_1e4 = local_124 >> 0x18 | (local_124 & 0xff0000) >> 8 | (local_124 & 0xff00) << 8 |
                      local_124 << 0x18;
          local_1e0 = local_104 >> 0x18 | (local_104 & 0xff0000) >> 8 | (local_104 & 0xff00) << 8 |
                      local_104 << 0x18;
          local_1cc = local_64 >> 0x18 | (local_64 & 0xff0000) >> 8 | (local_64 & 0xff00) << 8 |
                      local_64 << 0x18;
          local_6c0 = 1;
          local_6b0 = 1;
          local_718 = &local_4e8;
          local_708 = &local_468;
          local_6f8 = &local_3e8;
          local_6e8 = &local_368;
          local_6d8 = &local_2e8;
          local_6c8 = &local_268;
          local_6b8 = &local_1e8;
          local_144 = uVar20;
          local_124 = uVar32;
          local_104 = uVar31;
          local_e4 = uVar28;
          local_c4 = uVar3;
          local_a4 = uVar4;
          local_84 = uVar5;
          local_64 = uVar6;
        }
        else {
          local_710 = 1;
          local_718 = &local_4e8;
          local_708 = &local_468;
          local_6f8 = &local_3e8;
          local_6e8 = &local_368;
          local_700 = 1;
          local_6f0 = 1;
          local_6e0 = 1;
        }
      }
    }
    local_720[0] = 1;
    uVar33 = 0;
    local_728 = &local_568;
    local_160 = uVar20;
    local_15c = uVar20;
    local_140 = uVar32;
    local_13c = uVar32;
    local_120 = uVar31;
    local_11c = uVar31;
    local_100 = uVar28;
    local_fc = uVar28;
    local_e0 = uVar3;
    local_dc = uVar3;
    local_c0 = uVar4;
    local_bc = uVar4;
    local_a0 = uVar5;
    local_9c = uVar5;
    local_80 = uVar6;
    local_7c = uVar6;
    sha256_multi_block(&local_160,&local_728,param_5);
    local_810 = 0;
    puVar17 = &local_160;
    uVar20 = local_824;
    while( true ) {
      memcpy(local_7c8[1],*local_7c8,(ulong)(uVar20 - local_804));
      uVar32 = *puVar17;
      *local_7c8 = local_7c8[1];
      puVar18 = (uint *)(param_2 + (uVar20 + 0x15));
      *puVar18 = uVar32 >> 0x18 | (uVar32 & 0xff0000) >> 8 | (uVar32 & 0xff00) << 8 | uVar32 << 0x18
      ;
      uVar32 = puVar17[8];
      puVar18[1] = uVar32 >> 0x18 | (uVar32 & 0xff0000) >> 8 | (uVar32 & 0xff00) << 8 |
                   uVar32 << 0x18;
      uVar32 = puVar17[0x10];
      puVar18[2] = uVar32 >> 0x18 | (uVar32 & 0xff0000) >> 8 | (uVar32 & 0xff00) << 8 |
                   uVar32 << 0x18;
      uVar32 = puVar17[0x18];
      puVar18[3] = uVar32 >> 0x18 | (uVar32 & 0xff0000) >> 8 | (uVar32 & 0xff00) << 8 |
                   uVar32 << 0x18;
      uVar32 = puVar17[0x20];
      puVar18[4] = uVar32 >> 0x18 | (uVar32 & 0xff0000) >> 8 | (uVar32 & 0xff00) << 8 |
                   uVar32 << 0x18;
      uVar32 = puVar17[0x28];
      puVar18[5] = uVar32 >> 0x18 | (uVar32 & 0xff0000) >> 8 | (uVar32 & 0xff00) << 8 |
                   uVar32 << 0x18;
      uVar32 = puVar17[0x30];
      puVar18[6] = uVar32 >> 0x18 | (uVar32 & 0xff0000) >> 8 | (uVar32 & 0xff00) << 8 |
                   uVar32 << 0x18;
      uVar32 = puVar17[0x38];
      puVar18[7] = uVar32 >> 0x18 | (uVar32 & 0xff0000) >> 8 | (uVar32 & 0xff00) << 8 |
                   uVar32 << 0x18;
      uVar31 = ~(uVar20 + 0x20) & 0xf;
      uVar32 = uVar31 + 1;
      uVar29 = (ulong)uVar32;
      lVar16 = (ulong)uVar31 * 0x101010101010101;
      if (uVar32 < 8) {
        if ((uVar32 & 4) == 0) {
          if ((uVar32 != 0) && (*(char *)(puVar18 + 8) = (char)lVar16, (uVar32 & 2) != 0)) {
            *(short *)((long)puVar18 + uVar29 + 0x1e) = (short)lVar16;
          }
        }
        else {
          puVar18[8] = (uint)lVar16;
          *(uint *)((long)puVar18 + uVar29 + 0x1c) = (uint)lVar16;
        }
      }
      else {
        *(long *)(puVar18 + 8) = lVar16;
        *(long *)((long)puVar18 + uVar29 + 0x18) = lVar16;
        uVar32 = uVar32 + ((int)(puVar18 + 8) - (int)((ulong)(puVar18 + 10) & 0xfffffffffffffff8)) &
                 0xfffffff8;
        if (7 < uVar32) {
          uVar28 = 0;
          do {
            uVar30 = (ulong)uVar28;
            uVar28 = uVar28 + 8;
            *(long *)(((ulong)(puVar18 + 10) & 0xfffffffffffffff8) + uVar30) = lVar16;
          } while (uVar28 < uVar32);
        }
      }
      iVar15 = uVar31 + uVar20 + 0x20;
      puVar36 = (undefined1 *)(uVar29 + (long)(puVar18 + 8));
      uVar33 = uVar33 + 1;
      ppuVar22 = local_7c8 + 5;
      puVar17 = puVar17 + 1;
      *(uint *)(local_7c8 + 2) = (uint)((1 - local_804) + iVar15) >> 4;
      *param_2 = *(undefined1 *)(param_1 + 0x308);
      param_2[1] = *(undefined1 *)(param_1 + 0x309);
      param_2[2] = *(undefined1 *)(param_1 + 0x30a);
      uVar14 = (short)iVar15 + 0x11;
      *(ushort *)(param_2 + 3) = uVar14 * 0x100 | uVar14 >> 8;
      local_810 = local_810 + (ulong)(iVar15 + 0x16);
      if (uVar34 == uVar33) break;
      param_2 = puVar36;
      local_7c8 = ppuVar22;
      uVar20 = local_808;
      if (uVar33 != uVar34 - 1) {
        uVar20 = local_824;
      }
    }
  }
  local_7c8 = local_6a8;
  local_7f0 = param_1 + 0xc0;
  aesni_multi_cbc_encrypt(local_7c8,local_7f0,param_5);
  OPENSSL_cleanse(&local_568,0x400);
  OPENSSL_cleanse(&local_160,0x100);
  *(long *)(param_1 + 0x1e8) = local_810;
LAB_00101805:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_810;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
  size_t __n;
  char *__src;
  char *pcVar1;
  long in_FS_OFFSET;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  long lStack_38;
  
  if (*(long *)(param_1 + 0x1e0) != 0) {
    return ((int)*(long *)(param_1 + 0x1e0) + 0x30U & 0xfffffff0) + 0x15;
  }
  __src = "providers/implementations/ciphers/cipher_aes_cbc_hmac_sha256_hw.c";
  pcVar1 = "assertion failed: ctx->multiblock_max_send_fragment != 0";
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
    c = (SHA256_CTX *)(pcVar1 + 0x1f8);
    SHA256_Init(c);
    sha256_update(c,__src,__n);
    SHA256_Final(auStack_80,c);
  }
  auStack_80._0_8_ = auStack_80._0_8_ ^ __LC3;
  auStack_80._8_8_ = auStack_80._8_8_ ^ _UNK_00102858;
  auStack_70._0_8_ = auStack_70._0_8_ ^ __LC3;
  auStack_70._8_8_ = auStack_70._8_8_ ^ _UNK_00102858;
  auStack_60._0_8_ = auStack_60._0_8_ ^ __LC3;
  auStack_60._8_8_ = auStack_60._8_8_ ^ _UNK_00102858;
  auStack_50._0_8_ = __LC3 ^ auStack_50._0_8_;
  auStack_50._8_8_ = _UNK_00102858 ^ auStack_50._8_8_;
  SHA256_Init((SHA256_CTX *)(pcVar1 + 0x1f8));
  sha256_update((SHA256_CTX *)(pcVar1 + 0x1f8),auStack_80,0x40);
  auStack_80._8_8_ = auStack_80._8_8_ ^ _UNK_00102868;
  auStack_80._0_8_ = auStack_80._0_8_ ^ __LC4;
  auStack_70._8_8_ = auStack_70._8_8_ ^ _UNK_00102868;
  auStack_70._0_8_ = auStack_70._0_8_ ^ __LC4;
  auStack_60._8_8_ = auStack_60._8_8_ ^ _UNK_00102868;
  auStack_60._0_8_ = auStack_60._0_8_ ^ __LC4;
  auStack_50._8_8_ = _UNK_00102868 ^ auStack_50._8_8_;
  auStack_50._0_8_ = __LC4 ^ auStack_50._0_8_;
  SHA256_Init((SHA256_CTX *)(pcVar1 + 0x268));
  sha256_update((SHA256_CTX *)(pcVar1 + 0x268),auStack_80,0x40);
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
  long in_FS_OFFSET;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
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
  local_78._0_8_ = local_78._0_8_ ^ __LC3;
  local_78._8_8_ = local_78._8_8_ ^ _UNK_00102858;
  local_68._0_8_ = local_68._0_8_ ^ __LC3;
  local_68._8_8_ = local_68._8_8_ ^ _UNK_00102858;
  local_58._0_8_ = local_58._0_8_ ^ __LC3;
  local_58._8_8_ = local_58._8_8_ ^ _UNK_00102858;
  local_48._0_8_ = __LC3 ^ local_48._0_8_;
  local_48._8_8_ = _UNK_00102858 ^ local_48._8_8_;
  SHA256_Init((SHA256_CTX *)(param_1 + 0x1f8));
  sha256_update((SHA256_CTX *)(param_1 + 0x1f8),local_78,0x40);
  local_78._8_8_ = local_78._8_8_ ^ _UNK_00102868;
  local_78._0_8_ = local_78._0_8_ ^ __LC4;
  local_68._8_8_ = local_68._8_8_ ^ _UNK_00102868;
  local_68._0_8_ = local_68._0_8_ ^ __LC4;
  local_58._8_8_ = local_58._8_8_ ^ _UNK_00102868;
  local_58._0_8_ = local_58._0_8_ ^ __LC4;
  local_48._8_8_ = _UNK_00102868 ^ local_48._8_8_;
  local_48._0_8_ = __LC4 ^ local_48._0_8_;
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
  
  if ((DAT_00103017 & 2) == 0) {
    return false;
  }
  iVar1 = aesni_cbc_sha256_enc(0,0,0,0,0,0,0);
  return iVar1 != 0;
}



undefined1 * ossl_prov_cipher_hw_aes_cbc_hmac_sha256(void)

{
  return cipher_hw_aes_hmac_sha256;
}


