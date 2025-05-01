
char * ASN1_tag2str(int tag)

{
  if ((tag & 0xfffffff7U) == 0x102) {
    tag = tag & 0xfffffeff;
  }
  else if (0x1e < (uint)tag) {
    return "(unknown)";
  }
  return *(char **)(tag2str_0 + (long)tag * 8);
}



bool asn1_print_info(BIO *param_1,undefined8 param_2,ulong param_3,int param_4,undefined8 param_5,
                    int param_6,uint param_7,uint param_8,int param_9)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  BIO_METHOD *type;
  BIO *b;
  char *pcVar5;
  bool bVar6;
  char *pcVar7;
  long in_FS_OFFSET;
  char acStack_c8 [136];
  long local_40;
  
  pcVar5 = acStack_c8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar7 = "prim: ";
  if ((param_8 & 0x20) != 0) {
    pcVar7 = "cons: ";
  }
  if (param_8 == 0x21) {
    iVar2 = BIO_snprintf(acStack_c8,0x80,"%5ld:d=%-2d hl=%ld l=inf  %s",param_2,param_3 & 0xffffffff
                         ,(long)param_4,pcVar7);
  }
  else {
    iVar2 = BIO_snprintf(acStack_c8,0x80,"%5ld:d=%-2d hl=%ld l=%4ld %s",param_2,param_3 & 0xffffffff
                         ,(long)param_4,param_5,pcVar7);
  }
  if (iVar2 < 1) {
LAB_0010020c:
    b = (BIO *)0x0;
    bVar6 = false;
    goto LAB_00100211;
  }
  if (param_1 == (BIO *)0x0) {
    b = (BIO *)0x0;
    lVar3 = -1;
    bVar1 = false;
LAB_00100145:
    if ((~param_7 & 0xc0) == 0) {
      BIO_snprintf(acStack_c8,0x80,"priv [ %d ] ");
    }
    else if ((param_7 & 0x80) == 0) {
      if ((param_7 & 0x40) == 0) {
        if (param_6 < 0x1f) {
          pcVar5 = ASN1_tag2str(param_6);
        }
        else {
          BIO_snprintf(acStack_c8,0x80,"<ASN1 %d>");
          pcVar5 = acStack_c8;
        }
      }
      else {
        BIO_snprintf(acStack_c8,0x80,"appl [ %d ]");
        pcVar5 = acStack_c8;
      }
    }
    else {
      BIO_snprintf(acStack_c8,0x80,"cont [ %d ]");
      pcVar5 = acStack_c8;
    }
    iVar2 = BIO_printf(param_1,"%-18s",pcVar5);
    bVar6 = 0 < iVar2;
  }
  else {
    lVar3 = BIO_ctrl(param_1,0x4f,0,acStack_c8);
    b = (BIO *)0x0;
    bVar1 = false;
    if (lVar3 < 1) {
      type = (BIO_METHOD *)BIO_f_prefix();
      b = BIO_new(type);
      if (b == (BIO *)0x0) goto LAB_0010020c;
      param_1 = BIO_push(b,param_1);
      if (param_1 == (BIO *)0x0) {
        bVar6 = false;
        goto LAB_00100211;
      }
      bVar1 = true;
    }
    lVar3 = BIO_ctrl(param_1,0x51,0,(void *)0x0);
    lVar4 = BIO_ctrl(param_1,0x4f,0,acStack_c8);
    if ((0 < lVar4) && (lVar4 = BIO_ctrl(param_1,0x50,(long)param_9,(void *)0x0), 0 < lVar4))
    goto LAB_00100145;
    bVar6 = false;
  }
  if (-1 < lVar3) {
    BIO_ctrl(param_1,0x50,lVar3,(void *)0x0);
  }
  if (bVar1) {
    BIO_pop(param_1);
  }
LAB_00100211:
  BIO_free(b);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int asn1_parse2(BIO *param_1,long *param_2,long param_3,int param_4,int param_5,int param_6,
               int param_7)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ASN1_OBJECT *pAVar8;
  ASN1_OCTET_STRING *a;
  int iVar9;
  ASN1_INTEGER *a_00;
  byte *pbVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ASN1_ENUMERATED *a_01;
  long in_FS_OFFSET;
  int local_68;
  int local_64;
  byte *local_60;
  byte *local_58;
  long local_50;
  ASN1_OBJECT *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (ASN1_OBJECT *)0x0;
  if (param_5 == 0x81) {
    iVar6 = 0;
    BIO_puts(param_1,"BAD RECURSION DEPTH\n");
    goto LAB_0010054a;
  }
  local_60 = (byte *)*param_2;
  pbVar1 = local_60 + param_3;
  if (0 < param_3) {
    iVar9 = 0;
    if (param_6 != 0) {
      iVar9 = param_5;
    }
LAB_001003ae:
    pbVar10 = local_60;
    uVar5 = ASN1_get_object(&local_60,&local_50,&local_68,&local_64,param_3);
    if ((uVar5 & 0x80) != 0) {
      a_01 = (ASN1_ENUMERATED *)0x0;
      iVar6 = 0;
      BIO_puts(param_1,"Error in encoding\n");
      a_00 = (ASN1_INTEGER *)0x0;
      a = (ASN1_OCTET_STRING *)0x0;
      goto LAB_00100513;
    }
    lVar11 = (long)(int)((long)local_60 - (long)pbVar10);
    param_3 = param_3 - lVar11;
    iVar6 = asn1_print_info(param_1,pbVar10 + ((long)param_4 - *param_2),param_5,
                            (long)local_60 - (long)pbVar10 & 0xffffffff,local_50,local_68,local_64,
                            uVar5,iVar9);
    lVar13 = local_50;
    pbVar4 = local_60;
    if (iVar6 == 0) goto LAB_00100506;
    if ((uVar5 & 0x20) != 0) {
      iVar6 = BIO_write(param_1,&_LC12,1);
      if (0 < iVar6) {
        if (local_50 <= param_3) {
          if ((uVar5 == 0x21) && (local_50 == 0)) {
            do {
              iVar6 = asn1_parse2(param_1,&local_60,(long)pbVar1 - (long)local_60,
                                  ((int)local_60 - (int)*param_2) + param_4,param_5 + 1,param_6,
                                  param_7);
              if (iVar6 == 0) goto LAB_001007f4;
            } while ((iVar6 != 2) && (local_60 < pbVar1));
            local_50 = (long)local_60 - (long)pbVar4;
          }
          else {
            pbVar10 = local_60;
            lVar11 = local_50;
            while (local_60 = pbVar10, pbVar10 < pbVar4 + lVar13) {
              iVar6 = asn1_parse2(param_1,&local_60,lVar11,((int)pbVar10 - (int)*param_2) + param_4,
                                  param_5 + 1,param_6,param_7);
              if (iVar6 == 0) goto LAB_001007f4;
              lVar11 = lVar11 - ((long)local_60 - (long)pbVar10);
              pbVar10 = local_60;
            }
          }
          goto LAB_00100683;
        }
        BIO_printf(param_1,"length is greater than %ld\n",param_3);
      }
LAB_00100b6c:
      iVar6 = 0;
      a_01 = (ASN1_ENUMERATED *)0x0;
      a_00 = (ASN1_INTEGER *)0x0;
      a = (ASN1_OCTET_STRING *)0x0;
      goto LAB_00100513;
    }
    if (local_64 != 0) {
      local_60 = local_60 + local_50;
      iVar6 = BIO_write(param_1,&_LC12,1);
      if (iVar6 < 1) goto LAB_00100b6c;
      goto LAB_00100683;
    }
    iVar6 = 0;
    if (local_68 != 6) {
      if (local_68 < 7) {
        if (local_68 != 2) {
          if (local_68 == 4) {
            local_58 = pbVar10;
            a = d2i_ASN1_OCTET_STRING((ASN1_OCTET_STRING **)0x0,&local_58,local_50 + lVar11);
            if (a == (ASN1_OCTET_STRING *)0x0) {
              ASN1_OCTET_STRING_free((ASN1_OCTET_STRING *)0x0);
            }
            else {
              if (0 < a->length) {
                local_58 = a->data;
                pbVar10 = local_58;
                do {
                  bVar2 = *pbVar10;
                  if ((bVar2 < 0x20) && (bVar2 != 10)) {
                    if ((bVar2 & 0xfb) != 9) {
LAB_00100c43:
                      if (param_7 == 0) {
                        iVar7 = BIO_write(param_1,"[HEX DUMP]:",0xb);
                        if (iVar7 < 1) goto LAB_00100eae;
                        lVar13 = 0;
                        if (0 < a->length) goto LAB_00100e91;
                        goto LAB_001009e8;
                      }
                      iVar7 = BIO_write(param_1,&_LC12,1);
                      if (iVar7 < 1) goto LAB_00100d51;
                      iVar7 = a->length;
                      iVar3 = iVar7;
                      if (param_7 < iVar7) {
                        iVar3 = param_7;
                      }
                      if (param_7 != -1) {
                        iVar7 = iVar3;
                      }
                      iVar7 = BIO_dump_indent(param_1,(char *)local_58,iVar7,6);
                      if (iVar7 < 1) goto LAB_00100d51;
                      ASN1_OCTET_STRING_free(a);
                      goto LAB_0010084c;
                    }
                  }
                  else if (0x7e < bVar2) goto LAB_00100c43;
                  pbVar10 = pbVar10 + 1;
                } while (local_58 + a->length != pbVar10);
                iVar7 = BIO_write(param_1,&_LC14,1);
                if ((iVar7 < 1) || (iVar7 = BIO_write(param_1,local_58,a->length), iVar7 < 1))
                goto LAB_00100d51;
              }
LAB_001009e8:
              ASN1_OCTET_STRING_free(a);
            }
          }
          else {
            if (local_68 != 1) goto LAB_00100898;
            if (local_50 != 1) {
              iVar7 = BIO_puts(param_1,":BAD BOOLEAN");
              if (iVar7 < 1) goto LAB_00100506;
              if (0 < local_50) {
                BIO_printf(param_1,":%u",(ulong)*local_60);
              }
              goto LAB_001004a7;
            }
            BIO_printf(param_1,":%u",(ulong)*local_60);
          }
          goto LAB_00100830;
        }
        local_58 = pbVar10;
        a_00 = d2i_ASN1_INTEGER((ASN1_INTEGER **)0x0,&local_58,local_50 + lVar11);
        if (a_00 == (ASN1_INTEGER *)0x0) {
          iVar7 = BIO_puts(param_1,":BAD INTEGER");
          if (0 < iVar7) {
            ASN1_INTEGER_free((ASN1_INTEGER *)0x0);
            goto LAB_001004a7;
          }
        }
        else {
          iVar7 = BIO_write(param_1,&_LC14,1);
          if ((0 < iVar7) &&
             ((a_00->type != 0x102 || (iVar7 = BIO_write(param_1,&_LC20,1), 0 < iVar7)))) {
            iVar7 = a_00->length;
            if (0 < iVar7) {
              lVar13 = 0;
              do {
                iVar7 = BIO_printf(param_1,"%02X",(ulong)a_00->data[lVar13]);
                if (iVar7 < 1) goto LAB_00100a93;
                iVar7 = a_00->length;
                lVar13 = lVar13 + 1;
              } while ((int)lVar13 < iVar7);
            }
            if ((iVar7 != 0) || (iVar7 = BIO_write(param_1,&_LC21,2), 0 < iVar7)) {
              ASN1_INTEGER_free(a_00);
              goto LAB_00100830;
            }
            iVar6 = 0;
            a_01 = (ASN1_ENUMERATED *)0x0;
            a = (ASN1_OCTET_STRING *)0x0;
            goto LAB_00100513;
          }
        }
LAB_00100a93:
        a_01 = (ASN1_ENUMERATED *)0x0;
        a = (ASN1_OCTET_STRING *)0x0;
      }
      else {
        if (0x14 < local_68 - 10U) {
LAB_00100898:
          if ((local_50 < 1) || (param_7 == 0)) goto LAB_00100830;
          iVar7 = BIO_write(param_1,&_LC12,1);
          if (0 < iVar7) {
            if ((param_7 == -1) || (iVar7 = param_7, local_50 < param_7)) {
              iVar7 = (int)local_50;
            }
            iVar7 = BIO_dump_indent(param_1,(char *)local_60,iVar7,6);
            if (iVar7 < 1) goto LAB_00100506;
            goto LAB_0010084c;
          }
          goto LAB_00100506;
        }
        uVar12 = 1L << ((byte)local_68 & 0x3f);
        uVar14 = (ulong)((uint)uVar12 & 0x5dc1000);
        if ((uVar12 & 0x5dc1000) != 0) {
          iVar7 = BIO_write(param_1,&_LC14,1);
          if (0 < iVar7) {
            if (0 < local_50) {
              iVar7 = BIO_write(param_1,local_60,(int)local_50);
              if (iVar7 != (int)local_50) goto LAB_00100506;
            }
            goto LAB_00100830;
          }
          goto LAB_00100506;
        }
        if (local_68 == 0x1e) goto LAB_00100830;
        if (local_68 != 10) goto LAB_00100898;
        local_58 = pbVar10;
        a_01 = d2i_ASN1_ENUMERATED((ASN1_ENUMERATED **)0x0,&local_58,local_50 + lVar11);
        if (a_01 == (ASN1_ENUMERATED *)0x0) {
          iVar7 = BIO_puts(param_1,":BAD ENUMERATED");
          if (0 < iVar7) {
            ASN1_ENUMERATED_free((ASN1_ENUMERATED *)0x0);
            goto LAB_001004a7;
          }
        }
        else {
          iVar7 = BIO_write(param_1,&_LC14,1);
          if ((0 < iVar7) &&
             ((a_01->type != 0x10a || (iVar7 = BIO_write(param_1,&_LC20,1), 0 < iVar7)))) {
            iVar7 = a_01->length;
            if (0 < iVar7) {
              do {
                iVar7 = BIO_printf(param_1,"%02X",(ulong)a_01->data[uVar14]);
                if (iVar7 < 1) {
                  a_00 = (ASN1_INTEGER *)0x0;
                  a = (ASN1_OCTET_STRING *)0x0;
                  goto LAB_00100513;
                }
                iVar7 = a_01->length;
                uVar14 = uVar14 + 1;
              } while ((int)uVar14 < iVar7);
            }
            if ((iVar7 != 0) || (iVar7 = BIO_write(param_1,&_LC21,2), 0 < iVar7)) {
              ASN1_ENUMERATED_free(a_01);
              goto LAB_00100830;
            }
            iVar6 = 0;
            a_00 = (ASN1_INTEGER *)0x0;
            a = (ASN1_OCTET_STRING *)0x0;
            goto LAB_00100513;
          }
        }
        a_00 = (ASN1_INTEGER *)0x0;
        a = (ASN1_OCTET_STRING *)0x0;
      }
      goto LAB_00100513;
    }
    local_58 = pbVar10;
    pAVar8 = d2i_ASN1_OBJECT(&local_48,&local_58,local_50 + lVar11);
    if (pAVar8 == (ASN1_OBJECT *)0x0) {
      iVar7 = BIO_puts(param_1,":BAD OBJECT");
      a = (ASN1_OCTET_STRING *)0x0;
      if (0 < iVar7) {
LAB_001004a7:
        iVar7 = BIO_puts(param_1,":[");
        if (0 < iVar7) {
          lVar13 = 0;
          if (0 < local_50) {
            do {
              iVar7 = BIO_printf(param_1,"%02X",(ulong)pbVar10[lVar13 + lVar11]);
              if (iVar7 < 1) goto LAB_00100506;
              lVar13 = lVar13 + 1;
            } while (lVar13 < local_50);
          }
          iVar7 = BIO_puts(param_1,"]");
          if (0 < iVar7) goto LAB_00100830;
        }
        goto LAB_00100506;
      }
LAB_00100d51:
      a_01 = (ASN1_ENUMERATED *)0x0;
      a_00 = (ASN1_INTEGER *)0x0;
      goto LAB_00100513;
    }
    iVar7 = BIO_write(param_1,&_LC14,1);
    if (0 < iVar7) {
      i2a_ASN1_OBJECT(param_1,local_48);
      goto LAB_00100830;
    }
    goto LAB_00100506;
  }
  a_01 = (ASN1_ENUMERATED *)0x0;
  a_00 = (ASN1_INTEGER *)0x0;
  a = (ASN1_OCTET_STRING *)0x0;
  iVar6 = 1;
  goto LAB_00100513;
