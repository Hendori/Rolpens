
int smime_cb(int param_1,X509_STORE_CTX *param_2)

{
  int iVar1;
  
  iVar1 = X509_STORE_CTX_get_error(param_2);
  if ((iVar1 == 0x2b) || ((iVar1 == 0 && (param_1 == 2)))) {
    policies_print(param_2);
  }
  return param_1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 smime_main(undefined4 param_1,undefined8 param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  X509_VERIFY_PARAM *pm;
  undefined8 uVar7;
  long *plVar8;
  PKCS7 *pPVar9;
  X509 *signcert;
  EVP_PKEY *pkey;
  PKCS7_SIGNER_INFO *pPVar10;
  stack_st_X509 *psVar11;
  BIO *bp;
  X509 *pXVar12;
  char *pcVar13;
  long lVar14;
  char *pcVar15;
  uint flags;
  uint uVar16;
  undefined8 uVar17;
  X509_STORE *v;
  X509_STORE *ctx;
  long in_FS_OFFSET;
  bool bVar18;
  long local_150;
  long local_148;
  EVP_PKEY *local_140;
  BIO *local_138;
  long *local_130;
  undefined8 local_128;
  CONF *local_120;
  BIO *local_118;
  X509 *local_110;
  long local_108;
  long *local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined *local_e8;
  long *local_e0;
  int local_d8;
  undefined4 local_d4;
  long local_d0;
  long local_c8;
  long local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  int local_90;
  int local_7c;
  int local_78;
  undefined4 local_74;
  BIO *local_70;
  PKCS7 *local_68;
  stack_st_X509 *local_60;
  EVP_CIPHER *local_58;
  EVP_MD *local_50;
  void *local_48;
  long local_40;
  
  uVar17 = 1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = (BIO *)0x0;
  local_68 = (PKCS7 *)0x0;
  local_60 = (stack_st_X509 *)0x0;
  local_58 = (EVP_CIPHER *)0x0;
  local_50 = (EVP_MD *)0x0;
  local_48 = (void *)0x0;
  local_7c = 0x8007;
  local_78 = 0x8007;
  local_74 = 0;
  uVar6 = app_get0_libctx();
  pm = X509_VERIFY_PARAM_new();
  if (pm != (X509_VERIFY_PARAM *)0x0) {
    uVar16 = 0;
    opt_set_unknown_name("cipher");
    uVar17 = opt_init(param_1,param_2,smime_options);
    flags = 0x40;
    local_128 = 0;
    local_e8 = &_LC8;
    local_90 = 0;
    local_d8 = 0;
    local_94 = 0;
    local_d4 = 0;
    local_98 = 0;
    local_108 = 0;
    local_118 = (BIO *)0x0;
    local_d0 = 0;
    local_c8 = 0;
    local_c0 = 0;
    local_f0 = 0;
    local_100 = (long *)0x0;
    local_130 = (long *)0x0;
    local_b8 = 0;
    local_f8 = 0;
    local_e0 = (long *)0x0;
    local_138 = (BIO *)0x0;
    local_140 = (EVP_PKEY *)0x0;
    local_a0 = 0;
    local_a8 = 0;
    local_b0 = 0;
    local_148 = 0;
    local_150 = 0;
    local_120 = (CONF *)0x0;
switchD_00100296_caseD_0:
    iVar3 = opt_next();
    if (iVar3 == 0) {
      iVar3 = opt_num_rest();
      plVar8 = (long *)opt_rest();
      iVar4 = app_RAND_load();
      if (iVar4 == 0) goto LAB_00100392;
      if (((local_118 != (BIO *)0x0) && (iVar4 = opt_md(local_118,&local_50), iVar4 == 0)) ||
         (iVar4 = opt_cipher_any(local_108,&local_58), iVar4 == 0))
      goto switchD_00100296_caseD_ffffffff;
      if ((uVar16 & 0x40) == 0) {
        if (local_148 != 0 || local_150 != 0) {
          BIO_puts(_bio_err,"Multiple signers or keys not allowed\n");
          goto switchD_00100296_caseD_ffffffff;
        }
        if (uVar16 == 0) {
          BIO_puts(_bio_err,"No operation (-encrypt|-sign|...) specified\n");
LAB_00101292:
          local_148 = 0;
          local_150 = 0;
          goto switchD_00100296_caseD_ffffffff;
        }
        if (uVar16 == 0x22) {
          if (local_138 == (BIO *)0x0 && local_100 == (long *)0x0) {
            BIO_printf(_bio_err,"No recipient certificate or key specified\n");
            goto LAB_00101292;
          }
        }
        else if ((uVar16 == 0x11) && (iVar3 == 0)) {
          BIO_printf(_bio_err,"No recipient(s) certificate(s) specified\n");
          goto LAB_00101292;
        }
        iVar3 = app_passwd(local_f0,0,&local_48);
        if (iVar3 == 0) {
          local_148 = 0;
          local_150 = 0;
          goto LAB_0010135a;
        }
        local_148 = 0;
        flags = flags & 0xffffffbf;
        local_150 = 0;
      }
      else {
        if (local_138 == (BIO *)0x0) {
          if (local_130 != (long *)0x0) goto LAB_00100a2c;
          if (local_150 == 0) {
            BIO_printf(_bio_err,"No signer certificate specified\n");
            goto switchD_00100296_caseD_ffffffff;
          }
        }
        else {
          if (local_130 == (long *)0x0) {
            BIO_puts(_bio_err,"Illegal -inkey without -signer\n");
            goto switchD_00100296_caseD_ffffffff;
          }
LAB_00100a2c:
          if (((local_150 == 0) && (local_150 = OPENSSL_sk_new_null(), local_150 == 0)) ||
             ((iVar3 = OPENSSL_sk_push(local_150,local_130), iVar3 < 1 ||
              ((local_148 == 0 && (local_148 = OPENSSL_sk_new_null(), local_148 == 0))))))
          goto LAB_00100392;
          if (local_138 != (BIO *)0x0) {
            local_130 = (long *)local_138;
          }
          iVar3 = OPENSSL_sk_push(local_148,local_130);
          if (iVar3 < 1) goto LAB_00100392;
        }
        iVar3 = app_passwd(local_f0,0,&local_48);
        if (iVar3 == 0) {
LAB_0010135a:
          BIO_printf(_bio_err,"Error getting password\n");
          goto LAB_00100392;
        }
        local_130 = (long *)0x0;
        local_138 = (BIO *)0x0;
      }
      uVar5 = uVar16 & 0x20;
      if ((uVar16 & 0x10) == 0) {
        if ((flags & 0x80) != 0) {
          local_78 = 2;
          if (uVar5 == 0) {
LAB_00101172:
            local_7c = 2;
            goto LAB_0010117d;
          }
          goto LAB_00100af1;
        }
        if (uVar5 != 0) goto LAB_00100af1;
LAB_0010117d:
        bVar1 = false;
        if (uVar16 == 0x11) {
          if (local_58 == (EVP_CIPHER *)0x0) {
            local_58 = EVP_aes_256_cbc();
          }
          local_108 = OPENSSL_sk_new_null();
          if (local_108 == 0) {
            ctx = (X509_STORE *)0x0;
            uVar17 = 2;
            local_110 = (X509 *)0x0;
            local_140 = (EVP_PKEY *)0x0;
            local_138 = (BIO *)0x0;
            local_118 = (BIO *)0x0;
            goto LAB_00100e9f;
          }
          lVar14 = *plVar8;
          if (lVar14 != 0) goto LAB_001011f6;
          if (local_140 != (EVP_PKEY *)0x0) {
            iVar3 = load_certs(local_140,0,&local_60,0,"certificates");
            if (iVar3 == 0) goto LAB_00101496;
            goto LAB_00101a69;
          }
          local_118 = (BIO *)bio_open_default(local_f8,0x72,local_7c);
          if (local_118 != (BIO *)0x0) {
            bVar18 = false;
            local_110 = (X509 *)0x0;
            goto LAB_00100c65;
          }
          ctx = (X509_STORE *)0x0;
          local_110 = (X509 *)0x0;
          local_138 = (BIO *)0x0;
          goto LAB_001017e1;
        }
      }
      else {
        if (uVar5 == 0) {
          if ((flags & 0x80) != 0) goto LAB_00101172;
          goto LAB_0010117d;
        }
LAB_00100af1:
        bVar1 = true;
      }
      local_108 = 0;
      if (local_140 != (EVP_PKEY *)0x0) goto LAB_00100b0a;
      goto LAB_00100b39;
    }
    if (iVar3 < 0x28) {
      if (-2 < iVar3) goto code_r0x0010028f;
      goto switchD_00100296_caseD_0;
    }
    if (0x7f4 < iVar3) goto switchD_00100296_caseD_0;
    if (iVar3 < 0x7d1) {
      if (iVar3 < 0x645) {
        if (iVar3 < 0x641) {
          if ((iVar3 - 0x5ddU < 2) && (iVar3 = opt_rand(iVar3), iVar3 == 0)) goto LAB_001002f0;
          goto switchD_00100296_caseD_0;
        }
        iVar3 = opt_provider(iVar3);
        if (iVar3 != 0) goto switchD_00100296_caseD_0;
      }
      else {
        if (iVar3 != 0x646) goto switchD_00100296_caseD_0;
        uVar7 = opt_arg();
        local_120 = (CONF *)app_load_config_modules(uVar7);
        if (local_120 != (CONF *)0x0) goto switchD_00100296_caseD_0;
      }
      goto LAB_001002f0;
    }
    switch(iVar3) {
    case 0x7d1:
    case 0x7d2:
    case 0x7d3:
    case 0x7d4:
    case 0x7d5:
    case 0x7d6:
    case 0x7d7:
    case 0x7d8:
    case 0x7d9:
    case 0x7da:
    case 0x7db:
    case 0x7dc:
    case 0x7dd:
    case 0x7de:
    case 0x7df:
    case 0x7e0:
    case 0x7e1:
    case 0x7e2:
    case 0x7e3:
    case 0x7e4:
    case 0x7e5:
    case 0x7e6:
    case 0x7e7:
    case 0x7e8:
    case 0x7e9:
    case 0x7ea:
    case 0x7eb:
    case 0x7ec:
    case 0x7ed:
    case 0x7ee:
      iVar3 = opt_verify(iVar3);
      if (iVar3 == 0) goto switchD_00100296_caseD_ffffffff;
      local_90 = local_90 + 1;
    default:
      goto switchD_00100296_caseD_0;
    case 0x7f0:
      local_f8 = opt_arg();
      goto switchD_00100296_caseD_0;
    case 0x7f1:
      uVar7 = opt_arg();
      iVar3 = opt_format(uVar7,0x26,&local_7c);
      break;
    case 0x7f2:
      local_b8 = opt_arg();
      goto switchD_00100296_caseD_0;
    case 0x7f3:
      uVar7 = opt_arg();
      iVar3 = opt_format(uVar7,0x26,&local_78);
      break;
    case 0x7f4:
      local_e0 = (long *)opt_arg();
      goto switchD_00100296_caseD_0;
    }
    goto joined_r0x001006dc;
  }
  goto LAB_001000ee;
code_r0x00100d9e:
  flags = uVar5;
  if (((uVar16 == 0x53) && ((uVar5 & 0x1000) == 0)) &&
     (iVar3 = PKCS7_final(local_68,local_118,uVar5), iVar3 == 0)) {
    uVar17 = 3;
    ctx = (X509_STORE *)0x0;
    goto LAB_00100e9f;
  }
joined_r0x00101511:
  if (local_68 == (PKCS7 *)0x0) {
LAB_00101517:
    ctx = (X509_STORE *)0x0;
LAB_0010151a:
    uVar17 = 3;
    BIO_printf(_bio_err,"Error creating PKCS#7 structure\n");
LAB_00100e9f:
    signcert = (X509 *)0x0;
    pXVar12 = (X509 *)0x0;
    goto LAB_00100ea4;
  }
LAB_00100dc3:
  if (local_c0 != 0) {
    BIO_printf(local_138,"To: %s%s",local_c0,local_e8);
  }
  if (local_c8 != 0) {
    BIO_printf(local_138,"From: %s%s",local_c8,local_e8);
  }
  if (local_d0 != 0) {
    BIO_printf(local_138,"Subject: %s%s",local_d0,local_e8);
  }
  if (local_78 == 0x8007) {
    if (uVar16 == 0x76) {
      iVar3 = SMIME_write_PKCS7(local_138,local_68,local_70,flags);
    }
    else {
      iVar3 = SMIME_write_PKCS7(local_138,local_68,local_118,flags);
    }
  }
  else if (local_78 == 0x8005) {
    iVar3 = PEM_write_bio_PKCS7_stream(local_138,local_68,local_118,flags);
  }
  else {
    if (local_78 != 4) {
      ctx = (X509_STORE *)0x0;
      uVar17 = 4;
      BIO_printf(_bio_err,"Bad output format for PKCS#7 file\n");
      goto LAB_00100e9f;
    }
    iVar3 = i2d_PKCS7_bio_stream(local_138,local_68,local_118,flags);
  }
  ctx = (X509_STORE *)0x0;
  v = ctx;
  if (iVar3 == 0) {
    uVar17 = 3;
    BIO_printf(_bio_err,"Error writing output\n");
    goto LAB_00100e9f;
  }
LAB_001003c2:
  uVar17 = 0;
  signcert = (X509 *)0x0;
  pXVar12 = (X509 *)0x0;
  goto LAB_001003ca;
code_r0x0010028f:
  switch(iVar3) {
  default:
    goto switchD_00100296_caseD_0;
  case 1:
    opt_help(smime_options);
    goto LAB_00100392;
  case 2:
    if ((uVar16 == 0) || (uVar16 == 0x11)) {
      uVar16 = 0x11;
      goto switchD_00100296_caseD_0;
    }
    pcVar15 = "pk7out";
    if (uVar16 != 0x35) {
      if (uVar16 < 0x36) {
        pcVar15 = "decrypt";
        if ((uVar16 != 0x22) && (pcVar15 = "(invalid operation)", uVar16 == 0x24)) {
          pcVar15 = "verify";
        }
      }
      else {
        pcVar15 = "sign";
        if ((uVar16 != 0x53) && (pcVar15 = "(invalid operation)", uVar16 == 0x76)) {
          pcVar15 = "resign";
        }
      }
    }
    pcVar13 = "encrypt";
    break;
  case 3:
    if ((uVar16 == 0) || (uVar16 == 0x22)) {
      uVar16 = 0x22;
      goto switchD_00100296_caseD_0;
    }
    pcVar15 = "pk7out";
    if (uVar16 != 0x35) {
      if (uVar16 < 0x36) {
        pcVar15 = "verify";
        if ((uVar16 != 0x24) && (pcVar15 = "(invalid operation)", uVar16 == 0x11)) {
          pcVar15 = "encrypt";
        }
      }
      else {
        pcVar15 = "sign";
        if ((uVar16 != 0x53) && (pcVar15 = "(invalid operation)", uVar16 == 0x76)) {
          pcVar15 = "resign";
        }
      }
    }
    pcVar13 = "decrypt";
    break;
  case 4:
    if ((uVar16 == 0) || (uVar16 == 0x53)) {
      uVar16 = 0x53;
      goto switchD_00100296_caseD_0;
    }
    pcVar15 = "pk7out";
    if (uVar16 != 0x35) {
      if (uVar16 < 0x36) {
        pcVar15 = "decrypt";
        if (((uVar16 != 0x22) && (pcVar15 = "verify", uVar16 != 0x24)) &&
           (pcVar15 = "(invalid operation)", uVar16 == 0x11)) {
          pcVar15 = "encrypt";
        }
      }
      else {
        pcVar15 = "(invalid operation)";
        if (uVar16 == 0x76) {
          pcVar15 = "resign";
        }
      }
    }
    pcVar13 = "sign";
    break;
  case 5:
    if ((uVar16 == 0) || (uVar16 == 0x76)) {
      uVar16 = 0x76;
      goto switchD_00100296_caseD_0;
    }
    pcVar15 = "pk7out";
    if (uVar16 != 0x35) {
      if (uVar16 < 0x36) {
        pcVar15 = "decrypt";
        if (((uVar16 != 0x22) && (pcVar15 = "verify", uVar16 != 0x24)) &&
           (pcVar15 = "(invalid operation)", uVar16 == 0x11)) {
          pcVar15 = "encrypt";
        }
      }
      else {
        pcVar15 = "(invalid operation)";
        if (uVar16 == 0x53) {
          pcVar15 = "sign";
        }
      }
    }
    pcVar13 = "resign";
    break;
  case 6:
    if ((uVar16 == 0) || (uVar16 == 0x24)) {
      uVar16 = 0x24;
      goto switchD_00100296_caseD_0;
    }
    pcVar15 = "pk7out";
    if (uVar16 != 0x35) {
      if (uVar16 < 0x36) {
        pcVar15 = "decrypt";
        if ((uVar16 != 0x22) && (pcVar15 = "(invalid operation)", uVar16 == 0x11)) {
          pcVar15 = "encrypt";
        }
      }
      else {
        pcVar15 = "sign";
        if ((uVar16 != 0x53) && (pcVar15 = "(invalid operation)", uVar16 == 0x76)) {
          pcVar15 = "resign";
        }
      }
    }
    pcVar13 = "verify";
    break;
  case 7:
    if ((uVar16 == 0) || (uVar16 == 0x35)) {
      uVar16 = 0x35;
      goto switchD_00100296_caseD_0;
    }
    if (uVar16 < 0x36) {
      pcVar15 = "decrypt";
      if (((uVar16 != 0x22) && (pcVar15 = "verify", uVar16 != 0x24)) &&
         (pcVar15 = "(invalid operation)", uVar16 == 0x11)) {
        pcVar15 = "encrypt";
      }
    }
    else {
      pcVar15 = "sign";
      if ((uVar16 != 0x53) && (pcVar15 = "(invalid operation)", uVar16 == 0x76)) {
        pcVar15 = "resign";
      }
    }
    pcVar13 = "pk7out";
    break;
  case 8:
    flags = flags | 1;
    goto switchD_00100296_caseD_0;
  case 9:
    flags = flags | 0x10;
    goto switchD_00100296_caseD_0;
  case 10:
    flags = flags | 0x20;
    goto switchD_00100296_caseD_0;
  case 0xb:
    flags = flags | 8;
    goto switchD_00100296_caseD_0;
  case 0xc:
    flags = flags | 2;
    goto switchD_00100296_caseD_0;
  case 0xd:
    flags = flags | 0x100;
    goto switchD_00100296_caseD_0;
  case 0xe:
    flags = flags & 0xffffffbf;
    goto switchD_00100296_caseD_0;
  case 0xf:
    flags = flags | 0x200;
    goto switchD_00100296_caseD_0;
  case 0x10:
    flags = flags | 0x80;
    goto switchD_00100296_caseD_0;
  case 0x11:
    flags = flags | 4;
    goto switchD_00100296_caseD_0;
  case 0x12:
  case 0x13:
    local_d8 = 1;
    goto switchD_00100296_caseD_0;
  case 0x14:
    local_d8 = 0;
    goto switchD_00100296_caseD_0;
  case 0x15:
    flags = flags | 0x800;
    local_e8 = &_LC7;
    goto switchD_00100296_caseD_0;
  case 0x16:
    uVar7 = opt_arg();
    local_128 = setup_engine_methods(uVar7,0xffffffff,0);
    goto switchD_00100296_caseD_0;
  case 0x17:
    local_f0 = opt_arg();
    goto switchD_00100296_caseD_0;
  case 0x18:
    local_c0 = opt_arg();
    goto switchD_00100296_caseD_0;
  case 0x19:
    local_c8 = opt_arg();
    goto switchD_00100296_caseD_0;
  case 0x1a:
    local_d0 = opt_arg();
    goto switchD_00100296_caseD_0;
  case 0x1b:
    if (local_130 != (long *)0x0) {
      if (((local_150 == 0) && (local_150 = OPENSSL_sk_new_null(), local_150 == 0)) ||
         (((iVar3 = OPENSSL_sk_push(local_150), iVar3 < 1 ||
           ((local_148 == 0 && (local_148 = OPENSSL_sk_new_null(), local_148 == 0)))) ||
          (iVar3 = OPENSSL_sk_push(local_148), iVar3 < 1)))) {
LAB_001002f0:
        uVar17 = 0;
        local_110 = (X509 *)0x0;
        signcert = (X509 *)0x0;
        pXVar12 = (X509 *)0x0;
        local_108 = 0;
        local_140 = (EVP_PKEY *)0x0;
        local_138 = (BIO *)0x0;
        local_118 = (BIO *)0x0;
        v = (X509_STORE *)0x0;
        goto LAB_001003ca;
      }
      local_138 = (BIO *)0x0;
    }
    local_130 = (long *)opt_arg();
    goto switchD_00100296_caseD_0;
  case 0x1c:
    local_100 = (long *)opt_arg();
    goto switchD_00100296_caseD_0;
  case 0x1d:
    local_118 = (BIO *)opt_arg();
    goto switchD_00100296_caseD_0;
  case 0x1e:
    local_108 = opt_unknown();
    goto switchD_00100296_caseD_0;
  case 0x1f:
    if (local_138 != (BIO *)0x0) {
      if (local_130 == (long *)0x0) {
        BIO_printf(_bio_err,"%s: Must have -signer before -inkey\n",uVar17);
        goto switchD_00100296_caseD_ffffffff;
      }
      if (((local_150 == 0) && (local_150 = OPENSSL_sk_new_null(), local_150 == 0)) ||
         ((iVar3 = OPENSSL_sk_push(local_150), iVar3 < 1 ||
          (((local_148 == 0 && (local_148 = OPENSSL_sk_new_null(), local_148 == 0)) ||
           (iVar3 = OPENSSL_sk_push(local_148), iVar3 < 1)))))) goto LAB_001002f0;
      local_130 = (long *)0x0;
    }
    local_138 = (BIO *)opt_arg();
    goto switchD_00100296_caseD_0;
  case 0x20:
    uVar7 = opt_arg();
    iVar3 = opt_format(uVar7,0xffe,&local_74);
joined_r0x001006dc:
    if (iVar3 == 0) goto switchD_00100296_caseD_ffffffff;
    goto switchD_00100296_caseD_0;
  case 0x21:
    local_140 = (EVP_PKEY *)opt_arg();
    goto switchD_00100296_caseD_0;
  case 0x22:
    local_b0 = opt_arg();
    goto switchD_00100296_caseD_0;
  case 0x23:
    local_a8 = opt_arg();
    goto switchD_00100296_caseD_0;
  case 0x24:
    local_a0 = opt_arg();
    goto switchD_00100296_caseD_0;
  case 0x25:
    local_d4 = 1;
    goto switchD_00100296_caseD_0;
  case 0x26:
    local_98 = 1;
    goto switchD_00100296_caseD_0;
  case 0x27:
    local_94 = 1;
    goto switchD_00100296_caseD_0;
  case -1:
    goto switchD_00100296_caseD_ffffffff;
  }
  BIO_printf(_bio_err,"%s: Cannot use -%s together with -%s\n",uVar17,pcVar13,pcVar15);
  goto LAB_00100392;
switchD_00100296_caseD_ffffffff:
  BIO_printf(_bio_err,"%s: Use -help for summary.\n",uVar17);
LAB_00100392:
  local_110 = (X509 *)0x0;
  v = (X509_STORE *)0x0;
  local_108 = 0;
  local_140 = (EVP_PKEY *)0x0;
  local_138 = (BIO *)0x0;
  local_118 = (BIO *)0x0;
  goto LAB_001003c2;
  while( true ) {
    lVar14 = plVar8[1];
    plVar8 = plVar8 + 1;
    if (lVar14 == 0) break;
LAB_001011f6:
    pXVar12 = (X509 *)load_cert_pass(lVar14,0,1);
    if (pXVar12 == (X509 *)0x0) {
      signcert = (X509 *)0x0;
      uVar17 = 2;
      local_110 = (X509 *)0x0;
      local_140 = (EVP_PKEY *)0x0;
      local_138 = (BIO *)0x0;
      local_118 = (BIO *)0x0;
      goto LAB_00101233;
    }
    iVar3 = OPENSSL_sk_push();
    if (iVar3 == 0) {
      uVar17 = 2;
      signcert = (X509 *)0x0;
      local_110 = (X509 *)0x0;
      local_140 = (EVP_PKEY *)0x0;
      local_138 = (BIO *)0x0;
      local_118 = (BIO *)0x0;
      goto LAB_00101233;
    }
  }
  bVar1 = false;
  if (local_140 == (EVP_PKEY *)0x0) {
LAB_00101a69:
    bVar1 = false;
    bVar2 = false;
    goto LAB_00100b65;
  }
LAB_00100b0a:
  iVar3 = load_certs(local_140,0,&local_60,0,"certificates");
  if (iVar3 == 0) {
LAB_00101496:
    uVar17 = 2;
    ctx = (X509_STORE *)0x0;
    ERR_print_errors(_bio_err);
    local_110 = (X509 *)0x0;
    local_140 = (EVP_PKEY *)0x0;
    local_138 = (BIO *)0x0;
    local_118 = (BIO *)0x0;
    goto LAB_00100e9f;
  }
LAB_00100b39:
  bVar18 = uVar16 == 0x22;
  bVar2 = local_100 != (long *)0x0 && bVar18;
  if (bVar2) {
    local_110 = (X509 *)load_cert_pass(local_100,0,1,0,"recipient certificate file");
    if (local_138 != (BIO *)0x0) {
      local_100 = (long *)local_138;
    }
    plVar8 = local_100;
    local_138 = (BIO *)local_100;
    if (local_110 != (X509 *)0x0) goto LAB_001012e9;
    ctx = (X509_STORE *)0x0;
    uVar17 = 2;
    ERR_print_errors(_bio_err);
    local_140 = (EVP_PKEY *)0x0;
    local_138 = (BIO *)0x0;
    local_118 = (BIO *)0x0;
    goto LAB_00100e9f;
  }
  if (uVar16 == 0x22) {
    if (local_138 == (BIO *)0x0) {
      bVar2 = true;
      goto LAB_00100b65;
    }
    local_110 = (X509 *)0x0;
LAB_001012e9:
    local_140 = (EVP_PKEY *)load_key(local_138,local_74,0,local_48,local_128,"signing key");
    if (local_140 == (EVP_PKEY *)0x0) {
      local_138 = (BIO *)0x0;
      ctx = (X509_STORE *)0x0;
      uVar17 = 2;
      local_118 = (BIO *)0x0;
      goto LAB_00100e9f;
    }
  }
  else {
    if ((uVar16 == 0x53) &&
       ((local_110 = (X509 *)0x0, local_138 != (BIO *)0x0 ||
        (local_138 = (BIO *)local_130, local_130 != (long *)0x0)))) goto LAB_001012e9;
LAB_00100b65:
    bVar18 = bVar2;
    local_110 = (X509 *)0x0;
    local_140 = (EVP_PKEY *)0x0;
  }
  local_118 = (BIO *)bio_open_default(local_f8,0x72,local_7c);
  if (local_118 == (BIO *)0x0) {
    local_138 = (BIO *)0x0;
    ctx = (X509_STORE *)0x0;
    uVar17 = 2;
    goto LAB_00100e9f;
  }
  if (!bVar1) goto LAB_00100c65;
  uVar17 = app_get0_propq();
  local_68 = (PKCS7 *)PKCS7_new_ex(uVar6,uVar17);
  if (local_68 == (PKCS7 *)0x0) {
    BIO_printf(_bio_err,"Error allocating PKCS7 object\n");
LAB_001017bc:
    uVar17 = 2;
    ctx = (X509_STORE *)0x0;
    local_138 = (BIO *)0x0;
    goto LAB_00100e9f;
  }
  if (local_7c == 0x8007) {
    pPVar9 = (PKCS7 *)SMIME_read_PKCS7_ex(local_118,&local_70,&local_68);
  }
  else if (local_7c == 0x8005) {
    pPVar9 = PEM_read_bio_PKCS7(local_118,&local_68,(undefined1 *)0x0,(void *)0x0);
  }
  else {
    if (local_7c != 4) {
      ctx = (X509_STORE *)0x0;
      uVar17 = 2;
      BIO_printf(_bio_err,"Bad input format for PKCS#7 file\n");
      local_138 = (BIO *)0x0;
      goto LAB_00100e9f;
    }
    pPVar9 = d2i_PKCS7_bio(local_118,&local_68);
  }
  if (pPVar9 == (PKCS7 *)0x0) {
    BIO_printf(_bio_err,"Error reading S/MIME message\n");
    goto LAB_001017bc;
  }
  plVar8 = local_e0;
  if (local_e0 != (long *)0x0) {
    BIO_free(local_70);
    local_70 = BIO_new_file((char *)local_e0,"rb");
    if (local_70 == (BIO *)0x0) {
      BIO_printf(_bio_err,"Can\'t read content file %s\n",local_e0);
      goto LAB_001017bc;
    }
  }
LAB_00100c65:
  local_138 = (BIO *)bio_open_default(local_b8,0x77,local_78);
  if (local_138 == (BIO *)0x0) goto LAB_001017bc;
  if (uVar16 == 0x24) {
    ctx = (X509_STORE *)setup_verify(local_b0,local_d4,local_a8,local_98,local_a0,local_94);
    if (ctx == (X509_STORE *)0x0) {
LAB_001017e1:
      uVar17 = 2;
    }
    else {
      X509_STORE_set_verify_cb(ctx,smime_cb);
      if (local_90 != 0) {
        X509_STORE_set1_param(ctx,pm);
      }
      if (local_68 == (PKCS7 *)0x0) goto LAB_0010151a;
      iVar3 = PKCS7_verify(local_68,local_60,ctx,local_70,local_138,flags);
      if (iVar3 != 0) {
        BIO_printf(_bio_err,"Verification successful\n");
        psVar11 = PKCS7_get0_signers(local_68,local_60,flags);
        if (local_130 != (long *)0x0) {
          bp = BIO_new_file((char *)local_130,"w");
          if (bp == (BIO *)0x0) {
            uVar17 = 5;
            BIO_printf(_bio_err,"Error writing signers to %s\n",local_130);
            goto LAB_00100e9f;
          }
          for (iVar3 = 0; iVar4 = OPENSSL_sk_num(psVar11), iVar3 < iVar4; iVar3 = iVar3 + 1) {
            pXVar12 = (X509 *)OPENSSL_sk_value(psVar11,iVar3);
            PEM_write_bio_X509(bp,pXVar12);
          }
          BIO_free(bp);
        }
        OPENSSL_sk_free(psVar11);
        v = ctx;
        goto LAB_001003c2;
      }
      uVar17 = 4;
      BIO_printf(_bio_err,"Verification failure\n");
    }
    goto LAB_00100e9f;
  }
  if (uVar16 == 0x11) {
    flags = flags | local_d8 << 0xc;
    uVar17 = app_get0_propq();
    local_68 = (PKCS7 *)PKCS7_encrypt_ex(local_108,local_118,local_58,flags,uVar6,uVar17);
    goto joined_r0x00101511;
  }
  if ((uVar16 & 0x40) == 0) {
    if (local_68 == (PKCS7 *)0x0) goto LAB_00101517;
    if (bVar18) {
      ctx = (X509_STORE *)0x0;
      iVar3 = PKCS7_decrypt(local_68,local_140,local_110,local_138,flags);
      v = (X509_STORE *)0x0;
      if (iVar3 == 0) {
        uVar17 = 4;
        BIO_printf(_bio_err,"Error decrypting PKCS#7 structure\n");
        goto LAB_00100e9f;
      }
    }
    else {
      if (uVar16 != 0x35) goto LAB_00100dc3;
      PEM_write_bio_PKCS7(local_138,local_68);
      v = (X509_STORE *)0x0;
    }
    goto LAB_001003c2;
  }
  if (uVar16 == 0x53) {
    if ((flags & 0x40) == 0) {
      flags = flags | local_d8 << 0xc;
    }
    else if (local_78 == 0x8007) {
      flags = flags | 0x1000;
    }
    uVar17 = app_get0_propq();
    uVar5 = flags | 0x4000;
    local_68 = (PKCS7 *)PKCS7_sign_ex(0,0,local_60,local_118,uVar5,uVar6,uVar17,plVar8);
    if (local_68 == (PKCS7 *)0x0) {
      uVar17 = 3;
      ctx = (X509_STORE *)0x0;
      goto LAB_00100e9f;
    }
    if ((flags & 2) != 0) {
      for (iVar3 = 0; iVar4 = OPENSSL_sk_num(local_60), iVar3 < iVar4; iVar3 = iVar3 + 1) {
        pXVar12 = (X509 *)OPENSSL_sk_value(local_60,iVar3);
        PKCS7_add_certificate(local_68,pXVar12);
      }
    }
  }
  else {
    uVar5 = flags | 0x8000;
  }
  iVar3 = 0;
  while( true ) {
    iVar4 = OPENSSL_sk_num(local_150);
    if (iVar4 <= iVar3) goto code_r0x00100d9e;
    uVar6 = OPENSSL_sk_value(local_150,iVar3);
    uVar17 = OPENSSL_sk_value(local_148,iVar3);
    signcert = (X509 *)load_cert_pass(uVar6,0,1,0,"signer certificate");
    pkey = local_140;
    if ((signcert == (X509 *)0x0) ||
       (pkey = (EVP_PKEY *)load_key(uVar17,local_74,0,local_48,local_128,"signing key"),
       pkey == (EVP_PKEY *)0x0)) break;
    pPVar10 = PKCS7_sign_add_signer(local_68,signcert,pkey,local_50,uVar5);
    if (pPVar10 == (PKCS7_SIGNER_INFO *)0x0) {
      uVar17 = 3;
      pXVar12 = (X509 *)0x0;
      local_140 = pkey;
      goto LAB_00101233;
    }
    iVar3 = iVar3 + 1;
    X509_free(signcert);
    local_140 = (EVP_PKEY *)0x0;
    EVP_PKEY_free(pkey);
  }
  pXVar12 = (X509 *)0x0;
  uVar17 = 3;
  local_140 = pkey;
LAB_00101233:
  ctx = (X509_STORE *)0x0;
LAB_00100ea4:
  ERR_print_errors(_bio_err);
  v = ctx;
LAB_001003ca:
  OSSL_STACK_OF_X509_free(local_108);
  OSSL_STACK_OF_X509_free(local_60);
  X509_VERIFY_PARAM_free(pm);
  OPENSSL_sk_free(local_150);
  OPENSSL_sk_free(local_148);
  X509_STORE_free(v);
  X509_free(pXVar12);
  X509_free(local_110);
  X509_free(signcert);
  EVP_PKEY_free(local_140);
  EVP_MD_free(local_50);
  EVP_CIPHER_free(local_58);
  PKCS7_free(local_68);
  release_engine(local_128);
  BIO_free(local_118);
  BIO_free(local_70);
  BIO_free_all(local_138);
  CRYPTO_free(local_48);
  NCONF_free(local_120);
LAB_001000ee:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar17;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


