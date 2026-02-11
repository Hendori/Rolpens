
bool send_bio_chars(BIO *param_1,void *param_2,int param_3)

{
  int iVar1;
  
  if (param_1 != (BIO *)0x0) {
    iVar1 = BIO_write(param_1,param_2,param_3);
    return iVar1 == param_3;
  }
  return true;
}



undefined8
do_esc_char(ulong param_1,ushort param_2,undefined1 *param_3,code *param_4,undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  ushort uVar3;
  long in_FS_OFFSET;
  char local_39;
  char local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 >> 0x20 == 0) {
    if (param_1 < 0x10000) {
      if (param_1 < 0x100) {
        local_39 = (char)param_1;
        if (local_39 < '\0') {
          if ((param_2 & 4) != 0) {
LAB_001001b1:
            BIO_snprintf(local_38,0xb,"\\%02X",param_1 & 0xffffffff);
            iVar1 = (*param_4)(param_5,local_38,3);
            if (iVar1 != 0) {
              uVar2 = 3;
              goto LAB_00100108;
            }
            goto LAB_00100228;
          }
        }
        else {
          uVar3 = *(ushort *)(char_type + (long)(int)param_1 * 2) & param_2;
          if ((uVar3 & 0x61) == 0) {
            if ((uVar3 & 0x406) != 0) goto LAB_001001b1;
            if ((local_39 == '\\') && ((param_2 & 0x40f) != 0)) {
              iVar1 = (*param_4)(param_5,&_LC4,2);
              goto joined_r0x0010021f;
            }
          }
          else {
            if ((uVar3 & 8) == 0) {
              iVar1 = (*param_4)(param_5,&_LC2,1);
              if (iVar1 != 0) {
                iVar1 = (*param_4)(param_5,&local_39,1);
joined_r0x0010021f:
                if (iVar1 != 0) {
                  uVar2 = 2;
                  goto LAB_00100108;
                }
              }
              goto LAB_00100228;
            }
            if (param_3 != (undefined1 *)0x0) {
              *param_3 = 1;
            }
          }
        }
        iVar1 = (*param_4)(param_5,&local_39,1);
        if (iVar1 != 0) {
          uVar2 = 1;
          goto LAB_00100108;
        }
      }
      else {
        BIO_snprintf(local_38,0x13,"\\U%04lX",param_1);
        iVar1 = (*param_4)(param_5,local_38,6);
        if (iVar1 != 0) {
          uVar2 = 6;
          goto LAB_00100108;
        }
      }
    }
    else {
      BIO_snprintf(local_38,0x13,"\\W%08lX",param_1);
      iVar1 = (*param_4)(param_5,local_38,10);
      if (iVar1 != 0) {
        uVar2 = 10;
        goto LAB_00100108;
      }
    }
  }
LAB_00100228:
  uVar2 = 0xffffffff;
LAB_00100108:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



int do_buf(uint *param_1,uint param_2,uint param_3,uint param_4,undefined8 param_5,
          undefined8 param_6,undefined8 param_7)

