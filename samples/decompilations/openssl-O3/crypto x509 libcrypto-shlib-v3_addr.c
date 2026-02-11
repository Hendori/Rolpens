
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



int range_should_be_prefix(char *param_1,char *param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  byte bVar4;
  long lVar5;
  int iVar6;
  
  if (param_3 == 0) {
    return 0;
  }
  if (*param_2 == *param_1) {
    if (param_1[1] == param_2[1]) {
      if (param_1[2] == param_2[2]) {
        if (param_1[3] == param_2[3]) {
          if ((param_3 == 4) || (param_1[4] != param_2[4])) {
            iVar3 = 4;
          }
          else if (param_1[5] == param_2[5]) {
            if (param_1[6] == param_2[6]) {
              if (param_1[7] == param_2[7]) {
                if (param_1[8] == param_2[8]) {
                  if (param_1[9] == param_2[9]) {
                    if (param_1[10] == param_2[10]) {
                      if (param_1[0xb] == param_2[0xb]) {
                        if (param_1[0xc] == param_2[0xc]) {
                          if (param_1[0xd] == param_2[0xd]) {
                            if (param_1[0xe] == param_2[0xe]) {
                              iVar3 = 0xf;
                              if (param_3 == 0x10) {
                                iVar3 = (param_1[0xf] == param_2[0xf]) + 0xf;
                              }
                            }
                            else {
                              iVar3 = 0xe;
                            }
                          }
                          else {
                            iVar3 = 0xd;
                          }
                        }
                        else {
                          iVar3 = 0xc;
                        }
                      }
                      else {
                        iVar3 = 0xb;
                      }
                    }
                    else {
                      iVar3 = 10;
                    }
                  }
                  else {
                    iVar3 = 9;
                  }
                }
                else {
                  iVar3 = 8;
                }
              }
              else {
                iVar3 = 7;
              }
            }
            else {
              iVar3 = 6;
            }
          }
          else {
            iVar3 = 5;
          }
        }
        else {
          iVar3 = 3;
        }
      }
      else {
        iVar3 = 2;
      }
    }
    else {
      iVar3 = 1;
    }
  }
  else {
    iVar3 = 0;
  }
  lVar5 = (long)(param_3 + -1);
  while ((param_1[lVar5] == '\0' && (param_2[lVar5] == -1))) {
    lVar5 = lVar5 + -1;
    if ((int)lVar5 == -1) {
LAB_001001e0:
      return iVar3 << 3;
    }
  }
  if (iVar3 < (int)lVar5) {
    return -1;
  }
  if (iVar3 <= (int)lVar5) {
    bVar1 = param_1[iVar3];
    bVar2 = param_2[iVar3];
    bVar4 = bVar1 ^ bVar2;
    if (bVar4 < 0x20) {
      if (bVar1 == bVar2) {
        return -1;
      }
      switch(bVar4) {
      default:
        goto switchD_00100191_caseD_0;
      case 1:
        iVar6 = 7;
        break;
      case 3:
        iVar6 = 6;
        break;
      case 7:
        iVar6 = 5;
        break;
      case 0xf:
        iVar6 = 4;
        break;
      case 0x1f:
        iVar6 = 3;
      }
    }
    else if (bVar4 == 0x3f) {
      iVar6 = 2;
    }
    else {
      iVar6 = 1;
      if (bVar4 != 0x7f) {
        return -1;
      }
    }
    if ((bVar1 & bVar4) == 0) {
      iVar6 = iVar6 + iVar3 * 8;
      if ((~bVar2 & bVar4) != 0) {
        iVar6 = -1;
      }
      return iVar6;
    }
switchD_00100191_caseD_0:
    return -1;
  }
  goto LAB_001001e0;
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
  if (uVar4 == 0) goto LAB_0010030a;
  puVar2 = *(undefined8 **)(param_2 + 2);
  if (uVar4 < 8) {
    if ((uVar4 & 4) == 0) {
      if (uVar4 != 0) {
        *(undefined1 *)param_1 = *(undefined1 *)puVar2;
        if ((uVar4 & 2) == 0) goto LAB_001003c4;
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
LAB_001003c4:
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
LAB_0010030a:
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
LAB_0010047d:
        iVar1 = addr_expand(param_3,uVar2,param_4,0xff);
        return iVar1 != 0;
      }
    }
    else if (*param_1 == 1) {
      iVar1 = addr_expand(param_2,**(undefined8 **)(param_1 + 2),param_4,0);
      if (iVar1 != 0) {
        uVar2 = *(undefined8 *)(*(long *)(param_1 + 2) + 8);
        goto LAB_0010047d;
      }
    }
  }
  return false;
}



int v6IPAddressOrRange_cmp(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long in_FS_OFFSET;
  undefined1 auStack_58 [16];
  undefined1 local_48 [24];
  long local_30;
  
  piVar1 = (int *)*param_2;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  piVar2 = (int *)*param_1;
  if (*piVar2 == 0) {
    piVar2 = *(int **)(piVar2 + 2);
    iVar3 = addr_expand(auStack_58,piVar2,0x10,0);
    if (iVar3 != 0) {
      iVar5 = *piVar2 * 8 - ((uint)*(undefined8 *)(piVar2 + 4) & 7);
      iVar3 = *piVar1;
      if (iVar3 == 0) goto LAB_00100590;
LAB_0010051a:
      if ((iVar3 == 1) &&
         (iVar3 = addr_expand(local_48,**(undefined8 **)(piVar1 + 2),0x10,0), iVar3 != 0)) {
        iVar3 = 0x80;
LAB_001005f8:
        iVar4 = memcmp(auStack_58,local_48,0x10);
        if (iVar4 == 0) {
          iVar4 = iVar5 - iVar3;
        }
        goto LAB_00100530;
      }
    }
  }
  else if ((*piVar2 == 1) &&
          (iVar3 = addr_expand(auStack_58,**(undefined8 **)(piVar2 + 2),0x10,0), iVar3 != 0)) {
    iVar3 = *piVar1;
    iVar5 = 0x80;
    if (iVar3 != 0) goto LAB_0010051a;
LAB_00100590:
    piVar1 = *(int **)(piVar1 + 2);
    iVar3 = addr_expand(local_48,piVar1,0x10,0);
    if (iVar3 != 0) {
      iVar3 = *piVar1 * 8 - ((uint)*(undefined8 *)(piVar1 + 4) & 7);
      goto LAB_001005f8;
    }
  }
  iVar4 = -1;
LAB_00100530:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar4;
}



