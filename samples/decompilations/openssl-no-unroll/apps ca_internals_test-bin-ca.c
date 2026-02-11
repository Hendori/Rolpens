
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
  ASN1_TIME *a_01;
  size_t sVar6;
  long lVar7;
  OPENSSL_STRING pcVar8;
  ASN1_OBJECT *a_02;
  char **ppcVar9;
  undefined **ppuVar10;
  long in_FS_OFFSET;
  char *local_80;
  OPENSSL_STRING local_78 [4];
  undefined1 local_58 [8];
  char *pcStack_50;
  char *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78[0] = (char *)0x0;
  local_78[1] = (char *)0x0;
  local_78[2] = (char *)0x0;
  local_78[3] = (char *)0x0;
  _local_58 = (undefined1  [16])0x0;
  a = X509_get_subject_name(param_1);
  pcVar3 = X509_NAME_oneline(a,(char *)0x0,0);
  pcStack_50 = pcVar3;
  ai = (ASN1_INTEGER *)X509_get0_serialNumber(param_1);
  a_00 = ASN1_INTEGER_to_BN(ai,(BIGNUM *)0x0);
  if (a_00 == (BIGNUM *)0x0) goto LAB_0010021a;
  iVar1 = BN_is_zero(a_00);
  if (iVar1 == 0) {
    local_78[3] = BN_bn2hex(a_00);
  }
  else {
    local_78[3] = CRYPTO_strdup("00","apps/ca.c",0x83f);
  }
  BN_free(a_00);
  if (pcStack_50 == (char *)0x0) {
LAB_00100200:
    BIO_printf(_bio_err,"Memory allocation failure\n");
  }
  else {
    if (*pcStack_50 == '\0') {
      CRYPTO_free(pcStack_50);
      pcStack_50 = CRYPTO_strdup(local_78[3],"apps/ca.c",0x846);
      if (pcStack_50 == (char *)0x0) goto LAB_00100200;
    }
    if (local_78[3] == (char *)0x0) goto LAB_00100200;
    ppcVar4 = TXT_DB_get_by_index(*(TXT_DB **)(param_2 + 8),3,local_78);
    if (ppcVar4 == (OPENSSL_STRING *)0x0) {
      BIO_printf(_bio_err,"Adding Entry with serial number %s to DB for %s\n",local_78[3],pcStack_50
                );
      local_78[0] = CRYPTO_strdup("V","apps/ca.c",0x857);
      piVar5 = (int *)X509_get0_notAfter(param_1);
      pcVar3 = (char *)app_malloc((long)(*piVar5 + 1),"row exp_data");
      local_78[1] = pcVar3;
      memcpy(pcVar3,*(void **)(piVar5 + 2),(long)*piVar5);
      local_78[1][*piVar5] = '\0';
      local_78[2] = (char *)0x0;
      local_58 = (undefined1  [8])CRYPTO_strdup("unknown","apps/ca.c",0x85d);
      if ((local_78[0] == (char *)0x0) || (local_58 == (undefined1  [8])0x0)) {
        BIO_printf(_bio_err,"Memory allocation failure\n");
      }
      else {
        ppcVar4 = (OPENSSL_STRING *)app_malloc(0x38,"row ptr");
        if (ppcVar4 == local_78 + 1) {
          local_48 = local_78[0];
          local_78[1] = local_78[0];
          local_78[2] = local_78[0];
          local_78[3] = local_78[0];
          local_58 = (undefined1  [8])local_78[0];
          pcStack_50 = local_78[0];
        }
        else {
          *ppcVar4 = local_78[0];
          ppcVar4[1] = local_78[1];
          ppcVar4[2] = local_78[2];
          ppcVar4[3] = local_78[3];
          ppcVar4[4] = (OPENSSL_STRING)local_58;
          ppcVar4[5] = pcStack_50;
        }
        ppcVar4[6] = (OPENSSL_STRING)0x0;
        iVar1 = TXT_DB_insert(*(TXT_DB **)(param_2 + 8),ppcVar4);
        if (iVar1 != 0) {
          local_78[0] = (char *)0x0;
          local_78[1] = (char *)0x0;
          local_78[2] = (char *)0x0;
          local_78[3] = (char *)0x0;
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
      iVar1 = index_name_cmp(local_78,ppcVar4);
      if (iVar1 == 0) {
        if (param_3 == -1) {
          BIO_printf(_bio_err,"ERROR:Already present, serial number %s\n",local_78[3]);
        }
        else if (**ppcVar4 == 'R') {
          BIO_printf(_bio_err,"ERROR:Already revoked, serial number %s\n",local_78[3]);
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
LAB_001003ea:
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
LAB_0010049b:
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
            ppuVar10 = &crl_reasons;
            if (param_3 == 1) {
              do {
                local_80 = *ppuVar10;
                iVar1 = OPENSSL_strcasecmp();
                if (iVar1 == 0) {
                  if (local_80 != (char *)0x0) {
                    param_4 = (char *)0x0;
                    goto LAB_001003ea;
                  }
                  break;
                }
                ppuVar10 = ppuVar10 + 1;
              } while (ppuVar10 != &PTR__LC2_00107ec0);
              BIO_printf(_bio_err,"Unknown CRL reason %s\n",param_4);
            }
            else {
LAB_001004f0:
              a_01 = X509_gmtime_adj((ASN1_TIME *)0x0,0);
              if (a_01 != (ASN1_TIME *)0x0) {
                lVar7 = (long)(a_01->length + 1);
                pcVar8 = (OPENSSL_STRING)app_malloc(lVar7,"revocation reason");
                OPENSSL_strlcpy(pcVar8,a_01->data,lVar7);
                goto LAB_0010049b;
              }
            }
          }
          else {
            if (1 < param_3 - 3U) goto LAB_001004f0;
            iVar1 = ASN1_GENERALIZEDTIME_set_string((ASN1_GENERALIZEDTIME *)0x0,param_4);
            if (iVar1 != 0) {
              local_80 = "keyTime";
              if (param_3 != 3) {
                local_80 = "CAkeyTime";
              }
              goto LAB_001003ea;
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
  ppcVar9 = local_78;
  do {
    pcVar3 = *ppcVar9;
    ppcVar9 = ppcVar9 + 1;
    CRYPTO_free(pcVar3);
  } while (&local_48 != ppcVar9);
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
                   undefined4 param_10,int param_11,undefined8 param_12,long param_13,ulong param_14
                   ,int param_15,int param_16,X509_REQ *param_17,char *param_18,CONF *param_19,
                   ulong param_20,ulong param_21,int param_22,undefined4 param_23,int param_24,
                   undefined8 param_25)

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
  OPENSSL_STRING apcStack_90 [5];
  OPENSSL_STRING local_68 [5];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_98 = (OPENSSL_STRING)0x0;
  apcStack_90[0] = (OPENSSL_STRING)0x0;
  apcStack_90[1] = (OPENSSL_STRING)0x0;
  apcStack_90[2] = (char *)0x0;
  apcStack_90[3] = (char *)0x0;
  apcStack_90[4] = (char *)0x0;
  if (param_9 == 0) {
LAB_00100844:
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
        if ((iVar3 != 0x30) || ((((byte)param_11 ^ 1) & 1) == 0)) {
          iVar4 = s->type;
          if (iVar3 == 0x30) {
            if (iVar4 != 0x16) {
LAB_00100b86:
              BIO_printf(_bio_err,"\nemailAddress type needs to be of type IA5STRING\n");
              goto LAB_00100b9b;
            }
LAB_00100942:
            iVar3 = ASN1_PRINTABLE_type(s->data,s->length);
            if (iVar3 == 0x14) {
              if (s->type != 0x14) goto LAB_0010096a;
            }
            else if ((iVar3 == 0x16) && (s->type == 0x13)) {
LAB_0010096a:
              BIO_printf(_bio_err,
                         "\nThe string contains characters that are illegal for the ASN.1 type\n");
              goto LAB_00100b9b;
            }
          }
          else {
LAB_001008af:
            if ((iVar4 != 0x1e) && (iVar4 != 0xc)) goto LAB_00100942;
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
                  if (puVar21 == puVar17) goto LAB_00100a80;
                }
                if ((char)uVar1 < '\0') {
                  BIO_printf(_bio_err,"\\0x%02X");
                }
                else {
                  BIO_printf(_bio_err,"^%c",(ulong)((int)(char)uVar1 + 0x40));
                }
                puVar21 = puVar21 + 1;
              } while (puVar21 != puVar17);
            }
LAB_00100a80:
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
            if (param_11 != 1) goto LAB_001008ce;
          }
          else {
            s->type = 0x14;
          }
          goto LAB_00100942;
        }
        if (iVar3 != 0x30) goto LAB_001008af;
        if (iVar4 == 0x13) {
          s->type = 0x16;
          if (param_11 == 1) goto LAB_00100942;
        }
        else if (param_11 == 1) goto LAB_00100b86;
      }
LAB_001008ce:
    }
    local_168 = X509_NAME_new();
    if (local_168 == (X509_NAME *)0x0) {
      BIO_printf(_bio_err,"Memory allocation failure\n");
      goto LAB_00100b9b;
    }
    if (param_24 == 0) {
      xn = X509_get_subject_name(param_3);
      local_160 = X509_NAME_dup(xn);
    }
    else {
      local_160 = X509_NAME_dup(pXVar7);
    }
    if (local_160 == (X509_NAME *)0x0) {
LAB_00100f90:
      x = (X509 *)0x0;
      goto LAB_00100bb0;
    }
    local_148 = (ASN1_STRING *)0x0;
    local_128 = (ASN1_STRING *)0x0;
    for (iVar19 = 0; iVar3 = OPENSSL_sk_num(param_6), iVar19 < iVar3; iVar19 = iVar19 + 1) {
      lVar11 = OPENSSL_sk_value(param_6,iVar19);
      iVar3 = OBJ_txt2nid(*(char **)(lVar11 + 8));
      if (iVar3 == 0) {
        BIO_printf(_bio_err,"%s:unknown object type in \'policy\' configuration\n",
                   *(undefined8 *)(lVar11 + 8));
        goto LAB_00100f90;
      }
      pAVar9 = OBJ_nid2obj(iVar3);
      iVar3 = -1;
LAB_00100d1c:
      iVar4 = X509_NAME_get_index_by_OBJ(pXVar7,pAVar9,iVar3);
      if (-1 < iVar4) {
        ne = X509_NAME_get_entry(pXVar7,iVar4);
        pcVar18 = *(char **)(lVar11 + 0x10);
        iVar5 = strcmp(pcVar18,"optional");
        pXVar8 = ne;
        iVar3 = iVar4;
        if (iVar5 == 0) goto LAB_00100df8;
        iVar4 = strcmp(pcVar18,"supplied");
        if (iVar4 == 0) {
          if (ne != (X509_NAME_ENTRY *)0x0) goto LAB_00100d7b;
          goto LAB_00100e3d;
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
                  goto LAB_00100f90;
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
                  goto LAB_00100f90;
                }
              }
              pXVar8 = X509_NAME_get_entry(local_160,iVar5);
              local_128 = X509_NAME_ENTRY_get_data(ne);
              local_148 = X509_NAME_ENTRY_get_data(pXVar8);
              iVar6 = ASN1_STRING_cmp(local_128,local_148);
              iVar4 = iVar5;
            } while (iVar6 != 0);
            goto LAB_00100df8;
          }
          goto LAB_00101632;
        }
        goto LAB_00100faf;
      }
      if (iVar3 == -1) {
        pcVar18 = *(char **)(lVar11 + 0x10);
        iVar3 = strcmp(pcVar18,"optional");
        if (iVar3 != 0) {
          iVar19 = strcmp(pcVar18,"supplied");
          if (iVar19 == 0) {
LAB_00100e3d:
            x = (X509 *)0x0;
            BIO_printf(_bio_err,"The %s field needed to be supplied and was missing\n",
                       *(undefined8 *)(lVar11 + 8));
            goto LAB_00100bb0;
          }
          iVar19 = strcmp(pcVar18,"match");
          if (iVar19 == 0) {
LAB_00101632:
            BIO_printf(_bio_err,"The mandatory %s field was missing\n",*(undefined8 *)(lVar11 + 8));
          }
          else {
LAB_00100faf:
            BIO_printf(_bio_err,"%s:invalid type in \'policy\' configuration\n",pcVar18);
          }
          goto LAB_00100f90;
        }
      }
    }
    if (preserve != 0) {
      X509_NAME_free(local_168);
      local_168 = X509_NAME_dup(pXVar7);
      if (local_168 == (X509_NAME *)0x0) goto LAB_00100f90;
    }
    if (param_16 != 0) {
      BIO_printf(_bio_err,"Everything appears to be ok, creating and signing the certificate\n");
    }
    uVar20 = app_get0_propq();
    uVar12 = app_get0_libctx();
    x = (X509 *)X509_new_ex(uVar12,uVar20);
    if (x == (X509 *)0x0) goto LAB_00100bb0;
    pAVar13 = X509_get_serialNumber(x);
    pAVar13 = BN_to_ASN1_INTEGER(param_8,pAVar13);
    if (pAVar13 == (ASN1_INTEGER *)0x0) {
LAB_0010161c:
      value = &local_98;
      ppcVar15 = (OPENSSL_STRING *)0x0;
      uVar20 = 0xffffffff;
    }
    else {
      if (param_24 == 0) {
        pXVar7 = X509_get_subject_name(param_3);
        iVar19 = X509_set_issuer_name(x,pXVar7);
        if (iVar19 != 0) goto LAB_00101079;
        goto LAB_0010161c;
      }
      iVar19 = X509_set_issuer_name(x,local_168);
      if (iVar19 == 0) goto LAB_0010161c;
LAB_00101079:
      iVar19 = set_cert_times(x,param_12,param_13,param_14 & 0xffffffff,0);
      if (iVar19 == 0) goto LAB_0010161c;
      if (param_13 != 0) {
        X509_get0_notAfter(x);
        iVar19 = ASN1_TIME_diff(&local_d8,0,0);
        if (iVar19 == 0) goto LAB_0010161c;
        param_14 = (ulong)local_d8.flags;
      }
      iVar19 = X509_set_subject_name(x,local_168);
      if (iVar19 == 0) goto LAB_0010161c;
      pEVar14 = (EVP_PKEY *)X509_REQ_get0_pubkey(param_17);
      iVar19 = X509_set_pubkey(x,pEVar14);
      if (iVar19 == 0) goto LAB_0010161c;
      if (param_24 == 0) {
        X509V3_set_ctx(&local_d8,param_3,x,(X509_REQ *)0x0,(X509_CRL *)0x0,2);
      }
      else {
        X509V3_set_ctx(&local_d8,x,x,(X509_REQ *)0x0,(X509_CRL *)0x0,2);
        iVar19 = X509V3_set_issuer_pkey(&local_d8,param_2);
        if (iVar19 == 0) goto LAB_0010161c;
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
LAB_001011c6:
              iVar19 = copy_extensions(x,param_17,param_23);
              if (iVar19 != 0) goto LAB_001011e2;
            }
            else {
LAB_00101ac9:
              BIO_printf(_bio_err,pcVar18);
              iVar19 = copy_extensions(x,param_17,param_23);
              if (iVar19 != 0) goto LAB_001019fb;
            }
            goto LAB_00101af3;
          }
          BIO_printf(_bio_err,"Error adding certificate extensions from config section %s\n",
                     param_18);
        }
        else {
          if (param_16 == 0) {
            X509V3_set_nconf(&local_d8,extfile_conf);
            iVar19 = X509V3_EXT_add_nconf(extfile_conf,&local_d8,param_18,x);
            if (iVar19 != 0) goto LAB_001011c6;
          }
          else {
            BIO_printf(_bio_err,"Extra configuration file found\n");
            X509V3_set_nconf(&local_d8,extfile_conf);
            iVar19 = X509V3_EXT_add_nconf(extfile_conf,&local_d8,param_18,x);
            pcVar18 = "Successfully added extensions from file.\n";
            if (iVar19 != 0) goto LAB_00101ac9;
          }
          BIO_printf(_bio_err,"Error adding certificate extensions from extfile section %s\n",
                     param_18);
        }
        goto LAB_0010161c;
      }
      iVar19 = copy_extensions(x,param_17,param_23);
      if (iVar19 == 0) {
LAB_00101af3:
        pcVar18 = "ERROR: adding extensions from request\n";
LAB_00101657:
        BIO_printf(_bio_err,pcVar18);
        goto LAB_0010161c;
      }
      if (param_16 != 0) {
LAB_001019fb:
        BIO_printf(_bio_err,"The subject name appears to be ok, checking database for clashes\n");
      }
