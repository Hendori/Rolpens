
undefined1 * SXNETID_it(void)

{
  return local_it_6;
}



undefined1 * SXNET_it(void)

{
  return local_it_5;
}



undefined8 sxnet_i2r(undefined8 param_1,undefined8 *param_2,BIO *param_3,ulong param_4)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  char *ptr;
  undefined8 uVar4;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  
  param_4 = param_4 & 0xffffffff;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ASN1_INTEGER_get_int64(&local_48,*param_2);
  if ((iVar1 == 0) || (local_48 == 0x7fffffffffffffff)) {
    BIO_printf(param_3,"%*sVersion: <unsupported>",param_4,&_LC0);
  }
  else {
    BIO_printf(param_3,"%*sVersion: %ld (0x%lX)",param_4,&_LC0,local_48 + 1);
  }
  iVar1 = 0;
  do {
    iVar2 = OPENSSL_sk_num(param_2[1]);
    if (iVar2 <= iVar1) {
      uVar4 = 1;
LAB_00100115:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return uVar4;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    puVar3 = (undefined8 *)OPENSSL_sk_value(param_2[1],iVar1);
    ptr = i2s_ASN1_INTEGER((X509V3_EXT_METHOD *)0x0,(ASN1_INTEGER *)*puVar3);
    if (ptr == (char *)0x0) {
      uVar4 = 0;
      goto LAB_00100115;
    }
    iVar1 = iVar1 + 1;
    BIO_printf(param_3,"\n%*sZone: %s, User: ",param_4,&_LC0,ptr);
    CRYPTO_free(ptr);
    ASN1_STRING_print(param_3,(ASN1_STRING *)puVar3[1]);
  } while( true );
}



SXNETID * d2i_SXNETID(SXNETID **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  SXNETID *pSVar1;
  
  it = (ASN1_ITEM *)SXNETID_it();
  pSVar1 = (SXNETID *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pSVar1;
}



int i2d_SXNETID(SXNETID *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)SXNETID_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

SXNETID * SXNETID_new(void)

{
  ASN1_ITEM *it;
  SXNETID *pSVar1;
  
  it = (ASN1_ITEM *)SXNETID_it();
  pSVar1 = (SXNETID *)ASN1_item_new(it);
  return pSVar1;
}



void SXNETID_free(SXNETID *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)SXNETID_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}



SXNET * d2i_SXNET(SXNET **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  SXNET *pSVar1;
  
  it = (ASN1_ITEM *)SXNET_it();
  pSVar1 = (SXNET *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pSVar1;
}



int i2d_SXNET(SXNET *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)SXNET_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

SXNET * SXNET_new(void)

{
  ASN1_ITEM *it;
  SXNET *pSVar1;
  
  it = (ASN1_ITEM *)SXNET_it();
  pSVar1 = (SXNET *)ASN1_item_new(it);
  return pSVar1;
}



void SXNET_free(SXNET *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)SXNET_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}



ASN1_OCTET_STRING * SXNET_get_id_INTEGER(SXNET *sx,ASN1_INTEGER *zone)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  
  iVar3 = 0;
  while( true ) {
    iVar1 = OPENSSL_sk_num(sx->ids);
    if (iVar1 <= iVar3) {
      return (ASN1_OCTET_STRING *)0x0;
    }
    puVar2 = (undefined8 *)OPENSSL_sk_value(sx->ids,iVar3);
    iVar1 = ASN1_INTEGER_cmp((ASN1_INTEGER *)*puVar2,zone);
    if (iVar1 == 0) break;
    iVar3 = iVar3 + 1;
  }
  return (ASN1_OCTET_STRING *)puVar2[1];
}



int SXNET_add_id_INTEGER(SXNET **psx,ASN1_INTEGER *izone,char *user,int userlen)

{
  SXNET *pSVar1;
  int iVar2;
  ASN1_OCTET_STRING *pAVar3;
  size_t sVar4;
  SXNETID *a;
  SXNET *sx;
  undefined8 uVar5;
  
  if ((izone == (ASN1_INTEGER *)0x0 || user == (char *)0x0) || (psx == (SXNET **)0x0)) {
    ERR_new();
    ERR_set_debug("crypto/x509/v3_sxnet.c",0xa7,"SXNET_add_id_INTEGER");
    ERR_set_error(0x22,0x6b,0);
    return 0;
  }
  if (userlen == -1) {
    sVar4 = strlen(user);
    userlen = (int)sVar4;
    if (0x40 < userlen) goto LAB_001003fb;
  }
  else if (0x40 < userlen) {
LAB_001003fb:
    ERR_new();
    ERR_set_debug("crypto/x509/v3_sxnet.c",0xad,"SXNET_add_id_INTEGER");
    ERR_set_error(0x22,0x84,0);
    return 0;
  }
  pSVar1 = *psx;
  sx = pSVar1;
  if (pSVar1 == (SXNET *)0x0) {
    sx = SXNET_new();
    if (sx == (SXNET *)0x0) {
      ERR_new();
      uVar5 = 0xb2;
      a = (SXNETID *)0x0;
      sx = pSVar1;
      goto LAB_00100531;
    }
    iVar2 = ASN1_INTEGER_set(sx->version,0);
    if (iVar2 != 0) goto LAB_00100385;
    ERR_new();
    a = (SXNETID *)0x0;
    ERR_set_debug("crypto/x509/v3_sxnet.c",0xb6,"SXNET_add_id_INTEGER");
    ERR_set_error(0x22,0x8000d,0);
  }
  else {
LAB_00100385:
    pAVar3 = SXNET_get_id_INTEGER(sx,izone);
    if (pAVar3 != (ASN1_OCTET_STRING *)0x0) {
      ERR_new();
      ERR_set_debug("crypto/x509/v3_sxnet.c",0xbc,"SXNET_add_id_INTEGER");
      ERR_set_error(0x22,0x85,0);
      pSVar1 = *psx;
      goto joined_r0x0010055d;
    }
    a = SXNETID_new();
    if (a == (SXNETID *)0x0) {
      ERR_new();
      uVar5 = 0xc3;
    }
    else {
      iVar2 = ASN1_OCTET_STRING_set(a->user,(uchar *)user,userlen);
      if (iVar2 != 0) {
        iVar2 = OPENSSL_sk_push(sx->ids,a);
        if (iVar2 != 0) {
          ASN1_INTEGER_free(a->zone);
          a->zone = izone;
          *psx = sx;
          return 1;
        }
        ERR_new();
        ERR_set_debug("crypto/x509/v3_sxnet.c",0xcc,"SXNET_add_id_INTEGER");
        ERR_set_error(0x22,0x8000f,0);
        goto LAB_00100550;
      }
      ERR_new();
      uVar5 = 200;
    }
LAB_00100531:
    ERR_set_debug("crypto/x509/v3_sxnet.c",uVar5,"SXNET_add_id_INTEGER");
    ERR_set_error(0x22,0x8000d,0);
  }
LAB_00100550:
  SXNETID_free(a);
  pSVar1 = *psx;
joined_r0x0010055d:
  if (pSVar1 == (SXNET *)0x0) {
    SXNET_free(sx);
  }
  return 0;
}



