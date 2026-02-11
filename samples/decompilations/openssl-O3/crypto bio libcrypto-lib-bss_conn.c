
undefined8 conn_callback_ctrl(long param_1,int param_2,undefined8 param_3)

{
  if (param_2 != 0xe) {
    return 0;
  }
  *(undefined8 *)(*(long *)(param_1 + 0x40) + 0x38) = param_3;
  return 1;
}



ulong conn_state(BIO *param_1,undefined4 *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  time_t tVar7;
  undefined8 uVar8;
  long lVar9;
  BIO *pBVar10;
  int *piVar11;
  ulong uVar12;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_2 + 0xe);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
    uVar12 = 0xffffffff;
    do {
      uVar3 = *param_2;
      switch(uVar3) {
      default:
        goto switchD_00100425_caseD_0;
      case 1:
        if ((*(long *)(param_2 + 4) == 0) && (*(long *)(param_2 + 6) == 0)) goto LAB_001002db;
        *param_2 = 2;
        uVar3 = 2;
        break;
      case 2:
        iVar2 = param_2[1];
        if (iVar2 == 6) {
          uVar3 = 10;
        }
        else if (iVar2 == 0x100) {
          uVar3 = 0;
        }
        else if (iVar2 != 4) goto LAB_00100320;
        iVar2 = BIO_lookup(*(undefined8 *)(param_2 + 4),*(undefined8 *)(param_2 + 6),0,uVar3,
                           param_2[2],param_2 + 10);
        if (iVar2 == 0) goto LAB_0010020d;
        if (*(long *)(param_2 + 10) == 0) goto LAB_0010065c;
        *(long *)(param_2 + 0xc) = *(long *)(param_2 + 10);
        uVar3 = 3;
        *param_2 = 3;
        break;
      case 3:
        uVar3 = BIO_ADDRINFO_protocol
                          (*(undefined8 *)(param_2 + 0xc),uVar3,
                           &switchD_00100425::switchdataD_00101648,uVar3);
        uVar4 = BIO_ADDRINFO_socktype(*(undefined8 *)(param_2 + 0xc));
        uVar5 = BIO_ADDRINFO_family(*(undefined8 *)(param_2 + 0xc));
        uVar6 = BIO_socket(uVar5,uVar4,uVar3,0);
        uVar12 = (ulong)uVar6;
        if (uVar6 == 0xffffffff) goto LAB_001005d7;
        *(uint *)&param_1->next_bio = uVar6;
        uVar3 = 4;
        *param_2 = 4;
        break;
      case 4:
        BIO_clear_flags(param_1,0xf);
        ERR_set_mark();
        uVar6 = param_2[8];
        iVar2 = BIO_ADDRINFO_socktype(*(undefined8 *)(param_2 + 0xc));
        if (iVar2 == 1) {
          uVar6 = uVar6 | 4;
        }
        uVar8 = BIO_ADDRINFO_address(*(undefined8 *)(param_2 + 0xc));
        uVar6 = BIO_connect(*(undefined4 *)&param_1->next_bio,uVar8,uVar6);
        *(undefined4 *)((long)&param_1->ptr + 4) = 0;
        uVar12 = (ulong)uVar6;
        if (uVar6 == 0) {
          iVar2 = BIO_sock_should_retry(0);
          if (iVar2 != 0) {
            BIO_set_flags(param_1,0xc);
            *param_2 = 6;
            *(undefined4 *)((long)&param_1->ptr + 4) = 2;
            ERR_pop_to_mark();
            goto LAB_0010020d;
          }
          lVar9 = BIO_ADDRINFO_next(*(undefined8 *)(param_2 + 0xc));
          *(long *)(param_2 + 0xc) = lVar9;
          if (lVar9 == 0) {
            ERR_clear_last_mark();
            ERR_new();
            ERR_set_debug("crypto/bio/bss_conn.c",0xd7,"conn_state");
            uVar8 = *(undefined8 *)(param_2 + 6);
            uVar1 = *(undefined8 *)(param_2 + 4);
            piVar11 = __errno_location();
            ERR_set_error(2,*piVar11,"calling connect(%s, %s)",uVar1,uVar8);
            *param_2 = 7;
            uVar3 = 7;
          }
          else {
            BIO_closesocket(*(undefined4 *)&param_1->next_bio);
            *param_2 = 3;
            ERR_pop_to_mark();
            uVar3 = *param_2;
          }
        }
        else {
          ERR_clear_last_mark();
          iVar2 = param_2[2];
joined_r0x001006e7:
          if (iVar2 == 2) {
            pBVar10 = BIO_new_dgram(*(int *)&param_1->next_bio,0);
            *(BIO **)(param_2 + 0x10) = pBVar10;
            if (pBVar10 == (BIO *)0x0) {
              *param_2 = 7;
              uVar3 = 7;
              break;
            }
          }
          *param_2 = 5;
          uVar3 = 5;
        }
        break;
      case 5:
        uVar12 = 1;
        goto switchD_00100425_caseD_0;
      case 6:
        tVar7 = time((time_t *)0x0);
        iVar2 = BIO_socket_wait(*(undefined4 *)&param_1->next_bio,0,tVar7);
        if (iVar2 == 0) {
          uVar3 = *param_2;
        }
        else {
          iVar2 = BIO_sock_error(*(int *)&param_1->next_bio);
          if (iVar2 == 0) {
            iVar2 = param_2[2];
            goto joined_r0x001006e7;
          }
          BIO_clear_flags(param_1,0xf);
          lVar9 = BIO_ADDRINFO_next(*(undefined8 *)(param_2 + 0xc));
          *(long *)(param_2 + 0xc) = lVar9;
          if (lVar9 == 0) goto LAB_00100791;
          BIO_closesocket(*(undefined4 *)&param_1->next_bio);
          *param_2 = 3;
          uVar3 = 3;
        }
        break;
      case 7:
        goto switchD_00100061_caseD_7;
      }
      uVar6 = (*UNRECOVERED_JUMPTABLE)(param_1,uVar3,uVar12);
      uVar12 = (ulong)uVar6;
      if (uVar6 == 0) {
        return 0;
      }
    } while( true );
  }
  uVar3 = *param_2;
  uVar12 = 0xffffffff;
