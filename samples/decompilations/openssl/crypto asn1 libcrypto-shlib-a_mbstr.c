
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



int ASN1_mbstring_ncopy(ASN1_STRING **out,uchar *in,int len,int inform,ulong mask,long minsize,
                       long maxsize)

{
  byte bVar1;
  ushort uVar2;
  bool bVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  size_t sVar8;
  long lVar9;
  ulong uVar10;
  ASN1_STRING *str;
  ulong uVar11;
  byte *pbVar12;
  ulong uVar13;
  undefined8 uVar14;
  uint *puVar15;
  uchar *puVar16;
  uint uVar17;
  code *pcVar18;
  ushort *puVar19;
  long in_FS_OFFSET;
  int local_7c;
  int local_78;
  uchar *local_50;
  ulong local_48;
  long local_40;
  
  uVar13 = (ulong)(uint)len;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (len == -1) {
    sVar8 = strlen((char *)in);
    uVar13 = sVar8 & 0xffffffff;
  }
  if (mask == 0) {
    mask = 0x2806;
  }
  iVar7 = (int)uVar13;
  if (-1 < iVar7) {
    if (inform == 0x1002) {
      if ((uVar13 & 1) != 0) {
        ERR_new();
        ERR_set_debug("crypto/asn1/a_mbstr.c",0x42,"ASN1_mbstring_ncopy");
        ERR_set_error(0xd,0x81,0);
        goto LAB_00100550;
      }
      local_7c = iVar7 >> 1;
      if (minsize < 1) {
LAB_001008de:
        lVar9 = (long)local_7c;
        if (0 < maxsize) {
LAB_00100419:
          if (maxsize < lVar9) {
LAB_00100bb2:
            ERR_new();
            ERR_set_debug("crypto/asn1/a_mbstr.c",0x6a,"ASN1_mbstring_ncopy");
            ERR_set_error(0xd,0x97,"maxsize=%ld",maxsize);
            goto LAB_00100550;
          }
          goto LAB_00100427;
        }
        if (iVar7 != 0) goto LAB_0010043b;
LAB_001008fa:
        local_7c = 0;
      }
      else {
LAB_001003fb:
        lVar9 = (long)local_7c;
        if (lVar9 < minsize) goto LAB_00100cf6;
        if (0 < maxsize) goto LAB_00100419;
LAB_00100427:
        if (iVar7 != 0) {
          if (inform != 0x1001) goto LAB_0010043b;
          goto LAB_001002f0;
        }
      }
    }
    else {
      if (0x1002 < inform) {
        if (inform == 0x1004) {
          if ((uVar13 & 3) == 0) {
            local_7c = iVar7 >> 2;
            if (minsize < 1) goto LAB_001008de;
            goto LAB_001003fb;
          }
          ERR_new();
          ERR_set_debug("crypto/asn1/a_mbstr.c",0x4a,"ASN1_mbstring_ncopy");
          ERR_set_error(0xd,0x85,0);
        }
        else {
LAB_00100590:
          ERR_new();
          ERR_set_debug("crypto/asn1/a_mbstr.c",0x5f,"ASN1_mbstring_ncopy");
          ERR_set_error(0xd,0xa0,0);
        }
        goto LAB_00100550;
      }
      if (inform == 0x1000) {
        if (iVar7 == 0) {
          if (minsize < 1) goto LAB_001008fa;
LAB_00100cf6:
          ERR_new();
          ERR_set_debug("crypto/asn1/a_mbstr.c",100,"ASN1_mbstring_ncopy");
          ERR_set_error(0xd,0x98,"minsize=%ld",minsize);
          goto LAB_00100550;
        }
        local_7c = 0;
        puVar16 = in;
        uVar11 = uVar13;
        do {
          iVar5 = UTF8_getc(puVar16,(int)uVar11,&local_48);
          if (iVar5 < 0) {
LAB_00100959:
            ERR_new();
            ERR_set_debug("crypto/asn1/a_mbstr.c",0x55,"ASN1_mbstring_ncopy");
            ERR_set_error(0xd,0x86,0);
            goto LAB_00100550;
          }
          uVar17 = (int)uVar11 - iVar5;
          uVar11 = (ulong)uVar17;
          puVar16 = puVar16 + iVar5;
          if ((0x10ffff < local_48) || (local_48 - 0xd800 < 0x800)) goto LAB_00100959;
          local_7c = local_7c + 1;
        } while (uVar17 != 0);
        if (minsize < 1) {
          if ((0 < maxsize) && (maxsize < local_7c)) goto LAB_00100bb2;
        }
        else {
          lVar9 = (long)local_7c;
          if (lVar9 < minsize) goto LAB_00100cf6;
          if (0 < maxsize) goto LAB_00100419;
        }
LAB_0010043b:
        uVar11 = uVar13;
        puVar15 = (uint *)in;
        do {
          iVar5 = (int)uVar11;
          if (inform == 0x1002) {
            uVar17 = *puVar15;
            uVar11 = (ulong)(iVar5 - 2);
            puVar15 = (uint *)((long)puVar15 + 2);
            local_48 = (ulong)(ushort)((ushort)uVar17 << 8 | (ushort)uVar17 >> 8);
          }
          else if (inform == 0x1004) {
            uVar17 = *puVar15;
            uVar11 = (ulong)(iVar5 - 4);
            puVar15 = puVar15 + 1;
            local_48 = (ulong)(uVar17 >> 0x18 | (uVar17 & 0xff0000) >> 8 | (uVar17 & 0xff00) << 8 |
                              uVar17 << 0x18);
          }
          else {
            iVar6 = UTF8_getc((uchar *)puVar15,iVar5,&local_48);
            if (iVar6 < 0) goto LAB_00100518;
            uVar11 = (ulong)(uint)(iVar5 - iVar6);
            puVar15 = (uint *)((long)puVar15 + (long)iVar6);
          }
          uVar4 = local_48;
          uVar10 = 0x7fffffff;
          if (local_48 < 0x80000000) {
            uVar10 = local_48;
          }
          if ((mask & 1) != 0) {
            iVar5 = ossl_isdigit(uVar10);
            uVar10 = uVar10 & 0xffffffff;
            if ((uVar4 != 0x20) && (iVar5 == 0)) {
              mask = mask & 0xfffffffffffffffe;
            }
          }
          if ((mask & 2) != 0) {
            iVar5 = ossl_ctype_check(uVar10);
            if (iVar5 == 0) {
              mask = mask & 0xfffffffffffffffd;
            }
          }
          if ((mask & 0x10) == 0) {
LAB_001004ca:
            if ((mask & 4) != 0) {
              if (uVar4 < 0x100) goto LAB_001005f8;
              mask = mask & 0xfffffffffffffffb;
            }
            uVar10 = mask & 0x2000;
            if ((mask & 0x800) == 0) {
              if ((mask & 0x2000) != 0) {
                if (uVar4 < 0x110000) {
LAB_00100889:
                  if (0x7ff < uVar4 - 0xd800) goto LAB_001005f8;
                }
LAB_00100508:
                mask = mask & 0xffffffffffffdfff;
              }
LAB_0010050f:
              if (mask == 0) goto LAB_00100518;
            }
            else if (uVar4 < 0x10000) {
              if ((mask & 0x2000) != 0) goto LAB_00100889;
            }
            else {
              mask = mask & 0xfffffffffffff7ff;
              if (uVar10 == 0) goto LAB_0010050f;
              if (0x10ffff < uVar4) goto LAB_00100508;
            }
          }
          else if (0x7f < uVar4) {
            mask = mask & 0xffffffffffffffef;
            goto LAB_001004ca;
          }
LAB_001005f8:
        } while ((int)uVar11 != 0);
      }
      else {
        if (inform != 0x1001) goto LAB_00100590;
        local_7c = iVar7;
        if (0 < minsize) goto LAB_001003fb;
        lVar9 = (long)iVar7;
        if (0 < maxsize) goto LAB_00100419;
        if (iVar7 == 0) goto LAB_00100600;
LAB_001002f0:
        pbVar12 = in;
        do {
          bVar1 = *pbVar12;
          uVar11 = (ulong)bVar1;
          pbVar12 = pbVar12 + 1;
          local_48 = uVar11;
          if ((((mask & 1) != 0) && (iVar5 = ossl_isdigit(bVar1), iVar5 == 0)) && (uVar11 != 0x20))
          {
            mask = mask & 0xfffffffffffffffe;
          }
          if ((mask & 2) != 0) {
            iVar5 = ossl_ctype_check(bVar1,0x800);
            if (iVar5 == 0) {
              mask = mask & 0xfffffffffffffffd;
            }
          }
          if ((mask & 0x10) == 0) {
LAB_0010031a:
            if ((((mask & 4) == 0) && ((mask & 0x800) == 0)) &&
               (((mask & 0x2000) == 0 && (mask == 0)))) goto LAB_00100518;
          }
          else if (0x7f < uVar11) {
            mask = mask & 0xffffffffffffffef;
            goto LAB_0010031a;
          }
        } while (pbVar12 != in + uVar13);
      }
    }
LAB_00100600:
    if ((mask & 1) == 0) {
      if ((mask & 2) == 0) {
        if ((mask & 0x10) == 0) {
          if ((mask & 4) == 0) {
            if ((mask & 0x800) == 0) {
              iVar5 = (-(uint)((mask & 0x100) == 0) & 0xfffffffc) + 0x1004;
              local_78 = (-(uint)((mask & 0x100) == 0) & 0xfffffff0) + 0x1c;
            }
            else {
              local_78 = 0x1e;
              iVar5 = 0x1002;
            }
          }
          else {
            local_78 = 0x14;
            iVar5 = 0x1001;
          }
        }
        else {
          local_78 = 0x16;
          iVar5 = 0x1001;
        }
      }
      else {
        local_78 = 0x13;
        iVar5 = 0x1001;
      }
    }
    else {
      local_78 = 0x12;
      iVar5 = 0x1001;
    }
    if (out == (ASN1_STRING **)0x0) goto LAB_00100560;
    str = *out;
    if (str == (ASN1_STRING *)0x0) {
      str = ASN1_STRING_type_new(local_78);
      if (str != (ASN1_STRING *)0x0) {
        bVar3 = true;
        *out = str;
        goto joined_r0x00100a1d;
      }
      ERR_new();
      uVar14 = 0x94;
    }
    else {
      ASN1_STRING_set0(str,(void *)0x0,0);
      bVar3 = false;
      str->type = local_78;
joined_r0x00100a1d:
      if (iVar5 != inform) {
        if (iVar5 == 0x1002) {
          local_7c = local_7c * 2;
          pcVar18 = cpy_bmp;
          iVar7 = local_7c + 1;
        }
        else if (iVar5 < 0x1003) {
          if (iVar5 == 0x1000) {
            if (iVar7 == 0) {
              local_7c = 0;
              iVar7 = 1;
            }
            else {
              if (inform == 0x1001) {
                local_7c = 0;
                pbVar12 = in;
                do {
                  local_48 = (ulong)*pbVar12;
                  pbVar12 = pbVar12 + 1;
                  iVar7 = UTF8_putc((uchar *)0x0,-1,local_48);
                  if (iVar7 < 1) break;
                  local_7c = local_7c + iVar7;
                } while (pbVar12 != in + uVar13);
              }
              else if (inform == 0x1002) {
                local_7c = 0;
                puVar19 = (ushort *)in;
                do {
                  uVar2 = *puVar19;
                  puVar19 = puVar19 + 1;
                  local_48 = (ulong)(ushort)(uVar2 << 8 | uVar2 >> 8);
                  iVar5 = UTF8_putc((uchar *)0x0,-1,local_48);
                  if (iVar5 < 1) break;
                  local_7c = local_7c + iVar5;
                } while (iVar7 + (int)in != (int)puVar19);
              }
              else if (inform == 0x1004) {
                local_7c = 0;
                puVar15 = (uint *)in;
                do {
                  uVar17 = *puVar15;
                  puVar15 = puVar15 + 1;
                  local_48 = (ulong)(uVar17 >> 0x18 | (uVar17 & 0xff0000) >> 8 |
                                     (uVar17 & 0xff00) << 8 | uVar17 << 0x18);
                  iVar5 = UTF8_putc((uchar *)0x0,-1,local_48);
                  if (iVar5 < 1) break;
                  local_7c = local_7c + iVar5;
                } while (iVar7 + (int)in != (int)puVar15);
              }
              else {
                local_7c = 0;
                puVar16 = in;
                uVar11 = uVar13;
                while( true ) {
                  iVar7 = UTF8_getc(puVar16,(int)uVar11,&local_48);
                  if (iVar7 < 0) break;
                  uVar17 = (int)uVar11 - iVar7;
                  uVar11 = (ulong)uVar17;
                  puVar16 = puVar16 + iVar7;
                  iVar7 = UTF8_putc((uchar *)0x0,-1,local_48);
                  if ((iVar7 < 1) || (local_7c = local_7c + iVar7, uVar17 == 0)) break;
                }
              }
              iVar7 = local_7c + 1;
            }
            pcVar18 = cpy_utf8;
          }
          else {
            pcVar18 = cpy_asc;
            iVar7 = local_7c + 1;
          }
        }
        else {
          local_7c = local_7c * 4;
          pcVar18 = cpy_univ;
          iVar7 = local_7c + 1;
        }
        local_50 = (uchar *)CRYPTO_malloc(iVar7,"crypto/asn1/a_mbstr.c",0xbd);
        if (local_50 != (uchar *)0x0) {
          str->data = local_50;
          str->length = local_7c;
          local_50[local_7c] = '\0';
          do {
            iVar7 = (int)uVar13;
            if (iVar7 == 0) break;
            if (inform == 0x1001) {
              local_48 = (ulong)(byte)*(uint *)in;
              uVar13 = (ulong)(iVar7 - 1);
              in = (uchar *)((long)in + 1);
            }
            else if (inform == 0x1002) {
              uVar17 = *(uint *)in;
              uVar13 = (ulong)(iVar7 - 2);
              in = (uchar *)((long)in + 2);
              local_48 = (ulong)(ushort)((ushort)uVar17 << 8 | (ushort)uVar17 >> 8);
            }
            else if (inform == 0x1004) {
              uVar17 = *(uint *)in;
              uVar13 = (ulong)(iVar7 - 4);
              in = (uchar *)((long)in + 4);
              local_48 = (ulong)(uVar17 >> 0x18 | (uVar17 & 0xff0000) >> 8 | (uVar17 & 0xff00) << 8
                                | uVar17 << 0x18);
            }
            else {
              iVar5 = UTF8_getc(in,iVar7,&local_48);
              if (iVar5 < 0) break;
              uVar13 = (ulong)(uint)(iVar7 - iVar5);
              in = (uchar *)((long)in + (long)iVar5);
            }
            iVar7 = (*pcVar18)(local_48,&local_50);
          } while (0 < iVar7);
          goto LAB_00100560;
        }
        if (bVar3) {
          ASN1_STRING_free(str);
          *out = (ASN1_STRING *)0x0;
        }
        goto LAB_00100550;
      }
      iVar7 = ASN1_STRING_set(str,in,iVar7);
      if (iVar7 != 0) goto LAB_00100560;
      if (bVar3) {
        ASN1_STRING_free(str);
        *out = (ASN1_STRING *)0x0;
      }
      ERR_new();
      uVar14 = 0xa0;
    }
    ERR_set_debug("crypto/asn1/a_mbstr.c",uVar14,"ASN1_mbstring_ncopy");
    ERR_set_error(0xd,0x8000d,0);
  }
LAB_00100550:
  local_78 = -1;
LAB_00100560:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_78;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00100518:
  ERR_new();
  ERR_set_debug("crypto/asn1/a_mbstr.c",0x71,"ASN1_mbstring_ncopy");
  ERR_set_error(0xd,0x7c,0);
  goto LAB_00100550;
}



int ASN1_mbstring_copy(ASN1_STRING **out,uchar *in,int len,int inform,ulong mask)

{
  int iVar1;
  
  iVar1 = ASN1_mbstring_ncopy(out,in,len,inform,mask,0,0);
  return iVar1;
}


