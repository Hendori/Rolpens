
void noteterm(undefined4 param_1)

{
  termsig = param_1;
  return;
}



void killall(int param_1,void *param_2)

{
  __pid_t __pid;
  long lVar1;
  
  if (0 < n_responders) {
    lVar1 = 0;
    do {
      while (__pid = *(__pid_t *)((long)param_2 + lVar1 * 4), __pid != 0) {
        lVar1 = lVar1 + 1;
        kill(__pid,0xf);
        if (n_responders <= (int)lVar1) goto LAB_0010005e;
      }
      lVar1 = lVar1 + 1;
    } while ((int)lVar1 < n_responders);
  }
LAB_0010005e:
  CRYPTO_free(param_2);
  OSSL_sleep(1000);
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}



void socket_timeout(void)

{
  if (acfd == -1) {
    return;
  }
  shutdown(acfd,0);
  return;
}



void spawn_loop(char *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  __pid_t _Var4;
  int *piVar5;
  long lVar6;
  int *piVar7;
  char *pcVar8;
  uint *unaff_R12;
  long in_FS_OFFSET;
  uint local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  openlog(param_1,1,0x18);
  iVar1 = setpgid(0,0);
  if (iVar1 != 0) {
    piVar5 = __errno_location();
    pcVar8 = strerror(*piVar5);
    trace_log_message(0x12,param_1,2,"error detaching from parent process group: %s",pcVar8);
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  piVar5 = (int *)app_malloc((long)n_responders << 2,"child PID array");
  lVar6 = 0;
  if (0 < n_responders) {
    do {
      piVar5[lVar6] = 0;
      lVar6 = lVar6 + 1;
    } while ((int)lVar6 < n_responders);
  }
  iVar1 = 0x100000;
  signal(2,noteterm);
  signal(0xf,noteterm);
  if (termsig != 0) goto LAB_001001a3;
  iVar1 = 0;
  unaff_R12 = &local_34;
LAB_00100168:
  if (iVar1 < n_responders) goto LAB_00100271;
  iVar2 = waitpid(-1,(int *)unaff_R12,0);
  if (0 < iVar2) goto LAB_001001d0;
  piVar7 = __errno_location();
  if (*piVar7 != 4) {
    strerror(*piVar7);
    pcVar8 = "waitpid() failed: %s";
LAB_001002be:
    trace_log_message(0x12,param_1,2,pcVar8);
    killall(1,piVar5);
LAB_001002e0:
    CRYPTO_free(piVar5);
    signal(2,(__sighandler_t)0x0);
    signal(0xf,(__sighandler_t)0x0);
    if (termsig != 0) {
                    /* WARNING: Subroutine does not return */
      _exit(0);
    }
    iVar1 = RAND_poll();
    if (0 < iVar1) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    trace_log_message(0x12,param_1,2,&_LC10,"RAND_poll() failed");
                    /* WARNING: Subroutine does not return */
    _exit(1);
  }
LAB_00100197:
  while (termsig != 0) {
LAB_001001a3:
    do {
      iVar2 = termsig;
      trace_log_message(0x12,param_1,6);
      killall(0,piVar5);
LAB_001001d0:
      if (iVar1 < 1) {
        iVar3 = 0;
      }
      else {
        iVar3 = 0;
        piVar7 = piVar5;
        do {
          if (*piVar7 == iVar2) {
            *piVar7 = 0;
            iVar1 = iVar1 + -1;
            break;
          }
          iVar3 = iVar3 + 1;
          piVar7 = piVar7 + 1;
        } while (iVar1 != iVar3);
      }
      if (n_responders <= iVar3) {
        pcVar8 = "internal error: no matching child slot for pid: %ld";
        goto LAB_001002be;
      }
      if (local_34 != 0) {
        if ((local_34 & 0x7f) == 0) {
          trace_log_message(0x12,param_1,4);
          OSSL_sleep(1000);
        }
        else {
          if ('\x01' < (char)((char)(local_34 & 0x7f) + '\x01')) {
            trace_log_message(0x12,param_1,4);
          }
          OSSL_sleep(1000);
        }
      }
    } while (termsig != 0);
LAB_00100271:
    _Var4 = fork();
    if (_Var4 != -1) {
      if (_Var4 != 0) {
        if (0 < n_responders) goto code_r0x00100289;
        goto LAB_001002b0;
      }
      goto LAB_001002e0;
    }
    OSSL_sleep(30000);
  }
  goto LAB_00100168;
code_r0x00100289:
  iVar2 = 0;
  piVar7 = piVar5;
  while (*piVar7 != 0) {
    iVar2 = iVar2 + 1;
    piVar7 = piVar7 + 1;
    if (iVar2 == n_responders) goto LAB_001002b0;
  }
  *piVar7 = _Var4;
  iVar1 = iVar1 + 1;
  if (n_responders <= iVar2) {
LAB_001002b0:
    pcVar8 = "%s";
    goto LAB_001002be;
  }
  goto LAB_00100197;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

BIO * http_server_init(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  BIO_METHOD *pBVar2;
  BIO *a;
  BIO *bp;
  long lVar3;
  long in_FS_OFFSET;
  undefined4 local_5c;
  char local_58 [40];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  BIO_snprintf(local_58,0x28,"*:%s",param_2);
  if (param_3 < 0) {
LAB_0010048a:
    pBVar2 = BIO_f_buffer();
    a = BIO_new(pBVar2);
    if (a == (BIO *)0x0) {
      bp = (BIO *)0x0;
    }
    else {
      pBVar2 = BIO_s_accept();
      bp = BIO_new(pBVar2);
      if (bp != (BIO *)0x0) {
        lVar3 = BIO_int_ctrl(bp,0x76,4,0x100);
        if (0 < lVar3) {
          lVar3 = BIO_ctrl(bp,0x83,1,(void *)0x0);
          if (0 < lVar3) {
            lVar3 = BIO_ctrl(bp,0x76,0,local_58);
            if (0 < lVar3) {
              BIO_ctrl(bp,0x76,3,a);
              lVar3 = BIO_ctrl(bp,0x65,0,(void *)0x0);
              if (lVar3 < 1) {
                a = (BIO *)0x0;
                trace_log_message(0x12,param_1,3,"error setting accept on port %s",param_2);
              }
              else {
                BIO_ctrl(bp,0x69,0,&local_5c);
                iVar1 = report_server_accept(_bio_out,local_5c,1,1);
                if (iVar1 != 0) goto LAB_001005e3;
                a = (BIO *)0x0;
                trace_log_message(0x12,param_1,3,&_LC10,"error printing ACCEPT string");
              }
              goto LAB_001005c2;
            }
          }
        }
      }
      trace_log_message(0x12,param_1,3,&_LC10,"error setting up accept BIO");
    }
LAB_001005c2:
    ERR_print_errors(_bio_err);
    BIO_free_all(bp);
    BIO_free(a);
  }
  else {
    iVar1 = log_set_verbosity(param_1,param_3);
    if (iVar1 != 0) goto LAB_0010048a;
  }
  bp = (BIO *)0x0;
LAB_001005e3:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bp;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool http_server_send_asn1_resp
               (undefined8 param_1,BIO *param_2,int param_3,undefined8 param_4,ASN1_ITEM *param_5,
               ASN1_VALUE *param_6)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  bool bVar4;
  long in_FS_OFFSET;
  char acStack_108 [200];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = ASN1_item_i2d(param_6,(uchar **)0x0,param_5);
  pcVar3 = "";
  if (param_3 != 0) {
    pcVar3 = "Connection: keep-alive\r\n";
  }
  bVar4 = false;
  uVar1 = BIO_snprintf(acStack_108,200,
                       "HTTP/1.0 200 OK\r\n%sContent-type: %s\r\nContent-Length: %d\r\n",pcVar3,
                       param_4,(ulong)uVar1);
  if (uVar1 < 200) {
    iVar2 = log_get_verbosity();
    if (iVar2 < 8) {
      pcVar3 = strchr(acStack_108,0xd);
      if (pcVar3 != (char *)0x0) {
        trace_log_message(0xffffffff,param_1,6,"sending response, 1st line: %.*s",
                          (int)pcVar3 - (int)acStack_108,acStack_108);
      }
    }
    bVar4 = false;
    trace_log_message(0x12,param_1,8,"sending response header:\n%s",acStack_108);
    iVar2 = BIO_printf(param_2,"%s\r\n",acStack_108);
    if (0 < iVar2) {
      iVar2 = ASN1_item_i2d_bio(param_5,param_2,param_6);
      bVar4 = 0 < iVar2;
    }
    BIO_ctrl(param_2,0xb,0,(void *)0x0);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool http_server_send_status(undefined8 param_1,BIO *param_2,ulong param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  long in_FS_OFFSET;
  char acStack_f8 [200];
  long local_30;
  
  bVar3 = false;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = BIO_snprintf(acStack_f8,200,"HTTP/1.0 %d %s\r\n\r\n",param_3 & 0xffffffff,param_4);
  if (uVar1 < 200) {
    trace_log_message(0x12,param_1,8,"sending response header:\n%s",acStack_f8);
    iVar2 = BIO_printf(param_2,"%s\r\n",acStack_f8);
    bVar3 = 0 < iVar2;
    BIO_ctrl(param_2,0xb,0,(void *)0x0);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8
http_server_get_asn1_req
          (ASN1_ITEM *param_1,undefined8 *param_2,undefined8 *param_3,long *param_4,BIO *param_5,
          uint *param_6,undefined8 param_7,int param_8,uint param_9)

{
  char cVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  BIO *bp;
  size_t sVar7;
  ushort **ppuVar8;
  ASN1_VALUE *val;
  BIO_METHOD *type;
  BIO *pBVar9;
  char *pcVar10;
  byte *__s1;
  undefined8 uVar11;
  byte *pbVar12;
  char *pcVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  long in_FS_OFFSET;
  BIO *local_1098;
  void *local_1050;
  int local_1048;
  byte local_1044;
  byte local_1043 [2043];
  char local_848 [2056];
  long local_40;
  
  bp = (BIO *)*param_4;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *param_2 = 0;
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = 0;
  }
  if (bp == (BIO *)0x0) {
    uVar5 = BIO_ctrl(param_5,0x69,0,(void *)0x0);
    get_sock_info_address(uVar5 & 0xffffffff,0,&local_1050);
    if (local_1050 == (void *)0x0) {
      trace_log_message(0x12,param_7,3,&_LC10,"cannot get port listening on");
      local_1098 = (BIO *)0x0;
      bp = (BIO *)0x0;
LAB_001010c4:
      http_server_send_status(param_7,bp,500,"Internal Server Error");
      if (param_3 != (undefined8 *)0x0) {
LAB_001010f1:
        CRYPTO_free((void *)*param_3);
        *param_3 = 0;
      }
      uVar11 = 0xffffffff;
      BIO_free_all(bp);
      *param_4 = 0;
    }
    else {
      trace_log_message(0x12,param_7,7,"awaiting new connection on port %s ...",local_1050);
      CRYPTO_free(local_1050);
      lVar6 = BIO_ctrl(param_5,0x65,0,(void *)0x0);
      if (lVar6 < 1) goto LAB_00100afa;
      bp = BIO_pop(param_5);
      *param_4 = (long)bp;
      if (bp != (BIO *)0x0) goto LAB_00100914;
      uVar11 = 0xffffffff;
      local_1098 = (BIO *)0x0;
    }
  }
  else {
    trace_log_message(0x12,param_7,7,&_LC10,"awaiting next request ...");
LAB_00100914:
    if (0 < (int)param_9) {
      BIO_ctrl(bp,0x69,0,&acfd);
      alarm(param_9);
    }
    iVar4 = BIO_gets(bp,(char *)&local_1048,0x800);
    if (iVar4 == 0) {
LAB_00100afa:
      uVar11 = 0;
      goto LAB_00100afc;
    }
    pcVar13 = "request line read error";
    if (iVar4 < 0) {
LAB_00100d65:
      trace_log_message(0x12,param_7,4,&_LC10,pcVar13);
LAB_00100a29:
      http_server_send_status(param_7,bp,400,"Bad Request");
    }
    else {
      pcVar13 = strchr((char *)&local_1048,0xd);
      if (((pcVar13 == (char *)0x0) || (pcVar13[1] != '\n')) &&
         (pcVar13 = strchr((char *)&local_1048,10), pcVar13 == (char *)0x0)) {
        iVar4 = log_get_verbosity();
        if (iVar4 < 8) {
          trace_log_message(0xffffffff,param_7,6,"received request, 1st line: %s",&local_1048);
          trace_log_message(0x12,param_7,8,&_LC10,"received request header:");
        }
        else {
          trace_log_message(0x12,param_7,8,&_LC10,"received request header:");
        }
        trace_log_message(0x12,param_7,8,&_LC10,&local_1048);
        pcVar13 = "cannot parse HTTP header: missing end of line";
        goto LAB_00100d65;
      }
      *pcVar13 = '\0';
      iVar4 = log_get_verbosity();
      if (iVar4 < 8) {
        trace_log_message(0xffffffff,param_7,6,"received request, 1st line: %s",&local_1048);
        trace_log_message(0x12,param_7,8,&_LC10,"received request header:");
      }
      else {
        trace_log_message(0x12,param_7,8,&_LC10,"received request header:");
      }
      trace_log_message(0x12,param_7,8,&_LC10,&local_1048);
      if (param_8 == 0) {
        if ((local_1048 == 0x54534f50) && (local_1044 == 0x20)) goto LAB_00100bb8;
        pcVar13 = &_LC1;
LAB_00100a09:
        pcVar10 = "HTTP request does not begin with %sPOST: %s";
        pbVar14 = (byte *)&local_1048;
LAB_00100a15:
        trace_log_message(0x12,param_7,4,pcVar10,pcVar13,pbVar14);
        goto LAB_00100a29;
      }
      pbVar14 = &local_1044;
      if (local_1048 != 0x20544547) {
        if ((local_1048 != 0x54534f50) || (local_1044 != 0x20)) {
          pcVar13 = "GET or ";
          goto LAB_00100a09;
        }
LAB_00100bb8:
        pbVar14 = local_1043;
      }
      bVar3 = *pbVar14;
      pbVar14[-1] = 0;
      while (bVar3 == 0x20) {
        pbVar16 = pbVar14 + 1;
        pbVar14 = pbVar14 + 1;
        bVar3 = *pbVar16;
      }
      pcVar13 = (char *)&local_1048;
      if (bVar3 != 0x2f) {
        pcVar10 = "invalid %s -- URL does not begin with \'/\': %s";
        goto LAB_00100a15;
      }
      pbVar16 = pbVar14 + 1;
      bVar3 = pbVar14[1];
      __s1 = pbVar16;
      while ((bVar3 & 0xdf) != 0) {
        __s1 = __s1 + 1;
        bVar3 = *__s1;
      }
      iVar4 = strncmp((char *)__s1," HTTP/1.",8);
      if (iVar4 != 0) {
        pbVar14 = __s1 + 1;
        pcVar10 = "invalid %s -- bad HTTP/version string: %s";
        goto LAB_00100a15;
      }
      *__s1 = 0;
      if (param_6 != (uint *)0x0) {
        *param_6 = (uint)('0' < (char)__s1[8]);
      }
      sVar7 = strlen((char *)&local_1048);
      bVar3 = pbVar14[1];
      if (sVar7 != 3) {
        if (bVar3 != 0) goto LAB_00100c7e;
        iVar4 = 0;
LAB_00100da0:
        sVar7 = strlen((char *)&local_1048);
        local_1098 = (BIO *)0x0;
        if (sVar7 == 3) {
          local_1098 = BIO_new_mem_buf(pbVar16,iVar4);
          if (local_1098 != (BIO *)0x0) {
            type = BIO_f_base64();
            pBVar9 = BIO_new(type);
            if (pBVar9 != (BIO *)0x0) {
              BIO_set_flags(pBVar9,0x100);
              local_1098 = BIO_push(pBVar9,local_1098);
              goto LAB_00100dd1;
            }
          }
          trace_log_message(0x12,param_7,3,"could not allocate base64 bio with size = %d",iVar4);
          goto LAB_001010c4;
        }
LAB_00100dd1:
        bVar3 = pbVar14[1];
        while (bVar3 == 0x2f) {
          pbVar16 = pbVar16 + 1;
          bVar3 = *pbVar16;
        }
        if (pbVar16 + 2 <= __s1) {
          do {
            if ((__s1[-2] != 0x2f) || (__s1[-1] != 0x2f)) break;
            __s1 = __s1 + -1;
          } while (pbVar16 + 1 != __s1);
        }
        *__s1 = 0;
        while (iVar4 = BIO_gets(bp,local_848,0x800), 0 < iVar4) {
          pcVar13 = strchr(local_848,0xd);
          if (((pcVar13 == (char *)0x0) || (pcVar13[1] != '\n')) &&
             (pcVar13 = strchr(local_848,10), pcVar13 == (char *)0x0)) {
            pcVar13 = " ";
            if (local_848[0] != '\0') {
              pcVar13 = local_848;
            }
            trace_log_message(0x12,param_7,8,&_LC10,pcVar13);
            pcVar13 = "error parsing HTTP header: missing end of line";
            goto LAB_00100f89;
          }
          *pcVar13 = '\0';
          pcVar13 = " ";
          if (local_848[0] != '\0') {
            pcVar13 = local_848;
          }
          trace_log_message(0x12,param_7,8,&_LC10,pcVar13);
          if (local_848[0] == '\0') {
            alarm(0);
            pBVar9 = local_1098;
            if (local_1098 == (BIO *)0x0) {
              pBVar9 = bp;
            }
            val = (ASN1_VALUE *)ASN1_item_d2i_bio(param_1,pBVar9,(void *)0x0);
            if (val == (ASN1_VALUE *)0x0) {
              trace_log_message(0x12,param_7,4,&_LC10,"error parsing DER-encoded request content");
              http_server_send_status(param_7,bp,400,"Bad Request");
            }
            else if (param_3 != (undefined8 *)0x0) {
              pcVar13 = CRYPTO_strdup((char *)pbVar16,"apps/lib/http_server.c",0x1d9);
              *param_3 = pcVar13;
              if (pcVar13 == (char *)0x0) {
                sVar7 = strlen((char *)pbVar16);
                trace_log_message(0x12,param_7,3,"out of memory allocating %zu bytes",sVar7 + 1);
                ASN1_item_free(val,param_1);
                http_server_send_status(param_7,bp,500,"Internal Server Error");
                param_9 = 0;
                goto LAB_001010f1;
              }
            }
            *param_2 = val;
            uVar11 = 1;
            BIO_free_all(local_1098);
            goto LAB_00100b9b;
          }
          pcVar13 = strchr(local_848,0x3a);
          if (pcVar13 == (char *)0x0) {
            pcVar13 = "error parsing HTTP header: missing \':\'";
            goto LAB_00100f89;
          }
          cVar1 = pcVar13[1];
          *pcVar13 = '\0';
          pcVar13 = pcVar13 + 1;
          while (cVar1 == ' ') {
            pcVar13 = pcVar13 + 1;
            cVar1 = *pcVar13;
          }
          if ((param_6 != (uint *)0x0) &&
             (iVar4 = OPENSSL_strcasecmp(local_848,"Connection"), iVar4 == 0)) {
            iVar4 = OPENSSL_strcasecmp(pcVar13,"keep-alive");
            if (iVar4 == 0) {
              *param_6 = 1;
            }
            else {
              iVar4 = OPENSSL_strcasecmp(pcVar13,"close");
              if (iVar4 == 0) {
                *param_6 = 0;
              }
            }
          }
        }
        pcVar13 = "error reading HTTP header";
LAB_00100f89:
        trace_log_message(0x12,param_7,4,&_LC10,pcVar13);
        uVar11 = 1;
        http_server_send_status(param_7,bp,400,"Bad Request");
        goto LAB_00100b81;
      }
      if (bVar3 != 0) {
LAB_00100c7e:
        pbVar2 = pbVar14 + 2;
        pbVar12 = pbVar16;
        do {
          pbVar15 = pbVar2;
          if (bVar3 == 0x25) {
            ppuVar8 = __ctype_b_loc();
            if (((*(byte *)((long)*ppuVar8 + (ulong)pbVar12[1] * 2 + 1) & 0x10) == 0) ||
               ((*(byte *)((long)*ppuVar8 + (ulong)pbVar12[2] * 2 + 1) & 0x10) == 0))
            goto LAB_00101271;
            iVar4 = OPENSSL_hexchar2int((ulong)pbVar12[1]);
            bVar3 = OPENSSL_hexchar2int(pbVar12[2]);
            bVar3 = (byte)(iVar4 << 4) | bVar3;
            pbVar12 = pbVar12 + 2;
          }
          pbVar15[-1] = bVar3;
          bVar3 = pbVar12[1];
          pbVar12 = pbVar12 + 1;
          pbVar2 = pbVar15 + 1;
        } while (bVar3 != 0);
        *pbVar15 = 0;
        iVar4 = (int)pbVar15 - (int)pbVar16;
        if (iVar4 < 0) {
LAB_00101271:
          pcVar10 = "invalid %s request -- bad URL encoding: %s";
          pbVar14 = pbVar16;
          goto LAB_00100a15;
        }
        goto LAB_00100da0;
      }
      http_server_send_status(param_7,bp,200,&_LC35);
    }
    uVar11 = 1;
    local_1098 = (BIO *)0x0;
  }
LAB_00100b81:
  BIO_free_all(local_1098);
  if (0 < (int)param_9) {
    alarm(0);
  }
LAB_00100b9b:
  acfd = 0xffffffff;
LAB_00100afc:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar11;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


