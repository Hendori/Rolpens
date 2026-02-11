
undefined8
bnrand_range_constprop_1(BIGNUM *param_1,BIGNUM *param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  BIGNUM *pBVar4;
  undefined8 uVar5;
  byte *s;
  int iVar6;
  long lVar7;
  
  if (param_1 == (BIGNUM *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/bn/bn_rand.c",0x8a,"bnrand_range");
    ERR_set_error(3,0xc0102,0);
    return 0;
  }
  if ((param_2->neg != 0) || (iVar1 = BN_is_zero(param_2), iVar1 != 0)) {
    ERR_new();
    ERR_set_debug("crypto/bn/bn_rand.c",0x8f,"bnrand_range");
    ERR_set_error(3,0x73,0);
    return 0;
  }
  iVar1 = BN_num_bits(param_2);
  if (iVar1 == 1) {
    BN_zero_ex(param_1);
    return 1;
  }
  iVar2 = BN_is_bit_set(param_2,iVar1 + -2);
  if ((iVar2 == 0) && (iVar2 = BN_is_bit_set(param_2,iVar1 + -3), iVar2 == 0)) {
    if (iVar1 == -1) {
      iVar1 = 100;
      while( true ) {
        ossl_bn_get_libctx(param_4);
        BN_zero_ex(param_1);
        iVar2 = BN_cmp(param_1,param_2);
        if (-1 < iVar2) {
          iVar2 = BN_sub(param_1,param_1,param_2);
          if (iVar2 == 0) {
            return 0;
          }
          iVar2 = BN_cmp(param_1,param_2);
          if ((-1 < iVar2) && (iVar2 = BN_sub(param_1,param_1,param_2), iVar2 == 0)) {
            return 0;
          }
        }
        iVar1 = iVar1 + -1;
        if (iVar1 == 0) break;
        iVar2 = BN_cmp(param_1,param_2);
        if (iVar2 < 0) {
          return 1;
        }
      }
LAB_0010049b:
      ERR_new();
      uVar5 = 0xb2;
LAB_00100281:
      ERR_set_debug("crypto/bn/bn_rand.c",uVar5,"bnrand_range");
      ERR_set_error(3,0x71,0);
      return 0;
    }
    if (-1 < iVar1 + 1) {
      iVar6 = 100;
      iVar2 = iVar1 + 8 >> 3;
      lVar7 = (long)iVar2;
      while( true ) {
        uVar5 = ossl_bn_get_libctx(param_4);
        s = (byte *)CRYPTO_malloc(iVar2,"crypto/bn/bn_rand.c",0x2b);
        if (s == (byte *)0x0) {
          CRYPTO_clear_free(0,lVar7,"crypto/bn/bn_rand.c",0x5b);
          return 0;
        }
        iVar3 = RAND_bytes_ex(uVar5,s,lVar7,param_3);
        if (iVar3 < 1) {
          CRYPTO_clear_free(s,lVar7,"crypto/bn/bn_rand.c",0x5b);
          return 0;
        }
        *s = *s & ~(byte)(0xff << ((byte)iVar1 & 7) + 1);
        pBVar4 = BN_bin2bn(s,iVar2,param_1);
        if (pBVar4 == (BIGNUM *)0x0) break;
        CRYPTO_clear_free(s,lVar7,"crypto/bn/bn_rand.c",0x5b);
        iVar3 = BN_cmp(param_1,param_2);
        if (-1 < iVar3) {
          iVar3 = BN_sub(param_1,param_1,param_2);
          if (iVar3 == 0) {
            return 0;
          }
          iVar3 = BN_cmp(param_1,param_2);
          if ((-1 < iVar3) && (iVar3 = BN_sub(param_1,param_1,param_2), iVar3 == 0)) {
            return 0;
          }
        }
        iVar6 = iVar6 + -1;
        if (iVar6 == 0) goto LAB_0010049b;
        iVar3 = BN_cmp(param_1,param_2);
        if (iVar3 < 0) {
          return 1;
        }
      }
LAB_00100199:
      CRYPTO_clear_free(s,lVar7,"crypto/bn/bn_rand.c",0x5b);
      return 0;
    }
  }
  else {
    if (iVar1 == 0) {
      iVar1 = 100;
      while( true ) {
        ossl_bn_get_libctx(param_4);
        BN_zero_ex(param_1);
        iVar1 = iVar1 + -1;
        if (iVar1 == 0) break;
        iVar2 = BN_cmp(param_1,param_2);
        if (iVar2 < 0) {
          return 1;
        }
      }
LAB_00100270:
      ERR_new();
      uVar5 = 0xc0;
      goto LAB_00100281;
    }
    if (-1 < iVar1) {
      iVar6 = 100;
      iVar2 = iVar1 + 7 >> 3;
      lVar7 = (long)iVar2;
      while( true ) {
        uVar5 = ossl_bn_get_libctx(param_4);
        s = (byte *)CRYPTO_malloc(iVar2,"crypto/bn/bn_rand.c",0x2b);
        if (s == (byte *)0x0) {
          CRYPTO_clear_free(0,lVar7,"crypto/bn/bn_rand.c",0x5b);
          return 0;
        }
        iVar3 = RAND_bytes_ex(uVar5,s,lVar7,param_3);
        if (iVar3 < 1) break;
        *s = *s & ~(byte)(0xff << ((byte)iVar1 - 1 & 7) + 1);
        pBVar4 = BN_bin2bn(s,iVar2,param_1);
        if (pBVar4 == (BIGNUM *)0x0) break;
        CRYPTO_clear_free(s,lVar7,"crypto/bn/bn_rand.c",0x5b);
        iVar6 = iVar6 + -1;
        if (iVar6 == 0) goto LAB_00100270;
        iVar3 = BN_cmp(param_1,param_2);
        if (iVar3 < 0) {
          return 1;
        }
      }
      goto LAB_00100199;
    }
  }
  ossl_bn_get_libctx(param_4);
  ERR_new();
  ERR_set_debug("crypto/bn/bn_rand.c",0x60,"bnrand");
  ERR_set_error(3,0x76,0);
  return 0;
}



undefined8
bnrand_range_constprop_0(BIGNUM *param_1,BIGNUM *param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  BIGNUM *pBVar4;
  undefined8 uVar5;
  byte *s;
  int iVar6;
  long lVar7;
  
  if (param_1 == (BIGNUM *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/bn/bn_rand.c",0x8a,"bnrand_range");
    ERR_set_error(3,0xc0102,0);
    return 0;
  }
  if ((param_2->neg != 0) || (iVar1 = BN_is_zero(param_2), iVar1 != 0)) {
    ERR_new();
    ERR_set_debug("crypto/bn/bn_rand.c",0x8f,"bnrand_range");
    ERR_set_error(3,0x73,0);
    return 0;
  }
  iVar1 = BN_num_bits(param_2);
  if (iVar1 == 1) {
    BN_zero_ex(param_1);
    return 1;
  }
  iVar2 = BN_is_bit_set(param_2,iVar1 + -2);
  if ((iVar2 == 0) && (iVar2 = BN_is_bit_set(param_2,iVar1 + -3), iVar2 == 0)) {
    if (iVar1 == -1) {
      iVar1 = 100;
      while( true ) {
        ossl_bn_get_libctx(param_4);
        BN_zero_ex(param_1);
        iVar2 = BN_cmp(param_1,param_2);
        if (-1 < iVar2) {
          iVar2 = BN_sub(param_1,param_1,param_2);
          if (iVar2 == 0) {
            return 0;
          }
          iVar2 = BN_cmp(param_1,param_2);
          if ((-1 < iVar2) && (iVar2 = BN_sub(param_1,param_1,param_2), iVar2 == 0)) {
            return 0;
          }
        }
        iVar1 = iVar1 + -1;
        if (iVar1 == 0) break;
        iVar2 = BN_cmp(param_1,param_2);
        if (iVar2 < 0) {
          return 1;
        }
      }
LAB_0010097b:
      ERR_new();
      uVar5 = 0xb2;
LAB_00100761:
      ERR_set_debug("crypto/bn/bn_rand.c",uVar5,"bnrand_range");
      ERR_set_error(3,0x71,0);
      return 0;
    }
    if (-1 < iVar1 + 1) {
      iVar6 = 100;
      iVar2 = iVar1 + 8 >> 3;
      lVar7 = (long)iVar2;
      while( true ) {
        uVar5 = ossl_bn_get_libctx(param_4);
        s = (byte *)CRYPTO_malloc(iVar2,"crypto/bn/bn_rand.c",0x2b);
        if (s == (byte *)0x0) {
          CRYPTO_clear_free(0,lVar7,"crypto/bn/bn_rand.c",0x5b);
          return 0;
        }
        iVar3 = RAND_priv_bytes_ex(uVar5,s,lVar7,param_3);
        if (iVar3 < 1) {
          CRYPTO_clear_free(s,lVar7,"crypto/bn/bn_rand.c",0x5b);
          return 0;
        }
        *s = *s & ~(byte)(0xff << ((byte)iVar1 & 7) + 1);
        pBVar4 = BN_bin2bn(s,iVar2,param_1);
        if (pBVar4 == (BIGNUM *)0x0) break;
        CRYPTO_clear_free(s,lVar7,"crypto/bn/bn_rand.c",0x5b);
        iVar3 = BN_cmp(param_1,param_2);
        if (-1 < iVar3) {
          iVar3 = BN_sub(param_1,param_1,param_2);
          if (iVar3 == 0) {
            return 0;
          }
          iVar3 = BN_cmp(param_1,param_2);
          if ((-1 < iVar3) && (iVar3 = BN_sub(param_1,param_1,param_2), iVar3 == 0)) {
            return 0;
          }
        }
        iVar6 = iVar6 + -1;
        if (iVar6 == 0) goto LAB_0010097b;
        iVar3 = BN_cmp(param_1,param_2);
        if (iVar3 < 0) {
          return 1;
        }
      }
LAB_00100679:
      CRYPTO_clear_free(s,lVar7,"crypto/bn/bn_rand.c",0x5b);
      return 0;
    }
  }
  else {
    if (iVar1 == 0) {
      iVar1 = 100;
      while( true ) {
        ossl_bn_get_libctx(param_4);
        BN_zero_ex(param_1);
        iVar1 = iVar1 + -1;
        if (iVar1 == 0) break;
        iVar2 = BN_cmp(param_1,param_2);
        if (iVar2 < 0) {
          return 1;
        }
      }
LAB_00100750:
      ERR_new();
      uVar5 = 0xc0;
      goto LAB_00100761;
    }
    if (-1 < iVar1) {
      iVar6 = 100;
      iVar2 = iVar1 + 7 >> 3;
      lVar7 = (long)iVar2;
      while( true ) {
        uVar5 = ossl_bn_get_libctx(param_4);
        s = (byte *)CRYPTO_malloc(iVar2,"crypto/bn/bn_rand.c",0x2b);
        if (s == (byte *)0x0) {
          CRYPTO_clear_free(0,lVar7,"crypto/bn/bn_rand.c",0x5b);
          return 0;
        }
        iVar3 = RAND_priv_bytes_ex(uVar5,s,lVar7,param_3);
        if (iVar3 < 1) break;
        *s = *s & ~(byte)(0xff << ((byte)iVar1 - 1 & 7) + 1);
        pBVar4 = BN_bin2bn(s,iVar2,param_1);
        if (pBVar4 == (BIGNUM *)0x0) break;
        CRYPTO_clear_free(s,lVar7,"crypto/bn/bn_rand.c",0x5b);
        iVar6 = iVar6 + -1;
        if (iVar6 == 0) goto LAB_00100750;
        iVar3 = BN_cmp(param_1,param_2);
        if (iVar3 < 0) {
          return 1;
        }
      }
      goto LAB_00100679;
    }
  }
  ossl_bn_get_libctx(param_4);
  ERR_new();
  ERR_set_debug("crypto/bn/bn_rand.c",0x60,"bnrand");
  ERR_set_error(3,0x76,0);
  return 0;
}



bool BN_rand_ex(BIGNUM *param_1,int param_2,int param_3,int param_4,undefined4 param_5,
               undefined8 param_6)

{
  int num;
  int iVar1;
  undefined8 uVar2;
  byte *s;
  BIGNUM *pBVar3;
  sbyte sVar4;
  byte bVar5;
  uint uVar6;
  long lVar7;
  bool bVar8;
  
  uVar2 = ossl_bn_get_libctx(param_6);
  if (param_2 == 0) {
    if ((param_3 == -1) && (param_4 == 0)) {
      BN_zero_ex(param_1);
      return true;
    }
LAB_001009f9:
    ERR_new();
    ERR_set_debug("crypto/bn/bn_rand.c",0x60,"bnrand");
    ERR_set_error(3,0x76,0);
    return false;
  }
  if ((param_2 < 0) || ((param_2 == 1 && (0 < param_3)))) goto LAB_001009f9;
  num = param_2 + 7 >> 3;
  lVar7 = (long)num;
  s = (byte *)CRYPTO_malloc(num,"crypto/bn/bn_rand.c",0x2b);
  if (s != (byte *)0x0) {
    iVar1 = RAND_bytes_ex(uVar2,s,lVar7,param_5);
    if (0 < iVar1) {
      uVar6 = param_2 - 1U & 7;
      sVar4 = (sbyte)uVar6;
      if (param_3 < 0) {
        bVar5 = *s;
      }
      else if (param_3 == 0) {
        bVar5 = (byte)(1 << sVar4) | *s;
      }
      else if (uVar6 == 0) {
        s[1] = s[1] | 0x80;
        bVar5 = 1;
      }
      else {
        bVar5 = (byte)(3 << (sVar4 - 1U & 0x1f)) | *s;
      }
      *s = ~(byte)(0xff << sVar4 + 1) & bVar5;
      if (param_4 != 0) {
        s[lVar7 + -1] = s[lVar7 + -1] | 1;
      }
      pBVar3 = BN_bin2bn(s,num,param_1);
      bVar8 = pBVar3 != (BIGNUM *)0x0;
      goto LAB_00100b30;
    }
  }
  bVar8 = false;
LAB_00100b30:
  CRYPTO_clear_free(s,lVar7,"crypto/bn/bn_rand.c",0x5b);
  return bVar8;
}



int BN_rand(BIGNUM *rnd,int bits,int top,int bottom)

{
  int num;
  int iVar1;
  undefined8 uVar2;
  byte *s;
  BIGNUM *pBVar3;
  sbyte sVar4;
  byte bVar5;
  uint uVar6;
  long lVar7;
  
  uVar2 = ossl_bn_get_libctx(0);
  if (bits == 0) {
    if ((top == -1) && (bottom == 0)) {
      BN_zero_ex(rnd);
      return 1;
    }
LAB_00100bc5:
    ERR_new();
    ERR_set_debug("crypto/bn/bn_rand.c",0x60,"bnrand");
    ERR_set_error(3,0x76,0);
    return 0;
  }
  if ((bits < 0) || ((bits == 1 && (0 < top)))) goto LAB_00100bc5;
  num = bits + 7 >> 3;
  lVar7 = (long)num;
  s = (byte *)CRYPTO_malloc(num,"crypto/bn/bn_rand.c",0x2b);
  if (s != (byte *)0x0) {
    iVar1 = RAND_bytes_ex(uVar2,s,lVar7,0);
    if (0 < iVar1) {
      uVar6 = bits - 1U & 7;
      sVar4 = (sbyte)uVar6;
      if (top < 0) {
        bVar5 = *s;
      }
      else if (top == 0) {
        bVar5 = (byte)(1 << sVar4) | *s;
      }
      else if (uVar6 == 0) {
        s[1] = s[1] | 0x80;
        bVar5 = 1;
      }
      else {
        bVar5 = (byte)(3 << (sVar4 - 1U & 0x1f)) | *s;
      }
      *s = ~(byte)(0xff << sVar4 + 1) & bVar5;
      if (bottom != 0) {
        s[lVar7 + -1] = s[lVar7 + -1] | 1;
      }
      pBVar3 = BN_bin2bn(s,num,rnd);
      uVar6 = (uint)(pBVar3 != (BIGNUM *)0x0);
      goto LAB_00100ce8;
    }
  }
  uVar6 = 0;
LAB_00100ce8:
  CRYPTO_clear_free(s,lVar7,"crypto/bn/bn_rand.c",0x5b);
  return uVar6;
}



int BN_bntest_rand(BIGNUM *rnd,int bits,int top,int bottom)

{
  long lVar1;
  int num;
  int iVar2;
  undefined8 uVar3;
  byte *s;
  BIGNUM *pBVar4;
  sbyte sVar5;
  byte bVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long in_FS_OFFSET;
  byte local_41;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = ossl_bn_get_libctx(0);
  if (bits == 0) {
    if ((top == -1) && (bottom == 0)) {
      BN_zero_ex(rnd);
      uVar7 = 1;
      goto LAB_00100dd2;
    }
  }
  else if ((-1 < bits) && ((bits != 1 || (top < 1)))) {
    num = bits + 7 >> 3;
    lVar9 = (long)num;
    s = (byte *)CRYPTO_malloc(num,"crypto/bn/bn_rand.c",0x2b);
    if ((s == (byte *)0x0) || (iVar2 = RAND_priv_bytes_ex(uVar3,s,lVar9,0), iVar2 < 1)) {
LAB_00100f40:
      uVar7 = 0;
    }
    else {
      lVar1 = 0;
      do {
        lVar8 = lVar1;
        iVar2 = RAND_bytes_ex(uVar3,&local_41,1,0);
        if (iVar2 < 1) goto LAB_00100f40;
        if ((char)local_41 < '\0') {
          if (lVar8 != 0) {
            s[lVar8] = s[lVar8 + -1];
          }
        }
        else if (local_41 < 0x2a) {
          s[lVar8] = 0;
        }
        else if (local_41 < 0x54) {
          s[lVar8] = 0xff;
        }
        lVar1 = lVar8 + 1;
      } while (lVar9 != lVar8 + 1);
      uVar7 = bits - 1U & 7;
      sVar5 = (sbyte)uVar7;
      if (top < 0) {
        bVar6 = *s;
      }
      else if (top == 0) {
        bVar6 = (byte)(1 << sVar5) | *s;
      }
      else if (uVar7 == 0) {
        s[1] = s[1] | 0x80;
        bVar6 = 1;
      }
      else {
        bVar6 = (byte)(3 << (sVar5 - 1U & 0x1f)) | *s;
      }
      *s = ~(byte)(0xff << sVar5 + 1) & bVar6;
      if (bottom != 0) {
        s[lVar8] = s[lVar8] | 1;
      }
      pBVar4 = BN_bin2bn(s,num,rnd);
      uVar7 = (uint)(pBVar4 != (BIGNUM *)0x0);
    }
    CRYPTO_clear_free(s,lVar9,"crypto/bn/bn_rand.c",0x5b);
    goto LAB_00100dd2;
  }
  ERR_new();
  ERR_set_debug("crypto/bn/bn_rand.c",0x60,"bnrand");
  ERR_set_error(3,0x76,0);
  uVar7 = 0;
LAB_00100dd2:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}



bool BN_priv_rand_ex(BIGNUM *param_1,int param_2,int param_3,int param_4,undefined4 param_5,
                    undefined8 param_6)

{
  int num;
  int iVar1;
  undefined8 uVar2;
  byte *s;
  BIGNUM *pBVar3;
  sbyte sVar4;
  byte bVar5;
  uint uVar6;
  long lVar7;
  bool bVar8;
  
  uVar2 = ossl_bn_get_libctx(param_6);
  if (param_2 == 0) {
    if ((param_3 == -1) && (param_4 == 0)) {
      BN_zero_ex(param_1);
      return true;
    }
LAB_00100fe9:
    ERR_new();
    ERR_set_debug("crypto/bn/bn_rand.c",0x60,"bnrand");
    ERR_set_error(3,0x76,0);
    return false;
  }
  if ((param_2 < 0) || ((param_2 == 1 && (0 < param_3)))) goto LAB_00100fe9;
  num = param_2 + 7 >> 3;
  lVar7 = (long)num;
  s = (byte *)CRYPTO_malloc(num,"crypto/bn/bn_rand.c",0x2b);
  if (s != (byte *)0x0) {
    iVar1 = RAND_priv_bytes_ex(uVar2,s,lVar7,param_5);
    if (0 < iVar1) {
      uVar6 = param_2 - 1U & 7;
      sVar4 = (sbyte)uVar6;
      if (param_3 < 0) {
        bVar5 = *s;
      }
      else if (param_3 == 0) {
        bVar5 = (byte)(1 << sVar4) | *s;
      }
      else if (uVar6 == 0) {
        s[1] = s[1] | 0x80;
        bVar5 = 1;
      }
      else {
        bVar5 = (byte)(3 << (sVar4 - 1U & 0x1f)) | *s;
      }
      *s = ~(byte)(0xff << sVar4 + 1) & bVar5;
      if (param_4 != 0) {
        s[lVar7 + -1] = s[lVar7 + -1] | 1;
      }
      pBVar3 = BN_bin2bn(s,num,param_1);
      bVar8 = pBVar3 != (BIGNUM *)0x0;
      goto LAB_00101120;
    }
  }
  bVar8 = false;
LAB_00101120:
  CRYPTO_clear_free(s,lVar7,"crypto/bn/bn_rand.c",0x5b);
  return bVar8;
}



bool BN_priv_rand(BIGNUM *param_1,int param_2,int param_3,int param_4)

{
  int num;
  int iVar1;
  undefined8 uVar2;
  byte *s;
  BIGNUM *pBVar3;
  sbyte sVar4;
  byte bVar5;
  uint uVar6;
  long lVar7;
  bool bVar8;
  
  uVar2 = ossl_bn_get_libctx(0);
  if (param_2 == 0) {
    if ((param_3 == -1) && (param_4 == 0)) {
      BN_zero_ex(param_1);
      return true;
    }
LAB_001011b5:
    ERR_new();
    ERR_set_debug("crypto/bn/bn_rand.c",0x60,"bnrand");
    ERR_set_error(3,0x76,0);
    return false;
  }
  if ((param_2 < 0) || ((param_2 == 1 && (0 < param_3)))) goto LAB_001011b5;
  num = param_2 + 7 >> 3;
  lVar7 = (long)num;
  s = (byte *)CRYPTO_malloc(num,"crypto/bn/bn_rand.c",0x2b);
  if (s != (byte *)0x0) {
    iVar1 = RAND_priv_bytes_ex(uVar2,s,lVar7,0);
    if (0 < iVar1) {
      uVar6 = param_2 - 1U & 7;
      sVar4 = (sbyte)uVar6;
      if (param_3 < 0) {
        bVar5 = *s;
      }
      else if (param_3 == 0) {
        bVar5 = (byte)(1 << sVar4) | *s;
      }
      else if (uVar6 == 0) {
        s[1] = s[1] | 0x80;
        bVar5 = 1;
      }
      else {
        bVar5 = (byte)(3 << (sVar4 - 1U & 0x1f)) | *s;
      }
      *s = ~(byte)(0xff << sVar4 + 1) & bVar5;
      if (param_4 != 0) {
        s[lVar7 + -1] = s[lVar7 + -1] | 1;
      }
      pBVar3 = BN_bin2bn(s,num,param_1);
      bVar8 = pBVar3 != (BIGNUM *)0x0;
      goto LAB_001012d8;
    }
  }
  bVar8 = false;
LAB_001012d8:
  CRYPTO_clear_free(s,lVar7,"crypto/bn/bn_rand.c",0x5b);
  return bVar8;
}



void BN_rand_range_ex(void)

{
  bnrand_range_constprop_1();
  return;
}



int BN_rand_range(BIGNUM *rnd,BIGNUM *range)

{
  int iVar1;
  
  iVar1 = bnrand_range_constprop_1(rnd,range,0,0);
  return iVar1;
}



void BN_priv_rand_range_ex(void)

{
  bnrand_range_constprop_0();
  return;
}



void BN_priv_rand_range(undefined8 param_1,undefined8 param_2)

{
  bnrand_range_constprop_0(param_1,param_2,0,0);
  return;
}



int BN_pseudo_rand(BIGNUM *rnd,int bits,int top,int bottom)

{
  int iVar1;
  
  iVar1 = BN_rand(rnd,bits,top,bottom);
  return iVar1;
}



int BN_pseudo_rand_range(BIGNUM *rnd,BIGNUM *range)

{
  int iVar1;
  
  iVar1 = BN_rand_range(rnd,range);
  return iVar1;
}



undefined8
ossl_bn_priv_rand_range_fixed_top
          (BIGNUM *param_1,BIGNUM *param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  BIGNUM *pBVar3;
  undefined8 uVar4;
  byte *s;
  byte bVar5;
  int num;
  long lVar6;
  int iVar7;
  
  if (param_1 == (BIGNUM *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/bn/bn_rand.c",0xf8,"ossl_bn_priv_rand_range_fixed_top");
    ERR_set_error(3,0xc0102,0);
  }
  else {
    if ((param_2->neg == 0) && (iVar1 = BN_is_zero(param_2), iVar1 == 0)) {
      iVar1 = BN_num_bits(param_2);
      if (iVar1 == 1) {
        BN_zero_ex(param_1);
      }
      else {
        BN_set_flags(param_1,4);
        if (iVar1 < 0) {
          ossl_bn_get_libctx(param_4);
          ERR_new();
          ERR_set_debug("crypto/bn/bn_rand.c",0x60,"bnrand");
          ERR_set_error(3,0x76,0);
          return 0;
        }
        bVar5 = (byte)iVar1 & 7;
        num = iVar1 + 8 >> 3;
        lVar6 = (long)num;
        iVar7 = 100;
        do {
          uVar4 = ossl_bn_get_libctx(param_4);
          s = (byte *)CRYPTO_malloc(num,"crypto/bn/bn_rand.c",0x2b);
          if (s == (byte *)0x0) {
            CRYPTO_clear_free(0,lVar6,"crypto/bn/bn_rand.c",0x5b);
            return 0;
          }
          iVar2 = RAND_priv_bytes_ex(uVar4,s,lVar6,param_3);
          if (iVar2 < 1) {
LAB_001015c5:
            CRYPTO_clear_free(s,lVar6,"crypto/bn/bn_rand.c",0x5b);
            return 0;
          }
          *s = ((byte)(1 << bVar5) | *s) & ~(byte)(0xff << bVar5 + 1);
          pBVar3 = BN_bin2bn(s,num,param_1);
          if (pBVar3 == (BIGNUM *)0x0) goto LAB_001015c5;
          CRYPTO_clear_free(s,lVar6,"crypto/bn/bn_rand.c",0x5b);
          iVar7 = iVar7 + -1;
          if (iVar7 == 0) {
            ERR_new();
            ERR_set_debug("crypto/bn/bn_rand.c",0x10f,"ossl_bn_priv_rand_range_fixed_top");
            ERR_set_error(3,0x71,0);
            return 0;
          }
          ossl_bn_mask_bits_fixed_top(param_1,iVar1);
          iVar2 = BN_ucmp(param_1,param_2);
        } while (-1 < iVar2);
      }
      return 1;
    }
    ERR_new();
    ERR_set_debug("crypto/bn/bn_rand.c",0xfd,"ossl_bn_priv_rand_range_fixed_top");
    ERR_set_error(3,0x73,0);
  }
  return 0;
}



undefined4
ossl_bn_gen_dsa_nonce_fixed_top
          (BIGNUM *param_1,BIGNUM *param_2,undefined8 param_3,void *param_4,size_t param_5,
          undefined8 param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  EVP_MD_CTX *ctx;
  undefined8 uVar5;
  uchar *s;
  uchar *puVar6;
  BIGNUM *pBVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  uint num;
  undefined4 uVar11;
  uint uVar12;
  long in_FS_OFFSET;
  EVP_MD *local_190;
  undefined1 *local_188;
  int local_13c;
  char local_129;
  undefined1 local_128 [56];
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined1 local_a8 [104];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
  iVar2 = BN_num_bits(param_2);
  iVar3 = iVar2 + 0xe;
  if (-1 < iVar2 + 7) {
    iVar3 = iVar2 + 7;
  }
  uVar5 = ossl_bn_get_libctx(param_6);
  num = (iVar3 >> 3) + 1;
  if (ctx == (EVP_MD_CTX *)0x0) {
    s = (uchar *)0x0;
    uVar11 = 0;
    local_190 = (EVP_MD *)0x0;
  }
  else {
    s = (uchar *)CRYPTO_malloc(num,"crypto/bn/bn_rand.c",0x140);
    if (s == (uchar *)0x0) {
      uVar11 = 0;
      local_190 = (EVP_MD *)0x0;
    }
    else {
      *s = 0xff;
      iVar3 = BN_bn2binpad(param_3,local_a8,0x60);
      if (iVar3 < 0) {
        ERR_new();
        uVar11 = 0;
        ERR_set_debug("crypto/bn/bn_rand.c",0x14d,"ossl_bn_gen_dsa_nonce_fixed_top");
        ERR_set_error(3,0x75,0);
        local_190 = (EVP_MD *)0x0;
      }
      else {
        local_190 = (EVP_MD *)EVP_MD_fetch(uVar5,"SHA512",0);
        local_13c = 0x40;
        if (local_190 == (EVP_MD *)0x0) {
          ERR_new();
          uVar11 = 0;
          ERR_set_debug("crypto/bn/bn_rand.c",0x153,"ossl_bn_gen_dsa_nonce_fixed_top");
          ERR_set_error(3,0x78,0);
        }
        else {
          do {
            local_129 = '\0';
            if (1 < num) {
              uVar12 = 1;
              do {
                iVar3 = RAND_priv_bytes_ex(uVar5,local_128,0x40,0);
                if ((((iVar3 < 1) ||
                     (iVar3 = EVP_DigestInit_ex(ctx,local_190,(ENGINE *)0x0), iVar3 == 0)) ||
                    (iVar3 = EVP_DigestUpdate(ctx,&local_129,1), iVar3 == 0)) ||
                   (((iVar3 = EVP_DigestUpdate(ctx,local_a8,0x60), iVar3 == 0 ||
                     (iVar3 = EVP_DigestUpdate(ctx,param_4,param_5), iVar3 == 0)) ||
                    ((iVar3 = EVP_DigestUpdate(ctx,local_128,0x40), iVar3 == 0 ||
                     (iVar3 = EVP_DigestFinal_ex(ctx,(uchar *)&local_e8,(uint *)0x0), iVar3 == 0))))
                   )) goto LAB_001018e0;
                uVar1 = num - uVar12;
                if (0x40 < num - uVar12) {
                  uVar1 = 0x40;
                }
                puVar6 = s + uVar12;
                if (uVar1 < 8) {
                  if ((uVar1 & 4) == 0) {
                    if (uVar1 != 0) {
                      *puVar6 = (uchar)local_e8;
                      if ((uVar1 & 2) != 0) {
                        *(undefined2 *)(puVar6 + ((ulong)uVar1 - 2)) =
                             *(undefined2 *)((long)&uStack_f0 + (ulong)uVar1 + 6);
                      }
                    }
                  }
                  else {
                    *(undefined4 *)puVar6 = (undefined4)local_e8;
                    *(undefined4 *)(puVar6 + ((ulong)uVar1 - 4)) =
                         *(undefined4 *)((long)&uStack_f0 + (ulong)uVar1 + 4);
                  }
                }
                else {
                  *(ulong *)puVar6 = CONCAT44(local_e8._4_4_,(undefined4)local_e8);
                  *(undefined8 *)(puVar6 + ((ulong)uVar1 - 8)) =
                       *(undefined8 *)((long)&uStack_f0 + (ulong)uVar1);
                  lVar8 = (long)puVar6 - ((ulong)(puVar6 + 8) & 0xfffffffffffffff8);
                  uVar4 = (int)lVar8 + uVar1 & 0xfffffff8;
                  if (7 < uVar4) {
                    uVar10 = 0;
                    do {
                      uVar9 = (int)uVar10 + 8;
                      *(undefined8 *)(((ulong)(puVar6 + 8) & 0xfffffffffffffff8) + uVar10) =
                           *(undefined8 *)((long)&local_e8 + (uVar10 - lVar8));
                      uVar10 = (ulong)uVar9;
                    } while (uVar9 < uVar4);
                  }
                }
                uVar12 = uVar12 + uVar1;
                local_129 = local_129 + '\x01';
              } while (uVar12 < num);
            }
            pBVar7 = BN_bin2bn(s,num,param_1);
            if (pBVar7 == (BIGNUM *)0x0) goto LAB_001018e0;
            BN_set_flags(param_1,4);
            iVar3 = BN_num_bits(param_2);
            ossl_bn_mask_bits_fixed_top(param_1,iVar3);
            iVar3 = BN_ucmp(param_1,param_2);
            if (iVar3 < 0) {
              uVar11 = 1;
              goto LAB_001018e2;
            }
            local_13c = local_13c + -1;
          } while (local_13c != 0);
          ERR_new();
          ERR_set_debug("crypto/bn/bn_rand.c",0x181,"ossl_bn_gen_dsa_nonce_fixed_top");
          ERR_set_error(3,0xc0103,0);
LAB_001018e0:
          uVar11 = 0;
        }
      }
    }
  }
LAB_001018e2:
  local_188 = local_a8;
  EVP_MD_CTX_free(ctx);
  EVP_MD_free(local_190);
  CRYPTO_clear_free(s,num,"crypto/bn/bn_rand.c",0x186);
  OPENSSL_cleanse(&local_e8,0x40);
  OPENSSL_cleanse(local_128,0x40);
  OPENSSL_cleanse(local_188,0x60);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar11;
}



undefined4 BN_generate_dsa_nonce(undefined8 param_1)

{
  undefined4 uVar1;
  
  uVar1 = ossl_bn_gen_dsa_nonce_fixed_top();
  bn_correct_top(param_1);
  return uVar1;
}


