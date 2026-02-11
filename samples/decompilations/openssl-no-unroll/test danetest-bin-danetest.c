
long hexdecode(byte *param_1,undefined8 *param_2)

{
  byte *pbVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  size_t sVar6;
  undefined1 *ptr;
  ushort **ppuVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  undefined1 *puVar11;
  
  sVar6 = strlen((char *)param_1);
  ptr = (undefined1 *)CRYPTO_malloc((int)(sVar6 >> 1),"test/danetest.c",0xb9);
  iVar4 = test_ptr("test/danetest.c",0xb9,"ret = OPENSSL_malloc(strlen(in) / 2)",ptr);
  if (iVar4 == 0) {
    lVar8 = -1;
  }
  else {
    bVar2 = *param_1;
    if (bVar2 == 0) {
      lVar8 = 0;
    }
    else {
      ppuVar7 = __ctype_b_loc();
      uVar10 = (ulong)bVar2;
      bVar3 = false;
      uVar9 = 0;
      puVar11 = ptr;
LAB_001000a0:
      do {
        if ((*(byte *)((long)*ppuVar7 + uVar10 * 2 + 1) & 0x20) == 0) {
          uVar5 = OPENSSL_hexchar2int();
          if ((int)uVar5 < 0) {
            CRYPTO_free(ptr);
            return 0;
          }
          if (bVar3) {
            bVar2 = param_1[1];
            uVar10 = (ulong)bVar2;
            *puVar11 = (char)(uVar5 | uVar9);
            param_1 = param_1 + 1;
            bVar3 = false;
            puVar11 = puVar11 + 1;
            uVar9 = 0;
            if (bVar2 == 0) break;
            goto LAB_001000a0;
          }
          uVar9 = (uVar5 | uVar9) << 4;
          bVar3 = true;
        }
        pbVar1 = param_1 + 1;
        uVar10 = (ulong)*pbVar1;
        param_1 = param_1 + 1;
      } while (*pbVar1 != 0);
      lVar8 = (long)puVar11 - (long)ptr;
      if (bVar3) {
        CRYPTO_free(ptr);
        return 0;
      }
    }
    *param_2 = ptr;
  }
  return lVar8;
}



