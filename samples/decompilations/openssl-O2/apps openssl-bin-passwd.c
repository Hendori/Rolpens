
undefined1 * md5crypt(byte *param_1,char *param_2,undefined8 param_3)

{
  int iVar1;
  size_t cnt;
  size_t sVar2;
  size_t cnt_00;
  size_t sVar3;
  EVP_MD_CTX *ctx;
  EVP_MD *pEVar4;
  EVP_MD_CTX *ctx_00;
  undefined1 *puVar5;
  uint uVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  uint uVar12;
  long in_FS_OFFSET;
  undefined1 *local_90;
  uint local_7c;
  undefined1 local_76 [5];
  char local_71 [9];
  byte local_68 [5];
  byte local_63;
  byte local_5d;
  byte local_58 [14];
  byte local_4a [10];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  cnt = strlen((char *)param_1);
  out_buf_2[0] = 0;
  sVar2 = strlen(param_2);
  OPENSSL_strlcpy(local_76,param_2,5);
  OPENSSL_strlcpy(local_71,param_3,9);
  cnt_00 = strlen(local_71);
  if (sVar2 == 0) {
    OPENSSL_strlcat(out_buf_2,local_71,0x29);
    sVar3 = strlen(out_buf_2);
    local_90 = out_buf_2;
    if (0xe < sVar3) goto LAB_001003c2;
LAB_001000f5:
    ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
    if (ctx == (EVP_MD_CTX *)0x0) goto LAB_001003c2;
    pEVar4 = EVP_md5();
    iVar1 = EVP_DigestInit_ex(ctx,pEVar4,(ENGINE *)0x0);
    if ((((iVar1 == 0) || (iVar1 = EVP_DigestUpdate(ctx,param_1,cnt), iVar1 == 0)) ||
        ((sVar2 != 0 &&
         (((iVar1 = EVP_DigestUpdate(ctx,&ascii_dollar,1), iVar1 == 0 ||
           (iVar1 = EVP_DigestUpdate(ctx,local_76,sVar2), iVar1 == 0)) ||
          (iVar1 = EVP_DigestUpdate(ctx,&ascii_dollar,1), iVar1 == 0)))))) ||
       ((iVar1 = EVP_DigestUpdate(ctx,local_71,cnt_00), iVar1 == 0 ||
        (ctx_00 = (EVP_MD_CTX *)EVP_MD_CTX_new(), ctx_00 == (EVP_MD_CTX *)0x0)))) {
      ctx_00 = (EVP_MD_CTX *)0x0;
    }
    else {
      pEVar4 = EVP_md5();
      iVar1 = EVP_DigestInit_ex(ctx_00,pEVar4,(ENGINE *)0x0);
      if (((iVar1 != 0) && (iVar1 = EVP_DigestUpdate(ctx_00,param_1,cnt), iVar1 != 0)) &&
         ((iVar1 = EVP_DigestUpdate(ctx_00,local_71,cnt_00), iVar1 != 0 &&
          (iVar1 = EVP_DigestUpdate(ctx_00,param_1,cnt), iVar1 != 0)))) {
        iVar1 = EVP_DigestFinal_ex(ctx_00,local_68,(uint *)0x0);
        if (iVar1 != 0) {
          uVar6 = (uint)cnt;
          uVar7 = cnt;
          uVar12 = uVar6;
          while (0x10 < uVar12) {
            iVar1 = EVP_DigestUpdate(ctx,local_68,0x10);
            if (iVar1 == 0) goto LAB_001003d2;
            uVar12 = (int)uVar7 - 0x10;
            uVar7 = (ulong)uVar12;
          }
          iVar1 = EVP_DigestUpdate(ctx,local_68,uVar7 & 0xffffffff);
          if (iVar1 != 0) {
            uVar7 = cnt & 0xffffffff;
            while (uVar6 != 0) {
              pbVar8 = &DAT_00101fc0;
              if ((uVar7 & 1) == 0) {
                pbVar8 = param_1;
              }
              iVar1 = EVP_DigestUpdate(ctx,pbVar8,1);
              if (iVar1 == 0) goto LAB_001003d2;
              uVar6 = (int)uVar7 >> 1;
              uVar7 = (ulong)uVar6;
            }
            iVar1 = EVP_DigestFinal_ex(ctx,local_68,(uint *)0x0);
            if (iVar1 != 0) {
              local_7c = 0;
              do {
                pEVar4 = EVP_md5();
                iVar1 = EVP_DigestInit_ex(ctx_00,pEVar4,(ENGINE *)0x0);
                if (iVar1 == 0) goto LAB_001003d2;
                sVar2 = cnt;
                pbVar8 = param_1;
                if ((local_7c & 1) == 0) {
                  sVar2 = 0x10;
                  pbVar8 = local_68;
                }
                iVar1 = EVP_DigestUpdate(ctx_00,pbVar8,sVar2);
                if (((iVar1 == 0) ||
                    ((0x55555555 < local_7c * -0x55555555 &&
                     (iVar1 = EVP_DigestUpdate(ctx_00,local_71,cnt_00), iVar1 == 0)))) ||
                   ((0x24924924 < local_7c * -0x49249249 &&
                    (iVar1 = EVP_DigestUpdate(ctx_00,param_1,cnt), iVar1 == 0)))) goto LAB_001003d2;
                sVar2 = cnt;
                pbVar8 = param_1;
                if ((local_7c & 1) != 0) {
                  sVar2 = 0x10;
                  pbVar8 = local_68;
                }
                iVar1 = EVP_DigestUpdate(ctx_00,pbVar8,sVar2);
                if ((iVar1 == 0) ||
                   (iVar1 = EVP_DigestFinal_ex(ctx_00,local_68,(uint *)0x0), iVar1 == 0))
                goto LAB_001003d2;
                local_7c = local_7c + 1;
              } while (local_7c != 1000);
              EVP_MD_CTX_free(ctx_00);
              EVP_MD_CTX_free(ctx);
              uVar6 = 0;
              pbVar8 = local_58;
              do {
                pbVar9 = pbVar8 + 1;
                *pbVar8 = local_68[(int)uVar6];
                uVar6 = (uVar6 + 6) % 0x11;
                pbVar8 = pbVar9;
              } while (pbVar9 != local_4a);
              local_90 = local_90 + cnt_00;
              local_4a[0] = local_63;
              *local_90 = 0x24;
              pbVar8 = local_58;
              puVar10 = (undefined4 *)(local_90 + 1);
              do {
                puVar11 = puVar10 + 1;
                *puVar10 = CONCAT31(CONCAT21(CONCAT11(
                                                  "./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzapps/passwd.c"
                                                  [*pbVar8 >> 2],
                                                  "./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzapps/passwd.c"
                                                  [(int)((*pbVar8 & 3) << 4 | (uint)(pbVar8[1] >> 4)
                                                        )]),
                                             "./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzapps/passwd.c"
                                             [(int)((uint)pbVar8[1] * 4 & 0x3c |
                                                   (uint)(pbVar8[2] >> 6))]),
                                    "./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzapps/passwd.c"
                                    [pbVar8[2] & 0x3f]);
                pbVar8 = pbVar8 + 3;
                puVar10 = puVar11;
              } while (puVar11 != (undefined4 *)(local_90 + 0x15));
              local_90[0x17] = 0;
              puVar5 = out_buf_2;
              *(ushort *)(local_90 + 0x15) =
                   CONCAT11("./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzapps/passwd.c"
                            [local_5d >> 6],
                            "./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzapps/passwd.c"
                            [local_5d & 0x3f]);
              goto LAB_001003f7;
            }
          }
        }
      }
    }
  }
  else {
    OPENSSL_strlcat(out_buf_2,&ascii_dollar,0x29);
    if (sVar2 < 5) {
      OPENSSL_strlcat(out_buf_2,local_76,0x29);
      OPENSSL_strlcat(out_buf_2,&ascii_dollar,0x29);
      OPENSSL_strlcat(out_buf_2,local_71,0x29);
      sVar3 = strlen(out_buf_2);
      if (sVar3 < 0xf) {
        local_90 = (undefined1 *)(sVar2 + 0x101f82);
        goto LAB_001000f5;
      }
    }
LAB_001003c2:
    ctx_00 = (EVP_MD_CTX *)0x0;
    ctx = (EVP_MD_CTX *)0x0;
  }
LAB_001003d2:
  CRYPTO_free((void *)0x0);
  EVP_MD_CTX_free(ctx_00);
  EVP_MD_CTX_free(ctx);
  puVar5 = (undefined1 *)0x0;
LAB_001003f7:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
do_passwd_constprop_0
          (int param_1,long *param_2,long *param_3,byte *param_4,BIO *param_5,int param_6,
          uint param_7,uint param_8,int param_9)

{
  char cVar1;
  char *__s1;
  int iVar2;
  long lVar3;
  size_t sVar4;
  size_t sVar5;
  EVP_MD_CTX *ctx;
  EVP_MD_CTX *ctx_00;
  undefined8 uVar6;
  uchar *puVar7;
  byte *pbVar8;
  byte *pbVar9;
  ulong uVar10;
  uint uVar11;
  size_t cnt;
  undefined1 *puVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  uchar *puVar15;
  long lVar16;
  ulong uVar17;
  ulong cnt_00;
  long in_FS_OFFSET;
  byte bVar18;
  char *local_168;
  EVP_MD *local_158;
  size_t local_150;
  uchar *local_148;
  ulong local_140;
  byte *local_138;
  long local_120;
  char *local_108;
  undefined1 local_fa [2];
  char local_f8 [32];
  byte local_d8;
  byte local_d7;
  byte local_d6;
  byte local_d5;
  byte local_d4;
  byte local_d3;
  byte local_d2;
  byte local_d1;
  byte local_d0;
  byte local_cf;
  byte local_ce;
  byte local_cd;
  byte local_cc;
  byte local_cb;
  byte local_ca;
  byte local_c9;
  byte local_c8;
  byte local_c7;
  byte local_c6;
  byte local_c5;
  byte local_c4;
  byte local_c3;
  byte local_c2;
  byte local_c1;
  byte local_c0;
  byte local_bf;
  byte local_be;
  byte local_bd;
  byte local_bc;
  byte local_bb;
  undefined2 local_ba;
  byte local_b8;
  byte local_b7;
  byte local_b6;
  byte local_b5;
  byte local_b4;
  byte local_b3;
  byte local_b2;
  byte local_b1;
  byte local_b0;
  byte local_af;
  byte local_ae;
  byte local_ad;
  byte local_ac;
  byte local_ab;
  byte local_aa;
  byte local_a9;
  byte local_a8;
  byte local_a7;
  byte local_a6;
  byte local_a5;
  byte local_a4;
  byte local_a3;
  byte local_a2;
  byte local_a1;
  byte local_a0 [4];
  byte local_9c;
  byte local_9b;
  byte local_9a;
  byte local_99;
  undefined8 local_98 [11];
  long local_40;
  
  bVar18 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) {
    if ((param_9 - 1U < 2) || (param_9 == 5)) {
      lVar16 = 8;
    }
    else {
      lVar16 = (ulong)(param_9 - 3U < 2) << 4;
    }
    if (*param_3 == 0) {
      puVar7 = (uchar *)app_malloc(lVar16 + 1,"salt buffer");
      *param_3 = (long)puVar7;
      *param_2 = (long)puVar7;
    }
    else {
      puVar7 = (uchar *)*param_2;
    }
    iVar2 = RAND_bytes(puVar7,(int)lVar16);
    uVar6 = 0;
    if (iVar2 < 1) goto LAB_001009f0;
    if (lVar16 != 0) {
      lVar3 = 0;
      do {
        pbVar9 = (byte *)(*param_2 + lVar3);
        lVar3 = lVar3 + 1;
        *pbVar9 = "./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzapps/passwd.c"
                  [*pbVar9 & 0x3f];
      } while (lVar16 != lVar3);
    }
    *(undefined1 *)(*param_2 + lVar16) = 0;
  }
  sVar4 = strlen((char *)param_4);
  if (0x100 < sVar4) {
    if (param_6 == 0) {
      BIO_printf(_bio_err,"Warning: truncating password to %u characters\n",0x100);
    }
    param_4[0x100] = 0;
  }
  if (param_9 - 1U < 2) {
    puVar13 = &_LC3;
    if (param_9 == 1) {
      puVar13 = &_LC2;
    }
    puVar12 = (undefined1 *)md5crypt(param_4,puVar13,*param_2);
  }
  else if (param_9 == 5) {
    puVar12 = (undefined1 *)md5crypt(param_4,&_LC8,*param_2);
  }
  else {
    if (param_9 - 3U < 2) {
      __s1 = (char *)*param_2;
      sVar4 = strlen((char *)param_4);
      if (param_9 == 3) {
        local_158 = EVP_sha256();
        cnt_00 = 0x20;
        local_168 = "5";
      }
      else {
        local_158 = EVP_sha512();
        cnt_00 = 0x40;
        local_168 = "6";
      }
      iVar2 = strncmp(__s1,"rounds=",7);
      if (iVar2 == 0) {
        uVar17 = strtoul(__s1 + 7,&local_108,10);
        if (*local_108 != '$') goto LAB_0010097b;
        local_140 = 999999999;
        if (uVar17 < 1000000000) {
          uVar11 = 1000;
          if (999 < uVar17) {
            uVar11 = (uint)uVar17;
          }
          local_140 = (ulong)uVar11;
        }
        OPENSSL_strlcpy(local_fa,local_168,2);
        OPENSSL_strlcpy(local_f8,local_108 + 1,0x11);
        local_150 = strlen(local_f8);
        out_buf_0[0] = 0;
        OPENSSL_strlcat(out_buf_0,&ascii_dollar,0x7c);
        OPENSSL_strlcat(out_buf_0,local_fa,0x7c);
        OPENSSL_strlcat(out_buf_0,&ascii_dollar,0x7c);
        BIO_snprintf((char *)local_98,0x50,"rounds=%u",local_140);
        OPENSSL_strlcat(out_buf_0,local_98,0x7c);
        OPENSSL_strlcat(out_buf_0,&ascii_dollar,0x7c);
        lVar16 = 0x14;
      }
      else {
        OPENSSL_strlcpy(local_fa,local_168,2);
        OPENSSL_strlcpy(local_f8,__s1,0x11);
        local_150 = strlen(local_f8);
        out_buf_0[0] = 0;
        OPENSSL_strlcat(out_buf_0,&ascii_dollar,0x7c);
        OPENSSL_strlcat(out_buf_0,local_fa,0x7c);
        OPENSSL_strlcat(out_buf_0,&ascii_dollar,0x7c);
        local_140 = 5000;
        lVar16 = 3;
      }
      local_148 = (uchar *)local_f8;
      OPENSSL_strlcat(out_buf_0,local_148,0x7c);
      sVar5 = strlen(out_buf_0);
      if ((lVar16 + local_150 < sVar5) ||
         (ctx = (EVP_MD_CTX *)EVP_MD_CTX_new(), ctx == (EVP_MD_CTX *)0x0)) {
LAB_00100c17:
        ctx_00 = (EVP_MD_CTX *)0x0;
        ctx = (EVP_MD_CTX *)0x0;
        local_148 = (uchar *)0x0;
        local_138 = (byte *)0x0;
      }
      else {
        iVar2 = EVP_DigestInit_ex(ctx,local_158,(ENGINE *)0x0);
        if ((iVar2 == 0) ||
           ((iVar2 = EVP_DigestUpdate(ctx,param_4,sVar4), iVar2 == 0 ||
            (iVar2 = EVP_DigestUpdate(ctx,local_148,local_150), iVar2 == 0)))) {
          local_148 = (uchar *)0x0;
          ctx_00 = (EVP_MD_CTX *)0x0;
          local_138 = (byte *)0x0;
        }
        else {
          ctx_00 = (EVP_MD_CTX *)EVP_MD_CTX_new();
          if (ctx_00 != (EVP_MD_CTX *)0x0) {
            iVar2 = EVP_DigestInit_ex(ctx_00,local_158,(ENGINE *)0x0);
            if (iVar2 == 0) {
LAB_00100c78:
              local_148 = (uchar *)0x0;
              local_138 = (byte *)0x0;
              goto LAB_00100938;
            }
            iVar2 = EVP_DigestUpdate(ctx_00,param_4,sVar4);
            if (((iVar2 != 0) && (iVar2 = EVP_DigestUpdate(ctx_00,local_148,local_150), iVar2 != 0))
               && (iVar2 = EVP_DigestUpdate(ctx_00,param_4,sVar4), iVar2 != 0)) {
              iVar2 = EVP_DigestFinal_ex(ctx_00,&local_d8,(uint *)0x0);
              if (iVar2 != 0) {
                uVar17 = sVar4;
                sVar5 = sVar4;
                if (cnt_00 < sVar4) {
                  do {
                    iVar2 = EVP_DigestUpdate(ctx,&local_d8,cnt_00);
                    if (iVar2 == 0) goto LAB_0010091b;
                    uVar17 = uVar17 - cnt_00;
                  } while (cnt_00 < uVar17);
                  iVar2 = EVP_DigestUpdate(ctx,&local_d8,uVar17);
                  if (iVar2 != 0) {
                    do {
                      cnt = cnt_00;
                      pbVar9 = &local_d8;
                      if ((sVar5 & 1) == 0) {
                        cnt = sVar4;
                        pbVar9 = param_4;
                      }
                      iVar2 = EVP_DigestUpdate(ctx,pbVar9,cnt);
                      if (iVar2 == 0) goto LAB_00100c78;
                      sVar5 = sVar5 >> 1;
joined_r0x00100f1a:
                    } while (sVar5 != 0);
                    iVar2 = EVP_DigestFinal_ex(ctx,&local_d8,(uint *)0x0);
                    if ((iVar2 != 0) &&
                       (iVar2 = EVP_DigestInit_ex(ctx_00,local_158,(ENGINE *)0x0), sVar5 = sVar4,
                       iVar2 != 0)) {
                      for (; sVar5 != 0; sVar5 = sVar5 - 1) {
                        iVar2 = EVP_DigestUpdate(ctx_00,param_4,sVar4);
                        if (iVar2 == 0) goto LAB_00100c78;
                      }
                      iVar2 = EVP_DigestFinal_ex(ctx_00,(uchar *)local_98,(uint *)0x0);
                      if ((iVar2 != 0) &&
                         (local_138 = (byte *)CRYPTO_zalloc(sVar4,"apps/passwd.c",0x28c),
                         local_138 != (byte *)0x0)) {
                        pbVar9 = local_138;
                        uVar17 = sVar4;
                        if (cnt_00 < sVar4) {
                          pbVar8 = local_138;
                          do {
                            uVar17 = uVar17 - cnt_00;
                            *(undefined8 *)pbVar8 = local_98[0];
                            *(undefined8 *)(pbVar8 + (cnt_00 - 8)) =
                                 *(undefined8 *)(local_a0 + cnt_00);
                            lVar16 = (long)pbVar8 - (long)((ulong)(pbVar8 + 8) & 0xfffffffffffffff8)
                            ;
                            puVar7 = (uchar *)((long)local_98 + -lVar16);
                            puVar14 = (undefined8 *)((ulong)(pbVar8 + 8) & 0xfffffffffffffff8);
                            for (uVar10 = (ulong)((uint)((int)lVar16 + (int)cnt_00) >> 3);
                                uVar10 != 0; uVar10 = uVar10 - 1) {
                              *puVar14 = *(undefined8 *)puVar7;
                              puVar7 = puVar7 + ((ulong)bVar18 * -2 + 1) * 8;
                              puVar14 = puVar14 + (ulong)bVar18 * -2 + 1;
                            }
                            pbVar9 = pbVar8 + cnt_00;
                            pbVar8 = pbVar8 + cnt_00;
                          } while (cnt_00 < uVar17);
                        }
                        memcpy(pbVar9,local_98,uVar17);
                        iVar2 = EVP_DigestInit_ex(ctx_00,local_158,(ENGINE *)0x0);
                        if (iVar2 != 0) {
                          local_120 = (ulong)local_d8 + 0x10;
                          do {
                            iVar2 = EVP_DigestUpdate(ctx_00,local_148,local_150);
                            if (iVar2 == 0) goto LAB_00100ee9;
                            local_120 = local_120 + -1;
                          } while (local_120 != 0);
                          iVar2 = EVP_DigestFinal_ex(ctx_00,(uchar *)local_98,(uint *)0x0);
                          if ((iVar2 != 0) &&
                             (local_148 = (uchar *)CRYPTO_zalloc(local_150,"apps/passwd.c",0x29d),
                             local_148 != (uchar *)0x0)) {
                            puVar7 = (uchar *)local_98;
                            puVar15 = local_148;
                            for (uVar17 = local_150 & 0xffffffff; uVar17 != 0; uVar17 = uVar17 - 1)
                            {
                              *puVar15 = *puVar7;
                              puVar7 = puVar7 + (ulong)bVar18 * -2 + 1;
                              puVar15 = puVar15 + (ulong)bVar18 * -2 + 1;
                            }
                            uVar17 = 0;
                            do {
                              iVar2 = EVP_DigestInit_ex(ctx_00,local_158,(ENGINE *)0x0);
                              if (iVar2 == 0) goto LAB_00100938;
                              sVar5 = cnt_00;
                              pbVar9 = &local_d8;
                              if ((uVar17 & 1) != 0) {
                                sVar5 = sVar4;
                                pbVar9 = local_138;
                              }
                              iVar2 = EVP_DigestUpdate(ctx_00,pbVar9,sVar5);
                              if (((iVar2 == 0) ||
                                  ((uVar17 % 3 != 0 &&
                                   (iVar2 = EVP_DigestUpdate(ctx_00,local_148,local_150), iVar2 == 0
                                   )))) || ((uVar17 % 7 != 0 &&
                                            (iVar2 = EVP_DigestUpdate(ctx_00,local_138,sVar4),
                                            iVar2 == 0)))) goto LAB_00100938;
                              uVar10 = sVar4;
                              pbVar9 = local_138;
                              if ((uVar17 & 1) != 0) {
                                uVar10 = cnt_00;
                                pbVar9 = &local_d8;
                              }
                              iVar2 = EVP_DigestUpdate(ctx_00,pbVar9,uVar10);
                              if ((iVar2 == 0) ||
                                 (iVar2 = EVP_DigestFinal_ex(ctx_00,&local_d8,(uint *)0x0),
                                 iVar2 == 0)) goto LAB_00100938;
                              uVar17 = uVar17 + 1;
                            } while (uVar17 < local_140);
                            EVP_MD_CTX_free(ctx_00);
                            EVP_MD_CTX_free(ctx);
                            CRYPTO_free(local_138);
                            CRYPTO_free(local_148);
                            sVar4 = strlen(out_buf_0);
                            cVar1 = *local_168;
                            out_buf_0[sVar4] = 0x24;
                            if (cVar1 == '5') {
                              lVar16 = 0;
                              uVar11 = (uint)local_d8 << 0x10 | (uint)local_ce << 8 | (uint)local_c4
                              ;
                              do {
                                *(char *)(sVar4 + 0x101f01 + lVar16) =
                                     "./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzapps/passwd.c"
                                     [uVar11 & 0x3f];
                                lVar16 = lVar16 + 1;
                                uVar11 = uVar11 >> 6;
                              } while (lVar16 != 4);
                              lVar16 = 0;
                              uVar11 = (uint)local_c3 << 0x10 | (uint)local_d7 << 8 | (uint)local_cd
                              ;
                              do {
                                *(char *)(sVar4 + 0x101f05 + lVar16) =
                                     "./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzapps/passwd.c"
                                     [uVar11 & 0x3f];
                                lVar16 = lVar16 + 1;
                                uVar11 = uVar11 >> 6;
                              } while (lVar16 != 4);
                              lVar16 = 0;
                              uVar11 = (uint)local_cc << 0x10 | (uint)local_c2 << 8 | (uint)local_d6
                              ;
                              do {
                                *(char *)(sVar4 + 0x101f09 + lVar16) =
                                     "./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzapps/passwd.c"
                                     [uVar11 & 0x3f];
                                lVar16 = lVar16 + 1;
                                uVar11 = uVar11 >> 6;
                              } while (lVar16 != 4);
                              lVar16 = 0;
                              uVar11 = (uint)local_d5 << 0x10 | (uint)local_cb << 8 | (uint)local_c1
                              ;
                              do {
                                *(char *)(sVar4 + 0x101f0d + lVar16) =
                                     "./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzapps/passwd.c"
                                     [uVar11 & 0x3f];
                                lVar16 = lVar16 + 1;
                                uVar11 = uVar11 >> 6;
                              } while (lVar16 != 4);
                              lVar16 = 0;
                              uVar11 = (uint)local_c0 << 0x10 | (uint)local_d4 << 8 | (uint)local_ca
                              ;
                              do {
                                *(char *)(sVar4 + 0x101f11 + lVar16) =
                                     "./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzapps/passwd.c"
                                     [uVar11 & 0x3f];
                                lVar16 = lVar16 + 1;
                                uVar11 = uVar11 >> 6;
                              } while (lVar16 != 4);
                              lVar16 = 0;
                              uVar11 = (uint)local_c9 << 0x10 | (uint)local_bf << 8 | (uint)local_d3
                              ;
                              do {
                                *(char *)(sVar4 + 0x101f15 + lVar16) =
                                     "./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzapps/passwd.c"
                                     [uVar11 & 0x3f];
                                lVar16 = lVar16 + 1;
                                uVar11 = uVar11 >> 6;
                              } while (lVar16 != 4);
                              lVar16 = 0;
                              uVar11 = (uint)local_d2 << 0x10 | (uint)local_c8 << 8 | (uint)local_be
                              ;
                              do {
                                *(char *)(sVar4 + 0x101f19 + lVar16) =
                                     "./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzapps/passwd.c"
                                     [uVar11 & 0x3f];
                                lVar16 = lVar16 + 1;
                                uVar11 = uVar11 >> 6;
                              } while (lVar16 != 4);
                              lVar16 = 0;
                              uVar11 = (uint)local_bd << 0x10 | (uint)local_d1 << 8 | (uint)local_c7
                              ;
                              do {
                                *(char *)(sVar4 + 0x101f1d + lVar16) =
                                     "./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzapps/passwd.c"
                                     [uVar11 & 0x3f];
                                lVar16 = lVar16 + 1;
                                uVar11 = uVar11 >> 6;
                              } while (lVar16 != 4);
                              lVar16 = 0;
                              uVar11 = (uint)local_c6 << 0x10 | (uint)local_bc << 8 | (uint)local_d0
                              ;
                              do {
                                *(char *)(sVar4 + 0x101f21 + lVar16) =
                                     "./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzapps/passwd.c"
                                     [uVar11 & 0x3f];
                                lVar16 = lVar16 + 1;
                                uVar11 = uVar11 >> 6;
                              } while (lVar16 != 4);
                              lVar16 = 0;
                              uVar11 = (uint)local_cf << 0x10 | (uint)local_c5 << 8 | (uint)local_bb
                              ;
                              do {
                                *(char *)(sVar4 + 0x101f25 + lVar16) =
                                     "./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzapps/passwd.c"
                                     [uVar11 & 0x3f];
                                lVar16 = lVar16 + 1;
                                uVar11 = uVar11 >> 6;
                              } while (lVar16 != 4);
                              lVar16 = 0;
                              uVar11 = (uint)local_ba;
                              do {
                                *(char *)(sVar4 + 0x101f29 + lVar16) =
                                     "./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzapps/passwd.c"
                                     [uVar11 & 0x3f];
                                lVar16 = lVar16 + 1;
                                uVar11 = uVar11 >> 6;
                              } while (lVar16 != 3);
                              puVar12 = out_buf_0 + sVar4 + 0x2c;
                            }
                            else {
                              if (cVar1 != '6') goto LAB_00100c17;
                              lVar16 = 0;
                              uVar11 = (uint)local_d8 << 0x10 | (uint)local_c3 << 8 | (uint)local_ae
                              ;
                              do {
                                *(char *)(sVar4 + 0x101f01 + lVar16) =
                                     "./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzapps/passwd.c"
                                     [uVar11 & 0x3f];
                                lVar16 = lVar16 + 1;
                                uVar11 = uVar11 >> 6;
                              } while (lVar16 != 4);
                              lVar16 = 0;
                              uVar11 = (uint)local_c2 << 0x10 | (uint)local_ad << 8 | (uint)local_d7
                              ;
                              do {
                                *(char *)(sVar4 + 0x101f05 + lVar16) =
                                     "./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzapps/passwd.c"
                                     [uVar11 & 0x3f];
                                lVar16 = lVar16 + 1;
                                uVar11 = uVar11 >> 6;
                              } while (lVar16 != 4);
                              lVar16 = 0;
                              uVar11 = (uint)local_ac << 0x10 | (uint)local_d6 << 8 | (uint)local_c1
                              ;
                              do {
                                *(char *)(sVar4 + 0x101f09 + lVar16) =
                                     "./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzapps/passwd.c"
                                     [uVar11 & 0x3f];
                                lVar16 = lVar16 + 1;
                                uVar11 = uVar11 >> 6;
                              } while (lVar16 != 4);
                              lVar16 = 0;
                              uVar11 = (uint)local_d5 << 0x10 | (uint)local_c0 << 8 | (uint)local_ab
                              ;
                              do {
                                *(char *)(sVar4 + 0x101f0d + lVar16) =
                                     "./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzapps/passwd.c"
                                     [uVar11 & 0x3f];
                                lVar16 = lVar16 + 1;
                                uVar11 = uVar11 >> 6;
                              } while (lVar16 != 4);
                              lVar16 = 0;
                              uVar11 = (uint)local_bf << 0x10 | (uint)local_aa << 8 | (uint)local_d4
                              ;
                              do {
                                *(char *)(sVar4 + 0x101f11 + lVar16) =
                                     "./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzapps/passwd.c"
                                     [uVar11 & 0x3f];
                                lVar16 = lVar16 + 1;
                                uVar11 = uVar11 >> 6;
                              } while (lVar16 != 4);
                              lVar16 = 0;
                              uVar11 = (uint)local_a9 << 0x10 | (uint)local_d3 << 8 | (uint)local_be
                              ;
                              do {
                                *(char *)(sVar4 + 0x101f15 + lVar16) =
                                     "./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzapps/passwd.c"
                                     [uVar11 & 0x3f];
                                lVar16 = lVar16 + 1;
                                uVar11 = uVar11 >> 6;
                              } while (lVar16 != 4);
                              lVar16 = 0;
                              uVar11 = (uint)local_d2 << 0x10 | (uint)local_bd << 8 | (uint)local_a8
                              ;
                              do {
                                *(char *)(sVar4 + 0x101f19 + lVar16) =
                                     "./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzapps/passwd.c"
                                     [uVar11 & 0x3f];
                                lVar16 = lVar16 + 1;
                                uVar11 = uVar11 >> 6;
                              } while (lVar16 != 4);
                              lVar16 = 0;
                              uVar11 = (uint)local_bc << 0x10 | (uint)local_a7 << 8 | (uint)local_d1
                              ;
                              do {
                                *(char *)(sVar4 + 0x101f1d + lVar16) =
                                     "./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzapps/passwd.c"
                                     [uVar11 & 0x3f];
                                lVar16 = lVar16 + 1;
                                uVar11 = uVar11 >> 6;
                              } while (lVar16 != 4);
                              lVar16 = 0;
                              uVar11 = (uint)local_a6 << 0x10 | (uint)local_d0 << 8 | (uint)local_bb
                              ;
                              do {
                                *(char *)(sVar4 + 0x101f21 + lVar16) =
                                     "./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzapps/passwd.c"
                                     [uVar11 & 0x3f];
                                lVar16 = lVar16 + 1;
                                uVar11 = uVar11 >> 6;
                              } while (lVar16 != 4);
                              lVar16 = 0;
                              uVar11 = (uint)local_cf << 0x10 | (uint)(byte)local_ba << 8 |
                                       (uint)local_a5;
                              do {
                                *(char *)(sVar4 + 0x101f25 + lVar16) =
                                     "./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzapps/passwd.c"
                                     [uVar11 & 0x3f];
                                lVar16 = lVar16 + 1;
                                uVar11 = uVar11 >> 6;
                              } while (lVar16 != 4);
                              lVar16 = 0;
                              uVar11 = (uint)local_ba._1_1_ << 0x10 | (uint)local_a4 << 8 |
                                       (uint)local_ce;
                              do {
                                *(char *)(sVar4 + 0x101f29 + lVar16) =
                                     "./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzapps/passwd.c"
                                     [uVar11 & 0x3f];
                                lVar16 = lVar16 + 1;
                                uVar11 = uVar11 >> 6;
                              } while (lVar16 != 4);
                              lVar16 = 0;
                              uVar11 = (uint)local_a3 << 0x10 | (uint)local_cd << 8 | (uint)local_b8
                              ;
                              do {
                                *(char *)(sVar4 + 0x101f2d + lVar16) =
                                     "./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzapps/passwd.c"
                                     [uVar11 & 0x3f];
                                lVar16 = lVar16 + 1;
                                uVar11 = uVar11 >> 6;
                              } while (lVar16 != 4);
                              lVar16 = 0;
                              uVar11 = (uint)local_cc << 0x10 | (uint)local_b7 << 8 | (uint)local_a2
                              ;
                              do {
                                *(char *)(sVar4 + 0x101f31 + lVar16) =
                                     "./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzapps/passwd.c"
                                     [uVar11 & 0x3f];
                                lVar16 = lVar16 + 1;
                                uVar11 = uVar11 >> 6;
                              } while (lVar16 != 4);
                              lVar16 = 0;
                              uVar11 = (uint)local_b6 << 0x10 | (uint)local_a1 << 8 | (uint)local_cb
                              ;
                              do {
                                *(char *)(sVar4 + 0x101f35 + lVar16) =
                                     "./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzapps/passwd.c"
                                     [uVar11 & 0x3f];
                                lVar16 = lVar16 + 1;
                                uVar11 = uVar11 >> 6;
                              } while (lVar16 != 4);
                              lVar16 = 0;
                              uVar11 = (uint)local_a0[0] << 0x10 | (uint)local_ca << 8 |
                                       (uint)local_b5;
                              do {
                                *(char *)(sVar4 + 0x101f39 + lVar16) =
                                     "./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzapps/passwd.c"
                                     [uVar11 & 0x3f];
                                lVar16 = lVar16 + 1;
                                uVar11 = uVar11 >> 6;
                              } while (lVar16 != 4);
                              lVar16 = 0;
                              uVar11 = (uint)local_c9 << 0x10 | (uint)local_b4 << 8 |
                                       (uint)local_a0[1];
                              do {
                                *(char *)(sVar4 + 0x101f3d + lVar16) =
                                     "./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzapps/passwd.c"
                                     [uVar11 & 0x3f];
                                lVar16 = lVar16 + 1;
                                uVar11 = uVar11 >> 6;
                              } while (lVar16 != 4);
                              lVar16 = 0;
                              uVar11 = (uint)local_b3 << 0x10 | (uint)local_a0[2] << 8 |
                                       (uint)local_c8;
                              do {
                                *(char *)(sVar4 + 0x101f41 + lVar16) =
                                     "./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzapps/passwd.c"
                                     [uVar11 & 0x3f];
                                lVar16 = lVar16 + 1;
                                uVar11 = uVar11 >> 6;
                              } while (lVar16 != 4);
                              lVar16 = 0;
                              uVar11 = (uint)local_a0[3] << 0x10 | (uint)local_c7 << 8 |
                                       (uint)local_b2;
                              do {
                                *(char *)(sVar4 + 0x101f45 + lVar16) =
                                     "./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzapps/passwd.c"
                                     [uVar11 & 0x3f];
                                lVar16 = lVar16 + 1;
                                uVar11 = uVar11 >> 6;
                              } while (lVar16 != 4);
                              lVar16 = 0;
                              uVar11 = (uint)local_c6 << 0x10 | (uint)local_b1 << 8 | (uint)local_9c
                              ;
                              do {
                                *(char *)(sVar4 + 0x101f49 + lVar16) =
                                     "./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzapps/passwd.c"
                                     [uVar11 & 0x3f];
                                lVar16 = lVar16 + 1;
                                uVar11 = uVar11 >> 6;
                              } while (lVar16 != 4);
                              lVar16 = 0;
                              uVar11 = (uint)local_b0 << 0x10 | (uint)local_9b << 8 | (uint)local_c5
                              ;
                              do {
                                *(char *)(sVar4 + 0x101f4d + lVar16) =
                                     "./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzapps/passwd.c"
                                     [uVar11 & 0x3f];
                                lVar16 = lVar16 + 1;
                                uVar11 = uVar11 >> 6;
                              } while (lVar16 != 4);
                              lVar16 = 0;
                              uVar11 = (uint)local_9a << 0x10 | (uint)local_c4 << 8 | (uint)local_af
                              ;
                              do {
                                *(char *)(sVar4 + 0x101f51 + lVar16) =
                                     "./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzapps/passwd.c"
                                     [uVar11 & 0x3f];
                                lVar16 = lVar16 + 1;
                                uVar11 = uVar11 >> 6;
                              } while (lVar16 != 4);
                              puVar12 = out_buf_0 + sVar4 + 0x57;
                              *(ushort *)(out_buf_0 + sVar4 + 0x55) =
                                   CONCAT11("./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzapps/passwd.c"
                                            [local_99 >> 6],
                                            "./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzapps/passwd.c"
                                            [local_99 & 0x3f]);
                            }
                            *puVar12 = 0;
                            puVar12 = out_buf_0;
                            goto LAB_001009b4;
                          }
                        }
LAB_00100ee9:
                        local_148 = (uchar *)0x0;
                        goto LAB_00100938;
                      }
                    }
                  }
                }
                else {
                  iVar2 = EVP_DigestUpdate(ctx,&local_d8,sVar4);
                  if (iVar2 != 0) goto joined_r0x00100f1a;
                }
                goto LAB_00100c78;
              }
            }
          }
LAB_0010091b:
          local_148 = (uchar *)0x0;
          local_138 = (byte *)0x0;
        }
      }
LAB_00100938:
      EVP_MD_CTX_free(ctx_00);
      EVP_MD_CTX_free(ctx);
      CRYPTO_free(local_138);
      CRYPTO_free(local_148);
      CRYPTO_free((void *)0x0);
    }
LAB_0010097b:
    puVar12 = (undefined1 *)0x0;
  }
LAB_001009b4:
  if ((param_7 & (param_8 ^ 1)) == 0) {
    if ((param_7 & param_8) == 0) {
      BIO_printf(param_5,"%s\n");
    }
    else {
      BIO_printf(param_5,"%s\t%s\n",puVar12,param_4);
    }
  }
  else {
    BIO_printf(param_5,"%s\t%s\n",param_4,puVar12);
  }
  uVar6 = 1;
LAB_001009f0:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int passwd_main(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  BIO *bp;
  char *pcVar9;
  long lVar10;
  char *pcVar11;
  void *pvVar12;
  long in_FS_OFFSET;
  uint local_207c;
  undefined4 local_2078;
  undefined4 local_2074;
  undefined4 local_2068;
  uint local_2060;
  undefined8 local_2058;
  void *local_2050;
  char local_2048 [8200];
  long local_40;
  
  iVar5 = 0;
  bVar1 = false;
  lVar10 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_2058 = 0;
  local_2050 = (void *)0x0;
  uVar7 = opt_init(param_1,param_2,passwd_options);
  local_2068 = 0;
  local_2074 = 0;
  local_2078 = 0;
  local_207c = 0;
  local_2060 = 0;
  bVar2 = false;
switchD_00101a1a_caseD_0:
  iVar3 = opt_next();
  if (iVar3 != 0) goto LAB_00101a01;
LAB_00101a50:
  opt_num_rest();
  puVar8 = (undefined1 *)opt_rest();
  if (*(long *)puVar8 != 0) {
    if (!bVar1) goto LAB_00101a73;
    goto switchD_00101a1a_caseD_ffffffff;
  }
  puVar8 = (undefined1 *)0x0;
LAB_00101a73:
  iVar4 = app_RAND_load();
  if (iVar4 != 0) {
    iVar4 = 1;
    if (iVar5 != 0) {
      iVar4 = iVar5;
    }
    if (lVar10 != 0) {
      if (!bVar2) goto LAB_00101aac;
      pcVar11 = "%s: Can\'t combine -in and -stdin\n";
      goto LAB_00101b8c;
    }
    if (!bVar2) {
      if ((long *)puVar8 == (long *)0x0) {
        pcVar11 = (char *)app_malloc(0x102,"password buffer");
        iVar5 = EVP_read_pw_string(pcVar11,0x102,"Password: ",(local_2060 | local_207c) ^ 1);
        if (iVar5 != 0) {
          bp = (BIO *)0x0;
          iVar3 = 1;
          pvVar12 = (void *)0x0;
          goto LAB_00101ba7;
        }
        puVar8 = passwds_static_3;
        passwds_static_3._0_8_ = pcVar11;
      }
      else {
        pcVar11 = (char *)0x0;
      }
      goto LAB_00101e0c;
    }
LAB_00101aac:
    bp = (BIO *)bio_open_default(lVar10,0x72,0x8001);
    if (bp != (BIO *)0x0) {
      if ((long *)puVar8 == (long *)0x0) {
        pcVar11 = (char *)app_malloc(0x102,"password buffer");
      }
      else {
        pcVar11 = (char *)0x0;
      }
      goto LAB_00101ae0;
    }
  }
  goto LAB_00101b9a;
LAB_00101a01:
  while (0xd < iVar3) {
    if (0x5de < iVar3) {
      if ((3 < iVar3 - 0x641U) || (iVar3 = opt_provider(iVar3), iVar3 != 0))
      goto switchD_00101a1a_caseD_0;
      goto LAB_00101b9a;
    }
    if (iVar3 < 0x5dd) goto switchD_00101a1a_caseD_0;
    iVar3 = opt_rand(iVar3);
    if (iVar3 == 0) goto LAB_00101b9a;
    iVar3 = opt_next();
    if (iVar3 == 0) {
      iVar3 = 0;
      goto LAB_00101a50;
    }
  }
  if (iVar3 < -1) goto switchD_00101a1a_caseD_0;
  switch(iVar3) {
  default:
    goto switchD_00101a1a_caseD_0;
  case 1:
    iVar3 = 0;
    pcVar11 = (char *)0x0;
    opt_help(passwd_options);
    bp = (BIO *)0x0;
    pvVar12 = (void *)0x0;
    goto LAB_00101ba7;
  case 2:
    if (!bVar1) {
      lVar10 = opt_arg();
      bVar1 = true;
      goto switchD_00101a1a_caseD_0;
    }
    break;
  case 3:
    local_2060 = 1;
    goto switchD_00101a1a_caseD_0;
  case 4:
    local_2078 = 1;
    goto switchD_00101a1a_caseD_0;
  case 5:
    local_2074 = 1;
    goto switchD_00101a1a_caseD_0;
  case 6:
    local_2068 = 1;
    goto switchD_00101a1a_caseD_0;
  case 7:
    if (iVar5 == 0) {
      iVar5 = 2;
      goto switchD_00101a1a_caseD_0;
    }
    break;
  case 8:
    if (iVar5 == 0) {
      iVar5 = 1;
      goto switchD_00101a1a_caseD_0;
    }
    break;
  case 9:
    if (iVar5 == 0) {
      iVar5 = 3;
      goto switchD_00101a1a_caseD_0;
    }
    break;
  case 10:
    if (iVar5 == 0) {
      iVar5 = 4;
      goto switchD_00101a1a_caseD_0;
    }
    break;
  case 0xb:
    if (iVar5 == 0) {
      iVar5 = 5;
      goto switchD_00101a1a_caseD_0;
    }
    break;
  case 0xc:
    local_2058 = opt_arg();
    local_207c = 1;
    goto switchD_00101a1a_caseD_0;
  case 0xd:
    if (!bVar1) {
      bVar2 = true;
      bVar1 = true;
      goto switchD_00101a1a_caseD_0;
    }
    break;
  case -1:
    break;
  }
switchD_00101a1a_caseD_ffffffff:
  pcVar11 = "%s: Use -help for summary.\n";
LAB_00101b8c:
  BIO_printf(_bio_err,pcVar11,uVar7);
LAB_00101b9a:
  iVar3 = 1;
  pcVar11 = (char *)0x0;
  bp = (BIO *)0x0;
  pvVar12 = (void *)0x0;
  goto LAB_00101ba7;
  while (*(long *)puVar8 != 0) {
LAB_00101e0c:
    lVar10 = *(long *)puVar8;
    puVar8 = (undefined1 *)((long)puVar8 + 8);
    iVar5 = do_passwd_constprop_0
                      (local_207c,&local_2058,&local_2050,lVar10,_bio_out,local_2078,local_2074,
                       local_2068,iVar4);
    pvVar12 = local_2050;
    if (iVar5 == 0) {
      iVar3 = 1;
      bp = (BIO *)0x0;
      goto LAB_00101ba7;
    }
  }
  bp = (BIO *)0x0;
  goto LAB_00101ba7;
LAB_00101ae0:
  do {
    iVar5 = BIO_gets(bp,pcVar11,0x101);
    pvVar12 = local_2050;
    if (iVar5 < 1) break;
    pcVar9 = strchr(pcVar11,10);
    if (pcVar9 != (char *)0x0) {
      *pcVar9 = '\0';
      iVar5 = do_passwd_constprop_0
                        (local_207c,&local_2058,&local_2050,pcVar11,_bio_out,local_2078,local_2074,
                         local_2068,iVar4);
      if (iVar5 == 0) {
LAB_00101b51:
        iVar3 = 1;
        pvVar12 = local_2050;
        break;
      }
      goto LAB_00101ae0;
    }
    do {
      iVar5 = BIO_gets(bp,local_2048,0x2000);
      if (iVar5 < 1) break;
      pcVar9 = strchr(local_2048,10);
    } while (pcVar9 == (char *)0x0);
    iVar6 = do_passwd_constprop_0
                      (local_207c,&local_2058,&local_2050,pcVar11,_bio_out,local_2078,local_2074,
                       local_2068,iVar4);
    if (iVar6 == 0) goto LAB_00101b51;
    pvVar12 = local_2050;
  } while (0 < iVar5);
LAB_00101ba7:
  CRYPTO_free(pvVar12);
  CRYPTO_free(pcVar11);
  BIO_free(bp);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


