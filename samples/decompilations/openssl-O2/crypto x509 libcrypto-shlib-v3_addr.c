
undefined1 * IPAddressRange_it(void)

{
  return local_it_9;
}



undefined1 * IPAddressOrRange_it(void)

{
  return local_it_8;
}



undefined1 * IPAddressChoice_it(void)

{
  return local_it_7;
}



undefined1 * IPAddressFamily_it(void)

{
  return local_it_6;
}



undefined1 * IPAddrBlocks_it(void)

{
  return local_it_1;
}



int range_should_be_prefix(long param_1,long param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  byte bVar7;
  long lVar8;
  
  if (param_3 == 0) {
    return 0;
  }
  uVar3 = 0;
  do {
    uVar6 = uVar3;
    if (*(char *)(param_1 + uVar6) != *(char *)(param_2 + uVar6)) goto LAB_0010007b;
    uVar3 = uVar6 + 1;
  } while (uVar6 + 1 != (long)param_3);
  uVar6 = (ulong)((int)uVar6 + 1);
LAB_0010007b:
  lVar8 = (long)(param_3 + -1);
  while ((iVar4 = (int)uVar6, *(char *)(param_1 + lVar8) == '\0' &&
         (*(char *)(param_2 + lVar8) == -1))) {
    lVar8 = lVar8 + -1;
    if ((int)lVar8 == -1) {
LAB_00100118:
      return iVar4 << 3;
    }
  }
  if (iVar4 < (int)lVar8) {
    return -1;
  }
  if (iVar4 <= (int)lVar8) {
    bVar1 = *(byte *)(param_1 + iVar4);
    bVar2 = *(byte *)(param_2 + iVar4);
    bVar7 = bVar1 ^ bVar2;
    if (bVar7 < 0x20) {
      if (bVar1 == bVar2) {
        return -1;
      }
      switch(bVar7) {
      default:
        goto switchD_001000d1_caseD_0;
      case 1:
        iVar5 = 7;
        break;
      case 3:
        iVar5 = 6;
        break;
      case 7:
        iVar5 = 5;
        break;
      case 0xf:
        iVar5 = 4;
        break;
      case 0x1f:
        iVar5 = 3;
      }
    }
    else if (bVar7 == 0x3f) {
      iVar5 = 2;
    }
    else {
      iVar5 = 1;
      if (bVar7 != 0x7f) {
        return -1;
      }
    }
    if ((bVar1 & bVar7) == 0) {
      iVar5 = iVar5 + iVar4 * 8;
      if ((~bVar2 & bVar7) != 0) {
        iVar5 = -1;
      }
      return iVar5;
    }
switchD_001000d1_caseD_0:
    return -1;
  }
  goto LAB_00100118;
}



void IPAddressFamily_free(IPAddressFamily *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)IPAddressFamily_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}



int IPAddressFamily_cmp(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = **(int **)*param_2;
  iVar2 = **(int **)*param_1;
  iVar3 = iVar1;
  if (iVar2 <= iVar1) {
    iVar3 = iVar2;
  }
  iVar3 = memcmp(*(void **)(*(int **)*param_1 + 2),*(void **)(*(int **)*param_2 + 2),(long)iVar3);
  if (iVar3 == 0) {
    iVar3 = iVar2 - iVar1;
  }
  return iVar3;
}



undefined8 addr_expand(undefined8 *param_1,uint *param_2,uint param_3,byte param_4)

{
  byte *pbVar1;
  undefined8 *puVar2;
  byte bVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  
  uVar4 = *param_2;
  uVar5 = (ulong)uVar4;
  if (param_3 < uVar4) {
    return 0;
  }
  lVar7 = (long)(int)uVar4;
  if (uVar4 == 0) goto LAB_001001ca;
  puVar2 = *(undefined8 **)(param_2 + 2);
  if (uVar4 < 8) {
    if ((uVar4 & 4) == 0) {
      if (uVar4 != 0) {
        *(undefined1 *)param_1 = *(undefined1 *)puVar2;
        if ((uVar4 & 2) == 0) goto LAB_00100284;
        *(undefined2 *)((long)param_1 + (uVar5 - 2)) = *(undefined2 *)((long)puVar2 + (uVar5 - 2));
        uVar4 = *param_2;
      }
    }
    else {
      *(undefined4 *)param_1 = *(undefined4 *)puVar2;
      *(undefined4 *)((long)param_1 + (uVar5 - 4)) = *(undefined4 *)((long)puVar2 + (uVar5 - 4));
      uVar4 = *param_2;
    }
  }
  else {
    *param_1 = *puVar2;
    *(undefined8 *)((long)param_1 + ((ulong)uVar4 - 8)) =
         *(undefined8 *)((long)puVar2 + ((ulong)uVar4 - 8));
    lVar7 = (long)param_1 - ((ulong)(param_1 + 1) & 0xfffffffffffffff8);
    uVar4 = uVar4 + (int)lVar7 & 0xfffffff8;
    if (7 < uVar4) {
      uVar6 = 0;
      do {
        uVar5 = (ulong)uVar6;
        uVar6 = uVar6 + 8;
        *(undefined8 *)(((ulong)(param_1 + 1) & 0xfffffffffffffff8) + uVar5) =
             *(undefined8 *)((long)puVar2 + (uVar5 - lVar7));
      } while (uVar6 < uVar4);
    }
LAB_00100284:
    uVar4 = *param_2;
  }
  lVar7 = (long)(int)uVar4;
  if ((*(ulong *)(param_2 + 4) & 7) != 0) {
    pbVar1 = (byte *)((long)param_1 + (long)(int)uVar4 + -1);
    bVar3 = (byte)(0xff >> (8 - ((byte)*(ulong *)(param_2 + 4) & 7) & 0x1f));
    if (param_4 == 0) {
      *pbVar1 = ~bVar3 & *pbVar1;
      lVar7 = (long)(int)*param_2;
    }
    else {
      *pbVar1 = *pbVar1 | bVar3;
      lVar7 = (long)(int)*param_2;
    }
  }
LAB_001001ca:
  memset((undefined1 *)((long)param_1 + lVar7),(uint)param_4,(long)(int)(param_3 - (int)lVar7));
  return 1;
}



bool extract_min_max(int *param_1,long param_2,long param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((param_2 != 0 && param_3 != 0) && (param_1 != (int *)0x0)) {
    if (*param_1 == 0) {
      iVar1 = addr_expand(param_2,*(undefined8 *)(param_1 + 2),param_4,0);
      if (iVar1 != 0) {
        uVar2 = *(undefined8 *)(param_1 + 2);
LAB_0010033d:
        iVar1 = addr_expand(param_3,uVar2,param_4,0xff);
        return iVar1 != 0;
      }
    }
    else if (*param_1 == 1) {
      iVar1 = addr_expand(param_2,**(undefined8 **)(param_1 + 2),param_4,0);
      if (iVar1 != 0) {
        uVar2 = *(undefined8 *)(*(long *)(param_1 + 2) + 8);
        goto LAB_0010033d;
      }
    }
  }
  return false;
}



undefined8 addr_contains(long param_1,long param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  long in_FS_OFFSET;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 != 0) && (param_2 != param_1)) {
    iVar3 = 0;
    iVar4 = 0;
    if (param_1 == 0) {
LAB_001004a0:
      uVar2 = 0;
      goto LAB_001004a2;
    }
    for (; iVar1 = OPENSSL_sk_num(param_2), iVar3 < iVar1; iVar3 = iVar3 + 1) {
      uVar2 = OPENSSL_sk_value(param_2,iVar3);
      iVar1 = extract_min_max(uVar2,local_68,local_58,param_3);
      if ((iVar1 == 0) || (iVar1 = OPENSSL_sk_num(param_1), iVar1 <= iVar4)) goto LAB_001004a0;
      while( true ) {
        uVar2 = OPENSSL_sk_value(param_1,iVar4);
        iVar1 = extract_min_max(uVar2,local_88,local_78,param_3);
        if (iVar1 == 0) goto LAB_001004a0;
        iVar1 = memcmp(local_78,local_58,(long)param_3);
        if (-1 < iVar1) break;
        iVar4 = iVar4 + 1;
        iVar1 = OPENSSL_sk_num(param_1);
        if (iVar1 <= iVar4) goto LAB_001004a0;
      }
      iVar1 = memcmp(local_88,local_68,(long)param_3);
      if (0 < iVar1) goto LAB_001004a0;
    }
  }
  uVar2 = 1;
