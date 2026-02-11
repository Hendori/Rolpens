
void OSSL_STACK_OF_X509_free(undefined8 param_1)

{
  OPENSSL_sk_pop_free(param_1,&X509_free);
  return;
}



int X509_ocspid_print(BIO *bp,X509 *x)

{
  int iVar1;
  X509_NAME *a;
  uchar *data;
  EVP_MD *type;
  ASN1_BIT_STRING *x_00;
  void *data_00;
  byte *pbVar2;
  long in_FS_OFFSET;
  byte *local_78;
  uchar *local_60;
  byte local_58 [20];
  byte local_44 [4];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((x != (X509 *)0x0) && (bp != (BIO *)0x0)) {
    iVar1 = BIO_printf(bp,"        Subject OCSP hash: ");
    if (iVar1 < 1) {
LAB_0010020f:
      type = (EVP_MD *)0x0;
LAB_00100212:
      data = (uchar *)0x0;
    }
    else {
      a = X509_get_subject_name(x);
      iVar1 = i2d_X509_NAME(a,(uchar **)0x0);
      if (iVar1 < 1) goto LAB_0010020f;
      data = (uchar *)CRYPTO_malloc(iVar1,"crypto/x509/t_x509.c",0xdc);
      local_60 = data;
      if (data == (uchar *)0x0) goto LAB_0010020f;
      i2d_X509_NAME(a,&local_60);
      type = (EVP_MD *)
             EVP_MD_fetch(*(undefined8 *)x[1].sha1_hash,&_LC2,*(undefined8 *)(x[1].sha1_hash + 8));
      if (type != (EVP_MD *)0x0) {
        local_78 = local_58;
        iVar1 = EVP_Digest(data,(long)iVar1,local_78,(uint *)0x0,type,(ENGINE *)0x0);
        if (iVar1 == 0) goto LAB_00100215;
        pbVar2 = local_78;
        do {
          iVar1 = BIO_printf(bp,"%02X",(ulong)*pbVar2);
          if (iVar1 < 1) goto LAB_00100215;
          pbVar2 = pbVar2 + 1;
        } while (pbVar2 != local_44);
        CRYPTO_free(data);
        iVar1 = BIO_printf(bp,"\n        Public key OCSP hash: ");
        if ((0 < iVar1) && (x_00 = X509_get0_pubkey_bitstr(x), x_00 != (ASN1_BIT_STRING *)0x0)) {
          iVar1 = ASN1_STRING_length(x_00);
          data_00 = (void *)ASN1_STRING_get0_data(x_00);
          iVar1 = EVP_Digest(data_00,(long)iVar1,local_78,(uint *)0x0,type,(ENGINE *)0x0);
          if (iVar1 != 0) {
            do {
              iVar1 = BIO_printf(bp,"%02X",(ulong)*local_78);
              if (iVar1 < 1) goto LAB_00100212;
              local_78 = local_78 + 1;
            } while (local_78 != local_44);
            BIO_printf(bp,"\n");
            EVP_MD_free(type);
            iVar1 = 1;
            goto LAB_0010022f;
          }
        }
        goto LAB_00100212;
      }
    }
LAB_00100215:
    CRYPTO_free(data);
    EVP_MD_free(type);
  }
  iVar1 = 0;
LAB_0010022f:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}



int X509_signature_dump(BIO *bp,ASN1_STRING *sig,int indent)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  byte *pbVar5;
  int iVar6;
  
  iVar6 = 0;
  iVar3 = sig->length;
  pbVar5 = sig->data;
  if (0 < iVar3) {
    do {
      iVar2 = BIO_indent(bp,indent,indent);
      if (iVar2 < 1) {
        return 0;
      }
      do {
        iVar6 = iVar6 + 1;
        puVar4 = &_LC7;
        bVar1 = *pbVar5;
        if (iVar6 == iVar3) {
          puVar4 = &_LC6;
        }
        pbVar5 = pbVar5 + 1;
        iVar2 = BIO_printf(bp,"%02x%s",(ulong)bVar1,puVar4);
        if (iVar2 < 1) {
          return 0;
        }
        if (iVar3 <= iVar6) goto LAB_00100320;
      } while (0xe38e38e <
               ((uint)(iVar6 * 0x38e38e39) >> 1 | (uint)((iVar6 * 0x38e38e39 & 1U) != 0) << 0x1f));
      iVar2 = BIO_write(bp,&_LC5,1);
      if (iVar2 < 1) {
        return 0;
      }
    } while( true );
  }
