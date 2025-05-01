
int RSA_padding_add_X931(uchar *to,int tlen,uchar *f,int fl)

{
  void *pvVar1;
  uchar *__s;
  int iVar2;
  
  iVar2 = (tlen - fl) + -2;
  if (-1 < iVar2) {
    __s = to + 1;
    if (iVar2 == 0) {
      *to = 'j';
    }
    else {
      *to = 'k';
      if (iVar2 != 1) {
        memset(__s,0xbb,(long)((tlen - fl) + -3));
        __s = to + iVar2;
      }
      *__s = 0xba;
      __s = __s + 1;
    }
    pvVar1 = memcpy(__s,f,(ulong)(uint)fl);
    *(undefined1 *)((long)pvVar1 + (long)fl) = 0xcc;
    return 1;
  }
  ERR_new();
  ERR_set_debug("crypto/rsa/rsa_x931.c",0x38,"RSA_padding_add_X931");
  ERR_set_error(4,0x6e,0);
  return -1;
}



int RSA_padding_check_X931(uchar *to,int tlen,uchar *f,int fl,int rsa_len)

{
  uchar uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_register_00000034;
  uchar *__src;
  undefined8 uVar5;
  
  if ((rsa_len != fl) || (1 < (byte)(*f + 0x96))) {
    ERR_new(to,CONCAT44(in_register_00000034,tlen));
    ERR_set_debug("crypto/rsa/rsa_x931.c",0x57,"RSA_padding_check_X931");
    ERR_set_error(4,0x89,0);
    return -1;
  }
  __src = f + 1;
  uVar3 = rsa_len - 2;
  if (*f == 'k') {
    iVar4 = rsa_len + -3;
    if (iVar4 < 1) {
LAB_00100136:
      ERR_new();
      uVar5 = 0x6a;
LAB_00100161:
      ERR_set_debug("crypto/rsa/rsa_x931.c",uVar5,"RSA_padding_check_X931");
      ERR_set_error(4,0x8a,0);
      return -1;
    }
    iVar2 = 0;
    do {
      uVar1 = *__src;
      __src = __src + 1;
      if (uVar1 == 0xba) {
        uVar3 = iVar4 - iVar2;
        if (iVar2 != 0) goto LAB_001000e9;
        goto LAB_00100136;
      }
      if (uVar1 != 0xbb) {
        ERR_new();
        uVar5 = 0x62;
        goto LAB_00100161;
      }
      iVar2 = iVar2 + 1;
    } while (iVar4 != iVar2);
    uVar3 = 0;
  }
LAB_001000e9:
  if (__src[(int)uVar3] != 0xcc) {
    ERR_new();
    ERR_set_debug("crypto/rsa/rsa_x931.c",0x73,"RSA_padding_check_X931");
    ERR_set_error(4,0x8b,0);
    return -1;
  }
  memcpy(to,__src,(ulong)uVar3);
  return uVar3;
}



int RSA_X931_hash_id(int nid)

{
  int iVar1;
  
  if (nid == 0x2a1) {
    iVar1 = 0x36;
  }
  else {
    if (0x2a1 < nid) {
      iVar1 = -1;
      if (nid == 0x2a2) {
        iVar1 = 0x35;
      }
      return iVar1;
    }
    iVar1 = 0x33;
    if (nid != 0x40) {
      iVar1 = -1;
      if (nid == 0x2a0) {
        iVar1 = 0x34;
      }
      return iVar1;
    }
  }
  return iVar1;
}