LAB_001007f4:
  a_01 = (ASN1_ENUMERATED *)0x0;
  a_00 = (ASN1_INTEGER *)0x0;
  a = (ASN1_OCTET_STRING *)0x0;
  goto LAB_00100513;
  while (lVar13 = lVar13 + 1, (int)lVar13 < a->length) {
LAB_00100e91:
    iVar7 = BIO_printf(param_1,"%02X",(ulong)local_58[lVar13]);
    if (iVar7 < 1) goto LAB_00100eae;
  }
  ASN1_OCTET_STRING_free(a);
LAB_00100830:
  iVar7 = BIO_write(param_1,&_LC12,1);
  if (0 < iVar7) {
LAB_0010084c:
    local_60 = local_60 + local_50;
    if (local_68 == 0 && local_64 == 0) {
      a_01 = (ASN1_ENUMERATED *)0x0;
      a_00 = (ASN1_INTEGER *)0x0;
      a = (ASN1_OCTET_STRING *)0x0;
      iVar6 = 2;
      goto LAB_00100513;
    }
LAB_00100683:
    param_3 = param_3 - local_50;
    if (param_3 < 1) goto LAB_00100bf0;
    goto LAB_001003ae;
  }
LAB_00100506:
  a_01 = (ASN1_ENUMERATED *)0x0;
  a_00 = (ASN1_INTEGER *)0x0;
  a = (ASN1_OCTET_STRING *)0x0;
  goto LAB_00100513;
LAB_00100eae:
  iVar6 = 0;
  a_01 = (ASN1_ENUMERATED *)0x0;
  a_00 = (ASN1_INTEGER *)0x0;
  goto LAB_00100513;
LAB_00100bf0:
  a_01 = (ASN1_ENUMERATED *)0x0;
  a_00 = (ASN1_INTEGER *)0x0;
  a = (ASN1_OCTET_STRING *)0x0;
  iVar6 = 1;
LAB_00100513:
  ASN1_OBJECT_free(local_48);
  ASN1_OCTET_STRING_free(a);
  ASN1_INTEGER_free(a_00);
  ASN1_ENUMERATED_free(a_01);
  *param_2 = (long)local_60;
