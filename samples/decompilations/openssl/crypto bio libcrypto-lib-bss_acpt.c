
undefined8 acpt_new(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0;
  puVar2 = (undefined8 *)CRYPTO_zalloc(0x140,"crypto/bio/bss_acpt.c",0x5f);
  uVar1 = _LC1;
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 4) = 0xffffffff;
    *(undefined8 **)(param_1 + 0x40) = puVar2;
    *puVar2 = uVar1;
    *(undefined4 *)(param_1 + 0x2c) = 1;
    return 1;
  }
  return 0;
}



int acpt_state(BIO *param_1,int *param_2,undefined8 param_3,undefined8 param_4,long param_5,
              int *param_6)

{
  void *ptr;
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  BIO *b;
  callback *callback;
  char *arg;
  BIO *pBVar8;
  BIO *pBVar9;
  undefined8 uVar10;
  int *piVar11;
  char *extraout_RDX;
  long in_FS_OFFSET;
  int *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
LAB_00100089:
  iVar6 = *param_2;
  switch(iVar6) {
  default:
    iVar5 = 0;
LAB_00100120:
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return iVar5;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  case 1:
    if ((*(long *)(param_2 + 4) != 0) || (*(long *)(param_2 + 6) != 0)) {
      CRYPTO_free(*(void **)(param_2 + 0x2a));
      param_2[0x2a] = 0;
      param_2[0x2b] = 0;
      CRYPTO_free(*(void **)(param_2 + 0x2c));
      param_2[0x2c] = 0;
      param_2[0x2d] = 0;
      CRYPTO_free(*(void **)(param_2 + 0x4a));
      param_2[0x4a] = 0;
      param_2[0x4b] = 0;
      CRYPTO_free(*(void **)(param_2 + 0x4c));
      *param_2 = 2;
      param_2[0x4c] = 0;
      param_2[0x4d] = 0;
      goto LAB_00100089;
    }
    ERR_new();
    ERR_set_debug("crypto/bio/bss_acpt.c",0x9d,"acpt_state");
    ERR_set_error(0x20,0x8f,"hostname=%s, service=%s",*(undefined8 *)(param_2 + 4),
                  *(undefined8 *)(param_2 + 6));
    break;
  case 2:
    iVar5 = param_2[1];
    if (iVar5 == 6) {
      iVar6 = 10;
    }
    else if (iVar5 == 0x100) {
      iVar6 = 0;
    }
    else if (iVar5 != 4) {
      ERR_new();
      ERR_set_debug("crypto/bio/bss_acpt.c",0xcc,"acpt_state");
      ERR_set_error(0x20,0x92,0);
      break;
    }
    param_6 = param_2 + 10;
    param_5 = 1;
    iVar6 = BIO_lookup(*(undefined8 *)(param_2 + 4),*(undefined8 *)(param_2 + 6),1,iVar6);
    if (iVar6 != 0) {
      if (*(long *)(param_2 + 10) != 0) {
        *(long *)(param_2 + 0xc) = *(long *)(param_2 + 10);
        *param_2 = 3;
        goto LAB_00100089;
      }
      ERR_new();
      ERR_set_debug("crypto/bio/bss_acpt.c",0xd4,"acpt_state");
      ERR_set_error(0x20,0x8e,0);
    }
    break;
  case 3:
    ERR_set_mark();
    uVar2 = BIO_ADDRINFO_protocol(*(undefined8 *)(param_2 + 0xc));
    uVar3 = BIO_ADDRINFO_socktype(*(undefined8 *)(param_2 + 0xc));
    uVar4 = BIO_ADDRINFO_family(*(undefined8 *)(param_2 + 0xc));
    iVar6 = BIO_socket(uVar4,uVar3,uVar2,0);
    if (iVar6 != -1) {
      param_2[8] = iVar6;
      *(int *)&param_1->next_bio = iVar6;
      *param_2 = 4;
      goto LAB_00100089;
    }
    lVar7 = BIO_ADDRINFO_next(*(undefined8 *)(param_2 + 0xc));
    *(long *)(param_2 + 0xc) = lVar7;
    if (lVar7 != 0) {
      ERR_pop_to_mark();
      goto LAB_00100089;
    }
    ERR_clear_last_mark();
    ERR_new();
    ERR_set_debug("crypto/bio/bss_acpt.c",0xe9,"acpt_state");
    uVar10 = *(undefined8 *)(param_2 + 6);
    uVar1 = *(undefined8 *)(param_2 + 4);
    piVar11 = __errno_location();
    ERR_set_error(2,*piVar11,"calling socket(%s, %s)",uVar1,uVar10);
    ERR_new();
    ERR_set_debug("crypto/bio/bss_acpt.c",0xec,"acpt_state");
    ERR_set_error(0x20,0x76,0);
    break;
  case 4:
    iVar6 = param_2[2];
    uVar10 = BIO_ADDRINFO_address(*(undefined8 *)(param_2 + 0xc));
    iVar6 = BIO_listen(param_2[8],uVar10,iVar6);
    if (iVar6 != 0) {
      piVar11 = param_2 + 0xe;
      local_38 = piVar11;
      iVar6 = BIO_sock_info(param_2[8],0,&local_38);
      if (iVar6 != 0) {
        uVar10 = BIO_ADDR_hostname_string(piVar11,1);
        *(undefined8 *)(param_2 + 0x2a) = uVar10;
        uVar10 = BIO_ADDR_service_string(piVar11,1);
        *param_2 = 5;
        *(undefined8 *)(param_2 + 0x2c) = uVar10;
        goto LAB_001002ce;
      }
    }
    BIO_closesocket(param_2[8]);
    break;
  case 5:
    if (*(long *)&param_1->references != 0) {
      *param_2 = 6;
      goto LAB_00100089;
    }
    BIO_clear_flags(param_1,0xf);
    ptr = *(void **)(param_2 + 0x4a);
    *(undefined4 *)((long)&param_1->ptr + 4) = 0;
    piVar11 = param_2 + 0x2e;
    CRYPTO_free(ptr);
    param_2[0x4a] = 0;
    param_2[0x4b] = 0;
    CRYPTO_free(*(void **)(param_2 + 0x4c));
    param_2[0x4c] = 0;
    param_2[0x4d] = 0;
    iVar5 = BIO_accept_ex(param_2[8],piVar11,param_2[3]);
    if (iVar5 < 0) {
      iVar6 = BIO_sock_should_retry(iVar5);
      if (iVar6 == 0) goto LAB_00100120;
      BIO_set_flags(param_1,0xc);
      *(undefined4 *)((long)&param_1->ptr + 4) = 3;
    }
    else {
      b = BIO_new_socket(iVar5,1);
      if (b == (BIO *)0x0) {
        BIO_closesocket(iVar5);
      }
      else {
        iVar5 = BIO_get_callback_ex(param_1);
        BIO_set_callback_ex(b);
        callback = (callback *)
                   BIO_get_callback(param_1,iVar5,extraout_RDX,iVar6,param_5,(long)param_6);
        BIO_set_callback(b,callback);
        arg = BIO_get_callback_arg(param_1);
        BIO_set_callback_arg(b,arg);
        pBVar8 = b;
        if (((*(BIO **)(param_2 + 0x4e) == (BIO *)0x0) ||
            ((pBVar8 = BIO_dup_chain(*(BIO **)(param_2 + 0x4e)), pBVar8 != (BIO *)0x0 &&
             (pBVar9 = BIO_push(pBVar8,b), pBVar9 != (BIO *)0x0)))) &&
           (b = pBVar8, pBVar8 = BIO_push(param_1,b), pBVar8 != (BIO *)0x0)) {
          uVar10 = BIO_ADDR_hostname_string(piVar11,1);
          *(undefined8 *)(param_2 + 0x4a) = uVar10;
          uVar10 = BIO_ADDR_service_string(piVar11,1);
          *param_2 = 6;
          *(undefined8 *)(param_2 + 0x4c) = uVar10;
          goto LAB_001002ce;
        }
        BIO_free(b);
      }
    }
    break;
  case 6:
    if (*(long *)&param_1->references == 0) goto code_r0x001000b4;
LAB_001002ce:
    iVar5 = 1;
    goto LAB_00100120;
  }
  iVar5 = -1;
  goto LAB_00100120;
code_r0x001000b4:
  *param_2 = 5;
  goto LAB_00100089;
}