LAB_001011e2:
      if (param_11 == 0) {
        iVar19 = -1;
        pXVar7 = X509_NAME_dup(local_168);
        if (pXVar7 == (X509_NAME *)0x0) {
          pcVar18 = "Memory allocation failure\n";
          goto LAB_00101657;
        }
        while (iVar3 = X509_NAME_get_index_by_NID(pXVar7,0x30,iVar19), -1 < iVar3) {
          iVar19 = iVar3 + -1;
          pXVar8 = X509_NAME_delete_entry(pXVar7,iVar3);
          X509_NAME_ENTRY_free(pXVar8);
        }
        iVar19 = X509_set_subject_name(x,pXVar7);
        if (iVar19 == 0) {
          X509_NAME_free(pXVar7);
          goto LAB_0010161c;
        }
        X509_NAME_free(pXVar7);
      }
      pXVar7 = X509_get_subject_name(x);
      apcStack_90[4] = X509_NAME_oneline(pXVar7,(char *)0x0,0);
      if (apcStack_90[4] == (char *)0x0) {
        BIO_printf(_bio_err,"Memory allocation failure\n");
        goto LAB_0010161c;
      }
      iVar19 = BN_is_zero(param_8);
      if (iVar19 == 0) {
        apcStack_90[2] = BN_bn2hex(param_8);
      }
      else {
        apcStack_90[2] = CRYPTO_strdup("00","apps/ca.c",0x6f8);
      }
      if (apcStack_90[2] == (char *)0x0) {
LAB_0010182e:
        BIO_printf(_bio_err,"Memory allocation failure\n");
        goto LAB_0010161c;
      }
      if (*apcStack_90[4] == '\0') {
        CRYPTO_free(apcStack_90[4]);
        apcStack_90[4] = CRYPTO_strdup(apcStack_90[2],"apps/ca.c",0x707);
        if (apcStack_90[4] == (char *)0x0) goto LAB_0010182e;
      }
      value = &local_98;
      db = *(TXT_DB **)(param_7 + 2);
      if (*param_7 != 0) {
        ppcVar15 = TXT_DB_get_by_index(db,5,value);
        if (ppcVar15 == (OPENSSL_STRING *)0x0) {
          db = *(TXT_DB **)(param_7 + 2);
          goto LAB_00101300;
        }
        BIO_printf(_bio_err,"ERROR:There is already a certificate for %s\n",apcStack_90[4]);
LAB_0010170a:
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
        goto LAB_0010161c;
      }
LAB_00101300:
      ppcVar15 = TXT_DB_get_by_index(db,3,value);
      if (ppcVar15 != (OPENSSL_STRING *)0x0) {
        BIO_printf(_bio_err,"ERROR:Serial number %s has already been issued,\n",apcStack_90[2]);
        BIO_printf(_bio_err,"      check the database/serial_file for corruption\n");
        goto LAB_0010170a;
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
LAB_001013f3:
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
          apcStack_90[0] = (OPENSSL_STRING)__dest;
          memcpy(__dest,*(void **)(piVar16 + 2),(long)*piVar16);
          *(undefined1 *)((long)apcStack_90[0] + (long)*piVar16) = 0;
          apcStack_90[1] = (OPENSSL_STRING)0x0;
          apcStack_90[3] = CRYPTO_strdup("unknown","apps/ca.c",0x778);
          if (((local_98 != (OPENSSL_STRING)0x0) && (apcStack_90[3] != (char *)0x0)) &&
             (apcStack_90[4] != (char *)0x0)) {
            ppcVar15 = (OPENSSL_STRING *)app_malloc(0x38,"row space");
            lVar11 = 0;
            if (ppcVar15 == apcStack_90) {
              do {
                *(undefined8 *)((long)apcStack_90 + lVar11) = *(undefined8 *)(lVar11 + (long)value);
                lVar11 = lVar11 + 8;
              } while (lVar11 != 0x30);
            }
            else {
              do {
                uVar20 = *(undefined8 *)((long)apcStack_90 + lVar11);
                *(undefined8 *)((long)ppcVar15 + lVar11) = *(undefined8 *)(lVar11 + (long)value);
                ((undefined8 *)((long)ppcVar15 + lVar11))[1] = uVar20;
                lVar11 = lVar11 + 0x10;
              } while (lVar11 != 0x30);
            }
            ppcVar15[6] = (OPENSSL_STRING)0x0;
            iVar19 = TXT_DB_insert(*(TXT_DB **)(param_7 + 2),ppcVar15);
            if (iVar19 != 0) {
              uVar20 = 1;
              CRYPTO_free((void *)0x0);
              X509_NAME_free(local_160);
              X509_NAME_free(local_168);
              *param_1 = x;
              goto LAB_00100c15;
            }
            uVar20 = 0xffffffff;
            BIO_printf(_bio_err,"failed to update database\n");
            BIO_printf(_bio_err,"TXT_DB error number %ld\n",
                       *(undefined8 *)(*(long *)(param_7 + 2) + 0x20));
            goto LAB_00100bd0;
          }
          BIO_printf(_bio_err,"Memory allocation failure\n");
        }
        goto LAB_0010161c;
      }
      BIO_printf(_bio_err,"Sign the certificate? [y/n]:");
      BIO_ctrl(_bio_err,0xb,0,(void *)0x0);
      local_68[0]._0_1_ = 0;
      pcVar18 = fgets((char *)local_68,0x19,_stdin);
      if (pcVar18 == (char *)0x0) {
        BIO_printf(_bio_err,"CERTIFICATE WILL NOT BE CERTIFIED: I/O error\n");
      }
      else {
        if (((byte)local_68[0] & 0xdf) == 0x59) goto LAB_001013f3;
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
      goto LAB_00100844;
    }
LAB_00100b9b:
    local_168 = (X509_NAME *)0x0;
    x = (X509 *)0x0;
    local_160 = (X509_NAME *)0x0;
LAB_00100bb0:
    ppcVar15 = (OPENSSL_STRING *)0x0;
    uVar20 = 0xffffffff;
    value = &local_98;
  }
LAB_00100bd0:
  do {
    ptr = *value;
    value = value + 1;
    CRYPTO_free(ptr);
  } while (value != local_68);
  CRYPTO_free(ppcVar15);
  X509_NAME_free(local_160);
  X509_NAME_free(local_168);
  X509_free(x);
LAB_00100c15:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar20;
LAB_00100df8:
  if (pXVar8 != (X509_NAME_ENTRY *)0x0) {
LAB_00100d7b:
    iVar4 = X509_NAME_add_entry(local_168,pXVar8,-1,0);
    if (iVar4 == 0) {
      BIO_printf(_bio_err,"Memory allocation failure\n");
      goto LAB_00100f90;
    }
  }
  goto LAB_00100d1c;
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
          goto LAB_00101cf9;
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
      goto LAB_00101cf9;
    }
    BIO_printf(_bio_err,"Error unpacking public key\n");
  }
  uVar2 = 0xffffffff;
