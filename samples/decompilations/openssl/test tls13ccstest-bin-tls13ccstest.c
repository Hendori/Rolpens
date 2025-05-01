
undefined8 watchccs_gets(void)

{
  return 0xffffffff;
}



long bio_f_watchccs_filter(void)

{
  int iVar1;
  long lVar2;
  
  lVar2 = method_watchccs;
  if ((((((method_watchccs == 0) &&
         (method_watchccs = BIO_meth_new(0x280,"Watch CCS filter"), method_watchccs != 0)) &&
        (iVar1 = BIO_meth_set_write(method_watchccs,watchccs_write), iVar1 != 0)) &&
       ((iVar1 = BIO_meth_set_read(method_watchccs,watchccs_read), iVar1 != 0 &&
        (iVar1 = BIO_meth_set_puts(method_watchccs,watchccs_puts), iVar1 != 0)))) &&
      ((iVar1 = BIO_meth_set_gets(method_watchccs,0x100000), iVar1 != 0 &&
       ((iVar1 = BIO_meth_set_ctrl(method_watchccs,watchccs_ctrl), iVar1 != 0 &&
        (iVar1 = BIO_meth_set_create(method_watchccs,watchccs_new), iVar1 != 0)))))) &&
     (iVar1 = BIO_meth_set_destroy(method_watchccs,watchccs_free), iVar1 != 0)) {
    lVar2 = method_watchccs;
  }
  return lVar2;
}



