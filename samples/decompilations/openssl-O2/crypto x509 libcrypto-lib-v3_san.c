
undefined8 copy_email(byte *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int lastpos;
  X509_NAME *name;
  GENERAL_NAME *a;
  X509_NAME_ENTRY *ne;
  ASN1_STRING *pAVar2;
  
  if (param_1 == (byte *)0x0) {
LAB_001001b0:
    ERR_new();
    ERR_set_debug("crypto/x509/v3_san.c",0x1b0,"copy_email");
    ERR_set_error(0x22,0x7d,0);
  }
  else {
    if ((*param_1 & 1) != 0) {
      return 1;
    }
    if (*(X509 **)(param_1 + 0x10) == (X509 *)0x0) {
      if (*(long *)(param_1 + 0x18) == 0) goto LAB_001001b0;
      name = (X509_NAME *)X509_REQ_get_subject_name();
    }
    else {
      name = X509_get_subject_name(*(X509 **)(param_1 + 0x10));
    }
    lastpos = -1;
    do {
      lastpos = X509_NAME_get_index_by_NID(name,0x30,lastpos);
      if (lastpos < 0) {
        return 1;
      }
      ne = X509_NAME_get_entry(name,lastpos);
      pAVar2 = X509_NAME_ENTRY_get_data(ne);
      pAVar2 = ASN1_STRING_dup(pAVar2);
      if (param_3 == 0) {
        if (pAVar2 != (ASN1_STRING *)0x0) goto LAB_00100051;
LAB_001000e0:
        ERR_new();
        a = (GENERAL_NAME *)0x0;
        ERR_set_debug("crypto/x509/v3_san.c",0x1c3,"copy_email");
        ERR_set_error(0x22,0x8000d,0);
        goto LAB_00100112;
      }
      X509_NAME_delete_entry(name,lastpos);
      X509_NAME_ENTRY_free(ne);
      lastpos = lastpos + -1;
      if (pAVar2 == (ASN1_STRING *)0x0) goto LAB_001000e0;
LAB_00100051:
      a = GENERAL_NAME_new();
      if (a == (GENERAL_NAME *)0x0) goto LAB_001000e0;
      (a->d).rfc822Name = pAVar2;
      a->type = 1;
      iVar1 = OPENSSL_sk_push(param_2,a);
    } while (iVar1 != 0);
    ERR_new();
    pAVar2 = (ASN1_IA5STRING *)0x0;
    ERR_set_debug("crypto/x509/v3_san.c",0x1ca,"copy_email");
    ERR_set_error(0x22,0x8000f,0);
LAB_00100112:
    GENERAL_NAME_free(a);
    ASN1_IA5STRING_free(pAVar2);
  }
  return 0;
}



