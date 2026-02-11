
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int HMAC_Init_ex(HMAC_CTX *ctx,void *key,int len,EVP_MD *md,ENGINE *impl)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  EVP_MD *type;
  ulong uVar5;
  ulong *puVar6;
  long in_FS_OFFSET;
  byte bVar7;
  uint local_16c;
  ulong local_168;
  ulong uStack_160;
  ulong local_158;
  ulong uStack_150;
  ulong local_148;
  ulong uStack_140;
  ulong local_138;
  ulong uStack_130;
  ulong local_128;
  ulong uStack_120;
  ulong local_118;
  ulong uStack_110;
  ulong local_108;
  ulong uStack_100;
  ulong local_f8;
  ulong uStack_f0;
  ulong local_e8;
  ulong uStack_e0;
  ulong local_d8 [4];
  ulong local_b8;
  ulong uStack_b0;
  ulong local_a8;
  ulong uStack_a0;
  ulong local_98;
  ulong uStack_90;
  ulong local_88;
  ulong uStack_80;
  ulong local_78;
  ulong uStack_70;
  ulong local_68;
  ulong uStack_60;
  ulong local_58;
  ulong uStack_50;
  long local_40;
  
  bVar7 = 0;
  type = ctx->md;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (md == (EVP_MD *)0x0) {
    if (type == (EVP_MD *)0x0) goto LAB_00100220;
LAB_001001dd:
    iVar1 = EVP_MD_xof(type);
    if (iVar1 == 0) {
      if (key == (void *)0x0) {
        iVar1 = EVP_MD_CTX_copy_ex((EVP_MD_CTX *)(ctx->md_ctx).digest,
                                   (EVP_MD_CTX *)(ctx->md_ctx).engine);
        uVar2 = (uint)(iVar1 != 0);
        goto LAB_00100222;
      }
LAB_00100071:
      uVar2 = EVP_MD_get_block_size(type);
      if (uVar2 < 0x91) {
        if ((int)uVar2 < len) {
          iVar1 = EVP_DigestInit_ex((EVP_MD_CTX *)(ctx->md_ctx).digest,type,impl);
          if (((iVar1 != 0) &&
              (iVar1 = EVP_DigestUpdate((EVP_MD_CTX *)(ctx->md_ctx).digest,key,(long)len),
              iVar1 != 0)) &&
             (iVar1 = EVP_DigestFinal_ex((EVP_MD_CTX *)(ctx->md_ctx).digest,(uchar *)local_d8,
                                         &local_16c), iVar1 != 0)) goto LAB_001000d7;
        }
        else if ((uint)len < 0x91) {
          puVar6 = local_d8;
          if (7 < (uint)len) {
                    /* WARNING: Load size is inaccurate */
            for (uVar3 = (ulong)((uint)len >> 3); uVar3 != 0; uVar3 = uVar3 - 1) {
              *puVar6 = *key;
              key = (ulong *)((long)key + ((ulong)bVar7 * -2 + 1) * 8);
              puVar6 = puVar6 + (ulong)bVar7 * -2 + 1;
            }
          }
          lVar4 = 0;
          if ((len & 4U) != 0) {
                    /* WARNING: Load size is inaccurate */
            *(int *)puVar6 = (int)*key;
            lVar4 = 4;
          }
          if ((len & 2U) != 0) {
            *(undefined2 *)((long)puVar6 + lVar4) = *(undefined2 *)((long)key + lVar4);
            lVar4 = lVar4 + 2;
          }
          local_16c = len;
          if ((len & 1U) != 0) {
            *(undefined1 *)((long)puVar6 + lVar4) = *(undefined1 *)((long)key + lVar4);
          }
LAB_001000d7:
          if (local_16c != 0x90) {
            uVar5 = (ulong)local_16c;
            uVar3 = 0x90;
            if (0x8f < uVar5) {
              uVar3 = uVar5;
            }
            __memset_chk((long)local_d8 + uVar5,0,0x90 - local_16c,uVar3 - uVar5);
          }
          local_168 = local_d8[0] ^ __LC0;
          uStack_160 = local_d8[1] ^ _UNK_00100988;
          local_158 = local_d8[2] ^ __LC0;
          uStack_150 = local_d8[3] ^ _UNK_00100988;
          local_148 = local_b8 ^ __LC0;
          uStack_140 = uStack_b0 ^ _UNK_00100988;
          local_138 = local_a8 ^ __LC0;
          uStack_130 = uStack_a0 ^ _UNK_00100988;
          local_128 = local_98 ^ __LC0;
          uStack_120 = uStack_90 ^ _UNK_00100988;
          local_118 = local_88 ^ __LC0;
          uStack_110 = uStack_80 ^ _UNK_00100988;
          local_108 = local_78 ^ __LC0;
          uStack_100 = uStack_70 ^ _UNK_00100988;
          local_f8 = local_68 ^ __LC0;
          uStack_f0 = uStack_60 ^ _UNK_00100988;
          local_e8 = __LC0 ^ local_58;
          uStack_e0 = _UNK_00100988 ^ uStack_50;
          iVar1 = EVP_DigestInit_ex((EVP_MD_CTX *)(ctx->md_ctx).engine,type,impl);
          if (iVar1 == 0) {
LAB_001001ad:
            uVar2 = 0;
          }
          else {
            iVar1 = EVP_MD_get_block_size(type);
            iVar1 = EVP_DigestUpdate((EVP_MD_CTX *)(ctx->md_ctx).engine,&local_168,(long)iVar1);
            if (iVar1 == 0) goto LAB_001001ad;
            local_168 = local_d8[0] ^ __LC1;
            uStack_160 = local_d8[1] ^ _UNK_00100998;
            local_158 = local_d8[2] ^ __LC1;
            uStack_150 = local_d8[3] ^ _UNK_00100998;
            local_148 = local_b8 ^ __LC1;
            uStack_140 = uStack_b0 ^ _UNK_00100998;
            local_138 = local_a8 ^ __LC1;
            uStack_130 = uStack_a0 ^ _UNK_00100998;
            local_128 = local_98 ^ __LC1;
            uStack_120 = uStack_90 ^ _UNK_00100998;
            local_118 = local_88 ^ __LC1;
            uStack_110 = uStack_80 ^ _UNK_00100998;
            local_108 = local_78 ^ __LC1;
            uStack_100 = uStack_70 ^ _UNK_00100998;
            local_f8 = local_68 ^ __LC1;
            uStack_f0 = uStack_60 ^ _UNK_00100998;
            local_e8 = __LC1 ^ local_58;
            uStack_e0 = _UNK_00100998 ^ uStack_50;
            iVar1 = EVP_DigestInit_ex((EVP_MD_CTX *)(ctx->md_ctx).flags,type,impl);
            if (iVar1 == 0) goto LAB_001001ad;
            iVar1 = EVP_MD_get_block_size(type);
            iVar1 = EVP_DigestUpdate((EVP_MD_CTX *)(ctx->md_ctx).flags,&local_168,(long)iVar1);
            if (iVar1 == 0) goto LAB_001001ad;
            iVar1 = EVP_MD_CTX_copy_ex((EVP_MD_CTX *)(ctx->md_ctx).digest,
                                       (EVP_MD_CTX *)(ctx->md_ctx).engine);
            uVar2 = (uint)(iVar1 != 0);
          }
          OPENSSL_cleanse(local_d8,0x90);
          OPENSSL_cleanse(&local_168,0x90);
          goto LAB_00100222;
        }
      }
    }
  }
  else {
    if (type == md) goto LAB_001001dd;
    if ((key != (void *)0x0) && (-1 < len)) {
      ctx->md = md;
      iVar1 = EVP_MD_xof(md);
      type = md;
      if (iVar1 != 0) goto LAB_00100220;
      goto LAB_00100071;
    }
  }