{
  uint uVar1;
  int iVar2;
  uchar *puVar3;
  uint uVar4;
  uint *puVar5;
  ushort uVar6;
  int iVar7;
  uint *str;
  uchar *str_00;
  long in_FS_OFFSET;
  uint local_64;
  ulong local_50;
  uchar local_46 [6];
  long local_40;
  
  uVar4 = param_3 & 7;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar5 = (uint *)((long)(int)param_2 + (long)param_1);
  if (uVar4 == 2) {
    if ((param_2 & 1) == 0) goto LAB_00100299;
    ERR_new();
    ERR_set_debug("crypto/asn1/a_strex.c",0xa2,"do_buf");
    ERR_set_error(0xd,0x81,0);
  }
  else {
    if ((uVar4 != 4) || ((param_2 & 3) == 0)) {
LAB_00100299:
      iVar7 = 0;
      if (param_1 != puVar5) {
        str = param_1;
        local_64 = param_2;
LAB_001002d1:
        uVar6 = 0;
        if (param_1 == str) {
          uVar6 = (ushort)((param_4 & 1) << 5);
        }
        if (uVar4 == 2) {
          uVar1 = *str;
          str = (uint *)((long)str + 2);
          local_50 = (ulong)(ushort)((ushort)uVar1 << 8 | (ushort)uVar1 >> 8);
        }
        else {
          if (2 < uVar4) {
            if (uVar4 != 4) goto LAB_00100418;
            uVar1 = *str;
            str = str + 1;
            local_50 = (ulong)(uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
                              uVar1 << 0x18);
            if (str != puVar5) goto LAB_00100314;
LAB_00100399:
            if ((param_4 & 1) != 0) {
              uVar6 = 0x40;
            }
            if ((param_3 & 8) == 0) goto LAB_0010031f;
LAB_001003b1:
            str_00 = local_46;
            iVar2 = UTF8_putc(str_00,6,local_50);
            if (0 < iVar2) {
              puVar3 = str_00 + iVar2;
              do {
                iVar2 = do_esc_char(*str_00,uVar6 | (ushort)param_4,param_5,param_6,param_7);
                if (iVar2 < 0) goto LAB_00100418;
                str_00 = str_00 + 1;
                iVar7 = iVar7 + iVar2;
              } while (str_00 != puVar3);
            }
            goto LAB_00100340;
          }
          if (uVar4 == 0) {
            iVar2 = UTF8_getc((uchar *)str,local_64,&local_50);
            if (-1 < iVar2) {
              local_64 = local_64 - iVar2;
              str = (uint *)((long)str + (long)iVar2);
              goto LAB_00100306;
            }
            goto LAB_00100418;
          }
          local_50 = (ulong)(byte)*str;
          str = (uint *)((long)str + 1);
        }
LAB_00100306:
        if (str == puVar5) goto LAB_00100399;
LAB_00100314:
        if ((param_3 & 8) != 0) goto LAB_001003b1;
LAB_0010031f:
        iVar2 = do_esc_char(local_50,uVar6 | (ushort)param_4,param_5,param_6,param_7);
        if (iVar2 < 0) goto LAB_00100418;
        iVar7 = iVar7 + iVar2;
LAB_00100340:
        if (str == puVar5) goto LAB_0010034a;
        goto LAB_001002d1;
      }
      goto LAB_0010034a;
    }
    ERR_new();
    ERR_set_debug("crypto/asn1/a_strex.c",0x9c,"do_buf");
    ERR_set_error(0xd,0x85,0);
  }
LAB_00100418:
  iVar7 = -1;
LAB_0010034a:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar7;
}



bool send_fp_chars(FILE *param_1,void *param_2,uint param_3)

{
  size_t sVar1;
  
  if (param_1 != (FILE *)0x0) {
    sVar1 = fwrite(param_2,1,(long)(int)param_3,param_1);
    return param_3 == sVar1;
  }
  return true;
}



