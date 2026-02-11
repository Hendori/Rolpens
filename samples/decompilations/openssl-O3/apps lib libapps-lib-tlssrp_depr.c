
undefined * dummy_srp(void)

{
  return &_LC0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 ssl_srp_verify_param_cb(undefined8 param_1,long param_2)

{
  int iVar1;
  BIGNUM *a;
  BIGNUM *a_00;
  long lVar2;
  BN_CTX *c;
  BIGNUM *a_01;
  BIGNUM *a_02;
  BIGNUM *a_03;
  
  a = (BIGNUM *)SSL_get_srp_N();
  if (a == (BIGNUM *)0x0) {
    return 0;
  }
  a_00 = (BIGNUM *)SSL_get_srp_g(param_1);
  if (a_00 == (BIGNUM *)0x0) {
    return 0;
  }
  if ((*(long *)(param_2 + 0x10) == 0) && (*(int *)(param_2 + 0x18) != 1)) {
    lVar2 = SRP_check_known_gN_param(a_00,a);
  }
  else {
    BIO_printf(_bio_err,"SRP parameters:\n");
    BIO_printf(_bio_err,"\tN=");
    BN_print(_bio_err,a);
    BIO_printf(_bio_err,"\n\tg=");
    BN_print(_bio_err,a_00);
    BIO_printf(_bio_err,"\n");
    lVar2 = SRP_check_known_gN_param(a_00,a);
  }
  if (lVar2 != 0) {
    return 1;
  }
  if (*(int *)(param_2 + 0x18) == 1) {
    if (*(int *)(param_2 + 0x14) != 0) {
      BIO_printf(_bio_err,"SRP param N and g are not known params, going to check deeper.\n");
    }
    iVar1 = BN_num_bits(a_00);
    if (iVar1 < 0x81) {
      c = BN_CTX_new();
      a_01 = BN_new();
      a_02 = BN_new();
      if (c == (BN_CTX *)0x0) {
        BN_free(a_02);
        BN_free(a_01);
        BN_CTX_free((BN_CTX *)0x0);
      }
      else {
        iVar1 = BN_is_odd(a);
        a_03 = a_02;
        if ((iVar1 != 0) && (iVar1 = BN_check_prime(a,c,0), iVar1 == 1)) {
          if (a_01 == (BIGNUM *)0x0) {
            BN_free(a_02);
            BN_free((BIGNUM *)0x0);
            BN_CTX_free(c);
            goto LAB_00100119;
          }
          iVar1 = BN_rshift1(a_01,a);
          if ((((iVar1 != 0) && (iVar1 = BN_check_prime(a_01,c,0), iVar1 == 1)) &&
              (a_03 = (BIGNUM *)0x0, a_02 != (BIGNUM *)0x0)) &&
             (((iVar1 = BN_mod_exp(a_02,a_00,a_01,a,c), a_03 = a_02, iVar1 != 0 &&
               (iVar1 = BN_add_word(a_02,1), iVar1 != 0)) && (iVar1 = BN_cmp(a_02,a), iVar1 == 0))))
          {
            BN_free(a_02);
            BN_free(a_01);
            BN_CTX_free(c);
            return 1;
          }
        }
        BN_free(a_03);
        BN_free(a_01);
        BN_CTX_free(c);
      }
    }
  }
LAB_00100119:
  BIO_printf(_bio_err,"SRP param N and g rejected.\n");
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * ssl_give_srp_client_pwd_cb(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  void *ptr;
  void *pvVar2;
  long in_FS_OFFSET;
  undefined8 local_38;
  char *local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  ptr = (void *)app_malloc(0x401,"SRP password buffer");
  local_38 = *param_2;
  local_30 = "SRP user";
  iVar1 = password_callback(ptr,0x400,0,&local_38);
  if (iVar1 < 0) {
    BIO_printf(_bio_err,"Can\'t read Password\n");
    pvVar2 = (void *)0x0;
    CRYPTO_free(ptr);
  }
  else {
    *(undefined1 *)((long)ptr + (long)iVar1) = 0;
    pvVar2 = ptr;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pvVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 ssl_srp_server_param_cb(undefined8 param_1,undefined4 *param_2,long *param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = param_3[2];
  if (*param_3 == 0) {
    if (lVar2 == 0) {
      lVar2 = SSL_get_srp_username();
      *param_3 = lVar2;
      BIO_printf(_bio_err,"SRP username = \"%s\"\n",lVar2);
      return 0xffffffff;
    }
LAB_00100379:
    iVar1 = SSL_set_srp_server_param
                      (param_1,*(undefined8 *)(lVar2 + 0x20),*(undefined8 *)(lVar2 + 0x18),
                       *(undefined8 *)(lVar2 + 8),*(undefined8 *)(lVar2 + 0x10),
                       *(undefined8 *)(lVar2 + 0x28));
    if (-1 < iVar1) {
      uVar3 = 0;
      BIO_printf(_bio_err,"SRP parameters set: username = \"%s\" info=\"%s\"\n",*param_3,
                 *(undefined8 *)(param_3[2] + 0x28));
      goto LAB_001003bb;
    }
    *param_2 = 0x50;
  }
  else {
    if (lVar2 != 0) goto LAB_00100379;
    BIO_printf(_bio_err,"User %s doesn\'t exist\n");
  }
  uVar3 = 2;
LAB_001003bb:
  SRP_user_pwd_free(param_3[2]);
  param_3[2] = 0;
  *param_3 = 0;
  return uVar3;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 set_up_srp_arg(undefined8 param_1,long param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  long local_30 [2];
  
  local_30[0] = param_2;
  if (param_3 == 0) {
    iVar1 = SSL_CTX_set_srp_username(param_1,*(undefined8 *)(param_2 + 8));
    if (iVar1 == 0) {
      BIO_printf(_bio_err,"Unable to set SRP username\n");
      return 0;
    }
  }
  *(int *)(local_30[0] + 0x14) = param_5;
  *(int *)(local_30[0] + 0x10) = param_4;
  SSL_CTX_set_srp_cb_arg(param_1,local_30);
  SSL_CTX_set_srp_client_pwd_callback(param_1,ssl_give_srp_client_pwd_cb);
  SSL_CTX_set_srp_strength(param_1,*(undefined4 *)(local_30[0] + 0x1c));
  if ((param_5 != 0 || param_4 != 0) || (*(int *)(local_30[0] + 0x18) == 0)) {
    SSL_CTX_set_srp_verify_param_callback(param_1,ssl_srp_verify_param_cb);
  }
  return 1;
}



void set_up_dummy_srp(undefined8 param_1)

{
  SSL_CTX_set_srp_client_pwd_callback(param_1,0x100000);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
set_up_srp_verifier_file(SSL_CTX *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *local_20;
  
  local_20 = param_2;
  uVar2 = SRP_VBASE_new(param_3);
  param_2[1] = uVar2;
  local_20[2] = 0;
  *local_20 = 0;
  if (local_20[1] == 0) {
    BIO_printf(_bio_err,"Failed to initialize SRP verifier file\n");
  }
  else {
    uVar1 = SRP_VBASE_init();
    if (uVar1 == 0) {
      SSL_CTX_set_verify(param_1,0,(callback *)&verify_callback);
      SSL_CTX_set_srp_cb_arg(param_1,&local_20);
      SSL_CTX_set_srp_username_callback(param_1,ssl_srp_server_param_cb);
      return 1;
    }
    BIO_printf(_bio_err,"Cannot initialize SRP verifier file \"%s\":ret=%d\n",param_4,(ulong)uVar1);
  }
  return 0;
}



void lookup_srp_user(undefined8 *param_1,BIO *param_2)

{
  long lVar1;
  
  SRP_user_pwd_free(param_1[2]);
  lVar1 = SRP_VBASE_get1_by_user(param_1[1],*param_1);
  param_1[2] = lVar1;
  if (lVar1 != 0) {
    BIO_printf(param_2,"LOOKUP done %s\n",*(undefined8 *)(lVar1 + 0x28));
    return;
  }
  BIO_printf(param_2,"LOOKUP not successful\n");
  return;
}