stack_st_CONF_VALUE *
i2v_GENERAL_NAME(X509V3_EXT_METHOD *method,GENERAL_NAME *gen,stack_st_CONF_VALUE *ret)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  ASN1_STRING *pAVar4;
  long in_FS_OFFSET;
  stack_st_CONF_VALUE *local_260;
  char local_258 [256];
  char local_158 [312];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_260 = ret;
  switch(gen->type) {
  case 0:
    iVar2 = OBJ_obj2nid(((gen->d).otherName)->type_id);
    if (iVar2 == 0x4b9) {
      pAVar4 = ((gen->d).ediPartyName)->partyName;
      if (pAVar4->length == 0xc) {
        piVar1 = (int *)pAVar4->data;
        iVar2 = x509v3_add_len_value_uchar
                          ("othername: XmppAddr",*(undefined8 *)(piVar1 + 2),(long)*piVar1,
                           &local_260);
        ret = local_260;
        if (iVar2 == 0) {
          ret = (stack_st_CONF_VALUE *)0x0;
        }
        break;
      }
    }
    else if (iVar2 < 0x4ba) {
      if (iVar2 == 0x289) {
        pAVar4 = ((gen->d).ediPartyName)->partyName;
        if (pAVar4->length == 0xc) {
          piVar1 = (int *)pAVar4->data;
          iVar2 = x509v3_add_len_value_uchar
                            ("othername: UPN",*(undefined8 *)(piVar1 + 2),(long)*piVar1,&local_260);
          ret = local_260;
          if (iVar2 == 0) {
            ret = (stack_st_CONF_VALUE *)0x0;
          }
          break;
        }
      }
      else {
        if (iVar2 != 0x4b8) goto LAB_001004d0;
        pAVar4 = ((gen->d).ediPartyName)->partyName;
        if (pAVar4->length == 0xc) {
          piVar1 = (int *)pAVar4->data;
          iVar2 = x509v3_add_len_value_uchar
                            ("othername: SmtpUTF8Mailbox",*(undefined8 *)(piVar1 + 2),(long)*piVar1,
                             &local_260);
          ret = local_260;
          if (iVar2 == 0) {
            ret = (stack_st_CONF_VALUE *)0x0;
          }
          break;
        }
      }
    }
    else if (iVar2 == 0x4ba) {
      pAVar4 = ((gen->d).ediPartyName)->partyName;
      if (pAVar4->length == 0x16) {
        piVar1 = (int *)pAVar4->data;
        iVar2 = x509v3_add_len_value_uchar
                          ("othername: SRVName",*(undefined8 *)(piVar1 + 2),(long)*piVar1,&local_260
                          );
        ret = local_260;
        if (iVar2 == 0) {
          ret = (stack_st_CONF_VALUE *)0x0;
        }
        break;
      }
    }
    else {
      if (iVar2 != 0x4bb) {
LAB_001004d0:
        iVar2 = OBJ_obj2txt(local_258,0x100,((gen->d).otherName)->type_id,0);
        if (iVar2 < 1) {
          OPENSSL_strlcpy(local_158,"othername",300);
        }
        else {
          BIO_snprintf(local_158,300,"othername: %s",local_258);
        }
        pAVar4 = ((gen->d).ediPartyName)->partyName;
        iVar2 = pAVar4->length;
        if (iVar2 == 0x16) {
          iVar2 = x509v3_add_len_value_uchar
                            (local_158,*(undefined8 *)((long)pAVar4->data + 8),
                             (long)*(int *)pAVar4->data,&local_260);
          ret = local_260;
          if (iVar2 != 0) break;
          pAVar4 = (ASN1_STRING *)((gen->d).otherName)->value;
          iVar2 = pAVar4->length;
        }
        if (((iVar2 != 0xc) ||
            (iVar2 = x509v3_add_len_value_uchar
                               (local_158,*(undefined8 *)((long)pAVar4->data + 8),
                                (long)*(int *)pAVar4->data,&local_260), ret = local_260, iVar2 == 0)
            ) && (iVar2 = X509V3_add_value(local_158,"<unsupported>",&local_260), ret = local_260,
                 iVar2 == 0)) {
          ret = (stack_st_CONF_VALUE *)0x0;
        }
        break;
      }
      pAVar4 = ((gen->d).ediPartyName)->partyName;
      if (pAVar4->length == 0xc) {
        piVar1 = (int *)pAVar4->data;
        iVar2 = x509v3_add_len_value_uchar
                          ("othername: NAIRealm",*(undefined8 *)(piVar1 + 2),(long)*piVar1,
                           &local_260);
        ret = local_260;
        if (iVar2 == 0) {
          ret = (stack_st_CONF_VALUE *)0x0;
        }
        break;
      }
    }
    goto LAB_001002de;
  case 1:
    iVar2 = x509v3_add_len_value_uchar
                      ("email",((gen->d).rfc822Name)->data,(long)((gen->d).rfc822Name)->length,
                       &local_260);
    ret = local_260;
    if (iVar2 == 0) {
      ret = (stack_st_CONF_VALUE *)0x0;
    }
    break;
  case 2:
    iVar2 = x509v3_add_len_value_uchar
                      (&_LC12,((gen->d).rfc822Name)->data,(long)((gen->d).rfc822Name)->length,
                       &local_260);
    ret = local_260;
    if (iVar2 == 0) {
      ret = (stack_st_CONF_VALUE *)0x0;
    }
    break;
  case 3:
    iVar2 = X509V3_add_value("X400Name","<unsupported>",&local_260);
    ret = local_260;
    if (iVar2 == 0) {
      ret = (stack_st_CONF_VALUE *)0x0;
    }
    break;
  case 4:
    pcVar3 = X509_NAME_oneline((gen->d).directoryName,local_258,0x100);
    if (pcVar3 != (char *)0x0) {
      iVar2 = X509V3_add_value("DirName",local_258,&local_260);
      ret = local_260;
      if (iVar2 == 0) {
        ret = (stack_st_CONF_VALUE *)0x0;
      }
      break;
    }
    goto LAB_001002de;
  case 5:
    iVar2 = X509V3_add_value("EdiPartyName","<unsupported>",&local_260);
    ret = local_260;
    if (iVar2 == 0) {
      ret = (stack_st_CONF_VALUE *)0x0;
    }
    break;
  case 6:
    iVar2 = x509v3_add_len_value_uchar
                      (&_LC13,((gen->d).rfc822Name)->data,(long)((gen->d).rfc822Name)->length,
                       &local_260);
    ret = local_260;
    if (iVar2 == 0) {
      ret = (stack_st_CONF_VALUE *)0x0;
    }
    break;
  case 7:
    pcVar3 = (char *)ossl_ipaddr_to_asc(((gen->d).rfc822Name)->data,((gen->d).rfc822Name)->length);
    if ((pcVar3 == (char *)0x0) ||
       (iVar2 = X509V3_add_value("IP Address",pcVar3,&local_260), iVar2 == 0)) {
      local_260 = (stack_st_CONF_VALUE *)0x0;
    }
    CRYPTO_free(pcVar3);
    ret = local_260;
    break;
  case 8:
    i2t_ASN1_OBJECT(local_258,0x100,(gen->d).registeredID);
    iVar2 = X509V3_add_value("Registered ID",local_258,&local_260);
    ret = local_260;
    if (iVar2 != 0) break;
LAB_001002de:
    ret = (stack_st_CONF_VALUE *)0x0;
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return ret;
}