LAB_00101cf9:
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
LAB_001021f9:
    BIO_printf(_bio_err,"memory allocation failure\n");
  }
  else {
    pcVar2 = strchr(__s,0x2c);
    if (pcVar2 == (char *)0x0) {
      pcVar3 = (char *)0x0;
      pcVar2 = (char *)0x0;
      if (param_1 != (undefined8 *)0x0) goto LAB_00101fac;
LAB_001020b4:
      s_00 = (ASN1_GENERALIZEDTIME *)0x0;
      uVar5 = 0xffffffff;
LAB_00102080:
      if (param_2 != (undefined4 *)0x0) {
        *param_2 = (int)uVar5;
      }
      uVar4 = 1;
      if (param_4 != (undefined8 *)0x0) {
        *param_4 = s_00;
        s_00 = (ASN1_GENERALIZEDTIME *)0x0;
      }
      goto LAB_00102027;
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
LAB_00101fac:
      s = ASN1_UTCTIME_new();
      *param_1 = s;
      if (s == (ASN1_UTCTIME *)0x0) {
        uVar4 = 0;
        BIO_printf(_bio_err,"memory allocation failure\n");
        s_00 = (ASN1_GENERALIZEDTIME *)0x0;
        goto LAB_00102027;
      }
      iVar1 = ASN1_UTCTIME_set_string(s,__s);
      if (iVar1 == 0) {
        BIO_printf(_bio_err,"invalid revocation date %s\n",__s);
        goto LAB_00102022;
      }
      if (pcVar2 == (char *)0x0) goto LAB_001020b4;
    }
    uVar5 = 0;
    do {
      iVar1 = OPENSSL_strcasecmp(pcVar2);
      if (iVar1 == 0) {
        if (uVar5 == 7) {
          s_00 = (ASN1_GENERALIZEDTIME *)0x0;
          uVar5 = 8;
          goto LAB_00102080;
        }
        if (uVar5 != 8) {
          s_00 = (ASN1_GENERALIZEDTIME *)0x0;
          if (1 < (int)uVar5 - 9U) goto LAB_00102080;
          if (pcVar3 == (char *)0x0) {
            BIO_printf(_bio_err,"missing compromised time\n");
            goto LAB_00102022;
          }
          s_00 = ASN1_GENERALIZEDTIME_new();
          if (s_00 == (ASN1_GENERALIZEDTIME *)0x0) goto LAB_001021f9;
          iVar1 = ASN1_GENERALIZEDTIME_set_string(s_00,pcVar3);
          if (iVar1 != 0) {
            uVar5 = (ulong)((uVar5 != 9) + 1);
            goto LAB_00102080;
          }
          BIO_printf(_bio_err,"invalid compromised time %s\n",pcVar3);
          uVar4 = 0;
          goto LAB_00102027;
        }
        if (pcVar3 == (char *)0x0) {
          BIO_printf(_bio_err,"missing hold instruction\n");
          goto LAB_00102022;
        }
        a = OBJ_txt2obj(pcVar3,0);
        if (a == (ASN1_OBJECT *)0x0) {
          BIO_printf(_bio_err,"invalid object identifier %s\n",pcVar3);
          goto LAB_00102022;
        }
        if (param_3 == (undefined8 *)0x0) {
          ASN1_OBJECT_free(a);
        }
        else {
          *param_3 = a;
        }
        s_00 = (ASN1_GENERALIZEDTIME *)0x0;
        uVar5 = 6;
        goto LAB_00102080;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 != 0xb);
    BIO_printf(_bio_err,"invalid reason code %s\n",pcVar2);
  }
LAB_00102022:
  s_00 = (ASN1_GENERALIZEDTIME *)0x0;
  uVar4 = 0;
LAB_00102027:
  CRYPTO_free(__s);
  ASN1_GENERALIZEDTIME_free(s_00);
  return uVar4;
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
  ASN1_OBJECT *a;
  ASN1_GENERALIZEDTIME *a_00;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined8 uVar15;
  long lVar16;
  CONF *conf;
  char *pcVar17;
  BIO *pBVar18;
  long lVar19;
  char *pcVar20;
  byte *pbVar21;
  undefined8 *puVar22;
  ushort **ppuVar23;
  X509 *x509;
  size_t sVar24;
  undefined1 *__dest;
  OPENSSL_STRING *ppcVar25;
  long lVar26;
  stack_st_CONF_VALUE *psVar27;
  lhash_st_CONF_VALUE *conf_00;
  stack_st_CONF_VALUE *psVar28;
  X509_NAME *pXVar29;
  NETSCAPE_SPKI *x;
  EVP_PKEY *r;
  X509 *x_00;
  X509_REQ *a_01;
  undefined8 uVar30;
  char *pcVar31;
  BIO *bp;
  X509 *pXVar32;
  ASN1_STRING *x_01;
  BIGNUM *bn;
  X509_REVOKED *r_00;
  ASN1_ENUMERATED *a_02;
  ASN1_INTEGER *pAVar33;
  ulong uVar34;
  long *plVar35;
  byte *pbVar36;
  long lVar37;
  X509_CRL *x_02;
  char *pcVar38;
  OPENSSL_STRING *value;
  long in_FS_OFFSET;
  bool bVar39;
  BIGNUM *local_1318;
  EVP_PKEY *local_1310;
  long local_1308;
  long local_1300;
  undefined8 local_12f8;
  long local_12e8;
  int local_12dc;
  long *local_12d8;
  char *local_12c8;
  long *local_12c0;
  long local_12b8;
  int local_12b0;
  int local_12ac;
  char *local_12a8;
  X509_REQ *local_12a0;
  long local_1298;
  char *local_1280;
  char *local_1278;
  undefined8 local_1270;
  uint local_1268;
  int local_1264;
  long local_1260;
  long local_1258;
  long local_1248;
  long local_1240;
  uint local_1238;
  long local_1230;
  long local_1220;
  undefined8 local_1218;
  undefined8 local_1210;
  undefined8 local_1208;
  int local_11fc;
  undefined4 local_1180;
  undefined4 local_117c;
  undefined4 local_1178;
  undefined4 local_1174;
  undefined4 local_1170;
  int local_116c;
  BIGNUM *local_1168;
  undefined8 local_1160;
  long *local_1158;
  long local_1150;
  long local_1148;
  long local_1140;
  undefined8 local_1138;
  X509 *local_1130;
  ASN1_OBJECT *local_1128;
  ASN1_GENERALIZEDTIME *local_1120;
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
  
  lVar19 = _default_config_file;
  pcVar20 = (char *)0x0;
  pcVar38 = (char *)0x0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_1098 = (undefined1  [16])0x0;
  local_10a8[5] = 0;
  uStack_10a2 = 0;
  local_1168 = (BIGNUM *)0x0;
  local_117c = 0;
  local_1178 = 0;
  local_1160 = 0;
  local_1158 = (long *)0x0;
  uStack_109c = 0;
  local_1174 = 0;
  local_1170 = 0;
  local_1150 = 0;
  local_1148 = 0;
  local_1140 = 0;
  local_1138 = 0;
  local_1130 = (X509 *)0x0;
  local_1088 = (undefined1  [16])0x0;
  local_1078 = (undefined1  [16])0x0;
  local_1068 = (undefined1  [16])0x0;
  local_1058 = (undefined1  [16])0x0;
  uVar15 = opt_init(param_1,param_2,ca_options);
  local_12b0 = 0;
  local_11fc = 0;
  iVar9 = 0x1001;
  local_1258 = 0;
  local_1230 = 0;
  local_1208 = 0;
  local_1264 = 0;
  local_1238 = 0;
  local_1268 = 0;
  local_12dc = 0;
  uVar14 = 0;
  bVar39 = true;
  bVar5 = false;
  bVar4 = false;
  uVar13 = 0;
  uVar6 = 0;
  local_12b8 = 0;
  local_1298 = 0;
  local_1270 = 0;
  local_1318 = (BIGNUM *)0x0;
  local_1210 = 0;
  local_1260 = 0;
  local_1278 = (char *)0x0;
  local_1218 = 0;
  local_1240 = 0;
  local_12c8 = (char *)0x0;
  local_1248 = 0;
  local_1280 = (char *)0x0;
  local_12e8 = 0;
  local_12a8 = (char *)0x0;
  local_1310 = (EVP_PKEY *)0x0;
  local_12a0 = (X509_REQ *)0x0;
  local_12c0 = (long *)0x0;
  local_1300 = 0;
  local_1308 = 0;
  local_12f8 = 0;
switchD_00102506_caseD_0:
  while( true ) {
    while( true ) {
      iVar7 = opt_next();
      if (iVar7 == 0) goto LAB_00102c00;
      if (0x35 < iVar7) break;
      if (-2 < iVar7) goto code_r0x001024fe;
    }
    if (iVar7 < 0x645) break;
    if (iVar7 - 0x646U < 4) {
      local_1210 = opt_arg();
      local_11fc = iVar7 + -0x645;
    }
  }
  if (iVar7 < 0x641) {
    if (1 < iVar7 - 0x5ddU) goto switchD_00102506_caseD_0;
    iVar7 = opt_rand(iVar7);
  }
  else {
    iVar7 = opt_provider(iVar7);
  }
  if (iVar7 == 0) {
    local_12ac = 0;
    goto LAB_00102a0d;
  }
  goto switchD_00102506_caseD_0;
code_r0x001024fe:
  switch(iVar7) {
  default:
    goto switchD_00102506_caseD_0;
  case 1:
    x509 = (X509 *)0x0;
    conf = (CONF *)0x0;
    x_02 = (X509_CRL *)0x0;
    opt_help();
    uVar15 = 0;
    lVar19 = 0;
    BIO_free_all((BIO *)0x0);
    BIO_free_all((BIO *)0x0);
    BIO_free_all((BIO *)0x0);
    OSSL_STACK_OF_X509_free(0);
    cleanse(local_1158);
    local_1318 = (BIGNUM *)0x0;
    local_1310 = (EVP_PKEY *)0x0;
    goto LAB_00102664;
  case 2:
    uVar30 = opt_arg();
    local_12f8 = setup_engine_methods(uVar30,0xffffffff,0);
    goto switchD_00102506_caseD_0;
  case 3:
    local_12dc = 1;
    goto switchD_00102506_caseD_0;
  case 4:
    lVar19 = opt_arg();
    goto switchD_00102506_caseD_0;
  case 5:
    pcVar38 = (char *)opt_arg();
    goto switchD_00102506_caseD_0;
  case 6:
    local_1270 = opt_arg();
    goto switchD_00102506_caseD_0;
  case 7:
    iVar9 = 0x1000;
    goto switchD_00102506_caseD_0;
  case 8:
    uVar6 = 1;
    goto switchD_00102506_caseD_0;
  case 10:
  case 0x28:
    local_1298 = opt_arg();
    goto switchD_00102506_caseD_0;
  case 0xb:
  case 0x29:
    local_12b8 = opt_arg();
    goto switchD_00102506_caseD_0;
  case 0xc:
    pcVar17 = (char *)opt_arg();
    lVar16 = strtol(pcVar17,(char **)0x0,10);
    local_1140 = (long)(int)lVar16;
    goto switchD_00102506_caseD_0;
  case 0xd:
    local_12c0 = (long *)opt_arg();
    goto switchD_00102506_caseD_0;
  case 0xe:
    local_12a0 = (X509_REQ *)opt_arg();
    goto switchD_00102506_caseD_0;
  case 0xf:
    local_1310 = (EVP_PKEY *)opt_arg();
    goto switchD_00102506_caseD_0;
  case 0x10:
    uVar30 = opt_arg();
    iVar7 = opt_format(uVar30,0xffe,&local_1170);
    break;
  case 0x11:
    local_1218 = opt_arg();
    goto switchD_00102506_caseD_0;
  case 0x12:
    local_1158 = (long *)opt_arg();
    goto switchD_00102506_caseD_0;
  case 0x13:
    pcVar20 = (char *)opt_arg();
    goto switchD_00102506_caseD_0;
  case 0x14:
    uVar30 = opt_arg();
    iVar7 = opt_format(uVar30,0xffe,&local_117c);
    break;
  case 0x15:
    local_1264 = 1;
    goto switchD_00102506_caseD_0;
  case 0x16:
    local_12e8 = opt_arg();
    uVar14 = 1;
    goto switchD_00102506_caseD_0;
  case 0x17:
    uVar30 = opt_arg();
    iVar7 = opt_format(uVar30,6,&local_1178);
    break;
  case 0x18:
    local_1260 = opt_arg();
    goto switchD_00102506_caseD_0;
  case 0x19:
    opt_arg();
    iVar7 = set_dateopt(&local_1160);
    break;
  case 0x1a:
    local_1278 = (char *)opt_arg();
    goto switchD_00102506_caseD_0;
  case 0x1b:
    if ((local_1300 == 0) && (local_1300 = OPENSSL_sk_new_null(), local_1300 == 0)) {
LAB_00102da7:
      local_12d8 = (long *)0x0;
      x509 = (X509 *)0x0;
      x_02 = (X509_CRL *)0x0;
      pBVar18 = (BIO *)0x0;
      local_1310 = (EVP_PKEY *)0x0;
      lVar19 = 0;
      conf = (CONF *)0x0;
      local_1318 = (BIGNUM *)0x0;
      local_12ac = 0;
      goto LAB_00102604;
    }
    opt_arg();
    iVar7 = OPENSSL_sk_push(local_1300);
    if (iVar7 != 0) goto switchD_00102506_caseD_0;
    local_12ac = 0;
    goto LAB_00102a0d;
  case 0x1c:
    if ((local_1308 == 0) && (local_1308 = OPENSSL_sk_new_null(), local_1308 == 0))
    goto LAB_00102da7;
    opt_arg();
    local_12ac = OPENSSL_sk_push(local_1308);
    if (local_12ac != 0) goto switchD_00102506_caseD_0;
LAB_00102a0d:
    x509 = (X509 *)0x0;
    local_1318 = (BIGNUM *)0x0;
    x_02 = (X509_CRL *)0x0;
    lVar19 = 0;
    conf = (CONF *)0x0;
    local_12d8 = (long *)0x0;
    local_1310 = (EVP_PKEY *)0x0;
    goto LAB_00102a2f;
  case 0x1d:
    bVar5 = true;
    goto switchD_00102506_caseD_0;
  case 0x1e:
    uVar13 = 1;
    goto switchD_00102506_caseD_0;
  case 0x1f:
    preserve = 1;
    goto switchD_00102506_caseD_0;
  case 0x20:
    bVar39 = false;
    goto switchD_00102506_caseD_0;
  case 0x21:
    local_1268 = 1;
    goto switchD_00102506_caseD_0;
  case 0x22:
    msie_hack = 1;
    goto switchD_00102506_caseD_0;
  case 0x23:
    local_1208 = opt_arg();
    goto switchD_00102506_caseD_0;
  case 0x24:
    local_1230 = opt_arg();
    goto switchD_00102506_caseD_0;
  case 0x25:
    pcVar17 = (char *)opt_arg();
    local_1150 = strtol(pcVar17,(char **)0x0,10);
    goto switchD_00102506_caseD_0;
  case 0x26:
    pcVar17 = (char *)opt_arg();
    local_1148 = strtol(pcVar17,(char **)0x0,10);
    goto switchD_00102506_caseD_0;
  case 0x27:
    pcVar17 = (char *)opt_arg();
    local_1258 = strtol(pcVar17,(char **)0x0,10);
    goto switchD_00102506_caseD_0;
  case 0x2a:
    uVar14 = 1;
LAB_00102c00:
    iVar7 = opt_num_rest();
    lVar16 = opt_rest();
    conf = (CONF *)app_load_config_verbose(lVar19,1);
    if (conf == (CONF *)0x0) goto LAB_001025d5;
    if ((_default_config_file != lVar19) && (iVar8 = app_load_modules(conf), iVar8 == 0)) {
LAB_00102ca1:
      local_12ac = 0;
      x509 = (X509 *)0x0;
      x_02 = (X509_CRL *)0x0;
      lVar19 = 0;
      local_12d8 = (long *)0x0;
      pBVar18 = (BIO *)0x0;
      local_1310 = (EVP_PKEY *)0x0;
      local_1318 = (BIGNUM *)0x0;
      goto LAB_00102604;
    }
    if ((pcVar38 == (char *)0x0) &&
       (pcVar38 = NCONF_get_string(conf,"ca","default_ca"), pcVar38 == (char *)0x0)) {
      x509 = (X509 *)0x0;
      x_02 = (X509_CRL *)0x0;
      lVar19 = 0;
      BIO_printf(_bio_err,"variable lookup failed for %s::%s\n",&_LC100,"default_ca");
      local_1318 = (BIGNUM *)0x0;
      local_12d8 = (long *)0x0;
      local_1310 = (EVP_PKEY *)0x0;
      local_12ac = 0;
      pBVar18 = (BIO *)0x0;
      goto LAB_00102604;
    }
    pcVar17 = (char *)app_conf_try_string(conf,0,"oid_file");
    if (pcVar17 != (char *)0x0) {
      pBVar18 = BIO_new_file(pcVar17,"r");
      if (pBVar18 == (BIO *)0x0) {
        ERR_clear_error();
      }
      else {
        OBJ_create_objects(pBVar18);
        BIO_free(pBVar18);
      }
    }
    iVar8 = add_oid_section(conf);
    if (iVar8 == 0) goto LAB_00102ca1;
    app_RAND_load_conf(conf,&_LC100);
    iVar8 = app_RAND_load();
    if (iVar8 == 0) goto LAB_00102ca1;
    pcVar17 = (char *)app_conf_try_string(conf,pcVar38,"string_mask");
    if ((pcVar17 != (char *)0x0) && (iVar8 = ASN1_STRING_set_default_mask_asc(pcVar17), iVar8 == 0))
    {
      BIO_printf(_bio_err,"Invalid global string mask setting %s\n",pcVar17);
      goto LAB_00102ca1;
    }
    if ((iVar9 == 0x1000) ||
       ((pcVar17 = (char *)app_conf_try_string(conf,pcVar38,&_LC105), pcVar17 != (char *)0x0 &&
        (iVar8 = strcmp(pcVar17,"yes"), iVar8 == 0)))) {
      iVar9 = 0x1000;
    }
    local_1180 = 1;
    lVar19 = app_conf_try_string(conf,pcVar38,"unique_subject");
    if (lVar19 != 0) {
      local_1180 = parse_yesno(lVar19,1);
    }
    if (local_1318 != (BIGNUM *)0x0) {
      pcVar20 = NCONF_get_string(conf,pcVar38,"database");
      if (pcVar20 == (char *)0x0) {
        BIO_printf(_bio_err,"variable lookup failed for %s::%s\n",pcVar38,"database");
        goto LAB_00102ca1;
      }
      lVar19 = load_index(pcVar20,&local_1180);
      if (lVar19 == 0) {
        BIO_printf(_bio_err,"Problem with index file: %s (could not load/parse file)\n",pcVar20);
        goto LAB_00102ca1;
      }
      iVar9 = index_index(lVar19);
      if (iVar9 < 1) goto LAB_00102e9e;
      sVar24 = strlen((char *)local_1318);
      local_10d8 = (undefined1  [16])0x0;
      local_10c8 = (undefined1  [16])0x0;
      local_10b8 = (undefined1  [16])0x0;
      __dest = (undefined1 *)app_malloc(sVar24 + 2,"row serial#");
      local_10c8._8_8_ = __dest;
      if ((sVar24 & 1) == 0) {
        memcpy(__dest,local_1318,sVar24);
        *(undefined1 *)(local_10c8._8_8_ + sVar24) = 0;
      }
      else {
        *__dest = 0x30;
        memcpy(__dest + 1,local_1318,sVar24);
        *(undefined1 *)(local_10c8._8_8_ + 1 + sVar24) = 0;
      }
      value = (OPENSSL_STRING *)local_10d8;
      make_uppercase(local_10c8._8_8_);
      ppcVar25 = TXT_DB_get_by_index(*(TXT_DB **)(lVar19 + 8),3,value);
      if (ppcVar25 == (OPENSSL_STRING *)0x0) {
        BIO_printf(_bio_err,"Serial %s not present in db.\n",local_10c8._8_8_);
LAB_00103497:
        iVar9 = -1;
      }
      else {
        cVar2 = **ppcVar25;
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
            goto LAB_00103497;
          }
          BIO_printf(_bio_err,"%s=Suspended (%c)\n",local_10c8._8_8_,0x53);
        }
        iVar9 = 1;
      }
      do {
        ptr = *value;
        value = value + 1;
        CRYPTO_free(ptr);
      } while (value != (OPENSSL_STRING *)local_10a8);
      if (iVar9 != 1) {
        BIO_printf(_bio_err,"Error verifying serial %s!\n",local_1318);
      }
LAB_00102e9e:
      local_12ac = 0;
      x509 = (X509 *)0x0;
      x_02 = (X509_CRL *)0x0;
      pBVar18 = (BIO *)0x0;
      local_12d8 = (long *)0x0;
      local_1310 = (EVP_PKEY *)0x0;
LAB_00102ebf:
      local_1318 = (BIGNUM *)0x0;
      goto LAB_00102604;
    }
    if ((local_1310 == (EVP_PKEY *)0x0) &&
       (local_1310 = (EVP_PKEY *)NCONF_get_string(conf,pcVar38,"private_key"),
       local_1310 == (EVP_PKEY *)0x0)) {
      x509 = (X509 *)0x0;
      x_02 = (X509_CRL *)0x0;
      lVar19 = 0;
      pBVar18 = (BIO *)0x0;
      BIO_printf(_bio_err,"variable lookup failed for %s::%s\n",pcVar38,"private_key");
      local_12d8 = (long *)0x0;
      local_12ac = 0;
      local_1310 = (EVP_PKEY *)0x0;
      goto LAB_00102604;
    }
    local_12ac = 0;
    local_12d8 = local_1158;
    if (local_1158 == (long *)0x0) {
      iVar8 = app_passwd(local_1218,0,&local_1158,0);
      if (iVar8 == 0) {
        x509 = (X509 *)0x0;
        x_02 = (X509_CRL *)0x0;
        lVar19 = 0;
        pBVar18 = (BIO *)0x0;
        BIO_printf(_bio_err,"Error getting password\n");
        local_1318 = (BIGNUM *)0x0;
        local_1310 = (EVP_PKEY *)0x0;
        local_12ac = 1;
        goto LAB_00102604;
      }
      local_12ac = 1;
    }
    local_1310 = (EVP_PKEY *)
                 load_key(local_1310,local_1170,0,local_1158,local_12f8,"CA private key");
    cleanse(local_1158);
    if (local_1310 == (EVP_PKEY *)0x0) {
      x509 = (X509 *)0x0;
LAB_00103354:
      local_12d8 = (long *)0x0;
      x_02 = (X509_CRL *)0x0;
      lVar19 = 0;
      pBVar18 = (BIO *)0x0;
      local_1318 = (BIGNUM *)0x0;
      goto LAB_00102604;
    }
    if ((((local_1264 == 0) || (local_1280 != (char *)0x0)) || (local_1248 != 0)) ||
       (x509 = (X509 *)0x0, local_1268 != 0)) {
      if ((pcVar20 == (char *)0x0) &&
         (pcVar20 = NCONF_get_string(conf,pcVar38,"certificate"), pcVar20 == (char *)0x0)) {
        x509 = (X509 *)0x0;
        x_02 = (X509_CRL *)0x0;
        pBVar18 = (BIO *)0x0;
        BIO_printf(_bio_err,"variable lookup failed for %s::%s\n",pcVar38,"certificate");
        local_12d8 = (long *)0x0;
        local_1318 = (BIGNUM *)0x0;
        lVar19 = 0;
        goto LAB_00102604;
      }
      x509 = (X509 *)load_cert_pass(pcVar20,local_117c,1,local_1158);
      if (x509 == (X509 *)0x0) goto LAB_00103354;
      iVar8 = X509_check_private_key(x509,local_1310);
      if (iVar8 == 0) {
        x_02 = (X509_CRL *)0x0;
        lVar19 = 0;
        pBVar18 = (BIO *)0x0;
        BIO_printf(_bio_err,"CA certificate and CA private key do not match\n");
        local_12d8 = (long *)0x0;
        goto LAB_00102604;
      }
    }
    pXVar32 = (X509 *)0x0;
    if (local_1264 == 0) {
      pXVar32 = x509;
    }
    pbVar21 = (byte *)app_conf_try_string(conf,&_LC100,"preserve");
    if ((pbVar21 != (byte *)0x0) && ((*pbVar21 & 0xdf) == 0x59)) {
      preserve = 1;
    }
    pbVar21 = (byte *)app_conf_try_string(conf,&_LC100,"msie_hack");
    if ((pbVar21 != (byte *)0x0) && ((*pbVar21 & 0xdf) == 0x59)) {
      msie_hack = 1;
    }
    lVar19 = app_conf_try_string(conf,pcVar38,"name_opt");
    if (lVar19 == 0) {
      local_1218 = 1;
    }
    else {
      iVar8 = set_nameopt(lVar19);
      local_1218 = 0;
      if (iVar8 == 0) {
        BIO_printf(_bio_err,"Invalid name options: \"%s\"\n",lVar19);
        goto LAB_001036cc;
      }
    }
    lVar19 = app_conf_try_string(conf,pcVar38,"cert_opt");
    if (lVar19 == 0) {
LAB_0010312b:
      lVar19 = app_conf_try_string(conf,pcVar38,"copy_extensions");
      if ((lVar19 == 0) || (iVar8 = set_ext_copy(&local_1174,lVar19), iVar8 != 0)) {
        if ((local_1278 == (char *)0x0) && (uVar14 != 0)) {
          local_1278 = NCONF_get_string(conf,pcVar38,"new_certs_dir");
          if (local_1278 == (char *)0x0) {
            BIO_printf(_bio_err,
                       "there needs to be defined a directory for new certificate to be placed in\n"
                      );
            goto LAB_001036cc;
          }
          iVar8 = app_isdir(local_1278);
          if (iVar8 < 1) {
            BIO_printf(_bio_err,"%s: %s is not a directory\n",uVar15,local_1278);
            perror(local_1278);
            goto LAB_001036cc;
          }
        }
        pcVar20 = NCONF_get_string(conf,pcVar38,"database");
        if (pcVar20 == (char *)0x0) {
          BIO_printf(_bio_err,"variable lookup failed for %s::%s\n",pcVar38,"database");
        }
        else {
          lVar19 = load_index(pcVar20,&local_1180);
          iVar8 = 0;
          if (lVar19 != 0) goto LAB_001031eb;
          BIO_printf(_bio_err,"Problem with index file: %s (could not load/parse file)\n",pcVar20);
        }
        goto LAB_001036cc;
      }
      pcVar20 = "Invalid extension copy option: \"%s\"\n";
    }
    else {
      iVar8 = set_cert_ex(&local_1138,lVar19);
      pcVar20 = "Invalid certificate options: \"%s\"\n";
      local_1218 = 0;
      if (iVar8 != 0) goto LAB_0010312b;
    }
    BIO_printf(_bio_err,pcVar20,lVar19);
