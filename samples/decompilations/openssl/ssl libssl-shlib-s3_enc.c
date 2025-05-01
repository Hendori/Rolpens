
bool ssl3_change_cipher_state(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  
  lVar2 = *(long *)(param_1 + 0x378);
  uVar9 = *(undefined8 *)(param_1 + 0x370);
  if (lVar2 == 0) {
    ERR_new();
    uVar9 = 0x6c;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x390);
    lVar4 = *(long *)(param_1 + 0x368);
    iVar5 = EVP_MD_get_size(lVar2);
    if (iVar5 < 1) {
      ERR_new();
      uVar9 = 0x76;
    }
    else {
      lVar11 = (long)iVar5;
      iVar5 = EVP_CIPHER_get_key_length(uVar9);
      lVar7 = (long)iVar5;
      iVar5 = EVP_CIPHER_get_iv_length(uVar9);
      lVar1 = lVar11 * 2;
      lVar6 = (long)iVar5;
      if ((param_2 == 0x12) || (param_2 == 0x21)) {
        lVar8 = lVar1 + lVar7 * 2;
        lVar10 = lVar4;
        if ((ulong)(lVar8 + lVar6 * 2) <= *(ulong *)(param_1 + 0x360)) goto LAB_001000ab;
      }
      else {
        lVar1 = lVar1 + lVar7;
        lVar8 = lVar7 + lVar6 + lVar1;
        lVar10 = lVar4 + lVar11;
        if ((ulong)(lVar8 + lVar6) <= *(ulong *)(param_1 + 0x360)) {
LAB_001000ab:
          iVar5 = ssl_set_new_record_layer
                            (param_1,0x300,~param_2 & 1,3,0,0,lVar4 + lVar1,lVar7,lVar4 + lVar8,
                             lVar6,lVar10,lVar11,uVar9,0,0,lVar2,uVar3,0);
          return iVar5 != 0;
        }
      }
      ERR_new();
      uVar9 = 0x90;
    }
  }
  ERR_set_debug("ssl/s3_enc.c",uVar9,"ssl3_change_cipher_state");
  ossl_statem_fatal(param_1,0x50,0xc0103,0);
  return false;
}



void ssl3_cleanup_key_block(long param_1)

{
  CRYPTO_clear_free(*(undefined8 *)(param_1 + 0x368),*(undefined8 *)(param_1 + 0x360),"ssl/s3_enc.c"
                    ,0xd8);
  *(undefined8 *)(param_1 + 0x368) = 0;
  *(undefined8 *)(param_1 + 0x360) = 0;
  return;
}



undefined4 ssl3_setup_key_block(long param_1)