uint test_tls13ccs(uint param_1)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  BIO_METHOD *pBVar8;
  SSL_SESSION *session;
  long lVar9;
  undefined8 uVar10;
  long in_FS_OFFSET;
  bool bVar11;
  SSL_CTX *local_d8;
  SSL_CTX *local_d0;
  SSL *local_c8;
  SSL *local_c0;
  undefined1 local_b8 [8];
  undefined1 local_b0 [13];
  undefined7 local_a3;
  undefined4 uStack_9c;
  undefined1 local_98 [88];
  long local_40;
  
  uVar1 = cert;
  uVar10 = privkey;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_d8 = (SSL_CTX *)0x0;
  local_a3 = 0x6420796d6d7544;
  local_d0 = (SSL_CTX *)0x0;
  local_c8 = (SSL *)0x0;
  local_c0 = (SSL *)0x0;
  uStack_9c = 0x617461;
  ccsbeforesh = 0;
  ccsaftersh = 0;
  sccsseen = 0;
  shseen = 0;
  chseen = 0;
  badsessid = 0;
  badvers = 0;
  badccs = 0;
  cappdataseen = 0;
  sappdataseen = 0;
  chsessidlen = 0;
  uVar5 = TLS_client_method();
  uVar6 = TLS_server_method();
  iVar2 = create_ssl_ctx_pair(0,uVar6,uVar5,0x301,0,&local_d8,&local_d0,uVar1,uVar10);
  iVar2 = test_true("test/tls13ccstest.c",0x101,
                    "create_ssl_ctx_pair(NULL, TLS_server_method(), TLS_client_method(), TLS1_VERSION, 0, &sctx, &cctx, cert, privkey)"
                    ,iVar2 != 0);
  if (iVar2 == 0) {
LAB_00100240:
    session = (SSL_SESSION *)0x0;
  }
  else {
    iVar2 = SSL_CTX_set_max_early_data(local_d8,0x4000);
    iVar2 = test_true("test/tls13ccstest.c",0x104,
                      "SSL_CTX_set_max_early_data(sctx, SSL3_RT_MAX_PLAIN_LENGTH)",iVar2 != 0);
    if (iVar2 == 0) goto LAB_00100240;
    if (0xb < param_1) {
LAB_00100500:
      test_error("test/tls13ccstest.c",0x129,"Invalid test value");
      goto LAB_00100240;
    }
    uVar7 = 1L << ((byte)param_1 & 0x3f);
    if ((uVar7 & 0x249) == 0) {
      if ((uVar7 & 0x924) == 0) {
        if ((uVar7 & 0x492) == 0) goto LAB_00100500;
        SSL_CTX_clear_options(local_d0,0x100000);
      }
      else {
        SSL_CTX_clear_options(local_d8,0x100000);
      }
    }
    session = (SSL_SESSION *)0x0;
    if (5 < (int)param_1) {
      iVar2 = create_ssl_objects(local_d8,local_d0,&local_c8,&local_c0,0,0);
      iVar2 = test_true("test/tls13ccstest.c",0x12f,
                        "create_ssl_objects(sctx, cctx, &sssl, &cssl, NULL, NULL)",iVar2 != 0);
      if (iVar2 != 0) {
        iVar2 = create_ssl_connection(local_c8,local_c0,0);
        iVar2 = test_true("test/tls13ccstest.c",0x130,
                          "create_ssl_connection(sssl, cssl, SSL_ERROR_NONE)",iVar2 != 0);
        if (iVar2 != 0) {
          session = SSL_get1_session(local_c0);
          uVar3 = test_ptr("test/tls13ccstest.c",0x133,&_LC7,session);
          if (uVar3 == 0) goto LAB_00100246;
          SSL_shutdown(local_c0);
          SSL_shutdown(local_c8);
          SSL_free(local_c8);
          SSL_free(local_c0);
          local_c0 = (SSL *)0x0;
          local_c8 = (SSL *)0x0;
          goto LAB_00100324;
        }
      }
      goto LAB_00100240;
    }
LAB_00100324:
    if ((param_1 - 3 < 3) || (8 < (int)param_1)) {
      lVar9 = SSL_CTX_ctrl(local_d8,0x5c,0,"P-384");
      iVar2 = test_true("test/tls13ccstest.c",0x144,"SSL_CTX_set1_groups_list(sctx, \"P-384\")",
                        lVar9 != 0);
      if (iVar2 != 0) goto LAB_00100339;
    }
    else {
LAB_00100339:
      pBVar8 = (BIO_METHOD *)bio_f_watchccs_filter();
      s_to_c_fbio = BIO_new(pBVar8);
      pBVar8 = (BIO_METHOD *)bio_f_watchccs_filter();
      c_to_s_fbio = BIO_new(pBVar8);
      iVar2 = test_ptr("test/tls13ccstest.c",0x14b,"s_to_c_fbio",s_to_c_fbio);
      if ((iVar2 == 0) ||
         (iVar2 = test_ptr("test/tls13ccstest.c",0x14c,"c_to_s_fbio",c_to_s_fbio), iVar2 == 0)) {
        BIO_free(s_to_c_fbio);
        BIO_free(c_to_s_fbio);
      }
      else {
        iVar2 = create_ssl_objects(local_d8,local_d0,&local_c8,&local_c0,s_to_c_fbio,c_to_s_fbio);
        iVar2 = test_true("test/tls13ccstest.c",0x153,
                          "create_ssl_objects(sctx, cctx, &sssl, &cssl, s_to_c_fbio, c_to_s_fbio)",
                          iVar2 != 0);
        if (iVar2 != 0) {
          if ((int)param_1 < 6) {
LAB_001006b0:
            iVar2 = create_ssl_connection(local_c8,local_c0,0);
            iVar2 = test_true("test/tls13ccstest.c",0x16f,
                              "create_ssl_connection(sssl, cssl, SSL_ERROR_NONE)",iVar2 != 0);
            if ((((iVar2 != 0) &&
                 (iVar2 = test_false("test/tls13ccstest.c",0x177,"badccs",badccs != 0), iVar2 != 0))
                && (iVar2 = test_false("test/tls13ccstest.c",0x177,"badvers",badvers != 0),
                   iVar2 != 0)) &&
               (iVar2 = test_false("test/tls13ccstest.c",0x177,"badsessid",badsessid != 0),
               iVar2 != 0)) {
              bVar11 = sccsseen != 0;
              switch(param_1) {
              default:
                iVar2 = test_true("test/tls13ccstest.c",0x17c,"sccsseen");
                if (((iVar2 != 0) &&
                    (iVar2 = test_true("test/tls13ccstest.c",0x17d,"ccsaftersh",ccsaftersh != 0),
                    iVar2 != 0)) &&
                   (iVar2 = test_false("test/tls13ccstest.c",0x17e,"ccsbeforesh",ccsbeforesh != 0),
                   iVar2 != 0)) {
                  uVar10 = 0x17f;
LAB_0010080d:
                  iVar2 = test_size_t_gt("test/tls13ccstest.c",uVar10,"chsessidlen",&_LC17,
                                         chsessidlen,0);
                  uVar3 = (uint)(iVar2 != 0);
                  goto LAB_00100246;
                }
                break;
              case 1:
                iVar2 = test_true("test/tls13ccstest.c",0x184,"sccsseen");
                if (((iVar2 != 0) &&
                    (iVar2 = test_false("test/tls13ccstest.c",0x185,"ccsaftersh",ccsaftersh != 0),
                    iVar2 != 0)) &&
                   (iVar2 = test_false("test/tls13ccstest.c",0x186,"ccsbeforesh",ccsbeforesh != 0),
                   iVar2 != 0)) {
                  uVar10 = 0x187;
LAB_001008ac:
                  iVar2 = test_size_t_eq("test/tls13ccstest.c",uVar10,"chsessidlen",&_LC17,
                                         chsessidlen,0);
                  uVar3 = (uint)(iVar2 != 0);
                  goto LAB_00100246;
                }
                break;
              case 2:
                iVar2 = test_false("test/tls13ccstest.c",0x18c,"sccsseen",bVar11);
                if (((iVar2 != 0) &&
                    (iVar2 = test_true("test/tls13ccstest.c",0x18d,"ccsaftersh",ccsaftersh != 0),
                    iVar2 != 0)) &&
                   (iVar2 = test_false("test/tls13ccstest.c",0x18e,"ccsbeforesh",ccsbeforesh != 0),
                   iVar2 != 0)) {
                  uVar10 = 399;
                  goto LAB_0010080d;
                }
                break;
              case 3:
                iVar2 = test_true("test/tls13ccstest.c",0x194,"sccsseen");
                if (((iVar2 != 0) &&
                    (iVar2 = test_true("test/tls13ccstest.c",0x195,"ccsaftersh",ccsaftersh != 0),
                    iVar2 != 0)) &&
                   (iVar2 = test_false("test/tls13ccstest.c",0x196,"ccsbeforesh",ccsbeforesh != 0),
                   iVar2 != 0)) {
                  uVar10 = 0x197;
                  goto LAB_0010080d;
                }
                break;
              case 4:
                iVar2 = test_true("test/tls13ccstest.c",0x19c,"sccsseen");
                if (((iVar2 != 0) &&
                    (iVar2 = test_false("test/tls13ccstest.c",0x19d,"ccsaftersh",ccsaftersh != 0),
                    iVar2 != 0)) &&
                   (iVar2 = test_false("test/tls13ccstest.c",0x19e,"ccsbeforesh",ccsbeforesh != 0),
                   iVar2 != 0)) {
                  uVar10 = 0x19f;
                  goto LAB_001008ac;
                }
                break;
              case 5:
                iVar2 = test_false("test/tls13ccstest.c",0x1a4,"sccsseen",bVar11);
                if (((iVar2 != 0) &&
                    (iVar2 = test_true("test/tls13ccstest.c",0x1a5,"ccsaftersh",ccsaftersh != 0),
                    iVar2 != 0)) &&
                   (iVar2 = test_false("test/tls13ccstest.c",0x1a6,"ccsbeforesh",ccsbeforesh != 0),
                   iVar2 != 0)) {
                  uVar10 = 0x1a7;
                  goto LAB_0010080d;
                }
                break;
              case 6:
                iVar2 = test_true("test/tls13ccstest.c",0x1ac,"sccsseen");
                if (((iVar2 != 0) &&
                    (iVar2 = test_false("test/tls13ccstest.c",0x1ad,"ccsaftersh",ccsaftersh != 0),
                    iVar2 != 0)) &&
                   (iVar2 = test_true("test/tls13ccstest.c",0x1ae,"ccsbeforesh",ccsbeforesh != 0),
                   iVar2 != 0)) {
                  uVar10 = 0x1af;
                  goto LAB_0010080d;
                }
                break;
              case 7:
                iVar2 = test_true("test/tls13ccstest.c",0x1b4,"sccsseen");
                if (((iVar2 != 0) &&
                    (iVar2 = test_false("test/tls13ccstest.c",0x1b5,"ccsaftersh",ccsaftersh != 0),
                    iVar2 != 0)) &&
                   (iVar2 = test_false("test/tls13ccstest.c",0x1b6,"ccsbeforesh",ccsbeforesh != 0),
                   iVar2 != 0)) {
                  uVar10 = 0x1b7;
                  goto LAB_001008ac;
                }
                break;
              case 8:
                iVar2 = test_false("test/tls13ccstest.c",0x1bc,"sccsseen",bVar11);
                if (((iVar2 != 0) &&
                    (iVar2 = test_false("test/tls13ccstest.c",0x1bd,"ccsaftersh",ccsaftersh != 0),
                    iVar2 != 0)) &&
                   (iVar2 = test_true("test/tls13ccstest.c",0x1be,"ccsbeforesh",ccsbeforesh != 0),
                   iVar2 != 0)) {
                  uVar10 = 0x1bf;
                  goto LAB_0010080d;
                }
                break;
              case 9:
                iVar2 = test_true("test/tls13ccstest.c",0x1c4,"sccsseen");
                if (((iVar2 != 0) &&
                    (iVar2 = test_false("test/tls13ccstest.c",0x1c5,"ccsaftersh",ccsaftersh != 0),
                    iVar2 != 0)) &&
                   (iVar2 = test_true("test/tls13ccstest.c",0x1c6,"ccsbeforesh",ccsbeforesh != 0),
                   iVar2 != 0)) {
                  uVar10 = 0x1c7;
                  goto LAB_0010080d;
                }
                break;
              case 10:
                iVar2 = test_true("test/tls13ccstest.c",0x1cc,"sccsseen");
                if (((iVar2 != 0) &&
                    (iVar2 = test_false("test/tls13ccstest.c",0x1cd,"ccsaftersh",ccsaftersh != 0),
                    iVar2 != 0)) &&
                   (iVar2 = test_false("test/tls13ccstest.c",0x1ce,"ccsbeforesh",ccsbeforesh != 0),
                   iVar2 != 0)) {
                  uVar10 = 0x1cf;
                  goto LAB_001008ac;
                }
                break;
              case 0xb:
                iVar2 = test_false("test/tls13ccstest.c",0x1d4,"sccsseen",bVar11);
                if (((iVar2 != 0) &&
                    (iVar2 = test_false("test/tls13ccstest.c",0x1d5,"ccsaftersh",ccsaftersh != 0),
                    iVar2 != 0)) &&
                   (iVar2 = test_true("test/tls13ccstest.c",0x1d6,"ccsbeforesh",ccsbeforesh != 0),
                   iVar2 != 0)) {
                  uVar10 = 0x1d7;
                  goto LAB_0010080d;
                }
              }
            }
          }
          else {
            iVar2 = SSL_set_session(local_c0,session);
            iVar2 = test_true("test/tls13ccstest.c",0x159,"SSL_set_session(cssl, sess)",iVar2 != 0);
            if (iVar2 != 0) {
              iVar2 = SSL_write_early_data(local_c0,&local_a3,10,local_b8);
              iVar2 = test_true("test/tls13ccstest.c",0x15a,
                                "SSL_write_early_data(cssl, msg, strlen(msg), &written)",iVar2 != 0)
              ;
              if (iVar2 != 0) {
                if ((int)param_1 < 9) {
                  uVar4 = SSL_read_early_data(local_c8,local_98,0x50,local_b0);
                  iVar2 = test_int_eq("test/tls13ccstest.c",0x15d,
                                      "SSL_read_early_data(sssl, buf, sizeof(buf), &readbytes)",
                                      "SSL_READ_EARLY_DATA_SUCCESS",uVar4,1);
                  if (iVar2 == 0) goto LAB_00100243;
                  iVar2 = SSL_connect(local_c0);
                  iVar2 = test_int_gt("test/tls13ccstest.c",0x162,"SSL_connect(cssl)",&_LC17,iVar2,0
                                     );
                }
                else {
                  iVar2 = SSL_connect(local_c0);
                  iVar2 = test_int_le("test/tls13ccstest.c",0x165,"SSL_connect(cssl)",&_LC17,iVar2,0
                                     );
                }
                if (iVar2 != 0) {
                  uVar4 = SSL_read_early_data(local_c8,local_98,0x50,local_b0);
                  iVar2 = test_int_eq("test/tls13ccstest.c",0x168,
                                      "SSL_read_early_data(sssl, buf, sizeof(buf), &readbytes)",
                                      "SSL_READ_EARLY_DATA_FINISH",uVar4,2);
                  if (iVar2 != 0) goto LAB_001006b0;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_00100243:
  uVar3 = 0;
LAB_00100246:
  SSL_SESSION_free(session);
  SSL_free(local_c8);
  SSL_free(local_c0);
  SSL_CTX_free(local_d8);
  SSL_CTX_free(local_d0);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 watchccs_free(undefined8 param_1)

{
  BIO_set_init(param_1,0);
  return 1;
}



undefined8 watchccs_new(undefined8 param_1)

{
  BIO_set_init(param_1,1);
  return 1;
}



long watchccs_ctrl(BIO *param_1,int param_2,long param_3,void *param_4)

{
  BIO *bp;
  long lVar1;
  
  bp = BIO_next(param_1);
  if ((param_2 != 0xc) && (bp != (BIO *)0x0)) {
    lVar1 = BIO_ctrl(bp,param_2,param_3,param_4);
    return lVar1;
  }
  return 0;
}



int watchccs_read(BIO *param_1,void *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  BIO *b;
  
  b = BIO_next(param_1);
  if ((b != (BIO *)0x0) && (0 < param_3)) {
    BIO_clear_flags(param_1,0xf);
    iVar1 = BIO_read(b,param_2,param_3);
    if (iVar1 < 1) {
      iVar2 = BIO_test_flags(b,1);
      if (iVar2 != 0) {
        BIO_set_flags(param_1,9);
      }
    }
    return iVar1;
  }
  return 0;
}



/* WARNING: Type propagation algorithm not settling */

int watchccs_write(BIO *param_1,char *param_2,int param_3)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  BIO *b;
  long lVar5;
  ulong uVar6;
  ushort uVar7;
  size_t __n;
  ulong uVar8;
  char *pcVar9;
  
  b = BIO_next(param_1);
  if ((b != (BIO *)0x0) && (0 < param_3)) {
    BIO_clear_flags(param_1,0xf);
    lVar5 = (long)param_3;
    cVar1 = *param_2;
    if ((1 < lVar5 - 1U) && (1 < lVar5 - 3U)) {
      uVar7 = *(ushort *)(param_2 + 1) << 8 | *(ushort *)(param_2 + 1) >> 8;
      pcVar9 = param_2;
      while( true ) {
        uVar2 = *(ushort *)(pcVar9 + 3);
        uVar8 = (ulong)(ushort)(uVar2 << 8 | uVar2 >> 8);
        if (lVar5 - 5U < uVar8) break;
        if (cVar1 == '\x16') {
          if (uVar2 == 0) {
            return 0;
          }
          if (uVar8 - 1 < 3) {
            return 0;
          }
          uVar6 = (ulong)(byte)pcVar9[6] << 0x10 | (ulong)(byte)pcVar9[7] << 8 |
                  (ulong)(byte)pcVar9[8];
          if (uVar8 - 4 < uVar6) {
            return 0;
          }
          if (pcVar9[5] != '\x01') {
            if (pcVar9[5] != '\x02') goto LAB_00101066;
            shseen = shseen + 1;
            if (uVar6 < 0x23) {
              return 0;
            }
            __n = (size_t)(byte)pcVar9[0x2b];
            if (uVar6 - 0x23 < __n) {
              return 0;
            }
joined_r0x0010126e:
            if ((chsessidlen != __n) ||
               ((__n != 0 && (iVar3 = memcmp(chsessid,pcVar9 + 0x2c,__n), iVar3 != 0)))) {
              badsessid = 1;
            }
            goto LAB_00101066;
          }
          chseen = chseen + 1;
          if (uVar6 < 0x23) {
            return 0;
          }
          __n = (size_t)(byte)pcVar9[0x2b];
          if (uVar6 - 0x23 < __n) {
            return 0;
          }
          if (chseen != 1) goto joined_r0x0010126e;
          chsessidlen = __n;
          __memcpy_chk(chsessid,pcVar9 + 0x2c,__n,0x20);
          uVar2 = 0x301;
        }
        else {
          if (cVar1 == '\x14') {
            if (s_to_c_fbio == param_1) {
              if (((chseen != 1) || (shseen != 1)) || (sappdataseen != 0 || sccsseen != 0))
              goto LAB_001011ad;
              sccsseen = 1;
            }
            else if (cappdataseen == 0) {
              if (shseen == 1) {
                if (ccsaftersh != 0) goto LAB_001011ad;
                ccsaftersh = 1;
              }
              else {
                if (shseen != 0 || ccsbeforesh != 0) goto LAB_001011ad;
                ccsbeforesh = 1;
              }
            }
            else {
LAB_001011ad:
              badccs = 1;
            }
          }
          else if (cVar1 == '\x17') {
            if (s_to_c_fbio == param_1) {
              sappdataseen = 1;
            }
            else {
              cappdataseen = 1;
            }
          }
LAB_00101066:
          uVar2 = 0x303;
        }
        if (uVar2 != uVar7) {
          badvers = 1;
        }
        lVar5 = (lVar5 - 5U) - uVar8;
        if (lVar5 == 0) {
          iVar3 = BIO_write(b,param_2,param_3);
          if (0 < iVar3) {
            return iVar3;
          }
          iVar4 = BIO_test_flags(b,2);
          if (iVar4 != 0) {
            BIO_set_flags(param_1,10);
            return iVar3;
          }
          return iVar3;
        }
        pcVar9 = pcVar9 + uVar8 + 5;
        cVar1 = *pcVar9;
        if (lVar5 - 1U < 2) {
          return 0;
        }
        uVar7 = *(ushort *)(pcVar9 + 1) << 8 | *(ushort *)(pcVar9 + 1) >> 8;
        if (lVar5 - 3U < 2) {
          return 0;
        }
      }
    }
  }
  return 0;
}



void watchccs_puts(undefined8 param_1,char *param_2)

{
  size_t sVar1;
  
  sVar1 = strlen(param_2);
  watchccs_write(param_1,param_2,sVar1 & 0xffffffff);
  return;
}



undefined1 * test_get_options(void)

{
  return options_0;
}



undefined8 setup_tests(void)

{
  int iVar1;
  
  iVar1 = test_skip_common_options();
  if (iVar1 == 0) {
    test_error("test/tls13ccstest.c",0x1ec,"Error parsing test options\n");
  }
  else {
    cert = test_get_argument(0);
    iVar1 = test_ptr("test/tls13ccstest.c",0x1f0,"cert = test_get_argument(0)",cert);
    if (iVar1 != 0) {
      privkey = test_get_argument(1);
      iVar1 = test_ptr("test/tls13ccstest.c",0x1f1,"privkey = test_get_argument(1)",privkey);
      if (iVar1 != 0) {
        add_all_tests("test_tls13ccs",test_tls13ccs,0xc,1);
        return 1;
      }
    }
  }
  return 0;
}



void cleanup_tests(void)

{
  BIO_meth_free(method_watchccs);
  return;
}