long checked_uint8(byte *param_1,undefined1 *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  ushort *puVar4;
  int *piVar5;
  ulong uVar6;
  ushort **ppuVar7;
  long lVar8;
  byte *pbVar9;
  long in_FS_OFFSET;
  byte *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  piVar5 = __errno_location();
  iVar2 = *piVar5;
  saved_errno = iVar2;
  uVar6 = strtol((char *)param_1,(char **)&local_38,10);
  iVar3 = *piVar5;
  *piVar5 = iVar2;
  if ((((uVar6 + 0x7fffffffffffffff < 0xfffffffffffffffe) || (iVar3 != 0x22)) &&
      (local_38 != param_1)) &&
     ((ppuVar7 = __ctype_b_loc(), (*(byte *)((long)*ppuVar7 + (ulong)*local_38 * 2 + 1) & 0x20) != 0
      && (*param_2 = (char)uVar6, uVar6 < 0x100)))) {
    puVar4 = *ppuVar7;
    bVar1 = *(byte *)((long)puVar4 + (ulong)*local_38 * 2 + 1);
    while ((pbVar9 = local_38, (bVar1 & 0x20) != 0 &&
           (pbVar9 = local_38 + 1,
           (*(byte *)((long)puVar4 + (ulong)local_38[1] * 2 + 1) & 0x20) != 0))) {
      pbVar9 = local_38 + 2;
      local_38 = local_38 + 2;
      bVar1 = *(byte *)((long)puVar4 + (ulong)*pbVar9 * 2 + 1);
    }
    lVar8 = (long)pbVar9 - (long)param_1;
  }
  else {
    lVar8 = -1;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined1 * read_to_eol(BIO *param_1)

{
  int iVar1;
  size_t sVar2;
  ushort **ppuVar3;
  undefined1 *puVar4;
  uint uVar5;
  
  iVar1 = BIO_gets(param_1,buf_0,0x1000);
  if (0 < iVar1) {
    sVar2 = strlen(buf_0);
    uVar5 = (int)sVar2 - 1;
    if (buf_0[(int)uVar5] == '\n') {
      if (sVar2 != 0) {
        ppuVar3 = __ctype_b_loc();
        puVar4 = buf_0 + sVar2;
        do {
          if ((*(byte *)((long)*ppuVar3 + (ulong)(byte)puVar4[-1] * 2 + 1) & 0x20) == 0) break;
          puVar4[-1] = 0;
          puVar4 = puVar4 + -1;
        } while (puVar4 != (undefined1 *)((sVar2 + 0x100ebf) - (ulong)uVar5));
      }
      return buf_0;
    }
    if (sVar2 == 0xfff) {
      test_error("test/danetest.c",0xa1,"input too long");
    }
    else {
      test_error("test/danetest.c",0xa3,"EOF before newline");
    }
  }
  return (undefined1 *)0x0;
}



uint run_tlsatest(void)

{
  undefined **ppuVar1;
  byte bVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  BIO *bp;
  SSL_METHOD *meth;
  EVP_MD *pEVar10;
  char *pcVar11;
  ushort **ppuVar12;
  SSL *s;
  long lVar13;
  long lVar14;
  stack_st_X509 *psVar15;
  undefined8 uVar16;
  X509_STORE_CTX *ctx;
  SSL_CTX *pSVar17;
  X509_STORE *store;
  X509_VERIFY_PARAM *from;
  X509_VERIFY_PARAM *to;
  X509_STORE_CTX *pXVar18;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  ulong uVar19;
  code *pcVar20;
  byte *pbVar21;
  undefined **ppuVar22;
  stack_st_X509 *chain;
  long lVar23;
  long in_FS_OFFSET;
  SSL_CTX *local_c8;
  int local_94;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  undefined4 local_70;
  int local_6c;
  char *local_68;
  char *local_60;
  uchar *local_58;
  long local_50;
  uchar *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  bp = BIO_new_file(tlsafile,"r");
  uVar4 = test_ptr("test/danetest.c",0x186,"f = BIO_new_file(tlsafile, \"r\")",bp);
  local_c8 = (SSL_CTX *)0x0;
  if (uVar4 == 0) goto LAB_0010039a;
  meth = (SSL_METHOD *)TLS_client_method();
  local_c8 = SSL_CTX_new(meth);
  iVar5 = test_ptr("test/danetest.c",0x187,"ctx = SSL_CTX_new(TLS_client_method())",local_c8);
  if (iVar5 != 0) {
    uVar6 = SSL_CTX_dane_enable(local_c8);
    uVar4 = test_int_gt("test/danetest.c",0x188,"SSL_CTX_dane_enable(ctx)",&_LC9,uVar6,0);
    if (uVar4 == 0) goto LAB_0010039a;
    iVar5 = SSL_CTX_load_verify_file(local_c8,CAfile);
    iVar5 = test_true("test/danetest.c",0x189,"SSL_CTX_load_verify_file(ctx, CAfile)",iVar5 != 0);
    if (iVar5 != 0) {
      pEVar10 = EVP_sha512();
      uVar6 = SSL_CTX_dane_mtype_set(local_c8,pEVar10,2,1);
      iVar5 = test_int_gt("test/danetest.c",0x18a,"SSL_CTX_dane_mtype_set(ctx, EVP_sha512(), 2, 1)",
                          &_LC9,uVar6,0);
      if (iVar5 != 0) {
        pEVar10 = EVP_sha256();
        uVar6 = SSL_CTX_dane_mtype_set(local_c8,pEVar10,1,2);
        iVar5 = test_int_gt("test/danetest.c",0x18b,
                            "SSL_CTX_dane_mtype_set(ctx, EVP_sha256(), 1, 2)",&_LC9,uVar6,0);
        uVar3 = basedomain;
        if (iVar5 != 0) {
          local_94 = 0;
          while( true ) {
            do {
              pcVar11 = (char *)read_to_eol(bp);
              if (pcVar11 == (char *)0x0) {
                uVar6 = 1;
                goto LAB_00100c78;
              }
            } while ((*pcVar11 == '\0') || (*pcVar11 == '#'));
            local_94 = local_94 + 1;
            iVar5 = __isoc99_sscanf(pcVar11,"%d %d %d %d %d%n",&local_80,&local_7c,&local_78,
                                    &local_74,&local_70,&local_6c);
            if (iVar5 != 5) break;
            pbVar21 = (byte *)(pcVar11 + local_6c);
            while (bVar2 = *pbVar21, bVar2 != 0) {
              ppuVar12 = __ctype_b_loc();
              pbVar21 = pbVar21 + 1;
              if ((*(byte *)((long)*ppuVar12 + (ulong)bVar2 * 2 + 1) & 0x20) == 0)
              goto LAB_00100d64;
            }
            s = SSL_new(local_c8);
            iVar5 = test_ptr("test/danetest.c",0x142,"ssl = SSL_new(ctx)",s);
            if (iVar5 == 0) goto LAB_0010068a;
            SSL_set_connect_state(s);
            iVar5 = SSL_dane_enable(s,uVar3);
            if (iVar5 < 1) {
LAB_00100680:
              SSL_free(s);
              goto LAB_0010068a;
            }
            if (local_78 != 0) {
              SSL_dane_set_flags(s,1);
            }
            iVar5 = 0;
            if (0 < local_80) {
              do {
                lVar13 = read_to_eol(bp);
                if (lVar13 == 0) goto LAB_00100680;
                if (tlsa_fields_5 != (undefined *)0x0) {
                  lVar14 = 0;
                  ppuVar22 = &tlsa_fields_5;
                  lVar23 = lVar13;
                  do {
                    lVar23 = lVar23 + lVar14;
                    lVar14 = (*(code *)ppuVar22[2])(lVar23);
                    if (lVar14 < 1) {
                      test_info("test/danetest.c",0x107,"bad TLSA %s field in: %s",ppuVar22[1],
                                lVar13);
                      goto LAB_00100680;
                    }
                    ppuVar1 = ppuVar22 + 3;
                    ppuVar22 = ppuVar22 + 3;
                  } while (*ppuVar1 != (undefined *)0x0);
                }
                iVar7 = SSL_dane_tlsa_add(s,usage_1,selector_2,mtype_3,data_4);
                CRYPTO_free(data_4);
                if (iVar7 == 0) {
                  test_info("test/danetest.c",0x10f,"unusable TLSA rrdata: %s",lVar13);
                  goto LAB_00100680;
                }
                if (iVar7 < 0) {
                  test_info("test/danetest.c",0x113,"error loading TLSA rrdata: %s",lVar13);
                  goto LAB_00100680;
                }
                iVar5 = iVar5 + 1;
              } while (iVar5 < local_80);
            }
            ERR_clear_error();
            iVar5 = local_7c;
            local_68 = (char *)0x0;
            local_60 = (char *)0x0;
            local_58 = (uchar *)0x0;
            psVar15 = (stack_st_X509 *)OPENSSL_sk_new_null();
            iVar7 = test_ptr("test/danetest.c",0x66,"chain = sk_X509_new_null()",psVar15);
            if (iVar7 == 0) {
LAB_001009b6:
              CRYPTO_free(local_68);
              CRYPTO_free(local_60);
              CRYPTO_free(local_58);
              chain = (stack_st_X509 *)0x0;
              OSSL_STACK_OF_X509_free(psVar15);
            }
            else {
              iVar7 = 0;
              if (iVar5 < 1) {
LAB_00100d32:
                if (iVar5 != iVar7) goto LAB_001009b6;
              }
              else {
                do {
                  iVar8 = PEM_read_bio(bp,&local_68,&local_60,&local_58,&local_50);
                  pcVar11 = local_68;
                  if (iVar8 != 1) goto LAB_00100d32;
                  iVar8 = strcmp(local_68,"CERTIFICATE");
                  iVar9 = strcmp(pcVar11,"TRUSTED CERTIFICATE");
                  if (iVar8 == 0) {
                    if (iVar9 != 0) goto LAB_001007cf;
LAB_00100935:
                    pcVar20 = d2i_X509;
                  }
                  else {
                    if (iVar9 == 0) goto LAB_00100935;
                    iVar8 = strcmp(pcVar11,"X509 CERTIFICATE");
                    if (iVar8 != 0) {
                      test_info("test/danetest.c",0x7e,"Unknown chain file object %s",pcVar11);
                      goto LAB_001009b6;
                    }
LAB_001007cf:
                    pcVar20 = d2i_X509_AUX;
                  }
                  local_48 = local_58;
                  uVar16 = (*pcVar20)(0,&local_48,local_50);
                  iVar8 = test_ptr("test/danetest.c",0x75,"cert = d(0, &p, len)",uVar16);
                  if ((iVar8 == 0) ||
                     (iVar8 = test_long_eq("test/danetest.c",0x76,"p - data",&_LC26,
                                           (long)local_48 - (long)local_58,local_50), iVar8 == 0)) {
                    test_info("test/danetest.c",0x77,"Certificate parsing error");
                    goto LAB_001009b6;
                  }
                  iVar8 = OPENSSL_sk_push(psVar15,uVar16);
                  iVar8 = test_true("test/danetest.c",0x7b,"sk_X509_push(chain, cert)",iVar8 != 0);
                  if (iVar8 == 0) goto LAB_001009b6;
                  iVar7 = iVar7 + 1;
                  CRYPTO_free(local_68);
                  CRYPTO_free(local_60);
                  CRYPTO_free(local_58);
                  local_60 = (char *)0x0;
                  local_68 = (char *)0x0;
                  local_58 = (uchar *)0x0;
                } while (iVar5 != iVar7);
              }
              ERR_clear_error();
              chain = psVar15;
            }
            iVar5 = test_ptr("test/danetest.c",0x155,"chain = load_chain(f, ncert)",chain);
            if (iVar5 == 0) goto LAB_00100680;
            iVar5 = SSL_get_ex_data_X509_STORE_CTX_idx();
            ctx = X509_STORE_CTX_new();
            iVar7 = test_ptr("test/danetest.c",0x3f,"store_ctx = X509_STORE_CTX_new()",ctx);
            if (iVar7 == 0) {
LAB_00100c8c:
              iVar5 = 0;
            }
            else {
              pSVar17 = SSL_get_SSL_CTX(s);
              iVar7 = test_ptr("test/danetest.c",0x40,"ssl_ctx = SSL_get_SSL_CTX(ssl)",pSVar17);
              if (iVar7 == 0) goto LAB_00100c8c;
              store = SSL_CTX_get_cert_store(pSVar17);
              iVar7 = test_ptr("test/danetest.c",0x41,"store = SSL_CTX_get_cert_store(ssl_ctx)",
                               store);
              if (iVar7 == 0) goto LAB_00100c8c;
              iVar7 = X509_STORE_CTX_init(ctx,store,(X509 *)0x0,chain);
              iVar7 = test_true("test/danetest.c",0x42,
                                "X509_STORE_CTX_init(store_ctx, store, NULL, chain)",iVar7 != 0);
              if (iVar7 == 0) goto LAB_00100c8c;
              iVar5 = X509_STORE_CTX_set_ex_data(ctx,iVar5,s);
              iVar5 = test_true("test/danetest.c",0x43,
                                "X509_STORE_CTX_set_ex_data(store_ctx, store_ctx_idx, ssl)",
                                iVar5 != 0);
              if (iVar5 == 0) goto LAB_00100c8c;
              iVar5 = SSL_is_server(s);
              pcVar11 = "ssl_server";
              if (iVar5 != 0) {
                pcVar11 = "ssl_client";
              }
              X509_STORE_CTX_set_default(ctx,pcVar11);
              from = (X509_VERIFY_PARAM *)SSL_get0_param(s);
              to = X509_STORE_CTX_get0_param(ctx);
              X509_VERIFY_PARAM_set1(to,from);
              pXVar18 = (X509_STORE_CTX *)SSL_get0_dane(s);
              X509_STORE_CTX_set0_dane(ctx);
              iVar5 = SSL_get_verify_callback((int)s,pXVar18);
              if (CONCAT44(extraout_var,iVar5) != 0) {
                iVar5 = SSL_get_verify_callback((int)s,pXVar18);
                X509_STORE_CTX_set_verify_cb(ctx,(verify_cb *)CONCAT44(extraout_var_00,iVar5));
              }
              iVar7 = X509_STORE_CTX_verify(ctx);
              iVar5 = test_int_ge("test/danetest.c",0x51,"ret = X509_STORE_CTX_verify(store_ctx)",
                                  &_LC9,iVar7,0);
              if (iVar5 != 0) {
                iVar5 = iVar7;
              }
              iVar7 = X509_STORE_CTX_get_error(ctx);
              SSL_set_verify_result(s,(long)iVar7);
            }
            X509_STORE_CTX_free(ctx);
            OSSL_STACK_OF_X509_free(chain);
            uVar19 = SSL_get_verify_result(s);
            SSL_set_verify_result(s,0);
            uVar6 = SSL_get0_dane_authority(s,0,0);
            SSL_set_verify_result(s,(long)(int)uVar19);
            SSL_free(s);
            iVar7 = test_int_eq("test/danetest.c",0x168,&_LC38,&_LC37,uVar19 & 0xffffffff,local_74);
            if (iVar7 == 0) {
              if (local_74 == 0) {
                pcVar11 = X509_verify_cert_error_string((long)(int)uVar19);
                test_info("test/danetest.c",0x16a,"Verification failure in test %d: %d=%s",local_94,
                          uVar19 & 0xffffffff,pcVar11);
              }
              else {
                test_info("test/danetest.c",0x16d,"Unexpected error in test %d",local_94);
              }
              goto LAB_00100c75;
            }
            iVar5 = test_false("test/danetest.c",0x171,"want == 0 && ok == 0",
                               iVar5 == 0 && local_74 == 0);
            if (iVar5 == 0) {
              test_info("test/danetest.c",0x172,"Verification failure in test %d: ok=0",local_94);
              goto LAB_00100c75;
            }
            iVar5 = test_int_eq("test/danetest.c",0x176,"mdpth","want_depth",uVar6,local_70);
            if (iVar5 == 0) goto code_r0x00100ce5;
          }
LAB_00100d64:
          test_error("test/danetest.c",0x13e,"Malformed line for test %d",local_94);
LAB_0010068a:
          uVar6 = 0;
          goto LAB_0010068d;
        }
      }
    }
  }
  uVar4 = 0;
  goto LAB_0010039a;
code_r0x00100ce5:
  test_info("test/danetest.c",0x177,"In test test %d",local_94);
LAB_00100c75:
  uVar6 = 0;
LAB_00100c78:
  ERR_clear_error();
LAB_0010068d:
  iVar5 = test_int_gt("test/danetest.c",0x18c,"test_tlsafile(ctx, basedomain, f, tlsafile)",&_LC9,
                      uVar6,0);
  uVar4 = (uint)(iVar5 != 0);
LAB_0010039a:
  BIO_free(bp);
  SSL_CTX_free(local_c8);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}



undefined1 * test_get_options(void)

{
  return options_6;
}



undefined8 setup_tests(void)

{
  int iVar1;
  
  iVar1 = test_skip_common_options();
  if (iVar1 == 0) {
    test_error("test/danetest.c",0x19c,"Error parsing test options\n");
  }
  else {
    basedomain = test_get_argument(0);
    iVar1 = test_ptr("test/danetest.c",0x1a0,"basedomain = test_get_argument(0)",basedomain);
    if (iVar1 != 0) {
      CAfile = test_get_argument(1);
      iVar1 = test_ptr("test/danetest.c",0x1a1,"CAfile = test_get_argument(1)",CAfile);
      if (iVar1 != 0) {
        tlsafile = test_get_argument(2);
        iVar1 = test_ptr("test/danetest.c",0x1a2,"tlsafile = test_get_argument(2)",tlsafile);
        if (iVar1 != 0) {
          add_test("run_tlsatest",run_tlsatest);
          return 1;
        }
      }
    }
  }
  return 0;
}