int SXNET_add_id_asc(SXNET **psx,char *zone,char *user,int userlen)

{
  int iVar1;
  ASN1_INTEGER *izone;
  
  izone = s2i_ASN1_INTEGER((X509V3_EXT_METHOD *)0x0,zone);
  if (izone == (ASN1_INTEGER *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/x509/v3_sxnet.c",0x7d,"SXNET_add_id_asc");
    ERR_set_error(0x22,0x83,0);
  }
  else {
    iVar1 = SXNET_add_id_INTEGER(psx,izone,user,userlen);
    if (iVar1 != 0) {
      return 1;
    }
    ASN1_INTEGER_free(izone);
  }
  return 0;
}



SXNET * sxnet_v2i(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  SXNET *pSVar3;
  int iVar4;
  long in_FS_OFFSET;
  SXNET *local_28;
  long local_20;
  
  iVar4 = 0;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = (SXNET *)0x0;
  do {
    iVar1 = OPENSSL_sk_num(param_3);
    pSVar3 = local_28;
    if (iVar1 <= iVar4) {
LAB_001006e6:
      if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return pSVar3;
    }
    lVar2 = OPENSSL_sk_value(param_3,iVar4);
    iVar1 = SXNET_add_id_asc(&local_28,*(char **)(lVar2 + 8),*(char **)(lVar2 + 0x10),-1);
    if (iVar1 == 0) {
      SXNET_free(local_28);
      pSVar3 = (SXNET *)0x0;
      goto LAB_001006e6;
    }
    iVar4 = iVar4 + 1;
  } while( true );
}



int SXNET_add_id_ulong(SXNET **psx,ulong lzone,char *user,int userlen)

{
  int iVar1;
  ASN1_INTEGER *a;
  
  a = ASN1_INTEGER_new();
  if ((a != (ASN1_INTEGER *)0x0) && (iVar1 = ASN1_INTEGER_set(a,lzone), iVar1 != 0)) {
    iVar1 = SXNET_add_id_INTEGER(psx,a,user,userlen);
    if (iVar1 != 0) {
      return 1;
    }
    ASN1_INTEGER_free(a);
    return 0;
  }
  ERR_new();
  ERR_set_debug("crypto/x509/v3_sxnet.c",0x90,"SXNET_add_id_ulong");
  ERR_set_error(0x22,0x8000d,0);
  ASN1_INTEGER_free(a);
  return 0;
}



ASN1_OCTET_STRING * SXNET_get_id_asc(SXNET *sx,char *zone)

{
  ASN1_INTEGER *zone_00;
  ASN1_OCTET_STRING *pAVar1;
  
  zone_00 = s2i_ASN1_INTEGER((X509V3_EXT_METHOD *)0x0,zone);
  if (zone_00 == (ASN1_INTEGER *)0x0) {
    ERR_new();
    pAVar1 = (ASN1_OCTET_STRING *)0x0;
    ERR_set_debug("crypto/x509/v3_sxnet.c",0xe1,"SXNET_get_id_asc");
    ERR_set_error(0x22,0x83,0);
  }
  else {
    pAVar1 = SXNET_get_id_INTEGER(sx,zone_00);
    ASN1_INTEGER_free(zone_00);
  }
  return pAVar1;
}



ASN1_OCTET_STRING * SXNET_get_id_ulong(SXNET *sx,ulong lzone)

{
  int iVar1;
  ASN1_INTEGER *a;
  ASN1_OCTET_STRING *pAVar2;
  
  a = ASN1_INTEGER_new();
  if (a != (ASN1_INTEGER *)0x0) {
    iVar1 = ASN1_INTEGER_set(a,lzone);
    if (iVar1 != 0) {
      pAVar2 = SXNET_get_id_INTEGER(sx,a);
      ASN1_INTEGER_free(a);
      return pAVar2;
    }
  }
  ERR_new();
  ERR_set_debug("crypto/x509/v3_sxnet.c",0xf0,"SXNET_get_id_ulong");
  ERR_set_error(0x22,0x8000d,0);
  ASN1_INTEGER_free(a);
  return (ASN1_OCTET_STRING *)0x0;
}


