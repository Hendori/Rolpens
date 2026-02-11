
undefined1 * DIST_POINT_NAME_it(void)

{
  return local_it_6;
}



undefined1 * DIST_POINT_it(void)

{
  return local_it_5;
}



undefined1 * CRL_DIST_POINTS_it(void)

{
  return local_it_4;
}



undefined1 * ISSUING_DIST_POINT_it(void)

{
  return local_it_3;
}



undefined1 * OSSL_AA_DIST_POINT_it(void)

{
  return local_it_1;
}



undefined8 print_reasons(BIO *param_1,undefined8 param_2,ASN1_BIT_STRING *param_3,uint param_4)

{
  long *plVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  
  bVar2 = true;
  BIO_printf(param_1,"%*s%s:\n%*s",(ulong)param_4,&_LC0,param_2,(ulong)(param_4 + 2),&_LC0);
  piVar4 = &reason_flags;
  do {
    iVar3 = ASN1_BIT_STRING_get_bit(param_3,*piVar4);
    if (iVar3 != 0) {
      if (!bVar2) {
        BIO_puts(param_1,", ");
      }
      bVar2 = false;
      BIO_puts(param_1,*(char **)(piVar4 + 2));
    }
    plVar1 = (long *)(piVar4 + 8);
    piVar4 = piVar4 + 6;
  } while (*plVar1 != 0);
  if (bVar2) {
    BIO_puts(param_1,"<EMPTY>\n");
    return 1;
  }
  BIO_puts(param_1,"\n");
  return 1;
}



undefined8 dpn_cb(int param_1,long *param_2)

{
  if (param_1 == 1) {
    *(undefined8 *)(*param_2 + 0x10) = 0;
    return 1;
  }
  if (param_1 != 3) {
    return 1;
  }
  X509_NAME_free(*(X509_NAME **)(*param_2 + 0x10));
  return 1;
}



undefined8 set_reasons(long *param_1,char *param_2)

{
  long *plVar1;
  char *__s2;
  int iVar2;
  stack_st_CONF_VALUE *psVar3;
  long lVar4;
  ASN1_BIT_STRING *pAVar5;
  int *piVar6;
  undefined8 uVar7;
  int iVar8;
  
  psVar3 = X509V3_parse_list(param_2);
  if (psVar3 == (stack_st_CONF_VALUE *)0x0) {
    return 0;
  }
  if (*param_1 == 0) {
    iVar8 = 0;
    iVar2 = OPENSSL_sk_num(psVar3);
    if (0 < iVar2) {
      do {
        lVar4 = OPENSSL_sk_value(psVar3,iVar8);
        __s2 = *(char **)(lVar4 + 8);
        if (*param_1 == 0) {
          pAVar5 = ASN1_BIT_STRING_new();
          *param_1 = (long)pAVar5;
          if (pAVar5 == (ASN1_BIT_STRING *)0x0) goto LAB_001001a8;
        }
        piVar6 = &reason_flags;
        while (iVar2 = strcmp(*(char **)(piVar6 + 4),__s2), iVar2 != 0) {
          plVar1 = (long *)(piVar6 + 8);
          piVar6 = piVar6 + 6;
          if (*plVar1 == 0) goto LAB_001001a8;
        }
        iVar2 = ASN1_BIT_STRING_set_bit((ASN1_BIT_STRING *)*param_1,*piVar6,1);
        if ((iVar2 == 0) || (*(long *)(piVar6 + 2) == 0)) goto LAB_001001a8;
        iVar8 = iVar8 + 1;
        iVar2 = OPENSSL_sk_num(psVar3);
      } while (iVar8 < iVar2);
    }
    uVar7 = 1;
  }
  else {
LAB_001001a8:
    uVar7 = 0;
  }
  OPENSSL_sk_pop_free(psVar3,&X509V3_conf_free);
  return uVar7;
}



GENERAL_NAMES * gnames_from_sectname(X509V3_CTX *param_1,char *param_2)