LAB_001004a2:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



int IPAddressOrRange_cmp(int *param_1,int *param_2,ulong param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long in_FS_OFFSET;
  undefined1 auStack_68 [16];
  undefined1 local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = (int)param_3;
  if (*param_1 == 0) {
    piVar1 = *(int **)(param_1 + 2);
    iVar2 = addr_expand(auStack_68,piVar1,param_3,0);
    if (iVar2 != 0) {
      iVar4 = *piVar1 * 8 - ((uint)*(undefined8 *)(piVar1 + 4) & 7);
      iVar2 = *param_2;
      if (iVar2 == 0) goto LAB_001005e0;
LAB_0010053b:
      if ((iVar2 == 1) &&
         (iVar2 = addr_expand(local_58,**(undefined8 **)(param_2 + 2),param_3 & 0xffffffff,0),
         iVar2 != 0)) {
        iVar2 = iVar3 * 8;
LAB_00100563:
        iVar3 = memcmp(auStack_68,local_58,(long)iVar3);
        if (iVar3 == 0) {
          iVar3 = iVar4 - iVar2;
        }
        goto LAB_00100585;
      }
    }
  }
  else if ((*param_1 == 1) &&
          (iVar2 = addr_expand(auStack_68,**(undefined8 **)(param_1 + 2),param_3,0), iVar2 != 0)) {
    iVar2 = *param_2;
    iVar4 = iVar3 * 8;
    if (iVar2 != 0) goto LAB_0010053b;
LAB_001005e0:
    piVar1 = *(int **)(param_2 + 2);
    iVar2 = addr_expand(local_58,piVar1,param_3 & 0xffffffff,0);
    if (iVar2 != 0) {
      iVar2 = *piVar1 * 8 - ((uint)*(undefined8 *)(piVar1 + 4) & 7);
      goto LAB_00100563;
    }
  }
  iVar3 = -1;
LAB_00100585:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar3;
}



void v6IPAddressOrRange_cmp(undefined8 *param_1,undefined8 *param_2)

{
  IPAddressOrRange_cmp(*param_1,*param_2,0x10);
  return;
}



void v4IPAddressOrRange_cmp(undefined8 *param_1,undefined8 *param_2)

{
  IPAddressOrRange_cmp(*param_1,*param_2,4);
  return;
}



undefined8 i2r_address(BIO *param_1,int param_2,undefined1 param_3,int *param_4)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined8 uVar4;
  byte *pbVar5;
  undefined *puVar6;
  long lVar7;
  long in_FS_OFFSET;
  byte abStack_68 [8];
  undefined8 local_60;
  byte local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_4 < 0) {
LAB_0010071d:
    uVar4 = 0;
  }
  else {
    if (param_2 == 1) {
      iVar3 = addr_expand(local_58,param_4,4,param_3);
      if (iVar3 == 0) goto LAB_0010071d;
      BIO_printf(param_1,"%d.%d.%d.%d",(ulong)local_58[0],(ulong)local_58[1],(ulong)local_58[2],
                 (ulong)local_58[3]);
    }
    else if (param_2 == 2) {
      iVar3 = addr_expand(local_58,param_4,0x10,param_3);
      pbVar2 = local_58;
      if (iVar3 == 0) goto LAB_0010071d;
      do {
        pbVar5 = pbVar2;
        if (abStack_68 == pbVar5) goto LAB_00100788;
      } while ((pbVar5[0xf] == 0) && (pbVar2 = pbVar5 + -2, pbVar5[0xe] == 0));
      iVar3 = (int)pbVar5 - (int)local_58;
      if (iVar3 == -0x10) {
LAB_00100788:
        BIO_puts(param_1,":");
        BIO_puts(param_1,":");
      }
      else {
        local_60 = (ulong)((iVar3 + 0xfU >> 1) + 2) * 2;
        lVar7 = 2;
        do {
          if (lVar7 == 0x10) {
            BIO_printf(param_1,"%x%s",(ulong)CONCAT11(local_58[lVar7 + -2],local_58[lVar7 + -1]),
                       &_LC1);
            goto LAB_001006f8;
          }
          BIO_printf(param_1,"%x%s",(ulong)CONCAT11(local_58[lVar7 + -2],local_58[lVar7 + -1]),&_LC0
                    );
          lVar7 = lVar7 + 2;
        } while (lVar7 != local_60);
        BIO_puts(param_1,":");
      }
    }
    else {
      if (*param_4 != 0) {
        lVar7 = 0;
        puVar6 = &_LC1;
        bVar1 = **(byte **)(param_4 + 2);
        while( true ) {
          lVar7 = lVar7 + 1;
          BIO_printf(param_1,"%s%02x",puVar6,(ulong)bVar1);
          if (*param_4 <= (int)lVar7) break;
          puVar6 = &_LC0;
          bVar1 = *(byte *)(*(long *)(param_4 + 2) + lVar7);
        }
      }
      BIO_printf(param_1,"[%d]",(ulong)((uint)*(undefined8 *)(param_4 + 4) & 7));
    }
LAB_001006f8:
    uVar4 = 1;
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}



IPAddressRange * d2i_IPAddressRange(IPAddressRange **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  IPAddressRange *pIVar1;
  
  it = (ASN1_ITEM *)IPAddressRange_it();
  pIVar1 = (IPAddressRange *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pIVar1;
}



int i2d_IPAddressRange(IPAddressRange *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)IPAddressRange_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

IPAddressRange * IPAddressRange_new(void)

{
  ASN1_ITEM *it;
  IPAddressRange *pIVar1;
  
  it = (ASN1_ITEM *)IPAddressRange_it();
  pIVar1 = (IPAddressRange *)ASN1_item_new(it);
  return pIVar1;
}



void IPAddressRange_free(IPAddressRange *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)IPAddressRange_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}



IPAddressOrRange * d2i_IPAddressOrRange(IPAddressOrRange **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  IPAddressOrRange *pIVar1;
  
  it = (ASN1_ITEM *)IPAddressOrRange_it();
  pIVar1 = (IPAddressOrRange *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pIVar1;
}



int i2d_IPAddressOrRange(IPAddressOrRange *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)IPAddressOrRange_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

IPAddressOrRange * IPAddressOrRange_new(void)

{
  ASN1_ITEM *it;
  IPAddressOrRange *pIVar1;
  
  it = (ASN1_ITEM *)IPAddressOrRange_it();
  pIVar1 = (IPAddressOrRange *)ASN1_item_new(it);
  return pIVar1;
}



void IPAddressOrRange_free(IPAddressOrRange *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)IPAddressOrRange_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}



undefined8 make_addressPrefix(undefined8 *param_1,uchar *param_2,uint param_3,int param_4)

{
  byte *pbVar1;
  int iVar2;
  IPAddressOrRange *a;
  ASN1_BIT_STRING *a_00;
  int length;
  
  if ((int)param_3 < 0) {
    return 0;
  }
  if (param_4 * 8 < (int)param_3) {
    return 0;
  }
  a = IPAddressOrRange_new();
  if (a == (IPAddressOrRange *)0x0) {
    return 0;
  }
  a_00 = (a->u).addressPrefix;
  a->type = 0;
  if (a_00 == (ASN1_BIT_STRING *)0x0) {
    a_00 = ASN1_BIT_STRING_new();
    (a->u).addressPrefix = a_00;
    if (a_00 == (ASN1_BIT_STRING *)0x0) goto LAB_00100a90;
  }
  length = (int)(param_3 + 7) >> 3;
  iVar2 = ASN1_BIT_STRING_set(a_00,param_2,length);
  if (iVar2 != 0) {
    if ((param_3 & 7) != 0) {
      pbVar1 = ((a->u).addressPrefix)->data + (long)length + -1;
      *pbVar1 = *pbVar1 & (byte)(-0x100 >> (sbyte)(param_3 & 7));
    }
    ossl_asn1_string_set_bits_left((a->u).addressPrefix,8 - (param_3 & 7));
    *param_1 = a;
    return 1;
  }
LAB_00100a90:
  IPAddressOrRange_free(a);
  return 0;
}



