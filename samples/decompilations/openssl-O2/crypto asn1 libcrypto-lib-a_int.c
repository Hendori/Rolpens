
void asn1_string_set_int64(ASN1_STRING *param_1,ulong param_2,uint param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 *data;
  long in_FS_OFFSET;
  undefined1 local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  param_1->type = param_3;
  iVar2 = 8;
  puVar1 = &local_11;
  if ((long)param_2 < 0) {
    param_2 = -param_2;
    do {
      data = puVar1;
      *data = (char)param_2;
      iVar2 = iVar2 + -1;
      param_2 = param_2 >> 8;
      puVar1 = data + -1;
    } while (param_2 != 0);
    param_1->type = param_3 | 0x100;
  }
  else {
    do {
      data = puVar1;
      *data = (char)param_2;
      iVar2 = iVar2 + -1;
      param_2 = param_2 >> 8;
      puVar1 = data + -1;
    } while (param_2 != 0);
  }
  ASN1_STRING_set(param_1,data,8 - iVar2);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong c2i_ibuf(byte *param_1,uint *param_2,byte *param_3,ulong param_4)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  
  if (param_4 == 0) {
    ERR_new();
    ERR_set_debug("crypto/asn1/a_int.c",0xa0,__func___8);
    ERR_set_error(0xd,0xde,0);
LAB_00100190:
    uVar6 = 0;
  }
  else {
    bVar2 = *param_3;
    if (param_2 != (uint *)0x0) {
      *param_2 = bVar2 & 0x80;
    }
    if (param_4 == 1) {
      if (param_1 != (byte *)0x0) {
        bVar3 = -*param_3;
        if (-1 < (char)bVar2) {
          bVar3 = *param_3;
        }
        *param_1 = bVar3;
      }
      return 1;
    }
    if (*param_3 == 0) {
LAB_001000d9:
      uVar6 = param_4 - 1;
      if (-1 < (char)(bVar2 ^ param_3[1])) {
        ERR_new();
        ERR_set_debug("crypto/asn1/a_int.c",0xc1,__func___8);
        ERR_set_error(0xd,0xdd,0);
        goto LAB_00100190;
      }
    }
    else {
      uVar6 = param_4;
      if (*param_3 == 0xff) {
        uVar5 = 1;
        bVar3 = 0;
        do {
          pbVar1 = param_3 + uVar5;
          uVar5 = uVar5 + 1;
          bVar3 = bVar3 | *pbVar1;
        } while (uVar5 < param_4);
        if (bVar3 != 0) goto LAB_001000d9;
      }
    }
    if (param_1 != (byte *)0x0) {
      uVar4 = (uint)(int)(char)bVar2 >> 0x1f;
      uVar5 = uVar6;
      do {
        uVar5 = uVar5 - 1;
        uVar4 = uVar4 + (byte)(param_3[uVar5 + (param_4 - uVar6)] ^ (char)bVar2 >> 7);
        param_1[uVar5] = (byte)uVar4;
        uVar4 = uVar4 >> 8;
      } while (uVar5 != 0);
    }
  }
  return uVar6;
}



ASN1_STRING * bn_to_asn1_string(BIGNUM *param_1,ASN1_STRING *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  ASN1_STRING *str;
  
  if (param_2 == (ASN1_STRING *)0x0) {
    str = ASN1_STRING_type_new(param_3);
    if (str == (ASN1_STRING *)0x0) {
      ERR_new();
      ERR_set_debug("crypto/asn1/a_int.c",0x1df,"bn_to_asn1_string");
      ERR_set_error(0xd,0x8010a,0);
      return (ASN1_STRING *)0x0;
    }
  }
  else {
    param_2->type = param_3;
    str = param_2;
  }
  iVar1 = BN_is_negative(param_1);
  if ((iVar1 != 0) && (iVar1 = BN_is_zero(param_1), iVar1 == 0)) {
    str->type = str->type | 0x102;
  }
  iVar2 = BN_num_bits(param_1);
  iVar1 = iVar2 + 0xe;
  if (-1 < iVar2 + 7) {
    iVar1 = iVar2 + 7;
  }
  iVar2 = iVar1 >> 3;
  if (iVar1 >> 3 == 0) {
    iVar2 = 1;
  }
  iVar1 = ASN1_STRING_set(str,(void *)0x0,iVar2);
  if (iVar1 == 0) {
    ERR_new();
    ERR_set_debug("crypto/asn1/a_int.c",0x1ec,"bn_to_asn1_string");
    ERR_set_error(0xd,0x8000d,0);
    if (param_2 != str) {
      ASN1_INTEGER_free(str);
    }
    return (ASN1_STRING *)0x0;
  }
  iVar1 = BN_is_zero(param_1);
  if (iVar1 == 0) {
    iVar2 = BN_bn2bin(param_1,str->data);
  }
  else {
    *str->data = '\0';
  }
  str->length = iVar2;
  return str;
}