{
  undefined8 *puVar1;
  uint num;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  EVP_MD *type;
  EVP_MD *type_00;
  EVP_MD_CTX *ctx;
  EVP_MD_CTX *ctx_00;
  ulong uVar7;
  long *plVar8;
  uint uVar9;
  ulong uVar10;
  ulong cnt;
  undefined8 uVar11;
  uint uVar12;
  long in_FS_OFFSET;
  uchar *local_c0;
  uchar *local_a8;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  long local_68 [2];
  uchar local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = 1;
  if (*(long *)(param_1 + 0x360) == 0) {
    iVar2 = ssl_cipher_get_evp(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x900),
                               &local_80,&local_78,0,0);
    if (iVar2 == 0) {
      ossl_statem_send_fatal(param_1,0x50,&local_70,0);
    }
    else {
      ssl_evp_cipher_free(*(undefined8 *)(param_1 + 0x370));
      *(undefined8 *)(param_1 + 0x370) = local_80;
      ssl_evp_md_free(*(undefined8 *)(param_1 + 0x378));
      *(undefined8 *)(param_1 + 0x378) = local_78;
      *(undefined8 *)(param_1 + 0x390) = local_70;
      iVar2 = EVP_MD_get_size();
      if (0 < iVar2) {
        iVar3 = EVP_CIPHER_get_key_length(local_80);
        iVar4 = EVP_CIPHER_get_iv_length(local_80);
        ssl3_cleanup_key_block(param_1);
        num = (iVar2 + iVar3 + iVar4) * 2;
        local_a8 = (uchar *)CRYPTO_malloc(num,"ssl/s3_enc.c",200);
        if (local_a8 == (uchar *)0x0) {
          ERR_new();
          ERR_set_debug("ssl/s3_enc.c",0xc9,"ssl3_setup_key_block");
          ossl_statem_fatal(param_1,0x50,0x8000f,0);
          uVar6 = 0;
        }
        else {
          *(long *)(param_1 + 0x360) = (long)(int)num;
          puVar1 = *(undefined8 **)(param_1 + 8);
          *(uchar **)(param_1 + 0x368) = local_a8;
          type = (EVP_MD *)ssl_evp_md_fetch(*puVar1,4,puVar1[0x8e]);
          type_00 = (EVP_MD *)ssl_evp_md_fetch(*puVar1,0x40,puVar1[0x8e]);
          ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
          ctx_00 = (EVP_MD_CTX *)EVP_MD_CTX_new();
          if ((((type == (EVP_MD *)0x0) || (type_00 == (EVP_MD *)0x0)) || (ctx == (EVP_MD_CTX *)0x0)
              ) || (ctx_00 == (EVP_MD_CTX *)0x0)) {
            ERR_new();
            ERR_set_debug("ssl/s3_enc.c",0x27,"ssl3_generate_key_block");
            ossl_statem_fatal(param_1,0x50,0x80006,0);
            uVar6 = 0;
          }
          else if ((int)num < 1) {
LAB_00100520:
            local_c0 = local_58;
            OPENSSL_cleanse(local_c0,0x14);
            uVar6 = 1;
          }
          else {
            uVar10 = 0;
            do {
              cnt = uVar10 + 1;
              uVar12 = (int)uVar10 + 0x41;
              uVar9 = (uint)cnt;
              plVar8 = local_68;
              if (7 < uVar9) {
                uVar7 = 0;
                do {
                  uVar5 = (int)uVar7 + 8;
                  *(ulong *)((long)local_68 + uVar7) = (ulong)(uVar12 & 0xff) * 0x101010101010101;
                  uVar7 = (ulong)uVar5;
                } while (uVar5 < (uVar9 & 0xfffffff8));
                plVar8 = (long *)((long)local_68 + (ulong)uVar5);
              }
              if ((cnt & 7) != 0) {
                uVar5 = 0;
                do {
                  uVar7 = (ulong)uVar5;
                  uVar5 = uVar5 + 1;
                  *(char *)((long)plVar8 + uVar7) = (char)uVar12;
                } while (uVar5 < (uVar9 & 7));
              }
              iVar2 = EVP_DigestInit_ex(ctx_00,type_00,(ENGINE *)0x0);
              if (((iVar2 == 0) || (iVar2 = EVP_DigestUpdate(ctx_00,local_68,cnt), iVar2 == 0)) ||
                 ((iVar2 = EVP_DigestUpdate(ctx_00,(void *)(*(long *)(param_1 + 0x900) + 0x50),
                                            *(size_t *)(*(long *)(param_1 + 0x900) + 8)), iVar2 == 0
                  || ((iVar2 = EVP_DigestUpdate(ctx_00,(void *)(param_1 + 0x168),0x20), iVar2 == 0
                      || (iVar2 = EVP_DigestUpdate(ctx_00,(void *)(param_1 + 0x188),0x20),
                         iVar2 == 0)))))) {
LAB_00100650:
                ERR_new();
                uVar11 = 0x3f;
                goto LAB_00100661;
              }
              iVar2 = EVP_DigestFinal_ex(ctx_00,local_58,(uint *)0x0);
              if ((iVar2 == 0) ||
                 (((iVar2 = EVP_DigestInit_ex(ctx,type,(ENGINE *)0x0), iVar2 == 0 ||
                   (iVar2 = EVP_DigestUpdate(ctx,(void *)(*(long *)(param_1 + 0x900) + 0x50),
                                             *(size_t *)(*(long *)(param_1 + 0x900) + 8)),
                   iVar2 == 0)) || (iVar2 = EVP_DigestUpdate(ctx,local_58,0x14), iVar2 == 0))))
              goto LAB_00100650;
              if (uVar10 == num >> 4) {
                iVar2 = EVP_DigestFinal_ex(ctx,local_58,(uint *)0x0);
                if (iVar2 == 0) {
                  ERR_new();
                  uVar11 = 0x44;
                  goto LAB_00100661;
                }
                memcpy(local_a8,local_58,(ulong)(num + (int)uVar10 * -0x10));
                goto LAB_00100520;
              }
              iVar2 = EVP_DigestFinal_ex(ctx,local_a8,(uint *)0x0);
              if (iVar2 == 0) {
                ERR_new();
                uVar11 = 0x4a;
                goto LAB_00100661;
              }
              local_a8 = local_a8 + 0x10;
              if (uVar10 == num - 1 >> 4) goto LAB_00100520;
              uVar10 = cnt;
            } while (cnt != 0x10);
            ERR_new();
            uVar11 = 0x2e;
LAB_00100661:
            ERR_set_debug("ssl/s3_enc.c",uVar11,"ssl3_generate_key_block");
            ossl_statem_fatal(param_1,0x50,0xc0103,0);
            uVar6 = 0;
          }
          EVP_MD_CTX_free(ctx);
          EVP_MD_CTX_free(ctx_00);
          ssl_evp_md_free(type);
          ssl_evp_md_free(type_00);
        }
        goto LAB_00100209;
      }
    }
    uVar6 = 0;
  }