{
  stack_st_CONF_VALUE *nval;
  GENERAL_NAMES *pGVar1;
  
  if (*param_2 == '@') {
    nval = X509V3_get_section(param_1,param_2 + 1);
  }
  else {
    nval = X509V3_parse_list(param_2);
  }
  if (nval == (stack_st_CONF_VALUE *)0x0) {
    ERR_new();
    pGVar1 = (GENERAL_NAMES *)0x0;
    ERR_set_debug("crypto/x509/v3_crld.c",0x38,"gnames_from_sectname");
    ERR_set_error(0x22,0x96,0);
  }
  else {
    pGVar1 = v2i_GENERAL_NAMES((X509V3_EXT_METHOD *)0x0,param_1,nval);
    if (*param_2 == '@') {
      X509V3_section_free(param_1,nval);
      return pGVar1;
    }
    OPENSSL_sk_pop_free(nval,&X509V3_conf_free);
  }
  return pGVar1;
}



void DIST_POINT_free(DIST_POINT *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)DIST_POINT_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}



undefined8 print_distpoint(BIO *param_1,int *param_2,uint param_3)

{
  ulong uVar1;
  long in_FS_OFFSET;
  X509_NAME local_48;
  long local_20;
  
  uVar1 = (ulong)param_3;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_2 == 0) {
    BIO_printf(param_1,"%*sFull Name:\n",uVar1,&_LC0);
    OSSL_GENERAL_NAMES_print(param_1,*(undefined8 *)(param_2 + 2),uVar1);
    BIO_puts(param_1,"\n");
  }
  else {
    local_48.entries = *(stack_st_X509_NAME_ENTRY **)(param_2 + 2);
    BIO_printf(param_1,"%*sRelative Name:\n%*s",uVar1,&_LC0,(ulong)(param_3 + 2));
    X509_NAME_print_ex(param_1,&local_48,0,0x82031f);
    BIO_puts(param_1,"\n");
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 i2r_crldp(undefined8 param_1,undefined8 param_2,BIO *param_3,ulong param_4)

{
  int iVar1;
  long *plVar2;
  int iVar3;
  
  param_4 = param_4 & 0xffffffff;
  iVar3 = 0;
  iVar1 = OPENSSL_sk_num(param_2);
  if (0 < iVar1) {
    while( true ) {
      plVar2 = (long *)OPENSSL_sk_value(param_2,iVar3);
      if (*plVar2 != 0) {
        print_distpoint(param_3,*plVar2,param_4);
      }
      if (plVar2[1] != 0) {
        print_reasons(param_3,"Reasons",plVar2[1],param_4);
      }
      if (plVar2[2] != 0) {
        BIO_printf(param_3,"%*sCRL Issuer:\n",param_4,&_LC0);
        OSSL_GENERAL_NAMES_print(param_3,plVar2[2],param_4);
      }
      iVar3 = iVar3 + 1;
      iVar1 = OPENSSL_sk_num(param_2);
      if (iVar1 <= iVar3) break;
      BIO_puts(param_3,"\n");
    }
  }
  return 1;
}



undefined8 i2r_idp(undefined8 param_1,long *param_2,BIO *param_3,uint param_4)

{
  ulong uVar1;
  
  uVar1 = (ulong)param_4;
  if (*param_2 != 0) {
    print_distpoint(param_3,*param_2,param_4);
  }
  if (0 < (int)param_2[1]) {
    BIO_printf(param_3,"%*sOnly User Certificates\n",uVar1,&_LC0);
  }
  if (0 < *(int *)((long)param_2 + 0xc)) {
    BIO_printf(param_3,"%*sOnly CA Certificates\n",uVar1,&_LC0);
  }
  if (0 < (int)param_2[3]) {
    BIO_printf(param_3,"%*sIndirect CRL\n",uVar1,&_LC0);
  }
  if (param_2[2] != 0) {
    print_reasons(param_3,"Only Some Reasons",param_2[2],uVar1);
  }
  if (0 < *(int *)((long)param_2 + 0x1c)) {
    BIO_printf(param_3,"%*sOnly Attribute Certificates\n",uVar1,&_LC0);
  }
  if ((((*param_2 == 0) && ((int)param_2[1] < 1)) && (*(int *)((long)param_2 + 0xc) < 1)) &&
     ((((int)param_2[3] < 1 && (param_2[2] == 0)) && (*(int *)((long)param_2 + 0x1c) < 1)))) {
    BIO_printf(param_3,"%*s<EMPTY>\n",uVar1,&_LC0);
  }
  return 1;
}



bool i2r_aaidp(undefined8 param_1,long *param_2,BIO *param_3,uint param_4)

{
  int iVar1;
  char *pcVar2;
  ulong uVar3;
  
  uVar3 = (ulong)param_4;
  if ((*param_2 != 0) && (iVar1 = print_distpoint(param_3,*param_2,param_4), iVar1 < 1)) {
    return false;
  }
  if ((param_2[1] != 0) && (iVar1 = print_reasons(param_3,"Reasons",param_2[1],uVar3), iVar1 < 1)) {
    return false;
  }
  if (*(int *)((long)param_2 + 0x14) != 0) {
    iVar1 = BIO_printf(param_3,"%*sIndirect CRL: ",uVar3,&_LC0);
    if (iVar1 < 1) {
      return false;
    }
    pcVar2 = "FALSE";
    if (*(int *)((long)param_2 + 0x14) != 0) {
      pcVar2 = "TRUE";
    }
    iVar1 = BIO_puts(param_3,pcVar2);
    if (iVar1 < 1) {
      return false;
    }
    iVar1 = BIO_puts(param_3,"\n");
    if (iVar1 < 1) {
      return false;
    }
  }
  if ((int)param_2[3] != 0) {
    iVar1 = BIO_printf(param_3,"%*sContains User Attribute Certificates: ",uVar3,&_LC0);
    if (iVar1 < 1) {
      return false;
    }
    pcVar2 = "FALSE";
    if ((int)param_2[3] != 0) {
      pcVar2 = "TRUE";
    }
    iVar1 = BIO_puts(param_3,pcVar2);
    if (iVar1 < 1) {
      return false;
    }
    iVar1 = BIO_puts(param_3,"\n");
    if (iVar1 < 1) {
      return false;
    }
  }
  if (*(int *)((long)param_2 + 0x1c) != 0) {
    iVar1 = BIO_printf(param_3,"%*sContains Attribute Authority (AA) Certificates: ",uVar3,&_LC0);
    if (iVar1 < 1) {
      return false;
    }
    pcVar2 = "FALSE";
    if (*(int *)((long)param_2 + 0x1c) != 0) {
      pcVar2 = "TRUE";
    }
    iVar1 = BIO_puts(param_3,pcVar2);
    if (iVar1 < 1) {
      return false;
    }
    iVar1 = BIO_puts(param_3,"\n");
    if (iVar1 < 1) {
      return false;
    }
  }
  if ((int)param_2[4] == 0) {
    return true;
  }
  iVar1 = BIO_printf(param_3,"%*sContains Source Of Authority (SOA) Public Key Certificates: ",uVar3
                     ,&_LC0);
  if (0 < iVar1) {
    pcVar2 = "FALSE";
    if ((int)param_2[4] != 0) {
      pcVar2 = "TRUE";
    }
    iVar1 = BIO_puts(param_3,pcVar2);
    if (0 < iVar1) {
      iVar1 = BIO_puts(param_3,"\n");
      return 0 < iVar1;
    }
  }
  return false;
}



DIST_POINT_NAME * d2i_DIST_POINT_NAME(DIST_POINT_NAME **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  DIST_POINT_NAME *pDVar1;
  
  it = (ASN1_ITEM *)DIST_POINT_NAME_it();
  pDVar1 = (DIST_POINT_NAME *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pDVar1;
}



int i2d_DIST_POINT_NAME(DIST_POINT_NAME *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)DIST_POINT_NAME_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

DIST_POINT_NAME * DIST_POINT_NAME_new(void)

{
  ASN1_ITEM *it;
  DIST_POINT_NAME *pDVar1;
  
  it = (ASN1_ITEM *)DIST_POINT_NAME_it();
  pDVar1 = (DIST_POINT_NAME *)ASN1_item_new(it);
  return pDVar1;
}



undefined8 set_dist_point_name(long *param_1,X509V3_CTX *param_2,long param_3)

{
  char *__s1;
  int iVar1;
  X509_NAME *a;
  stack_st_CONF_VALUE *dn_sk;
  GENERAL_NAMES *pGVar2;
  DIST_POINT_NAME *pDVar3;
  long lVar4;
  stack_st_X509_NAME_ENTRY *psVar5;
  
  lVar4 = *(long *)(param_3 + 0x10);
  if (lVar4 == 0) {
    ERR_new();
    psVar5 = (stack_st_X509_NAME_ENTRY *)0x0;
    ERR_set_debug("crypto/x509/v3_crld.c",0x4a,"set_dist_point_name");
    ERR_set_error(0x22,0x7c,0);
    pGVar2 = (GENERAL_NAMES *)0x0;
    goto LAB_001009a8;
  }
  __s1 = *(char **)(param_3 + 8);
  iVar1 = strncmp(__s1,"fullname",8);
  if (iVar1 == 0) {
    psVar5 = (stack_st_X509_NAME_ENTRY *)0x0;
    pGVar2 = (GENERAL_NAMES *)gnames_from_sectname(param_2,lVar4);
    if (pGVar2 == (GENERAL_NAMES *)0x0) goto LAB_001009a8;
  }
  else {
    iVar1 = strcmp(__s1,"relativename");
    if (iVar1 != 0) {
      return 0;
    }
    a = X509_NAME_new();
    if (a == (X509_NAME *)0x0) {
      return 0xffffffff;
    }
    dn_sk = X509V3_get_section(param_2,*(char **)(param_3 + 0x10));
    if (dn_sk == (stack_st_CONF_VALUE *)0x0) {
      X509_NAME_free(a);
      ERR_new();
      ERR_set_debug("crypto/x509/v3_crld.c",0x5c,"set_dist_point_name");
      ERR_set_error(0x22,0x96,0);
      return 0xffffffff;
    }
    iVar1 = X509V3_NAME_from_section(a,dn_sk,0x1001);
    X509V3_section_free(param_2,dn_sk);
    psVar5 = a->entries;
    a->entries = (stack_st_X509_NAME_ENTRY *)0x0;
    X509_NAME_free(a);
    if ((iVar1 == 0) || (iVar1 = OPENSSL_sk_num(psVar5), iVar1 < 1)) {
      pGVar2 = (GENERAL_NAMES *)0x0;
      goto LAB_001009a8;
    }
    pGVar2 = (GENERAL_NAMES *)0x0;
    iVar1 = OPENSSL_sk_num(psVar5);
    lVar4 = OPENSSL_sk_value(psVar5,iVar1 + -1);
    if (*(int *)(lVar4 + 0x10) != 0) {
      ERR_new();
      ERR_set_debug("crypto/x509/v3_crld.c",0x6b,"set_dist_point_name");
      ERR_set_error(0x22,0xa1,0);
      goto LAB_001009a8;
    }
  }
  if (*param_1 == 0) {
    pDVar3 = DIST_POINT_NAME_new();
    *param_1 = (long)pDVar3;
    if (pDVar3 != (DIST_POINT_NAME *)0x0) {
      if (pGVar2 == (GENERAL_NAMES *)0x0) {
        pDVar3->type = 1;
        (pDVar3->name).fullname = (GENERAL_NAMES *)psVar5;
      }
      else {
        pDVar3->type = 0;
        (pDVar3->name).fullname = pGVar2;
      }
      return 1;
    }
  }
  else {
    ERR_new();
    ERR_set_debug("crypto/x509/v3_crld.c",0x72,"set_dist_point_name");
    ERR_set_error(0x22,0xa0,0);
  }
LAB_001009a8:
  OPENSSL_sk_pop_free(pGVar2,GENERAL_NAME_free);
  OPENSSL_sk_pop_free(psVar5,&X509_NAME_ENTRY_free);
  return 0xffffffff;
}



void DIST_POINT_NAME_free(DIST_POINT_NAME *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)DIST_POINT_NAME_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}



void DIST_POINT_NAME_dup(void *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)DIST_POINT_NAME_it();
  ASN1_item_dup(it,param_1);
  return;
}



