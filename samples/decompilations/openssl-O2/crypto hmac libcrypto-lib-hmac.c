
bool hmac_ctx_alloc_mds(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    lVar1 = EVP_MD_CTX_new();
    *(long *)(param_1 + 0x10) = lVar1;
    if (lVar1 == 0) {
      return false;
    }
  }
  if (*(long *)(param_1 + 0x18) == 0) {
    lVar1 = EVP_MD_CTX_new();
    *(long *)(param_1 + 0x18) = lVar1;
    if (lVar1 == 0) {
      return false;
    }
  }
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 0) {
    lVar1 = EVP_MD_CTX_new();
    *(long *)(param_1 + 8) = lVar1;
  }
  return lVar1 != 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int HMAC_Init_ex(HMAC_CTX *ctx,void *key,int len,EVP_MD *md,ENGINE *impl)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  EVP_MD *type;
  ulong *puVar6;
  long in_FS_OFFSET;
  byte bVar7;
  uint local_16c;
  ulong local_168 [18];
  ulong local_d8 [19];
  long local_40;
  
  bVar7 = 0;
  type = ctx->md;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (md == (EVP_MD *)0x0) {
    if (type == (EVP_MD *)0x0) goto LAB_00100208;
LAB_001001c5:
    iVar1 = EVP_MD_xof(type);
    if (iVar1 == 0) {
      if (key == (void *)0x0) {
        iVar1 = EVP_MD_CTX_copy_ex((EVP_MD_CTX *)(ctx->md_ctx).digest,
                                   (EVP_MD_CTX *)(ctx->md_ctx).engine);
        uVar2 = (uint)(iVar1 != 0);
        goto LAB_0010020a;
      }
LAB_001000e1:
      uVar2 = EVP_MD_get_block_size(type);
      if (uVar2 < 0x91) {
        if ((int)uVar2 < len) {
          iVar1 = EVP_DigestInit_ex((EVP_MD_CTX *)(ctx->md_ctx).digest,type,impl);
          if (((iVar1 != 0) &&
              (iVar1 = EVP_DigestUpdate((EVP_MD_CTX *)(ctx->md_ctx).digest,key,(long)len),
              iVar1 != 0)) &&
             (iVar1 = EVP_DigestFinal_ex((EVP_MD_CTX *)(ctx->md_ctx).digest,(uchar *)local_d8,
                                         &local_16c), iVar1 != 0)) {
            uVar3 = (ulong)local_16c;
            goto LAB_00100147;
          }
        }
        else {
          uVar3 = (ulong)(uint)len;
          if ((uint)len < 0x91) {
            puVar6 = local_d8;
            if (7 < (uint)len) {
                    /* WARNING: Load size is inaccurate */
              for (uVar5 = (ulong)((uint)len >> 3); uVar5 != 0; uVar5 = uVar5 - 1) {
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
LAB_00100147:
            if ((int)uVar3 != 0x90) {
              uVar5 = 0x90;
              if (0x8f < uVar3) {
                uVar5 = uVar3;
              }
              __memset_chk((long)local_d8 + uVar3,0,0x90 - (int)uVar3,uVar5 - uVar3);
            }
            lVar4 = 0;
            do {
              uVar3 = *(ulong *)((long)local_d8 + lVar4 + 8);
              *(ulong *)((long)local_168 + lVar4) = *(ulong *)((long)local_d8 + lVar4) ^ __LC0;
              *(ulong *)((long)local_168 + lVar4 + 8) = uVar3 ^ _UNK_00100848;
              lVar4 = lVar4 + 0x10;
            } while (lVar4 != 0x90);
            iVar1 = EVP_DigestInit_ex((EVP_MD_CTX *)(ctx->md_ctx).engine,type,impl);
            if (iVar1 == 0) {
LAB_0010019a:
              uVar2 = 0;
            }
            else {
              iVar1 = EVP_MD_get_block_size(type);
              iVar1 = EVP_DigestUpdate((EVP_MD_CTX *)(ctx->md_ctx).engine,local_168,(long)iVar1);
              if (iVar1 == 0) goto LAB_0010019a;
              lVar4 = 0;
              do {
                uVar3 = *(ulong *)((long)local_d8 + lVar4 + 8);
                *(ulong *)((long)local_168 + lVar4) = *(ulong *)((long)local_d8 + lVar4) ^ __LC1;
                *(ulong *)((long)local_168 + lVar4 + 8) = uVar3 ^ _UNK_00100858;
                lVar4 = lVar4 + 0x10;
              } while (lVar4 != 0x90);
              iVar1 = EVP_DigestInit_ex((EVP_MD_CTX *)(ctx->md_ctx).flags,type,impl);
              if (iVar1 == 0) goto LAB_0010019a;
              iVar1 = EVP_MD_get_block_size(type);
              iVar1 = EVP_DigestUpdate((EVP_MD_CTX *)(ctx->md_ctx).flags,local_168,(long)iVar1);
              if (iVar1 == 0) goto LAB_0010019a;
              iVar1 = EVP_MD_CTX_copy_ex((EVP_MD_CTX *)(ctx->md_ctx).digest,
                                         (EVP_MD_CTX *)(ctx->md_ctx).engine);
              uVar2 = (uint)(iVar1 != 0);
            }
            OPENSSL_cleanse(local_d8,0x90);
            OPENSSL_cleanse(local_168,0x90);
            goto LAB_0010020a;
          }
        }
      }
    }
  }
  else {
    if (md == type) goto LAB_001001c5;
    if ((key != (void *)0x0) && (-1 < len)) {
      ctx->md = md;
      iVar1 = EVP_MD_xof(md);
      type = md;
      if (iVar1 != 0) goto LAB_00100208;
      goto LAB_001000e1;
    }
  }
LAB_00100208:
  uVar2 = 0;
LAB_0010020a:
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
          goto LAB_001003f9;
        }
      }
    }
  }
  uVar2 = 0;