undefined8 make_addressRange(undefined8 *param_1,uchar *param_2,uchar *param_3,int param_4)

{
  ulong *puVar1;
  int iVar2;
  IPAddressOrRange *a;
  IPAddressRange *pIVar3;
  ulong uVar4;
  undefined8 uVar5;
  ASN1_BIT_STRING *pAVar6;
  size_t sVar7;
  size_t __n;
  
  __n = (size_t)param_4;
  iVar2 = memcmp(param_2,param_3,__n);
  if (0 < iVar2) {
    return 0;
  }
  iVar2 = range_should_be_prefix(param_2,param_3,param_4);
  if (-1 < iVar2) {
    uVar5 = make_addressPrefix(param_1,param_2,iVar2,param_4);
    return uVar5;
  }
  a = IPAddressOrRange_new();
  if (a == (IPAddressOrRange *)0x0) {
    return 0;
  }
  a->type = 1;
  pIVar3 = IPAddressRange_new();
  (a->u).addressRange = pIVar3;
  if (pIVar3 == (IPAddressRange *)0x0) goto LAB_00100c8e;
  if (pIVar3->min == (ASN1_BIT_STRING *)0x0) {
    pAVar6 = ASN1_BIT_STRING_new();
    pIVar3->min = pAVar6;
    if (pAVar6 == (ASN1_BIT_STRING *)0x0) goto LAB_00100c8e;
    pIVar3 = (a->u).addressRange;
  }
  if (pIVar3->max == (ASN1_BIT_STRING **)0x0) {
    pAVar6 = ASN1_BIT_STRING_new();
    pIVar3->max = (ASN1_BIT_STRING **)pAVar6;
    if (pAVar6 == (ASN1_BIT_STRING *)0x0) goto LAB_00100c8e;
    pIVar3 = (a->u).addressRange;
  }
  pAVar6 = pIVar3->min;
  sVar7 = __n;
  if (param_4 != 0) {
LAB_00100b5c:
    if (param_2[sVar7 - 1] == '\0') goto LAB_00100b50;
    iVar2 = ASN1_BIT_STRING_set(pAVar6,param_2,(int)sVar7);
    if (iVar2 != 0) {
      ossl_asn1_string_set_bits_left(((a->u).addressRange)->min,0);
      iVar2 = 1;
      if ((param_2[(long)(int)sVar7 + -1] & 0x7f) == 0) {
        uVar4 = 7;
      }
      else {
        do {
          iVar2 = iVar2 + 1;
        } while ((0xffU >> ((byte)iVar2 & 0x1f) & (uint)param_2[(long)(int)sVar7 + -1]) != 0);
        uVar4 = (ulong)(8 - iVar2);
      }
      pAVar6 = (ASN1_BIT_STRING *)(a->u).addressRange;
      *(ulong *)(*(long *)pAVar6 + 0x10) = *(ulong *)(*(long *)pAVar6 + 0x10) | uVar4;
      goto LAB_00100bbf;
    }
    goto LAB_00100c8e;
  }
  iVar2 = ASN1_BIT_STRING_set(pAVar6,param_2,0);
  if (iVar2 == 0) goto LAB_00100c8e;
  ossl_asn1_string_set_bits_left(((a->u).addressRange)->min,0);
  pAVar6 = (ASN1_BIT_STRING *)((a->u).addressPrefix)->data;
LAB_00100cf8:
  iVar2 = ASN1_BIT_STRING_set(pAVar6,param_3,0);
  if (iVar2 != 0) {
    ossl_asn1_string_set_bits_left(((a->u).addressPrefix)->data,0);
LAB_00100c44:
    *param_1 = a;
    return 1;
  }
LAB_00100c8e:
  IPAddressOrRange_free(a);
  return 0;
LAB_00100b50:
  sVar7 = sVar7 - 1;
  if ((int)sVar7 == 0) goto LAB_00100c80;
  goto LAB_00100b5c;
LAB_00100c80:
  iVar2 = ASN1_BIT_STRING_set(pAVar6,param_2,0);
  if (iVar2 == 0) goto LAB_00100c8e;
  ossl_asn1_string_set_bits_left(((a->u).addressRange)->min,0);
  pAVar6 = (a->u).addressPrefix;
LAB_00100bbf:
  pAVar6 = (ASN1_BIT_STRING *)pAVar6->data;
  do {
    if (param_3[__n - 1] != 0xff) {
      iVar2 = ASN1_BIT_STRING_set(pAVar6,param_3,(int)__n);
      if (iVar2 != 0) {
        ossl_asn1_string_set_bits_left(((a->u).addressPrefix)->data,0);
        iVar2 = 1;
        if ((~param_3[(long)(int)__n + -1] & 0x7f) == 0) {
          uVar4 = 7;
        }
        else {
          do {
            iVar2 = iVar2 + 1;
          } while ((~(uint)param_3[(long)(int)__n + -1] & 0xffU >> ((byte)iVar2 & 0x1f)) != 0);
          uVar4 = (ulong)(8 - iVar2);
        }
        puVar1 = (ulong *)(((a->u).addressPrefix)->data + 0x10);
        *puVar1 = *puVar1 | uVar4;
        goto LAB_00100c44;
      }
      goto LAB_00100c8e;
    }
    __n = __n - 1;
  } while ((int)__n != 0);
  goto LAB_00100cf8;
}



IPAddressChoice * d2i_IPAddressChoice(IPAddressChoice **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  IPAddressChoice *pIVar1;
  
  it = (ASN1_ITEM *)IPAddressChoice_it();
  pIVar1 = (IPAddressChoice *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pIVar1;
}



int i2d_IPAddressChoice(IPAddressChoice *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)IPAddressChoice_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

IPAddressChoice * IPAddressChoice_new(void)

{
  ASN1_ITEM *it;
  IPAddressChoice *pIVar1;
  
  it = (ASN1_ITEM *)IPAddressChoice_it();
  pIVar1 = (IPAddressChoice *)ASN1_item_new(it);
  return pIVar1;
}



void IPAddressChoice_free(IPAddressChoice *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)IPAddressChoice_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}



