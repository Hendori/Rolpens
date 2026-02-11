
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
              (long param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4,long param_5,
              undefined8 param_6)

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
  ulong uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  undefined8 *puVar21;
  uint uVar22;
  byte *pbVar23;
  undefined1 (*pauVar24) [16];
  ulong uVar25;
  undefined8 *__dest;
  ulong uVar26;
  long in_FS_OFFSET;
  uint uVar27;
  int iVar29;
  undefined1 auVar28 [16];
  undefined8 uStack_d0;
  SHA_CTX *local_c8;
  long local_c0;
  long local_b8;
  ulong local_a8;
  undefined1 local_60 [16];
  uint local_50;
  long local_40;
  
  uVar16 = *(ulong *)(param_1 + 0x1b8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar29 = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0xffffffffffffffff;
  uVar26 = (ulong)((uint)param_4 & 0xf);
  if ((param_4 & 0xf) != 0) goto LAB_00100490;
  if ((*(byte *)(param_1 + 0x6c) & 2) == 0) {
    if (uVar16 != 0xffffffffffffffff) {
      if (CONCAT11(*(undefined1 *)(param_1 + 0x1bc + uVar16),
                   *(undefined1 *)(param_1 + 0x1bd + uVar16)) < 0x302) {
        if (param_4 < 0x15) goto LAB_00100490;
      }
      else {
        iVar29 = 0;
        if (param_4 < 0x25) goto LAB_00100490;
        uVar4 = *param_3;
        uVar5 = param_3[1];
        param_2 = param_2 + 2;
        param_3 = param_3 + 2;
        param_4 = param_4 - 0x10;
        *(undefined8 *)(param_1 + 0x20) = uVar4;
        *(undefined8 *)(param_1 + 0x28) = uVar5;
      }
      aesni_cbc_encrypt(param_3,param_2,param_4,param_1 + 0xc0,param_1 + 0x20);
      uVar19 = (int)param_4 - 0x15;
      bVar3 = *(byte *)((long)param_2 + (param_4 - 1));
      uVar8 = *(undefined8 *)(param_1 + 0x1f8);
      uVar9 = *(undefined8 *)(param_1 + 0x200);
      uVar10 = *(undefined8 *)(param_1 + 0x208);
      uVar11 = *(undefined8 *)(param_1 + 0x210);
      uVar4 = *(undefined8 *)(param_1 + 0x238);
      uVar5 = *(undefined8 *)(param_1 + 0x240);
      uVar6 = *(undefined8 *)(param_1 + 0x248);
      uVar7 = *(undefined8 *)(param_1 + 0x250);
      uVar27 = 0xff - uVar19 >> 0x18 | uVar19 & 0xff;
      uVar20 = uVar27 ^ (uVar27 - bVar3 ^ (uint)bVar3 | uVar27 ^ bVar3);
      uVar19 = (int)uVar20 >> 0x1f;
      uVar19 = (uint)bVar3 & ~uVar19 | uVar19 & uVar27;
      local_c0 = param_4 - (uVar19 + 0x15);
      *(char *)(param_1 + 0x1bf + uVar16) = (char)local_c0;
      c = (SHA_CTX *)(param_1 + 0x2b8);
      *(char *)(param_1 + 0x1be + uVar16) = (char)((ulong)local_c0 >> 8);
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
      sha1_update(c,param_1 + 0x1c0,uVar16);
      uVar16 = param_4 - 0x14;
      if (uVar16 < 0x140) {
        uVar18 = *(uint *)(param_1 + 0x314);
        uVar12 = *(int *)(param_1 + 0x2cc) + (int)local_c0 * 8;
        uVar12 = uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 |
                 uVar12 * 0x1000000;
LAB_00100644:
        uVar17 = uVar16;
        local_50 = 0;
        local_60 = (undefined1  [16])0x0;
        lVar15 = -local_c0;
        do {
          uVar16 = (ulong)uVar18;
          uVar18 = uVar18 + 1;
          bVar3 = (byte)((ulong)lVar15 >> 0x38);
          *(byte *)(param_1 + 0x2d4 + uVar16) =
               ~((byte)((ulong)-lVar15 >> 0x38) | bVar3) & 0x80 |
               *(byte *)((long)param_2 + lVar15 + local_c0) & bVar3;
          if (uVar18 == 0x40) {
            uVar13 = (uint)((ulong)(7 - lVar15) >> 0x20);
            *(uint *)(param_1 + 0x310) = *(uint *)(param_1 + 0x310) | uVar12 & (int)uVar13 >> 0x1f;
            sha1_block_data_order(c,param_1 + 0x2d4,1);
            uVar18 = 0;
            uVar13 = (int)((uint)((ulong)(lVar15 + -0x48) >> 0x20) & uVar13) >> 0x1f;
            local_50 = local_50 | uVar13 & *(uint *)(param_1 + 0x2c8);
            auVar28._4_4_ = uVar13;
            auVar28._0_4_ = uVar13;
            auVar28._8_4_ = uVar13;
            auVar28._12_4_ = uVar13;
            local_60 = auVar28 & *(undefined1 (*) [16])(param_1 + 0x2b8) | local_60;
          }
          lVar15 = lVar15 + 1;
          uVar16 = uVar17;
        } while (lVar15 != uVar17 - local_c0);
      }
      else {
        uVar17 = 0;
        lVar15 = (ulong)(0x40 - *(int *)(param_1 + 0x314)) + (param_4 - 0x154 & 0xffffffffffffffc0);
        sha1_update(c,param_2,lVar15);
        local_c0 = local_c0 - lVar15;
        param_2 = (undefined8 *)((long)param_2 + lVar15);
        local_60 = (undefined1  [16])0x0;
        local_50 = 0;
        uVar18 = *(int *)(param_1 + 0x2cc) + (int)local_c0 * 8;
        uVar12 = uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 | (uVar18 & 0xff00) << 8 |
                 uVar18 * 0x1000000;
        uVar18 = *(uint *)(param_1 + 0x314);
        uVar16 = uVar16 - lVar15;
        if (uVar16 != 0) goto LAB_00100644;
      }
      pauVar24 = (undefined1 (*) [16])(param_1 + 0x2d4);
      uVar14 = (ulong)uVar18;
      if (uVar18 < 0x40) {
        puVar21 = (undefined8 *)(param_1 + 0x2d4 + uVar14);
        uVar25 = 0x40 - uVar14;
        uVar13 = (uint)uVar25;
        if (uVar13 < 8) {
          if ((uVar25 & 4) == 0) {
            if ((uVar13 != 0) && (*(undefined1 *)puVar21 = 0, (uVar25 & 2) != 0)) {
              *(undefined2 *)((long)puVar21 + ((uVar25 & 0xffffffff) - 2)) = 0;
            }
          }
          else {
            *(undefined4 *)puVar21 = 0;
            *(undefined4 *)((long)puVar21 + ((uVar25 & 0xffffffff) - 4)) = 0;
          }
        }
        else {
          *puVar21 = 0;
          *(undefined8 *)((long)puVar21 + ((uVar25 & 0xffffffff) - 8)) = 0;
          uVar13 = uVar13 + ((int)puVar21 - (int)((ulong)(puVar21 + 1) & 0xfffffffffffffff8)) &
                   0xfffffff8;
          if (7 < uVar13) {
            uVar22 = 0;
            do {
              uVar25 = (ulong)uVar22;
              uVar22 = uVar22 + 8;
              *(undefined8 *)(((ulong)(puVar21 + 1) & 0xfffffffffffffff8) + uVar25) = 0;
            } while (uVar22 < uVar13);
          }
        }
        uVar16 = (uVar16 + 0x40) - uVar14;
        lVar15 = -0x49 - local_c0;
        if (0x38 < uVar18) goto LAB_00100c00;
      }
      else {
LAB_00100c00:
        uVar18 = (uint)((local_c0 + 8) - uVar16 >> 0x20);
        *(uint *)(param_1 + 0x310) = *(uint *)(param_1 + 0x310) | uVar12 & (int)uVar18 >> 0x1f;
        sha1_block_data_order(c,pauVar24,1);
        lVar15 = -0x49 - local_c0;
        lVar2 = uVar16 + lVar15;
        uVar16 = uVar16 + 0x40;
        uVar18 = (int)((uint)((ulong)lVar2 >> 0x20) & uVar18) >> 0x1f;
        local_50 = local_50 | uVar18 & *(uint *)(param_1 + 0x2c8);
        local_60._4_4_ = uVar18 & *(uint *)(param_1 + 700) | local_60._4_4_;
        local_60._0_4_ = uVar18 & *(uint *)(param_1 + 0x2b8) | local_60._0_4_;
        local_60._8_4_ = uVar18 & *(uint *)(param_1 + 0x2c0) | local_60._8_4_;
        local_60._12_4_ = uVar18 & *(uint *)(param_1 + 0x2c4) | local_60._12_4_;
        *pauVar24 = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(param_1 + 0x2e4) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(param_1 + 0x2f4) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(param_1 + 0x304) = (undefined1  [16])0x0;
      }
      *(uint *)(param_1 + 0x310) = uVar12;
      sha1_block_data_order(c,pauVar24,1);
      uVar18 = (uint)((long)(lVar15 + uVar16) >> 0x3f);
      uVar13 = *(uint *)(param_1 + 0x2b8) & uVar18 | local_60._0_4_;
      uVar22 = local_60._4_4_ | *(uint *)(param_1 + 700) & uVar18;
      local_50 = *(uint *)(param_1 + 0x2c8) & uVar18 | local_50;
      uVar12 = *(uint *)(param_1 + 0x2c0) & uVar18 | local_60._8_4_;
      uVar18 = uVar18 & *(uint *)(param_1 + 0x2c4) | local_60._12_4_;
      local_60._12_4_ =
           uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 | (uVar18 & 0xff00) << 8 | uVar18 << 0x18;
      local_60._8_4_ =
           uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 | uVar12 << 0x18;
      local_60._4_4_ =
           uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8 | (uVar22 & 0xff00) << 8 | uVar22 << 0x18;
      local_60._0_4_ =
           uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 | uVar13 << 0x18;
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
      pbVar23 = (byte *)((long)param_2 + (uVar17 - uVar27) + -1);
      uVar18 = 0;
      uVar27 = ((int)(uVar17 - uVar27) - (int)local_c0) - 0x15;
      do {
        bVar3 = *pbVar23;
        pbVar23 = pbVar23 + 1;
        uVar13 = (int)uVar27 >> 0x1f;
        uVar12 = -uVar27 - 0x15 & uVar27;
        pbVar1 = local_60 + uVar26;
        uVar26 = uVar26 + (uVar12 >> 0x1f);
        uVar27 = uVar27 + 1;
        uVar18 = uVar18 | (uint)(bVar3 ^ *pbVar1) & (int)uVar12 >> 0x1f | ~uVar13 & (bVar3 ^ uVar19)
        ;
      } while (pbVar23 != (byte *)((long)param_2 + uVar17 + 0x13));
      iVar29 = ((int)(-uVar18 | uVar20) >> 0x1f) + 1;
      goto LAB_00100490;
    }
    aesni_cbc_encrypt(param_3,param_2,param_4,param_1 + 0xc0,param_1 + 0x20,0);
    sha1_update(param_1 + 0x2b8,param_2,param_4);
  }
  else {
    uVar17 = (ulong)(0x40 - *(int *)(param_1 + 0x314));
    if (uVar16 == 0xffffffffffffffff) {
      if (uVar17 < param_4) {
        lVar15 = 0;
        uVar14 = uVar17;
        puVar21 = param_3;
        uVar16 = param_4;
LAB_0010099c:
        uVar25 = uVar16 - uVar14;
        if (uVar25 < 0x40) goto LAB_0010034b;
        uStack_d0 = 0x1009d6;
        sha1_update(param_1 + 0x2b8,puVar21,uVar17);
        param_5 = uVar14 + (long)param_3;
        aesni_cbc_sha1_enc(param_3,param_2,uVar25 >> 6,param_1 + 0xc0,param_1 + 0x20,param_1 + 0x2b8
                          );
        uVar26 = uVar25 & 0xffffffffffffffc0;
        uVar19 = (int)uVar26 * 8;
        uVar27 = uVar19 + (int)*(undefined8 *)(param_1 + 0x2cc);
        iVar29 = (int)(uVar25 >> 0x1d) + (int)((ulong)*(undefined8 *)(param_1 + 0x2cc) >> 0x20);
        *(ulong *)(param_1 + 0x2cc) = CONCAT44(iVar29,uVar27);
        if (uVar27 < uVar19) {
          *(int *)(param_1 + 0x2d0) = iVar29 + 1;
        }
        lVar15 = uVar17 + lVar15 + uVar26;
        uVar17 = param_4 - uVar26;
        __dest = (undefined8 *)((long)param_2 + uVar26);
        puVar21 = (undefined8 *)((long)param_3 + lVar15);
        param_6 = uStack_d0;
        local_a8 = uVar17;
        goto LAB_00100373;
      }
      sha1_update(param_1 + 0x2b8,param_3,param_4);
      local_a8 = param_4;
    }
    else {
      if ((uVar16 + 0x24 & 0xfffffffffffffff0) != param_4) goto LAB_00100490;
      uVar14 = (ulong)(0x301 < *(uint *)(param_1 + 0x1c0));
      lVar15 = uVar14 * 0x10;
      puVar21 = param_3 + uVar14 * 2;
      uVar14 = lVar15 + uVar17;
      if (lVar15 + uVar17 < uVar16) goto LAB_0010099c;
LAB_0010034b:
      uVar17 = param_1 + 0xc0;
      __dest = param_2;
      local_a8 = param_4;
LAB_00100373:
      local_c8 = (SHA_CTX *)(param_1 + 0x2b8);
      local_b8 = param_1 + 0x20;
      local_c0 = param_1 + 0xc0;
      sha1_update(local_c8,puVar21,uVar16 - lVar15,uVar17,param_5,param_6);
      if (param_4 != uVar16) {
        if (param_3 != param_2) {
          memcpy(__dest,(void *)((long)param_3 + uVar26),uVar16 - uVar26);
        }
        md = (uchar *)((long)param_2 + uVar16);
        SHA1_Final(md,local_c8);
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
        sha1_update(local_c8,md,0x14);
        SHA1_Final(md,local_c8);
        uVar26 = uVar16 + 0x14;
        if (uVar26 < param_4) {
          memset((void *)(uVar26 + (long)param_2),((uint)param_4 - 1) - (int)uVar26 & 0xff,
                 (param_4 - 0x14) - uVar16);
        }
        aesni_cbc_encrypt(__dest,__dest,local_a8,local_c0,local_b8,1);
        goto LAB_00100484;
      }
      param_3 = (undefined8 *)((long)param_3 + uVar26);
      param_2 = __dest;
    }
    local_b8 = param_1 + 0x20;
    local_c0 = param_1 + 0xc0;
    aesni_cbc_encrypt(param_3,param_2,local_a8,local_c0,local_b8,1);
  }
LAB_00100484:
  iVar29 = 1;
LAB_00100490:
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
               (long param_1,undefined1 *param_2,long param_3,uint param_4,int param_5)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 uVar16;
  ushort uVar17;
  int iVar18;
  undefined4 uVar19;
  long lVar20;
  long lVar21;
  long *plVar22;
  long *plVar23;
  long *plVar24;
  uint *puVar25;
  uint *puVar26;
  undefined8 *puVar27;
  ulong uVar28;
  byte bVar29;
  ulong uVar30;
  int iVar31;
  uint uVar32;
  undefined4 *puVar33;
  uint uVar34;
  uint uVar35;
  ulong *puVar36;
  uint uVar37;
  ulong uVar38;
  long *plVar39;
  uint uVar40;
  undefined1 *puVar41;
  ulong *puVar42;
  uint uVar43;
  ulong uVar44;
  uint uVar45;
  uint uVar46;
  long in_FS_OFFSET;
  byte bVar47;
  long *local_7b8;
  long local_7b0;
  long *local_7a8;
  long local_778;
  uint local_770;
  long *local_768;
  long local_748;
  int local_740 [2];
  long local_738 [14];
  long local_6c8;
  undefined4 local_6c0 [2];
  long alStack_6b8 [14];
  long local_648;
  undefined1 *puStack_640;
  undefined4 local_638 [2];
  ulong local_630;
  undefined8 uStack_628;
  undefined1 local_608 [256];
  ulong local_508 [129];
  uint local_100 [8];
  undefined4 local_e0 [8];
  undefined4 local_c0 [8];
  undefined4 local_a0 [8];
  undefined4 local_80 [16];
  long local_40;
  
  bVar47 = 0;
  uVar45 = param_5 * 4;
  local_7b0 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar18 = RAND_bytes_ex(*(undefined8 *)(param_1 + 0xb8),local_508,param_5 << 6,0);
  if (iVar18 < 1) goto LAB_00101420;
  bVar29 = (char)param_5 + 1;
  uVar40 = param_4 >> (bVar29 & 0x1f);
  local_770 = (param_4 + uVar40) - (uVar40 << (bVar29 & 0x1f));
  if ((uVar40 < local_770) && ((local_770 + 0x16 & 0x3f) < uVar45 - 1)) {
    uVar40 = uVar40 + 1;
    local_770 = local_770 + param_5 * -4 + 1;
  }
  local_748 = param_3;
  local_648 = param_3;
  puStack_640 = param_2 + 0x15;
  *(ulong *)(param_2 + 5) = local_508[0];
  *(ulong *)(param_2 + 0xd) = local_508[1];
  local_630 = local_508[0];
  uStack_628 = local_508[1];
  uVar34 = local_770;
  if (uVar40 <= local_770) {
    uVar34 = uVar40;
  }
  uVar34 = uVar34 - 0x33;
  if ((int)uVar45 < 2) {
    local_508[0] = *(ulong *)(param_1 + 0x2d4);
    sha1_multi_block(local_100,&local_6c8,0);
    if (0x83f < uVar34) goto LAB_00101196;
    sha1_multi_block(local_100,&local_748,0);
    puVar42 = local_508;
    for (lVar20 = 0x80; lVar20 != 0; lVar20 = lVar20 + -1) {
      *puVar42 = 0;
      puVar42 = puVar42 + (ulong)bVar47 * -2 + 1;
    }
LAB_00101819:
    local_7b8 = &local_6c8;
    local_7b0 = 0;
    sha1_multi_block(local_100,local_7b8,0);
    puVar42 = local_508;
    for (lVar20 = 0x80; lVar20 != 0; lVar20 = lVar20 + -1) {
      *puVar42 = 0;
      puVar42 = puVar42 + (ulong)bVar47 * -2 + 1;
    }
    sha1_multi_block(local_100,local_7b8,0);
  }
  else {
    plVar23 = &local_748;
    puVar41 = local_608;
    puVar42 = local_508 + 2;
    plVar22 = plVar23;
    do {
      uVar44 = *puVar42;
      uVar28 = puVar42[1];
      uVar30 = (long)puVar41 - (long)&local_648;
      plVar22[2] = *plVar22 + (ulong)uVar40;
      *(ulong *)(puVar41 + -0x18) = *plVar22 + (ulong)uVar40;
      lVar20 = *(long *)(puVar41 + -0x38) + (ulong)((uVar40 + 0x24 & 0xfffffff0) + 0x15);
      *(long *)(puVar41 + -0x10) = lVar20;
      *(ulong *)(lVar20 + -0x10) = uVar44;
      *(ulong *)(lVar20 + -8) = uVar28;
      if (uVar30 < 0x140) {
        uVar30 = 0x140;
      }
      puVar36 = puVar42 + 2;
      plVar22 = plVar22 + 2;
      lVar20 = __memcpy_chk(puVar41,puVar42,0x10,(long)&local_648 + (uVar30 - (long)puVar41));
      puVar41 = (undefined1 *)(lVar20 + 0x28);
      puVar42 = puVar36;
    } while (puVar36 != local_508 + (ulong)uVar45 * 2);
    local_508[0] = *(ulong *)(param_1 + 0x2d4);
    bVar29 = *(byte *)(param_1 + 0x2dd);
    uVar37 = *(uint *)(param_1 + 0x2b8);
    uVar19 = *(undefined4 *)(param_1 + 0x2c0);
    uVar44 = local_508[0] >> 0x38;
    uVar28 = local_508[0] & 0xff000000000000;
    uVar30 = local_508[0] & 0xff0000000000;
    uVar11 = local_508[0] & 0xff00000000;
    uVar12 = local_508[0] & 0xff000000;
    uVar13 = local_508[0] & 0xff0000;
    uVar14 = local_508[0] & 0xff00;
    uVar15 = local_508[0] << 0x38;
    uVar3 = *(undefined4 *)(param_1 + 0x2c4);
    uVar4 = *(undefined4 *)(param_1 + 700);
    uVar5 = *(undefined4 *)(param_1 + 0x2c8);
    bVar1 = *(byte *)(param_1 + 0x2de);
    bVar2 = *(byte *)(param_1 + 0x2dc);
    lVar20 = 0;
    puVar42 = local_508;
    plVar22 = plVar23;
    do {
      local_100[lVar20] = uVar37;
      uVar35 = local_770;
      if (uVar45 - 1 != (uint)lVar20) {
        uVar35 = uVar40;
      }
      local_e0[lVar20] = uVar4;
      local_c0[lVar20] = uVar19;
      *(char *)((long)puVar42 + 0xc) = (char)uVar35;
      local_a0[lVar20] = uVar3;
      local_80[lVar20] = uVar5;
      uVar38 = (uVar44 | uVar28 >> 0x28 | uVar30 >> 0x18 | uVar11 >> 8 | uVar12 << 8 |
                uVar13 << 0x18 | uVar14 << 0x28 | uVar15) + lVar20;
      *puVar42 = uVar38 >> 0x38 | (uVar38 & 0xff000000000000) >> 0x28 |
                 (uVar38 & 0xff0000000000) >> 0x18 | (uVar38 & 0xff00000000) >> 8 |
                 (uVar38 & 0xff000000) << 8 | (uVar38 & 0xff0000) << 0x18 |
                 (uVar38 & 0xff00) << 0x28 | uVar38 << 0x38;
      *(uint *)(puVar42 + 1) =
           ((uVar35 & 0xff00 | (uint)bVar1) << 8 | (uint)bVar29) << 8 | (uint)bVar2;
      puVar27 = (undefined8 *)*plVar22;
      uVar16 = puVar27[1];
      *(undefined8 *)((long)puVar42 + 0xd) = *puVar27;
      *(undefined8 *)((long)puVar42 + 0x15) = uVar16;
      uVar16 = puVar27[3];
      *(undefined8 *)((long)puVar42 + 0x1d) = puVar27[2];
      *(undefined8 *)((long)puVar42 + 0x25) = uVar16;
      uVar16 = puVar27[5];
      *(undefined8 *)((long)puVar42 + 0x2d) = puVar27[4];
      *(undefined8 *)((long)puVar42 + 0x35) = uVar16;
      uVar6 = *(undefined4 *)((long)puVar27 + 0x2f);
      *plVar22 = (long)puVar27 + 0x33;
      *(uint *)(plVar22 + 1) = uVar35 - 0x33 >> 6;
      lVar21 = lVar20 + 1;
      *(undefined4 *)((long)puVar42 + 0x3c) = uVar6;
      (&local_6c8)[lVar20 * 2] = (long)puVar42;
      puVar42 = puVar42 + 0x10;
      local_6c0[lVar20 * 4] = 1;
      lVar20 = lVar21;
      plVar22 = plVar22 + 2;
    } while ((uint)lVar21 < uVar45);
    sha1_multi_block(local_100,&local_6c8,param_5);
    if (uVar34 < 0x840) {
      sha1_multi_block(local_100,plVar23,param_5);
      iVar18 = 0;
      puVar42 = local_508;
      for (lVar20 = 0x80; lVar20 != 0; lVar20 = lVar20 + -1) {
        *puVar42 = 0;
        puVar42 = puVar42 + (ulong)bVar47 * -2 + 1;
      }
    }
    else {
      plVar22 = &local_6c8;
      puVar33 = local_638;
      do {
        lVar20 = *plVar23;
        plVar39 = plVar22 + 2;
        plVar23 = plVar23 + 2;
        *(undefined4 *)(plVar22 + 1) = 0x20;
        *plVar22 = lVar20;
        *puVar33 = 0x80;
        plVar22 = plVar39;
        puVar33 = puVar33 + 10;
      } while (alStack_6b8 + (ulong)(uVar45 - 1) * 2 != plVar39);
LAB_00101196:
      local_7b8 = &local_6c8;
      local_768 = &local_648;
      local_7a8 = &local_748;
      uVar37 = uVar34 >> 6;
      do {
        sha1_multi_block(local_100,local_7b8,param_5);
        aesni_multi_cbc_encrypt(local_768,param_1 + 0xc0,param_5);
        plVar23 = local_7a8;
        plVar22 = local_768;
        plVar39 = local_7b8;
        if (param_5 != 0) {
          do {
            lVar20 = *plVar23;
            *(int *)(plVar23 + 1) = (int)plVar23[1] + -0x20;
            plVar24 = plVar23 + 2;
            *(undefined4 *)(plVar39 + 1) = 0x20;
            *plVar23 = lVar20 + 0x800;
            *plVar39 = lVar20 + 0x800;
            lVar20 = plVar22[1];
            *(undefined4 *)(plVar22 + 2) = 0x80;
            *plVar22 = *plVar22 + __LC0;
            plVar22[1] = lVar20 + _UNK_00101c88;
            lVar21 = *(long *)(lVar20 + 0x7f8);
            plVar22[3] = *(long *)(lVar20 + 0x7f0);
            plVar22[4] = lVar21;
            plVar23 = plVar24;
            plVar22 = plVar22 + 5;
            plVar39 = plVar39 + 2;
          } while (local_738 + (ulong)(uVar45 - 1) * 2 != plVar24);
        }
        uVar37 = uVar37 - 0x20;
      } while (0x20 < uVar37);
      iVar18 = (((uVar34 >> 6) - 0x21 >> 5) + 1) * 0x800;
      sha1_multi_block(local_100,local_7a8,param_5);
      puVar42 = local_508;
      for (lVar20 = 0x80; lVar20 != 0; lVar20 = lVar20 + -1) {
        *puVar42 = 0;
        puVar42 = puVar42 + (ulong)bVar47 * -2 + 1;
      }
      if (param_5 == 0) goto LAB_00101819;
    }
    uVar37 = uVar45 - 1;
    local_768 = &local_648;
    local_7b8 = &local_6c8;
    lVar20 = 0;
    puVar42 = local_508;
    uVar35 = 0;
    uVar34 = uVar40;
    while( true ) {
      uVar46 = uVar34 + (-0x33 - iVar18) + *(int *)((long)local_740 + lVar20) * -0x40;
      lVar21 = __memcpy_chk(puVar42,(ulong)(uint)(*(int *)((long)local_740 + lVar20) * 0x40) +
                                    *(long *)((long)local_740 + lVar20 + -8),(ulong)uVar46,
                            lVar20 * -8 + 0x400);
      *(undefined1 *)((long)local_508 + (ulong)uVar46 + (ulong)uVar35 * 0x80) = 0x80;
      uVar34 = uVar34 * 8 + 0x268;
      uVar34 = uVar34 >> 0x18 | (uVar34 & 0xff0000) >> 8 | (uVar34 & 0xff00) << 8 |
               uVar34 * 0x1000000;
      if (uVar46 < 0x38) {
        *(uint *)(lVar21 + 0x3c) = uVar34;
        uVar19 = 1;
      }
      else {
        *(uint *)(lVar21 + 0x7c) = uVar34;
        uVar19 = 2;
      }
      *(undefined4 *)((long)local_6c0 + lVar20) = uVar19;
      *(long *)((long)local_7b8 + lVar20) = lVar21;
      uVar46 = uVar35 + 1;
      puVar42 = (ulong *)(lVar21 + 0x80);
      lVar20 = lVar20 + 0x10;
      if (uVar45 == uVar46) break;
      uVar35 = uVar46;
      uVar34 = local_770;
      if (uVar46 != uVar37) {
        uVar34 = uVar40;
      }
    }
    sha1_multi_block(local_100,local_7b8,param_5);
    puVar42 = local_508;
    for (lVar20 = 0x80; lVar20 != 0; lVar20 = lVar20 + -1) {
      *puVar42 = 0;
      puVar42 = puVar42 + (ulong)bVar47 * -2 + 1;
    }
    uVar45 = *(uint *)(param_1 + 0x268);
    uVar34 = *(uint *)(param_1 + 600);
    uVar46 = *(uint *)(param_1 + 0x25c);
    uVar43 = *(uint *)(param_1 + 0x260);
    uVar7 = *(uint *)(param_1 + 0x264);
    puVar25 = local_100;
    puVar42 = local_508;
    plVar23 = local_7b8;
    do {
      uVar8 = *puVar25;
      uVar9 = puVar25[8];
      *puVar25 = uVar34;
      puVar26 = puVar25 + 1;
      uVar32 = puVar25[0x10];
      uVar10 = puVar25[0x18];
      puVar25[8] = uVar46;
      puVar25[0x10] = uVar43;
      *puVar42 = CONCAT44(uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 |
                          uVar9 << 0x18,
                          uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 |
                          uVar8 << 0x18);
      puVar42[1] = CONCAT44(uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 |
                            uVar10 << 0x18,
                            uVar32 >> 0x18 | (uVar32 & 0xff0000) >> 8 | (uVar32 & 0xff00) << 8 |
                            uVar32 << 0x18);
      uVar8 = puVar25[0x20];
      puVar25[0x18] = uVar7;
      *(uint *)(puVar42 + 2) =
           uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
      puVar25[0x20] = uVar45;
      *(undefined1 *)((long)puVar42 + 0x14) = 0x80;
      *(undefined4 *)((long)puVar42 + 0x3c) = 0xa0020000;
      *plVar23 = (long)puVar42;
      puVar42 = puVar42 + 0x10;
      *(undefined4 *)(plVar23 + 1) = 1;
      puVar25 = puVar26;
      plVar23 = plVar23 + 2;
    } while (puVar26 != local_100 + (ulong)uVar37 + 1);
    sha1_multi_block(local_100,local_7b8,param_5);
    local_7b0 = 0;
    puVar25 = local_100;
    uVar45 = 0;
    uVar34 = uVar40;
    while( true ) {
      memcpy((void *)local_768[1],(void *)*local_768,(ulong)(uVar34 - iVar18));
      uVar43 = *puVar25;
      uVar7 = puVar25[0x10];
      uVar8 = puVar25[8];
      uVar9 = puVar25[0x18];
      *local_768 = local_768[1];
      puVar27 = (undefined8 *)(param_2 + (uVar34 + 0x15));
      uVar46 = puVar25[0x20];
      *(uint *)(puVar27 + 2) =
           uVar46 >> 0x18 | (uVar46 & 0xff0000) >> 8 | (uVar46 & 0xff00) << 8 | uVar46 << 0x18;
      uVar32 = ~(uVar34 + 0x14) & 0xf;
      uVar46 = uVar32 + 1;
      uVar44 = (ulong)uVar46;
      lVar20 = (ulong)uVar32 * 0x101010101010101;
      *puVar27 = CONCAT44(uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 |
                          uVar8 << 0x18,
                          uVar43 >> 0x18 | (uVar43 & 0xff0000) >> 8 | (uVar43 & 0xff00) << 8 |
                          uVar43 << 0x18);
      puVar27[1] = CONCAT44(uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 |
                            uVar9 << 0x18,
                            uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 |
                            uVar7 << 0x18);
      if (uVar46 < 8) {
        if ((uVar46 & 4) == 0) {
          if ((uVar46 != 0) && (*(char *)((long)puVar27 + 0x14) = (char)lVar20, (uVar46 & 2) != 0))
          {
            *(short *)((long)puVar27 + uVar44 + 0x12) = (short)lVar20;
          }
        }
        else {
          *(int *)((long)puVar27 + 0x14) = (int)lVar20;
          *(int *)((long)puVar27 + uVar44 + 0x10) = (int)lVar20;
        }
      }
      else {
        *(long *)((long)puVar27 + 0x14) = lVar20;
        uVar28 = (ulong)((long)puVar27 + 0x1c) & 0xfffffffffffffff8;
        *(long *)((long)puVar27 + uVar44 + 0xc) = lVar20;
        uVar46 = uVar46 + ((int)(undefined1 *)((long)puVar27 + 0x14) - (int)uVar28) & 0xfffffff8;
        if (7 < uVar46) {
          uVar43 = 0;
          do {
            uVar30 = (ulong)uVar43;
            uVar43 = uVar43 + 8;
            *(long *)(uVar28 + uVar30) = lVar20;
          } while (uVar43 < uVar46);
        }
      }
      iVar31 = uVar32 + uVar34 + 0x14;
      puVar41 = (undefined1 *)((long)puVar27 + 0x14) + uVar44;
      plVar23 = local_768 + 5;
      puVar25 = puVar25 + 1;
      *(uint *)(local_768 + 2) = (uint)((1 - iVar18) + iVar31) >> 4;
      *param_2 = *(undefined1 *)(param_1 + 0x2dc);
      param_2[1] = *(undefined1 *)(param_1 + 0x2dd);
      param_2[2] = *(undefined1 *)(param_1 + 0x2de);
      uVar17 = (short)iVar31 + 0x11;
      *(ushort *)(param_2 + 3) = uVar17 * 0x100 | uVar17 >> 8;
      local_7b0 = local_7b0 + (ulong)(iVar31 + 0x16);
      uVar46 = uVar45 + 1;
      if (uVar35 == uVar45) break;
      local_768 = plVar23;
      param_2 = puVar41;
      uVar45 = uVar46;
      uVar34 = local_770;
      if (uVar46 != uVar37) {
        uVar34 = uVar40;
      }
    }
  }
  local_768 = &local_648;
  local_778 = param_1 + 0xc0;
  aesni_multi_cbc_encrypt(local_768,local_778,param_5);
  OPENSSL_cleanse(local_508,0x400);
  OPENSSL_cleanse(local_100,0xa0);
  *(long *)(param_1 + 0x1e8) = local_7b0;
LAB_00101420:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_7b0;
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
    return ((int)*(long *)(param_1 + 0x1e0) + 0x24U & 0xfffffff0) + 0x15;
  }
  __src = "providers/implementations/ciphers/cipher_aes_cbc_hmac_sha1_hw.c";
  pcVar3 = "assertion failed: ctx->multiblock_max_send_fragment != 0";
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
    c = (SHA_CTX *)(pcVar3 + 0x1f8);
    SHA1_Init(c);
    sha1_update(c,__src,__n);
    SHA1_Final(auStack_80,c);
  }
  puVar1 = (ulong *)auStack_80;
  do {
    puVar2 = puVar1 + 2;
    *puVar1 = *puVar1 ^ __LC3;
    puVar1[1] = puVar1[1] ^ _UNK_00101c98;
    puVar1 = puVar2;
  } while (puVar2 != &uStack_40);
  SHA1_Init((SHA_CTX *)(pcVar3 + 0x1f8));
  sha1_update((SHA_CTX *)(pcVar3 + 0x1f8),auStack_80,0x40);
  puVar1 = (ulong *)auStack_80;
  do {
    puVar2 = puVar1 + 2;
    *puVar1 = *puVar1 ^ __LC4;
    puVar1[1] = puVar1[1] ^ _UNK_00101ca8;
    puVar1 = puVar2;
  } while (puVar2 != &uStack_40);
  SHA1_Init((SHA_CTX *)(pcVar3 + 600));
  sha1_update((SHA_CTX *)(pcVar3 + 600),auStack_80,0x40);
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
    c = (SHA_CTX *)(param_1 + 0x1f8);
    SHA1_Init(c);
    sha1_update(c,param_2,param_3);
    SHA1_Final(local_78,c);
  }
  puVar1 = (ulong *)local_78;
  do {
    puVar2 = puVar1 + 2;
    *puVar1 = *puVar1 ^ __LC3;
    puVar1[1] = puVar1[1] ^ _UNK_00101c98;
    puVar1 = puVar2;
  } while (puVar2 != &local_38);
  SHA1_Init((SHA_CTX *)(param_1 + 0x1f8));
  sha1_update((SHA_CTX *)(param_1 + 0x1f8),local_78,0x40);
  puVar1 = (ulong *)local_78;
  do {
    puVar2 = puVar1 + 2;
    *puVar1 = *puVar1 ^ __LC4;
    puVar1[1] = puVar1[1] ^ _UNK_00101ca8;
    puVar1 = puVar2;
  } while (puVar2 != &local_38);
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
  return _DAT_00102014 & 0x2000000;
}



undefined1 * ossl_prov_cipher_hw_aes_cbc_hmac_sha1(void)

{
  return cipher_hw_aes_hmac_sha1;
}


