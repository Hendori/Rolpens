
undefined8
parse_bags_constprop_0
          (undefined8 param_1,undefined8 param_2,long *param_3,long param_4,undefined8 param_5,
          undefined8 param_6)

{
  int iVar1;
  PKCS8_PRIV_KEY_INFO *a;
  long lVar2;
  ASN1_STRING *pAVar3;
  int *piVar4;
  X509 *x;
  undefined8 uVar5;
  int iVar6;
  long in_FS_OFFSET;
  uchar *local_48;
  long local_40;
  
  iVar6 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 == (long *)0x0) {
    if (param_4 == 0) {
      for (iVar6 = 0; iVar1 = OPENSSL_sk_num(param_1), iVar6 < iVar1; iVar6 = iVar6 + 1) {
        uVar5 = OPENSSL_sk_value(param_1,iVar6);
        PKCS12_SAFEBAG_get0_attr(uVar5,0x9c);
        PKCS12_SAFEBAG_get0_attr(uVar5,0x9d);
        iVar1 = PKCS12_SAFEBAG_get_nid(uVar5);
        if ((0x98 < iVar1) && (iVar1 == 0x9b)) {
          uVar5 = PKCS12_SAFEBAG_get0_safes(uVar5);
          iVar1 = parse_bags_constprop_0(uVar5,param_2,0,0,param_5,param_6);
          if (iVar1 == 0) goto LAB_00100107;
        }
      }
    }
    else {
      for (; iVar1 = OPENSSL_sk_num(param_1), iVar6 < iVar1; iVar6 = iVar6 + 1) {
        uVar5 = OPENSSL_sk_value(param_1,iVar6);
        pAVar3 = (ASN1_STRING *)PKCS12_SAFEBAG_get0_attr(uVar5,0x9c);
        if (pAVar3 != (ASN1_STRING *)0x0) {
          pAVar3 = (ASN1_STRING *)pAVar3->data;
        }
        piVar4 = (int *)PKCS12_SAFEBAG_get0_attr(uVar5,0x9d);
        if (piVar4 != (int *)0x0) {
          piVar4 = *(int **)(piVar4 + 2);
        }
        iVar1 = PKCS12_SAFEBAG_get_nid(uVar5);
        if (iVar1 == 0x98) {
          iVar1 = PKCS12_SAFEBAG_get_bag_nid(uVar5);
          if (iVar1 == 0x9e) {
            x = (X509 *)PKCS12_SAFEBAG_get1_cert_ex(uVar5,param_5,param_6);
            if (x == (X509 *)0x0) goto LAB_00100107;
            if ((piVar4 != (int *)0x0) &&
               (iVar1 = X509_keyid_set1(x,*(uchar **)(piVar4 + 2),*piVar4), iVar1 == 0))
            goto LAB_001001d5;
            if ((pAVar3 != (ASN1_STRING *)0x0) &&
               (iVar1 = ASN1_STRING_to_UTF8(&local_48,pAVar3), -1 < iVar1)) {
              iVar1 = X509_alias_set1(x,local_48,iVar1);
              CRYPTO_free(local_48);
              if (iVar1 == 0) goto LAB_001001d5;
            }
            iVar1 = OPENSSL_sk_push(param_4,x);
            if (iVar1 == 0) goto LAB_001001d5;
          }
        }
        else if ((0x98 < iVar1) && (iVar1 == 0x9b)) {
          uVar5 = PKCS12_SAFEBAG_get0_safes(uVar5);
          iVar1 = parse_bags_constprop_0(uVar5,param_2,0,param_4,param_5,param_6);
          if (iVar1 == 0) goto LAB_00100107;
        }
      }
    }
  }
  else {
    for (; iVar1 = OPENSSL_sk_num(param_1), iVar6 < iVar1; iVar6 = iVar6 + 1) {
      uVar5 = OPENSSL_sk_value(param_1,iVar6);
      pAVar3 = (ASN1_STRING *)PKCS12_SAFEBAG_get0_attr(uVar5,0x9c);
      if (pAVar3 != (ASN1_STRING *)0x0) {
        pAVar3 = (ASN1_STRING *)pAVar3->data;
      }
      piVar4 = (int *)PKCS12_SAFEBAG_get0_attr(uVar5,0x9d);
      if (piVar4 != (int *)0x0) {
        piVar4 = *(int **)(piVar4 + 2);
      }
      iVar1 = PKCS12_SAFEBAG_get_nid(uVar5);
      if (iVar1 == 0x98) {
        if ((param_4 != 0) && (iVar1 = PKCS12_SAFEBAG_get_bag_nid(uVar5), iVar1 == 0x9e)) {
          x = (X509 *)PKCS12_SAFEBAG_get1_cert_ex(uVar5,param_5,param_6);
          if (x == (X509 *)0x0) goto LAB_00100107;
          if ((piVar4 != (int *)0x0) &&
             (iVar1 = X509_keyid_set1(x,*(uchar **)(piVar4 + 2),*piVar4), iVar1 == 0))
          goto LAB_001001d5;
          if ((pAVar3 != (ASN1_STRING *)0x0) &&
             (iVar1 = ASN1_STRING_to_UTF8(&local_48,pAVar3), -1 < iVar1)) {
            iVar1 = X509_alias_set1(x,local_48,iVar1);
            CRYPTO_free(local_48);
            if (iVar1 == 0) goto LAB_001001d5;
          }
          iVar1 = OPENSSL_sk_push(param_4,x);
          if (iVar1 == 0) goto LAB_001001d5;
        }
      }
      else if (iVar1 < 0x99) {
        if (iVar1 == 0x96) {
          if (*param_3 == 0) {
            uVar5 = PKCS12_SAFEBAG_get0_p8inf(uVar5);
            lVar2 = EVP_PKCS82PKEY_ex(uVar5,param_5,param_6);
            *param_3 = lVar2;
            goto joined_r0x00100212;
          }
        }
        else if ((iVar1 == 0x97) && (*param_3 == 0)) {
          a = (PKCS8_PRIV_KEY_INFO *)
              PKCS12_decrypt_skey_ex(uVar5,param_2,0xffffffff,param_5,param_6);
          if (a == (PKCS8_PRIV_KEY_INFO *)0x0) goto LAB_00100107;
          lVar2 = EVP_PKCS82PKEY_ex(a,param_5,param_6);
          *param_3 = lVar2;
          PKCS8_PRIV_KEY_INFO_free(a);
          lVar2 = *param_3;
joined_r0x00100212:
          if (lVar2 == 0) goto LAB_00100107;
        }
      }
      else if (iVar1 == 0x9b) {
        uVar5 = PKCS12_SAFEBAG_get0_safes(uVar5);
        iVar1 = parse_bags_constprop_0(uVar5,param_2,param_3,param_4,param_5,param_6);
        if (iVar1 == 0) goto LAB_00100107;
      }
    }
  }
  uVar5 = 1;