LAB_00100050:
  switch(uVar3) {
  default:
    goto switchD_00100061_caseD_0;
  case 1:
    if ((*(long *)(param_2 + 4) == 0) && (*(long *)(param_2 + 6) == 0)) goto LAB_001002db;
    *param_2 = 2;
  case 2:
    iVar2 = param_2[1];
    if (iVar2 == 6) {
      uVar8 = 10;
    }
    else if (iVar2 == 0x100) {
      uVar8 = 0;
    }
    else {
      if (iVar2 != 4) goto LAB_00100320;
      uVar8 = 2;
    }
    iVar2 = BIO_lookup(*(undefined8 *)(param_2 + 4),*(undefined8 *)(param_2 + 6),0,uVar8,param_2[2],
                       param_2 + 10);
    if (iVar2 == 0) {
      return uVar12;
    }
    if (*(long *)(param_2 + 10) == 0) goto LAB_0010065c;
    *(long *)(param_2 + 0xc) = *(long *)(param_2 + 10);
LAB_001000f6:
    *param_2 = 3;
switchD_00100061_caseD_3:
    uVar3 = BIO_ADDRINFO_protocol(*(undefined8 *)(param_2 + 0xc));
    uVar4 = BIO_ADDRINFO_socktype(*(undefined8 *)(param_2 + 0xc));
    uVar5 = BIO_ADDRINFO_family(*(undefined8 *)(param_2 + 0xc));
    iVar2 = BIO_socket(uVar5,uVar4,uVar3);
    if (iVar2 == -1) goto LAB_001005d7;
    *(int *)&param_1->next_bio = iVar2;
    *param_2 = 4;
switchD_00100061_caseD_4:
    BIO_clear_flags(param_1,0xf);
    ERR_set_mark();
    uVar6 = param_2[8];
    iVar2 = BIO_ADDRINFO_socktype(*(undefined8 *)(param_2 + 0xc));
    if (iVar2 == 1) {
      uVar6 = uVar6 | 4;
    }
    uVar8 = BIO_ADDRINFO_address(*(undefined8 *)(param_2 + 0xc));
    iVar2 = BIO_connect(*(undefined4 *)&param_1->next_bio,uVar8,uVar6);
    *(undefined4 *)((long)&param_1->ptr + 4) = 0;
    if (iVar2 != 0) {
      ERR_clear_last_mark();
LAB_0010019b:
      if (param_2[2] == 2) {
        pBVar10 = BIO_new_dgram(*(int *)&param_1->next_bio,0);
        *(BIO **)(param_2 + 0x10) = pBVar10;
        if (pBVar10 == (BIO *)0x0) {
          *param_2 = 7;
          goto LAB_001001d6;
        }
      }
      *param_2 = 5;
switchD_00100061_caseD_0:
      return 1;
    }
    uVar6 = BIO_sock_should_retry(0);
    uVar12 = (ulong)uVar6;
    if (uVar6 != 0) {
      BIO_set_flags(param_1,0xc);
      *param_2 = 6;
      *(undefined4 *)((long)&param_1->ptr + 4) = 2;
      ERR_pop_to_mark();
      return 0;
    }
    lVar9 = BIO_ADDRINFO_next(*(undefined8 *)(param_2 + 0xc));
    *(long *)(param_2 + 0xc) = lVar9;
    if (lVar9 == 0) {
      ERR_clear_last_mark();
      ERR_new();
      ERR_set_debug("crypto/bio/bss_conn.c",0xd7,"conn_state");
      uVar8 = *(undefined8 *)(param_2 + 6);
      uVar1 = *(undefined8 *)(param_2 + 4);
      piVar11 = __errno_location();
      ERR_set_error(2,*piVar11,"calling connect(%s, %s)",uVar1,uVar8);
      *param_2 = 7;
      goto LAB_001001d6;
    }
    BIO_closesocket();
    *param_2 = 3;
    ERR_pop_to_mark();
    uVar3 = *param_2;
    goto LAB_00100050;
  case 3:
    goto switchD_00100061_caseD_3;
  case 4:
    goto switchD_00100061_caseD_4;
  case 5:
    goto switchD_00100061_caseD_0;
  case 6:
    tVar7 = time((time_t *)0x0);
    iVar2 = BIO_socket_wait(*(undefined4 *)&param_1->next_bio,0,tVar7);
    if (iVar2 == 0) goto code_r0x00100084;
    iVar2 = BIO_sock_error(*(int *)&param_1->next_bio);
    if (iVar2 == 0) goto LAB_0010019b;
    BIO_clear_flags(param_1,0xf);
    lVar9 = BIO_ADDRINFO_next(*(undefined8 *)(param_2 + 0xc));
    *(long *)(param_2 + 0xc) = lVar9;
    if (lVar9 != 0) {
      BIO_closesocket(*(undefined4 *)&param_1->next_bio);
      goto LAB_001000f6;
    }
LAB_00100791:
    ERR_new();
    ERR_set_debug("crypto/bio/bss_conn.c",0xf5,"conn_state");
    ERR_set_error(2,iVar2,"calling connect(%s, %s)",*(undefined8 *)(param_2 + 4),
                  *(undefined8 *)(param_2 + 6));
    ERR_new();
    ERR_set_debug("crypto/bio/bss_conn.c",0xf8,"conn_state");
    ERR_set_error(0x20,0x6e,0);
    break;
  case 7:
    goto switchD_00100061_caseD_7;
  }