long acpt_ctrl(long param_1,int param_2,long param_3,char *param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  void *ptr;
  uint uVar3;
  int iVar4;
  long lVar5;
  char *pcVar6;
  undefined4 uVar7;
  bool bVar8;
  
  puVar2 = *(undefined4 **)(param_1 + 0x40);
  uVar7 = (undefined4)param_3;
  if (param_2 < 0xd) {
    switch(param_2) {
    case 1:
      *puVar2 = 1;
      if (puVar2[8] != -1) {
        shutdown(puVar2[8],2);
        close(puVar2[8]);
        puVar2[8] = 0xffffffff;
        *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
      }
      BIO_ADDRINFO_free(*(undefined8 *)(puVar2 + 10));
      *(undefined8 *)(puVar2 + 10) = 0;
      *(undefined4 *)(param_1 + 0x30) = 0;
      break;
    case 2:
      if (*(BIO **)(param_1 + 0x48) != (BIO *)0x0) {
        lVar5 = BIO_ctrl(*(BIO **)(param_1 + 0x48),2,param_3,param_4);
        return lVar5;
      }
      break;
    case 8:
      return (long)*(int *)(param_1 + 0x2c);
    case 9:
      *(undefined4 *)(param_1 + 0x2c) = uVar7;
    case 0xb:
    case 0xc:
      return 1;
    }
  }
  else {
    switch(param_2) {
    case 0x65:
      iVar4 = acpt_state(param_1,puVar2);
      return (long)iVar4;
    case 0x66:
      uVar3 = puVar2[3] | 8;
      if (param_3 == 0) {
        uVar3 = puVar2[3] & 0xfffffff7;
      }
      puVar2[3] = uVar3;
      return 1;
    case 0x68:
      uVar1 = *(undefined4 *)param_4;
      *(undefined4 *)(param_1 + 0x38) = uVar1;
      puVar2[8] = uVar1;
      *puVar2 = 5;
      *(undefined4 *)(param_1 + 0x2c) = uVar7;
      goto LAB_00100746;
    case 0x69:
      if (*(int *)(param_1 + 0x28) == 0) {
        return -1;
      }
      if (param_4 != (char *)0x0) {
        *(undefined4 *)param_4 = puVar2[8];
      }
      return (long)(int)puVar2[8];
    case 0x76:
      if (param_4 != (char *)0x0) {
        switch(param_3) {
        case 0:
          ptr = *(void **)(puVar2 + 6);
          CRYPTO_free(*(void **)(puVar2 + 4));
          *(undefined8 *)(puVar2 + 4) = 0;
          iVar4 = BIO_parse_hostserv(param_4,puVar2 + 4,puVar2 + 6,1);
          if (*(void **)(puVar2 + 6) != ptr) {
            CRYPTO_free(ptr);
          }
          *(undefined4 *)(param_1 + 0x28) = 1;
          return (long)iVar4;
        case 1:
          goto switchD_001007a1_caseD_1;
        case 2:
          puVar2[2] = puVar2[2] | 8;
          return 1;
        case 3:
          BIO_free(*(BIO **)(puVar2 + 0x4e));
          *(char **)(puVar2 + 0x4e) = param_4;
          return 1;
        case 4:
          puVar2[1] = *(undefined4 *)param_4;
          return 1;
        case 5:
          puVar2[2] = puVar2[2] | 0x20;
          return 1;
        default:
          return 1;
        }
      }
      if (param_3 != 2) {
        if (param_3 != 5) {
          return 1;
        }
        puVar2[2] = puVar2[2] & 0xffffffdf;
        return 1;
      }
      puVar2[2] = puVar2[2] & 0xfffffff7;
      return 1;
    case 0x7c:
      if (*(int *)(param_1 + 0x28) == 0) {
        return -1;
      }
      bVar8 = param_4 != (char *)0x0;
      if ((param_3 == 0) && (bVar8)) {
        *(undefined8 *)param_4 = *(undefined8 *)(puVar2 + 0x2a);
        return 1;
      }
      if ((param_3 == 1) && (bVar8)) {
        *(undefined8 *)param_4 = *(undefined8 *)(puVar2 + 0x2c);
        return 1;
      }
      if ((param_3 == 2) && (bVar8)) {
        *(undefined8 *)param_4 = *(undefined8 *)(puVar2 + 0x4a);
        return 1;
      }
      if ((param_3 == 3) && (bVar8)) {
        *(undefined8 *)param_4 = *(undefined8 *)(puVar2 + 0x4c);
        return 1;
      }
      if (param_3 != 4) {
        return -1;
      }
      iVar4 = BIO_ADDRINFO_family(*(undefined8 *)(puVar2 + 0xc));
      if (iVar4 == 2) {
        return 4;
      }
      if (iVar4 == 10) {
        return 6;
      }
      if (iVar4 != 0) {
        return -1;
      }
      return (long)(int)puVar2[1];
    case 0x83:
      puVar2[2] = uVar7;
      return 1;
    case 0x84:
      return (long)(int)puVar2[2];
    }
  }
  return 0;
switchD_001007a1_caseD_1:
  CRYPTO_free(*(void **)(puVar2 + 6));
  pcVar6 = CRYPTO_strdup(param_4,"crypto/bio/bss_acpt.c",0x1ba);
  *(char **)(puVar2 + 6) = pcVar6;
  if (pcVar6 == (char *)0x0) {
    return 0;
  }
LAB_00100746:
  *(undefined4 *)(param_1 + 0x28) = 1;
  return 1;
}



