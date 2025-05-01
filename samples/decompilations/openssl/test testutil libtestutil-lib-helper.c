
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long test_asn1_string_to_time_t(char *param_1)

{
  int iVar1;
  ASN1_TIME *s;
  tm *__tp;
  time_t tVar2;
  long lVar3;
  
  s = ASN1_TIME_new();
  if (s != (ASN1_TIME *)0x0) {
    iVar1 = ASN1_TIME_set_string(s,param_1);
    if ((iVar1 == 0) ||
       (__tp = (tm *)CRYPTO_malloc(0x38,"test/testutil/helper.c",0x2e), __tp == (tm *)0x0)) {
      ASN1_TIME_free(s);
    }
    else {
      iVar1 = ASN1_TIME_to_tm(s,__tp);
      if (iVar1 != 0) {
        ASN1_TIME_free(s);
        tVar2 = mktime(__tp);
        lVar3 = tVar2 - _timezone;
        CRYPTO_free(__tp);
        return lVar3;
      }
      CRYPTO_free(__tp);
      ASN1_TIME_free(s);
    }
  }
  return -1;
}


