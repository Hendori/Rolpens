
undefined1 * CERTIFICATEPOLICIES_it(void)

{
  return local_it_5;
}



undefined1 * POLICYINFO_it(void)

{
  return local_it_4;
}



undefined1 * POLICYQUALINFO_adb(void)

{
  return internal_adb_2;
}



undefined1 * POLICYQUALINFO_it(void)

{
  return local_it_3;
}



undefined1 * USERNOTICE_it(void)

{
  return local_it_1;
}



undefined1 * NOTICEREF_it(void)

{
  return local_it_0;
}



void print_qualifiers(BIO *param_1,undefined8 param_2,uint param_3)

{
  undefined8 *puVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  char *buf;
  ASN1_INTEGER *aint;
  uint uVar6;
  undefined *puVar7;
  int iVar8;
  
  iVar8 = 0;
  iVar3 = OPENSSL_sk_num(param_2);
  if (iVar3 < 1) {
    return;
  }
  do {
    puVar5 = (undefined8 *)OPENSSL_sk_value(param_2,iVar8);
    iVar3 = OBJ_obj2nid((ASN1_OBJECT *)*puVar5);
    if (iVar3 == 0xa4) {
      BIO_printf(param_1,"%*sCPS: %.*s",(ulong)param_3,&_LC1,(ulong)*(uint *)puVar5[1],
                 *(undefined8 *)((uint *)puVar5[1] + 2));
    }
    else if (iVar3 == 0xa5) {
      BIO_printf(param_1,"%*sUser Notice:\n",(ulong)param_3,&_LC1);
      puVar5 = (undefined8 *)puVar5[1];
      uVar6 = param_3 + 2;
      puVar1 = (undefined8 *)*puVar5;
      if (puVar1 != (undefined8 *)0x0) {
        BIO_printf(param_1,"%*sOrganization: %.*s\n",(ulong)uVar6,&_LC1,(ulong)*(uint *)*puVar1,
                   *(undefined8 *)((uint *)*puVar1 + 2));
        iVar3 = OPENSSL_sk_num(puVar1[1]);
        puVar7 = &_LC1;
        if (1 < iVar3) {
          puVar7 = &_LC0;
        }
        BIO_printf(param_1,"%*sNumber%s: ",(ulong)uVar6,&_LC1,puVar7);
        for (iVar3 = 0; iVar4 = OPENSSL_sk_num(puVar1[1]), iVar3 < iVar4; iVar3 = iVar3 + 1) {
          aint = (ASN1_INTEGER *)OPENSSL_sk_value(puVar1[1],iVar3);
          if (iVar3 == 0) {
            if (aint != (ASN1_INTEGER *)0x0) goto LAB_001001e5;
LAB_00100250:
            BIO_puts(param_1,"(null)");
          }
          else {
            BIO_puts(param_1,", ");
            if (aint == (ASN1_INTEGER *)0x0) goto LAB_00100250;
LAB_001001e5:
            buf = i2s_ASN1_INTEGER((X509V3_EXT_METHOD *)0x0,aint);
            if (buf == (char *)0x0) goto LAB_001000d8;
            BIO_puts(param_1,buf);
            CRYPTO_free(buf);
          }
        }
        if (puVar5[1] == 0) goto LAB_001000d8;
        BIO_puts(param_1,"\n");
      }
      puVar2 = (uint *)puVar5[1];
      if (puVar2 != (uint *)0x0) {
        BIO_printf(param_1,"%*sExplicit Text: %.*s",(ulong)uVar6,&_LC1,(ulong)*puVar2,
                   *(undefined8 *)(puVar2 + 2));
      }
    }
    else {
      BIO_printf(param_1,"%*sUnknown Qualifier: ",(ulong)(param_3 + 2),&_LC1);
      i2a_ASN1_OBJECT(param_1,(ASN1_OBJECT *)*puVar5);
    }
LAB_001000d8:
    iVar8 = iVar8 + 1;
    iVar3 = OPENSSL_sk_num(param_2);
    if (iVar3 <= iVar8) {
      return;
    }
    BIO_puts(param_1,"\n");
  } while( true );
}