LAB_0010054a:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int asn1_parse2_constprop_4
              (BIO *param_1,long *param_2,long param_3,int param_4,int param_5,int param_6)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ASN1_OBJECT *pAVar8;
  ASN1_OCTET_STRING *a;
  ASN1_ENUMERATED *a_00;
  byte *pbVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ASN1_INTEGER *a_01;
  long in_FS_OFFSET;
  int local_68;
  int local_64;
  byte *local_60;
  byte *local_58;
  long local_50;
  ASN1_OBJECT *local_48;
  long local_40;
  
  local_60 = (byte *)*param_2;
  pbVar1 = local_60 + param_3;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (ASN1_OBJECT *)0x0;
  if (0 < param_3) {
LAB_00100f80:
    pbVar9 = local_60;
    uVar5 = ASN1_get_object(&local_60,&local_50,&local_68,&local_64,param_3);
    if ((uVar5 & 0x80) != 0) {
      a_01 = (ASN1_INTEGER *)0x0;
      a = (ASN1_OCTET_STRING *)0x0;
      BIO_puts(param_1,"Error in encoding\n");
      iVar6 = 0;
      a_00 = (ASN1_ENUMERATED *)0x0;
      goto LAB_001010e2;
    }
    lVar10 = (long)(int)((long)local_60 - (long)pbVar9);
    param_3 = param_3 - lVar10;
    iVar6 = asn1_print_info(param_1,pbVar9 + ((long)param_4 - *param_2),4,
                            (long)local_60 - (long)pbVar9 & 0xffffffff,local_50,local_68,local_64,
                            uVar5,(param_5 != 0) * '\x04');
    lVar12 = local_50;
    pbVar4 = local_60;
    if (iVar6 == 0) goto LAB_001010d6;
    if ((uVar5 & 0x20) != 0) {
      iVar6 = BIO_write(param_1,&_LC12,1);
      if (0 < iVar6) {
        if (local_50 <= param_3) {
          if ((local_50 == 0) && (uVar5 == 0x21)) {
            do {
              iVar6 = asn1_parse2(param_1,&local_60,(long)pbVar1 - (long)local_60,
                                  ((int)local_60 - (int)*param_2) + param_4,5,param_5,param_6);
              if (iVar6 == 0) goto LAB_001013b9;
            } while ((iVar6 != 2) && (local_60 < pbVar1));
            local_50 = (long)local_60 - (long)pbVar4;
          }
          else {
            pbVar9 = local_60;
            lVar10 = local_50;
            while (local_60 = pbVar9, pbVar9 < pbVar4 + lVar12) {
              iVar6 = asn1_parse2(param_1,&local_60,lVar10,((int)pbVar9 - (int)*param_2) + param_4,5
                                  ,param_5,param_6);
              if (iVar6 == 0) goto LAB_001013b9;
              lVar10 = lVar10 - ((long)local_60 - (long)pbVar9);
              pbVar9 = local_60;
            }
          }
          goto LAB_00101243;
        }
        BIO_printf(param_1,"length is greater than %ld\n",param_3);
      }
LAB_001016fc:
      iVar6 = 0;
      a_00 = (ASN1_ENUMERATED *)0x0;
      a_01 = (ASN1_INTEGER *)0x0;
      a = (ASN1_OCTET_STRING *)0x0;
      goto LAB_001010e2;
    }
    if (local_64 != 0) {
      local_60 = local_60 + local_50;
      iVar6 = BIO_write(param_1,&_LC12,1);
      if (iVar6 < 1) goto LAB_001016fc;
      goto LAB_00101243;
    }
    iVar6 = 0;
    if (local_68 != 6) {
      if (local_68 < 7) {
        if (local_68 != 2) {
          if (local_68 != 4) {
            if (local_68 != 1) goto LAB_00101440;
            if (local_50 != 1) {
              iVar7 = BIO_puts(param_1,":BAD BOOLEAN");
              if (iVar7 < 1) goto LAB_001010d6;
              if (0 < local_50) {
                BIO_printf(param_1,":%u",(ulong)*local_60);
              }
              goto LAB_0010107d;
            }
            BIO_printf(param_1,":%u",(ulong)*local_60);
            goto LAB_001013f0;
          }
          local_58 = pbVar9;
          a = d2i_ASN1_OCTET_STRING((ASN1_OCTET_STRING **)0x0,&local_58,local_50 + lVar10);
          if (a == (ASN1_OCTET_STRING *)0x0) {
            ASN1_OCTET_STRING_free((ASN1_OCTET_STRING *)0x0);
            goto LAB_001013f0;
          }
          if (0 < a->length) {
            local_58 = a->data;
            pbVar9 = local_58;
            do {
              bVar2 = *pbVar9;
              if ((bVar2 < 0x20) && (bVar2 != 10)) {
                if ((bVar2 & 0xfb) != 9) {
LAB_001017d3:
                  if (param_6 == 0) {
                    iVar7 = BIO_write(param_1,"[HEX DUMP]:",0xb);
                    if (iVar7 < 1) {
                      iVar6 = 0;
                      a_00 = (ASN1_ENUMERATED *)0x0;
                      a_01 = (ASN1_INTEGER *)0x0;
                      goto LAB_001010e2;
                    }
                    lVar12 = 0;
                    if (0 < a->length) goto LAB_00101a09;
                    goto LAB_00101578;
                  }
                  iVar7 = BIO_write(param_1,&_LC12,1);
                  if (iVar7 < 1) goto LAB_001018e2;
                  iVar7 = a->length;
                  iVar3 = param_6;
                  if (iVar7 <= param_6) {
                    iVar3 = iVar7;
                  }
                  if (param_6 != -1) {
                    iVar7 = iVar3;
                  }
                  iVar7 = BIO_dump_indent(param_1,(char *)local_58,iVar7,6);
                  if (iVar7 < 1) goto LAB_001018e2;
                  ASN1_OCTET_STRING_free(a);
                  goto LAB_0010140c;
                }
              }
              else if (0x7e < bVar2) goto LAB_001017d3;
              pbVar9 = pbVar9 + 1;
            } while (local_58 + a->length != pbVar9);
            iVar7 = BIO_write(param_1,&_LC14,1);
            if ((iVar7 < 1) || (iVar7 = BIO_write(param_1,local_58,a->length), iVar7 < 1))
            goto LAB_001018e2;
          }
          goto LAB_00101578;
        }
        local_58 = pbVar9;
        a_01 = d2i_ASN1_INTEGER((ASN1_INTEGER **)0x0,&local_58,local_50 + lVar10);
        if (a_01 == (ASN1_INTEGER *)0x0) {
          iVar7 = BIO_puts(param_1,":BAD INTEGER");
          if (0 < iVar7) {
            ASN1_INTEGER_free((ASN1_INTEGER *)0x0);
            goto LAB_0010107d;
          }
        }
        else {
          iVar7 = BIO_write(param_1,&_LC14,1);
          if ((0 < iVar7) &&
             ((a_01->type != 0x102 || (iVar7 = BIO_write(param_1,&_LC20,1), 0 < iVar7)))) {
            iVar7 = a_01->length;
            lVar12 = 0;
            if (0 < iVar7) {
              do {
                iVar7 = BIO_printf(param_1,"%02X",(ulong)a_01->data[lVar12]);
                if (iVar7 < 1) goto LAB_00101628;
                iVar7 = a_01->length;
                lVar12 = lVar12 + 1;
              } while ((int)lVar12 < iVar7);
            }
            if ((iVar7 != 0) || (iVar7 = BIO_write(param_1,&_LC21,2), 0 < iVar7)) {
              ASN1_INTEGER_free(a_01);
              goto LAB_001013f0;
            }
            iVar6 = 0;
            a_00 = (ASN1_ENUMERATED *)0x0;
            a = (ASN1_OCTET_STRING *)0x0;
            goto LAB_001010e2;
          }
        }
LAB_00101628:
        a_00 = (ASN1_ENUMERATED *)0x0;
        a = (ASN1_OCTET_STRING *)0x0;
      }
      else {
        if (0x14 < local_68 - 10U) {
LAB_00101440:
          if ((local_50 < 1) || (param_6 == 0)) goto LAB_001013f0;
          iVar7 = BIO_write(param_1,&_LC12,1);
          if (0 < iVar7) {
            if ((param_6 == -1) || (iVar7 = param_6, local_50 < param_6)) {
              iVar7 = (int)local_50;
            }
            iVar7 = BIO_dump_indent(param_1,(char *)local_60,iVar7,6);
            if (iVar7 < 1) goto LAB_001010d6;
            goto LAB_0010140c;
          }
          goto LAB_001010d6;
        }
        uVar11 = 1L << ((byte)local_68 & 0x3f);
        uVar13 = (ulong)((uint)uVar11 & 0x5dc1000);
        if ((uVar11 & 0x5dc1000) != 0) {
          iVar7 = BIO_write(param_1,&_LC14,1);
          if (0 < iVar7) {
            if (0 < local_50) {
              iVar7 = BIO_write(param_1,local_60,(int)local_50);
              if (iVar7 != (int)local_50) goto LAB_001010d6;
            }
            goto LAB_001013f0;
          }
          goto LAB_001010d6;
        }
        if (local_68 == 0x1e) goto LAB_001013f0;
        if (local_68 != 10) goto LAB_00101440;
        local_58 = pbVar9;
        a_00 = d2i_ASN1_ENUMERATED((ASN1_ENUMERATED **)0x0,&local_58,local_50 + lVar10);
        if (a_00 == (ASN1_ENUMERATED *)0x0) {
          iVar7 = BIO_puts(param_1,":BAD ENUMERATED");
          if (0 < iVar7) {
            ASN1_ENUMERATED_free((ASN1_ENUMERATED *)0x0);
            goto LAB_0010107d;
          }
        }
        else {
          iVar7 = BIO_write(param_1,&_LC14,1);
          if ((0 < iVar7) &&
             ((a_00->type != 0x10a || (iVar7 = BIO_write(param_1,&_LC20,1), 0 < iVar7)))) {
            iVar7 = a_00->length;
            if (0 < iVar7) {
              do {
                iVar7 = BIO_printf(param_1,"%02X",(ulong)a_00->data[uVar13]);
                if (iVar7 < 1) {
                  a_01 = (ASN1_INTEGER *)0x0;
                  a = (ASN1_OCTET_STRING *)0x0;
                  goto LAB_001010e2;
                }
                iVar7 = a_00->length;
                uVar13 = uVar13 + 1;
              } while ((int)uVar13 < iVar7);
            }
            if ((iVar7 != 0) || (iVar7 = BIO_write(param_1,&_LC21,2), 0 < iVar7)) {
              ASN1_ENUMERATED_free(a_00);
              goto LAB_001013f0;
            }
            iVar6 = 0;
            a_01 = (ASN1_INTEGER *)0x0;
            a = (ASN1_OCTET_STRING *)0x0;
            goto LAB_001010e2;
          }
        }
        a_01 = (ASN1_INTEGER *)0x0;
        a = (ASN1_OCTET_STRING *)0x0;
      }
      goto LAB_001010e2;
    }
    local_58 = pbVar9;
    pAVar8 = d2i_ASN1_OBJECT(&local_48,&local_58,local_50 + lVar10);
    if (pAVar8 == (ASN1_OBJECT *)0x0) {
      iVar7 = BIO_puts(param_1,":BAD OBJECT");
      a = (ASN1_OCTET_STRING *)0x0;
      if (0 < iVar7) {
LAB_0010107d:
        iVar7 = BIO_puts(param_1,":[");
        if (0 < iVar7) {
          lVar12 = 0;
          if (0 < local_50) {
            do {
              iVar7 = BIO_printf(param_1,"%02X",(ulong)pbVar9[lVar12 + lVar10]);
              if (iVar7 < 1) goto LAB_001010d6;
              lVar12 = lVar12 + 1;
            } while (lVar12 < local_50);
          }
          iVar7 = BIO_puts(param_1,"]");
          if (0 < iVar7) goto LAB_001013f0;
        }
        goto LAB_001010d6;
      }
LAB_001018e2:
      a_00 = (ASN1_ENUMERATED *)0x0;
      a_01 = (ASN1_INTEGER *)0x0;
      goto LAB_001010e2;
    }
    iVar7 = BIO_write(param_1,&_LC14,1);
    if (0 < iVar7) {
      i2a_ASN1_OBJECT(param_1,local_48);
      goto LAB_001013f0;
    }
    goto LAB_001010d6;
  }
  a_00 = (ASN1_ENUMERATED *)0x0;
  a_01 = (ASN1_INTEGER *)0x0;
  a = (ASN1_OCTET_STRING *)0x0;
  iVar6 = 1;
  goto LAB_001010e2;
LAB_001013b9:
  a_00 = (ASN1_ENUMERATED *)0x0;
  a_01 = (ASN1_INTEGER *)0x0;
  a = (ASN1_OCTET_STRING *)0x0;
  goto LAB_001010e2;
  while (lVar12 = lVar12 + 1, (int)lVar12 < a->length) {
LAB_00101a09:
    iVar7 = BIO_printf(param_1,"%02X",(ulong)local_58[lVar12]);
    if (iVar7 < 1) {
      iVar6 = 0;
      a_00 = (ASN1_ENUMERATED *)0x0;
      a_01 = (ASN1_INTEGER *)0x0;
      goto LAB_001010e2;
    }
  }
LAB_00101578:
  ASN1_OCTET_STRING_free(a);
LAB_001013f0:
  iVar7 = BIO_write(param_1,&_LC12,1);
  if (0 < iVar7) {
LAB_0010140c:
    local_60 = local_60 + local_50;
    if (local_68 == 0 && local_64 == 0) {
      a_00 = (ASN1_ENUMERATED *)0x0;
      a_01 = (ASN1_INTEGER *)0x0;
      a = (ASN1_OCTET_STRING *)0x0;
      iVar6 = 2;
      goto LAB_001010e2;
    }
LAB_00101243:
    param_3 = param_3 - local_50;
    if (param_3 < 1) goto LAB_00101780;
    goto LAB_00100f80;
  }
LAB_001010d6:
  a_00 = (ASN1_ENUMERATED *)0x0;
  a_01 = (ASN1_INTEGER *)0x0;
  a = (ASN1_OCTET_STRING *)0x0;
  goto LAB_001010e2;
LAB_00101780:
  a_00 = (ASN1_ENUMERATED *)0x0;
  a_01 = (ASN1_INTEGER *)0x0;
  a = (ASN1_OCTET_STRING *)0x0;
  iVar6 = 1;
