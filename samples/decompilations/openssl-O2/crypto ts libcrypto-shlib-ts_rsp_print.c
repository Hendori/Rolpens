
undefined8 TS_STATUS_INFO_print_bio(BIO *param_1,undefined8 *param_2)

{
  ASN1_BIT_STRING *a;
  int iVar1;
  int iVar2;
  ulong uVar3;
  ASN1_STRING *str;
  undefined1 *puVar4;
  
  BIO_printf(param_1,"Status: ");
  uVar3 = ASN1_INTEGER_get((ASN1_INTEGER *)*param_2);
  if (uVar3 < 6) {
    BIO_printf(param_1,"%s\n",*(undefined8 *)(status_map_1 + uVar3 * 8));
  }
  else {
    BIO_printf(param_1,"out of bounds\n");
  }
  BIO_printf(param_1,"Status description: ");
  iVar1 = OPENSSL_sk_num(param_2[1]);
  iVar2 = 0;
  if (iVar1 < 1) {
    BIO_printf(param_1,"unspecified\n");
  }
  else {
    while( true ) {
      str = (ASN1_STRING *)OPENSSL_sk_value(param_2[1],iVar2);
      ASN1_STRING_print_ex(param_1,str,0);
      BIO_puts(param_1,"\n");
      iVar1 = OPENSSL_sk_num(param_2[1]);
      if (iVar1 <= iVar2 + 1) break;
      BIO_puts(param_1,"\t");
      iVar2 = iVar2 + 1;
    }
  }
  iVar1 = 0;
  BIO_printf(param_1,"Failure info: ");
  a = (ASN1_BIT_STRING *)param_2[2];
  puVar4 = failure_map_0;
  iVar2 = 0;
  if (a != (ASN1_BIT_STRING *)0x0) {
    do {
      iVar2 = ASN1_BIT_STRING_get_bit(a,iVar2);
      if (iVar2 != 0) {
        iVar1 = iVar1 + 1;
        if (1 < iVar1) {
          BIO_printf(param_1,", ");
        }
        BIO_printf(param_1,"%s",*(undefined8 *)(puVar4 + 8));
      }
      iVar2 = *(int *)(puVar4 + 0x10);
      puVar4 = puVar4 + 0x10;
    } while (-1 < iVar2);
    if (iVar1 != 0) goto LAB_00100167;
  }
  BIO_printf(param_1,"unspecified");
LAB_00100167:
  BIO_printf(param_1,"\n");
  return 1;
}



undefined8 TS_TST_INFO_print_bio(BIO *param_1,undefined8 *param_2)

{
  long *plVar1;
  ulong uVar2;
  stack_st_CONF_VALUE *val;
  undefined *puVar3;
  
  if (param_2 != (undefined8 *)0x0) {
    uVar2 = ASN1_INTEGER_get((ASN1_INTEGER *)*param_2);
    BIO_printf(param_1,"Version: %d\n",uVar2 & 0xffffffff);
    BIO_printf(param_1,"Policy OID: ");
    TS_OBJ_print_bio(param_1,param_2[1]);
    TS_MSG_IMPRINT_print_bio(param_1,param_2[2]);
    BIO_printf(param_1,"Serial number: ");
    if (param_2[3] == 0) {
      BIO_printf(param_1,"unspecified");
    }
    else {
      TS_ASN1_INTEGER_print_bio(param_1);
    }
    BIO_write(param_1,&_LC5,1);
    BIO_printf(param_1,"Time stamp: ");
    ASN1_GENERALIZEDTIME_print(param_1,(ASN1_GENERALIZEDTIME *)param_2[4]);
    BIO_write(param_1,&_LC5,1);
    BIO_printf(param_1,"Accuracy: ");
    plVar1 = (long *)param_2[5];
    if (plVar1 == (long *)0x0) {
      BIO_printf(param_1,"unspecified");
    }
    else {
      if (*plVar1 == 0) {
        BIO_printf(param_1,"unspecified");
      }
      else {
        TS_ASN1_INTEGER_print_bio(param_1);
      }
      BIO_printf(param_1," seconds, ");
      if (plVar1[1] == 0) {
        BIO_printf(param_1,"unspecified");
      }
      else {
        TS_ASN1_INTEGER_print_bio(param_1);
      }
      BIO_printf(param_1," millis, ");
      if (plVar1[2] == 0) {
        BIO_printf(param_1,"unspecified");
      }
      else {
        TS_ASN1_INTEGER_print_bio(param_1);
      }
      BIO_printf(param_1," micros");
    }
    BIO_write(param_1,&_LC5,1);
    puVar3 = &_LC12;
    if (*(int *)(param_2 + 6) != 0) {
      puVar3 = &_LC11;
    }
    BIO_printf(param_1,"Ordering: %s\n",puVar3);
    BIO_printf(param_1,"Nonce: ");
    if (param_2[7] == 0) {
      BIO_printf(param_1,"unspecified");
    }
    else {
      TS_ASN1_INTEGER_print_bio(param_1);
    }
    BIO_write(param_1,&_LC5,1);
    BIO_printf(param_1,"TSA: ");
    if ((GENERAL_NAME *)param_2[8] == (GENERAL_NAME *)0x0) {
      BIO_printf(param_1,"unspecified");
    }
    else {
      val = i2v_GENERAL_NAME((X509V3_EXT_METHOD *)0x0,(GENERAL_NAME *)param_2[8],
                             (stack_st_CONF_VALUE *)0x0);
      if (val != (stack_st_CONF_VALUE *)0x0) {
        X509V3_EXT_val_prn(param_1,val,0,0);
      }
      OPENSSL_sk_pop_free(val,&X509V3_conf_free);
    }
    BIO_write(param_1,&_LC5,1);
    TS_ext_print_bio(param_1,param_2[9]);
    return 1;
  }
  return 0;
}



undefined8 TS_RESP_print_bio(BIO *param_1,undefined8 *param_2)

{
  BIO_printf(param_1,"Status info:\n");
  TS_STATUS_INFO_print_bio(param_1,*param_2);
  BIO_printf(param_1,"\nTST info:\n");
  if (param_2[2] != 0) {
    TS_TST_INFO_print_bio(param_1);
    return 1;
  }
  BIO_printf(param_1,"Not included.\n");
  return 1;
}