LAB_00100220:
  uVar2 = 0;
LAB_00100222:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



int HMAC_Update(HMAC_CTX *ctx,uchar *data,size_t len)

{
  int iVar1;
  
  if (ctx->md != (EVP_MD *)0x0) {
    iVar1 = EVP_DigestUpdate((EVP_MD_CTX *)(ctx->md_ctx).digest,data,len);
    return iVar1;
  }
  return 0;
}



int HMAC_Final(HMAC_CTX *ctx,uchar *md,uint *len)

{
  int iVar1;
  uint uVar2;
  long in_FS_OFFSET;
  uint local_7c;
  uchar local_78 [72];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (ctx->md != (EVP_MD *)0x0) {
    iVar1 = EVP_DigestFinal_ex((EVP_MD_CTX *)(ctx->md_ctx).digest,local_78,&local_7c);
    if (iVar1 != 0) {
      iVar1 = EVP_MD_CTX_copy_ex((EVP_MD_CTX *)(ctx->md_ctx).digest,
                                 (EVP_MD_CTX *)(ctx->md_ctx).flags);
      if (iVar1 != 0) {
        iVar1 = EVP_DigestUpdate((EVP_MD_CTX *)(ctx->md_ctx).digest,local_78,(ulong)local_7c);
        if (iVar1 != 0) {
          iVar1 = EVP_DigestFinal_ex((EVP_MD_CTX *)(ctx->md_ctx).digest,md,len);
          uVar2 = (uint)(iVar1 != 0);
          goto LAB_00100499;
        }
      }
    }
  }
  uVar2 = 0;
LAB_00100499:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



long HMAC_size(undefined8 *param_1)

{
  int iVar1;
  
  iVar1 = EVP_MD_get_size(*param_1);
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  return (long)iVar1;
}



void HMAC_CTX_free(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    EVP_MD_CTX_reset(param_1[2]);
    EVP_MD_CTX_reset(param_1[3]);
    EVP_MD_CTX_reset(param_1[1]);
    *param_1 = 0;
    EVP_MD_CTX_free(param_1[2]);
    EVP_MD_CTX_free(param_1[3]);
    EVP_MD_CTX_free(param_1[1]);
    CRYPTO_free(param_1);
    return;
  }
  return;
}