LAB_001010e2:
  ASN1_OBJECT_free(local_48);
  ASN1_OCTET_STRING_free(a);
  ASN1_INTEGER_free(a_01);
  ASN1_ENUMERATED_free(a_00);
  *param_2 = (long)local_60;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int asn1_parse2_constprop_3
              (BIO *param_1,long *param_2,long param_3,int param_4,int param_5,int param_6)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ASN1_OBJECT *pAVar8;
  ASN1_OCTET_STRING *a;
  ASN1_ENUMERATED *a_00;
  byte *pbVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ASN1_INTEGER *a_01;
  long in_FS_OFFSET;
  int local_68;
  int local_64;
  byte *local_60;
  byte *local_58;
  long local_50;
  ASN1_OBJECT *local_48;
  long local_40;
  
  local_60 = (byte *)*param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pbVar1 = local_60 + param_3;
  local_48 = (ASN1_OBJECT *)0x0;
  if (0 < param_3) {
LAB_00101afb:
    pbVar9 = local_60;
    uVar5 = ASN1_get_object(&local_60,&local_50,&local_68,&local_64,param_3);
    if ((uVar5 & 0x80) != 0) {
      a_01 = (ASN1_INTEGER *)0x0;
      a = (ASN1_OCTET_STRING *)0x0;
      BIO_puts(param_1,"Error in encoding\n");
      iVar6 = 0;
      a_00 = (ASN1_ENUMERATED *)0x0;
      goto LAB_00101c62;
    }
    lVar10 = (long)(int)((long)local_60 - (long)pbVar9);
    param_3 = param_3 - lVar10;
    iVar6 = asn1_print_info(param_1,pbVar9 + ((long)param_4 - *param_2),3,
                            (long)local_60 - (long)pbVar9 & 0xffffffff,local_50,local_68,local_64,
                            uVar5,-(param_5 != 0) & 3);
    lVar12 = local_50;
    pbVar4 = local_60;
    if (iVar6 == 0) goto LAB_00101c56;
    if ((uVar5 & 0x20) != 0) {
      iVar6 = BIO_write(param_1,&_LC12,1);
      if (0 < iVar6) {
        if (local_50 <= param_3) {
          if ((local_50 == 0) && (uVar5 == 0x21)) {
            do {
              iVar6 = asn1_parse2_constprop_4
                                (param_1,&local_60,(long)pbVar1 - (long)local_60,
                                 ((int)local_60 - (int)*param_2) + param_4,param_5,param_6);
              if (iVar6 == 0) goto LAB_00101f14;
            } while ((iVar6 != 2) && (local_60 < pbVar1));
            local_50 = (long)local_60 - (long)pbVar4;
          }
          else {
            pbVar9 = local_60;
            lVar10 = local_50;
            while (local_60 = pbVar9, pbVar9 < pbVar4 + lVar12) {
              iVar6 = asn1_parse2_constprop_4
                                (param_1,&local_60,lVar10,((int)pbVar9 - (int)*param_2) + param_4,
                                 param_5,param_6);
              if (iVar6 == 0) goto LAB_00101f14;
              lVar10 = lVar10 - ((long)local_60 - (long)pbVar9);
              pbVar9 = local_60;
            }
          }
          goto LAB_00101db3;
        }
        BIO_printf(param_1,"length is greater than %ld\n",param_3);
      }
LAB_0010225c:
      iVar6 = 0;
      a_00 = (ASN1_ENUMERATED *)0x0;
      a_01 = (ASN1_INTEGER *)0x0;
      a = (ASN1_OCTET_STRING *)0x0;
      goto LAB_00101c62;
    }
    if (local_64 != 0) {
      local_60 = local_60 + local_50;
      iVar6 = BIO_write(param_1,&_LC12,1);
      if (iVar6 < 1) goto LAB_0010225c;
      goto LAB_00101db3;
    }
    iVar6 = 0;
    if (local_68 != 6) {
      if (local_68 < 7) {
        if (local_68 != 2) {
          if (local_68 != 4) {
            if (local_68 != 1) goto LAB_00101fa0;
            if (local_50 != 1) {
              iVar7 = BIO_puts(param_1,":BAD BOOLEAN");
              if (iVar7 < 1) goto LAB_00101c56;
              if (0 < local_50) {
                BIO_printf(param_1,":%u",(ulong)*local_60);
              }
              goto LAB_00101bf8;
            }
            BIO_printf(param_1,":%u",(ulong)*local_60);
            goto LAB_00101f50;
          }
          local_58 = pbVar9;
          a = d2i_ASN1_OCTET_STRING((ASN1_OCTET_STRING **)0x0,&local_58,local_50 + lVar10);
          if (a == (ASN1_OCTET_STRING *)0x0) {
            ASN1_OCTET_STRING_free((ASN1_OCTET_STRING *)0x0);
            goto LAB_00101f50;
          }
          if (0 < a->length) {
            local_58 = a->data;
            pbVar9 = local_58;
            do {
              bVar2 = *pbVar9;
              if ((bVar2 < 0x20) && (bVar2 != 10)) {
                if ((bVar2 & 0xfb) != 9) {
LAB_00102333:
                  if (param_6 == 0) {
                    iVar7 = BIO_write(param_1,"[HEX DUMP]:",0xb);
                    if (iVar7 < 1) {
                      iVar6 = 0;
                      a_00 = (ASN1_ENUMERATED *)0x0;
                      a_01 = (ASN1_INTEGER *)0x0;
                      goto LAB_00101c62;
                    }
                    lVar12 = 0;
                    if (0 < a->length) goto LAB_00102569;
                    goto LAB_001020d8;
                  }
                  iVar7 = BIO_write(param_1,&_LC12,1);
                  if (iVar7 < 1) goto LAB_00102442;
                  iVar7 = a->length;
                  iVar3 = param_6;
                  if (iVar7 <= param_6) {
                    iVar3 = iVar7;
                  }
                  if (param_6 != -1) {
                    iVar7 = iVar3;
                  }
                  iVar7 = BIO_dump_indent(param_1,(char *)local_58,iVar7,6);
                  if (iVar7 < 1) goto LAB_00102442;
                  ASN1_OCTET_STRING_free(a);
                  goto LAB_00101f6c;
                }
              }
              else if (0x7e < bVar2) goto LAB_00102333;
              pbVar9 = pbVar9 + 1;
            } while (local_58 + a->length != pbVar9);
            iVar7 = BIO_write(param_1,&_LC14,1);
            if ((iVar7 < 1) || (iVar7 = BIO_write(param_1,local_58,a->length), iVar7 < 1))
            goto LAB_00102442;
          }
          goto LAB_001020d8;
        }
        local_58 = pbVar9;
        a_01 = d2i_ASN1_INTEGER((ASN1_INTEGER **)0x0,&local_58,local_50 + lVar10);
        if (a_01 == (ASN1_INTEGER *)0x0) {
          iVar7 = BIO_puts(param_1,":BAD INTEGER");
          if (0 < iVar7) {
            ASN1_INTEGER_free((ASN1_INTEGER *)0x0);
            goto LAB_00101bf8;
          }
        }
        else {
          iVar7 = BIO_write(param_1,&_LC14,1);
          if ((0 < iVar7) &&
             ((a_01->type != 0x102 || (iVar7 = BIO_write(param_1,&_LC20,1), 0 < iVar7)))) {
            iVar7 = a_01->length;
            lVar12 = 0;
            if (0 < iVar7) {
              do {
                iVar7 = BIO_printf(param_1,"%02X",(ulong)a_01->data[lVar12]);
                if (iVar7 < 1) goto LAB_00102188;
                iVar7 = a_01->length;
                lVar12 = lVar12 + 1;
              } while ((int)lVar12 < iVar7);
            }
            if ((iVar7 != 0) || (iVar7 = BIO_write(param_1,&_LC21,2), 0 < iVar7)) {
              ASN1_INTEGER_free(a_01);
              goto LAB_00101f50;
            }
            iVar6 = 0;
            a_00 = (ASN1_ENUMERATED *)0x0;
            a = (ASN1_OCTET_STRING *)0x0;
            goto LAB_00101c62;
          }
        }
LAB_00102188:
        a_00 = (ASN1_ENUMERATED *)0x0;
        a = (ASN1_OCTET_STRING *)0x0;
      }
      else {
        if (0x14 < local_68 - 10U) {
LAB_00101fa0:
          if ((local_50 < 1) || (param_6 == 0)) goto LAB_00101f50;
          iVar7 = BIO_write(param_1,&_LC12,1);
          if (0 < iVar7) {
            if ((param_6 == -1) || (iVar7 = param_6, local_50 < param_6)) {
              iVar7 = (int)local_50;
            }
            iVar7 = BIO_dump_indent(param_1,(char *)local_60,iVar7,6);
            if (iVar7 < 1) goto LAB_00101c56;
            goto LAB_00101f6c;
          }
          goto LAB_00101c56;
        }
        uVar11 = 1L << ((byte)local_68 & 0x3f);
        uVar13 = (ulong)((uint)uVar11 & 0x5dc1000);
        if ((uVar11 & 0x5dc1000) != 0) {
          iVar7 = BIO_write(param_1,&_LC14,1);
          if (0 < iVar7) {
            if (0 < local_50) {
              iVar7 = BIO_write(param_1,local_60,(int)local_50);
              if (iVar7 != (int)local_50) goto LAB_00101c56;
            }
            goto LAB_00101f50;
          }
          goto LAB_00101c56;
        }
        if (local_68 == 0x1e) goto LAB_00101f50;
        if (local_68 != 10) goto LAB_00101fa0;
        local_58 = pbVar9;
        a_00 = d2i_ASN1_ENUMERATED((ASN1_ENUMERATED **)0x0,&local_58,local_50 + lVar10);
        if (a_00 == (ASN1_ENUMERATED *)0x0) {
          iVar7 = BIO_puts(param_1,":BAD ENUMERATED");
          if (0 < iVar7) {
            ASN1_ENUMERATED_free((ASN1_ENUMERATED *)0x0);
            goto LAB_00101bf8;
          }
        }
        else {
          iVar7 = BIO_write(param_1,&_LC14,1);
          if ((0 < iVar7) &&
             ((a_00->type != 0x10a || (iVar7 = BIO_write(param_1,&_LC20,1), 0 < iVar7)))) {
            iVar7 = a_00->length;
            if (0 < iVar7) {
              do {
                iVar7 = BIO_printf(param_1,"%02X",(ulong)a_00->data[uVar13]);
                if (iVar7 < 1) {
                  a_01 = (ASN1_INTEGER *)0x0;
                  a = (ASN1_OCTET_STRING *)0x0;
                  goto LAB_00101c62;
                }
                iVar7 = a_00->length;
                uVar13 = uVar13 + 1;
              } while ((int)uVar13 < iVar7);
            }
            if ((iVar7 != 0) || (iVar7 = BIO_write(param_1,&_LC21,2), 0 < iVar7)) {
              ASN1_ENUMERATED_free(a_00);
              goto LAB_00101f50;
            }
            iVar6 = 0;
            a_01 = (ASN1_INTEGER *)0x0;
            a = (ASN1_OCTET_STRING *)0x0;
            goto LAB_00101c62;
          }
        }
        a_01 = (ASN1_INTEGER *)0x0;
        a = (ASN1_OCTET_STRING *)0x0;
      }
      goto LAB_00101c62;
    }
    local_58 = pbVar9;
    pAVar8 = d2i_ASN1_OBJECT(&local_48,&local_58,local_50 + lVar10);
    if (pAVar8 == (ASN1_OBJECT *)0x0) {
      iVar7 = BIO_puts(param_1,":BAD OBJECT");
      a = (ASN1_OCTET_STRING *)0x0;
      if (0 < iVar7) {
LAB_00101bf8:
        iVar7 = BIO_puts(param_1,":[");
        if (0 < iVar7) {
          lVar12 = 0;
          if (0 < local_50) {
            do {
              iVar7 = BIO_printf(param_1,"%02X",(ulong)pbVar9[lVar12 + lVar10]);
              if (iVar7 < 1) goto LAB_00101c56;
              lVar12 = lVar12 + 1;
            } while (lVar12 < local_50);
          }
          iVar7 = BIO_puts(param_1,"]");
          if (0 < iVar7) goto LAB_00101f50;
        }
        goto LAB_00101c56;
      }
LAB_00102442:
      a_00 = (ASN1_ENUMERATED *)0x0;
      a_01 = (ASN1_INTEGER *)0x0;
      goto LAB_00101c62;
    }
    iVar7 = BIO_write(param_1,&_LC14,1);
    if (0 < iVar7) {
      i2a_ASN1_OBJECT(param_1,local_48);
      goto LAB_00101f50;
    }
    goto LAB_00101c56;
  }
  a_00 = (ASN1_ENUMERATED *)0x0;
  a_01 = (ASN1_INTEGER *)0x0;
  a = (ASN1_OCTET_STRING *)0x0;
  iVar6 = 1;
  goto LAB_00101c62;
LAB_00101f14:
  a_00 = (ASN1_ENUMERATED *)0x0;
  a_01 = (ASN1_INTEGER *)0x0;
  a = (ASN1_OCTET_STRING *)0x0;
  goto LAB_00101c62;
  while (lVar12 = lVar12 + 1, (int)lVar12 < a->length) {
LAB_00102569:
    iVar7 = BIO_printf(param_1,"%02X",(ulong)local_58[lVar12]);
    if (iVar7 < 1) {
      iVar6 = 0;
      a_00 = (ASN1_ENUMERATED *)0x0;
      a_01 = (ASN1_INTEGER *)0x0;
      goto LAB_00101c62;
    }
  }
