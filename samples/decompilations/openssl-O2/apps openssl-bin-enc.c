
void show_ciphers(long param_1,undefined8 *param_2)

{
  int iVar1;
  ushort **ppuVar2;
  EVP_CIPHER *pEVar3;
  ulong uVar4;
  
  ppuVar2 = __ctype_b_loc();
  if ((*(byte *)((long)*ppuVar2 + (ulong)**(byte **)(param_1 + 8) * 2 + 1) & 2) != 0) {
    pEVar3 = EVP_get_cipherbyname((char *)*(byte **)(param_1 + 8));
    if (pEVar3 != (EVP_CIPHER *)0x0) {
      uVar4 = EVP_CIPHER_get_flags(pEVar3);
      if ((uVar4 & 0x200000) == 0) {
        iVar1 = EVP_CIPHER_get_mode(pEVar3);
        if (iVar1 != 0x10001) {
          BIO_printf((BIO *)*param_2,"-%-25s",*(undefined8 *)(param_1 + 8));
          iVar1 = *(int *)(param_2 + 1);
          *(int *)(param_2 + 1) = iVar1 + 1;
          if (iVar1 + 1 != 3) {
            BIO_printf((BIO *)*param_2," ");
            return;
          }
          BIO_printf((BIO *)*param_2,"\n");
          *(undefined4 *)(param_2 + 1) = 0;
        }
      }
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 set_hex(char *param_1,void *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  ushort **ppuVar4;
  byte bVar5;
  byte *pbVar6;
  ulong uVar7;
  
  iVar2 = param_3 * 2;
  sVar3 = strlen(param_1);
  iVar1 = (int)sVar3;
  if (iVar2 < iVar1) {
    BIO_printf(_bio_err,"hex string is too long, ignoring excess\n");
    iVar1 = iVar2;
  }
  else if (iVar1 < iVar2) {
    BIO_printf(_bio_err,"hex string is too short, padding with zero bytes to length\n");
  }
  memset(param_2,0,(long)param_3);
  if (0 < iVar1) {
    ppuVar4 = __ctype_b_loc();
    uVar7 = 0;
    do {
      if ((*(byte *)((long)*ppuVar4 + (ulong)(byte)param_1[uVar7] * 2 + 1) & 0x10) == 0) {
        BIO_printf(_bio_err,"non-hex digit\n");
        return 0;
      }
      iVar2 = OPENSSL_hexchar2int((ulong)(byte)param_1[uVar7]);
      bVar5 = (byte)(iVar2 << 4);
      pbVar6 = (byte *)((long)((int)uVar7 >> 1) + (long)param_2);
      if ((uVar7 & 1) != 0) {
        bVar5 = *pbVar6 | (byte)iVar2;
      }
      uVar7 = uVar7 + 1;
      *pbVar6 = bVar5;
    } while (uVar7 != (long)iVar1);
  }
  return 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint enc_main(undefined4 param_1,undefined8 *param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  EVP_CIPHER *pEVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  uint len;
  int iVar14;
  undefined8 uVar15;
  uchar *buf;
  void *data;
  char *pcVar16;
  size_t sVar17;
  char *__s;
  long lVar18;
  ulong uVar19;
  BIO_METHOD *pBVar20;
  BIO *pBVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long lVar24;
  uchar *puVar25;
  int iVar26;
  long lVar27;
  undefined1 *puVar28;
  uint uVar29;
  long in_FS_OFFSET;
  long local_258;
  ENGINE *local_250;
  BIO *local_248;
  BIO *local_240;
  BIO *local_238;
  uint local_224;
  BIO *local_220;
  uchar *local_200;
  long local_1f8;
  long local_1f0;
  BIO *local_1e0;
  uchar *local_1d8;
  long local_1d0;
  int local_1b4;
  EVP_CIPHER_CTX *local_1b0;
  EVP_CIPHER *local_1a8;
  EVP_MD *local_1a0;
  uchar *local_198;
  long local_190;
  BIO *local_188;
  undefined4 local_180;
  long local_170;
  uchar local_168 [16];
  uchar local_158 [16];
  uchar local_148 [64];
  uchar local_108 [200];
  long local_40;
  
  pcVar16 = (char *)*param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_1b0 = (EVP_CIPHER_CTX *)0x0;
  local_1a8 = (EVP_CIPHER *)0x0;
  local_1a0 = (EVP_MD *)0x0;
  local_198 = (uchar *)0x0;
  local_1b4 = 0;
  iVar9 = strcmp(pcVar16,"base64");
  if (iVar9 == 0) {
    uVar10 = 1;
LAB_0010026e:
    pcVar16 = (char *)0x0;
  }
  else {
    uVar10 = strcmp(pcVar16,"enc");
    if (uVar10 == 0) goto LAB_0010026e;
    uVar10 = 0;
  }
  uVar29 = 0;
  lVar24 = 0;
  opt_set_unknown_name("cipher");
  uVar15 = opt_init(param_1,param_2,enc_options);
  local_258 = 0;
  puVar28 = (uchar *)0x0;
  local_1f0 = 0;
  iVar9 = 0;
  bVar1 = false;
  bVar5 = false;
  iVar14 = 0;
  local_224 = 1;
  bVar4 = false;
  bVar6 = false;
  bVar3 = false;
  len = 0x2000;
  local_1d0 = 0;
  local_1e0 = (BIO *)0x0;
  local_238 = (BIO *)0x0;
  local_200 = (uchar *)0x0;
  local_1f8 = 0;
  local_240 = (BIO *)0x0;
  local_250 = (ENGINE *)0x0;
switchD_00100372_caseD_0:
  iVar11 = opt_next();
  if (iVar11 != 0) goto LAB_00100359;
LAB_001003b8:
  iVar11 = opt_check_rest_arg(0);
  if (iVar11 == 0) goto switchD_00100372_caseD_ffffffff;
  iVar11 = app_RAND_load();
  if (iVar11 == 0) goto LAB_001008d4;
  if ((local_1b4 == 0) || (!bVar1)) {
    local_1b4 = 8;
  }
  iVar11 = opt_cipher(pcVar16,&local_1a8);
  if (iVar11 != 0) {
    if ((local_1a8 == (EVP_CIPHER *)0x0) || (iVar11 = EVP_CIPHER_get_mode(), iVar11 != 0x10002)) {
      bVar7 = false;
      bVar2 = true;
    }
    else {
      bVar2 = false;
      bVar7 = true;
    }
    if ((local_240 == (BIO *)0x0) || (iVar11 = opt_md(local_240,&local_1a0), iVar11 != 0)) {
      if (local_1a0 == (EVP_MD *)0x0) {
        local_1a0 = EVP_sha256();
      }
      iVar11 = 1;
      if (iVar9 != 0) {
        iVar11 = iVar9;
      }
      if (((int)len < 0x50) && ((uVar10 & 1) != 0)) {
        if (uVar29 != 0) {
          BIO_printf(_bio_err,"bufsize=%d\n",0x50);
        }
        len = 0x50;
        lVar27 = 0xc0;
LAB_001004ac:
        iVar9 = (-(uint)(local_224 == 0) & 0xffff7fff) + 0x8003;
        iVar26 = (-(uint)(local_224 == 0) & 0x8001) + 2;
      }
      else {
        lVar27 = (long)(((int)len / 0x30 + 0x29 + ((int)(len + 2) / 3) * 2) * 2);
        if (uVar29 != 0) {
          BIO_printf(_bio_err,"bufsize=%d\n",(ulong)len);
        }
        iVar9 = 2;
        iVar26 = 2;
        if (uVar10 != 0) goto LAB_001004ac;
      }
      buf = (uchar *)app_malloc(0x200,"strbuf");
      data = (void *)app_malloc(lVar27,"evp buffer");
      if (local_238 == (BIO *)0x0) {
        if ((bVar2) || (iVar14 == 2)) {
          local_248 = (BIO *)dup_bio_in(iVar26);
          goto LAB_00100517;
        }
        BIO_printf(_bio_err,"Unstreamable cipher mode\n");
      }
      else {
        local_248 = (BIO *)bio_open_default(local_238,0x72,iVar26);
LAB_00100517:
        if (local_248 != (BIO *)0x0) {
          if (puVar28 != (uchar *)0x0) goto LAB_00100604;
          if ((local_1d0 != 0) &&
             (iVar26 = app_passwd(local_1d0,0,&local_198), puVar28 = local_198, iVar26 == 0)) {
            lVar27 = 0;
            lVar24 = 0;
            pBVar21 = (BIO *)0x0;
            uVar10 = 1;
            BIO_printf(_bio_err,"Error getting password\n");
            local_238 = (BIO *)0x0;
            local_240 = (BIO *)0x0;
            goto LAB_00100902;
          }
          if (((puVar28 != (uchar *)0x0) || (local_1a8 == (EVP_CIPHER *)0x0)) ||
             (local_258 != 0 || local_1f8 != 0)) goto LAB_00100604;
          pcVar16 = "decryption";
          if (local_224 != 0) {
            pcVar16 = "encryption";
          }
          goto LAB_001005b8;
        }
      }
      lVar27 = 0;
      lVar24 = 0;
      uVar10 = 1;
      pBVar21 = (BIO *)0x0;
      local_238 = (BIO *)0x0;
      local_240 = (BIO *)0x0;
      local_248 = (BIO *)0x0;
      goto LAB_00100902;
    }
  }
  goto switchD_00100372_caseD_ffffffff;
  while (-1 < iVar26) {
LAB_001005b8:
    uVar15 = EVP_CIPHER_get0_name(local_1a8);
    BIO_snprintf((char *)local_108,200,"enter %s %s password:",uVar15,pcVar16);
    *buf = '\0';
    iVar26 = EVP_read_pw_string((char *)buf,0x200,(char *)local_108,local_224);
    if (iVar26 == 0) {
      puVar28 = buf;
      if (*buf != '\0') goto LAB_00100604;
      goto LAB_00101485;
    }
  }
  BIO_printf(_bio_err,"bad password read\n");
LAB_00101485:
  local_258 = 0;
  lVar27 = 0;
  pBVar21 = (BIO *)0x0;
  uVar10 = 1;
  local_238 = (BIO *)0x0;
  local_240 = (BIO *)0x0;
  lVar24 = 0;
  goto LAB_00100902;
LAB_00100604:
  local_240 = (BIO *)bio_open_default(local_1e0,0x77,iVar9);
  if (local_240 == (BIO *)0x0) {
    lVar27 = 0;
    lVar24 = 0;
    pBVar21 = (BIO *)0x0;
    uVar10 = 1;
    local_238 = (BIO *)0x0;
    goto LAB_00100902;
  }
  if (bVar3) {
    BIO_set_callback_ex(local_248,&BIO_debug_callback_ex);
    BIO_set_callback_ex(local_240,&BIO_debug_callback_ex);
    BIO_set_callback_arg(local_248,(char *)_bio_err);
    BIO_set_callback_arg(local_240,(char *)_bio_err);
  }
  local_220 = local_240;
  if (uVar10 == 0) {
    local_238 = (BIO *)0x0;
    local_1e0 = local_248;
  }
  else {
    pBVar20 = BIO_f_base64();
    local_238 = BIO_new(pBVar20);
    if (local_238 == (BIO *)0x0) {
      lVar27 = 0;
      lVar24 = 0;
      pBVar21 = (BIO *)0x0;
      goto LAB_00100902;
    }
    if (bVar3) {
      BIO_set_callback_ex(local_238,&BIO_debug_callback_ex);
      BIO_set_callback_arg(local_238,(char *)_bio_err);
    }
    if (bVar6) {
      BIO_set_flags(local_238,0x100);
    }
    if (local_224 == 0) {
      local_1e0 = BIO_push(local_238,local_248);
    }
    else {
      local_220 = BIO_push(local_238,local_240);
      local_1e0 = local_248;
    }
  }
  pEVar8 = local_1a8;
  if (local_1a8 == (EVP_CIPHER *)0x0) {
    lVar27 = 0;
    lVar24 = 0;
    pBVar21 = (BIO *)0x0;
LAB_00100fa2:
    do {
      lVar18 = BIO_ctrl(local_1e0,10,0,(void *)0x0);
      if ((((int)lVar18 == 0) && (lVar18 = BIO_ctrl(local_1e0,2,0,(void *)0x0), (int)lVar18 != 0))
         || (iVar9 = BIO_read(local_1e0,data,len), iVar9 < 1)) {
LAB_00101049:
        lVar18 = BIO_ctrl(local_220,0xb,0,(void *)0x0);
        if ((int)lVar18 != 0) {
          uVar10 = uVar29;
          if (uVar29 != 0) {
            uVar19 = BIO_number_read(local_248);
            BIO_printf(_bio_err,"bytes read   : %8ju\n",uVar19);
            uVar19 = BIO_number_written(local_240);
            BIO_printf(_bio_err,"bytes written: %8ju\n",uVar19);
            uVar10 = 0;
          }
          goto LAB_00100902;
        }
        if (local_224 == 0) {
          BIO_printf(_bio_err,"bad decrypt\n");
          uVar10 = 1;
          goto LAB_00100902;
        }
        BIO_printf(_bio_err,"bad encrypt\n");
        goto LAB_00101609;
      }
      if (!bVar2) {
        lVar18 = BIO_ctrl(local_1e0,2,0,(void *)0x0);
        if ((int)lVar18 == 0) {
          BIO_printf(_bio_err,"Unstreamable cipher mode\n");
          goto LAB_00101609;
        }
        iVar14 = BIO_write(local_220,data,iVar9);
        if (iVar14 == iVar9) goto LAB_00101049;
        break;
      }
      iVar14 = BIO_write(local_220,data,iVar9);
    } while (iVar14 == iVar9);
    BIO_printf(_bio_err,"error writing output file\n");
    uVar10 = 1;
    goto LAB_00100902;
  }
  if (puVar28 == (uchar *)0x0) {
    bVar1 = false;
    if (local_200 != (uchar *)0x0) {
LAB_001007ab:
      iVar9 = EVP_CIPHER_get_iv_length(local_1a8);
      if (iVar9 == 0) {
        BIO_printf(_bio_err,"warning: iv not used by this cipher\n");
      }
      else {
        iVar9 = set_hex(local_200,local_168,iVar9);
        if (iVar9 == 0) {
          BIO_printf(_bio_err,"invalid hex iv value\n");
          goto LAB_00100843;
        }
      }
      goto LAB_001007d2;
    }
    iVar9 = EVP_CIPHER_get_iv_length(local_1a8);
    if ((iVar9 != 0) && (!bVar7)) {
      BIO_printf(_bio_err,"iv undefined\n");
      goto LAB_00100843;
    }
    bVar1 = false;
    if (local_1f8 != 0) goto LAB_001007dd;
LAB_001012b9:
    pBVar20 = BIO_f_cipher();
    pBVar21 = BIO_new(pBVar20);
    if (pBVar21 != (BIO *)0x0) {
      BIO_ctrl(pBVar21,0x81,0,&local_1b0);
      if (bVar7) {
        EVP_CIPHER_CTX_set_flags(local_1b0,1);
        if (bVar1) {
          if (local_200 != (uchar *)0x0) goto LAB_00101300;
          goto LAB_0010130d;
        }
LAB_00101678:
        uVar15 = app_get0_propq();
        lVar24 = local_1f0;
        if (local_1f0 == 0) {
          lVar24 = EVP_CIPHER_get0_name(local_1a8);
        }
        uVar22 = app_get0_libctx();
        lVar27 = EVP_SKEYMGMT_fetch(uVar22,lVar24,uVar15);
        if (lVar27 != 0) {
          uVar15 = EVP_SKEYMGMT_get0_imp_settable_params(lVar27);
          lVar18 = app_params_new_from_opts(local_258,uVar15);
          if (lVar18 != 0) {
            uVar15 = app_get0_propq();
            uVar22 = EVP_SKEYMGMT_get0_name(lVar27);
            uVar23 = app_get0_libctx();
            lVar24 = EVP_SKEY_import(uVar23,uVar22,uVar15,3,lVar18);
            OSSL_PARAM_free(lVar18);
            if (lVar24 == 0) {
              if (local_1f0 == 0) {
                local_1f0 = EVP_CIPHER_get0_name(local_1a8);
              }
              pcVar16 = "Error creating opaque key object for skeymgmt %s\n";
            }
            else {
              iVar9 = EVP_CIPHER_get_iv_length();
              if ((local_200 != (uchar *)0x0) || (puVar25 = (uchar *)0x0, !bVar7)) {
                puVar25 = local_168;
              }
              iVar9 = EVP_CipherInit_SKEY(local_1b0,local_1a8,lVar24,puVar25,(long)iVar9,local_224);
              if (iVar9 != 0) goto LAB_00101347;
              local_1f0 = EVP_CIPHER_get0_name(local_1a8);
              pcVar16 = "Error setting an opaque key for cipher %s\n";
            }
            goto LAB_0010178b;
          }
        }
        lVar24 = 0;
LAB_00101609:
        uVar10 = 1;
      }
      else {
        if (!bVar1) goto LAB_00101678;
LAB_00101300:
        local_200 = local_168;
LAB_0010130d:
        lVar27 = 0;
        lVar24 = 0;
        iVar9 = EVP_CipherInit_ex(local_1b0,local_1a8,local_250,local_148,local_200,local_224);
        if (iVar9 != 0) {
LAB_00101347:
          if (bVar5) {
            EVP_CIPHER_CTX_set_padding(local_1b0,0);
          }
          if (bVar3) {
            BIO_set_callback_ex(pBVar21,&BIO_debug_callback_ex);
            BIO_set_callback_arg(pBVar21,(char *)_bio_err);
          }
          if (iVar14 != 0) {
            if (!bVar4) {
              __printf_chk(2,"salt=");
              if (0 < local_1b4) {
                lVar18 = 0;
                do {
                  puVar25 = local_158 + lVar18;
                  lVar18 = lVar18 + 1;
                  __printf_chk(2,&_LC40,*puVar25);
                } while ((int)lVar18 < local_1b4);
              }
              putchar(10);
            }
            iVar9 = EVP_CIPHER_get_key_length(local_1a8);
            if (0 < iVar9) {
              __printf_chk(2,&_LC41);
              for (lVar18 = 0; iVar9 = EVP_CIPHER_get_key_length(local_1a8), (int)lVar18 < iVar9;
                  lVar18 = lVar18 + 1) {
                __printf_chk(2,&_LC40,local_148[lVar18]);
              }
              putchar(10);
            }
            iVar9 = EVP_CIPHER_get_iv_length(local_1a8);
            if (0 < iVar9) {
              __printf_chk(2,&_LC42);
              for (lVar18 = 0; iVar9 = EVP_CIPHER_get_iv_length(local_1a8), (int)lVar18 < iVar9;
                  lVar18 = lVar18 + 1) {
                __printf_chk(2,&_LC40,local_168[lVar18]);
              }
              putchar(10);
            }
            if (iVar14 == 2) {
              uVar10 = 0;
              goto LAB_00100902;
            }
          }
          local_220 = BIO_push(pBVar21,local_220);
          goto LAB_00100fa2;
        }
        local_1f0 = EVP_CIPHER_get0_name(local_1a8);
        pcVar16 = "Error setting cipher %s\n";
LAB_0010178b:
        BIO_printf(_bio_err,pcVar16,local_1f0);
        ERR_print_errors(_bio_err);
        uVar10 = 1;
      }
      goto LAB_00100902;
    }
  }
  else {
    sVar17 = strlen(puVar28);
    local_1d0._0_4_ = (int)sVar17;
    if (bVar4) {
      if (bVar1) {
        iVar12 = EVP_CIPHER_get_key_length(pEVar8);
        iVar26 = EVP_CIPHER_get_iv_length(local_1a8);
        iVar9 = 0;
        local_1d8 = (uchar *)0x0;
LAB_00100707:
        uVar19 = (ulong)(uint)(iVar26 + iVar12);
        puVar25 = local_108;
        iVar9 = PKCS5_PBKDF2_HMAC(puVar28,(int)local_1d0,local_1d8,iVar9,iVar11,local_1a0,
                                  iVar26 + iVar12,local_108);
        if (iVar9 == 0) {
          BIO_printf(_bio_err,"PKCS5_PBKDF2_HMAC failed\n",uVar19,puVar25);
          goto LAB_00100843;
        }
        __memcpy_chk(local_148,local_108,(long)iVar12,0x40);
        __memcpy_chk(local_168,local_108 + iVar12,(long)iVar26,0x10);
      }
      else {
        local_1d8 = (uchar *)0x0;
LAB_0010120b:
        BIO_printf(_bio_err,
                   "*** WARNING : deprecated key derivation used.\nUsing -iter or -pbkdf2 would be better.\n"
                  );
        iVar9 = EVP_BytesToKey(local_1a8,local_1a0,local_1d8,puVar28,(int)local_1d0,1,local_148,
                               local_168);
        if (iVar9 == 0) {
          BIO_printf(_bio_err,"EVP_BytesToKey failed\n");
          goto LAB_00100843;
        }
      }
      if (puVar28 == buf) {
        OPENSSL_cleanse(buf,0x200);
      }
      else {
        OPENSSL_cleanse(puVar28,sVar17);
      }
      if (local_200 != (uchar *)0x0) {
        bVar1 = true;
        goto LAB_001007ab;
      }
      bVar1 = true;
LAB_001007d2:
      if (local_1f8 != 0) {
LAB_001007dd:
        uVar13 = EVP_CIPHER_get_key_length(local_1a8);
        iVar9 = set_hex(local_1f8,local_148,uVar13);
        if (iVar9 == 0) {
          BIO_printf(_bio_err,"invalid hex key value\n");
          goto LAB_00100843;
        }
        cleanse(local_1f8);
        bVar1 = true;
      }
      if ((local_258 == 0) || (!bVar1)) goto LAB_001012b9;
      BIO_printf(_bio_err,"Either a raw key or the \'skeyopt\' args must be used.\n");
    }
    else if (lVar24 == 0) {
      if (local_224 == 0) {
        iVar9 = BIO_read(local_1e0,&local_170,8);
        if (iVar9 == 8) {
          if (local_170 != 0x5f5f6465746c6153) {
            BIO_printf(_bio_err,"bad magic number\n");
            goto LAB_00100843;
          }
          iVar9 = BIO_read(local_1e0,local_158,local_1b4);
          if (iVar9 == local_1b4) goto LAB_001006c5;
        }
        BIO_printf(_bio_err,"error reading input file\n");
      }
      else {
        iVar9 = RAND_bytes(local_158,local_1b4);
        if (iVar9 < 1) {
          lVar24 = 0;
          pBVar21 = (BIO *)0x0;
          BIO_printf(_bio_err,"RAND_bytes failed\n");
          lVar27 = 0;
          uVar10 = local_224;
          goto LAB_00100902;
        }
        if ((iVar14 == 2) ||
           ((iVar9 = BIO_write(local_220,"Salted__",8), iVar9 == 8 &&
            (iVar9 = BIO_write(local_220,local_158,local_1b4), iVar9 == local_1b4))))
        goto LAB_001006c5;
        BIO_printf(_bio_err,"error writing output file\n");
      }
    }
    else {
      iVar9 = set_hex(lVar24,local_158,local_1b4);
      if (iVar9 != 0) {
LAB_001006c5:
        local_1d8 = local_158;
        if (!bVar1) goto LAB_0010120b;
        iVar12 = EVP_CIPHER_get_key_length(local_1a8);
        iVar26 = EVP_CIPHER_get_iv_length(local_1a8);
        iVar9 = local_1b4;
        goto LAB_00100707;
      }
      BIO_printf(_bio_err,"invalid hex salt value\n");
    }
  }
LAB_00100843:
  lVar27 = 0;
  lVar24 = 0;
  pBVar21 = (BIO *)0x0;
  uVar10 = 1;
  goto LAB_00100902;
LAB_00100359:
  while (0x1e < iVar11) {
    if (iVar11 == 0x646) {
      if ((local_258 != 0) || (local_258 = OPENSSL_sk_new_null(), local_258 != 0)) {
        uVar22 = opt_arg();
        iVar11 = OPENSSL_sk_push(local_258,uVar22);
        if (iVar11 != 0) goto switchD_00100372_caseD_0;
      }
      pcVar16 = "%s: out of memory\n";
      goto LAB_001008c6;
    }
    if (0x646 < iVar11) {
      if (iVar11 == 0x647) {
        local_1f0 = opt_arg();
      }
      goto switchD_00100372_caseD_0;
    }
    if (0x5de < iVar11) {
      if ((3 < iVar11 - 0x641U) || (iVar11 = opt_provider(iVar11), iVar11 != 0))
      goto switchD_00100372_caseD_0;
      goto LAB_001008d4;
    }
    if (iVar11 < 0x5dd) goto switchD_00100372_caseD_0;
    iVar11 = opt_rand(iVar11);
    if (iVar11 == 0) goto LAB_001008d4;
    iVar11 = opt_next();
    if (iVar11 == 0) goto LAB_001003b8;
  }
  if (iVar11 < -1) goto switchD_00100372_caseD_0;
  switch(iVar11) {
  default:
    goto switchD_00100372_caseD_0;
  case 1:
    opt_help(enc_options);
    goto LAB_001009f8;
  case 2:
    BIO_printf(_bio_out,"Supported ciphers:\n");
    local_180 = 0;
    local_188 = _bio_out;
    OBJ_NAME_do_all_sorted(2,show_ciphers,&local_188);
    BIO_printf(_bio_out,"\n");
LAB_001009f8:
    uVar10 = 0;
    goto LAB_001008e2;
  case 3:
    local_224 = 1;
    goto switchD_00100372_caseD_0;
  case 4:
    local_238 = (BIO *)opt_arg();
    goto switchD_00100372_caseD_0;
  case 5:
    local_1e0 = (BIO *)opt_arg();
    goto switchD_00100372_caseD_0;
  case 6:
    local_1d0 = opt_arg();
    goto switchD_00100372_caseD_0;
  case 7:
    uVar22 = opt_arg();
    local_250 = (ENGINE *)setup_engine_methods(uVar22,0xffffffff,0);
    goto switchD_00100372_caseD_0;
  case 8:
    local_224 = 0;
    goto switchD_00100372_caseD_0;
  case 9:
    iVar14 = 1;
    goto switchD_00100372_caseD_0;
  case 10:
    uVar29 = 1;
    goto switchD_00100372_caseD_0;
  case 0xb:
    bVar5 = true;
    goto switchD_00100372_caseD_0;
  case 0xc:
    bVar4 = false;
    goto switchD_00100372_caseD_0;
  case 0xd:
    bVar4 = true;
    goto switchD_00100372_caseD_0;
  case 0xe:
    bVar3 = true;
    goto switchD_00100372_caseD_0;
  case 0xf:
    iVar14 = 2;
    goto switchD_00100372_caseD_0;
  case 0x10:
    bVar6 = true;
    goto switchD_00100372_caseD_0;
  case 0x11:
    uVar10 = 1;
    goto switchD_00100372_caseD_0;
  case 0x13:
    __s = (char *)opt_arg();
    sVar17 = strlen(__s);
    bVar2 = false;
    iVar11 = (int)sVar17 + -1;
    if ((0 < iVar11) && (__s[iVar11] == 'k')) {
      __s[iVar11] = '\0';
      bVar2 = true;
    }
    uVar22 = opt_arg();
    iVar11 = opt_long(uVar22,&local_190);
    if ((iVar11 != 0) && (-1 < local_190)) {
      if (!bVar2) {
LAB_00100d5f:
        len = (uint)local_190;
        goto switchD_00100372_caseD_0;
      }
      if (local_190 < 0x1fffffffffffff) {
        local_190 = local_190 << 10;
        goto LAB_00100d5f;
      }
    }
    break;
  case 0x14:
    puVar28 = (undefined1 *)opt_arg();
    goto switchD_00100372_caseD_0;
  case 0x15:
    uVar22 = opt_arg();
    pBVar21 = (BIO *)bio_open_default(uVar22,0x72,0x8001);
    if (pBVar21 != (BIO *)0x0) {
      iVar11 = BIO_gets(pBVar21,buf_1,0x80);
      BIO_free(pBVar21);
      if (iVar11 < 1) {
        uVar22 = opt_arg();
        BIO_printf(_bio_err,"%s Can\'t read key from %s\n",uVar15,uVar22);
      }
      else {
        if (iVar11 != 1) {
          puVar28 = buf_1 + iVar11;
          while ((puVar28[-1] == '\r' || (puVar28[-1] == '\n'))) {
            puVar28[-1] = 0;
            puVar28 = puVar28 + -1;
            if ((undefined1 *)(((long)iVar11 + 0x101abf) - (ulong)(iVar11 - 2)) == puVar28)
            goto LAB_001008a0;
          }
          puVar28 = buf_1;
          goto switchD_00100372_caseD_0;
        }
LAB_001008a0:
        BIO_printf(_bio_err,"%s: zero length password\n",uVar15);
      }
    }
    break;
  case 0x16:
    local_1f8 = opt_arg();
    goto switchD_00100372_caseD_0;
  case 0x17:
    local_1a8 = (EVP_CIPHER *)0x0;
    goto switchD_00100372_caseD_0;
  case 0x18:
    lVar24 = opt_arg();
    goto switchD_00100372_caseD_0;
  case 0x19:
    local_200 = (uchar *)opt_arg();
    goto switchD_00100372_caseD_0;
  case 0x1a:
    local_240 = (BIO *)opt_arg();
    goto switchD_00100372_caseD_0;
  case 0x1b:
    iVar9 = opt_int_arg();
    bVar1 = true;
    goto switchD_00100372_caseD_0;
  case 0x1c:
    if (iVar9 == 0) {
      iVar9 = 10000;
    }
    bVar1 = true;
    goto switchD_00100372_caseD_0;
  case 0x1d:
    pcVar16 = (char *)opt_unknown();
    goto switchD_00100372_caseD_0;
  case 0x1e:
    uVar22 = opt_arg();
    iVar11 = opt_int(uVar22,&local_1b4);
    if (iVar11 != 0) {
      if (0x10 < local_1b4) {
        local_1b4 = 0x10;
      }
      goto switchD_00100372_caseD_0;
    }
    break;
  case -1:
    break;
  }
switchD_00100372_caseD_ffffffff:
  pcVar16 = "%s: Use -help for summary.\n";
LAB_001008c6:
  BIO_printf(_bio_err,pcVar16,uVar15);
LAB_001008d4:
  uVar10 = 1;
LAB_001008e2:
  lVar27 = 0;
  lVar24 = 0;
  data = (void *)0x0;
  local_238 = (BIO *)0x0;
  buf = (uchar *)0x0;
  pBVar21 = (BIO *)0x0;
  local_240 = (BIO *)0x0;
  local_248 = (BIO *)0x0;
LAB_00100902:
  ERR_print_errors(_bio_err);
  OPENSSL_sk_free(local_258);
  EVP_SKEYMGMT_free(lVar27);
  EVP_SKEY_free(lVar24);
  CRYPTO_free(buf);
  CRYPTO_free(data);
  BIO_free(local_248);
  BIO_free_all(local_240);
  BIO_free(pBVar21);
  BIO_free(local_238);
  EVP_MD_free(local_1a0);
  EVP_CIPHER_free();
  BIO_free((BIO *)0x0);
  BIO_free((BIO *)0x0);
  release_engine(local_250);
  CRYPTO_free(local_198);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar10;
}


