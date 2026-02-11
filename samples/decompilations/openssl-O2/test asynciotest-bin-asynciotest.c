
undefined8 async_gets(void)

{
  return 0xffffffff;
}



long bio_f_async_filter(void)

{
  int iVar1;
  long lVar2;
  
  lVar2 = methods_async;
  if ((((((methods_async == 0) &&
         (methods_async = BIO_meth_new(0x280,"Async filter"), methods_async != 0)) &&
        (iVar1 = BIO_meth_set_write(methods_async,async_write), iVar1 != 0)) &&
       ((iVar1 = BIO_meth_set_read(methods_async,async_read), iVar1 != 0 &&
        (iVar1 = BIO_meth_set_puts(methods_async,async_puts), iVar1 != 0)))) &&
      ((iVar1 = BIO_meth_set_gets(methods_async,0x100000), iVar1 != 0 &&
       ((iVar1 = BIO_meth_set_ctrl(methods_async,async_ctrl), iVar1 != 0 &&
        (iVar1 = BIO_meth_set_create(methods_async,async_new), iVar1 != 0)))))) &&
     (iVar1 = BIO_meth_set_destroy(methods_async,async_free), iVar1 != 0)) {
    lVar2 = methods_async;
  }
  return lVar2;
}



int test_asyncio(int param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  BIO_METHOD *pBVar8;
  BIO *a;
  BIO *a_00;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long in_FS_OFFSET;
  long local_80;
  SSL_CTX *local_78;
  SSL_CTX *local_70;
  SSL *local_68;
  SSL *local_60;
  undefined8 local_54;
  undefined2 local_4c;
  undefined1 local_4a [10];
  long local_40;
  
  uVar2 = cert;
  uVar1 = privkey;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_4c = 0x61;
  local_78 = (SSL_CTX *)0x0;
  local_70 = (SSL_CTX *)0x0;
  local_68 = (SSL *)0x0;
  local_60 = (SSL *)0x0;
  local_54 = 0x7461642074736554;
  uVar6 = TLS_client_method();
  uVar7 = TLS_server_method();
  iVar3 = create_ssl_ctx_pair(0,uVar7,uVar6,0x301,0,&local_78,&local_70,uVar2,uVar1);
  iVar3 = test_true("test/asynciotest.c",299,
                    "create_ssl_ctx_pair(NULL, TLS_server_method(), TLS_client_method(), TLS1_VERSION, 0, &serverctx, &clientctx, cert, privkey)"
                    ,iVar3 != 0);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    if (param_1 == 1) {
      fragment = 1;
    }
    pBVar8 = (BIO_METHOD *)bio_f_async_filter();
    a = BIO_new(pBVar8);
    pBVar8 = (BIO_METHOD *)bio_f_async_filter();
    a_00 = BIO_new(pBVar8);
    iVar3 = test_ptr("test/asynciotest.c",0x13d,"s_to_c_fbio",a);
    if ((iVar3 == 0) ||
       (iVar3 = test_ptr("test/asynciotest.c",0x13e,"c_to_s_fbio",a_00), iVar3 == 0)) {
      iVar3 = 0;
      BIO_free(a);
      BIO_free(a_00);
    }
    else {
      iVar3 = create_ssl_objects(local_78,local_70,&local_68,&local_60,a,a_00);
      iVar3 = test_true("test/asynciotest.c",0x145,
                        "create_ssl_objects(serverctx, clientctx, &serverssl, &clientssl, s_to_c_fbio, c_to_s_fbio)"
                        ,iVar3 != 0);
      if (iVar3 != 0) {
        iVar3 = create_ssl_connection(local_68,local_60,0);
        iVar3 = test_true("test/asynciotest.c",0x147,
                          "create_ssl_connection(serverssl, clientssl, SSL_ERROR_NONE)",iVar3 != 0);
        local_80 = 2;
        if (iVar3 != 0) {
          while( true ) {
            iVar3 = 0;
            lVar10 = 0;
            lVar11 = 0;
            do {
              iVar4 = SSL_write(local_60,(void *)((long)&local_54 + lVar11),10 - iVar3);
              if (iVar4 < 1) {
                uVar5 = SSL_get_error(local_60,iVar4);
                iVar4 = test_false("test/asynciotest.c",0x15f,
                                   "ssl_error == SSL_ERROR_SYSCALL || ssl_error == SSL_ERROR_SSL",
                                   (uVar5 & 0xfffffffb) == 1);
                if (iVar4 == 0) {
                  iVar3 = 0;
                  goto LAB_00100298;
                }
              }
              else {
                iVar3 = iVar3 + iVar4;
                lVar11 = (long)iVar3;
              }
              uVar9 = lVar10 + 1;
              lVar10 = 1;
            } while (uVar9 < 2 && iVar3 != 10);
            iVar3 = test_size_t_eq("test/asynciotest.c",0x164,&_LC9,"sizeof(testdata)",lVar11,10);
            if (iVar3 == 0) goto LAB_00100298;
            iVar3 = 0;
            uVar9 = 0;
            lVar10 = 0;
            do {
              iVar4 = SSL_read(local_68,local_4a + lVar10,10 - iVar3);
              if (iVar4 < 1) {
                uVar5 = SSL_get_error(local_68,iVar4);
                iVar4 = test_false("test/asynciotest.c",0x174,
                                   "ssl_error == SSL_ERROR_SYSCALL || ssl_error == SSL_ERROR_SSL",
                                   (uVar5 & 0xfffffffb) == 1);
                if (iVar4 == 0) {
                  iVar3 = 0;
                  goto LAB_00100298;
                }
              }
              else {
                iVar3 = iVar3 + iVar4;
                lVar10 = (long)iVar3;
              }
              uVar9 = uVar9 + 1;
            } while ((iVar3 != 10) && (uVar9 < 100));
            iVar3 = test_mem_eq("test/asynciotest.c",0x179,"testdata",&_LC10,&local_54,10,local_4a,
                                lVar10);
            if (iVar3 == 0) goto LAB_00100298;
            if (local_80 == 1) break;
            local_80 = 1;
          }
          iVar3 = 1;
          SSL_free(local_60);
          SSL_free(local_68);
          local_68 = (SSL *)0x0;
          local_60 = (SSL *)0x0;
        }
      }
    }
  }
