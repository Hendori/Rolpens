
undefined1 * ASN1_TIME_it(void)

{
  return local_it_5;
}



ASN1_TIME * d2i_ASN1_TIME(ASN1_TIME **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  ASN1_TIME *pAVar1;
  
  it = (ASN1_ITEM *)ASN1_TIME_it();
  pAVar1 = (ASN1_TIME *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pAVar1;
}



int i2d_ASN1_TIME(ASN1_TIME *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)ASN1_TIME_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ASN1_TIME * ASN1_TIME_new(void)

{
  ASN1_ITEM *it;
  ASN1_TIME *pAVar1;
  
  it = (ASN1_ITEM *)ASN1_TIME_it();
  pAVar1 = (ASN1_TIME *)ASN1_item_new(it);
  return pAVar1;
}



void ASN1_TIME_free(ASN1_TIME *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)ASN1_TIME_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}



void ASN1_TIME_dup(void *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)ASN1_TIME_it();
  ASN1_item_dup(it,param_1);
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
LAB_00100131:
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
           ((0x800000000005U >> ((ulong)(uVar16 - 0x2b) & 0x3f) & 1) != 0)) goto LAB_00100287;
        iVar5 = ossl_ascii_isdigit();
        if (((iVar5 == 0) || (cVar1 = *(char *)(lVar3 + uVar9 * 2), iVar2 == iVar11 + 1)) ||
           (iVar5 = ossl_ascii_isdigit((int)*(char *)(lVar3 + 1 + uVar9 * 2)), iVar5 == 0))
        goto LAB_001002a0;
        iVar11 = iVar11 + 2;
        iVar7 = (int)*(char *)(lVar3 + 1 + uVar9 * 2) + (cVar1 + -0x30) * 10;
        iVar6 = iVar7 + -0x30;
        if (iVar2 == iVar11) goto LAB_001002a0;
        iVar5 = param_2[1];
        uVar14 = (ulong)((int)uVar9 + 1);
        if (iVar5 != 0x17) {
          uVar14 = uVar9 & 0xffffffff;
        }
        if ((iVar6 < *(int *)(min_4 + (long)(int)uVar14 * 4)) ||
           (*(int *)(max_3 + (long)(int)uVar14 * 4) < iVar6)) goto LAB_001002a0;
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
            if (iVar13 < iVar6) goto LAB_001002a0;
            iVar7 = iVar7 + -0x12;
LAB_001004d3:
            uVar16 = local_68._4_4_ + 0x76b;
            iVar19 = local_68._0_4_ + 0xe;
            iVar13 = (int)uVar16 % 100;
          }
          else {
            if (*(int *)(mdays_2 + (long)(int)local_68._0_4_ * 4) < iVar6) goto LAB_001002a0;
            uVar16 = local_68._4_4_ + 0x76c;
            iVar7 = *(int *)(ydays_1 + (long)(int)local_68._0_4_ * 4) + iVar6 + -1;
            if ((int)local_68._0_4_ < 2) goto LAB_001004d3;
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
LAB_00100287:
      if ((iVar5 == 0x18) && ((char)uVar16 == '.')) {
        if (((uVar15 == 0) && (iVar5 = iVar11 + 1, iVar2 != iVar5)) && (iVar5 < iVar2)) {
          pcVar10 = (char *)(iVar5 + lVar3);
          iVar11 = iVar5;
          do {
            iVar7 = ossl_ascii_isdigit((int)*pcVar10);
            if (iVar7 == 0) {
              if ((iVar2 != iVar11) && (iVar5 != iVar11)) {
                uVar16 = (uint)*(byte *)(lVar3 + iVar11);
                if (*(byte *)(lVar3 + iVar11) != 0x5a) goto LAB_00100520;
                goto LAB_00100700;
              }
              break;
            }
            iVar11 = iVar11 + 1;
            pcVar10 = pcVar10 + 1;
          } while (iVar2 != iVar11);
        }
      }
      else if ((char)uVar16 == 'Z') {
LAB_00100700:
        iVar11 = iVar11 + 1;
LAB_00100704:
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
          goto LAB_001002a2;
        }
      }
      else if (uVar15 == 0) {
LAB_00100520:
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
                goto LAB_00100704;
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
    goto LAB_00100131;
  }
LAB_001002a0:
  uVar8 = 0;
