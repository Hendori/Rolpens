
undefined1 * GENERAL_SUBTREE_it(void)

{
  return local_it_2;
}



undefined1 * NAME_CONSTRAINTS_it(void)

{
  return local_it_1;
}



uint ia5ncasecmp(long param_1,long param_2,long param_3)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  byte bVar4;
  
  if (param_3 != 0) {
    lVar3 = 0;
    do {
      bVar1 = *(byte *)(param_1 + lVar3);
      bVar2 = *(byte *)(param_2 + lVar3);
      if (bVar1 != bVar2) {
        bVar4 = bVar1 + 0x20;
        if (0x19 < (byte)(bVar1 + 0xbf)) {
          bVar4 = bVar1;
        }
        if ((byte)(bVar2 + 0xbf) < 0x1a) {
          bVar2 = bVar2 + 0x20;
        }
        if (bVar4 != bVar2) {
          return -(uint)(bVar4 < bVar2) | 1;
        }
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 != param_3);
  }
  return 0;
}



bool nc_minmax_valid_isra_0(ASN1_INTEGER *param_1,long param_2)

{
  int iVar1;
  BIGNUM *a;
  bool bVar2;
  
  bVar2 = param_2 == 0;
  if (param_1 != (ASN1_INTEGER *)0x0) {
    a = ASN1_INTEGER_to_BN(param_1,(BIGNUM *)0x0);
    if ((a == (BIGNUM *)0x0) || (iVar1 = BN_is_zero(a), iVar1 == 0)) {
      bVar2 = false;
    }
    BN_free(a);
    return bVar2;
  }
  return bVar2;
}



void do_i2r_name_constraints_isra_0(undefined8 param_1,BIO *param_2,uint param_3,undefined8 param_4)

{
  GENERAL_NAME *gen;
  ASN1_IA5STRING *pAVar1;
  int iVar2;
  undefined8 *puVar3;
  void *ptr;
  void *ptr_00;
  long lVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = OPENSSL_sk_num();
  if (0 < iVar2) {
    BIO_printf(param_2,"%*s%s:\n",(ulong)param_3,&_LC0,param_4);
  }
  iVar6 = 0;
  iVar2 = OPENSSL_sk_num(param_1);
  if (0 < iVar2) {
    while( true ) {
      puVar3 = (undefined8 *)OPENSSL_sk_value(param_1,iVar6);
      BIO_printf(param_2,"%*s",(ulong)(param_3 + 2),&_LC0);
      gen = (GENERAL_NAME *)*puVar3;
      if (gen->type == 7) {
        pAVar1 = (gen->d).rfc822Name;
        iVar2 = pAVar1->length;
        if (iVar2 < 0x10) {
          iVar5 = 4;
          if (iVar2 < 5) {
            iVar5 = iVar2;
          }
          lVar4 = (long)iVar5;
        }
        else {
          lVar4 = 0x10;
          iVar5 = 0x10;
        }
        ptr = (void *)ossl_ipaddr_to_asc(pAVar1->data,iVar5);
        ptr_00 = (void *)ossl_ipaddr_to_asc(pAVar1->data + lVar4,iVar2 - iVar5);
        if ((ptr != (void *)0x0) && (ptr_00 != (void *)0x0)) {
          BIO_printf(param_2,"IP:%s/%s",ptr,ptr_00);
        }
        CRYPTO_free(ptr);
        CRYPTO_free(ptr_00);
      }
      else {
        GENERAL_NAME_print(param_2,gen);
      }
      iVar6 = iVar6 + 1;
      iVar2 = OPENSSL_sk_num(param_1);
      if (iVar2 <= iVar6) break;
      BIO_puts(param_2,"\n");
    }
  }
  return;
}



undefined8 i2r_NAME_CONSTRAINTS(undefined8 param_1,long *param_2,BIO *param_3,undefined4 param_4)

{
  long lVar1;
  
  do_i2r_name_constraints_isra_0(*param_2,param_3,param_4,"Permitted");
  lVar1 = param_2[1];
  if ((*param_2 != 0) && (lVar1 != 0)) {
    BIO_puts(param_3,"\n");
    lVar1 = param_2[1];
  }
  do_i2r_name_constraints_isra_0(lVar1,param_3,param_4,"Excluded");
  return 1;
}



