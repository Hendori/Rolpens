
undefined1 * OSSL_OBJECT_DIGEST_INFO_it(void)

{
  return local_it_7;
}



undefined1 * OSSL_ISSUER_SERIAL_it(void)

{
  return local_it_6;
}



undefined1 * X509_ACERT_ISSUER_V2FORM_it(void)

{
  return local_it_5;
}



undefined1 * X509_ACERT_ISSUER_it(void)

{
  return local_it_4;
}



undefined1 * X509_HOLDER_it(void)

{
  return local_it_3;
}



undefined1 * X509_ACERT_INFO_it(void)

{
  return local_it_2;
}



undefined1 * X509_ACERT_it(void)

{
  return local_it_1;
}



void d2i_X509_ACERT(ASN1_VALUE **param_1,uchar **param_2,long param_3)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)X509_ACERT_it();
  ASN1_item_d2i(param_1,param_2,param_3,it);
  return;
}



void i2d_X509_ACERT(ASN1_VALUE *param_1,uchar **param_2)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)X509_ACERT_it();
  ASN1_item_i2d(param_1,param_2,it);
  return;
}



void X509_ACERT_new(void)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)X509_ACERT_it();
  ASN1_item_new(it);
  return;
}



void X509_ACERT_free(ASN1_VALUE *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)X509_ACERT_it();
  ASN1_item_free(param_1,it);
  return;
}



void X509_ACERT_dup(void *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)X509_ACERT_it();
  ASN1_item_dup(it,param_1);
  return;
}



void X509_ACERT_INFO_new(void)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)X509_ACERT_INFO_it();
  ASN1_item_new(it);
  return;
}



void X509_ACERT_INFO_free(ASN1_VALUE *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)X509_ACERT_INFO_it();
  ASN1_item_free(param_1,it);
  return;
}



void OSSL_ISSUER_SERIAL_new(void)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_ISSUER_SERIAL_it();
  ASN1_item_new(it);
  return;
}



void OSSL_ISSUER_SERIAL_free(ASN1_VALUE *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_ISSUER_SERIAL_it();
  ASN1_item_free(param_1,it);
  return;
}



void OSSL_OBJECT_DIGEST_INFO_new(void)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_OBJECT_DIGEST_INFO_it();
  ASN1_item_new(it);
  return;
}



void OSSL_OBJECT_DIGEST_INFO_free(ASN1_VALUE *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_OBJECT_DIGEST_INFO_it();
  ASN1_item_free(param_1,it);
  return;
}



void X509_ACERT_ISSUER_V2FORM_new(void)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)X509_ACERT_ISSUER_V2FORM_it();
  ASN1_item_new(it);
  return;
}



void X509_ACERT_ISSUER_V2FORM_free(ASN1_VALUE *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)X509_ACERT_ISSUER_V2FORM_it();
  ASN1_item_free(param_1,it);
  return;
}



void PEM_read_bio_X509_ACERT(BIO *param_1,void **param_2,undefined1 *param_3,void *param_4)

{
  PEM_ASN1_read_bio(d2i_X509_ACERT,"ATTRIBUTE CERTIFICATE",param_1,param_2,param_3,param_4);
  return;
}



void PEM_read_X509_ACERT(FILE *param_1,void **param_2,undefined1 *param_3,void *param_4)

{
  PEM_ASN1_read(d2i_X509_ACERT,"ATTRIBUTE CERTIFICATE",param_1,param_2,param_3,param_4);
  return;
}



void PEM_write_bio_X509_ACERT(BIO *param_1,void *param_2)

{
  PEM_ASN1_write_bio(i2d_X509_ACERT,"ATTRIBUTE CERTIFICATE",param_1,param_2,(EVP_CIPHER *)0x0,
                     (uchar *)0x0,0,(undefined1 *)0x0,(void *)0x0);
  return;
}



void PEM_write_X509_ACERT(FILE *param_1,void *param_2)

{
  PEM_ASN1_write(i2d_X509_ACERT,"ATTRIBUTE CERTIFICATE",param_1,param_2,(EVP_CIPHER *)0x0,
                 (uchar *)0x0,0,(undefined1 *)0x0,(void *)0x0);
  return;
}



void OSSL_OBJECT_DIGEST_INFO_get0_digest
               (ASN1_ENUMERATED *param_1,undefined4 *param_2,long *param_3,long *param_4)

{
  long lVar1;
  
  if (param_2 != (undefined4 *)0x0) {
    lVar1 = ASN1_ENUMERATED_get(param_1);
    *param_2 = (int)lVar1;
  }
  if (param_3 != (long *)0x0) {
    *param_3 = (long)&param_1[1].data;
  }
  if (param_4 != (long *)0x0) {
    *param_4 = (long)(param_1 + 2);
  }
  return;
}