LAB_00100320:
  iVar3 = BIO_write(bp,&_LC5,1);
  return (int)(iVar3 == 1);
}



int X509_signature_print(BIO *bp,X509_ALGOR *alg,ASN1_STRING *sig)

{
  int iVar1;
  EVP_PKEY_ASN1_METHOD *pEVar2;
  long in_FS_OFFSET;
  int local_38;
  int local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = BIO_printf(bp,"%*sSignature Algorithm: ",4,&_LC6);
  if (iVar1 < 1) {
LAB_00100440:
    iVar1 = 0;
  }
  else {
    iVar1 = i2a_ASN1_OBJECT(bp,alg->algorithm);
    if (iVar1 < 1) goto LAB_00100440;
    if (sig != (ASN1_STRING *)0x0) {
      iVar1 = BIO_printf(bp,"\n%*sSignature Value:",4,&_LC6);
      if (iVar1 < 1) goto LAB_00100440;
    }
    iVar1 = OBJ_obj2nid(alg->algorithm);
    if (iVar1 == 0) {
LAB_00100420:
      iVar1 = BIO_write(bp,&_LC5,1);
      if (iVar1 != 1) goto LAB_00100440;
      iVar1 = 1;
      if (sig != (ASN1_STRING *)0x0) {
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
          iVar1 = X509_signature_dump(bp,sig,8);
          return iVar1;
        }
        goto LAB_0010048f;
      }
    }
    else {
      iVar1 = OBJ_find_sigid_algs(iVar1,&local_34,&local_38);
      if (iVar1 == 0) goto LAB_00100420;
      pEVar2 = EVP_PKEY_asn1_find((ENGINE **)0x0,local_38);
      if ((pEVar2 == (EVP_PKEY_ASN1_METHOD *)0x0) || (*(code **)(pEVar2 + 0xa0) == (code *)0x0))
      goto LAB_00100420;
      iVar1 = (**(code **)(pEVar2 + 0xa0))(bp,alg,sig,8,0);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
LAB_0010048f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 X509_aux_print(BIO *param_1,X509 *param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ASN1_OBJECT *pAVar5;
  uchar *puVar6;
  undefined *puVar7;
  ulong uVar8;
  long in_FS_OFFSET;
  int local_a0;
  uint local_9c;
  char local_98 [88];
  long local_40;
  
  uVar8 = (ulong)param_3;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = X509_trusted(param_2);
  if (iVar2 == 0) goto LAB_001004da;
  lVar3 = X509_get0_trust_objects(param_2);
  lVar4 = X509_get0_reject_objects(param_2);
  if (lVar3 == 0) {
    BIO_printf(param_1,"%*sNo Trusted Uses.\n",uVar8,&_LC6);
    if (lVar4 != 0) goto LAB_001005e0;
LAB_0010079c:
    BIO_printf(param_1,"%*sNo Rejected Uses.\n",uVar8,&_LC6);
  }
  else {
    BIO_printf(param_1,"%*sTrusted Uses:\n%*s",uVar8,&_LC6,(ulong)(param_3 + 2));
    bVar1 = true;
    local_9c = 0;
    while (iVar2 = OPENSSL_sk_num(lVar3), (int)local_9c < iVar2) {
      if (!bVar1) {
        BIO_puts(param_1,", ");
      }
      pAVar5 = (ASN1_OBJECT *)OPENSSL_sk_value(lVar3,local_9c);
      OBJ_obj2txt(local_98,0x50,pAVar5,0);
      bVar1 = false;
      BIO_puts(param_1,local_98);
      local_9c = local_9c + 1;
    }
    BIO_puts(param_1,"\n");
    if (lVar4 == 0) goto LAB_0010079c;
LAB_001005e0:
    bVar1 = true;
    BIO_printf(param_1,"%*sRejected Uses:\n%*s",uVar8,&_LC6,(ulong)(param_3 + 2),&_LC6);
    local_9c = 0;
    while (iVar2 = OPENSSL_sk_num(lVar4), (int)local_9c < iVar2) {
      if (!bVar1) {
        BIO_puts(param_1,", ");
      }
      pAVar5 = (ASN1_OBJECT *)OPENSSL_sk_value(lVar4,local_9c);
      OBJ_obj2txt(local_98,0x50,pAVar5,0);
      bVar1 = false;
      BIO_puts(param_1,local_98);
      local_9c = local_9c + 1;
    }
    BIO_puts(param_1,"\n");
  }
  puVar6 = X509_alias_get0(param_2,(int *)&local_9c);
  if (puVar6 != (uchar *)0x0) {
    BIO_printf(param_1,"%*sAlias: %.*s\n",(ulong)param_3,&_LC6,(ulong)local_9c,puVar6);
  }
  puVar6 = X509_keyid_get0(param_2,&local_a0);
  if (puVar6 != (uchar *)0x0) {
    BIO_printf(param_1,"%*sKey Id: ",(ulong)param_3,&_LC6);
    local_9c = 0;
    if (0 < local_a0) {
      do {
        puVar7 = &_LC7;
        if (local_9c == 0) {
          puVar7 = &_LC6;
        }
        BIO_printf(param_1,"%s%02X",puVar7,(ulong)puVar6[(int)local_9c]);
        local_9c = local_9c + 1;
      } while ((int)local_9c < local_a0);
    }
    BIO_write(param_1,&_LC5,1);
  }
LAB_001004da:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}



int ossl_serial_number_print(BIO *param_1,int *param_2,uint param_3)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  long in_FS_OFFSET;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_2 == 0) {
    iVar1 = BIO_puts(param_1," (Empty)");
    iVar1 = -(uint)(iVar1 < 1);
  }
  else {
    ERR_set_mark();
    iVar1 = ASN1_INTEGER_get_int64(&local_38,param_2);
    ERR_pop_to_mark();
    if (iVar1 == 0) {
      pcVar5 = " (Negative)";
      if (param_2[1] != 0x102) {
        pcVar5 = "";
      }
      iVar1 = BIO_printf(param_1,"\n%*s%s",(ulong)param_3,&_LC6,pcVar5);
      if (iVar1 < 1) {
LAB_001008ee:
        iVar1 = -1;
      }
      else {
        lVar4 = 0;
        if (1 < *param_2) {
          do {
            lVar3 = lVar4;
            iVar1 = BIO_printf(param_1,"%02x%c",(ulong)*(byte *)(*(long *)(param_2 + 2) + lVar3),
                               0x3a);
            if (iVar1 < 1) goto LAB_001008ee;
            lVar4 = lVar3 + 1;
          } while ((int)(lVar3 + 1) < *param_2 + -1);
          lVar4 = (long)((int)lVar3 + 1);
        }
        iVar1 = BIO_printf(param_1,"%02x",(ulong)*(byte *)(*(long *)(param_2 + 2) + lVar4));
        iVar1 = -(uint)(iVar1 < 1);
      }
    }
    else {
      puVar2 = &_LC6;
      if (param_2[1] == 0x102) {
        local_38 = -local_38;
        puVar2 = &_LC19;
      }
      iVar1 = BIO_printf(param_1," %s%ju (%s0x%jx)",puVar2,local_38,puVar2,local_38);
      iVar1 = -(uint)(iVar1 < 1);
    }
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}



int X509_print_ex(BIO *bp,X509 *x,ulong nmflag,ulong cflag)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  X509_ALGOR *alg;
  X509_NAME *pXVar4;
  undefined8 uVar5;
  X509_PUBKEY *pub;
  EVP_PKEY *pkey;
  stack_st_X509_EXTENSION *exts;
  char cVar6;
  uint uVar7;
  long in_FS_OFFSET;
  int local_64;
  ASN1_STRING *local_50;
  ASN1_OBJECT *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((uint)nmflag & 0xf0000) == 0x40000) {
    local_64 = 0xc;
    cVar6 = '\n';
    uVar7 = 0;
    uVar2 = 0;
    if ((cflag & 1) == 0) goto LAB_00100aa2;
joined_r0x001009b4:
    if ((cflag & 2) == 0) {
      uVar3 = X509_get_version(x);
      if (uVar3 < 3) {
        iVar1 = BIO_printf(bp,"%8sVersion: %ld (0x%lx)\n",&_LC6,uVar3 + 1,uVar3);
        if (iVar1 < 1) {
          uVar2 = 0;
          goto LAB_00100a19;
        }
      }
      else {
        iVar1 = BIO_printf(bp,"%8sVersion: Unknown (%ld)\n",&_LC6);
        if (iVar1 < 1) {
          uVar2 = 0;
          goto LAB_00100a19;
        }
      }
    }
    if ((cflag & 4) == 0) {
      uVar5 = X509_get0_serialNumber(x);
      iVar1 = BIO_write(bp,"        Serial Number:",0x16);
      if (((iVar1 < 1) || (iVar1 = ossl_serial_number_print(bp,uVar5,0xc), iVar1 != 0)) ||
         (iVar1 = BIO_puts(bp,"\n"), iVar1 < 1)) goto LAB_00100a7f;
    }
    if ((cflag & 8) == 0) {
      alg = (X509_ALGOR *)X509_get0_tbs_sigalg(x);
      iVar1 = BIO_puts(bp,"    ");
      if ((iVar1 < 1) || (iVar1 = X509_signature_print(bp,alg,(ASN1_STRING *)0x0), iVar1 < 1))
      goto LAB_00100a7f;
    }
    if ((cflag & 0x10) == 0) {
      iVar1 = BIO_printf(bp,"        Issuer:%c",(ulong)(uint)(int)cVar6);
      if (0 < iVar1) {
        pXVar4 = X509_get_issuer_name(x);
        iVar1 = X509_NAME_print_ex(bp,pXVar4,local_64,nmflag);
        if (((int)uVar2 <= iVar1) && (iVar1 = BIO_write(bp,&_LC5,1), 0 < iVar1)) goto LAB_001009d5;
      }
    }
    else {
LAB_001009d5:
      if ((cflag & 0x20) == 0) {
        iVar1 = BIO_write(bp,"        Validity\n",0x11);
        if ((0 < iVar1) && (iVar1 = BIO_write(bp,"            Not Before: ",0x18), 0 < iVar1)) {
          uVar5 = X509_get0_notBefore(x);
          iVar1 = ossl_asn1_time_print_ex(bp,uVar5,0);
          if ((iVar1 != 0) && (iVar1 = BIO_write(bp,"\n            Not After : ",0x19), 0 < iVar1))
          {
            uVar5 = X509_get0_notAfter(x);
            iVar1 = ossl_asn1_time_print_ex(bp,uVar5,0);
            if (iVar1 != 0) {
              iVar1 = BIO_write(bp,&_LC5,1);
              if (iVar1 < 1) {
                uVar2 = 0;
                goto LAB_00100a19;
              }
              goto LAB_001009de;
            }
          }
        }
      }
      else {
LAB_001009de:
        if ((cflag & 0x40) != 0) {
LAB_001009e7:
          if ((cflag & 0x80) == 0) {
            pub = (X509_PUBKEY *)X509_get_X509_PUBKEY(x);
            X509_PUBKEY_get0_param(&local_48,(uchar **)0x0,(int *)0x0,(X509_ALGOR **)0x0,pub);
            iVar1 = BIO_write(bp,"        Subject Public Key Info:\n",0x21);
            if ((((iVar1 < 1) ||
                 (iVar1 = BIO_printf(bp,"%12sPublic Key Algorithm: ",&_LC6), iVar1 < 1)) ||
                (iVar1 = i2a_ASN1_OBJECT(bp,local_48), iVar1 < 1)) ||
               (iVar1 = BIO_puts(bp,"\n"), iVar1 < 1)) goto LAB_00100a7f;
            pkey = (EVP_PKEY *)X509_get0_pubkey(x);
            if (pkey == (EVP_PKEY *)0x0) {
              BIO_printf(bp,"%12sUnable to load Public Key\n",&_LC6);
              ERR_print_errors(bp);
            }
            else {
              EVP_PKEY_print_public(bp,pkey,0x10,(ASN1_PCTX *)0x0);
            }
          }
          if ((cflag & 0x1000) == 0) {
            X509_get0_uids(x,&local_50,&local_48);
            if ((local_50 != (ASN1_STRING *)0x0) &&
               ((iVar1 = BIO_printf(bp,"%8sIssuer Unique ID: ",&_LC6), iVar1 < 1 ||
                (iVar1 = X509_signature_dump(bp,local_50,0xc), iVar1 == 0)))) goto LAB_00100a7f;
            if (local_48 != (ASN1_OBJECT *)0x0) {
              iVar1 = BIO_printf(bp,"%8sSubject Unique ID: ",&_LC6);
              if (iVar1 < 1) goto LAB_00100a7f;
              iVar1 = X509_signature_dump(bp,(ASN1_STRING *)local_48,0xc);
              if (iVar1 == 0) {
                uVar2 = 0;
                goto LAB_00100a19;
              }
            }
          }
          if ((cflag & 0x100) == 0) {
            exts = (stack_st_X509_EXTENSION *)X509_get0_extensions(x);
            iVar1 = X509V3_extensions_print(bp,"X509v3 extensions",exts,cflag,8);
            if (iVar1 == 0) {
              uVar2 = 0;
              goto LAB_00100a19;
            }
          }
          if ((cflag & 0x200) == 0) {
            X509_get0_signature(&local_48,&local_50,x);
            iVar1 = X509_signature_print(bp,(X509_ALGOR *)local_50,(ASN1_STRING *)local_48);
            if (iVar1 < 1) {
              uVar2 = 0;
              goto LAB_00100a19;
            }
          }
          uVar2 = 1;
          if ((cflag & 0x400) == 0) {
            iVar1 = X509_aux_print(bp,x,0);
            uVar2 = (uint)(iVar1 != 0);
          }
          goto LAB_00100a19;
        }
        iVar1 = BIO_printf(bp,"        Subject:%c",(ulong)(uint)(int)cVar6);
        if (0 < iVar1) {
          pXVar4 = X509_get_subject_name(x);
          iVar1 = X509_NAME_print_ex(bp,pXVar4,local_64,nmflag);
          if ((int)uVar2 <= iVar1) {
            iVar1 = BIO_write(bp,&_LC5,1);
            if (iVar1 < 1) {
              uVar2 = 0;
              goto LAB_00100a19;
            }
            goto LAB_001009e7;
          }
        }
      }
    }
  }
  else {
    local_64 = 0;
    cVar6 = ' ';
    uVar7 = (uint)(nmflag == 0);
    uVar2 = uVar7;
    if ((cflag & 1) != 0) goto joined_r0x001009b4;
LAB_00100aa2:
    iVar1 = BIO_write(bp,"Certificate:\n",0xd);
    if ((0 < iVar1) && (iVar1 = BIO_write(bp,"    Data:\n",10), uVar2 = uVar7, 0 < iVar1))
    goto joined_r0x001009b4;
  }