uint nc_match_single(int param_1,uint *param_2,long param_3)

{
  char *__s2;
  X509_NAME *a;
  X509_NAME *a_00;
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  void *pvVar6;
  size_t sVar7;
  void *pvVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  char *pcVar12;
  size_t sVar13;
  uint uVar14;
  char *pcVar15;
  char *pcVar16;
  long in_FS_OFFSET;
  char *local_158;
  char *local_150;
  char local_148;
  undefined1 local_147 [263];
  long local_40;
  
  uVar14 = *param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  switch(uVar14) {
  case 0:
    if (param_1 == 1) {
      iVar4 = **(int **)(param_3 + 8);
      pvVar6 = *(void **)(*(int **)(param_3 + 8) + 2);
      if ((iVar4 < 1) || (pvVar8 = memchr(pvVar6,0,(long)iVar4), pvVar8 == (void *)0x0)) {
        piVar1 = *(int **)(*(long *)(param_2 + 2) + 8);
        pcVar15 = (char *)CRYPTO_strndup(pvVar6,(long)iVar4,"crypto/x509/v3_ncons.c",0x2aa);
        if (pcVar15 == (char *)0x0) goto LAB_0010083a;
        if (*piVar1 == 0xc) {
          piVar1 = *(int **)(piVar1 + 2);
          iVar4 = *piVar1;
          uVar9 = (ulong)iVar4;
          lVar11 = *(long *)(piVar1 + 2);
          if (0 < iVar4) {
            pcVar12 = (char *)(lVar11 + -1 + (long)iVar4);
            do {
              if (*pcVar12 == '@') {
                lVar10 = lVar11 + -1 + (long)(int)uVar9;
                if (lVar10 != 0) goto LAB_00100792;
                break;
              }
              pcVar12 = pcVar12 + -1;
              uVar5 = (int)uVar9 - 1;
              uVar9 = (ulong)uVar5;
            } while (uVar5 != 0);
            goto LAB_00100890;
          }
          if (iVar4 == 0) goto LAB_00100890;
          lVar10 = lVar11 + -1 + uVar9;
LAB_00100792:
          if (*pcVar15 == '.') {
            local_148 = '.';
            iVar4 = ossl_a2ulabel(pcVar15,local_147,0xff);
            if (0 < iVar4) {
              iVar4 = *piVar1;
              sVar7 = strlen(&local_148);
              if (sVar7 < (ulong)(long)iVar4) {
                iVar4 = ia5ncasecmp(&local_148,((long)iVar4 - sVar7) + lVar11,sVar7);
                goto joined_r0x00100939;
              }
              goto LAB_0010093f;
            }
LAB_00100949:
            uVar14 = 1;
          }
          else {
            iVar4 = ossl_a2ulabel(pcVar15,&local_148,0x100);
            if (iVar4 < 1) goto LAB_00100949;
            sVar13 = (long)*piVar1 - ((lVar10 + 1) - *(long *)(piVar1 + 2));
            sVar7 = strlen(&local_148);
            if (sVar13 == sVar7) {
              iVar4 = ia5ncasecmp(&local_148,lVar10 + 1,sVar13);
joined_r0x00100939:
              if (iVar4 != 0) goto LAB_0010093f;
            }
            else {
LAB_0010093f:
              uVar14 = 0x2f;
            }
          }
        }
        else {
LAB_00100890:
          uVar14 = 0x35;
        }
        CRYPTO_free(pcVar15);
        break;
      }
      goto LAB_00100670;
    }
  default:
    uVar14 = 0x33;
    break;
  case 1:
    iVar4 = **(int **)(param_3 + 8);
    pcVar12 = *(char **)(*(int **)(param_3 + 8) + 2);
    __s2 = *(char **)(*(int **)(param_2 + 2) + 2);
    iVar2 = iVar4;
    if (iVar4 < 1) {
      if (iVar4 == 0) goto LAB_001006e8;
LAB_00100412:
      pcVar16 = pcVar12 + (long)iVar2 + -1;
    }
    else {
      pcVar15 = pcVar12 + (long)iVar4 + -1;
      do {
        if (*pcVar15 == '@') goto LAB_00100412;
        pcVar15 = pcVar15 + -1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
LAB_001006e8:
      pcVar16 = (char *)0x0;
    }
    iVar2 = **(int **)(param_2 + 2);
    if (iVar2 < 1) {
      if (iVar2 != 0) {
        pcVar15 = __s2 + (long)iVar2 + -1;
LAB_00100452:
        if (pcVar16 == (char *)0x0) {
          lVar11 = 0;
          if ((iVar4 < 1) || (*pcVar12 != '.')) goto LAB_001004d7;
          if (iVar4 < iVar2) {
            lVar11 = (long)iVar4;
            pcVar15 = __s2 + (iVar2 - iVar4);
            goto LAB_001004f6;
          }
        }
        else if (pcVar12 == pcVar16) {
LAB_001004ca:
          lVar11 = (long)(pcVar16 + 1) - (long)pcVar12;
          pcVar12 = pcVar16 + 1;
LAB_001004d7:
          pcVar15 = pcVar15 + 1;
          lVar11 = iVar4 - lVar11;
          if (lVar11 == (long)iVar2 - ((long)pcVar15 - (long)__s2)) goto LAB_001004f6;
        }
        else {
          sVar7 = (long)pcVar16 - (long)pcVar12;
          if (sVar7 == (long)pcVar15 - (long)__s2) {
            uVar14 = 0x35;
            pvVar6 = memchr(pcVar12,0,sVar7);
            if ((pvVar6 != (void *)0x0) || (pvVar6 = memchr(__s2,0,sVar7), pvVar6 != (void *)0x0))
            break;
            iVar3 = strncmp(pcVar12,__s2,sVar7);
            if (iVar3 == 0) goto LAB_001004ca;
          }
        }
        goto LAB_001003c0;
      }
    }
    else {
      pcVar15 = __s2 + (long)iVar2 + -1;
      iVar3 = iVar2;
      do {
        if (*pcVar15 == '@') {
          pcVar15 = __s2 + (long)iVar3 + -1;
          if (pcVar15 != (char *)0x0) goto LAB_00100452;
          break;
        }
        pcVar15 = pcVar15 + -1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
LAB_00100670:
    uVar14 = 0x35;
    break;
  case 2:
    iVar4 = **(int **)(param_2 + 2);
    pcVar15 = *(char **)(*(int **)(param_2 + 2) + 2);
    iVar2 = **(int **)(param_3 + 8);
    lVar11 = (long)iVar2;
    pcVar12 = *(char **)(*(int **)(param_3 + 8) + 2);
    if (iVar2 != 0) {
      if ((iVar4 < iVar2) ||
         (((iVar2 < iVar4 && (pcVar15 = pcVar15 + (iVar4 - iVar2), *pcVar12 != '.')) &&
          (pcVar15[-1] != '.')))) goto LAB_001003c0;
LAB_001004f6:
      iVar4 = ia5ncasecmp(pcVar12,pcVar15,lVar11);
      if (iVar4 != 0) goto LAB_001003c0;
    }
LAB_00100503:
    uVar14 = 0;
    break;
  case 4:
    a = *(X509_NAME **)(param_2 + 2);
    a_00 = *(X509_NAME **)(param_3 + 8);
    if (((a->modified != 0) && (iVar4 = i2d_X509_NAME(a,(uchar **)0x0), iVar4 < 0)) ||
       ((a_00->modified != 0 && (iVar4 = i2d_X509_NAME(a_00,(uchar **)0x0), iVar4 < 0)))) {
LAB_0010083a:
      uVar14 = 0x11;
      break;
    }
    if ((a_00->canon_enclen <= a->canon_enclen) &&
       (iVar4 = memcmp(a_00->canon_enc,a->canon_enc,(long)a_00->canon_enclen), iVar4 == 0)) {
      uVar14 = 0;
      break;
    }
    goto LAB_001003c0;
  case 6:
    piVar1 = *(int **)(param_3 + 8);
    pcVar15 = *(char **)(piVar1 + 2);
    pvVar6 = (void *)CRYPTO_strndup(*(undefined8 *)(*(int **)(param_2 + 2) + 2),
                                    (long)**(int **)(param_2 + 2),"crypto/x509/v3_ncons.c",0x318);
    if (pvVar6 == (void *)0x0) {
      uVar14 = 1;
    }
    else {
      iVar4 = OSSL_parse_url(pvVar6,&local_158,0,&local_150,0,0,0,0,0);
      if (iVar4 == 0) {
        uVar14 = 0x35;
        CRYPTO_free(pvVar6);
      }
      else {
        if ((local_158 == (char *)0x0) || (*local_158 == '\0')) {
          ERR_new();
          ERR_set_debug("crypto/x509/v3_ncons.c",0x322,"nc_uri");
          ERR_set_error(0x22,0x35,"x509: missing scheme in URI: %s\n",pvVar6);
          CRYPTO_free(pvVar6);
          uVar14 = 0x35;
        }
        else {
          CRYPTO_free(local_158);
          CRYPTO_free(pvVar6);
          uVar14 = 0x2f;
          sVar7 = strlen(local_150);
          iVar4 = *piVar1;
          iVar2 = (int)sVar7;
          if ((iVar4 < 1) || (*pcVar15 != '.')) {
            if (iVar2 == iVar4) {
              iVar4 = ia5ncasecmp(local_150,pcVar15,(long)iVar2);
              uVar14 = -(uint)(iVar4 != 0) & 0x2f;
            }
          }
          else if (iVar4 < iVar2) {
            iVar4 = ia5ncasecmp(local_150 + ((long)iVar2 - (long)iVar4),pcVar15);
            uVar14 = -(uint)(iVar4 != 0) & 0x2f;
          }
        }
        CRYPTO_free(local_150);
      }
    }
    break;
  case 7:
    iVar4 = **(int **)(param_2 + 2);
    if ((iVar4 != 4) && (uVar14 = 0x35, iVar4 != 0x10)) break;
    iVar2 = **(int **)(param_3 + 8);
    if ((iVar2 != 8) && (uVar14 = 0x35, iVar2 != 0x20)) break;
    lVar11 = *(long *)(*(int **)(param_3 + 8) + 2);
    if (iVar2 == iVar4 * 2) {
      lVar10 = 0;
      do {
        if (((*(byte *)(*(long *)(*(int **)(param_2 + 2) + 2) + lVar10) ^ *(byte *)(lVar11 + lVar10)
             ) & *(byte *)(lVar11 + iVar4 + lVar10)) != 0) goto LAB_001003c0;
        lVar10 = lVar10 + 1;
      } while ((int)lVar10 < iVar4);
      goto LAB_00100503;
    }
LAB_001003c0:
    uVar14 = 0x2f;
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar14;
}



undefined8 nc_match(uint *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = *param_1;
  if (uVar6 == 0) {
    iVar5 = OBJ_obj2nid((ASN1_OBJECT *)**(undefined8 **)(param_1 + 2));
    uVar6 = (uint)(iVar5 == 0x4b8);
  }
  iVar2 = 0;
  iVar5 = 0;
  do {
    iVar1 = OPENSSL_sk_num(*param_2);
    if (iVar1 <= iVar5) {
      if (iVar2 == 1) {
        return 0x2f;
      }
      iVar5 = 0;
      do {
        iVar2 = OPENSSL_sk_num(param_2[1]);
        if (iVar2 <= iVar5) {
          return 0;
        }
        puVar3 = (undefined8 *)OPENSSL_sk_value(param_2[1],iVar5);
        if ((*(uint *)*puVar3 == uVar6) &&
           ((uVar6 != 0 ||
            (iVar2 = OBJ_cmp((ASN1_OBJECT *)**(undefined8 **)(param_1 + 2),
                             (ASN1_OBJECT *)**(undefined8 **)((uint *)*puVar3 + 2)), iVar2 == 0))))
        {
          iVar2 = nc_minmax_valid_isra_0(puVar3[1],puVar3[2]);
          if (iVar2 == 0) {
            return 0x31;
          }
          uVar4 = nc_match_single(uVar6,param_1,*puVar3);
          if ((int)uVar4 == 0) {
            return 0x30;
          }
          if ((int)uVar4 != 0x2f) {
            return uVar4;
          }
        }
        iVar5 = iVar5 + 1;
      } while( true );
    }
    puVar3 = (undefined8 *)OPENSSL_sk_value(*param_2,iVar5);
    if ((*(uint *)*puVar3 == uVar6) &&
       ((uVar6 != 0 ||
        (iVar1 = OBJ_cmp((ASN1_OBJECT *)**(undefined8 **)(param_1 + 2),
                         (ASN1_OBJECT *)**(undefined8 **)((uint *)*puVar3 + 2)), iVar1 == 0)))) {
      iVar1 = nc_minmax_valid_isra_0(puVar3[1],puVar3[2]);
      if (iVar1 == 0) {
        return 0x31;
      }
      if (iVar2 != 2) {
        if (iVar2 == 0) {
          iVar2 = 1;
        }
        uVar4 = nc_match_single(uVar6,param_1,*puVar3);
        if ((int)uVar4 != 0) {
          if ((int)uVar4 != 0x2f) {
            return uVar4;
          }
          goto LAB_001009c0;
        }
      }
      iVar2 = 2;
    }
LAB_001009c0:
    iVar5 = iVar5 + 1;
  } while( true );
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

GENERAL_SUBTREE * GENERAL_SUBTREE_new(void)

{
  ASN1_ITEM *it;
  GENERAL_SUBTREE *pGVar1;
  
  it = (ASN1_ITEM *)GENERAL_SUBTREE_it();
  pGVar1 = (GENERAL_SUBTREE *)ASN1_item_new(it);
  return pGVar1;
}



void GENERAL_SUBTREE_free(GENERAL_SUBTREE *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)GENERAL_SUBTREE_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

NAME_CONSTRAINTS * NAME_CONSTRAINTS_new(void)

{
  ASN1_ITEM *it;
  NAME_CONSTRAINTS *pNVar1;
  
  it = (ASN1_ITEM *)NAME_CONSTRAINTS_it();
  pNVar1 = (NAME_CONSTRAINTS *)ASN1_item_new(it);
  return pNVar1;
}



void NAME_CONSTRAINTS_free(NAME_CONSTRAINTS *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)NAME_CONSTRAINTS_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}



NAME_CONSTRAINTS *
v2i_NAME_CONSTRAINTS(X509V3_EXT_METHOD *param_1,X509V3_CTX *param_2,undefined8 param_3)

{
  char *__s1;
  int iVar1;
  NAME_CONSTRAINTS *a;
  GENERAL_SUBTREE *a_00;
  GENERAL_NAME *pGVar2;
  long lVar3;
  stack_st_GENERAL_SUBTREE *psVar4;
  int iVar5;
  undefined8 uVar6;
  NAME_CONSTRAINTS *pNVar7;
  long in_FS_OFFSET;
  CONF_VALUE local_58;
  long local_40;
  
  iVar5 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  a = NAME_CONSTRAINTS_new();
  if (a == (NAME_CONSTRAINTS *)0x0) {
    ERR_new();
    uVar6 = 0xa0;
LAB_00100dd9:
    a_00 = (GENERAL_SUBTREE *)0x0;
    ERR_set_debug("crypto/x509/v3_ncons.c",uVar6,"v2i_NAME_CONSTRAINTS");
    ERR_set_error(0x22,0x8000d,0);
LAB_00100d55:
    NAME_CONSTRAINTS_free(a);
    GENERAL_SUBTREE_free(a_00);
    a = (NAME_CONSTRAINTS *)0x0;
  }
  else {
    while( true ) {
      iVar1 = OPENSSL_sk_num(param_3);
      if (iVar1 <= iVar5) break;
      lVar3 = OPENSSL_sk_value(param_3,iVar5);
      __s1 = *(char **)(lVar3 + 8);
      iVar1 = strncmp(__s1,"permitted",9);
      if ((iVar1 == 0) && (__s1[9] != '\0')) {
        local_58.name = __s1 + 10;
        pNVar7 = a;
      }
      else {
        iVar1 = strncmp(__s1,"excluded",8);
        if ((iVar1 != 0) || (__s1[8] == '\0')) {
          ERR_new();
          a_00 = (GENERAL_SUBTREE *)0x0;
          ERR_set_debug("crypto/x509/v3_ncons.c",0xac,"v2i_NAME_CONSTRAINTS");
          ERR_set_error(0x22,0x8f,0);
          goto LAB_00100d55;
        }
        local_58.name = __s1 + 9;
        pNVar7 = (NAME_CONSTRAINTS *)&a->excludedSubtrees;
      }
      local_58.value = *(char **)(lVar3 + 0x10);
      a_00 = GENERAL_SUBTREE_new();
      if (a_00 == (GENERAL_SUBTREE *)0x0) {
        ERR_new();
        uVar6 = 0xb2;
        goto LAB_00100dd9;
      }
      pGVar2 = v2i_GENERAL_NAME_ex(a_00->base,param_1,param_2,&local_58,1);
      if (pGVar2 == (GENERAL_NAME *)0x0) {
        ERR_new();
        ERR_set_debug("crypto/x509/v3_ncons.c",0xb6,"v2i_NAME_CONSTRAINTS");
        ERR_set_error(0x22,0x80022,0);
        goto LAB_00100d55;
      }
      psVar4 = pNVar7->permittedSubtrees;
      if (psVar4 == (stack_st_GENERAL_SUBTREE *)0x0) {
        psVar4 = (stack_st_GENERAL_SUBTREE *)OPENSSL_sk_new_null();
        pNVar7->permittedSubtrees = psVar4;
        if (psVar4 != (stack_st_GENERAL_SUBTREE *)0x0) goto LAB_00100c84;
LAB_00100d25:
        ERR_new();
        ERR_set_debug("crypto/x509/v3_ncons.c",0xbc,"v2i_NAME_CONSTRAINTS");
        ERR_set_error(0x22,0x8000f,0);
        goto LAB_00100d55;
      }
LAB_00100c84:
      iVar1 = OPENSSL_sk_push(psVar4,a_00);
      if (iVar1 == 0) goto LAB_00100d25;
      iVar5 = iVar5 + 1;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return a;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int NAME_CONSTRAINTS_check(X509 *x,NAME_CONSTRAINTS *nc)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  X509_NAME *name;
  undefined8 uVar6;
  X509_NAME_ENTRY *ne;
  uint uVar7;
  int iVar8;
  bool bVar9;
  long in_FS_OFFSET;
  undefined4 local_58 [2];
  X509_NAME *local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  name = X509_get_subject_name(x);
  uVar1 = OPENSSL_sk_num(x[1].ex_kusage);
  iVar2 = X509_NAME_entry_count(name);
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  uVar4 = 0;
  if (-1 < (int)uVar1) {
    uVar4 = uVar1;
  }
  uVar1 = iVar2 + uVar4;
  if ((-1 < (int)uVar1) && (uVar4 <= uVar1)) {
    uVar3 = OPENSSL_sk_num(nc->excludedSubtrees);
    uVar4 = OPENSSL_sk_num(nc->permittedSubtrees);
    if ((int)uVar4 < 0) {
      uVar4 = 0;
    }
    uVar7 = 0;
    if (-1 < (int)uVar3) {
      uVar7 = uVar3;
    }
    bVar9 = false;
    uVar4 = uVar4 + uVar7;
    if (((int)uVar4 < 0) || (uVar4 < uVar7)) {
      bVar9 = true;
    }
    if ((!bVar9) && (((int)uVar1 < 1 || ((int)uVar4 <= (int)(0x100000 / (long)(int)uVar1))))) {
      iVar2 = X509_NAME_entry_count(name);
      if (iVar2 < 1) {
LAB_00100f3d:
        iVar8 = 0;
        while( true ) {
          iVar5 = OPENSSL_sk_num(x[1].ex_kusage);
          iVar2 = 0;
          if (iVar5 <= iVar8) break;
          uVar6 = OPENSSL_sk_value(x[1].ex_kusage,iVar8);
          iVar2 = nc_match(uVar6,nc);
          if (iVar2 != 0) break;
          iVar8 = iVar8 + 1;
        }
      }
      else {
        local_58[0] = 4;
        local_50 = name;
        iVar2 = nc_match(local_58,nc);
        if (iVar2 == 0) {
          local_58[0] = 1;
          iVar8 = -1;
          do {
            iVar8 = X509_NAME_get_index_by_NID(name,0x30,iVar8);
            if (iVar8 == -1) goto LAB_00100f3d;
            ne = X509_NAME_get_entry(name,iVar8);
            local_50 = (X509_NAME *)X509_NAME_ENTRY_get_data(ne);
            if (*(int *)((long)&local_50->entries + 4) != 0x16) {
              iVar2 = 0x35;
              break;
            }
            iVar2 = nc_match(local_58,nc);
          } while (iVar2 == 0);
        }
      }
      goto LAB_00100ef0;
    }
  }
  iVar2 = 1;
LAB_00100ef0:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



int NAME_CONSTRAINTS_check_CN(X509 *param_1,undefined8 param_2)

{
  byte bVar1;
  bool bVar2;
  uchar *ptr;
  int lastpos;
  int iVar3;
  X509_NAME *name;
  X509_NAME_ENTRY *ne;
  ASN1_STRING *in;
  void *pvVar4;
  long lVar5;
  size_t __n;
  long in_FS_OFFSET;
  uchar *local_70;
  undefined4 local_68 [2];
  int *local_60;
  int local_58 [2];
  uchar *local_50;
  undefined8 local_48;
  long local_40;
  
  lastpos = -1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  name = X509_get_subject_name(param_1);
  local_58[1] = 0x16;
  local_60 = local_58;
  local_48 = 0;
  local_68[0] = 2;
LAB_00101090:
  lastpos = X509_NAME_get_index_by_NID(name,0xd,lastpos);
  if (lastpos == -1) {
    iVar3 = 0;
  }
  else {
    ne = X509_NAME_get_entry(name,lastpos);
    in = X509_NAME_ENTRY_get_data(ne);
    iVar3 = ASN1_STRING_to_UTF8(&local_70,in);
    ptr = local_70;
    if (-1 < iVar3) {
      if (iVar3 != 0) {
        __n = (size_t)iVar3;
        do {
          if (local_70[__n - 1] != '\0') {
            pvVar4 = memchr(local_70,0,__n);
            if (pvVar4 == (void *)0x0) {
              iVar3 = (int)__n;
              lVar5 = 0;
              bVar2 = false;
              goto LAB_00101153;
            }
            iVar3 = 0x35;
            CRYPTO_free(ptr);
            goto LAB_0010111e;
          }
          __n = __n - 1;
        } while (__n != 0);
      }
      goto LAB_001011d3;
    }
    iVar3 = 0x11;
  }
  goto LAB_0010111e;
LAB_00101153:
  do {
    bVar1 = ptr[lVar5];
    if (bVar1 < 0x3a) {
      if (bVar1 < 0x30) {
        if ((lVar5 == 0) || (iVar3 + -1 <= (int)lVar5)) goto LAB_001011d3;
        if (bVar1 != 0x2d) goto LAB_00101209;
      }
    }
    else if ((byte)(bVar1 - 0x41) < 0x3a) {
      if ((0x3ffffff43ffffffU >> ((ulong)(bVar1 - 0x41) & 0x3f) & 1) == 0) goto LAB_001011d3;
    }
    else {
      if ((lVar5 == 0) || (iVar3 + -1 <= (int)lVar5)) goto LAB_001011d3;
LAB_00101209:
      if ((bVar1 != 0x2e) ||
         (((ptr[lVar5 + 1] == '.' || (ptr[lVar5 + -1] == '-')) || (ptr[lVar5 + 1] == '-'))))
      goto LAB_001011d3;
      bVar2 = true;
    }
    lVar5 = lVar5 + 1;
  } while (lVar5 != iVar3);
  if (bVar2) {
    local_50 = ptr;
    local_58[0] = iVar3;
    iVar3 = nc_match(local_68,param_2);
    CRYPTO_free(ptr);
    if (iVar3 != 0) {
LAB_0010111e:
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return iVar3;
    }
  }
  else {
LAB_001011d3:
    CRYPTO_free(ptr);
  }
  goto LAB_00101090;
}


