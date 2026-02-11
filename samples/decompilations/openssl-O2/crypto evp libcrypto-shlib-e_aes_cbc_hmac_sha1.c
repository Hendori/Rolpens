
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



ulong aesni_cbc_hmac_sha1_cipher(long param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4)

{
  uchar *md;
  long lVar1;
  byte *pbVar2;
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
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  undefined1 (*pauVar19) [16];
  uint uVar20;
  uint uVar21;
  long lVar22;
  uint uVar23;
  uint uVar24;
  undefined8 *puVar25;
  byte *pbVar26;
  ulong uVar27;
  ulong uVar28;
  SHA_CTX *pSVar29;
  uint uVar30;
  long in_FS_OFFSET;
  uint uVar31;
  int iVar33;
  undefined1 auVar32 [16];
  undefined8 *local_c0;
  undefined8 *local_b8;
  ulong local_a8;
  undefined1 local_60 [16];
  uint local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar14 = EVP_CIPHER_CTX_get_cipher_data();
  uVar18 = *(ulong *)(lVar14 + 0x218);
  iVar33 = *(int *)(lVar14 + 0x210);
  *(undefined8 *)(lVar14 + 0x218) = 0xffffffffffffffff;
  uVar28 = (ulong)((uint)param_4 & 0xf);
  if ((param_4 & 0xf) != 0) {
LAB_0010014d:
    uVar15 = 0;
    goto LAB_0010014f;
  }
  uVar15 = EVP_CIPHER_CTX_is_encrypting(param_1);
  local_c0 = param_2;
  if ((int)uVar15 == 0) {
    if (uVar18 != 0xffffffffffffffff) {
      if (CONCAT11(*(undefined1 *)(lVar14 + 0x21c + uVar18),*(undefined1 *)(lVar14 + 0x21d + uVar18)
                  ) < 0x302) {
        if (param_4 < 0x15) goto LAB_0010014f;
      }
      else {
        if (param_4 < 0x25) goto LAB_0010014f;
        local_c0 = param_2 + 2;
        uVar4 = *param_3;
        uVar5 = param_3[1];
        param_4 = param_4 - 0x10;
        param_3 = param_3 + 2;
        *(undefined8 *)(param_1 + 0x28) = uVar4;
        *(undefined8 *)(param_1 + 0x30) = uVar5;
      }
      aesni_cbc_encrypt(param_3,local_c0,param_4,lVar14,param_1 + 0x28,0);
      uVar21 = (int)param_4 - 0x15;
      bVar3 = *(byte *)((long)local_c0 + (param_4 - 1));
      uVar8 = *(undefined8 *)(lVar14 + 0xf4);
      uVar9 = *(undefined8 *)(lVar14 + 0xfc);
      uVar10 = *(undefined8 *)(lVar14 + 0x104);
      uVar11 = *(undefined8 *)(lVar14 + 0x10c);
      uVar4 = *(undefined8 *)(lVar14 + 0x134);
      uVar5 = *(undefined8 *)(lVar14 + 0x13c);
      uVar6 = *(undefined8 *)(lVar14 + 0x144);
      uVar7 = *(undefined8 *)(lVar14 + 0x14c);
      uVar31 = 0xff - uVar21 >> 0x18 | uVar21 & 0xff;
      uVar23 = uVar31 ^ (uVar31 - bVar3 ^ (uint)bVar3 | uVar31 ^ bVar3);
      uVar21 = (int)uVar23 >> 0x1f;
      uVar21 = (uint)bVar3 & ~uVar21 | uVar21 & uVar31;
      lVar17 = param_4 - (uVar21 + 0x15);
      *(char *)(lVar14 + 0x21f + uVar18) = (char)lVar17;
      *(char *)(lVar14 + 0x21e + uVar18) = (char)((ulong)lVar17 >> 8);
      pSVar29 = (SHA_CTX *)(lVar14 + 0x1b4);
      *(undefined8 *)(lVar14 + 0x1b4) = uVar8;
      *(undefined8 *)(lVar14 + 0x1bc) = uVar9;
      *(undefined8 *)(lVar14 + 0x1c4) = uVar10;
      *(undefined8 *)(lVar14 + 0x1cc) = uVar11;
      *(undefined8 *)(lVar14 + 0x1d4) = *(undefined8 *)(lVar14 + 0x114);
      *(undefined8 *)(lVar14 + 0x1dc) = *(undefined8 *)(lVar14 + 0x11c);
      *(undefined8 *)(lVar14 + 0x1e4) = *(undefined8 *)(lVar14 + 0x124);
      *(undefined8 *)(lVar14 + 0x1ec) = *(undefined8 *)(lVar14 + 300);
      *(undefined8 *)(lVar14 + 500) = uVar4;
      *(undefined8 *)(lVar14 + 0x1fc) = uVar5;
      *(undefined8 *)(lVar14 + 0x204) = uVar6;
      *(undefined8 *)(lVar14 + 0x20c) = uVar7;
      sha1_update(pSVar29,lVar14 + 0x220,uVar18);
      uVar18 = param_4 - 0x14;
      if (uVar18 < 0x140) {
        uVar20 = *(uint *)(lVar14 + 0x210);
        uVar12 = *(int *)(lVar14 + 0x1c8) + (int)lVar17 * 8;
        uVar12 = uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 |
                 uVar12 * 0x1000000;
LAB_001004cf:
        uVar15 = uVar18;
        local_50 = 0;
        local_60 = (undefined1  [16])0x0;
        lVar22 = -lVar17;
        do {
          uVar18 = (ulong)uVar20;
          uVar20 = uVar20 + 1;
          bVar3 = (byte)((ulong)lVar22 >> 0x38);
          *(byte *)(lVar14 + 0x1d0 + uVar18) =
               ~((byte)((ulong)-lVar22 >> 0x38) | bVar3) & 0x80 |
               *(byte *)((long)local_c0 + lVar22 + lVar17) & bVar3;
          if (uVar20 == 0x40) {
            uVar13 = (uint)((ulong)(7 - lVar22) >> 0x20);
            *(uint *)(lVar14 + 0x20c) = *(uint *)(lVar14 + 0x20c) | uVar12 & (int)uVar13 >> 0x1f;
            sha1_block_data_order(pSVar29,lVar14 + 0x1d0,1);
            uVar20 = 0;
            uVar13 = (int)((uint)((ulong)(lVar22 + -0x48) >> 0x20) & uVar13) >> 0x1f;
            local_50 = local_50 | uVar13 & *(uint *)(lVar14 + 0x1c4);
            auVar32._4_4_ = uVar13;
            auVar32._0_4_ = uVar13;
            auVar32._8_4_ = uVar13;
            auVar32._12_4_ = uVar13;
            local_60 = auVar32 & *(undefined1 (*) [16])(lVar14 + 0x1b4) | local_60;
          }
          lVar22 = lVar22 + 1;
          uVar18 = uVar15;
        } while (lVar22 != uVar15 - lVar17);
      }
      else {
        lVar22 = (ulong)(0x40 - *(int *)(lVar14 + 0x210)) + (param_4 - 0x154 & 0xffffffffffffffc0);
        lVar17 = lVar17 - lVar22;
        sha1_update(pSVar29,local_c0,lVar22);
        uVar15 = 0;
        local_c0 = (undefined8 *)((long)local_c0 + lVar22);
        uVar20 = *(uint *)(lVar14 + 0x210);
        local_50 = 0;
        uVar12 = *(int *)(lVar14 + 0x1c8) + (int)lVar17 * 8;
        local_60 = (undefined1  [16])0x0;
        uVar12 = uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 |
                 uVar12 * 0x1000000;
        uVar18 = uVar18 - lVar22;
        if (uVar18 != 0) goto LAB_001004cf;
      }
      pauVar19 = (undefined1 (*) [16])(lVar14 + 0x1d0);
      uVar16 = (ulong)uVar20;
      if (uVar20 < 0x40) {
        puVar25 = (undefined8 *)(lVar14 + 0x1d0 + uVar16);
        uVar27 = 0x40 - uVar16;
        uVar13 = (uint)uVar27;
        if (uVar13 < 8) {
          if ((uVar27 & 4) == 0) {
            if ((uVar13 != 0) && (*(undefined1 *)puVar25 = 0, (uVar27 & 2) != 0)) {
              *(undefined2 *)((long)puVar25 + ((uVar27 & 0xffffffff) - 2)) = 0;
            }
          }
          else {
            *(undefined4 *)puVar25 = 0;
            *(undefined4 *)((long)puVar25 + ((uVar27 & 0xffffffff) - 4)) = 0;
          }
        }
        else {
          *puVar25 = 0;
          *(undefined8 *)((long)puVar25 + ((uVar27 & 0xffffffff) - 8)) = 0;
          uVar13 = uVar13 + ((int)puVar25 - (int)((ulong)(puVar25 + 1) & 0xfffffffffffffff8)) &
                   0xfffffff8;
          if (7 < uVar13) {
            uVar24 = 0;
            do {
              uVar27 = (ulong)uVar24;
              uVar24 = uVar24 + 8;
              *(undefined8 *)(((ulong)(puVar25 + 1) & 0xfffffffffffffff8) + uVar27) = 0;
            } while (uVar24 < uVar13);
          }
        }
        uVar18 = (uVar18 + 0x40) - uVar16;
        lVar22 = -0x49 - lVar17;
        if (0x38 < uVar20) goto LAB_001009d0;
      }
      else {
LAB_001009d0:
        lVar22 = -0x49 - lVar17;
        uVar20 = (uint)((lVar17 + 8) - uVar18 >> 0x20);
        *(uint *)(lVar14 + 0x20c) = *(uint *)(lVar14 + 0x20c) | uVar12 & (int)uVar20 >> 0x1f;
        sha1_block_data_order(pSVar29,pauVar19,1);
        lVar1 = uVar18 + lVar22;
        uVar18 = uVar18 + 0x40;
        uVar20 = (int)(uVar20 & (uint)((ulong)lVar1 >> 0x20)) >> 0x1f;
        local_50 = local_50 | uVar20 & *(uint *)(lVar14 + 0x1c4);
        local_60._4_4_ = uVar20 & *(uint *)(lVar14 + 0x1b8) | local_60._4_4_;
        local_60._0_4_ = uVar20 & *(uint *)(lVar14 + 0x1b4) | local_60._0_4_;
        local_60._8_4_ = uVar20 & *(uint *)(lVar14 + 0x1bc) | local_60._8_4_;
        local_60._12_4_ = uVar20 & *(uint *)(lVar14 + 0x1c0) | local_60._12_4_;
        *pauVar19 = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(lVar14 + 0x1e0) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(lVar14 + 0x1f0) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(lVar14 + 0x200) = (undefined1  [16])0x0;
      }
      *(uint *)(lVar14 + 0x20c) = uVar12;
      sha1_block_data_order(pSVar29,pauVar19,1);
      uVar24 = (uint)((long)(lVar22 + uVar18) >> 0x3f);
      uVar20 = *(uint *)(lVar14 + 0x1b4) & uVar24 | local_60._0_4_;
      uVar12 = *(uint *)(lVar14 + 0x1bc) & uVar24 | local_60._8_4_;
      uVar13 = local_60._4_4_ | *(uint *)(lVar14 + 0x1b8) & uVar24;
      uVar30 = uVar24 & *(uint *)(lVar14 + 0x1c0) | local_60._12_4_;
      local_50 = *(uint *)(lVar14 + 0x1c4) & uVar24 | local_50;
      local_60._4_4_ =
           uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 | uVar13 << 0x18;
      local_60._0_4_ =
           uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 | (uVar20 & 0xff00) << 8 | uVar20 << 0x18;
      local_60._12_4_ =
           uVar30 >> 0x18 | (uVar30 & 0xff0000) >> 8 | (uVar30 & 0xff00) << 8 | uVar30 << 0x18;
      local_60._8_4_ =
           uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 | uVar12 << 0x18;
      local_50 = local_50 >> 0x18 | (local_50 & 0xff0000) >> 8 | (local_50 & 0xff00) << 8 |
                 local_50 << 0x18;
      *(undefined8 *)(lVar14 + 0x1b4) = *(undefined8 *)(lVar14 + 0x154);
      *(undefined8 *)(lVar14 + 0x1bc) = *(undefined8 *)(lVar14 + 0x15c);
      *(undefined8 *)(lVar14 + 0x1c4) = *(undefined8 *)(lVar14 + 0x164);
      *(undefined8 *)(lVar14 + 0x1cc) = *(undefined8 *)(lVar14 + 0x16c);
      *(undefined8 *)(lVar14 + 0x1d4) = *(undefined8 *)(lVar14 + 0x174);
      *(undefined8 *)(lVar14 + 0x1dc) = *(undefined8 *)(lVar14 + 0x17c);
      *(undefined8 *)(lVar14 + 0x1e4) = *(undefined8 *)(lVar14 + 0x184);
      *(undefined8 *)(lVar14 + 0x1ec) = *(undefined8 *)(lVar14 + 0x18c);
      *(undefined8 *)(lVar14 + 500) = *(undefined8 *)(lVar14 + 0x194);
      *(undefined8 *)(lVar14 + 0x1fc) = *(undefined8 *)(lVar14 + 0x19c);
      *(undefined8 *)(lVar14 + 0x204) = *(undefined8 *)(lVar14 + 0x1a4);
      *(undefined8 *)(lVar14 + 0x20c) = *(undefined8 *)(lVar14 + 0x1ac);
      sha1_update(pSVar29,local_60,0x14);
      SHA1_Final(local_60,pSVar29);
      pbVar26 = (byte *)((long)local_c0 + (uVar15 - uVar31) + -1);
      uVar20 = 0;
      uVar31 = ((int)(uVar15 - uVar31) - (int)lVar17) - 0x15;
      do {
        bVar3 = *pbVar26;
        pbVar26 = pbVar26 + 1;
        uVar13 = (int)uVar31 >> 0x1f;
        uVar12 = -uVar31 - 0x15 & uVar31;
        pbVar2 = local_60 + uVar28;
        uVar28 = uVar28 + (uVar12 >> 0x1f);
        uVar31 = uVar31 + 1;
        uVar20 = uVar20 | (uint)(bVar3 ^ *pbVar2) & (int)uVar12 >> 0x1f | ~uVar13 & (bVar3 ^ uVar21)
        ;
      } while (pbVar26 != (byte *)((long)local_c0 + uVar15 + 0x13));
      uVar15 = (ulong)(((int)(-uVar20 | uVar23) >> 0x1f) + 1);
      goto LAB_0010014f;
    }
    aesni_cbc_encrypt(param_3,param_2,param_4,lVar14,param_1 + 0x28,0);
    sha1_update(lVar14 + 0x1b4,param_2,param_4);
  }
  else {
    uVar15 = (ulong)(0x40 - iVar33);
    local_a8 = param_4;
    local_b8 = param_2;
    if (uVar18 == 0xffffffffffffffff) {
      if (uVar15 < param_4) {
        lVar17 = 0;
        puVar25 = param_3;
        uVar16 = uVar15;
        uVar18 = param_4;
LAB_00100808:
        uVar27 = uVar18 - uVar16;
        if (0x3f < uVar27) {
          sha1_update(lVar14 + 0x1b4,puVar25,uVar15);
          aesni_cbc_sha1_enc(param_3,param_2,uVar27 >> 6,lVar14,param_1 + 0x28,lVar14 + 0x1b4,
                             uVar16 + (long)param_3);
          uVar28 = uVar27 & 0xffffffffffffffc0;
          uVar21 = (int)uVar28 * 8;
          uVar31 = uVar21 + (int)*(undefined8 *)(lVar14 + 0x1c8);
          iVar33 = (int)(uVar27 >> 0x1d) + (int)((ulong)*(undefined8 *)(lVar14 + 0x1c8) >> 0x20);
          *(ulong *)(lVar14 + 0x1c8) = CONCAT44(iVar33,uVar31);
          if (uVar31 < uVar21) {
            *(int *)(lVar14 + 0x1cc) = iVar33 + 1;
          }
          lVar17 = uVar15 + lVar17 + uVar28;
          local_b8 = (undefined8 *)((long)param_2 + uVar28);
          puVar25 = (undefined8 *)((long)param_3 + lVar17);
          local_a8 = param_4 - uVar28;
        }
        goto LAB_00100200;
      }
      sha1_update(lVar14 + 0x1b4,param_3,param_4);
    }
    else {
      if ((uVar18 + 0x24 & 0xfffffffffffffff0) != param_4) goto LAB_0010014d;
      uVar16 = (ulong)(0x301 < *(uint *)(lVar14 + 0x220));
      lVar17 = uVar16 * 0x10;
      puVar25 = param_3 + uVar16 * 2;
      uVar16 = uVar15 + lVar17;
      if (uVar15 + lVar17 < uVar18) goto LAB_00100808;
LAB_00100200:
      pSVar29 = (SHA_CTX *)(lVar14 + 0x1b4);
      sha1_update(pSVar29,puVar25,uVar18 - lVar17);
      if (uVar18 != param_4) {
        if (param_3 != param_2) {
          memcpy(local_b8,(void *)((long)param_3 + uVar28),uVar18 - uVar28);
        }
        md = (uchar *)((long)param_2 + uVar18);
        SHA1_Final(md,pSVar29);
        *(undefined8 *)(lVar14 + 0x1b4) = *(undefined8 *)(lVar14 + 0x154);
        *(undefined8 *)(lVar14 + 0x1bc) = *(undefined8 *)(lVar14 + 0x15c);
        *(undefined8 *)(lVar14 + 0x1c4) = *(undefined8 *)(lVar14 + 0x164);
        *(undefined8 *)(lVar14 + 0x1cc) = *(undefined8 *)(lVar14 + 0x16c);
        *(undefined8 *)(lVar14 + 0x1d4) = *(undefined8 *)(lVar14 + 0x174);
        *(undefined8 *)(lVar14 + 0x1dc) = *(undefined8 *)(lVar14 + 0x17c);
        *(undefined8 *)(lVar14 + 0x1e4) = *(undefined8 *)(lVar14 + 0x184);
        *(undefined8 *)(lVar14 + 0x1ec) = *(undefined8 *)(lVar14 + 0x18c);
        *(undefined8 *)(lVar14 + 500) = *(undefined8 *)(lVar14 + 0x194);
        *(undefined8 *)(lVar14 + 0x1fc) = *(undefined8 *)(lVar14 + 0x19c);
        *(undefined8 *)(lVar14 + 0x204) = *(undefined8 *)(lVar14 + 0x1a4);
        *(undefined8 *)(lVar14 + 0x20c) = *(undefined8 *)(lVar14 + 0x1ac);
        sha1_update(pSVar29,md,0x14);
        SHA1_Final(md,pSVar29);
        uVar28 = uVar18 + 0x14;
        if (uVar28 < param_4) {
          memset((void *)((long)param_2 + uVar28),((uint)param_4 - 1) - (int)uVar28 & 0xff,
                 (param_4 - 0x14) - uVar18);
        }
        aesni_cbc_encrypt(local_b8,local_b8,local_a8,lVar14,param_1 + 0x28,1);
        goto LAB_0010031b;
      }
      local_c0 = local_b8;
      param_3 = (undefined8 *)((long)param_3 + uVar28);
    }
    aesni_cbc_encrypt(param_3,local_c0,local_a8,lVar14,param_1 + 0x28,1);
  }
LAB_0010031b:
  uVar15 = 1;
LAB_0010014f:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar15;
}