LAB_001036cc:
    local_12d8 = (long *)0x0;
    x_02 = (X509_CRL *)0x0;
    lVar19 = 0;
    pBVar18 = (BIO *)0x0;
    goto LAB_00102604;
  case 0x2b:
    local_1248 = opt_arg();
    uVar14 = 1;
    goto switchD_00102506_caseD_0;
  case 0x2c:
    local_1280 = (char *)opt_arg();
    uVar14 = 1;
    goto switchD_00102506_caseD_0;
  case 0x2d:
    local_12e8 = opt_arg();
    local_12b0 = 1;
    goto switchD_00102506_caseD_0;
  case 0x2e:
    local_12e8 = opt_arg();
    local_12b0 = 2;
    goto switchD_00102506_caseD_0;
  case 0x2f:
    local_12c8 = (char *)opt_arg();
    goto switchD_00102506_caseD_0;
  case 0x30:
    local_1240 = opt_arg();
    goto switchD_00102506_caseD_0;
  case 0x31:
    local_1318 = (BIGNUM *)opt_arg();
    goto switchD_00102506_caseD_0;
  case 0x32:
    bVar4 = true;
    goto switchD_00102506_caseD_0;
  case 0x33:
    local_12a8 = (char *)opt_arg();
    goto switchD_00102506_caseD_0;
  case 0x34:
    local_1238 = 1;
    goto switchD_00102506_caseD_0;
  case 0x35:
    local_12dc = 0;
    goto switchD_00102506_caseD_0;
  case -1:
    goto switchD_00102506_caseD_ffffffff;
  }
  if (iVar7 == 0) goto switchD_00102506_caseD_ffffffff;
  goto switchD_00102506_caseD_0;
