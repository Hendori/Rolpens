
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 do_revoke(X509 *param_1,long param_2,int param_3,char *param_4)

{
  int iVar1;
  undefined4 uVar2;
  X509_NAME *a;
  char *pcVar3;
  ASN1_INTEGER *ai;
  BIGNUM *a_00;
  OPENSSL_STRING *ppcVar4;
  int *piVar5;
  void *__dest;
  ASN1_TIME *a_01;
  size_t sVar6;
  long lVar7;
  OPENSSL_STRING pcVar8;
  ASN1_OBJECT *a_02;
  undefined **ppuVar9;
  long in_FS_OFFSET;
  char *local_80;
  OPENSSL_STRING local_78;
  void *pvStack_70;
  undefined8 local_68;
  char *pcStack_60;
  undefined1 local_58 [8];
  char *pcStack_50;
  OPENSSL_STRING local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = (OPENSSL_STRING)0x0;
  pvStack_70 = (void *)0x0;
  local_68 = 0;
  pcStack_60 = (char *)0x0;
  _local_58 = (undefined1  [16])0x0;
  a = X509_get_subject_name(param_1);
  pcVar3 = X509_NAME_oneline(a,(char *)0x0,0);
  pcStack_50 = pcVar3;
  ai = (ASN1_INTEGER *)X509_get0_serialNumber(param_1);
  a_00 = ASN1_INTEGER_to_BN(ai,(BIGNUM *)0x0);
  if (a_00 == (BIGNUM *)0x0) goto LAB_0010021a;
  iVar1 = BN_is_zero(a_00);
  if (iVar1 == 0) {
    pcStack_60 = BN_bn2hex(a_00);
  }
  else {
    pcStack_60 = CRYPTO_strdup("00","apps/ca.c",0x83f);
  }
  BN_free(a_00);
  if (pcStack_50 == (char *)0x0) {
LAB_00100200:
    BIO_printf(_bio_err,"Memory allocation failure\n");
  }
  else {
    if (*pcStack_50 == '\0') {
      CRYPTO_free(pcStack_50);
      pcStack_50 = CRYPTO_strdup(pcStack_60,"apps/ca.c",0x846);
      if (pcStack_50 == (char *)0x0) goto LAB_00100200;
    }
    if (pcStack_60 == (char *)0x0) goto LAB_00100200;
    ppcVar4 = TXT_DB_get_by_index(*(TXT_DB **)(param_2 + 8),3,&local_78);
    if (ppcVar4 == (OPENSSL_STRING *)0x0) {
      BIO_printf(_bio_err,"Adding Entry with serial number %s to DB for %s\n",pcStack_60,pcStack_50)
      ;
      local_78 = CRYPTO_strdup("V","apps/ca.c",0x857);
      piVar5 = (int *)X509_get0_notAfter(param_1);
      __dest = (void *)app_malloc((long)(*piVar5 + 1),"row exp_data");
      pvStack_70 = __dest;
      memcpy(__dest,*(void **)(piVar5 + 2),(long)*piVar5);
      *(undefined1 *)((long)pvStack_70 + (long)*piVar5) = 0;
      local_68 = 0;
      local_58 = (undefined1  [8])CRYPTO_strdup("unknown","apps/ca.c",0x85d);
      if ((local_78 == (OPENSSL_STRING)0x0) || (local_58 == (undefined1  [8])0x0)) {
        BIO_printf(_bio_err,"Memory allocation failure\n");
      }
      else {
        ppcVar4 = (OPENSSL_STRING *)app_malloc(0x38,"row ptr");
        lVar7 = 0;
        do {
          *(undefined8 *)((long)ppcVar4 + lVar7) = *(undefined8 *)(lVar7 + (long)&local_78);
          lVar7 = lVar7 + 8;
        } while (lVar7 != 0x30);
        ppcVar4[6] = (OPENSSL_STRING)0x0;
        iVar1 = TXT_DB_insert(*(TXT_DB **)(param_2 + 8),ppcVar4);
        if (iVar1 != 0) {
          local_78 = (OPENSSL_STRING)0x0;
          pvStack_70 = (void *)0x0;
          local_68 = 0;
          pcStack_60 = (char *)0x0;
          local_58 = (undefined1  [8])0x0;
          pcStack_50 = (char *)0x0;
          if (param_3 == -1) {
            uVar2 = 1;
          }
          else {
            uVar2 = do_revoke(param_1,param_2,param_3,param_4);
          }
          goto LAB_00100220;
        }
        BIO_printf(_bio_err,"failed to update database\n");
        BIO_printf(_bio_err,"TXT_DB error number %ld\n",
                   *(undefined8 *)(*(long *)(param_2 + 8) + 0x20));
        CRYPTO_free(ppcVar4);
      }
    }
    else {
      iVar1 = index_name_cmp(&local_78,ppcVar4);
      if (iVar1 == 0) {
        if (param_3 == -1) {
          BIO_printf(_bio_err,"ERROR:Already present, serial number %s\n",pcStack_60);
        }
        else if (**ppcVar4 == 'R') {
          BIO_printf(_bio_err,"ERROR:Already revoked, serial number %s\n",pcStack_60);
        }
        else {
          BIO_printf(_bio_err,"Revoking Certificate %s.\n",ppcVar4[3]);
          if (param_3 == 2) {
            a_02 = OBJ_txt2obj(param_4,0);
            ASN1_OBJECT_free(a_02);
            local_80 = "holdInstruction";
            if (a_02 == (ASN1_OBJECT *)0x0) {
              BIO_printf(_bio_err,"Invalid object identifier %s\n",param_4);
            }
            else {
LAB_001003da:
              a_01 = X509_gmtime_adj((ASN1_TIME *)0x0,0);
              if (a_01 != (ASN1_TIME *)0x0) {
                sVar6 = strlen(local_80);
                iVar1 = a_01->length + 2 + (int)sVar6;
                if (param_4 == (char *)0x0) {
                  lVar7 = (long)iVar1;
                  pcVar8 = (OPENSSL_STRING)app_malloc(lVar7,"revocation reason");
                  OPENSSL_strlcpy(pcVar8,a_01->data,lVar7);
                  OPENSSL_strlcat(pcVar8,&_LC21,lVar7);
                  OPENSSL_strlcat(pcVar8,local_80,lVar7);
                }
                else {
                  sVar6 = strlen(param_4);
                  lVar7 = (long)(iVar1 + 1 + (int)sVar6);
                  pcVar8 = (OPENSSL_STRING)app_malloc(lVar7,"revocation reason");
                  OPENSSL_strlcpy(pcVar8,a_01->data,lVar7);
                  OPENSSL_strlcat(pcVar8,&_LC21,lVar7);
                  OPENSSL_strlcat(pcVar8,local_80,lVar7);
                  OPENSSL_strlcat(pcVar8,&_LC21,lVar7);
                  OPENSSL_strlcat(pcVar8,param_4,lVar7);
                }
LAB_0010048b:
                ASN1_UTCTIME_free(a_01);
                if (pcVar8 != (OPENSSL_STRING)0x0) {
                  uVar2 = 1;
                  **ppcVar4 = 'R';
                  (*ppcVar4)[1] = '\0';
                  ppcVar4[2] = pcVar8;
                  goto LAB_00100220;
                }
              }
            }
          }
          else if (param_3 < 3) {
            ppuVar9 = &crl_reasons;
            if (param_3 == 1) {
              do {
                local_80 = *ppuVar9;
                iVar1 = OPENSSL_strcasecmp();
                if (iVar1 == 0) {
                  if (local_80 != (char *)0x0) {
                    param_4 = (char *)0x0;
                    goto LAB_001003da;
                  }
                  break;
                }
                ppuVar9 = ppuVar9 + 1;
              } while (ppuVar9 != &PTR__LC2_00107e20);
              BIO_printf(_bio_err,"Unknown CRL reason %s\n",param_4);
            }
            else {
LAB_001004e0:
              a_01 = X509_gmtime_adj((ASN1_TIME *)0x0,0);
              if (a_01 != (ASN1_TIME *)0x0) {
                lVar7 = (long)(a_01->length + 1);
                pcVar8 = (OPENSSL_STRING)app_malloc(lVar7,"revocation reason");
                OPENSSL_strlcpy(pcVar8,a_01->data,lVar7);
                goto LAB_0010048b;
              }
            }
          }
          else {
            if (1 < param_3 - 3U) goto LAB_001004e0;
            iVar1 = ASN1_GENERALIZEDTIME_set_string((ASN1_GENERALIZEDTIME *)0x0,param_4);
            if (iVar1 != 0) {
              local_80 = "keyTime";
              if (param_3 != 3) {
                local_80 = "CAkeyTime";
              }
              goto LAB_001003da;
            }
            BIO_printf(_bio_err,"Invalid time format %s. Need YYYYMMDDHHMMSSZ\n",param_4);
          }
          BIO_printf(_bio_err,"Error in revocation arguments\n");
        }
      }
      else {
        BIO_printf(_bio_err,"ERROR:name does not match %s\n",pcStack_50);
      }
    }
  }
LAB_0010021a:
  uVar2 = 0xffffffff;
LAB_00100220:
  ppcVar4 = &local_78;
  do {
    pcVar8 = *ppcVar4;
    ppcVar4 = ppcVar4 + 1;
    CRYPTO_free(pcVar8);
  } while (ppcVar4 != &local_48);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * lookup_conf(CONF *param_1,char *param_2,char *param_3)

{
  char *pcVar1;
  
  pcVar1 = NCONF_get_string(param_1,param_2,param_3);
  if (pcVar1 != (char *)0x0) {
    return pcVar1;
  }
  BIO_printf(_bio_err,"variable lookup failed for %s::%s\n",param_2,param_3);
  return (char *)0x0;
}



/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
do_body_constprop_0(undefined8 *param_1,EVP_PKEY *param_2,X509 *param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,int *param_7,BIGNUM *param_8,long param_9,
                   undefined4 param_10,uint param_11,undefined8 param_12,long param_13,
                   ulong param_14,int param_15,int param_16,X509_REQ *param_17,char *param_18,
                   CONF *param_19,ulong param_20,ulong param_21,int param_22,undefined4 param_23,
                   int param_24,undefined8 param_25)

{
  uchar uVar1;
  char cVar2;
  OPENSSL_STRING ptr;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  X509_NAME *pXVar7;
  X509_NAME_ENTRY *pXVar8;
  ASN1_STRING *s;
  ASN1_OBJECT *pAVar9;
  byte *buf;
  byte *pbVar10;
  X509_NAME *xn;
  long lVar11;
  X509_NAME_ENTRY *ne;
  undefined8 uVar12;
  X509 *x;
  ASN1_INTEGER *pAVar13;
  EVP_PKEY *pEVar14;
  OPENSSL_STRING *ppcVar15;
  int *piVar16;
  void *__dest;
  OPENSSL_STRING *value;
  uchar *puVar17;
  char *pcVar18;
  TXT_DB *db;
  int iVar19;
  undefined8 uVar20;
  uchar *puVar21;
  long in_FS_OFFSET;
  X509_NAME *local_168;
  X509_NAME *local_160;
  ASN1_STRING *local_148;
  ASN1_STRING *local_128;
  X509V3_CTX local_d8;
  OPENSSL_STRING local_98;
  void *pvStack_90;
  undefined8 local_88;
  char *pcStack_80;
  char *local_78;
  char *pcStack_70;
  OPENSSL_STRING local_68 [5];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_98 = (OPENSSL_STRING)0x0;
  pvStack_90 = (void *)0x0;
  local_88 = 0;
  pcStack_80 = (char *)0x0;
  local_78 = (char *)0x0;
  pcStack_70 = (char *)0x0;
  if (param_9 == 0) {
LAB_00100804:
    if (param_22 != 0) {
      BIO_printf(_bio_err,"The Subject\'s Distinguished Name is as follows\n");
    }
    pXVar7 = (X509_NAME *)X509_REQ_get_subject_name(param_17);
    for (iVar19 = 0; iVar3 = X509_NAME_entry_count(pXVar7), iVar19 < iVar3; iVar19 = iVar19 + 1) {
      pXVar8 = X509_NAME_get_entry(pXVar7,iVar19);
      s = X509_NAME_ENTRY_get_data(pXVar8);
      pAVar9 = X509_NAME_ENTRY_get_object(pXVar8);
      iVar3 = OBJ_obj2nid(pAVar9);
      if (msie_hack == 0) {
        if ((iVar3 != 0x30) || ((param_11 & 1) != 0)) {
          iVar4 = s->type;
          if (iVar3 == 0x30) {
            if (iVar4 != 0x16) {
LAB_00100b36:
              BIO_printf(_bio_err,"\nemailAddress type needs to be of type IA5STRING\n");
              goto LAB_00100b4b;
            }
LAB_001008ee:
            iVar3 = ASN1_PRINTABLE_type(s->data,s->length);
            if (iVar3 == 0x14) {
              if (s->type != 0x14) goto LAB_00100916;
            }
            else if ((iVar3 == 0x16) && (s->type == 0x13)) {
LAB_00100916:
              BIO_printf(_bio_err,
                         "\nThe string contains characters that are illegal for the ASN.1 type\n");
              goto LAB_00100b4b;
            }
          }
          else {
LAB_00100857:
            if ((iVar4 != 0x1e) && (iVar4 != 0xc)) goto LAB_001008ee;
          }
          if (param_22 != 0) {
            iVar3 = i2a_ASN1_OBJECT(_bio_err,pAVar9);
            iVar3 = 0x16 - iVar3;
            if (iVar3 < 1) {
              pbVar10 = (byte *)local_68;
              buf = pbVar10;
            }
            else {
              buf = (byte *)memset(local_68,0x20,(long)iVar3);
              pbVar10 = buf + iVar3;
            }
            *(undefined2 *)pbVar10 = _LC34;
            BIO_puts(_bio_err,(char *)buf);
            iVar3 = s->type;
            if (iVar3 == 0x13) {
              BIO_printf(_bio_err,"PRINTABLE:\'");
            }
            else if (iVar3 == 0x14) {
              BIO_printf(_bio_err,"T61STRING:\'");
            }
            else if (iVar3 == 0x16) {
              BIO_printf(_bio_err,"IA5STRING:\'");
            }
            else if (iVar3 == 0x1c) {
              BIO_printf(_bio_err,"UNIVERSALSTRING:\'");
            }
            else {
              BIO_printf(_bio_err,"ASN.1 %2d:\'");
            }
            puVar21 = s->data;
            puVar17 = puVar21 + (uint)s->length;
            if (0 < s->length) {
              do {
                while( true ) {
                  uVar1 = *puVar21;
                  if (0x5e < (byte)(uVar1 - 0x20)) break;
                  puVar21 = puVar21 + 1;
                  BIO_printf(_bio_err,"%c");
                  if (puVar17 == puVar21) goto LAB_00100a28;
                }
                if ((char)uVar1 < '\0') {
                  BIO_printf(_bio_err,"\\0x%02X");
                }
                else {
                  BIO_printf(_bio_err,"^%c",(ulong)((int)(char)uVar1 + 0x40));
                }
                puVar21 = puVar21 + 1;
              } while (puVar17 != puVar21);
            }
LAB_00100a28:
            BIO_printf(_bio_err,"\'\n");
          }
        }
      }
      else {
        iVar4 = s->type;
        if (iVar4 == 0x1c) {
          ASN1_UNIVERSALSTRING_to_string(s);
          iVar4 = s->type;
        }
        if (iVar4 == 0x16) {
          if (iVar3 == 0x30) {
            if (param_11 != 1) goto LAB_00100876;
          }
          else {
            s->type = 0x14;
          }
          goto LAB_001008ee;
        }
        if (iVar3 != 0x30) goto LAB_00100857;
        if (iVar4 == 0x13) {
          s->type = 0x16;
          if (param_11 == 1) goto LAB_001008ee;
        }
        else if (param_11 == 1) goto LAB_00100b36;
      }
LAB_00100876:
    }
    local_168 = X509_NAME_new();
    if (local_168 == (X509_NAME *)0x0) {
      BIO_printf(_bio_err,"Memory allocation failure\n");
      goto LAB_00100b4b;
    }
    if (param_24 == 0) {
      xn = X509_get_subject_name(param_3);
      local_160 = X509_NAME_dup(xn);
    }
    else {
      local_160 = X509_NAME_dup(pXVar7);
    }
    if (local_160 == (X509_NAME *)0x0) {
LAB_00100f50:
      x = (X509 *)0x0;
      goto LAB_00100b60;
    }
    local_148 = (ASN1_STRING *)0x0;
    local_128 = (ASN1_STRING *)0x0;
    for (iVar19 = 0; iVar3 = OPENSSL_sk_num(param_6), iVar19 < iVar3; iVar19 = iVar19 + 1) {
      lVar11 = OPENSSL_sk_value(param_6,iVar19);
      iVar3 = OBJ_txt2nid(*(char **)(lVar11 + 8));
      if (iVar3 == 0) {
        BIO_printf(_bio_err,"%s:unknown object type in \'policy\' configuration\n",
                   *(undefined8 *)(lVar11 + 8));
        goto LAB_00100f50;
      }
      pAVar9 = OBJ_nid2obj(iVar3);
      iVar3 = -1;
LAB_00100cd2:
      iVar4 = X509_NAME_get_index_by_OBJ(pXVar7,pAVar9,iVar3);
      if (-1 < iVar4) {
        ne = X509_NAME_get_entry(pXVar7,iVar4);
        pcVar18 = *(char **)(lVar11 + 0x10);
        iVar5 = strcmp(pcVar18,"optional");
        pXVar8 = ne;
        iVar3 = iVar4;
        if (iVar5 == 0) goto LAB_00100db8;
        iVar4 = strcmp(pcVar18,"supplied");
        if (iVar4 == 0) {
          if (ne != (X509_NAME_ENTRY *)0x0) goto LAB_00100d33;
          goto LAB_00100dfd;
        }
        iVar4 = strcmp(pcVar18,"match");
        if (iVar4 == 0) {
          if (ne != (X509_NAME_ENTRY *)0x0) {
            iVar4 = -1;
            do {
              iVar5 = X509_NAME_get_index_by_OBJ(local_160,pAVar9,iVar4);
              if (iVar5 < 0) {
                if (iVar4 == -1) {
                  BIO_printf(_bio_err,
                             "The %s field does not exist in the CA certificate,\nthe \'policy\' is misconfigured\n"
                             ,*(undefined8 *)(lVar11 + 8));
                  goto LAB_00100f50;
                }
                if (iVar5 < 0) {
                  puVar21 = "NULL";
                  if (local_128 != (ASN1_STRING *)0x0) {
                    puVar21 = local_128->data;
                  }
                  puVar17 = "NULL";
                  if (local_148 != (ASN1_STRING *)0x0) {
                    puVar17 = local_148->data;
                  }
                  BIO_printf(_bio_err,
                             "The %s field is different between\nCA certificate (%s) and the request (%s)\n"
                             ,*(undefined8 *)(lVar11 + 8),puVar17,puVar21);
                  goto LAB_00100f50;
                }
              }
              pXVar8 = X509_NAME_get_entry(local_160,iVar5);
              local_128 = X509_NAME_ENTRY_get_data(ne);
              local_148 = X509_NAME_ENTRY_get_data(pXVar8);
              iVar6 = ASN1_STRING_cmp(local_128,local_148);
              iVar4 = iVar5;
            } while (iVar6 != 0);
            goto LAB_00100db8;
          }
          goto LAB_001015da;
        }
        goto LAB_00100f6f;
      }
      if (iVar3 == -1) {
        pcVar18 = *(char **)(lVar11 + 0x10);
        iVar3 = strcmp(pcVar18,"optional");
        if (iVar3 != 0) {
          iVar19 = strcmp(pcVar18,"supplied");
          if (iVar19 == 0) {
LAB_00100dfd:
            x = (X509 *)0x0;
            BIO_printf(_bio_err,"The %s field needed to be supplied and was missing\n",
                       *(undefined8 *)(lVar11 + 8));
            goto LAB_00100b60;
          }
          iVar19 = strcmp(pcVar18,"match");
          if (iVar19 == 0) {
LAB_001015da:
            BIO_printf(_bio_err,"The mandatory %s field was missing\n",*(undefined8 *)(lVar11 + 8));
          }
          else {
LAB_00100f6f:
            BIO_printf(_bio_err,"%s:invalid type in \'policy\' configuration\n",pcVar18);
          }
          goto LAB_00100f50;
        }
      }
    }
    if (preserve != 0) {
      X509_NAME_free(local_168);
      local_168 = X509_NAME_dup(pXVar7);
      if (local_168 == (X509_NAME *)0x0) goto LAB_00100f50;
    }
    if (param_16 != 0) {
      BIO_printf(_bio_err,"Everything appears to be ok, creating and signing the certificate\n");
    }
    uVar20 = app_get0_propq();
    uVar12 = app_get0_libctx();
    x = (X509 *)X509_new_ex(uVar12,uVar20);
    if (x == (X509 *)0x0) goto LAB_00100b60;
    pAVar13 = X509_get_serialNumber(x);
    pAVar13 = BN_to_ASN1_INTEGER(param_8,pAVar13);
    if (pAVar13 == (ASN1_INTEGER *)0x0) {
LAB_001015c4:
      value = &local_98;
      ppcVar15 = (OPENSSL_STRING *)0x0;
      uVar20 = 0xffffffff;
    }
    else {
      if (param_24 == 0) {
        pXVar7 = X509_get_subject_name(param_3);
        iVar19 = X509_set_issuer_name(x,pXVar7);
        if (iVar19 != 0) goto LAB_0010103a;
        goto LAB_001015c4;
      }
      iVar19 = X509_set_issuer_name(x,local_168);
      if (iVar19 == 0) goto LAB_001015c4;
LAB_0010103a:
      iVar19 = set_cert_times(x,param_12,param_13,param_14 & 0xffffffff,0);
      if (iVar19 == 0) goto LAB_001015c4;
      if (param_13 != 0) {
        X509_get0_notAfter(x);
        iVar19 = ASN1_TIME_diff(&local_d8,0,0);
        if (iVar19 == 0) goto LAB_001015c4;
        param_14 = (ulong)local_d8.flags;
      }
      iVar19 = X509_set_subject_name(x,local_168);
      if (iVar19 == 0) goto LAB_001015c4;
      pEVar14 = (EVP_PKEY *)X509_REQ_get0_pubkey(param_17);
      iVar19 = X509_set_pubkey(x,pEVar14);
      if (iVar19 == 0) goto LAB_001015c4;
      if (param_24 == 0) {
        X509V3_set_ctx(&local_d8,param_3,x,(X509_REQ *)0x0,(X509_CRL *)0x0,2);
      }
      else {
        X509V3_set_ctx(&local_d8,x,x,(X509_REQ *)0x0,(X509_CRL *)0x0,2);
        iVar19 = X509V3_set_issuer_pkey(&local_d8,param_2);
        if (iVar19 == 0) goto LAB_001015c4;
        iVar19 = cert_matches_key(x,param_2);
        if (iVar19 == 0) {
          BIO_printf(_bio_err,"Warning: Signature key and public key of cert do not match\n");
        }
      }
      if (param_18 != (char *)0x0) {
        if (extfile_conf == (CONF *)0x0) {
          X509V3_set_nconf(&local_d8,param_19);
          iVar19 = X509V3_EXT_add_nconf(param_19,&local_d8,param_18,x);
          if (iVar19 != 0) {
            pcVar18 = "Successfully added extensions from config\n";
            if (param_16 == 0) {
LAB_00101187:
              iVar19 = copy_extensions(x,param_17,param_23);
              if (iVar19 != 0) goto LAB_001011a3;
            }
            else {
LAB_00101a61:
              BIO_printf(_bio_err,pcVar18);
              iVar19 = copy_extensions(x,param_17,param_23);
              if (iVar19 != 0) goto LAB_00101993;
            }
            goto LAB_00101a8b;
          }
          BIO_printf(_bio_err,"Error adding certificate extensions from config section %s\n",
                     param_18);
        }
        else {
          if (param_16 == 0) {
            X509V3_set_nconf(&local_d8,extfile_conf);
            iVar19 = X509V3_EXT_add_nconf(extfile_conf,&local_d8,param_18,x);
            if (iVar19 != 0) goto LAB_00101187;
          }
          else {
            BIO_printf(_bio_err,"Extra configuration file found\n");
            X509V3_set_nconf(&local_d8,extfile_conf);
            iVar19 = X509V3_EXT_add_nconf(extfile_conf,&local_d8,param_18,x);
            pcVar18 = "Successfully added extensions from file.\n";
            if (iVar19 != 0) goto LAB_00101a61;
          }
          BIO_printf(_bio_err,"Error adding certificate extensions from extfile section %s\n",
                     param_18);
        }
        goto LAB_001015c4;
      }
      iVar19 = copy_extensions(x,param_17,param_23);
      if (iVar19 == 0) {
LAB_00101a8b:
        pcVar18 = "ERROR: adding extensions from request\n";
LAB_001015ff:
        BIO_printf(_bio_err,pcVar18);
        goto LAB_001015c4;
      }
      if (param_16 != 0) {
LAB_00101993:
        BIO_printf(_bio_err,"The subject name appears to be ok, checking database for clashes\n");
      }
LAB_001011a3:
      if (param_11 == 0) {
        iVar19 = -1;
        pXVar7 = X509_NAME_dup(local_168);
        if (pXVar7 == (X509_NAME *)0x0) {
          pcVar18 = "Memory allocation failure\n";
          goto LAB_001015ff;
        }
        while (iVar3 = X509_NAME_get_index_by_NID(pXVar7,0x30,iVar19), -1 < iVar3) {
          iVar19 = iVar3 + -1;
          pXVar8 = X509_NAME_delete_entry(pXVar7,iVar3);
          X509_NAME_ENTRY_free(pXVar8);
        }
        iVar19 = X509_set_subject_name(x,pXVar7);
        if (iVar19 == 0) {
          X509_NAME_free(pXVar7);
          goto LAB_001015c4;
        }
        X509_NAME_free(pXVar7);
      }
      pXVar7 = X509_get_subject_name(x);
      pcStack_70 = X509_NAME_oneline(pXVar7,(char *)0x0,0);
      if (pcStack_70 == (char *)0x0) {
        BIO_printf(_bio_err,"Memory allocation failure\n");
        goto LAB_001015c4;
      }
      iVar19 = BN_is_zero(param_8);
      if (iVar19 == 0) {
        pcStack_80 = BN_bn2hex(param_8);
      }
      else {
        pcStack_80 = CRYPTO_strdup("00","apps/ca.c",0x6f8);
      }
      if (pcStack_80 == (char *)0x0) {
LAB_00101796:
        BIO_printf(_bio_err,"Memory allocation failure\n");
        goto LAB_001015c4;
      }
      if (*pcStack_70 == '\0') {
        CRYPTO_free(pcStack_70);
        pcStack_70 = CRYPTO_strdup(pcStack_80,"apps/ca.c",0x707);
        if (pcStack_70 == (char *)0x0) goto LAB_00101796;
      }
      value = &local_98;
      db = *(TXT_DB **)(param_7 + 2);
      if (*param_7 != 0) {
        ppcVar15 = TXT_DB_get_by_index(db,5,value);
        if (ppcVar15 == (OPENSSL_STRING *)0x0) {
          db = *(TXT_DB **)(param_7 + 2);
          goto LAB_001012c0;
        }
        BIO_printf(_bio_err,"ERROR:There is already a certificate for %s\n",pcStack_70);
LAB_00101672:
        BIO_printf(_bio_err,"The matching entry has the following details\n");
        pcVar18 = "Revoked";
        cVar2 = **ppcVar15;
        if (((cVar2 != 'R') && (pcVar18 = "Valid", cVar2 != 'V')) &&
           (pcVar18 = "Expired", cVar2 != 'E')) {
          pcVar18 = "\ninvalid type, Database error\n";
        }
        BIO_printf(_bio_err,"Type          :%s\n",pcVar18);
        if (**ppcVar15 == 'R') {
          pcVar18 = ppcVar15[1];
          if (pcVar18 == (OPENSSL_STRING)0x0) {
            pcVar18 = "undef";
          }
          BIO_printf(_bio_err,"Was revoked on:%s\n",pcVar18);
        }
        pcVar18 = ppcVar15[1];
        if (pcVar18 == (OPENSSL_STRING)0x0) {
          pcVar18 = "undef";
        }
        BIO_printf(_bio_err,"Expires on    :%s\n",pcVar18);
        pcVar18 = ppcVar15[3];
        if (pcVar18 == (OPENSSL_STRING)0x0) {
          pcVar18 = "undef";
        }
        BIO_printf(_bio_err,"Serial Number :%s\n",pcVar18);
        pcVar18 = ppcVar15[4];
        if (pcVar18 == (OPENSSL_STRING)0x0) {
          pcVar18 = "undef";
        }
        BIO_printf(_bio_err,"File name     :%s\n",pcVar18);
        pcVar18 = ppcVar15[5];
        if (pcVar18 == (OPENSSL_STRING)0x0) {
          pcVar18 = "undef";
        }
        BIO_printf(_bio_err,"Subject Name  :%s\n",pcVar18);
        goto LAB_001015c4;
      }
LAB_001012c0:
      ppcVar15 = TXT_DB_get_by_index(db,3,value);
      if (ppcVar15 != (OPENSSL_STRING *)0x0) {
        BIO_printf(_bio_err,"ERROR:Serial number %s has already been issued,\n",pcStack_80);
        BIO_printf(_bio_err,"      check the database/serial_file for corruption\n");
        goto LAB_00101672;
      }
      if (param_22 == 0) {
        BIO_printf(_bio_err,"Certificate Details:\n");
        X509_print_ex(_bio_err,x,param_21,param_20 | 0x208);
      }
      BIO_printf(_bio_err,"Certificate is to be certified until ");
      uVar20 = X509_get0_notAfter(x);
      ASN1_TIME_print_ex(_bio_err,uVar20,param_25);
      if (param_14 != 0) {
        BIO_printf(_bio_err," (%ld days)",param_14);
      }
      BIO_printf(_bio_err,"\n");
      if (param_15 != 0) {
LAB_001013b3:
        pEVar14 = (EVP_PKEY *)X509_get0_pubkey(x);
        iVar19 = EVP_PKEY_missing_parameters(pEVar14);
        if ((iVar19 != 0) && (iVar19 = EVP_PKEY_missing_parameters(param_2), iVar19 == 0)) {
          EVP_PKEY_copy_parameters(pEVar14,param_2);
        }
        iVar19 = do_X509_sign(x,0,param_2,param_4,param_5,&local_d8);
        if (iVar19 != 0) {
          local_98 = CRYPTO_strdup("V","apps/ca.c",0x772);
          piVar16 = (int *)X509_get0_notAfter(x);
          __dest = (void *)app_malloc((long)(*piVar16 + 1),"row expdate");
          pvStack_90 = __dest;
          memcpy(__dest,*(void **)(piVar16 + 2),(long)*piVar16);
          *(undefined1 *)((long)pvStack_90 + (long)*piVar16) = 0;
          local_88 = 0;
          local_78 = CRYPTO_strdup("unknown","apps/ca.c",0x778);
          if (((local_98 != (OPENSSL_STRING)0x0) && (local_78 != (char *)0x0)) &&
             (pcStack_70 != (char *)0x0)) {
            ppcVar15 = (OPENSSL_STRING *)app_malloc(0x38,"row space");
            lVar11 = 0;
            do {
              *(undefined8 *)((long)ppcVar15 + lVar11) = *(undefined8 *)(lVar11 + (long)value);
              lVar11 = lVar11 + 8;
            } while (lVar11 != 0x30);
            ppcVar15[6] = (OPENSSL_STRING)0x0;
            iVar19 = TXT_DB_insert(*(TXT_DB **)(param_7 + 2),ppcVar15);
            if (iVar19 != 0) {
              uVar20 = 1;
              CRYPTO_free((void *)0x0);
              X509_NAME_free(local_160);
              X509_NAME_free(local_168);
              *param_1 = x;
              goto LAB_00100bc5;
            }
            uVar20 = 0xffffffff;
            BIO_printf(_bio_err,"failed to update database\n");
            BIO_printf(_bio_err,"TXT_DB error number %ld\n",
                       *(undefined8 *)(*(long *)(param_7 + 2) + 0x20));
            goto LAB_00100b80;
          }
          BIO_printf(_bio_err,"Memory allocation failure\n");
        }
        goto LAB_001015c4;
      }
      BIO_printf(_bio_err,"Sign the certificate? [y/n]:");
      BIO_ctrl(_bio_err,0xb,0,(void *)0x0);
      local_68[0]._0_1_ = 0;
      pcVar18 = fgets((char *)local_68,0x19,_stdin);
      if (pcVar18 == (char *)0x0) {
        BIO_printf(_bio_err,"CERTIFICATE WILL NOT BE CERTIFIED: I/O error\n");
      }
      else {
        if (((byte)local_68[0] & 0xdf) == 0x59) goto LAB_001013b3;
        BIO_printf(_bio_err,"CERTIFICATE WILL NOT BE CERTIFIED\n");
      }
      uVar20 = 0;
      ppcVar15 = (OPENSSL_STRING *)0x0;
    }
  }
  else {
    pXVar7 = (X509_NAME *)parse_name(param_9,param_10,1);
    if (pXVar7 != (X509_NAME *)0x0) {
      X509_REQ_set_subject_name(param_17,pXVar7);
      X509_NAME_free(pXVar7);
      goto LAB_00100804;
    }
LAB_00100b4b:
    local_168 = (X509_NAME *)0x0;
    x = (X509 *)0x0;
    local_160 = (X509_NAME *)0x0;
LAB_00100b60:
    ppcVar15 = (OPENSSL_STRING *)0x0;
    uVar20 = 0xffffffff;
    value = &local_98;
  }
LAB_00100b80:
  do {
    ptr = *value;
    value = value + 1;
    CRYPTO_free(ptr);
  } while (local_68 != value);
  CRYPTO_free(ppcVar15);
  X509_NAME_free(local_160);
  X509_NAME_free(local_168);
  X509_free(x);
LAB_00100bc5:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar20;
LAB_00100db8:
  if (pXVar8 != (X509_NAME_ENTRY *)0x0) {
LAB_00100d33:
    iVar4 = X509_NAME_add_entry(local_168,pXVar8,-1,0);
    if (iVar4 == 0) {
      BIO_printf(_bio_err,"Memory allocation failure\n");
      goto LAB_00100f50;
    }
  }
  goto LAB_00100cd2;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
certify_constprop_0(undefined8 param_1,undefined8 param_2,undefined4 param_3,EVP_PKEY *param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                   undefined8 param_13,undefined4 param_14,undefined8 param_15,undefined8 param_16,
                   undefined8 param_17,undefined4 param_18,undefined8 param_19,undefined8 param_20,
                   int param_21,undefined8 param_22,ulong param_23,undefined4 param_24,
                   undefined4 param_25,int param_26,undefined8 param_27)

{
  int iVar1;
  undefined4 uVar2;
  X509_REQ *x;
  long lVar3;
  
  x = (X509_REQ *)load_csr_autofmt(param_2,param_3,param_8);
  if (x != (X509_REQ *)0x0) {
    lVar3 = X509_REQ_get0_pubkey(x);
    if (lVar3 != 0) {
      if (param_21 != 0) {
        X509_REQ_print_ex(_bio_err,x,param_23,0);
      }
      BIO_printf(_bio_err,"Check that the request matches the signature\n");
      if (param_26 != 0) {
        iVar1 = X509_REQ_check_private_key(x,param_4);
        if (iVar1 == 0) {
          uVar2 = 0;
          BIO_printf(_bio_err,"Certificate request and CA private key do not match\n");
          goto LAB_00101c99;
        }
      }
      iVar1 = do_X509_REQ_verify(x,lVar3,param_8);
      if (iVar1 < 0) {
        uVar2 = 0;
        BIO_printf(_bio_err,"Signature verification problems...\n");
      }
      else if (iVar1 == 0) {
        uVar2 = 0;
        BIO_printf(_bio_err,"Signature did not match the certificate request\n");
      }
      else {
        BIO_printf(_bio_err,"Signature ok\n");
        uVar2 = do_body_constprop_0(param_1,param_4,param_5,param_6,param_7,param_9,param_10,
                                    param_11,param_12,param_13,param_14,param_15,param_16,param_17,
                                    param_18,param_21,x,param_19,param_20,param_22,param_23,param_24
                                    ,param_25,param_26,param_27);
      }
      goto LAB_00101c99;
    }
    BIO_printf(_bio_err,"Error unpacking public key\n");
  }
  uVar2 = 0xffffffff;
LAB_00101c99:
  ERR_print_errors(_bio_err);
  X509_REQ_free(x);
  return uVar2;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int do_updatedb(long param_1,time_t *param_2)

{
  int iVar1;
  ASN1_TIME *s;
  ASN1_TIME *pAVar2;
  long *plVar3;
  int iVar4;
  int iVar5;
  
  s = ASN1_TIME_new();
  if (s != (ASN1_TIME *)0x0) {
    pAVar2 = X509_time_adj(s,0,param_2);
    if (pAVar2 != (ASN1_TIME *)0x0) {
      iVar5 = 0;
      iVar4 = 0;
      do {
        iVar1 = OPENSSL_sk_num(*(undefined8 *)(*(long *)(param_1 + 8) + 8));
        if (iVar1 <= iVar4) {
          ASN1_TIME_free(s);
          return iVar5;
        }
        plVar3 = (long *)OPENSSL_sk_value(*(undefined8 *)(*(long *)(param_1 + 8) + 8),iVar4);
        if (*(char *)*plVar3 == 'V') {
          pAVar2 = ASN1_TIME_new();
          if (pAVar2 == (ASN1_TIME *)0x0) break;
          iVar1 = ASN1_TIME_set_string(pAVar2,(char *)plVar3[1]);
          if (iVar1 == 0) {
            ASN1_TIME_free(s);
            ASN1_TIME_free(pAVar2);
            return -1;
          }
          iVar1 = ASN1_TIME_compare(pAVar2,s);
          if (iVar1 < 1) {
            iVar5 = iVar5 + 1;
            *(undefined1 *)*plVar3 = 0x45;
            *(undefined1 *)(*plVar3 + 1) = 0;
            BIO_printf(_bio_err,"%s=Expired\n",plVar3[3]);
          }
          ASN1_TIME_free(pAVar2);
        }
        iVar4 = iVar4 + 1;
      } while( true );
    }
    ASN1_TIME_free(s);
  }
  return -1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
unpack_revinfo(undefined8 *param_1,undefined4 *param_2,undefined8 *param_3,undefined8 *param_4,
              char *param_5)

{
  int iVar1;
  char *__s;
  char *pcVar2;
  char *pcVar3;
  ASN1_UTCTIME *s;
  ASN1_GENERALIZEDTIME *s_00;
  ASN1_OBJECT *a;
  undefined4 uVar4;
  ulong uVar5;
  
  __s = CRYPTO_strdup(param_5,"apps/ca.c",0x9ed);
  if (__s == (char *)0x0) {
LAB_00102199:
    BIO_printf(_bio_err,"memory allocation failure\n");
  }
  else {
    pcVar2 = strchr(__s,0x2c);
    if (pcVar2 == (char *)0x0) {
      pcVar3 = (char *)0x0;
      pcVar2 = (char *)0x0;
      if (param_1 != (undefined8 *)0x0) goto LAB_00101f4c;
LAB_00102054:
      s_00 = (ASN1_GENERALIZEDTIME *)0x0;
      uVar5 = 0xffffffff;
LAB_00102020:
      if (param_2 != (undefined4 *)0x0) {
        *param_2 = (int)uVar5;
      }
      uVar4 = 1;
      if (param_4 != (undefined8 *)0x0) {
        *param_4 = s_00;
        s_00 = (ASN1_GENERALIZEDTIME *)0x0;
      }
      goto LAB_00101fc7;
    }
    *pcVar2 = '\0';
    pcVar2 = pcVar2 + 1;
    pcVar3 = strchr(pcVar2,0x2c);
    if (pcVar3 == (char *)0x0) {
      pcVar3 = (char *)0x0;
    }
    else {
      *pcVar3 = '\0';
      pcVar3 = pcVar3 + 1;
    }
    if (param_1 != (undefined8 *)0x0) {
LAB_00101f4c:
      s = ASN1_UTCTIME_new();
      *param_1 = s;
      if (s == (ASN1_UTCTIME *)0x0) {
        uVar4 = 0;
        BIO_printf(_bio_err,"memory allocation failure\n");
        s_00 = (ASN1_GENERALIZEDTIME *)0x0;
        goto LAB_00101fc7;
      }
      iVar1 = ASN1_UTCTIME_set_string(s,__s);
      if (iVar1 == 0) {
        BIO_printf(_bio_err,"invalid revocation date %s\n",__s);
        goto LAB_00101fc2;
      }
      if (pcVar2 == (char *)0x0) goto LAB_00102054;
    }
    uVar5 = 0;
    do {
      iVar1 = OPENSSL_strcasecmp(pcVar2);
      if (iVar1 == 0) {
        if (uVar5 == 7) {
          s_00 = (ASN1_GENERALIZEDTIME *)0x0;
          uVar5 = 8;
          goto LAB_00102020;
        }
        if (uVar5 != 8) {
          s_00 = (ASN1_GENERALIZEDTIME *)0x0;
          if (1 < (int)uVar5 - 9U) goto LAB_00102020;
          if (pcVar3 == (char *)0x0) {
            BIO_printf(_bio_err,"missing compromised time\n");
            goto LAB_00101fc2;
          }
          s_00 = ASN1_GENERALIZEDTIME_new();
          if (s_00 == (ASN1_GENERALIZEDTIME *)0x0) goto LAB_00102199;
          iVar1 = ASN1_GENERALIZEDTIME_set_string(s_00,pcVar3);
          if (iVar1 != 0) {
            uVar5 = (ulong)((uVar5 != 9) + 1);
            goto LAB_00102020;
          }
          BIO_printf(_bio_err,"invalid compromised time %s\n",pcVar3);
          uVar4 = 0;
          goto LAB_00101fc7;
        }
        if (pcVar3 == (char *)0x0) {
          BIO_printf(_bio_err,"missing hold instruction\n");
          goto LAB_00101fc2;
        }
        a = OBJ_txt2obj(pcVar3,0);
        if (a == (ASN1_OBJECT *)0x0) {
          BIO_printf(_bio_err,"invalid object identifier %s\n",pcVar3);
          goto LAB_00101fc2;
        }
        if (param_3 == (undefined8 *)0x0) {
          ASN1_OBJECT_free(a);
        }
        else {
          *param_3 = a;
        }
        s_00 = (ASN1_GENERALIZEDTIME *)0x0;
        uVar5 = 6;
        goto LAB_00102020;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 != 0xb);
    BIO_printf(_bio_err,"invalid reason code %s\n",pcVar2);
  }
LAB_00101fc2:
  s_00 = (ASN1_GENERALIZEDTIME *)0x0;
  uVar4 = 0;
LAB_00101fc7:
  CRYPTO_free(__s);
  ASN1_GENERALIZEDTIME_free(s_00);
  return uVar4;
}



char make_revoked(X509_REVOKED *param_1)

{
  ASN1_OBJECT *a;
  ASN1_GENERALIZEDTIME *a_00;
  ASN1_TIME *a_01;
  int iVar1;
  int iVar2;
  char cVar3;
  long in_FS_OFFSET;
  ASN1_ENUMERATED *local_70;
  int local_5c;
  ASN1_OBJECT *local_58;
  ASN1_GENERALIZEDTIME *local_50;
  ASN1_TIME *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_5c = -1;
  local_58 = (ASN1_OBJECT *)0x0;
  local_50 = (ASN1_GENERALIZEDTIME *)0x0;
  local_48 = (ASN1_TIME *)0x0;
  iVar1 = unpack_revinfo(&local_48,&local_5c,&local_58);
  a_01 = local_48;
  a_00 = local_50;
  a = local_58;
  if (iVar1 == 0) {
    local_70 = (ASN1_ENUMERATED *)0x0;
    cVar3 = '\0';
    goto LAB_001022e4;
  }
  if (param_1 == (X509_REVOKED *)0x0) {
    local_70 = (ASN1_ENUMERATED *)0x0;
    iVar1 = local_5c;
  }
  else {
    iVar2 = X509_REVOKED_set_revocationDate(param_1,local_48);
    iVar1 = local_5c;
    if (iVar2 == 0) {
      local_70 = (ASN1_ENUMERATED *)0x0;
      cVar3 = '\0';
      goto LAB_001022e4;
    }
    if (local_5c == -1) {
      local_70 = (ASN1_ENUMERATED *)0x0;
      if (a_00 == (ASN1_GENERALIZEDTIME *)0x0) {
        if (a == (ASN1_OBJECT *)0x0) {
          local_70 = (ASN1_ENUMERATED *)0x0;
          cVar3 = '\x01';
          goto LAB_001022e4;
        }
      }
      else {
LAB_00102287:
        iVar2 = X509_REVOKED_add1_ext_i2d(param_1,0x8e,a_00,0,0);
        if (iVar2 < 1) {
LAB_001023d0:
          cVar3 = '\0';
          goto LAB_001022e4;
        }
        if (a == (ASN1_OBJECT *)0x0) goto LAB_001022d5;
      }
    }
    else {
      local_70 = ASN1_ENUMERATED_new();
      if (local_70 == (ASN1_ENUMERATED *)0x0) {
        local_70 = (ASN1_ENUMERATED *)0x0;
        cVar3 = '\0';
        goto LAB_001022e4;
      }
      iVar2 = ASN1_ENUMERATED_set(local_70,(long)iVar1);
      if (iVar2 == 0) {
        cVar3 = '\0';
        goto LAB_001022e4;
      }
      iVar2 = X509_REVOKED_add1_ext_i2d(param_1,0x8d,local_70,0,0);
      if (iVar2 < 1) goto LAB_001023d0;
      if (a_00 != (ASN1_GENERALIZEDTIME *)0x0) goto LAB_00102287;
      if (a == (ASN1_OBJECT *)0x0) {
        cVar3 = '\x02';
        goto LAB_001022e4;
      }
    }
    cVar3 = '\0';
    iVar2 = X509_REVOKED_add1_ext_i2d(param_1,0x1ae,a,0,0);
    if (iVar2 < 1) goto LAB_001022e4;
  }
LAB_001022d5:
  cVar3 = (iVar1 != -1) + '\x01';
LAB_001022e4:
  CRYPTO_free((void *)0x0);
  ASN1_OBJECT_free(a);
  ASN1_GENERALIZEDTIME_free(a_00);
  ASN1_ENUMERATED_free(local_70);
  ASN1_TIME_free(a_01);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return cVar3;
}



/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 ca_main(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  OPENSSL_STRING ptr;
  uchar *bytes;
  bool bVar4;
  bool bVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined8 uVar14;
  long lVar15;
  CONF *conf;
  char *pcVar16;
  BIO *pBVar17;
  long lVar18;
  char *pcVar19;
  byte *pbVar20;
  undefined8 *puVar21;
  ushort **ppuVar22;
  size_t sVar23;
  undefined1 *__dest;
  OPENSSL_STRING *ppcVar24;
  long lVar25;
  stack_st_CONF_VALUE *psVar26;
  lhash_st_CONF_VALUE *conf_00;
  stack_st_CONF_VALUE *psVar27;
  X509_NAME *pXVar28;
  NETSCAPE_SPKI *x;
  EVP_PKEY *r;
  X509 *x_00;
  X509_REQ *a;
  undefined8 uVar29;
  char *pcVar30;
  BIO *bp;
  X509 *pXVar31;
  ASN1_STRING *x_01;
  BIGNUM *bn;
  X509_REVOKED *x_02;
  ASN1_INTEGER *pAVar32;
  ulong uVar33;
  long *plVar34;
  byte *pbVar35;
  long lVar36;
  char *pcVar37;
  X509_CRL *x_03;
  OPENSSL_STRING *value;
  long in_FS_OFFSET;
  bool bVar38;
  BIGNUM *local_12f8;
  EVP_PKEY *local_12f0;
  long local_12e8;
  long local_12e0;
  undefined8 local_12d8;
  X509 *local_12c8;
  long local_12c0;
  int local_12b4;
  long *local_12b0;
  char *local_12a0;
  long *local_1298;
  long local_1290;
  int local_1288;
  int local_1284;
  char *local_1280;
  X509_REQ *local_1278;
  long local_1270;
  uint local_1264;
  char *local_1260;
  char *local_1258;
  undefined8 local_1250;
  uint local_1248;
  int local_1244;
  long local_1240;
  long local_1238;
  long local_1228;
  long local_1220;
  uint local_1218;
  long local_1210;
  long local_1200;
  undefined8 local_11f8;
  undefined8 local_11f0;
  int local_11e4;
  undefined4 local_11d4;
  undefined4 local_116c;
  undefined4 local_1168;
  undefined4 local_1164;
  undefined4 local_1160;
  undefined4 local_115c;
  BIGNUM *local_1158;
  undefined8 local_1150;
  long *local_1148;
  long local_1140;
  long local_1138;
  long local_1130;
  undefined8 local_1128;
  X509 *local_1120;
  X509V3_CTX local_1118;
  undefined1 local_10d8 [16];
  undefined1 local_10c8 [16];
  undefined1 local_10b8 [16];
  undefined1 local_10a8 [6];
  undefined6 uStack_10a2;
  undefined4 uStack_109c;
  undefined1 local_1098 [16];
  undefined1 local_1088 [16];
  undefined1 local_1078 [16];
  undefined1 local_1068 [16];
  undefined1 local_1058 [16];
  char local_1048 [4104];
  long local_40;
  
  lVar18 = _default_config_file;
  pcVar19 = (char *)0x0;
  pcVar37 = (char *)0x0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_1098 = (undefined1  [16])0x0;
  local_10a8[5] = 0;
  uStack_10a2 = 0;
  local_1158 = (BIGNUM *)0x0;
  local_1168 = 0;
  local_1164 = 0;
  local_1150 = 0;
  local_1148 = (long *)0x0;
  uStack_109c = 0;
  local_1160 = 0;
  local_115c = 0;
  local_1140 = 0;
  local_1138 = 0;
  local_1130 = 0;
  local_1128 = 0;
  local_1120 = (X509 *)0x0;
  local_1088 = (undefined1  [16])0x0;
  local_1078 = (undefined1  [16])0x0;
  local_1068 = (undefined1  [16])0x0;
  local_1058 = (undefined1  [16])0x0;
  uVar14 = opt_init(param_1,param_2,ca_options);
  local_1288 = 0;
  local_11e4 = 0;
  iVar9 = 0x1001;
  local_1238 = 0;
  local_1210 = 0;
  local_11f0 = 0;
  local_1244 = 0;
  local_1218 = 0;
  local_1248 = 0;
  local_12b4 = 0;
  uVar13 = 0;
  bVar38 = true;
  bVar5 = false;
  bVar4 = false;
  local_1264 = 0;
  uVar6 = 0;
  local_1290 = 0;
  local_1270 = 0;
  local_1250 = 0;
  local_12f8 = (BIGNUM *)0x0;
  local_11f8 = 0;
  local_1240 = 0;
  local_1258 = (char *)0x0;
  local_12c8 = (X509 *)0x0;
  local_1220 = 0;
  local_12a0 = (char *)0x0;
  local_1228 = 0;
  local_1260 = (char *)0x0;
  local_12c0 = 0;
  local_1280 = (char *)0x0;
  local_12f0 = (EVP_PKEY *)0x0;
  local_1278 = (X509_REQ *)0x0;
  local_1298 = (long *)0x0;
  local_12e0 = 0;
  local_12e8 = 0;
  local_12d8 = 0;
switchD_00102705_caseD_0:
  while( true ) {
    while( true ) {
      iVar7 = opt_next();
      if (iVar7 == 0) goto LAB_00102e30;
      if (0x35 < iVar7) break;
      if (-2 < iVar7) goto code_r0x001026fe;
    }
    if (iVar7 < 0x645) break;
    if (iVar7 - 0x646U < 4) {
      local_11f8 = opt_arg();
      local_11e4 = iVar7 + -0x645;
    }
  }
  if (iVar7 < 0x641) {
    if (1 < iVar7 - 0x5ddU) goto switchD_00102705_caseD_0;
    iVar7 = opt_rand(iVar7);
  }
  else {
    iVar7 = opt_provider(iVar7);
  }
  if (iVar7 == 0) {
    local_1284 = 0;
    goto LAB_00102c33;
  }
  goto switchD_00102705_caseD_0;
code_r0x001026fe:
  switch(iVar7) {
  default:
    goto switchD_00102705_caseD_0;
  case 1:
    conf = (CONF *)0x0;
    uVar14 = 0;
    x_03 = (X509_CRL *)0x0;
    opt_help();
    lVar18 = 0;
    BIO_free_all((BIO *)0x0);
    BIO_free_all((BIO *)0x0);
    BIO_free_all((BIO *)0x0);
    OSSL_STACK_OF_X509_free(0);
    cleanse(local_1148);
    local_12f8 = (BIGNUM *)0x0;
    local_12f0 = (EVP_PKEY *)0x0;
    local_12c8 = (X509 *)0x0;
    goto LAB_0010287a;
  case 2:
    uVar29 = opt_arg();
    local_12d8 = setup_engine_methods(uVar29,0xffffffff,0);
    goto switchD_00102705_caseD_0;
  case 3:
    local_12b4 = 1;
    goto switchD_00102705_caseD_0;
  case 4:
    lVar18 = opt_arg();
    goto switchD_00102705_caseD_0;
  case 5:
    pcVar37 = (char *)opt_arg();
    goto switchD_00102705_caseD_0;
  case 6:
    local_1250 = opt_arg();
    goto switchD_00102705_caseD_0;
  case 7:
    iVar9 = 0x1000;
    goto switchD_00102705_caseD_0;
  case 8:
    uVar6 = 1;
    goto switchD_00102705_caseD_0;
  case 10:
  case 0x28:
    local_1270 = opt_arg();
    goto switchD_00102705_caseD_0;
  case 0xb:
  case 0x29:
    local_1290 = opt_arg();
    goto switchD_00102705_caseD_0;
  case 0xc:
    pcVar16 = (char *)opt_arg();
    lVar15 = strtol(pcVar16,(char **)0x0,10);
    local_1130 = (long)(int)lVar15;
    goto switchD_00102705_caseD_0;
  case 0xd:
    local_1298 = (long *)opt_arg();
    goto switchD_00102705_caseD_0;
  case 0xe:
    local_1278 = (X509_REQ *)opt_arg();
    goto switchD_00102705_caseD_0;
  case 0xf:
    local_12f0 = (EVP_PKEY *)opt_arg();
    goto switchD_00102705_caseD_0;
  case 0x10:
    uVar29 = opt_arg();
    iVar7 = opt_format(uVar29,0xffe,&local_115c);
    break;
  case 0x11:
    local_12c8 = (X509 *)opt_arg();
    goto switchD_00102705_caseD_0;
  case 0x12:
    local_1148 = (long *)opt_arg();
    goto switchD_00102705_caseD_0;
  case 0x13:
    pcVar19 = (char *)opt_arg();
    goto switchD_00102705_caseD_0;
  case 0x14:
    uVar29 = opt_arg();
    iVar7 = opt_format(uVar29,0xffe,&local_1168);
    break;
  case 0x15:
    local_1244 = 1;
    goto switchD_00102705_caseD_0;
  case 0x16:
    local_12c0 = opt_arg();
    uVar13 = 1;
    goto switchD_00102705_caseD_0;
  case 0x17:
    uVar29 = opt_arg();
    iVar7 = opt_format(uVar29,6,&local_1164);
    break;
  case 0x18:
    local_1240 = opt_arg();
    goto switchD_00102705_caseD_0;
  case 0x19:
    opt_arg();
    iVar7 = set_dateopt(&local_1150);
    break;
  case 0x1a:
    local_1258 = (char *)opt_arg();
    goto switchD_00102705_caseD_0;
  case 0x1b:
    if ((local_12e0 == 0) && (local_12e0 = OPENSSL_sk_new_null(), local_12e0 == 0)) {
LAB_00102fdb:
      local_12c8 = (X509 *)0x0;
      x_03 = (X509_CRL *)0x0;
      conf = (CONF *)0x0;
      pBVar17 = (BIO *)0x0;
      local_12b0 = (long *)0x0;
      lVar18 = 0;
      local_12f0 = (EVP_PKEY *)0x0;
      local_12f8 = (BIGNUM *)0x0;
      local_1284 = 0;
      goto LAB_0010281a;
    }
    opt_arg();
    iVar7 = OPENSSL_sk_push(local_12e0);
    if (iVar7 != 0) goto switchD_00102705_caseD_0;
    local_1284 = 0;
    goto LAB_00102c33;
  case 0x1c:
    if ((local_12e8 == 0) && (local_12e8 = OPENSSL_sk_new_null(), local_12e8 == 0))
    goto LAB_00102fdb;
    opt_arg();
    local_1284 = OPENSSL_sk_push(local_12e8);
    if (local_1284 != 0) goto switchD_00102705_caseD_0;
LAB_00102c33:
    local_12c8 = (X509 *)0x0;
    local_12f8 = (BIGNUM *)0x0;
    x_03 = (X509_CRL *)0x0;
    lVar18 = 0;
    conf = (CONF *)0x0;
    local_12b0 = (long *)0x0;
    local_12f0 = (EVP_PKEY *)0x0;
    goto LAB_00102c55;
  case 0x1d:
    bVar5 = true;
    goto switchD_00102705_caseD_0;
  case 0x1e:
    local_1264 = 1;
    goto switchD_00102705_caseD_0;
  case 0x1f:
    preserve = 1;
    goto switchD_00102705_caseD_0;
  case 0x20:
    bVar38 = false;
    goto switchD_00102705_caseD_0;
  case 0x21:
    local_1248 = 1;
    goto switchD_00102705_caseD_0;
  case 0x22:
    msie_hack = 1;
    goto switchD_00102705_caseD_0;
  case 0x23:
    local_11f0 = opt_arg();
    goto switchD_00102705_caseD_0;
  case 0x24:
    local_1210 = opt_arg();
    goto switchD_00102705_caseD_0;
  case 0x25:
    pcVar16 = (char *)opt_arg();
    local_1140 = strtol(pcVar16,(char **)0x0,10);
    goto switchD_00102705_caseD_0;
  case 0x26:
    pcVar16 = (char *)opt_arg();
    local_1138 = strtol(pcVar16,(char **)0x0,10);
    goto switchD_00102705_caseD_0;
  case 0x27:
    pcVar16 = (char *)opt_arg();
    local_1238 = strtol(pcVar16,(char **)0x0,10);
    goto switchD_00102705_caseD_0;
  case 0x2a:
    uVar13 = 1;
LAB_00102e30:
    iVar7 = opt_num_rest();
    lVar15 = opt_rest();
    conf = (CONF *)app_load_config_verbose(lVar18,1);
    if (conf == (CONF *)0x0) goto LAB_001027e5;
    if ((_default_config_file != lVar18) && (iVar8 = app_load_modules(conf), iVar8 == 0)) {
LAB_00102ed1:
      local_1284 = 0;
      x_03 = (X509_CRL *)0x0;
      lVar18 = 0;
      pBVar17 = (BIO *)0x0;
      local_12c8 = (X509 *)0x0;
      local_12b0 = (long *)0x0;
      local_12f0 = (EVP_PKEY *)0x0;
      local_12f8 = (BIGNUM *)0x0;
      goto LAB_0010281a;
    }
    if ((pcVar37 == (char *)0x0) &&
       (pcVar37 = NCONF_get_string(conf,"ca","default_ca"), pcVar37 == (char *)0x0)) {
      x_03 = (X509_CRL *)0x0;
      lVar18 = 0;
      BIO_printf(_bio_err,"variable lookup failed for %s::%s\n",&_LC100,"default_ca");
      local_12f8 = (BIGNUM *)0x0;
      local_12c8 = (X509 *)0x0;
      local_12b0 = (long *)0x0;
      local_12f0 = (EVP_PKEY *)0x0;
      local_1284 = 0;
      pBVar17 = (BIO *)0x0;
      goto LAB_0010281a;
    }
    pcVar16 = (char *)app_conf_try_string(conf,0,"oid_file");
    if (pcVar16 != (char *)0x0) {
      pBVar17 = BIO_new_file(pcVar16,"r");
      if (pBVar17 == (BIO *)0x0) {
        ERR_clear_error();
      }
      else {
        OBJ_create_objects(pBVar17);
        BIO_free(pBVar17);
      }
    }
    iVar8 = add_oid_section(conf);
    if (iVar8 == 0) goto LAB_00102ed1;
    app_RAND_load_conf(conf,&_LC100);
    iVar8 = app_RAND_load();
    if (iVar8 == 0) goto LAB_00102ed1;
    pcVar16 = (char *)app_conf_try_string(conf,pcVar37,"string_mask");
    if ((pcVar16 != (char *)0x0) && (iVar8 = ASN1_STRING_set_default_mask_asc(pcVar16), iVar8 == 0))
    {
      BIO_printf(_bio_err,"Invalid global string mask setting %s\n",pcVar16);
      goto LAB_00102ed1;
    }
    if ((iVar9 == 0x1000) ||
       ((pcVar16 = (char *)app_conf_try_string(conf,pcVar37,&_LC105), pcVar16 != (char *)0x0 &&
        (iVar8 = strcmp(pcVar16,"yes"), iVar8 == 0)))) {
      iVar9 = 0x1000;
    }
    local_116c = 1;
    lVar18 = app_conf_try_string(conf,pcVar37,"unique_subject");
    if (lVar18 != 0) {
      local_116c = parse_yesno(lVar18,1);
    }
    if (local_12f8 != (BIGNUM *)0x0) {
      pcVar19 = NCONF_get_string(conf,pcVar37,"database");
      if (pcVar19 == (char *)0x0) {
        BIO_printf(_bio_err,"variable lookup failed for %s::%s\n",pcVar37,"database");
        goto LAB_00102ed1;
      }
      lVar18 = load_index(pcVar19,&local_116c);
      if (lVar18 == 0) {
        BIO_printf(_bio_err,"Problem with index file: %s (could not load/parse file)\n",pcVar19);
        goto LAB_00102ed1;
      }
      iVar9 = index_index(lVar18);
      if (iVar9 < 1) goto LAB_001030d6;
      sVar23 = strlen((char *)local_12f8);
      local_10d8 = (undefined1  [16])0x0;
      local_10c8 = (undefined1  [16])0x0;
      local_10b8 = (undefined1  [16])0x0;
      __dest = (undefined1 *)app_malloc(sVar23 + 2,"row serial#");
      local_10c8._8_8_ = __dest;
      if ((sVar23 & 1) == 0) {
        memcpy(__dest,local_12f8,sVar23);
        *(undefined1 *)(local_10c8._8_8_ + sVar23) = 0;
      }
      else {
        *__dest = 0x30;
        memcpy(__dest + 1,local_12f8,sVar23);
        *(undefined1 *)(local_10c8._8_8_ + 1 + sVar23) = 0;
      }
      value = (OPENSSL_STRING *)local_10d8;
      make_uppercase(local_10c8._8_8_);
      ppcVar24 = TXT_DB_get_by_index(*(TXT_DB **)(lVar18 + 8),3,value);
      if (ppcVar24 == (OPENSSL_STRING *)0x0) {
        BIO_printf(_bio_err,"Serial %s not present in db.\n",local_10c8._8_8_);
LAB_001036f0:
        iVar9 = -1;
      }
      else {
        cVar2 = **ppcVar24;
        if (cVar2 == 'V') {
          BIO_printf(_bio_err,"%s=Valid (%c)\n",local_10c8._8_8_,0x56);
        }
        else if (cVar2 == 'R') {
          BIO_printf(_bio_err,"%s=Revoked (%c)\n",local_10c8._8_8_,0x52);
        }
        else if (cVar2 == 'E') {
          BIO_printf(_bio_err,"%s=Expired (%c)\n",local_10c8._8_8_,0x45);
        }
        else {
          if (cVar2 != 'S') {
            BIO_printf(_bio_err,"%s=Unknown (%c).\n",local_10c8._8_8_,(ulong)(uint)(int)cVar2);
            goto LAB_001036f0;
          }
          BIO_printf(_bio_err,"%s=Suspended (%c)\n",local_10c8._8_8_,0x53);
        }
        iVar9 = 1;
      }
      do {
        ptr = *value;
        value = value + 1;
        CRYPTO_free(ptr);
      } while ((OPENSSL_STRING *)local_10a8 != value);
      if (iVar9 != 1) {
        BIO_printf(_bio_err,"Error verifying serial %s!\n",local_12f8);
      }
LAB_001030d6:
      local_12c8 = (X509 *)0x0;
      x_03 = (X509_CRL *)0x0;
      pBVar17 = (BIO *)0x0;
      local_1284 = 0;
      local_12b0 = (long *)0x0;
      local_12f0 = (EVP_PKEY *)0x0;
LAB_001030fe:
      local_12f8 = (BIGNUM *)0x0;
      goto LAB_0010281a;
    }
    if ((local_12f0 == (EVP_PKEY *)0x0) &&
       (local_12f0 = (EVP_PKEY *)NCONF_get_string(conf,pcVar37,"private_key"),
       local_12f0 == (EVP_PKEY *)0x0)) {
      x_03 = (X509_CRL *)0x0;
      lVar18 = 0;
      pBVar17 = (BIO *)0x0;
      BIO_printf(_bio_err,"variable lookup failed for %s::%s\n",pcVar37,"private_key");
      local_1284 = 0;
      local_12c8 = (X509 *)0x0;
      local_12b0 = (long *)0x0;
      local_12f0 = (EVP_PKEY *)0x0;
      goto LAB_0010281a;
    }
    local_1284 = 0;
    local_12b0 = local_1148;
    if (local_1148 == (long *)0x0) {
      iVar8 = app_passwd(local_12c8,0,&local_1148,0);
      if (iVar8 == 0) {
        x_03 = (X509_CRL *)0x0;
        lVar18 = 0;
        pBVar17 = (BIO *)0x0;
        BIO_printf(_bio_err,"Error getting password\n");
        local_12f8 = (BIGNUM *)0x0;
        local_12c8 = (X509 *)0x0;
        local_12f0 = (EVP_PKEY *)0x0;
        local_1284 = 1;
        goto LAB_0010281a;
      }
      local_1284 = 1;
    }
    local_12f0 = (EVP_PKEY *)
                 load_key(local_12f0,local_115c,0,local_1148,local_12d8,"CA private key");
    cleanse(local_1148);
    if (local_12f0 == (EVP_PKEY *)0x0) {
      local_12c8 = (X509 *)0x0;
LAB_001035ad:
      local_12f8 = (BIGNUM *)0x0;
      x_03 = (X509_CRL *)0x0;
      lVar18 = 0;
      pBVar17 = (BIO *)0x0;
      local_12b0 = (long *)0x0;
      goto LAB_0010281a;
    }
    if ((((local_1244 == 0) || (local_1260 != (char *)0x0)) || (local_1228 != 0)) ||
       (local_12c8 = (X509 *)0x0, local_1248 != 0)) {
      if ((pcVar19 == (char *)0x0) &&
         (pcVar19 = NCONF_get_string(conf,pcVar37,"certificate"), pcVar19 == (char *)0x0)) {
        x_03 = (X509_CRL *)0x0;
        pBVar17 = (BIO *)0x0;
        BIO_printf(_bio_err,"variable lookup failed for %s::%s\n",pcVar37);
        local_12c8 = (X509 *)0x0;
        local_12b0 = (long *)0x0;
        local_12f8 = (BIGNUM *)0x0;
        lVar18 = 0;
        goto LAB_0010281a;
      }
      local_12c8 = (X509 *)load_cert_pass(pcVar19,local_1168,1,local_1148);
      if (local_12c8 == (X509 *)0x0) goto LAB_001035ad;
      iVar8 = X509_check_private_key(local_12c8,local_12f0);
      if (iVar8 == 0) {
        x_03 = (X509_CRL *)0x0;
        lVar18 = 0;
        pBVar17 = (BIO *)0x0;
        BIO_printf(_bio_err,"CA certificate and CA private key do not match\n");
        local_12b0 = (long *)0x0;
        goto LAB_0010281a;
      }
    }
    pXVar31 = (X509 *)0x0;
    if (local_1244 == 0) {
      pXVar31 = local_12c8;
    }
    pbVar20 = (byte *)app_conf_try_string(conf,&_LC100,"preserve");
    if ((pbVar20 != (byte *)0x0) && ((*pbVar20 & 0xdf) == 0x59)) {
      preserve = 1;
    }
    pbVar20 = (byte *)app_conf_try_string(conf,&_LC100,"msie_hack");
    if ((pbVar20 != (byte *)0x0) && ((*pbVar20 & 0xdf) == 0x59)) {
      msie_hack = 1;
    }
    lVar18 = app_conf_try_string(conf,pcVar37,"name_opt");
    if (lVar18 == 0) {
      local_11d4 = 1;
    }
    else {
      iVar8 = set_nameopt(lVar18);
      local_11d4 = 0;
      if (iVar8 == 0) {
        BIO_printf(_bio_err,"Invalid name options: \"%s\"\n",lVar18);
        goto LAB_001038c6;
      }
    }
    lVar18 = app_conf_try_string(conf,pcVar37,"cert_opt");
    if (lVar18 == 0) {
LAB_00103375:
      lVar18 = app_conf_try_string(conf,pcVar37,"copy_extensions");
      if ((lVar18 == 0) || (iVar8 = set_ext_copy(&local_1160,lVar18), iVar8 != 0)) {
        if ((local_1258 == (char *)0x0) && (uVar13 != 0)) {
          local_1258 = NCONF_get_string(conf,pcVar37,"new_certs_dir");
          if (local_1258 == (char *)0x0) {
            BIO_printf(_bio_err,
                       "there needs to be defined a directory for new certificate to be placed in\n"
                      );
            goto LAB_001038c6;
          }
          iVar8 = app_isdir(local_1258);
          if (iVar8 < 1) {
            BIO_printf(_bio_err,"%s: %s is not a directory\n",uVar14,local_1258);
            perror(local_1258);
            goto LAB_001038c6;
          }
        }
        pcVar19 = NCONF_get_string(conf,pcVar37,"database");
        if (pcVar19 == (char *)0x0) {
          BIO_printf(_bio_err,"variable lookup failed for %s::%s\n",pcVar37,"database");
        }
        else {
          iVar8 = 0;
          lVar18 = load_index(pcVar19,&local_116c);
          if (lVar18 != 0) goto LAB_00103441;
          BIO_printf(_bio_err,"Problem with index file: %s (could not load/parse file)\n",pcVar19);
        }
        goto LAB_001038c6;
      }
      pcVar19 = "Invalid extension copy option: \"%s\"\n";
    }
    else {
      iVar8 = set_cert_ex(&local_1128,lVar18);
      pcVar19 = "Invalid certificate options: \"%s\"\n";
      local_11d4 = 0;
      if (iVar8 != 0) goto LAB_00103375;
    }
    BIO_printf(_bio_err,pcVar19,lVar18);
LAB_001038c6:
    local_12b0 = (long *)0x0;
    x_03 = (X509_CRL *)0x0;
    lVar18 = 0;
    pBVar17 = (BIO *)0x0;
    goto LAB_0010281a;
  case 0x2b:
    local_1228 = opt_arg();
    uVar13 = 1;
    goto switchD_00102705_caseD_0;
  case 0x2c:
    local_1260 = (char *)opt_arg();
    uVar13 = 1;
    goto switchD_00102705_caseD_0;
  case 0x2d:
    local_12c0 = opt_arg();
    local_1288 = 1;
    goto switchD_00102705_caseD_0;
  case 0x2e:
    local_12c0 = opt_arg();
    local_1288 = 2;
    goto switchD_00102705_caseD_0;
  case 0x2f:
    local_12a0 = (char *)opt_arg();
    goto switchD_00102705_caseD_0;
  case 0x30:
    local_1220 = opt_arg();
    goto switchD_00102705_caseD_0;
  case 0x31:
    local_12f8 = (BIGNUM *)opt_arg();
    goto switchD_00102705_caseD_0;
  case 0x32:
    bVar4 = true;
    goto switchD_00102705_caseD_0;
  case 0x33:
    local_1280 = (char *)opt_arg();
    goto switchD_00102705_caseD_0;
  case 0x34:
    local_1218 = 1;
    goto switchD_00102705_caseD_0;
  case 0x35:
    local_12b4 = 0;
    goto switchD_00102705_caseD_0;
  case -1:
    goto switchD_00102705_caseD_ffffffff;
  }
  if (iVar7 == 0) goto switchD_00102705_caseD_ffffffff;
  goto switchD_00102705_caseD_0;
LAB_00103441:
  iVar10 = OPENSSL_sk_num(*(undefined8 *)(*(long *)(lVar18 + 8) + 8));
  if (iVar10 <= iVar8) goto LAB_00103a73;
  puVar21 = (undefined8 *)OPENSSL_sk_value(*(undefined8 *)(*(long *)(lVar18 + 8) + 8),iVar8);
  if (*(char *)*puVar21 == 'R') {
    iVar10 = make_revoked(0,puVar21[2]);
    if (iVar10 != 0) goto LAB_00103485;
    pcVar37 = " in entry %d\n";
LAB_00103887:
    BIO_printf(_bio_err,pcVar37,(ulong)(iVar8 + 1));
    goto LAB_0010351e;
  }
  if (*(char *)puVar21[2] != '\0') {
    BIO_printf(_bio_err,"entry %d: not revoked yet, but has a revocation date\n",(ulong)(iVar8 + 1))
    ;
    goto LAB_0010351e;
  }
LAB_00103485:
  iVar10 = ASN1_TIME_set_string((ASN1_TIME *)0x0,(char *)puVar21[1]);
  if (iVar10 == 0) {
    pcVar37 = "entry %d: invalid expiry date\n";
    goto LAB_00103887;
  }
  pbVar20 = (byte *)puVar21[3];
  sVar23 = strlen((char *)pbVar20);
  uVar33 = sVar23 & 0xffffffff;
  if (*pbVar20 == 0x2d) {
    pbVar20 = pbVar20 + 1;
    uVar33 = (ulong)((int)sVar23 - 1);
  }
  if (((int)uVar33 < 2) || ((uVar33 & 1) != 0)) {
    BIO_printf(_bio_err,"entry %d: bad serial number length (%d)\n",(ulong)(iVar8 + 1));
    goto LAB_0010351e;
  }
  bVar1 = *pbVar20;
  if (bVar1 != 0) {
    ppuVar22 = __ctype_b_loc();
    do {
      if ((*(byte *)((long)*ppuVar22 + (ulong)bVar1 * 2 + 1) & 0x10) == 0) {
        BIO_printf(_bio_err,"entry %d: bad char 0%o \'%c\' in serial number\n",(ulong)(iVar8 + 1),
                   (ulong)(uint)(int)(char)bVar1,(ulong)(uint)(int)(char)bVar1);
        goto LAB_0010351e;
      }
      bVar1 = pbVar20[1];
      pbVar20 = pbVar20 + 1;
    } while (bVar1 != 0);
  }
  iVar8 = iVar8 + 1;
  goto LAB_00103441;
LAB_00103a73:
  if (local_12b4 != 0) {
    TXT_DB_write(_bio_out,*(TXT_DB **)(lVar18 + 8));
    uVar11 = OPENSSL_sk_num(*(undefined8 *)(*(long *)(lVar18 + 8) + 8));
    BIO_printf(_bio_err,"%d entries loaded from the database\n",(ulong)uVar11);
    BIO_printf(_bio_err,"generating index\n");
  }
  iVar8 = index_index(lVar18);
  if (iVar8 < 1) goto LAB_0010351e;
  if (bVar4) {
    if (local_12b4 != 0) {
      BIO_printf(_bio_err,"Updating %s ...\n",pcVar19);
    }
    uVar11 = do_updatedb(lVar18,0);
    if (uVar11 == 0xffffffff) {
      BIO_printf(_bio_err,"Malloc failure\n");
      goto LAB_0010351e;
    }
    if (uVar11 == 0) {
      if (local_12b4 != 0) {
        BIO_printf(_bio_err,"No entries found to mark expired\n");
      }
    }
    else {
      iVar8 = save_index(pcVar19,&_LC145,lVar18);
      if ((iVar8 == 0) || (iVar8 = rotate_index(pcVar19,&_LC145,&_LC146), iVar8 == 0))
      goto LAB_0010351e;
      if (local_12b4 != 0) {
        BIO_printf(_bio_err,"Done. %d entries marked as expired\n",(ulong)uVar11);
      }
    }
  }
  if (local_1220 != 0) {
    extfile_conf = (CONF *)app_load_config_internal(local_1220,0);
    if (extfile_conf == (CONF *)0x0) goto LAB_0010351e;
    if (local_12b4 != 0) {
      BIO_printf(_bio_err,"Successfully loaded extensions file %s\n",local_1220);
    }
    if (local_12a0 == (char *)0x0) {
      pcVar16 = (char *)app_conf_try_string(extfile_conf,"default","extensions");
      local_12a0 = "default";
      if (pcVar16 != (char *)0x0) {
        local_12a0 = pcVar16;
      }
    }
  }
  plVar34 = (long *)(ulong)local_1248;
  uVar11 = uVar13 | local_1248;
  uVar12 = local_1264;
  if ((uVar11 != 0) && ((local_1240 == 0 || (uVar12 = uVar11, local_1260 == (char *)0x0)))) {
    uVar11 = 0;
    uVar12 = local_1264;
  }
  local_1264 = uVar12;
  iVar8 = EVP_PKEY_get_default_digest_name(local_12f0,local_1098,0x50);
  if ((iVar8 == 2) && (iVar10 = strcmp(local_1098,"UNDEF"), iVar10 == 0)) {
    local_1298 = (long *)0x0;
  }
  else {
    if ((local_1298 == (long *)0x0) &&
       (local_1298 = (long *)lookup_conf(conf,pcVar37,"default_md"), local_1298 == (long *)0x0)) {
      iVar10 = strcmp(local_1098,"UNDEF");
      if (iVar10 != 0) goto LAB_0010351e;
    }
    else {
      iVar10 = strcmp((char *)local_1298,"default");
      if ((iVar10 != 0) && (iVar10 = strcmp(local_1098,"UNDEF"), iVar10 != 0)) goto LAB_00103bb4;
    }
    local_1298 = (long *)local_1098;
    if (iVar8 < 1) {
      BIO_puts(_bio_err,"no default digest\n");
      goto LAB_0010351e;
    }
  }
LAB_00103bb4:
  if (uVar13 == 0) {
    local_12b0 = (long *)0x0;
    goto LAB_00104a4c;
  }
  if ((bVar38 == true) &&
     (pcVar16 = (char *)app_conf_try_string(conf,pcVar37,"email_in_dn"), pcVar16 != (char *)0x0)) {
    iVar8 = strcmp(pcVar16,"no");
    bVar38 = iVar8 != 0;
  }
  if (local_12b4 == 0) {
    if ((local_1278 != (X509_REQ *)0x0) ||
       (local_1278 = (X509_REQ *)lookup_conf(conf,pcVar37,"policy"), local_1278 != (X509_REQ *)0x0))
    {
LAB_00103be7:
      lVar25 = app_conf_try_string(conf,pcVar37,"rand_serial");
      if (lVar25 == 0) {
        local_1200 = lookup_conf(conf,pcVar37,"serial");
        if (local_1200 == 0) goto LAB_0010351e;
      }
      else {
        local_1200 = 0;
        local_1218 = uVar13;
      }
      if (extfile_conf == (CONF *)0x0) {
        if ((local_12a0 != (char *)0x0) ||
           (local_12a0 = (char *)app_conf_try_string(conf,pcVar37,"x509_extensions"),
           local_12a0 != (char *)0x0)) {
          X509V3_set_ctx(&local_1118,(X509 *)0x0,(X509 *)0x0,(X509_REQ *)0x0,(X509_CRL *)0x0,1);
          X509V3_set_nconf(&local_1118,conf);
          plVar34 = (long *)0x0;
          iVar8 = X509V3_EXT_add_nconf(conf,&local_1118,local_12a0,(X509 *)0x0);
          if (iVar8 == 0) {
            BIO_printf(_bio_err,"Error checking certificate extension config section %s\n",
                       local_12a0);
            goto LAB_0010351e;
          }
        }
      }
      else {
        X509V3_set_ctx(&local_1118,(X509 *)0x0,(X509 *)0x0,(X509_REQ *)0x0,(X509_CRL *)0x0,1);
        X509V3_set_nconf(&local_1118,extfile_conf);
        plVar34 = (long *)0x0;
        iVar8 = X509V3_EXT_add_nconf(extfile_conf,&local_1118,local_12a0,(X509 *)0x0);
        if (iVar8 == 0) {
          BIO_printf(_bio_err,"Error checking certificate extensions from extfile section %s\n",
                     local_12a0);
          goto LAB_0010351e;
        }
      }
      if (local_1270 == 0) {
        local_1270 = app_conf_try_string(conf,pcVar37,"default_startdate");
      }
      if (local_1290 == 0) {
        local_1290 = app_conf_try_string(conf,pcVar37,"default_enddate");
        if (local_1130 == 0) goto LAB_00105334;
        if (local_1290 == 0) {
LAB_001053ad:
          local_1290 = 0;
        }
        else {
LAB_001053d1:
          if (local_1130 != 0) goto LAB_00103c9c;
        }
      }
      else {
        if (local_1130 == 0) {
LAB_00105334:
          plVar34 = &local_1130;
          iVar8 = app_conf_try_number(conf,pcVar37,"default_days");
          if (iVar8 == 0) {
            local_1130 = 0;
            if (local_1290 != 0) goto LAB_00103cb1;
          }
          else {
            if (local_1290 != 0) goto LAB_001053d1;
            if (local_1130 != 0) goto LAB_001053ad;
          }
          BIO_printf(_bio_err,"cannot lookup how many days to certify for\n");
          goto LAB_0010351e;
        }
LAB_00103c9c:
        BIO_printf(_bio_err,"Warning: -enddate or -not_after option overriding -days option\n");
      }
LAB_00103cb1:
      if (local_1218 == 0) {
        plVar34 = (long *)0x0;
        local_1158 = (BIGNUM *)load_serial(local_1200,0,uVar6);
        if (local_1158 != (BIGNUM *)0x0) {
          if (local_12b4 != 0) {
            iVar8 = BN_is_zero(local_1158);
            if (iVar8 == 0) {
              pcVar16 = BN_bn2hex(local_1158);
              if (pcVar16 == (char *)0x0) goto LAB_0010351e;
              BIO_printf(_bio_err,"next serial number is %s\n",pcVar16);
              CRYPTO_free(pcVar16);
            }
            else {
              BIO_printf(_bio_err,"next serial number is 00\n");
            }
          }
          goto LAB_00103ce7;
        }
        BIO_printf(_bio_err,"error while loading serial number\n");
      }
      else {
        local_1158 = BN_new();
        if ((local_1158 == (BIGNUM *)0x0) || (iVar8 = rand_serial(local_1158,0), iVar8 == 0)) {
          BIO_printf(_bio_err,"error generating serial number\n");
        }
        else {
LAB_00103ce7:
          psVar26 = NCONF_get_section(conf,(char *)local_1278);
          if (psVar26 == (stack_st_CONF_VALUE *)0x0) {
            BIO_printf(_bio_err,"unable to find \'section\' for %s\n",local_1278);
          }
          else {
            local_12b0 = (long *)OPENSSL_sk_new_null();
            if (local_12b0 != (long *)0x0) {
              if (local_1260 == (char *)0x0) {
                uVar33 = 0;
                goto LAB_0010408e;
              }
              get_nameopt();
              conf_00 = CONF_load((lhash_st_CONF_VALUE *)0x0,local_1260,(long *)&local_1118);
              if (conf_00 == (lhash_st_CONF_VALUE *)0x0) {
                BIO_printf(_bio_err,"error on line %ld of %s\n",local_1118._0_8_,local_1260);
LAB_0010523f:
                x = (NETSCAPE_SPKI *)0x0;
                local_1278 = (X509_REQ *)0x0;
LAB_00103efb:
                X509_REQ_free(local_1278);
                CONF_free(conf_00);
                NETSCAPE_SPKI_free(x);
                X509_NAME_ENTRY_free((X509_NAME_ENTRY *)0x0);
              }
              else {
                psVar27 = CONF_get_section(conf_00,"default");
                iVar8 = OPENSSL_sk_num(psVar27);
                if (iVar8 == 0) {
                  BIO_printf(_bio_err,"no name/value pairs found in %s\n",local_1260);
                  goto LAB_0010523f;
                }
                local_1278 = X509_REQ_new();
                if (local_1278 == (X509_REQ *)0x0) goto LAB_0010523f;
                x = (NETSCAPE_SPKI *)0x0;
                pXVar28 = (X509_NAME *)X509_REQ_get_subject_name(local_1278);
                for (iVar8 = 0; iVar10 = OPENSSL_sk_num(psVar27), iVar8 < iVar10; iVar8 = iVar8 + 1)
                {
                  lVar25 = OPENSSL_sk_value(psVar27,iVar8);
                  pbVar20 = *(byte **)(lVar25 + 8);
                  pbVar35 = pbVar20;
                  bVar1 = *pbVar20;
                  do {
                    if (bVar1 == 0) goto LAB_00103e75;
                    uVar33 = (ulong)bVar1;
                    pbVar35 = pbVar35 + 1;
                    bVar3 = *pbVar35;
                    bVar4 = 0x3a < bVar1;
                    bVar1 = bVar3;
                  } while ((bVar4) || ((0x400500000000000U >> (uVar33 & 0x3f) & 1) == 0));
                  if (bVar3 != 0) {
                    pbVar20 = pbVar35;
                  }
LAB_00103e75:
                  bytes = *(uchar **)(lVar25 + 0x10);
                  iVar10 = OBJ_txt2nid((char *)pbVar20);
                  if (iVar10 == 0) {
                    iVar10 = strcmp((char *)pbVar20,"SPKAC");
                    if ((iVar10 == 0) &&
                       (x = NETSCAPE_SPKI_b64_decode(*(char **)(lVar25 + 0x10),-1),
                       x == (NETSCAPE_SPKI *)0x0)) {
                      BIO_printf(_bio_err,"unable to load Netscape SPKAC structure\n");
                      goto LAB_0010516d;
                    }
                  }
                  else {
                    iVar10 = X509_NAME_add_entry_by_NID(pXVar28,iVar10,iVar9,bytes,-1,-1,0);
                    if (iVar10 == 0) goto LAB_00103efb;
                  }
                }
                if (x == (NETSCAPE_SPKI *)0x0) {
                  BIO_printf(_bio_err,"Netscape SPKAC structure not found in %s\n",local_1260);
LAB_0010516d:
                  x = (NETSCAPE_SPKI *)0x0;
                  goto LAB_00103efb;
                }
                BIO_printf(_bio_err,"Check that the SPKAC request matches the signature\n");
                r = NETSCAPE_SPKI_get_pubkey(x);
                if (r == (EVP_PKEY *)0x0) {
                  BIO_printf(_bio_err,"error unpacking SPKAC public key\n");
                  goto LAB_00103efb;
                }
                iVar8 = NETSCAPE_SPKI_verify(x,r);
                if (iVar8 < 1) {
                  EVP_PKEY_free(r);
                  BIO_printf(_bio_err,"signature verification failed on SPKAC public key\n");
                  goto LAB_00103efb;
                }
                BIO_printf(_bio_err,"Signature ok\n");
                X509_REQ_set_pubkey(local_1278,r);
                EVP_PKEY_free(r);
                plVar34 = local_1298;
                uVar12 = do_body_constprop_0(&local_1120,local_12f0,local_12c8);
                uVar33 = (ulong)uVar12;
                X509_REQ_free(local_1278);
                CONF_free(conf_00);
                NETSCAPE_SPKI_free(x);
                X509_NAME_ENTRY_free((X509_NAME_ENTRY *)0x0);
                if (-1 < (int)uVar12) {
                  if (uVar12 == 0) {
LAB_0010408e:
                    if (local_1228 == 0) goto LAB_001042d1;
                    get_nameopt();
                    plVar34 = local_1148;
                    x_00 = (X509 *)load_cert_pass(local_1228,local_1168,1);
                    if (x_00 != (X509 *)0x0) {
                      if (local_12b4 != 0) {
                        X509_print(_bio_err,x_00);
                      }
                      BIO_printf(_bio_err,"Check that the request matches the signature\n");
                      lVar25 = X509_get0_pubkey(x_00);
                      if (lVar25 != 0) {
                        iVar8 = do_X509_verify(x_00,lVar25,local_12e0);
                        if (-1 < iVar8) {
                          if (iVar8 == 0) {
                            BIO_printf(_bio_err,"Signature did not match the certificate\n");
                            goto LAB_001051bc;
                          }
                          BIO_printf(_bio_err,"Signature ok\n");
                          a = X509_to_X509_REQ(x_00,(EVP_PKEY *)0x0,(EVP_MD *)0x0);
                          if (a == (X509_REQ *)0x0) goto LAB_001051fc;
                          plVar34 = local_1298;
                          iVar8 = do_body_constprop_0(&local_1120,local_12f0,local_12c8);
                          X509_REQ_free(a);
                          X509_free(x_00);
                          if (iVar8 < 0) goto LAB_00103f24;
                          if (iVar8 == 0) goto LAB_001042d1;
                          BIO_printf(_bio_err,"\n");
                          iVar8 = BN_add_word(local_1158,1);
                          if (iVar8 == 0) goto LAB_00103f24;
                          iVar8 = OPENSSL_sk_push(local_12b0,local_1120);
                          if (iVar8 != 0) {
                            uVar33 = (ulong)((int)uVar33 + 1);
                            goto LAB_001042d1;
                          }
LAB_00105194:
                          BIO_printf(_bio_err,"Memory allocation failure\n");
                          goto LAB_00103f24;
                        }
                        BIO_printf(_bio_err,"Signature verification problems....\n");
LAB_001051bc:
                        X509_REQ_free((X509_REQ *)0x0);
                        X509_free(x_00);
LAB_001042d1:
                        uVar14 = local_1150;
                        uVar6 = local_1160;
                        if (local_12c0 != 0) {
                          uVar29 = get_nameopt();
                          iVar9 = certify_constprop_0(&local_1120,local_12c0,local_1164,local_12f0,
                                                      pXVar31,local_1298,local_12e8,local_12e0,
                                                      psVar26,lVar18,local_1158,local_1250,iVar9,
                                                      bVar38,local_1270,local_1290,local_1130,
                                                      local_1264,local_12a0,conf,local_12b4,
                                                      local_1128,uVar29,local_11d4,uVar6,local_1244,
                                                      uVar14,plVar34);
                          if (iVar9 < 0) goto LAB_00103f24;
                          if (iVar9 != 0) {
                            BIO_printf(_bio_err,"\n");
                            iVar9 = BN_add_word(local_1158,1);
                            if (iVar9 == 0) goto LAB_00103f24;
                            iVar9 = OPENSSL_sk_push(local_12b0,local_1120);
                            if (iVar9 == 0) goto LAB_00105194;
                            uVar33 = (ulong)((int)uVar33 + 1);
                          }
                        }
                        for (lVar25 = 0; (int)lVar25 < iVar7; lVar25 = lVar25 + 1) {
                          get_nameopt();
                          iVar9 = certify_constprop_0(&local_1120,
                                                      *(undefined8 *)(lVar15 + lVar25 * 8),
                                                      local_1164);
                          if (iVar9 < 0) goto LAB_00104634;
                          if (iVar9 != 0) {
                            uVar33 = (ulong)((int)uVar33 + 1);
                            BIO_printf(_bio_err,"\n");
                            iVar9 = BN_add_word(local_1158,1);
                            pXVar31 = local_1120;
                            if (iVar9 != 0) {
                              iVar9 = OPENSSL_sk_push(local_12b0,local_1120);
                              if (iVar9 != 0) goto LAB_001043cc;
                              BIO_printf(_bio_err,"Memory allocation failure\n");
                            }
                            X509_free(pXVar31);
                            goto LAB_00103f24;
                          }
LAB_001043cc:
                        }
                        iVar9 = OPENSSL_sk_num(local_12b0);
                        if (0 < iVar9) {
                          if (local_1264 != 0) {
LAB_001046cb:
                            uVar13 = OPENSSL_sk_num(local_12b0);
                            BIO_printf(_bio_err,"Write out database with %d new entries\n",
                                       (ulong)uVar13);
                            if (((local_1200 != 0) &&
                                (iVar9 = save_serial(local_1200,&_LC145,local_1158,0), iVar9 == 0))
                               || (iVar9 = save_index(pcVar19,&_LC145,lVar18), iVar9 == 0))
                            goto LAB_00103f24;
                            goto LAB_0010473f;
                          }
                          BIO_printf(_bio_err,
                                     "\n%d out of %d certificate requests certified, commit? [y/n]",
                                     uVar33);
                          BIO_ctrl(_bio_err,0xb,0,(void *)0x0);
                          local_10a8[5] = 0;
                          pcVar16 = fgets(local_10a8 + 5,0xb,_stdin);
                          if (pcVar16 == (char *)0x0) {
                            BIO_printf(_bio_err,"CERTIFICATION CANCELED: I/O error\n");
                          }
                          else {
                            if ((local_10a8[5] & 0xdf) == 0x59) goto LAB_001046cb;
                            BIO_printf(_bio_err,"CERTIFICATION CANCELED\n");
                          }
                          x_03 = (X509_CRL *)0x0;
                          pBVar17 = (BIO *)0x0;
LAB_00104ee9:
                          uVar14 = 0;
                          goto LAB_0010282c;
                        }
LAB_0010473f:
                        OPENSSL_strlcpy(local_1048,local_1258,0x1000);
                        lVar15 = OPENSSL_strlcat(local_1048,&_LC184,0x1000);
                        if (local_12b4 != 0) {
                          BIO_printf(_bio_err,"writing new certificates\n");
                        }
                        pcVar16 = local_1048 + lVar15;
                        for (iVar9 = 0; iVar7 = OPENSSL_sk_num(local_12b0), iVar9 < iVar7;
                            iVar9 = iVar9 + 1) {
                          pXVar31 = (X509 *)OPENSSL_sk_value(local_12b0,iVar9);
                          x_01 = (ASN1_STRING *)X509_get0_serialNumber(pXVar31);
                          lVar25 = ASN1_STRING_get0_data(x_01);
                          uVar12 = ASN1_STRING_length(x_01);
                          uVar13 = 1;
                          if (0 < (int)uVar12) {
                            uVar13 = uVar12;
                          }
                          if (0x1000 < (ulong)((int)(uVar13 * 2 + 5) + lVar15)) {
                            BIO_printf(_bio_err,"certificate file name too long\n");
                            goto LAB_00103f24;
                          }
                          if ((int)uVar12 < 1) {
                            *(undefined2 *)pcVar16 = _LC191;
                            pcVar30 = local_1048 + lVar15 + 2;
                          }
                          else {
                            lVar36 = 0;
                            do {
                              pcVar16[lVar36 * 2] =
                                   "0123456789ABCDEF"[*(byte *)(lVar25 + lVar36) >> 4];
                              local_1048[lVar36 * 2 + lVar15 + 1] =
                                   "0123456789ABCDEF"[*(byte *)(lVar25 + lVar36) & 0xf];
                              lVar36 = lVar36 + 1;
                            } while ((int)lVar36 < (int)uVar12);
                            pcVar30 = pcVar16 + (ulong)uVar12 * 2;
                          }
                          builtin_strncpy(pcVar30,".pem",5);
                          if (local_12b4 != 0) {
                            BIO_printf(_bio_err,"writing %s\n",local_1048);
                          }
                          pBVar17 = (BIO *)bio_open_default(local_1240,0x77,
                                                            (-(uint)(uVar11 == 0) & 0x7ffd) + 4);
                          if (pBVar17 == (BIO *)0x0) goto LAB_00104634;
                          bp = BIO_new_file(local_1048,"w");
                          if (bp == (BIO *)0x0) {
                            perror(local_1048);
                            local_12f8 = (BIGNUM *)0x0;
                            x_03 = (X509_CRL *)0x0;
                            goto LAB_0010281a;
                          }
                          if (bVar5) {
                            PEM_write_bio_X509(bp,pXVar31);
                            if (uVar11 != 0) goto LAB_0010494b;
LAB_00104867:
                            PEM_write_bio_X509(pBVar17,pXVar31);
                          }
                          else {
                            X509_print(bp,pXVar31);
                            PEM_write_bio_X509(bp,pXVar31);
                            if (uVar11 == 0) {
                              X509_print(pBVar17,pXVar31);
                              goto LAB_00104867;
                            }
LAB_0010494b:
                            i2d_X509_bio(pBVar17,pXVar31);
                          }
                          BIO_free_all(bp);
                          BIO_free_all(pBVar17);
                        }
                        iVar9 = OPENSSL_sk_num(local_12b0);
                        if (iVar9 != 0) {
                          if (((local_1200 != 0) &&
                              (iVar9 = rotate_serial(local_1200,&_LC145), iVar9 == 0)) ||
                             (iVar9 = rotate_index(pcVar19,&_LC145,&_LC146), iVar9 == 0))
                          goto LAB_00103f24;
                          BIO_printf(_bio_err,"Database updated\n");
                        }
LAB_00104a4c:
                        if (local_1248 == 0) {
                          x_03 = (X509_CRL *)0x0;
                          pBVar17 = (BIO *)0x0;
LAB_00104e16:
                          if (local_1288 == 0) goto LAB_00104ee9;
                          if (local_12c0 == 0) {
                            BIO_printf(_bio_err,"no input files\n");
                          }
                          else {
                            pXVar31 = (X509 *)load_cert_pass(local_12c0,local_1164,1,local_1148,
                                                             "certificate to be revoked");
                            if (pXVar31 == (X509 *)0x0) goto LAB_001030fe;
                            iVar9 = -1;
                            if (local_1288 != 2) {
                              iVar9 = local_11e4;
                            }
                            iVar9 = do_revoke(pXVar31,lVar18,iVar9,local_11f8);
                            if (0 < iVar9) {
                              X509_free(pXVar31);
                              iVar9 = save_index(pcVar19,&_LC145,lVar18);
                              if ((iVar9 != 0) &&
                                 (iVar9 = rotate_index(pcVar19,&_LC145,&_LC146), iVar9 != 0)) {
                                BIO_printf(_bio_err,"Database updated\n");
                                goto LAB_00104ee9;
                              }
                            }
                          }
                        }
                        else {
                          if ((local_1280 != (char *)0x0) ||
                             (local_1280 = (char *)app_conf_try_string(conf,pcVar37,"crl_extensions"
                                                                      ), local_1280 != (char *)0x0))
                          {
                            X509V3_set_ctx(&local_1118,(X509 *)0x0,(X509 *)0x0,(X509_REQ *)0x0,
                                           (X509_CRL *)0x0,1);
                            X509V3_set_nconf(&local_1118,conf);
                            iVar9 = X509V3_EXT_add_nconf(conf,&local_1118,local_1280,(X509 *)0x0);
                            if (iVar9 == 0) {
                              x_03 = (X509_CRL *)0x0;
                              pBVar17 = (BIO *)0x0;
                              BIO_printf(_bio_err,"Error checking CRL extension section %s\n",
                                         local_1280);
                              goto LAB_0010281a;
                            }
                          }
                          lVar15 = app_conf_try_string(conf,pcVar37,"crlnumber");
                          if (lVar15 == 0) {
                            bn = (BIGNUM *)0x0;
                          }
                          else {
                            bn = (BIGNUM *)load_serial(lVar15,0,0,0);
                            if (bn == (BIGNUM *)0x0) {
                              x_03 = (X509_CRL *)0x0;
                              pBVar17 = (BIO *)0x0;
                              BIO_printf(_bio_err,"error while loading CRL number\n");
                              local_12f8 = (BIGNUM *)0x0;
                              goto LAB_0010281a;
                            }
                          }
                          if ((local_1140 == 0 && local_1138 == 0) && local_1238 == 0) {
                            iVar9 = app_conf_try_number(conf,pcVar37,"default_crl_days",&local_1140)
                            ;
                            if (iVar9 == 0) {
                              local_1140 = 0;
                            }
                            iVar9 = app_conf_try_number(conf,pcVar37,"default_crl_hours",&local_1138
                                                       );
                            if (iVar9 == 0) {
                              local_1138 = 0;
                            }
                          }
                          if ((local_1210 == 0) &&
                             ((local_1140 == 0 && local_1138 == 0) && local_1238 == 0)) {
                            x_03 = (X509_CRL *)0x0;
                            pBVar17 = (BIO *)0x0;
                            BIO_printf(_bio_err,
                                       "cannot lookup how long until the next CRL is issued\n");
                            local_12f8 = bn;
                            goto LAB_0010281a;
                          }
                          if (local_12b4 != 0) {
                            BIO_printf(_bio_err,"making CRL\n");
                          }
                          uVar14 = app_get0_propq();
                          uVar29 = app_get0_libctx();
                          x_03 = (X509_CRL *)X509_CRL_new_ex(uVar29,uVar14);
                          if (x_03 != (X509_CRL *)0x0) {
                            pXVar28 = X509_get_subject_name(local_12c8);
                            iVar9 = X509_CRL_set_issuer_name(x_03,pXVar28);
                            if (iVar9 != 0) {
                              iVar9 = set_crl_lastupdate(x_03,local_11f0);
                              if (iVar9 == 0) {
                                pBVar17 = (BIO *)0x0;
                                BIO_puts(_bio_err,"error setting CRL lastUpdate\n");
                                local_12f8 = bn;
                                goto LAB_0010281a;
                              }
                              iVar9 = set_crl_nextupdate(x_03,local_1210,local_1140,local_1138,
                                                         local_1238);
                              if (iVar9 == 0) {
                                BIO_puts(_bio_err,"error setting CRL nextUpdate\n");
                              }
                              else {
                                uVar13 = 0;
                                for (iVar9 = 0;
                                    iVar7 = OPENSSL_sk_num(*(undefined8 *)
                                                            (*(long *)(lVar18 + 8) + 8)),
                                    iVar9 < iVar7; iVar9 = iVar9 + 1) {
                                  puVar21 = (undefined8 *)
                                            OPENSSL_sk_value(*(undefined8 *)
                                                              (*(long *)(lVar18 + 8) + 8),iVar9);
                                  if (*(char *)*puVar21 == 'R') {
                                    x_02 = X509_REVOKED_new();
                                    if ((x_02 != (X509_REVOKED *)0x0) &&
                                       (iVar7 = make_revoked(x_02,puVar21[2]), iVar7 != 0)) {
                                      if (iVar7 == 2) {
                                        uVar13 = local_1248;
                                      }
                                      iVar7 = BN_hex2bn(&local_1158,(char *)puVar21[3]);
                                      if (iVar7 != 0) {
                                        pAVar32 = BN_to_ASN1_INTEGER(local_1158,(ASN1_INTEGER *)0x0)
                                        ;
                                        BN_free(local_1158);
                                        local_1158 = (BIGNUM *)0x0;
                                        if (pAVar32 != (ASN1_INTEGER *)0x0) {
                                          X509_REVOKED_set_serialNumber(x_02,pAVar32);
                                          ASN1_INTEGER_free(pAVar32);
                                          X509_CRL_add0_revoked(x_03,x_02);
                                          goto LAB_00104bc1;
                                        }
                                      }
                                    }
                                    pBVar17 = (BIO *)0x0;
                                    local_12f8 = bn;
                                    goto LAB_0010281a;
                                  }
LAB_00104bc1:
                                }
                                X509_CRL_sort(x_03);
                                if (local_12b4 != 0) {
                                  BIO_printf(_bio_err,"signing CRL\n");
                                }
                                if (local_1280 == (char *)0x0 && lVar15 == 0) {
                                  if (uVar13 != 0) {
                                    iVar9 = X509_CRL_set_version(x_03,1);
joined_r0x00104d88:
                                    if (iVar9 == 0) goto LAB_00104cef;
                                  }
LAB_00104d8e:
                                  BN_free(bn);
                                  iVar9 = do_X509_CRL_sign(x_03,local_12f0,local_1298,local_12e8);
                                  if (iVar9 == 0) {
LAB_00102c55:
                                    pBVar17 = (BIO *)0x0;
                                  }
                                  else {
                                    pBVar17 = (BIO *)bio_open_default(local_1240,0x77,
                                                                      (-(uint)(uVar11 == 0) & 0x7ffd
                                                                      ) + 4);
                                    if (pBVar17 == (BIO *)0x0) goto LAB_001030fe;
                                    PEM_write_bio_X509_CRL(pBVar17,x_03);
                                    if ((lVar15 == 0) ||
                                       (iVar9 = rotate_serial(lVar15,&_LC145,&_LC146), iVar9 != 0))
                                    goto LAB_00104e16;
                                  }
                                  goto LAB_0010281a;
                                }
                                X509V3_set_ctx(&local_1118,local_12c8,(X509 *)0x0,(X509_REQ *)0x0,
                                               x_03,0);
                                X509V3_set_nconf(&local_1118,conf);
                                if (local_1280 == (char *)0x0) {
LAB_00104f42:
                                  pAVar32 = BN_to_ASN1_INTEGER(bn,(ASN1_INTEGER *)0x0);
                                  if (pAVar32 != (ASN1_INTEGER *)0x0) {
                                    X509_CRL_add1_ext_i2d(x_03,0x58,pAVar32,0,0);
                                    ASN1_INTEGER_free(pAVar32);
                                    iVar9 = BN_add_word(bn,1);
                                    if (iVar9 != 0) goto LAB_00104d57;
                                  }
                                }
                                else {
                                  iVar9 = X509V3_EXT_CRL_add_nconf(conf,&local_1118,local_1280,x_03)
                                  ;
                                  if (iVar9 == 0) {
                                    BIO_printf(_bio_err,
                                               "Error adding CRL extensions from section %s\n",
                                               local_1280);
                                    goto LAB_00104cef;
                                  }
                                  if (lVar15 != 0) goto LAB_00104f42;
LAB_00104d57:
                                  iVar9 = X509_CRL_set_version(x_03,1);
                                  if (iVar9 != 0) {
                                    if (lVar15 != 0) {
                                      iVar9 = save_serial(lVar15,&_LC145,bn,0);
                                      goto joined_r0x00104d88;
                                    }
                                    goto LAB_00104d8e;
                                  }
                                }
                              }
                            }
                          }
LAB_00104cef:
                          pBVar17 = (BIO *)0x0;
                          local_12f8 = bn;
                        }
                        goto LAB_0010281a;
                      }
                      BIO_printf(_bio_err,"error unpacking public key\n");
                    }
LAB_001051fc:
                    X509_REQ_free((X509_REQ *)0x0);
                    X509_free(x_00);
                  }
                  else {
                    BIO_printf(_bio_err,"\n");
                    iVar8 = BN_add_word(local_1158,1);
                    if (iVar8 != 0) {
                      iVar8 = OPENSSL_sk_push(local_12b0,local_1120);
                      uVar33 = (ulong)uVar13;
                      if (iVar8 != 0) goto LAB_0010408e;
                      BIO_printf(_bio_err,"Memory allocation failure\n");
                    }
                  }
                }
              }
LAB_00103f24:
              x_03 = (X509_CRL *)0x0;
              pBVar17 = (BIO *)0x0;
              goto LAB_0010281a;
            }
            BIO_printf(_bio_err,"Memory allocation failure\n");
          }
        }
      }
    }
  }
  else {
    BIO_printf(_bio_err,"message digest is %s\n",local_1298);
    if ((local_1278 != (X509_REQ *)0x0) ||
       (local_1278 = (X509_REQ *)lookup_conf(conf,pcVar37,"policy"), local_1278 != (X509_REQ *)0x0))
    {
      BIO_printf(_bio_err,"policy is %s\n",local_1278);
      goto LAB_00103be7;
    }
  }
LAB_0010351e:
  x_03 = (X509_CRL *)0x0;
  pBVar17 = (BIO *)0x0;
  local_12b0 = (long *)0x0;
  goto LAB_0010281a;
LAB_00104634:
  x_03 = (X509_CRL *)0x0;
  pBVar17 = (BIO *)0x0;
  goto LAB_0010281a;
switchD_00102705_caseD_ffffffff:
  BIO_printf(_bio_err,"%s: Use -help for summary.\n",uVar14);
LAB_001027e5:
  local_12c8 = (X509 *)0x0;
  x_03 = (X509_CRL *)0x0;
  pBVar17 = (BIO *)0x0;
  conf = (CONF *)0x0;
  local_1284 = 0;
  lVar18 = 0;
  local_12b0 = (long *)0x0;
  local_12f0 = (EVP_PKEY *)0x0;
  local_12f8 = (BIGNUM *)0x0;
LAB_0010281a:
  uVar14 = 1;
  ERR_print_errors(_bio_err);
LAB_0010282c:
  BIO_free_all(pBVar17);
  BIO_free_all((BIO *)0x0);
  BIO_free_all((BIO *)0x0);
  OSSL_STACK_OF_X509_free(local_12b0);
  cleanse(local_1148);
  if (local_1284 != 0) {
    CRYPTO_free(local_1148);
  }
LAB_0010287a:
  BN_free(local_1158);
  BN_free(local_12f8);
  free_index(lVar18);
  OPENSSL_sk_free(local_12e8);
  OPENSSL_sk_free(local_12e0);
  EVP_PKEY_free(local_12f0);
  X509_free(local_12c8);
  X509_CRL_free(x_03);
  NCONF_free(conf);
  NCONF_free(extfile_conf);
  release_engine(local_12d8);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar14;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 ca_main_cold(void)

{
  BIO *unaff_RBX;
  X509_CRL *unaff_R14;
  long in_FS_OFFSET;
  EVP_PKEY *in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  char *in_stack_00000028;
  X509 *in_stack_00000030;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  CONF *in_stack_00000058;
  undefined8 in_stack_00000070;
  BIGNUM *in_stack_000001a0;
  void *in_stack_000001b0;
  long in_stack_000012b8;
  
  perror(in_stack_00000028);
  ERR_print_errors(_bio_err);
  BIO_free_all(unaff_RBX);
  BIO_free_all((BIO *)0x0);
  BIO_free_all((BIO *)0x0);
  OSSL_STACK_OF_X509_free(in_stack_00000048);
  cleanse(in_stack_000001b0);
  if (in_stack_00000070._4_4_ != 0) {
    CRYPTO_free(in_stack_000001b0);
  }
  BN_free(in_stack_000001a0);
  BN_free((BIGNUM *)0x0);
  free_index(in_stack_00000050);
  OPENSSL_sk_free(in_stack_00000010);
  OPENSSL_sk_free(in_stack_00000018);
  EVP_PKEY_free(in_stack_00000008);
  X509_free(in_stack_00000030);
  X509_CRL_free(unaff_R14);
  NCONF_free(in_stack_00000058);
  NCONF_free(extfile_conf);
  release_engine(in_stack_00000020);
  if (in_stack_000012b8 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// This is taking way too long.