uint aesni_cbc_hmac_sha1_init_key
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  
  lVar3 = EVP_CIPHER_CTX_get_cipher_data();
  iVar1 = EVP_CIPHER_CTX_get_key_length(param_1);
  if (0 < iVar1 * 8) {
    if (param_4 == 0) {
      uVar2 = aesni_set_decrypt_key();
    }
    else {
      uVar2 = aesni_set_encrypt_key(param_2,iVar1 * 8,lVar3);
    }
    SHA1_Init((SHA_CTX *)(lVar3 + 0xf4));
    *(undefined8 *)(lVar3 + 0x218) = 0xffffffffffffffff;
    *(undefined8 *)(lVar3 + 0x154) = *(undefined8 *)(lVar3 + 0xf4);
    *(undefined8 *)(lVar3 + 0x15c) = *(undefined8 *)(lVar3 + 0xfc);
    *(undefined8 *)(lVar3 + 0x164) = *(undefined8 *)(lVar3 + 0x104);
    *(undefined8 *)(lVar3 + 0x16c) = *(undefined8 *)(lVar3 + 0x10c);
    *(undefined8 *)(lVar3 + 0x174) = *(undefined8 *)(lVar3 + 0x114);
    *(undefined8 *)(lVar3 + 0x17c) = *(undefined8 *)(lVar3 + 0x11c);
    *(undefined8 *)(lVar3 + 0x184) = *(undefined8 *)(lVar3 + 0x124);
    *(undefined8 *)(lVar3 + 0x18c) = *(undefined8 *)(lVar3 + 300);
    *(undefined8 *)(lVar3 + 0x194) = *(undefined8 *)(lVar3 + 0x134);
    *(undefined8 *)(lVar3 + 0x19c) = *(undefined8 *)(lVar3 + 0x13c);
    *(undefined8 *)(lVar3 + 0x1a4) = *(undefined8 *)(lVar3 + 0x144);
    *(undefined8 *)(lVar3 + 0x1ac) = *(undefined8 *)(lVar3 + 0x14c);
    *(undefined8 *)(lVar3 + 0x1b4) = *(undefined8 *)(lVar3 + 0xf4);
    *(undefined8 *)(lVar3 + 0x1bc) = *(undefined8 *)(lVar3 + 0xfc);
    *(undefined8 *)(lVar3 + 0x1c4) = *(undefined8 *)(lVar3 + 0x104);
    *(undefined8 *)(lVar3 + 0x1cc) = *(undefined8 *)(lVar3 + 0x10c);
    *(undefined8 *)(lVar3 + 0x1d4) = *(undefined8 *)(lVar3 + 0x114);
    *(undefined8 *)(lVar3 + 0x1dc) = *(undefined8 *)(lVar3 + 0x11c);
    *(undefined8 *)(lVar3 + 0x1e4) = *(undefined8 *)(lVar3 + 0x124);
    *(undefined8 *)(lVar3 + 0x1ec) = *(undefined8 *)(lVar3 + 300);
    *(undefined8 *)(lVar3 + 500) = *(undefined8 *)(lVar3 + 0x134);
    *(undefined8 *)(lVar3 + 0x1fc) = *(undefined8 *)(lVar3 + 0x13c);
    *(undefined8 *)(lVar3 + 0x204) = *(undefined8 *)(lVar3 + 0x144);
    *(undefined8 *)(lVar3 + 0x20c) = *(undefined8 *)(lVar3 + 0x14c);
    return ~uVar2 >> 0x1f;
  }
  ERR_new();
  ERR_set_debug("crypto/evp/e_aes_cbc_hmac_sha1.c",0x4e,"aesni_cbc_hmac_sha1_init_key");
  ERR_set_error(6,0x82,0);
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long tls1_1_multi_block_encrypt
               (long param_1,undefined1 *param_2,long param_3,uint param_4,int param_5)

