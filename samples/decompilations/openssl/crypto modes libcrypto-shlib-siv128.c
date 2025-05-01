
undefined8
ossl_siv128_init(undefined1 (*param_1) [16],long param_2,int param_3,long param_4,
                EVP_CIPHER *param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  undefined8 uVar2;
  EVP_CIPHER_CTX *pEVar3;
  long lVar4;
  long in_FS_OFFSET;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_c0 = 0x10;
  if (param_1 != (undefined1 (*) [16])0x0) {
    *param_1 = (undefined1  [16])0x0;
    EVP_CIPHER_CTX_free(*(EVP_CIPHER_CTX **)param_1[2]);
    EVP_MAC_CTX_free(*(undefined8 *)param_1[3]);
    EVP_MAC_free(*(undefined8 *)(param_1[2] + 8));
    *(undefined8 *)param_1[3] = 0;
    param_1[2] = (undefined1  [16])0x0;
    if ((param_4 != 0 && param_5 != (EVP_CIPHER *)0x0) && (param_2 != 0)) {
      uVar2 = EVP_CIPHER_get0_name(param_4);
      OSSL_PARAM_construct_utf8_string(&local_f8,"cipher",uVar2,0);
      local_98 = local_d8;
      local_b8 = local_f8;
      uStack_b0 = uStack_f0;
      local_a8 = local_e8;
      uStack_a0 = uStack_e0;
      OSSL_PARAM_construct_octet_string(&local_f8,&_LC1,param_2,(long)param_3);
      local_70 = local_d8;
      local_90 = local_f8;
      uStack_88 = uStack_f0;
      local_80 = local_e8;
      uStack_78 = uStack_e0;
      OSSL_PARAM_construct_end();
      local_68 = local_f8;
      uStack_60 = uStack_f0;
      local_48 = local_d8;
      local_58 = local_e8;
      uStack_50 = uStack_e0;
      pEVar3 = EVP_CIPHER_CTX_new();
      *(EVP_CIPHER_CTX **)param_1[2] = pEVar3;
      if (pEVar3 == (EVP_CIPHER_CTX *)0x0) {
        pEVar3 = (EVP_CIPHER_CTX *)0x0;
        lVar4 = 0;
      }
      else {
        lVar4 = EVP_MAC_fetch(param_6,&_LC2,param_7);
        *(long *)(param_1[2] + 8) = lVar4;
        if (lVar4 != 0) {
          lVar4 = EVP_MAC_CTX_new(lVar4);
          *(long *)param_1[3] = lVar4;
          if (lVar4 != 0) {
            iVar1 = EVP_MAC_CTX_set_params(lVar4,&local_b8);
            if (iVar1 != 0) {
              iVar1 = EVP_EncryptInit_ex(*(EVP_CIPHER_CTX **)param_1[2],param_5,(ENGINE *)0x0,
                                         (uchar *)(param_2 + param_3),(uchar *)0x0);
              if (iVar1 != 0) {
                lVar4 = EVP_MAC_CTX_dup(*(undefined8 *)param_1[3]);
                if (lVar4 != 0) {
                  iVar1 = EVP_MAC_update(lVar4,zero_0,0x10);
                  if (iVar1 != 0) {
                    iVar1 = EVP_MAC_final(lVar4,param_1,&local_c0,0x10);
                    if (iVar1 != 0) {
                      EVP_MAC_CTX_free(lVar4);
                      *(undefined8 *)(param_1[3] + 8) = _LC3;
                      uVar2 = 1;
                      goto LAB_001001f5;
                    }
                  }
                }
                goto LAB_001001d0;
              }
            }
            pEVar3 = *(EVP_CIPHER_CTX **)param_1[2];
            lVar4 = 0;
            goto LAB_001001d4;
          }
        }
LAB_001001d0:
        pEVar3 = *(EVP_CIPHER_CTX **)param_1[2];
      }
LAB_001001d4:
      EVP_CIPHER_CTX_free(pEVar3);
      EVP_MAC_CTX_free(*(undefined8 *)param_1[3]);
      EVP_MAC_CTX_free(lVar4);
      EVP_MAC_free(*(undefined8 *)(param_1[2] + 8));
    }
  }
  uVar2 = 0;
LAB_001001f5:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void * ossl_siv128_new(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  void *ptr;
  
  ptr = CRYPTO_malloc(0x40,"crypto/modes/siv128.c",0x96);
  if (ptr != (void *)0x0) {
    iVar1 = ossl_siv128_init(ptr,param_1,param_2,param_3,param_4,param_5,param_6);
    if (iVar1 != 0) {
      return ptr;
    }
    CRYPTO_free(ptr);
  }
  return (void *)0x0;
}



undefined8 ossl_siv128_copy_ctx(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  EVP_CIPHER_CTX *out;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  out = (EVP_CIPHER_CTX *)param_1[4];
  if (out == (EVP_CIPHER_CTX *)0x0) {
    out = EVP_CIPHER_CTX_new();
    param_1[4] = out;
    if (out == (EVP_CIPHER_CTX *)0x0) {
      return 0;
    }
  }
  iVar2 = EVP_CIPHER_CTX_copy(out,(EVP_CIPHER_CTX *)param_2[4]);
  if (iVar2 != 0) {
    EVP_MAC_CTX_free(param_1[6]);
    lVar3 = EVP_MAC_CTX_dup(param_2[6]);
    param_1[6] = lVar3;
    if (lVar3 != 0) {
      lVar3 = param_2[5];
      param_1[5] = lVar3;
      if (lVar3 != 0) {
        EVP_MAC_up_ref();
      }
      return 1;
    }
  }
  return 0;
}



undefined8 ossl_siv128_aad(ulong *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  long local_50;
  ulong local_48;
  ulong uStack_40;
  long local_30;
  
  uVar1 = param_1[1];
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = *param_1;
  local_50 = 0x10;
  uVar2 = (uVar4 >> 0x38 | (uVar4 & 0xff000000000000) >> 0x28 | (uVar4 & 0xff0000000000) >> 0x18 |
           (uVar4 & 0xff00000000) >> 8 | (uVar4 & 0xff000000) << 8 | (uVar4 & 0xff0000) << 0x18 |
           (uVar4 & 0xff00) << 0x28 | uVar4 << 0x38) * 2;
  *param_1 = uVar2 >> 0x38 | (uVar2 & 0xff000000000000) >> 0x28 | (uVar2 & 0xff0000000000) >> 0x18 |
             (uVar2 & 0xff00000000) >> 8 | (uVar2 & 0xff000000) << 8 | (uVar2 & 0xff0000) << 0x18 |
             (uVar2 & 0xff00) << 0x28 | ((ulong)((byte)(uVar1 >> 7) & 1) | uVar2 & 0xff) << 0x38;
  uVar1 = (uVar1 >> 0x38 | (uVar1 & 0xff000000000000) >> 0x28 | (uVar1 & 0xff0000000000) >> 0x18 |
           (uVar1 & 0xff00000000) >> 8 | (uVar1 & 0xff000000) << 8 | (uVar1 & 0xff0000) << 0x18 |
           (uVar1 & 0xff00) << 0x28 | uVar1 << 0x38) * 2;
  uVar4 = (byte)((char)uVar4 >> 7) & 0x87 ^ uVar1;
  param_1[1] = uVar1 >> 0x38 | (uVar4 & 0xff000000000000) >> 0x28 | (uVar4 & 0xff0000000000) >> 0x18
               | (uVar4 & 0xff00000000) >> 8 | (uVar4 & 0xff000000) << 8 |
               (uVar4 & 0xff0000) << 0x18 | (uVar4 & 0xff00) << 0x28 | uVar4 << 0x38;
  lVar5 = EVP_MAC_CTX_dup(param_1[6]);
  if (lVar5 != 0) {
    iVar3 = EVP_MAC_update(lVar5,param_2,param_3);
    if (iVar3 != 0) {
      iVar3 = EVP_MAC_final(lVar5,&local_48,&local_50,0x10);
      if ((iVar3 != 0) && (local_50 == 0x10)) {
        EVP_MAC_CTX_free(lVar5);
        uVar6 = 1;
        *param_1 = *param_1 ^ local_48;
        param_1[1] = param_1[1] ^ uStack_40;
        goto LAB_00100488;
      }
    }
  }
  EVP_MAC_CTX_free(lVar5);
  uVar6 = 0;
LAB_00100488:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 ossl_siv128_encrypt(ulong *param_1,uchar *param_2,uchar *param_3,ulong param_4)

{
  ulong uVar1;
  EVP_CIPHER_CTX *ctx;
  ulong uVar2;
  int iVar3;
  long lVar4;
  void *pvVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  long in_FS_OFFSET;
  long local_70;
  ulong local_68;
  uint uStack_60;
  uint uStack_5c;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)((long)param_1 + 0x3c) != 0) {
    *(int *)((long)param_1 + 0x3c) = *(int *)((long)param_1 + 0x3c) + -1;
    local_70 = 0x10;
    lVar4 = EVP_MAC_CTX_dup(param_1[6]);
    if (lVar4 != 0) {
      if (param_4 < 0x10) {
        local_58 = (undefined1  [16])0x0;
        pvVar5 = memcpy(local_58,param_2,param_4);
        uVar7 = *param_1;
        local_58[param_4] = 0x80;
        uVar1 = param_1[1];
        uVar2 = (uVar7 >> 0x38 | (uVar7 & 0xff000000000000) >> 0x28 |
                 (uVar7 & 0xff0000000000) >> 0x18 | (uVar7 & 0xff00000000) >> 8 |
                 (uVar7 & 0xff000000) << 8 | (uVar7 & 0xff0000) << 0x18 | (uVar7 & 0xff00) << 0x28 |
                uVar7 << 0x38) * 2;
        uVar8 = (uVar1 >> 0x38 | (uVar1 & 0xff000000000000) >> 0x28 |
                 (uVar1 & 0xff0000000000) >> 0x18 | (uVar1 & 0xff00000000) >> 8 |
                 (uVar1 & 0xff000000) << 8 | (uVar1 & 0xff0000) << 0x18 | (uVar1 & 0xff00) << 0x28 |
                uVar1 << 0x38) * 2;
        uVar7 = (byte)((char)uVar7 >> 7) & 0x87 ^ uVar8;
        uVar8 = uVar8 >> 0x38 | (uVar7 & 0xff000000000000) >> 0x28 |
                (uVar7 & 0xff0000000000) >> 0x18 | (uVar7 & 0xff00000000) >> 8 |
                (uVar7 & 0xff000000) << 8 | (uVar7 & 0xff0000) << 0x18 | (uVar7 & 0xff00) << 0x28 |
                uVar7 << 0x38;
        uVar7 = uVar2 >> 0x38 | (uVar2 & 0xff000000000000) >> 0x28 |
                (uVar2 & 0xff0000000000) >> 0x18 | (uVar2 & 0xff00000000) >> 8 |
                (uVar2 & 0xff000000) << 8 | (uVar2 & 0xff0000) << 0x18 | (uVar2 & 0xff00) << 0x28 |
                ((ulong)((byte)(uVar1 >> 7) & 1) | uVar2 & 0xff) << 0x38;
        *param_1 = uVar7;
        param_1[1] = uVar8;
        local_58._8_8_ = uVar8 ^ local_58._8_8_;
        local_58._0_8_ = uVar7 ^ local_58._0_8_;
        iVar3 = EVP_MAC_update(lVar4,pvVar5,0x10);
joined_r0x00100606:
        if (iVar3 != 0) {
          iVar3 = EVP_MAC_final(lVar4,&local_68,&local_70);
          if ((iVar3 != 0) && (local_70 == 0x10)) {
            EVP_MAC_CTX_free(lVar4);
            ctx = (EVP_CIPHER_CTX *)param_1[4];
            param_1[2] = local_68;
            param_1[3] = CONCAT44(uStack_5c,uStack_60);
            uStack_60 = uStack_60 & 0xffffff7f;
            uStack_5c = uStack_5c & 0xffffff7f;
            local_70 = CONCAT44(local_70._4_4_,(int)param_4);
            iVar3 = EVP_CipherInit_ex(ctx,(EVP_CIPHER *)0x0,(ENGINE *)0x0,(uchar *)0x0,
                                      (uchar *)&local_68,1);
            if (iVar3 != 0) {
              iVar3 = EVP_EncryptUpdate(ctx,param_3,(int *)&local_70,param_2,(int)local_70);
              if (iVar3 != 0) {
                *(undefined4 *)(param_1 + 7) = 0;
                uVar6 = 1;
                goto LAB_001006b1;
              }
            }
            goto LAB_00100517;
          }
        }
      }
      else {
        iVar3 = EVP_MAC_update(lVar4,param_2,param_4 - 0x10);
        if (iVar3 != 0) {
          local_58._8_8_ = *(ulong *)((long)(param_2 + (param_4 - 0x10)) + 8) ^ param_1[1];
          local_58._0_8_ = *(ulong *)(param_2 + (param_4 - 0x10)) ^ *param_1;
          iVar3 = EVP_MAC_update(lVar4,local_58,0x10);
          goto joined_r0x00100606;
        }
      }
      EVP_MAC_CTX_free(lVar4);
      uVar6 = 0;
      goto LAB_001006b1;
    }
  }
LAB_00100517:
  uVar6 = 0;
LAB_001006b1:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 ossl_siv128_decrypt(ulong *param_1,uchar *param_2,uchar *param_3,ulong param_4)

{
  EVP_CIPHER_CTX *ctx;
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  void *pvVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  long in_FS_OFFSET;
  long local_80;
  ulong local_78;
  ulong uStack_70;
  ulong local_68;
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)((long)param_1 + 0x3c) != 0) {
    local_68 = param_1[2];
    ctx = (EVP_CIPHER_CTX *)param_1[4];
    *(int *)((long)param_1 + 0x3c) = *(int *)((long)param_1 + 0x3c) + -1;
    local_80 = CONCAT44(local_80._4_4_,(int)param_4);
    local_60 = param_1[3] & 0xffffffffffffff7f;
    local_60 = CONCAT35(local_60._5_3_,CONCAT14((char)(param_1[3] >> 0x20),(undefined4)local_60)) &
               0xffffff7fffffffff;
    iVar3 = EVP_CipherInit_ex(ctx,(EVP_CIPHER *)0x0,(ENGINE *)0x0,(uchar *)0x0,(uchar *)&local_68,1)
    ;
    if (iVar3 != 0) {
      iVar3 = EVP_EncryptUpdate(ctx,param_3,(int *)&local_80,param_2,(int)local_80);
      if (iVar3 != 0) {
        local_80 = 0x10;
        lVar4 = EVP_MAC_CTX_dup(param_1[6]);
        if (lVar4 != 0) {
          if (param_4 < 0x10) {
            local_58 = (undefined1  [16])0x0;
            pvVar5 = memcpy(local_58,param_3,param_4);
            uVar7 = *param_1;
            local_58[param_4] = 0x80;
            uVar1 = param_1[1];
            uVar2 = (uVar7 >> 0x38 | (uVar7 & 0xff000000000000) >> 0x28 |
                     (uVar7 & 0xff0000000000) >> 0x18 | (uVar7 & 0xff00000000) >> 8 |
                     (uVar7 & 0xff000000) << 8 | (uVar7 & 0xff0000) << 0x18 |
                     (uVar7 & 0xff00) << 0x28 | uVar7 << 0x38) * 2;
            uVar8 = (uVar1 >> 0x38 | (uVar1 & 0xff000000000000) >> 0x28 |
                     (uVar1 & 0xff0000000000) >> 0x18 | (uVar1 & 0xff00000000) >> 8 |
                     (uVar1 & 0xff000000) << 8 | (uVar1 & 0xff0000) << 0x18 |
                     (uVar1 & 0xff00) << 0x28 | uVar1 << 0x38) * 2;
            uVar7 = (byte)((char)uVar7 >> 7) & 0x87 ^ uVar8;
            uVar8 = uVar8 >> 0x38 | (uVar7 & 0xff000000000000) >> 0x28 |
                    (uVar7 & 0xff0000000000) >> 0x18 | (uVar7 & 0xff00000000) >> 8 |
                    (uVar7 & 0xff000000) << 8 | (uVar7 & 0xff0000) << 0x18 |
                    (uVar7 & 0xff00) << 0x28 | uVar7 << 0x38;
            uVar7 = uVar2 >> 0x38 | (uVar2 & 0xff000000000000) >> 0x28 |
                    (uVar2 & 0xff0000000000) >> 0x18 | (uVar2 & 0xff00000000) >> 8 |
                    (uVar2 & 0xff000000) << 8 | (uVar2 & 0xff0000) << 0x18 |
                    (uVar2 & 0xff00) << 0x28 |
                    ((ulong)((byte)(uVar1 >> 7) & 1) | uVar2 & 0xff) << 0x38;
            *param_1 = uVar7;
            param_1[1] = uVar8;
            local_58._8_8_ = uVar8 ^ local_58._8_8_;
            local_58._0_8_ = uVar7 ^ local_58._0_8_;
            iVar3 = EVP_MAC_update(lVar4,pvVar5,0x10);
joined_r0x00100896:
            if (((iVar3 != 0) && (iVar3 = EVP_MAC_final(lVar4,&local_78,&local_80,0x10), iVar3 != 0)
                ) && (local_80 == 0x10)) {
              EVP_MAC_CTX_free(lVar4);
              local_78 = param_1[2] ^ local_78;
              uStack_70 = param_1[3] ^ uStack_70;
              if (local_78 == 0 && uStack_70 == 0) {
                *(undefined4 *)(param_1 + 7) = 0;
                uVar6 = 1;
              }
              else {
                OPENSSL_cleanse(param_3,param_4);
                uVar6 = 0;
              }
              goto LAB_001008fb;
            }
          }
          else {
            iVar3 = EVP_MAC_update(lVar4,param_3,param_4 - 0x10);
            if (iVar3 != 0) {
              local_58._8_8_ = *(ulong *)((long)(param_3 + (param_4 - 0x10)) + 8) ^ param_1[1];
              local_58._0_8_ = *(ulong *)(param_3 + (param_4 - 0x10)) ^ *param_1;
              iVar3 = EVP_MAC_update(lVar4,local_58,0x10);
              goto joined_r0x00100896;
            }
          }
          EVP_MAC_CTX_free(lVar4);
          uVar6 = 0;
          goto LAB_001008fb;
        }
      }
    }
  }
  uVar6 = 0;