BIGNUM * asn1_string_to_bn(int *param_1,BIGNUM *param_2,uint param_3)

{
  BIGNUM *b;
  
  if ((param_1[1] & 0xfffffeffU) == param_3) {
    b = BN_bin2bn(*(uchar **)(param_1 + 2),*param_1,param_2);
    if (b == (BIGNUM *)0x0) {
      ERR_new();
      ERR_set_debug("crypto/asn1/a_int.c",0x209,"asn1_string_to_bn");
      ERR_set_error(0xd,0x69,0);
      b = (BIGNUM *)0x0;
    }
    else if ((*(byte *)((long)param_1 + 5) & 1) != 0) {
      BN_set_negative(b,1);
      return b;
    }
  }
  else {
    ERR_new();
    ERR_set_debug("crypto/asn1/a_int.c",0x203,"asn1_string_to_bn");
    ERR_set_error(0xd,0xe1,0);
    b = (BIGNUM *)0x0;
  }
  return b;
}



undefined8 asn1_get_uint64(ulong *param_1,byte *param_2,ulong param_3)

{
  byte *pbVar1;
  byte bVar2;
  
  if (8 < param_3) {
    ERR_new();
    ERR_set_debug("crypto/asn1/a_int.c",0xdb,"asn1_get_uint64");
    ERR_set_error(0xd,0xdf,0);
    return 0;
  }
  if (param_2 != (byte *)0x0) {
    if (param_3 != 0) {
      pbVar1 = param_2 + param_3;
      param_3 = 0;
      do {
        bVar2 = *param_2;
        param_2 = param_2 + 1;
        param_3 = param_3 << 8 | (ulong)bVar2;
      } while (param_2 != pbVar1);
    }
    *param_1 = param_3;
    return 1;
  }
  return 0;
}



