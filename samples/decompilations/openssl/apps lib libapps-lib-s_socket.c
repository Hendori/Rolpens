
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

int do_server(undefined4 *param_1,char *param_2,ulong param_3,int param_4,int param_5,int param_6,
             code *param_7,undefined8 param_8,int param_9,undefined8 param_10,int param_11)

{
  undefined4 uVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  long lVar9;
  ssize_t sVar10;
  undefined4 uVar11;
  long in_FS_OFFSET;
  bool bVar12;
  undefined4 local_150;
  undefined8 local_140;
  undefined8 local_120;
  timeval local_118;
  undefined1 local_108 [32];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_120 = 0;
  iVar3 = BIO_sock_init();
  if (iVar3 == 1) {
    local_140 = 1;
    iVar3 = BIO_lookup_ex(param_2,param_3,1,param_4,param_5,param_6);
    if (iVar3 != 0) {
      if ((((param_4 == 0) || (iVar3 = BIO_ADDRINFO_family(local_120,&local_120), iVar3 == param_4))
          && ((param_5 == 0 || (iVar3 = BIO_ADDRINFO_socktype(local_120), iVar3 == param_5)))) &&
         ((param_6 == 0 || (iVar3 = BIO_ADDRINFO_protocol(local_120), iVar3 == param_6)))) {
        iVar3 = BIO_ADDRINFO_family(local_120);
        iVar4 = BIO_ADDRINFO_socktype(local_120);
        iVar5 = BIO_ADDRINFO_protocol(local_120);
        uVar8 = BIO_ADDRINFO_address(local_120);
        lVar9 = BIO_ADDRINFO_next(local_120);
        if ((param_11 == 0) || (iVar4 != 1)) {
          local_150 = 3;
          uVar11 = 1;
        }
        else {
          local_150 = 0x23;
          uVar11 = 0x21;
        }
        if (iVar3 != 10) {
          local_150 = uVar11;
        }
        uVar1 = local_150;
        if (((lVar9 == 0) || (iVar6 = BIO_ADDRINFO_socktype(), iVar6 != iVar4)) ||
           (iVar6 = BIO_ADDRINFO_protocol(lVar9), iVar6 != iVar5)) {
LAB_00100953:
          uVar7 = BIO_socket(iVar3,iVar4,iVar5,0);
          local_150 = uVar1;
        }
        else {
          if (iVar3 != 2) {
            if ((iVar3 == 10) && (iVar6 = BIO_ADDRINFO_family(lVar9), uVar1 = uVar11, iVar6 != 2)) {
              uVar1 = local_150;
            }
            goto LAB_00100953;
          }
          iVar6 = BIO_ADDRINFO_family(lVar9);
          if (iVar6 != 10) goto LAB_00100953;
          local_140 = BIO_ADDRINFO_address(lVar9);
          uVar7 = BIO_socket(10,iVar4,iVar5,0);
          param_3 = (ulong)uVar7;
          if (uVar7 != 0xffffffff) goto LAB_0010096f;
          uVar7 = BIO_socket(2,iVar4,iVar5,0);
        }
        param_3 = (ulong)uVar7;
        local_140 = uVar8;
        if (uVar7 != 0xffffffff) goto LAB_0010096f;
        BIO_ADDRINFO_free(local_120);
        ERR_print_errors(_bio_err);
LAB_001009ae:
        iVar3 = 0;
      }
      else {
        OPENSSL_die("assertion failed: (family == AF_UNSPEC || family == BIO_ADDRINFO_family(res)) && (type == 0 || type == BIO_ADDRINFO_socktype(res)) && (protocol == 0 || protocol == BIO_ADDRINFO_protocol(res))"
                    ,"apps/lib/s_socket.c",0x13b);
LAB_0010096f:
        iVar3 = BIO_listen(param_3 & 0xffffffff,local_140,local_150);
        if (iVar3 == 0) {
          BIO_ADDRINFO_free(local_120);
          ERR_print_errors(_bio_err);
          BIO_closesocket(param_3 & 0xffffffff);
          goto LAB_001009ae;
        }
        sVar2 = BIO_ADDR_rawport(local_140);
        BIO_ADDRINFO_free(local_120);
        local_120 = 0;
        iVar3 = report_server_accept(param_10,param_3 & 0xffffffff,sVar2 == 0,0);
        if (iVar3 == 0) {
          BIO_closesocket(param_3 & 0xffffffff);
          ERR_print_errors(_bio_err);
          goto LAB_001009ae;
        }
        if (param_1 != (undefined4 *)0x0) {
          *param_1 = (int)param_3;
        }
        do {
          if (param_5 == 1) {
            BIO_ADDR_free(ourpeer);
            ourpeer = BIO_ADDR_new();
            if (ourpeer == 0) {
              BIO_closesocket(param_3 & 0xffffffff,0);
              ERR_print_errors(_bio_err);
              goto LAB_001009ae;
            }
            while (iVar4 = BIO_accept_ex(param_3 & 0xffffffff,ourpeer,0), iVar4 < 0) {
              iVar3 = BIO_sock_should_retry(iVar4);
              if (iVar3 == 0) {
                iVar3 = 0;
                ERR_print_errors(_bio_err);
                BIO_closesocket(param_3 & 0xffffffff);
                goto LAB_001009b1;
              }
            }
            bVar12 = false;
            if (param_9 != -1) {
              param_9 = param_9 + -1;
              if (param_9 == 0) {
                BIO_closesocket(param_3 & 0xffffffff);
              }
              bVar12 = param_9 == 0;
            }
            BIO_set_tcp_ndelay(iVar4,1);
            iVar3 = (*param_7)(iVar4,1,param_6,param_8);
            shutdown(iVar4,1);
            local_118.tv_sec = __LC16;
            local_118.tv_usec = _UNK_00101048;
            do {
              local_108._0_16_ = (undefined1  [16])0x0;
              local_108._16_16_ = (undefined1  [16])0x0;
              local_e8 = (undefined1  [16])0x0;
              local_d8 = (undefined1  [16])0x0;
              local_c8 = (undefined1  [16])0x0;
              local_b8 = (undefined1  [16])0x0;
              local_a8 = (undefined1  [16])0x0;
              local_98 = (undefined1  [16])0x0;
              lVar9 = __fdelt_chk((long)iVar4);
              *(ulong *)(local_108 + lVar9 * 8) =
                   *(ulong *)(local_108 + lVar9 * 8) | 1L << ((byte)iVar4 & 0x3f);
              iVar5 = select(iVar4 + 1,(fd_set *)local_108,(fd_set *)0x0,(fd_set *)0x0,&local_118);
              if (iVar5 < 1) break;
              sVar10 = read(iVar4,local_88,0x40);
            } while (0 < sVar10);
            param_3 = param_3 & 0xffffffff;
            BIO_closesocket(iVar4);
          }
          else {
            bVar12 = false;
            if (param_9 != -1) {
              param_9 = param_9 + -1;
              bVar12 = param_9 == 0;
            }
            iVar3 = (*param_7)(param_3 & 0xffffffff,param_5,param_6,param_8);
          }
        } while ((-1 < iVar3) && (!bVar12));
        BIO_closesocket(param_3 & 0xffffffff);
      }
LAB_001009b1:
      if (param_4 == 1) {
        unlink(param_2);
      }
      BIO_ADDR_free(ourpeer);
      ourpeer = 0;
      goto LAB_00100821;
    }
    ERR_print_errors(_bio_err);
  }
  iVar3 = 0;
LAB_00100821:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar3;
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