DIST_POINT * d2i_DIST_POINT(DIST_POINT **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  DIST_POINT *pDVar1;
  
  it = (ASN1_ITEM *)DIST_POINT_it();
  pDVar1 = (DIST_POINT *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pDVar1;
}



int i2d_DIST_POINT(DIST_POINT *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)DIST_POINT_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

DIST_POINT * DIST_POINT_new(void)

{
  ASN1_ITEM *it;
  DIST_POINT *pDVar1;
  
  it = (ASN1_ITEM *)DIST_POINT_it();
  pDVar1 = (DIST_POINT *)ASN1_item_new(it);
  return pDVar1;
}



long v2i_crld(X509V3_EXT_METHOD *param_1,X509V3_CTX *param_2,undefined8 param_3)

{
  char *__s1;
  int iVar1;
  int iVar2;
  GENERAL_NAME *a;
  DIST_POINT_NAME *pDVar3;
  CONF_VALUE *cnf;
  stack_st_CONF_VALUE *section;
  DIST_POINT *pDVar4;
  long lVar5;
  GENERAL_NAMES *pGVar6;
  int iVar7;
  undefined8 uVar8;
  int iVar9;
  long local_60;
  
  iVar1 = OPENSSL_sk_num(param_3);
  local_60 = OPENSSL_sk_new_reserve(0,iVar1);
  if (local_60 == 0) {
    ERR_new();
    ERR_set_debug("crypto/x509/v3_crld.c",0xfd,__func___9);
    ERR_set_error(0x22,0x8000f,0);
LAB_00100dc3:
    a = (GENERAL_NAME *)0x0;
    pGVar6 = (GENERAL_NAMES *)0x0;
LAB_00100dc7:
    GENERAL_NAME_free(a);
    GENERAL_NAMES_free(pGVar6);
    OPENSSL_sk_pop_free(local_60,DIST_POINT_free);
    local_60 = 0;
  }
  else if (0 < iVar1) {
    iVar9 = 0;
    do {
      cnf = (CONF_VALUE *)OPENSSL_sk_value(param_3,iVar9);
      if (cnf->value != (char *)0x0) {
        a = v2i_GENERAL_NAME(param_1,param_2,cnf);
        if (a == (GENERAL_NAME *)0x0) goto LAB_00100dc3;
        pGVar6 = GENERAL_NAMES_new();
        if (pGVar6 == (GENERAL_NAMES *)0x0) {
          ERR_new();
          ERR_set_debug("crypto/x509/v3_crld.c",0x112,__func___9);
          ERR_set_error(0x22,0x8000d,0);
        }
        else {
          iVar7 = OPENSSL_sk_push(pGVar6,a);
          if (iVar7 == 0) {
            ERR_new();
            ERR_set_debug("crypto/x509/v3_crld.c",0x116,__func___9);
            ERR_set_error(0x22,0x8000f,0);
          }
          else {
            pDVar4 = DIST_POINT_new();
            if (pDVar4 == (DIST_POINT *)0x0) {
              ERR_new();
              uVar8 = 0x11b;
            }
            else {
              OPENSSL_sk_push(local_60,pDVar4);
              pDVar3 = DIST_POINT_NAME_new();
              pDVar4->distpoint = pDVar3;
              if (pDVar3 != (DIST_POINT_NAME *)0x0) {
                (pDVar3->name).fullname = pGVar6;
                pDVar3->type = 0;
                goto LAB_00100ccf;
              }
              ERR_new();
              uVar8 = 0x120;
            }
            a = (GENERAL_NAME *)0x0;
            ERR_set_debug("crypto/x509/v3_crld.c",uVar8,__func___9);
            ERR_set_error(0x22,0x8000d,0);
          }
        }
        goto LAB_00100dc7;
      }
      section = X509V3_get_section(param_2,cnf->name);
      if (section == (stack_st_CONF_VALUE *)0x0) goto LAB_00100dc3;
      pDVar4 = DIST_POINT_new();
      if (pDVar4 == (DIST_POINT *)0x0) {
LAB_00100db0:
        DIST_POINT_free(pDVar4);
        X509V3_section_free(param_2,section);
        goto LAB_00100dc3;
      }
      for (iVar7 = 0; iVar2 = OPENSSL_sk_num(section), iVar7 < iVar2; iVar7 = iVar7 + 1) {
        lVar5 = OPENSSL_sk_value(section,iVar7);
        iVar2 = set_dist_point_name(pDVar4,param_2,lVar5);
        if (iVar2 < 1) {
          if (iVar2 != 0) goto LAB_00100db0;
          __s1 = *(char **)(lVar5 + 8);
          iVar2 = strcmp(__s1,"reasons");
          if (iVar2 == 0) {
            iVar2 = set_reasons(&pDVar4->reasons,*(undefined8 *)(lVar5 + 0x10));
            if (iVar2 == 0) goto LAB_00100db0;
          }
          else {
            iVar2 = strcmp(__s1,"CRLissuer");
            if (iVar2 == 0) {
              pGVar6 = (GENERAL_NAMES *)gnames_from_sectname(param_2,*(undefined8 *)(lVar5 + 0x10));
              pDVar4->CRLissuer = pGVar6;
              if (pGVar6 == (GENERAL_NAMES *)0x0) goto LAB_00100db0;
            }
          }
        }
      }
      X509V3_section_free(param_2,section);
      OPENSSL_sk_push(local_60,pDVar4);
LAB_00100ccf:
      iVar9 = iVar9 + 1;
    } while (iVar1 != iVar9);
  }
  return local_60;
}



CRL_DIST_POINTS * d2i_CRL_DIST_POINTS(CRL_DIST_POINTS **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  ASN1_VALUE *pAVar1;
  
  it = (ASN1_ITEM *)CRL_DIST_POINTS_it();
  pAVar1 = ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return (CRL_DIST_POINTS *)pAVar1;
}



int i2d_CRL_DIST_POINTS(CRL_DIST_POINTS *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)CRL_DIST_POINTS_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CRL_DIST_POINTS * CRL_DIST_POINTS_new(void)

{
  ASN1_ITEM *it;
  ASN1_VALUE *pAVar1;
  
  it = (ASN1_ITEM *)CRL_DIST_POINTS_it();
  pAVar1 = ASN1_item_new(it);
  return (CRL_DIST_POINTS *)pAVar1;
}



void CRL_DIST_POINTS_free(CRL_DIST_POINTS *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)CRL_DIST_POINTS_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}



