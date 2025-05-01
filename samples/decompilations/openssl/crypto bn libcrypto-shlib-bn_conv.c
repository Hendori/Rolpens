
char * BN_bn2hex(BIGNUM *a)

{
  long lVar1;
  int iVar2;
  char *pcVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  char *pcVar7;
  long lVar8;
  ulong uVar9;
  
  iVar2 = BN_is_zero();
  if (iVar2 != 0) {
    pcVar3 = CRYPTO_strdup("0","crypto/bn/bn_conv.c",0x16);
    return pcVar3;
  }
  uVar9 = 0;
  pcVar3 = (char *)CRYPTO_malloc(a->top * 0x10 + 2,"crypto/bn/bn_conv.c",0x17);
  if (pcVar3 != (char *)0x0) {
    pcVar7 = pcVar3;
    if (a->neg != 0) {
      *pcVar3 = '-';
      pcVar7 = pcVar3 + 1;
    }
    uVar6 = a->top - 1;
    if (-1 < (int)uVar6) {
      lVar8 = (long)(int)uVar6 << 3;
      lVar1 = ((long)a->top - (ulong)uVar6) * 8 + -0x10;
      do {
        while( true ) {
          uVar5 = *(ulong *)((long)a->d + lVar8);
          if ((char)(uVar5 >> 0x38) == '\0' && (int)uVar9 == 0) break;
          lVar4 = ossl_to_hex(pcVar7,uVar5 >> 0x38);
          pcVar7 = pcVar7 + lVar4;
          uVar9 = *(ulong *)((long)a->d + lVar8) >> 0x30;
LAB_00100123:
          lVar4 = ossl_to_hex(pcVar7,uVar9 & 0xff);
          pcVar7 = pcVar7 + lVar4;
          uVar9 = *(ulong *)((long)a->d + lVar8) >> 0x28;
LAB_0010013d:
          lVar4 = ossl_to_hex(pcVar7,uVar9 & 0xff);
          pcVar7 = pcVar7 + lVar4;
          uVar9 = (ulong)*(uint *)((long)a->d + lVar8 + 4);
LAB_00100153:
          lVar4 = ossl_to_hex(pcVar7,uVar9 & 0xff);
          pcVar7 = pcVar7 + lVar4;
          uVar5 = *(ulong *)((long)a->d + lVar8);
LAB_0010016d:
          lVar4 = ossl_to_hex(pcVar7,uVar5 >> 0x18 & 0xff);
          pcVar7 = pcVar7 + lVar4;
          uVar5 = *(ulong *)((long)a->d + lVar8);
LAB_00100187:
          lVar4 = ossl_to_hex(pcVar7,uVar5 >> 0x10 & 0xff);
          pcVar7 = pcVar7 + lVar4;
          uVar5 = *(ulong *)((long)a->d + lVar8);
LAB_001001a1:
          lVar4 = ossl_to_hex(pcVar7,uVar5 >> 8 & 0xff);
          pcVar7 = pcVar7 + lVar4;
          uVar5 = *(ulong *)((long)a->d + lVar8);
LAB_001001b7:
          lVar8 = lVar8 + -8;
          uVar9 = 1;
          lVar4 = ossl_to_hex(pcVar7,uVar5 & 0xff);
          pcVar7 = pcVar7 + lVar4;
          if (lVar1 == lVar8) goto LAB_001001d8;
        }
        uVar9 = uVar5 >> 0x30;
        if (uVar9 != 0) goto LAB_00100123;
        uVar9 = uVar5 >> 0x28;
        if (uVar9 != 0) goto LAB_0010013d;
        uVar9 = uVar5 >> 0x20;
        if (uVar9 != 0) goto LAB_00100153;
        if ((int)(uVar5 >> 0x18) != 0) goto LAB_0010016d;
        if ((int)(uVar5 >> 0x10) != 0) goto LAB_00100187;
        if ((int)(uVar5 >> 8) != 0) goto LAB_001001a1;
        uVar9 = uVar5 & 0xffffffff;
        if ((int)uVar5 != 0) goto LAB_001001b7;
        lVar8 = lVar8 + -8;
      } while (lVar1 != lVar8);
    }
LAB_001001d8:
    *pcVar7 = '\0';
  }
  return pcVar3;
}



char * BN_bn2dec(BIGNUM *a)