ulong acpt_read(BIO *param_1,void *param_2,int param_3)

{
  bio_st *pbVar1;
  uint uVar2;
  ulong uVar3;
  
  BIO_clear_flags(param_1,0xf);
  pbVar1 = param_1->prev_bio;
  do {
    if (*(BIO **)&param_1->references != (BIO *)0x0) {
      uVar2 = BIO_read(*(BIO **)&param_1->references,param_2,param_3);
      BIO_copy_next_retry(param_1);
      return (ulong)uVar2;
    }
    uVar3 = acpt_state(param_1,pbVar1);
  } while (0 < (int)uVar3);
  return uVar3;
}



ulong acpt_write(BIO *param_1,void *param_2,int param_3)

{
  bio_st *pbVar1;
  uint uVar2;
  ulong uVar3;
  
  BIO_clear_flags(param_1,0xf);
  pbVar1 = param_1->prev_bio;
  do {
    if (*(BIO **)&param_1->references != (BIO *)0x0) {
      uVar2 = BIO_write(*(BIO **)&param_1->references,param_2,param_3);
      BIO_copy_next_retry(param_1);
      return (ulong)uVar2;
    }
    uVar3 = acpt_state(param_1,pbVar1);
  } while (0 < (int)uVar3);
  return uVar3;
}



