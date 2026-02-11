
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
  bool bVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  BIGNUM *a;
  size_t sVar7;
  uchar *ptr;
  byte *pbVar8;
  byte *pbVar9;
  int iVar10;
  int iVar11;
  byte *pbVar12;
  char *pcVar13;
  ulong uVar14;
  long in_FS_OFFSET;
  int local_70;
  uchar *local_68;
  uint local_60;
  int local_5c;
  uchar local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (num != 0) {
    if (num == -1) {
      sVar7 = strlen(buf);
      num = (int)sVar7;
      local_60 = (int)*buf - 0x30;
      if (2 < local_60) goto LAB_001003cb;
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
        pcVar13 = buf + 2;
        local_70 = iVar4;
        if (iVar4 == 0) {
LAB_0010067b:
          BN_free(a);
          goto LAB_00100389;
        }
        if ((buf[1] == '.') || (buf[1] == ' ')) {
          local_5c = 0x18;
          local_70 = 0;
          ptr = local_58;
          do {
            uVar14 = 0;
            bVar2 = false;
LAB_00100212:
            do {
              iVar11 = (int)*pcVar13;
              pcVar13 = pcVar13 + 1;
              iVar4 = iVar4 + -1;
              if ((iVar11 == 0x20) || (iVar11 == 0x2e)) break;
              iVar5 = ossl_isdigit(iVar11);
              if (iVar5 == 0) {
                ERR_new();
                ERR_set_debug("crypto/asn1/a_object.c",0x62,"a2d_ASN1_OBJECT");
                ERR_set_error(0xd,0x82,0);
                goto LAB_0010035d;
              }
              if (!bVar2) {
                if (uVar14 < 0x1999999999999991) {
                  uVar14 = (long)(iVar11 + -0x30) + uVar14 * 10;
                  if (iVar4 == 0) break;
                  goto LAB_00100212;
                }
                if (((a == (BIGNUM *)0x0) && (a = BN_new(), a == (BIGNUM *)0x0)) ||
                   (iVar5 = BN_set_word(a,uVar14), iVar5 == 0)) goto LAB_0010035d;
              }
              iVar5 = BN_mul_word(a,10);
              if ((iVar5 == 0) || (iVar5 = BN_add_word(a,(long)(iVar11 + -0x30)), iVar5 == 0))
              goto LAB_0010035d;
              bVar2 = true;
            } while (iVar4 != 0);
            if (local_70 == 0) {
              if (((int)local_60 < 2) && (0x27 < uVar14)) {
                ERR_new();
                ERR_set_debug("crypto/asn1/a_object.c",0x75,"a2d_ASN1_OBJECT");
                ERR_set_error(0xd,0x93,0);
                goto LAB_0010035d;
              }
              if (!bVar2) {
                uVar14 = uVar14 + (long)(int)local_60 * 0x28;
                goto LAB_001002a8;
              }
              iVar5 = BN_add_word(a,(long)(int)(local_60 * 0x28));
              if (iVar5 == 0) goto LAB_0010035d;
LAB_00100411:
              iVar5 = BN_num_bits(a);
              iVar5 = (iVar5 + 6) / 7;
              if (local_5c < iVar5) {
                if (ptr != local_58) {
                  CRYPTO_free(ptr);
                }
                local_5c = iVar5 + 0x20;
                ptr = (uchar *)CRYPTO_malloc(local_5c,"crypto/asn1/a_object.c",0x87);
                if (ptr == (uchar *)0x0) goto LAB_0010036e;
              }
              iVar10 = local_70;
              if (iVar5 != 0) {
                lVar3 = 1;
                do {
                  lVar6 = lVar3;
                  uVar14 = BN_div_word(a,0x80);
                  if (uVar14 == 0xffffffffffffffff) goto LAB_0010035d;
                  ptr[lVar6 + -1] = (uchar)uVar14;
                  lVar3 = lVar6 + 1;
                } while (lVar6 + 1 != (ulong)(iVar5 - 1) + 2);
                iVar5 = (int)lVar6;
                iVar10 = local_70 + iVar5;
              }
            }
            else {
              if (bVar2) goto LAB_00100411;
LAB_001002a8:
              lVar3 = 1;
              do {
                lVar6 = lVar3;
                ptr[lVar6 + -1] = (byte)uVar14 & 0x7f;
                uVar14 = uVar14 >> 7;
                lVar3 = lVar6 + 1;
              } while (uVar14 != 0);
              iVar5 = (int)lVar6;
              iVar10 = iVar5 + local_70;
            }
            if (out != (uchar *)0x0) {
              if (olen < iVar10) {
                ERR_new();
                ERR_set_debug("crypto/asn1/a_object.c",0x9d,"a2d_ASN1_OBJECT");
                ERR_set_error(0xd,0x6b,0);
                goto LAB_0010035d;
              }
              if (0 < iVar5 + -1) {
                pbVar12 = ptr + (iVar5 + -1);
                pbVar8 = out + local_70;
                do {
                  bVar1 = *pbVar12;
                  pbVar9 = pbVar8 + 1;
                  pbVar12 = pbVar12 + -1;
                  *pbVar8 = bVar1 | 0x80;
                  pbVar8 = pbVar9;
                } while (pbVar9 != out + (ulong)(iVar5 - 2U) + (long)local_70 + 1);
                local_70 = local_70 + 1 + (iVar5 - 2U);
              }
              out[local_70] = *ptr;
              iVar10 = local_70 + 1;
            }
            local_70 = iVar10;
            if (iVar4 == 0) {
              if (ptr != local_58) {
                CRYPTO_free(ptr);
              }
              goto LAB_0010067b;
            }
          } while ((iVar11 == 0x2e) || (iVar11 == 0x20));
        }
        else {
          ptr = local_58;
        }
        ERR_new();
        ERR_set_debug("crypto/asn1/a_object.c",0x55,"a2d_ASN1_OBJECT");
        ERR_set_error(0xd,0x83,0);
LAB_0010035d:
        local_68 = local_58;
        if (ptr != local_68) {
LAB_0010036e:
          CRYPTO_free(ptr);
        }
      }
    }
    else {
      local_60 = (int)*buf - 0x30;
      if (local_60 < 3) goto LAB_00100164;
LAB_001003cb:
      ERR_new();
      a = (BIGNUM *)0x0;
      ERR_set_debug("crypto/asn1/a_object.c",0x47,"a2d_ASN1_OBJECT");
      ERR_set_error(0xd,0x7a,0);
    }
    BN_free(a);
  }
  local_70 = 0;
LAB_00100389:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_70;
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
    goto LAB_001008da;
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
        goto LAB_001007f7;
      }
    }
    iVar1 = -1;
  }
LAB_001007f7:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
LAB_001008da:
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
      goto LAB_00100a77;
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
          goto LAB_00100ad0;
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
              if ((param_1 != (long *)0x0) && ((ASN1_OBJECT *)*param_1 == a)) goto LAB_00100ad0;
              pAVar2 = (ASN1_OBJECT *)0x0;
              ASN1_OBJECT_free(a);
              goto LAB_00100a77;
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
          goto LAB_00100a77;
        }
      } while ((*puVar4 != 0x80) || ((char)*puVar3 < '\0'));
    }
    ERR_new();
    uVar5 = 0x11c;
  }
  ERR_set_debug("crypto/asn1/a_object.c",uVar5,"ossl_c2i_ASN1_OBJECT");
  ERR_set_error(0xd,0xd8,0);
LAB_00100ad0:
  pAVar2 = (ASN1_OBJECT *)0x0;
LAB_00100a77:
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
      goto LAB_00100cbc;
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
LAB_00100cbc:
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