LAB_001031eb:
  iVar10 = OPENSSL_sk_num(*(undefined8 *)(*(long *)(lVar19 + 8) + 8));
  if (iVar10 <= iVar8) goto LAB_00103849;
  puVar22 = (undefined8 *)OPENSSL_sk_value(*(undefined8 *)(*(long *)(lVar19 + 8) + 8),iVar8);
  if (*(char *)*puVar22 == 'R') {
    local_116c = -1;
    local_1128 = (ASN1_OBJECT *)0x0;
    local_1120 = (ASN1_GENERALIZEDTIME *)0x0;
    local_1118._0_8_ = (ASN1_TIME *)0x0;
    iVar10 = unpack_revinfo(&local_1118,&local_116c,&local_1128,&local_1120);
    if (iVar10 != 0) {
      CRYPTO_free((void *)0x0);
      ASN1_OBJECT_free(local_1128);
      ASN1_GENERALIZEDTIME_free(local_1120);
      ASN1_ENUMERATED_free((ASN1_ENUMERATED *)0x0);
      ASN1_TIME_free((ASN1_TIME *)local_1118._0_8_);
      goto LAB_0010322b;
    }
    CRYPTO_free((void *)0x0);
    ASN1_OBJECT_free(local_1128);
    ASN1_GENERALIZEDTIME_free(local_1120);
    ASN1_ENUMERATED_free((ASN1_ENUMERATED *)0x0);
    ASN1_TIME_free((ASN1_TIME *)local_1118._0_8_);
    pcVar38 = " in entry %d\n";
LAB_00103836:
    BIO_printf(_bio_err,pcVar38,(ulong)(iVar8 + 1));
    goto LAB_001032c9;
  }
  if (*(char *)puVar22[2] != '\0') {
    BIO_printf(_bio_err,"entry %d: not revoked yet, but has a revocation date\n",(ulong)(iVar8 + 1))
    ;
    goto LAB_001032c9;
  }
LAB_0010322b:
  iVar10 = ASN1_TIME_set_string((ASN1_TIME *)0x0,(char *)puVar22[1]);
  if (iVar10 == 0) {
    pcVar38 = "entry %d: invalid expiry date\n";
    goto LAB_00103836;
  }
  pbVar21 = (byte *)puVar22[3];
  sVar24 = strlen((char *)pbVar21);
  uVar34 = sVar24 & 0xffffffff;
  if (*pbVar21 == 0x2d) {
    pbVar21 = pbVar21 + 1;
    uVar34 = (ulong)((int)sVar24 - 1);
  }
  if (((int)uVar34 < 2) || ((uVar34 & 1) != 0)) {
    BIO_printf(_bio_err,"entry %d: bad serial number length (%d)\n",(ulong)(iVar8 + 1));
    goto LAB_001032c9;
  }
  bVar1 = *pbVar21;
  if (bVar1 != 0) {
    ppuVar23 = __ctype_b_loc();
    do {
      if ((*(byte *)((long)*ppuVar23 + (ulong)bVar1 * 2 + 1) & 0x10) == 0) {
        BIO_printf(_bio_err,"entry %d: bad char 0%o \'%c\' in serial number\n",(ulong)(iVar8 + 1),
                   (ulong)(uint)(int)(char)bVar1,(ulong)(uint)(int)(char)bVar1);
        goto LAB_001032c9;
      }
      bVar1 = pbVar21[1];
      pbVar21 = pbVar21 + 1;
    } while (bVar1 != 0);
  }
  iVar8 = iVar8 + 1;
  goto LAB_001031eb;
switchD_00102506_caseD_ffffffff:
  BIO_printf(_bio_err,"%s: Use -help for summary.\n",uVar15);
LAB_001025d5:
  local_12ac = 0;
  x509 = (X509 *)0x0;
  x_02 = (X509_CRL *)0x0;
  lVar19 = 0;
  local_12d8 = (long *)0x0;
  pBVar18 = (BIO *)0x0;
  conf = (CONF *)0x0;
  local_1310 = (EVP_PKEY *)0x0;
  local_1318 = (BIGNUM *)0x0;
  goto LAB_00102604;
LAB_00103849:
  if (local_12dc != 0) {
    TXT_DB_write(_bio_out,*(TXT_DB **)(lVar19 + 8));
    uVar11 = OPENSSL_sk_num(*(undefined8 *)(*(long *)(lVar19 + 8) + 8));
    BIO_printf(_bio_err,"%d entries loaded from the database\n",(ulong)uVar11);
    BIO_printf(_bio_err,"generating index\n");
  }
  iVar8 = index_index(lVar19);
  if (iVar8 < 1) goto LAB_001032c9;
  if (bVar4) {
    if (local_12dc != 0) {
      BIO_printf(_bio_err,"Updating %s ...\n",pcVar20);
    }
    uVar11 = do_updatedb(lVar19,0);
    if (uVar11 == 0xffffffff) {
      BIO_printf(_bio_err,"Malloc failure\n");
      goto LAB_001032c9;
    }
    if (uVar11 == 0) {
      if (local_12dc != 0) {
        BIO_printf(_bio_err,"No entries found to mark expired\n");
      }
    }
    else {
      iVar8 = save_index(pcVar20,&_LC144,lVar19);
      if ((iVar8 == 0) || (iVar8 = rotate_index(pcVar20,&_LC144,&_LC145), iVar8 == 0))
      goto LAB_001032c9;
      if (local_12dc != 0) {
        BIO_printf(_bio_err,"Done. %d entries marked as expired\n",(ulong)uVar11);
      }
    }
  }
  if (local_1240 != 0) {
    extfile_conf = (CONF *)app_load_config_internal(local_1240,0);
    if (extfile_conf == (CONF *)0x0) goto LAB_001032c9;
    if (local_12dc != 0) {
      BIO_printf(_bio_err,"Successfully loaded extensions file %s\n",local_1240);
    }
    if (local_12c8 == (char *)0x0) {
      pcVar17 = (char *)app_conf_try_string(extfile_conf,"default","extensions");
      local_12c8 = "default";
      if (pcVar17 != (char *)0x0) {
        local_12c8 = pcVar17;
      }
    }
  }
  plVar35 = (long *)(ulong)local_1268;
  uVar12 = uVar14 | local_1268;
  uVar11 = uVar13;
  if ((uVar12 != 0) && ((local_1260 == 0 || (uVar11 = uVar12, local_1280 == (char *)0x0)))) {
    uVar12 = 0;
    uVar11 = uVar13;
  }
  iVar8 = EVP_PKEY_get_default_digest_name(local_1310,local_1098,0x50);
  if ((iVar8 == 2) && (iVar10 = strcmp(local_1098,"UNDEF"), iVar10 == 0)) {
    local_12c0 = (long *)0x0;
  }
  else {
    if ((local_12c0 == (long *)0x0) &&
       (local_12c0 = (long *)lookup_conf(conf,pcVar38,"default_md"), local_12c0 == (long *)0x0)) {
      iVar10 = strcmp(local_1098,"UNDEF");
      if (iVar10 != 0) goto LAB_001032c9;
    }
    else {
      iVar10 = strcmp((char *)local_12c0,"default");
      if ((iVar10 != 0) && (iVar10 = strcmp(local_1098,"UNDEF"), iVar10 != 0)) goto LAB_00103989;
    }
    local_12c0 = (long *)local_1098;
    if (iVar8 < 1) {
      BIO_puts(_bio_err,"no default digest\n");
      goto LAB_001032c9;
    }
  }