undefined8 asn1_string_get_int64(long *param_1,int *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == (int *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/asn1/a_int.c",0x14f,"asn1_string_get_int64");
    ERR_set_error(0xd,0xc0102,0);
  }
  else {
    uVar1 = param_2[1];
    if ((uVar1 & 0xfffffeff) == param_3) {
      iVar2 = asn1_get_uint64(&local_28,*(undefined8 *)(param_2 + 2),(long)*param_2);
      if (iVar2 != 0) {
        if ((uVar1 & 0x100) == 0) {
          if (local_28 < 0) {
            ERR_new();
            ERR_set_debug("crypto/asn1/a_int.c",0x11a,"asn1_get_int64");
            ERR_set_error(0xd,0xdf,0);
            goto LAB_00100540;
          }
LAB_00100503:
          *param_1 = local_28;
        }
        else {
          if (local_28 < 0) {
            if (local_28 != -0x8000000000000000) {
              ERR_new();
              ERR_set_debug("crypto/asn1/a_int.c",0x113,"asn1_get_int64");
              ERR_set_error(0xd,0xe0,0);
              goto LAB_00100540;
            }
            goto LAB_00100503;
          }
          *param_1 = -local_28;
        }
        uVar3 = 1;
        goto LAB_00100542;
      }
    }
    else {
      ERR_new();
      ERR_set_debug("crypto/asn1/a_int.c",0x153,"asn1_string_get_int64");
      ERR_set_error(0xd,0xe1,0);
    }
  }
LAB_00100540:
  uVar3 = 0;
LAB_00100542:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



long i2c_ibuf(byte *param_1,long param_2,int param_3,long *param_4)

{
  byte bVar1;
  undefined1 *puVar2;
  byte bVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  bool bVar9;
  
  if ((param_1 == (byte *)0x0) || (param_2 == 0)) {
    uVar6 = 0;
    lVar8 = 1;
    uVar7 = 0;
    param_2 = 0;
  }
  else {
    bVar3 = *param_1;
    lVar8 = param_2;
    if (param_3 == 0) {
      if (bVar3 < 0x80) {
        uVar7 = 0;
        uVar6 = 0;
      }
      else {
        uVar7 = 1;
        uVar6 = 0;
        lVar8 = param_2 + 1;
      }
    }
    else if (bVar3 < 0x81) {
      if (bVar3 == 0x80) {
        if (param_2 == 1) {
          lVar8 = 1;
          uVar6 = 0;
          uVar7 = 0;
        }
        else {
          pbVar5 = param_1 + 1;
          bVar3 = 0;
          do {
            bVar1 = *pbVar5;
            pbVar5 = pbVar5 + 1;
            bVar3 = bVar3 | bVar1;
          } while (pbVar5 != param_1 + param_2);
          bVar9 = bVar3 != 0;
          uVar7 = (ulong)bVar9;
          uVar6 = -(uint)bVar9;
          lVar8 = (ulong)bVar9 + param_2;
        }
      }
      else {
        uVar6 = 0xffffffff;
        uVar7 = 0;
      }
    }
    else {
      uVar6 = 0xffffffff;
      uVar7 = 1;
      lVar8 = param_2 + 1;
    }
  }
  if ((param_4 != (long *)0x0) && (puVar2 = (undefined1 *)*param_4, puVar2 != (undefined1 *)0x0)) {
    *puVar2 = (char)uVar6;
    if (param_2 != 0) {
      uVar4 = uVar6 & 1;
      do {
        param_2 = param_2 + -1;
        uVar4 = uVar4 + ((param_1[param_2] ^ uVar6) & 0xff);
        puVar2[param_2 + uVar7] = (char)uVar4;
        uVar4 = uVar4 >> 8;
      } while (param_2 != 0);
    }
    *param_4 = *param_4 + lVar8;
  }
  return lVar8;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ASN1_STRING * ASN1_INTEGER_dup(ASN1_STRING *a)

{
  ASN1_STRING *pAVar1;
  
  pAVar1 = ASN1_STRING_dup(a);
  return pAVar1;
}



int ASN1_INTEGER_cmp(ASN1_INTEGER *x,ASN1_INTEGER *y)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = x->type & 0x100;
  uVar3 = y->type & 0x100;
  if (uVar3 != uVar1) {
    return -(uint)(uVar1 != 0) | 1;
  }
  iVar2 = ASN1_STRING_cmp(x,y);
  if (uVar3 != 0) {
    iVar2 = -iVar2;
  }
  return iVar2;
}



void ossl_i2c_ASN1_INTEGER(int *param_1,undefined8 param_2)

{
  i2c_ibuf(*(undefined8 *)(param_1 + 2),(long)*param_1,param_1[1] & 0x100,param_2);
  return;
}



ASN1_STRING * ossl_c2i_ASN1_INTEGER(undefined8 *param_1,long *param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  ASN1_STRING *str;
  long in_FS_OFFSET;
  int local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = c2i_ibuf(0,0,*param_2,param_3);
  if (lVar3 == 0) {
LAB_001008f7:
    str = (ASN1_STRING *)0x0;
  }
  else {
    if ((param_1 == (undefined8 *)0x0) || (str = (ASN1_STRING *)*param_1, str == (ASN1_STRING *)0x0)
       ) {
      str = ASN1_INTEGER_new();
      if (str == (ASN1_INTEGER *)0x0) goto LAB_001008f7;
      str->type = 2;
      iVar1 = ASN1_STRING_set(str,(void *)0x0,(int)lVar3);
      if (iVar1 == 0) {
        ERR_new();
        ERR_set_debug("crypto/asn1/a_int.c",0x137,"ossl_c2i_ASN1_INTEGER");
        ERR_set_error(0xd,0x8000d,0);
        if (param_1 != (undefined8 *)0x0) goto LAB_001008e9;
        goto LAB_001008ef;
      }
    }
    else {
      iVar1 = ASN1_STRING_set(str,(void *)0x0,(int)lVar3);
      if (iVar1 == 0) {
        ERR_new();
        ERR_set_debug("crypto/asn1/a_int.c",0x137,"ossl_c2i_ASN1_INTEGER");
        ERR_set_error(0xd,0x8000d,0);
LAB_001008e9:
        if ((ASN1_STRING *)*param_1 != str) {
LAB_001008ef:
          ASN1_INTEGER_free(str);
        }
        goto LAB_001008f7;
      }
    }
    c2i_ibuf(str->data,&local_34,*param_2,param_3);
    if (local_34 == 0) {
      uVar2 = str->type & 0xfffffeff;
    }
    else {
      uVar2 = str->type | 0x100;
    }
    str->type = uVar2;
    *param_2 = *param_2 + param_3;
    if (param_1 != (undefined8 *)0x0) {
      *param_1 = str;
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return str;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ASN1_INTEGER * d2i_ASN1_UINTEGER(ASN1_INTEGER **a,uchar **pp,long length)

{
  uint uVar1;
  void *__dest;
  ASN1_STRING *a_00;
  undefined8 uVar2;
  int len;
  uchar *puVar3;
  long in_FS_OFFSET;
  int local_58;
  int local_54;
  uchar *local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  if ((a == (ASN1_INTEGER **)0x0) || (a_00 = *a, a_00 == (ASN1_STRING *)0x0)) {
    a_00 = ASN1_INTEGER_new();
    if (a_00 != (ASN1_INTEGER *)0x0) {
      a_00->type = 2;
      goto LAB_00100999;
    }
  }
  else {
LAB_00100999:
    local_50 = *pp;
    uVar1 = ASN1_get_object(&local_50,&local_48,&local_58,&local_54,length);
    if ((uVar1 & 0x80) == 0) {
      if (local_58 != 2) {
        uVar2 = 0x73;
        goto LAB_00100aa6;
      }
      if (local_48 < 0) {
        uVar2 = 0xe2;
        goto LAB_00100aa6;
      }
      __dest = CRYPTO_malloc((int)local_48 + 1,"crypto/asn1/a_int.c",0x1b7);
      if (__dest != (void *)0x0) {
        a_00->type = 2;
        len = 0;
        if (local_48 != 0) {
          if ((*local_50 == '\0') && (local_48 != 1)) {
            local_50 = local_50 + 1;
            local_48 = local_48 + -1;
          }
          len = (int)local_48;
          puVar3 = local_50 + local_48;
          __dest = memcpy(__dest,local_50,(long)len);
          local_50 = puVar3;
        }
        ASN1_STRING_set0(a_00,__dest,len);
        if (a != (ASN1_INTEGER **)0x0) {
          *a = a_00;
        }
        *pp = local_50;
        goto LAB_00100a75;
      }
    }
    else {
      uVar2 = 0x66;
LAB_00100aa6:
      ERR_new();
      ERR_set_debug("crypto/asn1/a_int.c",0x1cb,"d2i_ASN1_UINTEGER");
      ERR_set_error(0xd,uVar2,0);
    }
    if ((a == (ASN1_INTEGER **)0x0) || (*a != a_00)) {
      ASN1_INTEGER_free(a_00);
    }
  }
  a_00 = (ASN1_INTEGER *)0x0;
LAB_00100a75:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return a_00;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ASN1_INTEGER_get_int64(undefined8 param_1,undefined8 param_2)

{
  asn1_string_get_int64(param_1,param_2,2);
  return;
}



void ASN1_INTEGER_set_int64(undefined8 param_1,undefined8 param_2)

{
  asn1_string_set_int64(param_1,param_2,2);
  return;
}



undefined8 ASN1_INTEGER_get_uint64(undefined8 param_1,int *param_2)

{
  undefined8 uVar1;
  
  if (param_2 == (int *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/asn1/a_int.c",0x174,"asn1_string_get_uint64");
    ERR_set_error(0xd,0xc0102,0);
  }
  else {
    if ((param_2[1] & 0xfffffeffU) != 2) {
      ERR_new();
      ERR_set_debug("crypto/asn1/a_int.c",0x178,"asn1_string_get_uint64");
      ERR_set_error(0xd,0xe1,0);
      return 0;
    }
    if ((param_2[1] & 0x100U) == 0) {
      uVar1 = asn1_get_uint64(param_1,*(undefined8 *)(param_2 + 2),(long)*param_2);
      return uVar1;
    }
    ERR_new();
    ERR_set_debug("crypto/asn1/a_int.c",0x17c,"asn1_string_get_uint64");
    ERR_set_error(0xd,0xe2,0);
  }
  return 0;
}



void ASN1_INTEGER_set_uint64(ASN1_STRING *param_1,ulong param_2)

{
  undefined1 *puVar1;
  undefined1 *data;
  int iVar2;
  long in_FS_OFFSET;
  undefined1 local_11;
  long local_10;
  
  iVar2 = 8;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  param_1->type = 2;
  puVar1 = &local_11;
  do {
    data = puVar1;
    *data = (char)param_2;
    iVar2 = iVar2 + -1;
    param_2 = param_2 >> 8;
    puVar1 = data + -1;
  } while (param_2 != 0);
  ASN1_STRING_set(param_1,data,8 - iVar2);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ASN1_INTEGER_set(void)

{
  ASN1_INTEGER_set_int64();
  return;
}



long ASN1_INTEGER_get(ASN1_INTEGER *a)

{
  int iVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = 0;
  if ((a != (ASN1_INTEGER *)0x0) &&
     (iVar1 = ASN1_INTEGER_get_int64(&local_18,a), lVar2 = local_18, iVar1 == 0)) {
    lVar2 = -1;
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar2;
}



ASN1_INTEGER * BN_to_ASN1_INTEGER(BIGNUM *bn,ASN1_INTEGER *ai)

{
  ASN1_INTEGER *pAVar1;
  
  pAVar1 = (ASN1_INTEGER *)bn_to_asn1_string(bn,ai,2);
  return pAVar1;
}



BIGNUM * ASN1_INTEGER_to_BN(ASN1_INTEGER *ai,BIGNUM *bn)

{
  BIGNUM *pBVar1;
  
  pBVar1 = (BIGNUM *)asn1_string_to_bn(ai,bn,2);
  return pBVar1;
}



void ASN1_ENUMERATED_get_int64(undefined8 param_1,undefined8 param_2)

{
  asn1_string_get_int64(param_1,param_2,10);
  return;
}



void ASN1_ENUMERATED_set_int64(undefined8 param_1,undefined8 param_2)

{
  asn1_string_set_int64(param_1,param_2,10);
  return;
}



void ASN1_ENUMERATED_set(void)

{
  ASN1_ENUMERATED_set_int64();
  return;
}



long ASN1_ENUMERATED_get(ASN1_ENUMERATED *a)

{
  int iVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (a == (ASN1_ENUMERATED *)0x0) {
    lVar2 = 0;
  }
  else if (((a->type & 0xfffffeffU) != 10) ||
          ((lVar2 = 0xffffffff, a->length < 9 &&
           (iVar1 = ASN1_ENUMERATED_get_int64(&local_18,a), lVar2 = local_18, iVar1 == 0)))) {
    lVar2 = -1;
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar2;
}



ASN1_ENUMERATED * BN_to_ASN1_ENUMERATED(BIGNUM *bn,ASN1_ENUMERATED *ai)

{
  ASN1_ENUMERATED *pAVar1;
  
  pAVar1 = (ASN1_ENUMERATED *)bn_to_asn1_string(bn,ai,10);
  return pAVar1;
}



BIGNUM * ASN1_ENUMERATED_to_BN(ASN1_ENUMERATED *ai,BIGNUM *bn)

{
  BIGNUM *pBVar1;
  
  pBVar1 = (BIGNUM *)asn1_string_to_bn(ai,bn,10);
  return pBVar1;
}



undefined8 ossl_c2i_uint64_int(ulong *param_1,undefined8 param_2,undefined8 *param_3)

{
  byte bVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  byte *pbVar5;
  long in_FS_OFFSET;
  byte local_38 [8];
  long local_30;
  
  pbVar5 = local_38;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = c2i_ibuf(0,0,*param_3);
  if (uVar2 != 0) {
    if (uVar2 < 9) {
      c2i_ibuf(local_38,param_2,*param_3);
      uVar4 = 0;
      do {
        bVar1 = *pbVar5;
        pbVar5 = pbVar5 + 1;
        uVar4 = uVar4 << 8 | (ulong)bVar1;
      } while (local_38 + uVar2 != pbVar5);
      *param_1 = uVar4;
      uVar3 = 1;
      goto LAB_00100e9c;
    }
    ERR_new();
    ERR_set_debug("crypto/asn1/a_int.c",0x278,"ossl_c2i_uint64_int");
    ERR_set_error(0xd,0xdf,0);
  }
  uVar3 = 0;
LAB_00100e9c:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ossl_i2c_uint64_int(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined1 local_11;
  long local_10;
  
  lVar3 = 8;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = &local_11;
  do {
    puVar2 = puVar1;
    *puVar2 = (char)param_2;
    lVar3 = lVar3 + -1;
    param_2 = param_2 >> 8;
    puVar1 = puVar2 + -1;
  } while (param_2 != 0);
  local_20 = param_1;
  i2c_ibuf(puVar2,8 - lVar3,param_3,&local_20);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