LAB_00100298:
  SSL_free(local_60);
  SSL_free(local_68);
  SSL_CTX_free(local_70);
  SSL_CTX_free(local_78);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar3;
}



undefined8 async_new(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = CRYPTO_zalloc(8,"test/asynciotest.c",0x42);
  if (lVar1 != 0) {
    BIO_set_data(param_1,lVar1);
    BIO_set_init(param_1,1);
    return 1;
  }
  return 0;
}



long async_ctrl(BIO *param_1,int param_2,long param_3,void *param_4)

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



int async_read(BIO *param_1,void *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  BIO *b;
  int *piVar3;
  
  b = BIO_next(param_1);
  if ((b != (BIO *)0x0) && (0 < param_3)) {
    piVar3 = (int *)BIO_get_data(param_1);
    BIO_clear_flags(param_1,0xf);
    if (*piVar3 != 0) {
      iVar1 = BIO_read(b,param_2,1);
      if (iVar1 < 1) {
        iVar2 = BIO_test_flags(b,1);
        if (iVar2 != 0) {
          BIO_set_flags(param_1,9);
        }
      }
      *piVar3 = 0;
      return iVar1;
    }
    *piVar3 = 1;
    BIO_set_flags(param_1,9);
  }
  return 0;
}



undefined8 async_free(long param_1)

{
  void *ptr;
  
  if (param_1 != 0) {
    ptr = (void *)BIO_get_data();
    CRYPTO_free(ptr);
    BIO_set_data(param_1,0);
    BIO_set_init(param_1,0);
    return 1;
  }
  return 0;
}



int async_write(BIO *param_1,char *param_2,int param_3)

