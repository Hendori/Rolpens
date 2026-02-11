
undefined8 in_utf8(ulong param_1,int *param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffe;
  if ((param_1 < 0x110000) && (0x7ff < param_1 - 0xd800)) {
    *param_2 = *param_2 + 1;
    uVar1 = 1;
  }
  return uVar1;
}



undefined8 cpy_asc(undefined1 param_1,long *param_2)

{
  *(undefined1 *)*param_2 = param_1;
  *param_2 = *param_2 + 1;
  return 1;
}



undefined8 cpy_bmp(ushort param_1,long *param_2)

{
  *(ushort *)*param_2 = param_1 << 8 | param_1 >> 8;
  *param_2 = *param_2 + 2;
  return 1;
}



undefined8 cpy_univ(uint param_1,long *param_2)

{
  *(uint *)*param_2 =
       param_1 >> 0x18 | (param_1 & 0xff0000) >> 8 | (param_1 & 0xff00) << 8 | param_1 << 0x18;
  *param_2 = *param_2 + 4;
  return 1;
}



undefined8 cpy_utf8(ulong param_1,long *param_2)

{
  int iVar1;
  
  iVar1 = UTF8_putc((uchar *)*param_2,0xff,param_1);
  *param_2 = *param_2 + (long)iVar1;
  return 1;
}



int out_utf8(ulong param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = UTF8_putc((uchar *)0x0,-1,param_1);
  if (0 < iVar1) {
    *param_2 = *param_2 + iVar1;
    iVar1 = 1;
  }
  return iVar1;
}



undefined8 type_str(ulong param_1,ulong *param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *param_2;
  uVar3 = 0x7fffffff;
  if (param_1 < 0x80000000) {
    uVar3 = param_1;
  }
  if ((((uVar2 & 1) != 0) && (iVar1 = ossl_isdigit(), param_1 != 0x20)) && (iVar1 == 0)) {
    uVar2 = uVar2 & 0xfffffffffffffffe;
  }
  if ((uVar2 & 2) != 0) {
    iVar1 = ossl_ctype_check(uVar3 & 0xffffffff,0x800);
    if (iVar1 == 0) {
      uVar2 = uVar2 & 0xfffffffffffffffd;
    }
  }
  if ((uVar2 & 0x10) != 0) {
    if (param_1 < 0x80) goto LAB_00100133;
    uVar2 = uVar2 & 0xffffffffffffffef;
  }
  if ((uVar2 & 4) != 0) {
    if (param_1 < 0x100) goto LAB_00100133;
    uVar2 = uVar2 & 0xfffffffffffffffb;
  }
  uVar3 = uVar2 & 0x2000;
  if ((uVar2 & 0x800) == 0) {
    if ((uVar2 & 0x2000) != 0) {
      if (param_1 < 0x110000) goto LAB_00100219;
LAB_00100185:
      uVar2 = uVar2 & 0xffffffffffffdfff;
    }
  }
  else {
    if (param_1 < 0x10000) {
      if ((uVar2 & 0x2000) == 0) goto LAB_00100133;
LAB_00100219:
      if (0x7ff < param_1 - 0xd800) goto LAB_00100133;
      goto LAB_00100185;
    }
    uVar2 = uVar2 & 0xfffffffffffff7ff;
    if (uVar3 != 0) {
      if (param_1 < 0x110000) goto LAB_00100133;
      goto LAB_00100185;
    }
  }
  if (uVar2 == 0) {
    return 0xffffffff;
  }
LAB_00100133:
  *param_2 = uVar2;
  return 1;
}



