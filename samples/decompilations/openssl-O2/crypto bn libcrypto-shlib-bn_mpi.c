
int BN_bn2mpi(BIGNUM *a,uchar *to)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar1 = BN_num_bits(a);
  iVar5 = uVar1 + 0xe;
  if (-1 < (int)(uVar1 + 7)) {
    iVar5 = uVar1 + 7;
  }
  uVar4 = iVar5 >> 3;
  if ((int)uVar1 < 1) {
    if (to == (uchar *)0x0) {
      uVar3 = 0;
      goto LAB_00100092;
    }
    *(uint *)to = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
  }
  else {
    uVar3 = (uint)((uVar1 & 7) == 0);
    if (to == (uchar *)0x0) {
LAB_00100092:
      return uVar3 + 4 + uVar4;
    }
    uVar4 = uVar4 + uVar3;
    *(uint *)to = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                  uVar4 * 0x1000000;
    if ((uVar1 & 7) == 0) {
      to[4] = '\0';
      iVar5 = 1;
      goto LAB_00100049;
    }
  }
  iVar5 = 0;
LAB_00100049:
  iVar2 = BN_bn2bin(a,to + (iVar5 + 4));
  if (a->neg != 0) {
    to[4] = to[4] | 0x80;
  }
  return iVar2 + 4 + iVar5;
}



BIGNUM * BN_mpi2bn(uchar *s,int len,BIGNUM *ret)

{
  uchar uVar1;
  int iVar2;
  BIGNUM *pBVar3;
  BIGNUM *ret_00;
  uint uVar4;
  
  if ((len < 4) || ((char)*s < '\0')) {
    ERR_new();
    ERR_set_debug("crypto/bn/bn_mpi.c",0x31,__func___0);
    ERR_set_error(3,0x6a,0);
  }
  else {
    uVar4 = *(uint *)s;
    uVar4 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
    if ((ulong)uVar4 + 4 == (long)len) {
      ret_00 = ret;
      if ((ret != (BIGNUM *)0x0) || (ret_00 = BN_new(), ret_00 != (BIGNUM *)0x0)) {
        if ((ulong)uVar4 == 0) {
          ret_00->neg = 0;
          ret_00->top = 0;
          return ret_00;
        }
        uVar1 = s[4];
        pBVar3 = BN_bin2bn(s + 4,uVar4,ret_00);
        if (pBVar3 != (BIGNUM *)0x0) {
          ret_00->neg = (uint)(int)(char)uVar1 >> 0x1f;
          if (-1 < (char)uVar1) {
            return ret_00;
          }
          iVar2 = BN_num_bits(ret_00);
          BN_clear_bit(ret_00,iVar2 + -1);
          return ret_00;
        }
        if (ret == (BIGNUM *)0x0) {
          BN_free(ret_00);
        }
      }
    }
    else {
      ERR_new();
      ERR_set_debug("crypto/bn/bn_mpi.c",0x37,__func___0);
      ERR_set_error(3,0x68,0);
    }
  }
  return (BIGNUM *)0x0;
}


