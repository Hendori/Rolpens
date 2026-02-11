
int strip_eol(long param_1,int *param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  
  iVar2 = *param_2;
  if ((param_3 & 0x80) != 0) {
    iVar4 = 0;
    if ((0 < iVar2) && (*(char *)(param_1 + -1 + (long)iVar2) == '\n')) {
      if ((param_3 & 0x800) != 0) {
        if (iVar2 == 1) {
          return 0;
        }
        if (*(char *)(param_1 + -2 + (long)iVar2) != '\r') {
          return 0;
        }
        iVar2 = iVar2 + -1;
      }
      iVar4 = 1;
      *param_2 = iVar2 + -1;
    }
    return iVar4;
  }
  pcVar3 = (char *)(param_1 + -1 + (long)iVar2);
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      while (cVar1 = *pcVar3, cVar1 != '\n') {
        if ((((iVar4 == 0) || ((param_3 >> 0x13 & 1) == 0)) || (cVar1 != ' ')) && (cVar1 != '\r'))
        goto LAB_00100086;
        pcVar3 = pcVar3 + -1;
        iVar2 = iVar2 + -1;
        if (iVar2 == 0) goto LAB_00100086;
      }
      iVar4 = 1;
      pcVar3 = pcVar3 + -1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
LAB_00100086:
  *param_2 = iVar2;
  return iVar4;
}



void mime_param_free(undefined8 *param_1)

{
  CRYPTO_free((void *)*param_1);
  CRYPTO_free((void *)param_1[1]);
  CRYPTO_free(param_1);
  return;
}



int mime_hdr_cmp(undefined8 *param_1,undefined8 *param_2)

{
  char *__s1;
  char *__s2;
  int iVar1;
  
  __s1 = *(char **)*param_1;
  __s2 = *(char **)*param_2;
  if ((__s1 != (char *)0x0) && (__s2 != (char *)0x0)) {
    iVar1 = strcmp(__s1,__s2);
    return iVar1;
  }
  return ((__s1 != (char *)0x0) - 1) + (uint)(__s2 == (char *)0x0);
}



int mime_param_cmp(undefined8 *param_1,undefined8 *param_2)

{
  char *__s1;
  char *__s2;
  int iVar1;
  
  __s1 = *(char **)*param_1;
  __s2 = *(char **)*param_2;
  if ((__s1 != (char *)0x0) && (__s2 != (char *)0x0)) {
    iVar1 = strcmp(__s1,__s2);
    return iVar1;
  }
  return ((__s1 != (char *)0x0) - 1) + (uint)(__s2 == (char *)0x0);
}



char * strip_ends(char *param_1)

{
  char cVar1;
  int iVar2;
  size_t sVar3;
  char *pcVar4;
  
  cVar1 = *param_1;
  while( true ) {
    if (cVar1 == '\0') {
      return (char *)0x0;
    }
    if (cVar1 == '\"') break;
    iVar2 = ossl_ctype_check((int)cVar1,8);
    if (iVar2 == 0) goto LAB_0010019b;
    cVar1 = param_1[1];
    param_1 = param_1 + 1;
  }
  if (param_1[1] == '\0') {
    return (char *)0x0;
  }
  param_1 = param_1 + 1;
LAB_0010019b:
  sVar3 = strlen(param_1);
  pcVar4 = param_1 + (sVar3 - 1);
  if (pcVar4 < param_1) {
    return (char *)0x0;
  }
  while( true ) {
    if (*pcVar4 == '\"') {
      if (param_1 == pcVar4 + -1) {
        return (char *)0x0;
      }
      *pcVar4 = '\0';
      return param_1;
    }
    iVar2 = ossl_ctype_check((int)*pcVar4,8);
    if (iVar2 == 0) break;
    *pcVar4 = '\0';
    pcVar4 = pcVar4 + -1;
    if (pcVar4 < param_1) {
      return (char *)0x0;
    }
  }
  return param_1;
}



undefined8 * mime_hdr_new(char *param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  undefined8 *ptr;
  long lVar3;
  
  if (param_1 != (char *)0x0) {
    param_1 = CRYPTO_strdup(param_1,"crypto/asn1/asn_mime.c",0x35f);
    if (param_1 == (char *)0x0) {
      return (undefined8 *)0x0;
    }
    cVar2 = *param_1;
    pcVar1 = param_1;
    while (cVar2 != '\0') {
      cVar2 = ossl_tolower();
      *pcVar1 = cVar2;
      cVar2 = pcVar1[1];
      pcVar1 = pcVar1 + 1;
    }
  }
  if (param_2 != (char *)0x0) {
    param_2 = CRYPTO_strdup(param_2,"crypto/asn1/asn_mime.c",0x365);
    if (param_2 == (char *)0x0) {
      ptr = (undefined8 *)0x0;
      goto LAB_001002f0;
    }
    cVar2 = *param_2;
    pcVar1 = param_2;
    while (cVar2 != '\0') {
      cVar2 = ossl_tolower();
      *pcVar1 = cVar2;
      cVar2 = pcVar1[1];
      pcVar1 = pcVar1 + 1;
    }
  }
  ptr = (undefined8 *)CRYPTO_malloc(0x18,"crypto/asn1/asn_mime.c",0x36a);
  if (ptr != (undefined8 *)0x0) {
    *ptr = param_1;
    ptr[1] = param_2;
    lVar3 = OPENSSL_sk_new(mime_param_cmp);
    ptr[2] = lVar3;
    if (lVar3 != 0) {
      return ptr;
    }
  }
LAB_001002f0:
  CRYPTO_free(param_1);
  CRYPTO_free(param_2);
  CRYPTO_free(ptr);
  return (undefined8 *)0x0;
}



long b64_read_asn1(BIO *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  BIO_METHOD *type;
  BIO *b;
  BIO *bp;
  long lVar1;
  
  type = BIO_f_base64();
  b = BIO_new(type);
  if (b == (BIO *)0x0) {
    ERR_new();
    lVar1 = 0;
    ERR_set_debug("crypto/asn1/asn_mime.c",0x91,"b64_read_asn1");
    ERR_set_error(0xd,0x80020,0);
  }
  else {
    bp = BIO_push(b,param_1);
    lVar1 = ASN1_item_d2i_bio_ex(param_2,bp,param_3,param_4,param_5);
    if (lVar1 == 0) {
      ERR_new();
      ERR_set_debug("crypto/asn1/asn_mime.c",0x97,"b64_read_asn1");
      ERR_set_error(0xd,0x6e,0);
    }
    BIO_ctrl(bp,0xb,0,(void *)0x0);
    BIO_pop(bp);
    BIO_free(b);
  }
  return lVar1;
}



