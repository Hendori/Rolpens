
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



uint asn1_parse2(BIO *param_1,long *param_2,long param_3,int param_4,uint param_5,int param_6,
                int param_7)

{
  byte *pbVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  long lVar11;
  BIO_METHOD *type;
  BIO *bp;
  char *buf;
  ASN1_OBJECT *pAVar12;
  ASN1_INTEGER *a;
  uint uVar13;
  char *format;
  byte *pbVar14;
  ASN1_ENUMERATED *a_00;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  byte *pbVar18;
  long in_FS_OFFSET;
  BIO *local_160;
  uint local_148;
  uint local_130;
  long local_110;
  int local_f0;
  uint local_ec;
  byte *local_e8;
  byte *local_e0;
  byte *local_d8;
  ASN1_OBJECT *local_d0;
  char local_c8 [136];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_d0 = (ASN1_OBJECT *)0x0;
  if (param_5 == 0x81) {
    BIO_puts(param_1,"BAD RECURSION DEPTH\n");
    local_148 = 0;
    goto LAB_00100471;
  }
  local_e8 = (byte *)*param_2;
  pbVar1 = local_e8 + param_3;
  if (0 < param_3) {
    uVar13 = 0;
    if (param_6 != 0) {
      uVar13 = param_5;
    }
LAB_001000f1:
    pbVar14 = local_e8;
    uVar7 = ASN1_get_object(&local_e8,(long *)&local_d8,&local_f0,(int *)&local_ec,param_3);
    uVar4 = local_ec;
    iVar9 = local_f0;
    if ((uVar7 & 0x80) != 0) {
      a_00 = (ASN1_ENUMERATED *)0x0;
      BIO_puts(param_1,"Error in encoding\n");
      local_148 = 0;
      a = (ASN1_INTEGER *)0x0;
      local_160 = (BIO *)0x0;
      goto LAB_0010043c;
    }
    buf = local_c8;
    lVar17 = (long)((int)local_e8 - (int)pbVar14);
    param_3 = param_3 - lVar17;
    pcVar10 = "cons: ";
    if ((uVar7 & 0x20) == 0) {
      pcVar10 = "prim: ";
    }
    if (uVar7 == 0x21) {
      format = "%5ld:d=%-2d hl=%ld l=inf  %s";
    }
    else {
      format = "%5ld:d=%-2d hl=%ld l=%4ld %s";
      pcVar10 = (char *)local_d8;
    }
    iVar8 = BIO_snprintf(buf,0x80,format,pbVar14 + ((long)param_4 - *param_2),(ulong)param_5,lVar17,
                         pcVar10);
    local_148 = 0;
    if (iVar8 < 1) {
      a_00 = (ASN1_ENUMERATED *)0x0;
      BIO_free((BIO *)0x0);
      a = (ASN1_INTEGER *)0x0;
      local_160 = (BIO *)0x0;
      goto LAB_0010043c;
    }
    if (param_1 == (BIO *)0x0) {
      local_160 = (BIO *)0x0;
      bp = (BIO *)0x0;
      bVar3 = false;
      local_110 = -1;
LAB_0010025d:
      if ((~uVar4 & 0xc0) == 0) {
        BIO_snprintf(buf,0x80,"priv [ %d ] ");
      }
      else if ((uVar4 & 0x80) == 0) {
        if ((uVar4 & 0x40) == 0) {
          if (iVar9 < 0x1f) {
            buf = ASN1_tag2str(iVar9);
          }
          else {
            BIO_snprintf(buf,0x80,"<ASN1 %d>");
          }
        }
        else {
          BIO_snprintf(buf,0x80,"appl [ %d ]");
        }
      }
      else {
        BIO_snprintf(buf,0x80,"cont [ %d ]");
      }
      iVar9 = BIO_printf(bp,"%-18s",buf);
      local_130 = (uint)(0 < iVar9);
    }
    else {
      lVar11 = BIO_ctrl(param_1,0x4f,0,buf);
      if (lVar11 < 1) {
        type = (BIO_METHOD *)BIO_f_prefix();
        local_160 = BIO_new(type);
        if (local_160 == (BIO *)0x0) {
          a_00 = (ASN1_ENUMERATED *)0x0;
          BIO_free((BIO *)0x0);
          a = (ASN1_INTEGER *)0x0;
          local_160 = (BIO *)0x0;
          goto LAB_0010043c;
        }
        bp = BIO_push(local_160,param_1);
        if (bp == (BIO *)0x0) {
          a_00 = (ASN1_ENUMERATED *)0x0;
          BIO_free(local_160);
          local_160 = (BIO *)0x0;
          a = (ASN1_INTEGER *)0x0;
          goto LAB_0010043c;
        }
        bVar3 = true;
      }
      else {
        bVar3 = false;
        local_160 = (BIO *)0x0;
        bp = param_1;
      }
      local_110 = BIO_ctrl(bp,0x51,0,(void *)0x0);
      lVar11 = BIO_ctrl(bp,0x4f,0,buf);
      if ((0 < lVar11) && (lVar11 = BIO_ctrl(bp,0x50,(long)(int)uVar13,(void *)0x0), 0 < lVar11))
      goto LAB_0010025d;
      local_130 = 0;
    }
    if (-1 < local_110) {
      BIO_ctrl(bp,0x50,local_110,(void *)0x0);
    }
    if (bVar3) {
      BIO_pop(bp);
    }
    BIO_free(local_160);
    pbVar6 = local_d8;
    pbVar5 = local_e8;
    if (local_130 == 0) {
LAB_00100ef0:
      local_148 = 0;
      a_00 = (ASN1_ENUMERATED *)0x0;
      a = (ASN1_INTEGER *)0x0;
      local_160 = (BIO *)0x0;
      goto LAB_0010043c;
    }
    if ((uVar7 & 0x20) != 0) {
      iVar9 = BIO_write(param_1,&_LC12,1);
      if (iVar9 < 1) goto LAB_001003e8;
      if ((long)local_d8 <= param_3) {
        if ((local_d8 == (byte *)0x0) && (uVar7 == 0x21)) {
          do {
            local_148 = asn1_parse2(param_1,&local_e8,(long)pbVar1 - (long)local_e8,
                                    ((int)local_e8 - (int)*param_2) + param_4,param_5 + 1,param_6,
                                    param_7);
            if (local_148 == 0) goto LAB_00100676;
          } while ((local_148 != 2) && (local_e8 < pbVar1));
          local_d8 = local_e8 + -(long)pbVar5;
        }
        else {
          pbVar14 = local_e8;
          pbVar18 = local_d8;
          while (local_e8 = pbVar14, pbVar14 < pbVar5 + (long)pbVar6) {
            local_148 = asn1_parse2(param_1,&local_e8,pbVar18,
                                    ((int)pbVar14 - (int)*param_2) + param_4,param_5 + 1,param_6,
                                    param_7);
            if (local_148 == 0) goto LAB_00100676;
            pbVar18 = pbVar18 + -((long)local_e8 - (long)pbVar14);
            pbVar14 = local_e8;
          }
        }
        goto LAB_001005e4;
      }
      BIO_printf(param_1,"length is greater than %ld\n",param_3);
      a_00 = (ASN1_ENUMERATED *)0x0;
      a = (ASN1_INTEGER *)0x0;
      local_160 = (BIO *)0x0;
      goto LAB_0010043c;
    }
    local_148 = local_ec;
    if (local_ec != 0) {
      local_e8 = local_e8 + (long)local_d8;
      iVar9 = BIO_write(param_1,&_LC12,1);
      if (iVar9 < 1) goto LAB_00100ef0;
      goto LAB_001005e4;
    }
    if (local_f0 != 6) {
      if (local_f0 < 7) {
        if (local_f0 != 2) {
          if (local_f0 != 4) {
            if (local_f0 != 1) goto LAB_001008c0;
            if (local_d8 != (byte *)0x1) {
              iVar9 = BIO_puts(param_1,":BAD BOOLEAN");
              if (iVar9 < 1) goto LAB_001003e8;
              if (0 < (long)local_d8) {
                BIO_printf(param_1,":%u",(ulong)*local_e8);
              }
              goto LAB_00100382;
            }
            BIO_printf(param_1,":%u",(ulong)*local_e8);
            goto LAB_001007a0;
          }
          local_e0 = pbVar14;
          local_160 = (BIO *)d2i_ASN1_OCTET_STRING
                                       ((ASN1_OCTET_STRING **)0x0,&local_e0,
                                        (long)(local_d8 + lVar17));
          if (local_160 == (BIO *)0x0) {
            ASN1_OCTET_STRING_free((ASN1_OCTET_STRING *)0x0);
            goto LAB_001007a0;
          }
          if (0 < ((ASN1_OCTET_STRING *)local_160)->length) {
            local_e0 = ((ASN1_OCTET_STRING *)local_160)->data;
            pbVar14 = local_e0;
            do {
              bVar2 = *pbVar14;
              if ((bVar2 < 0x20) && (bVar2 != 10)) {
                if ((bVar2 & 0xfb) != 9) {
LAB_00100cf3:
                  if (param_7 == 0) {
                    iVar9 = BIO_write(param_1,"[HEX DUMP]:",0xb);
                    if (iVar9 < 1) goto LAB_00100f7a;
                    lVar17 = 0;
                    if (0 < ((ASN1_OCTET_STRING *)local_160)->length) goto LAB_00100f5d;
                    ASN1_OCTET_STRING_free((ASN1_OCTET_STRING *)local_160);
                    goto LAB_001007a0;
                  }
                  iVar9 = BIO_write(param_1,&_LC12,1);
                  if (iVar9 < 1) goto LAB_00100dcf;
                  iVar9 = ((ASN1_OCTET_STRING *)local_160)->length;
                  iVar8 = iVar9;
                  if (param_7 < iVar9) {
                    iVar8 = param_7;
                  }
                  if (param_7 != -1) {
                    iVar9 = iVar8;
                  }
                  iVar9 = BIO_dump_indent(param_1,(char *)local_e0,iVar9,6);
                  if (iVar9 < 1) goto LAB_00100dcf;
                  ASN1_OCTET_STRING_free((ASN1_OCTET_STRING *)local_160);
                  goto LAB_001007bc;
                }
              }
              else if (0x7e < bVar2) goto LAB_00100cf3;
              pbVar14 = pbVar14 + 1;
            } while (local_e0 + ((ASN1_OCTET_STRING *)local_160)->length != pbVar14);
            iVar9 = BIO_write(param_1,&_LC14,1);
            if ((iVar9 < 1) ||
               (iVar9 = BIO_write(param_1,local_e0,((ASN1_OCTET_STRING *)local_160)->length),
               iVar9 < 1)) goto LAB_00100dcf;
          }
          goto LAB_001009e2;
        }
        local_e0 = pbVar14;
        a = d2i_ASN1_INTEGER((ASN1_INTEGER **)0x0,&local_e0,(long)(local_d8 + lVar17));
        if (a == (ASN1_INTEGER *)0x0) {
          iVar9 = BIO_puts(param_1,":BAD INTEGER");
          if (0 < iVar9) {
            ASN1_INTEGER_free((ASN1_INTEGER *)0x0);
            goto LAB_00100382;
          }
        }
        else {
          iVar9 = BIO_write(param_1,&_LC14,1);
          if ((0 < iVar9) &&
             ((a->type != 0x102 || (iVar9 = BIO_write(param_1,&_LC20,1), 0 < iVar9)))) {
            iVar9 = a->length;
            if (0 < iVar9) {
              lVar17 = 0;
              do {
                iVar9 = BIO_printf(param_1,"%02X",(ulong)a->data[lVar17]);
                if (iVar9 < 1) goto LAB_00100a9a;
                iVar9 = a->length;
                lVar17 = lVar17 + 1;
              } while ((int)lVar17 < iVar9);
            }
            if ((iVar9 != 0) || (iVar9 = BIO_write(param_1,&_LC21,2), 0 < iVar9)) {
              ASN1_INTEGER_free(a);
              goto LAB_001007a0;
            }
            a_00 = (ASN1_ENUMERATED *)0x0;
            local_148 = 0;
            local_160 = (BIO *)0x0;
            goto LAB_0010043c;
          }
        }
LAB_00100a9a:
        local_160 = (BIO *)0x0;
        a_00 = (ASN1_ENUMERATED *)0x0;
      }
      else {
        if (0x14 < local_f0 - 10U) {
LAB_001008c0:
          if (((long)local_d8 < 1) || (param_7 == 0)) goto LAB_001007a0;
          iVar9 = BIO_write(param_1,&_LC12,1);
          if (0 < iVar9) {
            if ((param_7 == -1) || (iVar9 = param_7, (long)local_d8 < (long)param_7)) {
              iVar9 = (int)local_d8;
            }
            iVar9 = BIO_dump_indent(param_1,(char *)local_e8,iVar9,6);
            if (iVar9 < 1) goto LAB_001003e8;
            goto LAB_001007bc;
          }
          goto LAB_001003e8;
        }
        uVar15 = 1L << ((byte)local_f0 & 0x3f);
        uVar16 = (ulong)((uint)uVar15 & 0x5dc1000);
        if ((uVar15 & 0x5dc1000) != 0) {
          iVar9 = BIO_write(param_1,&_LC14,1);
          if (0 < iVar9) {
            if (0 < (long)local_d8) {
              iVar9 = BIO_write(param_1,local_e8,(int)local_d8);
              if (iVar9 != (int)local_d8) goto LAB_001003e8;
            }
            goto LAB_001007a0;
          }
          goto LAB_001003e8;
        }
        if (local_f0 == 0x1e) goto LAB_001007a0;
        if (local_f0 != 10) goto LAB_001008c0;
        local_e0 = pbVar14;
        a_00 = d2i_ASN1_ENUMERATED((ASN1_ENUMERATED **)0x0,&local_e0,(long)(local_d8 + lVar17));
        if (a_00 == (ASN1_ENUMERATED *)0x0) {
          iVar9 = BIO_puts(param_1,":BAD ENUMERATED");
          if (0 < iVar9) {
            ASN1_ENUMERATED_free((ASN1_ENUMERATED *)0x0);
            goto LAB_00100382;
          }
        }
        else {
          iVar9 = BIO_write(param_1,&_LC14,1);
          if ((0 < iVar9) &&
             ((a_00->type != 0x10a || (iVar9 = BIO_write(param_1,&_LC20,1), 0 < iVar9)))) {
            iVar9 = a_00->length;
            if (0 < iVar9) {
              do {
                iVar9 = BIO_printf(param_1,"%02X",(ulong)a_00->data[uVar16]);
                if (iVar9 < 1) goto LAB_0010075f;
                iVar9 = a_00->length;
                uVar16 = uVar16 + 1;
              } while ((int)uVar16 < iVar9);
            }
            if ((iVar9 != 0) || (iVar9 = BIO_write(param_1,&_LC21,2), 0 < iVar9)) {
              ASN1_ENUMERATED_free(a_00);
              goto LAB_001007a0;
            }
            local_148 = 0;
            a = (ASN1_INTEGER *)0x0;
            local_160 = (BIO *)0x0;
            goto LAB_0010043c;
          }
        }
LAB_0010075f:
        local_160 = (BIO *)0x0;
        a = (ASN1_INTEGER *)0x0;
      }
      goto LAB_0010043c;
    }
    local_e0 = pbVar14;
    pAVar12 = d2i_ASN1_OBJECT(&local_d0,&local_e0,(long)(local_d8 + lVar17));
    if (pAVar12 == (ASN1_OBJECT *)0x0) {
      iVar9 = BIO_puts(param_1,":BAD OBJECT");
      local_160 = (BIO *)0x0;
      if (0 < iVar9) {
LAB_00100382:
        iVar9 = BIO_puts(param_1,":[");
        if (0 < iVar9) {
          lVar11 = 0;
          if (0 < (long)local_d8) {
            do {
              iVar9 = BIO_printf(param_1,"%02X",(ulong)pbVar14[lVar11 + lVar17]);
              if (iVar9 < 1) goto LAB_001003e8;
              lVar11 = lVar11 + 1;
            } while (lVar11 < (long)local_d8);
          }
          iVar9 = BIO_puts(param_1,"]");
          if (0 < iVar9) goto LAB_001007a0;
        }
        goto LAB_001003e8;
      }
LAB_00100dcf:
      a_00 = (ASN1_ENUMERATED *)0x0;
      a = (ASN1_INTEGER *)0x0;
      goto LAB_0010043c;
    }
    iVar9 = BIO_write(param_1,&_LC14,1);
    if (0 < iVar9) {
      i2a_ASN1_OBJECT(param_1,local_d0);
      goto LAB_001007a0;
    }
    goto LAB_001003e8;
  }
  local_160 = (BIO *)0x0;
  a_00 = (ASN1_ENUMERATED *)0x0;
  a = (ASN1_INTEGER *)0x0;
  local_148 = 1;
  goto LAB_0010043c;
LAB_00100676:
  a_00 = (ASN1_ENUMERATED *)0x0;
  a = (ASN1_INTEGER *)0x0;
  local_160 = (BIO *)0x0;
  goto LAB_0010043c;
  while (lVar17 = lVar17 + 1, (int)lVar17 < ((ASN1_OCTET_STRING *)local_160)->length) {
LAB_00100f5d:
    iVar9 = BIO_printf(param_1,"%02X",(ulong)local_e0[lVar17]);
    if (iVar9 < 1) goto LAB_00100f7a;
  }
LAB_001009e2:
  ASN1_OCTET_STRING_free((ASN1_OCTET_STRING *)local_160);
LAB_001007a0:
  iVar9 = BIO_write(param_1,&_LC12,1);
  if (0 < iVar9) {
LAB_001007bc:
    local_e8 = local_e8 + (long)local_d8;
    if (local_f0 == 0 && local_ec == 0) {
      local_160 = (BIO *)0x0;
      a_00 = (ASN1_ENUMERATED *)0x0;
      a = (ASN1_INTEGER *)0x0;
      local_148 = 2;
      goto LAB_0010043c;
    }
LAB_001005e4:
    param_3 = param_3 - (long)local_d8;
    if (param_3 < 1) goto LAB_00100c88;
    goto LAB_001000f1;
  }
LAB_001003e8:
  local_160 = (BIO *)0x0;
  a_00 = (ASN1_ENUMERATED *)0x0;
  a = (ASN1_INTEGER *)0x0;
  goto LAB_0010043c;
LAB_00100f7a:
  local_148 = 0;
  a_00 = (ASN1_ENUMERATED *)0x0;
  a = (ASN1_INTEGER *)0x0;
  goto LAB_0010043c;
LAB_00100c88:
  local_148 = local_130;
  a_00 = (ASN1_ENUMERATED *)0x0;
  a = (ASN1_INTEGER *)0x0;
  local_160 = (BIO *)0x0;
LAB_0010043c:
  ASN1_OBJECT_free(local_d0);
  ASN1_OCTET_STRING_free((ASN1_OCTET_STRING *)local_160);
  ASN1_INTEGER_free(a);
  ASN1_ENUMERATED_free(a_00);
  *param_2 = (long)local_e8;
LAB_00100471:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_148;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int ASN1_parse(BIO *bp,uchar *pp,long len,int indent)

{
  int iVar1;
  uchar *local_10 [2];
  
  local_10[0] = pp;
  iVar1 = asn1_parse2(bp,local_10,len,0,0,indent,0);
  return iVar1;
}



int ASN1_parse_dump(BIO *bp,uchar *pp,long len,int indent,int dump)

{
  int iVar1;
  undefined4 in_register_00000084;
  uchar *local_10 [2];
  
  local_10[0] = pp;
  iVar1 = asn1_parse2(bp,local_10,len,0,0,indent,CONCAT44(in_register_00000084,dump));
  return iVar1;
}


