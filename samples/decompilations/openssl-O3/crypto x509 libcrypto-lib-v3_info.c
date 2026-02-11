
undefined1 * ACCESS_DESCRIPTION_it(void)

{
  return local_it_1;
}



undefined1 * AUTHORITY_INFO_ACCESS_it(void)

{
  return local_it_0;
}



stack_st_CONF_VALUE *
i2v_AUTHORITY_INFO_ACCESS
          (X509V3_EXT_METHOD *param_1,undefined8 param_2,stack_st_CONF_VALUE *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  stack_st_CONF_VALUE *psVar3;
  long lVar4;
  size_t sVar5;
  size_t sVar6;
  char *buf;
  stack_st_CONF_VALUE *ret;
  int iVar7;
  long in_FS_OFFSET;
  char local_98 [88];
  long local_40;
  
  iVar7 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ret = param_3;
  do {
    iVar1 = OPENSSL_sk_num(param_2);
    if (iVar1 <= iVar7) {
      if (param_3 == (stack_st_CONF_VALUE *)0x0 && ret == (stack_st_CONF_VALUE *)0x0) {
        ret = (stack_st_CONF_VALUE *)OPENSSL_sk_new_null();
      }
LAB_0010014b:
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return ret;
    }
    puVar2 = (undefined8 *)OPENSSL_sk_value(param_2,iVar7);
    psVar3 = i2v_GENERAL_NAME(param_1,(GENERAL_NAME *)puVar2[1],ret);
    if (psVar3 == (stack_st_CONF_VALUE *)0x0) {
      ERR_new();
      ERR_set_debug("crypto/x509/v3_info.c",0x4d,"i2v_AUTHORITY_INFO_ACCESS");
      ERR_set_error(0x22,0x8000d,0);
      psVar3 = ret;
LAB_001001a8:
      if ((param_3 == (stack_st_CONF_VALUE *)0x0) && (psVar3 != (stack_st_CONF_VALUE *)0x0)) {
        ret = (stack_st_CONF_VALUE *)0x0;
        OPENSSL_sk_pop_free(psVar3,&X509V3_conf_free);
      }
      else {
        ret = (stack_st_CONF_VALUE *)0x0;
      }
      goto LAB_0010014b;
    }
    lVar4 = OPENSSL_sk_value(psVar3,iVar7);
    i2t_ASN1_OBJECT(local_98,0x50,(ASN1_OBJECT *)*puVar2);
    sVar5 = strlen(local_98);
    sVar6 = strlen(*(char **)(lVar4 + 8));
    iVar1 = (int)sVar5 + 4 + (int)sVar6;
    buf = (char *)CRYPTO_malloc(iVar1,"crypto/x509/v3_info.c",0x54);
    if (buf == (char *)0x0) goto LAB_001001a8;
    iVar7 = iVar7 + 1;
    BIO_snprintf(buf,(long)iVar1,"%s - %s",local_98,*(undefined8 *)(lVar4 + 8));
    CRYPTO_free(*(void **)(lVar4 + 8));
    *(char **)(lVar4 + 8) = buf;
    ret = psVar3;
  } while( true );
}



void ACCESS_DESCRIPTION_free(ACCESS_DESCRIPTION *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)ACCESS_DESCRIPTION_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}



