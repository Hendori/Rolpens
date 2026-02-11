
undefined8 x509_pubkey_decode(undefined8 *param_1,undefined8 *param_2)

{
  code *pcVar1;
  int iVar2;
  ENGINE *e;
  EVP_PKEY *pkey;
  
  iVar2 = OBJ_obj2nid(*(ASN1_OBJECT **)*param_2);
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    e = ENGINE_get_pkey_meth_engine(iVar2);
    if (e == (ENGINE *)0x0) {
      return 0;
    }
    ENGINE_finish(e);
  }
  pkey = EVP_PKEY_new();
  if (pkey != (EVP_PKEY *)0x0) {
    iVar2 = EVP_PKEY_set_type(pkey,iVar2);
    if (iVar2 == 0) {
      ERR_new();
      ERR_set_debug("crypto/x509/x_pubkey.c",0x1ae,"x509_pubkey_decode");
      ERR_set_error(0xb,0x6f,0);
    }
    else {
      pcVar1 = *(code **)(*(long *)&pkey->references + 0x20);
      if (pcVar1 == (code *)0x0) {
        ERR_new();
        ERR_set_debug("crypto/x509/x_pubkey.c",0x1bb,"x509_pubkey_decode");
        ERR_set_error(0xb,0x7c,0);
      }
      else {
        iVar2 = (*pcVar1)(pkey,param_2);
        if (iVar2 != 0) {
          *param_1 = pkey;
          return 1;
        }
      }
    }
    EVP_PKEY_free(pkey);
    return 0;
  }
  ERR_new();
  ERR_set_debug("crypto/x509/x_pubkey.c",0x1a9,"x509_pubkey_decode");
  ERR_set_error(0xb,0x80006,0);
  return 0xffffffff;
}



void x509_pubkey_ex_print
               (BIO *param_1,undefined8 *param_2,int param_3,undefined8 param_4,ASN1_PCTX *param_5)

{
  ASN1_item_print(param_1,(ASN1_VALUE *)*param_2,param_3,(ASN1_ITEM *)local_it_17,param_5);
  return;
}



void x509_pubkey_ex_i2d(ASN1_VALUE **param_1,uchar **param_2,undefined8 param_3,int param_4,
                       int param_5)

{
  ASN1_item_ex_i2d(param_1,param_2,(ASN1_ITEM *)local_it_17,param_4,param_5);
  return;
}



void x509_pubkey_ex_free(undefined8 *param_1)

{
  undefined8 *ptr;
  
  if (param_1 != (undefined8 *)0x0) {
    ptr = (undefined8 *)*param_1;
    if (ptr != (undefined8 *)0x0) {
      X509_ALGOR_free((X509_ALGOR *)*ptr);
      ASN1_BIT_STRING_free((ASN1_BIT_STRING *)ptr[1]);
      EVP_PKEY_free((EVP_PKEY *)ptr[2]);
      CRYPTO_free((void *)ptr[4]);
      CRYPTO_free(ptr);
      *param_1 = 0;
    }
    return;
  }
  return;
}



undefined8 x509_pubkey_ex_new_ex(undefined8 *param_1,undefined8 param_2,long param_3,char *param_4)