LAB_00100a7f:
  uVar2 = 0;
LAB_00100a19:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



int X509_print_ex_fp(FILE *bp,X509 *x,ulong nmflag,ulong cflag)

{
  int iVar1;
  BIO_METHOD *type;
  BIO *bp_00;
  
  type = BIO_s_file();
  bp_00 = BIO_new(type);
  if (bp_00 != (BIO *)0x0) {
    BIO_ctrl(bp_00,0x6a,0,bp);
    iVar1 = X509_print_ex(bp_00,x,nmflag,cflag);
    BIO_free(bp_00);
    return iVar1;
  }
  ERR_new();
  ERR_set_debug("crypto/x509/t_x509.c",0x26,"X509_print_ex_fp");
  ERR_set_error(0xb,0x80007,0);
  return 0;
}



int X509_print_fp(FILE *bp,X509 *x)

{
  int iVar1;
  
  iVar1 = X509_print_ex_fp(bp,x,0,0);
  return iVar1;
}



int X509_print(BIO *bp,X509 *x)

{
  int iVar1;
  
  iVar1 = X509_print_ex(bp,x,0,0);
  return iVar1;
}



uint ossl_x509_print_ex_brief(BIO *param_1,X509 *param_2,ulong param_3)

{
  int iVar1;
  uint uVar2;
  ASN1_TIME *pAVar3;
  
  if (param_2 == (X509 *)0x0) {
    iVar1 = BIO_printf(param_1,"    (no certificate)\n");
    return (uint)(0 < iVar1);
  }
  iVar1 = BIO_printf(param_1,"    certificate\n");
  if ((0 < iVar1) && (iVar1 = X509_print_ex(param_1,param_2,0x2031f,0xffffffffffffffbf), iVar1 != 0)
     ) {
    iVar1 = X509_check_issued(param_2,param_2);
    if (iVar1 == 0) {
      iVar1 = BIO_printf(param_1,"        self-issued\n");
      if (iVar1 < 1) {
        return 0;
      }
    }
    else {
      iVar1 = BIO_printf(param_1," ");
      if (iVar1 < 1) {
        return 0;
      }
      iVar1 = X509_print_ex(param_1,param_2,0x2031f,0xffffffffffffffef);
      if (iVar1 == 0) {
        return 0;
      }
    }
    iVar1 = X509_print_ex(param_1,param_2,0x2031f,0xffffffffffffffdb);
    if (iVar1 != 0) {
      pAVar3 = (ASN1_TIME *)X509_get0_notBefore(param_2);
      iVar1 = X509_cmp_current_time(pAVar3);
      if ((iVar1 < 1) || (iVar1 = BIO_printf(param_1,"        not yet valid\n"), 0 < iVar1)) {
        pAVar3 = (ASN1_TIME *)X509_get0_notAfter(param_2);
        iVar1 = X509_cmp_current_time(pAVar3);
        if ((-1 < iVar1) || (iVar1 = BIO_printf(param_1,"        no more valid\n"), 0 < iVar1)) {
          uVar2 = X509_print_ex(param_1,param_2,0x2031f,~param_3 & 0xffffffffffffdfff);
          return uVar2;
        }
      }
    }
  }
  return 0;
}