{
  uchar *puVar1;
  byte bVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 uVar17;
  ushort uVar18;
  int iVar19;
  undefined4 uVar20;
  long lVar21;
  long lVar22;
  long *plVar23;
  long *plVar24;
  long *plVar25;
  uint *puVar26;
  uint *puVar27;
  undefined8 *puVar28;
  ulong uVar29;
  byte bVar30;
  ulong uVar31;
  uint uVar32;
  undefined4 *puVar33;
  uint uVar34;
  ulong uVar35;
  long *plVar36;
  uint uVar37;
  undefined1 *puVar38;
  ulong *puVar39;
  uint uVar40;
  ulong uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  ulong *puVar45;
  long in_FS_OFFSET;
  byte bVar46;
  uint local_7b8;
  uint local_7b4;
  long local_7a8;
  long *local_7a0;
  int local_770;
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
  
  bVar46 = 0;
  uVar43 = param_5 * 4;
  local_7a8 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar19 = RAND_bytes((uchar *)local_508,param_5 << 6);
  if (iVar19 < 1) goto LAB_00101286;
  bVar30 = (char)param_5 + 1;
  local_7b8 = param_4 >> (bVar30 & 0x1f);
  local_7b4 = (param_4 + local_7b8) - (local_7b8 << (bVar30 & 0x1f));
  if ((local_7b8 < local_7b4) && ((local_7b4 + 0x16 & 0x3f) < uVar43 - 1)) {
    local_7b8 = local_7b8 + 1;
    local_7b4 = local_7b4 + param_5 * -4 + 1;
  }
  local_748 = param_3;
  local_648 = param_3;
  puStack_640 = param_2 + 0x15;
  *(ulong *)(param_2 + 5) = local_508[0];
  *(ulong *)(param_2 + 0xd) = local_508[1];
  local_630 = local_508[0];
  uStack_628 = local_508[1];
  uVar37 = local_7b4;
  if (local_7b8 <= local_7b4) {
    uVar37 = local_7b8;
  }
  uVar37 = uVar37 - 0x33;
  if ((int)uVar43 < 2) {
    local_508[0] = *(ulong *)(param_1 + 0x1d0);
    sha1_multi_block(local_100,&local_6c8,0);
    if (0x83f < uVar37) goto LAB_00101037;
    sha1_multi_block(local_100,&local_748,0);
    puVar39 = local_508;
    for (lVar21 = 0x80; lVar21 != 0; lVar21 = lVar21 + -1) {
      *puVar39 = 0;
      puVar39 = puVar39 + (ulong)bVar46 * -2 + 1;
    }
LAB_00101640:
    local_7a8 = 0;
    sha1_multi_block(local_100,&local_6c8,0);
    puVar39 = local_508;
    for (lVar21 = 0x80; lVar21 != 0; lVar21 = lVar21 + -1) {
      *puVar39 = 0;
      puVar39 = puVar39 + (ulong)bVar46 * -2 + 1;
    }
    sha1_multi_block(local_100,&local_6c8,0);
  }
  else {
    plVar24 = &local_748;
    puVar38 = local_608;
    plVar23 = plVar24;
    puVar39 = local_508 + 2;
    do {
      uVar41 = *puVar39;
      uVar29 = puVar39[1];
      uVar31 = (long)puVar38 - (long)&local_648;
      plVar23[2] = *plVar23 + (ulong)local_7b8;
      *(ulong *)(puVar38 + -0x18) = *plVar23 + (ulong)local_7b8;
      lVar21 = *(long *)(puVar38 + -0x38) + (ulong)((local_7b8 + 0x24 & 0xfffffff0) + 0x15);
      *(long *)(puVar38 + -0x10) = lVar21;
      *(ulong *)(lVar21 + -0x10) = uVar41;
      *(ulong *)(lVar21 + -8) = uVar29;
      if (uVar31 < 0x140) {
        uVar31 = 0x140;
      }
      puVar45 = puVar39 + 2;
      plVar23 = plVar23 + 2;
      lVar21 = __memcpy_chk(puVar38,puVar39,0x10,(long)&local_648 + (uVar31 - (long)puVar38));
      puVar38 = (undefined1 *)(lVar21 + 0x28);
      puVar39 = puVar45;
    } while (puVar45 != local_508 + (ulong)uVar43 * 2);
    local_508[0] = *(ulong *)(param_1 + 0x1d0);
    uVar42 = *(uint *)(param_1 + 0x1b4);
    uVar20 = *(undefined4 *)(param_1 + 0x1b8);
    uVar4 = *(undefined4 *)(param_1 + 0x1c4);
    uVar5 = *(undefined4 *)(param_1 + 0x1bc);
    bVar30 = *(byte *)(param_1 + 0x1d9);
    uVar6 = *(undefined4 *)(param_1 + 0x1c0);
    uVar41 = local_508[0] >> 0x38;
    uVar29 = local_508[0] & 0xff000000000000;
    uVar31 = local_508[0] & 0xff0000000000;
    uVar12 = local_508[0] & 0xff00000000;
    uVar13 = local_508[0] & 0xff000000;
    uVar14 = local_508[0] & 0xff0000;
    uVar15 = local_508[0] & 0xff00;
    uVar16 = local_508[0] << 0x38;
    bVar2 = *(byte *)(param_1 + 0x1d8);
    bVar3 = *(byte *)(param_1 + 0x1da);
    lVar21 = 0;
    puVar39 = local_508;
    plVar23 = plVar24;
    do {
      local_100[lVar21] = uVar42;
      uVar34 = local_7b4;
      if (uVar43 - 1 != (uint)lVar21) {
        uVar34 = local_7b8;
      }
      local_e0[lVar21] = uVar20;
      local_c0[lVar21] = uVar5;
      *(uchar *)((long)puVar39 + 0xc) = (uchar)uVar34;
      local_a0[lVar21] = uVar6;
      local_80[lVar21] = uVar4;
      uVar35 = (uVar41 | uVar29 >> 0x28 | uVar31 >> 0x18 | uVar12 >> 8 | uVar13 << 8 |
                uVar14 << 0x18 | uVar15 << 0x28 | uVar16) + lVar21;
      *puVar39 = uVar35 >> 0x38 | (uVar35 & 0xff000000000000) >> 0x28 |
                 (uVar35 & 0xff0000000000) >> 0x18 | (uVar35 & 0xff00000000) >> 8 |
                 (uVar35 & 0xff000000) << 8 | (uVar35 & 0xff0000) << 0x18 |
                 (uVar35 & 0xff00) << 0x28 | uVar35 << 0x38;
      *(uint *)(puVar39 + 1) =
           ((uVar34 & 0xff00 | (uint)bVar3) << 8 | (uint)bVar30) << 8 | (uint)bVar2;
      puVar28 = (undefined8 *)*plVar23;
      uVar17 = puVar28[1];
      *(undefined8 *)((long)puVar39 + 0xd) = *puVar28;
      *(undefined8 *)((long)puVar39 + 0x15) = uVar17;
      uVar17 = puVar28[3];
      *(undefined8 *)((long)puVar39 + 0x1d) = puVar28[2];
      *(undefined8 *)((long)puVar39 + 0x25) = uVar17;
      uVar17 = puVar28[5];
      *(undefined8 *)((long)puVar39 + 0x2d) = puVar28[4];
      *(undefined8 *)((long)puVar39 + 0x35) = uVar17;
      uVar7 = *(undefined4 *)((long)puVar28 + 0x2f);
      *plVar23 = (long)puVar28 + 0x33;
      *(uint *)(plVar23 + 1) = uVar34 - 0x33 >> 6;
      lVar22 = lVar21 + 1;
      *(undefined4 *)((long)puVar39 + 0x3c) = uVar7;
      (&local_6c8)[lVar21 * 2] = (long)puVar39;
      puVar39 = puVar39 + 0x10;
      local_6c0[lVar21 * 4] = 1;
      lVar21 = lVar22;
      plVar23 = plVar23 + 2;
    } while ((uint)lVar22 < uVar43);
    sha1_multi_block(local_100,&local_6c8,param_5);
    if (uVar37 < 0x840) {
      sha1_multi_block(local_100,plVar24,param_5);
      local_770 = 0;
      puVar39 = local_508;
      for (lVar21 = 0x80; lVar21 != 0; lVar21 = lVar21 + -1) {
        *puVar39 = 0;
        puVar39 = puVar39 + (ulong)bVar46 * -2 + 1;
      }
    }
    else {
      plVar23 = &local_6c8;
      puVar33 = local_638;
      do {
        lVar21 = *plVar24;
        plVar36 = plVar23 + 2;
        plVar24 = plVar24 + 2;
        *(undefined4 *)(plVar23 + 1) = 0x20;
        *plVar23 = lVar21;
        *puVar33 = 0x80;
        plVar23 = plVar36;
        puVar33 = puVar33 + 10;
      } while (alStack_6b8 + (ulong)(uVar43 - 1) * 2 != plVar36);
LAB_00101037:
      local_768 = &local_648;
      local_7a0 = &local_748;
      uVar42 = uVar37 >> 6;
      do {
        sha1_multi_block(local_100,&local_6c8,param_5);
        aesni_multi_cbc_encrypt(local_768,param_1,param_5);
        plVar24 = local_7a0;
        plVar23 = local_768;
        plVar36 = &local_6c8;
        if (param_5 != 0) {
          do {
            lVar21 = *plVar24;
            *(int *)(plVar24 + 1) = (int)plVar24[1] + -0x20;
            plVar25 = plVar24 + 2;
            *(undefined4 *)(plVar36 + 1) = 0x20;
            *plVar24 = lVar21 + 0x800;
            *plVar36 = lVar21 + 0x800;
            lVar21 = plVar23[1];
            *(undefined4 *)(plVar23 + 2) = 0x80;
            *plVar23 = *plVar23 + __LC1;
            plVar23[1] = lVar21 + _UNK_00101e58;
            lVar22 = *(long *)(lVar21 + 0x7f8);
            plVar23[3] = *(long *)(lVar21 + 0x7f0);
            plVar23[4] = lVar22;
            plVar24 = plVar25;
            plVar23 = plVar23 + 5;
            plVar36 = plVar36 + 2;
          } while (local_738 + (ulong)(uVar43 - 1) * 2 != plVar25);
        }
        uVar42 = uVar42 - 0x20;
      } while (0x20 < uVar42);
      local_770 = (((uVar37 >> 6) - 0x21 >> 5) + 1) * 0x800;
      sha1_multi_block(local_100,local_7a0,param_5);
      puVar39 = local_508;
      for (lVar21 = 0x80; lVar21 != 0; lVar21 = lVar21 + -1) {
        *puVar39 = 0;
        puVar39 = puVar39 + (ulong)bVar46 * -2 + 1;
      }
      if (param_5 == 0) goto LAB_00101640;
    }
    uVar42 = uVar43 - 1;
    local_768 = &local_648;
    lVar21 = 0;
    puVar39 = local_508;
    uVar34 = 0;
    uVar37 = local_7b8;
    while( true ) {
      uVar44 = uVar37 + (-0x33 - local_770) + *(int *)((long)local_740 + lVar21) * -0x40;
      lVar22 = __memcpy_chk(puVar39,(ulong)(uint)(*(int *)((long)local_740 + lVar21) * 0x40) +
                                    *(long *)((long)local_740 + lVar21 + -8),(ulong)uVar44,
                            lVar21 * -8 + 0x400);
      *(undefined1 *)((long)local_508 + (ulong)uVar44 + (ulong)uVar34 * 0x80) = 0x80;
      uVar37 = uVar37 * 8 + 0x268;
      uVar37 = uVar37 >> 0x18 | (uVar37 & 0xff0000) >> 8 | (uVar37 & 0xff00) << 8 |
               uVar37 * 0x1000000;
      if (uVar44 < 0x38) {
        *(uint *)(lVar22 + 0x3c) = uVar37;
        uVar20 = 1;
      }
      else {
        *(uint *)(lVar22 + 0x7c) = uVar37;
        uVar20 = 2;
      }
      *(undefined4 *)((long)local_6c0 + lVar21) = uVar20;
      *(long *)((long)&local_6c8 + lVar21) = lVar22;
      uVar44 = uVar34 + 1;
      puVar39 = (ulong *)(lVar22 + 0x80);
      lVar21 = lVar21 + 0x10;
      if (uVar43 == uVar44) break;
      uVar34 = uVar44;
      uVar37 = local_7b4;
      if (uVar44 != uVar42) {
        uVar37 = local_7b8;
      }
    }
    sha1_multi_block(local_100,&local_6c8,param_5);
    puVar39 = local_508;
    for (lVar21 = 0x80; lVar21 != 0; lVar21 = lVar21 + -1) {
      *puVar39 = 0;
      puVar39 = puVar39 + (ulong)bVar46 * -2 + 1;
    }
    uVar43 = *(uint *)(param_1 + 0x154);
    uVar37 = *(uint *)(param_1 + 0x158);
    uVar44 = *(uint *)(param_1 + 0x15c);
    uVar40 = *(uint *)(param_1 + 0x160);
    uVar8 = *(uint *)(param_1 + 0x164);
    puVar26 = local_100;
    puVar39 = local_508;
    plVar24 = &local_6c8;
    do {
      uVar9 = *puVar26;
      uVar10 = puVar26[8];
      *puVar26 = uVar43;
      puVar27 = puVar26 + 1;
      uVar32 = puVar26[0x10];
      uVar11 = puVar26[0x18];
      puVar26[8] = uVar37;
      puVar26[0x10] = uVar44;
      *puVar39 = CONCAT44(uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 |
                          uVar10 << 0x18,
                          uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 |
                          uVar9 << 0x18);
      puVar39[1] = CONCAT44(uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 |
                            uVar11 << 0x18,
                            uVar32 >> 0x18 | (uVar32 & 0xff0000) >> 8 | (uVar32 & 0xff00) << 8 |
                            uVar32 << 0x18);
      uVar9 = puVar26[0x20];
      puVar26[0x18] = uVar40;
      *(uint *)(puVar39 + 2) =
           uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
      puVar26[0x20] = uVar8;
      *(uchar *)((long)puVar39 + 0x14) = 0x80;
      puVar1 = (uchar *)((long)puVar39 + 0x3c);
      puVar1[0] = '\0';
      puVar1[1] = '\0';
      puVar1[2] = '\x02';
      puVar1[3] = 0xa0;
      *plVar24 = (long)puVar39;
      puVar39 = puVar39 + 0x10;
      *(undefined4 *)(plVar24 + 1) = 1;
      puVar26 = puVar27;
      plVar24 = plVar24 + 2;
    } while (puVar27 != local_100 + (ulong)uVar42 + 1);
    sha1_multi_block(local_100,&local_6c8,param_5);
    local_7a8 = 0;
    puVar26 = local_100;
    uVar43 = 0;
    uVar37 = local_7b8;
    while( true ) {
      memcpy((void *)local_768[1],(void *)*local_768,(ulong)(uVar37 - local_770));
      uVar40 = *puVar26;
      uVar8 = puVar26[0x10];
      uVar9 = puVar26[8];
      uVar10 = puVar26[0x18];
      *local_768 = local_768[1];
      puVar28 = (undefined8 *)(param_2 + (uVar37 + 0x15));
      uVar44 = puVar26[0x20];
      *(uint *)(puVar28 + 2) =
           uVar44 >> 0x18 | (uVar44 & 0xff0000) >> 8 | (uVar44 & 0xff00) << 8 | uVar44 << 0x18;
      uVar32 = ~(uVar37 + 0x14) & 0xf;
      uVar44 = uVar32 + 1;
      uVar41 = (ulong)uVar44;
      lVar21 = (ulong)uVar32 * 0x101010101010101;
      *puVar28 = CONCAT44(uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 |
                          uVar9 << 0x18,
                          uVar40 >> 0x18 | (uVar40 & 0xff0000) >> 8 | (uVar40 & 0xff00) << 8 |
                          uVar40 << 0x18);
      puVar28[1] = CONCAT44(uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 |
                            uVar10 << 0x18,
                            uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 |
                            uVar8 << 0x18);
      if (uVar44 < 8) {
        if ((uVar44 & 4) == 0) {
          if ((uVar44 != 0) && (*(char *)((long)puVar28 + 0x14) = (char)lVar21, (uVar44 & 2) != 0))
          {
            *(short *)((long)puVar28 + uVar41 + 0x12) = (short)lVar21;
          }
        }
        else {
          *(int *)((long)puVar28 + 0x14) = (int)lVar21;
          *(int *)((long)puVar28 + uVar41 + 0x10) = (int)lVar21;
        }
      }
      else {
        *(long *)((long)puVar28 + 0x14) = lVar21;
        uVar29 = (ulong)((long)puVar28 + 0x1c) & 0xfffffffffffffff8;
        *(long *)((long)puVar28 + uVar41 + 0xc) = lVar21;
        uVar44 = uVar44 + ((int)(undefined1 *)((long)puVar28 + 0x14) - (int)uVar29) & 0xfffffff8;
        if (7 < uVar44) {
          uVar40 = 0;
          do {
            uVar31 = (ulong)uVar40;
            uVar40 = uVar40 + 8;
            *(long *)(uVar29 + uVar31) = lVar21;
          } while (uVar40 < uVar44);
        }
      }
      iVar19 = uVar32 + uVar37 + 0x14;
      puVar38 = (undefined1 *)((long)puVar28 + 0x14) + uVar41;
      plVar24 = local_768 + 5;
      puVar26 = puVar26 + 1;
      *(uint *)(local_768 + 2) = (uint)((1 - local_770) + iVar19) >> 4;
      *param_2 = *(undefined1 *)(param_1 + 0x1d8);
      param_2[1] = *(undefined1 *)(param_1 + 0x1d9);
      param_2[2] = *(undefined1 *)(param_1 + 0x1da);
      uVar18 = (short)iVar19 + 0x11;
      *(ushort *)(param_2 + 3) = uVar18 * 0x100 | uVar18 >> 8;
      local_7a8 = local_7a8 + (ulong)(iVar19 + 0x16);
      uVar44 = uVar43 + 1;
      if (uVar34 == uVar43) break;
      local_768 = plVar24;
      param_2 = puVar38;
      uVar43 = uVar44;
      uVar37 = local_7b4;
      if (uVar44 != uVar42) {
        uVar37 = local_7b8;
      }
    }
  }
  local_768 = &local_648;
  aesni_multi_cbc_encrypt(local_768,param_1,param_5);
  OPENSSL_cleanse(local_508,0x400);
  OPENSSL_cleanse(local_100,0xa0);
LAB_00101286:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_7a8;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong aesni_cbc_hmac_sha1_ctrl
                (undefined8 param_1,undefined4 param_2,int param_3,undefined8 *param_4)

{
  SHA_CTX *c;
  long lVar1;
  undefined8 uVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong *puVar9;
  ushort uVar10;
  uint uVar11;
  byte bVar12;
  long in_FS_OFFSET;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  ulong local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar6 = EVP_CIPHER_CTX_get_cipher_data();
  switch(param_2) {
  case 0x16:
    if (param_3 == 0xd) {
      uVar10 = *(ushort *)((long)param_4 + 0xb) << 8 | *(ushort *)((long)param_4 + 0xb) >> 8;
      uVar11 = (uint)uVar10;
      iVar4 = EVP_CIPHER_CTX_is_encrypting(param_1);
      if (iVar4 == 0) {
        *(undefined8 *)(lVar6 + 0x220) = *param_4;
        uVar2 = *(undefined8 *)((long)param_4 + 5);
        *(undefined8 *)(lVar6 + 0x218) = 0xd;
        *(undefined8 *)(lVar6 + 0x225) = uVar2;
        uVar7 = 0x14;
        goto LAB_00101710;
      }
      *(ulong *)(lVar6 + 0x218) = (ulong)uVar10;
      uVar3 = *(ushort *)((long)param_4 + 9) << 8 | *(ushort *)((long)param_4 + 9) >> 8;
      *(uint *)(lVar6 + 0x220) = (uint)uVar3;
      if (0x301 < uVar3) {
        if (uVar10 < 0x10) {
LAB_001019ca:
          uVar7 = 0;
          goto LAB_00101710;
        }
        uVar11 = uVar10 - 0x10;
        *(ushort *)((long)param_4 + 0xb) = (ushort)uVar11 << 8 | (ushort)uVar11 >> 8;
      }
      *(undefined8 *)(lVar6 + 0x1b4) = *(undefined8 *)(lVar6 + 0xf4);
      *(undefined8 *)(lVar6 + 0x1bc) = *(undefined8 *)(lVar6 + 0xfc);
      *(undefined8 *)(lVar6 + 0x1c4) = *(undefined8 *)(lVar6 + 0x104);
      *(undefined8 *)(lVar6 + 0x1cc) = *(undefined8 *)(lVar6 + 0x10c);
      *(undefined8 *)(lVar6 + 0x1d4) = *(undefined8 *)(lVar6 + 0x114);
      *(undefined8 *)(lVar6 + 0x1dc) = *(undefined8 *)(lVar6 + 0x11c);
      *(undefined8 *)(lVar6 + 0x1e4) = *(undefined8 *)(lVar6 + 0x124);
      *(undefined8 *)(lVar6 + 0x1ec) = *(undefined8 *)(lVar6 + 300);
      *(undefined8 *)(lVar6 + 500) = *(undefined8 *)(lVar6 + 0x134);
      *(undefined8 *)(lVar6 + 0x1fc) = *(undefined8 *)(lVar6 + 0x13c);
      *(undefined8 *)(lVar6 + 0x204) = *(undefined8 *)(lVar6 + 0x144);
      *(undefined8 *)(lVar6 + 0x20c) = *(undefined8 *)(lVar6 + 0x14c);
      sha1_update(lVar6 + 0x1b4,param_4,0xd);
      uVar7 = (ulong)((uVar11 + 0x24 & 0xfffffff0) - uVar11);
      goto LAB_00101710;
    }
    break;
  case 0x17:
    local_78 = (undefined1  [16])0x0;
    local_68 = (undefined1  [16])0x0;
    local_58 = (undefined1  [16])0x0;
    local_48 = (undefined1  [16])0x0;
    if (param_3 < 0x41) {
      __memcpy_chk(local_78,param_4,(long)param_3,0x40);
    }
    else {
      c = (SHA_CTX *)(lVar6 + 0xf4);
      SHA1_Init(c);
      sha1_update(c,param_4,(long)param_3);
      SHA1_Final(local_78,c);
    }
    puVar8 = (ulong *)local_78;
    do {
      puVar9 = puVar8 + 2;
      *puVar8 = *puVar8 ^ __LC2;
      puVar8[1] = puVar8[1] ^ _UNK_00101e68;
      puVar8 = puVar9;
    } while (puVar9 != &local_38);
    SHA1_Init((SHA_CTX *)(lVar6 + 0xf4));
    sha1_update((SHA_CTX *)(lVar6 + 0xf4),local_78,0x40);
    puVar8 = (ulong *)local_78;
    do {
      puVar9 = puVar8 + 2;
      *puVar8 = *puVar8 ^ __LC3;
      puVar8[1] = puVar8[1] ^ _UNK_00101e78;
      puVar8 = puVar9;
    } while (puVar9 != &local_38);
    SHA1_Init((SHA_CTX *)(lVar6 + 0x154));
    sha1_update((SHA_CTX *)(lVar6 + 0x154),local_78,0x40);
    OPENSSL_cleanse(local_78,0x40);
    uVar7 = 1;
    goto LAB_00101710;
  case 0x19:
    if (0x1f < param_3) {
      uVar10 = *(ushort *)(param_4[1] + 0xb) << 8 | *(ushort *)(param_4[1] + 0xb) >> 8;
      uVar11 = (uint)uVar10;
      iVar4 = EVP_CIPHER_CTX_is_encrypting(param_1);
      if ((iVar4 != 0) &&
         (lVar1 = param_4[1], uVar3 = *(ushort *)(lVar1 + 9),
         0x301 < (ushort)(uVar3 << 8 | uVar3 >> 8))) {
        if (uVar10 == 0) {
          uVar5 = *(uint *)(param_4 + 3) >> 2;
          if (7 < *(uint *)(param_4 + 3) - 4) break;
          uVar11 = *(uint *)(param_4 + 2);
          bVar12 = (char)uVar5 + 1;
          iVar4 = uVar5 << 2;
        }
        else {
          if (uVar10 < 0x1000) goto LAB_001019ca;
          if (uVar10 < 0x2000) {
            iVar4 = 4;
            bVar12 = 2;
          }
          else {
            iVar4 = (-(uint)((_EVP_CIPHER_set_asn1_iv & 0x20) == 0) & 0xfffffffc) + 8;
            bVar12 = 3 - ((_EVP_CIPHER_set_asn1_iv & 0x20) == 0);
          }
        }
        *(undefined8 *)(lVar6 + 0x1b4) = *(undefined8 *)(lVar6 + 0xf4);
        *(undefined8 *)(lVar6 + 0x1bc) = *(undefined8 *)(lVar6 + 0xfc);
        *(undefined8 *)(lVar6 + 0x1c4) = *(undefined8 *)(lVar6 + 0x104);
        *(undefined8 *)(lVar6 + 0x1cc) = *(undefined8 *)(lVar6 + 0x10c);
        *(undefined8 *)(lVar6 + 0x1d4) = *(undefined8 *)(lVar6 + 0x114);
        *(undefined8 *)(lVar6 + 0x1dc) = *(undefined8 *)(lVar6 + 0x11c);
        *(undefined8 *)(lVar6 + 0x1e4) = *(undefined8 *)(lVar6 + 0x124);
        *(undefined8 *)(lVar6 + 0x1ec) = *(undefined8 *)(lVar6 + 300);
        *(undefined8 *)(lVar6 + 500) = *(undefined8 *)(lVar6 + 0x134);
        *(undefined8 *)(lVar6 + 0x1fc) = *(undefined8 *)(lVar6 + 0x13c);
        *(undefined8 *)(lVar6 + 0x204) = *(undefined8 *)(lVar6 + 0x144);
        *(undefined8 *)(lVar6 + 0x20c) = *(undefined8 *)(lVar6 + 0x14c);
        sha1_update(lVar6 + 0x1b4,lVar1,0xd);
        uVar5 = uVar11 >> (bVar12 & 0x1f);
        uVar11 = (uVar11 + uVar5) - (uVar5 << (bVar12 & 0x1f));
        if ((uVar5 < uVar11) && ((uVar11 + 0x16 & 0x3f) < iVar4 - 1U)) {
          uVar5 = uVar5 + 1;
          uVar11 = (uVar11 - iVar4) + 1;
        }
        *(int *)(param_4 + 3) = iVar4;
        iVar4 = (uVar5 + 0x24 & 0xfffffff0) + 0x15;
        uVar7 = (ulong)(((uVar11 + 0x24 & 0xfffffff0) + 0x15 + (iVar4 << (bVar12 & 0x1f))) - iVar4);
        goto LAB_00101710;
      }
    }
    break;
  case 0x1a:
    uVar7 = tls1_1_multi_block_encrypt
                      (lVar6,*param_4,param_4[1],param_4[2],*(uint *)(param_4 + 3) >> 2);
    goto LAB_00101710;
  case 0x1c:
    uVar7 = (ulong)((param_3 + 0x24U & 0xfffffff0) + 0x15);
    goto LAB_00101710;
  }
  uVar7 = 0xffffffff;
LAB_00101710:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

EVP_CIPHER * EVP_aes_128_cbc_hmac_sha1(void)

{
  undefined1 *puVar1;
  
  puVar1 = aesni_128_cbc_hmac_sha1_cipher;
  if ((DAT_001030b7 & 2) == 0) {
    puVar1 = (undefined1 *)0x0;
  }
  return (EVP_CIPHER *)puVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

EVP_CIPHER * EVP_aes_256_cbc_hmac_sha1(void)

{
  undefined1 *puVar1;
  
  puVar1 = aesni_256_cbc_hmac_sha1_cipher;
  if ((DAT_001030b7 & 2) == 0) {
    puVar1 = (undefined1 *)0x0;
  }
  return (EVP_CIPHER *)puVar1;
}


