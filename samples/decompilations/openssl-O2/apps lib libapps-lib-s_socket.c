
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
init_client(int *param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,undefined *param_5
           ,int param_6,int param_7,int param_8,int param_9,int param_10,undefined8 *param_11)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  void *ptr;
  long lVar8;
  uint uVar9;
  char *pcVar10;
  long lVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long in_FS_OFFSET;
  undefined *local_78;
  uint local_68;
  int local_64;
  long local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_48 = 0;
  iVar1 = BIO_sock_init();
  if (iVar1 == 1) {
    uVar13 = 1;
    iVar1 = BIO_lookup_ex(param_2,param_3,0,param_6,param_7,param_8,&local_50);
    if (iVar1 != 0) {
      if ((param_5 == (undefined *)0x0 && param_4 == (undefined *)0x0) ||
         (iVar1 = BIO_lookup_ex(param_4,param_5,0,param_6,param_7,param_8,&local_48), iVar1 != 0)) {
        lVar8 = local_50;
        if (local_50 != 0) {
          local_68 = 0;
          lVar11 = 0;
          local_64 = 0;
          if (param_6 != 0) goto LAB_0010045f;
LAB_00100101:
          if ((param_7 != 0) && (iVar1 = BIO_ADDRINFO_socktype(lVar8), iVar1 != param_7))
          goto LAB_00100470;
          if (param_8 != 0) goto LAB_00100490;
          do {
            lVar6 = local_48;
            if (local_48 == 0) {
              uVar3 = BIO_ADDRINFO_protocol(lVar8);
              uVar4 = BIO_ADDRINFO_socktype(lVar8);
              uVar5 = BIO_ADDRINFO_family(lVar8);
              iVar1 = BIO_socket(uVar5,uVar4,uVar3,0);
              *param_1 = iVar1;
              if (iVar1 != -1) {
                if (lVar11 != 0) {
LAB_00100199:
                  uVar7 = BIO_ADDRINFO_address(lVar11);
                  iVar1 = BIO_bind(*param_1,uVar7,1);
                  lVar6 = lVar11;
                  if (iVar1 == 0) {
                    BIO_closesocket(*param_1);
                    *param_1 = -1;
                    goto LAB_00100214;
                  }
                }
                lVar11 = lVar6;
                iVar1 = BIO_ADDRINFO_protocol(lVar8);
                if (iVar1 == 6) {
                  uVar9 = local_68 | 0x10;
                  local_68 = 0x30;
                  if (param_9 == 0) {
                    local_68 = uVar9;
                  }
                }
                if (param_10 != 0) {
                  uVar7 = BIO_ADDRINFO_address(lVar8);
                  iVar1 = BIO_connect(*param_1,uVar7,local_68);
                  if (iVar1 == 0) {
                    BIO_closesocket(*param_1);
                    *param_1 = -1;
                    goto LAB_00100442;
                  }
                  if (param_9 == 0) goto LAB_00100209;
                }
                uVar7 = BIO_ADDRINFO_address(lVar8);
                uVar7 = BIO_ADDR_dup(uVar7);
                *param_11 = uVar7;
                goto LAB_00100209;
              }
            }
            else {
              do {
                lVar11 = lVar6;
                iVar1 = BIO_ADDRINFO_family(lVar11);
                iVar2 = BIO_ADDRINFO_family(lVar8);
                if (iVar1 == iVar2) {
                  local_64 = local_64 + 1;
                  uVar3 = BIO_ADDRINFO_protocol(lVar8);
                  uVar4 = BIO_ADDRINFO_socktype(lVar8);
                  uVar5 = BIO_ADDRINFO_family(lVar8);
                  iVar1 = BIO_socket(uVar5,uVar4,uVar3,0);
                  *param_1 = iVar1;
                  if (iVar1 == -1) goto LAB_00100442;
                  goto LAB_00100199;
                }
                lVar6 = BIO_ADDRINFO_next(lVar11);
              } while (lVar6 != 0);
              lVar11 = 0;
            }
LAB_00100442:
            lVar8 = BIO_ADDRINFO_next(lVar8);
            if (lVar8 == 0) goto LAB_00100209;
            if (param_6 == 0) goto LAB_00100101;
LAB_0010045f:
            iVar1 = BIO_ADDRINFO_family(lVar8);
            if (iVar1 == param_6) goto LAB_00100101;
LAB_00100470:
            do {
              OPENSSL_die("assertion failed: (family == AF_UNSPEC || family == BIO_ADDRINFO_family(ai)) && (type == 0 || type == BIO_ADDRINFO_socktype(ai)) && (protocol == 0 || protocol == BIO_ADDRINFO_protocol(ai))"
                          ,"apps/lib/s_socket.c",0x70);
LAB_00100490:
              iVar1 = BIO_ADDRINFO_protocol(lVar8);
            } while (iVar1 != param_8);
          } while( true );
        }
        local_64 = 0;
LAB_00100209:
        if (*param_1 == -1) {
LAB_00100214:
          if ((local_48 != 0) && (local_64 == 0)) {
            puVar12 = &_LC0;
            local_78 = param_5;
            if (param_5 == (undefined *)0x0) {
              puVar12 = &_LC1;
              local_78 = &_LC1;
            }
            if (param_4 == (undefined *)0x0) {
              param_4 = &_LC1;
            }
            iVar1 = BIO_ADDRINFO_family(local_50);
            pcVar10 = "IPv6 ";
            if (iVar1 != 10) {
              iVar1 = BIO_ADDRINFO_family(local_50);
              pcVar10 = "IPv4 ";
              if (iVar1 != 2) {
                iVar1 = BIO_ADDRINFO_family(local_50);
                pcVar10 = "unix ";
                if (iVar1 != 1) {
                  pcVar10 = "";
                }
              }
            }
            BIO_printf(_bio_err,"Can\'t bind %saddress for %s%s%s\n",pcVar10,param_4,puVar12,
                       local_78);
            ERR_clear_error();
          }
          ERR_print_errors(_bio_err);
          goto LAB_001003e7;
        }
        uVar7 = BIO_ADDRINFO_address(lVar8);
        ptr = (void *)BIO_ADDR_hostname_string(uVar7,1);
        if (ptr != (void *)0x0) {
          BIO_printf(_bio_err,"Connecting to %s\n",ptr);
          CRYPTO_free(ptr);
        }
        ERR_clear_error();
      }
      else {
        ERR_print_errors(_bio_err);
LAB_001003e7:
        uVar13 = 0;
      }
      if (local_48 != 0) {
        BIO_ADDRINFO_free();
      }
      BIO_ADDRINFO_free(local_50);
      goto LAB_00100064;
    }
    ERR_print_errors(_bio_err);
  }
  uVar13 = 0;