undefined8 acpt_free(long param_1)

{
  void *ptr;
  
  if (param_1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x2c) == 0) {
    return 1;
  }
  ptr = *(void **)(param_1 + 0x40);
  if (*(int *)((long)ptr + 0x20) != -1) {
    shutdown(*(int *)((long)ptr + 0x20),2);
    close(*(int *)((long)ptr + 0x20));
    *(undefined4 *)((long)ptr + 0x20) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  }
  CRYPTO_free(*(void **)((long)ptr + 0x10));
  CRYPTO_free(*(void **)((long)ptr + 0x18));
  BIO_ADDRINFO_free(*(undefined8 *)((long)ptr + 0x28));
  CRYPTO_free(*(void **)((long)ptr + 0xa8));
  CRYPTO_free(*(void **)((long)ptr + 0xb0));
  CRYPTO_free(*(void **)((long)ptr + 0x128));
  CRYPTO_free(*(void **)((long)ptr + 0x130));
  BIO_free(*(BIO **)((long)ptr + 0x138));
  CRYPTO_free(ptr);
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  return 1;
}



ulong acpt_puts(BIO *param_1,char *param_2)

{
  bio_st *pbVar1;
  uint uVar2;
  size_t sVar3;
  ulong uVar4;
  
  sVar3 = strlen(param_2);
  BIO_clear_flags(param_1,0xf);
  pbVar1 = param_1->prev_bio;
  do {
    if (*(BIO **)&param_1->references != (BIO *)0x0) {
      uVar2 = BIO_write(*(BIO **)&param_1->references,param_2,(int)sVar3);
      BIO_copy_next_retry(param_1);
      return (ulong)uVar2;
    }
    uVar4 = acpt_state(param_1,pbVar1);
  } while (0 < (int)uVar4);
  return uVar4;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

BIO_METHOD * BIO_s_accept(void)

{
  return (BIO_METHOD *)methods_acceptp;
}



BIO * BIO_new_accept(char *host_port)

{
  BIO_METHOD *type;
  BIO *bp;
  long lVar1;
  
  type = BIO_s_accept();
  bp = BIO_new(type);
  if (bp != (BIO *)0x0) {
    lVar1 = BIO_ctrl(bp,0x76,0,host_port);
    if (0 < lVar1) {
      return bp;
    }
    BIO_free(bp);
  }
  return (BIO *)0x0;
}


