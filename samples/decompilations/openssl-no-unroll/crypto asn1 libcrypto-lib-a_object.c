
int i2d_ASN1_OBJECT(ASN1_OBJECT *a,uchar **pp)

{
  int num;
  uchar *puVar1;
  long in_FS_OFFSET;
  uchar *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((a == (ASN1_OBJECT *)0x0) || (a->data == (uchar *)0x0)) {
LAB_001000b0:
    num = 0;
  }
  else {
    num = ASN1_object_size(0,a->length,6);
    if ((pp == (uchar **)0x0) || (num == -1)) goto LAB_0010008f;
    local_38 = *pp;
    if (local_38 == (uchar *)0x0) {
      puVar1 = (uchar *)CRYPTO_malloc(num,"crypto/asn1/a_object.c",0x22);
      local_38 = puVar1;
      if (puVar1 == (uchar *)0x0) goto LAB_001000b0;
      ASN1_put_object(&local_38,0,a->length,6,0);
      memcpy(local_38,a->data,(long)a->length);
    }
    else {
      ASN1_put_object(&local_38,0,a->length,6,0);
      memcpy(local_38,a->data,(long)a->length);
      puVar1 = local_38 + a->length;
    }
    *pp = puVar1;
  }
LAB_0010008f:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return num;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int a2d_ASN1_OBJECT(uchar *out,int olen,char *buf,int num)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  size_t sVar6;
  BIGNUM *a;
  byte *pbVar7;
  byte *pbVar8;
  int iVar9;
  int iVar10;
  byte *pbVar11;
  char *pcVar12;
  ulong uVar13;
  ulong uVar14;
  long in_FS_OFFSET;
  byte *local_88;
  int local_78;
  byte *local_70;
  uint local_68;
  int local_64;
  byte local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (num != 0) {
    if (num == -1) {
      sVar6 = strlen(buf);
      num = (int)sVar6;
      local_68 = (int)*buf - 0x30;
      if (2 < local_68) goto LAB_001003a3;
LAB_00100164:
      if (num < 2) {
        ERR_new();
        a = (BIGNUM *)0x0;
        ERR_set_debug("crypto/asn1/a_object.c",0x4c,"a2d_ASN1_OBJECT");
        ERR_set_error(0xd,0x8a,0);
      }
      else {
        a = (BIGNUM *)0x0;
        iVar4 = num + -2;
        pcVar12 = buf + 2;
        local_78 = iVar4;
        if (iVar4 == 0) {
LAB_00100636:
          BN_free(a);
          goto LAB_0010035e;
        }
        if ((buf[1] == '.') || (buf[1] == ' ')) {
          local_64 = 0x18;
          local_78 = 0;
          local_88 = local_58;
          do {
            uVar14 = 0;
            bVar3 = false;
            do {
              while( true ) {
                iVar10 = (int)*pcVar12;
                pcVar12 = pcVar12 + 1;
                iVar4 = iVar4 + -1;
                if ((iVar10 == 0x20) || (iVar10 == 0x2e)) goto LAB_00100270;
                iVar5 = ossl_isdigit(iVar10);
                if (iVar5 == 0) {
                  ERR_new();
                  ERR_set_debug("crypto/asn1/a_object.c",0x62,"a2d_ASN1_OBJECT");
                  ERR_set_error(0xd,0x82,0);
                  goto LAB_00100330;
                }
                if (!bVar3) break;
LAB_001001dc:
                iVar5 = BN_mul_word(a,10);
                if ((iVar5 == 0) || (iVar5 = BN_add_word(a,(long)(iVar10 + -0x30)), iVar5 == 0))
                goto LAB_00100330;
                bVar3 = true;
                if (iVar4 == 0) goto LAB_00100270;
              }
              if (0x1999999999999990 < uVar14) {
                if (((a != (BIGNUM *)0x0) || (a = BN_new(), a != (BIGNUM *)0x0)) &&
                   (iVar5 = BN_set_word(a,uVar14), iVar5 != 0)) goto LAB_001001dc;
                goto LAB_00100330;
              }
              uVar14 = (long)(iVar10 + -0x30) + uVar14 * 10;
            } while (iVar4 != 0);
LAB_00100270:
            if (local_78 == 0) {
              if (((int)local_68 < 2) && (0x27 < uVar14)) {
                ERR_new();
                ERR_set_debug("crypto/asn1/a_object.c",0x75,"a2d_ASN1_OBJECT");
                ERR_set_error(0xd,0x93,0);
                goto LAB_00100330;
              }
              if (!bVar3) {
                uVar14 = uVar14 + (long)(int)local_68 * 0x28;
                goto LAB_001002a3;
              }
              iVar5 = BN_add_word(a,(long)(int)(local_68 * 0x28));
              if (iVar5 == 0) goto LAB_00100330;
LAB_00100409:
              iVar5 = BN_num_bits(a);
              uVar2 = (iVar5 + 6) / 7;
              if (local_64 < (int)uVar2) {
                if (local_88 != local_58) {
                  CRYPTO_free(local_88);
                }
                local_64 = uVar2 + 0x20;
                local_88 = (byte *)CRYPTO_malloc(local_64,"crypto/asn1/a_object.c",0x87);
                if (local_88 == (byte *)0x0) goto LAB_00100342;
              }
              uVar14 = 0;
              if (uVar2 != 0) {
                do {
                  uVar13 = uVar14;
                  uVar14 = BN_div_word(a,0x80);
                  if (uVar14 == 0xffffffffffffffff) goto LAB_00100330;
                  local_88[uVar13] = (byte)uVar14;
                  uVar14 = uVar13 + 1;
                } while (uVar13 + 1 != (ulong)uVar2);
                iVar9 = (int)uVar13;
                iVar5 = local_78 + 1 + iVar9;
                goto LAB_001002cf;
              }
              iVar5 = local_78;
              if (out != (uchar *)0x0) {
                if (olen < local_78) goto LAB_00100670;
                goto LAB_001005ae;
              }
            }
            else {
              if (bVar3) goto LAB_00100409;
LAB_001002a3:
              pbVar7 = local_88;
              iVar5 = 0;
              do {
                iVar9 = iVar5;
                *pbVar7 = (byte)uVar14 & 0x7f;
                uVar14 = uVar14 >> 7;
                pbVar7 = pbVar7 + 1;
                iVar5 = iVar9 + 1;
              } while (uVar14 != 0);
              iVar5 = iVar9 + 1 + local_78;
LAB_001002cf:
              if (out != (uchar *)0x0) {
                if (olen < iVar5) {
LAB_00100670:
                  ERR_new();
                  ERR_set_debug("crypto/asn1/a_object.c",0x9d,"a2d_ASN1_OBJECT");
                  ERR_set_error(0xd,0x6b,0);
                  goto LAB_00100330;
                }
                if (iVar9 != 0) {
                  pbVar11 = local_88 + iVar9;
                  pbVar7 = out + local_78;
                  do {
                    bVar1 = *pbVar11;
                    pbVar8 = pbVar7 + 1;
                    pbVar11 = pbVar11 + -1;
                    *pbVar7 = bVar1 | 0x80;
                    pbVar7 = pbVar8;
                  } while (pbVar8 != out + (ulong)(iVar9 - 1U) + (long)local_78 + 1);
                  local_78 = local_78 + 1 + (iVar9 - 1U);
                }
LAB_001005ae:
                out[local_78] = *local_88;
                iVar5 = local_78 + 1;
              }
            }
            local_78 = iVar5;
            if (iVar4 == 0) {
              if (local_88 != local_58) {
                CRYPTO_free(local_88);
              }
              goto LAB_00100636;
            }
          } while ((iVar10 == 0x2e) || (iVar10 == 0x20));
        }
        else {
          local_88 = local_58;
        }
        ERR_new();
        ERR_set_debug("crypto/asn1/a_object.c",0x55,"a2d_ASN1_OBJECT");
        ERR_set_error(0xd,0x83,0);
LAB_00100330:
        local_70 = local_58;
        if (local_88 != local_70) {
LAB_00100342:
          CRYPTO_free(local_88);
        }
      }
    }
    else {
      local_68 = (int)*buf - 0x30;
      if (local_68 < 3) goto LAB_00100164;
LAB_001003a3:
      ERR_new();
      a = (BIGNUM *)0x0;
      ERR_set_debug("crypto/asn1/a_object.c",0x47,"a2d_ASN1_OBJECT");
      ERR_set_error(0xd,0x7a,0);
    }
    BN_free(a);
  }
  local_78 = 0;
LAB_0010035e:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_78;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int i2t_ASN1_OBJECT(char *buf,int buf_len,ASN1_OBJECT *a)

{
  int iVar1;
  
  iVar1 = OBJ_obj2txt(buf,buf_len,a,0);
  return iVar1;
}



int i2a_ASN1_OBJECT(BIO *bp,ASN1_OBJECT *a)

{
  int iVar1;
  int iVar2;
  char *buf;
  long in_FS_OFFSET;
  char acStack_98 [88];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((a == (ASN1_OBJECT *)0x0) || (a->data == (uchar *)0x0)) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      iVar1 = BIO_write(bp,&_LC1,4);
      return iVar1;
    }
    goto LAB_0010089a;
  }
  iVar1 = i2t_ASN1_OBJECT(acStack_98,0x50,a);
  if (iVar1 < 0x50) {
    if (iVar1 < 1) {
      iVar1 = BIO_write(bp,"<INVALID>",9);
      if (0 < iVar1) {
        iVar2 = BIO_dump(bp,(char *)a->data,a->length);
        iVar1 = iVar1 + iVar2;
      }
    }
    else {
      BIO_write(bp,acStack_98,iVar1);
    }
  }
  else {
    if (iVar1 == 0x7fffffff) {
      ERR_new();
      ERR_set_debug("crypto/asn1/a_object.c",0xc0,"i2a_ASN1_OBJECT");
      ERR_set_error(0xd,0xe7,0);
    }
    else {
      buf = (char *)CRYPTO_malloc(iVar1 + 1,"crypto/asn1/a_object.c",0xc3);
      if (buf != (char *)0x0) {
        i2t_ASN1_OBJECT(buf,iVar1 + 1,a);
        BIO_write(bp,buf,iVar1);
        CRYPTO_free(buf);
        goto LAB_001007b7;
      }
    }
    iVar1 = -1;
  }
