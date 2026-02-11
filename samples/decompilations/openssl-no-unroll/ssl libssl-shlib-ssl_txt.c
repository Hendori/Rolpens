
int SSL_SESSION_print(BIO *fp,SSL_SESSION *ses)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined *puVar6;
  char *format;
  ulong uVar7;
  long in_FS_OFFSET;
  uint *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (ses != (SSL_SESSION *)0x0) {
    iVar3 = ses->ssl_version;
    iVar1 = BIO_puts(fp,"SSL-Session:\n");
    if (0 < iVar1) {
      uVar4 = ssl_protocol_to_string(ses->ssl_version);
      iVar1 = BIO_printf(fp,"    Protocol  : %s\n",uVar4);
      if (0 < iVar1) {
        if (*(long *)(ses[1].krb5_client_princ + 0x10) == 0) {
          uVar2 = (uint)*(ulong *)(ses[1].krb5_client_princ + 0x18);
          if ((uVar2 & 0xff000000) == 0x2000000) {
            pcVar5 = (char *)(ulong)(uVar2 & 0xffffff);
            format = "    Cipher    : %06lX\n";
          }
          else {
            pcVar5 = (char *)(*(ulong *)(ses[1].krb5_client_princ + 0x18) & 0xffff);
            format = "    Cipher    : %04lX\n";
          }
        }
        else {
          pcVar5 = *(char **)(*(long *)(ses[1].krb5_client_princ + 0x10) + 8);
          format = "    Cipher    : %s\n";
          if (pcVar5 == (char *)0x0) {
            pcVar5 = "unknown";
          }
        }
        iVar1 = BIO_printf(fp,format,pcVar5);
        if ((0 < iVar1) && (iVar1 = BIO_puts(fp,"    Session-ID: "), 0 < iVar1)) {
          if (ses->tlsext_tick_lifetime_hint != 0) {
            uVar7 = 0;
            do {
              iVar1 = BIO_printf(fp,"%02X",(ulong)ses[1].key_arg[uVar7 - 8]);
              if (iVar1 < 1) goto LAB_00100100;
              uVar7 = uVar7 + 1;
            } while (uVar7 < (ulong)ses->tlsext_tick_lifetime_hint);
          }
          iVar1 = BIO_puts(fp,"\n    Session-ID-ctx: ");
          if (0 < iVar1) {
            if (*(long *)(ses[1].master_key + 0xc) != 0) {
              uVar7 = 0;
              do {
                iVar1 = BIO_printf(fp,"%02X",(ulong)ses[1].master_key[uVar7 + 0x14]);
                if (iVar1 < 1) goto LAB_00100100;
                uVar7 = uVar7 + 1;
              } while (uVar7 < *(ulong *)(ses[1].master_key + 0xc));
            }
            if (iVar3 == 0x304) {
              iVar1 = BIO_puts(fp,"\n    Resumption PSK: ");
            }
            else {
              iVar1 = BIO_puts(fp,"\n    Master-Key: ");
            }
            if (0 < iVar1) {
              uVar7 = 0;
              if (*(long *)ses->key_arg != 0) {
                do {
                  iVar1 = BIO_printf(fp,"%02X",(ulong)ses->session_id[uVar7 + 8]);
                  if (iVar1 < 1) goto LAB_00100100;
                  uVar7 = uVar7 + 1;
                } while (uVar7 < *(ulong *)ses->key_arg);
              }
              iVar1 = BIO_puts(fp,"\n    PSK identity: ");
              if (0 < iVar1) {
                puVar6 = *(undefined **)(ses[1].session_id + 8);
                if (puVar6 == (undefined *)0x0) {
                  puVar6 = &_LC1;
                }
                iVar1 = BIO_printf(fp,"%s",puVar6);
                if ((0 < iVar1) && (iVar1 = BIO_puts(fp,"\n    PSK identity hint: "), 0 < iVar1)) {
                  puVar6 = *(undefined **)ses[1].session_id;
                  if (puVar6 == (undefined *)0x0) {
                    puVar6 = &_LC1;
                  }
                  iVar1 = BIO_printf(fp,"%s",puVar6);
                  if ((0 < iVar1) && (iVar1 = BIO_puts(fp,"\n    SRP username: "), 0 < iVar1)) {
                    puVar6 = *(undefined **)(ses[1].krb5_client_princ + 0x78);
                    if (puVar6 == (undefined *)0x0) {
                      puVar6 = &_LC1;
                    }
                    iVar1 = BIO_printf(fp,"%s",puVar6);
                    if (((0 < iVar1) &&
                        ((*(long *)(ses[1].krb5_client_princ + 0x50) == 0 ||
                         (iVar1 = BIO_printf(fp,
                                             "\n    TLS session ticket lifetime hint: %ld (seconds)"
                                            ), 0 < iVar1)))) &&
                       ((*(long *)(ses[1].krb5_client_princ + 0x40) == 0 ||
                        ((iVar1 = BIO_puts(fp,"\n    TLS session ticket:\n"), 0 < iVar1 &&
                         (iVar1 = BIO_dump_indent(fp,*(char **)(ses[1].krb5_client_princ + 0x40),
                                                  *(int *)(ses[1].krb5_client_princ + 0x48),4),
                         0 < iVar1)))))) {
                      if (*(int *)(ses[1].krb5_client_princ + 8) == 0) {
LAB_0010034e:
                        if ((((*(ulong *)(ses[1].sid_ctx + 0x1c) == 0) ||
                             (iVar1 = BIO_printf(fp,"\n    Start Time: %lld",
                                                 *(ulong *)(ses[1].sid_ctx + 0x1c) / 1000000000),
                             0 < iVar1)) &&
                            ((*(ulong *)(ses[1].sid_ctx + 0x14) == 0 ||
                             (iVar1 = BIO_printf(fp,"\n    Timeout   : %lld (sec)",
                                                 *(ulong *)(ses[1].sid_ctx + 0x14) / 1000000000),
                             0 < iVar1)))) &&
                           ((iVar1 = BIO_puts(fp,"\n"), 0 < iVar1 &&
                            (iVar1 = BIO_puts(fp,"    Verify return code: "), 0 < iVar1)))) {
                          pcVar5 = X509_verify_cert_error_string(*(long *)(ses[1].sid_ctx + 0xc));
                          iVar1 = BIO_printf(fp,"%ld (%s)\n",*(undefined8 *)(ses[1].sid_ctx + 0xc),
                                             pcVar5);
                          if (0 < iVar1) {
                            puVar6 = &_LC3;
                            if ((ses[1].krb5_client_princ[0x90] & 1) != 0) {
                              puVar6 = &_LC2;
                            }
                            iVar1 = BIO_printf(fp,"    Extended master secret: %s\n",puVar6);
                            if (0 < iVar1) {
                              uVar2 = 1;
                              if (iVar3 == 0x304) {
                                iVar3 = BIO_printf(fp,"    Max Early Data: %u\n",
                                                   (ulong)*(uint *)(ses[1].krb5_client_princ + 0x5c)
                                                  );
                                uVar2 = (uint)(0 < iVar3);
                              }
                              goto LAB_00100102;
                            }
                          }
                        }
                      }
                      else {
                        local_38 = (uint *)0x0;
                        iVar1 = ssl_cipher_get_evp(0,ses,0,0,0,0,&local_38);
                        if (iVar1 != 0) {
                          if (local_38 == (uint *)0x0) {
                            iVar1 = BIO_printf(fp,"\n    Compression: %d",
                                               (ulong)*(uint *)(ses[1].krb5_client_princ + 8),0);
                          }
                          else {
                            iVar1 = BIO_printf(fp,"\n    Compression: %d (%s)",(ulong)*local_38,
                                               *(undefined8 *)(local_38 + 2));
                          }
                          if (0 < iVar1) goto LAB_0010034e;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_00100100:
  uVar2 = 0;
LAB_00100102:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int SSL_SESSION_print_fp(FILE *fp,SSL_SESSION *ses)

{
  int iVar1;
  BIO_METHOD *type;
  BIO *bp;
  
  type = BIO_s_file();
  bp = BIO_new(type);
  if (bp != (BIO *)0x0) {
    BIO_ctrl(bp,0x6a,0,fp);
    iVar1 = SSL_SESSION_print(bp,ses);
    BIO_free(bp);
    return iVar1;
  }
  ERR_new();
  ERR_set_debug("ssl/ssl_txt.c",0x18,"SSL_SESSION_print_fp");
  ERR_set_error(0x14,0x80007,0);
  return 0;
}



bool SSL_SESSION_print_keylog(BIO *param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return false;
  }
  if ((((*(long *)(param_2 + 0x250) != 0) && (*(long *)(param_2 + 8) != 0)) &&
      (iVar1 = BIO_puts(param_1,"RSA "), 0 < iVar1)) &&
     (iVar1 = BIO_puts(param_1,"Session-ID:"), 0 < iVar1)) {
    if (*(long *)(param_2 + 0x250) != 0) {
      uVar2 = 0;
      do {
        iVar1 = BIO_printf(param_1,"%02X",(ulong)*(byte *)(param_2 + 600 + uVar2));
        if (iVar1 < 1) {
          return false;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(ulong *)(param_2 + 0x250));
    }
    iVar1 = BIO_puts(param_1," Master-Key:");
    if (0 < iVar1) {
      if (*(long *)(param_2 + 8) != 0) {
        uVar2 = 0;
        do {
          iVar1 = BIO_printf(param_1,"%02X",(ulong)*(byte *)(param_2 + 0x50 + uVar2));
          if (iVar1 < 1) {
            return false;
          }
          uVar2 = uVar2 + 1;
        } while (uVar2 < *(ulong *)(param_2 + 8));
      }
      iVar1 = BIO_puts(param_1,"\n");
      return 0 < iVar1;
    }
  }
  return false;
}