{
  long *plVar1;
  char *pcVar2;
  undefined8 uVar3;
  X509_ALGOR *pXVar4;
  ASN1_BIT_STRING *pAVar5;
  long in_FS_OFFSET;
  long *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  plVar1 = (long *)CRYPTO_zalloc(0x30,"crypto/x509/x_pubkey.c",0x74);
  local_38 = plVar1;
  if (plVar1 == (long *)0x0) {
    uVar3 = 0;
    goto LAB_001002a7;
  }
  if (*plVar1 == 0) {
    pXVar4 = X509_ALGOR_new();
    *plVar1 = (long)pXVar4;
    if (pXVar4 != (X509_ALGOR *)0x0) goto LAB_00100258;
LAB_001002d5:
    x509_pubkey_ex_free(&local_38,0);
    ERR_new();
    ERR_set_debug("crypto/x509/x_pubkey.c",0x7a,"x509_pubkey_ex_new_ex");
    ERR_set_error(0xd,0x8000b,0);
    uVar3 = 0;
  }
  else {
LAB_00100258:
    if (plVar1[1] == 0) {
      pAVar5 = ASN1_BIT_STRING_new();
      plVar1[1] = (long)pAVar5;
      if (pAVar5 == (ASN1_BIT_STRING *)0x0) goto LAB_001002d5;
    }
    plVar1[3] = param_3;
    CRYPTO_free((void *)plVar1[4]);
    plVar1[4] = 0;
    if (param_4 != (char *)0x0) {
      pcVar2 = CRYPTO_strdup(param_4,"crypto/x509/x_pubkey.c",0x37);
      plVar1[4] = (long)pcVar2;
      if (pcVar2 == (char *)0x0) goto LAB_001002d5;
    }
    *param_1 = plVar1;
    uVar3 = 1;
  }
LAB_001002a7:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



int x509_pubkey_ex_d2i_ex
              (ASN1_VALUE **param_1,uchar **param_2,long param_3,undefined8 param_4,int param_5,
              int param_6,char param_7,ASN1_TLC *param_8,undefined8 param_9,undefined8 param_10)

{
  int iVar1;
  int iVar2;
  long lVar3;
  uchar *ptr;
  X509_ALGOR *pXVar4;
  ASN1_BIT_STRING *pAVar5;
  ASN1_VALUE *pAVar6;
  uchar *puVar7;
  long in_FS_OFFSET;
  uchar *local_88;
  long local_80;
  char local_78 [56];
  long local_40;
  
  pAVar6 = *param_1;
  puVar7 = *param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (pAVar6 == (ASN1_VALUE *)0x0) {
    iVar1 = x509_pubkey_ex_new_ex(param_1,param_4,param_9,param_10);
    if (iVar1 != 0) {
      pAVar6 = *param_1;
      if (*(long *)pAVar6 == 0) goto LAB_0010059b;
      goto LAB_0010039b;
    }
  }
  else {
    if (*(long *)pAVar6 != 0) {
LAB_0010039b:
      if (*(long *)(pAVar6 + 8) == 0) {
        pAVar5 = ASN1_BIT_STRING_new();
        *(ASN1_BIT_STRING **)(pAVar6 + 8) = pAVar5;
        if (pAVar5 == (ASN1_BIT_STRING *)0x0) goto LAB_001005c8;
      }
      iVar1 = ASN1_item_ex_d2i(param_1,param_2,param_3,(ASN1_ITEM *)local_it_17,param_5,param_6,
                               param_7,param_8);
      if (iVar1 < 1) goto LAB_0010053e;
      lVar3 = (long)*param_2 - (long)puVar7;
      if (lVar3 == 0) {
        ERR_new();
        iVar1 = 0;
        ERR_set_debug("crypto/x509/x_pubkey.c",0x9e,"x509_pubkey_ex_d2i_ex");
        ERR_set_error(0xd,0xc0103,0);
        goto LAB_0010053e;
      }
      pAVar6 = *param_1;
      EVP_PKEY_free(*(EVP_PKEY **)(pAVar6 + 0x10));
      *(undefined8 *)(pAVar6 + 0x10) = 0;
      ERR_set_mark();
      iVar1 = x509_pubkey_decode(pAVar6 + 0x10,pAVar6);
      if (iVar1 == -1) {
        ERR_clear_last_mark();
        ptr = (uchar *)0x0;
        lVar3 = 0;
      }
      else if ((iVar1 < 1) && (((byte)pAVar6[0x28] & 1) == 0)) {
        local_80 = lVar3;
        if (param_6 == 0) {
          ptr = (uchar *)0x0;
        }
        else {
          ptr = (uchar *)CRYPTO_memdup(puVar7,lVar3,"crypto/x509/x_pubkey.c");
          if (ptr == (uchar *)0x0) goto LAB_001005f8;
          *ptr = '0';
          puVar7 = ptr;
        }
        local_88 = puVar7;
        iVar2 = OBJ_obj2txt(local_78,0x32,(ASN1_OBJECT *)**(undefined8 **)pAVar6,0);
        if (iVar2 < 1) {
          ERR_clear_last_mark();
          lVar3 = 0;
        }
        else {
          lVar3 = OSSL_DECODER_CTX_new_for_pkey
                            (pAVar6 + 0x10,&_LC2,"SubjectPublicKeyInfo",local_78,0x86,
                             *(undefined8 *)(pAVar6 + 0x18),*(undefined8 *)(pAVar6 + 0x20));
          if (((lVar3 == 0) ||
              (iVar2 = OSSL_DECODER_from_data(lVar3,&local_88,&local_80), iVar2 == 0)) ||
             (local_80 == 0)) goto LAB_0010051c;
          ERR_clear_last_mark();
          ERR_new();
          ERR_set_debug("crypto/x509/x_pubkey.c",0xe0,"x509_pubkey_ex_d2i_ex");
          ERR_set_error(0xd,0x72,0);
        }
      }
      else {
        ptr = (uchar *)0x0;
        lVar3 = 0;
LAB_0010051c:
        ERR_pop_to_mark();
        iVar1 = 1;
      }
      OSSL_DECODER_CTX_free(lVar3);
      CRYPTO_free(ptr);
      goto LAB_0010053e;
    }
LAB_0010059b:
    pXVar4 = X509_ALGOR_new();
    *(X509_ALGOR **)pAVar6 = pXVar4;
    if (pXVar4 != (X509_ALGOR *)0x0) goto LAB_0010039b;
LAB_001005c8:
    ERR_new();
    ERR_set_debug("crypto/x509/x_pubkey.c",0x92,"x509_pubkey_ex_d2i_ex");
    ERR_set_error(0xd,0x8000b,0);
  }
LAB_001005f8:
  iVar1 = 0;
LAB_0010053e:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}



void ossl_d2i_X509_PUBKEY_INTERNAL
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long in_FS_OFFSET;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = CRYPTO_zalloc(0x30,"crypto/x509/x_pubkey.c",0x48);
  if (local_38 != 0) {
    ASN1_item_d2i_ex(&local_38,param_1,param_2,local_it_17,param_3,param_4);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ossl_X509_PUBKEY_INTERNAL_free(ASN1_VALUE *param_1)

{
  ASN1_item_free(param_1,(ASN1_ITEM *)local_it_17);
  return;
}



undefined1 * X509_PUBKEY_it(void)

{
  return local_it_16;
}



X509_PUBKEY * d2i_X509_PUBKEY(X509_PUBKEY **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  X509_PUBKEY *pXVar1;
  
  it = (ASN1_ITEM *)X509_PUBKEY_it();
  pXVar1 = (X509_PUBKEY *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pXVar1;
}



int i2d_X509_PUBKEY(X509_PUBKEY *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)X509_PUBKEY_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

X509_PUBKEY * X509_PUBKEY_new(void)

{
  ASN1_ITEM *it;
  X509_PUBKEY *pXVar1;
  
  it = (ASN1_ITEM *)X509_PUBKEY_it();
  pXVar1 = (X509_PUBKEY *)ASN1_item_new(it);
  return pXVar1;
}



void X509_PUBKEY_free(X509_PUBKEY *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)X509_PUBKEY_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}



X509_PUBKEY * X509_PUBKEY_new_ex(X509_ALGOR *param_1,char *param_2)

{
  undefined8 uVar1;
  X509_PUBKEY *a;
  ASN1_BIT_STRING *pAVar2;
  
  uVar1 = X509_PUBKEY_it();
  a = (X509_PUBKEY *)ASN1_item_new_ex(uVar1,param_1,param_2);
  if (a == (X509_PUBKEY *)0x0) {
    return (X509_PUBKEY *)0x0;
  }
  a[1].algor = param_1;
  CRYPTO_free(a[1].public_key);
  a[1].public_key = (ASN1_BIT_STRING *)0x0;
  if (param_2 != (char *)0x0) {
    pAVar2 = (ASN1_BIT_STRING *)CRYPTO_strdup(param_2,"crypto/x509/x_pubkey.c",0x37);
    a[1].public_key = pAVar2;
    if (pAVar2 == (ASN1_BIT_STRING *)0x0) {
      X509_PUBKEY_free(a);
      return (X509_PUBKEY *)0x0;
    }
  }
  return a;
}



undefined8 * X509_PUBKEY_dup(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  char *pcVar3;
  X509_ALGOR *pXVar4;
  ASN1_BIT_STRING *a;
  long lVar5;
  long in_FS_OFFSET;
  undefined8 *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  puVar2 = (undefined8 *)CRYPTO_zalloc(0x30,"crypto/x509/x_pubkey.c",0x11d);
  local_38 = puVar2;
  if (puVar2 != (undefined8 *)0x0) {
    pcVar3 = (char *)param_1[4];
    puVar2[3] = param_1[3];
    CRYPTO_free((void *)puVar2[4]);
    puVar2[4] = 0;
    if (pcVar3 != (char *)0x0) {
      pcVar3 = CRYPTO_strdup(pcVar3,"crypto/x509/x_pubkey.c",0x37);
      puVar2[4] = pcVar3;
      if (pcVar3 == (char *)0x0) {
        ERR_new();
        ERR_set_debug("crypto/x509/x_pubkey.c",0x122,"X509_PUBKEY_dup");
        ERR_set_error(0xb,0x8000b,0);
        x509_pubkey_ex_free(&local_38,local_it_17);
        goto LAB_001009f3;
      }
    }
    pXVar4 = X509_ALGOR_dup((X509_ALGOR *)*param_1);
    *puVar2 = pXVar4;
    if (pXVar4 != (X509_ALGOR *)0x0) {
      a = ASN1_BIT_STRING_new();
      puVar2[1] = a;
      if (a != (ASN1_BIT_STRING *)0x0) {
        iVar1 = ASN1_BIT_STRING_set(a,*(uchar **)((int *)param_1[1] + 2),*(int *)param_1[1]);
        if (iVar1 != 0) {
          if (param_1[2] == 0) goto LAB_0010098e;
          ERR_set_mark();
          lVar5 = EVP_PKEY_dup(param_1[2]);
          puVar2[2] = lVar5;
          if (lVar5 == 0) {
            *(byte *)(puVar2 + 5) = *(byte *)(puVar2 + 5) | 1;
            iVar1 = x509_pubkey_decode(puVar2 + 2,puVar2);
            if (iVar1 < 1) {
              x509_pubkey_ex_free(&local_38,local_it_17);
              ERR_clear_last_mark();
              goto LAB_001009f3;
            }
          }
          ERR_pop_to_mark();
          goto LAB_0010098e;
        }
      }
    }
    x509_pubkey_ex_free(&local_38,local_it_17);
    ERR_new();
    ERR_set_debug("crypto/x509/x_pubkey.c",0x12e,"X509_PUBKEY_dup");
    ERR_set_error(0xb,0x8000d,0);
  }
LAB_001009f3:
  puVar2 = (undefined8 *)0x0;
LAB_0010098e:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int X509_PUBKEY_set(X509_PUBKEY **x,EVP_PKEY *pkey)

{
  code *pcVar1;
  EVP_PKEY *pkey_00;
  int iVar2;
  X509_PUBKEY *a;
  undefined8 uVar3;
  long in_FS_OFFSET;
  uchar *local_48;
  long local_40;
  uchar *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((x == (X509_PUBKEY **)0x0) || (pkey == (EVP_PKEY *)0x0)) {
    ERR_new();
    ERR_set_debug("crypto/x509/x_pubkey.c",0x148,"X509_PUBKEY_set");
    ERR_set_error(0xb,0xc0102,0);
    iVar2 = 0;
    goto LAB_00100b27;
  }
  if (*(long *)&pkey->references == 0) {
    if (*(long *)&pkey[1].save_parameters != 0) {
      local_48 = (uchar *)0x0;
      local_40 = 0;
      uVar3 = OSSL_ENCODER_CTX_new_for_pkey(pkey,0x86,&_LC2,"SubjectPublicKeyInfo",0);
      iVar2 = OSSL_ENCODER_to_data(uVar3,&local_48,&local_40);
      if (iVar2 == 0) {
        OSSL_ENCODER_CTX_free(uVar3);
        CRYPTO_free(local_48);
      }
      else {
        local_38 = local_48;
        a = d2i_X509_PUBKEY((X509_PUBKEY **)0x0,&local_38,local_40);
        OSSL_ENCODER_CTX_free(uVar3);
        CRYPTO_free(local_48);
        if (a != (X509_PUBKEY *)0x0) goto LAB_00100af3;
      }
    }
    ERR_new();
    ERR_set_debug("crypto/x509/x_pubkey.c",0x16d,"X509_PUBKEY_set");
    ERR_set_error(0xb,0x6f,0);
LAB_00100bf4:
    a = (X509_PUBKEY *)0x0;
  }
  else {
    a = X509_PUBKEY_new();
    if (a == (X509_PUBKEY *)0x0) {
      ERR_new();
      ERR_set_debug("crypto/x509/x_pubkey.c",0x14e,"X509_PUBKEY_set");
      ERR_set_error(0xb,0x8000d,0);
      goto LAB_00100bf4;
    }
    pcVar1 = *(code **)(*(long *)&pkey->references + 0x28);
    if (pcVar1 == (code *)0x0) {
      ERR_new();
      ERR_set_debug("crypto/x509/x_pubkey.c",0x157,"X509_PUBKEY_set");
      ERR_set_error(0xb,0x7c,0);
    }
    else {
      iVar2 = (*pcVar1)(a,pkey);
      if (iVar2 == 0) {
        ERR_new();
        ERR_set_debug("crypto/x509/x_pubkey.c",0x153,"X509_PUBKEY_set");
        ERR_set_error(0xb,0x7e,0);
      }
      else {
LAB_00100af3:
        X509_PUBKEY_free(*x);
        iVar2 = EVP_PKEY_up_ref(pkey);
        if (iVar2 != 0) {
          pkey_00 = a->pkey;
          *x = a;
          if (pkey_00 != (EVP_PKEY *)0x0) {
            EVP_PKEY_free(pkey_00);
          }
          a->pkey = pkey;
          iVar2 = 1;
          goto LAB_00100b27;
        }
        ERR_new();
        ERR_set_debug("crypto/x509/x_pubkey.c",0x173,"X509_PUBKEY_set");
        ERR_set_error(0xb,0xc0103,0);
      }
    }
  }
  X509_PUBKEY_free(a);
  iVar2 = 0;
LAB_00100b27:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



long X509_PUBKEY_get0(long param_1)

{
  long lVar1;
  
  if (param_1 == 0) {
    ERR_new();
    lVar1 = 0;
    ERR_set_debug("crypto/x509/x_pubkey.c",0x1ca,"X509_PUBKEY_get0");
    ERR_set_error(0xb,0xc0102,0);
  }
  else {
    lVar1 = *(long *)(param_1 + 0x10);
    if (lVar1 == 0) {
      ERR_new();
      ERR_set_debug("crypto/x509/x_pubkey.c",0x1d0,"X509_PUBKEY_get0");
      ERR_set_error(6,0x72,0);
    }
  }
  return lVar1;
}



EVP_PKEY * X509_PUBKEY_get(X509_PUBKEY *key)

{
  int iVar1;
  EVP_PKEY *pEVar2;
  
  pEVar2 = (EVP_PKEY *)X509_PUBKEY_get0();
  if (pEVar2 != (EVP_PKEY *)0x0) {
    iVar1 = EVP_PKEY_up_ref(pEVar2);
    if (iVar1 != 0) {
      return pEVar2;
    }
    ERR_new();
    ERR_set_debug("crypto/x509/x_pubkey.c",0x1dc,"X509_PUBKEY_get");
    ERR_set_error(0xb,0xc0103,0);
  }
  return (EVP_PKEY *)0x0;
}



EVP_PKEY *
d2i_PUBKEY_int_constprop_0
          (EVP_PKEY *param_1,undefined8 *param_2,long param_3,ENGINE *param_4,char *param_5,
          byte param_6)

{
  X509_PUBKEY *key;
  EVP_PKEY *pEVar1;
  char *pcVar2;
  EVP_PKEY **a;
  long in_FS_OFFSET;
  EVP_PKEY *local_50;
  uchar *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (uchar *)*param_2;
  local_50 = (EVP_PKEY *)0x0;
  if ((param_5 == (char *)0x0 && param_4 == (ENGINE *)0x0) &&
     (a = (EVP_PKEY **)0x0, (param_6 & 1) == 0)) {
LAB_00100ec6:
    key = d2i_X509_PUBKEY((X509_PUBKEY **)a,&local_48,param_3);
    if (key == (X509_PUBKEY *)0x0) goto LAB_00100ff0;
    pEVar1 = X509_PUBKEY_get(key);
    X509_PUBKEY_free(key);
    local_50 = (EVP_PKEY *)0x0;
    if (pEVar1 == (EVP_PKEY *)0x0) {
      param_1 = (EVP_PKEY *)0x0;
    }
    else {
      *param_2 = local_48;
      if (param_1 != (EVP_PKEY *)0x0) {
        EVP_PKEY_free(*(EVP_PKEY **)param_1);
        *(EVP_PKEY **)param_1 = pEVar1;
        param_1 = local_50;
      }
    }
  }
  else {
    pEVar1 = (EVP_PKEY *)CRYPTO_zalloc(0x30,"crypto/x509/x_pubkey.c",0x1fb);
    local_50 = pEVar1;
    if (pEVar1 == (EVP_PKEY *)0x0) goto LAB_00100f2c;
    pEVar1->engine = param_4;
    CRYPTO_free((pEVar1->pkey).ptr);
    (pEVar1->pkey).ptr = (char *)0x0;
    if (param_5 == (char *)0x0) {
LAB_00100fc8:
      a = &local_50;
      *(byte *)&local_50->save_parameters = (byte)local_50->save_parameters & 0xfe | param_6 & 1;
      goto LAB_00100ec6;
    }
    pcVar2 = CRYPTO_strdup(param_5,"crypto/x509/x_pubkey.c",0x37);
    (pEVar1->pkey).ptr = pcVar2;
    if (pcVar2 != (char *)0x0) goto LAB_00100fc8;
LAB_00100ff0:
    pEVar1 = (EVP_PKEY *)0x0;
    param_1 = local_50;
  }
  X509_PUBKEY_free((X509_PUBKEY *)param_1);
LAB_00100f2c:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pEVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ossl_d2i_PUBKEY_legacy(void)

{
  d2i_PUBKEY_int_constprop_0();
  return;
}



void d2i_PUBKEY_ex(void)

{
  d2i_PUBKEY_int_constprop_0();
  return;
}



EVP_PKEY * d2i_PUBKEY(EVP_PKEY **a,uchar **pp,long length)

{
  EVP_PKEY *pEVar1;
  
  pEVar1 = (EVP_PKEY *)d2i_PUBKEY_ex();
  return pEVar1;
}



int i2d_PUBKEY(EVP_PKEY *a,uchar **pp)

{
  code *pcVar1;
  int iVar2;
  X509_PUBKEY *a_00;
  undefined8 uVar3;
  BIO_METHOD *type;
  BIO *bp;
  long lVar4;
  long in_FS_OFFSET;
  undefined8 *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (a == (EVP_PKEY *)0x0) {
    iVar2 = 0;
    goto LAB_001010c1;
  }
  if (*(long *)&a->references == 0) {
    if (*(long *)&a[1].save_parameters == 0) goto LAB_001011de;
    uVar3 = OSSL_ENCODER_CTX_new_for_pkey(a,0x86,&_LC2,"SubjectPublicKeyInfo",0);
    type = BIO_s_mem();
    bp = BIO_new(type);
    local_38 = (undefined8 *)0x0;
    iVar2 = OSSL_ENCODER_CTX_get_num_encoders(uVar3);
    if ((iVar2 == 0) || (bp == (BIO *)0x0)) {
LAB_0010113a:
      iVar2 = -1;
    }
    else {
      iVar2 = OSSL_ENCODER_to_bio(uVar3,bp);
      if (iVar2 == 0) goto LAB_0010113a;
      lVar4 = BIO_ctrl(bp,0x73,0,&local_38);
      if (lVar4 < 1) goto LAB_0010113a;
      iVar2 = (int)*local_38;
      if (pp != (uchar **)0x0) {
        if (*pp == (uchar *)0x0) {
          *pp = (uchar *)local_38[1];
          *local_38 = 0;
          local_38[1] = 0;
        }
        else {
          memcpy(*pp,(uchar *)local_38[1],(long)iVar2);
          *pp = *pp + iVar2;
        }
      }
    }
    BIO_free(bp);
    OSSL_ENCODER_CTX_free(uVar3);
    goto LAB_001010c1;
  }
  a_00 = X509_PUBKEY_new();
  if (a_00 == (X509_PUBKEY *)0x0) {
LAB_001011de:
    iVar2 = -1;
    goto LAB_001010c1;
  }
  pcVar1 = *(code **)(*(long *)&a->references + 0x28);
  if (pcVar1 == (code *)0x0) {
LAB_001010b4:
    iVar2 = -1;
  }
  else {
    iVar2 = (*pcVar1)(a_00,a);
    if (iVar2 == 0) goto LAB_001010b4;
    a_00->pkey = a;
    iVar2 = i2d_X509_PUBKEY(a_00,pp);
    a_00->pkey = (EVP_PKEY *)0x0;
  }
  X509_PUBKEY_free(a_00);
LAB_001010c1:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



RSA * d2i_RSA_PUBKEY(RSA **a,uchar **pp,long length)

{
  EVP_PKEY *pkey;
  rsa_st *prVar1;
  long in_FS_OFFSET;
  uchar *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = *pp;
  pkey = (EVP_PKEY *)ossl_d2i_PUBKEY_legacy(0,&local_38);
  if (pkey != (EVP_PKEY *)0x0) {
    prVar1 = EVP_PKEY_get1_RSA(pkey);
    EVP_PKEY_free(pkey);
    if (prVar1 != (rsa_st *)0x0) {
      *pp = local_38;
      if (a != (RSA **)0x0) {
        RSA_free(*a);
        *a = prVar1;
      }
      goto LAB_0010127d;
    }
  }
  prVar1 = (rsa_st *)0x0;
LAB_0010127d:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return prVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int i2d_RSA_PUBKEY(RSA *a,uchar **pp)

{
  int iVar1;
  EVP_PKEY *pkey;
  
  iVar1 = 0;
  if (a != (RSA *)0x0) {
    pkey = EVP_PKEY_new();
    if (pkey == (EVP_PKEY *)0x0) {
      ERR_new();
      ERR_set_debug("crypto/x509/x_pubkey.c",0x27b,"i2d_RSA_PUBKEY");
      iVar1 = -1;
      ERR_set_error(0xd,0x80006,0);
    }
    else {
      EVP_PKEY_assign(pkey,6,a);
      iVar1 = i2d_PUBKEY(pkey,pp);
      (pkey->pkey).ptr = (char *)0x0;
      EVP_PKEY_free(pkey);
    }
  }
  return iVar1;
}



dh_st * ossl_d2i_DH_PUBKEY(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  EVP_PKEY *pkey;
  dh_st *pdVar2;
  long in_FS_OFFSET;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = *param_2;
  pkey = (EVP_PKEY *)ossl_d2i_PUBKEY_legacy(0,&local_38);
  if (pkey != (EVP_PKEY *)0x0) {
    iVar1 = EVP_PKEY_get_id(pkey);
    if (iVar1 == 0x1c) {
      pdVar2 = EVP_PKEY_get1_DH(pkey);
      EVP_PKEY_free(pkey);
      if (pdVar2 != (dh_st *)0x0) {
        *param_2 = local_38;
        if (param_1 != (undefined8 *)0x0) {
          DH_free((DH *)*param_1);
          *param_1 = pdVar2;
        }
        goto LAB_001013a3;
      }
    }
    else {
      EVP_PKEY_free(pkey);
    }
  }
  pdVar2 = (dh_st *)0x0;
LAB_001013a3:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pdVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int ossl_i2d_DH_PUBKEY(void *param_1,uchar **param_2)

{
  int iVar1;
  EVP_PKEY *pkey;
  
  iVar1 = 0;
  if (param_1 != (void *)0x0) {
    pkey = EVP_PKEY_new();
    if (pkey == (EVP_PKEY *)0x0) {
      ERR_new();
      ERR_set_debug("crypto/x509/x_pubkey.c",0x2a5,"ossl_i2d_DH_PUBKEY");
      iVar1 = -1;
      ERR_set_error(0xd,0x80006,0);
    }
    else {
      EVP_PKEY_assign(pkey,0x1c,param_1);
      iVar1 = i2d_PUBKEY(pkey,param_2);
      (pkey->pkey).ptr = (char *)0x0;
      EVP_PKEY_free(pkey);
    }
  }
  return iVar1;
}



dh_st * ossl_d2i_DHx_PUBKEY(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  EVP_PKEY *pkey;
  dh_st *pdVar2;
  long in_FS_OFFSET;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = *param_2;
  pkey = (EVP_PKEY *)ossl_d2i_PUBKEY_legacy(0,&local_38);
  if (pkey != (EVP_PKEY *)0x0) {
    iVar1 = EVP_PKEY_get_id(pkey);
    if (iVar1 == 0x398) {
      pdVar2 = EVP_PKEY_get1_DH(pkey);
      EVP_PKEY_free(pkey);
      if (pdVar2 != (dh_st *)0x0) {
        *param_2 = local_38;
        if (param_1 != (undefined8 *)0x0) {
          DH_free((DH *)*param_1);
          *param_1 = pdVar2;
        }
        goto LAB_001014f5;
      }
    }
    else {
      EVP_PKEY_free(pkey);
    }
  }
  pdVar2 = (dh_st *)0x0;
LAB_001014f5:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pdVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int ossl_i2d_DHx_PUBKEY(void *param_1,uchar **param_2)

{
  int iVar1;
  EVP_PKEY *pkey;
  
  iVar1 = 0;
  if (param_1 != (void *)0x0) {
    pkey = EVP_PKEY_new();
    if (pkey == (EVP_PKEY *)0x0) {
      ERR_new();
      ERR_set_debug("crypto/x509/x_pubkey.c",0x2ce,"ossl_i2d_DHx_PUBKEY");
      iVar1 = -1;
      ERR_set_error(0xd,0x80006,0);
    }
    else {
      EVP_PKEY_assign(pkey,0x398,param_1);
      iVar1 = i2d_PUBKEY(pkey,param_2);
      (pkey->pkey).ptr = (char *)0x0;
      EVP_PKEY_free(pkey);
    }
  }
  return iVar1;
}



DSA * d2i_DSA_PUBKEY(DSA **a,uchar **pp,long length)

{
  EVP_PKEY *pkey;
  dsa_st *pdVar1;
  long in_FS_OFFSET;
  uchar *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = *pp;
  pkey = (EVP_PKEY *)ossl_d2i_PUBKEY_legacy(0,&local_38);
  if (pkey != (EVP_PKEY *)0x0) {
    pdVar1 = EVP_PKEY_get1_DSA(pkey);
    EVP_PKEY_free(pkey);
    if (pdVar1 != (dsa_st *)0x0) {
      *pp = local_38;
      if (a != (DSA **)0x0) {
        DSA_free(*a);
        *a = pdVar1;
      }
      goto LAB_0010165d;
    }
  }
  pdVar1 = (dsa_st *)0x0;
LAB_0010165d:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pdVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



DSA * ossl_d2i_DSA_PUBKEY(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  DSA *r;
  long in_FS_OFFSET;
  uchar *local_40;
  long local_38;
  long local_30;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = (uchar *)*param_2;
  r = d2i_DSA_PUBKEY((DSA **)0x0,&local_40,param_3);
  if (r != (DSA *)0x0) {
    DSA_get0_pqg(r,&local_38,&local_30,&local_28);
    if (((local_38 != 0) && (local_30 != 0)) && (local_28 != 0)) {
      *param_2 = local_40;
      if (param_1 != (undefined8 *)0x0) {
        DSA_free((DSA *)*param_1);
        *param_1 = r;
      }
      goto LAB_00101716;
    }
    DSA_free(r);
  }
  r = (DSA *)0x0;
LAB_00101716:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return r;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int i2d_DSA_PUBKEY(DSA *a,uchar **pp)

{
  int iVar1;
  EVP_PKEY *pkey;
  
  iVar1 = 0;
  if (a != (DSA *)0x0) {
    pkey = EVP_PKEY_new();
    if (pkey == (EVP_PKEY *)0x0) {
      ERR_new();
      ERR_set_debug("crypto/x509/x_pubkey.c",0x310,"i2d_DSA_PUBKEY");
      iVar1 = -1;
      ERR_set_error(0xd,0x80006,0);
    }
    else {
      EVP_PKEY_assign(pkey,0x74,a);
      iVar1 = i2d_PUBKEY(pkey,pp);
      (pkey->pkey).ptr = (char *)0x0;
      EVP_PKEY_free(pkey);
    }
  }
  return iVar1;
}



EC_KEY * d2i_EC_PUBKEY(EC_KEY **a,uchar **pp,long length)

{
  int iVar1;
  EVP_PKEY *pkey;
  ec_key_st *peVar2;
  long in_FS_OFFSET;
  uchar *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = *pp;
  pkey = (EVP_PKEY *)ossl_d2i_PUBKEY_legacy(0,&local_38);
  if (pkey != (EVP_PKEY *)0x0) {
    iVar1 = EVP_PKEY_get_id(pkey);
    if ((iVar1 == 0x198) || (iVar1 == 0x494)) {
      peVar2 = EVP_PKEY_get1_EC_KEY(pkey);
      EVP_PKEY_free(pkey);
      if (peVar2 != (ec_key_st *)0x0) {
        *pp = local_38;
        if (a != (EC_KEY **)0x0) {
          EC_KEY_free(*a);
          *a = peVar2;
        }
        goto LAB_0010184c;
      }
    }
    else {
      EVP_PKEY_free(pkey);
    }
  }
  peVar2 = (EC_KEY *)0x0;
LAB_0010184c:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return peVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int i2d_EC_PUBKEY(EC_KEY *a,uchar **pp)

{
  int iVar1;
  EVP_PKEY *pkey;
  
  iVar1 = 0;
  if (a != (EC_KEY *)0x0) {
    pkey = EVP_PKEY_new();
    if (pkey == (EVP_PKEY *)0x0) {
      ERR_new();
      ERR_set_debug("crypto/x509/x_pubkey.c",0x33d,"i2d_EC_PUBKEY");
      iVar1 = -1;
      ERR_set_error(0xd,0x80006,0);
    }
    else {
      EVP_PKEY_assign(pkey,0x198,a);
      iVar1 = i2d_PUBKEY(pkey,pp);
      (pkey->pkey).ptr = (char *)0x0;
      EVP_PKEY_free(pkey);
    }
  }
  return iVar1;
}



long ossl_d2i_ED25519_PUBKEY(long *param_1,undefined8 *param_2)

{
  EVP_PKEY *pkey;
  long lVar1;
  long in_FS_OFFSET;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = *param_2;
  pkey = (EVP_PKEY *)ossl_d2i_PUBKEY_legacy(0,&local_38);
  if (pkey != (EVP_PKEY *)0x0) {
    lVar1 = ossl_evp_pkey_get1_ED25519(pkey);
    EVP_PKEY_free(pkey);
    if (lVar1 != 0) {
      *param_2 = local_38;
      if (param_1 != (long *)0x0) {
        ossl_ecx_key_free(*param_1);
        *param_1 = lVar1;
      }
      goto LAB_001019bd;
    }
  }
  lVar1 = 0;
LAB_001019bd:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int ossl_i2d_ED25519_PUBKEY(void *param_1,uchar **param_2)

{
  int iVar1;
  EVP_PKEY *pkey;
  
  iVar1 = 0;
  if (param_1 != (void *)0x0) {
    pkey = EVP_PKEY_new();
    if (pkey == (EVP_PKEY *)0x0) {
      ERR_new();
      ERR_set_debug("crypto/x509/x_pubkey.c",0x367,"ossl_i2d_ED25519_PUBKEY");
      iVar1 = -1;
      ERR_set_error(0xd,0x80006,0);
    }
    else {
      EVP_PKEY_assign(pkey,0x43f,param_1);
      iVar1 = i2d_PUBKEY(pkey,param_2);
      (pkey->pkey).ptr = (char *)0x0;
      EVP_PKEY_free(pkey);
    }
  }
  return iVar1;
}



long ossl_d2i_ED448_PUBKEY(long *param_1,undefined8 *param_2)

{
  int iVar1;
  EVP_PKEY *pkey;
  long lVar2;
  long in_FS_OFFSET;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = *param_2;
  pkey = (EVP_PKEY *)ossl_d2i_PUBKEY_legacy(0,&local_38);
  if (pkey != (EVP_PKEY *)0x0) {
    iVar1 = EVP_PKEY_get_id(pkey);
    if (iVar1 == 0x440) {
      lVar2 = ossl_evp_pkey_get1_ED448();
      EVP_PKEY_free(pkey);
      if (lVar2 != 0) {
        *param_2 = local_38;
        if (param_1 != (long *)0x0) {
          ossl_ecx_key_free(*param_1);
          *param_1 = lVar2;
        }
        goto LAB_00101ae5;
      }
    }
    else {
      EVP_PKEY_free(pkey);
    }
  }
  lVar2 = 0;
LAB_00101ae5:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int ossl_i2d_ED448_PUBKEY(void *param_1,uchar **param_2)

{
  int iVar1;
  EVP_PKEY *pkey;
  
  iVar1 = 0;
  if (param_1 != (void *)0x0) {
    pkey = EVP_PKEY_new();
    if (pkey == (EVP_PKEY *)0x0) {
      ERR_new();
      ERR_set_debug("crypto/x509/x_pubkey.c",0x391,"ossl_i2d_ED448_PUBKEY");
      iVar1 = -1;
      ERR_set_error(0xd,0x80006,0);
    }
    else {
      EVP_PKEY_assign(pkey,0x440,param_1);
      iVar1 = i2d_PUBKEY(pkey,param_2);
      (pkey->pkey).ptr = (char *)0x0;
      EVP_PKEY_free(pkey);
    }
  }
  return iVar1;
}



long ossl_d2i_X25519_PUBKEY(long *param_1,undefined8 *param_2)

{
  int iVar1;
  EVP_PKEY *pkey;
  long lVar2;
  long in_FS_OFFSET;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = *param_2;
  pkey = (EVP_PKEY *)ossl_d2i_PUBKEY_legacy(0,&local_38);
  if (pkey != (EVP_PKEY *)0x0) {
    iVar1 = EVP_PKEY_get_id(pkey);
    if (iVar1 == 0x40a) {
      lVar2 = ossl_evp_pkey_get1_X25519();
      EVP_PKEY_free(pkey);
      if (lVar2 != 0) {
        *param_2 = local_38;
        if (param_1 != (long *)0x0) {
          ossl_ecx_key_free(*param_1);
          *param_1 = lVar2;
        }
        goto LAB_00101c35;
      }
    }
    else {
      EVP_PKEY_free(pkey);
    }
  }
  lVar2 = 0;
LAB_00101c35:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int ossl_i2d_X25519_PUBKEY(void *param_1,uchar **param_2)

{
  int iVar1;
  EVP_PKEY *pkey;
  
  iVar1 = 0;
  if (param_1 != (void *)0x0) {
    pkey = EVP_PKEY_new();
    if (pkey == (EVP_PKEY *)0x0) {
      ERR_new();
      ERR_set_debug("crypto/x509/x_pubkey.c",0x3bb,"ossl_i2d_X25519_PUBKEY");
      iVar1 = -1;
      ERR_set_error(0xd,0x80006,0);
    }
    else {
      EVP_PKEY_assign(pkey,0x40a,param_1);
      iVar1 = i2d_PUBKEY(pkey,param_2);
      (pkey->pkey).ptr = (char *)0x0;
      EVP_PKEY_free(pkey);
    }
  }
  return iVar1;
}



long ossl_d2i_X448_PUBKEY(long *param_1,undefined8 *param_2)

{
  int iVar1;
  EVP_PKEY *pkey;
  long lVar2;
  long in_FS_OFFSET;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = *param_2;
  pkey = (EVP_PKEY *)ossl_d2i_PUBKEY_legacy(0,&local_38);
  if (pkey != (EVP_PKEY *)0x0) {
    iVar1 = EVP_PKEY_get_id(pkey);
    if (iVar1 == 0x40b) {
      lVar2 = ossl_evp_pkey_get1_X448();
      EVP_PKEY_free(pkey);
      if (lVar2 != 0) {
        *param_2 = local_38;
        if (param_1 != (long *)0x0) {
          ossl_ecx_key_free(*param_1);
          *param_1 = lVar2;
        }
        goto LAB_00101d85;
      }
    }
    else {
      EVP_PKEY_free(pkey);
    }
  }
  lVar2 = 0;
LAB_00101d85:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int ossl_i2d_X448_PUBKEY(void *param_1,uchar **param_2)

{
  int iVar1;
  EVP_PKEY *pkey;
  
  iVar1 = 0;
  if (param_1 != (void *)0x0) {
    pkey = EVP_PKEY_new();
    if (pkey == (EVP_PKEY *)0x0) {
      ERR_new();
      ERR_set_debug("crypto/x509/x_pubkey.c",0x3e5,"ossl_i2d_X448_PUBKEY");
      iVar1 = -1;
      ERR_set_error(0xd,0x80006,0);
    }
    else {
      EVP_PKEY_assign(pkey,0x40b,param_1);
      iVar1 = i2d_PUBKEY(pkey,param_2);
      (pkey->pkey).ptr = (char *)0x0;
      EVP_PKEY_free(pkey);
    }
  }
  return iVar1;
}



void X509_PUBKEY_set0_public_key(long param_1,void *param_2,int param_3)

{
  ASN1_STRING_set0(*(ASN1_STRING **)(param_1 + 8),param_2,param_3);
  ossl_asn1_string_set_bits_left(*(undefined8 *)(param_1 + 8),0);
  return;
}



int X509_PUBKEY_set0_param
              (X509_PUBKEY *pub,ASN1_OBJECT *aobj,int ptype,void *pval,uchar *penc,int penclen)

{
  int iVar1;
  
  iVar1 = X509_ALGOR_set0(pub->algor,aobj,ptype,pval);
  if (iVar1 != 0) {
    if (penc != (uchar *)0x0) {
      X509_PUBKEY_set0_public_key(pub,penc,penclen);
    }
    iVar1 = 1;
  }
  return iVar1;
}



int X509_PUBKEY_get0_param
              (ASN1_OBJECT **ppkalg,uchar **pk,int *ppklen,X509_ALGOR **pa,X509_PUBKEY *pub)

{
  int iVar1;
  
  if (ppkalg != (ASN1_OBJECT **)0x0) {
    *ppkalg = pub->algor->algorithm;
  }
  if (pk != (uchar **)0x0) {
    iVar1 = pub->public_key->length;
    *pk = pub->public_key->data;
    *ppklen = iVar1;
  }
  if (pa != (X509_ALGOR **)0x0) {
    *pa = pub->algor;
  }
  return 1;
}



ASN1_BIT_STRING * X509_get0_pubkey_bitstr(X509 *x)

{
  if (x != (X509 *)0x0) {
    return *(ASN1_BIT_STRING **)(x->ex_kusage + 8);
  }
  return (ASN1_BIT_STRING *)0x0;
}



undefined8 X509_PUBKEY_eq(X509_PUBKEY *param_1,X509_PUBKEY *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  X509_ALGOR *local_30;
  X509_ALGOR *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == param_2) {
    uVar4 = 1;
    goto LAB_00101fcb;
  }
  if ((param_1 == (X509_PUBKEY *)0x0) || (param_2 == (X509_PUBKEY *)0x0)) {
LAB_00101fc9:
    uVar4 = 0;
  }
  else {
    iVar1 = X509_PUBKEY_get0_param((ASN1_OBJECT **)0x0,(uchar **)0x0,(int *)0x0,&local_30,param_1);
    if ((iVar1 != 0) && (local_30 != (X509_ALGOR *)0x0)) {
      iVar1 = X509_PUBKEY_get0_param((ASN1_OBJECT **)0x0,(uchar **)0x0,(int *)0x0,&local_28,param_2)
      ;
      if ((iVar1 != 0) && (local_28 != (X509_ALGOR *)0x0)) {
        iVar1 = X509_ALGOR_cmp(local_30,local_28);
        if (iVar1 != 0) goto LAB_00101fc9;
        lVar2 = X509_PUBKEY_get0(param_1);
        if (lVar2 != 0) {
          lVar3 = X509_PUBKEY_get0(param_2);
          if (lVar3 != 0) {
            uVar4 = EVP_PKEY_eq(lVar2,lVar3);
            goto LAB_00101fcb;
          }
        }
      }
    }
    uVar4 = 0xfffffffe;
  }
LAB_00101fcb:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 ossl_x509_PUBKEY_get0_libctx(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = *(undefined8 *)(param_3 + 0x18);
  }
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(param_3 + 0x20);
  }
  return 1;
}