LAB_001007b7:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
LAB_0010089a:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ASN1_OBJECT * ASN1_OBJECT_new(void)

{
  ASN1_OBJECT *pAVar1;
  
  pAVar1 = (ASN1_OBJECT *)CRYPTO_zalloc(0x28,"crypto/asn1/a_object.c",0x154);
  if (pAVar1 != (ASN1_OBJECT *)0x0) {
    pAVar1->flags = 1;
  }
  return pAVar1;
}



void ASN1_OBJECT_free(ASN1_OBJECT *a)

{
  uint uVar1;
  
  if (a == (ASN1_OBJECT *)0x0) {
    return;
  }
  uVar1 = a->flags;
  if ((uVar1 & 4) != 0) {
    CRYPTO_free(a->sn);
    CRYPTO_free(a->ln);
    uVar1 = a->flags;
    a->sn = (char *)0x0;
    a->ln = (char **)0x0;
  }
  if ((uVar1 & 8) != 0) {
    CRYPTO_free(a->data);
    uVar1 = a->flags;
    a->data = (uchar *)0x0;
    a->length = 0;
  }
  if ((uVar1 & 1) != 0) {
    CRYPTO_free(a);
    return;
  }
  return;
}



ASN1_OBJECT * ossl_c2i_ASN1_OBJECT(long *param_1,long *param_2,size_t param_3)

