
undefined8 chacha_poly1305_tls_init(long param_1,undefined8 *param_2,long param_3)

{
  ulong uVar1;
  ushort uVar2;
  
  if (param_3 != 0xd) {
    return 0;
  }
  *(undefined8 *)(param_1 + 0x30c) = *param_2;
  *(undefined8 *)(param_1 + 0x311) = *(undefined8 *)((long)param_2 + 5);
  uVar2 = *(ushort *)((long)param_2 + 0xb) << 8 | *(ushort *)((long)param_2 + 0xb) >> 8;
  uVar1 = (ulong)uVar2;
  if ((*(byte *)(param_1 + 0x6c) & 2) == 0) {
    if (uVar2 < 0x10) {
      return 0;
    }
    uVar1 = (ulong)(uVar2 - 0x10);
    uVar2 = (ushort)(uVar2 - 0x10);
    *(ushort *)(param_1 + 0x317) = uVar2 << 8 | uVar2 >> 8;
  }
  *(ulong *)(param_1 + 0x340) = uVar1;
  *(byte *)(param_1 + 0x330) = *(byte *)(param_1 + 0x330) & 0xfd;
  *(uint *)(param_1 + 0x1ac) = *(uint *)(param_1 + 0x2f8) ^ *(uint *)(param_1 + 0x310);
  *(ulong *)(param_1 + 0x1a4) =
       CONCAT44(*(uint *)(param_1 + 0x2f4) ^ *(uint *)(param_1 + 0x30c),
                *(undefined4 *)(param_1 + 0x2f0));
  return 0x10;
}



undefined8
chacha20_poly1305_aead_cipher
          (long param_1,undefined8 *param_2,ulong *param_3,void *param_4,ulong param_5)