undefined8 i2r_address(BIO *param_1,int param_2,undefined1 param_3,int *param_4)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long in_FS_OFFSET;
  undefined8 local_60;
  byte local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_4 < 0) {
LAB_00100705:
    uVar3 = 0;
  }
  else {
    if (param_2 == 1) {
      iVar2 = addr_expand(local_58,param_4,4,param_3);
      if (iVar2 == 0) goto LAB_00100705;
      BIO_printf(param_1,"%d.%d.%d.%d",(ulong)local_58[0],(ulong)local_58[1],(ulong)local_58[2],
                 (ulong)local_58[3]);
    }
    else if (param_2 == 2) {
      iVar2 = addr_expand(local_58,param_4,0x10,param_3);
      if (iVar2 == 0) goto LAB_00100705;
      if ((local_58[0xf] == '\0') && (local_58[0xe] == '\0')) {
        if ((local_58[0xd] == '\0') && (local_58[0xc] == '\0')) {
          if ((local_58[0xb] == '\0') && (local_58[10] == '\0')) {
            if ((local_58[9] == '\0') && (local_58[8] == '\0')) {
              if ((local_58[7] == '\0') && (local_58[6] == '\0')) {
                if ((local_58[5] == '\0') && (local_58[4] == '\0')) {
                  if ((local_58[3] == 0) && (local_58[2] == 0)) {
                    if ((local_58[1] == 0) && (local_58[0] == 0)) {
                      BIO_puts(param_1,":");
                      BIO_puts(param_1,":");
                      goto LAB_001006da;
                    }
                    iVar2 = 2;
                  }
                  else {
                    iVar2 = 4;
                  }
                }
                else {
                  iVar2 = 6;
                }
              }
              else {
                iVar2 = 8;
              }
            }
            else {
              iVar2 = 10;
            }
          }
          else {
            iVar2 = 0xc;
          }
        }
        else {
          iVar2 = 0xe;
        }
      }
      else {
        iVar2 = 0x10;
      }
      local_60 = (ulong)((iVar2 - 1U >> 1) + 2) * 2;
      lVar4 = 2;
      do {
        if (lVar4 == 0x10) {
          BIO_printf(param_1,"%x%s",(ulong)CONCAT11(local_58[lVar4 + -2],local_58[lVar4 + -1]),&_LC4
                    );
          goto LAB_001006da;
        }
        BIO_printf(param_1,"%x%s",(ulong)CONCAT11(local_58[lVar4 + -2],local_58[lVar4 + -1]),&_LC2);
        lVar4 = lVar4 + 2;
      } while (lVar4 != local_60);
      BIO_puts(param_1,":");
    }
    else {
      if (*param_4 != 0) {
        BIO_printf(param_1,"%s%02x",&_LC4,(ulong)**(byte **)(param_4 + 2));
        if (1 < *param_4) {
          lVar4 = 1;
          bVar1 = *(byte *)(*(long *)(param_4 + 2) + 1);
          while( true ) {
            BIO_printf(param_1,"%s%02x",&_LC2,(ulong)bVar1);
            lVar4 = lVar4 + 1;
            if (*param_4 <= (int)lVar4) break;
            bVar1 = *(byte *)(*(long *)(param_4 + 2) + lVar4);
          }
        }
      }
      BIO_printf(param_1,"[%d]",(ulong)((uint)*(undefined8 *)(param_4 + 4) & 7));
    }
LAB_001006da:
    uVar3 = 1;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int v4IPAddressOrRange_cmp(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long in_FS_OFFSET;
  undefined1 auStack_58 [16];
  undefined1 local_48 [24];
  long local_30;
  
  piVar1 = (int *)*param_2;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  piVar2 = (int *)*param_1;
  if (*piVar2 == 0) {
    piVar2 = *(int **)(piVar2 + 2);
    iVar3 = addr_expand(auStack_58,piVar2,4,0);
    if (iVar3 != 0) {
      iVar5 = *piVar2 * 8 - ((uint)*(undefined8 *)(piVar2 + 4) & 7);
      iVar3 = *piVar1;
      if (iVar3 == 0) goto LAB_00100a10;
LAB_0010099a:
      if ((iVar3 == 1) &&
         (iVar3 = addr_expand(local_48,**(undefined8 **)(piVar1 + 2),4,0), iVar3 != 0)) {
        iVar3 = 0x20;
LAB_00100a78:
        iVar4 = memcmp(auStack_58,local_48,4);
        if (iVar4 == 0) {
          iVar4 = iVar5 - iVar3;
        }
        goto LAB_001009b0;
      }
    }
  }
  else if ((*piVar2 == 1) &&
          (iVar3 = addr_expand(auStack_58,**(undefined8 **)(piVar2 + 2),4,0), iVar3 != 0)) {
    iVar3 = *piVar1;
    iVar5 = 0x20;
    if (iVar3 != 0) goto LAB_0010099a;
LAB_00100a10:
    piVar1 = *(int **)(piVar1 + 2);
    iVar3 = addr_expand(local_48,piVar1,4,0);
    if (iVar3 != 0) {
      iVar3 = *piVar1 * 8 - ((uint)*(undefined8 *)(piVar1 + 4) & 7);
      goto LAB_00100a78;
    }
  }
  iVar4 = -1;
LAB_001009b0:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar4;
}



undefined8 addr_contains(long param_1,long param_2,int param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  long in_FS_OFFSET;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 != 0) && (param_2 != param_1)) {
    iVar5 = 0;
    iVar6 = 0;
    if (param_1 == 0) {
LAB_00100b5e:
      uVar3 = 0;
      goto LAB_00100b60;
    }
    for (; iVar2 = OPENSSL_sk_num(param_2), iVar5 < iVar2; iVar5 = iVar5 + 1) {
      uVar3 = OPENSSL_sk_value(param_2,iVar5);
      iVar2 = extract_min_max(uVar3,local_68,local_58,param_3);
      if (iVar2 == 0) goto LAB_00100b5e;
      while( true ) {
        iVar2 = OPENSSL_sk_num(param_1);
        if ((iVar2 <= iVar6) ||
           (piVar4 = (int *)OPENSSL_sk_value(param_1,iVar6), piVar4 == (int *)0x0))
        goto LAB_00100b5e;
        if (*piVar4 == 0) {
          uVar3 = *(undefined8 *)(piVar4 + 2);
          iVar2 = addr_expand(local_88,uVar3,param_3,0);
          if (iVar2 == 0) goto LAB_00100b5e;
        }
        else {
          if (*piVar4 != 1) goto LAB_00100b5e;
          puVar1 = *(undefined8 **)(piVar4 + 2);
          iVar2 = addr_expand(local_88,*puVar1,param_3,0);
          if (iVar2 == 0) goto LAB_00100b5e;
          uVar3 = puVar1[1];
        }
        iVar2 = addr_expand(local_78,uVar3,param_3,0xff);
        if (iVar2 == 0) goto LAB_00100b5e;
        iVar2 = memcmp(local_78,local_58,(long)param_3);
        if (-1 < iVar2) break;
        iVar6 = iVar6 + 1;
      }
      iVar2 = memcmp(local_88,local_68,(long)param_3);
      if (0 < iVar2) goto LAB_00100b5e;
    }
  }
  uVar3 = 1;
LAB_00100b60:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
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



undefined8 make_addressRange(undefined8 *param_1,uchar *param_2,uchar *param_3,int param_4)