LAB_001002a2:
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
      if (param_2[5] - 0x32 < 100) goto LAB_001007d3;
    }
    else if (param_3 == 0x18) {
LAB_001007d3:
      if (param_1 == (ASN1_STRING *)0x0) goto LAB_001008bb;
      goto LAB_001007dc;
    }
    if (param_1 == (ASN1_STRING *)0x0) {
      return (ASN1_STRING *)0x0;
    }
    param_1 = (ASN1_STRING *)0x0;
LAB_00100832:
    ASN1_STRING_free(param_1);
    return (ASN1_STRING *)0x0;
  }
  param_3 = (99 < param_2[5] - 0x32) + 0x17;
  if (param_1 == (ASN1_STRING *)0x0) {
LAB_001008bb:
    param_1 = ASN1_STRING_new();
    if (param_1 == (ASN1_STRING *)0x0) {
      return (ASN1_STRING *)0x0;
    }
    iVar5 = ASN1_STRING_set(param_1,(void *)0x0,0x14);
    if (iVar5 == 0) goto LAB_00100832;
    uVar7 = param_2[4];
    buf = param_1->data;
    param_1->type = param_3;
    if (uVar7 == 0x7fffffff) goto LAB_00100832;
    uVar6 = param_2[5];
    if (param_3 == 0x18) {
      if (0x7ffff893 < (int)uVar6) goto LAB_00100832;
      goto LAB_00100915;
    }
  }
  else {
LAB_001007dc:
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
LAB_00100915:
      uVar1 = *param_2;
      uVar6 = uVar6 + 0x76c;
      format = "%04d%02d%02d%02d%02d%02dZ";
      uVar2 = param_2[1];
      uVar3 = param_2[2];
      uVar4 = param_2[3];
      goto LAB_0010087f;
    }
  }
  format = "%02d%02d%02d%02d%02d%02dZ";
  uVar6 = (int)uVar6 % 100;
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
LAB_0010087f:
  iVar5 = BIO_snprintf((char *)buf,0x14,format,(ulong)uVar6,(ulong)(uVar7 + 1),(ulong)uVar4,
                       (ulong)uVar3,(ulong)uVar2,(ulong)uVar1);
  param_1->length = iVar5;
  return param_1;
}



ASN1_TIME * ASN1_TIME_adj(ASN1_TIME *s,time_t t,int offset_day,long offset_sec)

