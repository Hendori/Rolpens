
void sha1_update(SHA_CTX *param_1,void *param_2,ulong param_3)

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
    SHA1_Update(param_1,param_2,len);
    uVar2 = (uint)(param_3 - len);
    param_3 = param_3 - len & 0xffffffffffffffc0;
    param_2 = (void *)((long)param_2 + len);
  }
  data = param_2;
  if (param_3 != 0) {
    data = (void *)((long)param_2 + param_3);
    sha1_block_data_order(param_1,param_2,param_3 >> 6);
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
    SHA1_Update(param_1,data,(ulong)(uVar2 & 0x3f));
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 aesni_cbc_hmac_sha1_tls1_multiblock_aad(long param_1,long param_2)

{
  long lVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  uint uVar7;
  byte bVar8;
  
  uVar6 = 0xffffffff;
  lVar1 = *(long *)(param_2 + 8);
  uVar2 = *(ushort *)(lVar1 + 0xb) << 8 | *(ushort *)(lVar1 + 0xb) >> 8;
  uVar7 = (uint)uVar2;
  uVar3 = *(uint *)(param_2 + 0x18);
  *(uint *)(param_1 + 0x1d8) = uVar3;
  if (((*(byte *)(param_1 + 0x6c) & 2) != 0) &&
     (0x301 < (ushort)(*(ushort *)(lVar1 + 9) << 8 | *(ushort *)(lVar1 + 9) >> 8))) {
    if (uVar2 == 0) {
      if (7 < uVar3 - 4) {
        return 0xffffffff;
      }
      uVar7 = *(uint *)(param_2 + 0x10);
      bVar8 = (char)(uVar3 >> 2) + 1;
      iVar5 = (uVar3 >> 2) * 4;
    }
    else {
      if (uVar2 < 0x1000) {
        return 0;
      }
      if (uVar2 < 0x2000) {
        iVar5 = 4;
        bVar8 = 2;
      }
      else {
        iVar5 = (-(uint)((_memcpy & 0x20) == 0) & 0xfffffffc) + 8;
        bVar8 = 3 - ((_memcpy & 0x20) == 0);
      }
    }
    *(undefined8 *)(param_1 + 0x2b8) = *(undefined8 *)(param_1 + 0x1f8);
    *(undefined8 *)(param_1 + 0x2c0) = *(undefined8 *)(param_1 + 0x200);
    *(undefined8 *)(param_1 + 0x2c8) = *(undefined8 *)(param_1 + 0x208);
    *(undefined8 *)(param_1 + 0x2d0) = *(undefined8 *)(param_1 + 0x210);
    *(undefined8 *)(param_1 + 0x2d8) = *(undefined8 *)(param_1 + 0x218);
    *(undefined8 *)(param_1 + 0x2e0) = *(undefined8 *)(param_1 + 0x220);
    *(undefined8 *)(param_1 + 0x2e8) = *(undefined8 *)(param_1 + 0x228);
    *(undefined8 *)(param_1 + 0x2f0) = *(undefined8 *)(param_1 + 0x230);
    *(undefined8 *)(param_1 + 0x2f8) = *(undefined8 *)(param_1 + 0x238);
    *(undefined8 *)(param_1 + 0x300) = *(undefined8 *)(param_1 + 0x240);
    *(undefined8 *)(param_1 + 0x308) = *(undefined8 *)(param_1 + 0x248);
    *(undefined8 *)(param_1 + 0x310) = *(undefined8 *)(param_1 + 0x250);
    sha1_update(param_1 + 0x2b8,lVar1,0xd);
    uVar4 = uVar7 >> (bVar8 & 0x1f);
    uVar3 = (uVar7 + uVar4) - (uVar4 << (bVar8 & 0x1f));
    if ((uVar4 < uVar3) && ((uVar3 + 0x16 & 0x3f) < iVar5 - 1U)) {
      uVar4 = uVar4 + 1;
      uVar3 = (uVar3 - iVar5) + 1;
    }
    *(int *)(param_2 + 0x18) = iVar5;
    *(int *)(param_1 + 0x1d8) = iVar5;
    iVar5 = (uVar4 + 0x24 & 0xfffffff0) + 0x15;
    uVar6 = 1;
    *(uint *)(param_1 + 0x1dc) =
         ((uVar3 + 0x24 & 0xfffffff0) + 0x15 + (iVar5 << (bVar8 & 0x1f))) - iVar5;
  }
  return uVar6;
}



int aesni_cbc_hmac_sha1_cipher
              (long param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4,undefined8 param_5
              )

{
  SHA_CTX *c;
  uchar *md;
  byte *pbVar1;
  long lVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  uint uVar17;
  uint uVar18;
  ulong uVar19;
  uint uVar20;
  undefined8 *puVar21;
  uint uVar22;
  byte *pbVar23;
  ulong uVar24;
  ulong uVar25;
  uint uVar26;
  long in_FS_OFFSET;
  uint uVar27;
  int iVar29;
  undefined1 auVar28 [16];
  undefined8 uStack_d0;
  undefined8 *local_c8;
  SHA_CTX *local_c0;
  long local_b8;
  long local_b0;
  ulong local_a8;
  undefined1 local_60 [16];
  uint local_50;
  long local_40;
  
  uVar19 = *(ulong *)(param_1 + 0x1b8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar29 = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0xffffffffffffffff;
  uVar25 = (ulong)((uint)param_4 & 0xf);
  if ((param_4 & 0xf) != 0) goto LAB_00100488;
  local_c8 = param_2;
  if ((*(byte *)(param_1 + 0x6c) & 2) == 0) {
    if (uVar19 != 0xffffffffffffffff) {
      if (CONCAT11(*(undefined1 *)(param_1 + 0x1bc + uVar19),
                   *(undefined1 *)(param_1 + 0x1bd + uVar19)) < 0x302) {
        if (param_4 < 0x15) goto LAB_00100488;
      }
      else {
        iVar29 = 0;
        if (param_4 < 0x25) goto LAB_00100488;
        uVar4 = *param_3;
        uVar5 = param_3[1];
        local_c8 = param_2 + 2;
        param_3 = param_3 + 2;
        param_4 = param_4 - 0x10;
        *(undefined8 *)(param_1 + 0x20) = uVar4;
        *(undefined8 *)(param_1 + 0x28) = uVar5;
      }
      aesni_cbc_encrypt(param_3,local_c8,param_4,param_1 + 0xc0,param_1 + 0x20);
      uVar18 = (int)param_4 - 0x15;
      bVar3 = *(byte *)((long)local_c8 + (param_4 - 1));
      uVar8 = *(undefined8 *)(param_1 + 0x1f8);
      uVar9 = *(undefined8 *)(param_1 + 0x200);
      uVar10 = *(undefined8 *)(param_1 + 0x208);
      uVar11 = *(undefined8 *)(param_1 + 0x210);
      uVar4 = *(undefined8 *)(param_1 + 0x238);
      uVar5 = *(undefined8 *)(param_1 + 0x240);
      uVar6 = *(undefined8 *)(param_1 + 0x248);
      uVar7 = *(undefined8 *)(param_1 + 0x250);
      uVar22 = 0xff - uVar18 >> 0x18 | uVar18 & 0xff;
      uVar27 = uVar22 ^ (uVar22 - bVar3 ^ (uint)bVar3 | uVar22 ^ bVar3);
      uVar18 = (int)uVar27 >> 0x1f;
      uVar18 = (uint)bVar3 & ~uVar18 | uVar18 & uVar22;
      local_b8 = param_4 - (uVar18 + 0x15);
      *(char *)(param_1 + 0x1bf + uVar19) = (char)local_b8;
      *(char *)(param_1 + 0x1be + uVar19) = (char)((ulong)local_b8 >> 8);
      c = (SHA_CTX *)(param_1 + 0x2b8);
      *(undefined8 *)(param_1 + 0x2b8) = uVar8;
      *(undefined8 *)(param_1 + 0x2c0) = uVar9;
      *(undefined8 *)(param_1 + 0x2c8) = uVar10;
      *(undefined8 *)(param_1 + 0x2d0) = uVar11;
      *(undefined8 *)(param_1 + 0x2d8) = *(undefined8 *)(param_1 + 0x218);
      *(undefined8 *)(param_1 + 0x2e0) = *(undefined8 *)(param_1 + 0x220);
      *(undefined8 *)(param_1 + 0x2e8) = *(undefined8 *)(param_1 + 0x228);
      *(undefined8 *)(param_1 + 0x2f0) = *(undefined8 *)(param_1 + 0x230);
      *(undefined8 *)(param_1 + 0x2f8) = uVar4;
      *(undefined8 *)(param_1 + 0x300) = uVar5;
      *(undefined8 *)(param_1 + 0x308) = uVar6;
      *(undefined8 *)(param_1 + 0x310) = uVar7;
      sha1_update(c,param_1 + 0x1c0,uVar19);
      uVar19 = param_4 - 0x14;
      if (uVar19 < 0x140) {
        uVar13 = *(uint *)(param_1 + 0x314);
        uVar12 = *(int *)(param_1 + 0x2cc) + (int)local_b8 * 8;
        uVar12 = uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 |
                 uVar12 * 0x1000000;
LAB_00100634:
        local_50 = 0;
        local_60 = (undefined1  [16])0x0;
        lVar15 = -local_b8;
        uVar20 = uVar13;
        do {
          while( true ) {
            uVar13 = uVar20 + 1;
            bVar3 = (byte)((ulong)lVar15 >> 0x38);
            *(byte *)(param_1 + 0x2d4 + (ulong)uVar20) =
                 ~((byte)((ulong)-lVar15 >> 0x38) | bVar3) & 0x80 |
                 *(byte *)((long)local_c8 + lVar15 + local_b8) & bVar3;
            uVar16 = uVar19;
            if (uVar20 != 0x3f) break;
            uVar13 = (uint)((ulong)(7 - lVar15) >> 0x20);
            *(uint *)(param_1 + 0x310) = *(uint *)(param_1 + 0x310) | uVar12 & (int)uVar13 >> 0x1f;
            sha1_block_data_order(c,param_1 + 0x2d4,1);
            lVar2 = lVar15 + -0x48;
            lVar15 = lVar15 + 1;
            uVar13 = (int)((uint)((ulong)lVar2 >> 0x20) & uVar13) >> 0x1f;
            local_50 = local_50 | uVar13 & *(uint *)(param_1 + 0x2c8);
            auVar28._4_4_ = uVar13;
            auVar28._0_4_ = uVar13;
            auVar28._8_4_ = uVar13;
            auVar28._12_4_ = uVar13;
            local_60 = auVar28 & *(undefined1 (*) [16])(param_1 + 0x2b8) | local_60;
            if (lVar15 == uVar19 - local_b8) {
              uVar14 = 0;
              uVar13 = 0;
              goto LAB_0010071b;
            }
            uVar20 = 0;
          }
          lVar15 = lVar15 + 1;
          uVar20 = uVar13;
        } while (lVar15 != uVar19 - local_b8);
      }
      else {
        lVar15 = (ulong)(0x40 - *(int *)(param_1 + 0x314)) + (param_4 - 0x154 & 0xffffffffffffffc0);
        sha1_update(c,local_c8,lVar15);
        local_b8 = local_b8 - lVar15;
        local_c8 = (undefined8 *)((long)local_c8 + lVar15);
        uVar13 = *(uint *)(param_1 + 0x314);
        local_50 = 0;
        uVar12 = *(int *)(param_1 + 0x2cc) + (int)local_b8 * 8;
        local_60 = (undefined1  [16])0x0;
        uVar12 = uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 |
                 uVar12 * 0x1000000;
        uVar16 = uVar19 - lVar15;
        uVar19 = uVar16;
        if (uVar16 != 0) goto LAB_00100634;
        uVar19 = 0;
      }
      uVar14 = (ulong)uVar13;
      if (uVar13 < 0x40) {
LAB_0010071b:
        puVar21 = (undefined8 *)(param_1 + 0x2d4 + uVar14);
        uVar24 = 0x40 - uVar14;
        uVar20 = (uint)uVar24;
        if (uVar20 < 8) {
          if ((uVar24 & 4) == 0) {
            if ((uVar20 != 0) && (*(undefined1 *)puVar21 = 0, (uVar24 & 2) != 0)) {
              *(undefined2 *)((long)puVar21 + ((uVar24 & 0xffffffff) - 2)) = 0;
            }
          }
          else {
            *(undefined4 *)puVar21 = 0;
            *(undefined4 *)((long)puVar21 + ((uVar24 & 0xffffffff) - 4)) = 0;
          }
        }
        else {
          *puVar21 = 0;
          *(undefined8 *)((long)puVar21 + ((uVar24 & 0xffffffff) - 8)) = 0;
          uVar20 = uVar20 + ((int)puVar21 - (int)((ulong)(puVar21 + 1) & 0xfffffffffffffff8)) &
                   0xfffffff8;
          if (7 < uVar20) {
            uVar17 = 0;
            do {
              uVar24 = (ulong)uVar17;
              uVar17 = uVar17 + 8;
              *(undefined8 *)(((ulong)(puVar21 + 1) & 0xfffffffffffffff8) + uVar24) = 0;
            } while (uVar17 < uVar20);
          }
        }
        uVar16 = (uVar16 + 0x40) - uVar14;
        lVar15 = -0x49 - local_b8;
        if (0x38 < uVar13) goto LAB_00100c48;
      }
      else {
LAB_00100c48:
        uVar13 = (uint)((local_b8 + 8) - uVar16 >> 0x20);
        *(uint *)(param_1 + 0x310) = *(uint *)(param_1 + 0x310) | uVar12 & (int)uVar13 >> 0x1f;
        sha1_block_data_order(c,(undefined1 (*) [16])(param_1 + 0x2d4),1);
        lVar15 = -0x49 - local_b8;
        lVar2 = uVar16 + lVar15;
        uVar16 = uVar16 + 0x40;
        uVar13 = (int)(uVar13 & (uint)((ulong)lVar2 >> 0x20)) >> 0x1f;
        local_50 = local_50 | uVar13 & *(uint *)(param_1 + 0x2c8);
        local_60._4_4_ = uVar13 & *(uint *)(param_1 + 700) | local_60._4_4_;
        local_60._0_4_ = uVar13 & *(uint *)(param_1 + 0x2b8) | local_60._0_4_;
        local_60._8_4_ = uVar13 & *(uint *)(param_1 + 0x2c0) | local_60._8_4_;
        local_60._12_4_ = uVar13 & *(uint *)(param_1 + 0x2c4) | local_60._12_4_;
        *(undefined1 (*) [16])(param_1 + 0x2d4) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(param_1 + 0x2e4) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(param_1 + 0x2f4) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(param_1 + 0x304) = (undefined1  [16])0x0;
      }
      *(uint *)(param_1 + 0x310) = uVar12;
      sha1_block_data_order(c,param_1 + 0x2d4,1);
      uVar17 = (uint)((long)(lVar15 + uVar16) >> 0x3f);
      uVar13 = *(uint *)(param_1 + 0x2b8) & uVar17 | local_60._0_4_;
      uVar20 = *(uint *)(param_1 + 700) & uVar17 | local_60._4_4_;
      uVar12 = *(uint *)(param_1 + 0x2c0) & uVar17 | local_60._8_4_;
      uVar26 = uVar17 & *(uint *)(param_1 + 0x2c4) | local_60._12_4_;
      local_50 = *(uint *)(param_1 + 0x2c8) & uVar17 | local_50;
      local_60._4_4_ =
           uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 | (uVar20 & 0xff00) << 8 | uVar20 << 0x18;
      local_60._0_4_ =
           uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 | uVar13 << 0x18;
      local_60._12_4_ =
           uVar26 >> 0x18 | (uVar26 & 0xff0000) >> 8 | (uVar26 & 0xff00) << 8 | uVar26 << 0x18;
      local_60._8_4_ =
           uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 | uVar12 << 0x18;
      local_50 = local_50 >> 0x18 | (local_50 & 0xff0000) >> 8 | (local_50 & 0xff00) << 8 |
                 local_50 << 0x18;
      *(undefined8 *)(param_1 + 0x2b8) = *(undefined8 *)(param_1 + 600);
      *(undefined8 *)(param_1 + 0x2c0) = *(undefined8 *)(param_1 + 0x260);
      *(undefined8 *)(param_1 + 0x2c8) = *(undefined8 *)(param_1 + 0x268);
      *(undefined8 *)(param_1 + 0x2d0) = *(undefined8 *)(param_1 + 0x270);
      *(undefined8 *)(param_1 + 0x2d8) = *(undefined8 *)(param_1 + 0x278);
      *(undefined8 *)(param_1 + 0x2e0) = *(undefined8 *)(param_1 + 0x280);
      *(undefined8 *)(param_1 + 0x2e8) = *(undefined8 *)(param_1 + 0x288);
      *(undefined8 *)(param_1 + 0x2f0) = *(undefined8 *)(param_1 + 0x290);
      *(undefined8 *)(param_1 + 0x2f8) = *(undefined8 *)(param_1 + 0x298);
      *(undefined8 *)(param_1 + 0x300) = *(undefined8 *)(param_1 + 0x2a0);
      *(undefined8 *)(param_1 + 0x308) = *(undefined8 *)(param_1 + 0x2a8);
      *(undefined8 *)(param_1 + 0x310) = *(undefined8 *)(param_1 + 0x2b0);
      sha1_update(c,local_60,0x14);
      SHA1_Final(local_60,c);
      pbVar23 = (byte *)((long)local_c8 + (uVar19 - uVar22) + -1);
      uVar13 = 0;
      uVar22 = ((int)(uVar19 - uVar22) - (int)local_b8) - 0x15;
      do {
        bVar3 = *pbVar23;
        pbVar23 = pbVar23 + 1;
        uVar20 = (int)uVar22 >> 0x1f;
        uVar12 = -uVar22 - 0x15 & uVar22;
        pbVar1 = local_60 + uVar25;
        uVar25 = uVar25 + (uVar12 >> 0x1f);
        uVar22 = uVar22 + 1;
        uVar13 = uVar13 | (uint)(bVar3 ^ *pbVar1) & (int)uVar12 >> 0x1f | ~uVar20 & (bVar3 ^ uVar18)
        ;
      } while (pbVar23 != (byte *)((long)local_c8 + uVar19 + 0x13));
      iVar29 = ((int)(-uVar13 | uVar27) >> 0x1f) + 1;
      goto LAB_00100488;
    }
    aesni_cbc_encrypt(param_3,param_2,param_4,param_1 + 0xc0,param_1 + 0x20,0);
    sha1_update(param_1 + 0x2b8,param_2,param_4);
  }
  else {
    uVar16 = (ulong)(0x40 - *(int *)(param_1 + 0x314));
    local_a8 = param_4;
    if (uVar19 == 0xffffffffffffffff) {
      if (uVar16 < param_4) {
        lVar15 = 0;
        uVar14 = uVar16;
        uVar19 = param_4;
        puVar21 = param_3;
LAB_001009b4:
        uVar24 = uVar19 - uVar14;
        if (0x3f < uVar24) {
          uStack_d0 = 0x100aee;
          sha1_update(param_1 + 0x2b8,puVar21,uVar16);
          aesni_cbc_sha1_enc(param_3,param_2,uVar24 >> 6,param_1 + 0xc0,param_1 + 0x20,
                             param_1 + 0x2b8,uVar14 + (long)param_3);
          uVar25 = uVar24 & 0xffffffffffffffc0;
          uVar18 = (int)uVar25 * 8;
          uVar27 = uVar18 + (int)*(undefined8 *)(param_1 + 0x2cc);
          iVar29 = (int)(uVar24 >> 0x1d) + (int)((ulong)*(undefined8 *)(param_1 + 0x2cc) >> 0x20);
          *(ulong *)(param_1 + 0x2cc) = CONCAT44(iVar29,uVar27);
          uVar14 = (ulong)uVar27;
          if (uVar27 < uVar18) {
            *(int *)(param_1 + 0x2d0) = iVar29 + 1;
          }
          lVar15 = uVar16 + lVar15 + uVar25;
          puVar21 = (undefined8 *)((long)param_3 + lVar15);
          local_a8 = param_4 - uVar25;
          param_5 = uStack_d0;
          local_c8 = (undefined8 *)((long)param_2 + uVar25);
        }
        goto LAB_00100376;
      }
      sha1_update(param_1 + 0x2b8,param_3,param_4);
    }
    else {
      if ((uVar19 + 0x24 & 0xfffffffffffffff0) != param_4) goto LAB_00100488;
      uVar14 = (ulong)(0x301 < *(uint *)(param_1 + 0x1c0));
      lVar15 = uVar14 * 0x10;
      puVar21 = param_3 + uVar14 * 2;
      uVar14 = lVar15 + uVar16;
      if (lVar15 + uVar16 < uVar19) goto LAB_001009b4;
      uVar14 = param_1 + 0x20;
LAB_00100376:
      local_c0 = (SHA_CTX *)(param_1 + 0x2b8);
      local_b0 = param_1 + 0x20;
      local_b8 = param_1 + 0xc0;
      sha1_update(local_c0,puVar21,uVar19 - lVar15,uVar14,param_5);
      if (param_4 != uVar19) {
        if (param_3 != param_2) {
          memcpy(local_c8,(void *)((long)param_3 + uVar25),uVar19 - uVar25);
        }
        md = (uchar *)((long)param_2 + uVar19);
        SHA1_Final(md,local_c0);
        *(undefined8 *)(param_1 + 0x2b8) = *(undefined8 *)(param_1 + 600);
        *(undefined8 *)(param_1 + 0x2c0) = *(undefined8 *)(param_1 + 0x260);
        *(undefined8 *)(param_1 + 0x2c8) = *(undefined8 *)(param_1 + 0x268);
        *(undefined8 *)(param_1 + 0x2d0) = *(undefined8 *)(param_1 + 0x270);
        *(undefined8 *)(param_1 + 0x2d8) = *(undefined8 *)(param_1 + 0x278);
        *(undefined8 *)(param_1 + 0x2e0) = *(undefined8 *)(param_1 + 0x280);
        *(undefined8 *)(param_1 + 0x2e8) = *(undefined8 *)(param_1 + 0x288);
        *(undefined8 *)(param_1 + 0x2f0) = *(undefined8 *)(param_1 + 0x290);
        *(undefined8 *)(param_1 + 0x2f8) = *(undefined8 *)(param_1 + 0x298);
        *(undefined8 *)(param_1 + 0x300) = *(undefined8 *)(param_1 + 0x2a0);
        *(undefined8 *)(param_1 + 0x308) = *(undefined8 *)(param_1 + 0x2a8);
        *(undefined8 *)(param_1 + 0x310) = *(undefined8 *)(param_1 + 0x2b0);
        sha1_update(local_c0,md,0x14);
        SHA1_Final(md,local_c0);
        uVar25 = uVar19 + 0x14;
        if (uVar25 < param_4) {
          memset((void *)((long)param_2 + uVar25),((uint)param_4 - 1) - (int)uVar25 & 0xff,
                 (param_4 - 0x14) - uVar19);
        }
        aesni_cbc_encrypt(local_c8,local_c8,local_a8,local_b8,local_b0,1);
        goto LAB_00100480;
      }
      param_3 = (undefined8 *)((long)param_3 + uVar25);
    }
    local_b0 = param_1 + 0x20;
    aesni_cbc_encrypt(param_3,local_c8,local_a8,param_1 + 0xc0,local_b0,1);
  }
LAB_00100480:
  iVar29 = 1;
LAB_00100488:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar29;
}



uint aesni_cbc_hmac_sha1_init_key(long param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  
  if ((*(byte *)(param_1 + 0x6c) & 2) == 0) {
    uVar1 = aesni_set_decrypt_key(param_2,param_3 * 8,param_1 + 0xc0);
  }
  else {
    uVar1 = aesni_set_encrypt_key();
  }
  SHA1_Init((SHA_CTX *)(param_1 + 0x1f8));
  *(undefined8 *)(param_1 + 0x1b8) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x90) = 1;
  *(undefined8 *)(param_1 + 0x98) = 0x24;
  *(undefined8 *)(param_1 + 600) = *(undefined8 *)(param_1 + 0x1f8);
  *(undefined8 *)(param_1 + 0x260) = *(undefined8 *)(param_1 + 0x200);
  *(undefined8 *)(param_1 + 0x268) = *(undefined8 *)(param_1 + 0x208);
  *(undefined8 *)(param_1 + 0x270) = *(undefined8 *)(param_1 + 0x210);
  *(undefined8 *)(param_1 + 0x278) = *(undefined8 *)(param_1 + 0x218);
  *(undefined8 *)(param_1 + 0x280) = *(undefined8 *)(param_1 + 0x220);
  *(undefined8 *)(param_1 + 0x288) = *(undefined8 *)(param_1 + 0x228);
  *(undefined8 *)(param_1 + 0x290) = *(undefined8 *)(param_1 + 0x230);
  *(undefined8 *)(param_1 + 0x298) = *(undefined8 *)(param_1 + 0x238);
  *(undefined8 *)(param_1 + 0x2a0) = *(undefined8 *)(param_1 + 0x240);
  *(undefined8 *)(param_1 + 0x2a8) = *(undefined8 *)(param_1 + 0x248);
  *(undefined8 *)(param_1 + 0x2b0) = *(undefined8 *)(param_1 + 0x250);
  *(undefined8 *)(param_1 + 0x2b8) = *(undefined8 *)(param_1 + 0x1f8);
  *(undefined8 *)(param_1 + 0x2c0) = *(undefined8 *)(param_1 + 0x200);
  *(undefined8 *)(param_1 + 0x2c8) = *(undefined8 *)(param_1 + 0x208);
  *(undefined8 *)(param_1 + 0x2d0) = *(undefined8 *)(param_1 + 0x210);
  *(undefined8 *)(param_1 + 0x2d8) = *(undefined8 *)(param_1 + 0x218);
  *(undefined8 *)(param_1 + 0x2e0) = *(undefined8 *)(param_1 + 0x220);
  *(undefined8 *)(param_1 + 0x2e8) = *(undefined8 *)(param_1 + 0x228);
  *(undefined8 *)(param_1 + 0x2f0) = *(undefined8 *)(param_1 + 0x230);
  *(undefined8 *)(param_1 + 0x2f8) = *(undefined8 *)(param_1 + 0x238);
  *(undefined8 *)(param_1 + 0x300) = *(undefined8 *)(param_1 + 0x240);
  *(undefined8 *)(param_1 + 0x308) = *(undefined8 *)(param_1 + 0x248);
  *(undefined8 *)(param_1 + 0x310) = *(undefined8 *)(param_1 + 0x250);
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
  undefined4 uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ushort uVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  byte bVar17;
  ulong uVar18;
  uint uVar19;
  uint uVar20;
  ulong *puVar21;
  ulong **ppuVar22;
  uint *puVar23;
  ulong uVar24;
  undefined8 *puVar25;
  ulong *puVar26;
  ulong uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  long in_FS_OFFSET;
  byte bVar32;
  undefined1 *puVar33;
  uint local_7b0;
  uint local_7ac;
  long local_798;
  ulong **local_790;
  ulong **local_778;
  int local_770;
  long local_758;
  ulong *local_748;
  int local_740 [2];
  ulong *local_738;
  int local_730;
  undefined8 *local_728;
  int local_720;
  undefined8 *local_718;
  int local_710;
  undefined8 *local_708;
  int local_700;
  undefined8 *local_6f8;
  int local_6f0;
  undefined8 *local_6e8;
  int local_6e0;
  undefined8 *local_6d8;
  int local_6d0;
  ulong *local_6c8;
  undefined4 local_6c0 [2];
  undefined8 *local_6b8;
  undefined4 local_6b0;
  undefined8 *local_6a8;
  undefined4 local_6a0;
  undefined8 *local_698;
  undefined4 local_690;
  undefined8 *local_688;
  undefined4 local_680;
  undefined8 *local_678;
  undefined4 local_670;
  undefined8 *local_668;
  undefined4 local_660;
  undefined8 *local_658;
  undefined4 local_650;
  ulong *local_648 [2];
  undefined4 local_638;
  ulong local_630;
  undefined8 uStack_628;
  long local_620;
  long lStack_618;
  undefined4 local_610;
  undefined8 local_608;
  undefined8 uStack_600;
  long local_5f8;
  long lStack_5f0;
  undefined4 local_5e8;
  undefined8 local_5e0;
  undefined8 uStack_5d8;
  long local_5d0;
  long lStack_5c8;
  undefined4 local_5c0;
  undefined8 local_5b8;
  undefined8 uStack_5b0;
  long local_5a8;
  long lStack_5a0;
  undefined4 local_598;
  undefined8 local_590;
  undefined8 uStack_588;
  long local_580;
  long lStack_578;
  undefined4 local_570;
  undefined8 local_568;
  undefined8 uStack_560;
  long local_558;
  long lStack_550;
  undefined4 local_548;
  undefined8 local_540;
  undefined8 uStack_538;
  long local_530;
  long lStack_528;
  undefined4 local_520;
  undefined8 local_518;
  undefined8 uStack_510;
  ulong local_508 [2];
  undefined8 local_4f8;
  ulong auStack_4f0 [4];
  undefined4 uStack_4cc;
  undefined8 local_488;
  undefined8 uStack_480;
  uint local_478;
  undefined1 local_474;
  undefined4 local_44c;
  undefined8 local_408;
  undefined8 uStack_400;
  uint local_3f8;
  undefined1 local_3f4;
  undefined4 local_3cc;
  undefined8 local_388;
  undefined8 uStack_380;
  uint local_378;
  undefined1 local_374;
  undefined4 local_34c;
  undefined8 local_308;
  undefined8 uStack_300;
  uint local_2f8;
  undefined1 local_2f4;
  undefined4 local_2cc;
  undefined8 local_288;
  undefined8 uStack_280;
  uint local_278;
  undefined1 local_274;
  undefined4 local_24c;
  undefined8 local_208;
  undefined8 uStack_200;
  uint local_1f8;
  undefined1 local_1f4;
  undefined4 local_1cc;
  undefined8 local_188;
  undefined8 uStack_180;
  uint local_178;
  undefined1 local_174;
  undefined4 local_14c;
  uint local_100 [4];
  uint local_f0;
  uint local_ec;
  uint local_e8;
  uint local_e4;
  uint local_e0 [4];
  uint local_d0;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  uint local_c0 [4];
  uint local_b0;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  uint local_a0 [4];
  uint local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  uint local_80 [4];
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  long local_40;
  
  bVar32 = 0;
  uVar31 = param_5 * 4;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar13 = RAND_bytes_ex(*(undefined8 *)(param_1 + 0xb8),local_508,param_5 << 6,0);
  local_798 = 0;
  if (iVar13 < 1) goto LAB_00101765;
  bVar17 = (char)param_5 + 1;
  local_7b0 = param_4 >> (bVar17 & 0x1f);
  local_7ac = (param_4 + local_7b0) - (local_7b0 << (bVar17 & 0x1f));
  if ((local_7b0 < local_7ac) && ((local_7ac + 0x16 & 0x3f) < uVar31 - 1)) {
    local_7b0 = local_7b0 + 1;
    local_7ac = local_7ac + param_5 * -4 + 1;
  }
  local_748 = param_3;
  local_648[0] = param_3;
  local_648[1] = (ulong *)(param_2 + 0x15);
  *(ulong *)(param_2 + 5) = local_508[0];
  *(ulong *)(param_2 + 0xd) = local_508[1];
  local_630 = local_508[0];
  uStack_628 = local_508[1];
  uVar19 = local_7ac;
  if (local_7b0 <= local_7ac) {
    uVar19 = local_7b0;
  }
  uVar19 = uVar19 - 0x33;
  if ((int)uVar31 < 2) {
    local_508[0] = *(ulong *)(param_1 + 0x2d4);
    sha1_multi_block(local_100,&local_6c8,0);
    if (0x83f < uVar19) goto LAB_001012e3;
    sha1_multi_block(local_100,&local_748,0);
    puVar26 = local_508;
    for (lVar14 = 0x80; lVar14 != 0; lVar14 = lVar14 + -1) {
      *puVar26 = 0;
      puVar26 = puVar26 + (ulong)bVar32 * -2 + 1;
    }
LAB_0010208b:
    sha1_multi_block(local_100,&local_6c8,0);
    puVar26 = local_508;
    for (lVar14 = 0x80; lVar14 != 0; lVar14 = lVar14 + -1) {
      *puVar26 = 0;
      puVar26 = puVar26 + (ulong)bVar32 * -2 + 1;
    }
    sha1_multi_block(local_100,&local_6c8,0);
    local_798 = 0;
  }
  else {
    puVar25 = &local_608;
    puVar26 = &local_4f8;
    ppuVar22 = &local_748;
    do {
      uVar27 = *puVar26;
      uVar16 = puVar26[1];
      uVar18 = (long)puVar25 - (long)local_648;
      ppuVar22[2] = (ulong *)((long)*ppuVar22 + (ulong)local_7b0);
      puVar25[-3] = (ulong *)((long)*ppuVar22 + (ulong)local_7b0);
      lVar14 = puVar25[-7] + (ulong)((local_7b0 + 0x24 & 0xfffffff0) + 0x15);
      puVar25[-2] = lVar14;
      *(ulong *)(lVar14 + -0x10) = uVar27;
      *(ulong *)(lVar14 + -8) = uVar16;
      if (uVar18 < 0x140) {
        uVar18 = 0x140;
      }
      puVar21 = puVar26 + 2;
      ppuVar22 = ppuVar22 + 2;
      lVar14 = __memcpy_chk(puVar25,puVar26,0x10,(long)local_648 + (uVar18 - (long)puVar25));
      puVar25 = (undefined8 *)(lVar14 + 0x28);
      puVar26 = puVar21;
    } while (local_508 + (ulong)uVar31 * 2 != puVar21);
    local_508[0] = *(ulong *)(param_1 + 0x2d4);
    uVar29 = *(uint *)(param_1 + 0x2b8);
    uVar28 = *(uint *)(param_1 + 700);
    uVar3 = *(uint *)(param_1 + 0x2c4);
    uVar30 = *(uint *)(param_1 + 0x2c0);
    uVar27 = local_508[0] >> 0x38;
    uVar16 = local_508[0] & 0xff000000000000;
    uVar18 = local_508[0] & 0xff0000000000;
    uVar7 = local_508[0] & 0xff00000000;
    uVar8 = local_508[0] & 0xff000000;
    uVar9 = local_508[0] & 0xff0000;
    uVar10 = local_508[0] & 0xff00;
    uVar11 = local_508[0] << 0x38;
    uVar4 = *(uint *)(param_1 + 0x2c8);
    bVar17 = *(byte *)(param_1 + 0x2de);
    bVar1 = *(byte *)(param_1 + 0x2dd);
    bVar2 = *(byte *)(param_1 + 0x2dc);
    lVar14 = 0;
    puVar26 = local_508;
    ppuVar22 = &local_748;
    do {
      local_100[lVar14] = uVar29;
      uVar6 = local_7ac;
      if (uVar31 - 1 != (int)lVar14) {
        uVar6 = local_7b0;
      }
      local_a0[lVar14] = uVar3;
      local_80[lVar14] = uVar4;
      uVar24 = (uVar27 | uVar16 >> 0x28 | uVar18 >> 0x18 | uVar7 >> 8 | uVar8 << 8 | uVar9 << 0x18 |
                uVar10 << 0x28 | uVar11) + lVar14;
      *(char *)((long)puVar26 + 0xc) = (char)uVar6;
      *puVar26 = uVar24 >> 0x38 | (uVar24 & 0xff000000000000) >> 0x28 |
                 (uVar24 & 0xff0000000000) >> 0x18 | (uVar24 & 0xff00000000) >> 8 |
                 (uVar24 & 0xff000000) << 8 | (uVar24 & 0xff0000) << 0x18 |
                 (uVar24 & 0xff00) << 0x28 | uVar24 << 0x38;
      local_e0[lVar14] = uVar28;
      local_c0[lVar14] = uVar30;
      *(uint *)(puVar26 + 1) =
           ((uVar6 & 0xff00 | (uint)bVar17) << 8 | (uint)bVar1) << 8 | (uint)bVar2;
      puVar21 = *ppuVar22;
      uVar24 = puVar21[1];
      *(ulong *)((long)puVar26 + 0xd) = *puVar21;
      *(ulong *)((long)puVar26 + 0x15) = uVar24;
      uVar24 = puVar21[3];
      *(ulong *)((long)puVar26 + 0x1d) = puVar21[2];
      *(ulong *)((long)puVar26 + 0x25) = uVar24;
      uVar24 = puVar21[5];
      *(ulong *)((long)puVar26 + 0x2d) = puVar21[4];
      *(ulong *)((long)puVar26 + 0x35) = uVar24;
      uVar5 = *(undefined4 *)((long)puVar21 + 0x2f);
      *(uint *)(ppuVar22 + 1) = uVar6 - 0x33 >> 6;
      lVar15 = lVar14 + 1;
      *(undefined4 *)((long)puVar26 + 0x3c) = uVar5;
      (&local_6c8)[lVar14 * 2] = puVar26;
      puVar26 = puVar26 + 0x10;
      local_6c0[lVar14 * 4] = 1;
      *ppuVar22 = (ulong *)((long)puVar21 + 0x33);
      lVar14 = lVar15;
      ppuVar22 = ppuVar22 + 2;
    } while ((uint)lVar15 < uVar31);
    sha1_multi_block(local_100,&local_6c8,param_5);
    if (uVar19 < 0x840) {
      sha1_multi_block(local_100,&local_748,param_5);
      local_770 = 0;
      puVar26 = local_508;
      for (lVar14 = 0x80; lVar14 != 0; lVar14 = lVar14 + -1) {
        *puVar26 = 0;
        puVar26 = puVar26 + (ulong)bVar32 * -2 + 1;
      }
    }
    else {
      local_6c0[0] = 0x20;
      local_638 = 0x80;
      local_6c8 = local_748;
      local_6b0 = 0x20;
      local_6b8 = local_738;
      local_610 = 0x80;
      local_6a8 = local_728;
      local_6a0 = 0x20;
      local_5e8 = 0x80;
      local_698 = local_718;
      local_690 = 0x20;
      local_5c0 = 0x80;
      if (uVar31 != 4) {
        local_680 = 0x20;
        local_598 = 0x80;
        local_688 = local_708;
        local_670 = 0x20;
        local_678 = local_6f8;
        local_570 = 0x80;
        local_668 = local_6e8;
        local_660 = 0x20;
        local_548 = 0x80;
        if (uVar31 == 8) {
          local_650 = 0x20;
          local_520 = 0x80;
          local_658 = local_6d8;
        }
      }
LAB_001012e3:
      local_778 = local_648;
      local_790 = &local_748;
      uVar29 = uVar19 >> 6;
      do {
        sha1_multi_block(local_100,&local_6c8,param_5);
        aesni_multi_cbc_encrypt(local_778,param_1 + 0xc0,param_5);
        if (param_5 != 0) {
          local_6c0[0] = 0x20;
          local_740[0] = local_740[0] + -0x20;
          local_748 = local_748 + 0x100;
          local_648[0] = (ulong *)((long)local_648[0] + __LC0);
          puVar33 = (undefined1 *)((long)local_648[1] + _UNK_00102588);
          local_630 = *(ulong *)((long)local_648[1] + 0x7f0);
          uStack_628 = *(undefined8 *)((long)local_648[1] + 0x7f8);
          local_620 = local_620 + __LC0;
          lVar14 = lStack_618 + _UNK_00102588;
          local_730 = local_730 + -0x20;
          local_738 = local_738 + 0x100;
          local_638 = 0x80;
          local_608 = *(undefined8 *)(lStack_618 + 0x7f0);
          uStack_600 = *(undefined8 *)(lStack_618 + 0x7f8);
          local_6b0 = 0x20;
          local_610 = 0x80;
          local_6c8 = local_748;
          local_6b8 = local_738;
          local_648[1] = (ulong *)puVar33;
          lStack_618 = lVar14;
          if (2 < (int)uVar31) {
            local_720 = local_720 + -0x20;
            local_710 = local_710 + -0x20;
            local_728 = local_728 + 0x100;
            local_6a0 = 0x20;
            local_5f8 = local_5f8 + __LC0;
            lVar14 = lStack_5f0 + _UNK_00102588;
            local_5e0 = *(undefined8 *)(lStack_5f0 + 0x7f0);
            uStack_5d8 = *(undefined8 *)(lStack_5f0 + 0x7f8);
            local_5e8 = 0x80;
            local_718 = local_718 + 0x100;
            local_5d0 = local_5d0 + __LC0;
            lVar15 = lStack_5c8 + _UNK_00102588;
            local_690 = 0x20;
            local_5b8 = *(undefined8 *)(lStack_5c8 + 0x7f0);
            uStack_5b0 = *(undefined8 *)(lStack_5c8 + 0x7f8);
            local_5c0 = 0x80;
            local_6a8 = local_728;
            local_698 = local_718;
            lStack_5f0 = lVar14;
            lStack_5c8 = lVar15;
            if (uVar31 != 4) {
              local_700 = local_700 + -0x20;
              local_6f0 = local_6f0 + -0x20;
              local_708 = local_708 + 0x100;
              local_6e0 = local_6e0 + -0x20;
              local_5a8 = local_5a8 + __LC0;
              local_590 = *(undefined8 *)(lStack_5a0 + 0x7f0);
              uStack_588 = *(undefined8 *)(lStack_5a0 + 0x7f8);
              local_680 = 0x20;
              local_6f8 = local_6f8 + 0x100;
              local_580 = local_580 + __LC0;
              local_568 = *(undefined8 *)(lStack_578 + 0x7f0);
              uStack_560 = *(undefined8 *)(lStack_578 + 0x7f8);
              local_598 = 0x80;
              local_558 = local_558 + __LC0;
              local_6e8 = local_6e8 + 0x100;
              local_540 = *(undefined8 *)(lStack_550 + 0x7f0);
              uStack_538 = *(undefined8 *)(lStack_550 + 0x7f8);
              local_670 = 0x20;
              local_570 = 0x80;
              local_660 = 0x20;
              local_548 = 0x80;
              local_6d0 = local_6d0 + -0x20;
              local_6d8 = local_6d8 + 0x100;
              local_650 = 0x20;
              local_530 = local_530 + __LC0;
              local_518 = *(undefined8 *)(lStack_528 + 0x7f0);
              uStack_510 = *(undefined8 *)(lStack_528 + 0x7f8);
              local_520 = 0x80;
              local_688 = local_708;
              local_678 = local_6f8;
              local_668 = local_6e8;
              local_658 = local_6d8;
              lStack_5a0 = lStack_5a0 + _UNK_00102588;
              lStack_578 = lStack_578 + _UNK_00102588;
              lStack_550 = lStack_550 + _UNK_00102588;
              lStack_528 = lStack_528 + _UNK_00102588;
            }
          }
        }
        uVar29 = uVar29 - 0x20;
      } while (0x20 < uVar29);
      local_770 = (((uVar19 >> 6) - 0x21 >> 5) + 1) * 0x800;
      sha1_multi_block(local_100,local_790,param_5);
      puVar26 = local_508;
      for (lVar14 = 0x80; lVar14 != 0; lVar14 = lVar14 + -1) {
        *puVar26 = 0;
        puVar26 = puVar26 + (ulong)bVar32 * -2 + 1;
      }
      if (param_5 == 0) goto LAB_0010208b;
    }
    local_778 = local_648;
    uVar29 = 0;
    lVar14 = 0;
    puVar26 = local_508;
    uVar19 = local_7b0;
    while( true ) {
      uVar28 = uVar19 + (-0x33 - local_770) + *(int *)((long)local_740 + lVar14) * -0x40;
      lVar15 = __memcpy_chk(puVar26,(ulong)(uint)(*(int *)((long)local_740 + lVar14) * 0x40) +
                                    *(long *)((long)local_740 + lVar14 + -8),(ulong)uVar28,
                            lVar14 * -8 + 0x400);
      *(undefined1 *)((long)local_508 + (ulong)uVar28 + (ulong)uVar29 * 0x80) = 0x80;
      uVar19 = uVar19 * 8 + 0x268;
      uVar19 = uVar19 >> 0x18 | (uVar19 & 0xff0000) >> 8 | (uVar19 & 0xff00) << 8 |
               uVar19 * 0x1000000;
      if (uVar28 < 0x38) {
        *(uint *)(lVar15 + 0x3c) = uVar19;
        *(undefined4 *)((long)local_6c0 + lVar14) = 1;
        *(long *)((long)&local_6c8 + lVar14) = lVar15;
      }
      else {
        *(uint *)(lVar15 + 0x7c) = uVar19;
        *(undefined4 *)((long)local_6c0 + lVar14) = 2;
        *(long *)((long)&local_6c8 + lVar14) = lVar15;
      }
      if (uVar29 + 1 == uVar31) break;
      uVar29 = uVar29 + 1;
      puVar26 = (ulong *)(lVar15 + 0x80);
      lVar14 = lVar14 + 0x10;
      uVar19 = local_7b0;
      if (uVar29 == uVar31 - 1) {
        uVar19 = local_7ac;
      }
    }
    sha1_multi_block(local_100,&local_6c8,param_5);
    puVar26 = local_508;
    for (lVar14 = 0x80; lVar14 != 0; lVar14 = lVar14 + -1) {
      *puVar26 = 0;
      puVar26 = puVar26 + (ulong)bVar32 * -2 + 1;
    }
    local_4f8._4_1_ = 0x80;
    uVar30 = local_e0[0] >> 0x18;
    uVar4 = local_e0[0] & 0xff0000;
    uVar6 = local_e0[0] & 0xff00;
    uVar20 = local_e0[0] << 0x18;
    uVar19 = *(uint *)(param_1 + 600);
    local_e0[0] = *(uint *)(param_1 + 0x25c);
    uVar29 = *(uint *)(param_1 + 0x260);
    uVar28 = *(uint *)(param_1 + 0x264);
    uVar3 = *(uint *)(param_1 + 0x268);
    local_508[1] = CONCAT44(local_a0[0] >> 0x18 | (local_a0[0] & 0xff0000) >> 8 |
                            (local_a0[0] & 0xff00) << 8 | local_a0[0] << 0x18,
                            local_c0[0] >> 0x18 | (local_c0[0] & 0xff0000) >> 8 |
                            (local_c0[0] & 0xff00) << 8 | local_c0[0] << 0x18);
    local_508[0] = CONCAT44(uVar30 | uVar4 >> 8 | uVar6 << 8 | uVar20,
                            local_100[0] >> 0x18 | (local_100[0] & 0xff0000) >> 8 |
                            (local_100[0] & 0xff00) << 8 | local_100[0] << 0x18);
    local_4f8._0_4_ =
         local_80[0] >> 0x18 | (local_80[0] & 0xff0000) >> 8 | (local_80[0] & 0xff00) << 8 |
         local_80[0] << 0x18;
    local_488 = CONCAT44(local_e0[1] >> 0x18 | (local_e0[1] & 0xff0000) >> 8 |
                         (local_e0[1] & 0xff00) << 8 | local_e0[1] << 0x18,
                         local_100[1] >> 0x18 | (local_100[1] & 0xff0000) >> 8 |
                         (local_100[1] & 0xff00) << 8 | local_100[1] << 0x18);
    uStack_480 = CONCAT44(local_a0[1] >> 0x18 | (local_a0[1] & 0xff0000) >> 8 |
                          (local_a0[1] & 0xff00) << 8 | local_a0[1] << 0x18,
                          local_c0[1] >> 0x18 | (local_c0[1] & 0xff0000) >> 8 |
                          (local_c0[1] & 0xff00) << 8 | local_c0[1] << 0x18);
    local_478 = local_80[1] >> 0x18 | (local_80[1] & 0xff0000) >> 8 | (local_80[1] & 0xff00) << 8 |
                local_80[1] << 0x18;
    uStack_4cc = 0xa0020000;
    local_474 = 0x80;
    local_44c = 0xa0020000;
    if (2 < (int)uVar31) {
      local_408 = CONCAT44(local_e0[2] >> 0x18 | (local_e0[2] & 0xff0000) >> 8 |
                           (local_e0[2] & 0xff00) << 8 | local_e0[2] << 0x18,
                           local_100[2] >> 0x18 | (local_100[2] & 0xff0000) >> 8 |
                           (local_100[2] & 0xff00) << 8 | local_100[2] << 0x18);
      uStack_400 = CONCAT44(local_a0[2] >> 0x18 | (local_a0[2] & 0xff0000) >> 8 |
                            (local_a0[2] & 0xff00) << 8 | local_a0[2] << 0x18,
                            local_c0[2] >> 0x18 | (local_c0[2] & 0xff0000) >> 8 |
                            (local_c0[2] & 0xff00) << 8 | local_c0[2] << 0x18);
      local_3f8 = local_80[2] >> 0x18 | (local_80[2] & 0xff0000) >> 8 | (local_80[2] & 0xff00) << 8
                  | local_80[2] << 0x18;
      uStack_380 = CONCAT44(local_a0[3] >> 0x18 | (local_a0[3] & 0xff0000) >> 8 |
                            (local_a0[3] & 0xff00) << 8 | local_a0[3] << 0x18,
                            local_c0[3] >> 0x18 | (local_c0[3] & 0xff0000) >> 8 |
                            (local_c0[3] & 0xff00) << 8 | local_c0[3] << 0x18);
      local_388 = CONCAT44(local_e0[3] >> 0x18 | (local_e0[3] & 0xff0000) >> 8 |
                           (local_e0[3] & 0xff00) << 8 | local_e0[3] << 0x18,
                           local_100[3] >> 0x18 | (local_100[3] & 0xff0000) >> 8 |
                           (local_100[3] & 0xff00) << 8 | local_100[3] << 0x18);
      local_378 = local_80[3] >> 0x18 | (local_80[3] & 0xff0000) >> 8 | (local_80[3] & 0xff00) << 8
                  | local_80[3] << 0x18;
      local_3f4 = 0x80;
      local_3cc = 0xa0020000;
      local_374 = 0x80;
      local_34c = 0xa0020000;
      local_100[2] = uVar19;
      local_100[3] = uVar19;
      local_e0[2] = local_e0[0];
      local_e0[3] = local_e0[0];
      local_c0[2] = uVar29;
      local_c0[3] = uVar29;
      local_a0[2] = uVar28;
      local_a0[3] = uVar28;
      local_80[2] = uVar3;
      local_80[3] = uVar3;
      if (uVar31 == 4) {
        local_6b0 = 1;
        local_6b8 = &local_488;
        local_6a8 = &local_408;
        local_698 = &local_388;
        local_6a0 = 1;
        local_690 = 1;
      }
      else {
        local_308 = CONCAT44(local_d0 >> 0x18 | (local_d0 & 0xff0000) >> 8 |
                             (local_d0 & 0xff00) << 8 | local_d0 << 0x18,
                             local_f0 >> 0x18 | (local_f0 & 0xff0000) >> 8 |
                             (local_f0 & 0xff00) << 8 | local_f0 << 0x18);
        uStack_300 = CONCAT44(local_90 >> 0x18 | (local_90 & 0xff0000) >> 8 |
                              (local_90 & 0xff00) << 8 | local_90 << 0x18,
                              local_b0 >> 0x18 | (local_b0 & 0xff0000) >> 8 |
                              (local_b0 & 0xff00) << 8 | local_b0 << 0x18);
        local_2f8 = local_70 >> 0x18 | (local_70 & 0xff0000) >> 8 | (local_70 & 0xff00) << 8 |
                    local_70 << 0x18;
        uStack_280 = CONCAT44(local_8c >> 0x18 | (local_8c & 0xff0000) >> 8 |
                              (local_8c & 0xff00) << 8 | local_8c << 0x18,
                              local_ac >> 0x18 | (local_ac & 0xff0000) >> 8 |
                              (local_ac & 0xff00) << 8 | local_ac << 0x18);
        local_288 = CONCAT44(local_cc >> 0x18 | (local_cc & 0xff0000) >> 8 |
                             (local_cc & 0xff00) << 8 | local_cc << 0x18,
                             local_ec >> 0x18 | (local_ec & 0xff0000) >> 8 |
                             (local_ec & 0xff00) << 8 | local_ec << 0x18);
        local_2f4 = 0x80;
        local_278 = local_6c >> 0x18 | (local_6c & 0xff0000) >> 8 | (local_6c & 0xff00) << 8 |
                    local_6c << 0x18;
        local_2cc = 0xa0020000;
        local_208 = CONCAT44(local_c8 >> 0x18 | (local_c8 & 0xff0000) >> 8 |
                             (local_c8 & 0xff00) << 8 | local_c8 << 0x18,
                             local_e8 >> 0x18 | (local_e8 & 0xff0000) >> 8 |
                             (local_e8 & 0xff00) << 8 | local_e8 << 0x18);
        local_274 = 0x80;
        local_24c = 0xa0020000;
        uStack_200 = CONCAT44(local_88 >> 0x18 | (local_88 & 0xff0000) >> 8 |
                              (local_88 & 0xff00) << 8 | local_88 << 0x18,
                              local_a8 >> 0x18 | (local_a8 & 0xff0000) >> 8 |
                              (local_a8 & 0xff00) << 8 | local_a8 << 0x18);
        local_1f8 = local_68 >> 0x18 | (local_68 & 0xff0000) >> 8 | (local_68 & 0xff00) << 8 |
                    local_68 << 0x18;
        local_1f4 = 0x80;
        local_1cc = 0xa0020000;
        local_f0 = uVar19;
        local_ec = uVar19;
        local_e8 = uVar19;
        local_d0 = local_e0[0];
        local_cc = local_e0[0];
        local_c8 = local_e0[0];
        local_b0 = uVar29;
        local_ac = uVar29;
        local_a8 = uVar29;
        local_90 = uVar28;
        local_8c = uVar28;
        local_88 = uVar28;
        local_70 = uVar3;
        local_6c = uVar3;
        local_68 = uVar3;
        if (uVar31 == 8) {
          local_178 = local_64 >> 0x18 | (local_64 & 0xff0000) >> 8 | (local_64 & 0xff00) << 8 |
                      local_64 << 0x18;
          local_6b8 = &local_488;
          local_6a8 = &local_408;
          local_188 = CONCAT44(local_c4 >> 0x18 | (local_c4 & 0xff0000) >> 8 |
                               (local_c4 & 0xff00) << 8 | local_c4 << 0x18,
                               local_e4 >> 0x18 | (local_e4 & 0xff0000) >> 8 |
                               (local_e4 & 0xff00) << 8 | local_e4 << 0x18);
          local_698 = &local_388;
          local_688 = &local_308;
          local_678 = &local_288;
          local_668 = &local_208;
          local_658 = &local_188;
          uStack_180 = CONCAT44(local_84 >> 0x18 | (local_84 & 0xff0000) >> 8 |
                                (local_84 & 0xff00) << 8 | local_84 << 0x18,
                                local_a4 >> 0x18 | (local_a4 & 0xff0000) >> 8 |
                                (local_a4 & 0xff00) << 8 | local_a4 << 0x18);
          local_174 = 0x80;
          local_14c = 0xa0020000;
          local_6b0 = 1;
          local_6a0 = 1;
          local_690 = 1;
          local_680 = 1;
          local_670 = 1;
          local_660 = 1;
          local_650 = 1;
          local_e4 = uVar19;
          local_c4 = local_e0[0];
          local_a4 = uVar29;
          local_84 = uVar28;
          local_64 = uVar3;
        }
        else {
          local_6b0 = 1;
          local_6b8 = &local_488;
          local_6a8 = &local_408;
          local_698 = &local_388;
          local_688 = &local_308;
          local_6a0 = 1;
          local_690 = 1;
          local_680 = 1;
        }
      }
    }
    local_6c0[0] = 1;
    uVar30 = 0;
    local_6c8 = local_508;
    local_100[0] = uVar19;
    local_100[1] = uVar19;
    local_e0[1] = local_e0[0];
    local_c0[0] = uVar29;
    local_c0[1] = uVar29;
    local_a0[0] = uVar28;
    local_a0[1] = uVar28;
    local_80[0] = uVar3;
    local_80[1] = uVar3;
    sha1_multi_block(local_100,&local_6c8,param_5);
    local_798 = 0;
    puVar23 = local_100;
    uVar19 = local_7b0;
    while( true ) {
      memcpy(local_778[1],*local_778,(ulong)(uVar19 - local_770));
      uVar28 = *puVar23;
      uVar3 = puVar23[0x10];
      uVar4 = puVar23[8];
      uVar6 = puVar23[0x18];
      *local_778 = local_778[1];
      puVar25 = (undefined8 *)(param_2 + (uVar19 + 0x15));
      uVar29 = puVar23[0x20];
      *(uint *)(puVar25 + 2) =
           uVar29 >> 0x18 | (uVar29 & 0xff0000) >> 8 | (uVar29 & 0xff00) << 8 | uVar29 << 0x18;
      uVar20 = ~(uVar19 + 0x14) & 0xf;
      uVar29 = uVar20 + 1;
      uVar27 = (ulong)uVar29;
      lVar14 = (ulong)uVar20 * 0x101010101010101;
      *puVar25 = CONCAT44(uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                          uVar4 << 0x18,
                          uVar28 >> 0x18 | (uVar28 & 0xff0000) >> 8 | (uVar28 & 0xff00) << 8 |
                          uVar28 << 0x18);
      puVar25[1] = CONCAT44(uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 |
                            uVar6 << 0x18,
                            uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                            uVar3 << 0x18);
      if (uVar29 < 8) {
        if ((uVar29 & 4) == 0) {
          if ((uVar29 != 0) && (*(char *)((long)puVar25 + 0x14) = (char)lVar14, (uVar29 & 2) != 0))
          {
            *(short *)((long)puVar25 + uVar27 + 0x12) = (short)lVar14;
          }
        }
        else {
          *(int *)((long)puVar25 + 0x14) = (int)lVar14;
          *(int *)((long)puVar25 + uVar27 + 0x10) = (int)lVar14;
        }
      }
      else {
        *(long *)((long)puVar25 + 0x14) = lVar14;
        uVar16 = (ulong)((long)puVar25 + 0x1c) & 0xfffffffffffffff8;
        *(long *)((long)puVar25 + uVar27 + 0xc) = lVar14;
        uVar29 = uVar29 + ((int)(undefined1 *)((long)puVar25 + 0x14) - (int)uVar16) & 0xfffffff8;
        if (7 < uVar29) {
          uVar28 = 0;
          do {
            uVar18 = (ulong)uVar28;
            uVar28 = uVar28 + 8;
            *(long *)(uVar16 + uVar18) = lVar14;
          } while (uVar28 < uVar29);
        }
      }
      iVar13 = uVar20 + uVar19 + 0x14;
      puVar33 = (undefined1 *)((long)puVar25 + 0x14) + uVar27;
      uVar30 = uVar30 + 1;
      ppuVar22 = local_778 + 5;
      puVar23 = puVar23 + 1;
      *(uint *)(local_778 + 2) = (uint)((1 - local_770) + iVar13) >> 4;
      *param_2 = *(undefined1 *)(param_1 + 0x2dc);
      param_2[1] = *(undefined1 *)(param_1 + 0x2dd);
      param_2[2] = *(undefined1 *)(param_1 + 0x2de);
      uVar12 = (short)iVar13 + 0x11;
      *(ushort *)(param_2 + 3) = uVar12 * 0x100 | uVar12 >> 8;
      local_798 = local_798 + (ulong)(iVar13 + 0x16);
      if (uVar31 == uVar30) break;
      param_2 = puVar33;
      local_778 = ppuVar22;
      uVar19 = local_7ac;
      if (uVar30 != uVar31 - 1) {
        uVar19 = local_7b0;
      }
    }
  }
  local_758 = param_1 + 0xc0;
  local_778 = local_648;
  aesni_multi_cbc_encrypt(local_778,local_758,param_5);
  OPENSSL_cleanse(local_508,0x400);
  OPENSSL_cleanse(local_100,0xa0);
  *(long *)(param_1 + 0x1e8) = local_798;
LAB_00101765:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_798;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void aesni_cbc_hmac_sha1_tls1_multiblock_encrypt(undefined8 param_1,undefined8 *param_2)

{
  tls1_multi_block_encrypt(param_1,*param_2,param_2[1],param_2[2],*(uint *)(param_2 + 3) >> 2);
  return;
}



undefined8 aesni_cbc_hmac_sha1_set_tls1_aad(long param_1,undefined8 *param_2,int param_3)

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
    *(undefined8 *)(param_1 + 0x1f0) = 0x14;
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
    *(undefined8 *)(param_1 + 0x2b8) = *(undefined8 *)(param_1 + 0x1f8);
    *(undefined8 *)(param_1 + 0x2c0) = *(undefined8 *)(param_1 + 0x200);
    *(undefined8 *)(param_1 + 0x2c8) = *(undefined8 *)(param_1 + 0x208);
    *(undefined8 *)(param_1 + 0x2d0) = *(undefined8 *)(param_1 + 0x210);
    *(undefined8 *)(param_1 + 0x2d8) = *(undefined8 *)(param_1 + 0x218);
    *(undefined8 *)(param_1 + 0x2e0) = *(undefined8 *)(param_1 + 0x220);
    *(undefined8 *)(param_1 + 0x2e8) = *(undefined8 *)(param_1 + 0x228);
    *(undefined8 *)(param_1 + 0x2f0) = *(undefined8 *)(param_1 + 0x230);
    *(undefined8 *)(param_1 + 0x2f8) = *(undefined8 *)(param_1 + 0x238);
    *(undefined8 *)(param_1 + 0x300) = *(undefined8 *)(param_1 + 0x240);
    *(undefined8 *)(param_1 + 0x308) = *(undefined8 *)(param_1 + 0x248);
    *(undefined8 *)(param_1 + 0x310) = *(undefined8 *)(param_1 + 0x250);
    sha1_update(param_1 + 0x2b8,param_2,0xd);
    *(long *)(param_1 + 0x1f0) = (long)(int)((uVar4 + 0x24 & 0xfffffff0) - uVar4);
  }
  return 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int aesni_cbc_hmac_sha1_tls1_multiblock_max_bufsize(long param_1)

{
  SHA_CTX *c;
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
    return ((int)*(long *)(param_1 + 0x1e0) + 0x24U & 0xfffffff0) + 0x15;
  }
  __src = "providers/implementations/ciphers/cipher_aes_cbc_hmac_sha1_hw.c";
  pcVar1 = "assertion failed: ctx->multiblock_max_send_fragment != 0";
  OPENSSL_die("assertion failed: ctx->multiblock_max_send_fragment != 0",
              "providers/implementations/ciphers/cipher_aes_cbc_hmac_sha1_hw.c",0x2c3);
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  auStack_80 = (undefined1  [16])0x0;
  auStack_70 = (undefined1  [16])0x0;
  auStack_60 = (undefined1  [16])0x0;
  auStack_50 = (undefined1  [16])0x0;
  if (__n < 0x41) {
    memcpy(auStack_80,__src,__n);
  }
  else {
    c = (SHA_CTX *)(pcVar1 + 0x1f8);
    SHA1_Init(c);
    sha1_update(c,__src,__n);
    SHA1_Final(auStack_80,c);
  }
  auStack_80._0_8_ = auStack_80._0_8_ ^ __LC3;
  auStack_80._8_8_ = auStack_80._8_8_ ^ _UNK_00102598;
  auStack_70._0_8_ = auStack_70._0_8_ ^ __LC3;
  auStack_70._8_8_ = auStack_70._8_8_ ^ _UNK_00102598;
  auStack_60._0_8_ = auStack_60._0_8_ ^ __LC3;
  auStack_60._8_8_ = auStack_60._8_8_ ^ _UNK_00102598;
  auStack_50._0_8_ = __LC3 ^ auStack_50._0_8_;
  auStack_50._8_8_ = _UNK_00102598 ^ auStack_50._8_8_;
  SHA1_Init((SHA_CTX *)(pcVar1 + 0x1f8));
  sha1_update((SHA_CTX *)(pcVar1 + 0x1f8),auStack_80,0x40);
  auStack_80._8_8_ = auStack_80._8_8_ ^ _UNK_001025a8;
  auStack_80._0_8_ = auStack_80._0_8_ ^ __LC4;
  auStack_70._8_8_ = auStack_70._8_8_ ^ _UNK_001025a8;
  auStack_70._0_8_ = auStack_70._0_8_ ^ __LC4;
  auStack_60._8_8_ = auStack_60._8_8_ ^ _UNK_001025a8;
  auStack_60._0_8_ = auStack_60._0_8_ ^ __LC4;
  auStack_50._8_8_ = _UNK_001025a8 ^ auStack_50._8_8_;
  auStack_50._0_8_ = __LC4 ^ auStack_50._0_8_;
  SHA1_Init((SHA_CTX *)(pcVar1 + 600));
  sha1_update((SHA_CTX *)(pcVar1 + 600),auStack_80,0x40);
  OPENSSL_cleanse(auStack_80,0x40);
  if (lStack_38 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void aesni_cbc_hmac_sha1_set_mac_key(long param_1,void *param_2,size_t param_3)

{
  SHA_CTX *c;
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
    c = (SHA_CTX *)(param_1 + 0x1f8);
    SHA1_Init(c);
    sha1_update(c,param_2,param_3);
    SHA1_Final(local_78,c);
  }
  local_78._0_8_ = local_78._0_8_ ^ __LC3;
  local_78._8_8_ = local_78._8_8_ ^ _UNK_00102598;
  local_68._0_8_ = local_68._0_8_ ^ __LC3;
  local_68._8_8_ = local_68._8_8_ ^ _UNK_00102598;
  local_58._0_8_ = local_58._0_8_ ^ __LC3;
  local_58._8_8_ = local_58._8_8_ ^ _UNK_00102598;
  local_48._0_8_ = __LC3 ^ local_48._0_8_;
  local_48._8_8_ = _UNK_00102598 ^ local_48._8_8_;
  SHA1_Init((SHA_CTX *)(param_1 + 0x1f8));
  sha1_update((SHA_CTX *)(param_1 + 0x1f8),local_78,0x40);
  local_78._8_8_ = local_78._8_8_ ^ _UNK_001025a8;
  local_78._0_8_ = local_78._0_8_ ^ __LC4;
  local_68._8_8_ = local_68._8_8_ ^ _UNK_001025a8;
  local_68._0_8_ = local_68._0_8_ ^ __LC4;
  local_58._8_8_ = local_58._8_8_ ^ _UNK_001025a8;
  local_58._0_8_ = local_58._0_8_ ^ __LC4;
  local_48._8_8_ = _UNK_001025a8 ^ local_48._8_8_;
  local_48._0_8_ = __LC4 ^ local_48._0_8_;
  SHA1_Init((SHA_CTX *)(param_1 + 600));
  sha1_update((SHA_CTX *)(param_1 + 600),local_78,0x40);
  OPENSSL_cleanse(local_78,0x40);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint ossl_cipher_capable_aes_cbc_hmac_sha1(void)

{
  return _DAT_00103014 & 0x2000000;
}



undefined1 * ossl_prov_cipher_hw_aes_cbc_hmac_sha1(void)

{
  return cipher_hw_aes_hmac_sha1;
}