{
  int iVar1;
  int iVar2;
  ulong *ptr;
  char *ptr_00;
  BIGNUM *a_00;
  ulong uVar3;
  int num;
  ulong *puVar4;
  char *pcVar5;
  char *local_48;
  ulong local_40;
  
  iVar1 = BN_num_bits(a);
  iVar1 = (iVar1 * 3) / 10 + (iVar1 * 3) / 1000;
  num = iVar1 + 5;
  iVar1 = (iVar1 + 2) / 0x13 + 1;
  ptr = (ulong *)CRYPTO_malloc(iVar1 * 8,"crypto/bn/bn_conv.c",0x42);
  ptr_00 = (char *)CRYPTO_malloc(num,"crypto/bn/bn_conv.c",0x43);
  if (((ptr_00 == (char *)0x0) || (ptr == (ulong *)0x0)) ||
     (a_00 = BN_dup(a), a_00 == (BIGNUM *)0x0)) {
    CRYPTO_free(ptr);
    BN_free((BIGNUM *)0x0);
LAB_00100457:
    pcVar5 = (char *)0x0;
    CRYPTO_free(ptr_00);
  }
  else {
    iVar2 = BN_is_zero(a_00);
    if (iVar2 == 0) {
      iVar2 = BN_is_negative(a_00);
      local_48 = ptr_00;
      if (iVar2 != 0) {
        *ptr_00 = '-';
        local_48 = ptr_00 + 1;
      }
      local_40 = (ulong)(iVar2 != 0);
      puVar4 = ptr;
      while (iVar2 = BN_is_zero(a_00), iVar2 == 0) {
        if ((long)iVar1 <= (long)puVar4 - (long)ptr >> 3) goto LAB_00100420;
        uVar3 = BN_div_word(a_00,10000000000000000000);
        *puVar4 = uVar3;
        if (uVar3 == 0xffffffffffffffff) goto LAB_00100420;
        puVar4 = puVar4 + 1;
      }
      iVar1 = BIO_snprintf(local_48,(long)num - local_40,"%lu",puVar4[-1]);
      if (iVar1 < 0) {
LAB_00100420:
        CRYPTO_free(ptr);
        BN_free(a_00);
        goto LAB_00100457;
      }
      local_48 = local_48 + iVar1;
      while (puVar4 = puVar4 + -1, ptr != puVar4) {
        iVar1 = BIO_snprintf(local_48,(long)num - ((long)local_48 - (long)ptr_00),"%019lu",
                             puVar4[-1]);
        if (iVar1 < 0) goto LAB_00100420;
        local_48 = local_48 + iVar1;
      }
    }
    else {
      ptr_00[0] = '0';
      ptr_00[1] = '\0';
    }
    CRYPTO_free(ptr);
    BN_free(a_00);
    pcVar5 = ptr_00;
  }
  return pcVar5;
}



int BN_hex2bn(BIGNUM **a,char *str)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  BIGNUM *pBVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  char *pcVar10;
  long local_68;
  BIGNUM *local_60;
  uint local_44;
  
  if ((str != (char *)0x0) && (cVar1 = *str, cVar1 != '\0')) {
    if (cVar1 == '-') {
      str = str + 1;
    }
    local_44 = (uint)(cVar1 == '-');
    uVar8 = 0;
    do {
      iVar2 = ossl_ctype_check((int)str[uVar8],0x10);
      if (iVar2 == 0) {
        iVar2 = (int)uVar8;
        if (iVar2 == 0) {
          return 0;
        }
        if (a != (BIGNUM **)0x0) {
          local_60 = *a;
          if (local_60 == (BIGNUM *)0x0) {
            local_60 = BN_new();
            if (local_60 == (BIGNUM *)0x0) {
              return 0;
            }
          }
          else {
            iVar3 = BN_get_flags(local_60,2);
            if (iVar3 != 0) {
              ERR_new();
              ERR_set_debug("crypto/bn/bn_conv.c",0x97,__func___0);
              ERR_set_error(3,0x80106,0);
              return 0;
            }
            BN_zero_ex(local_60);
          }
          if ((0x7fffffc0 < iVar2 * 4) ||
             ((iVar3 = iVar2 * 4 + 0x3f >> 6, local_60->dmax < iVar3 &&
              (pBVar5 = bn_expand2(local_60,iVar3), pBVar5 == (BIGNUM *)0x0)))) {
            if (*a != (BIGNUM *)0x0) {
              return 0;
            }
            BN_free(local_60);
            return 0;
          }
          lVar9 = (long)iVar2;
          local_68 = 0;
          do {
            iVar7 = (int)uVar8;
            iVar3 = 0x10;
            if (iVar7 < 0x11) {
              iVar3 = iVar7;
            }
            uVar6 = 0;
            pcVar10 = str + (lVar9 - iVar3);
            do {
              iVar4 = OPENSSL_hexchar2int(*pcVar10);
              if (iVar4 < 0) {
                iVar4 = 0;
              }
              pcVar10 = pcVar10 + 1;
              uVar6 = uVar6 << 4 | (long)iVar4;
            } while (str + (ulong)(iVar3 - 1) + ((lVar9 + 1) - (long)iVar3) != pcVar10);
            uVar8 = (ulong)(iVar7 - 0x10U);
            lVar9 = lVar9 + -0x10;
            *(ulong *)((long)local_60->d + local_68) = uVar6;
            local_68 = local_68 + 8;
          } while (0 < (int)(iVar7 - 0x10U));
          local_60->top = (iVar2 - 1U >> 4) + 1;
          bn_correct_top(local_60);
          *a = local_60;
          if (local_60->top != 0) {
            local_60->neg = local_44;
          }
        }
        return local_44 + iVar2;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 != 0x20000000);
  }
  return 0;
}



