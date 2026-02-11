
undefined8 chacha_init_key(long param_1,long param_2,long param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  
  lVar5 = *(long *)(param_1 + 0x78);
  if (param_2 != 0) {
    uVar7 = 0;
    do {
      pbVar2 = (byte *)(param_2 + 1 + uVar7);
      pbVar3 = (byte *)(param_2 + 2 + uVar7);
      uVar6 = uVar7 >> 2;
      pbVar1 = (byte *)(param_2 + uVar7);
      pbVar4 = (byte *)(param_2 + 3 + uVar7);
      uVar7 = uVar7 + 4;
      *(uint *)(lVar5 + (uVar6 & 0x3fffffff) * 4) =
           (uint)*pbVar2 << 8 | (uint)*pbVar3 << 0x10 | (uint)*pbVar1 | (uint)*pbVar4 << 0x18;
    } while (uVar7 != 0x20);
  }
  if (param_3 != 0) {
    uVar7 = 0;
    do {
      pbVar2 = (byte *)(param_3 + 1 + uVar7);
      pbVar3 = (byte *)(param_3 + 2 + uVar7);
      uVar6 = uVar7 >> 2;
      pbVar1 = (byte *)(param_3 + uVar7);
      pbVar4 = (byte *)(param_3 + 3 + uVar7);
      uVar7 = uVar7 + 4;
      *(uint *)(lVar5 + 0x20 + (uVar6 & 0x3fffffff) * 4) =
           (uint)*pbVar2 << 8 | (uint)*pbVar3 << 0x10 | (uint)*pbVar1 | (uint)*pbVar4 << 0x18;
    } while (uVar7 != 0x10);
  }
  *(undefined4 *)(lVar5 + 0x70) = 0;
  return 1;
}



undefined8 chacha_cipher(long param_1,byte *param_2,byte *param_3,ulong param_4)

{
  byte bVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  byte *pbVar8;
  ulong uVar9;
  
  lVar2 = *(long *)(param_1 + 0x78);
  uVar3 = *(uint *)(lVar2 + 0x70);
  if (uVar3 == 0) {
    uVar7 = (ulong)*(uint *)(lVar2 + 0x20);
  }
  else {
    if (param_4 != 0) {
      do {
        if (0x3f < uVar3) break;
        uVar7 = (ulong)uVar3;
        bVar1 = *param_3;
        pbVar8 = param_2 + 1;
        param_3 = param_3 + 1;
        uVar3 = uVar3 + 1;
        *param_2 = bVar1 ^ *(byte *)(lVar2 + 0x30 + uVar7);
        param_4 = param_4 - 1;
        param_2 = pbVar8;
      } while (param_4 != 0);
    }
    *(uint *)(lVar2 + 0x70) = uVar3;
    if (param_4 == 0) {
      return 1;
    }
    uVar7 = (ulong)*(uint *)(lVar2 + 0x20);
    if (uVar3 == 0x40) {
      uVar3 = *(uint *)(lVar2 + 0x20) + 1;
      uVar7 = (ulong)uVar3;
      *(undefined4 *)(lVar2 + 0x70) = 0;
      *(uint *)(lVar2 + 0x20) = uVar3;
      if (uVar3 == 0) {
        *(int *)(lVar2 + 0x24) = *(int *)(lVar2 + 0x24) + 1;
      }
    }
  }
  uVar3 = (uint)param_4 & 0x3f;
  uVar9 = param_4 - uVar3;
  if (0x3f < uVar9) {
    do {
      while (uVar9 < 0x400000040) {
        uVar5 = uVar9 >> 6;
        uVar7 = (ulong)(uint)((int)uVar5 + (int)uVar7);
        if (uVar7 < uVar5) goto LAB_00100123;
LAB_00100184:
        lVar6 = uVar5 * 0x40;
        ChaCha20_ctr32(param_2,param_3,lVar6,lVar2,lVar2 + 0x20);
        uVar9 = uVar9 + uVar5 * -0x40;
        *(int *)(lVar2 + 0x20) = (int)uVar7;
        param_3 = param_3 + lVar6;
        param_2 = param_2 + lVar6;
        if (uVar9 < 0x40) goto LAB_001001b4;
      }
      uVar5 = 0x10000000;
      uVar7 = (ulong)((int)uVar7 + 0x10000000);
      if (0xfffffff < uVar7) goto LAB_00100184;
LAB_00100123:
      lVar6 = uVar5 - uVar7;
      lVar4 = lVar6 * 0x40;
      uVar7 = 0;
      ChaCha20_ctr32(param_2,param_3,lVar4,lVar2,lVar2 + 0x20);
      uVar9 = uVar9 + lVar6 * -0x40;
      *(int *)(lVar2 + 0x24) = *(int *)(lVar2 + 0x24) + 1;
      param_3 = param_3 + lVar4;
      *(undefined4 *)(lVar2 + 0x20) = 0;
      param_2 = param_2 + lVar4;
    } while (0x3f < uVar9);
  }
LAB_001001b4:
  if ((param_4 & 0x3f) != 0) {
    *(undefined1 (*) [16])(lVar2 + 0x30) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(lVar2 + 0x40) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(lVar2 + 0x50) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(lVar2 + 0x60) = (undefined1  [16])0x0;
    ChaCha20_ctr32(lVar2 + 0x30,lVar2 + 0x30,0x40,lVar2,lVar2 + 0x20);
    uVar7 = 0;
    do {
      param_2[uVar7] = param_3[uVar7] ^ *(byte *)(lVar2 + 0x30 + uVar7);
      uVar7 = uVar7 + 1;
    } while (uVar3 != uVar7);
    *(uint *)(lVar2 + 0x70) = uVar3;
  }
  return 1;
}