LAB_00103989:
  if (uVar14 == 0) {
    local_12d8 = (long *)0x0;
    goto LAB_0010497d;
  }
  if ((bVar39 == true) &&
     (pcVar17 = (char *)app_conf_try_string(conf,pcVar38,"email_in_dn"), pcVar17 != (char *)0x0)) {
    iVar8 = strcmp(pcVar17,"no");
    bVar39 = iVar8 != 0;
  }
  if (local_12dc == 0) {
    if ((local_12a0 == (X509_REQ *)0x0) &&
       (local_12a0 = (X509_REQ *)lookup_conf(conf,pcVar38,"policy"), local_12a0 == (X509_REQ *)0x0))
    goto LAB_001032c9;
LAB_001039b9:
    lVar26 = app_conf_try_string(conf,pcVar38,"rand_serial");
    if (lVar26 == 0) {
      local_1220 = lookup_conf(conf,pcVar38,"serial");
      if (local_1220 == 0) goto LAB_001032c9;
    }
    else {
      local_1220 = 0;
      local_1238 = uVar14;
    }
    if (extfile_conf == (CONF *)0x0) {
      if ((local_12c8 != (char *)0x0) ||
         (local_12c8 = (char *)app_conf_try_string(conf,pcVar38,"x509_extensions"),
         local_12c8 != (char *)0x0)) {
        X509V3_set_ctx(&local_1118,(X509 *)0x0,(X509 *)0x0,(X509_REQ *)0x0,(X509_CRL *)0x0,1);
        X509V3_set_nconf(&local_1118,conf);
        plVar35 = (long *)0x0;
        iVar8 = X509V3_EXT_add_nconf(conf,&local_1118,local_12c8,(X509 *)0x0);
        if (iVar8 == 0) {
          BIO_printf(_bio_err,"Error checking certificate extension config section %s\n",local_12c8)
          ;
          goto LAB_001032c9;
        }
      }
    }
    else {
      X509V3_set_ctx(&local_1118,(X509 *)0x0,(X509 *)0x0,(X509_REQ *)0x0,(X509_CRL *)0x0,1);
      X509V3_set_nconf(&local_1118,extfile_conf);
      plVar35 = (long *)0x0;
      iVar8 = X509V3_EXT_add_nconf(extfile_conf,&local_1118,local_12c8,(X509 *)0x0);
      if (iVar8 == 0) {
        BIO_printf(_bio_err,"Error checking certificate extensions from extfile section %s\n",
                   local_12c8);
        goto LAB_001032c9;
      }
    }
    if (local_1298 == 0) {
      local_1298 = app_conf_try_string(conf,pcVar38,"default_startdate");
    }
    if (local_12b8 == 0) {
      local_12b8 = app_conf_try_string(conf,pcVar38,"default_enddate");
      if (local_1140 == 0) goto LAB_001054b1;
      if (local_12b8 == 0) {
LAB_00105580:
        local_12b8 = 0;
      }
      else {
LAB_001055ba:
        if (local_1140 != 0) goto LAB_00103a6d;
      }
    }
    else {
      if (local_1140 == 0) {
LAB_001054b1:
        plVar35 = &local_1140;
        iVar8 = app_conf_try_number(conf,pcVar38,"default_days");
        if (iVar8 == 0) {
          local_1140 = 0;
          if (local_12b8 != 0) goto LAB_00103a82;
        }
        else {
          if (local_12b8 != 0) goto LAB_001055ba;
          if (local_1140 != 0) goto LAB_00105580;
        }
        BIO_printf(_bio_err,"cannot lookup how many days to certify for\n");
        goto LAB_001032c9;
      }
LAB_00103a6d:
      BIO_printf(_bio_err,"Warning: -enddate or -not_after option overriding -days option\n");
    }
LAB_00103a82:
    if (local_1238 == 0) {
      plVar35 = (long *)0x0;
      local_1168 = (BIGNUM *)load_serial(local_1220,0,uVar6);
      if (local_1168 != (BIGNUM *)0x0) {
        if (local_12dc != 0) {
          iVar8 = BN_is_zero(local_1168);
          if (iVar8 == 0) {
            pcVar17 = BN_bn2hex(local_1168);
            if (pcVar17 == (char *)0x0) goto LAB_001032c9;
            BIO_printf(_bio_err,"next serial number is %s\n",pcVar17);
            CRYPTO_free(pcVar17);
          }
          else {
            BIO_printf(_bio_err,"next serial number is 00\n");
          }
        }
        goto LAB_00103ab8;
      }
      BIO_printf(_bio_err,"error while loading serial number\n");
      goto LAB_001032c9;
    }
    local_1168 = BN_new();
    if ((local_1168 == (BIGNUM *)0x0) || (iVar8 = rand_serial(local_1168,0), iVar8 == 0)) {
      BIO_printf(_bio_err,"error generating serial number\n");
      goto LAB_001032c9;
    }
LAB_00103ab8:
    psVar27 = NCONF_get_section(conf,(char *)local_12a0);
    if (psVar27 == (stack_st_CONF_VALUE *)0x0) {
      BIO_printf(_bio_err,"unable to find \'section\' for %s\n",local_12a0);
      goto LAB_001032c9;
    }
    local_12d8 = (long *)OPENSSL_sk_new_null();
    if (local_12d8 == (long *)0x0) {
      BIO_printf(_bio_err,"Memory allocation failure\n");
      goto LAB_001032c9;
    }
    if (local_1280 == (char *)0x0) {
      uVar13 = 0;
      goto LAB_00103e7b;
    }
    get_nameopt();
    conf_00 = CONF_load((lhash_st_CONF_VALUE *)0x0,local_1280,(long *)&local_1118);
    if (conf_00 == (lhash_st_CONF_VALUE *)0x0) {
      BIO_printf(_bio_err,"error on line %ld of %s\n",local_1118._0_8_,local_1280);
LAB_001043d7:
      x = (NETSCAPE_SPKI *)0x0;
      local_12a0 = (X509_REQ *)0x0;
LAB_00103cc8:
      X509_REQ_free(local_12a0);
      CONF_free(conf_00);
      NETSCAPE_SPKI_free(x);
      X509_NAME_ENTRY_free((X509_NAME_ENTRY *)0x0);
LAB_00103cee:
      x_02 = (X509_CRL *)0x0;
      pBVar18 = (BIO *)0x0;
    }
    else {
      psVar28 = CONF_get_section(conf_00,"default");
      iVar8 = OPENSSL_sk_num(psVar28);
      if (iVar8 == 0) {
        BIO_printf(_bio_err,"no name/value pairs found in %s\n",local_1280);
        goto LAB_001043d7;
      }
      local_12a0 = X509_REQ_new();
      if (local_12a0 == (X509_REQ *)0x0) goto LAB_001043d7;
      x = (NETSCAPE_SPKI *)0x0;
      pXVar29 = (X509_NAME *)X509_REQ_get_subject_name(local_12a0);
      for (iVar8 = 0; iVar10 = OPENSSL_sk_num(psVar28), iVar8 < iVar10; iVar8 = iVar8 + 1) {
        lVar26 = OPENSSL_sk_value(psVar28);
        pbVar21 = *(byte **)(lVar26 + 8);
        pbVar36 = pbVar21;
        bVar1 = *pbVar21;
        do {
          if (bVar1 == 0) goto LAB_00103c40;
          uVar34 = (ulong)bVar1;
          pbVar36 = pbVar36 + 1;
          bVar3 = *pbVar36;
          bVar4 = 0x3a < bVar1;
          bVar1 = bVar3;
        } while ((bVar4) || ((0x400500000000000U >> (uVar34 & 0x3f) & 1) == 0));
        if (bVar3 != 0) {
          pbVar21 = pbVar36;
        }
LAB_00103c40:
        bytes = *(uchar **)(lVar26 + 0x10);
        iVar10 = OBJ_txt2nid((char *)pbVar21);
        if (iVar10 == 0) {
          iVar10 = strcmp((char *)pbVar21,"SPKAC");
          if ((iVar10 == 0) &&
             (x = NETSCAPE_SPKI_b64_decode(*(char **)(lVar26 + 0x10),-1), x == (NETSCAPE_SPKI *)0x0)
             ) {
            x = (NETSCAPE_SPKI *)0x0;
            BIO_printf(_bio_err,"unable to load Netscape SPKAC structure\n");
            goto LAB_00103cc8;
          }
        }
        else {
          iVar10 = X509_NAME_add_entry_by_NID(pXVar29,iVar10,iVar9,bytes,-1,-1,0);
          if (iVar10 == 0) goto LAB_00103cc8;
        }
      }
      if (x == (NETSCAPE_SPKI *)0x0) {
        x = (NETSCAPE_SPKI *)0x0;
        BIO_printf(_bio_err,"Netscape SPKAC structure not found in %s\n",local_1280);
        goto LAB_00103cc8;
      }
      BIO_printf(_bio_err,"Check that the SPKAC request matches the signature\n");
      r = NETSCAPE_SPKI_get_pubkey(x);
      if (r == (EVP_PKEY *)0x0) {
        BIO_printf(_bio_err,"error unpacking SPKAC public key\n");
        goto LAB_00103cc8;
      }
      iVar8 = NETSCAPE_SPKI_verify(x,r);
      if (iVar8 < 1) {
        EVP_PKEY_free(r);
        BIO_printf(_bio_err,"signature verification failed on SPKAC public key\n");
        goto LAB_00103cc8;
      }
      BIO_printf(_bio_err,"Signature ok\n");
      X509_REQ_set_pubkey(local_12a0,r);
      EVP_PKEY_free(r);
      plVar35 = local_12c0;
      uVar13 = do_body_constprop_0(&local_1130,local_1310,x509);
      X509_REQ_free(local_12a0);
      CONF_free(conf_00);
      NETSCAPE_SPKI_free(x);
      X509_NAME_ENTRY_free((X509_NAME_ENTRY *)0x0);
      if ((int)uVar13 < 0) goto LAB_00103cee;
      if (uVar13 != 0) {
        BIO_printf(_bio_err,"\n");
        iVar8 = BN_add_word(local_1168,1);
        if (iVar8 != 0) {
          iVar8 = OPENSSL_sk_push(local_12d8,local_1130);
          plVar35 = (long *)(ulong)uVar14;
          uVar13 = uVar14;
          if (iVar8 != 0) goto LAB_00103e7b;
          BIO_printf(_bio_err,"Memory allocation failure\n");
        }
        goto LAB_00103cee;
      }
LAB_00103e7b:
      if (local_1248 == 0) goto LAB_001040c8;
      get_nameopt();
      plVar35 = local_1158;
      x_00 = (X509 *)load_cert_pass(local_1248,local_117c,1);
      if (x_00 == (X509 *)0x0) {
LAB_00104520:
        X509_REQ_free((X509_REQ *)0x0);
        X509_free(x_00);
        goto LAB_00103cee;
      }
      if (local_12dc != 0) {
        X509_print(_bio_err,x_00);
      }
      BIO_printf(_bio_err,"Check that the request matches the signature\n");
      lVar26 = X509_get0_pubkey(x_00);
      if (lVar26 == 0) {
        BIO_printf(_bio_err,"error unpacking public key\n");
        goto LAB_00104520;
      }
      iVar8 = do_X509_verify(x_00,lVar26,local_1300);
      if (-1 < iVar8) {
        if (iVar8 == 0) {
          BIO_printf(_bio_err,"Signature did not match the certificate\n");
          goto LAB_001044e0;
        }
        BIO_printf(_bio_err,"Signature ok\n");
        a_01 = X509_to_X509_REQ(x_00,(EVP_PKEY *)0x0,(EVP_MD *)0x0);
        if (a_01 == (X509_REQ *)0x0) goto LAB_00104520;
        plVar35 = local_12c0;
        iVar8 = do_body_constprop_0(&local_1130,local_1310,x509);
        X509_REQ_free(a_01);
        X509_free(x_00);
        if (iVar8 < 0) goto LAB_00103cee;
        if (iVar8 == 0) goto LAB_001040c8;
        BIO_printf(_bio_err,"\n");
        iVar8 = BN_add_word(local_1168,1);
        if (iVar8 == 0) goto LAB_00103cee;
        iVar8 = OPENSSL_sk_push(local_12d8,local_1130);
        if (iVar8 != 0) {
          uVar13 = uVar13 + 1;
          goto LAB_001040c8;
        }
LAB_001044b8:
        BIO_printf(_bio_err,"Memory allocation failure\n");
        goto LAB_00103cee;
      }
      BIO_printf(_bio_err,"Signature verification problems....\n");
LAB_001044e0:
      X509_REQ_free((X509_REQ *)0x0);
      X509_free(x_00);
LAB_001040c8:
      uVar15 = local_1160;
      uVar6 = local_1174;
      if (local_12e8 != 0) {
        uVar30 = get_nameopt();
        iVar9 = certify_constprop_0(&local_1130,local_12e8,local_1178,local_1310,pXVar32,local_12c0,
                                    local_1308,local_1300,psVar27,lVar19,local_1168,local_1270,iVar9
                                    ,bVar39,local_1298,local_12b8,local_1140,uVar11,local_12c8,conf,
                                    local_12dc,local_1138,uVar30,local_1218,uVar6,local_1264,uVar15,
                                    plVar35);
        if (iVar9 < 0) goto LAB_00103cee;
        if (iVar9 != 0) {
          BIO_printf(_bio_err,"\n");
          iVar9 = BN_add_word(local_1168,1);
          if (iVar9 == 0) goto LAB_00103cee;
          iVar9 = OPENSSL_sk_push(local_12d8,local_1130);
          if (iVar9 == 0) goto LAB_001044b8;
          uVar13 = uVar13 + 1;
        }
      }
      for (lVar26 = 0; (int)lVar26 < iVar7; lVar26 = lVar26 + 1) {
        get_nameopt();
        iVar9 = certify_constprop_0(&local_1130,*(undefined8 *)(lVar16 + lVar26 * 8),local_1178);
        if (iVar9 < 0) {
          x_02 = (X509_CRL *)0x0;
          pBVar18 = (BIO *)0x0;
          goto LAB_00102604;
        }
        if (iVar9 != 0) {
          uVar13 = uVar13 + 1;
          BIO_printf(_bio_err,"\n");
          iVar9 = BN_add_word(local_1168,1);
          pXVar32 = local_1130;
          if (iVar9 != 0) {
            iVar9 = OPENSSL_sk_push(local_12d8,local_1130);
            if (iVar9 != 0) goto LAB_001041c1;
            BIO_printf(_bio_err,"Memory allocation failure\n");
          }
          X509_free(pXVar32);
          goto LAB_00103cee;
        }
LAB_001041c1:
      }
      iVar9 = OPENSSL_sk_num(local_12d8);
      if (0 < iVar9) {
        if (uVar11 != 0) {
LAB_001045de:
          uVar13 = OPENSSL_sk_num(local_12d8);
          BIO_printf(_bio_err,"Write out database with %d new entries\n",(ulong)uVar13);
          if (((local_1220 != 0) &&
              (iVar9 = save_serial(local_1220,&_LC144,local_1168,0), iVar9 == 0)) ||
             (iVar9 = save_index(pcVar20,&_LC144,lVar19), iVar9 == 0)) goto LAB_00103cee;
          goto LAB_00104652;
        }
        BIO_printf(_bio_err,"\n%d out of %d certificate requests certified, commit? [y/n]",
                   (ulong)uVar13);
        BIO_ctrl(_bio_err,0xb,0,(void *)0x0);
        local_10a8[5] = 0;
        pcVar17 = fgets(local_10a8 + 5,0xb,_stdin);
        if (pcVar17 == (char *)0x0) {
          BIO_printf(_bio_err,"CERTIFICATION CANCELED: I/O error\n");
        }
        else {
          if ((local_10a8[5] & 0xdf) == 0x59) goto LAB_001045de;
          BIO_printf(_bio_err,"CERTIFICATION CANCELED\n");
        }
        x_02 = (X509_CRL *)0x0;
        pBVar18 = (BIO *)0x0;
LAB_00105079:
        uVar15 = 0;
        goto LAB_00102616;
      }
LAB_00104652:
      OPENSSL_strlcpy(local_1048,local_1278,0x1000);
      lVar16 = OPENSSL_strlcat(local_1048,&_LC183,0x1000);
      if (local_12dc != 0) {
        BIO_printf(_bio_err,"writing new certificates\n");
      }
      pcVar17 = local_1048 + lVar16;
      for (iVar9 = 0; iVar7 = OPENSSL_sk_num(local_12d8), iVar9 < iVar7; iVar9 = iVar9 + 1) {
        pXVar32 = (X509 *)OPENSSL_sk_value(local_12d8,iVar9);
        x_01 = (ASN1_STRING *)X509_get0_serialNumber(pXVar32);
        lVar26 = ASN1_STRING_get0_data(x_01);
        uVar14 = ASN1_STRING_length(x_01);
        uVar13 = 1;
        if (0 < (int)uVar14) {
          uVar13 = uVar14;
        }
        if (0x1000 < (ulong)((int)(uVar13 * 2 + 5) + lVar16)) {
          BIO_printf(_bio_err,"certificate file name too long\n");
          goto LAB_00103cee;
        }
        if ((int)uVar14 < 1) {
          *(undefined2 *)pcVar17 = _LC190;
          pcVar31 = local_1048 + lVar16 + 2;
        }
        else {
          lVar37 = 0;
          do {
            pcVar17[lVar37 * 2] = "0123456789ABCDEF"[*(byte *)(lVar26 + lVar37) >> 4];
            local_1048[lVar37 * 2 + lVar16 + 1] =
                 "0123456789ABCDEF"[*(byte *)(lVar26 + lVar37) & 0xf];
            lVar37 = lVar37 + 1;
          } while ((int)lVar37 < (int)uVar14);
          pcVar31 = pcVar17 + (ulong)uVar14 * 2;
        }
        builtin_strncpy(pcVar31,".pem",5);
        if (local_12dc != 0) {
          BIO_printf(_bio_err,"writing %s\n",local_1048);
        }
        pBVar18 = (BIO *)bio_open_default(local_1260,0x77,(-(uint)(uVar12 == 0) & 0x7ffd) + 4);
        if (pBVar18 == (BIO *)0x0) {
          pBVar18 = (BIO *)0x0;
          local_1318 = (BIGNUM *)0x0;
          x_02 = (X509_CRL *)0x0;
          goto LAB_00102604;
        }
        bp = BIO_new_file(local_1048,"w");
        if (bp == (BIO *)0x0) {
          x_02 = (X509_CRL *)0x0;
          perror(local_1048);
          local_1318 = (BIGNUM *)0x0;
          goto LAB_00102604;
        }
        if (bVar5) {
          PEM_write_bio_X509(bp,pXVar32);
          if (uVar12 != 0) goto LAB_0010485d;
LAB_0010477c:
          PEM_write_bio_X509(pBVar18,pXVar32);
        }
        else {
          X509_print(bp,pXVar32);
          PEM_write_bio_X509(bp,pXVar32);
          if (uVar12 == 0) {
            X509_print(pBVar18,pXVar32);
            goto LAB_0010477c;
          }
LAB_0010485d:
          i2d_X509_bio(pBVar18,pXVar32);
        }
        BIO_free_all(bp);
        BIO_free_all(pBVar18);
      }
      iVar9 = OPENSSL_sk_num(local_12d8);
      if (iVar9 != 0) {
        if (((local_1220 != 0) && (iVar9 = rotate_serial(local_1220,&_LC144), iVar9 == 0)) ||
           (iVar9 = rotate_index(pcVar20,&_LC144,&_LC145), iVar9 == 0)) goto LAB_00103cee;
        BIO_printf(_bio_err,"Database updated\n");
      }
LAB_0010497d:
      if (local_1268 == 0) {
        x_02 = (X509_CRL *)0x0;
        pBVar18 = (BIO *)0x0;
LAB_00104fa4:
        if (local_12b0 == 0) goto LAB_00105079;
        if (local_12e8 == 0) {
          BIO_printf(_bio_err,"no input files\n");
        }
        else {
          pXVar32 = (X509 *)load_cert_pass(local_12e8,local_1178,1,local_1158,
                                           "certificate to be revoked");
          if (pXVar32 == (X509 *)0x0) goto LAB_00102ebf;
          iVar9 = -1;
          if (local_12b0 != 2) {
            iVar9 = local_11fc;
          }
          iVar9 = do_revoke(pXVar32,lVar19,iVar9,local_1210);
          if (0 < iVar9) {
            X509_free(pXVar32);
            iVar9 = save_index(pcVar20,&_LC144,lVar19);
            if ((iVar9 != 0) && (iVar9 = rotate_index(pcVar20,&_LC144,&_LC145), iVar9 != 0)) {
              BIO_printf(_bio_err,"Database updated\n");
              goto LAB_00105079;
            }
          }
        }
      }
      else {
        if ((local_12a8 != (char *)0x0) ||
           (local_12a8 = (char *)app_conf_try_string(conf,pcVar38,"crl_extensions"),
           local_12a8 != (char *)0x0)) {
          X509V3_set_ctx(&local_1118,(X509 *)0x0,(X509 *)0x0,(X509_REQ *)0x0,(X509_CRL *)0x0,1);
          X509V3_set_nconf(&local_1118,conf);
          iVar9 = X509V3_EXT_add_nconf(conf,&local_1118,local_12a8,(X509 *)0x0);
          if (iVar9 == 0) {
            x_02 = (X509_CRL *)0x0;
            pBVar18 = (BIO *)0x0;
            BIO_printf(_bio_err,"Error checking CRL extension section %s\n",local_12a8);
            goto LAB_00102604;
          }
        }
        lVar16 = app_conf_try_string(conf,pcVar38,"crlnumber");
        if (lVar16 == 0) {
          bn = (BIGNUM *)0x0;
        }
        else {
          bn = (BIGNUM *)load_serial(lVar16,0,0,0);
          if (bn == (BIGNUM *)0x0) {
            x_02 = (X509_CRL *)0x0;
            pBVar18 = (BIO *)0x0;
            BIO_printf(_bio_err,"error while loading CRL number\n");
            local_1318 = (BIGNUM *)0x0;
            goto LAB_00102604;
          }
        }
        if ((local_1150 == 0 && local_1148 == 0) && local_1258 == 0) {
          iVar9 = app_conf_try_number(conf,pcVar38,"default_crl_days",&local_1150);
          if (iVar9 == 0) {
            local_1150 = 0;
          }
          iVar9 = app_conf_try_number(conf,pcVar38,"default_crl_hours",&local_1148);
          if (iVar9 == 0) {
            local_1148 = 0;
          }
        }
        if ((local_1230 == 0) && ((local_1150 == 0 && local_1148 == 0) && local_1258 == 0)) {
          x_02 = (X509_CRL *)0x0;
          pBVar18 = (BIO *)0x0;
          BIO_printf(_bio_err,"cannot lookup how long until the next CRL is issued\n");
          local_1318 = bn;
        }
        else {
          if (local_12dc != 0) {
            BIO_printf(_bio_err,"making CRL\n");
          }
          uVar15 = app_get0_propq();
          uVar30 = app_get0_libctx();
          x_02 = (X509_CRL *)X509_CRL_new_ex(uVar30,uVar15);
          if (x_02 != (X509_CRL *)0x0) {
            pXVar29 = X509_get_subject_name(x509);
            iVar9 = X509_CRL_set_issuer_name(x_02,pXVar29);
            if (iVar9 != 0) {
              iVar9 = set_crl_lastupdate(x_02,local_1208);
              if (iVar9 == 0) {
                pBVar18 = (BIO *)0x0;
                BIO_puts(_bio_err,"error setting CRL lastUpdate\n");
                local_1318 = bn;
                goto LAB_00102604;
              }
              iVar9 = set_crl_nextupdate(x_02,local_1230,local_1150,local_1148,local_1258);
              if (iVar9 == 0) {
                BIO_puts(_bio_err,"error setting CRL nextUpdate\n");
              }
              else {
                uVar13 = 0;
                for (iVar9 = 0; iVar7 = OPENSSL_sk_num(*(undefined8 *)(*(long *)(lVar19 + 8) + 8)),
                    iVar9 < iVar7; iVar9 = iVar9 + 1) {
                  puVar22 = (undefined8 *)
                            OPENSSL_sk_value(*(undefined8 *)(*(long *)(lVar19 + 8) + 8),iVar9);
                  if (*(char *)*puVar22 == 'R') {
                    r_00 = X509_REVOKED_new();
                    if (r_00 != (X509_REVOKED *)0x0) {
                      local_116c = -1;
                      local_1128 = (ASN1_OBJECT *)0x0;
                      local_1120 = (ASN1_GENERALIZEDTIME *)0x0;
                      local_1118._0_8_ = (ASN1_TIME *)0x0;
                      iVar7 = unpack_revinfo(&local_1118,&local_116c,&local_1128);
                      uVar15 = local_1118._0_8_;
                      if ((iVar7 == 0) ||
                         (iVar8 = X509_REVOKED_set_revocationDate
                                            (r_00,(ASN1_TIME *)local_1118._0_8_), iVar7 = local_116c
                         , iVar8 == 0)) {
LAB_00104d5a:
                        a_02 = (ASN1_ENUMERATED *)0x0;
                      }
                      else {
                        a_02 = (ASN1_ENUMERATED *)0x0;
                        if (local_116c == -1) {
LAB_00104c2f:
                          a_00 = local_1120;
                          if (((local_1120 == (ASN1_GENERALIZEDTIME *)0x0) ||
                              (iVar8 = X509_REVOKED_add1_ext_i2d(r_00,0x8e,local_1120,0,0),
                              0 < iVar8)) &&
                             ((a = local_1128, local_1128 == (ASN1_OBJECT *)0x0 ||
                              (iVar8 = X509_REVOKED_add1_ext_i2d(r_00,0x1ae,local_1128,0,0),
                              0 < iVar8)))) {
                            if (iVar7 == -1) {
                              CRYPTO_free((void *)0x0);
                              ASN1_OBJECT_free(a);
                              ASN1_GENERALIZEDTIME_free(a_00);
                              ASN1_ENUMERATED_free(a_02);
                              ASN1_TIME_free((ASN1_TIME *)uVar15);
                            }
                            else {
                              CRYPTO_free((void *)0x0);
                              ASN1_OBJECT_free(a);
                              ASN1_GENERALIZEDTIME_free(a_00);
                              ASN1_ENUMERATED_free(a_02);
                              ASN1_TIME_free((ASN1_TIME *)uVar15);
                              uVar13 = local_1268;
                            }
                            iVar7 = BN_hex2bn(&local_1168,(char *)puVar22[3]);
                            if (iVar7 != 0) {
                              pAVar33 = BN_to_ASN1_INTEGER(local_1168,(ASN1_INTEGER *)0x0);
                              BN_free(local_1168);
                              local_1168 = (BIGNUM *)0x0;
                              if (pAVar33 != (ASN1_INTEGER *)0x0) {
                                X509_REVOKED_set_serialNumber(r_00,pAVar33);
                                ASN1_INTEGER_free(pAVar33);
                                X509_CRL_add0_revoked(x_02,r_00);
                                goto LAB_00104b0a;
                              }
                            }
                            goto LAB_00104db2;
                          }
                        }
                        else {
                          a_02 = ASN1_ENUMERATED_new();
                          if (a_02 == (ASN1_ENUMERATED *)0x0) goto LAB_00104d5a;
                          iVar8 = ASN1_ENUMERATED_set(a_02,(long)iVar7);
                          if ((iVar8 != 0) &&
                             (iVar8 = X509_REVOKED_add1_ext_i2d(r_00,0x8d,a_02,0,0), 0 < iVar8))
                          goto LAB_00104c2f;
                        }
                      }
                      CRYPTO_free((void *)0x0);
                      ASN1_OBJECT_free(local_1128);
                      ASN1_GENERALIZEDTIME_free(local_1120);
                      ASN1_ENUMERATED_free(a_02);
                      ASN1_TIME_free((ASN1_TIME *)local_1118._0_8_);
                    }
LAB_00104db2:
                    pBVar18 = (BIO *)0x0;
                    local_1318 = bn;
                    goto LAB_00102604;
                  }
LAB_00104b0a:
                }
                X509_CRL_sort(x_02);
                if (local_12dc != 0) {
                  BIO_printf(_bio_err,"signing CRL\n");
                }
                if (lVar16 == 0 && local_12a8 == (char *)0x0) {
                  if (uVar13 != 0) {
                    iVar9 = X509_CRL_set_version(x_02,1);
joined_r0x00104f16:
                    if (iVar9 == 0) goto LAB_00104e7f;
                  }
LAB_00104f1c:
                  BN_free(bn);
                  iVar9 = do_X509_CRL_sign(x_02,local_1310,local_12c0,local_1308);
                  if (iVar9 == 0) {
LAB_00102a2f:
                    pBVar18 = (BIO *)0x0;
                  }
                  else {
                    pBVar18 = (BIO *)bio_open_default(local_1260,0x77,
                                                      (-(uint)(uVar12 == 0) & 0x7ffd) + 4);
                    if (pBVar18 == (BIO *)0x0) goto LAB_00102ebf;
                    PEM_write_bio_X509_CRL(pBVar18,x_02);
                    if ((lVar16 == 0) || (iVar9 = rotate_serial(lVar16,&_LC144,&_LC145), iVar9 != 0)
                       ) goto LAB_00104fa4;
                  }
                  goto LAB_00102604;
                }
                X509V3_set_ctx(&local_1118,x509,(X509 *)0x0,(X509_REQ *)0x0,x_02,0);
                X509V3_set_nconf(&local_1118,conf);
                if (local_12a8 == (char *)0x0) {
LAB_001050d2:
                  pAVar33 = BN_to_ASN1_INTEGER(bn,(ASN1_INTEGER *)0x0);
                  if (pAVar33 != (ASN1_INTEGER *)0x0) {
                    X509_CRL_add1_ext_i2d(x_02,0x58,pAVar33,0,0);
                    ASN1_INTEGER_free(pAVar33);
                    iVar9 = BN_add_word(bn,1);
                    if (iVar9 != 0) goto LAB_00104ee5;
                  }
                }
                else {
                  iVar9 = X509V3_EXT_CRL_add_nconf(conf,&local_1118,local_12a8,x_02);
                  if (iVar9 == 0) {
                    BIO_printf(_bio_err,"Error adding CRL extensions from section %s\n",local_12a8);
                    goto LAB_00104e7f;
                  }
                  if (lVar16 != 0) goto LAB_001050d2;
LAB_00104ee5:
                  iVar9 = X509_CRL_set_version(x_02,1);
                  if (iVar9 != 0) {
                    if (lVar16 != 0) {
                      iVar9 = save_serial(lVar16,&_LC144,bn,0);
                      goto joined_r0x00104f16;
                    }
                    goto LAB_00104f1c;
                  }
                }
              }
            }
          }
LAB_00104e7f:
          pBVar18 = (BIO *)0x0;
          local_1318 = bn;
        }
      }
    }
  }
  else {
    BIO_printf(_bio_err,"message digest is %s\n",local_12c0);
    if ((local_12a0 != (X509_REQ *)0x0) ||
       (local_12a0 = (X509_REQ *)lookup_conf(conf,pcVar38,"policy"), local_12a0 != (X509_REQ *)0x0))
    {
      BIO_printf(_bio_err,"policy is %s\n",local_12a0);
      goto LAB_001039b9;
    }
LAB_001032c9:
    x_02 = (X509_CRL *)0x0;
    pBVar18 = (BIO *)0x0;
    local_12d8 = (long *)0x0;
  }