LAB_001020d8:
  ASN1_OCTET_STRING_free(a);
LAB_00101f50:
  iVar7 = BIO_write(param_1,&_LC12,1);
  if (0 < iVar7) {
LAB_00101f6c:
    local_60 = local_60 + local_50;
    if (local_68 == 0 && local_64 == 0) {
      a_00 = (ASN1_ENUMERATED *)0x0;
      a_01 = (ASN1_INTEGER *)0x0;
      a = (ASN1_OCTET_STRING *)0x0;
      iVar6 = 2;
      goto LAB_00101c62;
    }
LAB_00101db3:
    param_3 = param_3 - local_50;
    if (param_3 < 1) goto LAB_001022e0;
    goto LAB_00101afb;
  }
LAB_00101c56:
  a_00 = (ASN1_ENUMERATED *)0x0;
  a_01 = (ASN1_INTEGER *)0x0;
  a = (ASN1_OCTET_STRING *)0x0;
  goto LAB_00101c62;
LAB_001022e0:
  a_00 = (ASN1_ENUMERATED *)0x0;
  a_01 = (ASN1_INTEGER *)0x0;
  a = (ASN1_OCTET_STRING *)0x0;
  iVar6 = 1;
LAB_00101c62:
  ASN1_OBJECT_free(local_48);
  ASN1_OCTET_STRING_free(a);
  ASN1_INTEGER_free(a_01);
  ASN1_ENUMERATED_free(a_00);
  *param_2 = (long)local_60;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int asn1_parse2_constprop_2
              (BIO *param_1,long *param_2,long param_3,int param_4,int param_5,int param_6)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ASN1_OBJECT *pAVar8;
  ASN1_OCTET_STRING *a;
  ASN1_ENUMERATED *a_00;
  byte *pbVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ASN1_INTEGER *a_01;
  long in_FS_OFFSET;
  int local_68;
  int local_64;
  byte *local_60;
  byte *local_58;
  long local_50;
  ASN1_OBJECT *local_48;
  long local_40;
  
  local_60 = (byte *)*param_2;
  pbVar1 = local_60 + param_3;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (ASN1_OBJECT *)0x0;
  if (0 < param_3) {
LAB_0010265c:
    pbVar9 = local_60;
    uVar5 = ASN1_get_object(&local_60,&local_50,&local_68,&local_64,param_3);
    if ((uVar5 & 0x80) != 0) {
      a_01 = (ASN1_INTEGER *)0x0;
      a = (ASN1_OCTET_STRING *)0x0;
      BIO_puts(param_1,"Error in encoding\n");
      iVar6 = 0;
      a_00 = (ASN1_ENUMERATED *)0x0;
      goto LAB_001027c2;
    }
    lVar10 = (long)(int)((long)local_60 - (long)pbVar9);
    param_3 = param_3 - lVar10;
    iVar6 = asn1_print_info(param_1,pbVar9 + ((long)param_4 - *param_2),2,
                            (long)local_60 - (long)pbVar9 & 0xffffffff,local_50,local_68,local_64,
                            uVar5,(param_5 != 0) * '\x02');
    lVar12 = local_50;
    pbVar4 = local_60;
    if (iVar6 == 0) goto LAB_001027b6;
    if ((uVar5 & 0x20) != 0) {
      iVar6 = BIO_write(param_1,&_LC12,1);
      if (0 < iVar6) {
        if (local_50 <= param_3) {
          if ((local_50 == 0) && (uVar5 == 0x21)) {
            do {
              iVar6 = asn1_parse2_constprop_3
                                (param_1,&local_60,(long)pbVar1 - (long)local_60,
                                 ((int)local_60 - (int)*param_2) + param_4,param_5,param_6);
              if (iVar6 == 0) goto LAB_00102a74;
            } while ((iVar6 != 2) && (local_60 < pbVar1));
            local_50 = (long)local_60 - (long)pbVar4;
          }
          else {
            pbVar9 = local_60;
            lVar10 = local_50;
            while (local_60 = pbVar9, pbVar9 < pbVar4 + lVar12) {
              iVar6 = asn1_parse2_constprop_3
                                (param_1,&local_60,lVar10,((int)pbVar9 - (int)*param_2) + param_4,
                                 param_5,param_6);
              if (iVar6 == 0) goto LAB_00102a74;
              lVar10 = lVar10 - ((long)local_60 - (long)pbVar9);
              pbVar9 = local_60;
            }
          }
          goto LAB_00102913;
        }
        BIO_printf(param_1,"length is greater than %ld\n",param_3);
      }
LAB_00102dbc:
      iVar6 = 0;
      a_00 = (ASN1_ENUMERATED *)0x0;
      a_01 = (ASN1_INTEGER *)0x0;
      a = (ASN1_OCTET_STRING *)0x0;
      goto LAB_001027c2;
    }
    if (local_64 != 0) {
      local_60 = local_60 + local_50;
      iVar6 = BIO_write(param_1,&_LC12,1);
      if (iVar6 < 1) goto LAB_00102dbc;
      goto LAB_00102913;
    }
    iVar6 = 0;
    if (local_68 != 6) {
      if (local_68 < 7) {
        if (local_68 != 2) {
          if (local_68 != 4) {
            if (local_68 != 1) goto LAB_00102b00;
            if (local_50 != 1) {
              iVar7 = BIO_puts(param_1,":BAD BOOLEAN");
              if (iVar7 < 1) goto LAB_001027b6;
              if (0 < local_50) {
                BIO_printf(param_1,":%u",(ulong)*local_60);
              }
              goto LAB_00102759;
            }
            BIO_printf(param_1,":%u",(ulong)*local_60);
            goto LAB_00102ab0;
          }
          local_58 = pbVar9;
          a = d2i_ASN1_OCTET_STRING((ASN1_OCTET_STRING **)0x0,&local_58,local_50 + lVar10);
          if (a == (ASN1_OCTET_STRING *)0x0) {
            ASN1_OCTET_STRING_free((ASN1_OCTET_STRING *)0x0);
            goto LAB_00102ab0;
          }
          if (0 < a->length) {
            local_58 = a->data;
            pbVar9 = local_58;
            do {
              bVar2 = *pbVar9;
              if ((bVar2 < 0x20) && (bVar2 != 10)) {
                if ((bVar2 & 0xfb) != 9) {
LAB_00102e93:
                  if (param_6 == 0) {
                    iVar7 = BIO_write(param_1,"[HEX DUMP]:",0xb);
                    if (iVar7 < 1) {
                      iVar6 = 0;
                      a_00 = (ASN1_ENUMERATED *)0x0;
                      a_01 = (ASN1_INTEGER *)0x0;
                      goto LAB_001027c2;
                    }
                    lVar12 = 0;
                    if (0 < a->length) goto LAB_001030c9;
                    goto LAB_00102c38;
                  }
                  iVar7 = BIO_write(param_1,&_LC12,1);
                  if (iVar7 < 1) goto LAB_00102fa2;
                  iVar7 = a->length;
                  iVar3 = param_6;
                  if (iVar7 <= param_6) {
                    iVar3 = iVar7;
                  }
                  if (param_6 != -1) {
                    iVar7 = iVar3;
                  }
                  iVar7 = BIO_dump_indent(param_1,(char *)local_58,iVar7,6);
                  if (iVar7 < 1) goto LAB_00102fa2;
                  ASN1_OCTET_STRING_free(a);
                  goto LAB_00102acc;
                }
              }
              else if (0x7e < bVar2) goto LAB_00102e93;
              pbVar9 = pbVar9 + 1;
            } while (local_58 + a->length != pbVar9);
            iVar7 = BIO_write(param_1,&_LC14,1);
            if ((iVar7 < 1) || (iVar7 = BIO_write(param_1,local_58,a->length), iVar7 < 1))
            goto LAB_00102fa2;
          }
          goto LAB_00102c38;
        }
        local_58 = pbVar9;
        a_01 = d2i_ASN1_INTEGER((ASN1_INTEGER **)0x0,&local_58,local_50 + lVar10);
        if (a_01 == (ASN1_INTEGER *)0x0) {
          iVar7 = BIO_puts(param_1,":BAD INTEGER");
          if (0 < iVar7) {
            ASN1_INTEGER_free((ASN1_INTEGER *)0x0);
            goto LAB_00102759;
          }
        }
        else {
          iVar7 = BIO_write(param_1,&_LC14,1);
          if ((0 < iVar7) &&
             ((a_01->type != 0x102 || (iVar7 = BIO_write(param_1,&_LC20,1), 0 < iVar7)))) {
            iVar7 = a_01->length;
            lVar12 = 0;
            if (0 < iVar7) {
              do {
                iVar7 = BIO_printf(param_1,"%02X",(ulong)a_01->data[lVar12]);
                if (iVar7 < 1) goto LAB_00102ce8;
                iVar7 = a_01->length;
                lVar12 = lVar12 + 1;
              } while ((int)lVar12 < iVar7);
            }
            if ((iVar7 != 0) || (iVar7 = BIO_write(param_1,&_LC21,2), 0 < iVar7)) {
              ASN1_INTEGER_free(a_01);
              goto LAB_00102ab0;
            }
            iVar6 = 0;
            a_00 = (ASN1_ENUMERATED *)0x0;
            a = (ASN1_OCTET_STRING *)0x0;
            goto LAB_001027c2;
          }
        }
LAB_00102ce8:
        a_00 = (ASN1_ENUMERATED *)0x0;
        a = (ASN1_OCTET_STRING *)0x0;
      }
      else {
        if (0x14 < local_68 - 10U) {
LAB_00102b00:
          if ((local_50 < 1) || (param_6 == 0)) goto LAB_00102ab0;
          iVar7 = BIO_write(param_1,&_LC12,1);
          if (0 < iVar7) {
            if ((param_6 == -1) || (iVar7 = param_6, local_50 < param_6)) {
              iVar7 = (int)local_50;
            }
            iVar7 = BIO_dump_indent(param_1,(char *)local_60,iVar7,6);
            if (iVar7 < 1) goto LAB_001027b6;
            goto LAB_00102acc;
          }
          goto LAB_001027b6;
        }
        uVar11 = 1L << ((byte)local_68 & 0x3f);
        uVar13 = (ulong)((uint)uVar11 & 0x5dc1000);
        if ((uVar11 & 0x5dc1000) != 0) {
          iVar7 = BIO_write(param_1,&_LC14,1);
          if (0 < iVar7) {
            if (0 < local_50) {
              iVar7 = BIO_write(param_1,local_60,(int)local_50);
              if (iVar7 != (int)local_50) goto LAB_001027b6;
            }
            goto LAB_00102ab0;
          }
          goto LAB_001027b6;
        }
        if (local_68 == 0x1e) goto LAB_00102ab0;
        if (local_68 != 10) goto LAB_00102b00;
        local_58 = pbVar9;
        a_00 = d2i_ASN1_ENUMERATED((ASN1_ENUMERATED **)0x0,&local_58,local_50 + lVar10);
        if (a_00 == (ASN1_ENUMERATED *)0x0) {
          iVar7 = BIO_puts(param_1,":BAD ENUMERATED");
          if (0 < iVar7) {
            ASN1_ENUMERATED_free((ASN1_ENUMERATED *)0x0);
            goto LAB_00102759;
          }
        }
        else {
          iVar7 = BIO_write(param_1,&_LC14,1);
          if ((0 < iVar7) &&
             ((a_00->type != 0x10a || (iVar7 = BIO_write(param_1,&_LC20,1), 0 < iVar7)))) {
            iVar7 = a_00->length;
            if (0 < iVar7) {
              do {
                iVar7 = BIO_printf(param_1,"%02X",(ulong)a_00->data[uVar13]);
                if (iVar7 < 1) {
                  a_01 = (ASN1_INTEGER *)0x0;
                  a = (ASN1_OCTET_STRING *)0x0;
                  goto LAB_001027c2;
                }
                iVar7 = a_00->length;
                uVar13 = uVar13 + 1;
              } while ((int)uVar13 < iVar7);
            }
            if ((iVar7 != 0) || (iVar7 = BIO_write(param_1,&_LC21,2), 0 < iVar7)) {
              ASN1_ENUMERATED_free(a_00);
              goto LAB_00102ab0;
            }
            iVar6 = 0;
            a_01 = (ASN1_INTEGER *)0x0;
            a = (ASN1_OCTET_STRING *)0x0;
            goto LAB_001027c2;
          }
        }
        a_01 = (ASN1_INTEGER *)0x0;
        a = (ASN1_OCTET_STRING *)0x0;
      }
      goto LAB_001027c2;
    }
    local_58 = pbVar9;
    pAVar8 = d2i_ASN1_OBJECT(&local_48,&local_58,local_50 + lVar10);
    if (pAVar8 == (ASN1_OBJECT *)0x0) {
      iVar7 = BIO_puts(param_1,":BAD OBJECT");
      a = (ASN1_OCTET_STRING *)0x0;
      if (0 < iVar7) {
LAB_00102759:
        iVar7 = BIO_puts(param_1,":[");
        if (0 < iVar7) {
          lVar12 = 0;
          if (0 < local_50) {
            do {
              iVar7 = BIO_printf(param_1,"%02X",(ulong)pbVar9[lVar12 + lVar10]);
              if (iVar7 < 1) goto LAB_001027b6;
              lVar12 = lVar12 + 1;
            } while (lVar12 < local_50);
          }
          iVar7 = BIO_puts(param_1,"]");
          if (0 < iVar7) goto LAB_00102ab0;
        }
        goto LAB_001027b6;
      }
LAB_00102fa2:
      a_00 = (ASN1_ENUMERATED *)0x0;
      a_01 = (ASN1_INTEGER *)0x0;
      goto LAB_001027c2;
    }
    iVar7 = BIO_write(param_1,&_LC14,1);
    if (0 < iVar7) {
      i2a_ASN1_OBJECT(param_1,local_48);
      goto LAB_00102ab0;
    }
    goto LAB_001027b6;
  }
  a_00 = (ASN1_ENUMERATED *)0x0;
  a_01 = (ASN1_INTEGER *)0x0;
  a = (ASN1_OCTET_STRING *)0x0;
  iVar6 = 1;
  goto LAB_001027c2;