void mime_hdr_free_part_0(undefined8 *param_1)

{
  CRYPTO_free((void *)*param_1);
  CRYPTO_free((void *)param_1[1]);
  if (param_1[2] != 0) {
    OPENSSL_sk_pop_free(param_1[2],mime_param_free);
  }
  CRYPTO_free(param_1);
  return;
}



void mime_hdr_free(long param_1)

{
  if (param_1 != 0) {
    mime_hdr_free_part_0();
    return;
  }
  return;
}



undefined8 multi_split_constprop_0(undefined8 param_1,uint param_2,char *param_3,long *param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  size_t sVar4;
  long lVar5;
  size_t sVar6;
  BIO_METHOD *type;
  BIO *b;
  undefined8 uVar7;
  char cVar8;
  long in_FS_OFFSET;
  int local_464;
  int local_44c;
  short local_448;
  char local_446 [1030];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  sVar4 = strlen(param_3);
  lVar5 = OPENSSL_sk_new_null();
  *param_4 = lVar5;
  if (lVar5 != 0) {
    local_464 = 0;
    bVar1 = true;
    cVar8 = '\0';
    b = (BIO *)0x0;
    while( true ) {
      iVar2 = BIO_get_line(param_1,&local_448,0x400);
      local_44c = iVar2;
      if (iVar2 < 1) break;
      iVar3 = (int)sVar4;
      if (iVar3 == -1) {
        sVar6 = strlen(param_3);
        iVar3 = (int)sVar6;
      }
      if ((iVar3 + 1 < iVar2) && (local_448 == 0x2d2d)) {
        sVar6 = (size_t)iVar3;
        iVar2 = strncmp(local_446,param_3,sVar6);
        if (iVar2 != 0) goto LAB_0010057a;
        if ((local_446[sVar6] == '-') && (local_446[sVar6 + 1] == '-')) {
          iVar2 = OPENSSL_sk_push(lVar5,b);
          uVar7 = 1;
          if (iVar2 != 0) goto LAB_0010065f;
          break;
        }
        cVar8 = cVar8 + '\x01';
        bVar1 = true;
      }
      else {
LAB_0010057a:
        if (cVar8 != '\0') {
          iVar2 = strip_eol(&local_448,&local_44c,param_2);
          if (bVar1) {
            if (b != (BIO *)0x0) {
              iVar3 = OPENSSL_sk_push(lVar5,b);
              if (iVar3 == 0) break;
            }
            type = BIO_s_mem();
            b = BIO_new(type);
            if (b == (BIO *)0x0) goto LAB_00100698;
            BIO_ctrl(b,0x82,0,(void *)0x0);
          }
          else if (local_464 != 0) {
            if ((param_2 & 0x880) == 0x80) {
              BIO_write(b,&_LC3,1);
            }
            else {
              BIO_write(b,&_LC2,2);
            }
          }
          if (0 < local_44c) {
            BIO_write(b,&local_448,local_44c);
          }
          bVar1 = false;
          local_464 = iVar2;
        }
      }
    }
    BIO_free(b);
  }
LAB_00100698:
  uVar7 = 0;
LAB_0010065f:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void mime_hdr_addparam_isra_0(long param_1,char *param_2,char *param_3)

{
  undefined8 uVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  undefined8 *ptr;
  
  if (param_2 != (char *)0x0) {
    param_2 = CRYPTO_strdup(param_2,"crypto/asn1/asn_mime.c",0x380);
    if (param_2 == (char *)0x0) {
      ptr = (undefined8 *)0x0;
      param_3 = (char *)0x0;
      goto LAB_001007d0;
    }
    cVar3 = *param_2;
    pcVar2 = param_2;
    while (cVar3 != '\0') {
      cVar3 = ossl_tolower();
      *pcVar2 = cVar3;
      cVar3 = pcVar2[1];
      pcVar2 = pcVar2 + 1;
    }
  }
  if ((param_3 == (char *)0x0) ||
     (param_3 = CRYPTO_strdup(param_3,"crypto/asn1/asn_mime.c",0x387), param_3 != (char *)0x0)) {
    ptr = (undefined8 *)CRYPTO_malloc(0x10,"crypto/asn1/asn_mime.c",0x38c);
    if (ptr != (undefined8 *)0x0) {
      *ptr = param_2;
      uVar1 = *(undefined8 *)(param_1 + 0x10);
      ptr[1] = param_3;
      iVar4 = OPENSSL_sk_push(uVar1,ptr);
      if (iVar4 != 0) {
        return;
      }
    }
  }
  else {
    ptr = (undefined8 *)0x0;
  }
LAB_001007d0:
  CRYPTO_free(param_2);
  CRYPTO_free(param_3);
  CRYPTO_free(ptr);
  return;
}



/* WARNING: Type propagation algorithm not settling */

long mime_parse_hdr(BIO *param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  long in_FS_OFFSET;
  long local_460;
  char local_448 [1032];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_460 = OPENSSL_sk_new(mime_hdr_cmp);
  if (local_460 != 0) {
    lVar6 = 0;
LAB_00100870:
    iVar4 = BIO_gets(param_1,local_448,0x400);
    if (0 < iVar4) {
      if ((lVar6 == 0) || (iVar4 = ossl_ctype_check((int)local_448[0],8), iVar4 == 0)) {
        iVar4 = 1;
      }
      else {
        iVar4 = 3;
      }
      if (local_448[0] != '\0') {
        uVar8 = 0;
        pcVar9 = local_448;
        pcVar10 = local_448;
        cVar3 = local_448[0];
LAB_001008c1:
        pcVar11 = pcVar9;
        if ((cVar3 != '\r') && (cVar3 != '\n')) {
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch(iVar4) {
          default:
            break;
          case 1:
            while (pcVar11 = pcVar10 + 1, cVar3 != ':') {
              cVar3 = *pcVar11;
              pcVar10 = pcVar11;
              if (((cVar3 == '\0') || (cVar3 == '\r')) || (cVar3 == '\n')) goto joined_r0x00100cce;
            }
            *pcVar10 = '\0';
            uVar8 = strip_ends(pcVar9);
            cVar3 = *pcVar11;
            pcVar10 = pcVar11;
            if (((cVar3 == '\0') || (cVar3 == '\n')) || (cVar3 == '\r')) goto LAB_001009a5;
          case 2:
            while (cVar3 != ';') {
              pcVar10 = pcVar10 + 1;
              if (cVar3 == '(') {
                cVar3 = *pcVar10;
                if (((cVar3 == '\0') || (cVar3 == '\r')) || (cVar3 == '\n'))
                goto joined_r0x00100cce;
                iVar4 = 2;
                goto LAB_00100b80;
              }
              cVar3 = *pcVar10;
              if (((cVar3 == '\0') || (cVar3 == '\r')) || (cVar3 == '\n')) goto LAB_001009a5;
            }
            *pcVar10 = '\0';
            uVar7 = strip_ends(pcVar11);
            lVar6 = mime_hdr_new(uVar8,uVar7);
            if (lVar6 != 0) {
              iVar4 = OPENSSL_sk_push(local_460,lVar6);
              if (iVar4 != 0) {
                cVar3 = pcVar10[1];
                pcVar10 = pcVar10 + 1;
                if (((cVar3 != '\0') && (cVar3 != '\r')) && (pcVar9 = pcVar10, cVar3 != '\n')) {
joined_r0x00100b2f:
                  while (pcVar11 = pcVar10 + 1, cVar3 != '=') {
                    cVar3 = *pcVar11;
                    pcVar10 = pcVar11;
                    if (cVar3 == '\0') goto joined_r0x00100cce;
joined_r0x00100b3f:
                    if ((cVar3 == '\r') || (cVar3 == '\n')) goto joined_r0x00100cce;
                  }
                  *pcVar10 = '\0';
                  uVar8 = strip_ends(pcVar9);
                  cVar3 = *pcVar11;
                  pcVar10 = pcVar11;
                  while ((cVar3 != '\0' && (pcVar9 = pcVar10, cVar3 != '\r'))) {
                    while( true ) {
                      pcVar10 = pcVar9;
                      if (cVar3 == '\n') goto LAB_00100a56;
                      pcVar10 = pcVar9 + 1;
                      if (cVar3 == ';') {
                        *pcVar9 = '\0';
                        uVar7 = strip_ends(pcVar11);
                        mime_hdr_addparam_isra_0(lVar6,uVar8,uVar7);
                        cVar3 = pcVar9[1];
                        pcVar9 = pcVar10;
                        if (cVar3 != '\0') goto joined_r0x00100b3f;
                        goto joined_r0x00100cce;
                      }
                      if (cVar3 == '\"') break;
                      if (cVar3 == '(') {
                        cVar3 = *pcVar10;
                        if (((cVar3 == '\0') || (cVar3 == '\r')) || (cVar3 == '\n'))
                        goto joined_r0x00100cce;
                        iVar4 = 4;
                        goto LAB_00100b80;
                      }
                      cVar3 = *pcVar10;
                      if ((cVar3 == '\0') || (pcVar9 = pcVar10, cVar3 == '\r')) goto LAB_00100a56;
                    }
                    cVar1 = *pcVar10;
                    if (((cVar1 == '\0') || (cVar1 == '\r')) || (cVar1 == '\n'))
                    goto joined_r0x00100cce;
                    pcVar10 = pcVar9 + 2;
                    cVar2 = *pcVar10;
                    while (cVar3 = cVar2, cVar1 != '\"') {
                      if (((cVar3 == '\0') || (cVar3 == '\r')) || (cVar3 == '\n'))
                      goto joined_r0x00100cce;
                      pcVar10 = pcVar10 + 1;
                      cVar2 = *pcVar10;
                      cVar1 = cVar3;
                    }
                  }
                  goto LAB_00100a56;
                }
                goto joined_r0x00100cce;
              }
              goto LAB_001009d2;
            }
            goto LAB_001009da;
          case 3:
            goto joined_r0x00100b2f;
          }
          goto LAB_00100cf8;
        }
        goto LAB_00100bc3;
      }
    }
    goto LAB_00100917;
  }
LAB_001009eb:
  local_460 = 0;
LAB_001009f4:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_460;
LAB_00100b80:
  pcVar10 = pcVar10 + 1;
  if (cVar3 == ')') goto LAB_00100bb0;
  cVar3 = *pcVar10;
  if (((cVar3 == '\0') || (cVar3 == '\r')) || (cVar3 == '\n')) goto joined_r0x00100cce;
  goto LAB_00100b80;
LAB_00100bb0:
  cVar3 = *pcVar10;
  pcVar9 = pcVar11;
  if (cVar3 == '\0') goto LAB_00100bc3;
  goto LAB_001008c1;
  while (cVar3 != '\r') {
LAB_00100cf8:
    cVar3 = pcVar10[1];
    pcVar10 = pcVar10 + 1;
    if ((cVar3 == '\0') || (cVar3 == '\n')) break;
  }
LAB_00100bc3:
  if (iVar4 == 2) {
LAB_001009a5:
    uVar7 = strip_ends(pcVar11);
    lVar6 = mime_hdr_new(uVar8,uVar7);
    if (lVar6 != 0) {
      iVar4 = OPENSSL_sk_push(local_460,lVar6);
      if (iVar4 != 0) goto joined_r0x00100cce;
LAB_001009d2:
      mime_hdr_free_part_0(lVar6);
    }
LAB_001009da:
    OPENSSL_sk_pop_free(local_460,mime_hdr_free);
    goto LAB_001009eb;
  }
  if (iVar4 == 4) {
LAB_00100a56:
    uVar7 = strip_ends(pcVar11);
    mime_hdr_addparam_isra_0(lVar6,uVar8,uVar7);
  }
joined_r0x00100cce:
  if (pcVar10 == local_448) goto LAB_00100917;
  goto LAB_00100870;
LAB_00100917:
  OPENSSL_sk_sort(local_460);
  for (iVar4 = 0; iVar5 = OPENSSL_sk_num(local_460), iVar4 < iVar5; iVar4 = iVar4 + 1) {
    lVar6 = OPENSSL_sk_value(local_460,iVar4);
    if ((lVar6 != 0) && (*(long *)(lVar6 + 0x10) != 0)) {
      OPENSSL_sk_sort();
    }
  }
  goto LAB_001009f4;
}



long SMIME_read_ASN1_ex(undefined8 param_1,undefined4 param_2,undefined8 *param_3,undefined8 param_4
                       ,undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  BIO *a;
  undefined8 uVar8;
  long in_FS_OFFSET;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = 0;
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = 0;
  }
  lVar5 = mime_parse_hdr(param_1);
  if (lVar5 == 0) {
    ERR_new();
    lVar7 = 0;
    ERR_set_debug("crypto/asn1/asn_mime.c",0x19f,"SMIME_read_ASN1_ex");
    ERR_set_error(0xd,0xcf,0);
    goto LAB_00100e4d;
  }
  local_50 = 0;
  local_58 = "content-type";
  local_48 = 0;
  uVar3 = OPENSSL_sk_find(lVar5,&local_58);
  lVar6 = OPENSSL_sk_value(lVar5,uVar3);
  if ((lVar6 == 0) || (pcVar1 = *(char **)(lVar6 + 8), pcVar1 == (char *)0x0)) {
    lVar7 = 0;
    OPENSSL_sk_pop_free(lVar5,mime_hdr_free);
    ERR_new();
    ERR_set_debug("crypto/asn1/asn_mime.c",0x1a6,"SMIME_read_ASN1_ex");
    ERR_set_error(0xd,0xd1,0);
    goto LAB_00100e4d;
  }
  iVar4 = strcmp(pcVar1,"multipart/signed");
  if (iVar4 != 0) {
    iVar4 = strcmp(pcVar1,"application/x-pkcs7-mime");
    if (iVar4 != 0) {
      iVar4 = strcmp(pcVar1,"application/pkcs7-mime");
      if (iVar4 != 0) {
        ERR_new();
        ERR_set_debug("crypto/asn1/asn_mime.c",0x1ed,"SMIME_read_ASN1_ex");
        lVar7 = 0;
        ERR_set_error(0xd,0xcd,"type: %s",*(undefined8 *)(lVar6 + 8));
        OPENSSL_sk_pop_free(lVar5,mime_hdr_free);
        goto LAB_00100e4d;
      }
    }
    OPENSSL_sk_pop_free(lVar5,mime_hdr_free);
    lVar7 = b64_read_asn1(param_1,param_4,param_5,param_6,param_7);
    if (lVar7 == 0) {
      ERR_new();
      ERR_set_debug("crypto/asn1/asn_mime.c",0x1f6,"SMIME_read_ASN1_ex");
      ERR_set_error(0xd,0xcb,0);
    }
    goto LAB_00100e4d;
  }
  local_50 = 0;
  local_58 = "boundary";
  uVar3 = OPENSSL_sk_find(*(undefined8 *)(lVar6 + 0x10),&local_58);
  lVar7 = OPENSSL_sk_value(*(undefined8 *)(lVar6 + 0x10),uVar3);
  if ((lVar7 == 0) || (*(long *)(lVar7 + 8) == 0)) {
    lVar7 = 0;
    OPENSSL_sk_pop_free(lVar5,mime_hdr_free);
    ERR_new();
    ERR_set_debug("crypto/asn1/asn_mime.c",0x1b1,"SMIME_read_ASN1_ex");
    ERR_set_error(0xd,0xd3,0);
    goto LAB_00100e4d;
  }
  iVar4 = multi_split_constprop_0(param_1,param_2,*(long *)(lVar7 + 8),&local_60);
  OPENSSL_sk_pop_free(lVar5,mime_hdr_free);
  uVar2 = local_60;
  if (iVar4 == 0) {
LAB_00101000:
    ERR_new();
    ERR_set_debug("crypto/asn1/asn_mime.c",0x1b7,"SMIME_read_ASN1_ex");
    uVar8 = 0xd2;
  }
  else {
    iVar4 = OPENSSL_sk_num(local_60);
    if (iVar4 != 2) goto LAB_00101000;
    a = (BIO *)OPENSSL_sk_value(uVar2,1);
    lVar5 = mime_parse_hdr(a);
    if (lVar5 == 0) {
      ERR_new();
      ERR_set_debug("crypto/asn1/asn_mime.c",0x1c0,"SMIME_read_ASN1_ex");
      uVar8 = 0xd0;
    }
    else {
      local_58 = "content-type";
      local_50 = 0;
      local_48 = 0;
      uVar3 = OPENSSL_sk_find(lVar5,&local_58);
      lVar7 = OPENSSL_sk_value(lVar5,uVar3);
      if ((lVar7 == 0) || (pcVar1 = *(char **)(lVar7 + 8), pcVar1 == (char *)0x0)) {
        OPENSSL_sk_pop_free(lVar5,mime_hdr_free);
        ERR_new();
        ERR_set_debug("crypto/asn1/asn_mime.c",0x1ca,"SMIME_read_ASN1_ex");
        uVar8 = 0xd4;
      }
      else {
        iVar4 = strcmp(pcVar1,"application/x-pkcs7-signature");
        if (iVar4 != 0) {
          iVar4 = strcmp(pcVar1,"application/pkcs7-signature");
          if (iVar4 != 0) {
            ERR_new();
            ERR_set_debug("crypto/asn1/asn_mime.c",0x1d1,"SMIME_read_ASN1_ex");
            ERR_set_error(0xd,0xd5,"type: %s",*(undefined8 *)(lVar7 + 8));
            lVar7 = 0;
            OPENSSL_sk_pop_free(lVar5,mime_hdr_free);
            OPENSSL_sk_pop_free(uVar2,&BIO_vfree);
            goto LAB_00100e4d;
          }
        }
        OPENSSL_sk_pop_free(lVar5,mime_hdr_free);
        lVar7 = b64_read_asn1(a,param_4,param_5,param_6,param_7);
        if (lVar7 != 0) {
          if (param_3 == (undefined8 *)0x0) {
            OPENSSL_sk_pop_free(uVar2,&BIO_vfree);
          }
          else {
            uVar8 = OPENSSL_sk_value(uVar2,0);
            *param_3 = uVar8;
            BIO_free(a);
            OPENSSL_sk_free(uVar2);
          }
          goto LAB_00100e4d;
        }
        ERR_new();
        ERR_set_debug("crypto/asn1/asn_mime.c",0x1da,"SMIME_read_ASN1_ex");
        uVar8 = 0xcc;
      }
    }
  }
  lVar7 = 0;
  ERR_set_error(0xd,uVar8,0);
  OPENSSL_sk_pop_free(uVar2,&BIO_vfree);
LAB_00100e4d:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ASN1_VALUE * SMIME_read_ASN1(BIO *bio,BIO **bcont,ASN1_ITEM *it)

{
  ASN1_VALUE *pAVar1;
  
  pAVar1 = (ASN1_VALUE *)SMIME_read_ASN1_ex(bio,0,bcont,it,0,0,0);
  return pAVar1;
}



int SMIME_crlf_copy(BIO *in,BIO *out,int flags)

{
  int len;
  char cVar1;
  uint uVar2;
  BIO_METHOD *type;
  BIO *b;
  BIO *b_00;
  long lVar3;
  int iVar4;
  long in_FS_OFFSET;
  int local_468;
  int local_44c;
  char local_448 [1032];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((in == (BIO *)0x0) || (out == (BIO *)0x0)) {
    ERR_new();
    ERR_set_debug("crypto/asn1/asn_mime.c",0x20b,"SMIME_crlf_copy");
    ERR_set_error(0xd,0xc0102,0);
    uVar2 = 0;
  }
  else {
    type = BIO_f_buffer();
    b = BIO_new(type);
    if (b == (BIO *)0x0) {
      ERR_new();
      ERR_set_debug("crypto/asn1/asn_mime.c",0x215,"SMIME_crlf_copy");
      ERR_set_error(0xd,0x80020,0);
      uVar2 = 0;
    }
    else {
      b_00 = BIO_push(b,out);
      if ((flags & 0x80U) == 0) {
        if ((flags & 1U) != 0) {
          BIO_printf(b_00,"Content-Type: text/plain\r\n\r\n");
        }
        local_468 = 0;
        while (local_44c = BIO_gets(in,local_448,0x400), 0 < local_44c) {
          cVar1 = strip_eol(local_448,&local_44c,flags);
          len = local_44c;
          if (local_44c < 1) {
            if ((flags & 0x80000U) == 0) goto joined_r0x0010149d;
            local_468 = local_468 + 1;
          }
          else {
            if ((flags & 0x80000U) != 0) {
              iVar4 = 0;
              if (0 < local_468) {
                do {
                  iVar4 = iVar4 + 1;
                  BIO_write(b_00,&_LC2,2);
                } while (local_468 != iVar4);
              }
              local_468 = 0;
            }
            BIO_write(b_00,local_448,len);
joined_r0x0010149d:
            if (cVar1 != '\0') {
              BIO_write(b_00,&_LC2,2);
            }
          }
        }
      }
      else {
        while (local_44c = BIO_read(in,local_448,0x400), 0 < local_44c) {
          BIO_write(b_00,local_448,local_44c);
        }
      }
      lVar3 = BIO_ctrl(b_00,0xb,0,(void *)0x0);
      BIO_pop(b_00);
      BIO_free(b);
      uVar2 = (uint)(0 < (int)lVar3);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



int i2d_ASN1_bio_stream(BIO *out,ASN1_VALUE *val,BIO *in,int flags,ASN1_ITEM *it)

{
  int iVar1;
  BIO *out_00;
  BIO *pBVar2;
  uint uVar3;
  
  if ((flags & 0x1000U) != 0) {
    out_00 = BIO_new_NDEF(out,val,it);
    if (out_00 == (BIO *)0x0) {
      ERR_new();
      uVar3 = 0;
      ERR_set_debug("crypto/asn1/asn_mime.c",0x4f,"i2d_ASN1_bio_stream");
      ERR_set_error(0xd,0x80007,0);
    }
    else {
      iVar1 = SMIME_crlf_copy(in,out_00,flags);
      uVar3 = (uint)(iVar1 != 0);
      BIO_ctrl(out_00,0xb,0,(void *)0x0);
      do {
        pBVar2 = BIO_pop(out_00);
        BIO_free(out_00);
        out_00 = pBVar2;
      } while (out != pBVar2);
    }
    return uVar3;
  }
  iVar1 = ASN1_item_i2d_bio(it,out,val);
  return iVar1;
}



int B64_write_ASN1(BIO *param_1,ASN1_VALUE *param_2,BIO *param_3,int param_4,ASN1_ITEM *param_5)

{
  int iVar1;
  BIO_METHOD *type;
  BIO *b;
  BIO *out;
  
  type = BIO_f_base64();
  b = BIO_new(type);
  if (b == (BIO *)0x0) {
    ERR_new();
    iVar1 = 0;
    ERR_set_debug("crypto/asn1/asn_mime.c",0x70,"B64_write_ASN1");
    ERR_set_error(0xd,0x80020,0);
  }
  else {
    out = BIO_push(b,param_1);
    iVar1 = i2d_ASN1_bio_stream(out,param_2,param_3,param_4,param_5);
    BIO_ctrl(out,0xb,0,(void *)0x0);
    BIO_pop(out);
    BIO_free(b);
  }
  return iVar1;
}



int PEM_write_bio_ASN1_stream(BIO *out,ASN1_VALUE *val,BIO *in,int flags,char *hdr,ASN1_ITEM *it)

{
  int iVar1;
  
  BIO_printf(out,"-----BEGIN %s-----\n",hdr);
  iVar1 = B64_write_ASN1(out,val,in,flags,it);
  BIO_printf(out,"-----END %s-----\n",hdr);
  return iVar1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
SMIME_write_ASN1_ex(BIO *param_1,undefined8 param_2,BIO *param_3,uint param_4,int param_5,
                   int param_6,undefined8 param_7,long param_8,undefined8 param_9)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  undefined8 *puVar9;
  EVP_MD *pEVar10;
  BIO *pBVar11;
  undefined8 uVar12;
  undefined *puVar13;
  int iVar14;
  char *pcVar15;
  char *pcVar16;
  long in_FS_OFFSET;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined8 local_90;
  BIO *local_88;
  BIO *local_80;
  undefined8 local_78;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48;
  long local_40;
  
  puVar13 = &_LC3;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar8 = "application/x-pkcs7-";
  if ((param_4 & 0x400) == 0) {
    pcVar8 = "application/pkcs7-";
  }
  if ((param_4 & 0x800) != 0) {
    puVar13 = &_LC2;
  }
  if (((param_4 & 0x40) == 0) || (param_3 == (BIO *)0x0)) {
    if (param_5 == 0x17) {
      pcVar16 = "enveloped-data";
      pcVar15 = "smime.p7m";
LAB_00101bf6:
      BIO_printf(param_1,"MIME-Version: 1.0%s",puVar13);
      BIO_printf(param_1,"Content-Disposition: attachment;");
      BIO_printf(param_1," filename=\"%s\"%s",pcVar15,puVar13);
      BIO_printf(param_1,"Content-Type: %smime;",pcVar8);
      BIO_printf(param_1," smime-type=%s;",pcVar16);
    }
    else {
      if (param_5 == 0x423) {
        pcVar16 = "authEnveloped-data";
        pcVar15 = "smime.p7m";
        goto LAB_00101bf6;
      }
      if (param_5 == 0x16) {
        pcVar16 = "signed-receipt";
        pcVar15 = "smime.p7m";
        if (param_6 != 0xcc) {
          pcVar16 = "certs-only";
          iVar6 = OPENSSL_sk_num(param_7);
          if (-1 < iVar6) {
            pcVar16 = "signed-data";
          }
        }
        goto LAB_00101bf6;
      }
      if (param_5 == 0x312) {
        pcVar16 = "compressed-data";
        pcVar15 = "smime.p7z";
        goto LAB_00101bf6;
      }
      BIO_printf(param_1,"MIME-Version: 1.0%s",puVar13);
      pcVar15 = "smime.p7m";
      BIO_printf(param_1,"Content-Disposition: attachment;");
      BIO_printf(param_1," filename=\"%s\"%s","smime.p7m",puVar13);
      BIO_printf(param_1,"Content-Type: %smime;",pcVar8);
    }
    BIO_printf(param_1," name=\"%s\"%s",pcVar15,puVar13);
    BIO_printf(param_1,"Content-Transfer-Encoding: base64%s%s",puVar13,puVar13);
    iVar6 = B64_write_ASN1(param_1,param_2,param_3,param_4,param_8);
    if (iVar6 != 0) {
      BIO_printf(param_1,"%s",puVar13);
LAB_00101cc4:
      uVar12 = 1;
      goto LAB_00101cc9;
    }
  }
  else {
    iVar6 = RAND_bytes_ex(param_9,local_68,0x20,0);
    if (0 < iVar6) {
      iVar14 = 0;
      local_68[0] = local_68[0] & _LC25;
      local_68[1] = local_68[1] & UNK_00102651;
      local_68[2] = local_68[2] & UNK_00102652;
      local_68[3] = local_68[3] & UNK_00102653;
      local_68[4] = local_68[4] & UNK_00102654;
      local_68[5] = local_68[5] & UNK_00102655;
      local_68[6] = local_68[6] & UNK_00102656;
      local_68[7] = local_68[7] & UNK_00102657;
      local_68[8] = local_68[8] & UNK_00102658;
      local_68[9] = local_68[9] & UNK_00102659;
      local_68[10] = local_68[10] & UNK_0010265a;
      local_68[0xb] = local_68[0xb] & UNK_0010265b;
      local_68[0xc] = local_68[0xc] & UNK_0010265c;
      local_68[0xd] = local_68[0xd] & UNK_0010265d;
      local_68[0xe] = local_68[0xe] & UNK_0010265e;
      local_68[0xf] = local_68[0xf] & UNK_0010265f;
      local_58[0] = _LC25 & local_58[0];
      local_58[1] = UNK_00102651 & local_58[1];
      local_58[2] = UNK_00102652 & local_58[2];
      local_58[3] = UNK_00102653 & local_58[3];
      local_58[4] = UNK_00102654 & local_58[4];
      local_58[5] = UNK_00102655 & local_58[5];
      local_58[6] = UNK_00102656 & local_58[6];
      local_58[7] = UNK_00102657 & local_58[7];
      local_58[8] = UNK_00102658 & local_58[8];
      local_58[9] = UNK_00102659 & local_58[9];
      local_58[10] = UNK_0010265a & local_58[10];
      local_58[0xb] = UNK_0010265b & local_58[0xb];
      local_58[0xc] = UNK_0010265c & local_58[0xc];
      local_58[0xd] = UNK_0010265d & local_58[0xd];
      local_58[0xe] = UNK_0010265e & local_58[0xe];
      local_58[0xf] = UNK_0010265f & local_58[0xf];
      local_48 = 0;
      auVar22[0] = local_68[0] + _LC27;
      auVar22[1] = local_68[1] + UNK_00102671;
      auVar22[2] = local_68[2] + UNK_00102672;
      auVar22[3] = local_68[3] + UNK_00102673;
      auVar22[4] = local_68[4] + UNK_00102674;
      auVar22[5] = local_68[5] + UNK_00102675;
      auVar22[6] = local_68[6] + UNK_00102676;
      auVar22[7] = local_68[7] + UNK_00102677;
      auVar22[8] = local_68[8] + UNK_00102678;
      auVar22[9] = local_68[9] + UNK_00102679;
      auVar22[10] = local_68[10] + UNK_0010267a;
      auVar22[0xb] = local_68[0xb] + UNK_0010267b;
      auVar22[0xc] = local_68[0xc] + UNK_0010267c;
      auVar22[0xd] = local_68[0xd] + UNK_0010267d;
      auVar22[0xe] = local_68[0xe] + UNK_0010267e;
      auVar22[0xf] = local_68[0xf] + UNK_0010267f;
      auVar18[0] = -(SUB161(__LC26,0) < (char)local_68[0]);
      auVar18[1] = -(SUB161(__LC26,1) < (char)local_68[1]);
      auVar18[2] = -(SUB161(__LC26,2) < (char)local_68[2]);
      auVar18[3] = -(SUB161(__LC26,3) < (char)local_68[3]);
      auVar18[4] = -(SUB161(__LC26,4) < (char)local_68[4]);
      auVar18[5] = -(SUB161(__LC26,5) < (char)local_68[5]);
      auVar18[6] = -(SUB161(__LC26,6) < (char)local_68[6]);
      auVar18[7] = -(SUB161(__LC26,7) < (char)local_68[7]);
      auVar18[8] = -(SUB161(__LC26,8) < (char)local_68[8]);
      auVar18[9] = -(SUB161(__LC26,9) < (char)local_68[9]);
      auVar18[10] = -(SUB161(__LC26,10) < (char)local_68[10]);
      auVar18[0xb] = -(SUB161(__LC26,0xb) < (char)local_68[0xb]);
      auVar18[0xc] = -(SUB161(__LC26,0xc) < (char)local_68[0xc]);
      auVar18[0xd] = -(SUB161(__LC26,0xd) < (char)local_68[0xd]);
      auVar18[0xe] = -(SUB161(__LC26,0xe) < (char)local_68[0xe]);
      auVar18[0xf] = -(SUB161(__LC26,0xf) < (char)local_68[0xf]);
      auVar20[0] = _LC27 + local_58[0];
      auVar20[1] = UNK_00102671 + local_58[1];
      auVar20[2] = UNK_00102672 + local_58[2];
      auVar20[3] = UNK_00102673 + local_58[3];
      auVar20[4] = UNK_00102674 + local_58[4];
      auVar20[5] = UNK_00102675 + local_58[5];
      auVar20[6] = UNK_00102676 + local_58[6];
      auVar20[7] = UNK_00102677 + local_58[7];
      auVar20[8] = UNK_00102678 + local_58[8];
      auVar20[9] = UNK_00102679 + local_58[9];
      auVar20[10] = UNK_0010267a + local_58[10];
      auVar20[0xb] = UNK_0010267b + local_58[0xb];
      auVar20[0xc] = UNK_0010267c + local_58[0xc];
      auVar20[0xd] = UNK_0010267d + local_58[0xd];
      auVar20[0xe] = UNK_0010267e + local_58[0xe];
      auVar20[0xf] = UNK_0010267f + local_58[0xf];
      auVar21[0] = local_68[0] + _LC28;
      auVar21[1] = local_68[1] + UNK_00102681;
      auVar21[2] = local_68[2] + UNK_00102682;
      auVar21[3] = local_68[3] + UNK_00102683;
      auVar21[4] = local_68[4] + UNK_00102684;
      auVar21[5] = local_68[5] + UNK_00102685;
      auVar21[6] = local_68[6] + UNK_00102686;
      auVar21[7] = local_68[7] + UNK_00102687;
      auVar21[8] = local_68[8] + UNK_00102688;
      auVar21[9] = local_68[9] + UNK_00102689;
      auVar21[10] = local_68[10] + UNK_0010268a;
      auVar21[0xb] = local_68[0xb] + UNK_0010268b;
      auVar21[0xc] = local_68[0xc] + UNK_0010268c;
      auVar21[0xd] = local_68[0xd] + UNK_0010268d;
      auVar21[0xe] = local_68[0xe] + UNK_0010268e;
      auVar21[0xf] = local_68[0xf] + UNK_0010268f;
      auVar19[0] = _LC28 + local_58[0];
      auVar19[1] = UNK_00102681 + local_58[1];
      auVar19[2] = UNK_00102682 + local_58[2];
      auVar19[3] = UNK_00102683 + local_58[3];
      auVar19[4] = UNK_00102684 + local_58[4];
      auVar19[5] = UNK_00102685 + local_58[5];
      auVar19[6] = UNK_00102686 + local_58[6];
      auVar19[7] = UNK_00102687 + local_58[7];
      auVar19[8] = UNK_00102688 + local_58[8];
      auVar19[9] = UNK_00102689 + local_58[9];
      auVar19[10] = UNK_0010268a + local_58[10];
      auVar19[0xb] = UNK_0010268b + local_58[0xb];
      auVar19[0xc] = UNK_0010268c + local_58[0xc];
      auVar19[0xd] = UNK_0010268d + local_58[0xd];
      auVar19[0xe] = UNK_0010268e + local_58[0xe];
      auVar19[0xf] = UNK_0010268f + local_58[0xf];
      auVar17[0] = -(SUB161(__LC26,0) < (char)local_58[0]);
      auVar17[1] = -(SUB161(__LC26,1) < (char)local_58[1]);
      auVar17[2] = -(SUB161(__LC26,2) < (char)local_58[2]);
      auVar17[3] = -(SUB161(__LC26,3) < (char)local_58[3]);
      auVar17[4] = -(SUB161(__LC26,4) < (char)local_58[4]);
      auVar17[5] = -(SUB161(__LC26,5) < (char)local_58[5]);
      auVar17[6] = -(SUB161(__LC26,6) < (char)local_58[6]);
      auVar17[7] = -(SUB161(__LC26,7) < (char)local_58[7]);
      auVar17[8] = -(SUB161(__LC26,8) < (char)local_58[8]);
      auVar17[9] = -(SUB161(__LC26,9) < (char)local_58[9]);
      auVar17[10] = -(SUB161(__LC26,10) < (char)local_58[10]);
      auVar17[0xb] = -(SUB161(__LC26,0xb) < (char)local_58[0xb]);
      auVar17[0xc] = -(SUB161(__LC26,0xc) < (char)local_58[0xc]);
      auVar17[0xd] = -(SUB161(__LC26,0xd) < (char)local_58[0xd]);
      auVar17[0xe] = -(SUB161(__LC26,0xe) < (char)local_58[0xe]);
      auVar17[0xf] = -(SUB161(__LC26,0xf) < (char)local_58[0xf]);
      local_68 = ~auVar18 & auVar22 | auVar21 & auVar18;
      local_58 = ~auVar17 & auVar20 | auVar19 & auVar17;
      BIO_printf(param_1,"MIME-Version: 1.0%s",puVar13);
      BIO_printf(param_1,"Content-Type: multipart/signed;");
      bVar2 = false;
      BIO_printf(param_1," protocol=\"%ssignature\";",pcVar8);
      BIO_puts(param_1," micalg=\"");
      bVar3 = false;
      iVar6 = OPENSSL_sk_num(param_7);
      if (0 < iVar6) {
        do {
          if (bVar2) {
            BIO_write(param_1,&_LC33,1);
          }
          puVar9 = (undefined8 *)OPENSSL_sk_value(param_7,iVar14);
          iVar6 = OBJ_obj2nid((ASN1_OBJECT *)*puVar9);
          pcVar15 = OBJ_nid2sn(iVar6);
          pEVar10 = EVP_get_digestbyname(pcVar15);
          if ((pEVar10 == (EVP_MD *)0x0) || (*(code **)pEVar10->required_pkey_type == (code *)0x0))
          {
LAB_00101a43:
            if (iVar6 == 0x2a2) {
              BIO_puts(param_1,"sha-512");
              goto LAB_00101a98;
            }
            if (iVar6 < 0x2a3) {
              if (iVar6 == 0x2a0) {
                BIO_puts(param_1,"sha-256");
              }
              else if (iVar6 == 0x2a1) {
                BIO_puts(param_1,"sha-384");
              }
              else if (iVar6 == 4) {
                BIO_puts(param_1,"md5");
              }
              else {
                if (iVar6 != 0x40) goto LAB_00101f08;
                BIO_puts(param_1,"sha1");
              }
              goto LAB_00101a98;
            }
            if (iVar6 == 0x3d6) {
              BIO_puts(param_1,"gostr3411-2012-256");
              break;
            }
            if (iVar6 == 0x3d7) {
              BIO_puts(param_1,"gostr3411-2012-512");
              break;
            }
            if (iVar6 == 0x329) {
              BIO_puts(param_1,"gostr3411-94");
              break;
            }
LAB_00101f08:
            bVar2 = false;
            if (!bVar3) {
              bVar2 = true;
              BIO_puts(param_1,"unknown");
              bVar3 = true;
            }
          }
          else {
            iVar5 = (**(code **)pEVar10->required_pkey_type)(0,2,0,&local_88);
            if (iVar5 < 1) {
              if (iVar5 == -2) goto LAB_00101a43;
              break;
            }
            BIO_puts(param_1,(char *)local_88);
            CRYPTO_free(local_88);
LAB_00101a98:
            bVar2 = true;
          }
          iVar14 = iVar14 + 1;
          iVar6 = OPENSSL_sk_num(param_7);
        } while (iVar14 < iVar6);
      }
      BIO_printf(param_1,"\"; boundary=\"----%s\"%s%s",local_68,puVar13,puVar13);
      BIO_printf(param_1,"This is an S/MIME signed message%s%s",puVar13,puVar13);
      BIO_printf(param_1,"------%s%s",local_68,puVar13);
      lVar1 = *(long *)(param_8 + 0x20);
      local_90 = param_2;
      if ((param_4 & 0x8040) == 0x40) {
        if ((lVar1 == 0) || (*(code **)(lVar1 + 0x18) == (code *)0x0)) {
          ERR_new();
          ERR_set_debug("crypto/asn1/asn_mime.c",0x168,"asn1_output_data");
          ERR_set_error(0xd,0xca,0);
          uVar12 = 0;
          goto LAB_00101cc9;
        }
        local_80 = (BIO *)0x0;
        local_78 = 0;
        local_88 = param_1;
        iVar6 = (**(code **)(lVar1 + 0x18))(0xc,&local_90,param_8,&local_88);
        if (iVar6 < 1) goto LAB_00101ca7;
        iVar6 = SMIME_crlf_copy(param_3,local_80,param_4);
        iVar14 = (**(code **)(lVar1 + 0x18))(0xd,&local_90,param_8,&local_88);
        if (iVar14 < 1) {
          uVar4 = 0;
          if (param_1 == local_80) {
            uVar12 = 0;
            goto LAB_00101cc9;
          }
        }
        else {
          uVar7 = (uint)(iVar6 != 0);
          uVar4 = (uint)(iVar6 != 0);
          if (local_80 == param_1) goto LAB_00101e03;
        }
        do {
          uVar7 = uVar4;
          pBVar11 = BIO_pop(local_80);
          BIO_free(local_80);
          uVar4 = uVar7;
          local_80 = pBVar11;
        } while (param_1 != pBVar11);
      }
      else {
        uVar7 = SMIME_crlf_copy(param_3,param_1,param_4);
      }
LAB_00101e03:
      if (uVar7 != 0) {
        BIO_printf(param_1,"%s------%s%s",puVar13,local_68,puVar13);
        BIO_printf(param_1,"Content-Type: %ssignature;",pcVar8);
        BIO_printf(param_1," name=\"smime.p7s\"%s",puVar13);
        BIO_printf(param_1,"Content-Transfer-Encoding: base64%s",puVar13);
        BIO_printf(param_1,"Content-Disposition: attachment;");
        BIO_printf(param_1," filename=\"smime.p7s\"%s%s",puVar13,puVar13);
        B64_write_ASN1(param_1,param_2,0,0,param_8);
        BIO_printf(param_1,"%s------%s--%s%s",puVar13,local_68,puVar13,puVar13);
        goto LAB_00101cc4;
      }
    }
  }
LAB_00101ca7:
  uVar12 = 0;
LAB_00101cc9:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar12;
}



int SMIME_write_ASN1(BIO *bio,ASN1_VALUE *val,BIO *data,int flags,int ctype_nid,int econt_nid,
                    stack_st_X509_ALGOR *mdalgs,ASN1_ITEM *it)

{
  int iVar1;
  
  iVar1 = SMIME_write_ASN1_ex();
  return iVar1;
}



int SMIME_text(BIO *in,BIO *out)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long in_FS_OFFSET;
  char *local_1058;
  undefined8 local_1050;
  undefined8 local_1048;
  undefined1 local_1038 [4104];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar4 = mime_parse_hdr();
  if (lVar4 == 0) {
    ERR_new();
    ERR_set_debug("crypto/asn1/asn_mime.c",0x246,"SMIME_text");
    ERR_set_error(0xd,0xcf,0);
    uVar3 = 0;
  }
  else {
    local_1050 = 0;
    local_1058 = "content-type";
    local_1048 = 0;
    uVar1 = OPENSSL_sk_find(lVar4,&local_1058);
    lVar5 = OPENSSL_sk_value(lVar4,uVar1);
    if ((lVar5 == 0) || (*(char **)(lVar5 + 8) == (char *)0x0)) {
      ERR_new();
      ERR_set_debug("crypto/asn1/asn_mime.c",0x24b,"SMIME_text");
      ERR_set_error(0xd,0xce,0);
      OPENSSL_sk_pop_free(lVar4,mime_hdr_free);
      uVar3 = 0;
    }
    else {
      iVar2 = strcmp(*(char **)(lVar5 + 8),"text/plain");
      if (iVar2 == 0) {
        OPENSSL_sk_pop_free(lVar4,mime_hdr_free);
        while( true ) {
          iVar2 = BIO_read(in,local_1038,0x1000);
          if (iVar2 < 1) break;
          BIO_write(out,local_1038,iVar2);
        }
        uVar3 = (uint)(iVar2 == 0);
      }
      else {
        ERR_new();
        ERR_set_debug("crypto/asn1/asn_mime.c",0x250,"SMIME_text");
        ERR_set_error(0xd,0xcd,"type: %s",*(undefined8 *)(lVar5 + 8));
        OPENSSL_sk_pop_free(lVar4,mime_hdr_free);
        uVar3 = 0;
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


