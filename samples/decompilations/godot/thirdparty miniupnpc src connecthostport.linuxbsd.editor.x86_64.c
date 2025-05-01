
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong connecthostport(char *param_1,undefined2 param_2,int param_3)

{
  char cVar1;
  uint __fd;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  ulong uVar5;
  char cVar6;
  long lVar7;
  int iVar8;
  fd_set *pfVar9;
  addrinfo *paVar10;
  long in_FS_OFFSET;
  byte bVar11;
  socklen_t local_168;
  int local_164;
  addrinfo *local_160;
  timeval local_158;
  undefined1 local_148 [20];
  undefined1 local_134 [12];
  undefined4 uStack_128;
  undefined1 auStack_124 [12];
  fd_set local_118;
  char local_90 [7];
  char local_89 [73];
  long local_40;
  
  bVar11 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_134 = SUB1612((undefined1  [16])0x0,0);
  local_148._0_4_ = 0x400;
  local_148._4_16_ = ZEXT816(0x100000000);
  uStack_128 = 0;
  auStack_124 = SUB1612((undefined1  [16])0x0,4);
  __snprintf_chk(local_90,8,2,8,&_LC0,param_2);
  if (*param_1 == '[') {
    cVar6 = param_1[1];
    pcVar3 = param_1 + 1;
    if ((cVar6 == '\0') || (cVar6 == ']')) {
      lVar7 = 0;
    }
    else {
      lVar7 = 1;
      iVar8 = 1;
      do {
        cVar1 = *pcVar3;
        local_89[lVar7] = cVar6;
        if (((cVar1 == '%') && (pcVar3[1] == '2')) && (pcVar3[2] == '5')) {
          iVar8 = iVar8 + 2;
        }
        iVar8 = iVar8 + 1;
        pcVar3 = param_1 + iVar8;
        cVar6 = *pcVar3;
        if ((cVar6 == '\0') || (cVar6 == ']')) goto LAB_001000f3;
        lVar7 = lVar7 + 1;
      } while (lVar7 != 0x41);
      lVar7 = 0x40;
    }
LAB_001000f3:
    pcVar3 = local_89 + 1;
    local_89[(long)(int)lVar7 + 1] = '\0';
  }
  else {
    pcVar3 = strncpy(local_89 + 1,param_1,0x40);
  }
  local_89[0x41] = 0;
  iVar8 = getaddrinfo(pcVar3,local_90,(addrinfo *)local_148,&local_160);
  if (iVar8 == 0) {
    if (local_160 == (addrinfo *)0x0) {
      freeaddrinfo((addrinfo *)0x0);
    }
    else {
      paVar10 = local_160;
      do {
        while( true ) {
          __fd = socket(paVar10->ai_family,paVar10->ai_socktype,paVar10->ai_protocol);
          uVar5 = (ulong)__fd;
          if ((int)__fd < 0) break;
          if ((paVar10->ai_addr->sa_family == 10) && (param_3 != 0)) {
            *(int *)(paVar10->ai_addr[1].sa_data + 6) = param_3;
          }
          local_158.tv_sec = __LC2;
          local_158.tv_usec = _UNK_00100498;
          iVar8 = setsockopt(__fd,1,0x14,&local_158,0x10);
          if (iVar8 < 0) {
            perror("setsockopt");
          }
          local_158.tv_sec = __LC2;
          local_158.tv_usec = _UNK_00100498;
          iVar8 = setsockopt(__fd,1,0x15,&local_158,0x10);
          if (iVar8 < 0) {
            perror("setsockopt");
          }
          iVar8 = connect(__fd,paVar10->ai_addr,paVar10->ai_addrlen);
          if (-1 < iVar8) {
LAB_001002f1:
            freeaddrinfo(local_160);
            goto LAB_001002fb;
          }
          piVar4 = __errno_location();
LAB_00100220:
          if ((*piVar4 == 4) || (*piVar4 == 0x73)) {
            while( true ) {
              pfVar9 = &local_118;
              for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
                pfVar9->fds_bits[0] = 0;
                pfVar9 = (fd_set *)((long)pfVar9 + ((ulong)bVar11 * -2 + 1) * 8);
              }
              lVar7 = __fdelt_chk((long)(int)__fd);
              local_118.fds_bits[lVar7] = local_118.fds_bits[lVar7] | 1L << ((byte)__fd & 0x3f);
              local_158.tv_sec = __LC2;
              local_158.tv_usec = _UNK_00100498;
              iVar8 = select(__fd + 1,(fd_set *)0x0,&local_118,(fd_set *)0x0,&local_158);
              if (iVar8 == -1) {
                if (*piVar4 == 4) goto LAB_00100220;
              }
              else if (iVar8 == 0) {
                paVar10 = paVar10->ai_next;
                *piVar4 = 0x6e;
                goto joined_r0x0010034f;
              }
              local_168 = 4;
              iVar2 = getsockopt(__fd,1,4,&local_164,&local_168);
              if (iVar2 < 0) {
                perror("getsockopt");
                close(__fd);
                freeaddrinfo(local_160);
                goto LAB_0010039c;
              }
              if (local_164 == 0) break;
              *piVar4 = local_164;
              if ((*piVar4 != 4) && (*piVar4 != 0x73)) goto LAB_001002cd;
            }
            if (-1 < iVar8) goto LAB_001002f1;
            goto LAB_00100220;
          }
LAB_001002cd:
          paVar10 = paVar10->ai_next;
joined_r0x0010034f:
          if (paVar10 == (addrinfo *)0x0) {
            uVar5 = FUN_00100463();
            return uVar5;
          }
          close(__fd);
        }
        paVar10 = paVar10->ai_next;
      } while (paVar10 != (addrinfo *)0x0);
      freeaddrinfo(local_160);
    }
    perror("socket");
  }
  else {
    pcVar3 = gai_strerror(iVar8);
    __fprintf_chk(_stderr,2,"getaddrinfo() error : %s\n",pcVar3);
  }
