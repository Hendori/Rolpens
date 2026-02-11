
undefined8 dgram_new(long param_1)

{
  long lVar1;
  
  lVar1 = CRYPTO_zalloc(0x108,"crypto/bio/bss_dgram.c",0x10a);
  if (lVar1 != 0) {
    *(long *)(param_1 + 0x40) = lVar1;
    return 1;
  }
  return 0;
}



undefined8 dgram_get_mtu_overhead(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  int local_28;
  int local_24;
  int local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = BIO_ADDR_family();
  uVar2 = 0x1c;
  if (iVar1 == 10) {
    iVar1 = BIO_ADDR_rawaddress(param_1,&local_28,0);
    uVar2 = 0x30;
    if (((iVar1 != 0) && (local_28 == 0 && local_24 == 0)) && (local_20 == -0x10000)) {
      uVar2 = 0x1c;
    }
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



undefined8
dgram_recvmmsg(long param_1,undefined8 *param_2,long param_3,ulong param_4,undefined8 param_5,
              ulong *param_6)

{
  char cVar1;
  short sVar2;
  undefined2 uVar3;
  uint uVar4;
  undefined4 uVar5;
  long lVar6;
  undefined2 *puVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  undefined8 uVar11;
  mmsghdr *pmVar12;
  int *piVar13;
  iovec *piVar14;
  ulong uVar15;
  ulong *puVar16;
  undefined8 *puVar17;
  undefined1 *puVar18;
  socklen_t sVar19;
  iovec *piVar20;
  ulong uVar21;
  ulong uVar22;
  ulong *puVar23;
  void **ppvVar24;
  long in_FS_OFFSET;
  iovec local_1e48 [64];
  undefined1 local_1a48 [2560];
  mmsghdr local_1048 [64];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar11 = 1;
  if (param_4 != 0) {
    lVar6 = *(long *)(param_1 + 0x40);
    uVar15 = 0x40;
    if (param_4 < 0x41) {
      uVar15 = param_4;
    }
    piVar14 = local_1e48;
    cVar1 = *(char *)(lVar6 + 0x104);
    iVar10 = *(int *)(lVar6 + 0xe0);
    puVar18 = local_1a48;
    if ((long)param_4 < 0) {
      uVar15 = 0x40;
    }
    piVar20 = piVar14 + uVar15;
    pmVar12 = local_1048;
    puVar17 = param_2;
    do {
      piVar14->iov_base = (void *)*puVar17;
      piVar14->iov_len = puVar17[1];
      if ((iVar10 == 0) && ((void *)puVar17[2] != (void *)0x0)) {
        sVar2 = *(short *)(lVar6 + 0x70);
        (pmVar12->msg_hdr).msg_name = (void *)puVar17[2];
        sVar19 = 0x10;
        if ((sVar2 != 2) && (sVar19 = 0x1c, sVar2 != 10)) goto LAB_0010018f;
      }
      else {
        (pmVar12->msg_hdr).msg_name = (void *)0x0;
LAB_0010018f:
        sVar19 = 0;
      }
      lVar9 = puVar17[3];
      (pmVar12->msg_hdr).msg_namelen = sVar19;
      (pmVar12->msg_hdr).msg_iov = piVar14;
      (pmVar12->msg_hdr).msg_iovlen = 1;
      if (lVar9 == 0) {
        (pmVar12->msg_hdr).msg_control = (void *)0x0;
        (pmVar12->msg_hdr).msg_controllen = 0;
        (pmVar12->msg_hdr).msg_flags = 0;
      }
      else {
        (pmVar12->msg_hdr).msg_control = puVar18;
        (pmVar12->msg_hdr).msg_controllen = 0x28;
        (pmVar12->msg_hdr).msg_flags = 0;
        if (cVar1 == '\0') {
          ERR_new();
          ERR_set_debug("crypto/bio/bss_dgram.c",0x62c,"dgram_recvmmsg");
          ERR_set_error(0x20,0x6f,0);
          goto LAB_00100408;
        }
      }
      piVar14 = piVar14 + 1;
      puVar17 = (undefined8 *)((long)puVar17 + param_3);
      pmVar12 = pmVar12 + 1;
      puVar18 = puVar18 + 0x28;
    } while (piVar14 != piVar20);
    iVar10 = recvmmsg(*(int *)(param_1 + 0x38),local_1048,(uint)uVar15,0,(timespec *)0x0);
    if (iVar10 < 0) {
      ERR_new();
      ERR_set_debug("crypto/bio/bss_dgram.c",0x635,"dgram_recvmmsg");
      piVar13 = __errno_location();
      ERR_set_error(2,*piVar13,0);
LAB_00100408:
      param_4 = 0;
      uVar11 = 0;
    }
    else {
      param_4 = (ulong)iVar10;
      ppvVar24 = &local_1048[0].msg_hdr.msg_control;
      puVar23 = param_2 + 1;
      uVar15 = 0;
      if (param_4 != 0) {
        do {
          uVar4 = *(uint *)(ppvVar24 + 3);
          puVar7 = (undefined2 *)puVar23[2];
          puVar23[3] = 0;
          *puVar23 = (ulong)uVar4;
          if (puVar7 != (undefined2 *)0x0) {
            lVar6 = *(long *)(param_1 + 0x40);
            puVar16 = (ulong *)0x0;
            if (0xf < ppvVar24[1]) {
              puVar16 = (ulong *)*ppvVar24;
            }
            if (puVar16 != (ulong *)0x0) {
              while( true ) {
                if (*(short *)(lVar6 + 0x70) == 2) {
                  if (((int)puVar16[1] == 0) && (*(int *)((long)puVar16 + 0xc) == 8)) {
                    uVar8 = puVar16[3];
                    *puVar7 = 2;
                    *(int *)(puVar7 + 2) = (int)uVar8;
                    puVar7[1] = *(undefined2 *)(lVar6 + 0x72);
                    goto LAB_00100308;
                  }
                }
                else if (((*(short *)(lVar6 + 0x70) == 10) && ((int)puVar16[1] == 0x29)) &&
                        (*(int *)((long)puVar16 + 0xc) == 0x32)) {
                  uVar8 = puVar16[2];
                  uVar21 = puVar16[3];
                  *puVar7 = 10;
                  uVar3 = *(undefined2 *)(lVar6 + 0x72);
                  *(ulong *)(puVar7 + 4) = uVar8;
                  *(ulong *)(puVar7 + 8) = uVar21;
                  puVar7[1] = uVar3;
                  uVar5 = *(undefined4 *)(lVar6 + 0x88);
                  *(undefined4 *)(puVar7 + 2) = 0;
                  *(undefined4 *)(puVar7 + 0xc) = uVar5;
                  goto LAB_00100308;
                }
                uVar8 = *puVar16;
                if (uVar8 < 0x10) break;
                uVar22 = (long)*ppvVar24 + ((long)ppvVar24[1] - (long)puVar16);
                uVar21 = (ulong)(-(int)uVar8 & 7) + 0x10;
                if (((uVar22 < uVar21) || (uVar22 - uVar21 < uVar8)) ||
                   (puVar16 = (ulong *)((long)puVar16 + (uVar8 + 7 & 0xfffffffffffffff8)),
                   puVar16 == (ulong *)0x0)) break;
              }
            }
            BIO_ADDR_clear(param_2[3]);
          }
LAB_00100308:
          uVar15 = uVar15 + 1;
          ppvVar24 = ppvVar24 + 8;
          puVar23 = (ulong *)((long)puVar23 + param_3);
        } while (param_4 != uVar15);
      }
      uVar11 = 1;
    }
  }
  *param_6 = param_4;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar11;
}



uint enable_local_addr_isra_0(int param_1,long param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 local_c [3];
  
  local_c[0] = param_3;
  if (*(short *)(param_2 + 0x70) == 2) {
    uVar1 = setsockopt(param_1,0,8,local_c,4);
    return ~uVar1 >> 0x1f;
  }
  if (*(short *)(param_2 + 0x70) != 10) {
    return 0;
  }
  uVar1 = setsockopt(param_1,0x29,0x31,local_c,4);
  return ~uVar1 >> 0x1f;
}



char * dgram_ctrl(char *param_1,undefined4 param_2,char *param_3,long *param_4)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  sockaddr *psVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  sockaddr *__addr;
  long in_FS_OFFSET;
  uint local_b8;
  socklen_t local_b4 [2];
  socklen_t local_ac;
  sockaddr local_a8 [8];
  long local_20;
  
  __addr = *(sockaddr **)(param_1 + 0x40);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_b8 = 0;
  local_b4[1] = 0x80;
  uVar7 = SUB84(param_3,0);
  switch(param_2) {
  case 8:
    param_3 = (char *)(long)*(int *)(param_1 + 0x2c);
    goto LAB_00100610;
  case 9:
    *(undefined4 *)(param_1 + 0x2c) = uVar7;
    break;
  default:
    goto switchD_00100512_caseD_a;
  case 0xb:
  case 0xc:
  case 0x52:
    break;
  case 0x1f:
  case 0x2c:
switchD_00100512_caseD_1f:
    uVar6 = BIO_ADDR_sockaddr(param_4);
    BIO_ADDR_make(__addr,uVar6);
    break;
  case 0x20:
    if (param_4 != (long *)0x0) {
      __addr[0xe].sa_family = 1;
      __addr[0xe].sa_data[0] = '\0';
      __addr[0xe].sa_data[1] = '\0';
      goto switchD_00100512_caseD_1f;
    }
    __addr[0xe].sa_family = 0;
    __addr[0xe].sa_data[0] = '\0';
    __addr[0xe].sa_data[1] = '\0';
    BIO_ADDR_clear(__addr);
    break;
  case 0x21:
    iVar2 = setsockopt(*(int *)(param_1 + 0x38),1,0x14,param_4,0x10);
    param_1 = (char *)(long)iVar2;
    if (-1 < (long)iVar2) goto LAB_00100538;
    ERR_new();
    uVar6 = 0x31d;
    goto LAB_001008e0;
  case 0x22:
    local_ac = 0x10;
    iVar2 = getsockopt(*(int *)(param_1 + 0x38),1,0x14,param_4,&local_ac);
    if (-1 < iVar2) {
      param_1 = (char *)(ulong)local_ac;
      if (local_ac < 0x11) goto LAB_00100538;
      param_1 = "assertion failed: (size_t)sz <= sizeof(struct timeval)";
      OPENSSL_die("assertion failed: (size_t)sz <= sizeof(struct timeval)","crypto/bio/bss_dgram.c",
                  0x339);
      goto switchD_00100512_caseD_66;
    }
    ERR_new();
    uVar6 = 0x336;
LAB_00100c3c:
    ERR_set_debug("crypto/bio/bss_dgram.c",uVar6,"dgram_ctrl");
    piVar3 = __errno_location();
    ERR_set_error(2,*piVar3,"calling getsockopt()");
    goto LAB_001006b0;
  case 0x23:
    iVar2 = setsockopt(*(int *)(param_1 + 0x38),1,0x15,param_4,0x10);
    param_1 = (char *)(long)iVar2;
    if (-1 < (long)iVar2) goto LAB_00100538;
    ERR_new();
    uVar6 = 0x34f;
    goto LAB_001008e0;
  case 0x24:
    local_ac = 0x10;
    iVar2 = getsockopt(*(int *)(param_1 + 0x38),1,0x15,param_4,&local_ac);
    if (iVar2 < 0) {
      ERR_new();
      uVar6 = 0x369;
      goto LAB_00100c3c;
    }
    param_1 = (char *)(ulong)local_ac;
    if (local_ac < 0x11) goto LAB_00100538;
    OPENSSL_die("assertion failed: (size_t)sz <= sizeof(struct timeval)","crypto/bio/bss_dgram.c",
                0x36c);
  case 0x28:
    local_ac = 0x70;
    BIO_ADDR_clear(local_a8);
    iVar2 = getsockname(*(int *)(param_1 + 0x38),local_a8,&local_ac);
    if (-1 < iVar2) {
      local_b4[0] = 4;
      if (local_a8[0].sa_family == 2) {
        iVar2 = getsockopt(*(int *)(param_1 + 0x38),0,0xe,&local_b8,local_b4);
        if ((-1 < iVar2) && (-1 < (int)local_b8)) {
          *(uint *)(__addr[0xe].sa_data + 6) = local_b8 - 0x1c;
          param_1 = (char *)(ulong)(local_b8 - 0x1c);
          goto LAB_00100538;
        }
      }
      else if (((local_a8[0].sa_family == 10) &&
               (iVar2 = getsockopt(*(int *)(param_1 + 0x38),0x29,0x18,&local_b8,local_b4),
               -1 < iVar2)) && (-1 < (int)local_b8)) {
        *(uint *)(__addr[0xe].sa_data + 6) = local_b8 - 0x30;
        param_1 = (char *)(ulong)(local_b8 - 0x30);
        goto LAB_00100538;
      }
    }
    goto switchD_00100512_caseD_a;
  case 0x25:
  case 0x26:
    if (*(int *)(__addr[0xe].sa_data + 2) != 0xb) goto switchD_00100512_caseD_a;
LAB_00100636:
    __addr[0xe].sa_data[2] = '\0';
    __addr[0xe].sa_data[3] = '\0';
    __addr[0xe].sa_data[4] = '\0';
    __addr[0xe].sa_data[5] = '\0';
    break;
  case 0x27:
    local_ac = 0x70;
    BIO_ADDR_clear(local_a8);
    iVar2 = getsockname(*(int *)(param_1 + 0x38),local_a8,&local_ac);
    if (-1 < iVar2) {
      if (local_a8[0].sa_family == 2) {
        local_b8 = 2;
        iVar2 = setsockopt(*(int *)(param_1 + 0x38),0,10,&local_b8,4);
        param_1 = (char *)(long)iVar2;
        if (-1 < (long)iVar2) goto LAB_00100538;
        ERR_new();
        uVar6 = 0x279;
      }
      else {
        if (local_a8[0].sa_family != 10) goto LAB_001006b0;
        local_b8 = 2;
        iVar2 = setsockopt(*(int *)(param_1 + 0x38),0x29,0x17,&local_b8,4);
        param_1 = (char *)(long)iVar2;
        if (-1 < (long)iVar2) goto LAB_00100538;
        ERR_new();
        uVar6 = 0x281;
      }
      goto LAB_001008e0;
    }
    goto switchD_00100512_caseD_a;
  case 0x29:
    param_1 = (char *)(ulong)*(uint *)(__addr[0xe].sa_data + 6);
    goto LAB_00100538;
  case 0x2a:
    *(undefined4 *)(__addr[0xe].sa_data + 6) = uVar7;
    goto LAB_00100610;
  case 0x2b:
    if (*(int *)(__addr[0xe].sa_data + 2) == 0x5a) goto LAB_00100636;
switchD_00100512_caseD_a:
    param_1 = (char *)0x0;
    goto LAB_00100538;
  case 0x2d:
    lVar4 = 0;
    if (-1 < *param_4) {
      lVar4 = *param_4 * 1000000000 + param_4[1] * 1000;
    }
    __addr[0xf].sa_family = (short)lVar4;
    __addr[0xf].sa_data[0] = (char)((ulong)lVar4 >> 0x10);
    __addr[0xf].sa_data[1] = (char)((ulong)lVar4 >> 0x18);
    __addr[0xf].sa_data[2] = (char)((ulong)lVar4 >> 0x20);
    __addr[0xf].sa_data[3] = (char)((ulong)lVar4 >> 0x28);
    __addr[0xf].sa_data[4] = (char)((ulong)lVar4 >> 0x30);
    __addr[0xf].sa_data[5] = (char)((ulong)lVar4 >> 0x38);
    break;
  case 0x2e:
    goto switchD_00100512_caseD_2e;
  case 0x2f:
    lVar4 = dgram_get_mtu_overhead(__addr);
    iVar2 = BIO_ADDR_family(__addr);
    param_3 = (char *)(0x240 - lVar4);
    if ((iVar2 == 10) &&
       (((iVar2 = BIO_ADDR_rawaddress(__addr,local_a8,0), iVar2 == 0 ||
         (local_a8[0]._0_4_ != 0 || local_a8[0].sa_data._2_4_ != 0)) ||
        (local_a8[0].sa_data._6_4_ != -0x10000)))) {
      param_3 = (char *)(0x500 - lVar4);
    }
    goto LAB_00100610;
  case 0x30:
    if (__addr->sa_family == 2) {
      local_b8 = -(uint)(param_3 != (char *)0x0) & 3;
      iVar2 = setsockopt(*(int *)(param_1 + 0x38),0,10,&local_b8,4);
      param_1 = (char *)(long)iVar2;
      if (-1 < (long)iVar2) goto LAB_00100538;
      ERR_new();
      uVar6 = 0x397;
    }
    else {
      if (__addr->sa_family != 10) goto LAB_001006b0;
      local_b8 = (uint)(param_3 != (char *)0x0);
      iVar2 = setsockopt(*(int *)(param_1 + 0x38),0x29,0x3e,&local_b8,4);
      param_1 = (char *)(long)iVar2;
      if (-1 < (long)iVar2) goto LAB_00100538;
      ERR_new();
      uVar6 = 0x3ab;
    }
LAB_001008e0:
    ERR_set_debug("crypto/bio/bss_dgram.c",uVar6,"dgram_ctrl");
    piVar3 = __errno_location();
    ERR_set_error(2,*piVar3,"calling setsockopt()");
LAB_001006b0:
    param_1 = (char *)0xffffffffffffffff;
    goto LAB_00100538;
  case 0x31:
    param_3 = (char *)dgram_get_mtu_overhead(__addr);
    goto LAB_00100610;
  case 0x32:
  case 0x47:
    __addr[0x10].sa_family = (short)uVar7;
    __addr[0x10].sa_data[0] = (char)((uint)uVar7 >> 0x10);
    __addr[0x10].sa_data[1] = (char)((uint)uVar7 >> 0x18);
    break;
  case 0x53:
    *(int *)param_4 = (int)__addr[0x10].sa_data[2];
    break;
  case 0x54:
    if ((long)__addr[0x10].sa_data[2] != (ulong)(0 < (long)param_3)) {
      iVar2 = enable_local_addr_isra_0(*(undefined4 *)(param_1 + 0x38),__addr,0 < (long)param_3);
      if (iVar2 < 1) goto switchD_00100512_caseD_a;
      __addr[0x10].sa_data[2] = 0 < (long)param_3;
    }
    break;
  case 0x55:
    param_1 = (char *)0xf;
    goto LAB_00100538;
  case 0x5b:
  case 0x5c:
    iVar2 = *(int *)(param_1 + 0x38);
    *(int *)param_4 = 1;
    *(int *)(param_4 + 1) = iVar2;
    break;
  case 0x5d:
    local_ac = 0x10;
    iVar2 = BIO_ADDR_family(__addr);
    if (iVar2 == 0) {
      __addr = local_a8;
      iVar2 = getpeername(*(int *)(param_1 + 0x38),__addr,&local_ac);
      if ((iVar2 != 0) || (iVar2 = BIO_ADDR_family(__addr), iVar2 == 0))
      goto switchD_00100512_caseD_a;
    }
switchD_00100512_caseD_2e:
    uVar1 = BIO_ADDR_sockaddr_size(__addr);
    param_1 = (char *)(ulong)uVar1;
    if ((param_3 == (char *)0x0) || ((long)param_1 < (long)param_3)) {
      memcpy(param_4,__addr,(size_t)param_1);
      goto LAB_00100538;
    }
    memcpy(param_4,__addr,(size_t)param_3);
    goto LAB_00100610;
  case 0x66:
switchD_00100512_caseD_66:
    iVar2 = BIO_socket_nbio(*(int *)(param_1 + 0x38),(uint)(param_3 != (char *)0x0));
    param_1 = (char *)(ulong)(iVar2 != 0);
    goto LAB_00100538;
  case 0x68:
    psVar5 = __addr;
    if (*(int *)(param_1 + 0x2c) != 0) {
      if (*(int *)(param_1 + 0x28) != 0) {
        BIO_closesocket(*(undefined4 *)(param_1 + 0x38));
        psVar5 = *(sockaddr **)(param_1 + 0x40);
      }
      param_1[0x28] = '\0';
      param_1[0x29] = '\0';
      param_1[0x2a] = '\0';
      param_1[0x2b] = '\0';
      param_1[0x30] = '\0';
      param_1[0x31] = '\0';
      param_1[0x32] = '\0';
      param_1[0x33] = '\0';
    }
    lVar4 = *param_4;
    *(undefined4 *)(param_1 + 0x2c) = uVar7;
    param_1[0x28] = '\x01';
    param_1[0x29] = '\0';
    param_1[0x2a] = '\0';
    param_1[0x2b] = '\0';
    *(int *)(param_1 + 0x38) = (int)lVar4;
    local_ac = 0x70;
    iVar2 = getsockname((int)lVar4,psVar5 + 7,&local_ac);
    if (iVar2 < 0) {
      BIO_ADDR_clear(psVar5 + 7);
    }
    iVar2 = getpeername(*(int *)(param_1 + 0x38),local_a8,local_b4 + 1);
    if (iVar2 == 0) {
      uVar6 = BIO_ADDR_sockaddr(local_a8);
      BIO_ADDR_make(__addr,uVar6);
      __addr[0xe].sa_family = 1;
      __addr[0xe].sa_data[0] = '\0';
      __addr[0xe].sa_data[1] = '\0';
    }
    if ((__addr[0x10].sa_data[2] != '\0') &&
       (iVar2 = enable_local_addr_isra_0
                          (*(undefined4 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),1),
       iVar2 < 1)) {
      __addr[0x10].sa_data[2] = '\0';
    }
    break;
  case 0x69:
    if (*(int *)(param_1 + 0x28) == 0) goto LAB_001006b0;
    if (param_4 != (long *)0x0) {
      *(int *)param_4 = *(int *)(param_1 + 0x38);
    }
    param_3 = (char *)(long)*(int *)(param_1 + 0x38);
LAB_00100610:
    param_1 = (char *)0xffffffffffffffff;
    if (-1 < (long)param_3) {
      param_1 = param_3;
    }
    goto LAB_00100538;
  }
  param_1 = (char *)0x1;
LAB_00100538:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 dgram_free(long param_1)

{
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x2c) != 0) {
      if (*(int *)(param_1 + 0x28) != 0) {
        BIO_closesocket(*(undefined4 *)(param_1 + 0x38));
      }
      *(undefined4 *)(param_1 + 0x28) = 0;
      *(undefined4 *)(param_1 + 0x30) = 0;
    }
    CRYPTO_free(*(void **)(param_1 + 0x40));
    return 1;
  }
  return 0;
}



