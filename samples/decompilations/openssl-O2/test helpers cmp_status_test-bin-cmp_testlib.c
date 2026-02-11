
undefined8 load_pkimsg(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = OSSL_CMP_MSG_read(param_1,param_2,0);
  test_ptr("test/helpers/cmp_testlib.c",0x13,"(msg = OSSL_CMP_MSG_read(file, libctx, NULL))",uVar1);
  return uVar1;
}



bool valid_asn1_encoding(long param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = i2d_OSSL_CMP_MSG(param_1,0);
    return 0 < iVar1;
  }
  return false;
}



int STACK_OF_X509_cmp(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  X509 *a;
  X509 *b;
  
  if (param_1 == param_2) {
    return 0;
  }
  if (param_1 == 0) {
    iVar1 = -1;
  }
  else {
    iVar1 = 1;
    if (param_2 != 0) {
      iVar1 = OPENSSL_sk_num();
      iVar2 = OPENSSL_sk_num(param_2);
      iVar1 = iVar1 - iVar2;
      if (iVar1 == 0) {
        while( true ) {
          iVar2 = OPENSSL_sk_num(param_1);
          if (iVar2 <= iVar1) {
            return 0;
          }
          a = (X509 *)OPENSSL_sk_value(param_1,iVar1);
          b = (X509 *)OPENSSL_sk_value(param_2,iVar1);
          if ((a != b) && (iVar2 = X509_cmp(a,b), iVar2 != 0)) break;
          iVar1 = iVar1 + 1;
        }
        return iVar2;
      }
    }
  }
  return iVar1;
}



ulong STACK_OF_X509_push1(long param_1,X509 *param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_1 == 0) {
    return 0xffffffff;
  }
  if ((param_2 != (X509 *)0x0) && (iVar1 = X509_up_ref(param_2), iVar1 != 0)) {
    uVar2 = OPENSSL_sk_push(param_1,param_2);
    if (0 < (int)uVar2) {
      return uVar2;
    }
    X509_free(param_2);
    return uVar2 & 0xffffffff;
  }
  return 0xffffffff;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void print_to_bio_out(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                     undefined8 param_5)

{
  OSSL_CMP_print_to_bio(_bio_out,param_1,param_2,param_3,param_4,param_5);
  return;
}