LAB_00100209:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}



void ssl3_free_digest_list(long param_1)

{
  BIO_free(*(BIO **)(param_1 + 0x1a8));
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  EVP_MD_CTX_free(*(undefined8 *)(param_1 + 0x1b0));
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  return;
}



undefined8 ssl3_init_finished_mac(long param_1)

{
  BIO_METHOD *type;
  BIO *bp;
  
  type = BIO_s_mem();
  bp = BIO_new(type);
  if (bp != (BIO *)0x0) {
    ssl3_free_digest_list(param_1);
    *(BIO **)(param_1 + 0x1a8) = bp;
    BIO_ctrl(bp,9,1,(void *)0x0);
    return 1;
  }
  ERR_new();
  ERR_set_debug("ssl/s3_enc.c",0xe2,"ssl3_init_finished_mac");
  ossl_statem_fatal(param_1,0x50,0x80020,0);
  return 0;
}



undefined8 ssl3_finish_mac(long param_1,void *param_2,size_t param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(EVP_MD_CTX **)(param_1 + 0x1b0) == (EVP_MD_CTX *)0x0) {
    if (0x7fffffff < param_3) {
      ERR_new();
      ERR_set_debug("ssl/s3_enc.c",0xff,"ssl3_finish_mac");
      ossl_statem_fatal(param_1,0x50,0xed,0);
      return 0;
    }
    iVar1 = BIO_write(*(BIO **)(param_1 + 0x1a8),param_2,(int)param_3);
    if ((0 < iVar1) && (iVar1 == (int)param_3)) {
      return 1;
    }
    ERR_new();
    uVar2 = 0x104;
  }
  else {
    iVar1 = EVP_DigestUpdate(*(EVP_MD_CTX **)(param_1 + 0x1b0),param_2,param_3);
    if (iVar1 != 0) {
      return 1;
    }
    ERR_new();
    uVar2 = 0x10a;
  }
  ERR_set_debug("ssl/s3_enc.c",uVar2,"ssl3_finish_mac");
  ossl_statem_fatal(param_1,0x50,0xc0103,0);
  return 0;
}



