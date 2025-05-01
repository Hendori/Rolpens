
void ASN1_SCTX_new(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = CRYPTO_zalloc(0x50,"crypto/asn1/tasn_scn.c",0x1b);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x40) = param_1;
  }
  return;
}



void ASN1_SCTX_free(void *param_1)

{
  CRYPTO_free(param_1);
  return;
}



undefined8 ASN1_SCTX_get_item(undefined8 *param_1)

{
  return *param_1;
}



undefined8 ASN1_SCTX_get_template(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



undefined8 ASN1_SCTX_get_flags(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



void ASN1_SCTX_set_app_data(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x48) = param_2;
  return;
}



undefined8 ASN1_SCTX_get_app_data(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}