LAB_001008fb:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4 ossl_siv128_finish(long param_1)

{
  return *(undefined4 *)(param_1 + 0x38);
}



undefined8 ossl_siv128_set_tag(long param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 != 0x10) {
    return 0;
  }
  uVar1 = param_2[1];
  *(undefined8 *)(param_1 + 0x10) = *param_2;
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  return 1;
}



undefined8 ossl_siv128_get_tag(long param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 != 0x10) {
    return 0;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *param_2 = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return 1;
}



undefined8 ossl_siv128_cleanup(void *param_1)

{
  if (param_1 != (void *)0x0) {
    EVP_CIPHER_CTX_free(*(EVP_CIPHER_CTX **)((long)param_1 + 0x20));
    *(undefined8 *)((long)param_1 + 0x20) = 0;
    EVP_MAC_CTX_free(*(undefined8 *)((long)param_1 + 0x30));
    *(undefined8 *)((long)param_1 + 0x30) = 0;
    EVP_MAC_free(*(undefined8 *)((long)param_1 + 0x28));
    *(undefined8 *)((long)param_1 + 0x28) = 0;
    OPENSSL_cleanse(param_1,0x10);
    OPENSSL_cleanse((void *)((long)param_1 + 0x10),0x10);
    *(undefined8 *)((long)param_1 + 0x38) = _LC3;
    return 1;
  }
  return 1;
}



undefined8 ossl_siv128_speed(long param_1,int param_2)

{
  *(uint *)(param_1 + 0x3c) = ((param_2 != 1) - 1) + (uint)(param_2 != 1);
  return 1;
}