undefined8 ssl3_digest_cached_records(long param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  size_t cnt;
  long lVar3;
  EVP_MD *type;
  long in_FS_OFFSET;
  void *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(param_1 + 0x1b0) == 0) {
    cnt = BIO_ctrl(*(BIO **)(param_1 + 0x1a8),3,0,&local_28);
    if ((long)cnt < 1) {
      ERR_new();
      ERR_set_debug("ssl/s3_enc.c",0x11a,"ssl3_digest_cached_records");
      ossl_statem_fatal(param_1,0x50,0x14c,0);
      uVar2 = 0;
      goto LAB_00100904;
    }
    lVar3 = EVP_MD_CTX_new();
    *(long *)(param_1 + 0x1b0) = lVar3;
    if (lVar3 == 0) {
      ERR_new();
      ERR_set_debug("ssl/s3_enc.c",0x120,"ssl3_digest_cached_records");
      ossl_statem_fatal(param_1,0x50,0x80006,0);
      uVar2 = 0;
      goto LAB_00100904;
    }
    type = (EVP_MD *)ssl_handshake_md(param_1);
    if (type == (EVP_MD *)0x0) {
      ERR_new();
      ERR_set_debug("ssl/s3_enc.c",0x126,"ssl3_digest_cached_records");
      ossl_statem_fatal(param_1,0x50,0x129,0);
      uVar2 = 0;
      goto LAB_00100904;
    }
    iVar1 = EVP_DigestInit_ex(*(EVP_MD_CTX **)(param_1 + 0x1b0),type,(ENGINE *)0x0);
    if (iVar1 != 0) {
      iVar1 = EVP_DigestUpdate(*(EVP_MD_CTX **)(param_1 + 0x1b0),local_28,cnt);
      if (iVar1 != 0) goto LAB_001008fb;
    }
    ERR_new();
    ERR_set_debug("ssl/s3_enc.c",300,"ssl3_digest_cached_records");
    ossl_statem_fatal(param_1,0x50,0xc0103,0);
    uVar2 = 0;
  }
  else {
LAB_001008fb:
    if (param_2 == 0) {
      BIO_free(*(BIO **)(param_1 + 0x1a8));
      *(undefined8 *)(param_1 + 0x1a8) = 0;
    }
    uVar2 = 1;
  }
LAB_00100904:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ssl3_digest_master_key_set_params(long param_1,undefined8 *param_2)

