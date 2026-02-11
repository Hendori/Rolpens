
bool ssl3_mac(long param_1,long param_2,uchar *param_3,int param_4)

{
  void *d;
  EVP_MD_CTX *in;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  ulong uVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  EVP_MD_CTX *out;
  undefined8 uVar8;
  ulong uVar9;
  size_t cnt;
  ulong uVar10;
  long in_FS_OFFSET;
  bool bVar11;
  undefined1 local_a5;
  uint local_a4;
  ulong local_a0;
  undefined1 local_98 [48];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [32];
  long local_40;
  
  in = *(EVP_MD_CTX **)(param_1 + 0x1038);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar6 = EVP_MD_CTX_get_size_ex(in);
  if (0 < iVar6) {
    local_a0 = (ulong)iVar6;
    d = (void *)(param_1 + 0x1070);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = local_a0;
    cnt = 0x30 - SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x30)) % auVar3,0);
    if (param_4 == 0) {
      uVar7 = EVP_CIPHER_CTX_get0_cipher(*(undefined8 *)(param_1 + 0x1020));
      iVar6 = EVP_CIPHER_get_mode(uVar7);
      if ((iVar6 != 2) ||
         (cVar5 = ssl3_cbc_record_digest_supported(in), uVar4 = local_a0, cVar5 == '\0'))
      goto LAB_0010009d;
      __memcpy_chk(local_98,d,local_a0,0x4b);
      uVar9 = 0x4b;
      if (0x4a < uVar4) {
        uVar9 = uVar4;
      }
      __memcpy_chk(local_98 + uVar4,ssl3_pad_1,cnt,uVar9 - uVar4);
      uVar10 = cnt + uVar4;
      uVar9 = 0x4b;
      if (0x4a < uVar10) {
        uVar9 = uVar10;
      }
      __memcpy_chk(local_98 + uVar10,(void *)(param_1 + 0x1000),8,uVar9 - uVar10);
      uVar7 = *(undefined8 *)(param_2 + 8);
      uVar1 = *(undefined8 *)(param_2 + 0x10);
      auStack_60[uVar10 - 0x30] = (char)*(undefined4 *)(param_2 + 4);
      uVar2 = *(undefined8 *)(param_2 + 0x28);
      auStack_60[uVar10 - 0x2e] = (char)uVar7;
      auStack_60[uVar10 - 0x2f] = (char)((ulong)uVar7 >> 8);
      uVar8 = EVP_MD_CTX_get0_md(in);
      iVar6 = ssl3_cbc_digest_record(uVar8,param_3,&local_a0,local_98,uVar2,uVar7,uVar1,d,uVar4,1);
      if (iVar6 < 1) goto LAB_00100218;
LAB_001001f8:
      iVar6 = tls_increment_sequence_ctr(param_1);
      bVar11 = iVar6 != 0;
      goto LAB_0010021a;
    }
LAB_0010009d:
    out = (EVP_MD_CTX *)EVP_MD_CTX_new();
    if (out != (EVP_MD_CTX *)0x0) {
      local_a5 = (undefined1)*(undefined4 *)(param_2 + 4);
      *param_3 = (uchar)((ulong)*(undefined8 *)(param_2 + 8) >> 8);
      param_3[1] = (uchar)*(undefined8 *)(param_2 + 8);
      iVar6 = EVP_MD_CTX_copy_ex(out,in);
      if (((((0 < iVar6) && (iVar6 = EVP_DigestUpdate(out,d,local_a0), 0 < iVar6)) &&
           (iVar6 = EVP_DigestUpdate(out,ssl3_pad_1,cnt), 0 < iVar6)) &&
          (((iVar6 = EVP_DigestUpdate(out,(void *)(param_1 + 0x1000),8), 0 < iVar6 &&
            (iVar6 = EVP_DigestUpdate(out,&local_a5,1), 0 < iVar6)) &&
           ((iVar6 = EVP_DigestUpdate(out,param_3,2), 0 < iVar6 &&
            ((iVar6 = EVP_DigestUpdate(out,*(void **)(param_2 + 0x28),*(size_t *)(param_2 + 8)),
             0 < iVar6 && (iVar6 = EVP_DigestFinal_ex(out,param_3,(uint *)0x0), 0 < iVar6)))))))) &&
         ((iVar6 = EVP_MD_CTX_copy_ex(out,in), 0 < iVar6 &&
          ((((iVar6 = EVP_DigestUpdate(out,d,local_a0), 0 < iVar6 &&
             (iVar6 = EVP_DigestUpdate(out,
                                       "\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\"
                                       ,cnt), 0 < iVar6)) &&
            (iVar6 = EVP_DigestUpdate(out,param_3,local_a0), 0 < iVar6)) &&
           (iVar6 = EVP_DigestFinal_ex(out,param_3,&local_a4), 0 < iVar6)))))) {
        EVP_MD_CTX_free(out);
        goto LAB_001001f8;
      }
      EVP_MD_CTX_free(out);
    }
  }