int do_print_ex(code *param_1,long param_2,uint param_3,_union_257 param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  char *__s;
  size_t sVar4;
  int iVar5;
  uchar *puVar6;
  uchar *puVar7;
  long in_FS_OFFSET;
  char local_61;
  uchar *local_60;
  ASN1_TYPE local_58;
  undefined1 local_42 [2];
  long local_40;
  
  iVar3 = (param_4.asn1_string)->type;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_61 = '\0';
  if ((param_3 & 0x40) != 0) {
    __s = ASN1_tag2str(iVar3);
    sVar4 = strlen(__s);
    iVar5 = (*param_1)(param_2,__s,sVar4 & 0xffffffff);
    if ((iVar5 != 0) && (iVar5 = (*param_1)(param_2,&_LC6,1), iVar5 != 0)) {
      iVar5 = (int)sVar4 + 1;
      goto LAB_0010058f;
    }
    goto LAB_0010076e;
  }
  iVar5 = 0;
LAB_0010058f:
  if ((param_3 & 0x80) == 0) {
    if ((param_3 & 0x20) == 0) {
      if (0x1d < iVar3 - 1U) {
LAB_001006f0:
        if ((param_3 & 0x100) != 0) goto LAB_001006fd;
        goto LAB_001005a3;
      }
      bVar1 = tag2nbyte[iVar3];
      if (bVar1 == 0xff) goto LAB_001006f0;
      iVar3 = (int)(char)bVar1;
      if ((param_3 & 0x10) != 0) {
        iVar3 = 1;
        if (bVar1 != 0) {
          iVar3 = (int)(char)(bVar1 | 8);
        }
      }
    }
    else {
LAB_001005a3:
      iVar3 = (-(uint)((param_3 & 0x10) == 0) & 0xfffffff8) + 9;
    }
    param_3 = param_3 & 0x40f;
    iVar2 = do_buf((param_4.asn1_string)->data,(param_4.asn1_string)->length,iVar3,param_3,&local_61
                   ,param_1,0);
    if ((-1 < iVar2) && (iVar2 <= 0x7ffffffd - iVar5)) {
      iVar5 = iVar5 + iVar2;
      if (local_61 == '\0') {
        if ((param_2 == 0) ||
           (iVar3 = do_buf((param_4.asn1_string)->data,(param_4.asn1_string)->length,iVar3,param_3,0
                           ,param_1,param_2), -1 < iVar3)) goto LAB_0010067d;
      }
      else {
        iVar5 = iVar5 + 2;
        if ((param_2 == 0) ||
           (((iVar2 = (*param_1)(param_2,&_LC8,1), iVar2 != 0 &&
             (iVar3 = do_buf((param_4.asn1_string)->data,(param_4.asn1_string)->length,iVar3,param_3
                             ,0,param_1,param_2), -1 < iVar3)) &&
            (iVar3 = (*param_1)(param_2,&_LC8,1,0x100635), iVar3 != 0)))) goto LAB_0010067d;
      }
    }
  }
  else {
LAB_001006fd:
    iVar3 = (*param_1)(param_2,&_LC7,1);
    if (iVar3 != 0) {
      if ((param_3 & 0x200) == 0) {
        iVar3 = (param_4.asn1_string)->length;
        puVar6 = (param_4.asn1_string)->data;
        if (param_2 == 0) {
LAB_00100780:
          iVar3 = iVar3 * 2;
          if (iVar3 < 0) goto LAB_0010076e;
          iVar3 = iVar3 + 1;
        }
        else {
          puVar7 = puVar6 + iVar3;
          if (puVar6 != puVar7) {
            do {
              ossl_to_hex(local_42,*puVar6);
              iVar2 = (*param_1)(param_2,local_42,2);
              if (iVar2 == 0) goto LAB_0010076e;
              puVar6 = puVar6 + 1;
            } while (puVar7 != puVar6);
            goto LAB_00100780;
          }
          iVar3 = 1;
        }
LAB_0010078d:
        if (iVar3 <= 0x7fffffff - iVar5) {
          iVar5 = iVar3 + iVar5;
          goto LAB_0010067d;
        }
      }
      else {
        local_58.type = (param_4.asn1_string)->type;
        local_58.value = param_4;
        iVar3 = i2d_ASN1_TYPE(&local_58,(uchar **)0x0);
        if (0 < iVar3) {
          puVar6 = (uchar *)CRYPTO_malloc(iVar3,"crypto/asn1/a_strex.c",0x11d);
          if (puVar6 != (uchar *)0x0) {
            local_60 = puVar6;
            i2d_ASN1_TYPE(&local_58,&local_60);
            if (param_2 != 0) {
              puVar7 = puVar6;
              do {
                ossl_to_hex(local_42,*puVar7);
                iVar2 = (*param_1)(param_2,local_42,2);
                if (iVar2 == 0) {
                  CRYPTO_free(puVar6);
                  goto LAB_0010076e;
                }
                puVar7 = puVar7 + 1;
              } while (puVar6 + iVar3 != puVar7);
            }
            CRYPTO_free(puVar6);
            if (-1 < iVar3 * 2) {
              iVar3 = iVar3 * 2 + 1;
              goto LAB_0010078d;
            }
          }
        }
      }
    }
  }
LAB_0010076e:
  iVar5 = -1;
LAB_0010067d:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar5;
}



int do_name_ex(code *param_1,undefined8 param_2,X509_NAME *param_3,int param_4,ulong param_5)

