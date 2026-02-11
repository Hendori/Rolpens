
void show_digests(long param_1,undefined8 *param_2)

{
  int iVar1;
  byte *__haystack;
  undefined8 uVar2;
  char *pcVar3;
  ushort **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  EVP_MD *pEVar8;
  
  __haystack = *(byte **)(param_1 + 8);
  pcVar3 = strstr((char *)__haystack,"rsa");
  if (((pcVar3 == (char *)0x0) && (pcVar3 = strstr((char *)__haystack,"RSA"), pcVar3 == (char *)0x0)
      ) && (ppuVar4 = __ctype_b_loc(),
           (*(byte *)((long)*ppuVar4 + (ulong)*__haystack * 2 + 1) & 2) != 0)) {
    uVar5 = app_get0_propq();
    uVar2 = *(undefined8 *)(param_1 + 8);
    uVar6 = app_get0_libctx();
    lVar7 = EVP_MD_fetch(uVar6,uVar2,uVar5);
    if ((lVar7 != 0) ||
       (pEVar8 = EVP_get_digestbyname(*(char **)(param_1 + 8)), pEVar8 != (EVP_MD *)0x0)) {
      BIO_printf((BIO *)*param_2,"-%-25s",*(undefined8 *)(param_1 + 8));
      iVar1 = *(int *)(param_2 + 1);
      *(int *)(param_2 + 1) = iVar1 + 1;
      if (iVar1 + 1 == 3) {
        BIO_printf((BIO *)*param_2,"\n");
        *(undefined4 *)(param_2 + 1) = 0;
      }
      else {
        BIO_printf((BIO *)*param_2," ");
      }
      EVP_MD_free(lVar7);
      return;
    }
  }
  return;
}



void print_out(BIO *param_1,byte *param_2,int param_3,int param_4,int param_5,char *param_6,
              long param_7,char *param_8)

