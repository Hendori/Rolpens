
int BIO_socket(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = BIO_sock_init();
  if (iVar1 == 1) {
    iVar1 = socket(param_1,param_2,param_3);
    if (iVar1 == -1) {
      ERR_new();
      ERR_set_debug("crypto/bio/bio_sock2.c",0x33,"BIO_socket");
      piVar2 = __errno_location();
      ERR_set_error(2,*piVar2,"calling socket()");
      ERR_new();
      ERR_set_debug("crypto/bio/bio_sock2.c",0x35,"BIO_socket");
      ERR_set_error(0x20,0x76,0);
    }
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}



undefined8 BIO_connect(int param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  socklen_t __len;
  sockaddr *__addr;
  undefined8 uVar2;
  int *piVar3;
  long in_FS_OFFSET;
  undefined4 local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_24 = 1;
  if (param_1 == -1) {
    ERR_new();
    ERR_set_debug("crypto/bio/bio_sock2.c",0x56,"BIO_connect");
    ERR_set_error(0x20,0x87,0);
  }
  else {
    iVar1 = BIO_socket_nbio(param_1,(uint)(param_3 >> 3) & 1);
    if (iVar1 != 0) {
      if ((param_3 & 4) != 0) {
        iVar1 = setsockopt(param_1,1,9,&local_24,4);
        if (iVar1 != 0) {
          ERR_new();
          ERR_set_debug("crypto/bio/bio_sock2.c",0x60,"BIO_connect");
          piVar3 = __errno_location();
          ERR_set_error(2,*piVar3,"calling setsockopt()");
          ERR_new();
          ERR_set_debug("crypto/bio/bio_sock2.c",0x62,"BIO_connect");
          ERR_set_error(0x20,0x89,0);
          uVar2 = 0;
          goto LAB_0010015a;
        }
      }
      if ((param_3 & 0x10) != 0) {
        iVar1 = setsockopt(param_1,6,1,&local_24,4);
        if (iVar1 != 0) {
          ERR_new();
          ERR_set_debug("crypto/bio/bio_sock2.c",0x6a,"BIO_connect");
          piVar3 = __errno_location();
          ERR_set_error(2,*piVar3,"calling setsockopt()");
          ERR_new();
          ERR_set_debug("crypto/bio/bio_sock2.c",0x6c,"BIO_connect");
          ERR_set_error(0x20,0x8a,0);
          uVar2 = 0;
          goto LAB_0010015a;
        }
      }
      __len = BIO_ADDR_sockaddr_size(param_2);
      __addr = (sockaddr *)BIO_ADDR_sockaddr(param_2);
      iVar1 = connect(param_1,__addr,__len);
      uVar2 = 1;
      if (iVar1 != -1) goto LAB_0010015a;
      iVar1 = BIO_sock_should_retry(-1);
      if (iVar1 == 0) {
        ERR_new();
        ERR_set_debug("crypto/bio/bio_sock2.c",0xb2,"BIO_connect");
        piVar3 = __errno_location();
        ERR_set_error(2,*piVar3,"calling connect()");
        ERR_new();
        ERR_set_debug("crypto/bio/bio_sock2.c",0xb4,"BIO_connect");
        ERR_set_error(0x20,0x67,0);
        uVar2 = 0;
        goto LAB_0010015a;
      }
    }
  }
  uVar2 = 0;
LAB_0010015a:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 BIO_bind(int param_1,undefined8 param_2,ulong param_3)

{
  socklen_t __len;
  int iVar1;
  sockaddr *__addr;
  undefined8 uVar2;
  int *piVar3;
  long in_FS_OFFSET;
  undefined4 local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_24 = 1;
  if (param_1 == -1) {
    ERR_new();
    ERR_set_debug("crypto/bio/bio_sock2.c",0xdb,"BIO_bind");
    ERR_set_error(0x20,0x87,0);
    uVar2 = 0;
  }
  else {
    if ((param_3 & 1) != 0) {
      iVar1 = setsockopt(param_1,1,2,&local_24,4);
      if (iVar1 != 0) {
        ERR_new();
        ERR_set_debug("crypto/bio/bio_sock2.c",0xe7,"BIO_bind");
        piVar3 = __errno_location();
        ERR_set_error(2,*piVar3,"calling setsockopt()");
        ERR_new();
        ERR_set_debug("crypto/bio/bio_sock2.c",0xe9,"BIO_bind");
        ERR_set_error(0x20,0x8b,0);
        uVar2 = 0;
        goto LAB_001003b4;
      }
    }
    __len = BIO_ADDR_sockaddr_size(param_2);
    __addr = (sockaddr *)BIO_ADDR_sockaddr(param_2);
    iVar1 = bind(param_1,__addr,__len);
    uVar2 = 1;
    if (iVar1 != 0) {
      ERR_new();
      ERR_set_debug("crypto/bio/bio_sock2.c",0xf0,"BIO_bind");
      piVar3 = __errno_location();
      ERR_set_error(2,*piVar3,"calling bind()");
      ERR_new();
      ERR_set_debug("crypto/bio/bio_sock2.c",0xf2,"BIO_bind");
      ERR_set_error(0x20,0x75,0);
      uVar2 = 0;
    }
  }
LAB_001003b4:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 BIO_listen(int param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  uint local_2c;
  int local_28;
  socklen_t local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_2c = 1;
  local_24 = 4;
  if (param_1 == -1) {
    ERR_new();
    ERR_set_debug("crypto/bio/bio_sock2.c",0x126,"BIO_listen");
    ERR_set_error(0x20,0x87,0);
  }
  else {
    iVar1 = getsockopt(param_1,1,3,&local_28,&local_24);
    if ((iVar1 == 0) && (local_24 == 4)) {
      iVar1 = BIO_socket_nbio(param_1,(uint)(param_3 >> 3) & 1);
      if (iVar1 != 0) {
        if ((param_3 & 4) != 0) {
          iVar1 = setsockopt(param_1,1,9,&local_2c,4);
          if (iVar1 != 0) {
            ERR_new();
            ERR_set_debug("crypto/bio/bio_sock2.c",0x139,"BIO_listen");
            piVar2 = __errno_location();
            ERR_set_error(2,*piVar2,"calling setsockopt()");
            ERR_new();
            ERR_set_debug("crypto/bio/bio_sock2.c",0x13b,"BIO_listen");
            ERR_set_error(0x20,0x89,0);
            goto LAB_001005e9;
          }
        }
        if ((param_3 & 0x10) != 0) {
          iVar1 = setsockopt(param_1,6,1,&local_2c,4);
          if (iVar1 != 0) {
            ERR_new();
            ERR_set_debug("crypto/bio/bio_sock2.c",0x143,"BIO_listen");
            piVar2 = __errno_location();
            ERR_set_error(2,*piVar2,"calling setsockopt()");
            ERR_new();
            ERR_set_debug("crypto/bio/bio_sock2.c",0x145,"BIO_listen");
            ERR_set_error(0x20,0x8a,0);
            goto LAB_001005e9;
          }
        }
        iVar1 = BIO_ADDR_family(param_2);
        if (iVar1 == 10) {
          local_2c = (int)param_3 >> 1 & 1;
          iVar1 = setsockopt(param_1,0x29,0x1a,&local_2c,4);
          if (iVar1 != 0) {
            ERR_new();
            ERR_set_debug("crypto/bio/bio_sock2.c",0x154,"BIO_listen");
            piVar2 = __errno_location();
            ERR_set_error(2,*piVar2,"calling setsockopt()");
            ERR_new();
            ERR_set_debug("crypto/bio/bio_sock2.c",0x156,"BIO_listen");
            ERR_set_error(0x20,0x88,0);
            goto LAB_001005e9;
          }
        }
        iVar1 = BIO_bind(param_1,param_2,param_3 & 0xffffffff);
        if (iVar1 != 0) {
          if (local_28 != 2) {
            iVar1 = listen(param_1,0x1000);
            if (iVar1 == -1) {
              ERR_new();
              ERR_set_debug("crypto/bio/bio_sock2.c",0x160,"BIO_listen");
              piVar2 = __errno_location();
              ERR_set_error(2,*piVar2,"calling listen()");
              ERR_new();
              ERR_set_debug("crypto/bio/bio_sock2.c",0x162,"BIO_listen");
              ERR_set_error(0x20,0x77,0);
              goto LAB_001005e9;
            }
          }
          uVar3 = 1;
          goto LAB_001005eb;
        }
      }
    }
    else {
      ERR_new();
      ERR_set_debug("crypto/bio/bio_sock2.c",0x12d,"BIO_listen");
      piVar2 = __errno_location();
      ERR_set_error(2,*piVar2,"calling getsockopt()");
      ERR_new();
      ERR_set_debug("crypto/bio/bio_sock2.c",0x12f,"BIO_listen");
      ERR_set_error(0x20,0x86,0);
    }
  }
LAB_001005e9:
  uVar3 = 0;
LAB_001005eb:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int BIO_accept_ex(int param_1,undefined1 *param_2,ulong param_3)

{
  int iVar1;
  int iVar2;
  sockaddr *__addr;
  int *piVar3;
  long in_FS_OFFSET;
  socklen_t local_9c;
  undefined1 local_98 [120];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_9c = 0x70;
  if (param_2 == (undefined1 *)0x0) {
    param_2 = local_98;
  }
  __addr = (sockaddr *)BIO_ADDR_sockaddr_noconst(param_2);
  iVar1 = accept(param_1,__addr,&local_9c);
  if (iVar1 == -1) {
    iVar1 = BIO_sock_should_retry(-1);
    if (iVar1 == 0) {
      ERR_new();
      ERR_set_debug("crypto/bio/bio_sock2.c",0x1ac,"BIO_accept_ex");
      piVar3 = __errno_location();
      ERR_set_error(2,*piVar3,"calling accept()");
      ERR_new();
      ERR_set_debug("crypto/bio/bio_sock2.c",0x1ae,"BIO_accept_ex");
      ERR_set_error(0x20,100,0);
    }
  }
  else {
    iVar2 = BIO_socket_nbio(iVar1,(uint)(param_3 >> 3) & 1);
    if (iVar2 != 0) goto LAB_00100959;
    close(iVar1);
  }
  iVar1 = -1;
LAB_00100959:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint BIO_closesocket(int param_1)

{
  uint uVar1;
  
  if (-1 < param_1) {
    uVar1 = close(param_1);
    return ~uVar1 >> 0x1f;
  }
  return 0;
}