LAB_00102a74:
  a_00 = (ASN1_ENUMERATED *)0x0;
  a_01 = (ASN1_INTEGER *)0x0;
  a = (ASN1_OCTET_STRING *)0x0;
  goto LAB_001027c2;
  while (lVar12 = lVar12 + 1, (int)lVar12 < a->length) {
LAB_001030c9:
    iVar7 = BIO_printf(param_1,"%02X",(ulong)local_58[lVar12]);
    if (iVar7 < 1) {
      iVar6 = 0;
      a_00 = (ASN1_ENUMERATED *)0x0;
      a_01 = (ASN1_INTEGER *)0x0;
      goto LAB_001027c2;
    }
  }
LAB_00102c38:
  ASN1_OCTET_STRING_free(a);
LAB_00102ab0:
  iVar7 = BIO_write(param_1,&_LC12,1);
  if (0 < iVar7) {
LAB_00102acc:
    local_60 = local_60 + local_50;
    if (local_68 == 0 && local_64 == 0) {
      a_00 = (ASN1_ENUMERATED *)0x0;
      a_01 = (ASN1_INTEGER *)0x0;
      a = (ASN1_OCTET_STRING *)0x0;
      iVar6 = 2;
      goto LAB_001027c2;
    }
LAB_00102913:
    param_3 = param_3 - local_50;
    if (param_3 < 1) goto LAB_00102e40;
    goto LAB_0010265c;
  }
LAB_001027b6:
  a_00 = (ASN1_ENUMERATED *)0x0;
  a_01 = (ASN1_INTEGER *)0x0;
  a = (ASN1_OCTET_STRING *)0x0;
  goto LAB_001027c2;
LAB_00102e40:
  a_00 = (ASN1_ENUMERATED *)0x0;
  a_01 = (ASN1_INTEGER *)0x0;
  a = (ASN1_OCTET_STRING *)0x0;
  iVar6 = 1;
LAB_001027c2:
  ASN1_OBJECT_free(local_48);
  ASN1_OCTET_STRING_free(a);
  ASN1_INTEGER_free(a_01);
  ASN1_ENUMERATED_free(a_00);
  *param_2 = (long)local_60;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int asn1_parse2_constprop_1
              (BIO *param_1,long *param_2,long param_3,int param_4,int param_5,int param_6)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ASN1_OBJECT *pAVar8;
  ASN1_OCTET_STRING *a;
  ASN1_ENUMERATED *a_00;
  byte *pbVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ASN1_INTEGER *a_01;
  long in_FS_OFFSET;
  int local_68;
  int local_64;
  byte *local_60;
  byte *local_58;
  long local_50;
  ASN1_OBJECT *local_48;
  long local_40;
  
  local_60 = (byte *)*param_2;
  pbVar1 = local_60 + param_3;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (ASN1_OBJECT *)0x0;
  if (0 < param_3) {
LAB_001031ad:
    pbVar9 = local_60;
    uVar5 = ASN1_get_object(&local_60,&local_50,&local_68,&local_64,param_3);
    if ((uVar5 & 0x80) != 0) {
      a_01 = (ASN1_INTEGER *)0x0;
      a = (ASN1_OCTET_STRING *)0x0;
      BIO_puts(param_1,"Error in encoding\n");
      iVar6 = 0;
      a_00 = (ASN1_ENUMERATED *)0x0;
      goto LAB_0010331a;
    }
    lVar10 = (long)(int)((long)local_60 - (long)pbVar9);
    param_3 = param_3 - lVar10;
    iVar6 = asn1_print_info(param_1,pbVar9 + ((long)param_4 - *param_2),1,
                            (long)local_60 - (long)pbVar9 & 0xffffffff,local_50,local_68,local_64,
                            uVar5,param_5 != 0);
    lVar12 = local_50;
    pbVar4 = local_60;
    if (iVar6 == 0) goto LAB_0010330e;
    if ((uVar5 & 0x20) != 0) {
      iVar6 = BIO_write(param_1,&_LC12,1);
      if (0 < iVar6) {
        if (local_50 <= param_3) {
          if ((local_50 == 0) && (uVar5 == 0x21)) {
            do {
              iVar6 = asn1_parse2_constprop_2
                                (param_1,&local_60,(long)pbVar1 - (long)local_60,
                                 ((int)local_60 - (int)*param_2) + param_4,param_5,param_6);
              if (iVar6 == 0) goto LAB_001035d4;
            } while ((iVar6 != 2) && (local_60 < pbVar1));
            local_50 = (long)local_60 - (long)pbVar4;
          }
          else {
            pbVar9 = local_60;
            lVar10 = local_50;
            while (local_60 = pbVar9, pbVar9 < pbVar4 + lVar12) {
              iVar6 = asn1_parse2_constprop_2
                                (param_1,&local_60,lVar10,((int)pbVar9 - (int)*param_2) + param_4,
                                 param_5,param_6);
              if (iVar6 == 0) goto LAB_001035d4;
              lVar10 = lVar10 - ((long)local_60 - (long)pbVar9);
              pbVar9 = local_60;
            }
          }
          goto LAB_00103473;
        }
        BIO_printf(param_1,"length is greater than %ld\n",param_3);
      }
LAB_0010391c:
      iVar6 = 0;
      a_00 = (ASN1_ENUMERATED *)0x0;
      a_01 = (ASN1_INTEGER *)0x0;
      a = (ASN1_OCTET_STRING *)0x0;
      goto LAB_0010331a;
    }
    if (local_64 != 0) {
      local_60 = local_60 + local_50;
      iVar6 = BIO_write(param_1,&_LC12,1);
      if (iVar6 < 1) goto LAB_0010391c;
      goto LAB_00103473;
    }
    iVar6 = 0;
    if (local_68 != 6) {
      if (local_68 < 7) {
        if (local_68 != 2) {
          if (local_68 != 4) {
            if (local_68 != 1) goto LAB_00103660;
            if (local_50 != 1) {
              iVar7 = BIO_puts(param_1,":BAD BOOLEAN");
              if (iVar7 < 1) goto LAB_0010330e;
              if (0 < local_50) {
                BIO_printf(param_1,":%u",(ulong)*local_60);
              }
              goto LAB_001032b1;
            }
            BIO_printf(param_1,":%u",(ulong)*local_60);
            goto LAB_00103610;
          }
          local_58 = pbVar9;
          a = d2i_ASN1_OCTET_STRING((ASN1_OCTET_STRING **)0x0,&local_58,local_50 + lVar10);
          if (a == (ASN1_OCTET_STRING *)0x0) {
            ASN1_OCTET_STRING_free((ASN1_OCTET_STRING *)0x0);
            goto LAB_00103610;
          }
          if (0 < a->length) {
            local_58 = a->data;
            pbVar9 = local_58;
            do {
              bVar2 = *pbVar9;
              if ((bVar2 < 0x20) && (bVar2 != 10)) {
                if ((bVar2 & 0xfb) != 9) {
LAB_001039f3:
                  if (param_6 == 0) {
                    iVar7 = BIO_write(param_1,"[HEX DUMP]:",0xb);
                    if (iVar7 < 1) {
                      iVar6 = 0;
                      a_00 = (ASN1_ENUMERATED *)0x0;
                      a_01 = (ASN1_INTEGER *)0x0;
                      goto LAB_0010331a;
                    }
                    lVar12 = 0;
                    if (0 < a->length) goto LAB_00103c29;
                    goto LAB_00103798;
                  }
                  iVar7 = BIO_write(param_1,&_LC12,1);
                  if (iVar7 < 1) goto LAB_00103b02;
                  iVar7 = a->length;
                  iVar3 = param_6;
                  if (iVar7 <= param_6) {
                    iVar3 = iVar7;
                  }
                  if (param_6 != -1) {
                    iVar7 = iVar3;
                  }
                  iVar7 = BIO_dump_indent(param_1,(char *)local_58,iVar7,6);
                  if (iVar7 < 1) goto LAB_00103b02;
                  ASN1_OCTET_STRING_free(a);
                  goto LAB_0010362c;
                }
              }
              else if (0x7e < bVar2) goto LAB_001039f3;
              pbVar9 = pbVar9 + 1;
            } while (local_58 + a->length != pbVar9);
            iVar7 = BIO_write(param_1,&_LC14,1);
            if ((iVar7 < 1) || (iVar7 = BIO_write(param_1,local_58,a->length), iVar7 < 1))
            goto LAB_00103b02;
          }
          goto LAB_00103798;
        }
        local_58 = pbVar9;
        a_01 = d2i_ASN1_INTEGER((ASN1_INTEGER **)0x0,&local_58,local_50 + lVar10);
        if (a_01 == (ASN1_INTEGER *)0x0) {
          iVar7 = BIO_puts(param_1,":BAD INTEGER");
          if (0 < iVar7) {
            ASN1_INTEGER_free((ASN1_INTEGER *)0x0);
            goto LAB_001032b1;
          }
        }
        else {
          iVar7 = BIO_write(param_1,&_LC14,1);
          if ((0 < iVar7) &&
             ((a_01->type != 0x102 || (iVar7 = BIO_write(param_1,&_LC20,1), 0 < iVar7)))) {
            iVar7 = a_01->length;
            lVar12 = 0;
            if (0 < iVar7) {
              do {
                iVar7 = BIO_printf(param_1,"%02X",(ulong)a_01->data[lVar12]);
                if (iVar7 < 1) goto LAB_00103848;
                iVar7 = a_01->length;
                lVar12 = lVar12 + 1;
              } while ((int)lVar12 < iVar7);
            }
            if ((iVar7 != 0) || (iVar7 = BIO_write(param_1,&_LC21,2), 0 < iVar7)) {
              ASN1_INTEGER_free(a_01);
              goto LAB_00103610;
            }
            iVar6 = 0;
            a_00 = (ASN1_ENUMERATED *)0x0;
            a = (ASN1_OCTET_STRING *)0x0;
            goto LAB_0010331a;
          }
        }
LAB_00103848:
        a_00 = (ASN1_ENUMERATED *)0x0;
        a = (ASN1_OCTET_STRING *)0x0;
      }
      else {
        if (0x14 < local_68 - 10U) {
LAB_00103660:
          if ((local_50 < 1) || (param_6 == 0)) goto LAB_00103610;
          iVar7 = BIO_write(param_1,&_LC12,1);
          if (0 < iVar7) {
            if ((param_6 == -1) || (iVar7 = param_6, local_50 < param_6)) {
              iVar7 = (int)local_50;
            }
            iVar7 = BIO_dump_indent(param_1,(char *)local_60,iVar7,6);
            if (iVar7 < 1) goto LAB_0010330e;
            goto LAB_0010362c;
          }
          goto LAB_0010330e;
        }
        uVar11 = 1L << ((byte)local_68 & 0x3f);
        uVar13 = (ulong)((uint)uVar11 & 0x5dc1000);
        if ((uVar11 & 0x5dc1000) != 0) {
          iVar7 = BIO_write(param_1,&_LC14,1);
          if (0 < iVar7) {
            if (0 < local_50) {
              iVar7 = BIO_write(param_1,local_60,(int)local_50);
              if (iVar7 != (int)local_50) goto LAB_0010330e;
            }
            goto LAB_00103610;
          }
          goto LAB_0010330e;
        }
        if (local_68 == 0x1e) goto LAB_00103610;
        if (local_68 != 10) goto LAB_00103660;
        local_58 = pbVar9;
        a_00 = d2i_ASN1_ENUMERATED((ASN1_ENUMERATED **)0x0,&local_58,local_50 + lVar10);
        if (a_00 == (ASN1_ENUMERATED *)0x0) {
          iVar7 = BIO_puts(param_1,":BAD ENUMERATED");
          if (0 < iVar7) {
            ASN1_ENUMERATED_free((ASN1_ENUMERATED *)0x0);
            goto LAB_001032b1;
          }
        }
        else {
          iVar7 = BIO_write(param_1,&_LC14,1);
          if ((0 < iVar7) &&
             ((a_00->type != 0x10a || (iVar7 = BIO_write(param_1,&_LC20,1), 0 < iVar7)))) {
            iVar7 = a_00->length;
            if (0 < iVar7) {
              do {
                iVar7 = BIO_printf(param_1,"%02X",(ulong)a_00->data[uVar13]);
                if (iVar7 < 1) {
                  a_01 = (ASN1_INTEGER *)0x0;
                  a = (ASN1_OCTET_STRING *)0x0;
                  goto LAB_0010331a;
                }
                iVar7 = a_00->length;
                uVar13 = uVar13 + 1;
              } while ((int)uVar13 < iVar7);
            }
            if ((iVar7 != 0) || (iVar7 = BIO_write(param_1,&_LC21,2), 0 < iVar7)) {
              ASN1_ENUMERATED_free(a_00);
              goto LAB_00103610;
            }
            iVar6 = 0;
            a_01 = (ASN1_INTEGER *)0x0;
            a = (ASN1_OCTET_STRING *)0x0;
            goto LAB_0010331a;
          }
        }
        a_01 = (ASN1_INTEGER *)0x0;
        a = (ASN1_OCTET_STRING *)0x0;
      }
      goto LAB_0010331a;
    }
    local_58 = pbVar9;
    pAVar8 = d2i_ASN1_OBJECT(&local_48,&local_58,local_50 + lVar10);
    if (pAVar8 == (ASN1_OBJECT *)0x0) {
      iVar7 = BIO_puts(param_1,":BAD OBJECT");
      a = (ASN1_OCTET_STRING *)0x0;
      if (0 < iVar7) {
LAB_001032b1:
        iVar7 = BIO_puts(param_1,":[");
        if (0 < iVar7) {
          lVar12 = 0;
          if (0 < local_50) {
            do {
              iVar7 = BIO_printf(param_1,"%02X",(ulong)pbVar9[lVar12 + lVar10]);
              if (iVar7 < 1) goto LAB_0010330e;
              lVar12 = lVar12 + 1;
            } while (lVar12 < local_50);
          }
          iVar7 = BIO_puts(param_1,"]");
          if (0 < iVar7) goto LAB_00103610;
        }
        goto LAB_0010330e;
      }
LAB_00103b02:
      a_00 = (ASN1_ENUMERATED *)0x0;
      a_01 = (ASN1_INTEGER *)0x0;
      goto LAB_0010331a;
    }
    iVar7 = BIO_write(param_1,&_LC14,1);
    if (0 < iVar7) {
      i2a_ASN1_OBJECT(param_1,local_48);
      goto LAB_00103610;
    }
    goto LAB_0010330e;
  }
  a_00 = (ASN1_ENUMERATED *)0x0;
  a_01 = (ASN1_INTEGER *)0x0;
  a = (ASN1_OCTET_STRING *)0x0;
  iVar6 = 1;
  goto LAB_0010331a;