LAB_001001fe:
  uVar12 = 0;
LAB_00100208:
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
LAB_0010020d:
    uVar3 = *param_2;
switchD_00100425_caseD_0:
                    /* WARNING: Could not recover jumptable at 0x00100226. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar12 = (*UNRECOVERED_JUMPTABLE)(param_1,uVar3,uVar12);
    return uVar12;
  }
switchD_00100061_caseD_0:
  return uVar12;
switchD_00100061_caseD_7:
LAB_001001d6:
  ERR_new();
  ERR_set_debug("crypto/bio/bss_conn.c",0x10c,"conn_state");
  ERR_set_error(0x20,0x67,0);
  goto LAB_001001fe;
code_r0x00100084:
  uVar3 = *param_2;
  goto LAB_00100050;
LAB_001002db:
  ERR_new();
  ERR_set_debug("crypto/bio/bss_conn.c",0x7b,"conn_state");
  ERR_set_error(0x20,0x90,"hostname=%s service=%s",*(undefined8 *)(param_2 + 4),
                *(undefined8 *)(param_2 + 6));
  goto LAB_00100208;
LAB_00100320:
  ERR_new();
  ERR_set_debug("crypto/bio/bss_conn.c",0x9c,"conn_state");
  ERR_set_error(0x20,0x92,0);
  goto LAB_00100208;
LAB_0010065c:
  ERR_new();
  ERR_set_debug("crypto/bio/bss_conn.c",0xa6,"conn_state");
  ERR_set_error(0x20,0x8e,0);
  goto LAB_00100208;
LAB_001005d7:
  ERR_new();
  ERR_set_debug("crypto/bio/bss_conn.c",0xb2,"conn_state");
  uVar8 = *(undefined8 *)(param_2 + 6);
  uVar1 = *(undefined8 *)(param_2 + 4);
  piVar11 = __errno_location();
  uVar12 = 0xffffffff;
  ERR_set_error(2,*piVar11,"calling socket(%s, %s)",uVar1,uVar8);
  ERR_new();
  ERR_set_debug("crypto/bio/bss_conn.c",0xb5,"conn_state");
  ERR_set_error(0x20,0x76,0);
  goto LAB_00100208;
}



undefined8
conn_recvmmsg(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 *param_6)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (param_1 == 0) {
    *param_6 = 0;
    ERR_new();
    ERR_set_debug("crypto/bio/bss_conn.c",0x357,"conn_recvmmsg");
    ERR_set_error(0x20,0xc0102,0);
  }
  else {
    piVar1 = *(int **)(param_1 + 0x40);
    if ((*piVar1 != 5) && (iVar2 = conn_state(param_1,piVar1), iVar2 < 1)) {
      *param_6 = 0;
      return 0;
    }
    if (*(long *)(piVar1 + 0x10) != 0) {
      uVar3 = BIO_recvmmsg(*(long *)(piVar1 + 0x10),param_2,param_3,param_4,param_5,param_6);
      return uVar3;
    }
    *param_6 = 0;
    ERR_new();
    ERR_set_debug("crypto/bio/bss_conn.c",0x366,"conn_recvmmsg");
    ERR_set_error(0x20,0xc0101,0);
  }
  return 0;
}



undefined8
conn_sendmmsg(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 *param_6)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (param_1 == 0) {
    *param_6 = 0;
    ERR_new();
    ERR_set_debug("crypto/bio/bss_conn.c",0x338,"conn_sendmmsg");
    ERR_set_error(0x20,0xc0102,0);
  }
  else {
    piVar1 = *(int **)(param_1 + 0x40);
    if ((*piVar1 != 5) && (iVar2 = conn_state(param_1,piVar1), iVar2 < 1)) {
      *param_6 = 0;
      return 0;
    }
    if (*(long *)(piVar1 + 0x10) != 0) {
      uVar3 = BIO_sendmmsg(*(long *)(piVar1 + 0x10),param_2,param_3,param_4,param_5,param_6);
      return uVar3;
    }
    *param_6 = 0;
    ERR_new();
    ERR_set_debug("crypto/bio/bss_conn.c",0x347,"conn_sendmmsg");
    ERR_set_error(0x20,0xc0101,0);
  }
  return 0;
}



bool conn_new(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0;
  puVar2 = (undefined8 *)CRYPTO_zalloc(0x48,"crypto/bio/bss_conn.c",0x12a);
  uVar1 = _LC4;
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 1) = 1;
    *puVar2 = uVar1;
  }
  *(undefined8 **)(param_1 + 0x40) = puVar2;
  return puVar2 != (undefined8 *)0x0;
}



ulong conn_gets(BIO *param_1,char *param_2,int param_3)

{
  char cVar1;
  bio_st *pbVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  ulong uVar6;
  char *pcVar7;
  char *__buf;
  int i;
  undefined8 uVar8;
  char *pcVar9;
  ulong uVar10;
  
  if (param_2 == (char *)0x0) {
    ERR_new();
    uVar8 = 0x300;
  }
  else {
    if (param_3 < 1) {
      ERR_new();
      ERR_set_debug("crypto/bio/bss_conn.c",0x304,"conn_gets");
      ERR_set_error(0x20,0x7d,0);
      return 0xffffffff;
    }
    *param_2 = '\0';
    if ((param_1 != (BIO *)0x0) && (pbVar2 = param_1->prev_bio, pbVar2 != (bio_st *)0x0)) {
      uVar10 = 0;
      if (*(int *)&pbVar2->method != 5) {
        uVar3 = conn_state(param_1,pbVar2);
        uVar10 = (ulong)uVar3;
        if ((int)uVar3 < 1) {
          return uVar10;
        }
      }
      if (pbVar2->prev_bio != (bio_st *)0x0) {
        ERR_new();
        ERR_set_debug("crypto/bio/bss_conn.c",0x315,"conn_gets");
        ERR_set_error(0x20,0xc0101,0);
        return 0xffffffff;
      }
      piVar5 = __errno_location();
      *piVar5 = 0;
      pcVar9 = param_2 + (param_3 - 1);
      __buf = param_2;
      do {
        if (__buf == pcVar9) {
          *pcVar9 = '\0';
          pcVar7 = pcVar9;
          if ((int)uVar10 == 0) {
LAB_00100bee:
            if (((ulong)param_1->ptr & 0x800) == 0) {
              return uVar10;
            }
          }
          goto LAB_00100b9a;
        }
        uVar6 = read(*(int *)&param_1->next_bio,__buf,1);
        uVar10 = uVar6 & 0xffffffff;
        BIO_clear_flags(param_1,0xf);
        i = (int)uVar6;
        if (i < 1) {
          iVar4 = BIO_sock_should_retry(i);
          if (iVar4 == 0) {
            if (i == 0) {
              *(uint *)&param_1->ptr = *(uint *)&param_1->ptr | 0x800;
            }
          }
          else {
            BIO_set_flags(param_1,9);
          }
          *__buf = '\0';
          pcVar7 = __buf;
          goto LAB_00100bee;
        }
        pcVar7 = __buf + 1;
        cVar1 = *__buf;
        __buf = pcVar7;
      } while (cVar1 != '\n');
      *pcVar7 = '\0';
LAB_00100b9a:
      return (ulong)(uint)((int)pcVar7 - (int)param_2);
    }
    ERR_new();
    uVar8 = 0x30a;
  }
  ERR_set_debug("crypto/bio/bss_conn.c",uVar8,"conn_gets");
  ERR_set_error(0x20,0xc0102,0);
  return 0xffffffff;
}



ulong conn_read(BIO *param_1,void *param_2,int param_3)

{
  bio_st *pbVar1;
  bio_st *pbVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar8 = 0;
  pbVar1 = param_1->prev_bio;
  if (*(int *)&pbVar1->method == 5) {
    pbVar2 = pbVar1->prev_bio;
  }
  else {
    uVar3 = conn_state(param_1,pbVar1);
    uVar8 = (ulong)uVar3;
    if ((int)uVar3 < 1) {
      return uVar8;
    }
    pbVar2 = pbVar1->prev_bio;
  }
  if (pbVar2 == (bio_st *)0x0) {
    if (param_2 != (void *)0x0) {
      piVar6 = __errno_location();
      *piVar6 = 0;
      uVar7 = read(*(int *)&param_1->next_bio,param_2,(long)param_3);
      uVar8 = uVar7 & 0xffffffff;
      BIO_clear_flags(param_1,0xf);
      iVar4 = (int)uVar7;
      if (iVar4 < 1) {
        iVar5 = BIO_sock_should_retry(iVar4);
        if (iVar5 == 0) {
          if (iVar4 == 0) {
            *(uint *)&param_1->ptr = *(uint *)&param_1->ptr | 0x800;
          }
        }
        else {
          BIO_set_flags(param_1,9);
        }
      }
    }
    return uVar8;
  }
  BIO_clear_flags(param_1,0xf);
  uVar3 = BIO_read(pbVar1->prev_bio,param_2,param_3);
  iVar4 = BIO_test_flags(pbVar1->prev_bio,0xf);
  BIO_set_flags(param_1,iVar4);
  return (ulong)uVar3;
}



ulong conn_ctrl(long param_1,undefined4 param_2,ulong param_3,BIO *param_4)

{
  undefined4 uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  BIO_METHOD *pBVar6;
  char *pcVar7;
  void *pvVar8;
  void *ptr;
  ulong uVar9;
  
  piVar2 = *(int **)(param_1 + 0x40);
  iVar4 = (int)param_3;
  switch(param_2) {
  case 1:
    iVar4 = *(int *)(param_1 + 0x38);
    *piVar2 = 1;
    if (iVar4 != -1) {
      BIO_closesocket();
      *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
    }
    BIO_ADDRINFO_free(*(undefined8 *)(piVar2 + 10));
    piVar2[10] = 0;
    piVar2[0xb] = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    break;
  case 2:
    return (ulong)(*(uint *)(param_1 + 0x30) >> 0xb & 1);
  case 8:
    return (long)*(int *)(param_1 + 0x2c);
  case 9:
    *(int *)(param_1 + 0x2c) = iVar4;
    return 1;
  case 0xb:
    goto LAB_00100e62;
  case 0xc:
    if (*(void **)(piVar2 + 4) != (void *)0x0) {
      BIO_ctrl(param_4,100,0,*(void **)(piVar2 + 4));
    }
    if (*(void **)(piVar2 + 6) != (void *)0x0) {
      BIO_ctrl(param_4,100,1,*(void **)(piVar2 + 6));
    }
    BIO_int_ctrl(param_4,100,3,piVar2[1]);
    BIO_ctrl(param_4,0x9b,(long)piVar2[8],(void *)0x0);
    BIO_callback_ctrl(param_4,0xe,*(fp **)(piVar2 + 0xe));
    return 1;
  case 0xf:
    pBVar6 = *(BIO_METHOD **)(piVar2 + 0xe);
    goto LAB_00100f10;
  case 0x2e:
  case 0x5d:
    if ((((*piVar2 == 5) || (conn_state(param_1,piVar2), 2 < *piVar2)) &&
        (*(long *)(piVar2 + 0xc) != 0)) &&
       (pvVar8 = (void *)BIO_ADDRINFO_address(), pvVar8 != (void *)0x0)) {
      uVar3 = BIO_ADDR_sockaddr_size(pvVar8);
      uVar9 = (ulong)uVar3;
      uVar5 = uVar9;
      if ((long)param_3 <= (long)uVar9) {
        uVar5 = param_3;
      }
      if (param_3 == 0) {
        uVar5 = uVar9;
      }
      memcpy(param_4,pvVar8,uVar5);
      return uVar5;
    }
    break;
  case 0x5b:
  case 0x5c:
    if ((*piVar2 == 5) || (conn_state(param_1,piVar2), 2 < *piVar2)) {
      uVar1 = *(undefined4 *)(param_1 + 0x38);
      *(undefined4 *)&param_4->method = 1;
      *(undefined4 *)&param_4->callback = uVar1;
      return 1;
    }
    break;
  case 100:
    if (param_4 == (BIO *)0x0) {
      return 1;
    }
    *(undefined4 *)(param_1 + 0x28) = 1;
    if (param_3 == 0) {
      pvVar8 = *(void **)(piVar2 + 6);
      CRYPTO_free(*(void **)(piVar2 + 4));
      piVar2[4] = 0;
      piVar2[5] = 0;
      iVar4 = BIO_parse_hostserv(param_4,piVar2 + 4,piVar2 + 6,0);
      if (*(void **)(piVar2 + 6) != pvVar8) {
        CRYPTO_free(pvVar8);
        return (long)iVar4;
      }
      return (long)iVar4;
    }
    if (param_3 == 1) {
      CRYPTO_free(*(void **)(piVar2 + 6));
      pcVar7 = CRYPTO_strdup((char *)param_4,"crypto/bio/bss_conn.c",0x218);
      *(char **)(piVar2 + 6) = pcVar7;
      return (ulong)(pcVar7 != (char *)0x0);
    }
    if (param_3 == 2) {
      pvVar8 = (void *)BIO_ADDR_hostname_string(param_4,1);
      ptr = (void *)BIO_ADDR_service_string(param_4,1);
      if ((pvVar8 != (void *)0x0) && (ptr != (void *)0x0)) {
        CRYPTO_free(*(void **)(piVar2 + 4));
        *(void **)(piVar2 + 4) = pvVar8;
        CRYPTO_free(*(void **)(piVar2 + 6));
        *(void **)(piVar2 + 6) = ptr;
        BIO_ADDRINFO_free(*(undefined8 *)(piVar2 + 10));
        *(undefined1 (*) [16])(piVar2 + 10) = (undefined1  [16])0x0;
        return 1;
      }
      CRYPTO_free(pvVar8);
      CRYPTO_free(ptr);
    }
    else if (param_3 == 3) {
      piVar2[1] = *(int *)&param_4->method;
      return 1;
    }
    break;
  case 0x65:
    if (*piVar2 == 5) {
      return 1;
    }
    iVar4 = conn_state(param_1,piVar2);
    return (long)iVar4;
  case 0x66:
    uVar3 = piVar2[8] & 0xfffffff7;
    if (param_3 != 0) {
      uVar3 = piVar2[8] | 8;
    }
    piVar2[8] = uVar3;
    if (*(BIO **)(piVar2 + 0x10) == (BIO *)0x0) {
      return 1;
    }
    uVar5 = BIO_ctrl(*(BIO **)(piVar2 + 0x10),0x66,param_3,(void *)0x0);
    return uVar5;
  case 0x69:
    if (*(int *)(param_1 + 0x28) == 0) {
      return 0xffffffffffffffff;
    }
    if (param_4 != (BIO *)0x0) {
      *(undefined4 *)&param_4->method = *(undefined4 *)(param_1 + 0x38);
    }
    return (long)*(int *)(param_1 + 0x38);
  case 0x7b:
    if (param_4 != (BIO *)0x0) {
      switch(param_3) {
      case 0:
        param_4->method = *(BIO_METHOD **)(piVar2 + 4);
        return 1;
      case 1:
        param_4->method = *(BIO_METHOD **)(piVar2 + 6);
        return 1;
      case 2:
        pBVar6 = (BIO_METHOD *)BIO_ADDRINFO_address(*(undefined8 *)(piVar2 + 0xc));
        param_4->method = pBVar6;
        return 1;
      case 3:
        iVar4 = BIO_ADDRINFO_family(*(undefined8 *)(piVar2 + 0xc));
        if (iVar4 == 2) {
          return 4;
        }
        if (iVar4 != 10) {
          if (iVar4 != 0) {
            return 0xffffffffffffffff;
          }
          return (long)piVar2[1];
        }
        return 6;
      case 4:
        return (long)piVar2[8];
      }
    }
    break;
  case 0x9b:
    piVar2[8] = iVar4;
    piVar2[9] = (uint)((param_3 & 0x20) != 0);
    return 1;
  case 0x9d:
    if ((param_3 - 1 < 2) && (*piVar2 < 2)) {
      piVar2[2] = iVar4;
      return 1;
    }
    break;
  case 0x9e:
    return (long)piVar2[2];
  case 0x9f:
    pBVar6 = *(BIO_METHOD **)(piVar2 + 0x10);
    if (pBVar6 == (BIO_METHOD *)0x0) {
      return 0;
    }
LAB_00100f10:
    param_4->method = pBVar6;
LAB_00100e62:
    return 1;
  }
  return 0;
}



int conn_write(BIO *param_1,void *param_2,int param_3)

{
  bio_st *pbVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  ssize_t sVar5;
  
  pbVar1 = param_1->prev_bio;
  if (*(int *)&pbVar1->method != 5) {
    iVar2 = conn_state(param_1,pbVar1);
    if (iVar2 < 1) {
      return iVar2;
    }
  }
  if (pbVar1->prev_bio == (bio_st *)0x0) {
    piVar4 = __errno_location();
    *piVar4 = 0;
    sVar5 = write(*(int *)&param_1->next_bio,param_2,(long)param_3);
    iVar2 = (int)sVar5;
    BIO_clear_flags(param_1,0xf);
    if (iVar2 < 1) {
      iVar3 = BIO_sock_should_retry(iVar2);
      if (iVar3 != 0) {
        BIO_set_flags(param_1,10);
      }
    }
  }
  else {
    BIO_clear_flags(param_1,0xf);
    iVar2 = BIO_write(pbVar1->prev_bio,param_2,param_3);
    iVar3 = BIO_test_flags(pbVar1->prev_bio,0xf);
    BIO_set_flags(param_1,iVar3);
  }
  return iVar2;
}



undefined8 conn_free(long param_1)

{
  int __fd;
  void *ptr;
  
  if (param_1 == 0) {
    return 0;
  }
  ptr = *(void **)(param_1 + 0x40);
  BIO_free(*(BIO **)((long)ptr + 0x40));
  if (*(int *)(param_1 + 0x2c) == 0) {
    return 1;
  }
  __fd = *(int *)(param_1 + 0x38);
  if (__fd != -1) {
    if (**(int **)(param_1 + 0x40) == 5) {
      shutdown(__fd,2);
      __fd = *(int *)(param_1 + 0x38);
    }
    BIO_closesocket(__fd);
    *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  }
  CRYPTO_free(*(void **)((long)ptr + 0x10));
  CRYPTO_free(*(void **)((long)ptr + 0x18));
  BIO_ADDRINFO_free(*(undefined8 *)((long)ptr + 0x28));
  CRYPTO_free(ptr);
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  return 1;
}



int conn_puts(BIO *param_1,char *param_2)

{
  bio_st *pbVar1;
  int i;
  int iVar2;
  size_t sVar3;
  int *piVar4;
  ssize_t sVar5;
  
  sVar3 = strlen(param_2);
  pbVar1 = param_1->prev_bio;
  if ((*(int *)&pbVar1->method == 5) || (i = conn_state(param_1,pbVar1), 0 < i)) {
    if (pbVar1->prev_bio == (bio_st *)0x0) {
      piVar4 = __errno_location();
      *piVar4 = 0;
      sVar5 = write(*(int *)&param_1->next_bio,param_2,(long)(int)sVar3);
      i = (int)sVar5;
      BIO_clear_flags(param_1,0xf);
      if ((i < 1) && (iVar2 = BIO_sock_should_retry(i), iVar2 != 0)) {
        BIO_set_flags(param_1,10);
      }
    }
    else {
      BIO_clear_flags(param_1,0xf);
      i = BIO_write(pbVar1->prev_bio,param_2,(int)sVar3);
      iVar2 = BIO_test_flags(pbVar1->prev_bio,0xf);
      BIO_set_flags(param_1,iVar2);
    }
  }
  return i;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

BIO_METHOD * BIO_s_connect(void)

{
  return (BIO_METHOD *)methods_connectp;
}



BIO * BIO_new_connect(char *host_port)

{
  BIO_METHOD *type;
  BIO *bp;
  long lVar1;
  
  type = BIO_s_connect();
  bp = BIO_new(type);
  if (bp != (BIO *)0x0) {
    lVar1 = BIO_ctrl(bp,100,0,host_port);
    if (lVar1 != 0) {
      return bp;
    }
    BIO_free(bp);
  }
  return (BIO *)0x0;
}


