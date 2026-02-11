
undefined8 engine_expect(long param_1,int param_2)

{
  if ((1 < param_2 - 3U) && (param_2 != 0)) {
    return 0;
  }
  *(int *)(param_1 + 0x10) = param_2;
  return 1;
}



bool engine_eof(long param_1)

{
  return *(int *)(param_1 + 0x14) != 0;
}



undefined8 engine_error(void)

{
  return 0;
}



undefined8 engine_close(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    ENGINE_free((ENGINE *)*param_1);
    CRYPTO_free((void *)param_1[1]);
    CRYPTO_free(param_1);
    return 1;
  }
  return 1;
}



long engine_load(undefined8 *param_1,UI_METHOD *param_2,void *param_3)

{
  int iVar1;
  uint uVar2;
  EVP_PKEY *pkey;
  EVP_PKEY *pkey_00;
  long lVar3;
  ENGINE *e;
  
  if ((*(int *)((long)param_1 + 0x14) == 0) && (iVar1 = ENGINE_init((ENGINE *)*param_1), iVar1 != 0)
     ) {
    uVar2 = *(uint *)(param_1 + 2);
    e = (ENGINE *)*param_1;
    if ((uVar2 & 0xfffffffb) == 0) {
      pkey = ENGINE_load_private_key(e,(char *)param_1[1],param_2,param_3);
      if (pkey == (EVP_PKEY *)0x0) {
        uVar2 = *(uint *)(param_1 + 2);
        e = (ENGINE *)*param_1;
        if (uVar2 != 0) goto LAB_00100117;
        goto LAB_00100149;
      }
      if (*(int *)(param_1 + 2) == 3) {
        pkey_00 = ENGINE_load_public_key((ENGINE *)*param_1,(char *)param_1[1],param_2,param_3);
        ENGINE_finish((ENGINE *)*param_1);
        *(undefined4 *)((long)param_1 + 0x14) = 1;
        if (pkey_00 != (EVP_PKEY *)0x0) goto LAB_00100176;
      }
      else {
        ENGINE_finish((ENGINE *)*param_1);
        *(undefined4 *)((long)param_1 + 0x14) = 1;
      }
      pkey_00 = (EVP_PKEY *)0x0;
      lVar3 = OSSL_STORE_INFO_new_PKEY(pkey);
LAB_0010017e:
      if (lVar3 != 0) {
        return lVar3;
      }
      goto LAB_001000d4;
    }
LAB_00100117:
    if (uVar2 != 3) {
      ENGINE_finish(e);
      goto LAB_001000c8;
    }
LAB_00100149:
    pkey_00 = ENGINE_load_public_key(e,(char *)param_1[1],param_2,param_3);
    ENGINE_finish((ENGINE *)*param_1);
    *(undefined4 *)((long)param_1 + 0x14) = 1;
    if (pkey_00 != (EVP_PKEY *)0x0) {
      pkey = (EVP_PKEY *)0x0;
LAB_00100176:
      lVar3 = OSSL_STORE_INFO_new_PUBKEY(pkey_00);
      goto LAB_0010017e;
    }
  }
  else {
LAB_001000c8:
    *(undefined4 *)((long)param_1 + 0x14) = 1;
  }
  pkey_00 = (EVP_PKEY *)0x0;
  pkey = (EVP_PKEY *)0x0;
LAB_001000d4:
  EVP_PKEY_free(pkey);
  EVP_PKEY_free(pkey_00);
  return 0;
}



undefined8 * engine_open(undefined8 param_1,long param_2)

{
  int iVar1;
  char *pcVar2;
  char *id;
  ENGINE *e;
  char *pcVar3;
  undefined8 *puVar4;
  long in_FS_OFFSET;
  undefined1 auStack_138 [264];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = OPENSSL_strncasecmp(param_2,"org.openssl.engine:",0x13);
  if (iVar1 == 0) {
    pcVar3 = (char *)(param_2 + 0x13);
    pcVar2 = strchr(pcVar3,0x3a);
    if (pcVar2 == (char *)0x0) {
      pcVar3 = (char *)0x0;
      e = (ENGINE *)0x0;
    }
    else if ((*(char *)(param_2 + 0x13) == ':') || (pcVar2[1] == '\0')) {
      pcVar3 = (char *)0x0;
      e = (ENGINE *)0x0;
    }
    else {
      id = (char *)__strncpy_chk(auStack_138,pcVar3,(long)pcVar2 - (long)pcVar3,0x100);
      auStack_138[(long)pcVar2 - (long)pcVar3] = 0;
      e = ENGINE_by_id(id);
      pcVar3 = CRYPTO_strdup(pcVar2 + 1,"apps/lib/engine_loader.c",0x5a);
      if (((e != (ENGINE *)0x0) && (pcVar3 != (char *)0x0)) &&
         (puVar4 = (undefined8 *)CRYPTO_zalloc(0x18,"apps/lib/engine_loader.c",0x2f),
         puVar4 != (undefined8 *)0x0)) {
        *puVar4 = e;
        puVar4[1] = pcVar3;
        goto LAB_0010027a;
      }
    }
    CRYPTO_free(pcVar3);
    ENGINE_free(e);
  }
  puVar4 = (undefined8 *)0x0;
LAB_0010027a:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar4;
}



undefined8 setup_engine_loader(void)

{
  int iVar1;
  long lVar2;
  
  lVar2 = OSSL_STORE_LOADER_new(0,"org.openssl.engine");
  if (((((lVar2 != 0) && (iVar1 = OSSL_STORE_LOADER_set_open(lVar2,engine_open), iVar1 != 0)) &&
       (iVar1 = OSSL_STORE_LOADER_set_expect(lVar2,0x100000), iVar1 != 0)) &&
      ((iVar1 = OSSL_STORE_LOADER_set_load(lVar2,engine_load), iVar1 != 0 &&
       (iVar1 = OSSL_STORE_LOADER_set_eof(lVar2,engine_eof), iVar1 != 0)))) &&
     ((iVar1 = OSSL_STORE_LOADER_set_error(lVar2,engine_error), iVar1 != 0 &&
      ((iVar1 = OSSL_STORE_LOADER_set_close(lVar2,engine_close), iVar1 != 0 &&
       (iVar1 = OSSL_STORE_register_loader(lVar2), iVar1 != 0)))))) {
    return 1;
  }
  OSSL_STORE_LOADER_free(lVar2);
  return 0;
}



void destroy_engine_loader(void)

{
  undefined8 uVar1;
  
  uVar1 = OSSL_STORE_unregister_loader("org.openssl.engine");
  OSSL_STORE_LOADER_free(uVar1);
  return;
}