IPAddressFamily * d2i_IPAddressFamily(IPAddressFamily **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  IPAddressFamily *pIVar1;
  
  it = (ASN1_ITEM *)IPAddressFamily_it();
  pIVar1 = (IPAddressFamily *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pIVar1;
}



int i2d_IPAddressFamily(IPAddressFamily *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)IPAddressFamily_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

IPAddressFamily * IPAddressFamily_new(void)

{
  ASN1_ITEM *it;
  IPAddressFamily *pIVar1;
  
  it = (ASN1_ITEM *)IPAddressFamily_it();
  pIVar1 = (IPAddressFamily *)ASN1_item_new(it);
  return pIVar1;
}



IPAddressFamily * make_IPAddressFamily(undefined8 param_1,ushort param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  IPAddressFamily *pIVar3;
  IPAddressFamily *a;
  ASN1_OCTET_STRING *str;
  IPAddressChoice *pIVar4;
  int iVar5;
  long in_FS_OFFSET;
  ushort local_33;
  undefined1 local_31;
  long local_30;
  
  local_33 = param_2 << 8 | param_2 >> 8;
  iVar2 = 2;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 != (undefined4 *)0x0) {
    iVar2 = 3;
    local_31 = (undefined1)*param_3;
  }
  for (iVar5 = 0; iVar1 = OPENSSL_sk_num(param_1), iVar5 < iVar1; iVar5 = iVar5 + 1) {
    pIVar3 = (IPAddressFamily *)OPENSSL_sk_value(param_1,iVar5);
    if ((pIVar3->addressFamily->length == iVar2) &&
       (iVar1 = memcmp(pIVar3->addressFamily->data,&local_33,(long)iVar2), iVar1 == 0))
    goto LAB_00100f19;
  }
  a = IPAddressFamily_new();
  if (a != (IPAddressFamily *)0x0) {
    if (a->ipAddressChoice == (IPAddressChoice *)0x0) {
      pIVar4 = IPAddressChoice_new();
      a->ipAddressChoice = pIVar4;
      if (pIVar4 == (IPAddressChoice *)0x0) goto LAB_00100f7c;
    }
    str = a->addressFamily;
    if (str == (ASN1_OCTET_STRING *)0x0) {
      str = ASN1_OCTET_STRING_new();
      a->addressFamily = str;
      if (str == (ASN1_OCTET_STRING *)0x0) goto LAB_00100f7c;
    }
    iVar2 = ASN1_OCTET_STRING_set(str,(uchar *)&local_33,iVar2);
    if ((iVar2 != 0) && (iVar2 = OPENSSL_sk_push(param_1,a), pIVar3 = a, iVar2 != 0))
    goto LAB_00100f19;
  }
LAB_00100f7c:
  pIVar3 = (IPAddressFamily *)0x0;
  IPAddressFamily_free(a);
LAB_00100f19:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pIVar3;
}



long make_prefix_or_range(undefined8 param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = make_IPAddressFamily();
  if ((lVar3 != 0) && (piVar1 = *(int **)(lVar3 + 8), piVar1 != (int *)0x0)) {
    if (*piVar1 == 0) {
      if (*(long *)(piVar1 + 2) != 0) {
        return 0;
      }
    }
    else if ((*piVar1 == 1) && (*(long *)(piVar1 + 2) != 0)) {
      return *(long *)(piVar1 + 2);
    }
    lVar4 = OPENSSL_sk_new_null();
    if (lVar4 != 0) {
      if (param_2 == 1) {
        OPENSSL_sk_set_cmp_func(lVar4,v4IPAddressOrRange_cmp);
        puVar2 = *(undefined4 **)(lVar3 + 8);
        *puVar2 = 1;
        *(long *)(puVar2 + 2) = lVar4;
      }
      else if (param_2 == 2) {
        OPENSSL_sk_set_cmp_func(lVar4,v6IPAddressOrRange_cmp);
        puVar2 = *(undefined4 **)(lVar3 + 8);
        *puVar2 = 1;
        *(long *)(puVar2 + 2) = lVar4;
      }
      else {
        puVar2 = *(undefined4 **)(lVar3 + 8);
        *puVar2 = 1;
        *(long *)(puVar2 + 2) = lVar4;
      }
      return lVar4;
    }
  }
  return 0;
}



ushort X509v3_addr_get_afi(undefined8 *param_1)

{
  ushort uVar1;
  int *piVar2;
  
  if ((param_1 == (undefined8 *)0x0) || (piVar2 = (int *)*param_1, piVar2 == (int *)0x0)) {
    return 0;
  }
  if ((*(ushort **)(piVar2 + 2) != (ushort *)0x0) && (1 < *piVar2)) {
    uVar1 = **(ushort **)(piVar2 + 2);
    return uVar1 << 8 | uVar1 >> 8;
  }
  return 0;
}



undefined8 i2r_IPAddrBlocks(undefined8 param_1,undefined8 param_2,BIO *param_3,uint param_4)

{
  byte bVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  
  iVar7 = 0;
  iVar3 = OPENSSL_sk_num(param_2);
  if (0 < iVar3) {
    do {
      puVar5 = (undefined8 *)OPENSSL_sk_value(param_2,iVar7);
      uVar4 = X509v3_addr_get_afi(puVar5);
      if (uVar4 == 1) {
        BIO_printf(param_3,"%*sIPv4",(ulong)param_4,&_LC1);
      }
      else if (uVar4 == 2) {
        BIO_printf(param_3,"%*sIPv6",(ulong)param_4,&_LC1);
      }
      else {
        BIO_printf(param_3,"%*sUnknown AFI %u",(ulong)param_4,&_LC1,(ulong)uVar4);
      }
      if (2 < *(int *)*puVar5) {
        bVar1 = *(byte *)(*(long *)((int *)*puVar5 + 2) + 2);
        if (bVar1 == 0x40) {
          BIO_puts(param_3," (Tunnel)");
        }
        else if (bVar1 < 0x41) {
          if (bVar1 == 3) {
            BIO_puts(param_3," (Unicast/Multicast)");
          }
          else if (bVar1 < 4) {
            if (bVar1 == 1) {
              BIO_puts(param_3," (Unicast)");
            }
            else {
              if (bVar1 != 2) goto LAB_001013e0;
              BIO_puts(param_3," (Multicast)");
            }
          }
          else if (bVar1 == 4) {
            BIO_puts(param_3," (MPLS)");
          }
          else {
LAB_001013e0:
            BIO_printf(param_3," (Unknown SAFI %u)");
          }
        }
        else if (bVar1 == 0x42) {
          BIO_puts(param_3," (BGP MDT)");
        }
        else if (bVar1 == 0x80) {
          BIO_puts(param_3," (MPLS-labeled VPN)");
        }
        else {
          if (bVar1 != 0x41) goto LAB_001013e0;
          BIO_puts(param_3," (VPLS)");
        }
      }
      if (*(int *)puVar5[1] == 0) {
        BIO_puts(param_3,": inherit\n");
      }
      else if (*(int *)puVar5[1] == 1) {
        BIO_puts(param_3,":\n");
        iVar8 = 0;
        uVar2 = *(undefined8 *)(puVar5[1] + 8);
        iVar3 = OPENSSL_sk_num(uVar2);
        if (0 < iVar3) {
          do {
            piVar6 = (int *)OPENSSL_sk_value(uVar2,iVar8);
            BIO_printf(param_3,"%*s",(ulong)(param_4 + 2),&_LC1);
            if (*piVar6 == 0) {
              iVar3 = i2r_address(param_3,uVar4,0,*(undefined8 *)(piVar6 + 2));
              if (iVar3 == 0) {
                return 0;
              }
              BIO_printf(param_3,"/%d\n",
                         (ulong)(**(int **)(piVar6 + 2) * 8 -
                                ((uint)*(undefined8 *)(*(int **)(piVar6 + 2) + 4) & 7)));
            }
            else if (*piVar6 == 1) {
              iVar3 = i2r_address(param_3,uVar4,0,**(undefined8 **)(piVar6 + 2));
              if (iVar3 == 0) {
                return 0;
              }
              BIO_puts(param_3,"-");
              iVar3 = i2r_address(param_3,uVar4,0xff,*(undefined8 *)(*(long *)(piVar6 + 2) + 8));
              if (iVar3 == 0) {
                return 0;
              }
              BIO_puts(param_3,"\n");
            }
            iVar8 = iVar8 + 1;
            iVar3 = OPENSSL_sk_num(uVar2);
          } while (iVar8 < iVar3);
        }
      }
      iVar7 = iVar7 + 1;
      iVar3 = OPENSSL_sk_num(param_2);
    } while (iVar7 < iVar3);
  }
  return 1;
}



undefined8 X509v3_addr_add_inherit(void)