undefined8
dgram_sendmmsg(long param_1,undefined8 *param_2,long param_3,ulong param_4,undefined8 param_5,
              ulong *param_6)

{
  char cVar1;
  short sVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  int *piVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  uint *puVar15;
  undefined8 *puVar16;
  undefined4 uVar17;
  ulong *puVar18;
  long in_FS_OFFSET;
  undefined8 local_1e48 [128];
  undefined8 local_1a48 [320];
  long local_1048 [7];
  uint local_1010 [1012];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar12 = 1;
  if (param_4 != 0) {
    lVar4 = *(long *)(param_1 + 0x40);
    uVar13 = 0x40;
    if (param_4 < 0x41) {
      uVar13 = param_4;
    }
    puVar11 = local_1e48;
    cVar1 = *(char *)(lVar4 + 0x104);
    iVar7 = *(int *)(lVar4 + 0xe0);
    uVar8 = 0x40;
    if (-1 < (long)param_4) {
      uVar8 = uVar13;
    }
    puVar16 = local_1a48;
    plVar9 = local_1048;
    puVar14 = param_2;
    do {
      *puVar11 = *puVar14;
      puVar11[1] = puVar14[1];
      if ((iVar7 == 0) && (puVar14[2] != 0)) {
        sVar2 = *(short *)(lVar4 + 0x70);
        *plVar9 = puVar14[2];
        uVar17 = 0x10;
        if ((sVar2 != 2) && (uVar17 = 0x1c, sVar2 != 10)) goto LAB_00100e94;
      }
      else {
        *plVar9 = 0;
LAB_00100e94:
        uVar17 = 0;
      }
      *(undefined4 *)(plVar9 + 1) = uVar17;
      lVar5 = puVar14[3];
      plVar9[2] = (long)puVar11;
      plVar9[3] = 1;
      if (lVar5 != 0) {
        plVar9[4] = (long)puVar16;
        plVar9[5] = 0x28;
        *(undefined4 *)(plVar9 + 6) = 0;
        if (cVar1 == '\0') {
          ERR_new();
          uVar12 = 0x563;
        }
        else {
          if (*(short *)(lVar4 + 0x70) == 2) {
            puVar16[1] = _LC4;
            uVar17 = *(undefined4 *)(lVar5 + 4);
            *(undefined4 *)(puVar16 + 3) = 0;
            *(undefined4 *)((long)puVar16 + 0x14) = uVar17;
            *(undefined4 *)(puVar16 + 2) = 0;
            sVar2 = *(short *)(lVar5 + 2);
            *puVar16 = 0x1c;
            if ((sVar2 == 0) || (sVar2 == *(short *)(lVar4 + 0x72))) {
              plVar9[5] = 0x20;
              goto LAB_00100f77;
            }
            ERR_new();
            uVar12 = 0x4b9;
LAB_0010103b:
            ERR_set_debug("crypto/bio/bss_dgram.c",uVar12,"pack_local");
            ERR_set_error(0x20,0x96,0);
          }
          else if (*(short *)(lVar4 + 0x70) == 10) {
            puVar16[1] = _LC5;
            uVar12 = *(undefined8 *)(lVar5 + 8);
            uVar6 = *(undefined8 *)(lVar5 + 0x10);
            *(undefined4 *)(puVar16 + 4) = 0;
            puVar16[2] = uVar12;
            puVar16[3] = uVar6;
            sVar2 = *(short *)(lVar5 + 2);
            *puVar16 = 0x24;
            if ((sVar2 == 0) || (sVar2 == *(short *)(lVar4 + 0x72))) {
              if ((*(int *)(lVar5 + 0x18) == 0) ||
                 (*(int *)(lVar5 + 0x18) == *(int *)(lVar4 + 0x88))) goto LAB_00100f77;
              ERR_new();
              uVar12 = 0x505;
            }
            else {
              ERR_new();
              uVar12 = 0x4ff;
            }
            goto LAB_0010103b;
          }
          ERR_new();
          uVar12 = 0x56a;
        }
        ERR_set_debug("crypto/bio/bss_dgram.c",uVar12,"dgram_sendmmsg");
        ERR_set_error(0x20,0x6f,0);
        goto LAB_00100f1a;
      }
      plVar9[4] = 0;
      plVar9[5] = 0;
      *(undefined4 *)(plVar9 + 6) = 0;
LAB_00100f77:
      plVar9 = plVar9 + 8;
      puVar14 = (undefined8 *)((long)puVar14 + param_3);
      puVar11 = puVar11 + 2;
      puVar16 = puVar16 + 5;
    } while (plVar9 != local_1048 + uVar8 * 8);
    iVar7 = sendmmsg(*(undefined4 *)(param_1 + 0x38),local_1048,uVar8 & 0xffffffff,0);
    if (iVar7 < 0) {
      ERR_new();
      ERR_set_debug("crypto/bio/bss_dgram.c",0x574,"dgram_sendmmsg");
      piVar10 = __errno_location();
      ERR_set_error(2,*piVar10,0);
LAB_00100f1a:
      param_4 = 0;
      uVar12 = 0;
    }
    else {
      param_4 = (ulong)iVar7;
      if (param_4 != 0) {
        puVar15 = local_1010;
        puVar18 = param_2 + 1;
        do {
          puVar18[3] = 0;
          uVar3 = *puVar15;
          puVar15 = puVar15 + 0x10;
          *puVar18 = (ulong)uVar3;
          puVar18 = (ulong *)((long)puVar18 + param_3);
        } while (local_1010 + param_4 * 0x10 != puVar15);
      }
      uVar12 = 1;
    }
  }
  *param_6 = param_4;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar12;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

BIO_METHOD * BIO_s_datagram(void)

{
  return (BIO_METHOD *)methods_dgramp;
}



BIO * BIO_new_dgram(int fd,int close_flag)

{
  BIO_METHOD *type;
  BIO *bp;
  
  type = BIO_s_datagram();
  bp = BIO_new(type);
  if (bp != (BIO *)0x0) {
    BIO_int_ctrl(bp,0x68,(long)close_flag,fd);
  }
  return bp;
}



int BIO_dgram_non_fatal_error(int error)

{
  if (error != 0x47) {
    if (0x47 < error) {
      return (int)(error - 0x72U < 2);
    }
    if (error != 4) {
      return (int)(error == 0xb);
    }
  }
  return 1;
}



ulong dgram_read(BIO *param_1,void *param_2,int param_3)

{
  bio_st *pbVar1;
  bio_st *pbVar2;
  ulong uVar3;
  int iVar4;
  int *piVar5;
  sockaddr *__addr;
  ulong uVar6;
  char *pcVar7;
  ulong uVar8;
  long lVar9;
  long in_FS_OFFSET;
  socklen_t local_d0 [2];
  ulong local_c8;
  ulong local_c0;
  undefined1 local_b8 [120];
  long local_40;
  
  uVar6 = 0;
  pbVar1 = param_1->prev_bio;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_d0[0] = 0x70;
  if (param_2 == (void *)0x0) goto LAB_001012c1;
  piVar5 = __errno_location();
  *piVar5 = 0;
  BIO_ADDR_clear(local_b8);
  pbVar2 = param_1->prev_bio;
  if (pbVar2[2].cb_arg != (char *)0x0) {
    local_d0[1] = 0x10;
    iVar4 = getsockopt(*(int *)&param_1->next_bio,1,0x14,&local_c8,local_d0 + 1);
    if (iVar4 < 0) {
      ERR_new();
      ERR_set_debug("crypto/bio/bss_dgram.c",0x147,"dgram_adjust_rcv_timeout");
      ERR_set_error(2,*piVar5,"calling getsockopt()");
    }
    else {
      lVar9 = 0;
      if (-1 < (long)local_c8) {
        lVar9 = local_c8 * 1000000000 + local_c0 * 1000;
      }
      pbVar2[2].init = (int)lVar9;
      pbVar2[2].shutdown = (int)((ulong)lVar9 >> 0x20);
    }
    pcVar7 = (char *)ossl_time_now();
    uVar6 = 1000;
    if ((pcVar7 <= pbVar2[2].cb_arg) &&
       (uVar6 = (long)pbVar2[2].cb_arg - (long)pcVar7, uVar6 < 1000)) {
      uVar6 = 1000;
    }
    uVar3 = *(ulong *)&pbVar2[2].init;
    uVar8 = uVar3 - 1;
    if (uVar3 - 1 < uVar3) {
      uVar8 = uVar3;
    }
    if (uVar6 <= uVar8) {
      if (uVar6 < 0xfffffffffffffc19) {
        local_c8 = (uVar6 + 999) / 1000000000;
        local_c0 = ((uVar6 + 999) % 1000000000) / 1000;
      }
      else {
        local_c8 = 0x44b82fa09;
        local_c0 = 0xad3af;
      }
      iVar4 = setsockopt(*(int *)&param_1->next_bio,1,0x14,&local_c8,0x10);
      if (iVar4 < 0) {
        ERR_new();
        ERR_set_debug("crypto/bio/bss_dgram.c",0x162,"dgram_adjust_rcv_timeout");
        ERR_set_error(2,*piVar5,"calling setsockopt()");
      }
    }
  }
  iVar4 = pbVar1[2].flags;
  __addr = (sockaddr *)BIO_ADDR_sockaddr_noconst(local_b8);
  uVar6 = recvfrom(*(int *)&param_1->next_bio,param_2,(long)param_3,(uint)(iVar4 != 0) * 2,__addr,
                   local_d0);
  iVar4 = (int)uVar6;
  uVar6 = uVar6 & 0xffffffff;
  if (*(int *)&pbVar1[2].method == 0) {
    if (iVar4 < 0) {
      BIO_clear_flags(param_1,0xf);
      goto LAB_00101305;
    }
    BIO_ctrl(param_1,0x2c,0,local_b8);
    BIO_clear_flags(param_1,0xf);
  }
  else {
    BIO_clear_flags(param_1,0xf);
    if (iVar4 < 0) {
LAB_00101305:
      if (iVar4 + 1U < 2) {
        iVar4 = BIO_dgram_non_fatal_error(*piVar5);
        if (iVar4 != 0) {
          BIO_set_flags(param_1,9);
          *(int *)((long)&pbVar1[2].method + 4) = *piVar5;
        }
      }
    }
  }
  if (param_1->prev_bio[2].cb_arg != (char *)0x0) {
    uVar3 = *(ulong *)&param_1->prev_bio[2].init;
    uVar8 = uVar3 + 999;
    if (uVar3 < 0xfffffffffffffc19) {
      local_c8 = uVar8 / 1000000000;
      local_c0 = (uVar8 % 1000000000) / 1000;
    }
    else {
      local_c8 = 0x44b82fa09;
      local_c0 = 0xad3af;
    }
    iVar4 = setsockopt(*(int *)&param_1->next_bio,1,0x14,&local_c8,0x10);
    if (iVar4 < 0) {
      ERR_new();
      ERR_set_debug("crypto/bio/bss_dgram.c",0x191,"dgram_reset_rcv_timeout");
      ERR_set_error(2,*piVar5,"calling setsockopt()");
    }
  }
LAB_001012c1:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong dgram_write(BIO *param_1,void *param_2,int param_3)

{
  bio_st *pbVar1;
  socklen_t __addr_len;
  int iVar2;
  int *piVar3;
  ulong uVar4;
  sockaddr *__addr;
  
  pbVar1 = param_1->prev_bio;
  piVar3 = __errno_location();
  *piVar3 = 0;
  if (*(int *)&pbVar1[2].method == 0) {
    __addr_len = BIO_ADDR_sockaddr_size(pbVar1);
    __addr = (sockaddr *)BIO_ADDR_sockaddr(pbVar1);
    uVar4 = sendto(*(int *)&param_1->next_bio,param_2,(long)param_3,0,__addr,__addr_len);
  }
  else {
    uVar4 = write(*(int *)&param_1->next_bio,param_2,(long)param_3);
  }
  BIO_clear_flags(param_1,0xf);
  if (((int)uVar4 < 1) && ((int)uVar4 + 1U < 2)) {
    iVar2 = BIO_dgram_non_fatal_error(*piVar3);
    if (iVar2 != 0) {
      BIO_set_flags(param_1,10);
      *(int *)((long)&pbVar1[2].method + 4) = *piVar3;
    }
  }
  return uVar4 & 0xffffffff;
}



void dgram_puts(undefined8 param_1,char *param_2)

{
  size_t sVar1;
  
  sVar1 = strlen(param_2);
  dgram_write(param_1,param_2,sVar1 & 0xffffffff);
  return;
}