void print_certs_isra_0(BIO *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  stack_st_X509_EXTENSION *exts;
  int iVar3;
  
  if (param_2 != 0) {
    iVar3 = 0;
    iVar1 = OPENSSL_sk_num(param_2);
    if (0 < iVar1) {
      do {
        iVar1 = OPENSSL_sk_num(param_2);
        if (iVar1 <= iVar3) {
          return;
        }
        lVar2 = OPENSSL_sk_value(param_2,iVar3);
        if (lVar2 != 0) {
          iVar1 = ossl_x509_print_ex_brief(param_1,lVar2,0);
          if (iVar1 == 0) {
            return;
          }
          exts = (stack_st_X509_EXTENSION *)X509_get0_extensions(lVar2);
          iVar1 = X509V3_extensions_print(param_1,(char *)0x0,exts,0x2000,8);
          if (iVar1 == 0) {
            return;
          }
        }
        iVar3 = iVar3 + 1;
      } while( true );
    }
  }
  BIO_printf(param_1,"    (no certificates)\n");
  return;
}



int X509_STORE_CTX_print_verify_cb(int param_1,X509_STORE_CTX *param_2)

{
  uint uVar1;
  uint uVar2;
  BIO_METHOD *type;
  BIO *bio;
  char *pcVar3;
  X509_STORE_CTX *pXVar4;
  undefined8 uVar5;
  long lVar6;
  X509 *pXVar7;
  void *ptr;
  char *pcVar8;
  undefined *puVar9;
  int iVar10;
  undefined1 auVar11 [16];
  
  if (param_1 != 0) {
    return param_1;
  }
  if (param_2 == (X509_STORE_CTX *)0x0) {
    return param_1;
  }
  uVar1 = X509_STORE_CTX_get_error(param_2);
  type = BIO_s_mem();
  bio = BIO_new(type);
  if (bio == (BIO *)0x0) {
    return 0;
  }
  pcVar3 = X509_verify_cert_error_string((long)(int)uVar1);
  uVar2 = X509_STORE_CTX_get_error_depth(param_2);
  pXVar4 = X509_STORE_CTX_get0_parent_ctx(param_2);
  pcVar8 = "Certificate verification";
  if (pXVar4 != (X509_STORE_CTX *)0x0) {
    pcVar8 = "CRL path validation";
  }
  BIO_printf(bio,"%s at depth = %d error = %d (%s)\n",pcVar8,(ulong)uVar2,(ulong)uVar1,pcVar3);
  uVar5 = X509_STORE_CTX_get0_store(param_2);
  uVar5 = X509_STORE_get0_param(uVar5);
  if (uVar1 == 0x3f) {
    lVar6 = X509_VERIFY_PARAM_get0_email(uVar5);
    if (lVar6 != 0) {
      BIO_printf(bio,"Expected email address = %s\n",lVar6);
    }
  }
  else if (uVar1 == 0x40) {
    ptr = (void *)X509_VERIFY_PARAM_get1_ip_asc(uVar5);
    if (ptr != (void *)0x0) {
      BIO_printf(bio,"Expected IP address = %s\n",ptr);
    }
    CRYPTO_free(ptr);
  }
  else {
    if (uVar1 != 0x3e) {
      BIO_printf(bio,"Failure for:\n");
      pXVar7 = X509_STORE_CTX_get_current_cert(param_2);
      ossl_x509_print_ex_brief(bio,pXVar7,0x100);
      if ((uVar1 == 2) ||
         ((uVar1 - 0x12 < 0x35 && ((0x10000000008207U >> ((ulong)(uVar1 - 0x12) & 0x3f) & 1) != 0)))
         ) {
        BIO_printf(bio,"Non-trusted certs:\n");
        uVar5 = X509_STORE_CTX_get0_untrusted(param_2);
        print_certs_isra_0(bio,uVar5);
        BIO_printf(bio,"Certs in trust store:\n");
        lVar6 = X509_STORE_CTX_get0_store(param_2);
        if (lVar6 == 0) {
          BIO_printf(bio,"    (no trusted store)\n");
        }
        else {
          uVar5 = X509_STORE_get1_all_certs(lVar6);
          print_certs_isra_0(bio,uVar5);
          OSSL_STACK_OF_X509_free(uVar5);
        }
      }
      goto LAB_001013db;
    }
    BIO_printf(bio,"Expected hostname(s) = ");
    auVar11 = X509_VERIFY_PARAM_get0_host(uVar5,0);
    lVar6 = auVar11._0_8_;
    if (lVar6 != 0) {
      puVar9 = &_LC6;
      iVar10 = 1;
      do {
        BIO_printf(bio,"%s%s",puVar9,lVar6);
        lVar6 = X509_VERIFY_PARAM_get0_host(uVar5,iVar10);
        auVar11._8_8_ = &_LC12;
        auVar11._0_8_ = lVar6;
        puVar9 = &_LC12;
        iVar10 = iVar10 + 1;
      } while (lVar6 != 0);
    }
    BIO_printf(bio,"\n",auVar11._8_8_,auVar11._0_8_);
  }
  BIO_printf(bio,"Failure for:\n");
  pXVar7 = X509_STORE_CTX_get_current_cert(param_2);
  ossl_x509_print_ex_brief(bio,pXVar7,0x100);
LAB_001013db:
  ERR_new();
  ERR_set_debug("crypto/x509/t_x509.c",499,"X509_STORE_CTX_print_verify_cb");
  ERR_set_error(0xb,0x8b,0);
  ERR_add_error_mem_bio(&_LC5,bio);
  BIO_free(bio);
  return 0;
}