{
  long lVar1;
  long lVar2;
  ASN1_NULL *pAVar3;
  int *piVar4;
  
  lVar2 = make_IPAddressFamily();
  if (lVar2 == 0) {
    return 0;
  }
  piVar4 = *(int **)(lVar2 + 8);
  if (piVar4 == (int *)0x0) {
    return 0;
  }
  lVar1 = *(long *)(piVar4 + 2);
  if (*piVar4 == 1) {
    if (lVar1 != 0) {
      return 0;
    }
  }
  else if (*piVar4 == 0) {
    if (lVar1 != 0) {
      return 1;
    }
  }
  else if (lVar1 != 0) goto LAB_001014e5;
  pAVar3 = ASN1_NULL_new();
  *(ASN1_NULL **)(piVar4 + 2) = pAVar3;
  if (pAVar3 == (ASN1_NULL *)0x0) {
    return 0;
  }
  piVar4 = *(int **)(lVar2 + 8);
LAB_001014e5:
  *piVar4 = 0;
  return 1;
}



undefined8
X509v3_addr_add_prefix
          (undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined4 param_5)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long in_FS_OFFSET;
  IPAddressOrRange *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = make_prefix_or_range();
  if (lVar2 != 0) {
    lVar4 = 4;
    if (param_2 != 1) {
      lVar4 = (ulong)(param_2 == 2) << 4;
    }
    iVar1 = make_addressPrefix(&local_38,param_4,param_5,lVar4);
    if (iVar1 != 0) {
      iVar1 = OPENSSL_sk_push(lVar2,local_38);
      uVar3 = 1;
      if (iVar1 == 0) {
        IPAddressOrRange_free(local_38);
        uVar3 = 0;
      }
      goto LAB_0010158a;
    }
  }
  uVar3 = 0;
LAB_0010158a:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8
X509v3_addr_add_range
          (undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long in_FS_OFFSET;
  IPAddressOrRange *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = make_prefix_or_range();
  lVar4 = 4;
  if (param_2 != 1) {
    lVar4 = (ulong)(param_2 == 2) << 4;
  }
  if (lVar2 != 0) {
    iVar1 = make_addressRange(&local_38,param_4,param_5,lVar4);
    if (iVar1 != 0) {
      iVar1 = OPENSSL_sk_push(lVar2,local_38);
      uVar3 = 1;
      if (iVar1 == 0) {
        IPAddressOrRange_free(local_38);
        uVar3 = 0;
      }
      goto LAB_00101620;
    }
  }
  uVar3 = 0;
LAB_00101620:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int X509v3_addr_get_range(uint *param_1,int param_2,long param_3,long param_4,int param_5)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 1) {
    iVar2 = 4;
  }
  else {
    if (param_2 != 2) {
      return 0;
    }
    iVar2 = 0x10;
  }
  if ((((param_1 != (uint *)0x0) && (param_3 != 0)) && (param_4 != 0)) &&
     (((iVar2 <= param_5 && (*param_1 < 2)) && (iVar1 = extract_min_max(), iVar1 != 0)))) {
    return iVar2;
  }
  return 0;
}



undefined8 X509v3_addr_is_canonical(long param_1)

{
  undefined1 *__s2;
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  size_t __n;
  long in_FS_OFFSET;
  undefined1 local_88 [16];
  undefined1 local_78 [15];
  undefined1 auStack_69 [17];
  undefined1 local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) {
LAB_00101a38:
    uVar9 = 1;
  }
  else {
    iVar11 = 0;
    do {
      iVar2 = OPENSSL_sk_num(param_1);
      if (iVar2 + -1 <= iVar11) {
        iVar11 = 0;
        goto LAB_001017b5;
      }
      puVar4 = (undefined8 *)OPENSSL_sk_value(param_1,iVar11);
      puVar5 = (undefined8 *)OPENSSL_sk_value(param_1,iVar11 + 1);
      iVar2 = *(int *)*puVar4;
      if (1 < iVar2 - 2U) break;
      iVar10 = *(int *)*puVar5;
      if (1 < iVar10 - 2U) break;
      iVar3 = iVar10;
      if (iVar2 <= iVar10) {
        iVar3 = iVar2;
      }
      iVar3 = memcmp(*(void **)((int *)*puVar4 + 2),*(void **)((int *)*puVar5 + 2),(long)iVar3);
      if (iVar3 == 0) {
        iVar3 = iVar2 - iVar10;
      }
      iVar11 = iVar11 + 1;
    } while (iVar3 < 0);
LAB_00101742:
    uVar9 = 0;
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar9;
LAB_001017b5:
  iVar2 = OPENSSL_sk_num(param_1);
  if (iVar2 <= iVar11) goto LAB_00101a38;
  iVar10 = 4;
  puVar4 = (undefined8 *)OPENSSL_sk_value(param_1,iVar11);
  iVar2 = X509v3_addr_get_afi(puVar4);
  if (iVar2 != 1) {
    iVar10 = (uint)(iVar2 == 2) << 4;
  }
  if ((puVar4 == (undefined8 *)0x0) || (piVar6 = (int *)puVar4[1], piVar6 == (int *)0x0))
  goto LAB_00101742;
  if (*piVar6 != 0) {
    if ((*piVar6 != 1) || (1 < *(int *)*puVar4 - 2U)) goto LAB_00101742;
    uVar9 = *(undefined8 *)(piVar6 + 2);
    iVar2 = OPENSSL_sk_num(uVar9);
    if (iVar2 == 0) goto LAB_00101742;
    __n = (size_t)iVar10;
    iVar2 = 0;
    while (iVar3 = OPENSSL_sk_num(uVar9), iVar2 < iVar3 + -1) {
      iVar3 = iVar2 + 1;
      piVar6 = (int *)OPENSSL_sk_value(uVar9,iVar2);
      uVar7 = OPENSSL_sk_value(uVar9,iVar3);
      iVar2 = extract_min_max(piVar6,local_88,local_78,iVar10);
      if (iVar2 == 0) goto LAB_00101742;
      __s2 = auStack_69 + 1;
      iVar2 = extract_min_max(uVar7,__s2,local_58,iVar10);
      if ((((iVar2 == 0) || (iVar2 = memcmp(local_88,__s2,__n), -1 < iVar2)) ||
          (iVar2 = memcmp(local_88,local_78,__n), 0 < iVar2)) ||
         ((iVar2 = memcmp(__s2,local_58,__n), 0 < iVar2 || (iVar10 == 0)))) goto LAB_00101742;
      puVar8 = __s2 + __n;
      do {
        cVar1 = puVar8[-1];
        puVar8[-1] = cVar1 + -1;
        if (cVar1 != '\0') break;
        puVar8 = puVar8 + -1;
      } while (auStack_69 + (__n - (iVar10 - 1)) != puVar8);
      iVar2 = memcmp(local_78,__s2,__n);
      if ((-1 < iVar2) ||
         ((iVar2 = iVar3, *piVar6 == 1 &&
          (iVar3 = range_should_be_prefix(local_88,local_78,iVar10), -1 < iVar3))))
      goto LAB_00101742;
    }
    iVar2 = OPENSSL_sk_num(uVar9);
    piVar6 = (int *)OPENSSL_sk_value(uVar9,iVar2 + -1);
    if ((piVar6 != (int *)0x0) && (*piVar6 == 1)) {
      iVar2 = extract_min_max(piVar6,local_88,local_78,iVar10);
      if ((iVar2 == 0) ||
         ((iVar2 = memcmp(local_88,local_78,(long)iVar10), 0 < iVar2 ||
          (iVar2 = range_should_be_prefix(local_88,local_78,iVar10), -1 < iVar2))))
      goto LAB_00101742;
    }
  }
  iVar11 = iVar11 + 1;
  goto LAB_001017b5;
}