undefined8 traverse_string(uint *param_1,int param_2,int param_3,code *param_4,undefined8 param_5)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  ulong local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 != 0) {
    do {
      if (param_3 == 0x1001) {
        local_48 = (ulong)(byte)*param_1;
        param_2 = param_2 + -1;
        param_1 = (uint *)((long)param_1 + 1);
      }
      else if (param_3 == 0x1002) {
        uVar1 = *param_1;
        param_2 = param_2 + -2;
        param_1 = (uint *)((long)param_1 + 2);
        local_48 = (ulong)(ushort)((ushort)uVar1 << 8 | (ushort)uVar1 >> 8);
      }
      else if (param_3 == 0x1004) {
        uVar1 = *param_1;
        param_2 = param_2 + -4;
        param_1 = param_1 + 1;
        local_48 = (ulong)(uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
                          uVar1 << 0x18);
      }
      else {
        iVar2 = UTF8_getc((uchar *)param_1,param_2,&local_48);
        if (iVar2 < 0) {
          uVar3 = 0xffffffff;
          goto LAB_00100315;
        }
        param_2 = param_2 - iVar2;
        param_1 = (uint *)((long)param_1 + (long)iVar2);
      }
      if ((param_4 != (code *)0x0) && (uVar3 = (*param_4)(local_48,param_5), (int)uVar3 < 1))
      goto LAB_00100315;
    } while (param_2 != 0);
  }
  uVar3 = 1;
LAB_00100315:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



int ASN1_mbstring_ncopy(ASN1_STRING **out,uchar *in,int len,int inform,ulong mask,long minsize,
                       long maxsize)