ACCESS_DESCRIPTION * d2i_ACCESS_DESCRIPTION(ACCESS_DESCRIPTION **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  ACCESS_DESCRIPTION *pAVar1;
  
  it = (ASN1_ITEM *)ACCESS_DESCRIPTION_it();
  pAVar1 = (ACCESS_DESCRIPTION *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pAVar1;
}



int i2d_ACCESS_DESCRIPTION(ACCESS_DESCRIPTION *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)ACCESS_DESCRIPTION_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ACCESS_DESCRIPTION * ACCESS_DESCRIPTION_new(void)

{
  ASN1_ITEM *it;
  ACCESS_DESCRIPTION *pAVar1;
  
  it = (ASN1_ITEM *)ACCESS_DESCRIPTION_it();
  pAVar1 = (ACCESS_DESCRIPTION *)ASN1_item_new(it);
  return pAVar1;
}



long v2i_AUTHORITY_INFO_ACCESS(X509V3_EXT_METHOD *param_1,X509V3_CTX *param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  GENERAL_NAME *pGVar4;
  ASN1_OBJECT *pAVar5;
  long lVar6;
  ACCESS_DESCRIPTION *pAVar7;
  int iVar8;
  long in_FS_OFFSET;
  CONF_VALUE local_58;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = OPENSSL_sk_num(param_3);
  lVar2 = OPENSSL_sk_new_reserve(0,iVar1);
  if (lVar2 == 0) {
    ERR_new();
    ERR_set_debug("crypto/x509/v3_info.c",0x73,"v2i_AUTHORITY_INFO_ACCESS");
    ERR_set_error(0x22,0x8000f,0);
LAB_0010040e:
    lVar2 = 0;
  }
  else if (0 < iVar1) {
    iVar8 = 0;
    do {
      lVar6 = OPENSSL_sk_value(param_3,iVar8);
      pAVar7 = ACCESS_DESCRIPTION_new();
      if (pAVar7 == (ACCESS_DESCRIPTION *)0x0) {
        ERR_new();
        ERR_set_debug("crypto/x509/v3_info.c",0x79,"v2i_AUTHORITY_INFO_ACCESS");
        ERR_set_error(0x22,0x8000d,0);
LAB_001003ff:
        OPENSSL_sk_pop_free(lVar2,ACCESS_DESCRIPTION_free);
        goto LAB_0010040e;
      }
      OPENSSL_sk_push(lVar2,pAVar7);
      pcVar3 = strchr(*(char **)(lVar6 + 8),0x3b);
      if (pcVar3 == (char *)0x0) {
        ERR_new();
        ERR_set_debug("crypto/x509/v3_info.c",0x7f,"v2i_AUTHORITY_INFO_ACCESS");
        ERR_set_error(0x22,0x8f,0);
        goto LAB_001003ff;
      }
      local_58.name = pcVar3 + 1;
      local_58.value = *(char **)(lVar6 + 0x10);
      pGVar4 = v2i_GENERAL_NAME_ex(pAVar7->location,param_1,param_2,&local_58,0);
      if (pGVar4 == (GENERAL_NAME *)0x0) goto LAB_001003ff;
      pcVar3 = (char *)CRYPTO_strndup(*(long *)(lVar6 + 8),(long)pcVar3 - *(long *)(lVar6 + 8),
                                      "crypto/x509/v3_info.c",0x86);
      if (pcVar3 == (char *)0x0) goto LAB_001003ff;
      pAVar5 = OBJ_txt2obj(pcVar3,0);
      pAVar7->method = pAVar5;
      if (pAVar5 == (ASN1_OBJECT *)0x0) {
        ERR_new();
        ERR_set_debug("crypto/x509/v3_info.c",0x8a,"v2i_AUTHORITY_INFO_ACCESS");
        ERR_set_error(0x22,0x77,"value=%s",pcVar3);
        CRYPTO_free(pcVar3);
        goto LAB_001003ff;
      }
      iVar8 = iVar8 + 1;
      CRYPTO_free(pcVar3);
    } while (iVar1 != iVar8);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



AUTHORITY_INFO_ACCESS * d2i_AUTHORITY_INFO_ACCESS(AUTHORITY_INFO_ACCESS **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  ASN1_VALUE *pAVar1;
  
  it = (ASN1_ITEM *)AUTHORITY_INFO_ACCESS_it();
  pAVar1 = ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return (AUTHORITY_INFO_ACCESS *)pAVar1;
}



int i2d_AUTHORITY_INFO_ACCESS(AUTHORITY_INFO_ACCESS *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)AUTHORITY_INFO_ACCESS_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

AUTHORITY_INFO_ACCESS * AUTHORITY_INFO_ACCESS_new(void)

{
  ASN1_ITEM *it;
  ASN1_VALUE *pAVar1;
  
  it = (ASN1_ITEM *)AUTHORITY_INFO_ACCESS_it();
  pAVar1 = ASN1_item_new(it);
  return (AUTHORITY_INFO_ACCESS *)pAVar1;
}



void AUTHORITY_INFO_ACCESS_free(AUTHORITY_INFO_ACCESS *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)AUTHORITY_INFO_ACCESS_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}



int i2a_ACCESS_DESCRIPTION(BIO *bp,ACCESS_DESCRIPTION *a)

{
  i2a_ASN1_OBJECT(bp,a->method);
  return 2;
}


