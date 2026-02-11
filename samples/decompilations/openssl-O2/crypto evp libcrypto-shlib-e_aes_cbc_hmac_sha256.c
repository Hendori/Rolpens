
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

int aesni_cbc_hmac_sha256_cipher(long param_1,void *param_2,void *param_3,ulong param_4)

{
  SHA256_CTX *c;
  long lVar1;
  uchar *md;
  byte *pbVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  uint uVar18;
  long lVar19;
  ulong uVar20;
  uint uVar21;
  uint uVar22;
  void *pvVar23;
  uint uVar24;
  byte *pbVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  ulong uVar30;
  ulong uVar31;
  long in_FS_OFFSET;
  uint uVar32;
  int iVar35;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  SHA256_CTX *local_f0;
  void *local_e8;
  ulong local_e0;
  void *local_d0;
  undefined1 local_80 [8];
  undefined8 uStack_78;
  undefined1 local_70 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar13 = EVP_CIPHER_CTX_get_cipher_data();
  uVar16 = *(ulong *)(lVar13 + 0x248);
  iVar35 = *(int *)(lVar13 + 0x23c);
  *(undefined8 *)(lVar13 + 0x248) = 0xffffffffffffffff;
  uVar31 = (ulong)((uint)param_4 & 0xf);
  if ((param_4 & 0xf) != 0) {
LAB_0010014b:
    iVar35 = 0;
    goto LAB_0010014d;
  }
  iVar11 = EVP_CIPHER_CTX_is_encrypting(param_1);
  if (iVar11 == 0) {
    aesni_cbc_encrypt(param_3,param_2,param_4,lVar13,param_1 + 0x28,0);
    if (uVar16 != 0xffffffffffffffff) {
      iVar35 = 0;
      uVar20 = (ulong)(0x301 < CONCAT11(*(undefined1 *)(lVar13 + 0x24c + uVar16),
                                        *(undefined1 *)(lVar13 + 0x24d + uVar16)));
      lVar14 = uVar20 * 0x10;
      if (param_4 < lVar14 + 0x21U) goto LAB_0010014d;
      local_d0 = (void *)((long)param_2 + lVar14);
      lVar14 = param_4 + uVar20 * -0x10;
      uVar5 = *(undefined8 *)(lVar13 + 0xf4);
      uVar6 = *(undefined8 *)(lVar13 + 0xfc);
      uVar7 = *(undefined8 *)(lVar13 + 0x104);
      uVar8 = *(undefined8 *)(lVar13 + 0x10c);
      bVar4 = *(byte *)((long)local_d0 + lVar14 + -1);
      uVar12 = (int)lVar14 - 0x21;
      uVar9 = *(undefined8 *)(lVar13 + 0x114);
      uVar10 = *(undefined8 *)(lVar13 + 0x11c);
      uVar32 = 0xff - uVar12 >> 0x18 | uVar12 & 0xff;
      uVar21 = uVar32 ^ (uVar32 - bVar4 ^ (uint)bVar4 | uVar32 ^ bVar4);
      uVar12 = (int)uVar21 >> 0x1f;
      uVar12 = (uint)bVar4 & ~uVar12 | uVar12 & uVar32;
      local_e0 = lVar14 - (ulong)(uVar12 + 0x21);
      *(char *)(lVar13 + 0x24e + uVar16) = (char)(local_e0 >> 8);
      *(char *)(lVar13 + 0x24f + uVar16) = (char)local_e0;
      c = (SHA256_CTX *)(lVar13 + 0x1d4);
      *(undefined8 *)(lVar13 + 0x1d4) = uVar5;
      *(undefined8 *)(lVar13 + 0x1dc) = uVar6;
      *(undefined8 *)(lVar13 + 0x1e4) = uVar7;
      *(undefined8 *)(lVar13 + 0x1ec) = uVar8;
      *(undefined8 *)(lVar13 + 500) = uVar9;
      *(undefined8 *)(lVar13 + 0x1fc) = uVar10;
      *(undefined8 *)(lVar13 + 0x204) = *(undefined8 *)(lVar13 + 0x124);
      *(undefined8 *)(lVar13 + 0x20c) = *(undefined8 *)(lVar13 + 300);
      *(undefined8 *)(lVar13 + 0x214) = *(undefined8 *)(lVar13 + 0x134);
      *(undefined8 *)(lVar13 + 0x21c) = *(undefined8 *)(lVar13 + 0x13c);
      *(undefined8 *)(lVar13 + 0x224) = *(undefined8 *)(lVar13 + 0x144);
      *(undefined8 *)(lVar13 + 0x22c) = *(undefined8 *)(lVar13 + 0x14c);
      *(undefined8 *)(lVar13 + 0x234) = *(undefined8 *)(lVar13 + 0x154);
      *(undefined8 *)(lVar13 + 0x23c) = *(undefined8 *)(lVar13 + 0x15c);
      sha256_update(c,lVar13 + 0x250,uVar16);
      uVar16 = lVar14 - 0x20;
      if (0x13f < uVar16) {
        lVar14 = (lVar14 - 0x160U & 0xffffffffffffffc0) + (ulong)(0x40 - *(int *)(lVar13 + 0x23c));
        sha256_update(c,local_d0,lVar14);
        local_e0 = local_e0 - lVar14;
        local_d0 = (void *)((long)local_d0 + lVar14);
        uVar16 = uVar16 - lVar14;
      }
      lVar14 = lVar13 + 0x1fc;
      uVar17 = *(uint *)(lVar13 + 0x23c);
      _local_80 = (undefined1  [16])0x0;
      uVar27 = *(int *)(lVar13 + 500) + (int)local_e0 * 8;
      local_70 = (undefined1  [16])0x0;
      uVar27 = uVar27 >> 0x18 | (uVar27 & 0xff0000) >> 8 | (uVar27 & 0xff00) << 8 |
               uVar27 * 0x1000000;
      if (uVar16 == 0) {
        uVar20 = 0;
      }
      else {
        lVar19 = -local_e0;
        do {
          uVar20 = (ulong)uVar17;
          uVar17 = uVar17 + 1;
          bVar4 = (byte)((ulong)lVar19 >> 0x38);
          *(byte *)(lVar13 + 0x1fc + uVar20) =
               ~((byte)((ulong)-lVar19 >> 0x38) | bVar4) & 0x80 |
               *(byte *)((long)local_d0 + lVar19 + local_e0) & bVar4;
          if (uVar17 == 0x40) {
            uVar17 = (uint)((ulong)(7 - lVar19) >> 0x20);
            *(uint *)(lVar13 + 0x238) = *(uint *)(lVar13 + 0x238) | uVar27 & (int)uVar17 >> 0x1f;
            sha256_block_data_order(c,lVar14,1);
            iVar35 = (int)((uint)((ulong)(lVar19 + -0x48) >> 0x20) & uVar17) >> 0x1f;
            uVar17 = 0;
            auVar33._4_4_ = iVar35;
            auVar33._0_4_ = iVar35;
            auVar33._8_4_ = iVar35;
            auVar33._12_4_ = iVar35;
            local_70 = *(undefined1 (*) [16])(lVar13 + 0x1e4) & auVar33 | local_70;
            _local_80 = auVar33 & *(undefined1 (*) [16])(lVar13 + 0x1d4) | _local_80;
          }
          lVar19 = lVar19 + 1;
          uVar20 = uVar16;
        } while (lVar19 != uVar16 - local_e0);
      }
      uVar30 = (ulong)uVar17;
      if (uVar17 < 0x40) {
        puVar3 = (undefined8 *)(lVar13 + 0x1fc + uVar30);
        uVar15 = 0x40 - uVar30;
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
            uVar22 = 0;
            do {
              uVar15 = (ulong)uVar22;
              uVar22 = uVar22 + 8;
              *(undefined8 *)(((ulong)(puVar3 + 1) & 0xfffffffffffffff8) + uVar15) = 0;
            } while (uVar22 < uVar18);
          }
        }
        uVar20 = (uVar20 + 0x40) - uVar30;
        lVar19 = -0x49 - local_e0;
        if (0x38 < uVar17) goto LAB_00100a14;
      }
      else {
LAB_00100a14:
        uVar17 = (uint)((local_e0 + 8) - uVar20 >> 0x20);
        *(uint *)(lVar13 + 0x238) = *(uint *)(lVar13 + 0x238) | uVar27 & (int)uVar17 >> 0x1f;
        sha256_block_data_order(c,lVar14,1);
        lVar19 = -0x49 - local_e0;
        lVar1 = uVar20 + lVar19;
        uVar20 = uVar20 + 0x40;
        iVar35 = (int)((uint)((ulong)lVar1 >> 0x20) & uVar17) >> 0x1f;
        auVar34._4_4_ = iVar35;
        auVar34._0_4_ = iVar35;
        auVar34._8_4_ = iVar35;
        auVar34._12_4_ = iVar35;
        _local_80 = auVar34 & *(undefined1 (*) [16])(lVar13 + 0x1d4) | _local_80;
        local_70 = *(undefined1 (*) [16])(lVar13 + 0x1e4) & auVar34 | local_70;
        *(undefined1 (*) [16])(lVar13 + 0x1fc) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(lVar13 + 0x20c) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(lVar13 + 0x21c) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(lVar13 + 0x22c) = (undefined1  [16])0x0;
      }
      *(uint *)(lVar13 + 0x238) = uVar27;
      sha256_block_data_order(c,lVar14,1);
      uVar18 = (uint)((long)(uVar20 + lVar19) >> 0x3f);
      uVar24 = *(uint *)(lVar13 + 0x1e4) & uVar18 | local_70._0_4_;
      uVar29 = *(uint *)(lVar13 + 0x1d8) & uVar18 | local_80._4_4_;
      uVar22 = *(uint *)(lVar13 + 0x1e8) & uVar18 | local_70._4_4_;
      uVar28 = *(uint *)(lVar13 + 0x1dc) & uVar18 | (uint)uStack_78;
      uVar26 = *(uint *)(lVar13 + 0x1e0) & uVar18 | uStack_78._4_4_;
      uVar27 = *(uint *)(lVar13 + 0x1ec) & uVar18 | local_70._8_4_;
      uVar17 = *(uint *)(lVar13 + 0x1f0) & uVar18 | local_70._12_4_;
      uVar18 = uVar18 & *(uint *)(lVar13 + 0x1d4) | local_80._0_4_;
      uStack_78._0_4_ =
           uVar28 >> 0x18 | (uVar28 & 0xff0000) >> 8 | (uVar28 & 0xff00) << 8 | uVar28 << 0x18;
      uStack_78._4_4_ =
           uVar26 >> 0x18 | (uVar26 & 0xff0000) >> 8 | (uVar26 & 0xff00) << 8 | uVar26 << 0x18;
      local_80._4_4_ =
           uVar29 >> 0x18 | (uVar29 & 0xff0000) >> 8 | (uVar29 & 0xff00) << 8 | uVar29 << 0x18;
      local_80._0_4_ =
           uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 | (uVar18 & 0xff00) << 8 | uVar18 << 0x18;
      local_70._4_4_ =
           uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8 | (uVar22 & 0xff00) << 8 | uVar22 << 0x18;
      local_70._0_4_ =
           uVar24 >> 0x18 | (uVar24 & 0xff0000) >> 8 | (uVar24 & 0xff00) << 8 | uVar24 << 0x18;
      local_70._8_4_ =
           uVar27 >> 0x18 | (uVar27 & 0xff0000) >> 8 | (uVar27 & 0xff00) << 8 | uVar27 << 0x18;
      local_70._12_4_ =
           uVar17 >> 0x18 | (uVar17 & 0xff0000) >> 8 | (uVar17 & 0xff00) << 8 | uVar17 << 0x18;
      *(undefined8 *)(lVar13 + 500) = *(undefined8 *)(lVar13 + 0x184);
      *(undefined8 *)(lVar13 + 0x1fc) = *(undefined8 *)(lVar13 + 0x18c);
      *(undefined8 *)(lVar13 + 0x1d4) = *(undefined8 *)(lVar13 + 0x164);
      *(undefined8 *)(lVar13 + 0x1dc) = *(undefined8 *)(lVar13 + 0x16c);
      *(undefined8 *)(lVar13 + 0x1e4) = *(undefined8 *)(lVar13 + 0x174);
      *(undefined8 *)(lVar13 + 0x1ec) = *(undefined8 *)(lVar13 + 0x17c);
      *(undefined8 *)(lVar13 + 0x204) = *(undefined8 *)(lVar13 + 0x194);
      *(undefined8 *)(lVar13 + 0x20c) = *(undefined8 *)(lVar13 + 0x19c);
      *(undefined8 *)(lVar13 + 0x214) = *(undefined8 *)(lVar13 + 0x1a4);
      *(undefined8 *)(lVar13 + 0x21c) = *(undefined8 *)(lVar13 + 0x1ac);
      *(undefined8 *)(lVar13 + 0x224) = *(undefined8 *)(lVar13 + 0x1b4);
      *(undefined8 *)(lVar13 + 0x22c) = *(undefined8 *)(lVar13 + 0x1bc);
      *(undefined8 *)(lVar13 + 0x234) = *(undefined8 *)(lVar13 + 0x1c4);
      *(undefined8 *)(lVar13 + 0x23c) = *(undefined8 *)(lVar13 + 0x1cc);
      sha256_update(c,local_80,0x20);
      SHA256_Final(local_80,c);
      uVar17 = ((int)(uVar16 - uVar32) - (int)local_e0) - 0x21;
      pbVar25 = (byte *)((long)local_d0 + (uVar16 - uVar32) + -1);
      uVar32 = 0;
      do {
        bVar4 = *pbVar25;
        pbVar25 = pbVar25 + 1;
        uVar18 = (int)uVar17 >> 0x1f;
        uVar27 = -uVar17 - 0x21 & uVar17;
        pbVar2 = local_80 + uVar31;
        uVar31 = uVar31 + (uVar27 >> 0x1f);
        uVar17 = uVar17 + 1;
        uVar32 = uVar32 | (uint)(bVar4 ^ *pbVar2) & (int)uVar27 >> 0x1f | ~uVar18 & (bVar4 ^ uVar12)
        ;
      } while (pbVar25 != (byte *)((long)local_d0 + uVar16 + 0x1f));
      iVar35 = ((int)(-uVar32 | uVar21) >> 0x1f) + 1;
      goto LAB_0010014d;
    }
    sha256_update(lVar13 + 0x1d4,param_2,param_4);
  }
  else {
    if (uVar16 == 0xffffffffffffffff) {
      lVar14 = 0;
      pvVar23 = param_3;
      uVar16 = param_4;
    }
    else {
      if ((uVar16 + 0x30 & 0xfffffffffffffff0) != param_4) goto LAB_0010014b;
      lVar14 = (ulong)(0x301 < *(uint *)(lVar13 + 0x250)) * 0x10;
      pvVar23 = (void *)((long)param_3 + lVar14);
    }
    local_e8 = param_2;
    local_e0 = param_4;
    if (((((DAT_0010302b & 0x20) != 0) ||
         (((_DAT_00103024 & 0x10000000) != 0 &&
          ((_OPENSSL_ia32cap_P & 0x40000000) != 0 || (_DAT_00103024 & 0x800) != 0)))) &&
        (uVar20 = lVar14 + (ulong)(0x40 - iVar35), uVar20 < uVar16)) &&
       (uVar30 = uVar16 - uVar20, 0x3f < uVar30)) {
      sha256_update(lVar13 + 0x1d4,pvVar23);
      aesni_cbc_sha256_enc
                (param_3,param_2,uVar30 >> 6,lVar13,param_1 + 0x28,lVar13 + 0x1d4,
                 (long)param_3 + uVar20);
      uVar31 = uVar30 & 0xffffffffffffffc0;
      uVar12 = (int)uVar31 * 8;
      uVar32 = uVar12 + (int)*(undefined8 *)(lVar13 + 500);
      iVar35 = (int)(uVar30 >> 0x1d) + (int)((ulong)*(undefined8 *)(lVar13 + 500) >> 0x20);
      *(ulong *)(lVar13 + 500) = CONCAT44(iVar35,uVar32);
      if (uVar32 < uVar12) {
        *(int *)(lVar13 + 0x1f8) = iVar35 + 1;
      }
      lVar14 = uVar20 + uVar31;
      pvVar23 = (void *)((long)param_3 + lVar14);
      local_e8 = (void *)((long)param_2 + uVar31);
      local_e0 = param_4 - uVar31;
    }
    local_f0 = (SHA256_CTX *)(lVar13 + 0x1d4);
    sha256_update(local_f0,pvVar23,uVar16 - lVar14);
    if (uVar16 == param_4) {
      aesni_cbc_encrypt((long)param_3 + uVar31,local_e8,local_e0,lVar13,param_1 + 0x28,1);
    }
    else {
      if (param_3 != param_2) {
        memcpy(local_e8,(void *)((long)param_3 + uVar31),uVar16 - uVar31);
      }
      md = (uchar *)((long)param_2 + uVar16);
      SHA256_Final(md,local_f0);
      *(undefined8 *)(lVar13 + 0x1d4) = *(undefined8 *)(lVar13 + 0x164);
      *(undefined8 *)(lVar13 + 0x1dc) = *(undefined8 *)(lVar13 + 0x16c);
      *(undefined8 *)(lVar13 + 0x1e4) = *(undefined8 *)(lVar13 + 0x174);
      *(undefined8 *)(lVar13 + 0x1ec) = *(undefined8 *)(lVar13 + 0x17c);
      *(undefined8 *)(lVar13 + 500) = *(undefined8 *)(lVar13 + 0x184);
      *(undefined8 *)(lVar13 + 0x1fc) = *(undefined8 *)(lVar13 + 0x18c);
      *(undefined8 *)(lVar13 + 0x204) = *(undefined8 *)(lVar13 + 0x194);
      *(undefined8 *)(lVar13 + 0x20c) = *(undefined8 *)(lVar13 + 0x19c);
      *(undefined8 *)(lVar13 + 0x214) = *(undefined8 *)(lVar13 + 0x1a4);
      *(undefined8 *)(lVar13 + 0x21c) = *(undefined8 *)(lVar13 + 0x1ac);
      *(undefined8 *)(lVar13 + 0x224) = *(undefined8 *)(lVar13 + 0x1b4);
      *(undefined8 *)(lVar13 + 0x22c) = *(undefined8 *)(lVar13 + 0x1bc);
      *(undefined8 *)(lVar13 + 0x234) = *(undefined8 *)(lVar13 + 0x1c4);
      *(undefined8 *)(lVar13 + 0x23c) = *(undefined8 *)(lVar13 + 0x1cc);
      sha256_update(local_f0,md,0x20);
      SHA256_Final(md,local_f0);
      uVar31 = uVar16 + 0x20;
      if (uVar31 < param_4) {
        memset((void *)(uVar31 + (long)param_2),((uint)param_4 - 1) - (int)uVar31 & 0xff,
               (param_4 - 0x20) - uVar16);
      }
      aesni_cbc_encrypt(local_e8,local_e8,local_e0,lVar13,param_1 + 0x28,1);
    }
  }
  iVar35 = 1;