LAB_00100218:
  bVar11 = false;
LAB_0010021a:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar11;
}



undefined8
ssl3_cipher(undefined8 *param_1,long param_2,long param_3,int param_4,long param_5,
           undefined8 param_6)

{
  EVP_CIPHER_CTX *ctx;
  ulong uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  uint inl;
  ulong uVar5;
  size_t __n;
  long in_FS_OFFSET;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  int local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_3 == 1) && (ctx = (EVP_CIPHER_CTX *)param_1[0x204], ctx != (EVP_CIPHER_CTX *)0x0)) {
    lVar3 = EVP_CIPHER_CTX_get0_cipher(ctx);
    if (lVar3 != 0) {
      lVar3 = EVP_CIPHER_get0_provider(lVar3);
      uVar1 = *(ulong *)(param_2 + 8);
      iVar2 = EVP_CIPHER_CTX_get_block_size(ctx);
      uVar5 = (ulong)iVar2;
      if (uVar5 != 0) {
        inl = (uint)uVar1;
        if (uVar5 == 1) {
          if (param_4 == 0) goto LAB_00100464;
LAB_0010047e:
          if (lVar3 == 0) {
            iVar2 = EVP_Cipher(ctx,*(uchar **)(param_2 + 0x20),*(uchar **)(param_2 + 0x28),inl);
            if (iVar2 < 1) goto LAB_00100627;
            if (param_4 == 0) {
              lVar3 = param_5 + 8;
              if (param_5 == 0) {
                lVar3 = 0;
              }
              uVar4 = ssl3_cbc_remove_padding_and_mac
                                (param_2 + 8,*(undefined8 *)(param_2 + 0x10),
                                 *(undefined8 *)(param_2 + 0x20),param_5,lVar3,uVar5,param_6,
                                 *param_1);
              goto LAB_00100390;
            }
          }
          else {
            iVar2 = EVP_CipherUpdate(ctx,*(uchar **)(param_2 + 0x20),&local_9c,
                                     *(uchar **)(param_2 + 0x28),inl);
            if (iVar2 == 0) goto LAB_0010038e;
            *(long *)(param_2 + 8) = (long)local_9c;
            if ((param_4 == 0) && (param_5 != 0)) {
              *(undefined4 *)(param_5 + 8) = 0;
              OSSL_PARAM_construct_octet_ptr(&local_d8,"tls-mac",param_5,param_6);
              local_78 = local_b8;
              local_98 = local_d8;
              uStack_90 = uStack_d0;
              local_88 = local_c8;
              uStack_80 = uStack_c0;
              OSSL_PARAM_construct_end(&local_d8);
              local_70 = local_d8;
              uStack_68 = uStack_d0;
              local_50 = local_b8;
              local_60 = local_c8;
              uStack_58 = uStack_c0;
              iVar2 = EVP_CIPHER_CTX_get_params(ctx,&local_98);
              if (iVar2 == 0) {
                ERR_new();
                ERR_set_debug("ssl/record/methods/ssl3_meth.c",0xaf,"ssl3_cipher");
                ossl_rlayer_fatal(param_1,0x50,0xc0103,0);
                goto LAB_0010038e;
              }
            }
          }
LAB_0010044c:
          uVar4 = 1;
          goto LAB_00100390;
        }
        if (param_4 == 0) {
LAB_00100464:
          if ((uVar1 == 0) || (uVar1 % uVar5 != 0)) goto LAB_0010038e;
          goto LAB_0010047e;
        }
        if (lVar3 != 0) {
          iVar2 = EVP_CipherUpdate(ctx,*(uchar **)(param_2 + 0x20),&local_9c,
                                   *(uchar **)(param_2 + 0x28),inl);
          if (iVar2 == 0) goto LAB_0010038e;
          *(long *)(param_2 + 8) = (long)local_9c;
          goto LAB_0010044c;
        }
        __n = uVar5 - uVar1 % uVar5;
        memset(*(uchar **)(param_2 + 0x28) + *(long *)(param_2 + 8),0,__n);
        *(long *)(param_2 + 8) = *(long *)(param_2 + 8) + __n;
        *(char *)(*(long *)(param_2 + 0x28) + -1 + uVar1 + __n) = (char)__n + -1;
        iVar2 = EVP_Cipher(ctx,*(uchar **)(param_2 + 0x20),*(uchar **)(param_2 + 0x28),
                           (uint)(uVar1 + __n));
        if (0 < iVar2) goto LAB_0010044c;
LAB_00100627:
        ERR_new();
        ERR_set_debug("ssl/record/methods/ssl3_meth.c",0xb6,"ssl3_cipher");
        ossl_rlayer_fatal(param_1,0x14,0xc0103,0);
      }
    }
  }