{
  ulong *puVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  IPAddressOrRange *a;
  IPAddressRange *pIVar5;
  ulong uVar6;
  ASN1_BIT_STRING *pAVar7;
  long lVar8;
  int length;
  size_t __n;
  long lVar9;
  
  __n = (size_t)param_4;
  iVar3 = memcmp(param_2,param_3,__n);
  if (0 < iVar3) {
    return 0;
  }
  uVar4 = range_should_be_prefix(param_2,param_3,param_4);
  if (-1 < (int)uVar4) {
    if (uVar4 != param_4 * 8 && SBORROW4(uVar4,param_4 * 8) == (int)(uVar4 + param_4 * -8) < 0) {
      return 0;
    }
    a = IPAddressOrRange_new();
    if (a == (IPAddressOrRange *)0x0) {
      return 0;
    }
    pAVar7 = (a->u).addressPrefix;
    a->type = 0;
    if (pAVar7 == (ASN1_BIT_STRING *)0x0) {
      pAVar7 = ASN1_BIT_STRING_new();
      (a->u).addressPrefix = pAVar7;
      if (pAVar7 == (ASN1_BIT_STRING *)0x0) goto LAB_00100f7a;
    }
    length = (int)(uVar4 + 7) >> 3;
    iVar3 = ASN1_BIT_STRING_set(pAVar7,param_2,length);
    if (iVar3 == 0) goto LAB_00100f7a;
    uVar4 = uVar4 & 7;
    if (uVar4 != 0) {
      pbVar2 = ((a->u).addressPrefix)->data + (long)length + -1;
      *pbVar2 = *pbVar2 & (byte)(-0x100 >> (sbyte)uVar4);
    }
    ossl_asn1_string_set_bits_left((a->u).addressPrefix,8 - uVar4);
    goto LAB_001011e0;
  }
  a = IPAddressOrRange_new();
  if (a == (IPAddressOrRange *)0x0) {
    return 0;
  }
  a->type = 1;
  pIVar5 = IPAddressRange_new();
  (a->u).addressRange = pIVar5;
  if (pIVar5 == (IPAddressRange *)0x0) goto LAB_00100f7a;
  if (pIVar5->min == (ASN1_BIT_STRING *)0x0) {
    pAVar7 = ASN1_BIT_STRING_new();
    pIVar5->min = pAVar7;
    if (pAVar7 == (ASN1_BIT_STRING *)0x0) goto LAB_00100f7a;
    pIVar5 = (a->u).addressRange;
  }
  if (pIVar5->max == (ASN1_BIT_STRING **)0x0) {
    pAVar7 = ASN1_BIT_STRING_new();
    pIVar5->max = (ASN1_BIT_STRING **)pAVar7;
    if (pAVar7 == (ASN1_BIT_STRING *)0x0) goto LAB_00100f7a;
    pIVar5 = (a->u).addressRange;
  }
  pAVar7 = pIVar5->min;
  if (param_4 == 0) {
    iVar3 = ASN1_BIT_STRING_set(pAVar7,param_2,0);
    if (iVar3 == 0) goto LAB_00100f7a;
    ossl_asn1_string_set_bits_left(((a->u).addressRange)->min,0);
    pAVar7 = (ASN1_BIT_STRING *)((a->u).addressPrefix)->data;
LAB_001011b6:
    iVar3 = ASN1_BIT_STRING_set(pAVar7,param_3,0);
    if (iVar3 != 0) {
      ossl_asn1_string_set_bits_left(((a->u).addressPrefix)->data,0);
      goto LAB_001011e0;
    }
  }
  else {
    lVar9 = __n - 1;
    lVar8 = lVar9;
    iVar3 = param_4;
    if (param_2[__n - 1] == '\0') {
      lVar8 = __n - 2;
      iVar3 = param_4 + -1;
      if (param_2[__n - 2] != '\0') goto LAB_00101010;
      iVar3 = param_4 + -2;
      lVar8 = (long)iVar3 + -1;
      if (param_2[(long)iVar3 + -1] != '\0') goto LAB_00101010;
      iVar3 = param_4 + -3;
      lVar8 = (long)iVar3 + -1;
      if (param_2[(long)iVar3 + -1] != '\0') goto LAB_00101010;
      iVar3 = param_4 + -4;
      if (iVar3 != 0) {
        lVar8 = (long)iVar3 + -1;
        if (param_2[(long)iVar3 + -1] == '\0') {
          iVar3 = param_4 + -5;
          lVar8 = (long)iVar3 + -1;
          if (param_2[(long)iVar3 + -1] == '\0') {
            iVar3 = param_4 + -6;
            lVar8 = (long)iVar3 + -1;
            if (param_2[(long)iVar3 + -1] == '\0') {
              iVar3 = param_4 + -7;
              lVar8 = (long)iVar3 + -1;
              if (param_2[(long)iVar3 + -1] == '\0') {
                iVar3 = param_4 + -8;
                lVar8 = (long)iVar3 + -1;
                if (param_2[(long)iVar3 + -1] == '\0') {
                  iVar3 = param_4 + -9;
                  lVar8 = (long)iVar3 + -1;
                  if (param_2[(long)iVar3 + -1] == '\0') {
                    iVar3 = param_4 + -10;
                    lVar8 = (long)iVar3 + -1;
                    if (param_2[(long)iVar3 + -1] == '\0') {
                      iVar3 = param_4 + -0xb;
                      lVar8 = (long)iVar3 + -1;
                      if (param_2[(long)iVar3 + -1] == '\0') {
                        if (param_2[3] == '\0') {
                          if (param_2[2] == '\0') {
                            if (param_2[1] == '\0') {
                              lVar8 = 0;
                              iVar3 = 1;
                              if (*param_2 == '\0') goto LAB_00100f68;
                            }
                            else {
                              lVar8 = 1;
                              iVar3 = 2;
                            }
                          }
                          else {
                            lVar8 = 2;
                            iVar3 = 3;
                          }
                        }
                        else {
                          lVar8 = 3;
                          iVar3 = 4;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        goto LAB_00101010;
      }
LAB_00100f68:
      iVar3 = ASN1_BIT_STRING_set(pAVar7,param_2,0);
      if (iVar3 == 0) goto LAB_00100f7a;
      ossl_asn1_string_set_bits_left(((a->u).addressRange)->min,0);
      pAVar7 = (a->u).addressPrefix;
    }
    else {
LAB_00101010:
      iVar3 = ASN1_BIT_STRING_set(pAVar7,param_2,iVar3);
      if (iVar3 == 0) goto LAB_00100f7a;
      ossl_asn1_string_set_bits_left(((a->u).addressRange)->min,0);
      iVar3 = 1;
      if ((param_2[lVar8] & 0x7f) == 0) {
        uVar6 = 7;
      }
      else {
        do {
          iVar3 = iVar3 + 1;
        } while ((0xffU >> ((byte)iVar3 & 0x1f) & (uint)param_2[lVar8]) != 0);
        uVar6 = (ulong)(8 - iVar3);
      }
      pAVar7 = (ASN1_BIT_STRING *)(a->u).addressRange;
      *(ulong *)(*(long *)pAVar7 + 0x10) = *(ulong *)(*(long *)pAVar7 + 0x10) | uVar6;
    }
    pAVar7 = (ASN1_BIT_STRING *)pAVar7->data;
    iVar3 = param_4;
    if (param_3[__n - 1] == 0xff) {
      lVar9 = __n - 2;
      if (param_3[__n - 2] == 0xff) {
        iVar3 = param_4 + -2;
        lVar9 = (long)iVar3 + -1;
        if (param_3[(long)iVar3 + -1] == 0xff) {
          iVar3 = param_4 + -3;
          lVar9 = (long)iVar3 + -1;
          if (param_3[(long)iVar3 + -1] == 0xff) {
            iVar3 = param_4 + -4;
            if (iVar3 == 0) goto LAB_001011b6;
            lVar9 = (long)iVar3 + -1;
            if (param_3[(long)iVar3 + -1] == 0xff) {
              iVar3 = param_4 + -5;
              lVar9 = (long)iVar3 + -1;
              if (param_3[(long)iVar3 + -1] == 0xff) {
                iVar3 = param_4 + -6;
                lVar9 = (long)iVar3 + -1;
                if (param_3[(long)iVar3 + -1] == 0xff) {
                  iVar3 = param_4 + -7;
                  lVar9 = (long)iVar3 + -1;
                  if (param_3[(long)iVar3 + -1] == 0xff) {
                    iVar3 = param_4 + -8;
                    lVar9 = (long)iVar3 + -1;
                    if (param_3[(long)iVar3 + -1] == 0xff) {
                      iVar3 = param_4 + -9;
                      lVar9 = (long)iVar3 + -1;
                      if (param_3[(long)iVar3 + -1] == 0xff) {
                        iVar3 = param_4 + -10;
                        lVar9 = (long)iVar3 + -1;
                        if (param_3[(long)iVar3 + -1] == 0xff) {
                          iVar3 = param_4 + -0xb;
                          lVar9 = (long)iVar3 + -1;
                          if (param_3[(long)iVar3 + -1] == 0xff) {
                            if (param_3[3] == 0xff) {
                              if (param_3[2] == 0xff) {
                                if (param_3[1] == 0xff) {
                                  lVar9 = 0;
                                  iVar3 = 1;
                                  if (*param_3 == 0xff) goto LAB_001011b6;
                                }
                                else {
                                  iVar3 = 2;
                                  lVar9 = 1;
                                }
                              }
                              else {
                                iVar3 = 3;
                                lVar9 = 2;
                              }
                            }
                            else {
                              iVar3 = 4;
                              lVar9 = 3;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      else {
        iVar3 = param_4 + -1;
      }
    }
    iVar3 = ASN1_BIT_STRING_set(pAVar7,param_3,iVar3);
    if (iVar3 != 0) {
      ossl_asn1_string_set_bits_left(((a->u).addressPrefix)->data,0);
      iVar3 = 1;
      if ((~param_3[lVar9] & 0x7f) == 0) {
        uVar6 = 7;
      }
      else {
        do {
          iVar3 = iVar3 + 1;
        } while ((~(uint)param_3[lVar9] & 0xffU >> ((byte)iVar3 & 0x1f)) != 0);
        uVar6 = (ulong)(8 - iVar3);
      }
      puVar1 = (ulong *)(((a->u).addressPrefix)->data + 0x10);
      *puVar1 = *puVar1 | uVar6;
LAB_001011e0:
      *param_1 = a;
      return 1;
    }
  }
LAB_00100f7a:
  IPAddressOrRange_free(a);
  return 0;
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
  size_t __n;
  long in_FS_OFFSET;
  ushort local_43;
  undefined1 local_41;
  long local_40;
  
  local_43 = param_2 << 8 | param_2 >> 8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 == (undefined4 *)0x0) {
    __n = 2;
    iVar2 = 2;
  }
  else {
    __n = 3;
    iVar2 = 3;
    local_41 = (undefined1)*param_3;
  }
  for (iVar5 = 0; iVar1 = OPENSSL_sk_num(param_1), iVar5 < iVar1; iVar5 = iVar5 + 1) {
    pIVar3 = (IPAddressFamily *)OPENSSL_sk_value(param_1,iVar5);
    if ((pIVar3->addressFamily->length == iVar2) &&
       (iVar1 = memcmp(pIVar3->addressFamily->data,&local_43,__n), iVar1 == 0)) goto LAB_00101537;
  }
  a = IPAddressFamily_new();
  if (a != (IPAddressFamily *)0x0) {
    if (a->ipAddressChoice == (IPAddressChoice *)0x0) {
      pIVar4 = IPAddressChoice_new();
      a->ipAddressChoice = pIVar4;
      if (pIVar4 == (IPAddressChoice *)0x0) goto LAB_0010159c;
    }
    str = a->addressFamily;
    if (str == (ASN1_OCTET_STRING *)0x0) {
      str = ASN1_OCTET_STRING_new();
      a->addressFamily = str;
      if (str == (ASN1_OCTET_STRING *)0x0) goto LAB_0010159c;
    }
    iVar2 = ASN1_OCTET_STRING_set(str,(uchar *)&local_43,iVar2);
    if ((iVar2 != 0) && (iVar2 = OPENSSL_sk_push(param_1,a), pIVar3 = a, iVar2 != 0))
    goto LAB_00101537;
  }
LAB_0010159c:
  pIVar3 = (IPAddressFamily *)0x0;
  IPAddressFamily_free(a);
LAB_00101537:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pIVar3;
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
        BIO_printf(param_3,"%*sIPv4",(ulong)param_4,&_LC4);
      }
      else if (uVar4 == 2) {
        BIO_printf(param_3,"%*sIPv6",(ulong)param_4,&_LC4);
      }
      else {
        BIO_printf(param_3,"%*sUnknown AFI %u",(ulong)param_4,&_LC4,(ulong)uVar4);
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
              if (bVar1 != 2) goto LAB_00101940;
              BIO_puts(param_3," (Multicast)");
            }
          }
          else if (bVar1 == 4) {
            BIO_puts(param_3," (MPLS)");
          }
          else {
LAB_00101940:
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
          if (bVar1 != 0x41) goto LAB_00101940;
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
            BIO_printf(param_3,"%*s",(ulong)(param_4 + 2),&_LC4);
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
  else if (lVar1 != 0) goto LAB_00101a45;
  pAVar3 = ASN1_NULL_new();
  *(ASN1_NULL **)(piVar4 + 2) = pAVar3;
  if (pAVar3 == (ASN1_NULL *)0x0) {
    return 0;
  }
  piVar4 = *(int **)(lVar2 + 8);
LAB_00101a45:
  *piVar4 = 0;
  return 1;
}



undefined8
X509v3_addr_add_prefix
          (undefined8 param_1,int param_2,undefined8 param_3,uchar *param_4,uint param_5)

{
  byte *pbVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  IPAddressOrRange *a;
  ASN1_BIT_STRING *a_00;
  int length;
  
  lVar5 = make_IPAddressFamily();
  if (lVar5 == 0) {
    return 0;
  }
  piVar2 = *(int **)(lVar5 + 8);
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  if (*piVar2 == 0) {
    if (*(long *)(piVar2 + 2) != 0) {
      return 0;
    }
LAB_00101aa8:
    lVar6 = OPENSSL_sk_new_null();
    if (lVar6 == 0) {
      return 0;
    }
    if (param_2 == 1) {
      OPENSSL_sk_set_cmp_func(lVar6,v4IPAddressOrRange_cmp);
      puVar3 = *(undefined4 **)(lVar5 + 8);
      *puVar3 = 1;
      *(long *)(puVar3 + 2) = lVar6;
      iVar4 = 0x20;
    }
    else if (param_2 == 2) {
      OPENSSL_sk_set_cmp_func(lVar6,v6IPAddressOrRange_cmp);
      puVar3 = *(undefined4 **)(lVar5 + 8);
      *puVar3 = 1;
      *(long *)(puVar3 + 2) = lVar6;
      iVar4 = 0x80;
    }
    else {
      puVar3 = *(undefined4 **)(lVar5 + 8);
      *puVar3 = 1;
      *(long *)(puVar3 + 2) = lVar6;
      iVar4 = 0;
    }
  }
  else {
    if ((*piVar2 != 1) || (lVar6 = *(long *)(piVar2 + 2), lVar6 == 0)) goto LAB_00101aa8;
    iVar4 = 0x20;
    if (param_2 != 1) {
      iVar4 = (uint)(param_2 == 2) << 7;
    }
  }
  if ((int)param_5 < 0) {
    return 0;
  }
  if (iVar4 < (int)param_5) {
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
    if (a_00 == (ASN1_BIT_STRING *)0x0) goto LAB_00101b9f;
  }
  length = (int)(param_5 + 7) >> 3;
  iVar4 = ASN1_BIT_STRING_set(a_00,param_4,length);
  if (iVar4 != 0) {
    if ((param_5 & 7) != 0) {
      pbVar1 = ((a->u).addressPrefix)->data + (long)length + -1;
      *pbVar1 = *pbVar1 & (byte)(-0x100 >> (sbyte)(param_5 & 7));
    }
    ossl_asn1_string_set_bits_left((a->u).addressPrefix,8 - (param_5 & 7));
    iVar4 = OPENSSL_sk_push(lVar6,a);
    if (iVar4 != 0) {
      return 1;
    }
  }
LAB_00101b9f:
  IPAddressOrRange_free(a);
  return 0;
}



undefined8
X509v3_addr_add_range
          (undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  IPAddressOrRange *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar4 = make_IPAddressFamily();
  if ((lVar4 != 0) && (piVar1 = *(int **)(lVar4 + 8), piVar1 != (int *)0x0)) {
    if (*piVar1 == 0) {
      if (*(long *)(piVar1 + 2) == 0) {
LAB_00101c7f:
        lVar5 = OPENSSL_sk_new_null();
        if (lVar5 != 0) {
          if (param_2 == 1) {
            OPENSSL_sk_set_cmp_func(lVar5,v4IPAddressOrRange_cmp);
            puVar2 = *(undefined4 **)(lVar4 + 8);
            lVar4 = 4;
            *puVar2 = 1;
            *(long *)(puVar2 + 2) = lVar5;
          }
          else if (param_2 == 2) {
            OPENSSL_sk_set_cmp_func(lVar5,v6IPAddressOrRange_cmp);
            puVar2 = *(undefined4 **)(lVar4 + 8);
            lVar4 = 0x10;
            *puVar2 = 1;
            *(long *)(puVar2 + 2) = lVar5;
          }
          else {
            puVar2 = *(undefined4 **)(lVar4 + 8);
            lVar4 = 0;
            *puVar2 = 1;
            *(long *)(puVar2 + 2) = lVar5;
          }
          goto LAB_00101cd8;
        }
      }
    }
    else {
      if ((*piVar1 != 1) || (lVar5 = *(long *)(piVar1 + 2), lVar5 == 0)) goto LAB_00101c7f;
      lVar4 = 4;
      if (param_2 != 1) {
        lVar4 = (ulong)(param_2 == 2) << 4;
      }
LAB_00101cd8:
      iVar3 = make_addressRange(&local_38,param_4,param_5,lVar4);
      if (iVar3 != 0) {
        iVar3 = OPENSSL_sk_push(lVar5,local_38);
        uVar6 = 1;
        if (iVar3 != 0) goto LAB_00101cec;
        IPAddressOrRange_free(local_38);
      }
    }
  }
  uVar6 = 0;
LAB_00101cec:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
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
  if ((((param_3 != 0) && (param_1 != (uint *)0x0)) && (param_4 != 0)) &&
     (((iVar2 <= param_5 && (*param_1 < 2)) && (iVar1 = extract_min_max(), iVar1 != 0)))) {
    return iVar2;
  }
  return 0;
}



undefined8 X509v3_addr_is_canonical(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  int *piVar9;
  undefined8 uVar10;
  int iVar11;
  size_t __n;
  int iVar12;
  long in_FS_OFFSET;
  bool bVar13;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  char local_68 [4];
  char local_64;
  char local_63;
  char local_62;
  char local_61;
  char local_60;
  char local_5f;
  char local_5e;
  char local_5d;
  undefined1 local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) {
LAB_001022bd:
    uVar8 = 1;
  }
  else {
    iVar12 = 0;
    do {
      while( true ) {
        iVar3 = OPENSSL_sk_num(param_1);
        if (iVar3 + -1 <= iVar12) {
          iVar12 = 0;
          goto LAB_00101eee;
        }
        iVar11 = iVar12 + 1;
        puVar6 = (undefined8 *)OPENSSL_sk_value(param_1,iVar12);
        puVar7 = (undefined8 *)OPENSSL_sk_value(param_1,iVar11);
        iVar3 = *(int *)*puVar6;
        if (1 < iVar3 - 2U) goto LAB_00101e62;
        iVar5 = *(int *)*puVar7;
        if (1 < iVar5 - 2U) goto LAB_00101e62;
        iVar12 = iVar5;
        if (iVar3 <= iVar5) {
          iVar12 = iVar3;
        }
        iVar4 = memcmp(*(void **)((int *)*puVar6 + 2),*(void **)((int *)*puVar7 + 2),(long)iVar12);
        iVar12 = iVar11;
        if (iVar4 != 0) break;
        if (iVar3 - iVar5 != -1) goto LAB_00101e62;
      }
    } while (iVar4 < 0);
LAB_00101e62:
    uVar8 = 0;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00101eee:
  iVar3 = OPENSSL_sk_num(param_1);
  if (iVar3 <= iVar12) goto LAB_001022bd;
  puVar6 = (undefined8 *)OPENSSL_sk_value(param_1,iVar12);
  iVar3 = X509v3_addr_get_afi(puVar6);
  if (iVar3 == 1) {
    iVar11 = 3;
    __n = 4;
    uVar8 = 4;
  }
  else {
    __n = 0x10;
    iVar11 = 0xf;
    if (iVar3 != 2) {
      iVar11 = -1;
      __n = 0;
    }
    uVar8 = 0;
    if (iVar3 == 2) {
      uVar8 = 0x10;
    }
  }
  if ((puVar6 == (undefined8 *)0x0) || (piVar9 = (int *)puVar6[1], piVar9 == (int *)0x0))
  goto LAB_00101e62;
  if (*piVar9 != 0) {
    if ((*piVar9 != 1) || (1 < *(int *)*puVar6 - 2U)) goto LAB_00101e62;
    uVar2 = *(undefined8 *)(piVar9 + 2);
    iVar3 = OPENSSL_sk_num(uVar2);
    if (iVar3 == 0) goto LAB_00101e62;
    iVar3 = 0;
    while (iVar5 = OPENSSL_sk_num(uVar2), iVar3 < iVar5 + -1) {
      iVar5 = iVar3 + 1;
      piVar9 = (int *)OPENSSL_sk_value(uVar2,iVar3);
      uVar10 = OPENSSL_sk_value(uVar2,iVar5);
      iVar3 = extract_min_max(piVar9,local_88,local_78,uVar8);
      if (iVar3 == 0) goto LAB_00101e62;
      iVar3 = extract_min_max(uVar10,local_68,local_58,uVar8);
      if ((((iVar3 == 0) || (iVar3 = memcmp(local_88,local_68,__n), -1 < iVar3)) ||
          (iVar3 = memcmp(local_88,local_78,__n), 0 < iVar3)) ||
         ((iVar3 = memcmp(local_68,local_58,__n), 0 < iVar3 || (iVar11 == -1)))) goto LAB_00101e62;
      cVar1 = local_68[iVar11];
      local_68[iVar11] = cVar1 + -1;
      if (((((cVar1 == '\0') &&
            ((cVar1 = local_68[iVar11 + -1], local_68[iVar11 + -1] = cVar1 + -1, cVar1 == '\0' &&
             (cVar1 = local_68[iVar11 + -2], local_68[iVar11 + -2] = cVar1 + -1, cVar1 == '\0'))))
           && (cVar1 = local_68[iVar11 + -3], local_68[iVar11 + -3] = cVar1 + -1, cVar1 == '\0')) &&
          ((((iVar11 != 3 &&
             (cVar1 = local_5d + -1, bVar13 = local_5d == '\0', local_5d = cVar1, bVar13)) &&
            (cVar1 = local_5e + -1, bVar13 = local_5e == '\0', local_5e = cVar1, bVar13)) &&
           (((cVar1 = local_5f + -1, bVar13 = local_5f == '\0', local_5f = cVar1, bVar13 &&
             (cVar1 = local_60 + -1, bVar13 = local_60 == '\0', local_60 = cVar1, bVar13)) &&
            ((cVar1 = local_61 + -1, bVar13 = local_61 == '\0', local_61 = cVar1, bVar13 &&
             ((cVar1 = local_62 + -1, bVar13 = local_62 == '\0', local_62 = cVar1, bVar13 &&
              (cVar1 = local_63 + -1, bVar13 = local_63 == '\0', local_63 = cVar1, bVar13))))))))))
         && ((cVar1 = local_64 + -1, bVar13 = local_64 == '\0', local_64 = cVar1, bVar13 &&
             (((cVar1 = local_68[3] + -1, bVar13 = local_68[3] == '\0', local_68[3] = cVar1, bVar13
               && (cVar1 = local_68[2] + -1, bVar13 = local_68[2] == '\0', local_68[2] = cVar1,
                  bVar13)) &&
              (cVar1 = local_68[1] + -1, bVar13 = local_68[1] == '\0', local_68[1] = cVar1, bVar13))
             )))) {
        local_68[0] = local_68[0] + -1;
      }
      iVar3 = memcmp(local_78,local_68,__n);
      if ((-1 < iVar3) ||
         ((iVar3 = iVar5, *piVar9 == 1 &&
          (iVar5 = range_should_be_prefix(local_88,local_78,uVar8), -1 < iVar5))))
      goto LAB_00101e62;
    }
    iVar3 = OPENSSL_sk_num(uVar2);
    piVar9 = (int *)OPENSSL_sk_value(uVar2,iVar3 + -1);
    if ((piVar9 != (int *)0x0) && (*piVar9 == 1)) {
      iVar3 = extract_min_max(piVar9,local_88,local_78,uVar8);
      if (((iVar3 == 0) || (iVar3 = memcmp(local_88,local_78,__n), 0 < iVar3)) ||
         (iVar3 = range_should_be_prefix(local_88,local_78,uVar8), -1 < iVar3)) goto LAB_00101e62;
    }
  }
  iVar12 = iVar12 + 1;
  goto LAB_00101eee;
}



undefined8 addr_validate_path_internal(ulong param_1,long param_2,long param_3)

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
LAB_00102495:
    *(undefined4 *)(param_1 + 0xb0) = 1;
    return 0;
  }
  if (param_1 == 0 && param_3 == 0) {
    return 0;
  }
  if (param_1 == 0) {
    if (param_3 == 0) {
LAB_00102590:
      lVar6 = OPENSSL_sk_value(param_2,0);
      param_3 = *(long *)(lVar6 + 0x128);
      if (param_3 == 0) {
        return 1;
      }
      iVar1 = 1;
      iVar2 = X509v3_addr_is_canonical(param_3);
      if (iVar2 == 0) {
LAB_00102344:
        *(int *)(param_1 + 0xac) = iVar2;
        *(undefined4 *)(param_1 + 0xb0) = 0x29;
        *(long *)(param_1 + 0xb8) = lVar6;
        iVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
        if (iVar2 != 0) {
          OPENSSL_sk_set_cmp_func(param_3,IPAddressFamily_cmp);
          lVar5 = OPENSSL_sk_dup(param_3);
          if (lVar5 == 0) goto LAB_001026a0;
LAB_00102396:
          OPENSSL_sk_sort(lVar5);
LAB_0010239e:
          iVar2 = OPENSSL_sk_num(param_2);
          if (iVar2 <= iVar1) goto LAB_001027f8;
          lVar6 = OPENSSL_sk_value(param_2,iVar1);
          iVar2 = X509v3_addr_is_canonical(*(undefined8 *)(lVar6 + 0x128));
          if (iVar2 == 0) {
            if (param_1 != 0) {
              *(int *)(param_1 + 0xac) = iVar1;
              *(undefined4 *)(param_1 + 0xb0) = 0x29;
              *(long *)(param_1 + 0xb8) = lVar6;
              iVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
              if (iVar2 != 0) {
                if (*(long *)(lVar6 + 0x128) == 0) {
LAB_001024f1:
                  for (iVar2 = 0; iVar3 = OPENSSL_sk_num(lVar5), iVar2 < iVar3; iVar2 = iVar2 + 1) {
                    puVar7 = (undefined8 *)OPENSSL_sk_value(lVar5,iVar2);
                    if (1 < *(int *)*puVar7 - 2U) goto LAB_0010251d;
                    if (*(int *)puVar7[1] != 0) {
                      if (param_1 == 0) goto LAB_0010251d;
                      goto LAB_0010253d;
                    }
                  }
                }
                else {
                  OPENSSL_sk_set_cmp_func(*(long *)(lVar6 + 0x128),IPAddressFamily_cmp);
                  OPENSSL_sk_sort(*(undefined8 *)(lVar6 + 0x128));
LAB_00102400:
                  for (iVar2 = 0; iVar3 = OPENSSL_sk_num(lVar5), iVar2 < iVar3; iVar2 = iVar2 + 1) {
                    puVar7 = (undefined8 *)OPENSSL_sk_value(lVar5,iVar2);
                    uVar4 = OPENSSL_sk_find(*(undefined8 *)(lVar6 + 0x128),puVar7);
                    puVar8 = (undefined8 *)OPENSSL_sk_value(*(undefined8 *)(lVar6 + 0x128),uVar4);
                    if (puVar8 == (undefined8 *)0x0) {
                      if (*(int *)puVar7[1] == 1) goto LAB_0010253d;
                    }
                    else {
                      if ((1 < *(int *)*puVar7 - 2U) || (1 < *(int *)*puVar8 - 2U))
                      goto LAB_0010251d;
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
                            *(int *)(param_1 + 0xac) = iVar1;
                            *(undefined4 *)(param_1 + 0xb0) = 0x2e;
                            *(long *)(param_1 + 0xb8) = lVar6;
                            iVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
                            if (iVar3 != 0) goto LAB_00102481;
                            goto LAB_0010251d;
                          }
                        }
                        OPENSSL_sk_set(lVar5,iVar2,puVar8);
                      }
                    }
LAB_00102481:
                  }
                }
                goto LAB_00102561;
              }
            }
            goto LAB_0010251d;
          }
          if (*(long *)(lVar6 + 0x128) == 0) goto LAB_001024f1;
          OPENSSL_sk_set_cmp_func(*(long *)(lVar6 + 0x128),IPAddressFamily_cmp);
          OPENSSL_sk_sort(*(undefined8 *)(lVar6 + 0x128));
          if (param_1 != 0) goto LAB_00102400;
          iVar3 = 0;
          iVar2 = OPENSSL_sk_num(lVar5);
          if (0 < iVar2) {
            do {
              puVar7 = (undefined8 *)OPENSSL_sk_value(lVar5,iVar3);
              uVar4 = OPENSSL_sk_find(*(undefined8 *)(lVar6 + 0x128),puVar7);
              puVar8 = (undefined8 *)OPENSSL_sk_value(*(undefined8 *)(lVar6 + 0x128),uVar4);
              if (puVar8 == (undefined8 *)0x0) {
                if (*(int *)puVar7[1] == 1) goto LAB_0010251d;
              }
              else {
                if ((1 < *(int *)*puVar7 - 2U) || (1 < *(int *)*puVar8 - 2U)) goto LAB_0010251d;
                if (*(int *)puVar8[1] == 1) {
                  if (*(int *)puVar7[1] != 0) {
                    iVar2 = X509v3_addr_get_afi(puVar7);
                    if (iVar2 == 1) {
                      iVar2 = 4;
                    }
                    else {
                      iVar2 = (uint)(iVar2 == 2) << 4;
                    }
                    iVar2 = addr_contains(*(undefined8 *)(puVar8[1] + 8),
                                          *(undefined8 *)(puVar7[1] + 8),iVar2);
                    if (iVar2 == 0) goto LAB_0010251d;
                  }
                  OPENSSL_sk_set(lVar5,iVar3,puVar8);
                }
              }
              iVar3 = iVar3 + 1;
              iVar2 = OPENSSL_sk_num(lVar5);
            } while (iVar3 < iVar2);
          }
LAB_00102561:
          iVar1 = iVar1 + 1;
          goto LAB_0010239e;
        }
      }
      else {
        OPENSSL_sk_set_cmp_func(param_3,IPAddressFamily_cmp);
        lVar5 = OPENSSL_sk_dup(param_3);
        if (lVar5 != 0) goto LAB_00102396;
        ERR_new();
        ERR_set_debug("crypto/x509/v3_addr.c",0x4f7,"addr_validate_path_internal");
        ERR_set_error(0x22,0x8000f,0);
        if (param_1 != 0) goto LAB_001026d0;
      }
    }
    else {
      iVar1 = X509v3_addr_is_canonical(param_3);
      if (iVar1 != 0) {
        OPENSSL_sk_set_cmp_func(param_3,IPAddressFamily_cmp);
        lVar5 = OPENSSL_sk_dup(param_3);
        if (lVar5 != 0) {
          lVar6 = 0;
          iVar1 = 0;
          goto LAB_00102396;
        }
        ERR_new();
        ERR_set_debug("crypto/x509/v3_addr.c",0x4f7,"addr_validate_path_internal");
        ERR_set_error(0x22,0x8000f,0);
      }
    }
  }
  else {
    if (*(long *)(param_1 + 0x38) == 0) goto LAB_00102495;
    if (param_3 == 0) goto LAB_00102590;
    lVar6 = 0;
    iVar1 = X509v3_addr_is_canonical(param_3);
    iVar2 = -1;
    if (iVar1 == 0) goto LAB_00102344;
    OPENSSL_sk_set_cmp_func(param_3,IPAddressFamily_cmp);
    lVar5 = OPENSSL_sk_dup(param_3);
    if (lVar5 != 0) {
      iVar1 = 0;
      goto LAB_00102396;
    }
LAB_001026a0:
    ERR_new();
    ERR_set_debug("crypto/x509/v3_addr.c",0x4f7,"addr_validate_path_internal");
    ERR_set_error(0x22,0x8000f,0);
LAB_001026d0:
    *(undefined4 *)(param_1 + 0xb0) = 0x11;
  }
  uVar10 = 0;
  lVar5 = 0;
  goto LAB_00102520;
LAB_0010253d:
  *(int *)(param_1 + 0xac) = iVar1;
  *(undefined4 *)(param_1 + 0xb0) = 0x2e;
  *(long *)(param_1 + 0xb8) = lVar6;
  iVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
  if (iVar2 == 0) goto LAB_0010251d;
  goto LAB_00102561;
LAB_0010251d:
  uVar10 = 0;
  goto LAB_00102520;
LAB_001027f8:
  lVar9 = *(long *)(lVar6 + 0x128);
  uVar10 = 1;
  if (lVar9 != 0) {
    iVar2 = 0;
    if (param_1 == 0) {
      while( true ) {
        iVar1 = OPENSSL_sk_num(lVar9);
        if (iVar1 <= (int)param_1) break;
        puVar7 = (undefined8 *)OPENSSL_sk_value(*(undefined8 *)(lVar6 + 0x128),param_1 & 0xffffffff)
        ;
        if ((1 < *(int *)*puVar7 - 2U) ||
           ((*(int *)puVar7[1] == 0 && (iVar1 = OPENSSL_sk_find(lVar5), -1 < iVar1))))
        goto LAB_0010251d;
        lVar9 = *(long *)(lVar6 + 0x128);
        param_1 = (ulong)((int)param_1 + 1);
      }
    }
    else {
      iVar3 = OPENSSL_sk_num();
      if (0 < iVar3) {
        do {
          puVar7 = (undefined8 *)OPENSSL_sk_value(*(undefined8 *)(lVar6 + 0x128),iVar2);
          if (1 < *(int *)*puVar7 - 2U) goto LAB_0010251d;
          if ((*(int *)puVar7[1] == 0) && (iVar3 = OPENSSL_sk_find(lVar5,puVar7), -1 < iVar3)) {
            *(int *)(param_1 + 0xac) = iVar1;
            *(undefined4 *)(param_1 + 0xb0) = 0x2e;
            *(long *)(param_1 + 0xb8) = lVar6;
            iVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
            if (iVar3 == 0) goto LAB_0010251d;
          }
          iVar2 = iVar2 + 1;
          iVar3 = OPENSSL_sk_num(*(undefined8 *)(lVar6 + 0x128));
        } while (iVar2 < iVar3);
      }
    }
    uVar10 = 1;
  }
LAB_00102520:
  OPENSSL_sk_free(lVar5);
  return uVar10;
}



bool X509v3_addr_canonize(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  size_t __n;
  IPAddressOrRange *a;
  IPAddressOrRange *a_00;
  int *piVar7;
  int iVar8;
  long in_FS_OFFSET;
  bool bVar9;
  undefined4 local_d4;
  int local_c0;
  undefined8 local_90;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  char local_68 [4];
  char local_64;
  char local_63;
  char local_62;
  char local_61;
  char local_60;
  char local_5f;
  char local_5e;
  char local_5d;
  undefined1 local_58 [24];
  long local_40;
  
  iVar8 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) {
    ERR_new();
    ERR_set_debug("crypto/x509/v3_addr.c",0x394,"X509v3_addr_canonize");
    ERR_set_error(0x22,0x6b,0);
LAB_00102ab3:
    bVar9 = false;
  }
  else {
    for (; iVar3 = OPENSSL_sk_num(param_1), iVar8 < iVar3; iVar8 = iVar8 + 1) {
      puVar6 = (undefined8 *)OPENSSL_sk_value(param_1,iVar8);
      if (1 < *(int *)*puVar6 - 2U) goto LAB_00102ab3;
      if (*(int *)puVar6[1] == 1) {
        iVar3 = X509v3_addr_get_afi(puVar6);
        uVar2 = *(undefined8 *)(puVar6[1] + 8);
        if (iVar3 == 1) {
          local_d4 = 4;
          __n = 4;
          iVar3 = 3;
        }
        else {
          bVar9 = iVar3 != 2;
          __n = 0;
          if (!bVar9) {
            __n = 0x10;
          }
          iVar3 = 0xf;
          if (bVar9) {
            iVar3 = -1;
          }
          local_d4 = 0;
          if (!bVar9) {
            local_d4 = 0x10;
          }
        }
        local_c0 = 0;
        OPENSSL_sk_sort(uVar2);
        iVar4 = OPENSSL_sk_num(uVar2);
        if (0 < iVar4 + -1) {
          do {
            a = (IPAddressOrRange *)OPENSSL_sk_value(uVar2,local_c0);
            iVar4 = local_c0 + 1;
            a_00 = (IPAddressOrRange *)OPENSSL_sk_value(uVar2,iVar4);
            iVar5 = extract_min_max(a,local_88,local_78,local_d4);
            if (iVar5 == 0) goto LAB_00102ab3;
            iVar5 = extract_min_max(a_00,local_68,local_58,local_d4);
            if ((((iVar5 == 0) || (iVar5 = memcmp(local_88,local_78,__n), 0 < iVar5)) ||
                (iVar5 = memcmp(local_68,local_58,__n), 0 < iVar5)) ||
               (iVar5 = memcmp(local_78,local_68,__n), -1 < iVar5)) goto LAB_00102ab3;
            if (iVar3 == -1) {
LAB_00102e20:
              iVar5 = make_addressRange(&local_90,local_88,local_58,local_d4);
              if (iVar5 == 0) goto LAB_00102ab3;
              OPENSSL_sk_set(uVar2,local_c0,local_90);
              OPENSSL_sk_delete(uVar2,iVar4);
              IPAddressOrRange_free(a);
              IPAddressOrRange_free(a_00);
              iVar4 = local_c0;
            }
            else {
              cVar1 = local_68[iVar3];
              local_68[iVar3] = cVar1 + -1;
              if (((((cVar1 == '\0') &&
                    (cVar1 = local_68[iVar3 + -1], local_68[iVar3 + -1] = cVar1 + -1, cVar1 == '\0')
                    ) && ((cVar1 = local_68[iVar3 + -2], local_68[iVar3 + -2] = cVar1 + -1,
                          cVar1 == '\0' &&
                          ((cVar1 = local_68[iVar3 + -3], local_68[iVar3 + -3] = cVar1 + -1,
                           cVar1 == '\0' && (iVar3 != 3)))))) &&
                  (cVar1 = local_5d + -1, bVar9 = local_5d == '\0', local_5d = cVar1, bVar9)) &&
                 (((((cVar1 = local_5e + -1, bVar9 = local_5e == '\0', local_5e = cVar1, bVar9 &&
                     (cVar1 = local_5f + -1, bVar9 = local_5f == '\0', local_5f = cVar1, bVar9)) &&
                    (cVar1 = local_60 + -1, bVar9 = local_60 == '\0', local_60 = cVar1, bVar9)) &&
                   ((cVar1 = local_61 + -1, bVar9 = local_61 == '\0', local_61 = cVar1, bVar9 &&
                    (cVar1 = local_62 + -1, bVar9 = local_62 == '\0', local_62 = cVar1, bVar9)))) &&
                  (((cVar1 = local_63 + -1, bVar9 = local_63 == '\0', local_63 = cVar1, bVar9 &&
                    ((cVar1 = local_64 + -1, bVar9 = local_64 == '\0', local_64 = cVar1, bVar9 &&
                     (cVar1 = local_68[3] + -1, bVar9 = local_68[3] == '\0', local_68[3] = cVar1,
                     bVar9)))) &&
                   ((cVar1 = local_68[2] + -1, bVar9 = local_68[2] == '\0', local_68[2] = cVar1,
                    bVar9 && (cVar1 = local_68[1] + -1, bVar9 = local_68[1] == '\0',
                             local_68[1] = cVar1, bVar9)))))))) {
                local_68[0] = local_68[0] + -1;
              }
              iVar5 = memcmp(local_78,local_68,__n);
              if (iVar5 == 0) goto LAB_00102e20;
            }
            local_c0 = iVar4;
            iVar4 = OPENSSL_sk_num(uVar2);
          } while (local_c0 < iVar4 + -1);
        }
        iVar3 = OPENSSL_sk_num(uVar2);
        piVar7 = (int *)OPENSSL_sk_value(uVar2,iVar3 + -1);
        if ((piVar7 != (int *)0x0) && (*piVar7 == 1)) {
          iVar3 = extract_min_max(piVar7,local_68,local_58,local_d4);
          if ((iVar3 == 0) || (iVar3 = memcmp(local_68,local_58,__n), 0 < iVar3)) goto LAB_00102ab3;
        }
      }
    }
    OPENSSL_sk_set_cmp_func(param_1,IPAddressFamily_cmp);
    OPENSSL_sk_sort(param_1);
    iVar8 = X509v3_addr_is_canonical(param_1);
    bVar9 = iVar8 != 0;
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar9;
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
        if (iVar2 == 0) goto LAB_00102fa1;
        iVar9 = 4;
        __accept = v4addr_chars_3;
        iVar12 = 1;
        iVar2 = ossl_v3_name_cmp(*(undefined8 *)(lVar4 + 8),"IPv4-SAFI");
        if (iVar2 == 0) {
LAB_001031a6:
          if (*(char **)(lVar4 + 0x10) == (char *)0x0) {
            ERR_new();
            ERR_set_debug("crypto/x509/v3_addr.c",0x3e5,"v2i_IPAddrBlocks");
            ERR_set_error(0x22,0x7c,0);
            goto LAB_001034c1;
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
            goto LAB_001034c1;
          }
          sVar6 = strspn(pcVar5," \t");
          local_70 = pcVar5 + sVar6;
          pcVar5 = CRYPTO_strdup(local_70,"crypto/x509/v3_addr.c",0x3f0);
          local_98 = &local_74;
          goto LAB_00102fd0;
        }
        iVar2 = ossl_v3_name_cmp(*(undefined8 *)(lVar4 + 8),"IPv6-SAFI");
        if (iVar2 == 0) {
          iVar9 = 0x10;
          iVar12 = 2;
          __accept = "0123456789.:abcdefABCDEF";
          goto LAB_001031a6;
        }
        ERR_new();
        ERR_set_debug("crypto/x509/v3_addr.c",0x3cf,"v2i_IPAddrBlocks");
        ERR_set_error(0x22,0x73,&_LC29,*(undefined8 *)(lVar4 + 8));
LAB_001034c1:
        pcVar5 = (char *)0x0;
        goto LAB_001030f9;
      }
LAB_00102fa1:
      pcVar5 = CRYPTO_strdup(*(char **)(lVar4 + 0x10),"crypto/x509/v3_addr.c",0x3f2);
      local_98 = (uint *)0x0;
LAB_00102fd0:
      if (pcVar5 == (char *)0x0) goto LAB_001034c1;
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
                goto LAB_001030c9;
              }
              sVar6 = 0x10;
              if (iVar12 != 2) {
                sVar6 = 4;
              }
              iVar2 = memcmp(local_68,local_58,sVar6);
              if (iVar2 < 1) {
                iVar2 = X509v3_addr_add_range(local_a8,iVar12,local_98,local_68,local_58);
                if (iVar2 != 0) goto LAB_00103277;
                ERR_new();
                uVar11 = 0x434;
                goto LAB_00103339;
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
              if (iVar2 != 0) goto LAB_00103277;
              ERR_new();
              uVar11 = 0x41d;
              goto LAB_00103339;
            }
            ERR_new();
            uVar11 = 0x418;
          }
          else {
            if (cVar1 == '\0') {
              iVar2 = X509v3_addr_add_prefix(local_a8,iVar12,local_98,local_68,iVar9 * 8);
              if (iVar2 != 0) {
LAB_00103277:
                CRYPTO_free(pcVar5);
                goto LAB_00103018;
              }
              ERR_new();
              uVar11 = 0x43a;
LAB_00103339:
              ERR_set_debug("crypto/x509/v3_addr.c",uVar11,"v2i_IPAddrBlocks");
              ERR_set_error(0x22,0x80022,0);
              goto LAB_001030f9;
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
LAB_001030c9:
        ERR_set_error(0x22,uVar11,0);
        ERR_add_error_data(4,"name=",*(undefined8 *)(lVar4 + 8),", value=",
                           *(undefined8 *)(lVar4 + 0x10));
        goto LAB_001030f9;
      }
      iVar2 = X509v3_addr_add_inherit(local_a8,iVar12,local_98);
      if (iVar2 == 0) {
        ERR_new();
        ERR_set_debug("crypto/x509/v3_addr.c",0x3fd,"v2i_IPAddrBlocks");
        uVar11 = 0xa5;
        goto LAB_001030c9;
      }
      CRYPTO_free(pcVar5);
LAB_00103018:
    }
    iVar10 = X509v3_addr_canonize(local_a8);
    if (iVar10 != 0) goto LAB_00103125;
    pcVar5 = (char *)0x0;
LAB_001030f9:
    CRYPTO_free(pcVar5);
    OPENSSL_sk_pop_free(local_a8,IPAddressFamily_free);
  }
  local_a8 = 0;
LAB_00103125:
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