stack_st_CONF_VALUE *
i2v_GENERAL_NAMES(X509V3_EXT_METHOD *method,GENERAL_NAMES *gen,stack_st_CONF_VALUE *extlist)

{
  int iVar1;
  GENERAL_NAME *gen_00;
  stack_st_CONF_VALUE *psVar2;
  stack_st_CONF_VALUE *psVar3;
  int iVar4;
  
  iVar4 = 0;
  psVar3 = extlist;
  while( true ) {
    iVar1 = OPENSSL_sk_num(gen);
    if (iVar1 <= iVar4) {
      if (psVar3 != (stack_st_CONF_VALUE *)0x0) {
        return psVar3;
      }
      psVar3 = (stack_st_CONF_VALUE *)OPENSSL_sk_new_null();
      return psVar3;
    }
    gen_00 = (GENERAL_NAME *)OPENSSL_sk_value(gen,iVar4);
    psVar2 = i2v_GENERAL_NAME(method,gen_00,psVar3);
    if (psVar2 == (stack_st_CONF_VALUE *)0x0) break;
    iVar4 = iVar4 + 1;
    psVar3 = psVar2;
  }
  if (extlist == (stack_st_CONF_VALUE *)0x0) {
    OPENSSL_sk_pop_free(psVar3,&X509V3_conf_free);
  }
  return (stack_st_CONF_VALUE *)0x0;
}



int GENERAL_NAME_print(BIO *out,GENERAL_NAME *gen)