undefined8 i2r_certpol(undefined8 param_1,undefined8 param_2,BIO *param_3,uint param_4)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = OPENSSL_sk_num(param_2);
  if (0 < iVar1) {
    while( true ) {
      puVar2 = (undefined8 *)OPENSSL_sk_value(param_2,iVar3);
      BIO_printf(param_3,"%*sPolicy: ",(ulong)param_4,&_LC1);
      i2a_ASN1_OBJECT(param_3,(ASN1_OBJECT *)*puVar2);
      if (puVar2[1] != 0) {
        BIO_puts(param_3,"\n");
        print_qualifiers(param_3,puVar2[1],param_4 + 2);
      }
      iVar3 = iVar3 + 1;
      iVar1 = OPENSSL_sk_num(param_2);
      if (iVar1 <= iVar3) break;
      BIO_puts(param_3,"\n");
    }
  }
  return 1;
}



void POLICYINFO_free(POLICYINFO *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)POLICYINFO_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}



CERTIFICATEPOLICIES * d2i_CERTIFICATEPOLICIES(CERTIFICATEPOLICIES **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  ASN1_VALUE *pAVar1;
  
  it = (ASN1_ITEM *)CERTIFICATEPOLICIES_it();
  pAVar1 = ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return (CERTIFICATEPOLICIES *)pAVar1;
}



int i2d_CERTIFICATEPOLICIES(CERTIFICATEPOLICIES *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)CERTIFICATEPOLICIES_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CERTIFICATEPOLICIES * CERTIFICATEPOLICIES_new(void)

{
  ASN1_ITEM *it;
  ASN1_VALUE *pAVar1;
  
  it = (ASN1_ITEM *)CERTIFICATEPOLICIES_it();
  pAVar1 = ASN1_item_new(it);
  return (CERTIFICATEPOLICIES *)pAVar1;
}



void CERTIFICATEPOLICIES_free(CERTIFICATEPOLICIES *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)CERTIFICATEPOLICIES_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}