{
  bool bVar1;
  int iVar2;
  size_t sVar3;
  ASN1_STRING *str;
  uint uVar4;
  undefined8 uVar5;
  int type;
  uint len_00;
  uchar *str_00;
  long in_FS_OFFSET;
  code *local_70;
  ulong local_60 [2];
  uint local_4c;
  uchar *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_4c = 0;
  local_60[0] = mask;
  if (len == -1) {
    sVar3 = strlen((char *)in);
    len = (int)sVar3;
  }
  if (local_60[0] == 0) {
    local_60[0] = 0x2806;
  }
  if (-1 < len) {
    if (inform == 0x1002) {
      if ((len & 1U) == 0) {
        uVar4 = len >> 1;
        goto LAB_001003d7;
      }
      ERR_new();
      ERR_set_debug("crypto/asn1/a_mbstr.c",0x42,"ASN1_mbstring_ncopy");
      ERR_set_error(0xd,0x81,0);
    }
    else if (inform < 0x1003) {
      if (inform == 0x1000) {
        if (len != 0) {
          uVar4 = 0;
          str_00 = in;
          len_00 = len;
          do {
            iVar2 = UTF8_getc(str_00,len_00,(ulong *)&local_48);
            if (iVar2 < 0) {
LAB_00100669:
              ERR_new();
              ERR_set_debug("crypto/asn1/a_mbstr.c",0x55,"ASN1_mbstring_ncopy");
              ERR_set_error(0xd,0x86,0);
              goto LAB_00100610;
            }
            len_00 = len_00 - iVar2;
            str_00 = str_00 + iVar2;
            if (((uchar *)0x10ffff < local_48) || (local_48 + -0xd800 < (uchar *)0x800))
            goto LAB_00100669;
            uVar4 = uVar4 + 1;
          } while (len_00 != 0);
          goto LAB_001003d7;
        }
        uVar4 = 0;
        if (minsize < 1) goto LAB_0010040c;
      }
      else {
        uVar4 = len;
        if (inform != 0x1001) goto LAB_001005e0;
LAB_001003d7:
        if ((minsize < 1) || (minsize <= (int)uVar4)) {
          if ((maxsize < 1) || ((int)uVar4 <= maxsize)) {
LAB_0010040c:
            iVar2 = traverse_string(in,len,inform,type_str,local_60);
            if (iVar2 < 0) {
              ERR_new();
              ERR_set_debug("crypto/asn1/a_mbstr.c",0x71,"ASN1_mbstring_ncopy");
              ERR_set_error(0xd,0x7c,0);
            }
            else {
              if ((local_60[0] & 1) == 0) {
                if ((local_60[0] & 2) == 0) {
                  if ((local_60[0] & 0x10) == 0) {
                    if ((local_60[0] & 4) == 0) {
                      if ((local_60[0] & 0x800) == 0) {
                        iVar2 = (-(uint)((local_60[0] & 0x100) == 0) & 0xfffffffc) + 0x1004;
                        type = (-(uint)((local_60[0] & 0x100) == 0) & 0xfffffff0) + 0x1c;
                      }
                      else {
                        iVar2 = 0x1002;
                        type = 0x1e;
                      }
                    }
                    else {
                      iVar2 = 0x1001;
                      type = 0x14;
                    }
                  }
                  else {
                    iVar2 = 0x1001;
                    type = 0x16;
                  }
                }
                else {
                  iVar2 = 0x1001;
                  type = 0x13;
                }
              }
              else {
                iVar2 = 0x1001;
                type = 0x12;
              }
              if (out == (ASN1_STRING **)0x0) goto LAB_00100561;
              str = *out;
              if (str == (ASN1_STRING *)0x0) {
                str = ASN1_STRING_type_new(type);
                if (str != (ASN1_STRING *)0x0) {
                  *out = str;
                  bVar1 = true;
                  goto joined_r0x001006fb;
                }
                ERR_new();
                uVar5 = 0x94;
              }
              else {
                ASN1_STRING_set0(str,(void *)0x0,0);
                str->type = type;
                bVar1 = false;
joined_r0x001006fb:
                if (iVar2 != inform) {
                  if (iVar2 == 0x1002) {
                    local_4c = uVar4 * 2;
                    local_70 = cpy_bmp;
                  }
                  else if (iVar2 < 0x1003) {
                    if (iVar2 == 0x1000) {
                      local_4c = 0;
                      traverse_string(in,len,inform,out_utf8,&local_4c);
                      local_70 = cpy_utf8;
                    }
                    else {
                      local_70 = cpy_asc;
                      local_4c = uVar4;
                    }
                  }
                  else {
                    local_4c = uVar4 << 2;
                    local_70 = cpy_univ;
                  }
                  local_48 = (uchar *)CRYPTO_malloc(local_4c + 1,"crypto/asn1/a_mbstr.c",0xbd);
                  if (local_48 != (uchar *)0x0) {
                    str->data = local_48;
                    str->length = local_4c;
                    local_48[(int)local_4c] = '\0';
                    traverse_string(in,len,inform,local_70,&local_48);
                    goto LAB_00100561;
                  }
                  if (bVar1) {
                    ASN1_STRING_free(str);
                    *out = (ASN1_STRING *)0x0;
                  }
                  goto LAB_00100610;
                }
                iVar2 = ASN1_STRING_set(str,in,len);
                if (iVar2 != 0) goto LAB_00100561;
                if (bVar1) {
                  ASN1_STRING_free(str);
                  *out = (ASN1_STRING *)0x0;
                }
                ERR_new();
                uVar5 = 0xa0;
              }
              ERR_set_debug("crypto/asn1/a_mbstr.c",uVar5,"ASN1_mbstring_ncopy");
              ERR_set_error(0xd,0x8000d,0);
            }
          }
          else {
            ERR_new();
            ERR_set_debug("crypto/asn1/a_mbstr.c",0x6a,"ASN1_mbstring_ncopy");
            ERR_set_error(0xd,0x97,"maxsize=%ld",maxsize);
          }
          goto LAB_00100610;
        }
      }
      ERR_new();
      ERR_set_debug("crypto/asn1/a_mbstr.c",100,"ASN1_mbstring_ncopy");
      ERR_set_error(0xd,0x98,"minsize=%ld",minsize);
    }
    else if (inform == 0x1004) {
      if ((len & 3U) == 0) {
        uVar4 = len >> 2;
        goto LAB_001003d7;
      }
      ERR_new();
      ERR_set_debug("crypto/asn1/a_mbstr.c",0x4a,"ASN1_mbstring_ncopy");
      ERR_set_error(0xd,0x85,0);
    }
    else {
LAB_001005e0:
      ERR_new();
      ERR_set_debug("crypto/asn1/a_mbstr.c",0x5f,"ASN1_mbstring_ncopy");
      ERR_set_error(0xd,0xa0,0);
    }
  }
LAB_00100610:
  type = -1;
LAB_00100561:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return type;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int ASN1_mbstring_copy(ASN1_STRING **out,uchar *in,int len,int inform,ulong mask)

{
  int iVar1;
  
  iVar1 = ASN1_mbstring_ncopy(out,in,len,inform,mask,0,0);
  return iVar1;
}


