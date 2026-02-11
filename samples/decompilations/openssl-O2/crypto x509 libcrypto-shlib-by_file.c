
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

X509_LOOKUP_METHOD * X509_LOOKUP_file(void)

{
  return (X509_LOOKUP_METHOD *)x509_file_lookup;
}



int X509_load_cert_file_ex
              (long param_1,void *param_2,int param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  BIO_METHOD *type;
  BIO *bp;
  long lVar4;
  X509 *pXVar5;
  ulong uVar6;
  undefined8 uVar7;
  long in_FS_OFFSET;
  X509 *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (X509 *)0x0;
  if (param_2 == (void *)0x0) {
    ERR_new();
    bp = (BIO *)0x0;
    ERR_set_debug("crypto/x509/by_file.c",0x5f,"X509_load_cert_file_ex");
    ERR_set_error(0xb,0xc0102,0);
    iVar1 = 0;
    goto LAB_0010010b;
  }
  type = BIO_s_file();
  bp = BIO_new(type);
  if (bp == (BIO *)0x0) {
LAB_001000d8:
    ERR_new();
    ERR_set_debug("crypto/x509/by_file.c",0x66,"X509_load_cert_file_ex");
    ERR_set_error(0xb,0x80020,0);
  }
  else {
    lVar4 = BIO_ctrl(bp,0x6c,3,param_2);
    if ((int)lVar4 < 1) goto LAB_001000d8;
    local_48 = (X509 *)X509_new_ex(param_4,param_5);
    if (local_48 == (X509 *)0x0) {
      ERR_new();
      uVar7 = 0x6c;
LAB_00100279:
      ERR_set_debug("crypto/x509/by_file.c",uVar7,"X509_load_cert_file_ex");
      ERR_set_error(0xb,0x8000d,0);
    }
    else if (param_3 == 1) {
      iVar1 = 0;
      while( true ) {
        ERR_set_mark();
        pXVar5 = PEM_read_bio_X509_AUX(bp,&local_48,(undefined1 *)0x0,&_LC1);
        if (pXVar5 == (X509 *)0x0) break;
        ERR_clear_last_mark();
        iVar2 = X509_STORE_add_cert(*(X509_STORE **)(param_1 + 0x18),local_48);
        if (iVar2 == 0) goto LAB_00100108;
        X509_free(local_48);
        local_48 = (X509 *)X509_new_ex(param_4,param_5);
        if (local_48 == (X509 *)0x0) {
          ERR_new();
          uVar7 = 0x8f;
          goto LAB_00100279;
        }
        iVar1 = iVar1 + 1;
      }
      uVar6 = ERR_peek_last_error();
      uVar3 = (uint)uVar6 & 0x7fffffff;
      if ((uVar6 & 0x80000000) == 0) {
        uVar3 = (uint)uVar6 & 0x7fffff;
      }
      if (uVar3 == 0x6c) {
        if (iVar1 != 0) {
          ERR_pop_to_mark();
          goto LAB_0010010b;
        }
        ERR_clear_last_mark();
      }
      else {
        ERR_clear_last_mark();
        if (iVar1 != 0) {
          ERR_new();
          ERR_set_debug("crypto/x509/by_file.c",0x7d,"X509_load_cert_file_ex");
          ERR_set_error(0xb,0x80009,0);
          goto LAB_00100108;
        }
      }
      ERR_new();
      ERR_set_debug("crypto/x509/by_file.c",0x7b,"X509_load_cert_file_ex");
      ERR_set_error(0xb,0x87,0);
    }
    else {
      if (param_3 == 2) {
        pXVar5 = d2i_X509_bio(bp,&local_48);
        if (pXVar5 == (X509 *)0x0) {
          ERR_new();
          iVar1 = 0;
          ERR_set_debug("crypto/x509/by_file.c",0x97,"X509_load_cert_file_ex");
          ERR_set_error(0xb,0x87,0);
        }
        else {
          iVar1 = X509_STORE_add_cert(*(X509_STORE **)(param_1 + 0x18),local_48);
        }
        goto LAB_0010010b;
      }
      ERR_new();
      ERR_set_debug("crypto/x509/by_file.c",0x9c,"X509_load_cert_file_ex");
      ERR_set_error(0xb,100,0);
    }
  }
LAB_00100108:
  iVar1 = 0;
LAB_0010010b:
  X509_free(local_48);
  BIO_free(bp);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int X509_load_cert_file(X509_LOOKUP *ctx,char *file,int type)

{
  int iVar1;
  
  iVar1 = X509_load_cert_file_ex();
  return iVar1;
}



int X509_load_crl_file(X509_LOOKUP *ctx,char *file,int type)

{
  int iVar1;
  uint uVar2;
  BIO_METHOD *type_00;
  BIO *bp;
  long lVar3;
  X509_CRL *x;
  ulong uVar4;
  int iVar5;
  
  if (file == (char *)0x0) {
    ERR_new();
    bp = (BIO *)0x0;
    iVar1 = 0;
    ERR_set_debug("crypto/x509/by_file.c",0xb1,"X509_load_crl_file");
    ERR_set_error(0xb,0xc0102,0);
    x = (X509_CRL *)0x0;
    goto LAB_00100417;
  }
  type_00 = BIO_s_file();
  bp = BIO_new(type_00);
  if (bp == (BIO *)0x0) {
LAB_00100440:
    ERR_new();
    ERR_set_debug("crypto/x509/by_file.c",0xb8,"X509_load_crl_file");
    ERR_set_error(0xb,0x80020,0);
  }
  else {
    lVar3 = BIO_ctrl(bp,0x6c,3,file);
    if ((int)lVar3 < 1) goto LAB_00100440;
    if (type == 1) {
      iVar5 = 0;
      while( true ) {
        x = PEM_read_bio_X509_CRL(bp,(X509_CRL **)0x0,(undefined1 *)0x0,&_LC1);
        if (x == (X509_CRL *)0x0) break;
        iVar1 = X509_STORE_add_crl(ctx->store_ctx,x);
        if (iVar1 == 0) goto LAB_00100417;
        iVar5 = iVar5 + 1;
        X509_CRL_free(x);
      }
      uVar4 = ERR_peek_last_error();
      uVar2 = (uint)uVar4 & 0x7fffffff;
      if ((uVar4 & 0x80000000) == 0) {
        uVar2 = (uint)uVar4 & 0x7fffff;
      }
      if (uVar2 == 0x6c) {
        if (iVar5 != 0) {
          ERR_clear_error();
          iVar1 = iVar5;
          goto LAB_00100417;
        }
      }
      else if (iVar5 != 0) {
        ERR_new();
        ERR_set_debug("crypto/x509/by_file.c",200,"X509_load_crl_file");
        ERR_set_error(0xb,0x80009,0);
        goto LAB_00100470;
      }
      ERR_new();
      ERR_set_debug("crypto/x509/by_file.c",0xc6,"X509_load_crl_file");
      ERR_set_error(0xb,0x89,0);
    }
    else {
      if (type == 2) {
        x = d2i_X509_CRL_bio(bp,(X509_CRL **)0x0);
        if (x == (X509_CRL *)0x0) {
          ERR_new();
          ERR_set_debug("crypto/x509/by_file.c",0xd9,"X509_load_crl_file");
          ERR_set_error(0xb,0x89,0);
          iVar1 = 0;
        }
        else {
          iVar1 = X509_STORE_add_crl(ctx->store_ctx,x);
        }
        goto LAB_00100417;
      }
      ERR_new();
      ERR_set_debug("crypto/x509/by_file.c",0xde,"X509_load_crl_file");
      ERR_set_error(0xb,100,0);
    }
  }
LAB_00100470:
  x = (X509_CRL *)0x0;
  iVar1 = 0;
LAB_00100417:
  X509_CRL_free(x);
  BIO_free(bp);
  return iVar1;
}



ulong X509_load_cert_crl_file_ex
                (long param_1,char *param_2,int param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  ulong uVar2;
  BIO *a;
  long lVar3;
  undefined8 *puVar4;
  int iVar5;
  
  if (param_3 != 1) {
    uVar2 = X509_load_cert_file_ex(param_1);
    return uVar2;
  }
  a = BIO_new_file(param_2,"r");
  if (a == (BIO *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/x509/by_file.c",0xf7,"X509_load_cert_crl_file_ex");
    ERR_set_error(0xb,0x80020,0);
  }
  else {
    iVar5 = 0;
    lVar3 = PEM_X509_INFO_read_bio_ex(a,0,0,&_LC1,param_4,param_5);
    uVar2 = 0;
    BIO_free(a);
    if (lVar3 != 0) {
      do {
        iVar1 = OPENSSL_sk_num(lVar3);
        if (iVar1 <= iVar5) {
          if ((int)uVar2 == 0) {
            ERR_new();
            ERR_set_debug("crypto/x509/by_file.c",0x112,"X509_load_cert_crl_file_ex");
            ERR_set_error(0xb,0x88,0);
          }
LAB_00100708:
          OPENSSL_sk_pop_free(lVar3,&X509_INFO_free);
          return uVar2;
        }
        puVar4 = (undefined8 *)OPENSSL_sk_value(lVar3,iVar5);
        if ((X509 *)*puVar4 != (X509 *)0x0) {
          iVar1 = X509_STORE_add_cert(*(X509_STORE **)(param_1 + 0x18),(X509 *)*puVar4);
          if (iVar1 != 0) {
            uVar2 = (ulong)((int)uVar2 + 1);
            goto LAB_001006da;
          }
LAB_00100760:
          uVar2 = 0;
          goto LAB_00100708;
        }
LAB_001006da:
        if ((X509_CRL *)puVar4[1] != (X509_CRL *)0x0) {
          iVar1 = X509_STORE_add_crl(*(X509_STORE **)(param_1 + 0x18),(X509_CRL *)puVar4[1]);
          if (iVar1 == 0) goto LAB_00100760;
          uVar2 = (ulong)((int)uVar2 + 1);
        }
        iVar5 = iVar5 + 1;
      } while( true );
    }
    ERR_new();
    ERR_set_debug("crypto/x509/by_file.c",0xfd,"X509_load_cert_crl_file_ex");
    ERR_set_error(0xb,0x80009,0);
  }
  return 0;
}



bool by_file_ctrl_ex(undefined8 param_1,int param_2,undefined8 param_3,long param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  char *pcVar2;
  bool bVar3;
  
  if (param_2 == 1) {
    if (param_4 == 3) {
      pcVar2 = X509_get_default_cert_file_env();
      pcVar2 = (char *)ossl_safe_getenv(pcVar2);
      if (pcVar2 == (char *)0x0) {
        pcVar2 = X509_get_default_cert_file();
      }
      iVar1 = X509_load_cert_crl_file_ex(param_1,pcVar2,1,param_6,param_7);
      if (iVar1 == 0) {
        ERR_new();
        ERR_set_debug("crypto/x509/by_file.c",0x43,"by_file_ctrl_ex");
        ERR_set_error(0xb,0x68,0);
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
    }
    else if (param_4 == 1) {
      iVar1 = X509_load_cert_crl_file_ex(param_1,param_3,1,param_6,param_7);
      bVar3 = iVar1 != 0;
    }
    else {
      iVar1 = X509_load_cert_file_ex();
      bVar3 = iVar1 != 0;
    }
    return bVar3;
  }
  return false;
}



void by_file_ctrl(void)

{
  by_file_ctrl_ex();
  return;
}



int X509_load_cert_crl_file(X509_LOOKUP *ctx,char *file,int type)

{
  int iVar1;
  
  iVar1 = X509_load_cert_crl_file_ex();
  return iVar1;
}