undefined8 chacha20_poly1305_init_key(long param_1,long param_2,long param_3,undefined4 param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  undefined1 local_48 [16];
  undefined1 auStack_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 != 0 || param_2 != 0) {
    lVar1 = *(long *)(param_1 + 0x78);
    *(undefined8 *)(lVar1 + 0xb8) = 0;
    *(undefined8 *)(lVar1 + 200) = 0xffffffffffffffff;
    *(undefined1 (*) [16])(lVar1 + 0xa8) = (undefined1  [16])0x0;
    if (param_3 == 0) {
      chacha_init_key(param_1,param_2,0);
    }
    else {
      lVar3 = (long)*(int *)(lVar1 + 0xc4);
      local_48 = (undefined1  [16])0x0;
      if (*(int *)(lVar1 + 0xc4) < 0x11) {
        uVar4 = -lVar3 + 0x10;
        uVar2 = 0x10;
        if (0xf < uVar4) {
          uVar2 = uVar4;
        }
        __memcpy_chk(auStack_38 + -lVar3,param_3,lVar3,lVar3 + -0x10 + uVar2);
      }
      chacha_init_key(param_1,param_2,local_48,param_4);
      *(undefined8 *)(lVar1 + 0x78) = *(undefined8 *)(lVar1 + 0x24);
      *(undefined4 *)(lVar1 + 0x80) = *(undefined4 *)(lVar1 + 0x2c);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 chacha20_poly1305_ctrl(long param_1,undefined4 param_2,uint param_3,undefined8 *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ushort uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  
  lVar6 = *(long *)(param_1 + 0x78);
  switch(param_2) {
  case 0:
    if (lVar6 == 0) {
      lVar6 = Poly1305_ctx_size();
      lVar6 = CRYPTO_zalloc(lVar6 + 0xd0,"crypto/evp/e_chacha20_poly1305.c",0x1f9);
      *(long *)(param_1 + 0x78) = lVar6;
      if (lVar6 == 0) {
        ERR_new();
        ERR_set_debug("crypto/evp/e_chacha20_poly1305.c",0x1fb,"chacha20_poly1305_ctrl");
        ERR_set_error(6,0x86,0);
        return 0;
      }
    }
    *(undefined8 *)(lVar6 + 200) = 0xffffffffffffffff;
    *(undefined1 (*) [16])(lVar6 + 0xa8) = (undefined1  [16])0x0;
    uVar3 = _UNK_00101418;
    *(undefined8 *)(lVar6 + 0xb8) = __LC1;
    *(undefined8 *)(lVar6 + 0xc0) = uVar3;
    *(undefined1 (*) [16])(lVar6 + 0x94) = (undefined1  [16])0x0;
    break;
  default:
    return 0xffffffff;
  case 8:
    if (lVar6 != 0) {
      lVar5 = Poly1305_ctx_size();
      lVar6 = CRYPTO_memdup(lVar6,lVar5 + 0xd0,"crypto/evp/e_chacha20_poly1305.c",0x20d);
      param_4[0xf] = lVar6;
      if (lVar6 == 0) {
        ERR_new();
        ERR_set_debug("crypto/evp/e_chacha20_poly1305.c",0x20f,"chacha20_poly1305_ctrl");
        ERR_set_error(6,0xad,0);
        return 0;
      }
    }
    break;
  case 9:
    if (0xb < param_3 - 1) {
      return 0;
    }
    *(uint *)(lVar6 + 0xc4) = param_3;
    break;
  case 0x10:
    if (0xf < param_3 - 1) {
      return 0;
    }
    iVar4 = EVP_CIPHER_CTX_is_encrypting();
    if (iVar4 == 0) {
      return 0;
    }
    uVar10 = (ulong)param_3;
    puVar1 = (undefined4 *)(lVar6 + 0x84);
    if (param_3 < 8) {
      if ((param_3 & 4) == 0) {
        if ((param_3 != 0) && (*(undefined1 *)param_4 = *(undefined1 *)puVar1, (param_3 & 2) != 0))
        {
          *(undefined2 *)((long)param_4 + (uVar10 - 2)) = *(undefined2 *)(lVar6 + 0x82 + uVar10);
        }
      }
      else {
        *(undefined4 *)param_4 = *puVar1;
        *(undefined4 *)((long)param_4 + (uVar10 - 4)) = *(undefined4 *)(lVar6 + 0x80 + uVar10);
      }
    }
    else {
      *param_4 = *(undefined8 *)(lVar6 + 0x84);
      *(undefined8 *)((long)param_4 + ((ulong)param_3 - 8)) =
           *(undefined8 *)(lVar6 + 0x7c + (ulong)param_3);
      lVar6 = (long)param_4 - ((ulong)(param_4 + 1) & 0xfffffffffffffff8);
      uVar11 = param_3 + (int)lVar6 & 0xfffffff8;
      if (7 < uVar11) {
        uVar10 = 0;
        do {
          uVar8 = (int)uVar10 + 8;
          *(undefined8 *)(((ulong)(param_4 + 1) & 0xfffffffffffffff8) + uVar10) =
               *(undefined8 *)((long)puVar1 + (uVar10 - lVar6));
          uVar10 = (ulong)uVar8;
        } while (uVar8 < uVar11);
      }
    }
    break;
  case 0x11:
    if (0xf < param_3 - 1) {
      return 0;
    }
    if (param_4 != (undefined8 *)0x0) {
      puVar1 = (undefined4 *)(lVar6 + 0x84);
      if (param_3 < 8) {
        if ((param_3 & 4) == 0) {
          if ((param_3 != 0) && (*(undefined1 *)puVar1 = *(undefined1 *)param_4, (param_3 & 2) != 0)
             ) {
            *(undefined2 *)(lVar6 + 0x82 + (ulong)param_3) =
                 *(undefined2 *)((long)param_4 + ((ulong)param_3 - 2));
          }
        }
        else {
          *puVar1 = *(undefined4 *)param_4;
          *(undefined4 *)(lVar6 + 0x80 + (ulong)param_3) =
               *(undefined4 *)((long)param_4 + ((ulong)param_3 - 4));
        }
      }
      else {
        uVar10 = lVar6 + 0x8cU & 0xfffffffffffffff8;
        *(undefined8 *)(lVar6 + 0x84) = *param_4;
        *(undefined8 *)(lVar6 + 0x7c + (ulong)param_3) =
             *(undefined8 *)((long)param_4 + ((ulong)param_3 - 8));
        lVar5 = (long)puVar1 - uVar10;
        uVar11 = (int)lVar5 + param_3 & 0xfffffff8;
        if (7 < uVar11) {
          uVar8 = 0;
          do {
            uVar9 = (ulong)uVar8;
            uVar8 = uVar8 + 8;
            *(undefined8 *)(uVar10 + uVar9) = *(undefined8 *)((long)param_4 + (uVar9 - lVar5));
          } while (uVar8 < uVar11);
        }
      }
      *(uint *)(lVar6 + 0xc0) = param_3;
    }
    break;
  case 0x12:
    if (param_3 != 0xc) {
      return 0;
    }
    uVar2 = *(undefined4 *)param_4;
    *(undefined4 *)(lVar6 + 0x24) = uVar2;
    *(undefined4 *)(lVar6 + 0x78) = uVar2;
    uVar2 = *(undefined4 *)((long)param_4 + 4);
    *(undefined4 *)(lVar6 + 0x28) = uVar2;
    *(undefined4 *)(lVar6 + 0x7c) = uVar2;
    uVar2 = *(undefined4 *)(param_4 + 1);
    *(undefined4 *)(lVar6 + 0x2c) = uVar2;
    *(undefined4 *)(lVar6 + 0x80) = uVar2;
    break;
  case 0x16:
    if (param_3 != 0xd) {
      return 0;
    }
    *(undefined8 *)(lVar6 + 0x94) = *param_4;
    *(undefined8 *)(lVar6 + 0x99) = *(undefined8 *)((long)param_4 + 5);
    uVar7 = *(ushort *)((long)param_4 + 0xb) << 8 | *(ushort *)((long)param_4 + 0xb) >> 8;
    uVar11 = (uint)uVar7;
    iVar4 = EVP_CIPHER_CTX_is_encrypting();
    if (iVar4 == 0) {
      if (uVar7 < 0x10) {
        return 0;
      }
      uVar11 = uVar7 - 0x10;
      *(ushort *)(lVar6 + 0x9f) = (ushort)uVar11 << 8 | (ushort)uVar11 >> 8;
    }
    *(undefined4 *)(lVar6 + 0xbc) = 0;
    *(ulong *)(lVar6 + 200) = (ulong)uVar11;
    *(uint *)(lVar6 + 0x2c) = *(uint *)(lVar6 + 0x80) ^ *(uint *)(lVar6 + 0x98);
    *(ulong *)(lVar6 + 0x24) =
         CONCAT44(*(uint *)(lVar6 + 0x7c) ^ *(uint *)(lVar6 + 0x94),*(undefined4 *)(lVar6 + 0x78));
    return 0x10;
  case 0x17:
    break;
  case 0x25:
    *(undefined4 *)param_4 = *(undefined4 *)(lVar6 + 0xc4);
  }
  return 1;
}



ulong chacha20_poly1305_tls_cipher(long param_1,undefined8 *param_2,void *param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *a;
  long in_FS_OFFSET;
  undefined1 *local_180;
  size_t local_178;
  undefined1 local_168 [48];
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128 [29];
  long local_40;
  
  lVar2 = *(long *)(param_1 + 0x78);
  uVar3 = *(ulong *)(lVar2 + 200);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (uVar3 + 0x10 == param_4) {
    *(undefined4 *)(lVar2 + 0x20) = 0;
    lVar1 = lVar2 + 0xd0;
    if (uVar3 < 0xc1) {
      local_178 = uVar3 + 0x7f & 0xffffffffffffffc0;
      ChaCha20_ctr32(local_168,zero,local_178,lVar2,lVar2 + 0x20);
      Poly1305_Init(lVar1,local_168);
      local_138 = *(undefined8 *)(lVar2 + 0x94);
      uStack_130 = *(undefined8 *)(lVar2 + 0x9c);
      *(undefined4 *)(lVar2 + 0x70) = 0;
      *(undefined8 *)(lVar2 + 0xa8) = 0xd;
      *(ulong *)(lVar2 + 0xb0) = uVar3;
      if (uVar3 == 0) {
        a = &local_138;
        lVar7 = 0x20;
        puVar6 = local_128;
        local_178 = 0x40;
      }
      else {
        iVar5 = EVP_CIPHER_CTX_is_encrypting(param_1);
        if (iVar5 == 0) {
          puVar6 = (undefined8 *)xor128_decrypt_n_pad(param_2,param_3,local_128,uVar3);
        }
        else {
          puVar6 = (undefined8 *)xor128_encrypt_n_pad();
        }
        a = &local_138;
        param_3 = (void *)((long)param_3 + uVar3);
        param_2 = (undefined8 *)((long)param_2 + uVar3);
        lVar7 = (long)puVar6 + (0x10 - (long)a);
      }
    }
    else {
      ChaCha20_ctr32(local_168,zero,0x40,lVar2);
      Poly1305_Init(lVar1,local_168);
      *(undefined4 *)(lVar2 + 0x20) = 1;
      *(undefined4 *)(lVar2 + 0x70) = 0;
      Poly1305_Update(lVar1,lVar2 + 0x94,0x10);
      *(ulong *)(lVar2 + 0xb0) = uVar3;
      *(undefined8 *)(lVar2 + 0xa8) = 0xd;
      iVar5 = EVP_CIPHER_CTX_is_encrypting(param_1);
      if (iVar5 == 0) {
        Poly1305_Update(lVar1,param_3,uVar3);
        ChaCha20_ctr32(param_2,param_3,uVar3,lVar2,lVar2 + 0x20);
      }
      else {
        ChaCha20_ctr32(param_2,param_3,uVar3,lVar2);
        Poly1305_Update(lVar1,param_2,uVar3);
      }
      param_3 = (void *)((long)param_3 + uVar3);
      param_2 = (undefined8 *)((long)param_2 + uVar3);
      Poly1305_Update(lVar1,zero,-(int)uVar3 & 0xf);
      puVar6 = local_128;
      lVar7 = 0x10;
      local_178 = 0x40;
      a = puVar6;
    }
    local_180 = local_168;
    uVar4 = *(undefined8 *)(lVar2 + 0xb0);
    *puVar6 = *(undefined8 *)(lVar2 + 0xa8);
    puVar6[1] = uVar4;
    Poly1305_Update(lVar1,a,lVar7);
    OPENSSL_cleanse(local_180,local_178);
    iVar5 = EVP_CIPHER_CTX_is_encrypting(param_1);
    puVar6 = (undefined8 *)(lVar2 + 0x84);
    if (iVar5 == 0) {
      puVar6 = a;
    }
    Poly1305_Final(lVar1,puVar6);
    *(undefined8 *)(lVar2 + 200) = 0xffffffffffffffff;
    iVar5 = EVP_CIPHER_CTX_is_encrypting(param_1);
    if (iVar5 == 0) {
      iVar5 = CRYPTO_memcmp(a,param_3,0x10);
      if (iVar5 != 0) {
        memset((void *)((long)param_2 + (0x10 - param_4)),0,param_4 - 0x10);
        goto LAB_00100a50;
      }
    }
    else {
      uVar4 = *(undefined8 *)(lVar2 + 0x8c);
      *param_2 = *(undefined8 *)(lVar2 + 0x84);
      param_2[1] = uVar4;
    }
    param_4 = param_4 & 0xffffffff;
  }
  else {
LAB_00100a50:
    param_4 = 0xffffffff;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong chacha20_poly1305_cipher(long param_1,undefined8 *param_2,void *param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  bool bVar7;
  undefined1 *puVar8;
  size_t sVar9;
  size_t __n;
  long in_FS_OFFSET;
  long local_78;
  undefined1 local_58 [24];
  long local_40;
  
  lVar1 = *(long *)(param_1 + 0x78);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  __n = *(size_t *)(lVar1 + 200);
  if (*(int *)(lVar1 + 0xbc) == 0) {
    bVar7 = __n != 0xffffffffffffffff && param_2 != (undefined8 *)0x0;
    if (bVar7) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = chacha20_poly1305_tls_cipher(param_1,param_2,param_3,param_4);
        return uVar6;
      }
      goto LAB_00100f30;
    }
    *(undefined4 *)(lVar1 + 0x20) = 0;
    ChaCha20_ctr32(lVar1 + 0x30,zero,0x40,lVar1,lVar1 + 0x20);
    Poly1305_Init(lVar1 + 0xd0,lVar1 + 0x30);
    *(undefined4 *)(lVar1 + 0x20) = 1;
    *(undefined4 *)(lVar1 + 0x70) = 0;
    *(undefined4 *)(lVar1 + 0xbc) = 1;
    *(undefined1 (*) [16])(lVar1 + 0xa8) = (undefined1  [16])0x0;
    if (__n == 0xffffffffffffffff) goto LAB_00100bb4;
    Poly1305_Update(lVar1 + 0xd0,lVar1 + 0x94,0xd);
    *(undefined8 *)(lVar1 + 0xa8) = 0xd;
    *(undefined4 *)(lVar1 + 0xb8) = 1;
    if (param_3 != (void *)0x0) {
      if (param_2 != (undefined8 *)0x0) goto LAB_00100bd1;
      goto LAB_00100e18;
    }
LAB_00100e40:
    local_78 = lVar1 + 0xd0;
    if ((*(ulong *)(lVar1 + 0xa8) & 0xf) != 0) {
      Poly1305_Update(local_78,zero,0x10 - (ulong)((uint)*(ulong *)(lVar1 + 0xa8) & 0xf));
    }
    uVar6 = *(ulong *)(lVar1 + 0xb0);
    *(undefined4 *)(lVar1 + 0xb8) = 0;
    uVar5 = (uint)uVar6;
joined_r0x00100e65:
    if ((uVar6 & 0xf) != 0) {
      local_78 = lVar1 + 0xd0;
      Poly1305_Update(local_78,zero,0x10 - (ulong)(uVar5 & 0xf));
    }
    local_78 = lVar1 + 0xd0;
    Poly1305_Update(local_78,lVar1 + 0xa8,0x10);
    iVar4 = EVP_CIPHER_CTX_is_encrypting(param_1);
    puVar8 = (undefined1 *)(lVar1 + 0x84);
    if (iVar4 == 0) {
      puVar8 = local_58;
    }
    Poly1305_Final(local_78,puVar8);
    *(undefined4 *)(lVar1 + 0xbc) = 0;
    if (bVar7) {
      iVar4 = EVP_CIPHER_CTX_is_encrypting(param_1);
      if (iVar4 == 0) {
        iVar4 = CRYPTO_memcmp(local_58,param_3,0x10);
        if (iVar4 != 0) {
          memset((void *)((long)param_2 - __n),0,__n);
          goto LAB_00100d9b;
        }
      }
      else {
        uVar3 = *(undefined8 *)(lVar1 + 0x8c);
        *param_2 = *(undefined8 *)(lVar1 + 0x84);
        param_2[1] = uVar3;
      }
    }
    else {
      iVar4 = EVP_CIPHER_CTX_is_encrypting(param_1);
      if ((iVar4 == 0) &&
         (iVar4 = CRYPTO_memcmp(local_58,(undefined1 *)(lVar1 + 0x84),(long)*(int *)(lVar1 + 0xc0)),
         iVar4 != 0)) {
LAB_00100d9b:
        param_4 = 0xffffffff;
        goto LAB_00100c65;
      }
    }
LAB_00100c63:
    param_4 = param_4 & 0xffffffff;
  }
  else {
LAB_00100bb4:
    if (param_3 == (void *)0x0) {
      bVar7 = false;
LAB_00100ca0:
      if (*(int *)(lVar1 + 0xb8) != 0) goto LAB_00100e40;
      uVar6 = *(ulong *)(lVar1 + 0xb0);
      uVar5 = (uint)uVar6;
      goto joined_r0x00100e65;
    }
    if (param_2 != (undefined8 *)0x0) {
      if (*(int *)(lVar1 + 0xb8) != 0) {
LAB_00100bd1:
        if ((*(ulong *)(lVar1 + 0xa8) & 0xf) != 0) {
          Poly1305_Update(lVar1 + 0xd0,zero,0x10 - (ulong)((uint)*(ulong *)(lVar1 + 0xa8) & 0xf));
        }
        *(undefined4 *)(lVar1 + 0xb8) = 0;
      }
      *(undefined8 *)(lVar1 + 200) = 0xffffffffffffffff;
      sVar9 = param_4;
      if ((__n != 0xffffffffffffffff) && (sVar9 = __n, __n + 0x10 != param_4)) goto LAB_00100d9b;
      iVar4 = EVP_CIPHER_CTX_is_encrypting(param_1);
      if (iVar4 == 0) {
        Poly1305_Update(lVar1 + 0xd0,param_3,sVar9);
        chacha_cipher(param_1,param_2,param_3,sVar9);
        lVar2 = *(long *)(lVar1 + 0xb0);
      }
      else {
        chacha_cipher(param_1,param_2,param_3,sVar9);
        Poly1305_Update(lVar1 + 0xd0,param_2,sVar9);
        lVar2 = *(long *)(lVar1 + 0xb0);
      }
      *(size_t *)(lVar1 + 0xb0) = lVar2 + sVar9;
      if (sVar9 != param_4) {
        bVar7 = true;
        param_3 = (void *)((long)param_3 + sVar9);
        param_2 = (undefined8 *)((long)param_2 + sVar9);
        __n = sVar9;
        goto LAB_00100ca0;
      }
      goto LAB_00100c63;
    }
LAB_00100e18:
    local_78 = lVar1 + 0xd0;
    Poly1305_Update(local_78,param_3,param_4);
    *(long *)(lVar1 + 0xa8) = *(long *)(lVar1 + 0xa8) + param_4;
    param_4 = param_4 & 0xffffffff;
    *(undefined4 *)(lVar1 + 0xb8) = 1;
  }
LAB_00100c65:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_4;
  }
LAB_00100f30:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 chacha20_poly1305_cleanup(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x78) != 0) {
    lVar1 = Poly1305_ctx_size();
    OPENSSL_cleanse(*(void **)(param_1 + 0x78),lVar1 + 0xd0);
    return 1;
  }
  return 1;
}



undefined1 * EVP_chacha20(void)

{
  return chacha20;
}



undefined1 * EVP_chacha20_poly1305(void)

{
  return chacha20_poly1305;
}