LAB_0010038e:
  uVar4 = 0;
LAB_00100390:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8
ssl3_set_crypto_state
          (long param_1,undefined8 param_2,uchar *param_3,undefined8 param_4,uchar *param_5,
          undefined8 param_6,void *param_7,ulong param_8,EVP_CIPHER *param_9,undefined8 param_10,
          undefined8 param_11,EVP_MD *param_12,COMP_METHOD *param_13)

{
  int iVar1;
  int iVar2;
  EVP_CIPHER_CTX *ctx;
  EVP_MD_CTX *ctx_00;
  COMP_CTX *pCVar3;
  undefined8 uVar4;
  long lVar5;
  
  iVar2 = *(int *)(param_1 + 0x1c);
  if (param_12 == (EVP_MD *)0x0) {
    ERR_new();
    uVar4 = 0x1f;
  }
  else {
    ctx = EVP_CIPHER_CTX_new();
    *(EVP_CIPHER_CTX **)(param_1 + 0x1020) = ctx;
    if (ctx == (EVP_CIPHER_CTX *)0x0) {
      ERR_new();
      uVar4 = 0x24;
    }
    else {
      ctx_00 = (EVP_MD_CTX *)EVP_MD_CTX_new();
      *(EVP_MD_CTX **)(param_1 + 0x1038) = ctx_00;
      if (ctx_00 == (EVP_MD_CTX *)0x0) {
        ERR_new();
        uVar4 = 0x2b;
      }
      else {
        iVar1 = EVP_DigestInit_ex(ctx_00,param_12,(ENGINE *)0x0);
        if (iVar1 < 1) {
          ERR_new();
          uVar4 = 0x30;
        }
        else {
          if (param_13 != (COMP_METHOD *)0x0) {
            pCVar3 = COMP_CTX_new(param_13);
            *(COMP_CTX **)(param_1 + 0x1040) = pCVar3;
            if (pCVar3 == (COMP_CTX *)0x0) {
              ERR_new();
              ERR_set_debug("ssl/record/methods/ssl3_meth.c",0x38,"ssl3_set_crypto_state");
              ERR_set_error(0x14,0x8e,0);
              return 0xfffffffe;
            }
          }
          iVar2 = EVP_CipherInit_ex(ctx,param_9,(ENGINE *)0x0,param_3,param_5,(uint)(iVar2 == 1));
          if (iVar2 == 0) {
            ERR_new();
            uVar4 = 0x3f;
          }
          else {
            uVar4 = EVP_CIPHER_CTX_get0_cipher(ctx);
            lVar5 = EVP_CIPHER_get0_provider(uVar4);
            if ((lVar5 != 0) &&
               (iVar2 = ossl_set_tls_provider_parameters(param_1,ctx,param_9,param_12), iVar2 == 0))
            {
              return 0xfffffffe;
            }
            if (param_8 < 0x41) {
              memcpy((void *)(param_1 + 0x1070),param_7,param_8);
              return 1;
            }
            ERR_new();
            uVar4 = 0x4e;
          }
        }
      }
    }
  }
  ERR_set_debug("ssl/record/methods/ssl3_meth.c",uVar4,"ssl3_set_crypto_state");
  ERR_set_error(0x14,0xc0103,0);
  return 0xfffffffe;
}


