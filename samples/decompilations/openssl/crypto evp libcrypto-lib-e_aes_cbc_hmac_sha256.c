
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

int aesni_cbc_hmac_sha256_cipher(long param_1,void *param_2,void *param_3,ulong param_4)

{
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
  undefined1 auVar11 [12];
  int iVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  uint uVar18;
  long lVar19;
  ulong uVar20;
  uint uVar21;
  void *pvVar22;
  uint uVar23;
  uint uVar24;
  SHA256_CTX *pSVar25;
  byte *pbVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  ulong uVar30;
  uint uVar31;
  ulong uVar32;
  long lVar33;
  long in_FS_OFFSET;
  uint uVar34;
  int iVar37;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  ulong local_f0;
  void *local_e0;
  ulong local_d8;
  void *local_d0;
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar15 = EVP_CIPHER_CTX_get_cipher_data();
  uVar30 = *(ulong *)(lVar15 + 0x248);
  iVar37 = *(int *)(lVar15 + 0x23c);
  *(undefined8 *)(lVar15 + 0x248) = 0xffffffffffffffff;
  local_f0 = (ulong)((uint)param_4 & 0xf);
  if ((param_4 & 0xf) != 0) {
LAB_00100151:
    iVar37 = 0;
    goto LAB_00100153;
  }
  iVar12 = EVP_CIPHER_CTX_is_encrypting(param_1);
  if (iVar12 == 0) {
    aesni_cbc_encrypt(param_3,param_2,param_4,lVar15,param_1 + 0x28,0);
    if (uVar30 != 0xffffffffffffffff) {
      iVar37 = 0;
      uVar20 = (ulong)(0x301 < CONCAT11(*(undefined1 *)(lVar15 + 0x24c + uVar30),
                                        *(undefined1 *)(lVar15 + 0x24d + uVar30)));
      lVar16 = uVar20 * 0x10;
      if (param_4 < lVar16 + 0x21U) goto LAB_00100153;
      local_d0 = (void *)((long)param_2 + lVar16);
      lVar16 = param_4 + uVar20 * -0x10;
      uVar5 = *(undefined8 *)(lVar15 + 0xf4);
      uVar6 = *(undefined8 *)(lVar15 + 0xfc);
      uVar7 = *(undefined8 *)(lVar15 + 0x104);
      uVar8 = *(undefined8 *)(lVar15 + 0x10c);
      bVar4 = *(byte *)((long)local_d0 + lVar16 + -1);
      uVar13 = (int)lVar16 - 0x21;
      uVar9 = *(undefined8 *)(lVar15 + 0x114);
      uVar10 = *(undefined8 *)(lVar15 + 0x11c);
      uVar23 = 0xff - uVar13 >> 0x18 | uVar13 & 0xff;
      uVar34 = uVar23 ^ (uVar23 - bVar4 ^ (uint)bVar4 | uVar23 ^ bVar4);
      uVar13 = (int)uVar34 >> 0x1f;
      uVar13 = (uint)bVar4 & ~uVar13 | uVar13 & uVar23;
      lVar33 = lVar16 - (ulong)(uVar13 + 0x21);
      *(char *)(lVar15 + 0x24f + uVar30) = (char)lVar33;
      *(char *)(lVar15 + 0x24e + uVar30) = (char)((ulong)lVar33 >> 8);
      pSVar25 = (SHA256_CTX *)(lVar15 + 0x1d4);
      *(undefined8 *)(lVar15 + 0x1d4) = uVar5;
      *(undefined8 *)(lVar15 + 0x1dc) = uVar6;
      *(undefined8 *)(lVar15 + 0x1e4) = uVar7;
      *(undefined8 *)(lVar15 + 0x1ec) = uVar8;
      *(undefined8 *)(lVar15 + 500) = uVar9;
      *(undefined8 *)(lVar15 + 0x1fc) = uVar10;
      *(undefined8 *)(lVar15 + 0x204) = *(undefined8 *)(lVar15 + 0x124);
      *(undefined8 *)(lVar15 + 0x20c) = *(undefined8 *)(lVar15 + 300);
      *(undefined8 *)(lVar15 + 0x214) = *(undefined8 *)(lVar15 + 0x134);
      *(undefined8 *)(lVar15 + 0x21c) = *(undefined8 *)(lVar15 + 0x13c);
      *(undefined8 *)(lVar15 + 0x224) = *(undefined8 *)(lVar15 + 0x144);
      *(undefined8 *)(lVar15 + 0x22c) = *(undefined8 *)(lVar15 + 0x14c);
      *(undefined8 *)(lVar15 + 0x234) = *(undefined8 *)(lVar15 + 0x154);
      *(undefined8 *)(lVar15 + 0x23c) = *(undefined8 *)(lVar15 + 0x15c);
      sha256_update(pSVar25,lVar15 + 0x250,uVar30);
      uVar30 = lVar16 - 0x20;
      if (0x13f < uVar30) {
        lVar16 = (lVar16 - 0x160U & 0xffffffffffffffc0) + (ulong)(0x40 - *(int *)(lVar15 + 0x23c));
        lVar33 = lVar33 - lVar16;
        sha256_update(pSVar25,local_d0,lVar16);
        local_d0 = (void *)((long)local_d0 + lVar16);
        uVar30 = uVar30 - lVar16;
      }
      uVar14 = *(uint *)(lVar15 + 0x23c);
      lVar16 = lVar15 + 0x1fc;
      uVar27 = *(int *)(lVar15 + 500) + (int)lVar33 * 8;
      local_80 = (undefined1  [16])0x0;
      local_70 = (undefined1  [16])0x0;
      uVar27 = uVar27 >> 0x18 | (uVar27 & 0xff0000) >> 8 | (uVar27 & 0xff00) << 8 |
               uVar27 * 0x1000000;
      if (uVar30 != 0) {
        lVar19 = -lVar33;
        do {
          uVar18 = uVar14 + 1;
          bVar4 = (byte)((ulong)lVar19 >> 0x38);
          *(byte *)(lVar15 + 0x1fc + (ulong)uVar14) =
               ~((byte)((ulong)-lVar19 >> 0x38) | bVar4) & 0x80 |
               *(byte *)((long)local_d0 + lVar19 + lVar33) & bVar4;
          uVar20 = uVar30;
          if (uVar14 == 0x3f) {
            uVar14 = (uint)((ulong)(7 - lVar19) >> 0x20);
            *(uint *)(lVar15 + 0x238) = *(uint *)(lVar15 + 0x238) | uVar27 & (int)uVar14 >> 0x1f;
            sha256_block_data_order(pSVar25,lVar16,1);
            iVar37 = (int)((uint)((ulong)(lVar19 + -0x48) >> 0x20) & uVar14) >> 0x1f;
            auVar35._4_4_ = iVar37;
            auVar35._0_4_ = iVar37;
            auVar35._8_4_ = iVar37;
            auVar35._12_4_ = iVar37;
            local_70 = *(undefined1 (*) [16])(lVar15 + 0x1e4) & auVar35 | local_70;
            local_80 = auVar35 & *(undefined1 (*) [16])(lVar15 + 0x1d4) | local_80;
            if (uVar30 - lVar33 == lVar19 + 1) {
              uVar32 = 0;
              goto LAB_0010078c;
            }
            uVar14 = 0;
          }
          else {
            uVar14 = uVar18;
            if (lVar19 + 1 == uVar30 - lVar33) goto LAB_0010077f;
          }
          lVar19 = lVar19 + 1;
        } while( true );
      }
      uVar20 = 0;
      uVar18 = uVar14;
LAB_0010077f:
      uVar32 = (ulong)uVar18;
      if (uVar18 < 0x40) {
LAB_0010078c:
        puVar3 = (undefined8 *)(lVar15 + 0x1fc + uVar32);
        uVar17 = 0x40 - uVar32;
        uVar14 = (uint)uVar17;
        if (uVar14 < 8) {
          if ((uVar17 & 4) == 0) {
            if ((uVar14 != 0) && (*(undefined1 *)puVar3 = 0, (uVar17 & 2) != 0)) {
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
          uVar14 = uVar14 + ((int)puVar3 - (int)((ulong)(puVar3 + 1) & 0xfffffffffffffff8)) &
                   0xfffffff8;
          if (7 < uVar14) {
            uVar18 = 0;
            do {
              uVar17 = (ulong)uVar18;
              uVar18 = uVar18 + 8;
              *(undefined8 *)(((ulong)(puVar3 + 1) & 0xfffffffffffffff8) + uVar17) = 0;
            } while (uVar18 < uVar14);
          }
        }
        uVar20 = (uVar20 + 0x40) - uVar32;
        lVar19 = -0x49 - lVar33;
        if (0x38 < (uint)uVar32) goto LAB_001009fb;
      }
      else {
LAB_001009fb:
        lVar19 = -0x49 - lVar33;
        uVar14 = (uint)((lVar33 + 8) - uVar20 >> 0x20);
        *(uint *)(lVar15 + 0x238) = *(uint *)(lVar15 + 0x238) | uVar27 & (int)uVar14 >> 0x1f;
        sha256_block_data_order(pSVar25,lVar16,1);
        lVar1 = uVar20 + lVar19;
        uVar20 = uVar20 + 0x40;
        iVar37 = (int)((uint)((ulong)lVar1 >> 0x20) & uVar14) >> 0x1f;
        auVar36._4_4_ = iVar37;
        auVar36._0_4_ = iVar37;
        auVar36._8_4_ = iVar37;
        auVar36._12_4_ = iVar37;
        local_80 = auVar36 & *(undefined1 (*) [16])(lVar15 + 0x1d4) | local_80;
        local_70 = *(undefined1 (*) [16])(lVar15 + 0x1e4) & auVar36 | local_70;
        *(undefined1 (*) [16])(lVar15 + 0x1fc) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(lVar15 + 0x20c) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(lVar15 + 0x21c) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(lVar15 + 0x22c) = (undefined1  [16])0x0;
      }
      *(uint *)(lVar15 + 0x238) = uVar27;
      sha256_block_data_order(pSVar25,lVar16,1);
      uVar18 = (uint)((long)(uVar20 + lVar19) >> 0x3f);
      uVar24 = local_70._0_4_ | *(uint *)(lVar15 + 0x1e4) & uVar18;
      uVar31 = *(uint *)(lVar15 + 0x1d8) & uVar18 | local_80._4_4_;
      uVar29 = *(uint *)(lVar15 + 0x1dc) & uVar18 | local_80._8_4_;
      uVar28 = *(uint *)(lVar15 + 0x1e0) & uVar18 | local_80._12_4_;
      uVar21 = *(uint *)(lVar15 + 0x1e8) & uVar18 | local_70._4_4_;
      uVar27 = *(uint *)(lVar15 + 0x1ec) & uVar18 | local_70._8_4_;
      uVar14 = *(uint *)(lVar15 + 0x1f0) & uVar18 | local_70._12_4_;
      uVar18 = uVar18 & *(uint *)(lVar15 + 0x1d4) | local_80._0_4_;
      auVar11._4_8_ = local_80._8_8_;
      auVar11._0_4_ =
           uVar31 >> 0x18 | (uVar31 & 0xff0000) >> 8 | (uVar31 & 0xff00) << 8 | uVar31 << 0x18;
      local_80._0_8_ = auVar11._0_8_ << 0x20;
      local_80._8_4_ =
           uVar29 >> 0x18 | (uVar29 & 0xff0000) >> 8 | (uVar29 & 0xff00) << 8 | uVar29 << 0x18;
      local_80._12_4_ =
           uVar28 >> 0x18 | (uVar28 & 0xff0000) >> 8 | (uVar28 & 0xff00) << 8 | uVar28 << 0x18;
      local_80._0_4_ =
           uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 | (uVar18 & 0xff00) << 8 | uVar18 << 0x18;
      local_70._4_4_ =
           uVar21 >> 0x18 | (uVar21 & 0xff0000) >> 8 | (uVar21 & 0xff00) << 8 | uVar21 << 0x18;
      local_70._0_4_ =
           uVar24 >> 0x18 | (uVar24 & 0xff0000) >> 8 | (uVar24 & 0xff00) << 8 | uVar24 << 0x18;
      local_70._8_4_ =
           uVar27 >> 0x18 | (uVar27 & 0xff0000) >> 8 | (uVar27 & 0xff00) << 8 | uVar27 << 0x18;
      local_70._12_4_ =
           uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 | uVar14 << 0x18;
      *(undefined8 *)(lVar15 + 500) = *(undefined8 *)(lVar15 + 0x184);
      *(undefined8 *)(lVar15 + 0x1fc) = *(undefined8 *)(lVar15 + 0x18c);
      *(undefined8 *)(lVar15 + 0x204) = *(undefined8 *)(lVar15 + 0x194);
      *(undefined8 *)(lVar15 + 0x20c) = *(undefined8 *)(lVar15 + 0x19c);
      *(undefined8 *)(lVar15 + 0x1d4) = *(undefined8 *)(lVar15 + 0x164);
      *(undefined8 *)(lVar15 + 0x1dc) = *(undefined8 *)(lVar15 + 0x16c);
      *(undefined8 *)(lVar15 + 0x1e4) = *(undefined8 *)(lVar15 + 0x174);
      *(undefined8 *)(lVar15 + 0x1ec) = *(undefined8 *)(lVar15 + 0x17c);
      *(undefined8 *)(lVar15 + 0x214) = *(undefined8 *)(lVar15 + 0x1a4);
      *(undefined8 *)(lVar15 + 0x21c) = *(undefined8 *)(lVar15 + 0x1ac);
      *(undefined8 *)(lVar15 + 0x224) = *(undefined8 *)(lVar15 + 0x1b4);
      *(undefined8 *)(lVar15 + 0x22c) = *(undefined8 *)(lVar15 + 0x1bc);
      *(undefined8 *)(lVar15 + 0x234) = *(undefined8 *)(lVar15 + 0x1c4);
      *(undefined8 *)(lVar15 + 0x23c) = *(undefined8 *)(lVar15 + 0x1cc);
      sha256_update(pSVar25,local_80,0x20);
      SHA256_Final(local_80,pSVar25);
      uVar14 = ((int)(uVar30 - uVar23) - (int)lVar33) - 0x21;
      pbVar26 = (byte *)((long)local_d0 + (uVar30 - uVar23) + -1);
      uVar23 = 0;
      do {
        bVar4 = *pbVar26;
        pbVar26 = pbVar26 + 1;
        uVar18 = (int)uVar14 >> 0x1f;
        uVar27 = -uVar14 - 0x21 & uVar14;
        pbVar2 = local_80 + local_f0;
        local_f0 = local_f0 + (uVar27 >> 0x1f);
        uVar14 = uVar14 + 1;
        uVar23 = uVar23 | (uint)(bVar4 ^ *pbVar2) & (int)uVar27 >> 0x1f | ~uVar18 & (bVar4 ^ uVar13)
        ;
      } while (pbVar26 != (byte *)((long)local_d0 + uVar30 + 0x1f));
      iVar37 = ((int)(-uVar23 | uVar34) >> 0x1f) + 1;
      goto LAB_00100153;
    }
    sha256_update(lVar15 + 0x1d4,param_2,param_4);
  }
  else {
    if (uVar30 == 0xffffffffffffffff) {
      lVar16 = 0;
      pvVar22 = param_3;
      uVar30 = param_4;
    }
    else {
      if ((uVar30 + 0x30 & 0xfffffffffffffff0) != param_4) goto LAB_00100151;
      lVar16 = (ulong)(0x301 < *(uint *)(lVar15 + 0x250)) * 0x10;
      pvVar22 = (void *)((long)param_3 + lVar16);
    }
    local_e0 = param_2;
    local_d8 = param_4;
    if (((((DAT_0010302b & 0x20) != 0) ||
         (((_DAT_00103024 & 0x10000000) != 0 &&
          ((_OPENSSL_ia32cap_P & 0x40000000) != 0 || (_DAT_00103024 & 0x800) != 0)))) &&
        (uVar20 = lVar16 + (ulong)(0x40 - iVar37), uVar20 < uVar30)) &&
       (uVar32 = uVar30 - uVar20, 0x3f < uVar32)) {
      sha256_update(lVar15 + 0x1d4,pvVar22);
      aesni_cbc_sha256_enc
                (param_3,param_2,uVar32 >> 6,lVar15,param_1 + 0x28,lVar15 + 0x1d4,
                 (long)param_3 + uVar20);
      local_f0 = uVar32 & 0xffffffffffffffc0;
      uVar13 = ((uint)uVar32 & 0xffffffc0) * 8;
      uVar34 = uVar13 + (int)*(undefined8 *)(lVar15 + 500);
      iVar37 = (int)(uVar32 >> 0x1d) + (int)((ulong)*(undefined8 *)(lVar15 + 500) >> 0x20);
      *(ulong *)(lVar15 + 500) = CONCAT44(iVar37,uVar34);
      if (uVar34 < uVar13) {
        *(int *)(lVar15 + 0x1f8) = iVar37 + 1;
      }
      local_e0 = (void *)((long)param_2 + local_f0);
      lVar16 = uVar20 + local_f0;
      pvVar22 = (void *)((long)param_3 + lVar16);
      local_d8 = param_4 - local_f0;
    }
    pSVar25 = (SHA256_CTX *)(lVar15 + 0x1d4);
    sha256_update(pSVar25,pvVar22,uVar30 - lVar16);
    if (uVar30 == param_4) {
      aesni_cbc_encrypt(local_f0 + (long)param_3,local_e0,local_d8,lVar15,param_1 + 0x28,1);
    }
    else {
      if (param_3 != param_2) {
        memcpy(local_e0,(void *)((long)param_3 + local_f0),uVar30 - local_f0);
      }
      md = (uchar *)((long)param_2 + uVar30);
      SHA256_Final(md,pSVar25);
      *(undefined8 *)(lVar15 + 0x1d4) = *(undefined8 *)(lVar15 + 0x164);
      *(undefined8 *)(lVar15 + 0x1dc) = *(undefined8 *)(lVar15 + 0x16c);
      *(undefined8 *)(lVar15 + 0x1e4) = *(undefined8 *)(lVar15 + 0x174);
      *(undefined8 *)(lVar15 + 0x1ec) = *(undefined8 *)(lVar15 + 0x17c);
      *(undefined8 *)(lVar15 + 500) = *(undefined8 *)(lVar15 + 0x184);
      *(undefined8 *)(lVar15 + 0x1fc) = *(undefined8 *)(lVar15 + 0x18c);
      *(undefined8 *)(lVar15 + 0x204) = *(undefined8 *)(lVar15 + 0x194);
      *(undefined8 *)(lVar15 + 0x20c) = *(undefined8 *)(lVar15 + 0x19c);
      *(undefined8 *)(lVar15 + 0x214) = *(undefined8 *)(lVar15 + 0x1a4);
      *(undefined8 *)(lVar15 + 0x21c) = *(undefined8 *)(lVar15 + 0x1ac);
      *(undefined8 *)(lVar15 + 0x224) = *(undefined8 *)(lVar15 + 0x1b4);
      *(undefined8 *)(lVar15 + 0x22c) = *(undefined8 *)(lVar15 + 0x1bc);
      *(undefined8 *)(lVar15 + 0x234) = *(undefined8 *)(lVar15 + 0x1c4);
      *(undefined8 *)(lVar15 + 0x23c) = *(undefined8 *)(lVar15 + 0x1cc);
      sha256_update(pSVar25,md,0x20);
      SHA256_Final(md,pSVar25);
      uVar20 = uVar30 + 0x20;
      if (uVar20 < param_4) {
        memset((void *)(uVar20 + (long)param_2),((uint)param_4 - 1) - (int)uVar20 & 0xff,
               (param_4 - 0x20) - uVar30);
      }
      aesni_cbc_encrypt(local_e0,local_e0,local_d8,lVar15,param_1 + 0x28,1);
    }
  }
  iVar37 = 1;
LAB_00100153:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar37;
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
               (long param_1,undefined1 *param_2,ulong *param_3,uint param_4,int param_5)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  ushort uVar15;
  int iVar16;
  long lVar17;
  uint *puVar18;
  uint *puVar19;
  byte bVar20;
  uint uVar21;
  ulong uVar22;
  int iVar23;
  uint uVar24;
  ulong **ppuVar25;
  ulong uVar26;
  uint uVar27;
  undefined8 *puVar28;
  long lVar29;
  ulong *puVar30;
  uint uVar31;
  ulong uVar32;
  ulong uVar33;
  ulong *puVar34;
  uint uVar35;
  long in_FS_OFFSET;
  byte bVar36;
  undefined1 *puVar37;
  uint local_824;
  long local_818;
  ulong **local_800;
  uint local_7f8;
  ulong **local_7d0;
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
  
  bVar36 = 0;
  uVar1 = param_5 * 4;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar16 = RAND_bytes((uchar *)&local_568,param_5 << 6);
  local_818 = 0;
  if (iVar16 < 1) goto LAB_001015f2;
  bVar20 = (char)param_5 + 1;
  local_824 = param_4 >> (bVar20 & 0x1f);
  local_7f8 = (param_4 + local_824) - (local_824 << (bVar20 & 0x1f));
  if ((local_824 < local_7f8) && ((local_7f8 + 0x16 & 0x3f) < uVar1 - 1)) {
    local_824 = local_824 + 1;
    local_7f8 = local_7f8 + param_5 * -4 + 1;
  }
  local_7a8 = param_3;
  uStack_688 = CONCAT44(uStack_55c,uStack_560);
  local_6a8[0] = param_3;
  local_6a8[1] = (ulong *)(param_2 + 0x15);
  *(ulong *)(param_2 + 5) = local_568;
  *(undefined8 *)(param_2 + 0xd) = uStack_688;
  local_690 = local_568;
  uVar27 = local_7f8;
  if (local_824 <= local_7f8) {
    uVar27 = local_824;
  }
  uVar27 = uVar27 - 0x33;
  if ((int)uVar1 < 2) {
    local_568 = *(ulong *)(param_1 + 0x1fc);
    sha256_multi_block(&local_160,&local_728,0);
    if (0x83f < uVar27) goto LAB_00101180;
    sha256_multi_block(&local_160,&local_7a8,0);
    puVar30 = &local_568;
    for (lVar17 = 0x80; lVar17 != 0; lVar17 = lVar17 + -1) {
      *puVar30 = 0;
      puVar30 = puVar30 + (ulong)bVar36 * -2 + 1;
    }
LAB_001020d6:
    sha256_multi_block(&local_160,&local_728,0);
    puVar30 = &local_568;
    for (lVar17 = 0x80; lVar17 != 0; lVar17 = lVar17 + -1) {
      *puVar30 = 0;
      puVar30 = puVar30 + (ulong)bVar36 * -2 + 1;
    }
    sha256_multi_block(&local_160,&local_728,0);
    local_818 = 0;
  }
  else {
    puVar28 = &local_668;
    ppuVar25 = &local_7a8;
    puVar30 = &local_558;
    do {
      uVar32 = *puVar30;
      uVar33 = puVar30[1];
      uVar22 = (long)puVar28 - (long)local_6a8;
      ppuVar25[2] = (ulong *)((long)*ppuVar25 + (ulong)local_824);
      puVar28[-3] = (ulong *)((long)*ppuVar25 + (ulong)local_824);
      lVar17 = puVar28[-7] + (ulong)((local_824 + 0x30 & 0xfffffff0) + 0x15);
      puVar28[-2] = lVar17;
      *(ulong *)(lVar17 + -0x10) = uVar32;
      *(ulong *)(lVar17 + -8) = uVar33;
      if (uVar22 < 0x140) {
        uVar22 = 0x140;
      }
      puVar34 = puVar30 + 2;
      ppuVar25 = ppuVar25 + 2;
      lVar17 = __memcpy_chk(puVar28,puVar30,0x10,(long)local_6a8 + (uVar22 - (long)puVar28));
      puVar28 = (undefined8 *)(lVar17 + 0x28);
      puVar30 = puVar34;
    } while (puVar34 != &local_568 + (ulong)uVar1 * 2);
    local_568 = *(ulong *)(param_1 + 0x1fc);
    uVar35 = *(uint *)(param_1 + 0x1d4);
    uVar21 = *(uint *)(param_1 + 0x1f0);
    uVar24 = *(uint *)(param_1 + 0x1d8);
    bVar20 = *(byte *)(param_1 + 0x206);
    uVar31 = *(uint *)(param_1 + 0x1e4);
    uVar32 = local_568 >> 0x38;
    uVar33 = local_568 & 0xff000000000000;
    uVar22 = local_568 & 0xff0000000000;
    uVar9 = local_568 & 0xff00000000;
    uVar10 = local_568 & 0xff000000;
    uVar11 = local_568 & 0xff0000;
    uVar12 = local_568 & 0xff00;
    uVar13 = local_568 << 0x38;
    uVar4 = *(uint *)(param_1 + 0x1e8);
    uVar5 = *(uint *)(param_1 + 0x1dc);
    uVar6 = *(uint *)(param_1 + 0x1ec);
    uVar7 = *(uint *)(param_1 + 0x1e0);
    bVar2 = *(byte *)(param_1 + 0x205);
    bVar3 = *(byte *)(param_1 + 0x204);
    puVar18 = &local_160;
    puVar30 = &local_568;
    ppuVar25 = &local_7a8;
    lVar17 = 0;
    do {
      puVar18[0x10] = uVar5;
      uVar14 = local_7f8;
      if (uVar1 - 1 != (int)lVar17) {
        uVar14 = local_824;
      }
      puVar18[0x18] = uVar7;
      *puVar18 = uVar35;
      *(uchar *)((long)puVar30 + 0xc) = (uchar)uVar14;
      puVar18[8] = uVar24;
      puVar18[0x38] = uVar21;
      puVar18[0x20] = uVar31;
      puVar18[0x28] = uVar4;
      puVar18[0x30] = uVar6;
      uVar26 = (uVar32 | uVar33 >> 0x28 | uVar22 >> 0x18 | uVar9 >> 8 | uVar10 << 8 | uVar11 << 0x18
                | uVar12 << 0x28 | uVar13) + lVar17;
      *puVar30 = uVar26 >> 0x38 | (uVar26 & 0xff000000000000) >> 0x28 |
                 (uVar26 & 0xff0000000000) >> 0x18 | (uVar26 & 0xff00000000) >> 8 |
                 (uVar26 & 0xff000000) << 8 | (uVar26 & 0xff0000) << 0x18 |
                 (uVar26 & 0xff00) << 0x28 | uVar26 << 0x38;
      *(uint *)(puVar30 + 1) =
           ((uVar14 & 0xff00 | (uint)bVar20) << 8 | (uint)bVar2) << 8 | (uint)bVar3;
      puVar34 = *ppuVar25;
      uVar26 = puVar34[1];
      *(ulong *)((long)puVar30 + 0xd) = *puVar34;
      *(ulong *)((long)puVar30 + 0x15) = uVar26;
      uVar26 = puVar34[3];
      *(ulong *)((long)puVar30 + 0x1d) = puVar34[2];
      *(ulong *)((long)puVar30 + 0x25) = uVar26;
      uVar26 = puVar34[5];
      *(ulong *)((long)puVar30 + 0x2d) = puVar34[4];
      *(ulong *)((long)puVar30 + 0x35) = uVar26;
      uVar8 = *(undefined4 *)((long)puVar34 + 0x2f);
      *(uint *)(ppuVar25 + 1) = uVar14 - 0x33 >> 6;
      lVar29 = lVar17 + 1;
      *(undefined4 *)((long)puVar30 + 0x3c) = uVar8;
      (&local_728)[lVar17 * 2] = puVar30;
      puVar30 = puVar30 + 0x10;
      *ppuVar25 = (ulong *)((long)puVar34 + 0x33);
      local_720[lVar17 * 4] = 1;
      puVar18 = puVar18 + 1;
      ppuVar25 = ppuVar25 + 2;
      lVar17 = lVar29;
    } while ((uint)lVar29 < uVar1);
    sha256_multi_block(&local_160,&local_728,param_5);
    if (uVar27 < 0x840) {
      sha256_multi_block(&local_160,&local_7a8,param_5);
      iVar16 = 0;
      puVar30 = &local_568;
      for (lVar17 = 0x80; lVar17 != 0; lVar17 = lVar17 + -1) {
        *puVar30 = 0;
        puVar30 = puVar30 + (ulong)bVar36 * -2 + 1;
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
      if (uVar1 != 4) {
        local_6e0 = 0x20;
        local_5f8 = 0x80;
        local_6e8 = local_768;
        local_6d0 = 0x20;
        local_6d8 = local_758;
        local_5d0 = 0x80;
        local_6c8 = local_748;
        local_6c0 = 0x20;
        local_5a8 = 0x80;
        if (uVar1 == 8) {
          local_6b0 = 0x20;
          local_580 = 0x80;
          local_6b8 = local_738;
        }
      }
LAB_00101180:
      local_7d0 = local_6a8;
      local_800 = &local_7a8;
      uVar35 = uVar27 >> 6;
      do {
        sha256_multi_block(&local_160,&local_728,param_5);
        aesni_multi_cbc_encrypt(local_7d0,param_1,param_5);
        if (param_5 != 0) {
          local_7a0[0] = local_7a0[0] + -0x20;
          local_790 = local_790 + -0x20;
          local_7a8 = local_7a8 + 0x100;
          local_720[0] = 0x20;
          local_6a8[0] = (ulong *)((long)local_6a8[0] + __LC0);
          puVar37 = (undefined1 *)((long)local_6a8[1] + _UNK_001029d8);
          local_690 = *(ulong *)((long)local_6a8[1] + 0x7f0);
          uStack_688 = *(undefined8 *)((long)local_6a8[1] + 0x7f8);
          local_698 = 0x80;
          local_798 = (ulong *)((long)local_798 + 0x800);
          local_680 = local_680 + __LC0;
          lVar17 = lStack_678 + _UNK_001029d8;
          local_710 = 0x20;
          local_668 = *(undefined8 *)(lStack_678 + 0x7f0);
          uStack_660 = *(undefined8 *)(lStack_678 + 0x7f8);
          local_670 = 0x80;
          local_728 = local_7a8;
          local_718 = (uint *)local_798;
          local_6a8[1] = (ulong *)puVar37;
          lStack_678 = lVar17;
          if (2 < (int)uVar1) {
            local_780 = local_780 + -0x20;
            local_770 = local_770 + -0x20;
            local_788 = local_788 + 0x200;
            local_700 = 0x20;
            local_658 = local_658 + __LC0;
            lVar17 = lStack_650 + _UNK_001029d8;
            local_640 = *(undefined8 *)(lStack_650 + 0x7f0);
            uStack_638 = *(undefined8 *)(lStack_650 + 0x7f8);
            local_648 = 0x80;
            local_778 = local_778 + 0x200;
            local_630 = local_630 + __LC0;
            lVar29 = lStack_628 + _UNK_001029d8;
            local_6f0 = 0x20;
            local_618 = *(undefined8 *)(lStack_628 + 0x7f0);
            uStack_610 = *(undefined8 *)(lStack_628 + 0x7f8);
            local_620 = 0x80;
            local_708 = local_788;
            local_6f8 = local_778;
            lStack_650 = lVar17;
            lStack_628 = lVar29;
            if (uVar1 != 4) {
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
              lStack_600 = lStack_600 + _UNK_001029d8;
              lStack_5d8 = lStack_5d8 + _UNK_001029d8;
              lStack_5b0 = lStack_5b0 + _UNK_001029d8;
              lStack_588 = lStack_588 + _UNK_001029d8;
            }
          }
        }
        uVar35 = uVar35 - 0x20;
      } while (0x20 < uVar35);
      iVar16 = (((uVar27 >> 6) - 0x21 >> 5) + 1) * 0x800;
      sha256_multi_block(&local_160,local_800,param_5);
      puVar30 = &local_568;
      for (lVar17 = 0x80; lVar17 != 0; lVar17 = lVar17 + -1) {
        *puVar30 = 0;
        puVar30 = puVar30 + (ulong)bVar36 * -2 + 1;
      }
      if (param_5 == 0) goto LAB_001020d6;
    }
    local_7d0 = local_6a8;
    lVar17 = 0;
    uVar35 = 0;
    puVar30 = &local_568;
    uVar27 = local_824;
    while( true ) {
      uVar21 = uVar27 + (-0x33 - iVar16) + *(int *)((long)local_7a0 + lVar17) * -0x40;
      lVar29 = __memcpy_chk(puVar30,(ulong)(uint)(*(int *)((long)local_7a0 + lVar17) * 0x40) +
                                    *(long *)((long)local_7a0 + lVar17 + -8),(ulong)uVar21,
                            lVar17 * -8 + 0x400);
      *(undefined1 *)((long)&local_568 + (ulong)uVar21 + (ulong)uVar35 * 0x80) = 0x80;
      uVar27 = uVar27 * 8 + 0x268;
      uVar27 = uVar27 >> 0x18 | (uVar27 & 0xff0000) >> 8 | (uVar27 & 0xff00) << 8 |
               uVar27 * 0x1000000;
      if (uVar21 < 0x38) {
        *(uint *)(lVar29 + 0x3c) = uVar27;
        *(undefined4 *)((long)local_720 + lVar17) = 1;
        *(long *)((long)&local_728 + lVar17) = lVar29;
      }
      else {
        *(uint *)(lVar29 + 0x7c) = uVar27;
        *(undefined4 *)((long)local_720 + lVar17) = 2;
        *(long *)((long)&local_728 + lVar17) = lVar29;
      }
      if (uVar35 + 1 == uVar1) break;
      uVar35 = uVar35 + 1;
      puVar30 = (ulong *)(lVar29 + 0x80);
      lVar17 = lVar17 + 0x10;
      uVar27 = local_824;
      if (uVar35 == uVar1 - 1) {
        uVar27 = local_7f8;
      }
    }
    sha256_multi_block(&local_160,&local_728,param_5);
    uVar27 = *(uint *)(param_1 + 0x164);
    uVar35 = *(uint *)(param_1 + 0x16c);
    puVar30 = &local_568;
    for (lVar17 = 0x80; lVar17 != 0; lVar17 = lVar17 + -1) {
      *puVar30 = 0;
      puVar30 = puVar30 + (ulong)bVar36 * -2 + 1;
    }
    uVar21 = *(uint *)(param_1 + 0x170);
    uVar24 = *(uint *)(param_1 + 0x168);
    uVar31 = *(uint *)(param_1 + 0x174);
    uVar4 = *(uint *)(param_1 + 0x178);
    uVar5 = *(uint *)(param_1 + 0x17c);
    uVar6 = *(uint *)(param_1 + 0x180);
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
    if (2 < (int)uVar1) {
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
      local_158 = uVar27;
      local_154 = uVar27;
      local_138 = uVar24;
      local_134 = uVar24;
      local_118 = uVar35;
      local_114 = uVar35;
      local_f8 = uVar21;
      local_f4 = uVar21;
      local_d8 = uVar31;
      local_d4 = uVar31;
      local_b8 = uVar4;
      local_b4 = uVar4;
      local_98 = uVar5;
      local_94 = uVar5;
      local_78 = uVar6;
      local_74 = uVar6;
      if (uVar1 == 4) {
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
        local_150 = uVar27;
        local_14c = uVar27;
        local_148 = uVar27;
        local_130 = uVar24;
        local_12c = uVar24;
        local_128 = uVar24;
        local_110 = uVar35;
        local_10c = uVar35;
        local_108 = uVar35;
        local_f0 = uVar21;
        local_ec = uVar21;
        local_e8 = uVar21;
        local_d0 = uVar31;
        local_cc = uVar31;
        local_c8 = uVar31;
        local_b0 = uVar4;
        local_ac = uVar4;
        local_a8 = uVar4;
        local_90 = uVar5;
        local_8c = uVar5;
        local_88 = uVar5;
        local_70 = uVar6;
        local_6c = uVar6;
        local_68 = uVar6;
        if (uVar1 == 8) {
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
          local_144 = uVar27;
          local_124 = uVar24;
          local_104 = uVar35;
          local_e4 = uVar21;
          local_c4 = uVar31;
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
    local_728 = &local_568;
    local_160 = uVar27;
    local_15c = uVar27;
    local_140 = uVar24;
    local_13c = uVar24;
    local_120 = uVar35;
    local_11c = uVar35;
    local_100 = uVar21;
    local_fc = uVar21;
    local_e0 = uVar31;
    local_dc = uVar31;
    local_c0 = uVar4;
    local_bc = uVar4;
    local_a0 = uVar5;
    local_9c = uVar5;
    local_80 = uVar6;
    local_7c = uVar6;
    sha256_multi_block(&local_160,&local_728,param_5);
    local_818 = 0;
    uVar35 = 0;
    puVar18 = &local_160;
    uVar27 = local_824;
    while( true ) {
      memcpy(local_7d0[1],*local_7d0,(ulong)(uVar27 - iVar16));
      uVar21 = *puVar18;
      *local_7d0 = local_7d0[1];
      puVar19 = (uint *)(param_2 + (uVar27 + 0x15));
      *puVar19 = uVar21 >> 0x18 | (uVar21 & 0xff0000) >> 8 | (uVar21 & 0xff00) << 8 | uVar21 << 0x18
      ;
      uVar21 = puVar18[8];
      puVar19[1] = uVar21 >> 0x18 | (uVar21 & 0xff0000) >> 8 | (uVar21 & 0xff00) << 8 |
                   uVar21 << 0x18;
      uVar21 = puVar18[0x10];
      puVar19[2] = uVar21 >> 0x18 | (uVar21 & 0xff0000) >> 8 | (uVar21 & 0xff00) << 8 |
                   uVar21 << 0x18;
      uVar21 = puVar18[0x18];
      puVar19[3] = uVar21 >> 0x18 | (uVar21 & 0xff0000) >> 8 | (uVar21 & 0xff00) << 8 |
                   uVar21 << 0x18;
      uVar21 = puVar18[0x20];
      puVar19[4] = uVar21 >> 0x18 | (uVar21 & 0xff0000) >> 8 | (uVar21 & 0xff00) << 8 |
                   uVar21 << 0x18;
      uVar21 = puVar18[0x28];
      puVar19[5] = uVar21 >> 0x18 | (uVar21 & 0xff0000) >> 8 | (uVar21 & 0xff00) << 8 |
                   uVar21 << 0x18;
      uVar21 = puVar18[0x30];
      puVar19[6] = uVar21 >> 0x18 | (uVar21 & 0xff0000) >> 8 | (uVar21 & 0xff00) << 8 |
                   uVar21 << 0x18;
      uVar21 = puVar18[0x38];
      puVar19[7] = uVar21 >> 0x18 | (uVar21 & 0xff0000) >> 8 | (uVar21 & 0xff00) << 8 |
                   uVar21 << 0x18;
      uVar24 = ~(uVar27 + 0x20) & 0xf;
      uVar21 = uVar24 + 1;
      uVar32 = (ulong)uVar21;
      lVar17 = (ulong)uVar24 * 0x101010101010101;
      if (uVar21 < 8) {
        if ((uVar21 & 4) == 0) {
          if ((uVar21 != 0) && (*(char *)(puVar19 + 8) = (char)lVar17, (uVar21 & 2) != 0)) {
            *(short *)((long)puVar19 + uVar32 + 0x1e) = (short)lVar17;
          }
        }
        else {
          puVar19[8] = (uint)lVar17;
          *(uint *)((long)puVar19 + uVar32 + 0x1c) = (uint)lVar17;
        }
      }
      else {
        *(long *)(puVar19 + 8) = lVar17;
        *(long *)((long)puVar19 + uVar32 + 0x18) = lVar17;
        uVar21 = uVar21 + ((int)(puVar19 + 8) - (int)((ulong)(puVar19 + 10) & 0xfffffffffffffff8)) &
                 0xfffffff8;
        if (7 < uVar21) {
          uVar31 = 0;
          do {
            uVar33 = (ulong)uVar31;
            uVar31 = uVar31 + 8;
            *(long *)(((ulong)(puVar19 + 10) & 0xfffffffffffffff8) + uVar33) = lVar17;
          } while (uVar31 < uVar21);
        }
      }
      iVar23 = uVar24 + uVar27 + 0x20;
      puVar37 = (undefined1 *)(uVar32 + (long)(puVar19 + 8));
      uVar35 = uVar35 + 1;
      ppuVar25 = local_7d0 + 5;
      puVar18 = puVar18 + 1;
      *(uint *)(local_7d0 + 2) = (uint)((1 - iVar16) + iVar23) >> 4;
      *param_2 = *(undefined1 *)(param_1 + 0x204);
      param_2[1] = *(undefined1 *)(param_1 + 0x205);
      param_2[2] = *(undefined1 *)(param_1 + 0x206);
      uVar15 = (short)iVar23 + 0x11;
      *(ushort *)(param_2 + 3) = uVar15 * 0x100 | uVar15 >> 8;
      local_818 = local_818 + (ulong)(iVar23 + 0x16);
      if (uVar1 == uVar35) break;
      local_7d0 = ppuVar25;
      param_2 = puVar37;
      uVar27 = local_7f8;
      if (uVar35 != uVar1 - 1) {
        uVar27 = local_824;
      }
    }
  }
  local_7d0 = local_6a8;
  aesni_multi_cbc_encrypt(local_7d0,param_1,param_5);
  OPENSSL_cleanse(&local_568,0x400);
  OPENSSL_cleanse(&local_160,0x100);
LAB_001015f2:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_818;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
  ushort uVar8;
  uint uVar9;
  byte bVar10;
  long in_FS_OFFSET;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar6 = EVP_CIPHER_CTX_get_cipher_data();
  switch(param_2) {
  case 0x16:
    if (param_3 == 0xd) {
      uVar8 = *(ushort *)((long)param_4 + 0xb) << 8 | *(ushort *)((long)param_4 + 0xb) >> 8;
      uVar9 = (uint)uVar8;
      iVar4 = EVP_CIPHER_CTX_is_encrypting(param_1);
      if (iVar4 == 0) {
        *(undefined8 *)(lVar6 + 0x250) = *param_4;
        uVar2 = *(undefined8 *)((long)param_4 + 5);
        *(undefined8 *)(lVar6 + 0x248) = 0xd;
        *(undefined8 *)(lVar6 + 0x255) = uVar2;
        uVar7 = 0x20;
        goto LAB_00102220;
      }
      *(ulong *)(lVar6 + 0x248) = (ulong)uVar8;
      uVar3 = *(ushort *)((long)param_4 + 9) << 8 | *(ushort *)((long)param_4 + 9) >> 8;
      *(uint *)(lVar6 + 0x250) = (uint)uVar3;
      if (0x301 < uVar3) {
        if (uVar8 < 0x10) {
LAB_00102520:
          uVar7 = 0;
          goto LAB_00102220;
        }
        uVar9 = uVar8 - 0x10;
        *(ushort *)((long)param_4 + 0xb) = (ushort)uVar9 << 8 | (ushort)uVar9 >> 8;
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
      uVar7 = (ulong)((uVar9 + 0x30 & 0xfffffff0) - uVar9);
      goto LAB_00102220;
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
      local_78._0_8_ = local_78._0_8_ ^ __LC1;
      local_78._8_8_ = local_78._8_8_ ^ _UNK_001029e8;
      local_68._0_8_ = local_68._0_8_ ^ __LC1;
      local_68._8_8_ = local_68._8_8_ ^ _UNK_001029e8;
      local_58._0_8_ = local_58._0_8_ ^ __LC1;
      local_58._8_8_ = local_58._8_8_ ^ _UNK_001029e8;
      local_48._0_8_ = __LC1 ^ local_48._0_8_;
      local_48._8_8_ = _UNK_001029e8 ^ local_48._8_8_;
      SHA256_Init((SHA256_CTX *)(lVar6 + 0xf4));
      sha256_update((SHA256_CTX *)(lVar6 + 0xf4),local_78,0x40);
      local_78._8_8_ = local_78._8_8_ ^ _UNK_001029f8;
      local_78._0_8_ = local_78._0_8_ ^ __LC2;
      local_68._8_8_ = local_68._8_8_ ^ _UNK_001029f8;
      local_68._0_8_ = local_68._0_8_ ^ __LC2;
      local_58._8_8_ = local_58._8_8_ ^ _UNK_001029f8;
      local_58._0_8_ = local_58._0_8_ ^ __LC2;
      local_48._8_8_ = _UNK_001029f8 ^ local_48._8_8_;
      local_48._0_8_ = __LC2 ^ local_48._0_8_;
      SHA256_Init((SHA256_CTX *)(lVar6 + 0x164));
      sha256_update((SHA256_CTX *)(lVar6 + 0x164),local_78,0x40);
      OPENSSL_cleanse(local_78,0x40);
      uVar7 = 1;
    }
    goto LAB_00102220;
  case 0x19:
    if (0x1f < (int)param_3) {
      uVar8 = *(ushort *)(param_4[1] + 0xb) << 8 | *(ushort *)(param_4[1] + 0xb) >> 8;
      uVar9 = (uint)uVar8;
      iVar4 = EVP_CIPHER_CTX_is_encrypting(param_1);
      if ((iVar4 != 0) &&
         (lVar1 = param_4[1], uVar3 = *(ushort *)(lVar1 + 9),
         0x301 < (ushort)(uVar3 << 8 | uVar3 >> 8))) {
        if (uVar8 == 0) {
          uVar5 = *(uint *)(param_4 + 3) >> 2;
          if (7 < *(uint *)(param_4 + 3) - 4) break;
          uVar9 = *(uint *)(param_4 + 2);
          bVar10 = (char)uVar5 + 1;
          iVar4 = uVar5 << 2;
        }
        else {
          if (uVar8 < 0x1000) goto LAB_00102520;
          if (uVar8 < 0x2000) {
            iVar4 = 4;
            bVar10 = 2;
          }
          else {
            iVar4 = (-(uint)((_memcpy & 0x20) == 0) & 0xfffffffc) + 8;
            bVar10 = 3 - ((_memcpy & 0x20) == 0);
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
        uVar5 = uVar9 >> (bVar10 & 0x1f);
        uVar9 = (uVar9 + uVar5) - (uVar5 << (bVar10 & 0x1f));
        if ((uVar5 < uVar9) && ((uVar9 + 0x16 & 0x3f) < iVar4 - 1U)) {
          uVar5 = uVar5 + 1;
          uVar9 = (uVar9 - iVar4) + 1;
        }
        *(int *)(param_4 + 3) = iVar4;
        iVar4 = (uVar5 + 0x30 & 0xfffffff0) + 0x15;
        uVar7 = (ulong)(((uVar9 + 0x30 & 0xfffffff0) + 0x15 + (iVar4 << (bVar10 & 0x1f))) - iVar4);
        goto LAB_00102220;
      }
    }
    break;
  case 0x1a:
    uVar7 = tls1_1_multi_block_encrypt
                      (lVar6,*param_4,param_4[1],param_4[2],*(uint *)(param_4 + 3) >> 2);
    goto LAB_00102220;
  case 0x1c:
    uVar7 = (ulong)((param_3 + 0x30 & 0xfffffff0) + 0x15);
    goto LAB_00102220;
  }
  uVar7 = 0xffffffff;
LAB_00102220:
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