undefined8 HMAC_CTX_reset(undefined8 *param_1)

{
  long lVar1;
  
  EVP_MD_CTX_reset(param_1[2]);
  EVP_MD_CTX_reset(param_1[3]);
  EVP_MD_CTX_reset(param_1[1]);
  *param_1 = 0;
  if (param_1[2] == 0) {
    lVar1 = EVP_MD_CTX_new();
    param_1[2] = lVar1;
    if (lVar1 == 0) goto LAB_001005f1;
  }
  if (param_1[3] == 0) {
    lVar1 = EVP_MD_CTX_new();
    param_1[3] = lVar1;
    if (lVar1 != 0) goto LAB_001005c8;
  }
  else {
LAB_001005c8:
    if (param_1[1] != 0) {
      return 1;
    }
    lVar1 = EVP_MD_CTX_new();
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      return 1;
    }
  }
  lVar1 = param_1[2];
LAB_001005f1:
  EVP_MD_CTX_reset(lVar1);
  EVP_MD_CTX_reset(param_1[3]);
  EVP_MD_CTX_reset(param_1[1]);
  *param_1 = 0;
  return 0;
}



int HMAC_Init(HMAC_CTX *ctx,void *key,int len,EVP_MD *md)

{
  int iVar1;
  
  if ((key != (void *)0x0) && (md != (EVP_MD *)0x0)) {
    HMAC_CTX_reset();
    iVar1 = HMAC_Init_ex(ctx,key,len,md,(ENGINE *)0x0);
    return iVar1;
  }
  iVar1 = HMAC_Init_ex(ctx,key,len,md,(ENGINE *)0x0);
  return iVar1;
}



long HMAC_CTX_new(void)

{
  int iVar1;
  long lVar2;
  
  lVar2 = CRYPTO_zalloc(0x28,"crypto/hmac/hmac.c",0xa4);
  if (lVar2 != 0) {
    iVar1 = HMAC_CTX_reset(lVar2);
    if (iVar1 != 0) {
      return lVar2;
    }
    HMAC_CTX_free(lVar2);
  }
  return 0;
}