undefined8 addr_validate_path_internal(long param_1,long param_2,long param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  
  if ((param_2 == 0) || (iVar1 = OPENSSL_sk_num(param_2), iVar1 < 1)) {
    if (param_1 == 0) {
      return 0;
    }
LAB_00101c1d:
    *(undefined4 *)(param_1 + 0xb0) = 1;
    return 0;
  }
  if (param_1 == 0 && param_3 == 0) {
    return 0;
  }
  if (param_1 == 0) {
    if (param_3 == 0) {
LAB_00101cf0:
      lVar6 = OPENSSL_sk_value(param_2,0);
      param_3 = *(long *)(lVar6 + 0x128);
      if (param_3 == 0) {
        return 1;
      }
      iVar1 = X509v3_addr_is_canonical(param_3);
      if (iVar1 != 0) {
        iVar1 = 0;
        OPENSSL_sk_set_cmp_func(param_3,IPAddressFamily_cmp);
        lVar5 = OPENSSL_sk_dup(param_3);
        if (lVar5 != 0) goto LAB_00101b10;
        ERR_new();
        ERR_set_debug("crypto/x509/v3_addr.c",0x4f7,"addr_validate_path_internal");
        ERR_set_error(0x22,0x8000f,0);
        if (param_1 == 0) goto LAB_00101ce5;
        goto LAB_00101df0;
      }
LAB_00101abd:
      *(int *)(param_1 + 0xac) = iVar1;
      *(undefined4 *)(param_1 + 0xb0) = 0x29;
      *(long *)(param_1 + 0xb8) = lVar6;
      iVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
      if (iVar2 != 0) goto LAB_00101ae5;
    }
    else {
      iVar1 = X509v3_addr_is_canonical(param_3);
      if (iVar1 != 0) {
        OPENSSL_sk_set_cmp_func(param_3,IPAddressFamily_cmp);
        lVar5 = OPENSSL_sk_dup(param_3);
        if (lVar5 != 0) {
          lVar6 = 0;
          iVar1 = -1;
          goto LAB_00101b10;
        }
        ERR_new();
        ERR_set_debug("crypto/x509/v3_addr.c",0x4f7,"addr_validate_path_internal");
        ERR_set_error(0x22,0x8000f,0);
      }
    }
  }
  else {
    if (*(long *)(param_1 + 0x38) == 0) goto LAB_00101c1d;
    if (param_3 == 0) goto LAB_00101cf0;
    lVar6 = 0;
    iVar1 = -1;
    iVar2 = X509v3_addr_is_canonical(param_3);
    if (iVar2 == 0) goto LAB_00101abd;
LAB_00101ae5:
    OPENSSL_sk_set_cmp_func(param_3,IPAddressFamily_cmp);
    lVar5 = OPENSSL_sk_dup(param_3);
    if (lVar5 != 0) {
LAB_00101b10:
      OPENSSL_sk_sort(lVar5);
LAB_00101b1c:
      do {
        iVar1 = iVar1 + 1;
        iVar2 = OPENSSL_sk_num(param_2);
        if (iVar2 <= iVar1) {
          iVar2 = 0;
          if ((*(long *)(lVar6 + 0x128) == 0) || (iVar3 = OPENSSL_sk_num(), iVar3 < 1))
          goto LAB_00101f98;
          goto LAB_00101f59;
        }
        lVar6 = OPENSSL_sk_value(param_2,iVar1);
        iVar2 = X509v3_addr_is_canonical(*(undefined8 *)(lVar6 + 0x128));
        if (iVar2 == 0) {
          if (param_1 == 0) goto LAB_00101c05;
          *(int *)(param_1 + 0xac) = iVar1;
          *(undefined4 *)(param_1 + 0xb0) = 0x29;
          *(long *)(param_1 + 0xb8) = lVar6;
          iVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
          if (iVar2 == 0) goto LAB_00101c05;
        }
        if (*(long *)(lVar6 + 0x128) == 0) {
          for (iVar2 = 0; iVar3 = OPENSSL_sk_num(lVar5), iVar2 < iVar3; iVar2 = iVar2 + 1) {
            puVar7 = (undefined8 *)OPENSSL_sk_value(lVar5,iVar2);
            if (1 < *(int *)*puVar7 - 2U) goto LAB_00101c05;
            if (*(int *)puVar7[1] != 0) goto LAB_00101c8d;
          }
        }
        else {
          OPENSSL_sk_set_cmp_func(*(long *)(lVar6 + 0x128),IPAddressFamily_cmp);
          OPENSSL_sk_sort(*(undefined8 *)(lVar6 + 0x128));
          for (iVar2 = 0; iVar3 = OPENSSL_sk_num(lVar5), iVar2 < iVar3; iVar2 = iVar2 + 1) {
            puVar7 = (undefined8 *)OPENSSL_sk_value(lVar5,iVar2);
            uVar4 = OPENSSL_sk_find(*(undefined8 *)(lVar6 + 0x128),puVar7);
            puVar8 = (undefined8 *)OPENSSL_sk_value(*(undefined8 *)(lVar6 + 0x128),uVar4);
            if (puVar8 == (undefined8 *)0x0) {
              if (*(int *)puVar7[1] == 1) goto LAB_00101c8d;
            }
            else {
              if ((1 < *(int *)*puVar7 - 2U) || (1 < *(int *)*puVar8 - 2U)) goto LAB_00101c05;
              if (*(int *)puVar8[1] == 1) {
                if (*(int *)puVar7[1] != 0) {
                  iVar3 = X509v3_addr_get_afi(puVar7);
                  lVar9 = 4;
                  if (iVar3 != 1) {
                    lVar9 = (ulong)(iVar3 == 2) << 4;
                  }
                  iVar3 = addr_contains(*(undefined8 *)(puVar8[1] + 8),
                                        *(undefined8 *)(puVar7[1] + 8),lVar9);
                  if (iVar3 == 0) {
                    if (param_1 != 0) {
                      *(int *)(param_1 + 0xac) = iVar1;
                      *(undefined4 *)(param_1 + 0xb0) = 0x2e;
                      *(long *)(param_1 + 0xb8) = lVar6;
                      iVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
                      if (iVar3 != 0) goto LAB_00101dae;
                    }
                    goto LAB_00101c05;
                  }
                }
                OPENSSL_sk_set(lVar5,iVar2,puVar8);
              }
            }
LAB_00101dae:
          }
        }
      } while( true );
    }
    ERR_new();
    ERR_set_debug("crypto/x509/v3_addr.c",0x4f7,"addr_validate_path_internal");
    ERR_set_error(0x22,0x8000f,0);
LAB_00101df0:
    *(undefined4 *)(param_1 + 0xb0) = 0x11;
  }
LAB_00101ce5:
  uVar10 = 0;
  lVar5 = 0;
  goto LAB_00101c07;
LAB_00101c8d:
  if (param_1 == 0) goto LAB_00101c05;
  *(int *)(param_1 + 0xac) = iVar1;
  *(undefined4 *)(param_1 + 0xb0) = 0x2e;
  *(long *)(param_1 + 0xb8) = lVar6;
  iVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
  if (iVar2 == 0) goto LAB_00101c05;
  goto LAB_00101b1c;
LAB_00101c05:
  uVar10 = 0;
  goto LAB_00101c07;
  while( true ) {
    if ((*(int *)puVar7[1] == 0) && (iVar3 = OPENSSL_sk_find(lVar5,puVar7), -1 < iVar3)) {
      if (param_1 == 0) goto LAB_00101c05;
      *(int *)(param_1 + 0xac) = iVar1;
      *(undefined4 *)(param_1 + 0xb0) = 0x2e;
      *(long *)(param_1 + 0xb8) = lVar6;
      iVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
      if (iVar3 == 0) goto LAB_00101c05;
    }
    iVar2 = iVar2 + 1;
    iVar3 = OPENSSL_sk_num(*(undefined8 *)(lVar6 + 0x128));
    if (iVar3 <= iVar2) break;
LAB_00101f59:
    puVar7 = (undefined8 *)OPENSSL_sk_value(*(undefined8 *)(lVar6 + 0x128),iVar2);
    if (1 < *(int *)*puVar7 - 2U) goto LAB_00101c05;
  }
LAB_00101f98:
  uVar10 = 1;
LAB_00101c07:
  OPENSSL_sk_free(lVar5);
  return uVar10;
}



bool X509v3_addr_canonize(long param_1)

