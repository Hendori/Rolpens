
undefined1 * GENERAL_SUBTREE_it(void)

{
  return local_it_2;
}



undefined1 * NAME_CONSTRAINTS_it(void)

{
  return local_it_1;
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



undefined4 nc_match_single(int param_1,undefined4 *param_2,long param_3)

{
  char cVar1;
  X509_NAME *a;
  X509_NAME *a_00;
  int *piVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  long lVar7;
  void *pvVar8;
  size_t sVar9;
  void *pvVar10;
  long lVar11;
  undefined4 uVar12;
  int iVar13;
  char cVar14;
  char *pcVar15;
  char *pcVar16;
  long lVar17;
  char *pcVar18;
  long in_FS_OFFSET;
  char *local_158;
  char *local_150;
  char local_148 [264];
  long local_40;
  
  uVar12 = *param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  switch(uVar12) {
  case 0:
    if (param_1 == 1) {
      iVar4 = **(int **)(param_3 + 8);
      pvVar8 = *(void **)(*(int **)(param_3 + 8) + 2);
      if ((iVar4 < 1) || (pvVar10 = memchr(pvVar8,0,(long)iVar4), pvVar10 == (void *)0x0)) {
        piVar2 = *(int **)(*(long *)(param_2 + 2) + 8);
        pcVar18 = (char *)CRYPTO_strndup(pvVar8,(long)iVar4,"crypto/x509/v3_ncons.c",0x2aa);
        if (pcVar18 == (char *)0x0) goto LAB_001008b2;
        if (*piVar2 == 0xc) {
          piVar2 = *(int **)(piVar2 + 2);
          iVar4 = *piVar2;
          lVar17 = *(long *)(piVar2 + 2);
          if (0 < iVar4) {
            pcVar15 = (char *)(lVar17 + -1 + (long)iVar4);
            do {
              if (*pcVar15 == '@') {
                lVar11 = (long)iVar4;
                if (lVar17 + -1 + lVar11 != 0) goto LAB_0010079b;
                break;
              }
              pcVar15 = pcVar15 + -1;
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
            goto LAB_00100900;
          }
          if (iVar4 == 0) goto LAB_00100900;
          lVar11 = (long)iVar4;
LAB_0010079b:
          if (*pcVar18 == '.') {
            local_148[0] = '.';
            iVar4 = ossl_a2ulabel(pcVar18,local_148 + 1,0xff);
            if (iVar4 < 1) goto LAB_00100ae0;
            iVar4 = *piVar2;
            sVar9 = strlen(local_148);
            if ((ulong)(long)iVar4 <= sVar9) goto LAB_00100827;
            pcVar16 = (char *)(((long)iVar4 - sVar9) + lVar17);
            pcVar15 = local_148;
            if (sVar9 != 0) {
              do {
                cVar1 = *pcVar15;
                cVar3 = *pcVar16;
                if (cVar1 != cVar3) {
                  cVar14 = cVar1 + ' ';
                  if (0x19 < (byte)(cVar1 + 0xbfU)) {
                    cVar14 = cVar1;
                  }
                  if ((byte)(cVar3 + 0xbfU) < 0x1a) {
                    cVar3 = cVar3 + ' ';
                  }
                  if (cVar14 != cVar3) goto LAB_00100827;
                }
                pcVar15 = pcVar15 + 1;
                pcVar16 = pcVar16 + 1;
              } while (pcVar15 != local_148 + sVar9);
            }
          }
          else {
            iVar4 = ossl_a2ulabel(pcVar18,local_148,0x100);
            if (iVar4 < 1) {
LAB_00100ae0:
              uVar12 = 1;
            }
            else {
              pcVar15 = (char *)(lVar11 + lVar17);
              sVar9 = strlen(local_148);
              if ((long)*piVar2 - ((long)pcVar15 - *(long *)(piVar2 + 2)) == sVar9) {
                pcVar16 = local_148;
                if (sVar9 != 0) {
                  do {
                    cVar1 = *pcVar16;
                    cVar3 = *pcVar15;
                    if (cVar1 != cVar3) {
                      cVar14 = cVar1 + ' ';
                      if (0x19 < (byte)(cVar1 + 0xbfU)) {
                        cVar14 = cVar1;
                      }
                      if ((byte)(cVar3 + 0xbfU) < 0x1a) {
                        cVar3 = cVar3 + ' ';
                      }
                      if (cVar14 != cVar3) goto LAB_00100827;
                    }
                    pcVar16 = pcVar16 + 1;
                    pcVar15 = pcVar15 + 1;
                  } while (pcVar16 != local_148 + sVar9);
                }
              }
              else {
LAB_00100827:
                uVar12 = 0x2f;
              }
            }
          }
        }
        else {
LAB_00100900:
          uVar12 = 0x35;
        }
        CRYPTO_free(pcVar18);
        break;
      }
      goto LAB_00100658;
    }
  default:
    uVar12 = 0x33;
    break;
  case 1:
    iVar4 = **(int **)(param_3 + 8);
    lVar17 = (long)iVar4;
    iVar5 = **(int **)(param_2 + 2);
    pcVar18 = *(char **)(*(int **)(param_2 + 2) + 2);
    pcVar15 = *(char **)(*(int **)(param_3 + 8) + 2);
    iVar13 = iVar4;
    if (iVar4 < 1) {
      if (iVar4 == 0) goto LAB_001006d0;
LAB_00100362:
      pcVar16 = pcVar15 + (long)iVar13 + -1;
    }
    else {
      pcVar16 = pcVar15 + (long)iVar4 + -1;
      do {
        if (*pcVar16 == '@') goto LAB_00100362;
        pcVar16 = pcVar16 + -1;
        iVar13 = iVar13 + -1;
      } while (iVar13 != 0);
LAB_001006d0:
      pcVar16 = (char *)0x0;
    }
    iVar13 = iVar5;
    if (iVar5 < 1) {
      if (iVar5 != 0) {
        lVar11 = (long)iVar5;
        sVar9 = lVar11 - 1;
LAB_001003a5:
        if (pcVar16 == (char *)0x0) {
          if (iVar4 < 1) {
            lVar7 = 0;
            goto LAB_0010042d;
          }
          if (*pcVar15 == '.') {
            if (iVar4 < iVar5) {
              pcVar16 = pcVar18 + (iVar5 - iVar4);
              do {
                cVar1 = *pcVar15;
                cVar3 = *pcVar16;
                if (cVar1 != cVar3) {
                  cVar14 = cVar1 + ' ';
                  if (0x19 < (byte)(cVar1 + 0xbfU)) {
                    cVar14 = cVar1;
                  }
                  if ((byte)(cVar3 + 0xbfU) < 0x1a) {
                    cVar3 = cVar3 + ' ';
                  }
                  if (cVar14 != cVar3) goto LAB_001004f1;
                }
                pcVar16 = pcVar16 + 1;
                pcVar15 = pcVar15 + 1;
              } while (pcVar16 != pcVar18 + (iVar5 - iVar4) + lVar17);
              uVar12 = 0;
              break;
            }
            goto LAB_001004f1;
          }
          if (lVar17 != (long)iVar5 - (long)iVar13) goto LAB_001004f1;
        }
        else {
          if (pcVar15 != pcVar16) {
            if ((long)pcVar16 - (long)pcVar15 == sVar9) {
              uVar12 = 0x35;
              pvVar8 = memchr(pcVar15,0,sVar9);
              if ((pvVar8 != (void *)0x0) ||
                 (pvVar8 = memchr(pcVar18,0,sVar9), pvVar8 != (void *)0x0)) break;
              iVar4 = strncmp(pcVar15,pcVar18,sVar9);
              if (iVar4 == 0) goto LAB_00100423;
            }
            goto LAB_001004f1;
          }
LAB_00100423:
          lVar7 = (long)(pcVar16 + 1) - (long)pcVar15;
          pcVar15 = pcVar16 + 1;
LAB_0010042d:
          lVar17 = lVar17 - lVar7;
          if (lVar17 != (long)iVar5 - (long)iVar13) goto LAB_001004f1;
          if (lVar17 == 0) goto LAB_00100480;
        }
        lVar7 = 0;
        do {
          cVar1 = pcVar15[lVar7];
          cVar3 = pcVar18[lVar7 + lVar11];
          if (cVar1 != cVar3) {
            cVar14 = cVar1 + ' ';
            if (0x19 < (byte)(cVar1 + 0xbfU)) {
              cVar14 = cVar1;
            }
            if ((byte)(cVar3 + 0xbfU) < 0x1a) {
              cVar3 = cVar3 + ' ';
            }
            if (cVar14 != cVar3) goto LAB_001004f1;
          }
          lVar7 = lVar7 + 1;
        } while (lVar17 != lVar7);
        goto LAB_00100480;
      }
    }
    else {
      pcVar6 = pcVar18 + (long)iVar5 + -1;
      do {
        if (*pcVar6 == '@') {
          lVar11 = (long)iVar13;
          sVar9 = lVar11 - 1;
          if (pcVar18 + sVar9 != (char *)0x0) goto LAB_001003a5;
          break;
        }
        pcVar6 = pcVar6 + -1;
        iVar13 = iVar13 + -1;
      } while (iVar13 != 0);
    }
LAB_00100658:
    uVar12 = 0x35;
    break;
  case 2:
    iVar4 = **(int **)(param_2 + 2);
    lVar17 = *(long *)(*(int **)(param_2 + 2) + 2);
    iVar5 = **(int **)(param_3 + 8);
    pcVar18 = *(char **)(*(int **)(param_3 + 8) + 2);
    if (iVar5 != 0) {
      if ((iVar5 <= iVar4) &&
         (((iVar4 <= iVar5 || (lVar17 = lVar17 + (iVar4 - iVar5), *pcVar18 == '.')) ||
          (*(char *)(lVar17 + -1) == '.')))) {
        lVar11 = 0;
        do {
          cVar1 = pcVar18[lVar11];
          cVar3 = *(char *)(lVar17 + lVar11);
          if (cVar1 != cVar3) {
            cVar14 = cVar1 + ' ';
            if (0x19 < (byte)(cVar1 + 0xbfU)) {
              cVar14 = cVar1;
            }
            if ((byte)(cVar3 + 0xbfU) < 0x1a) {
              cVar3 = cVar3 + ' ';
            }
            if (cVar14 != cVar3) goto LAB_001004f1;
          }
          lVar11 = lVar11 + 1;
        } while (iVar5 != lVar11);
        uVar12 = 0;
        break;
      }
      goto LAB_001004f1;
    }
    goto LAB_00100480;
  case 4:
    a = *(X509_NAME **)(param_2 + 2);
    a_00 = *(X509_NAME **)(param_3 + 8);
    if (((a->modified != 0) && (iVar4 = i2d_X509_NAME(a,(uchar **)0x0), iVar4 < 0)) ||
       ((a_00->modified != 0 && (iVar4 = i2d_X509_NAME(a_00,(uchar **)0x0), iVar4 < 0)))) {
LAB_001008b2:
      uVar12 = 0x11;
      break;
    }
    if ((a_00->canon_enclen <= a->canon_enclen) &&
       (iVar4 = memcmp(a_00->canon_enc,a->canon_enc,(long)a_00->canon_enclen), iVar4 == 0)) {
      uVar12 = 0;
      break;
    }
LAB_001004f1:
    uVar12 = 0x2f;
    break;
  case 6:
    piVar2 = *(int **)(param_3 + 8);
    pcVar18 = *(char **)(piVar2 + 2);
    pvVar8 = (void *)CRYPTO_strndup(*(undefined8 *)(*(int **)(param_2 + 2) + 2),
                                    (long)**(int **)(param_2 + 2),"crypto/x509/v3_ncons.c",0x318);
    if (pvVar8 == (void *)0x0) {
      uVar12 = 1;
      break;
    }
    iVar4 = OSSL_parse_url(pvVar8,&local_158,0,&local_150,0,0,0,0,0);
    if (iVar4 == 0) {
      uVar12 = 0x35;
      CRYPTO_free(pvVar8);
      break;
    }
    if ((local_158 == (char *)0x0) || (*local_158 == '\0')) {
      ERR_new();
      ERR_set_debug("crypto/x509/v3_ncons.c",0x322,"nc_uri");
      ERR_set_error(0x22,0x35,"x509: missing scheme in URI: %s\n",pvVar8);
      CRYPTO_free(pvVar8);
      uVar12 = 0x35;
    }
    else {
      CRYPTO_free(local_158);
      CRYPTO_free(pvVar8);
      uVar12 = 0x2f;
      sVar9 = strlen(local_150);
      iVar4 = *piVar2;
      iVar5 = (int)sVar9;
      if (iVar4 < 1) {
        if (iVar5 == iVar4) {
          if (iVar5 != 0) goto LAB_00100613;
          uVar12 = 0;
        }
      }
      else if (*pcVar18 == '.') {
        if (iVar4 < iVar5) {
          pcVar15 = local_150 + ((long)iVar5 - (long)iVar4);
          do {
            cVar1 = *pcVar15;
            cVar3 = *pcVar18;
            if (cVar1 != cVar3) {
              cVar14 = cVar1 + ' ';
              if (0x19 < (byte)(cVar1 + 0xbfU)) {
                cVar14 = cVar1;
              }
              if ((byte)(cVar3 + 0xbfU) < 0x1a) {
                cVar3 = cVar3 + ' ';
              }
              if (cVar14 != cVar3) goto LAB_0010064b;
            }
            pcVar15 = pcVar15 + 1;
            pcVar18 = pcVar18 + 1;
          } while (pcVar15 != local_150 + ((long)iVar5 - (long)iVar4) + iVar4);
          uVar12 = 0;
        }
      }
      else if (iVar5 == iVar4) {
LAB_00100613:
        pcVar15 = local_150;
        do {
          cVar1 = *pcVar15;
          cVar3 = *pcVar18;
          if (cVar1 != cVar3) {
            cVar14 = cVar1 + ' ';
            if (0x19 < (byte)(cVar1 + 0xbfU)) {
              cVar14 = cVar1;
            }
            if ((byte)(cVar3 + 0xbfU) < 0x1a) {
              cVar3 = cVar3 + ' ';
            }
            if (cVar14 != cVar3) goto LAB_0010064b;
          }
          pcVar15 = pcVar15 + 1;
          pcVar18 = pcVar18 + 1;
        } while (pcVar15 != local_150 + iVar5);
        uVar12 = 0;
      }
    }
    goto LAB_001006b6;
  case 7:
    iVar4 = **(int **)(param_2 + 2);
    if ((iVar4 != 4) && (uVar12 = 0x35, iVar4 != 0x10)) break;
    iVar5 = **(int **)(param_3 + 8);
    if ((iVar5 != 8) && (uVar12 = 0x35, iVar5 != 0x20)) break;
    lVar17 = *(long *)(*(int **)(param_3 + 8) + 2);
    if (iVar5 != iVar4 * 2) goto LAB_001004f1;
    lVar11 = 0;
    do {
      if (((*(byte *)(*(long *)(*(int **)(param_2 + 2) + 2) + lVar11) ^ *(byte *)(lVar17 + lVar11))
          & *(byte *)(lVar17 + iVar4 + lVar11)) != 0) goto LAB_001004f1;
      lVar11 = lVar11 + 1;
    } while ((int)lVar11 < iVar4);
LAB_00100480:
    uVar12 = 0;
  }
LAB_00100286:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar12;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_0010064b:
  uVar12 = 0x2f;
LAB_001006b6:
  CRYPTO_free(local_150);
  goto LAB_00100286;
}



undefined8 nc_match(uint *param_1,undefined8 *param_2)

{
  ASN1_INTEGER *pAVar1;
  bool bVar2;
  int iVar3;
  undefined8 *puVar4;
  BIGNUM *a;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  uVar8 = *param_1;
  if (uVar8 == 0) {
    iVar7 = OBJ_obj2nid((ASN1_OBJECT *)**(undefined8 **)(param_1 + 2));
    uVar8 = (uint)(iVar7 == 0x4b8);
  }
  iVar7 = 0;
  for (iVar6 = 0; iVar3 = OPENSSL_sk_num(*param_2), iVar6 < iVar3; iVar6 = iVar6 + 1) {
    puVar4 = (undefined8 *)OPENSSL_sk_value(*param_2);
    if ((*(uint *)*puVar4 == uVar8) &&
       ((uVar8 != 0 ||
        (iVar3 = OBJ_cmp((ASN1_OBJECT *)**(undefined8 **)(param_1 + 2),
                         (ASN1_OBJECT *)**(undefined8 **)((uint *)*puVar4 + 2)), iVar3 == 0)))) {
      pAVar1 = (ASN1_INTEGER *)puVar4[1];
      if (puVar4[2] == 0) {
        bVar2 = true;
        if (pAVar1 != (ASN1_INTEGER *)0x0) goto LAB_00100bd1;
      }
      else {
        if (pAVar1 == (ASN1_INTEGER *)0x0) {
          return 0x31;
        }
        bVar2 = false;
LAB_00100bd1:
        a = ASN1_INTEGER_to_BN(pAVar1,(BIGNUM *)0x0);
        if (a == (BIGNUM *)0x0) goto LAB_00100c38;
        iVar3 = BN_is_zero();
        if (iVar3 == 0) goto LAB_00100c3a;
        BN_free(a);
        if (!bVar2) {
          return 0x31;
        }
      }
      if (iVar7 != 2) {
        if (iVar7 == 0) {
          iVar7 = 1;
        }
        uVar5 = nc_match_single(uVar8,param_1,*puVar4);
        if ((int)uVar5 != 0) {
          if ((int)uVar5 != 0x2f) {
            return uVar5;
          }
          goto LAB_00100b70;
        }
      }
      iVar7 = 2;
    }
LAB_00100b70:
  }
  if (iVar7 == 1) {
    return 0x2f;
  }
  iVar7 = 0;
  do {
    iVar6 = OPENSSL_sk_num(param_2[1]);
    if (iVar6 <= iVar7) {
      return 0;
    }
    puVar4 = (undefined8 *)OPENSSL_sk_value(param_2[1]);
    if ((*(uint *)*puVar4 == uVar8) &&
       ((uVar8 != 0 ||
        (iVar6 = OBJ_cmp((ASN1_OBJECT *)**(undefined8 **)(param_1 + 2),
                         (ASN1_OBJECT *)**(undefined8 **)((uint *)*puVar4 + 2)), iVar6 == 0)))) {
      pAVar1 = (ASN1_INTEGER *)puVar4[1];
      if (puVar4[2] == 0) {
        bVar2 = true;
        if (pAVar1 != (ASN1_INTEGER *)0x0) goto LAB_00100c88;
      }
      else {
        if (pAVar1 == (ASN1_INTEGER *)0x0) {
          return 0x31;
        }
        bVar2 = false;
LAB_00100c88:
        a = ASN1_INTEGER_to_BN(pAVar1,(BIGNUM *)0x0);
        if (a == (BIGNUM *)0x0) {
LAB_00100c38:
          a = (BIGNUM *)0x0;
LAB_00100c3a:
          BN_free(a);
          return 0x31;
        }
        iVar6 = BN_is_zero();
        if (iVar6 == 0) goto LAB_00100c3a;
        BN_free(a);
        if (!bVar2) {
          return 0x31;
        }
      }
      uVar5 = nc_match_single(uVar8,param_1,*puVar4);
      if ((int)uVar5 == 0) {
        return 0x30;
      }
      if ((int)uVar5 != 0x2f) {
        return uVar5;
      }
    }
    iVar7 = iVar7 + 1;
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
LAB_00101019:
    a_00 = (GENERAL_SUBTREE *)0x0;
    ERR_set_debug("crypto/x509/v3_ncons.c",uVar6,"v2i_NAME_CONSTRAINTS");
    ERR_set_error(0x22,0x8000d,0);
LAB_00100f95:
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
          goto LAB_00100f95;
        }
        local_58.name = __s1 + 9;
        pNVar7 = (NAME_CONSTRAINTS *)&a->excludedSubtrees;
      }
      local_58.value = *(char **)(lVar3 + 0x10);
      a_00 = GENERAL_SUBTREE_new();
      if (a_00 == (GENERAL_SUBTREE *)0x0) {
        ERR_new();
        uVar6 = 0xb2;
        goto LAB_00101019;
      }
      pGVar2 = v2i_GENERAL_NAME_ex(a_00->base,param_1,param_2,&local_58,1);
      if (pGVar2 == (GENERAL_NAME *)0x0) {
        ERR_new();
        ERR_set_debug("crypto/x509/v3_ncons.c",0xb6,"v2i_NAME_CONSTRAINTS");
        ERR_set_error(0x22,0x80022,0);
        goto LAB_00100f95;
      }
      psVar4 = pNVar7->permittedSubtrees;
      if (psVar4 == (stack_st_GENERAL_SUBTREE *)0x0) {
        psVar4 = (stack_st_GENERAL_SUBTREE *)OPENSSL_sk_new_null();
        pNVar7->permittedSubtrees = psVar4;
        if (psVar4 != (stack_st_GENERAL_SUBTREE *)0x0) goto LAB_00100ec4;
LAB_00100f65:
        ERR_new();
        ERR_set_debug("crypto/x509/v3_ncons.c",0xbc,"v2i_NAME_CONSTRAINTS");
        ERR_set_error(0x22,0x8000f,0);
        goto LAB_00100f95;
      }
LAB_00100ec4:
      iVar1 = OPENSSL_sk_push(psVar4,a_00);
      if (iVar1 == 0) goto LAB_00100f65;
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
LAB_0010117d:
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
            if (iVar8 == -1) goto LAB_0010117d;
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
      goto LAB_00101130;
    }
  }
  iVar2 = 1;