LAB_00100064:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar13;
}



void get_sock_info_address(undefined4 param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = 0;
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = 0;
  }
  local_28 = BIO_ADDR_new();
  if ((local_28 != 0) && (iVar1 = BIO_sock_info(param_1,0,&local_28), iVar1 != 0)) {
    if (param_2 != (undefined8 *)0x0) {
      uVar2 = BIO_ADDR_hostname_string(local_28,1);
      *param_2 = uVar2;
    }
    if (param_3 != (undefined8 *)0x0) {
      uVar2 = BIO_ADDR_service_string(local_28,1);
      *param_3 = uVar2;
    }
  }
  BIO_ADDR_free(local_28);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



byte report_server_accept(BIO *param_1,undefined4 param_2,int param_3,int param_4)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  byte bVar5;
  char *format;
  bool bVar6;
  long in_FS_OFFSET;
  char *local_50;
  void *local_48;
  long local_40;
  
  bVar5 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = BIO_printf(param_1,"ACCEPT");
  if (0 < iVar2) {
    bVar6 = true;
    if (param_3 != 0) {
      get_sock_info_address(param_2,&local_50,&local_48);
      pcVar1 = local_50;
      if ((local_50 == (char *)0x0) || (local_48 == (void *)0x0)) {
        bVar6 = false;
        BIO_printf(param_1,"unknown:error\n");
      }
      else {
        pcVar4 = strchr(local_50,0x3a);
        format = " [%s]:%s";
        if (pcVar4 == (char *)0x0) {
          format = " %s:%s";
        }
        iVar2 = BIO_printf(param_1,format,pcVar1);
        bVar6 = 0 < iVar2;
      }
      CRYPTO_free(local_50);
      CRYPTO_free(local_48);
    }
    if (param_4 != 0) {
      uVar3 = getpid();
      iVar2 = BIO_printf(param_1," PID=%d",(ulong)uVar3);
      bVar6 = (bool)(bVar6 & 0 < iVar2);
    }
    iVar2 = BIO_printf(param_1,"\n");
    bVar5 = 0 < iVar2 & bVar6;
    BIO_ctrl(param_1,0xb,0,(void *)0x0);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar5;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int do_server(int *param_1,char *param_2,undefined8 param_3,int param_4,int param_5,int param_6,
             code *param_7,undefined8 param_8,int param_9,undefined8 param_10,int param_11)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  ssize_t sVar8;
  fd_set *pfVar9;
  uint uVar10;
  int unaff_R13D;
  undefined8 unaff_R14;
  long in_FS_OFFSET;
  bool bVar11;
  byte bVar12;
  undefined8 local_140;
  undefined8 local_120;
  timeval local_118;
  fd_set local_108;
  undefined1 local_88 [72];
  long local_40;
  
  bVar12 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_120 = 0;
  iVar2 = BIO_sock_init();
  if (iVar2 == 1) {
    uVar10 = 1;
    iVar2 = BIO_lookup_ex(param_2,param_3,1,param_4,param_5,param_6);
    if (iVar2 != 0) {
      if ((((param_4 == 0) || (iVar2 = BIO_ADDRINFO_family(local_120,&local_120), iVar2 == param_4))
          && ((param_5 == 0 || (iVar2 = BIO_ADDRINFO_socktype(local_120), iVar2 == param_5)))) &&
         ((param_6 == 0 || (iVar2 = BIO_ADDRINFO_protocol(local_120), iVar2 == param_6)))) {
        iVar2 = BIO_ADDRINFO_family(local_120);
        iVar3 = BIO_ADDRINFO_socktype(local_120);
        iVar4 = BIO_ADDRINFO_protocol(local_120);
        uVar6 = BIO_ADDRINFO_address(local_120);
        lVar7 = BIO_ADDRINFO_next(local_120);
        if ((param_11 != 0) && (iVar3 == 1)) {
          uVar10 = 0x21;
        }
        if (iVar2 == 10) {
          uVar10 = uVar10 | 2;
        }
        if (((lVar7 == 0) || (iVar5 = BIO_ADDRINFO_socktype(), iVar5 != iVar3)) ||
           (iVar5 = BIO_ADDRINFO_protocol(lVar7), iVar5 != iVar4)) {
LAB_0010094c:
          unaff_R13D = BIO_socket(iVar2,iVar3,iVar4,0);
        }
        else {
          if (iVar2 != 2) {
            if (iVar2 == 10) {
              iVar5 = BIO_ADDRINFO_family(lVar7);
              if (iVar5 == 2) {
                uVar10 = uVar10 & 0xfffffffd;
              }
            }
            goto LAB_0010094c;
          }
          iVar5 = BIO_ADDRINFO_family(lVar7);
          if (iVar5 != 10) goto LAB_0010094c;
          local_140 = BIO_ADDRINFO_address(lVar7);
          unaff_R13D = BIO_socket(10,iVar3,iVar4,0);
          if (unaff_R13D != -1) goto LAB_00100969;
          unaff_R13D = BIO_socket(2,iVar3,iVar4,0);
        }
        local_140 = uVar6;
        if (unaff_R13D != -1) goto LAB_00100969;
        BIO_ADDRINFO_free(local_120);
        ERR_print_errors(_bio_err);
LAB_001009a5:
        iVar2 = 0;
      }
      else {
        OPENSSL_die("assertion failed: (family == AF_UNSPEC || family == BIO_ADDRINFO_family(res)) && (type == 0 || type == BIO_ADDRINFO_socktype(res)) && (protocol == 0 || protocol == BIO_ADDRINFO_protocol(res))"
                    ,"apps/lib/s_socket.c",0x13b);
        local_140 = unaff_R14;
LAB_00100969:
        iVar2 = BIO_listen(unaff_R13D,local_140,uVar10);
        if (iVar2 == 0) {
          BIO_ADDRINFO_free(local_120);
          ERR_print_errors(_bio_err);
          BIO_closesocket(unaff_R13D);
          goto LAB_001009a5;
        }
        sVar1 = BIO_ADDR_rawport(local_140);
        BIO_ADDRINFO_free(local_120);
        local_120 = 0;
        iVar2 = report_server_accept(param_10,unaff_R13D,sVar1 == 0,0);
        if (iVar2 == 0) {
          BIO_closesocket(unaff_R13D);
          ERR_print_errors(_bio_err);
          goto LAB_001009a5;
        }
        if (param_1 != (int *)0x0) {
          *param_1 = unaff_R13D;
        }
        do {
          if (param_5 == 1) {
            BIO_ADDR_free(ourpeer);
            ourpeer = BIO_ADDR_new();
            if (ourpeer == 0) {
              BIO_closesocket(unaff_R13D);
              ERR_print_errors(_bio_err);
              goto LAB_001009a5;
            }
            while (iVar3 = BIO_accept_ex(unaff_R13D,ourpeer,0), iVar3 < 0) {
              iVar2 = BIO_sock_should_retry(iVar3);
              if (iVar2 == 0) {
                iVar2 = 0;
                ERR_print_errors(_bio_err);
                BIO_closesocket(unaff_R13D);
                goto LAB_001009a8;
              }
            }
            bVar11 = false;
            if (param_9 != -1) {
              param_9 = param_9 + -1;
              if (param_9 == 0) {
                BIO_closesocket(unaff_R13D);
              }
              bVar11 = param_9 == 0;
            }
            BIO_set_tcp_ndelay(iVar3,1);
            iVar2 = (*param_7)(iVar3,1,param_6,param_8);
            shutdown(iVar3,1);
            local_118.tv_sec = __LC16;
            local_118.tv_usec = _UNK_00100ff8;
            do {
              pfVar9 = &local_108;
              for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
                pfVar9->fds_bits[0] = 0;
                pfVar9 = (fd_set *)((long)pfVar9 + ((ulong)bVar12 * -2 + 1) * 8);
              }
              lVar7 = __fdelt_chk((long)iVar3);
              local_108.fds_bits[lVar7] = local_108.fds_bits[lVar7] | 1L << ((byte)iVar3 & 0x3f);
              iVar4 = select(iVar3 + 1,&local_108,(fd_set *)0x0,(fd_set *)0x0,&local_118);
            } while ((0 < iVar4) && (sVar8 = read(iVar3,local_88,0x40), 0 < sVar8));
            BIO_closesocket(iVar3);
          }
          else {
            bVar11 = false;
            if (param_9 != -1) {
              param_9 = param_9 + -1;
              bVar11 = param_9 == 0;
            }
            iVar2 = (*param_7)(unaff_R13D,param_5,param_6,param_8);
          }
        } while ((-1 < iVar2) && (!bVar11));
        BIO_closesocket(unaff_R13D);
      }
LAB_001009a8:
      if (param_4 == 1) {
        unlink(param_2);
      }
      BIO_ADDR_free(ourpeer);
      ourpeer = 0;
      goto LAB_0010082b;
    }
    ERR_print_errors(_bio_err);
  }
  iVar2 = 0;
LAB_0010082b:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



void do_ssl_shutdown(SSL *param_1)

{
  int iVar1;
  
  do {
    while( true ) {
      iVar1 = SSL_shutdown(param_1);
      if (-1 < iVar1) {
        return;
      }
      iVar1 = SSL_get_error(param_1,iVar1);
      if (iVar1 < 4) break;
      if (1 < iVar1 - 9U) {
        return;
      }
    }
  } while (1 < iVar1);
  return;
}


