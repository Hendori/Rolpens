
undefined8 cb(void)

{
  return 1;
}



undefined8 FuzzerInitialize(void)

{
  FuzzerSetRand();
  OPENSSL_init_crypto(0xe,0);
  ERR_clear_error();
  CRYPTO_free_ex_index(0,0xffffffff);
  return 1;
}



undefined8 FuzzerTestOneInput(uchar *param_1,long param_2)

{
  int iVar1;
  X509 *x;
  BIO_METHOD *type;
  BIO *bp;
  X509 *x_00;
  X509_CRL *a;
  X509_STORE *ctx;
  X509_VERIFY_PARAM *param;
  X509_STORE_CTX *ctx_00;
  stack_st_X509_CRL *sk;
  long in_FS_OFFSET;
  OCSP_RESPONSE *local_a0;
  stack_st_X509 *local_98;
  OCSP_BASICRESP *local_90;
  OCSP_CERTID *local_88;
  int local_70;
  int local_6c;
  uchar *local_68;
  uchar *local_60;
  ASN1_GENERALIZEDTIME *local_58;
  ASN1_GENERALIZEDTIME *local_50;
  ASN1_GENERALIZEDTIME *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = (uchar *)0x0;
  local_68 = param_1;
  x = d2i_X509((X509 **)0x0,&local_68,param_2);
  if (x != (X509 *)0x0) {
    type = BIO_s_null();
    bp = BIO_new(type);
    if (bp != (BIO *)0x0) {
      X509_print(bp,x);
      BIO_free(bp);
      X509_issuer_and_serial_hash(x);
      i2d_X509(x,&local_60);
      CRYPTO_free(local_60);
      x_00 = d2i_X509((X509 **)0x0,&local_68,(long)(param_1 + (param_2 - (long)local_68)));
      if (x_00 != (X509 *)0x0) {
        a = d2i_X509_CRL((X509_CRL **)0x0,&local_68,(long)(param_1 + (param_2 - (long)local_68)));
        if (a == (X509_CRL *)0x0) {
          local_88 = (OCSP_CERTID *)0x0;
          sk = (stack_st_X509_CRL *)0x0;
          ctx_00 = (X509_STORE_CTX *)0x0;
          param = (X509_VERIFY_PARAM *)0x0;
          local_90 = (OCSP_BASICRESP *)0x0;
          ctx = (X509_STORE *)0x0;
          local_a0 = (OCSP_RESPONSE *)0x0;
          local_98 = (stack_st_X509 *)0x0;
        }
        else {
          local_a0 = d2i_OCSP_RESPONSE((OCSP_RESPONSE **)0x0,&local_68,
                                       (long)(param_1 + (param_2 - (long)local_68)));
          ctx = X509_STORE_new();
          if (ctx == (X509_STORE *)0x0) {
            local_88 = (OCSP_CERTID *)0x0;
            sk = (stack_st_X509_CRL *)0x0;
            ctx_00 = (X509_STORE_CTX *)0x0;
            param = (X509_VERIFY_PARAM *)0x0;
            local_90 = (OCSP_BASICRESP *)0x0;
            local_98 = (stack_st_X509 *)0x0;
          }
          else {
            X509_STORE_add_cert(ctx,x_00);
            param = X509_VERIFY_PARAM_new();
            if (param == (X509_VERIFY_PARAM *)0x0) {
              local_88 = (OCSP_CERTID *)0x0;
              sk = (stack_st_X509_CRL *)0x0;
              ctx_00 = (X509_STORE_CTX *)0x0;
              local_90 = (OCSP_BASICRESP *)0x0;
              local_98 = (stack_st_X509 *)0x0;
            }
            else {
              X509_VERIFY_PARAM_set_flags(param,0x200000);
              X509_VERIFY_PARAM_set_flags(param,0x20);
              X509_VERIFY_PARAM_set_flags(param,0x80000);
              X509_VERIFY_PARAM_set_flags(param,4);
              X509_STORE_set1_param(ctx,param);
              X509_STORE_set_verify_cb(ctx,cb);
              ctx_00 = X509_STORE_CTX_new();
              if (ctx_00 == (X509_STORE_CTX *)0x0) {
                local_88 = (OCSP_CERTID *)0x0;
                sk = (stack_st_X509_CRL *)0x0;
                local_90 = (OCSP_BASICRESP *)0x0;
                local_98 = (stack_st_X509 *)0x0;
              }
              else {
                X509_STORE_CTX_init(ctx_00,ctx,x,(stack_st_X509 *)0x0);
                sk = (stack_st_X509_CRL *)OPENSSL_sk_new_null();
                if (sk != (stack_st_X509_CRL *)0x0) {
                  iVar1 = OPENSSL_sk_push(sk,a);
                  if (iVar1 != 0) {
                    X509_STORE_CTX_set0_crls(ctx_00,sk);
                    X509_verify_cert(ctx_00);
                    if (local_a0 != (OCSP_RESPONSE *)0x0) {
                      local_90 = OCSP_response_get1_basic(local_a0);
                      if (local_90 == (OCSP_BASICRESP *)0x0) {
                        local_88 = (OCSP_CERTID *)0x0;
                        local_98 = (stack_st_X509 *)0x0;
                      }
                      else {
                        local_98 = (stack_st_X509 *)OPENSSL_sk_new_null();
                        if (local_98 != (stack_st_X509 *)0x0) {
                          iVar1 = OPENSSL_sk_push(local_98,x);
                          if (iVar1 != 0) {
                            iVar1 = OPENSSL_sk_push(local_98,x_00);
                            if (iVar1 != 0) {
                              OCSP_basic_verify(local_90,local_98,ctx,0x1000);
                              local_88 = OCSP_cert_to_id((EVP_MD *)0x0,x,x_00);
                              if (local_88 != (OCSP_CERTID *)0x0) {
                                OCSP_resp_find_status
                                          (local_90,local_88,&local_70,&local_6c,&local_58,&local_50
                                           ,&local_48);
                                goto LAB_00100275;
                              }
                            }
                          }
                        }
                        local_88 = (OCSP_CERTID *)0x0;
                      }
                      goto LAB_00100275;
                    }
                  }
                }
                local_88 = (OCSP_CERTID *)0x0;
                local_90 = (OCSP_BASICRESP *)0x0;
                local_98 = (stack_st_X509 *)0x0;
              }
            }
          }
        }
        goto LAB_00100275;
      }
    }
  }
  local_88 = (OCSP_CERTID *)0x0;
  sk = (stack_st_X509_CRL *)0x0;
  a = (X509_CRL *)0x0;
  ctx_00 = (X509_STORE_CTX *)0x0;
  local_90 = (OCSP_BASICRESP *)0x0;
  param = (X509_VERIFY_PARAM *)0x0;
  ctx = (X509_STORE *)0x0;
  x_00 = (X509 *)0x0;
  local_a0 = (OCSP_RESPONSE *)0x0;
  local_98 = (stack_st_X509 *)0x0;
LAB_00100275:
  X509_STORE_CTX_free(ctx_00);
  X509_VERIFY_PARAM_free(param);
  X509_STORE_free(ctx);
  X509_free(x);
  X509_free(x_00);
  X509_CRL_free(a);
  OCSP_CERTID_free(local_88);
  OCSP_BASICRESP_free(local_90);
  OCSP_RESPONSE_free(local_a0);
  OPENSSL_sk_free(sk);
  OPENSSL_sk_free(local_98);
  ERR_clear_error();
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void FuzzerCleanup(void)

{
  FuzzerClearRand();
  return;
}


