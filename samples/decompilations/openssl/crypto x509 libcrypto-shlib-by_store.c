
void free_uri(void *param_1)

{
  CRYPTO_free(param_1);
  return;
}



void by_store_free(void)

{
  undefined8 uVar1;
  
  uVar1 = X509_LOOKUP_get_method_data();
  OPENSSL_sk_pop_free(uVar1,0x100000);
  return;
}



int cache_objects_constprop_1
              (undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
              undefined8 param_5)

{
  int iVar1;
  X509_STORE *ctx;
  long lVar2;
  long lVar3;
  X509_CRL *x;
  X509 *x_00;
  
  ctx = (X509_STORE *)X509_LOOKUP_get_store();
  lVar2 = OSSL_STORE_open_ex(param_2,param_4,param_5,0,0,0);
  if (lVar2 == 0) {
    return 0;
  }
  if (param_3 != 0) {
    OSSL_STORE_find(lVar2,param_3,0,0);
  }
  iVar1 = 0;
  lVar3 = OSSL_STORE_load(lVar2);
  do {
    if (lVar3 == 0) {
LAB_001000f1:
      OSSL_STORE_close(lVar2);
      return iVar1;
    }
    iVar1 = OSSL_STORE_INFO_get_type(lVar3);
    if (iVar1 == 1) {
LAB_00100108:
      OSSL_STORE_INFO_free();
LAB_0010010d:
      iVar1 = 0;
      goto LAB_001000f1;
    }
    if (iVar1 == 5) {
      x_00 = (X509 *)OSSL_STORE_INFO_get0_CERT(lVar3);
      iVar1 = X509_STORE_add_cert(ctx,x_00);
    }
    else {
      if (iVar1 != 6) goto LAB_00100108;
      x = (X509_CRL *)OSSL_STORE_INFO_get0_CRL();
      iVar1 = X509_STORE_add_crl(ctx,x);
    }
    OSSL_STORE_INFO_free(lVar3);
    if (iVar1 == 0) goto LAB_0010010d;
    lVar3 = OSSL_STORE_load(lVar2);
  } while( true );
}



undefined8
by_store_ctrl_ex(undefined8 param_1,int param_2,char *param_3,undefined8 param_4,undefined8 param_5,
                undefined8 param_6)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  char *ptr;
  
  if (param_2 == 3) {
    if (param_3 != (char *)0x0) {
      lVar3 = X509_LOOKUP_get_method_data();
      ptr = CRYPTO_strdup(param_3,"crypto/x509/by_store.c",0x74);
      if (ptr == (char *)0x0) goto LAB_00100163;
      if (lVar3 == 0) {
        lVar3 = OPENSSL_sk_new_null();
        X509_LOOKUP_set_method_data(param_1,lVar3);
      }
      iVar1 = OPENSSL_sk_push(lVar3,ptr);
      if (iVar1 < 1) {
        CRYPTO_free(ptr);
        return 0;
      }
    }
    uVar2 = 1;
  }
  else {
    if (param_2 == 4) {
      uVar2 = cache_objects_constprop_1(param_1,param_3,0,param_6);
      return uVar2;
    }
LAB_00100163:
    uVar2 = 0;
  }
  return uVar2;
}



