
undefined8 * X509_LOOKUP_meth_new(char *param_1)

{
  undefined8 *ptr;
  char *pcVar1;
  
  ptr = (undefined8 *)CRYPTO_zalloc(0x60,"crypto/x509/x509_meth.c",0x16);
  if (ptr != (undefined8 *)0x0) {
    pcVar1 = CRYPTO_strdup(param_1,"crypto/x509/x509_meth.c",0x19);
    *ptr = pcVar1;
    if (pcVar1 != (char *)0x0) {
      return ptr;
    }
    CRYPTO_free(ptr);
  }
  return (undefined8 *)0x0;
}



void X509_LOOKUP_meth_free(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    CRYPTO_free((void *)*param_1);
  }
  CRYPTO_free(param_1);
  return;
}



undefined8 X509_LOOKUP_meth_set_new_item(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 8) = param_2;
  return 1;
}



undefined8 X509_LOOKUP_meth_get_new_item(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



undefined8 X509_LOOKUP_meth_set_free(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return 1;
}



undefined8 X509_LOOKUP_meth_get_free(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



undefined8 X509_LOOKUP_meth_set_init(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x18) = param_2;
  return 1;
}



undefined8 X509_LOOKUP_meth_get_init(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



undefined8 X509_LOOKUP_meth_set_shutdown(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x20) = param_2;
  return 1;
}



undefined8 X509_LOOKUP_meth_get_shutdown(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



undefined8 X509_LOOKUP_meth_set_ctrl(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  return 1;
}



undefined8 X509_LOOKUP_meth_get_ctrl(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



undefined8 X509_LOOKUP_meth_set_get_by_subject(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x30) = param_2;
  return 1;
}



undefined8 X509_LOOKUP_meth_get_get_by_subject(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



undefined8 X509_LOOKUP_meth_set_get_by_issuer_serial(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x38) = param_2;
  return 1;
}



undefined8 X509_LOOKUP_meth_get_get_by_issuer_serial(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



undefined8 X509_LOOKUP_meth_set_get_by_fingerprint(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x40) = param_2;
  return 1;
}



undefined8 X509_LOOKUP_meth_get_get_by_fingerprint(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



undefined8 X509_LOOKUP_meth_set_get_by_alias(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x48) = param_2;
  return 1;
}



undefined8 X509_LOOKUP_meth_get_get_by_alias(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}