{
  ASN1_STRING *pAVar1;
  uint *puVar2;
  int iVar3;
  void *ptr;
  char *format;
  
  switch(gen->type) {
  case 0:
    iVar3 = OBJ_obj2nid(((gen->d).otherName)->type_id);
    if (iVar3 == 0x4ba) {
      pAVar1 = ((gen->d).ediPartyName)->partyName;
      if (pAVar1->length == 0x16) {
        puVar2 = (uint *)pAVar1->data;
        BIO_printf(out,"othername:SRVName:%.*s",(ulong)*puVar2,*(undefined8 *)(puVar2 + 2));
        return 1;
      }
    }
    else {
      pAVar1 = ((gen->d).ediPartyName)->partyName;
      if (pAVar1->length == 0xc) {
        if (iVar3 == 0x4b9) {
          BIO_printf(out,"othername:XmppAddr:%.*s",(ulong)*(uint *)pAVar1->data,
                     *(undefined8 *)((long)pAVar1->data + 8));
          return 1;
        }
        if (iVar3 < 0x4ba) {
          if (iVar3 == 0x289) {
            BIO_printf(out,"othername:UPN:%.*s",(ulong)*(uint *)pAVar1->data,
                       *(undefined8 *)((long)pAVar1->data + 8));
            return 1;
          }
          if (iVar3 == 0x4b8) {
            BIO_printf(out,"othername:SmtpUTF8Mailbox:%.*s",(ulong)*(uint *)pAVar1->data,
                       *(undefined8 *)((long)pAVar1->data + 8));
            return 1;
          }
        }
        else if (iVar3 == 0x4bb) {
          BIO_printf(out,"othername:NAIRealm:%.*s",(ulong)*(uint *)pAVar1->data,
                     *(undefined8 *)((long)pAVar1->data + 8));
          return 1;
        }
      }
    }
    BIO_printf(out,"othername:<unsupported>");
    break;
  case 1:
    format = "email:";
    goto LAB_00100817;
  case 2:
    format = "DNS:";
    goto LAB_00100817;
  case 3:
    BIO_printf(out,"X400Name:<unsupported>");
    break;
  case 4:
    BIO_printf(out,"DirName:");
    X509_NAME_print_ex(out,(gen->d).directoryName,0,0x82031f);
    break;
  case 5:
    BIO_printf(out,"EdiPartyName:<unsupported>");
    break;
  case 6:
    format = "URI:";
LAB_00100817:
    BIO_printf(out,format);
    ASN1_STRING_print(out,(ASN1_STRING *)(gen->d).otherName);
    break;
  case 7:
    ptr = (void *)ossl_ipaddr_to_asc(((gen->d).rfc822Name)->data,((gen->d).rfc822Name)->length);
    if (ptr == (void *)0x0) {
      return 0;
    }
    BIO_printf(out,"IP Address:%s",ptr);
    CRYPTO_free(ptr);
    break;
  case 8:
    BIO_printf(out,"Registered ID:");
    i2a_ASN1_OBJECT(out,(gen->d).registeredID);
    break;
  default:
    return 1;
  }
  return 1;
}



GENERAL_NAME *
a2i_GENERAL_NAME(GENERAL_NAME *out,X509V3_EXT_METHOD *method,X509V3_CTX *ctx,int gen_type,
                char *value,int is_nc)