{
  char *pcVar1;
  byte *pbVar2;
  char cVar3;
  byte bVar4;
  bool bVar5;
  undefined2 uVar6;
  size_t sVar7;
  undefined1 *ptr;
  long lVar8;
  char *pcVar9;
  ulong uVar10;
  bool bVar11;
  
  if (param_5 != 0) {
    BIO_write(param_1,param_2,param_3);
    return;
  }
  if (param_4 == 2) {
    sVar7 = strlen(param_8);
    if (sVar7 == 0) {
      ptr = (undefined1 *)app_malloc(1,param_8);
      *ptr = 0;
    }
    else {
      pcVar1 = param_8 + sVar7;
      lVar8 = 0;
      pcVar9 = param_8;
      do {
        cVar3 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        lVar8 = lVar8 + (ulong)(cVar3 == '\n');
      } while (pcVar9 != pcVar1);
      ptr = (undefined1 *)app_malloc(lVar8 + 1 + sVar7,param_8);
      uVar6 = _LC5;
      lVar8 = 0;
      bVar11 = false;
      do {
        while( true ) {
          bVar5 = bVar11;
          cVar3 = *param_8;
          if (cVar3 != '\n') break;
          param_8 = param_8 + 1;
          *(undefined2 *)(ptr + lVar8) = uVar6;
          lVar8 = lVar8 + 2;
          bVar5 = true;
          bVar11 = true;
          if (param_8 == pcVar1) goto LAB_00100303;
        }
        param_8 = param_8 + 1;
        ptr[lVar8] = cVar3;
        lVar8 = lVar8 + 1;
        bVar11 = bVar5;
      } while (param_8 != pcVar1);
LAB_00100303:
      ptr[lVar8] = 0;
      if (bVar5) {
        BIO_puts(param_1,"\\");
      }
    }
    if (0 < param_3) {
      pbVar2 = param_2 + (ulong)(param_3 - 1) + 1;
      do {
        bVar4 = *param_2;
        param_2 = param_2 + 1;
        BIO_printf(param_1,"%02x",(ulong)bVar4);
      } while (pbVar2 != param_2);
    }
    BIO_printf(param_1," *%s\n",ptr);
    CRYPTO_free(ptr);
    return;
  }
  if (param_6 == (char *)0x0) {
    if (param_7 != 0) {
      BIO_printf(param_1,"%s(%s)= ",param_7,param_8);
      goto LAB_001001a3;
    }
  }
  else {
    BIO_puts(param_1,param_6);
    if (param_7 != 0) {
      BIO_printf(param_1,"-%s",param_7);
    }
  }
  BIO_printf(param_1,"(%s)= ",param_8);
LAB_001001a3:
  if (0 < param_3) {
    uVar10 = 0;
    do {
      if (((int)uVar10 != 0) && (param_4 != 0)) {
        BIO_printf(param_1,":");
      }
      BIO_printf(param_1,"%02x",(ulong)param_2[uVar10]);
      bVar11 = uVar10 != param_3 - 1;
      uVar10 = uVar10 + 1;
    } while (bVar11);
  }
  BIO_printf(param_1,"\n");
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
do_fp_oneshot_sign(BIO *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,long param_6,long param_7,int param_8,undefined8 param_9,
                  undefined8 param_10)

{
  int iVar1;
  void *ptr;
  long lVar2;
  undefined4 uVar3;
  long in_FS_OFFSET;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_48 = 0;
  iVar1 = bio_to_mem(&local_48,0x1000000);
  if (iVar1 < 1) {
    uVar3 = 1;
    BIO_printf(_bio_err,"Read error in %s\n",param_10);
    goto LAB_0010049d;
  }
  lVar2 = (long)iVar1;
  if (param_7 == 0) {
    if (param_6 == 0) {
      BIO_printf(_bio_err,"key must be set for one-shot algorithms\n");
LAB_001004fe:
      ptr = (void *)0x0;
      uVar3 = 1;
    }
    else {
      iVar1 = EVP_DigestSign(param_2,0,&local_50,local_48,lVar2);
      if (iVar1 == 1) {
        ptr = (void *)app_malloc(local_50,"Signature buffer");
        iVar1 = EVP_DigestSign(param_2,ptr,&local_50,local_48,lVar2);
        if (iVar1 == 1) {
          uVar3 = 0;
          print_out(param_1,ptr,local_50,param_4,param_5,param_9,0,param_10);
        }
        else {
          BIO_printf(_bio_err,"Error signing data\n");
          uVar3 = 1;
        }
      }
      else {
        uVar3 = 1;
        BIO_printf(_bio_err,"Error getting maximum length of signed data\n");
        ptr = (void *)0x0;
      }
    }
  }
  else {
    iVar1 = EVP_DigestVerify(param_2,param_7,(long)param_8,local_48,lVar2);
    if (iVar1 < 1) {
      if (iVar1 == 0) {
        BIO_printf(param_1,"Verification failure\n");
      }
      else {
        BIO_printf(_bio_err,"Error verifying data\n");
      }
      goto LAB_001004fe;
    }
    ptr = (void *)0x0;
    BIO_printf(param_1,"Verified OK\n");
    uVar3 = 0;
  }
  CRYPTO_free(ptr);
  CRYPTO_clear_free(local_48,lVar2,"apps/dgst.c",0x2e6);
LAB_0010049d:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
do_fp(BIO *param_1,uchar *param_2,BIO *param_3,undefined4 param_4,undefined4 param_5,int param_6,
     long param_7,uchar *param_8,uint param_9,undefined8 param_10,undefined8 param_11,
     undefined8 param_12)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  uchar *puVar4;
  long in_FS_OFFSET;
  EVP_MD_CTX *local_58;
  EVP_MD_CTX *local_50;
  EVP_MD_CTX *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = (EVP_MD_CTX *)0x2000;
  do {
    lVar3 = BIO_ctrl(param_3,10,0,(void *)0x0);
    if (((int)lVar3 == 0) && (lVar3 = BIO_ctrl(param_3,2,0,(void *)0x0), (int)lVar3 != 0)) break;
    iVar1 = BIO_read(param_3,param_2,0x2000);
    if (iVar1 < 0) {
      BIO_printf(_bio_err,"Read error in %s\n",param_12);
      goto LAB_001006f4;
    }
  } while (iVar1 != 0);
  if (param_8 == (uchar *)0x0) {
    puVar4 = (uchar *)0x0;
    if (param_7 == 0) {
      if (param_6 < 1) {
        iVar1 = BIO_gets(param_3,(char *)param_2,0x2000);
        local_58 = (EVP_MD_CTX *)(long)iVar1;
        if (iVar1 < 0) goto LAB_001006f4;
      }
      else {
        local_58 = (EVP_MD_CTX *)(long)param_6;
        puVar4 = (uchar *)0x0;
        if ((EVP_MD_CTX *)0x2000 < local_58) {
          param_2 = (uchar *)app_malloc(local_58,"Digest buffer");
          puVar4 = param_2;
        }
        BIO_ctrl(param_3,0x78,0,&local_48);
        iVar1 = EVP_DigestFinalXOF(local_48,param_2,local_58);
        if (iVar1 == 0) {
          BIO_printf(_bio_err,"Error Digesting Data\n");
          uVar2 = 1;
          goto LAB_001007bd;
        }
      }
LAB_00100798:
      print_out(param_1,param_2,local_58,param_4,param_5,param_10,param_11,param_12);
      uVar2 = 0;
    }
    else {
      BIO_ctrl(param_3,0x78,0,&local_50);
      iVar1 = EVP_DigestSignFinal(local_50,(uchar *)0x0,(size_t *)&local_48);
      if (iVar1 == 0) {
        BIO_printf(_bio_err,"Error getting maximum length of signed data\n");
        goto LAB_001006f4;
      }
      if ((EVP_MD_CTX *)0x2000 < local_48) {
        local_58 = local_48;
        param_2 = (uchar *)app_malloc(local_48,"Signature buffer");
        puVar4 = param_2;
      }
      iVar1 = EVP_DigestSignFinal(local_50,param_2,(size_t *)&local_58);
      if (iVar1 != 0) goto LAB_00100798;
      BIO_printf(_bio_err,"Error signing data\n",local_58);
      uVar2 = 1;
    }
LAB_001007bd:
    if (puVar4 != (uchar *)0x0) {
      CRYPTO_clear_free(puVar4,local_58,"apps/dgst.c",0x2b2);
    }
  }
  else {
    BIO_ctrl(param_3,0x78,0,&local_48);
    iVar1 = EVP_DigestVerifyFinal(local_48,param_8,(ulong)param_9);
    if (0 < iVar1) {
      BIO_printf(param_1,"Verified OK\n");
      uVar2 = 0;
      goto LAB_00100700;
    }
    if (iVar1 == 0) {
      BIO_printf(param_1,"Verification failure\n");
    }
    else {
      BIO_printf(_bio_err,"Error verifying data\n");
    }
LAB_001006f4:
    uVar2 = 1;
  }
LAB_00100700:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int dgst_main(undefined4 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  char *__nptr;
  long lVar13;
  char *filename;
  ENGINE *impl;
  BIO_METHOD *pBVar14;
  BIO *b;
  BIO *pkey;
  size_t sVar15;
  long lVar16;
  EVP_MD *pEVar17;
  undefined8 uVar18;
  void *data;
  char *pcVar19;
  BIO *pBVar20;
  long in_FS_OFFSET;
  bool bVar21;
  undefined1 auVar22 [16];
  long local_150;
  long local_148;
  ENGINE *local_140;
  EVP_MD_CTX *local_130;
  BIO *local_128;
  BIO *local_120;
  uint local_114;
  char *local_110;
  BIO **local_108;
  BIO *local_100;
  undefined8 local_f8;
  undefined4 local_e8;
  int local_e4;
  undefined4 local_c4;
  void *local_c0;
  EVP_MD *local_b8;
  EVP_MD_CTX *local_b0;
  BIO *local_a8;
  undefined4 local_a0;
  int local_98;
  short local_94;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_c0 = (void *)0x0;
  local_b8 = (EVP_MD *)0x0;
  local_c4 = 0;
  uVar10 = app_malloc(0x2000,"I/O buffer");
  local_b8 = EVP_get_digestbyname((char *)*param_2);
  pcVar19 = (char *)local_b8;
  if (local_b8 != (EVP_MD *)0x0) {
    pcVar19 = (char *)*param_2;
  }
  filename = (char *)0x0;
  opt_set_unknown_name("digest");
  uVar11 = opt_init(param_1,param_2,dgst_options);
  bVar21 = false;
  lVar16 = 0;
  local_e4 = 0;
  bVar3 = false;
  bVar2 = false;
  local_114 = 0xffffffff;
  bVar4 = false;
  local_e8 = 0;
  local_120 = (BIO *)0x0;
  local_f8 = 0;
  local_100 = (BIO *)0x0;
  local_110 = (char *)0x0;
  local_150 = 0;
  local_148 = 0;
  local_140 = (ENGINE *)0x0;
switchD_00100ad6_caseD_0:
  iVar6 = opt_next();
  if (iVar6 != 0) goto LAB_00100abd;
LAB_00100b60:
  iVar7 = opt_num_rest();
  puVar12 = (undefined8 *)opt_rest();
  if ((1 < iVar7) && (lVar16 != 0)) {
    BIO_printf(_bio_err,"%s: Can only sign or verify one file.\n",uVar11);
    goto LAB_00100bfa;
  }
  iVar8 = app_RAND_load();
  if (iVar8 == 0) goto LAB_00100bfa;
  if (((EVP_MD *)pcVar19 != (EVP_MD *)0x0) && (iVar8 = opt_md(pcVar19,&local_b8), iVar8 == 0))
  goto switchD_00100ad6_caseD_ffffffff;
  if ((filename == (char *)0x0) && (bVar3)) {
    BIO_printf(_bio_err,"No signature to verify: use the -signature option\n");
    goto LAB_00100bfa;
  }
  impl = (ENGINE *)0x0;
  if (bVar21) {
    impl = local_140;
  }
  pBVar14 = BIO_s_file();
  b = BIO_new(pBVar14);
  pBVar14 = BIO_f_md();
  local_128 = BIO_new(pBVar14);
  if ((b != (BIO *)0x0) && (local_128 != (BIO *)0x0)) {
    if (bVar4) {
      BIO_set_callback_ex(b,&BIO_debug_callback_ex);
      BIO_set_callback_arg(b,(char *)_bio_err);
    }
    iVar8 = app_passwd(local_f8,0,&local_c0,0);
    if (iVar8 == 0) {
      BIO_printf(_bio_err,"Error getting password\n");
    }
    else {
      if (local_114 == 0xffffffff) {
        local_114 = (uint)(lVar16 != 0);
        bVar21 = lVar16 == 0;
      }
      else {
        bVar21 = local_114 == 0;
      }
      local_120 = (BIO *)bio_open_default(local_120,0x77,(-(uint)bVar21 & 0x7fff) + 2);
      if (local_120 != (BIO *)0x0) {
        if (1 < (int)((((uint)(lVar16 != 0) - (uint)(local_100 == (BIO *)0x0)) + 2) -
                     (uint)(local_110 == (char *)0x0))) {
          data = (void *)0x0;
          pkey = (BIO *)0x0;
          BIO_printf(_bio_err,"MAC and signing key cannot both be specified\n");
          local_130 = (EVP_MD_CTX *)0x0;
          goto LAB_00100c1e;
        }
        if (lVar16 == 0) {
          bVar2 = false;
          local_130 = (EVP_MD_CTX *)0x0;
          pkey = (BIO *)0x0;
          if (local_100 == (BIO *)0x0) {
            if (local_110 != (char *)0x0) goto LAB_001011fd;
            local_a8 = (BIO *)0x0;
            lVar16 = BIO_ctrl(local_128,0x78,0,&local_a8);
            if (lVar16 < 1) {
              BIO_printf(_bio_err,"Error getting context\n");
            }
            else {
              if (local_b8 == (EVP_MD *)0x0) {
                local_b8 = EVP_sha256();
              }
              iVar8 = EVP_DigestInit_ex((EVP_MD_CTX *)local_a8,local_b8,impl);
              if (iVar8 != 0) {
                pkey = (BIO *)0x0;
                data = (void *)0x0;
                iVar8 = 0;
                local_130 = (EVP_MD_CTX *)0x0;
                goto LAB_001016b0;
              }
              BIO_printf(_bio_err,"Error setting digest\n");
            }
            data = (void *)0x0;
            pkey = (BIO *)0x0;
            local_130 = (EVP_MD_CTX *)0x0;
            goto LAB_00100c1e;
          }
        }
        else {
          if (bVar2) {
            pkey = (BIO *)load_pubkey(lVar16,local_c4,0,0,local_140,"public key");
          }
          else {
            pkey = (BIO *)load_key(lVar16,local_c4,0,local_c0,local_140,"private key");
          }
          if (pkey == (BIO *)0x0) {
            local_130 = (EVP_MD_CTX *)0x0;
            data = (void *)0x0;
            goto LAB_00100c1e;
          }
          pBVar20 = pkey;
          iVar8 = EVP_PKEY_get_default_digest_name(pkey,&local_98,0x50);
          bVar2 = false;
          if (iVar8 == 2) {
            if ((local_98 != 0x45444e55) || (bVar5 = 0, local_94 != 0x46)) {
              bVar5 = 1;
            }
            bVar2 = (bool)(bVar5 ^ 1);
          }
          local_130 = (EVP_MD_CTX *)EVP_MD_CTX_new();
          if (local_130 == (EVP_MD_CTX *)0x0) goto LAB_00101583;
          if (local_100 == (BIO *)0x0) goto LAB_001011f5;
        }
        local_a8 = (BIO *)0x0;
        iVar8 = init_gen_str(&local_a8,local_100,impl,0,0,0);
        if (iVar8 == 0) goto LAB_00101583;
        iVar8 = 0;
        if (local_150 == 0) goto LAB_001011c6;
        goto LAB_001011b3;
      }
    }
  }
  local_130 = (EVP_MD_CTX *)0x0;
  data = (void *)0x0;
  pkey = (BIO *)0x0;
  local_120 = (BIO *)0x0;
  goto LAB_00100c1e;
LAB_00100abd:
  while (0x17 < iVar6) {
    if (iVar6 < 0x5df) {
      if ((iVar6 < 0x5dd) || (iVar6 = opt_rand(iVar6), iVar6 != 0)) goto switchD_00100ad6_caseD_0;
LAB_00100af9:
      data = (void *)0x0;
      iVar6 = 1;
      pkey = (BIO *)0x0;
      b = (BIO *)0x0;
      local_130 = (EVP_MD_CTX *)0x0;
      local_120 = (BIO *)0x0;
      local_128 = (BIO *)0x0;
      goto LAB_00100c24;
    }
    if (3 < iVar6 - 0x641U) goto switchD_00100ad6_caseD_0;
    iVar6 = opt_provider(iVar6);
    if (iVar6 == 0) goto LAB_00100af9;
    iVar6 = opt_next();
    if (iVar6 == 0) {
      iVar6 = 0;
      goto LAB_00100b60;
    }
  }
  if (iVar6 < -1) goto switchD_00100ad6_caseD_0;
  switch(iVar6) {
  default:
    goto switchD_00100ad6_caseD_0;
  case 1:
    opt_help(dgst_options);
    goto LAB_00100e45;
  case 2:
    BIO_printf(_bio_out,"Supported digests:\n");
    local_a0 = 0;
    local_a8 = _bio_out;
    OBJ_NAME_do_all_sorted(1,show_digests,&local_a8);
    BIO_printf(_bio_out,"\n");
LAB_00100e45:
    local_130 = (EVP_MD_CTX *)0x0;
    data = (void *)0x0;
    pkey = (BIO *)0x0;
    b = (BIO *)0x0;
    local_120 = (BIO *)0x0;
    local_128 = (BIO *)0x0;
    goto LAB_00100e69;
  case 3:
    local_e8 = 1;
    goto switchD_00100ad6_caseD_0;
  case 4:
    local_e8 = 2;
    goto switchD_00100ad6_caseD_0;
  case 5:
    local_120 = (BIO *)opt_arg();
    goto switchD_00100ad6_caseD_0;
  case 6:
    lVar16 = opt_arg();
    goto switchD_00100ad6_caseD_0;
  case 7:
    local_f8 = opt_arg();
    goto switchD_00100ad6_caseD_0;
  case 8:
    lVar16 = opt_arg();
    bVar3 = true;
    bVar2 = true;
    goto switchD_00100ad6_caseD_0;
  case 9:
    lVar16 = opt_arg();
    bVar3 = true;
    goto switchD_00100ad6_caseD_0;
  case 10:
    filename = (char *)opt_arg();
    goto switchD_00100ad6_caseD_0;
  case 0xb:
    uVar18 = opt_arg();
    iVar6 = opt_format(uVar18,0xffe,&local_c4);
    break;
  case 0xc:
    uVar18 = opt_arg();
    local_140 = (ENGINE *)setup_engine_methods(uVar18,0xffffffff,0);
    goto switchD_00100ad6_caseD_0;
  case 0xd:
    bVar21 = true;
    goto switchD_00100ad6_caseD_0;
  case 0xe:
    local_114 = 0;
    goto switchD_00100ad6_caseD_0;
  case 0xf:
    local_114 = 1;
    goto switchD_00100ad6_caseD_0;
  case 0x10:
    bVar4 = true;
    goto switchD_00100ad6_caseD_0;
  case 0x11:
    local_110 = "etaonrishdlcupfm";
    goto switchD_00100ad6_caseD_0;
  case 0x12:
    local_110 = (char *)opt_arg();
    goto switchD_00100ad6_caseD_0;
  case 0x13:
    local_100 = (BIO *)opt_arg();
    goto switchD_00100ad6_caseD_0;
  case 0x14:
    if ((local_148 == 0) && (local_148 = OPENSSL_sk_new_null(), local_148 == 0))
    goto switchD_00100ad6_caseD_ffffffff;
    opt_arg();
    iVar6 = OPENSSL_sk_push(local_148);
    break;
  case 0x15:
    if ((local_150 == 0) && (local_150 = OPENSSL_sk_new_null(), local_150 == 0))
    goto switchD_00100ad6_caseD_ffffffff;
    opt_arg();
    iVar6 = OPENSSL_sk_push(local_150);
    break;
  case 0x16:
    __nptr = (char *)opt_arg();
    lVar13 = strtol(__nptr,(char **)0x0,10);
    local_e4 = (int)lVar13;
    goto switchD_00100ad6_caseD_0;
  case 0x17:
    pcVar19 = (char *)opt_unknown();
    goto switchD_00100ad6_caseD_0;
  case -1:
    goto switchD_00100ad6_caseD_ffffffff;
  }
  if (iVar6 != 0) goto switchD_00100ad6_caseD_0;
switchD_00100ad6_caseD_ffffffff:
  BIO_printf(_bio_err,"%s: Use -help for summary.\n",uVar11);
LAB_00100bfa:
  local_130 = (EVP_MD_CTX *)0x0;
  data = (void *)0x0;
  pkey = (BIO *)0x0;
  b = (BIO *)0x0;
  local_120 = (BIO *)0x0;
  local_128 = (BIO *)0x0;
  goto LAB_00100c1e;
LAB_001011b3:
  iVar9 = OPENSSL_sk_num(local_150);
  if (iVar9 <= iVar8) goto LAB_001011c6;
  uVar11 = OPENSSL_sk_value(local_150,iVar8);
  iVar9 = pkey_ctrl_string(local_a8,uVar11);
  if (iVar9 < 1) {
    EVP_PKEY_CTX_free((EVP_PKEY_CTX *)local_a8);
    BIO_printf(_bio_err,"MAC parameter error \"%s\"\n",uVar11);
    goto LAB_00101583;
  }
  iVar8 = iVar8 + 1;
  goto LAB_001011b3;
LAB_001011c6:
  pkey = (BIO *)app_keygen(local_a8,local_100,0,0);
  pBVar20 = local_a8;
  EVP_PKEY_CTX_free((EVP_PKEY_CTX *)local_a8);
  if (pkey == (BIO *)0x0) {
LAB_00101583:
    data = (void *)0x0;
LAB_00100c1e:
    iVar6 = 1;
  }
  else {
LAB_001011f5:
    if (local_110 != (char *)0x0) {
LAB_001011fd:
      if (local_b8 == (EVP_MD *)0x0) {
        local_b8 = EVP_sha256();
        pcVar19 = "SHA256";
      }
      sVar15 = strlen(local_110);
      pBVar20 = (BIO *)0x357;
      pkey = (BIO *)EVP_PKEY_new_raw_private_key(0x357,impl,local_110,sVar15);
      if (pkey == (BIO *)0x0) goto LAB_00101583;
    }
    local_b0 = (EVP_MD_CTX *)0x0;
    local_a8 = (BIO *)0x0;
    if (bVar2) {
      local_b0 = local_130;
    }
    else {
      pBVar20 = local_128;
      lVar16 = BIO_ctrl(local_128,0x78,0,&local_b0);
      if (lVar16 < 1) {
        BIO_printf(_bio_err,"Error getting context\n");
        goto LAB_00101583;
      }
    }
    if (bVar3) {
      if (impl == (ENGINE *)0x0) {
        uVar11 = app_get0_propq();
        uVar18 = app_get0_libctx();
        iVar8 = EVP_DigestVerifyInit_ex(local_b0,&local_a8,pcVar19,uVar18,uVar11,pkey,0,pBVar20);
      }
      else {
        iVar8 = EVP_DigestVerifyInit
                          (local_b0,(EVP_PKEY_CTX **)&local_a8,local_b8,impl,(EVP_PKEY *)pkey);
      }
    }
    else if (impl == (ENGINE *)0x0) {
      uVar11 = app_get0_propq();
      auVar22 = app_get0_libctx();
      iVar8 = EVP_DigestSignInit_ex
                        (local_b0,&local_a8,pcVar19,auVar22._0_8_,uVar11,pkey,0,auVar22._8_8_);
    }
    else {
      iVar8 = EVP_DigestSignInit(local_b0,(EVP_PKEY_CTX **)&local_a8,local_b8,impl,(EVP_PKEY *)pkey)
      ;
    }
    if (iVar8 == 0) {
      BIO_printf(_bio_err,"Error setting context\n");
      goto LAB_00101583;
    }
    iVar8 = 0;
    if (local_148 != 0) {
      for (; iVar9 = OPENSSL_sk_num(local_148), iVar8 < iVar9; iVar8 = iVar8 + 1) {
        uVar11 = OPENSSL_sk_value(local_148,iVar8);
        iVar9 = pkey_ctrl_string(local_a8,uVar11);
        if (iVar9 < 1) {
          BIO_printf(_bio_err,"Signature parameter error \"%s\"\n",uVar11);
          goto LAB_00101583;
        }
      }
    }
    if (filename != (char *)0x0) {
      pBVar20 = BIO_new_file(filename,"rb");
      if (pBVar20 == (BIO *)0x0) {
        data = (void *)0x0;
        BIO_printf(_bio_err,"Error opening signature file %s\n",filename);
      }
      else {
        iVar8 = EVP_PKEY_get_size(pkey);
        data = (void *)app_malloc((long)iVar8,"signature buffer");
        iVar8 = BIO_read(pBVar20,data,iVar8);
        BIO_free(pBVar20);
        if (0 < iVar8) goto LAB_00101321;
        BIO_printf(_bio_err,"Error reading signature file %s\n",filename);
      }
      goto LAB_00100c1e;
    }
    iVar8 = 0;
    data = (void *)0x0;
LAB_00101321:
    local_100 = (BIO *)0x0;
    pEVar17 = (EVP_MD *)0x0;
    if (!bVar2) {
LAB_001016b0:
      local_108 = &local_a8;
      local_100 = BIO_push(local_128,b);
      if (local_b8 == (EVP_MD *)0x0) {
        BIO_ctrl(local_128,0x78,0,local_108);
        pEVar17 = (EVP_MD *)EVP_MD_CTX_get1_md(local_a8);
        bVar2 = false;
        local_b8 = pEVar17;
        if (pEVar17 == (EVP_MD *)0x0) goto LAB_0010133a;
      }
      pEVar17 = (EVP_MD *)EVP_MD_get0_name();
      bVar2 = false;
    }
LAB_0010133a:
    if (0 < local_e4) {
      iVar9 = EVP_MD_xof(local_b8);
      if (iVar9 == 0) {
        BIO_printf(_bio_err,"Length can only be specified for XOF\n");
      }
      else {
        if (pkey == (BIO *)0x0) {
          if (iVar7 != 0) goto LAB_001018ee;
          goto LAB_00101496;
        }
        BIO_printf(_bio_err,"Signing key cannot be specified for XOF\n");
      }
      goto LAB_00100c1e;
    }
    if (iVar7 == 0) {
LAB_00101496:
      BIO_ctrl(b,0x6a,0,_stdin);
      if (bVar2) {
        iVar6 = do_fp_oneshot_sign(local_120,local_130,b,local_e8,local_114,pkey,data,iVar8,0,
                                   "stdin");
      }
      else {
        iVar6 = do_fp(local_120,uVar10,local_100,local_e8,local_114,local_e4,pkey,data,iVar8,0,
                      pEVar17,"stdin");
      }
    }
    else {
      if ((pkey == (BIO *)0x0) || (local_114 != 0)) {
LAB_001018ee:
        uVar11 = 0;
      }
      else {
        uVar11 = EVP_PKEY_get0_type_name(pkey);
      }
      if (iVar7 < 1) {
LAB_00100e69:
        iVar6 = 0;
        goto LAB_00100c30;
      }
      puVar1 = puVar12 + iVar7;
      do {
        lVar16 = BIO_ctrl(b,0x6c,3,(void *)*puVar12);
        if ((int)lVar16 < 1) {
          iVar6 = 1;
          perror((char *)*puVar12);
        }
        else {
          if (bVar2) {
            iVar7 = do_fp_oneshot_sign(local_120,local_130,b,local_e8,local_114,pkey,data,iVar8,
                                       uVar11,*puVar12);
          }
          else {
            iVar7 = do_fp(local_120,uVar10,local_100,local_e8,local_114,local_e4,pkey,data,iVar8,
                          uVar11,pEVar17,*puVar12);
          }
          if (iVar7 != 0) {
            iVar6 = 1;
          }
          BIO_ctrl(local_128,1,0,(void *)0x0);
        }
        puVar12 = puVar12 + 1;
      } while (puVar1 != puVar12);
    }
    if (iVar6 == 0) goto LAB_00100c30;
  }
LAB_00100c24:
  ERR_print_errors(_bio_err);
LAB_00100c30:
  CRYPTO_clear_free(uVar10,0x2000,"apps/dgst.c",0x1e9);
  BIO_free(b);
  CRYPTO_free(local_c0);
  BIO_free_all(local_120);
  EVP_MD_free(local_b8);
  EVP_PKEY_free((EVP_PKEY *)pkey);
  EVP_MD_CTX_free(local_130);
  OPENSSL_sk_free(local_148);
  OPENSSL_sk_free(local_150);
  CRYPTO_free(data);
  BIO_free(local_128);
  release_engine(local_140);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 dgst_main_cold(void)

{
  long lVar1;
  undefined8 *unaff_RBP;
  EVP_PKEY *unaff_R12;
  BIO *unaff_R13;
  void *unaff_R14;
  long in_FS_OFFSET;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  BIO *in_stack_00000030;
  BIO *in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 *in_stack_00000050;
  undefined8 in_stack_00000058;
  int in_stack_00000060;
  undefined4 uStack0000000000000070;
  undefined4 uStack0000000000000074;
  void *in_stack_00000098;
  undefined8 in_stack_000000a0;
  long in_stack_00000118;
  
  do {
    perror((char *)*unaff_RBP);
    while( true ) {
      unaff_RBP = unaff_RBP + 1;
      if (in_stack_00000050 == unaff_RBP) {
        ERR_print_errors(_bio_err);
        CRYPTO_clear_free(in_stack_00000020,0x2000,"apps/dgst.c",0x1e9);
        BIO_free(unaff_R13);
        CRYPTO_free(in_stack_00000098);
        BIO_free_all(in_stack_00000038);
        EVP_MD_free(in_stack_000000a0);
        EVP_PKEY_free(unaff_R12);
        EVP_MD_CTX_free(in_stack_00000028);
        OPENSSL_sk_free(in_stack_00000010);
        OPENSSL_sk_free(in_stack_00000008);
        CRYPTO_free(unaff_R14);
        BIO_free(in_stack_00000030);
        release_engine(in_stack_00000018);
        if (in_stack_00000118 == *(long *)(in_FS_OFFSET + 0x28)) {
          return 1;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      lVar1 = BIO_ctrl(unaff_R13,0x6c,3,(void *)*unaff_RBP);
      if ((int)lVar1 < 1) break;
      if (in_stack_00000060 == 0) {
        do_fp(in_stack_00000038,in_stack_00000020,in_stack_00000058,uStack0000000000000070,
              in_stack_00000040._4_4_,uStack0000000000000074);
      }
      else {
        do_fp_oneshot_sign(in_stack_00000038,in_stack_00000028);
      }
      BIO_ctrl(in_stack_00000030,1,0,(void *)0x0);
    }
  } while( true );
}