LAB_00102604:
  uVar15 = 1;
  ERR_print_errors(_bio_err);
LAB_00102616:
  BIO_free_all(pBVar18);
  BIO_free_all((BIO *)0x0);
  BIO_free_all((BIO *)0x0);
  OSSL_STACK_OF_X509_free(local_12d8);
  cleanse(local_1158);
  if (local_12ac != 0) {
    CRYPTO_free(local_1158);
  }
LAB_00102664:
  BN_free(local_1168);
  BN_free(local_1318);
  free_index(lVar19);
  OPENSSL_sk_free(local_1308);
  OPENSSL_sk_free(local_1300);
  EVP_PKEY_free(local_1310);
  X509_free(x509);
  X509_CRL_free(x_02);
  NCONF_free(conf);
  NCONF_free(extfile_conf);
  release_engine(local_12f8);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar15;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 ca_main_cold(void)

{
  BIO *unaff_RBP;
  X509 *unaff_R13;
  long in_FS_OFFSET;
  EVP_PKEY *in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  char *in_stack_00000028;
  undefined8 in_stack_00000040;
  CONF *in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000068;
  BIGNUM *in_stack_000001b0;
  void *in_stack_000001c0;
  long in_stack_000012d8;
  
  perror(in_stack_00000028);
  ERR_print_errors(_bio_err);
  BIO_free_all(unaff_RBP);
  BIO_free_all((BIO *)0x0);
  BIO_free_all((BIO *)0x0);
  OSSL_STACK_OF_X509_free(in_stack_00000040);
  cleanse(in_stack_000001c0);
  if (in_stack_00000068._4_4_ != 0) {
    CRYPTO_free(in_stack_000001c0);
  }
  BN_free(in_stack_000001b0);
  BN_free((BIGNUM *)0x0);
  free_index(in_stack_00000050);
  OPENSSL_sk_free(in_stack_00000010);
  OPENSSL_sk_free(in_stack_00000018);
  EVP_PKEY_free(in_stack_00000008);
  X509_free(unaff_R13);
  X509_CRL_free((X509_CRL *)0x0);
  NCONF_free(in_stack_00000048);
  NCONF_free(extfile_conf);
  release_engine(in_stack_00000020);
  if (in_stack_000012d8 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


