
void ossl_policy_data_free(byte *param_1)

{
  if (param_1 != (byte *)0x0) {
    ASN1_OBJECT_free(*(ASN1_OBJECT **)(param_1 + 8));
    if ((*param_1 & 4) == 0) {
      OPENSSL_sk_pop_free(*(undefined8 *)(param_1 + 0x10),&POLICYQUALINFO_free);
    }
    OPENSSL_sk_pop_free(*(undefined8 *)(param_1 + 0x18),ASN1_OBJECT_free);
    CRYPTO_free(param_1);
    return;
  }
  return;
}



undefined4 * ossl_policy_data_new(undefined8 *param_1,ASN1_OBJECT *param_2,int param_3)

{
  undefined8 uVar1;
  undefined4 *ptr;
  long lVar2;
  
  if ((param_1 != (undefined8 *)0x0 || param_2 != (ASN1_OBJECT *)0x0) &&
     ((param_2 == (ASN1_OBJECT *)0x0 || (param_2 = OBJ_dup(param_2), param_2 != (ASN1_OBJECT *)0x0))
     )) {
    ptr = (undefined4 *)CRYPTO_zalloc(0x20,"crypto/x509/pcy_data.c",0x34);
    if (ptr == (undefined4 *)0x0) {
      ASN1_OBJECT_free(param_2);
      return (undefined4 *)0x0;
    }
    lVar2 = OPENSSL_sk_new_null();
    *(long *)(ptr + 6) = lVar2;
    if (lVar2 != 0) {
      if (param_3 != 0) {
        *ptr = 0x10;
      }
      if (param_2 == (ASN1_OBJECT *)0x0) {
        uVar1 = *param_1;
        *param_1 = 0;
        *(undefined8 *)(ptr + 2) = uVar1;
      }
      else {
        *(ASN1_OBJECT **)(ptr + 2) = param_2;
        if (param_1 == (undefined8 *)0x0) {
          return ptr;
        }
      }
      uVar1 = param_1[1];
      param_1[1] = 0;
      *(undefined8 *)(ptr + 4) = uVar1;
      return ptr;
    }
    CRYPTO_free(ptr);
    ASN1_OBJECT_free(param_2);
    ERR_new();
    ERR_set_debug("crypto/x509/pcy_data.c",0x3d,"ossl_policy_data_new");
    ERR_set_error(0x22,0x8000f,0);
  }
  return (undefined4 *)0x0;
}