{
  undefined1 *__s1;
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  IPAddressOrRange *a;
  IPAddressOrRange *a_00;
  undefined1 *puVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  size_t __n;
  int iVar11;
  long in_FS_OFFSET;
  bool bVar12;
  undefined8 local_90;
  undefined1 local_88 [16];
  undefined1 local_78 [15];
  undefined1 auStack_69 [17];
  undefined1 local_58 [24];
  long local_40;
  
  iVar11 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) {
    ERR_new();
    ERR_set_debug("crypto/x509/v3_addr.c",0x394,"X509v3_addr_canonize");
    ERR_set_error(0x22,0x6b,0);
LAB_00102053:
    bVar12 = false;
  }
  else {
    for (; iVar3 = OPENSSL_sk_num(param_1), iVar11 < iVar3; iVar11 = iVar11 + 1) {
      puVar5 = (undefined8 *)OPENSSL_sk_value(param_1,iVar11);
      if (1 < *(int *)*puVar5 - 2U) goto LAB_00102053;
      if (*(int *)puVar5[1] == 1) {
        lVar10 = 4;
        iVar3 = X509v3_addr_get_afi(puVar5);
        uVar2 = *(undefined8 *)(puVar5[1] + 8);
        if (iVar3 != 1) {
          lVar10 = (ulong)(iVar3 == 2) << 4;
        }
        iVar9 = (int)lVar10;
        __n = (size_t)iVar9;
        OPENSSL_sk_sort(uVar2);
        iVar3 = 0;
LAB_001020e7:
        iVar8 = iVar3;
        iVar3 = OPENSSL_sk_num(uVar2);
        if (iVar8 < iVar3 + -1) {
          a = (IPAddressOrRange *)OPENSSL_sk_value(uVar2,iVar8);
          iVar3 = iVar8 + 1;
          a_00 = (IPAddressOrRange *)OPENSSL_sk_value(uVar2,iVar3);
          iVar4 = extract_min_max(a,local_88,local_78,lVar10);
          if (iVar4 != 0) {
            __s1 = auStack_69 + 1;
            iVar4 = extract_min_max(a_00,__s1,local_58,lVar10);
            if ((((iVar4 != 0) && (iVar4 = memcmp(local_88,local_78,__n), iVar4 < 1)) &&
                (iVar4 = memcmp(__s1,local_58,__n), iVar4 < 1)) &&
               (iVar4 = memcmp(local_78,__s1,__n), iVar4 < 0)) {
              if (iVar9 != 0) goto code_r0x001021c0;
              goto LAB_00102210;
            }
          }
          goto LAB_00102053;
        }
        iVar3 = OPENSSL_sk_num(uVar2);
        piVar7 = (int *)OPENSSL_sk_value(uVar2,iVar3 + -1);
        if ((piVar7 != (int *)0x0) && (*piVar7 == 1)) {
          iVar3 = extract_min_max(piVar7,auStack_69 + 1,local_58,lVar10);
          if ((iVar3 == 0) || (iVar3 = memcmp(auStack_69 + 1,local_58,(long)iVar9), 0 < iVar3))
          goto LAB_00102053;
        }
      }
    }
    OPENSSL_sk_set_cmp_func(param_1,IPAddressFamily_cmp);
    OPENSSL_sk_sort(param_1);
    iVar11 = X509v3_addr_is_canonical(param_1);
    bVar12 = iVar11 != 0;
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar12;
code_r0x001021c0:
  puVar6 = __s1 + __n;
  do {
    cVar1 = puVar6[-1];
    puVar6[-1] = cVar1 + -1;
    if (cVar1 != '\0') break;
    puVar6 = puVar6 + -1;
  } while (puVar6 != auStack_69 + (__n - (iVar9 - 1)));
  iVar4 = memcmp(local_78,__s1,__n);
  if (iVar4 == 0) {
LAB_00102210:
    iVar4 = make_addressRange(&local_90,local_88,local_58,lVar10);
    if (iVar4 == 0) goto LAB_00102053;
    OPENSSL_sk_set(uVar2,iVar8,local_90);
    OPENSSL_sk_delete(uVar2,iVar3);
    IPAddressOrRange_free(a);
    IPAddressOrRange_free(a_00);
    iVar3 = iVar8;
  }
  goto LAB_001020e7;
}



