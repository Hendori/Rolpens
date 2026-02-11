
bool test_bf_set_key(int param_1)

{
  int iVar1;
  long in_FS_OFFSET;
  BF_KEY BStack_1078;
  uchar local_28 [8];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  BF_set_key(&BStack_1078,param_1 + 1,&key_test);
  BF_ecb_encrypt(&key_data,local_28,&BStack_1078,1);
  iVar1 = test_mem_eq("test/bftest.c",0x158,&_LC1,"&(key_out[n][0])",local_28,8,
                      &key_out + (long)param_1 * 8,8);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1 != 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong test_bf_ecb(int param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long in_FS_OFFSET;
  BF_KEY BStack_1098;
  uchar local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = (long)param_1 * 8;
  BF_set_key(&BStack_1098,8,&ecb_data + lVar3);
  BF_ecb_encrypt(&plain_data + lVar3,local_48,&BStack_1098,1);
  iVar1 = test_mem_eq("test/bftest.c",0x145,"&(cipher_data[n][0])",&_LC1,&cipher_data + lVar3,8,
                      local_48,8);
  BF_ecb_encrypt(local_48,local_48,&BStack_1098,0);
  uVar2 = test_mem_eq("test/bftest.c",0x149,"&(plain_data[n][0])",&_LC1,&plain_data + lVar3,8,
                      local_48,8);
  if ((int)uVar2 != 0) {
    uVar2 = (ulong)(iVar1 != 0);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong test_bf_ecb_raw(int param_1)

{
  int iVar1;
  size_t sVar2;
  ulong uVar3;
  long lVar4;
  long in_FS_OFFSET;
  undefined8 local_1090;
  BF_KEY local_1088;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar4 = (long)param_1;
  sVar2 = strlen(bf_key + lVar4 * 0x1e);
  BF_set_key(&local_1088,(int)sVar2,(uchar *)(bf_key + lVar4 * 0x1e));
  local_1090 = *(undefined8 *)(bf_plain + lVar4 * 8);
  BF_encrypt((uint *)&local_1090,&local_1088);
  iVar1 = test_mem_eq("test/bftest.c",0x132,"&(bf_cipher[n][0])","&(data[0])",bf_cipher + lVar4 * 8,
                      8,&local_1090,8);
  BF_decrypt((uint *)&local_1090,&local_1088);
  uVar3 = test_mem_eq("test/bftest.c",0x136,"&(bf_plain[n][0])","&(data[0])",bf_plain + lVar4 * 8,8,
                      &local_1090,8);
  if ((int)uVar3 != 0) {
    uVar3 = (ulong)(iVar1 != 0);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong test_bf_ofb64(void)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  ulong uVar4;
  int iVar5;
  long in_FS_OFFSET;
  int local_10ec;
  BF_KEY local_10e8;
  uchar local_a0 [8];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined8 local_78;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  sVar3 = strlen(cbc_data);
  BF_set_key(&local_10e8,0x10,&cbc_key);
  local_98 = (undefined1  [16])0x0;
  local_88 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  local_a0[0] = 0xfe;
  local_a0[1] = 0xdc;
  local_a0[2] = 0xba;
  local_a0[3] = 0x98;
  local_a0[4] = 'v';
  local_a0[5] = 'T';
  local_a0[6] = '2';
  local_a0[7] = '\x10';
  local_78 = 0;
  local_48 = 0;
  local_10ec = 0;
  BF_ofb64_encrypt((uchar *)cbc_data,local_68,0xd,&local_10e8,local_a0,&local_10ec);
  iVar1 = (int)sVar3;
  BF_ofb64_encrypt((uchar *)(cbc_data + 0xd),local_68 + 0xd,(ulong)(iVar1 - 0xc),&local_10e8,
                   local_a0,&local_10ec);
  iVar5 = iVar1 + 1;
  iVar2 = test_mem_eq("test/bftest.c",0x1aa,"cbc_out","ofb64_ok",local_68,iVar5,&ofb64_ok,iVar5);
  local_10ec = 0;
  local_a0[0] = 0xfe;
  local_a0[1] = 0xdc;
  local_a0[2] = 0xba;
  local_a0[3] = 0x98;
  local_a0[4] = 'v';
  local_a0[5] = 'T';
  local_a0[6] = '2';
  local_a0[7] = '\x10';
  BF_ofb64_encrypt(local_68,local_98,0x11,&local_10e8,local_a0,&local_10ec);
  BF_ofb64_encrypt(local_58 + 1,local_88 + 1,(ulong)(iVar1 - 0x10),&local_10e8,local_a0,&local_10ec)
  ;
  uVar4 = test_mem_eq("test/bftest.c",0x1b1,"cbc_in","cbc_data",local_98,iVar5,cbc_data,iVar5);
  if ((int)uVar4 != 0) {
    uVar4 = (ulong)(iVar2 != 0);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong test_bf_cfb64(void)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  ulong uVar4;
  int iVar5;
  long in_FS_OFFSET;
  int local_10ec;
  BF_KEY local_10e8;
  uchar local_a0 [8];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined8 local_78;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  sVar3 = strlen(cbc_data);
  BF_set_key(&local_10e8,0x10,&cbc_key);
  local_98 = (undefined1  [16])0x0;
  local_88 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  local_a0[0] = 0xfe;
  local_a0[1] = 0xdc;
  local_a0[2] = 0xba;
  local_a0[3] = 0x98;
  local_a0[4] = 'v';
  local_a0[5] = 'T';
  local_a0[6] = '2';
  local_a0[7] = '\x10';
  local_78 = 0;
  local_48 = 0;
  local_10ec = 0;
  BF_cfb64_encrypt((uchar *)cbc_data,local_68,0xd,&local_10e8,local_a0,&local_10ec,1);
  iVar1 = (int)sVar3;
  BF_cfb64_encrypt((uchar *)(cbc_data + 0xd),local_68 + 0xd,(ulong)(iVar1 - 0xc),&local_10e8,
                   local_a0,&local_10ec,1);
  iVar5 = iVar1 + 1;
  iVar2 = test_mem_eq("test/bftest.c",0x18a,"cbc_out","cfb64_ok",local_68,iVar5,&cfb64_ok,iVar5);
  local_a0[0] = 0xfe;
  local_a0[1] = 0xdc;
  local_a0[2] = 0xba;
  local_a0[3] = 0x98;
  local_a0[4] = 'v';
  local_a0[5] = 'T';
  local_a0[6] = '2';
  local_a0[7] = '\x10';
  local_10ec = 0;
  BF_cfb64_encrypt(local_68,local_98,0x11,&local_10e8,local_a0,&local_10ec,0);
  BF_cfb64_encrypt(local_58 + 1,local_88 + 1,(ulong)(iVar1 - 0x10),&local_10e8,local_a0,&local_10ec,
                   0);
  uVar4 = test_mem_eq("test/bftest.c",0x192,"cbc_in","cbc_data",local_98,iVar5,cbc_data,iVar5);
  if ((int)uVar4 != 0) {
    uVar4 = (ulong)(iVar2 != 0);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong test_bf_cbc(void)

{
  int iVar1;
  size_t sVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  BF_KEY local_10e8;
  uchar local_a0 [8];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined8 local_78;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  sVar2 = strlen(cbc_data);
  uVar3 = (ulong)((int)sVar2 + 1);
  BF_set_key(&local_10e8,0x10,&cbc_key);
  local_98 = (undefined1  [16])0x0;
  local_88 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  local_a0[0] = 0xfe;
  local_a0[1] = 0xdc;
  local_a0[2] = 0xba;
  local_a0[3] = 0x98;
  local_a0[4] = 'v';
  local_a0[5] = 'T';
  local_a0[6] = '2';
  local_a0[7] = '\x10';
  local_78 = 0;
  local_48 = 0;
  BF_cbc_encrypt((uchar *)cbc_data,local_68,uVar3,&local_10e8,local_a0,1);
  iVar1 = test_mem_eq("test/bftest.c",0x16d,"cbc_out","cbc_ok",local_68,0x20,&cbc_ok,0x20);
  local_a0[0] = 0xfe;
  local_a0[1] = 0xdc;
  local_a0[2] = 0xba;
  local_a0[3] = 0x98;
  local_a0[4] = 'v';
  local_a0[5] = 'T';
  local_a0[6] = '2';
  local_a0[7] = '\x10';
  BF_cbc_encrypt(local_68,local_98,uVar3,&local_10e8,local_a0,0);
  sVar2 = strlen(cbc_data);
  uVar3 = test_mem_eq("test/bftest.c",0x172,"cbc_in","cbc_data",local_98,uVar3,cbc_data,sVar2 + 1);
  if ((int)uVar3 != 0) {
    uVar3 = (ulong)(iVar1 != 0);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined1 * test_get_options(void)

{
  return test_options_0;
}



undefined8 setup_tests(void)

{
  undefined1 uVar1;
  char cVar2;
  dword *pdVar3;
  int iVar4;
  size_t sVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  NoteGnuProperty_4 *pNVar9;
  char *pcVar10;
  ulong uVar11;
  undefined1 *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined1 *puVar15;
  
  while( true ) {
    iVar4 = opt_next();
    if (iVar4 == 0) {
      add_all_tests("test_bf_ecb_raw",test_bf_ecb_raw,2,1);
      add_all_tests("test_bf_ecb",test_bf_ecb,0x22,1);
      add_all_tests("test_bf_set_key",0x100000,0x18,1);
      add_test("test_bf_cbc",test_bf_cbc);
      add_test("test_bf_cfb64",test_bf_cfb64);
      add_test("test_bf_ofb64",test_bf_ofb64);
      return 1;
    }
    if (iVar4 == 1) break;
    if (5 < iVar4 - 500U) {
      return 0;
    }
  }
  puVar14 = &DAT_00100fe8;
  puts("ecb test data");
  puVar13 = &DAT_00101108;
  puts("key bytes\t\tclear bytes\t\tcipher bytes");
  puVar12 = &DAT_00101228;
  do {
    puVar6 = puVar12 + -8;
    do {
      uVar1 = *puVar6;
      puVar6 = puVar6 + 1;
      __printf_chk(2,&_LC16,uVar1);
    } while (puVar6 != puVar12);
    puVar7 = puVar13 + -8;
    putchar(9);
    do {
      uVar1 = *puVar7;
      puVar7 = puVar7 + 1;
      __printf_chk(2,&_LC16,uVar1);
    } while (puVar7 != puVar13);
    putchar(9);
    puVar7 = puVar14 + -8;
    do {
      puVar8 = puVar7;
      __printf_chk(2,&_LC16,*puVar8);
      puVar7 = puVar8 + 1;
    } while (puVar8 + 1 != puVar14);
    puVar14 = puVar8 + 9;
    puVar13 = puVar13 + 8;
    puVar12 = puVar12 + 8;
    putchar(10);
  } while (puVar14 != &DAT_001010f8);
  puVar12 = &key_data;
  puts("set_key test data");
  __printf_chk(2,"data[8]= ");
  do {
    uVar1 = *puVar12;
    puVar12 = puVar12 + 1;
    __printf_chk(2,&_LC16,uVar1);
  } while (puVar12 != &key_test);
  puVar14 = &DAT_00100e48;
  putchar(10);
  puVar12 = &DAT_00100f11;
  do {
    __printf_chk(2,&_LC19);
    puVar13 = puVar14 + -8;
    do {
      uVar1 = *puVar13;
      puVar13 = puVar13 + 1;
      __printf_chk(2,&_LC16,uVar1);
    } while (puVar13 != puVar14);
    __printf_chk(2," k[%2u]=",(int)puVar12 + -0x100f10);
    puVar6 = &key_test;
    do {
      puVar15 = puVar6;
      __printf_chk(2,&_LC16,*puVar15);
      puVar6 = puVar15 + 1;
    } while (puVar15 + 1 != puVar12);
    puVar12 = puVar15 + 2;
    puVar14 = puVar14 + 8;
    putchar(10);
  } while (puVar12 != &DAT_00100f29);
  puVar12 = &cbc_key;
  puts("\nchaining mode test data");
  __printf_chk(2,"key[16]   = ");
  do {
    uVar1 = *puVar12;
    puVar12 = puVar12 + 1;
    __printf_chk(2,&_LC16,uVar1);
  } while (puVar12 != &cipher_data);
  __printf_chk(2,"\niv[8]     = ");
  pNVar9 = (NoteGnuProperty_4 *)&cbc_iv;
  do {
    pdVar3 = &pNVar9->namesz;
    pNVar9 = (NoteGnuProperty_4 *)((long)&pNVar9->namesz + 1);
    __printf_chk(2,&_LC16,(char)*pdVar3);
  } while (pNVar9 != &NoteGnuProperty_4_001017f8);
  sVar5 = strlen(cbc_data);
  __printf_chk(2,"\ndata[%d]  = \'%s\'",(int)sVar5 + 1,cbc_data);
  sVar5 = strlen(cbc_data);
  __printf_chk(2,"\ndata[%d]  = ",(int)sVar5 + 1);
  for (uVar11 = 0; sVar5 = strlen(cbc_data), uVar11 < sVar5 + 1; uVar11 = uVar11 + 1) {
    __printf_chk(2,&_LC16,(int)cbc_data[uVar11]);
  }
  pcVar10 = &cbc_ok;
  putchar(10);
  puts("cbc cipher text");
  __printf_chk(2,"cipher[%d]= ",0x20);
  do {
    cVar2 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    __printf_chk(2,&_LC16,cVar2);
  } while (pcVar10 != cbc_data);
  putchar(10);
  puts("cfb64 cipher text");
  sVar5 = strlen(cbc_data);
  __printf_chk(2,"cipher[%d]= ",(int)sVar5 + 1);
  for (uVar11 = 0; sVar5 = strlen(cbc_data), uVar11 < sVar5 + 1; uVar11 = uVar11 + 1) {
    __printf_chk(2,&_LC16,(&cfb64_ok)[uVar11]);
  }
  putchar(10);
  puts("ofb64 cipher text");
  sVar5 = strlen(cbc_data);
  __printf_chk(2,"cipher[%d]= ",(int)sVar5 + 1);
  for (uVar11 = 0; sVar5 = strlen(cbc_data), uVar11 < sVar5 + 1; uVar11 = uVar11 + 1) {
    __printf_chk(2,&_LC16,(&ofb64_ok)[uVar11]);
  }
  putchar(10);
  return 1;
}