{
  int iVar1;
  ASN1_IA5STRING *str;
  size_t sVar2;
  X509_NAME *nm;
  stack_st_CONF_VALUE *dn_sk;
  ASN1_OCTET_STRING *pAVar3;
  ASN1_OBJECT *pAVar4;
  char *pcVar5;
  OTHERNAME *pOVar6;
  ASN1_TYPE *pAVar7;
  GENERAL_NAME *a;
  
  if (value == (char *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/x509/v3_san.c",0x203,"a2i_GENERAL_NAME");
    ERR_set_error(0x22,0x7c,0);
    return (GENERAL_NAME *)0x0;
  }
  a = out;
  if ((out == (GENERAL_NAME *)0x0) && (a = GENERAL_NAME_new(), a == (GENERAL_NAME *)0x0)) {
    ERR_new();
    ERR_set_debug("crypto/x509/v3_san.c",0x20c,"a2i_GENERAL_NAME");
    ERR_set_error(0x22,0x8000d,0);
    return (GENERAL_NAME *)0x0;
  }
  switch(gen_type) {
  case 0:
    pcVar5 = strchr(value,0x3b);
    if (pcVar5 != (char *)0x0) {
      pOVar6 = OTHERNAME_new();
      (a->d).otherName = pOVar6;
      if (pOVar6 != (OTHERNAME *)0x0) {
        ASN1_TYPE_free(pOVar6->value);
        pOVar6 = (a->d).otherName;
        pAVar7 = ASN1_generate_v3(pcVar5 + 1,ctx);
        pOVar6->value = pAVar7;
        if (pAVar7 == (ASN1_TYPE *)0x0) {
          pOVar6 = (a->d).otherName;
        }
        else {
          pcVar5 = (char *)CRYPTO_strndup(value,(long)((int)pcVar5 - (int)value),
                                          "crypto/x509/v3_san.c",0x290);
          if (pcVar5 == (char *)0x0) {
            pOVar6 = (a->d).otherName;
          }
          else {
            pOVar6 = (a->d).otherName;
            pAVar4 = OBJ_txt2obj(pcVar5,0);
            pOVar6->type_id = pAVar4;
            CRYPTO_free(pcVar5);
            pOVar6 = (a->d).otherName;
            if (pOVar6->type_id != (ASN1_OBJECT *)0x0) goto LAB_001009f2;
          }
        }
        OTHERNAME_free(pOVar6);
        (a->d).ptr = (char *)0x0;
      }
    }
    ERR_new();
    ERR_set_debug("crypto/x509/v3_san.c",0x239,"a2i_GENERAL_NAME");
    ERR_set_error(0x22,0x93,0);
    break;
  case 1:
  case 2:
  case 6:
    str = ASN1_IA5STRING_new();
    (a->d).rfc822Name = str;
    if (str != (ASN1_IA5STRING *)0x0) {
      sVar2 = strlen(value);
      iVar1 = ASN1_STRING_set(str,value,(int)sVar2);
      if (iVar1 != 0) goto LAB_001009f2;
      str = (a->d).rfc822Name;
    }
    ASN1_IA5STRING_free(str);
    (a->d).ptr = (char *)0x0;
    ERR_new();
    ERR_set_debug("crypto/x509/v3_san.c",0x248,"a2i_GENERAL_NAME");
    ERR_set_error(0x22,0x8000d,0);
    break;
  default:
    ERR_new();
    ERR_set_debug("crypto/x509/v3_san.c",0x23e,"a2i_GENERAL_NAME");
    ERR_set_error(0x22,0xa7,0);
    break;
  case 4:
    nm = X509_NAME_new();
    if (nm == (X509_NAME *)0x0) {
LAB_00100c9b:
      dn_sk = (stack_st_CONF_VALUE *)0x0;
    }
    else {
      dn_sk = X509V3_get_section(ctx,value);
      if (dn_sk == (stack_st_CONF_VALUE *)0x0) {
        ERR_new();
        ERR_set_debug("crypto/x509/v3_san.c",0x2a9,"do_dirname");
        ERR_set_error(0x22,0x96,"section=%s",value);
        goto LAB_00100c9b;
      }
      iVar1 = X509V3_NAME_from_section(nm,dn_sk,0x1001);
      if (iVar1 != 0) {
        (a->d).directoryName = nm;
        X509V3_section_free(ctx,dn_sk);
        goto LAB_001009f2;
      }
    }
    X509_NAME_free(nm);
    X509V3_section_free(ctx,dn_sk);
    ERR_new();
    ERR_set_debug("crypto/x509/v3_san.c",0x232,"a2i_GENERAL_NAME");
    ERR_set_error(0x22,0x95,0);
    break;
  case 7:
    if (is_nc == 0) {
      pAVar3 = a2i_IPADDRESS(value);
    }
    else {
      pAVar3 = a2i_IPADDRESS_NC(value);
    }
    (a->d).iPAddress = pAVar3;
    if (pAVar3 != (ASN1_OCTET_STRING *)0x0) {
LAB_001009f2:
      a->type = gen_type;
      return a;
    }
    ERR_new();
    ERR_set_debug("crypto/x509/v3_san.c",0x22a,"a2i_GENERAL_NAME");
    ERR_set_error(0x22,0x76,"value=%s",value);
    break;
  case 8:
    pAVar4 = OBJ_txt2obj(value,0);
    if (pAVar4 != (ASN1_OBJECT *)0x0) {
      (a->d).registeredID = pAVar4;
      goto LAB_001009f2;
    }
    ERR_new();
    ERR_set_debug("crypto/x509/v3_san.c",0x21c,"a2i_GENERAL_NAME");
    ERR_set_error(0x22,0x77,"value=%s",value);
  }
  if (out == (GENERAL_NAME *)0x0) {
    GENERAL_NAME_free(a);
  }
  return (GENERAL_NAME *)0x0;
}



GENERAL_NAME *
v2i_GENERAL_NAME_ex(GENERAL_NAME *out,X509V3_EXT_METHOD *method,X509V3_CTX *ctx,CONF_VALUE *cnf,
                   int is_nc)

{
  char *value;
  char *pcVar1;
  int iVar2;
  int iVar3;
  GENERAL_NAME *pGVar4;
  
  value = cnf->value;
  pcVar1 = cnf->name;
  if (value == (char *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/x509/v3_san.c",0x263,"v2i_GENERAL_NAME_ex");
    ERR_set_error(0x22,0x7c,0);
    return (GENERAL_NAME *)0x0;
  }
  iVar2 = ossl_v3_name_cmp(pcVar1,"email");
  if (iVar2 == 0) {
    iVar2 = 1;
  }
  else {
    iVar3 = ossl_v3_name_cmp(pcVar1,&_LC13);
    iVar2 = 6;
    if (iVar3 != 0) {
      iVar3 = ossl_v3_name_cmp(pcVar1,&_LC12);
      iVar2 = 2;
      if (iVar3 != 0) {
        iVar3 = ossl_v3_name_cmp(pcVar1,&_LC33);
        iVar2 = 8;
        if (iVar3 != 0) {
          iVar3 = ossl_v3_name_cmp(pcVar1,&_LC34);
          iVar2 = 7;
          if (iVar3 != 0) {
            iVar3 = ossl_v3_name_cmp(pcVar1,"dirName");
            iVar2 = 4;
            if ((iVar3 != 0) && (iVar2 = ossl_v3_name_cmp(pcVar1,"otherName"), iVar2 != 0)) {
              ERR_new();
              ERR_set_debug("crypto/x509/v3_san.c",0x276,"v2i_GENERAL_NAME_ex");
              ERR_set_error(0x22,0x75,"name=%s",pcVar1);
              return (GENERAL_NAME *)0x0;
            }
          }
        }
      }
    }
  }
  pGVar4 = a2i_GENERAL_NAME(out,method,ctx,iVar2,value,is_nc);
  return pGVar4;
}



GENERAL_NAME * v2i_GENERAL_NAME(X509V3_EXT_METHOD *method,X509V3_CTX *ctx,CONF_VALUE *cnf)

{
  GENERAL_NAME *pGVar1;
  
  pGVar1 = v2i_GENERAL_NAME_ex((GENERAL_NAME *)0x0,method,ctx,cnf,0);
  return pGVar1;
}



long v2i_issuer_alt(X509V3_EXT_METHOD *param_1,X509V3_CTX *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  GENERAL_NAME *pGVar5;
  CONF_VALUE *cnf;
  X509_EXTENSION *ext;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  void *local_48;
  
  iVar1 = OPENSSL_sk_num(param_3);
  lVar4 = OPENSSL_sk_new_reserve(0,iVar1);
  if (lVar4 == 0) {
    ERR_new();
    ERR_set_debug("crypto/x509/v3_san.c",0x136,"v2i_issuer_alt");
    ERR_set_error(0x22,0x8000f,0);
  }
  else {
    iVar7 = 0;
    if (iVar1 < 1) {
      return lVar4;
    }
    while( true ) {
      cnf = (CONF_VALUE *)OPENSSL_sk_value(param_3,iVar7);
      iVar2 = ossl_v3_name_cmp(cnf->name,"issuer");
      if (((iVar2 != 0) || (cnf->value == (char *)0x0)) ||
         (iVar2 = strcmp(cnf->value,"copy"), iVar2 != 0)) break;
      if (param_2 == (X509V3_CTX *)0x0) {
LAB_001011a0:
        ERR_new();
        ERR_set_debug("crypto/x509/v3_san.c",0x15a,"copy_issuer");
        ERR_set_error(0x22,0x7f,0);
LAB_001011d0:
        local_48 = (void *)0x0;
LAB_001011d9:
        OPENSSL_sk_free(local_48);
        goto LAB_001011e3;
      }
      if ((param_2->flags & 1U) == 0) {
        if (param_2->issuer_cert == (X509 *)0x0) goto LAB_001011a0;
        iVar2 = X509_get_ext_by_NID(param_2->issuer_cert,0x55,-1);
        if (iVar2 < 0) goto LAB_00101084;
        ext = X509_get_ext(param_2->issuer_cert,iVar2);
        if ((ext == (X509_EXTENSION *)0x0) ||
           (local_48 = X509V3_EXT_d2i(ext), local_48 == (void *)0x0)) {
          ERR_new();
          ERR_set_debug("crypto/x509/v3_san.c",0x162,"copy_issuer");
          ERR_set_error(0x22,0x7e,0);
          goto LAB_001011d0;
        }
        iVar2 = OPENSSL_sk_num(local_48);
        iVar3 = OPENSSL_sk_reserve(lVar4,iVar2);
        if (iVar3 == 0) {
          ERR_new();
          ERR_set_debug("crypto/x509/v3_san.c",0x168,"copy_issuer");
          ERR_set_error(0x22,0x8000f,0);
          goto LAB_001011d9;
        }
        iVar3 = 0;
        if (0 < iVar2) {
          do {
            iVar8 = iVar3 + 1;
            uVar6 = OPENSSL_sk_value(local_48,iVar3);
            OPENSSL_sk_push(lVar4,uVar6);
            iVar3 = iVar8;
          } while (iVar2 != iVar8);
        }
        iVar7 = iVar7 + 1;
        OPENSSL_sk_free(local_48);
        if (iVar1 == iVar7) {
          return lVar4;
        }
      }
      else {
LAB_00101084:
        iVar7 = iVar7 + 1;
        if (iVar1 == iVar7) {
          return lVar4;
        }
      }
    }
    pGVar5 = v2i_GENERAL_NAME(param_1,param_2,cnf);
    if (pGVar5 != (GENERAL_NAME *)0x0) {
      OPENSSL_sk_push(lVar4,pGVar5);
      goto LAB_00101084;
    }
LAB_001011e3:
    OPENSSL_sk_pop_free(lVar4,GENERAL_NAME_free);
  }
  return 0;
}



long v2i_subject_alt(X509V3_EXT_METHOD *param_1,X509V3_CTX *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  GENERAL_NAME *pGVar4;
  CONF_VALUE *cnf;
  undefined8 extraout_RDX;
  undefined8 uVar5;
  int iVar6;
  
  iVar1 = OPENSSL_sk_num(param_3);
  lVar3 = OPENSSL_sk_new_reserve(0,iVar1);
  if (lVar3 == 0) {
    ERR_new();
    ERR_set_debug("crypto/x509/v3_san.c",0x185,"v2i_subject_alt");
    ERR_set_error(0x22,0x8000f,0);
LAB_001013af:
    lVar3 = 0;
  }
  else {
    iVar6 = 0;
    if (0 < iVar1) {
      do {
        cnf = (CONF_VALUE *)OPENSSL_sk_value(param_3,iVar6);
        iVar2 = ossl_v3_name_cmp(cnf->name,"email");
        uVar5 = extraout_RDX;
        if ((iVar2 == 0) && (cnf->value != (char *)0x0)) {
          iVar2 = strcmp(cnf->value,"copy");
          uVar5 = 0;
          if (iVar2 != 0) goto LAB_001012f8;
          iVar2 = copy_email(param_2,lVar3);
joined_r0x00101398:
          if (iVar2 == 0) {
LAB_001013a0:
            OPENSSL_sk_pop_free(lVar3,GENERAL_NAME_free);
            goto LAB_001013af;
          }
        }
        else {
LAB_001012f8:
          iVar2 = ossl_v3_name_cmp(cnf->name,"email",uVar5);
          if (((iVar2 == 0) && (cnf->value != (char *)0x0)) &&
             (iVar2 = strcmp(cnf->value,"move"), iVar2 == 0)) {
            iVar2 = copy_email(param_2,lVar3,1);
            goto joined_r0x00101398;
          }
          pGVar4 = v2i_GENERAL_NAME(param_1,param_2,cnf);
          if (pGVar4 == (GENERAL_NAME *)0x0) goto LAB_001013a0;
          OPENSSL_sk_push(lVar3,pGVar4);
        }
        iVar6 = iVar6 + 1;
      } while (iVar1 != iVar6);
    }
  }
  return lVar3;
}



GENERAL_NAMES *
v2i_GENERAL_NAMES(X509V3_EXT_METHOD *method,X509V3_CTX *ctx,stack_st_CONF_VALUE *nval)

{
  int iVar1;
  GENERAL_NAMES *pGVar2;
  CONF_VALUE *cnf;
  GENERAL_NAME *pGVar3;
  int iVar4;
  
  iVar1 = OPENSSL_sk_num(nval);
  pGVar2 = (GENERAL_NAMES *)OPENSSL_sk_new_reserve(0,iVar1);
  if (pGVar2 == (GENERAL_NAMES *)0x0) {
    ERR_new();
    pGVar2 = (GENERAL_NAMES *)0x0;
    ERR_set_debug("crypto/x509/v3_san.c",0x1e4,"v2i_GENERAL_NAMES");
    ERR_set_error(0x22,0x8000f,0);
  }
  else {
    iVar4 = 0;
    if (0 < iVar1) {
      do {
        cnf = (CONF_VALUE *)OPENSSL_sk_value(nval,iVar4);
        pGVar3 = v2i_GENERAL_NAME(method,ctx,cnf);
        if (pGVar3 == (GENERAL_NAME *)0x0) {
          OPENSSL_sk_pop_free(pGVar2,GENERAL_NAME_free);
          return (GENERAL_NAMES *)0x0;
        }
        iVar4 = iVar4 + 1;
        OPENSSL_sk_push(pGVar2,pGVar3);
      } while (iVar1 != iVar4);
    }
  }
  return pGVar2;
}


