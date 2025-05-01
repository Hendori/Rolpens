
undefined1 * EXTENDED_KEY_USAGE_it(void)

{
  return local_it_0;
}



long v2i_EXTENDED_KEY_USAGE(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  ASN1_OBJECT *pAVar3;
  long lVar4;
  int iVar5;
  char *s;
  
  iVar1 = OPENSSL_sk_num(param_3);
  lVar2 = OPENSSL_sk_new_reserve(0,iVar1);
  if (lVar2 == 0) {
    ERR_new();
    lVar2 = 0;
    ERR_set_debug("crypto/x509/v3_extku.c",0x6a,"v2i_EXTENDED_KEY_USAGE");
    ERR_set_error(0x22,0x8000f,0);
    OPENSSL_sk_free(0);
  }
  else {
    iVar5 = 0;
    if (0 < iVar1) {
      do {
        lVar4 = OPENSSL_sk_value(param_3);
        s = *(char **)(lVar4 + 0x10);
        if (s == (char *)0x0) {
          s = *(char **)(lVar4 + 8);
        }
        pAVar3 = OBJ_txt2obj(s,0);
        if (pAVar3 == (ASN1_OBJECT *)0x0) {
          OPENSSL_sk_pop_free(lVar2,&ASN1_OBJECT_free);
          ERR_new();
          ERR_set_debug("crypto/x509/v3_extku.c",0x77,"v2i_EXTENDED_KEY_USAGE");
          ERR_set_error(0x22,0x6e,&_LC1,s);
          return 0;
        }
        iVar5 = iVar5 + 1;
        OPENSSL_sk_push(lVar2,pAVar3);
      } while (iVar1 != iVar5);
    }
  }
  return lVar2;
}



stack_st_CONF_VALUE *
i2v_EXTENDED_KEY_USAGE(undefined8 param_1,undefined8 param_2,stack_st_CONF_VALUE *param_3)

{
  int iVar1;
  ASN1_OBJECT *a;
  int iVar2;
  long in_FS_OFFSET;
  stack_st_CONF_VALUE *local_80;
  char local_78 [88];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = 0;
  local_80 = param_3;
  while( true ) {
    iVar1 = OPENSSL_sk_num(param_2);
    if (iVar1 <= iVar2) break;
    a = (ASN1_OBJECT *)OPENSSL_sk_value(param_2,iVar2);
    i2t_ASN1_OBJECT(local_78,0x50,a);
    X509V3_add_value((char *)0x0,local_78,&local_80);
    iVar2 = iVar2 + 1;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_80;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



EXTENDED_KEY_USAGE * d2i_EXTENDED_KEY_USAGE(EXTENDED_KEY_USAGE **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  ASN1_VALUE *pAVar1;
  
  it = (ASN1_ITEM *)EXTENDED_KEY_USAGE_it();
  pAVar1 = ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return (EXTENDED_KEY_USAGE *)pAVar1;
}



int i2d_EXTENDED_KEY_USAGE(EXTENDED_KEY_USAGE *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)EXTENDED_KEY_USAGE_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

EXTENDED_KEY_USAGE * EXTENDED_KEY_USAGE_new(void)

{
  ASN1_ITEM *it;
  ASN1_VALUE *pAVar1;
  
  it = (ASN1_ITEM *)EXTENDED_KEY_USAGE_it();
  pAVar1 = ASN1_item_new(it);
  return (EXTENDED_KEY_USAGE *)pAVar1;
}



void EXTENDED_KEY_USAGE_free(EXTENDED_KEY_USAGE *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)EXTENDED_KEY_USAGE_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}