{
  int loc;
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  X509_NAME_ENTRY *ne;
  ASN1_OBJECT *o;
  ASN1_STRING *pAVar8;
  size_t sVar9;
  char *buf;
  ulong uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  long in_FS_OFFSET;
  int local_104;
  int local_f0;
  undefined *local_b0;
  undefined *local_a8;
  int local_a0;
  int local_9c;
  char local_98 [88];
  long local_40;
  
  iVar13 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar12 = 0;
  if (-1 < param_4) {
    iVar12 = param_4;
  }
  if (0 < param_4) {
    do {
      iVar11 = (*param_1)(param_2,&_LC17,1);
      if (iVar11 == 0) goto LAB_00100990;
      iVar13 = iVar13 + 1;
    } while (iVar13 < iVar12);
  }
  uVar1 = (uint)param_5 & 0xf0000;
  if (uVar1 == 0x30000) {
    local_9c = 3;
    iVar13 = 0;
    local_a8 = &_LC9;
    local_a0 = 2;
    local_b0 = &_LC14;
  }
  else if (uVar1 < 0x30001) {
    if (uVar1 == 0x10000) {
      local_9c = 1;
      local_a8 = &_LC11;
      local_a0 = 1;
      local_b0 = &_LC12;
      iVar13 = 0;
    }
    else {
      if (uVar1 != 0x20000) goto LAB_00100990;
      local_9c = 3;
      local_a8 = &_LC9;
      local_a0 = 2;
      local_b0 = &_LC13;
      iVar13 = 0;
    }
  }
  else {
    if (uVar1 != 0x40000) {
LAB_00100990:
      iVar12 = -1;
      goto LAB_00100996;
    }
    local_9c = 3;
    local_a8 = &_LC9;
    local_a0 = 1;
    local_b0 = &_LC10;
    iVar13 = iVar12;
  }
  iVar11 = (-(uint)((param_5 & 0x800000) == 0) & 0xfffffffe) + 3;
  puVar7 = &_LC15;
  if ((param_5 & 0x800000) == 0) {
    puVar7 = &_LC16;
  }
  uVar1 = (uint)param_5 & 0x600000;
  iVar2 = X509_NAME_entry_count(param_3);
  if (0 < iVar2) {
    iVar2 = iVar2 + -1;
    local_104 = -1;
    loc = iVar2;
    if ((param_5 & 0x100000) == 0) goto LAB_00100c94;
LAB_00100ae0:
    ne = X509_NAME_get_entry(param_3,loc);
    do {
      if (local_104 != -1) {
        iVar3 = X509_NAME_ENTRY_set(ne);
        if (iVar3 == local_104) {
          iVar3 = (*param_1)(param_2,local_a8,local_9c);
          if (iVar3 == 0) goto LAB_00100990;
          iVar12 = iVar12 + local_9c;
        }
        else {
          iVar3 = (*param_1)(param_2,local_b0,local_a0);
          if (iVar3 == 0) goto LAB_00100990;
          iVar3 = 0;
          if (iVar13 != 0) {
            do {
              iVar4 = (*param_1)(param_2,&_LC17,1);
              if (iVar4 == 0) goto LAB_00100990;
              iVar3 = iVar3 + 1;
            } while (iVar13 != iVar3);
          }
          iVar12 = iVar12 + local_a0 + iVar13;
        }
      }
      local_104 = X509_NAME_ENTRY_set(ne);
      o = X509_NAME_ENTRY_get_object(ne);
      pAVar8 = X509_NAME_ENTRY_get_data(ne);
      iVar3 = OBJ_obj2nid(o);
      if (uVar1 != 0x600000) {
        if ((uVar1 == 0x400000) || (iVar3 == 0)) {
          buf = local_98;
          OBJ_obj2txt(buf,0x50,o,1);
          iVar4 = 0;
LAB_00100cff:
          sVar9 = strlen(buf);
          local_f0 = (int)sVar9;
          iVar5 = (*param_1)(param_2,buf,sVar9 & 0xffffffff);
          if (iVar5 == 0) goto LAB_00100990;
          if ((local_f0 < iVar4) && ((param_5 & 0x2000000) != 0)) {
            iVar5 = 0;
            do {
              iVar6 = (*param_1)(param_2,&_LC17,1);
              if (iVar6 == 0) goto LAB_00100990;
              iVar5 = iVar5 + 1;
            } while (iVar4 - local_f0 != iVar5);
            iVar12 = iVar12 + (iVar4 - local_f0);
          }
        }
        else {
          if ((param_5 & 0x600000) == 0) {
            buf = OBJ_nid2sn(iVar3);
            iVar4 = 10;
            goto LAB_00100cff;
          }
          if (uVar1 == 0x200000) {
            buf = OBJ_nid2ln(iVar3);
            iVar4 = 0x19;
            goto LAB_00100cff;
          }
          iVar4 = (*param_1)(param_2,&_LC18,0);
          if (iVar4 == 0) goto LAB_00100990;
          local_f0 = 0;
        }
        iVar4 = (*param_1)(param_2,puVar7,iVar11);
        if (iVar4 == 0) goto LAB_00100990;
        iVar12 = iVar12 + local_f0 + iVar11;
      }
      uVar10 = param_5;
      if (iVar3 == 0) {
        uVar10 = (uint)(param_5 >> 0x11) & 0x80 | param_5;
      }
      iVar3 = do_print_ex(param_1,param_2,uVar10,pAVar8);
      if (iVar3 < 0) goto LAB_00100990;
      loc = loc + -1;
      iVar12 = iVar12 + iVar3;
      if (loc == -1) break;
      if ((param_5 & 0x100000) != 0) goto LAB_00100ae0;
LAB_00100c94:
      ne = X509_NAME_get_entry(param_3,iVar2 - loc);
    } while( true );
  }
LAB_00100996:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar12;
}