{
  void *__src;
  int iVar1;
  ASN1_OBJECT *pAVar2;
  ASN1_OBJECT *a;
  int num;
  uchar *puVar3;
  uchar *puVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  ASN1_OBJECT local_68;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((((param_2 == (long *)0x0) || (0x7ffffffe < param_3 - 1)) ||
      (puVar4 = (uchar *)*param_2, puVar4 == (uchar *)0x0)) || ((char)puVar4[param_3 - 1] < '\0')) {
    ERR_new();
    uVar5 = 0xfe;
  }
  else {
    num = (int)param_3;
    local_68.nid = 0;
    local_68.flags = 0;
    local_68.length = num;
    local_68.data = puVar4;
    iVar1 = OBJ_obj2nid(&local_68);
    if (iVar1 != 0) {
      pAVar2 = OBJ_nid2obj(iVar1);
      if (param_1 != (long *)0x0) {
        ASN1_OBJECT_free((ASN1_OBJECT *)*param_1);
        *param_1 = (long)pAVar2;
      }
      *param_2 = *param_2 + param_3;
      goto LAB_00100a37;
    }
    iVar1 = 0;
    if (*puVar4 != 0x80) {
      do {
        puVar3 = puVar4;
        iVar1 = iVar1 + 1;
        puVar4 = puVar3 + 1;
        if (num <= iVar1) {
          if ((((param_1 == (long *)0x0) || (a = (ASN1_OBJECT *)*param_1, a == (ASN1_OBJECT *)0x0))
              || ((a->flags & 1) == 0)) && (a = ASN1_OBJECT_new(), a == (ASN1_OBJECT *)0x0))
          goto LAB_00100a90;
          __src = (void *)*param_2;
          puVar4 = a->data;
          a->data = (uchar *)0x0;
          if ((puVar4 == (uchar *)0x0) || (a->length < num)) {
            a->length = 0;
            CRYPTO_free(puVar4);
            puVar4 = (uchar *)CRYPTO_malloc(num,"crypto/asn1/a_object.c",0x131);
            if (puVar4 == (uchar *)0x0) {
              ERR_new();
              ERR_set_debug("crypto/asn1/a_object.c",0x14a,"ossl_c2i_ASN1_OBJECT");
              ERR_set_error(0xd,iVar1,0);
              if ((param_1 != (long *)0x0) && ((ASN1_OBJECT *)*param_1 == a)) goto LAB_00100a90;
              pAVar2 = (ASN1_OBJECT *)0x0;
              ASN1_OBJECT_free(a);
              goto LAB_00100a37;
            }
            a->flags = a->flags | 8;
          }
          memcpy(puVar4,__src,param_3);
          if ((a->flags & 4) != 0) {
            CRYPTO_free(a->sn);
            CRYPTO_free(a->ln);
            a->flags = a->flags & 0xfffffffb;
          }
          a->data = puVar4;
          a->length = num;
          a->sn = (char *)0x0;
          a->ln = (char **)0x0;
          if (param_1 != (long *)0x0) {
            *param_1 = (long)a;
          }
          *param_2 = (long)__src + param_3;
          pAVar2 = a;
          goto LAB_00100a37;
        }
      } while ((*puVar4 != 0x80) || ((char)*puVar3 < '\0'));
    }
    ERR_new();
    uVar5 = 0x11c;
  }
  ERR_set_debug("crypto/asn1/a_object.c",uVar5,"ossl_c2i_ASN1_OBJECT");
  ERR_set_error(0xd,0xd8,0);
LAB_00100a90:
  pAVar2 = (ASN1_OBJECT *)0x0;
LAB_00100a37:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pAVar2;
}