LAB_00101130:
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
LAB_001012d0:
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
              goto LAB_00101393;
            }
            iVar3 = 0x35;
            CRYPTO_free(ptr);
            goto LAB_0010135e;
          }
          __n = __n - 1;
        } while (__n != 0);
      }
      goto LAB_00101413;
    }
    iVar3 = 0x11;
  }
  goto LAB_0010135e;
LAB_00101393:
  do {
    bVar1 = ptr[lVar5];
    if (bVar1 < 0x3a) {
      if (bVar1 < 0x30) {
        if ((lVar5 == 0) || (iVar3 + -1 <= (int)lVar5)) goto LAB_00101413;
        if (bVar1 != 0x2d) goto LAB_00101449;
      }
    }
    else if ((byte)(bVar1 - 0x41) < 0x3a) {
      if ((0x3ffffff43ffffffU >> ((ulong)(bVar1 - 0x41) & 0x3f) & 1) == 0) goto LAB_00101413;
    }
    else {
      if ((lVar5 == 0) || (iVar3 + -1 <= (int)lVar5)) goto LAB_00101413;
LAB_00101449:
      if ((bVar1 != 0x2e) ||
         (((ptr[lVar5 + 1] == '.' || (ptr[lVar5 + -1] == '-')) || (ptr[lVar5 + 1] == '-'))))
      goto LAB_00101413;
      bVar2 = true;
    }
    lVar5 = lVar5 + 1;
  } while (iVar3 != lVar5);
  if (bVar2) {
    local_50 = ptr;
    local_58[0] = iVar3;
    iVar3 = nc_match(local_68,param_2);
    CRYPTO_free(ptr);
    if (iVar3 != 0) {
LAB_0010135e:
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return iVar3;
    }
  }
  else {
LAB_00101413:
    CRYPTO_free(ptr);
  }
  goto LAB_001012d0;
}