LAB_00100109:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_001001d5:
  X509_free(x);
LAB_00100107:
  uVar5 = 0;
  goto LAB_00100109;
}



int PKCS12_parse(PKCS12 *p12,char *pass,EVP_PKEY **pkey,X509 **cert,stack_st_X509 **ca)

{
  long lVar1;
  uchar *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  stack_st_PKCS7 *psVar9;
  ulong uVar10;
  PKCS7 *pPVar11;
  stack_st_PKCS12_SAFEBAG *psVar12;
  undefined8 uVar13;
  ASN1_STRING *pAVar14;
  int *piVar15;
  PKCS8_PRIV_KEY_INFO *a;
  EVP_PKEY *pEVar16;
  X509 *pXVar17;
  long in_FS_OFFSET;
  char *local_88;
  uchar *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (pkey != (EVP_PKEY **)0x0) {
    *pkey = (EVP_PKEY *)0x0;
  }
  if (cert != (X509 **)0x0) {
    *cert = (X509 *)0x0;
  }
  if (p12 != (PKCS12 *)0x0) {
    iVar3 = PKCS12_mac_present(p12);
    local_88 = pass;
    if (iVar3 != 0) {
      if ((pass == (char *)0x0) || (*pass == '\0')) {
        iVar3 = PKCS12_verify_mac(p12,(char *)0x0,0);
        if (iVar3 != 0) goto LAB_00100514;
        iVar3 = PKCS12_verify_mac(p12,"",0);
        local_88 = "";
        if (iVar3 == 0) {
          ERR_new();
          uVar13 = 0x43;
          goto LAB_00100bd4;
        }
LAB_0010051d:
        if (cert != (X509 **)0x0 || ca != (stack_st_X509 **)0x0) goto LAB_0010052b;
LAB_00100760:
        lVar8 = 0;
        goto LAB_0010053c;
      }
      iVar3 = PKCS12_verify_mac(p12,pass,-1);
      if (iVar3 != 0) goto LAB_0010051d;
      ERR_new();
      uVar13 = 0x47;
LAB_00100bd4:
      ERR_set_debug("crypto/pkcs12/p12_kiss.c",uVar13,"PKCS12_parse");
      ERR_set_error(0x23,0x71,0);
LAB_00100bf3:
      lVar8 = 0;
      goto LAB_0010072a;
    }
    if ((pass == (char *)0x0) || (*pass == '\0')) {
LAB_00100514:
      local_88 = (char *)0x0;
      goto LAB_0010051d;
    }
    if (cert == (X509 **)0x0 && ca == (stack_st_X509 **)0x0) goto LAB_00100760;
LAB_0010052b:
    lVar8 = OPENSSL_sk_new_null();
    if (lVar8 == 0) {
      ERR_new();
      ERR_set_debug("crypto/pkcs12/p12_kiss.c",0x51,"PKCS12_parse");
      ERR_set_error(0x23,0x8000f,0);
      goto LAB_00100bf3;
    }
LAB_0010053c:
    psVar9 = PKCS12_unpack_authsafes(p12);
    if (psVar9 == (stack_st_PKCS7 *)0x0) goto LAB_001006d4;
    iVar3 = 0;
    if (pkey != (EVP_PKEY **)0x0) {
      for (; iVar6 = OPENSSL_sk_num(psVar9), iVar3 < iVar6; iVar3 = iVar3 + 1) {
        pPVar11 = (PKCS7 *)OPENSSL_sk_value(psVar9,iVar3);
        iVar6 = OBJ_obj2nid(pPVar11->type);
        if (iVar6 == 0x15) {
          psVar12 = PKCS12_unpack_p7data(pPVar11);
LAB_001005c1:
          if (psVar12 == (stack_st_PKCS12_SAFEBAG *)0x0) goto LAB_001006c3;
          lVar1 = pPVar11[1].length;
          puVar2 = pPVar11[1].asn1;
          for (iVar6 = 0; iVar7 = OPENSSL_sk_num(psVar12), iVar6 < iVar7; iVar6 = iVar6 + 1) {
            uVar13 = OPENSSL_sk_value(psVar12,iVar6);
            pAVar14 = (ASN1_STRING *)PKCS12_SAFEBAG_get0_attr(uVar13,0x9c);
            if (pAVar14 != (ASN1_STRING *)0x0) {
              pAVar14 = (ASN1_STRING *)pAVar14->data;
            }
            piVar15 = (int *)PKCS12_SAFEBAG_get0_attr(uVar13,0x9d);
            if (piVar15 != (int *)0x0) {
              piVar15 = *(int **)(piVar15 + 2);
            }
            iVar7 = PKCS12_SAFEBAG_get_nid(uVar13);
            if (iVar7 == 0x98) {
              if ((lVar8 != 0) && (iVar7 = PKCS12_SAFEBAG_get_bag_nid(uVar13), iVar7 == 0x9e)) {
                pXVar17 = (X509 *)PKCS12_SAFEBAG_get1_cert_ex(uVar13,puVar2,lVar1);
                if (pXVar17 == (X509 *)0x0) goto LAB_001006b4;
                if ((piVar15 != (int *)0x0) &&
                   (iVar7 = X509_keyid_set1(pXVar17,*(uchar **)(piVar15 + 2),*piVar15), iVar7 == 0))
                goto LAB_00100919;
                if ((pAVar14 != (ASN1_STRING *)0x0) &&
                   (iVar7 = ASN1_STRING_to_UTF8(&local_48,pAVar14), -1 < iVar7)) {
                  iVar7 = X509_alias_set1(pXVar17,local_48,iVar7);
                  CRYPTO_free(local_48);
                  if (iVar7 == 0) goto LAB_00100919;
                }
                iVar7 = OPENSSL_sk_push(lVar8,pXVar17);
                if (iVar7 == 0) goto LAB_00100919;
              }
            }
            else if (iVar7 < 0x99) {
              if (iVar7 == 0x96) {
                if (*pkey == (EVP_PKEY *)0x0) {
                  uVar13 = PKCS12_SAFEBAG_get0_p8inf(uVar13);
                  pEVar16 = (EVP_PKEY *)EVP_PKCS82PKEY_ex(uVar13,puVar2,lVar1);
                  *pkey = pEVar16;
                  goto joined_r0x00100964;
                }
              }
              else if ((iVar7 == 0x97) && (*pkey == (EVP_PKEY *)0x0)) {
                a = (PKCS8_PRIV_KEY_INFO *)
                    PKCS12_decrypt_skey_ex(uVar13,local_88,0xffffffff,puVar2,lVar1);
                if (a == (PKCS8_PRIV_KEY_INFO *)0x0) goto LAB_001006b4;
                pEVar16 = (EVP_PKEY *)EVP_PKCS82PKEY_ex(a,puVar2,lVar1);
                *pkey = pEVar16;
                PKCS8_PRIV_KEY_INFO_free(a);
                pEVar16 = *pkey;
joined_r0x00100964:
                if (pEVar16 == (EVP_PKEY *)0x0) goto LAB_001006b4;
              }
            }
            else if (iVar7 == 0x9b) {
              uVar13 = PKCS12_SAFEBAG_get0_safes(uVar13);
              iVar7 = parse_bags_constprop_0(uVar13,local_88,pkey,lVar8,puVar2,lVar1);
              if (iVar7 == 0) goto LAB_001006b4;
            }
          }
          OPENSSL_sk_pop_free(psVar12,&PKCS12_SAFEBAG_free);
        }
        else if (iVar6 == 0x1a) {
          psVar12 = PKCS12_unpack_p7encdata(pPVar11,local_88,-1);
          goto LAB_001005c1;
        }
      }
      OPENSSL_sk_pop_free(psVar9,&PKCS7_free);
LAB_00100aeb:
      do {
        pXVar17 = (X509 *)OPENSSL_sk_shift(lVar8);
        if (pXVar17 == (X509 *)0x0) goto LAB_00100c73;
        if (((*pkey != (EVP_PKEY *)0x0) && (cert != (X509 **)0x0)) && (*cert == (X509 *)0x0)) {
          ERR_set_mark();
          iVar3 = X509_check_private_key(pXVar17,*pkey);
          ERR_pop_to_mark();
          if (iVar3 != 0) {
            *cert = pXVar17;
            goto LAB_00100aeb;
          }
        }
        if (ca == (stack_st_X509 **)0x0) {
          X509_free(pXVar17);
          goto LAB_00100aeb;
        }
        iVar3 = ossl_x509_add_cert_new(ca,pXVar17,0);
      } while (iVar3 != 0);
      goto LAB_00100b33;
    }
    for (; iVar6 = OPENSSL_sk_num(psVar9), iVar3 < iVar6; iVar3 = iVar3 + 1) {
      pPVar11 = (PKCS7 *)OPENSSL_sk_value(psVar9,iVar3);
      iVar6 = OBJ_obj2nid(pPVar11->type);
      if (iVar6 == 0x15) {
        psVar12 = PKCS12_unpack_p7data(pPVar11);
LAB_001007cb:
        if (psVar12 == (stack_st_PKCS12_SAFEBAG *)0x0) goto LAB_001006c3;
        lVar1 = pPVar11[1].length;
        puVar2 = pPVar11[1].asn1;
        for (iVar6 = 0; iVar7 = OPENSSL_sk_num(psVar12), iVar6 < iVar7; iVar6 = iVar6 + 1) {
          uVar13 = OPENSSL_sk_value(psVar12,iVar6);
          pAVar14 = (ASN1_STRING *)PKCS12_SAFEBAG_get0_attr(uVar13,0x9c);
          if (pAVar14 != (ASN1_STRING *)0x0) {
            pAVar14 = (ASN1_STRING *)pAVar14->data;
          }
          piVar15 = (int *)PKCS12_SAFEBAG_get0_attr(uVar13,0x9d);
          if (piVar15 != (int *)0x0) {
            piVar15 = *(int **)(piVar15 + 2);
          }
          iVar7 = PKCS12_SAFEBAG_get_nid(uVar13);
          if (iVar7 == 0x98) {
            if ((lVar8 != 0) && (iVar7 = PKCS12_SAFEBAG_get_bag_nid(uVar13), iVar7 == 0x9e)) {
              pXVar17 = (X509 *)PKCS12_SAFEBAG_get1_cert_ex(uVar13,puVar2,lVar1);
              if (pXVar17 == (X509 *)0x0) goto LAB_001006b4;
              if ((piVar15 != (int *)0x0) &&
                 (iVar7 = X509_keyid_set1(pXVar17,*(uchar **)(piVar15 + 2),*piVar15), iVar7 == 0))
              goto LAB_00100919;
              if ((pAVar14 != (ASN1_STRING *)0x0) &&
                 (iVar7 = ASN1_STRING_to_UTF8(&local_48,pAVar14), -1 < iVar7)) {
                iVar7 = X509_alias_set1(pXVar17,local_48,iVar7);
                CRYPTO_free(local_48);
                if (iVar7 == 0) goto LAB_00100919;
              }
              iVar7 = OPENSSL_sk_push(lVar8,pXVar17);
              if (iVar7 == 0) goto LAB_00100919;
            }
          }
          else if ((0x98 < iVar7) && (iVar7 == 0x9b)) {
            uVar13 = PKCS12_SAFEBAG_get0_safes(uVar13);
            iVar7 = parse_bags_constprop_0(uVar13,local_88,0,lVar8,puVar2,lVar1);
            if (iVar7 == 0) goto LAB_001006b4;
          }
        }
        OPENSSL_sk_pop_free(psVar12,&PKCS12_SAFEBAG_free);
      }
      else if (iVar6 == 0x1a) {
        psVar12 = PKCS12_unpack_p7encdata(pPVar11,local_88,-1);
        goto LAB_001007cb;
      }
    }
    OPENSSL_sk_pop_free(psVar9,&PKCS7_free);
    if (ca == (stack_st_X509 **)0x0) {
      while (pXVar17 = (X509 *)OPENSSL_sk_shift(lVar8), pXVar17 != (X509 *)0x0) {
        X509_free(pXVar17);
      }
LAB_00100c73:
      OPENSSL_sk_free(lVar8);
      iVar3 = 1;
      goto LAB_00100b72;
    }
    do {
      pXVar17 = (X509 *)OPENSSL_sk_shift(lVar8);
      if (pXVar17 == (X509 *)0x0) goto LAB_00100c73;
      iVar3 = ossl_x509_add_cert_new(ca,pXVar17,0);
    } while (iVar3 != 0);
    goto LAB_00100b47;
  }
  ERR_new();
  ERR_set_debug("crypto/pkcs12/p12_kiss.c",0x31,"PKCS12_parse");
  ERR_set_error(0x23,0x69,0);
  goto LAB_00100b70;
LAB_00100919:
  X509_free(pXVar17);
LAB_001006b4:
  OPENSSL_sk_pop_free(psVar12,&PKCS12_SAFEBAG_free);
LAB_001006c3:
  OPENSSL_sk_pop_free(psVar9,&PKCS7_free);
LAB_001006d4:
  uVar10 = ERR_peek_last_error();
  uVar4 = (uint)uVar10;
  if ((int)uVar4 < 0) {
    uVar5 = uVar4 & 0x7fffffff;
LAB_001006f3:
    if (uVar5 != 0x9c) {
      ERR_new();
      ERR_set_debug("crypto/pkcs12/p12_kiss.c",0x5a,"PKCS12_parse");
      ERR_set_error(0x23,0x72,0);
    }
  }
  else {
    uVar5 = uVar4 & 0x7fffff;
    if ((ulong)(long)(int)uVar4 >> 0x17 != 6) goto LAB_001006f3;
  }
LAB_0010072a:
  pXVar17 = (X509 *)0x0;
  if (pkey != (EVP_PKEY **)0x0) {
LAB_00100b33:
    EVP_PKEY_free(*pkey);
    *pkey = (EVP_PKEY *)0x0;
  }
LAB_00100b47:
  if (cert != (X509 **)0x0) {
    X509_free(*cert);
    *cert = (X509 *)0x0;
  }
  X509_free(pXVar17);
  OSSL_STACK_OF_X509_free(lVar8);
LAB_00100b70:
  iVar3 = 0;
LAB_00100b72:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