LAB_0010039c:
  uVar5 = 0xffffffff;
LAB_001002fb:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong connecthostport_cold(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  ulong uVar4;
  long lVar5;
  uint unaff_EBX;
  fd_set *unaff_RBP;
  fd_set *pfVar6;
  long unaff_R13;
  long in_FS_OFFSET;
  byte bVar7;
  timeval *unaff_retaddr;
  undefined8 in_stack_00000008;
  socklen_t sStack0000000000000010;
  int iStack0000000000000014;
  addrinfo *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000138;
  
  bVar7 = 0;
  do {
    perror("setsockopt");
    do {
      iVar1 = connect(unaff_EBX,*(sockaddr **)(unaff_R13 + 0x18),*(socklen_t *)(unaff_R13 + 0x10));
      if (-1 < iVar1) {
LAB_001002f1:
        freeaddrinfo(in_stack_00000018);
LAB_001002fb:
        if (in_stack_00000138 == *(long *)(in_FS_OFFSET + 0x28)) {
          return (ulong)unaff_EBX;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      piVar3 = __errno_location();
LAB_00100220:
      if ((*piVar3 == 4) || (*piVar3 == 0x73)) {
        while( true ) {
          pfVar6 = unaff_RBP;
          for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
            pfVar6->fds_bits[0] = 0;
            pfVar6 = (fd_set *)((long)pfVar6 + ((ulong)bVar7 * -2 + 1) * 8);
          }
          lVar5 = __fdelt_chk((long)(int)unaff_EBX);
          *(ulong *)(&stack0x00000060 + lVar5 * 8) =
               *(ulong *)(&stack0x00000060 + lVar5 * 8) | 1L << ((byte)unaff_EBX & 0x3f);
          in_stack_00000020 = __LC2;
          in_stack_00000028 = _UNK_00100498;
          iVar1 = select(unaff_EBX + 1,(fd_set *)0x0,unaff_RBP,(fd_set *)0x0,unaff_retaddr);
          if (iVar1 == -1) {
            if (*piVar3 == 4) goto LAB_00100220;
          }
          else if (iVar1 == 0) {
            unaff_R13 = *(long *)(unaff_R13 + 0x28);
            *piVar3 = 0x6e;
            goto joined_r0x0010034f;
          }
          sStack0000000000000010 = 4;
          iVar2 = getsockopt(unaff_EBX,1,4,(void *)((long)&stack0x00000010 + 4),&stack0x00000010);
          if (iVar2 < 0) {
            perror("getsockopt");
            close(unaff_EBX);
            freeaddrinfo(in_stack_00000018);
            goto LAB_0010039c;
          }
          if (iStack0000000000000014 == 0) break;
          *piVar3 = iStack0000000000000014;
          if ((*piVar3 != 4) && (*piVar3 != 0x73)) goto LAB_001002cd;
        }
        if (-1 < iVar1) goto LAB_001002f1;
        goto LAB_00100220;
      }
LAB_001002cd:
      unaff_R13 = *(long *)(unaff_R13 + 0x28);
joined_r0x0010034f:
      if (unaff_R13 == 0) {
        uVar4 = FUN_00100463();
        return uVar4;
      }
      close(unaff_EBX);
      while (unaff_EBX = socket(*(int *)(unaff_R13 + 4),*(int *)(unaff_R13 + 8),
                                *(int *)(unaff_R13 + 0xc)), (int)unaff_EBX < 0) {
        unaff_R13 = *(long *)(unaff_R13 + 0x28);
        if (unaff_R13 == 0) {
          freeaddrinfo(in_stack_00000018);
          perror("socket");
LAB_0010039c:
          unaff_EBX = 0xffffffff;
          goto LAB_001002fb;
        }
      }
      if ((**(short **)(unaff_R13 + 0x18) == 10) && (in_stack_00000008._4_4_ != 0)) {
        *(int *)(*(short **)(unaff_R13 + 0x18) + 0xc) = in_stack_00000008._4_4_;
      }
      in_stack_00000020 = __LC2;
      in_stack_00000028 = _UNK_00100498;
      iVar1 = setsockopt(unaff_EBX,1,0x14,unaff_retaddr,0x10);
      if (iVar1 < 0) {
        perror("setsockopt");
      }
      in_stack_00000020 = __LC2;
      in_stack_00000028 = _UNK_00100498;
      iVar1 = setsockopt(unaff_EBX,1,0x15,unaff_retaddr,0x10);
    } while (-1 < iVar1);
  } while( true );
}



undefined8 FUN_00100463(void)

{
  int unaff_EBX;
  long in_FS_OFFSET;
  addrinfo *in_stack_00000018;
  long in_stack_00000138;
  
  freeaddrinfo(in_stack_00000018);
  perror("connect");
  close(unaff_EBX);
  if (in_stack_00000138 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


