
void mbedtls_net_init(undefined4 *param_1)

{
  *param_1 = 0xffffffff;
  return;
}



int mbedtls_net_connect(int *param_1,char *param_2,char *param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  addrinfo *paVar3;
  long in_FS_OFFSET;
  addrinfo *local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  __sysv_signal(0xd,(__sighandler_t)0x1);
  uVar1 = 6;
  if (param_4 == 1) {
    uVar1 = 0x11;
  }
  local_58 = (undefined1  [16])0x0;
  local_68._4_4_ = uVar1;
  local_68._0_4_ = (param_4 == 1) + 1;
  local_68._8_8_ = 0;
  local_68 = local_68 << 0x40;
  local_48 = (undefined1  [16])0x0;
  iVar2 = getaddrinfo(param_2,param_3,(addrinfo *)local_68,&local_70);
  if (iVar2 == 0) {
    paVar3 = local_70;
    if (local_70 == (addrinfo *)0x0) {
      iVar2 = -0x52;
    }
    else {
      do {
        while( true ) {
          iVar2 = socket(paVar3->ai_family,paVar3->ai_socktype,paVar3->ai_protocol);
          *param_1 = iVar2;
          if (-1 < iVar2) break;
          paVar3 = paVar3->ai_next;
          iVar2 = -0x42;
          if (paVar3 == (addrinfo *)0x0) goto LAB_00100111;
        }
        iVar2 = connect(iVar2,paVar3->ai_addr,paVar3->ai_addrlen);
        if (iVar2 == 0) break;
        if (*param_1 != -1) {
          close(*param_1);
          *param_1 = -1;
        }
        paVar3 = paVar3->ai_next;
        iVar2 = -0x44;
      } while (paVar3 != (addrinfo *)0x0);
    }
LAB_00100111:
    freeaddrinfo(local_70);
  }
  else {
    iVar2 = -0x52;
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



int mbedtls_net_bind(int *param_1,char *param_2,char *param_3,int param_4)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  int iVar3;
  addrinfo *paVar4;
  long in_FS_OFFSET;
  undefined4 local_74;
  addrinfo *local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  __sysv_signal(0xd,(__sighandler_t)0x1);
  uVar2 = 6;
  if (param_4 == 1) {
    uVar2 = 0x11;
  }
  local_58 = (undefined1  [16])0x0;
  auVar1._4_4_ = uVar2;
  auVar1._0_4_ = (param_4 == 1) + 1;
  auVar1._8_8_ = 0;
  local_68 = auVar1 << 0x40;
  local_48 = (undefined1  [16])0x0;
  if (param_2 == (char *)0x0) {
    local_68._0_4_ = 1;
  }
  iVar3 = getaddrinfo(param_2,param_3,(addrinfo *)local_68,&local_70);
  if (iVar3 == 0) {
    paVar4 = local_70;
    if (local_70 == (addrinfo *)0x0) {
      iVar3 = -0x52;
    }
    else {
      do {
        iVar3 = socket(paVar4->ai_family,paVar4->ai_socktype,paVar4->ai_protocol);
        *param_1 = iVar3;
        if (iVar3 < 0) {
LAB_00100214:
          iVar3 = -0x42;
        }
        else {
          local_74 = 1;
          iVar3 = setsockopt(iVar3,1,2,&local_74,4);
          if (iVar3 != 0) {
            if (*param_1 != -1) {
              close(*param_1);
              *param_1 = -1;
            }
            goto LAB_00100214;
          }
          iVar3 = bind(*param_1,paVar4->ai_addr,paVar4->ai_addrlen);
          if (iVar3 == 0) {
            iVar3 = 0;
            if ((param_4 != 0) || (iVar3 = listen(*param_1,10), iVar3 == 0)) break;
            if (*param_1 != -1) {
              close(*param_1);
              *param_1 = -1;
            }
            iVar3 = -0x48;
          }
          else {
            if (*param_1 != -1) {
              close(*param_1);
              *param_1 = -1;
            }
            iVar3 = -0x46;
          }
        }
        paVar4 = paVar4->ai_next;
      } while (paVar4 != (addrinfo *)0x0);
    }
    freeaddrinfo(local_70);
  }
  else {
    iVar3 = -0x52;
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar3;
}



undefined4
mbedtls_net_accept(int *param_1,int *param_2,char *param_3,ulong param_4,undefined8 *param_5)

{
  int iVar1;
  ssize_t sVar2;
  int *piVar3;
  ulong uVar4;
  undefined4 uVar5;
  long in_FS_OFFSET;
  int local_158;
  socklen_t local_154;
  socklen_t local_150;
  undefined4 local_14c;
  sockaddr local_148;
  undefined8 uStack_138;
  sockaddr local_c8 [8];
  undefined1 local_41;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_154 = 0x80;
  local_150 = 4;
  iVar1 = getsockopt(*param_1,1,3,&local_158,&local_150);
  if ((iVar1 == 0) && (local_158 - 1U < 2)) {
    if (local_158 == 1) {
      iVar1 = accept(*param_1,&local_148,&local_154);
      *param_2 = iVar1;
    }
    else {
      local_41 = 0;
      sVar2 = recvfrom(*param_1,&local_41,1,2,&local_148,&local_154);
      iVar1 = (int)sVar2;
    }
    if (iVar1 < 0) {
      piVar3 = __errno_location();
      iVar1 = *piVar3;
      uVar4 = fcntl64(*param_1,3);
      *piVar3 = iVar1;
      if (((uVar4 & 0x800) != 0) && (uVar5 = 0xffff9700, iVar1 == 0xb)) goto LAB_00100455;
    }
    else {
      if (local_158 == 1) {
LAB_001003fa:
        uVar5 = 0;
        if (param_3 != (char *)0x0) {
          if (local_148.sa_family == 2) {
            *param_5 = 4;
            if (3 < param_4) {
              *(undefined4 *)param_3 = local_148.sa_data._2_4_;
              goto LAB_00100455;
            }
          }
          else {
            *param_5 = 0x10;
            if (0xf < param_4) {
              *(undefined8 *)param_3 = local_148.sa_data._6_8_;
              *(undefined8 *)(param_3 + 8) = uStack_138;
              goto LAB_00100455;
            }
          }
          uVar5 = 0xffffffbd;
        }
        goto LAB_00100455;
      }
      local_14c = 1;
      iVar1 = connect(*param_1,&local_148,local_154);
      if (iVar1 == 0) {
        local_154 = 0x80;
        *param_2 = *param_1;
        *param_1 = -1;
        iVar1 = getsockname(*param_2,local_c8,&local_154);
        if (iVar1 == 0) {
          iVar1 = socket((uint)local_c8[0].sa_family,2,0x11);
          *param_1 = iVar1;
          if ((-1 < iVar1) && (iVar1 = setsockopt(iVar1,1,2,&local_14c,4), iVar1 == 0)) {
            iVar1 = bind(*param_1,local_c8,local_154);
            if (iVar1 != 0) {
              uVar5 = 0xffffffba;
              goto LAB_00100455;
            }
            goto LAB_001003fa;
          }
        }
        uVar5 = 0xffffffbe;
        goto LAB_00100455;
      }
    }
  }
  uVar5 = 0xffffffb6;
LAB_00100455:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void mbedtls_net_set_block(undefined4 *param_1)

{
  uint uVar1;
  
  uVar1 = fcntl64(*param_1,3);
  fcntl64(*param_1,4,uVar1 & 0xfffff7ff);
  return;
}



void mbedtls_net_set_nonblock(undefined4 *param_1)

{
  uint uVar1;
  
  uVar1 = fcntl64(*param_1,3);
  fcntl64(*param_1,4,uVar1 | 0x800);
  return;
}



uint mbedtls_net_poll(int *param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  long lVar4;
  timeval *__timeout;
  ulong uVar5;
  uint uVar6;
  __fd_mask *p_Var7;
  fd_set *pfVar8;
  long in_FS_OFFSET;
  bool bVar9;
  byte bVar10;
  timeval local_148;
  ulong local_138 [16];
  fd_set local_b8;
  long local_30;
  
  bVar10 = 0;
  iVar1 = *param_1;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (iVar1 < 0) {
    uVar6 = 0xffffffbb;
    goto LAB_0010075f;
  }
  if (iVar1 < 0x400) {
    p_Var7 = (__fd_mask *)local_138;
    for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
      *p_Var7 = 0;
      p_Var7 = p_Var7 + 1;
    }
    bVar3 = (byte)iVar1;
    if ((param_2 & 1) != 0) {
      param_2 = param_2 & 0xfffffffe;
      lVar4 = __fdelt_chk((long)iVar1);
      local_138[lVar4] = local_138[lVar4] | 1L << (bVar3 & 0x3f);
    }
    pfVar8 = &local_b8;
    for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
      pfVar8->fds_bits[0] = 0;
      pfVar8 = (fd_set *)((long)pfVar8 + ((ulong)bVar10 * -2 + 1) * 8);
    }
    if ((param_2 & 2) != 0) {
      param_2 = param_2 & 0xfffffffd;
      lVar4 = __fdelt_chk((long)iVar1);
      local_b8.fds_bits[lVar4] = local_b8.fds_bits[lVar4] | 1L << (bVar3 & 0x3f);
    }
    if (param_2 != 0) {
      uVar6 = 0xffffffb7;
      goto LAB_0010075f;
    }
    local_148.tv_sec = (ulong)param_3 / 1000;
    local_148.tv_usec = (__suseconds_t)((param_3 + (int)local_148.tv_sec * -1000) * 1000);
    __timeout = &local_148;
    if (param_3 == 0xffffffff) {
      __timeout = (timeval *)0x0;
    }
    do {
      iVar2 = select(iVar1 + 1,(fd_set *)local_138,&local_b8,(fd_set *)0x0,__timeout);
    } while (iVar2 == 4);
    if (-1 < iVar2) {
      lVar4 = __fdelt_chk((long)iVar1);
      uVar5 = 1L << (bVar3 & 0x3f);
      bVar9 = (uVar5 & local_138[lVar4]) != 0;
      lVar4 = __fdelt_chk((long)iVar1);
      uVar6 = (uint)bVar9;
      if ((uVar5 & local_b8.fds_bits[lVar4]) != 0) {
        uVar6 = bVar9 | 2;
      }
      goto LAB_0010075f;
    }
  }
  uVar6 = 0xffffffb9;
LAB_0010075f:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}



void mbedtls_net_usleep(ulong param_1)

{
  long in_FS_OFFSET;
  timeval local_28;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28.tv_sec = param_1 / 1000000;
  local_28.tv_usec = (long)param_1 % 1000000;
  select(0,(fd_set *)0x0,(fd_set *)0x0,(fd_set *)0x0,&local_28);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong mbedtls_net_recv(int *param_1,void *param_2,size_t param_3)

{
  int iVar1;
  ulong uVar2;
  int *piVar3;
  ulong uVar4;
  
  if (*param_1 < 0) {
    uVar4 = 0xffffffbb;
  }
  else {
    uVar2 = read(*param_1,param_2,param_3);
    uVar4 = uVar2 & 0xffffffff;
    if ((int)uVar2 < 0) {
      piVar3 = __errno_location();
      iVar1 = *piVar3;
      uVar4 = fcntl64(*param_1,3);
      *piVar3 = iVar1;
      if (((uVar4 & 0x800) == 0) || (iVar1 != 0xb)) {
        if ((iVar1 == 0x20) || (iVar1 == 0x68)) {
          return 0xffffffb0;
        }
        if (iVar1 != 4) {
          return 0xffffffb4;
        }
      }
      return 0xffff9700;
    }
  }
  return uVar4;
}



undefined8 mbedtls_net_recv_timeout(int *param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  long lVar4;
  __fd_mask *p_Var5;
  timeval *__timeout;
  long in_FS_OFFSET;
  timeval local_d8;
  ulong local_c8 [17];
  long local_40;
  
  iVar1 = *param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (iVar1 < 0) {
    uVar3 = 0xffffffbb;
  }
  else if (iVar1 < 0x400) {
    p_Var5 = (__fd_mask *)local_c8;
    for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
      *p_Var5 = 0;
      p_Var5 = p_Var5 + 1;
    }
    lVar4 = __fdelt_chk((long)iVar1);
    local_c8[lVar4] = local_c8[lVar4] | 1L << ((byte)iVar1 & 0x3f);
    local_d8.tv_sec = (ulong)param_4 / 1000;
    local_d8.tv_usec = (__suseconds_t)((param_4 % 1000) * 1000);
    __timeout = &local_d8;
    if (param_4 == 0) {
      __timeout = (timeval *)0x0;
    }
    iVar1 = select(iVar1 + 1,(fd_set *)local_c8,(fd_set *)0x0,(fd_set *)0x0,__timeout);
    if (iVar1 == 0) {
      uVar3 = 0xffff9800;
    }
    else if (iVar1 < 0) {
      piVar2 = __errno_location();
      uVar3 = 0xffffffb4;
      if (*piVar2 == 4) {
        uVar3 = 0xffff9700;
      }
    }
    else {
      uVar3 = mbedtls_net_recv(param_1,param_2,param_3);
    }
  }
  else {
    uVar3 = 0xffffffb9;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong mbedtls_net_send(int *param_1,void *param_2,size_t param_3)

{
  int iVar1;
  ulong uVar2;
  int *piVar3;
  ulong uVar4;
  
  if (*param_1 < 0) {
    uVar4 = 0xffffffbb;
  }
  else {
    uVar2 = write(*param_1,param_2,param_3);
    uVar4 = uVar2 & 0xffffffff;
    if ((int)uVar2 < 0) {
      piVar3 = __errno_location();
      iVar1 = *piVar3;
      uVar4 = fcntl64(*param_1,3);
      *piVar3 = iVar1;
      if (((uVar4 & 0x800) == 0) || (iVar1 != 0xb)) {
        if ((iVar1 == 0x20) || (iVar1 == 0x68)) {
          return 0xffffffb0;
        }
        if (iVar1 != 4) {
          return 0xffffffb2;
        }
      }
      return 0xffff9780;
    }
  }
  return uVar4;
}



void mbedtls_net_close(int *param_1)

{
  if (*param_1 != -1) {
    close(*param_1);
    *param_1 = -1;
  }
  return;
}



void mbedtls_net_free(int *param_1)

{
  if (param_1 != (int *)0x0) {
    if (*param_1 != -1) {
      shutdown(*param_1,2);
      close(*param_1);
      *param_1 = -1;
    }
    return;
  }
  return;
}


