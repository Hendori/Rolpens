
int name_cmp(char *name,char *cmp)

{
  int iVar1;
  
  iVar1 = OPENSSL_strcasecmp(*(undefined8 *)name,*(undefined8 *)cmp);
  return iVar1;
}



void collect_names(undefined8 param_1,undefined8 param_2)

{
  OPENSSL_sk_push(param_2,param_1);
  return;
}



void print_names(BIO *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  
  iVar1 = OPENSSL_sk_num(param_2);
  OPENSSL_sk_sort(param_2);
  if (iVar1 < 2) {
    if (iVar1 != 1) {
      return;
    }
  }
  else {
    BIO_printf(param_1,"{ ");
  }
  iVar3 = 0;
  uVar2 = OPENSSL_sk_value(param_2,0);
  while( true ) {
    BIO_printf(param_1,"%s",uVar2);
    iVar3 = iVar3 + 1;
    if (iVar1 <= iVar3) break;
    uVar2 = OPENSSL_sk_value(param_2,iVar3);
    BIO_printf(param_1,", ");
  }
  if (iVar1 == 1) {
    return;
  }
  BIO_printf(param_1," }");
  return;
}