{
  int iVar1;
  long lVar2;
  ASN1_TIME *pAVar3;
  long in_FS_OFFSET;
  time_t local_70;
  undefined1 local_68 [56];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = t;
  lVar2 = OPENSSL_gmtime(&local_70,local_68);
  if (lVar2 == 0) {
    ERR_new();
    ERR_set_debug("crypto/asn1/a_time.c",0x150,"ASN1_TIME_adj");
    ERR_set_error(0xd,0xad,0);
    pAVar3 = (ASN1_TIME *)0x0;
  }
  else {
    if ((offset_day != 0) || (offset_sec != 0)) {
      iVar1 = OPENSSL_gmtime_adj(lVar2,offset_day,offset_sec);
      if (iVar1 == 0) {
        pAVar3 = (ASN1_TIME *)0x0;
        goto LAB_001009ab;
      }
    }
    pAVar3 = (ASN1_TIME *)ossl_asn1_time_from_tm(s,lVar2,0xffffffff);
  }
LAB_001009ab:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pAVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ASN1_TIME * ASN1_TIME_set(ASN1_TIME *s,time_t t)

{
  ASN1_TIME *pAVar1;
  
  pAVar1 = ASN1_TIME_adj(s,t,0,0);
  return pAVar1;
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
  ASN1_TIME local_78;
  undefined1 local_58 [20];
  int local_44;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  sVar2 = strlen((char *)param_2);
  local_78.length = (int)sVar2;
  local_78.flags = 0x100;
  local_78.type = 0x17;
  local_78.data = param_2;
  iVar1 = ASN1_TIME_check(&local_78);
  if (iVar1 == 0) {
    local_78.type = 0x18;
    iVar1 = ASN1_TIME_check(&local_78);
    if (iVar1 != 0) goto LAB_00100b06;
    goto LAB_00100be8;
  }
LAB_00100b06:
  if (param_1 == (ASN1_STRING *)0x0) {
    bVar3 = true;
  }
  else {
    if (local_78.type == 0x18) {
      iVar1 = ossl_asn1_time_to_tm(local_58,&local_78);
      if (iVar1 == 0) {
LAB_00100be8:
        bVar3 = false;
        goto LAB_00100b44;
      }
      if (local_44 - 0x32U < 100) {
        iVar1 = local_78.length + -1;
        local_78.length = local_78.length + -2;
        local_78.data = (uchar *)CRYPTO_zalloc((long)iVar1,"crypto/asn1/a_time.c",0x1aa);
        if (local_78.data == (uchar *)0x0) goto LAB_00100be8;
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
LAB_00100b44:
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



ASN1_GENERALIZEDTIME * ASN1_TIME_to_generalizedtime(ASN1_TIME *t,ASN1_GENERALIZEDTIME **out)

{
  int iVar1;
  ASN1_GENERALIZEDTIME *pAVar2;
  long in_FS_OFFSET;
  undefined1 auStack_58 [56];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ASN1_TIME_to_tm(t,auStack_58);
  if (iVar1 == 0) {
    pAVar2 = (ASN1_GENERALIZEDTIME *)0x0;
  }
  else if (out == (ASN1_GENERALIZEDTIME **)0x0) {
    pAVar2 = (ASN1_GENERALIZEDTIME *)ossl_asn1_time_from_tm(0,auStack_58,0x18);
  }
  else {
    pAVar2 = (ASN1_GENERALIZEDTIME *)ossl_asn1_time_from_tm(*out,auStack_58,0x18);
    if (pAVar2 != (ASN1_GENERALIZEDTIME *)0x0) {
      *out = pAVar2;
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pAVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8
ASN1_TIME_diff(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined1 auStack_a8 [64];
  undefined1 local_68 [56];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ASN1_TIME_to_tm(param_3,auStack_a8);
  if (iVar1 != 0) {
    iVar1 = ASN1_TIME_to_tm(param_4,local_68);
    if (iVar1 != 0) {
      uVar2 = OPENSSL_gmtime_diff(param_1,param_2,auStack_a8,local_68);
      goto LAB_00100d6d;
    }
  }
  uVar2 = 0;
LAB_00100d6d:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
          if (uVar2 == 0) goto LAB_00100e33;
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
LAB_00100e33:
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



bool ASN1_TIME_print_ex(void)

{
  int iVar1;
  
  iVar1 = ossl_asn1_time_print_ex();
  return 0 < iVar1;
}



int ASN1_TIME_print(BIO *fp,ASN1_TIME *a)

{
  int iVar1;
  
  iVar1 = ASN1_TIME_print_ex(fp,a,0);
  return iVar1;
}



int ASN1_TIME_cmp_time_t(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long in_FS_OFFSET;
  undefined8 local_b0 [2];
  int local_a0;
  int local_9c;
  undefined1 local_98 [64];
  undefined1 local_58 [56];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_b0[0] = param_2;
  iVar1 = ASN1_TIME_to_tm(param_1,local_98);
  if (iVar1 != 0) {
    lVar2 = OPENSSL_gmtime(local_b0,local_58);
    if (lVar2 != 0) {
      iVar1 = OPENSSL_gmtime_diff(&local_a0,&local_9c,local_58,local_98);
      if (iVar1 != 0) {
        iVar1 = 1;
        if ((local_a0 < 1) && (local_9c < 1)) {
          iVar1 = -(uint)(local_a0 != 0 || local_9c != 0);
        }
        goto LAB_001010d4;
      }
    }
  }
  iVar1 = -2;
LAB_001010d4:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool ASN1_TIME_normalize(long param_1)

{
  int iVar1;
  long lVar2;
  long in_FS_OFFSET;
  bool bVar3;
  undefined1 auStack_58 [56];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != 0) {
    iVar1 = ASN1_TIME_to_tm(param_1,auStack_58);
    if (iVar1 != 0) {
      lVar2 = ossl_asn1_time_from_tm(param_1,auStack_58,0xffffffff);
      bVar3 = lVar2 != 0;
      goto LAB_00101143;
    }
  }
  bVar3 = false;
LAB_00101143:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int ASN1_TIME_compare(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long in_FS_OFFSET;
  int local_18;
  int local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ASN1_TIME_diff(&local_18,&local_14,param_2,param_1);
  if (iVar1 == 0) {
    iVar1 = -2;
  }
  else {
    iVar1 = 1;
    if ((local_18 < 1) && (local_14 < 1)) {
      iVar1 = -(uint)(local_18 != 0 || local_14 != 0);
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