int X509_NAME_print_ex(BIO *out,X509_NAME *nm,int indent,ulong flags)

{
  int iVar1;
  
  if (flags != 0) {
    iVar1 = do_name_ex(0x100000,out,nm,indent,flags);
    return iVar1;
  }
  iVar1 = X509_NAME_print(out,nm,indent);
  return iVar1;
}



int X509_NAME_print_ex_fp(FILE *fp,X509_NAME *nm,int indent,ulong flags)

{
  int iVar1;
  BIO *bp;
  
  if (flags == 0) {
    bp = BIO_new_fp(fp,0);
    if (bp == (BIO *)0x0) {
      iVar1 = -1;
    }
    else {
      iVar1 = X509_NAME_print(bp,nm,indent);
      BIO_free(bp);
    }
    return iVar1;
  }
  iVar1 = do_name_ex(send_fp_chars,fp,nm,indent,flags);
  return iVar1;
}



int ASN1_STRING_print_ex(BIO *out,ASN1_STRING *str,ulong flags)

{
  int iVar1;
  
  iVar1 = do_print_ex(0x100000,out,flags,str);
  return iVar1;
}



int ASN1_STRING_print_ex_fp(FILE *fp,ASN1_STRING *str,ulong flags)

{
  int iVar1;
  
  iVar1 = do_print_ex(send_fp_chars,fp,flags,str);
  return iVar1;
}



int ASN1_STRING_to_UTF8(uchar **out,ASN1_STRING *in)

{
  char cVar1;
  int iVar2;
  long in_FS_OFFSET;
  ASN1_STRING *local_30;
  ASN1_STRING local_28;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = &local_28;
  if ((in == (ASN1_STRING *)0x0) || (0x1e < (uint)in->type)) {
    iVar2 = -1;
  }
  else {
    cVar1 = tag2nbyte[in->type];
    iVar2 = (int)cVar1;
    if (cVar1 != -1) {
      local_28.data = (uchar *)0x0;
      local_28.length = 0;
      local_28.flags = 0;
      iVar2 = ASN1_mbstring_copy(&local_30,in->data,in->length,
                                 CONCAT22(cVar1 >> 7,(short)cVar1) | 0x1000,0x2000);
      if (-1 < iVar2) {
        *out = local_28.data;
        iVar2 = local_28.length;
      }
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