LAB_001035d4:
  a_00 = (ASN1_ENUMERATED *)0x0;
  a_01 = (ASN1_INTEGER *)0x0;
  a = (ASN1_OCTET_STRING *)0x0;
  goto LAB_0010331a;
  while (lVar12 = lVar12 + 1, (int)lVar12 < a->length) {
LAB_00103c29:
    iVar7 = BIO_printf(param_1,"%02X",(ulong)local_58[lVar12]);
    if (iVar7 < 1) {
      iVar6 = 0;
      a_00 = (ASN1_ENUMERATED *)0x0;
      a_01 = (ASN1_INTEGER *)0x0;
      goto LAB_0010331a;
    }
  }
LAB_00103798:
  ASN1_OCTET_STRING_free(a);
LAB_00103610:
  iVar7 = BIO_write(param_1,&_LC12,1);
  if (0 < iVar7) {
LAB_0010362c:
    local_60 = local_60 + local_50;
    if (local_68 == 0 && local_64 == 0) {
      a_00 = (ASN1_ENUMERATED *)0x0;
      a_01 = (ASN1_INTEGER *)0x0;
      a = (ASN1_OCTET_STRING *)0x0;
      iVar6 = 2;
      goto LAB_0010331a;
    }
LAB_00103473:
    param_3 = param_3 - local_50;
    if (param_3 < 1) goto LAB_001039a0;
    goto LAB_001031ad;
  }
LAB_0010330e:
  a_00 = (ASN1_ENUMERATED *)0x0;
  a_01 = (ASN1_INTEGER *)0x0;
  a = (ASN1_OCTET_STRING *)0x0;
  goto LAB_0010331a;
LAB_001039a0:
  a_00 = (ASN1_ENUMERATED *)0x0;
  a_01 = (ASN1_INTEGER *)0x0;
  a = (ASN1_OCTET_STRING *)0x0;
  iVar6 = 1;
