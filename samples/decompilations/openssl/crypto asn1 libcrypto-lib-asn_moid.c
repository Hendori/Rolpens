
void oid_module_finish(void)

{
  return;
}



undefined8 oid_module_init(CONF_IMODULE *param_1,CONF *param_2)

{
  char *sn;
  int iVar1;
  char *pcVar2;
  stack_st_CONF_VALUE *psVar3;
  long lVar4;
  char *pcVar5;
  void *__dest;
  char *pcVar6;
  size_t __n;
  char *pcVar7;
  int iVar8;
  
  iVar8 = 0;
  pcVar2 = CONF_imodule_get_value(param_1);
  psVar3 = NCONF_get_section(param_2,pcVar2);
  if (psVar3 == (stack_st_CONF_VALUE *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/asn1/asn_moid.c",0x20,"oid_module_init");
    ERR_set_error(0xd,0xac,0);
    return 0;
  }
  iVar1 = OPENSSL_sk_num(psVar3);
  if (0 < iVar1) {
    do {
      lVar4 = OPENSSL_sk_value(psVar3,iVar8);
      pcVar2 = *(char **)(lVar4 + 0x10);
      sn = *(char **)(lVar4 + 8);
      pcVar5 = strrchr(pcVar2,0x2c);
      pcVar6 = sn;
      if (pcVar5 == (char *)0x0) {
        pcVar5 = (char *)0x0;
      }
      else {
        pcVar7 = pcVar5 + 1;
        if (pcVar2 == pcVar5) {
          pcVar5 = (char *)0x0;
          pcVar2 = pcVar7;
        }
        else {
          if (pcVar5[1] == '\0') goto LAB_001001a4;
          while (iVar1 = ossl_ctype_check((int)*pcVar7,8), iVar1 != 0) {
            pcVar7 = pcVar7 + 1;
          }
          while (iVar1 = ossl_ctype_check((int)*pcVar2,8), iVar1 != 0) {
            pcVar2 = pcVar2 + 1;
          }
          while( true ) {
            pcVar6 = pcVar5 + -1;
            iVar1 = ossl_ctype_check((int)pcVar5[-1],8);
            if (iVar1 == 0) break;
            pcVar5 = pcVar6;
            if (pcVar2 == pcVar6) goto LAB_001001a4;
          }
          __n = (long)pcVar5 - (long)pcVar2;
          __dest = CRYPTO_malloc((int)__n + 1,"crypto/asn1/asn_moid.c",0x5a);
          if (__dest == (void *)0x0) goto LAB_001001a4;
          pcVar5 = (char *)memcpy(__dest,pcVar2,__n);
          pcVar5[__n] = '\0';
          pcVar6 = pcVar5;
          pcVar2 = pcVar7;
        }
      }
      iVar1 = OBJ_create(pcVar2,sn,pcVar6);
      CRYPTO_free(pcVar5);
      if (iVar1 == 0) {
LAB_001001a4:
        ERR_new();
        ERR_set_debug("crypto/asn1/asn_moid.c",0x26,"oid_module_init");
        ERR_set_error(0xd,0xab,0);
        return 0;
      }
      iVar8 = iVar8 + 1;
      iVar1 = OPENSSL_sk_num(psVar3);
    } while (iVar8 < iVar1);
  }
  return 1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void ASN1_add_oid_module(void)

{
  CONF_module_add("oid_section",oid_module_init,oid_module_finish);
  return;
}


