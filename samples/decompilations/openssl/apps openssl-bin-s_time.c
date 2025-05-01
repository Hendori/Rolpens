
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

SSL * doConnection(SSL *param_1,void *param_2,SSL_CTX *param_3)

{
  int iVar1;
  BIO_METHOD *type;
  BIO *bp;
  long lVar2;
  SSL *s;
  char *pcVar3;
  long in_FS_OFFSET;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  type = BIO_s_connect();
  bp = BIO_new(type);
  if (bp != (BIO *)0x0) {
    lVar2 = BIO_ctrl(bp,100,0,param_2);
    if (0 < lVar2) {
      lVar2 = BIO_ctrl(bp,0x9b,0x10,(void *)0x0);
      if (0 < lVar2) {
        if (param_1 == (SSL *)0x0) {
          s = SSL_new(param_3);
          if (s == (SSL *)0x0) goto LAB_00100100;
        }
        else {
          SSL_set_connect_state(param_1);
          s = param_1;
        }
        SSL_set_bio(s,bp,bp);
        iVar1 = SSL_connect(s);
        if (0 < iVar1) {
          local_38 = 1;
          iVar1 = SSL_get_fd(s);
          if (-1 < iVar1) {
            setsockopt(iVar1,1,0xd,&local_38,8);
          }
          goto LAB_001000cc;
        }
        BIO_printf(_bio_err,"ERROR\n");
        if (_ERR_print_errors == 0) {
          ERR_print_errors(_bio_err);
        }
        else {
          pcVar3 = X509_verify_cert_error_string((long)_ERR_print_errors);
          BIO_printf(_bio_err,"verify error:%s\n",pcVar3);
        }
        if (param_1 == (SSL *)0x0) {
          SSL_free(s);
        }
        goto LAB_00100108;
      }
    }
LAB_00100100:
    BIO_free(bp);
  }
LAB_00100108:
  s = (SSL *)0x0;
LAB_001000cc:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return s;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint s_time_main(undefined4 param_1,undefined8 param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  SSL_METHOD *meth;
  undefined8 uVar5;
  SSL_CTX *ctx;
  long lVar6;
  size_t sVar7;
  long lVar8;
  time_t tVar9;
  SSL *ssl;
  char *pcVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  int iVar14;
  long in_FS_OFFSET;
  double dVar15;
  char *local_20a8;
  long local_20a0;
  char *local_2098;
  undefined8 local_2088;
  undefined8 local_2080;
  undefined8 local_2078;
  undefined8 local_2070;
  undefined8 local_2068;
  int local_2060;
  undefined4 local_205c;
  undefined4 local_2058;
  undefined4 local_2054;
  char local_2048 [8200];
  long local_40;
  
  lVar8 = 0;
  pcVar10 = (char *)0x0;
  uVar13 = 3;
  bVar1 = true;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  meth = (SSL_METHOD *)TLS_client_method();
  uVar5 = opt_init(param_1,param_2,s_time_options);
  bVar2 = false;
  local_2060 = 0x1e;
  local_2054 = 0;
  local_2058 = 0;
  local_205c = 0;
  local_2068 = 0;
  local_2070 = 0;
  local_20a8 = "localhost:4433";
  local_2098 = (char *)0x0;
  local_20a0 = 0;
  local_2078 = 0;
  local_2080 = 0;
  local_2088 = 0;
switchD_00100292_caseD_0:
  iVar3 = opt_next();
  do {
    if (iVar3 == 0) {
      iVar3 = opt_check_rest_arg(0);
      if (iVar3 == 0) {
switchD_00100292_caseD_ffffffff:
        pcVar10 = "%s: Use -help for summary.\n";
LAB_0010032a:
        BIO_printf(_bio_err,pcVar10,uVar5);
      }
      else {
        if (pcVar10 == (char *)0x0) {
          pcVar10 = getenv("SSL_CIPHER");
        }
        ctx = SSL_CTX_new(meth);
        if (ctx != (SSL_CTX *)0x0) {
          SSL_CTX_set_quiet_shutdown(ctx,1);
          lVar6 = SSL_CTX_ctrl(ctx,0x7b,lVar8,(void *)0x0);
          if ((lVar6 == 0) || (lVar8 = SSL_CTX_ctrl(ctx,0x7c,lVar8,(void *)0x0), lVar8 == 0))
          goto LAB_0010030e;
          if (bVar2) {
            SSL_CTX_set_options(ctx,0x80000850);
          }
          if ((((pcVar10 != (char *)0x0) &&
               (iVar3 = SSL_CTX_set_cipher_list(ctx,pcVar10), iVar3 == 0)) ||
              ((local_20a0 != 0 && (iVar3 = SSL_CTX_set_ciphersuites(ctx,local_20a0), iVar3 == 0))))
             || (iVar3 = set_cert_stuff(ctx,local_2070,local_2068), iVar3 == 0)) goto LAB_0010030e;
          iVar3 = ctx_set_verify_locations
                            (ctx,local_2080,local_2058,local_2088,local_205c,local_2078,local_2054);
          if (iVar3 == 0) {
            ERR_print_errors(_bio_err);
            goto LAB_0010030e;
          }
          uVar13 = uVar13 & 1;
          if (uVar13 == 0) goto LAB_00100845;
          lVar6 = 0;
          __printf_chk(2,"Collecting connection statistics for %d seconds\n",local_2060,0x1005d9);
          tVar9 = time((time_t *)0x0);
          lVar8 = tVar9 + local_2060;
          iVar3 = 0;
          app_tminterval(0,1);
          break;
        }
      }
LAB_00100338:
      uVar13 = 1;
      ctx = (SSL_CTX *)0x0;
      ssl = (SSL *)0x0;
      goto LAB_00100342;
    }
    if (iVar3 < 0x19) {
      if (-2 < iVar3) {
        switch(iVar3) {
        case 1:
          uVar13 = 0;
          ctx = (SSL_CTX *)0x0;
          ssl = (SSL *)0x0;
          opt_help(s_time_options);
          goto LAB_00100342;
        case 2:
          local_20a8 = (char *)opt_arg();
          break;
        case 3:
          pcVar10 = (char *)opt_arg();
          break;
        case 4:
          local_20a0 = opt_arg();
          break;
        case 5:
          local_2070 = opt_arg();
          break;
        case 6:
          opt_arg();
          iVar3 = set_nameopt();
          if (iVar3 == 0) goto LAB_00100338;
          break;
        case 7:
          local_2068 = opt_arg();
          break;
        case 8:
          local_2088 = opt_arg();
          break;
        case 9:
          local_2080 = opt_arg();
          break;
        case 10:
          local_2078 = opt_arg();
          break;
        case 0xb:
          local_205c = 1;
          break;
        case 0xc:
          local_2058 = 1;
          break;
        case 0xd:
          local_2054 = 1;
          break;
        case 0xe:
          uVar13 = 1;
          bVar1 = false;
          break;
        case 0xf:
          uVar13 = 0;
          bVar1 = true;
          break;
        case 0x10:
          bVar2 = true;
          break;
        case 0x11:
          _verify_args = opt_int_arg();
          BIO_printf(_bio_err,"%s: verify depth is %d\n",uVar5);
          break;
        case 0x12:
          local_2060 = opt_int_arg();
          break;
        case 0x13:
          lVar8 = 0x300;
          break;
        case 0x14:
          local_2098 = (char *)opt_arg();
          sVar7 = strlen(local_2098);
          if (0x2000 < sVar7 + 0x12) {
            pcVar10 = "%s: -www option is too long\n";
            goto LAB_0010032a;
          }
          break;
        case 0x15:
          lVar8 = 0x301;
          break;
        case 0x16:
          lVar8 = 0x302;
          break;
        case 0x17:
          lVar8 = 0x303;
          break;
        case 0x18:
          lVar8 = 0x304;
          break;
        case -1:
          goto switchD_00100292_caseD_ffffffff;
        }
      }
      goto switchD_00100292_caseD_0;
    }
    if (3 < iVar3 - 0x641U) goto switchD_00100292_caseD_0;
    iVar3 = opt_provider(iVar3);
    if (iVar3 == 0) goto LAB_00100338;
    iVar3 = opt_next();
  } while( true );
LAB_001006cd:
  tVar9 = time((time_t *)0x0);
  if (lVar8 < tVar9) goto LAB_001007b8;
  ssl = (SSL *)doConnection(0,local_20a8,ctx);
  if (ssl == (SSL *)0x0) goto LAB_0010030e;
  if (local_2098 != (char *)0x0) {
    iVar4 = BIO_snprintf(local_2048,0x2000,"GET %s HTTP/1.0\r\n\r\n",local_2098);
    if ((iVar4 < 1) || (iVar4 = SSL_write(ssl,local_2048,iVar4), iVar4 < 1)) goto LAB_00100342;
    while (iVar4 = SSL_read(ssl,local_2048,0x2000), 0 < iVar4) {
      lVar6 = lVar6 + iVar4;
    }
  }
  iVar3 = iVar3 + 1;
  SSL_set_shutdown(ssl,3);
  iVar4 = SSL_get_fd(ssl);
  BIO_closesocket(iVar4);
  iVar4 = SSL_session_reused(ssl);
  iVar14 = 0x72;
  if (iVar4 == 0) {
    iVar4 = SSL_version(ssl);
    iVar14 = 0x74;
    if (iVar4 != 0x301) {
      iVar14 = (uint)(iVar4 == 0x300) * 9 + 0x2a;
    }
  }
  fputc(iVar14,_stdout);
  fflush(_stdout);
  SSL_free(ssl);
  goto LAB_001006cd;
LAB_001007b8:
  lVar11 = 0;
  dVar15 = (double)app_tminterval(1,1);
  __printf_chk(dVar15 + 0.0,(double)iVar3 / (dVar15 + 0.0),2,
               "\n\n%d connections in %.2fs; %.2f connections/user sec, bytes read %ld\n",iVar3,
               lVar6);
  if (iVar3 != 0) {
    lVar11 = lVar6 / (long)iVar3;
  }
  tVar9 = time((time_t *)0x0);
  __printf_chk(2,"%d connections in %ld real seconds, %ld bytes read per connection\n",iVar3,
               (tVar9 - lVar8) + (long)local_2060,lVar11);
LAB_00100845:
  if (bVar1) {
    puts("\n\nNow timing with session id reuse.");
    ssl = (SSL *)doConnection(0,local_20a8,ctx);
    if (ssl != (SSL *)0x0) {
      if (local_2098 != (char *)0x0) {
        iVar3 = BIO_snprintf(local_2048,0x2000,"GET %s HTTP/1.0\r\n\r\n");
        if ((iVar3 < 1) || (iVar3 = SSL_write(ssl,local_2048,iVar3), iVar3 < 1)) {
LAB_00100a5e:
          uVar13 = 1;
          goto LAB_00100342;
        }
        do {
          iVar3 = SSL_read(ssl,local_2048,0x2000);
        } while (0 < iVar3);
      }
      SSL_set_shutdown(ssl,3);
      iVar3 = SSL_get_fd(ssl);
      if (-1 < iVar3) {
        BIO_closesocket();
      }
      iVar3 = 0;
      lVar6 = 0;
      tVar9 = time((time_t *)0x0);
      lVar11 = (long)local_2060;
      lVar8 = tVar9 + lVar11;
      puts("starting");
      app_tminterval(0,1);
      while (tVar9 = time((time_t *)0x0), tVar9 <= lVar8) {
        lVar12 = doConnection(ssl,local_20a8,ctx);
        if (lVar12 == 0) goto LAB_00100a5e;
        if (local_2098 != (char *)0x0) {
          iVar4 = BIO_snprintf(local_2048,0x2000,"GET %s HTTP/1.0\r\n\r\n");
          if ((iVar4 < 1) || (iVar4 = SSL_write(ssl,local_2048,iVar4), iVar4 < 1))
          goto LAB_00100a5e;
          while (iVar4 = SSL_read(ssl,local_2048,0x2000), 0 < iVar4) {
            lVar6 = lVar6 + iVar4;
          }
        }
        SSL_set_shutdown(ssl,3);
        iVar4 = SSL_get_fd(ssl);
        if (-1 < iVar4) {
          BIO_closesocket(iVar4);
        }
        iVar3 = iVar3 + 1;
        iVar4 = SSL_session_reused(ssl);
        iVar14 = 0x72;
        if (iVar4 == 0) {
          iVar4 = SSL_version(ssl);
          iVar14 = 0x74;
          if (iVar4 != 0x301) {
            iVar14 = (uint)(iVar4 == 0x300) * 9 + 0x2a;
          }
        }
        fputc(iVar14,_stdout);
        fflush(_stdout);
      }
      dVar15 = (double)app_tminterval(1,1);
      __printf_chk(dVar15 + 0.0,(double)iVar3 / (dVar15 + 0.0),2,
                   "\n\n%d connections in %.2fs; %.2f connections/user sec, bytes read %ld\n",iVar3,
                   lVar6);
      if (iVar3 == 0) {
        tVar9 = time((time_t *)0x0);
        uVar13 = 0;
        __printf_chk(2,"0 connections in %ld real seconds\n",(tVar9 - lVar8) + lVar11);
      }
      else {
        tVar9 = time((time_t *)0x0);
        uVar13 = 0;
        __printf_chk(2,"%d connections in %ld real seconds, %ld bytes read per connection\n",iVar3,
                     (tVar9 - lVar8) + lVar11,lVar6 / (long)iVar3);
      }
      goto LAB_00100342;
    }
    BIO_printf(_bio_err,"Unable to get connection\n");
  }
LAB_0010030e:
  uVar13 = 1;
  ssl = (SSL *)0x0;
LAB_00100342:
  SSL_free(ssl);
  SSL_CTX_free(ctx);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar13;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