POLICYINFO * d2i_POLICYINFO(POLICYINFO **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  POLICYINFO *pPVar1;
  
  it = (ASN1_ITEM *)POLICYINFO_it();
  pPVar1 = (POLICYINFO *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pPVar1;
}



int i2d_POLICYINFO(POLICYINFO *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)POLICYINFO_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

POLICYINFO * POLICYINFO_new(void)

{
  ASN1_ITEM *it;
  POLICYINFO *pPVar1;
  
  it = (ASN1_ITEM *)POLICYINFO_it();
  pPVar1 = (POLICYINFO *)ASN1_item_new(it);
  return pPVar1;
}



POLICYQUALINFO * d2i_POLICYQUALINFO(POLICYQUALINFO **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  POLICYQUALINFO *pPVar1;
  
  it = (ASN1_ITEM *)POLICYQUALINFO_it();
  pPVar1 = (POLICYQUALINFO *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pPVar1;
}



int i2d_POLICYQUALINFO(POLICYQUALINFO *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)POLICYQUALINFO_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

POLICYQUALINFO * POLICYQUALINFO_new(void)

{
  ASN1_ITEM *it;
  POLICYQUALINFO *pPVar1;
  
  it = (ASN1_ITEM *)POLICYQUALINFO_it();
  pPVar1 = (POLICYQUALINFO *)ASN1_item_new(it);
  return pPVar1;
}



void POLICYQUALINFO_free(POLICYQUALINFO *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)POLICYQUALINFO_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}



USERNOTICE * d2i_USERNOTICE(USERNOTICE **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  USERNOTICE *pUVar1;
  
  it = (ASN1_ITEM *)USERNOTICE_it();
  pUVar1 = (USERNOTICE *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pUVar1;
}



int i2d_USERNOTICE(USERNOTICE *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)USERNOTICE_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

USERNOTICE * USERNOTICE_new(void)

{
  ASN1_ITEM *it;
  USERNOTICE *pUVar1;
  
  it = (ASN1_ITEM *)USERNOTICE_it();
  pUVar1 = (USERNOTICE *)ASN1_item_new(it);
  return pUVar1;
}



void USERNOTICE_free(USERNOTICE *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)USERNOTICE_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}



NOTICEREF * d2i_NOTICEREF(NOTICEREF **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  NOTICEREF *pNVar1;
  
  it = (ASN1_ITEM *)NOTICEREF_it();
  pNVar1 = (NOTICEREF *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pNVar1;
}



int i2d_NOTICEREF(NOTICEREF *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)NOTICEREF_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

NOTICEREF * NOTICEREF_new(void)

{
  ASN1_ITEM *it;
  NOTICEREF *pNVar1;
  
  it = (ASN1_ITEM *)NOTICEREF_it();
  pNVar1 = (NOTICEREF *)ASN1_item_new(it);
  return pNVar1;
}



long r2i_certpol(undefined8 param_1,X509V3_CTX *param_2,char *param_3)

{
  stack_st_ASN1_INTEGER *psVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  stack_st_CONF_VALUE *psVar8;
  long lVar9;
  ASN1_OBJECT *pAVar10;
  POLICYINFO *a;
  long lVar11;
  stack_st_CONF_VALUE *section;
  undefined8 *puVar12;
  POLICYQUALINFO *pPVar13;
  ASN1_IA5STRING *str;
  size_t sVar14;
  stack_st_CONF_VALUE *section_00;
  USERNOTICE *pUVar15;
  stack_st_CONF_VALUE *psVar16;
  ASN1_INTEGER *a_00;
  char *pcVar17;
  ASN1_STRING *pAVar18;
  NOTICEREF *pNVar19;
  stack_st_POLICYQUALINFO *psVar20;
  char *__s;
  undefined8 uVar21;
  int iVar22;
  
  psVar8 = X509V3_parse_list(param_3);
  iVar3 = OPENSSL_sk_num(psVar8);
  if (psVar8 == (stack_st_CONF_VALUE *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/x509/v3_cpols.c",0x66,"r2i_certpol");
    ERR_set_error(0x22,0x80022,0);
  }
  else {
    lVar9 = OPENSSL_sk_new_reserve(0,iVar3);
    if (lVar9 != 0) {
      if (0 < iVar3) {
        bVar2 = false;
        iVar22 = 0;
        do {
          while( true ) {
            lVar11 = OPENSSL_sk_value(psVar8,iVar22);
            if ((*(long *)(lVar11 + 0x10) != 0) ||
               (pcVar17 = *(char **)(lVar11 + 8), pcVar17 == (char *)0x0)) {
              ERR_new();
              ERR_set_debug("crypto/x509/v3_cpols.c",0x74,"r2i_certpol");
              ERR_set_error(0x22,0x86,0);
              ERR_add_error_data(4,"name=",*(undefined8 *)(lVar11 + 8),", value=",
                                 *(undefined8 *)(lVar11 + 0x10));
              goto LAB_00100c98;
            }
            iVar4 = strcmp(pcVar17,"ia5org");
            if (iVar4 != 0) break;
            iVar22 = iVar22 + 1;
            bVar2 = true;
            if (iVar3 == iVar22) goto LAB_001007dc;
          }
          if (*pcVar17 == '@') {
            section = X509V3_get_section(param_2,pcVar17 + 1);
            if (section == (stack_st_CONF_VALUE *)0x0) {
              ERR_new();
              ERR_set_debug("crypto/x509/v3_cpols.c",0x81,"r2i_certpol");
              ERR_set_error(0x22,0x87,&_LC16,*(undefined8 *)(lVar11 + 8));
            }
            else {
              a = POLICYINFO_new();
              if (a == (POLICYINFO *)0x0) {
                ERR_new();
                uVar21 = 0xaf;
LAB_00100954:
                ERR_set_debug("crypto/x509/v3_cpols.c",uVar21,"policy_section");
                ERR_set_error(0x22,0x8000d,0);
              }
              else {
                for (iVar4 = 0; iVar5 = OPENSSL_sk_num(section), iVar4 < iVar5; iVar4 = iVar4 + 1) {
                  puVar12 = (undefined8 *)OPENSSL_sk_value(section,iVar4);
                  pcVar17 = (char *)puVar12[1];
                  iVar5 = strcmp(pcVar17,"policyIdentifier");
                  if (iVar5 == 0) {
                    pAVar10 = OBJ_txt2obj((char *)puVar12[2],0);
                    if (pAVar10 == (ASN1_OBJECT *)0x0) {
                      ERR_new();
                      ERR_set_debug("crypto/x509/v3_cpols.c",0xb8,"policy_section");
                      uVar21 = 0x6e;
                      goto LAB_00101219;
                    }
                    a->policyid = pAVar10;
                  }
                  else {
                    iVar5 = ossl_v3_name_cmp(pcVar17,&_LC21);
                    if (iVar5 != 0) {
                      iVar5 = ossl_v3_name_cmp(puVar12[1],"userNotice");
                      if (iVar5 == 0) {
                        if (*(char *)puVar12[2] == '@') {
                          section_00 = X509V3_get_section(param_2,(char *)puVar12[2] + 1);
                          if (section_00 != (stack_st_CONF_VALUE *)0x0) {
                            pPVar13 = POLICYQUALINFO_new();
                            if (pPVar13 == (POLICYQUALINFO *)0x0) {
                              ERR_new();
                              uVar21 = 0x12e;
LAB_00100bf8:
                              ERR_set_debug("crypto/x509/v3_cpols.c",uVar21,"notice_section");
                              ERR_set_error(0x22,0x8000d,0);
                            }
                            else {
                              pAVar10 = OBJ_nid2obj(0xa5);
                              pPVar13->pqualid = pAVar10;
                              if (pAVar10 == (ASN1_OBJECT *)0x0) {
                                ERR_new();
                                ERR_set_debug("crypto/x509/v3_cpols.c",0x132,"notice_section");
                                ERR_set_error(0x22,0xc0103,0);
                              }
                              else {
                                pUVar15 = USERNOTICE_new();
                                if (pUVar15 == (USERNOTICE *)0x0) {
                                  ERR_new();
                                  uVar21 = 0x136;
                                  goto LAB_00100bf8;
                                }
                                (pPVar13->d).usernotice = pUVar15;
                                for (iVar5 = 0; iVar6 = OPENSSL_sk_num(section_00), iVar5 < iVar6;
                                    iVar5 = iVar5 + 1) {
                                  lVar11 = OPENSSL_sk_value(section_00,iVar5);
                                  pcVar17 = *(char **)(lVar11 + 8);
                                  __s = *(char **)(lVar11 + 0x10);
                                  iVar6 = strcmp(pcVar17,"explicitText");
                                  if (iVar6 == 0) {
                                    pcVar17 = strchr(__s,0x3a);
                                    if ((pcVar17 == (char *)0x0) ||
                                       (iVar6 = (int)pcVar17 - (int)__s, iVar6 == -1))
                                    goto LAB_00100ba0;
                                    if (iVar6 != 4) {
                                      if (iVar6 == 10) {
                                        iVar6 = strncmp(__s,"UTF8String",10);
                                        if (iVar6 == 0) {
                                          pAVar18 = ASN1_STRING_type_new(0xc);
                                          pUVar15->exptext = pAVar18;
                                          if (pAVar18 == (ASN1_STRING *)0x0) goto LAB_001011ca;
                                          lVar11 = 0xb;
                                          goto LAB_00100e08;
                                        }
LAB_00100ba0:
                                        pAVar18 = ASN1_STRING_type_new(0x1a);
                                        pUVar15->exptext = pAVar18;
                                        if (pAVar18 != (ASN1_STRING *)0x0) goto LAB_00100bba;
                                      }
                                      else {
                                        if (iVar6 == 3) {
                                          if (((*__s == 'B') && (__s[1] == 'M')) && (__s[2] == 'P'))
                                          {
                                            pAVar18 = ASN1_STRING_type_new(0x1e);
                                            pUVar15->exptext = pAVar18;
                                            if (pAVar18 == (ASN1_STRING *)0x0) goto LAB_001011ca;
                                            lVar11 = 4;
                                            goto LAB_00100e08;
                                          }
                                          goto LAB_00100ba0;
                                        }
                                        if (iVar6 == 9) {
                                          iVar6 = strncmp(__s,"BMPSTRING",9);
                                          if (iVar6 == 0) {
                                            pAVar18 = ASN1_STRING_type_new(0x1e);
                                            pUVar15->exptext = pAVar18;
                                            if (pAVar18 == (ASN1_STRING *)0x0) goto LAB_001011ca;
                                            lVar11 = 10;
                                            goto LAB_00100e08;
                                          }
                                          goto LAB_00100ba0;
                                        }
                                        if (iVar6 != 7) {
                                          if ((iVar6 == 0xd) &&
                                             (iVar6 = strncmp(__s,"VISIBLESTRING",0xd), iVar6 == 0))
                                          {
                                            pAVar18 = ASN1_STRING_type_new(0x1a);
                                            pUVar15->exptext = pAVar18;
                                            if (pAVar18 == (ASN1_STRING *)0x0) goto LAB_001011ca;
                                            lVar11 = 0xe;
                                            goto LAB_00100e08;
                                          }
                                          goto LAB_00100ba0;
                                        }
                                        iVar6 = strncmp(__s,"VISIBLE",7);
                                        if (iVar6 != 0) goto LAB_00100ba0;
                                        pAVar18 = ASN1_STRING_type_new(0x1a);
                                        pUVar15->exptext = pAVar18;
                                        if (pAVar18 != (ASN1_STRING *)0x0) {
                                          lVar11 = 8;
                                          goto LAB_00100e08;
                                        }
                                      }
LAB_001011ca:
                                      ERR_new();
                                      uVar21 = 0x141;
                                      goto LAB_00100bf8;
                                    }
                                    iVar6 = strncmp(__s,"UTF8",4);
                                    if (iVar6 != 0) goto LAB_00100ba0;
                                    pAVar18 = ASN1_STRING_type_new(0xc);
                                    pUVar15->exptext = pAVar18;
                                    if (pAVar18 == (ASN1_STRING *)0x0) goto LAB_001011ca;
                                    lVar11 = 5;
LAB_00100e08:
                                    __s = __s + lVar11;
LAB_00100bba:
                                    sVar14 = strlen(__s);
                                    iVar6 = ASN1_STRING_set(pAVar18,__s,(int)sVar14);
                                    if (iVar6 == 0) {
                                      ERR_new();
                                      uVar21 = 0x148;
                                      goto LAB_00100bf8;
                                    }
                                  }
                                  else {
                                    iVar6 = strcmp(pcVar17,"organization");
                                    if (iVar6 == 0) {
                                      pNVar19 = pUVar15->noticeref;
                                      if (pNVar19 == (NOTICEREF *)0x0) {
                                        pNVar19 = NOTICEREF_new();
                                        if (pNVar19 == (NOTICEREF *)0x0) {
                                          ERR_new();
                                          uVar21 = 0x150;
                                          goto LAB_00100bf8;
                                        }
                                        pUVar15->noticeref = pNVar19;
                                        __s = *(char **)(lVar11 + 0x10);
                                      }
                                      pAVar18 = pNVar19->organization;
                                      pAVar18->type = (-(uint)!bVar2 & 4) + 0x16;
                                      sVar14 = strlen(__s);
                                      iVar6 = ASN1_STRING_set(pAVar18,__s,(int)sVar14);
                                      if (iVar6 == 0) {
                                        ERR_new();
                                        uVar21 = 0x15c;
                                        goto LAB_00100bf8;
                                      }
                                    }
                                    else {
                                      iVar6 = strcmp(pcVar17,"noticeNumbers");
                                      if (iVar6 != 0) {
                                        ERR_new();
                                        ERR_set_debug("crypto/x509/v3_cpols.c",0x177,
                                                      "notice_section");
                                        ERR_set_error(0x22,0x8a,0);
                                        ERR_add_error_data(4,"name=",*(undefined8 *)(lVar11 + 8),
                                                           ", value=",*(undefined8 *)(lVar11 + 0x10)
                                                          );
                                        goto LAB_00100c6a;
                                      }
                                      pNVar19 = pUVar15->noticeref;
                                      if (pNVar19 == (NOTICEREF *)0x0) {
                                        pNVar19 = NOTICEREF_new();
                                        if (pNVar19 == (NOTICEREF *)0x0) {
                                          ERR_new();
                                          uVar21 = 0x165;
                                          goto LAB_00100bf8;
                                        }
                                        pcVar17 = *(char **)(lVar11 + 0x10);
                                        pUVar15->noticeref = pNVar19;
                                        psVar16 = X509V3_parse_list(pcVar17);
                                      }
                                      else {
                                        psVar16 = X509V3_parse_list(__s);
                                      }
                                      if ((psVar16 == (stack_st_CONF_VALUE *)0x0) ||
                                         (iVar6 = OPENSSL_sk_num(psVar16), iVar6 == 0)) {
                                        ERR_new();
                                        ERR_set_debug("crypto/x509/v3_cpols.c",0x16d,
                                                      "notice_section");
                                        ERR_set_error(0x22,0x8d,0);
                                        ERR_add_error_data(4,"name=",*(undefined8 *)(lVar11 + 8),
                                                           ", value=",*(undefined8 *)(lVar11 + 0x10)
                                                          );
                                        OPENSSL_sk_pop_free(psVar16,&X509V3_conf_free);
                                        goto LAB_00100c6a;
                                      }
                                      psVar1 = pNVar19->noticenos;
                                      for (iVar6 = 0; iVar7 = OPENSSL_sk_num(psVar16), iVar6 < iVar7
                                          ; iVar6 = iVar6 + 1) {
                                        lVar11 = OPENSSL_sk_value(psVar16,iVar6);
                                        a_00 = s2i_ASN1_INTEGER((X509V3_EXT_METHOD *)0x0,
                                                                *(char **)(lVar11 + 8));
                                        if (a_00 == (ASN1_INTEGER *)0x0) {
                                          ERR_new();
                                          ERR_set_debug("crypto/x509/v3_cpols.c",0x194,"nref_nos");
                                          uVar21 = 0x8c;
LAB_00100c51:
                                          ERR_set_error(0x22,uVar21,0);
                                          OPENSSL_sk_pop_free(psVar16,&X509V3_conf_free);
                                          goto LAB_00100c6a;
                                        }
                                        iVar7 = OPENSSL_sk_push(psVar1,a_00);
                                        if (iVar7 == 0) {
                                          ASN1_INTEGER_free(a_00);
                                          ERR_new();
                                          ERR_set_debug("crypto/x509/v3_cpols.c",0x199,"nref_nos");
                                          uVar21 = 0x8000f;
                                          goto LAB_00100c51;
                                        }
                                      }
                                      OPENSSL_sk_pop_free(psVar16,&X509V3_conf_free);
                                    }
                                  }
                                }
                                pNVar19 = pUVar15->noticeref;
                                if ((pNVar19 == (NOTICEREF *)0x0) ||
                                   ((pNVar19->noticenos != (stack_st_ASN1_INTEGER *)0x0 &&
                                    (pNVar19->organization != (ASN1_STRING *)0x0)))) {
                                  X509V3_section_free(param_2,section_00);
                                  psVar20 = a->qualifiers;
                                  if (psVar20 == (stack_st_POLICYQUALINFO *)0x0) {
                                    psVar20 = (stack_st_POLICYQUALINFO *)OPENSSL_sk_new_null();
                                    a->qualifiers = psVar20;
                                  }
                                  iVar5 = OPENSSL_sk_push(psVar20,pPVar13);
                                  if (iVar5 == 0) {
                                    POLICYQUALINFO_free(pPVar13);
                                    ERR_new();
                                    uVar21 = 0xed;
                                    goto LAB_0010103b;
                                  }
                                  goto LAB_00100864;
                                }
                                ERR_new();
                                ERR_set_debug("crypto/x509/v3_cpols.c",0x17f,"notice_section");
                                ERR_set_error(0x22,0x8e,0);
                              }
                            }
LAB_00100c6a:
                            POLICYQUALINFO_free(pPVar13);
                            X509V3_section_free(param_2,section_00);
                            goto LAB_00100c83;
                          }
                          ERR_new();
                          ERR_set_debug("crypto/x509/v3_cpols.c",0xe0,"policy_section");
                          uVar21 = 0x87;
                        }
                        else {
                          ERR_new();
                          ERR_set_debug("crypto/x509/v3_cpols.c",0xda,"policy_section");
                          uVar21 = 0x89;
                        }
                      }
                      else {
                        ERR_new();
                        ERR_set_debug("crypto/x509/v3_cpols.c",0xf1,"policy_section");
                        uVar21 = 0x8a;
                      }
LAB_00101219:
                      ERR_set_error(0x22,uVar21,0);
                      ERR_add_error_data(6,"section:",*puVar12,",name:",puVar12[1],",value:",
                                         puVar12[2]);
                      goto LAB_00100c83;
                    }
                    if (a->qualifiers == (stack_st_POLICYQUALINFO *)0x0) {
                      psVar20 = (stack_st_POLICYQUALINFO *)OPENSSL_sk_new_null();
                      a->qualifiers = psVar20;
                      pPVar13 = POLICYQUALINFO_new();
                    }
                    else {
                      pPVar13 = POLICYQUALINFO_new();
                    }
                    if (pPVar13 == (POLICYQUALINFO *)0x0) {
                      ERR_new();
                      uVar21 = 0xc2;
                      goto LAB_00100954;
                    }
                    iVar5 = OPENSSL_sk_push(a->qualifiers,pPVar13);
                    if (iVar5 == 0) {
                      POLICYQUALINFO_free(pPVar13);
                      ERR_new();
                      uVar21 = 199;
LAB_0010103b:
                      ERR_set_debug("crypto/x509/v3_cpols.c",uVar21,"policy_section");
                      ERR_set_error(0x22,0x8000f,0);
                      goto LAB_00100c83;
                    }
                    pAVar10 = OBJ_nid2obj(0xa4);
                    pPVar13->pqualid = pAVar10;
                    if (pAVar10 == (ASN1_OBJECT *)0x0) {
                      ERR_new();
                      ERR_set_debug("crypto/x509/v3_cpols.c",0xcb,"policy_section");
                      ERR_set_error(0x22,0xc0103,0);
                      goto LAB_00100c83;
                    }
                    str = ASN1_IA5STRING_new();
                    (pPVar13->d).cpsuri = str;
                    if (str == (ASN1_IA5STRING *)0x0) {
                      ERR_new();
                      uVar21 = 0xcf;
                      goto LAB_00100954;
                    }
                    pcVar17 = (char *)puVar12[2];
                    sVar14 = strlen(pcVar17);
                    iVar5 = ASN1_STRING_set(str,pcVar17,(int)sVar14);
                    if (iVar5 == 0) {
                      ERR_new();
                      uVar21 = 0xd4;
                      goto LAB_00100954;
                    }
                  }
LAB_00100864:
                }
                if (a->policyid != (ASN1_OBJECT *)0x0) {
                  X509V3_section_free(param_2,section);
                  goto LAB_00100764;
                }
                ERR_new();
                ERR_set_debug("crypto/x509/v3_cpols.c",0xf7,"policy_section");
                ERR_set_error(0x22,0x8b,0);
              }
LAB_00100c83:
              POLICYINFO_free(a);
              X509V3_section_free(param_2,section);
            }
            goto LAB_00100c98;
          }
          pAVar10 = OBJ_txt2obj(pcVar17,0);
          if (pAVar10 == (ASN1_OBJECT *)0x0) {
            ERR_new();
            ERR_set_debug("crypto/x509/v3_cpols.c",0x8b,"r2i_certpol");
            ERR_set_error(0x22,0x6e,&_LC16,*(undefined8 *)(lVar11 + 8));
            goto LAB_00100c98;
          }
          a = POLICYINFO_new();
          if (a == (POLICYINFO *)0x0) {
            ASN1_OBJECT_free(pAVar10);
            ERR_new();
            ERR_set_debug("crypto/x509/v3_cpols.c",0x93,"r2i_certpol");
            ERR_set_error(0x22,0x8000d,0);
            goto LAB_00100c98;
          }
          a->policyid = pAVar10;
LAB_00100764:
          iVar4 = OPENSSL_sk_push(lVar9,a);
          if (iVar4 == 0) {
            POLICYINFO_free(a);
            ERR_new();
            ERR_set_debug("crypto/x509/v3_cpols.c",0x9a,"r2i_certpol");
            ERR_set_error(0x22,0x8000f,0);
            goto LAB_00100c98;
          }
          iVar22 = iVar22 + 1;
        } while (iVar3 != iVar22);
      }
LAB_001007dc:
      OPENSSL_sk_pop_free(psVar8,&X509V3_conf_free);
      return lVar9;
    }
    ERR_new();
    ERR_set_debug("crypto/x509/v3_cpols.c",0x6c,"r2i_certpol");
    ERR_set_error(0x22,0x8000f,0);
LAB_00100c98:
    OPENSSL_sk_pop_free(psVar8,&X509V3_conf_free);
    OPENSSL_sk_pop_free(lVar9,POLICYINFO_free);
  }
  return 0;
}



void NOTICEREF_free(NOTICEREF *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)NOTICEREF_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}



void X509_POLICY_NODE_print(BIO *out,X509_POLICY_NODE *node,int indent)

{
  byte *pbVar1;
  undefined4 in_register_00000014;
  uint uVar2;
  char *pcVar3;
  
  pbVar1 = *(byte **)node;
  BIO_printf(out,"%*sPolicy: ",CONCAT44(in_register_00000014,indent),&_LC1);
  i2a_ASN1_OBJECT(out,*(ASN1_OBJECT **)(pbVar1 + 8));
  BIO_puts(out,"\n");
  pcVar3 = "Non Critical";
  if ((*pbVar1 & 0x10) != 0) {
    pcVar3 = "Critical";
  }
  uVar2 = indent + 2;
  BIO_printf(out,"%*s%s\n",(ulong)uVar2,&_LC1,pcVar3);
  if (*(long *)(pbVar1 + 0x10) != 0) {
    print_qualifiers(out,*(long *)(pbVar1 + 0x10),uVar2);
    BIO_puts(out,"\n");
    return;
  }
  BIO_printf(out,"%*sNo Qualifiers\n",(ulong)uVar2,&_LC1);
  return;
}