int BN_dec2bn(BIGNUM **a,char *str)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  BIGNUM *pBVar5;
  BIGNUM *a_00;
  int iVar6;
  ulong w;
  long lVar7;
  uint local_3c;
  
  if (str == (char *)0x0) {
    return 0;
  }
  cVar2 = *str;
  if (cVar2 != '\0') {
    if (cVar2 == '-') {
      str = str + 1;
    }
    local_3c = (uint)(cVar2 == '-');
    lVar7 = 0;
    do {
      iVar3 = ossl_isdigit((int)str[lVar7]);
      if (iVar3 == 0) {
        iVar3 = (int)lVar7;
        if (iVar3 != 0) {
          if (a == (BIGNUM **)0x0) goto LAB_00100841;
          a_00 = *a;
          if (a_00 == (BIGNUM *)0x0) {
            a_00 = BN_new();
            if (a_00 == (BIGNUM *)0x0) {
              return 0;
            }
          }
          else {
            BN_zero_ex(a_00);
          }
          if ((0x7fffffc0 < iVar3 * 4) ||
             ((iVar6 = iVar3 * 4 + 0x3f >> 6, a_00->dmax < iVar6 &&
              (pBVar5 = bn_expand2(a_00,iVar6), pBVar5 == (BIGNUM *)0x0)))) goto LAB_0010086a;
          pcVar1 = str + lVar7;
          iVar4 = (iVar3 / 0x13) * 0x13 - iVar3;
          iVar6 = iVar4 + 0x13;
          if (iVar4 == 0) {
            iVar6 = 0;
          }
          w = 0;
          goto LAB_001007d5;
        }
        break;
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 != 0x20000000);
    a_00 = (BIGNUM *)0x0;
LAB_0010086a:
    if (*a == (BIGNUM *)0x0) {
      BN_free(a_00);
    }
  }
  return 0;
LAB_001007d5:
  cVar2 = *str;
  iVar6 = iVar6 + 1;
  str = str + 1;
  w = (long)(cVar2 + -0x30) + w * 10;
  if (iVar6 == 0x13) {
    iVar6 = BN_mul_word(a_00,10000000000000000000);
    if ((iVar6 == 0) || (iVar6 = BN_add_word(a_00,w), iVar6 == 0)) goto LAB_0010086a;
    iVar6 = 0;
    w = 0;
  }
  if (pcVar1 == str) {
    bn_correct_top(a_00);
    iVar6 = a_00->top;
    *a = a_00;
    if (iVar6 != 0) {
      a_00->neg = local_3c;
    }
LAB_00100841:
    return local_3c + iVar3;
  }
  goto LAB_001007d5;
}



int BN_asc2bn(BIGNUM **a,char *str)

{
  char cVar1;
  int iVar2;
  char *str_00;
  
  cVar1 = *str;
  str_00 = str;
  if (cVar1 == '-') {
    cVar1 = str[1];
    str_00 = str + 1;
  }
  if ((cVar1 == '0') && ((str_00[1] & 0xdfU) == 0x58)) {
    iVar2 = BN_hex2bn(a,str_00 + 2);
  }
  else {
    iVar2 = BN_dec2bn(a,str_00);
  }
  if (iVar2 == 0) {
    return 0;
  }
  if ((*str == '-') && ((*a)->top != 0)) {
    (*a)->neg = 1;
  }
  return 1;
}


