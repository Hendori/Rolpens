
int X509_REQ_print_ex(BIO *bp,X509_REQ *x,ulong nmflag,ulong cflag)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  X509_NAME *nm;
  long lVar6;
  X509_PUBKEY *pub;
  EVP_PKEY *pkey;
  stack_st_X509_EXTENSION *psVar7;
  X509_EXTENSION *ex;
  ASN1_OBJECT *pAVar8;
  ASN1_OCTET_STRING *v;
  X509_ATTRIBUTE *attr;
  ASN1_TYPE *pAVar9;
  char *pcVar10;
  char cVar11;
  uint uVar12;
  long in_FS_OFFSET;
  ASN1_STRING *local_70;
  uint local_60;
  int local_5c;
  X509_ALGOR *local_50;
  ASN1_OBJECT *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((uint)nmflag & 0xf0000) == 0x40000) {
    iVar3 = 0xc;
    cVar11 = '\n';
    uVar12 = 0;
    uVar1 = 0;
    if ((cflag & 1) == 0) goto LAB_0010018a;
LAB_00100062:
    if ((cflag & 2) != 0) goto LAB_0010006d;
LAB_001001d0:
    lVar6 = X509_REQ_get_version(x);
    if (lVar6 == 0) {
      iVar2 = BIO_printf(bp,"%8sVersion: %ld (0x%lx)\n",&_LC1,1,0);
    }
    else {
      iVar2 = BIO_printf(bp,"%8sVersion: Unknown (%ld)\n",&_LC1);
    }
    if (0 < iVar2) goto LAB_0010006d;
  }
  else {
    cVar11 = ' ';
    uVar12 = (uint)(nmflag == 0);
    iVar3 = 0;
    uVar1 = uVar12;
    if ((cflag & 1) != 0) goto LAB_00100062;
LAB_0010018a:
    uVar12 = uVar1;
    iVar2 = BIO_write(bp,"Certificate Request:\n",0x15);
    if ((iVar2 < 1) || (iVar2 = BIO_write(bp,"    Data:\n",10), iVar2 < 1)) goto LAB_00100118;
    if ((cflag & 2) == 0) goto LAB_001001d0;
LAB_0010006d:
    if ((cflag & 0x40) == 0) {
      iVar2 = BIO_printf(bp,"        Subject:%c",(ulong)(uint)(int)cVar11);
      if (0 < iVar2) {
        nm = (X509_NAME *)X509_REQ_get_subject_name(x);
        iVar3 = X509_NAME_print_ex(bp,nm,iVar3,nmflag);
        if (((int)uVar12 <= iVar3) && (iVar3 = BIO_write(bp,&_LC7,1), 0 < iVar3)) goto LAB_00100074;
      }
    }
    else {
LAB_00100074:
      if ((cflag & 0x80) != 0) goto LAB_0010007f;
      iVar3 = BIO_write(bp,"        Subject Public Key Info:\n",0x21);
      if ((0 < iVar3) && (iVar3 = BIO_printf(bp,"%12sPublic Key Algorithm: ",&_LC1), 0 < iVar3)) {
        pub = (X509_PUBKEY *)X509_REQ_get_X509_PUBKEY(x);
        X509_PUBKEY_get0_param(&local_48,(uchar **)0x0,(int *)0x0,(X509_ALGOR **)0x0,pub);
        iVar3 = i2a_ASN1_OBJECT(bp,local_48);
        if ((0 < iVar3) && (iVar3 = BIO_puts(bp,"\n"), 0 < iVar3)) {
          pkey = (EVP_PKEY *)X509_REQ_get0_pubkey(x);
          if (pkey == (EVP_PKEY *)0x0) {
            iVar3 = BIO_printf(bp,"%12sUnable to load Public Key\n",&_LC1);
            if (0 < iVar3) {
              ERR_print_errors(bp);
              goto LAB_0010007f;
            }
          }
          else {
            iVar3 = EVP_PKEY_print_public(bp,pkey,0x10,(ASN1_PCTX *)0x0);
            if (0 < iVar3) {
LAB_0010007f:
              if ((cflag & 0x800) == 0) {
                iVar3 = BIO_printf(bp,"%8sAttributes:\n",&_LC1);
                if (iVar3 < 1) goto LAB_00100118;
                iVar2 = 0;
                iVar3 = X509_REQ_get_attr_count(x);
                if (iVar3 == 0) {
                  iVar3 = BIO_printf(bp,"%12s(none)\n",&_LC1);
                  if (iVar3 < 1) goto LAB_00100118;
                }
                else {
                  for (; iVar3 = X509_REQ_get_attr_count(x), iVar2 < iVar3; iVar2 = iVar2 + 1) {
                    attr = X509_REQ_get_attr(x,iVar2);
                    pAVar8 = X509_ATTRIBUTE_get0_object(attr);
                    iVar3 = OBJ_obj2nid(pAVar8);
                    iVar3 = X509_REQ_extension_nid(iVar3);
                    if (iVar3 == 0) {
                      iVar3 = BIO_printf(bp,"%12s",&_LC1);
                      if (iVar3 < 1) goto LAB_00100118;
                      iVar4 = i2a_ASN1_OBJECT(bp,pAVar8);
                      iVar3 = 0;
                      if (iVar4 < 1) {
                        local_60 = 0;
                        iVar4 = 0x19 - iVar4;
                        local_5c = 1;
                        local_70 = (ASN1_STRING *)0x0;
                        goto LAB_00100585;
                      }
                      local_5c = X509_ATTRIBUTE_count(attr);
                      if (local_5c == 0) {
                        ERR_new();
                        ERR_set_debug("crypto/x509/t_req.c",0x83,"X509_REQ_print_ex");
                        ERR_set_error(0xb,0x8a,0);
                        goto LAB_00100148;
                      }
                      do {
                        pAVar9 = X509_ATTRIBUTE_get0_type(attr,iVar3);
                        local_60 = pAVar9->type;
                        local_70 = (pAVar9->value).asn1_string;
                        iVar4 = 0x19 - iVar4;
                        if (0 < iVar4) {
LAB_00100585:
                          do {
                            iVar5 = BIO_write(bp,&_LC15,1);
                            if (iVar5 != 1) goto LAB_00100118;
                            iVar4 = iVar4 + -1;
                          } while (iVar4 != 0);
                        }
                        iVar5 = BIO_puts(bp,":");
                        if (iVar5 < 1) goto LAB_00100118;
                        if ((local_60 < 0x17) && ((0x5c1000UL >> ((ulong)local_60 & 0x3f) & 1) != 0)
                           ) {
                          iVar5 = BIO_write(bp,local_70->data,local_70->length);
                          if (iVar5 != local_70->length) goto LAB_00100118;
                          iVar5 = BIO_puts(bp,"\n");
                        }
                        else {
                          iVar5 = BIO_puts(bp,"unable to print attribute\n");
                        }
                        if (iVar5 < 1) goto LAB_00100118;
                        iVar3 = iVar3 + 1;
                      } while (iVar3 < local_5c);
                    }
                  }
                }
              }
              if (((cflag & 0x100) == 0) &&
                 (psVar7 = X509_REQ_get_extensions(x), psVar7 != (stack_st_X509_EXTENSION *)0x0)) {
                iVar3 = BIO_printf(bp,"%12sRequested Extensions:\n",&_LC1);
                if (iVar3 < 1) goto LAB_00100118;
                for (iVar3 = 0; iVar2 = OPENSSL_sk_num(psVar7), iVar3 < iVar2; iVar3 = iVar3 + 1) {
                  ex = (X509_EXTENSION *)OPENSSL_sk_value(psVar7,iVar3);
                  iVar2 = BIO_printf(bp,"%16s",&_LC1);
                  if (iVar2 < 1) goto LAB_00100118;
                  pAVar8 = X509_EXTENSION_get_object(ex);
                  iVar2 = i2a_ASN1_OBJECT(bp,pAVar8);
                  if (iVar2 < 1) goto LAB_00100118;
                  iVar2 = X509_EXTENSION_get_critical(ex);
                  pcVar10 = "";
                  if (iVar2 != 0) {
                    pcVar10 = "critical";
                  }
                  iVar2 = BIO_printf(bp,": %s\n",pcVar10);
                  if (iVar2 < 1) goto LAB_00100118;
                  iVar2 = X509V3_EXT_print(bp,ex,cflag,0x14);
                  if (iVar2 == 0) {
                    iVar2 = BIO_printf(bp,"%20s",&_LC1);
                    if (iVar2 < 1) goto LAB_00100118;
                    v = X509_EXTENSION_get_data(ex);
                    iVar2 = ASN1_STRING_print(bp,v);
                    if (iVar2 < 1) goto LAB_00100118;
                  }
                  iVar2 = BIO_write(bp,&_LC7,1);
                  if (iVar2 < 1) goto LAB_00100118;
                }
                OPENSSL_sk_pop_free(psVar7,&X509_EXTENSION_free);
              }
              if ((cflag & 0x200) == 0) {
                X509_REQ_get0_signature(x,&local_48,&local_50);
                iVar3 = X509_signature_print(bp,local_50,(ASN1_STRING *)local_48);
                if (iVar3 == 0) goto LAB_00100118;
              }
              iVar3 = 1;
              goto LAB_0010014a;
            }
          }
        }
      }
    }
  }
LAB_00100118:
  ERR_new();
  ERR_set_debug("crypto/x509/t_req.c",0xcf,"X509_REQ_print_ex");
  ERR_set_error(0xb,0x80007,0);
LAB_00100148:
  iVar3 = 0;
LAB_0010014a:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int X509_REQ_print(BIO *bp,X509_REQ *req)

{
  int iVar1;
  
  iVar1 = X509_REQ_print_ex(bp,req,0,0);
  return iVar1;
}



int X509_REQ_print_fp(FILE *bp,X509_REQ *req)

{
  int iVar1;
  BIO_METHOD *type;
  BIO *bp_00;
  
  type = BIO_s_file();
  bp_00 = BIO_new(type);
  if (bp_00 != (BIO *)0x0) {
    BIO_ctrl(bp_00,0x6a,0,bp);
    iVar1 = X509_REQ_print(bp_00,req);
    BIO_free(bp_00);
    return iVar1;
  }
  ERR_new();
  ERR_set_debug("crypto/x509/t_req.c",0x1b,"X509_REQ_print_fp");
  ERR_set_error(0xb,0x80007,0);
  return 0;
}