LAB_0010014d:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar35;
}



uint aesni_cbc_hmac_sha256_init_key
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  
  lVar3 = EVP_CIPHER_CTX_get_cipher_data();
  if (param_4 == 0) {
    iVar1 = EVP_CIPHER_CTX_get_key_length(param_1);
    uVar2 = aesni_set_decrypt_key(param_2,iVar1 * 8,lVar3);
  }
  else {
    iVar1 = EVP_CIPHER_CTX_get_key_length(param_1);
    uVar2 = aesni_set_encrypt_key(param_2,iVar1 * 8,lVar3);
  }
  SHA256_Init((SHA256_CTX *)(lVar3 + 0xf4));
  *(undefined8 *)(lVar3 + 0x248) = 0xffffffffffffffff;
  *(undefined8 *)(lVar3 + 0x164) = *(undefined8 *)(lVar3 + 0xf4);
  *(undefined8 *)(lVar3 + 0x16c) = *(undefined8 *)(lVar3 + 0xfc);
  *(undefined8 *)(lVar3 + 0x174) = *(undefined8 *)(lVar3 + 0x104);
  *(undefined8 *)(lVar3 + 0x17c) = *(undefined8 *)(lVar3 + 0x10c);
  *(undefined8 *)(lVar3 + 0x184) = *(undefined8 *)(lVar3 + 0x114);
  *(undefined8 *)(lVar3 + 0x18c) = *(undefined8 *)(lVar3 + 0x11c);
  *(undefined8 *)(lVar3 + 0x194) = *(undefined8 *)(lVar3 + 0x124);
  *(undefined8 *)(lVar3 + 0x19c) = *(undefined8 *)(lVar3 + 300);
  *(undefined8 *)(lVar3 + 0x1a4) = *(undefined8 *)(lVar3 + 0x134);
  *(undefined8 *)(lVar3 + 0x1ac) = *(undefined8 *)(lVar3 + 0x13c);
  *(undefined8 *)(lVar3 + 0x1b4) = *(undefined8 *)(lVar3 + 0x144);
  *(undefined8 *)(lVar3 + 0x1bc) = *(undefined8 *)(lVar3 + 0x14c);
  *(undefined8 *)(lVar3 + 0x1c4) = *(undefined8 *)(lVar3 + 0x154);
  *(undefined8 *)(lVar3 + 0x1cc) = *(undefined8 *)(lVar3 + 0x15c);
  *(undefined8 *)(lVar3 + 0x1d4) = *(undefined8 *)(lVar3 + 0xf4);
  *(undefined8 *)(lVar3 + 0x1dc) = *(undefined8 *)(lVar3 + 0xfc);
  *(undefined8 *)(lVar3 + 0x1e4) = *(undefined8 *)(lVar3 + 0x104);
  *(undefined8 *)(lVar3 + 0x1ec) = *(undefined8 *)(lVar3 + 0x10c);
  *(undefined8 *)(lVar3 + 500) = *(undefined8 *)(lVar3 + 0x114);
  *(undefined8 *)(lVar3 + 0x1fc) = *(undefined8 *)(lVar3 + 0x11c);
  *(undefined8 *)(lVar3 + 0x204) = *(undefined8 *)(lVar3 + 0x124);
  *(undefined8 *)(lVar3 + 0x20c) = *(undefined8 *)(lVar3 + 300);
  *(undefined8 *)(lVar3 + 0x214) = *(undefined8 *)(lVar3 + 0x134);
  *(undefined8 *)(lVar3 + 0x21c) = *(undefined8 *)(lVar3 + 0x13c);
  *(undefined8 *)(lVar3 + 0x224) = *(undefined8 *)(lVar3 + 0x144);
  *(undefined8 *)(lVar3 + 0x22c) = *(undefined8 *)(lVar3 + 0x14c);
  *(undefined8 *)(lVar3 + 0x234) = *(undefined8 *)(lVar3 + 0x154);
  *(undefined8 *)(lVar3 + 0x23c) = *(undefined8 *)(lVar3 + 0x15c);
  return ~uVar2 >> 0x1f;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long tls1_1_multi_block_encrypt
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
  uVar42 = param_5 * 4;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar16 = RAND_bytes((uchar *)local_568,param_5 << 6);
  local_828 = (long *)0x0;
  if (iVar16 < 1) goto LAB_00101397;
  bVar25 = (char)param_5 + 1;
  local_834 = param_4 >> (bVar25 & 0x1f);
  local_820 = (param_4 + local_834) - (local_834 << (bVar25 & 0x1f));
  if ((local_834 < local_820) && ((local_820 + 0x16 & 0x3f) < uVar42 - 1)) {
    local_834 = local_834 + 1;
    local_820 = local_820 + param_5 * -4 + 1;
  }
  local_7a8 = param_3;
  puStack_6a0 = param_2 + 0x15;
  local_6a8 = param_3;
  *(ulong *)(param_2 + 5) = local_568[0];
  *(ulong *)(param_2 + 0xd) = local_568[1];
  uVar26 = local_820;
  if (local_834 <= local_820) {
    uVar26 = local_834;
  }
  local_690 = local_568[0];
  uStack_688 = local_568[1];
  uVar26 = uVar26 - 0x33;
  if ((int)uVar42 < 2) {
    local_568[0] = *(ulong *)(param_1 + 0x1fc);
    sha256_multi_block(&local_160,&local_728,0);
    if (0x83f < uVar26) goto LAB_00101086;
    sha256_multi_block(&local_160,&local_7a8,0);
    puVar37 = local_568;
    for (lVar19 = 0x80; lVar19 != 0; lVar19 = lVar19 + -1) {
      *puVar37 = 0;
      puVar37 = puVar37 + (ulong)bVar43 * -2 + 1;
    }
LAB_00101327:
    local_828 = &local_728;
    sha256_multi_block(&local_160,local_828,0);
    puVar37 = local_568;
    for (lVar19 = 0x80; lVar19 != 0; lVar19 = lVar19 + -1) {
      *puVar37 = 0;
      puVar37 = puVar37 + (ulong)bVar43 * -2 + 1;
    }
    sha256_multi_block(&local_160,local_828,0);
    local_828 = (long *)0x0;
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
    } while (puVar31 != local_568 + (ulong)uVar42 * 2);
    uVar41 = *(uint *)(param_1 + 0x1f0);
    local_568[0] = *(ulong *)(param_1 + 0x1fc);
    uVar17 = *(uint *)(param_1 + 0x1d4);
    uVar32 = *(uint *)(param_1 + 0x1e0);
    uVar29 = *(uint *)(param_1 + 0x1d8);
    uVar39 = local_568[0] >> 0x38;
    uVar40 = local_568[0] & 0xff000000000000;
    uVar27 = local_568[0] & 0xff0000000000;
    uVar9 = local_568[0] & 0xff00000000;
    uVar10 = local_568[0] & 0xff000000;
    uVar11 = local_568[0] & 0xff0000;
    uVar12 = local_568[0] & 0xff00;
    uVar13 = local_568[0] << 0x38;
    uVar38 = *(uint *)(param_1 + 0x1dc);
    uVar3 = *(uint *)(param_1 + 0x1e4);
    uVar4 = *(uint *)(param_1 + 0x1e8);
    bVar25 = *(byte *)(param_1 + 0x206);
    uVar5 = *(uint *)(param_1 + 0x1ec);
    bVar1 = *(byte *)(param_1 + 0x205);
    bVar2 = *(byte *)(param_1 + 0x204);
    puVar23 = &local_160;
    puVar37 = local_568;
    lVar19 = 0;
    plVar20 = plVar21;
    do {
      puVar23[0x18] = uVar32;
      uVar7 = local_820;
      if (uVar42 - 1 != (uint)lVar19) {
        uVar7 = local_834;
      }
      puVar23[0x20] = uVar3;
      *puVar23 = uVar17;
      *(uchar *)((long)puVar37 + 0xc) = (uchar)uVar7;
      puVar23[8] = uVar29;
      puVar23[0x38] = uVar41;
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
    } while ((uint)lVar36 < uVar42);
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
      } while (plVar34 != alStack_718 + (ulong)(uVar42 - 1) * 2);
