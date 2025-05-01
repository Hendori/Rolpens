
undefined8 TS_REQ_print_bio(BIO *param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  
  if (param_2 != 0) {
    uVar1 = TS_REQ_get_version(param_2);
    BIO_printf(param_1,"Version: %d\n",(ulong)uVar1);
    TS_MSG_IMPRINT_print_bio(param_1,*(undefined8 *)(param_2 + 8));
    BIO_printf(param_1,"Policy OID: ");
    lVar2 = TS_REQ_get_policy_id(param_2);
    if (lVar2 == 0) {
      BIO_printf(param_1,"unspecified\n");
    }
    else {
      TS_OBJ_print_bio(param_1,lVar2);
    }
    BIO_printf(param_1,"Nonce: ");
    if (*(long *)(param_2 + 0x18) == 0) {
      BIO_printf(param_1,"unspecified");
    }
    else {
      TS_ASN1_INTEGER_print_bio(param_1);
    }
    BIO_write(param_1,&_LC7,1);
    puVar3 = &_LC1;
    if (*(int *)(param_2 + 0x20) != 0) {
      puVar3 = &_LC0;
    }
    BIO_printf(param_1,"Certificate required: %s\n",puVar3);
    TS_ext_print_bio(param_1,*(undefined8 *)(param_2 + 0x28));
    return 1;
  }
  return 0;
}