{
  long lVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  undefined2 uVar5;
  ushort uVar6;
  int iVar7;
  int iVar8;
  BIO *b;
  long lVar9;
  ulong uVar10;
  ushort uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  char *pcVar15;
  short *psVar16;
  ulong uVar17;
  long in_FS_OFFSET;
  long local_88;
  undefined4 local_46;
  undefined1 local_42;
  char cStack_41;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  b = BIO_next(param_1);
  if ((0 < param_3) && (b != (BIO *)0x0)) {
    lVar9 = BIO_get_data(param_1);
    BIO_clear_flags(param_1,0xf);
    iVar7 = fragment;
    if (*(int *)(lVar9 + 4) != 0) {
      *(undefined4 *)(lVar9 + 4) = 0;
      if (iVar7 == 0) {
        local_88 = 0;
        local_88._0_4_ = 0;
LAB_001008fb:
        iVar7 = BIO_write(b,param_2,param_3 - (int)local_88);
        if (iVar7 < 1) goto LAB_00100a20;
      }
      else {
        lVar14 = (long)param_3;
        lVar9 = 0;
        pcVar15 = param_2;
        do {
          cVar2 = *pcVar15;
          if (((lVar14 == 1) || (uVar5 = *(undefined2 *)pcVar15, lVar14 == 2)) ||
             (cVar3 = pcVar15[2], lVar14 - 3U < 2)) {
LAB_00100a10:
            iVar7 = -1;
            goto LAB_001008c6;
          }
          uVar11 = *(ushort *)(pcVar15 + 3) << 8 | *(ushort *)(pcVar15 + 3) >> 8;
          uVar17 = (ulong)uVar11;
          if (lVar14 - 5U < uVar17) goto LAB_00100a10;
          lVar1 = lVar9 + 5;
          local_88 = lVar1;
          if (cVar2 == '\x16') {
            if (uVar17 != 0) {
              cVar4 = pcVar15[5];
              uVar6 = 0;
              if (cVar4 != '\x02') goto LAB_001007df;
              if ((4 < (ushort)(uVar11 - 1)) && (0x20 < (ushort)(uVar11 - 6))) {
                uVar10 = (ulong)(byte)pcVar15[0x2b];
                if ((uVar10 <= uVar17 - 0x27) &&
                   ((uVar12 = (uVar17 - 0x27) - uVar10, 2 < uVar12 && (1 < uVar12 - 3)))) {
                  uVar13 = (ulong)(ushort)(*(ushort *)(pcVar15 + uVar10 + 0x2f) << 8 |
                                          *(ushort *)(pcVar15 + uVar10 + 0x2f) >> 8);
                  if (uVar13 <= uVar12 - 5) {
                    uVar6 = *(ushort *)(pcVar15 + 9) << 8 | *(ushort *)(pcVar15 + 9) >> 8;
                    if (uVar13 != 0) {
                      psVar16 = (short *)(pcVar15 + uVar10 + 0x31);
                      do {
                        if ((uVar13 == 1) || (uVar13 - 2 < 2)) goto LAB_00100a10;
                        uVar10 = (ulong)(ushort)(psVar16[1] << 8 | (ushort)psVar16[1] >> 8);
                        if (uVar13 - 4 < uVar10) goto LAB_00100a10;
                        uVar13 = (uVar13 - 4) - uVar10;
                        if (*psVar16 == 0x2b00) {
                          if (uVar10 < 2) goto LAB_00100a10;
                          uVar6 = psVar16[2] << 8 | (ushort)psVar16[2] >> 8;
                          if (uVar10 != 2) goto LAB_00100a10;
                        }
                        psVar16 = (short *)((long)psVar16 + uVar10 + 4);
                      } while (uVar13 != 0);
                    }
                    goto LAB_001007df;
                  }
                }
              }
            }
            goto LAB_00100a10;
          }
          if (uVar17 == 0) {
            cVar4 = '\0';
            uVar6 = 0;
          }
          else {
            cVar4 = '\0';
            uVar6 = 0;
LAB_001007df:
            do {
              _local_42 = CONCAT11(pcVar15[local_88 - lVar9],1);
              local_46 = (uint)CONCAT12(cVar3,uVar5);
              iVar7 = BIO_write(b,&local_46,6);
              if (iVar7 < 1) goto LAB_00100a10;
              local_88 = local_88 + 1;
            } while (local_88 != uVar17 + lVar1);
          }
          if ((cVar2 == '\x14') || ((uVar6 == 0x304 && (cVar4 == '\x02')))) {
            fragment = 0;
            break;
          }
          lVar14 = (lVar14 - 5U) - uVar17;
          lVar9 = local_88;
          pcVar15 = pcVar15 + uVar17 + 5;
        } while (lVar14 != 0);
        iVar7 = 0;
        if ((int)local_88 < param_3) {
          param_2 = param_2 + local_88;
          goto LAB_001008fb;
        }
LAB_00100a20:
        iVar8 = BIO_test_flags(b,2);
        if (iVar8 != 0) {
          BIO_set_flags(param_1,10);
          goto LAB_001008c6;
        }
      }
      iVar7 = iVar7 + (int)local_88;
      goto LAB_001008c6;
    }
    *(undefined4 *)(lVar9 + 4) = 1;
    BIO_set_flags(param_1,10);
  }
  iVar7 = 0;
LAB_001008c6:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar7;
}



void async_puts(undefined8 param_1,char *param_2)

{
  size_t sVar1;
  
  sVar1 = strlen(param_2);
  async_write(param_1,param_2,sVar1 & 0xffffffff);
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
    test_error("test/asynciotest.c",0x192,"Error parsing test options\n");
  }
  else {
    cert = test_get_argument(0);
    iVar1 = test_ptr("test/asynciotest.c",0x196,"cert = test_get_argument(0)",cert);
    if (iVar1 != 0) {
      privkey = test_get_argument(1);
      iVar1 = test_ptr("test/asynciotest.c",0x197,"privkey = test_get_argument(1)",privkey);
      if (iVar1 != 0) {
        add_all_tests("test_asyncio",test_asyncio,2,1);
        return 1;
      }
    }
  }
  return 0;
}



void cleanup_tests(void)

{
  BIO_meth_free(methods_async);
  return;
}