{
  long lVar1;
  byte *pbVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  ulong uVar8;
  byte *pbVar9;
  byte bVar10;
  long lVar11;
  uint uVar12;
  undefined1 *puVar13;
  byte *pbVar14;
  ulong uVar15;
  long in_FS_OFFSET;
  undefined1 *local_100;
  size_t local_f8;
  undefined1 local_e8 [48];
  undefined8 local_b8;
  undefined8 uStack_b0;
  byte local_a8 [104];
  long local_40;
  
  lVar1 = param_1 + 0x1f8;
  uVar15 = *(ulong *)(param_1 + 0x340);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar7 = 0;
  if ((*(byte *)(param_1 + 0x330) & 2) == 0) {
    if ((uVar15 != 0xffffffffffffffff) && (param_2 != (undefined8 *)0x0)) {
      if (uVar15 + 0x10 != param_5) goto LAB_0010010c;
      *(undefined4 *)(param_1 + 0x1a0) = 0;
      if (uVar15 < 0x41) {
        ChaCha20_ctr32(local_e8,zero,0x80,param_1 + 0x180,param_1 + 0x1a0);
        Poly1305_Init(lVar1,local_e8);
        *(ulong *)(param_1 + 0x328) = uVar15;
        uVar8 = 0;
        local_b8 = *(undefined8 *)(param_1 + 0x30c);
        uStack_b0 = *(undefined8 *)(param_1 + 0x314);
        *(undefined4 *)(param_1 + 0x1f0) = 0;
        *(undefined8 *)(param_1 + 800) = 0xd;
        if ((*(byte *)(param_1 + 0x6c) & 2) == 0) {
          pbVar9 = local_a8;
          lVar11 = 0x20;
          pbVar14 = pbVar9;
          if (uVar15 != 0) {
            do {
              bVar10 = *(byte *)((long)param_4 + uVar8);
              bVar3 = pbVar9[uVar8];
              pbVar9[uVar8] = bVar10;
              *(byte *)((long)param_2 + uVar8) = bVar3 ^ bVar10;
              uVar8 = uVar8 + 1;
            } while (uVar15 != uVar8);
LAB_0010064e:
            param_4 = (void *)((long)param_4 + uVar15);
            param_2 = (undefined8 *)((long)param_2 + uVar15);
            uVar8 = (ulong)(-(int)uVar15 & 0xf);
            pbVar9 = local_a8 + uVar15 + uVar8;
            lVar11 = uVar15 + uVar8 + 0x20;
            pbVar14 = local_a8 + uVar15;
          }
        }
        else {
          if (uVar15 != 0) {
            do {
              pbVar9 = local_a8 + uVar8;
              bVar10 = *pbVar9 ^ *(byte *)((long)param_4 + uVar8);
              *(byte *)((long)param_2 + uVar8) = bVar10;
              uVar8 = uVar8 + 1;
              *pbVar9 = bVar10;
            } while (uVar15 != uVar8);
            goto LAB_0010064e;
          }
          pbVar9 = local_a8;
          lVar11 = 0x20;
          pbVar14 = pbVar9;
        }
        uVar12 = (uint)uVar8;
        if (uVar12 < 8) {
          if ((uVar8 & 4) == 0) {
            if ((uVar12 != 0) && (*pbVar14 = 0, (uVar8 & 2) != 0)) {
              (pbVar14 + (uVar8 - 2))[0] = 0;
              (pbVar14 + (uVar8 - 2))[1] = 0;
            }
          }
          else {
            pbVar14[0] = 0;
            pbVar14[1] = 0;
            pbVar14[2] = 0;
            pbVar14[3] = 0;
            pbVar14 = pbVar14 + (uVar8 - 4);
            pbVar14[0] = 0;
            pbVar14[1] = 0;
            pbVar14[2] = 0;
            pbVar14[3] = 0;
          }
        }
        else {
          pbVar14[0] = 0;
          pbVar14[1] = 0;
          pbVar14[2] = 0;
          pbVar14[3] = 0;
          pbVar14[4] = 0;
          pbVar14[5] = 0;
          pbVar14[6] = 0;
          pbVar14[7] = 0;
          pbVar2 = pbVar14 + (uVar8 - 8);
          pbVar2[0] = 0;
          pbVar2[1] = 0;
          pbVar2[2] = 0;
          pbVar2[3] = 0;
          pbVar2[4] = 0;
          pbVar2[5] = 0;
          pbVar2[6] = 0;
          pbVar2[7] = 0;
          uVar12 = uVar12 + ((int)pbVar14 - (int)((ulong)(pbVar14 + 8) & 0xfffffffffffffff8)) &
                   0xfffffff8;
          if (7 < uVar12) {
            uVar6 = 0;
            do {
              uVar15 = (ulong)uVar6;
              uVar6 = uVar6 + 8;
              *(undefined8 *)(((ulong)(pbVar14 + 8) & 0xfffffffffffffff8) + uVar15) = 0;
            } while (uVar6 < uVar12);
          }
        }
        local_f8 = 0x80;
        pbVar14 = (byte *)&local_b8;
      }
      else {
        ChaCha20_ctr32(local_e8,zero,0x40);
        Poly1305_Init(lVar1,local_e8);
        *(undefined4 *)(param_1 + 0x1a0) = 1;
        *(undefined4 *)(param_1 + 0x1f0) = 0;
        Poly1305_Update(lVar1,param_1 + 0x30c,0x10);
        *(undefined8 *)(param_1 + 800) = 0xd;
        *(ulong *)(param_1 + 0x328) = uVar15;
        if ((*(byte *)(param_1 + 0x6c) & 2) == 0) {
          Poly1305_Update(lVar1,param_4,uVar15);
          ChaCha20_ctr32(param_2,param_4,uVar15,param_1 + 0x180,param_1 + 0x1a0);
        }
        else {
          ChaCha20_ctr32(param_2,param_4,uVar15,param_1 + 0x180);
          Poly1305_Update(lVar1,param_2,uVar15);
        }
        param_4 = (void *)((long)param_4 + uVar15);
        param_2 = (undefined8 *)((long)param_2 + uVar15);
        Poly1305_Update(lVar1,zero,-(int)uVar15 & 0xf);
        pbVar9 = local_a8;
        lVar11 = 0x10;
        local_f8 = 0x40;
        pbVar14 = pbVar9;
      }
      local_100 = local_e8;
      uVar7 = *(undefined8 *)(param_1 + 0x328);
      *(undefined8 *)pbVar9 = *(undefined8 *)(param_1 + 800);
      *(undefined8 *)(pbVar9 + 8) = uVar7;
      Poly1305_Update(lVar1,pbVar14,lVar11);
      OPENSSL_cleanse(local_100,local_f8);
      pbVar9 = (byte *)(param_1 + 0x2fc);
      if ((*(byte *)(param_1 + 0x6c) & 2) == 0) {
        pbVar9 = pbVar14;
      }
      Poly1305_Final(lVar1,pbVar9);
      *(undefined8 *)(param_1 + 0x340) = 0xffffffffffffffff;
      if ((*(byte *)(param_1 + 0x6c) & 2) == 0) {
        iVar5 = CRYPTO_memcmp(pbVar14,param_4,0x10);
        if (iVar5 != 0) {
          if (param_5 < 0x11) {
            uVar7 = 0;
          }
          else {
            memset((void *)((long)param_2 + (0x10 - param_5)),0,param_5 - 0x10);
            uVar7 = 0;
          }
          goto LAB_0010010c;
        }
        param_5 = param_5 - 0x10;
      }
      else {
        uVar7 = *(undefined8 *)(param_1 + 0x304);
        *param_2 = *(undefined8 *)(param_1 + 0x2fc);
        param_2[1] = uVar7;
      }
      *param_3 = param_5;
      uVar7 = 1;
      goto LAB_0010010c;
    }
    *(undefined4 *)(param_1 + 0x1a0) = 0;
    ChaCha20_ctr32(param_1 + 0x1b0,zero,0x40,param_1 + 0x180,param_1 + 0x1a0);
    Poly1305_Init(lVar1,param_1 + 0x1b0);
    *(byte *)(param_1 + 0x330) = *(byte *)(param_1 + 0x330) | 2;
    *(undefined4 *)(param_1 + 0x1a0) = 1;
    *(undefined4 *)(param_1 + 0x1f0) = 0;
    *(undefined1 (*) [16])(param_1 + 800) = (undefined1  [16])0x0;
    if (uVar15 != 0xffffffffffffffff) {
      Poly1305_Update(lVar1,param_1 + 0x30c,0xd);
      *(byte *)(param_1 + 0x330) = *(byte *)(param_1 + 0x330) | 1;
      *(undefined8 *)(param_1 + 800) = 0xd;
    }
  }
  if (param_4 == (void *)0x0) {
    bVar4 = false;
    param_4 = (void *)0x0;
LAB_0010029d:
    if ((*(byte *)(param_1 + 0x330) & 1) != 0) {
      if ((*(ulong *)(param_1 + 800) & 0xf) != 0) {
        Poly1305_Update(lVar1,zero,0x10 - (ulong)((uint)*(ulong *)(param_1 + 800) & 0xf));
      }
      *(byte *)(param_1 + 0x330) = *(byte *)(param_1 + 0x330) & 0xfe;
    }
    if ((*(ulong *)(param_1 + 0x328) & 0xf) != 0) {
      Poly1305_Update(lVar1,zero,0x10 - (ulong)((uint)*(ulong *)(param_1 + 0x328) & 0xf));
    }
    Poly1305_Update(lVar1,param_1 + 800,0x10);
    puVar13 = (undefined1 *)(param_1 + 0x2fc);
    if ((*(byte *)(param_1 + 0x6c) & 2) == 0) {
      puVar13 = local_e8;
    }
    Poly1305_Final(lVar1,puVar13);
    *(byte *)(param_1 + 0x330) = *(byte *)(param_1 + 0x330) & 0xfd;
    if (bVar4) {
      if ((*(byte *)(param_1 + 0x6c) & 2) == 0) {
        param_5 = param_5 - 0x10;
        iVar5 = CRYPTO_memcmp(local_e8,param_4,0x10);
        if (iVar5 != 0) {
          memset((void *)((long)param_2 - uVar15),0,uVar15);
          goto LAB_00100227;
        }
      }
      else {
        uVar7 = *(undefined8 *)(param_1 + 0x304);
        *param_2 = *(undefined8 *)(param_1 + 0x2fc);
        param_2[1] = uVar7;
      }
      goto LAB_00100340;
    }
    if (((*(byte *)(param_1 + 0x6c) & 2) != 0) ||
       (iVar5 = CRYPTO_memcmp(local_e8,(undefined1 *)(param_1 + 0x2fc),*(size_t *)(param_1 + 0x338))
       , iVar5 == 0)) goto LAB_00100340;
LAB_00100227:
    uVar7 = 0;
    param_5 = 0;
  }
  else {
    if (param_2 == (undefined8 *)0x0) {
      Poly1305_Update(lVar1,param_4,param_5);
      *(long *)(param_1 + 800) = *(long *)(param_1 + 800) + param_5;
      *(byte *)(param_1 + 0x330) = *(byte *)(param_1 + 0x330) | 1;
    }
    else {
      if ((*(byte *)(param_1 + 0x330) & 1) != 0) {
        if ((*(ulong *)(param_1 + 800) & 0xf) != 0) {
          Poly1305_Update(lVar1,zero,0x10 - (ulong)((uint)*(ulong *)(param_1 + 800) & 0xf));
        }
        *(byte *)(param_1 + 0x330) = *(byte *)(param_1 + 0x330) & 0xfe;
      }
      *(undefined8 *)(param_1 + 0x340) = 0xffffffffffffffff;
      uVar8 = param_5;
      if ((uVar15 != 0xffffffffffffffff) && (uVar8 = uVar15, uVar15 + 0x10 != param_5))
      goto LAB_00100227;
      if ((*(byte *)(param_1 + 0x6c) & 2) == 0) {
        Poly1305_Update(lVar1,param_4,uVar8);
        (**(code **)(*(long *)(param_1 + 0x168) + 8))(param_1 + 0xc0,param_2,param_4,uVar8);
        lVar11 = *(long *)(param_1 + 0x328);
      }
      else {
        (**(code **)(*(long *)(param_1 + 0x168) + 8))(param_1 + 0xc0,param_2,param_4,uVar8);
        Poly1305_Update(lVar1,param_2,uVar8);
        lVar11 = *(long *)(param_1 + 0x328);
      }
      *(ulong *)(param_1 + 0x328) = lVar11 + uVar8;
      if (uVar8 != param_5) {
        bVar4 = true;
        param_4 = (void *)((long)param_4 + uVar8);
        param_2 = (undefined8 *)((long)param_2 + uVar8);
        uVar15 = uVar8;
        goto LAB_0010029d;
      }
    }
LAB_00100340:
    uVar7 = 1;
  }
  *param_3 = param_5;
LAB_0010010c:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool chacha_poly1305_tls_iv_set_fixed(long param_1,undefined4 *param_2,long param_3)

{
  undefined4 uVar1;
  
  if (param_3 == 0xc) {
    uVar1 = *param_2;
    *(undefined4 *)(param_1 + 0x1a4) = uVar1;
    *(undefined4 *)(param_1 + 0x2f0) = uVar1;
    uVar1 = param_2[1];
    *(undefined4 *)(param_1 + 0x1a8) = uVar1;
    *(undefined4 *)(param_1 + 0x2f4) = uVar1;
    uVar1 = param_2[2];
    *(undefined4 *)(param_1 + 0x1ac) = uVar1;
    *(undefined4 *)(param_1 + 0x2f8) = uVar1;
  }
  return param_3 == 0xc;
}



void chacha20_poly1305_initiv(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined1 local_28 [16];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  *(byte *)(param_1 + 0x66) = *(byte *)(param_1 + 0x66) & 0xfc;
  *(undefined1 (*) [16])(param_1 + 100) = (undefined1  [16])0x0;
  param_1[0x68] = 0xffffffffffffffff;
  local_28._8_4_ = *(undefined4 *)(param_1 + 1);
  local_28._0_8_ = *param_1;
  local_28._12_4_ = 0;
  local_28 = local_28 << 0x20;
  if ((*(byte *)((long)param_1 + 0x6c) & 2) == 0) {
    ossl_chacha20_dinit(param_1 + 0x18,0,0,local_28,0x10,0);
  }
  else {
    ossl_chacha20_einit();
  }
  *(byte *)((long)param_1 + 0x6c) = *(byte *)((long)param_1 + 0x6c) | 4;
  param_1[0x5e] = *(undefined8 *)((long)param_1 + 0x1a4);
  *(undefined4 *)(param_1 + 0x5f) = *(undefined4 *)((long)param_1 + 0x1ac);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void chacha20_poly1305_initkey(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(byte *)(param_1 + 0x330) = *(byte *)(param_1 + 0x330) & 0xfc;
  *(undefined8 *)(param_1 + 0x340) = 0xffffffffffffffff;
  *(undefined1 (*) [16])(param_1 + 800) = (undefined1  [16])0x0;
  if ((*(byte *)(param_1 + 0x6c) & 2) != 0) {
    ossl_chacha20_einit(param_1 + 0xc0,param_2,param_3,0,0,0);
    return;
  }
  ossl_chacha20_dinit(param_1 + 0xc0,param_2,param_3,0,0,0);
  return;
}



undefined1 * ossl_prov_cipher_hw_chacha20_poly1305(void)

{
  return chacha20poly1305_hw;
}


