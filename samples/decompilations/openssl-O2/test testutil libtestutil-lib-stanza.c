
byte * strip_spaces(byte *param_1)

{
  byte bVar1;
  ushort **ppuVar2;
  size_t sVar3;
  byte *pbVar4;
  ushort *puVar5;
  
  bVar1 = *param_1;
  if (bVar1 != 0) {
    ppuVar2 = __ctype_b_loc();
    puVar5 = *ppuVar2;
    do {
      if ((*(byte *)((long)puVar5 + (ulong)bVar1 * 2 + 1) & 0x20) == 0) {
        sVar3 = strlen((char *)param_1);
        pbVar4 = param_1 + (sVar3 - 1);
        if (param_1 + (sVar3 - 1) != param_1) goto LAB_00100061;
        goto LAB_0010006c;
      }
      bVar1 = param_1[1];
      param_1 = param_1 + 1;
    } while (bVar1 != 0);
  }
  return (byte *)0x0;
LAB_00100061:
  if ((*(byte *)((long)puVar5 + (ulong)*pbVar4 * 2 + 1) & 0x20) == 0) {
LAB_0010006c:
    if (*param_1 == 0) {
      return (byte *)0x0;
    }
    return param_1;
  }
  *pbVar4 = 0;
  if (pbVar4 + -1 == param_1) goto LAB_0010006c;
  puVar5 = *ppuVar2;
  pbVar4 = pbVar4 + -1;
  goto LAB_00100061;
}



undefined8 test_start_file(undefined8 *param_1,char *param_2)

{
  BIO *pBVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  byte bVar5;
  
  bVar5 = 0;
  test_info("test/testutil/stanza.c",0x15,"Reading %s",param_2);
  set_test_title(param_2);
  *param_1 = 0;
  param_1[0x131] = 0;
  puVar4 = (undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8);
  for (uVar3 = (ulong)(((int)param_1 -
                       (int)(undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8)) + 0x990U >> 3
                      ); uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar4 = 0;
    puVar4 = puVar4 + (ulong)bVar5 * -2 + 1;
  }
  pBVar1 = BIO_new_file(param_2,"r");
  param_1[1] = pBVar1;
  uVar2 = test_ptr("test/testutil/stanza.c",0x18,"s->fp = BIO_new_file(testfile, \"r\")",pBVar1);
  if ((int)uVar2 != 0) {
    *param_1 = param_2;
    uVar2 = 1;
  }
  return uVar2;
}



undefined8 test_end_file(long param_1)

{
  test_info("test/testutil/stanza.c",0x20,"Completed %d tests with %d errors and %d skipped",
            *(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x18),
            *(undefined4 *)(param_1 + 0x20));
  BIO_free(*(BIO **)(param_1 + 8));
  return 1;
}