undefined8 OSSL_ISSUER_SERIAL_get0_issuer(undefined8 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  int *piVar3;
  
  uVar1 = *param_1;
  iVar2 = OPENSSL_sk_num(uVar1);
  if (iVar2 == 1) {
    piVar3 = (int *)OPENSSL_sk_value(uVar1,0);
    if (*piVar3 == 4) {
      return *(undefined8 *)(piVar3 + 2);
    }
  }
  return 0;
}



long OSSL_ISSUER_SERIAL_get0_serial(long param_1)

{
  return param_1 + 8;
}



undefined8 OSSL_ISSUER_SERIAL_get0_issuerUID(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



void X509_ACERT_get_version(undefined8 *param_1)

{
  ASN1_INTEGER_get((ASN1_INTEGER *)*param_1);
  return;
}



void X509_ACERT_get0_signature(long param_1,long *param_2,long *param_3)

{
  if (param_2 != (long *)0x0) {
    *param_2 = param_1 + 0x18;
  }
  if (param_3 != (long *)0x0) {
    *param_3 = param_1 + 8;
  }
  return;
}



void X509_ACERT_get_signature_nid(long param_1)

{
  OBJ_obj2nid(*(ASN1_OBJECT **)(param_1 + 8));
  return;
}



undefined8 X509_ACERT_get0_holder_entityName(long *param_1)

{
  return *(undefined8 *)(*param_1 + 0x20);
}



undefined8 X509_ACERT_get0_holder_baseCertId(long *param_1)

{
  return *(undefined8 *)(*param_1 + 0x18);
}



undefined8 X509_ACERT_get0_holder_digest(long *param_1)

{
  return *(undefined8 *)(*param_1 + 0x28);
}



undefined8 X509_ACERT_get0_issuerName(long *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  int *piVar4;
  
  if ((*(int *)(*param_1 + 0x30) == 1) &&
     (puVar1 = *(undefined8 **)(*param_1 + 0x38), puVar1 != (undefined8 *)0x0)) {
    uVar2 = *puVar1;
    iVar3 = OPENSSL_sk_num(uVar2);
    if (iVar3 == 1) {
      piVar4 = (int *)OPENSSL_sk_value(uVar2,0);
      if (*piVar4 == 4) {
        return *(undefined8 *)(piVar4 + 2);
      }
    }
    return 0;
  }
  return 0;
}



undefined8 X509_ACERT_get0_issuerUID(long *param_1)

{
  return *(undefined8 *)(*param_1 + 0x80);
}



long X509_ACERT_get0_info_sigalg(long *param_1)

{
  return *param_1 + 0x40;
}



long X509_ACERT_get0_serialNumber(long *param_1)

{
  return *param_1 + 0x50;
}



undefined8 X509_ACERT_get0_notBefore(long *param_1)

{
  return *(undefined8 *)(*param_1 + 0x68);
}



undefined8 X509_ACERT_get0_notAfter(long *param_1)

{
  return *(undefined8 *)(*param_1 + 0x70);
}



void X509_ACERT_get_attr_count(long *param_1)

{
  X509at_get_attr_count(*(stack_st_X509_ATTRIBUTE **)(*param_1 + 0x78));
  return;
}



void X509_ACERT_get_attr_by_NID(long *param_1,int param_2,int param_3)

{
  X509at_get_attr_by_NID(*(stack_st_X509_ATTRIBUTE **)(*param_1 + 0x78),param_2,param_3);
  return;
}



void X509_ACERT_get_attr_by_OBJ(long *param_1,ASN1_OBJECT *param_2,int param_3)

{
  X509at_get_attr_by_OBJ(*(stack_st_X509_ATTRIBUTE **)(*param_1 + 0x78),param_2,param_3);
  return;
}



void X509_ACERT_get_attr(long *param_1,int param_2)

{
  X509at_get_attr(*(stack_st_X509_ATTRIBUTE **)(*param_1 + 0x78),param_2);
  return;
}



void X509_ACERT_delete_attr(long *param_1,int param_2)

{
  X509at_delete_attr(*(stack_st_X509_ATTRIBUTE **)(*param_1 + 0x78),param_2);
  return;
}



bool X509_ACERT_add1_attr(long *param_1,X509_ATTRIBUTE *param_2)

{
  stack_st_X509_ATTRIBUTE *psVar1;
  
  psVar1 = X509at_add1_attr((stack_st_X509_ATTRIBUTE **)(*param_1 + 0x78),param_2);
  return psVar1 != (stack_st_X509_ATTRIBUTE *)0x0;
}



bool X509_ACERT_add1_attr_by_OBJ
               (long *param_1,ASN1_OBJECT *param_2,int param_3,uchar *param_4,int param_5)

{
  stack_st_X509_ATTRIBUTE *psVar1;
  
  psVar1 = X509at_add1_attr_by_OBJ
                     ((stack_st_X509_ATTRIBUTE **)(*param_1 + 0x78),param_2,param_3,param_4,param_5)
  ;
  return psVar1 != (stack_st_X509_ATTRIBUTE *)0x0;
}



bool X509_ACERT_add1_attr_by_NID(long *param_1,int param_2,int param_3,uchar *param_4,int param_5)

{
  stack_st_X509_ATTRIBUTE *psVar1;
  
  psVar1 = X509at_add1_attr_by_NID
                     ((stack_st_X509_ATTRIBUTE **)(*param_1 + 0x78),param_2,param_3,param_4,param_5)
  ;
  return psVar1 != (stack_st_X509_ATTRIBUTE *)0x0;
}



bool X509_ACERT_add1_attr_by_txt(long *param_1,char *param_2,int param_3,uchar *param_4,int param_5)

{
  stack_st_X509_ATTRIBUTE *psVar1;
  
  psVar1 = X509at_add1_attr_by_txt
                     ((stack_st_X509_ATTRIBUTE **)(*param_1 + 0x78),param_2,param_3,param_4,param_5)
  ;
  return psVar1 != (stack_st_X509_ATTRIBUTE *)0x0;
}



int X509_ACERT_add_attr_nconf(CONF *param_1,char *param_2,undefined8 param_3)

{
  char *__s1;
  int iVar1;
  int iVar2;
  stack_st_CONF_VALUE *psVar3;
  long lVar4;
  ASN1_TYPE *a;
  size_t sVar5;
  int iVar6;
  char *str;
  long in_FS_OFFSET;
  uchar *local_48;
  long local_40;
  
  iVar6 = 0;
  iVar2 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  psVar3 = NCONF_get_section(param_1,param_2);
  if (psVar3 == (stack_st_CONF_VALUE *)0x0) {
LAB_00100777:
    iVar2 = 0;
  }
  else {
    iVar1 = OPENSSL_sk_num(psVar3);
    if (0 < iVar1) {
      do {
        lVar4 = OPENSSL_sk_value(psVar3,iVar6);
        __s1 = *(char **)(lVar4 + 0x10);
        if (__s1 == (char *)0x0) {
          ERR_new();
          ERR_set_debug("crypto/x509/x509_acert.c",0x116,"X509_ACERT_add_attr_nconf");
          ERR_set_error(0xb,0x8a,"name=%s,section=%s",*(undefined8 *)(lVar4 + 8),param_2);
          goto LAB_00100726;
        }
        str = __s1 + 5;
        iVar1 = strncmp(__s1,"ASN1:",5);
        if (iVar1 == 0) {
          while (iVar1 = ossl_ctype_check((int)*str,8), iVar1 != 0) {
            str = str + 1;
          }
          local_48 = (uchar *)0x0;
          a = ASN1_generate_nconf(str,param_1);
          if (a == (ASN1_TYPE *)0x0) goto LAB_00100726;
          iVar2 = i2d_ASN1_TYPE(a,&local_48);
          iVar2 = X509_ACERT_add1_attr_by_txt
                            (param_3,*(undefined8 *)(lVar4 + 8),0x10,local_48,iVar2);
          CRYPTO_free(local_48);
          ASN1_TYPE_free(a);
          if (iVar2 == 0) goto LAB_00100726;
        }
        else {
          sVar5 = strlen(__s1);
          iVar2 = X509_ACERT_add1_attr_by_txt
                            (param_3,*(undefined8 *)(lVar4 + 8),4,__s1,sVar5 & 0xffffffff);
          if (iVar2 == 0) goto LAB_00100777;
        }
        iVar6 = iVar6 + 1;
        iVar1 = OPENSSL_sk_num(psVar3);
      } while (iVar6 < iVar1);
    }
    iVar2 = 1;
  }
LAB_00100726:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



void X509_ACERT_get_ext_d2i(long *param_1,int param_2,int *param_3,int *param_4)

{
  X509V3_get_d2i(*(stack_st_X509_EXTENSION **)(*param_1 + 0x88),param_2,param_3,param_4);
  return;
}



void X509_ACERT_add1_ext_i2d(long *param_1,int param_2,void *param_3,int param_4,ulong param_5)

{
  X509V3_add1_i2d((stack_st_X509_EXTENSION **)(*param_1 + 0x88),param_2,param_3,param_4,param_5);
  return;
}



undefined8 X509_ACERT_get0_extensions(long *param_1)

{
  return *(undefined8 *)(*param_1 + 0x88);
}