LAB_0010331a:
  ASN1_OBJECT_free(local_48);
  ASN1_OCTET_STRING_free(a);
  ASN1_INTEGER_free(a_01);
  ASN1_ENUMERATED_free(a_00);
  *param_2 = (long)local_60;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int asn1_parse2_constprop_0(BIO *param_1,long *param_2,long param_3,undefined4 param_4,int param_5)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ASN1_OBJECT *pAVar8;
  ASN1_OCTET_STRING *a;
  ASN1_ENUMERATED *a_00;
  byte *pbVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ASN1_INTEGER *a_01;
  long in_FS_OFFSET;
  int local_68;
  int local_64;
  byte *local_60;
  byte *local_58;
  long local_50;
  ASN1_OBJECT *local_48;
  long local_40;
  
  local_60 = (byte *)*param_2;
  pbVar1 = local_60 + param_3;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (ASN1_OBJECT *)0x0;
  if (0 < param_3) {
LAB_00103d00:
    pbVar9 = local_60;
    uVar5 = ASN1_get_object(&local_60,&local_50,&local_68,&local_64,param_3);
    if ((uVar5 & 0x80) != 0) {
      a_01 = (ASN1_INTEGER *)0x0;
      a = (ASN1_OCTET_STRING *)0x0;
      BIO_puts(param_1,"Error in encoding\n");
      iVar6 = 0;
      a_00 = (ASN1_ENUMERATED *)0x0;
      goto LAB_00103e52;
    }
    lVar10 = (long)(int)((long)local_60 - (long)pbVar9);
    param_3 = param_3 - lVar10;
    iVar6 = asn1_print_info(param_1,(long)pbVar9 - *param_2,0,
                            (long)local_60 - (long)pbVar9 & 0xffffffff,local_50,local_68,local_64,
                            uVar5,0);
    lVar12 = local_50;
    pbVar4 = local_60;
    if (iVar6 == 0) goto LAB_00103e46;
    if ((uVar5 & 0x20) != 0) {
      iVar6 = BIO_write(param_1,&_LC12,1);
      if (0 < iVar6) {
        if (local_50 <= param_3) {
          if ((local_50 == 0) && (uVar5 == 0x21)) {
            do {
              iVar6 = asn1_parse2_constprop_1
                                (param_1,&local_60,(long)pbVar1 - (long)local_60,
                                 (int)local_60 - (int)*param_2,param_4,param_5);
              if (iVar6 == 0) goto LAB_001040e5;
            } while ((iVar6 != 2) && (local_60 < pbVar1));
            local_50 = (long)local_60 - (long)pbVar4;
          }
          else {
            pbVar9 = local_60;
            lVar10 = local_50;
            while (local_60 = pbVar9, pbVar9 < pbVar4 + lVar12) {
              iVar6 = asn1_parse2_constprop_1
                                (param_1,&local_60,lVar10,(int)pbVar9 - (int)*param_2,param_4,
                                 param_5);
              if (iVar6 == 0) goto LAB_001040e5;
              lVar10 = lVar10 - ((long)local_60 - (long)pbVar9);
              pbVar9 = local_60;
            }
          }
          goto LAB_00103f8b;
        }
        BIO_printf(param_1,"length is greater than %ld\n",param_3);
      }
LAB_0010442c:
      iVar6 = 0;
      a_00 = (ASN1_ENUMERATED *)0x0;
      a_01 = (ASN1_INTEGER *)0x0;
      a = (ASN1_OCTET_STRING *)0x0;
      goto LAB_00103e52;
    }
    if (local_64 != 0) {
      local_60 = local_60 + local_50;
      iVar6 = BIO_write(param_1,&_LC12,1);
      if (iVar6 < 1) goto LAB_0010442c;
      goto LAB_00103f8b;
    }
    iVar6 = 0;
    if (local_68 != 6) {
      if (local_68 < 7) {
        if (local_68 != 2) {
          if (local_68 != 4) {
            if (local_68 != 1) goto LAB_00104170;
            if (local_50 != 1) {
              iVar7 = BIO_puts(param_1,":BAD BOOLEAN");
              if (iVar7 < 1) goto LAB_00103e46;
              if (0 < local_50) {
                BIO_printf(param_1,":%u",(ulong)*local_60);
              }
              goto LAB_00103dec;
            }
            BIO_printf(param_1,":%u",(ulong)*local_60);
            goto LAB_00104120;
          }
          local_58 = pbVar9;
          a = d2i_ASN1_OCTET_STRING((ASN1_OCTET_STRING **)0x0,&local_58,local_50 + lVar10);
          if (a == (ASN1_OCTET_STRING *)0x0) {
            ASN1_OCTET_STRING_free((ASN1_OCTET_STRING *)0x0);
            goto LAB_00104120;
          }
          if (0 < a->length) {
            local_58 = a->data;
            pbVar9 = local_58;
            do {
              bVar2 = *pbVar9;
              if ((bVar2 < 0x20) && (bVar2 != 10)) {
                if ((bVar2 & 0xfb) != 9) {
LAB_00104503:
                  if (param_5 == 0) {
                    iVar7 = BIO_write(param_1,"[HEX DUMP]:",0xb);
                    if (iVar7 < 1) {
                      iVar6 = 0;
                      a_00 = (ASN1_ENUMERATED *)0x0;
                      a_01 = (ASN1_INTEGER *)0x0;
                      goto LAB_00103e52;
                    }
                    lVar12 = 0;
                    if (0 < a->length) goto LAB_00104739;
                    goto LAB_001042a8;
                  }
                  iVar7 = BIO_write(param_1,&_LC12,1);
                  if (iVar7 < 1) goto LAB_00104612;
                  iVar7 = a->length;
                  iVar3 = param_5;
                  if (iVar7 <= param_5) {
                    iVar3 = iVar7;
                  }
                  if (param_5 != -1) {
                    iVar7 = iVar3;
                  }
                  iVar7 = BIO_dump_indent(param_1,(char *)local_58,iVar7,6);
                  if (iVar7 < 1) goto LAB_00104612;
                  ASN1_OCTET_STRING_free(a);
                  goto LAB_0010413c;
                }
              }
              else if (0x7e < bVar2) goto LAB_00104503;
              pbVar9 = pbVar9 + 1;
            } while (pbVar9 != local_58 + a->length);
            iVar7 = BIO_write(param_1,&_LC14,1);
            if ((iVar7 < 1) || (iVar7 = BIO_write(param_1,local_58,a->length), iVar7 < 1))
            goto LAB_00104612;
          }
          goto LAB_001042a8;
        }
        local_58 = pbVar9;
        a_01 = d2i_ASN1_INTEGER((ASN1_INTEGER **)0x0,&local_58,local_50 + lVar10);
        if (a_01 == (ASN1_INTEGER *)0x0) {
          iVar7 = BIO_puts(param_1,":BAD INTEGER");
          if (0 < iVar7) {
            ASN1_INTEGER_free((ASN1_INTEGER *)0x0);
            goto LAB_00103dec;
          }
        }
        else {
          iVar7 = BIO_write(param_1,&_LC14,1);
          if ((0 < iVar7) &&
             ((a_01->type != 0x102 || (iVar7 = BIO_write(param_1,&_LC20,1), 0 < iVar7)))) {
            iVar7 = a_01->length;
            lVar12 = 0;
            if (0 < iVar7) {
              do {
                iVar7 = BIO_printf(param_1,"%02X",(ulong)a_01->data[lVar12]);
                if (iVar7 < 1) goto LAB_00104358;
                iVar7 = a_01->length;
                lVar12 = lVar12 + 1;
              } while ((int)lVar12 < iVar7);
            }
            if ((iVar7 != 0) || (iVar7 = BIO_write(param_1,&_LC21,2), 0 < iVar7)) {
              ASN1_INTEGER_free(a_01);
              goto LAB_00104120;
            }
            iVar6 = 0;
            a_00 = (ASN1_ENUMERATED *)0x0;
            a = (ASN1_OCTET_STRING *)0x0;
            goto LAB_00103e52;
          }
        }
LAB_00104358:
        a_00 = (ASN1_ENUMERATED *)0x0;
        a = (ASN1_OCTET_STRING *)0x0;
      }
      else {
        if (0x14 < local_68 - 10U) {
LAB_00104170:
          if ((local_50 < 1) || (param_5 == 0)) goto LAB_00104120;
          iVar7 = BIO_write(param_1,&_LC12,1);
          if (0 < iVar7) {
            if ((param_5 == -1) || (iVar7 = param_5, local_50 < param_5)) {
              iVar7 = (int)local_50;
            }
            iVar7 = BIO_dump_indent(param_1,(char *)local_60,iVar7,6);
            if (iVar7 < 1) goto LAB_00103e46;
            goto LAB_0010413c;
          }
          goto LAB_00103e46;
        }
        uVar11 = 1L << ((byte)local_68 & 0x3f);
        uVar13 = (ulong)((uint)uVar11 & 0x5dc1000);
        if ((uVar11 & 0x5dc1000) != 0) {
          iVar7 = BIO_write(param_1,&_LC14,1);
          if (0 < iVar7) {
            if (0 < local_50) {
              iVar7 = BIO_write(param_1,local_60,(int)local_50);
              if (iVar7 != (int)local_50) goto LAB_00103e46;
            }
            goto LAB_00104120;
          }
          goto LAB_00103e46;
        }
        if (local_68 == 0x1e) goto LAB_00104120;
        if (local_68 != 10) goto LAB_00104170;
        local_58 = pbVar9;
        a_00 = d2i_ASN1_ENUMERATED((ASN1_ENUMERATED **)0x0,&local_58,local_50 + lVar10);
        if (a_00 == (ASN1_ENUMERATED *)0x0) {
          iVar7 = BIO_puts(param_1,":BAD ENUMERATED");
          if (0 < iVar7) {
            ASN1_ENUMERATED_free((ASN1_ENUMERATED *)0x0);
            goto LAB_00103dec;
          }
        }
        else {
          iVar7 = BIO_write(param_1,&_LC14,1);
          if ((0 < iVar7) &&
             ((a_00->type != 0x10a || (iVar7 = BIO_write(param_1,&_LC20,1), 0 < iVar7)))) {
            iVar7 = a_00->length;
            if (0 < iVar7) {
              do {
                iVar7 = BIO_printf(param_1,"%02X",(ulong)a_00->data[uVar13]);
                if (iVar7 < 1) {
                  a_01 = (ASN1_INTEGER *)0x0;
                  a = (ASN1_OCTET_STRING *)0x0;
                  goto LAB_00103e52;
                }
                iVar7 = a_00->length;
                uVar13 = uVar13 + 1;
              } while ((int)uVar13 < iVar7);
            }
            if ((iVar7 != 0) || (iVar7 = BIO_write(param_1,&_LC21,2), 0 < iVar7)) {
              ASN1_ENUMERATED_free(a_00);
              goto LAB_00104120;
            }
            iVar6 = 0;
            a_01 = (ASN1_INTEGER *)0x0;
            a = (ASN1_OCTET_STRING *)0x0;
            goto LAB_00103e52;
          }
        }
        a_01 = (ASN1_INTEGER *)0x0;
        a = (ASN1_OCTET_STRING *)0x0;
      }
      goto LAB_00103e52;
    }
    local_58 = pbVar9;
    pAVar8 = d2i_ASN1_OBJECT(&local_48,&local_58,local_50 + lVar10);
    if (pAVar8 == (ASN1_OBJECT *)0x0) {
      iVar7 = BIO_puts(param_1,":BAD OBJECT");
      a = (ASN1_OCTET_STRING *)0x0;
      if (0 < iVar7) {
LAB_00103dec:
        iVar7 = BIO_puts(param_1,":[");
        if (0 < iVar7) {
          lVar12 = 0;
          if (0 < local_50) {
            do {
              iVar7 = BIO_printf(param_1,"%02X",(ulong)pbVar9[lVar12 + lVar10]);
              if (iVar7 < 1) goto LAB_00103e46;
              lVar12 = lVar12 + 1;
            } while (lVar12 < local_50);
          }
          iVar7 = BIO_puts(param_1,"]");
          if (0 < iVar7) goto LAB_00104120;
        }
        goto LAB_00103e46;
      }
LAB_00104612:
      a_00 = (ASN1_ENUMERATED *)0x0;
      a_01 = (ASN1_INTEGER *)0x0;
      goto LAB_00103e52;
    }
    iVar7 = BIO_write(param_1,&_LC14,1);
    if (0 < iVar7) {
      i2a_ASN1_OBJECT(param_1,local_48);
      goto LAB_00104120;
    }
    goto LAB_00103e46;
  }
  a_00 = (ASN1_ENUMERATED *)0x0;
  a_01 = (ASN1_INTEGER *)0x0;
  a = (ASN1_OCTET_STRING *)0x0;
  iVar6 = 1;
  goto LAB_00103e52;
LAB_001040e5:
  a_00 = (ASN1_ENUMERATED *)0x0;
  a_01 = (ASN1_INTEGER *)0x0;
  a = (ASN1_OCTET_STRING *)0x0;
  goto LAB_00103e52;
  while (lVar12 = lVar12 + 1, (int)lVar12 < a->length) {
LAB_00104739:
    iVar7 = BIO_printf(param_1,"%02X",(ulong)local_58[lVar12]);
    if (iVar7 < 1) {
      iVar6 = 0;
      a_00 = (ASN1_ENUMERATED *)0x0;
      a_01 = (ASN1_INTEGER *)0x0;
      goto LAB_00103e52;
    }
  }
LAB_001042a8:
  ASN1_OCTET_STRING_free(a);
LAB_00104120:
  iVar7 = BIO_write(param_1,&_LC12,1);
  if (0 < iVar7) {
LAB_0010413c:
    local_60 = local_60 + local_50;
    if (local_68 == 0 && local_64 == 0) {
      a_00 = (ASN1_ENUMERATED *)0x0;
      a_01 = (ASN1_INTEGER *)0x0;
      a = (ASN1_OCTET_STRING *)0x0;
      iVar6 = 2;
      goto LAB_00103e52;
    }
LAB_00103f8b:
    param_3 = param_3 - local_50;
    if (param_3 < 1) goto LAB_001044b0;
    goto LAB_00103d00;
  }
LAB_00103e46:
  a_00 = (ASN1_ENUMERATED *)0x0;
  a_01 = (ASN1_INTEGER *)0x0;
  a = (ASN1_OCTET_STRING *)0x0;
  goto LAB_00103e52;
LAB_001044b0:
  a_00 = (ASN1_ENUMERATED *)0x0;
  a_01 = (ASN1_INTEGER *)0x0;
  a = (ASN1_OCTET_STRING *)0x0;
  iVar6 = 1;
LAB_00103e52:
  ASN1_OBJECT_free(local_48);
  ASN1_OCTET_STRING_free(a);
  ASN1_INTEGER_free(a_01);
  ASN1_ENUMERATED_free(a_00);
  *param_2 = (long)local_60;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int ASN1_parse(BIO *bp,uchar *pp,long len,int indent)

{
  int iVar1;
  uchar *local_10 [2];
  
  local_10[0] = pp;
  iVar1 = asn1_parse2_constprop_0(bp,local_10,len,indent,0);
  return iVar1;
}



int ASN1_parse_dump(BIO *bp,uchar *pp,long len,int indent,int dump)

{
  int iVar1;
  uchar *local_10 [2];
  
  local_10[0] = pp;
  iVar1 = asn1_parse2_constprop_0(bp,local_10);
  return iVar1;
}