{
  long in_FS_OFFSET;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  OSSL_PARAM_construct_octet_string(&local_58,"ssl3-ms",param_1 + 0x50,*(undefined8 *)(param_1 + 8))
  ;
  *param_2 = local_58;
  param_2[1] = uStack_50;
  param_2[2] = local_48;
  param_2[3] = uStack_40;
  param_2[4] = local_38;
  OSSL_PARAM_construct_end(&local_58);
  param_2[5] = local_58;
  param_2[6] = uStack_50;
  param_2[7] = local_48;
  param_2[8] = uStack_40;
  param_2[9] = local_38;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



long ssl3_final_finish_mac(long param_1,void *param_2,size_t param_3,uchar *param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  EVP_MD_CTX *out;
  long lVar4;
  long in_FS_OFFSET;
  undefined1 local_b8 [120];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ssl3_digest_cached_records(param_1,0);
  if (iVar1 != 0) {
    uVar3 = EVP_MD_CTX_get0_md(*(undefined8 *)(param_1 + 0x1b0));
    iVar1 = EVP_MD_get_type(uVar3);
    if (iVar1 == 0x72) {
      out = (EVP_MD_CTX *)EVP_MD_CTX_new();
      if (out != (EVP_MD_CTX *)0x0) {
        iVar1 = EVP_MD_CTX_copy_ex(out,*(EVP_MD_CTX **)(param_1 + 0x1b0));
        if (iVar1 == 0) {
          ERR_new();
          uVar3 = 0x158;
LAB_00100cc9:
          ERR_set_debug("ssl/s3_enc.c",uVar3,"ssl3_final_finish_mac");
          ossl_statem_fatal(param_1,0x50,0xc0103,0);
          lVar4 = 0;
        }
        else {
          iVar1 = EVP_MD_CTX_get_size_ex(out);
          if (iVar1 < 0) {
            ERR_new();
            uVar3 = 0x15f;
            goto LAB_00100cc9;
          }
          if (param_2 != (void *)0x0) {
            ssl3_digest_master_key_set_params(*(undefined8 *)(param_1 + 0x900),local_b8);
            iVar2 = EVP_DigestUpdate(out,param_2,param_3);
            if (0 < iVar2) {
              iVar2 = EVP_MD_CTX_set_params(out,local_b8);
              if (0 < iVar2) {
                iVar2 = EVP_DigestFinal_ex(out,param_4,(uint *)0x0);
                if (0 < iVar2) goto LAB_00100cb0;
              }
            }
            ERR_new();
            uVar3 = 0x16c;
            goto LAB_00100cc9;
          }
LAB_00100cb0:
          lVar4 = (long)iVar1;
        }
        EVP_MD_CTX_free(out);
        goto LAB_00100ba1;
      }
      ERR_new();
      ERR_set_debug("ssl/s3_enc.c",0x154,"ssl3_final_finish_mac");
      ossl_statem_fatal(param_1,0x50,0x80006,0);
    }
    else {
      ERR_new();
      ERR_set_debug("ssl/s3_enc.c",0x14e,"ssl3_final_finish_mac");
      ossl_statem_fatal(param_1,0x50,0x144,0);
    }
  }
  lVar4 = 0;
LAB_00100ba1:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8
ssl3_generate_master_secret(long param_1,uchar *param_2,void *param_3,size_t param_4,long *param_5)

{
  char *__s;
  int iVar1;
  EVP_MD_CTX *ctx;
  size_t cnt;
  undefined8 uVar2;
  undefined **ppuVar3;
  long lVar4;
  long in_FS_OFFSET;
  uint local_8c;
  uchar local_88 [72];
  long local_40;
  
  lVar4 = 0;
  ppuVar3 = &salt_0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
  if (ctx == (EVP_MD_CTX *)0x0) {
    ERR_new();
    ERR_set_debug("ssl/s3_enc.c",0x18d,"ssl3_generate_master_secret");
    ossl_statem_fatal(param_1,0x50,0x80006,0);
    uVar2 = 0;
  }
  else {
    do {
      iVar1 = EVP_DigestInit_ex(ctx,*(EVP_MD **)(*(long *)(param_1 + 8) + 0x108),(ENGINE *)0x0);
      if (iVar1 < 1) {
LAB_00100f70:
        ERR_new();
        ERR_set_debug("ssl/s3_enc.c",0x19e,"ssl3_generate_master_secret");
        ossl_statem_fatal(param_1,0x50,0xc0103,0);
        EVP_MD_CTX_free(ctx);
        OPENSSL_cleanse(local_88,0x40);
        uVar2 = 0;
        goto LAB_00100f41;
      }
      __s = *ppuVar3;
      cnt = strlen(__s);
      iVar1 = EVP_DigestUpdate(ctx,__s,cnt);
      if (iVar1 < 1) goto LAB_00100f70;
      iVar1 = EVP_DigestUpdate(ctx,param_3,param_4);
      if (iVar1 < 1) goto LAB_00100f70;
      iVar1 = EVP_DigestUpdate(ctx,(void *)(param_1 + 0x188),0x20);
      if (iVar1 < 1) goto LAB_00100f70;
      iVar1 = EVP_DigestUpdate(ctx,(void *)(param_1 + 0x168),0x20);
      if (iVar1 < 1) goto LAB_00100f70;
      iVar1 = EVP_DigestFinal_ex(ctx,local_88,&local_8c);
      if (iVar1 < 1) goto LAB_00100f70;
      iVar1 = EVP_DigestInit_ex(ctx,*(EVP_MD **)(*(long *)(param_1 + 8) + 0x100),(ENGINE *)0x0);
      if (iVar1 < 1) goto LAB_00100f70;
      iVar1 = EVP_DigestUpdate(ctx,param_3,param_4);
      if (iVar1 < 1) goto LAB_00100f70;
      iVar1 = EVP_DigestUpdate(ctx,local_88,(ulong)local_8c);
      if (iVar1 < 1) goto LAB_00100f70;
      iVar1 = EVP_DigestFinal_ex(ctx,param_2,&local_8c);
      if (iVar1 < 1) goto LAB_00100f70;
      ppuVar3 = ppuVar3 + 1;
      param_2 = param_2 + local_8c;
      lVar4 = lVar4 + (ulong)local_8c;
    } while ((NoteGnuProperty_4 *)ppuVar3 != &NoteGnuProperty_4_001011c8);
    EVP_MD_CTX_free(ctx);
    OPENSSL_cleanse(local_88,0x40);
    *param_5 = lVar4;
    uVar2 = 1;
  }
LAB_00100f41:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int ssl3_alert_code(uint param_1)

{
  int iVar1;
  
  iVar1 = -1;
  if (param_1 < 0x79) {
    iVar1 = (int)(char)CSWTCH_30[param_1];
  }
  return iVar1;
}