ISSUING_DIST_POINT * d2i_ISSUING_DIST_POINT(ISSUING_DIST_POINT **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  ISSUING_DIST_POINT *pIVar1;
  
  it = (ASN1_ITEM *)ISSUING_DIST_POINT_it();
  pIVar1 = (ISSUING_DIST_POINT *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pIVar1;
}



int i2d_ISSUING_DIST_POINT(ISSUING_DIST_POINT *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)ISSUING_DIST_POINT_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ISSUING_DIST_POINT * ISSUING_DIST_POINT_new(void)

{
  ASN1_ITEM *it;
  ISSUING_DIST_POINT *pIVar1;
  
  it = (ASN1_ITEM *)ISSUING_DIST_POINT_it();
  pIVar1 = (ISSUING_DIST_POINT *)ASN1_item_new(it);
  return pIVar1;
}



void ISSUING_DIST_POINT_free(ISSUING_DIST_POINT *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)ISSUING_DIST_POINT_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}



ISSUING_DIST_POINT * v2i_idp(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char *__s1;
  char *pcVar1;
  int iVar2;
  ISSUING_DIST_POINT *a;
  CONF_VALUE *value;
  int iVar3;
  
  iVar3 = 0;
  a = ISSUING_DIST_POINT_new();
  if (a == (ISSUING_DIST_POINT *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/x509/v3_crld.c",0x17e,"v2i_idp");
    ERR_set_error(0x22,0x8000d,0);
LAB_00101188:
    ISSUING_DIST_POINT_free(a);
    a = (ISSUING_DIST_POINT *)0x0;
  }
  else {
    for (; iVar2 = OPENSSL_sk_num(param_3), iVar3 < iVar2; iVar3 = iVar3 + 1) {
      value = (CONF_VALUE *)OPENSSL_sk_value(param_3,iVar3);
      __s1 = value->name;
      pcVar1 = value->value;
      iVar2 = set_dist_point_name(a,param_2,value);
      if (iVar2 < 1) {
        if (iVar2 != 0) goto LAB_00101188;
        iVar2 = strcmp(__s1,"onlyuser");
        if (iVar2 == 0) {
          iVar2 = X509V3_get_value_bool(value,&a->onlyuser);
        }
        else {
          iVar2 = strcmp(__s1,"onlyCA");
          if (iVar2 != 0) {
            iVar2 = strcmp(__s1,"onlyAA");
            if (iVar2 == 0) {
              iVar2 = X509V3_get_value_bool(value,&a->onlyattr);
            }
            else {
              iVar2 = strcmp(__s1,"indirectCRL");
              if (iVar2 != 0) {
                iVar2 = strcmp(__s1,"onlysomereasons");
                if (iVar2 == 0) {
                  iVar2 = set_reasons(&a->onlysomereasons,pcVar1);
                  goto joined_r0x001011b6;
                }
                ERR_new();
                ERR_set_debug("crypto/x509/v3_crld.c",0x19a,"v2i_idp");
                ERR_set_error(0x22,0x6a,0);
                ERR_add_error_data(4,"name=",value->name,", value=",value->value);
                goto LAB_00101188;
              }
              iVar2 = X509V3_get_value_bool(value,&a->indirectCRL);
            }
            if (iVar2 != 0) goto LAB_00101120;
            goto LAB_00101188;
          }
          iVar2 = X509V3_get_value_bool(value,&a->onlyCA);
        }
joined_r0x001011b6:
        if (iVar2 == 0) goto LAB_00101188;
      }
LAB_00101120:
    }
  }
  return a;
}



int DIST_POINT_set_dpname(DIST_POINT_NAME *dpn,X509_NAME *iname)

{
  GENERAL_NAMES *pGVar1;
  int iVar2;
  int iVar3;
  X509_NAME *pXVar4;
  X509_NAME_ENTRY *ne;
  
  if (dpn == (DIST_POINT_NAME *)0x0) {
    return 1;
  }
  if (dpn->type != 1) {
    return 1;
  }
  pGVar1 = (dpn->name).fullname;
  X509_NAME_free(dpn->dpname);
  pXVar4 = X509_NAME_dup(iname);
  dpn->dpname = pXVar4;
  if (pXVar4 != (X509_NAME *)0x0) {
    for (iVar3 = 0; iVar2 = OPENSSL_sk_num(pGVar1), iVar3 < iVar2; iVar3 = iVar3 + 1) {
      ne = (X509_NAME_ENTRY *)OPENSSL_sk_value(pGVar1,iVar3);
      iVar2 = X509_NAME_add_entry(dpn->dpname,ne,-1,(uint)(iVar3 == 0));
      if (iVar2 == 0) goto LAB_00101324;
    }
    iVar3 = i2d_X509_NAME(dpn->dpname,(uchar **)0x0);
    if (-1 < iVar3) {
      return 1;
    }
LAB_00101324:
    X509_NAME_free(dpn->dpname);
    dpn->dpname = (X509_NAME *)0x0;
  }
  return 0;
}



void d2i_OSSL_AA_DIST_POINT(ASN1_VALUE **param_1,uchar **param_2,long param_3)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_AA_DIST_POINT_it();
  ASN1_item_d2i(param_1,param_2,param_3,it);
  return;
}