undefined8 test_readstanza(long param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  ulong uVar5;
  BIO_METHOD *type;
  BIO *pBVar6;
  undefined8 uVar7;
  long in_FS_OFFSET;
  undefined8 *local_d0;
  long local_c8 [17];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_d0 = (undefined8 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x24) = 0;
LAB_001001c0:
  do {
    iVar1 = BIO_gets(*(BIO **)(param_1 + 8),&buff_0,0x20000);
    if (iVar1 == 0) {
LAB_001004e0:
      uVar7 = 1;
LAB_001004e5:
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return uVar7;
    }
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    pcVar3 = strchr(&buff_0,10);
    iVar1 = test_ptr("test/testutil/stanza.c",0x5f,"p = strchr(buff, \'\\n\')",pcVar3);
    if (iVar1 == 0) {
      test_info("test/testutil/stanza.c",0x60,"Line %d too long",*(undefined4 *)(param_1 + 0x10));
      uVar7 = 0;
      goto LAB_001004e5;
    }
    *pcVar3 = '\0';
    if (buff_0 == '\0') goto LAB_001004e0;
  } while (buff_0 == '#');
  pcVar3 = strchr(&buff_0,0x3d);
  iVar1 = test_ptr("test/testutil/stanza.c",0x6e,"equals = strchr(buff, \'=\')",pcVar3);
  if (iVar1 == 0) {
    test_info("test/testutil/stanza.c",0x6f,"Missing = at line %d\n",*(undefined4 *)(param_1 + 0x10)
             );
    uVar7 = 0;
    goto LAB_001004e5;
  }
  *pcVar3 = '\0';
  pcVar4 = (char *)strip_spaces(&buff_0);
  iVar1 = test_ptr("test/testutil/stanza.c",0x73,"key = strip_spaces(buff)");
  if (iVar1 == 0) {
    test_info("test/testutil/stanza.c",0x74,"Empty field at line %d\n",
              *(undefined4 *)(param_1 + 0x10));
    uVar7 = 0;
    goto LAB_001004e5;
  }
  pcVar3 = (char *)strip_spaces(pcVar3 + 1);
  if (pcVar3 == (char *)0x0) {
    pcVar3 = "";
  }
  iVar1 = strcmp(pcVar4,"Title");
  if (iVar1 == 0) {
    test_info("test/testutil/stanza.c",0x7b,"Starting \"%s\" tests at line %d",pcVar3,
              *(undefined4 *)(param_1 + 0x10));
    goto LAB_001001c0;
  }
  iVar1 = *(int *)(param_1 + 0x24);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x10);
  }
  iVar2 = strcmp(pcVar4,"PrivateKey");
  if (((iVar2 == 0) || (iVar2 = strcmp(pcVar4,"PublicKey"), iVar2 == 0)) ||
     (iVar2 = strcmp(pcVar4,"ParamKey"), iVar2 == 0)) {
    if (*(BIO **)(param_1 + 0x988) == (BIO *)0x0) {
      type = BIO_s_mem();
      pBVar6 = BIO_new(type);
      *(BIO **)(param_1 + 0x988) = pBVar6;
      iVar1 = test_ptr("test/testutil/stanza.c",0x2e,"s->key = BIO_new(BIO_s_mem())",pBVar6);
    }
    else {
      uVar5 = BIO_ctrl(*(BIO **)(param_1 + 0x988),1,0,(void *)0x0);
      iVar1 = test_int_gt("test/testutil/stanza.c",0x30,"BIO_reset(s->key)",&_LC18,
                          uVar5 & 0xffffffff,0);
    }
    if (iVar1 != 0) {
      do {
        iVar1 = BIO_gets(*(BIO **)(param_1 + 8),(char *)local_c8,0x80);
        if (iVar1 == 0) {
          test_error("test/testutil/stanza.c",0x3c,"Can\'t find key end");
          uVar7 = 0;
          goto LAB_001004e5;
        }
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
        iVar1 = BIO_puts(*(BIO **)(param_1 + 0x988),(char *)local_c8);
        iVar1 = test_int_gt("test/testutil/stanza.c",0x37,"BIO_puts(s->key, tmpbuf)",&_LC18,iVar1,0)
        ;
        if (iVar1 == 0) goto LAB_0010049b;
      } while (local_c8[0] != 0x444e452d2d2d2d2d);
      iVar1 = *(int *)(param_1 + 0x24);
      goto LAB_001003be;
    }
  }
  else {
LAB_001003be:
    *(int *)(param_1 + 0x24) = iVar1 + 1;
    iVar1 = test_int_lt("test/testutil/stanza.c",0x89,"s->numpairs++","TESTMAXPAIRS",iVar1);
    if (iVar1 != 0) {
      pcVar4 = CRYPTO_strdup(pcVar4,"test/testutil/stanza.c",0x8a);
      *local_d0 = pcVar4;
      iVar1 = test_ptr("test/testutil/stanza.c",0x8a,"pp->key = OPENSSL_strdup(key)",pcVar4);
      if (iVar1 != 0) {
        pcVar3 = CRYPTO_strdup(pcVar3,"test/testutil/stanza.c",0x8b);
        local_d0[1] = pcVar3;
        iVar1 = test_ptr("test/testutil/stanza.c",0x8b,"pp->value = OPENSSL_strdup(value)",pcVar3);
        if (iVar1 != 0) {
          local_d0 = local_d0 + 2;
          goto LAB_001001c0;
        }
      }
    }
  }
LAB_0010049b:
  uVar7 = 0;
  goto LAB_001004e5;
}



void test_clearstanza(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  iVar1 = *(int *)(param_1 + 0x24);
  if (0 < iVar1) {
    puVar2 = (undefined8 *)(param_1 + 0x28);
    do {
      puVar3 = puVar2 + 2;
      CRYPTO_free((void *)*puVar2);
      CRYPTO_free((void *)puVar2[1]);
      puVar2 = puVar3;
    } while (puVar3 != (undefined8 *)(param_1 + 0x38 + (ulong)(iVar1 - 1) * 0x10));
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}