LAB_001003f9:
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
  int iVar1;
  
  EVP_MD_CTX_reset(param_1[2]);
  EVP_MD_CTX_reset(param_1[3]);
  EVP_MD_CTX_reset(param_1[1]);
  *param_1 = 0;
  iVar1 = hmac_ctx_alloc_mds(param_1);
  if (iVar1 != 0) {
    return 1;
  }
  EVP_MD_CTX_reset(param_1[2]);
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
  EVP_MD *pEVar2;
  
  iVar1 = hmac_ctx_alloc_mds();
  if (iVar1 != 0) {
    iVar1 = EVP_MD_CTX_copy_ex((EVP_MD_CTX *)(dctx->md_ctx).engine,
                               (EVP_MD_CTX *)(sctx->md_ctx).engine);
    if (iVar1 != 0) {
      iVar1 = EVP_MD_CTX_copy_ex((EVP_MD_CTX *)(dctx->md_ctx).flags,
                                 (EVP_MD_CTX *)(sctx->md_ctx).flags);
      if (iVar1 != 0) {
        iVar1 = EVP_MD_CTX_copy_ex((EVP_MD_CTX *)(dctx->md_ctx).digest,
                                   (EVP_MD_CTX *)(sctx->md_ctx).digest);
        if (iVar1 != 0) {
          pEVar2 = sctx->md;
          iVar1 = 1;
          goto LAB_00100668;
        }
      }
    }
  }
  EVP_MD_CTX_reset((dctx->md_ctx).engine);
  EVP_MD_CTX_reset((dctx->md_ctx).flags);
  EVP_MD_CTX_reset((dctx->md_ctx).digest);
  pEVar2 = (EVP_MD *)0x0;
  iVar1 = 0;
LAB_00100668:
  dctx->md = pEVar2;
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


