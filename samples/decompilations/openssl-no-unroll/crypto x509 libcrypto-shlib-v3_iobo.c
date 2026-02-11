
bool i2r_ISSUED_ON_BEHALF_OF(undefined8 param_1,GENERAL_NAME *param_2,BIO *param_3,uint param_4)

{
  int iVar1;
  
  iVar1 = BIO_printf(param_3,"%*s",(ulong)param_4,&_LC0);
  if (0 < iVar1) {
    iVar1 = GENERAL_NAME_print(param_3,param_2);
    if (0 < iVar1) {
      iVar1 = BIO_puts(param_3,"\n");
      return 0 < iVar1;
    }
  }
  return false;
}


