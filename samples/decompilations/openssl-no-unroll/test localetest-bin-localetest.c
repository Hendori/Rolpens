
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 setup_tests(void)

{
  int iVar1;
  char *pcVar2;
  X509 *a;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  uchar *puVar6;
  long in_FS_OFFSET;
  uchar *local_380;
  undefined8 local_378;
  undefined5 uStack_370;
  undefined3 uStack_36b;
  undefined5 uStack_368;
  undefined8 local_358;
  undefined5 uStack_350;
  undefined3 uStack_34b;
  undefined5 uStack_348;
  uchar local_338 [4];
  uchar local_334 [788];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  puVar5 = (undefined8 *)&DAT_001002f0;
  puVar6 = local_338;
  for (lVar4 = 0x61; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(undefined8 *)puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 8;
  }
  local_378 = __LC11;
  uStack_370 = (undefined5)_UNK_00100608;
  local_358 = __LC12;
  uStack_350 = (undefined5)_UNK_00100618;
  *(undefined4 *)puVar6 = *(undefined4 *)puVar5;
  puVar6[4] = DAT_001005fc;
  uStack_36b = 0x79654b;
  uStack_368 = 0x6f666e49;
  uStack_34b = 0x79656b;
  uStack_348 = 0x6f666e69;
  local_380 = local_338;
  pcVar2 = setlocale(6,"");
  if (pcVar2 == (char *)0x0) {
    uVar3 = test_skip("test/localetest.c",0x66,"Cannot set the locale necessary for test");
  }
  else {
    iVar1 = strcasecmp((char *)&local_378,(char *)&local_358);
    pcVar2 = "succeeded";
    if (iVar1 != 0) {
      pcVar2 = "failed";
    }
    test_note("Case-insensitive comparison via strcasecmp in current locale %s\n",pcVar2);
    iVar1 = OPENSSL_strcasecmp(&local_378,&local_358);
    iVar1 = test_false("test/localetest.c",0x6b,"OPENSSL_strcasecmp(str1, str2)",iVar1 != 0);
    if (iVar1 != 0) {
      a = d2i_X509((X509 **)0x0,&local_380,0x30d);
      iVar1 = test_ptr("test/localetest.c",0x6f,&_LC8,a);
      if (iVar1 != 0) {
        uVar3 = X509_get_X509_PUBKEY(a);
        iVar1 = test_ptr("test/localetest.c",0x73,"cert_pubkey",uVar3);
        if (iVar1 != 0) {
          uVar3 = X509_PUBKEY_get0(uVar3);
          iVar1 = test_ptr("test/localetest.c",0x78,"X509_PUBKEY_get0(cert_pubkey)",uVar3);
          if (iVar1 != 0) {
            X509_free(a);
            uVar3 = 1;
            goto LAB_00100106;
          }
        }
        X509_free(a);
      }
    }
    uVar3 = 0;
  }
LAB_00100106:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void cleanup_tests(void)

{
  return;
}