void i2d_OSSL_AA_DIST_POINT(ASN1_VALUE *param_1,uchar **param_2)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_AA_DIST_POINT_it();
  ASN1_item_i2d(param_1,param_2,it);
  return;
}



void OSSL_AA_DIST_POINT_new(void)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_AA_DIST_POINT_it();
  ASN1_item_new(it);
  return;
}



void OSSL_AA_DIST_POINT_free(ASN1_VALUE *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_AA_DIST_POINT_it();
  ASN1_item_free(param_1,it);
  return;
}



/* WARNING: Type propagation algorithm not settling */

undefined8 * v2i_aaidp(X509V3_EXT_METHOD *param_1,X509V3_CTX *param_2,undefined8 param_3)

{
  char *__s1;
  int iVar1;
  int iVar2;
  CONF_VALUE *pCVar3;
  GENERAL_NAME *a;
  undefined8 *puVar4;
  DIST_POINT_NAME *pDVar5;
  stack_st_CONF_VALUE *section;
  undefined8 *puVar6;
  GENERAL_NAMES *local_40;
  
  pCVar3 = (CONF_VALUE *)OPENSSL_sk_value(param_3,0);
  if (pCVar3 == (CONF_VALUE *)0x0) {
    return (undefined8 *)0x0;
  }
  if (pCVar3->value == (char *)0x0) {
    section = X509V3_get_section(param_2,pCVar3->name);
    if (section != (stack_st_CONF_VALUE *)0x0) {
      puVar6 = (undefined8 *)OSSL_AA_DIST_POINT_new();
      if (puVar6 != (undefined8 *)0x0) {
        iVar1 = 0;
        do {
          iVar2 = OPENSSL_sk_num(section);
          if (iVar2 <= iVar1) {
            X509V3_section_free(param_2,section);
            return puVar6;
          }
          pCVar3 = (CONF_VALUE *)OPENSSL_sk_value(section,iVar1);
          iVar2 = set_dist_point_name(puVar6,param_2,pCVar3);
          if (iVar2 < 1) {
            if (iVar2 != 0) break;
            __s1 = pCVar3->name;
            iVar2 = strcmp(__s1,"reasons");
            if (iVar2 == 0) {
              iVar2 = set_reasons(puVar6 + 1,pCVar3->value);
            }
            else {
              iVar2 = strcmp(__s1,"indirectCRL");
              if (iVar2 != 0) {
                iVar2 = strcmp(__s1,"containsUserAttributeCerts");
                if (iVar2 == 0) {
                  iVar2 = X509V3_get_value_bool(pCVar3,(int *)(puVar6 + 3));
                }
                else {
                  iVar2 = strcmp(__s1,"containsAACerts");
                  if (iVar2 == 0) {
                    iVar2 = X509V3_get_value_bool(pCVar3,(int *)((long)puVar6 + 0x1c));
                  }
                  else {
                    iVar2 = strcmp(__s1,"containsSOAPublicKeyCerts");
                    if (iVar2 != 0) goto LAB_00101550;
                    iVar2 = X509V3_get_value_bool(pCVar3,(int *)(puVar6 + 4));
                  }
                }
                if (iVar2 != 0) goto LAB_00101550;
                break;
              }
              iVar2 = X509V3_get_value_bool(pCVar3,(int *)((long)puVar6 + 0x14));
            }
            if (iVar2 == 0) break;
          }
LAB_00101550:
          iVar1 = iVar1 + 1;
        } while( true );
      }
      a = (GENERAL_NAME *)0x0;
      puVar4 = (undefined8 *)0x0;
      OSSL_AA_DIST_POINT_free(puVar6);
      X509V3_section_free(param_2,section);
      local_40 = (GENERAL_NAMES *)0x0;
      goto LAB_001015d0;
    }
  }
  else {
    a = v2i_GENERAL_NAME(param_1,param_2,pCVar3);
    if (a != (GENERAL_NAME *)0x0) {
      local_40 = GENERAL_NAMES_new();
      if (local_40 == (GENERAL_NAMES *)0x0) {
        ERR_new();
        puVar4 = (undefined8 *)0x0;
        ERR_set_debug("crypto/x509/v3_crld.c",0x252,__func___0);
        ERR_set_error(0x22,0x8000d,0);
      }
      else {
        iVar1 = OPENSSL_sk_push(local_40,a);
        if (iVar1 == 0) {
          ERR_new();
          puVar4 = (undefined8 *)0x0;
          ERR_set_debug("crypto/x509/v3_crld.c",0x256,__func___0);
          ERR_set_error(0x22,0x8000f,0);
        }
        else {
          puVar4 = (undefined8 *)OSSL_AA_DIST_POINT_new();
          if (puVar4 == (undefined8 *)0x0) {
            ERR_new();
            a = (GENERAL_NAME *)0x0;
            ERR_set_debug("crypto/x509/v3_crld.c",0x25b,__func___0);
            ERR_set_error(0x22,0x8000d,0);
          }
          else {
            pDVar5 = DIST_POINT_NAME_new();
            *puVar4 = pDVar5;
            if (pDVar5 != (DIST_POINT_NAME *)0x0) {
              pDVar5->type = 0;
              (pDVar5->name).fullname = local_40;
              return puVar4;
            }
            ERR_new();
            ERR_set_debug("crypto/x509/v3_crld.c",0x25f,__func___0);
            ERR_set_error(0x22,0x8000d,0);
            a = (GENERAL_NAME *)0x0;
          }
        }
      }
      goto LAB_001015d0;
    }
  }
  local_40 = (GENERAL_NAMES *)0x0;
  puVar4 = (undefined8 *)0x0;
  a = (GENERAL_NAME *)0x0;
LAB_001015d0:
  OSSL_AA_DIST_POINT_free(puVar4);
  GENERAL_NAME_free(a);
  GENERAL_NAMES_free(local_40);
  return (undefined8 *)0x0;
}