long v2i_IPAddrBlocks(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  char *pcVar5;
  size_t sVar6;
  size_t sVar7;
  ulong uVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  int iVar12;
  undefined1 *__accept;
  long in_FS_OFFSET;
  long local_a8;
  uint *local_98;
  uint local_74;
  char *local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [24];
  long local_40;
  
  iVar10 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_a8 = OPENSSL_sk_new(IPAddressFamily_cmp);
  if (local_a8 == 0) {
    ERR_new();
    ERR_set_debug("crypto/x509/v3_addr.c",0x3b9,"v2i_IPAddrBlocks");
    ERR_set_error(0x22,0x8000f,0);
  }
  else {
    for (; iVar2 = OPENSSL_sk_num(param_3), iVar10 < iVar2; iVar10 = iVar10 + 1) {
      iVar9 = 4;
      __accept = v4addr_chars_3;
      iVar12 = 1;
      lVar4 = OPENSSL_sk_value(param_3,iVar10);
      iVar2 = ossl_v3_name_cmp(*(undefined8 *)(lVar4 + 8),&_LC25);
      if (iVar2 != 0) {
        iVar9 = 0x10;
        iVar12 = 2;
        iVar2 = ossl_v3_name_cmp(*(undefined8 *)(lVar4 + 8),&_LC26);
        __accept = "0123456789.:abcdefABCDEF";
        if (iVar2 == 0) goto LAB_001023e1;
        iVar9 = 4;
        __accept = v4addr_chars_3;
        iVar12 = 1;
        iVar2 = ossl_v3_name_cmp(*(undefined8 *)(lVar4 + 8),"IPv4-SAFI");
        if (iVar2 == 0) {
LAB_001025e6:
          if (*(char **)(lVar4 + 0x10) == (char *)0x0) {
            ERR_new();
            ERR_set_debug("crypto/x509/v3_addr.c",0x3e5,"v2i_IPAddrBlocks");
            ERR_set_error(0x22,0x7c,0);
            goto LAB_00102901;
          }
          uVar8 = strtoul(*(char **)(lVar4 + 0x10),&local_70,0);
          pcVar5 = local_70;
          local_74 = (uint)uVar8;
          sVar6 = strspn(local_70," \t");
          local_70 = pcVar5 + sVar6;
          if ((0xff < (uint)uVar8) ||
             (pcVar5 = local_70 + 1, cVar1 = *local_70, local_70 = pcVar5, cVar1 != ':')) {
            ERR_new();
            ERR_set_debug("crypto/x509/v3_addr.c",0x3eb,"v2i_IPAddrBlocks");
            ERR_set_error(0x22,0xa4,0);
            ERR_add_error_data(4,"name=",*(undefined8 *)(lVar4 + 8),", value=",
                               *(undefined8 *)(lVar4 + 0x10));
            goto LAB_00102901;
          }
          sVar6 = strspn(pcVar5," \t");
          local_70 = pcVar5 + sVar6;
          pcVar5 = CRYPTO_strdup(local_70,"crypto/x509/v3_addr.c",0x3f0);
          local_98 = &local_74;
          goto LAB_00102410;
        }
        iVar2 = ossl_v3_name_cmp(*(undefined8 *)(lVar4 + 8),"IPv6-SAFI");
        if (iVar2 == 0) {
          iVar9 = 0x10;
          iVar12 = 2;
          __accept = "0123456789.:abcdefABCDEF";
          goto LAB_001025e6;
        }
        ERR_new();
        ERR_set_debug("crypto/x509/v3_addr.c",0x3cf,"v2i_IPAddrBlocks");
        ERR_set_error(0x22,0x73,&_LC29,*(undefined8 *)(lVar4 + 8));
LAB_00102901:
        pcVar5 = (char *)0x0;
        goto LAB_00102539;
      }
LAB_001023e1:
      pcVar5 = CRYPTO_strdup(*(char **)(lVar4 + 0x10),"crypto/x509/v3_addr.c",0x3f2);
      local_98 = (uint *)0x0;
LAB_00102410:
      if (pcVar5 == (char *)0x0) goto LAB_00102901;
      iVar2 = strcmp(pcVar5,"inherit");
      if (iVar2 != 0) {
        sVar6 = strspn(pcVar5,__accept);
        sVar7 = strspn(pcVar5 + (int)sVar6," \t");
        iVar3 = (int)sVar7 + (int)sVar6;
        iVar2 = iVar3 + 1;
        cVar1 = pcVar5[iVar3];
        pcVar5[(int)sVar6] = '\0';
        iVar3 = ossl_a2i_ipadd(local_68,pcVar5);
        if (iVar3 == iVar9) {
          if (cVar1 == '-') {
            sVar6 = strspn(pcVar5 + iVar2," \t");
            iVar2 = iVar2 + (int)sVar6;
            sVar6 = strspn(pcVar5 + iVar2,__accept);
            iVar3 = (int)sVar6 + iVar2;
            if ((iVar2 == iVar3) || (pcVar5[iVar3] != '\0')) {
              ERR_new();
              uVar11 = 0x425;
            }
            else {
              iVar2 = ossl_a2i_ipadd(local_58,pcVar5 + iVar2);
              if (iVar2 != iVar9) {
                ERR_new();
                ERR_set_debug("crypto/x509/v3_addr.c",0x42a,"v2i_IPAddrBlocks");
                uVar11 = 0xa6;
                goto LAB_00102509;
              }
              sVar6 = 0x10;
              if (iVar12 != 2) {
                sVar6 = 4;
              }
              iVar2 = memcmp(local_68,local_58,sVar6);
              if (iVar2 < 1) {
                iVar2 = X509v3_addr_add_range(local_a8,iVar12,local_98,local_68,local_58);
                if (iVar2 != 0) goto LAB_001026b7;
                ERR_new();
                uVar11 = 0x434;
                goto LAB_00102779;
              }
              ERR_new();
              uVar11 = 0x42f;
            }
          }
          else if (cVar1 == '/') {
            uVar8 = strtoul(pcVar5 + iVar2,&local_70,10);
            if ((((pcVar5 + iVar2 != local_70) && (*local_70 == '\0')) && ((int)uVar8 <= iVar9 * 8))
               && (-1 < (int)uVar8)) {
              iVar2 = X509v3_addr_add_prefix(local_a8,iVar12,local_98,local_68);
              if (iVar2 != 0) goto LAB_001026b7;
              ERR_new();
              uVar11 = 0x41d;
              goto LAB_00102779;
            }
            ERR_new();
            uVar11 = 0x418;
          }
          else {
            if (cVar1 == '\0') {
              iVar2 = X509v3_addr_add_prefix(local_a8,iVar12,local_98,local_68,iVar9 * 8);
              if (iVar2 != 0) {
LAB_001026b7:
                CRYPTO_free(pcVar5);
                goto LAB_00102458;
              }
              ERR_new();
              uVar11 = 0x43a;
LAB_00102779:
              ERR_set_debug("crypto/x509/v3_addr.c",uVar11,"v2i_IPAddrBlocks");
              ERR_set_error(0x22,0x80022,0);
              goto LAB_00102539;
            }
            ERR_new();
            uVar11 = 0x43f;
          }
          ERR_set_debug("crypto/x509/v3_addr.c",uVar11,"v2i_IPAddrBlocks");
          uVar11 = 0x74;
        }
        else {
          ERR_new();
          ERR_set_debug("crypto/x509/v3_addr.c",0x40c,"v2i_IPAddrBlocks");
          uVar11 = 0xa6;
        }
LAB_00102509:
        ERR_set_error(0x22,uVar11,0);
        ERR_add_error_data(4,"name=",*(undefined8 *)(lVar4 + 8),", value=",
                           *(undefined8 *)(lVar4 + 0x10));
        goto LAB_00102539;
      }
      iVar2 = X509v3_addr_add_inherit(local_a8,iVar12,local_98);
      if (iVar2 == 0) {
        ERR_new();
        ERR_set_debug("crypto/x509/v3_addr.c",0x3fd,"v2i_IPAddrBlocks");
        uVar11 = 0xa5;
        goto LAB_00102509;
      }
      CRYPTO_free(pcVar5);
LAB_00102458:
    }
    iVar10 = X509v3_addr_canonize(local_a8);
    if (iVar10 != 0) goto LAB_00102565;
    pcVar5 = (char *)0x0;
LAB_00102539:
    CRYPTO_free(pcVar5);
    OPENSSL_sk_pop_free(local_a8,IPAddressFamily_free);
  }
  local_a8 = 0;
LAB_00102565:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_a8;
}



undefined8 X509v3_addr_inherits(long param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar3 = 0;
  while( true ) {
    iVar1 = OPENSSL_sk_num(param_1);
    if (iVar1 <= iVar3) {
      return 0;
    }
    lVar2 = OPENSSL_sk_value(param_1,iVar3);
    if (**(int **)(lVar2 + 8) == 0) break;
    iVar3 = iVar3 + 1;
  }
  return 1;
}



undefined8 X509v3_addr_subset(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  
  if (param_1 == 0) {
    return 1;
  }
  if (param_1 == param_2) {
    return 1;
  }
  if ((param_2 != 0) && (iVar1 = X509v3_addr_inherits(), iVar1 == 0)) {
    iVar1 = X509v3_addr_inherits(param_2);
    if (iVar1 == 0) {
      OPENSSL_sk_set_cmp_func(param_2,IPAddressFamily_cmp);
      OPENSSL_sk_sort(param_2);
      iVar1 = 0;
      while( true ) {
        iVar2 = OPENSSL_sk_num(param_1);
        if (iVar2 <= iVar1) {
          return 1;
        }
        puVar4 = (undefined8 *)OPENSSL_sk_value(param_1,iVar1);
        uVar3 = OPENSSL_sk_find(param_2,puVar4);
        puVar5 = (undefined8 *)OPENSSL_sk_value(param_2,uVar3);
        if (puVar5 == (undefined8 *)0x0) {
          return 0;
        }
        if (1 < *(int *)*puVar4 - 2U) {
          return 0;
        }
        if (1 < *(int *)*puVar5 - 2U) break;
        iVar2 = X509v3_addr_get_afi(puVar5);
        lVar6 = 4;
        if (iVar2 != 1) {
          lVar6 = (ulong)(iVar2 == 2) << 4;
        }
        iVar2 = addr_contains(*(undefined8 *)(puVar5[1] + 8),*(undefined8 *)(puVar4[1] + 8),lVar6);
        if (iVar2 == 0) {
          return 0;
        }
        iVar1 = iVar1 + 1;
      }
      return 0;
    }
  }
  return 0;
}



undefined8 X509v3_addr_validate_path(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x98) != 0) {
    iVar1 = OPENSSL_sk_num();
    if ((iVar1 != 0) && (*(long *)(param_1 + 0x38) != 0)) {
      uVar2 = addr_validate_path_internal(param_1,*(undefined8 *)(param_1 + 0x98),0);
      return uVar2;
    }
  }
  *(undefined4 *)(param_1 + 0xb0) = 1;
  return 0;
}



undefined8 X509v3_addr_validate_resource_set(long param_1,long param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_2 == 0) {
    return 1;
  }
  if ((param_1 != 0) && (iVar1 = OPENSSL_sk_num(), iVar1 != 0)) {
    if ((param_3 == 0) && (iVar1 = X509v3_addr_inherits(param_2), iVar1 != 0)) {
      return 0;
    }
    uVar2 = addr_validate_path_internal(0,param_1,param_2);
    return uVar2;
  }
  return 0;
}