LAB_00101086:
      local_828 = &local_728;
      local_7d0 = &local_6a8;
      local_818 = &local_7a8;
      uVar41 = uVar26 >> 6;
      do {
        sha256_multi_block(&local_160,local_828,param_5);
        aesni_multi_cbc_encrypt(local_7d0,param_1,param_5);
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
            plVar20[1] = lVar19 + _UNK_00101f78;
            lVar36 = *(long *)(lVar19 + 0x7f8);
            plVar20[3] = *(long *)(lVar19 + 0x7f0);
            plVar20[4] = lVar36;
            plVar21 = plVar22;
            plVar20 = plVar20 + 5;
            plVar34 = plVar34 + 2;
          } while (local_798 + (ulong)(uVar42 - 1) * 2 != plVar22);
        }
        uVar41 = uVar41 - 0x20;
      } while (0x20 < uVar41);
      iVar16 = (((uVar26 >> 6) - 0x21 >> 5) + 1) * 0x800;
      sha256_multi_block(&local_160,local_818,param_5);
      puVar37 = local_568;
      for (lVar19 = 0x80; lVar19 != 0; lVar19 = lVar19 + -1) {
        *puVar37 = 0;
        puVar37 = puVar37 + (ulong)bVar43 * -2 + 1;
      }
      if (param_5 == 0) goto LAB_00101327;
    }
    uVar26 = uVar42 - 1;
    local_7d0 = &local_6a8;
    local_828 = &local_728;
    lVar19 = 0;
    puVar37 = local_568;
    uVar41 = 0;
    uVar17 = local_834;
    while( true ) {
      uVar32 = uVar17 + (-0x33 - iVar16) + *(int *)((long)local_7a0 + lVar19) * -0x40;
      lVar36 = __memcpy_chk(puVar37,(ulong)(uint)(*(int *)((long)local_7a0 + lVar19) * 0x40) +
                                    *(long *)((long)local_7a0 + lVar19 + -8),(ulong)uVar32,
                            lVar19 * -8 + 0x400);
      *(undefined1 *)((long)local_568 + (ulong)uVar32 + (ulong)uVar41 * 0x80) = 0x80;
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
      uVar32 = uVar41 + 1;
      puVar37 = (ulong *)(lVar36 + 0x80);
      lVar19 = lVar19 + 0x10;
      if (uVar42 == uVar32) break;
      uVar41 = uVar32;
      uVar17 = local_820;
      if (uVar32 != uVar26) {
        uVar17 = local_834;
      }
    }
    sha256_multi_block(&local_160,local_828,param_5);
    uVar42 = *(uint *)(param_1 + 0x16c);
    puVar37 = local_568;
    for (lVar19 = 0x80; lVar19 != 0; lVar19 = lVar19 + -1) {
      *puVar37 = 0;
      puVar37 = puVar37 + (ulong)bVar43 * -2 + 1;
    }
    uVar17 = *(uint *)(param_1 + 0x164);
    uVar32 = *(uint *)(param_1 + 0x168);
    uVar29 = *(uint *)(param_1 + 0x170);
    uVar38 = *(uint *)(param_1 + 0x174);
    uVar3 = *(uint *)(param_1 + 0x178);
    uVar4 = *(uint *)(param_1 + 0x17c);
    uVar5 = *(uint *)(param_1 + 0x180);
    puVar23 = &local_160;
    plVar21 = local_828;
    puVar37 = local_568;
    do {
      uVar7 = *puVar23;
      *puVar23 = uVar17;
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
      puVar23[8] = uVar32;
      puVar23[0x10] = uVar42;
      puVar23[0x18] = uVar29;
      puVar23[0x20] = uVar38;
      puVar23[0x28] = uVar3;
      puVar23[0x30] = uVar4;
      *(uint *)((long)puVar37 + 0x1c) =
           uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
      puVar23[0x38] = uVar5;
      *(uchar *)(puVar37 + 4) = 0x80;
      *(uint *)((long)puVar37 + 0x3c) = 0x30000;
      *(undefined4 *)(plVar21 + 1) = 1;
      puVar23 = puVar24;
      plVar21 = plVar21 + 2;
      puVar37 = puVar37 + 0x10;
    } while (auStack_15c + uVar26 != puVar24);
    sha256_multi_block(&local_160,local_828,param_5);
    local_828 = (long *)0x0;
    puVar23 = &local_160;
    uVar42 = local_834;
    uVar17 = 0;
    while( true ) {
      memcpy((void *)local_7d0[1],(void *)*local_7d0,(ulong)(uVar42 - iVar16));
      uVar32 = *puVar23;
      *local_7d0 = local_7d0[1];
      puVar24 = (uint *)(param_2 + (uVar42 + 0x15));
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
      uVar29 = ~(uVar42 + 0x20) & 0xf;
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
      iVar28 = uVar29 + uVar42 + 0x20;
      puVar35 = (undefined1 *)(uVar39 + (long)(puVar24 + 8));
      plVar21 = local_7d0 + 5;
      puVar23 = puVar23 + 1;
      *(uint *)(local_7d0 + 2) = (uint)((1 - iVar16) + iVar28) >> 4;
      *param_2 = *(undefined1 *)(param_1 + 0x204);
      param_2[1] = *(undefined1 *)(param_1 + 0x205);
      param_2[2] = *(undefined1 *)(param_1 + 0x206);
      uVar15 = (short)iVar28 + 0x11;
      *(ushort *)(param_2 + 3) = uVar15 * 0x100 | uVar15 >> 8;
      local_828 = (long *)((long)local_828 + (ulong)(iVar28 + 0x16));
      uVar32 = uVar17 + 1;
      if (uVar41 == uVar17) break;
      local_7d0 = plVar21;
      param_2 = puVar35;
      uVar42 = local_820;
      uVar17 = uVar32;
      if (uVar32 != uVar26) {
        uVar42 = local_834;
      }
    }
  }
  local_7d0 = &local_6a8;
  aesni_multi_cbc_encrypt(local_7d0,param_1,param_5);
  OPENSSL_cleanse(local_568,0x400);
  OPENSSL_cleanse(&local_160,0x100);