ulong by_store_subject_ex(undefined8 param_1,int param_2,X509_NAME *param_3,undefined8 param_4,
                         undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  X509_STORE *ctx;
  long lVar5;
  long lVar6;
  X509 *x;
  X509_CRL *x_00;
  stack_st_X509_OBJECT *h;
  X509_OBJECT *pXVar7;
  ulong uVar8;
  int iVar9;
  
  iVar9 = 0;
  lVar2 = OSSL_STORE_SEARCH_by_name(param_3);
  uVar3 = X509_LOOKUP_get_method_data(param_1);
  iVar1 = OPENSSL_sk_num(uVar3);
  if (0 < iVar1) {
    do {
      uVar4 = OPENSSL_sk_value(uVar3,iVar9);
      ctx = (X509_STORE *)X509_LOOKUP_get_store(param_1);
      lVar5 = OSSL_STORE_open_ex(uVar4,param_5,param_6,0,0,0,0);
      if (lVar5 != 0) {
        if (lVar2 != 0) {
          OSSL_STORE_find(lVar5,lVar2,0);
        }
        iVar1 = 0;
        do {
          lVar6 = OSSL_STORE_load(lVar5);
          if (lVar6 == 0) {
            OSSL_STORE_close(lVar5);
            if (iVar1 != 0) {
              uVar3 = X509_LOOKUP_get_store(param_1);
              h = (stack_st_X509_OBJECT *)X509_STORE_get0_objects(uVar3);
              OSSL_STORE_SEARCH_free(lVar2);
              pXVar7 = X509_OBJECT_retrieve_by_subject(h,param_2,param_3);
              if (pXVar7 == (X509_OBJECT *)0x0) {
                return 0;
              }
              if (param_2 == 1) {
                uVar8 = X509_OBJECT_set1_X509(param_4,(pXVar7->data).ptr);
                if ((int)uVar8 != 0) {
                  X509_free((pXVar7->data).x509);
                  return uVar8 & 0xffffffff;
                }
                return uVar8;
              }
              if (param_2 != 2) {
                return 0;
              }
              uVar8 = X509_OBJECT_set1_X509_CRL(param_4,(pXVar7->data).ptr);
              if ((int)uVar8 != 0) {
                X509_CRL_free((pXVar7->data).crl);
                return uVar8 & 0xffffffff;
              }
              return uVar8;
            }
            goto LAB_00100312;
          }
          iVar1 = OSSL_STORE_INFO_get_type(lVar6);
          if (iVar1 == 1) {
            uVar4 = OSSL_STORE_INFO_get0_NAME(lVar6);
            iVar1 = cache_objects_constprop_1(param_1,uVar4,lVar2);
          }
          else if (iVar1 == 5) {
            x = (X509 *)OSSL_STORE_INFO_get0_CERT();
            iVar1 = X509_STORE_add_cert(ctx,x);
          }
          else {
            if (iVar1 != 6) {
              OSSL_STORE_INFO_free();
              OSSL_STORE_close(lVar5);
              goto LAB_00100312;
            }
            x_00 = (X509_CRL *)OSSL_STORE_INFO_get0_CRL();
            iVar1 = X509_STORE_add_crl(ctx,x_00);
          }
          OSSL_STORE_INFO_free(lVar6);
        } while (iVar1 != 0);
        OSSL_STORE_close(lVar5);
      }
LAB_00100312:
      iVar9 = iVar9 + 1;
      iVar1 = OPENSSL_sk_num(uVar3);
    } while (iVar9 < iVar1);
  }
  uVar3 = X509_LOOKUP_get_store(param_1);
  X509_STORE_get0_objects(uVar3);
  OSSL_STORE_SEARCH_free(lVar2);
  return 0;
}



void by_store_subject(void)

{
  by_store_subject_ex();
  return;
}



undefined8 by_store_ctrl(undefined8 param_1,int param_2,char *param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  char *ptr;
  
  if (param_2 == 3) {
    if (param_3 != (char *)0x0) {
      lVar3 = X509_LOOKUP_get_method_data();
      ptr = CRYPTO_strdup(param_3,"crypto/x509/by_store.c",0x74);
      if (ptr == (char *)0x0) goto LAB_001004be;
      if (lVar3 == 0) {
        lVar3 = OPENSSL_sk_new_null();
        X509_LOOKUP_set_method_data(param_1,lVar3);
      }
      iVar1 = OPENSSL_sk_push(lVar3,ptr);
      if (iVar1 < 1) {
        CRYPTO_free(ptr);
        return 0;
      }
    }
    uVar2 = 1;
  }
  else {
    if (param_2 == 4) {
      uVar2 = cache_objects_constprop_1(param_1,param_3,0,0,0);
      return uVar2;
    }
LAB_001004be:
    uVar2 = 0;
  }
  return uVar2;
}



undefined1 * X509_LOOKUP_store(void)

{
  return x509_store_lookup;
}


