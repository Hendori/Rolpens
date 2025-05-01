
undefined1 * ASN1_TIME_it(void)

{
  return local_it_5;
}



ASN1_TIME * d2i_ASN1_TIME(ASN1_TIME **a,uchar **in,long len)

{
  ASN1_TIME *pAVar1;
  
  pAVar1 = (ASN1_TIME *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,(ASN1_ITEM *)local_it_5);
  return pAVar1;
}



int i2d_ASN1_TIME(ASN1_TIME *a,uchar **out)

{
  int iVar1;
  
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,(ASN1_ITEM *)local_it_5);
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ASN1_TIME * ASN1_TIME_new(void)

{
  ASN1_TIME *pAVar1;
  
  pAVar1 = (ASN1_TIME *)ASN1_item_new((ASN1_ITEM *)local_it_5);
  return pAVar1;
}



void ASN1_TIME_free(ASN1_TIME *a)

{
  ASN1_item_free((ASN1_VALUE *)a,(ASN1_ITEM *)local_it_5);
  return;
}



void ASN1_TIME_dup(void *param_1)

{
  ASN1_item_dup((ASN1_ITEM *)local_it_5,param_1);
  return;
}



undefined8 ossl_asn1_time_to_tm(undefined8 *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  ulong uVar9;
  char *pcVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  ulong uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  long in_FS_OFFSET;
  bool bVar21;
  int local_a8;
  int local_90;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined8 local_48;
  long local_40;
  
  iVar5 = param_2[1];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (iVar5 == 0x17) {
    local_a8 = 5;
    iVar12 = 6;
    iVar18 = 7;
    iVar11 = 0xd;
    uVar15 = (uint)((ulong)*(undefined8 *)(param_2 + 4) >> 8);
LAB_001000d1:
    uVar15 = uVar15 & 1;
    iVar2 = *param_2;
    lVar3 = *(long *)(param_2 + 2);
    local_48 = 0;
    local_78 = (undefined1  [16])0x0;
    local_68 = (undefined1  [16])0x0;
    local_58 = (undefined1  [16])0x0;
    if (iVar11 <= iVar2) {
      uVar9 = 0;
      iVar11 = 0;
      do {
        uVar16 = (uint)*(char *)(lVar3 + uVar9 * 2);
        if ((((local_a8 == (int)uVar9) && ((char)uVar15 != '\x01')) &&
            ((byte)(uVar16 - 0x2b) < 0x30)) &&
           ((0x800000000005U >> ((ulong)(uVar16 - 0x2b) & 0x3f) & 1) != 0)) goto LAB_00100227;
        iVar5 = ossl_ascii_isdigit();
        if (((iVar5 == 0) || (cVar1 = *(char *)(lVar3 + uVar9 * 2), iVar2 == iVar11 + 1)) ||
           (iVar5 = ossl_ascii_isdigit((int)*(char *)(lVar3 + 1 + uVar9 * 2)), iVar5 == 0))
        goto LAB_00100240;
        iVar11 = iVar11 + 2;
        iVar7 = (int)*(char *)(lVar3 + 1 + uVar9 * 2) + (cVar1 + -0x30) * 10;
        iVar6 = iVar7 + -0x30;
        if (iVar2 == iVar11) goto LAB_00100240;
        iVar5 = param_2[1];
        uVar14 = (ulong)((int)uVar9 + 1);
        if (iVar5 != 0x17) {
          uVar14 = uVar9 & 0xffffffff;
        }
        if ((iVar6 < *(int *)(min_4 + (long)(int)uVar14 * 4)) ||
           (*(int *)(max_3 + (long)(int)uVar14 * 4) < iVar6)) goto LAB_00100240;
        switch(uVar14) {
        case 0:
          local_68._4_4_ = iVar6 * 100 + -0x76c;
          break;
        case 1:
          if (iVar5 == 0x17) {
            if (iVar6 < 0x32) {
              iVar6 = iVar7 + 0x34;
            }
            local_68._4_4_ = iVar6;
          }
          else {
            local_68._4_4_ = local_68._4_4_ + iVar6;
          }
          break;
        case 2:
          local_68._0_4_ = iVar7 + -0x31;
          break;
        case 3:
          if (local_68._0_4_ == 1) {
            iVar13 = 0x1d;
            uVar16 = local_68._4_4_ + 0x76c;
            uVar17 = uVar16 * -0x3d70a3d7 + 0x51eb850;
            if ((0xa3d70a < (uVar17 >> 4 | uVar16 * -0x70000000)) &&
               (iVar13 = 0x1c, 0x28f5c28 < (uVar17 >> 2 | local_68._4_4_ * 0x40000000))) {
              iVar13 = ((uVar16 & 3) == 0) + 0x1c;
            }
            if (iVar13 < iVar6) goto LAB_00100240;
            iVar7 = iVar7 + -0x12;
LAB_00100473:
            uVar16 = local_68._4_4_ + 0x76b;
            iVar19 = local_68._0_4_ + 0xe;
            iVar13 = (int)uVar16 % 100;
          }
          else {
            if (*(int *)(mdays_2 + (long)(int)local_68._0_4_ * 4) < iVar6) goto LAB_00100240;
            uVar16 = local_68._4_4_ + 0x76c;
            iVar7 = *(int *)(ydays_1 + (long)(int)local_68._0_4_ * 4) + iVar6 + -1;
            if ((int)local_68._0_4_ < 2) goto LAB_00100473;
            iVar13 = (int)uVar16 % 100;
            iVar20 = *(int *)(ydays_1 + (long)(int)local_68._0_4_ * 4) + iVar6;
            if ((0xa3d70a < (uVar16 * -0x3d70a3d7 + 0x51eb850 >> 4 | uVar16 * -0x70000000)) &&
               (iVar20 = iVar7, iVar13 != 0)) {
              iVar20 = iVar7 + (uint)((uVar16 & 3) == 0);
            }
            iVar19 = local_68._0_4_ + 2;
            iVar7 = iVar20;
          }
          local_78._12_4_ = iVar6;
          iVar20 = iVar13 + 3;
          if (-1 < iVar13) {
            iVar20 = iVar13;
          }
          local_68._8_4_ =
               ((iVar20 >> 2) + (iVar19 * 0xd) / 5 + iVar6 + iVar13 + (int)uVar16 / 400 + 6 +
               ((int)uVar16 / 100) * 5) % 7;
          local_68._12_4_ = iVar7;
          break;
        case 4:
          local_78._8_4_ = iVar6;
          break;
        case 5:
          local_78._4_4_ = iVar6;
          break;
        case 6:
          local_78._0_4_ = iVar6;
        }
        uVar9 = uVar9 + 1;
      } while (iVar11 != iVar12 * 2);
      uVar16 = (uint)*(byte *)(lVar3 + iVar11);
LAB_00100227:
      if ((iVar5 == 0x18) && ((char)uVar16 == '.')) {
        if (((uVar15 == 0) && (iVar5 = iVar11 + 1, iVar2 != iVar5)) && (iVar5 < iVar2)) {
          pcVar10 = (char *)(iVar5 + lVar3);
          iVar11 = iVar5;
          do {
            iVar7 = ossl_ascii_isdigit((int)*pcVar10);
            if (iVar7 == 0) {
              if ((iVar2 != iVar11) && (iVar5 != iVar11)) {
                uVar16 = (uint)*(byte *)(lVar3 + iVar11);
                if (*(byte *)(lVar3 + iVar11) != 0x5a) goto LAB_001004c0;
                goto LAB_001006a0;
              }
              break;
            }
            iVar11 = iVar11 + 1;
            pcVar10 = pcVar10 + 1;
          } while (iVar2 != iVar11);
        }
      }
      else if ((char)uVar16 == 'Z') {
LAB_001006a0:
        iVar11 = iVar11 + 1;
LAB_001006a4:
        if (iVar11 == iVar2) {
          if (param_1 != (undefined8 *)0x0) {
            param_1[6] = local_48;
            *param_1 = local_78._0_8_;
            param_1[1] = local_78._8_8_;
            param_1[2] = local_68._0_8_;
            param_1[3] = local_68._8_8_;
            param_1[4] = local_58._0_8_;
            param_1[5] = local_58._8_8_;
          }
          uVar8 = 1;
          goto LAB_00100242;
        }
      }
      else if (uVar15 == 0) {
LAB_001004c0:
        if (((uVar16 - 0x2b & 0xfd) == 0) && (bVar21 = (char)uVar16 == '-', iVar11 + 5 == iVar2)) {
          local_90 = 0;
          iVar7 = ossl_ascii_isdigit((int)*(char *)(lVar3 + -2 + (long)(iVar11 + 3)));
          lVar4 = (long)(iVar11 + 3);
          iVar5 = iVar12;
          while (iVar7 != 0) {
            cVar1 = *(char *)(lVar3 + -2 + lVar4);
            iVar11 = ossl_ascii_isdigit((int)*(char *)(lVar3 + -1 + lVar4));
            if (iVar11 == 0) break;
            iVar11 = *(char *)(lVar3 + -1 + lVar4) + -0x30 + (cVar1 + -0x30) * 10;
            iVar7 = iVar5;
            if (param_2[1] == 0x17) {
              iVar7 = iVar5 + 1;
            }
            if ((iVar11 < *(int *)(min_4 + (long)iVar7 * 4)) ||
               (*(int *)(max_3 + (long)iVar7 * 4) < iVar11)) break;
            if (param_1 != (undefined8 *)0x0) {
              if (iVar12 == iVar5) {
                local_90 = iVar11 * 0xe10;
              }
              else if (iVar5 == iVar18) {
                local_90 = local_90 + iVar11 * 0x3c;
              }
            }
            iVar5 = iVar5 + 1;
            if (iVar5 == iVar12 + 2) {
              if ((local_90 == 0) ||
                 (iVar5 = OPENSSL_gmtime_adj(local_78,0,
                                             (long)(int)(local_90 * ((bVar21 - 1) + (uint)bVar21))),
                 iVar5 != 0)) {
                iVar11 = (int)lVar4;
                goto LAB_001006a4;
              }
              break;
            }
            iVar7 = ossl_ascii_isdigit((int)*(char *)(lVar3 + -2 + lVar4 + 2));
            lVar4 = lVar4 + 2;
          }
        }
      }
    }
  }
  else if (iVar5 == 0x18) {
    local_a8 = 6;
    iVar12 = 7;
    iVar18 = 8;
    iVar11 = 0xf;
    uVar15 = (uint)((ulong)*(undefined8 *)(param_2 + 4) >> 8);
    goto LAB_001000d1;
  }
LAB_00100240:
  uVar8 = 0;
LAB_00100242:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ASN1_STRING * ossl_asn1_time_from_tm(ASN1_STRING *param_1,uint *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  char *format;
  uchar *buf;
  
  if (param_3 != -1) {
    if (param_3 == 0x17) {
      if (param_2[5] - 0x32 < 100) goto LAB_00100773;
    }
    else if (param_3 == 0x18) {
LAB_00100773:
      if (param_1 == (ASN1_STRING *)0x0) goto LAB_0010085b;
      goto LAB_0010077c;
    }
    if (param_1 == (ASN1_STRING *)0x0) {
      return (ASN1_STRING *)0x0;
    }
    param_1 = (ASN1_STRING *)0x0;
LAB_001007d2:
    ASN1_STRING_free(param_1);
    return (ASN1_STRING *)0x0;
  }
  param_3 = (99 < param_2[5] - 0x32) + 0x17;
  if (param_1 == (ASN1_STRING *)0x0) {
LAB_0010085b:
    param_1 = ASN1_STRING_new();
    if (param_1 == (ASN1_STRING *)0x0) {
      return (ASN1_STRING *)0x0;
    }
    iVar5 = ASN1_STRING_set(param_1,(void *)0x0,0x14);
    if (iVar5 == 0) goto LAB_001007d2;
    uVar7 = param_2[4];
    buf = param_1->data;
    param_1->type = param_3;
    if (uVar7 == 0x7fffffff) goto LAB_001007d2;
    uVar6 = param_2[5];
    if (param_3 == 0x18) {
      if (0x7ffff893 < (int)uVar6) goto LAB_001007d2;
      goto LAB_001008b5;
    }
  }
  else {
LAB_0010077c:
    iVar5 = ASN1_STRING_set(param_1,(void *)0x0,0x14);
    if (iVar5 == 0) {
      return (ASN1_STRING *)0x0;
    }
    uVar7 = param_2[4];
    buf = param_1->data;
    param_1->type = param_3;
    if (uVar7 == 0x7fffffff) {
      return (ASN1_STRING *)0x0;
    }
    uVar6 = param_2[5];
    if (param_3 == 0x18) {
      if (0x7ffff893 < (int)uVar6) {
        return (ASN1_STRING *)0x0;
      }
LAB_001008b5:
      uVar1 = *param_2;
      uVar6 = uVar6 + 0x76c;
      format = "%04d%02d%02d%02d%02d%02dZ";
      uVar2 = param_2[1];
      uVar3 = param_2[2];
      uVar4 = param_2[3];
      goto LAB_0010081f;
    }
  }
  format = "%02d%02d%02d%02d%02d%02dZ";
  uVar6 = (int)uVar6 % 100;
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
LAB_0010081f:
  iVar5 = BIO_snprintf((char *)buf,0x14,format,(ulong)uVar6,(ulong)(uVar7 + 1),(ulong)uVar4,
                       (ulong)uVar3,(ulong)uVar2,(ulong)uVar1);
  param_1->length = iVar5;
  return param_1;
}



ASN1_TIME * ASN1_TIME_set(ASN1_TIME *s,time_t t)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  ASN1_STRING *str;
  uint uVar7;
  uint uVar8;
  char *format;
  uchar *buf;
  int iVar9;
  long in_FS_OFFSET;
  time_t local_70 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_70[0] = t;
  puVar6 = (uint *)OPENSSL_gmtime(local_70);
  if (puVar6 == (uint *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/asn1/a_time.c",0x150,"ASN1_TIME_adj");
    ERR_set_error(0xd,0xad,0);
  }
  else {
    iVar9 = (99 < puVar6[5] - 0x32) + 0x17;
    if (s == (ASN1_TIME *)0x0) {
      str = ASN1_STRING_new();
      if (str != (ASN1_STRING *)0x0) {
        iVar5 = ASN1_STRING_set(str,(void *)0x0,0x14);
        if (iVar5 != 0) {
          uVar8 = puVar6[4];
          buf = str->data;
          str->type = iVar9;
          if (uVar8 != 0x7fffffff) goto LAB_0010097f;
        }
LAB_00100a70:
        ASN1_STRING_free(str);
      }
    }
    else {
      iVar5 = ASN1_STRING_set(s,(void *)0x0,0x14);
      if (iVar5 != 0) {
        uVar8 = puVar6[4];
        buf = s->data;
        s->type = iVar9;
        str = s;
        if (uVar8 != 0x7fffffff) {
LAB_0010097f:
          uVar7 = puVar6[5];
          if (iVar9 == 0x18) {
            if (0x7ffff893 < (int)uVar7) {
              if (s != str) goto LAB_00100a70;
              goto LAB_00100a78;
            }
            uVar1 = *puVar6;
            uVar2 = puVar6[3];
            uVar7 = uVar7 + 0x76c;
            format = "%04d%02d%02d%02d%02d%02dZ";
            uVar3 = puVar6[1];
            uVar4 = puVar6[2];
          }
          else {
            uVar2 = puVar6[3];
            format = "%02d%02d%02d%02d%02d%02dZ";
            uVar7 = (int)uVar7 % 100;
            uVar1 = *puVar6;
            uVar3 = puVar6[1];
            uVar4 = puVar6[2];
          }
          iVar9 = BIO_snprintf((char *)buf,0x14,format,(ulong)uVar7,(ulong)(uVar8 + 1),(ulong)uVar2,
                               (ulong)uVar4,(ulong)uVar3,(ulong)uVar1);
          str->length = iVar9;
          goto LAB_001009cc;
        }
      }
    }
  }
LAB_00100a78:
  str = (ASN1_TIME *)0x0;
LAB_001009cc:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return str;
}



ASN1_TIME * ASN1_TIME_adj(ASN1_TIME *s,time_t t,int offset_day,long offset_sec)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  ASN1_TIME *str;
  uint uVar7;
  uint uVar8;
  char *format;
  uchar *buf;
  ASN1_STRING *pAVar9;
  int iVar10;
  long in_FS_OFFSET;
  time_t local_70 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_70[0] = t;
  puVar6 = (uint *)OPENSSL_gmtime(local_70);
  if (puVar6 == (uint *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/asn1/a_time.c",0x150,"ASN1_TIME_adj");
    ERR_set_error(0xd,0xad,0);
  }
  else if (((offset_day == 0) && (offset_sec == 0)) ||
          (iVar10 = OPENSSL_gmtime_adj(puVar6,offset_day,offset_sec), iVar10 != 0)) {
    iVar10 = (99 < puVar6[5] - 0x32) + 0x17;
    if (s == (ASN1_TIME *)0x0) {
      str = ASN1_STRING_new();
      if (str != (ASN1_STRING *)0x0) {
        iVar5 = ASN1_STRING_set(str,(void *)0x0,0x14);
        if (iVar5 != 0) {
          uVar8 = puVar6[4];
          buf = str->data;
          str->type = iVar10;
          pAVar9 = str;
          if (uVar8 != 0x7fffffff) goto LAB_00100b77;
        }
LAB_00100c90:
        pAVar9 = (ASN1_TIME *)0x0;
        ASN1_STRING_free(str);
        goto LAB_00100bc8;
      }
    }
    else {
      iVar5 = ASN1_STRING_set(s,(void *)0x0,0x14);
      if (iVar5 != 0) {
        uVar8 = puVar6[4];
        buf = s->data;
        s->type = iVar10;
        pAVar9 = s;
        if (uVar8 != 0x7fffffff) {
LAB_00100b77:
          uVar7 = puVar6[5];
          if (iVar10 == 0x18) {
            if (0x7ffff893 < (int)uVar7) {
              str = pAVar9;
              if (s != pAVar9) goto LAB_00100c90;
              goto LAB_00100c06;
            }
            uVar1 = *puVar6;
            uVar2 = puVar6[3];
            uVar7 = uVar7 + 0x76c;
            format = "%04d%02d%02d%02d%02d%02dZ";
            uVar3 = puVar6[1];
            uVar4 = puVar6[2];
          }
          else {
            uVar2 = puVar6[3];
            format = "%02d%02d%02d%02d%02d%02dZ";
            uVar7 = (int)uVar7 % 100;
            uVar1 = *puVar6;
            uVar3 = puVar6[1];
            uVar4 = puVar6[2];
          }
          iVar10 = BIO_snprintf((char *)buf,0x14,format,(ulong)uVar7,(ulong)(uVar8 + 1),(ulong)uVar2
                                ,(ulong)uVar4,(ulong)uVar3,(ulong)uVar1);
          pAVar9->length = iVar10;
          goto LAB_00100bc8;
        }
      }
    }
  }
LAB_00100c06:
  pAVar9 = (ASN1_TIME *)0x0;
LAB_00100bc8:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pAVar9;
}



int ASN1_TIME_check(ASN1_TIME *t)

{
  int iVar1;
  
  if (t->type == 0x18) {
    iVar1 = ASN1_GENERALIZEDTIME_check(t);
    return iVar1;
  }
  if (t->type != 0x17) {
    return 0;
  }
  iVar1 = ASN1_UTCTIME_check(t);
  return iVar1;
}



ASN1_GENERALIZEDTIME * ASN1_TIME_to_generalizedtime(ASN1_TIME *t,ASN1_GENERALIZEDTIME **out)

{
  int iVar1;
  ASN1_STRING *str;
  long lVar2;
  uchar *buf;
  long in_FS_OFFSET;
  time_t local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (t == (ASN1_TIME *)0x0) {
    time(&local_60);
    local_28 = 0;
    local_58 = (undefined1  [16])0x0;
    local_48 = (undefined1  [16])0x0;
    local_38 = (undefined1  [16])0x0;
    lVar2 = OPENSSL_gmtime(&local_60);
    if (lVar2 == 0) {
      str = (ASN1_STRING *)0x0;
      goto LAB_00100df9;
    }
LAB_00100d5e:
    if ((out == (ASN1_GENERALIZEDTIME **)0x0) || (str = *out, str == (ASN1_STRING *)0x0)) {
      str = ASN1_STRING_new();
      if (str != (ASN1_STRING *)0x0) {
        iVar1 = ASN1_STRING_set(str,(void *)0x0,0x14);
        if (iVar1 != 0) {
          buf = str->data;
          str->type = 0x18;
          if ((local_48._0_4_ != 0x7fffffff) && ((int)local_48._4_4_ < 0x7ffff894))
          goto LAB_00100db5;
        }
        ASN1_STRING_free(str);
      }
    }
    else {
      iVar1 = ASN1_STRING_set(str,(void *)0x0,0x14);
      if (iVar1 != 0) {
        buf = str->data;
        str->type = 0x18;
        if ((local_48._0_4_ != 0x7fffffff) && ((int)local_48._4_4_ < 0x7ffff894)) {
LAB_00100db5:
          iVar1 = BIO_snprintf((char *)buf,0x14,"%04d%02d%02d%02d%02d%02dZ",
                               (ulong)(local_48._4_4_ + 0x76c),(ulong)(local_48._0_4_ + 1),
                               (ulong)(uint)local_58._12_4_,(ulong)(uint)local_58._8_4_,
                               (ulong)(uint)local_58._4_4_,(ulong)(uint)local_58._0_4_);
          str->length = iVar1;
          if (out != (ASN1_GENERALIZEDTIME **)0x0) {
            *out = str;
          }
          goto LAB_00100df9;
        }
      }
    }
  }
  else {
    iVar1 = ossl_asn1_time_to_tm(local_58);
    if (iVar1 != 0) goto LAB_00100d5e;
  }
  str = (ASN1_STRING *)0x0;
LAB_00100df9:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return str;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int ASN1_TIME_set_string(ASN1_TIME *s,char *str)

{
  int iVar1;
  
  iVar1 = ASN1_UTCTIME_set_string(s,str);
  if (iVar1 != 0) {
    return 1;
  }
  iVar1 = ASN1_GENERALIZEDTIME_set_string(s,str);
  return iVar1;
}



bool ASN1_TIME_set_string_X509(ASN1_STRING *param_1,uchar *param_2)

{
  int iVar1;
  size_t sVar2;
  long in_FS_OFFSET;
  bool bVar3;
  ASN1_UTCTIME local_78;
  undefined1 local_58 [20];
  int local_44;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  sVar2 = strlen((char *)param_2);
  local_78.length = (int)sVar2;
  local_78.flags = 0x100;
  local_78.type = 0x17;
  local_78.data = param_2;
  iVar1 = ASN1_UTCTIME_check(&local_78);
  if (iVar1 == 0) {
    local_78.type = 0x18;
    iVar1 = ASN1_GENERALIZEDTIME_check(&local_78);
    if (iVar1 != 0) goto LAB_00100f66;
    goto LAB_00101048;
  }
LAB_00100f66:
  if (param_1 == (ASN1_STRING *)0x0) {
    bVar3 = true;
  }
  else {
    if (local_78.type == 0x18) {
      iVar1 = ossl_asn1_time_to_tm(local_58,&local_78);
      if (iVar1 == 0) {
LAB_00101048:
        bVar3 = false;
        goto LAB_00100fa4;
      }
      if (local_44 - 0x32U < 100) {
        iVar1 = local_78.length + -1;
        local_78.length = local_78.length + -2;
        local_78.data = (uchar *)CRYPTO_zalloc((long)iVar1,"crypto/asn1/a_time.c",0x1aa);
        if (local_78.data == (uchar *)0x0) goto LAB_00101048;
        memcpy(local_78.data,param_2 + 2,(long)local_78.length);
        local_78.type = 0x17;
      }
    }
    iVar1 = ASN1_STRING_copy(param_1,&local_78);
    bVar3 = iVar1 != 0;
  }
  if (local_78.data != param_2) {
    CRYPTO_free(local_78.data);
  }
LAB_00100fa4:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong ASN1_TIME_to_tm(long param_1,undefined1 (*param_2) [16])

{
  ulong uVar1;
  long lVar2;
  long in_FS_OFFSET;
  time_t tStack_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) {
    time(&tStack_28);
    *(undefined8 *)param_2[3] = 0;
    *param_2 = (undefined1  [16])0x0;
    param_2[1] = (undefined1  [16])0x0;
    param_2[2] = (undefined1  [16])0x0;
    lVar2 = OPENSSL_gmtime(&tStack_28,param_2);
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      return (ulong)(lVar2 != 0);
    }
  }
  else if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    uVar1 = ossl_asn1_time_to_tm(param_2,param_1);
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 ASN1_TIME_diff(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long in_FS_OFFSET;
  time_t local_b0;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined8 local_78;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 == 0) {
    time((time_t *)local_68);
    local_78 = 0;
    local_a8 = (undefined1  [16])0x0;
    local_98 = (undefined1  [16])0x0;
    local_88 = (undefined1  [16])0x0;
    lVar3 = OPENSSL_gmtime(local_68,local_a8);
    if (lVar3 != 0) {
      if (param_4 == 0) goto LAB_001011f3;
LAB_0010115e:
      iVar1 = ossl_asn1_time_to_tm(local_68,param_4);
      if (iVar1 != 0) goto LAB_0010116d;
    }
  }
  else {
    iVar1 = ossl_asn1_time_to_tm(local_a8,param_3);
    if (iVar1 != 0) {
      if (param_4 != 0) goto LAB_0010115e;
LAB_001011f3:
      time(&local_b0);
      local_38 = 0;
      local_68 = (undefined1  [16])0x0;
      local_58 = (undefined1  [16])0x0;
      local_48 = (undefined1  [16])0x0;
      lVar3 = OPENSSL_gmtime(&local_b0,local_68);
      if (lVar3 == 0) {
        uVar2 = 0;
        goto LAB_0010117e;
      }
LAB_0010116d:
      uVar2 = OPENSSL_gmtime_diff(param_1,param_2,local_a8,local_68);
      goto LAB_0010117e;
    }
  }
  uVar2 = 0;
LAB_0010117e:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int ASN1_TIME_print(BIO *fp,ASN1_TIME *a)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uchar *puVar5;
  uchar *puVar6;
  long in_FS_OFFSET;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  int local_68;
  int local_64;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ossl_asn1_time_to_tm(&local_78);
  if (iVar1 == 0) {
    BIO_write(fp,"Bad time value",0xe);
    uVar4 = 0;
  }
  else {
    iVar1 = a->length;
    if (((a->type == 0x18) && (0xf < iVar1)) && (a->data[0xe] == '.')) {
      puVar5 = a->data + 0xf;
      puVar6 = puVar5;
      uVar4 = 0;
      do {
        iVar3 = ossl_ascii_isdigit((int)(char)*puVar6);
        if (iVar3 == 0) {
          if (uVar4 == 0) goto LAB_001012a7;
          break;
        }
        uVar2 = uVar4 + 1;
        iVar3 = uVar4 + 0x10;
        puVar6 = puVar6 + 1;
        uVar4 = uVar2;
      } while (iVar3 < iVar1);
      iVar1 = BIO_printf(fp,"%s %2d %02d:%02d:%02d.%.*s %d GMT",_asn1_mon + (long)local_68 * 4,
                         (ulong)local_6c,(ulong)local_70,(ulong)local_74,(ulong)local_78,
                         (ulong)uVar4,puVar5,(ulong)(local_64 + 0x76c));
      uVar4 = (uint)(0 < iVar1);
    }
    else {
LAB_001012a7:
      iVar1 = BIO_printf(fp,"%s %2d %02d:%02d:%02d %d GMT",_asn1_mon + (long)local_68 * 4,
                         (ulong)local_6c,(ulong)local_70,(ulong)local_74,(ulong)local_78,
                         (ulong)(local_64 + 0x76c));
      uVar4 = (uint)(0 < iVar1);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}



bool ASN1_TIME_print_ex(BIO *param_1,int *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  char *pcVar6;
  char *pcVar7;
  long in_FS_OFFSET;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  int local_68;
  int local_64;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ossl_asn1_time_to_tm(&local_78);
  if (iVar1 == 0) {
    bVar5 = false;
    BIO_write(param_1,"Bad time value",0xe);
  }
  else {
    iVar1 = *param_2;
    if (((param_2[1] == 0x18) && (0xf < iVar1)) && (*(char *)(*(long *)(param_2 + 2) + 0xe) == '.'))
    {
      pcVar6 = (char *)(*(long *)(param_2 + 2) + 0xf);
      pcVar7 = pcVar6;
      uVar4 = 0;
      do {
        iVar3 = ossl_ascii_isdigit((int)*pcVar7);
        if (iVar3 == 0) {
          if (uVar4 == 0) goto LAB_00101483;
          break;
        }
        uVar2 = uVar4 + 1;
        iVar3 = uVar4 + 0x10;
        pcVar7 = pcVar7 + 1;
        uVar4 = uVar2;
      } while (iVar3 < iVar1);
      if ((param_3 & 0xf) == 1) {
        iVar1 = BIO_printf(param_1,"%4d-%02d-%02d %02d:%02d:%02d.%.*sZ",(ulong)(local_64 + 0x76c),
                           (ulong)(local_68 + 1),(ulong)local_6c,(ulong)local_70,(ulong)local_74,
                           (ulong)local_78,(ulong)uVar4,pcVar6);
        bVar5 = 0 < iVar1;
      }
      else {
        iVar1 = BIO_printf(param_1,"%s %2d %02d:%02d:%02d.%.*s %d GMT",
                           _asn1_mon + (long)local_68 * 4,(ulong)local_6c,(ulong)local_70,
                           (ulong)local_74,(ulong)local_78,(ulong)uVar4,pcVar6,
                           (ulong)(local_64 + 0x76c));
        bVar5 = 0 < iVar1;
      }
    }
    else {
LAB_00101483:
      if ((param_3 & 0xf) == 1) {
        iVar1 = BIO_printf(param_1,"%4d-%02d-%02d %02d:%02d:%02dZ",(ulong)(local_64 + 0x76c),
                           (ulong)(local_68 + 1),(ulong)local_6c,(ulong)local_70,(ulong)local_74,
                           (ulong)local_78);
        bVar5 = 0 < iVar1;
      }
      else {
        iVar1 = BIO_printf(param_1,"%s %2d %02d:%02d:%02d %d GMT",_asn1_mon + (long)local_68 * 4);
        bVar5 = 0 < iVar1;
      }
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar5;
}



uint ossl_asn1_time_print_ex(BIO *param_1,int *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  long in_FS_OFFSET;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  int local_68;
  int local_64;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ossl_asn1_time_to_tm(&local_78);
  if (iVar1 == 0) {
    iVar1 = BIO_write(param_1,"Bad time value",0xe);
    uVar2 = -(uint)(iVar1 != 0);
  }
  else {
    iVar1 = *param_2;
    if (((param_2[1] == 0x18) && (0xf < iVar1)) && (*(char *)(*(long *)(param_2 + 2) + 0xe) == '.'))
    {
      pcVar5 = (char *)(*(long *)(param_2 + 2) + 0xf);
      pcVar6 = pcVar5;
      uVar2 = 0;
      do {
        iVar4 = ossl_ascii_isdigit((int)*pcVar6);
        if (iVar4 == 0) {
          if (uVar2 == 0) goto LAB_001016e3;
          break;
        }
        uVar3 = uVar2 + 1;
        iVar4 = uVar2 + 0x10;
        pcVar6 = pcVar6 + 1;
        uVar2 = uVar3;
      } while (iVar4 < iVar1);
      if ((param_3 & 0xf) == 1) {
        iVar1 = BIO_printf(param_1,"%4d-%02d-%02d %02d:%02d:%02d.%.*sZ",(ulong)(local_64 + 0x76c),
                           (ulong)(local_68 + 1),(ulong)local_6c,(ulong)local_70,(ulong)local_74,
                           (ulong)local_78,(ulong)uVar2,pcVar5);
        uVar2 = (uint)(0 < iVar1);
      }
      else {
        iVar1 = BIO_printf(param_1,"%s %2d %02d:%02d:%02d.%.*s %d GMT",
                           _asn1_mon + (long)local_68 * 4,(ulong)local_6c,(ulong)local_70,
                           (ulong)local_74,(ulong)local_78,(ulong)uVar2,pcVar5,
                           (ulong)(local_64 + 0x76c));
        uVar2 = (uint)(0 < iVar1);
      }
    }
    else {
LAB_001016e3:
      if ((param_3 & 0xf) == 1) {
        iVar1 = BIO_printf(param_1,"%4d-%02d-%02d %02d:%02d:%02dZ",(ulong)(local_64 + 0x76c),
                           (ulong)(local_68 + 1),(ulong)local_6c,(ulong)local_70,(ulong)local_74,
                           (ulong)local_78);
        uVar2 = (uint)(0 < iVar1);
      }
      else {
        iVar1 = BIO_printf(param_1,"%s %2d %02d:%02d:%02d %d GMT",_asn1_mon + (long)local_68 * 4);
        uVar2 = (uint)(0 < iVar1);
      }
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



int ASN1_TIME_cmp_time_t(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long in_FS_OFFSET;
  undefined8 local_b0 [2];
  int local_a0;
  int local_9c;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined8 local_68;
  time_t local_58 [7];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_b0[0] = param_2;
  if (param_1 == 0) {
    time(local_58);
    local_68 = 0;
    local_98 = (undefined1  [16])0x0;
    local_88 = (undefined1  [16])0x0;
    local_78 = (undefined1  [16])0x0;
    lVar2 = OPENSSL_gmtime(local_58,local_98);
    if (lVar2 != 0) goto LAB_0010191b;
  }
  else {
    iVar1 = ossl_asn1_time_to_tm(local_98,param_1);
    if (iVar1 != 0) {
LAB_0010191b:
      lVar2 = OPENSSL_gmtime(local_b0,local_58);
      if ((lVar2 != 0) &&
         (iVar1 = OPENSSL_gmtime_diff(&local_a0,&local_9c,local_58,local_98), iVar1 != 0)) {
        iVar1 = 1;
        if ((local_a0 < 1) && (local_9c < 1)) {
          iVar1 = -(uint)(local_a0 != 0 || local_9c != 0);
        }
        goto LAB_0010196c;
      }
    }
  }
  iVar1 = -2;
LAB_0010196c:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}



undefined8 ASN1_TIME_normalize(ASN1_STRING *param_1)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  char *format;
  int iVar4;
  long in_FS_OFFSET;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  int local_48;
  int local_44;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != (ASN1_STRING *)0x0) {
    iVar1 = ossl_asn1_time_to_tm(&local_58);
    if (iVar1 != 0) {
      iVar4 = (99 < local_44 - 0x32U) + 0x17;
      iVar1 = ASN1_STRING_set(param_1,(void *)0x0,0x14);
      if (iVar1 != 0) {
        param_1->type = iVar4;
        if (local_48 != 0x7fffffff) {
          if (iVar4 == 0x18) {
            if (0x7ffff893 < local_44) goto LAB_00101a13;
            uVar3 = local_44 + 0x76c;
            format = "%04d%02d%02d%02d%02d%02dZ";
          }
          else {
            format = "%02d%02d%02d%02d%02d%02dZ";
            uVar3 = local_44 % 100;
          }
          iVar1 = BIO_snprintf((char *)param_1->data,0x14,format,(ulong)uVar3,(ulong)(local_48 + 1),
                               (ulong)local_4c,(ulong)local_50,(ulong)local_54,(ulong)local_58);
          param_1->length = iVar1;
          uVar2 = 1;
          goto LAB_00101a15;
        }
      }
    }
  }
LAB_00101a13:
  uVar2 = 0;
LAB_00101a15:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int ASN1_TIME_compare(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long in_FS_OFFSET;
  int local_a4;
  time_t local_a0;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == 0) {
    time((time_t *)local_58);
    local_68 = 0;
    local_98 = (undefined1  [16])0x0;
    local_88 = (undefined1  [16])0x0;
    local_78 = (undefined1  [16])0x0;
    lVar2 = OPENSSL_gmtime(local_58,local_98);
    if (lVar2 != 0) {
      if (param_1 != 0) goto LAB_00101b69;
LAB_00101bf7:
      time(&local_a0);
      local_28 = 0;
      local_58 = (undefined1  [16])0x0;
      local_48 = (undefined1  [16])0x0;
      local_38 = (undefined1  [16])0x0;
      lVar2 = OPENSSL_gmtime(&local_a0,local_58);
      if (lVar2 != 0) {
LAB_00101c37:
        iVar1 = OPENSSL_gmtime_diff(&local_a4,&local_a0,local_98,local_58);
        if (iVar1 != 0) {
          iVar1 = 1;
          if ((local_a4 < 1) && ((int)local_a0 < 1)) {
            iVar1 = -(uint)(local_a4 != 0 || (int)local_a0 != 0);
          }
          goto LAB_00101b88;
        }
      }
    }
  }
  else {
    iVar1 = ossl_asn1_time_to_tm(local_98);
    if (iVar1 != 0) {
      if (param_1 == 0) goto LAB_00101bf7;
LAB_00101b69:
      iVar1 = ossl_asn1_time_to_tm(local_58,param_1);
      if (iVar1 != 0) goto LAB_00101c37;
    }
  }
  iVar1 = -2;
LAB_00101b88:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}


