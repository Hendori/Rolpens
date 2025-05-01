
int BIO_sock_error(int sock)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  long in_FS_OFFSET;
  int local_18 [2];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18[0] = 0;
  local_18[1] = 4;
  iVar1 = getsockopt(sock,1,4,local_18,(socklen_t *)(local_18 + 1));
  iVar2 = local_18[0];
  if (iVar1 < 0) {
    piVar3 = __errno_location();
    iVar2 = *piVar3;
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

hostent * BIO_gethostbyname(char *__name)

{
  hostent *phVar1;
  
  phVar1 = gethostbyname(__name);
  return phVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int BIO_sock_init(void)

{
  return 1;
}



int BIO_get_host_ip(char *str,uchar *ip)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined8 local_30;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = 0;
  iVar1 = BIO_sock_init();
  if (iVar1 == 1) {
    iVar1 = BIO_lookup(str,0,0,2,1,&local_30);
    if (iVar1 != 0) {
      iVar1 = BIO_ADDRINFO_family(local_30);
      if (iVar1 == 2) {
        uVar2 = BIO_ADDRINFO_address(local_30);
        iVar1 = BIO_ADDR_rawaddress(uVar2,0,&local_28);
        if ((iVar1 == 0) || (local_28 != 4)) goto LAB_00100144;
        uVar2 = BIO_ADDRINFO_address(local_30);
        iVar1 = BIO_ADDR_rawaddress(uVar2,ip,&local_28);
      }
      else {
        ERR_new();
        ERR_set_debug("crypto/bio/bio_sock.c",0x39,"BIO_get_host_ip");
        ERR_set_error(0x20,0x6b,0);
LAB_00100144:
        iVar1 = 0;
      }
      BIO_ADDRINFO_free(local_30);
      goto LAB_001000c5;
    }
    ERR_add_error_data(2,"host=",str);
  }
  iVar1 = 0;
LAB_001000c5:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int BIO_get_port(char *str,ushort *port_ptr)

{
  ushort uVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  long in_FS_OFFSET;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = 0;
  if (str == (char *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/bio/bio_sock.c",0x50,"BIO_get_port");
    ERR_set_error(0x20,0x71,0);
  }
  else {
    iVar2 = BIO_sock_init();
    if (iVar2 == 1) {
      iVar2 = BIO_lookup(0,str,0,2,1,&local_28);
      if (iVar2 != 0) {
        iVar2 = BIO_ADDRINFO_family(local_28);
        if (iVar2 == 2) {
          uVar3 = BIO_ADDRINFO_address(local_28);
          uVar1 = BIO_ADDR_rawport(uVar3);
          *port_ptr = uVar1 << 8 | uVar1 >> 8;
        }
        else {
          ERR_new();
          ERR_set_debug("crypto/bio/bio_sock.c",0x59,"BIO_get_port");
          ERR_set_error(0x20,0x8d,0);
        }
        uVar4 = (uint)(iVar2 == 2);
        BIO_ADDRINFO_free(local_28);
        goto LAB_00100221;
      }
      ERR_add_error_data(2,"host=",str);
    }
  }
  uVar4 = 0;
LAB_00100221:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void bio_sock_cleanup_int(void)

{
  return;
}



int BIO_socket_ioctl(int fd,long type,void *arg)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = ioctl(fd,type);
  if (-1 < iVar1) {
    return iVar1;
  }
  ERR_new();
  ERR_set_debug("crypto/bio/bio_sock.c",0xf6,"BIO_socket_ioctl");
  piVar2 = __errno_location();
  ERR_set_error(2,*piVar2,"calling ioctlsocket()");
  return iVar1;
}



int BIO_get_accept_socket(char *host_port,int mode)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  void *local_38;
  void *local_30;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = (void *)0x0;
  local_30 = (void *)0x0;
  local_28 = 0;
  iVar1 = BIO_parse_hostserv(host_port,&local_38,&local_30,1);
  if (iVar1 == 0) {
    iVar1 = -1;
    goto LAB_00100435;
  }
  iVar1 = BIO_sock_init();
  if (iVar1 == 1) {
    iVar1 = BIO_lookup(local_38,local_30,1,0,1,&local_28);
    if (iVar1 != 0) goto LAB_001003fc;
    uVar2 = BIO_ADDRINFO_protocol(local_28);
    uVar3 = BIO_ADDRINFO_socktype(local_28);
    uVar4 = BIO_ADDRINFO_family(local_28);
    iVar1 = BIO_socket(uVar4,uVar3,uVar2,0);
    if (iVar1 == -1) goto LAB_001003fc;
    uVar6 = BIO_ADDRINFO_address(local_28);
    iVar5 = BIO_listen(iVar1,uVar6,mode != 0);
    if (iVar5 == 0) {
      BIO_closesocket(iVar1);
      goto LAB_001003fc;
    }
  }
  else {
LAB_001003fc:
    iVar1 = -1;
  }
  BIO_ADDRINFO_free(local_28);
  CRYPTO_free(local_38);
  CRYPTO_free(local_30);
LAB_00100435:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int BIO_accept(int sock,char **ip_port)

{
  int iVar1;
  int iVar2;
  char *__s;
  char *__s_00;
  size_t sVar3;
  size_t sVar4;
  char *pcVar5;
  int *piVar6;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  undefined1 auStack_b8 [120];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = BIO_accept_ex(CONCAT44(in_register_0000003c,sock),auStack_b8,0);
  if (iVar1 == -1) {
    iVar2 = BIO_sock_should_retry(-1);
    if (iVar2 == 0) {
      ERR_new();
      ERR_set_debug("crypto/bio/bio_sock.c",0x12a,"BIO_accept");
      piVar6 = __errno_location();
      ERR_set_error(2,*piVar6,"calling accept()");
      ERR_new();
      ERR_set_debug("crypto/bio/bio_sock.c",300,"BIO_accept");
      ERR_set_error(0x20,100,0);
    }
    else {
      iVar1 = -2;
    }
    goto LAB_00100601;
  }
  if (ip_port == (char **)0x0) goto LAB_00100601;
  __s = (char *)BIO_ADDR_hostname_string(auStack_b8,1);
  __s_00 = (char *)BIO_ADDR_service_string(auStack_b8,1);
  if ((__s == (char *)0x0) || (__s_00 == (char *)0x0)) {
    *ip_port = (char *)0x0;
    ERR_new();
    ERR_set_debug("crypto/bio/bio_sock.c",0x137,"BIO_accept");
    ERR_set_error(0x20,0x80020,0);
    pcVar5 = *ip_port;
    if (pcVar5 == (char *)0x0) goto LAB_00100678;
LAB_001005b7:
    strcpy(pcVar5,__s);
    pcVar5 = *ip_port;
    sVar3 = strlen(pcVar5);
    pcVar5 = pcVar5 + sVar3;
    pcVar5[0] = ':';
    pcVar5[1] = '\0';
    strcat(*ip_port,__s_00);
  }
  else {
    sVar3 = strlen(__s);
    sVar4 = strlen(__s_00);
    pcVar5 = (char *)CRYPTO_zalloc(sVar3 + 2 + sVar4,"crypto/bio/bio_sock.c",0x134);
    *ip_port = pcVar5;
    if (pcVar5 != (char *)0x0) goto LAB_001005b7;
LAB_00100678:
    BIO_closesocket(iVar1);
    iVar1 = -1;
  }
  CRYPTO_free(__s);
  CRYPTO_free(__s_00);
LAB_00100601:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int BIO_set_tcp_ndelay(int sock,int turn_on)

{
  int iVar1;
  int local_c [3];
  
  local_c[0] = turn_on;
  iVar1 = setsockopt(sock,6,1,local_c,4);
  return (int)(iVar1 == 0);
}



int BIO_socket_nbio(int fd,int mode)

{
  int iVar1;
  long in_FS_OFFSET;
  int local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = mode;
  iVar1 = BIO_socket_ioctl(fd,0x5421,&local_14);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (int)(iVar1 == 0);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 BIO_sock_info(int param_1,int param_2,undefined8 *param_3)

{
  int iVar1;
  sockaddr *__addr;
  undefined8 uVar2;
  int *piVar3;
  long in_FS_OFFSET;
  socklen_t local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == 0) {
    local_24 = 0x70;
    __addr = (sockaddr *)BIO_ADDR_sockaddr_noconst(*param_3);
    iVar1 = getsockname(param_1,__addr,&local_24);
    if (iVar1 == -1) {
      ERR_new();
      ERR_set_debug("crypto/bio/bio_sock.c",0x198,"BIO_sock_info");
      piVar3 = __errno_location();
      ERR_set_error(2,*piVar3,"calling getsockname()");
      ERR_new();
      ERR_set_debug("crypto/bio/bio_sock.c",0x19a,"BIO_sock_info");
      ERR_set_error(0x20,0x84,0);
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
      if (0x70 < local_24) {
        ERR_new();
        ERR_set_debug("crypto/bio/bio_sock.c",0x19e,"BIO_sock_info");
        ERR_set_error(0x20,0x85,0);
        uVar2 = 0;
      }
    }
  }
  else {
    ERR_new();
    ERR_set_debug("crypto/bio/bio_sock.c",0x1a4,"BIO_sock_info");
    ERR_set_error(0x20,0x8c,0);
    uVar2 = 0;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int BIO_socket_wait(int param_1,int param_2,long param_3)

{
  int iVar1;
  time_t tVar2;
  long in_FS_OFFSET;
  pollfd local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 < 0) {
    iVar1 = -1;
  }
  else {
    iVar1 = 1;
    if (param_3 != 0) {
      tVar2 = time((time_t *)0x0);
      iVar1 = 0;
      if (tVar2 <= param_3) {
        local_28.events = (-(ushort)(param_2 == 0) & 3) + 1;
        local_28.fd = param_1;
        iVar1 = poll(&local_28,1,((int)param_3 - (int)tVar2) * 1000);
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