int HMAC_CTX_copy(HMAC_CTX *dctx,HMAC_CTX *sctx)

{
  int iVar1;
  HMAC_CTX *pHVar2;
  ulong uVar3;
  EVP_MD *pEVar4;
  
  pHVar2 = dctx;
  if ((dctx->md_ctx).engine == (ENGINE *)0x0) {
    pHVar2 = (HMAC_CTX *)EVP_MD_CTX_new();
    (dctx->md_ctx).engine = (ENGINE *)pHVar2;
    if (pHVar2 != (HMAC_CTX *)0x0) goto LAB_0010071b;
  }
  else {
LAB_0010071b:
    if ((dctx->md_ctx).flags == 0) {
      uVar3 = EVP_MD_CTX_new(pHVar2);
      (dctx->md_ctx).flags = uVar3;
      if (uVar3 != 0) goto LAB_00100726;
    }
    else {
LAB_00100726:
      if ((dctx->md_ctx).digest == (EVP_MD *)0x0) {
        pEVar4 = (EVP_MD *)EVP_MD_CTX_new();
        (dctx->md_ctx).digest = pEVar4;
        if (pEVar4 == (EVP_MD *)0x0) goto LAB_00100742;
      }
      iVar1 = EVP_MD_CTX_copy_ex((EVP_MD_CTX *)(dctx->md_ctx).engine,
                                 (EVP_MD_CTX *)(sctx->md_ctx).engine);
      if (((iVar1 != 0) &&
          (iVar1 = EVP_MD_CTX_copy_ex((EVP_MD_CTX *)(dctx->md_ctx).flags,
                                      (EVP_MD_CTX *)(sctx->md_ctx).flags), iVar1 != 0)) &&
         (iVar1 = EVP_MD_CTX_copy_ex((EVP_MD_CTX *)(dctx->md_ctx).digest,
                                     (EVP_MD_CTX *)(sctx->md_ctx).digest), iVar1 != 0)) {
        pEVar4 = sctx->md;
        iVar1 = 1;
        goto LAB_00100761;
      }
    }
LAB_00100742:
    pHVar2 = (HMAC_CTX *)(dctx->md_ctx).engine;
  }
  EVP_MD_CTX_reset(pHVar2);
  EVP_MD_CTX_reset((dctx->md_ctx).flags);
  EVP_MD_CTX_reset((dctx->md_ctx).digest);
  pEVar4 = (EVP_MD *)0x0;
  iVar1 = 0;
LAB_00100761:
  dctx->md = pEVar4;
  return iVar1;
}



uchar * HMAC(EVP_MD *evp_md,void *key,int key_len,uchar *d,size_t n,uchar *md,uint *md_len)

{
  int iVar1;
  undefined8 uVar2;
  uchar *puVar3;
  long in_FS_OFFSET;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = EVP_MD_get_size();
  puVar3 = (uchar *)0x0;
  local_48 = 0;
  if (0 < iVar1) {
    if (md == (uchar *)0x0) {
      md = static_md_0;
    }
    uVar2 = EVP_MD_get0_name(evp_md);
    puVar3 = (uchar *)EVP_Q_mac(0,&_LC3,0,uVar2,0,key,(long)key_len,d,n,md,(long)iVar1,&local_48);
    if (md_len != (uint *)0x0) {
      *md_len = (uint)local_48;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void HMAC_CTX_set_flags(HMAC_CTX *ctx,ulong flags)

{
  int flags_00;
  
  flags_00 = (int)flags;
  EVP_MD_CTX_set_flags((EVP_MD_CTX *)(ctx->md_ctx).engine,flags_00);
  EVP_MD_CTX_set_flags((EVP_MD_CTX *)(ctx->md_ctx).flags,flags_00);
  EVP_MD_CTX_set_flags((EVP_MD_CTX *)(ctx->md_ctx).digest,flags_00);
  return;
}



undefined8 HMAC_CTX_get_md(undefined8 *param_1)

{
  return *param_1;
}