LAB_00101397:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (long)local_828;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong aesni_cbc_hmac_sha256_ctrl
                (undefined8 param_1,undefined4 param_2,uint param_3,undefined8 *param_4)

{
  SHA256_CTX *c;
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
        *(undefined8 *)(lVar6 + 0x250) = *param_4;
        uVar2 = *(undefined8 *)((long)param_4 + 5);
        *(undefined8 *)(lVar6 + 0x248) = 0xd;
        *(undefined8 *)(lVar6 + 0x255) = uVar2;
        uVar7 = 0x20;
        goto LAB_00101800;
      }
      *(ulong *)(lVar6 + 0x248) = (ulong)uVar10;
      uVar3 = *(ushort *)((long)param_4 + 9) << 8 | *(ushort *)((long)param_4 + 9) >> 8;
      *(uint *)(lVar6 + 0x250) = (uint)uVar3;
      if (0x301 < uVar3) {
        if (uVar10 < 0x10) {
LAB_00101ad0:
          uVar7 = 0;
          goto LAB_00101800;
        }
        uVar11 = uVar10 - 0x10;
        *(ushort *)((long)param_4 + 0xb) = (ushort)uVar11 << 8 | (ushort)uVar11 >> 8;
      }
      *(undefined8 *)(lVar6 + 0x1d4) = *(undefined8 *)(lVar6 + 0xf4);
      *(undefined8 *)(lVar6 + 0x1dc) = *(undefined8 *)(lVar6 + 0xfc);
      *(undefined8 *)(lVar6 + 0x1e4) = *(undefined8 *)(lVar6 + 0x104);
      *(undefined8 *)(lVar6 + 0x1ec) = *(undefined8 *)(lVar6 + 0x10c);
      *(undefined8 *)(lVar6 + 500) = *(undefined8 *)(lVar6 + 0x114);
      *(undefined8 *)(lVar6 + 0x1fc) = *(undefined8 *)(lVar6 + 0x11c);
      *(undefined8 *)(lVar6 + 0x204) = *(undefined8 *)(lVar6 + 0x124);
      *(undefined8 *)(lVar6 + 0x20c) = *(undefined8 *)(lVar6 + 300);
      *(undefined8 *)(lVar6 + 0x214) = *(undefined8 *)(lVar6 + 0x134);
      *(undefined8 *)(lVar6 + 0x21c) = *(undefined8 *)(lVar6 + 0x13c);
      *(undefined8 *)(lVar6 + 0x224) = *(undefined8 *)(lVar6 + 0x144);
      *(undefined8 *)(lVar6 + 0x22c) = *(undefined8 *)(lVar6 + 0x14c);
      *(undefined8 *)(lVar6 + 0x234) = *(undefined8 *)(lVar6 + 0x154);
      *(undefined8 *)(lVar6 + 0x23c) = *(undefined8 *)(lVar6 + 0x15c);
      sha256_update(lVar6 + 0x1d4,param_4,0xd);
      uVar7 = (ulong)((uVar11 + 0x30 & 0xfffffff0) - uVar11);
      goto LAB_00101800;
    }
    break;
  case 0x17:
    uVar7 = 0xffffffff;
    local_78 = (undefined1  [16])0x0;
    local_68 = (undefined1  [16])0x0;
    local_58 = (undefined1  [16])0x0;
    local_48 = (undefined1  [16])0x0;
    if (-1 < (int)param_3) {
      if (param_3 < 0x41) {
        memcpy(local_78,param_4,(long)(int)param_3);
      }
      else {
        c = (SHA256_CTX *)(lVar6 + 0xf4);
        SHA256_Init(c);
        sha256_update(c,param_4,(long)(int)param_3);
        SHA256_Final(local_78,c);
      }
      puVar8 = (ulong *)local_78;
      do {
        puVar9 = puVar8 + 2;
        *puVar8 = *puVar8 ^ __LC1;
        puVar8[1] = puVar8[1] ^ _UNK_00101f88;
        puVar8 = puVar9;
      } while (puVar9 != &local_38);
      SHA256_Init((SHA256_CTX *)(lVar6 + 0xf4));
      sha256_update((SHA256_CTX *)(lVar6 + 0xf4),local_78,0x40);
      puVar8 = (ulong *)local_78;
      do {
        puVar9 = puVar8 + 2;
        *puVar8 = *puVar8 ^ __LC2;
        puVar8[1] = puVar8[1] ^ _UNK_00101f98;
        puVar8 = puVar9;
      } while (puVar9 != &local_38);
      SHA256_Init((SHA256_CTX *)(lVar6 + 0x164));
      sha256_update((SHA256_CTX *)(lVar6 + 0x164),local_78,0x40);
      OPENSSL_cleanse(local_78,0x40);
      uVar7 = 1;
    }
    goto LAB_00101800;
  case 0x19:
    if (0x1f < (int)param_3) {
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
          if (uVar10 < 0x1000) goto LAB_00101ad0;
          if (uVar10 < 0x2000) {
            iVar4 = 4;
            bVar12 = 2;
          }
          else {
            iVar4 = (-(uint)((_memcpy & 0x20) == 0) & 0xfffffffc) + 8;
            bVar12 = 3 - ((_memcpy & 0x20) == 0);
          }
        }
        *(undefined8 *)(lVar6 + 0x1d4) = *(undefined8 *)(lVar6 + 0xf4);
        *(undefined8 *)(lVar6 + 0x1dc) = *(undefined8 *)(lVar6 + 0xfc);
        *(undefined8 *)(lVar6 + 0x1e4) = *(undefined8 *)(lVar6 + 0x104);
        *(undefined8 *)(lVar6 + 0x1ec) = *(undefined8 *)(lVar6 + 0x10c);
        *(undefined8 *)(lVar6 + 500) = *(undefined8 *)(lVar6 + 0x114);
        *(undefined8 *)(lVar6 + 0x1fc) = *(undefined8 *)(lVar6 + 0x11c);
        *(undefined8 *)(lVar6 + 0x204) = *(undefined8 *)(lVar6 + 0x124);
        *(undefined8 *)(lVar6 + 0x20c) = *(undefined8 *)(lVar6 + 300);
        *(undefined8 *)(lVar6 + 0x214) = *(undefined8 *)(lVar6 + 0x134);
        *(undefined8 *)(lVar6 + 0x21c) = *(undefined8 *)(lVar6 + 0x13c);
        *(undefined8 *)(lVar6 + 0x224) = *(undefined8 *)(lVar6 + 0x144);
        *(undefined8 *)(lVar6 + 0x22c) = *(undefined8 *)(lVar6 + 0x14c);
        *(undefined8 *)(lVar6 + 0x234) = *(undefined8 *)(lVar6 + 0x154);
        *(undefined8 *)(lVar6 + 0x23c) = *(undefined8 *)(lVar6 + 0x15c);
        sha256_update(lVar6 + 0x1d4,lVar1,0xd);
        uVar5 = uVar11 >> (bVar12 & 0x1f);
        uVar11 = (uVar11 + uVar5) - (uVar5 << (bVar12 & 0x1f));
        if ((uVar5 < uVar11) && ((uVar11 + 0x16 & 0x3f) < iVar4 - 1U)) {
          uVar5 = uVar5 + 1;
          uVar11 = (uVar11 - iVar4) + 1;
        }
        *(int *)(param_4 + 3) = iVar4;
        iVar4 = (uVar5 + 0x30 & 0xfffffff0) + 0x15;
        uVar7 = (ulong)(((uVar11 + 0x30 & 0xfffffff0) + 0x15 + (iVar4 << (bVar12 & 0x1f))) - iVar4);
        goto LAB_00101800;
      }
    }
    break;
  case 0x1a:
    uVar7 = tls1_1_multi_block_encrypt
                      (lVar6,*param_4,param_4[1],param_4[2],*(uint *)(param_4 + 3) >> 2);
    goto LAB_00101800;
  case 0x1c:
    uVar7 = (ulong)((param_3 + 0x30 & 0xfffffff0) + 0x15);
    goto LAB_00101800;
  }
  uVar7 = 0xffffffff;
LAB_00101800:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined1 * EVP_aes_128_cbc_hmac_sha256(void)

{
  int iVar1;
  
  if ((DAT_00103027 & 2) == 0) {
    return (undefined1 *)0x0;
  }
  iVar1 = aesni_cbc_sha256_enc(0,0,0,0,0,0,0);
  if (iVar1 != 0) {
    return aesni_128_cbc_hmac_sha256_cipher;
  }
  return (undefined1 *)0x0;
}



undefined1 * EVP_aes_256_cbc_hmac_sha256(void)

{
  int iVar1;
  
  if ((DAT_00103027 & 2) == 0) {
    return (undefined1 *)0x0;
  }
  iVar1 = aesni_cbc_sha256_enc(0,0,0,0,0,0,0);
  if (iVar1 != 0) {
    return aesni_256_cbc_hmac_sha256_cipher;
  }
  return (undefined1 *)0x0;
}