ASN1_OBJECT * d2i_ASN1_OBJECT(ASN1_OBJECT **a,uchar **pp,long length)

{
  uint uVar1;
  ASN1_OBJECT *pAVar2;
  undefined4 uVar3;
  long in_FS_OFFSET;
  int local_38;
  int local_34;
  uchar *local_30;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = *pp;
  uVar1 = ASN1_get_object(&local_30,&local_28,&local_38,&local_34,length);
  if ((uVar1 & 0x80) == 0) {
    if (local_38 == 6) {
      pAVar2 = (ASN1_OBJECT *)ossl_c2i_ASN1_OBJECT(a,&local_30,local_28);
      if (pAVar2 != (ASN1_OBJECT *)0x0) {
        *pp = local_30;
      }
      goto LAB_00100c7c;
    }
    uVar3 = 0x74;
  }
  else {
    uVar3 = 0x66;
  }
  ERR_new();
  ERR_set_debug("crypto/asn1/a_object.c",0xeb,"d2i_ASN1_OBJECT");
  ERR_set_error(0xd,uVar3,0);
  pAVar2 = (ASN1_OBJECT *)0x0;
LAB_00100c7c:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pAVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ASN1_OBJECT * ASN1_OBJECT_create(int nid,uchar *data,int len,char *sn,char *ln)

{
  ASN1_OBJECT *pAVar1;
  long in_FS_OFFSET;
  ASN1_OBJECT local_38;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_38.flags = 0xd;
  local_38.sn = sn;
  local_38.ln = (char **)ln;
  local_38.nid = nid;
  local_38.length = len;
  local_38.data = data;
  pAVar1 = OBJ_dup(&local_38);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pAVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


